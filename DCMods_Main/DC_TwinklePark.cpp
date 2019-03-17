#include "stdafx.h"
#include "TwinklePark_objects.h"
#include "Twinkle1.h"
#include "Twinkle2.h"
#include "Twinkle3.h"
#include "Buyon.h"

struct __declspec(align(2)) ObjectThingC
{
	NJS_OBJECT *object;
	void(__cdecl *function)(NJS_OBJECT *);
};

DataArray(FogData, TwinklePark1Fog, 0x026B339C, 3);
DataArray(FogData, TwinklePark2Fog, 0x026B33CC, 3);
DataArray(FogData, TwinklePark3Fog, 0x026B33FC, 3);
DataArray(FogData, TwinklePark4Fog, 0x026B342C, 3);
FunctionPointer(void, sub_61D4E0, (ObjectMaster *a1), 0x61D4E0);
FunctionPointer(void, sub_61D1F0, (ObjectMaster *a1), 0x61D1F0);
FunctionPointer(void, sub_4BA5D0, (NJS_OBJECT *a1, ObjectThingC *a2), 0x4BA5D0);
FunctionPointer(void, sub_408530, (NJS_OBJECT *a1), 0x408530);
FunctionPointer(void, sub_405450, (NJS_ACTION *a1, float frame, float scale), 0x405450);

HMODULE CHRMODELS2 = GetModuleHandle(L"CHRMODELS2_orig");

SETObjData setdata_tp = {};
static int anim = 74;
static int animlight = 95;
static int animtimer = 0;

NJS_MATERIAL matlistSTG03_034C3AD0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_SRC }
};

NJS_TEXNAME textures_tpobjects[97];

NJS_MATERIAL* DisableAlphaRejection_TwinklePark[] = {
	((NJS_MATERIAL*)0x027B3EF8), //OLamp
	((NJS_MATERIAL*)0x027B3DEC), //OLamp
	((NJS_MATERIAL*)0x027A0488), //OFlagWLamp
};

NJS_MATERIAL* ObjectSpecular_Twinkle[] = {
	//OFence2
	((NJS_MATERIAL*)0x027A24B0),
	((NJS_MATERIAL*)0x027A24C4),
	//((NJS_MATERIAL*)0x027A24D8),
	((NJS_MATERIAL*)0x027A24EC),
	((NJS_MATERIAL*)0x027A2500),
	//Rollercoaster
	&matlistSTG03_023A0598[0],
	&matlistSTG03_023A0598[1],
	&matlistSTG03_023A0598[2],
	&matlistSTG03_023A0598[3],
	&matlistSTG03_023A0598[4],
	&matlistSTG03_023A0598[5],
	&matlistSTG03_023A0598[6],
	&matlistSTG03_023A0598[7],
	&matlistSTG03_023A0598[8],
	&matlistSTG03_023A0598[9],
	&matlistSTG03_023A0598[10],
	&matlistSTG03_023A0598[11],
	//Amy's barrel
	((NJS_MATERIAL*)((size_t)CHRMODELS2 + 0x00016498)),
	((NJS_MATERIAL*)((size_t)CHRMODELS2 + 0x000164AC)),
	((NJS_MATERIAL*)((size_t)CHRMODELS2 + 0x000164C0)),
	((NJS_MATERIAL*)((size_t)CHRMODELS2 + 0x000164D4)),
	((NJS_MATERIAL*)((size_t)CHRMODELS2 + 0x000164E8)),
	//Last mirror 
	&matlistSTG03_00091C40X[0],
	&matlistSTG03_00091F0CX[0],
	//O Arch 2
	((NJS_MATERIAL*)0x038BEF00),
	((NJS_MATERIAL*)0x038BEF14),
	((NJS_MATERIAL*)0x038BEF28),
	((NJS_MATERIAL*)0x038BEF3C),
	((NJS_MATERIAL*)0x038BEF50),
	((NJS_MATERIAL*)0x038BEF64),
	((NJS_MATERIAL*)0x038BEF78),
	((NJS_MATERIAL*)0x038BEF8C),
	((NJS_MATERIAL*)0x038BEFA0),
	((NJS_MATERIAL*)0x038BEFB4),
	((NJS_MATERIAL*)0x038BEFC8),
	((NJS_MATERIAL*)0x038BEFDC),
};

NJS_MATERIAL* ObjectSpecularWhiteDiffuse_Twinkle[] = {
	((NJS_MATERIAL*)0x038C2D3C), //OLight
	((NJS_MATERIAL*)0x038C2D50), //OLight
};

NJS_MATERIAL* WhiteDiffuse_Twinkle[] = {
	//Fence2
	((NJS_MATERIAL*)0x027A24D8),
	//Barrel
	&matlistSTG03_000A075C[0],
	&matlistSTG03_000A075C[1],
	&matlistSTG03_000A075C[2],
	&matlistSTG03_000A075C[3],
	((NJS_MATERIAL*)0x038C23BC), //Pole
	((NJS_MATERIAL*)0x038C1700), //Panel
	((NJS_MATERIAL*)0x038C1714), //Panel
	//Satellite
	((NJS_MATERIAL*)0x038AE590),
	((NJS_MATERIAL*)0x038AE5A4),
	/*((NJS_MATERIAL*)0x038ADB18),
	((NJS_MATERIAL*)0x038ADB2C),
	((NJS_MATERIAL*)0x038ADB40),
	((NJS_MATERIAL*)0x038ADB54),
	(((NJS_MATERIAL*)0x038ADED4),
	((NJS_MATERIAL*)0x038AE254),*/
	&matlistSTG03_000F28A0[1],// O CartStopper
	&matlistSTG03_000F28A0[8],// O CartStopper
};

NJS_MATERIAL* CartMaterials[] =
{
	((NJS_MATERIAL*)0x038AAAF0),
	((NJS_MATERIAL*)0x038AAB04),
	((NJS_MATERIAL*)0x038AAB18),
	((NJS_MATERIAL*)0x038AAB2C),
	((NJS_MATERIAL*)0x038AAB40),
	((NJS_MATERIAL*)0x038AA584),
	((NJS_MATERIAL*)0x038AA338),
	((NJS_MATERIAL*)0x038AA34C),
	((NJS_MATERIAL*)0x038AA1AC),
	((NJS_MATERIAL*)0x038AA1C0),
	((NJS_MATERIAL*)0x038A9F60),
	((NJS_MATERIAL*)0x038A9F74),
	((NJS_MATERIAL*)0x038A9DF8),
	((NJS_MATERIAL*)0x038A992C),
	((NJS_MATERIAL*)0x038A9940),
	((NJS_MATERIAL*)0x038A9954),
	((NJS_MATERIAL*)0x038A97B0),
	((NJS_MATERIAL*)0x038A92E4),
	((NJS_MATERIAL*)0x038A92F8),
	((NJS_MATERIAL*)0x038A930C),
	((NJS_MATERIAL*)0x038A9164),
	((NJS_MATERIAL*)0x038A89D0),
	((NJS_MATERIAL*)0x038A89E4),
	((NJS_MATERIAL*)0x038A89F8),
	((NJS_MATERIAL*)0x038A8A0C),
	((NJS_MATERIAL*)0x038A8A20),
	((NJS_MATERIAL*)0x038A8464),
	((NJS_MATERIAL*)0x038A8218),
	((NJS_MATERIAL*)0x038A822C),
	((NJS_MATERIAL*)0x038A808C),
	((NJS_MATERIAL*)0x038A80A0),
	((NJS_MATERIAL*)0x038A7E40),
	((NJS_MATERIAL*)0x038A7E54),
	((NJS_MATERIAL*)0x038A7CD8),
	((NJS_MATERIAL*)0x038A780C),
	((NJS_MATERIAL*)0x038A7820),
	((NJS_MATERIAL*)0x038A7834),
	((NJS_MATERIAL*)0x038A7690),
	((NJS_MATERIAL*)0x038A71C4),
	((NJS_MATERIAL*)0x038A71D8),
	((NJS_MATERIAL*)0x038A71EC),
	((NJS_MATERIAL*)0x038A7048),
	//Type 3 (Sonic)
	((NJS_MATERIAL*)0x038B9018),
	((NJS_MATERIAL*)0x038B902C),
	((NJS_MATERIAL*)0x038B9040),
	((NJS_MATERIAL*)0x038B9054),
	((NJS_MATERIAL*)0x038B9068),
	((NJS_MATERIAL*)0x038B95B8),
	((NJS_MATERIAL*)0x038B95CC),
	((NJS_MATERIAL*)0x038B97D4),
	((NJS_MATERIAL*)0x038B97E8),
	((NJS_MATERIAL*)0x038B9928),
	((NJS_MATERIAL*)0x038B993C),
	((NJS_MATERIAL*)0x038B9B44),
	((NJS_MATERIAL*)0x038B9B58),
	((NJS_MATERIAL*)0x038B9C88),
	((NJS_MATERIAL*)0x038BA0FC),
	((NJS_MATERIAL*)0x038BA110),
	((NJS_MATERIAL*)0x038BA124),
	((NJS_MATERIAL*)0x038BA270),
	((NJS_MATERIAL*)0x038BA71C),
	((NJS_MATERIAL*)0x038BA730),
	((NJS_MATERIAL*)0x038BA744),
	((NJS_MATERIAL*)0x038BA890),
};

NJS_MATERIAL* LevelSpecular_Twinkle[] = {
	//Barrel pieces
	((NJS_MATERIAL*)0x0279D398),
	((NJS_MATERIAL*)0x0279D3AC),
	((NJS_MATERIAL*)0x0279D6E0),
	((NJS_MATERIAL*)0x0279D828),
	((NJS_MATERIAL*)0x0279D934),
	((NJS_MATERIAL*)0x0279DA5C),
	//Zero
	((NJS_MATERIAL*)0x0098A2B0),
	((NJS_MATERIAL*)0x0098A2C4),
	((NJS_MATERIAL*)0x0098A2D8),
	((NJS_MATERIAL*)0x0098A2EC),
	((NJS_MATERIAL*)0x0098A300),
	((NJS_MATERIAL*)0x0098ACD0),
	((NJS_MATERIAL*)0x0098ACE4),
	((NJS_MATERIAL*)0x0098ACF8),
	((NJS_MATERIAL*)0x0098AAE0),
	((NJS_MATERIAL*)0x0098C140),
	((NJS_MATERIAL*)0x0098C154),
	((NJS_MATERIAL*)0x0098C168),
	((NJS_MATERIAL*)0x0098BF50),
	((NJS_MATERIAL*)0x00990FE0),
	((NJS_MATERIAL*)0x00990FF4),
	//Amy's balloon
	((NJS_MATERIAL*)0x008BD7A0),
	//ODoor
	((NJS_MATERIAL*)0x027B2418),
	((NJS_MATERIAL*)0x027B242C),
	((NJS_MATERIAL*)0x027B2440),
	//Dash pad
	((NJS_MATERIAL*)0x008B8828),
	((NJS_MATERIAL*)0x008B883C),
	((NJS_MATERIAL*)0x008B8850),
	((NJS_MATERIAL*)0x008B8864),
	((NJS_MATERIAL*)0x008B8878),
	((NJS_MATERIAL*)0x008B8498),
	((NJS_MATERIAL*)0x008B84AC),
	//Buyon middle
	((NJS_MATERIAL*)0x038E3B60),
	((NJS_MATERIAL*)0x038E3E58),
	//Sweep
	((NJS_MATERIAL*)0x038D05C8),
	((NJS_MATERIAL*)0x038D05DC),
	((NJS_MATERIAL*)0x038D05F0),
	((NJS_MATERIAL*)0x038D0604),
	((NJS_MATERIAL*)0x038D0618),
	((NJS_MATERIAL*)0x038CFB80),
	((NJS_MATERIAL*)0x038CFB94),
	((NJS_MATERIAL*)0x038CFBA8),
	((NJS_MATERIAL*)0x038CFBBC),
	((NJS_MATERIAL*)0x038CFBD0),
	((NJS_MATERIAL*)0x038CFBE4),
	((NJS_MATERIAL*)0x038CFBF8),
	((NJS_MATERIAL*)0x038CFC0C),
	((NJS_MATERIAL*)0x038CF850),
	((NJS_MATERIAL*)0x038CF864),
	((NJS_MATERIAL*)0x038CF878),
	((NJS_MATERIAL*)0x038CF88C),
	((NJS_MATERIAL*)0x038CF5E8),
	((NJS_MATERIAL*)0x038CF5FC),
	((NJS_MATERIAL*)0x038CF610),
	((NJS_MATERIAL*)0x038CF260),
	((NJS_MATERIAL*)0x038CF274),
	((NJS_MATERIAL*)0x038CEF58),
	((NJS_MATERIAL*)0x038CEF6C),
	((NJS_MATERIAL*)0x038CEF80),
	((NJS_MATERIAL*)0x038CEDE8),
	((NJS_MATERIAL*)0x038CEA60),
	((NJS_MATERIAL*)0x038CEA74),
	((NJS_MATERIAL*)0x038CE758),
	((NJS_MATERIAL*)0x038CE76C),
	((NJS_MATERIAL*)0x038CE780),
	((NJS_MATERIAL*)0x038CE5E8),
	((NJS_MATERIAL*)0x038CE260),
	((NJS_MATERIAL*)0x038CE274),
	((NJS_MATERIAL*)0x038CDF58),
	((NJS_MATERIAL*)0x038CDF6C),
	((NJS_MATERIAL*)0x038CDF80),
	((NJS_MATERIAL*)0x038CDDE8),
	((NJS_MATERIAL*)0x038CDA60),
	((NJS_MATERIAL*)0x038CDA74),
	((NJS_MATERIAL*)0x038CD758),
	((NJS_MATERIAL*)0x038CD76C),
	((NJS_MATERIAL*)0x038CD780),
	((NJS_MATERIAL*)0x038CD5E8),
	//Use_Env stuff
	&matlistSTG03_000263FC[0],
	&matlistSTG03_00026884[0],
	&matlistSTG03_00026884[1],
	&matlistSTG03_00028260[0],
	&matlistSTG03_00028260[1],
	&matlistSTG03_0002B274[0],
	&matlistSTG03_0002B274[1],
	&matlistSTG03_0002E288[0],
	&matlistSTG03_0002E288[1],
	&matlistSTG03_000312B8[0],
	&matlistSTG03_000312B8[1],
	&matlistSTG03_000342E8[0],
	&matlistSTG03_000342E8[1],
	&matlistSTG03_00035CA8[0],
	&matlistSTG03_00035CA8[1],
	&matlistSTG03_0003763C[0],
	&matlistSTG03_0003763C[1],
	&matlistSTG03_00038FD0[0],
	&matlistSTG03_00038FD0[1],
	&matlistSTG03_0003A974[0],
	&matlistSTG03_0003A974[1],
	&matlistSTG03_0003C0C8[0],
	&matlistSTG03_0003C0C8[1],
	//Buyon
	//&matlistSTG03_034E23EC[0],
};

void Mirror_Display(ObjectMaster *a1)
{
	EntityData1 *v1;
	v1 = a1->Data1;
	if (!DroppedFrames)
	{
		njSetTexture(&texlist_twinkle3);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		njScale(0, 1.0f, 1.0f, 1.0f);
		njRotateXYZ(0, 0, 0, 0);
		DrawQueueDepthBias = 6000.0f;
		ProcessModelNode(&objectSTG03_0009FFC8_2, (QueuedModelFlagsB)0, 1.0f); //far right
		ProcessModelNode(&objectSTG03_000A00CC_2, (QueuedModelFlagsB)0, 1.0f); //far left
		ProcessModelNode(&objectSTG03_000A0168_2, (QueuedModelFlagsB)0, 1.0f); //far right 2
		ProcessModelNode(&objectSTG03_000A0064_2, (QueuedModelFlagsB)0, 1.0f); //far left 2
		DrawQueueDepthBias = 5000.0f;
		ProcessModelNode(&objectSTG03_0009FF94_2, (QueuedModelFlagsB)0, 1.0f); //mid right
		ProcessModelNode(&objectSTG03_000A0098_2, (QueuedModelFlagsB)0, 1.0f); //mid left 
		ProcessModelNode(&objectSTG03_000A0134_2, (QueuedModelFlagsB)0, 1.0f); //mid right 2
		ProcessModelNode(&objectSTG03_000A0030_2, (QueuedModelFlagsB)0, 1.0f); //mid left 2
		DrawQueueDepthBias = 4000.0f;
		ProcessModelNode(&objectSTG03_000914F8_2, (QueuedModelFlagsB)0, 1.0f); //end right
		ProcessModelNode(&objectSTG03_00091A60_2, (QueuedModelFlagsB)0, 1.0f); //end left
		ProcessModelNode(&objectSTG03_000A0100_2, (QueuedModelFlagsB)0, 1.0f); //end right 2
		ProcessModelNode(&objectSTG03_0009FFFC_2, (QueuedModelFlagsB)0, 1.0f); //end left 2
		DrawQueueDepthBias = 3000.0f;
		ProcessModelNode(&objectSTG03_00091ED8X, (QueuedModelFlagsB)0, 1.0f); //end 1
		ProcessModelNode(&objectSTG03_000925E8X, (QueuedModelFlagsB)0, 1.0f); //end 2
		njPopMatrix(1u);
		DrawQueueDepthBias = 0;
	}
}

void Mirror_Main(ObjectMaster *a1)
{
	if (CurrentLevel == 3 && CurrentAct == 2) Mirror_Display(a1);
	else CheckThingButThenDeleteObject(a1);
}

void Mirror_Load(ObjectMaster *a1)
{
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))Mirror_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))Mirror_Display;
	a1->DeleteSub = DeleteObject_DynamicCOL;
}

void LoadMirrors()
{
	ObjectMaster *obj;
	EntityData1 *ent;
	ObjectFunc(OF0, Mirror_Load);
	setdata_tp.Distance = 612800.0f;
	obj = LoadObject((LoadObj)2, 3, OF0);
	obj->SETData.SETData = &setdata_tp;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 0;
		ent->Position.y = 0;
		ent->Position.z = 0;
		ent->Rotation.x = 0;
		ent->Rotation.y = 0;
		ent->Rotation.z = 0;
	}
}

void __cdecl SkyBox_TwinklePark_LoadX(ObjectMaster *a1)
{
	a1->MainSub = sub_61D4E0;
	a1->DisplaySub = sub_61D1F0;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
	if (CurrentLevel == 3 && CurrentAct == 2) LoadMirrors();
}

void __cdecl TwinkleParkHook(ObjectMaster *a1)
{
	ToggleStageFog();
	if (CurrentLevel == 3 && CurrentAct == 2) LoadMirrors();
}

void CartFunction(NJS_OBJECT *a1, ObjectThingC *a2)
{
	sub_4BA5D0(a1, a2);
	if (a1 == (NJS_OBJECT*)0x038BAAA4) sub_4BA5D0(&objectSTG03_034BAAA4, a2);
}

void FixArchLight(NJS_MODEL_SADX *model)
{
	DrawModel(model);
	if (model == &attachSTG03_034C0298) ProcessModelNode(&objectSTG03_034C02C4_2, QueuedModelFlagsB_SomeTextureThing, 1.0f);
}

void FixArchLight_Pause(NJS_OBJECT *object)
{
	sub_408530(object);
	if (object == &objectSTG03_034C02C4)
	{
		ProcessModelNode(&objectSTG03_034C02C4_2, QueuedModelFlagsB_SomeTextureThing, 1.0f);
		ProcessModelNode(&objectSTG03_034BFC74_2, QueuedModelFlagsB_SomeTextureThing, 1.0f);
	}
}

void RenderCatapult(NJS_ACTION *a1, float frame, float scale)
{
	sub_405450(a1, frame, scale);
	DrawQueueDepthBias = -17000.0f;
	ProcessModelNode(&objectSTG03_000A3CCCX, QueuedModelFlagsB_EnableZWrite, 1.0f);
	DrawQueueDepthBias = 0.0f;
}

void TwinklePark_Init(const IniFile *config, const HelperFunctions &helperFunctions)
{
	ReplaceBIN_DC("CAM0300S");
	ReplaceBIN_DC("CAM0301A");
	ReplaceBIN_DC("CAM0301B");
	ReplaceBIN_DC("CAM0301S");
	ReplaceBIN_DC("CAM0302A");
	ReplaceBIN_DC("CAM0302S");
	ReplaceBIN_DC("SET0300S");
	ReplaceBIN_DC("SET0301A");
	ReplaceBIN_DC("SET0301B");
	ReplaceBIN_DC("SET0301S");
	ReplaceBIN_DC("SET0302A");
	ReplaceBIN_DC("SET0302S");

	switch (EnableSETFixes)
	{
		case SETFixes_Normal:
			AddSETFix("SET0301A");
			AddSETFix("SET0301B");
			AddSETFix("SET0301S");
			AddSETFix("SET0302A");
			break;
		case SETFixes_Extra:
			AddSETFix_Extra("SET0301A");
			AddSETFix_Extra("SET0301B");
			AddSETFix_Extra("SET0301S");
			AddSETFix_Extra("SET0302A");
			break;
		default:
			break;
	}

	ReplacePVM("BG_SHAREOBJ");
	ReplacePVM("OBJ_SHAREOBJ");
	ReplacePVM("OBJ_TWINKLE");
	ReplacePVM("TWINKLE01");
	ReplacePVM("TWINKLE02");
	ReplacePVM("TWINKLE03");
	ResizeTextureList(&OBJ_TWINKLE_TEXLIST, 96);
	WriteData((LandTable**)0x97DA68, &landtable_0001788C);
	WriteData((LandTable**)0x97DA6C, &landtable_00019344);
	WriteData((LandTable**)0x97DA70, &landtable_00019F5C);
	//Arch light fixes
	WriteCall((void*)0x0079C5FD, FixArchLight);
	WriteCall((void*)0x0079C36A, FixArchLight_Pause);
	WriteData((NJS_OBJECT**)0x0079C72E, &objectSTG03_034C02C4);
	WriteData((NJS_OBJECT**)0x038C5BF8, &objectSTG03_034C02C4);
	WriteData((NJS_OBJECT**)0x038C5C40, &objectSTG03_034C02C4);
	WriteData((NJS_OBJECT**)0x038C5C64, &objectSTG03_034C02C4);
	WriteData((NJS_MODEL_SADX**)0x79C848, &attachSTG03_034C0298);
	WriteData((NJS_MODEL_SADX**)0x79C8C5, &attachSTG03_034C0298);
	WriteData((NJS_MODEL_SADX**)0x79C9A0, &attachSTG03_034C0298);
	//Cart fixes
	WriteCall((void*)0x00796F0C, CartFunction);
	*(NJS_MODEL_SADX*)0x038B907C = attachSTG03_034B907C_2; //Cart (Sonic)
	for (unsigned int c = 0; c < LengthOfArray(CartMaterials); c++)
	{
		CartMaterials[c]->diffuse.argb.r = 178;
		CartMaterials[c]->diffuse.argb.g = 178;
		CartMaterials[c]->diffuse.argb.b = 178;
	}
	//Mirror stuff
	WriteJump((void*)0x0061CAFE, TwinkleParkHook);
	WriteJump((void*)0x0061D570, SkyBox_TwinklePark_LoadX);
	//Amy's barrel fix
	HMODULE CHRMODELS2 = GetModuleHandle(L"CHRMODELS_orig");
	if (CHRMODELS2 != nullptr)
	{
		NJS_OBJECT **___AMY_OBJECTS = (NJS_OBJECT **)GetProcAddress(CHRMODELS2, "___AMY_OBJECTS");
		___AMY_OBJECTS[1]->child->child->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		___AMY_OBJECTS[1]->child->child->basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
	}
	((NJS_OBJECT*)0x008BF3A0)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT; //shadow blob
	if (DLLLoaded_Lantern)
	{
		if (set_alpha_reject_ptr != nullptr) material_register_ptr(DisableAlphaRejection_TwinklePark, LengthOfArray(DisableAlphaRejection_TwinklePark), &DisableAlphaRejection);
		material_register_ptr(LevelSpecular_Twinkle, LengthOfArray(LevelSpecular_Twinkle), &ForceDiffuse0Specular0);
		material_register_ptr(ObjectSpecular_Twinkle, LengthOfArray(ObjectSpecular_Twinkle), &ForceDiffuse0Specular1);
		material_register_ptr(WhiteDiffuse_Twinkle, LengthOfArray(WhiteDiffuse_Twinkle), &ForceWhiteDiffuse3);
		material_register_ptr(ObjectSpecularWhiteDiffuse_Twinkle, LengthOfArray(ObjectSpecularWhiteDiffuse_Twinkle), &ForceWhiteDiffuse3Specular1);
	}
	*(NJS_OBJECT*)0x27AF5EC = objectSTG03_000ADBE0; //Double door
	*(NJS_OBJECT*)0x27A3F5C = objectSTG03_000A6CD8; //OFlyer
	*(NJS_OBJECT*)0x27AFCF0 = objectSTG03_000AE2BC; //Crown
	*(NJS_OBJECT*)0x38B119C = objectSTG03_000DF3F0; //Ship
	*(NJS_OBJECT*)0x38BFA74 = objectSTG03_000ED90C; //Arch
	*(NJS_OBJECT*)0x38C02C4 = objectSTG03_000EE138; //Arch supporter
	*(NJS_OBJECT*)0x38BE5F4 = objectSTG03_000EC4E0; //Dash pad
	*(NJS_OBJECT*)0x38C07CC = objectSTG03_000EE618; //Jump pad
	*(NJS_OBJECT*)0x38C5B3C = objectSTG03_000F3170; //OCardStopper part
	*(NJS_OBJECT*)0x38BE2B4 = objectSTG03_000EC1B4; //OPlanet with rings
	((NJS_OBJECT*)0x38C3A68)->basicdxmodel->mats[0].diffuse.argb.a = 255; //The light! Finally
	*(NJS_OBJECT*)0x27A67B4 = objectSTG03_000A8D60; //OBowWindow
	*(NJS_OBJECT*)0x027B23E4 = objectSTG03_000B0818; //Trap door
	*(NJS_OBJECT*)0x027A0454 = objectSTG03_000A3CCC; //Bowling catapult
	WriteCall((void*)0x621FE5, RenderCatapult); //Catapult fix
	*(NJS_OBJECT*)0x027B5884 = objectSTG03_000B2A40; //O Foothold
	*(NJS_OBJECT*)0x038E50C4 = objectSTG03_034E50C4; //Buyon material fixes
	*(NJS_OBJECT*)0x038E3584 = objectSTG03_034E3584;	//Buyon material fixes
	*(NJS_OBJECT*)0x038E3B2C = objectSTG03_034E3B2C;	//Buyon material fixes
	ResizeTextureList((NJS_TEXLIST*)0x26B9960, textures_twinkle1);
	ResizeTextureList((NJS_TEXLIST*)0x2721A8C, textures_twinkle2);
	ResizeTextureList((NJS_TEXLIST*)0x26FEA54, textures_twinkle3);
	*(NJS_OBJECT*)0x0279D364 = objectSTG03_000A0E58; // barrel
	*(NJS_OBJECT *)0x027A247C = objectSTG03_023A247C; // rollercoaster
	((NJS_OBJECT *)0x38BAA3C)->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2; //cart
	((NJS_OBJECT *)0x38BAA3C)->basicdxmodel->mats[1].diffuse.color = 0xFFB2B2B2; //cart
	((NJS_OBJECT *)0x027AC44C)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_OBJECT *)0x027AC44C)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_OBJECT *)0x027AC44C)->basicdxmodel->mats[4].attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_OBJECT *)0x027AC44C)->basicdxmodel->mats[5].attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_OBJECT *)0x027AC44C)->basicdxmodel->mats[8].attrflags |= NJD_FLAG_IGNORE_LIGHT;
	WriteData<1>((char*)0x0079DB92, 0x01); //OPanel blending
	*(NJS_OBJECT*)0x027AAFF4 = objectSTG03_000AA710; // pirate ship
	*(NJS_MODEL_SADX*)0x027AC420 = attachSTG03_000AB6B4;//pirate ship blinking supporter
	*(NJS_MODEL_SADX*)0x027AB6B4 = attachSTG03_000AACA0;//pirate ship rotating thing right
	*(NJS_MODEL_SADX*)0x027A6E74 = attachSTG03_000A92F0;//pirate ship rotating thing left
	*(NJS_OBJECT*)0x027BF9DC = objectSTG03_000B9E98; // spinning roof
	*(NJS_OBJECT*)0x027BCD7C = objectSTG03_000B812C; // lilypad
	*(NJS_OBJECT *)0x027C05FC = objectSTG03_000BA81C; //Monitor in Act 1
	*(NJS_OBJECT *)0x027A62E4 = objectSTG03_000A89E4; //Flag with lamp
	((NJS_ACTION*)0x027C295C)->object = &objectSTG03_000A7A7C; //Flag 1
	((NJS_ACTION*)0x027C26B4)->object = &objectSTG03_000A7640; //Flag 2
	((NJS_OBJECT *)0x027B0708)->evalflags |= NJD_EVAL_HIDE; //Merry-go-round floor
	*(NJS_OBJECT *)0x027AE4F4 = objectSTG03_000AD08C; //Merry-go-round
	*(NJS_OBJECT *)0x027BEA34 = objectSTG03_000B95A0; //Horsies
	*(NJS_OBJECT *)0x027AD86C = objectSTG03_000AC45C; //Bowling door
	((NJS_OBJECT *)0x027B3DB8)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Bowling pin
	((NJS_OBJECT *)0x027B3DB8)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Bowling pin
	((NJS_OBJECT *)0x027B3DB8)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Bowling pin
	((NJS_OBJECT *)0x027A4AD0)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Flag1 1
	((NJS_OBJECT *)0x027A466C)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Flag1 2
	((NJS_OBJECT *)0x027A466C)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Flag1 3
	((NJS_OBJECT *)0x027A5024)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Flag2 1
	((NJS_OBJECT *)0x027A5024)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Flag2 2
	((NJS_OBJECT *)0x027A5024)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Flag2 3
	((NJS_OBJECT *)0x027A5464)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Flag with lamp 1
	((NJS_OBJECT *)0x027A5464)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Flag with lamp 2
	((NJS_OBJECT *)0x027A58A4)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Flag with lamp 3
	((NJS_OBJECT *)0x027A58A4)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Flag with lamp 4
	*(NJS_OBJECT*)0x027B6170 = objectSTG03_000B34C8; // yellow flower pot (wall)
	*(NJS_OBJECT*)0x027B80C4 = objectSTG03_000B4F1C; // yellow flower pot
	*(NJS_OBJECT*)0x027B6A58 = objectSTG03_000B34C8_2; // pink flower pot (wall)
	*(NJS_OBJECT*)0x027B972C = objectSTG03_000B5EE8; // pink flower pot
	*(NJS_OBJECT*)0x027BAC54 = objectSTG03_000B6CF8; // yellow flower bed
	*(NJS_OBJECT*)0x027BC1C4 = objectSTG03_000B6CF8_2; // pink flower bed
	for (unsigned int i = 0; i < 3; i++)
	{
		TwinklePark1Fog[i].Layer = 1500.0f;
		TwinklePark2Fog[i].Layer = -1400.0f;
		TwinklePark2Fog[i].Distance = -3200.0f;
		TwinklePark2Fog[i].Color = 0xFF100030;
		TwinklePark3Fog[i].Layer = -800.0f;
		TwinklePark3Fog[i].Distance = -2200.0f;
		TwinklePark3Fog[i].Color = 0xFF100030;
		TwinklePark4Fog[i].Color = 0xFF000000;
		TwinklePark4Fog[i].Layer = 1.0f;
		TwinklePark4Fog[i].Distance = 1200.0f;
		TwinklePark4Fog[i].Toggle = 1;
	}
}

void TwinklePark_OnFrame()
{
	{
		if (CurrentLevel == 3 && CurrentAct == 1)
		{
			if (GameState != 16)
			{
				objectSTG03_000AEC6C.ang[1] = objectSTG03_000AEC6C.ang[1] + 64;
				if (anim > 87) anim = 74;
				matlistSTG03_00065D8C[0].attr_texId = anim;
				matlistSTG03_0001A3A8[0].attr_texId = anim;
				matlistSTG03_000657A0[0].attr_texId = anim;
				matlistSTG03_00065A3C[0].attr_texId = anim;
				if (FramerateSetting < 2 && FrameCounter % 2 == 0 || FramerateSetting >= 2) anim++;
				objectSTG03_000AA710.basicdxmodel->mats[14].attr_texId = animlight;
				objectSTG03_000AA710.basicdxmodel->mats[3].attr_texId = animlight;
				objectSTG03_000AA710.basicdxmodel->mats[8].attr_texId = animlight;
				objectSTG03_000AA710.basicdxmodel->mats[12].attr_texId = animlight;
				if (animtimer >= 30 && animlight == 95)
				{
					animlight = 28;
					animtimer = 0;
				}
				if (animtimer >= 30 && animlight == 28)
				{
					animlight = 95;
					animtimer = 0;
				}
				if (GameState != 16)
				{
					if (FramerateSetting < 2) animtimer++;
					if (FramerateSetting >= 2) animtimer = animtimer + 2;
				}
			}
		}
	}
}