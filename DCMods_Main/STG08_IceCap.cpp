#include "stdafx.h"

NJS_TEXNAME textures_obj_icecap[100];
NJS_TEXLIST texlist_obj_icecap = {arrayptrandlength(textures_obj_icecap)};

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

NJS_OBJECT* Crystal1_1 = nullptr;
NJS_OBJECT* Crystal1_2 = nullptr;
NJS_OBJECT* Crystal1_3 = nullptr;
NJS_OBJECT* Crystal2_1 = nullptr;
NJS_OBJECT* Crystal2_2 = nullptr;
NJS_OBJECT* Crystal2_3 = nullptr;

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
	lateDrawObject((NJS_OBJECT*)0xE43544, QueuedModelFlagsB_EnableZWrite, XScalea);
	DrawQueueDepthBias = 0.0f;
	njPopMatrix(1u);
}

void RenderSmallIcicles(NJS_OBJECT *a1, QueuedModelFlagsB blend_mode, float scale)
{
	DrawQueueDepthBias = 15000.0f;
	lateDrawObject(a1, QueuedModelFlagsB_SomeTextureThing, scale);
	DrawQueueDepthBias = 0;
}

void RenderIcicleSpriteThing(NJS_OBJECT *a1, QueuedModelFlagsB blend_mode, float scale)
{
	DrawQueueDepthBias = -1000.0f;
	lateDrawObject(a1, blend_mode, scale);
	DrawQueueDepthBias = 0;
}

void DrawCrystal0(ObjectMaster *a1)
{
	EntityData1 *v1; // esi
	Angle v2; // eax
	Angle v3; // eax
	Angle v4; // eax

	v1 = a1->Data1;
	if (!MissedFrames)
	{
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
		DrawAction(&stru_E758E4, *(float *)&v1->LoopData, (QueuedModelFlagsB)0, 0, (void (__cdecl *)(NJS_MODEL_SADX *, int, int))DrawModelThing);
		njPopMatrix(1u);
	}
}

void DrawCrystal1(ObjectMaster *a1)
{
	EntityData1 *v1; // esi
	Angle v2; // eax
	Angle v3; // eax
	Angle v4; // eax

	v1 = a1->Data1;
	if (!MissedFrames)
	{
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
		// 1
		DrawQueueDepthBias = 1000.0f;
		DrawObjectClipMesh(Crystal1_2, (QueuedModelFlagsB)1, 1.0f);
		njPopMatrix(1u);
		// 2
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
		DrawObjectClipMesh(Crystal1_1, QueuedModelFlagsB_EnableZWrite, 1.0f);
		njPopMatrix(1u);
		// 3
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
		DrawQueueDepthBias = 2000.0f;
		DrawObjectClipMesh(Crystal1_3, QueuedModelFlagsB_EnableZWrite, 1.0f);
		njPopMatrix(1u);
		DrawQueueDepthBias = 0;
	}
}

void DrawCrystal2(ObjectMaster *a1)
{
	EntityData1 *v1; // esi
	Angle v2; // eax
	Angle v3; // eax
	Angle v4; // eax

	v1 = a1->Data1;
	if (!MissedFrames)
	{
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
		// 1
		DrawQueueDepthBias = 1000.0f;
		DrawObjectClipMesh(Crystal2_2, QueuedModelFlagsB_EnableZWrite, 1.0f);
		njPopMatrix(1u);
		// 2
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
		DrawQueueDepthBias = 2000.0f;
		DrawObjectClipMesh(Crystal2_1, QueuedModelFlagsB_EnableZWrite, 1.0f);
		njPopMatrix(1u);
		// 3
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
		DrawQueueDepthBias = 3000.0f;
		DrawObjectClipMesh(Crystal2_3, QueuedModelFlagsB_EnableZWrite, 1.0f);
		njPopMatrix(1u);
		DrawQueueDepthBias = 0;
	}
}

void DrawCrystal3(ObjectMaster *a1)
{
	EntityData1 *v1; // esi
	Angle v2; // eax
	Angle v3; // eax
	Angle v4; // eax

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
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
		DrawObjectClipMesh(&stru_E773D8, (QueuedModelFlagsB)1, 1.0f);
		njPopMatrix(1u);
	}
}

void __cdecl Crystal_Display(ObjectMaster *a1)
{
	
	EntityData1 *v1; // esi

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		switch (v1->Action)
		{
		case 0:
			DrawCrystal0(a1);
			return;
		case 1:
			DrawCrystal1(a1);
			break;
		case 2:
			DrawCrystal2(a1);
			break;
		case 4:
			DrawCrystal3(a1);
			break;
		default:
			break;
		}
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

void ParseICMaterials(LandTable* landtable)
{
	NJS_MATERIAL* material;
	for (int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			material = (NJS_MATERIAL*)& landtable->Col[j].Model->basicdxmodel->mats[k];
			if (material->attr_texId == 16 || (material->attr_texId >= 41 && material->attr_texId <= 54))
			{
				AddTextureAnimation(8, 3, material, true, 4, 16, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, -1);
			}
		}
	}
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

void RenderBigIcicleWithDepth(NJS_OBJECT* a1, int blend_mode, float scale)
{
	DrawQueueDepthBias = 3000.0f;
	late_DrawObjectClipMesh(a1, blend_mode, scale);
	DrawQueueDepthBias = 0.0f;
}

void IceCap_Init()
{
	ReplaceCAM("CAM0800S");
	ReplaceCAM("CAM0801S");
	ReplaceCAM("CAM0802S");
	ReplaceCAM("CAM0803B");
	ReplaceSET("SET0800S");
	ReplaceSET("SET0801S");
	ReplaceSET("SET0802M");
	ReplaceSET("SET0802S");
	ReplaceSET("SET0803B");
	ReplacePVM("BG_ICECAP");
	ReplacePVM("ICECAP01");
	ReplacePVM("ICECAP02");
	ReplacePVM("ICECAP03");
	ReplacePVM("OBJ_ICECAP");
	ReplacePVM("OBJ_ICECAP2");
	ReplacePVR("MIW_B001");
	ReplacePVR("MTX_BOARD0");
	ReplacePVR("SB_BOARD1");
	for (int i = 0; i < 3; i++)
	{
		IceCap1Fog[i].Color = 0xFFFFFFFF;
		IceCap1Fog[i].Layer = 1500.0f;
		IceCap1Fog[i].Distance = 3800.0f;
		IceCap1Fog[i].Toggle = 1;
		DrawDist_IceCap1[i].Maximum = -12000.0;
		IceCap2Fog[i].Color = 0xFF000060;
		IceCap2Fog[i].Layer = 1600.0f;
		IceCap2Fog[i].Distance = 4000.0f;
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

void IceCap_Load()
{
	STG08_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG08\\0.sa1lvl"));
	STG08_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG08\\1.sa1lvl"));
	STG08_2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG08\\2.sa1lvl"));
	STG08_3_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG08\\3.sa1lvl"));
	LandTable* STG08_0 = STG08_0_Info->getlandtable();
	LandTable* STG08_1 = STG08_1_Info->getlandtable();
	LandTable* STG08_2 = STG08_2_Info->getlandtable();
	LandTable* STG08_3 = STG08_3_Info->getlandtable();
	RemoveMaterialColors_Landtable(STG08_0);
	RemoveMaterialColors_Landtable(STG08_1);
	RemoveMaterialColors_Landtable(STG08_2);
	RemoveMaterialColors_Landtable(STG08_3);
	ParseICMaterials(STG08_3);
	STG08_0->TexList = &texlist_icecap1;
	STG08_1->TexList = &texlist_icecap2;
	STG08_2->TexList = &texlist_icecap3;
	STG08_3->TexList = &texlist_icecap2;
	WriteData((LandTable**)0x97DB08, STG08_0);
	WriteData((LandTable**)0x97DB0C, STG08_1);
	WriteData((LandTable**)0x97DB10, STG08_2);
	WriteData((LandTable**)0x97DB14, STG08_3);
	if (!ModelsLoaded_STG08)
	{
		ICECAP01_TEXLIST = texlist_icecap1;
		ICECAP02_TEXLIST = texlist_icecap2;
		ICECAP03_TEXLIST = texlist_icecap3;
		OBJ_ICECAP_TEXLIST = texlist_obj_icecap;
		WriteJump((void*)0x4E91C0, Obj_Icecap_DoColFlagThings_a); // Weird COL flag function
		// Objects
		*(NJS_OBJECT*)0xE60F54 = *LoadModel("system\\data\\STG08\\Models\\001702F4.sa1mdl"); // OSaku01
		*(NJS_OBJECT*)0xE61BBC = *LoadModel("system\\data\\STG08\\Models\\001713F0.sa1mdl"); // OSaku01b
		*(NJS_OBJECT*)0xE6261C = *LoadModel("system\\data\\STG08\\Models\\00170B20.sa1mdl"); // OSaku02
		*(NJS_OBJECT*)0xE63444 = *LoadModel("system\\data\\STG08\\Models\\0016F968.sa1mdl"); // OSaku02b
		*(NJS_OBJECT*)0xE7B20C = *LoadModel("system\\data\\STG08\\Models\\00188C0C.sa1mdl"); // OFutaL
		*(NJS_OBJECT*)0xE7E11C = *LoadModel("system\\data\\STG08\\Models\\0018B1E4.sa1mdl"); // OFutaL broken
		*(NJS_OBJECT*)0xE537D8 = *LoadModel("system\\data\\STG08\\Models\\00162694.sa1mdl"); // Icicle inner part
		*(NJS_OBJECT*)0xE6E0E0 = *LoadModel("system\\data\\STG08\\Models\\0017BD64.sa1mdl"); // MizuIwa B
		*(NJS_OBJECT*)0xE6E694 = *LoadModel("system\\data\\STG08\\Models\\0017C308.sa1mdl"); // MizuIwa C
		*(NJS_OBJECT*)0xE52FCC = *LoadModel("system\\data\\STG08\\Models\\00161838.sa1mdl"); // OIceJmp
		*(NJS_OBJECT*)0xE6FECC = *LoadModel("system\\data\\STG08\\Models\\0017DAD8.sa1mdl"); // Giant icicle
		SwapMeshsets((NJS_OBJECT*)0xE6FECC, 0, 1); // For better looks of the meshes
		WriteCall((void*)0x4EFE72, RenderBigIcicleWithDepth);
		*(NJS_OBJECT*)0x986F80 = *LoadModel("system\\data\\STG08\\Models\\001BEF20.sa1mdl"); // ESMan
		((NJS_OBJECT*)0x986F80)->basicdxmodel->mats[7].attrflags &= ~NJD_FLAG_USE_ALPHA; // Unnecessary alpha causing errors
		RemoveVertexColors_Object((NJS_OBJECT*)0x9889E4); // ESMan vehicle
		// Crystal fixes for OIT
		if (AssumeOIT)
		{
			stru_E773D8.basicdxmodel->mats[0].attrflags |= NJD_FLAG_USE_ALPHA;
			stru_E773D8.basicdxmodel->mats[1].attrflags |= NJD_FLAG_USE_ALPHA;
			// Crystal 1
			Crystal1_1 = LoadModel("system\\data\\STG08\\Models\\00184058.sa1mdl");
			Crystal1_2 = CloneObject(Crystal1_1);
			Crystal1_3 = CloneObject(Crystal1_1);
			HideMesh_Object(Crystal1_1, 1, 2);
			HideMesh_Object(Crystal1_2, 0, 2);
			HideMesh_Object(Crystal1_3, 0, 1);
			// Crystal 2
			Crystal2_1 = LoadModel("system\\data\\STG08\\Models\\00184918.sa1mdl");
			Crystal2_2 = CloneObject(Crystal2_1);
			Crystal2_3 = CloneObject(Crystal2_1);
			HideMesh_Object(Crystal2_1, 1, 2);
			HideMesh_Object(Crystal2_2, 0, 2);
			HideMesh_Object(Crystal2_3, 0, 1);
			WriteJump((void*)0x4EF5A0, Crystal_Display);
		}
		WriteCall((void*)0x4EFE10, RenderSmallIcicles);
		// Various effect fixes
		WriteCall((void*)0x4EFEF7, RenderIcicleSpriteThing);
		WriteJump((void*)0x4EB770, FixedAvalanche);
		WriteJump((void*)0x4EA3E0, RenderSnowboardEffect);
		WriteCall((void*)0x4F5B6F, FixSnowflake); // Snowflake brightness
		WriteCall((void*)0x4EB948, FixSnowflake); // Snowflake brightness 2
		((NJS_OBJECT*)0xE43544)->basicdxmodel->mats[0].attr_texId = 58; // Snowboard effect
		((NJS_SPRITE*)0xE956E4)->tlist = &OBJ_ICECAP_TEXLIST; // Snow effect texlist
		((NJS_TEXANIM*)0xE956D0)->texid = 96; // Snow effect texture ID
		ModelsLoaded_STG08 = true;
	}
}

void IceCap_OnFrame()
{
	if (CurrentLevel == LevelIDs_IceCap)
	{
		auto entity = EntityData1Ptrs[0];
		if (CurrentAct == 2 && entity != nullptr && !IsGamePaused())
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
}