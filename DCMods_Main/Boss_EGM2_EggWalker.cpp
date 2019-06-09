#include "stdafx.h"

NJS_TEXNAME textures_eggwalker[231];
NJS_TEXLIST texlist_eggwalker = { arrayptrandlength(textures_eggwalker) };

DataArray(FogData, EggWalkerFog, 0x015E87F4, 3);

void UnloadLevelFiles_B_EGM2()
{
	delete B_EGM2_Info;
	B_EGM2_Info = nullptr;
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

