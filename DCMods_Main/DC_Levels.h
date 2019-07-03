#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <string>

class IniFile;
#define NJD_CUSTOMFLAG_TEXANIM1		(BIT_0)
#define NJD_CUSTOMFLAG_TEXANIM2		(BIT_1)
#define NJD_CUSTOMFLAG_UVANIM1		(BIT_2)
#define NJD_CUSTOMFLAG_UVANIM2		(BIT_3)
#define NJD_CUSTOMFLAG_WHITE		(BIT_4)
#define NJD_CUSTOMFLAG_NIGHT		(BIT_5)
#define NJD_CUSTOMFLAG_RESERVED		(BIT_6)
#define NJD_CUSTOMFLAG_NO_REJECT	(BIT_7)

DataPointer(int, FramerateSetting_Config, 0x0089295C);
DataPointer(int, FramerateSetting, 0x0389D7DC);
DataPointer(int, DroppedFrames, 0x03B1117C);
DataPointer(int, CutsceneID, 0x3B2C570);
DataPointer(float, EnvMap1, 0x038A5DD0);
DataPointer(float, EnvMap2, 0x038A5DE4);
DataPointer(float, EnvMap3, 0x038A5E00);
DataPointer(float, EnvMap4, 0x038A5E04);
DataArray(LandTable*, LandTableArray, 0x97DBE8, 193);
FunctionPointer(void, DrawModelCallback_QueueModel, (void(__cdecl* function)(NJS_MODEL_SADX*), NJS_MODEL_SADX* data, float depth, QueuedModelFlagsB queueflags), 0x404840);
FunctionPointer(void, DrawModelCallback_QueueObject, (void(__cdecl* function)(NJS_OBJECT*), NJS_OBJECT* data, float depth, QueuedModelFlagsB queueflags), 0x404840);
FunctionPointer(void, DrawModelCallback_QueueObjectMaster, (void(__cdecl* function)(ObjectMaster*), ObjectMaster* data, float depth, QueuedModelFlagsB queueflags), 0x404840);
FunctionPointer(void, ProcessModelNode_TryReallyHard_2, (NJS_OBJECT* a1), 0x40A280);
FunctionPointer(void, njAction_ReallyHard, (NJS_ACTION* a1, float frameNumber), 0x409FB0);
FunctionPointer(void, DrawModel_Queue_407CF0, (NJS_MODEL_SADX* a1, int blend), 0x407FC0);

typedef enum
{
	SETFixes_Off	= 0,
	SETFixes_Normal	= 1,
	SETFixes_Extra	= 2,
} SETFixes_e;

extern SETFixes_e EnableSETFixes;
extern HelperFunctions HelperFunctionsGlobal;

extern int SADXWaveAnimation;
extern int CutsceneSkipMode;
extern bool EnableSpeedFixes;
extern bool DLLLoaded_DLCs;
extern bool DLLLoaded_SA1Chars;
extern bool DLLLoaded_Lantern;
extern bool DLLLoaded_HDGUI;
extern bool DLLLoaded_SADXFE;
extern bool EnableDCBranding;
extern bool EnableEmeraldCoast;
extern bool IamStupidAndIWantFuckedUpOcean;
extern bool EnableWindyValley;
extern bool EnableTwinklePark;
extern bool EnableSpeedHighway;
extern bool EnableRedMountain;
extern bool EnableSkyDeck;
extern bool EnableLostWorld;
extern bool EnableIceCap;
extern bool EnableCasinopolis;
extern bool CowgirlOn;
extern bool EnableFinalEgg;
extern bool EnableHotShelter;
extern bool EnableStationSquare;
extern bool EnableMysticRuins;
extern bool EnableEggCarrier;
extern bool EnablePast;
extern bool DisableAllVideoStuff;
extern bool SADXWater_EmeraldCoast;
extern bool SADXWater_StationSquare;
extern bool SADXWater_MysticRuins;
extern bool SADXWater_EggCarrier;
extern bool SADXWater_Past;
extern bool EnableChaos0;
extern bool EnableChaos2;
extern bool EnableChaos4;
extern bool EnableChaos6;
extern bool EnablePerfectChaos;
extern bool EnableEggHornet;
extern bool EnableEggWalker;
extern bool EnableEggViper;
extern bool EnableE101;
extern bool EnableZeroE101R;
extern bool EnableTwinkleCircuit;
extern bool EnableSandHill;
extern bool EnableSkyChaseFixes;
extern bool EnableSkyChaseEnemyModels;
extern bool EnableSSGarden;
extern bool EnableMRGarden;
extern bool EnableECGarden;
extern bool ReplaceEggs;
extern int ReplaceFruits;
extern NJS_TEXLIST texlist_sadxwtr_beach;
extern NJS_TEXLIST texlist_sadxwtr_sewers;
extern NJS_TEXLIST texlist_sadxwtr_waves;
extern SecondaryEntrance BK_SSGardenStartPoint;
extern std::string ModPath;

extern LandTable **___LANDTABLEBOSSCHAOS0;
extern NJS_ACTION **___BOSSCHAOS0_ACTIONS;
extern NJS_OBJECT **___BOSSCHAOS0_OBJECTS;
extern NJS_TEXLIST **___BOSSCHAOS0_TEXLISTS;
extern NJS_TEXLIST **___ADV00_TEXLISTS;
extern LandTable **___LANDTABLESS;
extern NJS_OBJECT **___MILES_OBJECTS;
extern NJS_TEXLIST **___ADV01_TEXLISTS;
extern NJS_MODEL_SADX **___ADV01_MODELS;
extern NJS_TEXLIST **___ADV01C_TEXLISTS;
extern LandTable **___LANDTABLEEC;
extern LandTable **___LANDTABLEECC;
extern NJS_OBJECT **___ADV01C_OBJECTS;
extern NJS_ACTION **___ADV01C_ACTIONS;
extern NJS_ACTION **___ADV01_ACTIONS;
extern NJS_OBJECT **___ADV01_OBJECTS;
extern NJS_OBJECT **___ADV01EC00_OBJECTS;
extern NJS_MODEL_SADX **___ADV01C_MODELS;
extern NJS_TEXLIST **___ADV02_TEXLISTS;
extern NJS_MODEL_SADX **___ADV02_MODELS;
extern NJS_OBJECT **___ADV02_OBJECTS;
extern NJS_OBJECT **___ADV02MR02_OBJECTS;
extern NJS_ACTION **___ADV02_ACTIONS;
extern LandTable **___LANDTABLEMR;
extern NJS_TEXLIST **___ADV03_TEXLISTS;
extern LandTable **___LANDTABLEPAST;
extern NJS_OBJECT **___ADV03PAST01_OBJECTS;
extern NJS_OBJECT **___ADV03PAST02_OBJECTS;
extern NJS_OBJECT **___ADV03_OBJECTS;

#define ReplacePVM(a) HelperFunctionsGlobal.ReplaceFile("system\\" a ".PVM", "system\\" a "_DC.PVM")
#define ReplacePVR(a) HelperFunctionsGlobal.ReplaceFile("system\\" a ".PVR", "system\\" a "_DC.PVR")
#define ReplaceGeneric(a,b) HelperFunctionsGlobal.ReplaceFile("system\\" a, "system\\" b)
#define ReplaceBIN(a,b) HelperFunctionsGlobal.ReplaceFile("system\\" a ".BIN", "system\\" b ".BIN")
#define ReplaceBIN_DC(a) HelperFunctionsGlobal.ReplaceFile("system\\" a ".BIN", "system\\" a "_DC.BIN")
#define AddSETFix(a) HelperFunctionsGlobal.ReplaceFile("system\\" a ".BIN", "system\\" a "_S.BIN")
#define AddSETFix_Extra(a) HelperFunctionsGlobal.ReplaceFile("system\\" a ".BIN", "system\\" a "_E.BIN")
#define ReplacePVMX_SADXStyleWater(a) HelperFunctionsGlobal.ReplaceFile("system\\" a ".PVM", "system\\" a "W.PVM")

extern set_shader_flags* set_shader_flags_ptr;
extern material_register* material_register_ptr;
extern material_unregister* material_unregister_ptr;
extern set_diffuse* set_diffuse_ptr;
extern set_specular* set_specular_ptr;
extern set_alpha_reject* set_alpha_reject_ptr;
extern set_blend_factor* set_blend_factor_ptr;
extern set_diffuse_blend* set_diffuse_blend_ptr;
extern set_specular_blend* set_specular_blend_ptr;

struct __declspec(align(2)) ObjectThingC
{
	NJS_OBJECT *object;
	void(__cdecl *function)(NJS_OBJECT *);
};

struct SubtitleThing
{
	char field_0;
	char gap1[1];
	float px;
	float py;
	int field_6;
	int field_8;
	float sx;
	float sy;
	__int16 width;
	__int16 height;
	__int16 field_12;
	__int16 field_14;
	__int16 field_16;
	__int16 field_18;
	__int16 field_1A;
	NJS_BGRA colorA;
	NJS_COLOR colorB;
	float scale;
	void *data_or_d3dtexture;
	Uint32 gbix;
	NJS_TEXLIST tlist;
	NJS_TEXNAME texname;
	int flags;
};

struct TextureAnimation
{
	int level;
	int act;
	NJS_MATERIAL* material;
	int Speed;
	bool NonSequential;
	int Frame1;
	int Frame2;
	int Frame3;
	int Frame4;
	int Frame5;
	int Frame6;
	int Frame7;
	int Frame8;
	int Frame9;
	int Frame10;
	int Frame11;
	int Frame12;
	int Frame13;
	int Frame14;
	int Frame15;
	int Frame16;
};

struct UVAnimation
{
	int level;
	int act;
	NJS_TEX* uv_pointer;
	int uv_count;
	int timer;
	int u_speed;
	int v_speed;
	int u_shift;
	int v_shift;
};

//Level files
extern LandTableInfo *STG00_0_Info;
extern LandTableInfo *STG01_0_Info;
extern LandTableInfo *STG01_1_Info;
extern LandTableInfo *STG01_2_Info;
extern LandTableInfo *STG02_0_Info;
extern LandTableInfo *STG02_1_Info;
extern LandTableInfo *STG02_2_Info;
extern LandTableInfo *STG03_0_Info;
extern LandTableInfo *STG03_1_Info;
extern LandTableInfo *STG03_2_Info;
extern LandTableInfo *STG04_0_Info;
extern LandTableInfo *STG04_1_Info;
extern LandTableInfo *STG04_2_Info;
extern LandTableInfo *STG05_0_Info;
extern LandTableInfo *STG05_1_Info;
extern LandTableInfo *STG05_2_Info;
extern LandTableInfo *STG06_0_Info;
extern LandTableInfo *STG06_1_Info;
extern LandTableInfo *STG06_2_Info;
extern LandTableInfo *STG07_0_Info;
extern LandTableInfo *STG07_1_Info;
extern LandTableInfo *STG07_2_Info;
extern LandTableInfo *STG08_0_Info;
extern LandTableInfo *STG08_1_Info;
extern LandTableInfo *STG08_2_Info;
extern LandTableInfo *STG08_3_Info;
extern LandTableInfo *STG09_0_Info;
extern LandTableInfo *STG09_1_Info;
extern LandTableInfo *STG09_2_Info;
extern LandTableInfo *STG09_3_Info;
extern LandTableInfo *STG10_0_Info;
extern LandTableInfo *STG10_1_Info;
extern LandTableInfo *STG10_2_Info;
extern LandTableInfo *STG12_0_Info;
extern LandTableInfo *STG12_1_Info;
extern LandTableInfo *STG12_2_Info;
extern LandTableInfo *B_CHAOS0_Info;
extern LandTableInfo *B_CHAOS2_Info;
extern LandTableInfo *B_CHAOS4_Info;
extern LandTableInfo *B_CHAOS6_0_Info;
extern LandTableInfo *B_CHAOS6_1_Info;
extern LandTableInfo *B_CHAOS7_Info;
extern LandTableInfo *B_EGM1_Info;
extern LandTableInfo *B_EGM2_Info;
extern LandTableInfo *B_EGM3_Info;
extern LandTableInfo *B_E101_Info;
extern LandTableInfo *B_ROBO_Info;
extern LandTableInfo *B_E101_R_Info;
extern LandTableInfo *ADV00_0_Info;
extern LandTableInfo *ADV00_1_Info;
extern LandTableInfo *ADV00_2_Info;
extern LandTableInfo *ADV00_3_Info;
extern LandTableInfo *ADV00_4_Info;
extern LandTableInfo *ADV00_5_Info;
extern LandTableInfo *ADV01_0_Info;
extern LandTableInfo *ADV01_1_Info;
extern LandTableInfo *ADV01_2_Info;
extern LandTableInfo *ADV01_3_Info;
extern LandTableInfo *ADV01_4_Info;
extern LandTableInfo *ADV01_5_Info;
extern LandTableInfo *ADV01C_0_Info;
extern LandTableInfo *ADV01C_1_Info;
extern LandTableInfo *ADV01C_2_Info;
extern LandTableInfo *ADV01C_3_Info;
extern LandTableInfo *ADV01C_4_Info;
extern LandTableInfo *ADV01C_5_Info;
extern LandTableInfo *ADV02_0_Info;
extern LandTableInfo *ADV02_1_Info;
extern LandTableInfo *ADV02_2_Info;
extern LandTableInfo *ADV02_3_Info;
extern LandTableInfo *ADV03_0_Info;
extern LandTableInfo *ADV03_1_Info;
extern LandTableInfo *ADV03_2_Info;
extern LandTableInfo *MINICART_Info;
extern LandTableInfo *SBOARD_Info;
extern LandTableInfo *AL_GARDEN00_Info;
extern LandTableInfo *AL_GARDEN01_Info;
extern LandTableInfo *AL_GARDEN02_Info;
extern LandTableInfo *AL_RACE_0_Info;
extern LandTableInfo *AL_RACE_1_Info;
extern TextureAnimation TextureAnimationData[];
extern TextureAnimation TextureAnimationData_Permanent[];
extern UVAnimation UVAnimationData[];
extern UVAnimation UVAnimationData_Permanent[];

//Level load functions
void LoadLevelFiles_STG01();
void LoadLevelFiles_STG02();
void LoadLevelFiles_STG03();
void LoadLevelFiles_STG04();
void LoadLevelFiles_STG05();
void LoadLevelFiles_STG06();
void LoadLevelFiles_STG07();
void LoadLevelFiles_STG08();
void LoadLevelFiles_STG09();
void LoadLevelFiles_STG10();
void LoadLevelFiles_STG12();
void LoadLevelFiles_B_CHAOS0();
void LoadLevelFiles_B_CHAOS2();
void LoadLevelFiles_B_CHAOS4();
void LoadLevelFiles_B_CHAOS6();
void LoadLevelFiles_B_CHAOS7();
void LoadLevelFiles_B_EGM1();
void LoadLevelFiles_B_EGM2();
void LoadLevelFiles_B_EGM3();
void LoadLevelFiles_B_ROBO();
void LoadLevelFiles_B_E101();
void LoadLevelFiles_B_E101_R();
void LoadLevelFiles_ADV00();
void LoadLevelFiles_ADV01();
void LoadLevelFiles_ADV01C();
void LoadLevelFiles_ADV02();
void LoadLevelFiles_ADV03();
void LoadLevelFiles_MINICART();
void LoadLevelFiles_SBOARD();
void LoadLevelFiles_Chao();
void LoadLevelFiles_AL_RACE();
//void LoadLevelFiles_GARDEN00();
//void LoadLevelFiles_GARDEN01();
//void LoadLevelFiles_GARDEN02();

void CheckAndUnloadLevelFiles();
void UnloadLevelFiles_STG01();
void UnloadLevelFiles_STG02();
void UnloadLevelFiles_STG03();
void UnloadLevelFiles_STG04();
void UnloadLevelFiles_STG05();
void UnloadLevelFiles_STG06();
void UnloadLevelFiles_STG07();
void UnloadLevelFiles_STG08();
void UnloadLevelFiles_STG09();
void UnloadLevelFiles_STG10();
void UnloadLevelFiles_STG12();
void UnloadLevelFiles_B_CHAOS0();
void UnloadLevelFiles_B_CHAOS2();
void UnloadLevelFiles_B_CHAOS4();
void UnloadLevelFiles_B_CHAOS6();
void UnloadLevelFiles_B_CHAOS7();
void UnloadLevelFiles_B_EGM1();
void UnloadLevelFiles_B_EGM2();
void UnloadLevelFiles_B_EGM3();
void UnloadLevelFiles_B_ROBO();
void UnloadLevelFiles_B_E101();
void UnloadLevelFiles_B_E101_R();
void UnloadLevelFiles_ADV00();
void UnloadLevelFiles_ADV01();
void UnloadLevelFiles_ADV01C();
void UnloadLevelFiles_ADV02();
void UnloadLevelFiles_ADV03();
void UnloadLevelFiles_MINICART();
void UnloadLevelFiles_SBOARD();
void UnloadLevelFiles_Chao();
void UnloadLevelFiles_AL_RACE();

void FixMRBase_Apply(const IniFile *config, const HelperFunctions &helperFunctions);
void Branding_Init(const IniFile *config, const HelperFunctions &helperFunctions);
void Branding_OnFrame();
void ADV00_Init();
void ADV00_OnFrame();
void ADV01_Init(const IniFile *config, const HelperFunctions &helperFunctions);
void ADV01_OnFrame();
void ADV01C_Init(const IniFile *config, const HelperFunctions &helperFunctions);
void ADV01C_OnFrame();
void ADV02_Init();
void ADV02_OnFrame();
void ADV03_Init();
void ADV03_OnFrame();
void Bosses_Init();
void EggViper_OnFrame();
void PerfectChaos_OnFrame();
void EggHornet_OnFrame();
void Zero_OnFrame();
void E101R_OnFrame();
void Chaos0_Init();
void Chaos2_Init();
void Chaos4_Init();
void Chaos6_Init();
void PerfectChaos_Init();
void EggHornet_Init();
void EggViper_Init();
void EggWalker_Init();
void Zero_Init();
void E101_Init();
void E101R_Init();
void EmeraldCoast_Init();
void EmeraldCoast_OnFrame();
void WindyValley_Init();
void WindyValley_OnFrame();
void TwinklePark_Init();
void TwinklePark_OnFrame();
void SpeedHighway_Init();
void SpeedHighway_OnFrame();
void RedMountain_Init();
void RedMountain_OnFrame();
void SkyDeck_Init();
void SkyDeck_OnFrame();
void LostWorld_Init();
void LostWorld_OnFrame();
void IceCap_Init();
void IceCap_OnFrame();
void Casinopolis_Init();
void Casinopolis_OnFrame();
void FinalEgg_Init();
void FinalEgg_OnFrame();
void HotShelter_Init();
void HotShelter_OnFrame();
void Subgames_Init();
//void Subgames_OnFrame();
void ChaoGardens_Init(const IniFile *config, const HelperFunctions &helperFunctions);
void ChaoGardens_OnFrame();
void ChaoRace_Init(const IniFile *config, const HelperFunctions &helperFunctions);
void ChaoRace_OnFrame();
void General_Init(const IniFile *config, const HelperFunctions &helperFunctions);
void General_OnFrame();
void General_OnInput();
void Videos_Init(const IniFile *config, const HelperFunctions &helperFunctions);
void Videos_OnFrame();
void Videos_OnInput();
void SkyChaseFix_Init();
void SkyChaseFix_UpdateBounds();
void Branding_SetUpVariables();
void SpeedFixes_Init();
void SpeedFixes_OnFrame();
void SADXStyleWater_Init(const IniFile *config, const HelperFunctions &helperFunctions);
void SADXStyleWater_OnFrame();
void __cdecl EmeraldCoast_OceanDraw_SADXStyle(OceanData *o);
void __cdecl MysticRuins_OceanDraw_SADXStyle(OceanData *o);
void __cdecl EggCarrier_OceanDraw_SADXStyle(OceanData *o);
void __cdecl Past_OceanDraw_SADXStyle(OceanData *o);
void LoadBossECOceanPVM(const char *filename, NJS_TEXLIST *texlist);
void LoadBossECOceanTexlist();

bool ForceWhiteDiffuse(NJS_MATERIAL* material, uint32_t flags);
bool ForceWhiteDiffuse3_Night(NJS_MATERIAL* material, uint32_t flags);
bool ForceWhiteDiffuse3Specular1(NJS_MATERIAL* material, uint32_t flags);
bool ChaosPuddleFunc(NJS_MATERIAL* material, uint32_t flags);
bool Chaos2Function(NJS_MATERIAL* material, uint32_t flags);
bool Chaos4NPCFunction(NJS_MATERIAL* material, uint32_t flags);
void RemoveMaterialColors(NJS_MATERIAL* material);
bool DisableAlphaRejection(NJS_MATERIAL* material, uint32_t flags);

bool ForceDiffuse0Specular0(NJS_MATERIAL* material, uint32_t flags);
bool ForceDiffuse0Specular1(NJS_MATERIAL* material, uint32_t flags);
bool ForceDiffuse0Specular0or1(NJS_MATERIAL* material, uint32_t flags);
bool ForceDiffuse2Specular2(NJS_MATERIAL* material, uint32_t flags);
bool ForceDiffuse2Specular3(NJS_MATERIAL* material, uint32_t flags);
bool ForceDiffuse4Specular5(NJS_MATERIAL* material, uint32_t flags);

void DisplayVideoFadeout(int fadeout, int mode);

void AnimateTexture(TextureAnimation *texanim);
void AnimateUVs(UVAnimation *animation);
void ClearTextureAnimationData();
void AddTextureAnimation(int level, int act, NJS_MATERIAL* material, bool nonsequential, int speed, int frame1, int frame2, int frame3, int frame4, int frame5, int frame6, int frame7, int frame8, int frame9, int frame10, int frame11, int frame12, int frame13, int frame14, int frame15, int frame16);
void AddTextureAnimation_Permanent(int level, int act, NJS_MATERIAL* material, bool nonsequential, int speed, int frame1, int frame2, int frame3, int frame4, int frame5, int frame6, int frame7, int frame8, int frame9, int frame10, int frame11, int frame12, int frame13, int frame14, int frame15, int frame16);
void AddUVAnimation(int level, int act, NJS_TEX* uv, int uv_count, int timer, int u_speed, int v_speed);
void AddUVAnimation_Permanent(int level, int act, NJS_TEX* uv, int uv_count, int timer, int u_speed, int v_speed);
void RemoveVertexColors_Object(NJS_OBJECT *obj);
void RemoveVertexColors_Model(NJS_MODEL_SADX *model);
NJS_OBJECT* LoadModel(const char *ModelName, bool sort);
void RemoveMaterialColors_Landtable(LandTable *landtable);
void SortModel(NJS_OBJECT *model);
void LoadModel_ReplaceMeshes(NJS_OBJECT *object, const char *ModelName);
void AddAlphaRejectMaterial(NJS_MATERIAL *material);
void AddWhiteDiffuseMaterial(NJS_MATERIAL *material);
void RemoveAlphaRejectMaterial(NJS_MATERIAL *material);
void RemoveWhiteDiffuseMaterial(NJS_MATERIAL *material);
void AddBossMaterial(NJS_MATERIAL *material);
void ForceLevelSpecular_Object(NJS_OBJECT *obj);
void ForceObjectSpecular_Object(NJS_OBJECT *obj);
void AddBossMaterials_Object(NJS_OBJECT *obj);
void SwapMeshsets(NJS_OBJECT* object, int mesh1, int mesh2);