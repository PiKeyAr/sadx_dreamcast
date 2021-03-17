#include "stdafx.h"

NJS_TEXNAME textures_e101[77];
NJS_TEXLIST texlist_e101 = { arrayptrandlength(textures_e101) };

//#include "E101.h"

void UnloadLevelFiles_B_E101()
{
	delete B_E101_Info;
	B_E101_Info = nullptr;
}

void E101_Init()
{
	B_E101_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_E101\\0.sa1lvl"));
	LandTable* B_E101 = B_E101_Info->getlandtable(); //&landtable_00000068;
	RemoveMaterialColors_Landtable(B_E101);
	B_E101->TexList = &texlist_e101;
	LandTableArray[72] = B_E101;
	if (!ModelsLoaded_B_E101)
	{
		*(NJS_TEXLIST*)0x14FBFB4 = texlist_e101;
		FixFVFShit();
		RemoveVertexColors_Object((NJS_OBJECT*)0x14DE020); // E101 boss model
		RemoveVertexColors_Object((NJS_OBJECT*)0x14DEC5C); // E101 rocket
		// E101 rocket (SL object)
		((NJS_MATERIAL*)0x014DE5D0)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
		((NJS_MATERIAL*)0x014DE5E4)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
		((NJS_MATERIAL*)0x014DE5F8)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
		((NJS_MATERIAL*)0x014DE60C)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
		ModelsLoaded_B_E101 = true;
	}
}