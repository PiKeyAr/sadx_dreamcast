#include "stdafx.h"

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

/*
#include "ADV01C_00.h"
#include "ADV01C_01.h"
#include "ADV01C_02.h"
#include "ADV01C_03.h"
#include "ADV01C_04.h"
#include "ADV01C_05.h"
*/

NJS_OBJECT* TaraiButton_Transparent = nullptr;
NJS_OBJECT* TaraiButton_OpaqueOnly = nullptr;

DataPointer(ObjectMaster*, dword_3C85138, 0x3C85138);
DataArray(int, TaraiButtons, 0x1102B28, 5);
DataArray(char, byte_3C6293C, 0x3C6293C, 5);
DataArray(PVMEntry, stru_10F34A8, 0x10F34A8, 6);
DataArray(PVMEntry, stru_1101360, 0x1101360, 2);
DataArray(FogData, EggCarrierInside1Fog, 0x01100C18, 3);
DataArray(FogData, EggCarrierInside2Fog, 0x01100C48, 3);
DataArray(FogData, EggCarrierInside3Fog, 0x01100C78, 3);
DataArray(FogData, EggCarrierInside4Fog, 0x01100CA8, 3);
DataArray(FogData, EggCarrierInside5Fog, 0x01100CD8, 3);
DataArray(FogData, EggCarrierInside6Fog, 0x01100D08, 3);
FunctionPointer(void, sub_409FB0, (NJS_ACTION* a1, float frameNumber), 0x409FB0);
FunctionPointer(void, sub_6F4570, (ObjectMaster* a1), 0x6F4570);
FunctionPointer(void, sub_407A00, (NJS_MODEL_SADX* model, float scale), 0x407A00);
FunctionPointer(void, sub_409450, (NJS_MODEL_SADX* a1, int a2), 0x409450);

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

void RenderTaraiButtonLetter(int a1)
{
	njPushMatrix(0);
	njTranslate(0, 0.0, 2.0282631f, 0.0f);
	ADV01C_OBJECTS[7]->child->basicdxmodel->mats->attr_texId = a1;
	DrawModel(ADV01C_MODELS[27]);
	njPopMatrix(1u);
}

void OTarai_Child_Display(ObjectMaster* a1)
{
	EntityData1* v1; // ebp
	Angle v2; // eax
	NJS_MODEL_SADX* v3; // ebx
	NJS_MATERIAL* v4; // eax
	NJS_MODEL_SADX* v7; // ebx
	NJS_MATERIAL* v8; // eax
	int v5; // ecx

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		njSetTexture(&EC_TARAI_TEXLIST);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = v1->Rotation.y;
		if (v2)
		{
			njRotateY(0, v2);
		}
		//Draw the letter
		DrawModelCallback_QueueObjectInt(RenderTaraiButtonLetter, TaraiButtons[byte_3C6293C[v1->Index]], -27000.0f, QueuedModelFlagsB_SomeTextureThing);
		//Render the opaque part of the button
		DrawModel(TaraiButton_OpaqueOnly->basicdxmodel);
		//Create and the button (transparent)
		v3 = (NJS_MODEL_SADX*)late_alloca(44);
		v4 = (NJS_MATERIAL*)late_alloca(60);
		if (v3)
		{
			if (v4)
			{
				memcpy(v3, ADV01C_MODELS[28], 0x2Cu);
				memcpy(v4, ADV01C_MODELS[28]->mats, 0x3Cu);
				v3->mats = v4;
				v5 = v1->Action;
				if (v1->Action == 13 || v5 == 12)
				{
					v4->attr_texId = 13;
				}
				else
				{
					v4->attr_texId = 2;
				}
				sub_409450(v3, 4);
			}
		}
		njPopMatrix(1u);
	}
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
	ADV01C_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("system\\data\\ADV0130\\0.sa1lvl"));
	ADV01C_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("system\\data\\ADV0130\\1.sa1lvl"));
	ADV01C_2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("system\\data\\ADV0130\\2.sa1lvl"));
	ADV01C_3_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("system\\data\\ADV0130\\3.sa1lvl"));
	ADV01C_4_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("system\\data\\ADV0130\\4.sa1lvl"));
	ADV01C_5_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("system\\data\\ADV0130\\5.sa1lvl"));
	LandTable *ADV01C_0 = ADV01C_0_Info->getlandtable(); //&landtable_0000C64C; // ADV01C_0_Info->getlandtable();
	LandTable *ADV01C_1 = ADV01C_1_Info->getlandtable(); //&landtable_0000D7B0; // ADV01C_1_Info->getlandtable();
	LandTable *ADV01C_2 = ADV01C_2_Info->getlandtable(); //&landtable_0000E1D0; // ADV01C_2_Info->getlandtable();
	LandTable *ADV01C_3 = ADV01C_3_Info->getlandtable(); //&landtable_0000EDB8; // ADV01C_3_Info->getlandtable();
	LandTable *ADV01C_4 = ADV01C_4_Info->getlandtable(); //&landtable_0000F7A8; // ADV01C_4_Info->getlandtable();
	LandTable *ADV01C_5 = ADV01C_5_Info->getlandtable(); //&landtable_0000FE44; // ADV01C_5_Info->getlandtable();
	RemoveMaterialColors_Landtable(ADV01C_0);
	RemoveMaterialColors_Landtable(ADV01C_1);
	RemoveMaterialColors_Landtable(ADV01C_2);
	RemoveMaterialColors_Landtable(ADV01C_3);
	RemoveMaterialColors_Landtable(ADV01C_4);
	RemoveMaterialColors_Landtable(ADV01C_5);
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
	if (!Use1999SetFiles)
	{
		ReplaceBIN_DC("SETEC30S");
		ReplaceBIN_DC("SETEC31S");
		ReplaceBIN_DC("SETEC31B");
		ReplaceBIN_DC("SETEC32S");
		ReplaceBIN_DC("SETEC33S");
		ReplaceBIN_DC("SETEC34S");
		ReplaceBIN_DC("SETEC35S");
	}
	else
	{
		ReplaceBIN_1999("SETEC30S");
		ReplaceBIN_1999("SETEC31S");
		ReplaceBIN_1999("SETEC31B");
		ReplaceBIN_1999("SETEC32S");
		ReplaceBIN_1999("SETEC33S");
		ReplaceBIN_1999("SETEC34S");
		ReplaceBIN_1999("SETEC35S");
	}
	ReplaceBIN_DC("CAMEC30S");
	ReplaceBIN_DC("CAMEC31S");
	ReplaceBIN_DC("CAMEC32S");
	ReplaceBIN_DC("CAMEC33S");
	ReplaceBIN_DC("CAMEC34S");
	ReplaceBIN_DC("CAMEC35S");
	ReplacePVM("ADV_EC30");
	ReplacePVM("ADV_EC31");
	ReplacePVM("ADV_EC32");
	ReplacePVM("ADV_EC33");
	ReplacePVM("ADV_EC34");
	ReplacePVM("ADV_EC35");
	ReplacePVM("ADV_EC36");
	ReplacePVM("OBJ_EC30");
	ReplacePVM("EC_ACTDOOR");
	ReplacePVM("EC_ALIFE");
	ReplacePVM("EC_EGGLIFT");
	ReplacePVM("EC_TARAI");
	ReplacePVM("PVME101FACTORY");
	ReplaceBIN("PL_W1B", "PL_W1X");
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
	//Material fixes
	AddAlphaRejectMaterial((NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x000ED480)); //Monorail sign (inside)
	AddWhiteDiffuseMaterial((NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01CMODELS") + 0x00110B04)); //OHammerSW
	if (DLLLoaded_Lantern)
	{
		WriteCall((void*)0x006F4577, TurnLightsOff); //Turn the lights off in Gamma's Froggy Hunt cutscene
		WriteCall((void*)0x006F4620, TurnLightsOn); //Turn the lights on in Gamma's Froggy Hunt cutscene
	}
	RemoveVertexColors_Object(ADV01C_OBJECTS[0]); //Hedhehog Hammer targets
	RemoveVertexColors_Object(ADV01C_OBJECTS[1]); //Hedhehog Hammer targets
	RemoveVertexColors_Object(ADV01C_OBJECTS[2]); //Hedhehog Hammer targets
	RemoveVertexColors_Object((NJS_OBJECT*)0x31045B8); //Projectors in Gamma's cutscene
	//Tarai fix
	TaraiButton_Transparent = LoadModel("system\\data\\ADV0130\\Models\\000D16F4.sa1mdl", false);
	TaraiButton_OpaqueOnly = LoadModel("system\\data\\ADV0130\\Models\\000D16F4.sa1mdl", false);
	TaraiButton_OpaqueOnly->basicdxmodel->meshsets[0].nbMesh = 0;
	AddWhiteDiffuseMaterial(&TaraiButton_OpaqueOnly->basicdxmodel->mats[1]);
	AddWhiteDiffuseMaterial(&TaraiButton_OpaqueOnly->basicdxmodel->mats[2]);
	TaraiButton_Transparent->basicdxmodel->meshsets[1].nbMesh = 0;
	TaraiButton_Transparent->basicdxmodel->meshsets[2].nbMesh = 0;
	WriteJump((void*)0x52BA70, OTarai_Child_Display);
	___ADV01C_OBJECTS[7] = TaraiButton_Transparent; //Tarai button
	___ADV01C_MODELS[28] = TaraiButton_Transparent->basicdxmodel;
	___ADV01C_OBJECTS[7]->child = TaraiButton_Transparent->child;
	___ADV01C_MODELS[27] = TaraiButton_Transparent->child->basicdxmodel;
	___ADV01C_OBJECTS[8] = LoadModel("system\\data\\ADV0130\\Models\\000D243C.sa1mdl", false); //Tarai
	//Monorail front
	NJS_OBJECT* MonorailFirstCar = LoadModel("system\\data\\ADV0130\\Models\\000B24D8.sa1mdl", false);
	___ADV01C_OBJECTS[43]->basicdxmodel = MonorailFirstCar->basicdxmodel;
	___ADV01C_OBJECTS[43]->child->basicdxmodel = MonorailFirstCar->child->basicdxmodel;
	___ADV01C_OBJECTS[43]->child->child->basicdxmodel = MonorailFirstCar->child->child->basicdxmodel;
	___ADV01C_OBJECTS[43]->child->sibling->basicdxmodel = MonorailFirstCar->child->sibling->basicdxmodel;
	AddAlphaRejectMaterial(&___ADV01C_OBJECTS[43]->child->sibling->basicdxmodel->mats[0]);
	//Monorail back
	NJS_OBJECT* MonorailOtherCars = LoadModel("system\\data\\ADV0130\\Models\\000B64DC.sa1mdl", false);
	___ADV01C_OBJECTS[44]->basicdxmodel = MonorailOtherCars->basicdxmodel;
	___ADV01C_OBJECTS[44]->child->basicdxmodel = MonorailOtherCars->child->basicdxmodel;
	___ADV01C_OBJECTS[44]->child->child->basicdxmodel = MonorailOtherCars->child->child->basicdxmodel;
	//Other objects
	___ADV01C_OBJECTS[29] = LoadModel("system\\data\\ADV0130\\Models\\000ADCD8.sa1mdl", false); //Monorail station
	___ADV01C_ACTIONS[6]->object = LoadModel("system\\data\\ADV0130\\Models\\000BAF48.sa1mdl", false); //Door
	NJS_OBJECT* EggLift = LoadModel("system\\data\\ADV0130\\Models\\000B8CD4.sa1mdl", false); //OEggLift
	___ADV01C_OBJECTS[23] = EggLift;
	___ADV01C_ACTIONS[7]->object = EggLift;
	for (int i = 0; i < 3; i++)
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
	if (ADV01C_1_Info && GameState != 16)
	{
		if (DLLLoaded_Lantern && dword_3C85138 == 0)
		{
			set_blend_factor_ptr(0.0f);
			set_shader_flags_ptr(ShaderFlags_Blend, false);
		}
	}
}