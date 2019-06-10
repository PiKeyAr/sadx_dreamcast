#include "stdafx.h"
#include "ERobo.h"

DataArray(FogData, Fog_Zero, 0x016B4DB0, 3);
DataArray(DrawDistance, DrawDist_Zero, 0x016B4D98, 3);

void Zero_FVFShit(FVFStruct_H_B *a1, signed int count, int a3)
{
	SetOceanAlphaModeAndFVF(a3);
	njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
	Direct3D_DrawFVF_H(a1, count);
	njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
}

void UnloadLevelFiles_B_ROBO()
{
	delete B_ROBO_Info;
	B_ROBO_Info = nullptr;
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

void Zero_Init()
{
	ReplaceBIN_DC("SETZEROA");
	ReplaceBIN_DC("SETZEROS");
	ReplacePVM("EROBO");
	ReplaceGeneric("EROBO_GC.NB", "EROBO_DC.NB");
	WriteData<1>((char*)0x5850F0, 0xC3u); //Disable SetClip_ZERO
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
