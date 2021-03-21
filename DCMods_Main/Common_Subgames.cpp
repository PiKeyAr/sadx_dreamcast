#include "stdafx.h"

NJS_TEXNAME textures_sandhill[50];
NJS_TEXLIST texlist_sandhill = { arrayptrandlength(textures_sandhill) };

NJS_TEXNAME textures_hhammer[21];
NJS_TEXLIST texlist_hhammer = { arrayptrandlength(textures_hhammer) };

NJS_TEXNAME textures_minicart01[12];
NJS_TEXLIST texlist_minicart01 = { arrayptrandlength(textures_minicart01) };

NJS_TEXNAME textures_minicart02[11];
NJS_TEXLIST texlist_minicart02 = { arrayptrandlength(textures_minicart02) };

NJS_TEXNAME textures_minicart03[11];
NJS_TEXLIST texlist_minicart03 = { arrayptrandlength(textures_minicart03) };

NJS_TEXNAME textures_minicart04[11];
NJS_TEXLIST texlist_minicart04 = { arrayptrandlength(textures_minicart04) };

NJS_TEXNAME textures_minicart05[10];
NJS_TEXLIST texlist_minicart05 = { arrayptrandlength(textures_minicart05) };

NJS_TEXNAME textures_minicart06[10];
NJS_TEXLIST texlist_minicart06 = { arrayptrandlength(textures_minicart06) };

/*
#include "SandHill.h"
#include "HedgehogHammer.h"
#include "TwinkleCircuit_1.h"
#include "TwinkleCircuit_2.h"
#include "TwinkleCircuit_3.h"
#include "TwinkleCircuit_4.h"
#include "TwinkleCircuit_5.h"
#include "TwinkleCircuit_6.h"
*/

DataArray(FogData, FogData_SandHill, 0x0173BB74, 3);
DataArray(FogData, FogData_HedgehogHammer, 0x027C69C4, 3);
DataArray(SkyboxScale, SkyboxScale_SkyChase1, 0x027D6CE0, 3);
DataArray(DrawDistance, DrawDist_SkyChase1, 0x027D6D58, 3);

static const NJS_MATERIAL* LevelSpecular_Subgames[] = {
	// Tornado 2 transformation cutscene
	((NJS_MATERIAL*)0x0285F230),
	((NJS_MATERIAL*)0x0285F028),
	((NJS_MATERIAL*)0x0285EC58),
	((NJS_MATERIAL*)0x0285EC6C),
	((NJS_MATERIAL*)0x0285EA5C),
	((NJS_MATERIAL*)0x0285E828),
	((NJS_MATERIAL*)0x0285E638),
	((NJS_MATERIAL*)0x0285E278),
	((NJS_MATERIAL*)0x0285E28C),
	((NJS_MATERIAL*)0x0285E06C),
	((NJS_MATERIAL*)0x0285BC18),
	((NJS_MATERIAL*)0x0285BC2C),
	((NJS_MATERIAL*)0x0285BC40),
	((NJS_MATERIAL*)0x0285BC54),
	((NJS_MATERIAL*)0x0285B9B0),
	((NJS_MATERIAL*)0x0285B9C4),
	((NJS_MATERIAL*)0x0285CF20),
	((NJS_MATERIAL*)0x0285EE2C),
	((NJS_MATERIAL*)0x0285E44C),
	((NJS_MATERIAL*)0x028535B8),
	((NJS_MATERIAL*)0x028535CC),
	((NJS_MATERIAL*)0x028535E0),
	((NJS_MATERIAL*)0x028535F4),
	((NJS_MATERIAL*)0x02853608),
	((NJS_MATERIAL*)0x02852FE0),
	((NJS_MATERIAL*)0x028529E4),
	((NJS_MATERIAL*)0x028529F8),
	((NJS_MATERIAL*)0x028522E0),
	((NJS_MATERIAL*)0x028522F4),
	((NJS_MATERIAL*)0x02852308),
	((NJS_MATERIAL*)0x0285214C),
	((NJS_MATERIAL*)0x02851B88),
	((NJS_MATERIAL*)0x0285157C),
	((NJS_MATERIAL*)0x02851590),
	((NJS_MATERIAL*)0x02850E90),
	((NJS_MATERIAL*)0x02850EA4),
	((NJS_MATERIAL*)0x02850EB8),
	((NJS_MATERIAL*)0x02850CFC),
	((NJS_MATERIAL*)0x02850158),
	((NJS_MATERIAL*)0x0285016C),
	((NJS_MATERIAL*)0x0284FAD8),
	((NJS_MATERIAL*)0x0284FAEC),
	((NJS_MATERIAL*)0x0284FB00),
	((NJS_MATERIAL*)0x0284F92C),
	((NJS_MATERIAL*)0x0284ED88),
	((NJS_MATERIAL*)0x0284ED9C),
	((NJS_MATERIAL*)0x0284E708),
	((NJS_MATERIAL*)0x0284E71C),
	((NJS_MATERIAL*)0x0284E730),
	((NJS_MATERIAL*)0x0284E560),
	((NJS_MATERIAL*)0x0284E330),
	((NJS_MATERIAL*)0x0284D738),
	((NJS_MATERIAL*)0x0284D74C),
	((NJS_MATERIAL*)0x0284A340),
	((NJS_MATERIAL*)0x0284A354),
	((NJS_MATERIAL*)0x0284A368),
	((NJS_MATERIAL*)0x0284A37C),
	((NJS_MATERIAL*)0x028497B8),
	((NJS_MATERIAL*)0x028491A0),
	((NJS_MATERIAL*)0x028491B4),
	((NJS_MATERIAL*)0x02848FF4),
	((NJS_MATERIAL*)0x02848490),
	((NJS_MATERIAL*)0x02847E78),
	((NJS_MATERIAL*)0x02847E8C),
	((NJS_MATERIAL*)0x02847CCC),
	((NJS_MATERIAL*)0x028472DC),
};

static const NJS_MATERIAL* WhiteDiffuse_Subgames[] = {
	// Start and goal robot (Twinkle Circuit)
	((NJS_MATERIAL*)0x009CC010),
	((NJS_MATERIAL*)0x009CC024),
	((NJS_MATERIAL*)0x009CC038),
	((NJS_MATERIAL*)0x009CC04C),
	((NJS_MATERIAL*)0x009CC060),
	((NJS_MATERIAL*)0x009CC074),
	((NJS_MATERIAL*)0x009CC088),
	((NJS_MATERIAL*)0x009CC09C),
};

static const NJS_MATERIAL* ObjectBaseAndSpecular_Subgames[] = {
	// Tornado 2 transformation cutscene
	((NJS_MATERIAL*)0x028634D8),
	((NJS_MATERIAL*)0x028634EC),
	((NJS_MATERIAL*)0x02863500),
	((NJS_MATERIAL*)0x02863514),
	((NJS_MATERIAL*)0x02863528),
	((NJS_MATERIAL*)0x0286353C),
	((NJS_MATERIAL*)0x02862948),
	((NJS_MATERIAL*)0x0286295C),
	((NJS_MATERIAL*)0x02862970),
	((NJS_MATERIAL*)0x02862984),
	((NJS_MATERIAL*)0x028626C0),
	((NJS_MATERIAL*)0x028626D4),
	((NJS_MATERIAL*)0x02862428),
	((NJS_MATERIAL*)0x0286243C),
	((NJS_MATERIAL*)0x02862280),
	((NJS_MATERIAL*)0x028620F0),
	((NJS_MATERIAL*)0x02861F30),
	((NJS_MATERIAL*)0x02861C98),
	((NJS_MATERIAL*)0x02861CAC),
	((NJS_MATERIAL*)0x02861AF0),
	((NJS_MATERIAL*)0x02861960),
	((NJS_MATERIAL*)0x028616D8),
	((NJS_MATERIAL*)0x028616EC),
	((NJS_MATERIAL*)0x02861420),
	((NJS_MATERIAL*)0x02861434),
	((NJS_MATERIAL*)0x02860E40),
	((NJS_MATERIAL*)0x02860E54),
	((NJS_MATERIAL*)0x02860E68),
	((NJS_MATERIAL*)0x02860CB0),
	((NJS_MATERIAL*)0x02860B20),
	((NJS_MATERIAL*)0x02860538),
	((NJS_MATERIAL*)0x0286054C),
	((NJS_MATERIAL*)0x02860560),
	((NJS_MATERIAL*)0x02860574),
	((NJS_MATERIAL*)0x02860588),
	((NJS_MATERIAL*)0x02860428),
	((NJS_MATERIAL*)0x02860070),
	((NJS_MATERIAL*)0x02860084),
	((NJS_MATERIAL*)0x02860098),
	((NJS_MATERIAL*)0x0285FCB4),
	((NJS_MATERIAL*)0x0285FCC8),
	((NJS_MATERIAL*)0x0285FCDC),
	((NJS_MATERIAL*)0x0285FB78),
	((NJS_MATERIAL*)0x0285F804),
	((NJS_MATERIAL*)0x0285F818),
	((NJS_MATERIAL*)0x0285F468),
	((NJS_MATERIAL*)0x0285F47C),
	((NJS_MATERIAL*)0x0285F490),
	((NJS_MATERIAL*)0x0285F4A4),
	((NJS_MATERIAL*)0x0285DEB0),
	((NJS_MATERIAL*)0x0285DD28),
	((NJS_MATERIAL*)0x0285DBA0),
	((NJS_MATERIAL*)0x0285DA18),
	((NJS_MATERIAL*)0x0285D890),
	((NJS_MATERIAL*)0x0285D708),
	((NJS_MATERIAL*)0x0285D580),
	((NJS_MATERIAL*)0x0285D3F8),
	((NJS_MATERIAL*)0x0285D270),
	((NJS_MATERIAL*)0x0285C8B0),
	((NJS_MATERIAL*)0x0285C8C4),
	((NJS_MATERIAL*)0x0285C8D8),
	((NJS_MATERIAL*)0x0285C8EC),
	((NJS_MATERIAL*)0x0285C6E0),
	((NJS_MATERIAL*)0x0285C3F8),
	((NJS_MATERIAL*)0x0285C40C),
	((NJS_MATERIAL*)0x0285C420),
	((NJS_MATERIAL*)0x0285B550),
	((NJS_MATERIAL*)0x0285B564),
	((NJS_MATERIAL*)0x0285B268),
	((NJS_MATERIAL*)0x0285ADA0),
	((NJS_MATERIAL*)0x0285ADB4),
	((NJS_MATERIAL*)0x0285ADC8),
	((NJS_MATERIAL*)0x0285ADDC),
	((NJS_MATERIAL*)0x0285AA48),
	((NJS_MATERIAL*)0x0285AA5C),
	((NJS_MATERIAL*)0x0285A820),
	((NJS_MATERIAL*)0x0285A5F4),
	((NJS_MATERIAL*)0x0285A448),
	((NJS_MATERIAL*)0x0285A21C),
	((NJS_MATERIAL*)0x02859FB4),
	((NJS_MATERIAL*)0x02859FC8),
	((NJS_MATERIAL*)0x02859C5C),
	((NJS_MATERIAL*)0x02859C70),
	((NJS_MATERIAL*)0x02859AB4),
	((NJS_MATERIAL*)0x02859898),
	((NJS_MATERIAL*)0x0285965C),
	((NJS_MATERIAL*)0x02859484),
	((NJS_MATERIAL*)0x02859268),
	((NJS_MATERIAL*)0x02858D90),
	((NJS_MATERIAL*)0x02858DA4),
	((NJS_MATERIAL*)0x02858DB8),
	((NJS_MATERIAL*)0x02858DCC),
	((NJS_MATERIAL*)0x02858A48),
	((NJS_MATERIAL*)0x02858A5C),
	((NJS_MATERIAL*)0x02858820),
	((NJS_MATERIAL*)0x028585E4),
	((NJS_MATERIAL*)0x02858438),
	((NJS_MATERIAL*)0x0285820C),
	((NJS_MATERIAL*)0x02857FA4),
	((NJS_MATERIAL*)0x02857FB8),
	((NJS_MATERIAL*)0x02857C4C),
	((NJS_MATERIAL*)0x02857C60),
	((NJS_MATERIAL*)0x02857AA4),
	((NJS_MATERIAL*)0x02857888),
	((NJS_MATERIAL*)0x0285764C),
	((NJS_MATERIAL*)0x02857474),
	((NJS_MATERIAL*)0x02857268),
	((NJS_MATERIAL*)0x028570A4),
	// Tornado model 1
	((NJS_MATERIAL*)0x028ADD58),
	((NJS_MATERIAL*)0x028ADD6C),
	((NJS_MATERIAL*)0x028ADD80),
	((NJS_MATERIAL*)0x028ADD94),
	((NJS_MATERIAL*)0x028ADDA8),
	((NJS_MATERIAL*)0x028ADDBC),
	((NJS_MATERIAL*)0x028ADDD0),
	((NJS_MATERIAL*)0x028ADDE4),
	((NJS_MATERIAL*)0x028ADDF8),
	((NJS_MATERIAL*)0x028ADE0C),
	((NJS_MATERIAL*)0x028ADE20),
	((NJS_MATERIAL*)0x028ADE34),
	((NJS_MATERIAL*)0x028ADE48),
	((NJS_MATERIAL*)0x028ADE5C),
	((NJS_MATERIAL*)0x028ADE70),
	((NJS_MATERIAL*)0x028ADE84),
	((NJS_MATERIAL*)0x028ADE98),
	((NJS_MATERIAL*)0x028ADEAC),
	((NJS_MATERIAL*)0x028ADEC0),
	((NJS_MATERIAL*)0x028ADED4),
	((NJS_MATERIAL*)0x028ADEE8),
	((NJS_MATERIAL*)0x028ADEFC),
	((NJS_MATERIAL*)0x028ADF10),
	((NJS_MATERIAL*)0x028ADF24),
	((NJS_MATERIAL*)0x028ADF38),
	((NJS_MATERIAL*)0x028ADF4C),
	((NJS_MATERIAL*)0x028ADF60),
	((NJS_MATERIAL*)0x028ADF74),
	((NJS_MATERIAL*)0x028ADF88),
	((NJS_MATERIAL*)0x028ADF9C),
	((NJS_MATERIAL*)0x028ADFB0),
	((NJS_MATERIAL*)0x028ADFC4),
	((NJS_MATERIAL*)0x028ADFD8),
	((NJS_MATERIAL*)0x028ADFEC),
	((NJS_MATERIAL*)0x028AE000),
	((NJS_MATERIAL*)0x028AE014),
	((NJS_MATERIAL*)0x028AE028),
	((NJS_MATERIAL*)0x028AE03C),
	((NJS_MATERIAL*)0x028AE050),
	((NJS_MATERIAL*)0x028AE064),
	((NJS_MATERIAL*)0x028AD118),
	((NJS_MATERIAL*)0x028AD12C),
	// Tornado 1 hit
	((NJS_MATERIAL*)0x0291DAB0),
	((NJS_MATERIAL*)0x0291DAC4),
	((NJS_MATERIAL*)0x0291DAD8),
	((NJS_MATERIAL*)0x0291DAEC),
	((NJS_MATERIAL*)0x0291DB00),
	((NJS_MATERIAL*)0x0291DB14),
	((NJS_MATERIAL*)0x0291DB28),
	((NJS_MATERIAL*)0x0291DB3C),
	((NJS_MATERIAL*)0x0291DB50),
	((NJS_MATERIAL*)0x0291DB64),
	((NJS_MATERIAL*)0x0291DB78),
	((NJS_MATERIAL*)0x0291DB8C),
	((NJS_MATERIAL*)0x0291DBA0),
	((NJS_MATERIAL*)0x0291DBB4),
	((NJS_MATERIAL*)0x0291DBC8),
	((NJS_MATERIAL*)0x0291DBDC),
	((NJS_MATERIAL*)0x0291DBF0),
	((NJS_MATERIAL*)0x0291DC04),
	((NJS_MATERIAL*)0x0291DC18),
	((NJS_MATERIAL*)0x0291DC2C),
	((NJS_MATERIAL*)0x0291DC40),
	((NJS_MATERIAL*)0x0291DC54),
	((NJS_MATERIAL*)0x0291DC68),
	((NJS_MATERIAL*)0x0291DC7C),
	((NJS_MATERIAL*)0x0291DC90),
	((NJS_MATERIAL*)0x0291DCA4),
	((NJS_MATERIAL*)0x0291DCB8),
	((NJS_MATERIAL*)0x0291DCCC),
	((NJS_MATERIAL*)0x0291DCE0),
	((NJS_MATERIAL*)0x0291DCF4),
	((NJS_MATERIAL*)0x0291DD08),
	((NJS_MATERIAL*)0x0291C540),
	((NJS_MATERIAL*)0x0291C554),
	((NJS_MATERIAL*)0x0291C568),
	((NJS_MATERIAL*)0x0291C57C),
	((NJS_MATERIAL*)0x0291C590),
	((NJS_MATERIAL*)0x0291C5A4),
	((NJS_MATERIAL*)0x0291C5B8),
	((NJS_MATERIAL*)0x0291C5CC),
	((NJS_MATERIAL*)0x0291C5E0),
	((NJS_MATERIAL*)0x0291C5F4),
	((NJS_MATERIAL*)0x0291C608),
	((NJS_MATERIAL*)0x0291C61C),
	((NJS_MATERIAL*)0x0291C630),
	((NJS_MATERIAL*)0x0291C644),
	((NJS_MATERIAL*)0x0291C658),
	((NJS_MATERIAL*)0x0291C66C),
	((NJS_MATERIAL*)0x0291C680),
	((NJS_MATERIAL*)0x0291C694),
	((NJS_MATERIAL*)0x0291C6A8),
	((NJS_MATERIAL*)0x0291C6BC),
	((NJS_MATERIAL*)0x0291C6D0),
	((NJS_MATERIAL*)0x0291C6E4),
	((NJS_MATERIAL*)0x0291C6F8),
	((NJS_MATERIAL*)0x0291C70C),
	((NJS_MATERIAL*)0x0291C720),
	((NJS_MATERIAL*)0x0291C734),
	((NJS_MATERIAL*)0x0291C748),
	((NJS_MATERIAL*)0x0291C75C),
	((NJS_MATERIAL*)0x0291C770),
	((NJS_MATERIAL*)0x0291C784),
	((NJS_MATERIAL*)0x0291C798),
	((NJS_MATERIAL*)0x0291D088),
	((NJS_MATERIAL*)0x0291D09C),
	((NJS_MATERIAL*)0x0291D0B0),
	((NJS_MATERIAL*)0x0291D0C4),
	((NJS_MATERIAL*)0x0291D0D8),
	((NJS_MATERIAL*)0x0291D0EC),
	((NJS_MATERIAL*)0x0291D100),
	((NJS_MATERIAL*)0x0291D114),
	((NJS_MATERIAL*)0x0291D128),
	((NJS_MATERIAL*)0x0291D13C),
	((NJS_MATERIAL*)0x0291D150),
	((NJS_MATERIAL*)0x0291D164),
	((NJS_MATERIAL*)0x0291D178),
	((NJS_MATERIAL*)0x0291D18C),
	((NJS_MATERIAL*)0x0291D1A0),
	((NJS_MATERIAL*)0x0291D1B4),
	((NJS_MATERIAL*)0x0291D1C8),
	((NJS_MATERIAL*)0x0291D1DC),
	((NJS_MATERIAL*)0x0291D1F0),
	((NJS_MATERIAL*)0x0291D204),
	((NJS_MATERIAL*)0x0291D218),
	((NJS_MATERIAL*)0x0291D22C),
	((NJS_MATERIAL*)0x0291D240),
	((NJS_MATERIAL*)0x0291D254),
	((NJS_MATERIAL*)0x0291D268),
	((NJS_MATERIAL*)0x0291D27C),
	((NJS_MATERIAL*)0x0291D290),
	((NJS_MATERIAL*)0x0291D2A4),
	((NJS_MATERIAL*)0x0291D2B8),
	((NJS_MATERIAL*)0x0291D2CC),
	((NJS_MATERIAL*)0x0291D2E0),
	((NJS_MATERIAL*)0x0290BDF8),
	((NJS_MATERIAL*)0x0290BE0C),
	// Tornado 1 hit Sonic shoes
	((NJS_MATERIAL*)0x02916B10),
	((NJS_MATERIAL*)0x02916504),
	((NJS_MATERIAL*)0x02916518),
	((NJS_MATERIAL*)0x02917F68),
	((NJS_MATERIAL*)0x0291796C),
	((NJS_MATERIAL*)0x02917980),
	// Tornado model 2
	((NJS_MATERIAL*)0x027E8AA0),
	((NJS_MATERIAL*)0x027E8AB4),
	((NJS_MATERIAL*)0x027E8AC8),
	((NJS_MATERIAL*)0x027E8ADC),
	((NJS_MATERIAL*)0x027E8AF0),
	((NJS_MATERIAL*)0x027E8B04),
	((NJS_MATERIAL*)0x027E8B18),
	((NJS_MATERIAL*)0x027E8B2C),
	((NJS_MATERIAL*)0x027E8B40),
	((NJS_MATERIAL*)0x027E8B54),
	((NJS_MATERIAL*)0x027E8B68),
	((NJS_MATERIAL*)0x027E8B7C),
	((NJS_MATERIAL*)0x027E8B90),
	((NJS_MATERIAL*)0x027E8BA4),
	((NJS_MATERIAL*)0x027E8BB8),
	((NJS_MATERIAL*)0x027E8BCC),
	((NJS_MATERIAL*)0x027E8BE0),
	((NJS_MATERIAL*)0x027E8BF4),
	((NJS_MATERIAL*)0x027E8C08),
	((NJS_MATERIAL*)0x027E8C1C),
	((NJS_MATERIAL*)0x027E8C30),
	((NJS_MATERIAL*)0x027E8C44),
	((NJS_MATERIAL*)0x027E8C58),
	((NJS_MATERIAL*)0x027E82D8),
	((NJS_MATERIAL*)0x027E82EC),
	((NJS_MATERIAL*)0x027D793C),
	((NJS_MATERIAL*)0x027D7950),
	((NJS_MATERIAL*)0x027D7964),
	((NJS_MATERIAL*)0x027D8038),
	((NJS_MATERIAL*)0x027D804C),
	((NJS_MATERIAL*)0x027D8060),
	((NJS_MATERIAL*)0x027D8074),
	((NJS_MATERIAL*)0x027D8088),
	((NJS_MATERIAL*)0x027D809C),
	((NJS_MATERIAL*)0x027D80B0),
	((NJS_MATERIAL*)0x027D80C4),
	// Tornado 2 transformed
	((NJS_MATERIAL*)0x027F8CB8),
	((NJS_MATERIAL*)0x027F8CCC),
	((NJS_MATERIAL*)0x027F8CE0),
	((NJS_MATERIAL*)0x027F8CF4),
	((NJS_MATERIAL*)0x02809E78),
	((NJS_MATERIAL*)0x02809E8C),
	((NJS_MATERIAL*)0x02809EA0),
	((NJS_MATERIAL*)0x02809EB4),
	((NJS_MATERIAL*)0x02809EC8),
	((NJS_MATERIAL*)0x02809EDC),
	((NJS_MATERIAL*)0x02809EF0),
	((NJS_MATERIAL*)0x02809F04),
	((NJS_MATERIAL*)0x02809F18),
	((NJS_MATERIAL*)0x02809F2C),
	((NJS_MATERIAL*)0x02809F40),
	((NJS_MATERIAL*)0x02809F54),
	((NJS_MATERIAL*)0x02809F68),
	((NJS_MATERIAL*)0x02809F7C),
	((NJS_MATERIAL*)0x02809F90),
	((NJS_MATERIAL*)0x02809FA4),
	((NJS_MATERIAL*)0x02809FB8),
	((NJS_MATERIAL*)0x02809FCC),
	((NJS_MATERIAL*)0x028097A0),
	((NJS_MATERIAL*)0x028097B4),
	((NJS_MATERIAL*)0x028097C8),
	((NJS_MATERIAL*)0x028097DC),
	((NJS_MATERIAL*)0x028092C0),
};

void FixSky1(NJS_OBJECT* a1, float scale)
{
	if (CurrentLevel == LevelIDs_SkyChase1 && SkyChaseActionThing == 5) njTranslate(0, 0, 2000.0f, 0);
	if (CurrentLevel == LevelIDs_SkyChase1)
	{
		DrawQueueDepthBias = -46000.0f;
		DrawObjectClipEx(a1, (QueuedModelFlagsB)0, scale);
	}
	else
	{
		DrawQueueDepthBias = -40000.0f;
		DrawObjectClipEx(a1, (QueuedModelFlagsB)0, scale);
	}
	DrawQueueDepthBias = 0;
}

void FixSky2(NJS_OBJECT* a1, float scale)
{
	if (CurrentLevel == LevelIDs_SkyChase1)
	{
		DrawQueueDepthBias = -44000.0f;
		DrawObjectClipEx(a1, (QueuedModelFlagsB)0, scale);
	}
	else
	{
		DrawQueueDepthBias = -25000.0f;
		DrawObjectClipEx(a1, (QueuedModelFlagsB)0, scale);
	}
	DrawQueueDepthBias = 0;
}

void DrawSkyChaseSkybox(NJS_OBJECT* a1, float scale)
{
	DrawQueueDepthBias = -40000.0f;
	DrawObjectClipEx(a1, QueuedModelFlagsB_EnableZWrite, scale);
	DrawQueueDepthBias = 0;
}

void UnloadLevelFiles_MINICART()
{
	delete MINICART_0_Info;
	delete MINICART_1_Info;
	delete MINICART_2_Info;
	delete MINICART_3_Info;
	delete MINICART_4_Info;
	delete MINICART_5_Info;
	MINICART_0_Info = nullptr;
	MINICART_1_Info = nullptr;
	MINICART_2_Info = nullptr;
	MINICART_3_Info = nullptr;
	MINICART_4_Info = nullptr;
	MINICART_5_Info = nullptr;
}

void UnloadLevelFiles_SBOARD()
{
	delete SBOARD_Info;
	SBOARD_Info = nullptr;
}

void AddObjectWhiteDiffuseMaterials_Range(NJS_OBJECT* object, int first, int last)
{
	if (object->basicdxmodel)
	{
		for (int j = first; j < last + 1; j++)
		{
			//PrintDebug("Adding %d\n", j);
			AddWhiteDiffuseMaterial(&object->basicdxmodel->mats[j]);
		}
	}
}

void DrawBeam_Lol(float frame)
{
	Direct3D_SetZFunc(7u);
	Direct3D_EnableZWrite(0);
	njAction((NJS_ACTION*)0x28E596C, frame);
	Direct3D_EnableZWrite(1);
	Direct3D_ResetZFunc();
}

void __cdecl SkyChaseBeam1_Display_Fix(ObjectMaster *a1)
{
	EntityData1 *v1; // esi
	v1 = a1->Data1;
	//PrintDebug("Action: %f\n", *(float *)&v1->CharIndex);
	njPushMatrix(0);
	njTranslate(0, 0.0, 0.0, 0.0);
	njSetTexture(&SHOOTING0_TEXLIST);
	njAction((NJS_ACTION*)0x290A414, *(Float *)&v1->CharIndex);
	late_ActionEx((NJS_ACTION*)0x2985984, *(float *)&v1->CharIndex, 4);
	njPopMatrix(1u);
	njPushMatrix(0);
	njTranslate(0, 0.0, 0.0, 0.0);
	njSetTexture(&SHOOTING1_TEXLIST);
	// Draw normally after the camera angle changes, but before that just draw on top of everything
	if (*(float *)&v1->CharIndex >= 440.0f) late_ActionClipEx((NJS_ACTION*)0x28E596C, *(float *)& v1->CharIndex, 4, 1.0);
	else DrawModelCallback_QueueFloat(DrawBeam_Lol, *(float *)&v1->CharIndex, 30000.0f, QueuedModelFlagsB_SomeTextureThing);
	njPopMatrix(1u);
	njPushMatrix(0);
	njTranslate(0, 0.0, -648.09998, -3698.0);
	njSetTexture(&SHOOTING0_TEXLIST);
	late_ActionClipEx((NJS_ACTION*)0x290761C, *(float *)&v1->CharIndex, 4, 1.0);
	njPopMatrix(1u);
}

void HedgehogHammer_Init()
{
	STG00_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG00\\0.sa1lvl"));
	LandTable* STG00_0 = STG00_0_Info->getlandtable();
	RemoveMaterialColors_Landtable(STG00_0);
	STG00_0->TexList = &texlist_hhammer;
	WriteData((LandTable**)0x97DA08, STG00_0);
	// No models to load here but using the same pattern for the sake of consistency
	if (!ModelsLoaded_STG00)
	{
		for (int i = 0; i < 3; i++)
		{
			FogData_HedgehogHammer[i].Distance = 16000.0f;
			FogData_HedgehogHammer[i].Layer = 5000.0f;
		}
		ModelsLoaded_STG00 = true;
	}
}

void SkyChase_Init()
{
	// This stuff is done only once
	if (!ModelsLoaded_SHOOTING)
	{
		// Other Sky Chase fixes
		RemoveVertexColors_Object((NJS_OBJECT*)0x293A1BC); // Rocket
		RemoveVertexColors_Object((NJS_OBJECT*)0x299734C); // Hodai rocket
		RemoveVertexColors_Object((NJS_OBJECT*)0x298B938); // Arm
		RemoveVertexColors_Object((NJS_OBJECT*)0x293D95C); // Renzako
		RemoveVertexColors_Object((NJS_OBJECT*)0x2947130); // Zako1 1
		RemoveVertexColors_Object((NJS_OBJECT*)0x294457C); // Zako1 2
		RemoveVertexColors_Object((NJS_OBJECT*)0x028DFD34); // Sky materials in Act 1
		RemoveVertexColors_Object((NJS_OBJECT*)0x028175F4); // Sky materials in Act 1
		SkyboxScale_SkyChase1->Far.x = 4.0f;
		SkyboxScale_SkyChase1->Far.y = 4.0f;
		SkyboxScale_SkyChase1->Far.z = 4.0f;
		SkyboxScale_SkyChase1->Near.x = 4.0f;
		SkyboxScale_SkyChase1->Near.y = 4.0f;
		SkyboxScale_SkyChase1->Near.z = 4.0f;
		SkyboxScale_SkyChase1->Normal.x = 4.0f;
		SkyboxScale_SkyChase1->Normal.y = 4.0f;
		SkyboxScale_SkyChase1->Normal.z = 4.0f;
		WriteCall((void*)0x0062BF35, FixSky1); // Sky piece 1 (act 1)
		((NJS_OBJECT*)0x28DFD34)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_USE_ALPHA;
		((NJS_OBJECT*)0x28175F4)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_USE_ALPHA;
		WriteCall((void*)0x0062C01D, FixSky2); // Sky piece 2 (act 1)
		WriteCall((void*)0x0062C161, DrawSkyChaseSkybox); // Skybox rendering function for both acts
		// Tornado hit specular
		((NJS_OBJECT*)0x02916F9C)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x02916ADC)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x02918404)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x02917F34)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		WriteData((char*)0x0062751B, 0x00, 1); // Force Tornado light type
		WriteData((char*)0x0062AC1F, 0x00, 1); // Force Tornado light type (transformation cutscene)
		if (EnableSkyChaseEnemyModels)
		{
			// Egg Carrier model
			NJS_OBJECT* EggCarrierModel = LoadModel("system\\data\\SHOOTING\\Models\\0003FA40.sa1mdl");
			*(NJS_OBJECT*)0x02982F44 = *EggCarrierModel;
			// Oh gee... This is gonna be long
			AddObjectWhiteDiffuseMaterials_Range(EggCarrierModel->child->sibling->sibling->sibling, 75, 102);
			AddObjectWhiteDiffuseMaterials_Range(EggCarrierModel->child->sibling->sibling->sibling->sibling, 19, 96);
			AddObjectWhiteDiffuseMaterials_Range(EggCarrierModel->child->sibling->sibling->sibling->sibling->sibling, 37, 105);
			AddObjectWhiteDiffuseMaterials_Range(EggCarrierModel->child->sibling->sibling->sibling->sibling->sibling->sibling, 33, 102);
			ForceLevelSpecular_Object(EggCarrierModel->child->sibling->sibling->sibling, false);
			ForceLevelSpecular_Object(EggCarrierModel->child->sibling->sibling->sibling->sibling->sibling->sibling->sibling, false);
			ForceLevelSpecular_Object(EggCarrierModel->child->sibling->sibling->sibling->sibling->sibling->sibling->sibling->sibling, false);
			// Other objects
			*(NJS_OBJECT*)0x298A894 = *LoadModel("system\\data\\SHOOTING\\Models\\00047110.sa1mdl"); // Hodai
			*(NJS_OBJECT*)0x2941B2C = *LoadModel("system\\data\\SHOOTING\\Models\\0001342C.sa1mdl"); // Kirai
			*(NJS_OBJECT*)0x028E2C88 = *LoadModel("system\\data\\SHOOTING\\Models\\0009153C.sa1mdl"); // Beam in Act 1
			*(NJS_OBJECT*)0x0298E7D0 = *LoadModel("system\\data\\SHOOTING\\Models\\0004AEE0.sa1mdl"); // Beam in Act 2
			((NJS_ACTION*)0x28E596C)->object = (NJS_OBJECT*)0x028E2C88; // Beam in Act 1
			((NJS_ACTION*)0x2996C74)->object = (NJS_OBJECT*)0x0298E7D0; // Beam in Act 2
			WriteJump((void*)0x62A8C0, SkyChaseBeam1_Display_Fix); // Make the beam in Act 1 render above the clouds
			// Lighting
			if (DLLLoaded_Lantern)
			{
				material_register(ObjectBaseAndSpecular_Subgames, LengthOfArray(ObjectBaseAndSpecular_Subgames), &ForceDiffuse0Specular1);
				material_register(LevelSpecular_Subgames, LengthOfArray(LevelSpecular_Subgames), &ForceDiffuse0Specular0);
			}
		}
		for (int i = 0; i < 3; i++)
		{
			if (EnableSkyChaseFixes) DrawDist_SkyChase1[i].Maximum = -60000.0f;
		}
		ModelsLoaded_SHOOTING = true;
	}
}

void TwinkleCircuit_Init()
{
	MINICART_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\MINICART\\0.sa1lvl"));
	MINICART_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\MINICART\\1.sa1lvl"));
	MINICART_2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\MINICART\\2.sa1lvl"));
	MINICART_3_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\MINICART\\3.sa1lvl"));
	MINICART_4_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\MINICART\\4.sa1lvl"));
	MINICART_5_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\MINICART\\5.sa1lvl"));
	LandTable* MINICART_0 = MINICART_0_Info->getlandtable();
	LandTable* MINICART_1 = MINICART_1_Info->getlandtable();
	LandTable* MINICART_2 = MINICART_2_Info->getlandtable();
	LandTable* MINICART_3 = MINICART_3_Info->getlandtable();
	LandTable* MINICART_4 = MINICART_4_Info->getlandtable();
	LandTable* MINICART_5 = MINICART_5_Info->getlandtable();
	RemoveMaterialColors_Landtable(MINICART_0);
	RemoveMaterialColors_Landtable(MINICART_1);
	RemoveMaterialColors_Landtable(MINICART_2);
	RemoveMaterialColors_Landtable(MINICART_3);
	RemoveMaterialColors_Landtable(MINICART_4);
	RemoveMaterialColors_Landtable(MINICART_5);
	MINICART_0->TexList = &texlist_minicart01;
	MINICART_1->TexList = &texlist_minicart02;
	MINICART_2->TexList = &texlist_minicart03;
	MINICART_3->TexList = &texlist_minicart04;
	MINICART_4->TexList = &texlist_minicart05;
	MINICART_5->TexList = &texlist_minicart06;
	LandTableArray[160] = MINICART_0;
	LandTableArray[161] = MINICART_1;
	LandTableArray[162] = MINICART_2;
	LandTableArray[163] = MINICART_3;
	LandTableArray[164] = MINICART_4;
	LandTableArray[165] = MINICART_5;
	if (!ModelsLoaded_MINICART)
	{
		if (DLLLoaded_Lantern)
		{
			material_register(WhiteDiffuse_Subgames, LengthOfArray(WhiteDiffuse_Subgames), &ForceWhiteDiffuse);
		}
		ModelsLoaded_MINICART = true;
	}
	if (!ModelsLoaded_ShareObj) ShareObj_Init();
}

void SandHill_Init()
{
	// This stuff is done every time the function is called
	SBOARD_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\SBOARD\\0.sa1lvl"));
	LandTable* SBOARD = SBOARD_Info->getlandtable();
	RemoveMaterialColors_Landtable(SBOARD);
	SBOARD->TexList = &texlist_sandhill;
	LandTableArray[184] = SBOARD; // Sand Hill
	LandTableArray[185] = SBOARD; // Sand Hill duplicate
	// This stuff is done only once
	if (!ModelsLoaded_SBOARD)
	{
		// Models
		*(NJS_OBJECT*)0x017424DC = *LoadModel("system\\data\\SBOARD\\Models\\0006EA40.sa1mdl"); // Sand Hill ramp
		// Clear material colors
		RemoveVertexColors_Object((NJS_OBJECT*)0x1741A9C); // RockyHead
		RemoveVertexColors_Object((NJS_OBJECT*)0x174DED0); // Rock
		RemoveVertexColors_Object((NJS_OBJECT*)0x174D76C); // SnakeStatue
		RemoveVertexColors_Object((NJS_OBJECT*)0x174E974); // PillarS
		RemoveVertexColors_Object((NJS_OBJECT*)0x174C148); // PillarM
		RemoveVertexColors_Object((NJS_OBJECT*)0x174AF94); // PillarL
		RemoveVertexColors_Object((NJS_OBJECT*)0x174EAC8); // BigCactusA
		RemoveVertexColors_Object((NJS_OBJECT*)0x1744D24); // BigCactusB
		RemoveVertexColors_Object((NJS_OBJECT*)0x1745A38); // BigCactusC
		RemoveVertexColors_Object((NJS_OBJECT*)0x1749E44); // Sand worm tail
		RemoveVertexColors_Object((NJS_OBJECT*)0x17499DC); // Sand worm body
		RemoveVertexColors_Object((NJS_OBJECT*)0x17495AC); // Sand worm head
		// Fog color
		for (int i = 0; i < 3; i++)
		{
			FogData_SandHill[i].Color = 0xFFE0E0B0;
			FogData_SandHill[i].Layer = 800.0f;
			FogData_SandHill[i].Distance = 10000.0f;
		}
		ModelsLoaded_SBOARD = true;
	}
}