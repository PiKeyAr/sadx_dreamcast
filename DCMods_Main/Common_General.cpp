#include "stdafx.h"
#include "Animals_motions.h"
#include "CommonObjects.h"
//#include "StageLights.h"
//#include "Animals.h"
//#include "Frogs.h"
//#include "RobotChest.h"

//TODO: Maybe queue animals?
//TODO: Chaos puddle in Knuckles' "Chaos 4 emerges" cutscene shouldn't ignore lighting (use specular 3)

NJS_TEXANIM EmeraldGlowTexanim = { 64, 64, 32, 32, 0, 0, 0xFF, 0xFF, 3, 0 };
NJS_SPRITE EmeraldGlowSprite = { { 0.0f, 5.0f, 0.0f }, 0.35f, 0.35f, 61439, (NJS_TEXLIST*)0xC3FE20, &EmeraldGlowTexanim };
NJS_VECTOR EmeraldGlowPosition = { 0, 10, 0 };

NJS_TEXANIM Heat1Texanim = { 56, 64, 28, 32, 0, 0, 0xFF, 0xFF, 2, 0 };
NJS_TEXANIM Heat2Texanim = { 56, 64, 28, 32, 0, 0, 0xFF, 0xFF, 2, 0 };

NJS_SPRITE Heat1Sprite = { { 0, 0, 0 }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x91BD28, &Heat1Texanim };
NJS_SPRITE Heat2Sprite = { { 0, 0, 0 }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x91BD28, &Heat2Texanim };

NJS_OBJECT* HintMonitorModel = nullptr;
NJS_OBJECT* EmeraldPieceModel = nullptr;
NJS_OBJECT* EmeraldPieceOutline = nullptr;
NJS_OBJECT* ItemBoxAirModel = nullptr;
NJS_OBJECT* ItemBoxAirModel_Resize = nullptr;
NJS_OBJECT* ItemBoxAirModel_ResizeChild = nullptr;

DataPointer(float, GammaConstantMaterialAlpha, 0x47FE0F);
DataPointer(NJS_OBJECT, stru_8B22F4, 0x8B22F4);
DataPointer(NJS_MATRIX, nj_unit_matrix_, 0x389D650);
DataPointer(NJS_ACTION*, Tornado2Pointer, 0x6B9527);
DataPointer(NJS_ACTION, Tornado2ChangeAction, 0x32ECE0C);
DataPointer(NJS_ACTION, Tornado2TransformationAction, 0x28988FC);

FunctionPointer(void, BarrierChild, (ObjectMaster *a1), 0x4BA1E0);
FunctionPointer(void, sub_4083D0, (NJS_ACTION *a1, float a2, int a3), 0x4083D0);
FunctionPointer(EntityData1*, sub_4B9430, (NJS_VECTOR *a1, NJS_VECTOR *a2, float a3), 0x4B9430);
FunctionPointer(void, sub_40EFE0, (), 0x40EFE0);
FunctionPointer(double, sub_49EAD0, (float a1, float a2, float a3, int a4), 0x49EAD0);
FunctionPointer(float, sub_49E920, (float x, float y, float z, Rotation3 *rotation), 0x49E920);
FunctionPointer(SubtitleThing *, sub_6424A0, (int a1, int a2, float a3, float a4, float a5, float a6, float a7, float a8), 0x6424A0);
FunctionPointer(void, sub_409E70, (NJS_MODEL_SADX *a1, int a2, float a3), 0x409E70);
FunctionPointer(void, Cutscene_MoveCharacterAtoB, (ObjectMaster *a1, float a2, float a3, float a4, float a5, float a6, float a7, signed int a8), 0x6EC2B0);
FunctionPointer(void, sub_4094D0, (NJS_MODEL_SADX *model, QueuedModelFlagsB blend, float radius_scale), 0x4094D0);
FunctionPointer(void, sub_4053A0, (NJS_OBJECT *a1, NJS_MOTION *a2, float frame, int flags, float scale), 0x4053A0);
FunctionPointer(void, sub_407CF0, (NJS_MODEL_SADX *a1, QueuedModelFlagsB a2), 0x407CF0);
FunctionPointer(void, sub_4BFF90, (NJS_OBJECT* a1), 0x4BFF90);
FunctionPointer(void, AnimationCallback_C, (NJS_ACTION *a1, float a2, QueuedModelFlagsB a3), 0x4084B0);
FunctionPointer(void, DrawObjectWithMotion_407BB0, (NJS_OBJECT *a1, NJS_MOTION *a2, float framenumber, QueuedModelFlagsB a4, float scale), 0x4082D0);
FunctionPointer(void, DrawObjectWithMotion_407FC0, (NJS_OBJECT *a1, NJS_MOTION *a2, float framenumber, QueuedModelFlagsB a4, float scale), 0x408300);
FunctionPointer(float, CalculateEnemyYCoordinate, (float x, float y, float z, Rotation3 *rotation), 0x49E920);

ObjectThingC ItemBoxAirResizeThing = { (NJS_OBJECT*)0, sub_4BFF90 };

float LSDMinimumCheck1 = 8.0f;
float LSDMinimumSet1 = 9.0f;
float LSDMinimumCheck2 = 4.0f;
float LSDMinimumSet2 = 4.0f;
static Uint32 GlobalColor_one = 0;
static Uint32 GlobalColor_two = 0;
static Uint32 GlobalColor_threefour = 0;
bool IsCameraUnderwater = false;
static bool GlobalColor_wait = false;
static int EnvMapMode = 0;
static int AlphaRejectionMode = 0;
static int EmeraldGlowAlpha = 255;
static bool EmeraldGlowDirection = false;
static float heat_float1 = 1.0f; //1
static float heat_float2 = 0.2f; //0.5
static float alphathing = 1.0f;
int CutsceneFadeValue = 0;
int CutsceneFadeMode = 0;
bool SkipPressed_Cutscene = false;
static float EmeraldScale = 1.005f;

static const NJS_MATERIAL* Chaos4Materials[] = {
	((NJS_MATERIAL*)0x0119D0FC),
	((NJS_MATERIAL*)0x0119B210),
	((NJS_MATERIAL*)0x0119B224),
	((NJS_MATERIAL*)0x0119ACA0),
	((NJS_MATERIAL*)0x0119A600),
	((NJS_MATERIAL*)0x0119A614),
	((NJS_MATERIAL*)0x0119A010),
	((NJS_MATERIAL*)0x01199D28),
	((NJS_MATERIAL*)0x011997B8),
	((NJS_MATERIAL*)0x01199380),
	((NJS_MATERIAL*)0x01198F4C),
	((NJS_MATERIAL*)0x01198B00),
	((NJS_MATERIAL*)0x011986C8),
	((NJS_MATERIAL*)0x01198468),
	((NJS_MATERIAL*)0x01198030),
	((NJS_MATERIAL*)0x01197DD0),
	((NJS_MATERIAL*)0x011975E8),
	((NJS_MATERIAL*)0x01197430),
	((NJS_MATERIAL*)0x011972B0),
	((NJS_MATERIAL*)0x011970F8),
	((NJS_MATERIAL*)0x01196F78),
	((NJS_MATERIAL*)0x01196254),
	((NJS_MATERIAL*)0x011958D0),
	((NJS_MATERIAL*)0x011953B8),
	((NJS_MATERIAL*)0x01195200),
	((NJS_MATERIAL*)0x01195080),
	((NJS_MATERIAL*)0x01194B68),
	((NJS_MATERIAL*)0x01194700),
	((NJS_MATERIAL*)0x011942C8),
	((NJS_MATERIAL*)0x01193EE0),
	((NJS_MATERIAL*)0x01193B4C),
	((NJS_MATERIAL*)0x01193734),
	((NJS_MATERIAL*)0x01192DB0),
	((NJS_MATERIAL*)0x01192898),
	((NJS_MATERIAL*)0x011926E0),
	((NJS_MATERIAL*)0x01192560),
	((NJS_MATERIAL*)0x01192048),
	((NJS_MATERIAL*)0x01191BD0),
	((NJS_MATERIAL*)0x01191798),
	((NJS_MATERIAL*)0x011913E0),
	((NJS_MATERIAL*)0x0119104C),
	((NJS_MATERIAL*)0x01190C30),
};

static const NJS_MATERIAL* WhiteDiffuse_General[] = {
	//Mecha fish
	((NJS_MATERIAL*)0x016F96C0),
	((NJS_MATERIAL*)0x016F96D4),
	((NJS_MATERIAL*)0x016F96E8),
	((NJS_MATERIAL*)0x016F96FC),
	((NJS_MATERIAL*)0x016F9710),
	((NJS_MATERIAL*)0x016F9724),
	((NJS_MATERIAL*)0x016FA4EC),
	((NJS_MATERIAL*)0x016FA500),
	((NJS_MATERIAL*)0x016FA514),
	((NJS_MATERIAL*)0x0172872C),
	((NJS_MATERIAL*)0x01728740),
	((NJS_MATERIAL*)0x01728754),
	((NJS_MATERIAL*)0x01727900),
	((NJS_MATERIAL*)0x01727914),
	((NJS_MATERIAL*)0x01727928),
	((NJS_MATERIAL*)0x0172793C),
	((NJS_MATERIAL*)0x01727950),
	((NJS_MATERIAL*)0x01727964),
	//Item capsule
	((NJS_MATERIAL*)0x008BEB44),
	//Emblem
	((NJS_MATERIAL*)0x009740FC),
	((NJS_MATERIAL*)0x00974110),
	((NJS_MATERIAL*)0x00974124),
	((NJS_MATERIAL*)0x00974138),
};

static const NJS_MATERIAL* WhiteDiffuseSecondCharSpecular[] = {
	//Metal Sonic in Amy's cutscene
	((NJS_MATERIAL*)0x032D31BC),
	((NJS_MATERIAL*)0x032D31D0),
	((NJS_MATERIAL*)0x032D31E4),
	((NJS_MATERIAL*)0x032D31F8),
};

static const NJS_MATERIAL* E101Material[] = {
	((NJS_MATERIAL*)0x014D5EB0),
	((NJS_MATERIAL*)0x00C409AC),
	((NJS_MATERIAL*)0x0312C188),
	((NJS_MATERIAL*)0x02499330),
	((NJS_MATERIAL*)0x03096CD8),
	((NJS_MATERIAL*)0x0309F380),
	((NJS_MATERIAL*)0x030A7B00),
};

NJS_MATERIAL* RemoveColors_General[] = {
	//The beam that collects the emeralds in "Tails and Sonic gassed at Casinopolis" cutscene
	((NJS_MATERIAL*)0x30B010C),
	//Shopping bag in Amy's first cutscene
	((NJS_MATERIAL*)0x328C498),
	((NJS_MATERIAL*)0x328C4AC),
	((NJS_MATERIAL*)0x328C1B8),
	((NJS_MATERIAL*)0x328C1CC),
	((NJS_MATERIAL*)0x328BED8),
	((NJS_MATERIAL*)0x328BEEC),
	((NJS_MATERIAL*)0x328BA88),
	((NJS_MATERIAL*)0x328B638),
	((NJS_MATERIAL*)0x328B1E8),
	((NJS_MATERIAL*)0x328AD88),
	((NJS_MATERIAL*)0x328ABF4),
	((NJS_MATERIAL*)0x328AA14),
	((NJS_MATERIAL*)0x328A834),
	((NJS_MATERIAL*)0x328A654),
	((NJS_MATERIAL*)0x328A470),
	((NJS_MATERIAL*)0x328A2DC),
	((NJS_MATERIAL*)0x328A0FC),
	((NJS_MATERIAL*)0x3289F1C),
	((NJS_MATERIAL*)0x3289D3C),
	((NJS_MATERIAL*)0x3289B58),
	//Amy's escape balloon
	((NJS_MATERIAL*)0x8BD7A0),
	((NJS_MATERIAL*)0x8BD454),
	((NJS_MATERIAL*)0x8BD468),
	((NJS_MATERIAL*)0x8BCFC8),
	//Birdie's locket in Amy's cutscene
	((NJS_MATERIAL*)0x2BE2630),
	((NJS_MATERIAL*)0x2BE2644),
	//Birdie
	((NJS_MATERIAL*)0x984470),
	((NJS_MATERIAL*)0x984484),
	((NJS_MATERIAL*)0x984498),
	((NJS_MATERIAL*)0x9844AC),
	((NJS_MATERIAL*)0x9844C0),
	((NJS_MATERIAL*)0x9841C0),
	((NJS_MATERIAL*)0x983F14),
	((NJS_MATERIAL*)0x982978),
	((NJS_MATERIAL*)0x98298C),
	((NJS_MATERIAL*)0x9829A0),
	((NJS_MATERIAL*)0x9829B4),
	((NJS_MATERIAL*)0x9829C8),
	((NJS_MATERIAL*)0x9827D8),
	((NJS_MATERIAL*)0x9826CC),
	((NJS_MATERIAL*)0x982550),
	((NJS_MATERIAL*)0x982444),
	((NJS_MATERIAL*)0x9822C8),
	//Birdie in Amy's cutscene after escape
	((NJS_MATERIAL*)0x2F021EC),
	((NJS_MATERIAL*)0x2F02200),
	((NJS_MATERIAL*)0x2F01EA4),
	((NJS_MATERIAL*)0x2F01B5C),
	((NJS_MATERIAL*)0x2F01848),
	((NJS_MATERIAL*)0x2F01610),
	((NJS_MATERIAL*)0x2F014D4),
	((NJS_MATERIAL*)0x2F01398),
	((NJS_MATERIAL*)0x2F01178),
	((NJS_MATERIAL*)0x2F00E84),
	((NJS_MATERIAL*)0x2F00D10),
	((NJS_MATERIAL*)0x2F00BC8),
	((NJS_MATERIAL*)0x2EFF798),
	((NJS_MATERIAL*)0x2EFF7AC),
	((NJS_MATERIAL*)0x2EFF7C0),
	((NJS_MATERIAL*)0x2EFF7D4),
	((NJS_MATERIAL*)0x2EFF598),
	((NJS_MATERIAL*)0x2EFF398),
	((NJS_MATERIAL*)0x2EFF210),
	((NJS_MATERIAL*)0x2EFF088),
	((NJS_MATERIAL*)0x2EFEE50),
	((NJS_MATERIAL*)0x2EFEA98),
	((NJS_MATERIAL*)0x2EFE98C),
	((NJS_MATERIAL*)0x2EFE6D8),
	((NJS_MATERIAL*)0x2EFE5CC),
	//Birdie (ver 2 wing)
	((NJS_MATERIAL*)0x2F07C4C),
	((NJS_MATERIAL*)0x2F07C60),
	((NJS_MATERIAL*)0x2F07904),
	((NJS_MATERIAL*)0x2F075BC),
	((NJS_MATERIAL*)0x2F072A8),
	((NJS_MATERIAL*)0x2F07070),
	((NJS_MATERIAL*)0x2F06F34),
	((NJS_MATERIAL*)0x2F06DF8),
	((NJS_MATERIAL*)0x2F06BD8),
	((NJS_MATERIAL*)0x2F068E4),
	((NJS_MATERIAL*)0x2F06770),
	((NJS_MATERIAL*)0x2F06628),
	((NJS_MATERIAL*)0x2F051F8),
	((NJS_MATERIAL*)0x2F0520C),
	((NJS_MATERIAL*)0x2F05220),
	((NJS_MATERIAL*)0x2F05234),
	((NJS_MATERIAL*)0x2F04FF8),
	((NJS_MATERIAL*)0x2F04DF8),
	((NJS_MATERIAL*)0x2F04C70),
	((NJS_MATERIAL*)0x2F04AE8),
	((NJS_MATERIAL*)0x2F048B0),
	((NJS_MATERIAL*)0x2F044F8),
	((NJS_MATERIAL*)0x2F043EC),
	((NJS_MATERIAL*)0x2F04138),
	((NJS_MATERIAL*)0x2F0402C),
};

void GetEmeraldGlow(ObjectMaster* a1)
{
	EntityData1* Data1 = a1->Data1;
	EmeraldGlowPosition.x = Data1->Position.x;
	EmeraldGlowPosition.y = Data1->Position.y + 10;
	EmeraldGlowPosition.z = Data1->Position.z;
}

static void GoalEmerald_Windy_Display_r(ObjectMaster* a1);
static Trampoline GoalEmerald_Windy_Display_t(0x4DF3B0, 0x4DF3B6, GoalEmerald_Windy_Display_r);
static void __cdecl GoalEmerald_Windy_Display_r(ObjectMaster* a1)
{
	auto original = reinterpret_cast<decltype(GoalEmerald_Windy_Display_r)*>(GoalEmerald_Windy_Display_t.Target());
	GetEmeraldGlow(a1);
	original(a1);
}

static void GoalEmerald_Ice_Display_r(ObjectMaster* a1);
static Trampoline GoalEmerald_Ice_Display_t(0x4ECFA0, 0x4ECFA6, GoalEmerald_Ice_Display_r);
static void __cdecl GoalEmerald_Ice_Display_r(ObjectMaster* a1)
{
	auto original = reinterpret_cast<decltype(GoalEmerald_Ice_Display_r)*>(GoalEmerald_Ice_Display_t.Target());
	GetEmeraldGlow(a1);
	original(a1);
}

static void GoalEmerald_Casino_Display_r(ObjectMaster* a1);
static Trampoline GoalEmerald_Casino_Display_t(0x5DD0A0, 0x5DD0A6, GoalEmerald_Casino_Display_r);
static void __cdecl GoalEmerald_Casino_Display_r(ObjectMaster* a1)
{
	auto original = reinterpret_cast<decltype(GoalEmerald_Casino_Display_r)*>(GoalEmerald_Casino_Display_t.Target());
	GetEmeraldGlow(a1);
	original(a1);
}

void RenderEmeraldWithGlow_Windy(NJS_OBJECT *object, int flags)
{
	//Do the emerald itself first
	ProcessModelNode_D_Wrapper(object, flags);
	njPopMatrix(1u);
	if (EmeraldGlowAlpha >= 360) EmeraldGlowDirection = false;
	if (EmeraldGlowAlpha <= 128) EmeraldGlowDirection = true;
	if (EmeraldGlowDirection) EmeraldGlowAlpha = EmeraldGlowAlpha + 2; else EmeraldGlowAlpha = EmeraldGlowAlpha - 2;
	if (CurrentLevel == 2) EmeraldGlowTexanim.texid = 3;
	if (CurrentLevel == 9) EmeraldGlowTexanim.texid = 4;
	if (CurrentLevel == 8) EmeraldGlowTexanim.texid = 5;
	//Emerald glow sprite
	njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_ONE);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
	njPushMatrix(0);
	DisableFog();
	float finalcolor = (min(255, EmeraldGlowAlpha) / 255.0f);
	SetMaterialAndSpriteColor_Float(1.0f, finalcolor, finalcolor, finalcolor);
	njTranslateV(0, &EmeraldGlowPosition);
	njRotateXYZ(0, Camera_Data1->Rotation.x, Camera_Data1->Rotation.y, 0);
	njDrawSprite3D_Queue(&EmeraldGlowSprite, 0, NJD_SPRITE_ALPHA | NJD_SPRITE_COLOR | NJD_SPRITE_ANGLE, (QueuedModelFlagsB)4);
	njDrawSprite3D_Queue(&EmeraldGlowSprite, 0, NJD_SPRITE_ALPHA | NJD_SPRITE_COLOR | NJD_SPRITE_ANGLE, (QueuedModelFlagsB)4);
	njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
	ClampGlobalColorThing_Thing();
	ToggleStageFog();
	//Don't njPopMatrix because there's one right after this hook in code
}

void RenderEmeraldWithGlow_Ice(NJS_OBJECT *object, int flags, float scale)
{
	//Do the emerald itself first
	ProcessModelNode_D_Wrapper(object, flags);
	njPopMatrix(1u);
	if (EmeraldGlowAlpha >= 360) EmeraldGlowDirection = false;
	if (EmeraldGlowAlpha <= 128) EmeraldGlowDirection = true;
	if (EmeraldGlowDirection) EmeraldGlowAlpha = EmeraldGlowAlpha + 2; else EmeraldGlowAlpha = EmeraldGlowAlpha - 2;
	if (CurrentLevel == 2) EmeraldGlowTexanim.texid = 3;
	if (CurrentLevel == 9) EmeraldGlowTexanim.texid = 4;
	if (CurrentLevel == 8) EmeraldGlowTexanim.texid = 5;
	//Emerald glow sprite
	njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_ONE);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
	njPushMatrix(0);
	DisableFog();
	float finalcolor = (min(255, EmeraldGlowAlpha) / 255.0f);
	SetMaterialAndSpriteColor_Float(1.0f, finalcolor, finalcolor, finalcolor);
	//SetMaterialAndSpriteColor_Float(1.0f, 1.0f, 1.0f, 1.0f);
	njTranslateV(0, &EmeraldGlowPosition);
	njRotateXYZ(0, Camera_Data1->Rotation.x, Camera_Data1->Rotation.y, 0);
	njDrawSprite3D_Queue(&EmeraldGlowSprite, 0, NJD_SPRITE_ALPHA | NJD_SPRITE_COLOR | NJD_SPRITE_ANGLE, (QueuedModelFlagsB)4);
	njDrawSprite3D_Queue(&EmeraldGlowSprite, 0, NJD_SPRITE_ALPHA | NJD_SPRITE_COLOR | NJD_SPRITE_ANGLE, (QueuedModelFlagsB)4);
	njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
	ClampGlobalColorThing_Thing();
	ToggleStageFog();
	//Don't njPopMatrix because there's one right after this hook in code
}

void SonicDashTrailFix(NJS_OBJECT *a1, QueuedModelFlagsB a2)
{
	DrawQueueDepthBias = 2500.0f;
	if (CurrentLevel == LevelIDs_WindyValley && CurrentAct == 2) DrawQueueDepthBias = 3500.0f;
	a1->basicdxmodel->mats->attr_texId = rand() % 2;
	ProcessModelNode(a1, (QueuedModelFlagsB)0, 1.0f);
	a1->basicdxmodel->mats->attr_texId = 0;
	DrawQueueDepthBias = 0.0f;
}

void SonicDashTrailFix2(NJS_OBJECT *a1, QueuedModelFlagsB a2)
{
	DrawQueueDepthBias = 2500.0f;
	if (CurrentLevel == LevelIDs_WindyValley && CurrentAct == 2) DrawQueueDepthBias = 3500.0f;
	ProcessModelNode_A_WrapperB(a1, a2);
	DrawQueueDepthBias = 0.0f;
}

void __cdecl Knuckles_MaximumHeat_DrawX(NJS_VECTOR *position, float alpha)
{
	float a; // ST00_4
	float s; // ST10_4
	double y; // st7

	if (!MissedFrames)
	{
		a = alpha * -0.6f;
		KNUCKLES_OBJECTS[47]->basicdxmodel->mats[0].attr_texId = 1;
		KNUCKLES_OBJECTS[47]->basicdxmodel->mats[0].diffuse.argb.a = 255 * (1.0f - alpha*1.1f)*0.7f;
		njPushMatrix(0);
		njTranslateV(0, position);
		s = 1.2f - alpha * alpha;
		njScale(0, s, s, s);
		y = alpha * 262144.0f;
		if ((unsigned int)(unsigned __int64)y)
		{
			njRotateY(0, (unsigned __int16)(unsigned __int64)y);
		}
		njSetTexture(&KNU_EFF_TEXLIST);
		DrawQueueDepthBias = 2000.0f;
		ProcessModelNode_A_WrapperB(KNUCKLES_OBJECTS[47], QueuedModelFlagsB_SomeTextureThing);
		DrawQueueDepthBias = 0.0f;
		njPopMatrix(1u);
		ClampGlobalColorThing_Thing();
	}
}

void __cdecl Knuckles_MaximumHeatSprite_Draw(ObjectMaster *sx)
{
	auto entity = EntityData1Ptrs[0];
	float *v1; // eax
	EntityData1 *v2; // esi
	float a; // ST00_4
	Float sxa; // [esp+18h] [ebp+4h]
	DataArray(EntityData1*, EntityData1Ptrs, 0x3B42E10, 8);
	NJS_VECTOR pos;
	float scl1;
	float scl2;
	v1 = (float *)&sx->Data1->Action;
	v2 = EntityData1Ptrs[0];
	if (EntityData1Ptrs[0])
	{
		if (!MissedFrames)
		{
			sxa = (v1[13] - v1[12]) * v1[3] + v1[12];
			a = (v1[2] - v1[4]) * v1[3] + v1[4];
			SetMaterialAndSpriteColor_Float(a, 1.0, 1.0, 1.0);
			pos = v2->CollisionInfo->CollisionArray->origin;
			pos.x = entity->Position.x;
			pos.y = entity->Position.y + 5.0f;
			pos.z = entity->Position.z;
			njSetTexture(&KNU_EFF_TEXLIST);
			njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
			njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
			//Sprite 1
			scl1 = sxa*0.09f;
			njPushMatrix(0);
			njTranslateV(0, &pos);
			njRotateX(0, Camera_Data1->Rotation.x);
			njRotateZ(0, Camera_Data1->Rotation.z);
			njRotateY(0, Camera_Data1->Rotation.y);
			njScale(0, scl1, scl1, scl1);
			DrawQueueDepthBias = 5000.0f;
			njDrawSprite3D(&Heat1Sprite, 0, NJD_SPRITE_ALPHA | NJD_SPRITE_COLOR);
			njPopMatrix(1u);
			//Sprite 2
			scl2 = 0.05f / scl1;
			njPushMatrix(0);
			njTranslateV(0, &pos);
			njRotateX(0, Camera_Data1->Rotation.x);
			njRotateZ(0, Camera_Data1->Rotation.z);
			njRotateY(0, Camera_Data1->Rotation.y);
			njScale(0, scl2, scl2, scl2);
			njDrawSprite3D(&Heat2Sprite, 0, NJD_SPRITE_ALPHA | NJD_SPRITE_COLOR);
			njPopMatrix(1u);
			ClampGlobalColorThing_Thing();
			njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
			njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
			DrawQueueDepthBias = 0;
		}
	}
}

void KnucklesPunch_RetrieveAlpha(float a, float r, float g, float b)
{
	alphathing = a;
}

void KnucklesPunch_Render(NJS_OBJECT *a1, QueuedModelFlagsB a2)
{
	a1->basicdxmodel->mats[0].diffuse.argb.a = alphathing * 255;
	ProcessModelNode_A_WrapperB(a1, a2);
}

void MagneticBarrierLightning(NJS_POINT3COL *a1, int a2, NJD_DRAW attr, QueuedModelFlagsB a4)
{
	njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
	if ((unsigned __int16)(CurrentAct | (CurrentLevel << 8)) >> 8 == 3 && CurrentAct == 2) DrawQueueDepthBias = 10; else DrawQueueDepthBias = 22048.0f;
	Draw3DLinesMaybe_Queue(a1, a2, attr, (QueuedModelFlagsB)0);
	DrawQueueDepthBias = 0;
	ClampGlobalColorThing_Thing();
}

void SetMagneticBarrierColor(float a, float r, float g, float b)
{
	njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
	SetMaterialAndSpriteColor_Float(r, r, g, b);
}

int __cdecl RenderBarrierModels(NJS_MODEL_SADX *a1)
{
	if ((unsigned __int16)(CurrentAct | (CurrentLevel << 8)) >> 8 == 3 && CurrentAct == 2) DrawQueueDepthBias = 0; else DrawQueueDepthBias = 20048.0f;
	if (CurrentLevel == LevelIDs_SpeedHighway && CurrentAct == 2) DrawQueueDepthBias = 500.0f;
	DrawVisibleModel_Queue(a1, (QueuedModelFlagsB)0);
	DrawQueueDepthBias = 0;
	return 0;
}

void __cdecl Sonic_DisplayLightDashModelX(EntityData1 *data1, CharObj2 **data2_pp, CharObj2 *data2)
{
	int v3; // eax
	__int16 v4; // t1
	double v5; // st7
	float v6; // ST28_4
	double v7; // st7
	float basedepth = 8000.0f;
	NJS_ACTION v8; // [esp+4h] [ebp-18h]
	NJS_ARGB a1; // [esp+Ch] [ebp-10h]
	if (CurrentLevel == LevelIDs_SpeedHighway && CurrentAct == 2) basedepth = 1000.0f;
	if (CurrentLevel == LevelIDs_StationSquare && CurrentAct == 3) basedepth = 1000.0f;
	NJS_OBJECT **___SONIC_OBJECTS = (NJS_OBJECT **)GetProcAddress(GetModuleHandle(L"CHRMODELS_orig"), "___SONIC_OBJECTS");
	if (!MissedFrames)
	{
		v3 = (unsigned __int16)data2->AnimationThing.Index;
		v8.object = ___SONIC_OBJECTS[54];
		if (data2->AnimationThing.State == 2)
		{
			v4 = data2->AnimationThing.LastIndex;
			v8.motion = data2->AnimationThing.action->motion;
		}
		else
		{
			v8.motion = data2->AnimationThing.AnimData[v3].Animation->motion;
		}
		v5 = (double)(FrameCounterUnpaused & 0x7F);
		if (v5 >= 64.0f)
		{
			v5 = 128.0f - v5;
		}
		//v5 = 0;
		njPushMatrixEx();
		njControl3D(NJD_CONTROL_3D_CONSTANT_MATERIAL | NJD_CONTROL_3D_ENABLE_ALPHA | NJD_CONTROL_3D_CONSTANT_ATTR);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_ONE);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
		//Main
		SetMaterialAndSpriteColor_Float(1.0f, 0, 0.06f + (64 - v5) / 880.0f, 1.0f);
		DrawQueueDepthBias = basedepth;
		sub_4083D0(&v8, data2->AnimationThing.Frame, 0);
		//Outer 1
		njScale(0, 1.05f, 1.05f, 1.05f);
		SetMaterialAndSpriteColor_Float(1.0f, 0.0245f, (64 - v5) / 1050.0f, 1.0f);
		DrawQueueDepthBias = basedepth + 300.0f;
		sub_4083D0(&v8, data2->AnimationThing.Frame, 0);
		//Outer 2
		njScale(0, 1.05f, 1.05f, 1.05f);
		SetMaterialAndSpriteColor_Float(1.0f, 0.024f, (64 - v5) / 2000.0f, 0.15f);
		DrawQueueDepthBias = basedepth + 600.0f;
		sub_4083D0(&v8, data2->AnimationThing.Frame, 0);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
		njPopMatrixEx();
		DrawQueueDepthBias = 0;
	}
}

void FixWaterSplash(EntityData1 *a1)
{
	ParticleDepthOverride = 2000.0f;
	SpawnSplashParticles(a1);
	ParticleDepthOverride = 0;
}

void __cdecl SpawnRipplesX(unsigned __int8 a1, NJS_VECTOR *a2)
{
	int v2; // eax
	CharObj2 *v3; // esi
	double v4; // st7
	_BOOL1 v5; // c0
	_BOOL1 v6; // c3
	double v7; // st7
	long double v8; // st7
	float a3; // ST08_4
	NJS_VECTOR a2a; // [esp+Ch] [ebp-Ch]

	v2 = a1;
	v3 = CharObj2Ptrs[v2];
	if (EntityData1Ptrs[v2]->Position.y + v3->PhysicsData.CollisionSize >= a2->y)
	{
		if (njScalor(&v3->Speed) == 0.0f)
		{
			v4 = (double)rand() * 0.000030517578f;
			v5 = v4 < 0.9f;
			v6 = v4 == 0.9f;
		}
		else
		{
			v7 = (double)rand() * 0.000030517578f;
			v5 = v7 < 0.85f;
			v6 = v7 == 0.85f;
		}
		if (!(v5 | v6) && njScalor(&v3->Speed) != 0.0f)
		{
			v8 = v3->Speed.y;
			a2a.y = 0.0;
			a2a.z = 1.5;
			a2a.x = fabs(v8) * 0.005f + 0.03f;
			a3 = v3->PhysicsData.RippleSize * 0.1f;
			sub_4B9430(a2, &a2a, a3);
		}
	}
}

void __cdecl FixedRipple_Normal(ObjectMaster *a2)
{
	EntityData1 *v1; // esi
	float g; // [esp+10h] [ebp-4h]
	v1 = a2->Data1;
	if (!MissedFrames)
	{
		SetTextureToCommon();
		njPushMatrix(0);
		njControl3D_Backup();
		njControl3D_Add(NJD_CONTROL_3D_CONSTANT_ATTR);
		njTranslateV(0, &v1->Position);
		BackupConstantAttr();
		AddConstantAttr(0, NJD_FLAG_USE_ALPHA);
		njScale(0, v1->Scale.x*0.74f, 1.0f, v1->Scale.x*0.74f);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
		g = *(float *)&v1->CharIndex;
		SetMaterialAndSpriteColor_Float(g, g, g, g);
		DrawQueueDepthBias = 2000.0f;
		ProcessModelNode(&stru_8B22F4, (QueuedModelFlagsB)0, v1->Scale.x);
		DrawQueueDepthBias = 0.0;
		ClampGlobalColorThing_Thing();
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
		RestoreConstantAttr();
		njControl3D_Restore();
		njPopMatrix(1u);
	}
}

void __cdecl FixedRipple_Bubble(ObjectMaster *a2)
{
	NJS_VECTOR *v1; // esi
	double v2; // st7
	NJS_ARGB colorthing;
	v1 = (NJS_VECTOR *)a2->UnknownB_ptr;
	if (!MissedFrames)
	{
		SetTextureToCommon();
		njPushMatrix(0);
		njTranslateV(0, v1);
		njScale(0, v1[2].z, 1.0f, v1[2].z);
		njControl3D_Backup();
		njControl3D_Add(NJD_CONTROL_3D_CONSTANT_ATTR);
		BackupConstantAttr();
		AddConstantAttr(0, NJD_FLAG_USE_ALPHA);
		v2 = v1[1].z;
		colorthing.r = v1[1].z;
		colorthing.g = v2;
		colorthing.b = v2;
		SetMaterialAndSpriteColor(&colorthing);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
		DrawQueueDepthBias = 2000.0f;
		ProcessModelNode(&stru_8B22F4, (QueuedModelFlagsB)0, v1[2].z);
		DrawQueueDepthBias = 0.0;
		ClampGlobalColorThing_Thing();
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
		RestoreConstantAttr();
		njPopMatrix(1u);
		njControl3D_Restore();
	}
}

float CalculateEnemyYCoordinate_Wrapper(float x, float y, float z, Rotation3 *rotation)
{
	float result = CalculateEnemyYCoordinate(x, y, z, rotation);
	if (result == -1000000.0f)
	{
		result = y - 5.0f;
	}
	return result;
}

//This one is used exclusively by the Sweep badnik
static double CalculateEnemyYCoordinate_Sweep_r(float x, float y, float z, Rotation3 *rotation);
static Trampoline CalculateEnemyYCoordinate_Sweep_t(0x49EAD0, 0x49EAD7, CalculateEnemyYCoordinate_Sweep_r);
static double __cdecl CalculateEnemyYCoordinate_Sweep_r(float x, float y, float z, Rotation3 *rotation)
{
	auto original = reinterpret_cast<decltype(CalculateEnemyYCoordinate_Sweep_r)*>(CalculateEnemyYCoordinate_Sweep_t.Target());
	float result = 	original(x, y, z, rotation);
	if (result == -1000000.0f) 
	{
		result = y;
	}
	return result;
}

void __cdecl ItemBox_Display_Destroyed_Rotate(ObjectMaster* _this)
{
	auto v1 = _this->Data1;
	SetTextureToCommon();
	njPushMatrix(nullptr);
	njTranslateV(nullptr, &v1->Position);

	// Rotate
	if (!Use1999SetFiles)
	{
		njRotateEx((Angle*)&v1->Rotation, 0);
	}
	DrawModel(&ItemBox_Base_MODEL);
	njPopMatrix(1u);
}

void __cdecl ItemBox_Display_Unknown_Rotate(ObjectMaster* _this)
{
	auto v1 = _this->Data1;
	if (!MissedFrames)
	{
		ItemBoxPowerups[6].Texture = MetalSonicFlag ? 98 : LifeTextures[GetCurrentCharacterID()];
		if (IsVisible(&v1->Position, 20.0f))
		{
			SetTextureToCommon();
			njPushMatrixEx();

			auto model = (NJS_MODEL_SADX *)late_alloca(44);
			auto material = (NJS_MATERIAL *)late_alloca(20);

			if (model && material)
			{
				njTranslateEx(&v1->Position);

				// Rotate
				if (!Use1999SetFiles)
				{
					njRotateEx((Angle*)&v1->Rotation, 0);
				}
				if (v1->Action != 2)
				{
					auto scale = v1->Scale.z * 0.2f;
					njScale(nullptr, scale, scale, scale);
				}
				njPushMatrixEx();
				njTranslate(nullptr, 0.0f, 7.5f, 0.0f);
				auto v6 = (Uint16)(v1->Scale.y * 65536.0f * 0.002777777777777778f);
				if (v6)
				{
					njRotateY(nullptr, v6);
				}
				memcpy(model, &ItemBox_Item_MODEL, 0x2Cu);
				memcpy(material, ItemBox_Item_MODEL.mats, 0x14u);
				model->mats = material;
				auto texId = ItemBoxPowerups[(int)_this->Data1->Scale.x].Texture;
				ItemBox_CurrentItem = (int)_this->Data1->Scale.x;
				material->attr_texId = texId;
				DrawModel(model);
				njPopMatrixEx();
				//DrawQueueDepthBias = -17952.0f;

				// This was originally DrawModelIGuess_N, but that's wrong.
				DrawModel(&ItemBox_Base_MODEL);
				DrawQueueDepthBias = 8000.0f;
				DrawModel_Queue(&ItemBox_Capsule_MODEL, (QueuedModelFlagsB)0);
				DrawQueueDepthBias = 0.0f;
				// This was originally DrawModelIGuess_N, but that's wrong.
				DrawModel(&ItemBox_Top_MODEL);

				DrawQueueDepthBias = 0;
			}
			njPopMatrixEx();
		}
	}
}

void __cdecl ItemBox_Display_Rotate(ObjectMaster* _this)
{
	auto v1 = _this->Data1;
	if (!MissedFrames)
	{
		ItemBoxPowerups[6].Texture = MetalSonicFlag ? 98 : LifeTextures[GetCurrentCharacterID()];
		if (IsVisible(&v1->Position, 20.0f))
		{
			SetTextureToCommon();
			njPushMatrix(nullptr);
			njTranslateV(nullptr, &v1->Position);

			// Rotate
			if (!Use1999SetFiles)
			{
				njRotateEx((Angle*)&v1->Rotation, 0);
			}
			if (v1->Action != 2)
			{
				auto scale = v1->Scale.z * 0.2f;
				njScale(nullptr, scale, scale, scale);
			}
			auto model = (NJS_MODEL_SADX *)late_alloca(44);
			auto material = (NJS_MATERIAL *)late_alloca(20);

			if (model && material)
			{
				njPushMatrixEx();
				njTranslate(nullptr, 0.0f, 7.5f, 0.0f);
				auto v6 = (Uint16)(v1->Scale.y * 65536.0f * 0.002777777777777778f);
				if (v6)
				{
					njRotateY(nullptr, v6);
				}
				memcpy(model, &ItemBox_Item_MODEL, 0x2Cu);
				memcpy(material, ItemBox_Item_MODEL.mats, 0x14u);

				model->mats = material;
				auto v7 = ItemBoxPowerups[(int)_this->Data1->Scale.x].Texture;
				ItemBox_CurrentItem = (int)_this->Data1->Scale.x;
				material->attr_texId = v7;

				DrawModel(model);
				njPopMatrixEx();

				// This was originally DrawModelIGuess_N, but that's wrong.
				DrawModel(&ItemBox_Base_MODEL);
				//DrawQueueDepthBias = -17952.0f;
				DrawQueueDepthBias = 8000.0f;
				DrawModel_Queue(&ItemBox_Capsule_MODEL, (QueuedModelFlagsB)0);
				DrawQueueDepthBias = 0.0f;
				// This was originally DrawModelIGuess_N, but that's wrong.
				DrawModel(&ItemBox_Top_MODEL);
			}
			njPopMatrixEx();
		}
	}
}

void ColorizeRecapText(int a1, int a2, float a3, float a4, float a5, float a6, float a7, float a8)
{
	sub_6424A0(a1, 0xFFF8F8F8, a3, a4, a5, a6, a7, a8);
}

static Sint32 DisplayTitleCard_r();
static Trampoline DisplayTitleCard_t(0x47E170, 0x47E175, DisplayTitleCard_r);
static Sint32 __cdecl DisplayTitleCard_r()
{
	auto original = reinterpret_cast<decltype(DisplayTitleCard_r)*>(DisplayTitleCard_t.Target());
	CutsceneFadeMode = 0;
	CutsceneFadeValue = 0;
	SkipPressed_Cutscene = false;
	return original();
}

static void SetGlobalPoint2Col_Colors_r(Uint32 one, Uint32 two, Uint32 threefour);
static Trampoline SetGlobalPoint2Col_Colors_t(0x402F10, 0x402F18, SetGlobalPoint2Col_Colors_r);
static void __cdecl SetGlobalPoint2Col_Colors_r(Uint32 one, Uint32 two, Uint32 threefour)
{
	auto original = reinterpret_cast<decltype(SetGlobalPoint2Col_Colors_r)*>(SetGlobalPoint2Col_Colors_t.Target());
	if (ScreenFade_Alpha < 200 || ScreenFade_Color.color == 0xFFFFFFFF)
	{
		original(one, two, threefour);
		GlobalColor_wait = false;
	}
	else
	{
		original(0, 0, 0);
		GlobalColor_one = one;
		GlobalColor_two = two;
		GlobalColor_threefour = threefour;
		GlobalColor_wait = true;
	}
}

void __fastcall DrawUnderwaterOverlay_Reset(NJS_MATRIX_CONST_PTR m, const NJS_VECTOR* p3, NJS_POINT2* p2)
{
	njProjectScreen(0, p3, p2);
	IsCameraUnderwater = false;
}

void __fastcall DrawUnderwaterOverlay(NJS_MATRIX_PTR m)
{
	NJS_COLOR WaterOverlay_Colors;
	njPushMatrix(m);
	//if (CurrentLevel != 9) //I forgot why
	//{		
		IsCameraUnderwater = true;
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
		WaterOverlay_Colors.color = 0x1E0008FF;
		DrawRect_Queue(0.0, 0.0, HorizontalResolution, VerticalResolution, 22041.496f, WaterOverlay_Colors.argb.b | ((WaterOverlay_Colors.argb.g | (*(unsigned __int16 *)&WaterOverlay_Colors.argb.r << 8)) << 8), QueuedModelFlagsB_EnableZWrite);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
	//}
}

void __cdecl sub_4B9CE0(EntityData1 *a1, EntityData1 *a2)
{
	EntityData1 *v2; // edi
	float v3; // eax
	Angle v4; // eax
	Angle v5; // eax
	NJS_VECTOR a2a; // [esp+4h] [ebp-Ch]
	v2 = a1;
	v3 = a2->Scale.x;
	a2a.z = 0.0;
	a2a.y = 0.0;
	a2a.x = 0.0;
	v2->Scale.x = v3;
	v2->Scale.y = GetCharObj2(0)->PhysicsData.CollisionSize * v2->Scale.x * 0.60000002;
	njPushMatrix(nj_unit_matrix_);
	njTranslateV(0, &a2->Position);
	v4 = a2->Rotation.z;
	if (v4)
	{
		njRotateZ(0, (unsigned __int16)v4);
	}
	v5 = a2->Rotation.x;
	if (v5)
	{
		njRotateX(0, (unsigned __int16)v5);
	}
	njTranslate(0, 0.0f, v2->Scale.y, 0.0f);
	njCalcPoint(0, &a2a, &v2->Position);
	njPopMatrix(1u);
}

void __cdecl Barrier_MainX(ObjectMaster *a1)
{
	EntityData1 *v1; // edi
	EntityData1 *v2; // esi
	ObjectMaster *v3; // eax
	ObjectMaster *v4; // esi
	EntityData1 *v5; // edi
	v1 = a1->Data1;
	v2 = EntityData1Ptrs[*(Uint8 *)&v1->CharIndex];
	if (v2 && GetCharObj2(0)->Powerups & Powerups_Barrier)
	{
		sub_4B9CE0(v1, v2);
		if ((double)rand() * 0.000030517578f > 0.84f)
		{
			v3 = LoadChildObject(LoadObj_Data1, BarrierChild, a1);
			v4 = v3;
			if (v3)
			{
				v5 = v3->Data1;
				v5->Rotation.x = (unsigned __int64)((double)rand() * 0.000030517578f * 65536.0f);
				v5->Rotation.y = (unsigned __int64)((double)rand() * 0.000030517578f * 65536.0f);
				v4->DisplaySub = Barrier_Display;
			}
		}
		RunObjectChildren(a1);
	}
	else
	{
		CheckThingButThenDeleteObject(a1);
	}
}

void __cdecl RenderInvincibilityLines(NJS_MODEL_SADX *a1)
{
	double v1; // st7

	v1 = 20048.0f;
	if ((CurrentAct | (CurrentLevel << 8)) >> 8 == 3 && CurrentAct == 2)
	{
		v1 = 0.0f;
	}
	DrawQueueDepthBias = v1;
	DrawVisibleModel_Queue(a1, (QueuedModelFlagsB)0);
	DrawQueueDepthBias = 0.0f;
}

void RenderHintMonitor_Main(NJS_MODEL_SADX *a1, int a2, float a3)
{
	sub_409E70(HintMonitorModel->basicdxmodel, a2, a3);
}

void SetHintMonitorTransparency(NJS_ARGB *a1)
{
	SetMaterialAndSpriteColor_Float(min(0.69f, a1->a), min(0.69f, a1->r), min(0.69f, a1->g), min(0.69f, a1->b));
}

void DrawNPCShadowFix(NJS_MODEL_SADX *a1)
{
	DrawModel_Queue(a1, QueuedModelFlagsB_EnableZWrite);
}

void ECGammaCutsceneFix(ObjectMaster *a1, NJS_ACTION *a2, NJS_TEXLIST *a3, float a4, char a5, char a6)
{
	Cutscene_WaitForInput(25);
	ObjectMaster *v112 = j_GetCharacterObject(4u);
	InitCutsceneObjectAction(v112, E102_ACTIONS[49], &E102_TEXLIST, 1.0f, 1, 16);
	Cutscene_MoveCharacterAtoB(v112, 0.0f, 1560.0f, 3426.0f, 0.0f, 1535.0f, 3426.0f, 85);
}

void __cdecl ItemBoxAirDrawFunction_Normal(NJS_OBJECT *a1, ObjectThingC *a2)
{
	NJS_OBJECT *v2; // esi
	NJS_OBJECT *v3; // ecx
	int v4; // eax
	Angle v5; // eax
	Angle v6; // eax
	Angle v7; // eax
	float a3; // ST08_4
	void(__cdecl *v9)(NJS_OBJECT *); // eax
	Angle v10; // eax
	Angle v11; // eax
	Angle v12; // eax

	v2 = a1;
	do
	{
		njPushMatrix(0);
		if (v2->model)
		{
			v3 = a2->object;
			v4 = 0;
			if (a2->object)
			{
				do
				{
					if (v3 == v2)
					{
						break;
					}
					v3 = a2[v4++ + 1].object;
				} while (v3);
			}
			if (a2[v4].object)
			{
				v9 = a2[v4].function;
				if (v9)
				{
					v9(v2);
				}
			}
			else if (!MissedFrames)
			{
				njTranslateV(0, (const NJS_VECTOR *)v2->pos);
				v5 = v2->ang[2];
				if (v5)
				{
					njRotateZ(0, (unsigned __int16)v5);
				}
				v6 = v2->ang[0];
				if (v6)
				{
					njRotateX(0, (unsigned __int16)v6);
				}
				v7 = v2->ang[1];
				if (v7)
				{
					njRotateY(0, (unsigned __int16)v7);
				}
				njScaleV(0, (const NJS_VECTOR *)v2->scl);
				a3 = VectorMaxAbs((NJS_VECTOR *)v2->scl);
				DrawQueueDepthBias = 3000.0f;
				sub_4094D0(v2->basicdxmodel, (QueuedModelFlagsB)0, a3);
				DrawQueueDepthBias = 0.0f;
			}
		}
		else
		{
			njTranslateV(0, (const NJS_VECTOR *)v2->pos);
			v10 = v2->ang[2];
			if (v10)
			{
				njRotateZ(0, (unsigned __int16)v10);
			}
			v11 = v2->ang[0];
			if (v11)
			{
				njRotateX(0, (unsigned __int16)v11);
			}
			v12 = v2->ang[1];
			if (v12)
			{
				njRotateY(0, (unsigned __int16)v12);
			}
			njScaleV(0, (const NJS_VECTOR *)v2->scl);
		}
		if (v2->child)
		{
			njPushMatrix(0);
			ItemBoxAirDrawFunction_Normal(v2->child, a2);
			njPopMatrix(1u);
		}
		njPopMatrix(1u);
		v2 = v2->sibling;
	} while (v2);
}

void __cdecl ItemBoxAirDrawFunction_Resize(NJS_OBJECT* a1, ObjectThingC* a2)
{
	ItemBoxAirDrawFunction_Normal(ItemBoxAirModel_Resize, (ObjectThingC*)0x981A78);
}

void DrawAfterImageFixed(int a1, CharObj2 *a2)
{
	int v2; // eax
	NJS_OBJECT *v3; // eax
	NJS_ACTION *v4; // ecx
	int v5; // edi

	v2 = a1;
	if (MetalSonicFlag)
	{
		v5 = v2 * 16;
		v4 = a2->AnimationThing.AnimData[v2].Animation;
		v3 = v4->object;
		if (v4->object == *SONIC_OBJECTS)
		{
			if (v4 == *SONIC_ACTIONS)
			{
				njSetTexture(&METALSONIC_TEXLIST);
				if (CharObj2Ptrs[0]->UnderwaterTime) DrawQueueDepthBias = -35000.0f; else DrawQueueDepthBias = 5000.0f;
				sub_4053A0(SONIC_OBJECTS[68], SONIC_MOTIONS[1], a2->AnimationThing.Frame, 0, 0);
				DrawQueueDepthBias = 0;
			}
			else
			{
				njSetTexture(&METALSONIC_TEXLIST);
				if (CharObj2Ptrs[0]->UnderwaterTime) DrawQueueDepthBias = -35000.0f; else DrawQueueDepthBias = 5000.0f;
				sub_4053A0(SONIC_OBJECTS[68], (*(NJS_ACTION **)((char *)&a2->AnimationThing.AnimData->Animation + v5))->motion, a2->AnimationThing.Frame, 0, 0);
				DrawQueueDepthBias = 0;
			}
		}
		else if (v3 == SONIC_OBJECTS[66])
		{
			njSetTexture(&METALSONIC_TEXLIST);
			if (CharObj2Ptrs[0]->UnderwaterTime) DrawQueueDepthBias = -35000.0f; else DrawQueueDepthBias = 5000.0f;
			sub_4053A0(SONIC_OBJECTS[69], (*(NJS_ACTION **)((char *)&a2->AnimationThing.AnimData->Animation + v5))->motion,	a2->AnimationThing.Frame, 0, 0);
			DrawQueueDepthBias = 0;
		}
		else if (v3 == SONIC_OBJECTS[67])
		{
			njSetTexture(&METALSONIC_TEXLIST);
			if (CharObj2Ptrs[0]->UnderwaterTime) DrawQueueDepthBias = -35000.0f; else DrawQueueDepthBias = 5000.0f;
			sub_4053A0(SONIC_OBJECTS[70], (*(NJS_ACTION **)((char *)&a2->AnimationThing.AnimData->Animation + v5))->motion,	a2->AnimationThing.Frame, 0, 0);
			DrawQueueDepthBias = 0;
		}
		else
		{
			njAction(v4, a2->AnimationThing.Frame);
		}
	}
}

void __cdecl MetalSonic_AfterImage_Display_Fixed(ObjectMaster *a1)
{
	EntityData1 *v1; // edi
	CharObj2 *v2; // esi
	Angle v3; // eax
	float r; // ST08_4
	Angle v5; // eax
	Angle v6; // eax

	v1 = a1->Data1;
	v2 = GetCharObj2(0);
	if (v2)
	{
		if (IsVisible(&v1->Position, 15.0))
		{
			BackupConstantAttr();
			AddConstantAttr(0, NJD_FLAG_USE_ALPHA);
			njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
			njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
			r = *(float *)&v1->CharIndex - 1.0f;
			SetMaterialAndSpriteColor_Float(r, 1.0f, 1.0f, 1.0f);
			njPushMatrix(0);
			njTranslateV(0, &v1->Position);
			v3 = v1->Rotation.z;
			if (v3)
			{
				njRotateZ(0, (unsigned __int16)v3);
			}
			v5 = v1->Rotation.x;
			if (v5)
			{
				njRotateX(0, (unsigned __int16)v5);
			}
			v6 = v1->Rotation.y;
			if (v6 != 0x8000)
			{
				njRotateY(0, (unsigned __int16)(-32768 - v6));
			}
			DrawAfterImageFixed((unsigned __int16)v2->AnimationThing.Index, v2);
			njPopMatrix(1u);
			njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
			njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
			ClampGlobalColorThing_Thing();
			RestoreConstantAttr();
		}
	}
}

void CharacterShadowHook(NJS_OBJECT *a1, float a2)
{
	float v2; // st7
	v2 = DrawQueueDepthBias;
	if (EnableWindyValley && CurrentLevel == LevelIDs_WindyValley && CurrentAct == 2) DrawQueueDepthBias = 2600.0f;
	else if (EnableChaos4 && CurrentLevel == LevelIDs_Chaos4)
	{
		if (EntityData1Ptrs[0]->Position.y >= 18) DrawQueueDepthBias = 4000.0f;
		else DrawQueueDepthBias = -32952.0f;
	}
	else if (EnableRedMountain && CurrentLevel == LevelIDs_RedMountain && CurrentAct != 1)
	{
		//Disable for digging
		if (CurrentCharacter == Characters_Knuckles && CharObj2Ptrs[0]->AnimationThing.Index >= 41 && CharObj2Ptrs[0]->AnimationThing.Index <= 44) DrawQueueDepthBias = -21000.0f;
		else DrawQueueDepthBias = 1000.0f;
	}
	else if (EnableFinalEgg && CurrentLevel == LevelIDs_FinalEgg) DrawQueueDepthBias = 3000.0f;
	else DrawQueueDepthBias = -27952.0f;
	if (MissedFrames || VerifyTexList(CurrentTexList))
	{
		DrawQueueDepthBias = v2;
	}
	else
	{
		ProcessModelNode(a1, (QueuedModelFlagsB)6, a2);
		DrawQueueDepthBias = v2;
	}
}

void DrawCutsceneZeroShadow(NJS_OBJECT *object, float scale)
{
	DrawQueueDepthBias = 2000.0f;
	ProcessModelNode(object, QueuedModelFlagsB_SomeTextureThing, scale);
	DrawQueueDepthBias = 0.0f;
}

void DrawScalableShadowHook(NJS_OBJECT *a1, float a2)
{
	double v2; // st7
	float v3; // [esp+0h] [ebp-4h]
	v2 = DrawQueueDepthBias;
	if (CurrentLevel == LevelIDs_WindyValley && CurrentAct == 2)
	{
		DrawQueueDepthBias = 2600.0f;
		ProcessModelNode(a1, (QueuedModelFlagsB)6, a2);
	}
	else
	{
		if (MissedFrames || VerifyTexList(CurrentTexList))
		{
			DrawQueueDepthBias = -27952.0f;
		}
		else
		{
			ProcessModelNode(a1, (QueuedModelFlagsB)6, a2);
		}
		ProcessModelNode_A_WrapperC(a1, a2);
	}
	DrawQueueDepthBias = v2;
}

void DrawRingShadowHook(NJS_MODEL_SADX *a1, float a2)
{
	float v2 = DrawQueueDepthBias;
	if (CurrentLevel == LevelIDs_WindyValley && CurrentAct == 2)
	{
		DrawQueueDepthBias = 2600.0f;
	}
	else if (CurrentLevel == LevelIDs_FinalEgg && CurrentAct == 2)
	{
		DrawQueueDepthBias = 3000.0f;
	}
	else DrawQueueDepthBias = -27952.0f;
	DrawModel_QueueVisible(a1, (QueuedModelFlagsB)6, a2);
	DrawQueueDepthBias = v2;
}

void RenderEmeraldShard_A(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	DrawQueueDepthBias = 2000.0f;
	ProcessModelNode_D(EmeraldPieceModel, (QueuedModelFlagsB)1, a3);
	DrawQueueDepthBias = 0.0f;
}

void RenderEmeraldShard_B(NJS_OBJECT *a1, QueuedModelFlagsB a2)
{
	DrawQueueDepthBias = 1500.0f;
	ProcessModelNode_D(EmeraldPieceOutline, (QueuedModelFlagsB)0, 1.0f);
	DrawQueueDepthBias = 0.0f;
}

void RenderEmeraldShard_C(NJS_OBJECT *a1)
{
	DrawQueueDepthBias = 1500.0f;
	ProcessModelNode_D(EmeraldPieceOutline, (QueuedModelFlagsB)0, 1.0f);
	DrawQueueDepthBias = 0.0f;
}

void SetEmeraldShardColor(float a, float r, float g, float b)
{
	SetMaterialAndSpriteColor_Float(0.08f, 1.0f, 1.0f, 1.0f);
}

void SonicFrozenCubeFix(NJS_OBJECT *a1)
{
	ProcessModelNode_D(a1, 0, 1.0f);
}

void AnimalBubbleHook(NJS_OBJECT* a1, QueuedModelFlagsB a2)
{
	DrawQueueDepthBias = 4000.0f;
	ProcessModelNode(a1, (QueuedModelFlagsB)0, 1.0f);
	DrawQueueDepthBias = 0.0f;
}

void BigFishingThingFix(NJS_OBJECT* a1)
{
	ProcessModelNode(a1, (QueuedModelFlagsB)0, 1.0f);
}

void RenderItemBoxIcon(NJS_MODEL_SADX* a1)
{
	DrawModel_Queue(a1, QueuedModelFlagsB_EnableZWrite);
}

void SpindashChargeLinesHook(NJS_POINT3COL *a1, int a2, NJD_DRAW attr, QueuedModelFlagsB a4)
{
	if (CurrentLevel == LevelIDs_WindyValley && CurrentAct == 2) DrawQueueDepthBias = 4000.0f;
	if (CurrentLevel == LevelIDs_StationSquare && CurrentAct == 3) DrawQueueDepthBias = 1000.0f;
	Draw3DLinesMaybe_Queue(a1, a2, attr, a4);
	DrawQueueDepthBias = 0.0f;
}

void SpindashChargeSpriteHook(NJS_SPRITE *sp, Int n, NJD_SPRITE attr, QueuedModelFlagsB zfunc_type)
{
	if (CurrentLevel == LevelIDs_WindyValley && CurrentAct == 2) DrawQueueDepthBias = 4000.0f;
	if (CurrentLevel == LevelIDs_StationSquare && CurrentAct == 3) DrawQueueDepthBias = 1000.0f;
	njDrawSprite3D_Queue(sp, n, attr, zfunc_type);
	DrawQueueDepthBias = 0.0f;
}

void RenderChaosPuddle_Last(NJS_OBJECT *a1)
{
	ProcessModelNode_D(a1, (QueuedModelFlagsB)0, 1.0f);
}

void CutsceneAnimationHook1(NJS_ACTION *a1, float a2, QueuedModelFlagsB a3)
{
	//Event helicopter
	if (CurrentTexList == &EV_HELI_TEXLIST) DrawEventHelicopter(a1, a2, a3);
	else njAction_Queue_407FC0(a1, a2, a3);
}

void CutsceneAnimationHook2(NJS_ACTION *anim, float a2, QueuedModelFlagsB a3)
{
	//Chaos emeralds
	if (CurrentTexList == &M_EM_BLUE_TEXLIST || CurrentTexList == &M_EM_GREEN_TEXLIST || CurrentTexList == &M_EM_WHITE_TEXLIST || CurrentTexList == &M_EM_PURPLE_TEXLIST || CurrentTexList == &M_EM_SKY_TEXLIST || CurrentTexList == &M_EM_YELLOW_TEXLIST || CurrentTexList == &M_EM_RED_TEXLIST || CurrentTexList == &M_EM_BLACK_TEXLIST)
	{
		njAction_Queue_407FC0(anim, a2, a3);
	}
	//Event Tornado 2
	if (anim->object == Tornado2Pointer->object)
	{
		njAction_Queue_407FC0(anim, a2, a3);
	}
	else njAction_Queue_407BB0(anim, a2, a3);
}

void RenderEggCarrier0NPC(NJS_ACTION* action, Float frame)
{
	if (action == (NJS_ACTION*)0x11A86D4) njAction_ReallyHard(action, frame); //Chaos 4
	else njAction(action, frame);
}

void GeoAnimFix(NJS_ACTION* a1, float a2, QueuedModelFlagsB a3, float a4)
{
	if (CurrentLevel == LevelIDs_MysticRuins && CurrentAct == 2)
	{
		DrawQueueDepthBias = -20952.0f;
		njAction_Queue_407FC0(a1, a2, 1);
		DrawQueueDepthBias = 0.0f;
	}
	else if (CurrentLevel == LevelIDs_FinalEgg && CurrentAct == 2)
	{
		DrawQueueDepthBias = -47952.0f;
		njAction_Queue_407BB0_2(a1, a2, a3, a4);
		DrawQueueDepthBias = 0.0f;
	}
	else njAction_Queue_407BB0_2(a1, a2, a3, a4);
}

void CaptureBeamFix(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	//9 - Sonic and Tails gassed at Casinopolis (Sonic)
	//53 - Sonic and Tails gassed at Casinopolis (Tails)
	//11 - Chaos 4 emerges (Sonic)
	//57 - Chaos 4 emerges (Tails)
	//139 - Chaos 4 emerges (Knuckles)
	if (CutsceneID == 9 || CutsceneID == 11 | CutsceneID == 53 || CutsceneID == 57 || CutsceneID == 139)
	{
		DrawQueueDepthBias = 8000.0f;
		ProcessModelNode_D_WrapperB(a1, a2, a3);
		DrawQueueDepthBias = 0.0f;
	}
	else ProcessModelNode_A_Wrapper(a1, a2, a3);
}

void QueueAnimals(NJS_ACTION *action, Float frame)
{
	njAction_Queue(action, frame, QueuedModelFlagsB_EnableZWrite);
}

void QueueChaoAnimals1(NJS_ACTION *a1, float a2)
{
	DrawQueueDepthBias = -20000.0f;
	AnimationCallback_C(a1, a2, QueuedModelFlagsB_EnableZWrite);
	DrawQueueDepthBias = 0.0f;
}

void QueueChaoAnimals2(NJS_OBJECT *a1, NJS_MOTION *a2, float a3)
{
	DrawQueueDepthBias = -20000.0f;
	DrawObjectWithMotion_407BB0(a1, a2, a3, QueuedModelFlagsB_EnableZWrite, 1.0f);
	DrawQueueDepthBias = 0.0f;
}

void CutsceneFadeHookForSubtitleBox(float left, float top, float right, float bottom, float depth, NJS_COLOR color)
{
	color.argb.a = color.argb.a * (1.0f - CutsceneFadeValue / 255.0f);
	DrawRect_DrawNowMaybe(left, top, right, bottom, depth, color.color);
}

void CutsceneFadeHookForSubtitleText(NJS_ARGB *a1)
{
	float alpha = a1->a * (1.0f - CutsceneFadeValue / 255.0f);
	SetMaterialAndSpriteColor_Float(alpha, a1->r, a1->g, a1->b);
}

void General_Init()
{
	if (!ModelsLoaded_General)
	{
		//Cutscene skip hooks
		if (CutsceneSkipMode == 0)
		{
			WriteCall((void*)0x40D69C, CutsceneFadeHookForSubtitleBox);
			WriteCall((void*)0x40D78A, CutsceneFadeHookForSubtitleText);
		}
		//Snow/sandboard "fixes" (SL OBJECTS)
		RemoveVertexColors_Object(SONIC_OBJECTS[71]);
		RemoveVertexColors_Object(MILES_OBJECTS[71]);
		ForceLightType_Object(SONIC_OBJECTS[71], 2, false);
		ForceLightType_Object(MILES_OBJECTS[71], 2, false);
		//The beam that collects the emerald in "Sonic and Tails gassed at Casinopolis" cutscene
		WriteCall((void*)0x6F37DC, CaptureBeamFix);
		//Big's fishing thing fix
		WriteCall((void*)0x46C547, BigFishingThingFix);
		//Metal Sonic afterimage fix
		WriteJump(MetalSonic_AfterImage_Display, MetalSonic_AfterImage_Display_Fixed);
		//Character shadow fix (lame)
		WriteCall((void*)0x49F182, CharacterShadowHook);
		//NPC shadow fix
		WriteCall((void*)0x5252E8, DrawNPCShadowFix);
		WriteCall((void*)0x51AB88, RenderEggCarrier0NPC); //Chaos 4 glitch
		//Cutscene stuff
		WriteCall((void*)0x4181FD, CutsceneAnimationHook1);
		WriteCall((void*)0x418214, CutsceneAnimationHook2);
		WriteCall((void*)0x43A85F, GeoAnimFix); //Landtable animation hook
		//DirLight data... Someday
		/*
		//Replace SADX DirLight data with SA1 DirLight data
		DefaultDirLight_SADX.LightDirection.x = DirLights_SA1[0].LightDirection.x;
		DefaultDirLight_SADX.LightDirection.y = DirLights_SA1[0].LightDirection.y;
		DefaultDirLight_SADX.LightDirection.z = DirLights_SA1[0].LightDirection.z;
		DefaultDirLight_SADX.R = DirLights_SA1[0].R;
		DefaultDirLight_SADX.G = DirLights_SA1[0].G;
		DefaultDirLight_SADX.B = DirLights_SA1[0].B;
		DefaultDirLight_SADX.Specular = DirLights_SA1[0].Specular;
		DefaultDirLight_SADX.Diffuse = DirLights_SA1[0].Diffuse;
		DefaultDirLight_SADX.AmbientR = DirLights_SA1[0].Ambient;
		DefaultDirLight_SADX.AmbientG = DirLights_SA1[0].Ambient;
		DefaultDirLight_SADX.AmbientB = DirLights_SA1[0].Ambient;
		for (int i = 0; i < LengthOfArray(DirLights_SA1); i++)
		{
			DirLights_SADX[i].LightDirection.x = DirLights_SA1[i].LightDirection.x;
			DirLights_SADX[i].LightDirection.y = DirLights_SA1[i].LightDirection.y;
			DirLights_SADX[i].LightDirection.z = DirLights_SA1[i].LightDirection.z;
			DirLights_SADX[i].R = DirLights_SA1[i].R;
			DirLights_SADX[i].G = DirLights_SA1[i].G;
			DirLights_SADX[i].B = DirLights_SA1[i].B;
			DirLights_SADX[i].Specular = DirLights_SA1[i].Specular;
			DirLights_SADX[i].Diffuse = DirLights_SA1[i].Diffuse;
			DirLights_SADX[i].AmbientR = DirLights_SA1[i].Ambient;
			DirLights_SADX[i].AmbientG = DirLights_SA1[i].Ambient;
			DirLights_SADX[i].AmbientB = DirLights_SA1[i].Ambient;
		}
		*/
		WriteCall((void*)0x4A22A6, SonicFrozenCubeFix);
		//Material/vertex color fixes
		//Eggman's eyes (UV-less / SA1 model only)
		if (DLLLoaded_SA1Chars)
		{
			//Regular model
			if (((NJS_ACTION*)0x89E254)->object->child->child->basicdxmodel->mats[4].attrflags & NJD_FLAG_IGNORE_LIGHT)
			{
				ForceLevelSpecular_Object(((NJS_ACTION*)0x89E254)->object->child->child, false); //Prevent the glasses from "forgetting" specular in some cutscenes
				((NJS_ACTION*)0x89E254)->object->child->child->basicdxmodel->mats[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			}
			//Event Eggmobile 0
			if (((NJS_ACTION*)0x2CD393C)->object->child->child->basicdxmodel->mats[4].attrflags & NJD_FLAG_IGNORE_LIGHT)
			{
				ForceLevelSpecular_Object(((NJS_ACTION*)0x2CD393C)->object->child->child, false); //Prevent the glasses from "forgetting" specular in some cutscenes
				ForceObjectSpecular_Object(((NJS_ACTION*)0x2CD393C)->object->child->child->sibling->sibling->child, false); //Right hand
				ForceObjectSpecular_Object(((NJS_ACTION*)0x2CD393C)->object->child->child->sibling->child, false); //Left hand
				((NJS_ACTION*)0x2CD393C)->object->child->child->basicdxmodel->mats[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			}
			//Disabled most of these since they're being taken care of in SA1_Chars now
			//Event Tornado 2 pre-transformed light type fix
			ForceLightType_Object(Tornado2Pointer->object, 2, false);
			//Event Tornado 2 transformed specular fix
			//ForceObjectSpecular_Object(Tornado2ChangeAction.object->child, false); //Moved to SA1_Chars
			//Event Tornado 2 transformed emerald transparency fix
			//SortModel(Tornado2ChangeAction.object->child->sibling->sibling); //Sorted already?
			//Event Tornado 2 transformation emerald transparency fix
			//SortModel(Tornado2TransformationAction.object->child->child->sibling->sibling->sibling->child); //Sorted in SA1_Chars
			//Tornado 2 white diffuse during transformation custcene
			AddWhiteDiffuseMaterial(&Tornado2TransformationAction.object->child->child->sibling->sibling->sibling->child->basicdxmodel->mats[0]);
			AddWhiteDiffuseMaterial(&Tornado2TransformationAction.object->child->child->sibling->sibling->sibling->child->basicdxmodel->mats[1]);
			AddWhiteDiffuseMaterial(&Tornado2TransformationAction.object->child->child->sibling->sibling->sibling->child->basicdxmodel->mats[2]);
			AddWhiteDiffuseMaterial(&Tornado2TransformationAction.object->child->child->sibling->sibling->sibling->child->basicdxmodel->mats[3]);
		}
		RemoveVertexColors_Object((NJS_OBJECT*)0x3318898); //Egg Missile cutscene model
		ForceObjectSpecular_Object((NJS_OBJECT*)0x3318898, false); //Egg Missile cutscene model
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x94BAA0); //ERobo0 head
		AddWhiteDiffuseMaterial(&(((NJS_MODEL_SADX*)0x94BAA0)->mats[4]));
		RemoveVertexColors_Object((NJS_OBJECT*)0x94DA44); //ERobo0 body
		((NJS_OBJECT*)0x008BF3A0)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Shadow blob
		WriteCall((void*)0x6A65CB, DrawCutsceneZeroShadow); //Fix Zero's shadow overlapping Amy's in a cutscene
		RemoveVertexColors_Object((NJS_OBJECT*)0x3175528); //Tails' model in the cutscene where Sonic sees him crash
		RemoveVertexColors_Object(MILES_OBJECTS[71]); //Tails' snowboard
		RemoveVertexColors_Object(BIG_OBJECTS[42]); //Big fishing thing 1
		RemoveVertexColors_Object(BIG_OBJECTS[43]); //Big fishing thing 2
		RemoveVertexColors_Object(SONIC_OBJECTS[72]); //Ice cube for frozen Sonic
		RemoveVertexColors_Object(SONIC_OBJECTS[73]); //Ice cube fragments for frozen Sonic
		RemoveVertexColors_Object((NJS_OBJECT*)0x38CBC74); //Rhinotank
		RemoveVertexColors_Object((NJS_OBJECT*)0x38D0CF0); //AMEMB
		RemoveVertexColors_Object((NJS_OBJECT*)0x38E50C4); //Buyon A
		RemoveVertexColors_Object((NJS_OBJECT*)0x38E3B2C); //Buyon B
		RemoveVertexColors_Object((NJS_OBJECT*)0x38E3584); //Buyon C
		RemoveVertexColors_Object((NJS_OBJECT*)0x9538EC); //Leon body
		RemoveVertexColors_Object((NJS_OBJECT*)0x96BC08); //Kiki's bomb
		RemoveVertexColors_Object((NJS_OBJECT*)0x96C9B4); //Kiki's toge bomb
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x8B966C); //Capsule
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x8BA2AC); //Capsule
		*(NJS_OBJECT*)0x96F3F0 = *LoadModel("system\\data\\1ST_READ\\Models\\005B8C04.sa1mdl", false); //Unidus spinning part
		((NJS_OBJECT*)0x96F3F0)->basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		*(NJS_OBJECT*)0x954D28 = *LoadModel("system\\data\\1ST_READ\\Models\\005A2DDC.sa1mdl", false); //Leon eyes
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x954D28)->child->basicdxmodel->mats[1]);
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x954D28)->child->basicdxmodel->mats[2]);
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x954D28)->child->sibling->sibling->sibling->sibling->basicdxmodel->mats[1]);
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x954D28)->child->sibling->sibling->sibling->sibling->basicdxmodel->mats[2]);
		RemoveVertexColors_Object((NJS_OBJECT*)0x954E94); //Leon tongue
		RemoveVertexColors_Object((NJS_OBJECT*)0x95504C); //Leon tongue tip
		RemoveVertexColors_Object((NJS_OBJECT*)0x950940); //Boa 1
		RemoveVertexColors_Object((NJS_OBJECT*)0x950690); //Boa 2 
		RemoveVertexColors_Object((NJS_OBJECT*)0x94FB38); //Boa 3
		RemoveVertexColors_Object((NJS_OBJECT*)0x94EFD4); //Boa 4
		RemoveVertexColors_Object((NJS_OBJECT*)0x97388C); //Cop speeder
		RemoveVertexColors_Object((NJS_OBJECT*)0x970D8C); //Spinner
		//Stupid hacks for Windy Valley 3 and other stages
		WriteCall((void*)0x49EE10, DrawRingShadowHook);
		WriteCall((void*)0x49EFAE, DrawScalableShadowHook);
		WriteCall((void*)0x4A1827, SpindashChargeLinesHook);
		WriteCall((void*)0x4A1E55, SpindashChargeSpriteHook);
		//Replace hint monitor model
		HintMonitorModel = LoadModel("system\\data\\1st_read\\Models\\001AD358.sa1mdl", false);
		HideMesh_Object(HintMonitorModel, 10); //Hide screen (rendered separately in DX)
		WriteCall((void*)0x7A9509, RenderHintMonitor_Main);
		WriteCall((void*)0x7A957F, SetHintMonitorTransparency);
		//Fix frogs lol
		*(NJS_OBJECT*)0x30CB4F8 = *LoadModel("system\\data\\Other\\02CCB4F8.sa1mdl", false);
		*(NJS_OBJECT*)0x30CDB28 = *LoadModel("system\\data\\Other\\02CCDB28.sa1mdl", false);
		*(NJS_OBJECT*)0x30D0160 = *LoadModel("system\\data\\Other\\02CD0160.sa1mdl", false);
		//Leon fixes
		WriteData((float**)0x4CD75A, &_nj_screen_.w); //from SADXFE
		WriteData((float**)0x4CD77C, &_nj_screen_.h); //from SADXFE
		//Robot chest stuff
		WriteData<1>((char*)0x4CFC05, 0x08); //Zero constant material thing
		WriteData<1>((char*)0x4CFC99, 0x08); //Zero constant material thing
		WriteData<1>((char*)0x567CF2, 0x08); //E101 Beta (boss) constant material
		((NJS_OBJECT*)0x14D857C)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; //E101 left eye (boss model)
		((NJS_OBJECT*)0x14D857C)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT; //E101 nose (boss model)
		((NJS_OBJECT*)0x14D887C)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; //E101 right eye (boss model)
		((NJS_OBJECT*)0x14D6504)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT; //E101 chest (boss model)
		((NJS_OBJECT*)0x14D943C)->basicdxmodel->mats[3].attrflags &= ~NJD_FLAG_USE_ALPHA; //E101 unnecessary alpha (boss model)
		((NJS_OBJECT*)0x312F714)->basicdxmodel->mats[3].attrflags &= ~NJD_FLAG_USE_ALPHA; //E101 unnecessary alpha (cutscene model)
		((NJS_OBJECT*)0x30AB08C)->basicdxmodel->mats[3].attrflags &= ~NJD_FLAG_USE_ALPHA; //E103 unnecessary alpha (cutscene model)
		((NJS_OBJECT*)0x30A290C)->basicdxmodel->mats[3].attrflags &= ~NJD_FLAG_USE_ALPHA; //E104 unnecessary alpha (cutscene model)
		((NJS_OBJECT*)0x309A21C)->basicdxmodel->mats[3].attrflags &= ~NJD_FLAG_USE_ALPHA; //E105 unnecessary alpha (cutscene model)
		WriteData((float*)0x567D08, 0.847f); //E101 (boss model)
		WriteData((float*)0x4E7BFD, 0.847f); //E103 (boss model)
		WriteData((float*)0x4E7C40, 0.847f); //E103 (boss model/other)
		WriteData((float*)0x605813, 0.847f); //E104 (boss model)
		WriteData((float*)0x6F4718, 0.847f); //E101 (cutscene model)
		WriteData((float*)0x6F3F94, 0.847f); //E103 (cutscene model)
		WriteData((float*)0x6F3D54, 0.847f); //E104 (cutscene model)
		WriteData((float*)0x6F3B24, 0.847f); //E105 (cutscene model)
		ForceLightType_Object((NJS_OBJECT*)0x31342F8, 2, false); //E101 cutscene chest model light type
		ForceLightType_Object((NJS_OBJECT*)0x30A7D44, 2, false); //E103 cutscene chest model light type
		ForceLightType_Object((NJS_OBJECT*)0x309F5C4, 2, false); //E104 cutscene chest model light type
		ForceLightType_Object((NJS_OBJECT*)0x3096F1C, 2, false); //E105 cutscene chest model light type
		//Gamma's projectile fix. I have no idea why this works, but ok I guess
		E102_OBJECTS[5]->basicdxmodel->mats[0].attr_texId = 10;
		E102_OBJECTS[5]->basicdxmodel->mats[0].attrflags |= NJD_FLAG_USE_TEXTURE;
		E102_OBJECTS[6] = E102_OBJECTS[5];
		//Chaos 1 materials
		RemoveVertexColors_Object((NJS_OBJECT*)0x38DD9BC); //Chaos puddle 1
		RemoveVertexColors_Object((NJS_OBJECT*)0x2D6962C); //Chaos puddle 2
		RemoveVertexColors_Object((NJS_OBJECT*)0x3185D2C); //Chaos 1
		//Gamma's dynamite
		*(NJS_OBJECT*)0x8C9C4C = *LoadModel("system\\data\\1ST_READ\\Models\\001AAD68.sa1mdl", false);
		((NJS_OBJECT*)0x8C9C4C)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA; //I think it's supposed to be transparent but it looks like that on DC so...
		((NJS_OBJECT*)0x8C9C4C)->basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_USE_ALPHA; //But this one is totally unnecessary either way
		ForceObjectSpecular_Object((NJS_OBJECT*)0x8C9C4C, false);
		//Item box fixes
		WriteCall((void*)0x4C0066, RenderItemBoxIcon);
		ItemBoxAirModel = LoadModel("system\\data\\1ST_READ\\Models\\001AC4F4.sa1mdl", false);
		ItemBoxAirModel_Resize = LoadModel("system\\data\\1ST_READ\\Models\\001AC4F4.sa1mdl", false);
		ItemBoxAirModel_Resize->basicdxmodel->mats[0].attrflags |= NJD_FLAG_USE_ALPHA;
		ItemBoxAirModel_Resize->basicdxmodel->mats[1].attrflags |= NJD_FLAG_USE_ALPHA;
		ItemBoxAirModel_Resize->basicdxmodel->mats[2].attrflags |= NJD_FLAG_USE_ALPHA;
		ItemBoxAirModel_Resize->child->basicdxmodel->mats[0].attrflags |= NJD_FLAG_USE_ALPHA;
		ItemBoxAirModel_Resize->child->basicdxmodel->mats[1].attrflags |= NJD_FLAG_USE_ALPHA;
		ItemBoxAirModel_Resize->child->sibling = (NJS_OBJECT*)0x8CAD20;
		ItemBoxAirModel_Resize->child->sibling->sibling = (NJS_OBJECT*)0x8CAC14;
		WriteCall((void*)0x4BFEBF, ItemBoxAirDrawFunction_Resize);
		WriteCall((void*)0x4BFEFE, ItemBoxAirDrawFunction_Normal);
		WriteJump(ItemBox_Display_Destroyed, ItemBox_Display_Destroyed_Rotate);
		WriteJump(ItemBox_Display_Unknown, ItemBox_Display_Unknown_Rotate);
		WriteJump(ItemBox_Display, ItemBox_Display_Rotate);
		LoadModel_ReplaceMeshes((NJS_OBJECT*)0x8C908C, "system\\data\\1ST_READ\\Models\\001AA1E0.sa1mdl"); //Checkpoint
		*(NJS_OBJECT*)0x8B54C4 = *LoadModel("system\\data\\1ST_READ\\Models\\00197E20.sa1mdl", false)->child->child; //Spring static
		*(NJS_OBJECT*)0x8B603C = *LoadModel("system\\data\\1ST_READ\\Models\\00197E20.sa1mdl", false)->child->child; //Spring touched
		*(NJS_OBJECT*)0x8BFEF4 = *LoadModel("system\\data\\1ST_READ\\Models\\001A12A4.sa1mdl", false); //Rocket platform
		*(NJS_MODEL_SADX*)0x8BE168 = *LoadModel("system\\data\\1ST_READ\\Models\\0019F5F4.sa1mdl", false)->basicdxmodel; //Balloon
		((NJS_MODEL_SADX*)0x8BE168)->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		((NJS_MODEL_SADX*)0x8BE168)->mats[1].attrflags &= ~NJD_FLAG_USE_ALPHA;
		*(NJS_MODEL_SADX*)0x8C6624 = *LoadModel("system\\data\\1ST_READ\\Models\\001A7A78.sa1mdl", false)->child->basicdxmodel; //Spring H
		*(NJS_MODEL_SADX*)0x8C5D5C = *LoadModel("system\\data\\1ST_READ\\Models\\001A6F9C.sa1mdl", false)->basicdxmodel; //Star panel
		*(NJS_MODEL_SADX*)0x8BBD84 = *LoadModel("system\\data\\1ST_READ\\Models\\0019D2C0.sa1mdl", false)->basicdxmodel; //Switch (pressed)
		*(NJS_MODEL_SADX*)0x989384 = *LoadModel("system\\data\\1ST_READ\\Models\\0019D2C0.sa1mdl", false)->basicdxmodel; //Switch (unpressed)
		((NJS_MODEL_SADX*)0x989384)->meshsets[4].vertcolor = SwitchDark_vcolor2;
		((NJS_MODEL_SADX*)0x989384)->meshsets[3].vertcolor = SwitchDark_vcolor1;
		((NJS_ACTION*)0x8B8BC4)->object = LoadModel("system\\data\\1ST_READ\\Models\\0019A118.sa1mdl", false); //Dash panel
		//Light Speed Dash distance fix
		if (EnableLSDFix)
		{
			LSDMinimumCheck1 = 8.0f;
			LSDMinimumSet1 = 9.0f;
			LSDMinimumCheck2 = 4.0f;
			LSDMinimumSet2 = 4.0f;
			WriteData((float*)0x49306A, 16.0f); //Initial X speed
			WriteData((float**)0x492CCB, &LSDMinimumCheck2); //Minimum check 1 (2.0 in SADX)
			WriteData((float*)0x492CDA, LSDMinimumSet2); //Set if met check 1 (2.0 in SADX)
			WriteData((float**)0x492CB0, &LSDMinimumCheck1); //Minimum speed to be compared
			WriteData((float*)0x492CBF, LSDMinimumSet1); //Minimum speed to be set
		}
		//Fix badniks not spawning (Amenbo fix in trampoline)
		WriteCall((void*)0x49EFE7, CalculateEnemyYCoordinate_Wrapper);
		//Ripples
		if (EnableDCRipple)
		{
			*(NJS_OBJECT*)0x8B22F4 = *LoadModel("system\\data\\1st_read\\Models\\00193A44.sa1mdl", false);
			((NJS_OBJECT*)0x8B22F4)->basicdxmodel->mats[0].attr_texId = 99;
			WriteJump((void*)0x4B9290, FixedRipple_Normal);
			WriteJump((void*)0x7A81A0, FixedRipple_Bubble);
			WriteJump((void*)0x4407C0, SpawnRipplesX);
		}
		//Water splash particle
		WriteCall((void*)0x49F1C0, FixWaterSplash);
		//Some emerald shard "fixes"
		EmeraldPieceModel = LoadModel("system\\data\\1st_read\\Models\\0019BC48.sa1mdl", false);
		if (GetModuleHandle(L"sadx-d3d11") == nullptr)
		{
			EmeraldPieceModel->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
			EmeraldPieceModel->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2;
		}
		EmeraldPieceOutline = LoadModel("system\\data\\1st_read\\Models\\0019BC48.sa1mdl", false);
		EmeraldPieceOutline->basicdxmodel->mats[0].attrflags &= ~NJD_DA_INV_SRC;
		EmeraldPieceOutline->basicdxmodel->mats[0].attrflags |= NJD_DA_ONE;
		EmeraldPieceOutline->basicdxmodel->mats[0].diffuse.color = 0x00000000;
		WriteCall((void*)0x4A2CEF, RenderEmeraldShard_A);
		WriteCall((void*)0x4A2DBD, RenderEmeraldShard_B);
		WriteCall((void*)0x4A2E02, RenderEmeraldShard_C);
		WriteCall((void*)0x4A2D0D, SetEmeraldShardColor);
		WriteData((float**)0x4A2D39, &EmeraldScale); //Prevent minor Z Fighting with the main model
		//Underwater overlay
		WriteCall((void*)0x43708D, DrawUnderwaterOverlay);
		WriteCall((void*)0x43705A, DrawUnderwaterOverlay_Reset);
		//Character effects
		WriteJump((void*)0x4A1630, Sonic_DisplayLightDashModelX);
		WriteData((float**)0x47404B, &heat_float1);
		WriteData((float**)0x474057, &heat_float2);
		WriteJump((void*)0x4C1330, Knuckles_MaximumHeat_DrawX);
		WriteJump((void*)0x4C1410, Knuckles_MaximumHeatSprite_Draw);
		WriteCall((void*)0x4C1258, KnucklesPunch_RetrieveAlpha);
		WriteCall((void*)0x4C1305, KnucklesPunch_Render);
		//Dash trail fixes
		WriteCall((void*)0x4A0F56, SonicDashTrailFix);
		WriteCall((void*)0x4A1233, SonicDashTrailFix2);
		WriteData((float*)0x4A1216, 2500.0f); //Long dash trail depth bias
		WriteData<1>((char*)0x4A1220, 0i8); //Spindash trail queued flags
		//Barrier fixes
		WriteData<5>((char*)0x4B9E3A, 0x90u); //Disable ClampGlobalColorThing (it's called later in my replacement function)
		WriteCall((void*)0x4B9F0F, MagneticBarrierLightning);
		WriteCall((void*)0x4B9DDA, SetMagneticBarrierColor);
		WriteJump((void*)0x4B9C90, RenderBarrierModels);
		WriteJump(Barrier_Main, Barrier_MainX); //Barrier
		WriteCall((void*)0x4BA0E4, RenderInvincibilityLines);
		WriteData<10>((char*)0x40889C, 0x90u); //Queued model lighting/specular fix
		//Various bugfixes
		//Gamma cutscenes fix 
		WriteCall((void*)0x6D9DA7, ECGammaCutsceneFix); //Fix Gamma hover scene in Sonic's story
		WriteCall((void*)0x6B8D5E, ECGammaCutsceneFix); //Fix Gamma hover scene in Tails' story
		//Zero holding Amy lighting fix
		((NJS_OBJECT*)0x31A4DFC)->basicdxmodel->mats[11].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		((NJS_OBJECT*)0x31A4DFC)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		//Tikal lighting fixes
		((NJS_OBJECT*)0x8CE058)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		((NJS_OBJECT*)0x8CC658)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		//Eggman fingers fix
		((NJS_OBJECT*)0x8961E0)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		((NJS_OBJECT*)0x8964CC)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		((NJS_OBJECT*)0x8980DC)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		((NJS_OBJECT*)0x897DE0)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		((NJS_OBJECT*)0x2EE22C0)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		((NJS_OBJECT*)0x2EE25AC)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		((NJS_OBJECT*)0x2EE4194)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		((NJS_OBJECT*)0x2EE3E98)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		((NJS_OBJECT*)0x1257754)->basicdxmodel->mats[15].diffuse.color = 0xFFFFFFFF; //Chaos6 Eggmobile
		*(NJS_TEXLIST**)0x2BD5FE4 = (NJS_TEXLIST*)0x2EE0AA4; //Eggman Super Sonic cutscene texlist fix
		//Emblem field model
		((NJS_MATERIAL*)0x9740FC)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x974110)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x974124)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x974138)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		//Remove material colors on goal emeralds
		RemoveVertexColors_Object((NJS_OBJECT*)0xC3FDA0);
		RemoveVertexColors_Object((NJS_OBJECT*)0xC3E300);
		RemoveVertexColors_Object((NJS_OBJECT*)0xC3F050);
		//Remove material colors on cutscene emeralds
		RemoveVertexColors_Object(&EV_MODEL_EME_BLACK);
		RemoveVertexColors_Object(&EV_MODEL_EME_RED);
		RemoveVertexColors_Object(&EV_MODEL_EME_BLUE);
		RemoveVertexColors_Object(&EV_MODEL_EME_PURPLE);
		RemoveVertexColors_Object(&EV_MODEL_EME_GREEN);
		RemoveVertexColors_Object(&EV_MODEL_EME_SKY);
		RemoveVertexColors_Object(&EV_MODEL_EME_WHITE);
		RemoveVertexColors_Object(&EV_MODEL_EME_YELLOW);
		//Emeralds glow
		//Windy Valley
		WriteCall((void*)0x4DF27F, RenderEmeraldWithGlow_Windy); //Uses a different function than Ice Cap or Casino
		//Ice Cap
		WriteCall((void*)0x4ECEC4, RenderEmeraldWithGlow_Ice);
		//Casino
		WriteCall((void*)0x5DCFB0, RenderEmeraldWithGlow_Ice); //Same function
		//Material fixes
		for (int i = 0; i < LengthOfArray(RemoveColors_General); i++)
		{
			RemoveMaterialColors(RemoveColors_General[i]);
		}
		if (DLLLoaded_Lantern == true)
		{
			AddAlphaRejectMaterial(&((NJS_OBJECT*)0x8BF3A0)->basicdxmodel->mats[0]); //Shadow blob
			AddAlphaRejectMaterial((NJS_MATERIAL*)0x8B2E6C); //Invincibility lines
			AddAlphaRejectMaterial((NJS_MATERIAL*)0x8B2F80); //Invincibility ball
			AddAlphaRejectMaterial((NJS_MATERIAL*)0x8B26E4); //Magnetic barrier
			AddAlphaRejectMaterial((NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x7C334)); //Emerald shards (cutscene)
			material_register_ptr(WhiteDiffuse_General, LengthOfArray(WhiteDiffuse_General), &ForceWhiteDiffuse);
			material_register_ptr(WhiteDiffuseSecondCharSpecular, LengthOfArray(WhiteDiffuseSecondCharSpecular), &ForceWhiteDiffuse1Specular3);
		}
		RemoveVertexColors_Object((NJS_OBJECT*)0x31AB49C); //Birdie in "Zero holding Amy" cutscenes
		RemoveVertexColors_Object((NJS_OBJECT*)0x31A72D8); //Zero holding Amy
		RemoveVertexColors_Object((NJS_OBJECT*)0x319F714); //Amy held by Zero (talking head)
		RemoveVertexColors_Object((NJS_OBJECT*)0x319C3EC); //Amy held by Zero
		RemoveVertexColors_Object((NJS_OBJECT*)0x33144B0); //Egg Walker cutscene
		WriteCall((void*)0x4D7718, AnimalBubbleHook); //Animal bubble blending mode + depth
		*(NJS_OBJECT*)0x2F67B78 = *LoadModel("system\\data\\Other\\00006C38.sa1mdl", false); //Tornado 2 crashed
		//Animals
		WriteCall((void*)0x4D769B, QueueAnimals); //Queue animal models because they have transparency
		WriteCall((void*)0x73F726, QueueChaoAnimals1); //Also queue Chao animals
		WriteCall((void*)0x73F742, QueueChaoAnimals2); //Also queue Chao animals
		ResizeTextureList((NJS_TEXLIST*)0x92ACE4, 5); //GOMA texlist
		//Load SA1 animal models and replace their models/animations in Action Stages
		NJS_OBJECT* SA1Animal_Goma = LoadModel("system\\data\\1st_read\\Models\\00157760.sa1mdl", false);
		Action_Goma.object = SA1Animal_Goma;
		Action_Goma.motion = &_158830;
		NJS_OBJECT* SA1Animal_Pen = LoadModel("system\\data\\1st_read\\Models\\00159F2C.sa1mdl", false);
		Action_Pen.object = SA1Animal_Pen;
		Action_Pen.motion = &_15B72C;
		NJS_OBJECT* SA1Animal_Tuba = LoadModel("system\\data\\1st_read\\Models\\0015CD8C.sa1mdl", false);
		Action_Tuba.object = SA1Animal_Tuba;
		Action_Tuba.motion = &_15DD6C;
		NJS_OBJECT* SA1Animal_Kuja = LoadModel("system\\data\\1st_read\\Models\\0015F348.sa1mdl", false);
		Action_Kuja.object = SA1Animal_Kuja;
		Action_Kuja.motion = &_160688;
		NJS_OBJECT* SA1Animal_Oum = LoadModel("system\\data\\1st_read\\Models\\00161CFC.sa1mdl", false);
		Action_Oum.object = SA1Animal_Oum;
		Action_Oum.motion = &_162EBC;
		NJS_OBJECT* SA1Animal_Koar = LoadModel("system\\data\\1st_read\\Models\\00164470.sa1mdl", false);
		Action_Koar.object = SA1Animal_Koar;
		Action_Koar.motion = &_165C70;
		NJS_OBJECT* SA1Animal_Wara = LoadModel("system\\data\\1st_read\\Models\\001674B8.sa1mdl", false);
		Action_Wara.object = SA1Animal_Wara;
		Action_Wara.motion = &_169078;
		NJS_OBJECT* SA1Animal_Banb = LoadModel("system\\data\\1st_read\\Models\\0016A648.sa1mdl", false);
		Action_Banb.object = SA1Animal_Banb;
		Action_Banb.motion = &_16BC68;
		NJS_OBJECT* SA1Animal_Usa = LoadModel("system\\data\\1st_read\\Models\\0016D218.sa1mdl", false);
		Action_Usa.object = SA1Animal_Usa;
		Action_Usa.motion = &_16EA18;
		NJS_OBJECT* SA1Animal_Mogu = LoadModel("system\\data\\1st_read\\Models\\0016FD28.sa1mdl", false);
		Action_Mogu.object = SA1Animal_Mogu;
		Action_Mogu.motion = &_170DF8;
		NJS_OBJECT* SA1Animal_Zou = LoadModel("system\\data\\1st_read\\Models\\001724E0.sa1mdl", false);
		Action_Zou.object = SA1Animal_Zou;
		Action_Zou.motion = &_174000;
		NJS_OBJECT* SA1Animal_Lion = LoadModel("system\\data\\1st_read\\Models\\0017579C.sa1mdl", false);
		Action_Lion.object = SA1Animal_Lion;
		Action_Lion.motion = &_17725C;
		NJS_OBJECT* SA1Animal_Gori = LoadModel("system\\data\\1st_read\\Models\\00178190.sa1mdl", false);
		Action_Gori.object = SA1Animal_Gori;
		Action_Gori.motion = &_178FE0;
		NJS_OBJECT* SA1Animal_Suka = LoadModel("system\\data\\1st_read\\Models\\0017A37C.sa1mdl", false);
		Action_Suka.object = SA1Animal_Suka;
		Action_Suka.motion = &_17B5DC;
		NJS_OBJECT* SA1Animal_Rako = LoadModel("system\\data\\1st_read\\Models\\0017CDE0.sa1mdl", false);
		Action_Rako.object = SA1Animal_Rako;
		Action_Rako.motion = &_17E5E0;
		//Replace DX animal models with edited DC models that have matching model hierarchy (for Chao Garden animations)
		*(NJS_OBJECT*)0x944FD4 = *LoadModel("system\\data\\1st_read\\Models\\DX\\00544FD4.sa1mdl", false); //Gori
		*(NJS_OBJECT*)0x934AE0 = *LoadModel("system\\data\\1st_read\\Models\\DX\\00534AE0.sa1mdl", false); //Koar
		*(NJS_OBJECT*)0x92C40C = *LoadModel("system\\data\\1st_read\\Models\\DX\\0052C40C.sa1mdl", false); //Pen
		*(NJS_OBJECT*)0x92A2D0 = *LoadModel("system\\data\\1st_read\\Models\\DX\\0052A2D0.sa1mdl", false); //Goma
		*(NJS_OBJECT*)0x949104 = *LoadModel("system\\data\\1st_read\\Models\\DX\\00549104.sa1mdl", false); //Rako
		*(NJS_OBJECT*)0x9308DC = *LoadModel("system\\data\\1st_read\\Models\\DX\\005308DC.sa1mdl", false); //Kuja
		*(NJS_OBJECT*)0x92EA0C = *LoadModel("system\\data\\1st_read\\Models\\DX\\0052EA0C.sa1mdl", false); //Tuba
		*(NJS_OBJECT*)0x932ADC = *LoadModel("system\\data\\1st_read\\Models\\DX\\00532ADC.sa1mdl", false); //Oum
		*(NJS_OBJECT*)0x939B2C = *LoadModel("system\\data\\1st_read\\Models\\DX\\00539B2C.sa1mdl", false); //Banb
		*(NJS_OBJECT*)0x93BFE4 = *LoadModel("system\\data\\1st_read\\Models\\DX\\0053BFE4.sa1mdl", false); //Usa
		*(NJS_OBJECT*)0x93723C = *LoadModel("system\\data\\1st_read\\Models\\DX\\0053723C.sa1mdl", false); //Wara
		*(NJS_OBJECT*)0x942F90 = *LoadModel("system\\data\\1st_read\\Models\\DX\\00542F90.sa1mdl", false); //Lion
		*(NJS_OBJECT*)0x94043C = *LoadModel("system\\data\\1st_read\\Models\\DX\\0054043C.sa1mdl", false); //Zou
		*(NJS_OBJECT*)0x93E2B8 = *LoadModel("system\\data\\1st_read\\Models\\DX\\0053E2B8.sa1mdl", false); //Mogu
		*(NJS_OBJECT*)0x946D4C = *LoadModel("system\\data\\1st_read\\Models\\DX\\00546D4C.sa1mdl", false); //Suka blyat
		ModelsLoaded_General = true;
	}
}

void General_OnFrame()
{
	//This is stupid but I need to disable Gamma's chest fix on the character select screen or when he dies because it breaks there
	if (GammaConstantMaterialAlpha != 1.0f && (GameMode == GameModes_Menu || (CurrentCharacter == Characters_Gamma && EntityData1Ptrs[0] && EntityData1Ptrs[0]->Action == 51)))
	{
		WriteData<1>((char*)0x47FDF9, 0x10u);
		WriteData((float*)0x47FE0F, 1.0f);
		E102_OBJECTS[0]->child->child->sibling->sibling->sibling->sibling->sibling->sibling->sibling->sibling->sibling->sibling->child->sibling->child->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
	}
	if (GammaConstantMaterialAlpha == 1.0f && !(GameMode == GameModes_Menu || (CurrentCharacter == Characters_Gamma && EntityData1Ptrs[0] && EntityData1Ptrs[0]->Action == 51)))
	{
		WriteData<1>((char*)0x47FDF9, 0x08u);
		WriteData((float*)0x47FE0F, 0.847f);
		E102_OBJECTS[0]->child->child->sibling->sibling->sibling->sibling->sibling->sibling->sibling->sibling->sibling->sibling->child->sibling->child->basicdxmodel->mats[0].attrflags |= NJD_FLAG_USE_ALPHA;
	}
	//Global colors screen fade fix
	if (GlobalColor_wait)
	{
		if (ScreenFade_Alpha < 200)
		{
			SetGlobalPoint2Col_Colors(GlobalColor_one, GlobalColor_two, GlobalColor_threefour);
			GlobalColor_wait = false;
		}
	}
	//Frame counter for cutscenes
	if (EV_MainThread_ptr != nullptr)
	{
		CutsceneFrameCounter++;
		//PrintDebug("Cutscene timer: %d\n", CutsceneFrameCounter);
	}
	else CutsceneFrameCounter = 0;
	//Cutscene skip
	if (CutsceneSkipMode <= 1 && SkipPressed_Cutscene)
	{
		if (CutsceneSkipMode == 0)
		{
			if (CutsceneFadeMode == 0)
			{
				CutsceneFadeValue += 8;
				if (CutsceneFadeValue >= 255)
				{
					CutsceneFadeValue = 255;
					CutsceneFadeMode = 1;
				}
			}
			if (CutsceneFadeMode == 1)
			{
				if (EV_MainThread_ptr != nullptr)
				{
					//PrintDebug("Trying to skip the cutscene...\n");
				}
				else
				{
					CutsceneFadeMode = 2;
					//PrintDebug("Cutscene skipped!\n");
				}
			}
			if (CutsceneFadeMode == 2)
			{
				CutsceneFadeValue -= 8;
				if (CutsceneFadeValue <= 0)
				{
					CutsceneFadeValue = 0;
					CutsceneFadeMode = 0;
					SkipPressed_Cutscene = false;
				}
			}
			DisplayVideoFadeout(CutsceneFadeValue, 1);
		}
		if (CutsceneSkipMode == 1)
		{
			if (EV_MainThread_ptr != nullptr)
			{
				CutsceneFadeMode = 1;
				//PrintDebug("Trying to skip the cutscene...\n");
			}
			else
			{
				CutsceneFadeMode = 0;
				CutsceneFadeValue = 0;
				SkipPressed_Cutscene = false;
				//PrintDebug("Cutscene skipped!\n");
			}
		}
	}
	//Fix broken welds after playing as Metal Sonic
	if (!DLLLoaded_SADXFE)
	{
		if (GameMode == GameModes_CharSel && MetalSonicFlag) MetalSonicFlag = false;
	}
	//Alpha rejection
	if (DLLLoaded_Lantern)
	{
		if (AlphaRejectionMode == 0 && GameMode != GameModes_CharSel && GameMode != GameModes_Menu && CurrentChaoStage != 2)
		{
			WriteData((char*)0x7919CD, 0i8);
			AlphaRejectionMode = 1;
		}
		if (AlphaRejectionMode == 1 && (GameMode == GameModes_CharSel || GameMode == GameModes_Menu || CurrentChaoStage == 2))
		{
			WriteData<1>((char*)0x7919CD, 0x16u);
			AlphaRejectionMode = 0;
		}
	}
	//Environment maps
	//Egg Hornet level
	if (EnvMapMode == 0 && CurrentLevel == 20 && !MetalSonicFlag)
	{
		EnvMapMode = 1;
		EnvMap1 = 2.0f;
		EnvMap2 = 2.0f;
		EnvMap3 = 0.5f;
		EnvMap4 = 0.5f;
	}
	if (EnvMapMode == 1 && (CurrentLevel != 20 || MetalSonicFlag))
	{
		EnvMapMode = 0;
		EnvMap1 = 0.5f;
		EnvMap2 = 0.5f;
		EnvMap3 = 0.5f;
		EnvMap4 = 0.5f;
	}
	//Big's intro
	if (EnvMapMode == 0 && CutsceneID == 208 && CutsceneFrameCounter > 800 && CutsceneFrameCounter < 1200) 
	{
		EnvMapMode = 2;
		EnvMap1 = 2.0f;
		EnvMap2 = 1.0f;
		EnvMap3 = 0.5f;
		EnvMap4 = 1.0f;
	}
	if (EnvMapMode == 2 && CutsceneID == 208 && (CutsceneFrameCounter <= 800 || CutsceneFrameCounter >= 1200))
	{
		EnvMapMode = 0;
		EnvMap1 = 0.5f;
		EnvMap2 = 0.5f;
		EnvMap3 = 0.5f;
		EnvMap4 = 0.5f;
	}
	//Knuckles' intro
	if (EnvMapMode == 0 && CutsceneID == 128 && CutsceneFrameCounter > 1700 && CutsceneFrameCounter < 2230) 
	{
		EnvMapMode = 2;
		EnvMap1 = 2.0f;
		EnvMap2 = 1.0f;
		EnvMap3 = 0.5f;
		EnvMap4 = 1.0f;
	}
	if (EnvMapMode == 2 && CutsceneID == 128 && (CutsceneFrameCounter <= 1700 || CutsceneFrameCounter >= 2230))
	{
		EnvMapMode = 0;
		EnvMap1 = 0.5f;
		EnvMap2 = 0.5f;
		EnvMap3 = 0.5f;
		EnvMap4 = 0.5f;
	}
	//Chaos 1 puddle
	if (CurrentLevel == 33 && CutsceneID != 57) ((NJS_MATERIAL*)0x2D64FD8)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	else ((NJS_MATERIAL*)0x2D64FD8)->attrflags &= ~NJD_FLAG_IGNORE_LIGHT;	
	//Chaos puddle in Final Story cutscenes
	WriteCall((void*)0x7AF877, RenderChaosPuddle_Last); 
	//Chaos 4 lighting in cutscenes
	if (DLLLoaded_Lantern)
	{
		material_register_ptr(Chaos4Materials, LengthOfArray(Chaos4Materials), &Chaos4NPCFunction);
	}
}

void General_OnInput()
{
	//Input hook for cutscenes
	if (CutsceneSkipMode < 2 && !SkipPressed_Cutscene && !DemoPlaying)
		if (EV_MainThread_ptr != 0 && ControllerPointers[0]->PressedButtons & Buttons_Start)
		{
			//PrintDebug("Cutscene skip pressed!\n");
			SkipPressed_Cutscene = true;
		}
}