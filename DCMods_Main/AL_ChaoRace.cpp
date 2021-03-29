#include "stdafx.h"
#include "AL_RACE_Models.h"

static bool SkipSA1Entry = false;
static bool MedalTextLoaded = false;

NJS_TEXNAME textures_chaoracebg[1];
NJS_TEXLIST texlist_chaoracebg = { arrayptrandlength(textures_chaoracebg) };

NJS_OBJECT* ChaoRaceSlidingDoors = nullptr;
NJS_OBJECT* ChaoRaceStartMark1 = nullptr;
NJS_OBJECT* ChaoRaceStartMark2 = nullptr;
NJS_OBJECT* ChaoRaceLetters = nullptr;
NJS_OBJECT* ChaoRaceNumber0 = nullptr;
NJS_OBJECT* ChaoRaceNumber1 = nullptr;
NJS_OBJECT* ChaoRaceNumber2 = nullptr;
NJS_OBJECT* ChaoRaceNumber3 = nullptr;
NJS_OBJECT* ChaoRaceNumber4 = nullptr;
NJS_OBJECT* ChaoRaceNumber5 = nullptr;
NJS_OBJECT* ChaoRaceNumber6 = nullptr;
NJS_OBJECT* ChaoRaceNumber7 = nullptr;
NJS_OBJECT* ChaoRaceWaterfall1 = nullptr;
NJS_OBJECT* ChaoRaceWaterfall2 = nullptr;
NJS_OBJECT* ChaoRaceSkyboxBottom = nullptr;
NJS_OBJECT* ChaoRaceSkyboxMain = nullptr;
NJS_OBJECT* ChaoRaceCracker = nullptr;
NJS_OBJECT* ChaoRaceBall = nullptr;

DataPointer(char, ChaoRaceType, 0x3CD370A);
DataPointer(int, ChaoRaceOver, 0x3CD7714);
DataPointer(int, CrackersShouldFire, 0x3CD7710);
DataPointer(char, ChaoRaceBeginnerJewelParty, 0x3CD3709);
DataPointer(char, ChaclonNameFix1, 0x8890D0);
DataPointer(char, ChaclonNameFix2, 0x8890D8);
DataPointer(char, ChaclonNameFix3, 0x8890E0);
DataPointer(char, ChaclonNameFix4, 0x8890E8);
DataPointer(SecondaryEntrance, ECGardenStartPoint, 0x0339F8E8);
DataPointer(SecondaryEntrance, MRGardenReturnPoint, 0x0339F928);
DataPointer(SecondaryEntrance, SSGardenStartPoint, 0x0339F888);
DataArray(NJS_VECTOR, ChaoRaceStartPositions_PearlCourse, 0x8890F0, 8);
DataArray(NJS_VECTOR, ChaoRaceStartPositions_AmethystCourse, 0x889150, 8);
DataArray(NJS_VECTOR, ChaoRaceStartPositions_SapphireCourse, 0x8891B0, 8);
DataArray(NJS_VECTOR, ChaoRaceStartPositions_RubyCourse, 0x889210, 8);
DataArray(NJS_VECTOR, ChaoRaceStartPositions_EmeraldCourse, 0x889270, 8);
DataArray(NJS_OBJECT, ChaoMedalModels, 0x888FF0, 6);
static bool c1 = false;
static bool h1 = false;
static bool a1 = false;
static bool o1 = false;
static bool r2 = false;
static bool a2 = false;
static bool c2 = false;
static bool e2 = false;
static float bowchaoframe = 0;
static unsigned int letterframe = 0;
static int bowchaoanim = 0;
static bool cheerchaoanim = false;
static int ChaoRaceStartGoalTimer = 0;
static int ChaoRaceNameCounter = 0;
static float RedArrowX = 0;
static float RedArrowY = 0;
static float RedArrowZ = 0;
static int ChaoRaceTimer = 0;
static bool ChaoRaceEnded = false;

FunctionPointer(void, sub_7197E0, (ObjectMaster *a1), 0x7197E0);
FunctionPointer(void, sub_7197C0, (ObjectMaster *a1), 0x7197C0);
FunctionPointer(void, sub_72A750, (), 0x72A750);
FunctionPointer(void, sub_72A570, (), 0x72A570);
FunctionPointer(void, sub_724E60, (), 0x724E60);
FunctionPointer(void, sub_722500, (), 0x722500);
FunctionPointer(int, sub_79E400, (int ID, int a2, NJS_VECTOR *a3), 0x79E400);
FunctionPointer(void, sub_715700, (int a1), 0x715700);
FunctionPointer(void, SetChaoLandTableX, (LandTable *geo), 0x43A4C0);
FunctionPointer(void, sub_751D70, (int a1, NJS_VECTOR *a2), 0x751D70);

static NJS_VECTOR racebutton{ 2020, 0, -0.68f };

static NJS_TEXANIM ChaoFukidasiTexanim = { 64, 16, 32, 8, 0, 0, 0x0FF, 0x0FF, 1, 0 };
static NJS_SPRITE ChaoFukidasiSprite = { {0, 7.5f, 0.0f }, 0.12f, 0.12f, 0, &CHAO_HYOUJI_TEXLIST, &ChaoFukidasiTexanim };

static NJS_TEXANIM ChaoNameLettersTexanim[] = {
	{ 22, 22, 0, 0, 0, 0, 11, 22, 1, 0 },
{ 22, 22, 0, 0, 11, 0, 22, 22, 1, 0 },
{ 22, 22, 0, 0, 22, 0, 33, 22, 1, 0 },
{ 22, 22, 0, 0, 33, 0, 44, 22, 1, 0 },
{ 22, 22, 0, 0, 44, 0, 55, 22, 1, 0 },
{ 22, 22, 0, 0, 55, 0, 66, 22, 1, 0 },
{ 22, 22, 0, 0, 66, 0, 77, 22, 1, 0 },
{ 22, 22, 0, 0, 77, 0, 88, 22, 1, 0 },
{ 22, 22, 0, 0, 88, 0, 99, 22, 1, 0 },
{ 22, 22, 0, 0, 99, 0, 110, 22, 1, 0 },
{ 22, 22, 0, 0, 110, 0, 121, 22, 1, 0 },
{ 22, 22, 0, 0, 121, 0, 132, 22, 1, 0 },
{ 22, 22, 0, 0, 132, 0, 143, 22, 1, 0 },
{ 22, 22, 0, 0, 143, 0, 154, 22, 1, 0 },
{ 22, 22, 0, 0, 154, 0, 165, 22, 1, 0 },
{ 22, 22, 0, 0, 165, 0, 176, 22, 1, 0 },
{ 22, 22, 0, 0, 176, 0, 187, 22, 1, 0 },
{ 22, 22, 0, 0, 187, 0, 198, 22, 1, 0 },
{ 22, 22, 0, 0, 198, 0, 209, 22, 1, 0 },
{ 22, 22, 0, 0, 209, 0, 220, 22, 1, 0 },
{ 22, 22, 0, 0, 220, 0, 231, 22, 1, 0 },
{ 22, 22, 0, 0, 231, 0, 242, 22, 1, 0 },
{ 22, 22, 0, 0, 242, 0, 253, 22, 1, 0 },
{ 22, 22, 0, 0, 0, 22, 11, 44, 1, 0 },
{ 22, 22, 0, 0, 11, 22, 22, 44, 1, 0 },
{ 22, 22, 0, 0, 22, 22, 33, 44, 1, 0 },
{ 22, 22, 0, 0, 33, 22, 44, 44, 1, 0 },
{ 22, 22, 0, 0, 44, 22, 55, 44, 1, 0 },
{ 22, 22, 0, 0, 55, 22, 66, 44, 1, 0 },
{ 22, 22, 0, 0, 66, 22, 77, 44, 1, 0 },
{ 22, 22, 0, 0, 77, 22, 88, 44, 1, 0 },
{ 22, 22, 0, 0, 88, 22, 99, 44, 1, 0 },
{ 22, 22, 0, 0, 99, 22, 110, 44, 1, 0 },
{ 22, 22, 0, 0, 110, 22, 121, 44, 1, 0 },
{ 22, 22, 0, 0, 121, 22, 132, 44, 1, 0 },
{ 22, 22, 0, 0, 132, 22, 143, 44, 1, 0 },
{ 22, 22, 0, 0, 143, 22, 154, 44, 1, 0 },
{ 22, 22, 0, 0, 154, 22, 165, 44, 1, 0 },
{ 22, 22, 0, 0, 165, 22, 176, 44, 1, 0 },
{ 22, 22, 0, 0, 176, 22, 187, 44, 1, 0 },
{ 22, 22, 0, 0, 187, 22, 198, 44, 1, 0 },
{ 22, 22, 0, 0, 198, 22, 209, 44, 1, 0 },
{ 22, 22, 0, 0, 209, 22, 220, 44, 1, 0 },
{ 22, 22, 0, 0, 220, 22, 231, 44, 1, 0 },
{ 22, 22, 0, 0, 231, 22, 242, 44, 1, 0 },
{ 22, 22, 0, 0, 242, 22, 253, 44, 1, 0 },
{ 22, 22, 0, 0, 0, 44, 11, 66, 1, 0 },
{ 22, 22, 0, 0, 11, 44, 22, 66, 1, 0 },
{ 22, 22, 0, 0, 22, 44, 33, 66, 1, 0 },
{ 22, 22, 0, 0, 33, 44, 44, 66, 1, 0 },
{ 22, 22, 0, 0, 44, 44, 55, 66, 1, 0 },
{ 22, 22, 0, 0, 55, 44, 66, 66, 1, 0 },
{ 22, 22, 0, 0, 66, 44, 77, 66, 1, 0 },
{ 22, 22, 0, 0, 77, 44, 88, 66, 1, 0 },
{ 22, 22, 0, 0, 88, 44, 99, 66, 1, 0 },
{ 22, 22, 0, 0, 99, 44, 110, 66, 1, 0 },
{ 22, 22, 0, 0, 110, 44, 121, 66, 1, 0 },
{ 22, 22, 0, 0, 121, 44, 132, 66, 1, 0 },
{ 22, 22, 0, 0, 132, 44, 143, 66, 1, 0 },
{ 22, 22, 0, 0, 143, 44, 154, 66, 1, 0 },
{ 22, 22, 0, 0, 154, 44, 165, 66, 1, 0 },
{ 22, 22, 0, 0, 165, 44, 176, 66, 1, 0 },
{ 22, 22, 0, 0, 176, 44, 187, 66, 1, 0 },
{ 22, 22, 0, 0, 187, 44, 198, 66, 1, 0 },
{ 22, 22, 0, 0, 198, 44, 209, 66, 1, 0 },
{ 22, 22, 0, 0, 209, 44, 220, 66, 1, 0 },
{ 22, 22, 0, 0, 220, 44, 231, 66, 1, 0 },
{ 22, 22, 0, 0, 231, 44, 242, 66, 1, 0 },
{ 22, 22, 0, 0, 242, 44, 253, 66, 1, 0 },
{ 22, 22, 0, 0, 0, 66, 11, 88, 1, 0 },
{ 22, 22, 0, 0, 11, 66, 22, 88, 1, 0 },
{ 22, 22, 0, 0, 22, 66, 33, 88, 1, 0 },
{ 22, 22, 0, 0, 33, 66, 44, 88, 1, 0 },
{ 22, 22, 0, 0, 44, 66, 55, 88, 1, 0 },
{ 22, 22, 0, 0, 55, 66, 66, 88, 1, 0 },
{ 22, 22, 0, 0, 66, 66, 77, 88, 1, 0 },
{ 22, 22, 0, 0, 77, 66, 88, 88, 1, 0 },
{ 22, 22, 0, 0, 88, 66, 99, 88, 1, 0 },
{ 22, 22, 0, 0, 99, 66, 110, 88, 1, 0 },
{ 22, 22, 0, 0, 110, 66, 121, 88, 1, 0 },
{ 22, 22, 0, 0, 121, 66, 132, 88, 1, 0 },
{ 22, 22, 0, 0, 132, 66, 143, 88, 1, 0 },
{ 22, 22, 0, 0, 143, 66, 154, 88, 1, 0 },
{ 22, 22, 0, 0, 154, 66, 165, 88, 1, 0 },
{ 22, 22, 0, 0, 165, 66, 176, 88, 1, 0 },
{ 22, 22, 0, 0, 176, 66, 187, 88, 1, 0 },
{ 22, 22, 0, 0, 187, 66, 198, 88, 1, 0 },
{ 22, 22, 0, 0, 198, 66, 209, 88, 1, 0 },
{ 22, 22, 0, 0, 209, 66, 220, 88, 1, 0 },
{ 22, 22, 0, 0, 220, 66, 231, 88, 1, 0 },
{ 22, 22, 0, 0, 231, 66, 242, 88, 1, 0 },
{ 22, 22, 0, 0, 242, 66, 253, 88, 1, 0 },
{ 22, 22, 0, 0, 0, 88, 11, 110, 1, 0 },
{ 22, 22, 0, 0, 11, 88, 22, 110, 1, 0 },
{ 22, 22, 0, 0, 22, 88, 33, 110, 1, 0 },
{ 22, 22, 0, 0, 33, 88, 44, 110, 1, 0 },
{ 22, 22, 0, 0, 44, 88, 55, 110, 1, 0 },
{ 22, 22, 0, 0, 55, 88, 66, 110, 1, 0 },
{ 22, 22, 0, 0, 66, 88, 77, 110, 1, 0 },
{ 22, 22, 0, 0, 77, 88, 88, 110, 1, 0 },
{ 22, 22, 0, 0, 88, 88, 99, 110, 1, 0 },
{ 22, 22, 0, 0, 99, 88, 110, 110, 1, 0 },
{ 22, 22, 0, 0, 110, 88, 121, 110, 1, 0 },
{ 22, 22, 0, 0, 121, 88, 132, 110, 1, 0 },
{ 22, 22, 0, 0, 132, 88, 143, 110, 1, 0 },
{ 22, 22, 0, 0, 143, 88, 154, 110, 1, 0 },
{ 22, 22, 0, 0, 154, 88, 165, 110, 1, 0 },
{ 22, 22, 0, 0, 165, 88, 176, 110, 1, 0 },
{ 22, 22, 0, 0, 176, 88, 187, 110, 1, 0 },
{ 22, 22, 0, 0, 187, 88, 198, 110, 1, 0 },
{ 22, 22, 0, 0, 198, 88, 209, 110, 1, 0 },
{ 22, 22, 0, 0, 209, 88, 220, 110, 1, 0 },
{ 22, 22, 0, 0, 220, 88, 231, 110, 1, 0 },
{ 22, 22, 0, 0, 231, 88, 242, 110, 1, 0 },
{ 22, 22, 0, 0, 242, 88, 253, 110, 1, 0 },
{ 22, 22, 0, 0, 0, 110, 11, 132, 1, 0 },
{ 22, 22, 0, 0, 11, 110, 22, 132, 1, 0 },
{ 22, 22, 0, 0, 22, 110, 33, 132, 1, 0 },
{ 22, 22, 0, 0, 33, 110, 44, 132, 1, 0 },
{ 22, 22, 0, 0, 44, 110, 55, 132, 1, 0 },
{ 22, 22, 0, 0, 55, 110, 66, 132, 1, 0 },
{ 22, 22, 0, 0, 66, 110, 77, 132, 1, 0 },
{ 22, 22, 0, 0, 77, 110, 88, 132, 1, 0 },
{ 22, 22, 0, 0, 88, 110, 99, 132, 1, 0 },
{ 22, 22, 0, 0, 99, 110, 110, 132, 1, 0 },
{ 22, 22, 0, 0, 110, 110, 121, 132, 1, 0 },
{ 22, 22, 0, 0, 121, 110, 132, 132, 1, 0 },
{ 22, 22, 0, 0, 132, 110, 143, 132, 1, 0 },
{ 22, 22, 0, 0, 143, 110, 154, 132, 1, 0 },
{ 22, 22, 0, 0, 154, 110, 165, 132, 1, 0 },
{ 22, 22, 0, 0, 165, 110, 176, 132, 1, 0 },
{ 22, 22, 0, 0, 176, 110, 187, 132, 1, 0 },
{ 22, 22, 0, 0, 187, 110, 198, 132, 1, 0 },
{ 22, 22, 0, 0, 198, 110, 209, 132, 1, 0 },
{ 22, 22, 0, 0, 209, 110, 220, 132, 1, 0 },
{ 22, 22, 0, 0, 220, 110, 231, 132, 1, 0 },
{ 22, 22, 0, 0, 231, 110, 242, 132, 1, 0 },
{ 22, 22, 0, 0, 242, 110, 253, 132, 1, 0 },
{ 22, 22, 0, 0, 0, 132, 11, 154, 1, 0 },
{ 22, 22, 0, 0, 11, 132, 22, 154, 1, 0 },
{ 22, 22, 0, 0, 22, 132, 33, 154, 1, 0 },
{ 22, 22, 0, 0, 33, 132, 44, 154, 1, 0 },
{ 22, 22, 0, 0, 44, 132, 55, 154, 1, 0 },
{ 22, 22, 0, 0, 55, 132, 66, 154, 1, 0 },
{ 22, 22, 0, 0, 66, 132, 77, 154, 1, 0 },
{ 22, 22, 0, 0, 77, 132, 88, 154, 1, 0 },
{ 22, 22, 0, 0, 88, 132, 99, 154, 1, 0 },
{ 22, 22, 0, 0, 99, 132, 110, 154, 1, 0 },
{ 22, 22, 0, 0, 110, 132, 121, 154, 1, 0 },
{ 22, 22, 0, 0, 121, 132, 132, 154, 1, 0 },
{ 22, 22, 0, 0, 132, 132, 143, 154, 1, 0 },
{ 22, 22, 0, 0, 143, 132, 154, 154, 1, 0 },
{ 22, 22, 0, 0, 154, 132, 165, 154, 1, 0 },
{ 22, 22, 0, 0, 165, 132, 176, 154, 1, 0 },
{ 22, 22, 0, 0, 176, 132, 187, 154, 1, 0 },
{ 22, 22, 0, 0, 187, 132, 198, 154, 1, 0 },
{ 22, 22, 0, 0, 198, 132, 209, 154, 1, 0 },
{ 22, 22, 0, 0, 209, 132, 220, 154, 1, 0 },
{ 22, 22, 0, 0, 220, 132, 231, 154, 1, 0 },
{ 22, 22, 0, 0, 231, 132, 242, 154, 1, 0 },
{ 22, 22, 0, 0, 242, 132, 253, 154, 1, 0 },
{ 22, 22, 0, 0, 0, 154, 11, 176, 1, 0 },
{ 22, 22, 0, 0, 11, 154, 22, 176, 1, 0 },
{ 22, 22, 0, 0, 22, 154, 33, 176, 1, 0 },
{ 22, 22, 0, 0, 33, 154, 44, 176, 1, 0 },
{ 22, 22, 0, 0, 44, 154, 55, 176, 1, 0 },
{ 22, 22, 0, 0, 55, 154, 66, 176, 1, 0 },
{ 22, 22, 0, 0, 66, 154, 77, 176, 1, 0 },
{ 22, 22, 0, 0, 77, 154, 88, 176, 1, 0 },
{ 22, 22, 0, 0, 88, 154, 99, 176, 1, 0 },
{ 22, 22, 0, 0, 99, 154, 110, 176, 1, 0 },
{ 22, 22, 0, 0, 110, 154, 121, 176, 1, 0 },
{ 22, 22, 0, 0, 121, 154, 132, 176, 1, 0 },
{ 22, 22, 0, 0, 132, 154, 143, 176, 1, 0 },
{ 22, 22, 0, 0, 143, 154, 154, 176, 1, 0 },
{ 22, 22, 0, 0, 154, 154, 165, 176, 1, 0 },
{ 22, 22, 0, 0, 165, 154, 176, 176, 1, 0 },
{ 22, 22, 0, 0, 176, 154, 187, 176, 1, 0 },
{ 22, 22, 0, 0, 187, 154, 198, 176, 1, 0 },
{ 22, 22, 0, 0, 198, 154, 209, 176, 1, 0 },
{ 22, 22, 0, 0, 209, 154, 220, 176, 1, 0 },
{ 22, 22, 0, 0, 220, 154, 231, 176, 1, 0 },
{ 22, 22, 0, 0, 231, 154, 242, 176, 1, 0 },
{ 22, 22, 0, 0, 242, 154, 253, 176, 1, 0 },
{ 22, 22, 0, 0, 0, 176, 11, 198, 1, 0 },
{ 22, 22, 0, 0, 11, 176, 22, 198, 1, 0 },
{ 22, 22, 0, 0, 22, 176, 33, 198, 1, 0 },
{ 22, 22, 0, 0, 33, 176, 44, 198, 1, 0 },
{ 22, 22, 0, 0, 44, 176, 55, 198, 1, 0 },
{ 22, 22, 0, 0, 55, 176, 66, 198, 1, 0 },
{ 22, 22, 0, 0, 66, 176, 77, 198, 1, 0 },
{ 22, 22, 0, 0, 77, 176, 88, 198, 1, 0 },
{ 22, 22, 0, 0, 88, 176, 99, 198, 1, 0 },
{ 22, 22, 0, 0, 99, 176, 110, 198, 1, 0 },
{ 22, 22, 0, 0, 110, 176, 121, 198, 1, 0 },
{ 22, 22, 0, 0, 121, 176, 132, 198, 1, 0 },
{ 22, 22, 0, 0, 132, 176, 143, 198, 1, 0 },
{ 22, 22, 0, 0, 143, 176, 154, 198, 1, 0 },
{ 22, 22, 0, 0, 154, 176, 165, 198, 1, 0 },
{ 22, 22, 0, 0, 165, 176, 176, 198, 1, 0 },
{ 22, 22, 0, 0, 176, 176, 187, 198, 1, 0 },
{ 22, 22, 0, 0, 187, 176, 198, 198, 1, 0 },
{ 22, 22, 0, 0, 198, 176, 209, 198, 1, 0 },
{ 22, 22, 0, 0, 209, 176, 220, 198, 1, 0 },
{ 22, 22, 0, 0, 220, 176, 231, 198, 1, 0 },
{ 22, 22, 0, 0, 231, 176, 242, 198, 1, 0 },
{ 22, 22, 0, 0, 242, 176, 253, 198, 1, 0 },
{ 22, 22, 0, 0, 0, 198, 11, 220, 1, 0 },
{ 22, 22, 0, 0, 11, 198, 22, 220, 1, 0 },
{ 22, 22, 0, 0, 22, 198, 33, 220, 1, 0 },
{ 22, 22, 0, 0, 33, 198, 44, 220, 1, 0 },
{ 22, 22, 0, 0, 44, 198, 55, 220, 1, 0 },
{ 22, 22, 0, 0, 55, 198, 66, 220, 1, 0 },
{ 22, 22, 0, 0, 66, 198, 77, 220, 1, 0 },
{ 22, 22, 0, 0, 77, 198, 88, 220, 1, 0 },
{ 22, 22, 0, 0, 88, 198, 99, 220, 1, 0 },
{ 22, 22, 0, 0, 99, 198, 110, 220, 1, 0 },
{ 22, 22, 0, 0, 110, 198, 121, 220, 1, 0 },
{ 22, 22, 0, 0, 121, 198, 132, 220, 1, 0 },
{ 22, 22, 0, 0, 132, 198, 143, 220, 1, 0 },
{ 22, 22, 0, 0, 143, 198, 154, 220, 1, 0 },
{ 22, 22, 0, 0, 154, 198, 165, 220, 1, 0 },
{ 22, 22, 0, 0, 165, 198, 176, 220, 1, 0 },
{ 22, 22, 0, 0, 176, 198, 187, 220, 1, 0 },
{ 22, 22, 0, 0, 187, 198, 198, 220, 1, 0 },
{ 22, 22, 0, 0, 198, 198, 209, 220, 1, 0 },
{ 22, 22, 0, 0, 209, 198, 220, 220, 1, 0 },
{ 22, 22, 0, 0, 220, 198, 231, 220, 1, 0 },
{ 22, 22, 0, 0, 231, 198, 242, 220, 1, 0 },
{ 22, 22, 0, 0, 242, 198, 253, 220, 1, 0 },
{ 22, 22, 0, 0, 0, 220, 11, 242, 1, 0 },
{ 22, 22, 0, 0, 11, 220, 22, 242, 1, 0 },
{ 22, 22, 0, 0, 22, 220, 33, 242, 1, 0 },
{ 22, 22, 0, 0, 33, 220, 44, 242, 1, 0 },
{ 22, 22, 0, 0, 44, 220, 55, 242, 1, 0 },
{ 22, 22, 0, 0, 55, 220, 66, 242, 1, 0 },
{ 22, 22, 0, 0, 66, 220, 77, 242, 1, 0 },
{ 22, 22, 0, 0, 77, 220, 88, 242, 1, 0 },
{ 22, 22, 0, 0, 88, 220, 99, 242, 1, 0 },
{ 22, 22, 0, 0, 99, 220, 110, 242, 1, 0 },
{ 22, 22, 0, 0, 110, 220, 121, 242, 1, 0 },
{ 22, 22, 0, 0, 121, 220, 132, 242, 1, 0 },
{ 22, 22, 0, 0, 132, 220, 143, 242, 1, 0 },
{ 22, 22, 0, 0, 143, 220, 154, 242, 1, 0 },
{ 22, 22, 0, 0, 154, 220, 165, 242, 1, 0 },
{ 22, 22, 0, 0, 165, 220, 176, 242, 1, 0 },
{ 22, 22, 0, 0, 176, 220, 187, 242, 1, 0 },
{ 22, 22, 0, 0, 187, 220, 198, 242, 1, 0 },
{ 22, 22, 0, 0, 198, 220, 209, 242, 1, 0 },
{ 22, 22, 0, 0, 209, 220, 220, 242, 1, 0 },
{ 22, 22, 0, 0, 220, 220, 231, 242, 1, 0 },
{ 22, 22, 0, 0, 231, 220, 242, 242, 1, 0 },
{ 22, 22, 0, 0, 242, 220, 253, 242, 1, 0 },
{ 22, 22, 0, 0, 0, 242, 11, 264, 1, 0 },
{ 22, 22, 0, 0, 11, 242, 22, 264, 1, 0 },
{ 22, 22, 0, 0, 22, 242, 33, 264, 1, 0 },
{ 22, 22, 0, 0, 33, 242, 44, 264, 1, 0 },
{ 22, 22, 0, 0, 44, 242, 55, 264, 1, 0 },
{ 22, 22, 0, 0, 55, 242, 66, 264, 1, 0 },
{ 22, 22, 0, 0, 66, 242, 77, 264, 1, 0 },
{ 22, 22, 0, 0, 77, 242, 88, 264, 1, 0 },
{ 22, 22, 0, 0, 88, 242, 99, 264, 1, 0 },
{ 22, 22, 0, 0, 99, 242, 110, 264, 1, 0 },
{ 22, 22, 0, 0, 110, 242, 121, 264, 1, 0 },
{ 22, 22, 0, 0, 121, 242, 132, 264, 1, 0 },
{ 22, 22, 0, 0, 132, 242, 143, 264, 1, 0 },
{ 22, 22, 0, 0, 143, 242, 154, 264, 1, 0 },
{ 22, 22, 0, 0, 154, 242, 165, 264, 1, 0 },
{ 22, 22, 0, 0, 165, 242, 176, 264, 1, 0 },
{ 22, 22, 0, 0, 176, 242, 187, 264, 1, 0 },
{ 22, 22, 0, 0, 187, 242, 198, 264, 1, 0 },
{ 22, 22, 0, 0, 198, 242, 209, 264, 1, 0 },
{ 22, 22, 0, 0, 209, 242, 220, 264, 1, 0 },
{ 22, 22, 0, 0, 220, 242, 231, 264, 1, 0 },
{ 22, 22, 0, 0, 231, 242, 242, 264, 1, 0 },
{ 22, 22, 0, 0, 242, 242, 253, 264, 1, 0 },
};

// Chao nameplate stuff
void BuildChaoFontUVMap()
{
	int numrows = 16;
	int numcolumns = 16;
	int xrow = 0;
	do
	{
		for (int xcolumn = 0; xcolumn < numcolumns; xcolumn++)
		{
			//ChaoNameLettersTexanim[xrow*numcolumns + xcolumn].u1 = 11 * xcolumn;
			//ChaoNameLettersTexanim[xrow*numcolumns + xcolumn].u2 = 11 * xcolumn + 11; // This is half the real number because the texture is rectangular
			//ChaoNameLettersTexanim[xrow*numcolumns + xcolumn].v1 = 22 * xrow;
			//ChaoNameLettersTexanim[xrow*numcolumns + xcolumn].v2 = 22 * xrow + 22;
			PrintDebug("{ 64, 64, 0, 0, %d, %d, %d, %d, 61, 0 },\n", -1 + 16 * xcolumn, -1 + 16 * xrow, -1 + 16 * xcolumn + 16, -1 + 16 * xrow + 16);
		}
		xrow++;
	} while (xrow < numrows);
	/* Old stuff
	int numrows = 12;
	int numcolumns = 23;
	int xrow = 0;
	do
	{
		for (int xcolumn = 0; xcolumn < numcolumns; xcolumn++)
		{
			ChaoNameLettersTexanim[xrow*numcolumns + xcolumn].u1 = 11 * xcolumn;
			ChaoNameLettersTexanim[xrow*numcolumns + xcolumn].u2 = 11 * xcolumn + 11; // This is half the real number because the texture is rectangular
			ChaoNameLettersTexanim[xrow*numcolumns + xcolumn].v1 = 22 * xrow;
			ChaoNameLettersTexanim[xrow*numcolumns + xcolumn].v2 = 22 * xrow + 22;
			PrintDebug("{ 22, 22, 0, 0, %d, %d, %d, %d, 1, 0 },\n", 11 * xcolumn, 22 * xrow, 11 * xcolumn + 11, 22 * xrow + 22);
		}
		xrow++;
	} while (xrow < numrows);
		*/
}

void ChaoFukidasi_Display(ObjectMaster* a1)
{
	//float LetterSpriteDepth = 32000.0f;
	int ChaoNameCurrentCharacter = 0;
	int ChaoNameNumSpaces = 0;
	ChaoData1* data1 = (ChaoData1*)a1->Data1;
	// Subtract the internal timer
	if (data1->entity.CharIndex)
	{
		if (data1->entity.CharID > 0) data1->entity.CharID--;
		if (data1->entity.CharID < 0) data1->entity.CharID = 0;
	}
	else
	{
		data1->entity.CharID = 0;
	}
	// Display the bubble
	if (((data1->entity.CharIndex == 1 && data1->entity.CharID > 0) || data1->entity.CharIndex == 2) && data1->ChaoDataBase_ptr->Name[0] != 0x00)
	{
		NJS_VECTOR ChatBubblePosition = { a1->Data1->Position.x, a1->Data1->Position.y, a1->Data1->Position.z };
		NJS_SPRITE ChaoNameLetterSprite;
		ChaoNameLetterSprite.tlist = &ChaoTexLists[1];
		ChaoNameLetterSprite.p.x = 0;
		ChaoNameLetterSprite.p.y = ChaoFukidasiSprite.p.y - 0.35f;
		ChaoNameLetterSprite.p.z = ChaoFukidasiSprite.p.z + 0.05f;
		ChaoNameLetterSprite.sx = 0.04f;
		ChaoNameLetterSprite.sy = 0.04f;
		ChaoNameLetterSprite.tanim = ChaoNameLettersTexanim;
		// Calculate the number of spaces for centering the name
		for (int i = 0; i < 7; i++)
		{
			ChaoNameCurrentCharacter = data1->ChaoDataBase_ptr->Name[i];
			if (ChaoNameCurrentCharacter == 0x5F) ChaoNameNumSpaces++;
		}
		// Draw the letters
		for (int i = 0; i < 7; i++)
		{
			njPushMatrix(0);
			njTranslateV(0, &ChatBubblePosition);
			ChaoNameLetterSprite.p.x = -3.4f + i * 1.0f + ChaoNameNumSpaces * 0.5f;
			njRotateXYZ(0, Camera_Data1->Rotation.x, Camera_Data1->Rotation.y, 0);
			ChaoNameCurrentCharacter = data1->ChaoDataBase_ptr->Name[i];
			// Set letter color (blue for CPU, black for player's Chao)
			if (data1->entity.Index == 7) SetMaterialAndSpriteColor_Float(1.0f, 0.2f, 0.2f, 0.2f); else SetMaterialAndSpriteColor_Float(1.0f, 0.0f, 0.0f, 0.9f);
			// Draw space
			if (ChaoNameCurrentCharacter == 0x5F || ChaoNameCurrentCharacter == 0x00) njDrawSprite3D_Queue(&ChaoNameLetterSprite, 254, NJD_SPRITE_ALPHA | NJD_SPRITE_VFLIP, QueuedModelFlagsB_EnableZWrite);
			// Draw all letters before space (because SADX is retarded)
			else if (ChaoNameCurrentCharacter < 0) njDrawSprite3D_Queue(&ChaoNameLetterSprite, 254 + ChaoNameCurrentCharacter, NJD_SPRITE_ALPHA | NJD_SPRITE_COLOR | NJD_SPRITE_VFLIP, QueuedModelFlagsB_EnableZWrite);
			else njDrawSprite3D_Queue(&ChaoNameLetterSprite, ChaoNameCurrentCharacter - 1, NJD_SPRITE_ALPHA | NJD_SPRITE_COLOR | NJD_SPRITE_VFLIP, QueuedModelFlagsB_EnableZWrite);
			Sprite3DDepth_Current = 0.0f;
			njPopMatrix(1u);
			ClampGlobalColorThing_Thing();
		}
		// Draw the chat bubble
		SetMaterialAndSpriteColor_Float(1.0f, 1.0f, 1.0f, 1.0f);
		njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
		njPushMatrix(0);
		njTranslateV(0, &ChatBubblePosition);
		njRotateXYZ(0, Camera_Data1->Rotation.x, Camera_Data1->Rotation.y, 0);
		njDrawSprite3D_Queue(&ChaoFukidasiSprite, 0, NJD_SPRITE_ALPHA | NJD_SPRITE_VFLIP, QueuedModelFlagsB_EnableZWrite);
		njPopMatrix(1u);
		ClampGlobalColorThing_Thing();
	}
}

void __cdecl GenerateRaceChaoName(ObjectMaster *a1)
{
	ChaoData1* data1 = (ChaoData1*)a1->Data1;
	// Assign a name if the Chao doesn't have one
	if (data1->ChaoDataBase_ptr->Name[0] == 0)
	{
		if (data1->ChaoDataBase_ptr->Type == ChaoType_Child)
		{
			data1->ChaoDataBase_ptr->Name[0] = ChaoNames_Child[ChaoRaceNameCounter].n1;
			data1->ChaoDataBase_ptr->Name[1] = ChaoNames_Child[ChaoRaceNameCounter].n2;
			data1->ChaoDataBase_ptr->Name[2] = ChaoNames_Child[ChaoRaceNameCounter].n3;
			data1->ChaoDataBase_ptr->Name[3] = ChaoNames_Child[ChaoRaceNameCounter].n4;
			data1->ChaoDataBase_ptr->Name[4] = ChaoNames_Child[ChaoRaceNameCounter].n5;
			data1->ChaoDataBase_ptr->Name[5] = ChaoNames_Child[ChaoRaceNameCounter].n6;
			data1->ChaoDataBase_ptr->Name[6] = ChaoNames_Child[ChaoRaceNameCounter].n7;
		}
		else
		{
			if (data1->ChaoDataBase_ptr->Texture == SADXTexture_WhiteJewel)
			{
				data1->ChaoDataBase_ptr->Name[0] = ChaoNames_Silver[ChaoRaceNameCounter].n1;
				data1->ChaoDataBase_ptr->Name[1] = ChaoNames_Silver[ChaoRaceNameCounter].n2;
				data1->ChaoDataBase_ptr->Name[2] = ChaoNames_Silver[ChaoRaceNameCounter].n3;
				data1->ChaoDataBase_ptr->Name[3] = ChaoNames_Silver[ChaoRaceNameCounter].n4;
				data1->ChaoDataBase_ptr->Name[4] = ChaoNames_Silver[ChaoRaceNameCounter].n5;
				data1->ChaoDataBase_ptr->Name[5] = ChaoNames_Silver[ChaoRaceNameCounter].n6;
				data1->ChaoDataBase_ptr->Name[6] = ChaoNames_Silver[ChaoRaceNameCounter].n7;
			}
			else if (data1->ChaoDataBase_ptr->Texture == SADXTexture_YellowJewel)
			{
				data1->ChaoDataBase_ptr->Name[0] = ChaoNames_Gold[ChaoRaceNameCounter].n1;
				data1->ChaoDataBase_ptr->Name[1] = ChaoNames_Gold[ChaoRaceNameCounter].n2;
				data1->ChaoDataBase_ptr->Name[2] = ChaoNames_Gold[ChaoRaceNameCounter].n3;
				data1->ChaoDataBase_ptr->Name[3] = ChaoNames_Gold[ChaoRaceNameCounter].n4;
				data1->ChaoDataBase_ptr->Name[4] = ChaoNames_Gold[ChaoRaceNameCounter].n5;
				data1->ChaoDataBase_ptr->Name[5] = ChaoNames_Gold[ChaoRaceNameCounter].n6;
				data1->ChaoDataBase_ptr->Name[6] = ChaoNames_Gold[ChaoRaceNameCounter].n7;
			}
			else
			{
				data1->ChaoDataBase_ptr->Name[0] = ChaoNames_Adult[ChaoRaceNameCounter].n1;
				data1->ChaoDataBase_ptr->Name[1] = ChaoNames_Adult[ChaoRaceNameCounter].n2;
				data1->ChaoDataBase_ptr->Name[2] = ChaoNames_Adult[ChaoRaceNameCounter].n3;
				data1->ChaoDataBase_ptr->Name[3] = ChaoNames_Adult[ChaoRaceNameCounter].n4;
				data1->ChaoDataBase_ptr->Name[4] = ChaoNames_Adult[ChaoRaceNameCounter].n5;
				data1->ChaoDataBase_ptr->Name[5] = ChaoNames_Adult[ChaoRaceNameCounter].n6;
				data1->ChaoDataBase_ptr->Name[6] = ChaoNames_Adult[ChaoRaceNameCounter].n7;
			}
		}
		ChaoRaceNameCounter++;
	}
}

static Trampoline* Chao_Display_t = nullptr;
static void __cdecl Chao_Display_r(ObjectMaster *a1)
{
	const auto original = TARGET_DYNAMIC(Chao_Display);
	if (nullsub_Chao != 0x90u)
	{
		ChaoData1* data1 = (ChaoData1*)a1->Data1;
		int ChaoAnimationWhatever = data1->MotionTable[4];
		// All this stuff should only happen during Chao Race
		if (CurrentChaoStage == SADXChaoStage_Race)
		{
			// Generate Chao name if it's not on the first track (which would be the player's Chao)
			if (ChaoRaceTimer < 50)
			{
				if (a1->Data1->Index != 7) GenerateRaceChaoName(a1);
			}
			float ChaoX = data1->entity.Position.x;
			float ChaoY = data1->entity.Position.y;
			float ChaoZ = data1->entity.Position.z;
			float CameraX = Camera_Data1->Position.x;
			float CameraY = Camera_Data1->Position.y;
			float CameraZ = Camera_Data1->Position.z;
			float x_c = CameraX - ChaoX;
			float y_c = CameraY - ChaoY;
			float z_c = CameraZ - ChaoZ;
			float x_a = RedArrowX - ChaoX;
			float y_a = RedArrowY - ChaoY;
			float z_a = RedArrowZ - ChaoZ;
			float dist_cam = sqrt(x_c * x_c + y_c * y_c + z_c * z_c);
			float dist_arrow = sqrt(x_a * x_a + y_a * y_a + z_a * z_a);
			//PrintDebug("Index: %d, Distance cam: %f, Distance arrow: %f, CharIndex: %d, CharID: %d\n", data1->entity.Index, dist_cam, dist_arrow, data1->entity.CharIndex, data1->entity.CharID);
			// Assign the winner a permanent name badge
			if (!ChaoRaceEnded && ChaoAnimationWhatever == -17)
			{
				ChaoRaceEnded = true;
				ChaoRaceTimer = 0;
				data1->entity.CharID = 80;
				data1->entity.CharIndex = 2;
			}
			// Disable the nameplate if too far from the arrow/camera
			if ((dist_arrow >= 8.5f || dist_cam >= 45.0f) && ChaoAnimationWhatever != -17)
			{
				data1->entity.CharIndex = 0;
				data1->entity.CharID = 0;
			}
			// Disable the nameplate if playing the win animation but another Chao reached the end first
			if (data1->entity.CharIndex != 2 && ChaoRaceEnded && ChaoAnimationWhatever == -17)
			{
				data1->entity.CharIndex = 0;
				data1->entity.CharID = 0;
			}
			// Trigger the nameplate when the red arrow's coordinates roughly match the Chao's
			if (data1->entity.CharIndex != 2 && ChaoAnimationWhatever != -17 && dist_cam < 45.0f)
			{
				if (dist_arrow < 8.5f)
				{
					if (!data1->entity.CharIndex)
					{
						data1->entity.CharIndex = 1;
						data1->entity.CharID = 100;
					}
				}
				else
				{
					data1->entity.CharID = 0;
					data1->entity.CharIndex = 0;
				}
			}
			ChaoFukidasi_Display(a1);
		}
		original(a1);
	}
	else original(a1);
}

// Chao Race double shadow fix
static Trampoline* ChaoShadowFix_t = nullptr;
static void __cdecl ChaoShadowFix_r(ObjectMaster *a1, float a2, float a3, float a4)
{
	const auto original = TARGET_DYNAMIC(ChaoShadowFix);
	if (nullsub_Chao != 0x90u)
	{
		if (CurrentChaoStage != SADXChaoStage_Race) original(a1, a2, a3, a4);
	}
	else original(a1, a2, a3, a4);
}

// Entry

void ChaoCheerHologram_Main(ObjectMaster *a1)
{
	EntityData1 *v1;
	v1 = a1->Data1;
	SetTextureToLevelObj();
	njPushMatrix(0);
	njTranslateV(0, &v1->Position);
	njRotateY(0, v1->Rotation.y);
	njScale(0, 1.0f, 1.0f, 1.0f);
	DrawQueueDepthBias = 2000.0f;
	lateDrawObject(&cheer_hologram, QueuedModelFlagsB_SomeTextureThing, 1.0f);
	njPopMatrix(1u);
	DrawQueueDepthBias = 0;
}

void ChaoCheerHologram_Load(ObjectMaster *a1)
{
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))ChaoCheerHologram_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))ChaoCheerHologram_Main;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))CheckThingButThenDeleteObject;
}

void ChaoLetters_Main(ObjectMaster *a1)
{
	EntityData1 *v1;
	v1 = a1->Data1;
	njSetTexture(&OBJ_AL_RACE_TEXLIST);
	njPushMatrix(0);
	njTranslateV(0, &v1->Position);
	njRotateY(0, v1->Rotation.y);
	njScale(0, 1.0f, 1.0f, 1.0f);
	DrawQueueDepthBias = 2000.0f;
	lateDrawObject(ChaoRaceLetters, QueuedModelFlagsB_SomeTextureThing, 1.0f);
	njPopMatrix(1u);
	DrawQueueDepthBias = 0;
}

void ChaoLetters_Load(ObjectMaster *a1)
{
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))ChaoLetters_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))ChaoLetters_Main;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))CheckThingButThenDeleteObject;
}

void ChaoSlidingDoors_Display(ObjectMaster *a1)
{
	EntityData1 *v1;
	v1 = a1->Data1;
	float CharIndexShit;
	CharIndexShit = *(float *)&v1->CharIndex;
	SetTextureToLevelObj();
	DrawQueueDepthBias = 1000.0f;
	// Gate 1
	njPushMatrix(0);
	njTranslate(0, 2099.9f, 0, -1 * CharIndexShit);
	njScale(0, 1.0f, 1.0f, 1.0f);
	DrawModel(ChaoRaceSlidingDoors->child->sibling->basicdxmodel);
	njPopMatrix(1u);
	// Gate 2
	njPushMatrix(0);
	njTranslate(0, 2099.9f, 0, CharIndexShit);
	njScale(0, 1.0f, 1.0f, 1.0f);
	DrawModel(ChaoRaceSlidingDoors->child->basicdxmodel);
	njPopMatrix(1u);
	DrawQueueDepthBias = 0;
}

void ChaoSlidingDoors_Main(ObjectMaster *a1)
{
	EntityData1 *v1;
	float CharIndexShit;
	NJS_VECTOR exitdoor = { 2099.42f, 13.49f, -0.8400002f };
	v1 = a1->Data1;
	CharIndexShit = *(float *)&v1->CharIndex;
	char CharIDShit = v1->CharID;
	if (IsPlayerInsideSphere(&exitdoor, 30.0f))
	{
		if (CharIDShit == 0)
		{
			PlaySound(685, 0, 0, 0);
			CharIDShit = 1;
		}
		if (bowchaoanim != 2) bowchaoanim = 1;
		if (CharIndexShit < 25.0f) CharIndexShit += 0.8f;
		if (CharIndexShit > 25.0f) CharIndexShit = 25.0f;
	}
	else
	{
		if (CharIDShit == 1)
		{
			PlaySound(685, 0, 0, 0);
			CharIDShit = 0;
		}
		if (bowchaoanim == 2) bowchaoanim = 0;
		if (CharIndexShit > 0.0f) CharIndexShit -= 0.8f;
		if (CharIndexShit < 0) CharIndexShit = 0;
	}
	*(float *)&v1->CharIndex = CharIndexShit;
	a1->Data1->CharID = CharIDShit;
	ChaoSlidingDoors_Display(a1);
}

void ChaoSlidingDoors_Load(ObjectMaster *a1)
{
	a1->Data1->CharIndex = 0;
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))ChaoSlidingDoors_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))ChaoSlidingDoors_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))CheckThingButThenDeleteObject;
}

void ChaoNumbers_Display(ObjectMaster *a1)
{
	EntityData1 *v1;
	v1 = a1->Data1;
	int ObjectIndex;
	ObjectIndex = v1->CharIndex;
	SetTextureToLevelObj();
	njPushMatrix(0);
	njTranslateV(0, &v1->Position);
	njRotateY(0, v1->Rotation.y);
	njScale(0, 1.0f, 1.0f, 1.0f);
	DrawQueueDepthBias = 1000.0f;
	switch (ObjectIndex)
	{
	case 0:
		lateDrawObject(ChaoRaceNumber0, QueuedModelFlagsB_EnableZWrite, 1.0f);
		break;
	case 1:
		lateDrawObject(ChaoRaceNumber1, QueuedModelFlagsB_EnableZWrite, 1.0f);
		break;
	case 2:
		lateDrawObject(ChaoRaceNumber2, QueuedModelFlagsB_EnableZWrite, 1.0f);
		break;
	case 3:
		lateDrawObject(ChaoRaceNumber3, QueuedModelFlagsB_EnableZWrite, 1.0f);
		break;
	case 4:
		lateDrawObject(ChaoRaceNumber4, QueuedModelFlagsB_EnableZWrite, 1.0f);
		break;
	case 5:
		lateDrawObject(ChaoRaceNumber5, QueuedModelFlagsB_EnableZWrite, 1.0f);
		break;
	case 6:
		lateDrawObject(ChaoRaceNumber6, QueuedModelFlagsB_EnableZWrite, 1.0f);
		break;
	case 7:
		lateDrawObject(ChaoRaceNumber7, QueuedModelFlagsB_EnableZWrite, 1.0f);
		break;
	}
	njPopMatrix(1u);
	DrawQueueDepthBias = 0;
}

void ChaoNumbers_Main(ObjectMaster *a1)
{
	ChaoNumbers_Display(a1);
}

void ChaoRaceNumbers_Load(ObjectMaster *a1)
{
	EntityData1 *v1;
	NJS_OBJECT *v2;
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))ChaoNumbers_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))ChaoNumbers_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))DynamicCOL_DeleteObject;
	v1 = a1->Data1;
	int ObjectIndex;
	ObjectIndex = v1->CharIndex;
	switch (ObjectIndex)
	{
	case 0:
		v2 = DynamicCOL_AddFromEntity(ChaoRaceNumber0, a1, (ColFlags)0x80000001);
		v2->scl[0] = 1.0f;
		v2->scl[1] = 1.0f;
		v2->scl[2] = 1.0f;
		break;
	case 1:
		v2 = DynamicCOL_AddFromEntity(ChaoRaceNumber1, a1, (ColFlags)0x80000001);
		v2->scl[0] = 1.0f;
		v2->scl[1] = 1.0f;
		v2->scl[2] = 1.0f;
		break;
	case 2:
		v2 = DynamicCOL_AddFromEntity(ChaoRaceNumber2, a1, (ColFlags)0x80000001);
		v2->scl[0] = 1.0f;
		v2->scl[1] = 1.0f;
		v2->scl[2] = 1.0f;
		break;
	case 3:
		v2 = DynamicCOL_AddFromEntity(ChaoRaceNumber3, a1, (ColFlags)0x80000001);
		v2->scl[0] = 1.0f;
		v2->scl[1] = 1.0f;
		v2->scl[2] = 1.0f;
		break;
	case 4:
		v2 = DynamicCOL_AddFromEntity(ChaoRaceNumber4, a1, (ColFlags)0x80000001);
		v2->scl[0] = 1.0f;
		v2->scl[1] = 1.0f;
		v2->scl[2] = 1.0f;
		break;
	case 5:
		v2 = DynamicCOL_AddFromEntity(ChaoRaceNumber5, a1, (ColFlags)0x80000001);
		v2->scl[0] = 1.0f;
		v2->scl[1] = 1.0f;
		v2->scl[2] = 1.0f;
		break;
	case 6:
		v2 = DynamicCOL_AddFromEntity(ChaoRaceNumber6, a1, (ColFlags)0x80000001);
		v2->scl[0] = 1.0f;
		v2->scl[1] = 1.0f;
		v2->scl[2] = 1.0f;
		break;
	case 7:
		v2 = DynamicCOL_AddFromEntity(ChaoRaceNumber7, a1, (ColFlags)0x80000001);
		v2->scl[0] = 1.0f;
		v2->scl[1] = 1.0f;
		v2->scl[2] = 1.0f;
		break;
	}
}

ObjectFunc(OF_E0, 0x450370); // RING   
ObjectFunc(OF_E1, 0x71D230); // ENTRY BUTTON
ObjectFunc(OF_E2, 0x71CE60); // ZONE
ObjectFunc(OF_E3, 0x71CD50); // PALM
ObjectFunc(OF_E4, 0x71CBC0); // COCONUT
ObjectFunc(OF_E5, 0x71CA70); // FLAG
ObjectFunc(OF_E6, 0x71C9D0); // WHITE FLOWER
ObjectFunc(OF_E7, 0x71C9F0); // PURPLE FLOWER
ObjectFunc(OF_E8, 0x71C2E0); // START MARK
ObjectFunc(OF_E9, 0x71C7D0); // WATERING CAN
ObjectFunc(OF_E10, 0x71C5F0); // BUGLE
ObjectFunc(OF_E11, 0x71C3D0); // SCOOP
ObjectFunc(OF_E12, 0x71C300); // SMALL SCREEN
ObjectFunc(OF_E13, 0x71C320); // ISLET
ObjectFunc(OF_E14, 0x7A9C60); // HINT BOX
ObjectFunc(OF_E15, 0x71C180); // CHEER CHAO
ObjectFunc(OF_E16, 0x71BFF0); // BOW CHAO
ObjectFunc(OF_E17, 0x71BEA0); // CRACKER
ObjectFunc(OF_E18, 0x71BBB0); // BUTTERFLY
ObjectFunc(OF_E19, ChaoRaceNumbers_Load); // 123 stuff
ObjectFunc(OF_E20, ChaoCheerHologram_Load); // Chao cheer hologram
ObjectFunc(OF_E21, ChaoSlidingDoors_Load); // Sliding doors
ObjectFunc(OF_E22, ChaoLetters_Load); // Chao Race letters

// Race

void ChaoRaceStartGoalSprite_Display(ObjectMaster *a1)
{
	EntityData1 *v1;
	float TransparencyValue;
	float SpriteScale;
	char SpriteType = 0;
	NJS_SPRITE _sp;
	float HorizontalResolution_float = static_cast<float>(HorizontalResolution);
	float VerticalResolution_float = static_cast<float>(VerticalResolution);
	v1 = a1->Data1;
	SpriteScale = v1->Scale.x;
	TransparencyValue = v1->Scale.z;
	SpriteType = v1->CharIndex;
	_sp.p.x = HorizontalResolution_float / 2.0f;
	_sp.p.y = VerticalResolution_float / 2.0f;
	_sp.sx = SpriteScale * VerticalResolution_float / 480.0f;
	_sp.sy = VerticalResolution_float / 480.0f;
	_sp.tlist = &OBJ_AL_RACE_TEXLIST;
	_sp.tanim = (NJS_TEXANIM*)0x888D70;
	njSetTexture(&OBJ_AL_RACE_TEXLIST);
	SetMaterialAndSpriteColor_Float(TransparencyValue, TransparencyValue, TransparencyValue, TransparencyValue);
	njPushMatrix(0);
	njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
	// "Start!" sprite
	if (SpriteType == 0)
	{
		njDrawSprite2D_Queue(&_sp, 20, 22046.9f, NJD_SPRITE_ALPHA | NJD_SPRITE_COLOR, QueuedModelFlagsB_SomeTextureThing);
	}
	// "Goal!" sprite
	else if (SpriteType == 1)
	{
		njDrawSprite2D_Queue(&_sp, 21, 22046.9f, NJD_SPRITE_ALPHA | NJD_SPRITE_COLOR, QueuedModelFlagsB_SomeTextureThing);
	}
	// "Cool!" sprite
	else if (SpriteType == 2)
	{
		njDrawSprite2D_Queue(&_sp, 22, 22046.9f, NJD_SPRITE_ALPHA | NJD_SPRITE_COLOR, QueuedModelFlagsB_SomeTextureThing);
	}
	// "You won the jewel!" sprite
	else if (SpriteType == 3)
	{
		njDrawSprite2D_Queue(&_sp, 23, 22046.9f, NJD_SPRITE_ALPHA | NJD_SPRITE_COLOR, QueuedModelFlagsB_SomeTextureThing);
	}
	njPopMatrix(1u);
	DrawQueueDepthBias = 0;
}

void ChaoRaceStartGoalSprite_Main(ObjectMaster *a1)
{
	float TransparencyValue;
	float SpriteScale;
	EntityData1 *v1;
	v1 = a1->Data1;
	TransparencyValue = v1->Scale.z;
	SpriteScale = v1->Scale.x;
	if (TransparencyValue <= 0.05f) CheckThingButThenDeleteObject(a1);
	ChaoRaceStartGoalSprite_Display(a1);
	if (ChaoRaceStartGoalTimer > 120) TransparencyValue -= 0.05f;
	if (SpriteScale < 1.0f) SpriteScale += 0.1f;
	a1->Data1->Scale.z = TransparencyValue;
	a1->Data1->Scale.x = SpriteScale;
	ChaoRaceStartGoalTimer++;
}

void ChaoRaceStartGoalSprite_Load(char sprite_type)
{
	ObjectMaster *a1;
	a1 = LoadObject((LoadObj)6, 3, ChaoRaceStartGoalSprite_Main);
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))ChaoRaceStartGoalSprite_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))ChaoRaceStartGoalSprite_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))CheckThingButThenDeleteObject;
	a1->Data1->Scale.x = 0.1f;
	a1->Data1->Scale.z = 1.0f;
	a1->Data1->CharIndex = sprite_type;
	ChaoRaceStartGoalTimer = 0;
}

void ChaoRaceSoundHook_Start(int ID, void *a2, int a3, void *a4)
{
	PlaySound(ID, a2, a3, a4);
	ChaoRaceStartGoalSprite_Load(0);
}

void ChaoRaceSoundHook_Goal(int ID, void *a2, int a3, void *a4)
{
	PlaySound(ID, a2, a3, a4);
	ChaoRaceStartGoalSprite_Load(1);
}

void ChaoRaceWaterfall_Display(ObjectMaster *a1)
{
	EntityData1 *v1;
	v1 = a1->Data1;
	int ObjectIndex;
	ObjectIndex = v1->CharID;
	njSetTexture(&OBJ_AL_RACE_TEXLIST);
	njPushMatrix(0);
	njTranslateV(0, &v1->Position);
	njRotateXYZ(0, v1->Rotation.x, v1->Rotation.y, v1->Rotation.z);
	njScale(0, 1.0f, 1.0f, 1.0f);
	DrawQueueDepthBias = 2000.0f;
	if (ObjectIndex) lateDrawObject(ChaoRaceWaterfall1, (QueuedModelFlagsB)0, 1.0f);
	else lateDrawObject(ChaoRaceWaterfall2, (QueuedModelFlagsB)0, 1.0f);
	njPopMatrix(1u);
	DrawQueueDepthBias = 0;
}

void ChaoRaceWaterfall_Main(ObjectMaster *a1)
{
	EntityData1 *v1 = a1->Data1;
	ChaoRaceWaterfall_Display(a1);
	QueueSound_XYZ(686, v1, 0, 1, 10, v1->Position.x, v1->Position.y, v1->Position.z);
}

void ChaoRaceWaterfall_Load(ObjectMaster *a1)
{
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))ChaoRaceWaterfall_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))ChaoRaceWaterfall_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))CheckThingButThenDeleteObject;
	a1->Data1->CharIndex = 0;
}

void ChaoRaceSkybox_Display(ObjectMaster *a1)
{
	EntityData1 *v1;
	v1 = a1->Data1;
	njSetTexture(&texlist_chaoracebg);
	njPushMatrix(0);
	njTranslateV(0, &v1->Position);
	njRotateY(0, v1->Rotation.y);
	njScale(0, 1.0f, 1.0f, 1.0f);
	DrawQueueDepthBias = -47000;
	lateDrawObject(ChaoRaceSkyboxBottom, QueuedModelFlagsB_EnableZWrite, 1.0f); // Bottom thing
	lateDrawObject(ChaoRaceSkyboxMain, QueuedModelFlagsB_EnableZWrite, 1.0f); // Sky
	njPopMatrix(1u);
	DrawQueueDepthBias = 0;
}

void ChaoRaceSkybox_Main(ObjectMaster *a1)
{
	ChaoRaceSkybox_Display(a1);
}

void ChaoRaceSkybox_Load(ObjectMaster *a1)
{
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))ChaoRaceSkybox_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))ChaoRaceSkybox_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))CheckThingButThenDeleteObject;
}

void ChaoRaceStartMark_Display(ObjectMaster *a1)
{
	EntityData1 *v1;
	v1 = a1->Data1;
	njSetTexture(&OBJ_AL_RACE_TEXLIST);
	njPushMatrix(0);
	njTranslateV(0, &v1->Position);
	njScale(0, 1.0f, 1.0f, 1.0f);
	DrawQueueDepthBias = -47000;
	lateDrawObject(ChaoRaceStartMark1, QueuedModelFlagsB_EnableZWrite, 1.0f); // Thing 1
	lateDrawObject(ChaoRaceStartMark2, QueuedModelFlagsB_EnableZWrite, 1.0f); // Thing 2
	njPopMatrix(1u);
	DrawQueueDepthBias = 0;
}

void ChaoRaceStartMark_Main(ObjectMaster *a1)
{
	ChaoRaceStartMark_Display(a1);
}

void ChaoRaceStartMark_Load(ObjectMaster *a1)
{
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))ChaoRaceStartMark_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))ChaoRaceStartMark_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))CheckThingButThenDeleteObject;
}

void ChaoRaceCracker_Display(ObjectMaster *a1)
{
	EntityData1 *v1;
	v1 = a1->Data1;
	njSetTexture(&OBJ_AL_RACE_TEXLIST);
	njPushMatrix(0);
	njTranslateV(0, &v1->Position);
	njRotateZYX(0, v1->Rotation.x, v1->Rotation.y, v1->Rotation.z);
	njScale(0, 1.0f, 1.0f, 1.0f);
	DrawQueueDepthBias = -37000;
	lateDrawObject(ChaoRaceCracker, QueuedModelFlagsB_EnableZWrite, 1.0f);
	njPopMatrix(1u);
	DrawQueueDepthBias = 0;
}

void ChaoRaceCracker_Main(ObjectMaster *a1)
{
	ChaoRaceCracker_Display(a1);
}

void ChaoRaceCracker_Load(ObjectMaster *a1)
{
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))ChaoRaceCracker_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))ChaoRaceCracker_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))CheckThingButThenDeleteObject;
}

SETObjData setdata_e = {}; // Entry
SETObjData setdata_race = {}; // Race
ObjectFunc(OF0, 0x450370); // RING   
ObjectFunc(OF1, 0x71D230); // ENTRY BUTTON
ObjectFunc(OF2, 0x71CE60); // ZONE
ObjectFunc(OF3, 0x71CD50); // PALM
ObjectFunc(OF4, 0x71CBC0); // COCONUT
ObjectFunc(OF5, 0x71CA70); // FLAG
ObjectFunc(OF6, 0x71C9D0); // WHITE FLOWER
ObjectFunc(OF7, 0x71C9F0); // PURPLE FLOWER
ObjectFunc(OF8, ChaoRaceStartMark_Load); // START MARK
ObjectFunc(OF9, 0x71C7D0); // WATERING CAN
ObjectFunc(OF10, 0x71C5F0); // BUGLE
ObjectFunc(OF11, 0x71C3D0); // SCOOP
ObjectFunc(OF12, 0x71C300); // SMALL SCREEN
ObjectFunc(OF13, 0x71C320); // ISLET
ObjectFunc(OF14, 0x7A9C60); // HINT BOX
ObjectFunc(OF15, 0x71C180); // CHEER CHAO
ObjectFunc(OF16, 0x71BFF0); // BOW CHAO
ObjectFunc(OF17, 0x71BEA0); // CRACKER
ObjectFunc(OF18, 0x71BBB0); // BUTTERFLY
ObjectFunc(OF19, ChaoRaceWaterfall_Load);
ObjectFunc(OF20, ChaoRaceSkybox_Load);
ObjectFunc(OF21, ChaoRaceCracker_Load);


void LoadObjects_RaceEntry()
{
	ObjectMaster *obj;
	EntityData1 *ent;
	// Chao Race numbers
	// 1
	obj = LoadObject((LoadObj)2, 3, OF_E19);
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 1987.428f;
		ent->Position.y = 0;
		ent->Position.z = 57.67402f;
		ent->Rotation.y = 0;
		ent->CharIndex = 0;
	}
	// 2
	obj = LoadObject((LoadObj)2, 3, OF_E19);
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 1965.328f;
		ent->Position.y = 0;
		ent->Position.z = 48.47403f;
		ent->Rotation.y = 0;
		ent->CharIndex = 1;
	}
	// 3
	obj = LoadObject((LoadObj)2, 3, OF_E19);
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 1950.028f;
		ent->Position.y = 0;
		ent->Position.z = 31.97404f;
		ent->Rotation.y = 0;
		ent->CharIndex = 2;
	}
	// 4
	obj = LoadObject((LoadObj)2, 3, OF_E19);
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 1941.903f;
		ent->Position.y = 0;
		ent->Position.z = 11.00009f;
		ent->Rotation.y = 0;
		ent->CharIndex = 3;
	}
	// 5
	obj = LoadObject((LoadObj)2, 3, OF_E19);
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 1942.128f;
		ent->Position.y = 0;
		ent->Position.z = -12.12596f;
		ent->Rotation.y = 0;
		ent->CharIndex = 4;
	}
	// 6
	obj = LoadObject((LoadObj)2, 3, OF_E19);
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 1951.628f;
		ent->Position.y = 0;
		ent->Position.z = -34.02596f;
		ent->Rotation.y = 0;
		ent->CharIndex = 5;
	}
	// 7
	obj = LoadObject((LoadObj)2, 3, OF_E19);
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 1968.428f;
		ent->Position.y = 0;
		ent->Position.z = -50.02595f;
		ent->Rotation.y = 0;
		ent->CharIndex = 6;
	}
	// 8
	obj = LoadObject((LoadObj)2, 3, OF_E19);
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 1989.828f;
		ent->Position.y = 0;
		ent->Position.z = -57.52594f;
		ent->Rotation.y = 0;
		ent->CharIndex = 7;
	}
	// Doors
	obj = LoadObject((LoadObj)2, 3, OF_E21);
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 0;
		ent->Position.y = 0;
		ent->Position.z = 0;
		ent->Rotation.y = 0;
	}
	// Letters
	obj = LoadObject((LoadObj)2, 3, OF_E22);
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2000;
		ent->Position.y = 35.81644f;
		ent->Position.z = 0;
		ent->Rotation.y = 0x8000;
	}
	obj = LoadObject((LoadObj)2, 3, OF_E22);
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2004;
		ent->Position.y = 35.81644f;
		ent->Position.z = 0;
		ent->Rotation.y = 0x8000;
	}
	obj = LoadObject((LoadObj)2, 3, OF_E22);
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2008;
		ent->Position.y = 35.81644f;
		ent->Position.z = 0;
		ent->Rotation.y = 0x8000;
	}
	// Cheer holograms
	obj = LoadObject((LoadObj)2, 3, OF_E20);
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2091.0f;
		ent->Position.y = 15.5f;
		ent->Position.z = 30.5f;
		ent->Rotation.y = 0xA000;
	}
	obj = LoadObject((LoadObj)2, 3, OF_E20);
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2044.66f;
		ent->Position.y = 15.5f;
		ent->Position.z = 55.5f;
		ent->Rotation.y = 0;
	}
	obj = LoadObject((LoadObj)2, 3, OF_E20);
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2069.42822f;
		ent->Position.y = 15.5f;
		ent->Position.z = 46.24f;
		ent->Rotation.y = 0x9A00;
	}
	obj = LoadObject((LoadObj)2, 3, OF_E20);
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2015.28f;
		ent->Position.y = 15.5f;
		ent->Position.z = 55.0f;
		ent->Rotation.y = 0;
	}
	obj = LoadObject((LoadObj)2, 3, OF_E20);
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2091.0f;
		ent->Position.y = 15.5f;
		ent->Position.z = -30.5f;
		ent->Rotation.y = 0xDA00;
	}
	obj = LoadObject((LoadObj)2, 3, OF_E20);
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2069.42822f;
		ent->Position.y = 15.5f;
		ent->Position.z = -46.24f;
		ent->Rotation.y = 0xE300;
	}
	obj = LoadObject((LoadObj)2, 3, OF_E20);
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2044.66f;
		ent->Position.y = 15.5f;
		ent->Position.z = -55.5f;
		ent->Rotation.y = 0;
	}
	obj = LoadObject((LoadObj)2, 3, OF_E20);
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2015.28f;
		ent->Position.y = 15.5f;
		ent->Position.z = -55.5f;
		ent->Rotation.y = 0;
	}
	// Other stuff
	obj = LoadObject((LoadObj)2, 3, OF_E16); // BOW CHAO
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2089.57f;
		ent->Position.y = -0.01f;
		ent->Position.z = 24.55f;
		ent->Rotation.y = 0xA000;
	}
	obj = LoadObject((LoadObj)6, 3, OF_E1); // ENTRY BUTTON
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2020.59f;
		ent->Position.z = -0.68f;
		ent->Rotation.y = 0x4000;
	}

	obj = LoadObject((LoadObj)2, 3, OF_E0); // RING   
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -166.84f;
		ent->Position.y = -102.76f;
		ent->Position.z = -727.39f;
		ent->Rotation.y = 0xDFE5;
		ent->Rotation.z = 0x14FD;
	}

	obj = LoadObject((LoadObj)2, 3, OF_E14); // HINT BOX
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2030.57f;
		ent->Position.y = 21;
		ent->Position.z = -49.3f;
		ent->Rotation.y = 0x5F46;
		ent->Scale.x = 25;//25
		ent->Scale.y = 10;//10
		ent->Scale.z = 7;//8
	}

	obj = LoadObject((LoadObj)2, 3, OF_E16); // BOW CHAO
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2089.36f;
		ent->Position.y = -0.01f;
		ent->Position.z = -24.22f;
		ent->Rotation.y = 0xD000;
	}
	obj = LoadObject((LoadObj)2, 3, OF_E16); // BOW CHAO
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2124.17f;
		ent->Position.y = -0.01f;
		ent->Position.z = -16.59f;
		ent->Rotation.y = 0xC000;
	}
	obj = LoadObject((LoadObj)2, 3, OF_E16); // BOW CHAO
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2123.7f;
		ent->Position.y = -0.01f;
		ent->Position.z = 15.79f;
		ent->Rotation.y = 0xC000;
	}
	obj = LoadObject((LoadObj)2, 3, OF_E16); // BOW CHAO
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2058.16f;
		ent->Position.y = -0.01f;
		ent->Position.z = 50.15f;
		ent->Rotation.y = 0x8FAD;
	}
	obj = LoadObject((LoadObj)2, 3, OF_E16); // BOW CHAO
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2060.85f;
		ent->Position.y = -0.01f;
		ent->Position.z = -49.82f;
		ent->Rotation.y = 0xEFAD;
	}
}
void LoadObjects_Race()
{
	ObjectMaster *obj;
	EntityData1 *ent;
	setdata_race.Distance = 612800.0f;
	// Start Mark
	obj = LoadObject((LoadObj)2, 3, OF8);
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 0;
		ent->Position.y = 0;
		ent->Position.z = 0;
		ent->Rotation.x = 0;
		ent->Rotation.y = 0;
		ent->Rotation.z = 0;
	}
	// Crackers
	obj = LoadObject((LoadObj)2, 3, OF21);
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -103.82f;
		ent->Position.y = 10;
		ent->Position.z = 370.34f;
		ent->Rotation.y = 0x1000;
		ent->Rotation.z = 0x3000;
	}
	obj = LoadObject((LoadObj)2, 3, OF21);
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -86.57f;
		ent->Position.y = 10;
		ent->Position.z = 392.97f;
		ent->Rotation.y = 0x4000;
		ent->Rotation.z = 0x3000;
	}
	obj = LoadObject((LoadObj)2, 3, OF21);
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -52.01f;
		ent->Position.y = 10;
		ent->Position.z = 384.09f;
		ent->Rotation.y = 0x7000;
		ent->Rotation.z = 0x3000;
	}
	obj = LoadObject((LoadObj)2, 3, OF21);
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -67.99f;
		ent->Position.y = 10;
		ent->Position.z = 337.77f;
		ent->Rotation.y = 0xD000;
		ent->Rotation.z = 0x3000;
	}
	obj = LoadObject((LoadObj)2, 3, OF21);
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -97.47f;
		ent->Position.y = 10;
		ent->Position.z = 343.87f;
		ent->Rotation.y = 0xE000;
		ent->Rotation.z = 0x3000;
	}
	// Skybox
	obj = LoadObject((LoadObj)2, 3, OF20);
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 0;
		ent->Position.y = 0;
		ent->Position.z = 0;
		ent->Rotation.y = 0;
	}
	// Waterfall 1
	obj = LoadObject((LoadObj)2, 3, OF19);
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 382.1735f;
		ent->Position.y = 0;
		ent->Position.z = 199.4976f;
		ent->Rotation.x = 0x68;
		ent->Rotation.y = 0x88E;
		ent->Rotation.z = 0;
		ent->CharID = 0;
	}
	// Waterfall 2
	obj = LoadObject((LoadObj)2, 3, OF19);
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 323.048f;
		ent->Position.y = 0;
		ent->Position.z = 245.5593f;
		ent->Rotation.x = 0x68;
		ent->Rotation.y = 0x271;
		ent->Rotation.z = 0x6;
		ent->CharID = 1;
	}
	obj = LoadObject((LoadObj)2, 3, OF10); // BUGLE
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -560.62f;
		ent->Position.y = 60.06f;
		ent->Position.z = 96.41f;
		ent->Rotation.y = 0x1F1E;
	}
	obj = LoadObject((LoadObj)2, 3, OF10); // BUGLE
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -553.07f;
		ent->Position.y = 62.06f;
		ent->Position.z = 88.41f;
		ent->Rotation.y = 0x4F1E;
		ent->Rotation.z = 0xC000;
	}
	obj = LoadObject((LoadObj)2, 3, OF10); // BUGLE
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -563.8f;
		ent->Position.y = 61.68f;
		ent->Position.z = 117.21f;
		ent->Rotation.x = 0x4000;
		ent->Rotation.y = 0x600B;
	}
	obj = LoadObject((LoadObj)2, 3, OF10); // BUGLE
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -571.19f;
		ent->Position.y = 62.06f;
		ent->Position.z = 99.27f;
		ent->Rotation.x = 0x4000;
		ent->Rotation.y = 0x900B;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 357.1f;
		ent->Position.y = 84.24f;
		ent->Position.z = 313.43f;
		ent->Rotation.y = 0xC3B;
		ent->Scale.x = 3;
		ent->Scale.y = 1;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 359.58f;
		ent->Position.y = 84.24f;
		ent->Position.z = 310.29f;
		ent->Rotation.y = 0xC3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -575.26f;
		ent->Position.y = 64.24f;
		ent->Position.z = 131.18f;
		ent->Rotation.y = 0xC3B;
		ent->Scale.x = 2;
		ent->Scale.y = 1;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 145.95f;
		ent->Position.y = 74.52f;
		ent->Position.z = 16.97f;
		ent->Rotation.y = 0x159B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 270.15f;
		ent->Position.y = 16.09f;
		ent->Position.z = 192.81f;
		ent->Rotation.y = 0x7F77;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 272.95f;
		ent->Position.y = 12.09f;
		ent->Position.z = 198.11f;
		ent->Rotation.y = 0x7F77;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 292.24f;
		ent->Position.y = 16.09f;
		ent->Position.z = 258.31f;
		ent->Rotation.y = 0x7F77;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 303.46f;
		ent->Position.y = 16.09f;
		ent->Position.z = 268.26f;
		ent->Rotation.y = 0x7F77;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -333.44f;
		ent->Position.y = 87.09f;
		ent->Position.z = 120.53f;
		ent->Rotation.y = 0x7F77;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -334.02f;
		ent->Position.y = 87.09f;
		ent->Position.z = 159.52f;
		ent->Rotation.y = 0x7F77;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -339.12f;
		ent->Position.y = 87.09f;
		ent->Position.z = 161.11f;
		ent->Rotation.y = 0x7F77;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 119.18f;
		ent->Position.y = 74.06f;
		ent->Position.z = 13.68f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 120.53f;
		ent->Position.y = 74.06f;
		ent->Position.z = -85.6f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 134.33f;
		ent->Position.y = 69.06f;
		ent->Position.z = -86.54f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 134.33f;
		ent->Position.y = 74.06f;
		ent->Position.z = -86.54f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 150.22f;
		ent->Position.y = 69.06f;
		ent->Position.z = 8.92f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 153.12f;
		ent->Position.y = 72.06f;
		ent->Position.z = 9.68f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -426.22f;
		ent->Position.y = 66.06f;
		ent->Position.z = -0.59f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -438.55f;
		ent->Position.y = 66.06f;
		ent->Position.z = -27.28f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -443.88f;
		ent->Position.y = 66.06f;
		ent->Position.z = 5.3f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -505.1f;
		ent->Position.y = 64.06f;
		ent->Position.z = 96.66f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -564.52f;
		ent->Position.y = 66.06f;
		ent->Position.z = 78.22f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -567.8f;
		ent->Position.y = 66.06f;
		ent->Position.z = 82;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -577.52f;
		ent->Position.y = 70.06f;
		ent->Position.z = 145.06f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 169.84f;
		ent->Position.y = 72.34f;
		ent->Position.z = -82.51f;
		ent->Rotation.y = 0xE66C;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 137.06f;
		ent->Position.y = 91.32f;
		ent->Position.z = 2.56f;
		ent->Rotation.y = 0xF066;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 166.62f;
		ent->Position.y = 81.32f;
		ent->Position.z = 12.07f;
		ent->Rotation.y = 0xF066;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 327;
		ent->Position.y = 93.32f;
		ent->Position.z = 279.54f;
		ent->Rotation.y = 0xF066;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 110.78f;
		ent->Position.y = 73.24f;
		ent->Position.z = 4.63f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 133.01f;
		ent->Position.y = 81.24f;
		ent->Position.z = -86.08f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 334.55f;
		ent->Position.y = 85.24f;
		ent->Position.z = 266.41f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 335.19f;
		ent->Position.y = 85.24f;
		ent->Position.z = 273.38f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 350.48f;
		ent->Position.y = 84.24f;
		ent->Position.z = 324.19f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 3;
		ent->Scale.y = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -447.05f;
		ent->Position.y = 67.24f;
		ent->Position.z = 4.23f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -476.47f;
		ent->Position.y = 63.24f;
		ent->Position.z = -17.07f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 2;
		ent->Scale.y = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -512.26f;
		ent->Position.y = 67.24f;
		ent->Position.z = 101.4f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -560.2f;
		ent->Position.y = 67.24f;
		ent->Position.z = 94.82f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 4;
		ent->Scale.y = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 241.64f;
		ent->Position.y = 77.96f;
		ent->Position.z = 324;
		ent->Rotation.y = 0x5D7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -574.82f;
		ent->Position.y = 60.06f;
		ent->Position.z = 95.91f;
		ent->Rotation.y = 0x30D7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -574.67f;
		ent->Position.y = 60.06f;
		ent->Position.z = 117.43f;
		ent->Rotation.y = 0x40D7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -570.56f;
		ent->Position.y = 60.06f;
		ent->Position.z = 140.93f;
		ent->Rotation.y = 0x50D7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 250.71f;
		ent->Position.y = 77.96f;
		ent->Position.z = 358.07f;
		ent->Rotation.y = 0x85D7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 293.58f;
		ent->Position.y = 80.26f;
		ent->Position.z = 354.14f;
		ent->Rotation.y = 0x8AD7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 316.52f;
		ent->Position.y = 80.26f;
		ent->Position.z = 345.95f;
		ent->Rotation.y = 0x8AD7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 345.86f;
		ent->Position.y = 80.26f;
		ent->Position.z = 331.87f;
		ent->Rotation.y = 0xA0D7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -514.71f;
		ent->Position.y = 60.06f;
		ent->Position.z = 123.62f;
		ent->Rotation.y = 0xA0D7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 364.51f;
		ent->Position.y = 80.26f;
		ent->Position.z = 304.91f;
		ent->Rotation.y = 0xABD7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 382.32f;
		ent->Position.y = 80.26f;
		ent->Position.z = 280.68f;
		ent->Rotation.y = 0xABD7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -212.91f;
		ent->Position.y = 19.36f;
		ent->Position.z = 233.91f;
		ent->Rotation.y = 0xB0D7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -215.88f;
		ent->Position.y = 20.06f;
		ent->Position.z = 245.54f;
		ent->Rotation.y = 0xB0D7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -504.34f;
		ent->Position.y = 60.06f;
		ent->Position.z = 107.87f;
		ent->Rotation.y = 0xB0D7;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 99.18f;
		ent->Position.y = 9.43f;
		ent->Position.z = 434.54f;
		ent->Rotation.y = 0x7A15;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 136.94f;
		ent->Position.y = 9.43f;
		ent->Position.z = 430.7f;
		ent->Rotation.y = 0x7A15;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -6.47f;
		ent->Position.y = 9.32f;
		ent->Position.z = 452.66f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 30.09f;
		ent->Position.y = 9.32f;
		ent->Position.z = 446.52f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -45.91f;
		ent->Position.y = 9.32f;
		ent->Position.z = 456.07f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -76.93f;
		ent->Position.y = 9.32f;
		ent->Position.z = 448.95f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -90.31f;
		ent->Position.y = 10.32f;
		ent->Position.z = 197.29f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 167.08f;
		ent->Position.y = 66.32f;
		ent->Position.z = 18.05f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 169.69f;
		ent->Position.y = 66.32f;
		ent->Position.z = -95.93f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 281.43f;
		ent->Position.y = 9.32f;
		ent->Position.z = 205.1f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -115.33f;
		ent->Position.y = 10.32f;
		ent->Position.z = 219.45f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -117.82f;
		ent->Position.y = 9.32f;
		ent->Position.z = 421.35f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -141.02f;
		ent->Position.y = 9.32f;
		ent->Position.z = 395.44f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -141.8f;
		ent->Position.y = 10.32f;
		ent->Position.z = 244.79f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -151.93f;
		ent->Position.y = 9.32f;
		ent->Position.z = 353.82f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -155.19f;
		ent->Position.y = 9.32f;
		ent->Position.z = 304.82f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -156.55f;
		ent->Position.y = 9.32f;
		ent->Position.z = 270.97f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -355.08f;
		ent->Position.y = 81.32f;
		ent->Position.z = 162.38f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -357.57f;
		ent->Position.y = 81.32f;
		ent->Position.z = 119.57f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF13); // ISLET
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 56.58f;
		ent->Position.y = 6.06f;
		ent->Position.z = 519.36f;
		ent->Rotation.y = 0x4066;
	}
	obj = LoadObject((LoadObj)2, 3, OF13); // ISLET
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 250.07f;
		ent->Position.y = 6.06f;
		ent->Position.z = 491.5f;
		ent->Rotation.y = 0x4066;
	}
	obj = LoadObject((LoadObj)2, 3, OF13); // ISLET
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 78.39f;
		ent->Position.y = 10.06f;
		ent->Position.z = 86;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF13); // ISLET
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -32.34f;
		ent->Position.y = 10.06f;
		ent->Position.z = 53.35f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF13); // ISLET
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 251.87f;
		ent->Position.y = 22.06f;
		ent->Position.z = 369.26f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF13); // ISLET
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -210.18f;
		ent->Position.y = 5.06f;
		ent->Position.z = 241.57f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -433.52f;
		ent->Position.y = 60.06f;
		ent->Position.z = -25.01f;
		ent->Rotation.y = 0xC3B;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -502.93f;
		ent->Position.y = 60.06f;
		ent->Position.z = 100.83f;
		ent->Rotation.y = 0x4000;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -506.86f;
		ent->Position.y = 60.06f;
		ent->Position.z = 98.34f;
		ent->Rotation.y = 0x4000;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -427.08f;
		ent->Position.y = 60.06f;
		ent->Position.z = -3.42f;
		ent->Rotation.y = 0x4BA1;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -437.51f;
		ent->Position.y = 60.06f;
		ent->Position.z = -28.54f;
		ent->Rotation.y = 0x4BA1;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -439.89f;
		ent->Position.y = 60.06f;
		ent->Position.z = -24.73f;
		ent->Rotation.y = 0x6BA1;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -422.41f;
		ent->Position.y = 60.06f;
		ent->Position.z = -0.21f;
		ent->Rotation.y = 0x8BA1;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -323.11f;
		ent->Position.y = 82.63f;
		ent->Position.z = 127.87f;
		ent->Rotation.y = 0xB4B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -330.92f;
		ent->Position.y = 82.63f;
		ent->Position.z = 155.05f;
		ent->Rotation.y = 0xB4B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -561.97f;
		ent->Position.y = 60.06f;
		ent->Position.z = 93.02f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -562.37f;
		ent->Position.y = 60.06f;
		ent->Position.z = 100.22f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -568.97f;
		ent->Position.y = 60.06f;
		ent->Position.z = 94.02f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -365.66f; // -265.66f in the original, probably a mistake
		ent->Position.y = 82.63f;
		ent->Position.z = 123.59f; // 223.59f in the original, probably a mistake
		ent->Rotation.y = 0xC4B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -321.1f;
		ent->Position.y = 82.63f;
		ent->Position.z = 125.65f;
		ent->Rotation.y = 0xC4B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -329.94f;
		ent->Position.y = 83.03f;
		ent->Position.z = 157.57f;
		ent->Rotation.y = 0xE4B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -501.99f;
		ent->Position.y = 60.06f;
		ent->Position.z = 104.69f;
		ent->Rotation.y = 0xF04C;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -503.51f;
		ent->Position.y = 60.06f;
		ent->Position.z = 94.5f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -507.48f;
		ent->Position.y = 60.06f;
		ent->Position.z = 97.55f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -332.9f;
		ent->Position.y = 83.03f;
		ent->Position.z = 155.52f;
		ent->Rotation.y = 0xF4B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 337.91f;
		ent->Position.y = 80.44f;
		ent->Position.z = 265.07f;
		ent->Rotation.x = 0x300;
		ent->Rotation.y = 0x9C3B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 337.07f;
		ent->Position.y = 80.44f;
		ent->Position.z = 267.95f;
		ent->Rotation.x = 0x300;
		ent->Rotation.y = 0xAC3B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER

	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 334.64f;
		ent->Position.y = 80.44f;
		ent->Position.z = 267.68f;
		ent->Rotation.x = 0x300;
		ent->Rotation.y = 0xEC3B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF11); // SCOOP
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -555.17f;
		ent->Position.y = 60.06f;
		ent->Position.z = 79.23f;
		ent->Rotation.y = 0x4F1E;
		ent->Rotation.z = 0xC000;
	}
	obj = LoadObject((LoadObj)2, 3, OF11); // SCOOP
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -557.63f;
		ent->Position.y = 60.06f;
		ent->Position.z = 104.18f;
		ent->Rotation.y = 0x4F1E;
		ent->Rotation.z = 0xC000;
	}
	obj = LoadObject((LoadObj)2, 3, OF11); // SCOOP
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -561.71f;
		ent->Position.y = 60.68f;
		ent->Position.z = 126.16f;
		ent->Rotation.x = 0x4000;
		ent->Rotation.y = 0x600B;
	}
	obj = LoadObject((LoadObj)2, 3, OF9); // WATERING CAN
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -554.03f;
		ent->Position.y = 60.06f;
		ent->Position.z = 97.63f;
		ent->Rotation.y = 0x1F1E;
	}
	obj = LoadObject((LoadObj)2, 3, OF9); // WATERING CAN
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -565.7f;
		ent->Position.y = 60.06f;
		ent->Position.z = 109.13f;
		ent->Rotation.y = 0x8E0B;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 325.75f;
		ent->Position.y = 80.44f;
		ent->Position.z = 284.61f;
		ent->Rotation.y = 0xC3B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 357.7f;
		ent->Position.y = 80.24f;
		ent->Position.z = 312.08f;
		ent->Rotation.y = 0xC3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -453.93f;
		ent->Position.y = 60.06f;
		ent->Position.z = 0.75f;
		ent->Rotation.y = 0xC3B;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -461.8f;
		ent->Position.y = 60.06f;
		ent->Position.z = -15.1f;
		ent->Rotation.y = 0xC3B;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -474.18f;
		ent->Position.y = 60.06f;
		ent->Position.z = -17.84f;
		ent->Rotation.y = 0xC3B;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -324.56f;
		ent->Position.y = 82.98f;
		ent->Position.z = 124.2f;
		ent->Rotation.y = 0xDFB;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -336.82f;
		ent->Position.y = 81.98f;
		ent->Position.z = 126.13f;
		ent->Rotation.y = 0xDFB;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -345.83f;
		ent->Position.y = 81.98f;
		ent->Position.z = 152.45f;
		ent->Rotation.y = 0xDFB;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -348.81f;
		ent->Position.y = 81.98f;
		ent->Position.z = 156.59f;
		ent->Rotation.y = 0xDFB;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 119.41f;
		ent->Position.y = 66.52f;
		ent->Position.z = -87.69f;
		ent->Rotation.y = 0x159B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 301.31f;
		ent->Position.y = 80.24f;
		ent->Position.z = 346.04f;
		ent->Rotation.y = 0x1C3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 352.41f;
		ent->Position.y = 80.24f;
		ent->Position.z = 322.5f;
		ent->Rotation.y = 0x1C3B;
		ent->Rotation.z = 0x1000;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -540.12f;
		ent->Position.y = 60.06f;
		ent->Position.z = 61.46f;
		ent->Rotation.y = 0x1F1E;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -344.42f;
		ent->Position.y = 82.03f;
		ent->Position.z = 154.74f;
		ent->Rotation.y = 0x34B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 349.32f;
		ent->Position.y = 80.24f;
		ent->Position.z = 320.12f;
		ent->Rotation.y = 0x4C3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 356.18f;
		ent->Position.y = 80.24f;
		ent->Position.z = 314.67f;
		ent->Rotation.y = 0x4C3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 304.46f;
		ent->Position.y = 80.24f;
		ent->Position.z = 347.8f;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -443.49f;
		ent->Position.y = 60.06f;
		ent->Position.z = 0.98f;
		ent->Rotation.y = 0x6BA1;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 323.16f;
		ent->Position.y = 80.24f;
		ent->Position.z = 343.05f;
		ent->Rotation.y = 0x6C3B;
		ent->Rotation.z = 0x1000;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 347.63f;
		ent->Position.y = 80.24f;
		ent->Position.z = 323.49f;
		ent->Rotation.y = 0x6C3B;
		ent->Rotation.z = 0x1000;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 152.16f;
		ent->Position.y = 65.33f;
		ent->Position.z = 7.23f;
		ent->Rotation.y = 0x86A8;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 293.98f;
		ent->Position.y = 80.44f;
		ent->Position.z = 306.97f;
		ent->Rotation.y = 0x8E3B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -452.46f;
		ent->Position.y = 60.06f;
		ent->Position.z = 1.3f;
		ent->Rotation.y = 0x9BA1;
		ent->Rotation.z = 0xF000;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -469.66f;
		ent->Position.y = 60.06f;
		ent->Position.z = -14.86f;
		ent->Rotation.y = 0x9BA1;
		ent->Rotation.z = 0xF000;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -342.54f;
		ent->Position.y = 81.98f;
		ent->Position.z = 124.19f;
		ent->Rotation.y = 0x9DFB;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 149.52f;
		ent->Position.y = 65.33f;
		ent->Position.z = 8.97f;
		ent->Rotation.y = 0xABA8;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -509.37f;
		ent->Position.y = 60.06f;
		ent->Position.z = 108.93f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -512.17f;
		ent->Position.y = 60.06f;
		ent->Position.z = 99.33f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -516.63f;
		ent->Position.y = 60.06f;
		ent->Position.z = 133.05f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -561.23f;
		ent->Position.y = 60.06f;
		ent->Position.z = 140.84f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -563.03f;
		ent->Position.y = 60.06f;
		ent->Position.z = 133.25f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -566.23f;
		ent->Position.y = 60.06f;
		ent->Position.z = 150.84f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -569.42f;
		ent->Position.y = 60.06f;
		ent->Position.z = 133.44f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 119.37f;
		ent->Position.y = 64.33f;
		ent->Position.z = 7.11f;
		ent->Rotation.y = 0xC6A8;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 154.89f;
		ent->Position.y = 65.33f;
		ent->Position.z = 8.88f;
		ent->Rotation.y = 0xC6A8;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -332.41f;
		ent->Position.y = 82.98f;
		ent->Position.z = 125.73f;
		ent->Rotation.y = 0xCDFB;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -333.61f;
		ent->Position.y = 81.98f;
		ent->Position.z = 123.12f;
		ent->Rotation.y = 0xCDFB;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 294.49f;
		ent->Position.y = 80.44f;
		ent->Position.z = 304.36f;
		ent->Rotation.y = 0xCE3B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 318.76f;
		ent->Position.y = 80.44f;
		ent->Position.z = 289.63f;
		ent->Rotation.y = 0xCE3B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -343.15f;
		ent->Position.y = 82.03f;
		ent->Position.z = 152.94f;
		ent->Rotation.y = 0xD4B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -322.44f;
		ent->Position.y = 83.03f;
		ent->Position.z = 121.98f;
		ent->Rotation.y = 0xE4B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -331.28f;
		ent->Position.y = 82.03f;
		ent->Position.z = 123.9f;
		ent->Rotation.y = 0xE4B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -337.96f;
		ent->Position.y = 82.03f;
		ent->Position.z = 153.24f;
		ent->Rotation.y = 0xE4B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -338.81f;
		ent->Position.y = 81.98f;
		ent->Position.z = 121.73f;
		ent->Rotation.y = 0xEDFB;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -342.9f;
		ent->Position.y = 81.98f;
		ent->Position.z = 121.21f;
		ent->Rotation.y = 0xEDFB;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -353.78f;
		ent->Position.y = 81.98f;
		ent->Position.z = 155.43f;
		ent->Rotation.y = 0xEDFB;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -505.46f;
		ent->Position.y = 60.06f;
		ent->Position.z = 116.96f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -508.43f;
		ent->Position.y = 60.06f;
		ent->Position.z = 152.34f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -508.94f;
		ent->Position.y = 60.06f;
		ent->Position.z = 91.74f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -510.92f;
		ent->Position.y = 60.06f;
		ent->Position.z = 129.13f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -512.15f;
		ent->Position.y = 60.06f;
		ent->Position.z = 94.33f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -526.96f;
		ent->Position.y = 60.06f;
		ent->Position.z = 164.17f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -542.02f;
		ent->Position.y = 60.06f;
		ent->Position.z = 159.34f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -552.06f;
		ent->Position.y = 60.06f;
		ent->Position.z = 74.13f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -556.91f;
		ent->Position.y = 60.06f;
		ent->Position.z = 85.5f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -563.99f;
		ent->Position.y = 60.06f;
		ent->Position.z = 72.83f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -569.41f;
		ent->Position.y = 60.06f;
		ent->Position.z = 123.64f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -570.93f;
		ent->Position.y = 60.06f;
		ent->Position.z = 129.86f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 324.94f;
		ent->Position.y = 80.44f;
		ent->Position.z = 281.09f;
		ent->Rotation.x = 0x300;
		ent->Rotation.y = 0xAC3B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 328.46f;
		ent->Position.y = 80.44f;
		ent->Position.z = 280.29f;
		ent->Rotation.x = 0x300;
		ent->Rotation.y = 0xCC3B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 121.59f;
		ent->Position.y = 66.52f;
		ent->Position.z = -88.68f;
		ent->Rotation.x = 0x1000;
		ent->Rotation.y = 0x359B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 132.53f;
		ent->Position.y = 64.33f;
		ent->Position.z = -84.62f;
		ent->Rotation.x = 0x1000;
		ent->Rotation.y = 0x44A8;
		ent->Rotation.z = 0x1000;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 133.47f;
		ent->Position.y = 67.33f;
		ent->Position.z = -89.7f;
		ent->Rotation.x = 0x1000;
		ent->Rotation.y = 0x54A8;
		ent->Rotation.z = 0x1000;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 129.67f;
		ent->Position.y = 64.33f;
		ent->Position.z = -83.74f;
		ent->Rotation.x = 0x1000;
		ent->Rotation.y = 0x64A8;
		ent->Rotation.z = 0x1000;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 138.2f;
		ent->Position.y = 64.33f;
		ent->Position.z = -84.16f;
		ent->Rotation.x = 0x1000;
		ent->Rotation.y = 0x64A8;
		ent->Rotation.z = 0x1000;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 137.65f;
		ent->Position.y = 64.52f;
		ent->Position.z = 7.7f;
		ent->Rotation.x = 0xF000;
		ent->Rotation.y = 0x159B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 141.72f;
		ent->Position.y = 67.52f;
		ent->Position.z = 12.16f;
		ent->Rotation.x = 0xF000;
		ent->Rotation.y = 0x159B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 123.09f;
		ent->Position.y = 64.52f;
		ent->Position.z = 8.18f;
		ent->Rotation.x = 0xF000;
		ent->Rotation.y = 0x459B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 146.45f;
		ent->Position.y = 64.52f;
		ent->Position.z = 7.6f;
		ent->Rotation.x = 0xF000;
		ent->Rotation.y = 0x459B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 114.38f;
		ent->Position.y = 66.52f;
		ent->Position.z = 11.91f;
		ent->Rotation.x = 0xF000;
		ent->Rotation.y = 0x659B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 313.68f;
		ent->Position.y = 80.24f;
		ent->Position.z = 345.49f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 353.74f;
		ent->Position.y = 80.24f;
		ent->Position.z = 317.12f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 366.88f;
		ent->Position.y = 80.24f;
		ent->Position.z = 300.5f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF2); // ZONE
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 312.64f;
		ent->Position.y = 80.37f;
		ent->Position.z = 151.66f;
		ent->Scale.x = 30;
		ent->Scale.z = 200;
	}
	obj = LoadObject((LoadObj)2, 3, OF2); // ZONE
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -542.76f;
		ent->Position.y = 60;
		ent->Position.z = 97.08f;
		ent->Scale.x = 50;
		ent->Scale.z = 200; // 0 soon
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -4.34f;
		ent->Position.y = 65.34f;
		ent->Position.z = 20.65f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -5.28f;
		ent->Position.y = 65.34f;
		ent->Position.z = -97.9f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 29.11f;
		ent->Position.y = 65.34f;
		ent->Position.z = -98.31f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 35.14f;
		ent->Position.y = 65.34f;
		ent->Position.z = 20.52f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 64.83f;
		ent->Position.y = 65.34f;
		ent->Position.z = -97.6f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 68.51f;
		ent->Position.y = 65.34f;
		ent->Position.z = 20.87f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -40.98f;
		ent->Position.y = 65.34f;
		ent->Position.z = 20.23f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -41.89f;
		ent->Position.y = 65.34f;
		ent->Position.z = -97.77f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 104.12f;
		ent->Position.y = 65.34f;
		ent->Position.z = -99.01f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 104.14f;
		ent->Position.y = 65.34f;
		ent->Position.z = 19.99f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 135.93f;
		ent->Position.y = 65.34f;
		ent->Position.z = 19.46f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 137.47f;
		ent->Position.y = 65.34f;
		ent->Position.z = -97.52f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 64.22f;
		ent->Position.y = 9.32f;
		ent->Position.z = 442.37f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 172.18f;
		ent->Position.y = 9.32f;
		ent->Position.z = 422.01f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 213.56f;
		ent->Position.y = 9.32f;
		ent->Position.z = 414.33f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 296.23f;
		ent->Position.y = 9.32f;
		ent->Position.z = 257.22f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF3); // PALM
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 240.82f;
		ent->Position.y = -0.58f;
		ent->Position.z = 195.57f;
		ent->Rotation.y = 0xF581;
	}
	obj = LoadObject((LoadObj)2, 3, OF3); // PALM
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 263.54f;
		ent->Position.y = -0.58f;
		ent->Position.z = 283.33f;
		ent->Rotation.y = 0xF581;
	}
}

DataPointer(int, dword_3CD7714, 0x3CD7714);
DataPointer(NJS_OBJECT, stru_3455450, 0x3455450);
DataPointer(NJS_OBJECT, stru_34B367C, 0x34B367C);
DataPointer(NJS_OBJECT, stru_34B36B0, 0x34B36B0);
DataPointer(NJS_OBJECT, stru_34B36E4, 0x34B36E4);

ObjectMaster *__cdecl LoadChaoRaceCrackers()
{
	int v0;
	ObjectMaster *obj;
	EntityData1 *ent;

	dword_3CD7714 = 0;
	v0 = 0;
	do
	{
		obj = LoadObject((LoadObj)2, 3, OF17); // CRACKER
		obj->SETData.SETData = &setdata_race;
		if (v0 == 0 && obj)
		{
			ent = obj->Data1;
			ent->Position.x = -103.82f;
			ent->Position.y = 10;
			ent->Position.z = 370.34f;
			ent->Rotation.x = 0xFFFFFFEE;
			ent->Rotation.z = 0xFFFFF33D;
			ent->Scale.x = 1.5f;
			ent->Scale.y = 15;
		}
		obj = LoadObject((LoadObj)2, 3, OF17); // CRACKER
		if (v0 == 1 && obj)
		{
			ent = obj->Data1;
			ent->Position.x = -86.57f;
			ent->Position.y = 10;
			ent->Position.z = 392.97f;
			ent->Rotation.x = 0xFFFFEAAB;
			ent->Rotation.z = 0xFFFFF8E4;
			ent->Scale.x = 1.5f;
			ent->Scale.y = 10.8f;
		}
		obj = LoadObject((LoadObj)2, 3, OF17); // CRACKER
		if (v0 == 2 && obj)
		{
			ent = obj->Data1;
			ent->Position.x = -52.01f;
			ent->Position.y = 10;
			ent->Position.z = 384.09f;
			ent->Rotation.x = 0xFFFFF3F8;
			ent->Rotation.z = 0x11C7;
			ent->Scale.x = 1.6f;
			ent->Scale.y = 20.8f;
		}
		obj = LoadObject((LoadObj)2, 3, OF17); // CRACKER
		if (v0 == 3 && obj)
		{
			ent = obj->Data1;
			ent->Position.x = -67.99f;
			ent->Position.y = 10;
			ent->Position.z = 337.77f;
			ent->Rotation.x = 0xD77;
			ent->Rotation.z = 0x11C7;
			ent->Scale.x = 1.6f;
			ent->Scale.y = 20.8f;
		}
		obj = LoadObject((LoadObj)2, 3, OF17); // CRACKER
		if (v0 == 4 && obj)
		{
			ent = obj->Data1;
			ent->Position.x = -97.47f;
			ent->Position.y = 10;
			ent->Position.z = 343.87f;
			ent->Rotation.x = 0x180E;
			ent->Rotation.y = 0x180E;
			ent->Rotation.z = 0xFFFFF404;
			ent->Scale.x = 1.5f;
			ent->Scale.y = 10.8f;
		}
		v0++;
	} while (v0 < 5);
	return obj;
}

/* Backup sub for SADX crackers
ObjectMaster *__cdecl sub_71BF20()
{
	unsigned int v0; // edi
	int v1; // esi
	ObjectMaster *result; // eax
	NJS_OBJECT *v3; // [esp+8h] [ebp-10h]
	NJS_OBJECT *v4; // [esp+Ch] [ebp-Ch]
	NJS_OBJECT *v5; // [esp+10h] [ebp-8h]
	NJS_OBJECT *v6; // [esp+14h] [ebp-4h]

	dword_3CD7714 = 0;
	v3 = &stru_3455450;
	v4 = &stru_34B367C;
	v5 = &stru_34B36B0;
	v6 = &stru_34B36E4;
	v0 = 0;
	do
	{
		v1 = (int)*(&v3 + v0);
		result = LoadObject(LoadObj_Data1, 4, Cracker);
		if (result)
		{
			result = (ObjectMaster *)result->Data1;
			result->Data1 = *(EntityData1 **)(v1 + 8);
			result->Data2 = *(EntityData2 **)(v1 + 12);
			result->UnknownA_ptr = *(void **)(v1 + 16);
			result->DisplaySub = *(void(__cdecl **)(ObjectMaster *))(v1 + 20);
			result->DeleteSub = *(void(__cdecl **)(ObjectMaster *))(v1 + 24);
			result->SETData.SETData = *(SETObjData **)(v1 + 28);
			result->UnknownB_ptr = (void *)0x3FC00000;
			result->field_30 = 0x41700000;
			result[1].Next = 0;
		}
		++v0;
	} while (v0 < 4);
	return result;
}
*/

void RenderChaoRaceLetters_Fix(NJS_OBJECT *a1)
{
	DrawQueueDepthBias = 2000.0f;
	lateDrawObject(a1, QueuedModelFlagsB_SomeTextureThing, 1.0f);
	DrawQueueDepthBias = 0;
}

void ChaoRaceRedArrowHook(NJS_SPRITE *_sp, Int n, NJD_SPRITE attr)
{
	RedArrowX = _sp->p.x;
	RedArrowY = _sp->p.y;
	RedArrowZ = _sp->p.z;
	DrawQueueDepthBias = -1000.0f;
	njDrawSprite3D_Queue(_sp, n, attr, QueuedModelFlagsB_SomeTextureThing);
	DrawQueueDepthBias = 0.0f;
}

// Chao Race Entry stuff

// Bow Chao

void __cdecl BowChaoThing(NJS_ACTION *action, float frame)
{
	if (bowchaoanim == 1) njAction(action, bowchaoframe); else njAction(action, frame);
}

int __cdecl sub_72C2E0X()
{
	LoadPVM("OBJ_AL_RACE_E", &OBJ_AL_RACE_TEXLIST);
	LoadObjects_RaceEntry();
	return 0;
}

void __cdecl ChaoStgEntrance_MainX(ObjectMaster *a1)
{
	a1->MainSub = sub_7197E0;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))nullsub;
	a1->DeleteSub = sub_7197C0;
	SetGlobalPoint2Col_Colors(0xFF000000, 0xFF000000, 0xFF000000);
	sub_72A750();
	sub_72A570();
	sub_72C2E0X();
	InitializeSoundManager();
	PlayMusic(MusicIDs_ChaoRaceEntrance_OLD);
	LevelDrawDistance.Minimum = -1.0f;
	LevelDrawDistance.Maximum = -12000.0f;
}

void __cdecl LoadRaceEntryX()
{
	if (SkipSA1Entry)
	{
		SSGardenStartPoint.Position.x = BK_SSGardenStartPoint.Position.x;
		SSGardenStartPoint.Position.y = BK_SSGardenStartPoint.Position.y;
		SSGardenStartPoint.Position.z = BK_SSGardenStartPoint.Position.z;
		SSGardenStartPoint.YRot = BK_SSGardenStartPoint.YRot;
		PrintDebug("ChaoStgEntrance _prolog begin.\n");
		LoadObject(LoadObj_Data1, 5, ChaoStgEntrance_Main);
		SetChaoLandTable((LandTable*)0x03423700); // PC
		PrintDebug("ChaoStgEntrance _prolog end.\n");
		SkipSA1Entry = false;
	}
	else
	{
		LoadPVM("AL_RACE01", &texlist_ChaoRaceEntry);
		SSGardenStartPoint.Position.x = 2052;
		SSGardenStartPoint.Position.y = 0;
		SSGardenStartPoint.Position.z = 0;
		SSGardenStartPoint.YRot = NJM_DEG_ANG(180);
		PrintDebug("ChaoStgEntrance _prolog begin.\n");
		LoadObject(LoadObj_Data1, 5, ChaoStgEntrance_MainX);
		SetChaoLandTable(AL_RACE_0_Info->getlandtable());
		PrintDebug("ChaoStgEntrance _prolog end.\n");
	}
}

void LoadSADXEntry(int ID, int a2, NJS_VECTOR *a3)
{
	sub_79E400(2, 0, 0); // Play sound
	SkipSA1Entry = true;
	sub_715700(2); // Go to Chao Race Entry (2)
}

void ExitRaceEntry(int a1)
{
	SkipSA1Entry = false;
	sub_715700(2); // Exit to the SA1 lobby (2) instead of SS garden (4)
}

// Chao Race stuff

void RenderChaoBall()
{
	njSetTexture(&CHAO_TEXLIST);
	njScale(0, 1.5f, 1.5f, 1.5f);
	ds_DrawObjectClip(ChaoRaceBall, 1.5f);
}

void __cdecl LoadChaoRaceX()
{
	ChaoRaceNameCounter = 0;
	SkipSA1Entry = false;
	PrintDebug("ChaoStgRace _prolog begin.\n");
	LoadObject(LoadObj_Data1, 2, ChaoStgRace_Init);
	LoadPVM("BG_AL_RACE02", &texlist_chaoracebg);
	LoadPVM("AL_TEX_COMMON", &ChaoTexLists[1]); // Name font
	LoadObjects_Race();
	SetChaoLandTable(AL_RACE_1_Info->getlandtable());
	PrintDebug("ChaoStgRace _prolog end.\n");
}

void LoadObjChaoRaceTexlist(const char *PVMName, NJS_TEXLIST *TexListPtr, unsigned __int16 a3)
{
	if (TextLanguage) LoadChaoTexlist("OBJ_AL_RACE_E", &OBJ_AL_RACE_TEXLIST, 1u);
	else LoadChaoTexlist("OBJ_AL_RACE", &OBJ_AL_RACE_TEXLIST, 1u);
}

void LoadChaoRaceJewelAndText(int a1, NJS_VECTOR *a2)
{
	sub_751D70(a1, a2);
	ChaoRaceStartGoalSprite_Load(3);
}

void RemovePositionRotation_Object(NJS_OBJECT *object)
{
	object->pos[0] = 0;
	object->pos[1] = 0;
	object->pos[2] = 0;
	object->ang[0] = 0;
	object->ang[1] = 0;
	object->ang[2] = 0;
}

void ChaoRace_Init()
{
	Chao_Display_t = new Trampoline(0x7204B0, 0x7204B5, Chao_Display_r);
	ChaoShadowFix_t = new Trampoline(0x73EF60, 0x73EF65, ChaoShadowFix_r);
	// Load models
	OBJ_AL_RACE_TEXLISTS[1].Name = "BG_AL_RACE02";
	OBJ_AL_RACE_TEXLISTS[1].TexList = &texlist_chaoracebg;
	ChaoRaceSlidingDoors = LoadModel("system\\data\\AL_RACE\\Models\\00049C28.sa1mdl");
	ChaoRaceNumber0 = LoadModel("system\\data\\AL_RACE\\Models\\0004E7BC.sa1mdl");
	RemovePositionRotation_Object(ChaoRaceNumber0);
	ChaoRaceNumber1 = LoadModel("system\\data\\AL_RACE\\Models\\0004E8C0.sa1mdl");
	RemovePositionRotation_Object(ChaoRaceNumber1);
	ChaoRaceNumber2 = LoadModel("system\\data\\AL_RACE\\Models\\0004E9C4.sa1mdl");
	RemovePositionRotation_Object(ChaoRaceNumber2);
	ChaoRaceNumber3 = LoadModel("system\\data\\AL_RACE\\Models\\0004EAC8.sa1mdl");
	RemovePositionRotation_Object(ChaoRaceNumber3);
	ChaoRaceNumber4 = LoadModel("system\\data\\AL_RACE\\Models\\0004EBCC.sa1mdl");
	RemovePositionRotation_Object(ChaoRaceNumber4);
	ChaoRaceNumber5 = LoadModel("system\\data\\AL_RACE\\Models\\0004ECD0.sa1mdl");
	RemovePositionRotation_Object(ChaoRaceNumber5);
	ChaoRaceNumber6 = LoadModel("system\\data\\AL_RACE\\Models\\0004EDD4.sa1mdl");
	RemovePositionRotation_Object(ChaoRaceNumber6);
	ChaoRaceNumber7 = LoadModel("system\\data\\AL_RACE\\Models\\0004EED8.sa1mdl");
	RemovePositionRotation_Object(ChaoRaceNumber7);
	ChaoRaceLetters = LoadModel("system\\data\\AL_RACE\\Models\\00048224.sa1mdl");
	RemovePositionRotation_Object(ChaoRaceLetters);
	ChaoRaceWaterfall1 = LoadModel("system\\data\\AL_RACE\\Models\\00046254.sa1mdl");
	RemovePositionRotation_Object(ChaoRaceWaterfall1);
	ChaoRaceWaterfall1->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_CLAMP_V;
	AddUVAnimation_Permanent(LevelIDs_ChaoRace, 0, ChaoRaceWaterfall1->basicdxmodel->meshsets[0].vertuv, 48, 0, 0, -6);
	ChaoRaceWaterfall2 = LoadModel("system\\data\\AL_RACE\\Models\\00045EB4.sa1mdl");
	RemovePositionRotation_Object(ChaoRaceWaterfall2);
	ChaoRaceWaterfall2->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_CLAMP_V;
	AddUVAnimation_Permanent(LevelIDs_ChaoRace, 0, ChaoRaceWaterfall2->basicdxmodel->meshsets[0].vertuv, 80, 0, 0, -6);
	ChaoRaceSkyboxBottom = LoadModel("system\\data\\AL_RACE\\Models\\0002A888.sa1mdl");
	ChaoRaceSkyboxBottom->basicdxmodel->mats[0].attr_texId = 0;
	ChaoRaceSkyboxMain = LoadModel("system\\data\\AL_RACE\\Models\\0001C628.sa1mdl");
	ChaoRaceStartMark1 = LoadModel("system\\data\\AL_RACE\\Models\\000445A0.sa1mdl");
	ChaoRaceStartMark2 = LoadModel("system\\data\\AL_RACE\\Models\\000459E4.sa1mdl");
	ChaoRaceCracker = LoadModel("system\\data\\AL_RACE\\Models\\00046364.sa1mdl");
	ChaoRaceBall = LoadModel("system\\data\\AL_MAIN\\Models\\0014B2C0.sa1mdl"); // This is in AL_MAIN
	// Chao Race Entry
	if (EnableLobby)
	{
		WriteCall((void*)0x0071C0CF, BowChaoThing);
		WriteJump((void*)0x007199B0, LoadRaceEntryX);
		WriteCall((void*)0x0072C618, ExitRaceEntry);
		WriteCall((void*)0x0071D17A, LoadSADXEntry);
		WriteData<5>((void*)0x0071D158, 0x90); // Don't move Sanic
		WriteData<5>((void*)0x0071CEE0, 0x90); // Don't mess with entry button
		WriteData<5>((void*)0x0071CEC2, 0x90); // Don't mess with entry button
		RemoveVertexColors_Object((NJS_OBJECT*)0x33AEF88); // Old Chao Race button
	}
	// Chao Race stuff
	WriteData((int**)0x751B11, &CurrentChaoStage); // Restore Chao Race jewel by replacing the invalid pointer with something that always returns something
	WriteCall((void*)0x72E688, LoadChaoRaceJewelAndText);
	WriteCall((void*)0x719D8C, LoadObjChaoRaceTexlist);
	//BuildChaoFontUVMap(); // Create UV maps for the Chao name font (better to run this once and use the output statically)
	// Convert the first letter in Chaclon's name to uppercase
	ChaclonNameFix1 = 0x23;
	ChaclonNameFix2 = 0x23;
	ChaclonNameFix3 = 0x23;
	ChaclonNameFix4 = 0x23;
	WriteCall((void*)0x751746, ChaoRaceRedArrowHook);
	WriteCall((void*)0x76DA03, RenderChaoRaceLetters_Fix); // Chao Race letters fix
	WriteCall((void*)0x72E2D3, ChaoRaceSoundHook_Start); // Play sound and load "Start" graphics
	WriteCall((void*)0x72F031, ChaoRaceSoundHook_Goal); // Play sound and load "Goal" graphics
	WriteJump((void*)0x71BF20, LoadChaoRaceCrackers); // Load crackers
	WriteCall((void*)0x75A550, RenderChaoBall); // Chao Race ball model
	WriteData((NJS_OBJECT**)0x883E68, ChaoRaceStartMark2); // Start Mark in Chao Race
	WriteJump((void*)0x00719DB0, LoadChaoRaceX);
	WriteData((float*)0x00719D74, -16000.0f); // Draw distance
}

void ChaoRace_OnFrame()
{
	// Chao Race Entry
	if (CurrentChaoStage == SADXChaoStage_RaceEntry && !IsGamePaused() && EnableLobby)
	{
		if (SkipSA1Entry)
		{
			((NJS_MATERIAL*)0x033AEB70)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
		}
		else
		{
			((NJS_MATERIAL*)0x033AEB70)->attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		}
		// Cheer Chao hologram
		if (FrameCounter % (35 / FramerateSetting) == 0) cheerchaoanim = !cheerchaoanim;
		if (cheerchaoanim == true) matlistCHAO_03270F10[0].attr_texId = 34; else matlistCHAO_03270F10[0].attr_texId = 35;
		// Letters
		c1 = letteranims[letterframe][0];
		h1 = letteranims[letterframe][1];
		a1 = letteranims[letterframe][2];
		o1 = letteranims[letterframe][3];
		r2 = letteranims[letterframe][4];
		a2 = letteranims[letterframe][5];
		c2 = letteranims[letterframe][6];
		e2 = letteranims[letterframe][7];
		if (c1) ChaoRaceLetters->basicdxmodel->mats[0].attr_texId = 19; else ChaoRaceLetters->basicdxmodel->mats[0].attr_texId = 20;
		if (h1) ChaoRaceLetters->basicdxmodel->mats[1].attr_texId = 21; else ChaoRaceLetters->basicdxmodel->mats[1].attr_texId = 18;
		if (a1) ChaoRaceLetters->basicdxmodel->mats[2].attr_texId = 22; else ChaoRaceLetters->basicdxmodel->mats[2].attr_texId = 23;
		if (o1) ChaoRaceLetters->basicdxmodel->mats[3].attr_texId = 24; else ChaoRaceLetters->basicdxmodel->mats[3].attr_texId = 25;
		if (r2) ChaoRaceLetters->basicdxmodel->mats[6].attr_texId = 26; else ChaoRaceLetters->basicdxmodel->mats[6].attr_texId = 27;
		if (a2) ChaoRaceLetters->basicdxmodel->mats[7].attr_texId = 28; else ChaoRaceLetters->basicdxmodel->mats[7].attr_texId = 29;
		if (c2) ChaoRaceLetters->basicdxmodel->mats[5].attr_texId = 30; else ChaoRaceLetters->basicdxmodel->mats[5].attr_texId = 31;
		if (e2) ChaoRaceLetters->basicdxmodel->mats[4].attr_texId = 32; else ChaoRaceLetters->basicdxmodel->mats[4].attr_texId = 33;
		if (FrameCounter % (10 / FramerateSetting) == 0) letterframe++;
		if (letterframe > LengthOfArray(letteranims)) letterframe = 0;
		// Exit
		auto entity = EntityData1Ptrs[0];
		if (entity != nullptr)
		{
			if (entity->Position.x > 2110 && !SkipSA1Entry)
			{
				sub_715700(4);
			}
		}
		if (!SkipSA1Entry && IsPlayerInsideSphere(&racebutton, 5.0f))
		{
			SkipSA1Entry = true;
			sub_715700(2);
		}
		// Chao bowing when player leaves the room
		if (bowchaoanim == 1)
		{
			bowchaoframe = bowchaoframe + (0.25f*FramerateSetting);
		}
		if (bowchaoframe >= 20)
		{
			bowchaoanim = 2;
			bowchaoframe = 0;
		}
	}
	// Chao Race
	if (AL_RACE_1_Info && CurrentChaoStage == SADXChaoStage_Race && !IsGamePaused())
	{
		if (!ChaoRaceEnded) ChaoRaceTimer += FramerateSetting;
		// Winning the race (not jewel)
		if (!MedalTextLoaded)
		{
			if (ChaoRaceOver > 0 && CrackersShouldFire > 0)
			{
				if (ChaoRaceBeginnerJewelParty != 1) ChaoRaceStartGoalSprite_Load(2);
				MedalTextLoaded = true;
			}
		}
	}
	if (CurrentChaoStage != SADXChaoStage_Race)
	{
		ChaoRaceTimer = 0;
		ChaoRaceEnded = false;
		MedalTextLoaded = false;
		CrackersShouldFire = 0;
	}
}