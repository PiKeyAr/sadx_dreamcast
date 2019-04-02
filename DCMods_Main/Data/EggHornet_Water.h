#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00057F04[] = {
	{ { 0x65B2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00057F18[] = {
	4, 3, 2, 1, 0
};

extern "C" __declspec(dllexport) NJS_TEX uv_00057F24[] = {
	{ 7650, -7395 },
	{ 7650, 255 },
	{ 0, -7395 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00057F34[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00057F18, NULL, NULL, NULL, uv_00057F24, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00057F4C[] = {
	{ -5554.648f, 0, -5593.767f },
	{ -5554.648f, 0, 5593.767f },
	{ 5554.648f, 0, -5593.767f },
	{ 5554.648f, 0, 5593.767f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00057F7C[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00057FAC = { vertex_00057F4C, normal_00057F7C, LengthOfArray(vertex_00057F4C), meshlist_00057F34, matlist_00057F04, LengthOfArray(meshlist_00057F34), LengthOfArray(matlist_00057F04),{ 0 }, 7883.168f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00057FD4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00057FAC, 711.6917f, -420.8741f, 3703.044f, 0, 0, 0, 1, 1, 1, NULL, NULL };

#pragma warning(pop)