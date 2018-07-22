#include "stdafx.h"
#include "Animals.h"
#include "EmeraldGlow.h"
#include "TornadoCrash.h"
#include "EggmobileNPC.h"
#include "CharacterEffects.h"
#include "Ripple.h"
#include "Frogs.h"
#include "CommonObjects.h"

HMODULE CHRMODELS3 = GetModuleHandle(L"CHRMODELS_orig");
HMODULE ADV01MODELS2 = GetModuleHandle(L"ADV01MODELS");
HMODULE ADV01CMODELS2 = GetModuleHandle(L"ADV01CMODELS");
HMODULE ADV02MODELS2 = GetModuleHandle(L"ADV02MODELS");
HMODULE ADV03MODELS = GetModuleHandle(L"ADV03MODELS");

NJS_TEXANIM EmeraldGlowTexanim = { 32, 32, 0, 0, 0, 0, 0xFF, 0xFF, 3, 0 };
NJS_SPRITE EmeraldGlowSprite = { { -16.0f, -10.5f, 0.0f }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x00C3FE20, &EmeraldGlowTexanim };

NJS_TEXANIM Heat1Texanim = { 56, 64, 28, 32, 0, 0, 0xFF, 0xFF, 2, 0 };
NJS_TEXANIM Heat2Texanim = { 56, 64, 28, 32, 0, 0, 0xFF, 0xFF, 2, 0 };

NJS_SPRITE Heat1Sprite = { { 0, 0, 0 }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x0091BD28, &Heat1Texanim };
NJS_SPRITE Heat2Sprite = { { 0, 0, 0 }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x0091BD28, &Heat2Texanim };

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

static bool EnableCutsceneFix = true;
int CutsceneSkipMode = 0;
int CutsceneFrameCounter = 0;
static std::string EnableImpressFont = "Off";
static bool ColorizeFont = true;
static bool DisableFontSmoothing = true;
static bool EnableLSDFix = false;
static bool FPSLock = false;
static int EnvMapMode = 0;
static int AlphaRejectionMode = 0;
static int EmeraldGlowAlpha = 255;
static bool EmeraldGlowDirection = false;
static bool EnableDCRipple = true;
static float heat_float1 = 1.0f; //1
static float heat_float2 = 0.2f; //0.5
static float alphathing = 1.0f;
static float LSDFix = 16.0f;
static int CutsceneFadeValue = 0;
static int CutsceneFadeMode = 0;
static bool SkipPressed_Cutscene = false;

NJS_MATERIAL* AlphaRejectMaterials[] = {
	((NJS_MATERIAL*)0x8B26E4), //Magnetic barrier
	((NJS_MATERIAL*)0x8BF2C0), //Shadow blob
	(NJS_MATERIAL*)((size_t)ADV02MODELS2 + 0x0007C334), //Emerald shards (cutscene)
};

NJS_MATERIAL* RemoveColors_General[] = {
	//The beam that collects the emeralds in "Tails and Sonic gassed at Casinopolis" cutscene
	((NJS_MATERIAL*)0x030B010C),
	//Shopping bag in Amy's first cutscene
	((NJS_MATERIAL*)0x0328C498),
	((NJS_MATERIAL*)0x0328C4AC),
	((NJS_MATERIAL*)0x0328C1B8),
	((NJS_MATERIAL*)0x0328C1CC),
	((NJS_MATERIAL*)0x0328BED8),
	((NJS_MATERIAL*)0x0328BEEC),
	((NJS_MATERIAL*)0x0328BA88),
	((NJS_MATERIAL*)0x0328B638),
	((NJS_MATERIAL*)0x0328B1E8),
	((NJS_MATERIAL*)0x0328AD88),
	((NJS_MATERIAL*)0x0328ABF4),
	((NJS_MATERIAL*)0x0328AA14),
	((NJS_MATERIAL*)0x0328A834),
	((NJS_MATERIAL*)0x0328A654),
	((NJS_MATERIAL*)0x0328A470),
	((NJS_MATERIAL*)0x0328A2DC),
	((NJS_MATERIAL*)0x0328A0FC),
	((NJS_MATERIAL*)0x03289F1C),
	((NJS_MATERIAL*)0x03289D3C),
	((NJS_MATERIAL*)0x03289B58),
	//Amy's escape balloon
	((NJS_MATERIAL*)0x008BD7A0),
	((NJS_MATERIAL*)0x008BD454),
	((NJS_MATERIAL*)0x008BD468),
	((NJS_MATERIAL*)0x008BCFC8),
	//Birdie's locket in Amy's cutscene
	((NJS_MATERIAL*)0x02BE2630),
	((NJS_MATERIAL*)0x02BE2644),
	//Birdie
	((NJS_MATERIAL*)0x00984470),
	((NJS_MATERIAL*)0x00984484),
	((NJS_MATERIAL*)0x00984498),
	((NJS_MATERIAL*)0x009844AC),
	((NJS_MATERIAL*)0x009844C0),
	((NJS_MATERIAL*)0x009841C0),
	((NJS_MATERIAL*)0x00983F14),
	((NJS_MATERIAL*)0x00982978),
	((NJS_MATERIAL*)0x0098298C),
	((NJS_MATERIAL*)0x009829A0),
	((NJS_MATERIAL*)0x009829B4),
	((NJS_MATERIAL*)0x009829C8),
	((NJS_MATERIAL*)0x009827D8),
	((NJS_MATERIAL*)0x009826CC),
	((NJS_MATERIAL*)0x00982550),
	((NJS_MATERIAL*)0x00982444),
	((NJS_MATERIAL*)0x009822C8),
	//Birdie in Amy's cutscene after escape
	((NJS_MATERIAL*)0x02F021EC),
	((NJS_MATERIAL*)0x02F02200),
	((NJS_MATERIAL*)0x02F01EA4),
	((NJS_MATERIAL*)0x02F01B5C),
	((NJS_MATERIAL*)0x02F01848),
	((NJS_MATERIAL*)0x02F01610),
	((NJS_MATERIAL*)0x02F014D4),
	((NJS_MATERIAL*)0x02F01398),
	((NJS_MATERIAL*)0x02F01178),
	((NJS_MATERIAL*)0x02F00E84),
	((NJS_MATERIAL*)0x02F00D10),
	((NJS_MATERIAL*)0x02F00BC8),
	((NJS_MATERIAL*)0x02EFF798),
	((NJS_MATERIAL*)0x02EFF7AC),
	((NJS_MATERIAL*)0x02EFF7C0),
	((NJS_MATERIAL*)0x02EFF7D4),
	((NJS_MATERIAL*)0x02EFF598),
	((NJS_MATERIAL*)0x02EFF398),
	((NJS_MATERIAL*)0x02EFF210),
	((NJS_MATERIAL*)0x02EFF088),
	((NJS_MATERIAL*)0x02EFEE50),
	((NJS_MATERIAL*)0x02EFEA98),
	((NJS_MATERIAL*)0x02EFE98C),
	((NJS_MATERIAL*)0x02EFE6D8),
	((NJS_MATERIAL*)0x02EFE5CC),
	//Birdie (ver 2 wing)
	((NJS_MATERIAL*)0x02F07C4C),
	((NJS_MATERIAL*)0x02F07C60),
	((NJS_MATERIAL*)0x02F07904),
	((NJS_MATERIAL*)0x02F075BC),
	((NJS_MATERIAL*)0x02F072A8),
	((NJS_MATERIAL*)0x02F07070),
	((NJS_MATERIAL*)0x02F06F34),
	((NJS_MATERIAL*)0x02F06DF8),
	((NJS_MATERIAL*)0x02F06BD8),
	((NJS_MATERIAL*)0x02F068E4),
	((NJS_MATERIAL*)0x02F06770),
	((NJS_MATERIAL*)0x02F06628),
	((NJS_MATERIAL*)0x02F051F8),
	((NJS_MATERIAL*)0x02F0520C),
	((NJS_MATERIAL*)0x02F05220),
	((NJS_MATERIAL*)0x02F05234),
	((NJS_MATERIAL*)0x02F04FF8),
	((NJS_MATERIAL*)0x02F04DF8),
	((NJS_MATERIAL*)0x02F04C70),
	((NJS_MATERIAL*)0x02F04AE8),
	((NJS_MATERIAL*)0x02F048B0),
	((NJS_MATERIAL*)0x02F044F8),
	((NJS_MATERIAL*)0x02F043EC),
	((NJS_MATERIAL*)0x02F04138),
	((NJS_MATERIAL*)0x02F0402C),
};

NJS_MATERIAL* FirstCharacterSpecular_General[] = {
	//Button
	((NJS_MATERIAL*)0x008BB6E4),
	((NJS_MATERIAL*)0x008BB6F8),
	((NJS_MATERIAL*)0x00989334),
	((NJS_MATERIAL*)0x00989348),
};

NJS_MATERIAL* LevelSpecular_General[] = {
	//Forgot
	((NJS_MATERIAL*)0x00989320),
	((NJS_MATERIAL*)0x008BB6D0),
	((NJS_MATERIAL*)0x008BB70C),
	((NJS_MATERIAL*)0x008BB720),
	((NJS_MATERIAL*)0x0098935C),
	((NJS_MATERIAL*)0x00989370),
};

NJS_MATERIAL* ObjectSpecular_General[] = {
	//Chaos6 eggmobile
	((NJS_MATERIAL*)0x012545E0),
	((NJS_MATERIAL*)0x012545F4),
	((NJS_MATERIAL*)0x01254608),
	((NJS_MATERIAL*)0x0125461C),
	((NJS_MATERIAL*)0x01254630),
	((NJS_MATERIAL*)0x01254644),
	((NJS_MATERIAL*)0x01254658),
	((NJS_MATERIAL*)0x0125466C),
	((NJS_MATERIAL*)0x01254680),
	((NJS_MATERIAL*)0x01254694),
	((NJS_MATERIAL*)0x012546A8),
	((NJS_MATERIAL*)0x012546BC),
	((NJS_MATERIAL*)0x012546D0),
	((NJS_MATERIAL*)0x012546E4),
	((NJS_MATERIAL*)0x012546F8),
	((NJS_MATERIAL*)0x0125470C),
	((NJS_MATERIAL*)0x01254720),
	((NJS_MATERIAL*)0x01254734),
	((NJS_MATERIAL*)0x01254748),
	((NJS_MATERIAL*)0x0125475C),
	((NJS_MATERIAL*)0x01254770),
	((NJS_MATERIAL*)0x01254784),
	((NJS_MATERIAL*)0x01254798),
	((NJS_MATERIAL*)0x012547AC),
	((NJS_MATERIAL*)0x012547C0),
	//Sewers elevator
	((NJS_MATERIAL*)0x02AB7798),
	((NJS_MATERIAL*)0x02AB77AC),
	((NJS_MATERIAL*)0x02AB77C0),
	((NJS_MATERIAL*)0x02AB77D4),
	((NJS_MATERIAL*)0x02AB77E8),
	((NJS_MATERIAL*)0x02AB77FC),
	((NJS_MATERIAL*)0x02AB7810),
	((NJS_MATERIAL*)0x02AB7824),
	((NJS_MATERIAL*)0x02AB7838),
	((NJS_MATERIAL*)0x02AB784C),
	((NJS_MATERIAL*)0x02AB7860),
	((NJS_MATERIAL*)0x02AB7874),
	//EggMissile
	((NJS_MATERIAL*)0x03317838),
	((NJS_MATERIAL*)0x0331784C),
	((NJS_MATERIAL*)0x03317860),
	((NJS_MATERIAL*)0x03317874),
	((NJS_MATERIAL*)0x03317888),
	((NJS_MATERIAL*)0x0331789C),
	((NJS_MATERIAL*)0x033178B0),
	//OSkyDeck
	(NJS_MATERIAL*)((size_t)ADV01MODELS2 + 0x001F2600),
	(NJS_MATERIAL*)((size_t)ADV01MODELS2 + 0x001F2614),
	(NJS_MATERIAL*)((size_t)ADV01MODELS2 + 0x001F2628),
	(NJS_MATERIAL*)((size_t)ADV01MODELS2 + 0x001F263C),
	(NJS_MATERIAL*)((size_t)ADV01MODELS2 + 0x001F2650),
	(NJS_MATERIAL*)((size_t)ADV01MODELS2 + 0x001F2664),
	(NJS_MATERIAL*)((size_t)ADV01MODELS2 + 0x001F2678),
	(NJS_MATERIAL*)((size_t)ADV01MODELS2 + 0x001F268C),
	(NJS_MATERIAL*)((size_t)ADV01MODELS2 + 0x001F26A0),
	(NJS_MATERIAL*)((size_t)ADV01MODELS2 + 0x001F26B4),
	(NJS_MATERIAL*)((size_t)ADV01MODELS2 + 0x001F26C8),
	(NJS_MATERIAL*)((size_t)ADV01MODELS2 + 0x001F26DC),
};

bool E101Function(NJS_MATERIAL* material, Uint32 flags)
{
	if (CurrentLevel == 33 || CurrentLevel == 32)
	{
		set_diffuse(2, false);
		set_specular(3, false);
	}
	else
	{
		set_diffuse(0, false);
		set_specular(1, false);
	}
	return true;
}

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
}

void RotateEmerald()
{
	njRotateY(0, Camera_Data1->Rotation.y);
}

void SonicDashTrailFix(NJS_OBJECT *a1, QueuedModelFlagsB a2)
{
	a1->basicdxmodel->mats->attr_texId = rand() % 2;
	ProcessModelNode_A_WrapperB(a1, a2);
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
		object_003291C4.basicdxmodel->mats[0].attr_texId = 1;
		matlist_003288AC[0].diffuse.argb.a = 255 * (1.0f - alpha*1.1f)*0.7f;
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
		ProcessModelNode_A_WrapperB(&object_003291C4, QueuedModelFlagsB_SomeTextureThing);
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
	DataArray(EntityData1*, EntityData1Ptrs, 0x03B42E10, 8);
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

void __cdecl Sonic_DisplayLightDashModelX(EntityData1 *data1, CharObj2 **data2_pp, CharObj2 *data2)
{
	int v3; // eax
	__int16 v4; // t1
	double v5; // st7
	float v6; // ST28_4
	double v7; // st7
	NJS_ACTION v8; // [esp+4h] [ebp-18h]
	NJS_ARGB a1; // [esp+Ch] [ebp-10h]
	NJS_OBJECT **___SONIC_OBJECTS = (NJS_OBJECT **)GetProcAddress(CHRMODELS3, "___SONIC_OBJECTS");
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
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
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
	if (EnableSETFixes != SETFixes_Off)
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
				if (EnableSETFixes != SETFixes_Off)
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
				DrawQueueDepthBias = 0xC68C4000;

				// This was originally DrawModelIGuess_N, but that's wrong.
				DrawModel(&ItemBox_Base_MODEL);

				DrawModel_Queue(&ItemBox_Capsule_MODEL, QueuedModelFlagsB_EnableZWrite);

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
			if (EnableSETFixes != SETFixes_Off)
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

				DrawModel_Queue(&ItemBox_Capsule_MODEL, QueuedModelFlagsB_EnableZWrite);

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

void DrawUnderwaterOverlay(NJS_MATRIX_PTR m)
{
	NJS_COLOR WaterOverlay_Colors;
	if (CurrentLevel != 9)
	{
		njPushMatrix(m);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
		WaterOverlay_Colors.color = 0x1E0008FF;
		DrawRect_Queue(0.0, 0.0, HorizontalResolution, VerticalResolution, 22041.496f, WaterOverlay_Colors.argb.b | ((WaterOverlay_Colors.argb.g | (*(unsigned __int16 *)&WaterOverlay_Colors.argb.r << 8)) << 8), QueuedModelFlagsB_EnableZWrite);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
	}
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

void EmeraldShardLighting(NJD_FLAG lol1, NJD_FLAG lol2)
{
	AddConstantAttr(0, NJD_FLAG_IGNORE_LIGHT);
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
	DrawVisibleModel_Queue(a1, QueuedModelFlagsB_EnableZWrite);
	DrawQueueDepthBias = 0.0f;
}

NJS_OBJECT* BalloonModels[] = {
	&object_004BE194A_1,
	&object_004BE194A_2,
	&object_004BE194A_3,
	&object_004BE194A_4,
	&object_004BE194A_5,
	&object_004BE194A_6,

	&object_004BE194B_1,
	&object_004BE194B_2,
	&object_004BE194B_3,
	&object_004BE194B_4,
	&object_004BE194B_5,
	&object_004BE194B_6,
	&object_004BE194B_7,
	&object_004BE194B_8,
	&object_004BE194B_9,
	&object_004BE194B_10,
	&object_004BE194B_11,
	&object_004BE194B_12,
	&object_004BE194B_13,
	&object_004BE194B_14,
	&object_004BE194B_15,
	&object_004BE194B_16,

	&object_004BE194C_1,
	&object_004BE194C_2,
	&object_004BE194C_3,
	&object_004BE194C_4,
	&object_004BE194C_5,
	&object_004BE194C_6,
	&object_004BE194C_7,
	&object_004BE194C_8,
	&object_004BE194C_9,
	&object_004BE194C_10,
	&object_004BE194C_11,
	&object_004BE194C_12,
	&object_004BE194C_13,
	&object_004BE194C_14,
	&object_004BE194C_15,
	&object_004BE194C_16,
};

void RenderBalloon(NJS_MODEL_SADX *model, float scale)
{
	for (unsigned int i = 0; i < LengthOfArray(BalloonModels); i++)
	{
		njPushMatrix(0);
		njTranslate(0, 0, 0, 0);
		njScale(0, 1.0f, 1.0f, 1.0f);
		ProcessModelNode_Sort(BalloonModels[i], QueuedModelFlagsB_EnableZWrite, 1.0f);
		njPopMatrix(1u);
	}
}

void RenderBalloonTip(NJS_MODEL_SADX *model, float scale)
{
	njPushMatrix(0);
	njTranslate(0, 0, 0, 0);
	njScale(0, 1.0f, 1.0f, 1.0f);
	ProcessModelNode_Sort(&object_004BD908_1, QueuedModelFlagsB_EnableZWrite, 1.0f);
	njPopMatrix(1u);

	njPushMatrix(0);
	njTranslate(0, 0, 0, 0);
	njScale(0, 1.0f, 1.0f, 1.0f);
	ProcessModelNode_Sort(&object_004BD908_2, QueuedModelFlagsB_EnableZWrite, 1.0f);
	njPopMatrix(1u);

	njPushMatrix(0);
	njTranslate(0, 0, 0, 0);
	njScale(0, 1.0f, 1.0f, 1.0f);
	ProcessModelNode_Sort(&object_004BD908_3, QueuedModelFlagsB_EnableZWrite, 1.0f);
	njPopMatrix(1u);

	njPushMatrix(0);
	njTranslate(0, 0, 0, 0);
	njScale(0, 1.0f, 1.0f, 1.0f);
	ProcessModelNode_Sort(&object_004BD908_4, QueuedModelFlagsB_EnableZWrite, 1.0f);
	njPopMatrix(1u);
}

void General_Init(const IniFile *config, const HelperFunctions &helperFunctions)
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
	if (!DLLLoaded_SA1Chars) ReplacePVM("EV_EGGMOBLE0");
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
	//Fix frogs lol
	*(NJS_OBJECT*)0x030CB4F8 = object_02CCB4F8;
	*(NJS_OBJECT*)0x030CDB28 = object_02CCDB28;
	*(NJS_OBJECT*)0x030D0160 = object_02CD0160;
	//Fix for badniks not spawning
	WriteCall((void*)0x007AA9F9, AmenboFix);
	WriteCall((void*)0x0049EFE7, EggKeeperFix);
	//Leon fixes
	WriteData((float**)0x004CD75A, &_nj_screen_.w); //from SADXFE
	WriteData((float**)0x004CD77C, &_nj_screen_.h); //from SADXFE
	//Robot chest stuff
	WriteData<1>((char*)0x004CFC05, 0x08); //Zero constant material thing
	WriteData<1>((char*)0x004CFC99, 0x08); //Zero constant material thing
	WriteData((float*)0x00567D08, 0.85f); //E101 alpha (boss model)
	WriteData((float*)0x006F4718, 0.85f); //E101 alpha (boss model)
	((NJS_OBJECT*)0x014D943C)->basicdxmodel->mats[3].attrflags &= ~NJD_FLAG_USE_ALPHA; //E101 unnecessary alpha (boss model)
	((NJS_OBJECT*)0x0312F714)->basicdxmodel->mats[3].attrflags &= ~NJD_FLAG_USE_ALPHA; //E101 unnecessary alpha (cutscene model)
	((NJS_OBJECT*)0x030AB08C)->basicdxmodel->mats[3].attrflags &= ~NJD_FLAG_USE_ALPHA; //E103 unnecessary alpha (cutscene model)
	((NJS_OBJECT*)0x030A290C)->basicdxmodel->mats[3].attrflags &= ~NJD_FLAG_USE_ALPHA; //E104 unnecessary alpha (cutscene model)
	((NJS_OBJECT*)0x0309A21C)->basicdxmodel->mats[3].attrflags &= ~NJD_FLAG_USE_ALPHA; //E105 unnecessary alpha (cutscene model)
	WriteData((float*)0x004E7BFD, 0.85f); //E103 alpha (reused Gamma model)
	WriteData((float*)0x004E7C40, 0.85f); //E103 alpha (reused Gamma model)
	WriteData((float*)0x00605813, 0.85f); //E104 alpha (reused Gamma model)
	WriteData((float*)0x006F3F94, 0.85f); //E103 alpha (cutscene model)
	WriteData((float*)0x006F3D54, 0.85f); //E104 alpha (cutscene model)
	WriteData((float*)0x006F3B24, 0.85f); //E105 alpha (cutscene model)
	//Gamma's projectile fix. I have no idea why this works, but ok I guess
	E102_OBJECTS[5]->basicdxmodel->mats[0].attr_texId = 10;
	E102_OBJECTS[5]->basicdxmodel->mats[0].attrflags |= NJD_FLAG_USE_TEXTURE;
	E102_OBJECTS[6] = E102_OBJECTS[5];
	//Chaos 1 materials
	((NJS_OBJECT*)0x038DD9BC)->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2; //Chaos puddle
	((NJS_OBJECT*)0x02D6962C)->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2; //Chaos puddle
	((NJS_OBJECT*)0x03185C90)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x031854CC)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x03183F64)->basicdxmodel->mats[1].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x03180C58)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x031807B4)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x0317FB3C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x0317D0D4)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x0317C830)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x0317C31C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x0317C14C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x0317BF04)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x0317BA6C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x0317B8A0)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x0317B3B0)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x0317B0AC)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x0317AE78)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x0317AAE4)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x0317A914)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x0317A640)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x0317A33C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x0317A108)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x03179D4C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x03179B7C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	if (DLLLoaded_HDGUI == false)
	{
		ReplacePVM("OBJ_REGULAR");
		ResizeTextureList(&OBJ_REGULAR_TEXLIST, 100); //Added DC ripple texture
	}
	WriteJump(ItemBox_Display_Destroyed, ItemBox_Display_Destroyed_Rotate);
	WriteJump(ItemBox_Display_Unknown, ItemBox_Display_Unknown_Rotate);
	WriteJump(ItemBox_Display, ItemBox_Display_Rotate);
	*(NJS_MODEL_SADX*)0x00989384 = attach_0019D298_2; //Switch
	*(NJS_MODEL_SADX*)0x008BBD84 = attach_0019D298; //Switch (pressed)
	*(NJS_MODEL_SADX*)0x008B8438 = attach_00199A4C; //Dash panel
	*(NJS_MODEL_SADX*)0x008C5D5C = attach_001A6F74; //Star panel
	*(NJS_MODEL_SADX*)0x008C9060 = attach_001AA1B8; //Checkpoint
	*(NJS_MODEL_SADX*)0x008B6010 = attach_00197698; //Normal spring
	*(NJS_MODEL_SADX*)0x008B5498 = attach_00196B5C; //Spring B
	*(NJS_MODEL_SADX*)0x008C6624 = attach_001A7820; //Spring H
	*(NJS_MODEL_SADX*)0x008BFEC8 = attach_001A127C; //Rocket platform
	*(NJS_MODEL_SADX*)0x008BE168 = attach_0019F5CC; //Balloon
	// Load configuration settings
	FPSLock = config->getBool("General", "FPSLock", false);
	EnableDCRipple = config->getBool("General", "EnableDreamcastWaterRipple", true);
	EnableCutsceneFix = config->getBool("General", "EnableCutsceneFix", true);
	EnableImpressFont = config->getString("General", "EnableImpressFont", "Impress");
	CutsceneSkipMode = config->getInt("General", "CutsceneSkipMode", 0);
	ColorizeFont = config->getBool("General", "ColorizeFont", true);
	DisableFontSmoothing = config->getBool("General", "DisableFontSmoothing", true);
	EnableLSDFix = config->getBool("Miscellaneous", "EnableLSDFix", false);
	//FPS lock
	if (FPSLock) WriteCall((void*)0x411E79, FPSLockHook);
	//Cancel cutscenes with C button
	if (CutsceneSkipMode != 3)
	{
		WriteData<1>((char*)0x00431520, 0x01);
		if (CutsceneSkipMode != 2) WriteCall((void*)0x4314F9, InputHookForCutscenes);
	}
	//Light Speed Dash distance fix
	if (EnableLSDFix)
	{
		WriteData<1>((char*)0x0049306C, 0x80); //Initial speed 16 instead of 8
		WriteData<1>((char*)0x00492FED, 0x80); //Initial speed 16 instead of 8
		WriteData<1>((char*)0x00492CC1, 0x80); //Set speed to 16 if below minimum
		WriteData((float**)0x00492CB0, &LSDFix); //16 is the minimum speed
	}
	// Disable font smoothing
	if (DisableFontSmoothing)
	{
		//Probably better than making the whole texture ARGB1555
		WriteData<1>((char*)0x0040DA0B, 0x00);
		WriteData<1>((char*)0x0040DA0C, 0x00);
		WriteData<1>((char*)0x0040DA12, 0x00);
	}
	// Enable Impress font
	if (EnableImpressFont == "Impress")
	{
		ReplaceBIN("FONTDATA1", "FONTDATA1_I");
	}
	// Enable Comic Sans font (experimental)
	else if (EnableImpressFont == "ComicSans")
	{
		ReplaceBIN("FONTDATA1", "FONTDATA1_C");
	}
	if (ColorizeFont)
	{
		//Subtitles (ARGB from 0 to F: CEEF)
		WriteData<1>((char*)0x0040E28D, 0xEF);
		WriteData<1>((char*)0x0040E28E, 0xCE);
		//Pause menu text (ARGB from 00 to FF: BFEFEFFF)
		WriteData<1>((char*)0x0040E541, 0xFF);
		WriteData<1>((char*)0x0040E542, 0xEF);
		WriteData<1>((char*)0x0040E543, 0xEF);
		WriteData<1>((char*)0x0040E544, 0xBF);
		//Recap screen (just FF F8 F8 F8)
		WriteCall((void*)0x006428AD, ColorizeRecapText);
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
		*(NJS_OBJECT*)0x8B22F4 = object_00193A44;
		WriteJump((void*)0x4B9290, FixedRipple_Normal);
		WriteJump((void*)0x7A81A0, FixedRipple_Bubble);
		WriteJump((void*)0x004407C0, SpawnRipplesX);
	}
	//Water splash particle
	WriteCall((void*)0x0049F1C0, FixWaterSplash);
	//Emerald shard, hopefully someday
	/*((NJS_MATERIAL*)0x8BA30C)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_MATERIAL*)0x8BA30C)->diffuse.color = 0xCC000000;
	WriteData((float*)0x004A2CFA, 0.1f);
	WriteData((float*)0x004A2CFF, 0.1f);
	WriteData((float*)0x004A2D04, 0.1f);
	WriteData((float*)0x004A2D09, 0.25f);
	WriteCall((void*)0x4A2CDE, EmeraldShardLighting);
	WriteData<1>((char*)0x004A2D9A, 0x87); //IGNORE_LIGHT*/
	//Underwater overlay
	WriteCall((void*)0x43708D, DrawUnderwaterOverlay);
	//Gamma's chest patch lol
	HMODULE CHRMODELS = GetModuleHandle(L"CHRMODELS_orig");
	((NJS_MATERIAL*)((size_t)CHRMODELS + 0x00200DE8))->attrflags &= ~NJD_FLAG_USE_ALPHA; //Unnecessary alpha in Gamma's model
	WriteCall((void*)0x0047FE13, GammaHook); //Gamma's chest transparency
	//Character effects
	WriteJump((void*)0x004A1630, Sonic_DisplayLightDashModelX);
	WriteData((float**)0x47404B, &heat_float1);
	WriteData((float**)0x474057, &heat_float2);
	WriteJump((void*)0x004C1330, Knuckles_MaximumHeat_DrawX);
	WriteJump((void*)0x004C1410, Knuckles_MaximumHeatSprite_Draw);
	WriteCall((void*)0x004C1258, KnucklesPunch_RetrieveAlpha);
	WriteCall((void*)0x004C1305, KnucklesPunch_Render);
	WriteCall((void*)0x4A0F56, SonicDashTrailFix);
	WriteData<10>((char*)0x0040889C, 0x90u); //Queued model lighting/specular fix
	//Environment maps
	EnvMap1 = 0.5f;
	EnvMap2 = 0.5f;
	EnvMap3 = 0.5f;
	EnvMap4 = 0.5f;
	//Various bugfixes
	//Zero holding Amy lighting fix
	((NJS_OBJECT *)0x31A4DFC)->basicdxmodel->mats[11].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
	((NJS_OBJECT *)0x31A4DFC)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
	//Tikal lighting fixes
	((NJS_OBJECT*)0x008CE058)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
	((NJS_OBJECT*)0x008CC658)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
	//Eggman fingers fix
	((NJS_OBJECT*)0x008961E0)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
	((NJS_OBJECT*)0x008964CC)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
	((NJS_OBJECT*)0x008980DC)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
	((NJS_OBJECT*)0x00897DE0)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
	((NJS_OBJECT*)0x02EE22C0)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
	((NJS_OBJECT*)0x02EE25AC)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
	((NJS_OBJECT*)0x02EE4194)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
	((NJS_OBJECT*)0x02EE3E98)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
	//Eggmobile NPC model fix
	*(NJS_OBJECT*)0x010FEF74 = object_02AEB524; //Fix materials on Eggmobile NPC model
	((NJS_OBJECT*)0x01257754)->basicdxmodel->mats[15].diffuse.color = 0xFFFFFFFF; //Chaos6 Eggmobile
	WriteData((NJS_TEXLIST**)0x007D2B22, (NJS_TEXLIST*)0x02EE0AA4); //Replace the texlist for the above model in the NPC data array
	*(NJS_TEXLIST**)0x02BD5FE4 = (NJS_TEXLIST*)0x02EE0AA4; //Eggman Super Sonic cutscene texlist fix
	//E101 Beta lighting fixes
	((NJS_OBJECT*)0x014D76B4)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x014D76B4)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x014D76B4)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x014D76B4)->basicdxmodel->mats[3].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x014D76B4)->basicdxmodel->mats[4].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x014D857C)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_OBJECT*)0x014D857C)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_OBJECT*)0x014D887C)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_OBJECT*)0x014D943C)->basicdxmodel->mats[7].attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_OBJECT*)0x014DC25C)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_OBJECT*)0x014DD4A4)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
	//Emblem field model
	((NJS_MATERIAL*)0x009740FC)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x00974110)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x00974124)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x00974138)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	//Emeralds glow
	//Windy Valley
	WriteCall((void*)0x004DF27F, RenderEmeraldWithGlow);
	WriteCall((void*)0x004DF250, RotateEmerald);
	//Ice Cap
	WriteCall((void*)0x004ECEC4, RenderEmeraldWithGlow);
	WriteCall((void*)0x004ECE90, RotateEmerald);
	//Casino
	WriteCall((void*)0x005DCFB0, RenderEmeraldWithGlow);
	WriteCall((void*)0x005DCF7D, RotateEmerald);
	//Shield
	WriteJump(Barrier_Main, Barrier_MainX); //Barrier
	WriteData<1>((char*)0x004B9DA9, 0x08); //Magnetic barrier blending mode
	WriteCall((void*)0x4BA0E4, RenderInvincibilityLines);
	//Material fixes
	for (unsigned int i = 0; i < LengthOfArray(FirstCharacterSpecular_General); i++)
	{
		RemoveMaterialColors(FirstCharacterSpecular_General[i]);
	}
	for (unsigned int i = 0; i < LengthOfArray(RemoveColors_General); i++)
	{
		RemoveMaterialColors(RemoveColors_General[i]);
	}
	if (DLLLoaded_Lantern == true)
	{
		allow_landtable_specular(true);
		if (set_alpha_reject != nullptr) material_register(AlphaRejectMaterials, LengthOfArray(AlphaRejectMaterials), &DisableAlphaRejection);
		material_register(FirstCharacterSpecular_General, LengthOfArray(FirstCharacterSpecular_General), &ForceDiffuse2Specular2);
		material_register(ObjectSpecular_General, LengthOfArray(ObjectSpecular_General), &ForceDiffuse0Specular1);
		material_register(LevelSpecular_General, LengthOfArray(LevelSpecular_General), &ForceDiffuse0Specular0);
	}
	//Egg Walker cutscene
	((NJS_MATERIAL*)0x03310F18)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_MATERIAL*)0x03310F18)->diffuse.color = 0xFFFFFFFF;
	((NJS_OBJECT*)0x10D7774)->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2; //Question mark from Character Select
	((NJS_OBJECT*)0x10D7774)->basicdxmodel->mats[0].attr_texId = 10; //Question mark from Character Select
	WriteCall((void*)0x7A1E7C, RenderBalloon); 
	WriteCall((void*)0x7A1F1E, RenderBalloonTip);
	WriteData<1>((char*)0x004D7712, 0x02u); //Animal bubble blending mode
	*(NJS_OBJECT*)0x02F67B78 = object_0021BD90; //Tornado 2 crashed
	ResizeTextureList((NJS_TEXLIST*)0x0092ACE4, 5); //GOMA texlist
	*(NJS_OBJECT*)0x944FD4 = object_00544FD4; //Gori
	*(NJS_OBJECT*)0x934AE0 = object_00534AE0; //Koar
	*(NJS_OBJECT*)0x92C40C = object_0052C40C; //Pen
	*(NJS_OBJECT*)0x92A2D0 = object_0052A2D0; //Goma
	*(NJS_OBJECT*)0x949104 = object_00549104; //Rako
	*(NJS_OBJECT*)0x9308DC = object_005308DC; //Kuja
	*(NJS_OBJECT*)0x92EA0C = object_0052EA0C; //Tuba
	*(NJS_OBJECT*)0x932ADC = object_00532ADC; //Oum
	*(NJS_OBJECT*)0x939B2C = object_00539B2C; //Banb
	*(NJS_OBJECT*)0x93BFE4 = object_0053BFE4; //Usa
	*(NJS_OBJECT*)0x93723C = object_0053723C; //Wara
	*(NJS_OBJECT*)0x942F90 = object_00542F90; //Lion
	*(NJS_OBJECT*)0x94043C = object_0054043C; //Zou
	*(NJS_OBJECT*)0x93E2B8 = object_0053E2B8; //Mogu
	*(NJS_OBJECT*)0x946D4C = object_00546D4C; //Suka blyat
	*(NJS_ACTION*)0x94A00C = action__16EA18; //Usa animation in levels
	*(NJS_ACTION*)0x949FFC = action__169078; //Wara animation in levels
	*(NJS_ACTION*)0x949FF4 = action__165C70; //Koar animation in levels
}

void General_OnFrame()
{
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
					PrintDebug("Trying to skip the cutscene...\n");
				}
				else
				{
					CutsceneFadeMode = 2;
					PrintDebug("Cutscene skipped!\n");
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
				PrintDebug("Trying to skip the cutscene...\n");
			}
			else
			{
				CutsceneFadeMode = 0;
				CutsceneFadeValue = 0;
				SkipPressed_Cutscene = false;
				PrintDebug("Cutscene skipped!\n");
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
			WriteData((char*)0x007919CD, 0i8);
			AlphaRejectionMode = 1;
		}
		if (AlphaRejectionMode == 1 && (CurrentLevel == 25 || GameMode == GameModes_CharSel || GameMode == GameModes_Menu || CurrentChaoStage == 2))
		{
			WriteData<1>((char*)0x007919CD, 0x16u);
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
	if (CurrentLevel == 33 && CutsceneID != 57) ((NJS_MATERIAL*)0x02D64FD8)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	else ((NJS_MATERIAL*)0x02D64FD8)->attrflags &= ~NJD_FLAG_IGNORE_LIGHT;	
}

void General_OnInput()
{
	//Input hook for cutscenes
	if (CutsceneSkipMode < 2 && !SkipPressed_Cutscene && !DemoPlaying)
		if (EV_MainThread_ptr != 0 && ControllerPointers[0]->PressedButtons & Buttons_Start)
		{
			PrintDebug("Cutscene skip pressed!\n");
			SkipPressed_Cutscene = true;
		}
}
