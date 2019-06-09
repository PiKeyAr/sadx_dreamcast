#include "stdafx.h"
#include "EggHornet_Water.h"
#include "ZeroE101R_Water.h"
#include "E101Kai_Model.h"
#include "LightingArrays.h"
#include "ERobo.h"


NJS_TEXNAME textures_egm1land[118];
NJS_TEXLIST texlist_egm1land = { arrayptrandlength(textures_egm1land) };

NJS_TEXNAME textures_eggwalker[231];
NJS_TEXLIST texlist_eggwalker = { arrayptrandlength(textures_eggwalker) };

NJS_TEXNAME textures_eggviper[45];
NJS_TEXLIST texlist_eggviper = { arrayptrandlength(textures_eggviper) };

NJS_TEXNAME textures_e101[77];
NJS_TEXLIST texlist_e101 = { arrayptrandlength(textures_e101) };


DataArray(PVMEntry, EggHornetObjectTextures, 0x156F6B0, 15);
DataArray(FogData, EggHornetFog, 0x01556B34, 3);
DataArray(FogData, EggWalkerFog, 0x015E87F4, 3);
DataArray(FogData, EggViperFog, 0x0165D334, 3);
DataArray(FogData, Fog_E101R, 0x015225F0, 3);
DataArray(FogData, Fog_Zero, 0x016B4DB0, 3);
DataArray(DrawDistance, DrawDist_EggHornet, 0x01556B1C, 3);
DataArray(DrawDistance, DrawDist_E101R, 0x015225D8, 3);
DataArray(DrawDistance, DrawDist_Zero, 0x016B4D98, 3);
DataArray(PVMEntry, EGGVIPER_TEXLISTS, 0x165D498, 11);

DataPointer(unsigned char, byte_03C5A7EF, 0x03C5A7EF);
DataPointer(float, dword_3C6A998, 0x3C6A998);


DataPointer(int, EVEffect, 0x3C6E1EC);


DataPointer(char, EggViperByteThing, 0x03C6E178);
DataPointer(float, EggViperHitCount, 0x03C58158);
FunctionPointer(void, sub_571AD0, (ObjectMaster *a1), 0x571AD0);
FunctionPointer(void, sub_5632F0, (ObjectMaster *a1), 0x5632F0);
FunctionPointer(void, sub_563370, (ObjectMaster *a1), 0x563370);
FunctionPointer(void, sub_570900, (int a1, int a2), 0x570900);
FunctionPointer(void, sub_407BB0, (NJS_MODEL_SADX *a1, QueuedModelFlagsB queueFlags), 0x407BB0);
FunctionPointer(void, sub_568EC0, (EntityData1 *a1), 0x568EC0);
FunctionPointer(void, sub_4CACF0, (NJS_VECTOR *a1, float a2), 0x4CACF0);
FunctionPointer(void, sub_77E940, (FVFStruct_H_B *a1, signed int count, int a3), 0x77E940);
FunctionPointer(void, sub_40A280, (NJS_OBJECT *a1), 0x40A280);
FunctionPointer(void, sub_407A00, (NJS_MODEL_SADX *model, float a2), 0x407A00);

static float EggViper_blendfactor = 0.0f;
static int EggViper_blenddirection = 1;
static int EggViper_EffectMode = 0;
static int EggViper_Timer = 0;
static float EggViper_blendfactor_max = 0.005f;
static float EggViper_blendfactor_min = 0.005f;
static unsigned char EggHornetTrigger = 0;

static float EggViperHitCount_Old = 0.0f;
static int EggHornetOceanAnimationSA1 = 0;
static int EggHornet_Rotation = 0;
static int EggHornet_RotationDirection = 1;
static bool EggHornet_RotationEnabled = false;
static int E101REffectMode = 1;
static float e101rframe = 0;
static int e101rsea_dc = 4;

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

void Bosses_Init()
{
	ReplacePVM("CHAOS1");
	ReplacePVM("CHAOS_BRAINFRAME");
	ReplacePVM("CHAOS_EFFECT");
	ReplacePVM("CHAOS_SURFACE");
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
	((NJS_MATERIAL*)0x02D64FD8)->exponent = 11; //Chaos 1/4 puddle
	((NJS_MATERIAL*)0x038D936C)->attrflags &= ~NJD_FLAG_USE_ENV; //Chaos 0/2/6 puddle
	((NJS_MATERIAL*)0x038D936C)->exponent = 11; //Chaos 0/2/6 puddle
	ICM0001_3_TEXLISTS[0].Name = "ICM0001_5"; //Higher quality background in Sonic story
	//Generic fixes for Chaos materials
	for (unsigned int i = 0; i < LengthOfArray(ChaosMaterials); i++)
	{
		RemoveMaterialColors(ChaosMaterials[i]);
	}
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

void LoadLevelFiles_B_EGM1()
{
	CheckAndUnloadLevelFiles();
	B_EGM1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_EGM1\\0.sa1lvl"));
	LandTable *B_EGM1 = B_EGM1_Info->getlandtable();
	RemoveMaterialColors_Landtable(B_EGM1);
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
	RemoveMaterialColors_Landtable(B_EGM2);
	B_EGM2->TexList = &texlist_eggwalker;
	LandTableArray[48] = B_EGM2;
}

void LoadLevelFiles_B_EGM3()
{
	CheckAndUnloadLevelFiles();
	B_EGM3_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_EGM3\\0.sa1lvl"));
	LandTable *B_EGM3 = B_EGM3_Info->getlandtable();
	RemoveMaterialColors_Landtable(B_EGM3);
	B_EGM3->TexList = &texlist_eggviper;
	LandTableArray[56] = B_EGM3;
}

void LoadLevelFiles_B_ROBO()
{
	CheckAndUnloadLevelFiles();
	B_ROBO_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_ROBO\\0.sa1lvl"));
	LandTable *B_ROBO = B_ROBO_Info->getlandtable();
	RemoveMaterialColors_Landtable(B_ROBO);
	B_ROBO->TexList = (NJS_TEXLIST*)0x16B460C;
	LandTableArray[64] = B_ROBO;
}

void LoadLevelFiles_B_E101_R()
{
	CheckAndUnloadLevelFiles();
	B_E101_R_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_E101_R\\0.sa1lvl"));
	LandTable *B_E101_R = B_E101_R_Info->getlandtable();
	RemoveMaterialColors_Landtable(B_E101_R);
	B_E101_R->TexList = (NJS_TEXLIST*)0x16B460C;
	LandTableArray[80] = B_E101_R;
}

void LoadLevelFiles_B_E101()
{
	CheckAndUnloadLevelFiles();
	B_E101_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_E101\\0.sa1lvl"));
	LandTable *B_E101 = B_E101_Info->getlandtable();
	RemoveMaterialColors_Landtable(B_E101);
	B_E101->TexList = &texlist_e101;
	LandTableArray[72] = B_E101;
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
	*(NJS_OBJECT*)0x01669DA8 = *LoadModel("system\\data\\B_EGM3\\Models\\000434A0.sa1mdl", false); //part of Egg Viper model
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