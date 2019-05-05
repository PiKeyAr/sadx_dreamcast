#include "stdafx.h"
#include "EggHornet_Water.h"
#include "EggViper_Head.h"
#include "Chaos0_Objects.h"
#include "Chaos2_Column.h"
#include "Chaos4_water.h"
#include "Chaos6_Motion.h"
#include "Chaos7_fixes.h"
#include "ZeroE101R_Water.h"
#include "E101Kai_Model.h"
#include "LightingArrays.h"
#include "ERobo.h"

NJS_TEXNAME textures_chaos0[34];
NJS_TEXLIST texlist_chaos0 = { arrayptrandlength(textures_chaos0) };

NJS_TEXNAME chaos0_obj_tex[33];
NJS_TEXLIST chaos0_object = { arrayptrandlength(chaos0_obj_tex) };

NJS_TEXNAME textures_chaos2[15];
NJS_TEXLIST texlist_chaos2 = { arrayptrandlength(textures_chaos2) };

NJS_TEXNAME textures_chaos4[13];
NJS_TEXLIST texlist_chaos4 = { arrayptrandlength(textures_chaos4) };

NJS_TEXNAME textures_chaos6[77];
NJS_TEXLIST texlist_chaos6 = { arrayptrandlength(textures_chaos6) };

NJS_TEXNAME textures_chaos6_2[79];
NJS_TEXLIST texlist_chaos6_2 = { arrayptrandlength(textures_chaos6_2) };

NJS_TEXNAME textures_chaos7[168];
NJS_TEXLIST texlist_chaos7 = { arrayptrandlength(textures_chaos7) };

NJS_TEXNAME textures_egm1land[118];
NJS_TEXLIST texlist_egm1land = { arrayptrandlength(textures_egm1land) };

NJS_TEXNAME textures_eggwalker[231];
NJS_TEXLIST texlist_eggwalker = { arrayptrandlength(textures_eggwalker) };

NJS_TEXNAME textures_eggviper[45];
NJS_TEXLIST texlist_eggviper = { arrayptrandlength(textures_eggviper) };

NJS_TEXNAME textures_e101[77];
NJS_TEXLIST texlist_e101 = { arrayptrandlength(textures_e101) };

//Chaos 6 material arrays
DataArray(NJS_MATERIAL, matlist_00F975B0, 0x013975B0, 3);
DataArray(NJS_MATERIAL, matlist_00F98C98, 0x01398C98, 6);
DataArray(NJS_MATERIAL, matlist_01270910, 0x01270910, 4);
DataArray(NJS_MATERIAL, matlist_0126C51C, 0x0126C51C, 2);
DataArray(NJS_MATERIAL, matlist_01271BCC, 0x01271BCC, 2);

DataArray(PVMEntry, EggHornetObjectTextures, 0x156F6B0, 15);
DataArray(FogData, Chaos2Fog, 0x01120638, 3);
DataArray(FogData, Chaos6SFog, 0x011EF0E8, 3);
DataArray(FogData, Chaos6KFog, 0x011EF118, 3);
DataArray(FogData, Chaos4Fog, 0x0118FA00, 3);
DataArray(FogData, Chaos7Fog, 0x01420E30, 3);
DataArray(FogData, EggHornetFog, 0x01556B34, 3);
DataArray(FogData, EggWalkerFog, 0x015E87F4, 3);
DataArray(FogData, EggViperFog, 0x0165D334, 3);
DataArray(FogData, Fog_E101R, 0x015225F0, 3);
DataArray(FogData, Fog_Zero, 0x016B4DB0, 3);
DataArray(NJS_VECTOR, SkyBoxScale_Chaos6S, 0x011EF040, 3);
DataArray(NJS_VECTOR, SkyBoxScale_Chaos6K, 0x011EF064, 3);
DataArray(DrawDistance, DrawDist_Chaos7, 0x01420E00, 3);
DataArray(DrawDistance, DrawDist_Chaso6S, 0x011EF0B8, 3);
DataArray(DrawDistance, DrawDist_Chaso6K, 0x011EF0D0, 3);
DataArray(DrawDistance, DrawDist_EggHornet, 0x01556B1C, 3);
DataArray(DrawDistance, DrawDist_E101R, 0x015225D8, 3);
DataArray(DrawDistance, DrawDist_Zero, 0x016B4D98, 3);
DataArray(PVMEntry, EGGVIPER_TEXLISTS, 0x165D498, 11);
DataArray(PVMEntry, CHAOS4_OBJECT_TEXLISTS, 0x118FDB0, 18);
DataPointer(PVMEntry, PVMEntry_CHAOS0EFFECT, 0x1120180);
DataPointer(unsigned char, byte_3C5A7EF, 0x3C5A7EF);
DataPointer(unsigned char, byte_3C5A7ED, 0x3C5A7ED);
DataPointer(unsigned char, byte_03C5A7EF, 0x03C5A7EF);
DataPointer(float, dword_3C6A998, 0x3C6A998);
DataPointer(NJS_OBJECT, stru_13A6E8C, 0x13A6E8C);
DataPointer(NJS_ARGB, nj_constant_material_temp, 0x03B18220);
DataPointer(int, EVEffect, 0x3C6E1EC);
DataPointer(NJS_OBJECT, stru_11EDF38, 0x11EDF38);
DataPointer(NJS_OBJECT, stru_11EEED8, 0x11EEED8);
DataPointer(NJS_TEXANIM, stru_149401C, 0x149401C);
DataPointer(NJS_TEXANIM, stru_1494050, 0x1494050);
DataPointer(NJS_SPRITE, stru_1494030, 0x1494030);
DataPointer(NJS_SPRITE, stru_1494064, 0x1494064);
DataPointer(NJS_ARGB, stru_1494114, 0x1494114);
DataPointer(NJS_ARGB, stru_1494124, 0x1494124);
DataPointer(ObjectMaster*, dword_3C84628, 0x3C84628);
DataPointer(float, Chaos4NumaTransparency, 0x3C688D4);
DataPointer(char, EggViperByteThing, 0x03C6E178);
DataPointer(float, EggViperHitCount, 0x03C58158);
FunctionPointer(void, sub_571AD0, (ObjectMaster *a1), 0x571AD0);
FunctionPointer(void, sub_5632F0, (ObjectMaster *a1), 0x5632F0);
FunctionPointer(void, sub_563370, (ObjectMaster *a1), 0x563370);
FunctionPointer(void, sub_4B9540, (NJS_VECTOR *position, NJS_VECTOR *scale_v, float scale), 0x4B9540);
FunctionPointer(void, sub_408530, (NJS_OBJECT *o), 0x408530);
FunctionPointer(void, sub_570900, (int a1, int a2), 0x570900);
FunctionPointer(void, sub_407BB0, (NJS_MODEL_SADX *a1, QueuedModelFlagsB queueFlags), 0x407BB0);
FunctionPointer(void, sub_568EC0, (EntityData1 *a1), 0x568EC0);
FunctionPointer(void, sub_4CACF0, (NJS_VECTOR *a1, float a2), 0x4CACF0);
FunctionPointer(void, sub_77E940, (FVFStruct_H_B *a1, signed int count, int a3), 0x77E940);
FunctionPointer(void, sub_40A280, (NJS_OBJECT *a1), 0x40A280);
FunctionPointer(void, sub_407A00, (NJS_MODEL_SADX *model, float a2), 0x407A00);
FunctionPointer(void, sub_407CF0, (NJS_MODEL_SADX *a1, QueuedModelFlagsB a2), 0x407CF0);

static float EggViper_blendfactor = 0.0f;
static int EggViper_blenddirection = 1;
static int EggViper_EffectMode = 0;
static int EggViper_Timer = 0;
static float EggViper_blendfactor_max = 0.005f;
static float EggViper_blendfactor_min = 0.005f;
static unsigned char EggHornetTrigger = 0;
static float TornadoAlpha = 1.0f;
static int TornadoTrigger = 0;
static int Chaos4Water = 0;
static float EggViperHitCount_Old = 0.0f;
static int EggHornetOceanAnimationSA1 = 0;
static int EggHornet_Rotation = 0;
static int EggHornet_RotationDirection = 1;
static bool EggHornet_RotationEnabled = false;
static int E101REffectMode = 1;
static float e101rframe = 0;
static int e101rsea_dc = 4;
static int Chaos0PuddleTransparency = 255;
static bool Chaos0TransUp = false;

void __cdecl EggHornetWaterFunc()
{
	if (B_EGM1_Info && !DroppedFrames)
	{
		if (EnableEggHornet == true && !SADXWater_MysticRuins && CurrentLevel == 20 && GameState != 16)
		{
			if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2)
			{
				EggHornetOceanAnimationSA1++;
			}
			if (EggHornetOceanAnimationSA1 > 9) EggHornetOceanAnimationSA1 = 0;
			matlist_00057F04[0].attr_texId = EggHornetOceanAnimationSA1;
		}
		DisableFog();
		njSetTexture(&texlist_egm1land);
		njPushMatrix(0);
		njTranslate(0, 0, 0, 0);
		ProcessModelNode_A_Wrapper((NJS_OBJECT*)B_EGM1_Info->getdata("object_00048F9C"), QueuedModelFlagsB_3, 1.0f);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, 0, 0, 0);
		ProcessModelNode_A_Wrapper((NJS_OBJECT*)B_EGM1_Info->getdata("object_00049370"), QueuedModelFlagsB_3, 1.0f);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, 0, 0, 0);
		ProcessModelNode_A_Wrapper((NJS_OBJECT*)B_EGM1_Info->getdata("object_0004EB6C"), QueuedModelFlagsB_3, 1.0f);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, 0, 0, 0);
		ProcessModelNode_A_Wrapper((NJS_OBJECT*)B_EGM1_Info->getdata("object_0004EE14"), QueuedModelFlagsB_3, 1.0f);
		njPopMatrix(1u);
		njSetTexture(&BEACH_SEA_TEXLIST);
		njPushMatrix(0);
		njTranslate(0, Camera_Data1->Position.x, 0, Camera_Data1->Position.z);
		njScale(0, 1.0f, 1.0f, 1.0f);
		DrawQueueDepthBias = -47000;
		ProcessModelNode(&object_00057FD4, QueuedModelFlagsB_EnableZWrite, 1.0f);
		njPopMatrix(1u);
		DrawQueueDepthBias = 0;
	}
}

void __cdecl SetClip_Chaos6KX(signed int a1)
{
	NJS_MODEL_SADX *v1; // ecx@3
	signed int v2; // edx@3
	char *v3; // eax@4
	NJS_MODEL_SADX *v4; // edx@6
	signed int v5; // ecx@6
	char *v6; // eax@7
	NJS_MODEL_SADX *v7; // edx@9
	signed int v8; // ecx@9
	char *v9; // eax@10
	NJS_MODEL_SADX *v10; // edx@12
	signed int v11; // ecx@12
	char *v12; // eax@13
	if (B_CHAOS6_1_Info)
	{
		if (a1 >= 2)
		{
			v1 = (NJS_MODEL_SADX*)B_CHAOS6_1_Info->getdata("attach_00190A04");
			v2 = 0;
			if (v1->nbMat)
			{
				v3 = (char *)&v1->mats->attrflags;
				do
				{
					*(_DWORD *)v3 &= ~NJD_FLAG_USE_ALPHA;
					++v2;
					v3 += 20;
				} while (v2 < v1->nbMat);
			}
			v4 = (NJS_MODEL_SADX*)B_CHAOS6_1_Info->getdata("attach_00190B94");
			v5 = 0;
			if (v4->nbMat)
			{
				v6 = (char *)&v4->mats->attrflags;
				do
				{
					*(_DWORD *)v6 &= ~NJD_FLAG_USE_ALPHA;
					++v5;
					v6 += 20;
				} while (v5 < v4->nbMat);
			}
			v7 = (NJS_MODEL_SADX*)B_CHAOS6_1_Info->getdata("attach_001911C4");
			v8 = 0;
			if (v7->nbMat)
			{
				v9 = (char *)&v7->mats->attrflags;
				do
				{
					*(_DWORD *)v9 &= ~NJD_FLAG_USE_ALPHA;
					++v8;
					v9 += 20;
				} while (v8 < v7->nbMat);
			}
			v10 = (NJS_MODEL_SADX*)B_CHAOS6_1_Info->getdata("attach_00191354");
			v11 = 0;
			if (v10->nbMat)
			{
				v12 = (char *)&v10->mats->attrflags;
				do
				{
					*(_DWORD *)v12 &= ~NJD_FLAG_USE_ALPHA;
					++v11;
					v12 += 20;
				} while (v11 < v10->nbMat);
			}
			B_CHAOS6_1_Info->getlandtable()->COLCount -= 4;
		}
		else
		{
			B_CHAOS6_1_Info->getlandtable()->Col = &((COL*)B_CHAOS6_1_Info->getdata("collist_0016F6D8"))[4];
			B_CHAOS6_1_Info->getlandtable()->COLCount -= 4;
		}
	}
}

void __cdecl SetClip_Chaos6SX(signed int a1)
{
	NJS_MODEL_SADX *v1; // ecx@3
	signed int v2; // edx@3
	char *v3; // eax@4
	NJS_MODEL_SADX *v4; // edx@6
	signed int v5; // ecx@6
	char *v6; // eax@7
	NJS_MODEL_SADX *v7; // edx@9
	signed int v8; // ecx@9
	char *v9; // eax@10
	NJS_MODEL_SADX *v10; // edx@12
	signed int v11; // ecx@12
	char *v12; // eax@13
	if (B_CHAOS6_0_Info)
	{
		if (a1 >= 2)
		{
			v1 = (NJS_MODEL_SADX*)B_CHAOS6_0_Info->getdata("attach_0015D964");
			v2 = 0;
			if (v1->nbMat)
			{
				v3 = (char *)&v1->mats->attrflags;
				do
				{
					*(_DWORD *)v3 &= ~NJD_FLAG_USE_ALPHA;
					++v2;
					v3 += 20;
				} while (v2 < v1->nbMat);
			}
			v4 = (NJS_MODEL_SADX*)B_CHAOS6_0_Info->getdata("attach_0015DC90");
			v5 = 0;
			if (v4->nbMat)
			{
				v6 = (char *)&v4->mats->attrflags;
				do
				{
					*(_DWORD *)v6 &= ~NJD_FLAG_USE_ALPHA;
					++v5;
					v6 += 20;
				} while (v5 < v4->nbMat);
			}
			v7 = (NJS_MODEL_SADX*)B_CHAOS6_0_Info->getdata("attach_0015E2C0");
			v8 = 0;
			if (v7->nbMat)
			{
				v9 = (char *)&v7->mats->attrflags;
				do
				{
					*(_DWORD *)v9 &= ~NJD_FLAG_USE_ALPHA;
					++v8;
					v9 += 20;
				} while (v8 < v7->nbMat);
			}
			v10 = (NJS_MODEL_SADX*)B_CHAOS6_0_Info->getdata("attach_0015E5EC");
			v11 = 0;
			if (v10->nbMat)
			{
				v12 = (char *)&v10->mats->attrflags;
				do
				{
					*(_DWORD *)v12 &= ~NJD_FLAG_USE_ALPHA;
					++v11;
					v12 += 20;
				} while (v11 < v10->nbMat);
			}
			B_CHAOS6_0_Info->getlandtable()->COLCount -= 4;
		}
		else
		{
			B_CHAOS6_0_Info->getlandtable()->Col = &((COL*)B_CHAOS6_0_Info->getdata("collist_0014AFB4"))[4];
			B_CHAOS6_0_Info->getlandtable()->COLCount -= 4;
		}
	}
}

NJS_TEXANIM texanim_array[] =
{
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 0, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 1, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 2, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 3, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 4, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 5, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 6, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 7, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 8, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 9, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 10, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 11, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 12, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 13, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 14, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 15, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 16, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 17, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 18, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 19, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 20, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 21, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 22, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 23, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 24, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 25, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 26, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 27, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 28, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 29, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 30, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 31, 0 },
};

void __cdecl PerfectChaosUVs()
{
	if (EV_MainThread_ptr == nullptr)
	{
		object_000E483C.ang[1] += 1638;
		object_000E3B98.ang[1] += 1638;
		object_000E2BF4_3.ang[1] -= 819;
		object_000E2BF4_2.ang[1] += 819;
		object_000E2BF4_1.ang[1] += 3276;
		object_000E22A8.ang[1] -= 3276;
	}
	else
	{
		object_000E483C.ang[1] += 1638 * 2;
		object_000E3B98.ang[1] += 1638 * 2;
		object_000E2BF4_3.ang[1] -= 819 * 2;
		object_000E2BF4_2.ang[1] += 819 * 2;
		object_000E2BF4_1.ang[1] += 3276 * 2;
		object_000E22A8.ang[1] -= 3276 * 2;
	}
	if (object_000E483C.ang[1] > 65535) object_000E483C.ang[1] -= 65535;
	if (object_000E3B98.ang[1] > 65535) object_000E3B98.ang[1] -= 65535;
	if (object_000E2BF4_3.ang[1] < -65535) object_000E2BF4_3.ang[1] += 65535;
	if (object_000E2BF4_2.ang[1] > 65535) object_000E2BF4_2.ang[1] -= 65535;
	if (object_000E2BF4_1.ang[1] > 65535) object_000E2BF4_1.ang[1] -= 65535;
	if (object_000E22A8.ang[1] < -65535) object_000E22A8.ang[1] += 65535;
}

void __cdecl TornadoFunc()
{
	nj_constant_material_temp.a = TornadoAlpha;
	nj_constant_material_temp.r = 1.0f;
	nj_constant_material_temp.g = 1.0f;
	nj_constant_material_temp.b = 1.0f;
	SetMaterialAndSpriteColor(&nj_constant_material_temp);
	if (!(stru_13A6E8C.evalflags &= NJD_EVAL_HIDE))	ProcessModelNode_D_WrapperB(&object_000E483C, 0, 1.0f);
}

//Perfect Chaos damage functions

//Main explosion sprite
void __cdecl Chaos7Explosion_DisplayX(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	unsigned __int64 v2;
	v1 = a1->Data1;
	v2 = (unsigned __int64)*(float *)&v1->CharIndex;
	if (!DroppedFrames)
	{
		DisableFog();
		SetMaterialAndSpriteColor(&stru_1494114);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_ONE);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		stru_1494030.tanim = &texanim_array[v2];
		njDrawSprite3D_Queue(&stru_1494030, 0, NJD_SPRITE_ALPHA | NJD_SPRITE_SCALE, QueuedModelFlagsB_SomeTextureThing);
		njPopMatrix(1u);
		ToggleStageFog();
	}
}

//DamageSlave sprite
void __cdecl Chaos7Damage_DisplayX(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	double v2; // st7@2
	short v3;
	v1 = a1->Data1;
	if (!DroppedFrames)
	{
		DisableFog();
		SetMaterialAndSpriteColor(&stru_1494124);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_ONE);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v3 = ((signed short*)&v1->Object)[1];
		stru_1494064.tanim = &texanim_array[v3 + 16];
		v2 = v1->Scale.x;
		stru_1494064.sy = v1->Scale.x;
		stru_1494064.sx = v2;
		njDrawSprite3D_Queue(&stru_1494064, 0, NJD_SPRITE_ALPHA | NJD_SPRITE_SCALE, QueuedModelFlagsB_SomeTextureThing);
		njPopMatrix(1u);
		ToggleStageFog();
	}
}

void FixChaos0Car(NJS_ACTION *a1, float frame, float scale)
{
	NJS_ACTION a4;
	a4.motion = a1->motion;
	a4.object = &object_000597B0_2;
	DisplayAnimationFrame(a1, frame, (QueuedModelFlagsB)0, scale, (void(__cdecl *)(NJS_MODEL_SADX *, int, int))DrawModelThing);
	DisplayAnimationFrame(&a4, frame, (QueuedModelFlagsB)1, scale, (void(__cdecl *)(NJS_MODEL_SADX *, int, int))DrawModel_Queue);
}

void FixChaos2Columns(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	DrawQueueDepthBias = 8000.0f;
	ProcessModelNode_A_Wrapper(a1, a2, a3);
	DrawQueueDepthBias = 0;
}

void Chaos4Skybox(ObjectMaster *o1)
{
	float WaterTrans;
	float xshift = -145.92953f;
	float zshift = -27.3004f;
	NJS_VECTOR a1;
	NJS_VECTOR a2;
	//Swamp animation
	if (Chaos4Water > 13) Chaos4Water = 0;
	matlist_000429E8[0].attr_texId = Chaos4Water;
	if (FramerateSetting < 2 && FrameCounter % 2 == 0 || FramerateSetting >= 2) Chaos4Water++;
	if (!MissedFrames)
	{
		//Skybox
		njSetTexture(&CHAOS4_OBJECT_TEXLIST);
		j_ClampGlobalColorThing_Thing();
		njPushMatrix(0);
		sub_408530((NJS_OBJECT*)0x11C2C20);
		njPopMatrix(1u);
		//Swamp water
		njSetTexture(&CHAOS4_NUMA_TEXLIST);
		WaterTrans = 153.0f*(1.0f + Chaos4NumaTransparency);
		matlist_000429E8[0].diffuse.argb.a = (int)WaterTrans;
		njPushMatrix(0);
		DrawQueueDepthBias = 4000.0f;
		if (Chaos4NumaTransparency > -1.0f) ProcessModelNode(&object_0004476C_C4, QueuedModelFlagsB_SomeTextureThing, 1.0f);
		njPopMatrix(1u);
		DrawQueueDepthBias = 0.0f;
	}
	if (GameState == 15)
	{
		int v40;
		a2 = { 0, 0, 0 };
		a1.y = 20.0f;
		SetParticleDepthOverride(100.0f);
		v40 = FrameCounter2;
		if (!(FrameCounter2 & 3))
		{
			a1.x = 9.3f;
			a1.z = -280.0f;
			a1.x += xshift;
			a1.z += zshift;
			sub_4B9540(&a1, (NJS_VECTOR *)&a2, 1.5);
			a1.x = 12.3f;
			a1.z = -275.0f;
			a1.x += xshift;
			a1.z += zshift;
			sub_4B9540(&a1, (NJS_VECTOR *)&a2, 1.5);
			a1.x = 15.3f;
			a1.z = -270.0f;
			a1.x += xshift;
			a1.z += zshift;
			sub_4B9540(&a1, (NJS_VECTOR *)&a2, 1.5);
			v40 = FrameCounter2;
		}
		if ((v40 & 3) == 1)
		{
			a1.x = 23.3f;
			a1.z = -267.0f;
			a1.x += xshift;
			a1.z += zshift;
			sub_4B9540(&a1, (NJS_VECTOR *)&a2, 1.5);
			a1.x = 31.3f;
			a1.z = -268.5f;
			a1.x += xshift;
			a1.z += zshift;
			sub_4B9540(&a1, (NJS_VECTOR *)&a2, 1.5);
			a1.x = 37.3f;
			a1.z = -269.5f;
			a1.x += xshift;
			a1.z += zshift;
			sub_4B9540(&a1, (NJS_VECTOR *)&a2, 1.5);
			v40 = FrameCounter2;
		}
		if ((v40 & 3) == 2)
		{
			a1.x = 43.3f;
			a1.z = -270.0f;
			a1.x += xshift;
			a1.z += zshift;
			sub_4B9540(&a1, (NJS_VECTOR *)&a2, 1.5);
			a1.x = 42.5f;
			a1.z = -275.0f;
			a1.x += xshift;
			a1.z += zshift;
			sub_4B9540(&a1, (NJS_VECTOR *)&a2, 1.5);
			a1.x = 48.3f;
			a1.z = -280.0f;
			a1.x += xshift;
			a1.z += zshift;
			sub_4B9540(&a1, (NJS_VECTOR *)&a2, 1.5);
		}
		SetParticleDepthOverride(0.0f);
	}
}

void __cdecl Chaos6SkyboxBottom(EntityData1 *a1)
{
	Sint16 v1; // cx
	NJS_TEX *v2; // eax

	if (!MissedFrames)
	{
		v1 = *(Sint16*)&a1->LoopData;
		v2 = stru_11EDF38.basicdxmodel->meshsets->vertuv;
		v2->v = v1 + 2040;
		v2[2].v = v1 + 2040;
		v2[1].v = v1;
		v2[3].v = v1;
		DisableFog();
		njSetTexture(&CHAOS6_BG_TEXLIST);
		njPushMatrix(0);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
		SetMaterialAndSpriteColor_Float(0.5, 0.0, 0.0, 0.0);
		njTranslate(0, Camera_Data1->Position.x, 0, Camera_Data1->Position.z);
		njScale(0, 3.0, 1.0, 3.0);
		DrawQueueDepthBias = -32000.0f;
		ProcessModelNode(&stru_11EDF38, QueuedModelFlagsB_SomeTextureThing, 3.0f);
		DrawQueueDepthBias = 0;
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
		njPopMatrix(1u);
		ToggleStageFog();
	}
}

void __cdecl Chaos6SkyboxMain()
{
	if (!MissedFrames)
	{
		DisableFog();
		njSetTexture(&CHAOS6_BG_TEXLIST);
		njPushMatrix(0);
		njTranslate(0, Camera_Data1->Position.x, 0.0, Camera_Data1->Position.z);
		njRotateY(0, 57344);
		njScaleV(0, &Skybox_Scale);
		DrawQueueDepthBias = -30000.0f;
		ProcessModelNode(&stru_11EEED8, QueuedModelFlagsB_SomeTextureThing, 3.0f);
		DrawQueueDepthBias = 0;
		njPopMatrix(1u);
		ToggleStageFog();
	}
}

void PerfectChaosWaterfallHook(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	if (EV_MainThread_ptr != nullptr && CutsceneID == 254) ProcessModelNode(a1, QueuedModelFlagsB_EnableZWrite, a3);
	else ProcessModelNode_A_Wrapper(a1, a2, a3);
}

void E101RRenderAfterEffect(float a, float r, float g, float b)
{
	if (E101REffectMode == 0) SetMaterialAndSpriteColor_Float(1.0f, a*1.5f, a*0.75f, a*0.5f);
	else SetMaterialAndSpriteColor_Float(1.0f, a*0.75f, a*0.5f, a*1.5f);
}

void E101REffect_Orange(int a1, int a2)
{
	E101REffectMode = 0;
	njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
	sub_570900(a1, a2);
	njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
}

void E101REffect_Blue(int a1, int a2)
{
	njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
	sub_570900(a1, a2);
	njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
	E101REffectMode = 1;
}

void E101R_FVFShit(FVFStruct_H_B *a1, signed int count, int a3)
{
	njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
	Direct3D_DrawFVF_H(a1, count);
	njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
}

void Zero_FVFShit(FVFStruct_H_B *a1, signed int count, int a3)
{
	SetOceanAlphaModeAndFVF(a3);
	njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
	Direct3D_DrawFVF_H(a1, count);
	njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
}

void E101R_AfterImageConstantAttr(Uint32 and_attr, Uint32 or_attr)
{
	AddConstantAttr(0, NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ALPHA | NJD_FLAG_IGNORE_LIGHT | NJD_FLAG_USE_TEXTURE);
	njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
}

void E101R_AfterImageMaterial(float a, float r, float g, float b)
{
	SetMaterialAndSpriteColor_Float(a, 1.0f, 1.0f, 1.0f);
}

void RenderE101RStuff()
{
	if (B_E101_R_Info)
	{
		if (GameState != 16) e101rframe += 0.09999999f;
		if (e101rframe >= 59) e101rframe = 0;
		DisableFog();
		njSetTexture((NJS_TEXLIST *)0x16B460C);
		njPushMatrix(0);
		njTranslate(0, 0, 0, 0);
		ProcessModelNode_AB_Wrapper((NJS_OBJECT*)B_E101_R_Info->getdata("objectR_0001AD68"), 1.0f);
		ProcessModelNode_AB_Wrapper((NJS_OBJECT*)B_E101_R_Info->getdata("objectR_0001C3BC"), 1.0f);
		ProcessModelNode_AB_Wrapper((NJS_OBJECT*)B_E101_R_Info->getdata("objectR_0001BDF4"), 1.0f);
		ProcessModelNode_AB_Wrapper((NJS_OBJECT*)B_E101_R_Info->getdata("objectR_0001A814"), 1.0f);
		njAction((NJS_ACTION*)LandTableArray[80]->AnimData->Animation, e101rframe);
		ProcessModelNode_AB_Wrapper((NJS_OBJECT*)B_E101_R_Info->getdata("objectR_0001CC84"), 1.0f);
		ProcessModelNode_AB_Wrapper((NJS_OBJECT*)B_E101_R_Info->getdata("objectR_0001C958"), 1.0f);
		ProcessModelNode_AB_Wrapper((NJS_OBJECT*)B_E101_R_Info->getdata("objectR_0001D5E0"), 1.0f);
		ProcessModelNode_AB_Wrapper((NJS_OBJECT*)B_E101_R_Info->getdata("objectR_0001D2B4"), 1.0f);
		njPopMatrix(1u);
	}
}

void E101R_SkyboxHook(EntityData1 *a1)
{
	sub_568EC0(a1);
	RenderE101RStuff();
}

void E101R_DrawExplosion(NJS_OBJECT *a1, QueuedModelFlagsB a2)
{
	DrawQueueDepthBias = 20000.0f;
	ProcessModelNode_A_WrapperB(a1, QueuedModelFlagsB_SomeTextureThing);
	DrawQueueDepthBias = 0.0f;
}

void E101R_DrawSkybox(NJS_OBJECT *a1)
{
	ProcessModelNode_AB_Wrapper(a1, 1.0f);
}

void E101R_RenderParticle(FVFStruct_H_B *a1, signed int count, int a3)//(NJS_VECTOR *a1, int a2, int a3, int a4)
{
	Direct3D_EnableZWrite(0);
	sub_77E940(a1, count, a3);
	Direct3D_EnableZWrite(1);
}

void E101R_AfterImageArmConstantAttr(Uint32 and_attr, Uint32 or_attr)
{
	njSetConstantAttr(0x9999999u, 0x24100000u);
	AddConstantAttr(0, NJD_FLAG_IGNORE_LIGHT | NJD_FLAG_USE_TEXTURE);
}

void Spotlight_Display(ObjectMaster *a1)
{
	EntityData1 *v1;
	v1 = a1->Data1;
	if (LANDTABLEBOSSCHAOS0[0]->Col[4].Flags & ColFlags_Visible && !DroppedFrames)
	{
		njSetTexture(PVMEntry_CHAOS0EFFECT.TexList);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		njRotateXYZ(0, 0x4000, 0, 0);
		DrawQueueDepthBias = -17000.0f;
		ProcessModelNode(&spotlight, QueuedModelFlagsB_SomeTextureThing, 1.0f);
		njPopMatrix(1u);
		DrawQueueDepthBias = 0;
	}
}

void Spotlight_Main(ObjectMaster *a1)
{
	Spotlight_Display(a1);
}

void Spotlight_Load(ObjectMaster *a1)
{
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))Spotlight_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))Spotlight_Display;
	a1->DeleteSub = DynamicCOL_DeleteObject;
}

void Chaos0SpotlightHook()
{
	Chaos0_Rain_Load();
	//Load spotlight
	ObjectMaster *obj;
	EntityData1 *ent;
	ObjectFunc(OF0, Spotlight_Load);
	SETObjData setdata_sp = {};
	setdata_sp.Distance = 612800.0f;
	obj = LoadObject((LoadObj)2, 3, OF0);
	obj->SETData.SETData = &setdata_sp;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 291.83f;
		ent->Position.y = 0.1f;
		ent->Position.z = 385.525f;
	}
	obj = LoadObject((LoadObj)2, 3, OF0);
	obj->SETData.SETData = &setdata_sp;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 313.0f;
		ent->Position.y = 0.11f;
		ent->Position.z = 389.525f;
	}
	obj = LoadObject((LoadObj)2, 3, OF0);
	obj->SETData.SETData = &setdata_sp;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 368.06f;
		ent->Position.y = 0.1f;
		ent->Position.z = 340.66f;
	}
	obj = LoadObject((LoadObj)2, 3, OF0);
	obj->SETData.SETData = &setdata_sp;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 385.06f;
		ent->Position.y = 0.11f;
		ent->Position.z = 330.66f;
	}
	obj = LoadObject((LoadObj)2, 3, OF0);
	obj->SETData.SETData = &setdata_sp;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 160.685f;
		ent->Position.y = 0.1f;
		ent->Position.z = 348.04f;
	}
	obj = LoadObject((LoadObj)2, 3, OF0);
	obj->SETData.SETData = &setdata_sp;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 183.685f;
		ent->Position.y = 0.11f;
		ent->Position.z = 360.04f;
	}
	obj = LoadObject((LoadObj)2, 3, OF0);
	obj->SETData.SETData = &setdata_sp;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 258.325f;
		ent->Position.y = 0.1f;
		ent->Position.z = 434.675f;
	}
	obj = LoadObject((LoadObj)2, 3, OF0);
	obj->SETData.SETData = &setdata_sp;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 235.325f;
		ent->Position.y = 0.1f;
		ent->Position.z = 440.675f;
	}
}

void RenderBossECOcean()
{
	if (e101rsea_dc > 13) e101rsea_dc = 4;
	matlist_00007B80[0].attr_texId = e101rsea_dc;
	if (!DroppedFrames)
	{
		DisableFog();
		njSetTexture(&EC_SEA_TEXLIST);
		njPushMatrix(0);
		njTranslate(0, Camera_Data1->Position.x, 0, Camera_Data1->Position.z);
		ProcessModelNode(&object_00007C50, QueuedModelFlagsB_SomeTextureThing, 1.0f);
		njPopMatrix(1u);
	}
	if (GameState != 16) 
	{
		if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2) e101rsea_dc++;
	}
}

static void __cdecl ZeroE101R_OceanDraw_r(OceanData *a1)
{
	if (!SADXWater_EggCarrier)
	{
		RenderBossECOcean();
	}
	else EggCarrier_OceanDraw_SADXStyle(a1);
}

void LoadBossECOceanPVM(const char *filename, NJS_TEXLIST *texlist)
{
	LoadPVM(filename, texlist);
	if (SADXWater_EggCarrier) LoadPVM("SADXWTR_WAVES", &texlist_sadxwtr_waves);
	else LoadPVM("EC_SEA", &EC_SEA_TEXLIST);
}

void LoadBossECOceanTexlist()
{
	njSetTexture(&EC_SEA_TEXLIST);
}

void E101R_AfterImageQueue(NJS_ACTION *anim, float a2, int a3)
{
	DrawQueueDepthBias = 2000.0f;
	njAction_Queue(anim, a2, (QueuedModelFlagsB)a3);
	DrawQueueDepthBias = 0;
}

void E101R_ArmsHook(NJS_OBJECT *a1, QueuedModelFlagsB a2)
{
	DrawQueueDepthBias = 2000.0f;
	ProcessModelNode(a1, a2, GlobalModelNodeScale);
	DrawQueueDepthBias = 0;
}

void __cdecl ComeOneYaBigDrip()
{
	EntityData1 *v0; // esi
	v0 = dword_3C84628->Data1;
	char Chaos0PuddleTransparency_object = *(char*)(*(Sint32*)&v0->LoopData + 28);
	if (Chaos0PuddleTransparency >= 255 && Chaos0TransUp == true) Chaos0TransUp = false;
	if (Chaos0PuddleTransparency <= 178 && !Chaos0TransUp) Chaos0TransUp = true;
	if (Chaos0TransUp) Chaos0PuddleTransparency+=4; else Chaos0PuddleTransparency-=4;
	if (Chaos0PuddleTransparency_object != -103) Chaos_Puddle_Model.basicdxmodel->mats->diffuse.argb.a = Chaos0PuddleTransparency_object;
	else Chaos_Puddle_Model.basicdxmodel->mats->diffuse.argb.a = Chaos0PuddleTransparency;
	njSetTexture(&CHAOS_SURFACE_TEXLIST);
	njPushMatrix(0);
	njTranslateV(0, &v0->Position);
	njScaleV(0, &v0->Scale);
	ProcessModelNode_A_WrapperB(&Chaos_Puddle_Model, QueuedModelFlagsB_EnableZWrite);
	njPopMatrix(1u);
}

void ComeOnChaosTimeToEat(NJS_OBJECT *a1)
{
	//This isn't entirely accurate to SA1 but I don't have the patience to find values that would replicate it 100%. 
	//Also this ugly camera workaround is necessary because SADX would be struggling with transparency otherwise.
	if ((Camera_Data1->Position.y > 155 && Camera_Data1->Position.y < 158) || (Camera_Data1->Position.y > 127 && Camera_Data1->Position.y < 130 && Camera_Data1->Position.x > 970 && Camera_Data1->Position.x < 972))
	{
		EnvMap1 = 2.0f;
		EnvMap2 = 1;
		EnvMap3 = 0.5f;
		EnvMap4 = 1.0f;
		sub_407A00((NJS_MODEL_SADX*)0x2D69600, 1.0f);
		EnvMap1 = 0.5f;
		EnvMap2 = 0.5f;
		EnvMap3 = 0.5f;
		EnvMap4 = 0.5f;
	}
	else
	{
		sub_40A280(a1);
	}
}

void __cdecl Chaos4Kama(ObjectMaster *a1)
{
	EntityData1 *v1; // esi

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		njSetTexture(&CHAOS4_KAMA_TEXLIST);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		DisplayAnimationFrame((NJS_ACTION*)0x11C117C, *(float *)&v1->LoopData, QueuedModelFlagsB_SomeTextureThing, 0.0f, (void(__cdecl *)(NJS_MODEL_SADX *, int, int))sub_407CF0);
		DisplayAnimationFrame((NJS_ACTION*)0x11C13CC, *(float *)&v1->LoopData, QueuedModelFlagsB_SomeTextureThing, 0.0f, (void(__cdecl *)(NJS_MODEL_SADX *, int, int))sub_407CF0);
		njPopMatrix(1u);
	}
}

void SetMaterial_Chaos4Wave(float a, float r, float g, float b)
{
	if (r > 0) SetMaterialAndSpriteColor_Float(r, r, g, b);
	else SetMaterialAndSpriteColor_Float(0, 0, 0, 0);
}

void Bosses_Init()
{
	ReplacePVM("CHAOS1");
	ReplacePVM("CHAOS_BRAINFRAME");
	ReplacePVM("CHAOS_EFFECT");
	ReplacePVM("CHAOS_SURFACE");
	ReplacePVM("EV_CHAOS0_MANJU");
	ReplacePVM("EV_CHAOS1");
	ReplacePVM("EV_E101KAI");
	ReplacePVM("EV_E101_BODY");
	ReplacePVM("EV_E101_FUN");
	ReplacePVM("EV_E103_BODY");
	ReplacePVM("EV_E103_FUN");
	ReplacePVM("EV_E104_BODY");
	ReplacePVM("EV_E104_FUN");
	ReplacePVM("EV_E105_BODY");
	ReplacePVM("EV_E105_FUN");
	ReplacePVM("ICM0001_3");
	ReplacePVM("ICM0001_5");
	//Various Chaos puddle things
	WriteCall((void*)0x6EE43F, ComeOnChaosTimeToEat); //Environment mapping effect on Chaos' puddle before Chaos 0 emerges
	WriteJump((void*)0x6E9B00, ComeOneYaBigDrip); //Alterating transparency in the cutscene after Chaos 0
	((NJS_MATERIAL*)0x02D64FD8)->exponent = 11; //Chaos 1/4 puddle
	((NJS_MATERIAL*)0x038D936C)->attrflags &= ~NJD_FLAG_USE_ENV; //Chaos 0/2/6 puddle
	((NJS_MATERIAL*)0x038D936C)->exponent = 11; //Chaos 0/2/6 puddle
	ICM0001_3_TEXLISTS[0].Name = "ICM0001_5"; //Higher quality background in Sonic story
	//Generic fixes for Chaos materials
	for (unsigned int i = 0; i < LengthOfArray(ChaosMaterials); i++)
	{
		RemoveMaterialColors(ChaosMaterials[i]);
	}
	//Lighting stuff
	if (DLLLoaded_Lantern)
	{
		material_register_ptr(WhiteDiffuse_Boss, LengthOfArray(WhiteDiffuse_Boss), &ForceWhiteDiffuse3Specular1);
	}
}

void UnloadLevelFiles_B_CHAOS0()
{
	delete B_CHAOS0_Info;
	B_CHAOS0_Info = nullptr;
}

void UnloadLevelFiles_B_CHAOS2()
{
	delete B_CHAOS2_Info;
	B_CHAOS2_Info = nullptr;
}

void UnloadLevelFiles_B_CHAOS4()
{
	if (DLLLoaded_Lantern)
	{
		material_unregister_ptr(WhiteDiffuse_Chaos4External, LengthOfArray(WhiteDiffuse_Chaos4External), &ForceWhiteDiffuse3Specular1);
	}
	delete B_CHAOS4_Info;
	B_CHAOS4_Info = nullptr;
}

void UnloadLevelFiles_B_CHAOS6()
{
	delete B_CHAOS6_0_Info;
	delete B_CHAOS6_1_Info;
	B_CHAOS6_0_Info = nullptr;
	B_CHAOS6_1_Info = nullptr;
}

void UnloadLevelFiles_B_CHAOS7()
{
	delete B_CHAOS7_Info;
	B_CHAOS7_Info = nullptr;
}

void UnloadLevelFiles_B_EGM1()
{
	if (DLLLoaded_Lantern)
	{
		material_unregister_ptr(WhiteDiffuse_EGM1External, LengthOfArray(WhiteDiffuse_EGM1External), &ForceWhiteDiffuse3Specular1);
	}
	delete B_EGM1_Info;
	B_EGM1_Info = nullptr;
}

void UnloadLevelFiles_B_EGM2()
{
	delete B_EGM2_Info;
	B_EGM2_Info = nullptr;
}

void UnloadLevelFiles_B_EGM3()
{
	delete B_EGM3_Info;
	B_EGM3_Info = nullptr;
}

void UnloadLevelFiles_B_ROBO()
{
	delete B_ROBO_Info;
	B_ROBO_Info = nullptr;
}

void UnloadLevelFiles_B_E101()
{
	delete B_E101_Info;
	B_E101_Info = nullptr;
}

void UnloadLevelFiles_B_E101_R()
{
	delete B_E101_R_Info;
	B_E101_R_Info = nullptr;
}

void LoadLevelFiles_B_CHAOS0()
{
	CheckAndUnloadLevelFiles();
	B_CHAOS0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_CHAOS0\\0.sa1lvl"));
	LandTable *B_CHAOS0 = B_CHAOS0_Info->getlandtable();
	B_CHAOS0->TexList = &texlist_chaos0;
	LandTableArray[0] = B_CHAOS0;
	___LANDTABLEBOSSCHAOS0[0] = B_CHAOS0;
}

void LoadLevelFiles_B_CHAOS2()
{
	CheckAndUnloadLevelFiles();
	B_CHAOS2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_CHAOS2\\0.sa1lvl"));
	LandTable *B_CHAOS2 = B_CHAOS2_Info->getlandtable();
	B_CHAOS2->TexList = &texlist_chaos2;
	LandTableArray[8]= B_CHAOS2; //Chaos 2
}

void LoadLevelFiles_B_CHAOS4()
{
	CheckAndUnloadLevelFiles();
	B_CHAOS4_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_CHAOS4\\0.sa1lvl"));
	LandTable *B_CHAOS4 = B_CHAOS4_Info->getlandtable();
	B_CHAOS4->TexList = &texlist_chaos4;
	LandTableArray[16] = B_CHAOS4; //Chaos 4
	WhiteDiffuse_Chaos4External[0] = &((NJS_MATERIAL*)B_CHAOS4_Info->getdata("matlist_0004C318"))[0];
	if (DLLLoaded_Lantern)
	{
		material_register_ptr(WhiteDiffuse_Chaos4External, LengthOfArray(WhiteDiffuse_Chaos4External), &ForceWhiteDiffuse3Specular1);
	}
}

void LoadLevelFiles_B_CHAOS6()
{
	CheckAndUnloadLevelFiles();
	B_CHAOS6_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_CHAOS6\\0.sa1lvl"));
	B_CHAOS6_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_CHAOS6\\1.sa1lvl"));
	LandTable *B_CHAOS6_0 = B_CHAOS6_0_Info->getlandtable();
	LandTable *B_CHAOS6_1 = B_CHAOS6_1_Info->getlandtable();
	B_CHAOS6_0->TexList = &texlist_chaos6;
	B_CHAOS6_1->TexList = &texlist_chaos6_2;
	LandTableArray[24] = B_CHAOS6_0; //Chaos 6S
	LandTableArray[25] = B_CHAOS6_1; //Chaos 6K
	SetClip_Chaos6SX(ClipLevel);
	SetClip_Chaos6KX(ClipLevel);
}

void LoadLevelFiles_B_CHAOS7()
{
	CheckAndUnloadLevelFiles();
	B_CHAOS7_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_CHAOS7\\0.sa1lvl"));
	LandTable *B_CHAOS7 = B_CHAOS7_Info->getlandtable();
	B_CHAOS7->TexList = &texlist_chaos7;
	LandTableArray[32] = B_CHAOS7;
}

void LoadLevelFiles_B_EGM1()
{
	CheckAndUnloadLevelFiles();
	B_EGM1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_EGM1\\0.sa1lvl"));
	LandTable *B_EGM1 = B_EGM1_Info->getlandtable();
	B_EGM1->TexList = &texlist_egm1land;
	LandTableArray[40] = B_EGM1;
	//SADX style water
	if (SADXWater_MysticRuins)
	{
		EggHornetObjectTextures[0].TexList = &texlist_sadxwtr_waves;
		EggHornetObjectTextures[0].Name = "SADXWTR_WAVES";
		WriteJump(EggHornet_OceanDraw, MysticRuins_OceanDraw_SADXStyle); //Egg Hornet ocean
		B_EGM1->Col[B_EGM1->COLCount - 1].Flags = 0x81000000;
		B_EGM1->Col[B_EGM1->COLCount - 2].Flags = 0x81000000;
		B_EGM1->Col[B_EGM1->COLCount - 3].Flags = 0x81000000;
		B_EGM1->Col[B_EGM1->COLCount - 4].Flags = 0x81000000;
	}
	else
	{
		EggHornetObjectTextures[0].TexList = &BEACH_SEA_TEXLIST;
		EggHornetObjectTextures[0].Name = "BEACH_SEA";
		WriteJump(EggHornet_OceanDraw, EggHornetWaterFunc); //Egg Hornet water
		B_EGM1->Col[B_EGM1->COLCount - 1].Flags = 0x00000000;
		B_EGM1->Col[B_EGM1->COLCount - 2].Flags = 0x00000000;
		B_EGM1->Col[B_EGM1->COLCount - 3].Flags = 0x00000000;
		B_EGM1->Col[B_EGM1->COLCount - 4].Flags = 0x00000000;
	}
	WhiteDiffuse_EGM1External[0] = &((NJS_MATERIAL*)B_EGM1_Info->getdata("matlist_0005B834"))[0];
	if (DLLLoaded_Lantern)
	{
		material_register_ptr(WhiteDiffuse_EGM1External, LengthOfArray(WhiteDiffuse_EGM1External), &ForceWhiteDiffuse3Specular1);
	}
}

void LoadLevelFiles_B_EGM2()
{
	CheckAndUnloadLevelFiles();
	B_EGM2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_EGM2\\0.sa1lvl"));
	LandTable *B_EGM2 = B_EGM2_Info->getlandtable();
	B_EGM2->TexList = &texlist_eggwalker;
	LandTableArray[48] = B_EGM2;
}

void LoadLevelFiles_B_EGM3()
{
	CheckAndUnloadLevelFiles();
	B_EGM3_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_EGM3\\0.sa1lvl"));
	LandTable *B_EGM3 = B_EGM3_Info->getlandtable();
	B_EGM3->TexList = &texlist_eggviper;
	LandTableArray[56] = B_EGM3;
}

void LoadLevelFiles_B_ROBO()
{
	CheckAndUnloadLevelFiles();
	B_ROBO_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_ROBO\\0.sa1lvl"));
	LandTable *B_ROBO = B_ROBO_Info->getlandtable();
	B_ROBO->TexList = (NJS_TEXLIST*)0x16B460C;
	LandTableArray[64] = B_ROBO;
}

void LoadLevelFiles_B_E101_R()
{
	CheckAndUnloadLevelFiles();
	B_E101_R_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_E101_R\\0.sa1lvl"));
	LandTable *B_E101_R = B_E101_R_Info->getlandtable();
	B_E101_R->TexList = (NJS_TEXLIST*)0x16B460C;
	LandTableArray[80] = B_E101_R;
}

void LoadLevelFiles_B_E101()
{
	CheckAndUnloadLevelFiles();
	B_E101_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_E101\\0.sa1lvl"));
	LandTable *B_E101 = B_E101_Info->getlandtable();
	B_E101->TexList = &texlist_e101;
	LandTableArray[72] = B_E101;
}

void Chaos0_Init()
{
	ReplaceBIN("PL_G0B", "PL_G0X");
	ReplaceBIN_DC("SET1500S");
	ReplacePVM("LM_CHAOS0");
	ReplacePVM("CHAOS0");
	ReplacePVM("CHAOS0_EFFECT");
	ReplacePVM("CHAOS0_OBJECT");
	WriteData<1>((char*)0x54932B, 0x08); //Police car lights blending mode
	WriteData<1>((char*)0x7AD16D, 0x08); //Chaos 0 puddle mark blending mode
	___BOSSCHAOS0_TEXLISTS[2] = &texlist_chaos0;
	___BOSSCHAOS0_TEXLISTS[3] = &chaos0_object;
	___BOSSCHAOS0_OBJECTS[0]->child->child->child->child->sibling->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	___BOSSCHAOS0_OBJECTS[0]->child->child->child->child->sibling->child->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	___BOSSCHAOS0_OBJECTS[0]->child->child->child->child->sibling->child->sibling->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	___BOSSCHAOS0_OBJECTS[0]->child->child->child->sibling->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	___BOSSCHAOS0_OBJECTS[0]->child->child->sibling->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	___BOSSCHAOS0_OBJECTS[5]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	___BOSSCHAOS0_OBJECTS[6]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	___BOSSCHAOS0_OBJECTS[7]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	___BOSSCHAOS0_OBJECTS[8]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	___BOSSCHAOS0_OBJECTS[9]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	___BOSSCHAOS0_OBJECTS[10]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	___BOSSCHAOS0_OBJECTS[10]->child->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	___BOSSCHAOS0_OBJECTS[10]->child->sibling->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	___BOSSCHAOS0_OBJECTS[15]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	___BOSSCHAOS0_OBJECTS[16]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	___BOSSCHAOS0_OBJECTS[17]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	___BOSSCHAOS0_OBJECTS[18]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	___BOSSCHAOS0_OBJECTS[18]->child->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	___BOSSCHAOS0_OBJECTS[20]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	___BOSSCHAOS0_OBJECTS[21]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	___BOSSCHAOS0_OBJECTS[22]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	___BOSSCHAOS0_OBJECTS[22]->child->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	___BOSSCHAOS0_OBJECTS[22]->child->sibling->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	___BOSSCHAOS0_OBJECTS[28]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	___BOSSCHAOS0_OBJECTS[29]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	___BOSSCHAOS0_OBJECTS[30]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	___BOSSCHAOS0_OBJECTS[31]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	___BOSSCHAOS0_OBJECTS[31]->child->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	___BOSSCHAOS0_OBJECTS[33]->child->child->sibling->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	___BOSSCHAOS0_ACTIONS[17]->object = &object_0005825C;
	___BOSSCHAOS0_ACTIONS[18]->object = &object_0005D234;
	___BOSSCHAOS0_ACTIONS[18]->motion = &animation_0004CEA0;
	WriteCall((void*)0x0054968E, FixChaos0Car);
	//Chaos 0
	((NJS_OBJECT*)0x02C65CF8)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x02C5DD18)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x02C5E100)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x02C5E36C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x02C5F12C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x02C5EEBC)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x02C5EB8C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x02C66B10)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x02C5B614)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x02C5B884)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x02C5C798)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x02C5C1F4)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x02C5BF00)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x02C5A800)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x02C5AAF4)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x02C5B098)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x02C5A184)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x02C59F14)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x02C600A4)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x02C603D4)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x02C60644)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x02C5F884)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x02C5F618)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	//Spotlight hook
	WriteCall((void*)0x545DA3, Chaos0SpotlightHook);
}

void Chaos2_Init()
{
	ReplaceBIN_DC("SET1600S");
	ReplacePVM("CHAOS2");
	ReplacePVM("LM_CHAOS2");
	ReplacePVM("CHAOS2_BARRIER");
	ReplacePVM("CHAOS2_EFFECT");
	ReplacePVM("CHAOS2_OBJECT");
	ResizeTextureList((NJS_TEXLIST*)0x117C76C, textures_chaos2);
	((NJS_MATERIAL*)0x0117E8A0)->attrflags |= NJD_FLAG_IGNORE_LIGHT; //Top light in Chaos 2
	WriteCall((void*)0x0054AC30, FixChaos2Columns);
	*(NJS_MODEL_SADX*)0x11863C0 = attach_00D863C0; //Chaos 2 column model
	//Chaos 2
	((NJS_MATERIAL*)0x011835E8)->attrflags |= NJD_FLAG_IGNORE_LIGHT; //Chaos2 table
	((NJS_OBJECT*)0x0114B918)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
	((NJS_OBJECT*)0x011339EC)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2; //Chaos2 small ball
	((NJS_OBJECT*)0x01139274)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2; //Chaos2 ball
	((NJS_OBJECT*)0x0113F81C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2; //Chaos2 ball
	((NJS_OBJECT*)0x0113328C)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
	((NJS_OBJECT*)0x01132A50)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
	((NJS_OBJECT*)0x011326E4)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
	((NJS_OBJECT*)0x011324A0)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
	((NJS_OBJECT*)0x01132074)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
	((NJS_OBJECT*)0x0113328C)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
	((NJS_OBJECT*)0x01131E78)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
	((NJS_OBJECT*)0x0113328C)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
	((NJS_OBJECT*)0x01131980)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
	((NJS_OBJECT*)0x0113328C)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
	((NJS_OBJECT*)0x01131614)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
	((NJS_OBJECT*)0x0113328C)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
	((NJS_OBJECT*)0x011313D0)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
	((NJS_OBJECT*)0x0113328C)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
	((NJS_OBJECT*)0x01130FA4)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
	((NJS_OBJECT*)0x0113091C)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
	((NJS_OBJECT*)0x01130DA8)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
	((NJS_OBJECT*)0x0112F1A8)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
	((NJS_OBJECT*)0x0112ECD4)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
	((NJS_OBJECT*)0x0112E09C)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
	((NJS_OBJECT*)0x0112B584)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
	((NJS_OBJECT*)0x0112ACC0)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
	((NJS_OBJECT*)0x0112A6E8)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
	((NJS_OBJECT*)0x0112A214)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
	((NJS_OBJECT*)0x011295DC)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
	((NJS_OBJECT*)0x01126AC4)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
	((NJS_OBJECT*)0x0112A6E8)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
	((NJS_OBJECT*)0x01126200)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
	((NJS_OBJECT*)0x01125C60)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
	((NJS_OBJECT*)0x01121EE4)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
	for (unsigned int i = 0; i < 3; i++)
	{
		Chaos2Fog[i].Color = 0xFF000000;
		Chaos2Fog[i].Layer = 700.0f;
		Chaos2Fog[i].Distance = 1700.0f;
		Chaos2Fog[i].Toggle = 0;
	}
}

void Chaos4_Init()
{
	ReplaceBIN_DC("SET1700S");
	ReplacePVM("CHAOS4_COMMON");
	ReplacePVM("CHAOS4_HASHIRA");
	ReplacePVM("CHAOS4_KAMA");
	ReplacePVM("CHAOS4_NUMA");
	ReplacePVM("CHAOS4_OBJECT");
	ReplacePVM("CHAOS4_SHIBUKI");
	ReplacePVM("CHAOS4_TIKEI");
	ReplacePVM("CHAOS4_WAVE");
	ResizeTextureList(&CHAOS4_OBJECT_TEXLIST, 6);
	*(NJS_OBJECT*)0x11C4B90 = object_000425F8; // Chaos4 swamp water
	WriteData<1>((char*)0x00555B3F, 0x08); //Chaos 4 bubble blending mode SA_SRC instead of SA_ONE
	ResizeTextureList((NJS_TEXLIST*)0x118FF08, textures_chaos4);
	WriteJump((void*)0x550D10, Chaos4Skybox);
	((NJS_MATERIAL*)0x011E2C00)->attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Lilypad in Chaos 4
	((NJS_MATERIAL*)0x011E2C14)->attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Lilypad in Chaos 4
	//Chaos 4
	((NJS_OBJECT*)0x011A652C)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4 something?
	((NJS_OBJECT*)0x011C1C24)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2; //Chaos4 ball
	((NJS_OBJECT*)0x011EC85C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2; //Chaos4 ball
	((NJS_OBJECT*)0x0119E1A4)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
	((NJS_OBJECT*)0x0119CFF8)->basicdxmodel->mats[1].diffuse.color = 0x65B2B2B2; //Chaos4
	((NJS_OBJECT*)0x01199FDC)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
	((NJS_OBJECT*)0x01198F18)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
	((NJS_OBJECT*)0x01198694)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
	((NJS_OBJECT*)0x01197FFC)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
	((NJS_OBJECT*)0x01196F44)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
	((NJS_OBJECT*)0x01194B34)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
	((NJS_OBJECT*)0x01194294)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
	((NJS_OBJECT*)0x01193EAC)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
	((NJS_OBJECT*)0x01193B18)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
	((NJS_OBJECT*)0x01192014)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
	((NJS_OBJECT*)0x01191764)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
	((NJS_OBJECT*)0x011913AC)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
	((NJS_OBJECT*)0x01191018)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
	WriteJump((void*)0x556420, Chaos4Kama); //Chaos 4 attack effect fix
	WriteCall((void*)0x5539E6, SetMaterial_Chaos4Wave); //Make Chaos 4 wave visible
	((NJS_MATERIAL*)0x11C7BEC)->attr_texId = 0; //Fix Chaos 4 wave texture ID
	((NJS_MATERIAL*)0x11C0028)->diffuse.color = 0xFFFFFFFF; //Fix Chaos 4 attack material colors
	((NJS_MATERIAL*)0x11C07B0)->diffuse.color = 0xFFFFFFFF; //Fix Chaos 4 attack material colors
	((NJS_MATERIAL*)0x11BFC04)->diffuse.color = 0xFFFFFFFF; //Fix Chaos 4 attack material colors
	if (DLLLoaded_Lantern)
	{
		material_register_ptr(Chaos4Materials, LengthOfArray(Chaos4Materials), &Chaos4NPCFunction);
	}
	for (unsigned int i = 0; i < 3; i++)
	{
		Chaos4Fog[i].Color = 0xFF000000;
		Chaos4Fog[i].Layer = 1.0f;
		Chaos4Fog[i].Distance = 2000.0f;
		Chaos4Fog[i].Toggle = 0;
	}
}

void Chaos6_Init()
{
	ReplaceBIN_DC("SET1800B");
	ReplaceBIN_DC("SET1800S");
	ReplaceBIN_DC("SET1801K");
	ReplacePVM("LM_CHAOS6");
	ReplacePVM("LM_CHAOS6_2");
	ReplacePVM("CHAOS6");
	ReplacePVM("CHAOS6_BG");
	ReplacePVM("CHAOS6_EFFECT");
	ReplacePVM("CHAOS6_EGGMAN");
	ReplacePVM("CHAOS6_EISEI");
	ReplacePVM("CHAOS6_OBJECT");
	ResizeTextureList((NJS_TEXLIST*)0x121FF28, textures_chaos6);
	ResizeTextureList((NJS_TEXLIST*)0x11F04A0, textures_chaos6_2);
	WriteJump((void*)0x556FD0, Chaos6SkyboxBottom);
	WriteJump((void*)0x556F20, Chaos6SkyboxMain);
	((NJS_ACTION*)0x134C56C)->motion = &Chaos6Animation3; //Fix flickering stuff in Chaos 6' walking animation
	if (DLLLoaded_Lantern)
	{
		material_register_ptr(Chaos6ObjectMaterials, LengthOfArray(Chaos6ObjectMaterials), &ForceDiffuse0Specular0or1);
	}
	//Chaos 6 emeralds
	/*((NJS_MATERIAL*)0x01264A58)->diffuse.color = 0xFFB2B2B2;
	((NJS_MATERIAL*)0x01266968)->diffuse.color = 0xFFB2B2B2;
	((NJS_MATERIAL*)0x0126F6F4)->diffuse.color = 0xFFB2B2B2;
	((NJS_MATERIAL*)0x0126F970)->diffuse.color = 0xFFB2B2B2;
	((NJS_MATERIAL*)0x0126FBE8)->diffuse.color = 0xFFB2B2B2;
	((NJS_MATERIAL*)0x0126FE60)->diffuse.color = 0xFFB2B2B2;
	((NJS_MATERIAL*)0x01264A58)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_MATERIAL*)0x01266968)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_MATERIAL*)0x0126F6F4)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_MATERIAL*)0x0126F970)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_MATERIAL*)0x0126FBE8)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_MATERIAL*)0x0126FE60)->attrflags |= NJD_FLAG_IGNORE_LIGHT;*/
	for (unsigned int i = 0; i < 3; i++)
	{
		Chaos6SFog[i].Distance = 12000.0f;
		Chaos6KFog[i].Distance = 12000.0f;
		SkyBoxScale_Chaos6S[i].x = 1.0f;
		SkyBoxScale_Chaos6S[i].y = 1.0f;
		SkyBoxScale_Chaos6S[i].z = 1.0f;
		SkyBoxScale_Chaos6K[i].x = 1.0f;
		SkyBoxScale_Chaos6K[i].y = 1.0f;
		SkyBoxScale_Chaos6K[i].z = 1.0f;
		DrawDist_Chaso6S[i].Maximum = -18000.0f;
		DrawDist_Chaso6K[i].Maximum = -18000.0f;
	}
}

void PerfectChaos_Init()
{
	ReplaceBIN_DC("SET1900S");
	ReplaceBIN_DC("CAM1900S");
	ReplacePVM("CHAOS7_0");
	ReplacePVM("CHAOS7_0BREATH");
	ReplacePVM("CHAOS7_0BREATH2ND");
	ReplacePVM("CHAOS7_0DAMAGE");
	ReplacePVM("CHAOS7_0DEAD_PTCHG");
	ReplacePVM("CHAOS7_0SURFACE");
	ReplacePVM("CHAOS7_0WATEREXP");
	ReplacePVM("CHAOS7_0WEXP_PTCHG");
	ReplacePVM("LM_CHAOS7_0");
	ReplacePVM("OBJ_CHAOS7");
	ResizeTextureList((NJS_TEXLIST*)0x1494FBC, textures_chaos7);
	WriteCall((void*)0x56463B, PerfectChaosWaterfallHook);
	//Perfect Chaos tornado UVs
	WriteCall((void*)0x562D6D, PerfectChaosUVs);
	WriteCall((void*)0x00562303, TornadoFunc); //Perfect Chaos tornado fade-in
	//Perfect Chaos breath fix
	WriteData((float*)0x00566A03, 1.0f);
	//Egg Carrier 2 crash in Perfect Chaos cutscene
	WriteData((float*)0x0065D8D1, 837.418f); //X1
	WriteData((float*)0x0065D8CC, 412.38f); //Y1
	WriteData((float*)0x0065D8C7, -406.796f); //Z1
	WriteData((int*)0x0065D8E3, 65238); //XA1
	WriteData((int*)0x0065D8DE, 29421); //YA1
	WriteData((float*)0x0065D8FC, 1148.37f); //X2
	WriteData((float*)0x0065D8F7, 423.5f); //Y2
	WriteData((float*)0x0065D8F2, -325.65f); //Z2
	WriteData((int*)0x0065D912, 64083); //XA2
	WriteData((int*)0x0065D90D, 28705); //YA2
	//Perfect Chaos damage functions
	WriteJump((void*)0x5632F0, Chaos7Explosion_DisplayX);
	WriteJump((void*)0x005633C0, Chaos7Damage_DisplayX);
	//Perfect Chaos misc
	((NJS_OBJECT*)0x0248B1B4)->basicdxmodel->mats[2].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR; //Egg Carrier 2
	matlist_00F975B0[0].diffuse.color = 0xFFB2B2B2;
	matlist_00F975B0[1].diffuse.color = 0xFFB2B2B2;
	matlist_00F975B0[2].diffuse.color = 0xFFB2B2B2;
	matlist_00F98C98[0].diffuse.color = 0xFFB2B2B2;
	matlist_00F98C98[1].diffuse.color = 0xFFB2B2B2;
	matlist_00F98C98[2].diffuse.color = 0xFFB2B2B2;
	matlist_00F98C98[3].diffuse.color = 0xFFB2B2B2;
	matlist_00F98C98[4].diffuse.color = 0xFFB2B2B2;
	matlist_00F98C98[5].diffuse.color = 0xFFB2B2B2;
	for (unsigned int p = 0; p < LengthOfArray(PerfectChaosCars); p++)
	{
		PerfectChaosCars[p]->diffuse.argb.r = 0xB2;
		PerfectChaosCars[p]->diffuse.argb.g = 0xB2;
		PerfectChaosCars[p]->diffuse.argb.b = 0xB2;
	}
	for (unsigned int i = 0; i < 3; i++)
	{
		Chaos7Fog[i].Layer = -6000.0f;
		Chaos7Fog[i].Distance = -15000.0f;
		Chaos7Fog[i].Toggle = 1;
		Chaos7Fog[i].Color = 0xFF19CED3;
		DrawDist_Chaos7[i].Maximum = -6500.0;
	}
}

void RotateEggHornet(ObjectMaster *a1)
{
	sub_571AD0(a1);
	njRotateY(0, EggHornet_Rotation);
}

static void EggHornetRotationObject_r(ObjectMaster *a1);
static Trampoline EggHornetRotationObject_t(0x574CB0, 0x574CB6, EggHornetRotationObject_r);
static void __cdecl EggHornetRotationObject_r(ObjectMaster *a1)
{
	auto original = reinterpret_cast<decltype(EggHornetRotationObject_r)*>(EggHornetRotationObject_t.Target());
	original(a1);
	if (EnableEggHornet) EggHornet_RotationEnabled = true;
}

void EggHornet_RotationDisable(ObjectMaster *a1)
{
	if (EnableEggHornet) EggHornet_RotationEnabled = false;
	CheckThingButThenDeleteObject(a1);
}

void EggHornet_Init()
{
	ReplaceBIN_DC("SETEGM1S");
	ReplacePVM("EGM1");
	ReplacePVM("EGM1LAND");
	ReplacePVM("EGM1BARRIER");
	ReplacePVM("EGM1EGGMAN");
	ReplacePVM("EGM1JET");
	ReplacePVM("EGM1JETB");
	ReplacePVM("EGM1MIS");
	ReplacePVM("EGM1SORA");
	ReplacePVM("EGM1TSUCHI");
	ResizeTextureList((NJS_TEXLIST*)0x1557064, 118); //Egg Hornet level texlist
	//Egg Hornet model stuff
	((NJS_OBJECT*)0x0155AA54)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155AA54)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155AA54)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155AA54)->basicdxmodel->mats[3].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155AA54)->basicdxmodel->mats[4].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155AA54)->basicdxmodel->mats[5].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155AA54)->basicdxmodel->mats[6].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[3].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[4].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[5].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[6].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[7].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[3].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[4].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[5].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[6].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[7].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155D5D0)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT; //drills
	((NJS_OBJECT*)0x0155B9E8)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT; //drills
	((NJS_OBJECT*)0x01561A70)->basicdxmodel->mats[18].attrflags |= NJD_FLAG_IGNORE_LIGHT; //front light
	((NJS_OBJECT*)0x01561A70)->basicdxmodel->mats[8].attrflags |= NJD_FLAG_IGNORE_LIGHT; //computer
	((NJS_MATERIAL*)0x015570AC)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	for (int m = 0; m < 20; m++)
	{
		((NJS_OBJECT*)0x01561A70)->basicdxmodel->mats[m].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	}
	//*(NJS_OBJECT*)0x1561A70 = object_000104E8; //Egg Hornet model
	for (unsigned int i = 0; i < 3; i++)
	{
		DrawDist_EggHornet[i].Maximum = -12500.0;
		EggHornetFog[i].Distance = -9000.0f;
		EggHornetFog[i].Layer = -1500.0f;
		EggHornetFog[i].Toggle = 1;
		EggHornetFog[i].Color = 0xFFA0A0A0;
	}
	//Rotation stuff
	WriteCall((void*)0x574BC3, EggHornet_RotationDisable);
	WriteCall((void*)0x571F79, RotateEggHornet);
	WriteCall((void*)0x5728C4, RotateEggHornet);
}

void EggWalker_Init()
{
	ReplaceBIN_DC("SETEGM2S");
	ReplacePVM("EGM2");
	ReplacePVM("EGM2_BAKU");
	ReplacePVM("EGM2_CAR");
	ReplacePVM("EGM2_COMMON");
	ReplacePVM("EGM2_EFFECT");
	ReplacePVM("EGM2_FIRE");
	ReplacePVM("EGM2_HAMON");
	ReplacePVM("EGM2_MINE");
	ReplacePVM("EGM2_MISSILE");
	ReplacePVM("EGM2_SKY");
	ReplacePVM("EGM2_TIKEI");
	ResizeTextureList((NJS_TEXLIST*)0x15E99F8, textures_eggwalker);
	//Egg Walker
	((NJS_OBJECT*)0x162E0FC)->basicdxmodel->mats[2].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x0162E158)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	for (unsigned int i = 0; i < 3; i++)
	{
		EggWalkerFog[i].Toggle = 0;
	}
}

void EggViper_Init()
{
	ReplaceBIN("PL_M0B", "PL_M0X");
	ReplaceBIN_DC("SETEGM3S");
	ReplacePVM("EGM3CHIKEI");
	ReplacePVM("EGM3MDL");
	ReplacePVM("EGM3SPR");
	((NJS_MATERIAL*)0x016737F0)->attrflags |= NJD_FLAG_IGNORE_LIGHT; //Dust effect at the bottom of the room
	ResizeTextureList((NJS_TEXLIST*)0x167E5CC, textures_eggviper);
	*(NJS_OBJECT*)0x01669DA8 = object_000434A0; //part of Egg Viper model
	for (unsigned int i = 0; i < 3; i++)
	{
		EggViperFog[i].Toggle = 0;
	}
}

void E101_Init()
{
	ReplaceBIN_DC("SETE101E");
	ReplacePVM("E101");
	ReplacePVM("E101_TIKEI");
	ResizeTextureList((NJS_TEXLIST*)0x14FBFB4, 77);
	//E101 rocket
	((NJS_MATERIAL*)0x014DE5D0)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_MATERIAL*)0x014DE5E4)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_MATERIAL*)0x014DE5F8)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_MATERIAL*)0x014DE60C)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
}

void Zero_Init()
{
	ReplaceBIN_DC("SETZEROA");
	ReplaceBIN_DC("SETZEROS");
	ReplacePVM("EROBO");
	ReplaceGeneric("EROBO_GC.NB", "EROBO_DC.NB");
	WriteCall((void*)0x0058BC56, Zero_FVFShit);
	WriteData((float*)0x58752C, 0.8f); //Zero constant material alpha
	*(NJS_OBJECT*)0x00991268 = object_00591268; //Zero main and cutscene model
	WriteCall((void*)0x585448, LoadBossECOceanPVM);
	WriteJump(Zero_OceanDraw, ZeroE101R_OceanDraw_r);
	ResizeTextureList((NJS_TEXLIST*)0x16B460C, 76); //Zero/E101R texlist
	for (unsigned int i = 0; i < 3; i++)
	{
		DrawDist_Zero[i].Maximum = -9500.0f;
		Fog_Zero[i].Toggle = 0;
	}
}

void E101R_Init()
{
	ReplaceBIN_DC("SETE101RE");
	ReplacePVM("E101R");
	ReplacePVM("E101R_BG");
	ReplacePVM("E101R_TIKEI");
	*(NJS_OBJECT *)0x02DA8664 = object_029A8664; //E101R model in cutscenes
	//E-101R fixes
	ShadowBlob_Model.basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
	WriteCall((void*)0x004CC82E, E101R_RenderParticle);
	WriteCall((void*)0x0056FD59, E101R_FVFShit);
	WriteCall((void*)0x00568F59, E101R_DrawSkybox);
	WriteCall((void*)0x00571581, E101R_DrawExplosion);
	WriteCall((void*)0x005715AE, E101R_DrawExplosion);
	WriteCall((void*)0x0056909F, E101R_SkyboxHook);
	WriteCall((void*)0x00569008, E101R_SkyboxHook);
	WriteCall((void*)0x005709CA, E101R_ArmsHook);
	WriteData<1>((char*)0x00568D20, 0xC3u); //E101R clip function
	WriteCall((void*)0x0057069D, E101R_AfterImageMaterial); //E10R afterimage
	WriteCall((void*)0x00570784, E101R_AfterImageConstantAttr); //E10R afterimage
	WriteCall((void*)0x0057072A, E101R_AfterImageQueue);
	WriteCall((void*)0x0056B07D, E101REffect_Orange); //Set arm effect to orange and render
	WriteCall((void*)0x0056B096, E101REffect_Blue); //Set arm effect to blue and render
	WriteCall((void*)0x0057098A, E101RRenderAfterEffect); //After effect on E101R's arms
	WriteCall((void*)0x00570952, E101R_AfterImageArmConstantAttr);
	WriteCall((void*)0x569078, LoadBossECOceanPVM);
	WriteJump(E101Mk2_OceanDraw, ZeroE101R_OceanDraw_r);
	ResizeTextureList((NJS_TEXLIST*)0x16B460C, 76); //Zero/E101R texlist
	for (unsigned int i = 0; i < 3; i++)
	{
		Fog_E101R[i].Toggle = 0;
		DrawDist_E101R[i].Maximum = -9500.0f;
	}
}

void Bosses_OnFrame()
{
	//Egg Viper effect
	if (DLLLoaded_Lantern)
	{

		//Hopefully disable all this before it gets ugly
		if (EggViper_blendfactor != 0 && CurrentLevel != 22)
		{
			EggViper_blendfactor = 0;
			EggViper_EffectMode = 0;
			set_shader_flags_ptr(ShaderFlags_Blend, false);
		}
		if (GameMode == GameModes_Menu || GameMode == GameModes_CharSel)
		{
			EggViper_blendfactor_max = 0.005f;
			EggViper_blendfactor_min = 0.005f;
			EggViper_Timer = 0;
			EggViper_EffectMode = 0;
			EggViper_blendfactor = 0;
			EggViper_blenddirection = 1;
			set_shader_flags_ptr(ShaderFlags_Blend, false);
			EggViperByteThing = 0;
		}
		if (CurrentLevel == 22)
		{
			if (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21 || CurrentLevel != 22)
			{
				EggViper_blendfactor_max = 0.005f;
				EggViper_blendfactor_min = 0.005f;
				EggViper_Timer = 0;
				EggViper_EffectMode = 0;
				EggViper_blendfactor = 0;
				EggViper_blenddirection = 1;
				EggViperByteThing = 0;
			}
			if (EggViperHitCount == 7) EggViperHitCount_Old = 7;
			//activate a brief flash
			if (EggViper_Timer <= 0 && EggViperHitCount < EggViperHitCount_Old && EggViperHitCount > 0)
			{
				EggViper_blendfactor_max = 0.005f;
				EggViper_blendfactor_min = 0.005f;
				EggViper_Timer = 200 / FramerateSetting;
				EggViper_EffectMode = 1;
				EggViper_blendfactor = 0;
				EggViper_blenddirection = 1;
				EggViperHitCount_Old = EggViperHitCount;
			}
			//activate a longer flash
			if (EggViper_Timer <= 0 && EggViper_EffectMode == 0 && EggViperHitCount == EggViperHitCount_Old && EVEffect == 1)
			{
				EggViper_blendfactor_max = 0.005f;
				EggViper_blendfactor_min = 0.005f;
				EggViper_Timer = 200 / FramerateSetting;
				EggViper_EffectMode = 2;
				if (EggViper_blendfactor == 0) EggViper_blenddirection = 1;
			}
			//activate a brief permanent flash
			if (EggViper_EffectMode == 0 && EggViperHitCount == EggViperHitCount_Old && EVEffect == 0 && EggViperByteThing == 1)
			{
				EggViper_EffectMode = 5;
				if (EggViper_blendfactor == 0) EggViper_blenddirection = 1;
			}
			//activate permanent flashing
			if (EggViper_Timer <= 0 && EggViperHitCount < EggViperHitCount_Old && EggViperHitCount <= 0)
			{
				EggViper_Timer = 1040 / FramerateSetting;
				EggViper_EffectMode = 3;
				if (EggViper_blendfactor == 0) EggViper_blenddirection = 1;
				EggViperHitCount_Old = EggViperHitCount;
			}
			//brief flash
			if (EggViper_EffectMode == 1)
			{
				if (GameState != 16)
				{
					if (EggViper_blenddirection == 1 && EggViper_blendfactor < 1.0f) EggViper_blendfactor = EggViper_blendfactor + 0.08f*FramerateSetting;
					if (EggViper_blenddirection == -1 && EggViper_blendfactor > 0.0f) EggViper_blendfactor = EggViper_blendfactor - 0.08f*FramerateSetting;
				}
				if (EggViper_blendfactor >= 1.0f) EggViper_blenddirection = -1;
				if (EggViper_blenddirection == -1 && EggViper_blendfactor <= 0.0f)
				{
					EggViper_blendfactor = 0;
					EggViper_EffectMode = 0;
					set_shader_flags_ptr(ShaderFlags_Blend, false);
				}
			}
			//longer flash
			if (EggViper_EffectMode == 2)
			{
				if (GameState != 16 && EggViper_blenddirection == 1 && EggViper_blendfactor < 1.0f) EggViper_blendfactor = EggViper_blendfactor + 0.028f*FramerateSetting;
				if (EggViper_blendfactor >= 1.0f) EggViper_blenddirection = -1;
				if (GameState != 16 && EggViper_blenddirection == -1 && EggViper_blendfactor > 0.0f) EggViper_blendfactor = EggViper_blendfactor - 0.028f*FramerateSetting;
				if (EggViper_blenddirection == -1 && EggViper_blendfactor <= 0.0f)
				{
					EggViper_blendfactor = 0;
					EggViper_EffectMode = 0;
					set_shader_flags_ptr(ShaderFlags_Blend, false);
				}
			}
			//permanent flash
			if (EggViper_EffectMode == 3)
			{
				if (EggViper_Timer <= 0)
				{
					EggViper_blenddirection = 1;
					EggViper_EffectMode = 4;
				}
				if (EggViper_blendfactor >= 1.0f) EggViper_blenddirection = -1;
				if (EggViper_blendfactor <= 0.5f) EggViper_blenddirection = 1;
				if (GameState != 16)
				{
					if (EggViper_blenddirection == 1 && EggViper_blendfactor < 1.0f) EggViper_blendfactor = EggViper_blendfactor + 0.08f*FramerateSetting;
					if (EggViper_blenddirection == -1 && EggViper_blendfactor > 0.0f) EggViper_blendfactor = EggViper_blendfactor - 0.08f*FramerateSetting;
				}
			}
			//final flash
			if (EggViper_EffectMode == 4)
			{
				if (EggViper_blendfactor < 1.0f) EggViper_blendfactor = EggViper_blendfactor + 0.08f*FramerateSetting;
			}
			//fast flickering within an increasing range
			if (EggViper_EffectMode == 5)
			{
				if (EggViperByteThing == 0)
				{
					EggViper_blendfactor_max = 0.005f;
					EggViper_blendfactor_min = 0.001f;
					EggViper_blendfactor = 0.0f;
					EggViper_blenddirection = 1;
					EggViper_EffectMode = 0;
					set_blend_factor_ptr(0);
				}
				if (EggViper_blendfactor >= EggViper_blendfactor_max)
				{
					set_diffuse_blend_ptr(0, 3);
					EggViper_blenddirection = -1;
					if (EggViper_blendfactor_max < 1.0f)
					{
						EggViper_blendfactor_max = EggViper_blendfactor_max + 0.015f;
					}
				}
				if (EggViper_blendfactor <= EggViper_blendfactor_min)
				{
					EggViper_blenddirection = 1;
					set_diffuse_blend_ptr(0, 6);
				}
				if (GameState != 16)
				{
					if (EggViper_blenddirection == 1 && EggViper_blendfactor < EggViper_blendfactor_max) EggViper_blendfactor = EggViper_blendfactor + (EggViper_blendfactor_max / 2.0f)*FramerateSetting;
					if (EggViper_blenddirection == -1 && EggViper_blendfactor > EggViper_blendfactor_min) EggViper_blendfactor = EggViper_blendfactor - (EggViper_blendfactor_max / 2.0f)*FramerateSetting;
				}
			}
			//subtract timer
			if (GameState != 16 && EggViper_Timer > 0) EggViper_Timer--;
			//general stuff
			if (EggViper_EffectMode != 0)
			{
				set_shader_flags_ptr(ShaderFlags_Blend, true);
				if (EggViper_EffectMode != 5) set_diffuse_blend_ptr(0, 5);
				set_specular_blend_ptr(0, 0);
				set_blend_factor_ptr(EggViper_blendfactor);
			}
			else
			{
				set_shader_flags_ptr(ShaderFlags_Blend, false);
			}
		}
	}
	//Super stupid hax to make Perfect Chaos' tornadoes fade in
	if (EnablePerfectChaos)
	{
		if (byte_3C5A7ED != 11)
		{
			if (byte_3C5A7EF == 0) TornadoTrigger = 0;
			if (byte_3C5A7EF == 3)
			{
				TornadoTrigger = 1;
				TornadoAlpha = 0;
			}
			if (TornadoTrigger == 1 && byte_3C5A7EF != 3) TornadoTrigger = 2;
			if (TornadoTrigger == 2) TornadoAlpha = TornadoAlpha + 0.04f;
			if (TornadoAlpha >= 1.0f) TornadoTrigger = 0;
		}
		else
		{
			if (TornadoAlpha > 0.0f) TornadoTrigger = 3;
			if (TornadoTrigger == 3) TornadoAlpha = TornadoAlpha - 0.01f * FramerateSetting;
			if (TornadoTrigger == 3 && TornadoAlpha <= 0.01f)
			{
				TornadoTrigger = 4;
				TornadoAlpha = 0.0f;
			}
		}
	}
	//Egg Hornet rotation
	if (EnableEggHornet && CurrentLevel == LevelIDs_EggHornet && !IsGamePaused())
	{
		if (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21)
		{
			EggHornet_Rotation = 0;
			EggHornet_RotationDirection = 1;
			EggHornet_RotationEnabled = false;
		}
		if (EggHornet_RotationEnabled)
		{
			if (EggHornet_RotationDirection == 1) EggHornet_Rotation = EggHornet_Rotation + 546 * FramerateSetting;
			if (EggHornet_RotationDirection == -1) EggHornet_Rotation = EggHornet_Rotation - 546 * FramerateSetting;
			if (EggHornet_Rotation > 1820) EggHornet_RotationDirection = -1;
			if (EggHornet_Rotation < -1820) EggHornet_RotationDirection = 1;
		}
	}
}