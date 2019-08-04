#include "stdafx.h"
#include "GenericData.h"

Sint32 DeadPoly[] = { 0 };

void HideMesh(NJS_MESHSET_SADX *meshset)
{
	meshset->meshes = (Sint16*)&DeadPoly;
	meshset->nbMesh = 1;
}

void CheckAndUnloadLevelFiles()
{
	UnloadGUITextures();
	if (!ModelsLoaded_General) General_Init();
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
	if (CurrentLevel < 39 && AL_RACE_0_Info) UnloadLevelFiles_Chao();
}

void AnimateTexture(TextureAnimation *texanim)
{
	//PrintDebug("Animation: level %d, act %d, original %d, final %d\n", texanim->level, texanim->act, texanim->Frame1, texanim->Frame2);
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
	if (CurrentLevel == animation->level && CurrentAct == animation->act)
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
			if (animation->v_shift > 510)
			{
				animation->v_shift -= 510;
				for (int i = 0; i < animation->uv_count; i++)
				{
					animation->uv_pointer[i].v -= 510;
				}
			}
			//Limit V -
			if (animation->v_shift < -510)
			{
				animation->v_shift += 510;
				for (int i = 0; i < animation->uv_count; i++)
				{
					animation->uv_pointer[i].v += 510;
				}
			}
			//Limit U +
			if (animation->u_shift > 510)
			{
				animation->u_shift -= 510;
				for (int i = 0; i < animation->uv_count; i++)
				{
					animation->uv_pointer[i].u -= 510;
				}
			}
			//Limit U -
			if (animation->u_shift < -510)
			{
				animation->u_shift += 510;
				for (int i = 0; i < animation->uv_count; i++)
				{
					animation->uv_pointer[i].u += 510;
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
	else return;
}

void ClearTextureAnimationData()
{
	for (int i = 0; i < LengthOfArray(TextureAnimationData); i++)
	{
		TextureAnimationData[i].act = -1;
		TextureAnimationData[i].level = -1;
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
	for (int i = 0; i < LengthOfArray(UVAnimationData); i++)
	{
		UVAnimationData[i].level = -1;
		UVAnimationData[i].act = -1;
		UVAnimationData[i].uv_pointer = nullptr;
		UVAnimationData[i].uv_count = 0;
		UVAnimationData[i].u_speed = 0;
		UVAnimationData[i].v_speed = 0;
		UVAnimationData[i].u_shift = 0;
		UVAnimationData[i].v_shift = 0;
		UVAnimationData[i].timer = 0;
	}
}

void AddTextureAnimation(int level, int act, NJS_MATERIAL* material, bool nonsequential, int speed, int frame1, int frame2, int frame3, int frame4, int frame5, int frame6, int frame7, int frame8, int frame9, int frame10, int frame11, int frame12, int frame13, int frame14, int frame15, int frame16)
{
	for (int i = 0; i < LengthOfArray(TextureAnimationData); i++)
	{
		if (TextureAnimationData[i].material == material && TextureAnimationData[i].act == act) return;
		if (!TextureAnimationData[i].material)
		{
			TextureAnimationData[i].level = level;
			TextureAnimationData[i].act = act;
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
			//PrintDebug("Added texture animation: level %d, act %d, frame1: %d, frame2: %d, ID %d\n", level, act, frame1, frame2, i);
			return;
		}
	}
	PrintDebug("Unable to add animation: level %d, act %d, frame1 %d, frame2 %d\n", level, act, frame1, frame2);
}

void AddTextureAnimation_Permanent(int level, int act, NJS_MATERIAL* material, bool nonsequential, int speed, int frame1, int frame2, int frame3, int frame4, int frame5, int frame6, int frame7, int frame8, int frame9, int frame10, int frame11, int frame12, int frame13, int frame14, int frame15, int frame16)
{
	for (int i = 0; i < LengthOfArray(TextureAnimationData_Permanent); i++)
	{
		if (TextureAnimationData_Permanent[i].material == material && TextureAnimationData_Permanent[i].act == act) return;
		if (!TextureAnimationData_Permanent[i].material)
		{
			TextureAnimationData_Permanent[i].level = level;
			TextureAnimationData_Permanent[i].act = act;
			TextureAnimationData_Permanent[i].material = material;
			TextureAnimationData_Permanent[i].NonSequential = nonsequential;
			TextureAnimationData_Permanent[i].Speed = speed;
			TextureAnimationData_Permanent[i].Frame1 = frame1;
			TextureAnimationData_Permanent[i].Frame2 = frame2;
			TextureAnimationData_Permanent[i].Frame3 = frame3;
			TextureAnimationData_Permanent[i].Frame4 = frame4;
			TextureAnimationData_Permanent[i].Frame5 = frame5;
			TextureAnimationData_Permanent[i].Frame6 = frame6;
			TextureAnimationData_Permanent[i].Frame7 = frame7;
			TextureAnimationData_Permanent[i].Frame8 = frame8;
			TextureAnimationData_Permanent[i].Frame9 = frame9;
			TextureAnimationData_Permanent[i].Frame10 = frame10;
			TextureAnimationData_Permanent[i].Frame11 = frame11;
			TextureAnimationData_Permanent[i].Frame12 = frame12;
			TextureAnimationData_Permanent[i].Frame13 = frame13;
			TextureAnimationData_Permanent[i].Frame14 = frame14;
			TextureAnimationData_Permanent[i].Frame15 = frame15;
			TextureAnimationData_Permanent[i].Frame16 = frame16;
			return;
		}
	}
}

void AddUVAnimation(int level, int act, NJS_TEX* uv, int uv_count, int timer, int u_speed, int v_speed)
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
			UVAnimationData[i].level = level;
			UVAnimationData[i].act = act;
			UVAnimationData[i].uv_pointer = uv;
			UVAnimationData[i].uv_count = uv_count;
			UVAnimationData[i].u_speed = u_speed;
			UVAnimationData[i].v_speed = v_speed;
			UVAnimationData[i].timer = timer;
			return;
		}
	}
}

void AddUVAnimation_Permanent(int level, int act, NJS_TEX* uv, int uv_count, int timer, int u_speed, int v_speed)
{
	for (int i = 0; i < LengthOfArray(UVAnimationData_Permanent); i++)
	{
		if (UVAnimationData_Permanent[i].uv_pointer == uv)
		{
			//PrintDebug("Duplicate UVs found\n");
			return;
		}
		if (!UVAnimationData_Permanent[i].uv_pointer)
		{
			UVAnimationData_Permanent[i].level = level;
			UVAnimationData_Permanent[i].act = act;
			UVAnimationData_Permanent[i].uv_pointer = uv;
			UVAnimationData_Permanent[i].uv_count = uv_count;
			UVAnimationData_Permanent[i].u_speed = u_speed;
			UVAnimationData_Permanent[i].v_speed = v_speed;
			UVAnimationData_Permanent[i].timer = timer;
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
	if (CurrentLevel == LevelIDs_FinalEgg && CurrentAct == 1) diffuseindex = 1;
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

bool ForceWhiteDiffuse1Specular3(NJS_MATERIAL* material, uint32_t flags)
{
	set_diffuse_ptr(1, false);
	set_specular_ptr(3, false);
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

bool ForceDiffuse4Specular4(NJS_MATERIAL* material, uint32_t flags)
{
	set_diffuse_ptr(4, false);
	set_specular_ptr(4, false);
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
	if (obj)
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
	for (int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			landtable->Col[j].Model->basicdxmodel->mats[k].diffuse.argb.r = 0xFF;
			landtable->Col[j].Model->basicdxmodel->mats[k].diffuse.argb.g = 0xFF;
			landtable->Col[j].Model->basicdxmodel->mats[k].diffuse.argb.b = 0xFF;
		}
	}
}

void AddAlphaRejectMaterial(NJS_MATERIAL *material)
{
	if (DLLLoaded_Lantern)
	{
		TemporaryMaterialArray[0] = material;
		material_register_ptr(TemporaryMaterialArray, 1, DisableAlphaRejection);
	}
}

void AddWhiteDiffuseMaterial(NJS_MATERIAL *material)
{
	if (DLLLoaded_Lantern)
	{
		TemporaryMaterialArray[0] = material;
		material_register_ptr(TemporaryMaterialArray, 1, ForceWhiteDiffuse);
	}
}

void AddWhiteDiffuseMaterial_Specular3(NJS_MATERIAL *material)
{
	if (DLLLoaded_Lantern)
	{
		TemporaryMaterialArray[0] = material;
		material_register_ptr(TemporaryMaterialArray, 1, ForceWhiteDiffuse1Specular3);
	}
}

void AddWhiteDiffuseNightMaterial(NJS_MATERIAL* material)
{
	if (DLLLoaded_Lantern)
	{
		TemporaryMaterialArray[0] = material;
		material_register_ptr(TemporaryMaterialArray, 1, ForceWhiteDiffuse3_Night);
	}
}

void RemoveWhiteDiffuseNightMaterial(NJS_MATERIAL* material)
{
	if (DLLLoaded_Lantern)
	{
		TemporaryMaterialArray[0] = material;
		material_unregister_ptr(TemporaryMaterialArray, 1, ForceWhiteDiffuse3_Night);
	}
}

void AddBossMaterial(NJS_MATERIAL *material)
{
	if (DLLLoaded_Lantern)
	{
		TemporaryMaterialArray[0] = material;
		material_register_ptr(TemporaryMaterialArray, 1, ForceDiffuse4Specular5);
	}
}

void AddBossMaterials_Object(NJS_OBJECT *obj)
{
	if (obj->basicdxmodel)
	{
		for (int q = 0; q < obj->basicdxmodel->nbMat; ++q)
		{
			AddBossMaterial((NJS_MATERIAL*)&obj->basicdxmodel->mats[q]);
		}
	}
	if (obj->child) AddBossMaterials_Object(obj->child);
	if (obj->sibling) AddBossMaterials_Object(obj->sibling);
}

void RemoveAlphaRejectMaterial(NJS_MATERIAL *material)
{
	if (DLLLoaded_Lantern)
	{
		TemporaryMaterialArray[0] = material;
		material_unregister_ptr(TemporaryMaterialArray, 1, DisableAlphaRejection);
	}
}

void RemoveWhiteDiffuseMaterial(NJS_MATERIAL *material)
{
	if (DLLLoaded_Lantern)
	{
		TemporaryMaterialArray[0] = material;
		material_unregister_ptr(TemporaryMaterialArray, 1, ForceWhiteDiffuse);
	}
}

void RemoveWhiteDiffuseMaterial_Specular3(NJS_MATERIAL *material)
{
	if (DLLLoaded_Lantern)
	{
		TemporaryMaterialArray[0] = material;
		material_unregister_ptr(TemporaryMaterialArray, 1, ForceWhiteDiffuse1Specular3);
	}
}

void CheckModelForWhiteDiffuse(NJS_MODEL_SADX *model, int ignorelightmaterial)
{
	Uint32 materialflags;
	if (model->mats[model->meshsets[0].type_matId & ~0xC000].attrflags & NJD_FLAG_USE_ENV) return; //First mesh
	if (model->mats[ignorelightmaterial + 1].attrflags & NJD_FLAG_USE_ENV) return; //Material after the white diffuse one
	if (model->mats[ignorelightmaterial + 1].attrflags & NJD_FLAG_IGNORE_SPECULAR) return; //Material after the white diffuse one
	for (int q = ignorelightmaterial + 1; q < model->nbMat; ++q)
	{
		materialflags = model->mats[q].attrflags;
		if (!(materialflags & NJD_FLAG_IGNORE_LIGHT) && !(materialflags & NJD_FLAG_USE_ALPHA))
		{
			AddWhiteDiffuseMaterial((NJS_MATERIAL*)&model->mats[q]);
			//PrintDebug("Added white diffuse material %d\n", q);
		}
	}
}

void ProcessMaterials_Object(NJS_OBJECT *obj)
{
	//PrintDebug("Processing materials...\n");
	Uint32 materialflags;
	bool ignorelight = false;
	bool ignorespecular = false;
	//Check meshsets and remove vertex colors, if any
	if (obj->basicdxmodel)
	{
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
			materialflags = obj->basicdxmodel->mats[k].attrflags;
			//Check for alpha rejection flag
			if (materialflags & NJD_CUSTOMFLAG_NO_REJECT)
			{
				AddAlphaRejectMaterial((NJS_MATERIAL*)&obj->basicdxmodel->mats[obj->basicdxmodel->meshsets[k].type_matId & ~0xC000]);
			}
		}
	}
	//Process materials of child and sibling models as well
	if (obj->child != nullptr) ProcessMaterials_Object(obj->child);
	if (obj->sibling != nullptr) ProcessMaterials_Object(obj->sibling);
}

void SwapModel(NJS_OBJECT *object1, NJS_OBJECT *object2)
{
	if (object1->basicdxmodel)
	{
		object1->basicdxmodel = object2->basicdxmodel;
	}
	if (object1->child) SwapModel(object1->child, object2->child);
	if (object1->sibling) SwapModel(object1->sibling, object2->sibling);
}

void LoadModel_ReplaceMeshes(NJS_OBJECT *object, const char *ModelName)
{
	PrintDebug("Loading model: %s: ", HelperFunctionsGlobal.GetReplaceablePath(ModelName));
	ModelInfo *info = new ModelInfo(HelperFunctionsGlobal.GetReplaceablePath(ModelName));
	NJS_OBJECT *object2 = info->getmodel();
	if (object->basicdxmodel)
	{
		object->basicdxmodel = info->getmodel()->basicdxmodel;
	}
	if (object->child) SwapModel(object->child, object2->child);
	if (object->sibling) SwapModel(object->sibling, object2->sibling);
	PrintDebug("OK\n");
}

void SwapMeshsets(NJS_OBJECT* object, int mesh1, int mesh2)
{
	NJS_MESHSET_SADX TempMeshset = { NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL };
	//Save mesh 1 data to a temporary meshset
	TempMeshset.attrs = object->basicdxmodel->meshsets[mesh1].attrs;
	TempMeshset.buffer = object->basicdxmodel->meshsets[mesh1].buffer;
	TempMeshset.meshes = object->basicdxmodel->meshsets[mesh1].meshes;
	TempMeshset.nbMesh = object->basicdxmodel->meshsets[mesh1].nbMesh;
	TempMeshset.normals = object->basicdxmodel->meshsets[mesh1].normals;
	TempMeshset.type_matId = object->basicdxmodel->meshsets[mesh1].type_matId;
	TempMeshset.vertcolor = object->basicdxmodel->meshsets[mesh1].vertcolor;
	TempMeshset.vertuv = object->basicdxmodel->meshsets[mesh1].vertuv;
	//Replace mesh 1 data with mesh 2 data
	object->basicdxmodel->meshsets[mesh1].attrs = object->basicdxmodel->meshsets[mesh2].attrs;
	object->basicdxmodel->meshsets[mesh1].buffer = object->basicdxmodel->meshsets[mesh2].buffer;
	object->basicdxmodel->meshsets[mesh1].meshes = object->basicdxmodel->meshsets[mesh2].meshes;
	object->basicdxmodel->meshsets[mesh1].nbMesh = object->basicdxmodel->meshsets[mesh2].nbMesh;
	object->basicdxmodel->meshsets[mesh1].normals = object->basicdxmodel->meshsets[mesh2].normals;
	object->basicdxmodel->meshsets[mesh1].type_matId = object->basicdxmodel->meshsets[mesh2].type_matId;
	object->basicdxmodel->meshsets[mesh1].vertcolor = object->basicdxmodel->meshsets[mesh2].vertcolor;
	object->basicdxmodel->meshsets[mesh1].vertuv = object->basicdxmodel->meshsets[mesh2].vertuv;
	//Replace mesh 2 data with saved mesh 1 data
	object->basicdxmodel->meshsets[mesh2].attrs = TempMeshset.attrs;
	object->basicdxmodel->meshsets[mesh2].buffer = TempMeshset.buffer;
	object->basicdxmodel->meshsets[mesh2].meshes = TempMeshset.meshes;
	object->basicdxmodel->meshsets[mesh2].nbMesh = TempMeshset.nbMesh;
	object->basicdxmodel->meshsets[mesh2].normals = TempMeshset.normals;
	object->basicdxmodel->meshsets[mesh2].type_matId = TempMeshset.type_matId;
	object->basicdxmodel->meshsets[mesh2].vertcolor = TempMeshset.vertcolor;
	object->basicdxmodel->meshsets[mesh2].vertuv = TempMeshset.vertuv;
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
			if (object->basicdxmodel->mats[object->basicdxmodel->meshsets[k].type_matId & ~0xC000].attrflags & NJD_FLAG_USE_ALPHA)
			{
				tempmaterialarray_transparent[tempcounter_transparent].attrflags = object->basicdxmodel->mats[object->basicdxmodel->meshsets[k].type_matId & ~0xC000].attrflags;
				tempmaterialarray_transparent[tempcounter_transparent].attr_texId = object->basicdxmodel->mats[object->basicdxmodel->meshsets[k].type_matId & ~0xC000].attr_texId;
				tempmaterialarray_transparent[tempcounter_transparent].diffuse = object->basicdxmodel->mats[object->basicdxmodel->meshsets[k].type_matId & ~0xC000].diffuse;
				tempmaterialarray_transparent[tempcounter_transparent].specular = object->basicdxmodel->mats[object->basicdxmodel->meshsets[k].type_matId & ~0xC000].specular;
				tempmaterialarray_transparent[tempcounter_transparent].exponent = object->basicdxmodel->mats[object->basicdxmodel->meshsets[k].type_matId & ~0xC000].exponent;
				tempmeshsetarray_transparent[tempcounter_transparent].attrs = object->basicdxmodel->meshsets[k].attrs;
				tempmeshsetarray_transparent[tempcounter_transparent].buffer = object->basicdxmodel->meshsets[k].buffer;
				tempmeshsetarray_transparent[tempcounter_transparent].meshes = object->basicdxmodel->meshsets[k].meshes;
				tempmeshsetarray_transparent[tempcounter_transparent].nbMesh = object->basicdxmodel->meshsets[k].nbMesh;
				tempmeshsetarray_transparent[tempcounter_transparent].normals = object->basicdxmodel->meshsets[k].normals;
				tempmeshsetarray_transparent[tempcounter_transparent].vertcolor = object->basicdxmodel->meshsets[k].vertcolor;
				tempmeshsetarray_transparent[tempcounter_transparent].vertuv = object->basicdxmodel->meshsets[k].vertuv;
				tempmeshsetarray_transparent[tempcounter_transparent].type_matId = object->basicdxmodel->meshsets[k].type_matId;
				TransparentMeshes[tempcounter_transparent] = k;
				tempcounter_transparent++;
				if (DebugSorting) PrintDebug("Added transparent mesh: %d\n", k);
			}
			//Scan for opaque materials
			else
			{
				tempmaterialarray_opaque[tempcounter_opaque].attrflags = object->basicdxmodel->mats[object->basicdxmodel->meshsets[k].type_matId & ~0xC000].attrflags;
				tempmaterialarray_opaque[tempcounter_opaque].attr_texId = object->basicdxmodel->mats[object->basicdxmodel->meshsets[k].type_matId & ~0xC000].attr_texId;
				tempmaterialarray_opaque[tempcounter_opaque].diffuse = object->basicdxmodel->mats[object->basicdxmodel->meshsets[k].type_matId & ~0xC000].diffuse;
				tempmaterialarray_opaque[tempcounter_opaque].specular = object->basicdxmodel->mats[object->basicdxmodel->meshsets[k].type_matId & ~0xC000].specular;
				tempmaterialarray_opaque[tempcounter_opaque].exponent = object->basicdxmodel->mats[object->basicdxmodel->meshsets[k].type_matId & ~0xC000].exponent;
				tempmeshsetarray_opaque[tempcounter_opaque].attrs = object->basicdxmodel->meshsets[k].attrs;
				tempmeshsetarray_opaque[tempcounter_opaque].buffer = object->basicdxmodel->meshsets[k].buffer;
				tempmeshsetarray_opaque[tempcounter_opaque].meshes = object->basicdxmodel->meshsets[k].meshes;
				tempmeshsetarray_opaque[tempcounter_opaque].nbMesh = object->basicdxmodel->meshsets[k].nbMesh;
				tempmeshsetarray_opaque[tempcounter_opaque].normals = object->basicdxmodel->meshsets[k].normals;
				tempmeshsetarray_opaque[tempcounter_opaque].vertcolor = object->basicdxmodel->meshsets[k].vertcolor;
				tempmeshsetarray_opaque[tempcounter_opaque].vertuv = object->basicdxmodel->meshsets[k].vertuv;
				tempmeshsetarray_opaque[tempcounter_opaque].type_matId = object->basicdxmodel->meshsets[k].type_matId;
				OpaqueMeshes[tempcounter_opaque] = k;
				tempcounter_opaque++;
				if (DebugSorting) PrintDebug("Added opaque mesh: %d\n", k);
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
		for (int q = 0; q < tempcounter_transparent; ++q)
		{
			if (TransparentMeshes[q] != -1)
			{
				object->basicdxmodel->mats[tempcounter_opaque + q].attrflags = tempmaterialarray_transparent[q].attrflags;
				object->basicdxmodel->mats[tempcounter_opaque + q].attr_texId = tempmaterialarray_transparent[q].attr_texId;
				object->basicdxmodel->mats[tempcounter_opaque + q].diffuse = tempmaterialarray_transparent[q].diffuse;
				object->basicdxmodel->mats[tempcounter_opaque + q].specular = tempmaterialarray_transparent[q].specular;
				object->basicdxmodel->mats[tempcounter_opaque + q].exponent = tempmaterialarray_transparent[q].exponent;
				object->basicdxmodel->meshsets[tempcounter_opaque + q].attrs = tempmeshsetarray_transparent[q].attrs;
				object->basicdxmodel->meshsets[tempcounter_opaque + q].buffer = tempmeshsetarray_transparent[q].buffer;
				object->basicdxmodel->meshsets[tempcounter_opaque + q].meshes = tempmeshsetarray_transparent[q].meshes;
				object->basicdxmodel->meshsets[tempcounter_opaque + q].nbMesh = tempmeshsetarray_transparent[q].nbMesh;
				object->basicdxmodel->meshsets[tempcounter_opaque + q].normals = tempmeshsetarray_transparent[q].normals;
				object->basicdxmodel->meshsets[tempcounter_opaque + q].vertcolor = tempmeshsetarray_transparent[q].vertcolor;
				object->basicdxmodel->meshsets[tempcounter_opaque + q].vertuv = tempmeshsetarray_transparent[q].vertuv;
				object->basicdxmodel->meshsets[tempcounter_opaque + q].type_matId = (tempcounter_opaque + q) | 0xC000;
				if (DebugSorting) PrintDebug("Transparent meshset ID %d added\n", q);
			}
			if (DebugSorting)
			{
				for (int k = 0; k < object->basicdxmodel->nbMat; ++k)
				{
					PrintDebug("Material %d: texid %d\n", k, object->basicdxmodel->mats[k].attr_texId);
				}
				for (int k = 0; k < object->basicdxmodel->nbMeshset; ++k)
				{
					if (object->basicdxmodel->meshsets[k].type_matId & 0xC000) PrintDebug("Meshset %d: matid %d\n", k, object->basicdxmodel->meshsets[k].type_matId & ~0xC000);
					else if (object->basicdxmodel->meshsets[k].type_matId & 0x8000) PrintDebug("Meshset %d: matid %d\n", k, object->basicdxmodel->meshsets[k].type_matId & ~0x8000);
					else if (object->basicdxmodel->meshsets[k].type_matId & 0x4000) PrintDebug("Meshset %d: matid %d\n", k, object->basicdxmodel->meshsets[k].type_matId & ~0x4000);
					else PrintDebug("Meshset %d: matid %d\n", k, object->basicdxmodel->meshsets[k].type_matId);
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

NJS_OBJECT* LoadModel(const char *ModelName, bool sort)
{
	PrintDebug("Loading model: %s: ", HelperFunctionsGlobal.GetReplaceablePath(ModelName));
	ModelInfo *info = new ModelInfo(HelperFunctionsGlobal.GetReplaceablePath(ModelName));
	NJS_OBJECT *object = info->getmodel();
	if (sort) SortModel(object);
	ProcessMaterials_Object(object);
	PrintDebug("OK\n");
	return object;
}

void ForceLevelSpecular_Object(NJS_OBJECT *obj, bool recursive)
{
	if (obj)
	{
		if (obj->basicdxmodel)
		{
			for (int k = 0; k < obj->basicdxmodel->nbMat; ++k)
			{
				if (!(obj->basicdxmodel->mats[k].attrflags & NJD_FLAG_IGNORE_SPECULAR)) obj->basicdxmodel->mats[k].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
			}
		}
		if (recursive && obj->child) ForceLevelSpecular_Object(obj->child, true);
		if (recursive && obj->sibling) ForceLevelSpecular_Object(obj->sibling, true);
	}

}

void ForceObjectSpecular_Object(NJS_OBJECT *obj, bool recursive)
{
	if (obj)
	{
		if (obj->basicdxmodel)
		{
			for (int k = 0; k < obj->basicdxmodel->nbMat; ++k)
			{
				obj->basicdxmodel->mats[k].specular.color = 0xFFFFFFFF;
				if (obj->basicdxmodel->mats[k].attrflags & NJD_FLAG_IGNORE_SPECULAR)
				{
					obj->basicdxmodel->mats[k].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
				}
			}
		}
		if (recursive && obj->child) ForceObjectSpecular_Object(obj->child, true);
		if (recursive && obj->sibling) ForceObjectSpecular_Object(obj->sibling, true);
	}
}

void RegisterLanternMaterial(NJS_MATERIAL* material, int diffuse, int specular, bool unregister)
{
	PrintDebug("Registering Lantern material with diffuse %d, specular %d, unregister: %d\n", diffuse, specular, unregister);
	TemporaryMaterialArray[0] = material;
	if (!DLLLoaded_Lantern) return;
	if (diffuse == 0 && specular == 0)
	{
		if (!unregister) material_register_ptr(TemporaryMaterialArray, 1, ForceDiffuse0Specular0);
		else material_unregister_ptr(TemporaryMaterialArray, 1, ForceDiffuse0Specular0);
		return;
	}
	if (diffuse == 0 && specular == 1)
	{
		if (!unregister) material_register_ptr(TemporaryMaterialArray, 1, ForceDiffuse0Specular1);
		else material_unregister_ptr(TemporaryMaterialArray, 1, ForceDiffuse0Specular1);
		return;
	}
	if (diffuse == 2 && specular == 2)
	{
		if (!unregister) material_register_ptr(TemporaryMaterialArray, 1, ForceDiffuse2Specular2);
		else material_unregister_ptr(TemporaryMaterialArray, 1, ForceDiffuse2Specular2);
		return;
	}
	if (diffuse == 2 && specular == 3)
	{
		if (!unregister) material_register_ptr(TemporaryMaterialArray, 1, ForceDiffuse2Specular3);
		else material_unregister_ptr(TemporaryMaterialArray, 1, ForceDiffuse2Specular3);
		return;
	}
	if (diffuse == 4 && specular == 4)
	{
		if (!unregister) material_register_ptr(TemporaryMaterialArray, 1, ForceDiffuse4Specular4);
		else material_unregister_ptr(TemporaryMaterialArray, 1, ForceDiffuse4Specular4);
		return;
	}
	if (diffuse == 4 && specular == 5)
	{
		if (!unregister) material_register_ptr(TemporaryMaterialArray, 1, ForceDiffuse4Specular5);
		else material_unregister_ptr(TemporaryMaterialArray, 1, ForceDiffuse4Specular5);
		return;
	}
}

void ForceLightType_Object(NJS_OBJECT* obj, int light_type, bool unregister)
{
	NJS_MATERIAL* material;
	if (!DLLLoaded_Lantern) return;
	if (obj)
	{
		if (obj->basicdxmodel)
		{
			for (int k = 0; k < obj->basicdxmodel->nbMat; ++k)
			{
				material = &obj->basicdxmodel->mats[k];
				if (obj->basicdxmodel->mats[0].attrflags & NJD_FLAG_IGNORE_SPECULAR)
				{
					if (!(material->attrflags & NJD_FLAG_IGNORE_LIGHT)) RegisterLanternMaterial(material, light_type, light_type, unregister);
				}
				else
				{
					if (!(material->attrflags & NJD_FLAG_IGNORE_LIGHT)) RegisterLanternMaterial(material, light_type, light_type + 1, unregister);
				}
			}
		}
		if (obj->child) ForceLightType_Object(obj->child, light_type, unregister);
		if (obj->sibling) ForceLightType_Object(obj->sibling, light_type, unregister);
	}
}

void HideEntireObject(NJS_OBJECT* a1)
{
	if (!(a1->evalflags & NJD_EVAL_HIDE)) a1->evalflags |= NJD_EVAL_HIDE;
	if (a1->child) HideEntireObject(a1->child);
	if (a1->sibling) HideEntireObject(a1->sibling);
}

void RemoveTransparency_Object(NJS_OBJECT* obj, bool recursive)
{
	NJS_MATERIAL* material;
	if (obj->basicdxmodel)
	{
		for (int k = 0; k < obj->basicdxmodel->nbMat; ++k)
		{
			material->diffuse.argb.a = 255;
			if (material->attrflags & NJD_FLAG_USE_ALPHA) material->attrflags &= ~NJD_FLAG_USE_ALPHA;
		}
	}
	if (recursive)
	{
		if (obj->child) RemoveTransparency_Object(obj->child, true);
		if (obj->sibling) RemoveTransparency_Object(obj->sibling, true);
	}
}

void HideAllButOneMesh(NJS_OBJECT *obj, int meshID)
{
	NJS_MATERIAL* material;
	if (obj->basicdxmodel)
	{
		for (int k = 0; k < obj->basicdxmodel->nbMeshset; ++k)
		{
			if (k != meshID) HideMesh(&obj->basicdxmodel->meshsets[k]);
		}
	}
}