#include "stdafx.h"

NJS_TEXNAME textures_e101[77];
NJS_TEXLIST texlist_e101 = { arrayptrandlength(textures_e101) };

//#include "E101.h"

void UnloadLevelFiles_B_E101()
{
	delete B_E101_Info;
	B_E101_Info = nullptr;
}

void LoadLevelFiles_B_E101()
{
	CheckAndUnloadLevelFiles();
	B_E101_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_E101\\0.sa1lvl"));
	LandTable *B_E101 = B_E101_Info->getlandtable(); //&landtable_00000068;
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
	RemoveVertexColors_Object((NJS_OBJECT*)0x14DEC5C); //E101 rocket
	((NJS_OBJECT*)0x014D857C)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; //E101R left eye
	((NJS_OBJECT*)0x014D857C)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT; //E101R nose
	((NJS_OBJECT*)0x014D887C)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; //E101R right eye
	WriteData((float*)0x00567D08, 0.85f); //E101 Beta (boss model) chest patch
	((NJS_OBJECT*)0x014D943C)->basicdxmodel->mats[3].attrflags &= ~NJD_FLAG_USE_ALPHA; //E101 unnecessary alpha (boss model)
	//E101 rocket (SL object)
	((NJS_MATERIAL*)0x014DE5D0)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_MATERIAL*)0x014DE5E4)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_MATERIAL*)0x014DE5F8)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_MATERIAL*)0x014DE60C)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
}