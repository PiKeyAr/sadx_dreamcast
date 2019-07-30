#include "stdafx.h"
//TODO: Figure out why the rockets are yellow
DataArray(FogData, Fog_E101R, 0x015225F0, 3);
DataArray(DrawDistance, DrawDist_E101R, 0x015225D8, 3);

//#include "E101R.h"

FunctionPointer(void, sub_570900, (int a1, int a2), 0x570900);
FunctionPointer(void, sub_568EC0, (EntityData1 *a1), 0x568EC0);
FunctionPointer(void, sub_77E940, (FVFStruct_H_B *a1, signed int count, int a3), 0x77E940);
FunctionPointer(void, E101RParticle_Display, (void *a1), 0x56F750);
FunctionPointer(void, E101RSmallBalls_Display, (void *a1), 0x4CC040);

static int E101REffectMode = 1;
static int e101rsea_dc = 4;

NJS_OBJECT *E101RBossOcean = nullptr;

static void E101RHurtExplosion_r(void *a1);
static Trampoline E101RHurtExplosion_t(0x4CC880, 0x4CC886, E101RHurtExplosion_r);
static void __cdecl E101RHurtExplosion_r(void *a1)
{
	auto original = reinterpret_cast<decltype(E101RHurtExplosion_r)*>(E101RHurtExplosion_t.Target());
	if (EnableZeroE101R) DrawModelCallback_Queue(original, a1, 22048.0f, QueuedModelFlagsB_SomeTextureThing);
	else original(a1);
}

void E101R_Particle_Show(ObjectMaster *a1)
{
	DrawModelCallback_Queue(E101RParticle_Display, a1, 22048.0f, QueuedModelFlagsB_SomeTextureThing);
}

void E101R_SmallBalls_Show(ObjectMaster *a1)
{
	DrawModelCallback_Queue(E101RSmallBalls_Display, a1, 22048.0f, QueuedModelFlagsB_SomeTextureThing);
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

void E101R_AfterImageArmConstantAttr(Uint32 and_attr, Uint32 or_attr)
{
	njSetConstantAttr(0x9999999u, 0x24100000u);
	AddConstantAttr(0, NJD_FLAG_IGNORE_LIGHT | NJD_FLAG_USE_TEXTURE);
}

void E101R_AfterImageQueue(NJS_ACTION *anim, float a2, int a3)
{
	DrawQueueDepthBias = 2000.0f;
	njAction_Queue(anim, a2, (QueuedModelFlagsB)0);
	DrawQueueDepthBias = 0;
}

void E101R_ArmsHook(NJS_OBJECT *a1, QueuedModelFlagsB a2)
{
	DrawQueueDepthBias = 2000.0f;
	ProcessModelNode(a1, a2, GlobalModelNodeScale);
	DrawQueueDepthBias = 0;
}

void E101R_FVFShit(FVFStruct_H_B *a1, signed int count, int a3)
{
	njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
	Direct3D_DrawFVF_H(a1, count);
	njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
}

void E101R_DrawExplosion(NJS_OBJECT *a1, QueuedModelFlagsB a2)
{
	DrawQueueDepthBias = 20000.0f;
	ProcessModelNode_A_WrapperB(a1, QueuedModelFlagsB_SomeTextureThing);
	DrawQueueDepthBias = 0.0f;
}

void __cdecl E101ROceanHook(OceanData *a1)
{
	if (!SADXWater_EggCarrier)
	{
		if (!MissedFrames)
		{
			DisableFog();
			njSetTexture(&EC_SEA_TEXLIST);
			njPushMatrix(0);
			njTranslate(0, Camera_Data1->Position.x, 0, Camera_Data1->Position.z);
			ProcessModelNode(E101RBossOcean, QueuedModelFlagsB_EnableZWrite, 1.0f);
			njPopMatrix(1u);
		}
	}
	else EggCarrier_OceanDraw_SADXStyle(a1);
}

void FixFVFZWrite(FVFStruct_H_B *a1, signed int count, int a3)
{
	Direct3D_EnableZWrite(0);
	SetOceanAlphaModeAndFVF(a3);
	Direct3D_DrawFVF_H(a1, count);
	Direct3D_EnableZWrite(1u);
}

void RenderE101R_Rocket(NJS_OBJECT *a1, NJS_MOTION *a2, float a3)
{
	SetMaterialAndSpriteColor_Float(1.0f, 1.0f, 1.0f, 1.0f);
	njAction_QueueObject(a1, a2, a3);
	ClampGlobalColorThing_Thing();
}

void UnloadLevelFiles_B_E101_R()
{
	delete B_E101_R_Info;
	B_E101_R_Info = nullptr;
}

void E101R_Init()
{
	CheckAndUnloadLevelFiles();
	B_E101_R_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_E101_R\\0.sa1lvl"));
	LandTable* B_E101_R = B_E101_R_Info->getlandtable(); //&landtable_00000180;
	RemoveMaterialColors_Landtable(B_E101_R);
	B_E101_R->TexList = (NJS_TEXLIST*)0x16B460C;
	LandTableArray[80] = B_E101_R;
	if (!ModelsLoaded_B_E101R)
	{
		if (!Use1999SetFiles)
		{
			ReplaceBIN_DC("SETE101RE");
		}
		else
		{
			ReplaceBIN_1999("SETE101RE");
		}
		ReplacePVM("E101R");
		ReplacePVM("E101R_BG");
		if (!ModelsLoaded_B_ROBO) ReplacePVM("E101R_TIKEI");
		ReplaceGeneric("E101R_GC.NB", "E101R_DC.NB");
		//WriteCall((void*)0x570DB1, RenderE101R_Rocket); //Idk yet
		WriteCall((void*)0x56F839, E101R_Particle_Show);
		WriteCall((void*)0x4CC13F, E101R_SmallBalls_Show);
		WriteCall((void*)0x4CC1C7, E101R_SmallBalls_Show);
		//E-101R fixes
		ShadowBlob_Model.basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		WriteCall((void*)0x4CC82E, FixFVFZWrite);
		WriteCall((void*)0x0056FD59, E101R_FVFShit);
		WriteCall((void*)0x00571581, E101R_DrawExplosion);
		WriteCall((void*)0x005715AE, E101R_DrawExplosion);
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
		WriteJump(E101Mk2_OceanDraw, E101ROceanHook);
		//Ocean model
		if (!SADXWater_EggCarrier)
		{
			E101RBossOcean = LoadModel("system\\data\\B_E101_R\\Models\\00007C50.sa1mdl", false);
			E101RBossOcean->basicdxmodel->mats[0].attr_texId = 4;
			E101RBossOcean->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			E101RBossOcean->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		}
		for (int i = 0; i < 3; i++)
		{
			Fog_E101R[i].Distance = -10000.0f;
			Fog_E101R[i].Layer = -10000.0f;
			DrawDist_E101R[i].Maximum = -9500.0f;
		}
		ModelsLoaded_B_E101R = true;
	}
}

void E101R_OnFrame()
{
	//Ocean animation
	if (!IsGamePaused() && CurrentLevel == LevelIDs_E101R)
	{
		if (FramerateSetting < 2 && FrameCounter % 2 == 0 || FramerateSetting >= 2) e101rsea_dc++;
		if (e101rsea_dc > 13) e101rsea_dc = 4;
		if (E101RBossOcean != nullptr) E101RBossOcean->basicdxmodel->mats[0].attr_texId = e101rsea_dc;
	}
}