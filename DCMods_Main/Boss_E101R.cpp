#include "stdafx.h"
#include "E101Kai_Model.h"

DataArray(FogData, Fog_E101R, 0x015225F0, 3);
DataArray(DrawDistance, DrawDist_E101R, 0x015225D8, 3);

FunctionPointer(void, sub_570900, (int a1, int a2), 0x570900);
FunctionPointer(void, sub_568EC0, (EntityData1 *a1), 0x568EC0);
FunctionPointer(void, sub_77E940, (FVFStruct_H_B *a1, signed int count, int a3), 0x77E940);

static int E101REffectMode = 1;
static float e101rframe = 0;

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


void UnloadLevelFiles_B_E101_R()
{
	delete B_E101_R_Info;
	B_E101_R_Info = nullptr;
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