#include "stdafx.h"

DataArray(FogData, Fog_Zero, 0x016B4DB0, 3);
DataArray(DrawDistance, DrawDist_Zero, 0x016B4D98, 3);

//#include "Zero.h"

FunctionPointer(void, ZeroBarriers_Display, (void *a1), 0x58F470); // Bariers_Display
FunctionPointer(void, ZeroAttack_Display, (void *a1), 0x58C500); // FVFShit_Display
FunctionPointer(void, CreateFireParticle, (NJS_VECTOR *a1, float a2), 0x4CACF0);

static bool ZeroBarriers_FadeOut = false;
static bool ZeroBarriers_FadeIn = false;
static NJS_COLOR BarrierColor = { 0x00000000 };
NJS_OBJECT *ZeroBossOcean = nullptr;

void ZeroFVF_Show(ObjectMaster *a1)
{
	DrawModelCallback_Queue(ZeroAttack_Display, a1, 22048.0f, QueuedModelFlagsB_SomeTextureThing);
}

void ZeroBarriers_Show(ObjectMaster *a1)
{
	DrawModelCallback_Queue(ZeroBarriers_Display, a1, -1000.0f, (QueuedModelFlagsB)0);
}

void ZeroBarrier_SetOnFireHook(NJS_VECTOR *a1, float a2)
{
	ZeroBarriers_FadeOut = true;
	CreateFireParticle(a1, a2);
}

void RenderZeroSparks(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	njScale(0, 0.85f, 0.85f, 0.85f);
	late_DrawObjectClipEx(a1, (QueuedModelFlagsB)4, a3);
}

void Zero_FVFShit(FVFStruct_H_B *a1, signed int count, int a3)
{
	SetOceanAlphaModeAndFVF(a3);
	njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_ONE);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
	if (!ZeroBarriers_FadeOut && BarrierColor.argb.a < 1) ZeroBarriers_FadeIn = true;
	for (int i = 0; i < count; i++)
	{
		if (BarrierColor.argb.a > 0) a1[i].diffuse = BarrierColor.color;
		else a1[i].diffuse = 0x00000000;
	}
	Direct3D_DrawFVF_H(a1, count);
	njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
}

void UnloadLevelFiles_B_ROBO()
{
	delete B_ROBO_Info;
	B_ROBO_Info = nullptr;
}

void __cdecl ZeroOceanHook(OceanData *a1)
{
	// Ocean stuff
	if (!SADXWater_EggCarrier)
	{
		if (!MissedFrames)
		{
			DisableFog();
			njSetTexture(&EC_SEA_TEXLIST);
			njPushMatrix(0);
			njTranslate(0, Camera_Data1->Position.x, 0, Camera_Data1->Position.z);
			lateDrawObject(ZeroBossOcean, QueuedModelFlagsB_EnableZWrite, 1.0f);
			njPopMatrix(1u);
		}
	}
	else EggCarrier_OceanDraw_SADXStyle(a1);
}

void DrawShadow_ERobo_Fix(NJS_OBJECT *a1)
{
	lateDrawObject(a1, QueuedModelFlagsB_SomeTextureThing, 1.0f);
}

void Zero_Init()
{
	B_ROBO_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_ROBO\\0.sa1lvl"));
	LandTable* B_ROBO = B_ROBO_Info->getlandtable(); //&landtable_00000110;
	RemoveMaterialColors_Landtable(B_ROBO);
	B_ROBO->TexList = (NJS_TEXLIST*)0x16B460C;
	LandTableArray[64] = B_ROBO;
	if (!ModelsLoaded_B_ROBO)
	{
		if (!ModelsLoaded_B_E101R) ResizeE101RTexlist();
		WriteCall((void*)0x58C7E4, DrawShadow_ERobo_Fix);
		WriteData<1>((char*)0x5850F0, 0xC3u); // Disable SetClip_ZERO
		WriteCall((void*)0x585448, LoadBossECOceanPVM);
		WriteData((float*)0x58752C, 0.8f); // Zero constant material alpha
		// Effect fixes
		WriteCall((void*)0x58B580, ZeroBarrier_SetOnFireHook); // Hook to tell when to fade out barrier effect
		WriteCall((void*)0x58B61D, RenderZeroSparks);
		WriteCall((void*)0x58BC56, Zero_FVFShit);
		WriteJump((void*)0x58C721, ZeroFVF_Show);
		WriteJump((void*)0x58F798, ZeroBarriers_Show);
		WriteJump(Zero_OceanDraw, ZeroOceanHook); // Ocean callback replacement
		// Ocean model
		if (!SADXWater_EggCarrier)
		{
			ZeroBossOcean = LoadModel("system\\data\\B_ROBO\\Models\\0002DBBC.sa1mdl", false);
			ZeroBossOcean->basicdxmodel->mats[0].attr_texId = 4;
			ZeroBossOcean->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			ZeroBossOcean->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
			AddTextureAnimation_Permanent(23, 0, &ZeroBossOcean->basicdxmodel->mats[0], false, 4, 4, 13);
		}
		for (int i = 0; i < 3; i++)
		{
			DrawDist_Zero[i].Maximum = -9500.0f;
			Fog_Zero[i].Distance = -10000.0f;
			Fog_Zero[i].Layer = -10000.0f;
		}
		ModelsLoaded_B_ROBO = true;
	}
}

void Zero_OnFrame()
{
	// Barriers
	if (ZeroBarriers_FadeOut)
	{
		if (BarrierColor.argb.a > 5)
		{
			BarrierColor.argb.a -= 5;
			BarrierColor.argb.r -= 5;
			BarrierColor.argb.g -= 5;
			BarrierColor.argb.b -= 5;
		}
		else
		{
			BarrierColor.argb.a = 0;
			BarrierColor.argb.r = 0;
			BarrierColor.argb.g = 0;
			BarrierColor.argb.b = 0;
		}
	}
	else if (ZeroBarriers_FadeIn)
	{
		if (BarrierColor.argb.a < 255)
		{
			BarrierColor.argb.a += 5;
			BarrierColor.argb.r += 5;
			BarrierColor.argb.g += 5;
			BarrierColor.argb.b += 5;
		}
		else
		{
			BarrierColor.argb.a = 255;
			BarrierColor.argb.r = 255;
			BarrierColor.argb.g = 255;
			BarrierColor.argb.b = 255;
			ZeroBarriers_FadeIn = false;
		}
	}
	if (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21 || GameMode == GameModes_Menu || GameMode == GameModes_CharSel)
	{
		ZeroBarriers_FadeIn = false;
		ZeroBarriers_FadeOut = false;
		BarrierColor.color = 0x00000000;
	}
}