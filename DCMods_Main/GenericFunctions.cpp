#include "stdafx.h"

NJS_MATERIAL* TemporaryMaterialArray[] = { nullptr };

TextureAnimation TextureAnimationData[] = {
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
};

UVAnimation UVAnimationData[] = 
{
	{ nullptr, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0 },
	{ nullptr, 0, 0, 0, 0, 0, 0 },
};

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

bool ParseCustomMaterialFlags(NJS_MATERIAL* material, uint32_t flags)
{
	Uint32 mflags = material->attrflags;
	//Night
	if (mflags & NJD_CUSTOMFLAG_NIGHT)
	{
		//White diffuse at night
		if (mflags & NJD_CUSTOMFLAG_WHITE)
		{
			if (GetTimeOfDay() == 2) set_diffuse_ptr(3, false); else set_diffuse_ptr(0, false);
		}
		//Just ignore light at night
		else
		{
			//If it's night, set ignore light if it's not set yet
			if (GetTimeOfDay() == 2)
			{
				if (material->attrflags & !NJD_FLAG_IGNORE_LIGHT) material->attrflags |= NJD_FLAG_IGNORE_LIGHT;
			}
			//If it's not night, remove ignore light if it's not removed yet
			else
			{
				if (material->attrflags & NJD_FLAG_IGNORE_LIGHT) material->attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			}
		}
	}
	//Light type override: 0
	if (mflags & NJD_CUSTOMFLAG_UVANIM1 && mflags & !NJD_CUSTOMFLAG_UVANIM2)
	{
		set_diffuse_ptr(0, false);
		if (mflags & NJD_FLAG_IGNORE_SPECULAR) set_specular_ptr(0, false); else set_specular_ptr(1, false);
	}
	//Light type override: 2
	if (mflags & NJD_CUSTOMFLAG_UVANIM2 && mflags & !NJD_CUSTOMFLAG_UVANIM1)
	{
		set_diffuse_ptr(2, false);
		if (mflags & NJD_FLAG_IGNORE_SPECULAR) set_specular_ptr(2, false); else set_specular_ptr(3, false);
	}
	//Light type override: 4
	if (mflags & NJD_CUSTOMFLAG_UVANIM1 && mflags & NJD_CUSTOMFLAG_UVANIM2)
	{
		set_diffuse_ptr(4, false);
		set_specular_ptr(5, false);
	}
	//Alpha rejection
	if (mflags & NJD_CUSTOMFLAG_NO_REJECT) set_alpha_reject_ptr(0.0f, false);
	return true;
}

void CheckLandtableMaterials_register(LandTable *landtable)
{
	Uint32 materialflags;
	for (int j = 0; j < landtable->COLCount; ++j) 
	{
		if (landtable->Col[j].Flags & ColFlags_Visible) 
		{
			for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k) 
			{
				materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
				if (materialflags & NJD_CUSTOMFLAG_NO_REJECT || materialflags & NJD_CUSTOMFLAG_UVANIM1 || materialflags & NJD_CUSTOMFLAG_UVANIM2 || materialflags & NJD_CUSTOMFLAG_NIGHT || materialflags & NJD_CUSTOMFLAG_WHITE)
				{
					if (DLLLoaded_Lantern)
					{
						TemporaryMaterialArray[0] = &landtable->Col[j].Model->basicdxmodel->mats[k];
						material_register_ptr(TemporaryMaterialArray, LengthOfArray(TemporaryMaterialArray), &ParseCustomMaterialFlags);
					}
				}
			}
		}
	}
}

void CheckLandtableMaterials_unregister(LandTable *landtable)
{
	Uint32 materialflags;
	for (int j = 0; j < landtable->COLCount; ++j)
	{
		if (landtable->Col[j].Flags & ColFlags_Visible)
		{
			for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
			{
				materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
				if (materialflags & NJD_CUSTOMFLAG_NO_REJECT || materialflags & NJD_CUSTOMFLAG_UVANIM1 || materialflags & NJD_CUSTOMFLAG_UVANIM2 || materialflags && NJD_CUSTOMFLAG_NIGHT || materialflags && NJD_CUSTOMFLAG_WHITE)
				{
					if (DLLLoaded_Lantern)
					{
						TemporaryMaterialArray[0] = &landtable->Col[j].Model->basicdxmodel->mats[k];
						material_unregister_ptr(TemporaryMaterialArray, LengthOfArray(TemporaryMaterialArray), &ParseCustomMaterialFlags);
					}
				}
			}
		}
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
	if (animation->uv_pointer && animation->uv_count && FrameCounter % actualtimer == 0)
	{
		animation->v_shift += animation->v_speed;
		animation->u_shift += animation->u_speed;
		//PrintDebug("VShift: %d", animation->v_shift);
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
		//PrintDebug("AAAAAASSSSSS %d: %d\n", 0, animation->uv_pointer[0].v);
	}
}

void ClearTextureAnimationData()
{
	for (int i = 0; i < LengthOfArray(TextureAnimationData); i++)
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

void AddTextureAnimation(NJS_MATERIAL* material, bool nonsequential, int speed, int frame1, int frame2, int frame3, int frame4, int frame5, int frame6, int frame7, int frame8, int frame9, int frame10, int frame11, int frame12, int frame13, int frame14, int frame15, int frame16)
{
	for (int i = 0; i < LengthOfArray(TextureAnimationData); i++)
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
		if (UVAnimationData[i].uv_pointer == uv) return;
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

bool ForceWhiteDiffuse1(NJS_MATERIAL* material, uint32_t flags)
{
	set_diffuse_ptr(1, false);
	return true;
}

bool DisableAlphaRejection(NJS_MATERIAL* material, uint32_t flags)
{
	set_alpha_reject_ptr(0.0f, false);
	return true;
}

bool ForceWhiteDiffuse3(NJS_MATERIAL* material, uint32_t flags)
{
	set_diffuse_ptr(3, false);
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