#include "stdafx.h"
#include "Chaos6_Motion.h"

NJS_TEXNAME textures_chaos6[77];
NJS_TEXLIST texlist_chaos6 = { arrayptrandlength(textures_chaos6) };

NJS_TEXNAME textures_chaos6_2[79];
NJS_TEXLIST texlist_chaos6_2 = { arrayptrandlength(textures_chaos6_2) };

DataPointer(NJS_OBJECT, stru_11EDF38, 0x11EDF38);
DataPointer(NJS_OBJECT, stru_11EEED8, 0x11EEED8);
//Chaos 6 material arrays
DataArray(NJS_MATERIAL, matlist_00F975B0, 0x013975B0, 3);
DataArray(NJS_MATERIAL, matlist_00F98C98, 0x01398C98, 6);
DataArray(NJS_MATERIAL, matlist_01270910, 0x01270910, 4);
DataArray(NJS_MATERIAL, matlist_0126C51C, 0x0126C51C, 2);
DataArray(NJS_MATERIAL, matlist_01271BCC, 0x01271BCC, 2);

DataArray(FogData, Chaos6SFog, 0x011EF0E8, 3);
DataArray(FogData, Chaos6KFog, 0x011EF118, 3);
DataArray(NJS_VECTOR, SkyBoxScale_Chaos6S, 0x011EF040, 3);
DataArray(NJS_VECTOR, SkyBoxScale_Chaos6K, 0x011EF064, 3);
DataArray(DrawDistance, DrawDist_Chaso6S, 0x011EF0B8, 3);
DataArray(DrawDistance, DrawDist_Chaso6K, 0x011EF0D0, 3);


void __cdecl SetClip_Chaos6KX(signed int a1)
{
	NJS_MODEL_SADX *v1; // ecx@3
	signed int v2; // edx@3
	char *v3; // eax@4
	NJS_MODEL_SADX *v4; // edx@6
	signed int v5; // ecx@6
	char *v6; // eax@7
	NJS_MODEL_SADX *v7; // edx@9
	signed int v8; // ecx@9
	char *v9; // eax@10
	NJS_MODEL_SADX *v10; // edx@12
	signed int v11; // ecx@12
	char *v12; // eax@13
	if (B_CHAOS6_1_Info)
	{
		if (a1 >= 2)
		{
			v1 = (NJS_MODEL_SADX*)B_CHAOS6_1_Info->getdata("attach_00190A04");
			v2 = 0;
			if (v1->nbMat)
			{
				v3 = (char *)&v1->mats->attrflags;
				do
				{
					*(_DWORD *)v3 &= ~NJD_FLAG_USE_ALPHA;
					++v2;
					v3 += 20;
				} while (v2 < v1->nbMat);
			}
			v4 = (NJS_MODEL_SADX*)B_CHAOS6_1_Info->getdata("attach_00190B94");
			v5 = 0;
			if (v4->nbMat)
			{
				v6 = (char *)&v4->mats->attrflags;
				do
				{
					*(_DWORD *)v6 &= ~NJD_FLAG_USE_ALPHA;
					++v5;
					v6 += 20;
				} while (v5 < v4->nbMat);
			}
			v7 = (NJS_MODEL_SADX*)B_CHAOS6_1_Info->getdata("attach_001911C4");
			v8 = 0;
			if (v7->nbMat)
			{
				v9 = (char *)&v7->mats->attrflags;
				do
				{
					*(_DWORD *)v9 &= ~NJD_FLAG_USE_ALPHA;
					++v8;
					v9 += 20;
				} while (v8 < v7->nbMat);
			}
			v10 = (NJS_MODEL_SADX*)B_CHAOS6_1_Info->getdata("attach_00191354");
			v11 = 0;
			if (v10->nbMat)
			{
				v12 = (char *)&v10->mats->attrflags;
				do
				{
					*(_DWORD *)v12 &= ~NJD_FLAG_USE_ALPHA;
					++v11;
					v12 += 20;
				} while (v11 < v10->nbMat);
			}
			B_CHAOS6_1_Info->getlandtable()->COLCount -= 4;
		}
		else
		{
			B_CHAOS6_1_Info->getlandtable()->Col = &((COL*)B_CHAOS6_1_Info->getdata("collist_0016F6D8"))[4];
			B_CHAOS6_1_Info->getlandtable()->COLCount -= 4;
		}
	}
}

void __cdecl SetClip_Chaos6SX(signed int a1)
{
	NJS_MODEL_SADX *v1; // ecx@3
	signed int v2; // edx@3
	char *v3; // eax@4
	NJS_MODEL_SADX *v4; // edx@6
	signed int v5; // ecx@6
	char *v6; // eax@7
	NJS_MODEL_SADX *v7; // edx@9
	signed int v8; // ecx@9
	char *v9; // eax@10
	NJS_MODEL_SADX *v10; // edx@12
	signed int v11; // ecx@12
	char *v12; // eax@13
	if (B_CHAOS6_0_Info)
	{
		if (a1 >= 2)
		{
			v1 = (NJS_MODEL_SADX*)B_CHAOS6_0_Info->getdata("attach_0015D964");
			v2 = 0;
			if (v1->nbMat)
			{
				v3 = (char *)&v1->mats->attrflags;
				do
				{
					*(_DWORD *)v3 &= ~NJD_FLAG_USE_ALPHA;
					++v2;
					v3 += 20;
				} while (v2 < v1->nbMat);
			}
			v4 = (NJS_MODEL_SADX*)B_CHAOS6_0_Info->getdata("attach_0015DC90");
			v5 = 0;
			if (v4->nbMat)
			{
				v6 = (char *)&v4->mats->attrflags;
				do
				{
					*(_DWORD *)v6 &= ~NJD_FLAG_USE_ALPHA;
					++v5;
					v6 += 20;
				} while (v5 < v4->nbMat);
			}
			v7 = (NJS_MODEL_SADX*)B_CHAOS6_0_Info->getdata("attach_0015E2C0");
			v8 = 0;
			if (v7->nbMat)
			{
				v9 = (char *)&v7->mats->attrflags;
				do
				{
					*(_DWORD *)v9 &= ~NJD_FLAG_USE_ALPHA;
					++v8;
					v9 += 20;
				} while (v8 < v7->nbMat);
			}
			v10 = (NJS_MODEL_SADX*)B_CHAOS6_0_Info->getdata("attach_0015E5EC");
			v11 = 0;
			if (v10->nbMat)
			{
				v12 = (char *)&v10->mats->attrflags;
				do
				{
					*(_DWORD *)v12 &= ~NJD_FLAG_USE_ALPHA;
					++v11;
					v12 += 20;
				} while (v11 < v10->nbMat);
			}
			B_CHAOS6_0_Info->getlandtable()->COLCount -= 4;
		}
		else
		{
			B_CHAOS6_0_Info->getlandtable()->Col = &((COL*)B_CHAOS6_0_Info->getdata("collist_0014AFB4"))[4];
			B_CHAOS6_0_Info->getlandtable()->COLCount -= 4;
		}
	}
}


void __cdecl Chaos6SkyboxBottom(EntityData1 *a1)
{
	Sint16 v1; // cx
	NJS_TEX *v2; // eax

	if (!MissedFrames)
	{
		v1 = *(Sint16*)&a1->LoopData;
		v2 = stru_11EDF38.basicdxmodel->meshsets->vertuv;
		v2->v = v1 + 2040;
		v2[2].v = v1 + 2040;
		v2[1].v = v1;
		v2[3].v = v1;
		DisableFog();
		njSetTexture(&CHAOS6_BG_TEXLIST);
		njPushMatrix(0);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
		SetMaterialAndSpriteColor_Float(0.5, 0.0, 0.0, 0.0);
		njTranslate(0, Camera_Data1->Position.x, 0, Camera_Data1->Position.z);
		njScale(0, 3.0, 1.0, 3.0);
		DrawQueueDepthBias = -32000.0f;
		ProcessModelNode(&stru_11EDF38, QueuedModelFlagsB_SomeTextureThing, 3.0f);
		DrawQueueDepthBias = 0;
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
		njPopMatrix(1u);
		ToggleStageFog();
	}
}

void __cdecl Chaos6SkyboxMain()
{
	if (!MissedFrames)
	{
		DisableFog();
		njSetTexture(&CHAOS6_BG_TEXLIST);
		njPushMatrix(0);
		njTranslate(0, Camera_Data1->Position.x, 0.0, Camera_Data1->Position.z);
		njRotateY(0, 57344);
		njScaleV(0, &Skybox_Scale);
		DrawQueueDepthBias = -30000.0f;
		ProcessModelNode(&stru_11EEED8, QueuedModelFlagsB_SomeTextureThing, 3.0f);
		DrawQueueDepthBias = 0;
		njPopMatrix(1u);
		ToggleStageFog();
	}
}

void UnloadLevelFiles_B_CHAOS6()
{
	delete B_CHAOS6_0_Info;
	delete B_CHAOS6_1_Info;
	B_CHAOS6_0_Info = nullptr;
	B_CHAOS6_1_Info = nullptr;
}


void LoadLevelFiles_B_CHAOS6()
{
	CheckAndUnloadLevelFiles();
	B_CHAOS6_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_CHAOS6\\0.sa1lvl"));
	B_CHAOS6_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_CHAOS6\\1.sa1lvl"));
	LandTable *B_CHAOS6_0 = B_CHAOS6_0_Info->getlandtable();
	LandTable *B_CHAOS6_1 = B_CHAOS6_1_Info->getlandtable();
	RemoveMaterialColors_Landtable(B_CHAOS6_0);
	RemoveMaterialColors_Landtable(B_CHAOS6_1);
	B_CHAOS6_0->TexList = &texlist_chaos6;
	B_CHAOS6_1->TexList = &texlist_chaos6_2;
	LandTableArray[24] = B_CHAOS6_0; //Chaos 6S
	LandTableArray[25] = B_CHAOS6_1; //Chaos 6K
	SetClip_Chaos6SX(ClipLevel);
	SetClip_Chaos6KX(ClipLevel);
}

void Chaos6_Init()
{
	ReplaceBIN_DC("SET1800B");
	ReplaceBIN_DC("SET1800S");
	ReplaceBIN_DC("SET1801K");
	ReplacePVM("LM_CHAOS6");
	ReplacePVM("LM_CHAOS6_2");
	ReplacePVM("CHAOS6");
	ReplacePVM("CHAOS6_BG");
	ReplacePVM("CHAOS6_EFFECT");
	ReplacePVM("CHAOS6_EGGMAN");
	ReplacePVM("CHAOS6_EISEI");
	ReplacePVM("CHAOS6_OBJECT");
	matlist_00F975B0[0].diffuse.color = 0xFFB2B2B2;
	matlist_00F975B0[1].diffuse.color = 0xFFB2B2B2;
	matlist_00F975B0[2].diffuse.color = 0xFFB2B2B2;
	matlist_00F98C98[0].diffuse.color = 0xFFB2B2B2;
	matlist_00F98C98[1].diffuse.color = 0xFFB2B2B2;
	matlist_00F98C98[2].diffuse.color = 0xFFB2B2B2;
	matlist_00F98C98[3].diffuse.color = 0xFFB2B2B2;
	matlist_00F98C98[4].diffuse.color = 0xFFB2B2B2;
	matlist_00F98C98[5].diffuse.color = 0xFFB2B2B2;
	ResizeTextureList((NJS_TEXLIST*)0x121FF28, textures_chaos6);
	ResizeTextureList((NJS_TEXLIST*)0x11F04A0, textures_chaos6_2);
	WriteJump((void*)0x556FD0, Chaos6SkyboxBottom);
	WriteJump((void*)0x556F20, Chaos6SkyboxMain);
	((NJS_ACTION*)0x134C56C)->motion = &Chaos6Animation3; //Fix flickering stuff in Chaos 6' walking animation
	//Chaos 6 emeralds
	/*((NJS_MATERIAL*)0x01264A58)->diffuse.color = 0xFFB2B2B2;
	((NJS_MATERIAL*)0x01266968)->diffuse.color = 0xFFB2B2B2;
	((NJS_MATERIAL*)0x0126F6F4)->diffuse.color = 0xFFB2B2B2;
	((NJS_MATERIAL*)0x0126F970)->diffuse.color = 0xFFB2B2B2;
	((NJS_MATERIAL*)0x0126FBE8)->diffuse.color = 0xFFB2B2B2;
	((NJS_MATERIAL*)0x0126FE60)->diffuse.color = 0xFFB2B2B2;
	((NJS_MATERIAL*)0x01264A58)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_MATERIAL*)0x01266968)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_MATERIAL*)0x0126F6F4)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_MATERIAL*)0x0126F970)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_MATERIAL*)0x0126FBE8)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_MATERIAL*)0x0126FE60)->attrflags |= NJD_FLAG_IGNORE_LIGHT;*/
	for (unsigned int i = 0; i < 3; i++)
	{
		Chaos6SFog[i].Distance = 12000.0f;
		Chaos6KFog[i].Distance = 12000.0f;
		SkyBoxScale_Chaos6S[i].x = 1.0f;
		SkyBoxScale_Chaos6S[i].y = 1.0f;
		SkyBoxScale_Chaos6S[i].z = 1.0f;
		SkyBoxScale_Chaos6K[i].x = 1.0f;
		SkyBoxScale_Chaos6K[i].y = 1.0f;
		SkyBoxScale_Chaos6K[i].z = 1.0f;
		DrawDist_Chaso6S[i].Maximum = -18000.0f;
		DrawDist_Chaso6K[i].Maximum = -18000.0f;
	}
}


