#include "stdafx.h"
#include "ADV01_0_animlist.h"
#include "ADV01_0.h"
#include "ADV01_1.h"
#include "ADV01_2.h"
#include "ADV01_3.h"
#include "ADV01_4.h"
#include "ADV01_5.h"
#include "EggCarrier_Objects.h"
#include "ADV01C_00.h"
#include "ADV01C_01.h"
#include "ADV01C_02.h"
#include "ADV01C_03.h"
#include "ADV01C_04.h"
#include "ADV01C_05.h"
#include "EC_Tornado.h"
#include "EC_Transform.h"

FunctionPointer(void, sub_409FB0, (NJS_ACTION *a1, float frameNumber), 0x409FB0);
FunctionPointer(void, sub_6F4570, (ObjectMaster *a1), 0x6F4570);
DataPointer(ObjectMaster*, dword_3C85138, 0x3C85138);
HMODULE ADV01MODELS = GetModuleHandle(L"ADV01MODELS");
HMODULE ADV01CMODELS = GetModuleHandle(L"ADV01CMODELS");
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
DataArray(FogData, EggCarrierInside1Fog, 0x01100C18, 3);
DataArray(FogData, EggCarrierInside2Fog, 0x01100C48, 3);
DataArray(FogData, EggCarrierInside3Fog, 0x01100C78, 3);
DataArray(FogData, EggCarrierInside4Fog, 0x01100CA8, 3);
DataArray(FogData, EggCarrierInside5Fog, 0x01100CD8, 3);
DataArray(FogData, EggCarrierInside6Fog, 0x01100D08, 3);
DataArray(NJS_VECTOR, SkyboxScale_EggCarrier4, 0x010F212C, 3);
DataArray(PVMEntry, EggCarrierObjectTexlist_Sea, 0x010F34A8, 6);
HMODULE CHRMODELS = GetModuleHandle(L"CHRMODELS_orig");
NJS_OBJECT **___MILES_OBJECTS = (NJS_OBJECT **)GetProcAddress(CHRMODELS, "___MILES_OBJECTS");
NJS_TEXLIST **___ADV01_TEXLISTS = (NJS_TEXLIST **)GetProcAddress(ADV01MODELS, "___ADV01_TEXLISTS");
NJS_MODEL_SADX **___ADV01_MODELS = (NJS_MODEL_SADX **)GetProcAddress(ADV01MODELS, "___ADV01_MODELS");
NJS_TEXLIST **___ADV01C_TEXLISTS = (NJS_TEXLIST **)GetProcAddress(ADV01CMODELS, "___ADV01C_TEXLISTS");
LandTable **___LANDTABLEEC = (LandTable **)GetProcAddress(ADV01MODELS, "___LANDTABLEEC");
LandTable **___LANDTABLEECC = (LandTable **)GetProcAddress(ADV01CMODELS, "___LANDTABLEEC");
NJS_OBJECT **___ADV01C_OBJECTS = (NJS_OBJECT **)GetProcAddress(ADV01CMODELS, "___ADV01C_OBJECTS");
NJS_ACTION **___ADV01C_ACTIONS = (NJS_ACTION **)GetProcAddress(ADV01CMODELS, "___ADV01C_ACTIONS");
NJS_ACTION **___ADV01_ACTIONS = (NJS_ACTION **)GetProcAddress(ADV01MODELS, "___ADV01_ACTIONS");
NJS_OBJECT **___ADV01_OBJECTS = (NJS_OBJECT **)GetProcAddress(ADV01MODELS, "___ADV01_OBJECTS");
NJS_OBJECT **___ADV01EC00_OBJECTS = (NJS_OBJECT **)GetProcAddress(ADV01MODELS, "___ADV01EC00_OBJECTS");
NJS_MODEL_SADX **___ADV01C_MODELS = (NJS_MODEL_SADX **)GetProcAddress(ADV01CMODELS, "___ADV01C_MODELS");

NJS_MATERIAL* ObjectSpecularADV01[] = {
	//OMast
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x00216050),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x00216050),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x00216064),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x00216078),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x0021608C),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x002160A0),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x002160B4),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x002160C8),
	//OBChair
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x00243B98),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x00243BAC),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x00243BC0),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x00243BD4),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x00243BE8),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x00243BFC),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x00243C10),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x0024398C),
	//Gunsight
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x002336A0),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x00233160),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x00233174),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x00231358),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x0023136C),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x00231380),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x00231394),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x002313A8),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x002313BC),
	//OEggmanBed
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x002380D8),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x002380EC),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x00238100),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x00238114),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x00238128),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x0023813C),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x00238150),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x00238164),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x00238178),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x0023818C),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x002381A0),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x002381B4),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x002381C8),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x002381DC),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x002381F0),
};

NJS_MATERIAL* WhiteDiffuseADV01[] = {
	//OHammerSW
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x00110B04),
	//Tarai button
	//&matlistADV01_0011154C[0],
	//&matlistADV01_0011154C[1],
	//&matlistADV01_0011154C[2],
	//Level stuff
	&matlistADV01_00081DF0[0],
	&matlistADV01_00081DF0[1],
	&matlistADV01_00081DF0[2],
	&matlistADV01_00081DF0[3],
	&matlistADV01_00082450[0],
	&matlistADV01_00082450[1],
	&matlistADV01_00082450[2],
	&matlistADV01_00082450[3],
	//OTornado2
	&matlistADV01_0024BE40[23],
	&matlistADV01_0024BE40[24],
	//OTaihou Cannon
	&matlistADV01_0017C018[3],
	&matlistADV01_0017C018[4],
	&matlistADV01_0017C018[5],
	&matlistADV01_0017C018[6],
	&matlistADV01_0017C018[7],
	//Captain room
	&matlistADV01_000CB0BC[4],
	&matlistADV01_000CB0BC[7],
	&matlistADV01_000165BC[0],
	&matlistADV01_000165BC[1],
	&matlistADV01_000165BC[2],
	&matlistADV01_000165BC[3],
	&matlistADV01_000165BC[5],
	&matlistADV01_000165BC[6],
	&matlistADV01_000165BC[7],
	&matlistADV01_000165BC[8],
	&matlistADV01_000165BC[9],
};

NJS_MATERIAL* DisableAlphaRejection_EggCarrier[] = {
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x00209B6C), //Rotating lights outside
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x001F7A58), //Monorail sign (outside)
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x000ED480), //Monorail sign (inside)
};

NJS_MATERIAL* HedgehogHammerDolls[] = {
	//Hedgehog Hammer targets (possibly SL objects?)
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x0011C478),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x0011BF60),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x0011BF74),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x0011BBC8),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x0011B364),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x0011A9E8),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x0011A504),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x0011A1CC),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x0011A07C),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x0011A090),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x00119F2C),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x00119F40),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x001247C8),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x001242B0),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x001242C4),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x00123F18),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x001236B4),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x00122D38),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x00122854),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x0012251C),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x001223CC), //Super Sonic ears (disable alpha rejection)
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x001223E0), //Super Sonic ears (disable alpha rejection)
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x0012227C), //Super Sonic ears (disable alpha rejection)
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x00122290), //Super Sonic ears (disable alpha rejection)
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x00115630),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x00114C38),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x00114C4C),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x00114C60),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x00114C74),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x00114568),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x0011457C),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x001142D4),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x001140CC),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x00113EB4),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x00113B4C),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x001137E4),
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
	if (cliplevel >= 2)
	{
		sub_10001050(&objectADV01_00032A00);
		sub_10001050(&objectADV01_00032D2C);
		sub_10001050(&objectADV01_0003335C);
		sub_10001050(&objectADV01_00033688);
		landtable_00162260.COLCount -= 4;
	}
	else
	{
		landtable_00162260.Col = &collist_0015F764[4];
		landtable_00162260.COLCount -= 4;
	}
}

void __cdecl SetClip_EC01(signed int cliplevel)
{
	if (cliplevel >= 2)
	{
		sub_10001050(&objectADV01_0007F56C);
		sub_10001050(&objectADV01_0007F898);
		sub_10001050(&objectADV01_0007EF3C);
		sub_10001050(&objectADV01_0007EC10);
		sub_10001050(&objectADV01_0008241C_2);
		sub_10001050(&objectADV01_00082A7C_2);
		landtable_001631F0.COLCount -= 6;
	}
	else
	{
		landtable_001631F0.Col = &collist_00162284[6];
		landtable_001631F0.COLCount -= 6;
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
		DrawQueueDepthBias = -30000.0f;
		ProcessModelNode(ADV01_OBJECTS[65], QueuedModelFlagsB_SomeTextureThing, v2);
		njScale(0, 1.0, 1.0, 1.0);
		njPopMatrix(1u);
		ToggleStageFog();
		DrawQueueDepthBias = 0.0f;
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
	DrawQueueDepthBias = -32000.0f;
	ProcessModelNode(v2, QueuedModelFlagsB_SomeTextureThing, v5);
	DrawQueueDepthBias = 0;
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

bool HedgehogHammerDollsFunction(NJS_MATERIAL* material, uint32_t flags)
{
	set_diffuse_ptr(2, false);
	set_specular_ptr(2, false);
	set_alpha_reject_ptr(0.0f, false);
	return true;
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
	ReplaceBIN_DC("SETEC30S");
	ReplaceBIN_DC("SETEC31S");
	ReplaceBIN_DC("SETEC31B");
	ReplaceBIN_DC("SETEC32S");
	ReplaceBIN_DC("SETEC33S");
	ReplaceBIN_DC("SETEC34S");
	ReplaceBIN_DC("SETEC35S");
	ReplaceBIN_DC("CAMEC00S");
	ReplaceBIN_DC("CAMEC01S");
	ReplaceBIN_DC("CAMEC02S");
	ReplaceBIN_DC("CAMEC03S");
	ReplaceBIN_DC("CAMEC04S");
	ReplaceBIN_DC("CAMEC05S");
	ReplaceBIN_DC("CAMEC30S");
	ReplaceBIN_DC("CAMEC31S");
	ReplaceBIN_DC("CAMEC32S");
	ReplaceBIN_DC("CAMEC33S");
	ReplaceBIN_DC("CAMEC34S");
	ReplaceBIN_DC("CAMEC35S");
	switch (EnableSETFixes)
	{
		case SETFixes_Normal:
			AddSETFix("SETEC00S");
			AddSETFix("SETEC01S");
			AddSETFix("SETEC02S");
			AddSETFix("SETEC03S");
			AddSETFix("SETEC04S");
			AddSETFix("SETEC05S");
			AddSETFix("SETEC30S");
			AddSETFix("SETEC31S");
			AddSETFix("SETEC31B");
			AddSETFix("SETEC32S");
			AddSETFix("SETEC33S");
			AddSETFix("SETEC34S");
			AddSETFix("SETEC35S");
			break;
		case SETFixes_Extra:
			AddSETFix_Extra("SETEC00S");
			AddSETFix_Extra("SETEC01S");
			AddSETFix_Extra("SETEC02S");
			AddSETFix_Extra("SETEC03S");
			AddSETFix_Extra("SETEC04S");
			AddSETFix_Extra("SETEC05S");
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
	ReplacePVM("ADV_EC03");
	ReplacePVM("ADV_EC04");
	ReplacePVM("ADV_EC05");
	ReplacePVM("ADV_EC30");
	ReplacePVM("ADV_EC31");
	ReplacePVM("ADV_EC32");
	ReplacePVM("ADV_EC33");
	ReplacePVM("ADV_EC34");
	ReplacePVM("ADV_EC35");
	ReplacePVM("ADV_EC36");
	ReplacePVM("BG_EC00");
	ReplacePVM("EC_ACTDOOR");
	ReplacePVM("EC_ALIFE");
	ReplacePVM("EC_BG");
	ReplacePVM("EC_BOAT");
	ReplacePVM("EC_CLOUDS");
	ReplacePVM("EC_EGGLIFT");
	ReplacePVM("EC_IKADA");
	ReplacePVM("EC_LIGHT");
	ReplacePVM("EC_SKY");
	ReplacePVM("EC_TARAI");
	ReplacePVM("EC_TORNADO");
	ReplacePVM("EC_TRANSFORM");
	ReplacePVM("EC_WATER");
	ReplacePVM("EV_ECCLOUD");
	ReplacePVM("OBJ_EC00");
	ReplacePVM("OBJ_EC30");
	ReplacePVM("PVME101FACTORY");
	ReplacePVM("ADV_EC00");
	ReplacePVM("ADV_EC01");
	ReplacePVM("ADV_EC02");
	ReplacePVM("EC_SEA");
	ResizeTextureList(&OBJ_EC00_TEXLIST, 206);
	if (!SADXWater_EggCarrier) WriteJump((void*)0x0051C440, EggCarrierSea);
	//Door barrier fixes (Gamma's story)
	WriteJump((void*)0x52B2E0, ECDoorBarrier1X); 
	WriteJump((void*)0x52B250, ECDoorBarrier2_asm);
	WriteCall((void*)0x0051AB88, RenderEggCarrier0NPC); //Chaos 4 glitch fix
	WriteJump((void*)0x51B210, EggCarrierSkyBox);
	WriteJump((void*)0x51B3B0, EggCarrierSkyBottom);
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
	HMODULE Lantern = GetModuleHandle(L"sadx-dc-lighting");
	ReplaceBIN("PL_W1B", "PL_W1X");
	for (unsigned int i = 0; i < LengthOfArray(HedgehogHammerDolls); i++)
	{
		RemoveMaterialColors(HedgehogHammerDolls[i]);
	}
	if (DLLLoaded_Lantern)
	{
		if (set_alpha_reject_ptr != nullptr) 
		{
			material_register_ptr(DisableAlphaRejection_EggCarrier, LengthOfArray(DisableAlphaRejection_EggCarrier), &DisableAlphaRejection);
			material_register_ptr(HedgehogHammerDolls, LengthOfArray(HedgehogHammerDolls), &HedgehogHammerDollsFunction);
		}
		material_register_ptr(ObjectSpecularADV01, LengthOfArray(ObjectSpecularADV01), &ForceDiffuse0Specular1);
		//material_register_ptr(LevelSpecularADV01, LengthOfArray(LevelSpecularADV01), &ForceDiffuse0Specular0);
		material_register_ptr(WhiteDiffuseADV01, LengthOfArray(WhiteDiffuseADV01), &ForceWhiteDiffuse1);
		WriteCall((void*)0x006F4577, TurnLightsOff); //Turn the lights off
		WriteCall((void*)0x006F4620, TurnLightsOn); //Turn the lights on
	}
	WriteJump((char *)GetProcAddress(ADV01MODELS, "SetClip_EC00"), SetClip_EC00);
	WriteJump((char *)GetProcAddress(ADV01MODELS, "SetClip_EC01"), SetClip_EC01);
	WriteData<5>((void *)0x0051BB8C, 0x90); //disable that stupid DisableFog thing
	((NJS_OBJECT*)0x03104130)->basicdxmodel->mats[0].diffuse.color = 0xFFFFFFFF;
	___ADV01_TEXLISTS[0] = &texlist_ec00;
	___ADV01_TEXLISTS[1] = &texlist_ec01;
	___ADV01_TEXLISTS[2] = &texlist_ec02;
	___ADV01_TEXLISTS[3] = &texlist_ec03;
	___ADV01_TEXLISTS[4] = &texlist_ec04;
	___ADV01_TEXLISTS[5] = &texlist_ec05;
	___LANDTABLEEC[0] = &landtable_00162260;
	___LANDTABLEEC[1] = &landtable_001631F0;
	___LANDTABLEEC[2] = &landtable_00163CE8;
	___LANDTABLEEC[3] = &landtable_001650C8;
	___LANDTABLEEC[4] = &landtable_00165830;
	___LANDTABLEEC[5] = &landtable_001666F4;
	___LANDTABLEECC[0] = &landtable_0000C64C;
	___LANDTABLEECC[1] = &landtable_0000D7B0;
	___LANDTABLEECC[2] = &landtable_0000E1D0;
	___LANDTABLEECC[3] = &landtable_0000EDB8;
	___LANDTABLEECC[4] = &landtable_0000F7A8;
	___LANDTABLEECC[5] = &landtable_0000FE44;
	___ADV01C_TEXLISTS[15] = &texlist_ec30;
	___ADV01C_TEXLISTS[16] = &texlist_ec31;
	___ADV01C_TEXLISTS[17] = &texlist_ec32;
	___ADV01C_TEXLISTS[18] = &texlist_ec33;
	___ADV01C_TEXLISTS[19] = &texlist_ec34;
	___ADV01C_TEXLISTS[20] = &texlist_ec35;
	___ADV01C_MODELS[28] = &attachADV01_00111938;
	___ADV01C_MODELS[27] = &attachADV01_001114EC;
	___ADV01C_OBJECTS[7] = &objectADV01_00111964; //tarai button
	___ADV01C_OBJECTS[7]->child = &objectADV01_00111518;
	___ADV01C_OBJECTS[8] = &objectADV01_000D243C; //tarai
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
	___ADV01C_OBJECTS[43]->child->child->model = &attachADV01_000AEDD0; //Monorail 1 door
	___ADV01C_OBJECTS[43]->child->model = &attachADV01_000AF564; //Monorail 1 door thing
	___ADV01C_OBJECTS[44]->child->child->model = &attachADV01_000B2D3C; //Monorail 2 door 
	___ADV01C_OBJECTS[44]->child->model = &attachADV01_000B3518; //Monorail 2 door thing
	___ADV01C_OBJECTS[29] = &objectADV01_000ADCD8; //Monorail station
	___ADV01C_ACTIONS[7]->object = &objectADV01_000B8CD4; //Egglift
	___ADV01C_OBJECTS[23] = &objectADV01_000B8CD4; //Egglift
	___ADV01C_ACTIONS[6]->object = &objectADV01_000BAF48; //Door
	___ADV01C_MODELS[27]->mats[0].diffuse.color = 0xFFFFFFFF;
	WriteData<5>((void*)0x005244D6, 0x90); //Disable light flickering

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
		EggCarrierInside1Fog[i].Distance = -12000;
		EggCarrierInside1Fog[i].Layer = -12000;
		EggCarrierInside2Fog[i].Toggle = 1;
		EggCarrierInside2Fog[i].Distance = 4000.0f;
		EggCarrierInside2Fog[i].Layer = 800.0f;
		EggCarrierInside2Fog[i].Color = 0xFFC6C9A8;
		EggCarrierInside3Fog[i].Distance = -12000;
		EggCarrierInside3Fog[i].Layer = -12000;
		EggCarrierInside4Fog[i].Toggle = 1;
		EggCarrierInside4Fog[i].Distance = 1216.0f;
		EggCarrierInside4Fog[i].Layer = 139.0f;
		EggCarrierInside4Fog[i].Color = 0xFFC8C864;
		EggCarrierInside5Fog[i].Distance = -12000;
		EggCarrierInside5Fog[i].Layer = -12000;
		EggCarrierInside6Fog[i].Distance = -12000;
		EggCarrierInside6Fog[i].Layer = -12000;
	}
}

void ADV01_OnFrame()
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