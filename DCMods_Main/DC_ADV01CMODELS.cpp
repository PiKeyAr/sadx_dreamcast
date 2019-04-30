#include "stdafx.h"
#include "ADV01C_Objects.h"

NJS_TEXNAME textures_ec30[44];
NJS_TEXLIST texlist_ec30 = { arrayptrandlength(textures_ec30) };

NJS_TEXNAME textures_ec31[45];
NJS_TEXLIST texlist_ec31 = { arrayptrandlength(textures_ec31) };

NJS_TEXNAME textures_ec32[21];
NJS_TEXLIST texlist_ec32 = { arrayptrandlength(textures_ec32) };

NJS_TEXNAME textures_ec33[20];
NJS_TEXLIST texlist_ec33 = { arrayptrandlength(textures_ec33) };

NJS_TEXNAME textures_ec34[42];
NJS_TEXLIST texlist_ec34 = { arrayptrandlength(textures_ec34) };

NJS_TEXNAME textures_ec35[14];
NJS_TEXLIST texlist_ec35 = { arrayptrandlength(textures_ec35) };

FunctionPointer(void, sub_409FB0, (NJS_ACTION *a1, float frameNumber), 0x409FB0);
FunctionPointer(void, sub_6F4570, (ObjectMaster *a1), 0x6F4570);
FunctionPointer(void, sub_407A00, (NJS_MODEL_SADX *model, float scale), 0x407A00);
DataPointer(ObjectMaster*, dword_3C85138, 0x3C85138);
DataArray(PVMEntry, stru_10F34A8, 0x10F34A8, 6);
DataArray(PVMEntry, stru_1101360, 0x1101360, 2);
DataArray(FogData, EggCarrierInside1Fog, 0x01100C18, 3);
DataArray(FogData, EggCarrierInside2Fog, 0x01100C48, 3);
DataArray(FogData, EggCarrierInside3Fog, 0x01100C78, 3);
DataArray(FogData, EggCarrierInside4Fog, 0x01100CA8, 3);
DataArray(FogData, EggCarrierInside5Fog, 0x01100CD8, 3);
DataArray(FogData, EggCarrierInside6Fog, 0x01100D08, 3);

NJS_MATERIAL* DisableAlphaRejection_EggCarrierInside[] = {
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x000ED480), //Monorail sign (inside)
};

NJS_MATERIAL* WhiteDiffuseADV01C[] = {
	//OHammerSW
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x00110B04),
	//Tarai button
	//&matlistADV01_0011154C[0],
	//&matlistADV01_0011154C[1],
	//&matlistADV01_0011154C[2],
};

NJS_MATERIAL* HedgehogHammerDolls[] = {
	//Hedgehog Hammer targets (possibly SL objects?)
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x0011C478),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x0011BF60),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x0011BF74),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x0011BBC8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x0011B364),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x0011A9E8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x0011A504),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x0011A1CC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x0011A07C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x0011A090),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x00119F2C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x00119F40),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x001247C8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x001242B0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x001242C4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x00123F18),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x001236B4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x00122D38),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x00122854),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x0012251C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x001223CC), //Super Sonic ears (disable alpha rejection)
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x001223E0), //Super Sonic ears (disable alpha rejection)
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x0012227C), //Super Sonic ears (disable alpha rejection)
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x00122290), //Super Sonic ears (disable alpha rejection)
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x00115630),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x00114C38),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x00114C4C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x00114C60),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x00114C74),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x00114568),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x0011457C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x001142D4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x001140CC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x00113EB4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x00113B4C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x001137E4),
};

void __cdecl ECDoorBarrier1X(ObjectMaster *a1)
{
	EntityData1 *v1; // esi
	Angle v2; // eax

	v1 = a1->Data1;
	if (v1->Status & 0x200)
	{
		if (!MissedFrames)
		{
			SetTextureToLevelObj();
			njPushMatrix(0);
			njTranslateV(0, &v1->Position);
			v2 = v1->Rotation.y;
			if (v2)
			{
				njRotateY(0, (unsigned __int16)v2);
			}
			ProcessModelNode((NJS_OBJECT*)ADV01C_OBJECTS[21], QueuedModelFlagsB_SomeTextureThing, 1.0f);
			njPopMatrix(1u);
		}
	}
}

void __cdecl ECDoorBarrier2X(int a1, EntityData1 *a2)
{
	Angle v2; // eax

	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslateV(0, &a2->Position);
		v2 = a2->Rotation.y;
		if (v2)
		{
			njRotateY(0, (unsigned __int16)v2);
		}
		ProcessModelNode((NJS_OBJECT*)ADV01C_OBJECTS[21], QueuedModelFlagsB_SomeTextureThing, 1.0f);
		njPopMatrix(1u);
	}
}

static void __declspec(naked) ECDoorBarrier2_asm()
{
	__asm
	{
		push esi // a2
		push ecx

		// Call your __cdecl function here:
		call ECDoorBarrier2X

		pop esi // a2
		pop ecx
		retn
	}
}

ObjectMaster *__cdecl TurnLightsOff()
{
	set_shader_flags_ptr(ShaderFlags_Blend, true);
	set_diffuse_blend_ptr(0, 4);
	set_specular_blend_ptr(0, 0);
	set_blend_factor_ptr(1.0f);
	ObjectMaster *result; // eax@1
	result = LoadObject((LoadObj)0, 1, sub_6F4570);
	dword_3C85138 = result;
	return result;
}

void TurnLightsOn()
{
	if (dword_3C85138)
	{
		CheckThingButThenDeleteObject(dword_3C85138);
		dword_3C85138 = 0;
	}

	set_blend_factor_ptr(0.0f);
	set_shader_flags_ptr(ShaderFlags_Blend, false);
}

bool HedgehogHammerDollsFunction(NJS_MATERIAL* material, uint32_t flags)
{
	set_diffuse_ptr(2, false);
	set_specular_ptr(2, false);
	set_alpha_reject_ptr(0.0f, false);
	return true;
}

void UnloadLevelFiles_ADV01C()
{
	delete ADV01C_0_Info;
	delete ADV01C_1_Info;
	delete ADV01C_2_Info;
	delete ADV01C_3_Info;
	delete ADV01C_4_Info;
	delete ADV01C_5_Info;
	ADV01C_0_Info = nullptr;
	ADV01C_1_Info = nullptr;
	ADV01C_2_Info = nullptr;
	ADV01C_3_Info = nullptr;
	ADV01C_4_Info = nullptr;
	ADV01C_5_Info = nullptr;
}

void LoadLevelFiles_ADV01C()
{
	CheckAndUnloadLevelFiles();
	ADV01C_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV01C\\0.sa1lvl"));
	ADV01C_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV01C\\1.sa1lvl"));
	ADV01C_2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV01C\\2.sa1lvl"));
	ADV01C_3_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV01C\\3.sa1lvl"));
	ADV01C_4_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV01C\\4.sa1lvl"));
	ADV01C_5_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV01C\\5.sa1lvl"));
	LandTable *ADV01C_0 = ADV01C_0_Info->getlandtable();
	LandTable *ADV01C_1 = ADV01C_1_Info->getlandtable();
	LandTable *ADV01C_2 = ADV01C_2_Info->getlandtable();
	LandTable *ADV01C_3 = ADV01C_3_Info->getlandtable();
	LandTable *ADV01C_4 = ADV01C_4_Info->getlandtable();
	LandTable *ADV01C_5 = ADV01C_5_Info->getlandtable();
	ADV01C_0->TexList = &texlist_ec30;
	ADV01C_1->TexList = &texlist_ec31;
	ADV01C_2->TexList = &texlist_ec32;
	ADV01C_3->TexList = &texlist_ec33;
	ADV01C_4->TexList = &texlist_ec34;
	ADV01C_5->TexList = &texlist_ec35;
	___LANDTABLEECC[0] = ADV01C_0;
	___LANDTABLEECC[1] = ADV01C_1;
	___LANDTABLEECC[2] = ADV01C_2;
	___LANDTABLEECC[3] = ADV01C_3;
	___LANDTABLEECC[4] = ADV01C_4;
	___LANDTABLEECC[5] = ADV01C_5;
	LandTableArray[136] = ADV01C_0;
	LandTableArray[137] = ADV01C_1;
	LandTableArray[138] = ADV01C_2;
	LandTableArray[139] = ADV01C_3;
	LandTableArray[140] = ADV01C_4;
	LandTableArray[141] = ADV01C_5;
}

void ADV01C_Init(const IniFile *config, const HelperFunctions &helperFunctions)
{
	ReplaceBIN_DC("SETEC30S");
	ReplaceBIN_DC("SETEC31S");
	ReplaceBIN_DC("SETEC31B");
	ReplaceBIN_DC("SETEC32S");
	ReplaceBIN_DC("SETEC33S");
	ReplaceBIN_DC("SETEC34S");
	ReplaceBIN_DC("SETEC35S");
	ReplaceBIN_DC("CAMEC30S");
	ReplaceBIN_DC("CAMEC31S");
	ReplaceBIN_DC("CAMEC32S");
	ReplaceBIN_DC("CAMEC33S");
	ReplaceBIN_DC("CAMEC34S");
	ReplaceBIN_DC("CAMEC35S");
	switch (EnableSETFixes)
	{
	case SETFixes_Normal:
		AddSETFix("SETEC30S");
		AddSETFix("SETEC31S");
		AddSETFix("SETEC31B");
		AddSETFix("SETEC32S");
		AddSETFix("SETEC33S");
		AddSETFix("SETEC34S");
		AddSETFix("SETEC35S");
		break;
	case SETFixes_Extra:
		AddSETFix_Extra("SETEC30S");
		AddSETFix_Extra("SETEC31S");
		AddSETFix_Extra("SETEC31B");
		AddSETFix_Extra("SETEC32S");
		AddSETFix_Extra("SETEC33S");
		AddSETFix_Extra("SETEC34S");
		AddSETFix_Extra("SETEC35S");
		break;
	default:
		break;
	}
	ReplacePVM("ADV_EC30");
	ReplacePVM("ADV_EC31");
	ReplacePVM("ADV_EC32");
	ReplacePVM("ADV_EC33");
	ReplacePVM("ADV_EC34");
	ReplacePVM("ADV_EC35");
	ReplacePVM("ADV_EC36");
	ReplacePVM("EC_ACTDOOR");
	ReplacePVM("EC_ALIFE");
	ReplacePVM("EC_EGGLIFT");
	ReplacePVM("EC_TARAI");
	ReplacePVM("PVME101FACTORY");
	___ADV01C_TEXLISTS[15] = &texlist_ec30;
	___ADV01C_TEXLISTS[16] = &texlist_ec31;
	___ADV01C_TEXLISTS[17] = &texlist_ec32;
	___ADV01C_TEXLISTS[18] = &texlist_ec33;
	___ADV01C_TEXLISTS[19] = &texlist_ec34;
	___ADV01C_TEXLISTS[20] = &texlist_ec35;
	//Door barrier fixes (Gamma's story)
	WriteJump((void*)0x52B2E0, ECDoorBarrier1X);
	WriteJump((void*)0x52B250, ECDoorBarrier2_asm);
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
	ReplaceBIN("PL_W1B", "PL_W1X");
	for (unsigned int i = 0; i < LengthOfArray(HedgehogHammerDolls); i++)
	{
		RemoveMaterialColors(HedgehogHammerDolls[i]);
	}
	if (DLLLoaded_Lantern)
	{
		if (set_alpha_reject_ptr != nullptr)
		{
			material_register_ptr(DisableAlphaRejection_EggCarrierInside, LengthOfArray(DisableAlphaRejection_EggCarrierInside), &DisableAlphaRejection);
			material_register_ptr(HedgehogHammerDolls, LengthOfArray(HedgehogHammerDolls), &HedgehogHammerDollsFunction);
			material_register_ptr(WhiteDiffuseADV01C, LengthOfArray(WhiteDiffuseADV01C), &ForceWhiteDiffuse1);
			ReplacePVM("OBJ_EC30");
		}
		else
		{
			ReplaceGeneric("OBJ_EC30.PVM", "OBJ_EC30_DC_OLD.PVM");
		}
		WriteCall((void*)0x006F4577, TurnLightsOff); //Turn the lights off
		WriteCall((void*)0x006F4620, TurnLightsOn); //Turn the lights on
	}
	else
	{
		ReplaceGeneric("OBJ_EC30.PVM", "OBJ_EC30_DC_OLD.PVM");
	}
	((NJS_OBJECT*)0x03104130)->basicdxmodel->mats[0].diffuse.color = 0xFFFFFFFF;
	___ADV01C_MODELS[28] = &attachADV01_00111938;
	___ADV01C_MODELS[27] = &attachADV01_001114EC;
	___ADV01C_OBJECTS[7] = &objectADV01_00111964; //tarai button
	___ADV01C_OBJECTS[7]->child = &objectADV01_00111518;
	___ADV01C_OBJECTS[8] = &objectADV01_000D243C; //tarai
	___ADV01C_OBJECTS[43]->child->child->model = &attachADV01_000AEDD0; //Monorail 1 door
	___ADV01C_OBJECTS[43]->child->model = &attachADV01_000AF564; //Monorail 1 door thing
	___ADV01C_OBJECTS[44]->child->child->model = &attachADV01_000B2D3C; //Monorail 2 door 
	___ADV01C_OBJECTS[44]->child->model = &attachADV01_000B3518; //Monorail 2 door thing
	___ADV01C_OBJECTS[29] = &objectADV01_000ADCD8; //Monorail station
	___ADV01C_ACTIONS[7]->object = &objectADV01_000B8CD4; //Egglift
	___ADV01C_OBJECTS[23] = &objectADV01_000B8CD4; //Egglift
	___ADV01C_ACTIONS[6]->object = &objectADV01_000BAF48; //Door
	___ADV01C_MODELS[27]->mats[0].diffuse.color = 0xFFFFFFFF;
	for (unsigned int i = 0; i < 3; i++)
	{
		EggCarrierInside1Fog[i].Distance = -12000;
		EggCarrierInside1Fog[i].Layer = -12000;
		EggCarrierInside2Fog[i].Toggle = 1;
		EggCarrierInside2Fog[i].Distance = 4000.0f;
		EggCarrierInside2Fog[i].Layer = 800.0f;
		EggCarrierInside2Fog[i].Color = 0xFFA0A0A0;
		EggCarrierInside3Fog[i].Distance = -12000;
		EggCarrierInside3Fog[i].Layer = -12000;
		EggCarrierInside4Fog[i].Toggle = 1;
		EggCarrierInside4Fog[i].Distance = 1216.0f;
		EggCarrierInside4Fog[i].Layer = 139.0f;
		EggCarrierInside4Fog[i].Color = 0xFF7F7F40;
		EggCarrierInside5Fog[i].Distance = -12000;
		EggCarrierInside5Fog[i].Layer = -12000;
		EggCarrierInside6Fog[i].Distance = -12000;
		EggCarrierInside6Fog[i].Layer = -12000;
	}
}

void ADV01C_OnFrame()
{
	if (CurrentLevel == 32 && GameState != 16)
	{
		if (DLLLoaded_Lantern && dword_3C85138 == 0)
		{
			set_blend_factor_ptr(0.0f);
			set_shader_flags_ptr(ShaderFlags_Blend, false);
		}
	}
}