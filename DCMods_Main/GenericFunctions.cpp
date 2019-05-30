#include "stdafx.h"
#include "GenericData.h"

void CheckAndUnloadLevelFiles()
{
	ClearTextureAnimationData();
	if (CurrentLevel != LevelIDs_StationSquare && ADV00_0_Info) UnloadLevelFiles_ADV00();
	if (CurrentLevel != LevelIDs_EggCarrierOutside && ADV01_0_Info) UnloadLevelFiles_ADV01();
	if (CurrentLevel != LevelIDs_EggCarrierInside && ADV01C_0_Info) UnloadLevelFiles_ADV01C();
	if (CurrentLevel != LevelIDs_MysticRuins && ADV02_0_Info) UnloadLevelFiles_ADV02();
	if (CurrentLevel != LevelIDs_Past && ADV00_0_Info) UnloadLevelFiles_ADV03();
	if (CurrentLevel != LevelIDs_Chaos0 && B_CHAOS0_Info) UnloadLevelFiles_B_CHAOS0();
	if (CurrentLevel != LevelIDs_Chaos2 && B_CHAOS2_Info) UnloadLevelFiles_B_CHAOS2();
	if (CurrentLevel != LevelIDs_Chaos4 && B_CHAOS4_Info) UnloadLevelFiles_B_CHAOS4();
	if (CurrentLevel != LevelIDs_Chaos6 && B_CHAOS6_0_Info) UnloadLevelFiles_B_CHAOS6();
	if (CurrentLevel != LevelIDs_PerfectChaos && B_CHAOS7_Info) UnloadLevelFiles_B_CHAOS7();
	if (CurrentLevel != LevelIDs_EggHornet && B_EGM1_Info) UnloadLevelFiles_B_EGM1();
	if (CurrentLevel != LevelIDs_EggWalker && B_EGM2_Info) UnloadLevelFiles_B_EGM2();
	if (CurrentLevel != LevelIDs_EggViper && B_EGM3_Info) UnloadLevelFiles_B_EGM3();
	if (CurrentLevel != LevelIDs_Zero && B_ROBO_Info) UnloadLevelFiles_B_ROBO();
	if (CurrentLevel != LevelIDs_Zero && B_E101_Info) UnloadLevelFiles_B_E101();
	if (CurrentLevel != LevelIDs_Zero && B_E101_R_Info) UnloadLevelFiles_B_E101_R();
	if (CurrentLevel != LevelIDs_EmeraldCoast && STG01_0_Info) UnloadLevelFiles_STG01();
	if (CurrentLevel != LevelIDs_WindyValley && STG02_0_Info) UnloadLevelFiles_STG02();
	if (CurrentLevel != LevelIDs_TwinklePark && STG03_0_Info) UnloadLevelFiles_STG03();
	if (CurrentLevel != LevelIDs_SpeedHighway && STG04_0_Info) UnloadLevelFiles_STG04();
	if (CurrentLevel != LevelIDs_RedMountain && STG05_0_Info) UnloadLevelFiles_STG05();
	if (CurrentLevel != LevelIDs_SkyDeck && STG06_0_Info) UnloadLevelFiles_STG06();
	if (CurrentLevel != LevelIDs_LostWorld && STG07_0_Info) UnloadLevelFiles_STG07();
	if (CurrentLevel != LevelIDs_IceCap && STG08_0_Info) UnloadLevelFiles_STG08();
	if (CurrentLevel != LevelIDs_Casinopolis && STG09_0_Info) UnloadLevelFiles_STG09();
	if (CurrentLevel != LevelIDs_FinalEgg && STG10_0_Info) UnloadLevelFiles_STG10();
	if (CurrentLevel != LevelIDs_HotShelter && STG12_0_Info) UnloadLevelFiles_STG12();
	if (CurrentLevel != LevelIDs_SandHill && SBOARD_Info) UnloadLevelFiles_SBOARD();
	if (CurrentLevel != LevelIDs_TwinkleCircuit && SBOARD_Info) UnloadLevelFiles_MINICART();
	if (CurrentLevel < 39 && AL_RACE_0_Info)
	{
		UnloadLevelFiles_Chao();
		UnloadLevelFiles_AL_RACE();
	}
}

void AnimateTexture(TextureAnimation *texanim)
{
	int framenumber;
	int actualspeed = 1;
	//Calculate animation speed if in 30 or 15 FPS mode
	if (FramerateSetting > 1 && texanim->Speed > 1) actualspeed = texanim->Speed / 2; else actualspeed = texanim->Speed;
	if (texanim->material && FrameCounter % actualspeed == 0)
	{
		//Deal with non-sequential animations manually
		if (texanim->NonSequential)
		{
			if (texanim->material->attr_texId == texanim->Frame1)
			{
				if (texanim->Frame2 != -1) texanim->material->attr_texId = texanim->Frame2; 
				else texanim->material->attr_texId = texanim->Frame1;
				goto nonseq_done;
			}
			if (texanim->material->attr_texId == texanim->Frame2)
			{
				if (texanim->Frame3 != -1) texanim->material->attr_texId = texanim->Frame3;
				else texanim->material->attr_texId = texanim->Frame1;
				goto nonseq_done;
			}
			if (texanim->material->attr_texId == texanim->Frame3)
			{
				if (texanim->Frame4 != -1) texanim->material->attr_texId = texanim->Frame4;
				else texanim->material->attr_texId = texanim->Frame1;
				goto nonseq_done;
			}
			if (texanim->material->attr_texId == texanim->Frame4)
			{
				if (texanim->Frame5 != -1) texanim->material->attr_texId = texanim->Frame5;
				else texanim->material->attr_texId = texanim->Frame1;
				goto nonseq_done;
			}
			if (texanim->material->attr_texId == texanim->Frame5)
			{
				if (texanim->Frame6 != -1) texanim->material->attr_texId = texanim->Frame6;
				else texanim->material->attr_texId = texanim->Frame1;
				goto nonseq_done;
			}
			if (texanim->material->attr_texId == texanim->Frame6)
			{
				if (texanim->Frame7 != -1) texanim->material->attr_texId = texanim->Frame7;
				else texanim->material->attr_texId = texanim->Frame1;
				goto nonseq_done;
			}
			if (texanim->material->attr_texId == texanim->Frame7)
			{
				if (texanim->Frame8 != -1) texanim->material->attr_texId = texanim->Frame8;
				else texanim->material->attr_texId = texanim->Frame1;
				goto nonseq_done;
			}
			if (texanim->material->attr_texId == texanim->Frame8)
			{
				if (texanim->Frame9 != -1) texanim->material->attr_texId = texanim->Frame9;
				else texanim->material->attr_texId = texanim->Frame1;
				goto nonseq_done;
			}
			if (texanim->material->attr_texId == texanim->Frame9)
			{
				if (texanim->Frame10 != -1) texanim->material->attr_texId = texanim->Frame10;
				else texanim->material->attr_texId = texanim->Frame1;
				goto nonseq_done;
			}
			if (texanim->material->attr_texId == texanim->Frame10)
			{
				if (texanim->Frame11 != -1) texanim->material->attr_texId = texanim->Frame11;
				else texanim->material->attr_texId = texanim->Frame1;
				goto nonseq_done;
			}
			if (texanim->material->attr_texId == texanim->Frame11)
			{
				if (texanim->Frame12 != -1) texanim->material->attr_texId = texanim->Frame12;
				else texanim->material->attr_texId = texanim->Frame1;
				goto nonseq_done;
			}
			if (texanim->material->attr_texId == texanim->Frame12)
			{
				if (texanim->Frame13 != -1) texanim->material->attr_texId = texanim->Frame13;
				else texanim->material->attr_texId = texanim->Frame1;
				goto nonseq_done;
			}
			if (texanim->material->attr_texId == texanim->Frame13)
			{
				if (texanim->Frame14 != -1) texanim->material->attr_texId = texanim->Frame14;
				else texanim->material->attr_texId = texanim->Frame1;
				goto nonseq_done;
			}
			if (texanim->material->attr_texId == texanim->Frame14)
			{
				if (texanim->Frame15 != -1) texanim->material->attr_texId = texanim->Frame15;
				else texanim->material->attr_texId = texanim->Frame1;
				goto nonseq_done;
			}
			if (texanim->material->attr_texId == texanim->Frame15)
			{
				if (texanim->Frame16 != -1) texanim->material->attr_texId = texanim->Frame16;
				else texanim->material->attr_texId = texanim->Frame1;
				goto nonseq_done;
			}
			if (texanim->material->attr_texId == texanim->Frame16) 
			{
				texanim->material->attr_texId = texanim->Frame1;
				goto nonseq_done;
			}
		nonseq_done:
			return;
		}
		//Animate automatically if sequential
		else
		{
			framenumber = texanim->material->attr_texId;
			framenumber++;
			//Reset if reached end of animation or incorrect initial frame
			if (framenumber > texanim->Frame2 || framenumber < texanim->Frame1) framenumber = texanim->Frame1;
			texanim->material->attr_texId = framenumber;
			//PrintDebug("Framenumber: %d\n", framenumber);
		}
	}
}

void AnimateUVs(UVAnimation *animation)
{
	int actualtimer = 1;
	//Calculate animation speed if in 30 or 15 FPS mode
	if (FramerateSetting > 1 && animation->timer > 1) actualtimer = animation->timer / 2; else actualtimer = animation->timer;
	if (actualtimer == 0) actualtimer = 1;
	if (animation->uv_pointer && animation->uv_count && FrameCounter % actualtimer == 0)
	{
		animation->v_shift += animation->v_speed;
		animation->u_shift += animation->u_speed;
		//Limit V +
		if (animation->v_shift > 255)
		{
			animation->v_shift -= 255;
			for (int i = 0; i < animation->uv_count; i++)
			{
				animation->uv_pointer[i].v -= 255;
			}
		}
		//Limit V -
		if (animation->v_shift < -255)
		{
			animation->v_shift += 255;
			for (int i = 0; i < animation->uv_count; i++)
			{
				animation->uv_pointer[i].v += 255;
			}
		}
		//Limit U +
		if (animation->u_shift > 255)
		{
			animation->u_shift -= 255;
			for (int i = 0; i < animation->uv_count; i++)
			{
				animation->uv_pointer[i].u -= 255;
			}
		}
		//Limit U -
		if (animation->u_shift < -255)
		{
			animation->u_shift += 255;
			for (int i = 0; i < animation->uv_count; i++)
			{
				animation->uv_pointer[i].u += 255;
			}
		}
		//Add U and V
		for (int i = 0; i < animation->uv_count; i++)
		{
			animation->uv_pointer[i].v += animation->v_speed;
			animation->uv_pointer[i].u += animation->u_speed;
		}
		//PrintDebug("UV Animation count %d, timer %d, add %d, current %d \n", animation->uv_count, animation->timer, animation->v_shift, animation->uv_pointer[0].v);
	}
}

void ClearTextureAnimationData()
{
	TextureAnimation* TextureAnimationData = TextureAnimationData_Act1;
	for (int u = 0; u < 4; u++)
	{
		if (u == 0) TextureAnimationData = TextureAnimationData_Act1;
		else if (u == 1) TextureAnimationData = TextureAnimationData_Act2;
		else if (u == 2) TextureAnimationData = TextureAnimationData_Act3;
		else TextureAnimationData = TextureAnimationData_Act4;
		for (int i = 0; i < 64; i++)
		{
			TextureAnimationData[i].material = nullptr;
			TextureAnimationData[i].NonSequential = false;
			TextureAnimationData[i].Speed = 0;
			TextureAnimationData[i].Frame1 = 0;
			TextureAnimationData[i].Frame2 = 0;
			TextureAnimationData[i].Frame3 = 0;
			TextureAnimationData[i].Frame4 = 0;
			TextureAnimationData[i].Frame5 = 0;
			TextureAnimationData[i].Frame6 = 0;
			TextureAnimationData[i].Frame7 = 0;
			TextureAnimationData[i].Frame8 = 0;
			TextureAnimationData[i].Frame9 = 0;
			TextureAnimationData[i].Frame10 = 0;
			TextureAnimationData[i].Frame11 = 0;
			TextureAnimationData[i].Frame12 = 0;
			TextureAnimationData[i].Frame13 = 0;
			TextureAnimationData[i].Frame14 = 0;
			TextureAnimationData[i].Frame15 = 0;
			TextureAnimationData[i].Frame16 = 0;
		}
	}
	for (int i = 0; i < LengthOfArray(UVAnimationData); i++)
	{
		UVAnimationData[i].uv_pointer = nullptr;
		UVAnimationData[i].uv_count = 0;
		UVAnimationData[i].u_speed = 0;
		UVAnimationData[i].v_speed = 0;
		UVAnimationData[i].u_shift = 0;
		UVAnimationData[i].v_shift = 0;
		UVAnimationData[i].timer = 0;
	}
}

void AddTextureAnimation(int act, NJS_MATERIAL* material, bool nonsequential, int speed, int frame1, int frame2, int frame3, int frame4, int frame5, int frame6, int frame7, int frame8, int frame9, int frame10, int frame11, int frame12, int frame13, int frame14, int frame15, int frame16)
{
	TextureAnimation* TextureAnimationData = TextureAnimationData_Act1;
	if (act == 0) TextureAnimationData = TextureAnimationData_Act1;
	else if (act == 1) TextureAnimationData = TextureAnimationData_Act2;
	else if (act == 2) TextureAnimationData = TextureAnimationData_Act3;
	else TextureAnimationData = TextureAnimationData_Act4;
	for (int i = 0; i < 64; i++)
	{
		if (TextureAnimationData[i].material == material) return;
		if (!TextureAnimationData[i].material)
		{
			TextureAnimationData[i].material = material;
			TextureAnimationData[i].NonSequential = nonsequential;
			TextureAnimationData[i].Speed = speed;
			TextureAnimationData[i].Frame1 = frame1;
			TextureAnimationData[i].Frame2 = frame2;
			TextureAnimationData[i].Frame3 = frame3;
			TextureAnimationData[i].Frame4 = frame4;
			TextureAnimationData[i].Frame5 = frame5;
			TextureAnimationData[i].Frame6 = frame6;
			TextureAnimationData[i].Frame7 = frame7;
			TextureAnimationData[i].Frame8 = frame8;
			TextureAnimationData[i].Frame9 = frame9;
			TextureAnimationData[i].Frame10 = frame10;
			TextureAnimationData[i].Frame11 = frame11;
			TextureAnimationData[i].Frame12 = frame12;
			TextureAnimationData[i].Frame13 = frame13;
			TextureAnimationData[i].Frame14 = frame14;
			TextureAnimationData[i].Frame15 = frame15;
			TextureAnimationData[i].Frame16 = frame16;
			return;
		}
	}
}

void AddUVAnimation(NJS_TEX* uv, int uv_count, int timer, int u_speed, int v_speed)
{
	for (int i = 0; i < LengthOfArray(UVAnimationData); i++)
	{
		if (UVAnimationData[i].uv_pointer == uv) 
		{
			//PrintDebug("Duplicate UVs found\n");
			return;
		}
		if (!UVAnimationData[i].uv_pointer)
		{
			UVAnimationData[i].uv_pointer = uv;
			UVAnimationData[i].uv_count = uv_count;
			UVAnimationData[i].u_speed = u_speed;
			UVAnimationData[i].v_speed = v_speed;
			UVAnimationData[i].timer = timer;
			return;
		}
	}
}

void RemoveMaterialColors(NJS_MATERIAL* material)
{
	material->diffuse.argb.r = 178;
	material->diffuse.argb.g = 178;
	material->diffuse.argb.b = 178;
}

bool ForceWhiteDiffuse(NJS_MATERIAL* material, uint32_t flags)
{
	int diffuseindex = 3;
	if (CurrentLevel == LevelIDs_SpeedHighway || CurrentLevel == LevelIDs_RedMountain || (CurrentLevel == LevelIDs_IceCap && CurrentAct < 1) || CurrentLevel == LevelIDs_Casinopolis || (CurrentLevel == LevelIDs_FinalEgg && CurrentAct == 2) || CurrentLevel == LevelIDs_HotShelter || CurrentLevel==LevelIDs_EggViper || (CurrentLevel == LevelIDs_EggCarrierInside && CurrentAct == 1)) diffuseindex = 1;
	if ((CurrentLevel == LevelIDs_IceCap && CurrentAct >= 1) || (CurrentLevel == LevelIDs_FinalEgg && CurrentAct == 0)) diffuseindex = 5;
	if (CurrentLevel == LevelIDs_FinalEgg && CurrentAct > 0) diffuseindex = 1;
	set_diffuse_ptr(diffuseindex, false);
	return true;
}

bool DisableAlphaRejection(NJS_MATERIAL* material, uint32_t flags)
{
	set_alpha_reject_ptr(0.0f, false);
	return true;
}

bool ForceWhiteDiffuse3_Night(NJS_MATERIAL* material, uint32_t flags)
{
	if (GetTimeOfDay() == 2) set_diffuse_ptr(3, false); else set_diffuse_ptr(0, false);
	return true;
}

bool ForceWhiteDiffuse3Specular1(NJS_MATERIAL* material, uint32_t flags)
{
	set_diffuse_ptr(3, false);
	set_specular_ptr(1, false);
	return true;
}

bool ForceDiffuse2Specular2(NJS_MATERIAL* material, uint32_t flags)
{
	set_diffuse_ptr(2, false);
	set_specular_ptr(2, false);
	return true;
}

bool ForceDiffuse2Specular3(NJS_MATERIAL* material, uint32_t flags)
{
	set_diffuse_ptr(2, false);
	set_specular_ptr(3, false);
	return true;
}

bool ForceDiffuse0Specular1(NJS_MATERIAL* material, uint32_t flags)
{
	set_diffuse_ptr(0, false);
	set_specular_ptr(1, false);
	return true;
}

bool ForceDiffuse0Specular0(NJS_MATERIAL* material, uint32_t flags)
{
	set_diffuse_ptr(0, false);
	set_specular_ptr(0, false);
	return true;
}

bool ForceSpecular3(NJS_MATERIAL* material, uint32_t flags)
{
	set_specular_ptr(3, false);
	return true;
}

bool ForceDiffuse0Specular0or1(NJS_MATERIAL* material, uint32_t flags)
{
	set_diffuse_ptr(0, false);
	if (material->attrflags & NJD_FLAG_IGNORE_SPECULAR) set_specular_ptr(0, false); else set_specular_ptr(1, false);
	return true;
}

bool ForceDiffuse4Specular5(NJS_MATERIAL* material, uint32_t flags)
{
	set_diffuse_ptr(4, false);
	set_specular_ptr(5, false);
	return true;
}

bool Chaos4NPCFunction(NJS_MATERIAL* material, uint32_t flags)
{
	if (CurrentLevel == LevelIDs_EggCarrierOutside)
	{
		set_diffuse_ptr(2, false);
		set_specular_ptr(3, false);
	}
	else
	{
		set_diffuse_ptr(0, false);
		set_specular_ptr(1, false);
	}
	return true;
}

bool ChaosPuddleFunc(NJS_MATERIAL* material, uint32_t flags)
{
	if (CurrentLevel == 18 || CurrentLevel == 16 || CurrentLevel == 19)
	{
		set_diffuse_ptr(4, false);
		set_specular_ptr(5, false);
	}
	else
	{
		set_diffuse_ptr(0, false);
		set_specular_ptr(1, false);
	}
	return true;
}

bool Chaos2Function(NJS_MATERIAL* material, uint32_t flags)
{
	if (CurrentLevel == 16)
	{
		set_diffuse_ptr(4, false);
		set_specular_ptr(5, false);
	}
	else
	{
		set_diffuse_ptr(2, false);
		set_specular_ptr(3, false);
	}
	return true;
}

void RemoveVertexColors_Object(NJS_OBJECT *obj)
{
	if (obj->basicdxmodel)
	{
		for (int k = 0; k < obj->basicdxmodel->nbMeshset; ++k)
		{
			obj->basicdxmodel->mats[obj->basicdxmodel->meshsets[k].type_matId & ~0xC000].diffuse.argb.r = 0xFF;
			obj->basicdxmodel->mats[obj->basicdxmodel->meshsets[k].type_matId & ~0xC000].diffuse.argb.g = 0xFF;
			obj->basicdxmodel->mats[obj->basicdxmodel->meshsets[k].type_matId & ~0xC000].diffuse.argb.b = 0xFF;
			if (obj->basicdxmodel->meshsets[k].vertcolor != nullptr)
			{
				obj->basicdxmodel->meshsets[k].vertcolor = nullptr;
			}
		}
	}
	if (obj->child != nullptr) RemoveVertexColors_Object(obj->child);
	if (obj->sibling != nullptr) RemoveVertexColors_Object(obj->sibling);
}

void RemoveVertexColors_Model(NJS_MODEL_SADX *model)
{
	for (int k = 0; k < model->nbMeshset; ++k)
	{
		model->mats[model->meshsets[k].type_matId & ~0xC000].diffuse.argb.r = 0xFF;
		model->mats[model->meshsets[k].type_matId & ~0xC000].diffuse.argb.g = 0xFF;
		model->mats[model->meshsets[k].type_matId & ~0xC000].diffuse.argb.b = 0xFF;
		if (model->meshsets[k].vertcolor != nullptr)
		{
			model->meshsets[k].vertcolor = nullptr;
		}
	}
}

void RemoveMaterialColors_Landtable(LandTable *landtable)
{
	for (unsigned int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			landtable->Col[j].Model->basicdxmodel->mats[k].diffuse.argb.r = 0xFF;
			landtable->Col[j].Model->basicdxmodel->mats[k].diffuse.argb.g = 0xFF;
			landtable->Col[j].Model->basicdxmodel->mats[k].diffuse.argb.b = 0xFF;
		}
	}
}

void ProcessMaterials_Object(NJS_OBJECT *obj)
{
	Uint32 materialflags;
	int ignorelightmaterialid = -1;
	bool ignorespecular = false;
	//Check meshsets and remove vertex colors, if any
	for (int k = 0; k < obj->basicdxmodel->nbMeshset; ++k)
	{
		if (obj->basicdxmodel->meshsets[k].vertcolor != nullptr)
		{
			obj->basicdxmodel->meshsets[k].vertcolor = nullptr;
		}
	}
	//Check the first material for NJD_FLAG_IGNORE_SPECULAR and adjust the rest of the materials accordingly
	if (obj->basicdxmodel->mats[0].attrflags & NJD_FLAG_IGNORE_SPECULAR) ignorespecular = true; else ignorespecular = false;
	for (int k = 1; k < obj->basicdxmodel->nbMat; ++k)
	{
		materialflags = obj->basicdxmodel->mats[k].attrflags;
		if (ignorespecular)
		{
			if (!(materialflags & NJD_FLAG_IGNORE_SPECULAR)) obj->basicdxmodel->mats[k].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		}
		else
		{
			if ((materialflags & NJD_FLAG_IGNORE_SPECULAR)) obj->basicdxmodel->mats[k].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		}
	}
	//Check materials
	for (int k = 0; k < obj->basicdxmodel->nbMat; ++k)
	{
		//Remove material colors
		obj->basicdxmodel->mats[k].diffuse.argb.r = 0xFF;
		obj->basicdxmodel->mats[k].diffuse.argb.g = 0xFF;
		obj->basicdxmodel->mats[k].diffuse.argb.b = 0xFF;
		//Check if any materials have "ignore light"
		materialflags = obj->basicdxmodel->mats[k].attrflags;
		if (k < obj->basicdxmodel->nbMat && (materialflags & NJD_FLAG_IGNORE_LIGHT) && ignorelightmaterialid == -1) ignorelightmaterialid = k;
		//Check for alpha rejection flag
		if (materialflags & NJD_CUSTOMFLAG_NO_REJECT)
		{
			TemporaryMaterialArray[0] = (NJS_MATERIAL*)&obj->basicdxmodel->mats[obj->basicdxmodel->meshsets[k].type_matId & ~0xC000];
			material_register_ptr(TemporaryMaterialArray, 1, DisableAlphaRejection);
		}
		//If a material has NJD_FLAG_IGNORE_LIGHT, add white diffuse to all other materials after it
		if (ignorelightmaterialid != -1)
		{
			for (int k = ignorelightmaterialid + 1; k < obj->basicdxmodel->nbMat; ++k)
			{
				TemporaryMaterialArray[0] = (NJS_MATERIAL*)&obj->basicdxmodel->mats[obj->basicdxmodel->meshsets[k].type_matId & ~0xC000];
				material_register_ptr(TemporaryMaterialArray, 1, ForceWhiteDiffuse);
			}
		}
	}
	//Process materials of child and sibling models as well
	if (obj->child != nullptr) ProcessMaterials_Object(obj->child);
	if (obj->sibling != nullptr) ProcessMaterials_Object(obj->sibling);
}

NJS_OBJECT* LoadModel(const char *ModelName)
{
	PrintDebug("Loading model: %s: ", HelperFunctionsGlobal.GetReplaceablePath(ModelName));
	ModelInfo *info = new ModelInfo(HelperFunctionsGlobal.GetReplaceablePath(ModelName));
	NJS_OBJECT *object = info->getmodel();
	ProcessMaterials_Object(object);
	PrintDebug("OK\n");
	return object;
}

void SortModel(NJS_OBJECT *object)
{
	bool DebugSorting = false;
	if (DebugSorting) PrintDebug("\nSorting model\n");
	int tempcounter_transparent = 0;
	int tempcounter_opaque = 0;
	//Prepare the arrays
	for (int k = 0; k < 16; ++k)
	{
		OpaqueMeshes[k] = -1;
		TransparentMeshes[k] = -1;
	}
	//Iterate through meshsets
	if (object->basicdxmodel)
	{
		for (int k = 0; k < object->basicdxmodel->nbMeshset; ++k)
		{
			//Scan for transparent materials
			if (object->basicdxmodel->mats[k].attrflags & NJD_FLAG_USE_ALPHA)
			{
				tempmaterialarray_transparent[tempcounter_transparent].attrflags = object->basicdxmodel->mats[k].attrflags;
				tempmaterialarray_transparent[tempcounter_transparent].attr_texId = object->basicdxmodel->mats[k].attr_texId;
				tempmaterialarray_transparent[tempcounter_transparent].diffuse = object->basicdxmodel->mats[k].diffuse;
				tempmaterialarray_transparent[tempcounter_transparent].specular = object->basicdxmodel->mats[k].specular;
				tempmaterialarray_transparent[tempcounter_transparent].exponent = object->basicdxmodel->mats[k].exponent;
				tempmeshsetarray_transparent[tempcounter_transparent].attrs = object->basicdxmodel->meshsets[k].attrs;
				tempmeshsetarray_transparent[tempcounter_transparent].buffer = object->basicdxmodel->meshsets[k].buffer;
				tempmeshsetarray_transparent[tempcounter_transparent].meshes = object->basicdxmodel->meshsets[k].meshes;
				tempmeshsetarray_transparent[tempcounter_transparent].nbMesh = object->basicdxmodel->meshsets[k].nbMesh;
				tempmeshsetarray_transparent[tempcounter_transparent].normals = object->basicdxmodel->meshsets[k].normals;
				tempmeshsetarray_transparent[tempcounter_transparent].vertcolor = object->basicdxmodel->meshsets[k].vertcolor;
				tempmeshsetarray_transparent[tempcounter_transparent].vertuv = object->basicdxmodel->meshsets[k].vertuv;
				TransparentMeshes[tempcounter_transparent] = k;
				tempcounter_transparent++;
				if (DebugSorting) PrintDebug("Added transparent material: %d\n", k);
			}
			//Scan for opaque materials
			else
			{
				tempmaterialarray_opaque[tempcounter_opaque].attrflags = object->basicdxmodel->mats[k].attrflags;
				tempmaterialarray_opaque[tempcounter_opaque].attr_texId = object->basicdxmodel->mats[k].attr_texId;
				tempmaterialarray_opaque[tempcounter_opaque].diffuse = object->basicdxmodel->mats[k].diffuse;
				tempmaterialarray_opaque[tempcounter_opaque].specular = object->basicdxmodel->mats[k].specular;
				tempmaterialarray_opaque[tempcounter_opaque].exponent = object->basicdxmodel->mats[k].exponent;
				tempmeshsetarray_opaque[tempcounter_opaque].attrs = object->basicdxmodel->meshsets[k].attrs;
				tempmeshsetarray_opaque[tempcounter_opaque].buffer = object->basicdxmodel->meshsets[k].buffer;
				tempmeshsetarray_opaque[tempcounter_opaque].meshes = object->basicdxmodel->meshsets[k].meshes;
				tempmeshsetarray_opaque[tempcounter_opaque].nbMesh = object->basicdxmodel->meshsets[k].nbMesh;
				tempmeshsetarray_opaque[tempcounter_opaque].normals = object->basicdxmodel->meshsets[k].normals;
				tempmeshsetarray_opaque[tempcounter_opaque].vertcolor = object->basicdxmodel->meshsets[k].vertcolor;
				tempmeshsetarray_opaque[tempcounter_opaque].vertuv = object->basicdxmodel->meshsets[k].vertuv;
				OpaqueMeshes[tempcounter_opaque] = k;
				tempcounter_opaque++;
				if (DebugSorting) PrintDebug("Added opaque material: %d\n", k);
			}
		}
		//Now sort the model by listing opaque materials first
		for (int k = 0; k < tempcounter_opaque; ++k)
		{
			if (OpaqueMeshes[k] != -1)
			{
				object->basicdxmodel->mats[k].attrflags = tempmaterialarray_opaque[k].attrflags;
				object->basicdxmodel->mats[k].attr_texId = tempmaterialarray_opaque[k].attr_texId;
				object->basicdxmodel->mats[k].diffuse = tempmaterialarray_opaque[k].diffuse;
				object->basicdxmodel->mats[k].specular = tempmaterialarray_opaque[k].specular;
				object->basicdxmodel->mats[k].exponent = tempmaterialarray_opaque[k].exponent;
				object->basicdxmodel->meshsets[k].attrs = tempmeshsetarray_opaque[k].attrs;
				object->basicdxmodel->meshsets[k].buffer = tempmeshsetarray_opaque[k].buffer;
				object->basicdxmodel->meshsets[k].meshes = tempmeshsetarray_opaque[k].meshes;
				object->basicdxmodel->meshsets[k].nbMesh = tempmeshsetarray_opaque[k].nbMesh;
				object->basicdxmodel->meshsets[k].normals = tempmeshsetarray_opaque[k].normals;
				object->basicdxmodel->meshsets[k].vertcolor = tempmeshsetarray_opaque[k].vertcolor;
				object->basicdxmodel->meshsets[k].vertuv = tempmeshsetarray_opaque[k].vertuv;
				object->basicdxmodel->meshsets[k].type_matId = k | 0xC000;
				if (DebugSorting) PrintDebug("Opaque meshset ID %d added\n", k);
			}
		}
		//Continue sorting by adding transparent materials
		for (int k = 0; k < tempcounter_transparent; ++k)
		{
			if (TransparentMeshes[k] != -1)
			{
				object->basicdxmodel->mats[tempcounter_opaque + k].attrflags = tempmaterialarray_transparent[k].attrflags;
				object->basicdxmodel->mats[tempcounter_opaque + k].attr_texId = tempmaterialarray_transparent[k].attr_texId;
				object->basicdxmodel->mats[tempcounter_opaque + k].diffuse = tempmaterialarray_transparent[k].diffuse;
				object->basicdxmodel->mats[tempcounter_opaque + k].specular = tempmaterialarray_transparent[k].specular;
				object->basicdxmodel->mats[tempcounter_opaque + k].exponent = tempmaterialarray_transparent[k].exponent;
				object->basicdxmodel->meshsets[tempcounter_opaque + k].attrs = tempmeshsetarray_transparent[k].attrs;
				object->basicdxmodel->meshsets[tempcounter_opaque + k].buffer = tempmeshsetarray_transparent[k].buffer;
				object->basicdxmodel->meshsets[tempcounter_opaque + k].meshes = tempmeshsetarray_transparent[k].meshes;
				object->basicdxmodel->meshsets[tempcounter_opaque + k].nbMesh = tempmeshsetarray_transparent[k].nbMesh;
				object->basicdxmodel->meshsets[tempcounter_opaque + k].normals = tempmeshsetarray_transparent[k].normals;
				object->basicdxmodel->meshsets[tempcounter_opaque + k].vertcolor = tempmeshsetarray_transparent[k].vertcolor;
				object->basicdxmodel->meshsets[tempcounter_opaque + k].vertuv = tempmeshsetarray_transparent[k].vertuv;
				object->basicdxmodel->meshsets[tempcounter_opaque + k].type_matId = (tempcounter_opaque + k) | 0xC000;
				if (DebugSorting) PrintDebug("Transparent meshset ID %d added\n", k);
			}
			if (DebugSorting)
			{
				for (int k = 0; k < object->basicdxmodel->nbMat; ++k)
				{
					PrintDebug("Material %d: texid %d\n", k, object->basicdxmodel->mats[k].attr_texId);
				}
				for (int k = 0; k < object->basicdxmodel->nbMeshset; ++k)
				{
					PrintDebug("Meshset %d: matid %d\n", k, object->basicdxmodel->meshsets[k].type_matId & ~0xC000);
				}
				PrintDebug("Total opaque materials: %d\n", tempcounter_opaque);
				PrintDebug("Total transparent materials: %d\n", tempcounter_transparent);
				PrintDebug("Sorting complete\n\n");
			}
		}
		//Also sort child and sibling objects
	}
	if (object->child != nullptr) SortModel(object->child);
	if (object->sibling != nullptr) SortModel(object->sibling);
}