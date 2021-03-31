#include "stdafx.h"
#include "AnimationFile.h"

NJS_COLOR DebugFontColorBK;
float DebugFontSizeBK;
bool DebugFontItalic = false;
OBJ_CONDITION setdata_LateDrawLand = {};
std::vector<int> LateDrawLandList;
LandTable* LateDrawLand;

NJS_MESHSET_SADX TempMeshset = {NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL};

void BackupDebugFontSettings()
{
	DebugFontColorBK = DebugFontColor;
	DebugFontSizeBK = DebugFontSize;
}

void RestoreDebugFontSettings()
{
	DebugFontColor = DebugFontColorBK;
	DebugFontSize = DebugFontSizeBK;
}

void njDrawQuadTexture_Italic(NJS_QUAD_TEXTURE* points, float scale)
{
	float widthmaybe; // st7
	Float base_x; // ecx
	Float v4; // edx
	float v5; // st7
	Float v6; // ecx
	float v7; // st7
	float v8; // st7
	NJS_QUAD_TEXTURE_EX _points; // [esp+0h] [ebp-40h]

	widthmaybe = points->x2 - points->x1;
	base_x = points->x1;
	_points.y = points->y1;
	v4 = points->u1;
	_points.vx1 = widthmaybe + DebugFontItalic * 4.0f; // Width
	_points.x = base_x + DebugFontItalic * 4.0f; // Offset for accuracy
	v5 = points->y2 - points->y1;
	_points.u = v4;
	_points.z = scale;
	v6 = points->v1;
	_points.vy2 = v5;
	v7 = points->u2 - points->u1;
	_points.vy1 = 0.0f;
	_points.vx2 = 0.0f;
	_points.v = v6;
	_points.vu1 = v7;
	_points.vv1 = 0.0f;
	v8 = points->v2;
	_points.vu2 = 0.0f;
	_points.vv2 = v8 - points->v1;
	_points.vx2 -= DebugFontItalic * 10.0f;
	Direct3D_DrawQuad(&_points);
}

void SetHudColorAndTextureNum_Italic(int n, NJS_COLOR color)
{
	NJS_COLOR c;
	c.argb.r = color.argb.r;
	c.argb.g = color.argb.g;
	c.argb.b = color.argb.b;
	if (color.argb.a < 15)
	{
		if (color.argb.a & 0x1) DebugFontItalic = true;
		c.argb.a = 255;
		SetHudColorAndTextureNum(n, c);
	}
	else
	{
		DebugFontItalic = false;
		SetHudColorAndTextureNum(n, color);
	}
}

void __cdecl njDrawSprite2D_DrawNow_Point(NJS_SPRITE* sp, Int n, Float pri, NJD_SPRITE attr)
{
	NJS_TEXLIST* texlist; // ecx
	NJS_TEXANIM* texanim; // esi
	Sint16 _cx; // st7
	Sint16 cy; // st6
	float sy; // ST14_4
	float v9; // ST2C_4
	float v10; // st7
	float v11; // ST30_4
	float v12; // st7
	float v13; // st7
	float v14; // eax
	float v15; // ecx
	NJS_COLOR v16; // edi
	NJS_COLOR color_; // ST20_4
	int texid; // esi
	float result_x; // [esp+4h] [ebp-74h]
	float v20; // [esp+8h] [ebp-70h]
	float result_y; // [esp+Ch] [ebp-6Ch]
	float u1; // [esp+10h] [ebp-68h]
	float v1; // [esp+14h] [ebp-64h]
	float u2; // [esp+18h] [ebp-60h]
	float v2; // [esp+1Ch] [ebp-5Ch]
	float v26; // [esp+28h] [ebp-50h]
	NJS_VECTOR vs; // [esp+2Ch] [ebp-4Ch]
	NJS_QUAD_TEXTURE_EX points; // [esp+38h] [ebp-40h]

	if (sp)
	{
		texlist = sp->tlist;
		if (texlist)
		{
			Direct3D_SetTexList(texlist);
			texanim = &sp->tanim[n];
			u1 = texanim->u1 * 0.0039215689f;
			v1 = texanim->v1 * 0.0039215689f;
			u2 = texanim->u2 * 0.0039215689f;
			v2 = texanim->v2 * 0.0039215689f;
			_cx = -texanim->cx;
			cy = -texanim->cy;
			sy = texanim->sy + (float)cy;
			result_x = _cx * sp->sx;
			v26 = (texanim->sx + _cx) * sp->sx;
			result_y = cy * sp->sy;
			v20 = sy * sp->sy;
			if (attr & NJD_SPRITE_ANGLE)
			{
				njPushMatrix(nj_unit_matrix_);
				njRotateZ(0, sp->ang);
				vs.x = result_x;
				vs.y = result_y;
				vs.z = 0.0;
				njCalcVector(0, &vs, &vs);
				points.x = vs.x + sp->p.x;
				v9 = vs.x;
				v10 = vs.y + sp->p.y;
				v11 = vs.y;
				vs.y = result_y;
				points.y = v10;
				vs.x = v26;
				vs.z = 0.0;
				points.z = -1.0f / pri;
				njCalcVector(0, &vs, &vs);
				points.vx1 = vs.x - v9;
				vs.x = result_x;
				v12 = vs.y;
				vs.y = v20;
				vs.z = 0.0;
				points.vy1 = v12 - v11;
				njCalcVector(0, &vs, &vs);
				points.vx2 = vs.x - v9;
				points.vy2 = vs.y - v11;
				njPopMatrixEx();
			}
			else
			{
				points.vy1 = 0.0;
				v13 = result_x + sp->p.x;
				points.vx2 = 0.0;
				points.x = v13;
				points.y = result_y + sp->p.y;
				points.z = -1.0f / pri;
				points.vx1 = v26 - result_x;
				points.vy2 = v20 - result_y;
			}
			if (attr & NJD_SPRITE_HFLIP)
			{
				v14 = u2;
				u2 = u1;
				u1 = v14;
			}
			if (attr & NJD_SPRITE_VFLIP)
			{
				v15 = v2;
				v2 = v1;
				v1 = v15;
			}
			points.u = u1;
			points.vu1 = u2 - u1;
			points.v = v1;
			points.vv1 = 0.0;
			points.vu2 = 0.0;
			points.vv2 = v2 - v1;
			if (attr & NJD_SPRITE_COLOR)
			{
				color_.argb.b = (Uint8)(nj_constant_material_.b * 255.0);
				color_.argb.g = (Uint8)(nj_constant_material_.g * 255.0);
				color_.argb.r = (Uint8)(nj_constant_material_.r * 255.0);
				color_.argb.a = (Uint8)(nj_constant_material_.a * 255.0);
				v16.color = color_.color;
			}
			else
			{
				v16.color = -1;
			}
			Direct3D_EnableHudAlpha((attr & NJD_SPRITE_ALPHA) == NJD_SPRITE_ALPHA);
			Direct3D_TextureFilterPoint();
			texid = texanim->texid;
			CurrentHUDColor = v16.color;
			Direct3D_SetTextureNum(texid);
			Direct3D_DrawQuad(&points);
			Direct3D_TextureFilterLinear();
		}
	}
}

void njDrawSprite2D_Queue_Point(NJS_SPRITE* sp, Int n, Float pri, NJD_SPRITE attr, QueuedModelFlagsB queue_flags)
{
	QueuedModelSprite* v5; // eax
	QueuedModelSprite* v6; // ebx
	float pria; // [esp+0h] [ebp-4h]
	float v8; // [esp+10h] [ebp+Ch]

	if (!MissedFrames && (unsigned int)sp >= 0x100000 && !VerifyTexList(sp->tlist))
	{
		pria = pri;
		if (pri >= -2.0f && pri < 10000.0f)
		{
			pria = pri + 12048.0f;
		}
		v5 = (QueuedModelSprite*)AllocateQueuedModel(n, 0x98, QueuedModelType_Sprite2D, queue_flags);
		v6 = v5;
		if (v5)
		{
			v5->SpritePri = pria;
			v5->SpriteFlags = attr;
			memcpy(&v5->Sprite, sp, sizeof(v5->Sprite));
			njGetMatrix(v5->Transform);
			AddToQueue(&v6->Node, pria, 1);
		}
		else
		{
			v8 = Calculate2DDepth(queue_flags, pria);
			njDrawSprite2D_DrawNow_Point(sp, n, v8, attr);
			Direct3D_ResetZFunc();
			Direct3D_EnableZWrite(1u);
			ClampGlobalColorThing_Thing();
		}
	}
}

void ReplaceGeneric(std::string src, std::string dest)
{
	std::string fullsrc = "system\\" + src;
	std::string fulldest = "system\\" + dest;
	HelperFunctionsGlobal.ReplaceFile(fullsrc.c_str(), fulldest.c_str());
	//PrintDebug("Replace file %s with file %s\n", fullsrc.c_str(), fulldest.c_str());
}

void ReplaceSET(std::string src)
{
	std::string fulldest;
	std::string fullsrc;
	if (Use1999SetFiles == 1)
	{
		fulldest = "system\\bin_1999\\" + src + ".BIN";
	}
	else if (Use1999SetFiles == 2)
	{
		fulldest = "system\\bin_1998\\" + src + ".BIN";
	}
	else
	{
		fulldest = "system\\" + src + "_DC.BIN";
	}
	fullsrc = "system\\" + src + ".BIN";
	HelperFunctionsGlobal.ReplaceFile(fullsrc.c_str(), fulldest.c_str());
	//PrintDebug("Replace SET file %s with file %s\n", fullsrc.c_str(), fulldest.c_str());
}

void ReplaceCAM(std::string src)
{
	std::string fulldest;
	std::string fullsrc;
	if (Use1999SetFiles == 2)
	{
		fulldest = "system\\bin_1998\\" + src + ".BIN";
	}
	else
	{
		fulldest = "system\\" + src + "_DC.BIN";
	}
	fullsrc = "system\\" + src + ".BIN";
	HelperFunctionsGlobal.ReplaceFile(fullsrc.c_str(), fulldest.c_str());
	//PrintDebug("Replace CAM file %s with file %s\n", fullsrc.c_str(), fulldest.c_str());
}

void ReplaceBIN(std::string src)
{
	std::string fulldest;
	std::string fullsrc;
	fulldest = "system\\" + src + "_DC.BIN";
	fullsrc = "system\\" + src + ".BIN";
	HelperFunctionsGlobal.ReplaceFile(fullsrc.c_str(), fulldest.c_str());
	//PrintDebug("Replace generic BIN file %s with file %s\n", fullsrc.c_str(), fulldest.c_str());
}

void HideMesh_Model_Real(NJS_MODEL_SADX* att, std::vector<int> hidemeshlist)
{
	if (!att) return;

	int currmesh = 0;
	for (int m = 0; m < att->nbMeshset; m++)
	{
		bool add = true;
		for (int i : hidemeshlist)
		{
			if (m == i) add = false;
		}
		if (add)
		{
			att->meshsets[currmesh] = att->meshsets[m];
			currmesh++;
		}
	}
	att->nbMeshset -= (Uint16)hidemeshlist.size();
}

void HideMesh_Model_Wrapper(NJS_MODEL_SADX* att, int arg, ...)
{
	va_list arguments;
	std::vector<int> hidemeshlist;
	for (va_start(arguments, arg); arg != -1; arg = va_arg(arguments, int))
	{
		hidemeshlist.push_back(arg);
	}
	va_end(arguments);
	HideMesh_Model_Real(att, hidemeshlist);
}

void HideMesh_Object_Wrapper(NJS_OBJECT* object, int arg, ...)
{
	va_list arguments;
	std::vector<int> hidemeshlist;
	// Add list of meshset IDs to hide
	for (va_start(arguments, arg); arg != -1; arg = va_arg(arguments, int))
	{
		hidemeshlist.push_back(arg);
	}
	va_end(arguments);
	HideMesh_Model_Real(object->basicdxmodel, hidemeshlist);
}

void CheckAndUnloadLevelFiles()
{
	General_Init();
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
	// Calculate animation speed if in 30 or 15 FPS mode
	if (FramerateSetting > 1 && texanim->Speed > 1) actualspeed = texanim->Speed / 2; else actualspeed = texanim->Speed;
	if (texanim->material && FrameCounter % actualspeed == 0)
	{
		// Deal with non-sequential animations manually
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
		// Animate automatically if sequential
		else
		{
			framenumber = texanim->material->attr_texId;
			framenumber++;
			// Reset if reached end of animation or incorrect initial frame
			if (framenumber > texanim->Frame2 || framenumber < texanim->Frame1) framenumber = texanim->Frame1;
			texanim->material->attr_texId = framenumber;
			//PrintDebug("Framenumber for material %X: %d\n", texanim->material, framenumber);
		}
	}
}

void AnimateUVs(UVAnimation *animation)
{
	if (CurrentAct == animation->act || animation->act == -1)
	{
		int actualtimer = 1;
		// Calculate animation speed if in 30 or 15 FPS mode
		if (FramerateSetting > 1 && animation->timer > 1) actualtimer = animation->timer / 2; else actualtimer = animation->timer;
		if (actualtimer == 0) actualtimer = 1;
		if (animation->uv_pointer && animation->uv_count && FrameCounter % actualtimer == 0)
		{
			animation->v_shift += animation->v_speed;
			animation->u_shift += animation->u_speed;
			//PrintDebug("U speed: %d, V speed: %d, U shift: %d, V shift: %d\n", animation->u_speed, animation->v_speed, animation->u_shift, animation->v_shift);
			// Limit V +
			if (animation->v_shift > 510)
			{
				animation->v_shift -= 510;
				for (int i = 0; i < animation->uv_count; i++)
				{
					animation->uv_pointer[i].v -= 510;
				}
			}
			// Limit V -
			if (animation->v_shift < -510)
			{
				animation->v_shift += 510;
				for (int i = 0; i < animation->uv_count; i++)
				{
					animation->uv_pointer[i].v += 510;
				}
			}
			// Limit U +
			if (animation->u_shift > 510)
			{
				animation->u_shift -= 510;
				for (int i = 0; i < animation->uv_count; i++)
				{
					animation->uv_pointer[i].u -= 510;
				}
			}
			// Limit U -
			if (animation->u_shift < -510)
			{
				animation->u_shift += 510;
				for (int i = 0; i < animation->uv_count; i++)
				{
					animation->uv_pointer[i].u += 510;
				}
			}
			// Add U and V
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
	TextureAnimationData.clear();
	for (UVAnimation* uvanim : UVAnimationData)
	{
		delete uvanim;
		uvanim = nullptr;
	}
	UVAnimationData.clear();
}

void AddTextureAnimation(int level, int act, NJS_MATERIAL* material, bool nonsequential, int speed, int frame1, int frame2, int frame3, int frame4, int frame5, int frame6, int frame7, int frame8, int frame9, int frame10, int frame11, int frame12, int frame13, int frame14, int frame15, int frame16)
{
	// Check for duplicate materials
	for (TextureAnimation* i : TextureAnimationData)
	{
		if (i->material == material)
			return;
	}
	TextureAnimation* anim = new TextureAnimation{level, act, material, speed, nonsequential, frame1, frame2, frame3, frame4, frame5, frame6, frame7, frame8, frame9, frame10, frame11, frame12, frame13, frame14, frame15, frame16};
	TextureAnimationData.push_back(anim);
			//PrintDebug("Added texture animation: level %d, act %d, frame1: %d, frame2: %d, ID %d\n", level, act, frame1, frame2, i);
}

void AddTextureAnimation_Permanent(int level, int act, NJS_MATERIAL* material, bool nonsequential, int speed, int frame1, int frame2, int frame3, int frame4, int frame5, int frame6, int frame7, int frame8, int frame9, int frame10, int frame11, int frame12, int frame13, int frame14, int frame15, int frame16)
{
	// Check for duplicate materials
	for (TextureAnimation* i : TextureAnimationData_Permanent)
	{
		if (i->material == material)
			return;
	}
	TextureAnimation* anim = new TextureAnimation{level, act, material, speed, nonsequential, frame1, frame2, frame3, frame4, frame5, frame6, frame7, frame8, frame9, frame10, frame11, frame12, frame13, frame14, frame15, frame16};
	TextureAnimationData_Permanent.push_back(anim);
}

int GetUVCount(NJS_MESHSET_SADX* meshset)
{
	int meshtype = meshset->type_matId >> 0xE;
	int indices = 0;
	switch (meshtype)
	{
	case 0: // Tri
		return meshset->nbMesh * 3;
	case 1: // Quad
		return meshset->nbMesh * 4;
	case 2: // NPoly
	case 3: // Strip
		int currentindex = 0;
		int currentmesh = 0;
		do
		{
			//PrintDebug("Mesh %d of %d\n", currentmesh, meshset->nbMesh);
			int numvrt = meshset->meshes[currentindex] & 0x7FFF;
			//PrintDebug("Num: %d\n", numvrt);
			indices += numvrt;
			currentindex += numvrt + 1;
			currentmesh++;
		} while (currentmesh < meshset->nbMesh);
		break;
	}
	//PrintDebug("Mesh type: %d\n", meshtype);
	return indices;
}

void AddUVAnimation(int level, int act, NJS_MESHSET_SADX* meshset, int timer, int u_speed, int v_speed)
{
	// Check for duplicate UVs
	for (UVAnimation* i : UVAnimationData)
	{
		if (i->uv_pointer == meshset->vertuv)
			return;
	}
	int uv_count = GetUVCount(meshset);
	UVAnimation* uvanim = new UVAnimation{level, act, meshset->vertuv, uv_count, timer, u_speed, v_speed, 0, 0};
	UVAnimationData.push_back(uvanim);
}

void AddUVAnimation_Permanent(int level, int act, NJS_MESHSET_SADX* meshset, int timer, int u_speed, int v_speed)
{
	// Check for duplicate UVs
	for (UVAnimation* i : UVAnimationData_Permanent)
	{
		if (i->uv_pointer == meshset->vertuv)
			return;
	}
	int uv_count = GetUVCount(meshset);
	UVAnimation* uvanim = new UVAnimation{level, act, meshset->vertuv, uv_count, timer, u_speed, v_speed, 0, 0};
	UVAnimationData_Permanent.push_back(uvanim);
}

void RemoveMaterialColors(NJS_MATERIAL* material)
{
	material->diffuse.argb.r = 178;
	material->diffuse.argb.g = 178;
	material->diffuse.argb.b = 178;
}

bool ForceWhiteDiffuse(NJS_MATERIAL* material, uint32_t flags)
{
	diffuse_override(true);
	diffuse_override_rgb(1, 1, 1, false);
	return true;
}

bool DisableAlphaRejection(NJS_MATERIAL* material, uint32_t flags)
{
	set_alpha_reject(0.0f, false);
	return true;
}

bool ForceWhiteDiffuse3_Night(NJS_MATERIAL* material, uint32_t flags)
{
	if (GetTimeOfDay() == 2) set_diffuse(3, false); else set_diffuse(0, false);
	return true;
}

bool ForceWhiteDiffuse3Specular1(NJS_MATERIAL* material, uint32_t flags)
{
	set_diffuse(3, false);
	set_specular(1, false);
	return true;
}

bool ForceWhiteDiffuse1Specular3(NJS_MATERIAL* material, uint32_t flags)
{
	set_diffuse(1, false);
	set_specular(3, false);
	return true;
}

bool ForceDiffuse2Specular2(NJS_MATERIAL* material, uint32_t flags)
{
	set_diffuse(2, false);
	set_specular(2, false);
	return true;
}

bool ForceDiffuse2Specular3(NJS_MATERIAL* material, uint32_t flags)
{
	set_diffuse(2, false);
	set_specular(3, false);
	return true;
}

bool ForceDiffuse0Specular1(NJS_MATERIAL* material, uint32_t flags)
{
	set_diffuse(0, false);
	set_specular(1, false);
	return true;
}

bool ForceDiffuse0Specular0(NJS_MATERIAL* material, uint32_t flags)
{
	set_diffuse(0, false);
	set_specular(0, false);
	return true;
}

bool ForceSpecular3(NJS_MATERIAL* material, uint32_t flags)
{
	set_specular(3, false);
	return true;
}

bool ForceDiffuse0Specular0or1(NJS_MATERIAL* material, uint32_t flags)
{
	set_diffuse(0, false);
	if (material->attrflags & NJD_FLAG_IGNORE_SPECULAR) set_specular(0, false); else set_specular(1, false);
	return true;
}

bool ForceDiffuse4Specular4(NJS_MATERIAL* material, uint32_t flags)
{
	set_diffuse(4, false);
	set_specular(4, false);
	return true;
}

bool ForceDiffuse4Specular5(NJS_MATERIAL* material, uint32_t flags)
{
	set_diffuse(4, false);
	set_specular(5, false);
	return true;
}

bool Chaos4NPCFunction(NJS_MATERIAL* material, uint32_t flags)
{
	if (CurrentLevel == LevelIDs_EggCarrierOutside)
	{
		set_diffuse(2, false);
		set_specular(3, false);
	}
	else
	{
		set_diffuse(0, false);
		set_specular(1, false);
	}
	return true;
}

bool ChaosPuddleFunc(NJS_MATERIAL* material, uint32_t flags)
{
	if (CurrentLevel == 18 || CurrentLevel == 16 || CurrentLevel == 19)
	{
		set_diffuse(4, false);
		set_specular(5, false);
	}
	else
	{
		set_diffuse(0, false);
		set_specular(1, false);
	}
	return true;
}

bool Chaos2Function(NJS_MATERIAL* material, uint32_t flags)
{
	if (CurrentLevel == 16)
	{
		set_diffuse(4, false);
		set_specular(5, false);
	}
	else
	{
		set_diffuse(2, false);
		set_specular(3, false);
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
		material_register(&material, 1, DisableAlphaRejection);
	}
}

void AddWhiteDiffuseMaterial(NJS_MATERIAL *material)
{
	if (DLLLoaded_Lantern && EnableWhiteDiffuse)
	{
		material_register(&material, 1, ForceWhiteDiffuse);
	}
}

void AddWhiteDiffuseMaterial_Specular3(NJS_MATERIAL *material)
{
	if (DLLLoaded_Lantern)
	{
		if (EnableWhiteDiffuse) material_register(&material, 1, ForceWhiteDiffuse1Specular3);
		else material_register(&material, 1, ForceSpecular3);
	}
}

void AddWhiteDiffuseNightMaterial(NJS_MATERIAL* material)
{
	if (DLLLoaded_Lantern && EnableWhiteDiffuse)
	{
		material_register(&material, 1, ForceWhiteDiffuse3_Night);
	}
}

void RemoveWhiteDiffuseNightMaterial(NJS_MATERIAL* material)
{
	if (DLLLoaded_Lantern && EnableWhiteDiffuse)
	{
		material_unregister(&material, 1, ForceWhiteDiffuse3_Night);
	}
}

void AddBossMaterial(NJS_MATERIAL *material)
{
	if (DLLLoaded_Lantern)
	{
		material_register(&material, 1, ForceDiffuse4Specular5);
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
		material_unregister(&material, 1, DisableAlphaRejection);
	}
}

void RemoveWhiteDiffuseMaterial(NJS_MATERIAL *material)
{
	if (DLLLoaded_Lantern && EnableWhiteDiffuse)
	{
		material_unregister(&material, 1, ForceWhiteDiffuse);
	}
}

void RemoveWhiteDiffuseMaterial_Specular3(NJS_MATERIAL *material)
{
	if (DLLLoaded_Lantern)
	{
		if (EnableWhiteDiffuse) material_unregister(&material, 1, ForceWhiteDiffuse1Specular3);
		else material_unregister(&material, 1, ForceSpecular3);
	}
}

void CheckModelForWhiteDiffuse(NJS_MODEL_SADX *model, int ignorelightmaterial)
{
	Uint32 materialflags;
	if (model->mats[model->meshsets[0].type_matId & ~0xC000].attrflags & NJD_FLAG_USE_ENV) return; // First mesh
	if (model->mats[ignorelightmaterial + 1].attrflags & NJD_FLAG_USE_ENV) return; // Material after the white diffuse one
	if (model->mats[ignorelightmaterial + 1].attrflags & NJD_FLAG_IGNORE_SPECULAR) return; // Material after the white diffuse one
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
	// Check meshsets and remove vertex colors, if any
	if (obj->basicdxmodel)
	{
		for (int k = 0; k < obj->basicdxmodel->nbMeshset; ++k)
		{
			if (obj->basicdxmodel->meshsets[k].vertcolor != nullptr)
			{
				obj->basicdxmodel->meshsets[k].vertcolor = nullptr;
			}
		}
		// Check the first material for NJD_FLAG_IGNORE_SPECULAR and adjust the rest of the materials accordingly
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
		// Check materials
		for (int k = 0; k < obj->basicdxmodel->nbMat; ++k)
		{
			// Remove material colors
			obj->basicdxmodel->mats[k].diffuse.argb.r = 0xFF;
			obj->basicdxmodel->mats[k].diffuse.argb.g = 0xFF;
			obj->basicdxmodel->mats[k].diffuse.argb.b = 0xFF;
			materialflags = obj->basicdxmodel->mats[k].attrflags;
			// Check for alpha rejection flag
			if (materialflags & NJD_CUSTOMFLAG_NO_REJECT)
			{
				AddAlphaRejectMaterial((NJS_MATERIAL*)&obj->basicdxmodel->mats[obj->basicdxmodel->meshsets[k].type_matId & ~0xC000]);
			}
		}
	}
	// Process materials of child and sibling models as well
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
	//PrintDebug("Loading model: %s: ", HelperFunctionsGlobal.GetReplaceablePath(ModelName));
	ModelInfo *info = new ModelInfo(HelperFunctionsGlobal.GetReplaceablePath(ModelName));
	NJS_OBJECT *object2 = info->getmodel();
	if (object->basicdxmodel)
	{
		object->basicdxmodel = info->getmodel()->basicdxmodel;
	}
	if (object->child) SwapModel(object->child, object2->child);
	if (object->sibling) SwapModel(object->sibling, object2->sibling);
	RemoveVertexColors_Object(object);
	//PrintDebug("OK\n");
}

void SwapMeshsets(NJS_OBJECT* object, int mesh1, int mesh2)
{
	memcpy(&TempMeshset, &object->basicdxmodel->meshsets[mesh1], sizeof(NJS_MESHSET_SADX));
	memcpy(&object->basicdxmodel->meshsets[mesh1], &object->basicdxmodel->meshsets[mesh2], sizeof(NJS_MESHSET_SADX));
	memcpy(&object->basicdxmodel->meshsets[mesh2], &TempMeshset, sizeof(NJS_MESHSET_SADX));
}

NJS_OBJECT* LoadModel(const char *ModelName)
{
	//PrintDebug("Loading model: %s: ", HelperFunctionsGlobal.GetReplaceablePath(ModelName));
	ModelInfo *info = new ModelInfo(HelperFunctionsGlobal.GetReplaceablePath(ModelName));
	NJS_OBJECT *object = info->getmodel();
	ProcessMaterials_Object(object);
	//PrintDebug("OK\n");
	return object;
}

NJS_MOTION* LoadAnimation(const char* AnimationName)
{
	AnimationFile* animfile = new AnimationFile(HelperFunctionsGlobal.GetReplaceablePath(AnimationName));
	NJS_MOTION* motion = animfile->getmotion();
	return motion;
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
	//PrintDebug("Registering Lantern material with diffuse %d, specular %d, unregister: %d\n", diffuse, specular, unregister);
	material_register(&material, 1, ForceDiffuse0Specular0);
	if (!DLLLoaded_Lantern) return;
	if (diffuse == 0 && specular == 0)
	{
		if (!unregister) material_register(&material, 1, ForceDiffuse0Specular0);
		else material_unregister(&material, 1, ForceDiffuse0Specular0);
		return;
	}
	if (diffuse == 0 && specular == 1)
	{
		if (!unregister) material_register(&material, 1, ForceDiffuse0Specular1);
		else material_unregister(&material, 1, ForceDiffuse0Specular1);
		return;
	}
	if (diffuse == 2 && specular == 2)
	{
		if (!unregister) material_register(&material, 1, ForceDiffuse2Specular2);
		else material_unregister(&material, 1, ForceDiffuse2Specular2);
		return;
	}
	if (diffuse == 2 && specular == 3)
	{
		if (!unregister) material_register(&material, 1, ForceDiffuse2Specular3);
		else material_unregister(&material, 1, ForceDiffuse2Specular3);
		return;
	}
	if (diffuse == 4 && specular == 4)
	{
		if (!unregister) material_register(&material, 1, ForceDiffuse4Specular4);
		else material_unregister(&material, 1, ForceDiffuse4Specular4);
		return;
	}
	if (diffuse == 4 && specular == 5)
	{
		if (!unregister) material_register(&material, 1, ForceDiffuse4Specular5);
		else material_unregister(&material, 1, ForceDiffuse4Specular5);
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
			material = &obj->basicdxmodel->mats[k];
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

void DrawLandtableCallback_NoZWrite(NJS_MODEL_SADX* model)
{
	if (DroppedFrames) return;
	Direct3D_EnableZWrite(0);
	dsDrawModel(model);
	Direct3D_EnableZWrite(1u);
}

void DrawLandtableCallback_ZWrite(NJS_MODEL_SADX* model)
{
	if (DroppedFrames) return;
	dsDrawModel(model);
}


// void __usercall(NJS_OBJECT *a1@<edi>, COL *a2)
static const void* const land_DrawObjectPtr = (void*)0x43A570;
static inline void land_DrawObjectOriginal(NJS_OBJECT* a1, _OBJ_LANDENTRY* a2)
{
	__asm
	{
		push[a2]
		mov edi, [a1]
		call land_DrawObjectPtr
		add esp, 4
	}
}

// Landtable draw hook
// This uses the normally unused "Y width" and "Z width" COL item fields to manipulate depth.
// The Z width value is used in the following ways:
//  0: Ignore
// -1: Put the COL items on a list to render after the skybox
//  Value other than -1 or 0: used as depth for the callback function
void land_DrawObject_New(NJS_OBJECT* a1, _OBJ_LANDENTRY* a2)
{
	NJS_MODEL_SADX* v2; // esi
	Uint32 flags; // ecx

	// Call the original function if the level is disabled
	int levelid = -1;
	switch (CurrentChaoStage)
	{
	case SADXChaoStage_Race:
		levelid = LevelIDs_ChaoRace;
		break;
	case SADXChaoStage_StationSquare:
		levelid = LevelIDs_SSGarden;
		break;
	case SADXChaoStage_EggCarrier:
		levelid = LevelIDs_ECGarden;
		break;
	case SADXChaoStage_MysticRuins:
		levelid = LevelIDs_MRGarden;
		break;
	case -1:
	default:
		levelid = CurrentLevel;
		break;
	}

	if (!EnabledLevels[levelid])
	{
		land_DrawObjectOriginal(a1, a2);
		return;
	}

	// Call the original function if no additional depth data is found
	if (a2->yWidth == 0 && a2->zWidth == 0)
	{
		land_DrawObjectOriginal(a1, a2);
		return;
	}

	v2 = a1->basicdxmodel;
	if (!IsVisible(&v2->center, v2->r))
		return;
		
	flags = a2->slAttribute;
	int queueFlags = QueuedModelFlagsB_EnableZWrite;

	// Draw with callback
	if (a2->zWidth != 0 && a2->zWidth != -1)
	{
		if (flags & SurfaceFlags_Waterfall) // Disable Z Write for the callback function
			DrawModelCallback_QueueModel(DrawLandtableCallback_NoZWrite, v2, a2->zWidth, (QueuedModelFlagsB)queueFlags);
		else
			DrawModelCallback_QueueModel(DrawLandtableCallback_ZWrite, v2, a2->zWidth, (QueuedModelFlagsB)queueFlags);
		return;
	}

	// Disable Z Write
	if (flags & SurfaceFlags_NoZWrite)
	{
		if (flags & SurfaceFlags_Waterfall)
			queueFlags = QueuedModelFlagsB_3;
		else
			queueFlags = 0; // Regular flag
	}

	// Alternative queue flags
	else if (flags & SurfaceFlags_Waterfall)
		queueFlags = QueuedModelFlagsB_SomeTextureThing;
	
	// Set depth
	DrawQueueDepthBias = a2->yWidth;

	// Of course there are cutscenes using camera angles that break everything
	if (EV_MainThread_ptr)
	switch (CutsceneID)
	{
	case 240: // Final story Tornado 2 flashback
		DrawQueueDepthBias = 0;
		break;
	default:
		break;
	}

	// Draw by Mesh
	if (flags & SurfaceFlags_DrawByMesh)
	{
		late_DrawModelClipMesh(v2, queueFlags, 1.0f);
		DrawQueueDepthBias = 0.0f;
		return;
	}

	// Draw regular transparent (early)
	else if (flags & SurfaceFlags_LowDepth)
	{
		ds_DrawModelClip(v2, 1.0f);
		DrawQueueDepthBias = 0.0f;
		return;
	}

	// Draw regular transparent (late)
	else
	{
		late_DrawModelClip(v2, queueFlags, 1.0f);
		DrawQueueDepthBias = 0.0f;
		return;
	}
}

NJS_MODEL_SADX* CloneAttach(NJS_MODEL_SADX* att)
{
	NJS_MODEL_SADX* newatt = new NJS_MODEL_SADX;
	newatt->buffer = nullptr;
	newatt->center = att->center;
	newatt->r = att->r;
	newatt->nbMat = att->nbMat;
	newatt->nbPoint = att->nbPoint;
	newatt->nbMeshset = att->nbMeshset;

	// Vertices and normals
	if (att->points != NULL)
	{
		newatt->points = new NJS_VECTOR[att->nbPoint];
		memcpy(newatt->points, att->points, att->nbPoint * sizeof(NJS_VECTOR));
	}
	else
		newatt->points = NULL;
	if (att->normals != NULL)
	{
		newatt->normals = new NJS_VECTOR[att->nbPoint];
		memcpy(newatt->normals, att->normals, att->nbPoint * sizeof(NJS_VECTOR));
	}
	else
		newatt->normals = NULL;

	// Meshsets
	if (att->nbMeshset > 0)
	{
		newatt->meshsets = new NJS_MESHSET_SADX[att->nbMeshset];
		memcpy(newatt->meshsets, att->meshsets, att->nbMeshset * sizeof(NJS_MESHSET_SADX));
	}
	else
		newatt->meshsets = NULL;

	// Materials
	if (att->nbMat > 0)
	{
		newatt->mats = new NJS_MATERIAL[att->nbMat];
		memcpy(newatt->mats, att->mats, att->nbMat * sizeof(NJS_MATERIAL));
	}
	else
		newatt->mats = NULL;
	return newatt;
}

NJS_OBJECT* CloneObject(NJS_OBJECT* obj)
{
	NJS_OBJECT* newobj = new NJS_OBJECT;
	newobj->ang[0] = obj->ang[0];
	newobj->ang[1] = obj->ang[1];
	newobj->ang[2] = obj->ang[2];
	newobj->evalflags = obj->evalflags;
	newobj->pos[0] = obj->pos[0];
	newobj->pos[1] = obj->pos[1];
	newobj->pos[2] = obj->pos[2];
	newobj->scl[0] = obj->scl[0];
	newobj->scl[1] = obj->scl[1];
	newobj->scl[2] = obj->scl[2];

	// Model
	if (obj->basicdxmodel)
	{
		newobj->basicdxmodel = CloneAttach(obj->basicdxmodel);
	}
	else
		newobj->basicdxmodel = NULL;

	// Child
	if (obj->child)
		newobj->child = CloneObject(obj->child);
	else
		newobj->child = NULL;

	// Sibling
	if (obj->sibling)
		newobj->sibling = CloneObject(obj->sibling);
	else
		newobj->sibling = NULL;

	return newobj;
}

// Stuff that draws after the skybox. This can be used in levels that make the skybox draw after level items (i.e. most levels).
void __cdecl LateDrawLand_Display(task* a1)
{
	NJS_MATRIX matrix;
	if (!LateDrawLand)
		return;
	if (!MissedFrames && !isTextureNG(LateDrawLand->TexList))
	{
		for (int i : LateDrawLandList)
		{
			COL colitem = LateDrawLand->Col[i];
			NJS_OBJECT* colmodel = colitem.Model;
			njGetMatrix(matrix);
			njSetTexture(LateDrawLand->TexList);
			njTranslateEx((NJS_VECTOR*)&colmodel->pos);
			njRotateXYZ(0, colmodel->ang[0], colmodel->ang[1], colmodel->ang[2]);
			land_DrawObject_New(colmodel, (_OBJ_LANDENTRY*)&colitem);
			njSetMatrix(0, matrix);
		}
	}
}

void LateDrawLand_Load(task* a1)
{
	a1->exec = (void(__cdecl*)(task*))LateDrawLand_Display;
	a1->disp = (void(__cdecl*)(task*))LateDrawLand_Display;
	a1->dest = (void(__cdecl*)(task*))CheckThingButThenDeleteObject;
}

void LoadLateDrawLand()
{
	task* obj;
	taskwk* ent;
	setdata_LateDrawLand.unionStatus.fRangeOut = 612800.0f;
	obj = CreateElementalTask((LoadObj)2, 3, LateDrawLand_Load);
	obj->ocp = &setdata_LateDrawLand;
	if (obj)
	{
		ent = obj->twp;
	}
}

void AddLateDrawLandtable(LandTable* landtable)
{
	LateDrawLand = landtable;
	for (int j = 0; j < landtable->COLCount; j++)
	{
		if (landtable->Col[j].widthZ == -1)
		{
			if (landtable->Col[j].Flags & ColFlags_Visible) landtable->Col[j].Flags &= ~ColFlags_Visible;
			LateDrawLandList.push_back(j);
		}
	}
}

void RemoveLateDrawLandtable()
{
	LateDrawLandList.clear();
	LateDrawLand = NULL;
}