#include "stdafx.h"

NJS_TEXNAME textures_lw1[58];
NJS_TEXLIST texlist_lw1 = { arrayptrandlength(textures_lw1) };

NJS_TEXNAME textures_lw2[95];
NJS_TEXLIST texlist_lw2 = { arrayptrandlength(textures_lw2) };

NJS_TEXNAME textures_lw3[30];
NJS_TEXLIST texlist_lw3 = { arrayptrandlength(textures_lw3) };

/*
#include "LostWorld1.h"
#include "LostWorld2.h"
#include "LostWorld3.h"
*/

NJS_OBJECT* AokiSwitchModel_Base = nullptr;
NJS_OBJECT* AokiSwitchModel_Child1 = nullptr;
NJS_OBJECT* AokiSwitchModel_Child2 = nullptr;
NJS_OBJECT* AokiSwitchModel_Child3 = nullptr;

DataPointer(float, CurrentDrawDist, 0x03ABDC74);
DataArray(FogData, LostWorld1Fog, 0x01E79AAC, 3);
DataArray(FogData, LostWorld2Fog, 0x01E79ADC, 3);
DataArray(FogData, LostWorld3Fog, 0x01E79B0C, 3);
DataArray(char, AokiSwitchByteArray, 0x3C7ED8C, 32);
FunctionPointer(long double, sub_49CC70, (float a1, float a2, float a3), 0x49CC70);
FunctionPointer(void, sub_407A00, (NJS_MODEL_SADX *model, float scale), 0x407A00);

void __cdecl AokiSwitch_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi
	Angle v2; // eax
	Uint8 v3; // al

	v1 = a1->Data1;
	if (IsPlayerInsideSphere(&v1->Position, 410.0f))
	{
		if (!MissedFrames)
		{
			njControl3D_Backup();
			njControl3D_Remove(NJD_CONTROL_3D_CONSTANT_TEXTURE_MATERIAL);
			SetTextureToLevelObj();
			njPushMatrix(0);
			njTranslateV(0, &v1->Position);
			v2 = v1->Rotation.y;
			if (v2)
			{
				njRotateY(0, v2);
			}
			sub_407A00(AokiSwitchModel_Base->basicdxmodel, 1.0f);
			if (AokiSwitchByteArray[((signed __int16 *)&a1->Data1->Object)[1]] & 1)
			{
				njTranslate(0, 0.0f, 0.0f, 0.0f);
			}
			else
			{
				njTranslate(0, 0.0f, 0.6f, 0.0f);
			}
			sub_407A00(AokiSwitchModel_Child1->basicdxmodel, 1.0f);
			v3 = ((Uint8 *)&v1->CharIndex)[1];
			float alpha = v3 * 0.00392f;
			njControl3D(NJD_CONTROL_3D_CONSTANT_MATERIAL);
			SetMaterialAndSpriteColor_Float(alpha, alpha, alpha, alpha);
			sub_407A00(AokiSwitchModel_Child2->basicdxmodel, 1.0f);
			DrawModel_Queue(AokiSwitchModel_Child3->basicdxmodel, QueuedModelFlagsB_EnableZWrite);
			ClampGlobalColorThing_Thing();
			njControl3D_Remove(NJD_CONTROL_3D_CONSTANT_MATERIAL);
			njPopMatrix(1u);
			njControl3D_Restore();
		}
	}
}

void RenderLWPlatformTriangle(NJS_MODEL_SADX *model, QueuedModelFlagsB blend, float scale)
{
	DrawQueueDepthBias = -2000.0f;
	DrawModel_QueueVisible(model, blend, scale);
	DrawQueueDepthBias = 0.0f;
}

void RenderLWPlatformLight(NJS_MODEL_SADX *model, QueuedModelFlagsB blend, float scale)
{
	DrawQueueDepthBias = -1000.0f;
	DrawModel_QueueVisible(model, blend, scale);
	DrawQueueDepthBias = 0.0f;
}

void RLight_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi
	Angle v2; // eax
	Angle v3; // eax
	Angle v4; // eax
	Float v5; // edi
	float sy; // ST1C_4
	float sx; // ST20_4
	float a1a; // [esp+10h] [ebp+4h]
	float a1b; // [esp+10h] [ebp+4h]

	v1 = a1->Data1;
	if (!ClipSetObject(a1) && !MissedFrames)
	{
		Direct3D_SetZFunc(3u);
		if (!SetTextureToLevelObj())
		{
			njSetTexture((NJS_TEXLIST *)&v1->LoopData);
		}
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
		a1a = v1->Scale.z + 1.0;
		v5 = a1a;
		sy = v1->Scale.y + 1.0;
		sx = v1->Scale.x + 1.0;
		a1b = sub_49CC70(sx, sy, a1a);
		njScale(0, sx, sy, v5);
		ProcessModelNode_D_WrapperB((NJS_OBJECT*)0x2031810, (QueuedModelFlagsB)0, a1b);
		njPopMatrix(1u);
		Direct3D_ResetZFunc();
	}
}

signed int __cdecl RLight_Load(ObjectMaster *a1)
{
	EntityData1 *v1; // edi

	v1 = a1->Data1;
	if (ClipSetObject(a1))
	{
		return 1;
	}
	if (LevelObjTexlistLoaded())
	{
		v1->LoopData = 0;
	}
	else
	{
		njLoadTexture_Wrapper((NJS_TEXLIST *)&v1->LoopData);
	}
	if (LevelObjTexlistLoaded() && !ObjectSelectedDebug(a1))
	{
		a1->MainSub = RLight_Display;
		a1->DisplaySub = RLight_Display;
		a1->DeleteSub = RedMountainSetObj_Delete;
	}
	RedMountainSetObj_Display(a1);
	return 0;
}

void UnloadLevelFiles_STG07()
{
	delete STG07_0_Info;
	delete STG07_1_Info;
	delete STG07_2_Info;
	STG07_0_Info = nullptr;
	STG07_1_Info = nullptr;
	STG07_2_Info = nullptr;
}

void ParseLWMaterials(LandTable *landtable, int act)
{
	Uint32 materialflags;
	NJS_MATERIAL *material;
	if (act == 0)
	{
		for (int j = 0; j < landtable->COLCount; j++)
		{
			for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
			{
				material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
				if (material->attr_texId >=44 && material->attr_texId <=57)
				{
					AddTextureAnimation(7, 0, material, false, 1, 44, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
		}
	}
	if (act == 1)
	{
		for (int j = 0; j < landtable->COLCount; j++)
		{
			for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
			{
				material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
				if (material->attr_texId >= 81 && material->attr_texId <= 94)
				{
					AddTextureAnimation(7, 1, material, false, 1, 81, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
				else if (landtable->Col[j].Flags & ColFlags_Water && material->attr_texId == 44) AddTextureAnimation(7, 1, material, false, 1, 81, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
}

void LostWorld_Init()
{
	CheckAndUnloadLevelFiles();
	STG07_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG07\\0.sa1lvl"));
	STG07_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG07\\1.sa1lvl"));
	STG07_2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG07\\2.sa1lvl"));
	LandTable* STG07_0 = STG07_0_Info->getlandtable();
	LandTable* STG07_1 = STG07_1_Info->getlandtable();
	LandTable* STG07_2 = STG07_2_Info->getlandtable();
	RemoveMaterialColors_Landtable(STG07_0);
	RemoveMaterialColors_Landtable(STG07_1);
	RemoveMaterialColors_Landtable(STG07_2);
	ParseLWMaterials(STG07_0, 0);
	ParseLWMaterials(STG07_1, 1);
	STG07_0->TexList = &texlist_lw1;
	STG07_1->TexList = &texlist_lw2;
	STG07_2->TexList = &texlist_lw3;
	WriteData((LandTable**)0x97DAE8, STG07_0);
	WriteData((LandTable**)0x97DAEC, STG07_1);
	WriteData((LandTable**)0x97DAF0, STG07_2);
	if (!ModelsLoaded_STG07)
	{
		ReplaceBIN_DC("CAM0700S");
		ReplaceBIN_DC("CAM0701K");
		ReplaceBIN_DC("CAM0701S");
		ReplaceBIN_DC("CAM0702S");
		if (!Use1999SetFiles)
		{
			ReplaceBIN_DC("SET0700S");
			ReplaceBIN_DC("SET0701K");
			ReplaceBIN_DC("SET0701S");
			ReplaceBIN_DC("SET0702S");
		}
		else
		{
			ReplaceBIN_1999("SET0700S");
			ReplaceBIN_1999("SET0701K");
			ReplaceBIN_1999("SET0701S");
			ReplaceBIN_1999("SET0702S");
		}
		ReplacePVM("BG_RUIN");
		ReplacePVM("RUIN01");
		ReplacePVM("RUIN02");
		ReplacePVM("RUIN03");
		ReplacePVM("OBJ_RUIN");
		ReplacePVM("OBJ_RUIN2");
		//AokiSwitch
		WriteJump((void*)0x5E66D0, AokiSwitch_Display);
		AokiSwitchModel_Base = LoadModel("system\\data\\STG07\\Models\\00152214.sa1mdl", false);
		AokiSwitchModel_Child1 = LoadModel("system\\data\\STG07\\Models\\00151E58.sa1mdl", false);
		AokiSwitchModel_Child2 = LoadModel("system\\data\\STG07\\Models\\00151E58.sa1mdl", false);
		AokiSwitchModel_Child3 = LoadModel("system\\data\\STG07\\Models\\00151E58.sa1mdl", false);
		AokiSwitchModel_Child1->basicdxmodel->meshsets[3].nbMesh = 0;
		AokiSwitchModel_Child1->basicdxmodel->meshsets[4].nbMesh = 0;
		AokiSwitchModel_Child2->basicdxmodel->meshsets[0].nbMesh = 0;
		AokiSwitchModel_Child2->basicdxmodel->meshsets[1].nbMesh = 0;
		AokiSwitchModel_Child2->basicdxmodel->meshsets[2].nbMesh = 0;
		AokiSwitchModel_Child2->basicdxmodel->meshsets[3].nbMesh = 0;
		AokiSwitchModel_Child3->basicdxmodel->meshsets[0].nbMesh = 0;
		AokiSwitchModel_Child3->basicdxmodel->meshsets[1].nbMesh = 0;
		AokiSwitchModel_Child3->basicdxmodel->meshsets[2].nbMesh = 0;
		AokiSwitchModel_Child3->basicdxmodel->meshsets[4].nbMesh = 0;
		//Models
		RemoveVertexColors_Object((NJS_OBJECT*)0x10AD204); //OTaki
		*(NJS_MODEL_SADX*)0x2027290 = *LoadModel("system\\data\\STG07\\Models\\0014A190.sa1mdl", false)->basicdxmodel; //RndBox
		*(NJS_MODEL_SADX*)0x1FFCD68 = *LoadModel("system\\data\\STG07\\Models\\0012A3FC.sa1mdl", false)->basicdxmodel; //ORRaf 1
		*(NJS_MODEL_SADX*)0x1FFAB20 = *LoadModel("system\\data\\STG07\\Models\\00128E68.sa1mdl", false)->basicdxmodel; //ORRaf 2
		*(NJS_MODEL_SADX*)0x2002920 = *LoadModel("system\\data\\STG07\\Models\\0012E644.sa1mdl", false)->basicdxmodel; //HebiZou / MRSna
		*(NJS_MODEL_SADX*)0x20068D0 = *LoadModel("system\\data\\STG07\\Models\\0013176C.sa1mdl", false)->basicdxmodel; //Sekicyuu 1
		*(NJS_MODEL_SADX*)0x2006D68 = *LoadModel("system\\data\\STG07\\Models\\00131BEC.sa1mdl", false)->basicdxmodel; //Sekicyuu 2
		*(NJS_MODEL_SADX*)0x2004E80 = *LoadModel("system\\data\\STG07\\Models\\00130608.sa1mdl", false)->basicdxmodel; //Hasira01 and Sekicyuu 3
		*(NJS_MODEL_SADX*)0x20062E0 = *LoadModel("system\\data\\STG07\\Models\\001313E4.sa1mdl", false)->basicdxmodel; //Hasira02 and Sekicyuu 4
		*(NJS_MODEL_SADX*)0x2026E38 = *LoadModel("system\\data\\STG07\\Models\\00149EA4.sa1mdl", false)->basicdxmodel; //Fire obstacle
		*(NJS_MODEL_SADX*)0x201CE60 = *LoadModel("system\\data\\STG07\\Models\\00142710.sa1mdl", false)->basicdxmodel; //TPanel
		*(NJS_MODEL_SADX*)0x201AF60 = *LoadModel("system\\data\\STG07\\Models\\00140C64.sa1mdl", false)->basicdxmodel; //Box part 1 model
		*(NJS_MODEL_SADX*)0x201B198 = *LoadModel("system\\data\\STG07\\Models\\00140E84.sa1mdl", false)->basicdxmodel; //Box part 2 model
		*(NJS_MODEL_SADX*)0x201B3E0 = *LoadModel("system\\data\\STG07\\Models\\001410B4.sa1mdl", false)->basicdxmodel; //Box part 3 model
		*(NJS_MODEL_SADX*)0x201B6C8 = *LoadModel("system\\data\\STG07\\Models\\00141374.sa1mdl", false)->basicdxmodel; //Box part 4 model
		*(NJS_MODEL_SADX*)0x201B910 = *LoadModel("system\\data\\STG07\\Models\\001415A4.sa1mdl", false)->basicdxmodel; //Box part 5 model
		*(NJS_MODEL_SADX*)0x201BB90 = *LoadModel("system\\data\\STG07\\Models\\0014180C.sa1mdl", false)->basicdxmodel; //Box part 6 model
		*(NJS_MODEL_SADX*)0x202A9D8 = *LoadModel("system\\data\\STG07\\Models\\0014D094.sa1mdl", false)->basicdxmodel; //OTap (snake head)
		*(NJS_MODEL_SADX*)0x202AE00 = *LoadModel("system\\data\\STG07\\Models\\0014D47C.sa1mdl", false)->basicdxmodel; //OTap (water)
		WriteData((NJS_MESHSET_SADX * **)0x005E8818, &((NJS_OBJECT*)0x202AE2C)->basicdxmodel->meshsets); //UV animation for OTap
		WriteData((NJS_MESHSET_SADX * **)0x005E884C, &((NJS_OBJECT*)0x202AE2C)->basicdxmodel->meshsets); //UV animation for OTap
		((NJS_OBJECT*)0x201AF8C)->basicdxmodel = (NJS_MODEL_SADX*)0x201AF60; //Box part 1 object
		((NJS_OBJECT*)0x201B1C4)->basicdxmodel = (NJS_MODEL_SADX*)0x201B198; //Box part 2 object
		((NJS_OBJECT*)0x201B40C)->basicdxmodel = (NJS_MODEL_SADX*)0x201B3E0; //Box part 3 object
		((NJS_OBJECT*)0x201B6F4)->basicdxmodel = (NJS_MODEL_SADX*)0x201B6C8; //Box part 4 object
		((NJS_OBJECT*)0x201B93C)->basicdxmodel = (NJS_MODEL_SADX*)0x201B910; //Box part 5 object
		((NJS_OBJECT*)0x201BBBC)->basicdxmodel = (NJS_MODEL_SADX*)0x201BB90; //Box part 6 object
		((NJS_OBJECT*)0x201A108)->basicdxmodel = LoadModel("system\\data\\STG07\\Models\\0013FE9C.sa1mdl", false)->basicdxmodel; //Lostjumpdai
		((NJS_OBJECT*)0x2019E20)->basicdxmodel = LoadModel("system\\data\\STG07\\Models\\0013FBF4.sa1mdl", false)->basicdxmodel; //BurningBow
		((NJS_OBJECT*)0x201C690)->basicdxmodel = LoadModel("system\\data\\STG07\\Models\\00141F40.sa1mdl", false)->basicdxmodel; //OSuimenSwitch
		((NJS_OBJECT*)0x201C690)->child->model = LoadModel("system\\data\\STG07\\Models\\00141B84.sa1mdl", false)->basicdxmodel; //OSuimenSwitch button part
		*(NJS_OBJECT*)0x202BE1C = *LoadModel("system\\data\\STG07\\Models\\0014E104.sa1mdl", false); //OBigMr
		*(NJS_OBJECT*)0x2000824 = *LoadModel("system\\data\\STG07\\Models\\0012CF24.sa1mdl", false); //Ashikabe01
		*(NJS_OBJECT*)0x2028BB8 = *LoadModel("system\\data\\STG07\\Models\\0014B2C8.sa1mdl", false); //RMirror
		*(NJS_MODEL_SADX*)0x2028C98 = *LoadModel("system\\data\\STG07\\Models\\0014B3CC.sa1mdl", false)->basicdxmodel; //RMirror light
		*(NJS_OBJECT*)0x2011548 = *LoadModel("system\\data\\STG07\\Models\\00139A9C.sa1mdl", false); //Toge
		*(NJS_OBJECT*)0x2012FA0 = *LoadModel("system\\data\\STG07\\Models\\0013AD84.sa1mdl", false); //TogedaiUD
		*(NJS_OBJECT*)0x201A39C = *LoadModel("system\\data\\STG07\\Models\\001400A0.sa1mdl", false); //TurnCube
		*(NJS_OBJECT*)0x20144CC = *LoadModel("system\\data\\STG07\\Models\\0013BB70.sa1mdl", false); //Kusa02 type 1
		*(NJS_OBJECT*)0x2015968 = *LoadModel("system\\data\\STG07\\Models\\0013CA2C.sa1mdl", false); //Kusa02 type 2
		*(NJS_OBJECT*)0x2016B38 = *LoadModel("system\\data\\STG07\\Models\\0013D7A8.sa1mdl", false); //Kusa02 type 3 (Shitakusa)
		*(NJS_OBJECT*)0x201889C = *LoadModel("system\\data\\STG07\\Models\\0013EC1C.sa1mdl", false); //Kusa02 type 4 (Shitakusa)
		*(NJS_OBJECT*)0x201F82C = *LoadModel("system\\data\\STG07\\Models\\00144FD4.sa1mdl", false); //Door front
		*(NJS_OBJECT*)0x200D9D4 = *LoadModel("system\\data\\STG07\\Models\\00135F50.sa1mdl", false); //Snake gate
		*(NJS_OBJECT*)0x1FFE9A4 = *LoadModel("system\\data\\STG07\\Models\\0012BB88.sa1mdl", false); //Ashiba01
		*(NJS_OBJECT*)0x1FFF454 = *LoadModel("system\\data\\STG07\\Models\\0012C218.sa1mdl", false); //Ashiba02
		*(NJS_OBJECT*)0x1FFFF04 = *LoadModel("system\\data\\STG07\\Models\\0012C8B4.sa1mdl", false); //Ashiba03
		*(NJS_OBJECT*)0x2023C08 = *LoadModel("system\\data\\STG07\\Models\\00148264.sa1mdl", false); //Snake head
		*(NJS_OBJECT*)0x20253BC = *LoadModel("system\\data\\STG07\\Models\\00148E78.sa1mdl", false); //Snake joints
		*(NJS_OBJECT*)0x2025D64 = *LoadModel("system\\data\\STG07\\Models\\00149374.sa1mdl", false); //Snake joint near the tail
		*(NJS_OBJECT*)0x202670C = *LoadModel("system\\data\\STG07\\Models\\00149870.sa1mdl", false); //Snake tail
		*(NJS_OBJECT*)0x2024828 = *LoadModel("system\\data\\STG07\\Models\\001487A0.sa1mdl", false); //Snake tail tip
		*(NJS_OBJECT*)0x1FE9D7C = *LoadModel("system\\data\\STG07\\Models\\00057E5C.sa1mdl", false); //OSuimen
		AddTextureAnimation_Permanent(7, 0, &((NJS_OBJECT*)0x1FE9D7C)->basicdxmodel->mats[0], false, 1, 44, 57, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1);
		*(NJS_OBJECT*)0x202E404 = *LoadModel("system\\data\\STG07\\Models\\001506DC.sa1mdl", false); //Some other water (loaded with the skybox)
		//Rlight stuff
		((NJS_MATERIAL*)0x2031660)->attrflags &= ~NJD_SA_ONE;
		((NJS_MATERIAL*)0x2031660)->attrflags &= ~NJD_DA_ONE;
		((NJS_MATERIAL*)0x2031660)->attrflags |= NJD_SA_SRC;
		((NJS_MATERIAL*)0x2031660)->attrflags |= NJD_DA_DST;
		WriteCall((void*)0x5E8976, RLight_Load);
		//Object fixes
		WriteCall((void*)0x5E9216, RenderLWPlatformTriangle);
		WriteCall((void*)0x5E927F, RenderLWPlatformLight);
		//Water fixes
		WriteData<1>((void*)0x005E2090, 0xC3u); //Kill water animation in Act 1
		//Fog and other stuff
		WriteData<1>((char*)0x005E315D, 0i8); //Prevent the mirror room from disabling character lighting
		WriteData((float*)0x814CB4, -25.0f); //LW2 fog stuff
		for (int i = 0; i < 3; i++)
		{
			LostWorld1Fog[i].Color = 0xFFFFFFFF;
			LostWorld1Fog[i].Layer = 1.0f;
			LostWorld1Fog[i].Distance = 3400.0f;
			LostWorld1Fog[i].Toggle = 1;
			LostWorld2Fog[i].Color = 0xFFFFFFFF;
			LostWorld2Fog[i].Layer = 150.0f;
			LostWorld2Fog[i].Distance = 3200.0f;
			LostWorld2Fog[i].Toggle = 1;
			LostWorld3Fog[i].Layer = 1.0f;
			LostWorld3Fog[i].Distance = 3400.0f;
			LostWorld3Fog[i].Color = 0xFFFFFFFF;
			DrawDist_LostWorld2[i].Maximum = -2700.0;
		}
		ModelsLoaded_STG07 = true;
	}
}

void LostWorld_OnFrame()
{
	if (CurrentLevel == LevelIDs_LostWorld && !IsGamePaused())
	{
		//Draw distance hack for Act 2 boulder corridor
		if (CurrentAct == 1)
		{
			auto entity = EntityData1Ptrs[0];
			if (entity != nullptr && entity->Position.x < 7000 && entity->Position.x > 1800) CurrentDrawDist = -6000.0f; else CurrentDrawDist = -2700.0f;
		}
	}
}