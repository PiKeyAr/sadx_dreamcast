#include "stdafx.h"
#include "textures.h"
#include "Icicle.h"

NJS_TEXNAME textures_icecap1[34];
NJS_TEXLIST texlist_icecap1 = { arrayptrandlength(textures_icecap1) };

NJS_TEXNAME textures_icecap2[55];
NJS_TEXLIST texlist_icecap2 = { arrayptrandlength(textures_icecap2) };

NJS_TEXNAME textures_icecap3[40];
NJS_TEXLIST texlist_icecap3 = { arrayptrandlength(textures_icecap3) };


DataPointer(float, CurrentFogDist, 0x03ABDC64);
DataPointer(float, CurrentFogLayer, 0x03ABDC60);
DataPointer(NJS_ACTION, stru_E758E4, 0xE758E4);
DataPointer(NJS_OBJECT, stru_E76598, 0xE76598);
DataPointer(NJS_OBJECT, stru_E76E78, 0xE76E78);
DataPointer(NJS_OBJECT, stru_E773D8, 0xE773D8);
DataArray(FogData, IceCap1Fog, 0x00C67EA0, 3);
DataArray(FogData, IceCap2Fog, 0x00C67ED0, 3);
DataArray(FogData, IceCap3Fog, 0x00C67F00, 3);
DataArray(FogData, IceCap4Fog, 0x00C67F30, 3);
DataArray(DrawDistance, DrawDist_IceCap1, 0x00C67E40, 3);
DataArray(DrawDistance, DrawDist_IceCap2, 0x00C67E58, 3);
DataArray(DrawDistance, DrawDist_IceCap3, 0x00C67E70, 3);
FunctionPointer(void, sub_405450, (NJS_ACTION *a1, float frame, float scale), 0x405450);

static int animframe = 41;

void RenderSnowboardEffect(ObjectMaster *a1)
{
	EntityData1 *v1; // esi
	Angle v2; // eax
	Angle v3; // eax
	Angle v4; // eax
	Float XScalea; // [esp+8h] [ebp+4h]

	v1 = a1->Data1;
	XScalea = *(float *)&*(Sint32*)&v1->LoopData;
	njSetTexture(&OBJ_ICECAP_TEXLIST);
	njPushMatrix(0);
	njTranslateV(0, &v1->Position);
	v2 = v1->Rotation.z;
	if (v2)
	{
		njRotateZ(0, v2);
	}
	v3 = v1->Rotation.x;
	if (v3)
	{
		njRotateX(0, v3);
	}
	v4 = v1->Rotation.y;
	if (v4)
	{
		njRotateY(0, v4);
	}
	njScale(0, XScalea, XScalea, XScalea);
	DrawQueueDepthBias = 2000.0f;
	ProcessModelNode((NJS_OBJECT*)0xE43544, QueuedModelFlagsB_EnableZWrite, XScalea);
	DrawQueueDepthBias = 0.0f;
	njPopMatrix(1u);
}

void RenderSmallIcicles(NJS_OBJECT *a1, QueuedModelFlagsB blend_mode, float scale)
{
	DrawQueueDepthBias = 15000.0f;
	ProcessModelNode(a1, QueuedModelFlagsB_SomeTextureThing, scale);
	DrawQueueDepthBias = 0;
}

void RenderIcicleSpriteThing(NJS_OBJECT *a1, QueuedModelFlagsB blend_mode, float scale)
{
	DrawQueueDepthBias = -1000.0f;
	ProcessModelNode(a1, blend_mode, scale);
	DrawQueueDepthBias = 0;
}

void __cdecl sub_4EF5A0X(ObjectMaster *a1)
{
	EntityData1 *v1; // esi
	Angle v2; // eax
	Angle v3; // eax
	Angle v4; // eax

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		BackupConstantAttr();
		RemoveConstantAttr(0, NJD_FLAG_IGNORE_SPECULAR);
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = v1->Rotation.z;
		if (v2)
		{
			njRotateZ(0, (unsigned __int16)v2);
		}
		v3 = v1->Rotation.x;
		if (v3)
		{
			njRotateX(0, (unsigned __int16)v3);
		}
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		DrawQueueDepthBias = -2000.0f;
		switch (v1->Action)
		{
		case 0:
			sub_405450(&stru_E758E4, *(float *)&v1->LoopData, 1.0f);
			njPopMatrix(1u);
			RestoreConstantAttr();
			return;
		case 1:
			DrawQueueDepthBias = -2000.0f;
			ProcessModelNode(&objectSTG08_00A76598, QueuedModelFlagsB_EnableZWrite, 1.0f); //Start of Ice Cap 1
			DrawQueueDepthBias = -1000.0f;
			ProcessModelNode(&objectSTG08_00A76598_2, QueuedModelFlagsB_EnableZWrite, 1.0f); //Start of Ice Cap 1
			break;
		case 2:
			ProcessModelNode_AB_Wrapper(&stru_E76E78, 1.0f);
			break;
		case 4:
			ProcessModelNode_AB_Wrapper(&stru_E773D8, 1.0f);
			break;
		default:
			break;
		}
		njPopMatrix(1u);
		DrawQueueDepthBias = 0;
		RestoreConstantAttr();
	}
}

void __cdecl FixedAvalanche(ObjectMaster *a1)
{
	EntityData1 *v1; // esi
	EntityData1 *v2; // eax
	Angle v3; // ecx
	Angle v4; // ecx

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = Camera_Data1;
		v3 = Camera_Data1->Rotation.y;
		if (v3)
		{
			njRotateY(0, (unsigned __int16)v3);
			v2 = Camera_Data1;
		}
		v4 = v2->Rotation.x;
		if (v4)
		{
			njRotateX(0, (unsigned __int16)v4);
		}
		njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
		njDrawSprite3D_Queue((NJS_SPRITE*)0xE94658, *(Sint32*)&v1->Object / 2, NJD_SPRITE_ALPHA, QueuedModelFlagsB_SomeTextureThing);
		njPopMatrix(1u);
	}
}

void FixSnowflake(NJS_SPRITE *sp, Int n, NJD_SPRITE attr, QueuedModelFlagsB zfunc_type)
{
	njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
	njDrawSprite3D_Queue(sp, n, attr, zfunc_type);
}

void Obj_Icecap_DoColFlagThingsX(int some_flags)
{
	Uint32 *ptr; // ecx
	int count; // edx
	Uint32 flags; // eax
	unsigned __int32 _flags; // eax
	if (STG08_3_Info)
	{
		if (STG08_3_Info->getlandtable()->COLCount - 1 >= 0)
		{
			ptr = (Uint32*)&STG08_3_Info->getlandtable()->Col->Flags;
			count = STG08_3_Info->getlandtable()->COLCount;
			do
			{
				flags = *ptr;
				if (*ptr & 0x60000000)
				{
					if (some_flags & *(ptr - 1))
					{
						//PrintDebug("Solid\n");
						_flags = flags | ColFlags_Solid;
					}
					else
					{
						//PrintDebug("Not solid\n");
						_flags = flags & ~ColFlags_Solid;
					}
					*ptr = _flags;
				}
				ptr += 9;
				--count;
			} while (count);
		}
	}
}

static void __declspec(naked) Obj_Icecap_DoColFlagThings_a()
{
	__asm
	{
		push esi // some_flags

		// Call your __cdecl function here:
		call Obj_Icecap_DoColFlagThingsX

		pop esi // some_flags
		retn
	}
}

void LoadLevelFiles_STG08()
{
	CheckAndUnloadLevelFiles();
	STG08_0_Info = new LandTableInfo(ModPath + "\\data\\STG08\\0.sa1lvl");
	STG08_1_Info = new LandTableInfo(ModPath + "\\data\\STG08\\1.sa1lvl");
	STG08_2_Info = new LandTableInfo(ModPath + "\\data\\STG08\\2.sa1lvl");
	STG08_3_Info = new LandTableInfo(ModPath + "\\data\\STG08\\3.sa1lvl");
	LandTable *STG08_0 = STG08_0_Info->getlandtable();
	LandTable *STG08_1 = STG08_1_Info->getlandtable();
	LandTable *STG08_2 = STG08_2_Info->getlandtable();
	LandTable *STG08_3 = STG08_3_Info->getlandtable();
	STG08_0->TexList = &texlist_icecap1;
	STG08_1->TexList = &texlist_icecap2;
	STG08_2->TexList = &texlist_icecap3;
	STG08_3->TexList = &texlist_icecap2;
	WriteData((LandTable**)0x97DB08, STG08_0);
	WriteData((LandTable**)0x97DB0C, STG08_1);
	WriteData((LandTable**)0x97DB10, STG08_2);
	WriteData((LandTable**)0x97DB14, STG08_3);
}

void UnloadLevelFiles_STG08()
{
	delete STG08_0_Info;
	delete STG08_1_Info;
	delete STG08_2_Info;
	delete STG08_3_Info;
	STG08_0_Info = nullptr;
	STG08_1_Info = nullptr;
	STG08_2_Info = nullptr;
	STG08_3_Info = nullptr;
}

void IceCap_Init()
{
	ReplaceBIN_DC("CAM0800S");
	ReplaceBIN_DC("CAM0801S");
	ReplaceBIN_DC("CAM0802S");
	ReplaceBIN_DC("CAM0803B");
	ReplaceBIN_DC("SET0800S");
	ReplaceBIN_DC("SET0801S");
	ReplaceBIN_DC("SET0802M");
	ReplaceBIN_DC("SET0802S");
	ReplaceBIN_DC("SET0803B");
	switch (EnableSETFixes)
	{
	case SETFixes_Normal:
		AddSETFix("SET0800S");
		AddSETFix("SET0801S");
		AddSETFix("SET0802M");
		AddSETFix("SET0802S");
		AddSETFix("SET0803B");
		break;
	case SETFixes_Extra:
		AddSETFix_Extra("SET0800S");
		AddSETFix_Extra("SET0801S");
		AddSETFix_Extra("SET0802M");
		AddSETFix_Extra("SET0802S");
		AddSETFix_Extra("SET0803B");
		break;
	default:
		break;
	}
	ReplacePVM("BG_ICECAP");
	ReplacePVM("ICECAP01");
	ReplacePVM("ICECAP02");
	ReplacePVM("ICECAP03");
	ReplacePVM("OBJ_ICECAP");
	ReplacePVM("OBJ_ICECAP2");
	ReplacePVR("MIW_B001");
	ReplacePVR("MTX_BOARD0");
	ReplacePVR("SB_BOARD1");
	WriteJump((void*)0x4E91C0, Obj_Icecap_DoColFlagThings_a); //Weird COL flag function
	/*Crystal fixes, hopefully someday
	//stru_E76598.basicdxmodel->mats[0].attrflags |= NJD_FLAG_USE_ALPHA;
	//stru_E76598.basicdxmodel->mats[1].attrflags |= NJD_FLAG_USE_ALPHA;
	//stru_E76598.basicdxmodel->mats[2].attrflags |= NJD_FLAG_USE_ALPHA;
	//WriteJump((void*)0x4EF5A0, sub_4EF5A0X);*/
	WriteCall((void*)0x004EFEF7, RenderIcicleSpriteThing);
	WriteCall((void*)0x004EFE10, RenderSmallIcicles);
	WriteJump((void*)0x4EB770, FixedAvalanche);
	WriteJump((void*)0x4EA3E0, RenderSnowboardEffect);
	((NJS_OBJECT*)0xE43544)->basicdxmodel->mats[0].attr_texId = 58; //Snowboard effect
	*(NJS_OBJECT*)0x00E6FECC = objectSTG08_00A6FECC; // Giant icicle
	//Snowboard fix
	HMODULE CHRMODELS = GetModuleHandle(L"CHRMODELS_orig");
	if (CHRMODELS != nullptr)
	{
		NJS_OBJECT **___SONIC_OBJECTS = (NJS_OBJECT **)GetProcAddress(CHRMODELS, "___SONIC_OBJECTS");
		NJS_OBJECT **___MILES_OBJECTS = (NJS_OBJECT **)GetProcAddress(CHRMODELS, "___MILES_OBJECTS");
		___SONIC_OBJECTS[71]->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		___SONIC_OBJECTS[71]->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		___SONIC_OBJECTS[71]->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2;
		___SONIC_OBJECTS[71]->basicdxmodel->mats[1].diffuse.color = 0xFFB2B2B2;
		___MILES_OBJECTS[71]->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		___MILES_OBJECTS[71]->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		___MILES_OBJECTS[71]->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2;
		___MILES_OBJECTS[71]->basicdxmodel->mats[1].diffuse.color = 0xFFB2B2B2;
	}
	ResizeTextureList((NJS_TEXLIST*)0xDE3A74, textures_icecap1);
	ResizeTextureList((NJS_TEXLIST*)0xD39744, textures_icecap2);
	ResizeTextureList((NJS_TEXLIST*)0xC68408, textures_icecap3);
	WriteCall((void*)0x4F5B6F, FixSnowflake); //Snowflake brightness
	WriteCall((void*)0x4EB948, FixSnowflake); //Snowflake brightness 2
	((NJS_SPRITE*)0xE956E4)->tlist = &OBJ_ICECAP_TEXLIST; //Snow effect texlist
	((NJS_TEXANIM*)0xE956D0)->texid = 96; //Snow effect texture ID
	ResizeTextureList(&OBJ_ICECAP_TEXLIST, 100);
	((NJS_MESHSET_SADX*)0xE7B164)->vertcolor = NULL; //Remove vertex colors in OFutaL (breakable ice)
	((NJS_MESHSET_SADX*)0xE7DD28)->vertcolor = NULL; //Remove vertex colors in OFutaL (breakable ice)
	((NJS_MESHSET_SADX*)0xE7DD44)->vertcolor = NULL; //Remove vertex colors in OFutaL (breakable ice)
	*(NJS_OBJECT*)0xE537D8 = objectSTG08_00162694; //Icicle inner part
	*(NJS_OBJECT*)0xE6E0E0 = objectSTG08_0017BD64; //MizuIwa B
	*(NJS_OBJECT*)0xE6E694 = objectSTG08_0017C308; //MizuIwa C
	*(NJS_OBJECT*)0xE52FCC = objectSTG08_00161838; //OIceJmp
	for (unsigned int i = 0; i < 3; i++)
	{
		IceCap1Fog[i].Color = 0xFFFFFFFF;
		IceCap1Fog[i].Layer = 1500.0f;
		IceCap1Fog[i].Distance = 3800.0f;
		IceCap1Fog[i].Toggle = 1;
		DrawDist_IceCap1[i].Maximum = -12000.0;
		IceCap2Fog[i].Color = 0xFF000060;
		IceCap2Fog[i].Layer = 800.0f;
		IceCap2Fog[i].Distance = 3800.0f;
		IceCap2Fog[i].Toggle = 1;
		DrawDist_IceCap2[i].Maximum = -4000.0;
		DrawDist_IceCap3[i].Maximum = -8000.0;
		IceCap3Fog[i].Layer = 2500.0f;
		IceCap3Fog[i].Color = 0xFFFFFFFF;
		IceCap4Fog[i].Color = 0xFF000060;
		IceCap4Fog[i].Layer = 800.0f;
		IceCap4Fog[i].Distance = 3800.0f;
		IceCap4Fog[i].Toggle = 1;
	}
}

void IceCap_OnFrame()
{
	auto entity = EntityData1Ptrs[0];
	if (CurrentLevel == 8 && CurrentAct == 2 && GameState != 16)
	{
		if (entity != nullptr)
		{
			if (entity->Position.x <= -8000)
			{
				if (CurrentFogLayer > 800) CurrentFogLayer = CurrentFogLayer - 16; else CurrentFogLayer = 800;
				if (CurrentFogDist > 3000) CurrentFogDist = CurrentFogDist - 8; else CurrentFogDist = 3000;
			}
			if (entity->Position.x >= -5000)
			{
				if (CurrentFogLayer < IceCap3Fog[0].Layer) CurrentFogLayer = CurrentFogLayer + 8; else CurrentFogLayer = IceCap3Fog[0].Layer;
				if (CurrentFogDist < IceCap3Fog[0].Distance) CurrentFogDist = CurrentFogDist + 16; else CurrentFogDist = IceCap3Fog[0].Distance;
			}
		}
	}
	if (STG08_3_Info && CurrentLevel == 8 && CurrentAct == 3 && GameState != 16)
	{
		if (animframe > 54) animframe = 16;
		if (animframe > 16 && animframe < 41) animframe = 41;
		((NJS_MATERIAL*)STG08_3_Info->getdata("matlistSTG08_Q00076DC8"))[0].attr_texId = animframe;
		((NJS_MATERIAL*)STG08_3_Info->getdata("matlistSTG08_Q00077244"))[0].attr_texId = animframe;
		((NJS_MATERIAL*)STG08_3_Info->getdata("matlistSTG08_Q000820E4"))[0].attr_texId = animframe;
		((NJS_MATERIAL*)STG08_3_Info->getdata("matlistSTG08_Q000820E4"))[1].attr_texId = animframe;
		((NJS_MATERIAL*)STG08_3_Info->getdata("matlistSTG08_Q0008E8E0"))[0].attr_texId = animframe;
		((NJS_MATERIAL*)STG08_3_Info->getdata("matlistSTG08_Q0008E9E4"))[0].attr_texId = animframe;
		((NJS_MATERIAL*)STG08_3_Info->getdata("matlistSTG08_Q000A4F08"))[0].attr_texId = animframe;
		((NJS_MATERIAL*)STG08_3_Info->getdata("matlistSTG08_Q000A773C"))[0].attr_texId = animframe;
		((NJS_MATERIAL*)STG08_3_Info->getdata("matlistSTG08_Q000A773C"))[1].attr_texId = animframe;
		((NJS_MATERIAL*)STG08_3_Info->getdata("matlistSTG08_Q000A9AD8"))[0].attr_texId = animframe;
		((NJS_MATERIAL*)STG08_3_Info->getdata("matlistSTG08_Q000A9AD8"))[1].attr_texId = animframe;
		((NJS_MATERIAL*)STG08_3_Info->getdata("matlistSTG08_Q000A9AD8"))[2].attr_texId = animframe;
		((NJS_MATERIAL*)STG08_3_Info->getdata("matlistSTG08_Q000AB4B4"))[0].attr_texId = animframe;
		((NJS_MATERIAL*)STG08_3_Info->getdata("matlistSTG08_Q000AC6B4"))[0].attr_texId = animframe;
		((NJS_MATERIAL*)STG08_3_Info->getdata("matlistSTG08_Q0005BB68"))[0].attr_texId = animframe;
		((NJS_MATERIAL*)STG08_3_Info->getdata("matlistSTG08_Q000B624C"))[0].attr_texId = animframe;
		((NJS_MATERIAL*)STG08_3_Info->getdata("matlistSTG08_Q000B624C"))[1].attr_texId = animframe;
		((NJS_MATERIAL*)STG08_3_Info->getdata("matlistSTG08_Q000B84C8"))[0].attr_texId = animframe;
		((NJS_MATERIAL*)STG08_3_Info->getdata("matlistSTG08_Q000BCA5C"))[0].attr_texId = animframe;
		((NJS_MATERIAL*)STG08_3_Info->getdata("matlistSTG08_Q000BCA5C"))[1].attr_texId = animframe;
		((NJS_MATERIAL*)STG08_3_Info->getdata("matlistSTG08_Q000BD328"))[0].attr_texId = animframe;
		((NJS_MATERIAL*)STG08_3_Info->getdata("matlistSTG08_Q000BD328"))[1].attr_texId = animframe;
		((NJS_MATERIAL*)STG08_3_Info->getdata("matlistSTG08_Q000C4800"))[0].attr_texId = animframe;
		((NJS_MATERIAL*)STG08_3_Info->getdata("matlistSTG08_Q000C4940"))[0].attr_texId = animframe;
		((NJS_MATERIAL*)STG08_3_Info->getdata("matlistSTG08_Q000C4A44"))[0].attr_texId = animframe;
		((NJS_MATERIAL*)STG08_3_Info->getdata("matlistSTG08_Q000C4B84"))[0].attr_texId = animframe;
		((NJS_MATERIAL*)STG08_3_Info->getdata("matlistSTG08_Q000C4C88"))[0].attr_texId = animframe;
		if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2) animframe++;
	}
}