#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <string>

#define SQUARE(x) (x)*(x) 
#define PYTHAGORAS(x,y) sqrt(SQUARE(x) + SQUARE(y))

//Nullsub calls for other mods to hook
DataPointer(Uint8, nullsub_ADV00, 0x4231E6);
DataPointer(Uint8, nullsub_ADV01, 0x4232C9);
DataPointer(Uint8, nullsub_ADV01C, 0x4233BB);
DataPointer(Uint8, nullsub_ADV02, 0x4234AD);
DataPointer(Uint8, nullsub_ADV03, 0x423554);
DataPointer(Uint8, nullsub_STG00, 0x422B2A);
DataPointer(Uint8, nullsub_STG01, 0x422B68);
DataPointer(Uint8, nullsub_STG02, 0x422BD3);
DataPointer(Uint8, nullsub_STG03, 0x422C3E);
DataPointer(Uint8, nullsub_STG04, 0x422CA9);
DataPointer(Uint8, nullsub_STG05, 0x422D14);
DataPointer(Uint8, nullsub_STG06, 0x422D84);
DataPointer(Uint8, nullsub_STG07, 0x422DEF);
DataPointer(Uint8, nullsub_STG08, 0x422E5A);
DataPointer(Uint8, nullsub_STG09, 0x422EE8);
DataPointer(Uint8, nullsub_STG10, 0x422F71);
DataPointer(Uint8, nullsub_STG12, 0x422FFF);
DataPointer(Uint8, nullsub_B_CHAOS0, 0x423088);
DataPointer(Uint8, nullsub_B_CHAOS2, 0x4230B7);
DataPointer(Uint8, nullsub_B_CHAOS4, 0x4230CD);
DataPointer(Uint8, nullsub_B_CHAOS6, 0x4230E3);
DataPointer(Uint8, nullsub_B_CHAOS7, 0x423108);
DataPointer(Uint8, nullsub_B_EGM1, 0x423146);
DataPointer(Uint8, nullsub_B_EGM2, 0x42315F);
DataPointer(Uint8, nullsub_B_EGM3, 0x423178);
DataPointer(Uint8, nullsub_B_ROBO, 0x423196);
DataPointer(Uint8, nullsub_B_E101, 0x4231AF);
DataPointer(Uint8, nullsub_B_E101R, 0x4231CD);
DataPointer(Uint8, nullsub_SHOOTING1, 0x4236B1);
DataPointer(Uint8, nullsub_SHOOTING2, 0x4236E0);
DataPointer(Uint8, nullsub_SBOARD, 0x42370F);
DataPointer(Uint8, nullsub_MINICART, 0x4235EC);
DataPointer(Uint8, nullsub_Chao, 0x423795);

struct CollisionData_
{
	char kind;
	char form;
	char push;
	char damage;
	unsigned int attr;
	NJS_POINT3 center;
	float a;
	float b;
	float c;
	float d;
	int angx;
	int angy;
	int angz;
};

struct BUBBLE
{
	char mode;
	char flag;
	char id;
	char timer;
	char posnum;
	float size;
	float scale_x;
	float swing;
	int spiral;
	int spiral_add;
	NJS_POINT3* spline;
	float t;
	float tadd;
	float tmax;
};

struct BUBBLE_LIST
{
	__int16 id;
	char num;
	NJS_POINT3* pos;
};

struct BUBBLE_TABLE
{
	unsigned __int16 objnum;
	NJS_POINT3 pos;
	int ang[3];
};

struct BUBBLE_DATA
{
	char object_num;
	char spline_num;
	BUBBLE_LIST* list;
	BUBBLE_TABLE* tbl;
	float scl;
};


enum AdvaStatEnum
{
	ADVA_STAT_REQWAIT = 0x0,
	ADVA_STAT_FADEIN = 0x1,
	ADVA_STAT_KEEP = 0x2,
	ADVA_STAT_FADEOUT = 0x3,
	ADVA_STAT_MAX = 0x4,
};

enum AdvaModeEnum
{
	ADVA_MODE_NONE = 0x0,
	ADVA_MODE_CHAR_SEL = 0x1,
	ADVA_MODE_FILE_SEL = 0x2,
	ADVA_MODE_TRIALACT_SEL = 0x3,
	ADVA_MODE_SND_TEST = 0x4,
	ADVA_MODE_TITLE_NEW = 0x5,
	ADVA_MODE_TITLE_MENU = 0x6,
	ADVA_MODE_OPTION_SEL = 0x7,
	ADVA_MODE_EXPLAIN = 0x8,
	ADVA_MODE_MINIGAME_SEL = 0x9,
	ADVA_MODE_EMBLEMVIEW = 0xA,
	ADVA_MODE_INETDEMO = 0xB,
	ADVA_MODE_TVSETTING = 0xC,
	ADVA_MODE_PUTI = 0xD,
	ADVA_MODE_TITLE_MENU_SUB = 0xE,
	ADVA_MODE_TITLE_MENU_LB = 0xF,
	ADVA_MODE_UN_TRIAL_GAME = 0x10,
	ADVA_MODE_UN_LEAD_BORADS = 0x11,
	ADVA_MODE_UN_ACHIVEMENT = 0x12,
	ADVA_MODE_OPTION_MENU_SUB = 0x13,
	ADVA_MODE_HOW_TO_PLAY = 0x14,
	ADVA_MODE_HOW_TO_PLAY2 = 0x15,
	ADVA_MODE_LB_MENU = 0x16,
	ADVA_MODE_OP_CREDITS = 0x17,
	ADVA_MODE_VANISH = 0x18,
	ADVA_MODE_END = 0x19,
	ADVA_MODE_END2 = 0x1A,
	ADVA_MODE_MAX = 0x1B,
};

enum TitleNewSbMdEnum
{
	TITLENEW_SMD_STAY = 0x0,
	TITLENEW_SMD_ALERT = 0x1,
	TITLENEW_SMD_STAY_MAIN = 0x2,
	TITLENEW_SMD_NWAIT = 0x3,
	TITLENEW_SMD_MAX = 0x4,
};

enum TitleMenuSbMdEnum
{
	TITLEMENU_SMD_STAY = 0x0,
	TITLEMENU_SMD_DECIDE = 0x1,
	TITLEMENU_SMD_STAY_S = 0x2,
	TITLEMENU_SMD_TO_DEMO = 0x3,
	TITLEMENU_SMD_TO_DEMO2 = 0x4,
	TITLEMENU_SMD_TO_MAINMENU = 0x5,
	TITLEMENU_SMD_NWAIT = 0x6,
	TITLEMENU_SMD_MAX = 0x7,
};

enum TitleMenuEnum
{
	OPTION_MENU_HOW2PLAY = 0x0,
	OPTION_MENU_CONTROLS = 0x1,
	OPTION_MENU_OPTIONS = 0x2,
	OPTION_MENU_CREDITS = 0x3,
	OPTION_MENU_BACK = 0x4,
	OPTION_MENU_MAX = 0x5,
};

struct __declspec(align(4)) TitleNewWk
{
	AdvaStatEnum Stat;
	AdvaModeEnum PrevMode;
	AdvaModeEnum NextMode;
	float BaseZ;
	float T;
	unsigned int BaseCol;
	TitleNewSbMdEnum SubMode;
	ObjectMaster* AlertTsk;
	char VMStatAll;
	int titletimer;
	unsigned int titleblinktimer;
	ObjectMaster* CamTskPtr;
	unsigned int wavetimer;
	unsigned int logotimer;
	int bBgmEnabled;
	unsigned int movetimer;
	float kumotimer;
	char kumoindex;
};

struct __declspec(align(2)) TitleMenuWk
{
	AdvaStatEnum Stat;
	AdvaModeEnum PrevMode;
	AdvaModeEnum NextMode;
	AdvaModeEnum NextModeSub;
	float BaseZ;
	float T;
	unsigned int BaseCol;
	TitleMenuSbMdEnum SubMode;
	TitleMenuEnum SelMenu;
	__int16 Cnt;
	char WakeFlg;
};

class IniFile;
#define NJD_CUSTOMFLAG_UVANIM3		(BIT_0)
#define NJD_CUSTOMFLAG_UVANIM4		(BIT_1)
#define NJD_CUSTOMFLAG_UVANIM1		(BIT_2)
#define NJD_CUSTOMFLAG_UVANIM2		(BIT_3)
#define NJD_CUSTOMFLAG_WHITE		(BIT_4)
#define NJD_CUSTOMFLAG_NIGHT		(BIT_5)
#define NJD_CUSTOMFLAG_RESERVED		(BIT_6)
#define NJD_CUSTOMFLAG_NO_REJECT	(BIT_7)

DataPointer(int, f_shadow, 0x3B2C5E4);
DataPointer(NJS_ARGB, nj_constant_material_, 0x3D0F7F0);
DataPointer(NJS_MATRIX, nj_unit_matrix_, 0x389D650);
DataPointer(NJS_MATRIX, MatrixStack_, 0x03A7CF48);
DataPointer(BUBBLE_LIST*, ChaosBubbleEffect_BubbleList, 0x3D0DC00);
DataPointer(float, min_fluctuation, 0x3D0DB90);
DataPointer(NJS_SPRITE, ChaosBubbleEffect_Sprite, 0x3D0DB9C);
DataPointer(NJS_ARGB, ChaosBubbleEffect_Color, 0x38E200C);
DataPointer(NJS_MATRIX_PTR, bubble_matrix, 0x3D0DB88);
DataPointer(ObjectMaster, ChaosBubbleEffect_ObjectMaster, 0x3D0DB94);
DataPointer(int, FramerateSetting_Config, 0x0089295C);
DataPointer(int, FramerateSetting, 0x0389D7DC);
DataPointer(int, DroppedFrames, 0x03B1117C);
DataPointer(int, CutsceneID, 0x3B2C570);
DataPointer(int, ControlMode, 0x3B2C474);
DataPointer(int, Demo_Enabled, 0x3B2C474);
DataPointer(int, Demo_Cutscene, 0x3B2A2E8);
DataPointer(__int16, DemoFrame, 0x3B2C464);
DataPointer(__int16*, DemoFramePointer, 0x42F0A8);
DataPointer(float, EnvMap1, 0x038A5DD0);
DataPointer(float, EnvMap2, 0x038A5DE4);
DataPointer(float, EnvMap3, 0x038A5E00);
DataPointer(float, EnvMap4, 0x038A5E04);
DataPointer(NJS_VECTOR, DrawQueueDistanceVector_Current, 0x3AB9898);
DataPointer(NJS_VECTOR, DrawQueueDistanceVector1, 0x900840);
DataPointer(NJS_VECTOR, DrawQueueDistanceVector2, 0x90084C);
DataPointer(NJS_VECTOR, DrawQueueDistanceVector3, 0x900858);
DataPointer(NJS_VECTOR, DrawQueueDistanceVector4, 0x900864);
DataArray(float, ChaosBubbleEffect_ScaleOffsets, 0x38E2020, 16);
DataArray(char, ChaosBubbleEffect_StateArray, 0x3D0DBC0, 64);
DataArray(LandTable*, LandTableArray, 0x97DBE8, 193);
DataArray(int **, InitializationFunctions, 0x892004, 538);
DataArray(AnimData, KnucklesAnimData, 0x3C532A0, 114);
DataArray(AnimData, AmyAnimData, 0x3C54880, 101);
DataArray(CollisionData_, FakeEgg_Collision, 0x2BBF088, 3);
DataArray(CollisionData_, OHandKey_Collision, 0x111C610, 2);
DataArray(CollisionData_, OKurotama_Collision, 0x1101F10, 9);
DataArray(CollisionData_, OKillSwitch_Collision, 0x111CA78, 2);
DataArray(CollisionData_, OEggStand_Collision, 0x111D420, 2);
DataArray(CollisionData_, OBoxSwitch_Collision, 0x17D0A88, 2);
DataArray(CollisionData_, ChaoCard_Collision, 0x2BBF020, 2);
DataArray(CollisionData_, OKeyBlock_Collision, 0x2BBF178, 2);
DataArray(CollisionData_, OKeyBlock_CollisionB_1, 0x2BBF118, 1);
DataArray(CollisionData_, OKeyBlock_CollisionB_2, 0x2BBF148, 1);	
DataArray(CollisionData_, ChaoAnimal_Collision, 0x885198, 3);
DataArray(CollisionData_, ChaoFruit_Collision, 0x885268, 6);
DataArray(CollisionData_, OKartPass_Collision, 0x2BBF3F0, 2);
DataArray(CollisionData_, OCard_Collision, 0x2BC0748, 2);
DataArray(CollisionData_, IceKey_Collision, 0x2BBF4C8, 2);
DataArray(CollisionData_, KikiBomb_Collision, 0x96CA18, 4);
DataArray(CollisionData_, Chaos6Freezer_Collision, 0x1386AC8, 3);
FunctionPointer(double, Calculate2DDepth, (QueuedModelFlagsB flags, float a2), 0x404290);
FunctionPointer(void, Cutscene_ResetTransition, (), 0x436550);
FunctionPointer(void, Cutscene_WaitForInput, (int a1), 0x4314D0);
FunctionPointer(void, DrawModelCallback_QueueModel, (void(__cdecl* function)(NJS_MODEL_SADX*), NJS_MODEL_SADX* data, float depth, QueuedModelFlagsB queueflags), 0x404840);
FunctionPointer(void, DrawModelCallback_QueueObject, (void(__cdecl* function)(NJS_OBJECT*), NJS_OBJECT* data, float depth, QueuedModelFlagsB queueflags), 0x404840);
FunctionPointer(void, DrawModelCallback_QueueObjectMaster, (void(__cdecl* function)(ObjectMaster*), ObjectMaster* data, float depth, QueuedModelFlagsB queueflags), 0x404840);
FunctionPointer(void, DrawModelCallback_QueueInt, (void(__cdecl* function)(int), int data, float depth, QueuedModelFlagsB queueflags), 0x404840);
FunctionPointer(void, DrawModelCallback_QueueOceanData, (void(__cdecl* function)(OceanData*), OceanData* data, float depth, QueuedModelFlagsB queueflags), 0x404840);
FunctionPointer(void, DrawModelCallback_QueueFloat, (void(__cdecl* function)(float), float data, float depth, QueuedModelFlagsB queueflags), 0x404840);
FunctionPointer(void, ProcessModel_407BB0, (NJS_MODEL_SADX *model, QueuedModelFlagsB blend, float radius_scale), 0x4094D0);
FunctionPointer(void, ProcessModelNode_TryReallyHard_2, (NJS_OBJECT* a1), 0x40A280);
FunctionPointer(void, ProcessModelNode_Try, (NJS_OBJECT* a1, int a2, float a3), 0x40A1E0);
FunctionPointer(int, ProcessModelNode_NoQueueScale, (NJS_OBJECT* a1), 0x4034B0);
FunctionPointer(void, ProcessModel_NoSorting, (NJS_MODEL_SADX* model, float scale), 0x407A00);
FunctionPointer(void, njAction_ReallyHard, (NJS_ACTION* a1, float frameNumber), 0x409FB0);
FunctionPointer(void, njAction_Queue_407CF0_2, (NJS_ACTION *a1, float a2, int a3), 0x408380);
FunctionPointer(void, DrawModel_Queue_407BB0, (NJS_MODEL_SADX *a1, QueuedModelFlagsB a2), 0x407BB0);
FunctionPointer(void, DrawModel_Queue_407FC0, (NJS_MODEL_SADX* a1, int blend), 0x407FC0);
FunctionPointer(void, DrawModel_Queue_407FC0_WithScale, (NJS_MODEL_SADX *model, QueuedModelFlagsB blend, float scale), 0x409E70);
FunctionPointer(void, DrawModel_Queue_407CF0, (NJS_MODEL_SADX* a1, int blend), 0x407FC0);
FunctionPointer(void, njAction_Queue_DrawModelQueue, (NJS_ACTION* a1, float a2, int a3, float a4), 0x405490);
FunctionPointer(void, njAction_DontQueue, (NJS_ACTION *a1, float frame, float scale), 0x405450);
FunctionPointer(void, njAction_Queue_407BB0, (NJS_ACTION *anim, float a2, int a3), 0x408350);
FunctionPointer(void, njAction_Queue_407BB0_2, (NJS_ACTION *a1, float a2, int a3, float a4), 0x408350);
FunctionPointer(void, DrawModel_TryReallyHard, (NJS_MODEL_SADX* a1), 0x409EF0);
FunctionPointer(void, Bridge_CreateDustParticle, (NJS_VECTOR *a1, NJS_VECTOR *a2, float a3), 0x4B9820);

extern HelperFunctions HelperFunctionsGlobal;
extern bool ModelsLoaded_General;
extern bool ModelsLoaded_Chao;
extern bool ModelsLoaded_ShareObj;
extern bool ModelsLoaded_STG00;
extern bool ModelsLoaded_STG01;
extern bool ModelsLoaded_STG02;
extern bool ModelsLoaded_STG03;
extern bool ModelsLoaded_STG04;
extern bool ModelsLoaded_STG05;
extern bool ModelsLoaded_STG06;
extern bool ModelsLoaded_STG07;
extern bool ModelsLoaded_STG08;
extern bool ModelsLoaded_STG09;
extern bool ModelsLoaded_STG10;
extern bool ModelsLoaded_STG12;
extern bool ModelsLoaded_B_CHAOS0;
extern bool ModelsLoaded_B_CHAOS2;
extern bool ModelsLoaded_B_CHAOS4;
extern bool ModelsLoaded_B_CHAOS6;
extern bool ModelsLoaded_B_CHAOS7;
extern bool ModelsLoaded_B_EGM1;
extern bool ModelsLoaded_B_EGM2;
extern bool ModelsLoaded_B_EGM3;
extern bool ModelsLoaded_B_ROBO;
extern bool ModelsLoaded_B_E101;
extern bool ModelsLoaded_B_E101R;
extern bool ModelsLoaded_ADV00;
extern bool ModelsLoaded_ADV0100;
extern bool ModelsLoaded_ADV0130;
extern bool ModelsLoaded_ADV02;
extern bool ModelsLoaded_ADV03;
extern bool ModelsLoaded_SHOOTING;
extern bool ModelsLoaded_MINICART;
extern bool ModelsLoaded_SBOARD;

extern bool RemoveSetUpPad;
extern bool RemoveMap;
extern bool RemoveCamera;
extern bool FixHeldObjects;
extern bool RestoreYButton;
extern bool IsCameraUnderwater;
extern int SADXWaveAnimation;
extern int CutsceneSkipMode;
extern int Use1999SetFiles;
extern bool EnableSpeedFixes;
extern bool DLLLoaded_DLCs;
extern bool DLLLoaded_SA1Chars;
extern bool DLLLoaded_Lantern;
extern bool DLLLoaded_HDGUI;
extern bool DLLLoaded_SADXFE;
extern bool AssumeOIT;
extern bool BigBeltFix;
extern bool UIScale;

extern bool EnableCutsceneFix;
extern int CutsceneSkipMode;
extern int CutsceneFrameCounter;
extern std::string EnableImpressFont;
extern bool ColorizeFont;
extern bool DisableFontSmoothing;
extern bool DisableFontFiltering;
extern bool EnableLSDFix;
extern bool FPSLock;
extern bool EnableDCRipple;
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
extern bool EnableWhiteDiffuse;
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
extern bool EnableHedgehogHammer;
extern bool EnableTwinkleCircuit;
extern bool EnableSandHill;
extern bool EnableSkyChaseFixes;
extern bool EnableSkyChaseEnemyModels;
extern bool EnableSSGarden;
extern bool EnableMRGarden;
extern bool EnableECGarden;
extern bool ReplaceEggs;
extern bool EnableLobby;
extern bool DisableChaoButtonPrompts;
extern int ReplaceFruits;
extern NJS_TEXLIST texlist_sadxwtr_beach;
extern NJS_TEXLIST texlist_sadxwtr_sewers;
extern NJS_TEXLIST texlist_sadxwtr_waves;
extern SecondaryEntrance BK_SSGardenStartPoint;
extern std::string ModPath;
extern int CutsceneFadeValue;
extern int CutsceneFadeMode;
extern bool SkipPressed_Cutscene;

#define ReplacePVM(a) HelperFunctionsGlobal.ReplaceFile("system\\" a ".PVM", "system\\" a "_DC.PVM")
#define ReplacePVR(a) HelperFunctionsGlobal.ReplaceFile("system\\" a ".PVR", "system\\" a "_DC.PVR")

void ReplaceBIN(std::string src);
void ReplaceSET(std::string src);
void ReplaceCAM(std::string src);
void ReplaceGeneric(std::string src, std::string dest);

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
extern LandTableInfo *MINICART_0_Info;
extern LandTableInfo *MINICART_1_Info;
extern LandTableInfo *MINICART_2_Info;
extern LandTableInfo *MINICART_3_Info;
extern LandTableInfo *MINICART_4_Info;
extern LandTableInfo *MINICART_5_Info;
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

extern NJS_TEXLIST texlist_ChaoRace;
extern NJS_TEXLIST texlist_ChaoRaceEntry;

//Level unload functions
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
void ReinitializeDLLStuff();

//Mod Init and OnFrame functions
void OIT_Init();
void Branding_Init(const IniFile *config, const HelperFunctions &helperFunctions);
void Videos_Init(const IniFile* config, const HelperFunctions& helperFunctions);
void SADXStyleWater_Init(const IniFile* config, const HelperFunctions& helperFunctions);
void Branding_OnFrame();
void ADV00_Init();
void ADV00_OnFrame();
void ADV01_Init();
void ADV01_OnFrame();
void ADV01C_Init();
void ADV01C_OnFrame();
void ADV02_Init();
void ADV02_OnFrame();
void ADV03_Init();
void ADV03_OnFrame();
void Init_Global();
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
void ShareObj_Init();
void TwinklePark_Init();
//void TwinklePark_OnFrame();
//void ShareObj_OnFrame();
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
void SkyChase_Init();
void TwinkleCircuit_Init();
void SandHill_Init();
void HedgehogHammer_Init();
//void Subgames_OnFrame();
void ChaoGardens_Init();
void ChaoGardens_OnFrame();
void ChaoRace_Init();
void ChaoRace_OnFrame();
void General_Init();
void General_OnFrame();
void General_OnInput();
void Videos_OnFrame();
void Videos_OnInput();
void SkyChaseFix_Init();
void SkyChaseFix_UpdateBounds();
void Branding_SetUpVariables();
void SpeedFixes_Init();
void SpeedFixes_OnFrame();
void SADXStyleWater_OnFrame();
void FixFVFShit();

//Other stuff
void ColorizeRecapText(int a1, int a2, float a3, float a4, float a5, float a6, float a7, float a8);
void DisplayVideoFadeout(int fadeout, int mode);
void __cdecl EmeraldCoast_OceanDraw_SADXStyle(OceanData *o);
void __cdecl MysticRuins_OceanDraw_SADXStyle(OceanData *o);
void __cdecl EggCarrier_OceanDraw_SADXStyle(OceanData *o);
void __cdecl Past_OceanDraw_SADXStyle(OceanData *o);
void LoadBossECOceanPVM(const char *filename, NJS_TEXLIST *texlist);
void LoadBossECOceanTexlist();
void RenderChaoTransporterEffect_Fix(NJS_MODEL_SADX *a1, float scale);
void DrawEventHelicopter(NJS_ACTION *a1, float a2, int a3);
void ResizeE101RTexlist();
void DrawDebugText_NoFiltering(NJS_POINT2* points, float scale);
void RestoreSubtitleFiltering(NJS_ARGB* a1);

//Lighting functions
bool ForceWhiteDiffuse(NJS_MATERIAL* material, uint32_t flags);
bool ForceWhiteDiffuse3_Night(NJS_MATERIAL* material, uint32_t flags);
bool ForceWhiteDiffuse3Specular1(NJS_MATERIAL* material, uint32_t flags);
bool ForceWhiteDiffuse1Specular3(NJS_MATERIAL* material, uint32_t flags);
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

//Generic functions
void BackupDebugFontSettings();
void RestoreDebugFontSettings();
void SetHudColorAndTextureNum_Italic(int n, NJS_COLOR color);
void njDrawQuadTexture_Italic(NJS_QUAD_TEXTURE* points, float scale);
void njDrawSprite2D_Queue_Point(NJS_SPRITE* sp, Int n, Float pri, NJD_SPRITE attr, QueuedModelFlagsB queue_flags);
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
void AddWhiteDiffuseMaterial_Specular3(NJS_MATERIAL *material);
void AddWhiteDiffuseNightMaterial(NJS_MATERIAL* material);
void RemoveAlphaRejectMaterial(NJS_MATERIAL *material);
void RemoveWhiteDiffuseMaterial(NJS_MATERIAL *material);
void RemoveWhiteDiffuseMaterial_Specular3(NJS_MATERIAL *material);
void RemoveWhiteDiffuseNightMaterial(NJS_MATERIAL* material);
void AddBossMaterial(NJS_MATERIAL *material);
void ForceLevelSpecular_Object(NJS_OBJECT *obj, bool recursive);
void ForceObjectSpecular_Object(NJS_OBJECT *obj, bool recursive);
void AddBossMaterials_Object(NJS_OBJECT *obj);
void SwapMeshsets(NJS_OBJECT* object, int mesh1, int mesh2);
void HideMesh_Object(NJS_OBJECT *object, int meshID);
void HideMesh_Model(NJS_MODEL_SADX *model, int meshID);
void ForceLightType_Object(NJS_OBJECT* obj, int light_type, bool unregister);
void HideEntireObject(NJS_OBJECT* a1);
void RemoveTransparency_Object(NJS_OBJECT* obj, bool recursive);
void HideAllButOneMesh(NJS_OBJECT *obj, int meshID);