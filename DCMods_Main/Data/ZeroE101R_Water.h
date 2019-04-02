#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00007B80[] = {
	{ { 0x99B2B2B2 },{ 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_LIGHT | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00007B94[] = {
	4, 3, 2, 1, 0
};

extern "C" __declspec(dllexport) NJS_TEX uv_00007BA0[] = {
	{ 20400, -9945 },
	{ 10200, 255 },
	{ 10199, -20145 },
	{ 0, -9944 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00007BB0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00007B94, NULL, NULL, NULL, uv_00007BA0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00007BC8[] = {
	{ -8099.999f, 415, -8099.999f },
	{ -8099.999f, 415, 8099.999f },
	{ 8099.999f, 415, -8099.999f },
	{ 8099.999f, 415, 8099.999f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00007BF8[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00007C28 = { vertex_00007BC8, normal_00007BF8, LengthOfArray(vertex_00007BC8), meshlist_00007BB0, matlist_00007B80, LengthOfArray(meshlist_00007BB0), LengthOfArray(matlist_00007B80),{ 0, 415, 0 }, 11455.13f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00007C50 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00007C28, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

#pragma warning(pop)