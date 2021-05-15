#include "stdafx.h"

NJS_TEXNAME textures_eggwalker[231];
NJS_TEXLIST texlist_eggwalker = { arrayptrandlength(textures_eggwalker) };

DataArray(FogData, EggWalkerFog, 0x015E87F4, 3);
DataArray(NJS_TEXANIM, EggWalkerFireTexanims, 0x1655790, 16);

void UnloadLevelFiles_B_EGM2()
{
	delete B_EGM2_Info;
	B_EGM2_Info = nullptr;
}

void SetEggWalkerFireColor(NJS_ARGB *a1a)
{
	SetMaterialAndSpriteColor_Float(max(0, a1a->a), max(0, a1a->r), max(0, a1a->g), max(0, a1a->b));
}

void B_EGM2_Init()
{
	ReplaceSET("SETEGM2S");
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
	for (int i = 0; i < 3; i++)
	{
		EggWalkerFog[i].Layer = -10000.0f;
		EggWalkerFog[i].Distance = -10000.0f;
	}
}

void B_EGM2_Load()
{
	B_EGM2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_EGM2\\0.sa1lvl"));
	LandTable* B_EGM2 = B_EGM2_Info->getlandtable(); //&landtable_0000022C;
	RemoveMaterialColors_Landtable(B_EGM2);
	B_EGM2->TexList = &texlist_eggwalker;
	LandTableArray[48] = B_EGM2;
	if (!ModelsLoaded_B_EGM2)
	{
		*(NJS_TEXLIST*)0x15E99F8 = texlist_eggwalker;
		RemoveVertexColors_Object((NJS_OBJECT*)0x162DAC0); // Egg Walker body
		RemoveVertexColors_Object((NJS_OBJECT*)0x162F554); // Egg Walker cockpit
		RemoveVertexColors_Object((NJS_OBJECT*)0x1654F28); // Egg Walker Eggman
		RemoveVertexColors_Object((NJS_OBJECT*)0x16556F8); // Egg Walker bomb
		((NJS_OBJECT*)0x162E0FC)->basicdxmodel->mats[2].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0162E158)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		// Object fixes
		((NJS_OBJECT*)0x1655EF0)->basicdxmodel->mats[3].attrflags &= ~NJD_FLAG_USE_ALPHA; // Remove unneeded alpha in Egg Walker missile model
		WriteData<1>((char*)0x57AB35, 0x01u); // Queue flag for Egg walker missile
		WriteCall((void*)0x57A43A, SetEggWalkerFireColor); // Clamp Egg Walker fire sprite alpha
		// Fix fire sprite texanim to match texture order in the PVM
		EggWalkerFireTexanims[0].texid = 7;
		EggWalkerFireTexanims[7].texid = 0;
		ModelsLoaded_B_EGM2 = true;
	}
}