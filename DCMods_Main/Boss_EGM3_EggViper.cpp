#include "stdafx.h"

NJS_TEXNAME textures_eggviper[45];
NJS_TEXLIST texlist_eggviper = { arrayptrandlength(textures_eggviper) };

DataArray(FogData, EggViperFog, 0x0165D334, 3);

DataArray(PVMEntry, EGGVIPER_TEXLISTS, 0x165D498, 11);

DataPointer(int, EVEffect, 0x3C6E1EC);
DataPointer(char, EggViperByteThing, 0x03C6E178);
DataPointer(float, EggViperHitCount, 0x03C58158);

static float EggViper_blendfactor = 0.0f;
static int EggViper_blenddirection = 1;
static int EggViper_EffectMode = 0;
static int EggViper_Timer = 0;
static float EggViper_blendfactor_max = 0.005f;
static float EggViper_blendfactor_min = 0.005f;
static float EggViperHitCount_Old = 0.0f;

void UnloadLevelFiles_B_EGM3()
{
	delete B_EGM3_Info;
	B_EGM3_Info = nullptr;
}

void LoadLevelFiles_B_EGM3()
{
	CheckAndUnloadLevelFiles();
	B_EGM3_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_EGM3\\0.sa1lvl"));
	LandTable *B_EGM3 = B_EGM3_Info->getlandtable();
	RemoveMaterialColors_Landtable(B_EGM3);
	B_EGM3->TexList = &texlist_eggviper;
	LandTableArray[56] = B_EGM3;
}

void EggViper_Init()
{
	ReplaceBIN("PL_M0B", "PL_M0X");
	ReplaceBIN_DC("SETEGM3S");
	ReplacePVM("EGM3CHIKEI");
	ReplacePVM("EGM3MDL");
	ReplacePVM("EGM3SPR");
	((NJS_MATERIAL*)0x016737F0)->attrflags |= NJD_FLAG_IGNORE_LIGHT; //Dust effect at the bottom of the room
	ResizeTextureList((NJS_TEXLIST*)0x167E5CC, textures_eggviper);
	*(NJS_OBJECT*)0x01669DA8 = *LoadModel("system\\data\\B_EGM3\\Models\\000434A0.sa1mdl", false); //part of Egg Viper model
	for (unsigned int i = 0; i < 3; i++)
	{
		EggViperFog[i].Toggle = 0;
	}
}

void EggViper_OnFrame()
{
	//Egg Viper effect
	if (DLLLoaded_Lantern)
	{

		//Hopefully disable all this before it gets ugly
		if (EggViper_blendfactor != 0 && CurrentLevel != 22)
		{
			EggViper_blendfactor = 0;
			EggViper_EffectMode = 0;
			set_shader_flags_ptr(ShaderFlags_Blend, false);
		}
		if (GameMode == GameModes_Menu || GameMode == GameModes_CharSel)
		{
			EggViper_blendfactor_max = 0.005f;
			EggViper_blendfactor_min = 0.005f;
			EggViper_Timer = 0;
			EggViper_EffectMode = 0;
			EggViper_blendfactor = 0;
			EggViper_blenddirection = 1;
			set_shader_flags_ptr(ShaderFlags_Blend, false);
			EggViperByteThing = 0;
		}
		if (CurrentLevel == 22)
		{
			if (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21 || CurrentLevel != 22)
			{
				EggViper_blendfactor_max = 0.005f;
				EggViper_blendfactor_min = 0.005f;
				EggViper_Timer = 0;
				EggViper_EffectMode = 0;
				EggViper_blendfactor = 0;
				EggViper_blenddirection = 1;
				EggViperByteThing = 0;
			}
			if (EggViperHitCount == 7) EggViperHitCount_Old = 7;
			//activate a brief flash
			if (EggViper_Timer <= 0 && EggViperHitCount < EggViperHitCount_Old && EggViperHitCount > 0)
			{
				EggViper_blendfactor_max = 0.005f;
				EggViper_blendfactor_min = 0.005f;
				EggViper_Timer = 200 / FramerateSetting;
				EggViper_EffectMode = 1;
				EggViper_blendfactor = 0;
				EggViper_blenddirection = 1;
				EggViperHitCount_Old = EggViperHitCount;
			}
			//activate a longer flash
			if (EggViper_Timer <= 0 && EggViper_EffectMode == 0 && EggViperHitCount == EggViperHitCount_Old && EVEffect == 1)
			{
				EggViper_blendfactor_max = 0.005f;
				EggViper_blendfactor_min = 0.005f;
				EggViper_Timer = 200 / FramerateSetting;
				EggViper_EffectMode = 2;
				if (EggViper_blendfactor == 0) EggViper_blenddirection = 1;
			}
			//activate a brief permanent flash
			if (EggViper_EffectMode == 0 && EggViperHitCount == EggViperHitCount_Old && EVEffect == 0 && EggViperByteThing == 1)
			{
				EggViper_EffectMode = 5;
				if (EggViper_blendfactor == 0) EggViper_blenddirection = 1;
			}
			//activate permanent flashing
			if (EggViper_Timer <= 0 && EggViperHitCount < EggViperHitCount_Old && EggViperHitCount <= 0)
			{
				EggViper_Timer = 1040 / FramerateSetting;
				EggViper_EffectMode = 3;
				if (EggViper_blendfactor == 0) EggViper_blenddirection = 1;
				EggViperHitCount_Old = EggViperHitCount;
			}
			//brief flash
			if (EggViper_EffectMode == 1)
			{
				if (GameState != 16)
				{
					if (EggViper_blenddirection == 1 && EggViper_blendfactor < 1.0f) EggViper_blendfactor = EggViper_blendfactor + 0.08f*FramerateSetting;
					if (EggViper_blenddirection == -1 && EggViper_blendfactor > 0.0f) EggViper_blendfactor = EggViper_blendfactor - 0.08f*FramerateSetting;
				}
				if (EggViper_blendfactor >= 1.0f) EggViper_blenddirection = -1;
				if (EggViper_blenddirection == -1 && EggViper_blendfactor <= 0.0f)
				{
					EggViper_blendfactor = 0;
					EggViper_EffectMode = 0;
					set_shader_flags_ptr(ShaderFlags_Blend, false);
				}
			}
			//longer flash
			if (EggViper_EffectMode == 2)
			{
				if (GameState != 16 && EggViper_blenddirection == 1 && EggViper_blendfactor < 1.0f) EggViper_blendfactor = EggViper_blendfactor + 0.028f*FramerateSetting;
				if (EggViper_blendfactor >= 1.0f) EggViper_blenddirection = -1;
				if (GameState != 16 && EggViper_blenddirection == -1 && EggViper_blendfactor > 0.0f) EggViper_blendfactor = EggViper_blendfactor - 0.028f*FramerateSetting;
				if (EggViper_blenddirection == -1 && EggViper_blendfactor <= 0.0f)
				{
					EggViper_blendfactor = 0;
					EggViper_EffectMode = 0;
					set_shader_flags_ptr(ShaderFlags_Blend, false);
				}
			}
			//permanent flash
			if (EggViper_EffectMode == 3)
			{
				if (EggViper_Timer <= 0)
				{
					EggViper_blenddirection = 1;
					EggViper_EffectMode = 4;
				}
				if (EggViper_blendfactor >= 1.0f) EggViper_blenddirection = -1;
				if (EggViper_blendfactor <= 0.5f) EggViper_blenddirection = 1;
				if (GameState != 16)
				{
					if (EggViper_blenddirection == 1 && EggViper_blendfactor < 1.0f) EggViper_blendfactor = EggViper_blendfactor + 0.08f*FramerateSetting;
					if (EggViper_blenddirection == -1 && EggViper_blendfactor > 0.0f) EggViper_blendfactor = EggViper_blendfactor - 0.08f*FramerateSetting;
				}
			}
			//final flash
			if (EggViper_EffectMode == 4)
			{
				if (EggViper_blendfactor < 1.0f) EggViper_blendfactor = EggViper_blendfactor + 0.08f*FramerateSetting;
			}
			//fast flickering within an increasing range
			if (EggViper_EffectMode == 5)
			{
				if (EggViperByteThing == 0)
				{
					EggViper_blendfactor_max = 0.005f;
					EggViper_blendfactor_min = 0.001f;
					EggViper_blendfactor = 0.0f;
					EggViper_blenddirection = 1;
					EggViper_EffectMode = 0;
					set_blend_factor_ptr(0);
				}
				if (EggViper_blendfactor >= EggViper_blendfactor_max)
				{
					set_diffuse_blend_ptr(0, 3);
					EggViper_blenddirection = -1;
					if (EggViper_blendfactor_max < 1.0f)
					{
						EggViper_blendfactor_max = EggViper_blendfactor_max + 0.015f;
					}
				}
				if (EggViper_blendfactor <= EggViper_blendfactor_min)
				{
					EggViper_blenddirection = 1;
					set_diffuse_blend_ptr(0, 6);
				}
				if (GameState != 16)
				{
					if (EggViper_blenddirection == 1 && EggViper_blendfactor < EggViper_blendfactor_max) EggViper_blendfactor = EggViper_blendfactor + (EggViper_blendfactor_max / 2.0f)*FramerateSetting;
					if (EggViper_blenddirection == -1 && EggViper_blendfactor > EggViper_blendfactor_min) EggViper_blendfactor = EggViper_blendfactor - (EggViper_blendfactor_max / 2.0f)*FramerateSetting;
				}
			}
			//subtract timer
			if (GameState != 16 && EggViper_Timer > 0) EggViper_Timer--;
			//general stuff
			if (EggViper_EffectMode != 0)
			{
				set_shader_flags_ptr(ShaderFlags_Blend, true);
				if (EggViper_EffectMode != 5) set_diffuse_blend_ptr(0, 5);
				set_specular_blend_ptr(0, 0);
				set_blend_factor_ptr(EggViper_blendfactor);
			}
			else
			{
				set_shader_flags_ptr(ShaderFlags_Blend, false);
			}
		}
	}

}