#include "stdafx.h"
#include "Animals_motions.h"
#include "CommonObjects.h"
//#include "StageLights.h"
//#include "Animals.h"
//#include "Frogs.h"

NJS_TEXANIM EmeraldGlowTexanim = { 32, 32, 0, 0, 0, 0, 0xFF, 0xFF, 3, 0 };
NJS_SPRITE EmeraldGlowSprite = { { -16.0f, -10.5f, 0.0f }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0xC3FE20, &EmeraldGlowTexanim };

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

DataPointer(NJS_OBJECT, stru_8B22F4, 0x8B22F4);
DataPointer(NJS_MATRIX, nj_unit_matrix_, 0x389D650);
FunctionPointer(void, BarrierChild, (ObjectMaster *a1), 0x4BA1E0);
FunctionPointer(void, sub_4083D0, (NJS_ACTION *a1, float a2, int a3), 0x4083D0);
FunctionPointer(EntityData1*, sub_4B9430, (NJS_VECTOR *a1, NJS_VECTOR *a2, float a3), 0x4B9430);
FunctionPointer(void, sub_436550, (), 0x436550);
FunctionPointer(void, sub_40EFE0, (), 0x40EFE0);
FunctionPointer(double, sub_49EAD0, (float a1, float a2, float a3, int a4), 0x49EAD0);
FunctionPointer(float, sub_49E920, (float x, float y, float z, Rotation3 *rotation), 0x49E920);
FunctionPointer(SubtitleThing *, sub_6424A0, (int a1, int a2, float a3, float a4, float a5, float a6, float a7, float a8), 0x6424A0);
FunctionPointer(void, sub_4014B0, (), 0x4014B0);
FunctionPointer(void, sub_409E70, (NJS_MODEL_SADX *a1, int a2, float a3), 0x409E70);
FunctionPointer(void, Cutscene_MoveCharacterAtoB, (ObjectMaster *a1, float a2, float a3, float a4, float a5, float a6, float a7, signed int a8), 0x6EC2B0);
FunctionPointer(void, Cutscene_WaitForInput, (int a1), 0x4314D0);
FunctionPointer(void, sub_4094D0, (NJS_MODEL_SADX *model, QueuedModelFlagsB blend, float radius_scale), 0x4094D0);
FunctionPointer(void, sub_4053A0, (NJS_OBJECT *a1, NJS_MOTION *a2, float frame, int flags, float scale), 0x4053A0);
FunctionPointer(void, sub_407CF0, (NJS_MODEL_SADX *a1, QueuedModelFlagsB a2), 0x407CF0);
FunctionPointer(void, sub_4BFF90, (NJS_OBJECT* a1), 0x4BFF90);

ObjectThingC ItemBoxAirResizeThing = { (NJS_OBJECT*)0, sub_4BFF90 };

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
static float LSDFix = 16.0f;
static int CutsceneFadeValue = 0;
static int CutsceneFadeMode = 0;
static bool SkipPressed_Cutscene = false;
static float EmeraldScale = 1.005f;

static const NJS_MATERIAL* WhiteDiffuse_General[] = {
	//Egg Hornet
	((NJS_MATERIAL*)0x0155D1DC),
	//Egg Viper cockpit
	((NJS_MATERIAL*)0x0166BD68),
	((NJS_MATERIAL*)0x0166BD7C),
	((NJS_MATERIAL*)0x0166BD90),
	((NJS_MATERIAL*)0x0166BDA4),
	((NJS_MATERIAL*)0x0166BDB8),
	((NJS_MATERIAL*)0x0166BDCC),
	((NJS_MATERIAL*)0x0166BDE0),
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

NJS_MATERIAL* AlphaRejectMaterials[] = {
	((NJS_MATERIAL*)0x8B2E6C), //Invincibility lines
	((NJS_MATERIAL*)0x8B2F80), //Invincibility ball
	((NJS_MATERIAL*)0x8B26E4), //Magnetic barrier
	((NJS_MATERIAL*)0x8BF2C0), //Shadow blob
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x7C334), //Emerald shards (cutscene)
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

NJS_MATERIAL* LevelSpecular_General[] = {
	//Zero
	((NJS_MATERIAL*)0x0098A2B0),
	((NJS_MATERIAL*)0x0098A2C4),
	((NJS_MATERIAL*)0x0098A2D8),
	((NJS_MATERIAL*)0x0098A2EC),
	((NJS_MATERIAL*)0x0098A300),
	((NJS_MATERIAL*)0x0098ACD0),
	((NJS_MATERIAL*)0x0098ACE4),
	((NJS_MATERIAL*)0x0098ACF8),
	((NJS_MATERIAL*)0x0098AAE0),
	((NJS_MATERIAL*)0x0098C140),
	((NJS_MATERIAL*)0x0098C154),
	((NJS_MATERIAL*)0x0098C168),
	((NJS_MATERIAL*)0x0098BF50),
	((NJS_MATERIAL*)0x00990FE0),
	((NJS_MATERIAL*)0x00990FF4),
	//Amy's balloon
	((NJS_MATERIAL*)0x008BD7A0),
	//Sweep
	((NJS_MATERIAL*)0x038D05C8),
	((NJS_MATERIAL*)0x038D05DC),
	((NJS_MATERIAL*)0x038D05F0),
	((NJS_MATERIAL*)0x038D0604),
	((NJS_MATERIAL*)0x038D0618),
	((NJS_MATERIAL*)0x038CFB80),
	((NJS_MATERIAL*)0x038CFB94),
	((NJS_MATERIAL*)0x038CFBA8),
	((NJS_MATERIAL*)0x038CFBBC),
	((NJS_MATERIAL*)0x038CFBD0),
	((NJS_MATERIAL*)0x038CFBE4),
	((NJS_MATERIAL*)0x038CFBF8),
	((NJS_MATERIAL*)0x038CFC0C),
	((NJS_MATERIAL*)0x038CF850),
	((NJS_MATERIAL*)0x038CF864),
	((NJS_MATERIAL*)0x038CF878),
	((NJS_MATERIAL*)0x038CF88C),
	((NJS_MATERIAL*)0x038CF5E8),
	((NJS_MATERIAL*)0x038CF5FC),
	((NJS_MATERIAL*)0x038CF610),
	((NJS_MATERIAL*)0x038CF260),
	((NJS_MATERIAL*)0x038CF274),
	((NJS_MATERIAL*)0x038CEF58),
	((NJS_MATERIAL*)0x038CEF6C),
	((NJS_MATERIAL*)0x038CEF80),
	((NJS_MATERIAL*)0x038CEDE8),
	((NJS_MATERIAL*)0x038CEA60),
	((NJS_MATERIAL*)0x038CEA74),
	((NJS_MATERIAL*)0x038CE758),
	((NJS_MATERIAL*)0x038CE76C),
	((NJS_MATERIAL*)0x038CE780),
	((NJS_MATERIAL*)0x038CE5E8),
	((NJS_MATERIAL*)0x038CE260),
	((NJS_MATERIAL*)0x038CE274),
	((NJS_MATERIAL*)0x038CDF58),
	((NJS_MATERIAL*)0x038CDF6C),
	((NJS_MATERIAL*)0x038CDF80),
	((NJS_MATERIAL*)0x038CDDE8),
	((NJS_MATERIAL*)0x038CDA60),
	((NJS_MATERIAL*)0x038CDA74),
	((NJS_MATERIAL*)0x038CD758),
	((NJS_MATERIAL*)0x038CD76C),
	((NJS_MATERIAL*)0x038CD780),
	((NJS_MATERIAL*)0x038CD5E8),
};

NJS_MATERIAL* ObjectSpecular_General[] = {
	//Chaos6 eggmobile
	((NJS_MATERIAL*)0x12545E0),
	((NJS_MATERIAL*)0x12545F4),
	((NJS_MATERIAL*)0x1254608),
	((NJS_MATERIAL*)0x125461C),
	((NJS_MATERIAL*)0x1254630),
	((NJS_MATERIAL*)0x1254644),
	((NJS_MATERIAL*)0x1254658),
	((NJS_MATERIAL*)0x125466C),
	((NJS_MATERIAL*)0x1254680),
	((NJS_MATERIAL*)0x1254694),
	((NJS_MATERIAL*)0x12546A8),
	((NJS_MATERIAL*)0x12546BC),
	((NJS_MATERIAL*)0x12546D0),
	((NJS_MATERIAL*)0x12546E4),
	((NJS_MATERIAL*)0x12546F8),
	((NJS_MATERIAL*)0x125470C),
	((NJS_MATERIAL*)0x1254720),
	((NJS_MATERIAL*)0x1254734),
	((NJS_MATERIAL*)0x1254748),
	((NJS_MATERIAL*)0x125475C),
	((NJS_MATERIAL*)0x1254770),
	((NJS_MATERIAL*)0x1254784),
	((NJS_MATERIAL*)0x1254798),
	((NJS_MATERIAL*)0x12547AC),
	((NJS_MATERIAL*)0x12547C0),
	//Sewers elevator
	((NJS_MATERIAL*)0x2AB7798),
	((NJS_MATERIAL*)0x2AB77AC),
	((NJS_MATERIAL*)0x2AB77C0),
	((NJS_MATERIAL*)0x2AB77D4),
	((NJS_MATERIAL*)0x2AB77E8),
	((NJS_MATERIAL*)0x2AB77FC),
	((NJS_MATERIAL*)0x2AB7810),
	((NJS_MATERIAL*)0x2AB7824),
	((NJS_MATERIAL*)0x2AB7838),
	((NJS_MATERIAL*)0x2AB784C),
	((NJS_MATERIAL*)0x2AB7860),
	((NJS_MATERIAL*)0x2AB7874),
	//EggMissile
	((NJS_MATERIAL*)0x3317838),
	((NJS_MATERIAL*)0x331784C),
	((NJS_MATERIAL*)0x3317860),
	((NJS_MATERIAL*)0x3317874),
	((NJS_MATERIAL*)0x3317888),
	((NJS_MATERIAL*)0x331789C),
	((NJS_MATERIAL*)0x33178B0),
};

void RenderEmeraldWithGlow(NJS_OBJECT *a1, int scale)
{
	ProcessModelNode_D_Wrapper(a1, scale);
	if (EmeraldGlowAlpha >= 255) EmeraldGlowDirection = false;
	if (EmeraldGlowAlpha <= 128) EmeraldGlowDirection = true;
	if (EmeraldGlowDirection) EmeraldGlowAlpha = EmeraldGlowAlpha + 2; else EmeraldGlowAlpha = EmeraldGlowAlpha - 2;
	if (CurrentLevel == 2) EmeraldGlowTexanim.texid = 3;
	if (CurrentLevel == 9) EmeraldGlowTexanim.texid = 4;
	if (CurrentLevel == 8) EmeraldGlowTexanim.texid = 5;
	SetMaterialAndSpriteColor_Float((EmeraldGlowAlpha / 255.0f), 1.0f, 1.0f, 1.0f);
	njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
	njDrawSprite3D(&EmeraldGlowSprite, 0, NJD_SPRITE_ALPHA | NJD_SPRITE_COLOR);
	njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
	ClampGlobalColorThing_Thing();
}

void RotateEmerald()
{
	njRotateY(0, Camera_Data1->Rotation.y);
}

void SonicDashTrailFix(NJS_OBJECT *a1, QueuedModelFlagsB a2)
{
	a1->basicdxmodel->mats->attr_texId = rand() % 2;
	ProcessModelNode(a1, (QueuedModelFlagsB)0, 1.0f);
	a1->basicdxmodel->mats->attr_texId = 0;
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
	NJS_ACTION v8; // [esp+4h] [ebp-18h]
	NJS_ARGB a1; // [esp+Ch] [ebp-10h]
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
		DrawQueueDepthBias = 8000.0f;
		sub_4083D0(&v8, data2->AnimationThing.Frame, 0);
		//Outer 1
		njScale(0, 1.05f, 1.05f, 1.05f);
		SetMaterialAndSpriteColor_Float(1.0f, 0.0245f, (64 - v5) / 1050.0f, 1.0f);
		DrawQueueDepthBias = 9000.0f;
		sub_4083D0(&v8, data2->AnimationThing.Frame, 0);
		//Outer 2
		njScale(0, 1.05f, 1.05f, 1.05f);
		SetMaterialAndSpriteColor_Float(1.0f, 0.024f, (64 - v5) / 2000.0f, 0.15f);
		DrawQueueDepthBias = 10000.0f;
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

void GammaHook()
{
	if (GameMode == 12) SetMaterialAndSpriteColor_Float(1.0f, 1.0f, 1.0f, 1.0f);
	else SetMaterialAndSpriteColor_Float(0.85f, 1.0f, 1.0f, 1.0f);
}

float __cdecl EggKeeperFix(float x, float y, float z, Rotation3 *rotation)
{
	float result;
	result = sub_49E920(x, y, z, rotation);
	if (result == -1000000) result = y;
	return result;
}

double __cdecl AmenboFix(float a1, float a2, float a3, int a4)
{
	double u;
	u = sub_49EAD0(a1, a2, a3, a4);
	if (u == -1000000) u = a2;
	return u;
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

void InputHookForCutscenes()
{
	sub_4014B0();
	if (CutsceneFadeMode == 1) ControllerPointers[0]->PressedButtons |= Buttons_C;
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

void FPSLockHook(int a1)
{
	if (a1 == 1 && CurrentLevel != LevelIDs_TwinkleCircuit) a1 = 2;
	DeltaTime_Multiplier(a1);
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

void FixCutsceneTransition()
{
	if (CutsceneID == 134) sub_436550(); //Knuckles back in Station Square after meeting Pacman
	if (CutsceneID == 380) sub_436550(); //Gamma after Windy Valley
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
	else if (EnableRedMountain && CurrentLevel == LevelIDs_RedMountain && CurrentAct != 1) DrawQueueDepthBias = 1000.0f;
	else if (EnableFinalEgg && CurrentLevel == LevelIDs_FinalEgg) DrawQueueDepthBias = 3000.0f;
	//else if (EnableHotShelter && CurrentLevel == LevelIDs_HotShelter) DrawQueueDepthBias = 8500.0f;
	else  DrawQueueDepthBias = -27952.0f;
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

void General_Init()
{
	if (!ModelsLoaded_General)
	{
		ReplacePVR("AL_BARRIA");
		ReplacePVR("AM_SEA124_8");
		ReplacePVR("BELT2");
		ReplacePVR("CAPTUREBEAM");
		ReplacePVR("SORA60");
		ReplacePVR("SSTX_BODY");
		ReplacePVR("SW_NBG2");
		ReplacePVR("S_WT28");
		ReplacePVR("S_WT32");
		ReplacePVR("TM32KURAGE");
		ReplacePVR("SEA");
		ReplacePVR("SKY_H_BAL01");
		ReplacePVR("STX_ICE0");
		ReplacePVR("MRASC_016S_HIRUUMI");
		ReplacePVR("MRASC_256S_HIRUSORAA");
		ReplacePVR("WATERCOLUMN01");
		ReplacePVR("WINDSEA001");
		ReplacePVR("WINDY2_NBG1");
		ReplacePVR("WINDY2_NBG2");
		ReplacePVR("WINDY2_NBG5");
		ReplacePVR("WINDY3_NBG2");
		ReplacePVM("AIR_SIGNAL");
		ReplacePVM("ANCIENT_LIGHT");
		ReplacePVM("ANKO");
		ReplacePVM("ANKO_T");
		ReplacePVM("A_MASTER");
		ReplacePVM("BANB");
		ReplacePVM("BIG_KAERU");
		ReplacePVM("BO1_MODEL");
		ReplacePVM("BULLET");
		ReplacePVM("CAPTUREBEAM");
		ReplacePVM("CHAOS_EMERALD");
		ReplacePVM("COERA");
		ReplacePVM("E102");
		ReplacePVM("E102BEAM");
		ReplacePVM("E102EFFECT");
		ReplacePVM("E102HIT");
		ReplacePVM("E103OLD");
		ReplacePVM("E104OLD");
		ReplacePVM("E105");
		ReplacePVM("E105OLD");
		ReplacePVM("EDV_K_HLIFT");
		ReplacePVM("EDV_S_STDOOR");
		ReplacePVM("EFF_C7_BUBBLE");
		ReplacePVM("EFF_CANDLE");
		ReplacePVM("EFF_REGULAR");
		ReplacePVM("EFF_TWINKLE");
		ReplacePVM("EFF_WT_COLUMN");
		ReplacePVM("EGGROB");
		ReplacePVM("EGG_MISSILE");
		ReplacePVM("EME_KIRAN");
		ReplacePVM("EROBO");
		ReplacePVM("ER_9000_EGGMANROBO");
		ReplacePVM("EV_EGGMAN_BODY");
		ReplacePVM("EV_EGGMOBILE1");
		ReplacePVM("EV_EGGMOBLE0DM");
		ReplacePVM("EV_EGGMOBLE1");
		ReplacePVM("EV_EGGMOBLE2");
		ReplacePVM("EV_HELI");
		ReplacePVM("EV_K_PATYA");
		ReplacePVM("EV_SPOTLIGHT");
		ReplacePVM("EV_S_MSBODY");
		ReplacePVM("EV_S_T2C_BODY");
		ReplacePVM("EV_TR1");
		ReplacePVM("EV_TR2_BIG");
		ReplacePVM("E_AMENBO");
		ReplacePVM("E_BOMB");
		ReplacePVM("E_BUYON");
		ReplacePVM("E_CART");
		ReplacePVM("E_LEON");
		ReplacePVM("E_ROBO");
		ReplacePVM("E_SAI");
		ReplacePVM("E_SARU");
		ReplacePVM("E_SNAKE");
		ReplacePVM("E_SNOWMAN");
		ReplacePVM("F0000_FROG");
		ReplacePVM("FAT_B");
		ReplacePVM("FPACK");
		ReplacePVM("FROG");
		ReplacePVM("FROG1");
		ReplacePVM("FROG2");
		ReplacePVM("FROG3");
		ReplacePVM("F_EGG_ZANGAI");
		ReplacePVM("GACHAPON");
		ReplacePVM("GOMA");
		ReplacePVM("GORI");
		ReplacePVM("GR1_MODEL");
		ReplacePVM("GR_10000_GIRL1");
		ReplacePVM("HAMMER");
		ReplacePVM("HINT");
		ReplacePVM("HOT_E105");
		ReplacePVM("ICM0060");
		ReplacePVM("ICM006D");
		ReplacePVM("ICM00C3");
		ReplacePVM("ICM00C5");
		ReplacePVM("ICM00C7");
		ReplacePVM("ICM0142");
		ReplacePVM("ISHIDAI");
		ReplacePVM("KAJIKI");
		ReplacePVM("KAOS_EME");
		ReplacePVM("KNU_EFF");
		ReplacePVM("KOAR");
		ReplacePVM("KUJA");
		ReplacePVM("LAST1A_HIGHWAY_A");
		ReplacePVM("LIGHTNING");
		ReplacePVM("LION");
		ReplacePVM("LOCKET");
		ReplacePVM("L_SIBUKI");
		ReplacePVM("MECHA");
		ReplacePVM("MGHAND");
		ReplacePVM("MIZUBASIRA");
		ReplacePVM("MOGU");
		ReplacePVM("MOGURATATAKI");
		ReplacePVM("MP_10000_POLICE");
		ReplacePVM("MRACE_EGGMOBLE");
		ReplacePVM("M_EM_BLACK");
		ReplacePVM("M_EM_BLUE");
		ReplacePVM("M_EM_GREEN");
		ReplacePVM("M_EM_PURPLE");
		ReplacePVM("M_EM_RED");
		ReplacePVM("M_EM_SKY");
		ReplacePVM("M_EM_WHITE");
		ReplacePVM("M_EM_YELLOW");
		ReplacePVM("M_TR_S");
		ReplacePVM("NEW_BB");
		ReplacePVM("NISEPAT");
		ReplacePVM("OL_10000");
		ReplacePVM("OUM");
		ReplacePVM("OY_10000");
		ReplacePVM("PEN");
		ReplacePVM("PIRANIA");
		ReplacePVM("RAKO");
		ReplacePVM("ROBOTV");
		ReplacePVM("RYUGU");
		ReplacePVM("SAKE");
		ReplacePVM("SAME");
		ReplacePVM("SEA_BASS");
		ReplacePVM("SHAPE_FROG");
		ReplacePVM("SHAPE_FROG_2");
		ReplacePVM("SUKA");
		ReplacePVM("SUPI_SUPI");
		ReplacePVM("TAI");
		ReplacePVM("TOGEBALL_TOGEBALL");
		ReplacePVM("TR2CRASH");
		ReplacePVM("TUBA");
		ReplacePVM("UNAGI");
		ReplacePVM("UNI_A_UNIBODY");
		ReplacePVM("UNI_C_UNIBODY");
		ReplacePVM("USA");
		ReplacePVM("UTSUBO");
		ReplacePVM("VER1_WING");
		ReplacePVM("VER2_WING");
		ReplacePVM("VER3_WING");
		ReplacePVM("VER4_WING");
		ReplacePVM("WARA");
		ReplacePVM("WAVE7_WA");
		ReplacePVM("WINDY_E103");
		ReplacePVM("WING_P");
		ReplacePVM("WING_T");
		ReplacePVM("ZOU");
		//Big's fishing thing fix
		WriteCall((void*)0x46C547, BigFishingThingFix);
		//Metal Sonic afterimage fix
		WriteJump(MetalSonic_AfterImage_Display, MetalSonic_AfterImage_Display_Fixed);
		//Character shadow fix (lame)
		WriteCall((void*)0x49F182, CharacterShadowHook);
		//NPC shadow fix
		WriteCall((void*)0x5252E8, DrawNPCShadowFix);
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
		RemoveVertexColors_Object((NJS_OBJECT*)0x3175528); //Tails' model in the cutscene where Sonic sees him crash
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
		((NJS_OBJECT*)0x96F3F0)->basicdxmodel->mats[1].diffuse.color = 0x00000000;
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
		//Replace hint monitor model
		HintMonitorModel = LoadModel("system\\data\\1st_read\\Models\\001AD358.sa1mdl", false);
		HintMonitorModel->basicdxmodel->meshsets[10].nbMesh = 0; //Hide screen (rendered separately in DX)
		WriteCall((void*)0x7A9509, RenderHintMonitor_Main);
		WriteCall((void*)0x7A957F, SetHintMonitorTransparency);
		//Fix frogs lol
		*(NJS_OBJECT*)0x30CB4F8 = *LoadModel("system\\data\\Other\\02CCB4F8.sa1mdl", false);
		*(NJS_OBJECT*)0x30CDB28 = *LoadModel("system\\data\\Other\\02CCDB28.sa1mdl", false);
		*(NJS_OBJECT*)0x30D0160 = *LoadModel("system\\data\\Other\\02CD0160.sa1mdl", false);
		//Fix for badniks not spawning
		WriteCall((void*)0x7AA9F9, AmenboFix);
		WriteCall((void*)0x49EFE7, EggKeeperFix);
		//Leon fixes
		WriteData((float**)0x4CD75A, &_nj_screen_.w); //from SADXFE
		WriteData((float**)0x4CD77C, &_nj_screen_.h); //from SADXFE
		//Robot chest stuff
		WriteData<1>((char*)0x4CFC05, 0x08); //Zero constant material thing
		WriteData<1>((char*)0x4CFC99, 0x08); //Zero constant material thing
		((NJS_OBJECT*)0x312F714)->basicdxmodel->mats[3].attrflags &= ~NJD_FLAG_USE_ALPHA; //E101 unnecessary alpha (cutscene model)
		((NJS_OBJECT*)0x30AB08C)->basicdxmodel->mats[3].attrflags &= ~NJD_FLAG_USE_ALPHA; //E103 unnecessary alpha (cutscene model)
		((NJS_OBJECT*)0x30A290C)->basicdxmodel->mats[3].attrflags &= ~NJD_FLAG_USE_ALPHA; //E104 unnecessary alpha (cutscene model)
		((NJS_OBJECT*)0x309A21C)->basicdxmodel->mats[3].attrflags &= ~NJD_FLAG_USE_ALPHA; //E105 unnecessary alpha (cutscene model)
		WriteData((float*)0x6F4718, 0.85f); //Some cutscene model idk
		WriteData((float*)0x4E7BFD, 0.85f); //E103 (reused Gamma model)
		WriteData((float*)0x4E7C40, 0.85f); //E103 (reused Gamma model)
		WriteData((float*)0x605813, 0.85f); //E104 (reused Gamma model)
		WriteData((float*)0x6F3F94, 0.85f); //E103 (cutscene model)
		WriteData((float*)0x6F3D54, 0.85f); //E104 (cutscene model)
		WriteData((float*)0x6F3B24, 0.85f); //E105 (cutscene model)
		//Gamma's projectile fix. I have no idea why this works, but ok I guess
		E102_OBJECTS[5]->basicdxmodel->mats[0].attr_texId = 10;
		E102_OBJECTS[5]->basicdxmodel->mats[0].attrflags |= NJD_FLAG_USE_TEXTURE;
		RemoveVertexColors_Object(E102_OBJECTS[5]);
		E102_OBJECTS[6] = E102_OBJECTS[5];
		//Chaos 1 materials
		RemoveVertexColors_Object((NJS_OBJECT*)0x38DD9BC); //Chaos puddle 1
		RemoveVertexColors_Object((NJS_OBJECT*)0x2D6962C); //Chaos puddle 2
		RemoveVertexColors_Object((NJS_OBJECT*)0x3185D2C); //Chaos 1
		if (DLLLoaded_HDGUI == false)
		{
			ReplacePVM("OBJ_REGULAR");
			ResizeTextureList(&OBJ_REGULAR_TEXLIST, 100); //Added DC ripple texture
		}
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
		//FPS lock
		if (FPSLock) WriteCall((void*)0x411E79, FPSLockHook);
		//Cancel cutscenes with C button
		if (CutsceneSkipMode != 3)
		{
			WriteData<1>((char*)0x431520, 0x01);
			if (CutsceneSkipMode != 2) WriteCall((void*)0x4314F9, InputHookForCutscenes);
		}
		//Light Speed Dash distance fix
		if (EnableLSDFix)
		{
			WriteData<1>((char*)0x49306C, 0x80); //Initial speed 16 instead of 8
			WriteData<1>((char*)0x492FED, 0x80); //Initial speed 16 instead of 8
			WriteData<1>((char*)0x492CC1, 0x80); //Set speed to 16 if below minimum
			//Disabling this since it doesn't seem necessary and it breaks Egg Carrier captain's room
			//WriteData((float**)0x492CB0, &LSDFix); //16 is the minimum speed
		}
		//Disable font smoothing
		if (DisableFontSmoothing)
		{
			//Probably better than making the whole texture ARGB1555
			WriteData<1>((char*)0x40DA0B, 0x00);
			WriteData<1>((char*)0x40DA0C, 0x00);
			WriteData<1>((char*)0x40DA12, 0x00);
		}
		//Enable Impress font
		if (EnableImpressFont == "Impress")
		{
			ReplaceBIN("FONTDATA1", "FONTDATA1_I");
		}
		//Enable Comic Sans font (experimental)
		else if (EnableImpressFont == "ComicSans")
		{
			ReplaceBIN("FONTDATA1", "FONTDATA1_C");
		}
		if (ColorizeFont)
		{
			//Subtitles (ARGB from 0 to F: CEEF)
			WriteData<1>((char*)0x40E28D, 0xEF);
			WriteData<1>((char*)0x40E28E, 0xCE);
			//Pause menu text (ARGB from 00 to FF: BFEFEFFF)
			WriteData<1>((char*)0x40E541, 0xFF);
			WriteData<1>((char*)0x40E542, 0xEF);
			WriteData<1>((char*)0x40E543, 0xEF);
			WriteData<1>((char*)0x40E544, 0xBF);
			//Recap screen (just FF F8 F8 F8)
			WriteCall((void*)0x6428AD, ColorizeRecapText);
		}
		//Fix for cutscene transitions
		if (EnableCutsceneFix)
		{
			WriteCall((void*)0x4311E3, FixCutsceneTransition); //Main thread
			WriteData<5>((void*)0x43131D, 0x90u); //Skipping cutscenes
		}
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
		//Gamma's chest patch lol
		((NJS_MATERIAL*)((size_t)GetModuleHandle(L"CHRMODELS_orig") + 0x00200DE8))->attrflags &= ~NJD_FLAG_USE_ALPHA; //Unnecessary alpha in Gamma's model
		WriteCall((void*)0x47FE13, GammaHook); //Gamma's chest transparency
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
		WriteData((float*)0x4A1216, 2500.0f); //Long dash trail depth bias
		WriteData((float*)0x4A0F49, 2500.0f); //Main dash trail depth bias
		WriteData<1>((char*)0x4A1220, 0i8); //Spindash trail queued flags
		//Barrier fixes
		WriteData<5>((char*)0x4B9E3A, 0x90u); //Disable ClampGlobalColorThing (it's called later in my replacement function)
		WriteCall((void*)0x4B9F0F, MagneticBarrierLightning);
		WriteCall((void*)0x4B9DDA, SetMagneticBarrierColor);
		WriteJump((void*)0x4B9C90, RenderBarrierModels);
		WriteJump(Barrier_Main, Barrier_MainX); //Barrier
		WriteCall((void*)0x4BA0E4, RenderInvincibilityLines);
		WriteData<10>((char*)0x40889C, 0x90u); //Queued model lighting/specular fix
		//Environment maps
		EnvMap1 = 0.5f;
		EnvMap2 = 0.5f;
		EnvMap3 = 0.5f;
		EnvMap4 = 0.5f;
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
		WriteCall((void*)0x4DF27F, RenderEmeraldWithGlow);
		WriteCall((void*)0x4DF250, RotateEmerald);
		//Ice Cap
		WriteCall((void*)0x4ECEC4, RenderEmeraldWithGlow);
		WriteCall((void*)0x4ECE90, RotateEmerald);
		//Casino
		WriteCall((void*)0x5DCFB0, RenderEmeraldWithGlow);
		WriteCall((void*)0x5DCF7D, RotateEmerald);
		//Material fixes
		for (int i = 0; i < LengthOfArray(RemoveColors_General); i++)
		{
			RemoveMaterialColors(RemoveColors_General[i]);
		}
		if (DLLLoaded_Lantern == true)
		{
			if (set_alpha_reject_ptr != nullptr) material_register_ptr(AlphaRejectMaterials, LengthOfArray(AlphaRejectMaterials), &DisableAlphaRejection);
			material_register_ptr(WhiteDiffuse_General, LengthOfArray(LevelSpecular_General), &ForceWhiteDiffuse);
			material_register_ptr(LevelSpecular_General, LengthOfArray(LevelSpecular_General), &ForceDiffuse0Specular0);
			material_register_ptr(ObjectSpecular_General, LengthOfArray(ObjectSpecular_General), &ForceDiffuse0Specular1);
		}
		RemoveVertexColors_Object((NJS_OBJECT*)0x31AB49C); //Birdie in "Zero holding Amy" cutscenes
		RemoveVertexColors_Object((NJS_OBJECT*)0x31A72D8); //Zero holding Amy
		RemoveVertexColors_Object((NJS_OBJECT*)0x319F714); //Amy held by Zero (talking head)
		RemoveVertexColors_Object((NJS_OBJECT*)0x319C3EC); //Amy held by Zero
		RemoveVertexColors_Object((NJS_OBJECT*)0x33144B0); //Egg Walker cutscene
		RemoveVertexColors_Object((NJS_OBJECT*)0x10D7774); //Question mark from Character Select
		((NJS_OBJECT*)0x10D7774)->basicdxmodel->mats[0].attr_texId = 10; //Fix wrong texture on question mark
		WriteCall((void*)0x4D7718, AnimalBubbleHook); //Animal bubble blending mode + depth
		*(NJS_OBJECT*)0x2F67B78 = *LoadModel("system\\data\\Other\\00006C38.sa1mdl", false); //Tornado 2 crashed
		//Animals
		ResizeTextureList((NJS_TEXLIST*)0x92ACE4, 5); //GOMA texlist
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
		//Fix insanity of jumping animals
		((NJS_ACTION*)0x94A00C)->motion = &_16EA18; //Usa animation in levels
		((NJS_ACTION*)0x949FFC)->motion = &_169078; //Wara animation in levels
		((NJS_ACTION*)0x949FF4)->motion = &_165C70; //Koar animation in levels
		ModelsLoaded_General = true;
	}
}

void General_OnFrame()
{
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
		if (AlphaRejectionMode == 0 && CurrentLevel != 25 && GameMode != GameModes_CharSel && GameMode != GameModes_Menu && CurrentChaoStage != 2)
		{
			WriteData((char*)0x7919CD, 0i8);
			AlphaRejectionMode = 1;
		}
		if (AlphaRejectionMode == 1 && (CurrentLevel == 25 || GameMode == GameModes_CharSel || GameMode == GameModes_Menu || CurrentChaoStage == 2))
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