#pragma once
#include <SADXStructs.h>

struct DirLightData
{
	char LevelID;
	char Act;
	NJS_VECTOR LightDirection;
	float R;
	float G;
	float B;
	float Specular;
	float Diffuse;
	float Ambient;
};

DirLightData DefaultDirLight = { 0, 0, { 0.822f, -0.57f, 0 }, 1, 1, 1, 0.8f, 1, 0.25f };

DirLightData DirLightOverrides[] = {
	{LevelIDs_TwinklePark, 0, { 0.5f, -0.866, 0 }, 1, 1, 0.95f, 0.8f, 0.9f, 0.2f },
	{LevelIDs_SpeedHighway, 0, { 0.5f, -0.866, 0 }, 1, 1, 1, 0.7f, 0.6f, 0.2f },
	{LevelIDs_SpeedHighway, 1, { 1, 0, 0 }, 1, 0.9f, 0.9f, 1, 0.8f, 0.3f },
	{LevelIDs_SpeedHighway, 2, { 0.866, -0.5f, 0 }, 1, 0.9f, 0.9f, 0.65f, 0.8f, 0.35f },
	{LevelIDs_LostWorld, 0, { 0.6785513163f, -0.7345529795f, 0 }, 1, 1, 1, 0.8f, 0.4f, 0.05f },
	{LevelIDs_LostWorld, 1, { 0.866, -0.5f, 0 }, 1, 0.9f, 0.9f, 0.65f, 0.8f, 0.25f },
	{LevelIDs_IceCap, 0, { 0, -1, 0 }, 1, 1, 1, 1, 1, 0.36f },
	{LevelIDs_IceCap, 1, { 0, -1, 0 }, 0.59f, 0.75f, 0.77f, 1, 1, 0.22f },
	{LevelIDs_IceCap, 2, { 1, 0, 0 }, 1, 1, 1, 1, 1, 0.68f },
	{LevelIDs_IceCap, 3, { 0, -1, 0 }, 0.59f, 0.75f, 0.77f, 1, 1, 0.22f },
	{LevelIDs_PerfectChaos, 0, { 0.5f, -0.866f, 0 }, 1, 1, 0.95f, 0.8f, 0.9f, 0.2f },
	{LevelIDs_SandHill, 0, { 0, -1, 0 }, 1, 1, 1, 1, 1, 0.36f },
	{LevelIDs_TwinkleCircuit, 0, { 0.5f, -0.866f, 0 }, 1, 1, 0.95f, 0.8f, 0.9f, 0.2f },
	{LevelIDs_StationSquare, 0, { 0.5f, -0.866f, 0 }, 1, 1, 0.95f, 0.8f, 0.9f, 0.5f },
	{LevelIDs_Past, 0, { 0.5f, -0.866f, 0 }, 1, 1, 0.95f, 0.8f, 0.9f, 0.5f },
};