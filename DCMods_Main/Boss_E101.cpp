#include "stdafx.h"

NJS_TEXNAME textures_e101[77];
NJS_TEXLIST texlist_e101 = { arrayptrandlength(textures_e101) };

void UnloadLevelFiles_B_E101()
{
	delete B_E101_Info;
	B_E101_Info = nullptr;
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

void E101_Init()
{
	ReplaceBIN_DC("SETE101E");
	ReplacePVM("E101");
	ReplacePVM("E101_TIKEI");
	ResizeTextureList((NJS_TEXLIST*)0x14FBFB4, 77);
	RemoveVertexColors_Object((NJS_OBJECT*)0x14DE020); //E101 boss model
	ForceObjectSpecular_Object((NJS_OBJECT*)0x14D76B4); //Belt on E101 boss model
	//E101 rocket
	((NJS_MATERIAL*)0x014DE5D0)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_MATERIAL*)0x014DE5E4)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_MATERIAL*)0x014DE5F8)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_MATERIAL*)0x014DE60C)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
}