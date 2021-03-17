#include "stdafx.h"

int SADXWaveAnimation = 0;
DataArray(__int16, word_7EC250, 0x7EC250, 16);

NJS_TEXNAME textures_sadxwtr_beach[16];
NJS_TEXLIST texlist_sadxwtr_beach = { arrayptrandlength(textures_sadxwtr_beach) };

NJS_TEXNAME textures_sadxwtr_sewers[10];
NJS_TEXLIST texlist_sadxwtr_sewers = { arrayptrandlength(textures_sadxwtr_sewers) };

NJS_TEXNAME textures_sadxwtr_waves[26];
NJS_TEXLIST texlist_sadxwtr_waves = { arrayptrandlength(textures_sadxwtr_waves) };

PVMEntry EmeraldCoast1Textures_list[] = {
	{ "BEACH01", (TexList *)0xF812AC },
	{ "SADXWTR_WAVES", (TexList *)&texlist_sadxwtr_waves },
	{ "SADXWTR_BEACH", (TexList *)&texlist_sadxwtr_beach },
};

PVMEntry EmeraldCoast2Textures_list[] = {
	{ "BEACH02", (TexList *)0xEF553C },
	{ "SADXWTR_WAVES", (TexList *)&texlist_sadxwtr_waves },
};

PVMEntry EmeraldCoast3Textures_list[] = {
	{ "BEACH03", (TexList *)0xE9A4CC },
	{ "SADXWTR_WAVES", (TexList *)&texlist_sadxwtr_waves },
	{ "SADXWTR_BEACH", (TexList *)&texlist_sadxwtr_beach },
};

PVMEntry StationSquare4Textures_list[] = {
	{ "ADVSS03", 0 },
	{ 0 },
	{ "SADXWTR_WAVES", (TexList *)&texlist_sadxwtr_waves },
};

PVMEntry StationSquare5Textures_list[] = {
	{ "ADVSS04", 0 },
	{ 0 },
	{ "SADXWTR_WAVES", (TexList *)&texlist_sadxwtr_waves },
};

PVMEntry MysticRuins1Textures_list[] = {
	{ "ADV_MR00", 0 },
	{ 0 },
	{ 0 },
	{ "SADXWTR_WAVES", (TexList *)&texlist_sadxwtr_waves },
};

PVMEntry EggCarrierOutside1Textures_list[] = {
	{ "ADV_EC00", 0 },
	{ "SADXWTR_WAVES", (TexList *)&texlist_sadxwtr_waves },
};

PVMEntry EggCarrierOutside2Textures_list[] = {
	{ "ADV_EC01", 0 },
	{ "SADXWTR_WAVES", (TexList *)&texlist_sadxwtr_waves },
};

PVMEntry EggCarrierOutside3Textures_list[] = {
	{ "ADV_EC02", 0 },
	{ "SADXWTR_WAVES", (TexList *)&texlist_sadxwtr_waves },
};

PVMEntry Past2Textures_list[] = {
	{ "PAST01", 0 },
	{ 0 },
	{ "SADXWTR_WAVES", (TexList *)&texlist_sadxwtr_waves },
};

PVMEntry Past3Textures_list[] = {
	{ "PAST02", 0 },
	{ 0 },
	{ "SADXWTR_WAVES", (TexList *)&texlist_sadxwtr_waves },
};

LevelPVMList Past2Textures = { LevelAndActIDs_Past2, 3, (PVMEntry*)&Past2Textures_list };
LevelPVMList Past3Textures = { LevelAndActIDs_Past3, 3, (PVMEntry*)&Past3Textures_list };

void __cdecl StationSquare_OceanDraw_SADXStyle(OceanData *x)
{
	OceanData *v1; // esi
	Uint32 v2; // edi
	int v3; // eax
	Uint32 v4; // ebx
	int v5; // eax
	double v6; // st7
	Float z; // ST14_4
	float XDist; // ST0C_4
	unsigned int v9; // edi
	unsigned int v10; // edi
	float xa; // [esp+1Ch] [ebp+4h]
	float xb; // [esp+1Ch] [ebp+4h]

	if (CurrentLevel == LevelIDs_StationSquare)
	{
		DisableFog();
		njSetTexture(&texlist_sadxwtr_waves);
		Direct3D_SetZFunc(1u);
		Direct3D_EnableZWrite(0);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
		v1 = x;
		if (GetTimeOfDay() == 0) v2 = 21;
		if (GetTimeOfDay() == 1) v2 = 22;
		if (GetTimeOfDay() == 2) v2 = 23;
		if (CurrentAct != 4 && x->VBuffIndex) v2 = 24;
		SetOceanAlphaModeAndFVF(1);
		njPushMatrix(0);
		v6 = njSin(FrameCounterUnpaused << 6) * x->Offset.y;
		xa = v6;
		z = v6 + v1->Position.z;
		XDist = xa + v1->Position.x;
		njTranslate(0, XDist, v1->Position.y, z);
		njPushMatrix(0);
		xb = xa * 0.5;
		njTranslate(0, xb, -1.0, xb);
		njSetTextureNum(v2);
		v9 = 0;
		if (v1->PlaneCount)
		{
			do
			{
				Direct3D_DrawFVF_H(
					OceanGarbageArray[35 * (unsigned __int8)v1->VBuffIndex].points,
					4 * (unsigned __int8)v1->PrimitiveCount);
				njTranslate(0, v1->Offset.x, 0.0, 0.0);
				++v9;
			} while (v9 < (unsigned __int8)v1->PlaneCount);
		}
		njPopMatrix(1u);
		njPushMatrix(0);
		njSetTextureNum(SADXWaveAnimation);
		v10 = 0;
		if (v1->PlaneCount)
		{
			do
			{
				Direct3D_DrawFVF_H(
					OceanGarbageArray[35 * (unsigned __int8)v1->VBuffIndex].points,
					4 * (unsigned __int8)v1->PrimitiveCount);
				njTranslate(0, v1->Offset.x, 0.0, 0.0);
				++v10;
			} while (v10 < (unsigned __int8)v1->PlaneCount);
		}
		njPopMatrix(1u);
		njPopMatrix(1u);
		Direct3D_SetZFunc(1u);
		Direct3D_EnableZWrite(1u);
		ToggleStageFog();
	}
}

void __cdecl EmeraldCoast_OceanDraw_SADXStyle(OceanData *o)
{
	OceanData *_o; // esi
	char v2; // al
	char v3; // cl
	double f; // st7
	Float z; // ST1C_4
	float x; // ST14_4
	unsigned int v7; // edi
	unsigned int v8; // edi
	float _f; // [esp+18h] [ebp+4h]
	float xb; // [esp+18h] [ebp+4h]
	if (CurrentLevel == LevelIDs_EmeraldCoast)
	{
		DisableFog();
		Direct3D_SetZFunc(3u);
		Direct3D_EnableZWrite(0);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
		njSetTexture(&texlist_sadxwtr_waves);
		SetOceanAlphaModeAndFVF(1);
		njPushMatrix(0);
		_o = o;
		if (GameState != 16)
		{
			v2 = o->OtherIndexIdk--;
			if (!v2)
			{
				v3 = o->TextureIndex + 1;
				o->TextureIndex = v3;
				if (word_7EC250[v3] == -1)
				{
					o->TextureIndex = 0;
				}
				o->OtherIndexIdk = HIBYTE(word_7EC250[o->TextureIndex]);
			}
		}
		f = njSin(FrameCounterUnpaused << 6) * o->Offset.y;
		_f = f;
		z = f + _o->Position.z;
		x = _f + _o->Position.x;
		njTranslate(0, x, _o->Position.y, z);
		njPushMatrix(0);
		njSetTextureNum(_o->VBuffIndex + 15);
		v8 = 0;
		if (_o->PlaneCount)
		{
			do
			{
				Direct3D_DrawFVF_H(
					OceanGarbageArray[0x23 * (unsigned __int8)_o->VBuffIndex].points,
					4 * (unsigned __int8)_o->PrimitiveCount);
				njTranslate(0, _o->Offset.x, 0.0, 0.0);
				++v8;
			} while (v8 < (unsigned __int8)_o->PlaneCount);
		}
		njPopMatrix(1u);
		njPushMatrix(0);
		xb = _f * 0.5;
		njTranslate(0, xb, 0.2f, xb);
		njSetTextureNum(SADXWaveAnimation);
		v7 = 0;
		if (_o->PlaneCount)
		{
			do
			{
				Direct3D_DrawFVF_H(
					OceanGarbageArray[0x23 * (unsigned __int8)_o->VBuffIndex].points,
					4 * (unsigned __int8)_o->PrimitiveCount);
				njTranslate(0, _o->Offset.x, 0.0, 0.0);
				++v7;
			} while (v7 < (unsigned __int8)_o->PlaneCount);
		}
		njPopMatrix(1u);
		njPopMatrix(1u);
		j_nullsub_2();
		Direct3D_ResetZFunc();
		Direct3D_EnableZWrite(1u);
		ToggleStageFog();
	}
}

void __cdecl MysticRuins_OceanDraw_SADXStyle(OceanData *x)
{
	OceanData *v1; // esi
	double v2; // st7
	float v3; // edx
	Float z; // ST1C_4
	float XDist; // ST14_4
	unsigned int v6; // edi
	float xa; // [esp+18h] [ebp+4h]
	float xb; // [esp+18h] [ebp+4h]
	if ((CurrentLevel == LevelIDs_MysticRuins && !CurrentAct) || CurrentLevel == LevelIDs_EggHornet)
	{
		DisableFog();
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
		njSetTexture(&texlist_sadxwtr_waves);
		Direct3D_SetZFunc(1u);
		Direct3D_EnableZWrite(0);
		SetOceanAlphaModeAndFVF(1);
		njPushMatrix(0);
		v1 = x;
		v2 = njSin(FrameCounterUnpaused << 6) * x->Offset.y;
		v3 = x->Position.y;
		xa = v2;
		z = v2 + v1->Position.z;
		XDist = xa + v1->Position.x;
		njTranslate(0, XDist, v3, z);
		v6 = 0;
		if (v1->PlaneCount)
		{
			xb = xa * 0.5;
			do
			{
				njPushMatrix(0);
				njTranslate(0, xb, 0.0, xb);
				njSetTextureNum(18);
				Direct3D_DrawFVF_H(
					OceanGarbageArray[35 * (unsigned __int8)v1->VBuffIndex].points,
					4 * (unsigned __int8)v1->PrimitiveCount);
				njPopMatrix(1u);
				njPushMatrix(0);
				njTranslate(0, 0.0, 1.0, 0.0);
				njSetTextureNum(SADXWaveAnimation);
				Direct3D_DrawFVF_H(
					OceanGarbageArray[35 * (unsigned __int8)v1->VBuffIndex].points,
					4 * (unsigned __int8)v1->PrimitiveCount);
				njPopMatrix(1u);
				njTranslate(0, v1->Offset.x, 0.0, 0.0);
				++v6;
			} while (v6 < (unsigned __int8)v1->PlaneCount);
		}
		njPopMatrix(1u);
		j_nullsub_2();
		Direct3D_ResetZFunc();
		Direct3D_EnableZWrite(1u);
		ToggleStageFog();
	}
}

void __cdecl EggCarrier_OceanDraw_SADXStyle(OceanData *arg_0)
{
	Uint32 v1; // ebp
	OceanData *v2; // esi
	double v3; // st7
	float v4; // ecx
	float ZDist; // ST0C_4
	float XDist; // ST04_4
	unsigned int v7; // edi
	int a2; // [esp+18h] [ebp-4h]
	float x; // [esp+20h] [ebp+4h]
	float xz; // [esp+20h] [ebp+4h]

	if ((CurrentLevel == LevelIDs_EggCarrierOutside && CurrentAct <= 2) || CurrentLevel == LevelIDs_Zero || LevelIDs_E101R)
	{
		DisableFog();
		Direct3D_SetNearFarPlanes(SkyboxDrawDistance.Minimum, SkyboxDrawDistance.Maximum);
		DisableFog();
		njSetTexture(&texlist_sadxwtr_waves);
		njPushMatrix(0);
		if (Camera_Data1)
		{
			njTranslate(0, Camera_Data1->Position.x, 0.0, Camera_Data1->Position.z);
		}
		njScale(0, 2.0, 1.0, 2.0);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
		v1 = SADXWaveAnimation;
		a2 = 17;
		Direct3D_SetZFunc(3u);
		SetOceanAlphaModeAndFVF(1);
		njPushMatrix(0);
		v2 = arg_0;
		v3 = njSin(FrameCounterUnpaused << 6) * arg_0->Offset.y;
		v4 = arg_0->Position.y;
		x = v3;
		ZDist = v3 + v2->Position.z;
		XDist = x + v2->Position.x;
		njTranslate(0, XDist, v4, ZDist);
		v7 = 0;
		if (v2->PlaneCount)
		{
			xz = x * 0.5;
			do
			{
				njPushMatrix(0);
				njTranslate(0, xz, 0.0, xz);
				njSetTextureNum(v1);
				Direct3D_DrawFVF_H(
					OceanGarbageArray[0x23 * (unsigned __int8)v2->VBuffIndex].points,
					4 * (unsigned __int8)v2->PrimitiveCount);
				njPopMatrix(1u);
				njPushMatrix(0);
				njTranslate(0, 0.0, 2.5, 0.0);
				njSetTextureNum(a2);
				Direct3D_DrawFVF_H(
					OceanGarbageArray[0x23 * (unsigned __int8)v2->VBuffIndex].points,
					4 * (unsigned __int8)v2->PrimitiveCount);
				njPopMatrix(1u);
				njTranslate(0, v2->Offset.x, 0.0, 0.0);
				++v7;
			} while (v7 < (unsigned __int8)v2->PlaneCount);
		}
		njPopMatrix(1u);
		j_nullsub_2();
		Direct3D_ResetZFunc();
		njPopMatrix(1u);
		ToggleStageFog();
		Direct3D_SetNearFarPlanes(LevelDrawDistance.Minimum, LevelDrawDistance.Maximum);
		ToggleStageFog();
	}
}

void __cdecl Past_OceanDraw_SADXStyle(OceanData *x)
{
	Uint32 v1; // edi
	Uint32 v2; // ebx
	OceanData *v3; // esi
	double v4; // st7
	float v5; // ecx
	Float z; // ST18_4
	float XDist; // ST10_4
	unsigned int v8; // edi
	unsigned int v9; // edi
	float xa; // [esp+1Ch] [ebp+4h]
	float xb; // [esp+1Ch] [ebp+4h]

	if (CurrentLevel == LevelIDs_Past)
	{
		DisableFog();
		njSetTexture(&texlist_sadxwtr_waves);
		v1 = SADXWaveAnimation;
		if (CurrentAct == 1)
		{
			v2 = 19;
		}
		if (CurrentAct == 2)
		{
			v2 = 20;
		}
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
		Direct3D_SetZFunc(1u);
		Direct3D_EnableZWrite(0);
		SetOceanAlphaModeAndFVF(1);
		njPushMatrix(0);
		v3 = x;
		v4 = njSin(FrameCounterUnpaused << 6) * x->Offset.y;
		v5 = x->Position.y;
		xa = v4;
		z = v4 + v3->Position.z;
		XDist = xa + v3->Position.x;
		njTranslate(0, XDist, v5, z);
		njPushMatrix(0);
		xb = xa * 0.5;
		njTranslate(0, xb, 0.0, xb);
		njSetTextureNum(v1);
		v8 = 0;
		if (v3->PlaneCount)
		{
			do
			{
				Direct3D_DrawFVF_H(
					OceanGarbageArray[35 * (unsigned __int8)v3->VBuffIndex].points,
					4 * (unsigned __int8)v3->PrimitiveCount);
				njTranslate(0, v3->Offset.x, 0.0, 0.0);
				++v8;
			} while (v8 < (unsigned __int8)v3->PlaneCount);
		}
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, 0.0, 1.0, 0.0);
		njSetTextureNum(v2);
		v9 = 0;
		if (v3->PlaneCount)
		{
			do
			{
				Direct3D_DrawFVF_H(
					OceanGarbageArray[35 * (unsigned __int8)v3->VBuffIndex].points,
					4 * (unsigned __int8)v3->PrimitiveCount);
				njTranslate(0, v3->Offset.x, 0.0, 0.0);
				++v9;
			} while (v9 < (unsigned __int8)v3->PlaneCount);
		}
		njPopMatrix(1u);
		njPopMatrix(1u);
		Direct3D_ResetZFunc();
		Direct3D_EnableZWrite(1u);
		ToggleStageFog();
	}
}

NJS_TEXLIST **__cdecl SetUpMRTexlists()
{
	NJS_TEXLIST **result; // eax
	result = ADV02_TEXLISTS;
	MysticRuins1Textures_list[0].TexList = ADV02_TEXLISTS[38];
	MysticRuins1Textures_list[1].Name = "MR_SKY00";
	MysticRuins1Textures_list[1].TexList = (NJS_TEXLIST*)0x1103848;
	MysticRuins1Textures_list[2].Name = "MR_TRAIN";
	MysticRuins1Textures_list[2].TexList = ADV02_TEXLISTS[4];
	MysticRuins1Textures_list[3].Name = "SADXWTR_WAVES";
	MysticRuins1Textures_list[3].TexList = (NJS_TEXLIST*)&texlist_sadxwtr_waves;
	return result;
}

NJS_TEXLIST **__cdecl SetUpSSTexlists()
{
	NJS_TEXLIST **result; // eax
	result = ADV00_TEXLISTS;
	StationSquare4Textures_list[0].TexList = ADV00_TEXLISTS[3];
	StationSquare4Textures_list[1].Name = "SS_BOAT";
	StationSquare4Textures_list[1].TexList = (NJS_TEXLIST*)0x2AEAB98;
	StationSquare4Textures_list[2].Name = "SADXWTR_WAVES";
	StationSquare4Textures_list[2].TexList = (NJS_TEXLIST*)&texlist_sadxwtr_waves;
	return result;
}

NJS_TEXLIST **__cdecl SetUpECTexlists_1()
{
	NJS_TEXLIST **result; // eax
	result = ADV01_TEXLISTS;
	EggCarrierOutside1Textures_list[0].TexList = *ADV01_TEXLISTS;
	EggCarrierOutside1Textures_list[1].Name = "SADXWTR_WAVES";
	EggCarrierOutside1Textures_list[1].TexList = (NJS_TEXLIST*)&texlist_sadxwtr_waves;
	return result;
}

NJS_TEXLIST **__cdecl SetUpECTexlists_2()
{
	NJS_TEXLIST **result; // eax
	result = ADV01_TEXLISTS;
	EggCarrierOutside2Textures_list[0].TexList = ADV01_TEXLISTS[1];
	EggCarrierOutside2Textures_list[1].Name = "SADXWTR_WAVES";
	EggCarrierOutside2Textures_list[1].TexList = (NJS_TEXLIST*)&texlist_sadxwtr_waves;
	return result;
}

NJS_TEXLIST **__cdecl SetUpECTexlists_3()
{
	NJS_TEXLIST **result; // eax
	result = ADV01_TEXLISTS;
	EggCarrierOutside3Textures_list[0].TexList = ADV01_TEXLISTS[2];
	EggCarrierOutside3Textures_list[1].Name = "SADXWTR_WAVES";
	EggCarrierOutside3Textures_list[1].TexList = (NJS_TEXLIST*)&texlist_sadxwtr_waves;
	return result;
}

NJS_TEXLIST **__cdecl SetUpPastTexlists_1()
{
	NJS_TEXLIST **result; // eax
	result = ADV03_TEXLISTS;
	Past2Textures_list[0].TexList = ADV03_TEXLISTS[5];
	Past2Textures_list[1].Name = "MR_SKY00";
	Past2Textures_list[1].TexList = ADV03_TEXLISTS[7];
	Past2Textures_list[2].Name = "SADXWTR_WAVES";
	Past2Textures_list[2].TexList = (NJS_TEXLIST*)&texlist_sadxwtr_waves;
	return result;
}

NJS_TEXLIST **__cdecl SetUpPastTexlists_2()
{
	NJS_TEXLIST **result; // eax
	result = ADV03_TEXLISTS;
	Past3Textures_list[0].TexList = ADV03_TEXLISTS[6];
	Past3Textures_list[1].Name = "MR_SKY00";
	Past3Textures_list[1].TexList = ADV03_TEXLISTS[7];
	Past3Textures_list[2].Name = "SADXWTR_WAVES";
	Past3Textures_list[2].TexList = (NJS_TEXLIST*)&texlist_sadxwtr_waves;
	return result;
}

void SADXStyleWater_Init(const IniFile *config, const HelperFunctions &helperFunctions)
{
	// Emerald Coast
	if (SADXWater_EmeraldCoast && EnableEmeraldCoast)
	{
		WriteJump(EmeraldCoast_OceanDraw, EmeraldCoast_OceanDraw_SADXStyle);
		TexLists_Level[0]->PVMList = (PVMEntry*)&EmeraldCoast1Textures_list;
		TexLists_Level[0]->NumTextures = LengthOfArray(EmeraldCoast1Textures_list);
		TexLists_Level[1]->PVMList = (PVMEntry*)&EmeraldCoast2Textures_list;
		TexLists_Level[1]->NumTextures = LengthOfArray(EmeraldCoast2Textures_list);
		TexLists_Level[2]->PVMList = (PVMEntry*)&EmeraldCoast3Textures_list;
		TexLists_Level[2]->NumTextures = LengthOfArray(EmeraldCoast3Textures_list);
	}
	// Station Square
	if (SADXWater_StationSquare && EnableStationSquare)
	{
		WriteJump(StationSquare_OceanDraw, StationSquare_OceanDraw_SADXStyle);
		WriteJump((void*)0x07C4FD0, SetUpSSTexlists);
		TexLists_Level[36]->PVMList = (PVMEntry*)&StationSquare4Textures_list;
		TexLists_Level[36]->NumTextures = 3;
		TexLists_Level[37]->PVMList = (PVMEntry*)&StationSquare5Textures_list;
		TexLists_Level[37]->NumTextures = LengthOfArray(StationSquare5Textures_list);
	}
	// Mystic Ruins
	if (SADXWater_MysticRuins && EnableMysticRuins)
	{
		WriteJump((void*)0x7C5040, SetUpMRTexlists);
		WriteJump(MysticRuins_OceanDraw, MysticRuins_OceanDraw_SADXStyle);
		TexLists_Level[39]->PVMList = (PVMEntry*)&MysticRuins1Textures_list;
		TexLists_Level[39]->NumTextures = 4;
	}
	// Egg Carrier
	if (SADXWater_EggCarrier && EnableEggCarrier)
	{
		WriteJump((void*)0x7D2C50, SetUpECTexlists_1);
		WriteJump((void*)0x7D2C60, SetUpECTexlists_2);
		WriteJump((void*)0x7D2C70, SetUpECTexlists_3);
		WriteJump(EggCarrier_OceanDraw, EggCarrier_OceanDraw_SADXStyle);
		TexLists_Level[46]->PVMList = (PVMEntry*)&EggCarrierOutside1Textures_list;
		TexLists_Level[46]->NumTextures = LengthOfArray(EggCarrierOutside1Textures_list);
		TexLists_Level[47]->PVMList = (PVMEntry*)&EggCarrierOutside2Textures_list;
		TexLists_Level[47]->NumTextures = LengthOfArray(EggCarrierOutside2Textures_list);
		TexLists_Level[48]->PVMList = (PVMEntry*)&EggCarrierOutside3Textures_list;
		TexLists_Level[48]->NumTextures = LengthOfArray(EggCarrierOutside3Textures_list);
	}
	// Past
	if (SADXWater_Past && EnablePast)
	{
		WriteJump((void*)0x7C5150, SetUpPastTexlists_1);
		WriteJump((void*)0x7C5180, SetUpPastTexlists_2);
		TexLists_Level[44]->PVMList = (PVMEntry*)&Past2Textures_list;
		TexLists_Level[44]->NumTextures = LengthOfArray(Past2Textures_list);
		TexLists_Level[45]->PVMList = (PVMEntry*)&Past3Textures_list;
		TexLists_Level[45]->NumTextures = LengthOfArray(Past3Textures_list);
	}
}

void SADXStyleWater_OnFrame()
{
	// Runs only when the game isn't paused
	if ((FramerateSetting < 2 && FrameCounter % 4 == 0) || (FramerateSetting == 2 && FrameCounter % 2 == 0) || FramerateSetting > 2)
	{
		SADXWaveAnimation++;
		if (SADXWaveAnimation > 14) SADXWaveAnimation = 0;
	}
}