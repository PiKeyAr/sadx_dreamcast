#include "stdafx.h"
#include "EggCarrier_Objects.h"
#include "EC_Tornado.h"
#include "EC_Transform.h"

NJS_TEXNAME textures_ec00[98];
NJS_TEXLIST texlist_ec00 = { arrayptrandlength(textures_ec00) };

NJS_TEXNAME textures_ec01[90];
NJS_TEXLIST texlist_ec01 = { arrayptrandlength(textures_ec01) };

NJS_TEXNAME textures_ec02[66];
NJS_TEXLIST texlist_ec02 = { arrayptrandlength(textures_ec02) };

NJS_TEXNAME textures_ec03[46];
NJS_TEXLIST texlist_ec03 = { arrayptrandlength(textures_ec03) };

NJS_TEXNAME textures_ec04[77];
NJS_TEXLIST texlist_ec04 = { arrayptrandlength(textures_ec04) };

NJS_TEXNAME textures_ec05[40];
NJS_TEXLIST texlist_ec05 = { arrayptrandlength(textures_ec05) };

FunctionPointer(void, sub_409FB0, (NJS_ACTION *a1, float frameNumber), 0x409FB0);
FunctionPointer(void, sub_6F4570, (ObjectMaster *a1), 0x6F4570);
FunctionPointer(void, sub_407A00, (NJS_MODEL_SADX *model, float scale), 0x407A00);
DataPointer(ObjectMaster*, dword_3C85138, 0x3C85138);
DataArray(PVMEntry, stru_10F34A8, 0x10F34A8, 6);
DataArray(PVMEntry, stru_1101360, 0x1101360, 2);
static int ocean_dc = 4;
DataArray(DrawDistance, EggCarrierOutsideDrawDist1, 0x010F2264, 3);
DataArray(DrawDistance, EggCarrierOutsideDrawDist2, 0x010F227C, 3);
DataArray(DrawDistance, EggCarrierOutsideDrawDist3, 0x010F2294, 3);
DataArray(DrawDistance, EggCarrierOutsideDrawDist7, 0x010F22F4, 3);
DataArray(DrawDistance, EggCarrierOutsideSkyDrawDist3, 0x010F2204, 3);
DataArray(FogData, EggCarrierOutside2Fog, 0x010F233C, 3);
DataArray(FogData, EggCarrierOutside3Fog, 0x010F236C, 3);
DataArray(FogData, EggCarrierOutside4Fog, 0x010F239C, 3);
DataArray(FogData, EggCarrierOutside5Fog, 0x010F23CC, 3);
DataArray(FogData, EggCarrierOutside6Fog, 0x010F23FC, 3);
DataArray(FogData, EggCarrierOutside7Fog, 0x010F242C, 3);
DataArray(NJS_VECTOR, SkyboxScale_EggCarrier4, 0x010F212C, 3);
DataArray(PVMEntry, EggCarrierObjectTexlist_Sea, 0x010F34A8, 6);

NJS_MATERIAL* ObjectSpecularADV01[] = {
	//OMast
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x00216050),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x00216050),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x00216064),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x00216078),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x0021608C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x002160A0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x002160B4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x002160C8),
	//OBChair
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x00243B98),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x00243BAC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x00243BC0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x00243BD4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x00243BE8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x00243BFC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x00243C10),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x0024398C),
	//Gunsight
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x002336A0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x00233160),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x00233174),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x00231358),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x0023136C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x00231380),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x00231394),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x002313A8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x002313BC),
	//OEggmanBed
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x002380D8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x002380EC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x00238100),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x00238114),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x00238128),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x0023813C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x00238150),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x00238164),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x00238178),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x0023818C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x002381A0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x002381B4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x002381C8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x002381DC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x002381F0),
};

NJS_MATERIAL* WhiteDiffuseADV01External[] = {
	nullptr, nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,
};

NJS_MATERIAL* WhiteDiffuseADV01[] = {
	//OTornado2
	&matlistADV01_0024BE40[23],
	&matlistADV01_0024BE40[24],
	//OTaihou Cannon
	&matlistADV01_0017C018[3],
	&matlistADV01_0017C018[4],
	&matlistADV01_0017C018[5],
	&matlistADV01_0017C018[6],
	&matlistADV01_0017C018[7],
};

NJS_MATERIAL* DisableAlphaRejection_EggCarrier[] = {
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x00209B6C), //Rotating lights outside
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x001F7A58), //Monorail sign (outside)
};

void sub_10001050(NJS_OBJECT *a1)
{
	NJS_MODEL_SADX *v1; // edx@1
	signed int v2; // ecx@1
	__int16 *v3; // eax@2

	v1 = (NJS_MODEL_SADX*)a1->model;
	v2 = 0;
	if (v1->nbMat)
	{
		v3 = (__int16*)&v1->mats->attrflags;
		do
		{
			*(_DWORD *)v3 &= 0xFFEFFFFF;
			++v2;
			v3 += 10;
		} while (v2 < v1->nbMat);
	}
}

void __cdecl SetClip_EC00(signed int cliplevel)
{
	if (ADV01_0_Info)
	{
		if (cliplevel >= 2)
		{

			sub_10001050((NJS_OBJECT*)ADV01_0_Info->getdata("objectADV01_00032A00"));
			sub_10001050((NJS_OBJECT*)ADV01_0_Info->getdata("objectADV01_00032D2C"));
			sub_10001050((NJS_OBJECT*)ADV01_0_Info->getdata("objectADV01_0003335C"));
			sub_10001050((NJS_OBJECT*)ADV01_0_Info->getdata("objectADV01_00033688"));
			ADV01_0_Info->getlandtable()->COLCount -= 4;
		}
		else
		{
			ADV01_0_Info->getlandtable()->Col = &((COL*)ADV01_0_Info->getdata("collist_0015F764"))[4];
			ADV01_0_Info->getlandtable()->COLCount -= 4;
		}
	}
}

void __cdecl SetClip_EC01(signed int cliplevel)
{
	if (ADV01_1_Info)
	{
		if (cliplevel >= 2)
		{
			sub_10001050((NJS_OBJECT*)ADV01_1_Info->getdata("objectADV01_0007F56C"));
			sub_10001050((NJS_OBJECT*)ADV01_1_Info->getdata("objectADV01_0007F898"));
			sub_10001050((NJS_OBJECT*)ADV01_1_Info->getdata("objectADV01_0007EF3C"));
			sub_10001050((NJS_OBJECT*)ADV01_1_Info->getdata("objectADV01_0007EC10"));
			sub_10001050((NJS_OBJECT*)ADV01_1_Info->getdata("objectADV01_0008241C_2"));
			sub_10001050((NJS_OBJECT*)ADV01_1_Info->getdata("objectADV01_00082A7C_2"));
			ADV01_1_Info->getlandtable()->COLCount -= 6;
		}
		else
		{
			ADV01_1_Info->getlandtable()->Col = &((COL*)ADV01_1_Info->getdata("collist_00162284"))[6];
			ADV01_1_Info->getlandtable()->COLCount -= 6;
		}
	}
}

void __cdecl EggCarrierSkyBox(EntityData1 *a1, float a2)
{
	float v2; // ST0C_4

	if (!MissedFrames)
	{
		DisableFog();
		njSetTexture(&EC_SKY_TEXLIST);
		njPushMatrix(0);
		njTranslate(0, Camera_Data1->Position.x, a2, Camera_Data1->Position.z);
		njScaleV(0, &Skybox_Scale);
		v2 = VectorMaxAbs(&Skybox_Scale);
		ProcessModelNode_AB_Wrapper(ADV01_OBJECTS[65], v2);
		njScale(0, 1.0, 1.0, 1.0);
		njPopMatrix(1u);
		ToggleStageFog();
	}
}

void __cdecl EggCarrierSkyBottom(EntityData1 *a1, float a2)
{
	NJS_OBJECT *v2; // esi
	NJS_TEX *v3; // eax
	Sint16 v4; // cx
	float v5; // ST0C_4
	v2 = ADV01_OBJECTS[66];
	v3 = v2->basicdxmodel->meshsets->vertuv;
	v4 = *(Sint16*)&a1->LoopData;
	v3[1].v = v4;
	v3[3].v = v4;
	v3->v = v4 + 2040;
	v3[2].v = v4 + 2040;
	DisableFog();
	njSetTexture(&EC_SKY_TEXLIST);
	njPushMatrix(0);
	njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
	njTranslate(0, Camera_Data1->Position.x, a2, Camera_Data1->Position.z);
	njScale(0, 3.0, 1.0, 3.0);
	njScaleV(0, &Skybox_Scale);
	v5 = VectorMaxAbs(&Skybox_Scale);
	ProcessModelNode_AB_Wrapper(v2, v5);
	njScale(0, 1.0, 1.0, 1.0);
	njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
	njPopMatrix(1u);
	ToggleStageFog();
}

void RenderEggCarrier0NPC(NJS_ACTION *action, Float frame)
{
	if (action == (NJS_ACTION*)0x011A86D4) sub_409FB0(action, frame);
	else njAction(action, frame);
}

void EggCarrierSea()
{
	if (ocean_dc > 13) ocean_dc = 4;
	matlistADV01_00007B80[0].attr_texId = ocean_dc;
	if (!DroppedFrames)
	{
		DisableFog();
		njSetTexture(&EC_SEA_TEXLIST);
		njPushMatrix(0);
		njTranslate(0, Camera_Data1->Position.x, 0, Camera_Data1->Position.z);
		ProcessModelNode_A_Wrapper(&objectADV01_00007C50, QueuedModelFlagsB_3, 1.0f);
		njPopMatrix(1u);
	}
	if (GameState != 16)
	{
		if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2) ocean_dc++;
	}
}

void ODoseiFix(NJS_MODEL_SADX *model, float scale)
{
	SetMaterialAndSpriteColor_Float(1.0f, 1.0f, 1.0f, 1.0f);
	sub_407A00(model, scale);
}

void OLivingLightFix(NJS_OBJECT *a1, int blend_mode, float scale)
{
	SetMaterialAndSpriteColor_Float(1.0f, 1.0f, 1.0f, 1.0f);
	ProcessModelNode_D_WrapperB(a1, blend_mode, scale);
}

void UnloadLevelFiles_ADV01()
{
	if (DLLLoaded_Lantern) material_unregister_ptr(WhiteDiffuseADV01External, LengthOfArray(WhiteDiffuseADV01External), &ForceWhiteDiffuse1);
	delete ADV01_0_Info;
	delete ADV01_1_Info;
	delete ADV01_2_Info;
	delete ADV01_3_Info;
	delete ADV01_4_Info;
	delete ADV01_5_Info;
	ADV01_0_Info = nullptr;
	ADV01_1_Info = nullptr;
	ADV01_2_Info = nullptr;
	ADV01_3_Info = nullptr;
	ADV01_4_Info = nullptr;
	ADV01_5_Info = nullptr;
}

void LoadLevelFiles_ADV01()
{
	CheckAndUnloadLevelFiles();
	ADV01_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV01\\0.sa1lvl"));
	ADV01_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV01\\1.sa1lvl"));
	ADV01_2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV01\\2.sa1lvl"));
	ADV01_3_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV01\\3.sa1lvl"));
	ADV01_4_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV01\\4.sa1lvl"));
	ADV01_5_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV01\\5.sa1lvl"));
	LandTable *ADV01_0 = ADV01_0_Info->getlandtable();
	LandTable *ADV01_1 = ADV01_1_Info->getlandtable();
	LandTable *ADV01_2 = ADV01_2_Info->getlandtable();
	LandTable *ADV01_3 = ADV01_3_Info->getlandtable();
	LandTable *ADV01_4 = ADV01_4_Info->getlandtable();
	LandTable *ADV01_5 = ADV01_5_Info->getlandtable();
	ADV01_0->TexList = &texlist_ec00;
	ADV01_1->TexList = &texlist_ec01;
	ADV01_2->TexList = &texlist_ec02;
	ADV01_3->TexList = &texlist_ec03;
	ADV01_4->TexList = &texlist_ec04;
	ADV01_5->TexList = &texlist_ec05;
	___LANDTABLEEC[0] = ADV01_0;
	___LANDTABLEEC[1] = ADV01_1;
	___LANDTABLEEC[2] = ADV01_2;
	___LANDTABLEEC[3] = ADV01_3;
	___LANDTABLEEC[4] = ADV01_4;
	___LANDTABLEEC[5] = ADV01_5;
	LandTableArray[112] = ADV01_0;
	LandTableArray[113] = ADV01_1;
	LandTableArray[114] = ADV01_2;
	LandTableArray[115] = ADV01_3;
	LandTableArray[116] = ADV01_4;
	LandTableArray[117] = ADV01_5;
	SetClip_EC00(ClipLevel);
	SetClip_EC01(ClipLevel);
	if (DLLLoaded_Lantern)
	{
		//Level stuff
		WhiteDiffuseADV01External[0] = &((NJS_MATERIAL*)ADV01_1_Info->getdata("matlistADV01_00081DF0"))[0];
		WhiteDiffuseADV01External[1] = &((NJS_MATERIAL*)ADV01_1_Info->getdata("matlistADV01_00081DF0"))[1];
		WhiteDiffuseADV01External[2] = &((NJS_MATERIAL*)ADV01_1_Info->getdata("matlistADV01_00081DF0"))[2];
		WhiteDiffuseADV01External[3] = &((NJS_MATERIAL*)ADV01_1_Info->getdata("matlistADV01_00081DF0"))[3];
		WhiteDiffuseADV01External[4] = &((NJS_MATERIAL*)ADV01_1_Info->getdata("matlistADV01_00082450"))[0];
		WhiteDiffuseADV01External[5] = &((NJS_MATERIAL*)ADV01_1_Info->getdata("matlistADV01_00082450"))[1];
		WhiteDiffuseADV01External[6] = &((NJS_MATERIAL*)ADV01_1_Info->getdata("matlistADV01_00082450"))[2];
		WhiteDiffuseADV01External[7] = &((NJS_MATERIAL*)ADV01_1_Info->getdata("matlistADV01_00082450"))[3];
		//Captain room
		WhiteDiffuseADV01External[8] = &((NJS_MATERIAL*)ADV01_3_Info->getdata("matlistADV01_000CB0BC"))[4];
		WhiteDiffuseADV01External[9] = &((NJS_MATERIAL*)ADV01_3_Info->getdata("matlistADV01_000CB0BC"))[7];
		WhiteDiffuseADV01External[10] = &((NJS_MATERIAL*)ADV01_3_Info->getdata("matlistADV01_000165BC"))[0];
		WhiteDiffuseADV01External[11] = &((NJS_MATERIAL*)ADV01_3_Info->getdata("matlistADV01_000165BC"))[1];
		WhiteDiffuseADV01External[12] = &((NJS_MATERIAL*)ADV01_3_Info->getdata("matlistADV01_000165BC"))[2];
		WhiteDiffuseADV01External[13] = &((NJS_MATERIAL*)ADV01_3_Info->getdata("matlistADV01_000165BC"))[3],
		WhiteDiffuseADV01External[14] = &((NJS_MATERIAL*)ADV01_3_Info->getdata("matlistADV01_000165BC"))[5];
		WhiteDiffuseADV01External[15] = &((NJS_MATERIAL*)ADV01_3_Info->getdata("matlistADV01_000165BC"))[6];
		WhiteDiffuseADV01External[16] = &((NJS_MATERIAL*)ADV01_3_Info->getdata("matlistADV01_000165BC"))[7];
		WhiteDiffuseADV01External[17] = &((NJS_MATERIAL*)ADV01_3_Info->getdata("matlistADV01_000165BC"))[8];
		WhiteDiffuseADV01External[18] = &((NJS_MATERIAL*)ADV01_3_Info->getdata("matlistADV01_000165BC"))[9];
		material_register_ptr(WhiteDiffuseADV01External, LengthOfArray(WhiteDiffuseADV01External), &ForceWhiteDiffuse1);
	}
}

void ADV01_Init(const IniFile *config, const HelperFunctions &helperFunctions)
{
	ReplaceBIN_DC("SETEC00S");
	ReplaceBIN_DC("SETEC00M");
	ReplaceBIN_DC("SETEC00K");
	ReplaceBIN_DC("SETEC00A");
	ReplaceBIN_DC("SETEC00E");
	ReplaceBIN_DC("SETEC00B");
	ReplaceBIN_DC("SETEC01S");
	ReplaceBIN_DC("SETEC01M");
	ReplaceBIN_DC("SETEC01K");
	ReplaceBIN_DC("SETEC01A");
	ReplaceBIN_DC("SETEC01E");
	ReplaceBIN_DC("SETEC01B");
	ReplaceBIN_DC("SETEC02S");
	ReplaceBIN_DC("SETEC02M");
	ReplaceBIN_DC("SETEC02K");
	ReplaceBIN_DC("SETEC02A");
	ReplaceBIN_DC("SETEC02E");
	ReplaceBIN_DC("SETEC02B");
	ReplaceBIN_DC("SETEC03S");
	ReplaceBIN_DC("SETEC03M");
	ReplaceBIN_DC("SETEC04S");
	ReplaceBIN_DC("SETEC04M");
	ReplaceBIN_DC("SETEC04K");
	ReplaceBIN_DC("SETEC04A");
	ReplaceBIN_DC("SETEC04E");
	ReplaceBIN_DC("SETEC04B");
	ReplaceBIN_DC("SETEC05S");
	ReplaceBIN_DC("SETEC05M");
	ReplaceBIN_DC("CAMEC00S");
	ReplaceBIN_DC("CAMEC01S");
	ReplaceBIN_DC("CAMEC02S");
	ReplaceBIN_DC("CAMEC03S");
	ReplaceBIN_DC("CAMEC04S");
	ReplaceBIN_DC("CAMEC05S");
	switch (EnableSETFixes)
	{
		case SETFixes_Normal:
			AddSETFix("SETEC00S");
			AddSETFix("SETEC01S");
			AddSETFix("SETEC02S");
			AddSETFix("SETEC03S");
			AddSETFix("SETEC04S");
			AddSETFix("SETEC05S");
			break;
		case SETFixes_Extra:
			AddSETFix_Extra("SETEC00S");
			AddSETFix_Extra("SETEC01S");
			AddSETFix_Extra("SETEC02S");
			AddSETFix_Extra("SETEC03S");
			AddSETFix_Extra("SETEC04S");
			AddSETFix_Extra("SETEC05S");
			break;
		default:
			break;
	}
	ReplacePVM("ADV_EC00");
	ReplacePVM("ADV_EC01");
	ReplacePVM("ADV_EC02");
	ReplacePVM("ADV_EC03");
	ReplacePVM("ADV_EC04");
	ReplacePVM("ADV_EC05");
	ReplacePVM("BG_EC00");
	ReplacePVM("EC_ACTDOOR");
	ReplacePVM("EC_BG");
	ReplacePVM("EC_BOAT");
	ReplacePVM("EC_CLOUDS");
	ReplacePVM("EC_IKADA");
	ReplacePVM("EC_LIGHT");
	ReplacePVM("EC_SKY");
	ReplacePVM("EC_TORNADO");
	ReplacePVM("EC_TRANSFORM");
	ReplacePVM("EC_WATER");
	ReplacePVM("EV_ECCLOUD");
	ReplacePVM("EC_SEA");
	ResizeTextureList(&OBJ_EC00_TEXLIST, 206);
	___ADV01_TEXLISTS[0] = &texlist_ec00;
	___ADV01_TEXLISTS[1] = &texlist_ec01;
	___ADV01_TEXLISTS[2] = &texlist_ec02;
	___ADV01_TEXLISTS[3] = &texlist_ec03;
	___ADV01_TEXLISTS[4] = &texlist_ec04;
	___ADV01_TEXLISTS[5] = &texlist_ec05;
	if (!SADXWater_EggCarrier) WriteJump((void*)0x0051C440, EggCarrierSea);
	WriteCall((void*)0x51F637, ODoseiFix);
	WriteCall((void*)0x51F669, ODoseiFix);
	WriteCall((void*)0x51EB2C, OLivingLightFix);
	WriteCall((void*)0x0051AB88, RenderEggCarrier0NPC); //Chaos 4 glitch fix
	WriteJump((void*)0x51B210, EggCarrierSkyBottom);
	WriteJump((void*)0x51B3B0, EggCarrierSkyBox);
	//Fix camera in Amy-Gamma prison cutscene
	WriteData((float*)0x006A4EBE, -134.0f); //X1
	WriteData((float*)0x006A4EB9, 15.0f); //Y1
	WriteData((float*)0x006A4EB4, 54.0f); //Z1
	WriteData((float*)0x006A4F41, -143.85f); //X2
	WriteData((float*)0x006A4F3C, 15.93f); //Y2
	WriteData((float*)0x006A4F37, 80.25f); //Z2
	//Fix camera in Gamma-Amy prison cutscene
	WriteData((float*)0x00678C48, -134.0f); //X1
	WriteData((float*)0x00678C43, 15.0f); //Y1
	WriteData((float*)0x00678C3E, 54.0f); //Z1
	WriteData((float*)0x00678CCB, -143.85f); //X2
	WriteData((float*)0x00678CC6, 15.93f); //Y2
	WriteData((float*)0x00678CC1, 80.25f); //Z2
	if (DLLLoaded_Lantern)
	{
		if (set_alpha_reject_ptr != nullptr) 
		{
			material_register_ptr(DisableAlphaRejection_EggCarrier, LengthOfArray(DisableAlphaRejection_EggCarrier), &DisableAlphaRejection);
			ReplacePVM("OBJ_EC00");
		}
		else
		{
			ReplaceGeneric("OBJ_EC00.PVM", "OBJ_EC00_DC_OLD.PVM");
		}
		material_register_ptr(ObjectSpecularADV01, LengthOfArray(ObjectSpecularADV01), &ForceDiffuse0Specular1);
		//material_register_ptr(LevelSpecularADV01, LengthOfArray(LevelSpecularADV01), &ForceDiffuse0Specular0);
		material_register_ptr(WhiteDiffuseADV01, LengthOfArray(WhiteDiffuseADV01), &ForceWhiteDiffuse1);
	}
	else
	{
		ReplaceGeneric("OBJ_EC00.PVM", "OBJ_EC00_DC_OLD.PVM");
	}
	WriteJump((char *)GetProcAddress(GetModuleHandle(L"ADV01MODELS"), "SetClip_EC00"), SetClip_EC00);
	WriteJump((char *)GetProcAddress(GetModuleHandle(L"ADV01MODELS"), "SetClip_EC01"), SetClip_EC01);
	WriteData<5>((void *)0x0051BB8C, 0x90); //disable that stupid DisableFog thing
	((NJS_OBJECT*)0x03104130)->basicdxmodel->mats[0].diffuse.color = 0xFFFFFFFF;
	___ADV01_ACTIONS[2]->object = &objectADV01_0019795C; //OEggChair
	___ADV01_ACTIONS[2]->motion = &_197dbc; //OEggChair
	___ADV01_ACTIONS[6]->object = &object_0016991C; //OSkyDeck
	___ADV01_MODELS[13]->mats[1].diffuse.color = 0xFFFFFFFF; //Slot machine
	___ADV01_OBJECTS[21] = &objectADV01_001972E4;
	___ADV01_OBJECTS[22] = &objectADV01_0018C098;
	___ADV01_OBJECTS[23] = &objectADV01_0018BD3C;
	___ADV01_OBJECTS[24] = &objectADV01_0018B9E0;
	___ADV01_ACTIONS[7]->object = &objectADV01_00209538; //EC transform
	___ADV01_OBJECTS[64] = &objectADV01_00209538; //EC transform
	___ADV01_OBJECTS[0] = &objectADV01_00182160; //SideLift
	___ADV01_OBJECTS[1] = &objectADV01_00181DBC; //SideLift
	___ADV01_OBJECTS[2] = &objectADV01_00181684; //SideLift
	___ADV01_OBJECTS[55] = &objectADV01_0017D82C; //OSLight
	___ADV01_OBJECTS[56] = &objectADV01_0017CBA0; //OSLight
	___ADV01_OBJECTS[57] = &objectADV01_0017C970; //OSLight
	___ADV01_OBJECTS[58] = &objectADV01_0017BFE4; //OSLight
	___ADV01_OBJECTS[61] = &objectADV01_0024FFF8; //OTornado2
	___ADV01_ACTIONS[0]->object = &objectADV01_00178BC4; //This thing is stupid
	___ADV01_OBJECTS[5] = &objectADV01_00178BC4; //This thing is stupid
	___ADV01_OBJECTS[13] = &objectADV01_001A85F0; //OParasol
	___ADV01_OBJECTS[27] = &objectADV01_001782D4; //Door top
	___ADV01_OBJECTS[14]->model = &attachADV01_0017FD8C; //OTaihou (Cannon)
	___ADV01_OBJECTS[14]->child->model = &attachADV01_0017F618; //OTaihou (Cannon)
	___ADV01_OBJECTS[14]->child->child->model = &attachADV01_0017E110; //OTaihou (Cannon)
	___ADV01_OBJECTS[14]->child->child->sibling->model = &attachADV01_0017DC48; //OTaihou (Cannon)
	___ADV01_OBJECTS[28] = &objectADV01_001777B4; //Door 2
	___ADV01_OBJECTS[18] = &objectADV01_00189EA0; //Eggcap
	___ADV01_OBJECTS[19] = &objectADV01_001760A0; //Egglift
	___ADV01_OBJECTS[51]->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT; //Pool water
	___ADV01_OBJECTS[51]->basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT; //Pool water
	___ADV01_OBJECTS[51]->basicdxmodel->mats[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT; //Pool water
	___ADV01_OBJECTS[69]->child->child->model = &attachADV01_0016CD90; //Monorail front
	___ADV01_OBJECTS[69]->child->model = &attachADV01_0016D524; //Monorail front
	___ADV01_OBJECTS[70]->child->child->model = &attachADV01_00170CFC; //Monorail back
	___ADV01_OBJECTS[70]->child->model = &attachADV01_001714D8; //Monorail back
	WriteData<5>((void*)0x005244D6, 0x90); //Disable light flickering
	//Fix materials on books
	ADV01_OBJECTS[12]->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2;
	ADV01_OBJECTS[12]->basicdxmodel->mats[1].diffuse.color = 0xFFB2B2B2;
	ADV01_OBJECTS[12]->basicdxmodel->mats[2].diffuse.color = 0xFFB2B2B2;
	ADV01_OBJECTS[11]->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2;
	ADV01_OBJECTS[11]->basicdxmodel->mats[1].diffuse.color = 0xFFB2B2B2;
	ADV01_OBJECTS[11]->basicdxmodel->mats[2].diffuse.color = 0xFFB2B2B2;
	//Fix materials on elevator buttons
	WriteData((float*)0x0051E818, 1.0f);
	WriteData((float*)0x0051E81D, 1.0f);
	WriteData((float*)0x0051E88F, 1.0f);
	WriteData((float*)0x0051E894, 1.0f);
	for (unsigned int i = 0; i < 3; i++)
	{
		SkyboxScale_EggCarrier4[i].x = 1.0f;
		SkyboxScale_EggCarrier4[i].y = 1.0f;
		SkyboxScale_EggCarrier4[i].z = 1.0f;
		EggCarrierOutsideSkyDrawDist3[i].Maximum = -7000;
		EggCarrierOutsideDrawDist1[i].Maximum = -11000;
		EggCarrierOutsideDrawDist2[i].Maximum = -11000;
		EggCarrierOutsideDrawDist3[i].Maximum = -11000;
		EggCarrierOutsideDrawDist7[i].Maximum = -28000;
		EggCarrierOutside2Fog[i].Distance = -12000;
		EggCarrierOutside2Fog[i].Layer = -12000;
		EggCarrierOutside3Fog[i].Distance = -12000;
		EggCarrierOutside3Fog[i].Layer = -12000;
		EggCarrierOutside4Fog[i].Distance = -12000;
		EggCarrierOutside4Fog[i].Layer = -12000;
		EggCarrierOutside5Fog[i].Distance = -12000;
		EggCarrierOutside5Fog[i].Layer = -12000;
		EggCarrierOutside6Fog[i].Distance = -12000;
		EggCarrierOutside6Fog[i].Layer = -12000;
		EggCarrierOutside7Fog[i].Toggle = 1;
		EggCarrierOutside7Fog[i].Layer = 6500;
		EggCarrierOutside7Fog[i].Color = 0xFF000000;
		EggCarrierOutside7Fog[i].Distance = 17000;
	}
}