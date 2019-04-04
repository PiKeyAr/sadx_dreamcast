#include "stdafx.h"
#include "Palm.h"
#include "Past_objects.h"

NJS_TEXNAME textures_past0[60];
NJS_TEXLIST texlist_past00 = { arrayptrandlength(textures_past0) };

NJS_TEXNAME textures_past1[83];
NJS_TEXLIST texlist_past01 = { arrayptrandlength(textures_past1) };

NJS_TEXNAME textures_past2[85];
NJS_TEXLIST texlist_past02 = { arrayptrandlength(textures_past2) };

ModelInfo *PastChaoModel_2_Info = nullptr;
ModelInfo *PastChaoModel_7_Info = nullptr;
ModelInfo *PastChaoModel_8_Info = nullptr;
ModelInfo *PastChaoModel_9_Info = nullptr;
ModelInfo *PastChaoModel_10_Info = nullptr;
NJS_OBJECT *PastChaoModel_2 = nullptr;
NJS_OBJECT *PastChaoModel_7 = nullptr;
NJS_OBJECT *PastChaoModel_8 = nullptr;
NJS_OBJECT *PastChaoModel_9 = nullptr;
NJS_OBJECT *PastChaoModel_10 = nullptr;

FunctionPointer(void, AllocateEventObject, (ObjectMaster *a1, NJS_ACTION *a2, NJS_TEXLIST *a3, float a4, char a5, char a6), 0x42FE00);
FunctionPointer(void, sub_408350, (NJS_ACTION *a1, float a2, int a3, float a4), 0x408350);
FunctionPointer(void, sub_6EEFF0, (NJS_OBJECT *a1), 0x6EEFF0);
FunctionPointer(void, sub_4187D0, (EntityData1 *a1), 0x4187D0);
DataArray(DrawDistance, DrawDist_Past1, 0x0111E540, 3);
DataArray(DrawDistance, DrawDist_Past2, 0x0111E558, 3);
DataArray(DrawDistance, DrawDist_Past3, 0x0111E570, 3);
DataArray(FogData, FogData_Past1, 0x0111E588, 3);
DataArray(FogData, FogData_Past2, 0x0111E5B8, 3);
DataArray(FogData, FogData_Past3, 0x0111E5E8, 3);
DataPointer(void*, dword_3D08844, 0x3D08844);
static int ocean_act1 = 73;
static int ocean_act2 = 59;
static int water_act1 = 59;
static int water_act2 = 59;

NJS_MATERIAL* PatyaMaterials[] = {
	//Pachacamac
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0014714C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00146D38),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00146A0C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00146670),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00146370),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00143998),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x001439AC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x001439C0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x001439D4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x001439E8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x001439FC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00143A10),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00143A24),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00143374),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x001431DC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00143040),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00142884),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00142898),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0014207C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00141DFC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00141BA8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00141834),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00141848),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00141720),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0014160C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x001413B8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0014112C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00141018),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00140F04),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x001406FC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00140478),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x001401F8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013FFCC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013FE54),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013FD40),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013FC2C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013FB18),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013FA04),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013F7B0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013F43C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013F450),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013F328),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013F214),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013EFC0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013ED30),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013EC1C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013EB08),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013E680),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013E694),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013E6A8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013E334),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013E348),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013E134),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013DF00),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013DA78),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013DA8C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013DAA0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013D72C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013D740),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013D52C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013D2F8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013CF6C),
	//Tikal too
	((NJS_MATERIAL*)0x008D4228),
	((NJS_MATERIAL*)0x008D423C),
	((NJS_MATERIAL*)0x008D4250),
	((NJS_MATERIAL*)0x008D4264),
	((NJS_MATERIAL*)0x008D4048),
	((NJS_MATERIAL*)0x008D405C),
	((NJS_MATERIAL*)0x008D3E7C),
	((NJS_MATERIAL*)0x008D39B0),
	((NJS_MATERIAL*)0x008D3700),
	((NJS_MATERIAL*)0x008D3540),
	((NJS_MATERIAL*)0x008D3310),
	((NJS_MATERIAL*)0x008D3168),
	((NJS_MATERIAL*)0x008D2D38),
	((NJS_MATERIAL*)0x008D2A88),
	((NJS_MATERIAL*)0x008D28E0),
	((NJS_MATERIAL*)0x008D26A0),
	((NJS_MATERIAL*)0x008D24F8),
	((NJS_MATERIAL*)0x008D2044),
	((NJS_MATERIAL*)0x008D2058),
	((NJS_MATERIAL*)0x008D206C),
	((NJS_MATERIAL*)0x008D1D08),
	((NJS_MATERIAL*)0x008D1A68),
	((NJS_MATERIAL*)0x008CFB18),
	((NJS_MATERIAL*)0x008CFB2C),
	((NJS_MATERIAL*)0x008CFB40),
	((NJS_MATERIAL*)0x008CFB54),
	((NJS_MATERIAL*)0x008CFB68),
	((NJS_MATERIAL*)0x008CF3B0),
	((NJS_MATERIAL*)0x008CF178),
	((NJS_MATERIAL*)0x008CEF40),
	((NJS_MATERIAL*)0x008CECCC),
	((NJS_MATERIAL*)0x008CE08C),
	((NJS_MATERIAL*)0x008CDE48),
	((NJS_MATERIAL*)0x008CDB48),
	((NJS_MATERIAL*)0x008CD6E8),
	((NJS_MATERIAL*)0x008CD6FC),
	((NJS_MATERIAL*)0x008CD4F4),
	((NJS_MATERIAL*)0x008CD508),
	((NJS_MATERIAL*)0x008CD2E4),
	((NJS_MATERIAL*)0x008CC68C),
	((NJS_MATERIAL*)0x008CC448),
	((NJS_MATERIAL*)0x008CC158),
	((NJS_MATERIAL*)0x008CBD08),
	((NJS_MATERIAL*)0x008CBD1C),
	((NJS_MATERIAL*)0x008CBB14),
	((NJS_MATERIAL*)0x008CBB28),
	((NJS_MATERIAL*)0x008CB918),
	((NJS_MATERIAL*)0x008CB6E8),
	//Tikal in ADV03_ACTIONS
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x001602E0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x001602F4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00160308),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0016031C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x001604B8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x001604CC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00160668),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0016088C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00160BD4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00160E2C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0016108C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0016126C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x001614C4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0016180C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00161A54),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00161CC4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00161EA4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x001623FC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00162410),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00162424),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0016268C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x001628F4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00164858),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0016486C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00164880),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00164894),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x001648A8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00164FD4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x001651DC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x001653E4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0016568C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00166268),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00166548),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0016680C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00166C58),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00166C6C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00166EB4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00166EC8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00167104),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00167C28),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00167F08),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x001681BC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x001685F8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0016860C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00168854),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00168868),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00168A94),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x00168C8C),
	//Event Chao
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013CA54),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013C668),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013C190),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013BCB8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013BB7C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013BA40),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013B6F0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013B184),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013ADEC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013AA54),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013A94C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013A4DC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013A068),
};

NJS_MATERIAL* SecondCharacterSpecular[] = {
	//Chao
	nullptr,nullptr,nullptr,nullptr,nullptr,
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013CA54),
};

NJS_MATERIAL* Past_ObjectSpecular[] = {
	//Tree
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0011F030),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0011F044),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0011E100),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0011E114),
};

NJS_MATERIAL* FirstCharacterSpecular[] = {
	nullptr, nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,
	nullptr, nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,
	nullptr, nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,
	nullptr, nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,
	nullptr, nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,
	//Chao
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013C668),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013C190),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013BCB8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013BB7C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013BA40),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013B6F0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013B184),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013ADEC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013AA54),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013A94C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013A4DC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013A068),
};

void __cdecl Past_OceanDraw_r(OceanData *a1)
{
	if (ADV03_1_Info && CurrentAct == 1)
	{
		if (GameState != 16)
		{
			if (ocean_act1 > 82) ocean_act1 = 73;
			if (water_act1 > 72) water_act1 = 59;
			((NJS_MATERIAL*)ADV03_1_Info->getdata("matlistADV03_0006DBD0"))[0].attr_texId = ocean_act1;
			((NJS_MATERIAL*)ADV03_1_Info->getdata("matlistADV03_00095CF8"))[0].attr_texId = water_act1;
			((NJS_MATERIAL*)ADV03_1_Info->getdata("matlistADV03_000950C4"))[0].attr_texId = water_act1;
			((NJS_MATERIAL*)ADV03_1_Info->getdata("matlistADV03_0009542C"))[0].attr_texId = water_act1;
			if ((FramerateSetting < 2 && FrameCounter % 4 == 0) || (FramerateSetting == 2 && FrameCounter % 2 == 0) || FramerateSetting > 2)
			{
				ocean_act1++;
				water_act1++;
			}
		}
		//Reflections act 1
		njSetTexture(&texlist_past01);
		DrawQueueDepthBias = 1000.0f;
		ProcessModelNode((NJS_OBJECT*)ADV03_1_Info->getdata("objectADV03_0008B2E0Z"), QueuedModelFlagsB_SomeTextureThing, 1.0f);
		DrawQueueDepthBias = 2500.0f;
		ProcessModelNode((NJS_OBJECT*)ADV03_1_Info->getdata("objectADV03_0009609C"), QueuedModelFlagsB_SomeTextureThing, 1.0f);
		DrawQueueDepthBias = 0;
	}
	if (ADV03_2_Info && CurrentAct == 2)
	{
		if (GameState != 16)
		{
			if (water_act2 > 74) water_act2 = 61;
			if (ocean_act2 > 84) ocean_act2 = 75;
			((NJS_MATERIAL*)ADV03_2_Info->getdata("matlistADV03_000C7840"))[0].attr_texId = water_act2;
			((NJS_MATERIAL*)ADV03_2_Info->getdata("matlistADV03_000C6C0C"))[0].attr_texId = water_act2;
			((NJS_MATERIAL*)ADV03_2_Info->getdata("matlistADV03_000C6F74"))[0].attr_texId = water_act2;
			((NJS_MATERIAL*)ADV03_2_Info->getdata("matlistADV03_0009DEBC"))[0].attr_texId = ocean_act2;
			if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2)
			{
				ocean_act2++;
				water_act2++;
			}
		}
		//Reflections act 2
		njSetTexture(&texlist_past02);
		DrawQueueDepthBias = 1000.0f;
		ProcessModelNode((NJS_OBJECT*)ADV03_2_Info->getdata("objectADV03_000BCC28Z"), QueuedModelFlagsB_SomeTextureThing, 1.0f);
		DrawQueueDepthBias = 2500.0f;
		ProcessModelNode((NJS_OBJECT*)ADV03_2_Info->getdata("objectADV03_000C7BE4"), QueuedModelFlagsB_SomeTextureThing, 1.0f);
		DrawQueueDepthBias = 0;
	}
	if (SADXWater_Past) Past_OceanDraw_SADXStyle(a1);
}

void RenderPalm2(NJS_ACTION *a1, float a2, int a3, float a4)
{
	sub_408350(a1, a2, a3, a4);
	DrawQueueDepthBias = -17000.0f;
	ProcessModelNode(&object_00122F30_2, QueuedModelFlagsB_EnableZWrite, 1.0f);
	DrawQueueDepthBias = 0.0f;
}

void RenderPalm1(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	ProcessModelNode_C_VerifyTexList(&object_00125250, a2, a3);
	DrawQueueDepthBias = -17000.0f;
	ProcessModelNode(&object_0012521C_2, QueuedModelFlagsB_EnableZWrite, 1.0f);
	DrawQueueDepthBias = 0.0f;
}

void AllocateEventChao_2(ObjectMaster *a1, NJS_ACTION *a2, NJS_TEXLIST *a3, float a4, char a5, char a6)
{
	NJS_ACTION newaction;
	newaction.motion = a2->motion;
	newaction.object = PastChaoModel_2;
	AllocateEventObject(a1, &newaction, a3, a4, a5, a6);
}

void AllocateEventChao_7(ObjectMaster *a1, NJS_ACTION *a2, NJS_TEXLIST *a3, float a4, char a5, char a6)
{
	NJS_ACTION newaction;
	newaction.motion = a2->motion;
	newaction.object = PastChaoModel_7;
	AllocateEventObject(a1, &newaction, a3, a4, a5, a6);
}

void AllocateEventChao_8(ObjectMaster *a1, NJS_ACTION *a2, NJS_TEXLIST *a3, float a4, char a5, char a6)
{
	NJS_ACTION newaction;
	newaction.motion = a2->motion;
	newaction.object = PastChaoModel_8;
	AllocateEventObject(a1, &newaction, a3, a4, a5, a6);
}

void AllocateEventChao_9(ObjectMaster *a1, NJS_ACTION *a2, NJS_TEXLIST *a3, float a4, char a5, char a6)
{
	NJS_ACTION newaction;
	newaction.motion = a2->motion;
	newaction.object = PastChaoModel_9;
	AllocateEventObject(a1, &newaction, a3, a4, a5, a6);
}

void AllocateEventChao_10(ObjectMaster *a1, NJS_ACTION *a2, NJS_TEXLIST *a3, float a4, char a5, char a6)
{
	NJS_ACTION newaction;
	newaction.motion = a2->motion;
	newaction.object = PastChaoModel_10;
	AllocateEventObject(a1, &newaction, a3, a4, a5, a6);
}

void LoadLevelFiles_ADV03()
{
	CheckAndUnloadLevelFiles();
	PastChaoModel_2_Info = new ModelInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV03\\Models\\Chao.sa1mdl"));
	PastChaoModel_7_Info = new ModelInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV03\\Models\\Chao.sa1mdl"));
	PastChaoModel_8_Info = new ModelInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV03\\Models\\Chao.sa1mdl"));
	PastChaoModel_9_Info = new ModelInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV03\\Models\\Chao.sa1mdl"));
	PastChaoModel_10_Info = new ModelInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV03\\Models\\Chao.sa1mdl"));
	PastChaoModel_2 = (NJS_OBJECT*)PastChaoModel_2_Info->getmodel();
	PastChaoModel_7 = (NJS_OBJECT*)PastChaoModel_7_Info->getmodel();
	PastChaoModel_8 = (NJS_OBJECT*)PastChaoModel_8_Info->getmodel();
	PastChaoModel_9 = (NJS_OBJECT*)PastChaoModel_9_Info->getmodel();
	PastChaoModel_10 = (NJS_OBJECT*)PastChaoModel_10_Info->getmodel();
	PastChaoModel_7->child->sibling->child->sibling->sibling->sibling->sibling->sibling->child->basicdxmodel->mats[0].attr_texId = 7;
	PastChaoModel_7->child->sibling->child->sibling->sibling->sibling->sibling->sibling->child->sibling->basicdxmodel->mats[0].attr_texId = 7;
	PastChaoModel_8->child->sibling->child->sibling->sibling->sibling->sibling->sibling->child->basicdxmodel->mats[0].attr_texId = 8;
	PastChaoModel_8->child->sibling->child->sibling->sibling->sibling->sibling->sibling->child->sibling->basicdxmodel->mats[0].attr_texId = 8;
	PastChaoModel_9->child->sibling->child->sibling->sibling->sibling->sibling->sibling->child->basicdxmodel->mats[0].attr_texId = 9;
	PastChaoModel_9->child->sibling->child->sibling->sibling->sibling->sibling->sibling->child->sibling->basicdxmodel->mats[0].attr_texId = 9;
	PastChaoModel_10->child->sibling->child->sibling->sibling->sibling->sibling->sibling->child->basicdxmodel->mats[0].attr_texId = 10;
	PastChaoModel_10->child->sibling->child->sibling->sibling->sibling->sibling->sibling->child->sibling->basicdxmodel->mats[0].attr_texId = 10;
	ADV03_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV03\\0.sa1lvl"));
	ADV03_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV03\\1.sa1lvl"));
	ADV03_2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV03\\2.sa1lvl"));
	LandTable *ADV03_0 = ADV03_0_Info->getlandtable();
	LandTable *ADV03_1 = ADV03_1_Info->getlandtable();
	LandTable *ADV03_2 = ADV03_2_Info->getlandtable();
	ADV03_0->TexList = &texlist_past00;
	ADV03_1->TexList = &texlist_past01;
	ADV03_2->TexList = &texlist_past02;
	LandTableArray[152] = ADV03_0;
	LandTableArray[153] = ADV03_1;
	LandTableArray[154] = ADV03_2;
	___LANDTABLEPAST[0] = ADV03_0;
	___LANDTABLEPAST[1] = ADV03_1;
	___LANDTABLEPAST[2] = ADV03_2;
	___ADV03PAST01_OBJECTS[213] = (NJS_OBJECT*)ADV03_1_Info->getdata("objectADV03_00095CC4");
	___ADV03PAST02_OBJECTS[212] = (NJS_OBJECT*)ADV03_2_Info->getdata("objectADV03_000C7BE4");
	___ADV03PAST02_OBJECTS[209] = (NJS_OBJECT*)ADV03_2_Info->getdata("objectADV03_000C6F40");
	___ADV03PAST02_OBJECTS[210] = (NJS_OBJECT*)ADV03_2_Info->getdata("objectADV03_000C71B4");
	___ADV03PAST02_OBJECTS[211] = (NJS_OBJECT*)ADV03_2_Info->getdata("objectADV03_000FB49C");
	if (SADXWater_Past)
	{
		ADV03_1->Col[0].Flags = 0x00000020;
		ADV03_2->Col[0].Flags = 0x00000020;
	}
	else
	{
		ADV03_1->Col[0].Flags = 0x80000020;
		ADV03_2->Col[0].Flags = 0x80000020;
	}
	if (DLLLoaded_Lantern)
	{
		SecondCharacterSpecular[0] = &((NJS_MATERIAL*)PastChaoModel_2_Info->getdata("matlist_000DD7A8"))[0];
		SecondCharacterSpecular[1] = &((NJS_MATERIAL*)PastChaoModel_7_Info->getdata("matlist_000DD7A8"))[0];
		SecondCharacterSpecular[2] = &((NJS_MATERIAL*)PastChaoModel_8_Info->getdata("matlist_000DD7A8"))[0];
		SecondCharacterSpecular[3] = &((NJS_MATERIAL*)PastChaoModel_9_Info->getdata("matlist_000DD7A8"))[0];
		SecondCharacterSpecular[4] = &((NJS_MATERIAL*)PastChaoModel_10_Info->getdata("matlist_000DD7A8"))[0];
		for (unsigned int i = 0; i < LengthOfArray(SecondCharacterSpecular); i++)
		{
			RemoveMaterialColors(SecondCharacterSpecular[i]);
		}
		material_register_ptr(SecondCharacterSpecular, LengthOfArray(SecondCharacterSpecular), &ForceDiffuse2Specular3);
		FirstCharacterSpecular[0] = &((NJS_MATERIAL*)PastChaoModel_7_Info->getdata("matlist_000DB2C4"))[0];
		FirstCharacterSpecular[1] = &((NJS_MATERIAL*)PastChaoModel_7_Info->getdata("matlist_000DB720"))[0];
		FirstCharacterSpecular[2] = &((NJS_MATERIAL*)PastChaoModel_7_Info->getdata("matlist_000DB820"))[0];
		FirstCharacterSpecular[3] = &((NJS_MATERIAL*)PastChaoModel_7_Info->getdata("matlist_000DBBA8"))[0];
		FirstCharacterSpecular[4] = &((NJS_MATERIAL*)PastChaoModel_7_Info->getdata("matlist_000DBF30"))[0];
		FirstCharacterSpecular[5] = &((NJS_MATERIAL*)PastChaoModel_7_Info->getdata("matlist_000DC48C"))[0];
		FirstCharacterSpecular[6] = &((NJS_MATERIAL*)PastChaoModel_7_Info->getdata("matlist_000DC7CC"))[0];
		FirstCharacterSpecular[7] = &((NJS_MATERIAL*)PastChaoModel_7_Info->getdata("matlist_000DC900"))[0];
		FirstCharacterSpecular[8] = &((NJS_MATERIAL*)PastChaoModel_7_Info->getdata("matlist_000DCA34"))[0];
		FirstCharacterSpecular[9] = &((NJS_MATERIAL*)PastChaoModel_7_Info->getdata("matlist_000DCF00"))[0];
		FirstCharacterSpecular[10] = &((NJS_MATERIAL*)PastChaoModel_7_Info->getdata("matlist_000DD3CC"))[0];
		FirstCharacterSpecular[11] = &((NJS_MATERIAL*)PastChaoModel_7_Info->getdata("matlist_000DD7A8"))[0];
		FirstCharacterSpecular[12] = &((NJS_MATERIAL*)PastChaoModel_10_Info->getdata("matlist_000DB2C4"))[0];
		FirstCharacterSpecular[13] = &((NJS_MATERIAL*)PastChaoModel_10_Info->getdata("matlist_000DB720"))[0];
		FirstCharacterSpecular[14] = &((NJS_MATERIAL*)PastChaoModel_10_Info->getdata("matlist_000DB820"))[0];
		FirstCharacterSpecular[15] = &((NJS_MATERIAL*)PastChaoModel_10_Info->getdata("matlist_000DBBA8"))[0];
		FirstCharacterSpecular[16] = &((NJS_MATERIAL*)PastChaoModel_10_Info->getdata("matlist_000DBF30"))[0];
		FirstCharacterSpecular[17] = &((NJS_MATERIAL*)PastChaoModel_10_Info->getdata("matlist_000DC48C"))[0];
		FirstCharacterSpecular[18] = &((NJS_MATERIAL*)PastChaoModel_10_Info->getdata("matlist_000DC7CC"))[0];
		FirstCharacterSpecular[19] = &((NJS_MATERIAL*)PastChaoModel_10_Info->getdata("matlist_000DC900"))[0];
		FirstCharacterSpecular[20] = &((NJS_MATERIAL*)PastChaoModel_10_Info->getdata("matlist_000DCA34"))[0];
		FirstCharacterSpecular[21] = &((NJS_MATERIAL*)PastChaoModel_10_Info->getdata("matlist_000DCF00"))[0];
		FirstCharacterSpecular[22] = &((NJS_MATERIAL*)PastChaoModel_10_Info->getdata("matlist_000DD3CC"))[0];
		FirstCharacterSpecular[23] = &((NJS_MATERIAL*)PastChaoModel_10_Info->getdata("matlist_000DD7A8"))[0];
		FirstCharacterSpecular[24] = &((NJS_MATERIAL*)PastChaoModel_9_Info->getdata("matlist_000DB2C4"))[0];
		FirstCharacterSpecular[25] = &((NJS_MATERIAL*)PastChaoModel_9_Info->getdata("matlist_000DB720"))[0];
		FirstCharacterSpecular[26] = &((NJS_MATERIAL*)PastChaoModel_9_Info->getdata("matlist_000DB820"))[0];
		FirstCharacterSpecular[27] = &((NJS_MATERIAL*)PastChaoModel_9_Info->getdata("matlist_000DBBA8"))[0];
		FirstCharacterSpecular[28] = &((NJS_MATERIAL*)PastChaoModel_9_Info->getdata("matlist_000DBF30"))[0];
		FirstCharacterSpecular[29] = &((NJS_MATERIAL*)PastChaoModel_9_Info->getdata("matlist_000DC48C"))[0];
		FirstCharacterSpecular[30] = &((NJS_MATERIAL*)PastChaoModel_9_Info->getdata("matlist_000DC7CC"))[0];
		FirstCharacterSpecular[31] = &((NJS_MATERIAL*)PastChaoModel_9_Info->getdata("matlist_000DC900"))[0];
		FirstCharacterSpecular[32] = &((NJS_MATERIAL*)PastChaoModel_9_Info->getdata("matlist_000DCA34"))[0];
		FirstCharacterSpecular[33] = &((NJS_MATERIAL*)PastChaoModel_9_Info->getdata("matlist_000DCF00"))[0];
		FirstCharacterSpecular[34] = &((NJS_MATERIAL*)PastChaoModel_9_Info->getdata("matlist_000DD3CC"))[0];
		FirstCharacterSpecular[35] = &((NJS_MATERIAL*)PastChaoModel_9_Info->getdata("matlist_000DD7A8"))[0];
		FirstCharacterSpecular[36] = &((NJS_MATERIAL*)PastChaoModel_8_Info->getdata("matlist_000DB2C4"))[0];
		FirstCharacterSpecular[37] = &((NJS_MATERIAL*)PastChaoModel_8_Info->getdata("matlist_000DB720"))[0];
		FirstCharacterSpecular[38] = &((NJS_MATERIAL*)PastChaoModel_8_Info->getdata("matlist_000DB820"))[0];
		FirstCharacterSpecular[39] = &((NJS_MATERIAL*)PastChaoModel_8_Info->getdata("matlist_000DBBA8"))[0];
		FirstCharacterSpecular[40] = &((NJS_MATERIAL*)PastChaoModel_8_Info->getdata("matlist_000DBF30"))[0];
		FirstCharacterSpecular[41] = &((NJS_MATERIAL*)PastChaoModel_8_Info->getdata("matlist_000DC48C"))[0];
		FirstCharacterSpecular[42] = &((NJS_MATERIAL*)PastChaoModel_8_Info->getdata("matlist_000DC7CC"))[0];
		FirstCharacterSpecular[43] = &((NJS_MATERIAL*)PastChaoModel_8_Info->getdata("matlist_000DC900"))[0];
		FirstCharacterSpecular[44] = &((NJS_MATERIAL*)PastChaoModel_8_Info->getdata("matlist_000DCA34"))[0];
		FirstCharacterSpecular[45] = &((NJS_MATERIAL*)PastChaoModel_8_Info->getdata("matlist_000DCF00"))[0];
		FirstCharacterSpecular[46] = &((NJS_MATERIAL*)PastChaoModel_8_Info->getdata("matlist_000DD3CC"))[0];
		FirstCharacterSpecular[47] = &((NJS_MATERIAL*)PastChaoModel_8_Info->getdata("matlist_000DD7A8"))[0];
		for (unsigned int i = 0; i < LengthOfArray(FirstCharacterSpecular); i++)
		{
			RemoveMaterialColors(FirstCharacterSpecular[i]);
		}
		material_register_ptr(FirstCharacterSpecular, LengthOfArray(FirstCharacterSpecular), &ForceDiffuse2Specular2);
	}
}

void UnloadLevelFiles_ADV03()
{
	if (DLLLoaded_Lantern)
	{
		material_unregister_ptr(FirstCharacterSpecular, LengthOfArray(FirstCharacterSpecular), &ForceDiffuse2Specular2);
		material_unregister_ptr(SecondCharacterSpecular, LengthOfArray(SecondCharacterSpecular), &ForceDiffuse2Specular3);
	}
	delete ADV03_0_Info;
	delete ADV03_1_Info;
	delete ADV03_2_Info;
	ADV03_0_Info = nullptr;
	ADV03_1_Info = nullptr;
	ADV03_2_Info = nullptr;
	delete PastChaoModel_2_Info;
	delete PastChaoModel_7_Info;
	delete PastChaoModel_8_Info;
	delete PastChaoModel_9_Info;
	delete PastChaoModel_10_Info;
	PastChaoModel_2_Info = nullptr;
	PastChaoModel_7_Info = nullptr;
	PastChaoModel_8_Info = nullptr;
	PastChaoModel_9_Info = nullptr;
	PastChaoModel_10_Info = nullptr;
}

void ADV03_Init()
{
	ReplaceBIN_DC("CAMPAST00S");
	ReplaceBIN_DC("CAMPAST01S");
	ReplaceBIN_DC("CAMPAST02S");
	ReplaceBIN_DC("SETPAST00S");
	ReplaceBIN_DC("SETPAST01S");
	ReplaceBIN_DC("SETPAST02S");
	ReplacePVM("EFF_PAST");
	ReplacePVM("EV_ALIFE");
	ReplacePVM("K_PATYA");
	ReplacePVM("OBJ_PAST");
	ReplacePVM("PAST00");
	ReplacePVM("PAST01");
	ReplacePVM("PAST02");
	ReplacePVM("PAST_KN_FAM");
	ReplacePVM("KNUCKLES_NORMAL");
	ReplacePVM("KNUCKLES_DEBU");
	ReplacePVM("KNUCKLES_LONG");
	//Texlists
	___ADV03_TEXLISTS[4] = &texlist_past00;
	___ADV03_TEXLISTS[5] = &texlist_past01;
	___ADV03_TEXLISTS[6] = &texlist_past02;
	WriteJump((void*)0x542850, Past_OceanDraw_r);
	//Material fixes for Pacman
	for (unsigned int i = 0; i < LengthOfArray(PatyaMaterials); i++)
	{
		RemoveMaterialColors(PatyaMaterials[i]);
	}
	//Event Chao eye fixes
	WriteCall((void*)0x653C40, AllocateEventChao_9);
	WriteCall((void*)0x653C67, AllocateEventChao_9);
	WriteCall((void*)0x653C91, AllocateEventChao_9);
	//1
	WriteCall((void*)0x66181E, AllocateEventChao_9);
	WriteCall((void*)0x661840, AllocateEventChao_9);
	WriteCall((void*)0x661862, AllocateEventChao_9);
	WriteCall((void*)0x661887, AllocateEventChao_9);
	//2 - Gamma meets Tikal
	WriteCall((void*)0x67D993, AllocateEventChao_8);
	WriteCall((void*)0x67D9B4, AllocateEventChao_2);
	WriteCall((void*)0x67D9D8, AllocateEventChao_10);
	WriteCall((void*)0x67D9F9, AllocateEventChao_8);
	WriteCall((void*)0x67DA1A, AllocateEventChao_2);
	WriteCall((void*)0x67DA3E, AllocateEventChao_10);
	WriteCall((void*)0x67DA5F, AllocateEventChao_2);
	WriteCall((void*)0x67DA80, AllocateEventChao_7);
	WriteCall((void*)0x67DAA4, AllocateEventChao_2);
	WriteCall((void*)0x67DAC5, AllocateEventChao_8);
	WriteCall((void*)0x67DAE6, AllocateEventChao_8);
	WriteCall((void*)0x67DB0A, AllocateEventChao_2);
	WriteCall((void*)0x67DB2B, AllocateEventChao_10);
	WriteCall((void*)0x67DB4C, AllocateEventChao_8);
	WriteCall((void*)0x67DB70, AllocateEventChao_10);
	WriteCall((void*)0x67DB91, AllocateEventChao_2);
	//3 - Knuckles meets Tikal
	WriteCall((void*)0x68BF49, AllocateEventChao_2);
	WriteCall((void*)0x68BF6D, AllocateEventChao_2);
	WriteCall((void*)0x68BF8E, AllocateEventChao_2);
	WriteCall((void*)0x68BFAF, AllocateEventChao_2);
	WriteCall((void*)0x68BFD3, AllocateEventChao_2);
	//4
	WriteCall((void*)0x6A1D94, AllocateEventChao_2);
	WriteCall((void*)0x6A1DB5, AllocateEventChao_2);
	WriteCall((void*)0x6A1DD9, AllocateEventChao_2);
	WriteCall((void*)0x6A1DFA, AllocateEventChao_2);
	WriteCall((void*)0x6A2A09, AllocateEventChao_2);
	//Palm fixes
	ADV03_ACTIONS[10]->object->model = &attach_00122F04;
	WriteCall((void*)0x545C1A, RenderPalm1);
	WriteCall((void*)0x545BFD, RenderPalm2);
	//Tikal cutscene water ripple thing
	WriteData((float*)0x0068BA27, -40.7f); //Ripple 1 X
	WriteData((float*)0x0068BA22, 86.0f); //Ripple 1 Y
	WriteData((float*)0x0068BA1D, 59.43f); //Ripple 1 Z
	WriteData((float*)0x0068BA62, -40.7f); //Ripple 2 X
	WriteData((float*)0x0068BA5D, 86.0f); //Ripple 2 Y
	WriteData((float*)0x0068BA58, 59.43f); //Ripple 2 Z
	WriteData((float*)0x0068BA94, -52.01f); //Ripple 3 X
	WriteData((float*)0x0068BA8F, 86.0f); //Ripple 3 Y
	WriteData((float*)0x0068BA8A, 52.42f); //Ripple 3 Z
	if (GetModuleHandle(L"ADV03MODELS") != nullptr && DLLLoaded_Lantern)
	{
		material_register_ptr(Past_ObjectSpecular, LengthOfArray(Past_ObjectSpecular), &ForceDiffuse0Specular1);
	}
	//Fog data
	for (unsigned int i = 0; i < 3; i++)
	{
		FogData_Past1[i].Layer = -12000.0f;
		FogData_Past1[i].Distance = -12000.0f;
		FogData_Past2[i].Layer = -12000.0f;
		FogData_Past2[i].Distance = -12000.0f;
		FogData_Past3[i].Layer = -12000.0f;
		FogData_Past3[i].Distance = -12000.0f;
		DrawDist_Past1[i].Maximum = -12000.0f;
		DrawDist_Past2[i].Maximum = -16000.0f;
		DrawDist_Past3[i].Maximum = -16000.0f;
	}
	//___ADV03PAST01_OBJECTS[211] = &objectADV03_000953F8; //water 1
	//___ADV03PAST01_OBJECTS[212] = &objectADV03_0009566C; //water 2
	//___ADV03PAST01_OBJECTS[214] = &objectADV03_0009609C; //water 3
	___ADV03_OBJECTS[16] = &objectADV03_0001EDDC; //tree 16
	___ADV03_OBJECTS[17] = &objectADV03_0001EDDC; //tree 17
	___ADV03_OBJECTS[15] = &objectADV03_00027158; //small tree shadow
	___ADV03_OBJECTS[13] = &objectADV03_00016CA0; //OWell
	___ADV03_OBJECTS[18] = &objectADV03_00027054; //well shadow
}

void ADV03_OnFrame()
{
	//Rotate the thing above the Chao's head
	if (CurrentLevel == LevelIDs_Past && CurrentAct > 0 && EV_MainThread_ptr != nullptr)
	{
		((NJS_OBJECT*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013CB28))->ang[1] = Camera_Data1->Rotation.y;
		if (PastChaoModel_2_Info) ((NJS_OBJECT*)PastChaoModel_2_Info->getmodel()->child)->ang[1] = Camera_Data1->Rotation.y;
		if (PastChaoModel_7_Info) ((NJS_OBJECT*)PastChaoModel_7_Info->getmodel()->child)->ang[1] = Camera_Data1->Rotation.y;
		if (PastChaoModel_8_Info) ((NJS_OBJECT*)PastChaoModel_8_Info->getmodel()->child)->ang[1] = Camera_Data1->Rotation.y;
		if (PastChaoModel_9_Info) ((NJS_OBJECT*)PastChaoModel_9_Info->getmodel()->child)->ang[1] = Camera_Data1->Rotation.y;
		if (PastChaoModel_10_Info) ((NJS_OBJECT*)PastChaoModel_10_Info->getmodel()->child)->ang[1] = Camera_Data1->Rotation.y;
	}
}