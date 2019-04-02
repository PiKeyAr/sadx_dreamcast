#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00019730[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 59, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00019744[] = {
	6, 3, 4, 2, 5, 0, 1
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00019754[] = {
	{ 4080, -1785 },
	{ 4080, 255 },
	{ 2083, -1785 },
	{ 2083, 255 },
	{ 0, -1785 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0001976C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_00019744, NULL, NULL, NULL, uvSTG12_00019754, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00019784[] = {
	{ 300, 0, -610 },
	{ 300, 0, -690 },
	{ 420, 0, -610 },
	{ 535, 0, -610 },
	{ 535, 0, -690 },
	{ 420, 0, -690 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_000197CC[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00019814 = { vertexSTG12_00019784, normalSTG12_000197CC, LengthOfArray(vertexSTG12_00019784), meshlistSTG12_0001976C, matlistSTG12_00019730, LengthOfArray(meshlistSTG12_0001976C), LengthOfArray(matlistSTG12_00019730),{ 417.5f, 0, -650 }, 124.1219f, NULL };

extern "C" __declspec(dllexport) extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0001983C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00019814, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00019870[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 41, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000198C0[] = {
	3, 18, 20, 19,
	0x8000u | 9, 24, 23, 26, 25, 21, 22, 18, 17, 19,
	0x8000u | 10, 12, 24, 15, 26, 8, 21, 1, 18, 3, 20
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000198F2[] = {
	3, 27, 7, 29,
	6, 1, 33, 3, 29, 4, 7,
	0x8000u | 9, 33, 31, 1, 32, 8, 28, 15, 30, 12
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001991C[] = {
	4, 37, 36, 27, 7,
	6, 2, 0, 6, 5, 35, 34,
	0x8000u | 8, 11, 13, 14, 16, 10, 9, 0, 2,
	6, 35, 37, 6, 27, 2, 29,
	8, 2, 31, 9, 32, 16, 28, 13, 30
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00019966[] = {
	4, 29, 33, 2, 31
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00019970[] = {
	{ 510, -1377 },
	{ 510, 255 },
	{ 1020, 255 },
	{ 510, -7905 },
	{ 1020, -7905 },
	{ 510, -5729 },
	{ 1020, -5729 },
	{ 510, -3553 },
	{ 1020, -3553 },
	{ 510, -1377 },
	{ 1020, -1377 },
	{ 1020, 255 },
	{ 0, -7905 },
	{ 510, -7905 },
	{ 0, -5729 },
	{ 510, -5729 },
	{ 0, -3553 },
	{ 510, -3553 },
	{ 0, -1377 },
	{ 510, -1377 },
	{ 0, 255 },
	{ 510, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000199C8[] = {
	{ 16829, -7395 },
	{ 20400, -7393 },
	{ 16829, -1491 },
	{ 16319, 255 },
	{ 16829, -1056 },
	{ 20399, 255 },
	{ 16829, -1491 },
	{ 20399, -1491 },
	{ 20400, -7393 },
	{ 16829, -1056 },
	{ 16319, -1056 },
	{ 16319, 255 },
	{ 10879, -1056 },
	{ 10879, 255 },
	{ 5439, -1056 },
	{ 5439, 255 },
	{ 0, -1056 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00019A10[] = {
	{ 0, -765 },
	{ 0, 255 },
	{ 255, -765 },
	{ 255, 255 },
	{ 135, -1275 },
	{ 255, -1275 },
	{ 135, 101 },
	{ 255, 101 },
	{ 135, 255 },
	{ 255, 255 },
	{ 255, -2805 },
	{ 127, -2805 },
	{ 255, -1785 },
	{ 127, -1785 },
	{ 255, -765 },
	{ 127, -765 },
	{ 255, 255 },
	{ 127, 255 },
	{ 135, 255 },
	{ 0, 255 },
	{ 135, 101 },
	{ 0, 101 },
	{ 135, -1275 },
	{ 0, -1275 },
	{ 127, 255 },
	{ 0, 255 },
	{ 127, -765 },
	{ 0, -765 },
	{ 127, -1785 },
	{ 0, -1785 },
	{ 127, -2805 },
	{ 0, -2805 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00019A90[] = {
	{ 133, 129 },
	{ 1, 129 },
	{ 133, 1 },
	{ 1, 1 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00019AA0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, polySTG12_000198C0, NULL, NULL, NULL, uvSTG12_00019970, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, polySTG12_000198F2, NULL, NULL, NULL, uvSTG12_000199C8, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 5, polySTG12_0001991C, NULL, NULL, NULL, uvSTG12_00019A10, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, polySTG12_00019966, NULL, NULL, NULL, uvSTG12_00019A90, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00019B00[] = {
	{ 135, -5, -55 },
	{ 135, 5, -95 },
	{ 135, 5, -55 },
	{ 225, 5, -95 },
	{ 225, 5, -55 },
	{ 135, -5, 80 },
	{ 135, 5, 80 },
	{ 225.0115f, 5.000008f, 79.95465f },
	{ 15, 5, -95 },
	{ 15, 5, -55 },
	{ 15, -5, -55 },
	{ -225, -5, -55 },
	{ -225, 5, -95 },
	{ -225, 5, -55 },
	{ -105, -5, -55 },
	{ -105, 5, -95 },
	{ -105, 5, -55 },
	{ 135, -5, -105 },
	{ 135, 5, -105 },
	{ 225, -5, -105 },
	{ 225, 5, -105 },
	{ 15, 5, -105 },
	{ 15, -5, -105 },
	{ -225, -5, -105 },
	{ -225, 5, -105 },
	{ -105, -5, -105 },
	{ -105, 5, -105 },
	{ 146.25f, 5, 80 },
	{ -105, 5, -65 },
	{ 146.25f, 5, -55 },
	{ -225, 5, -65 },
	{ 135, 5, -65 },
	{ 15, 5, -65 },
	{ 146.25f, 5, -65 },
	{ 135, -5, 95 },
	{ 135, 5, 95 },
	{ 225.0115f, 5.000008f, 94.95465f },
	{ 146.25f, 5, 95 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00019CC8[] = {
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 1, 0 },
	{ -0.301511f, 0.904534f, 0.301511f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00019E90 = { vertexSTG12_00019B00, normalSTG12_00019CC8, LengthOfArray(vertexSTG12_00019B00), meshlistSTG12_00019AA0, matlistSTG12_00019870, LengthOfArray(meshlistSTG12_00019AA0), LengthOfArray(matlistSTG12_00019870),{ 0.005768f, 0.000004f, -5 }, 246.2267f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00019EB8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00019E90, 165, 75, -805, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00019EEC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00019F14[] = {
	8, 1, 0, 9, 8, 5, 4, 13, 12,
	6, 6, 7, 2, 3, 10, 11
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00019F34[] = {
	0x8000u | 10, 7, 3, 5, 11, 13, 10, 12, 2, 4, 8,
	3, 7, 9, 5,
	3, 6, 2, 8
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00019F5C[] = {
	{ 1020, -765 },
	{ 1020, 255 },
	{ 557, -752 },
	{ 557, 242 },
	{ 352, -637 },
	{ 352, 127 },
	{ 0, -573 },
	{ 0, 63 },
	{ 557, 242 },
	{ 557, -752 },
	{ 352, 127 },
	{ 352, -637 },
	{ 0, 63 },
	{ 0, -573 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00019F94[] = {
	{ 255, -2294 },
	{ 255, -1968 },
	{ 0, -1968 },
	{ 255, -1481 },
	{ 0, -1481 },
	{ 255, -557 },
	{ 0, -557 },
	{ 255, -70 },
	{ 0, -70 },
	{ 0, 255 },
	{ 255, -2294 },
	{ 0, -2295 },
	{ 0, -1968 },
	{ 255, 255 },
	{ 255, -70 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00019FD4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, polySTG12_00019F14, NULL, NULL, NULL, uvSTG12_00019F5C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, polySTG12_00019F34, NULL, NULL, NULL, uvSTG12_00019F94, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0001A004[] = {
	{ 37.5f, 4.500107f, -40 },
	{ 37.5f, 4.500107f, 40 },
	{ -11.5f, -5.499893f, -30 },
	{ -11.50001f, -5.499893f, 30 },
	{ -11.5f, 5.500107f, -30 },
	{ -11.50001f, 5.500107f, 30 },
	{ 3.657043f, -5.500107f, -39.01818f },
	{ 3.657043f, -5.500107f, 39.01782f },
	{ 3.657043f, 4.499893f, -39.01818f },
	{ 3.657043f, 4.499893f, 39.01782f },
	{ -37.5f, -5.499893f, -25 },
	{ -37.5f, -5.499893f, 25 },
	{ -37.5f, 5.500107f, -25 },
	{ -37.5f, 5.500107f, 25 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0001A0AC[] = {
	{ -0.00006f, 1, 0 },
	{ -0.00006f, 1, 0 },
	{ -0.235865f, -0.748071f, -0.620289f },
	{ -0.23586f, -0.748068f, 0.620293f },
	{ -0.202997f, 0.758461f, -0.619298f },
	{ -0.202992f, 0.758459f, 0.619302f },
	{ -0.427091f, -0.549861f, -0.717807f },
	{ -0.427076f, -0.549867f, 0.717811f },
	{ -0.248265f, 0.85546f, -0.45448f },
	{ -0.248254f, 0.855463f, 0.454481f },
	{ -0.62362f, -0.588004f, -0.51512f },
	{ -0.62362f, -0.588004f, 0.51512f },
	{ -0.62362f, 0.588004f, -0.51512f },
	{ -0.62362f, 0.588004f, 0.51512f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0001A154 = { vertexSTG12_0001A004, normalSTG12_0001A0AC, LengthOfArray(vertexSTG12_0001A004), meshlistSTG12_00019FD4, matlistSTG12_00019EEC, LengthOfArray(meshlistSTG12_00019FD4), LengthOfArray(matlistSTG12_00019EEC),{ 0 }, 54.82928f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0001A17C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0001A154, 942.5f, -4.500216f, -650, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0001A1B0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 22, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 56, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001A214[] = {
	4, 3, 2, 5, 4,
	0x8000u | 8, 18, 11, 17, 9, 15, 3, 14, 2,
	4, 9, 10, 11, 12
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001A23A[] = {
	0x8000u | 10, 0, 3, 7, 9, 8, 10, 1, 5, 0, 3
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001A250[] = {
	4, 11, 28, 18, 29,
	4, 14, 31, 2, 30
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001A264[] = {
	4, 19, 29, 13, 28,
	4, 6, 30, 16, 31
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001A278[] = {
	0x8000u | 8, 24, 4, 25, 5, 26, 10, 27, 12,
	0x8000u | 8, 23, 18, 22, 17, 21, 15, 20, 14
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001A29C[] = {
	{ 637, -510 },
	{ 170, -510 },
	{ 637, -701 },
	{ 170, -701 },
	{ 848, 191 },
	{ 848, -510 },
	{ 765, 191 },
	{ 765, -510 },
	{ 637, 191 },
	{ 637, -510 },
	{ 170, 191 },
	{ 170, -510 },
	{ 765, -510 },
	{ 765, -701 },
	{ 848, -510 },
	{ 848, -701 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001A2DC[] = {
	{ 5, -757 },
	{ 757, -757 },
	{ 5, -517 },
	{ 757, -517 },
	{ 5, -262 },
	{ 757, -262 },
	{ 5, -7 },
	{ 757, -7 },
	{ 5, 247 },
	{ 757, 247 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001A304[] = {
	{ 2040, 255 },
	{ 2040, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ 2040, 0 },
	{ 2040, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001A324[] = {
	{ 1020, 255 },
	{ 1020, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 1020, 255 },
	{ 1020, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001A344[] = {
	{ 0, 255 },
	{ 0 },
	{ 1402, 255 },
	{ 1402, 0 },
	{ 1785, 255 },
	{ 1785, 0 },
	{ 2040, 255 },
	{ 2040, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 637, 255 },
	{ 637, 0 },
	{ 2040, 255 },
	{ 2040, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0001A384[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, polySTG12_0001A214, NULL, NULL, NULL, uvSTG12_0001A29C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, polySTG12_0001A23A, NULL, NULL, NULL, uvSTG12_0001A2DC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, polySTG12_0001A250, NULL, NULL, NULL, uvSTG12_0001A304, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, polySTG12_0001A264, NULL, NULL, NULL, uvSTG12_0001A324, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, polySTG12_0001A278, NULL, NULL, NULL, uvSTG12_0001A344, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0001A3FC[] = {
	{ -20, 10, 15 },
	{ -20, 25, 15 },
	{ 20, 10, -40 },
	{ 20, 10, 15 },
	{ 20, 25, -40 },
	{ 20, 25, 15 },
	{ 20, 10, -60 },
	{ -20, 10, 30 },
	{ -20, 25, 30 },
	{ 20, 10, 30 },
	{ 20, 25, 30 },
	{ 20, 10, 40 },
	{ 20, 25, 40 },
	{ 20, 10, 60 },
	{ 20, -45, -40 },
	{ 20, -45, 15 },
	{ 20, -45, -60 },
	{ 20, -45, 30 },
	{ 20, -45, 40 },
	{ 20, -45, 60 },
	{ 20, -50, -40 },
	{ 20, -50, 15 },
	{ 20, -50, 30 },
	{ 20, -50, 40 },
	{ 20, 30, -40 },
	{ 20, 30, 15 },
	{ 20, 30, 30 },
	{ 20, 30, 40 },
	{ 20, 10, 45 },
	{ 20, -45, 45 },
	{ 20, 10, -45 },
	{ 20, -45, -45 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0001A57C[] = {
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, -0.7071069f, 0.7071069f },
	{ 1, 0, 0 },
	{ 0.904534f, 0.301511f, 0.301511f },
	{ 1, 0, 0 },
	{ 0.904534f, -0.301511f, 0.301511f },
	{ 1, 0, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, -0.7071069f, -0.7071069f },
	{ 0.904534f, 0.301511f, -0.301511f },
	{ 0.904534f, -0.301511f, -0.301511f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0001A6FC = { vertexSTG12_0001A3FC, normalSTG12_0001A57C, LengthOfArray(vertexSTG12_0001A3FC), meshlistSTG12_0001A384, matlistSTG12_0001A1B0, LengthOfArray(meshlistSTG12_0001A384), LengthOfArray(matlistSTG12_0001A1B0),{ 0, -10, 0 }, 72.11102f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0001A724 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0001A6FC, 1920, 50, -650, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0001A758[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001A76C[] = {
	0x8000u | 14, 5, 4, 14, 16, 15, 17, 18, 19, 10, 12, 11, 13, 3, 2,
	10, 14, 5, 15, 8, 18, 0, 10, 1, 11, 3,
	10, 13, 2, 12, 9, 19, 7, 17, 6, 16, 4
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001A7B8[] = {
	{ 1522, -253 },
	{ 2032, -253 },
	{ 1888, -201 },
	{ 1888, 197 },
	{ 1522, -201 },
	{ 1522, 197 },
	{ 1027, -201 },
	{ 1027, 197 },
	{ 517, -201 },
	{ 517, 197 },
	{ 135, -201 },
	{ 135, 197 },
	{ 7, 253 },
	{ 517, 253 },
	{ 1888, -201 },
	{ 1522, -253 },
	{ 1522, -201 },
	{ 1027, -253 },
	{ 1027, -201 },
	{ 517, -253 },
	{ 517, -201 },
	{ 7, -253 },
	{ 135, -201 },
	{ 7, 253 },
	{ 135, 197 },
	{ 517, 253 },
	{ 517, 197 },
	{ 1027, 253 },
	{ 1027, 197 },
	{ 1522, 253 },
	{ 1522, 197 },
	{ 2032, 253 },
	{ 1888, 197 },
	{ 2032, -253 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0001A840[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, polySTG12_0001A76C, NULL, NULL, NULL, uvSTG12_0001A7B8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0001A858[] = {
	{ 120, 40, -50.00012f },
	{ 220, 40, -50.00012f },
	{ 120, 40, 49.99988f },
	{ 220, 40, 49.99988f },
	{ -220, 40, -50.00012f },
	{ -120, 40, -50.00012f },
	{ -220, 40, 49.99988f },
	{ -120, 40, 49.99988f },
	{ 0, 40, -50.00012f },
	{ 0, 40, 49.99988f },
	{ 120, 52, -40.00012f },
	{ 210, 52, -40.00012f },
	{ 120, 52, 39.99988f },
	{ 210, 52, 39.99988f },
	{ -210, 52, -40.00012f },
	{ -120, 52, -40.00012f },
	{ -210, 52, 39.99988f },
	{ -120, 52, 39.99988f },
	{ 0, 52, -40.00012f },
	{ 0, 52, 39.99988f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0001A948[] = {
	{ 0, -0.640184f, 0.768221f },
	{ -0.457496f, -0.762493f, 0.457496f },
	{ 0, -0.640184f, -0.768221f },
	{ -0.457496f, -0.762493f, -0.457496f },
	{ 0.457496f, -0.762493f, 0.457496f },
	{ 0, -0.640184f, 0.768221f },
	{ 0.457496f, -0.762493f, -0.457496f },
	{ 0, -0.640184f, -0.768221f },
	{ 0, -0.640184f, 0.768221f },
	{ 0, -0.640184f, -0.768221f },
	{ 0, -0.905589f, 0.424155f },
	{ -0.335671f, -0.880142f, 0.335671f },
	{ 0, -0.905589f, -0.424155f },
	{ -0.335671f, -0.880142f, -0.335671f },
	{ 0.335671f, -0.880142f, 0.335671f },
	{ 0, -0.905589f, 0.424155f },
	{ 0.335671f, -0.880142f, -0.335671f },
	{ 0, -0.905589f, -0.424155f },
	{ 0, -0.905589f, 0.424155f },
	{ 0, -0.905589f, -0.424155f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0001AA38 = { vertexSTG12_0001A858, normalSTG12_0001A948, LengthOfArray(vertexSTG12_0001A858), meshlistSTG12_0001A840, matlistSTG12_0001A758, LengthOfArray(meshlistSTG12_0001A840), LengthOfArray(matlistSTG12_0001A758),{ 0, 46, -0.000122f }, 225.6103f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0001AA60 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0001AA38, 1200, 40, -649.9999f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0001AA94[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 67, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001AAD0[] = {
	4, 11, 8, 9, 10
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001AADA[] = {
	3, 8, 2, 10,
	0x8000u | 5, 10, 0, 2, 6, 4,
	3, 9, 1, 11,
	0x8000u | 5, 11, 3, 1, 5, 7
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001AB04[] = {
	{ 1020, 255 },
	{ 0, 255 },
	{ 1020, -1785 },
	{ 0, -1785 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001AB14[] = {
	{ 0, -1275 },
	{ 94, -1275 },
	{ 0, 255 },
	{ 0, 255 },
	{ 94, 255 },
	{ 94, -1275 },
	{ 255, 255 },
	{ 255, -1275 },
	{ 0, 255 },
	{ 94, 255 },
	{ 0, -1275 },
	{ 0, -1275 },
	{ 94, -1275 },
	{ 94, 255 },
	{ 255, -1275 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0001AB54[] = {
	{ NJD_MESHSET_TRIMESH | 1, 1, polySTG12_0001AAD0, NULL, NULL, NULL, uvSTG12_0001AB04, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, polySTG12_0001AADA, NULL, NULL, NULL, uvSTG12_0001AB14, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0001AB84[] = {
	{ -140, 80, -730 },
	{ -60, 80, -730 },
	{ -140, 80, -860 },
	{ -60, 80, -860 },
	{ -140, 71.5f, -860 },
	{ -60, 71.5f, -860 },
	{ -140, 71.5f, -730 },
	{ -60, 71.5f, -730 },
	{ -135, 80, -860 },
	{ -65, 80, -730 },
	{ -135, 80, -730 },
	{ -65, 80, -860 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0001AC14[] = {
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0001ACA4 = { vertexSTG12_0001AB84, normalSTG12_0001AC14, LengthOfArray(vertexSTG12_0001AB84), meshlistSTG12_0001AB54, matlistSTG12_0001AA94, LengthOfArray(meshlistSTG12_0001AB54), LengthOfArray(matlistSTG12_0001AA94),{ -100, 75.75f, -795 }, 76.32169f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0001ACCC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0001ACA4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0001AD00[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 67, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001AD3C[] = {
	4, 11, 10, 9, 8
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001AD46[] = {
	3, 9, 0, 11,
	0x8000u | 5, 11, 1, 0, 5, 6,
	3, 10, 2, 8,
	0x8000u | 5, 8, 3, 2, 7, 4
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001AD70[] = {
	{ 860, 254 },
	{ 0, -1093 },
	{ 2040, -919 },
	{ 1487, -1785 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001AD80[] = {
	{ 0, -1275 },
	{ 91, -1274 },
	{ 0, 255 },
	{ 0, 255 },
	{ 119, 255 },
	{ 91, -1274 },
	{ 255, 255 },
	{ 255, -1274 },
	{ 0, -1275 },
	{ 119, -1275 },
	{ 0, 255 },
	{ 0, 255 },
	{ 91, 255 },
	{ 119, -1275 },
	{ 255, 255 },
	{ 255, -1275 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0001ADC0[] = {
	{ NJD_MESHSET_TRIMESH | 1, 1, polySTG12_0001AD3C, NULL, NULL, NULL, uvSTG12_0001AD70, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, polySTG12_0001AD46, NULL, NULL, NULL, uvSTG12_0001AD80, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0001ADF0[] = {
	{ -342.9117f, 80, -662.9115f },
	{ -434.2814f, 80.00002f, -754.2813f },
	{ -512.2346f, 80.00001f, -637.616f },
	{ -392.8543f, 80, -588.167f },
	{ -512.2346f, 70.00001f, -637.616f },
	{ -434.2814f, 70.00002f, -754.2813f },
	{ -342.9117f, 70, -662.9115f },
	{ -392.8543f, 70, -588.167f },
	{ -389.7329f, 80, -592.8386f },
	{ -346.0331f, 80, -658.2399f },
	{ -507.3625f, 80.00001f, -644.9076f },
	{ -439.1535f, 80.00002f, -746.9897f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0001AE80[] = {
	{ 0.469776f, 0.74741f, -0.469776f },
	{ 0.532152f, 0.658505f, -0.532152f },
	{ -0.287999f, 0.658505f, 0.69529f },
	{ -0.254241f, 0.747408f, 0.613793f },
	{ -0.382684f, 0, 0.92388f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.382684f, 0, 0.923879f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0001AF10 = { vertexSTG12_0001ADF0, normalSTG12_0001AE80, LengthOfArray(vertexSTG12_0001ADF0), meshlistSTG12_0001ADC0, matlistSTG12_0001AD00, LengthOfArray(meshlistSTG12_0001ADC0), LengthOfArray(matlistSTG12_0001AD00),{ -427.5731f, 75.00001f, -671.2241f }, 118.6004f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0001AF38 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0001AF10, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) Sint16 polySTG12_0001AF80[] = {
	0x8000u | 24, 0, 12, 11, 23, 1, 13, 2, 14, 3, 15, 4, 16, 5, 17, 6, 18, 7, 19, 8, 20, 9, 21, 10, 22
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0001AFB4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_0001AF80, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0001AFCC[] = {
	{ 20, 79.99998f, 400 },
	{ -91.96985f, 79.99997f, 400 },
	{ -233.2234f, 79.99997f, 369.9138f },
	{ -363.1198f, 79.99997f, 283.1198f },
	{ -449.9138f, 79.99998f, 153.2233f },
	{ -480.3918f, 79.99998f, 0.000061f },
	{ -449.9138f, 80, -153.2232f },
	{ -363.1198f, 80.00001f, -283.1197f },
	{ -233.2234f, 80.00001f, -369.9138f },
	{ -81.96985f, 80.00001f, -400 },
	{ 40, 79.99998f, -400 },
	{ -40.98492f, 79.99998f, 400 },
	{ 20, 190, 400 },
	{ -91.96985f, 190, 400 },
	{ -233.2234f, 190, 369.9138f },
	{ -363.1198f, 190, 283.1198f },
	{ -449.9138f, 190, 153.2233f },
	{ -480.3918f, 190, 0.000061f },
	{ -449.9138f, 190, -153.2232f },
	{ -363.1198f, 190, -283.1197f },
	{ -233.2234f, 190, -369.9138f },
	{ -81.96985f, 190, -400 },
	{ 40, 190, -400 },
	{ -40.98492f, 190, 400 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0001B0EC[] = {
	{ 0, 0, -1 },
	{ 0.104737f, 0, -0.9945f },
	{ 0.388915f, 0, -0.9212739f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.923879f, 0, -0.382684f },
	{ 1, 0, 0 },
	{ 0.92388f, 0, 0.382683f },
	{ 0.7071069f, 0, 0.707106f },
	{ 0.382684f, 0, 0.92388f },
	{ 0.098017f, 0, 0.995185f },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0.104737f, 0, -0.9945f },
	{ 0.388915f, 0, -0.9212739f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.92388f, 0, -0.382684f },
	{ 1, 0, 0 },
	{ 0.92388f, 0, 0.382683f },
	{ 0.7071069f, 0, 0.707106f },
	{ 0.382684f, 0, 0.92388f },
	{ 0.098017f, 0, 0.995185f },
	{ 0, 0, 1 },
	{ 0, 0, -1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0001B20C = { vertexSTG12_0001AFCC, normalSTG12_0001B0EC, LengthOfArray(vertexSTG12_0001AFCC), meshlistSTG12_0001AFB4, NULL, LengthOfArray(meshlistSTG12_0001AFB4), 0,{ -220.1959f, 135, 0 }, 477.1812f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0001B234 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0001B20C, -100, 0, -500, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) Sint16 polySTG12_0001B27C[] = {
	0x8000u | 10, 6, 1, 5, 0, 7, 2, 9, 4, 8, 3
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0001B294[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_0001B27C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0001B2AC[] = {
	{ 710, 79.99998f, -1977 },
	{ 800, 79.99998f, -1977 },
	{ 590, 79.99998f, -1977 },
	{ 350, 79.99998f, -1977 },
	{ 470, 79.99998f, -1977 },
	{ 710, 188.3245f, -1978.993f },
	{ 800, 188.3245f, -1978.993f },
	{ 590, 188.3245f, -1978.993f },
	{ 350, 190, -1977 },
	{ 470, 188.3245f, -1978.993f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0001B324[] = {
	{ 0, 0.018391f, 0.999831f },
	{ 0, 0.018391f, 0.999831f },
	{ 0, 0.018391f, 0.999831f },
	{ 0.008428999f, 0.018391f, 0.999795f },
	{ 0.004215f, 0.018391f, 0.999822f },
	{ 0, 0.018391f, 0.999831f },
	{ 0, 0.018391f, 0.999831f },
	{ 0, 0.018391f, 0.999831f },
	{ 0.008428999f, 0.018391f, 0.999795f },
	{ 0.004233f, 0.018391f, 0.999822f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0001B39C = { vertexSTG12_0001B2AC, normalSTG12_0001B324, LengthOfArray(vertexSTG12_0001B2AC), meshlistSTG12_0001B294, NULL, LengthOfArray(meshlistSTG12_0001B294), 0,{ 575, 135, -1977.996f }, 225.0022f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0001B3C4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0001B39C, -410, 0, 1077, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) Sint16 polySTG12_0001B40C[] = {
	10, 25, 26, 24, 27, 28, 29, 12, 13, 10, 11,
	0x8000u | 10, 2, 1, 8, 5, 7, 4, 9, 6, 3, 0,
	0x8000u | 10, 16, 15, 23, 19, 21, 18, 22, 20, 17, 14
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0001B450[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, polySTG12_0001B40C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0001B468[] = {
	{ 220, 52, -39.99982f },
	{ -220, 52, -39.99963f },
	{ -220, -40, -39.99963f },
	{ 220, -40, -39.99982f },
	{ 0, 52, -39.99976f },
	{ -120, 52, -39.99969f },
	{ 120, 52, -39.99976f },
	{ 0, -40, -39.99976f },
	{ -120, -40, -39.99969f },
	{ 120, -40, -39.99976f },
	{ -220, -40, 39.99988f },
	{ -220, -40, -40.00012f },
	{ -120, -40, 39.99988f },
	{ -120, -40, -40.00012f },
	{ -220, 52, 39.99988f },
	{ 220, 52, 39.99988f },
	{ 220, -40, 39.99988f },
	{ -220, -40, 39.99988f },
	{ 0, 52, 39.99988f },
	{ 120, 52, 39.99988f },
	{ -120, 52, 39.99988f },
	{ 0, -40, 39.99988f },
	{ -120, -40, 39.99988f },
	{ 120, -40, 39.99988f },
	{ 120, -40, 39.99988f },
	{ 220, -40, 39.99988f },
	{ 220, -40, -40.00012f },
	{ 120, -40, -40.00012f },
	{ 0, -40, 39.99988f },
	{ 0, -40, -40.00012f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0001B5D0[] = {
	{ 0.000001f, 0, 1 },
	{ 0.000001f, 0, 1 },
	{ 0.000001f, 0, 1 },
	{ 0.000001f, 0, 1 },
	{ 0, 0, 1 },
	{ 0.000001f, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.000001f, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0001B738 = { vertexSTG12_0001B468, normalSTG12_0001B5D0, LengthOfArray(vertexSTG12_0001B468), meshlistSTG12_0001B450, NULL, LengthOfArray(meshlistSTG12_0001B450), 0,{ 0, 6, -0.000122f }, 223.6068f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0001B760 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0001B738, 1200, 40, -649.9999f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) Sint16 polySTG12_0001B7A8[] = {
	3, 6, 7, 4,
	0x8000u | 7, 4, 5, 7, 2, 3, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0001B7C0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, polySTG12_0001B7A8, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0001B7D8[] = {
	{ -145, 96, 110 },
	{ -145, 30, 110 },
	{ -145, 96, 90 },
	{ -145, 30, 90 },
	{ -5, 96, -90 },
	{ -5, 96, 90 },
	{ -5, 30, -90 },
	{ -5, 30, 90 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0001B838[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0001B898 = { vertexSTG12_0001B7D8, normalSTG12_0001B838, LengthOfArray(vertexSTG12_0001B7D8), meshlistSTG12_0001B7C0, NULL, LengthOfArray(meshlistSTG12_0001B7C0), 0,{ -75, 63, 10 }, 122.0656f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0001B8C0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0001B898, 65, 40, -500, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) Sint16 polySTG12_0001B908[] = {
	0x8000u | 8, 5, 12, 8, 0, 6, 13, 3, 11,
	6, 4, 9, 7, 10, 1, 2,
	4, 5, 9, 8, 4,
	4, 6, 2, 3, 10
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0001B93C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, polySTG12_0001B908, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0001B954[] = {
	{ 16.2267f, -54.5f, -171.512f },
	{ -11.35006f, -9, -171.5f },
	{ -16.35005f, -15.89999f, -171.5f },
	{ -62.34022f, -44.5f, -171.518f },
	{ 16.14996f, -15.89999f, -171.5f },
	{ 62.3401f, -44.5f, -171.518f },
	{ -16.35005f, -44.5f, -171.5f },
	{ 11.14996f, -9, -171.5f },
	{ 16.2267f, -44.5f, -171.512f },
	{ 62.3401f, 32.74998f, -171.518f },
	{ -62.34022f, 32.74998f, -171.518f },
	{ -62.34022f, -54.5f, -171.518f },
	{ 62.3401f, -54.5f, -171.518f },
	{ -16.35005f, -54.5f, -171.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0001B9FC[] = {
	{ 0.000249f, 0, 1 },
	{ -0.0008799999f, 0.000323f, 1 },
	{ -0.000329f, 0.000059f, 1 },
	{ -0.000391f, 0, 1 },
	{ 0.000164f, -0.00013f, 1 },
	{ 0.00013f, -0.00057f, 1 },
	{ -0.000138f, 0, 1 },
	{ 0.00008799999f, 0.000323f, 1 },
	{ 0.00021f, -0.00038f, 1 },
	{ 0.000081f, 0.000146f, 1 },
	{ -0.000206f, 0.000201f, 1 },
	{ -0.000391f, 0, 1 },
	{ 0.00013f, 0, 1 },
	{ -0.00012f, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0001BAA4 = { vertexSTG12_0001B954, normalSTG12_0001B9FC, LengthOfArray(vertexSTG12_0001B954), meshlistSTG12_0001B93C, NULL, LengthOfArray(meshlistSTG12_0001B93C), 0,{ -0.00061f, -10.87501f, -171.509f }, 62.34016f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0001BACC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0001BAA4, 0, 50, -171.5f, 0, 0x7FFF, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) Sint16 polySTG12_0001BB14[] = {
	4, 8, 4, 16, 1,
	4, 7, 4, 12, 2,
	4, 5, 4, 11, 7,
	4, 0, 4, 15, 8,
	4, 6, 4, 14, 0,
	4, 3, 4, 10, 5,
	4, 1, 4, 9, 3,
	4, 2, 4, 13, 6
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0001BB64[] = {
	{ NJD_MESHSET_TRIMESH | 0, 8, polySTG12_0001BB14, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0001BB7C[] = {
	{ 7.572266f, -4.234512f, 37.44434f },
	{ -38.06842f, -4.234505f, 7.44812f },
	{ 38.06842f, -4.234505f, -7.44812f },
	{ -32.27288f, -4.234497f, -21.21051f },
	{ 0, -4.550044f, -0.00032f },
	{ -7.572266f, -4.234497f, -37.44434f },
	{ 32.27288f, -4.234512f, 21.21057f },
	{ 21.56409f, -4.234497f, -31.74383f },
	{ -21.56409f, -4.234512f, 31.74383f },
	{ -38.06842f, -4.234505f, -7.448181f },
	{ -21.56409f, -4.234497f, -31.74383f },
	{ 7.572327f, -4.234497f, -37.44434f },
	{ 32.27288f, -4.234505f, -21.21045f },
	{ 38.06842f, -4.234505f, 7.448181f },
	{ 21.56409f, -4.234512f, 31.74383f },
	{ -7.572266f, -4.234512f, 37.44434f },
	{ -32.27288f, -4.234505f, 21.21051f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0001BC48[] = {
	{ -0.001593f, 0.999966f, -0.008103999f },
	{ 0.007974f, 0.999967f, -0.001605f },
	{ -0.007974f, 0.999967f, 0.001605f },
	{ 0.006769f, 0.999967f, 0.004577f },
	{ 0, 1, 0 },
	{ 0.001593f, 0.999966f, 0.008105f },
	{ -0.006769f, 0.999967f, -0.004577f },
	{ -0.004531f, 0.999966f, 0.006862f },
	{ 0.004531f, 0.999966f, -0.006862f },
	{ 0.007974f, 0.999967f, 0.001605f },
	{ 0.004531f, 0.999966f, 0.006862f },
	{ -0.001593f, 0.999966f, 0.008105f },
	{ -0.006769f, 0.999967f, 0.004577f },
	{ -0.007974f, 0.999967f, -0.001605f },
	{ -0.004531f, 0.999966f, -0.006862f },
	{ 0.001593f, 0.999966f, -0.008103999f },
	{ 0.006769f, 0.999967f, -0.004577f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0001BD14 = { vertexSTG12_0001BB7C, normalSTG12_0001BC48, LengthOfArray(vertexSTG12_0001BB7C), meshlistSTG12_0001BB64, NULL, LengthOfArray(meshlistSTG12_0001BB64), 0,{ 0, -4.392271f, 0 }, 53.3974f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0001BD3C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0001BD14, 750, 86.5f, -650, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) Sint16 polySTG12_0001BD84[] = {
	0x8000u | 8, 46, 20, 47, 21, 54, 55, 44, 18,
	0x8000u | 28, 51, 25, 26, 0, 48, 22, 27, 1, 29, 3, 31, 5, 33, 7, 35, 9, 37, 11, 39, 13, 41, 15, 43, 17, 49, 23, 45, 19,
	0x8000u | 20, 24, 50, 52, 53, 2, 28, 4, 30, 6, 32, 8, 34, 10, 36, 12, 38, 14, 40, 16, 42
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0001BDFC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, polySTG12_0001BD84, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0001BE14[] = {
	{ 214.9898f, 0.000003f, 100.5001f },
	{ -25.99513f, -0.00002f, 100.5001f },
	{ -24.02533f, -0.0001f, 180.5f },
	{ -67.18037f, -0.00001f, 92.30779f },
	{ -97.64514f, -0.00008f, 165.8561f },
	{ -102.9305f, 0, 68.42034f },
	{ -159.222f, -0.00007f, 124.7118f },
	{ -126.818f, 0.000001f, 32.6702f },
	{ -200.3663f, -0.00005f, 63.13495f },
	{ -135.2061f, 0.000004f, -9.499939f },
	{ -214.8143f, -0.00002f, -9.499907f },
	{ -126.818f, 0.000006f, -51.67004f },
	{ -200.3664f, 0.000002f, -82.13477f },
	{ -102.9305f, 0.000007f, -87.42016f },
	{ -159.222f, 0.000004f, -143.7117f },
	{ -67.18038f, 0.000008f, -111.3077f },
	{ -173.6412f, 0.000016f, -158.1308f },
	{ -25.99515f, 0.000008999999f, -119.4999f },
	{ 14.9897f, -0.00042f, -219.4999f },
	{ 214.9895f, 0.000004f, -119.5001f },
	{ 214.9898f, 0.000004f, -199.4999f },
	{ 94.98978f, -0.00002f, -199.4999f },
	{ 94.98978f, 0.000004f, 100.5001f },
	{ 94.49731f, 0.000007f, -119.4999f },
	{ 94.98978f, 0.000004f, 180.5f },
	{ 214.9898f, 0.000003f, 180.5f },
	{ 214.9898f, 70, 100.5001f },
	{ -25.99513f, 70, 100.5001f },
	{ -24.02533f, 69.99998f, 180.5f },
	{ -67.18037f, 70, 92.30779f },
	{ -97.64514f, 69.99998f, 165.8561f },
	{ -102.9305f, 70, 68.42034f },
	{ -159.222f, 69.99998f, 124.7118f },
	{ -126.818f, 70, 32.6702f },
	{ -200.3663f, 69.99998f, 63.13495f },
	{ -135.2061f, 70, -9.499939f },
	{ -214.8143f, 70, -9.499907f },
	{ -126.818f, 70.00001f, -51.67004f },
	{ -200.3664f, 70, -82.13477f },
	{ -102.9305f, 70.00001f, -87.42016f },
	{ -159.222f, 70, -143.7117f },
	{ -67.18038f, 70.00001f, -111.3077f },
	{ -173.0835f, 70.50001f, -157.573f },
	{ -25.99515f, 70.00001f, -119.4999f },
	{ 14.98975f, 71.50001f, -219.4999f },
	{ 214.9895f, 70, -119.5001f },
	{ 214.9898f, 70, -199.4999f },
	{ 94.98978f, 70, -199.4999f },
	{ 94.98978f, 70, 100.5001f },
	{ 94.49731f, 70.00001f, -119.4999f },
	{ 94.98974f, 70.00001f, 180.5001f },
	{ 214.9898f, 70, 180.5f },
	{ 14.98975f, -0.00002f, 180.5001f },
	{ 14.98975f, 70.00001f, 180.5001f },
	{ 15.48223f, 70, -199.4999f },
	{ 15.48221f, 0.000004f, -199.4999f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0001C0B4[] = {
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.098017f, 0, 0.995185f },
	{ 0.098018f, 0, -0.995185f },
	{ -0.382683f, 0, 0.92388f },
	{ 0.382684f, 0, -0.92388f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.92388f, 0, 0.382683f },
	{ 0.923879f, 0, -0.382684f },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -0.92388f, 0, -0.382684f },
	{ 0.92388f, 0, 0.382683f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.995185f, 0, -0.098019f },
	{ -0.382684f, 0, -0.923879f },
	{ 0.707104f, 0, -0.707109f },
	{ -0.098017f, 0, -0.995185f },
	{ -0.999697f, 0.000001f, 0.024617f },
	{ -0.00002f, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.00001f, 0, -1 },
	{ 0, 0.000001f, -1 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.098017f, 0, 0.995185f },
	{ 0.098018f, 0, -0.995185f },
	{ -0.382683f, 0, 0.92388f },
	{ 0.382684f, 0, -0.92388f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.92388f, 0, 0.382683f },
	{ 0.923879f, 0, -0.382684f },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -0.92388f, 0, -0.382684f },
	{ 0.92388f, 0, 0.382683f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.9945149f, 0, -0.104593f },
	{ -0.382684f, 0, -0.923879f },
	{ 0.707104f, 0, -0.707109f },
	{ -0.098017f, 0, -0.995185f },
	{ -0.999697f, 0.000001f, 0.024617f },
	{ -0.00002f, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.00001f, 0, -1 },
	{ 0, 0.000001f, -1 },
	{ -1, 0, 0 },
	{ 0.000001f, 0, -1 },
	{ 0.000001f, 0, -1 },
	{ -0.7144139f, 0, 0.699724f },
	{ -0.698349f, 0, 0.715757f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0001C354 = { vertexSTG12_0001BE14, normalSTG12_0001C0B4, LengthOfArray(vertexSTG12_0001BE14), meshlistSTG12_0001BDFC, NULL, LengthOfArray(meshlistSTG12_0001BDFC), 0,{ 0.08772299f, 35.74998f, -19.49988f }, 293.5692f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0001C37C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0001C354, -154.9897f, -0.00004f, -490.5001f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) Sint16 polySTG12_0001C3C4[] = {
	30, 4, 17, 3, 16, 2, 15, 1, 14, 0, 26, 12, 23, 9, 27, 13, 24, 10, 25, 11, 22, 8, 21, 7, 20, 6, 19, 5, 18, 4, 17
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0001C404[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_0001C3C4, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0001C41C[] = {
	{ -179.0151f, -0.00004f, -410 },
	{ -214.3665f, -0.00003f, -417.0318f },
	{ -243.5011f, -0.00002f, -436.4989f },
	{ -262.9681f, -0.00001f, -465.6334f },
	{ -269.804f, 0, -500 },
	{ -262.9681f, 0.000002f, -534.3665f },
	{ -243.5011f, 0.000003f, -563.501f },
	{ -214.3665f, 0.000004f, -582.9681f },
	{ -179.0151f, 0.000005f, -590 },
	{ 60, 0.000001f, -410 },
	{ 59.99976f, 0, -590.0001f },
	{ -59.50754f, 0.000002f, -590 },
	{ -59.50754f, -0.00001f, -410 },
	{ 59.99989f, 0, -500.0001f },
	{ -179.0151f, 70, -410 },
	{ -214.3665f, 70, -417.0318f },
	{ -243.5011f, 70, -436.4989f },
	{ -262.9681f, 70, -465.6334f },
	{ -269.804f, 70, -500 },
	{ -262.9681f, 70, -534.3665f },
	{ -243.5011f, 70, -563.501f },
	{ -214.3665f, 70, -582.9681f },
	{ -179.0151f, 70, -590 },
	{ 60, 70, -410 },
	{ 59.99976f, 70, -590.0001f },
	{ -59.50754f, 70, -590 },
	{ -59.50754f, 70, -410 },
	{ 59.99989f, 70, -500.0001f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0001C56C[] = {
	{ 0.098017f, 0, -0.995185f },
	{ 0.382683f, 0, -0.92388f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.92388f, 0, -0.382683f },
	{ 1, 0, 0 },
	{ 0.92388f, 0, 0.382683f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.382684f, 0, 0.923879f },
	{ 0.098017f, 0, 0.995185f },
	{ -0.7071069f, 0, -0.707106f },
	{ -0.707106f, 0, 0.707108f },
	{ 0.000001f, 0, 1 },
	{ 0, 0, -1 },
	{ -1, 0, 0.000001f },
	{ 0.098017f, 0, -0.995185f },
	{ 0.382683f, 0, -0.92388f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.92388f, 0, -0.382683f },
	{ 1, 0, 0 },
	{ 0.92388f, 0, 0.382683f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.382684f, 0, 0.923879f },
	{ 0.098017f, 0, 0.995185f },
	{ -0.7071069f, 0, -0.707106f },
	{ -0.707106f, 0, 0.707108f },
	{ 0.000001f, 0, 1 },
	{ 0, 0, -1 },
	{ -1, 0, 0.000001f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0001C6BC = { vertexSTG12_0001C41C, normalSTG12_0001C56C, LengthOfArray(vertexSTG12_0001C41C), meshlistSTG12_0001C404, NULL, LengthOfArray(meshlistSTG12_0001C404), 0,{ -104.902f, 35, -500.0001f }, 187.8635f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0001C6E4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0001C6BC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) Sint16 polySTG12_0001C72C[] = {
	8, 13, 12, 9, 8, 5, 4, 3, 2,
	3, 15, 14, 13,
	0x8000u | 8, 13, 12, 14, 8, 10, 4, 6, 0,
	3, 0, 2, 4,
	3, 1, 7, 3,
	0x8000u | 7, 3, 5, 7, 9, 11, 13, 15,
	4, 0, 1, 2, 3
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0001C784[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, polySTG12_0001C72C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0001C79C[] = {
	{ -60, 70, -860 },
	{ -60, 70, -710 },
	{ -60, 0, -860 },
	{ -60, 0, -710 },
	{ 60, 0, -860 },
	{ 60, 0, -710 },
	{ 60, 70, -860 },
	{ 60, 70, -710 },
	{ 180, 0, -860 },
	{ 180, 0, -710 },
	{ 180, 70, -860 },
	{ 180, 70, -710 },
	{ 300, 0, -860 },
	{ 300, 0, -710 },
	{ 300, 70, -860 },
	{ 300, 70, -710 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0001C85C[] = {
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0001C91C = { vertexSTG12_0001C79C, normalSTG12_0001C85C, LengthOfArray(vertexSTG12_0001C79C), meshlistSTG12_0001C784, NULL, LengthOfArray(meshlistSTG12_0001C784), 0,{ 120, 35, -785 }, 195, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0001C944 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0001C91C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) Sint16 polySTG12_0001C98C[] = {
	4, 26, 27, 12, 13,
	4, 14, 0, 15, 1,
	14, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14,
	0x8000u | 14, 14, 0, 16, 2, 18, 4, 20, 6, 22, 8, 24, 10, 26, 12,
	0x8000u | 14, 1, 15, 3, 17, 5, 19, 7, 21, 9, 23, 11, 25, 13, 27
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0001C9FC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, polySTG12_0001C98C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0001CA14[] = {
	{ -140, 70.00005f, -140 },
	{ -140, 70, -290 },
	{ -188.0301f, 69.99998f, -140 },
	{ -180.9849f, 70, -290 },
	{ -317.6161f, 69.99998f, -167.7654f },
	{ -260.4385f, 70, -305.8043f },
	{ -434.2813f, 69.99998f, -245.7186f },
	{ -328.631f, 70, -351.369f },
	{ -512.2346f, 70, -362.3839f },
	{ -374.1957f, 70, -419.5615f },
	{ -539.6081f, 70.00001f, -499.9999f },
	{ -390.1959f, 70.00001f, -499.9999f },
	{ -512.2346f, 70.00001f, -637.616f },
	{ -374.1957f, 70.00001f, -580.4384f },
	{ -140, 0.000042f, -140 },
	{ -140, -0.00042f, -290 },
	{ -187.8793f, 0.000031f, -140 },
	{ -180.9849f, -0.00003f, -290 },
	{ -318.3658f, 0.000031f, -165.9554f },
	{ -260.4385f, -0.00003f, -305.8043f },
	{ -435.6667f, 0.000032f, -244.3333f },
	{ -328.631f, 0, -351.369f },
	{ -514.0446f, 0.00004f, -361.6342f },
	{ -374.1957f, 0.000002f, -419.5615f },
	{ -541.5673f, 0.000046f, -499.9999f },
	{ -390.1959f, 0.000006f, -499.9999f },
	{ -514.0447f, 0.00005f, -638.3658f },
	{ -374.1957f, 0.00001f, -580.4384f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0001CB64[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.10181f, 0.000219f, -0.994804f },
	{ -0.098017f, 0, 0.995185f },
	{ 0.386027f, -0.013759f, -0.922385f },
	{ -0.382684f, 0, 0.92388f },
	{ 0.70683f, -0.027977f, -0.70683f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.9235179f, -0.027977f, -0.382534f },
	{ -0.923879f, 0, 0.382684f },
	{ 0.999609f, -0.027977f, 0 },
	{ -1, 0, 0 },
	{ 0.463446f, -0.021472f, 0.885865f },
	{ -0.881921f, 0, 0.471397f },
	{ -0.57735f, 0.57735f, -0.577351f },
	{ -0.57735f, 0.577351f, 0.57735f },
	{ 0.07388499f, 0.68591f, -0.7239259f },
	{ -0.06700499f, 0.729849f, 0.680317f },
	{ 0.28966f, 0.661057f, -0.692171f },
	{ -0.251477f, 0.753767f, 0.607119f },
	{ 0.5341049f, 0.655334f, -0.5341049f },
	{ -0.464669f, 0.753768f, 0.464669f },
	{ 0.6978419f, 0.655334f, -0.289056f },
	{ -0.607119f, 0.753767f, 0.251477f },
	{ 0.755339f, 0.655334f, 0 },
	{ -0.657141f, 0.753767f, 0 },
	{ 0.39692f, 0.5596859f, 0.727466f },
	{ -0.713105f, 0.588384f, 0.381163f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0001CCB4 = { vertexSTG12_0001CA14, normalSTG12_0001CB64, LengthOfArray(vertexSTG12_0001CA14), meshlistSTG12_0001C9FC, NULL, LengthOfArray(meshlistSTG12_0001C9FC), 0,{ -340.7837f, 35, -389.1829f }, 320.0096f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0001CCDC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0001CCB4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) Sint16 polySTG12_0001CD24[] = {
	0x8000u | 8, 5, 2, 3, 0, 10, 9, 4, 1,
	0x8000u | 8, 8, 5, 6, 3, 11, 10, 7, 4,
	8, 8, 12, 6, 13, 11, 14, 7, 15,
	8, 27, 18, 19, 20, 21, 22, 23, 17,
	0x8000u | 18, 17, 25, 22, 30, 20, 28, 18, 26, 27, 28, 29, 30, 31, 25, 24, 17, 16, 23
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0001CD94[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, polySTG12_0001CD24, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0001CDAC[] = {
	{ -26.62463f, -29.74998f, 112.8941f },
	{ -41.04382f, -35.74997f, 98.47491f },
	{ -26.62463f, -35.74997f, 112.8941f },
	{ 34.95225f, -29.74997f, 71.74976f },
	{ 27.14865f, -35.74996f, 52.91015f },
	{ 34.95225f, -35.74997f, 71.74976f },
	{ 108.5721f, -29.74997f, 57.10583f },
	{ 106.6022f, -35.74996f, 37.10583f },
	{ 108.5721f, -35.74997f, 57.10583f },
	{ -41.04382f, -29.74997f, 98.47491f },
	{ 27.14865f, -29.74996f, 52.91015f },
	{ 106.6022f, -29.74996f, 37.10583f },
	{ 148.0796f, -35.74997f, 57.10583f },
	{ 148.0796f, -29.74998f, 57.10583f },
	{ 147.5871f, -29.75002f, 37.10583f },
	{ 147.5871f, -35.75002f, 37.10583f },
	{ 147.5871f, 35.75002f, 37.10583f },
	{ 147.5871f, 34.25002f, -112.8942f },
	{ -146.6943f, 34.25005f, -7.175476f },
	{ -40.48611f, 34.75002f, 99.03265f },
	{ -30.02893f, 34.25005f, -85.12878f },
	{ 27.14865f, 34.25003f, 52.91015f },
	{ 109.557f, 34.25005f, -112.8942f },
	{ 106.6022f, 34.25003f, 37.10583f },
	{ 147.5871f, -35.75002f, 37.10583f },
	{ 147.5872f, -35.74993f, -112.8942f },
	{ -148.0796f, -35.74992f, -8.560851f },
	{ -41.04382f, -35.74997f, 98.47491f },
	{ -30.77869f, -35.74991f, -86.93884f },
	{ 27.14865f, -35.74996f, 52.91015f },
	{ 109.7079f, -35.74991f, -112.8942f },
	{ 106.6022f, -35.74996f, 37.10583f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0001CF2C[] = {
	{ 0.369101f, 0.747409f, 0.552399f },
	{ -0.5555699f, 0, -0.83147f },
	{ 0.5555699f, 0, 0.83147f },
	{ 0.251477f, 0.753767f, 0.60712f },
	{ -0.382684f, 0, -0.92388f },
	{ 0.382684f, 0, 0.92388f },
	{ 0.067006f, 0.729849f, 0.680317f },
	{ -0.098017f, 0, -0.995185f },
	{ 0.098017f, 0, 0.995185f },
	{ -0.418109f, 0.658505f, -0.625744f },
	{ -0.285559f, 0.665719f, -0.689401f },
	{ -0.07134499f, 0.685697f, -0.724382f },
	{ 0, 0, 1 },
	{ 0.000001f, 0.701499f, 0.71267f },
	{ 0.000001f, 0.7125829f, -0.701587f },
	{ 0, 0, -1 },
	{ -0.698123f, -0.715942f, 0.007159f },
	{ -0.570585f, -0.577741f, 0.5836509f },
	{ 0.814405f, -0.575754f, 0.072477f },
	{ 0.467654f, -0.7494839f, -0.468586f },
	{ 0.278886f, -0.676251f, 0.681841f },
	{ -0.001064f, -0.999999f, 0.00044f },
	{ 0.07522599f, -0.688698f, 0.721135f },
	{ 0.008819999f, -0.99995f, 0.004646f },
	{ -0.707106f, 0.7071069f, 0 },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.823985f, 0.5596859f, 0.088317f },
	{ 0.471636f, 0.7450629f, -0.471636f },
	{ 0.287214f, 0.653721f, 0.700112f },
	{ 0, 1, 0 },
	{ 0.069089f, 0.681996f, 0.728085f },
	{ 0.000001f, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0001D0AC = { vertexSTG12_0001CDAC, normalSTG12_0001CF2C, LengthOfArray(vertexSTG12_0001CDAC), meshlistSTG12_0001CD94, NULL, LengthOfArray(meshlistSTG12_0001CD94), 0,{ 0.000015f, 0, -0.00031f }, 186.2059f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0001D0D4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0001D0AC, -287.5871f, 35.74997f, -747.1058f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) Sint16 polySTG12_0001D11C[] = {
	0x8000u | 10, 4, 3, 10, 7, 9, 6, 11, 8, 5, 2,
	0x8000u | 10, 14, 13, 0, 17, 19, 16, 1, 18, 15, 12
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0001D148[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, polySTG12_0001D11C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0001D160[] = {
	{ 105, -40, 39.99988f },
	{ -135, -40, 39.99988f },
	{ 220, 30, -39.99982f },
	{ -255, 30, -39.99963f },
	{ -255, -40, -39.99963f },
	{ 220, -40, -39.99982f },
	{ -15, 30, -39.99976f },
	{ -135, 30, -39.99969f },
	{ 105, 30, -39.99976f },
	{ -15, -40, -39.99976f },
	{ -135, -40, -39.99969f },
	{ 105, -40, -39.99976f },
	{ -255, 30, 39.99988f },
	{ 220, 30, 39.99988f },
	{ 220, -40, 39.99988f },
	{ -255, -40, 39.99988f },
	{ -15, 30, 39.99988f },
	{ 105, 30, 39.99988f },
	{ -135, 30, 39.99988f },
	{ -15, -40, 39.99988f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0001D250[] = {
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0.000001f, 0, 1 },
	{ 0.000001f, 0, 1 },
	{ 0.000001f, 0, 1 },
	{ 0.000001f, 0, 1 },
	{ 0, 0, 1 },
	{ 0.000001f, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.000001f, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0001D340 = { vertexSTG12_0001D160, normalSTG12_0001D250, LengthOfArray(vertexSTG12_0001D160), meshlistSTG12_0001D148, NULL, LengthOfArray(meshlistSTG12_0001D148), 0,{ -17.5f, -5, 0.000031f }, 240.8448f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0001D368 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0001D340, 315, 40, -649.9999f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) Sint16 polySTG12_0001D3B0[] = {
	0x8000u | 8, 3, 7, 2, 6, 1, 5, 0, 4
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0001D3C4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_0001D3B0, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0001D3DC[] = {
	{ -152.6039f, -44.5f, -8.294556f },
	{ -108.2851f, -44.50001f, 98.70037f },
	{ -26.39459f, -44.50001f, 180.5908f },
	{ 80.60034f, -44.50001f, 224.9096f },
	{ -152.6039f, 65.5f, -8.294556f },
	{ -108.2851f, 65.49998f, 98.70037f },
	{ -26.39459f, 65.49998f, 180.5908f },
	{ 80.60034f, 65.49998f, 224.9096f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0001D43C[] = {
	{ 0.923879f, 0, -0.382684f },
	{ 0.831469f, 0, -0.5555699f },
	{ 0.5555699f, 0, -0.83147f },
	{ 0.382684f, 0, -0.923879f },
	{ 0.923879f, 0, -0.382684f },
	{ 0.831469f, 0, -0.5555699f },
	{ 0.5555699f, 0, -0.83147f },
	{ 0.382684f, 0, -0.923879f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0001D49C = { vertexSTG12_0001D3DC, normalSTG12_0001D43C, LengthOfArray(vertexSTG12_0001D3DC), meshlistSTG12_0001D3C4, NULL, LengthOfArray(meshlistSTG12_0001D3C4), 0,{ -36.00177f, 10.49999f, 108.3075f }, 164.9003f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0001D4C4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0001D49C, 611.4944f, 134.5f, -583.8f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) Sint16 polySTG12_0001D50C[] = {
	0x8000u | 8, 12, 28, 13, 29, 14, 30, 15, 31,
	0x8000u | 8, 23, 7, 22, 6, 21, 5, 20, 4,
	0x8000u | 8, 8, 24, 9, 25, 10, 26, 11, 27,
	0x8000u | 8, 19, 3, 18, 2, 17, 1, 16, 0
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0001D554[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, polySTG12_0001D50C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0001D56C[] = {
	{ 946.157f, 79.00011f, -689.0181f },
	{ 916.2939f, 79.00011f, -761.1141f },
	{ 861.114f, 79.00011f, -816.294f },
	{ 789.018f, 79.00011f, -846.1572f },
	{ 710.9819f, 79.00011f, -846.1572f },
	{ 638.8859f, 79.00011f, -816.2939f },
	{ 583.7061f, 79.00011f, -761.1141f },
	{ 551.843f, 79.00011f, -689.0181f },
	{ 551.843f, 79.00011f, -610.982f },
	{ 583.7061f, 79.00009f, -538.886f },
	{ 638.886f, 79.00009f, -483.7062f },
	{ 710.4117f, 78.9999f, -453.705f },
	{ 789.5884f, 78.9999f, -453.7048f },
	{ 861.1141f, 79.00009f, -483.7062f },
	{ 916.2939f, 79.00009f, -538.8861f },
	{ 946.157f, 79.00011f, -610.9822f },
	{ 946.157f, 0.00011f, -689.0181f },
	{ 916.2939f, 0.000117f, -761.1141f },
	{ 861.114f, 0.000121f, -816.294f },
	{ 789.018f, 0.000124f, -846.1572f },
	{ 710.9819f, 0.000124f, -846.1572f },
	{ 638.8859f, 0.000121f, -816.2939f },
	{ 583.7061f, 0.000117f, -761.1141f },
	{ 551.843f, 0.00011f, -689.0181f },
	{ 551.843f, 0.000103f, -610.982f },
	{ 583.7061f, 0.000097f, -538.886f },
	{ 638.886f, 0.00009199999f, -483.7062f },
	{ 710.4117f, -0.000101f, -453.705f },
	{ 789.5884f, -0.000101f, -453.7048f },
	{ 861.1141f, 0.00009199999f, -483.7062f },
	{ 916.2939f, 0.000097f, -538.8861f },
	{ 946.157f, 0.000103f, -610.9822f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0001D6EC[] = {
	{ -0.92388f, 0, 0.382683f },
	{ -0.83147f, 0, 0.5555699f },
	{ -0.5555699f, 0, 0.83147f },
	{ -0.382683f, 0, 0.92388f },
	{ 0.382684f, 0, 0.92388f },
	{ 0.5555699f, 0, 0.83147f },
	{ 0.8249f, 0, 0.565278f },
	{ 0.914655f, 0, 0.404235f },
	{ 0.914655f, 0, -0.404236f },
	{ 0.8249f, 0, -0.5652789f },
	{ 0.557422f, 0, -0.830229f },
	{ 0.386798f, 0, -0.922164f },
	{ -0.386801f, 0, -0.922163f },
	{ -0.5574239f, 0, -0.830228f },
	{ -0.83147f, 0, -0.5555699f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.83147f, 0, 0.5555699f },
	{ -0.5555699f, 0, 0.83147f },
	{ -0.382683f, 0, 0.92388f },
	{ 0.382684f, 0, 0.92388f },
	{ 0.5555699f, 0, 0.83147f },
	{ 0.8249f, 0, 0.565278f },
	{ 0.914655f, 0, 0.404235f },
	{ 0.914655f, 0, -0.404236f },
	{ 0.8249f, 0, -0.5652789f },
	{ 0.557422f, 0, -0.830229f },
	{ 0.386798f, 0, -0.922164f },
	{ -0.386801f, 0, -0.922163f },
	{ -0.5574239f, 0, -0.830228f },
	{ -0.83147f, 0, -0.5555699f },
	{ -0.92388f, 0, -0.382683f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0001D86C = { vertexSTG12_0001D56C, normalSTG12_0001D6EC, LengthOfArray(vertexSTG12_0001D56C), meshlistSTG12_0001D554, NULL, LengthOfArray(meshlistSTG12_0001D554), 0,{ 749, 39.50001f, -649.9309f }, 278.1647f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0001D894 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0001D86C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0001D8C8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 72, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 76, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 72, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 44, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 74, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001D954[] = {
	3, 17, 3, 18,
	0x8000u | 6, 18, 10, 3, 9, 5, 26,
	3, 25, 0, 24,
	0x8000u | 6, 24, 6, 0, 8, 2, 14,
	3, 27, 9, 26,
	3, 13, 8, 14
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001D990[] = {
	6, 26, 22, 27, 23, 24, 20,
	6, 24, 20, 25, 21, 26, 22
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001D9AC[] = {
	4, 9, 27, 6, 24,
	4, 0, 25, 5, 26,
	4, 7, 11, 8, 10,
	4, 8, 13, 7, 12,
	4, 11, 19, 10, 18
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001D9DE[] = {
	4, 9, 6, 10, 8
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001D9E8[] = {
	3, 3, 4, 5,
	4, 3, 17, 4, 16,
	0x8000u | 5, 14, 15, 2, 1, 0
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001DA06[] = {
	4, 4, 16, 1, 15,
	4, 0, 5, 1, 4
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001DA1C[] = {
	{ 1, -1261 },
	{ 77, -1261 },
	{ 1, 243 },
	{ 1, 243 },
	{ 77, 243 },
	{ 77, -1261 },
	{ 213, 243 },
	{ 213, -1261 },
	{ 253, -1261 },
	{ 1, -1261 },
	{ 45, -1261 },
	{ 1, 243 },
	{ 1, 243 },
	{ 45, 243 },
	{ 45, -1261 },
	{ 177, 243 },
	{ 177, -1261 },
	{ 253, -1261 },
	{ 253, 243 },
	{ 213, 243 },
	{ 253, -1261 },
	{ 253, 243 },
	{ 177, 243 },
	{ 253, -1261 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001DA7C[] = {
	{ 0 },
	{ 0, 254 },
	{ 1529, 0 },
	{ 1529, 254 },
	{ 0 },
	{ 0, 255 },
	{ 1529, 0 },
	{ 1530, 255 },
	{ 0 },
	{ 0, 254 },
	{ 1529, 0 },
	{ 1529, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001DAAC[] = {
	{ 105, -504 },
	{ 213, -504 },
	{ 105, 249 },
	{ 213, 249 },
	{ 105, -504 },
	{ 213, -504 },
	{ 105, 249 },
	{ 213, 249 },
	{ 1, 153 },
	{ 1, -408 },
	{ 121, 153 },
	{ 121, -408 },
	{ 121, -408 },
	{ 121, -504 },
	{ 1, -408 },
	{ 1, -504 },
	{ 1, 153 },
	{ 1, 249 },
	{ 121, 153 },
	{ 121, 249 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001DAFC[] = {
	{ 0 },
	{ 1530, 0 },
	{ 0, 255 },
	{ 1530, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001DB0C[] = {
	{ 61, 253 },
	{ 141, 1 },
	{ 253, 253 },
	{ 141, 1 },
	{ 61, 1 },
	{ 61, 253 },
	{ 1, 253 },
	{ 1, 253 },
	{ 61, 1 },
	{ 61, 253 },
	{ 141, 1 },
	{ 253, 253 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001DB3C[] = {
	{ 11, 53 },
	{ 11, 1 },
	{ 498, 53 },
	{ 490, 1 },
	{ 506, 253 },
	{ 3, 253 },
	{ 506, 1 },
	{ 3, 1 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0001DB5C[] = {
	{ NJD_MESHSET_TRIMESH | 1, 6, polySTG12_0001D954, NULL, NULL, NULL, uvSTG12_0001DA1C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, polySTG12_0001D990, NULL, NULL, NULL, uvSTG12_0001DA7C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 5, polySTG12_0001D9AC, NULL, NULL, NULL, uvSTG12_0001DAAC, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, polySTG12_0001D9DE, NULL, NULL, NULL, uvSTG12_0001DAFC, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 3, polySTG12_0001D9E8, NULL, NULL, NULL, uvSTG12_0001DB0C, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, polySTG12_0001DA06, NULL, NULL, NULL, uvSTG12_0001DB3C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0001DBEC[] = {
	{ -13.10542f, -15, -165.4601f },
	{ -13.35003f, -10.5f, -163.0001f },
	{ -15.35003f, -15.89999f, -163.5f },
	{ 15.14998f, -15.39999f, -163.5f },
	{ 12.65002f, -10.5f, -163.0002f },
	{ 12.73001f, -15, -165.4601f },
	{ -13.10545f, -44.49998f, -165.4601f },
	{ -16.35001f, -50, -163.5f },
	{ -15.35003f, -44.5f, -163.5f },
	{ 12.73001f, -44.49998f, -165.4601f },
	{ 15.14998f, -44.5f, -163.5f },
	{ 16.14998f, -50, -163.5001f },
	{ -17.35001f, -50, -167.5f },
	{ -16.35002f, -44.5f, -167.5f },
	{ -16.34997f, -15.89999f, -167.5f },
	{ -13.35006f, -9, -167.5002f },
	{ 12.64996f, -9, -167.5f },
	{ 16.15004f, -15.89999f, -167.5f },
	{ 16.15001f, -44.5f, -167.5f },
	{ 17.14998f, -50, -167.5f },
	{ -13.10177f, -44.50027f, -172.2104f },
	{ -13.10226f, -15, -172.2093f },
	{ 12.73318f, -15, -172.2093f },
	{ 12.72996f, -44.49998f, -172.21f },
	{ -13.10363f, -44.50012f, -167.8353f },
	{ -13.10382f, -15, -167.8347f },
	{ 12.73161f, -15, -167.8347f },
	{ 12.72997f, -44.49998f, -167.8351f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0001DD3C[] = {
	{ 0.618262f, -0.506102f, 0.601343f },
	{ -0.41751f, 0.38455f, 0.82329f },
	{ -0.384354f, 0.075358f, 0.920105f },
	{ 0.420831f, 0.122427f, 0.89884f },
	{ 0.385631f, 0.409013f, 0.827041f },
	{ -0.598666f, -0.511497f, 0.616417f },
	{ 0.5300699f, 0.812964f, 0.241071f },
	{ -0.650946f, 0.118349f, 0.749842f },
	{ -0.455726f, 0.229766f, 0.859954f },
	{ -0.519285f, 0.817964f, 0.247543f },
	{ 0.461348f, 0.218841f, 0.8598059f },
	{ 0.6509449f, 0.11835f, 0.749842f },
	{ -0.955394f, 0.173704f, 0.238848f },
	{ -0.966348f, 0.088372f, 0.241583f },
	{ -0.964451f, 0.161492f, 0.209175f },
	{ -0.5031959f, 0.809959f, 0.301266f },
	{ 0.46536f, 0.838084f, 0.284701f },
	{ 0.9574f, 0.198974f, 0.209273f },
	{ 0.966345f, 0.088372f, 0.241596f },
	{ 0.9553919f, 0.173705f, 0.238855f },
	{ 0.706994f, 0.7072189f, 0.000264f },
	{ 0.707038f, -0.707176f, 0.000277f },
	{ -0.707213f, -0.707001f, -0.000126f },
	{ -0.707079f, 0.707135f, -0.000138f },
	{ 0.707064f, 0.70715f, 0.000376f },
	{ 0.707072f, -0.707141f, 0.000393f },
	{ -0.7071519f, -0.707061f, -0.00018f },
	{ -0.707097f, 0.707117f, -0.000196f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0001DE8C = { vertexSTG12_0001DBEC, normalSTG12_0001DD3C, LengthOfArray(vertexSTG12_0001DBEC), meshlistSTG12_0001DB5C, matlistSTG12_0001D8C8, LengthOfArray(meshlistSTG12_0001DB5C), LengthOfArray(matlistSTG12_0001D8C8),{ -0.100019f, -29.5f, -167.6052f }, 21.01089f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0001DEB4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0001DE8C, 0, 50, -167.5f, 0, 0xFFFF8000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0001DEE8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 63, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 24, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001DFB0[] = {
	10, 20, 15, 35, 25, 102, 104, 98, 100, 8, 13,
	10, 10, 5, 118, 120, 54, 56, 50, 52, 28, 33,
	6, 27, 32, 49, 51, 53, 55,
	6, 7, 12, 97, 99, 101, 103
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001DFF8[] = {
	0x8000u | 18, 64, 36, 57, 1, 58, 6, 59, 11, 60, 16, 61, 21, 62, 26, 63, 31, 64, 36,
	0x8000u | 18, 96, 88, 89, 81, 90, 82, 91, 83, 92, 84, 93, 85, 94, 86, 95, 87, 96, 88
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001E044[] = {
	0x8000u | 18, 64, 72, 63, 71, 62, 70, 61, 69, 60, 68, 59, 67, 58, 66, 57, 65, 64, 72,
	0x8000u | 18, 88, 80, 81, 73, 82, 74, 83, 75, 84, 76, 85, 77, 86, 78, 87, 79, 88, 80
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001E090[] = {
	4, 24, 0, 19, 14,
	0x8000u | 5, 39, 34, 0, 29, 24,
	18, 1, 48, 36, 47, 31, 46, 26, 45, 21, 44, 16, 43, 11, 42, 6, 41, 1, 48,
	5, 39, 4, 0, 9, 14,
	6, 116, 115, 110, 109, 45, 44
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001E0E6[] = {
	0x8000u | 18, 3, 4, 8, 9, 13, 14, 18, 19, 23, 24, 28, 29, 33, 34, 38, 39, 3, 4,
	3, 12, 17, 13,
	0x8000u | 8, 13, 18, 17, 106, 105, 112, 111, 113,
	0x8000u | 7, 112, 114, 113, 108, 107, 23, 22,
	4, 28, 23, 27, 22,
	0x8000u | 8, 32, 33, 37, 38, 2, 3, 7, 8
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001E152[] = {
	0x8000u | 18, 80, 72, 73, 65, 74, 66, 75, 67, 76, 68, 77, 69, 78, 70, 79, 71, 80, 72
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001E178[] = {
	16, 44, 12, 43, 7, 42, 2, 41, 37, 48, 32, 47, 27, 46, 22, 45, 110,
	0x8000u | 5, 111, 113, 116, 107, 110,
	0x8000u | 8, 116, 115, 111, 109, 105, 44, 17, 12,
	3, 22, 107, 110
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001E1C0[] = {
	3, 30, 25, 15,
	3, 35, 40, 20,
	3, 5, 119, 120,
	3, 118, 117, 10,
	6, 32, 33, 51, 52, 55, 56,
	6, 28, 27, 50, 49, 54, 53,
	4, 97, 98, 7, 8,
	6, 12, 13, 99, 100, 103, 104
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001E214[] = {
	6, 112, 114, 106, 108, 18, 23
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001E224[] = {
	{ 253, 2032 },
	{ -253, 2032 },
	{ 253, 1649 },
	{ -253, 1649 },
	{ 253, 757 },
	{ -253, 757 },
	{ 253, 374 },
	{ -253, 374 },
	{ 253, 7 },
	{ -253, 7 },
	{ 253, 2032 },
	{ -253, 2032 },
	{ 253, 1649 },
	{ -253, 1649 },
	{ 253, 757 },
	{ -253, 757 },
	{ 253, 374 },
	{ -253, 374 },
	{ 253, 7 },
	{ -253, 7 },
	{ 0, -510 },
	{ 510, -510 },
	{ 0, 3 },
	{ 510, 3 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, -510 },
	{ 510, -510 },
	{ 0, -124 },
	{ 510, -124 },
	{ 0, 255 },
	{ 510, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001E2A4[] = {
	{ 31, 253 },
	{ 31, 1 },
	{ 541, 253 },
	{ 541, 1 },
	{ 1051, 253 },
	{ 1051, 1 },
	{ 1561, 253 },
	{ 1561, 1 },
	{ 2071, 253 },
	{ 2071, 1 },
	{ 2581, 253 },
	{ 2581, 1 },
	{ 3091, 253 },
	{ 3091, 1 },
	{ 3601, 253 },
	{ 3601, 1 },
	{ 4048, 253 },
	{ 4048, 1 },
	{ 31, 253 },
	{ 31, 1 },
	{ 478, 253 },
	{ 478, 1 },
	{ 988, 253 },
	{ 988, 1 },
	{ 1498, 253 },
	{ 1498, 1 },
	{ 2008, 253 },
	{ 2008, 1 },
	{ 2518, 253 },
	{ 2518, 1 },
	{ 3028, 253 },
	{ 3028, 1 },
	{ 3538, 253 },
	{ 3538, 1 },
	{ 4048, 253 },
	{ 4048, 1 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001E334[] = {
	{ 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 1530, 0 },
	{ 1530, 255 },
	{ 2040, 0 },
	{ 2040, 255 },
	{ 2550, 0 },
	{ 2550, 255 },
	{ 3060, 0 },
	{ 3060, 255 },
	{ 3570, 0 },
	{ 3570, 255 },
	{ 4070, 0 },
	{ 4068, 254 },
	{ 4080, 255 },
	{ 4080, 1 },
	{ 3570, 255 },
	{ 3570, 0 },
	{ 3061, 255 },
	{ 3060, 0 },
	{ 2550, 255 },
	{ 2550, 0 },
	{ 2040, 255 },
	{ 2040, 0 },
	{ 1530, 255 },
	{ 1530, 0 },
	{ 1021, 255 },
	{ 1020, 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001E3C4[] = {
	{ 0, -764 },
	{ 1019, -764 },
	{ 298, -37 },
	{ 1040, 255 },
	{ 1739, -1490 },
	{ 999, -1784 },
	{ 1019, -764 },
	{ 318, -1498 },
	{ 0, -764 },
	{ 1646, -764 },
	{ 1808, -1490 },
	{ 1530, -1128 },
	{ 1236, -1784 },
	{ 1251, -1276 },
	{ 708, -1498 },
	{ 972, -1128 },
	{ 464, -764 },
	{ 856, -764 },
	{ 693, -38 },
	{ 972, -400 },
	{ 1265, 255 },
	{ 1251, -251 },
	{ 1793, -31 },
	{ 1530, -400 },
	{ 2039, -764 },
	{ 1646, -764 },
	{ 1808, -1490 },
	{ 1739, -1490 },
	{ 2039, -764 },
	{ 1019, -764 },
	{ 1720, -29 },
	{ 1040, 255 },
	{ 0, -350 },
	{ 147, 113 },
	{ 62, -548 },
	{ 292, 178 },
	{ 464, -764 },
	{ 693, -38 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001E45C[] = {
	{ 255, -7905 },
	{ 0, -7905 },
	{ 254, -6861 },
	{ 0, -6858 },
	{ 255, -5889 },
	{ 0, -5893 },
	{ 255, -4846 },
	{ 0, -4847 },
	{ 255, -3825 },
	{ 0, -3825 },
	{ 254, -2783 },
	{ 0, -2778 },
	{ 255, -1808 },
	{ 0, -1813 },
	{ 255, -768 },
	{ 0, -768 },
	{ 254, 255 },
	{ 0, 255 },
	{ 255, -765 },
	{ 255, 255 },
	{ 0, -765 },
	{ 0, -765 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -589 },
	{ 255, -589 },
	{ 0, -888 },
	{ 255, -888 },
	{ 255, -1640 },
	{ 0, -888 },
	{ 0, -1640 },
	{ 255, -1640 },
	{ 0, -1959 },
	{ 255, -1959 },
	{ 0, -2804 },
	{ 255, -2804 },
	{ 0, 255 },
	{ 0, -765 },
	{ 255, 255 },
	{ 255, -765 },
	{ 255, -2805 },
	{ 0, -2805 },
	{ 255, -1777 },
	{ 0, -1777 },
	{ 255, -768 },
	{ 0, -768 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001E51C[] = {
	{ 3, 253 },
	{ 3, -253 },
	{ 127, 255 },
	{ 127, -255 },
	{ 254, 255 },
	{ 254, -255 },
	{ 382, 255 },
	{ 382, -255 },
	{ 510, 255 },
	{ 510, -255 },
	{ 637, 255 },
	{ 637, -255 },
	{ 765, 255 },
	{ 765, -255 },
	{ 892, 255 },
	{ 892, -255 },
	{ 1020, 255 },
	{ 1020, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001E564[] = {
	{ 6534, 68 },
	{ 5641, 184 },
	{ 5641, 68 },
	{ 4813, 184 },
	{ 4813, 68 },
	{ 3984, 184 },
	{ 3984, 68 },
	{ 3155, 184 },
	{ 3155, 68 },
	{ 2326, 184 },
	{ 2326, 68 },
	{ 1498, 184 },
	{ 1498, 68 },
	{ 669, 184 },
	{ 669, 68 },
	{ 31, 68 },
	{ 7426, 184 },
	{ 7873, 184 },
	{ 7873, 68 },
	{ 8128, 184 },
	{ 8128, 68 },
	{ 7873, 68 },
	{ 7426, 68 },
	{ 7426, 184 },
	{ 7171, 68 },
	{ 7171, 184 },
	{ 6534, 68 },
	{ 6534, 184 },
	{ 5641, 184 },
	{ 669, 184 },
	{ 31, 184 },
	{ 31, 68 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001E5E4[] = {
	{ 3554, 141 },
	{ 3554, 0 },
	{ 3739, 141 },
	{ 4411, 0 },
	{ 4411, 141 },
	{ 4590, 141 },
	{ 848, 141 },
	{ 1034, 141 },
	{ 1034, 0 },
	{ 176, 0 },
	{ 176, 141 },
	{ 0, 141 },
	{ 2273, 255 },
	{ 2273, 113 },
	{ 1917, 141 },
	{ 1917, 0 },
	{ 1745, 141 },
	{ 1745, 0 },
	{ 1420, 113 },
	{ 1420, 255 },
	{ 1067, 0 },
	{ 1067, 141 },
	{ 887, 0 },
	{ 887, 141 },
	{ 3432, 141 },
	{ 3432, 0 },
	{ 3167, 255 },
	{ 3167, 113 },
	{ 2314, 255 },
	{ 2314, 113 },
	{ 2581, 141 },
	{ 2581, 0 },
	{ 2841, 141 },
	{ 2841, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001E66C[] = {
	{ 0, 162 },
	{ 6, -159 },
	{ 104, 248 },
	{ 113, -254 },
	{ 500, 255 },
	{ 508, -248 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0001E684[] = {
	{ NJD_MESHSET_TRIMESH | 1, 4, polySTG12_0001DFB0, NULL, NULL, NULL, uvSTG12_0001E224, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, polySTG12_0001DFF8, NULL, NULL, NULL, uvSTG12_0001E2A4, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, polySTG12_0001E044, NULL, NULL, NULL, uvSTG12_0001E334, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 5, polySTG12_0001E090, NULL, NULL, NULL, uvSTG12_0001E3C4, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 6, polySTG12_0001E0E6, NULL, NULL, NULL, uvSTG12_0001E45C, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 1, polySTG12_0001E152, NULL, NULL, NULL, uvSTG12_0001E51C, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 4, polySTG12_0001E178, NULL, NULL, NULL, uvSTG12_0001E564, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 8, polySTG12_0001E1C0, NULL, NULL, NULL, uvSTG12_0001E5E4, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 1, polySTG12_0001E214, NULL, NULL, NULL, uvSTG12_0001E66C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0001E75C[] = {
	{ -0.00059f, 16, 0.000076f },
	{ 27.19992f, 5, 0.00007099999f },
	{ 54.39994f, 10, 0.00006499999f },
	{ 54.39994f, 15, 0.00006499999f },
	{ 46.26714f, 16, 0.00006699999f },
	{ -62.15325f, 14, 201.838f },
	{ 19.23323f, 5, -19.23322f },
	{ 37.54264f, 10, -38.84922f },
	{ 37.54264f, 15, -38.84922f },
	{ 31.79189f, 16, -33.09845f },
	{ -98.77207f, 14, 186.67f },
	{ -0.00064f, 5, -27.19991f },
	{ 0.9238099f, 10, -54.01719f },
	{ 0.9238099f, 15, -54.01719f },
	{ 0.923812f, 16, -45.88439f },
	{ 62.15306f, 14, -201.8378f },
	{ -19.23335f, 5, -19.23322f },
	{ -38.46666f, 10, -38.4665f },
	{ -38.46666f, 15, -38.4665f },
	{ -32.7159f, 16, -32.71573f },
	{ 98.772f, 14, -186.6698f },
	{ -27.20005f, 5, 0.000081f },
	{ -54.40001f, 10, 0.00008599999f },
	{ -54.40001f, 15, 0.00008599999f },
	{ -46.2672f, 16, 0.000084f },
	{ 54.23199f, 19, -183.1908f },
	{ -19.23335f, 5, 19.23336f },
	{ -37.54275f, 10, 38.84936f },
	{ -37.54275f, 15, 38.84936f },
	{ -31.79201f, 16, 33.09859f },
	{ 54.23203f, 14, -183.1908f },
	{ -0.00054f, 5, 27.20006f },
	{ -0.923928f, 10, 54.01736f },
	{ -0.923928f, 15, 54.01736f },
	{ -0.92393f, 16, 45.88456f },
	{ 91.18716f, 19, -167.8835f },
	{ 19.23323f, 5, 19.23336f },
	{ 38.46654f, 10, 38.46664f },
	{ 38.46654f, 15, 38.46664f },
	{ 32.71577f, 16, 32.71588f },
	{ 91.18714f, 14, -167.8835f },
	{ 54.39994f, 5, 0.00006499999f },
	{ 37.54264f, 5, -38.84922f },
	{ 0.9238099f, 5, -54.01719f },
	{ -38.46666f, 5, -38.4665f },
	{ -54.40001f, 5, 0.00008599999f },
	{ -37.54275f, 5, 38.84936f },
	{ -0.923928f, 5, 54.01736f },
	{ 38.46654f, 5, 38.46664f },
	{ -52.85008f, 14, 75.8045f },
	{ -52.85008f, 19, 75.8045f },
	{ -16.23126f, 14, 90.9725f },
	{ -16.23126f, 19, 90.9725f },
	{ -60.57288f, 14, 93.97308f },
	{ -60.57288f, 19, 93.97308f },
	{ -23.61766f, 14, 109.2804f },
	{ -23.61766f, 19, 109.2804f },
	{ 27.19992f, -2, 0.00007099999f },
	{ 19.23323f, -2, -19.23322f },
	{ -0.00064f, -2, -27.19991f },
	{ -19.23335f, -2, -19.23322f },
	{ -27.20005f, -2, 0.000081f },
	{ -19.23335f, -2, 19.23336f },
	{ -0.00054f, -2, 27.20006f },
	{ 19.23323f, -2, 19.23336f },
	{ 22.03192f, -3, 0.000072f },
	{ 15.57891f, -3, -15.57889f },
	{ -0.00063f, -3, -22.03191f },
	{ -15.57902f, -3, -15.57888f },
	{ -22.03204f, -3, 0.00008f },
	{ -15.57902f, -3, 15.57905f },
	{ -0.00055f, -3, 22.03206f },
	{ 15.57891f, -3, 15.57904f },
	{ 22.03192f, -57, 0.000072f },
	{ 15.57891f, -57, -15.57889f },
	{ -0.00063f, -57, -22.03191f },
	{ -15.57902f, -57, -15.57888f },
	{ -22.03204f, -57, 0.00008f },
	{ -15.57902f, -57, 15.57905f },
	{ -0.00055f, -57, 22.03206f },
	{ 15.57891f, -57, 15.57904f },
	{ 27.37027f, -58, 0.00007099999f },
	{ 19.35368f, -58, -19.16205f },
	{ -0.00064f, -58, -27.09926f },
	{ -19.3538f, -58, -19.16205f },
	{ -27.3704f, -58, 0.000081f },
	{ -19.3538f, -58, 19.16219f },
	{ -0.00054f, -58, 27.0994f },
	{ 19.35368f, -58, 19.16219f },
	{ 27.37027f, -66, 0.00007099999f },
	{ 19.35368f, -66, -19.16205f },
	{ -0.00064f, -66, -27.09926f },
	{ -19.3538f, -66, -19.16205f },
	{ -27.3704f, -66, 0.000081f },
	{ -19.3538f, -66, 19.16219f },
	{ -0.00054f, -66, 27.0994f },
	{ 19.35368f, -66, 19.16219f },
	{ 49.02317f, 14, -66.56556f },
	{ 49.02317f, 19, -66.56556f },
	{ 12.4043f, 14, -81.73363f },
	{ 12.4043f, 19, -81.73363f },
	{ 60.57259f, 14, -93.9731f },
	{ 60.57262f, 19, -93.9731f },
	{ 23.61734f, 14, -109.2805f },
	{ 23.61741f, 19, -109.2804f },
	{ -66.183f, 10, -49.94703f },
	{ -66.183f, 15, -49.94703f },
	{ -82.11639f, 10, -11.48041f },
	{ -82.11639f, 15, -11.48041f },
	{ -66.183f, 5, -49.94703f },
	{ -82.11639f, 5, -11.48041f },
	{ -76.25283f, 10, -46.54132f },
	{ -76.25283f, 15, -46.54132f },
	{ -86.44597f, 10, -21.93292f },
	{ -86.44597f, 15, -21.93292f },
	{ -76.25283f, 5, -46.54132f },
	{ -86.44597f, 5, -21.93292f },
	{ -91.18751f, 14, 167.8834f },
	{ -91.18751f, 19, 167.8834f },
	{ -54.2323f, 14, 183.1908f },
	{ -54.2323f, 19, 183.1908f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0001ED08[] = {
	{ 0, 1, 0 },
	{ 0.594377f, -0.804186f, 0 },
	{ 0.999965f, 0, -0.008349f },
	{ 0.8068269f, 0.5907519f, -0.006459f },
	{ 0.076141f, 0.997097f, -0.00073f },
	{ 0.048712f, 0.959365f, 0.277932f },
	{ 0.420288f, -0.804186f, -0.420288f },
	{ 0.866844f, -0.275937f, -0.415259f },
	{ 0.625477f, 0.780239f, 0.002345f },
	{ 0.053035f, 0.997111f, -0.054374f },
	{ -0.230972f, 0.959365f, 0.162084f },
	{ 0, -0.804186f, -0.594377f },
	{ -0.319319f, -0.275937f, -0.906584f },
	{ -0.444011f, 0.780008f, -0.440955f },
	{ 0.0007269999f, 0.9970689f, -0.076511f },
	{ -0.048711f, 0.959364f, -0.277935f },
	{ -0.420288f, -0.804186f, -0.420288f },
	{ 0.00835f, 0, -0.999965f },
	{ -0.035318f, 0.780459f, -0.624209f },
	{ -0.05355f, 0.997053f, -0.054927f },
	{ 0.230974f, 0.959365f, -0.162082f },
	{ -0.594377f, -0.804186f, 0 },
	{ -0.701179f, 0, 0.712986f },
	{ -0.466046f, 0.780691f, 0.41632f },
	{ -0.076141f, 0.997097f, 0.00073f },
	{ -0.319166f, 0.912532f, -0.255772f },
	{ -0.420288f, -0.804186f, 0.420288f },
	{ -0.870851f, -0.277668f, 0.405608f },
	{ -0.623562f, 0.781715f, 0.009610999f },
	{ -0.053035f, 0.997111f, 0.054374f },
	{ -0.920401f, -0.00008999999f, -0.390976f },
	{ 0, -0.804186f, 0.594377f },
	{ 0.328977f, -0.277668f, 0.902593f },
	{ 0.434203f, 0.781483f, 0.448054f },
	{ -0.0007269999f, 0.9970689f, 0.076511f },
	{ 0.406536f, 0.912534f, 0.044833f },
	{ 0.420288f, -0.804186f, 0.420288f },
	{ 0.701179f, 0, 0.712986f },
	{ 0.565941f, 0.5904509f, 0.575394f },
	{ 0.05355f, 0.997053f, 0.054927f },
	{ 0.9272749f, -0.00003f, 0.374381f },
	{ 0.777468f, -0.628889f, -0.006491f },
	{ 0.543593f, -0.631646f, -0.552747f },
	{ 0.006472f, -0.631647f, -0.77523f },
	{ 0.004987f, -0.8019969f, -0.597307f },
	{ -0.418834f, -0.8019969f, 0.425886f },
	{ -0.543593f, -0.631646f, 0.552747f },
	{ -0.006472f, -0.631646f, 0.77523f },
	{ 0.545163f, -0.62889f, 0.554343f },
	{ -0.674936f, -0.695808f, -0.245587f },
	{ -0.627089f, 0.718029f, -0.301981f },
	{ 0.650908f, -0.695807f, 0.303598f },
	{ 0.656952f, 0.718029f, 0.229889f },
	{ -0.652671f, -0.705021f, -0.277427f },
	{ -0.412544f, 0.8939f, -0.175357f },
	{ 0.657675f, -0.705023f, 0.265342f },
	{ 0.415707f, 0.8939f, 0.167719f },
	{ 0.822123f, -0.5693099f, 0 },
	{ 0.581329f, -0.5693099f, -0.581329f },
	{ 0, -0.5693099f, -0.822123f },
	{ -0.581329f, -0.5693099f, -0.581329f },
	{ -0.822123f, -0.5693099f, 0 },
	{ -0.581329f, -0.5693099f, 0.581329f },
	{ 0, -0.569309f, 0.822123f },
	{ 0.581329f, -0.5693099f, 0.581329f },
	{ 0.689338f, -0.72444f, 0 },
	{ 0.487436f, -0.72444f, -0.487436f },
	{ 0, -0.72444f, -0.689338f },
	{ -0.487436f, -0.72444f, -0.487436f },
	{ -0.689338f, -0.72444f, 0 },
	{ -0.487435f, -0.72444f, 0.487436f },
	{ 0, -0.72444f, 0.689338f },
	{ 0.487436f, -0.72444f, 0.487436f },
	{ 0.6871f, 0.726563f, 0.000368f },
	{ 0.485214f, 0.725498f, -0.488077f },
	{ -0.000388f, 0.723361f, -0.69047f },
	{ -0.486012f, 0.724392f, -0.488926f },
	{ -0.6871f, 0.726563f, -0.000368f },
	{ -0.485214f, 0.725498f, 0.488078f },
	{ 0.000388f, 0.723361f, 0.69047f },
	{ 0.486012f, 0.724392f, 0.488926f },
	{ 0.821405f, 0.570345f, 0.000289f },
	{ 0.579201f, 0.570168f, -0.58261f },
	{ -0.000305f, 0.569041f, -0.822309f },
	{ -0.579633f, 0.56928f, -0.583049f },
	{ -0.821405f, 0.570345f, -0.000289f },
	{ -0.579201f, 0.570168f, 0.58261f },
	{ 0.000305f, 0.569041f, 0.822309f },
	{ 0.579633f, 0.56928f, 0.583049f },
	{ 1, 0, 0 },
	{ 0.704615f, 0, -0.70959f },
	{ 0, 0, -1 },
	{ -0.704615f, 0, -0.70959f },
	{ -1, 0, 0 },
	{ -0.704615f, 0, 0.70959f },
	{ 0, 0, 1 },
	{ 0.704615f, 0, 0.70959f },
	{ 0.46268f, -0.877125f, 0.128758f },
	{ 0.361656f, 0.907218f, 0.214852f },
	{ -0.650077f, -0.6908129f, -0.316507f },
	{ -0.658174f, 0.720439f, -0.218574f },
	{ 0, -1, 0 },
	{ 0, 1, 0 },
	{ -0.656207f, -0.705721f, -0.267114f },
	{ -0.414857f, 0.894078f, -0.16887f },
	{ 0.033278f, 0, -0.999446f },
	{ 0.025685f, 0.6358449f, -0.7713889f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.5489849f, 0.630263f, 0.5489849f },
	{ 0.025685f, -0.6358449f, -0.7713889f },
	{ -0.5489849f, -0.630263f, 0.5489849f },
	{ -0.683184f, 0, -0.7302459f },
	{ -0.53339f, 0.624854f, -0.570133f },
	{ -1, 0, 0 },
	{ -0.776382f, 0.630262f, 0 },
	{ -0.53339f, -0.624854f, -0.570133f },
	{ -0.776382f, -0.630262f, 0 },
	{ -0.927282f, 0, -0.374365f },
	{ -0.40654f, 0.912533f, -0.044828f },
	{ 0.920404f, 0, 0.390969f },
	{ 0.319166f, 0.912533f, 0.255768f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0001F2B4 = { vertexSTG12_0001E75C, normalSTG12_0001ED08, LengthOfArray(vertexSTG12_0001E75C), meshlistSTG12_0001E684, matlistSTG12_0001DEE8, LengthOfArray(meshlistSTG12_0001E684), LengthOfArray(matlistSTG12_0001DEE8),{ -0.00042f, -23.5f, 0.000076f }, 221.3722f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0001F2DC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0001F2B4, -100, 66, -500, 0, 0x1000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0001F310[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 14, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001F34C[] = {
	4, 3, 4, 0, 1
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001F356[] = {
	4, 5, 3, 2, 0
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001F360[] = {
	0x8000u | 6, 8, 6, 7, 9, 1, 4
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001F370[] = {
	{ 1530, 258 },
	{ 1530, -235 },
	{ 0, 258 },
	{ 0, -235 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001F380[] = {
	{ 1530, 255 },
	{ 1530, 7 },
	{ 0, 255 },
	{ 0, 7 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001F390[] = {
	{ 191, 255 },
	{ 191, -1275 },
	{ 63, 255 },
	{ 63, -1275 },
	{ 0, 255 },
	{ 0, -1275 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0001F3A8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_0001F34C, NULL, NULL, NULL, uvSTG12_0001F370, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, polySTG12_0001F356, NULL, NULL, NULL, uvSTG12_0001F380, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, polySTG12_0001F360, NULL, NULL, NULL, uvSTG12_0001F390, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0001F3F0[] = {
	{ -20.58838f, -177, 50.2047f },
	{ -20.58838f, -1.5f, 50.2047f },
	{ -20.58838f, -222, 50.2047f },
	{ -20.58838f, -177, 428.2047f },
	{ -20.58838f, -1.5f, 428.2047f },
	{ -20.58838f, -222, 428.2047f },
	{ 10.29414f, 5.5f, 428.2047f },
	{ -10.29421f, 5.5f, 50.2047f },
	{ 10.29414f, 5.5f, 50.20472f },
	{ -10.29421f, 5.5f, 428.2047f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0001F468[] = {
	{ -1, 0, 0 },
	{ -0.883829f, 0.46781f, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.883829f, 0.46781f, 0 },
	{ -1, 0, 0 },
	{ 0, 1, 0 },
	{ -0.29417f, 0.955753f, 0 },
	{ 0, 1, 0 },
	{ -0.29417f, 0.955753f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0001F4E0 = { vertexSTG12_0001F3F0, normalSTG12_0001F468, LengthOfArray(vertexSTG12_0001F3F0), meshlistSTG12_0001F3A8, matlistSTG12_0001F310, LengthOfArray(meshlistSTG12_0001F3A8), LengthOfArray(matlistSTG12_0001F310),{ -5.147118f, -108.25f, 239.2047f }, 189.6297f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0001F508 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0001F4E0, 21.00012f, 73, -569.5002f, 0, 0x4000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0001F53C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 38, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001F5B4[] = {
	0x8000u | 10, 45, 35, 43, 33, 41, 31, 40, 30, 47, 37,
	8, 9, 8, 3, 2, 1, 0, 25, 24,
	8, 10, 11, 6, 7, 4, 5, 26, 27,
	0x8000u | 10, 46, 36, 38, 28, 39, 29, 42, 32, 44, 34
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001F604[] = {
	7, 14, 10, 19, 17, 23, 21, 20,
	7, 8, 12, 16, 18, 20, 22, 23
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001F624[] = {
	4, 14, 15, 10, 11,
	4, 13, 12, 9, 8
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001F638[] = {
	12, 20, 21, 16, 17, 8, 10, 2, 6, 0, 4, 24, 26
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001F652[] = {
	0x8000u | 10, 35, 15, 33, 11, 31, 7, 30, 5, 37, 27,
	0x8000u | 10, 13, 34, 9, 32, 3, 29, 1, 28, 25, 36
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001F680[] = {
	{ 254, -761 },
	{ 128, -761 },
	{ 254, -513 },
	{ 128, -513 },
	{ 254, -251 },
	{ 128, -251 },
	{ 254, -3 },
	{ 128, -3 },
	{ 254, 251 },
	{ 128, 251 },
	{ 128, -506 },
	{ 254, -506 },
	{ 128, -250 },
	{ 254, -250 },
	{ 128, 0 },
	{ 254, 0 },
	{ 128, 252 },
	{ 254, 252 },
	{ 254, -506 },
	{ 128, -506 },
	{ 254, -250 },
	{ 128, -250 },
	{ 254, 0 },
	{ 128, 0 },
	{ 254, 252 },
	{ 128, 252 },
	{ 254, 251 },
	{ 128, 251 },
	{ 254, -3 },
	{ 128, -3 },
	{ 254, -251 },
	{ 128, -251 },
	{ 254, -513 },
	{ 128, -513 },
	{ 254, -761 },
	{ 128, -761 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001F710[] = {
	{ 1016, 70 },
	{ 1016, 254 },
	{ 776, 92 },
	{ 776, 254 },
	{ 537, 100 },
	{ 537, 254 },
	{ 474, 254 },
	{ 3, 254 },
	{ 3, 70 },
	{ 243, 254 },
	{ 243, 90 },
	{ 474, 254 },
	{ 474, 100 },
	{ 537, 100 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001F748[] = {
	{ 254, 70 },
	{ 128, 70 },
	{ 254, 254 },
	{ 128, 254 },
	{ 128, 70 },
	{ 254, 70 },
	{ 128, 254 },
	{ 254, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001F768[] = {
	{ 0, 255 },
	{ 510, 255 },
	{ 0, -211 },
	{ 510, -211 },
	{ 0, -689 },
	{ 510, -689 },
	{ 0, -1412 },
	{ 510, -1412 },
	{ 0, -2102 },
	{ 510, -2102 },
	{ 0, -2805 },
	{ 510, -2805 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001F798[] = {
	{ 1016, 184 },
	{ 1016, 68 },
	{ 768, 184 },
	{ 768, 68 },
	{ 506, 184 },
	{ 506, 68 },
	{ 266, 184 },
	{ 266, 68 },
	{ 3, 184 },
	{ 3, 68 },
	{ 3, 68 },
	{ 3, 186 },
	{ 251, 68 },
	{ 251, 186 },
	{ 506, 68 },
	{ 506, 186 },
	{ 761, 68 },
	{ 761, 186 },
	{ 1016, 68 },
	{ 1016, 186 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0001F7E8[] = {
	{ NJD_MESHSET_TRIMESH | 1, 4, polySTG12_0001F5B4, NULL, NULL, NULL, uvSTG12_0001F680, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, polySTG12_0001F604, NULL, NULL, NULL, uvSTG12_0001F710, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, polySTG12_0001F624, NULL, NULL, NULL, uvSTG12_0001F748, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, polySTG12_0001F638, NULL, NULL, NULL, uvSTG12_0001F768, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, polySTG12_0001F652, NULL, NULL, NULL, uvSTG12_0001F798, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0001F860[] = {
	{ -20, -47.5f, -24.99996f },
	{ -55, -47.5f, 22.50004f },
	{ -20, 80, -24.99996f },
	{ -55, 80, 22.50004f },
	{ 25, -47.5f, -24.99996f },
	{ 62.5f, -47.5f, 22.50004f },
	{ 25, 80, -24.99996f },
	{ 62.5f, 80, 22.50004f },
	{ -20, 210, -57.49995f },
	{ -55, 210, 22.50004f },
	{ 25, 210, -57.49995f },
	{ 62.5f, 210, 22.50004f },
	{ -20, 336.5f, -57.49995f },
	{ -55, 336.5f, 22.50004f },
	{ 25, 336.5f, -57.49995f },
	{ 62.5f, 336.5f, 22.50004f },
	{ -15, 260.5f, -127.9999f },
	{ 20, 260.5f, -127.9999f },
	{ -15, 336.5f, -127.9999f },
	{ 20, 336.5f, -127.9999f },
	{ -15, 273, -208 },
	{ 20, 273, -208 },
	{ -15, 336.5f, -208 },
	{ 20, 336.5f, -208 },
	{ -20, -177.5f, -24.99996f },
	{ -55, -177.5f, 22.50004f },
	{ 25, -177.5f, -24.99996f },
	{ 62.5f, -177.5f, 22.50004f },
	{ -55, -47.5f, 77.50005f },
	{ -55, 80, 77.50005f },
	{ 62.5f, -47.5f, 77.50005f },
	{ 62.5f, 80, 77.50005f },
	{ -55, 210, 77.50005f },
	{ 62.5f, 210, 77.50005f },
	{ -55, 336.5f, 77.50005f },
	{ 62.5f, 336.5f, 77.50005f },
	{ -55, -177.5f, 77.50005f },
	{ 62.5f, -177.5f, 77.50005f },
	{ -40, -47.5f, 142.5f },
	{ -40, 80, 142.5f },
	{ 47.5f, -47.5f, 142.5f },
	{ 47.5f, 80, 142.5f },
	{ -40, 210, 142.5f },
	{ 47.5f, 210, 142.5f },
	{ -40, 336.5f, 142.5f },
	{ 47.5f, 336.5f, 142.5f },
	{ -40, -177.5f, 142.5f },
	{ 47.5f, -177.5f, 142.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0001FAA0[] = {
	{ -0.450999f, 0, -0.8925239f },
	{ -0.9500149f, 0, -0.312205f },
	{ -0.498596f, -0.067508f, -0.864202f },
	{ -0.959955f, 0, -0.280156f },
	{ 0.436094f, 0, -0.899901f },
	{ 0.9446909f, 0, -0.327961f },
	{ 0.481218f, -0.105836f, -0.870188f },
	{ 0.955063f, -0.032994f, -0.29456f },
	{ -0.658119f, -0.297207f, -0.691771f },
	{ -0.974005f, 0, -0.226525f },
	{ 0.641645f, -0.324235f, -0.6950999f },
	{ 0.9703979f, -0.032449f, -0.23932f },
	{ -0.970955f, 0, -0.239263f },
	{ -0.978815f, 0, -0.204747f },
	{ 0.9677719f, 0, -0.251829f },
	{ 0.976079f, 0, -0.217418f },
	{ -0.750119f, -0.598963f, -0.280295f },
	{ 0.750119f, -0.598963f, -0.280295f },
	{ -0.999373f, 0, -0.035394f },
	{ 0.999373f, 0, -0.035394f },
	{ -0.585942f, -0.526924f, -0.615649f },
	{ 0.585942f, -0.526924f, -0.615649f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.450999f, 0, -0.8925239f },
	{ -0.9500149f, 0, -0.312205f },
	{ 0.436094f, 0, -0.899901f },
	{ 0.9446909f, 0, -0.327961f },
	{ -0.9935769f, 0, 0.113157f },
	{ -0.9935769f, 0, 0.113157f },
	{ 0.9935769f, 0, 0.113157f },
	{ 0.9935769f, 0, 0.113157f },
	{ -0.9935769f, 0, 0.113157f },
	{ 0.9935769f, 0, 0.113157f },
	{ -0.9935769f, 0, 0.113157f },
	{ 0.9935769f, 0, 0.113157f },
	{ -0.9935769f, 0, 0.113157f },
	{ 0.9935769f, 0, 0.113157f },
	{ -0.974391f, 0, 0.22486f },
	{ -0.974391f, 0, 0.22486f },
	{ 0.974391f, 0, 0.22486f },
	{ 0.974391f, 0, 0.22486f },
	{ -0.974391f, 0, 0.22486f },
	{ 0.974391f, 0, 0.22486f },
	{ -0.974391f, 0, 0.22486f },
	{ 0.974391f, 0, 0.22486f },
	{ -0.974391f, 0, 0.22486f },
	{ 0.974391f, 0, 0.22486f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0001FCE0 = { vertexSTG12_0001F860, normalSTG12_0001FAA0, LengthOfArray(vertexSTG12_0001F860), meshlistSTG12_0001F7E8, matlistSTG12_0001F53C, LengthOfArray(meshlistSTG12_0001F7E8), LengthOfArray(matlistSTG12_0001F53C),{ 3.75f, 79.5f, -32.74997f }, 311.0652f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0001FD08 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0001FCE0, -165, 0, 45, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0001FD3C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 14, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001FD78[] = {
	4, 6, 7, 0, 1,
	4, 9, 8, 3, 2
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001FD8C[] = {
	4, 10, 6, 4, 0,
	4, 8, 11, 2, 5
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0001FDA0[] = {
	0x8000u | 8, 3, 9, 14, 12, 13, 15, 1, 7
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001FDB4[] = {
	{ 1530, 258 },
	{ 1530, -235 },
	{ 0, 258 },
	{ 0, -235 },
	{ 1530, -235 },
	{ 1530, 258 },
	{ 0, -235 },
	{ 0, 258 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001FDD4[] = {
	{ 1530, 255 },
	{ 1530, 7 },
	{ 0, 255 },
	{ 0, 7 },
	{ 1530, 7 },
	{ 1530, 255 },
	{ 0, 7 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0001FDF4[] = {
	{ 255, 254 },
	{ 255, -1275 },
	{ 191, 255 },
	{ 191, -1275 },
	{ 63, 255 },
	{ 63, -1275 },
	{ 0, 255 },
	{ 0, -1275 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0001FE14[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, polySTG12_0001FD78, NULL, NULL, NULL, uvSTG12_0001FDB4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, polySTG12_0001FD8C, NULL, NULL, NULL, uvSTG12_0001FDD4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, polySTG12_0001FDA0, NULL, NULL, NULL, uvSTG12_0001FDF4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0001FE5C[] = {
	{ -20.58838f, -177, 50.2047f },
	{ -20.58838f, -1.5f, 50.2047f },
	{ 20.58832f, -177, 50.20472f },
	{ 20.58832f, -1.5f, 50.20472f },
	{ -20.58838f, -222, 50.2047f },
	{ 20.58832f, -222, 50.20472f },
	{ -20.58838f, -177, 488.2047f },
	{ -20.58838f, -1.5f, 488.2047f },
	{ 20.58832f, -177, 488.2047f },
	{ 20.58832f, -1.5f, 488.2047f },
	{ -20.58838f, -222, 488.2047f },
	{ 20.58832f, -222, 488.2047f },
	{ 10.29414f, 5.5f, 488.2047f },
	{ -10.2942f, 5.5f, 50.2047f },
	{ 10.29414f, 5.5f, 50.20472f },
	{ -10.2942f, 5.5f, 488.2047f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0001FF1C[] = {
	{ -1, 0, 0 },
	{ -0.883829f, 0.46781f, 0 },
	{ 1, 0, 0 },
	{ 0.883829f, 0.46781f, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.883829f, 0.46781f, 0 },
	{ 1, 0, 0 },
	{ 0.883829f, 0.46781f, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.29417f, 0.955753f, 0 },
	{ -0.29417f, 0.955753f, 0 },
	{ 0.29417f, 0.955753f, 0 },
	{ -0.29417f, 0.955753f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0001FFDC = { vertexSTG12_0001FE5C, normalSTG12_0001FF1C, LengthOfArray(vertexSTG12_0001FE5C), meshlistSTG12_0001FE14, matlistSTG12_0001FD3C, LengthOfArray(meshlistSTG12_0001FE14), LengthOfArray(matlistSTG12_0001FD3C),{ -0.00031f, -108.25f, 269.2047f }, 246.7794f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00020004 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0001FFDC, 121.0001f, 122, -499.5002f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00020038[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 33, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 34, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002009C[] = {
	4, 5, 4, 2, 1,
	4, 14, 13, 11, 10
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000200B0[] = {
	6, 11, 10, 8, 7, 5, 4
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000200BE[] = {
	4, 4, 3, 1, 0,
	4, 13, 12, 10, 9
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000200D2[] = {
	6, 10, 9, 7, 6, 4, 3
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000200E0[] = {
	{ 254, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 },
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00020100[] = {
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00020118[] = {
	{ 254, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 },
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00020138[] = {
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00020150[] = {
	{ NJD_MESHSET_TRIMESH | 1, 2, polySTG12_0002009C, NULL, NULL, NULL, uvSTG12_000200E0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, polySTG12_000200B0, NULL, NULL, NULL, uvSTG12_00020100, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, polySTG12_000200BE, NULL, NULL, NULL, uvSTG12_00020118, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, polySTG12_000200D2, NULL, NULL, NULL, uvSTG12_00020138, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_000201B0[] = {
	{ -641.5296f, -195.8411f, -17.75816f },
	{ -641.5296f, 0, -17.75817f },
	{ -641.5296f, 195.8411f, -17.75818f },
	{ -423.2651f, -195.8411f, 116.7323f },
	{ -423.2651f, 0, 116.7323f },
	{ -423.2651f, 195.8411f, 116.7323f },
	{ -173.4795f, -195.8411f, 187.5634f },
	{ -173.4795f, 0, 187.5634f },
	{ -173.4795f, 195.8411f, 187.5633f },
	{ 87.9136f, -195.8411f, 192.0305f },
	{ 87.9136f, 0, 192.0305f },
	{ 87.9136f, 195.8411f, 192.0305f },
	{ 351.9407f, -195.8411f, 100.0335f },
	{ 351.9407f, 0, 100.0335f },
	{ 351.9407f, 195.8411f, 100.0335f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00020264[] = {
	{ 0.5245889f, 0, -0.851355f },
	{ 0.5245889f, 0, -0.851355f },
	{ 0.5245889f, 0, -0.851355f },
	{ 0.402525f, 0, -0.915409f },
	{ 0.402525f, 0, -0.915409f },
	{ 0.402525f, 0, -0.915409f },
	{ 0.146175f, 0, -0.9892589f },
	{ 0.146175f, 0, -0.9892589f },
	{ 0.146175f, 0, -0.9892589f },
	{ -0.158427f, 0, -0.987371f },
	{ -0.158427f, 0, -0.987371f },
	{ -0.158427f, 0, -0.987371f },
	{ -0.329036f, 0, -0.944317f },
	{ -0.329036f, 0, -0.944317f },
	{ -0.329036f, 0, -0.944317f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00020318 = { vertexSTG12_000201B0, normalSTG12_00020264, LengthOfArray(vertexSTG12_000201B0), meshlistSTG12_00020150, matlistSTG12_00020038, LengthOfArray(meshlistSTG12_00020150), LengthOfArray(matlistSTG12_00020038),{ -144.7944f, 0, 87.13614f }, 500.2145f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00020340 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00020318, 750, 200, -345, 0, 0x1B54, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00020374[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 33, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 34, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000203D8[] = {
	4, 5, 4, 2, 1,
	4, 14, 13, 11, 10
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000203EC[] = {
	6, 11, 10, 8, 7, 5, 4
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000203FA[] = {
	4, 4, 3, 1, 0,
	4, 13, 12, 10, 9
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002040E[] = {
	6, 10, 9, 7, 6, 4, 3
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002041C[] = {
	{ 254, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 },
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002043C[] = {
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00020454[] = {
	{ 254, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 },
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00020474[] = {
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0002048C[] = {
	{ NJD_MESHSET_TRIMESH | 1, 2, polySTG12_000203D8, NULL, NULL, NULL, uvSTG12_0002041C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, polySTG12_000203EC, NULL, NULL, NULL, uvSTG12_0002043C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, polySTG12_000203FA, NULL, NULL, NULL, uvSTG12_00020454, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, polySTG12_0002040E, NULL, NULL, NULL, uvSTG12_00020474, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_000204EC[] = {
	{ -99.08812f, -214.4203f, -479.2504f },
	{ -99.08812f, 0, -479.2504f },
	{ -99.08812f, 214.4203f, -479.2504f },
	{ -50.69399f, -214.4203f, -220.8002f },
	{ -50.69399f, 0, -220.8002f },
	{ -50.69399f, 214.4203f, -220.8002f },
	{ 93.00008f, -214.4203f, -4.249975f },
	{ 93.00008f, 0, -4.249985f },
	{ 93.00008f, 214.4203f, -4.249996f },
	{ 338.8944f, -214.4203f, 115.2501f },
	{ 338.8944f, 0, 115.2501f },
	{ 338.8944f, 214.4203f, 115.2501f },
	{ 617.3885f, -214.4203f, 138.4501f },
	{ 617.3885f, 0, 138.4501f },
	{ 617.3885f, 214.4203f, 138.4501f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_000205A0[] = {
	{ 0.982917f, 0, -0.184049f },
	{ 0.982917f, 0, -0.184049f },
	{ 0.982917f, 0, -0.184049f },
	{ 0.926619f, 0, -0.376001f },
	{ 0.926619f, 0, -0.376001f },
	{ 0.926619f, 0, -0.376001f },
	{ 0.658376f, 0, -0.7526889f },
	{ 0.658376f, 0, -0.7526889f },
	{ 0.658376f, 0, -0.7526889f },
	{ 0.264554f, 0, -0.964371f },
	{ 0.264554f, 0, -0.964371f },
	{ 0.264554f, 0, -0.964371f },
	{ 0.083018f, 0, -0.996548f },
	{ 0.083018f, 0, -0.996548f },
	{ 0.083018f, 0, -0.996548f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00020654 = { vertexSTG12_000204EC, normalSTG12_000205A0, LengthOfArray(vertexSTG12_000204EC), meshlistSTG12_0002048C, matlistSTG12_00020374, LengthOfArray(meshlistSTG12_0002048C), LengthOfArray(matlistSTG12_00020374),{ 259.1501f, 0, -170.4001f }, 472.9939f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0002067C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00020654, -825, 200, 51, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_000206B0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 33, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 34, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00020714[] = {
	4, 5, 4, 2, 1,
	4, 14, 13, 11, 10
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00020728[] = {
	6, 4, 5, 7, 8, 10, 11
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00020736[] = {
	4, 4, 3, 1, 0,
	4, 13, 12, 10, 9
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002074A[] = {
	6, 10, 9, 7, 6, 4, 3
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00020758[] = {
	{ 254, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 },
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00020778[] = {
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00020790[] = {
	{ 254, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 },
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000207B0[] = {
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_000207C8[] = {
	{ NJD_MESHSET_TRIMESH | 1, 2, polySTG12_00020714, NULL, NULL, NULL, uvSTG12_00020758, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, polySTG12_00020728, NULL, NULL, NULL, uvSTG12_00020778, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, polySTG12_00020736, NULL, NULL, NULL, uvSTG12_00020790, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, polySTG12_0002074A, NULL, NULL, NULL, uvSTG12_000207B0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00020828[] = {
	{ -134.3119f, -225.8962f, -403.92f },
	{ -134.3119f, 0, -403.92f },
	{ -134.3119f, 225.8962f, -403.92f },
	{ -44.71581f, -225.8962f, -164.56f },
	{ -44.71581f, 0, -164.56f },
	{ -44.71581f, 225.8962f, -164.56f },
	{ 160.8199f, -225.8962f, 14.96001f },
	{ 160.8199f, 0, 14.95999f },
	{ 160.8199f, 225.8962f, 14.95999f },
	{ 396.276f, -225.8962f, 104.72f },
	{ 396.276f, 0, 104.72f },
	{ 396.276f, 225.8962f, 104.72f },
	{ 676.6111f, -225.8962f, 127.16f },
	{ 676.6111f, 0, 127.16f },
	{ 676.6111f, 225.8962f, 127.16f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_000208DC[] = {
	{ 0.9365399f, 0, -0.350561f },
	{ 0.9365399f, 0, -0.350561f },
	{ 0.9365399f, 0, -0.350561f },
	{ 0.8222089f, 0, -0.569185f },
	{ 0.8222089f, 0, -0.569185f },
	{ 0.8222089f, 0, -0.569185f },
	{ 0.515057f, 0, -0.857156f },
	{ 0.515057f, 0, -0.857156f },
	{ 0.515057f, 0, -0.857156f },
	{ 0.220224f, 0, -0.975449f },
	{ 0.220224f, 0, -0.975449f },
	{ 0.220224f, 0, -0.975449f },
	{ 0.07979199f, 0, -0.996812f },
	{ 0.07979199f, 0, -0.996812f },
	{ 0.07979199f, 0, -0.996812f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00020990 = { vertexSTG12_00020828, normalSTG12_000208DC, LengthOfArray(vertexSTG12_00020828), meshlistSTG12_000207C8, matlistSTG12_000206B0, LengthOfArray(meshlistSTG12_000207C8), LengthOfArray(matlistSTG12_000206B0),{ 271.1496f, 0, -138.38f }, 484.6757f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_000209B8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00020990, 802, 200, -1352, 0, 0xFFFF8000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_000209EC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 33, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 34, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00020A50[] = {
	4, 5, 4, 2, 1,
	4, 14, 13, 11, 10
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00020A64[] = {
	6, 11, 10, 8, 7, 5, 4
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00020A72[] = {
	4, 4, 3, 1, 0,
	4, 13, 12, 10, 9
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00020A86[] = {
	6, 3, 4, 6, 7, 9, 10
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00020A94[] = {
	{ 254, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 },
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00020AB4[] = {
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00020ACC[] = {
	{ 254, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 },
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00020AEC[] = {
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00020B04[] = {
	{ NJD_MESHSET_TRIMESH | 1, 2, polySTG12_00020A50, NULL, NULL, NULL, uvSTG12_00020A94, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, polySTG12_00020A64, NULL, NULL, NULL, uvSTG12_00020AB4, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, polySTG12_00020A72, NULL, NULL, NULL, uvSTG12_00020ACC, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, polySTG12_00020A86, NULL, NULL, NULL, uvSTG12_00020AEC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00020B64[] = {
	{ -389.7141f, -196.3001f, 341.25f },
	{ -389.7141f, 0, 341.25f },
	{ -389.7141f, 196.3001f, 341.25f },
	{ -120.1071f, -196.3001f, 341.25f },
	{ -120.1071f, 0, 341.25f },
	{ -120.1071f, 196.3001f, 341.25f },
	{ 165.75f, -196.3001f, 237.25f },
	{ 165.75f, 0, 237.25f },
	{ 165.75f, 196.3001f, 237.25f },
	{ 367.1072f, -196.3001f, 29.24999f },
	{ 367.1072f, 0, 29.24999f },
	{ 367.1072f, 196.3001f, 29.24997f },
	{ 477.4642f, -196.3001f, -208 },
	{ 477.4642f, 0, -208 },
	{ 477.4642f, 196.3001f, -208 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00020C18[] = {
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.173582f, 0, -0.984819f },
	{ -0.173582f, 0, -0.984819f },
	{ -0.173582f, 0, -0.984819f },
	{ -0.544068f, 0, -0.839041f },
	{ -0.544068f, 0, -0.839041f },
	{ -0.544068f, 0, -0.839041f },
	{ -0.824048f, 0, -0.56652f },
	{ -0.824048f, 0, -0.56652f },
	{ -0.824048f, 0, -0.56652f },
	{ -0.906709f, 0, -0.421756f },
	{ -0.906709f, 0, -0.421756f },
	{ -0.906709f, 0, -0.421756f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00020CCC = { vertexSTG12_00020B64, normalSTG12_00020C18, LengthOfArray(vertexSTG12_00020B64), meshlistSTG12_00020B04, matlistSTG12_000209EC, LengthOfArray(meshlistSTG12_00020B04), LengthOfArray(matlistSTG12_000209EC),{ 43.87506f, 0, 66.625f }, 513.243f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00020CF4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00020CCC, -464, 200, -911, 0, 0xFFFF8000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00020D28[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 14, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00020D8C[] = {
	0x8000u | 7, 3, 49, 56, 5, 40, 4, 39,
	8, 3, 8, 56, 55, 40, 35, 39, 34,
	4, 54, 13, 38, 0,
	3, 33, 51, 52,
	8, 33, 28, 51, 50, 15, 10, 14, 9,
	5, 25, 52, 20, 51, 15,
	16, 29, 30, 25, 53, 52, 18, 33, 0, 28, 23, 50, 49, 10, 5, 9, 4,
	12, 29, 34, 30, 35, 54, 55, 13, 8, 0, 3, 23, 49,
	0x8000u | 7, 14, 15, 19, 20, 24, 25, 29,
	6, 0, 18, 38, 53, 54, 30
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00020E38[] = {
	0x8000u | 18, 27, 29, 32, 34, 37, 39, 2, 4, 7, 9, 12, 14, 17, 19, 22, 24, 27, 29
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00020E5E[] = {
	0x8000u | 18, 26, 27, 31, 32, 36, 37, 1, 2, 6, 7, 11, 12, 16, 17, 21, 22, 26, 27
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00020E84[] = {
	0x8000u | 18, 26, 46, 21, 45, 16, 44, 11, 43, 6, 42, 1, 41, 36, 48, 31, 47, 26, 46
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00020EAC[] = {
	{ 1800, -255 },
	{ 2040, -208 },
	{ 1793, -208 },
	{ 2040, -114 },
	{ 1792, -114 },
	{ 2040, 254 },
	{ 1792, 254 },
	{ 1800, -255 },
	{ 1542, -255 },
	{ 1793, -208 },
	{ 1537, -208 },
	{ 1792, -114 },
	{ 1536, -114 },
	{ 1792, 254 },
	{ 1536, 254 },
	{ 1276, -208 },
	{ 1275, -255 },
	{ 1016, -255 },
	{ 384, -255 },
	{ 513, -255 },
	{ 513, -208 },
	{ 768, -208 },
	{ 513, -255 },
	{ 254, -255 },
	{ 513, -208 },
	{ 255, -208 },
	{ 512, -114 },
	{ 256, -114 },
	{ 512, 254 },
	{ 256, 254 },
	{ 1024, -114 },
	{ 768, -208 },
	{ 768, -114 },
	{ 513, -208 },
	{ 512, -114 },
	{ 1280, 254 },
	{ 1280, -114 },
	{ 1024, -114 },
	{ 1020, -208 },
	{ 768, -208 },
	{ 768, -255 },
	{ 513, -255 },
	{ 384, -255 },
	{ 254, -255 },
	{ 1, -255 },
	{ 255, -208 },
	{ 0, -208 },
	{ 256, -114 },
	{ 0, -114 },
	{ 256, 254 },
	{ 0, 254 },
	{ 1280, 254 },
	{ 1536, 254 },
	{ 1280, -114 },
	{ 1536, -114 },
	{ 1276, -208 },
	{ 1537, -208 },
	{ 1275, -255 },
	{ 1542, -255 },
	{ 2422, -255 },
	{ 1800, -255 },
	{ 2040, -255 },
	{ 2040, -208 },
	{ 512, 254 },
	{ 512, -114 },
	{ 768, 254 },
	{ 768, -114 },
	{ 1024, 254 },
	{ 1024, -114 },
	{ 1280, 254 },
	{ 384, -255 },
	{ 768, -255 },
	{ 1016, -255 },
	{ 1020, -208 },
	{ 1276, -208 },
	{ 1280, -114 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00020FDC[] = {
	{ 7, 254 },
	{ 7, 0 },
	{ 254, 255 },
	{ 254, 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 765, 255 },
	{ 765, 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 1275, 255 },
	{ 1275, 0 },
	{ 1530, 255 },
	{ 1530, 0 },
	{ 1785, 255 },
	{ 1785, 0 },
	{ 2032, 254 },
	{ 2032, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00021024[] = {
	{ 2032, -761 },
	{ 2032, 251 },
	{ 1785, -765 },
	{ 1785, 255 },
	{ 1530, -765 },
	{ 1530, 255 },
	{ 1275, -765 },
	{ 1275, 255 },
	{ 1020, -765 },
	{ 1020, 255 },
	{ 765, -765 },
	{ 765, 255 },
	{ 508, -765 },
	{ 508, 255 },
	{ 254, -765 },
	{ 254, 255 },
	{ 7, -761 },
	{ 7, 251 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002106C[] = {
	{ 7, 0 },
	{ 7, 254 },
	{ 254, 0 },
	{ 254, 255 },
	{ 508, 0 },
	{ 508, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 1275, 0 },
	{ 1275, 255 },
	{ 1530, 0 },
	{ 1530, 255 },
	{ 1785, 0 },
	{ 1785, 255 },
	{ 2032, 0 },
	{ 2032, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_000210B4[] = {
	{ NJD_MESHSET_TRIMESH | 1, 10, polySTG12_00020D8C, NULL, NULL, NULL, uvSTG12_00020EAC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, polySTG12_00020E38, NULL, NULL, NULL, uvSTG12_00020FDC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, polySTG12_00020E5E, NULL, NULL, NULL, uvSTG12_00021024, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, polySTG12_00020E84, NULL, NULL, NULL, uvSTG12_0002106C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00021114[] = {
	{ 0, 99, 0.196362f },
	{ 49.70465f, -177, -20.08832f },
	{ 49.70465f, -1.5f, -20.08832f },
	{ 20.16022f, 99, 8.28141f },
	{ 49.70465f, 44.5f, -20.08832f },
	{ 49.70465f, 84, -20.08832f },
	{ 20.58832f, -177, -49.20465f },
	{ 20.58832f, -1.5f, -49.20465f },
	{ 8.350622f, 99, 19.7154f },
	{ 20.58832f, 44.5f, -49.20465f },
	{ 20.58832f, 84, -49.20465f },
	{ -20.58838f, -177, -49.20468f },
	{ -20.58838f, -1.5f, -49.20468f },
	{ -8.35065f, 99, 19.71539f },
	{ -20.58838f, 44.5f, -49.20468f },
	{ -20.58838f, 84, -49.20468f },
	{ -49.70471f, -177, -20.08832f },
	{ -49.70471f, -1.5f, -20.08832f },
	{ -20.16023f, 99, -7.888683f },
	{ -49.70471f, 44.5f, -20.08832f },
	{ -49.70471f, 84, -20.08832f },
	{ -49.70471f, -177, 21.08839f },
	{ -49.70471f, -1.5f, 21.08839f },
	{ 20.16022f, 99, -7.888683f },
	{ -49.70471f, 44.5f, 21.08839f },
	{ -49.70471f, 84, 21.08839f },
	{ -20.58838f, -177, 50.2047f },
	{ -20.58838f, -1.5f, 50.2047f },
	{ 8.350622f, 99, -19.32267f },
	{ -20.58838f, 44.5f, 50.2047f },
	{ -20.58838f, 84, 50.2047f },
	{ 20.58832f, -177, 50.20472f },
	{ 20.58832f, -1.5f, 50.20472f },
	{ -8.35065f, 99, -19.32269f },
	{ 20.58832f, 44.5f, 50.20472f },
	{ 20.58832f, 84, 50.20472f },
	{ 49.70465f, -177, 21.08838f },
	{ 49.70465f, -1.5f, 21.08838f },
	{ -20.16023f, 99, 8.281413f },
	{ 49.70465f, 44.5f, 21.08838f },
	{ 49.70465f, 84, 21.08838f },
	{ 49.70465f, -222, -20.08832f },
	{ 20.58832f, -222, -49.20465f },
	{ -20.58838f, -222, -49.20468f },
	{ -49.70471f, -222, -20.08832f },
	{ -49.70471f, -222, 21.08839f },
	{ -20.58838f, -222, 50.2047f },
	{ 20.58832f, -222, 50.20472f },
	{ 49.70465f, -222, 21.08838f },
	{ 38.76961f, 94, -15.468f },
	{ 16.05888f, 94, -37.88757f },
	{ -16.05893f, 94, -37.8876f },
	{ -38.76965f, 94, -15.468f },
	{ -38.76965f, 94, 16.23805f },
	{ -16.05893f, 94, 38.6576f },
	{ 16.05888f, 94, 38.65762f },
	{ 38.76961f, 94, 16.23805f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_000213C0[] = {
	{ 0, 1, 0 },
	{ 0.92388f, 0, -0.382683f },
	{ 0.92388f, 0, -0.382683f },
	{ 0.138642f, 0.988667f, 0.057581f },
	{ 0.92388f, 0, -0.382683f },
	{ 0.851674f, 0.386727f, -0.353685f },
	{ 0.382684f, 0, -0.923879f },
	{ 0.382684f, 0, -0.923879f },
	{ 0.056036f, 0.988952f, 0.137235f },
	{ 0.382684f, 0, -0.923879f },
	{ 0.352153f, 0.389688f, -0.8509589f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.056631f, 0.988833f, 0.13785f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.351089f, 0.391887f, -0.850388f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.139207f, 0.988512f, -0.05886f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.85111f, 0.38895f, -0.352605f },
	{ -0.923879f, 0, 0.382684f },
	{ -0.923879f, 0, 0.382684f },
	{ 0.139837f, 0.988386f, -0.059493f },
	{ -0.923879f, 0, 0.382684f },
	{ -0.8507929f, 0.388162f, 0.354234f },
	{ -0.382683f, 0, 0.923879f },
	{ -0.382683f, 0, 0.923879f },
	{ 0.057214f, 0.988459f, -0.140272f },
	{ -0.382683f, 0, 0.923879f },
	{ -0.351306f, 0.393017f, 0.849777f },
	{ 0.382683f, 0, 0.92388f },
	{ 0.382683f, 0, 0.92388f },
	{ -0.056606f, 0.988583f, -0.139642f },
	{ 0.382683f, 0, 0.92388f },
	{ 0.350256f, 0.395166f, 0.849214f },
	{ 0.92388f, 0, 0.382683f },
	{ 0.92388f, 0, 0.382683f },
	{ -0.13925f, 0.988546f, 0.058192f },
	{ 0.92388f, 0, 0.382683f },
	{ 0.850233f, 0.390364f, 0.353156f },
	{ 0.92388f, 0, -0.382683f },
	{ 0.382684f, 0, -0.923879f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.923879f, 0, 0.382684f },
	{ -0.382683f, 0, 0.923879f },
	{ 0.382683f, 0, 0.92388f },
	{ 0.92388f, 0, 0.382683f },
	{ 0.459311f, 0.867557f, -0.190731f },
	{ 0.189753f, 0.869961f, -0.455151f },
	{ -0.187482f, 0.871741f, -0.452679f },
	{ -0.456865f, 0.8693449f, -0.18845f },
	{ -0.45769f, 0.8689229f, 0.188395f },
	{ -0.188104f, 0.873174f, 0.449648f },
	{ 0.185862f, 0.874905f, 0.44721f },
	{ 0.455295f, 0.870662f, 0.186157f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0002166C = { vertexSTG12_00021114, normalSTG12_000213C0, LengthOfArray(vertexSTG12_00021114), meshlistSTG12_000210B4, matlistSTG12_00020D28, LengthOfArray(meshlistSTG12_000210B4), LengthOfArray(matlistSTG12_00020D28),{ -0.00031f, -61.5f, 0.5000229f }, 168.0203f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00021694 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0002166C, 121.0001f, 122, -499.5002f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_000216C8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 59, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 54, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000216F0[] = {
	5, 3, 26, 24, 27, 2,
	0x8000u | 20, 26, 4, 3, 6, 5, 8, 7, 10, 9, 12, 11, 14, 13, 16, 15, 18, 17, 20, 19, 25,
	0x8000u | 5, 22, 21, 23, 25, 20
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00021732[] = {
	4, 1, 27, 0, 26
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002173C[] = {
	{ 2688, -2805 },
	{ 4409, -3619 },
	{ 4409, -2805 },
	{ 6120, -3619 },
	{ 6120, -2805 },
	{ 4409, -3619 },
	{ 2714, -3619 },
	{ 2688, -2805 },
	{ 1666, -3471 },
	{ 2102, -2721 },
	{ 791, -3049 },
	{ 1593, -2475 },
	{ 205, -2422 },
	{ 1251, -2113 },
	{ 0, -1681 },
	{ 1131, -1681 },
	{ 205, -940 },
	{ 1251, -1251 },
	{ 791, -314 },
	{ 1593, -888 },
	{ 1666, 105 },
	{ 2102, -644 },
	{ 2714, 255 },
	{ 2688, -561 },
	{ 4402, -561 },
	{ 6120, 255 },
	{ 6119, -560 },
	{ 4409, 255 },
	{ 4402, -561 },
	{ 2714, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000217B4[] = {
	{ 0, 255 },
	{ 0 },
	{ 2040, 255 },
	{ 2040, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_000217C4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, polySTG12_000216F0, NULL, NULL, NULL, uvSTG12_0002173C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, polySTG12_00021732, NULL, NULL, NULL, uvSTG12_000217B4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_000217F4[] = {
	{ 94.98977f, 0.000004f, 200.4998f },
	{ 214.9898f, 0.000004f, 200.4999f },
	{ 214.9898f, 0.000003f, 100.5001f },
	{ -25.99513f, -0.00002f, 100.5001f },
	{ -24.02533f, -0.0001f, 180.5f },
	{ -67.18037f, -0.00001f, 92.30779f },
	{ -97.64514f, -0.00008f, 165.8561f },
	{ -102.9305f, 0, 68.42034f },
	{ -159.222f, -0.00007f, 124.7118f },
	{ -126.818f, 0.000001f, 32.6702f },
	{ -200.3663f, -0.00005f, 63.13495f },
	{ -135.2061f, 0.000004f, -9.499939f },
	{ -214.8143f, -0.00002f, -9.499907f },
	{ -126.818f, 0.000006f, -51.67004f },
	{ -200.3664f, 0.000002f, -82.13477f },
	{ -102.9305f, 0.000007f, -87.42016f },
	{ -159.222f, 0.000004f, -143.7117f },
	{ -67.18038f, 0.000008f, -111.3077f },
	{ -97.64512f, 0.000006f, -184.856f },
	{ -25.99515f, 0.000008999999f, -119.4999f },
	{ -24.02531f, 0.000007f, -199.4999f },
	{ 214.9895f, 0.000004f, -119.5001f },
	{ 214.9898f, 0.000004f, -199.4999f },
	{ 94.98978f, -0.00002f, -199.4999f },
	{ 94.98978f, 0.000004f, 100.5001f },
	{ 94.49731f, 0.000007f, -119.4999f },
	{ 94.98978f, 0.000004f, 180.5f },
	{ 214.9898f, 0.000003f, 180.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00021944[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00021A94 = { vertexSTG12_000217F4, normalSTG12_00021944, LengthOfArray(vertexSTG12_000217F4), meshlistSTG12_000217C4, matlistSTG12_000216C8, LengthOfArray(meshlistSTG12_000217C4), LengthOfArray(matlistSTG12_000216C8),{ 0.08772299f, -0.00001f, 0.499985f }, 293.5692f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00021ABC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00021A94, -154.9897f, -0.00004f, -490.5001f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00021AF0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 41, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00021B2C[] = {
	0x8000u | 7, 32, 33, 57, 58, 34, 35, 37,
	19, 52, 53, 50, 51, 48, 49, 46, 47, 44, 45, 42, 43, 40, 41, 38, 39, 36, 37, 34,
	0x8000u | 24, 1, 32, 56, 57, 3, 34, 6, 36, 9, 38, 12, 40, 15, 42, 18, 44, 21, 46, 24, 48, 27, 50, 30, 52
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00021B96[] = {
	24, 60, 30, 62, 27, 64, 24, 66, 21, 68, 18, 70, 15, 65, 12, 69, 9, 61, 6, 67, 3, 63, 56, 59, 1
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00021BC8[] = {
	4, 55, 63, 0, 59,
	8, 20, 22, 23, 25, 26, 28, 29, 31,
	3, 54, 4, 55,
	0x8000u | 13, 55, 2, 4, 5, 7, 8, 10, 11, 13, 14, 16, 17, 19,
	14, 17, 68, 14, 70, 11, 65, 8, 69, 5, 61, 2, 67, 55, 63,
	4, 20, 66, 17, 68,
	8, 29, 60, 26, 62, 23, 64, 20, 66
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00021C44[] = {
	{ 466, 255 },
	{ 0, 255 },
	{ 466, -689 },
	{ 0, -689 },
	{ 464, -1482 },
	{ 0, -1482 },
	{ 0, -3730 },
	{ 510, -22695 },
	{ 0, -22695 },
	{ 464, -20807 },
	{ 0, -20807 },
	{ 468, -18407 },
	{ 0, -18407 },
	{ 488, -15971 },
	{ 0, -15971 },
	{ 516, -13522 },
	{ 0, -13522 },
	{ 529, -11070 },
	{ 0, -11070 },
	{ 516, -8615 },
	{ 0, -8615 },
	{ 488, -6170 },
	{ 0, -6170 },
	{ 468, -3730 },
	{ 0, -3730 },
	{ 464, -1482 },
	{ 1020, 255 },
	{ 466, 255 },
	{ 1020, -697 },
	{ 466, -689 },
	{ 1020, -1491 },
	{ 464, -1482 },
	{ 1020, -3746 },
	{ 468, -3730 },
	{ 1020, -6185 },
	{ 488, -6170 },
	{ 1020, -8624 },
	{ 516, -8615 },
	{ 1020, -11065 },
	{ 529, -11070 },
	{ 1020, -13504 },
	{ 516, -13522 },
	{ 1020, -15941 },
	{ 488, -15971 },
	{ 1020, -18380 },
	{ 468, -18407 },
	{ 1020, -20788 },
	{ 464, -20807 },
	{ 1020, -22695 },
	{ 510, -22695 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00021D0C[] = {
	{ 25499, -892 },
	{ 25499, 255 },
	{ 19666, -892 },
	{ 19521, 255 },
	{ 12685, -1976 },
	{ 12111, -895 },
	{ 6806, -5040 },
	{ 5744, -4213 },
	{ 2878, -9629 },
	{ 1491, -9182 },
	{ 1498, -15044 },
	{ 0, -15044 },
	{ 2878, -20456 },
	{ 1491, -20905 },
	{ 6806, -25045 },
	{ 5744, -25874 },
	{ 12685, -28111 },
	{ 12111, -29194 },
	{ 19176, -29197 },
	{ 19031, -30344 },
	{ 21565, -29197 },
	{ 21531, -30344 },
	{ 24517, -29197 },
	{ 24517, -30344 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00021D6C[] = {
	{ 125, 251 },
	{ 1, 251 },
	{ 125, -251 },
	{ 1, -251 },
	{ 128, -3315 },
	{ 255, -3315 },
	{ 128, -2064 },
	{ 255, -2064 },
	{ 127, -796 },
	{ 255, -796 },
	{ 127, 255 },
	{ 255, 255 },
	{ 255, -5865 },
	{ 255, -5468 },
	{ 127, -5865 },
	{ 127, -5865 },
	{ 127, -5468 },
	{ 255, -5468 },
	{ 128, -4373 },
	{ 255, -4373 },
	{ 128, -3217 },
	{ 255, -3217 },
	{ 128, -2058 },
	{ 255, -2058 },
	{ 128, -900 },
	{ 255, -900 },
	{ 128, 255 },
	{ 255, 255 },
	{ 128, 255 },
	{ 0, 255 },
	{ 128, -900 },
	{ 0, -904 },
	{ 128, -2058 },
	{ 0, -2064 },
	{ 128, -3217 },
	{ 0, -3222 },
	{ 128, -4373 },
	{ 0, -4383 },
	{ 127, -5468 },
	{ 0, -5473 },
	{ 127, -5865 },
	{ 0, -5865 },
	{ 129, 245 },
	{ 1, 245 },
	{ 129, -1008 },
	{ 1, -1008 },
	{ 127, 255 },
	{ 0, 255 },
	{ 127, -796 },
	{ 0, -784 },
	{ 128, -2064 },
	{ 0, -2054 },
	{ 128, -3315 },
	{ 0, -3315 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00021E44[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, polySTG12_00021B2C, NULL, NULL, NULL, uvSTG12_00021C44, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, polySTG12_00021B96, NULL, NULL, NULL, uvSTG12_00021D0C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 7, polySTG12_00021BC8, NULL, NULL, NULL, uvSTG12_00021D6C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00021E8C[] = {
	{ 20, 80, 360 },
	{ 20, 79.99998f, 400 },
	{ -88.03014f, 79.99998f, 360 },
	{ -91.96985f, 79.99997f, 400 },
	{ -88.03014f, 69.99998f, 360 },
	{ -217.6161f, 79.99998f, 332.2346f },
	{ -233.2234f, 79.99997f, 369.9138f },
	{ -217.6161f, 69.99998f, 332.2346f },
	{ -334.2813f, 79.99998f, 254.2814f },
	{ -363.1198f, 79.99997f, 283.1198f },
	{ -334.2813f, 69.99998f, 254.2814f },
	{ -412.2346f, 80, 137.6161f },
	{ -449.9138f, 79.99998f, 153.2233f },
	{ -412.2346f, 70, 137.6161f },
	{ -439.6081f, 80.00001f, 0.000061f },
	{ -480.3918f, 79.99998f, 0.000061f },
	{ -439.6081f, 70.00001f, 0.000061f },
	{ -412.2346f, 80.00001f, -137.616f },
	{ -449.9138f, 80, -153.2232f },
	{ -412.2346f, 70.00001f, -137.616f },
	{ -334.2814f, 80.00002f, -254.2813f },
	{ -363.1198f, 80.00001f, -283.1197f },
	{ -334.2814f, 70.00002f, -254.2813f },
	{ -217.6161f, 80.00002f, -332.2346f },
	{ -233.2234f, 80.00001f, -369.9138f },
	{ -217.6161f, 70.00002f, -332.2346f },
	{ -78.03014f, 80.00002f, -360 },
	{ -81.96985f, 80.00001f, -400 },
	{ -78.03014f, 70.00002f, -360 },
	{ 40, 80.00001f, -360 },
	{ 40, 79.99998f, -400 },
	{ 40, 70.00001f, -360 },
	{ 20.26806f, 79.99998f, 411.7984f },
	{ 20.26806f, 69.99998f, 411.7984f },
	{ -93.54377f, 79.99997f, 411.7984f },
	{ -93.54377f, 69.99997f, 411.7984f },
	{ -237.7016f, 79.99997f, 380.8253f },
	{ -237.7016f, 69.99997f, 380.8253f },
	{ -370.0919f, 79.99997f, 291.4706f },
	{ -370.0919f, 69.99997f, 291.4706f },
	{ -458.5528f, 79.99998f, 157.7429f },
	{ -458.5528f, 69.99998f, 157.7429f },
	{ -489.616f, 79.99998f, 0.000063f },
	{ -489.616f, 69.99998f, 0.000063f },
	{ -458.5528f, 80, -157.7427f },
	{ -458.5528f, 70, -157.7427f },
	{ -370.092f, 80.00001f, -291.4706f },
	{ -370.092f, 70.00001f, -291.4706f },
	{ -237.7016f, 80.00001f, -380.8253f },
	{ -237.7016f, 70.00001f, -380.8253f },
	{ -83.54377f, 80.00001f, -411.7984f },
	{ -83.54377f, 70.00001f, -411.7984f },
	{ 40, 80, -410 },
	{ 40, 70, -410 },
	{ -40, 70.00005f, 360 },
	{ -40, 80, 360 },
	{ -40.98492f, 79.99998f, 400 },
	{ -41.63786f, 79.99998f, 411.7984f },
	{ -41.63786f, 69.99998f, 411.7984f },
	{ 20, 80, 370 },
	{ 40, 80, -370 },
	{ -221.5179f, 79.99998f, 341.6544f },
	{ -79.01508f, 80.00001f, -370 },
	{ -40.24623f, 80, 370 },
	{ -221.5179f, 80.00001f, -341.6544f },
	{ -421.6544f, 80, 141.5179f },
	{ -341.491f, 80.00002f, -261.4909f },
	{ -89.01508f, 79.99998f, 370 },
	{ -421.6544f, 80.00001f, -141.5178f },
	{ -341.491f, 79.99998f, 261.491f },
	{ -449.804f, 80, 0.000061f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_000221E0[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.07181299f, 0.731604f, -0.677937f },
	{ 0, 1, 0 },
	{ 0.10534f, 0, -0.994436f },
	{ 0.256754f, 0.751938f, -0.607179f },
	{ 0, 1, 0 },
	{ 0.389473f, 0, -0.921038f },
	{ 0.464669f, 0.753768f, -0.464669f },
	{ 0, 1, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.607119f, 0.753768f, -0.251477f },
	{ 0, 1, 0 },
	{ 0.92388f, 0, -0.382684f },
	{ 0.657141f, 0.753768f, 0 },
	{ 0, 1, 0 },
	{ 1, 0, 0 },
	{ 0.398335f, 0.913812f, 0.079234f },
	{ 0, 1, 0 },
	{ 0.980785f, 0, 0.19509f },
	{ 0.225638f, 0.913812f, 0.337692f },
	{ 0, 1, 0 },
	{ 0.5555699f, 0, 0.83147f },
	{ 0.251477f, 0.753768f, 0.607119f },
	{ 0, 1, 0 },
	{ 0.382684f, 0, 0.92388f },
	{ 0.06700499f, 0.729849f, 0.680317f },
	{ 0, 1, 0 },
	{ 0.098017f, 0, 0.995185f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0, 1 },
	{ 0, 0.701938f, 0.712238f },
	{ 0, 0, 1 },
	{ -0.07703999f, 0.6840889f, 0.725319f },
	{ -0.105621f, 0, 0.994406f },
	{ -0.292054f, 0.6667629f, 0.685661f },
	{ -0.391877f, 0, 0.9200169f },
	{ -0.5300879f, 0.665721f, 0.525187f },
	{ -0.710383f, 0, 0.703816f },
	{ -0.690112f, 0.665985f, 0.283211f },
	{ -0.925127f, 0, 0.379658f },
	{ -0.745868f, 0.6660939f, 0 },
	{ -1, 0, 0 },
	{ -0.690112f, 0.665985f, -0.283211f },
	{ -0.925127f, 0, -0.379657f },
	{ -0.5300879f, 0.665721f, -0.525187f },
	{ -0.710383f, 0, -0.703815f },
	{ -0.287919f, 0.6654519f, -0.688677f },
	{ -0.385723f, 0, -0.922615f },
	{ -0.06692f, 0.6839629f, -0.726441f },
	{ -0.091732f, 0, -0.995784f },
	{ 0.010245f, 0.7103609f, -0.7037629f },
	{ 0.014555f, 0, -0.999894f },
	{ 0, 0, -1 },
	{ 0, 0.8944269f, -0.447213f },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 1, -0.00001f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00022534 = { vertexSTG12_00021E8C, normalSTG12_000221E0, LengthOfArray(vertexSTG12_00021E8C), meshlistSTG12_00021E44, matlistSTG12_00021AF0, LengthOfArray(meshlistSTG12_00021E44), LengthOfArray(matlistSTG12_00021AF0),{ -224.808f, 75, 0 }, 489.5929f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0002255C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00022534, -100, 0, -500, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00022590[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000225E0[] = {
	22, 2, 1, 6, 5, 10, 9, 14, 13, 18, 17, 22, 21, 26, 25, 30, 29, 34, 33, 38, 37, 42, 41,
	22, 3, 2, 7, 6, 11, 10, 15, 14, 19, 18, 23, 22, 27, 26, 31, 30, 35, 34, 39, 38, 43, 42
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002263C[] = {
	22, 0, 3, 4, 7, 8, 11, 12, 15, 16, 19, 20, 23, 24, 27, 28, 31, 32, 35, 36, 39, 40, 43
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002266A[] = {
	22, 1, 0, 5, 4, 9, 8, 13, 12, 17, 16, 21, 20, 25, 24, 29, 28, 33, 32, 37, 36, 41, 40
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00022698[] = {
	{ 6094, 254 },
	{ 6094, 184 },
	{ 4038, 254 },
	{ 4038, 184 },
	{ 3655, 254 },
	{ 3655, 184 },
	{ 3273, 254 },
	{ 3273, 184 },
	{ 2890, 254 },
	{ 2890, 184 },
	{ 2508, 254 },
	{ 2508, 184 },
	{ 2125, 254 },
	{ 2125, 184 },
	{ 1745, 254 },
	{ 1745, 184 },
	{ 1410, 254 },
	{ 1410, 184 },
	{ 1027, 254 },
	{ 1027, 184 },
	{ 23, 254 },
	{ 23, 184 },
	{ 3046, 184 },
	{ 3046, 70 },
	{ 1994, 184 },
	{ 1994, 70 },
	{ 1802, 184 },
	{ 1802, 70 },
	{ 1635, 184 },
	{ 1635, 70 },
	{ 1444, 184 },
	{ 1444, 70 },
	{ 1253, 184 },
	{ 1253, 70 },
	{ 1061, 184 },
	{ 1061, 70 },
	{ 896, 184 },
	{ 896, 70 },
	{ 705, 184 },
	{ 705, 70 },
	{ 513, 184 },
	{ 513, 70 },
	{ 11, 184 },
	{ 11, 70 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00022748[] = {
	{ 11, 186 },
	{ 11, 68 },
	{ 1157, 186 },
	{ 1157, 68 },
	{ 1324, 186 },
	{ 1324, 68 },
	{ 1492, 186 },
	{ 1492, 68 },
	{ 1659, 186 },
	{ 1659, 68 },
	{ 1826, 186 },
	{ 1826, 68 },
	{ 1994, 186 },
	{ 1994, 68 },
	{ 2163, 186 },
	{ 2163, 68 },
	{ 2328, 186 },
	{ 2328, 68 },
	{ 2498, 186 },
	{ 2498, 68 },
	{ 3046, 186 },
	{ 3046, 68 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000227A0[] = {
	{ 20400, -9945 },
	{ 20400, -9015 },
	{ 6361, -9945 },
	{ 6474, -9015 },
	{ 3962, -9563 },
	{ 4417, -8689 },
	{ 1880, -8457 },
	{ 2720, -7787 },
	{ 488, -6798 },
	{ 1585, -6438 },
	{ 0, -4845 },
	{ 1187, -4845 },
	{ 488, -2887 },
	{ 1585, -3251 },
	{ 1880, -1232 },
	{ 2720, -1898 },
	{ 3962, -124 },
	{ 4417, -996 },
	{ 6361, 255 },
	{ 6474, -672 },
	{ 13118, 255 },
	{ 13118, -672 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_000227F8[] = {
	{ NJD_MESHSET_TRIMESH | 1, 2, polySTG12_000225E0, NULL, NULL, NULL, uvSTG12_00022698, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, polySTG12_0002263C, NULL, NULL, NULL, uvSTG12_00022748, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, polySTG12_0002266A, NULL, NULL, NULL, uvSTG12_000227A0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00022840[] = {
	{ 60, 80, -410 },
	{ 60, 80, -390 },
	{ 60, 70, -390 },
	{ 60, 70, -410 },
	{ -179.0151f, 80, -410 },
	{ -180.9849f, 79.99998f, -390 },
	{ -180.9849f, 69.99998f, -390 },
	{ -179.0151f, 70, -410 },
	{ -214.3665f, 80, -417.0318f },
	{ -222.1702f, 79.99998f, -398.1923f },
	{ -222.1702f, 69.99998f, -398.1923f },
	{ -214.3665f, 70, -417.0318f },
	{ -243.5011f, 80, -436.4989f },
	{ -257.9203f, 80, -422.0797f },
	{ -257.9203f, 70, -422.0797f },
	{ -243.5011f, 70, -436.4989f },
	{ -262.9681f, 80, -465.6334f },
	{ -281.8077f, 80, -457.8299f },
	{ -281.8077f, 70, -457.8299f },
	{ -262.9681f, 70, -465.6334f },
	{ -269.804f, 80, -500 },
	{ -290.1959f, 80, -500 },
	{ -290.1959f, 70, -500 },
	{ -269.804f, 70, -500 },
	{ -262.9681f, 80, -534.3665f },
	{ -281.8078f, 80, -542.1701f },
	{ -281.8078f, 70, -542.1701f },
	{ -262.9681f, 70, -534.3665f },
	{ -243.5011f, 80, -563.501f },
	{ -257.9203f, 80, -577.9202f },
	{ -257.9203f, 70, -577.9202f },
	{ -243.5011f, 70, -563.501f },
	{ -214.3665f, 80.00001f, -582.9681f },
	{ -222.1702f, 80.00001f, -601.8077f },
	{ -222.1702f, 70, -601.8077f },
	{ -214.3665f, 70, -582.9681f },
	{ -179.0151f, 80.00001f, -590 },
	{ -180.9849f, 80.00001f, -610 },
	{ -180.9849f, 70.00001f, -610 },
	{ -179.0151f, 70.00001f, -590 },
	{ -65, 80, -590 },
	{ -65, 80, -610 },
	{ -65, 70, -610 },
	{ -65, 70, -590 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00022A50[] = {
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, -0.7071069f, -0.7071069f },
	{ 0.067006f, 0.729849f, -0.680317f },
	{ -0.071346f, 0.6856959f, 0.724383f },
	{ -0.071346f, -0.685697f, 0.724383f },
	{ 0.067006f, -0.729849f, -0.680317f },
	{ 0.251477f, 0.753767f, -0.60712f },
	{ -0.285559f, 0.665719f, 0.689402f },
	{ -0.285559f, -0.665719f, 0.689401f },
	{ 0.251477f, -0.753767f, -0.60712f },
	{ 0.464669f, 0.753768f, -0.464669f },
	{ -0.527645f, 0.665719f, 0.527645f },
	{ -0.527645f, -0.665719f, 0.527645f },
	{ 0.464669f, -0.753768f, -0.464669f },
	{ 0.60712f, 0.753767f, -0.251477f },
	{ -0.689401f, 0.665719f, 0.285559f },
	{ -0.689401f, -0.665719f, 0.285559f },
	{ 0.60712f, -0.753767f, -0.251477f },
	{ 0.657141f, 0.753767f, 0 },
	{ -0.7462029f, 0.665719f, 0 },
	{ -0.7462029f, -0.665719f, 0 },
	{ 0.657141f, -0.753767f, 0 },
	{ 0.607119f, 0.753767f, 0.251477f },
	{ -0.689401f, 0.665719f, -0.285559f },
	{ -0.689401f, -0.665719f, -0.285559f },
	{ 0.607119f, -0.753767f, 0.251477f },
	{ 0.464669f, 0.753767f, 0.464669f },
	{ -0.527645f, 0.665719f, -0.527645f },
	{ -0.527645f, -0.665719f, -0.527645f },
	{ 0.464669f, -0.753767f, 0.464669f },
	{ 0.251477f, 0.753767f, 0.607119f },
	{ -0.28556f, 0.665719f, -0.689401f },
	{ -0.28556f, -0.665719f, -0.689401f },
	{ 0.251477f, -0.753767f, 0.607119f },
	{ 0.067006f, 0.729849f, 0.680317f },
	{ -0.07134499f, 0.6856959f, -0.724383f },
	{ -0.07134499f, -0.6856959f, -0.724383f },
	{ 0.067006f, -0.729849f, 0.680317f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, -0.7071069f, -0.7071069f },
	{ 0, -0.7071069f, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00022C60 = { vertexSTG12_00022840, normalSTG12_00022A50, LengthOfArray(vertexSTG12_00022840), meshlistSTG12_000227F8, matlistSTG12_00022590, LengthOfArray(meshlistSTG12_000227F8), LengthOfArray(matlistSTG12_00022590),{ -115.098f, 75, -500 }, 206.7832f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00022C88 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00022C60, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00022CBC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00022D0C[] = {
	26, 62, 49, 54, 4, 58, 8, 64, 12, 60, 16, 56, 20, 52, 24, 63, 28, 61, 32, 59, 36, 57, 40, 55, 44, 53, 0
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00022D42[] = {
	26, 50, 51, 7, 6, 11, 10, 15, 14, 19, 18, 23, 22, 27, 26, 31, 30, 35, 34, 39, 38, 43, 42, 47, 46, 3, 2
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00022D78[] = {
	26, 3, 0, 47, 44, 43, 40, 39, 36, 35, 32, 31, 28, 27, 24, 23, 20, 19, 16, 15, 12, 11, 8, 7, 4, 50, 49
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00022DAE[] = {
	12, 1, 2, 45, 46, 41, 42, 37, 38, 33, 34, 29, 30,
	14, 48, 62, 5, 54, 9, 58, 13, 64, 17, 60, 21, 56, 25, 52,
	14, 25, 26, 21, 22, 17, 18, 13, 14, 9, 10, 5, 6, 48, 51,
	4, 25, 52, 29, 63,
	12, 29, 63, 33, 61, 37, 59, 41, 57, 45, 55, 1, 53
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00022E28[] = {
	{ 11534, -17547 },
	{ 11534, -16333 },
	{ 9715, -17547 },
	{ 9846, -16333 },
	{ 6024, -16876 },
	{ 6542, -15735 },
	{ 2856, -14946 },
	{ 3815, -14074 },
	{ 741, -12059 },
	{ 1993, -11588 },
	{ 0, -8655 },
	{ 1354, -8655 },
	{ 741, -5249 },
	{ 1993, -5722 },
	{ 2856, -2359 },
	{ 3815, -3235 },
	{ 6024, -432 },
	{ 6542, -1574 },
	{ 9715, 237 },
	{ 9846, -975 },
	{ 12420, 237 },
	{ 12420, -975 },
	{ 14193, 237 },
	{ 14193, -975 },
	{ 20399, 237 },
	{ 20399, -975 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00022E90[] = {
	{ 4080, 255 },
	{ 4080, 0 },
	{ 3902, 255 },
	{ 3906, 0 },
	{ 3544, 255 },
	{ 3549, 0 },
	{ 3200, 255 },
	{ 3182, 0 },
	{ 2852, 255 },
	{ 2815, 0 },
	{ 2505, 255 },
	{ 2448, 0 },
	{ 2161, 255 },
	{ 2081, 0 },
	{ 1815, 255 },
	{ 1713, 0 },
	{ 1467, 255 },
	{ 1346, 0 },
	{ 1113, 255 },
	{ 988, 0 },
	{ 840, 255 },
	{ 733, 0 },
	{ 653, 255 },
	{ 569, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00022EF8[] = {
	{ 15, 184 },
	{ 15, 68 },
	{ 653, 184 },
	{ 653, 68 },
	{ 844, 184 },
	{ 844, 68 },
	{ 1131, 184 },
	{ 1131, 68 },
	{ 1482, 184 },
	{ 1482, 68 },
	{ 1832, 184 },
	{ 1832, 68 },
	{ 2183, 184 },
	{ 2183, 68 },
	{ 2502, 184 },
	{ 2502, 68 },
	{ 2852, 184 },
	{ 2852, 68 },
	{ 3203, 184 },
	{ 3203, 68 },
	{ 3522, 184 },
	{ 3522, 68 },
	{ 3872, 184 },
	{ 3872, 68 },
	{ 4064, 184 },
	{ 4064, 68 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00022F60[] = {
	{ 127, -3825 },
	{ 255, -3825 },
	{ 127, -2464 },
	{ 255, -2464 },
	{ 127, -2073 },
	{ 255, -2073 },
	{ 127, -1473 },
	{ 255, -1473 },
	{ 128, -617 },
	{ 255, -617 },
	{ 128, 255 },
	{ 255, 255 },
	{ 127, 255 },
	{ 0, 255 },
	{ 127, -268 },
	{ 0, -278 },
	{ 128, -1368 },
	{ 0, -1385 },
	{ 128, -2490 },
	{ 0, -2503 },
	{ 128, -3616 },
	{ 0, -3623 },
	{ 128, -4740 },
	{ 0, -4745 },
	{ 128, -5865 },
	{ 0, -5865 },
	{ 128, -5865 },
	{ 255, -5865 },
	{ 128, -4740 },
	{ 255, -4740 },
	{ 128, -3616 },
	{ 255, -3616 },
	{ 128, -2490 },
	{ 255, -2490 },
	{ 128, -1368 },
	{ 255, -1368 },
	{ 127, -268 },
	{ 255, -268 },
	{ 127, 255 },
	{ 255, 255 },
	{ 125, 247 },
	{ 1, 247 },
	{ 125, -757 },
	{ 1, -757 },
	{ 128, 255 },
	{ 0, 255 },
	{ 128, -617 },
	{ 0, -596 },
	{ 127, -1473 },
	{ 0, -1435 },
	{ 127, -2073 },
	{ 0, -2040 },
	{ 127, -2464 },
	{ 0, -2437 },
	{ 127, -3825 },
	{ 0, -3825 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00023040[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_00022D0C, NULL, NULL, NULL, uvSTG12_00022E28, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, polySTG12_00022D42, NULL, NULL, NULL, uvSTG12_00022E90, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, polySTG12_00022D78, NULL, NULL, NULL, uvSTG12_00022EF8, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 5, polySTG12_00022DAE, NULL, NULL, NULL, uvSTG12_00022F60, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_000230A0[] = {
	{ 235.1959f, 5, -190 },
	{ 235.1959f, 5, -230 },
	{ 235.1959f, -5, -230 },
	{ 235.1959f, -5, -190 },
	{ -2.834274f, 4.999992f, 190 },
	{ -6.773941f, 4.999985f, 230 },
	{ -6.773941f, -5.000015f, 230 },
	{ -2.834274f, -5.000008f, 190 },
	{ -77.36399f, 5, 175.1751f },
	{ -92.97123f, 4.999985f, 212.8543f },
	{ -92.97123f, -5.000015f, 212.8543f },
	{ -77.36399f, -5, 175.1751f },
	{ -138.8773f, 5, 134.0732f },
	{ -167.7157f, 4.999985f, 162.9116f },
	{ -167.7157f, -5.000008f, 162.9116f },
	{ -138.8773f, -5, 134.0732f },
	{ -179.9792f, 5, 72.5599f },
	{ -217.6584f, 4.999992f, 88.16714f },
	{ -217.6584f, -5.000008f, 88.16711f },
	{ -179.9792f, -5, 72.5599f },
	{ -194.4123f, 5, 0.000031f },
	{ -235.1959f, 5, 0.000031f },
	{ -235.1959f, -5, 0.000031f },
	{ -194.4123f, -5, 0.000031f },
	{ -179.9792f, 5.000008f, -72.55987f },
	{ -217.6584f, 5, -88.16705f },
	{ -217.6584f, -5, -88.16705f },
	{ -179.9792f, -4.999992f, -72.55987f },
	{ -138.8773f, 5.000008f, -134.0732f },
	{ -167.7157f, 5, -162.9115f },
	{ -167.7157f, -5, -162.9115f },
	{ -138.8773f, -4.999992f, -134.0732f },
	{ -77.36404f, 5.000015f, -175.1751f },
	{ -92.97127f, 5.000008f, -212.8543f },
	{ -92.97127f, -5, -212.8543f },
	{ -77.36404f, -4.999985f, -175.1751f },
	{ -2.834274f, 5.000015f, -190 },
	{ -6.773911f, 5.000008f, -230 },
	{ -6.773911f, -4.999992f, -230 },
	{ -2.834274f, -4.999985f, -190 },
	{ 55.19589f, 5, -190 },
	{ 55.19592f, 5, -230 },
	{ 55.19592f, -5, -230 },
	{ 55.19589f, -5, -190 },
	{ 95.19588f, 5, -190 },
	{ 95.19592f, 5, -230 },
	{ 95.19592f, -5, -230 },
	{ 95.19588f, -5, -190 },
	{ 35.1959f, 4.999996f, 230 },
	{ 35.19591f, 5.000004f, 190 },
	{ 35.19591f, -5, 190 },
	{ 35.1959f, -5, 230 },
	{ -208.2386f, 5.000002f, -84.26526f },
	{ 235.1959f, 5, -220 },
	{ -5.789024f, 4.999987f, 220 },
	{ 95.19591f, 5, -220 },
	{ -225, 5, 0.000031f },
	{ 55.19591f, 5, -220 },
	{ -89.06942f, 4.999989f, 203.4345f },
	{ -5.789001f, 5.00001f, -220 },
	{ -208.2386f, 4.999994f, 84.26533f },
	{ -89.06945f, 5.00001f, -203.4345f },
	{ 35.1959f, 4.999998f, 220 },
	{ -160.5061f, 5.000002f, -155.702f },
	{ -160.5061f, 4.999989f, 155.702f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_000233AC[] = {
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, -0.7071069f, -0.7071069f },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0.06700499f, 0.729849f, -0.680317f },
	{ -0.071346f, 0.6856959f, 0.724383f },
	{ -0.07134499f, -0.685697f, 0.724382f },
	{ 0.06700499f, -0.729849f, -0.680317f },
	{ 0.251477f, 0.753767f, -0.607119f },
	{ -0.28556f, 0.665718f, 0.689402f },
	{ -0.285559f, -0.66572f, 0.689401f },
	{ 0.251477f, -0.753767f, -0.60712f },
	{ 0.464669f, 0.753768f, -0.464669f },
	{ -0.527645f, 0.665718f, 0.527645f },
	{ -0.527645f, -0.66572f, 0.527644f },
	{ 0.464669f, -0.753767f, -0.464669f },
	{ 0.607119f, 0.753767f, -0.251477f },
	{ -0.689402f, 0.665718f, 0.28556f },
	{ -0.689401f, -0.66572f, 0.285559f },
	{ 0.60712f, -0.753767f, -0.251477f },
	{ 0.657141f, 0.753767f, 0 },
	{ -0.7462029f, 0.665718f, 0 },
	{ -0.746202f, -0.66572f, 0 },
	{ 0.657141f, -0.753767f, 0 },
	{ 0.607119f, 0.753767f, 0.251477f },
	{ -0.486606f, 0.868243f, -0.096792f },
	{ -0.486605f, -0.868243f, -0.096792f },
	{ 0.60712f, -0.753767f, 0.251477f },
	{ 0.464669f, 0.753767f, 0.464669f },
	{ -0.27564f, 0.868243f, -0.412524f },
	{ -0.27564f, -0.868243f, -0.412524f },
	{ 0.464669f, -0.753767f, 0.464669f },
	{ 0.251477f, 0.753767f, 0.607119f },
	{ -0.28556f, 0.665719f, -0.689401f },
	{ -0.28556f, -0.665719f, -0.689401f },
	{ 0.251477f, -0.753767f, 0.607119f },
	{ 0.06700499f, 0.729849f, 0.680317f },
	{ -0.07134499f, 0.6856959f, -0.724383f },
	{ -0.07134499f, -0.685697f, -0.724383f },
	{ 0.06700499f, -0.729849f, 0.680317f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, -0.7071069f, -0.7071069f },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, -0.7071069f, -0.7071069f },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, -0.7071069f, -0.7071069f },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_000236B8 = { vertexSTG12_000230A0, normalSTG12_000233AC, LengthOfArray(vertexSTG12_000230A0), meshlistSTG12_00023040, matlistSTG12_00022CBC, LengthOfArray(meshlistSTG12_00023040), LengthOfArray(matlistSTG12_00022CBC),{ 0.000008f, 0, 0 }, 328.9637f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_000236E0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_000236B8, -175.1959f, 75, -500, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00023714[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00023750[] = {
	4, 1, 0, 5, 4
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002375A[] = {
	4, 7, 8, 3, 9
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00023764[] = {
	3, 8, 6, 9,
	0x8000u | 5, 9, 2, 6, 0, 4
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00023778[] = {
	{ 1020, 0 },
	{ 1020, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00023788[] = {
	{ 12716, -1098 },
	{ 12716, 115 },
	{ 31, -1098 },
	{ 31, 115 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00023798[] = {
	{ 0, 255 },
	{ 127, 255 },
	{ 0, -1785 },
	{ 0, -1785 },
	{ 127, -1785 },
	{ 127, 255 },
	{ 255, -1785 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_000237B8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_00023750, NULL, NULL, NULL, uvSTG12_00023778, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, polySTG12_0002375A, NULL, NULL, NULL, uvSTG12_00023788, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, polySTG12_00023764, NULL, NULL, NULL, uvSTG12_00023798, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00023800[] = {
	{ 60, 70, -730 },
	{ 60, 70, -690 },
	{ 60, 80, -730 },
	{ 60, 80, -690 },
	{ 300, 70, -730 },
	{ 300, 70, -690 },
	{ 300, 80, -730 },
	{ 300, 80, -690 },
	{ 300, 80, -720 },
	{ 60, 80, -720 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00023878[] = {
	{ 0, -0.7071069f, -0.7071069f },
	{ 0, -1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 1, 0 },
	{ 0, -0.7071069f, -0.7071069f },
	{ 0, -1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_000238F0 = { vertexSTG12_00023800, normalSTG12_00023878, LengthOfArray(vertexSTG12_00023800), meshlistSTG12_000237B8, matlistSTG12_00023714, LengthOfArray(meshlistSTG12_000237B8), LengthOfArray(matlistSTG12_00023714),{ 180, 75, -710 }, 121.6553f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00023918 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_000238F0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0002394C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 56, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 77, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000239D8[] = {
	4, 6, 4, 2, 0
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000239E2[] = {
	0x8000u | 8, 27, 19, 25, 17, 23, 15, 21, 13,
	8, 27, 28, 25, 26, 23, 24, 21, 22,
	0x8000u | 8, 22, 14, 24, 16, 26, 18, 28, 20
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00023A18[] = {
	4, 28, 27, 20, 19,
	4, 21, 22, 13, 14
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00023A2C[] = {
	0x8000u | 8, 1, 13, 5, 15, 8, 17, 10, 19
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00023A3E[] = {
	4, 13, 14, 1, 3,
	4, 12, 20, 10, 19
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00023A52[] = {
	8, 1, 0, 5, 4, 8, 7, 10, 9
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00023A64[] = {
	4, 11, 12, 9, 10
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00023A70[] = {
	{ 254, -1020 },
	{ 0, -1019 },
	{ 254, 252 },
	{ 2, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00023A80[] = {
	{ 3060, -45 },
	{ 3059, -255 },
	{ 2080, -45 },
	{ 2080, -255 },
	{ 1123, -45 },
	{ 1123, -255 },
	{ 0, -45 },
	{ 0, -255 },
	{ 3060, -45 },
	{ 3060, 45 },
	{ 2080, -45 },
	{ 2091, 45 },
	{ 1123, -45 },
	{ 1125, 45 },
	{ 0, -45 },
	{ 0, 45 },
	{ 0, 45 },
	{ 0, 255 },
	{ 1125, 45 },
	{ 1125, 254 },
	{ 2091, 45 },
	{ 2091, 255 },
	{ 3060, 45 },
	{ 3060, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00023AE0[] = {
	{ 123, 0 },
	{ 188, 0 },
	{ 57, 255 },
	{ 255, 255 },
	{ 131, 0 },
	{ 66, 0 },
	{ 197, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00023B00[] = {
	{ 0, 255 },
	{ 0 },
	{ 1498, 255 },
	{ 1498, 0 },
	{ 2773, 255 },
	{ 2773, 0 },
	{ 4080, 255 },
	{ 4080, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00023B20[] = {
	{ 219, 0 },
	{ 0 },
	{ 219, 255 },
	{ 0, 255 },
	{ 35, 255 },
	{ 35, 0 },
	{ 255, 255 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00023B40[] = {
	{ 8159, 0 },
	{ 8159, 255 },
	{ 5161, 0 },
	{ 5161, 255 },
	{ 2612, 0 },
	{ 2612, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00023B60[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00023B70[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_000239D8, NULL, NULL, NULL, uvSTG12_00023A70, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, polySTG12_000239E2, NULL, NULL, NULL, uvSTG12_00023A80, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, polySTG12_00023A18, NULL, NULL, NULL, uvSTG12_00023AE0, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, polySTG12_00023A2C, NULL, NULL, NULL, uvSTG12_00023B00, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, polySTG12_00023A3E, NULL, NULL, NULL, uvSTG12_00023B20, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, polySTG12_00023A52, NULL, NULL, NULL, uvSTG12_00023B40, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 1, polySTG12_00023A64, NULL, NULL, NULL, uvSTG12_00023B60, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00023C18[] = {
	{ 49.02322f, 14, -66.56556f },
	{ 49.02322f, 19, -66.56556f },
	{ 60.57264f, 14, -93.9731f },
	{ 60.57266f, 19, -93.9731f },
	{ 178.3663f, 14, -12.9899f },
	{ 178.3663f, 19, -12.9899f },
	{ 189.8468f, 14, -40.70628f },
	{ 288.308f, 14, 32.54943f },
	{ 288.308f, 19, 32.54943f },
	{ 401.0211f, 14, 79.23679f },
	{ 401.0211f, 19, 79.23679f },
	{ 411.647f, 14, 51.44659f },
	{ 411.647f, 19, 51.44659f },
	{ 49.02322f, 44, -66.56556f },
	{ 60.57265f, 44, -93.9731f },
	{ 178.3663f, 44, -12.9899f },
	{ 189.9158f, 44, -40.39742f },
	{ 288.308f, 44, 32.54943f },
	{ 300.7815f, 44, 5.524602f },
	{ 401.0211f, 44, 79.23679f },
	{ 411.647f, 44, 51.44659f },
	{ 52.85006f, 64, -75.80436f },
	{ 56.74582f, 64, -84.7343f },
	{ 182.1931f, 64, -22.22869f },
	{ 186.089f, 64, -31.15863f },
	{ 292.1348f, 64, 23.31063f },
	{ 296.9546f, 64, 14.7634f },
	{ 404.848f, 64, 69.99799f },
	{ 407.8202f, 64, 60.68539f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00023D74[] = {
	{ -0.271125f, -0.705726f, 0.6545539f },
	{ -0.756252f, 0, 0.654281f },
	{ 0, -1, 0 },
	{ -0.921522f, 0, -0.388326f },
	{ -0.342283f, -0.447213f, 0.826343f },
	{ -0.382683f, 0, 0.92388f },
	{ 0, -1, 0 },
	{ -0.382684f, 0, 0.92388f },
	{ -0.382684f, 0, 0.92388f },
	{ 0.395346f, 0, 0.918532f },
	{ 0.395346f, 0, 0.918532f },
	{ 0.93405f, 0, 0.357143f },
	{ 0.93405f, 0, 0.357143f },
	{ -0.890382f, 0.172233f, 0.421373f },
	{ -0.6197039f, 0.224063f, -0.752172f },
	{ -0.372446f, 0.229753f, 0.899165f },
	{ 0.342282f, 0.447214f, -0.826343f },
	{ -0.372446f, 0.229753f, 0.899165f },
	{ 0.342282f, 0.447214f, -0.826343f },
	{ 0.341739f, 0.181222f, 0.922157f },
	{ 0.966532f, 0.230301f, -0.11304f },
	{ -0.723299f, 0.6738819f, 0.150738f },
	{ -0.395696f, 0.676776f, -0.620806f },
	{ -0.201189f, 0.850651f, 0.485712f },
	{ 0.201188f, 0.850651f, -0.485712f },
	{ -0.201189f, 0.850651f, 0.485712f },
	{ 0.201188f, 0.850651f, -0.485712f },
	{ 0.416111f, 0.677557f, 0.606438f },
	{ 0.703232f, 0.689806f, -0.17214f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00023ED0 = { vertexSTG12_00023C18, normalSTG12_00023D74, LengthOfArray(vertexSTG12_00023C18), meshlistSTG12_00023B70, matlistSTG12_0002394C, LengthOfArray(meshlistSTG12_00023B70), LengthOfArray(matlistSTG12_0002394C),{ 230.3351f, 39, -7.368153f }, 191.0896f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00023EF8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00023ED0, -100, 66, -500, 0, 0x1000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00023F2C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 36, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 55, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00023F90[] = {
	0x8000u | 14, 6, 16, 5, 15, 4, 14, 21, 20, 3, 13, 2, 12, 1, 11
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00023FAE[] = {
	4, 16, 15, 17, 28,
	4, 35, 32, 3, 2,
	4, 13, 12, 34, 33,
	4, 7, 29, 6, 5,
	4, 10, 33, 11, 12,
	4, 1, 2, 0, 32,
	4, 15, 14, 28, 30,
	4, 29, 31, 5, 4
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00023FFE[] = {
	4, 21, 4, 23, 25,
	4, 22, 24, 20, 14,
	4, 20, 13, 22, 26,
	4, 23, 27, 21, 3
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00024026[] = {
	4, 18, 30, 24, 14,
	4, 9, 35, 27, 3,
	4, 25, 4, 8, 31,
	4, 26, 13, 19, 34
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002404E[] = {
	4, 37, 41, 1, 11,
	4, 41, 40, 11, 10,
	4, 43, 42, 17, 16,
	4, 38, 39, 6, 7,
	4, 36, 37, 0, 1,
	4, 42, 38, 16, 6
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002408C[] = {
	{ 0, 255 },
	{ 510, 255 },
	{ 0, -342 },
	{ 510, -342 },
	{ 0, -1034 },
	{ 510, -1034 },
	{ 0, -1785 },
	{ 510, -1785 },
	{ 0, -2534 },
	{ 510, -2534 },
	{ 0, -3225 },
	{ 510, -3225 },
	{ 0, -3825 },
	{ 510, -3825 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000240C4[] = {
	{ 254, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00024144[] = {
	{ 0, 212 },
	{ 254, 254 },
	{ 0 },
	{ 254, 0 },
	{ 254, 0 },
	{ 0 },
	{ 254, 212 },
	{ 0, 254 },
	{ 0, 212 },
	{ 254, 254 },
	{ 0 },
	{ 254, 0 },
	{ 254, 0 },
	{ 0 },
	{ 254, 212 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00024184[] = {
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 },
	{ 254, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000241C4[] = {
	{ 1, 57 },
	{ 129, 57 },
	{ 1, 1 },
	{ 129, 5 },
	{ 1, 57 },
	{ 253, 57 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 57 },
	{ 253, 57 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 57 },
	{ 253, 57 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 57 },
	{ 253, 57 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 57 },
	{ 129, 57 },
	{ 1, 1 },
	{ 129, 5 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00024224[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_00023F90, NULL, NULL, NULL, uvSTG12_0002408C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 8, polySTG12_00023FAE, NULL, NULL, NULL, uvSTG12_000240C4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, polySTG12_00023FFE, NULL, NULL, NULL, uvSTG12_00024144, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, polySTG12_00024026, NULL, NULL, NULL, uvSTG12_00024184, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 6, polySTG12_0002404E, NULL, NULL, NULL, uvSTG12_000241C4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0002429C[] = {
	{ -5.000019f, 6, -590 },
	{ -10.00002f, 6, -610 },
	{ -10.00002f, 30, -610 },
	{ -10.00002f, 56, -620 },
	{ -10.00002f, 56, -680 },
	{ -10.00002f, 30, -690 },
	{ -10.00002f, 6, -690 },
	{ -5.000019f, 6, -710 },
	{ -5.000019f, 80, -710 },
	{ -5.000019f, 80, -590 },
	{ -25.00002f, 6, -590 },
	{ -20.00002f, 6, -610 },
	{ -20.00002f, 30, -610 },
	{ -20.00002f, 56, -620 },
	{ -20.00002f, 56, -680 },
	{ -20.00002f, 30, -690 },
	{ -20.00002f, 6, -690 },
	{ -25.10002f, 6, -710 },
	{ -25.10002f, 80, -710 },
	{ -25.00002f, 80, -590 },
	{ -20.00002f, 59, -650 },
	{ -10.00002f, 59, -650 },
	{ -20.00002f, 80, -650 },
	{ -10.00002f, 80, -650 },
	{ -20.00002f, 80, -680 },
	{ -10.00002f, 80, -680 },
	{ -20.00002f, 80, -620 },
	{ -10.00002f, 80, -620 },
	{ -25.10002f, 30.04193f, -710 },
	{ -5.000019f, 30.04193f, -710 },
	{ -25.10002f, 56.02097f, -710 },
	{ -5.000019f, 56.02097f, -710 },
	{ -5.000019f, 30.04193f, -590 },
	{ -25.00002f, 30.04193f, -590 },
	{ -25.00002f, 56.02097f, -590 },
	{ -5.000019f, 56.02097f, -590 },
	{ -5.000019f, 0, -590 },
	{ -10.00002f, 0, -610 },
	{ -10.00002f, 0, -690 },
	{ -5.000019f, 0, -710 },
	{ -25.00002f, 0, -590 },
	{ -20.00002f, 0, -610 },
	{ -20.00002f, 0, -690 },
	{ -25.10002f, 0, -710 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_000244AC[] = {
	{ 0.970143f, 0, -0.242536f },
	{ 0.615412f, 0, -0.788205f },
	{ 0.670634f, -0.122385f, -0.731623f },
	{ 0.814373f, -0.41858f, -0.401978f },
	{ 0.805811f, -0.41967f, 0.417788f },
	{ 0.652409f, -0.125742f, 0.747362f },
	{ 0.615412f, 0, 0.788205f },
	{ 0.970143f, 0, 0.242536f },
	{ 0.986394f, 0, 0.164399f },
	{ 0.986394f, 0, -0.164399f },
	{ -0.970143f, 0, -0.242536f },
	{ -0.615412f, 0, -0.788205f },
	{ -0.670634f, -0.122385f, -0.731623f },
	{ -0.814373f, -0.41858f, -0.401978f },
	{ -0.804916f, -0.419617f, 0.41956f },
	{ -0.650403f, -0.125842f, 0.749093f },
	{ -0.613558f, 0, 0.78965f },
	{ -0.968992f, 0, 0.247093f },
	{ -0.985856f, 0, 0.167596f },
	{ -0.986394f, 0, -0.164399f },
	{ -0.730204f, -0.683229f, 0 },
	{ 0.730204f, -0.683229f, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -0.996458f, 0, 0.084096f },
	{ 0.996593f, 0, 0.082481f },
	{ -0.996593f, 0, -0.082481f },
	{ 0.996593f, 0, -0.082481f },
	{ -0.96873f, -0.02377f, 0.246976f },
	{ 0.96989f, -0.023332f, 0.242424f },
	{ -0.977974f, -0.023749f, 0.20737f },
	{ 0.9788f, -0.023311f, 0.203489f },
	{ 0.978936f, -0.015839f, -0.203552f },
	{ -0.978936f, -0.015839f, -0.203552f },
	{ -0.986273f, -0.015799f, -0.164368f },
	{ 0.986273f, -0.015799f, -0.164368f },
	{ 0.970143f, 0, -0.242536f },
	{ 0.615412f, 0, -0.788205f },
	{ 0.615412f, 0, 0.788205f },
	{ 0.970143f, 0, 0.242536f },
	{ -0.970143f, 0, -0.242536f },
	{ -0.615412f, 0, -0.788205f },
	{ -0.613558f, 0, 0.78965f },
	{ -0.968992f, 0, 0.247093f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_000246BC = { vertexSTG12_0002429C, normalSTG12_000244AC, LengthOfArray(vertexSTG12_0002429C), meshlistSTG12_00024224, matlistSTG12_00023F2C, LengthOfArray(meshlistSTG12_00024224), LengthOfArray(matlistSTG12_00023F2C),{ -15.05002f, 40, -650 }, 60.83586f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_000246E4 = { NJD_EVAL_BREAK, &attachSTG12_000246BC, 650, 0, -315, 0, 0x4000, 0, 1, 0.998f, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00024718[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002472C[] = {
	3, 2, 4, 3,
	0x8000u | 6, 11, 10, 14, 13, 12, 9,
	5, 11, 15, 14, 0, 12,
	9, 11, 8, 15, 7, 1, 6, 2, 5, 4,
	3, 1, 0, 15
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002476C[] = {
	{ 203, -832 },
	{ 0, -382 },
	{ 52, -625 },
	{ 1625, 254 },
	{ 2549, 255 },
	{ 1625, -382 },
	{ 2549, -382 },
	{ 1625, -1020 },
	{ 2550, -1020 },
	{ 1625, 254 },
	{ 701, -382 },
	{ 1625, -382 },
	{ 701, -1020 },
	{ 1625, -1020 },
	{ 1625, 254 },
	{ 701, 254 },
	{ 701, -382 },
	{ 428, 205 },
	{ 428, -968 },
	{ 203, 67 },
	{ 203, -832 },
	{ 52, -139 },
	{ 0, -382 },
	{ 428, -968 },
	{ 701, -1020 },
	{ 701, -382 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_000247D4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, polySTG12_0002472C, NULL, NULL, NULL, uvSTG12_0002476C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_000247EC[] = {
	{ -179.0151f, -0.00004f, -410 },
	{ -214.3665f, -0.00003f, -417.0318f },
	{ -243.5011f, -0.00002f, -436.4989f },
	{ -262.9681f, -0.00001f, -465.6334f },
	{ -269.804f, 0, -500 },
	{ -262.9681f, 0.000002f, -534.3665f },
	{ -243.5011f, 0.000003f, -563.501f },
	{ -214.3665f, 0.000004f, -582.9681f },
	{ -179.0151f, 0.000005f, -590 },
	{ 60, 0.000001f, -410 },
	{ 59.99976f, 0, -590.0001f },
	{ -59.50754f, 0.000002f, -590 },
	{ -59.50754f, -0.00001f, -410 },
	{ 59.99989f, 0, -500.0001f },
	{ -59.50754f, 0, -500 },
	{ -179.0151f, 0, -500 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_000248AC[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0002496C = { vertexSTG12_000247EC, normalSTG12_000248AC, LengthOfArray(vertexSTG12_000247EC), meshlistSTG12_000247D4, matlistSTG12_00024718, LengthOfArray(meshlistSTG12_000247D4), LengthOfArray(matlistSTG12_00024718),{ -104.902f, 0, -500.0001f }, 187.8635f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00024994 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0002496C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_000249C8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 51, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000249F0[] = {
	4, 0, 2, 1, 3
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000249FA[] = {
	0x8000u | 30, 5, 20, 18, 33, 17, 32, 6, 21, 7, 22, 8, 23, 9, 24, 10, 25, 11, 26, 12, 27, 13, 28, 14, 29, 15, 30, 16, 31, 4, 19
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00024A38[] = {
	{ 1020, 255 },
	{ 1020, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00024A48[] = {
	{ 7, -9865 },
	{ 1012, -9865 },
	{ 7, -8271 },
	{ 1012, -8271 },
	{ 7, -7632 },
	{ 1012, -7632 },
	{ 7, -6994 },
	{ 1012, -6994 },
	{ 7, -6516 },
	{ 1012, -6516 },
	{ 7, -5878 },
	{ 1012, -5878 },
	{ 7, -5400 },
	{ 1012, -5400 },
	{ 7, -4922 },
	{ 1012, -4922 },
	{ 7, -4285 },
	{ 1012, -4285 },
	{ 7, -3809 },
	{ 1012, -3809 },
	{ 7, -3330 },
	{ 1012, -3330 },
	{ 7, -2693 },
	{ 1012, -2693 },
	{ 7, -2055 },
	{ 1012, -2055 },
	{ 7, -1418 },
	{ 1012, -1418 },
	{ 7, 175 },
	{ 1012, 175 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00024AC0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_000249F0, NULL, NULL, NULL, uvSTG12_00024A38, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, polySTG12_000249FA, NULL, NULL, NULL, uvSTG12_00024A48, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00024AF0[] = {
	{ 94.80403f, -0.00008f, 199.9998f },
	{ 214.804f, -0.00008f, 199.9999f },
	{ 94.80405f, -0.00008f, 180 },
	{ 214.804f, -0.00008f, 180 },
	{ 214.8041f, 0, -199.9999f },
	{ 214.8041f, 0, 180.0001f },
	{ -23.2261f, -0.00008f, 180.0001f },
	{ -97.75583f, 0, 165.1752f },
	{ -159.2691f, 0, 124.0733f },
	{ -200.371f, 0, 62.56f },
	{ -214.8041f, 0, -9.999878f },
	{ -200.371f, 0.000008f, -82.55978f },
	{ -159.2692f, 0.000008f, -144.0731f },
	{ -97.75587f, 0.000015f, -185.175f },
	{ -23.2261f, 0.000015f, -199.9999f },
	{ 34.80406f, 0, -199.9999f },
	{ 74.80406f, 0, -199.9999f },
	{ 34.80408f, 0, 180.0001f },
	{ 74.80408f, 0, 180.0001f },
	{ 214.8041f, 0, -119.9999f },
	{ 214.8041f, 0, 100.0001f },
	{ -26.18083f, -0.00008f, 100.0001f },
	{ -67.36609f, -0.00008f, 91.80783f },
	{ -103.1162f, 0, 67.92038f },
	{ -127.0037f, 0, 32.17022f },
	{ -135.3918f, 0, -9.999907f },
	{ -127.0037f, 0, -52.17001f },
	{ -103.1162f, 0, -87.92013f },
	{ -67.36609f, 0.000008f, -111.8076f },
	{ -26.18085f, 0.000008f, -119.9999f },
	{ 34.80406f, 0, -119.9999f },
	{ 74.80406f, 0, -119.9999f },
	{ 34.80409f, 0, 100.0001f },
	{ 74.80408f, 0, 100.0001f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00024C88[] = {
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00024E20 = { vertexSTG12_00024AF0, normalSTG12_00024C88, LengthOfArray(vertexSTG12_00024AF0), meshlistSTG12_00024AC0, matlistSTG12_000249C8, LengthOfArray(meshlistSTG12_00024AC0), LengthOfArray(matlistSTG12_000249C8),{ -0.00008f, 0.000004f, 0 }, 293.4974f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00024E48 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00024E20, -154.8041f, 80, -490.0001f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00024E7C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 51, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00024E90[] = {
	4, 2, 1, 3, 0
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00024E9C[] = {
	{ -765, 2040 },
	{ -765, 0 },
	{ 255, 2040 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00024EAC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_00024E90, NULL, NULL, NULL, uvSTG12_00024E9C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00024EC4[] = {
	{ 300, 79, -680 },
	{ 300, 79, -620 },
	{ 540, 79, -620 },
	{ 540, 79, -680 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00024EF4[] = {
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00024F24 = { vertexSTG12_00024EC4, normalSTG12_00024EF4, LengthOfArray(vertexSTG12_00024EC4), meshlistSTG12_00024EAC, matlistSTG12_00024E7C, LengthOfArray(meshlistSTG12_00024EAC), LengthOfArray(matlistSTG12_00024E7C),{ 420, 79, -650 }, 123.6932f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00024F4C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00024F24, -240, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00024F80[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 67, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00024FBC[] = {
	4, 11, 12, 0, 1,
	6, 8, 12, 9, 7, 10, 5,
	4, 11, 6, 12, 7
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00024FDE[] = {
	4, 5, 7, 3, 6
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00024FE8[] = {
	0x8000u | 5, 8, 2, 9, 4, 10
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00024FF4[] = {
	{ 129, 243 },
	{ 129, -1261 },
	{ 253, 243 },
	{ 253, -1261 },
	{ 1, -757 },
	{ 129, -757 },
	{ 1, -629 },
	{ 129, -629 },
	{ 1, 247 },
	{ 129, 247 },
	{ 125, 243 },
	{ 1, 243 },
	{ 125, -1261 },
	{ 1, -1261 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002502C[] = {
	{ 1019, 254 },
	{ 0, 254 },
	{ 1019, -1785 },
	{ 0, -1785 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002503C[] = {
	{ 0, -960 },
	{ 0, 240 },
	{ 350, -960 },
	{ 2805, 240 },
	{ 2804, -960 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00025050[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, polySTG12_00024FBC, NULL, NULL, NULL, uvSTG12_00024FF4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, polySTG12_00024FDE, NULL, NULL, NULL, uvSTG12_0002502C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, polySTG12_00024FE8, NULL, NULL, NULL, uvSTG12_0002503C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00025098[] = {
	{ -140, 70, -140 },
	{ -140, 70, -270 },
	{ -140, 80, -310 },
	{ -80, 80, -140 },
	{ -79.99998f, 80, -310 },
	{ -80, 80, -270 },
	{ -132.5f, 80, -140 },
	{ -132.5f, 80, -270 },
	{ -140, 80, -280 },
	{ -132.5f, 80, -280 },
	{ -80, 80, -280 },
	{ -140, 80, -140 },
	{ -140, 80, -270 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00025134[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.447214f, 0.8944269f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_000251D0 = { vertexSTG12_00025098, normalSTG12_00025134, LengthOfArray(vertexSTG12_00025098), meshlistSTG12_00025050, matlistSTG12_00024F80, LengthOfArray(meshlistSTG12_00025050), LengthOfArray(matlistSTG12_00024F80),{ -110, 75, -225 }, 90.13878f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_000251F8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_000251D0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0002522C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 63, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00025290[] = {
	8, 23, 22, 13, 12, 9, 8, 11, 10
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000252A2[] = {
	4, 17, 16, 5, 4,
	7, 25, 19, 7, 15, 3, 17, 5,
	3, 7, 21, 25
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000252C4[] = {
	14, 23, 13, 19, 9, 15, 11, 17, 10, 16, 8, 14, 12, 18, 24,
	3, 19, 25, 23,
	3, 12, 22, 24
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000252F2[] = {
	6, 3, 0, 7, 6, 21, 20,
	4, 5, 4, 2, 1
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002530C[] = {
	{ 113, -2295 },
	{ 1161, -2295 },
	{ 113, -1340 },
	{ 1161, -1340 },
	{ 113, -372 },
	{ 1161, -372 },
	{ 113, 190 },
	{ 1161, 190 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002532C[] = {
	{ 1530, 255 },
	{ 0, 255 },
	{ 1530, 0 },
	{ 0 },
	{ 4080, 0 },
	{ 2593, 0 },
	{ 2593, 255 },
	{ 1080, 0 },
	{ 1080, 255 },
	{ 0 },
	{ 0, 255 },
	{ 2593, 255 },
	{ 4080, 255 },
	{ 4080, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00025364[] = {
	{ 8160, 255 },
	{ 6847, 255 },
	{ 6951, 0 },
	{ 5511, 255 },
	{ 5725, 0 },
	{ 4736, 255 },
	{ 4845, 0 },
	{ 3423, 255 },
	{ 3312, 0 },
	{ 2646, 255 },
	{ 2434, 0 },
	{ 1312, 255 },
	{ 1204, 0 },
	{ 0 },
	{ 6951, 0 },
	{ 8160, 0 },
	{ 8160, 255 },
	{ 1312, 255 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000253B4[] = {
	{ 0 },
	{ 0, 255 },
	{ 2056, 0 },
	{ 2056, 255 },
	{ 4080, 0 },
	{ 4080, 255 },
	{ 3060, 255 },
	{ 0, 255 },
	{ 3060, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_000253DC[] = {
	{ NJD_MESHSET_TRIMESH | 1, 1, polySTG12_00025290, NULL, NULL, NULL, uvSTG12_0002530C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, polySTG12_000252A2, NULL, NULL, NULL, uvSTG12_0002532C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 3, polySTG12_000252C4, NULL, NULL, NULL, uvSTG12_00025364, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, polySTG12_000252F2, NULL, NULL, NULL, uvSTG12_000253B4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0002543C[] = {
	{ 95.19592f, 5, 190 },
	{ 235.1959f, 5, 110 },
	{ 95.19592f, 5, 110 },
	{ 95.19592f, 10, 190 },
	{ 235.1959f, 10, 110 },
	{ 95.19592f, 10, 110 },
	{ 95.19592f, 5, 302 },
	{ 95.19592f, 10, 302 },
	{ 220.1959f, 48, 190 },
	{ 110.1959f, 48, 190 },
	{ 220.1959f, 48, 125 },
	{ 110.1959f, 48, 125 },
	{ 220.1959f, 48, 302 },
	{ 110.1959f, 48, 302 },
	{ 235.1959f, 35, 190 },
	{ 95.19592f, 35, 190 },
	{ 235.1959f, 35, 110 },
	{ 95.19592f, 35, 110 },
	{ 235.1959f, 35, 302 },
	{ 95.19592f, 35, 302 },
	{ 95.19592f, 5, 412 },
	{ 95.19592f, 10, 412 },
	{ 220.1959f, 48, 412 },
	{ 110.1959f, 48, 412 },
	{ 235.1959f, 35, 412 },
	{ 95.19592f, 35, 412 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00025574[] = {
	{ -1, 0, 0 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -1, 0, 0 },
	{ 0, 0, -1 },
	{ -0.447214f, 0, -0.8944269f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 0.349507f, 0.936934f, 0 },
	{ -0.349507f, 0.936934f, 0 },
	{ 0.272309f, 0.922874f, -0.272309f },
	{ -0.272309f, 0.922874f, -0.272309f },
	{ 0.349507f, 0.936934f, 0 },
	{ -0.349507f, 0.936934f, 0 },
	{ 0.6549309f, 0.755689f, 0 },
	{ -0.909651f, 0.415373f, 0 },
	{ 0.227855f, 0.5258189f, -0.81951f },
	{ -0.643932f, 0.413163f, -0.643932f },
	{ 0.6549309f, 0.755689f, 0 },
	{ -0.909651f, 0.415373f, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 0.349507f, 0.936934f, 0 },
	{ -0.349507f, 0.936934f, 0 },
	{ 0.6549309f, 0.755689f, 0 },
	{ -0.909651f, 0.415373f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_000256AC = { vertexSTG12_0002543C, normalSTG12_00025574, LengthOfArray(vertexSTG12_0002543C), meshlistSTG12_000253DC, matlistSTG12_0002522C, LengthOfArray(meshlistSTG12_000253DC), LengthOfArray(matlistSTG12_0002522C),{ 165.1959f, 26.5f, 261 }, 166.4362f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_000256D4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_000256AC, -175.1959f, 75, -500, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00025708[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 63, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002576C[] = {
	0x8000u | 22, 65, 54, 55, 44, 56, 45, 57, 46, 58, 47, 59, 48, 60, 49, 61, 50, 62, 51, 63, 52, 64, 53
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002579A[] = {
	4, 75, 86, 31, 42,
	0x8000u | 22, 31, 75, 30, 74, 29, 73, 28, 72, 27, 71, 26, 70, 25, 69, 24, 68, 23, 67, 22, 66, 32, 76,
	0x8000u | 22, 43, 87, 33, 77, 34, 78, 35, 79, 36, 80, 37, 81, 38, 82, 39, 83, 40, 84, 41, 85, 42, 86,
	4, 87, 76, 43, 32
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002580A[] = {
	46, 52, 73, 51, 72, 50, 71, 49, 70, 48, 69, 47, 68, 46, 67, 45, 66, 44, 76, 54, 87, 65, 77, 55, 78, 56, 79, 57, 80, 58, 81, 59, 82, 60, 83, 61, 84, 62, 85, 63, 86, 64, 75, 53, 74, 52, 73
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00025868[] = {
	0x8000u | 22, 21, 43, 11, 33, 12, 34, 13, 35, 14, 36, 15, 37, 16, 38, 17, 39, 18, 40, 19, 41, 20, 42,
	0x8000u | 22, 32, 10, 22, 0, 23, 1, 24, 2, 25, 3, 26, 4, 27, 5, 28, 6, 29, 7, 30, 8, 31, 9
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000258C4[] = {
	{ 4898, -3950 },
	{ 4898, -4638 },
	{ 3915, -3950 },
	{ 3978, -4638 },
	{ 2927, -3837 },
	{ 2489, -4432 },
	{ 2055, -3439 },
	{ 1282, -3936 },
	{ 1435, -2879 },
	{ 508, -3157 },
	{ 1258, -2229 },
	{ 201, -2229 },
	{ 1435, -1578 },
	{ 508, -1298 },
	{ 2055, -1019 },
	{ 1282, -521 },
	{ 2927, -621 },
	{ 2489, -25 },
	{ 3915, -508 },
	{ 3978, 178 },
	{ 4898, -508 },
	{ 4898, 178 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002591C[] = {
	{ 1020, 255 },
	{ 0, 255 },
	{ 1020, 0 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 665, 255 },
	{ 665, 0 },
	{ 1536, 255 },
	{ 1536, 0 },
	{ 2384, 255 },
	{ 2384, 0 },
	{ 3232, 255 },
	{ 3232, 0 },
	{ 4080, 255 },
	{ 4080, 0 },
	{ 4927, 255 },
	{ 4927, 0 },
	{ 5773, 255 },
	{ 5773, 0 },
	{ 6623, 255 },
	{ 6623, 0 },
	{ 7492, 255 },
	{ 7492, 0 },
	{ 8160, 255 },
	{ 8160, 0 },
	{ 0 },
	{ 0, 255 },
	{ 468, 0 },
	{ 468, 255 },
	{ 792, 0 },
	{ 792, 255 },
	{ 1123, 0 },
	{ 1123, 255 },
	{ 1452, 0 },
	{ 1452, 255 },
	{ 1785, 0 },
	{ 1785, 255 },
	{ 2115, 0 },
	{ 2115, 255 },
	{ 2444, 0 },
	{ 2444, 255 },
	{ 2775, 0 },
	{ 2775, 255 },
	{ 3100, 0 },
	{ 3100, 255 },
	{ 3570, 0 },
	{ 3570, 255 },
	{ 1020, 255 },
	{ 0, 255 },
	{ 1020, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000259EC[] = {
	{ 12636, 0 },
	{ 13606, 255 },
	{ 13590, 0 },
	{ 14512, 255 },
	{ 14490, 0 },
	{ 15416, 255 },
	{ 15390, 0 },
	{ 0, 255 },
	{ 0 },
	{ 903, 255 },
	{ 927, 0 },
	{ 1807, 255 },
	{ 1825, 0 },
	{ 2709, 255 },
	{ 2725, 0 },
	{ 3637, 255 },
	{ 3681, 0 },
	{ 4346, 255 },
	{ 4258, 0 },
	{ 5324, 255 },
	{ 4929, 0 },
	{ 6069, 255 },
	{ 5546, 0 },
	{ 6584, 255 },
	{ 6176, 0 },
	{ 7108, 255 },
	{ 6846, 0 },
	{ 7632, 255 },
	{ 7517, 0 },
	{ 8160, 255 },
	{ 8160, 0 },
	{ 8683, 255 },
	{ 8800, 0 },
	{ 9208, 255 },
	{ 9473, 0 },
	{ 9735, 255 },
	{ 10141, 0 },
	{ 10248, 255 },
	{ 10773, 0 },
	{ 10991, 255 },
	{ 11390, 0 },
	{ 11971, 255 },
	{ 12059, 0 },
	{ 12680, 255 },
	{ 12636, 0 },
	{ 13606, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00025AA4[] = {
	{ 0 },
	{ 0, 255 },
	{ 1338, 0 },
	{ 1338, 255 },
	{ 2263, 0 },
	{ 2263, 255 },
	{ 3207, 0 },
	{ 3207, 255 },
	{ 4152, 0 },
	{ 4152, 255 },
	{ 5100, 0 },
	{ 5100, 255 },
	{ 6045, 0 },
	{ 6045, 255 },
	{ 6988, 0 },
	{ 6988, 255 },
	{ 7935, 0 },
	{ 7935, 255 },
	{ 8859, 0 },
	{ 8859, 255 },
	{ 10200, 0 },
	{ 10200, 255 },
	{ 18360, 0 },
	{ 18360, 255 },
	{ 16861, 0 },
	{ 16861, 255 },
	{ 14903, 0 },
	{ 14903, 255 },
	{ 12995, 0 },
	{ 12995, 255 },
	{ 11087, 0 },
	{ 11087, 255 },
	{ 9180, 0 },
	{ 9180, 255 },
	{ 7270, 0 },
	{ 7270, 255 },
	{ 5362, 0 },
	{ 5362, 255 },
	{ 3456, 0 },
	{ 3456, 255 },
	{ 1496, 0 },
	{ 1496, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00025B54[] = {
	{ NJD_MESHSET_TRIMESH | 1, 1, polySTG12_0002576C, NULL, NULL, NULL, uvSTG12_000258C4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, polySTG12_0002579A, NULL, NULL, NULL, uvSTG12_0002591C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, polySTG12_0002580A, NULL, NULL, NULL, uvSTG12_000259EC, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, polySTG12_00025868, NULL, NULL, NULL, uvSTG12_00025AA4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00025BB4[] = {
	{ -2.834274f, 4.999992f, 190 },
	{ -77.36399f, 5, 175.1751f },
	{ -138.8773f, 5, 134.0732f },
	{ -179.9792f, 5, 72.5599f },
	{ -194.4123f, 5, 0.000031f },
	{ -179.9792f, 5.000008f, -72.55987f },
	{ -138.8773f, 5.000008f, -134.0732f },
	{ -77.36404f, 5.000015f, -175.1751f },
	{ -2.834274f, 5.000015f, -190 },
	{ 55.19589f, 5, -190 },
	{ 55.19591f, 5.000004f, 190 },
	{ -5.789001f, 4.999992f, 110 },
	{ -46.97425f, 4.999992f, 101.8077f },
	{ -82.72437f, 5, 77.92028f },
	{ -106.6118f, 5, 42.17013f },
	{ -115, 5, 0 },
	{ -106.6119f, 5, -42.1701f },
	{ -82.72437f, 5, -77.92022f },
	{ -46.97425f, 5.000008f, -101.8077f },
	{ -5.789017f, 5.000008f, -110 },
	{ 55.19589f, 5, -110 },
	{ 55.19592f, 5.000004f, 110 },
	{ -2.834274f, 9.999991f, 190 },
	{ -77.36399f, 10, 175.1751f },
	{ -138.8773f, 10, 134.0732f },
	{ -179.9792f, 10, 72.5599f },
	{ -194.4123f, 10, 0.000031f },
	{ -179.9792f, 10.00001f, -72.55987f },
	{ -138.8773f, 10.00001f, -134.0732f },
	{ -77.36404f, 10.00001f, -175.1751f },
	{ -2.834274f, 10.00001f, -190 },
	{ 55.19589f, 10, -190 },
	{ 55.19591f, 10, 190 },
	{ -5.789001f, 9.999991f, 110 },
	{ -46.97425f, 9.999991f, 101.8077f },
	{ -82.72437f, 10, 77.92028f },
	{ -106.6118f, 10, 42.17013f },
	{ -115, 10, 0 },
	{ -106.6119f, 10, -42.1701f },
	{ -82.72437f, 10, -77.92022f },
	{ -46.97425f, 10.00001f, -101.8077f },
	{ -5.789017f, 10.00001f, -110 },
	{ 55.19589f, 10, -110 },
	{ 55.19592f, 10, 110 },
	{ -2.834274f, 47.99999f, 175 },
	{ -72.36399f, 48, 160.1751f },
	{ -128.8773f, 48, 124.0732f },
	{ -164.9792f, 48, 67.5599f },
	{ -179.4123f, 48, 0.000031f },
	{ -164.9792f, 48.00001f, -67.55987f },
	{ -128.8773f, 48.00001f, -124.0732f },
	{ -72.36404f, 48.00001f, -160.1751f },
	{ -2.834274f, 48.00001f, -175 },
	{ 40.19589f, 48, -175 },
	{ 40.19591f, 48, 175 },
	{ -5.789001f, 47.99999f, 125 },
	{ -51.97425f, 47.99999f, 116.8077f },
	{ -92.72437f, 48, 87.92028f },
	{ -121.6118f, 48, 47.17013f },
	{ -130, 48, 0 },
	{ -121.6119f, 48, -47.1701f },
	{ -92.72437f, 48, -87.92022f },
	{ -51.97425f, 48.00001f, -116.8077f },
	{ -5.789017f, 48.00001f, -125 },
	{ 40.19589f, 48, -125 },
	{ 40.19592f, 48, 125 },
	{ -2.834274f, 34.99999f, 190 },
	{ -77.36399f, 35, 175.1751f },
	{ -138.8773f, 35, 134.0732f },
	{ -179.9792f, 35, 72.5599f },
	{ -194.4123f, 35, 0.000031f },
	{ -179.9792f, 35.00001f, -72.55987f },
	{ -138.8773f, 35.00001f, -134.0732f },
	{ -77.36404f, 35.00001f, -175.1751f },
	{ -2.834274f, 35.00001f, -190 },
	{ 55.19589f, 35, -190 },
	{ 55.19591f, 35, 190 },
	{ -5.789001f, 34.99999f, 110 },
	{ -46.97425f, 34.99999f, 101.8077f },
	{ -82.72437f, 35, 77.92028f },
	{ -106.6118f, 35, 42.17013f },
	{ -115, 35, 0 },
	{ -106.6119f, 35, -42.1701f },
	{ -82.72437f, 35, -77.92022f },
	{ -46.97425f, 35.00001f, -101.8077f },
	{ -5.789017f, 35.00001f, -110 },
	{ 55.19589f, 35, -110 },
	{ 55.19592f, 35, 110 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00025FD4[] = {
	{ -0.098017f, 0, 0.995185f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.92388f, 0, 0.382683f },
	{ -1, 0, 0 },
	{ -0.92388f, 0, -0.382683f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.382684f, 0, -0.923879f },
	{ -0.098017f, 0, -0.995185f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0.098017f, 0, -0.995185f },
	{ 0.382683f, 0, -0.92388f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.92388f, 0, -0.382683f },
	{ 1, 0, 0 },
	{ 0.92388f, 0, 0.382684f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.382684f, 0, 0.923879f },
	{ 0.098017f, 0, 0.995185f },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ -0.098017f, 0, 0.995185f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.92388f, 0, 0.382683f },
	{ -1, 0, 0 },
	{ -0.92388f, 0, -0.382683f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.382684f, 0, -0.923879f },
	{ -0.098017f, 0, -0.995185f },
	{ 0.447214f, 0, -0.8944269f },
	{ 0.447214f, 0, 0.8944269f },
	{ 0.098017f, 0, -0.995185f },
	{ 0.382683f, 0, -0.92388f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.92388f, 0, -0.382683f },
	{ 1, 0, 0 },
	{ 0.92388f, 0, 0.382684f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.382684f, 0, 0.923879f },
	{ 0.098017f, 0, 0.995185f },
	{ 0.447214f, 0, 0.8944269f },
	{ 0.447214f, 0, -0.8944269f },
	{ -0.039621f, 0.9285949f, 0.368973f },
	{ -0.145834f, 0.9253049f, 0.350062f },
	{ -0.279135f, 0.919754f, 0.275927f },
	{ -0.353133f, 0.923331f, 0.150856f },
	{ -0.380842f, 0.924639f, -0.001503f },
	{ -0.35002f, 0.925317f, -0.14586f },
	{ -0.275928f, 0.919754f, -0.279135f },
	{ -0.150832f, 0.9233159f, -0.353181f },
	{ -0.038011f, 0.931949f, -0.360592f },
	{ 0.272309f, 0.922874f, -0.272309f },
	{ 0.272309f, 0.922874f, 0.272309f },
	{ 0.02852f, 0.945155f, -0.325374f },
	{ 0.116106f, 0.952961f, -0.279973f },
	{ 0.2246f, 0.947734f, -0.226618f },
	{ 0.279115f, 0.953599f, -0.112886f },
	{ 0.307842f, 0.951437f, -0.001013f },
	{ 0.280002f, 0.952947f, 0.116151f },
	{ 0.226619f, 0.947734f, 0.2246f },
	{ 0.112838f, 0.953616f, 0.279077f },
	{ 0.029615f, 0.942931f, 0.331669f },
	{ 0.272309f, 0.922874f, 0.272309f },
	{ 0.272309f, 0.922874f, -0.272309f },
	{ -0.089233f, 0.404832f, 0.910027f },
	{ -0.347219f, 0.400219f, 0.848094f },
	{ -0.650917f, 0.395328f, 0.648091f },
	{ -0.848144f, 0.397191f, 0.350558f },
	{ -0.914738f, 0.404045f, -0.001337f },
	{ -0.848085f, 0.400212f, -0.34725f },
	{ -0.648091f, 0.395328f, -0.650917f },
	{ -0.350528f, 0.39719f, -0.848157f },
	{ -0.088263f, 0.411745f, -0.907015f },
	{ 0.643932f, 0.413163f, -0.643932f },
	{ 0.643932f, 0.413163f, 0.643932f },
	{ 0.08751599f, 0.431704f, -0.89776f },
	{ 0.349649f, 0.437193f, -0.828618f },
	{ 0.636392f, 0.432367f, -0.638799f },
	{ 0.828138f, 0.441107f, -0.34585f },
	{ 0.896243f, 0.443562f, -0.001228f },
	{ 0.8286009f, 0.437193f, 0.349689f },
	{ 0.638799f, 0.432367f, 0.636392f },
	{ 0.345809f, 0.441116f, 0.828151f },
	{ 0.088438f, 0.424424f, 0.901134f },
	{ 0.643932f, 0.413163f, 0.643932f },
	{ 0.643932f, 0.413163f, -0.643932f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_000263F4 = { vertexSTG12_00025BB4, normalSTG12_00025FD4, LengthOfArray(vertexSTG12_00025BB4), meshlistSTG12_00025B54, matlistSTG12_00025708, LengthOfArray(meshlistSTG12_00025B54), LengthOfArray(matlistSTG12_00025708),{ -69.60817f, 26.5f, 0 }, 227.3237f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0002641C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_000263F4, -175.1959f, 75, -500, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00026450[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 63, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000264B4[] = {
	4, 25, 26, 9, 10
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000264BE[] = {
	3, 12, 14, 13,
	7, 18, 17, 16, 15, 13, 11, 12
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000264D6[] = {
	4, 22, 20, 4, 3,
	0x8000u | 8, 9, 25, 6, 23, 2, 19, 3, 20
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000264F2[] = {
	18, 23, 17, 25, 18, 26, 16, 24, 13, 21, 14, 22, 12, 20, 11, 19, 15, 23, 17
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00026518[] = {
	7, 9, 7, 6, 5, 2, 0, 1,
	3, 1, 3, 2,
	4, 9, 10, 7, 8
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002653C[] = {
	{ 0, 255 },
	{ 510, 255 },
	{ 0 },
	{ 510, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002654C[] = {
	{ 91, 42 },
	{ 91, -772 },
	{ 1847, -772 },
	{ 5006, -772 },
	{ 5006, 42 },
	{ 3533, -772 },
	{ 3533, 42 },
	{ 1847, -772 },
	{ 1847, 42 },
	{ 91, 42 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00026574[] = {
	{ 1020, 255 },
	{ 0, 255 },
	{ 1020, 0 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ 1288, 0 },
	{ 1288, 255 },
	{ 2576, 0 },
	{ 2576, 255 },
	{ 4080, 0 },
	{ 4080, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000265A4[] = {
	{ 3547, 0 },
	{ 1020, 255 },
	{ 1418, 0 },
	{ 0, 255 },
	{ 0 },
	{ 14175, 255 },
	{ 14191, 0 },
	{ 11730, 255 },
	{ 12060, 0 },
	{ 9180, 255 },
	{ 9577, 0 },
	{ 8160, 255 },
	{ 8160, 0 },
	{ 5610, 255 },
	{ 5674, 0 },
	{ 3159, 255 },
	{ 3547, 0 },
	{ 1020, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000265EC[] = {
	{ 11730, 255 },
	{ 11730, 0 },
	{ 8025, 255 },
	{ 8025, 0 },
	{ 4321, 255 },
	{ 4321, 0 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ 4321, 255 },
	{ 2550, 255 },
	{ 0, 255 },
	{ 2550, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00026624[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_000264B4, NULL, NULL, NULL, uvSTG12_0002653C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, polySTG12_000264BE, NULL, NULL, NULL, uvSTG12_0002654C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, polySTG12_000264D6, NULL, NULL, NULL, uvSTG12_00026574, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, polySTG12_000264F2, NULL, NULL, NULL, uvSTG12_000265A4, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 3, polySTG12_00026518, NULL, NULL, NULL, uvSTG12_000265EC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0002669C[] = {
	{ 235.1959f, 5, -190 },
	{ 95.19588f, 5, -190 },
	{ 235.1959f, 10, -190 },
	{ 95.19588f, 10, -190 },
	{ 95.19588f, 10, -110 },
	{ 355.1959f, 5, -190 },
	{ 355.1959f, 10, -190 },
	{ 475.1959f, 5, -190 },
	{ 475.1959f, 5, -110 },
	{ 475.1959f, 10, -190 },
	{ 475.1959f, 10, -110 },
	{ 235.1959f, 48, -175 },
	{ 110.1959f, 48, -175 },
	{ 235.1959f, 48, -125 },
	{ 110.1959f, 48, -125 },
	{ 355.1959f, 48, -175 },
	{ 355.1959f, 48, -125 },
	{ 460.1959f, 48, -175 },
	{ 460.1959f, 48, -125 },
	{ 235.1959f, 35, -190 },
	{ 95.19588f, 35, -190 },
	{ 235.1959f, 35, -110 },
	{ 95.19588f, 35, -110 },
	{ 355.1959f, 35, -190 },
	{ 355.1959f, 35, -110 },
	{ 475.1959f, 35, -190 },
	{ 475.1959f, 35, -110 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_000267E0[] = {
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.447214f, 0, -0.8944269f },
	{ -1, 0, 0 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 1, 0, 0 },
	{ 0, 0.936934f, -0.349507f },
	{ -0.272309f, 0.922874f, -0.272309f },
	{ 0, 0.936934f, 0.349507f },
	{ -0.272309f, 0.922874f, 0.272309f },
	{ 0, 0.936934f, -0.349507f },
	{ 0, 0.936934f, 0.349507f },
	{ 0.272309f, 0.922874f, -0.272309f },
	{ 0.272309f, 0.922874f, 0.272309f },
	{ 0, 0.415373f, -0.909651f },
	{ -0.643932f, 0.413163f, -0.643932f },
	{ 0, 0.755689f, 0.6549309f },
	{ -0.81951f, 0.5258189f, 0.227855f },
	{ 0, 0.415373f, -0.909651f },
	{ 0, 0.755689f, 0.6549309f },
	{ 0.643932f, 0.413163f, -0.643932f },
	{ 0.81951f, 0.5258189f, 0.227855f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00026924 = { vertexSTG12_0002669C, normalSTG12_000267E0, LengthOfArray(vertexSTG12_0002669C), meshlistSTG12_00026624, matlistSTG12_00026450, LengthOfArray(meshlistSTG12_00026624), LengthOfArray(matlistSTG12_00026450),{ 285.1959f, 26.5f, -150 }, 194.1649f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0002694C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00026924, -175.1959f, 75, -500, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00026980[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00026994[] = {
	0x8000u | 8, 1, 3, 12, 13, 10, 11, 0, 2,
	0x8000u | 8, 5, 1, 9, 12, 8, 10, 4, 0,
	0x8000u | 8, 3, 7, 13, 15, 11, 14, 2, 6,
	0x8000u | 8, 7, 5, 15, 9, 14, 8, 6, 4
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000269DC[] = {
	{ 2040, 255 },
	{ 1027, 255 },
	{ 2040, 188 },
	{ 1020, 186 },
	{ 2040, 66 },
	{ 1020, 68 },
	{ 2040, 0 },
	{ 1027, 0 },
	{ 3068, 255 },
	{ 2040, 255 },
	{ 3060, 188 },
	{ 2040, 188 },
	{ 3060, 66 },
	{ 2040, 66 },
	{ 3068, 0 },
	{ 2040, 0 },
	{ 1027, 255 },
	{ 0, 255 },
	{ 1020, 186 },
	{ 0, 186 },
	{ 1020, 68 },
	{ 0, 68 },
	{ 1027, 0 },
	{ 0 },
	{ 4066, 253 },
	{ 3068, 255 },
	{ 4069, 188 },
	{ 3060, 188 },
	{ 4068, 67 },
	{ 3060, 66 },
	{ 4068, 1 },
	{ 3068, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00026A5C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, polySTG12_00026994, NULL, NULL, NULL, uvSTG12_000269DC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00026A74[] = {
	{ -25.58826f, -20, -9.704894f },
	{ -25.58826f, -20, 0.295105f },
	{ -25.58826f, 20.5f, -9.704894f },
	{ -25.58826f, 20.5f, 0.295105f },
	{ 15.58844f, -20, -9.704865f },
	{ 15.58844f, -20, 0.295135f },
	{ 15.58844f, 20.5f, -9.704865f },
	{ 15.58844f, 20.5f, 0.295135f },
	{ 14.58826f, -19.5f, -7.295166f },
	{ 14.58826f, -19.5f, -2.295166f },
	{ -24.58844f, -19.5f, -7.295227f },
	{ -24.58844f, 19.5f, -7.295227f },
	{ -24.58844f, -19.5f, -2.295227f },
	{ -24.58844f, 19.5f, -2.295227f },
	{ 14.58826f, 19.5f, -7.295166f },
	{ 14.58826f, 19.5f, -2.295166f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00026B34[] = {
	{ 0.675571f, 0.614272f, -0.407766f },
	{ 0.681936f, 0.6228459f, 0.38344f },
	{ 0.609843f, -0.609862f, -0.5061229f },
	{ 0.620638f, -0.620656f, 0.47916f },
	{ -0.675561f, 0.614227f, -0.407852f },
	{ -0.681928f, 0.6228009f, 0.383527f },
	{ -0.609834f, -0.6098149f, -0.5061899f },
	{ -0.620629f, -0.620611f, 0.47923f },
	{ -0.6590289f, 0.718889f, -0.221086f },
	{ -0.663689f, 0.71894f, 0.2065f },
	{ 0.659059f, 0.718875f, -0.221043f },
	{ 0.674937f, -0.674915f, -0.298245f },
	{ 0.663718f, 0.718926f, 0.206456f },
	{ 0.679028f, -0.679007f, 0.279053f },
	{ -0.674904f, -0.674927f, -0.298293f },
	{ -0.678997f, -0.679018f, 0.279102f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00026BF4 = { vertexSTG12_00026A74, normalSTG12_00026B34, LengthOfArray(vertexSTG12_00026A74), meshlistSTG12_00026A5C, matlistSTG12_00026980, LengthOfArray(meshlistSTG12_00026A5C), LengthOfArray(matlistSTG12_00026980),{ -4.999908f, 0.25f, -4.70488f }, 21.18679f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00026C1C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00026BF4, 755, 30, -319.9999f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00026C50[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00026C64[] = {
	0x8000u | 8, 1, 3, 12, 13, 10, 11, 0, 2,
	0x8000u | 8, 5, 1, 9, 12, 8, 10, 4, 0,
	0x8000u | 8, 3, 7, 13, 15, 11, 14, 2, 6,
	0x8000u | 8, 7, 5, 15, 9, 14, 8, 6, 4
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00026CAC[] = {
	{ 2040, 255 },
	{ 1027, 255 },
	{ 2040, 186 },
	{ 1020, 184 },
	{ 2040, 64 },
	{ 1020, 66 },
	{ 2040, 0 },
	{ 1027, 0 },
	{ 3068, 255 },
	{ 2040, 255 },
	{ 3060, 186 },
	{ 2040, 186 },
	{ 3060, 64 },
	{ 2040, 64 },
	{ 3068, 0 },
	{ 2040, 0 },
	{ 1027, 255 },
	{ 0, 255 },
	{ 1020, 184 },
	{ 0, 184 },
	{ 1020, 66 },
	{ 0, 66 },
	{ 1027, 0 },
	{ 0 },
	{ 4067, 254 },
	{ 3068, 255 },
	{ 4074, 186 },
	{ 3060, 186 },
	{ 4073, 64 },
	{ 3060, 64 },
	{ 4067, 0 },
	{ 3068, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00026D2C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, polySTG12_00026C64, NULL, NULL, NULL, uvSTG12_00026CAC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00026D44[] = {
	{ -20.58826f, -21, -9.204894f },
	{ -20.58826f, -21, 0.795105f },
	{ -20.58826f, 19.5f, -9.204894f },
	{ -20.58826f, 19.5f, 0.795105f },
	{ 20.58844f, -21, -9.204865f },
	{ 20.58844f, -21, 0.795135f },
	{ 20.58844f, 19.5f, -9.204865f },
	{ 20.58844f, 19.5f, 0.795135f },
	{ 19.58826f, -20.5f, -6.795166f },
	{ 19.58826f, -20.5f, -1.795166f },
	{ -19.58844f, -20.5f, -6.795227f },
	{ -19.58844f, 18.5f, -6.795227f },
	{ -19.58844f, -20.5f, -1.795227f },
	{ -19.58844f, 18.5f, -1.795227f },
	{ 19.58826f, 18.5f, -6.795166f },
	{ 19.58826f, 18.5f, -1.795166f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00026E04[] = {
	{ 0.675571f, 0.614272f, -0.407766f },
	{ 0.681936f, 0.6228459f, 0.38344f },
	{ 0.609843f, -0.609862f, -0.5061229f },
	{ 0.620638f, -0.620656f, 0.47916f },
	{ -0.675561f, 0.614227f, -0.407852f },
	{ -0.681928f, 0.6228009f, 0.383527f },
	{ -0.609834f, -0.6098149f, -0.5061899f },
	{ -0.620629f, -0.620611f, 0.47923f },
	{ -0.6590289f, 0.718889f, -0.221086f },
	{ -0.663689f, 0.71894f, 0.2065f },
	{ 0.659059f, 0.718875f, -0.221043f },
	{ 0.674937f, -0.674915f, -0.298245f },
	{ 0.663718f, 0.718926f, 0.206456f },
	{ 0.679028f, -0.679007f, 0.279053f },
	{ -0.674904f, -0.674927f, -0.298293f },
	{ -0.678997f, -0.679018f, 0.279102f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00026EC4 = { vertexSTG12_00026D44, normalSTG12_00026E04, LengthOfArray(vertexSTG12_00026D44), meshlistSTG12_00026D2C, matlistSTG12_00026C50, LengthOfArray(meshlistSTG12_00026D2C), LengthOfArray(matlistSTG12_00026C50),{ 0.00009199999f, -0.75f, -4.20488f }, 21.18679f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00026EEC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00026EC4, 750, 110, -320.4999f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00026F20[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 56, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 57, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 41, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00026FAC[] = {
	0x8000u | 5, 22, 23, 3, 15, 17,
	3, 22, 2, 3,
	4, 21, 23, 14, 15,
	3, 20, 21, 6,
	0x8000u | 5, 6, 7, 21, 19, 14
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00026FDE[] = {
	4, 54, 57, 18, 49,
	0x8000u | 8, 13, 6, 8, 20, 9, 22, 11, 2,
	4, 56, 52, 48, 16,
	4, 44, 47, 4, 12,
	4, 46, 42, 10, 0,
	0x8000u | 8, 19, 55, 14, 50, 15, 51, 17, 53
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002702A[] = {
	0x8000u | 8, 29, 13, 24, 8, 25, 9, 27, 11
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002703C[] = {
	0x8000u | 8, 41, 35, 36, 30, 37, 31, 39, 33
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002704E[] = {
	0x8000u | 8, 35, 29, 30, 24, 31, 25, 33, 27
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00027060[] = {
	0x8000u | 6, 16, 48, 1, 43, 0, 42,
	0x8000u | 6, 49, 18, 45, 5, 44, 4
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002707C[] = {
	0x8000u | 7, 4, 5, 7, 18, 19, 54, 55,
	0x8000u | 11, 7, 6, 4, 13, 12, 29, 28, 35, 34, 41, 40,
	7, 52, 53, 16, 17, 1, 3, 2,
	11, 39, 38, 33, 32, 27, 26, 11, 10, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000270CC[] = {
	{ 87, 255 },
	{ 87, -89 },
	{ 0, -89 },
	{ 87, -255 },
	{ 0, -255 },
	{ 87, 255 },
	{ 0, 255 },
	{ 0, -89 },
	{ 414, -89 },
	{ 87, -89 },
	{ 414, -255 },
	{ 87, -255 },
	{ 414, 255 },
	{ 414, -89 },
	{ 510, 255 },
	{ 510, 255 },
	{ 510, -89 },
	{ 414, -89 },
	{ 510, -255 },
	{ 414, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002711C[] = {
	{ 1702, 255 },
	{ 2040, 255 },
	{ 1702, 0 },
	{ 2040, 0 },
	{ 478, 255 },
	{ 478, 0 },
	{ 680, 255 },
	{ 680, 0 },
	{ 1361, 255 },
	{ 1361, 0 },
	{ 1545, 255 },
	{ 1545, 0 },
	{ 0, 255 },
	{ 336, 255 },
	{ 0 },
	{ 336, 0 },
	{ 0 },
	{ 0, 255 },
	{ 336, 0 },
	{ 336, 255 },
	{ 2040, 255 },
	{ 2040, 0 },
	{ 1702, 255 },
	{ 1702, 0 },
	{ 1560, 0 },
	{ 1560, 255 },
	{ 1359, 0 },
	{ 1359, 255 },
	{ 677, 0 },
	{ 677, 255 },
	{ 492, 0 },
	{ 492, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002719C[] = {
	{ 212, 255 },
	{ 212, 0 },
	{ 513, 255 },
	{ 513, 0 },
	{ 1530, 255 },
	{ 1530, 0 },
	{ 1806, 255 },
	{ 1806, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000271BC[] = {
	{ 107, 254 },
	{ 107, 162 },
	{ 251, 254 },
	{ 251, 162 },
	{ 768, 254 },
	{ 768, 162 },
	{ 904, 254 },
	{ 904, 162 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000271DC[] = {
	{ 53, -255 },
	{ 53, 255 },
	{ 128, -255 },
	{ 128, 255 },
	{ 382, -255 },
	{ 382, 255 },
	{ 450, -255 },
	{ 450, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000271FC[] = {
	{ 0 },
	{ 0, 255 },
	{ 330, 0 },
	{ 330, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 688, 255 },
	{ 688, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002722C[] = {
	{ 510, -3207 },
	{ 510, -4768 },
	{ 0, -4768 },
	{ 510, -5516 },
	{ 0, -5516 },
	{ 510, -5865 },
	{ 0, -5865 },
	{ 0, -4768 },
	{ 0, -3207 },
	{ 510, -3207 },
	{ 0, -2822 },
	{ 510, -2822 },
	{ 0, -2438 },
	{ 510, -2438 },
	{ 0, -129 },
	{ 510, -129 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, -5865 },
	{ 510, -5865 },
	{ 0, -5516 },
	{ 510, -5516 },
	{ 0, -4768 },
	{ 510, -4768 },
	{ 510, -3207 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -129 },
	{ 0, -129 },
	{ 510, -2438 },
	{ 0, -2438 },
	{ 510, -2822 },
	{ 0, -2822 },
	{ 510, -3207 },
	{ 0, -3207 },
	{ 0, -4768 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_000272BC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, polySTG12_00026FAC, NULL, NULL, NULL, uvSTG12_000270CC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, polySTG12_00026FDE, NULL, NULL, NULL, uvSTG12_0002711C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, polySTG12_0002702A, NULL, NULL, NULL, uvSTG12_0002719C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, polySTG12_0002703C, NULL, NULL, NULL, uvSTG12_000271BC, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, polySTG12_0002704E, NULL, NULL, NULL, uvSTG12_000271DC, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, polySTG12_00027060, NULL, NULL, NULL, uvSTG12_000271FC, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 4, polySTG12_0002707C, NULL, NULL, NULL, uvSTG12_0002722C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00027364[] = {
	{ -39.58838f, -75, -173.2047f },
	{ -39.58838f, -34.5f, -173.2047f },
	{ -31.58838f, -75, -178.2047f },
	{ -31.58838f, -34.5f, -178.2047f },
	{ 39.58832f, -75, -173.2045f },
	{ 39.58832f, -34.5f, -173.2045f },
	{ 32.58832f, -75, -178.2045f },
	{ 32.58832f, -34.5f, -178.2045f },
	{ 20.58832f, -85, -180.2046f },
	{ -20.58838f, -85, -180.2046f },
	{ -39.58838f, -85, -173.2047f },
	{ -31.58838f, -85, -178.2047f },
	{ 39.58832f, -85, -173.2045f },
	{ 32.58832f, -85, -178.2045f },
	{ 20.58832f, -15, -180.2046f },
	{ -20.58838f, -15, -180.2046f },
	{ -39.58838f, -15, -173.2047f },
	{ -31.58838f, -15, -178.2047f },
	{ 39.58832f, -15, -173.2045f },
	{ 32.58832f, -15, -178.2045f },
	{ 20.58832f, -75, -180.2046f },
	{ 20.58832f, -34.5f, -180.2046f },
	{ -20.58838f, -75, -180.2046f },
	{ -20.58838f, -34.5f, -180.2046f },
	{ 20.58832f, -95, -180.2046f },
	{ -20.58838f, -95, -180.2046f },
	{ -39.58838f, -95, -173.2047f },
	{ -31.58838f, -95, -178.2047f },
	{ 39.58832f, -95, -173.2045f },
	{ 32.58832f, -95, -178.2045f },
	{ 20.58832f, -155, -180.2046f },
	{ -20.58838f, -155, -180.2046f },
	{ -39.58838f, -155, -173.2047f },
	{ -31.58838f, -155, -178.2047f },
	{ 39.58832f, -155, -173.2045f },
	{ 32.58832f, -155, -178.2045f },
	{ 20.58832f, -165, -180.2046f },
	{ -20.58838f, -165, -180.2046f },
	{ -39.58838f, -165, -173.2047f },
	{ -31.58838f, -165, -178.2047f },
	{ 39.58832f, -165, -173.2045f },
	{ 32.58832f, -165, -178.2045f },
	{ -43.58838f, -75, -153.2047f },
	{ -43.58838f, -34.5f, -153.2047f },
	{ 43.58832f, -75, -153.2045f },
	{ 43.58832f, -34.5f, -153.2045f },
	{ -43.58838f, -85, -153.2047f },
	{ 43.58832f, -85, -153.2045f },
	{ -43.58838f, -15, -153.2047f },
	{ 43.58832f, -15, -153.2045f },
	{ 20.58832f, -6, -180.2046f },
	{ -20.58838f, -6, -180.2046f },
	{ -39.58838f, -6, -173.2047f },
	{ -31.58838f, -6, -178.2047f },
	{ 39.58832f, -6, -173.2045f },
	{ 32.58832f, -6, -178.2045f },
	{ -43.58838f, -6, -153.2047f },
	{ 43.58832f, -6, -153.2045f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0002761C[] = {
	{ -0.822617f, 0, -0.5685959f },
	{ -0.822617f, 0, -0.5685959f },
	{ -0.360889f, 0, -0.932609f },
	{ -0.360889f, 0, -0.932609f },
	{ 0.8397509f, 0, -0.542971f },
	{ 0.8397509f, 0, -0.542971f },
	{ 0.382685f, 0, -0.923879f },
	{ 0.382685f, 0, -0.923879f },
	{ 0.08248299f, 0, -0.996592f },
	{ -0.089801f, 0.000001f, -0.99596f },
	{ -0.733278f, 0, -0.679929f },
	{ -0.360889f, 0, -0.932609f },
	{ 0.761591f, 0, -0.648058f },
	{ 0.382686f, 0, -0.923879f },
	{ 0.08248299f, 0, -0.996592f },
	{ -0.089801f, 0, -0.99596f },
	{ -0.822617f, 0, -0.5685959f },
	{ -0.360889f, 0, -0.932609f },
	{ 0.8397509f, 0, -0.542971f },
	{ 0.382686f, 0, -0.923879f },
	{ 0.109935f, 0.000001f, -0.993939f },
	{ 0.109935f, -0.00001f, -0.993939f },
	{ -0.119681f, 0.000001f, -0.992812f },
	{ -0.119681f, 0, -0.992812f },
	{ 0.08248299f, 0, -0.996592f },
	{ -0.089802f, 0, -0.99596f },
	{ -0.529997f, 0, -0.848f },
	{ -0.360889f, 0, -0.932609f },
	{ 0.581238f, 0, -0.813733f },
	{ 0.382686f, 0, -0.923879f },
	{ 0.08248299f, 0, -0.996592f },
	{ -0.089802f, 0, -0.99596f },
	{ -0.529997f, 0, -0.848f },
	{ -0.360889f, 0, -0.932609f },
	{ 0.581238f, 0, -0.813733f },
	{ 0.382686f, 0, -0.923879f },
	{ 0.08248299f, 0, -0.996592f },
	{ -0.089802f, 0, -0.99596f },
	{ -0.529997f, 0, -0.848f },
	{ -0.360889f, 0, -0.932609f },
	{ 0.581238f, 0, -0.813733f },
	{ 0.382686f, 0, -0.923879f },
	{ -0.980581f, 0, -0.196116f },
	{ -0.980581f, 0, -0.196116f },
	{ 0.980581f, 0, -0.196116f },
	{ 0.980581f, 0, -0.196116f },
	{ -0.980581f, 0, -0.196116f },
	{ 0.980581f, 0, -0.196116f },
	{ -0.980581f, 0, -0.196116f },
	{ 0.980581f, 0, -0.196116f },
	{ 0.08248299f, 0, -0.996592f },
	{ -0.089802f, 0, -0.99596f },
	{ -0.822617f, 0, -0.5685959f },
	{ -0.360889f, 0, -0.932609f },
	{ 0.8397509f, 0, -0.542971f },
	{ 0.382686f, 0, -0.923879f },
	{ -0.980581f, 0, -0.196116f },
	{ 0.980581f, 0, -0.196116f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_000278D4 = { vertexSTG12_00027364, normalSTG12_0002761C, LengthOfArray(vertexSTG12_00027364), meshlistSTG12_000272BC, matlistSTG12_00026F20, LengthOfArray(meshlistSTG12_000272BC), LengthOfArray(matlistSTG12_00026F20),{ -0.00031f, -85.5f, -166.7046f }, 80.63808f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_000278FC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_000278D4, 750.0001f, 84.99991f, -280.5002f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00027930[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 36, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00027944[] = {
	0x8000u | 8, 1, 3, 12, 13, 10, 11, 0, 2,
	0x8000u | 8, 5, 1, 9, 12, 8, 10, 4, 0,
	0x8000u | 8, 3, 7, 13, 15, 11, 14, 2, 6,
	0x8000u | 8, 7, 5, 15, 9, 14, 8, 6, 4
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002798C[] = {
	{ 502, -1721 },
	{ 502, -701 },
	{ 374, -1721 },
	{ 374, -701 },
	{ 119, -1721 },
	{ 119, -701 },
	{ 7, -1721 },
	{ 7, -701 },
	{ 502, -2741 },
	{ 502, -1721 },
	{ 374, -2741 },
	{ 374, -1721 },
	{ 119, -2741 },
	{ 119, -1721 },
	{ 7, -2741 },
	{ 7, -1721 },
	{ 502, -701 },
	{ 502, 191 },
	{ 374, -701 },
	{ 374, 191 },
	{ 119, -701 },
	{ 119, 191 },
	{ 7, -701 },
	{ 7, 191 },
	{ 502, -3761 },
	{ 502, -2741 },
	{ 374, -3761 },
	{ 374, -2741 },
	{ 119, -3761 },
	{ 119, -2741 },
	{ 7, -3761 },
	{ 7, -2741 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00027A0C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, polySTG12_00027944, NULL, NULL, NULL, uvSTG12_0002798C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00027A24[] = {
	{ -25.58826f, -20, -10.70489f },
	{ -25.58826f, -20, -0.704895f },
	{ -25.58826f, 20.5f, -10.70489f },
	{ -25.58826f, 20.5f, -0.704895f },
	{ 15.58844f, -20, -10.70486f },
	{ 15.58844f, -20, -0.704865f },
	{ 15.58844f, 20.5f, -10.70486f },
	{ 15.58844f, 20.5f, -0.704865f },
	{ 12.58826f, -19.5f, -8.295165f },
	{ 12.58826f, -19.5f, -3.295166f },
	{ -22.58844f, -19.5f, -8.295226f },
	{ -22.58844f, 17.5f, -8.295226f },
	{ -22.58844f, -19.5f, -3.295227f },
	{ -22.58844f, 17.5f, -3.295227f },
	{ 12.58826f, 17.5f, -8.295165f },
	{ 12.58826f, 17.5f, -3.295166f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00027AE4[] = {
	{ 0.533462f, 0.397512f, -0.746594f },
	{ 0.553888f, 0.41531f, 0.7216139f },
	{ 0.349222f, -0.349228f, -0.869531f },
	{ 0.368478f, -0.368483f, 0.85349f },
	{ -0.533435f, 0.397486f, -0.746627f },
	{ -0.553857f, 0.415277f, 0.721657f },
	{ -0.349214f, -0.349207f, -0.8695419f },
	{ -0.368465f, -0.36846f, 0.853505f },
	{ -0.5161729f, 0.778406f, -0.357281f },
	{ -0.5275289f, 0.777167f, 0.34311f },
	{ 0.51619f, 0.778399f, -0.357271f },
	{ 0.544329f, -0.544314f, -0.638301f },
	{ 0.52755f, 0.777159f, 0.343096f },
	{ 0.555895f, -0.55588f, 0.618044f },
	{ -0.544306f, -0.54432f, -0.638316f },
	{ -0.555869f, -0.5558839f, 0.618064f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00027BA4 = { vertexSTG12_00027A24, normalSTG12_00027AE4, LengthOfArray(vertexSTG12_00027A24), meshlistSTG12_00027A0C, matlistSTG12_00027930, LengthOfArray(meshlistSTG12_00027A0C), LengthOfArray(matlistSTG12_00027930),{ -4.999908f, 0.25f, -5.70488f }, 21.18679f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00027BCC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00027BA4, 755, 30, -449.9999f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00027C00[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 75, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00027C50[] = {
	3, 14, 29, 25,
	10, 24, 15, 2, 12, 16, 13, 18, 14, 0, 25,
	3, 2, 20, 24
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00027C76[] = {
	6, 21, 20, 3, 2, 17, 16,
	6, 19, 18, 1, 0, 26, 25
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00027C92[] = {
	6, 21, 3, 11, 17, 6, 19,
	3, 11, 23, 21,
	0x8000u | 9, 1, 19, 7, 6, 4, 11, 10, 23, 22,
	0x8000u | 5, 7, 9, 1, 28, 26,
	7, 28, 27, 9, 8, 7, 5, 4
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00027CD8[] = {
	{ 3508, 255 },
	{ 4080, 255 },
	{ 4080, 0 },
	{ 0, 255 },
	{ 517, 255 },
	{ 517, 0 },
	{ 1244, 255 },
	{ 1244, 0 },
	{ 2721, 255 },
	{ 2721, 0 },
	{ 3508, 255 },
	{ 3508, 0 },
	{ 4080, 0 },
	{ 517, 0 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00027D18[] = {
	{ 1020, -255 },
	{ 1020, 251 },
	{ 888, -247 },
	{ 888, 254 },
	{ 708, -247 },
	{ 708, 254 },
	{ 338, -247 },
	{ 338, 254 },
	{ 142, -247 },
	{ 142, 254 },
	{ 0, -247 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00027D48[] = {
	{ 2024, 1 },
	{ 1769, 1 },
	{ 1769, 253 },
	{ 1418, 1 },
	{ 1418, 253 },
	{ 685, 1 },
	{ 1769, 253 },
	{ 2024, 253 },
	{ 2024, 1 },
	{ 270, 1 },
	{ 685, 1 },
	{ 685, 253 },
	{ 1418, 253 },
	{ 1418, 1 },
	{ 1769, 253 },
	{ 1769, 1 },
	{ 2024, 253 },
	{ 2024, 1 },
	{ 685, 253 },
	{ 270, 253 },
	{ 270, 1 },
	{ 15, 253 },
	{ 15, 1 },
	{ 15, 253 },
	{ 15, 1 },
	{ 270, 253 },
	{ 270, 1 },
	{ 685, 253 },
	{ 685, 1 },
	{ 1418, 1 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00027DC0[] = {
	{ NJD_MESHSET_TRIMESH | 1, 3, polySTG12_00027C50, NULL, NULL, NULL, uvSTG12_00027CD8, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, polySTG12_00027C76, NULL, NULL, NULL, uvSTG12_00027D18, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 5, polySTG12_00027C92, NULL, NULL, NULL, uvSTG12_00027D48, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00027E08[] = {
	{ -44.50462f, 11, -86.35045f },
	{ -44.50462f, 44.5f, -86.35045f },
	{ 40.979f, 11, -86.41886f },
	{ 40.979f, 44.5f, -86.41886f },
	{ 20.58832f, 54.5f, -74.20457f },
	{ -20.58838f, 54.5f, -74.20457f },
	{ 20.19985f, 54.5f, -87.16645f },
	{ -21.9578f, 54.5f, -86.97227f },
	{ -44.31039f, 54.5f, -74.36945f },
	{ -44.50462f, 54.5f, -86.35045f },
	{ 41.17329f, 54.5f, -74.43791f },
	{ 40.979f, 54.5f, -86.41886f },
	{ 20.19985f, 5, -87.16645f },
	{ -21.9578f, 5, -86.97227f },
	{ -44.50462f, 5, -86.35045f },
	{ 40.979f, 5, -86.41886f },
	{ 20.19985f, 11, -87.16661f },
	{ 20.19985f, 44.5f, -87.16661f },
	{ -21.9578f, 11, -86.97243f },
	{ -21.9578f, 44.5f, -86.97242f },
	{ 55.80038f, 11.24999f, -85.48996f },
	{ 55.80038f, 45, -85.48996f },
	{ 55.48937f, 54.5f, -74.21433f },
	{ 55.80038f, 55, -85.48996f },
	{ 55.80032f, 4.999992f, -85.48996f },
	{ -60.7826f, 11, -86.18553f },
	{ -60.7826f, 44.5f, -86.18553f },
	{ -60.58837f, 54.5f, -74.20455f },
	{ -60.7826f, 54.5f, -86.18553f },
	{ -60.7826f, 5, -86.18553f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00027F70[] = {
	{ -0.018853f, -0.00006f, -0.999822f },
	{ -0.018853f, 0, -0.999822f },
	{ 0.04926f, 0, -0.998786f },
	{ 0.04926f, 0.000004f, -0.998786f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.011158f, 0.702575f, -0.711522f },
	{ -0.011419f, 0.704534f, -0.709579f },
	{ 0, 1, 0 },
	{ -0.013293f, 0.709075f, -0.705008f },
	{ -0.00017f, 0.999941f, 0.010871f },
	{ 0.035333f, 0.70391f, -0.70941f },
	{ 0.015679f, -0.00013f, -0.999877f },
	{ -0.01609f, -0.00025f, -0.999871f },
	{ -0.018852f, -0.00013f, -0.999822f },
	{ 0.049259f, 0, -0.998786f },
	{ 0.022442f, -0.00008f, -0.999748f },
	{ 0.022442f, 0.00001f, -0.999748f },
	{ -0.019919f, -0.00017f, -0.999802f },
	{ -0.019919f, 0.000005f, -0.999802f },
	{ 0.06254999f, 0, -0.998042f },
	{ 0.06254999f, 0, -0.998042f },
	{ -0.000336f, 0.999769f, 0.021493f },
	{ 0.043502f, 0.729755f, -0.682324f },
	{ 0.06254999f, -0.00001f, -0.998042f },
	{ -0.01013f, 0, -0.999949f },
	{ -0.01013f, 0, -0.999949f },
	{ 0, 1, 0 },
	{ -0.007177f, 0.705734f, -0.7084399f },
	{ -0.01013f, 0, -0.999949f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_000280D8 = { vertexSTG12_00027E08, normalSTG12_00027F70, LengthOfArray(vertexSTG12_00027E08), meshlistSTG12_00027DC0, matlistSTG12_00027C00, LengthOfArray(meshlistSTG12_00027DC0), LengthOfArray(matlistSTG12_00027C00),{ -2.491116f, 29.99999f, -80.68557f }, 63.32578f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00028100 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_000280D8, 785, 85, -387.5002f, 0, 0x3809, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00028134[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00028148[] = {
	0x8000u | 8, 1, 3, 12, 13, 10, 11, 0, 2,
	0x8000u | 8, 4, 6, 8, 14, 9, 15, 5, 7,
	0x8000u | 8, 6, 2, 14, 11, 15, 13, 7, 3,
	0x8000u | 8, 0, 4, 10, 8, 12, 9, 1, 5
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00028190[] = {
	{ 2040, 255 },
	{ 1027, 255 },
	{ 2040, 186 },
	{ 1020, 184 },
	{ 2040, 64 },
	{ 1020, 66 },
	{ 2040, 0 },
	{ 1027, 0 },
	{ 3068, 0 },
	{ 4067, 0 },
	{ 3060, 64 },
	{ 4073, 64 },
	{ 3060, 186 },
	{ 4074, 186 },
	{ 3068, 255 },
	{ 4067, 254 },
	{ 0 },
	{ 1027, 0 },
	{ 0, 66 },
	{ 1020, 66 },
	{ 0, 184 },
	{ 1020, 184 },
	{ 0, 255 },
	{ 1027, 255 },
	{ 2040, 0 },
	{ 3068, 0 },
	{ 2040, 64 },
	{ 3060, 64 },
	{ 2040, 186 },
	{ 3060, 186 },
	{ 2040, 255 },
	{ 3068, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00028210[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, polySTG12_00028148, NULL, NULL, NULL, uvSTG12_00028190, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00028228[] = {
	{ -14.58104f, -14, 12.64638f },
	{ -2.580917f, -14, 13.64638f },
	{ -14.58098f, 19.5f, 12.64638f },
	{ -2.580856f, 19.5f, 13.64638f },
	{ -6.583054f, -14, -28.74611f },
	{ 5.417068f, -14, -26.74611f },
	{ -6.583054f, 19.5f, -28.74611f },
	{ 5.417068f, 19.5f, -26.74611f },
	{ -3.582992f, -13.5f, -27.24611f },
	{ 2.417007f, -13.5f, -26.24611f },
	{ -11.58104f, -13.5f, 11.89638f },
	{ -11.58092f, 18.5f, 11.89638f },
	{ -5.580917f, -13.5f, 12.39638f },
	{ -5.580917f, 18.5f, 12.39638f },
	{ -3.582992f, 18.5f, -27.24611f },
	{ 2.417007f, 18.5f, -26.24611f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_000282E8[] = {
	{ -0.280228f, 0.600491f, -0.748921f },
	{ 0.381755f, 0.675578f, -0.63076f },
	{ -0.364292f, -0.603946f, -0.708901f },
	{ 0.473212f, -0.677231f, -0.563409f },
	{ -0.429055f, 0.651608f, 0.625555f },
	{ 0.223009f, 0.626951f, 0.746458f },
	{ -0.512294f, -0.6515189f, 0.559533f },
	{ 0.316445f, -0.630521f, 0.708735f },
	{ -0.277988f, 0.718302f, 0.637781f },
	{ 0.070347f, 0.717726f, 0.692764f },
	{ -0.127334f, 0.714671f, -0.687773f },
	{ -0.190751f, -0.6770779f, -0.71076f },
	{ 0.226673f, 0.722291f, -0.653387f },
	{ 0.287905f, -0.694729f, -0.659137f },
	{ -0.340975f, -0.688186f, 0.6404189f },
	{ 0.131352f, -0.682981f, 0.718529f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_000283A8 = { vertexSTG12_00028228, normalSTG12_000282E8, LengthOfArray(vertexSTG12_00028228), meshlistSTG12_00028210, matlistSTG12_00028134, LengthOfArray(meshlistSTG12_00028210), LengthOfArray(matlistSTG12_00028134),{ -4.581985f, 2.75f, -7.549867f }, 27.01561f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_000283D0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_000283A8, 710, 110, -395.4999f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00028404[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 63, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00028404_2[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 73, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00028454[] = {
	4, 29, 28, 27, 26,
	4, 33, 32, 31, 30,
	4, 37, 36, 35, 34
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00028472[] = {
	4, 3, 2, 1, 0,
	0x8000u | 7, 1, 3, 5, 7, 11, 17, 19,
	3, 0, 2, 6,
	8, 5, 9, 11, 15, 19, 21, 23, 25,
	3, 9, 13, 15,
	0x8000u | 6, 12, 10, 8, 6, 4, 0,
	0x8000u | 6, 10, 18, 6, 16, 7, 17,
	4, 23, 22, 19, 18,
	7, 22, 24, 18, 20, 10, 14, 12
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000284E4[] = {
	10, 25, 35, 23, 34, 22, 36, 24, 37, 25, 35,
	10, 19, 31, 17, 30, 16, 32, 18, 33, 19, 31,
	10, 3, 26, 2, 28, 6, 29, 7, 27, 3, 26
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00028528[] = {
	{ 290, -245 },
	{ 290, 245 },
	{ 0, -245 },
	{ 0, 245 },
	{ 653, -245 },
	{ 653, 245 },
	{ 364, -245 },
	{ 364, 245 },
	{ 1020, -245 },
	{ 1020, 245 },
	{ 728, -245 },
	{ 728, 245 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00028558[] = {
	{ 255, 255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 0, -510 },
	{ 254, -510 },
	{ 0, -255 },
	{ 254, -255 },
	{ 255, 0 },
	{ 510, -255 },
	{ 510, 0 },
	{ 0, -510 },
	{ 254, -510 },
	{ 254, -255 },
	{ 0, -255 },
	{ 0 },
	{ 255, 0 },
	{ 255, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 254, -255 },
	{ 0, -255 },
	{ 0, -510 },
	{ 255, 0 },
	{ 510, 0 },
	{ 254, -255 },
	{ 510, -255 },
	{ 255, 255 },
	{ 510, 255 },
	{ 765, 255 },
	{ 765, -255 },
	{ 510, 255 },
	{ 510, -255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00028618[] = {
	{ 2040, -513 },
	{ 1567, -844 },
	{ 1558, -936 },
	{ 1050, -177 },
	{ 960, -168 },
	{ 1434, 161 },
	{ 1442, 255 },
	{ 1952, -504 },
	{ 2040, -513 },
	{ 1567, -844 },
	{ 1558, -936 },
	{ 1083, -1267 },
	{ 1075, -1361 },
	{ 569, -600 },
	{ 480, -589 },
	{ 952, -262 },
	{ 960, -168 },
	{ 1468, -928 },
	{ 1558, -936 },
	{ 1083, -1267 },
	{ 593, -1785 },
	{ 87, -1024 },
	{ 0, -1015 },
	{ 472, -685 },
	{ 480, -589 },
	{ 988, -1352 },
	{ 1075, -1361 },
	{ 604, -1689 },
	{ 593, -1785 },
	{ 87, -1024 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00028690[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, polySTG12_00028454, NULL, NULL, NULL, uvSTG12_00028528, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, polySTG12_000284E4, NULL, NULL, NULL, uvSTG12_00028618, NULL }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00028690_2[] = {
	{ NJD_MESHSET_TRIMESH | 0, 9, polySTG12_00028472, NULL, NULL, NULL, uvSTG12_00028558, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_000286D8[] = {
	{ 617, -80, -665 },
	{ 617, -80, -635 },
	{ 617, -65, -665 },
	{ 617, -65, -635 },
	{ 637, -80, -665 },
	{ 637, -80, -635 },
	{ 637, -65, -665 },
	{ 637, -65, -635 },
	{ 657, -80, -665 },
	{ 657, -80, -635 },
	{ 657, -65, -665 },
	{ 657, -65, -635 },
	{ 677, -80, -665 },
	{ 677, -80, -635 },
	{ 677, -65, -665 },
	{ 677, -65, -635 },
	{ 637, -50, -665 },
	{ 637, -50, -635 },
	{ 657, -50, -665 },
	{ 657, -50, -635 },
	{ 677, -50, -665 },
	{ 677, -50, -635 },
	{ 657, -35, -665 },
	{ 657, -35, -635 },
	{ 677, -35, -665 },
	{ 677, -35, -635 },
	{ 619, -65, -663 },
	{ 619, -65, -637 },
	{ 635, -65, -663 },
	{ 635, -65, -637 },
	{ 639, -50, -663 },
	{ 639, -50, -637 },
	{ 655, -50, -663 },
	{ 655, -50, -637 },
	{ 659, -35, -663 },
	{ 659, -35, -637 },
	{ 675, -35, -663 },
	{ 675, -35, -637 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_000288A0[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ -0.301511f, 0.301511f, -0.904534f },
	{ -0.301511f, 0.301511f, 0.904534f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.301511f, 0.301511f, -0.904534f },
	{ -0.301511f, 0.301511f, 0.904534f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00028A68 = { vertexSTG12_000286D8, normalSTG12_000288A0, LengthOfArray(vertexSTG12_000286D8), meshlistSTG12_00028690, matlistSTG12_00028404, LengthOfArray(meshlistSTG12_00028690), LengthOfArray(matlistSTG12_00028404),{ 647, -57.5f, -650 }, 33.54102f, NULL };

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00028A68_2 = { vertexSTG12_000286D8, normalSTG12_000288A0, LengthOfArray(vertexSTG12_000286D8), meshlistSTG12_00028690_2, matlistSTG12_00028404_2, LengthOfArray(meshlistSTG12_00028690_2), LengthOfArray(matlistSTG12_00028404_2),{ 647, -57.5f, -650 }, 33.54102f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00028A90 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00028A68, -4, -0.0006699999f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00028A90_2 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00028A68_2, -4, -0.0006699999f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00028AC4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 70, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00028AD8[] = {
	0x8000u | 8, 3, 4, 2, 5, 1, 6, 0, 7
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00028AEC[] = {
	{ 2550, 255 },
	{ 2550, -585 },
	{ 2218, 255 },
	{ 2184, -585 },
	{ 1008, 75 },
	{ 1439, -696 },
	{ 0, -428 },
	{ 791, -1020 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00028B0C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_00028AD8, NULL, NULL, NULL, uvSTG12_00028AEC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00028B24[] = {
	{ -434.2814f, 10.00002f, -754.2813f },
	{ -317.6161f, 10.00002f, -832.2346f },
	{ -178.0301f, 10.00002f, -860 },
	{ -140, 10, -860 },
	{ -140, 10, -730 },
	{ -181.9698f, 10.00001f, -730 },
	{ -268.1671f, 10.00001f, -712.8542f },
	{ -342.9117f, 10, -662.9115f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00028B84[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00028BE4 = { vertexSTG12_00028B24, normalSTG12_00028B84, LengthOfArray(vertexSTG12_00028B24), meshlistSTG12_00028B0C, matlistSTG12_00028AC4, LengthOfArray(meshlistSTG12_00028B0C), LengthOfArray(matlistSTG12_00028AC4),{ -287.1407f, 10.00001f, -761.4558f }, 177.0914f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00028C0C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00028BE4, 0, 70, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00028C40[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 55, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 75, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 52, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00028CCC[] = {
	4, 16, 17, 19, 18
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00028CD6[] = {
	4, 3, 21, 15, 20,
	4, 13, 23, 1, 22
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00028CEA[] = {
	4, 3, 15, 5, 7,
	4, 1, 3, 4, 5,
	4, 13, 1, 6, 4,
	4, 15, 13, 7, 6
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00028D12[] = {
	4, 2, 16, 14, 19,
	4, 12, 18, 0, 17
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00028D26[] = {
	4, 0, 22, 12, 23,
	4, 14, 20, 2, 21
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00028D3A[] = {
	4, 11, 6, 10, 4,
	4, 8, 5, 9, 7,
	0x8000u | 8, 5, 4, 8, 10, 9, 11, 7, 6
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00028D60[] = {
	{ 0, -8924 },
	{ 2550, -8924 },
	{ 0, 255 },
	{ 2550, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00028D70[] = {
	{ 2040, -255 },
	{ 2040, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 2040, -255 },
	{ 2040, 255 },
	{ 0, -255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00028D90[] = {
	{ 2550, 255 },
	{ 0, 255 },
	{ 2550, 0 },
	{ 0 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 0 },
	{ 0 },
	{ 2550, 255 },
	{ 0, 255 },
	{ 2550, 0 },
	{ 0 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00028DD0[] = {
	{ 4080, 255 },
	{ 4080, 0 },
	{ 0, 255 },
	{ 0 },
	{ 4080, 255 },
	{ 4080, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00028DF0[] = {
	{ 0, 255 },
	{ 0 },
	{ 2550, 255 },
	{ 2550, 0 },
	{ 0, 255 },
	{ 0 },
	{ 2550, 255 },
	{ 2550, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00028E10[] = {
	{ 386, 123 },
	{ 3, 243 },
	{ 123, 123 },
	{ 3, -1261 },
	{ 123, -1141 },
	{ 506, -1261 },
	{ 386, -1141 },
	{ 506, 243 },
	{ 506, -1261 },
	{ 3, -1261 },
	{ 123, -1141 },
	{ 123, 123 },
	{ 386, -1141 },
	{ 386, 123 },
	{ 506, 243 },
	{ 3, 243 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00028E50[] = {
	{ NJD_MESHSET_TRIMESH | 1, 1, polySTG12_00028CCC, NULL, NULL, NULL, uvSTG12_00028D60, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, polySTG12_00028CD6, NULL, NULL, NULL, uvSTG12_00028D70, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, polySTG12_00028CEA, NULL, NULL, NULL, uvSTG12_00028D90, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, polySTG12_00028D12, NULL, NULL, NULL, uvSTG12_00028DD0, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, polySTG12_00028D26, NULL, NULL, NULL, uvSTG12_00028DF0, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 3, polySTG12_00028D3A, NULL, NULL, NULL, uvSTG12_00028E10, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00028EE0[] = {
	{ 20.58844f, -75, -59.20462f },
	{ 20.58844f, -34.5f, -59.20462f },
	{ -20.58826f, -75, -59.20465f },
	{ -20.58826f, -34.5f, -59.20465f },
	{ 12.58844f, -29.5f, -66.20459f },
	{ -12.58826f, -29.5f, -66.20461f },
	{ 12.58838f, -29.5f, -172.2046f },
	{ -12.58826f, -29.5f, -172.2045f },
	{ 6.58844f, -37.5f, -71.20459f },
	{ -6.588257f, -37.5f, -71.20465f },
	{ 6.588379f, -37.5f, -167.2047f },
	{ -6.588257f, -37.5f, -167.2045f },
	{ 20.58844f, -75, -180.2046f },
	{ 20.58844f, -34.5f, -180.2046f },
	{ -20.58826f, -75, -180.2046f },
	{ -20.58826f, -34.5f, -180.2046f },
	{ -15.44117f, -75, -59.20464f },
	{ 15.44135f, -75, -59.20462f },
	{ 15.44135f, -75, -180.2046f },
	{ -15.44117f, -75, -180.2046f },
	{ -20.58826f, -69.9375f, -180.2046f },
	{ -20.58826f, -69.9375f, -59.20465f },
	{ 20.58844f, -69.9375f, -59.20462f },
	{ 20.58844f, -69.9375f, -180.2046f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00029000[] = {
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.802467f, -0.5671009f, -0.185591f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.802467f, -0.5671f, -0.185592f },
	{ -0.057131f, -0.993392f, -0.099539f },
	{ 0.057132f, -0.993392f, -0.099538f },
	{ -0.062955f, -0.995582f, 0.069666f },
	{ 0.062957f, -0.995582f, 0.06966399f },
	{ 0.352377f, -0.84962f, 0.392398f },
	{ -0.352379f, -0.84962f, 0.392397f },
	{ 0.352375f, -0.849621f, -0.392397f },
	{ -0.352379f, -0.849621f, -0.392393f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.796509f, -0.577105f, 0.180343f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.796509f, -0.577104f, 0.180344f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00029120 = { vertexSTG12_00028EE0, normalSTG12_00029000, LengthOfArray(vertexSTG12_00028EE0), meshlistSTG12_00028E50, matlistSTG12_00028C40, LengthOfArray(meshlistSTG12_00028E50), LengthOfArray(matlistSTG12_00028C40),{ 0.00009199999f, -52.25f, -119.7046f }, 64.63596f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00029148 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00029120, 750, 85, -270.5002f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0002917C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 75, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 55, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 52, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00029208[] = {
	8, 25, 30, 29, 31, 26, 24, 28, 27
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002921A[] = {
	8, 30, 14, 31, 22, 24, 18, 27, 2,
	8, 12, 25, 20, 29, 16, 26, 0, 28
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002923E[] = {
	8, 0, 35, 16, 34, 20, 32, 12, 33,
	8, 14, 39, 22, 38, 18, 37, 2, 36
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00029262[] = {
	8, 13, 33, 21, 32, 17, 34, 1, 35,
	8, 39, 15, 38, 23, 37, 19, 36, 3
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00029286[] = {
	0x8000u | 8, 3, 5, 19, 41, 23, 45, 15, 9,
	4, 1, 3, 4, 5,
	0x8000u | 8, 4, 1, 40, 17, 44, 21, 8, 13,
	4, 15, 13, 9, 8
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000292BE[] = {
	0x8000u | 8, 5, 7, 41, 43, 45, 47, 9, 11,
	0x8000u | 8, 6, 4, 42, 40, 46, 44, 10, 8,
	12, 9, 8, 11, 10, 47, 46, 43, 42, 7, 6, 5, 4
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000292FC[] = {
	{ 536, 255 },
	{ 0, -2391 },
	{ 3901, -1568 },
	{ 1611, -3335 },
	{ 5100, -5121 },
	{ 2337, -5121 },
	{ 5100, -7394 },
	{ 2337, -7394 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002931C[] = {
	{ 764, 0 },
	{ 765, 255 },
	{ 540, 0 },
	{ 545, 255 },
	{ 280, 0 },
	{ 312, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0 },
	{ 976, 255 },
	{ 968, 0 },
	{ 2394, 255 },
	{ 2355, 0 },
	{ 3059, 255 },
	{ 3060, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002935C[] = {
	{ 0, 255 },
	{ 0 },
	{ 661, 255 },
	{ 661, 0 },
	{ 2082, 255 },
	{ 2083, 0 },
	{ 3059, 255 },
	{ 3060, 0 },
	{ 0, 255 },
	{ 0 },
	{ 657, 255 },
	{ 653, 0 },
	{ 1354, 255 },
	{ 1354, 0 },
	{ 2295, 255 },
	{ 2295, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002939C[] = {
	{ 0, -255 },
	{ 0, 255 },
	{ 729, -255 },
	{ 732, 255 },
	{ 1794, -255 },
	{ 1797, 255 },
	{ 2295, -255 },
	{ 2295, 255 },
	{ 1020, 255 },
	{ 1020, -255 },
	{ 729, 255 },
	{ 733, -255 },
	{ 418, 255 },
	{ 422, -255 },
	{ 0, 255 },
	{ 0, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000293DC[] = {
	{ 1530, 255 },
	{ 1530, 0 },
	{ 887, 255 },
	{ 1000, 0 },
	{ 456, 255 },
	{ 412, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1020, 255 },
	{ 0, 255 },
	{ 1020, 0 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ 517, 0 },
	{ 553, 255 },
	{ 1606, 0 },
	{ 1530, 255 },
	{ 2550, 0 },
	{ 2550, 255 },
	{ 1020, 255 },
	{ 0, 255 },
	{ 1020, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002943C[] = {
	{ 506, -1261 },
	{ 378, -1117 },
	{ 506, -856 },
	{ 378, -856 },
	{ 506, -306 },
	{ 378, -306 },
	{ 506, 243 },
	{ 378, 51 },
	{ 139, -1117 },
	{ 3, -1261 },
	{ 139, -856 },
	{ 3, -856 },
	{ 139, -306 },
	{ 3, -306 },
	{ 139, 51 },
	{ 3, 243 },
	{ 506, 243 },
	{ 3, 243 },
	{ 378, 51 },
	{ 139, 51 },
	{ 378, -306 },
	{ 139, -306 },
	{ 378, -856 },
	{ 139, -856 },
	{ 378, -1117 },
	{ 139, -1117 },
	{ 506, -1261 },
	{ 3, -1261 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_000294AC[] = {
	{ NJD_MESHSET_TRIMESH | 1, 1, polySTG12_00029208, NULL, NULL, NULL, uvSTG12_000292FC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, polySTG12_0002921A, NULL, NULL, NULL, uvSTG12_0002931C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, polySTG12_0002923E, NULL, NULL, NULL, uvSTG12_0002935C, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, polySTG12_00029262, NULL, NULL, NULL, uvSTG12_0002939C, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 4, polySTG12_00029286, NULL, NULL, NULL, uvSTG12_000293DC, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 3, polySTG12_000292BE, NULL, NULL, NULL, uvSTG12_0002943C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0002953C[] = {
	{ 20.58844f, 4, -59.20462f },
	{ 20.58844f, 44.5f, -59.20462f },
	{ -20.58826f, 4, -59.20465f },
	{ -20.58826f, 44.5f, -59.20465f },
	{ 14.58844f, 48.5f, -65.20461f },
	{ -14.58826f, 48.5f, -65.20465f },
	{ 9.58844f, 41.5f, -70.20461f },
	{ -9.588257f, 41.5f, -70.20465f },
	{ -29.86273f, 48.5f, -142.6947f },
	{ -36.5299f, 48.5f, -114.0737f },
	{ -26.83392f, 41.5f, -135.79f },
	{ -31.55872f, 41.5f, -117.9785f },
	{ -34.58295f, 11, -151.7459f },
	{ -34.58295f, 44.5f, -151.7459f },
	{ -42.58093f, 11, -111.3534f },
	{ -42.58087f, 44.5f, -111.3534f },
	{ 20.58844f, 4, -85.20461f },
	{ 20.58844f, 44.5f, -85.20465f },
	{ -20.58826f, 4, -85.20465f },
	{ -20.58826f, 44.5f, -85.20467f },
	{ 7.47052f, 6, -129.0451f },
	{ 7.47052f, 44.5f, -129.0451f },
	{ -26.9704f, 6, -101.4065f },
	{ -26.9704f, 44.5f, -101.4065f },
	{ -15.44117f, 4, -85.20465f },
	{ -35.58269f, 11, -146.6968f },
	{ 15.44135f, 4, -85.20461f },
	{ -15.44117f, 4, -59.20464f },
	{ 15.44135f, 4, -59.20462f },
	{ 2.040405f, 6, -125.8403f },
	{ -41.58118f, 11, -116.4025f },
	{ -23.54028f, 6, -105.6114f },
	{ 7.47052f, 10.8125f, -129.0451f },
	{ -34.58295f, 15.1875f, -151.7459f },
	{ 20.58844f, 9.0625f, -85.20461f },
	{ 20.58844f, 9.0625f, -59.20462f },
	{ -20.58826f, 9.0625f, -59.20465f },
	{ -20.58826f, 9.0625f, -85.20465f },
	{ -26.9704f, 10.8125f, -101.4065f },
	{ -42.58092f, 15.1875f, -111.3534f },
	{ 14.58844f, 48.5f, -85.20483f },
	{ -14.58826f, 48.5f, -85.20486f },
	{ 9.588501f, 41.5f, -85.20483f },
	{ -9.588257f, 41.5f, -85.20486f },
	{ 2.080383f, 48.5f, -125.2777f },
	{ -23.23779f, 48.5f, -105.7967f },
	{ -1.88739f, 41.5f, -122.2538f },
	{ -18.26996f, 41.5f, -109.8206f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0002977C[] = {
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.800903f, -0.5680659f, -0.189355f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.800903f, -0.5680659f, -0.189355f },
	{ -0.081043f, -0.99341f, -0.081044f },
	{ 0.081044f, -0.99341f, -0.081044f },
	{ 0.36472f, -0.856714f, 0.364721f },
	{ -0.36472f, -0.856714f, 0.364719f },
	{ 0.058146f, -0.989917f, 0.129161f },
	{ 0.098813f, -0.994927f, -0.01889f },
	{ -0.229564f, -0.844855f, -0.483239f },
	{ -0.5213929f, -0.840385f, 0.147992f },
	{ -0.325106f, 0.596671f, 0.733682f },
	{ -0.220858f, -0.527219f, 0.820525f },
	{ 0.533559f, 0.688422f, -0.491315f },
	{ 0.592124f, -0.57127f, -0.5683669f },
	{ -0.72198f, 0.681857f, 0.117539f },
	{ -0.878788f, -0.460516f, 0.125124f },
	{ 0.651899f, 0.754879f, -0.072014f },
	{ 0.853725f, -0.491504f, -0.171985f },
	{ -0.579675f, 0.6371689f, 0.507929f },
	{ -0.696502f, -0.442175f, 0.565125f },
	{ 0.577914f, 0.768704f, -0.27406f },
	{ 0.667447f, -0.511104f, -0.54156f },
	{ 0.014475f, 0.999344f, 0.033198f },
	{ 0.089183f, 0.993995f, 0.06341f },
	{ 0.006949f, 0.999748f, 0.021334f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.052884f, 0.997161f, 0.053607f },
	{ 0.153097f, 0.9848019f, 0.08200999f },
	{ 0.09755f, 0.992375f, 0.075338f },
	{ -0.775509f, 0, 0.631337f },
	{ -0.475018f, 0, 0.879976f },
	{ -0.9894519f, 0, 0.144859f },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.9824499f, 0, -0.186525f },
	{ 0.771651f, 0, -0.6360469f },
	{ 0.537371f, 0, -0.843346f },
	{ 0.126248f, -0.991917f, -0.012712f },
	{ -0.258114f, -0.964281f, 0.059497f },
	{ 0.489327f, -0.868506f, -0.079097f },
	{ -0.413172f, -0.907791f, 0.072143f },
	{ 0.029843f, -0.999523f, -0.007951999f },
	{ -0.222214f, -0.9619009f, 0.159273f },
	{ 0.412817f, -0.844014f, -0.342378f },
	{ -0.271725f, -0.937381f, 0.217905f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_000299BC = { vertexSTG12_0002953C, normalSTG12_0002977C, LengthOfArray(vertexSTG12_0002953C), meshlistSTG12_000294AC, matlistSTG12_0002917C, LengthOfArray(meshlistSTG12_000294AC), LengthOfArray(matlistSTG12_0002917C),{ -10.99625f, 26.25f, -105.4752f }, 56.02288f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_000299E4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_000299BC, 750, 85, -270.5002f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00029A18[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00029A2C[] = {
	0x8000u | 8, 1, 3, 12, 13, 10, 11, 0, 2,
	0x8000u | 8, 5, 1, 9, 12, 8, 10, 4, 0,
	0x8000u | 8, 4, 6, 8, 14, 9, 15, 5, 7,
	0x8000u | 8, 3, 7, 13, 15, 11, 14, 2, 6
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00029A74[] = {
	{ 2040, 255 },
	{ 1027, 255 },
	{ 2040, 188 },
	{ 1020, 186 },
	{ 2040, 66 },
	{ 1020, 68 },
	{ 2040, 0 },
	{ 1027, 0 },
	{ 3068, 255 },
	{ 2040, 255 },
	{ 3060, 188 },
	{ 2040, 188 },
	{ 3060, 66 },
	{ 2040, 66 },
	{ 3068, 0 },
	{ 2040, 0 },
	{ 3068, 0 },
	{ 4068, 1 },
	{ 3060, 66 },
	{ 4068, 67 },
	{ 3060, 188 },
	{ 4069, 188 },
	{ 3068, 255 },
	{ 4066, 253 },
	{ 1027, 255 },
	{ 0, 255 },
	{ 1020, 186 },
	{ 0, 186 },
	{ 1020, 68 },
	{ 0, 68 },
	{ 1027, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00029AF4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, polySTG12_00029A2C, NULL, NULL, NULL, uvSTG12_00029A74, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00029B0C[] = {
	{ -20.58844f, -20, -9.295226f },
	{ -20.58844f, -20, 0.7047729f },
	{ -20.58844f, 20.5f, -9.295226f },
	{ -20.58844f, 20.5f, 0.7047729f },
	{ 20.58826f, -20, -9.295165f },
	{ 20.58826f, -20, 0.704834f },
	{ 20.58826f, 20.5f, -9.295165f },
	{ 20.58826f, 20.5f, 0.704834f },
	{ 19.58826f, -19.5f, -6.795166f },
	{ 19.58826f, -19.5f, -1.795166f },
	{ -19.58844f, -19.5f, -6.795227f },
	{ -19.58844f, 19.5f, -6.795227f },
	{ -19.58844f, -19.5f, -1.795227f },
	{ -19.58844f, 19.5f, -1.795227f },
	{ 19.58826f, 19.5f, -6.795166f },
	{ 19.58826f, 19.5f, -1.795166f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00029BCC[] = {
	{ 0.678917f, 0.61871f, -0.395309f },
	{ 0.678916f, 0.618711f, 0.395309f },
	{ 0.615458f, -0.615457f, -0.492366f },
	{ 0.615457f, -0.615458f, 0.492366f },
	{ -0.678916f, 0.618711f, -0.395309f },
	{ -0.678917f, 0.61871f, 0.395309f },
	{ -0.615457f, -0.615458f, -0.492366f },
	{ -0.615458f, -0.615457f, 0.492366f },
	{ -0.661474f, 0.718925f, -0.213537f },
	{ -0.661474f, 0.718925f, 0.213537f },
	{ 0.661474f, 0.718925f, -0.213537f },
	{ 0.677065f, -0.677065f, -0.288386f },
	{ 0.661474f, 0.718925f, 0.213537f },
	{ 0.677065f, -0.677065f, 0.288386f },
	{ -0.677065f, -0.677065f, -0.288386f },
	{ -0.677065f, -0.677065f, 0.288386f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00029C8C = { vertexSTG12_00029B0C, normalSTG12_00029BCC, LengthOfArray(vertexSTG12_00029B0C), meshlistSTG12_00029AF4, matlistSTG12_00029A18, LengthOfArray(meshlistSTG12_00029AF4), LengthOfArray(matlistSTG12_00029A18),{ -0.0009199999f, 0.25f, -4.295197f }, 21.1868f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00029CB4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00029C8C, 750, -19.99999f, -970, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00029CE8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00029CFC[] = {
	0x8000u | 8, 1, 3, 12, 13, 10, 11, 0, 2,
	0x8000u | 8, 5, 1, 9, 12, 8, 10, 4, 0,
	0x8000u | 8, 4, 6, 8, 14, 9, 15, 5, 7,
	0x8000u | 8, 3, 7, 13, 15, 11, 14, 2, 6
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00029D44[] = {
	{ 2040, 255 },
	{ 1027, 255 },
	{ 2040, 188 },
	{ 1020, 186 },
	{ 2040, 66 },
	{ 1020, 68 },
	{ 2040, 0 },
	{ 1027, 0 },
	{ 3068, 255 },
	{ 2040, 255 },
	{ 3060, 188 },
	{ 2040, 188 },
	{ 3060, 66 },
	{ 2040, 66 },
	{ 3068, 0 },
	{ 2040, 0 },
	{ 3068, 0 },
	{ 4068, 1 },
	{ 3060, 66 },
	{ 4068, 67 },
	{ 3060, 188 },
	{ 4069, 188 },
	{ 3068, 255 },
	{ 4066, 253 },
	{ 1027, 255 },
	{ 0, 255 },
	{ 1020, 186 },
	{ 0, 186 },
	{ 1020, 68 },
	{ 0, 68 },
	{ 1027, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00029DC4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, polySTG12_00029CFC, NULL, NULL, NULL, uvSTG12_00029D44, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00029DDC[] = {
	{ -20.58844f, -21, -9.295226f },
	{ -20.58844f, -21, 0.7047729f },
	{ -20.58844f, 19.5f, -9.295226f },
	{ -20.58844f, 19.5f, 0.7047729f },
	{ 20.58826f, -21, -9.295165f },
	{ 20.58826f, -21, 0.704834f },
	{ 20.58826f, 19.5f, -9.295165f },
	{ 20.58826f, 19.5f, 0.704834f },
	{ 19.58826f, -20.5f, -6.795166f },
	{ 19.58826f, -20.5f, -1.795166f },
	{ -19.58844f, -20.5f, -6.795227f },
	{ -19.58844f, 18.5f, -6.795227f },
	{ -19.58844f, -20.5f, -1.795227f },
	{ -19.58844f, 18.5f, -1.795227f },
	{ 19.58826f, 18.5f, -6.795166f },
	{ 19.58826f, 18.5f, -1.795166f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00029E9C[] = {
	{ 0.678917f, 0.61871f, -0.395309f },
	{ 0.678916f, 0.618711f, 0.395309f },
	{ 0.615458f, -0.615457f, -0.492366f },
	{ 0.615457f, -0.615458f, 0.492366f },
	{ -0.678916f, 0.618711f, -0.395309f },
	{ -0.678917f, 0.61871f, 0.395309f },
	{ -0.615457f, -0.615458f, -0.492366f },
	{ -0.615458f, -0.615457f, 0.492366f },
	{ -0.661474f, 0.718925f, -0.213537f },
	{ -0.661474f, 0.718925f, 0.213537f },
	{ 0.661474f, 0.718925f, -0.213537f },
	{ 0.677065f, -0.677065f, -0.288386f },
	{ 0.661474f, 0.718925f, 0.213537f },
	{ 0.677065f, -0.677065f, 0.288386f },
	{ -0.677065f, -0.677065f, -0.288386f },
	{ -0.677065f, -0.677065f, 0.288386f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00029F5C = { vertexSTG12_00029DDC, normalSTG12_00029E9C, LengthOfArray(vertexSTG12_00029DDC), meshlistSTG12_00029DC4, matlistSTG12_00029CE8, LengthOfArray(meshlistSTG12_00029DC4), LengthOfArray(matlistSTG12_00029CE8),{ -0.0009199999f, -0.75f, -4.295197f }, 21.1868f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00029F84 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00029F5C, 750, 110, -970, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00029FB8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00029FCC[] = {
	0x8000u | 8, 4, 6, 8, 14, 9, 15, 5, 7,
	0x8000u | 8, 3, 7, 13, 15, 11, 14, 2, 6,
	0x8000u | 8, 2, 0, 11, 10, 13, 12, 3, 1,
	0x8000u | 8, 0, 4, 10, 8, 12, 9, 1, 5
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002A014[] = {
	{ 3079, 0 },
	{ 4061, 1 },
	{ 3075, 66 },
	{ 4068, 66 },
	{ 3075, 188 },
	{ 4068, 188 },
	{ 3079, 255 },
	{ 4068, 254 },
	{ 1041, 255 },
	{ 0, 255 },
	{ 1035, 186 },
	{ 0, 186 },
	{ 1035, 68 },
	{ 0, 68 },
	{ 1041, 0 },
	{ 0 },
	{ 1041, 0 },
	{ 2040, 0 },
	{ 1035, 68 },
	{ 2040, 66 },
	{ 1035, 186 },
	{ 2040, 188 },
	{ 1041, 255 },
	{ 2040, 255 },
	{ 2040, 0 },
	{ 3079, 0 },
	{ 2040, 66 },
	{ 3075, 66 },
	{ 2040, 188 },
	{ 3075, 188 },
	{ 2040, 255 },
	{ 3079, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0002A094[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, polySTG12_00029FCC, NULL, NULL, NULL, uvSTG12_0002A014, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0002A0AC[] = {
	{ -20.58844f, -20, -9.295226f },
	{ -20.58844f, -20, 0.704712f },
	{ -20.58844f, 19.5f, -9.295226f },
	{ -20.58844f, 19.5f, 0.704834f },
	{ 20.58826f, -20, -9.295165f },
	{ 20.58826f, -20, 0.7047729f },
	{ 20.58826f, 19.5f, -9.295165f },
	{ 20.58826f, 19.5f, 0.704895f },
	{ 19.58826f, -19.5f, -6.795166f },
	{ 19.58826f, -19.5f, -1.795166f },
	{ -19.58844f, -19.5f, -6.795227f },
	{ -19.58844f, 18.5f, -6.795227f },
	{ -19.58844f, -19.5f, -1.795227f },
	{ -19.58844f, 18.5f, -1.795227f },
	{ 19.58826f, 18.5f, -6.795166f },
	{ 19.58826f, 18.5f, -1.795166f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0002A16C[] = {
	{ 0.678917f, 0.61871f, -0.395309f },
	{ 0.6789179f, 0.618708f, 0.395312f },
	{ 0.615458f, -0.615457f, -0.492366f },
	{ 0.615457f, -0.6154619f, 0.492361f },
	{ -0.678916f, 0.618711f, -0.395309f },
	{ -0.678919f, 0.6187069f, 0.395312f },
	{ -0.615457f, -0.615458f, -0.492366f },
	{ -0.615458f, -0.615461f, 0.492361f },
	{ -0.661474f, 0.718925f, -0.213537f },
	{ -0.661474f, 0.718925f, 0.213539f },
	{ 0.661474f, 0.718925f, -0.213537f },
	{ 0.677065f, -0.677065f, -0.288386f },
	{ 0.661474f, 0.718925f, 0.213539f },
	{ 0.677065f, -0.677067f, 0.288382f },
	{ -0.677065f, -0.677065f, -0.288386f },
	{ -0.677065f, -0.677066f, 0.288383f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0002A22C = { vertexSTG12_0002A0AC, normalSTG12_0002A16C, LengthOfArray(vertexSTG12_0002A0AC), meshlistSTG12_0002A094, matlistSTG12_00029FB8, LengthOfArray(meshlistSTG12_0002A094), LengthOfArray(matlistSTG12_00029FB8),{ -0.0009199999f, -0.25f, -4.295166f }, 21.18681f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0002A254 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0002A22C, 750, 110, -831, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0002A288[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 36, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 57, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 16, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002A314[] = {
	0x8000u | 10, 12, 20, 11, 19, 10, 18, 13, 21, 12, 20
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002A32A[] = {
	0x8000u | 8, 5, 11, 1, 10, 0, 13, 4, 12
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002A33C[] = {
	6, 5, 11, 7, 12, 6, 4
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002A34A[] = {
	4, 15, 17, 7, 9,
	4, 16, 14, 8, 6
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002A35E[] = {
	4, 0, 1, 2, 3
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002A368[] = {
	4, 14, 15, 6, 7
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002A372[] = {
	4, 25, 23, 17, 9,
	4, 22, 24, 8, 16
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002A388[] = {
	{ 7, 191 },
	{ 502, 191 },
	{ 7, -701 },
	{ 502, -701 },
	{ 7, -1721 },
	{ 502, -1721 },
	{ 7, -2741 },
	{ 502, -2741 },
	{ 7, -3761 },
	{ 502, -3761 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002A3B0[] = {
	{ 0, -255 },
	{ 127, -255 },
	{ 0, 255 },
	{ 127, 0 },
	{ 510, 255 },
	{ 382, 0 },
	{ 510, -255 },
	{ 382, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002A3D0[] = {
	{ 0, 254 },
	{ 382, 254 },
	{ 0 },
	{ 1147, 254 },
	{ 1530, 0 },
	{ 1530, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002A3E8[] = {
	{ 1, 70 },
	{ 1, 184 },
	{ 508, 70 },
	{ 508, 184 },
	{ 508, 70 },
	{ 508, 184 },
	{ 1, 70 },
	{ 1, 184 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002A408[] = {
	{ 1, 164 },
	{ 508, 164 },
	{ 1, 254 },
	{ 508, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002A418[] = {
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -255 },
	{ 0, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002A428[] = {
	{ 2040, 0 },
	{ 0 },
	{ 2040, 255 },
	{ 0, 254 },
	{ 0 },
	{ 2040, 0 },
	{ 0, 254 },
	{ 2040, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0002A448[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_0002A314, NULL, NULL, NULL, uvSTG12_0002A388, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, polySTG12_0002A32A, NULL, NULL, NULL, uvSTG12_0002A3B0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, polySTG12_0002A33C, NULL, NULL, NULL, uvSTG12_0002A3D0, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, polySTG12_0002A34A, NULL, NULL, NULL, uvSTG12_0002A3E8, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, polySTG12_0002A35E, NULL, NULL, NULL, uvSTG12_0002A408, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, polySTG12_0002A368, NULL, NULL, NULL, uvSTG12_0002A418, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, polySTG12_0002A372, NULL, NULL, NULL, uvSTG12_0002A428, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0002A4F0[] = {
	{ 39.01806f, -70.00021f, -196.1572f },
	{ -39.01806f, -70.00021f, -196.1572f },
	{ 39.01806f, -80.00021f, -196.1572f },
	{ -39.01806f, -80.00021f, -196.1572f },
	{ 39.01806f, -10.00021f, -196.1572f },
	{ -39.01806f, -10.00021f, -196.1572f },
	{ 39.01806f, -0.000214f, -196.1572f },
	{ -39.01806f, -0.000214f, -196.1572f },
	{ 40.96899f, 1.999786f, -205.965f },
	{ -40.96899f, 1.999786f, -205.965f },
	{ -19.50903f, -40.00021f, -196.1572f },
	{ -19.50903f, -10.00021f, -196.1572f },
	{ 19.50903f, -10.00021f, -196.1572f },
	{ 19.50903f, -40.00021f, -196.1572f },
	{ 39.01806f, 78.99978f, -196.1572f },
	{ -39.01806f, 78.99978f, -196.1572f },
	{ 40.96899f, 77.00027f, -205.965f },
	{ -40.96899f, 77.00027f, -205.965f },
	{ -20.58838f, -40, -206.2952f },
	{ -20.58838f, 0.5f, -206.2952f },
	{ 20.58832f, 0.5f, -206.2952f },
	{ 20.58832f, -40, -206.2952f },
	{ 42.91986f, -0.000113f, -215.7729f },
	{ -42.91986f, -0.000113f, -215.7729f },
	{ 42.91986f, 79.00027f, -215.7729f },
	{ -42.91986f, 79.00027f, -215.7729f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0002A628[] = {
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.367436f, 0, 0.9300489f },
	{ -0.367436f, 0, 0.9300489f },
	{ 0.980785f, 0, 0.19509f },
	{ -0.980785f, 0, 0.19509f },
	{ 0.306802f, 0.329374f, 0.8929639f },
	{ 0.56181f, -0.272215f, 0.781197f },
	{ -0.561808f, -0.272213f, 0.781199f },
	{ -0.306802f, 0.329372f, 0.892965f },
	{ 0.590977f, 0, 0.806689f },
	{ -0.590977f, 0, 0.806689f },
	{ 0.980785f, 0, 0.19509f },
	{ -0.980785f, 0, 0.19509f },
	{ 0.727263f, 0.6819789f, -0.07741299f },
	{ 0.441665f, -0.599265f, -0.667693f },
	{ -0.441665f, -0.599266f, -0.6676919f },
	{ -0.727262f, 0.681981f, -0.077409f },
	{ 0.980786f, 0, 0.195087f },
	{ -0.980786f, 0, 0.195087f },
	{ 0.980786f, 0, 0.195087f },
	{ -0.980786f, 0, 0.195087f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0002A760 = { vertexSTG12_0002A4F0, normalSTG12_0002A628, LengthOfArray(vertexSTG12_0002A4F0), meshlistSTG12_0002A448, matlistSTG12_0002A288, LengthOfArray(meshlistSTG12_0002A448), LengthOfArray(matlistSTG12_0002A288),{ 0, -0.499966f, -205.965f }, 80.10294f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0002A788 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0002A760, 750, -0.000109f, -650, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0002A7BC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 56, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 54, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002A7F8[] = {
	0x8000u | 12, 10, 1, 11, 3, 9, 23, 8, 21, 13, 7, 12, 5
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002A812[] = {
	6, 5, 4, 7, 6, 21, 20,
	6, 0, 1, 2, 3, 22, 23
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002A82E[] = {
	0x8000u | 6, 20, 14, 6, 19, 4, 18,
	0x8000u | 6, 15, 22, 17, 2, 16, 0
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002A84C[] = {
	{ 11, 253 },
	{ 11, 1 },
	{ 203, 253 },
	{ 203, 1 },
	{ 418, 253 },
	{ 418, 1 },
	{ 1109, 253 },
	{ 1109, 1 },
	{ 1324, 253 },
	{ 1324, 1 },
	{ 1516, 253 },
	{ 1516, 1 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002A87C[] = {
	{ 7, -251 },
	{ 1012, -251 },
	{ 7, -3 },
	{ 1012, -3 },
	{ 7, 251 },
	{ 1012, 251 },
	{ 7, -251 },
	{ 1012, -251 },
	{ 7, -3 },
	{ 1012, -3 },
	{ 7, 251 },
	{ 1012, 251 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002A8AC[] = {
	{ 253, -757 },
	{ 1, -757 },
	{ 253, -247 },
	{ 1, -247 },
	{ 253, 247 },
	{ 1, 247 },
	{ 1, 247 },
	{ 253, 247 },
	{ 1, -262 },
	{ 253, -262 },
	{ 1, -757 },
	{ 253, -757 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0002A8DC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_0002A7F8, NULL, NULL, NULL, uvSTG12_0002A84C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, polySTG12_0002A812, NULL, NULL, NULL, uvSTG12_0002A87C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, polySTG12_0002A82E, NULL, NULL, NULL, uvSTG12_0002A8AC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0002A924[] = {
	{ 39.58838f, 36, 187.7046f },
	{ 39.58838f, 69.5f, 187.7046f },
	{ 33.58838f, 36, 198.7046f },
	{ 33.58838f, 69.5f, 198.7046f },
	{ -39.58838f, 36, 187.7046f },
	{ -39.58838f, 69.5f, 187.7046f },
	{ -33.58832f, 36, 198.7047f },
	{ -33.58832f, 69.5f, 198.7047f },
	{ -20.58832f, 82.5f, 198.7046f },
	{ 20.58838f, 82.5f, 198.7047f },
	{ 39.58838f, 82.5f, 187.7046f },
	{ 33.58838f, 82.5f, 198.7046f },
	{ -39.58838f, 82.5f, 187.7046f },
	{ -33.58832f, 82.5f, 198.7047f },
	{ -20.58832f, 30, 198.7046f },
	{ 20.58838f, 30, 198.7047f },
	{ 39.58838f, 30, 187.7046f },
	{ 33.58838f, 30, 198.7046f },
	{ -39.58838f, 30, 187.7046f },
	{ -33.58832f, 30, 198.7047f },
	{ -20.58832f, 36, 198.7047f },
	{ -20.58832f, 69.5f, 198.7047f },
	{ 20.58838f, 36, 198.7048f },
	{ 20.58838f, 69.5f, 198.7048f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0002AA44[] = {
	{ 0.877896f, 0, 0.478852f },
	{ 0.877896f, 0, 0.478852f },
	{ 0.51047f, -0.00007f, 0.859895f },
	{ 0.51047f, 0, 0.8598959f },
	{ -0.877895f, 0, 0.478854f },
	{ -0.877895f, 0, 0.478854f },
	{ -0.510465f, 0, 0.859898f },
	{ -0.510465f, 0.000003f, 0.859898f },
	{ -0.00001f, 0.000011f, 1 },
	{ 0.000004f, 0.000005f, 1 },
	{ 0.877896f, 0, 0.478852f },
	{ 0.5104679f, 0, 0.8598959f },
	{ -0.877895f, 0, 0.478854f },
	{ -0.510464f, 0.000007f, 0.859899f },
	{ -0.00001f, 0, 1 },
	{ 0.000011f, -0.00025f, 1 },
	{ 0.877896f, 0, 0.478852f },
	{ 0.510469f, -0.00015f, 0.8598959f },
	{ -0.877895f, 0, 0.478854f },
	{ -0.510464f, 0, 0.859899f },
	{ -0.00004f, 0, 1 },
	{ -0.00003f, 0.000007f, 1 },
	{ 0.000013f, -0.00012f, 1 },
	{ 0.000008f, 0.000003f, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0002AB64 = { vertexSTG12_0002A924, normalSTG12_0002AA44, LengthOfArray(vertexSTG12_0002A924), meshlistSTG12_0002A8DC, matlistSTG12_0002A7BC, LengthOfArray(meshlistSTG12_0002A8DC), LengthOfArray(matlistSTG12_0002A7BC),{ 0, 56.25f, 193.2047f }, 39.96862f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0002AB8C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0002AB64, 749.9999f, 59.99986f, -1029, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0002ABC0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 75, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 52, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002AC4C[] = {
	4, 3, 22, 15, 23,
	4, 13, 21, 1, 20
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002AC60[] = {
	4, 19, 18, 17, 16
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002AC6A[] = {
	4, 0, 20, 12, 21,
	4, 14, 23, 2, 22
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002AC7E[] = {
	4, 2, 16, 14, 18,
	4, 12, 19, 0, 17
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002AC92[] = {
	4, 3, 15, 5, 7,
	4, 13, 1, 6, 4,
	4, 15, 13, 7, 6,
	4, 1, 3, 4, 5
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002ACBA[] = {
	4, 11, 6, 10, 4,
	4, 7, 9, 5, 8,
	0x8000u | 8, 5, 4, 8, 10, 9, 11, 7, 6
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002ACE0[] = {
	{ 2032, -253 },
	{ 2032, 253 },
	{ 7, -253 },
	{ 7, 253 },
	{ 7, -253 },
	{ 7, 253 },
	{ 2032, -253 },
	{ 2032, 253 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002AD00[] = {
	{ 510, 254 },
	{ 0, 255 },
	{ 510, -1784 },
	{ 0, -1784 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002AD10[] = {
	{ 31, 253 },
	{ 31, 1 },
	{ 4048, 253 },
	{ 4048, 1 },
	{ 4048, 253 },
	{ 4048, 1 },
	{ 31, 253 },
	{ 31, 1 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002AD30[] = {
	{ 4048, 253 },
	{ 4048, 1 },
	{ 31, 253 },
	{ 31, 1 },
	{ 4048, 253 },
	{ 4048, 1 },
	{ 31, 253 },
	{ 31, 1 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002AD50[] = {
	{ 3034, 253 },
	{ 23, 253 },
	{ 3034, 1 },
	{ 23, 1 },
	{ 3034, 253 },
	{ 23, 253 },
	{ 3034, 1 },
	{ 23, 1 },
	{ 5, 253 },
	{ 757, 253 },
	{ 5, 1 },
	{ 757, 1 },
	{ 5, 253 },
	{ 757, 253 },
	{ 5, 1 },
	{ 757, 1 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002AD90[] = {
	{ 91, -661 },
	{ 506, -757 },
	{ 418, -661 },
	{ 506, 247 },
	{ 3, -757 },
	{ 91, 151 },
	{ 3, 247 },
	{ 418, 151 },
	{ 3, 247 },
	{ 506, 247 },
	{ 418, 151 },
	{ 418, -661 },
	{ 91, 151 },
	{ 91, -661 },
	{ 3, -757 },
	{ 506, -757 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0002ADD0[] = {
	{ NJD_MESHSET_TRIMESH | 1, 2, polySTG12_0002AC4C, NULL, NULL, NULL, uvSTG12_0002ACE0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, polySTG12_0002AC60, NULL, NULL, NULL, uvSTG12_0002AD00, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, polySTG12_0002AC6A, NULL, NULL, NULL, uvSTG12_0002AD10, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, polySTG12_0002AC7E, NULL, NULL, NULL, uvSTG12_0002AD30, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 4, polySTG12_0002AC92, NULL, NULL, NULL, uvSTG12_0002AD50, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 3, polySTG12_0002ACBA, NULL, NULL, NULL, uvSTG12_0002AD90, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0002AE60[] = {
	{ -20.58832f, 28, 59.70465f },
	{ -20.58832f, 68.5f, 59.70465f },
	{ 20.58838f, 28, 59.70471f },
	{ 20.58838f, 68.5f, 59.70471f },
	{ -12.58832f, 73.5f, 66.70465f },
	{ 12.58838f, 73.5f, 66.70471f },
	{ -12.58826f, 73.5f, 164.7047f },
	{ 12.58838f, 73.5f, 164.7047f },
	{ -6.588318f, 65.5f, 71.70465f },
	{ 6.588379f, 65.5f, 71.70471f },
	{ -6.588257f, 65.5f, 159.7048f },
	{ 6.588379f, 65.5f, 159.7046f },
	{ -20.58832f, 28, 172.7047f },
	{ -20.58832f, 68.5f, 172.7047f },
	{ 20.58838f, 28, 172.7047f },
	{ 20.58838f, 68.5f, 172.7047f },
	{ 15.44128f, 28, 59.70471f },
	{ -15.44122f, 28, 59.70465f },
	{ 15.44128f, 28, 172.7047f },
	{ -15.44122f, 28, 172.7047f },
	{ -20.58832f, 33.0625f, 59.70465f },
	{ -20.58832f, 33.0625f, 172.7047f },
	{ 20.58838f, 33.0625f, 59.70471f },
	{ 20.58838f, 33.0625f, 172.7047f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0002AF80[] = {
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.802466f, -0.5671009f, 0.185591f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.802467f, -0.5671f, 0.185592f },
	{ 0.057131f, -0.993392f, 0.099538f },
	{ -0.057132f, -0.993392f, 0.09953699f },
	{ 0.062955f, -0.995582f, -0.06966799f },
	{ -0.062957f, -0.995582f, -0.069666f },
	{ -0.352377f, -0.84962f, -0.392398f },
	{ 0.352379f, -0.84962f, -0.392397f },
	{ -0.352374f, -0.849622f, 0.392397f },
	{ 0.352379f, -0.849622f, 0.392392f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.796509f, -0.577104f, -0.180343f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.796509f, -0.577104f, -0.180345f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0002B0A0 = { vertexSTG12_0002AE60, normalSTG12_0002AF80, LengthOfArray(vertexSTG12_0002AE60), meshlistSTG12_0002ADD0, matlistSTG12_0002ABC0, LengthOfArray(meshlistSTG12_0002ADD0), LengthOfArray(matlistSTG12_0002ABC0),{ 0.000031f, 50.75f, 116.2047f }, 60.90823f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0002B0C8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0002B0A0, 749.9999f, -68, -1029, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0002B0FC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 75, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 52, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002B188[] = {
	4, 3, 22, 15, 23,
	4, 13, 21, 1, 20
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002B19C[] = {
	4, 19, 18, 17, 16
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002B1A6[] = {
	4, 0, 20, 12, 21,
	4, 14, 23, 2, 22
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002B1BA[] = {
	4, 2, 16, 14, 18,
	4, 12, 19, 0, 17
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002B1CE[] = {
	4, 3, 15, 5, 7,
	4, 13, 1, 6, 4,
	4, 15, 13, 7, 6,
	4, 1, 3, 4, 5
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002B1F6[] = {
	4, 11, 6, 10, 4,
	0x8000u | 8, 6, 7, 11, 9, 10, 8, 4, 5,
	4, 7, 9, 5, 8
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002B21C[] = {
	{ 2032, -253 },
	{ 2032, 253 },
	{ 7, -253 },
	{ 7, 253 },
	{ 7, -253 },
	{ 7, 253 },
	{ 2032, -253 },
	{ 2032, 253 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002B23C[] = {
	{ 510, 254 },
	{ 0, 255 },
	{ 510, -1784 },
	{ 0, -1784 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002B24C[] = {
	{ 31, 253 },
	{ 31, 1 },
	{ 4048, 253 },
	{ 4048, 1 },
	{ 4048, 253 },
	{ 4048, 1 },
	{ 31, 253 },
	{ 31, 1 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002B26C[] = {
	{ 4048, 253 },
	{ 4048, 1 },
	{ 31, 253 },
	{ 31, 1 },
	{ 4048, 253 },
	{ 4048, 1 },
	{ 31, 253 },
	{ 31, 1 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002B28C[] = {
	{ 3034, 253 },
	{ 23, 253 },
	{ 3034, 1 },
	{ 23, 1 },
	{ 3034, 253 },
	{ 23, 253 },
	{ 3034, 1 },
	{ 23, 1 },
	{ 5, 253 },
	{ 757, 253 },
	{ 5, 1 },
	{ 757, 1 },
	{ 5, 253 },
	{ 757, 253 },
	{ 5, 1 },
	{ 757, 1 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002B2CC[] = {
	{ 91, -661 },
	{ 506, -757 },
	{ 418, -661 },
	{ 506, 247 },
	{ 506, -757 },
	{ 3, -757 },
	{ 91, -661 },
	{ 91, 151 },
	{ 418, -661 },
	{ 418, 151 },
	{ 506, 247 },
	{ 3, 247 },
	{ 3, -757 },
	{ 91, 151 },
	{ 3, 247 },
	{ 418, 151 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0002B30C[] = {
	{ NJD_MESHSET_TRIMESH | 1, 2, polySTG12_0002B188, NULL, NULL, NULL, uvSTG12_0002B21C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, polySTG12_0002B19C, NULL, NULL, NULL, uvSTG12_0002B23C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, polySTG12_0002B1A6, NULL, NULL, NULL, uvSTG12_0002B24C, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, polySTG12_0002B1BA, NULL, NULL, NULL, uvSTG12_0002B26C, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 4, polySTG12_0002B1CE, NULL, NULL, NULL, uvSTG12_0002B28C, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 3, polySTG12_0002B1F6, NULL, NULL, NULL, uvSTG12_0002B2CC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0002B39C[] = {
	{ -20.58832f, 29, 59.70465f },
	{ -20.58832f, 69.5f, 59.70465f },
	{ 20.58838f, 29, 59.70471f },
	{ 20.58838f, 69.5f, 59.70471f },
	{ -14.58832f, 73.5f, 65.70465f },
	{ 14.58838f, 73.5f, 65.70471f },
	{ -14.58832f, 73.5f, 175.7049f },
	{ 14.58838f, 73.5f, 175.7049f },
	{ -9.588318f, 66.5f, 70.70465f },
	{ 9.588379f, 66.5f, 70.70471f },
	{ -9.588318f, 66.5f, 170.7049f },
	{ 9.588379f, 66.5f, 170.7049f },
	{ -20.58832f, 30, 188.7047f },
	{ -20.58832f, 69.5f, 188.7047f },
	{ 20.58838f, 30, 188.7047f },
	{ 20.58838f, 69.5f, 188.7047f },
	{ 15.44129f, 29, 59.7047f },
	{ -15.44123f, 29, 59.70466f },
	{ 15.44129f, 30, 188.7047f },
	{ -15.44123f, 30, 188.7047f },
	{ -20.58832f, 34.0625f, 59.70465f },
	{ -20.58832f, 34.9375f, 188.7047f },
	{ 20.58838f, 34.0625f, 59.70471f },
	{ 20.58838f, 34.9375f, 188.7047f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0002B4BC[] = {
	{ 0.7053559f, 0.708832f, -0.005495f },
	{ 0.800903f, -0.568065f, 0.189355f },
	{ -0.705355f, 0.708833f, -0.005495f },
	{ -0.800903f, -0.5680659f, 0.189356f },
	{ 0.081044f, -0.99341f, 0.081044f },
	{ -0.081044f, -0.99341f, 0.081043f },
	{ 0.114452f, -0.992186f, 0.049682f },
	{ -0.114452f, -0.992186f, 0.049682f },
	{ -0.364719f, -0.856714f, -0.36472f },
	{ 0.36472f, -0.856714f, -0.364719f },
	{ -0.364719f, -0.856715f, 0.364719f },
	{ 0.364719f, -0.856714f, 0.364719f },
	{ 0.708845f, 0.7053429f, -0.005468f },
	{ 0.764164f, -0.6295969f, -0.140217f },
	{ -0.708845f, 0.7053429f, -0.005468f },
	{ -0.764165f, -0.6295969f, -0.140217f },
	{ 0, 0.99997f, -0.007752f },
	{ 0, 0.99997f, -0.007752f },
	{ 0, 0.99997f, -0.007752f },
	{ 0, 0.99997f, -0.007752f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0002B5DC = { vertexSTG12_0002B39C, normalSTG12_0002B4BC, LengthOfArray(vertexSTG12_0002B39C), meshlistSTG12_0002B30C, matlistSTG12_0002B0FC, LengthOfArray(meshlistSTG12_0002B30C), LengthOfArray(matlistSTG12_0002B0FC),{ 0.000031f, 51.25f, 124.2047f }, 68.22987f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0002B604 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0002B5DC, 749.9999f, 60, -1029, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0002B638[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 21, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 57, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002B688[] = {
	4, 44, 0, 43, 42,
	0x8000u | 5, 47, 46, 0, 45, 44,
	5, 47, 48, 0, 49, 42
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002B6AA[] = {
	0x8000u | 18, 5, 6, 40, 41, 35, 36, 30, 31, 25, 26, 20, 21, 15, 16, 10, 11, 5, 6,
	0x8000u | 14, 4, 5, 39, 40, 34, 35, 29, 30, 24, 25, 19, 20, 14, 15,
	4, 3, 8, 2, 7,
	0x8000u | 18, 4, 3, 9, 8, 14, 13, 19, 18, 24, 23, 29, 28, 34, 33, 39, 38, 4, 3,
	4, 9, 4, 10, 5,
	0x8000u | 14, 13, 12, 18, 17, 23, 22, 28, 27, 33, 32, 38, 37, 3, 2
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002B746[] = {
	5, 55, 64, 56, 65, 57,
	0x8000u | 10, 54, 63, 62, 1, 61, 60, 52, 51, 11, 6,
	0x8000u | 5, 54, 62, 53, 61, 52,
	0x8000u | 7, 41, 57, 36, 56, 31, 55, 26,
	0x8000u | 13, 21, 26, 54, 55, 63, 64, 1, 65, 58, 57, 50, 41, 6,
	6, 54, 21, 53, 16, 52, 11,
	4, 1, 59, 58, 50,
	6, 1, 60, 59, 51, 50, 6
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002B7C6[] = {
	0x8000u | 18, 42, 2, 49, 37, 48, 32, 47, 27, 46, 22, 45, 17, 44, 12, 43, 7, 42, 2
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002B7EC[] = {
	{ 298, 255 },
	{ 510, -255 },
	{ 721, 254 },
	{ 1020, -43 },
	{ 298, -764 },
	{ 0, -466 },
	{ 510, -255 },
	{ 0, -43 },
	{ 298, 255 },
	{ 298, -764 },
	{ 721, -765 },
	{ 510, -255 },
	{ 1020, -466 },
	{ 1020, -43 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002B824[] = {
	{ 4079, -1276 },
	{ 4079, -1784 },
	{ 3584, -1276 },
	{ 3584, -1784 },
	{ 3072, -1276 },
	{ 3072, -1784 },
	{ 2560, -1276 },
	{ 2560, -1784 },
	{ 2048, -1276 },
	{ 2048, -1784 },
	{ 1536, -1276 },
	{ 1536, -1784 },
	{ 1024, -1276 },
	{ 1024, -1784 },
	{ 512, -1276 },
	{ 512, -1784 },
	{ 0, -1276 },
	{ 0, -1784 },
	{ 4079, -757 },
	{ 4079, -1276 },
	{ 3584, -757 },
	{ 3584, -1276 },
	{ 3072, -757 },
	{ 3072, -1276 },
	{ 2560, -757 },
	{ 2560, -1276 },
	{ 2048, -757 },
	{ 2048, -1276 },
	{ 1536, -757 },
	{ 1536, -1276 },
	{ 1024, -757 },
	{ 1024, -1276 },
	{ 0, -264 },
	{ 512, -264 },
	{ 0, 255 },
	{ 512, 255 },
	{ 0, -757 },
	{ 0, -264 },
	{ 512, -757 },
	{ 512, -264 },
	{ 1024, -757 },
	{ 1024, -264 },
	{ 1536, -757 },
	{ 1536, -264 },
	{ 2048, -757 },
	{ 2048, -264 },
	{ 2560, -757 },
	{ 2560, -264 },
	{ 3072, -757 },
	{ 3072, -264 },
	{ 3584, -757 },
	{ 3584, -264 },
	{ 4079, -757 },
	{ 4079, -264 },
	{ 512, -757 },
	{ 0, -757 },
	{ 512, -1276 },
	{ 0, -1276 },
	{ 1024, -264 },
	{ 1024, 255 },
	{ 1536, -264 },
	{ 1536, 255 },
	{ 2048, -264 },
	{ 2048, 255 },
	{ 2560, -264 },
	{ 2560, 255 },
	{ 3072, -264 },
	{ 3072, 255 },
	{ 3584, -264 },
	{ 3584, 255 },
	{ 4079, -264 },
	{ 4079, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002B944[] = {
	{ 689, -1546 },
	{ 1189, -1157 },
	{ 1347, -1546 },
	{ 1433, -924 },
	{ 1815, -1085 },
	{ 224, -1085 },
	{ 848, -1157 },
	{ 605, -924 },
	{ 1020, -757 },
	{ 605, -592 },
	{ 848, -358 },
	{ 689, 22 },
	{ 1347, 22 },
	{ 1442, 254 },
	{ 2040, -342 },
	{ 224, -1085 },
	{ 605, -924 },
	{ 224, -436 },
	{ 605, -592 },
	{ 689, 22 },
	{ 2040, -1187 },
	{ 1815, -1085 },
	{ 1442, -1785 },
	{ 1347, -1546 },
	{ 597, -1784 },
	{ 689, -1546 },
	{ 0, -1187 },
	{ 0, -342 },
	{ 0, -1187 },
	{ 224, -1085 },
	{ 689, -1546 },
	{ 848, -1157 },
	{ 1189, -1157 },
	{ 1020, -757 },
	{ 1433, -924 },
	{ 1433, -592 },
	{ 1815, -1085 },
	{ 1815, -436 },
	{ 2040, -1187 },
	{ 2040, -342 },
	{ 224, -1085 },
	{ 0, -342 },
	{ 224, -436 },
	{ 597, 255 },
	{ 689, 22 },
	{ 1442, 254 },
	{ 1020, -757 },
	{ 1189, -358 },
	{ 1433, -592 },
	{ 1815, -436 },
	{ 1020, -757 },
	{ 848, -358 },
	{ 1189, -358 },
	{ 1347, 22 },
	{ 1815, -436 },
	{ 2040, -342 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002BA24[] = {
	{ 6070, 253 },
	{ 6070, 1 },
	{ 5400, 253 },
	{ 5400, 1 },
	{ 4635, 253 },
	{ 4635, 1 },
	{ 3872, 253 },
	{ 3872, 1 },
	{ 3107, 253 },
	{ 3107, 1 },
	{ 2342, 253 },
	{ 2342, 1 },
	{ 1577, 253 },
	{ 1577, 1 },
	{ 812, 253 },
	{ 812, 1 },
	{ 47, 253 },
	{ 47, 1 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0002BA6C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, polySTG12_0002B688, NULL, NULL, NULL, uvSTG12_0002B7EC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, polySTG12_0002B6AA, NULL, NULL, NULL, uvSTG12_0002B824, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 8, polySTG12_0002B746, NULL, NULL, NULL, uvSTG12_0002B944, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, polySTG12_0002B7C6, NULL, NULL, NULL, uvSTG12_0002BA24, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0002BACC[] = {
	{ 0, -84, 0.500031f },
	{ 0, 99, 0.196362f },
	{ 49.70465f, -75, -20.08832f },
	{ 49.70465f, -34.5f, -20.08832f },
	{ 49.70465f, 4, -20.08832f },
	{ 49.70465f, 44.5f, -20.08832f },
	{ 49.70465f, 84, -20.08832f },
	{ 20.58832f, -75, -49.20465f },
	{ 20.58832f, -34.5f, -49.20465f },
	{ 20.58832f, 4, -49.20465f },
	{ 20.58832f, 44.5f, -49.20465f },
	{ 20.58832f, 84, -49.20465f },
	{ -20.58838f, -75, -49.20468f },
	{ -20.58838f, -34.5f, -49.20468f },
	{ -20.58838f, 4, -49.20468f },
	{ -20.58838f, 44.5f, -49.20468f },
	{ -20.58838f, 84, -49.20468f },
	{ -49.70471f, -75, -20.08832f },
	{ -49.70471f, -34.5f, -20.08832f },
	{ -49.70471f, 4, -20.08832f },
	{ -49.70471f, 44.5f, -20.08832f },
	{ -49.70471f, 84, -20.08832f },
	{ -49.70471f, -75, 21.08839f },
	{ -49.70471f, -34.5f, 21.08839f },
	{ -49.70471f, 4, 21.08839f },
	{ -49.70471f, 44.5f, 21.08839f },
	{ -49.70471f, 84, 21.08839f },
	{ -20.58838f, -75, 50.2047f },
	{ -20.58838f, -34.5f, 50.2047f },
	{ -20.58838f, 4, 50.2047f },
	{ -20.58838f, 44.5f, 50.2047f },
	{ -20.58838f, 84, 50.2047f },
	{ 20.58832f, -75, 50.20472f },
	{ 20.58832f, -34.5f, 50.20472f },
	{ 20.58832f, 4, 50.20472f },
	{ 20.58832f, 44.5f, 50.20472f },
	{ 20.58832f, 84, 50.20472f },
	{ 49.70465f, -75, 21.08838f },
	{ 49.70465f, -34.5f, 21.08838f },
	{ 49.70465f, 4, 21.08838f },
	{ 49.70465f, 44.5f, 21.08838f },
	{ 49.70465f, 84, 21.08838f },
	{ 49.70465f, -84, -20.08832f },
	{ 20.58832f, -84, -49.20465f },
	{ -20.58838f, -84, -49.20468f },
	{ -49.70471f, -84, -20.08832f },
	{ -49.70471f, -84, 21.08839f },
	{ -20.58838f, -84, 50.2047f },
	{ 20.58832f, -84, 50.20472f },
	{ 49.70465f, -84, 21.08838f },
	{ 38.76961f, 94, -15.468f },
	{ 16.05888f, 94, -37.88757f },
	{ -16.05893f, 94, -37.8876f },
	{ -38.76965f, 94, -15.468f },
	{ -38.76965f, 94, 16.23805f },
	{ -16.05893f, 94, 38.6576f },
	{ 16.05888f, 94, 38.65762f },
	{ 38.76961f, 94, 16.23805f },
	{ 20.16022f, 99, -7.888683f },
	{ 8.350622f, 99, -19.32267f },
	{ -8.35065f, 99, -19.32269f },
	{ -20.16023f, 99, -7.888683f },
	{ -20.16023f, 99, 8.281413f },
	{ -8.35065f, 99, 19.71539f },
	{ 8.350622f, 99, 19.7154f },
	{ 20.16022f, 99, 8.28141f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0002BDE4[] = {
	{ 0, 1, 0 },
	{ 0, -1, 0 },
	{ -0.92388f, 0, 0.382683f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.851674f, -0.386727f, 0.353685f },
	{ -0.50545f, 0, 0.862856f },
	{ -0.50545f, 0, 0.862856f },
	{ -0.50545f, 0, 0.862856f },
	{ -0.50545f, 0, 0.862856f },
	{ -0.352153f, -0.389688f, 0.8509589f },
	{ 0.50545f, 0, 0.862856f },
	{ 0.50545f, 0, 0.862856f },
	{ 0.50545f, 0, 0.862856f },
	{ 0.50545f, 0, 0.862856f },
	{ 0.351089f, -0.391887f, 0.850388f },
	{ 0.92388f, 0, 0.382683f },
	{ 0.92388f, 0, 0.382683f },
	{ 0.92388f, 0, 0.382683f },
	{ 0.92388f, 0, 0.382683f },
	{ 0.85111f, -0.38895f, 0.352605f },
	{ 0.923879f, 0, -0.382684f },
	{ 0.923879f, 0, -0.382684f },
	{ 0.923879f, 0, -0.382684f },
	{ 0.923879f, 0, -0.382684f },
	{ 0.8507929f, -0.388162f, -0.354234f },
	{ 0.382684f, 0, -0.923879f },
	{ 0.382684f, 0, -0.923879f },
	{ 0.382684f, 0, -0.923879f },
	{ 0.382683f, 0, -0.923879f },
	{ 0.351306f, -0.393017f, -0.849777f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.350256f, -0.395166f, -0.849214f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.850233f, -0.390364f, -0.353156f },
	{ -0.717284f, 0.630262f, 0.297109f },
	{ -0.297109f, 0.630262f, 0.717283f },
	{ 0.297109f, 0.630262f, 0.717284f },
	{ 0.717284f, 0.630262f, 0.297108f },
	{ 0.717283f, 0.630262f, -0.297109f },
	{ 0.297109f, 0.630263f, -0.717283f },
	{ -0.297108f, 0.630262f, -0.717284f },
	{ -0.717284f, 0.630262f, -0.297109f },
	{ -0.459311f, -0.867557f, 0.190731f },
	{ -0.189753f, -0.869961f, 0.455151f },
	{ 0.187482f, -0.871741f, 0.452679f },
	{ 0.456865f, -0.8693449f, 0.18845f },
	{ 0.45769f, -0.8689229f, -0.188395f },
	{ 0.188104f, -0.873174f, -0.449648f },
	{ -0.185862f, -0.874905f, -0.44721f },
	{ -0.455295f, -0.870662f, -0.186157f },
	{ -0.139837f, -0.988386f, 0.059493f },
	{ -0.057214f, -0.988459f, 0.140272f },
	{ 0.056606f, -0.988583f, 0.139642f },
	{ 0.139207f, -0.988512f, 0.05886f },
	{ 0.13925f, -0.988546f, -0.058192f },
	{ 0.056631f, -0.988833f, -0.13785f },
	{ -0.056036f, -0.988952f, -0.137235f },
	{ -0.138642f, -0.988667f, -0.057581f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0002C0FC = { vertexSTG12_0002BACC, normalSTG12_0002BDE4, LengthOfArray(vertexSTG12_0002BACC), meshlistSTG12_0002BA6C, matlistSTG12_0002B638, LengthOfArray(meshlistSTG12_0002BA6C), LengthOfArray(matlistSTG12_0002B638),{ -0.00031f, 7.5f, 0.5000229f }, 104.1288f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0002C124 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0002C0FC, 750, 85, -270.5002f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0002C158[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 57, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 21, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002C1A8[] = {
	4, 45, 25, 44, 43,
	5, 48, 49, 25, 42, 43,
	0x8000u | 5, 48, 47, 25, 46, 45
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002C1CA[] = {
	4, 52, 51, 7, 4,
	0x8000u | 10, 1, 2, 22, 23, 19, 20, 16, 17, 13, 14,
	6, 53, 52, 10, 7, 11, 8,
	6, 11, 14, 10, 13, 53, 54,
	0x8000u | 18, 14, 15, 11, 12, 8, 9, 5, 6, 2, 3, 23, 24, 20, 21, 17, 18, 14, 15,
	0x8000u | 10, 50, 1, 57, 22, 56, 19, 55, 16, 54, 13,
	10, 28, 26, 29, 27, 51, 50, 4, 1, 5, 2,
	0x8000u | 8, 51, 29, 52, 31, 53, 33, 54, 35,
	0x8000u | 6, 34, 35, 32, 33, 30, 31,
	0x8000u | 10, 35, 34, 37, 36, 39, 38, 41, 40, 27, 26,
	0x8000u | 10, 54, 35, 55, 37, 56, 39, 57, 41, 50, 27
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002C2A4[] = {
	0x8000u | 18, 44, 30, 43, 28, 42, 26, 49, 40, 48, 38, 47, 36, 46, 34, 45, 32, 44, 30
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002C2CA[] = {
	5, 64, 73, 65, 66, 58,
	10, 64, 72, 73, 0, 66, 67, 58, 59, 3, 6,
	4, 0, 68, 67, 59,
	0x8000u | 5, 63, 71, 62, 70, 61,
	6, 0, 69, 68, 60, 59, 6,
	0x8000u | 6, 64, 21, 65, 24, 58, 3,
	13, 21, 18, 64, 63, 72, 71, 0, 70, 69, 61, 60, 9, 6,
	7, 9, 61, 12, 62, 15, 63, 18
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002C34C[] = {
	{ 1020, -466 },
	{ 508, -255 },
	{ 721, -765 },
	{ 298, -764 },
	{ 298, 255 },
	{ 0, -43 },
	{ 508, -255 },
	{ 0, -466 },
	{ 298, -764 },
	{ 298, 255 },
	{ 721, 255 },
	{ 508, -255 },
	{ 1020, -43 },
	{ 1020, -466 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002C384[] = {
	{ 3072, -516 },
	{ 2560, -516 },
	{ 3072, -1004 },
	{ 2560, -1004 },
	{ 2048, -1004 },
	{ 2048, -1399 },
	{ 1536, -1004 },
	{ 1536, -1399 },
	{ 1024, -1004 },
	{ 1024, -1399 },
	{ 512, -1004 },
	{ 512, -1399 },
	{ 0, -1004 },
	{ 0, -1399 },
	{ 3584, -516 },
	{ 3072, -516 },
	{ 3584, -1004 },
	{ 3072, -1004 },
	{ 3584, -1399 },
	{ 3072, -1399 },
	{ 3584, -1399 },
	{ 4080, -1399 },
	{ 3584, -1004 },
	{ 4080, -1004 },
	{ 3584, -516 },
	{ 4080, -516 },
	{ 4080, -1399 },
	{ 4080, -1785 },
	{ 3584, -1399 },
	{ 3584, -1785 },
	{ 3072, -1399 },
	{ 3072, -1785 },
	{ 2560, -1399 },
	{ 2560, -1785 },
	{ 2048, -1399 },
	{ 2048, -1785 },
	{ 1536, -1399 },
	{ 1536, -1785 },
	{ 1024, -1399 },
	{ 1024, -1785 },
	{ 512, -1399 },
	{ 512, -1785 },
	{ 0, -1399 },
	{ 0, -1785 },
	{ 2048, -516 },
	{ 2048, -1004 },
	{ 1536, -516 },
	{ 1536, -1004 },
	{ 1024, -516 },
	{ 1024, -1004 },
	{ 512, -516 },
	{ 512, -1004 },
	{ 0, -516 },
	{ 0, -1004 },
	{ 2560, 254 },
	{ 2048, 254 },
	{ 2560, -140 },
	{ 2048, -140 },
	{ 2560, -516 },
	{ 2048, -516 },
	{ 2560, -1004 },
	{ 2048, -1004 },
	{ 2560, -1399 },
	{ 2048, -1399 },
	{ 2560, -516 },
	{ 2560, -140 },
	{ 3072, -516 },
	{ 3072, -140 },
	{ 3584, -516 },
	{ 3584, -140 },
	{ 4080, -516 },
	{ 4080, -140 },
	{ 4080, 254 },
	{ 4080, -140 },
	{ 3584, 254 },
	{ 3584, -140 },
	{ 3072, 254 },
	{ 3072, -140 },
	{ 0, -140 },
	{ 0, 254 },
	{ 512, -140 },
	{ 512, 254 },
	{ 1024, -140 },
	{ 1024, 254 },
	{ 1536, -140 },
	{ 1536, 254 },
	{ 2048, -140 },
	{ 2048, 254 },
	{ 0, -516 },
	{ 0, -140 },
	{ 512, -516 },
	{ 512, -140 },
	{ 1024, -516 },
	{ 1024, -140 },
	{ 1536, -516 },
	{ 1536, -140 },
	{ 2048, -516 },
	{ 2048, -140 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002C50C[] = {
	{ 6070, 253 },
	{ 6070, 1 },
	{ 5400, 253 },
	{ 5400, 1 },
	{ 4635, 253 },
	{ 4635, 1 },
	{ 3872, 253 },
	{ 3872, 1 },
	{ 3107, 253 },
	{ 3107, 1 },
	{ 2342, 253 },
	{ 2342, 1 },
	{ 1577, 253 },
	{ 1577, 1 },
	{ 812, 253 },
	{ 812, 1 },
	{ 47, 253 },
	{ 47, 1 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002C554[] = {
	{ 689, 30 },
	{ 589, -585 },
	{ 224, -434 },
	{ 589, -940 },
	{ 224, -1092 },
	{ 689, 30 },
	{ 840, -334 },
	{ 589, -585 },
	{ 1019, -765 },
	{ 589, -940 },
	{ 840, -1194 },
	{ 224, -1092 },
	{ 689, -1560 },
	{ 0, -1187 },
	{ 597, -1784 },
	{ 1019, -765 },
	{ 1195, -1194 },
	{ 840, -1194 },
	{ 689, -1560 },
	{ 1347, 30 },
	{ 1195, -334 },
	{ 1815, -434 },
	{ 1449, -585 },
	{ 1815, -1092 },
	{ 1019, -765 },
	{ 1449, -940 },
	{ 1195, -1194 },
	{ 1347, -1560 },
	{ 689, -1560 },
	{ 597, -1784 },
	{ 689, 30 },
	{ 597, 255 },
	{ 224, -434 },
	{ 0, -342 },
	{ 224, -1092 },
	{ 0, -1187 },
	{ 597, 255 },
	{ 1442, 255 },
	{ 689, 30 },
	{ 1347, 30 },
	{ 840, -334 },
	{ 1195, -334 },
	{ 1019, -765 },
	{ 1449, -585 },
	{ 1449, -940 },
	{ 1815, -1092 },
	{ 1347, -1560 },
	{ 1442, -1785 },
	{ 597, -1784 },
	{ 1442, -1785 },
	{ 1815, -1092 },
	{ 2040, -1187 },
	{ 1815, -434 },
	{ 2040, -342 },
	{ 1347, 30 },
	{ 1442, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0002C634[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, polySTG12_0002C1A8, NULL, NULL, NULL, uvSTG12_0002C34C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 11, polySTG12_0002C1CA, NULL, NULL, NULL, uvSTG12_0002C384, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, polySTG12_0002C2A4, NULL, NULL, NULL, uvSTG12_0002C50C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 8, polySTG12_0002C2CA, NULL, NULL, NULL, uvSTG12_0002C554, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0002C694[] = {
	{ 0, 124, 0 },
	{ -49.70465f, 29, 20.58838f },
	{ -49.70465f, 69.5f, 20.58838f },
	{ -49.70465f, 109, 20.58838f },
	{ -20.58832f, 29, 49.70465f },
	{ -20.58832f, 69.5f, 49.70465f },
	{ -20.58832f, 109, 49.70465f },
	{ 20.58838f, 29, 49.70471f },
	{ 20.58838f, 69.5f, 49.70471f },
	{ 20.58838f, 109, 49.70471f },
	{ 49.70471f, 29, 20.58838f },
	{ 49.70471f, 69.5f, 20.58838f },
	{ 49.70471f, 109, 20.58838f },
	{ 49.70471f, 29, -20.58838f },
	{ 49.70471f, 69.5f, -20.58838f },
	{ 49.70471f, 109, -20.58838f },
	{ 20.58838f, 29, -49.70471f },
	{ 20.58838f, 69.5f, -49.70471f },
	{ 20.58838f, 109, -49.70471f },
	{ -20.58832f, 29, -49.70471f },
	{ -20.58832f, 69.5f, -49.70471f },
	{ -20.58832f, 109, -49.70471f },
	{ -49.70465f, 29, -20.58838f },
	{ -49.70465f, 69.5f, -20.58838f },
	{ -49.70465f, 109, -20.58838f },
	{ 0, -109, 0 },
	{ -49.70465f, -100, 20.58838f },
	{ -49.70465f, -59.5f, 20.58838f },
	{ -20.58832f, -100, 49.70465f },
	{ -20.58832f, -59.5f, 49.70465f },
	{ 20.58838f, -100, 49.70471f },
	{ 20.58838f, -59.5f, 49.70471f },
	{ 49.70471f, -100, 20.58838f },
	{ 49.70471f, -59.5f, 20.58838f },
	{ 49.70471f, -100, -20.58838f },
	{ 49.70471f, -59.5f, -20.58838f },
	{ 20.58838f, -100, -49.70471f },
	{ 20.58838f, -59.5f, -49.70471f },
	{ -20.58832f, -100, -49.70471f },
	{ -20.58832f, -59.5f, -49.70471f },
	{ -49.70465f, -100, -20.58838f },
	{ -49.70465f, -59.5f, -20.58838f },
	{ -49.70465f, -109, 20.58838f },
	{ -20.58832f, -109, 49.70465f },
	{ 20.58838f, -109, 49.70471f },
	{ 49.70471f, -109, 20.58838f },
	{ 49.70471f, -109, -20.58838f },
	{ 20.58838f, -109, -49.70471f },
	{ -20.58832f, -109, -49.70471f },
	{ -49.70465f, -109, -20.58838f },
	{ -49.70465f, -21, 20.58838f },
	{ -20.58832f, -21, 49.70465f },
	{ 20.58838f, -21, 49.70471f },
	{ 49.70471f, -21, 20.58838f },
	{ 49.70471f, -21, -20.58838f },
	{ 20.58838f, -21, -49.70471f },
	{ -20.58832f, -21, -49.70471f },
	{ -49.70465f, -21, -20.58838f },
	{ -38.76963f, 119, 16.05894f },
	{ -16.05889f, 119, 38.76963f },
	{ 16.05894f, 119, 38.76967f },
	{ 38.76967f, 119, 16.05894f },
	{ 38.76967f, 119, -16.05894f },
	{ 16.05894f, 119, -38.76967f },
	{ -16.05889f, 119, -38.76967f },
	{ -38.76963f, 119, -16.05894f },
	{ -20.93562f, 124, 8.671831f },
	{ -8.671801f, 124, 20.93562f },
	{ 8.671831f, 124, 20.93562f },
	{ 20.93562f, 124, 8.671831f },
	{ 20.93562f, 124, -8.671831f },
	{ 8.671831f, 124, -20.93562f },
	{ -8.671801f, 124, -20.93562f },
	{ -20.93562f, 124, -8.671831f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0002CA0C[] = {
	{ 0, -1, 0 },
	{ 0.923879f, 0, -0.382684f },
	{ 0.923879f, 0, -0.382684f },
	{ 0.852194f, -0.386217f, -0.352991f },
	{ 0.505449f, 0, -0.862856f },
	{ 0.505449f, 0, -0.862856f },
	{ 0.35299f, -0.386217f, -0.852194f },
	{ -0.505449f, 0, -0.862856f },
	{ -0.505449f, 0, -0.862856f },
	{ -0.35299f, -0.386217f, -0.852194f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.852194f, -0.386217f, -0.35299f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.852194f, -0.386217f, 0.35299f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.35299f, -0.386217f, 0.852194f },
	{ 0.382683f, 0, 0.92388f },
	{ 0.382683f, 0, 0.92388f },
	{ 0.35299f, -0.386217f, 0.852194f },
	{ 0.92388f, 0, 0.382683f },
	{ 0.92388f, 0, 0.382683f },
	{ 0.852194f, -0.386217f, 0.35299f },
	{ 0, 1, 0 },
	{ 0.923879f, 0, -0.382684f },
	{ 0.923879f, 0, -0.382684f },
	{ 0.505449f, 0, -0.862856f },
	{ 0.505449f, 0, -0.862856f },
	{ -0.505449f, 0, -0.862856f },
	{ -0.505449f, 0, -0.862856f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.382683f, 0, 0.92388f },
	{ 0.382683f, 0, 0.92388f },
	{ 0.382683f, 0, 0.92388f },
	{ 0.92388f, 0, 0.382683f },
	{ 0.92388f, 0, 0.382683f },
	{ 0.717283f, 0.630262f, -0.297109f },
	{ 0.297109f, 0.630263f, -0.717283f },
	{ -0.297108f, 0.630262f, -0.717284f },
	{ -0.717284f, 0.630262f, -0.297109f },
	{ -0.717284f, 0.630262f, 0.297109f },
	{ -0.297109f, 0.630262f, 0.717284f },
	{ 0.297109f, 0.630262f, 0.717284f },
	{ 0.717284f, 0.630262f, 0.297109f },
	{ 0.923879f, 0, -0.382684f },
	{ 0.382684f, 0, -0.923879f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.382683f, 0, 0.92388f },
	{ 0.382683f, 0, 0.92388f },
	{ 0.92388f, 0, 0.382683f },
	{ 0.46278f, -0.8655f, -0.19169f },
	{ 0.19169f, -0.8655f, -0.46278f },
	{ -0.191689f, -0.8655f, -0.46278f },
	{ -0.462779f, -0.8655f, -0.191689f },
	{ -0.462779f, -0.8655f, 0.191689f },
	{ -0.191689f, -0.8655f, 0.462779f },
	{ 0.19169f, -0.8655f, 0.462779f },
	{ 0.46278f, -0.8655f, 0.19169f },
	{ 0.145224f, -0.987569f, -0.060154f },
	{ 0.060154f, -0.987569f, -0.145224f },
	{ -0.060153f, -0.987569f, -0.145224f },
	{ -0.145223f, -0.987569f, -0.060153f },
	{ -0.145223f, -0.987569f, 0.060153f },
	{ -0.060153f, -0.987569f, 0.145223f },
	{ 0.060153f, -0.987569f, 0.145223f },
	{ 0.145224f, -0.987569f, 0.060154f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0002CD84 = { vertexSTG12_0002C694, normalSTG12_0002CA0C, LengthOfArray(vertexSTG12_0002C694), meshlistSTG12_0002C634, matlistSTG12_0002C158, LengthOfArray(meshlistSTG12_0002C634), LengthOfArray(matlistSTG12_0002C158),{ 0.000031f, 7.5f, 0 }, 126.6602f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0002CDAC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0002CD84, 749.9999f, 60, -1029, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0002CDE0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 21, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002CE1C[] = {
	0x8000u | 10, 2, 1, 8, 5, 7, 4, 9, 6, 3, 0,
	0x8000u | 10, 16, 15, 23, 19, 21, 18, 22, 20, 17, 14
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002CE48[] = {
	10, 25, 26, 24, 27, 28, 29, 12, 13, 10, 11
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002CE60[] = {
	{ -3315, 510 },
	{ -3315, 0 },
	{ -2502, 510 },
	{ -2502, 0 },
	{ -1530, 510 },
	{ -1530, 0 },
	{ -556, 510 },
	{ -556, 0 },
	{ 255, 510 },
	{ 255, 0 },
	{ -3315, 510 },
	{ -3315, 0 },
	{ -2502, 510 },
	{ -2502, 0 },
	{ -1530, 510 },
	{ -1530, 0 },
	{ -556, 510 },
	{ -556, 0 },
	{ 255, 510 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002CEB0[] = {
	{ 4080, -765 },
	{ 4080, 255 },
	{ 3152, -765 },
	{ 3152, 255 },
	{ 2040, -765 },
	{ 2040, 255 },
	{ 927, -765 },
	{ 927, 255 },
	{ 0, -765 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0002CED8[] = {
	{ NJD_MESHSET_TRIMESH | 1, 2, polySTG12_0002CE1C, NULL, NULL, NULL, uvSTG12_0002CE60, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, polySTG12_0002CE48, NULL, NULL, NULL, uvSTG12_0002CEB0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0002CF08[] = {
	{ 220, 10, -59.99982f },
	{ -220, 10, -59.99963f },
	{ -220, -35, -59.99963f },
	{ 220, -35, -59.99982f },
	{ 0, 10, -59.99976f },
	{ -120, 10, -59.99969f },
	{ 120, 10, -59.99976f },
	{ 0, -35, -59.99976f },
	{ -120, -35, -59.99969f },
	{ 120, -35, -59.99976f },
	{ -220, -40, 39.99988f },
	{ -220, -40, -40.00012f },
	{ -120, -40, 39.99988f },
	{ -120, -40, -40.00012f },
	{ -220, 10, 59.99988f },
	{ 220, 10, 59.99988f },
	{ 220, -35, 59.99988f },
	{ -220, -35, 59.99988f },
	{ 0, 10, 59.99988f },
	{ 120, 10, 59.99988f },
	{ -120, 10, 59.99988f },
	{ 0, -35, 59.99988f },
	{ -120, -35, 59.99988f },
	{ 120, -35, 59.99988f },
	{ 120, -40, 39.99988f },
	{ 220, -40, 39.99988f },
	{ 220, -40, -40.00012f },
	{ 120, -40, -40.00012f },
	{ 0, -40, 39.99988f },
	{ 0, -40, -40.00012f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0002D070[] = {
	{ 0.000001f, 0, 1 },
	{ 0.000001f, 0, 1 },
	{ 0.000001f, 0, 1 },
	{ 0.000001f, 0, 1 },
	{ 0, 0, 1 },
	{ 0.000001f, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.000001f, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0002D1D8 = { vertexSTG12_0002CF08, normalSTG12_0002D070, LengthOfArray(vertexSTG12_0002CF08), meshlistSTG12_0002CED8, matlistSTG12_0002CDE0, LengthOfArray(meshlistSTG12_0002CED8), LengthOfArray(matlistSTG12_0002CDE0),{ 0, -15, 0.000031f }, 228.035f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0002D200 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0002D1D8, 1680, 40, -649.9999f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0002D234[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 22, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002D270[] = {
	0x8000u | 10, 2, 1, 8, 5, 7, 4, 9, 6, 3, 0,
	0x8000u | 10, 16, 15, 23, 19, 21, 18, 22, 20, 17, 14
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002D29C[] = {
	10, 25, 26, 24, 27, 28, 29, 12, 13, 10, 11
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002D2B4[] = {
	{ -3315, 510 },
	{ -3315, 0 },
	{ -2502, 510 },
	{ -2502, 0 },
	{ -1530, 510 },
	{ -1530, 0 },
	{ -556, 510 },
	{ -556, 0 },
	{ 255, 510 },
	{ 255, 0 },
	{ -3315, 510 },
	{ -3315, 0 },
	{ -2502, 510 },
	{ -2502, 0 },
	{ -1530, 510 },
	{ -1530, 0 },
	{ -556, 510 },
	{ -556, 0 },
	{ 255, 510 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002D304[] = {
	{ 4080, -765 },
	{ 4080, 255 },
	{ 3152, -765 },
	{ 3152, 255 },
	{ 2040, -765 },
	{ 2040, 255 },
	{ 927, -765 },
	{ 927, 255 },
	{ 0, -765 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0002D32C[] = {
	{ NJD_MESHSET_TRIMESH | 1, 2, polySTG12_0002D270, NULL, NULL, NULL, uvSTG12_0002D2B4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, polySTG12_0002D29C, NULL, NULL, NULL, uvSTG12_0002D304, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0002D35C[] = {
	{ 220, 10, -59.99982f },
	{ -220, 10, -59.99963f },
	{ -220, -35, -59.99963f },
	{ 220, -35, -59.99982f },
	{ 0, 10, -59.99976f },
	{ -120, 10, -59.99969f },
	{ 120, 10, -59.99976f },
	{ 0, -35, -59.99976f },
	{ -120, -35, -59.99969f },
	{ 120, -35, -59.99976f },
	{ -220, -40, 39.99988f },
	{ -220, -40, -40.00012f },
	{ -120, -40, 39.99988f },
	{ -120, -40, -40.00012f },
	{ -220, 10, 59.99988f },
	{ 220, 10, 59.99988f },
	{ 220, -35, 59.99988f },
	{ -220, -35, 59.99988f },
	{ 0, 10, 59.99988f },
	{ 120, 10, 59.99988f },
	{ -120, 10, 59.99988f },
	{ 0, -35, 59.99988f },
	{ -120, -35, 59.99988f },
	{ 120, -35, 59.99988f },
	{ 120, -40, 39.99988f },
	{ 220, -40, 39.99988f },
	{ 220, -40, -40.00012f },
	{ 120, -40, -40.00012f },
	{ 0, -40, 39.99988f },
	{ 0, -40, -40.00012f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0002D4C4[] = {
	{ 0.000001f, 0, 1 },
	{ 0.000001f, 0, 1 },
	{ 0.000001f, 0, 1 },
	{ 0.000001f, 0, 1 },
	{ 0, 0, 1 },
	{ 0.000001f, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.000001f, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0002D62C = { vertexSTG12_0002D35C, normalSTG12_0002D4C4, LengthOfArray(vertexSTG12_0002D35C), meshlistSTG12_0002D32C, matlistSTG12_0002D234, LengthOfArray(meshlistSTG12_0002D32C), LengthOfArray(matlistSTG12_0002D234),{ 0, -15, 0.000031f }, 228.035f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0002D654 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0002D62C, 1200, 40, -649.9999f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0002D688[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 59, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002D6B0[] = {
	10, 54, 55, 48, 49, 42, 43, 36, 37, 0, 1,
	10, 57, 59, 51, 53, 45, 47, 39, 41, 3, 5,
	10, 3, 4, 39, 40, 45, 46, 51, 52, 57, 58,
	10, 0, 2, 36, 38, 42, 44, 48, 50, 54, 56
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002D708[] = {
	10, 8, 9, 12, 13, 15, 16, 18, 19, 21, 22,
	10, 6, 10, 24, 26, 27, 29, 30, 32, 33, 35,
	10, 21, 23, 18, 20, 15, 17, 12, 14, 8, 11,
	10, 33, 34, 30, 31, 27, 28, 24, 25, 6, 7
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002D760[] = {
	{ 2550, 120 },
	{ 2550, 0 },
	{ 1968, 120 },
	{ 1968, 0 },
	{ 1275, 120 },
	{ 1275, 0 },
	{ 577, 120 },
	{ 577, 0 },
	{ 0, 120 },
	{ 0 },
	{ 2538, 126 },
	{ 2538, 254 },
	{ 1902, 126 },
	{ 1902, 254 },
	{ 1265, 126 },
	{ 1265, 254 },
	{ 625, 126 },
	{ 625, 254 },
	{ 9, 126 },
	{ 9, 254 },
	{ 9, 126 },
	{ 9, 0 },
	{ 625, 126 },
	{ 625, 0 },
	{ 1265, 126 },
	{ 1265, 0 },
	{ 1902, 126 },
	{ 1902, 0 },
	{ 2538, 126 },
	{ 2538, 0 },
	{ 0, 120 },
	{ 0, 255 },
	{ 577, 120 },
	{ 577, 255 },
	{ 1275, 120 },
	{ 1275, 255 },
	{ 1968, 120 },
	{ 1968, 255 },
	{ 2550, 120 },
	{ 2550, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002D800[] = {
	{ 4080, 204 },
	{ 4080, 0 },
	{ 3152, 204 },
	{ 3152, 0 },
	{ 2040, 204 },
	{ 2040, 0 },
	{ 927, 204 },
	{ 927, 0 },
	{ 0, 204 },
	{ 0 },
	{ 4080, 50 },
	{ 4080, 0 },
	{ 3152, 50 },
	{ 3152, 0 },
	{ 2040, 50 },
	{ 2040, 0 },
	{ 927, 50 },
	{ 927, 0 },
	{ 0, 50 },
	{ 0 },
	{ 0, 204 },
	{ 0, 255 },
	{ 927, 204 },
	{ 927, 255 },
	{ 2040, 204 },
	{ 2040, 255 },
	{ 3152, 204 },
	{ 3152, 255 },
	{ 4080, 204 },
	{ 4080, 255 },
	{ 0, 50 },
	{ 0, 255 },
	{ 927, 50 },
	{ 927, 255 },
	{ 2040, 50 },
	{ 2040, 255 },
	{ 3152, 50 },
	{ 3152, 255 },
	{ 4080, 50 },
	{ 4080, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0002D8A0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, polySTG12_0002D6B0, NULL, NULL, NULL, uvSTG12_0002D760, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, polySTG12_0002D708, NULL, NULL, NULL, uvSTG12_0002D800, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0002D8D0[] = {
	{ 20.00006f, 10, -39.99996f },
	{ 20.00006f, 30, -39.99996f },
	{ 20.00006f, 0, -59.99996f },
	{ 20.00006f, 10, 40.00003f },
	{ 20.00006f, 30, 40.00003f },
	{ 20.00006f, 0, 60.00003f },
	{ 20.00006f, -45, -39.99996f },
	{ 20.00006f, -45, -59.99996f },
	{ 20.00006f, -45, 40.00003f },
	{ 20.00006f, -45, 60.00003f },
	{ 20.00006f, -50, -39.99996f },
	{ 20.00006f, -50, 40.00003f },
	{ 120.0001f, -45, 40.00003f },
	{ 120.0001f, -45, 60.00003f },
	{ 120.0001f, -50, 40.00003f },
	{ 240, -45, 40.00003f },
	{ 240, -45, 60.00003f },
	{ 240, -50, 40.00003f },
	{ 360, -45, 40.00003f },
	{ 360, -45, 60.00003f },
	{ 360, -50, 40.00003f },
	{ 460, -45, 40.00003f },
	{ 460, -45, 60.00003f },
	{ 460, -50, 40.00003f },
	{ 120.0001f, -45, -39.99996f },
	{ 120.0001f, -45, -59.99996f },
	{ 120.0001f, -50, -39.99996f },
	{ 240, -45, -39.99996f },
	{ 240, -45, -59.99996f },
	{ 240, -50, -39.99996f },
	{ 360, -45, -39.99996f },
	{ 360, -45, -59.99996f },
	{ 360, -50, -39.99996f },
	{ 460, -45, -39.99996f },
	{ 460, -45, -59.99996f },
	{ 460, -50, -39.99996f },
	{ 120.0001f, 10, -39.99996f },
	{ 120.0001f, 30, -39.99996f },
	{ 120.0001f, 0, -59.99996f },
	{ 120.0001f, 10, 40.00003f },
	{ 120.0001f, 30, 40.00003f },
	{ 120.0001f, 0, 60.00003f },
	{ 240, 10, -39.99996f },
	{ 240, 30, -39.99996f },
	{ 240, 0, -59.99996f },
	{ 240, 10, 40.00003f },
	{ 240, 30, 40.00003f },
	{ 240, 0, 60.00003f },
	{ 360, 10, -39.99996f },
	{ 360, 30, -39.99996f },
	{ 360, 0, -59.99996f },
	{ 360, 10, 40.00003f },
	{ 360, 30, 40.00003f },
	{ 360, 0, 60.00003f },
	{ 460, 10, -39.99996f },
	{ 460, 30, -39.99996f },
	{ 460, 0, -59.99996f },
	{ 460, 10, 40.00003f },
	{ 460, 30, 40.00003f },
	{ 460, 0, 60.00003f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0002DBA0[] = {
	{ 0, -0.525731f, 0.850651f },
	{ 0, 0, 1 },
	{ 0, -0.8944269f, 0.447214f },
	{ 0, -0.525731f, -0.850651f },
	{ 0, 0, -1 },
	{ 0, -0.8944269f, -0.447214f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0, 1 },
	{ 0, -0.525731f, 0.850651f },
	{ 0, 0, 1 },
	{ 0, -0.8944269f, 0.447214f },
	{ 0, -0.525731f, -0.850651f },
	{ 0, 0, -1 },
	{ 0, -0.8944269f, -0.447214f },
	{ 0, -0.525731f, 0.850651f },
	{ 0, 0, 1 },
	{ 0, -0.8944269f, 0.447214f },
	{ 0, -0.525731f, -0.850651f },
	{ 0, 0, -1 },
	{ 0, -0.8944269f, -0.447214f },
	{ 0, -0.525731f, 0.850651f },
	{ 0, 0, 1 },
	{ 0, -0.8944269f, 0.447214f },
	{ 0, -0.525731f, -0.850651f },
	{ 0, 0, -1 },
	{ 0, -0.8944269f, -0.447214f },
	{ 0, -0.525731f, 0.850651f },
	{ 0, 0, 1 },
	{ 0, -0.8944269f, 0.447214f },
	{ 0, -0.525731f, -0.850651f },
	{ 0, 0, -1 },
	{ 0, -0.8944269f, -0.447214f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0002DE70 = { vertexSTG12_0002D8D0, normalSTG12_0002DBA0, LengthOfArray(vertexSTG12_0002D8D0), meshlistSTG12_0002D8A0, matlistSTG12_0002D688, LengthOfArray(meshlistSTG12_0002D8A0), LengthOfArray(matlistSTG12_0002D688),{ 240, -10, 0.000038f }, 228.0351f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0002DE98 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0002DE70, 1920, 50, -650, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0002DECC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 59, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002DEF4[] = {
	10, 54, 55, 48, 49, 42, 43, 36, 37, 0, 1,
	10, 57, 59, 51, 53, 45, 47, 39, 41, 3, 5,
	10, 3, 4, 39, 40, 45, 46, 51, 52, 57, 58,
	10, 0, 2, 36, 38, 42, 44, 48, 50, 54, 56
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002DF4C[] = {
	10, 8, 9, 12, 13, 15, 16, 18, 19, 21, 22,
	10, 6, 10, 24, 26, 27, 29, 30, 32, 33, 35,
	10, 21, 23, 18, 20, 15, 17, 12, 14, 8, 11,
	10, 33, 34, 30, 31, 27, 28, 24, 25, 6, 7
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002DFA4[] = {
	{ 2550, 120 },
	{ 2550, 0 },
	{ 1968, 120 },
	{ 1968, 0 },
	{ 1275, 120 },
	{ 1275, 0 },
	{ 577, 120 },
	{ 577, 0 },
	{ 0, 120 },
	{ 0 },
	{ 2538, 126 },
	{ 2538, 254 },
	{ 1902, 126 },
	{ 1902, 254 },
	{ 1265, 126 },
	{ 1265, 254 },
	{ 625, 126 },
	{ 625, 254 },
	{ 9, 126 },
	{ 9, 254 },
	{ 9, 126 },
	{ 9, 0 },
	{ 625, 126 },
	{ 625, 0 },
	{ 1265, 126 },
	{ 1265, 0 },
	{ 1902, 126 },
	{ 1902, 0 },
	{ 2538, 126 },
	{ 2538, 0 },
	{ 0, 120 },
	{ 0, 255 },
	{ 577, 120 },
	{ 577, 255 },
	{ 1275, 120 },
	{ 1275, 255 },
	{ 1968, 120 },
	{ 1968, 255 },
	{ 2550, 120 },
	{ 2550, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002E044[] = {
	{ 4080, 204 },
	{ 4080, 0 },
	{ 3152, 204 },
	{ 3152, 0 },
	{ 2040, 204 },
	{ 2040, 0 },
	{ 927, 204 },
	{ 927, 0 },
	{ 0, 204 },
	{ 0 },
	{ 4080, 50 },
	{ 4080, 0 },
	{ 3152, 50 },
	{ 3152, 0 },
	{ 2040, 50 },
	{ 2040, 0 },
	{ 927, 50 },
	{ 927, 0 },
	{ 0, 50 },
	{ 0 },
	{ 0, 204 },
	{ 0, 255 },
	{ 927, 204 },
	{ 927, 255 },
	{ 2040, 204 },
	{ 2040, 255 },
	{ 3152, 204 },
	{ 3152, 255 },
	{ 4080, 204 },
	{ 4080, 255 },
	{ 0, 50 },
	{ 0, 255 },
	{ 927, 50 },
	{ 927, 255 },
	{ 2040, 50 },
	{ 2040, 255 },
	{ 3152, 50 },
	{ 3152, 255 },
	{ 4080, 50 },
	{ 4080, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0002E0E4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, polySTG12_0002DEF4, NULL, NULL, NULL, uvSTG12_0002DFA4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, polySTG12_0002DF4C, NULL, NULL, NULL, uvSTG12_0002E044, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0002E114[] = {
	{ 20.00006f, 10, -39.99996f },
	{ 20.00006f, 30, -39.99996f },
	{ 20.00006f, 0, -59.99996f },
	{ 20.00006f, 10, 40.00003f },
	{ 20.00006f, 30, 40.00003f },
	{ 20.00006f, 0, 60.00003f },
	{ 20.00006f, -45, -39.99996f },
	{ 20.00006f, -45, -59.99996f },
	{ 20.00006f, -45, 40.00003f },
	{ 20.00006f, -45, 60.00003f },
	{ 20.00006f, -50, -39.99996f },
	{ 20.00006f, -50, 40.00003f },
	{ 120.0001f, -45, 40.00003f },
	{ 120.0001f, -45, 60.00003f },
	{ 120.0001f, -50, 40.00003f },
	{ 240, -45, 40.00003f },
	{ 240, -45, 60.00003f },
	{ 240, -50, 40.00003f },
	{ 360, -45, 40.00003f },
	{ 360, -45, 60.00003f },
	{ 360, -50, 40.00003f },
	{ 460, -45, 40.00003f },
	{ 460, -45, 60.00003f },
	{ 460, -50, 40.00003f },
	{ 120.0001f, -45, -39.99996f },
	{ 120.0001f, -45, -59.99996f },
	{ 120.0001f, -50, -39.99996f },
	{ 240, -45, -39.99996f },
	{ 240, -45, -59.99996f },
	{ 240, -50, -39.99996f },
	{ 360, -45, -39.99996f },
	{ 360, -45, -59.99996f },
	{ 360, -50, -39.99996f },
	{ 460, -45, -39.99996f },
	{ 460, -45, -59.99996f },
	{ 460, -50, -39.99996f },
	{ 120.0001f, 10, -39.99996f },
	{ 120.0001f, 30, -39.99996f },
	{ 120.0001f, 0, -59.99996f },
	{ 120.0001f, 10, 40.00003f },
	{ 120.0001f, 30, 40.00003f },
	{ 120.0001f, 0, 60.00003f },
	{ 240, 10, -39.99996f },
	{ 240, 30, -39.99996f },
	{ 240, 0, -59.99996f },
	{ 240, 10, 40.00003f },
	{ 240, 30, 40.00003f },
	{ 240, 0, 60.00003f },
	{ 360, 10, -39.99996f },
	{ 360, 30, -39.99996f },
	{ 360, 0, -59.99996f },
	{ 360, 10, 40.00003f },
	{ 360, 30, 40.00003f },
	{ 360, 0, 60.00003f },
	{ 460, 10, -39.99996f },
	{ 460, 30, -39.99996f },
	{ 460, 0, -59.99996f },
	{ 460, 10, 40.00003f },
	{ 460, 30, 40.00003f },
	{ 460, 0, 60.00003f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0002E3E4[] = {
	{ 0, -0.525731f, 0.850651f },
	{ 0, 0, 1 },
	{ 0, -0.8944269f, 0.447214f },
	{ 0, -0.525731f, -0.850651f },
	{ 0, 0, -1 },
	{ 0, -0.8944269f, -0.447214f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0, 1 },
	{ 0, -0.525731f, 0.850651f },
	{ 0, 0, 1 },
	{ 0, -0.8944269f, 0.447214f },
	{ 0, -0.525731f, -0.850651f },
	{ 0, 0, -1 },
	{ 0, -0.8944269f, -0.447214f },
	{ 0, -0.525731f, 0.850651f },
	{ 0, 0, 1 },
	{ 0, -0.8944269f, 0.447214f },
	{ 0, -0.525731f, -0.850651f },
	{ 0, 0, -1 },
	{ 0, -0.8944269f, -0.447214f },
	{ 0, -0.525731f, 0.850651f },
	{ 0, 0, 1 },
	{ 0, -0.8944269f, 0.447214f },
	{ 0, -0.525731f, -0.850651f },
	{ 0, 0, -1 },
	{ 0, -0.8944269f, -0.447214f },
	{ 0, -0.525731f, 0.850651f },
	{ 0, 0, 1 },
	{ 0, -0.8944269f, 0.447214f },
	{ 0, -0.525731f, -0.850651f },
	{ 0, 0, -1 },
	{ 0, -0.8944269f, -0.447214f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0002E6B4 = { vertexSTG12_0002E114, normalSTG12_0002E3E4, LengthOfArray(vertexSTG12_0002E114), meshlistSTG12_0002E0E4, matlistSTG12_0002DECC, LengthOfArray(meshlistSTG12_0002E0E4), LengthOfArray(matlistSTG12_0002DECC),{ 240, -10, 0.000038f }, 228.0351f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0002E6DC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0002E6B4, 1440, 50, -650, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0002E710[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 71, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002E724[] = {
	10, 8, 9, 6, 7, 4, 5, 2, 3, 0, 1
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002E73C[] = {
	{ 8160, -765 },
	{ 8159, 255 },
	{ 6305, -765 },
	{ 6305, 255 },
	{ 4079, -765 },
	{ 4079, 255 },
	{ 1854, -765 },
	{ 1854, 255 },
	{ 0, -765 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0002E764[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_0002E724, NULL, NULL, NULL, uvSTG12_0002E73C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0002E77C[] = {
	{ 20.00002f, 10, 40.00003f },
	{ 20.00002f, -45, 40.00003f },
	{ 120.0001f, 10, 40.00005f },
	{ 120.0001f, -45, 40.00005f },
	{ 240.0001f, 10, 40.00003f },
	{ 240.0001f, -45, 40.00003f },
	{ 360.0002f, 10, 40.00007f },
	{ 360.0002f, -45, 40.00007f },
	{ 460.0006f, 10, 40.00017f },
	{ 460.0002f, -45, 40.00017f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0002E7F4[] = {
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0.000001f, 0, -1 },
	{ 0.000001f, 0, -1 },
	{ 0.000001f, 0, -1 },
	{ 0.000001f, 0, -1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0002E86C = { vertexSTG12_0002E77C, normalSTG12_0002E7F4, LengthOfArray(vertexSTG12_0002E77C), meshlistSTG12_0002E764, matlistSTG12_0002E710, LengthOfArray(meshlistSTG12_0002E764), LengthOfArray(matlistSTG12_0002E710),{ 240.0003f, -17.5f, 40.0001f }, 220.0003f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0002E894 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0002E86C, 1920, 50, -650, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0002E8C8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 71, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002E8DC[] = {
	10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002E8F4[] = {
	{ 8159, 255 },
	{ 8159, -765 },
	{ 6305, 255 },
	{ 6305, -765 },
	{ 4079, 255 },
	{ 4079, -765 },
	{ 1854, 255 },
	{ 1854, -765 },
	{ 0, 255 },
	{ 0, -765 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0002E91C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_0002E8DC, NULL, NULL, NULL, uvSTG12_0002E8F4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0002E934[] = {
	{ 20.00005f, 10, -39.99997f },
	{ 20.00005f, -45, -39.99997f },
	{ 120, 10, -39.99994f },
	{ 120, -45, -39.99994f },
	{ 240, 10, -39.99997f },
	{ 240, -45, -39.99997f },
	{ 360, 10, -39.99992f },
	{ 360, -45, -39.99992f },
	{ 460, 10, -39.99983f },
	{ 460, -45, -39.99983f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0002E9AC[] = {
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.00001f, 0, 1 },
	{ -0.00001f, 0, 1 },
	{ -0.00001f, 0, 1 },
	{ -0.00001f, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0002EA24 = { vertexSTG12_0002E934, normalSTG12_0002E9AC, LengthOfArray(vertexSTG12_0002E934), meshlistSTG12_0002E91C, matlistSTG12_0002E8C8, LengthOfArray(meshlistSTG12_0002E91C), LengthOfArray(matlistSTG12_0002E8C8),{ 240, -17.5f, -39.9999f }, 220, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0002EA4C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0002EA24, 1920, 50, -650, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0002EA80[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 71, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002EA94[] = {
	10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002EAAC[] = {
	{ 8159, 255 },
	{ 8159, -765 },
	{ 6305, 255 },
	{ 6305, -765 },
	{ 4079, 255 },
	{ 4079, -765 },
	{ 1854, 255 },
	{ 1854, -765 },
	{ 0, 255 },
	{ 0, -765 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0002EAD4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_0002EA94, NULL, NULL, NULL, uvSTG12_0002EAAC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0002EAEC[] = {
	{ 20.00005f, 10, -39.99997f },
	{ 20.00005f, -45, -39.99997f },
	{ 120, 10, -39.99994f },
	{ 120, -45, -39.99994f },
	{ 240, 10, -39.99997f },
	{ 240, -45, -39.99997f },
	{ 360, 10, -39.99992f },
	{ 360, -45, -39.99992f },
	{ 460, 10, -39.99983f },
	{ 460, -45, -39.99983f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0002EB64[] = {
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.00001f, 0, 1 },
	{ -0.00001f, 0, 1 },
	{ -0.00001f, 0, 1 },
	{ -0.00001f, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0002EBDC = { vertexSTG12_0002EAEC, normalSTG12_0002EB64, LengthOfArray(vertexSTG12_0002EAEC), meshlistSTG12_0002EAD4, matlistSTG12_0002EA80, LengthOfArray(meshlistSTG12_0002EAD4), LengthOfArray(matlistSTG12_0002EA80),{ 240, -17.5f, -39.9999f }, 220, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0002EC04 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0002EBDC, 1440, 50, -650, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0002EC38[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 71, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002EC4C[] = {
	10, 8, 9, 6, 7, 4, 5, 2, 3, 0, 1
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002EC64[] = {
	{ 8160, -765 },
	{ 8159, 255 },
	{ 6305, -765 },
	{ 6305, 255 },
	{ 4079, -765 },
	{ 4079, 255 },
	{ 1854, -765 },
	{ 1854, 255 },
	{ 0, -765 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0002EC8C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_0002EC4C, NULL, NULL, NULL, uvSTG12_0002EC64, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0002ECA4[] = {
	{ 20.00002f, 10, 40.00003f },
	{ 20.00002f, -45, 40.00003f },
	{ 120.0001f, 10, 40.00005f },
	{ 120.0001f, -45, 40.00005f },
	{ 240.0001f, 10, 40.00003f },
	{ 240.0001f, -45, 40.00003f },
	{ 360.0002f, 10, 40.00007f },
	{ 360.0002f, -45, 40.00007f },
	{ 460.0006f, 10, 40.00017f },
	{ 460.0002f, -45, 40.00017f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0002ED1C[] = {
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0.000001f, 0, -1 },
	{ 0.000001f, 0, -1 },
	{ 0.000001f, 0, -1 },
	{ 0.000001f, 0, -1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0002ED94 = { vertexSTG12_0002ECA4, normalSTG12_0002ED1C, LengthOfArray(vertexSTG12_0002ECA4), meshlistSTG12_0002EC8C, matlistSTG12_0002EC38, LengthOfArray(meshlistSTG12_0002EC8C), LengthOfArray(matlistSTG12_0002EC38),{ 240.0003f, -17.5f, 40.0001f }, 220.0003f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0002EDBC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0002ED94, 1440, 50, -650, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0002EDF0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002EE40[] = {
	0x8000u | 6, 3, 1, 7, 6, 15, 14
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002EE4E[] = {
	0x8000u | 5, 11, 12, 5, 18, 13,
	0x8000u | 5, 17, 10, 19, 4, 16
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002EE66[] = {
	4, 11, 8, 5, 0,
	4, 9, 10, 2, 4
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002EE7A[] = {
	4, 4, 16, 7, 15,
	4, 6, 14, 5, 13,
	4, 2, 4, 3, 7,
	4, 1, 6, 0, 5
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002EEA4[] = {
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 29 },
	{ 0, 29 },
	{ 510, -255 },
	{ 0, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002EEBC[] = {
	{ 0, 254 },
	{ 0 },
	{ 1020, 254 },
	{ 884, 0 },
	{ 1020, 0 },
	{ 0 },
	{ 0, 254 },
	{ 884, 0 },
	{ 1020, 254 },
	{ 1020, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002EEE4[] = {
	{ 0 },
	{ 0, 254 },
	{ 1020, 0 },
	{ 1020, 254 },
	{ 0, 254 },
	{ 0 },
	{ 1020, 254 },
	{ 1020, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002EF04[] = {
	{ 0, 184 },
	{ 254, 184 },
	{ 0, 70 },
	{ 254, 70 },
	{ 0, 184 },
	{ 254, 184 },
	{ 0, 70 },
	{ 254, 70 },
	{ 0, 184 },
	{ 254, 184 },
	{ 0, 70 },
	{ 254, 70 },
	{ 0, 184 },
	{ 254, 184 },
	{ 0, 70 },
	{ 254, 70 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0002EF44[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_0002EE40, NULL, NULL, NULL, uvSTG12_0002EEA4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, polySTG12_0002EE4E, NULL, NULL, NULL, uvSTG12_0002EEBC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, polySTG12_0002EE66, NULL, NULL, NULL, uvSTG12_0002EEE4, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, polySTG12_0002EE7A, NULL, NULL, NULL, uvSTG12_0002EF04, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0002EFA4[] = {
	{ -140, 6, -710 },
	{ -140, 6, -700 },
	{ -60, 6, -710 },
	{ -60, 6, -700 },
	{ -60, 35, -710 },
	{ -140, 35, -710 },
	{ -140, 35, -700 },
	{ -60, 35, -700 },
	{ -140, 6, -860 },
	{ -60, 6, -860 },
	{ -60, 35, -860 },
	{ -140, 35, -860 },
	{ -140, 71.5f, -860 },
	{ -140, 71.5f, -710 },
	{ -140, 71.5f, -700 },
	{ -60, 71.5f, -700 },
	{ -60, 71.5f, -710 },
	{ -60, 71.5f, -860 },
	{ -140, 71.5f, -730 },
	{ -60, 71.5f, -730 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0002F094[] = {
	{ -1, 0, 0 },
	{ -0.7071069f, 0, 0.7071069f },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0002F184 = { vertexSTG12_0002EFA4, normalSTG12_0002F094, LengthOfArray(vertexSTG12_0002EFA4), meshlistSTG12_0002EF44, matlistSTG12_0002EDF0, LengthOfArray(meshlistSTG12_0002EF44), LengthOfArray(matlistSTG12_0002EDF0),{ -100, 38.75f, -780 }, 89.44272f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0002F1AC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0002F184, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0002F1E0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002F230[] = {
	0x8000u | 6, 4, 5, 9, 6, 16, 12
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002F23E[] = {
	0x8000u | 5, 8, 14, 7, 19, 13,
	0x8000u | 5, 15, 11, 18, 10, 17
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002F256[] = {
	4, 1, 11, 0, 10,
	4, 3, 7, 2, 8
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002F26A[] = {
	4, 6, 12, 7, 13,
	4, 5, 6, 3, 7,
	4, 10, 17, 9, 16,
	4, 0, 10, 4, 9
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002F294[] = {
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 25 },
	{ 0, 25 },
	{ 510, -255 },
	{ 0, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002F2AC[] = {
	{ 20, 254 },
	{ 33, 3 },
	{ 1020, 254 },
	{ 872, 3 },
	{ 1020, 0 },
	{ 12, 3 },
	{ 0, 254 },
	{ 860, 3 },
	{ 996, 254 },
	{ 996, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002F2D4[] = {
	{ 1020, 255 },
	{ 1020, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1020, 254 },
	{ 1020, 0 },
	{ 0, 254 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002F2F4[] = {
	{ 508, 186 },
	{ 1, 186 },
	{ 508, 70 },
	{ 1, 70 },
	{ 508, 186 },
	{ 1, 186 },
	{ 508, 70 },
	{ 1, 70 },
	{ 508, 186 },
	{ 1, 186 },
	{ 508, 70 },
	{ 1, 70 },
	{ 508, 186 },
	{ 1, 186 },
	{ 508, 70 },
	{ 1, 70 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0002F334[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_0002F230, NULL, NULL, NULL, uvSTG12_0002F294, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, polySTG12_0002F23E, NULL, NULL, NULL, uvSTG12_0002F2AC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, polySTG12_0002F256, NULL, NULL, NULL, uvSTG12_0002F2D4, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, polySTG12_0002F26A, NULL, NULL, NULL, uvSTG12_0002F2F4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0002F394[] = {
	{ -328.0733f, 6.000008f, -648.0731f },
	{ -435.6667f, 6.000057f, -755.6666f },
	{ -514.0446f, 6.000046f, -638.3657f },
	{ -372.1751f, 6.000008f, -579.5598f },
	{ -320.0733f, 6.000008f, -640.0731f },
	{ -363.1751f, 6.000008f, -575.5598f },
	{ -363.1751f, 35, -575.5598f },
	{ -372.1751f, 35, -579.5598f },
	{ -514.0446f, 35.00005f, -638.3657f },
	{ -320.0733f, 35, -640.0731f },
	{ -328.0733f, 35, -648.0731f },
	{ -435.6667f, 35.00006f, -755.6666f },
	{ -363.1751f, 70.5f, -575.5598f },
	{ -372.1751f, 70.5f, -579.5598f },
	{ -512.2346f, 70.00001f, -637.616f },
	{ -434.2814f, 70.00002f, -754.2813f },
	{ -320.0733f, 70.5f, -640.0731f },
	{ -328.0733f, 70.5f, -648.0731f },
	{ -342.9117f, 70, -662.9115f },
	{ -392.8543f, 70, -588.167f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0002F484[] = {
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0.000001f, -0.7071069f },
	{ -0.382914f, 0, 0.923784f },
	{ -0.394558f, 0, 0.918871f },
	{ 0.995182f, 0, -0.098042f },
	{ 0.278072f, 0, 0.96056f },
	{ 0.278072f, 0, 0.96056f },
	{ -0.394663f, 0.000001f, 0.918826f },
	{ -0.382863f, 0.000004f, 0.923805f },
	{ 0.995182f, 0, -0.098042f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.278072f, 0, 0.96056f },
	{ -0.395309f, 0, 0.918548f },
	{ -0.382809f, 0.000008f, 0.9238279f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.995182f, 0, -0.098042f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.383281f, 0.000006f, 0.923632f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0002F574 = { vertexSTG12_0002F394, normalSTG12_0002F484, LengthOfArray(vertexSTG12_0002F394), meshlistSTG12_0002F334, matlistSTG12_0002F1E0, LengthOfArray(meshlistSTG12_0002F334), LengthOfArray(matlistSTG12_0002F1E0),{ -417.059f, 38.25f, -665.6132f }, 132.3474f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0002F59C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0002F574, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0002F5D0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 62, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 62, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 69, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 75, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002F620[] = {
	4, 34, 32, 35, 33,
	4, 38, 36, 39, 37,
	4, 28, 30, 29, 31,
	4, 27, 24, 26, 25
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002F648[] = {
	4, 19, 0, 27, 24,
	4, 19, 27, 15, 26,
	4, 22, 17, 38, 36,
	4, 24, 0, 25, 9,
	4, 36, 17, 37, 18,
	4, 2, 14, 28, 30,
	4, 12, 34, 13, 35,
	4, 22, 38, 23, 39,
	4, 12, 7, 34, 32,
	4, 32, 7, 33, 8,
	4, 2, 28, 3, 29,
	4, 30, 14, 31, 20,
	4, 9, 15, 25, 26,
	4, 31, 20, 29, 3,
	4, 33, 8, 35, 13,
	4, 37, 18, 39, 23
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002F6E8[] = {
	4, 11, 6, 12, 7,
	4, 21, 16, 22, 17,
	4, 10, 4, 19, 0,
	4, 1, 5, 2, 14
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002F710[] = {
	{ 0, 254 },
	{ 253, 254 },
	{ 0, -765 },
	{ 253, -765 },
	{ 1, 254 },
	{ 255, 254 },
	{ 1, -765 },
	{ 255, -765 },
	{ 253, 254 },
	{ 0, 254 },
	{ 253, -765 },
	{ 0, -765 },
	{ 255, 254 },
	{ 1, 254 },
	{ 255, -765 },
	{ 1, -765 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002F750[] = {
	{ 251, -749 },
	{ 251, 239 },
	{ 3, -749 },
	{ 3, 239 },
	{ 255, 255 },
	{ 0, 132 },
	{ 255, -3825 },
	{ 0, -3700 },
	{ 251, -749 },
	{ 251, 239 },
	{ 3, -749 },
	{ 3, 239 },
	{ 0, 132 },
	{ 255, 255 },
	{ 0, -3700 },
	{ 255, -3825 },
	{ 0, 132 },
	{ 255, 255 },
	{ 0, -3700 },
	{ 255, -3825 },
	{ 251, -749 },
	{ 251, 239 },
	{ 3, -749 },
	{ 3, 239 },
	{ 0, 255 },
	{ 254, 132 },
	{ 0, -3825 },
	{ 254, -3700 },
	{ 255, 255 },
	{ 0, 132 },
	{ 255, -3825 },
	{ 0, -3700 },
	{ 251, -749 },
	{ 251, 239 },
	{ 3, -749 },
	{ 3, 239 },
	{ 255, 132 },
	{ 0, 255 },
	{ 255, -3700 },
	{ 0, -3825 },
	{ 0, 255 },
	{ 254, 132 },
	{ 0, -3825 },
	{ 254, -3700 },
	{ 254, 132 },
	{ 0, 255 },
	{ 254, -3700 },
	{ 0, -3825 },
	{ 251, -749 },
	{ 251, 239 },
	{ 3, -749 },
	{ 3, 239 },
	{ 3, -749 },
	{ 251, -749 },
	{ 3, 239 },
	{ 251, 239 },
	{ 3, -749 },
	{ 251, -749 },
	{ 3, 239 },
	{ 251, 239 },
	{ 3, -749 },
	{ 251, -749 },
	{ 3, 239 },
	{ 251, 239 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002F850[] = {
	{ 508, 254 },
	{ 1, 254 },
	{ 506, 1 },
	{ 3, 1 },
	{ 508, 254 },
	{ 1, 254 },
	{ 506, 1 },
	{ 3, 1 },
	{ 508, 254 },
	{ 1, 254 },
	{ 506, 1 },
	{ 3, 1 },
	{ 508, 254 },
	{ 1, 254 },
	{ 506, 1 },
	{ 3, 1 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0002F890[] = {
	{ NJD_MESHSET_TRIMESH | 1, 4, polySTG12_0002F620, NULL, NULL, NULL, uvSTG12_0002F710, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 16, polySTG12_0002F648, NULL, NULL, NULL, uvSTG12_0002F750, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, polySTG12_0002F6E8, NULL, NULL, NULL, uvSTG12_0002F850, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0002F8D8[] = {
	{ -44.982f, 105.5f, 78.34017f },
	{ 44.98203f, 100, 78.34017f },
	{ 44.98203f, 105.5f, 78.34017f },
	{ 44.98203f, 200, 78.34017f },
	{ -44.982f, 100, 78.34017f },
	{ 27.34018f, 100, 95.98204f },
	{ 44.98204f, 100, 23.65985f },
	{ 44.98204f, 105.5f, 23.65985f },
	{ 44.98204f, 200, 23.65985f },
	{ -44.982f, 200, 78.34017f },
	{ -27.34013f, 100, 95.98204f },
	{ 27.34016f, 100, 6.018003f },
	{ 27.34016f, 105.5f, 6.018003f },
	{ 27.34016f, 200, 6.018003f },
	{ 27.34018f, 105.5f, 95.98204f },
	{ -27.34014f, 200, 95.98204f },
	{ -27.34015f, 100, 6.018007f },
	{ -27.34015f, 105.5f, 6.018007f },
	{ -27.34015f, 200, 6.018007f },
	{ -27.34014f, 105.5f, 95.98204f },
	{ 27.34018f, 200, 95.98204f },
	{ -44.98201f, 100, 23.65988f },
	{ -44.982f, 105.5f, 23.65988f },
	{ -44.982f, 200, 23.65988f },
	{ -48.9362f, 108.3285f, 85.54458f },
	{ -48.9362f, 197.1714f, 85.54458f },
	{ -34.54452f, 197.1714f, 99.93627f },
	{ -34.54452f, 108.3285f, 99.93627f },
	{ 48.81121f, 108.3285f, 85.54456f },
	{ 48.81121f, 197.1714f, 85.54456f },
	{ 34.41957f, 108.3285f, 99.93627f },
	{ 34.41957f, 197.1714f, 99.93627f },
	{ 48.71656f, 108.3285f, 16.55014f },
	{ 48.71656f, 197.1714f, 16.55014f },
	{ 34.32488f, 108.3285f, 2.158518f },
	{ 34.32488f, 197.1714f, 2.158518f },
	{ -34.54454f, 108.3285f, 2.063845f },
	{ -34.54454f, 197.1714f, 2.063845f },
	{ -48.93621f, 108.3285f, 16.45548f },
	{ -48.93621f, 197.1714f, 16.45548f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0002FAB8[] = {
	{ 0.861452f, 0.421345f, -0.283494f },
	{ -0.7071069f, 0, -0.707106f },
	{ -0.862292f, 0.416189f, -0.288512f },
	{ -0.74859f, -0.647261f, 0.143757f },
	{ 0.7071069f, 0.000001f, -0.7071069f },
	{ -0.7071069f, 0, -0.707106f },
	{ -0.707106f, 0, 0.7071069f },
	{ -0.862283f, 0.413654f, 0.292162f },
	{ -0.751391f, -0.645274f, -0.137963f },
	{ 0.742809f, -0.652096f, 0.151673f },
	{ 0.7071069f, 0.000001f, -0.7071069f },
	{ -0.707106f, 0, 0.7071069f },
	{ -0.286805f, 0.42082f, 0.860612f },
	{ 0.146483f, -0.652618f, 0.743392f },
	{ -0.283184f, 0.423295f, -0.860598f },
	{ -0.151675f, -0.6520979f, -0.742808f },
	{ 0.7071069f, -0.00001f, 0.707106f },
	{ 0.283495f, 0.421343f, 0.861453f },
	{ -0.151671f, -0.652095f, 0.74281f },
	{ 0.283493f, 0.421346f, -0.861452f },
	{ 0.15217f, -0.6544819f, -0.740606f },
	{ 0.7071069f, -0.00001f, 0.707106f },
	{ 0.861453f, 0.421344f, 0.283494f },
	{ 0.742809f, -0.652097f, -0.151674f },
	{ 0.867686f, 0.466765f, -0.171032f },
	{ 0.867685f, -0.466765f, -0.171032f },
	{ 0.171031f, -0.466765f, -0.867686f },
	{ 0.171031f, 0.466765f, -0.867686f },
	{ -0.866923f, 0.465782f, -0.177461f },
	{ -0.866922f, -0.465783f, -0.17746f },
	{ -0.168172f, 0.465143f, -0.869115f },
	{ -0.168172f, -0.465144f, -0.869114f },
	{ -0.867418f, 0.463752f, 0.180334f },
	{ -0.867418f, -0.463753f, 0.180334f },
	{ -0.170906f, 0.463107f, 0.8696679f },
	{ -0.170906f, -0.463107f, 0.8696679f },
	{ 0.171034f, 0.466765f, 0.867685f },
	{ 0.171034f, -0.466765f, 0.867685f },
	{ 0.867686f, 0.466765f, 0.171033f },
	{ 0.867685f, -0.466765f, 0.171033f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0002FC98 = { vertexSTG12_0002F8D8, normalSTG12_0002FAB8, LengthOfArray(vertexSTG12_0002F8D8), meshlistSTG12_0002F890, matlistSTG12_0002F5D0, LengthOfArray(meshlistSTG12_0002F890), LengthOfArray(matlistSTG12_0002F5D0),{ -0.062494f, 150, 51.00006f }, 69.9625f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0002FCC0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0002FC98, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0002FCF4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002FD30[] = {
	0x8000u | 6, 10, 11, 6, 7, 4, 5
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002FD3E[] = {
	4, 8, 9, 4, 5
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002FD48[] = {
	6, 3, 2, 1, 0, 11, 10
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002FD58[] = {
	{ 0, -255 },
	{ 1275, -255 },
	{ 0, -15 },
	{ 1275, -15 },
	{ 0, 255 },
	{ 1275, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002FD70[] = {
	{ 0, 255 },
	{ 4080, 255 },
	{ 0 },
	{ 4080, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0002FD80[] = {
	{ 255, -2295 },
	{ 255, 255 },
	{ 127, -2295 },
	{ 127, 255 },
	{ 0, -2295 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0002FD98[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_0002FD30, NULL, NULL, NULL, uvSTG12_0002FD58, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, polySTG12_0002FD3E, NULL, NULL, NULL, uvSTG12_0002FD70, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, polySTG12_0002FD48, NULL, NULL, NULL, uvSTG12_0002FD80, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0002FDE0[] = {
	{ -5, 40, -90 },
	{ -5, 40, 92 },
	{ 5, 40, -90 },
	{ 5, 40, 92 },
	{ -5, -34, -90 },
	{ -5, -34, 92 },
	{ -5, 0, -90 },
	{ -5, 0, 92 },
	{ -5, -40, -90 },
	{ -5, -40, 92 },
	{ -5, 30, -90 },
	{ -5, 30, 92 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0002FE70[] = {
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0002FF00 = { vertexSTG12_0002FDE0, normalSTG12_0002FE70, LengthOfArray(vertexSTG12_0002FDE0), meshlistSTG12_0002FD98, matlistSTG12_0002FCF4, LengthOfArray(meshlistSTG12_0002FD98), LengthOfArray(matlistSTG12_0002FCF4),{ 0, 0, 1 }, 99.40321f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0002FF28 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0002FF00, 65, 40, -500, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0002FF5C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 60, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 75, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 61, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 64, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 60, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0002FFC0[] = {
	4, 6, 1, 7, 2,
	4, 27, 26, 29, 28,
	4, 5, 10, 14, 19,
	4, 31, 30, 33, 32,
	4, 16, 11, 17, 12,
	4, 39, 38, 25, 24,
	4, 35, 34, 37, 36,
	4, 4, 21, 0, 22
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00030010[] = {
	4, 2, 36, 7, 34,
	4, 22, 28, 0, 26
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00030024[] = {
	4, 20, 39, 15, 25,
	4, 18, 31, 13, 33,
	4, 9, 27, 23, 29,
	4, 8, 35, 3, 37
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003004C[] = {
	4, 19, 24, 14, 38,
	4, 12, 32, 17, 30
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00030060[] = {
	{ 1506, 251 },
	{ 23, 251 },
	{ 1506, 3 },
	{ 23, 3 },
	{ 1529, 0 },
	{ 1529, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1516, 253 },
	{ 11, 253 },
	{ 1516, 1 },
	{ 11, 1 },
	{ 1530, 0 },
	{ 1530, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1516, 253 },
	{ 11, 253 },
	{ 1516, 1 },
	{ 11, 1 },
	{ 1529, 0 },
	{ 1529, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1530, 0 },
	{ 1530, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1506, 251 },
	{ 23, 251 },
	{ 1506, 3 },
	{ 23, 3 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000300E0[] = {
	{ 0, 255 },
	{ 0, -254 },
	{ 765, 255 },
	{ 765, -254 },
	{ 764, 255 },
	{ 764, -254 },
	{ 0, 255 },
	{ 0, -254 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00030100[] = {
	{ 0, -255 },
	{ 0, 255 },
	{ 764, -255 },
	{ 764, 255 },
	{ 765, -255 },
	{ 765, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 764, -255 },
	{ 764, 255 },
	{ 765, -255 },
	{ 765, 255 },
	{ 0, -255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00030140[] = {
	{ 764, 255 },
	{ 764, -254 },
	{ 0, 255 },
	{ 0, -254 },
	{ 0, 255 },
	{ 0, -254 },
	{ 765, 255 },
	{ 765, -254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00030160[] = {
	{ NJD_MESHSET_TRIMESH | 1, 8, polySTG12_0002FFC0, NULL, NULL, NULL, uvSTG12_00030060, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, polySTG12_00030010, NULL, NULL, NULL, uvSTG12_000300E0, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, polySTG12_00030024, NULL, NULL, NULL, uvSTG12_00030100, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, polySTG12_0003004C, NULL, NULL, NULL, uvSTG12_00030140, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_000301C0[] = {
	{ 44.98193f, 55.49997f, -245.8402f },
	{ -44.98211f, 50, -245.8401f },
	{ -44.98211f, 55.49997f, -245.8401f },
	{ -44.98211f, 150, -245.8401f },
	{ 44.98193f, 50, -245.8402f },
	{ -27.34027f, 50, -263.482f },
	{ -44.9821f, 50, -191.1598f },
	{ -44.9821f, 55.49997f, -191.1598f },
	{ -44.9821f, 150, -191.1598f },
	{ 44.98193f, 150, -245.8402f },
	{ 27.34004f, 50, -263.482f },
	{ -27.34022f, 50, -173.518f },
	{ -27.34022f, 55.49997f, -173.518f },
	{ -27.34022f, 150, -173.518f },
	{ -27.34027f, 55.49997f, -263.482f },
	{ 27.34005f, 150, -263.482f },
	{ 27.3401f, 50, -173.518f },
	{ 27.3401f, 55.49997f, -173.518f },
	{ 27.3401f, 150, -173.518f },
	{ 27.34005f, 55.49997f, -263.482f },
	{ -27.34027f, 150, -263.482f },
	{ 44.98194f, 50, -191.1599f },
	{ 44.98194f, 55.49997f, -191.1599f },
	{ 44.98194f, 150, -191.1599f },
	{ 27.34005f, 97.74998f, -263.482f },
	{ 27.34005f, 106.375f, -263.482f },
	{ 44.98193f, 97.74998f, -245.8402f },
	{ 44.98193f, 106.375f, -245.8402f },
	{ 44.98194f, 97.74998f, -191.1599f },
	{ 44.98194f, 106.375f, -191.1599f },
	{ 27.3401f, 97.74998f, -173.518f },
	{ 27.3401f, 106.375f, -173.518f },
	{ -27.34022f, 97.74998f, -173.518f },
	{ -27.34022f, 106.375f, -173.518f },
	{ -44.9821f, 97.74998f, -191.1598f },
	{ -44.9821f, 106.375f, -191.1598f },
	{ -44.98211f, 97.74998f, -245.8401f },
	{ -44.98211f, 106.375f, -245.8401f },
	{ -27.34027f, 97.74998f, -263.482f },
	{ -27.34027f, 106.375f, -263.482f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_000303A0[] = {
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 0, 0, 1 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00030580 = { vertexSTG12_000301C0, normalSTG12_000303A0, LengthOfArray(vertexSTG12_000301C0), meshlistSTG12_00030160, matlistSTG12_0002FF5C, LengthOfArray(meshlistSTG12_00030160), LengthOfArray(matlistSTG12_0002FF5C),{ -0.00084f, 100, -218.5f }, 67.2561f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_000305A8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00030580, 0, 50, -167.5f, 0, 0x7FFF, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_000305DC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 60, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 61, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 64, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 60, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 75, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00030640[] = {
	4, 2, 36, 7, 34,
	4, 22, 28, 0, 26
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00030654[] = {
	4, 20, 39, 15, 25,
	4, 18, 31, 13, 33,
	4, 9, 27, 23, 29,
	4, 8, 35, 3, 37
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003067C[] = {
	4, 19, 24, 14, 38,
	0x8000u | 12, 44, 17, 49, 41, 47, 30, 46, 32, 48, 40, 42, 12
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000306A0[] = {
	4, 6, 1, 7, 2,
	4, 27, 26, 29, 28,
	4, 5, 10, 14, 19,
	4, 31, 30, 33, 32,
	4, 16, 45, 17, 44,
	4, 39, 38, 25, 24,
	4, 35, 34, 37, 36,
	4, 4, 21, 0, 22,
	4, 12, 42, 11, 43
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000306FC[] = {
	{ 0, 255 },
	{ 0, -254 },
	{ 764, 255 },
	{ 764, -254 },
	{ 764, 255 },
	{ 764, -254 },
	{ 0, 255 },
	{ 0, -254 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003071C[] = {
	{ 0, -255 },
	{ 0, 255 },
	{ 764, -255 },
	{ 764, 255 },
	{ 765, -255 },
	{ 765, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 764, -255 },
	{ 764, 255 },
	{ 764, -255 },
	{ 764, 255 },
	{ 0, -255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003075C[] = {
	{ 764, 255 },
	{ 764, -254 },
	{ 0, 255 },
	{ 0, -254 },
	{ 608, 255 },
	{ 765, 255 },
	{ 608, -90 },
	{ 765, -84 },
	{ 537, -167 },
	{ 765, -254 },
	{ 223, -167 },
	{ 0, -254 },
	{ 153, -90 },
	{ 0, -84 },
	{ 153, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003079C[] = {
	{ 1516, 253 },
	{ 11, 253 },
	{ 1516, 1 },
	{ 11, 1 },
	{ 1516, 1 },
	{ 1516, 253 },
	{ 11, 1 },
	{ 11, 253 },
	{ 1516, 253 },
	{ 11, 253 },
	{ 1516, 1 },
	{ 11, 1 },
	{ 1516, 1 },
	{ 1516, 253 },
	{ 11, 1 },
	{ 11, 253 },
	{ 394, 253 },
	{ 11, 253 },
	{ 394, 1 },
	{ 11, 1 },
	{ 1516, 1 },
	{ 1516, 253 },
	{ 11, 1 },
	{ 11, 253 },
	{ 1516, 1 },
	{ 1516, 253 },
	{ 11, 1 },
	{ 11, 253 },
	{ 1516, 253 },
	{ 11, 253 },
	{ 1516, 1 },
	{ 11, 1 },
	{ 1157, 1 },
	{ 1516, 1 },
	{ 1157, 253 },
	{ 1516, 253 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0003082C[] = {
	{ NJD_MESHSET_TRIMESH | 1, 2, polySTG12_00030640, NULL, NULL, NULL, uvSTG12_000306FC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, polySTG12_00030654, NULL, NULL, NULL, uvSTG12_0003071C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, polySTG12_0003067C, NULL, NULL, NULL, uvSTG12_0003075C, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 9, polySTG12_000306A0, NULL, NULL, NULL, uvSTG12_0003079C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0003088C[] = {
	{ 44.98193f, -44.50003f, -245.8402f },
	{ -44.98211f, -50, -245.8401f },
	{ -44.98211f, -44.50003f, -245.8401f },
	{ -44.98211f, 50, -245.8401f },
	{ 44.98193f, -50, -245.8402f },
	{ -27.34027f, -50, -263.482f },
	{ -44.9821f, -50, -191.1598f },
	{ -44.9821f, -44.50003f, -191.1598f },
	{ -44.9821f, 50, -191.1598f },
	{ 44.98193f, 50, -245.8402f },
	{ 27.34004f, -50, -263.4821f },
	{ -27.34022f, -50, -173.518f },
	{ -27.34022f, -44.50003f, -173.518f },
	{ -27.34022f, 50, -173.518f },
	{ -27.34027f, -44.50003f, -263.482f },
	{ 27.34005f, 50, -263.482f },
	{ 27.3401f, -50, -173.518f },
	{ 27.3401f, -44.50003f, -173.518f },
	{ 27.3401f, 50, -173.518f },
	{ 27.34005f, -44.50003f, -263.482f },
	{ -27.34027f, 50, -263.482f },
	{ 44.98194f, -50, -191.1599f },
	{ 44.98194f, -44.50003f, -191.1599f },
	{ 44.98194f, 50, -191.1599f },
	{ 27.34005f, -2.250015f, -263.482f },
	{ 27.34005f, 6.374992f, -263.482f },
	{ 44.98193f, -2.250015f, -245.8402f },
	{ 44.98193f, 6.374992f, -245.8402f },
	{ 44.98194f, -2.250015f, -191.1599f },
	{ 44.98194f, 6.374992f, -191.1599f },
	{ 27.3401f, -2.250015f, -173.518f },
	{ 27.3401f, 6.374992f, -173.518f },
	{ -27.34022f, -2.250015f, -173.518f },
	{ -27.34022f, 6.374992f, -173.518f },
	{ -44.9821f, -2.250015f, -191.1598f },
	{ -44.9821f, 6.374992f, -191.1598f },
	{ -44.98211f, -2.250015f, -245.8401f },
	{ -44.98211f, 6.374992f, -245.8401f },
	{ -27.34027f, -2.250015f, -263.482f },
	{ -27.34027f, 6.374992f, -263.482f },
	{ -27.34022f, -16.37502f, -173.518f },
	{ 27.3401f, -16.37502f, -173.518f },
	{ -16.35005f, -44.5f, -173.5f },
	{ -17.35005f, -50, -173.5f },
	{ 16.14996f, -44.5f, -173.5f },
	{ 17.2267f, -50, -173.512f },
	{ -11.35006f, -9.5f, -173.5f },
	{ 11.14996f, -9.5f, -173.5f },
	{ -16.35005f, -15.89999f, -173.5f },
	{ 16.14996f, -15.89999f, -173.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00030AE4[] = {
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 0, 0, 1 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 0, 0, 1 },
	{ 0.001714f, 0, -0.999999f },
	{ 0.001675f, 0, -0.999999f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.001127f, 0, -0.999999f },
	{ -0.001367f, 0, -0.999999f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.000595f, -0.000477f, -1 },
	{ 0, 0, -1 },
	{ 0.000602f, -0.000483f, -1 },
	{ 0, 0, -1 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.001644f, -0.000196f, -0.999999f },
	{ -0.001616f, -0.000193f, -0.999999f },
	{ 0.001672f, 0, -0.999999f },
	{ 0.001714f, 0, -0.999999f },
	{ -0.001383f, 0, -0.999999f },
	{ -0.001127f, 0, -0.999999f },
	{ 0.000544f, -0.001797f, -0.999998f },
	{ -0.000533f, -0.001797f, -0.999998f },
	{ 0.001646f, -0.000241f, -0.999999f },
	{ -0.001618f, -0.000237f, -0.999999f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00030D3C = { vertexSTG12_0003088C, normalSTG12_00030AE4, LengthOfArray(vertexSTG12_0003088C), meshlistSTG12_0003082C, matlistSTG12_000305DC, LengthOfArray(meshlistSTG12_0003082C), LengthOfArray(matlistSTG12_000305DC),{ -0.00084f, 0, -218.491f }, 67.26211f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00030D64 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00030D3C, 0, 50, -167.5f, 0, 0x7FFF, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00030D98[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 55, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00030DD4[] = {
	0x8000u | 6, 10, 11, 2, 9, 17, 1,
	3, 10, 6, 8,
	3, 1, 0, 9,
	3, 9, 7, 11,
	0x8000u | 7, 4, 5, 16, 8, 3, 10, 2
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00030E0A[] = {
	4, 15, 14, 5, 4,
	4, 13, 12, 1, 0
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00030E20[] = {
	{ 637, -765 },
	{ 382, -765 },
	{ 416, -228 },
	{ 0, 40 },
	{ 382, -147 },
	{ 382, 255 },
	{ 637, -765 },
	{ 1019, -765 },
	{ 1019, 40 },
	{ 382, 255 },
	{ 0, 255 },
	{ 0, 40 },
	{ 0, 40 },
	{ 0, -765 },
	{ 382, -765 },
	{ 637, 255 },
	{ 1019, 255 },
	{ 637, -147 },
	{ 1019, 40 },
	{ 601, -228 },
	{ 637, -765 },
	{ 416, -228 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00030E78[] = {
	{ 757, 57 },
	{ 388, 57 },
	{ 757, 1 },
	{ 388, 1 },
	{ 388, 57 },
	{ 5, 57 },
	{ 388, 1 },
	{ 5, 1 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00030E98[] = {
	{ NJD_MESHSET_TRIMESH | 1, 5, polySTG12_00030DD4, NULL, NULL, NULL, uvSTG12_00030E20, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, polySTG12_00030E0A, NULL, NULL, NULL, uvSTG12_00030E78, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00030EC8[] = {
	{ -59.80175f, 4, 11.12429f },
	{ -17.51559f, 4, -4.266614f },
	{ -13.75682f, 40, -5.634692f },
	{ 6.916422f, 40, -13.15913f },
	{ 10.67519f, 4, -14.52722f },
	{ 52.96136f, 4, -29.91812f },
	{ 52.96136f, 80, -29.91812f },
	{ -59.80175f, 80, 11.12429f },
	{ 52.96135f, 20, -29.91813f },
	{ -59.80176f, 20, 11.12428f },
	{ 10.67519f, 80, -14.52721f },
	{ -17.51558f, 80, -4.266611f },
	{ -59.80175f, 0, 11.12429f },
	{ -17.51559f, 0, -4.266614f },
	{ 10.67519f, 0, -14.52722f },
	{ 52.96136f, 0, -29.91812f },
	{ 10.67519f, 34, -14.52722f },
	{ -17.51559f, 34, -4.266613f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00030FA0[] = {
	{ -0.34202f, 0, -0.939693f },
	{ -0.34202f, 0, -0.939693f },
	{ -0.34202f, 0, -0.939693f },
	{ -0.34202f, 0, -0.939693f },
	{ -0.34202f, 0, -0.939693f },
	{ -0.34202f, 0, -0.939693f },
	{ -0.34202f, 0, -0.939693f },
	{ -0.34202f, 0, -0.939693f },
	{ -0.34202f, 0, -0.939693f },
	{ -0.34202f, 0, -0.939693f },
	{ -0.34202f, 0, -0.939693f },
	{ -0.34202f, 0, -0.939693f },
	{ -0.34202f, 0, -0.939693f },
	{ -0.34202f, 0, -0.939693f },
	{ -0.34202f, 0, -0.939693f },
	{ -0.34202f, 0, -0.939693f },
	{ -0.34202f, 0, -0.939693f },
	{ -0.34202f, 0, -0.939693f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00031078 = { vertexSTG12_00030EC8, normalSTG12_00030FA0, LengthOfArray(vertexSTG12_00030EC8), meshlistSTG12_00030E98, matlistSTG12_00030D98, LengthOfArray(meshlistSTG12_00030E98), LengthOfArray(matlistSTG12_00030D98),{ -3.420198f, 40, -9.396918f }, 60, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_000310A0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00031078, 0, 0, 10, 0, 0xFFFFF1C8, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_000310D4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000310E8[] = {
	0x8000u | 14, 0, 7, 1, 8, 2, 9, 3, 10, 4, 11, 5, 12, 6, 13
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00031108[] = {
	{ 255, 254 },
	{ 255, 0 },
	{ 212, 255 },
	{ 212, 0 },
	{ 131, 255 },
	{ 131, 0 },
	{ 62, 254 },
	{ 62, 0 },
	{ 16, 254 },
	{ 16, 0 },
	{ 0, 254 },
	{ 0 },
	{ 16, 254 },
	{ 16, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00031140[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_000310E8, NULL, NULL, NULL, uvSTG12_00031108, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00031158[] = {
	{ -140, 6, -300 },
	{ -180, 5.99999f, -300 },
	{ -256.5367f, 5.999992f, -315.2241f },
	{ -321.4213f, 5.999994f, -358.5786f },
	{ -364.7759f, 5.999996f, -423.4633f },
	{ -380, 6, -499.9999f },
	{ -364.7759f, 6.000004f, -576.5366f },
	{ -140, 70, -300 },
	{ -180, 69.99998f, -300 },
	{ -256.5367f, 69.99998f, -315.2241f },
	{ -321.4213f, 69.99998f, -358.5786f },
	{ -364.7759f, 70, -423.4633f },
	{ -380, 70, -499.9999f },
	{ -364.7759f, 70, -576.5366f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00031200[] = {
	{ 0.645664f, -0.172177f, 0.743958f },
	{ 0.491046f, -0.196418f, 0.8487009f },
	{ 0.02723f, -0.251603f, 0.967447f },
	{ -0.581755f, -0.303089f, 0.754784f },
	{ -0.947774f, -0.289463f, 0.133922f },
	{ -0.8652419f, -0.230731f, -0.445107f },
	{ -0.593938f, -0.181397f, -0.783794f },
	{ 0.645664f, 0.172177f, 0.743958f },
	{ 0.491046f, 0.196418f, 0.8487009f },
	{ 0.02723f, 0.251603f, 0.967447f },
	{ -0.581755f, 0.303089f, 0.754784f },
	{ -0.947774f, 0.289463f, 0.133922f },
	{ -0.8652419f, 0.230731f, -0.445107f },
	{ -0.593938f, 0.181397f, -0.783794f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_000312A8 = { vertexSTG12_00031158, normalSTG12_00031200, LengthOfArray(vertexSTG12_00031158), meshlistSTG12_00031140, matlistSTG12_000310D4, LengthOfArray(meshlistSTG12_00031140), LengthOfArray(matlistSTG12_000310D4),{ -260, 37.99999f, -438.2683f }, 183.0795f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_000312D0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_000312A8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00031304[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00031318[] = {
	0x8000u | 6, 3, 0, 5, 2, 4, 1
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00031328[] = {
	{ 0 },
	{ 0, 254 },
	{ 127, 0 },
	{ 127, 254 },
	{ 255, 0 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00031340[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_00031318, NULL, NULL, NULL, uvSTG12_00031328, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00031358[] = {
	{ -180, 6.000005f, -600 },
	{ 60, 6, -600 },
	{ -60, 6.000002f, -600 },
	{ -180, 70, -600 },
	{ 60, 70, -600 },
	{ -60, 70, -600 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_000313A0[] = {
	{ -0.966235f, -0.257663f, 0 },
	{ 0.966235f, -0.257663f, 0 },
	{ 0, -1, 0 },
	{ -0.966235f, 0.257663f, 0 },
	{ 0.966235f, 0.257663f, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_000313E8 = { vertexSTG12_00031358, normalSTG12_000313A0, LengthOfArray(vertexSTG12_00031358), meshlistSTG12_00031340, matlistSTG12_00031304, LengthOfArray(meshlistSTG12_00031340), LengthOfArray(matlistSTG12_00031304),{ -60, 38, -600 }, 120, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00031410 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_000313E8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00031444[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00031458[] = {
	0x8000u | 18, 9, 0, 10, 1, 11, 2, 12, 3, 13, 4, 14, 5, 15, 6, 16, 7, 17, 8
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00031480[] = {
	{ 255, 0 },
	{ 255, 255 },
	{ 157, 0 },
	{ 157, 255 },
	{ 74, 0 },
	{ 74, 255 },
	{ 19, 0 },
	{ 19, 255 },
	{ 0 },
	{ 0, 255 },
	{ 19, 0 },
	{ 19, 254 },
	{ 74, 0 },
	{ 74, 254 },
	{ 157, 0 },
	{ 157, 254 },
	{ 255, 0 },
	{ 255, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_000314C8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_00031458, NULL, NULL, NULL, uvSTG12_00031480, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_000314E0[] = {
	{ -180, 5.999996f, -400 },
	{ -218.2683f, 5.999996f, -407.6121f },
	{ -250.7107f, 5.999997f, -429.2893f },
	{ -272.3879f, 5.999998f, -461.7317f },
	{ -280, 6, -500 },
	{ -272.388f, 6.000002f, -538.2683f },
	{ -250.7107f, 6.000004f, -570.7106f },
	{ -218.2683f, 6.000004f, -592.3879f },
	{ -180, 6.000005f, -600 },
	{ -180, 70, -400 },
	{ -218.2683f, 70, -407.6121f },
	{ -250.7107f, 70, -429.2893f },
	{ -272.3879f, 70, -461.7317f },
	{ -280, 70, -500 },
	{ -272.388f, 70, -538.2683f },
	{ -250.7107f, 70, -570.7106f },
	{ -218.2683f, 70, -592.3879f },
	{ -180, 70, -600 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_000315B8[] = {
	{ 0.429949f, -0.275168f, 0.859899f },
	{ 0.119134f, -0.324958f, 0.938195f },
	{ -0.25782f, -0.398356f, 0.880251f },
	{ -0.647525f, -0.488837f, 0.584593f },
	{ -0.842271f, -0.539054f, 0 },
	{ -0.647526f, -0.488837f, -0.584593f },
	{ -0.25782f, -0.398356f, -0.880251f },
	{ 0.119134f, -0.324958f, -0.938195f },
	{ 0.429949f, -0.275168f, -0.859899f },
	{ 0.429949f, 0.275168f, 0.859899f },
	{ 0.119134f, 0.324958f, 0.938195f },
	{ -0.25782f, 0.398356f, 0.880251f },
	{ -0.647525f, 0.488837f, 0.584593f },
	{ -0.842271f, 0.539054f, 0 },
	{ -0.647526f, 0.488837f, -0.584593f },
	{ -0.25782f, 0.398356f, -0.880251f },
	{ 0.119134f, 0.324958f, -0.938195f },
	{ 0.429949f, 0.275168f, -0.859899f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00031690 = { vertexSTG12_000314E0, normalSTG12_000315B8, LengthOfArray(vertexSTG12_000314E0), meshlistSTG12_000314C8, matlistSTG12_00031444, LengthOfArray(meshlistSTG12_000314C8), LengthOfArray(matlistSTG12_00031444),{ -230, 38, -500 }, 111.8034f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_000316B8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00031690, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_000316EC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00031700[] = {
	0x8000u | 6, 1, 4, 2, 5, 0, 3
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00031710[] = {
	{ 0, 255 },
	{ 0 },
	{ 127, 255 },
	{ 127, 0 },
	{ 255, 255 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00031728[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_00031700, NULL, NULL, NULL, uvSTG12_00031710, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00031740[] = {
	{ 60, 6, -400 },
	{ -180, 5.999996f, -400 },
	{ -60, 5.999998f, -400 },
	{ 60, 70, -400 },
	{ -180, 70, -400 },
	{ -60, 70, -400 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00031788[] = {
	{ 0.966235f, -0.257663f, 0 },
	{ -0.966235f, -0.257663f, 0 },
	{ 0, -1, 0 },
	{ 0.966235f, 0.257663f, 0 },
	{ -0.966235f, 0.257663f, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_000317D0 = { vertexSTG12_00031740, normalSTG12_00031788, LengthOfArray(vertexSTG12_00031740), meshlistSTG12_00031728, matlistSTG12_000316EC, LengthOfArray(meshlistSTG12_00031728), LengthOfArray(matlistSTG12_000316EC),{ -60, 38, -400 }, 120, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_000317F8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_000317D0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0003182C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00031840[] = {
	4, 2, 3, 0, 1
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003184C[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0003185C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_00031840, NULL, NULL, NULL, uvSTG12_0003184C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00031874[] = {
	{ 60, 70, -700 },
	{ 180, 70, -700 },
	{ 60, 6, -700 },
	{ 180, 6, -700 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_000318A4[] = {
	{ -0.8823529f, 0.470588f, 0 },
	{ 0.8823529f, 0.470588f, 0 },
	{ -0.8823529f, -0.470588f, 0 },
	{ 0.8823529f, -0.470588f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_000318D4 = { vertexSTG12_00031874, normalSTG12_000318A4, LengthOfArray(vertexSTG12_00031874), meshlistSTG12_0003185C, matlistSTG12_0003182C, LengthOfArray(meshlistSTG12_0003185C), LengthOfArray(matlistSTG12_0003182C),{ 120, 38, -700 }, 60, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_000318FC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_000318D4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00031930[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00031944[] = {
	4, 1, 2, 0, 3
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00031950[] = {
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00031960[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_00031944, NULL, NULL, NULL, uvSTG12_00031950, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00031978[] = {
	{ 300, 6, -700 },
	{ 300, 70, -700 },
	{ 180, 70, -700 },
	{ 180, 6, -700 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_000319A8[] = {
	{ 0.8823529f, -0.470588f, 0 },
	{ 0.8823529f, 0.470588f, 0 },
	{ -0.8823529f, 0.470588f, 0 },
	{ -0.8823529f, -0.470588f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_000319D8 = { vertexSTG12_00031978, normalSTG12_000319A8, LengthOfArray(vertexSTG12_00031978), meshlistSTG12_00031960, matlistSTG12_00031930, LengthOfArray(meshlistSTG12_00031960), LengthOfArray(matlistSTG12_00031930),{ 240, 38, -700 }, 60, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00031A00 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_000319D8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00031A34[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00031A48[] = {
	4, 0, 3, 1, 2
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00031A54[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00031A64[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_00031A48, NULL, NULL, NULL, uvSTG12_00031A54, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00031A7C[] = {
	{ -60, 6, -700 },
	{ -60, 70, -700 },
	{ 60, 70, -700 },
	{ 60, 6, -700 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00031AAC[] = {
	{ -0.8823529f, -0.470588f, 0 },
	{ -0.8823529f, 0.470588f, 0 },
	{ 0.8823529f, 0.470588f, 0 },
	{ 0.8823529f, -0.470588f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00031ADC = { vertexSTG12_00031A7C, normalSTG12_00031AAC, LengthOfArray(vertexSTG12_00031A7C), meshlistSTG12_00031A64, matlistSTG12_00031A34, LengthOfArray(meshlistSTG12_00031A64), LengthOfArray(matlistSTG12_00031A34),{ 0, 38, -700 }, 60, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00031B04 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00031ADC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00031B38[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 38, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 55, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00031BB0[] = {
	4, 16, 15, 17, 28,
	4, 35, 32, 3, 2,
	4, 7, 29, 6, 5,
	4, 10, 33, 11, 12,
	4, 1, 2, 0, 32,
	4, 15, 14, 28, 30,
	4, 29, 31, 5, 4,
	4, 13, 12, 34, 33,
	4, 48, 46, 28, 17,
	4, 51, 45, 31, 8,
	4, 47, 50, 18, 30,
	4, 44, 49, 7, 29,
	4, 50, 48, 30, 28,
	4, 49, 51, 29, 31,
	4, 60, 57, 34, 19,
	4, 61, 58, 35, 32,
	4, 59, 60, 33, 34,
	4, 55, 61, 9, 35,
	4, 58, 54, 32, 0,
	4, 56, 59, 10, 33
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00031C78[] = {
	4, 21, 4, 23, 25,
	4, 22, 24, 20, 14,
	4, 20, 13, 22, 26,
	4, 23, 27, 21, 3
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00031CA0[] = {
	4, 18, 30, 24, 14,
	4, 25, 4, 8, 31,
	4, 26, 13, 19, 34,
	4, 9, 35, 27, 3
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00031CC8[] = {
	0x8000u | 14, 6, 16, 5, 15, 4, 14, 21, 20, 3, 13, 2, 12, 1, 11,
	0x8000u | 8, 46, 44, 48, 49, 50, 51, 47, 45,
	0x8000u | 8, 57, 55, 60, 61, 59, 58, 56, 54
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00031D0A[] = {
	0x8000u | 5, 63, 56, 62, 54, 0,
	0x8000u | 6, 44, 46, 53, 17, 43, 42,
	3, 44, 52, 53,
	8, 17, 42, 16, 38, 6, 39, 7, 44,
	10, 62, 36, 0, 37, 1, 41, 11, 40, 10, 56,
	3, 39, 52, 44,
	3, 40, 63, 56
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00031D64[] = {
	{ 254, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
	{ 254, 0 },
	{ 254, 254 },
	{ 128, 0 },
	{ 128, 254 },
	{ 254, 254 },
	{ 254, 70 },
	{ 126, 254 },
	{ 126, 70 },
	{ 254, 70 },
	{ 254, 254 },
	{ 126, 70 },
	{ 126, 254 },
	{ 254, 254 },
	{ 254, 0 },
	{ 128, 254 },
	{ 128, 0 },
	{ 254, 0 },
	{ 254, 254 },
	{ 128, 0 },
	{ 128, 254 },
	{ 254, 254 },
	{ 254, 0 },
	{ 128, 254 },
	{ 128, 0 },
	{ 254, 254 },
	{ 254, 70 },
	{ 126, 254 },
	{ 126, 70 },
	{ 254, 0 },
	{ 254, 254 },
	{ 128, 0 },
	{ 128, 254 },
	{ 254, 254 },
	{ 254, 0 },
	{ 128, 254 },
	{ 128, 0 },
	{ 254, 70 },
	{ 254, 254 },
	{ 126, 70 },
	{ 126, 254 },
	{ 254, 0 },
	{ 254, 254 },
	{ 128, 0 },
	{ 128, 254 },
	{ 254, 254 },
	{ 254, 0 },
	{ 128, 254 },
	{ 128, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00031EA4[] = {
	{ 0, 208 },
	{ 254, 254 },
	{ 0, 68 },
	{ 254, 68 },
	{ 254, 68 },
	{ 0, 68 },
	{ 254, 208 },
	{ 0, 254 },
	{ 0, 208 },
	{ 254, 254 },
	{ 0, 68 },
	{ 254, 68 },
	{ 254, 68 },
	{ 0, 68 },
	{ 254, 208 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00031EE4[] = {
	{ 0, 70 },
	{ 0, 254 },
	{ 254, 70 },
	{ 254, 254 },
	{ 254, 70 },
	{ 254, 254 },
	{ 0, 70 },
	{ 0, 254 },
	{ 254, 70 },
	{ 254, 254 },
	{ 0, 70 },
	{ 0, 254 },
	{ 0, 70 },
	{ 0, 254 },
	{ 254, 70 },
	{ 254, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00031F24[] = {
	{ 7, 159 },
	{ 502, 159 },
	{ 7, -796 },
	{ 502, -796 },
	{ 7, -1753 },
	{ 502, -1753 },
	{ 7, -2900 },
	{ 502, -2900 },
	{ 7, -3856 },
	{ 502, -3856 },
	{ 7, -4813 },
	{ 502, -4813 },
	{ 7, -5769 },
	{ 502, -5769 },
	{ 502, -2757 },
	{ 7, -2757 },
	{ 502, -1705 },
	{ 7, -1705 },
	{ 502, -653 },
	{ 7, -653 },
	{ 502, 207 },
	{ 7, 207 },
	{ 7, 207 },
	{ 502, 207 },
	{ 7, -653 },
	{ 502, -653 },
	{ 7, -1705 },
	{ 502, -1705 },
	{ 7, -2757 },
	{ 502, -2757 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00031F9C[] = {
	{ 1516, 57 },
	{ 1516, 1 },
	{ 1276, 57 },
	{ 1276, 1 },
	{ 1016, 1 },
	{ 1516, 1 },
	{ 1276, 1 },
	{ 1276, 57 },
	{ 1037, 1 },
	{ 1037, 57 },
	{ 776, 57 },
	{ 1516, 1 },
	{ 1516, 57 },
	{ 1276, 57 },
	{ 1037, 1 },
	{ 776, 57 },
	{ 776, 1 },
	{ 513, 57 },
	{ 513, 1 },
	{ 251, 57 },
	{ 251, 1 },
	{ 11, 1 },
	{ 1276, 57 },
	{ 1016, 57 },
	{ 1016, 1 },
	{ 753, 57 },
	{ 753, 1 },
	{ 513, 57 },
	{ 513, 1 },
	{ 251, 57 },
	{ 251, 1 },
	{ 11, 1 },
	{ 251, 57 },
	{ 11, 57 },
	{ 11, 1 },
	{ 251, 57 },
	{ 11, 57 },
	{ 11, 1 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00032034[] = {
	{ NJD_MESHSET_TRIMESH | 1, 20, polySTG12_00031BB0, NULL, NULL, NULL, uvSTG12_00031D64, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, polySTG12_00031C78, NULL, NULL, NULL, uvSTG12_00031EA4, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, polySTG12_00031CA0, NULL, NULL, NULL, uvSTG12_00031EE4, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 3, polySTG12_00031CC8, NULL, NULL, NULL, uvSTG12_00031F24, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 7, polySTG12_00031D0A, NULL, NULL, NULL, uvSTG12_00031F9C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_000320AC[] = {
	{ -5, 12, -600 },
	{ -10, 12, -610 },
	{ -10, 37, -610 },
	{ -10, 60, -620 },
	{ -10, 60, -680 },
	{ -10, 37, -690 },
	{ -10, 12, -690 },
	{ -5, 12, -700 },
	{ -5, 80, -700 },
	{ -5, 80, -600 },
	{ -25, 12, -600 },
	{ -20, 12, -610 },
	{ -20, 37, -610 },
	{ -20, 60, -620 },
	{ -20, 60, -680 },
	{ -20, 37, -690 },
	{ -20, 12, -690 },
	{ -25, 12, -700 },
	{ -25, 80, -700 },
	{ -25, 80, -600 },
	{ -20, 65, -650 },
	{ -10, 65, -650 },
	{ -20, 80, -650 },
	{ -10, 80, -650 },
	{ -20, 80, -680 },
	{ -10, 80, -680 },
	{ -20, 80, -620 },
	{ -10, 80, -620 },
	{ -25, 37.04192f, -700 },
	{ -5, 37.04192f, -700 },
	{ -25, 60.02097f, -700 },
	{ -5, 60.02097f, -700 },
	{ -5, 37.04192f, -600 },
	{ -25, 37.04192f, -600 },
	{ -25, 60.02097f, -600 },
	{ -5, 60.02097f, -600 },
	{ -5, 6, -600 },
	{ -10, 6, -610 },
	{ -10, 6, -690 },
	{ -5, 6, -700 },
	{ -25, 6, -600 },
	{ -20, 6, -610 },
	{ -20, 6, -690 },
	{ -25, 6, -700 },
	{ -10, 12, -710 },
	{ -10, 80, -710 },
	{ -20, 12, -710 },
	{ -20, 80, -710 },
	{ -20, 37.04192f, -710 },
	{ -10, 37.04192f, -710 },
	{ -20, 60.02097f, -710 },
	{ -10, 60.02097f, -710 },
	{ -10, 6, -710 },
	{ -20, 6, -710 },
	{ -10, 12, -590 },
	{ -10, 80, -590 },
	{ -20, 12, -590 },
	{ -20, 80, -590 },
	{ -10, 37.04192f, -590 },
	{ -20, 37.04192f, -590 },
	{ -20, 60.02097f, -590 },
	{ -10, 60.02097f, -590 },
	{ -10, 6, -590 },
	{ -20, 6, -590 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_000323AC[] = {
	{ 1, 0, 0 },
	{ 0.525731f, 0, -0.850651f },
	{ 0.611299f, -0.135695f, -0.7796789f },
	{ 0.780704f, -0.42958f, -0.453832f },
	{ 0.753692f, -0.434145f, 0.493422f },
	{ 0.558493f, -0.145176f, 0.8167059f },
	{ 0.525731f, 0, 0.850651f },
	{ 1, 0, 0 },
	{ 0.994029f, 0, -0.109117f },
	{ 0.994029f, 0, 0.109117f },
	{ -1, 0, 0 },
	{ -0.525731f, 0, -0.850651f },
	{ -0.611299f, -0.135695f, -0.7796789f },
	{ -0.780704f, -0.429579f, -0.453832f },
	{ -0.753692f, -0.434145f, 0.493422f },
	{ -0.558493f, -0.145176f, 0.8167059f },
	{ -0.525731f, 0, 0.850651f },
	{ -1, 0, 0 },
	{ -0.994029f, 0, -0.109117f },
	{ -0.994029f, 0, 0.109117f },
	{ -0.7460499f, -0.66589f, 0 },
	{ 0.7460499f, -0.66589f, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -0.992508f, 0, 0.122183f },
	{ 0.992508f, 0, 0.122183f },
	{ -0.992508f, 0, -0.122183f },
	{ 0.992508f, 0, -0.122183f },
	{ -0.9996319f, -0.027124f, -0.000679f },
	{ 0.9996319f, -0.027124f, -0.000679f },
	{ -0.9980429f, -0.026439f, -0.056673f },
	{ 0.9980429f, -0.026439f, -0.056673f },
	{ 0.998316f, -0.01443f, 0.056187f },
	{ -0.998316f, -0.01443f, 0.056187f },
	{ -0.993916f, -0.014032f, 0.109247f },
	{ 0.993916f, -0.014032f, 0.109247f },
	{ 1, 0, 0 },
	{ 0.525731f, 0, -0.850651f },
	{ 0.525731f, 0, 0.850651f },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.525731f, 0, -0.850651f },
	{ -0.525731f, 0, 0.850651f },
	{ -1, 0, 0 },
	{ 0.525731f, 0, -0.850651f },
	{ 0.525731f, 0, -0.850651f },
	{ -0.525731f, 0, -0.850651f },
	{ -0.525731f, 0, -0.850651f },
	{ -0.525731f, 0, -0.850651f },
	{ 0.525731f, 0, -0.850651f },
	{ -0.525731f, 0, -0.850651f },
	{ 0.525731f, 0, -0.850651f },
	{ 0.525731f, 0, -0.850651f },
	{ -0.525731f, 0, -0.850651f },
	{ 0.525731f, 0, 0.850651f },
	{ 0.525731f, 0, 0.850651f },
	{ -0.525731f, 0, 0.850651f },
	{ -0.525731f, 0, 0.850651f },
	{ 0.525731f, 0, 0.850651f },
	{ -0.525731f, 0, 0.850651f },
	{ -0.525731f, 0, 0.850651f },
	{ 0.525731f, 0, 0.850651f },
	{ 0.525731f, 0, 0.850651f },
	{ -0.525731f, 0, 0.850651f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_000326AC = { vertexSTG12_000320AC, normalSTG12_000323AC, LengthOfArray(vertexSTG12_000320AC), meshlistSTG12_00032034, matlistSTG12_00031B38, LengthOfArray(meshlistSTG12_00032034), LengthOfArray(matlistSTG12_00031B38),{ -15, 43, -650 }, 70.49113f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_000326D4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_000326AC, -45, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00032708[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 38, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 54, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 54, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003276C[] = {
	0x8000u | 6, 10, 11, 0, 1, 2, 3,
	0x8000u | 6, 9, 8, 7, 6, 5, 4
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00032788[] = {
	4, 5, 3, 4, 2,
	4, 11, 9, 10, 8
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003279C[] = {
	4, 17, 12, 10, 0,
	4, 12, 13, 0, 2,
	4, 15, 16, 6, 8,
	4, 14, 15, 4, 6,
	4, 22, 21, 9, 7,
	4, 18, 23, 1, 11,
	4, 19, 18, 3, 1,
	4, 21, 20, 7, 5
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000327EC[] = {
	4, 16, 17, 8, 10,
	4, 13, 14, 2, 4,
	4, 23, 22, 11, 9,
	4, 20, 19, 5, 3
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00032814[] = {
	{ 254, 251 },
	{ 254, -761 },
	{ 0, 251 },
	{ 0, -761 },
	{ 254, 251 },
	{ 254, -761 },
	{ 254, -761 },
	{ 254, 251 },
	{ 0, -761 },
	{ 0, 251 },
	{ 254, -761 },
	{ 254, 251 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00032844[] = {
	{ 0, -1785 },
	{ 510, -1785 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, -1785 },
	{ 510, -1785 },
	{ 0, 255 },
	{ 510, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00032864[] = {
	{ 1, 251 },
	{ 1, -251 },
	{ 253, 251 },
	{ 253, -251 },
	{ 1, 251 },
	{ 1, -251 },
	{ 253, 251 },
	{ 253, -251 },
	{ 1, 251 },
	{ 1, -251 },
	{ 253, 251 },
	{ 253, -251 },
	{ 1, 251 },
	{ 1, -251 },
	{ 253, 251 },
	{ 253, -251 },
	{ 253, -251 },
	{ 253, 251 },
	{ 1, -251 },
	{ 1, 251 },
	{ 253, -251 },
	{ 253, 251 },
	{ 1, -251 },
	{ 1, 251 },
	{ 253, -251 },
	{ 253, 251 },
	{ 1, -251 },
	{ 1, 251 },
	{ 253, -251 },
	{ 253, 251 },
	{ 1, -251 },
	{ 1, 251 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000328E4[] = {
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00032924[] = {
	{ NJD_MESHSET_TRIMESH | 1, 2, polySTG12_0003276C, NULL, NULL, NULL, uvSTG12_00032814, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, polySTG12_00032788, NULL, NULL, NULL, uvSTG12_00032844, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 8, polySTG12_0003279C, NULL, NULL, NULL, uvSTG12_00032864, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 4, polySTG12_000327EC, NULL, NULL, NULL, uvSTG12_000328E4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00032984[] = {
	{ 10, 11, 0 },
	{ 10, 65, 0 },
	{ 3, 11, -8.660277f },
	{ 3, 65, -8.660277f },
	{ -3, 11, -8.660277f },
	{ -3, 65, -8.660277f },
	{ -10, 11, 0 },
	{ -10, 65, 0 },
	{ -3, 11, 8.660277f },
	{ -3, 65, 8.660277f },
	{ 3, 11, 8.660277f },
	{ 3, 65, 8.660277f },
	{ 10, 6, 0 },
	{ 3, 6, -8.660277f },
	{ -3, 6, -8.660277f },
	{ -10, 6, 0 },
	{ -3, 6, 8.660277f },
	{ 3, 6, 8.660277f },
	{ 10, 70, 0 },
	{ 3, 70, -8.660277f },
	{ -3, 70, -8.660277f },
	{ -10, 70, 0 },
	{ -3, 70, 8.660277f },
	{ 3, 70, 8.660277f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00032AA4[] = {
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.430919f, 0, -0.902391f },
	{ 0.430919f, 0, -0.902391f },
	{ -0.430919f, 0, -0.902391f },
	{ -0.430919f, 0, -0.902391f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.430919f, 0, 0.902391f },
	{ -0.430919f, 0, 0.902391f },
	{ 0.430919f, 0, 0.902391f },
	{ 0.430919f, 0, 0.902391f },
	{ 1, 0, 0 },
	{ 0.430919f, 0, -0.902391f },
	{ -0.430919f, 0, -0.902391f },
	{ -1, 0, 0 },
	{ -0.430919f, 0, 0.902391f },
	{ 0.430919f, 0, 0.902391f },
	{ 1, 0, 0 },
	{ 0.430919f, 0, -0.902391f },
	{ -0.430919f, 0, -0.902391f },
	{ -1, 0, 0 },
	{ -0.430919f, 0, 0.902391f },
	{ 0.430919f, 0, 0.902391f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00032BC4 = { vertexSTG12_00032984, normalSTG12_00032AA4, LengthOfArray(vertexSTG12_00032984), meshlistSTG12_00032924, matlistSTG12_00032708, LengthOfArray(meshlistSTG12_00032924), LengthOfArray(matlistSTG12_00032708),{ 0, 38, 0 }, 33.15117f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00032BEC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00032BC4, -180, 0, -600, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00032C20[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 46, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_ONE }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00032C34[] = {
	34, 0, 15, 1, 16, 2, 29, 3, 28, 4, 27, 5, 26, 6, 25, 7, 24, 8, 23, 9, 22, 10, 21, 11, 20, 30, 31, 12, 19, 13, 18, 14, 17, 0, 15
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00032C7C[] = {
	{ 12751, 255 },
	{ 12749, 0 },
	{ 12033, 255 },
	{ 12037, 0 },
	{ 11254, 255 },
	{ 11263, 0 },
	{ 10455, 255 },
	{ 10461, 0 },
	{ 9632, 255 },
	{ 9635, 0 },
	{ 8801, 255 },
	{ 8797, 0 },
	{ 7980, 255 },
	{ 7971, 0 },
	{ 7180, 255 },
	{ 7172, 0 },
	{ 6403, 255 },
	{ 6400, 0 },
	{ 5633, 255 },
	{ 5636, 0 },
	{ 4852, 255 },
	{ 4862, 0 },
	{ 4052, 255 },
	{ 4063, 0 },
	{ 3233, 255 },
	{ 3235, 0 },
	{ 2403, 255 },
	{ 2399, 0 },
	{ 1579, 255 },
	{ 1571, 0 },
	{ 780, 255 },
	{ 772, 0 },
	{ 3, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00032D04[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_00032C34, NULL, NULL, NULL, uvSTG12_00032C7C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00032D1C[] = {
	{ 186.2174f, 121.19f, -35.64728f },
	{ 186.2174f, 121.19f, 35.64728f },
	{ 157.8676f, 121.19f, 101.5148f },
	{ 105.4837f, 121.19f, 151.9277f },
	{ 37.04096f, 121.19f, 179.2108f },
	{ -37.04096f, 121.19f, 179.2108f },
	{ -105.4837f, 121.19f, 151.9277f },
	{ -157.8676f, 121.19f, 101.5149f },
	{ -186.2174f, 121.19f, 35.64728f },
	{ -186.2174f, 121.19f, -35.64721f },
	{ -157.8676f, 121.19f, -101.5148f },
	{ -105.4838f, 121.19f, -151.9277f },
	{ 37.04096f, 121.19f, -179.2108f },
	{ 105.4838f, 121.19f, -151.9277f },
	{ 157.8676f, 121.19f, -101.5147f },
	{ 187.8691f, 158.475f, -35.63944f },
	{ 187.8691f, 158.475f, 35.63944f },
	{ 159.2678f, 158.475f, -101.4924f },
	{ 106.4193f, 158.475f, -151.8943f },
	{ 37.3695f, 158.475f, -179.1715f },
	{ -106.4193f, 158.475f, -151.8943f },
	{ -159.2678f, 158.475f, -101.4925f },
	{ -187.8691f, 158.475f, -35.63938f },
	{ -187.8691f, 158.475f, 35.63944f },
	{ -159.2678f, 158.475f, 101.4925f },
	{ -106.4193f, 158.475f, 151.8943f },
	{ -37.3695f, 158.475f, 179.1715f },
	{ 37.3695f, 158.475f, 179.1715f },
	{ 106.4193f, 158.475f, 151.8943f },
	{ 159.2678f, 158.475f, 101.4925f },
	{ -37.04095f, 121.19f, -179.2107f },
	{ -37.36949f, 158.475f, -179.1715f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00032E9C[] = {
	{ 0.9783289f, -0.041667f, -0.20282f },
	{ 0.9783289f, -0.041667f, 0.20282f },
	{ 0.8202609f, -0.029769f, 0.571215f },
	{ 0.539683f, -0.013418f, 0.8417619f },
	{ 0.187481f, -0.00218f, 0.9822659f },
	{ -0.187481f, -0.00218f, 0.9822659f },
	{ -0.539682f, -0.013418f, 0.8417619f },
	{ -0.82026f, -0.029769f, 0.571215f },
	{ -0.9783289f, -0.041667f, 0.20282f },
	{ -0.9783289f, -0.041667f, -0.20282f },
	{ -0.8202609f, -0.029769f, -0.571214f },
	{ -0.539683f, -0.013418f, -0.841761f },
	{ 0.18748f, -0.00218f, -0.9822659f },
	{ 0.539683f, -0.013418f, -0.841761f },
	{ 0.8202609f, -0.029769f, -0.571214f },
	{ 0.978803f, -0.041707f, -0.200513f },
	{ 0.978803f, -0.041707f, 0.200513f },
	{ 0.8233939f, -0.029996f, -0.566676f },
	{ 0.544123f, -0.013635f, -0.8388939f },
	{ 0.189567f, -0.002216f, -0.981865f },
	{ -0.544123f, -0.013636f, -0.838895f },
	{ -0.8233939f, -0.029996f, -0.566676f },
	{ -0.978803f, -0.041707f, -0.200513f },
	{ -0.978803f, -0.041707f, 0.200513f },
	{ -0.8233939f, -0.029995f, 0.566677f },
	{ -0.544123f, -0.013635f, 0.838895f },
	{ -0.189568f, -0.002216f, 0.981865f },
	{ 0.189568f, -0.002216f, 0.981865f },
	{ 0.544123f, -0.013635f, 0.838895f },
	{ 0.8233939f, -0.029996f, 0.566677f },
	{ -0.18748f, -0.00218f, -0.9822659f },
	{ -0.189567f, -0.002216f, -0.981865f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0003301C = { vertexSTG12_00032D1C, normalSTG12_00032E9C, LengthOfArray(vertexSTG12_00032D1C), meshlistSTG12_00032D04, matlistSTG12_00032C20, LengthOfArray(meshlistSTG12_00032D04), LengthOfArray(matlistSTG12_00032C20),{ 0, 139.8325f, 0 }, 259.6368f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00033044 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0003301C, 750, -0.000109f, -650, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00033078[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000330A0[] = {
	3, 47, 0, 46,
	8, 0, 34, 46, 51, 50, 31, 45, 44,
	19, 4, 36, 7, 37, 10, 38, 13, 39, 16, 40, 19, 41, 22, 42, 25, 43, 28, 44, 31
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000330E2[] = {
	21, 3, 5, 6, 8, 9, 11, 12, 14, 15, 17, 18, 20, 21, 23, 24, 26, 27, 29, 30, 32, 48,
	0x8000u | 5, 50, 46, 33, 47, 2,
	0x8000u | 23, 35, 48, 49, 30, 45, 27, 44, 24, 43, 21, 42, 18, 41, 15, 40, 12, 39, 9, 38, 6, 37, 3, 36,
	0x8000u | 7, 45, 50, 49, 33, 35, 2, 1
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003315C[] = {
	{ 31, 70 },
	{ 31, 184 },
	{ 1115, 70 },
	{ 31, 184 },
	{ 1115, 184 },
	{ 1115, 70 },
	{ 1625, 184 },
	{ 1625, 70 },
	{ 2135, 184 },
	{ 2135, 70 },
	{ 2773, 70 },
	{ 8128, 184 },
	{ 8128, 70 },
	{ 7745, 184 },
	{ 7745, 70 },
	{ 7108, 184 },
	{ 7108, 70 },
	{ 6406, 184 },
	{ 6406, 70 },
	{ 5641, 184 },
	{ 5641, 70 },
	{ 4940, 184 },
	{ 4940, 70 },
	{ 4239, 184 },
	{ 4239, 70 },
	{ 3474, 184 },
	{ 3474, 70 },
	{ 2773, 184 },
	{ 2773, 70 },
	{ 2135, 184 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000331D4[] = {
	{ 31, 126 },
	{ 31, 254 },
	{ 350, 126 },
	{ 350, 254 },
	{ 1051, 126 },
	{ 1051, 254 },
	{ 1753, 126 },
	{ 1753, 254 },
	{ 2454, 126 },
	{ 2454, 254 },
	{ 3091, 126 },
	{ 3091, 254 },
	{ 3856, 126 },
	{ 3856, 254 },
	{ 4558, 126 },
	{ 4558, 254 },
	{ 5259, 126 },
	{ 5259, 254 },
	{ 5960, 126 },
	{ 5960, 254 },
	{ 6279, 254 },
	{ 6279, 0 },
	{ 7044, 0 },
	{ 7044, 126 },
	{ 8128, 0 },
	{ 8128, 126 },
	{ 7044, 254 },
	{ 6279, 254 },
	{ 6279, 126 },
	{ 5960, 126 },
	{ 5960, 0 },
	{ 5259, 126 },
	{ 5259, 0 },
	{ 4558, 126 },
	{ 4558, 0 },
	{ 3856, 126 },
	{ 3856, 0 },
	{ 3091, 126 },
	{ 3091, 0 },
	{ 2454, 126 },
	{ 2454, 0 },
	{ 1753, 126 },
	{ 1753, 0 },
	{ 1051, 126 },
	{ 1051, 0 },
	{ 350, 126 },
	{ 350, 0 },
	{ 31, 126 },
	{ 31, 0 },
	{ 5960, 0 },
	{ 6279, 0 },
	{ 6279, 126 },
	{ 7044, 126 },
	{ 7044, 254 },
	{ 8128, 126 },
	{ 8128, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_000332B4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, polySTG12_000330A0, NULL, NULL, NULL, uvSTG12_0003315C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, polySTG12_000330E2, NULL, NULL, NULL, uvSTG12_000331D4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_000332E4[] = {
	{ 60, 6.000006f, -710 },
	{ 60, -0.00006f, -690 },
	{ 60, 5.999994f, -690 },
	{ -140, 5.999994f, -310 },
	{ -140, 6.000006f, -290 },
	{ -140, -0.00006f, -310 },
	{ -179.0151f, 5.999986f, -310 },
	{ -180.9849f, 5.999996f, -290 },
	{ -179.0151f, -0.00014f, -310 },
	{ -252.6349f, 5.999987f, -324.6439f },
	{ -260.4385f, 5.999997f, -305.8043f },
	{ -252.6349f, -0.00012f, -324.6439f },
	{ -314.2117f, 5.999989f, -365.7882f },
	{ -328.631f, 5.999999f, -351.369f },
	{ -314.2117f, -0.00011f, -365.7882f },
	{ -355.356f, 5.999991f, -427.3651f },
	{ -374.1957f, 6.000002f, -419.5615f },
	{ -355.356f, -0.0001f, -427.3651f },
	{ -369.804f, 5.999994f, -499.9999f },
	{ -390.1959f, 6.000006f, -499.9999f },
	{ -369.8041f, -0.00006f, -499.9999f },
	{ -355.3561f, 5.999997f, -572.6348f },
	{ -374.1957f, 6.00001f, -580.4384f },
	{ -355.3561f, -0.00002f, -572.6348f },
	{ -314.2118f, 6, -634.2117f },
	{ -328.631f, 6.000012f, -648.6309f },
	{ -314.2118f, 0, -634.2117f },
	{ -252.6349f, 6.000002f, -675.356f },
	{ -260.4385f, 6.000014f, -694.1957f },
	{ -252.6349f, 0.000002f, -675.356f },
	{ -179.0151f, 6.000003f, -690 },
	{ -180.9849f, 6.000015f, -710 },
	{ -179.0151f, 0.000003f, -690 },
	{ -60, 5.999994f, -690 },
	{ -60, 6.000006f, -710 },
	{ -60, -0.00006f, -690 },
	{ -140, 6, -300 },
	{ -180, 5.99999f, -300 },
	{ -256.5367f, 5.999992f, -315.2241f },
	{ -321.4213f, 5.999994f, -358.5786f },
	{ -364.7759f, 5.999996f, -423.4633f },
	{ -380, 6, -499.9999f },
	{ -364.7759f, 6.000004f, -576.5366f },
	{ -321.4214f, 6.000006f, -641.4213f },
	{ -256.5367f, 6.000009f, -684.7759f },
	{ -180, 6.00001f, -700 },
	{ -60, 6, -700 },
	{ 60, 6, -700 },
	{ -139.5075f, -0.00001f, -690 },
	{ -139.5075f, 5.999999f, -690 },
	{ -140, 6, -700 },
	{ -140, 6, -710 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00033554[] = {
	{ 0, 1, 0.000001f },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 1, -0.00001f },
	{ 0, 0, -1 },
	{ 0.06700499f, 0.729849f, -0.680317f },
	{ 0, 1, -0.00001f },
	{ 0.098017f, 0, -0.995185f },
	{ 0.251477f, 0.753767f, -0.60712f },
	{ 0, 1, 0 },
	{ 0.382684f, 0, -0.923879f },
	{ 0.464669f, 0.753767f, -0.464669f },
	{ 0, 1, 0 },
	{ 0.7071069f, -0.00001f, -0.7071069f },
	{ 0.607121f, 0.7537659f, -0.251477f },
	{ 0.000001f, 1, 0 },
	{ 0.923879f, -0.00002f, -0.382684f },
	{ 0.657143f, 0.7537659f, 0 },
	{ 0.000001f, 1, 0 },
	{ 1, -0.00003f, 0 },
	{ 0.60712f, 0.753767f, 0.251477f },
	{ 0.000001f, 1, 0 },
	{ 0.92388f, -0.00001f, 0.382683f },
	{ 0.464669f, 0.753767f, 0.464669f },
	{ 0, 1, 0 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.251477f, 0.753767f, 0.60712f },
	{ 0, 1, 0.000001f },
	{ 0.382684f, 0, 0.92388f },
	{ 0.067006f, 0.729849f, 0.680317f },
	{ 0, 1, 0.000001f },
	{ 0.098017f, 0, 0.995185f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 1, 0.000001f },
	{ 0, 0, 1 },
	{ 0, 1, -0.00001f },
	{ 0, 1, -0.00001f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.000001f, 1, 0 },
	{ 0.000001f, 1, 0 },
	{ 0.000001f, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0.000001f },
	{ 0, 1, 0.000001f },
	{ 0, 1, 0.000001f },
	{ 0, 1, 0.000001f },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 1, 0.000001f },
	{ 0, 1, 0.000001f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_000337C4 = { vertexSTG12_000332E4, normalSTG12_00033554, LengthOfArray(vertexSTG12_000332E4), meshlistSTG12_000332B4, matlistSTG12_00033078, LengthOfArray(meshlistSTG12_000332B4), LengthOfArray(matlistSTG12_00033078),{ -165.0979f, 3, -500 }, 307.8459f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_000337EC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_000337C4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00033820[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003385C[] = {
	0x8000u | 7, 54, 40, 57, 58, 53, 36, 32,
	0x8000u | 16, 4, 46, 8, 47, 12, 48, 16, 49, 20, 50, 24, 51, 28, 52, 32, 53,
	0x8000u | 7, 0, 44, 63, 62, 4, 45, 46
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003389E[] = {
	0x8000u | 22, 2, 60, 61, 5, 45, 9, 46, 13, 47, 17, 48, 21, 49, 25, 50, 29, 51, 33, 52, 37, 53, 57,
	0x8000u | 5, 2, 61, 1, 62, 44,
	5, 37, 57, 55, 54, 41,
	0x8000u | 7, 42, 41, 56, 55, 38, 37, 33,
	0x8000u | 18, 60, 6, 5, 10, 9, 14, 13, 18, 17, 22, 21, 26, 25, 30, 29, 34, 33, 38,
	3, 62, 45, 61
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00033922[] = {
	0x8000u | 7, 3, 0, 64, 63, 7, 4, 8,
	0x8000u | 16, 7, 8, 11, 12, 15, 16, 19, 20, 23, 24, 27, 28, 31, 32, 35, 36,
	0x8000u | 7, 40, 43, 58, 59, 36, 39, 35
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00033964[] = {
	{ 10158, 68 },
	{ 10158, 186 },
	{ 8646, 68 },
	{ 8646, 186 },
	{ 6972, 68 },
	{ 6972, 186 },
	{ 6494, 186 },
	{ 3225, 186 },
	{ 3623, 68 },
	{ 3623, 186 },
	{ 4103, 68 },
	{ 4103, 186 },
	{ 4582, 68 },
	{ 4582, 186 },
	{ 5137, 68 },
	{ 5137, 186 },
	{ 5615, 68 },
	{ 5615, 186 },
	{ 6094, 68 },
	{ 6094, 186 },
	{ 6494, 68 },
	{ 6494, 186 },
	{ 6972, 68 },
	{ 39, 186 },
	{ 39, 68 },
	{ 1553, 186 },
	{ 1553, 68 },
	{ 3225, 186 },
	{ 3225, 68 },
	{ 3623, 68 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000339DC[] = {
	{ 10158, 254 },
	{ 8725, 254 },
	{ 8725, 184 },
	{ 7209, 184 },
	{ 7209, 126 },
	{ 6653, 184 },
	{ 6653, 126 },
	{ 6175, 184 },
	{ 6175, 126 },
	{ 5615, 184 },
	{ 5615, 126 },
	{ 5060, 184 },
	{ 5060, 126 },
	{ 4500, 184 },
	{ 4500, 126 },
	{ 4022, 184 },
	{ 4022, 126 },
	{ 3544, 184 },
	{ 3544, 126 },
	{ 2986, 184 },
	{ 2986, 126 },
	{ 1553, 126 },
	{ 10158, 254 },
	{ 8725, 184 },
	{ 10158, 184 },
	{ 8725, 126 },
	{ 10158, 126 },
	{ 2986, 184 },
	{ 1553, 126 },
	{ 1553, 184 },
	{ 39, 126 },
	{ 39, 184 },
	{ 39, 254 },
	{ 39, 184 },
	{ 1553, 254 },
	{ 1553, 184 },
	{ 2986, 254 },
	{ 2986, 184 },
	{ 3544, 184 },
	{ 8725, 254 },
	{ 7209, 254 },
	{ 7209, 184 },
	{ 6653, 254 },
	{ 6653, 184 },
	{ 6175, 254 },
	{ 6175, 184 },
	{ 5615, 254 },
	{ 5615, 184 },
	{ 5060, 254 },
	{ 5060, 184 },
	{ 4500, 254 },
	{ 4500, 184 },
	{ 4022, 254 },
	{ 4022, 184 },
	{ 3544, 254 },
	{ 3544, 184 },
	{ 2986, 254 },
	{ 8725, 126 },
	{ 7209, 126 },
	{ 8725, 184 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00033ACC[] = {
	{ 0 },
	{ 0, 255 },
	{ 3204, 0 },
	{ 3204, 255 },
	{ 6410, 0 },
	{ 6410, 255 },
	{ 7377, 255 },
	{ 6410, 0 },
	{ 7377, 255 },
	{ 7377, 0 },
	{ 8317, 255 },
	{ 8317, 0 },
	{ 9257, 255 },
	{ 9257, 0 },
	{ 10200, 255 },
	{ 10200, 0 },
	{ 11140, 255 },
	{ 11140, 0 },
	{ 12078, 255 },
	{ 12078, 0 },
	{ 13018, 255 },
	{ 13018, 0 },
	{ 13985, 255 },
	{ 20400, 255 },
	{ 20400, 0 },
	{ 17193, 255 },
	{ 17193, 0 },
	{ 13985, 255 },
	{ 13985, 0 },
	{ 13018, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00033B44[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, polySTG12_0003385C, NULL, NULL, NULL, uvSTG12_00033964, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, polySTG12_0003389E, NULL, NULL, NULL, uvSTG12_000339DC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, polySTG12_00033922, NULL, NULL, NULL, uvSTG12_00033ACC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00033B8C[] = {
	{ 60, 6.000001f, -410 },
	{ 60, 5.999999f, -390 },
	{ 60, -0.00001f, -390 },
	{ 60, 0.000001f, -410 },
	{ -179.0151f, 5.999996f, -410 },
	{ -180.9849f, 5.999995f, -390 },
	{ -180.9849f, -0.00006f, -390 },
	{ -179.0151f, -0.00004f, -410 },
	{ -214.3665f, 5.999997f, -417.0318f },
	{ -222.1702f, 5.999995f, -398.1923f },
	{ -222.1702f, -0.00005f, -398.1923f },
	{ -214.3665f, -0.00003f, -417.0318f },
	{ -243.5011f, 5.999998f, -436.4989f },
	{ -257.9203f, 5.999996f, -422.0797f },
	{ -257.9203f, -0.00004f, -422.0797f },
	{ -243.5011f, -0.00002f, -436.4989f },
	{ -262.9681f, 5.999999f, -465.6334f },
	{ -281.8077f, 5.999998f, -457.8299f },
	{ -281.8077f, -0.00003f, -457.8299f },
	{ -262.9681f, -0.00001f, -465.6334f },
	{ -269.804f, 6.000001f, -500 },
	{ -290.1959f, 6, -500 },
	{ -290.1959f, 0, -500 },
	{ -269.804f, 0, -500 },
	{ -262.9681f, 6.000002f, -534.3665f },
	{ -281.8078f, 6.000002f, -542.1701f },
	{ -281.8078f, 0.000002f, -542.1701f },
	{ -262.9681f, 0.000002f, -534.3665f },
	{ -243.5011f, 6.000004f, -563.501f },
	{ -257.9203f, 6.000003f, -577.9202f },
	{ -257.9203f, 0.000003f, -577.9202f },
	{ -243.5011f, 0.000003f, -563.501f },
	{ -214.3665f, 6.000004f, -582.9681f },
	{ -222.1702f, 6.000004f, -601.8077f },
	{ -222.1702f, 0.000004f, -601.8077f },
	{ -214.3665f, 0.000004f, -582.9681f },
	{ -179.0151f, 6.000005f, -590 },
	{ -180.9849f, 6.000005f, -610 },
	{ -180.9849f, 0.000005f, -610 },
	{ -179.0151f, 0.000005f, -590 },
	{ 60, 6, -590 },
	{ 59.99999f, 6, -610 },
	{ 59.99999f, 0, -610 },
	{ 60, 0, -590 },
	{ 60, 6, -400 },
	{ -180, 5.999996f, -400 },
	{ -218.2683f, 5.999996f, -407.6121f },
	{ -250.7107f, 5.999997f, -429.2893f },
	{ -272.3879f, 5.999998f, -461.7317f },
	{ -280, 6, -500 },
	{ -272.388f, 6.000002f, -538.2683f },
	{ -250.7107f, 6.000004f, -570.7106f },
	{ -218.2683f, 6.000004f, -592.3879f },
	{ -180, 6.000005f, -600 },
	{ 60, 6, -600 },
	{ -60.49245f, 6.000002f, -610 },
	{ -60.49245f, 0.000002f, -610 },
	{ -60, 6.000002f, -600 },
	{ -59.50754f, 6.000002f, -590 },
	{ -59.50754f, 0.000002f, -590 },
	{ -60.49245f, -0.00003f, -390 },
	{ -60.49245f, 5.999997f, -390 },
	{ -60, 5.999998f, -400 },
	{ -59.50754f, 5.999999f, -410 },
	{ -59.50754f, -0.00001f, -410 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00033E98[] = {
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0.067006f, 0.729849f, -0.680317f },
	{ -0.071346f, 0.6856959f, 0.724383f },
	{ -0.098017f, 0, 0.995185f },
	{ 0.098017f, 0, -0.995185f },
	{ 0.251477f, 0.753767f, -0.60712f },
	{ -0.28556f, 0.665719f, 0.689401f },
	{ -0.382683f, 0, 0.92388f },
	{ 0.382683f, 0, -0.92388f },
	{ 0.464669f, 0.753768f, -0.464669f },
	{ -0.527645f, 0.665719f, 0.527645f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.60712f, 0.753767f, -0.251477f },
	{ -0.689401f, 0.665719f, 0.285559f },
	{ -0.92388f, 0, 0.382683f },
	{ 0.92388f, 0, -0.382683f },
	{ 0.657141f, 0.753767f, 0 },
	{ -0.7462029f, 0.665719f, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.607119f, 0.753767f, 0.251477f },
	{ -0.689401f, 0.665719f, -0.285559f },
	{ -0.92388f, 0, -0.382684f },
	{ 0.92388f, 0, 0.382683f },
	{ 0.464669f, 0.753767f, 0.464669f },
	{ -0.527645f, 0.665719f, -0.527645f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.251477f, 0.753767f, 0.607119f },
	{ -0.28556f, 0.665719f, -0.689401f },
	{ -0.382684f, 0, -0.923879f },
	{ 0.382684f, 0, 0.923879f },
	{ 0.067006f, 0.729849f, 0.680317f },
	{ -0.071346f, 0.6856959f, -0.724383f },
	{ -0.098017f, 0, -0.995185f },
	{ 0.098017f, 0, 0.995185f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_000341A4 = { vertexSTG12_00033B8C, normalSTG12_00033E98, LengthOfArray(vertexSTG12_00033B8C), meshlistSTG12_00033B44, matlistSTG12_00033820, LengthOfArray(meshlistSTG12_00033B44), LengthOfArray(matlistSTG12_00033820),{ -115.098f, 3, -500 }, 206.7832f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_000341CC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_000341A4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00034200[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00034228[] = {
	4, 4, 7, 6, 10
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00034232[] = {
	6, 2, 10, 9, 5, 8, 3,
	5, 8, 0, 9, 1, 2,
	3, 7, 5, 10
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00034254[] = {
	{ 7, 184 },
	{ 7, 68 },
	{ 2032, 184 },
	{ 2032, 68 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00034264[] = {
	{ 15, 254 },
	{ 2055, 254 },
	{ 2055, 126 },
	{ 4064, 126 },
	{ 2055, 0 },
	{ 4064, 0 },
	{ 2055, 0 },
	{ 15, 0 },
	{ 2055, 126 },
	{ 15, 126 },
	{ 15, 254 },
	{ 4064, 254 },
	{ 4064, 126 },
	{ 2055, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0003429C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_00034228, NULL, NULL, NULL, uvSTG12_00034254, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, polySTG12_00034232, NULL, NULL, NULL, uvSTG12_00034264, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_000342CC[] = {
	{ 236, -3, 10 },
	{ 236, 3, 10 },
	{ 236, 3, 0 },
	{ -236, -3, 10 },
	{ -236, 3, -10 },
	{ -236, 3, 10 },
	{ -1, 3, -10 },
	{ -236, 3, 0 },
	{ -1, -3, 10 },
	{ -1, 3, 10 },
	{ -1, 3, 0 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00034350[] = {
	{ 0, 0, 1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_000343D4 = { vertexSTG12_000342CC, normalSTG12_00034350, LengthOfArray(vertexSTG12_000342CC), meshlistSTG12_0003429C, matlistSTG12_00034200, LengthOfArray(meshlistSTG12_0003429C), LengthOfArray(matlistSTG12_00034200),{ 0 }, 236.2118f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_000343FC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_000343D4, 296, 3, -700, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00034430[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00034444[] = {
	0x8000u | 6, 0, 1, 6, 7, 3, 4,
	6, 4, 5, 7, 8, 1, 2
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00034460[] = {
	{ 4064, 0 },
	{ 4064, 126 },
	{ 2055, 0 },
	{ 2055, 126 },
	{ 15, 0 },
	{ 15, 126 },
	{ 15, 126 },
	{ 15, 254 },
	{ 2055, 126 },
	{ 2055, 254 },
	{ 4064, 126 },
	{ 4064, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00034490[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, polySTG12_00034444, NULL, NULL, NULL, uvSTG12_00034460, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_000344A8[] = {
	{ 236.0001f, -3, -4.999878f },
	{ 236.0001f, 3, -4.999878f },
	{ 236.0001f, 3, 5.000122f },
	{ -236.0001f, -3, -5.000061f },
	{ -236.0001f, 3, -5.000061f },
	{ -236.0001f, 3, 4.999939f },
	{ -0.999985f, -3, -4.999939f },
	{ -0.999985f, 3, -4.999939f },
	{ -0.999985f, 3, 5.000061f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00034514[] = {
	{ 0, 0, -1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 1, 0 },
	{ 0.000001f, 0, -1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00034580 = { vertexSTG12_000344A8, normalSTG12_00034514, LengthOfArray(vertexSTG12_000344A8), meshlistSTG12_00034490, matlistSTG12_00034430, LengthOfArray(meshlistSTG12_00034490), LengthOfArray(matlistSTG12_00034430),{ 0.000008f, 0, 0.000031f }, 236.0531f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_000345A8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00034580, 295.9999f, 3, -605.0001f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_000345DC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 34, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000345F0[] = {
	4, 16, 11, 6, 1,
	0x8000u | 10, 18, 8, 19, 9, 17, 7, 15, 5, 16, 6,
	0x8000u | 10, 11, 1, 10, 0, 12, 2, 14, 4, 13, 3,
	0x8000u | 10, 16, 11, 15, 10, 17, 12, 19, 14, 18, 13
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003463C[] = {
	{ 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 68, 0 },
	{ 68, 255 },
	{ 136, 0 },
	{ 136, 255 },
	{ 204, 0 },
	{ 204, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 255, 127 },
	{ 255, 255 },
	{ 204, 127 },
	{ 204, 255 },
	{ 136, 127 },
	{ 136, 255 },
	{ 68, 127 },
	{ 68, 255 },
	{ 0, 127 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 127 },
	{ 204, 0 },
	{ 204, 127 },
	{ 136, 0 },
	{ 136, 127 },
	{ 68, 0 },
	{ 68, 127 },
	{ 0 },
	{ 0, 127 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_000346C4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, polySTG12_000345F0, NULL, NULL, NULL, uvSTG12_0003463C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_000346DC[] = {
	{ 135, 8, -100 },
	{ 225, 8, -100 },
	{ 15, 8, -100 },
	{ -225, 8, -100 },
	{ -105, 8, -100 },
	{ 135, 8, -100 },
	{ 225, 8, -100 },
	{ 15, 8, -100 },
	{ -225, 8, -100 },
	{ -105, 8, -100 },
	{ 135, 10, -95 },
	{ 225, 10, -95 },
	{ 15, 10, -95 },
	{ -225, 10, -95 },
	{ -105, 10, -95 },
	{ 135, 12, -100 },
	{ 225, 12, -100 },
	{ 15, 12, -100 },
	{ -225, 12, -100 },
	{ -105, 12, -100 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_000347CC[] = {
	{ 0, -0.928477f, 0.371391f },
	{ 0, -0.928477f, 0.371391f },
	{ 0, -0.928477f, 0.371391f },
	{ 0, -0.928477f, 0.371391f },
	{ 0, -0.928477f, 0.371391f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0.5463099f, 0, 0.8375829f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0.8280669f, -0.560629f },
	{ 0.559936f, 0.686083f, -0.464501f },
	{ 0, 0.8280669f, -0.560629f },
	{ 0, 0.8280669f, -0.560629f },
	{ 0, 0.8280669f, -0.560629f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_000348BC = { vertexSTG12_000346DC, normalSTG12_000347CC, LengthOfArray(vertexSTG12_000346DC), meshlistSTG12_000346C4, matlistSTG12_000345DC, LengthOfArray(meshlistSTG12_000346C4), LengthOfArray(matlistSTG12_000345DC),{ 0, 10, -97.5f }, 225.0139f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_000348E4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_000348BC, 165, 79, -805, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00034918[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00034940[] = {
	0x8000u | 10, 18, 8, 19, 9, 17, 7, 15, 5, 16, 6,
	0x8000u | 10, 11, 1, 10, 0, 12, 2, 14, 4, 13, 3,
	0x8000u | 10, 13, 18, 14, 19, 12, 17, 10, 15, 11, 16
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00034984[] = {
	{ 78, -4845 },
	{ 0, -4845 },
	{ 78, -3485 },
	{ 0, -3485 },
	{ 78, -2122 },
	{ 0, -2122 },
	{ 78, -765 },
	{ 0, -765 },
	{ 78, 255 },
	{ 0, 255 },
	{ 176, 255 },
	{ 255, 255 },
	{ 176, -765 },
	{ 255, -765 },
	{ 176, -2122 },
	{ 255, -2122 },
	{ 176, -3485 },
	{ 255, -3485 },
	{ 176, -4845 },
	{ 255, -4845 },
	{ 176, -4845 },
	{ 78, -4845 },
	{ 176, -3485 },
	{ 78, -3485 },
	{ 176, -2122 },
	{ 78, -2122 },
	{ 176, -765 },
	{ 78, -765 },
	{ 176, 255 },
	{ 78, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_000349FC[] = {
	{ NJD_MESHSET_TRIMESH | 1, 3, polySTG12_00034940, NULL, NULL, NULL, uvSTG12_00034984, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00034A14[] = {
	{ 135, 5, -95 },
	{ 225, 5, -95 },
	{ 15, 5, -95 },
	{ -225, 5, -95 },
	{ -105, 5, -95 },
	{ 135, 5, -100 },
	{ 225, 5, -100 },
	{ 15, 5, -100 },
	{ -225, 5, -100 },
	{ -105, 5, -100 },
	{ 135, 9, -95 },
	{ 225, 9, -95 },
	{ 15, 9, -95 },
	{ -225, 9, -95 },
	{ -105, 9, -95 },
	{ 135, 9, -100 },
	{ 225, 9, -100 },
	{ 15, 9, -100 },
	{ -225, 9, -100 },
	{ -105, 9, -100 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00034B04[] = {
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00034BF4 = { vertexSTG12_00034A14, normalSTG12_00034B04, LengthOfArray(vertexSTG12_00034A14), meshlistSTG12_000349FC, matlistSTG12_00034918, LengthOfArray(meshlistSTG12_000349FC), LengthOfArray(matlistSTG12_00034918),{ 0, 7, -97.5f }, 225.0139f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00034C1C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00034BF4, 165, 75, -805, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00034C50[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 34, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00034C64[] = {
	0x8000u | 22, 33, 11, 34, 12, 35, 13, 36, 14, 37, 15, 38, 16, 39, 17, 40, 18, 41, 19, 42, 20, 43, 21,
	0x8000u | 22, 0, 22, 1, 23, 2, 24, 3, 25, 4, 26, 5, 27, 6, 28, 7, 29, 8, 30, 9, 31, 10, 32,
	0x8000u | 6, 42, 31, 41, 30, 40, 29,
	4, 43, 42, 32, 31,
	0x8000u | 16, 22, 33, 23, 34, 24, 35, 25, 36, 26, 37, 27, 38, 28, 39, 29, 40
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00034CFC[] = {
	{ 245, 0 },
	{ 245, 254 },
	{ 190, 0 },
	{ 190, 255 },
	{ 121, 0 },
	{ 121, 255 },
	{ 57, 0 },
	{ 57, 255 },
	{ 14, 0 },
	{ 14, 254 },
	{ 0 },
	{ 0, 254 },
	{ 14, 0 },
	{ 14, 254 },
	{ 57, 0 },
	{ 57, 254 },
	{ 121, 0 },
	{ 121, 254 },
	{ 195, 0 },
	{ 195, 254 },
	{ 255, 0 },
	{ 255, 254 },
	{ 245, 254 },
	{ 245, 0 },
	{ 190, 255 },
	{ 190, 0 },
	{ 121, 255 },
	{ 122, 0 },
	{ 57, 255 },
	{ 59, 0 },
	{ 14, 254 },
	{ 16, 0 },
	{ 0, 254 },
	{ 2, 0 },
	{ 14, 254 },
	{ 16, 0 },
	{ 57, 254 },
	{ 59, 0 },
	{ 121, 254 },
	{ 122, 0 },
	{ 195, 254 },
	{ 195, 0 },
	{ 255, 254 },
	{ 255, 127 },
	{ 195, 255 },
	{ 195, 255 },
	{ 121, 255 },
	{ 122, 255 },
	{ 57, 255 },
	{ 59, 255 },
	{ 255, 0 },
	{ 195, 0 },
	{ 255, 127 },
	{ 195, 0 },
	{ 245, 0 },
	{ 245, 0 },
	{ 190, 0 },
	{ 190, 0 },
	{ 122, 0 },
	{ 121, 0 },
	{ 59, 0 },
	{ 57, 0 },
	{ 16, 0 },
	{ 14, 0 },
	{ 2, 0 },
	{ 0 },
	{ 16, 0 },
	{ 14, 0 },
	{ 59, 0 },
	{ 57, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00034E14[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, polySTG12_00034C64, NULL, NULL, NULL, uvSTG12_00034CFC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00034E2C[] = {
	{ 20.36038f, 82.99998f, 407.6802f },
	{ -92.70831f, 82.99997f, 407.6802f },
	{ -235.3245f, 82.99997f, 377.0169f },
	{ -366.3907f, 82.99997f, 288.5558f },
	{ -453.9671f, 82.99998f, 156.1655f },
	{ -484.7197f, 82.99998f, 0.000061f },
	{ -453.9671f, 83, -156.1653f },
	{ -366.3908f, 83.00001f, -288.5558f },
	{ -235.3245f, 83.00001f, -377.0169f },
	{ -82.70831f, 83.00001f, -407.6802f },
	{ 40, 83, -405 },
	{ 20.36038f, 82.99998f, 407.6802f },
	{ -92.70831f, 82.99997f, 407.6802f },
	{ -235.3244f, 82.99997f, 377.0169f },
	{ -366.3907f, 82.99997f, 288.5558f },
	{ -453.9671f, 82.99998f, 156.1655f },
	{ -484.7197f, 82.99998f, 0.000062f },
	{ -453.9671f, 83, -156.1653f },
	{ -366.3908f, 83.00001f, -288.5558f },
	{ -235.3244f, 83.00001f, -377.0169f },
	{ -82.70831f, 83.00001f, -407.6802f },
	{ 40, 83, -405 },
	{ 20, 86.99998f, 400 },
	{ -91.96985f, 86.99997f, 400 },
	{ -233.2234f, 86.99997f, 369.9138f },
	{ -363.1198f, 86.99997f, 283.1198f },
	{ -449.9138f, 86.99998f, 153.2233f },
	{ -480.3918f, 86.99998f, 0.000061f },
	{ -449.9138f, 87, -153.2232f },
	{ -363.1198f, 87.00001f, -283.1197f },
	{ -233.2234f, 87.00001f, -369.9138f },
	{ -81.96985f, 87.00001f, -400 },
	{ 40, 85, -400 },
	{ 20.36038f, 86.99998f, 407.6802f },
	{ -92.70831f, 86.99997f, 407.6802f },
	{ -235.3244f, 86.99997f, 377.0169f },
	{ -366.3907f, 86.99997f, 288.5558f },
	{ -453.9671f, 86.99998f, 156.1655f },
	{ -484.7197f, 86.99998f, 0.000062f },
	{ -453.9671f, 87, -156.1653f },
	{ -366.3908f, 87.00001f, -288.5558f },
	{ -235.3244f, 87.00001f, -377.0169f },
	{ -82.70831f, 87.00001f, -407.6802f },
	{ 40, 87, -405 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0003503C[] = {
	{ 0, -0.886919f, -0.461925f },
	{ 0.049592f, -0.8842469f, -0.464379f },
	{ 0.1925f, -0.8680919f, -0.457559f },
	{ 0.395382f, -0.824527f, -0.404757f },
	{ 0.5916359f, -0.764673f, -0.255427f },
	{ 0.666111f, -0.745849f, -0.002475f },
	{ 0.555868f, -0.796842f, 0.236756f },
	{ 0.362895f, -0.854355f, 0.372001f },
	{ 0.177141f, -0.883092f, 0.434477f },
	{ 0.039798f, -0.909667f, 0.413428f },
	{ -0.011657f, -0.928414f, 0.371365f },
	{ 0, 0, 1 },
	{ -0.105693f, 0, 0.994399f },
	{ -0.391943f, 0, 0.919989f },
	{ -0.710382f, 0, 0.703816f },
	{ -0.925127f, 0, 0.379658f },
	{ -1, 0, 0 },
	{ -0.925127f, 0, -0.379658f },
	{ -0.710383f, 0, -0.703816f },
	{ -0.385723f, 0, -0.922615f },
	{ -0.08810499f, 0, -0.996111f },
	{ 0.021837f, 0, -0.999762f },
	{ 0, 0.244282f, -0.969704f },
	{ 0.103729f, 0.256881f, -0.96086f },
	{ 0.39251f, 0.2919f, -0.872198f },
	{ 0.691057f, 0.3422f, -0.636663f },
	{ 0.8610409f, 0.391049f, -0.325098f },
	{ 0.914905f, 0.403655f, -0.003399f },
	{ 0.869931f, 0.372075f, 0.323699f },
	{ 0.697094f, 0.317059f, 0.643066f },
	{ 0.383978f, 0.277936f, 0.880518f },
	{ 0.068528f, 0.108177f, 0.991767f },
	{ -0.011031f, -0.009613f, 0.999893f },
	{ 0, 0.696313f, 0.717738f },
	{ -0.077094f, 0.684073f, 0.725328f },
	{ -0.292099f, 0.666777f, 0.685629f },
	{ -0.5300879f, 0.665721f, 0.525188f },
	{ -0.690112f, 0.665985f, 0.283212f },
	{ -0.745868f, 0.6660939f, 0 },
	{ -0.690112f, 0.665985f, -0.283211f },
	{ -0.5300879f, 0.665721f, -0.525188f },
	{ -0.287919f, 0.6654519f, -0.688677f },
	{ -0.070613f, 0.7368709f, -0.672336f },
	{ 0.022507f, 0.833224f, -0.552478f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0003524C = { vertexSTG12_00034E2C, normalSTG12_0003503C, LengthOfArray(vertexSTG12_00034E2C), meshlistSTG12_00034E14, matlistSTG12_00034C50, LengthOfArray(meshlistSTG12_00034E14), LengthOfArray(matlistSTG12_00034C50),{ -222.3598f, 84.99998f, 0 }, 484.8049f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00035274 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0003524C, -100, 4, -500, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_000352A8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000352BC[] = {
	0x8000u | 22, 33, 11, 34, 12, 35, 13, 36, 14, 37, 15, 38, 16, 39, 17, 40, 18, 41, 19, 42, 20, 43, 21,
	0x8000u | 22, 32, 10, 31, 9, 30, 8, 29, 7, 28, 6, 27, 5, 26, 4, 25, 3, 24, 2, 23, 1, 22, 0,
	0x8000u | 22, 43, 32, 42, 31, 41, 30, 40, 29, 39, 28, 38, 27, 37, 26, 36, 25, 35, 24, 34, 23, 33, 22
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00035348[] = {
	{ 65, -9945 },
	{ 0, -9945 },
	{ 64, -9239 },
	{ 0, -9239 },
	{ 66, -8170 },
	{ 0, -8170 },
	{ 71, -7087 },
	{ 0, -7087 },
	{ 78, -6000 },
	{ 0, -6000 },
	{ 82, -4910 },
	{ 0, -4910 },
	{ 78, -3822 },
	{ 0, -3822 },
	{ 71, -2734 },
	{ 0, -2734 },
	{ 66, -1649 },
	{ 0, -1649 },
	{ 64, -585 },
	{ 0, -585 },
	{ 78, 255 },
	{ 0, 255 },
	{ 176, 255 },
	{ 255, 255 },
	{ 190, -589 },
	{ 255, -589 },
	{ 188, -1659 },
	{ 255, -1659 },
	{ 183, -2743 },
	{ 255, -2743 },
	{ 176, -3828 },
	{ 255, -3828 },
	{ 172, -4912 },
	{ 255, -4912 },
	{ 176, -5996 },
	{ 255, -5996 },
	{ 183, -7080 },
	{ 255, -7080 },
	{ 188, -8165 },
	{ 255, -8165 },
	{ 190, -9237 },
	{ 255, -9237 },
	{ 189, -9945 },
	{ 255, -9945 },
	{ 78, 255 },
	{ 176, 255 },
	{ 64, -585 },
	{ 190, -589 },
	{ 66, -1649 },
	{ 188, -1659 },
	{ 71, -2734 },
	{ 183, -2743 },
	{ 78, -3822 },
	{ 176, -3828 },
	{ 82, -4910 },
	{ 172, -4912 },
	{ 78, -6000 },
	{ 176, -5996 },
	{ 71, -7087 },
	{ 183, -7080 },
	{ 66, -8170 },
	{ 188, -8165 },
	{ 64, -9239 },
	{ 190, -9237 },
	{ 65, -9945 },
	{ 189, -9945 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00035450[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, polySTG12_000352BC, NULL, NULL, NULL, uvSTG12_00035348, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00035468[] = {
	{ 20, 79.99998f, 400 },
	{ -91.96985f, 79.99997f, 400 },
	{ -233.2234f, 79.99997f, 369.9138f },
	{ -363.1198f, 79.99997f, 283.1198f },
	{ -449.9138f, 79.99998f, 153.2233f },
	{ -480.3918f, 79.99998f, 0.000061f },
	{ -449.9138f, 80, -153.2232f },
	{ -363.1198f, 80.00001f, -283.1197f },
	{ -233.2234f, 80.00001f, -369.9138f },
	{ -81.96985f, 80.00001f, -400 },
	{ 40, 79.99998f, -400 },
	{ 20.36038f, 79.99998f, 407.6802f },
	{ -92.70831f, 79.99997f, 407.6802f },
	{ -235.3244f, 79.99997f, 377.0169f },
	{ -366.3907f, 79.99997f, 288.5558f },
	{ -453.9671f, 79.99998f, 156.1655f },
	{ -484.7197f, 79.99998f, 0.000062f },
	{ -453.9671f, 80, -156.1653f },
	{ -366.3908f, 80.00001f, -288.5558f },
	{ -235.3244f, 80.00001f, -377.0169f },
	{ -82.70831f, 80.00001f, -407.6802f },
	{ 40, 80, -405 },
	{ 20, 83.99998f, 400 },
	{ -91.96985f, 83.99997f, 400 },
	{ -233.2234f, 83.99997f, 369.9138f },
	{ -363.1198f, 83.99997f, 283.1198f },
	{ -449.9138f, 83.99998f, 153.2233f },
	{ -480.3918f, 83.99998f, 0.000061f },
	{ -449.9138f, 84, -153.2232f },
	{ -363.1198f, 84.00001f, -283.1197f },
	{ -233.2234f, 84.00001f, -369.9138f },
	{ -81.96985f, 84.00001f, -400 },
	{ 40, 83.99998f, -400 },
	{ 20.36038f, 83.99998f, 407.6802f },
	{ -92.70831f, 83.99997f, 407.6802f },
	{ -235.3244f, 83.99997f, 377.0169f },
	{ -366.3907f, 83.99997f, 288.5558f },
	{ -453.9671f, 83.99998f, 156.1655f },
	{ -484.7197f, 83.99998f, 0.000062f },
	{ -453.9671f, 84, -156.1653f },
	{ -366.3908f, 84.00001f, -288.5558f },
	{ -235.3244f, 84.00001f, -377.0169f },
	{ -82.70831f, 84.00001f, -407.6802f },
	{ 40, 84, -405 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00035678[] = {
	{ 0, 0, -1 },
	{ 0.104737f, 0, -0.9945f },
	{ 0.388915f, 0, -0.9212739f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.923879f, 0, -0.382684f },
	{ 1, 0, 0 },
	{ 0.92388f, 0, 0.382683f },
	{ 0.7071069f, 0, 0.707106f },
	{ 0.382684f, 0, 0.92388f },
	{ 0.098017f, 0, 0.995185f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.105693f, 0, 0.994399f },
	{ -0.391943f, 0, 0.919989f },
	{ -0.710382f, 0, 0.703816f },
	{ -0.925127f, 0, 0.379658f },
	{ -1, 0, 0 },
	{ -0.925127f, 0, -0.379658f },
	{ -0.710383f, 0, -0.703816f },
	{ -0.385723f, 0, -0.922615f },
	{ -0.08810499f, 0, -0.996111f },
	{ 0.021837f, 0, -0.999762f },
	{ 0, 0.717428f, -0.696633f },
	{ 0.07141799f, 0.731459f, -0.678135f },
	{ 0.256319f, 0.752088f, -0.607177f },
	{ 0.464669f, 0.753767f, -0.464669f },
	{ 0.607119f, 0.753767f, -0.251477f },
	{ 0.657141f, 0.753767f, 0 },
	{ 0.60712f, 0.753767f, 0.251477f },
	{ 0.464669f, 0.753767f, 0.464669f },
	{ 0.251477f, 0.753767f, 0.607119f },
	{ 0.06700499f, 0.729848f, 0.680317f },
	{ 0, 0.707106f, 0.7071069f },
	{ 0, 0.696313f, 0.717738f },
	{ -0.077094f, 0.684073f, 0.725328f },
	{ -0.292099f, 0.666777f, 0.685629f },
	{ -0.5300879f, 0.665721f, 0.525188f },
	{ -0.690112f, 0.665985f, 0.283212f },
	{ -0.745868f, 0.6660939f, 0 },
	{ -0.690112f, 0.665985f, -0.283211f },
	{ -0.5300879f, 0.665721f, -0.525188f },
	{ -0.287919f, 0.6654519f, -0.688677f },
	{ -0.06433699f, 0.683201f, -0.7273909f },
	{ 0.015334f, 0.711972f, -0.702041f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00035888 = { vertexSTG12_00035468, normalSTG12_00035678, LengthOfArray(vertexSTG12_00035468), meshlistSTG12_00035450, matlistSTG12_000352A8, LengthOfArray(meshlistSTG12_00035450), LengthOfArray(matlistSTG12_000352A8),{ -222.3598f, 81.99998f, 0 }, 484.8049f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_000358B0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00035888, -100, 0, -500, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_000358E4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 55, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003590C[] = {
	0x8000u | 6, 8, 9, 6, 7, 4, 5
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003591A[] = {
	4, 1, 5, 0, 4,
	4, 2, 8, 3, 9
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00035930[] = {
	{ 0, -255 },
	{ 510, -255 },
	{ 0, -37 },
	{ 510, -37 },
	{ 0, 255 },
	{ 510, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00035948[] = {
	{ 506, 57 },
	{ 506, 1 },
	{ 3, 57 },
	{ 3, 1 },
	{ 3, 1 },
	{ 3, 57 },
	{ 506, 1 },
	{ 506, 57 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00035968[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_0003590C, NULL, NULL, NULL, uvSTG12_00035930, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, polySTG12_0003591A, NULL, NULL, NULL, uvSTG12_00035948, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00035998[] = {
	{ 60, -0.00001f, -595 },
	{ 60, -0.00001f, -510 },
	{ 60, 80, -595 },
	{ 60, 80, -510 },
	{ 60, 6, -595 },
	{ 60, 6, -510 },
	{ 60, 43, -595 },
	{ 60, 43, -510 },
	{ 60, 70.5f, -595 },
	{ 60, 70.5f, -510 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00035A10[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00035A88 = { vertexSTG12_00035998, normalSTG12_00035A10, LengthOfArray(vertexSTG12_00035998), meshlistSTG12_00035968, matlistSTG12_000358E4, LengthOfArray(meshlistSTG12_00035968), LengthOfArray(matlistSTG12_000358E4),{ 60, 40, -552.5f }, 58.36309f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00035AB0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00035A88, 0, 0, 200, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00035AE4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00035B34[] = {
	0x8000u | 5, 2, 6, 8, 7, 5
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00035B40[] = {
	4, 0, 6, 4, 7
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00035B4A[] = {
	0x8000u | 5, 3, 5, 1, 7, 4
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00035B58[] = {
	{ 1019, 0 },
	{ 1019, 255 },
	{ 135, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00035B6C[] = {
	{ 1019, 255 },
	{ 1019, 0 },
	{ 0, 254 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00035B7C[] = {
	{ 0, 254 },
	{ 0 },
	{ 1020, 254 },
	{ 557, 0 },
	{ 1019, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00035B90[] = {
	{ NJD_MESHSET_TRIMESH | 1, 1, polySTG12_00035B34, NULL, NULL, NULL, uvSTG12_00035B58, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, polySTG12_00035B40, NULL, NULL, NULL, uvSTG12_00035B6C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, polySTG12_00035B4A, NULL, NULL, NULL, uvSTG12_00035B7C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00035BD8[] = {
	{ -140, 6, -140 },
	{ -140, 6, -310 },
	{ -140, 70, -140 },
	{ -140, 70, -310 },
	{ -140, 6.000006f, -290 },
	{ -140, 70, -290 },
	{ -140, 35, -140 },
	{ -140, 35, -290 },
	{ -140, 70, -270 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00035C44[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00035CB0 = { vertexSTG12_00035BD8, normalSTG12_00035C44, LengthOfArray(vertexSTG12_00035BD8), meshlistSTG12_00035B90, matlistSTG12_00035AE4, LengthOfArray(meshlistSTG12_00035B90), LengthOfArray(matlistSTG12_00035AE4),{ -140, 38, -225 }, 90.824f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00035CD8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00035CB0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00035D0C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00035D48[] = {
	4, 2, 0, 3, 1
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00035D52[] = {
	4, 5, 4, 2, 0,
	4, 6, 7, 1, 3
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00035D68[] = {
	{ 510, 254 },
	{ 0, 254 },
	{ 510, -255 },
	{ 0, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00035D78[] = {
	{ 1016, 186 },
	{ 3, 186 },
	{ 1016, 68 },
	{ 3, 68 },
	{ 1016, 186 },
	{ 3, 186 },
	{ 1016, 68 },
	{ 3, 68 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00035D98[] = {
	{ NJD_MESHSET_TRIMESH | 1, 1, polySTG12_00035D48, NULL, NULL, NULL, uvSTG12_00035D68, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, polySTG12_00035D52, NULL, NULL, NULL, uvSTG12_00035D78, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00035DC8[] = {
	{ -140, 6, -310 },
	{ -140, 70, -310 },
	{ -60, 6, -310 },
	{ -60, 70, -310 },
	{ -140, 0, -310 },
	{ -60, 0, -310 },
	{ -140, 80, -310 },
	{ -60, 80, -310 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00035E28[] = {
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00035E88 = { vertexSTG12_00035DC8, normalSTG12_00035E28, LengthOfArray(vertexSTG12_00035DC8), meshlistSTG12_00035D98, matlistSTG12_00035D0C, LengthOfArray(meshlistSTG12_00035D98), LengthOfArray(matlistSTG12_00035D0C),{ -100, 40, -310 }, 40, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00035EB0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00035E88, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00035EE4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00035F34[] = {
	8, 4, 5, 6, 7, 12, 13, 18, 19
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00035F46[] = {
	10, 21, 20, 25, 24, 17, 16, 11, 10, 3, 2
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00035F5C[] = {
	10, 23, 21, 22, 25, 14, 17, 8, 11, 0, 3
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00035F72[] = {
	3, 23, 22, 19,
	0x8000u | 8, 0, 8, 6, 14, 12, 22, 18, 19,
	6, 9, 5, 1, 4, 0, 6,
	0x8000u | 7, 5, 7, 9, 13, 15, 19, 23
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00035FAC[] = {
	{ 0, 255 },
	{ 0, -765 },
	{ 680, 255 },
	{ 680, -765 },
	{ 1360, 255 },
	{ 1360, -765 },
	{ 2040, 255 },
	{ 2040, -765 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00035FCC[] = {
	{ 0, 255 },
	{ 0 },
	{ 749, 255 },
	{ 749, 0 },
	{ 1348, 255 },
	{ 1348, 0 },
	{ 1950, 255 },
	{ 1950, 0 },
	{ 2550, 255 },
	{ 2550, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00035FF4[] = {
	{ 0, 255 },
	{ 0 },
	{ 749, 255 },
	{ 749, 0 },
	{ 1348, 255 },
	{ 1348, 0 },
	{ 1950, 255 },
	{ 1950, 0 },
	{ 2550, 255 },
	{ 2550, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003601C[] = {
	{ 510, 251 },
	{ 4590, 251 },
	{ 510, 3 },
	{ 16830, 251 },
	{ 12750, 251 },
	{ 12750, 3 },
	{ 8670, 251 },
	{ 8670, 3 },
	{ 4590, 251 },
	{ 4590, 3 },
	{ 510, 3 },
	{ 24990, 251 },
	{ 20910, 3 },
	{ 20910, 251 },
	{ 16830, 3 },
	{ 16830, 251 },
	{ 12750, 3 },
	{ 20910, 3 },
	{ 24990, 3 },
	{ 24990, 251 },
	{ 29070, 3 },
	{ 29070, 251 },
	{ 32130, 3 },
	{ 32130, 251 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0003607C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_00035F34, NULL, NULL, NULL, uvSTG12_00035FAC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, polySTG12_00035F46, NULL, NULL, NULL, uvSTG12_00035FCC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, polySTG12_00035F5C, NULL, NULL, NULL, uvSTG12_00035FF4, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, polySTG12_00035F72, NULL, NULL, NULL, uvSTG12_0003601C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_000360DC[] = {
	{ -60, 6, -860 },
	{ -60, 6, -710 },
	{ -60, 70.00001f, -860 },
	{ -60, 35, -860 },
	{ -60, 0, -860 },
	{ -60, 0, -710 },
	{ 60, 0, -860 },
	{ 60, 0, -710 },
	{ 60, 6, -860 },
	{ 60, 6, -710 },
	{ 60, 70, -860 },
	{ 60, 35, -860 },
	{ 180, 0, -860 },
	{ 180, 0, -710 },
	{ 180, 6, -860 },
	{ 180, 6, -710 },
	{ 180, 70, -860 },
	{ 180, 35, -860 },
	{ 300, 0, -860 },
	{ 300, 0, -710 },
	{ 300, 70, -710 },
	{ 300, 35, -710 },
	{ 300, 6, -860 },
	{ 300, 6, -710 },
	{ 300, 70, -860 },
	{ 300, 35, -860 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00036214[] = {
	{ 0.447214f, 0, 0.8944269f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.8944269f, 0, -0.447214f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0003634C = { vertexSTG12_000360DC, normalSTG12_00036214, LengthOfArray(vertexSTG12_000360DC), meshlistSTG12_0003607C, matlistSTG12_00035EE4, LengthOfArray(meshlistSTG12_0003607C), LengthOfArray(matlistSTG12_00035EE4),{ 120, 35, -785 }, 195, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00036374 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0003634C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_000363A8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003640C[] = {
	8, 44, 45, 65, 64, 63, 62, 61, 60,
	14, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003643C[] = {
	4, 45, 44, 2, 1,
	0x8000u | 8, 2, 45, 31, 64, 28, 62, 25, 60,
	0x8000u | 8, 44, 1, 65, 32, 63, 29, 61, 26,
	4, 58, 59, 22, 23,
	0x8000u | 14, 46, 4, 48, 7, 50, 10, 52, 13, 54, 16, 56, 19, 58, 22,
	4, 47, 46, 5, 4,
	0x8000u | 14, 5, 47, 8, 49, 11, 51, 14, 53, 17, 55, 20, 57, 23, 59,
	4, 61, 60, 26, 25
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000364C4[] = {
	14, 3, 33, 6, 34, 9, 35, 12, 36, 15, 37, 18, 38, 21, 39,
	8, 24, 40, 27, 41, 30, 42, 0, 43
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000364F4[] = {
	8, 2, 43, 31, 42, 28, 41, 25, 40,
	14, 33, 4, 34, 7, 35, 10, 36, 13, 37, 16, 38, 19, 39, 22
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00036524[] = {
	{ 2549, -276 },
	{ 2549, 255 },
	{ 2289, -276 },
	{ 2309, 255 },
	{ 1785, -332 },
	{ 1417, 163 },
	{ 1352, -492 },
	{ 672, -114 },
	{ 1060, -733 },
	{ 174, -529 },
	{ 960, -1020 },
	{ 0, -1020 },
	{ 1060, -1304 },
	{ 174, -1508 },
	{ 1352, -1545 },
	{ 672, -1925 },
	{ 1785, -1705 },
	{ 1417, -2201 },
	{ 2289, -1761 },
	{ 2245, -2295 },
	{ 2549, -1761 },
	{ 2549, -2295 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003657C[] = {
	{ 4080, 255 },
	{ 0, 255 },
	{ 4080, 0 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ 720, 0 },
	{ 720, 255 },
	{ 3437, 0 },
	{ 3437, 255 },
	{ 6120, 0 },
	{ 6120, 255 },
	{ 5610, 255 },
	{ 5610, 0 },
	{ 4482, 255 },
	{ 4482, 0 },
	{ 2253, 255 },
	{ 2253, 0 },
	{ 0, 255 },
	{ 0 },
	{ 4080, 255 },
	{ 0, 255 },
	{ 4080, 0 },
	{ 0 },
	{ 16830, 255 },
	{ 16830, 0 },
	{ 15746, 255 },
	{ 15746, 0 },
	{ 12744, 255 },
	{ 12744, 0 },
	{ 9558, 255 },
	{ 9558, 0 },
	{ 6372, 255 },
	{ 6372, 0 },
	{ 3186, 255 },
	{ 3186, 0 },
	{ 0, 255 },
	{ 0 },
	{ 4080, 255 },
	{ 0, 255 },
	{ 4080, 0 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ 928, 0 },
	{ 928, 255 },
	{ 2762, 0 },
	{ 2762, 255 },
	{ 4621, 0 },
	{ 4621, 255 },
	{ 6480, 0 },
	{ 6480, 255 },
	{ 8341, 0 },
	{ 8341, 255 },
	{ 10200, 0 },
	{ 10200, 255 },
	{ 4080, 255 },
	{ 0, 255 },
	{ 4080, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003666C[] = {
	{ 6120, 0 },
	{ 6120, 255 },
	{ 5723, 0 },
	{ 5726, 255 },
	{ 4628, 0 },
	{ 4632, 255 },
	{ 3472, 0 },
	{ 3474, 255 },
	{ 2313, 0 },
	{ 2315, 255 },
	{ 1155, 0 },
	{ 1156, 255 },
	{ 0 },
	{ 0, 255 },
	{ 2550, 0 },
	{ 2550, 255 },
	{ 1434, 0 },
	{ 1432, 255 },
	{ 302, 0 },
	{ 300, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000366C4[] = {
	{ 2040, 255 },
	{ 2040, 0 },
	{ 1799, 255 },
	{ 1799, 0 },
	{ 892, 255 },
	{ 892, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 392, 255 },
	{ 392, 0 },
	{ 1483, 255 },
	{ 1483, 0 },
	{ 2644, 255 },
	{ 2644, 0 },
	{ 3802, 255 },
	{ 3802, 0 },
	{ 4961, 255 },
	{ 4961, 0 },
	{ 6120, 255 },
	{ 6120, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0003671C[] = {
	{ NJD_MESHSET_TRIMESH | 1, 2, polySTG12_0003640C, NULL, NULL, NULL, uvSTG12_00036524, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 8, polySTG12_0003643C, NULL, NULL, NULL, uvSTG12_0003657C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, polySTG12_000364C4, NULL, NULL, NULL, uvSTG12_0003666C, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, polySTG12_000364F4, NULL, NULL, NULL, uvSTG12_000366C4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0003677C[] = {
	{ -140, 70, -860 },
	{ -140, 5.999952f, -710 },
	{ -139.9999f, 6.000048f, -860 },
	{ -140, 70.00005f, -140 },
	{ -140, 6.000042f, -140 },
	{ -140, 5.999958f, -290 },
	{ -188.0301f, 69.99998f, -140 },
	{ -187.8793f, 6.000031f, -140 },
	{ -180.9849f, 5.999997f, -290 },
	{ -317.6161f, 69.99998f, -167.7654f },
	{ -318.3658f, 6.000031f, -165.9554f },
	{ -260.4385f, 5.999997f, -305.8043f },
	{ -434.2813f, 69.99998f, -245.7186f },
	{ -435.6667f, 6.000032f, -244.3333f },
	{ -328.631f, 6, -351.369f },
	{ -512.2346f, 70, -362.3839f },
	{ -514.0446f, 6.00004f, -361.6342f },
	{ -374.1957f, 6.000002f, -419.5615f },
	{ -539.6081f, 70.00001f, -499.9999f },
	{ -541.5673f, 6.000046f, -499.9999f },
	{ -390.1959f, 6.000006f, -499.9999f },
	{ -512.2346f, 70.00001f, -637.616f },
	{ -514.0447f, 6.00005f, -638.3658f },
	{ -374.1957f, 6.00001f, -580.4384f },
	{ -434.2814f, 70.00002f, -754.2813f },
	{ -435.6667f, 6.000057f, -755.6666f },
	{ -328.631f, 6.000011f, -648.6309f },
	{ -317.6161f, 70.00002f, -832.2346f },
	{ -318.3658f, 6.000059f, -834.0447f },
	{ -260.4385f, 6.000013f, -694.1957f },
	{ -178.0301f, 70.00002f, -860 },
	{ -177.8793f, 6.000059f, -860 },
	{ -180.9849f, 6.000014f, -710 },
	{ -140, 35.00005f, -140 },
	{ -187.8793f, 35.00003f, -140 },
	{ -318.3658f, 35.00003f, -165.9554f },
	{ -435.6667f, 35.00003f, -244.3333f },
	{ -514.0446f, 35.00003f, -361.6342f },
	{ -541.5673f, 35.00005f, -499.9999f },
	{ -514.0447f, 35.00005f, -638.3658f },
	{ -435.6667f, 35.00006f, -755.6666f },
	{ -318.3658f, 35.00006f, -834.0447f },
	{ -177.8793f, 35.00006f, -860 },
	{ -139.9999f, 35.00005f, -860 },
	{ -140, -0.00048f, -710 },
	{ -139.9999f, 0.000048f, -860 },
	{ -140, 0.000042f, -140 },
	{ -140, -0.00042f, -290 },
	{ -187.8793f, 0.000031f, -140 },
	{ -180.9849f, -0.00003f, -290 },
	{ -318.3658f, 0.000031f, -165.9554f },
	{ -260.4385f, -0.00003f, -305.8043f },
	{ -435.6667f, 0.000032f, -244.3333f },
	{ -328.631f, 0, -351.369f },
	{ -514.0446f, 0.00004f, -361.6342f },
	{ -374.1957f, 0.000002f, -419.5615f },
	{ -541.5673f, 0.000046f, -499.9999f },
	{ -390.1959f, 0.000006f, -499.9999f },
	{ -514.0447f, 0.00005f, -638.3658f },
	{ -374.1957f, 0.00001f, -580.4384f },
	{ -435.6667f, 0.000057f, -755.6666f },
	{ -328.631f, 0.000011f, -648.6309f },
	{ -318.3658f, 0.000059f, -834.0447f },
	{ -260.4385f, 0.000013f, -694.1957f },
	{ -177.8793f, 0.000059f, -860 },
	{ -180.9849f, 0.000014f, -710 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00036A94[] = {
	{ 0, 0, 1 },
	{ -0.707106f, 0, -0.7071069f },
	{ -0.447214f, 0, 0.8944269f },
	{ 0, 0, -1 },
	{ -0.447213f, 0, -0.8944269f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.105596f, -0.013646f, -0.994316f },
	{ 0.098017f, 0, -0.995185f },
	{ -0.098017f, 0, 0.995185f },
	{ 0.38908f, -0.04169f, -0.92026f },
	{ 0.382683f, 0, -0.92388f },
	{ -0.382684f, 0, 0.92388f },
	{ 0.706002f, -0.055887f, -0.706002f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.922436f, -0.055887f, -0.382085f },
	{ 0.92388f, -0.00001f, -0.382683f },
	{ -0.92388f, 0, 0.382684f },
	{ 0.998437f, -0.055887f, 0 },
	{ 1, -0.00001f, 0 },
	{ -1, 0, 0 },
	{ 0.979311f, -0.054818f, 0.194797f },
	{ 0.768623f, -0.00001f, 0.639702f },
	{ -0.881921f, 0, 0.471397f },
	{ 0.5547349f, -0.054818f, 0.830219f },
	{ 0.885147f, 0, 0.465312f },
	{ 0.098017f, 0, -0.995185f },
	{ 0.382246f, -0.041724f, 0.923118f },
	{ 0.376366f, 0, 0.926471f },
	{ -0.382684f, 0, -0.92388f },
	{ 0.098257f, -0.013614f, 0.995068f },
	{ 0.09121899f, 0, 0.995831f },
	{ -0.098017f, 0, -0.995185f },
	{ 0, 0, -1 },
	{ 0.101522f, -0.006784f, -0.99481f },
	{ 0.385937f, -0.020789f, -0.922291f },
	{ 0.706832f, -0.027858f, -0.706832f },
	{ 0.923521f, -0.027858f, -0.382535f },
	{ 0.999612f, -0.027859f, 0 },
	{ 0.980419f, -0.027324f, 0.195017f },
	{ 0.555363f, -0.027324f, 0.831159f },
	{ 0.379404f, -0.020807f, 0.924997f },
	{ 0.094473f, -0.006768f, 0.995504f },
	{ 0, 0, 1 },
	{ -0.57735f, 0.577351f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.577351f },
	{ -0.57735f, 0.577351f, 0.57735f },
	{ 0.071346f, 0.6856959f, -0.724383f },
	{ -0.06700499f, 0.729849f, 0.680317f },
	{ 0.285559f, 0.665719f, -0.689401f },
	{ -0.251477f, 0.753767f, 0.607119f },
	{ 0.527645f, 0.665719f, -0.527645f },
	{ -0.464669f, 0.753768f, 0.464669f },
	{ 0.689401f, 0.665719f, -0.285559f },
	{ -0.607119f, 0.753767f, 0.251477f },
	{ 0.7462029f, 0.665719f, 0 },
	{ -0.657141f, 0.753767f, 0 },
	{ 0.388063f, 0.567722f, 0.726016f },
	{ -0.713105f, 0.588384f, 0.381163f },
	{ 0.8192559f, 0.567722f, 0.08069f },
	{ 0.079255f, 0.588384f, -0.804688f },
	{ 0.281293f, 0.6643839f, 0.692436f },
	{ -0.251477f, 0.753767f, -0.607119f },
	{ 0.06627399f, 0.68714f, 0.723496f },
	{ -0.06700499f, 0.729849f, -0.680317f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00036DAC = { vertexSTG12_0003677C, normalSTG12_00036A94, LengthOfArray(vertexSTG12_0003677C), meshlistSTG12_0003671C, matlistSTG12_000363A8, LengthOfArray(meshlistSTG12_0003671C), LengthOfArray(matlistSTG12_000363A8),{ -340.7836f, 35, -500 }, 412.2064f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00036DD4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00036DAC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00036E08[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 34, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00036E1C[] = {
	10, 3, 11, 10, 5, 6, 2, 1, 9, 8, 7,
	12, 8, 0, 1, 7, 6, 9, 10, 2, 3, 5, 4, 11
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00036E4C[] = {
	{ 0 },
	{ 0, 102 },
	{ 5440, 102 },
	{ 5440, 178 },
	{ 10879, 178 },
	{ 5440, 0 },
	{ 10880, 0 },
	{ 10880, 101 },
	{ 16320, 101 },
	{ 16320, 178 },
	{ 16320, 101 },
	{ 16320, 0 },
	{ 10880, 0 },
	{ 16320, 178 },
	{ 10879, 178 },
	{ 10880, 101 },
	{ 5440, 102 },
	{ 5440, 0 },
	{ 0 },
	{ 5440, 178 },
	{ 0, 178 },
	{ 0, 102 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00036EA4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, polySTG12_00036E1C, NULL, NULL, NULL, uvSTG12_00036E4C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00036EBC[] = {
	{ -60.37266f, -38.50001f, 295.0628f },
	{ -169.2485f, -38.50001f, 249.965f },
	{ -252.5784f, -38.50001f, 166.6351f },
	{ -297.6763f, -38.5f, 57.75927f },
	{ -295.5301f, -40.5f, 57.2725f },
	{ -250.7679f, -40.50001f, 165.3374f },
	{ -168.0586f, -40.50001f, 248.0467f },
	{ -59.99366f, -40.50001f, 292.8087f },
	{ -60.37267f, -42.50001f, 295.0628f },
	{ -169.2485f, -42.50001f, 249.965f },
	{ -252.5784f, -42.50001f, 166.6351f },
	{ -297.6763f, -42.5f, 57.75927f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00036F4C[] = {
	{ -0.198969f, 0.854208f, 0.480354f },
	{ -0.277465f, 0.868188f, 0.411415f },
	{ -0.411606f, 0.869664f, 0.272517f },
	{ -0.449f, 0.873962f, 0.185982f },
	{ 0.923879f, 0.000003f, -0.382684f },
	{ 0.833415f, 0.000002f, -0.552647f },
	{ 0.558599f, -0.00003f, -0.829438f },
	{ 0.382683f, -0.00006f, -0.92388f },
	{ -0.198971f, -0.854205f, 0.480359f },
	{ -0.277464f, -0.868187f, 0.411418f },
	{ -0.411606f, -0.869664f, 0.272517f },
	{ -0.449f, -0.873962f, 0.185982f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00036FDC = { vertexSTG12_00036EBC, normalSTG12_00036F4C, LengthOfArray(vertexSTG12_00036EBC), meshlistSTG12_00036EA4, matlistSTG12_00036E08, LengthOfArray(meshlistSTG12_00036EA4), LengthOfArray(matlistSTG12_00036E08),{ -178.835f, -40.50001f, 176.1676f }, 168.1051f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00037004 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00036FDC, 751.4944f, 138.5f, -648.8f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00037038[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00037060[] = {
	0x8000u | 8, 7, 15, 6, 14, 5, 13, 4, 12,
	0x8000u | 8, 3, 11, 2, 10, 1, 9, 0, 8,
	8, 8, 15, 9, 14, 10, 13, 11, 12
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00037098[] = {
	{ 255, 255 },
	{ 177, 255 },
	{ 255, -2464 },
	{ 177, -2464 },
	{ 255, -5185 },
	{ 177, -5185 },
	{ 255, -7904 },
	{ 177, -7904 },
	{ 0, -7904 },
	{ 77, -7904 },
	{ 0, -5184 },
	{ 77, -5184 },
	{ 0, -2464 },
	{ 77, -2464 },
	{ 0, 255 },
	{ 77, 255 },
	{ 77, 255 },
	{ 177, 255 },
	{ 77, -2464 },
	{ 177, -2464 },
	{ 77, -5184 },
	{ 177, -5185 },
	{ 77, -7904 },
	{ 177, -7904 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_000370F8[] = {
	{ NJD_MESHSET_TRIMESH | 1, 3, polySTG12_00037060, NULL, NULL, NULL, uvSTG12_00037098, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00037110[] = {
	{ -60.37266f, -44.50001f, 295.0628f },
	{ -169.2485f, -44.50001f, 249.965f },
	{ -252.5784f, -44.50001f, 166.6351f },
	{ -297.6763f, -44.5f, 57.75927f },
	{ -292.6039f, -44.5f, 56.70544f },
	{ -248.2851f, -44.50001f, 163.7004f },
	{ -166.3946f, -44.50001f, 245.5908f },
	{ -59.39965f, -44.50001f, 289.9096f },
	{ -60.37266f, -40.50001f, 295.0628f },
	{ -169.2485f, -40.50001f, 249.965f },
	{ -252.5784f, -40.50001f, 166.6351f },
	{ -297.6763f, -40.5f, 57.75927f },
	{ -292.6039f, -40.5f, 56.70544f },
	{ -248.2851f, -40.50001f, 163.7004f },
	{ -166.3946f, -40.50001f, 245.5908f },
	{ -59.39965f, -40.50001f, 289.9096f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_000371D0[] = {
	{ -0.382683f, 0, 0.92388f },
	{ -0.5555699f, 0, 0.83147f },
	{ -0.831469f, 0, 0.555571f },
	{ -0.923879f, 0, 0.382684f },
	{ 0.923879f, 0, -0.382684f },
	{ 0.831469f, 0, -0.5555699f },
	{ 0.5555699f, 0, -0.83147f },
	{ 0.382684f, 0, -0.923879f },
	{ -0.288883f, 0.655852f, 0.697427f },
	{ -0.414568f, 0.665719f, 0.620445f },
	{ -0.620445f, 0.665719f, 0.414568f },
	{ -0.6934299f, 0.660799f, 0.287229f },
	{ 0.615442f, 0.745818f, -0.254925f },
	{ 0.546393f, 0.753767f, -0.365088f },
	{ 0.365088f, 0.753767f, -0.546393f },
	{ 0.253461f, 0.749217f, -0.611908f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00037290 = { vertexSTG12_00037110, normalSTG12_000371D0, LengthOfArray(vertexSTG12_00037110), meshlistSTG12_000370F8, matlistSTG12_00037038, LengthOfArray(meshlistSTG12_000370F8), LengthOfArray(matlistSTG12_00037038),{ -178.538f, -42.50001f, 175.8841f }, 168.5156f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_000372B8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00037290, 751.4944f, 134.5f, -648.8f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_000372EC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00037328[] = {
	8, 23, 40, 21, 41, 19, 42, 17, 43,
	8, 47, 9, 46, 11, 45, 13, 44, 15,
	8, 31, 36, 29, 37, 27, 38, 25, 39,
	8, 35, 1, 34, 3, 33, 5, 32, 7
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00037370[] = {
	8, 0, 35, 2, 34, 4, 33, 6, 32,
	8, 24, 39, 26, 38, 28, 37, 30, 36,
	8, 40, 22, 41, 20, 42, 18, 43, 16,
	8, 44, 14, 45, 12, 46, 10, 47, 8
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000373B8[] = {
	{ 3554, 186 },
	{ 3554, 68 },
	{ 3075, 186 },
	{ 3075, 68 },
	{ 2538, 186 },
	{ 2538, 68 },
	{ 2059, 186 },
	{ 2059, 68 },
	{ 29, 68 },
	{ 29, 186 },
	{ 508, 68 },
	{ 508, 186 },
	{ 984, 68 },
	{ 984, 186 },
	{ 1522, 68 },
	{ 1522, 186 },
	{ 5645, 186 },
	{ 5645, 68 },
	{ 5107, 186 },
	{ 5107, 68 },
	{ 4570, 186 },
	{ 4570, 68 },
	{ 4091, 186 },
	{ 4091, 68 },
	{ 6123, 68 },
	{ 6123, 186 },
	{ 6661, 68 },
	{ 6661, 186 },
	{ 7140, 68 },
	{ 7140, 186 },
	{ 7618, 68 },
	{ 7618, 186 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00037438[] = {
	{ 3060, 255 },
	{ 3060, 0 },
	{ 2039, 255 },
	{ 2039, 0 },
	{ 1019, 255 },
	{ 1019, 0 },
	{ 0, 255 },
	{ 0 },
	{ 3060, 255 },
	{ 3060, 0 },
	{ 2039, 255 },
	{ 2039, 0 },
	{ 1019, 255 },
	{ 1019, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ 1019, 0 },
	{ 1019, 255 },
	{ 2039, 0 },
	{ 2039, 255 },
	{ 3060, 0 },
	{ 3060, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1019, 0 },
	{ 1019, 255 },
	{ 2039, 0 },
	{ 2039, 255 },
	{ 3060, 0 },
	{ 3060, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_000374B8[] = {
	{ NJD_MESHSET_TRIMESH | 1, 4, polySTG12_00037328, NULL, NULL, NULL, uvSTG12_000373B8, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, polySTG12_00037370, NULL, NULL, NULL, uvSTG12_00037438, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_000374E8[] = {
	{ 215.7728f, -0.000211f, 42.92f },
	{ 196.157f, -0.000211f, 39.01821f },
	{ 182.9233f, -0.000211f, 122.2256f },
	{ 166.2939f, -0.000211f, 111.1142f },
	{ 122.2255f, -0.000211f, 182.9235f },
	{ 111.114f, -0.000211f, 166.2941f },
	{ 42.91986f, -0.000211f, 215.7729f },
	{ 39.01806f, -0.000211f, 196.1572f },
	{ -42.91986f, -0.000211f, 215.7729f },
	{ -39.01806f, -0.000211f, 196.1572f },
	{ -122.2255f, -0.000211f, 182.9234f },
	{ -111.1141f, -0.000211f, 166.294f },
	{ -182.9233f, -0.000211f, 122.2255f },
	{ -166.2939f, -0.000211f, 111.1142f },
	{ -215.7728f, -0.000211f, 42.92f },
	{ -196.157f, -0.000211f, 39.01815f },
	{ -215.7728f, -0.000211f, -42.91978f },
	{ -196.157f, -0.000211f, -39.01798f },
	{ -182.9233f, -0.000211f, -122.2253f },
	{ -166.2939f, -0.000211f, -111.1139f },
	{ -122.2254f, -0.000211f, -182.9232f },
	{ -111.114f, -0.000211f, -166.2938f },
	{ -42.9198f, -0.000211f, -215.7726f },
	{ -39.018f, -0.000211f, -196.1569f },
	{ 42.91992f, -0.000211f, -215.7726f },
	{ 39.01812f, -0.000211f, -196.1569f },
	{ 122.2255f, -0.000211f, -182.9231f },
	{ 111.1141f, -0.000211f, -166.2937f },
	{ 182.9233f, -0.000211f, -122.2252f },
	{ 166.2939f, -0.000211f, -111.1138f },
	{ 215.7728f, -0.000211f, -42.91966f },
	{ 196.157f, -0.000211f, -39.0178f },
	{ 40.96899f, 1.999789f, 205.965f },
	{ 116.6697f, 1.999789f, 174.6088f },
	{ 174.6086f, 1.999789f, 116.6699f },
	{ 205.9649f, 1.999789f, 40.96913f },
	{ 205.9649f, 1.999789f, -40.96873f },
	{ 174.6086f, 1.999789f, -116.6695f },
	{ 116.6698f, 1.999789f, -174.6084f },
	{ 40.96899f, 1.999789f, -205.9648f },
	{ -40.96887f, 1.999789f, -205.9648f },
	{ -116.6697f, 1.999789f, -174.6085f },
	{ -174.6086f, 1.999789f, -116.6697f },
	{ -205.9649f, 1.999789f, -40.96885f },
	{ -205.9649f, 1.999789f, 40.96907f },
	{ -174.6086f, 1.999789f, 116.6698f },
	{ -116.6698f, 1.999789f, 174.6087f },
	{ -40.96899f, 1.999789f, 205.965f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00037728[] = {
	{ 0.184597f, 0.979835f, 0.07646199f },
	{ -0.184597f, 0.979836f, -0.07646199f },
	{ 0.163064f, 0.980581f, 0.108956f },
	{ -0.163064f, 0.980581f, -0.108956f },
	{ 0.108956f, 0.980581f, 0.163064f },
	{ -0.108956f, 0.980581f, -0.163064f },
	{ 0.07646199f, 0.979835f, 0.184597f },
	{ -0.07646199f, 0.979836f, -0.184597f },
	{ -0.076463f, 0.979835f, 0.184597f },
	{ 0.07646199f, 0.979836f, -0.184597f },
	{ -0.108956f, 0.980581f, 0.163065f },
	{ 0.108956f, 0.980581f, -0.163065f },
	{ -0.163064f, 0.980581f, 0.108956f },
	{ 0.163065f, 0.980581f, -0.108956f },
	{ -0.184597f, 0.979835f, 0.07646199f },
	{ 0.184597f, 0.979835f, -0.07646199f },
	{ -0.184597f, 0.979835f, -0.076463f },
	{ 0.184597f, 0.979835f, 0.076463f },
	{ -0.163065f, 0.980581f, -0.108956f },
	{ 0.163064f, 0.980581f, 0.108956f },
	{ -0.108956f, 0.980581f, -0.163064f },
	{ 0.108956f, 0.980581f, 0.163065f },
	{ -0.07646199f, 0.979835f, -0.184597f },
	{ 0.07646199f, 0.979835f, 0.184597f },
	{ 0.076463f, 0.979835f, -0.184597f },
	{ -0.076463f, 0.979835f, 0.184597f },
	{ 0.108956f, 0.980581f, -0.163064f },
	{ -0.108957f, 0.980581f, 0.163065f },
	{ 0.163065f, 0.980581f, -0.108956f },
	{ -0.163065f, 0.980581f, 0.108956f },
	{ 0.184597f, 0.979835f, -0.076463f },
	{ -0.184597f, 0.979836f, 0.07646199f },
	{ 0.009559999f, 0.999688f, 0.023079f },
	{ 0.013612f, 0.9997f, 0.020372f },
	{ 0.020372f, 0.9997f, 0.013612f },
	{ 0.023079f, 0.999688f, 0.009559999f },
	{ 0.023079f, 0.999688f, -0.009559999f },
	{ 0.020372f, 0.9997f, -0.013612f },
	{ 0.013612f, 0.9997f, -0.020372f },
	{ 0.009559999f, 0.999688f, -0.023079f },
	{ -0.009559999f, 0.999688f, -0.023079f },
	{ -0.013612f, 0.9997f, -0.020372f },
	{ -0.020372f, 0.9997f, -0.013612f },
	{ -0.023079f, 0.999688f, -0.009559999f },
	{ -0.023079f, 0.999688f, 0.009559999f },
	{ -0.020372f, 0.9997f, 0.013612f },
	{ -0.013612f, 0.9997f, 0.020372f },
	{ -0.009559999f, 0.999688f, 0.023079f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00037968 = { vertexSTG12_000374E8, normalSTG12_00037728, LengthOfArray(vertexSTG12_000374E8), meshlistSTG12_000374B8, matlistSTG12_000372EC, LengthOfArray(meshlistSTG12_000374B8), LengthOfArray(matlistSTG12_000372EC),{ 0, 0.999789f, 0.000137f }, 305.1487f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00037990 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00037968, 750, 78.99989f, -650, 0x8000, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_000379C4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 63, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 63, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000379EC[] = {
	0x8000u | 7, 70, 71, 69, 39, 37, 12, 10,
	0x8000u | 7, 74, 73, 75, 41, 43, 13, 15,
	0x8000u | 7, 75, 72, 74, 40, 42, 0, 14,
	0x8000u | 7, 77, 76, 78, 44, 46, 1, 3,
	0x8000u | 7, 78, 79, 77, 47, 45, 4, 2,
	0x8000u | 7, 82, 83, 81, 51, 49, 31, 29,
	0x8000u | 7, 81, 80, 82, 48, 50, 28, 30,
	7, 17, 19, 61, 63, 93, 95, 94,
	7, 11, 9, 38, 36, 70, 68, 69,
	0x8000u | 7, 86, 87, 85, 55, 53, 27, 25,
	0x8000u | 7, 85, 84, 86, 52, 54, 24, 26,
	0x8000u | 7, 90, 91, 89, 59, 57, 23, 21,
	0x8000u | 7, 89, 88, 90, 56, 58, 20, 22,
	0x8000u | 7, 64, 65, 66, 33, 34, 6, 7,
	0x8000u | 7, 66, 67, 64, 35, 32, 8, 5,
	0x8000u | 7, 93, 92, 94, 60, 62, 16, 18
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00037AEC[] = {
	6, 94, 95, 62, 63, 18, 19,
	6, 93, 92, 61, 60, 17, 16,
	6, 90, 91, 58, 59, 22, 23,
	6, 89, 88, 57, 56, 21, 20,
	6, 86, 87, 54, 55, 26, 27,
	6, 85, 84, 53, 52, 25, 24,
	6, 82, 83, 50, 51, 30, 31,
	6, 81, 80, 49, 48, 29, 28,
	6, 77, 76, 45, 44, 2, 1,
	6, 74, 73, 42, 41, 14, 13,
	6, 75, 72, 43, 40, 15, 0,
	6, 70, 71, 38, 39, 11, 12,
	6, 64, 65, 32, 33, 5, 6,
	6, 66, 67, 34, 35, 7, 8,
	6, 9, 10, 36, 37, 68, 69,
	6, 4, 3, 47, 46, 79, 78
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00037BCC[] = {
	{ 868, -976 },
	{ 868, -976 },
	{ 796, -907 },
	{ 673, -1282 },
	{ 500, -1109 },
	{ 442, -1627 },
	{ 155, -1340 },
	{ 967, -1016 },
	{ 967, -1016 },
	{ 1072, -1016 },
	{ 896, -1377 },
	{ 1139, -1377 },
	{ 816, -1785 },
	{ 1220, -1785 },
	{ 1072, -1016 },
	{ 1072, -1016 },
	{ 967, -1016 },
	{ 1139, -1377 },
	{ 896, -1377 },
	{ 1220, -1785 },
	{ 816, -1785 },
	{ 1169, -976 },
	{ 1169, -976 },
	{ 1243, -907 },
	{ 1364, -1282 },
	{ 1537, -1109 },
	{ 1595, -1627 },
	{ 1882, -1340 },
	{ 1243, -907 },
	{ 1243, -907 },
	{ 1169, -976 },
	{ 1537, -1109 },
	{ 1364, -1282 },
	{ 1882, -1340 },
	{ 1595, -1627 },
	{ 1282, -815 },
	{ 1282, -815 },
	{ 1282, -713 },
	{ 1632, -884 },
	{ 1632, -641 },
	{ 2040, -967 },
	{ 2040, -561 },
	{ 1282, -713 },
	{ 1282, -713 },
	{ 1282, -815 },
	{ 1632, -641 },
	{ 1632, -884 },
	{ 2040, -561 },
	{ 2040, -967 },
	{ 155, -187 },
	{ 442, 99 },
	{ 500, -418 },
	{ 673, -246 },
	{ 796, -621 },
	{ 868, -549 },
	{ 868, -549 },
	{ 442, -1627 },
	{ 155, -1340 },
	{ 673, -1282 },
	{ 500, -1109 },
	{ 868, -976 },
	{ 796, -907 },
	{ 796, -907 },
	{ 1243, -621 },
	{ 1243, -621 },
	{ 1169, -549 },
	{ 1537, -418 },
	{ 1364, -246 },
	{ 1882, -187 },
	{ 1595, 99 },
	{ 1169, -549 },
	{ 1169, -549 },
	{ 1243, -621 },
	{ 1364, -246 },
	{ 1537, -418 },
	{ 1595, 99 },
	{ 1882, -187 },
	{ 1072, -513 },
	{ 1072, -513 },
	{ 967, -513 },
	{ 1139, -152 },
	{ 896, -152 },
	{ 1220, 255 },
	{ 816, 255 },
	{ 967, -513 },
	{ 967, -513 },
	{ 1072, -513 },
	{ 896, -152 },
	{ 1139, -152 },
	{ 816, 255 },
	{ 1220, 255 },
	{ 756, -713 },
	{ 756, -713 },
	{ 756, -815 },
	{ 406, -641 },
	{ 406, -884 },
	{ 0, -561 },
	{ 0, -967 },
	{ 756, -815 },
	{ 756, -815 },
	{ 756, -713 },
	{ 406, -884 },
	{ 406, -641 },
	{ 0, -967 },
	{ 0, -561 },
	{ 796, -621 },
	{ 796, -621 },
	{ 868, -549 },
	{ 500, -418 },
	{ 673, -246 },
	{ 155, -187 },
	{ 442, 99 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00037D8C[] = {
	{ 816, 39 },
	{ 816, 67 },
	{ 544, -77 },
	{ 544, -6 },
	{ 227, -77 },
	{ 227, 77 },
	{ 768, 67 },
	{ 768, 39 },
	{ 430, -6 },
	{ 430, -77 },
	{ 38, 77 },
	{ 38, -77 },
	{ 1272, 45 },
	{ 1272, 77 },
	{ 1631, -89 },
	{ 1631, -7 },
	{ 2038, -89 },
	{ 2038, 89 },
	{ 1229, 77 },
	{ 1229, 45 },
	{ 1537, -7 },
	{ 1537, -89 },
	{ 1880, 89 },
	{ 1880, -89 },
	{ 1235, 45 },
	{ 1235, 77 },
	{ 1537, -89 },
	{ 1537, -7 },
	{ 1886, -89 },
	{ 1886, 89 },
	{ 1274, 77 },
	{ 1274, 45 },
	{ 1632, -7 },
	{ 1632, -89 },
	{ 2040, 89 },
	{ 2040, -89 },
	{ 1282, 39 },
	{ 1282, 67 },
	{ 1632, -77 },
	{ 1632, -6 },
	{ 2040, -77 },
	{ 2040, 77 },
	{ 1251, 67 },
	{ 1251, 39 },
	{ 1561, -6 },
	{ 1561, -77 },
	{ 1921, 77 },
	{ 1921, -77 },
	{ 1219, 39 },
	{ 1219, 67 },
	{ 1495, -77 },
	{ 1495, -6 },
	{ 1810, -77 },
	{ 1810, 77 },
	{ 767, 45 },
	{ 767, 77 },
	{ 408, -89 },
	{ 408, -7 },
	{ 1, -89 },
	{ 1, 89 },
	{ 808, 77 },
	{ 808, 45 },
	{ 502, -7 },
	{ 502, -89 },
	{ 158, 89 },
	{ 158, -89 },
	{ 765, 77 },
	{ 765, 45 },
	{ 406, -7 },
	{ 406, -89 },
	{ 0, 89 },
	{ 0, -89 },
	{ 757, 39 },
	{ 757, 67 },
	{ 408, -77 },
	{ 408, -6 },
	{ 0, -77 },
	{ 0, 77 },
	{ 784, 67 },
	{ 784, 39 },
	{ 476, -6 },
	{ 476, -77 },
	{ 116, 77 },
	{ 116, -77 },
	{ 153, 89 },
	{ 153, -89 },
	{ 500, -7 },
	{ 500, -89 },
	{ 800, 77 },
	{ 800, 45 },
	{ 2000, -77 },
	{ 2000, 77 },
	{ 1608, -77 },
	{ 1608, -6 },
	{ 1269, 39 },
	{ 1269, 67 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00037F0C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 16, polySTG12_000379EC, NULL, NULL, NULL, uvSTG12_00037BCC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 16, polySTG12_00037AEC, NULL, NULL, NULL, uvSTG12_00037D8C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00037F3C[] = {
	{ 7.572273f, -1.734406f, 37.44432f },
	{ 21.56407f, -7.260809f, 31.74384f },
	{ 21.56407f, -1.734406f, 31.74384f },
	{ 32.2729f, -7.260809f, 21.21054f },
	{ 32.2729f, -1.734406f, 21.21054f },
	{ -38.06842f, -1.734397f, -7.448154f },
	{ -38.06842f, -7.260799f, -7.448154f },
	{ -38.06842f, -7.260799f, 7.44813f },
	{ -38.06842f, -1.734397f, 7.44813f },
	{ -32.2729f, -7.260799f, 21.21051f },
	{ -32.2729f, -1.734397f, 21.21051f },
	{ -21.56407f, -7.260809f, 31.74384f },
	{ -21.56407f, -1.734406f, 31.74384f },
	{ -7.572278f, -7.260809f, 37.44432f },
	{ -7.572278f, -1.734406f, 37.44432f },
	{ 7.572273f, -7.260809f, 37.44432f },
	{ -32.2729f, -1.73439f, -21.21054f },
	{ -32.2729f, -7.260794f, -21.21054f },
	{ -21.56407f, -1.73439f, -31.74384f },
	{ -21.56407f, -7.260794f, -31.74384f },
	{ -7.572273f, -1.73439f, -37.44432f },
	{ -7.572273f, -7.260794f, -37.44432f },
	{ 7.572307f, -1.73439f, -37.44432f },
	{ 7.572307f, -7.260794f, -37.44432f },
	{ 21.56407f, -1.73439f, -31.74384f },
	{ 21.56407f, -7.260794f, -31.74384f },
	{ 32.2729f, -1.734397f, -21.21048f },
	{ 32.2729f, -7.260799f, -21.21048f },
	{ 38.06842f, -1.734397f, -7.44813f },
	{ 38.06842f, -7.260799f, -7.44813f },
	{ 38.06842f, -1.734397f, 7.448154f },
	{ 38.06842f, -7.260799f, 7.448154f },
	{ -22.84106f, -1.734398f, -4.468872f },
	{ -22.84106f, -4.260803f, -4.468872f },
	{ -22.84106f, -4.260803f, 4.468872f },
	{ -22.84106f, -1.734398f, 4.468872f },
	{ -19.36371f, -4.260803f, 12.72632f },
	{ -19.36371f, -1.734398f, 12.72632f },
	{ -12.93842f, -4.260811f, 19.04633f },
	{ -12.93842f, -1.734406f, 19.04633f },
	{ 4.543396f, -1.734406f, 22.46661f },
	{ -4.543396f, -4.260811f, 22.46661f },
	{ -4.543396f, -1.734406f, 22.46661f },
	{ 4.543396f, -4.260811f, 22.46661f },
	{ 12.93842f, -4.260811f, 19.04633f },
	{ 12.93842f, -1.734406f, 19.04633f },
	{ 19.36371f, -4.260811f, 12.72632f },
	{ 19.36371f, -1.734406f, 12.72632f },
	{ 22.84106f, -1.734398f, -4.468872f },
	{ 22.84106f, -4.260803f, -4.468872f },
	{ 22.84106f, -1.734398f, 4.468872f },
	{ 22.84106f, -4.260803f, 4.468872f },
	{ 12.93842f, -1.73439f, -19.04633f },
	{ 12.93842f, -4.260796f, -19.04633f },
	{ 19.36377f, -1.734398f, -12.72632f },
	{ 19.36377f, -4.260803f, -12.72632f },
	{ -4.543396f, -1.73439f, -22.46661f },
	{ -4.543396f, -4.260796f, -22.46661f },
	{ 4.543396f, -1.73439f, -22.46661f },
	{ 4.543396f, -4.260796f, -22.46661f },
	{ -19.36371f, -1.73439f, -12.72632f },
	{ -19.36371f, -4.260796f, -12.72632f },
	{ -12.93842f, -1.73439f, -19.04633f },
	{ -12.93842f, -4.260796f, -19.04633f },
	{ -9.823361f, -5.910941f, -1.838387f },
	{ -9.823361f, -6.895822f, -1.838387f },
	{ -9.823361f, -6.895822f, 1.838387f },
	{ -9.823361f, -5.910941f, 1.838387f },
	{ -8.327843f, -6.895822f, 5.235298f },
	{ -8.327843f, -5.910941f, 5.235298f },
	{ -5.564489f, -6.895825f, 7.835204f },
	{ -5.564489f, -5.910944f, 7.835204f },
	{ 1.954f, -5.910944f, 9.242227f },
	{ -1.954f, -6.895825f, 9.242227f },
	{ -1.954f, -5.910944f, 9.242227f },
	{ 1.954f, -6.895825f, 9.242227f },
	{ 5.564489f, -6.895825f, 7.835204f },
	{ 5.564489f, -5.910944f, 7.835204f },
	{ 8.327843f, -6.895825f, 5.235298f },
	{ 8.327843f, -5.910944f, 5.235298f },
	{ 9.823361f, -5.910941f, -1.838387f },
	{ 9.823361f, -6.895822f, -1.838387f },
	{ 9.823361f, -5.910941f, 1.838387f },
	{ 9.823361f, -6.895822f, 1.838387f },
	{ 5.564489f, -5.910938f, -7.835204f },
	{ 5.564489f, -6.89582f, -7.835204f },
	{ 8.327867f, -5.910941f, -5.235298f },
	{ 8.327867f, -6.895822f, -5.235298f },
	{ -1.954f, -5.910938f, -9.242227f },
	{ -1.954f, -6.89582f, -9.242227f },
	{ 1.954f, -5.910938f, -9.242227f },
	{ 1.954f, -6.89582f, -9.242227f },
	{ -8.327843f, -5.910938f, -5.235298f },
	{ -8.327843f, -6.89582f, -5.235298f },
	{ -5.564489f, -5.910938f, -7.835204f },
	{ -5.564489f, -6.89582f, -7.835204f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_000383BC[] = {
	{ 0.738386f, 0.657639f, -0.149321f },
	{ -0.667142f, -0.685653f, 0.291205f },
	{ -0.619401f, 0.662793f, 0.42077f },
	{ 0.288782f, -0.675652f, -0.678306f },
	{ 0.415408f, 0.654164f, -0.632065f },
	{ 0.144361f, 0.659355f, -0.737842f },
	{ 0.267536f, -0.681573f, -0.681089f },
	{ 0.267535f, -0.681573f, 0.681089f },
	{ 0.14436f, 0.659355f, 0.737842f },
	{ -0.288781f, -0.675652f, -0.678307f },
	{ -0.415406f, 0.654165f, -0.632065f },
	{ 0.667143f, -0.685653f, 0.291206f },
	{ 0.619401f, 0.662793f, 0.420771f },
	{ -0.6804349f, -0.679755f, -0.273755f },
	{ -0.738386f, 0.657639f, -0.149321f },
	{ 0.6804349f, -0.679755f, -0.273755f },
	{ -0.415408f, 0.654164f, 0.632065f },
	{ -0.288782f, -0.675652f, 0.678306f },
	{ 0.619401f, 0.662793f, -0.42077f },
	{ 0.667142f, -0.685653f, -0.291205f },
	{ -0.738386f, 0.657639f, 0.149321f },
	{ -0.6804349f, -0.679755f, 0.273755f },
	{ 0.738386f, 0.657638f, 0.149322f },
	{ 0.6804349f, -0.679754f, 0.273756f },
	{ -0.619401f, 0.662793f, -0.420771f },
	{ -0.667143f, -0.685652f, -0.291206f },
	{ 0.415407f, 0.654165f, 0.632065f },
	{ 0.28878f, -0.675653f, 0.678306f },
	{ -0.14436f, 0.659355f, -0.737842f },
	{ -0.267535f, -0.681573f, -0.681089f },
	{ -0.144361f, 0.659355f, 0.737842f },
	{ -0.267536f, -0.681573f, 0.681089f },
	{ 0.22854f, 0.72225f, -0.652782f },
	{ 0.16109f, -0.655573f, -0.73775f },
	{ 0.161089f, -0.655573f, 0.73775f },
	{ 0.22854f, 0.72225f, 0.652783f },
	{ -0.40527f, -0.657949f, -0.634712f },
	{ -0.299687f, 0.724025f, -0.621269f },
	{ 0.636419f, -0.654353f, 0.408402f },
	{ 0.623158f, 0.721899f, 0.300893f },
	{ 0.651825f, 0.723407f, -0.227609f },
	{ -0.736318f, -0.6567259f, -0.162934f },
	{ -0.651825f, 0.723407f, -0.227609f },
	{ 0.736318f, -0.6567259f, -0.162934f },
	{ -0.6366799f, -0.6543609f, 0.407983f },
	{ -0.623728f, 0.721648f, 0.300314f },
	{ 0.40486f, -0.657949f, -0.6349739f },
	{ 0.299127f, 0.723765f, -0.621842f },
	{ -0.22854f, 0.72225f, -0.652783f },
	{ -0.161089f, -0.655573f, -0.73775f },
	{ -0.22854f, 0.72225f, 0.652782f },
	{ -0.16109f, -0.655573f, 0.73775f },
	{ -0.623158f, 0.721899f, -0.300892f },
	{ -0.636419f, -0.654353f, -0.408403f },
	{ 0.299688f, 0.724024f, 0.6212699f },
	{ 0.405269f, -0.657949f, 0.634712f },
	{ -0.651825f, 0.723407f, 0.227609f },
	{ -0.736318f, -0.6567259f, 0.162934f },
	{ 0.651825f, 0.723407f, 0.22761f },
	{ 0.736317f, -0.6567259f, 0.162935f },
	{ -0.299127f, 0.723765f, 0.621842f },
	{ -0.40486f, -0.657949f, 0.6349739f },
	{ 0.623728f, 0.721648f, -0.300314f },
	{ 0.636679f, -0.6543609f, -0.407984f },
	{ 0.7059799f, 0.477264f, -0.52327f },
	{ 0.562521f, -0.652404f, -0.507877f },
	{ 0.562521f, -0.652404f, 0.507877f },
	{ 0.7059799f, 0.477264f, 0.52327f },
	{ 0.021525f, -0.653165f, -0.756909f },
	{ 0.112526f, 0.47943f, -0.870336f },
	{ 0.757572f, -0.650553f, -0.053539f },
	{ 0.867178f, 0.477404f, -0.14173f },
	{ 0.52532f, 0.478814f, -0.7034039f },
	{ -0.509793f, -0.651024f, -0.562386f },
	{ -0.52532f, 0.478814f, -0.7034039f },
	{ 0.509793f, -0.651024f, -0.562386f },
	{ -0.757763f, -0.650266f, -0.05431f },
	{ -0.867447f, 0.476678f, -0.142526f },
	{ -0.022302f, -0.652881f, -0.757132f },
	{ -0.113319f, 0.478701f, -0.870634f },
	{ -0.7059799f, 0.477264f, -0.52327f },
	{ -0.562521f, -0.652404f, -0.507877f },
	{ -0.7059799f, 0.477264f, 0.52327f },
	{ -0.562521f, -0.652404f, 0.507877f },
	{ -0.867178f, 0.477404f, 0.141732f },
	{ -0.757572f, -0.650552f, 0.05354f },
	{ -0.112524f, 0.479429f, 0.8703369f },
	{ -0.021525f, -0.653166f, 0.756909f },
	{ -0.52532f, 0.478814f, 0.7034039f },
	{ -0.509793f, -0.651024f, 0.562386f },
	{ 0.52532f, 0.478814f, 0.7034039f },
	{ 0.509793f, -0.651024f, 0.562386f },
	{ 0.113319f, 0.478701f, 0.870634f },
	{ 0.022302f, -0.652881f, 0.757132f },
	{ 0.867447f, 0.476678f, 0.142526f },
	{ 0.757763f, -0.650266f, 0.05431f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0003883C = { vertexSTG12_00037F3C, normalSTG12_000383BC, LengthOfArray(vertexSTG12_00037F3C), meshlistSTG12_00037F0C, matlistSTG12_000379C4, LengthOfArray(meshlistSTG12_00037F0C), LengthOfArray(matlistSTG12_000379C4),{ 0, -4.4976f, 0 }, 53.3974f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00038864 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0003883C, 750, 83.99989f, -650, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00038898[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 55, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000388C0[] = {
	4, 3, 1, 2, 0
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000388CA[] = {
	4, 7, 6, 3, 1,
	4, 4, 5, 0, 2
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000388E0[] = {
	{ 1530, -255 },
	{ 0, -255 },
	{ 1530, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000388F0[] = {
	{ 2530, 1 },
	{ 19, 1 },
	{ 2530, 57 },
	{ 19, 57 },
	{ 19, 57 },
	{ 2530, 57 },
	{ 19, 1 },
	{ 2530, 1 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00038910[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_000388C0, NULL, NULL, NULL, uvSTG12_000388E0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, polySTG12_000388CA, NULL, NULL, NULL, uvSTG12_000388F0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00038940[] = {
	{ -85, -8, 5 },
	{ -85, 35, 5 },
	{ 145, -8, 5 },
	{ 145, 35, 5 },
	{ -85, -14, 5 },
	{ 145, -14, 5 },
	{ -85, 41, 5 },
	{ 145, 41, 5 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_000389A0[] = {
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00038A00 = { vertexSTG12_00038940, normalSTG12_000389A0, LengthOfArray(vertexSTG12_00038940), meshlistSTG12_00038910, matlistSTG12_00038898, LengthOfArray(meshlistSTG12_00038910), LengthOfArray(matlistSTG12_00038898),{ 30, 13.5f, 5 }, 115, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00038A28 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00038A00, 210, 20, -595, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00038A5C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00038A98[] = {
	12, 65, 20, 64, 52, 66, 53, 67, 54, 69, 55, 68, 23,
	12, 27, 75, 59, 74, 58, 73, 57, 72, 56, 71, 24, 70,
	12, 31, 81, 63, 80, 62, 79, 61, 78, 60, 77, 28, 76,
	12, 19, 87, 51, 86, 50, 85, 49, 84, 48, 83, 16, 82
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00038B00[] = {
	12, 4, 65, 36, 64, 37, 66, 38, 67, 39, 69, 7, 68,
	12, 8, 70, 40, 71, 41, 72, 42, 73, 43, 74, 11, 75,
	12, 12, 76, 44, 77, 45, 78, 46, 79, 47, 80, 15, 81,
	12, 0, 82, 32, 83, 33, 84, 34, 85, 35, 86, 3, 87
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00038B68[] = {
	0x8000u | 8, 7, 39, 6, 38, 5, 37, 4, 36,
	0x8000u | 8, 59, 27, 58, 26, 57, 25, 56, 24,
	0x8000u | 8, 40, 8, 41, 9, 42, 10, 43, 11,
	0x8000u | 8, 55, 23, 54, 22, 53, 21, 52, 20,
	0x8000u | 8, 15, 47, 14, 46, 13, 45, 12, 44,
	0x8000u | 8, 63, 31, 62, 30, 61, 29, 60, 28,
	0x8000u | 8, 16, 48, 17, 49, 18, 50, 19, 51,
	0x8000u | 8, 32, 0, 33, 1, 34, 2, 35, 3
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00038BF8[] = {
	{ 0 },
	{ 0, 255 },
	{ 436, 0 },
	{ 436, 255 },
	{ 936, 0 },
	{ 936, 255 },
	{ 1529, 0 },
	{ 1529, 255 },
	{ 2122, 0 },
	{ 2122, 255 },
	{ 2550, 0 },
	{ 2550, 255 },
	{ 2550, 255 },
	{ 2550, 0 },
	{ 2113, 255 },
	{ 2113, 0 },
	{ 1611, 255 },
	{ 1611, 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 424, 255 },
	{ 424, 0 },
	{ 0, 255 },
	{ 0 },
	{ 2550, 255 },
	{ 2550, 0 },
	{ 2122, 255 },
	{ 2122, 0 },
	{ 1529, 255 },
	{ 1529, 0 },
	{ 936, 255 },
	{ 936, 0 },
	{ 436, 255 },
	{ 436, 0 },
	{ 0, 255 },
	{ 0 },
	{ 2550, 255 },
	{ 2550, 0 },
	{ 2113, 255 },
	{ 2113, 0 },
	{ 1611, 255 },
	{ 1611, 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 424, 255 },
	{ 424, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00038CB8[] = {
	{ 0 },
	{ 0, 255 },
	{ 436, 0 },
	{ 436, 255 },
	{ 936, 0 },
	{ 936, 255 },
	{ 1529, 0 },
	{ 1529, 255 },
	{ 2122, 0 },
	{ 2122, 255 },
	{ 2550, 0 },
	{ 2550, 255 },
	{ 0 },
	{ 0, 255 },
	{ 424, 0 },
	{ 424, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 1611, 0 },
	{ 1611, 255 },
	{ 2113, 0 },
	{ 2113, 255 },
	{ 2550, 0 },
	{ 2550, 255 },
	{ 0 },
	{ 0, 255 },
	{ 436, 0 },
	{ 436, 255 },
	{ 936, 0 },
	{ 936, 254 },
	{ 1529, 0 },
	{ 1529, 255 },
	{ 2122, 0 },
	{ 2122, 255 },
	{ 2550, 0 },
	{ 2550, 255 },
	{ 0 },
	{ 0, 255 },
	{ 424, 0 },
	{ 424, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 1611, 0 },
	{ 1611, 254 },
	{ 2113, 0 },
	{ 2113, 255 },
	{ 2550, 0 },
	{ 2550, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00038D78[] = {
	{ 1458, -102 },
	{ 1534, 255 },
	{ 1800, -242 },
	{ 2014, 60 },
	{ 2064, -500 },
	{ 2379, -296 },
	{ 2176, -765 },
	{ 2549, -693 },
	{ 0, -693 },
	{ 372, -765 },
	{ 168, -296 },
	{ 484, -500 },
	{ 533, 60 },
	{ 745, -242 },
	{ 1015, 254 },
	{ 1089, -102 },
	{ 1015, 255 },
	{ 1089, -102 },
	{ 533, 60 },
	{ 745, -242 },
	{ 168, -296 },
	{ 484, -500 },
	{ 0, -693 },
	{ 372, -765 },
	{ 1534, 254 },
	{ 1458, -102 },
	{ 2014, 60 },
	{ 1800, -242 },
	{ 2379, -296 },
	{ 2064, -500 },
	{ 2549, -693 },
	{ 2176, -765 },
	{ 1089, -1936 },
	{ 1015, -2295 },
	{ 745, -1797 },
	{ 533, -2100 },
	{ 484, -1537 },
	{ 168, -1742 },
	{ 372, -1274 },
	{ 0, -1345 },
	{ 1015, -2295 },
	{ 1089, -1936 },
	{ 533, -2100 },
	{ 745, -1797 },
	{ 168, -1742 },
	{ 484, -1537 },
	{ 0, -1345 },
	{ 372, -1274 },
	{ 1458, -1936 },
	{ 1534, -2295 },
	{ 1800, -1797 },
	{ 2014, -2100 },
	{ 2064, -1537 },
	{ 2379, -1742 },
	{ 2176, -1274 },
	{ 2549, -1345 },
	{ 1534, -2295 },
	{ 1458, -1936 },
	{ 2014, -2100 },
	{ 1800, -1797 },
	{ 2379, -1742 },
	{ 2064, -1537 },
	{ 2549, -1345 },
	{ 2176, -1274 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00038E78[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, polySTG12_00038A98, NULL, NULL, NULL, uvSTG12_00038BF8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, polySTG12_00038B00, NULL, NULL, NULL, uvSTG12_00038CB8, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 8, polySTG12_00038B68, NULL, NULL, NULL, uvSTG12_00038D78, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00038EC0[] = {
	{ 42.91986f, -0.000215f, 215.7729f },
	{ 122.2255f, -0.00021f, 182.9234f },
	{ 182.9233f, -0.000216f, 122.2256f },
	{ 208.7128f, -0.000206f, 59.91997f },
	{ 208.6729f, -0.000219f, -59.91969f },
	{ 182.9233f, -0.000209f, -122.2252f },
	{ 122.2255f, -0.000215f, -182.9232f },
	{ 42.91992f, -0.000211f, -215.7726f },
	{ -42.9198f, -0.000211f, -215.7726f },
	{ -122.2254f, -0.000215f, -182.9232f },
	{ -182.9233f, -0.000209f, -122.2253f },
	{ -208.7127f, -0.000219f, -59.91981f },
	{ -208.6727f, -0.000206f, 59.91997f },
	{ -182.9233f, -0.000216f, 122.2255f },
	{ -122.2255f, -0.00021f, 182.9234f },
	{ -42.91986f, -0.000215f, 215.7729f },
	{ 42.91986f, 79.00018f, 215.7729f },
	{ 122.2255f, 79.00019f, 182.9235f },
	{ 182.9233f, 79.00019f, 122.2256f },
	{ 208.7128f, 79.00021f, 59.91998f },
	{ 208.6729f, 79.00021f, -59.91968f },
	{ 182.9233f, 79.00024f, -122.2252f },
	{ 122.2255f, 79.00024f, -182.9232f },
	{ 42.91992f, 79.00024f, -215.7726f },
	{ -42.9198f, 79.00024f, -215.7726f },
	{ -122.2254f, 79.00024f, -182.9232f },
	{ -182.9233f, 79.00024f, -122.2253f },
	{ -208.7127f, 79.00021f, -59.9198f },
	{ -208.6727f, 79.00021f, 59.91998f },
	{ -182.9233f, 79.00019f, 122.2255f },
	{ -122.2255f, 79.00019f, 182.9234f },
	{ -42.91986f, 79.00018f, 215.7729f },
	{ 60.13928f, -0.000215f, 299.9025f },
	{ 171.2622f, -0.00021f, 254.2451f },
	{ 256.312f, -0.000216f, 169.8812f },
	{ 295.2805f, -0.000206f, 76.65442f },
	{ 295.2404f, -0.000219f, -76.65404f },
	{ 256.312f, -0.000209f, -169.8807f },
	{ 171.2623f, -0.000215f, -254.2448f },
	{ 60.13937f, -0.000211f, -299.9022f },
	{ -60.13918f, -0.000211f, -299.9022f },
	{ -171.2621f, -0.000215f, -254.2448f },
	{ -256.3119f, -0.000209f, -169.8809f },
	{ -295.2807f, -0.000219f, -76.65418f },
	{ -295.2407f, -0.000206f, 76.65442f },
	{ -256.312f, -0.000216f, 169.8811f },
	{ -171.2622f, -0.00021f, 254.245f },
	{ -60.13928f, -0.000215f, 299.9025f },
	{ 60.13928f, 79.00018f, 299.9025f },
	{ 171.2622f, 79.00019f, 254.2451f },
	{ 256.312f, 79.00019f, 169.8812f },
	{ 295.2805f, 79.00021f, 76.65442f },
	{ 295.2404f, 79.00021f, -76.65401f },
	{ 256.312f, 79.00024f, -169.8807f },
	{ 171.2623f, 79.00024f, -254.2448f },
	{ 60.13937f, 79.00024f, -299.9022f },
	{ -60.13918f, 79.00024f, -299.9022f },
	{ -171.2621f, 79.00024f, -254.2448f },
	{ -256.3119f, 79.00024f, -169.8809f },
	{ -295.2807f, 79.00021f, -76.65417f },
	{ -295.2407f, 79.00021f, 76.65442f },
	{ -256.312f, 79.00019f, 169.8811f },
	{ -171.2622f, 79.00019f, 254.245f },
	{ -60.13928f, 79.00018f, 299.9025f },
	{ 295.2404f, 39.5f, -76.65403f },
	{ 208.6729f, 39.5f, -59.91968f },
	{ 256.312f, 39.50001f, -169.8807f },
	{ 171.2623f, 39.50001f, -254.2448f },
	{ 42.91992f, 39.50001f, -215.7726f },
	{ 60.13937f, 39.50001f, -299.9022f },
	{ -42.9198f, 39.50001f, -215.7726f },
	{ -60.13918f, 39.50001f, -299.9022f },
	{ -171.2621f, 39.50001f, -254.2448f },
	{ -256.3119f, 39.50001f, -169.8809f },
	{ -295.2807f, 39.5f, -76.65417f },
	{ -208.7127f, 39.5f, -59.9198f },
	{ -208.6727f, 39.5f, 59.91997f },
	{ -295.2407f, 39.5f, 76.65442f },
	{ -256.312f, 39.49999f, 169.8811f },
	{ -171.2622f, 39.49999f, 254.245f },
	{ -60.13928f, 39.49998f, 299.9025f },
	{ -42.91986f, 39.49998f, 215.7729f },
	{ 42.91986f, 39.49998f, 215.7729f },
	{ 60.13928f, 39.49998f, 299.9025f },
	{ 171.2622f, 39.49999f, 254.2451f },
	{ 256.312f, 39.49999f, 169.8812f },
	{ 295.2805f, 39.5f, 76.65442f },
	{ 208.7128f, 39.5f, 59.91997f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_000392E0[] = {
	{ 0.652011f, 0.746373f, -0.133452f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.125889f, 0.748367f, 0.651229f },
	{ -0.125911f, 0.748266f, -0.651341f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.652011f, 0.746372f, 0.133452f },
	{ -0.652011f, 0.746372f, 0.133452f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.125888f, 0.748367f, -0.651228f },
	{ 0.125911f, 0.748265f, 0.651342f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.652011f, 0.746373f, -0.133452f },
	{ 0.652011f, -0.746372f, -0.133452f },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ -0.125889f, -0.748367f, 0.651228f },
	{ -0.125911f, -0.748265f, -0.651341f },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0.652011f, -0.746373f, 0.133452f },
	{ -0.652011f, -0.746373f, 0.133452f },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0.125888f, -0.748367f, -0.651228f },
	{ 0.125911f, -0.748265f, 0.651341f },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ -0.652011f, -0.746373f, -0.133452f },
	{ 0.386964f, 0.568105f, -0.726303f },
	{ -0.412366f, 0.665836f, -0.621785f },
	{ -0.618993f, 0.665638f, -0.416862f },
	{ -0.725832f, 0.567331f, 0.388978f },
	{ -0.72575f, 0.567347f, -0.389106f },
	{ -0.619096f, 0.665602f, 0.416766f },
	{ -0.412367f, 0.665836f, 0.621785f },
	{ 0.386964f, 0.568105f, 0.726303f },
	{ -0.386964f, 0.568105f, 0.726302f },
	{ 0.412366f, 0.665836f, 0.621785f },
	{ 0.618992f, 0.665638f, 0.416863f },
	{ 0.725832f, 0.567331f, -0.388977f },
	{ 0.725751f, 0.567347f, 0.389105f },
	{ 0.619095f, 0.665603f, -0.416767f },
	{ 0.412366f, 0.665836f, -0.621785f },
	{ -0.386964f, 0.568105f, -0.726303f },
	{ 0.386964f, -0.568105f, -0.726303f },
	{ -0.412366f, -0.665836f, -0.621785f },
	{ -0.618993f, -0.665638f, -0.416862f },
	{ -0.725832f, -0.567331f, 0.388978f },
	{ -0.72575f, -0.567347f, -0.389106f },
	{ -0.619096f, -0.665603f, 0.416766f },
	{ -0.412367f, -0.665836f, 0.621785f },
	{ 0.386964f, -0.568105f, 0.726303f },
	{ -0.386964f, -0.568105f, 0.726302f },
	{ 0.412366f, -0.665836f, 0.621785f },
	{ 0.618992f, -0.665639f, 0.416863f },
	{ 0.725832f, -0.567331f, -0.388978f },
	{ 0.725751f, -0.567347f, 0.389105f },
	{ 0.619095f, -0.665603f, -0.416767f },
	{ 0.412366f, -0.665836f, -0.621785f },
	{ -0.386964f, -0.568105f, -0.726303f },
	{ -0.881323f, 0, -0.472515f },
	{ -0.189796f, 0, -0.981824f },
	{ -0.829546f, 0, 0.5584379f },
	{ -0.552698f, 0, 0.833382f },
	{ 0.9796889f, 0, 0.200521f },
	{ 0.470212f, 0, 0.882553f },
	{ -0.97969f, 0, 0.20052f },
	{ -0.470213f, 0, 0.882553f },
	{ 0.5526969f, 0, 0.833382f },
	{ 0.829443f, 0, 0.558592f },
	{ 0.8814099f, 0, -0.472352f },
	{ 0.189796f, 0, -0.981824f },
	{ 0.189796f, 0, 0.981824f },
	{ 0.881323f, 0, 0.472513f },
	{ 0.829545f, 0, -0.55844f },
	{ 0.5526969f, 0, -0.833382f },
	{ -0.470212f, 0, -0.882553f },
	{ -0.97969f, 0, -0.20052f },
	{ 0.97969f, 0, -0.20052f },
	{ 0.470212f, 0, -0.882553f },
	{ -0.5526969f, 0, -0.833382f },
	{ -0.829443f, 0, -0.5585909f },
	{ -0.881409f, 0, 0.472353f },
	{ -0.189797f, 0, 0.981823f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00039700 = { vertexSTG12_00038EC0, normalSTG12_000392E0, LengthOfArray(vertexSTG12_00038EC0), meshlistSTG12_00038E78, matlistSTG12_00038A5C, LengthOfArray(meshlistSTG12_00038E78), LengthOfArray(matlistSTG12_00038A5C),{ -0.00076f, 39.50001f, 0.000153f }, 420.8706f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00039728 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00039700, 750, 78.99989f, -650, 0x8000, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0003975C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 41, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 41, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00039784[] = {
	12, 11, 10, 15, 14, 19, 18, 3, 2, 7, 6, 11, 10,
	12, 8, 9, 4, 5, 0, 1, 16, 17, 12, 13, 8, 9,
	12, 9, 10, 5, 6, 1, 2, 17, 18, 13, 14, 9, 10,
	12, 11, 8, 7, 4, 3, 0, 19, 16, 15, 12, 11, 8
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000397EC[] = {
	12, 31, 30, 35, 34, 39, 38, 23, 22, 27, 26, 31, 30,
	12, 28, 29, 24, 25, 20, 21, 36, 37, 32, 33, 28, 29,
	12, 29, 30, 25, 26, 21, 22, 37, 38, 33, 34, 29, 30,
	12, 31, 28, 27, 24, 23, 20, 39, 36, 35, 32, 31, 28
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00039854[] = {
	{ 502, -7777 },
	{ 374, -7777 },
	{ 502, -5482 },
	{ 374, -5482 },
	{ 502, -4717 },
	{ 374, -4717 },
	{ 502, -2167 },
	{ 374, -2167 },
	{ 502, -382 },
	{ 374, -382 },
	{ 502, 127 },
	{ 374, 127 },
	{ 119, 127 },
	{ 247, 127 },
	{ 119, -382 },
	{ 247, -382 },
	{ 119, -2167 },
	{ 247, -2167 },
	{ 119, -4717 },
	{ 247, -4717 },
	{ 119, -5482 },
	{ 247, -5482 },
	{ 119, -7777 },
	{ 247, -7777 },
	{ 247, 127 },
	{ 374, 127 },
	{ 247, -382 },
	{ 374, -382 },
	{ 247, -2167 },
	{ 374, -2167 },
	{ 247, -4717 },
	{ 374, -4717 },
	{ 247, -5482 },
	{ 374, -5482 },
	{ 247, -7777 },
	{ 374, -7777 },
	{ 7, 127 },
	{ 119, 127 },
	{ 7, -382 },
	{ 119, -382 },
	{ 7, -2167 },
	{ 119, -2167 },
	{ 7, -4717 },
	{ 119, -4717 },
	{ 7, -5482 },
	{ 119, -5482 },
	{ 7, -7777 },
	{ 119, -7777 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00039914[] = {
	{ 7, -7777 },
	{ 119, -7777 },
	{ 7, -5482 },
	{ 119, -5482 },
	{ 7, -4717 },
	{ 119, -4717 },
	{ 7, -2167 },
	{ 119, -2167 },
	{ 7, -382 },
	{ 119, -382 },
	{ 7, 127 },
	{ 119, 127 },
	{ 374, 127 },
	{ 247, 127 },
	{ 374, -382 },
	{ 247, -382 },
	{ 374, -2167 },
	{ 247, -2167 },
	{ 374, -4717 },
	{ 247, -4717 },
	{ 374, -5482 },
	{ 247, -5482 },
	{ 374, -7777 },
	{ 247, -7777 },
	{ 247, 127 },
	{ 119, 127 },
	{ 247, -382 },
	{ 119, -382 },
	{ 247, -2167 },
	{ 119, -2167 },
	{ 247, -4717 },
	{ 119, -4717 },
	{ 247, -5482 },
	{ 119, -5482 },
	{ 247, -7777 },
	{ 119, -7777 },
	{ 502, 127 },
	{ 374, 127 },
	{ 502, -382 },
	{ 374, -382 },
	{ 502, -2167 },
	{ 374, -2167 },
	{ 502, -4717 },
	{ 374, -4717 },
	{ 502, -5482 },
	{ 374, -5482 },
	{ 502, -7777 },
	{ 374, -7777 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_000399D4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, polySTG12_00039784, NULL, NULL, NULL, uvSTG12_00039854, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, polySTG12_000397EC, NULL, NULL, NULL, uvSTG12_00039914, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00039A04[] = {
	{ 36, -0.299999f, -15 },
	{ 35, 0.7000009f, -16 },
	{ 34, 1.700001f, -15 },
	{ 35, 0.7000009f, -14 },
	{ -27, -0.299999f, -15 },
	{ -26, 0.7000009f, -16 },
	{ -25, 1.700001f, -15 },
	{ -26, 0.7000009f, -14 },
	{ -27, 12.7f, -15 },
	{ -26, 11.7f, -16 },
	{ -25, 10.7f, -15 },
	{ -26, 11.7f, -14 },
	{ 20, 50.7f, -15 },
	{ 21, 49.7f, -16 },
	{ 22, 48.7f, -15 },
	{ 21, 49.7f, -14 },
	{ 36, 50.7f, -15 },
	{ 35, 49.7f, -16 },
	{ 34, 48.7f, -15 },
	{ 35, 49.7f, -14 },
	{ 36, -0.299999f, 15 },
	{ 35, 0.7000009f, 14 },
	{ 34, 1.700001f, 15 },
	{ 35, 0.7000009f, 16 },
	{ -27, -0.299999f, 15 },
	{ -26, 0.7000009f, 14 },
	{ -25, 1.700001f, 15 },
	{ -26, 0.7000009f, 16 },
	{ -27, 12.7f, 15 },
	{ -26, 11.7f, 14 },
	{ -25, 10.7f, 15 },
	{ -26, 11.7f, 16 },
	{ 20, 50.7f, 15 },
	{ 21, 49.7f, 14 },
	{ 22, 48.7f, 15 },
	{ 21, 49.7f, 16 },
	{ 36, 50.7f, 15 },
	{ 35, 49.7f, 14 },
	{ 34, 48.7f, 15 },
	{ 35, 49.7f, 16 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00039BE4[] = {
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.188801f, -0.188801f, -0.963695f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.188801f, -0.188801f, 0.963695f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.188801f, -0.188801f, -0.963695f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.188801f, -0.188801f, 0.963695f },
	{ -0.8762119f, 0.481926f, 0 },
	{ -0.191509f, 0.015922f, -0.981362f },
	{ 0.944639f, -0.328111f, 0 },
	{ -0.191509f, 0.015922f, 0.981362f },
	{ -0.390731f, 0.920505f, 0 },
	{ 0.01294f, 0.163558f, -0.9864489f },
	{ 0.237247f, -0.971449f, 0 },
	{ 0.01294f, 0.163558f, 0.9864489f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.188801f, 0.188801f, -0.963695f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ 0.188801f, 0.188801f, 0.963695f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.188801f, -0.188801f, -0.963695f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.188801f, -0.188801f, 0.963695f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.188801f, -0.188801f, -0.963695f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.188801f, -0.188801f, 0.963695f },
	{ -0.8762119f, 0.481926f, 0 },
	{ -0.191509f, 0.015922f, -0.981362f },
	{ 0.944639f, -0.328111f, 0 },
	{ -0.191509f, 0.015922f, 0.981362f },
	{ -0.390731f, 0.920505f, 0 },
	{ 0.01294f, 0.163558f, -0.9864489f },
	{ 0.237247f, -0.971449f, 0 },
	{ 0.01294f, 0.163558f, 0.9864489f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.188801f, 0.188801f, -0.963695f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ 0.188801f, 0.188801f, 0.963695f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00039DC4 = { vertexSTG12_00039A04, normalSTG12_00039BE4, LengthOfArray(vertexSTG12_00039A04), meshlistSTG12_000399D4, matlistSTG12_0003975C, LengthOfArray(meshlistSTG12_000399D4), LengthOfArray(matlistSTG12_0003975C),{ 4.5f, 25.2f, 0 }, 35.33058f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00039DEC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00039DC4, 637, -80.00011f, -650, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00039E20[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 51, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 16, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00039EAC[] = {
	0x8000u | 8, 19, 6, 18, 5, 23, 14, 22, 12,
	0x8000u | 8, 21, 10, 20, 9, 16, 0, 17, 3
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00039ED0[] = {
	8, 29, 7, 30, 4, 27, 15, 25, 13,
	8, 2, 28, 1, 31, 8, 26, 11, 24
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00039EF4[] = {
	0x8000u | 8, 24, 40, 26, 42, 31, 47, 28, 44,
	0x8000u | 8, 41, 25, 43, 27, 46, 30, 45, 29
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00039F18[] = {
	8, 44, 45, 47, 46, 42, 43, 40, 41
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00039F2A[] = {
	8, 35, 2, 34, 1, 33, 8, 32, 11,
	8, 7, 39, 4, 38, 15, 37, 13, 36
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00039F4E[] = {
	8, 39, 6, 38, 5, 37, 14, 36, 12,
	8, 3, 35, 0, 34, 9, 33, 10, 32
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00039F74[] = {
	{ 0, 255 },
	{ 0 },
	{ 753, 255 },
	{ 753, 0 },
	{ 1698, 255 },
	{ 1698, 0 },
	{ 2550, 255 },
	{ 2550, 0 },
	{ 2641, 292 },
	{ 2641, 28 },
	{ 1792, 292 },
	{ 1792, 28 },
	{ 851, 292 },
	{ 851, 28 },
	{ -91, 292 },
	{ -91, 28 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00039FB4[] = {
	{ 0 },
	{ 0, 255 },
	{ 604, 0 },
	{ 604, 255 },
	{ 1359, 0 },
	{ 1359, 255 },
	{ 2040, 0 },
	{ 2040, 255 },
	{ 2040, 255 },
	{ 2040, 0 },
	{ 1434, 255 },
	{ 1434, 0 },
	{ 677, 255 },
	{ 677, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00039FF4[] = {
	{ 2040, 0 },
	{ 2040, 255 },
	{ 1360, 0 },
	{ 1360, 255 },
	{ 604, 0 },
	{ 604, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0 },
	{ 680, 255 },
	{ 680, 0 },
	{ 1434, 255 },
	{ 1434, 0 },
	{ 2040, 255 },
	{ 2040, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003A034[] = {
	{ -255, 2040 },
	{ 255, 2040 },
	{ -255, 1434 },
	{ 255, 1434 },
	{ -255, 677 },
	{ 255, 677 },
	{ -255, 0 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003A054[] = {
	{ 2550, 0 },
	{ 2550, 255 },
	{ 1792, 0 },
	{ 1792, 255 },
	{ 848, 0 },
	{ 848, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0 },
	{ 753, 255 },
	{ 753, 0 },
	{ 1698, 255 },
	{ 1698, 0 },
	{ 2550, 255 },
	{ 2550, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003A094[] = {
	{ 2550, 0 },
	{ 2550, 255 },
	{ 1792, 0 },
	{ 1792, 255 },
	{ 848, 0 },
	{ 848, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0 },
	{ 753, 255 },
	{ 753, 0 },
	{ 1698, 255 },
	{ 1698, 0 },
	{ 2550, 255 },
	{ 2550, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0003A0D4[] = {
	{ NJD_MESHSET_TRIMESH | 1, 2, polySTG12_00039EAC, NULL, NULL, NULL, uvSTG12_00039F74, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, polySTG12_00039ED0, NULL, NULL, NULL, uvSTG12_00039FB4, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, polySTG12_00039EF4, NULL, NULL, NULL, uvSTG12_00039FF4, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, polySTG12_00039F18, NULL, NULL, NULL, uvSTG12_0003A034, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, polySTG12_00039F2A, NULL, NULL, NULL, uvSTG12_0003A054, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, polySTG12_00039F4E, NULL, NULL, NULL, uvSTG12_0003A094, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0003A164[] = {
	{ 380, 20, -600 },
	{ 380, 60, -608 },
	{ 300, 60, -608 },
	{ 300, 20, -600 },
	{ 380, 60, -692 },
	{ 380, 20, -700 },
	{ 300, 20, -700 },
	{ 300, 60, -692 },
	{ 460, 60, -608 },
	{ 460, 20, -600 },
	{ 532, 20, -600 },
	{ 532, 60, -608 },
	{ 532, 20, -700 },
	{ 532, 60, -692 },
	{ 460, 20, -700 },
	{ 460, 60, -692 },
	{ 380, 0, -600 },
	{ 300, 0, -600 },
	{ 380, 0, -700 },
	{ 300, 0, -700 },
	{ 460, 0, -600 },
	{ 532, 0, -600 },
	{ 532, 0, -700 },
	{ 460, 0, -700 },
	{ 532, 80, -628 },
	{ 532, 80, -672 },
	{ 460, 80, -628 },
	{ 460, 80, -672 },
	{ 300, 80, -628 },
	{ 300, 80, -672 },
	{ 380, 80, -672 },
	{ 380, 80, -628 },
	{ 532, 34.5f, -608 },
	{ 460, 34.5f, -608 },
	{ 380, 34.5f, -608 },
	{ 300, 34.5f, -608 },
	{ 532, 34.5f, -692 },
	{ 460, 34.5f, -692 },
	{ 380, 34.5f, -692 },
	{ 300, 34.5f, -692 },
	{ 532, 67, -638 },
	{ 532, 67, -662 },
	{ 460, 67, -638 },
	{ 460, 67, -662 },
	{ 300, 67, -638 },
	{ 300, 67, -662 },
	{ 380, 67, -662 },
	{ 380, 67, -638 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0003A3A4[] = {
	{ 0, -0.249422f, -0.968395f },
	{ 0, -0.382683f, -0.92388f },
	{ 0, -0.382683f, -0.92388f },
	{ 0, -0.249422f, -0.968395f },
	{ 0, -0.382683f, 0.92388f },
	{ 0, -0.249422f, 0.968395f },
	{ 0, -0.249422f, 0.968395f },
	{ 0, -0.382683f, 0.92388f },
	{ 0, -0.382683f, -0.92388f },
	{ 0, -0.249422f, -0.968395f },
	{ 0, -0.249422f, -0.968395f },
	{ 0, -0.382683f, -0.92388f },
	{ 0, -0.249422f, 0.968395f },
	{ 0, -0.382683f, 0.92388f },
	{ 0, -0.249422f, 0.968395f },
	{ 0, -0.382683f, 0.92388f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, -0.997898f, 0.064806f },
	{ 0, -0.997898f, -0.064806f },
	{ 0, -0.997898f, 0.064806f },
	{ 0, -0.997898f, -0.064806f },
	{ 0, -0.997898f, 0.064806f },
	{ 0, -0.997898f, -0.064806f },
	{ 0, -0.997898f, -0.064806f },
	{ 0, -0.997898f, 0.064806f },
	{ 0, -0.249422f, -0.968395f },
	{ 0, -0.249422f, -0.968395f },
	{ 0, -0.249422f, -0.968395f },
	{ 0, -0.249422f, -0.968395f },
	{ 0, -0.249422f, 0.968395f },
	{ 0, -0.249422f, 0.968395f },
	{ 0, -0.249422f, 0.968395f },
	{ 0, -0.249422f, 0.968395f },
	{ 0, -0.897137f, 0.441752f },
	{ 0, -0.897137f, -0.441752f },
	{ 0, -0.897137f, 0.441752f },
	{ 0, -0.897137f, -0.441752f },
	{ 0, -0.897137f, 0.441752f },
	{ 0, -0.897137f, -0.441752f },
	{ 0, -0.897137f, -0.441752f },
	{ 0, -0.897137f, 0.441752f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0003A5E4 = { vertexSTG12_0003A164, normalSTG12_0003A3A4, LengthOfArray(vertexSTG12_0003A164), meshlistSTG12_0003A0D4, matlistSTG12_00039E20, LengthOfArray(meshlistSTG12_0003A0D4), LengthOfArray(matlistSTG12_00039E20),{ 416, 40, -650 }, 126.3171f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0003A60C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0003A5E4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0003A640[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003A668[] = {
	0x8000u | 9, 0, 16, 15, 3, 14, 5, 12, 13, 11,
	0x8000u | 7, 0, 15, 2, 14, 10, 12, 11,
	3, 3, 1, 16,
	0x8000u | 11, 0, 8, 16, 17, 1, 19, 4, 18, 13, 7, 11,
	3, 4, 5, 13,
	0x8000u | 7, 7, 18, 6, 19, 9, 17, 8
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003A6C4[] = {
	{ 0, 147 },
	{ 53, 147 },
	{ 53, -657 },
	{ 107, -657 },
	{ 107, -709 },
	{ 912, -657 },
	{ 912, -709 },
	{ 964, -657 },
	{ 912, -765 },
	{ 0, 147 },
	{ 53, -657 },
	{ 0, -657 },
	{ 107, -709 },
	{ 107, -765 },
	{ 912, -709 },
	{ 912, -765 },
	{ 107, -657 },
	{ 107, 147 },
	{ 53, 147 },
	{ 0, 147 },
	{ 107, 255 },
	{ 53, 147 },
	{ 107, 201 },
	{ 107, 147 },
	{ 912, 201 },
	{ 912, 147 },
	{ 964, 147 },
	{ 964, -657 },
	{ 1020, -657 },
	{ 912, -765 },
	{ 912, 147 },
	{ 912, -657 },
	{ 964, -657 },
	{ 1020, -657 },
	{ 964, 147 },
	{ 1020, 147 },
	{ 912, 201 },
	{ 912, 255 },
	{ 107, 201 },
	{ 107, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0003A764[] = {
	{ NJD_MESHSET_TRIMESH | 1, 6, polySTG12_0003A668, NULL, NULL, NULL, uvSTG12_0003A6C4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0003A77C[] = {
	{ 20.00001f, 10, 12.99998f },
	{ 20.00003f, 10, 15.00002f },
	{ 20.00001f, 25, 12.99998f },
	{ 20.00003f, 25, 15.00002f },
	{ 20.00002f, 10, 30.00002f },
	{ 20.00002f, 25, 30.00002f },
	{ 20.00003f, 10, 31.99998f },
	{ 20.00003f, 25, 31.99998f },
	{ 20.00003f, 8, 14.99998f },
	{ 20.00003f, 8, 29.99998f },
	{ 20.00003f, 27, 14.99998f },
	{ 20.00003f, 27, 29.99998f },
	{ 20.50003f, 26, 29.99998f },
	{ 20.50003f, 25, 30.99998f },
	{ 20.50003f, 26, 14.99998f },
	{ 20.50002f, 25, 13.99998f },
	{ 20.50002f, 10, 13.99998f },
	{ 20.50003f, 9, 14.99998f },
	{ 20.50003f, 10, 30.99998f },
	{ 20.50003f, 9, 29.99998f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0003A86C[] = {
	{ 0.884266f, -0.150285f, -0.442141f },
	{ 0.910493f, 0.292413f, 0.292399f },
	{ 0.884266f, 0.150285f, -0.442141f },
	{ 0.910493f, -0.292413f, 0.292399f },
	{ 0.91048f, 0.292421f, -0.292431f },
	{ 0.91048f, -0.292421f, -0.292431f },
	{ 0.884269f, -0.150286f, 0.442134f },
	{ 0.884269f, 0.150286f, 0.442134f },
	{ 0.884268f, -0.442134f, -0.150289f },
	{ 0.884269f, -0.442134f, 0.150286f },
	{ 0.884268f, 0.442134f, -0.150289f },
	{ 0.884269f, 0.442134f, 0.150286f },
	{ 0.989354f, 0.102902f, 0.102906f },
	{ 0.989355f, 0.102903f, 0.102897f },
	{ 0.9893529f, 0.102906f, -0.102908f },
	{ 0.989352f, 0.102906f, -0.102919f },
	{ 0.989352f, -0.102906f, -0.102919f },
	{ 0.9893529f, -0.102906f, -0.102908f },
	{ 0.989355f, -0.102903f, 0.102897f },
	{ 0.989354f, -0.102902f, 0.102906f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0003A95C = { vertexSTG12_0003A77C, normalSTG12_0003A86C, LengthOfArray(vertexSTG12_0003A77C), meshlistSTG12_0003A764, matlistSTG12_0003A640, LengthOfArray(meshlistSTG12_0003A764), LengthOfArray(matlistSTG12_0003A640),{ 20.25002f, 17.5f, 22.49998f }, 13.43503f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0003A984 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0003A95C, 1920, 50, -650, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0003A9B8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003A9E0[] = {
	9, 16, 0, 15, 2, 14, 10, 12, 11, 13,
	3, 3, 1, 16,
	0x8000u | 11, 0, 8, 16, 17, 1, 19, 4, 18, 13, 7, 11,
	3, 4, 5, 13,
	0x8000u | 7, 13, 12, 5, 14, 3, 15, 16,
	0x8000u | 7, 7, 18, 6, 19, 9, 17, 8
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003AA3C[] = {
	{ 54, 120 },
	{ 0, 120 },
	{ 54, -884 },
	{ 0, -884 },
	{ 108, -952 },
	{ 108, -1020 },
	{ 1164, -952 },
	{ 1164, -1020 },
	{ 1219, -884 },
	{ 108, -884 },
	{ 108, 120 },
	{ 54, 120 },
	{ 0, 120 },
	{ 108, 255 },
	{ 54, 120 },
	{ 108, 187 },
	{ 108, 120 },
	{ 1164, 187 },
	{ 1164, 120 },
	{ 1219, 120 },
	{ 1219, -884 },
	{ 1275, -884 },
	{ 1164, -1020 },
	{ 1164, 120 },
	{ 1164, -884 },
	{ 1219, -884 },
	{ 1219, -884 },
	{ 1164, -952 },
	{ 1164, -884 },
	{ 108, -952 },
	{ 108, -884 },
	{ 54, -884 },
	{ 54, 120 },
	{ 1275, -884 },
	{ 1219, 120 },
	{ 1275, 120 },
	{ 1164, 187 },
	{ 1164, 255 },
	{ 108, 187 },
	{ 108, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0003AADC[] = {
	{ NJD_MESHSET_TRIMESH | 1, 6, polySTG12_0003A9E0, NULL, NULL, NULL, uvSTG12_0003AA3C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0003AAF4[] = {
	{ 773.5f, -40, -846.2f },
	{ 769.509f, -40.00034f, -846.1572f },
	{ 773.5f, -10, -846.2f },
	{ 769.509f, -10.00034f, -846.1572f },
	{ 730.491f, -40.00034f, -846.1572f },
	{ 730.491f, -10.00034f, -846.1572f },
	{ 726.5f, -40, -846.1999f },
	{ 726.5f, -10, -846.1999f },
	{ 769.5f, -44, -846.1999f },
	{ 730.5f, -44, -846.1999f },
	{ 769.5f, -6, -846.1999f },
	{ 730.5f, -6, -846.1999f },
	{ 730.5f, -8, -845.1999f },
	{ 728.5f, -10, -845.1999f },
	{ 769.5f, -8, -845.1999f },
	{ 771.5f, -10, -845.1999f },
	{ 771.5f, -40, -845.1999f },
	{ 769.5f, -42, -845.1999f },
	{ 728.5f, -40, -845.1999f },
	{ 730.5f, -42, -845.1999f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0003ABE4[] = {
	{ 0.442154f, -0.150287f, 0.884259f },
	{ -0.283904f, 0.282959f, 0.916151f },
	{ 0.442154f, 0.150287f, 0.884259f },
	{ -0.283876f, -0.282858f, 0.916191f },
	{ 0.283904f, 0.282959f, 0.916151f },
	{ 0.283876f, -0.282858f, 0.916191f },
	{ -0.442134f, -0.150286f, 0.884269f },
	{ -0.442134f, 0.150286f, 0.884269f },
	{ 0.150292f, -0.442136f, 0.884267f },
	{ -0.150286f, -0.442134f, 0.884269f },
	{ 0.150292f, 0.442136f, 0.884267f },
	{ -0.150286f, 0.442134f, 0.884269f },
	{ -0.105026f, 0.109186f, 0.988457f },
	{ -0.108743f, 0.104723f, 0.988538f },
	{ 0.105032f, 0.109187f, 0.988457f },
	{ 0.108756f, 0.104724f, 0.988537f },
	{ 0.108738f, -0.10473f, 0.988538f },
	{ 0.105017f, -0.109138f, 0.988464f },
	{ -0.108726f, -0.10473f, 0.98854f },
	{ -0.105011f, -0.109137f, 0.988464f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0003ACD4 = { vertexSTG12_0003AAF4, normalSTG12_0003ABE4, LengthOfArray(vertexSTG12_0003AAF4), meshlistSTG12_0003AADC, matlistSTG12_0003A9B8, LengthOfArray(meshlistSTG12_0003AADC), LengthOfArray(matlistSTG12_0003A9B8),{ 750, -25, -845.6999f }, 23.50532f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0003ACFC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0003ACD4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0003AD30[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 58, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 58, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 40, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 45, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 35, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 35, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003ADBC[] = {
	0x8000u | 10, 2, 0, 6, 4, 7, 5, 3, 1, 2, 0
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003ADD2[] = {
	4, 11, 10, 9, 8
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003ADDC[] = {
	0x8000u | 10, 8, 2, 10, 6, 11, 7, 9, 3, 8, 2
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003ADF2[] = {
	4, 15, 13, 14, 12
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003ADFC[] = {
	3, 29, 95, 93,
	0x8000u | 7, 24, 78, 26, 79, 40, 81, 27,
	0x8000u | 10, 29, 33, 31, 35, 42, 44, 30, 34, 28, 32,
	0x8000u | 5, 81, 79, 23, 38, 46,
	8, 46, 23, 21, 36, 87, 65, 86, 77,
	0x8000u | 8, 20, 16, 46, 37, 21, 17, 74, 84,
	0x8000u | 11, 96, 41, 94, 92, 24, 83, 78, 22, 38, 20, 46,
	6, 45, 32, 43, 28, 96, 94,
	3, 28, 30, 49,
	5, 50, 26, 48, 24, 47,
	11, 53, 49, 50, 30, 26, 42, 40, 31, 27, 56, 55,
	7, 53, 50, 54, 48, 52, 47, 51,
	7, 53, 51, 49, 47, 28, 24, 94,
	4, 29, 58, 31, 56,
	0x8000u | 9, 57, 55, 25, 27, 82, 81, 19, 23, 36,
	8, 58, 60, 56, 59, 55, 61, 57, 62,
	0x8000u | 13, 60, 62, 58, 57, 29, 25, 93, 98, 97, 82, 80, 39, 18,
	4, 19, 64, 36, 65,
	20, 73, 72, 68, 66, 69, 67, 22, 18, 83, 80, 99, 97, 41, 93, 96, 95, 43, 29, 45, 33,
	3, 21, 75, 74,
	16, 77, 65, 63, 64, 85, 19, 17, 39, 37, 18, 16, 67, 90, 66, 88, 72,
	6, 17, 84, 85, 76, 63, 77,
	4, 41, 92, 99, 83,
	3, 39, 19, 82,
	3, 79, 38, 78,
	3, 82, 25, 98,
	0x8000u | 5, 20, 22, 91, 69, 68,
	0x8000u | 10, 88, 90, 70, 16, 71, 20, 89, 91, 73, 68,
	4, 86, 75, 87, 21
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003AFD2[] = {
	0x8000u | 6, 35, 33, 44, 45, 34, 32
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003AFE0[] = {
	4, 53, 54, 51, 52,
	4, 62, 61, 60, 59
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003AFF4[] = {
	{ 1, -3793 },
	{ 253, -3793 },
	{ 0, -2805 },
	{ 254, -2805 },
	{ 0, -1785 },
	{ 254, -1785 },
	{ 0, -765 },
	{ 254, -765 },
	{ 1, 223 },
	{ 253, 223 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003B01C[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003B02C[] = {
	{ 7, 251 },
	{ 7, -251 },
	{ 255, 255 },
	{ 255, -255 },
	{ 510, 255 },
	{ 510, -255 },
	{ 765, 255 },
	{ 765, -255 },
	{ 1012, 251 },
	{ 1012, -251 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003B054[] = {
	{ 251, 3 },
	{ 3, 3 },
	{ 251, 251 },
	{ 3, 251 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003B064[] = {
	{ 896, -103 },
	{ 871, -76 },
	{ 903, -18 },
	{ 664, -98 },
	{ 410, -72 },
	{ 494, -157 },
	{ 195, -52 },
	{ 68, -140 },
	{ 56, -2 },
	{ 0, -80 },
	{ 896, -103 },
	{ 860, -123 },
	{ 972, -149 },
	{ 879, -205 },
	{ 999, -188 },
	{ 860, -255 },
	{ 876, -191 },
	{ 812, -246 },
	{ 780, -145 },
	{ 780, -164 },
	{ 56, -2 },
	{ 195, -52 },
	{ 99, 59 },
	{ 247, 70 },
	{ 228, 144 },
	{ 228, 144 },
	{ 99, 59 },
	{ 171, 153 },
	{ 74, 77 },
	{ 124, 134 },
	{ 56, 124 },
	{ 93, 254 },
	{ 49, 254 },
	{ 1305, 170 },
	{ 716, 169 },
	{ 1248, 144 },
	{ 848, 180 },
	{ 1189, 153 },
	{ 892, 152 },
	{ 892, 254 },
	{ 912, 254 },
	{ 819, -93 },
	{ 792, -37 },
	{ 761, -118 },
	{ 689, -83 },
	{ 664, -98 },
	{ 593, -36 },
	{ 410, -72 },
	{ 398, 81 },
	{ 247, 70 },
	{ 284, 170 },
	{ 228, 144 },
	{ 815, -118 },
	{ 780, -164 },
	{ 828, -108 },
	{ 780, -145 },
	{ 819, -93 },
	{ 761, -118 },
	{ 780, -145 },
	{ 876, -191 },
	{ 689, -172 },
	{ 664, -211 },
	{ 494, -157 },
	{ 532, -198 },
	{ 664, -98 },
	{ 617, -148 },
	{ 649, -223 },
	{ 689, -172 },
	{ 664, -211 },
	{ 876, -191 },
	{ 494, -157 },
	{ 999, -188 },
	{ 1088, -140 },
	{ 972, -149 },
	{ 1020, -80 },
	{ 1020, -50 },
	{ 960, -11 },
	{ 649, -223 },
	{ 664, -211 },
	{ 633, -247 },
	{ 532, -198 },
	{ 581, -237 },
	{ 617, -148 },
	{ 608, -212 },
	{ 649, -223 },
	{ 608, -212 },
	{ 689, -172 },
	{ 617, -148 },
	{ 780, -145 },
	{ 664, -98 },
	{ 761, -118 },
	{ 896, -103 },
	{ 995, -76 },
	{ 972, -149 },
	{ 1020, -50 },
	{ 948, -37 },
	{ 960, -11 },
	{ 927, -21 },
	{ 1020, -80 },
	{ 947, 33 },
	{ 1075, -2 },
	{ 916, 59 },
	{ 1117, 59 },
	{ 1092, 77 },
	{ 995, -76 },
	{ 1051, 13 },
	{ 1020, -50 },
	{ 1016, 42 },
	{ 960, -11 },
	{ 1003, 35 },
	{ 948, -37 },
	{ 1034, 6 },
	{ 1051, 13 },
	{ 1034, 6 },
	{ 995, -76 },
	{ 948, -37 },
	{ 896, -103 },
	{ 927, -21 },
	{ 903, -18 },
	{ 911, 9 },
	{ 776, -9 },
	{ 947, 33 },
	{ 764, 8 },
	{ 768, 70 },
	{ 617, 81 },
	{ 916, 59 },
	{ 944, 77 },
	{ 1092, 77 },
	{ 1075, 124 },
	{ 456, 254 },
	{ 576, 254 },
	{ 430, 164 },
	{ 588, 164 },
	{ 420, 107 },
	{ 597, 107 },
	{ 398, 81 },
	{ 617, 81 },
	{ 593, -36 },
	{ 764, 8 },
	{ 656, -49 },
	{ 776, -9 },
	{ 792, -37 },
	{ 903, -18 },
	{ 819, -93 },
	{ 871, -76 },
	{ 828, -108 },
	{ 896, -103 },
	{ 815, -118 },
	{ 860, -123 },
	{ 1189, 153 },
	{ 1124, 254 },
	{ 892, 254 },
	{ 1067, 254 },
	{ 1075, 124 },
	{ 960, 124 },
	{ 944, 77 },
	{ 928, 133 },
	{ 916, 59 },
	{ 892, 152 },
	{ 768, 70 },
	{ 848, 180 },
	{ 617, 81 },
	{ 716, 169 },
	{ 597, 107 },
	{ 636, 162 },
	{ 588, 164 },
	{ 613, 254 },
	{ 576, 254 },
	{ 892, 152 },
	{ 912, 254 },
	{ 928, 133 },
	{ 952, 254 },
	{ 960, 124 },
	{ 1067, 254 },
	{ 792, -37 },
	{ 689, -83 },
	{ 656, -49 },
	{ 593, -36 },
	{ 768, 70 },
	{ 916, 59 },
	{ 947, 33 },
	{ 195, -52 },
	{ 247, 70 },
	{ 410, -72 },
	{ 947, 33 },
	{ 927, -21 },
	{ 911, 9 },
	{ 284, 170 },
	{ 398, 81 },
	{ 354, 163 },
	{ 420, 107 },
	{ 430, 164 },
	{ 613, 254 },
	{ 636, 162 },
	{ 637, 254 },
	{ 716, 169 },
	{ 400, 254 },
	{ 284, 170 },
	{ 412, 254 },
	{ 354, 163 },
	{ 456, 254 },
	{ 430, 164 },
	{ 93, 254 },
	{ 106, 254 },
	{ 124, 134 },
	{ 171, 153 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003B39C[] = {
	{ 510, -254 },
	{ 0, -255 },
	{ 510, 0 },
	{ 0 },
	{ 510, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003B3B4[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0003B3D4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_0003ADBC, NULL, NULL, NULL, uvSTG12_0003AFF4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, polySTG12_0003ADD2, NULL, NULL, NULL, uvSTG12_0003B01C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, polySTG12_0003ADDC, NULL, NULL, NULL, uvSTG12_0003B02C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, polySTG12_0003ADF2, NULL, NULL, NULL, uvSTG12_0003B054, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 29, polySTG12_0003ADFC, NULL, NULL, NULL, uvSTG12_0003B064, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, polySTG12_0003AFD2, NULL, NULL, NULL, uvSTG12_0003B39C, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, polySTG12_0003AFE0, NULL, NULL, NULL, uvSTG12_0003B3B4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0003B47C[] = {
	{ -6, -0.00001f, 6 },
	{ 6, -0.00001f, 6 },
	{ -5, 1.999999f, 5 },
	{ 5, 1.999999f, 5 },
	{ -6, -0.00001f, -6 },
	{ 6, -0.00001f, -6 },
	{ -5, 1.999999f, -5 },
	{ 5, 1.999999f, -5 },
	{ -4, 15, 4 },
	{ 4, 15, 4 },
	{ -4, 15, -4 },
	{ 4, 15, -4 },
	{ -1.800003f, 11.2f, 4.400001f },
	{ -1.800003f, 13.7f, 4.200001f },
	{ 1.700001f, 11.2f, 4.400001f },
	{ 1.700001f, 13.7f, 4.200001f },
	{ -0.370653f, 17.03775f, 1.206001f },
	{ 1.292788f, 17.44732f, 1.296001f },
	{ -1.349826f, 19.1526f, 1.080001f },
	{ 1.481559f, 19.67954f, 1.080001f },
	{ -0.459134f, 17.02128f, -2.286f },
	{ 1.204307f, 17.43086f, -2.196001f },
	{ -1.349826f, 19.1526f, -1.080001f },
	{ 1.481559f, 19.67954f, -1.080001f },
	{ -1.335915f, 23.47094f, 1.88624f },
	{ 2.919214f, 21.62152f, 1.88624f },
	{ -0.722962f, 24.88122f, -0.062709f },
	{ 3.532169f, 23.03181f, -0.06270999f },
	{ 0.24105f, 24.58668f, 2.404506f },
	{ 2.517839f, 23.59712f, 2.404506f },
	{ 0.72085f, 25.69061f, 0.878927f },
	{ 2.997637f, 24.70104f, 0.878927f },
	{ 0.44602f, 25.05828f, 4.126534f },
	{ 2.722809f, 24.06872f, 4.126533f },
	{ 1.294489f, 27.01044f, 4.235968f },
	{ 3.571277f, 26.02087f, 4.235968f },
	{ 2.111244f, 19.24746f, -1.080001f },
	{ 0.592802f, 16.78469f, 1.026001f },
	{ 0.06586599f, 19.41607f, -1.980001f },
	{ 0.065867f, 19.41607f, 1.980001f },
	{ 1.543184f, 24.46863f, -0.728002f },
	{ 0.473714f, 22.008f, 2.672493f },
	{ 2.04946f, 25.63347f, 0.274118f },
	{ 1.20825f, 23.69802f, 2.948837f },
	{ 2.737508f, 27.21654f, 4.138554f },
	{ 1.317834f, 23.95015f, 4.102997f },
	{ 0.3952f, 17.64646f, -2.646002f },
	{ -2.414495f, 24.66151f, 1.91787f },
	{ -1.896648f, 25.85296f, 0.271329f },
	{ -1.153029f, 25.24463f, 2.344028f },
	{ -0.749316f, 26.17349f, 1.060372f },
	{ -3.253657f, 26.20965f, 2.283545f },
	{ -3.002116f, 26.7884f, 1.483743f },
	{ -2.306026f, 26.45725f, 2.760746f },
	{ -2.054483f, 27.036f, 1.960939f },
	{ 3.407385f, 21.39181f, 1.284751f },
	{ 3.811101f, 22.32068f, 0.001098f },
	{ 4.429015f, 22.00293f, 2.04827f },
	{ 4.832729f, 22.93179f, 0.764616f },
	{ 3.594072f, 20.08188f, 0.101189f },
	{ 3.902677f, 20.79193f, -0.8800589f },
	{ 4.422835f, 20.24925f, 0.482949f },
	{ 4.731443f, 20.9593f, -0.498299f },
	{ 2.908055f, 18.11411f, 1.116001f },
	{ 2.111244f, 19.24746f, 1.080001f },
	{ 2.908055f, 18.11411f, -1.116001f },
	{ -2.117654f, 17.1788f, 1.116001f },
	{ -1.78191f, 18.52292f, 1.080001f },
	{ -2.117654f, 17.1788f, -1.116001f },
	{ -1.78191f, 18.52292f, -1.080001f },
	{ -1.296001f, 15, 1.296001f },
	{ -1.296001f, 15, -1.026001f },
	{ -2.556001f, 15, 1.116001f },
	{ -2.556001f, 15, -0.846001f },
	{ 1.296001f, 15, 1.296001f },
	{ 1.296001f, 15, -1.026001f },
	{ 2.556001f, 15, 1.116001f },
	{ 2.556001f, 15, -0.846001f },
	{ -1.355727f, 22.83471f, -0.9357409f },
	{ 0.63219f, 22.37262f, -1.698817f },
	{ -0.010456f, 20.89402f, 1.638736f },
	{ 2.467559f, 21.173f, -0.935742f },
	{ 2.092058f, 20.30904f, 1.014402f },
	{ -1.731228f, 21.97076f, 1.014402f },
	{ 1.926001f, 15, 1.476001f },
	{ 2.305156f, 17.91036f, 1.476001f },
	{ 1.926001f, 15, -1.296001f },
	{ 2.216675f, 17.8939f, -2.196001f },
	{ -1.926001f, 15, 1.476001f },
	{ -1.926001f, 15, -1.296001f },
	{ -1.481821f, 17.20559f, 1.476001f },
	{ -1.570303f, 17.18912f, -2.196001f },
	{ -1.077749f, 23.09856f, 2.188644f },
	{ 2.47083f, 21.55624f, 2.188644f },
	{ -0.040513f, 23.93886f, 2.92664f },
	{ 2.236274f, 22.9493f, 2.92664f },
	{ 1.059837f, 23.35655f, 3.047599f },
	{ 0.18498f, 21.34368f, 2.217803f },
	{ 2.004874f, 20.88154f, 1.593471f },
	{ -1.253172f, 22.29758f, 1.593471f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0003B92C[] = {
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.648514f, 0.398573f, 0.648514f },
	{ 0.648514f, 0.398573f, 0.648514f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.648514f, 0.398573f, -0.648514f },
	{ 0.648514f, 0.398573f, -0.648514f },
	{ -0.556197f, 0.617487f, 0.556197f },
	{ 0.556197f, 0.617487f, 0.556197f },
	{ -0.556197f, 0.617487f, -0.556197f },
	{ 0.556197f, 0.617487f, -0.556197f },
	{ 0, 0.07974499f, 0.996815f },
	{ 0, 0.07974499f, 0.996815f },
	{ 0, 0.07974499f, 0.996815f },
	{ 0, 0.07974499f, 0.996815f },
	{ 0.301772f, -0.42621f, 0.852806f },
	{ -0.209303f, -0.180025f, 0.961137f },
	{ -0.728017f, 0.158949f, 0.666878f },
	{ 0.633396f, 0.118362f, 0.764722f },
	{ 0.095163f, -0.5508209f, -0.8291799f },
	{ 0.049093f, -0.410171f, -0.910686f },
	{ -0.7844779f, 0.295096f, -0.545447f },
	{ 0.699856f, 0.18801f, -0.689097f },
	{ -0.8390419f, -0.122706f, 0.530049f },
	{ 0.7108909f, -0.576229f, 0.403228f },
	{ -0.396587f, 0.408432f, -0.8221329f },
	{ 0.504463f, 0.19775f, -0.840483f },
	{ -0.5771689f, 0.334112f, 0.7451479f },
	{ 0.797644f, -0.231412f, 0.556968f },
	{ -0.124305f, 0.947458f, -0.294741f },
	{ 0.842472f, 0.475332f, -0.253575f },
	{ -0.748806f, -0.06857099f, 0.659233f },
	{ 0.460717f, -0.594266f, 0.659233f },
	{ -0.442762f, 0.699105f, 0.56144f },
	{ 0.813209f, 0.153219f, 0.56144f },
	{ 0.543524f, 0.70411f, -0.456958f },
	{ 0.193536f, -0.84155f, 0.504319f },
	{ -0.080824f, 0.192264f, -0.978009f },
	{ -0.035047f, 0.012508f, 0.999307f },
	{ 0.232805f, 0.560353f, -0.794862f },
	{ -0.21229f, -0.466698f, 0.858561f },
	{ 0.336494f, 0.787285f, -0.5166759f },
	{ -0.091142f, -0.326921f, 0.9406469f },
	{ 0.357347f, 0.822181f, 0.443082f },
	{ -0.282625f, -0.650265f, 0.70518f },
	{ 0.116836f, -0.334667f, -0.935066f },
	{ -0.7160079f, -0.658671f, 0.231269f },
	{ -0.392121f, 0.213163f, -0.8948759f },
	{ 0.180909f, 0.127412f, 0.975212f },
	{ 0.443506f, 0.884093f, -0.14725f },
	{ -0.911931f, -0.004945f, 0.410313f },
	{ -0.705209f, 0.613087f, -0.356097f },
	{ 0.031112f, 0.325793f, 0.9449289f },
	{ 0.213679f, 0.959595f, 0.183084f },
	{ -0.647158f, -0.7089829f, 0.280229f },
	{ -0.373278f, 0.249769f, -0.893465f },
	{ 0.738816f, -0.146157f, 0.657867f },
	{ 0.87052f, 0.480143f, -0.107969f },
	{ -0.536275f, -0.837797f, -0.102495f },
	{ -0.282706f, -0.214257f, -0.934971f },
	{ 0.524219f, -0.803211f, 0.282925f },
	{ 0.7931539f, -0.151636f, -0.5898409f },
	{ 0.854748f, 0.228149f, 0.466213f },
	{ 0.497265f, 0.603186f, 0.623614f },
	{ 0.917814f, 0.235873f, -0.319344f },
	{ -0.845911f, 0.195238f, 0.496303f },
	{ -0.663758f, 0.386952f, 0.6400729f },
	{ -0.937982f, 0.191856f, -0.288759f },
	{ -0.765563f, 0.466717f, -0.442819f },
	{ 0.6743889f, -0.275994f, 0.684855f },
	{ 0.6522509f, -0.588278f, -0.478014f },
	{ -0.865778f, 0.174183f, 0.469137f },
	{ -0.946354f, 0.155278f, -0.283377f },
	{ -0.77383f, -0.019523f, 0.633092f },
	{ -0.820612f, -0.272685f, -0.502234f },
	{ 0.855995f, -0.09677099f, 0.507846f },
	{ 0.933278f, -0.134385f, -0.333066f },
	{ -0.7844329f, 0.273907f, -0.556453f },
	{ 0.03675f, 0.199242f, -0.979261f },
	{ -0.245548f, -0.34958f, 0.904157f },
	{ 0.781379f, -0.270172f, -0.562542f },
	{ 0.73136f, -0.587696f, 0.346014f },
	{ -0.9438339f, -0.06310099f, 0.32434f },
	{ 0.130129f, -0.028858f, 0.9910769f },
	{ 0.194663f, 0.083566f, 0.977304f },
	{ 0.394162f, -0.325432f, -0.859495f },
	{ 0.388933f, 0.13081f, -0.911932f },
	{ -0.18141f, 0.027495f, 0.983023f },
	{ -0.490803f, -0.232958f, -0.8395489f },
	{ -0.114758f, 0.07638799f, 0.990452f },
	{ -0.433095f, 0.050015f, -0.89996f },
	{ -0.564908f, -0.160985f, 0.809298f },
	{ 0.477515f, -0.492501f, 0.727614f },
	{ -0.320246f, 0.177571f, 0.9305429f },
	{ 0.457685f, -0.144589f, 0.877279f },
	{ 0.016982f, -0.027878f, 0.999467f },
	{ -0.266718f, -0.593942f, 0.7590089f },
	{ 0.218907f, -0.704892f, 0.6746899f },
	{ -0.599265f, -0.39761f, 0.694829f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0003BDDC = { vertexSTG12_0003B47C, normalSTG12_0003B92C, LengthOfArray(vertexSTG12_0003B47C), meshlistSTG12_0003B3D4, matlistSTG12_0003AD30, LengthOfArray(meshlistSTG12_0003B3D4), LengthOfArray(matlistSTG12_0003AD30),{ 0, 13.60827f, 0 }, 14.87229f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0003BE04 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0003BDDC, 37, 0, -205, 0, 0xFFFFC000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0003BE38[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 58, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 58, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 40, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 45, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 35, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 35, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003BEC4[] = {
	0x8000u | 10, 0, 2, 1, 3, 5, 7, 4, 6, 0, 2
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003BEDA[] = {
	4, 11, 10, 9, 8
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003BEE4[] = {
	0x8000u | 10, 8, 2, 10, 6, 11, 7, 9, 3, 8, 2
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003BEFA[] = {
	4, 15, 13, 14, 12
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003BF04[] = {
	0x8000u | 7, 95, 29, 93, 25, 98, 82, 97,
	3, 46, 21, 37,
	3, 98, 93, 97,
	0x8000u | 5, 97, 41, 93, 96, 95,
	0x8000u | 5, 26, 79, 40, 81, 27,
	0x8000u | 12, 43, 45, 29, 33, 31, 35, 42, 44, 30, 34, 28, 32,
	3, 81, 23, 79,
	3, 28, 30, 49,
	3, 26, 48, 50,
	12, 51, 52, 47, 48, 24, 26, 78, 79, 38, 23, 46, 21,
	0x8000u | 8, 47, 51, 49, 53, 50, 54, 48, 52,
	8, 56, 31, 58, 29, 57, 25, 55, 27,
	0x8000u | 12, 61, 59, 55, 56, 27, 31, 40, 42, 26, 30, 50, 49,
	8, 59, 56, 60, 58, 62, 57, 61, 55,
	9, 73, 72, 68, 66, 69, 67, 22, 18, 83,
	18, 75, 74, 21, 17, 37, 39, 18, 80, 83, 99, 92, 41, 94, 96, 28, 43, 32, 45,
	9, 76, 77, 63, 65, 64, 36, 19, 23, 81,
	3, 17, 74, 84,
	11, 41, 99, 97, 80, 82, 39, 19, 17, 85, 84, 76,
	5, 19, 81, 82, 27, 25,
	0x8000u | 12, 68, 73, 91, 89, 20, 71, 16, 70, 90, 88, 66, 72,
	0x8000u | 5, 20, 22, 91, 69, 68,
	0x8000u | 5, 18, 16, 67, 90, 66,
	5, 76, 63, 85, 64, 19,
	4, 96, 95, 43, 29,
	4, 21, 87, 75, 86,
	0x8000u | 7, 23, 21, 36, 87, 65, 86, 77,
	0x8000u | 5, 94, 24, 28, 47, 49,
	0x8000u | 12, 94, 92, 24, 83, 78, 22, 38, 20, 46, 16, 37, 18
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003C0DA[] = {
	0x8000u | 6, 32, 34, 45, 44, 33, 35
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003C0E8[] = {
	4, 53, 54, 51, 52,
	4, 62, 61, 60, 59
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003C0FC[] = {
	{ 253, 223 },
	{ 1, 223 },
	{ 254, -765 },
	{ 0, -765 },
	{ 254, -1785 },
	{ 0, -1785 },
	{ 254, -2805 },
	{ 0, -2805 },
	{ 253, -3793 },
	{ 1, -3793 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003C124[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003C134[] = {
	{ 7, 251 },
	{ 7, -251 },
	{ 255, 255 },
	{ 255, -255 },
	{ 510, 255 },
	{ 510, -255 },
	{ 765, 255 },
	{ 765, -255 },
	{ 1012, 251 },
	{ 1012, -251 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003C15C[] = {
	{ 251, 3 },
	{ 3, 3 },
	{ 251, 251 },
	{ 3, 251 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003C16C[] = {
	{ 1121, -176 },
	{ 1168, -154 },
	{ 1003, -130 },
	{ 1020, -117 },
	{ 900, -97 },
	{ 916, -60 },
	{ 749, -114 },
	{ 1272, 129 },
	{ 1205, 168 },
	{ 745, 176 },
	{ 900, -97 },
	{ 1003, -130 },
	{ 749, -114 },
	{ 749, -114 },
	{ 729, -152 },
	{ 1003, -130 },
	{ 1280, -181 },
	{ 1121, -176 },
	{ 386, -29 },
	{ 256, 15 },
	{ 249, 0 },
	{ 29, -15 },
	{ 102, -29 },
	{ 255, -178 },
	{ 249, -255 },
	{ 148, -154 },
	{ 184, -232 },
	{ 186, -85 },
	{ 204, -162 },
	{ 248, -58 },
	{ 246, -132 },
	{ 308, -85 },
	{ 288, -162 },
	{ 350, -154 },
	{ 312, -232 },
	{ 29, -15 },
	{ 0, 54 },
	{ 256, 15 },
	{ 350, -154 },
	{ 308, -85 },
	{ 382, -172 },
	{ 386, -29 },
	{ 382, -72 },
	{ 346, -114 },
	{ 410, -176 },
	{ 390, -140 },
	{ 438, -146 },
	{ 382, -72 },
	{ 488, -117 },
	{ 386, -29 },
	{ 458, -15 },
	{ 256, 15 },
	{ 260, 58 },
	{ 0, 54 },
	{ 252, 129 },
	{ 187, 168 },
	{ 438, -146 },
	{ 410, -176 },
	{ 382, -172 },
	{ 386, -193 },
	{ 346, -114 },
	{ 366, -157 },
	{ 382, -72 },
	{ 390, -140 },
	{ 99, -83 },
	{ 186, -85 },
	{ 140, -122 },
	{ 148, -154 },
	{ 103, -180 },
	{ 0, -117 },
	{ 53, -141 },
	{ 102, -29 },
	{ 103, -199 },
	{ 76, -176 },
	{ 53, -141 },
	{ 99, -83 },
	{ 102, -29 },
	{ 186, -85 },
	{ 249, 0 },
	{ 248, -58 },
	{ 386, -29 },
	{ 308, -85 },
	{ 346, -114 },
	{ 382, -172 },
	{ 76, -176 },
	{ 99, -83 },
	{ 101, -132 },
	{ 140, -122 },
	{ 127, -154 },
	{ 103, -180 },
	{ 103, -199 },
	{ 53, -141 },
	{ 424, 255 },
	{ 528, 255 },
	{ 470, 129 },
	{ 593, 129 },
	{ 470, 73 },
	{ 601, 73 },
	{ 488, 54 },
	{ 637, 43 },
	{ 593, -60 },
	{ 1145, 255 },
	{ 940, 255 },
	{ 1205, 168 },
	{ 808, 168 },
	{ 745, 176 },
	{ 749, 38 },
	{ 637, 43 },
	{ 749, -62 },
	{ 593, -60 },
	{ 608, -97 },
	{ 508, -130 },
	{ 729, -152 },
	{ 396, -176 },
	{ 260, -181 },
	{ 350, -154 },
	{ 255, -178 },
	{ 312, -232 },
	{ 249, -255 },
	{ 980, 255 },
	{ 1088, 255 },
	{ 908, 129 },
	{ 1036, 129 },
	{ 900, 73 },
	{ 1040, 73 },
	{ 864, 43 },
	{ 1020, 54 },
	{ 1049, -15 },
	{ 808, 168 },
	{ 940, 255 },
	{ 948, 255 },
	{ 729, -152 },
	{ 608, -97 },
	{ 749, -114 },
	{ 749, -62 },
	{ 916, -60 },
	{ 749, 38 },
	{ 864, 43 },
	{ 808, 168 },
	{ 871, 132 },
	{ 948, 255 },
	{ 980, 255 },
	{ 864, 43 },
	{ 1049, -15 },
	{ 916, -60 },
	{ 1122, -29 },
	{ 1020, -117 },
	{ 470, 129 },
	{ 424, 255 },
	{ 396, 132 },
	{ 386, 255 },
	{ 328, 168 },
	{ 372, 255 },
	{ 685, 168 },
	{ 561, 255 },
	{ 632, 132 },
	{ 557, 255 },
	{ 593, 129 },
	{ 528, 255 },
	{ 328, 168 },
	{ 488, 54 },
	{ 396, 132 },
	{ 470, 73 },
	{ 470, 129 },
	{ 637, 43 },
	{ 685, 168 },
	{ 601, 73 },
	{ 632, 132 },
	{ 593, 129 },
	{ 980, 255 },
	{ 908, 129 },
	{ 871, 132 },
	{ 900, 73 },
	{ 864, 43 },
	{ 260, -181 },
	{ 101, -176 },
	{ 255, -178 },
	{ 148, -154 },
	{ 187, 168 },
	{ 106, 132 },
	{ 125, 255 },
	{ 108, 255 },
	{ 0, 54 },
	{ 187, 168 },
	{ 20, 73 },
	{ 106, 132 },
	{ 18, 129 },
	{ 108, 255 },
	{ 68, 255 },
	{ 396, -176 },
	{ 488, -117 },
	{ 350, -154 },
	{ 438, -146 },
	{ 382, -172 },
	{ 396, -176 },
	{ 508, -130 },
	{ 488, -117 },
	{ 593, -60 },
	{ 458, -15 },
	{ 488, 54 },
	{ 260, 58 },
	{ 328, 168 },
	{ 252, 129 },
	{ 685, 168 },
	{ 745, 176 },
	{ 637, 43 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003C4A4[] = {
	{ 0, 255 },
	{ 510, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, -255 },
	{ 510, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003C4BC[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0003C4DC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_0003BEC4, NULL, NULL, NULL, uvSTG12_0003C0FC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, polySTG12_0003BEDA, NULL, NULL, NULL, uvSTG12_0003C124, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, polySTG12_0003BEE4, NULL, NULL, NULL, uvSTG12_0003C134, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, polySTG12_0003BEFA, NULL, NULL, NULL, uvSTG12_0003C15C, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 29, polySTG12_0003BF04, NULL, NULL, NULL, uvSTG12_0003C16C, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, polySTG12_0003C0DA, NULL, NULL, NULL, uvSTG12_0003C4A4, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, polySTG12_0003C0E8, NULL, NULL, NULL, uvSTG12_0003C4BC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0003C584[] = {
	{ -6, -0.00001f, 6 },
	{ 5.999999f, -0.00001f, 6 },
	{ -5.000001f, 1.999999f, 5 },
	{ 4.999999f, 1.999999f, 5 },
	{ -6.000001f, -0.00001f, -6 },
	{ 5.999999f, -0.00001f, -6 },
	{ -5.000001f, 1.999999f, -5 },
	{ 4.999999f, 1.999999f, -5 },
	{ -4.000001f, 15, 4 },
	{ 3.999999f, 15, 4 },
	{ -4.000001f, 15, -4 },
	{ 3.999999f, 15, -4 },
	{ -1.800004f, 11.2f, 4.400001f },
	{ -1.800004f, 13.7f, 4.200001f },
	{ 1.700001f, 11.2f, 4.400001f },
	{ 1.700001f, 13.7f, 4.200001f },
	{ -0.855756f, 16.95341f, 1.856903f },
	{ 0.6558869f, 16.95341f, 1.946903f },
	{ -1.809939f, 19.79366f, 2.025467f },
	{ 1.610063f, 19.79366f, 2.025467f },
	{ -0.945756f, 16.95341f, -1.635099f },
	{ 0.565886f, 16.95341f, -1.545099f },
	{ -1.809939f, 19.54795f, -0.120514f },
	{ 1.610063f, 19.54795f, -0.120514f },
	{ -2.683338f, 23.43525f, -0.192848f },
	{ 2.660941f, 23.43525f, -0.192848f },
	{ -2.683338f, 21.44461f, -2.245755f },
	{ 2.660941f, 21.44461f, -2.245755f },
	{ -1.529718f, 24.2789f, -1.999781f },
	{ 1.329842f, 24.2789f, -1.999781f },
	{ -1.529718f, 22.72069f, -3.606735f },
	{ 1.329841f, 22.72069f, -3.606735f },
	{ -1.529718f, 26.04964f, -3.453865f },
	{ 1.329842f, 26.04964f, -3.453865f },
	{ -1.529718f, 24.46085f, -5.325524f },
	{ 1.329842f, 24.46085f, -5.325524f },
	{ 2.150063f, 19.11359f, -0.429099f },
	{ -0.09993599f, 16.7736f, 1.676903f },
	{ -0.09993599f, 19.44558f, -1.014673f },
	{ -0.09993599f, 19.89604f, 2.919625f },
	{ -0.09993599f, 20.76508f, -2.946536f },
	{ -0.09993599f, 24.23832f, 0.635348f },
	{ -0.09993599f, 22.10294f, -4.243813f },
	{ -0.09993599f, 24.83488f, -1.426414f },
	{ -0.09993599f, 23.77577f, -5.889564f },
	{ -0.09993599f, 26.55792f, -2.874374f },
	{ -0.09993599f, 17.8536f, -1.9951f },
	{ -3.6638f, 24.10266f, -1.458062f },
	{ -3.6638f, 22.4209f, -3.19243f },
	{ -2.843534f, 24.67962f, -2.511955f },
	{ -2.843534f, 23.36851f, -3.86408f },
	{ -4.5512f, 24.78559f, -2.738316f },
	{ -4.5512f, 23.96867f, -3.580782f },
	{ -3.726615f, 25.16887f, -3.109967f },
	{ -3.726615f, 24.35195f, -3.952436f },
	{ 3.462481f, 23.97615f, -1.458991f },
	{ 3.462481f, 22.66503f, -2.811117f },
	{ 2.728076f, 24.86599f, -2.321837f },
	{ 2.728076f, 23.55487f, -3.673964f },
	{ 4.351321f, 24.78366f, -2.612834f },
	{ 4.351321f, 23.78142f, -3.646424f },
	{ 3.616916f, 25.29332f, -3.107033f },
	{ 3.616916f, 24.29107f, -4.140622f },
	{ 2.456062f, 17.8536f, 1.766903f },
	{ 2.150063f, 19.11359f, 1.730903f },
	{ 2.456062f, 17.8536f, -0.465099f },
	{ -2.655939f, 17.8536f, 1.766903f },
	{ -2.349939f, 19.11359f, 1.730903f },
	{ -2.655939f, 17.8536f, -0.465099f },
	{ -2.349939f, 19.11359f, -0.429099f },
	{ -1.666481f, 14.99802f, 0.684378f },
	{ -1.666481f, 14.99802f, -1.637624f },
	{ -2.92648f, 14.99802f, 0.504378f },
	{ -2.92648f, 14.99802f, -1.457624f },
	{ 1.466604f, 14.99802f, 0.684378f },
	{ 1.466603f, 14.99802f, -1.637624f },
	{ 2.726604f, 14.99802f, 0.504378f },
	{ 2.726604f, 14.99802f, -1.457625f },
	{ -2.412148f, 21.13822f, -0.6198649f },
	{ -0.09993599f, 20.42846f, -1.342558f },
	{ -0.09993599f, 22.18739f, 2.435144f },
	{ 2.389752f, 21.13822f, -0.619866f },
	{ 2.389752f, 22.15419f, 1.59256f },
	{ -2.412148f, 22.15419f, 1.59256f },
	{ 2.096603f, 14.99802f, 0.864378f },
	{ 1.826062f, 17.7636f, 2.126903f },
	{ 2.096603f, 14.99802f, -1.907624f },
	{ 1.736063f, 17.7636f, -1.545099f },
	{ -2.296481f, 14.99802f, 0.864378f },
	{ -2.296481f, 14.99802f, -1.907624f },
	{ -2.02594f, 17.7636f, 2.126903f },
	{ -2.115939f, 17.7636f, -1.545099f },
	{ -2.239638f, 23.74412f, 0.125689f },
	{ 2.217241f, 23.74412f, 0.125689f },
	{ -1.529718f, 24.7673f, -1.113673f },
	{ 1.329842f, 24.7673f, -1.113673f },
	{ -0.09993599f, 24.89085f, -0.986258f },
	{ -0.09993599f, 23.36842f, 2.31528f },
	{ 2.034793f, 22.98132f, 1.6167f },
	{ -2.057189f, 22.98132f, 1.6167f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0003CA34[] = {
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.648514f, 0.398573f, 0.648514f },
	{ 0.648513f, 0.398573f, 0.648513f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.648514f, 0.398573f, -0.648514f },
	{ 0.648513f, 0.398573f, -0.648513f },
	{ -0.556197f, 0.617487f, 0.556197f },
	{ 0.556197f, 0.617487f, 0.556197f },
	{ -0.556197f, 0.617487f, -0.556197f },
	{ 0.556197f, 0.617487f, -0.556197f },
	{ 0, 0.07974499f, 0.996815f },
	{ 0, 0.07974499f, 0.996815f },
	{ 0, 0.07974499f, 0.996815f },
	{ 0, 0.07974499f, 0.996815f },
	{ 0.172472f, -0.563987f, 0.807571f },
	{ -0.159775f, -0.533641f, 0.8304819f },
	{ -0.655067f, 0.080974f, 0.751219f },
	{ 0.667803f, 0.031328f, 0.743679f },
	{ 0.442404f, -0.353453f, -0.824226f },
	{ -0.4864f, -0.408212f, -0.772514f },
	{ -0.754352f, 0.259815f, -0.602868f },
	{ 0.7912199f, 0.144767f, -0.594149f },
	{ -0.874904f, 0.339563f, 0.345311f },
	{ 0.912655f, 0.323384f, 0.249966f },
	{ -0.6349249f, -0.732774f, -0.244772f },
	{ 0.674565f, -0.674369f, -0.300314f },
	{ -0.431808f, 0.898877f, 0.074577f },
	{ 0.5287049f, 0.848265f, 0.030288f },
	{ -0.468033f, -0.358869f, -0.8075629f },
	{ 0.538346f, -0.314302f, -0.7819189f },
	{ -0.667298f, 0.740662f, -0.07831699f },
	{ 0.667298f, 0.740661f, -0.078318f },
	{ -0.674754f, 0.21762f, -0.70523f },
	{ 0.674754f, 0.217619f, -0.70523f },
	{ 0.614823f, 0.587077f, -0.526624f },
	{ -0.042455f, -0.825434f, 0.562901f },
	{ 0.012405f, -0.045974f, -0.998866f },
	{ -0.008257f, -0.006162f, 0.999947f },
	{ -0.009403f, -0.807324f, -0.590033f },
	{ -0.008704999f, 0.863123f, 0.504919f },
	{ -0.004861f, -0.601337f, -0.798981f },
	{ 0.039744f, 0.98313f, 0.178539f },
	{ 0.000001f, -0.117264f, -0.9931009f },
	{ 0.000001f, 0.977765f, 0.209703f },
	{ 0.023637f, -0.223417f, -0.974436f },
	{ -0.602663f, 0.338476f, 0.722656f },
	{ -0.620004f, -0.706627f, -0.340989f },
	{ 0.37502f, 0.927005f, 0.004641f },
	{ 0.234339f, -0.020813f, -0.971932f },
	{ -0.8144619f, 0.5251009f, 0.24682f },
	{ -0.8784969f, -0.126201f, -0.460777f },
	{ 0.090345f, 0.975387f, -0.20114f },
	{ 0.005256f, 0.357132f, -0.934039f },
	{ 0.713814f, 0.293658f, 0.635794f },
	{ 0.7279969f, -0.637523f, -0.252161f },
	{ -0.232865f, 0.9701509f, 0.067673f },
	{ -0.232521f, -0.010407f, -0.972536f },
	{ 0.842944f, 0.447341f, 0.298886f },
	{ 0.8343059f, -0.292355f, -0.467399f },
	{ 0.024711f, 0.975704f, -0.217695f },
	{ 0.030016f, 0.232591f, -0.972111f },
	{ 0.840184f, 0.027983f, 0.5415789f },
	{ 0.763643f, 0.344376f, 0.546127f },
	{ 0.936074f, 0.209561f, -0.282577f },
	{ -0.840184f, 0.027984f, 0.5415789f },
	{ -0.703249f, 0.425388f, 0.5696369f },
	{ -0.948396f, 0.20645f, -0.240673f },
	{ -0.574149f, 0.633655f, -0.518492f },
	{ 0.646566f, -0.571248f, 0.505597f },
	{ 0.625728f, -0.250368f, -0.7387699f },
	{ -0.9244789f, -0.077452f, 0.373283f },
	{ -0.907382f, 0.212091f, -0.36287f },
	{ -0.608349f, -0.606518f, 0.511906f },
	{ -0.629479f, -0.255232f, -0.733903f },
	{ 0.9244789f, -0.077452f, 0.373283f },
	{ 0.890151f, 0.22254f, -0.397628f },
	{ -0.88228f, -0.449593f, -0.139455f },
	{ -0.007893f, -0.809567f, -0.586975f },
	{ -0.006342f, 0.113479f, 0.99352f },
	{ 0.869257f, -0.477983f, -0.126192f },
	{ 0.815919f, 0.05254f, 0.575774f },
	{ -0.839727f, 0.030872f, 0.5421309f },
	{ 0.300637f, -0.422156f, 0.85522f },
	{ 0.258662f, -0.170894f, 0.950731f },
	{ 0.356754f, 0.167369f, -0.919083f },
	{ 0.223376f, 0.378718f, -0.898151f },
	{ -0.278095f, -0.418554f, 0.864567f },
	{ -0.39811f, 0.147219f, -0.905448f },
	{ -0.230907f, -0.174394f, 0.9572189f },
	{ -0.300694f, 0.381537f, -0.874078f },
	{ -0.5892169f, 0.723352f, 0.359978f },
	{ 0.623378f, 0.73259f, 0.273335f },
	{ -0.364486f, 0.927011f, 0.08831999f },
	{ 0.477387f, 0.876153f, 0.066763f },
	{ 0.026687f, 0.988178f, 0.150968f },
	{ -0.011444f, 0.554298f, 0.83224f },
	{ 0.47999f, 0.5396039f, 0.691691f },
	{ -0.569132f, 0.474632f, 0.671426f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0003CEE4 = { vertexSTG12_0003C584, normalSTG12_0003CA34, LengthOfArray(vertexSTG12_0003C584), meshlistSTG12_0003C4DC, matlistSTG12_0003BE38, LengthOfArray(meshlistSTG12_0003C4DC), LengthOfArray(matlistSTG12_0003BE38),{ -0.00001f, 13.27896f, 0 }, 14.57157f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0003CF0C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0003CEE4, 37, 0, -165, 0, 0xFFFFC000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0003CF40[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 58, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 58, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 40, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 45, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 35, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 35, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003CFCC[] = {
	0x8000u | 10, 2, 0, 6, 4, 7, 5, 3, 1, 2, 0
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003CFE2[] = {
	0x8000u | 10, 8, 2, 10, 6, 11, 7, 9, 3, 8, 2
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003CFF8[] = {
	4, 11, 10, 9, 8
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003D002[] = {
	4, 15, 13, 14, 12
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003D00C[] = {
	4, 65, 36, 64, 19,
	6, 27, 82, 81, 19, 23, 36,
	7, 42, 26, 30, 50, 49, 53, 51,
	4, 29, 31, 33, 35,
	6, 35, 42, 44, 30, 34, 28,
	8, 46, 23, 21, 36, 87, 65, 86, 77,
	3, 45, 32, 43,
	0x8000u | 17, 54, 52, 48, 47, 24, 28, 94, 96, 41, 93, 97, 98, 82, 25, 27, 55, 56,
	0x8000u | 6, 52, 51, 47, 49, 28, 30,
	11, 55, 57, 25, 29, 93, 95, 96, 43, 28, 32, 34,
	6, 61, 62, 57, 58, 29, 31,
	0x8000u | 6, 60, 56, 59, 55, 61, 57,
	13, 62, 60, 58, 56, 31, 27, 40, 81, 79, 23, 38, 46, 20,
	11, 67, 18, 22, 83, 78, 24, 26, 48, 50, 54, 53,
	5, 71, 16, 70, 90, 88,
	7, 73, 72, 68, 66, 69, 67, 22,
	16, 72, 88, 66, 90, 67, 16, 18, 37, 39, 17, 19, 85, 64, 63, 65, 77,
	3, 21, 75, 74,
	6, 77, 63, 76, 85, 84, 17,
	0x8000u | 10, 84, 74, 17, 21, 37, 46, 16, 20, 71, 89,
	3, 25, 93, 98,
	0x8000u | 13, 73, 89, 91, 20, 22, 38, 78, 79, 26, 40, 42, 31, 35,
	5, 73, 68, 91, 69, 22,
	0x8000u | 5, 95, 43, 29, 45, 33,
	4, 86, 75, 87, 21,
	3, 24, 83, 92,
	0x8000u | 6, 92, 99, 83, 80, 18, 39,
	0x8000u | 10, 24, 94, 92, 41, 99, 97, 80, 82, 39, 19
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003D1DC[] = {
	0x8000u | 6, 35, 33, 44, 45, 34, 32
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003D1EA[] = {
	4, 53, 54, 51, 52,
	4, 62, 61, 60, 59
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003D200[] = {
	{ 1, -3793 },
	{ 253, -3793 },
	{ 0, -2805 },
	{ 254, -2805 },
	{ 0, -1785 },
	{ 254, -1785 },
	{ 0, -765 },
	{ 254, -765 },
	{ 1, 223 },
	{ 253, 223 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003D228[] = {
	{ 7, 251 },
	{ 7, -251 },
	{ 255, 255 },
	{ 255, -255 },
	{ 510, 255 },
	{ 510, -255 },
	{ 765, 255 },
	{ 765, -255 },
	{ 1012, 251 },
	{ 1012, -251 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003D250[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003D260[] = {
	{ 251, 3 },
	{ 3, 3 },
	{ 251, 251 },
	{ 3, 251 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003D270[] = {
	{ 1073, 162 },
	{ 1077, 117 },
	{ 936, 117 },
	{ 916, 98 },
	{ 1131, -35 },
	{ 952, 37 },
	{ 1099, 37 },
	{ 916, 98 },
	{ 1098, 98 },
	{ 1077, 117 },
	{ 242, -101 },
	{ 366, -35 },
	{ 320, -101 },
	{ 404, -73 },
	{ 472, -73 },
	{ 474, 27 },
	{ 470, 42 },
	{ 1061, -101 },
	{ 1184, -101 },
	{ 939, -161 },
	{ 1083, -232 },
	{ 65, -232 },
	{ 242, -101 },
	{ 242, -255 },
	{ 320, -101 },
	{ 418, -232 },
	{ 440, -101 },
	{ 242, 162 },
	{ 78, 98 },
	{ 188, 191 },
	{ 59, 117 },
	{ 129, 165 },
	{ 53, 162 },
	{ 83, 255 },
	{ 38, 255 },
	{ 753, -139 },
	{ 569, -161 },
	{ 753, -101 },
	{ 438, 27 },
	{ 428, 42 },
	{ 386, -20 },
	{ 484, -20 },
	{ 510, -35 },
	{ 440, -101 },
	{ 548, -92 },
	{ 753, -92 },
	{ 753, -35 },
	{ 967, -35 },
	{ 753, 9 },
	{ 924, 9 },
	{ 952, 37 },
	{ 999, -35 },
	{ 1131, -35 },
	{ 1021, -20 },
	{ 1099, -20 },
	{ 428, 42 },
	{ 470, 42 },
	{ 484, -20 },
	{ 472, -73 },
	{ 440, -101 },
	{ 320, -101 },
	{ 1021, -20 },
	{ 1019, -70 },
	{ 999, -35 },
	{ 1061, -101 },
	{ 967, -35 },
	{ 960, -92 },
	{ 753, -92 },
	{ 753, -101 },
	{ 440, -101 },
	{ 569, -161 },
	{ 418, -232 },
	{ 6, 20 },
	{ 50, 20 },
	{ 0, -70 },
	{ 66, -70 },
	{ 43, -101 },
	{ 164, -101 },
	{ 60, 46 },
	{ 81, -20 },
	{ 10, 46 },
	{ 3, -20 },
	{ 6, 20 },
	{ 0, -70 },
	{ 50, 20 },
	{ 60, 46 },
	{ 66, -70 },
	{ 81, -20 },
	{ 164, -101 },
	{ 111, -35 },
	{ 242, -35 },
	{ 79, 37 },
	{ 242, 37 },
	{ 78, 98 },
	{ 242, 98 },
	{ 242, 162 },
	{ 304, 191 },
	{ 569, 117 },
	{ 589, 98 },
	{ 406, 98 },
	{ 557, 37 },
	{ 398, 37 },
	{ 510, -35 },
	{ 366, -35 },
	{ 386, -20 },
	{ 404, -73 },
	{ 438, 27 },
	{ 474, 27 },
	{ 388, 255 },
	{ 653, 191 },
	{ 625, 255 },
	{ 605, 165 },
	{ 605, 255 },
	{ 446, 255 },
	{ 565, 255 },
	{ 430, 162 },
	{ 565, 162 },
	{ 424, 117 },
	{ 569, 117 },
	{ 406, 98 },
	{ 565, 255 },
	{ 605, 255 },
	{ 565, 162 },
	{ 605, 165 },
	{ 569, 117 },
	{ 653, 191 },
	{ 589, 98 },
	{ 753, 200 },
	{ 753, 98 },
	{ 848, 191 },
	{ 916, 98 },
	{ 904, 165 },
	{ 936, 117 },
	{ 943, 162 },
	{ 1073, 162 },
	{ 1058, 255 },
	{ 1208, 191 },
	{ 1115, 255 },
	{ 880, 255 },
	{ 1058, 255 },
	{ 943, 162 },
	{ 943, 255 },
	{ 904, 165 },
	{ 904, 255 },
	{ 848, 191 },
	{ 904, 255 },
	{ 880, 255 },
	{ 848, 191 },
	{ 1208, 191 },
	{ 753, 200 },
	{ 1260, 162 },
	{ 653, 191 },
	{ 304, 191 },
	{ 388, 255 },
	{ 402, 255 },
	{ 999, -35 },
	{ 967, -35 },
	{ 924, 9 },
	{ 446, 255 },
	{ 402, 255 },
	{ 362, 165 },
	{ 304, 191 },
	{ 406, 98 },
	{ 242, 98 },
	{ 398, 37 },
	{ 242, 37 },
	{ 366, -35 },
	{ 242, -35 },
	{ 242, -101 },
	{ 164, -101 },
	{ 65, -232 },
	{ 446, 255 },
	{ 430, 162 },
	{ 362, 165 },
	{ 424, 117 },
	{ 406, 98 },
	{ 960, -92 },
	{ 753, -101 },
	{ 1061, -101 },
	{ 753, -139 },
	{ 939, -161 },
	{ 83, 255 },
	{ 95, 255 },
	{ 129, 165 },
	{ 188, 191 },
	{ 510, -35 },
	{ 557, 37 },
	{ 545, -35 },
	{ 545, -35 },
	{ 589, 9 },
	{ 557, 37 },
	{ 753, 37 },
	{ 589, 98 },
	{ 753, 98 },
	{ 510, -35 },
	{ 548, -92 },
	{ 545, -35 },
	{ 753, -35 },
	{ 589, 9 },
	{ 753, 9 },
	{ 753, 37 },
	{ 952, 37 },
	{ 753, 98 },
	{ 916, 98 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003D5A0[] = {
	{ 510, -255 },
	{ 0, -254 },
	{ 510, 0 },
	{ 0 },
	{ 510, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003D5B8[] = {
	{ 0, 255 },
	{ 0 },
	{ 254, 255 },
	{ 254, 0 },
	{ 0, 255 },
	{ 0 },
	{ 254, 255 },
	{ 254, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0003D5D8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_0003CFCC, NULL, NULL, NULL, uvSTG12_0003D200, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, polySTG12_0003CFE2, NULL, NULL, NULL, uvSTG12_0003D228, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, polySTG12_0003CFF8, NULL, NULL, NULL, uvSTG12_0003D250, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, polySTG12_0003D002, NULL, NULL, NULL, uvSTG12_0003D260, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 28, polySTG12_0003D00C, NULL, NULL, NULL, uvSTG12_0003D270, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, polySTG12_0003D1DC, NULL, NULL, NULL, uvSTG12_0003D5A0, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, polySTG12_0003D1EA, NULL, NULL, NULL, uvSTG12_0003D5B8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0003D680[] = {
	{ -6.000004f, -0.00001f, 6 },
	{ 5.999997f, -0.00001f, 6 },
	{ -5.000004f, 1.999999f, 5 },
	{ 4.999996f, 1.999999f, 5 },
	{ -6.000004f, -0.00001f, -6 },
	{ 5.999996f, -0.00001f, -6 },
	{ -5.000004f, 1.999999f, -5 },
	{ 4.999996f, 1.999999f, -5 },
	{ -4.000004f, 15, 4 },
	{ 3.999996f, 15, 4 },
	{ -4.000004f, 15, -4 },
	{ 3.999996f, 15, -4 },
	{ -1.800007f, 11.2f, 4.400001f },
	{ -1.800007f, 13.7f, 4.200001f },
	{ 1.699998f, 11.2f, 4.400001f },
	{ 1.699998f, 13.7f, 4.200001f },
	{ -0.846007f, 16.79999f, 1.206001f },
	{ 0.8459949f, 16.79999f, 1.296001f },
	{ -1.710008f, 19.41f, 1.080001f },
	{ 1.709994f, 19.41f, 1.080001f },
	{ -0.936007f, 16.79999f, -2.286f },
	{ 0.755995f, 16.79999f, -2.196001f },
	{ -1.710008f, 19.41f, -1.080001f },
	{ 1.709994f, 19.41f, -1.080001f },
	{ -2.583406f, 23.19692f, 0.18742f },
	{ 2.760874f, 23.19692f, 0.18742f },
	{ -2.583406f, 23.19692f, -2.67214f },
	{ 2.760874f, 23.19692f, -2.67214f },
	{ -1.429787f, 25.06047f, -0.5225f },
	{ 1.429773f, 25.06047f, -0.5225f },
	{ -1.429787f, 25.06047f, -2.76088f },
	{ 1.429773f, 25.06047f, -2.76088f },
	{ -1.429787f, 26.75411f, 0.667823f },
	{ 1.429773f, 26.75411f, 0.667823f },
	{ -1.429787f, 28.75704f, -0.751923f },
	{ 1.429773f, 28.75704f, -0.751923f },
	{ 2.249994f, 18.87f, -1.080001f },
	{ -0.00007f, 16.53f, 1.026001f },
	{ -0.00007f, 19.41f, -1.980001f },
	{ -0.00007f, 19.41f, 1.980001f },
	{ -0.00007f, 23.19692f, -3.648281f },
	{ -0.00007f, 23.19692f, 1.34104f },
	{ -0.00007f, 25.06047f, -3.648281f },
	{ -0.00007f, 25.06047f, 0.27616f },
	{ -0.00007f, 29.37859f, -1.38528f },
	{ -0.00007f, 26.13255f, 1.1237f },
	{ -0.00007f, 17.61f, -2.646002f },
	{ -3.293327f, 22.75322f, -0.25628f },
	{ -3.293327f, 22.75322f, -2.67214f },
	{ -3.825766f, 24.2618f, -0.61124f },
	{ -3.825766f, 24.2618f, -2.49466f },
	{ -4.180727f, 20.97842f, -0.69998f },
	{ -4.180727f, 20.97842f, -1.87348f },
	{ -4.979387f, 21.42213f, -0.69998f },
	{ -4.979387f, 21.42213f, -1.87348f },
	{ 3.382053f, 22.75322f, -0.34502f },
	{ 3.382053f, 22.75322f, -2.228441f },
	{ 4.180713f, 24.17306f, -0.34502f },
	{ 4.180713f, 24.17306f, -2.228441f },
	{ 4.180713f, 20.88969f, -0.61124f },
	{ 4.180713f, 20.88969f, -2.050961f },
	{ 4.979373f, 21.59961f, -0.61124f },
	{ 4.979373f, 21.59961f, -2.050961f },
	{ 2.555994f, 17.61f, 1.116001f },
	{ 2.249994f, 18.87f, 1.080001f },
	{ 2.555994f, 17.61f, -1.116001f },
	{ -2.556007f, 17.61f, 1.116001f },
	{ -2.250008f, 18.87f, 1.080001f },
	{ -2.556007f, 17.61f, -1.116001f },
	{ -2.250008f, 18.87f, -1.080001f },
	{ -1.296008f, 15, 1.296001f },
	{ -1.296008f, 15, -1.026001f },
	{ -2.556007f, 15, 1.116001f },
	{ -2.556007f, 15, -0.846001f },
	{ 1.295995f, 15, 1.296001f },
	{ 1.295995f, 15, -1.026001f },
	{ 2.555994f, 15, 1.116001f },
	{ 2.555994f, 15, -0.846001f },
	{ -2.312217f, 21.13372f, -1.602291f },
	{ -0.00007f, 21.13372f, -2.578431f },
	{ -0.00007f, 21.13372f, 1.691031f },
	{ 2.489683f, 21.13372f, -1.602291f },
	{ 2.489683f, 21.13372f, 0.89237f },
	{ -2.312217f, 21.13372f, 0.89237f },
	{ 1.925995f, 15, 1.476001f },
	{ 1.925995f, 17.52f, 1.476001f },
	{ 1.925995f, 15, -1.296001f },
	{ 1.835995f, 17.52f, -2.196001f },
	{ -1.926008f, 15, 1.476001f },
	{ -1.926008f, 15, -1.296001f },
	{ -1.926008f, 17.52f, 1.476001f },
	{ -2.016007f, 17.52f, -2.196001f },
	{ -2.139707f, 23.19692f, 0.63112f },
	{ 2.317173f, 23.19692f, 0.63112f },
	{ -1.429787f, 24.79424f, 0.45364f },
	{ 1.429773f, 24.79424f, 0.45364f },
	{ -0.00007f, 24.79424f, 0.63112f },
	{ -0.00007f, 21.93238f, 2.04599f },
	{ 2.134725f, 21.93238f, 1.24733f },
	{ -1.957257f, 21.93238f, 1.247331f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0003DB30[] = {
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.648513f, 0.398573f, 0.648513f },
	{ 0.648514f, 0.398573f, 0.648514f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.648514f, 0.398573f, -0.648514f },
	{ 0.648514f, 0.398573f, -0.648514f },
	{ -0.556197f, 0.617487f, 0.556197f },
	{ 0.556197f, 0.617487f, 0.556197f },
	{ -0.556197f, 0.617487f, -0.556197f },
	{ 0.556197f, 0.617487f, -0.556197f },
	{ 0, 0.07974499f, 0.996815f },
	{ 0, 0.07974499f, 0.996815f },
	{ 0, 0.07974499f, 0.996815f },
	{ 0, 0.07974499f, 0.996815f },
	{ 0.371184f, -0.336119f, 0.86559f },
	{ -0.35027f, -0.307758f, 0.884645f },
	{ -0.657102f, 0.141737f, 0.740356f },
	{ 0.651692f, 0.124109f, 0.748261f },
	{ 0.138801f, -0.571139f, -0.809033f },
	{ -0.187621f, -0.607772f, -0.771629f },
	{ -0.767723f, 0.120915f, -0.62927f },
	{ 0.760035f, 0.066381f, -0.6464829f },
	{ -0.690753f, 0.077083f, 0.7189699f },
	{ 0.889157f, 0.09632599f, 0.447348f },
	{ -0.227959f, -0.350117f, -0.9085439f },
	{ 0.346721f, -0.280056f, -0.895184f },
	{ -0.744127f, 0.472039f, 0.47271f },
	{ 0.823779f, 0.427985f, 0.371776f },
	{ -0.574794f, 0.453623f, -0.681056f },
	{ 0.583178f, 0.448805f, -0.6771089f },
	{ -0.659411f, 0.124642f, 0.7413779f },
	{ 0.659412f, 0.124642f, 0.7413779f },
	{ -0.684734f, 0.712564f, 0.152942f },
	{ 0.684734f, 0.712564f, 0.152942f },
	{ 0.698012f, 0.530231f, -0.481285f },
	{ -0.0338f, -0.818979f, 0.572828f },
	{ 0.010441f, -0.086748f, -0.9961759f },
	{ -0.009427f, 0.004544f, 0.999945f },
	{ -0.009583999f, -0.110412f, -0.99384f },
	{ -0.008672f, 0.347656f, 0.937582f },
	{ -0.005214f, 0.352105f, -0.935946f },
	{ 0.046725f, 0.31874f, 0.94669f },
	{ 0, 0.978246f, -0.207449f },
	{ 0, -0.119833f, 0.992794f },
	{ 0.023935f, -0.303065f, -0.952669f },
	{ 0.38406f, -0.408653f, 0.8279499f },
	{ 0.233872f, -0.546461f, -0.804167f },
	{ -0.5572129f, 0.638423f, 0.530971f },
	{ -0.582149f, 0.540889f, -0.607076f },
	{ 0.206782f, -0.796672f, 0.567939f },
	{ 0.123556f, -0.874855f, -0.468361f },
	{ -0.819547f, -0.220343f, 0.528953f },
	{ -0.860603f, -0.289323f, -0.419112f },
	{ -0.310911f, -0.539404f, 0.782545f },
	{ -0.441898f, -0.490407f, -0.751151f },
	{ 0.7358429f, 0.533461f, 0.417079f },
	{ 0.606984f, 0.551237f, -0.572458f },
	{ -0.157876f, -0.8345169f, 0.52788f },
	{ -0.173871f, -0.82187f, -0.542494f },
	{ 0.800939f, -0.239017f, 0.54897f },
	{ 0.7878619f, -0.226333f, -0.572754f },
	{ 0.864055f, 0.110314f, 0.491161f },
	{ 0.649491f, 0.444361f, 0.617013f },
	{ 0.938705f, 0.10094f, -0.329612f },
	{ -0.864055f, 0.110314f, 0.491161f },
	{ -0.637508f, 0.4458f, 0.628368f },
	{ -0.953042f, 0.104702f, -0.284162f },
	{ -0.70683f, 0.533047f, -0.465029f },
	{ 0.734328f, -0.150488f, 0.661903f },
	{ 0.71501f, -0.509738f, -0.478464f },
	{ -0.8649099f, 0, 0.501927f },
	{ -0.952657f, -0.031286f, -0.302432f },
	{ -0.7025509f, -0.198565f, 0.68337f },
	{ -0.70122f, -0.524353f, -0.483058f },
	{ 0.8649099f, 0, 0.501927f },
	{ 0.942094f, -0.034507f, -0.333569f },
	{ -0.818932f, -0.350559f, -0.454378f },
	{ -0.006219f, -0.441546f, -0.897217f },
	{ -0.003118f, -0.169053f, 0.985602f },
	{ 0.810586f, -0.376927f, -0.448192f },
	{ 0.83671f, -0.188294f, 0.514258f },
	{ -0.855984f, -0.187342f, 0.481866f },
	{ 0.164857f, -0.024911f, 0.986003f },
	{ 0.156997f, 0.067849f, 0.985266f },
	{ 0.472546f, -0.316417f, -0.822545f },
	{ 0.358819f, 0.094161f, -0.928646f },
	{ -0.133346f, -0.007465f, 0.9910409f },
	{ -0.517743f, -0.336063f, -0.786768f },
	{ -0.128091f, 0.06694999f, 0.9895f },
	{ -0.433699f, 0.101717f, -0.8952979f },
	{ -0.569142f, 0.322187f, 0.756487f },
	{ 0.615825f, 0.393118f, 0.6828009f },
	{ -0.364488f, 0.604027f, 0.708731f },
	{ 0.477388f, 0.582518f, 0.657855f },
	{ 0.026687f, 0.604325f, 0.796291f },
	{ -0.006789f, 0.05545f, 0.9984379f },
	{ 0.464706f, 0.112115f, 0.878339f },
	{ -0.539702f, 0.042957f, 0.840759f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0003DFE0 = { vertexSTG12_0003D680, normalSTG12_0003DB30, LengthOfArray(vertexSTG12_0003D680), meshlistSTG12_0003D5D8, matlistSTG12_0003CF40, LengthOfArray(meshlistSTG12_0003D5D8), LengthOfArray(matlistSTG12_0003CF40),{ -0.00004f, 14.6893f, 0 }, 15.86743f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0003E008 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0003DFE0, 37, 0, -245, 0, 0xFFFFC000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0003E03C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 36, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 54, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 54, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003E0C8[] = {
	4, 18, 3, 6, 21,
	4, 14, 20, 19, 11,
	4, 7, 23, 17, 2,
	4, 16, 10, 15, 22,
	6, 25, 29, 9, 10, 8, 16,
	6, 28, 24, 2, 1, 17, 0,
	6, 31, 27, 11, 12, 19, 13,
	6, 26, 30, 4, 3, 5, 18
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003E128[] = {
	6, 23, 21, 2, 3, 28, 30,
	6, 20, 22, 11, 10, 31, 29
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003E144[] = {
	0x8000u | 8, 27, 26, 31, 30, 29, 28, 25, 24
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003E156[] = {
	0x8000u | 12, 43, 27, 38, 12, 39, 13, 35, 5, 34, 4, 42, 26,
	0x8000u | 12, 25, 41, 9, 37, 8, 36, 0, 32, 1, 33, 24, 40
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003E18A[] = {
	0x8000u | 6, 5, 13, 18, 19, 6, 14,
	0x8000u | 6, 7, 15, 17, 16, 0, 8
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003E1A6[] = {
	4, 42, 43, 26, 27,
	4, 41, 40, 25, 24
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003E1BC[] = {
	{ 0, -97 },
	{ 160, -97 },
	{ 0, -253 },
	{ 160, -253 },
	{ 0, -253 },
	{ 160, -253 },
	{ 0, -97 },
	{ 160, -97 },
	{ 0, -253 },
	{ 160, -253 },
	{ 0, -97 },
	{ 160, -97 },
	{ 0, -97 },
	{ 160, -97 },
	{ 0, -253 },
	{ 160, -253 },
	{ 254, 253 },
	{ 254, -193 },
	{ 160, 253 },
	{ 160, -253 },
	{ 0, 253 },
	{ 0, -253 },
	{ 254, -161 },
	{ 254, 253 },
	{ 160, -253 },
	{ 160, 253 },
	{ 0, -253 },
	{ 0, 253 },
	{ 254, -161 },
	{ 254, 253 },
	{ 160, -253 },
	{ 160, 253 },
	{ 0, -253 },
	{ 0, 253 },
	{ 254, 253 },
	{ 254, -193 },
	{ 160, 253 },
	{ 160, -253 },
	{ 0, 253 },
	{ 0, -253 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003E25C[] = {
	{ 508, 0 },
	{ 1, 0 },
	{ 508, 158 },
	{ 1, 158 },
	{ 448, 254 },
	{ 65, 254 },
	{ 508, 0 },
	{ 1, 0 },
	{ 508, 158 },
	{ 1, 158 },
	{ 448, 254 },
	{ 65, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003E28C[] = {
	{ 0, -5602 },
	{ 510, -5602 },
	{ 0, -3679 },
	{ 510, -3679 },
	{ 0, -1928 },
	{ 510, -1928 },
	{ 0, -7 },
	{ 510, -7 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003E2AC[] = {
	{ 0, -3825 },
	{ 255, -3825 },
	{ 0, -3378 },
	{ 255, -3378 },
	{ 0, -2183 },
	{ 255, -2183 },
	{ 0, -1386 },
	{ 255, -1386 },
	{ 0, -190 },
	{ 255, -190 },
	{ 0, 255 },
	{ 255, 255 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, -199 },
	{ 0, -199 },
	{ 255, -1418 },
	{ 0, -1418 },
	{ 255, -2150 },
	{ 0, -2150 },
	{ 255, -3368 },
	{ 0, -3368 },
	{ 255, -3825 },
	{ 0, -3825 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003E30C[] = {
	{ 2550, 255 },
	{ 2550, -255 },
	{ 689, 255 },
	{ 689, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 689, 255 },
	{ 689, -255 },
	{ 2550, 255 },
	{ 2550, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003E33C[] = {
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0003E35C[] = {
	{ NJD_MESHSET_TRIMESH | 1, 8, polySTG12_0003E0C8, NULL, NULL, NULL, uvSTG12_0003E1BC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, polySTG12_0003E128, NULL, NULL, NULL, uvSTG12_0003E25C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, polySTG12_0003E144, NULL, NULL, NULL, uvSTG12_0003E28C, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, polySTG12_0003E156, NULL, NULL, NULL, uvSTG12_0003E2AC, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, polySTG12_0003E18A, NULL, NULL, NULL, uvSTG12_0003E30C, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, polySTG12_0003E1A6, NULL, NULL, NULL, uvSTG12_0003E33C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0003E3EC[] = {
	{ 532, 6, -590 },
	{ 532, 6, -620 },
	{ 532, 60, -620 },
	{ 532, 60, -680 },
	{ 532, 6, -680 },
	{ 532, 6, -710 },
	{ 532, 80, -710 },
	{ 532, 80, -590 },
	{ 552, 6, -590 },
	{ 552, 6, -620 },
	{ 552, 60, -620 },
	{ 552, 60, -680 },
	{ 552, 6, -680 },
	{ 552, 6, -710 },
	{ 552, 80, -710 },
	{ 552, 80, -590 },
	{ 552, 60, -590 },
	{ 532, 60, -590 },
	{ 532, 60, -710 },
	{ 552, 60, -710 },
	{ 552, 80, -680 },
	{ 532, 80, -680 },
	{ 552, 80, -620 },
	{ 532, 80, -620 },
	{ 537, 6, -630 },
	{ 547, 6, -630 },
	{ 537, 6, -670 },
	{ 547, 6, -670 },
	{ 537, 50, -630 },
	{ 547, 50, -630 },
	{ 537, 50, -670 },
	{ 547, 50, -670 },
	{ 532, 0, -590 },
	{ 532, 0, -620 },
	{ 532, 0, -680 },
	{ 532, 0, -710 },
	{ 552, 0, -590 },
	{ 552, 0, -620 },
	{ 552, 0, -680 },
	{ 552, 0, -710 },
	{ 537, 0, -630 },
	{ 547, 0, -630 },
	{ 537, 0, -670 },
	{ 547, 0, -670 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0003E5FC[] = {
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.973249f, 0, -0.229753f },
	{ -0.996359f, -0.060282f, -0.060282f },
	{ -0.996359f, -0.060282f, 0.060282f },
	{ -0.973249f, 0, 0.229753f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.973249f, 0, -0.229753f },
	{ 0.996359f, -0.060282f, -0.060282f },
	{ 0.996359f, -0.060282f, 0.060282f },
	{ 0.973249f, 0, 0.229753f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.525731f, 0, -0.850651f },
	{ 0.525731f, 0, -0.850651f },
	{ -0.525731f, 0, 0.850651f },
	{ 0.525731f, 0, 0.850651f },
	{ -0.7457539f, -0.47109f, -0.47109f },
	{ 0.7457539f, -0.47109f, -0.47109f },
	{ -0.7457539f, -0.47109f, 0.47109f },
	{ 0.7457539f, -0.47109f, 0.47109f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.973249f, 0, -0.229753f },
	{ -0.973249f, 0, 0.229753f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.973249f, 0, -0.229753f },
	{ 0.973249f, 0, 0.229753f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.525731f, 0, -0.850651f },
	{ 0.525731f, 0, -0.850651f },
	{ -0.525731f, 0, 0.850651f },
	{ 0.525731f, 0, 0.850651f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0003E80C = { vertexSTG12_0003E3EC, normalSTG12_0003E5FC, LengthOfArray(vertexSTG12_0003E3EC), meshlistSTG12_0003E35C, matlistSTG12_0003E03C, LengthOfArray(meshlistSTG12_0003E35C), LengthOfArray(matlistSTG12_0003E03C),{ 542, 40, -650 }, 72.11103f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0003E834 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0003E80C, 0, -0.0006699999f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0003E868[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 36, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 54, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003E908[] = {
	4, 37, 39, 55, 53,
	4, 38, 36, 52, 54
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003E91C[] = {
	0x8000u | 8, 35, 34, 39, 38, 37, 36, 33, 32
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003E92E[] = {
	4, 39, 35, 53, 45,
	4, 33, 37, 49, 55,
	4, 36, 32, 54, 48,
	4, 34, 38, 44, 52
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003E956[] = {
	4, 44, 52, 4, 3,
	4, 4, 3, 5, 16,
	4, 2, 1, 19, 0,
	6, 53, 45, 11, 12, 17, 13,
	6, 23, 20, 11, 10, 53, 55,
	0x8000u | 6, 1, 48, 2, 54, 3, 52,
	6, 49, 55, 9, 10, 8, 18
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003E9AC[] = {
	0x8000u | 5, 21, 16, 6, 17, 14,
	3, 18, 15, 19,
	8, 15, 7, 19, 22, 2, 21, 3, 16
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003E9D2[] = {
	4, 8, 18, 0, 19,
	4, 5, 16, 13, 17
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003E9E6[] = {
	7, 44, 4, 26, 5, 27, 13, 31,
	10, 26, 46, 44, 42, 34, 43, 35, 47, 45, 12,
	3, 9, 29, 49,
	7, 50, 25, 1, 24, 0, 28, 8,
	10, 1, 48, 50, 32, 40, 33, 41, 49, 51, 29,
	3, 30, 12, 47
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003EA44[] = {
	{ 65, 254 },
	{ 448, 254 },
	{ 1, 158 },
	{ 508, 158 },
	{ 65, 254 },
	{ 448, 254 },
	{ 1, 158 },
	{ 508, 158 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003EA64[] = {
	{ 0, -5602 },
	{ 510, -5602 },
	{ 0, -3679 },
	{ 510, -3679 },
	{ 0, -1928 },
	{ 510, -1928 },
	{ 0, -7 },
	{ 510, -7 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003EA84[] = {
	{ 254, -161 },
	{ 254, 253 },
	{ 160, -253 },
	{ 160, 253 },
	{ 254, 253 },
	{ 254, -193 },
	{ 160, 253 },
	{ 160, -253 },
	{ 254, -161 },
	{ 254, 253 },
	{ 160, -253 },
	{ 160, 253 },
	{ 254, 253 },
	{ 254, -193 },
	{ 160, 253 },
	{ 160, -253 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003EAC4[] = {
	{ 1012, 253 },
	{ 135, 253 },
	{ 1012, 1 },
	{ 7, 1 },
	{ 1020, 0 },
	{ 7, 1 },
	{ 1020, 255 },
	{ 7, 253 },
	{ 7, 1 },
	{ 1012, 1 },
	{ 7, 253 },
	{ 1012, 253 },
	{ 135, 253 },
	{ 1012, 253 },
	{ 7, 1 },
	{ 1012, 1 },
	{ 7, 253 },
	{ 1012, 253 },
	{ 7, 253 },
	{ 1012, 253 },
	{ 7, 1 },
	{ 1012, 1 },
	{ 135, 253 },
	{ 900, 253 },
	{ 1012, 1 },
	{ 1012, 253 },
	{ 7, 1 },
	{ 135, 253 },
	{ 1012, 1 },
	{ 900, 253 },
	{ 1012, 253 },
	{ 135, 253 },
	{ 1012, 1 },
	{ 7, 1 },
	{ 1012, 253 },
	{ 7, 253 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003EB54[] = {
	{ 436, 184 },
	{ 256, 70 },
	{ 256, 184 },
	{ 5, 70 },
	{ 5, 184 },
	{ 1522, 70 },
	{ 1522, 184 },
	{ 1273, 70 },
	{ 1522, 184 },
	{ 1273, 184 },
	{ 1273, 70 },
	{ 1091, 184 },
	{ 1091, 70 },
	{ 436, 184 },
	{ 436, 70 },
	{ 256, 70 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003EB94[] = {
	{ 2039, -510 },
	{ 0, -510 },
	{ 2039, 255 },
	{ 0, 255 },
	{ 2039, 255 },
	{ 0, 255 },
	{ 2039, -510 },
	{ 0, -510 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003EBB4[] = {
	{ 255, -2150 },
	{ 255, -1739 },
	{ 0, -1743 },
	{ 255, -948 },
	{ 0, -948 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, -1743 },
	{ 0, -2148 },
	{ 255, -2150 },
	{ 0, -2567 },
	{ 255, -2568 },
	{ 0, -2869 },
	{ 255, -2869 },
	{ 0, -3292 },
	{ 255, -3289 },
	{ 255, -3824 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, -278 },
	{ 0, -1419 },
	{ 0, -1824 },
	{ 255, -1826 },
	{ 0, -2617 },
	{ 255, -2619 },
	{ 0, -3825 },
	{ 255, -3824 },
	{ 255, -1826 },
	{ 255, -1418 },
	{ 0, -1419 },
	{ 255, -999 },
	{ 0, -1000 },
	{ 255, -697 },
	{ 0, -697 },
	{ 255, -278 },
	{ 0, -276 },
	{ 0, 255 },
	{ 0, -3825 },
	{ 255, -3824 },
	{ 0, -3292 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0003EC54[] = {
	{ NJD_MESHSET_TRIMESH | 1, 2, polySTG12_0003E908, NULL, NULL, NULL, uvSTG12_0003EA44, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, polySTG12_0003E91C, NULL, NULL, NULL, uvSTG12_0003EA64, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, polySTG12_0003E92E, NULL, NULL, NULL, uvSTG12_0003EA84, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 7, polySTG12_0003E956, NULL, NULL, NULL, uvSTG12_0003EAC4, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 3, polySTG12_0003E9AC, NULL, NULL, NULL, uvSTG12_0003EB54, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, polySTG12_0003E9D2, NULL, NULL, NULL, uvSTG12_0003EB94, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 6, polySTG12_0003E9E6, NULL, NULL, NULL, uvSTG12_0003EBB4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0003ECFC[] = {
	{ 948, 5, -590 },
	{ 946, 5, -611 },
	{ 946, 68, -611 },
	{ 946, 68, -689 },
	{ 946, 5, -689 },
	{ 948, 5, -710 },
	{ 948, 80, -710 },
	{ 948, 80, -590 },
	{ 980, 5, -590 },
	{ 980, 5, -610 },
	{ 980, 68, -610 },
	{ 980, 68, -690 },
	{ 980, 5, -690 },
	{ 980, 5, -710 },
	{ 980, 80, -710 },
	{ 980, 80, -590 },
	{ 948, 68, -710 },
	{ 980, 68, -710 },
	{ 980, 68, -590 },
	{ 948, 68, -590 },
	{ 980, 80, -610 },
	{ 946.157f, 79.00021f, -689.0181f },
	{ 946.157f, 79.00021f, -610.9822f },
	{ 980, 80, -690 },
	{ 948, 0, -590 },
	{ 946.157f, -0.000214f, -610.9822f },
	{ 946.157f, -0.000214f, -689.0181f },
	{ 948, 0, -710 },
	{ 980, 0, -590 },
	{ 980, 0, -610 },
	{ 980, 0, -690 },
	{ 980, 0, -710 },
	{ 957, 6, -630 },
	{ 965, 6, -630 },
	{ 957, 6, -670 },
	{ 965, 6, -670 },
	{ 957, 50, -630 },
	{ 965, 50, -630 },
	{ 957, 50, -670 },
	{ 965, 50, -670 },
	{ 957, 0, -630 },
	{ 965, 0, -630 },
	{ 957, 0, -670 },
	{ 965, 0, -670 },
	{ 952, 6, -680 },
	{ 970, 6, -680 },
	{ 952, 0, -680 },
	{ 970, 0, -680 },
	{ 952, 6, -620 },
	{ 970, 6, -620 },
	{ 952, 0, -620 },
	{ 970, 0, -620 },
	{ 952, 60, -680 },
	{ 970, 60, -680 },
	{ 952, 60, -620 },
	{ 970, 60, -620 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0003EF9C[] = {
	{ -0.6733119f, -0.010463f, 0.739284f },
	{ -0.969501f, -0.011767f, -0.244804f },
	{ -0.9962879f, -0.07788099f, -0.036681f },
	{ -0.996382f, -0.07617f, 0.037693f },
	{ -0.970485f, -0.003593f, 0.241137f },
	{ -0.67343f, 0, -0.739251f },
	{ -0.665145f, 0.004496f, -0.7467009f },
	{ -0.66371f, 0, 0.74799f },
	{ 0.447214f, 0, 0.8944269f },
	{ 0.862856f, 0, -0.50545f },
	{ 0.974322f, -0.155024f, -0.16329f },
	{ 0.974322f, -0.155024f, 0.16329f },
	{ 0.862856f, 0, 0.50545f },
	{ 0.447214f, 0, -0.8944269f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ -0.6741599f, 0.002279f, -0.738582f },
	{ 0.447214f, 0, -0.8944269f },
	{ 0.447214f, 0, 0.8944269f },
	{ -0.67343f, 0, 0.739251f },
	{ 1, 0, 0 },
	{ -0.998962f, 0.010452f, -0.044342f },
	{ -0.9989f, 0.007029f, 0.046369f },
	{ 1, 0, 0 },
	{ -0.6738009f, -0.020942f, 0.738616f },
	{ -0.96868f, -0.023158f, -0.247232f },
	{ -0.970686f, -0.006831f, 0.240252f },
	{ -0.67411f, 0, -0.738631f },
	{ 0, 0, 1 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0, 0, -1 },
	{ -0.525731f, 0, -0.850651f },
	{ 0.525731f, 0, -0.850651f },
	{ -0.525731f, 0, 0.850651f },
	{ 0.525731f, 0, 0.850651f },
	{ -0.7457539f, -0.47109f, -0.47109f },
	{ 0.7457539f, -0.47109f, -0.47109f },
	{ -0.7457539f, -0.47109f, 0.47109f },
	{ 0.7457539f, -0.47109f, 0.47109f },
	{ -0.525731f, 0, -0.850651f },
	{ 0.525731f, 0, -0.850651f },
	{ -0.525731f, 0, 0.850651f },
	{ 0.525731f, 0, 0.850651f },
	{ -0.86645f, -0.003036f, 0.499255f },
	{ 0.811242f, 0, 0.5847099f },
	{ -0.868162f, -0.00645f, 0.496239f },
	{ 0.811242f, 0, 0.5847099f },
	{ -0.864767f, -0.003011f, -0.5021639f },
	{ 0.811242f, 0, -0.5847099f },
	{ -0.864597f, -0.006397f, -0.502425f },
	{ 0.811242f, 0, -0.5847099f },
	{ -0.908955f, -0.308282f, 0.280649f },
	{ 0.84098f, -0.407621f, 0.355807f },
	{ -0.908955f, -0.308282f, -0.280649f },
	{ 0.84098f, -0.407621f, -0.355807f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0003F23C = { vertexSTG12_0003ECFC, normalSTG12_0003EF9C, LengthOfArray(vertexSTG12_0003ECFC), meshlistSTG12_0003EC54, matlistSTG12_0003E868, LengthOfArray(meshlistSTG12_0003EC54), LengthOfArray(matlistSTG12_0003E868),{ 963, 39.99989f, -650 }, 72.11108f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0003F264 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0003F23C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0003F298[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 67, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 41, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 41, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003F34C[] = {
	13, 31, 0, 30, 3, 29, 6, 28, 9, 56, 24, 55, 13, 96,
	3, 87, 51, 53,
	4, 24, 9, 89, 12,
	0x8000u | 5, 96, 55, 87, 54, 53
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003F386[] = {
	10, 82, 79, 83, 81, 84, 80, 85, 77, 86, 78,
	17, 49, 41, 43, 26, 45, 40, 42, 93, 95, 18, 20, 25, 22, 88, 91, 17, 19,
	3, 43, 14, 49,
	4, 32, 52, 51, 53,
	0x8000u | 22, 80, 70, 81, 71, 79, 69, 82, 72, 83, 73, 84, 74, 85, 75, 86, 76, 78, 68, 77, 67, 80, 70
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003F400[] = {
	8, 1, 31, 4, 30, 7, 29, 10, 28,
	8, 2, 1, 5, 4, 8, 7, 11, 10
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003F424[] = {
	4, 39, 23, 41, 26,
	0x8000u | 6, 73, 63, 74, 64, 75, 65,
	0x8000u | 6, 61, 71, 60, 70, 57, 67,
	4, 27, 90, 25, 88,
	4, 18, 93, 16, 92
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003F45E[] = {
	4, 40, 26, 38, 23,
	4, 17, 88, 15, 90,
	0x8000u | 17, 15, 12, 90, 89, 27, 24, 16, 13, 92, 94, 38, 35, 23, 21, 39, 36, 46,
	4, 16, 27, 18, 25,
	4, 49, 48, 41, 39,
	3, 39, 48, 46,
	4, 38, 92, 40, 93,
	0x8000u | 22, 60, 34, 61, 50, 59, 33, 62, 52, 63, 53, 64, 54, 65, 55, 66, 56, 58, 28, 57, 10, 60, 34,
	4, 72, 73, 62, 63,
	4, 69, 72, 59, 62,
	4, 71, 69, 61, 59,
	4, 76, 68, 66, 58,
	4, 75, 76, 65, 66,
	4, 68, 67, 58, 57
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003F526[] = {
	4, 37, 44, 36, 21,
	3, 96, 13, 94
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003F538[] = {
	0x8000u | 6, 94, 96, 35, 87, 21, 44,
	4, 46, 47, 36, 37
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003F550[] = {
	3, 11, 10, 34
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003F558[] = {
	{ 6301, -4844 },
	{ 6629, -3394 },
	{ 4528, -4202 },
	{ 5467, -2974 },
	{ 3173, -3013 },
	{ 4577, -2194 },
	{ 2440, -1464 },
	{ 4096, -1176 },
	{ 2440, -1252 },
	{ 2440, 213 },
	{ 2204, -1283 },
	{ 2204, 255 },
	{ 1528, 247 },
	{ 1303, 244 },
	{ 0, 244 },
	{ 0, -1275 },
	{ 2440, 213 },
	{ 4096, -1176 },
	{ 3888, -38 },
	{ 4096, -74 },
	{ 1528, 247 },
	{ 2204, -1283 },
	{ 1303, 244 },
	{ 1300, -1275 },
	{ 0, -1275 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003F5BC[] = {
	{ 255, -2295 },
	{ 0, -2295 },
	{ 255, -2115 },
	{ 0, -2115 },
	{ 255, -860 },
	{ 0, -860 },
	{ 255, 24 },
	{ 0, 23 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, -3825 },
	{ 255, -3660 },
	{ 0, -3660 },
	{ 255, -1786 },
	{ 0, -1786 },
	{ 255, -1625 },
	{ 0, -1625 },
	{ 255, -1474 },
	{ 0, -1474 },
	{ 255, -1025 },
	{ 0, -1025 },
	{ 255, -864 },
	{ 0, -864 },
	{ 255, 114 },
	{ 0, 114 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, -3660 },
	{ 0, -3825 },
	{ 255, -3825 },
	{ 0, -1275 },
	{ 0, 63 },
	{ 255, -1275 },
	{ 255, 63 },
	{ 1, 191 },
	{ 253, 191 },
	{ 1, -1593 },
	{ 253, -1593 },
	{ 1, -1848 },
	{ 253, -1848 },
	{ 1, -2231 },
	{ 253, -2231 },
	{ 1, -2486 },
	{ 253, -2486 },
	{ 1, -4271 },
	{ 253, -4271 },
	{ 1, -5673 },
	{ 253, -5673 },
	{ 1, -5928 },
	{ 253, -5928 },
	{ 1, -6311 },
	{ 253, -6311 },
	{ 1, -6566 },
	{ 253, -6566 },
	{ 1, -7841 },
	{ 253, -7841 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003F69C[] = {
	{ 0, 145 },
	{ 0 },
	{ 1359, 145 },
	{ 1359, 0 },
	{ 2719, 145 },
	{ 2720, 0 },
	{ 4080, 145 },
	{ 4079, 0 },
	{ 0, 255 },
	{ 0, 145 },
	{ 1359, 255 },
	{ 1359, 145 },
	{ 2719, 255 },
	{ 2719, 145 },
	{ 4080, 255 },
	{ 4080, 145 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003F6DC[] = {
	{ 0, 254 },
	{ 1019, 254 },
	{ 0, -254 },
	{ 1019, -254 },
	{ 5, 253 },
	{ 5, -253 },
	{ 517, 253 },
	{ 517, -253 },
	{ 828, 253 },
	{ 828, -253 },
	{ 5, -253 },
	{ 5, 253 },
	{ 517, -253 },
	{ 517, 253 },
	{ 828, -253 },
	{ 828, 253 },
	{ 912, -253 },
	{ 1450, -253 },
	{ 912, 253 },
	{ 1450, 253 },
	{ 816, 253 },
	{ 565, 253 },
	{ 816, -253 },
	{ 565, -253 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003F73C[] = {
	{ 510, -1785 },
	{ 0, -1785 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -1785 },
	{ 0, -1785 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -48 },
	{ 0, -48 },
	{ 510, -2173 },
	{ 0, -2173 },
	{ 510, -2520 },
	{ 0, -2520 },
	{ 510, -3499 },
	{ 0, -3499 },
	{ 510, -3825 },
	{ 0, -3825 },
	{ 510, -3522 },
	{ 0, -3522 },
	{ 510, -51 },
	{ 0, -51 },
	{ 0, 255 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, -1785 },
	{ 510, -1785 },
	{ 0, -1785 },
	{ 0, 255 },
	{ 510, -1785 },
	{ 510, 255 },
	{ 510, -51 },
	{ 510, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, -1785 },
	{ 510, -1785 },
	{ 502, 127 },
	{ 7, 127 },
	{ 502, -1657 },
	{ 7, -1657 },
	{ 502, -1912 },
	{ 7, -1912 },
	{ 502, -2167 },
	{ 7, -2167 },
	{ 502, -2422 },
	{ 7, -2422 },
	{ 502, -4207 },
	{ 7, -4207 },
	{ 502, -5737 },
	{ 7, -5737 },
	{ 502, -5992 },
	{ 7, -5992 },
	{ 502, -6247 },
	{ 7, -6247 },
	{ 502, -6502 },
	{ 7, -6502 },
	{ 502, -7777 },
	{ 7, -7777 },
	{ 510, -1785 },
	{ 0, -1785 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -1785 },
	{ 0, -1785 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -1785 },
	{ 0, -1785 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -1785 },
	{ 0, -1785 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -1785 },
	{ 0, -1785 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -1785 },
	{ 0, -1785 },
	{ 510, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003F894[] = {
	{ 3, 254 },
	{ 1016, 254 },
	{ 3, 162 },
	{ 1016, 162 },
	{ 3, 254 },
	{ 346, 162 },
	{ 3, 162 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003F8B0[] = {
	{ 0 },
	{ 0, 255 },
	{ 490, 0 },
	{ 490, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 490, 0 },
	{ 490, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003F8D8[] = {
	{ 254, 254 },
	{ 254, 164 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0003F8E4[] = {
	{ NJD_MESHSET_TRIMESH | 1, 4, polySTG12_0003F34C, NULL, NULL, NULL, uvSTG12_0003F558, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 5, polySTG12_0003F386, NULL, NULL, NULL, uvSTG12_0003F5BC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, polySTG12_0003F400, NULL, NULL, NULL, uvSTG12_0003F69C, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 5, polySTG12_0003F424, NULL, NULL, NULL, uvSTG12_0003F6DC, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 14, polySTG12_0003F45E, NULL, NULL, NULL, uvSTG12_0003F73C, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, polySTG12_0003F526, NULL, NULL, NULL, uvSTG12_0003F894, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 2, polySTG12_0003F538, NULL, NULL, NULL, uvSTG12_0003F8B0, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 1, polySTG12_0003F550, NULL, NULL, NULL, uvSTG12_0003F8D8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0003F9A4[] = {
	{ 100.4822f, -44.50001f, 124.9571f },
	{ 77.76013f, -44.50001f, 239.1885f },
	{ 77.76013f, -55.50001f, 239.1885f },
	{ 30.22394f, -44.50001f, 95.85516f },
	{ -34.48297f, -44.50001f, 192.6959f },
	{ -34.48297f, -55.50001f, 192.6959f },
	{ -23.5495f, -44.5f, 42.08184f },
	{ -120.3901f, -44.50001f, 106.7887f },
	{ -120.3901f, -55.50001f, 106.7887f },
	{ -52.65136f, -44.5f, -28.17645f },
	{ -166.8828f, -44.5f, -5.454346f },
	{ -166.8828f, -55.5f, -5.454346f },
	{ -52.65136f, -44.5f, -104.2234f },
	{ -166.8828f, -44.49999f, -126.9454f },
	{ -221.3902f, 55.5f, -326.1885f },
	{ -52.65136f, -34.5f, -104.2234f },
	{ -166.8828f, -34.5f, -126.9454f },
	{ -52.65136f, 45.5f, -104.2234f },
	{ -166.8828f, 45.5f, -126.9454f },
	{ -52.65136f, 55.5f, -104.2234f },
	{ -166.8828f, 55.5f, -126.9454f },
	{ -221.0712f, -44.49999f, -140.9757f },
	{ -152.6039f, 55.5f, -124.1052f },
	{ -221.0712f, -34.5f, -140.9757f },
	{ -152.6039f, -44.49999f, -124.1052f },
	{ -152.6039f, 45.5f, -124.1052f },
	{ -221.0712f, 45.5f, -140.9757f },
	{ -152.6039f, -34.5f, -124.1052f },
	{ -152.6039f, -44.5f, -8.294556f },
	{ -108.2851f, -44.50001f, 98.70037f },
	{ -26.39459f, -44.50001f, 180.5908f },
	{ 80.60034f, -44.50001f, 224.9096f },
	{ -311.4943f, -54.5f, -126.2f },
	{ -311.4943f, -54.5f, -6.199951f },
	{ -221.4943f, -54.5f, -6.199951f },
	{ -221.4828f, -44.49999f, -126.2454f },
	{ -221.3902f, -44.49999f, -311.1885f },
	{ -221.3902f, -54.49999f, -311.1885f },
	{ -221.4828f, -34.5f, -126.2454f },
	{ -221.3902f, -34.5f, -311.1885f },
	{ -221.4828f, 45.5f, -126.2454f },
	{ -221.3902f, 45.5f, -311.1885f },
	{ -221.4828f, 55.5f, -126.2454f },
	{ -221.3902f, 55.5f, -311.1885f },
	{ -221.4828f, -54.49999f, -141.2453f },
	{ -221.0712f, 55.5f, -140.9757f },
	{ -221.3902f, -44.49999f, -326.1885f },
	{ -221.3902f, -54.49999f, -326.1885f },
	{ -221.3902f, -34.5f, -326.1885f },
	{ -221.3902f, 45.5f, -326.1885f },
	{ -300.2443f, -54.5f, -6.199951f },
	{ -300.2443f, -54.5f, -126.2f },
	{ -311.4943f, -54.5f, -21.19996f },
	{ -300.2443f, -54.5f, -21.19996f },
	{ -221.4929f, -54.5f, -21.20563f },
	{ -166.8828f, -44.5f, -20.64072f },
	{ -152.6039f, -44.5f, -22.77088f },
	{ -166.8828f, -34.5f, -5.454346f },
	{ -152.6039f, -34.5f, -8.294556f },
	{ -311.4943f, -44.5f, -6.199951f },
	{ -221.4943f, -44.5f, -6.199951f },
	{ -300.2443f, -44.5f, -6.199951f },
	{ -311.4943f, -44.5f, -21.19996f },
	{ -300.2443f, -44.5f, -21.19996f },
	{ -221.4929f, -44.5f, -21.20563f },
	{ -166.8828f, -34.5f, -20.64072f },
	{ -152.6039f, -34.5f, -22.77088f },
	{ -166.8828f, 45.5f, -5.454346f },
	{ -152.6039f, 45.5f, -8.294556f },
	{ -311.4943f, 35.5f, -6.199951f },
	{ -221.4943f, 35.5f, -6.199951f },
	{ -300.2443f, 35.5f, -6.199951f },
	{ -311.4943f, 35.5f, -21.19996f },
	{ -300.2443f, 35.5f, -21.19996f },
	{ -221.4929f, 35.5f, -21.20563f },
	{ -166.8828f, 45.5f, -20.64072f },
	{ -152.6039f, 45.5f, -22.77088f },
	{ -166.8828f, 55.5f, -5.454346f },
	{ -152.6039f, 55.5f, -8.294556f },
	{ -311.4943f, 45.5f, -6.199951f },
	{ -221.4943f, 45.5f, -6.199951f },
	{ -300.2443f, 45.5f, -6.199951f },
	{ -311.4943f, 45.5f, -21.19996f },
	{ -300.2443f, 45.5f, -21.19996f },
	{ -221.4929f, 45.5f, -21.20563f },
	{ -166.8828f, 55.5f, -20.64072f },
	{ -152.6039f, 55.5f, -22.77088f },
	{ -221.4828f, -54.49999f, -126.2454f },
	{ -65.14543f, 45.5f, -106.7086f },
	{ -65.14543f, -44.5f, -106.7086f },
	{ -65.14543f, -34.5f, -106.7086f },
	{ -65.14543f, 55.5f, -106.7086f },
	{ -207.8328f, -34.5f, -126.4204f },
	{ -207.8328f, 45.5f, -126.4204f },
	{ -207.8328f, -44.49999f, -126.4204f },
	{ -207.8328f, 55.5f, -126.4204f },
	{ -207.8328f, -51.99999f, -126.4204f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0003FE30[] = {
	{ 0, 1, 0 },
	{ -0.287999f, 0.6585039f, 0.695291f },
	{ -0.382683f, 0, 0.92388f },
	{ 0, 1, 0 },
	{ -0.414568f, 0.665719f, 0.620445f },
	{ -0.5555699f, 0, 0.83147f },
	{ 0, 1, 0 },
	{ -0.620445f, 0.665719f, 0.414568f },
	{ -0.83147f, 0, 0.5555699f },
	{ 0, 1, 0 },
	{ -0.212593f, 0.246025f, 0.945662f },
	{ -0.564422f, 0, 0.8254859f },
	{ -0.129611f, 0.747409f, 0.651598f },
	{ -0.127519f, 0.656485f, 0.743482f },
	{ -1, 0, 0 },
	{ -0.19509f, 0, 0.980785f },
	{ -0.091635f, 0, 0.995793f },
	{ -0.19509f, 0, 0.980785f },
	{ -0.091635f, 0, 0.995793f },
	{ -0.19509f, 0, 0.980785f },
	{ -0.091635f, 0, 0.995793f },
	{ -0.9999509f, 0, -0.009869999f },
	{ -0.195089f, 0, 0.980786f },
	{ -0.9999149f, 0, -0.013029f },
	{ -0.137949f, 0.707106f, 0.6935199f },
	{ -0.195089f, 0, 0.980786f },
	{ -0.9999149f, 0, -0.013029f },
	{ -0.195089f, 0, 0.980786f },
	{ 0.366106f, 0.880734f, 0.300456f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.006866f, 0, 0.999976f },
	{ -0.709945f, 0, 0.704258f },
	{ -1, 0, 0.0006349999f },
	{ -1, 0, 0.000333f },
	{ -0.7124299f, 0, 0.7017429f },
	{ -1, 0, 0.000937f },
	{ -0.7124299f, 0, 0.7017429f },
	{ -1, 0, 0.000937f },
	{ -0.7124299f, 0, 0.7017429f },
	{ -1, 0, 0.000937f },
	{ -0.999979f, 0, -0.006464f },
	{ -0.9999149f, 0, -0.013029f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.00025f, 0.707099f, -0.707115f },
	{ -0.062705f, 0.724641f, -0.686267f },
	{ -0.110858f, 0.662724f, -0.740613f },
	{ 0.25382f, 0.92133f, -0.294494f },
	{ 0.09122f, 0, 0.995831f },
	{ 0.77301f, 0, 0.634394f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.006826f, 0, 0.999977f },
	{ 0, 0, 1 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.00036f, 0, -1 },
	{ 0.005136f, 0, -0.9999869f },
	{ -0.06881899f, 0, -0.997629f },
	{ 0.652859f, 0, -0.757479f },
	{ 0.09122f, 0, 0.995831f },
	{ 0.77301f, 0, 0.634394f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.006826f, 0, 0.999977f },
	{ 0, 0, 1 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.00036f, 0, -1 },
	{ 0.005136f, 0, -0.9999869f },
	{ -0.06881899f, 0, -0.997629f },
	{ 0.652859f, 0, -0.757479f },
	{ 0.001687f, 0.704212f, 0.709987f },
	{ 0.6250409f, 0.588384f, 0.51296f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.06760199f, 0.6840349f, 0.72631f },
	{ 0, 0.7071069f, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.00025f, 0.707115f, -0.707099f },
	{ -0.057751f, 0.681732f, -0.729319f },
	{ -0.113327f, 0.738883f, -0.6642359f },
	{ 0.536436f, 0.56996f, -0.6224f },
	{ -0.474081f, 0.806716f, 0.352785f },
	{ -0.19509f, 0, 0.980785f },
	{ -0.13795f, 0.7071069f, 0.6935199f },
	{ -0.19509f, 0, 0.980785f },
	{ -0.19509f, 0, 0.980785f },
	{ 0.012819f, 0, 0.999918f },
	{ 0.012819f, 0, 0.999918f },
	{ 0.012819f, 0, 0.999918f },
	{ 0.012819f, 0, 0.999918f },
	{ -0.118449f, 0.696348f, 0.707862f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_000402BC = { vertexSTG12_0003F9A4, normalSTG12_0003FE30, LengthOfArray(vertexSTG12_0003F9A4), meshlistSTG12_0003F8E4, matlistSTG12_0003F298, LengthOfArray(meshlistSTG12_0003F8E4), LengthOfArray(matlistSTG12_0003F298),{ -105.5061f, -0.00008f, -43.49998f }, 349.777f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_000402E4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_000402BC, 611.4944f, 134.5f, -583.8f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00040318[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 63, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 56, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00040354[] = {
	0x8000u | 34, 11, 15, 14, 19, 18, 23, 22, 26, 25, 29, 28, 33, 32, 37, 36, 40, 39, 43, 42, 47, 46, 51, 50, 54, 53, 1, 0, 5, 4, 9, 8, 12, 11, 15,
	4, 85, 16, 84, 20,
	0x8000u | 36, 3, 7, 72, 10, 87, 13, 86, 17, 85, 21, 84, 24, 83, 27, 82, 31, 81, 35, 80, 38, 79, 41, 78, 45, 77, 49, 76, 52, 75, 55, 74, 3, 73, 72, 2, 6,
	4, 77, 44, 76, 48,
	4, 81, 30, 80, 34,
	34, 93, 123, 91, 121, 89, 110, 62, 111, 63, 113, 65, 115, 67, 117, 69, 119, 71, 105, 57, 107, 59, 135, 103, 133, 101, 131, 99, 129, 97, 127, 95, 125, 93, 123,
	34, 94, 128, 96, 130, 98, 132, 100, 134, 102, 108, 60, 106, 58, 104, 56, 118, 70, 116, 68, 114, 66, 112, 64, 109, 61, 120, 88, 122, 90, 124, 92, 126, 94, 128,
	34, 165, 195, 163, 193, 161, 191, 159, 189, 157, 187, 155, 185, 153, 174, 142, 175, 143, 177, 145, 179, 147, 181, 149, 183, 151, 169, 137, 171, 139, 199, 167, 197, 165, 195,
	34, 162, 196, 164, 198, 166, 172, 140, 170, 138, 168, 136, 182, 150, 180, 148, 178, 146, 176, 144, 173, 141, 184, 152, 186, 154, 188, 156, 190, 158, 192, 160, 194, 162, 196
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0004051A[] = {
	4, 205, 206, 216, 217,
	0x8000u | 34, 210, 178, 208, 176, 205, 173, 216, 184, 218, 186, 220, 188, 222, 190, 224, 192, 226, 194, 228, 196, 230, 198, 204, 172, 202, 170, 200, 168, 214, 182, 212, 180, 210, 178,
	4, 218, 219, 220, 221,
	4, 222, 223, 224, 225,
	4, 226, 227, 228, 229,
	4, 230, 231, 204, 203,
	4, 202, 201, 200, 215,
	0x8000u | 34, 209, 177, 211, 179, 213, 181, 215, 183, 201, 169, 203, 171, 231, 199, 229, 197, 227, 195, 225, 193, 223, 191, 221, 189, 219, 187, 217, 185, 206, 174, 207, 175, 209, 177,
	4, 214, 213, 212, 211,
	4, 210, 209, 208, 207
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000405F6[] = {
	34, 39, 90, 42, 92, 46, 94, 50, 96, 53, 98, 0, 100, 4, 102, 8, 60, 11, 58, 14, 56, 18, 70, 22, 68, 25, 66, 28, 64, 32, 61, 36, 88, 39, 90,
	0x8000u | 34, 35, 89, 38, 91, 41, 93, 45, 95, 49, 97, 52, 99, 55, 101, 3, 103, 7, 59, 10, 57, 13, 71, 17, 69, 21, 67, 24, 65, 27, 63, 31, 62, 35, 89,
	0x8000u | 34, 111, 143, 110, 142, 121, 153, 123, 155, 125, 157, 127, 159, 129, 161, 131, 163, 133, 165, 135, 167, 107, 139, 105, 137, 119, 151, 117, 149, 115, 147, 113, 145, 111, 143,
	0x8000u | 34, 146, 114, 144, 112, 141, 109, 152, 120, 154, 122, 156, 124, 158, 126, 160, 128, 162, 130, 164, 132, 166, 134, 140, 108, 138, 106, 136, 104, 150, 118, 148, 116, 146, 114
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00040710[] = {
	{ -8158, 7312 },
	{ -9363, 5996 },
	{ -8752, 5875 },
	{ -9363, 4201 },
	{ -8752, 4322 },
	{ -8673, 2538 },
	{ -8158, 2884 },
	{ -7402, 1267 },
	{ -7057, 1785 },
	{ -5741, 581 },
	{ -5620, 1188 },
	{ -3946, 581 },
	{ -4065, 1188 },
	{ -2283, 1267 },
	{ -2629, 1785 },
	{ -1012, 2538 },
	{ -1530, 2884 },
	{ -326, 4201 },
	{ -935, 4322 },
	{ -326, 5996 },
	{ -935, 5875 },
	{ -1012, 7657 },
	{ -1530, 7312 },
	{ -2283, 8928 },
	{ -2629, 8413 },
	{ -3946, 9618 },
	{ -4065, 9007 },
	{ -5741, 9618 },
	{ -5620, 9007 },
	{ -7402, 8928 },
	{ -7057, 8413 },
	{ -8673, 7657 },
	{ -8158, 7312 },
	{ -9363, 5996 },
	{ -9481, 6022 },
	{ -9945, 6114 },
	{ -9481, 4175 },
	{ -9945, 4083 },
	{ -4065, 9007 },
	{ -5620, 9007 },
	{ -5767, 9736 },
	{ -7057, 8413 },
	{ -7469, 9030 },
	{ -8158, 7312 },
	{ -8775, 7724 },
	{ -8752, 5875 },
	{ -9481, 6022 },
	{ -8752, 4322 },
	{ -9481, 4175 },
	{ -8158, 2884 },
	{ -8775, 2471 },
	{ -7057, 1785 },
	{ -7469, 1169 },
	{ -5620, 1188 },
	{ -5767, 462 },
	{ -4065, 1188 },
	{ -3920, 462 },
	{ -2629, 1785 },
	{ -2216, 1169 },
	{ -1530, 2884 },
	{ -912, 2471 },
	{ -935, 4322 },
	{ -208, 4175 },
	{ -935, 5875 },
	{ -208, 6022 },
	{ -1530, 7312 },
	{ -912, 7724 },
	{ -2629, 8413 },
	{ -2216, 9030 },
	{ -4065, 9007 },
	{ -3920, 9736 },
	{ -5767, 9736 },
	{ -3828, 10200 },
	{ -5859, 10200 },
	{ -208, 4175 },
	{ 255, 4083 },
	{ -208, 6022 },
	{ 255, 6114 },
	{ -5767, 462 },
	{ -5859, 0 },
	{ -3920, 462 },
	{ -3828, 0 },
	{ -1051, 4343 },
	{ -2916, 3789 },
	{ -1630, 2949 },
	{ -3554, 3138 },
	{ -2694, 1885 },
	{ -4392, 2786 },
	{ -4088, 1306 },
	{ -5295, 2786 },
	{ -5599, 1306 },
	{ -6131, 3138 },
	{ -6991, 1885 },
	{ -6771, 3789 },
	{ -8059, 2949 },
	{ -7118, 4639 },
	{ -8635, 4343 },
	{ -7118, 5558 },
	{ -8635, 5854 },
	{ -6771, 6408 },
	{ -8059, 7246 },
	{ -6131, 7061 },
	{ -6991, 8312 },
	{ -5295, 7413 },
	{ -5599, 8890 },
	{ -4392, 7413 },
	{ -4088, 8890 },
	{ -3554, 7061 },
	{ -2694, 8312 },
	{ -2916, 6408 },
	{ -1630, 7246 },
	{ -2567, 5558 },
	{ -1051, 5854 },
	{ -2567, 4639 },
	{ -1051, 4343 },
	{ -2916, 3789 },
	{ -1051, 5854 },
	{ -2916, 6408 },
	{ -1630, 7246 },
	{ -3554, 7061 },
	{ -2694, 8312 },
	{ -4392, 7413 },
	{ -4088, 8890 },
	{ -5295, 7413 },
	{ -5599, 8890 },
	{ -6131, 7061 },
	{ -6991, 8312 },
	{ -6771, 6408 },
	{ -8059, 7246 },
	{ -7118, 5558 },
	{ -8635, 5854 },
	{ -7118, 4639 },
	{ -8635, 4343 },
	{ -6771, 3789 },
	{ -8059, 2949 },
	{ -6131, 3138 },
	{ -6991, 1885 },
	{ -5295, 2786 },
	{ -5599, 1306 },
	{ -4392, 2786 },
	{ -4088, 1306 },
	{ -3554, 3138 },
	{ -2694, 1885 },
	{ -2916, 3789 },
	{ -1630, 2949 },
	{ -2567, 4639 },
	{ -1051, 4343 },
	{ -2567, 5558 },
	{ -1051, 5854 },
	{ -2916, 6408 },
	{ -4424, 7249 },
	{ -4233, 6028 },
	{ -3646, 6922 },
	{ -3930, 5719 },
	{ -3048, 6316 },
	{ -3763, 5318 },
	{ -2726, 5525 },
	{ -3763, 4879 },
	{ -2726, 4672 },
	{ -3930, 4476 },
	{ -3048, 3881 },
	{ -4233, 4169 },
	{ -3646, 3273 },
	{ -4628, 4000 },
	{ -4424, 2948 },
	{ -5059, 4000 },
	{ -5263, 2948 },
	{ -5454, 4169 },
	{ -6043, 3273 },
	{ -5759, 4476 },
	{ -6637, 3881 },
	{ -5924, 4879 },
	{ -6959, 4672 },
	{ -5924, 5318 },
	{ -6959, 5525 },
	{ -5759, 5719 },
	{ -6637, 6316 },
	{ -5454, 6028 },
	{ -6043, 6922 },
	{ -5059, 6195 },
	{ -5263, 7249 },
	{ -4628, 6195 },
	{ -4424, 7249 },
	{ -4233, 6028 },
	{ -3646, 6922 },
	{ -4628, 6195 },
	{ -4424, 7249 },
	{ -5059, 6195 },
	{ -5263, 7249 },
	{ -5454, 6028 },
	{ -6043, 6922 },
	{ -5759, 5719 },
	{ -6637, 6316 },
	{ -5924, 5318 },
	{ -6959, 5525 },
	{ -5924, 4879 },
	{ -6959, 4672 },
	{ -5759, 4476 },
	{ -6637, 3881 },
	{ -5454, 4169 },
	{ -6043, 3273 },
	{ -5059, 4000 },
	{ -5263, 2948 },
	{ -4628, 4000 },
	{ -4424, 2948 },
	{ -4233, 4169 },
	{ -3646, 3273 },
	{ -3930, 4476 },
	{ -3048, 3881 },
	{ -3763, 4879 },
	{ -2726, 4672 },
	{ -3763, 5318 },
	{ -2726, 5525 },
	{ -3930, 5719 },
	{ -3048, 6316 },
	{ -4233, 6028 },
	{ -3646, 6922 },
	{ -4628, 6195 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00040A78[] = {
	{ 177, -223 },
	{ 73, -223 },
	{ 177, -478 },
	{ 73, -478 },
	{ 177, 223 },
	{ 253, 223 },
	{ 177, 31 },
	{ 253, 31 },
	{ 177, -223 },
	{ 253, -223 },
	{ 177, -478 },
	{ 253, -478 },
	{ 177, -733 },
	{ 253, -733 },
	{ 177, -988 },
	{ 253, -988 },
	{ 177, -1243 },
	{ 253, -1243 },
	{ 177, -1498 },
	{ 253, -1498 },
	{ 177, -1753 },
	{ 253, -1753 },
	{ 177, -2008 },
	{ 253, -2008 },
	{ 177, -2263 },
	{ 253, -2263 },
	{ 177, -2518 },
	{ 253, -2518 },
	{ 177, -2773 },
	{ 253, -2773 },
	{ 177, -3028 },
	{ 253, -3028 },
	{ 177, -3283 },
	{ 253, -3283 },
	{ 177, -3538 },
	{ 253, -3538 },
	{ 177, -3793 },
	{ 253, -3793 },
	{ 177, -733 },
	{ 73, -733 },
	{ 177, -988 },
	{ 73, -988 },
	{ 177, -1243 },
	{ 73, -1243 },
	{ 177, -1498 },
	{ 73, -1498 },
	{ 177, -1753 },
	{ 73, -1753 },
	{ 177, -2008 },
	{ 73, -2008 },
	{ 177, -2263 },
	{ 73, -2263 },
	{ 177, -2518 },
	{ 73, -2518 },
	{ 177, -2773 },
	{ 73, -2773 },
	{ 177, -3028 },
	{ 73, -3028 },
	{ 73, -3793 },
	{ 1, -3793 },
	{ 73, -3538 },
	{ 1, -3538 },
	{ 73, -3283 },
	{ 1, -3283 },
	{ 73, -3028 },
	{ 1, -3028 },
	{ 73, -2773 },
	{ 1, -2773 },
	{ 73, -2518 },
	{ 1, -2518 },
	{ 73, -2263 },
	{ 1, -2263 },
	{ 73, -2008 },
	{ 1, -2008 },
	{ 73, -1753 },
	{ 1, -1753 },
	{ 73, -1498 },
	{ 1, -1498 },
	{ 73, -1243 },
	{ 1, -1243 },
	{ 73, -988 },
	{ 1, -988 },
	{ 73, -733 },
	{ 1, -733 },
	{ 73, -478 },
	{ 1, -478 },
	{ 73, -223 },
	{ 1, -223 },
	{ 73, 31 },
	{ 1, 31 },
	{ 73, 223 },
	{ 1, 223 },
	{ 177, -3283 },
	{ 73, -3283 },
	{ 177, -3538 },
	{ 73, -3538 },
	{ 177, 223 },
	{ 73, 223 },
	{ 177, 31 },
	{ 73, 31 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00040C08[] = {
	{ 16192, 253 },
	{ 16192, 1 },
	{ 15172, 253 },
	{ 15172, 1 },
	{ 14152, 253 },
	{ 14152, 1 },
	{ 13132, 253 },
	{ 13132, 1 },
	{ 12112, 253 },
	{ 12112, 1 },
	{ 11092, 253 },
	{ 11092, 1 },
	{ 10072, 253 },
	{ 10072, 1 },
	{ 9052, 253 },
	{ 9052, 1 },
	{ 8032, 253 },
	{ 8032, 1 },
	{ 7012, 253 },
	{ 7012, 1 },
	{ 5992, 253 },
	{ 5992, 1 },
	{ 4972, 253 },
	{ 4972, 1 },
	{ 3952, 253 },
	{ 3952, 1 },
	{ 2932, 253 },
	{ 2932, 1 },
	{ 1912, 253 },
	{ 1912, 1 },
	{ 892, 253 },
	{ 892, 1 },
	{ 127, 253 },
	{ 127, 1 },
	{ 10199, 255 },
	{ 11219, 0 },
	{ 11219, 255 },
	{ 12239, 0 },
	{ 12239, 255 },
	{ 13259, 0 },
	{ 13259, 255 },
	{ 14280, 0 },
	{ 14280, 255 },
	{ 15300, 0 },
	{ 15300, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1019, 0 },
	{ 1020, 255 },
	{ 2039, 0 },
	{ 2039, 255 },
	{ 3059, 0 },
	{ 3059, 255 },
	{ 4079, 0 },
	{ 4079, 255 },
	{ 5099, 0 },
	{ 5100, 255 },
	{ 6119, 0 },
	{ 6119, 255 },
	{ 7139, 0 },
	{ 7139, 255 },
	{ 8159, 0 },
	{ 8159, 255 },
	{ 9179, 0 },
	{ 9179, 255 },
	{ 10199, 0 },
	{ 10199, 255 },
	{ 11219, 0 },
	{ 8096, 253 },
	{ 8096, 1 },
	{ 7713, 253 },
	{ 7713, 1 },
	{ 7203, 253 },
	{ 7203, 1 },
	{ 6693, 253 },
	{ 6693, 1 },
	{ 6183, 253 },
	{ 6183, 1 },
	{ 5673, 253 },
	{ 5673, 1 },
	{ 5163, 253 },
	{ 5163, 1 },
	{ 4653, 253 },
	{ 4653, 1 },
	{ 4143, 253 },
	{ 4143, 1 },
	{ 3633, 253 },
	{ 3633, 1 },
	{ 3123, 253 },
	{ 3123, 1 },
	{ 2613, 253 },
	{ 2613, 1 },
	{ 2103, 253 },
	{ 2103, 1 },
	{ 1593, 253 },
	{ 1593, 1 },
	{ 1083, 253 },
	{ 1083, 1 },
	{ 573, 253 },
	{ 573, 1 },
	{ 63, 253 },
	{ 63, 1 },
	{ 63, 1 },
	{ 63, 253 },
	{ 573, 1 },
	{ 573, 253 },
	{ 1083, 1 },
	{ 1083, 253 },
	{ 1593, 1 },
	{ 1593, 253 },
	{ 2103, 1 },
	{ 2103, 253 },
	{ 2613, 1 },
	{ 2613, 253 },
	{ 3123, 1 },
	{ 3123, 253 },
	{ 3633, 1 },
	{ 3633, 253 },
	{ 4143, 1 },
	{ 4143, 253 },
	{ 4653, 1 },
	{ 4653, 253 },
	{ 5163, 1 },
	{ 5163, 253 },
	{ 5673, 1 },
	{ 5673, 253 },
	{ 6183, 1 },
	{ 6183, 253 },
	{ 6693, 1 },
	{ 6693, 253 },
	{ 7203, 1 },
	{ 7203, 253 },
	{ 7713, 1 },
	{ 7713, 253 },
	{ 8096, 1 },
	{ 8096, 253 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00040E28[] = {
	{ NJD_MESHSET_TRIMESH | 0, 9, polySTG12_00040354, NULL, NULL, NULL, uvSTG12_00040710, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 10, polySTG12_0004051A, NULL, NULL, NULL, uvSTG12_00040A78, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, polySTG12_000405F6, NULL, NULL, NULL, uvSTG12_00040C08, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00040E70[] = {
	{ 165.3885f, 6, -32.89776f },
	{ 191.157f, 6, -38.0235f },
	{ 215.7728f, -4.999794f, -42.91998f },
	{ 165.3885f, -5, -32.89776f },
	{ 165.3884f, 6, 32.89782f },
	{ 191.157f, 6, 38.0235f },
	{ 215.7728f, -4.999779f, 42.91968f },
	{ 165.3884f, -5, 32.89782f },
	{ 140.2096f, 5.999992f, 93.68506f },
	{ 162.0552f, 5.999992f, 108.2817f },
	{ 140.2096f, -5.000008f, 93.68506f },
	{ 93.68506f, 5.999992f, 140.2096f },
	{ 108.2817f, 5.999992f, 162.0551f },
	{ 93.68506f, -5.000008f, 140.2096f },
	{ 32.89776f, 5.999992f, 165.3884f },
	{ 38.0235f, 5.999992f, 191.157f },
	{ 42.91992f, -4.999756f, 215.7726f },
	{ 32.89776f, -5.000008f, 165.3884f },
	{ -32.89782f, 5.999992f, 165.3884f },
	{ -38.0235f, 5.999992f, 191.157f },
	{ -42.9198f, -4.999756f, 215.7726f },
	{ -32.89782f, -5.000008f, 165.3884f },
	{ -93.68506f, 5.999992f, 140.2095f },
	{ -108.2817f, 5.999992f, 162.0551f },
	{ -93.68506f, -5.000008f, 140.2095f },
	{ -140.2096f, 6, 93.685f },
	{ -162.0552f, 6, 108.2818f },
	{ -140.2096f, -5, 93.685f },
	{ -165.3884f, 6, 32.89776f },
	{ -191.157f, 6, 38.0235f },
	{ -215.7728f, -4.999779f, 42.9198f },
	{ -165.3884f, -5, 32.89776f },
	{ -165.3884f, 6, -32.89782f },
	{ -191.157f, 6, -38.02344f },
	{ -215.7728f, -4.999794f, -42.91998f },
	{ -165.3884f, -5, -32.89782f },
	{ -140.2096f, 6.000008f, -93.68506f },
	{ -162.0552f, 6.000008f, -108.2817f },
	{ -140.2096f, -4.999992f, -93.68506f },
	{ -93.68506f, 6.000008f, -140.2096f },
	{ -108.2818f, 6.000008f, -162.0552f },
	{ -93.68506f, -4.999992f, -140.2096f },
	{ -32.89776f, 6.000008f, -165.3885f },
	{ -38.0235f, 6.000008f, -191.157f },
	{ -42.91986f, -4.999817f, -215.7729f },
	{ -32.89776f, -4.999992f, -165.3885f },
	{ 32.89788f, 6.000008f, -165.3884f },
	{ 38.0235f, 6.000008f, -191.157f },
	{ 42.91986f, -4.999817f, -215.7729f },
	{ 32.89788f, -4.999992f, -165.3884f },
	{ 93.68512f, 6.000008f, -140.2095f },
	{ 108.2818f, 6.000008f, -162.0551f },
	{ 93.68512f, -4.999992f, -140.2095f },
	{ 140.2097f, 6, -93.68494f },
	{ 162.0552f, 6, -108.2817f },
	{ 140.2097f, -5, -93.68494f },
	{ 31.91408f, 3.249992f, 160.4431f },
	{ 90.8838f, -2.250008f, 136.0172f },
	{ 90.8838f, 3.249992f, 136.0172f },
	{ 136.0172f, -2.250008f, 90.8838f },
	{ 136.0172f, 3.249992f, 90.8838f },
	{ -160.4431f, 3.25f, -31.91414f },
	{ -160.4431f, -2.25f, -31.91414f },
	{ -160.4431f, -2.25f, 31.91408f },
	{ -160.4431f, 3.25f, 31.91408f },
	{ -136.0172f, -2.25f, 90.88371f },
	{ -136.0172f, 3.25f, 90.88371f },
	{ -90.8838f, -2.250008f, 136.0172f },
	{ -90.8838f, 3.249992f, 136.0172f },
	{ -31.91414f, -2.250008f, 160.4431f },
	{ -31.91414f, 3.249992f, 160.4431f },
	{ 31.91408f, -2.250008f, 160.4431f },
	{ 196.157f, -4.999779f, 39.01782f },
	{ 196.157f, -4.999794f, -39.01818f },
	{ 166.2939f, -4.999802f, -111.1141f },
	{ 111.114f, -4.999809f, -166.2941f },
	{ 39.01806f, -4.999817f, -196.1572f },
	{ -39.01806f, -4.999817f, -196.1572f },
	{ -111.1141f, -4.999809f, -166.294f },
	{ -166.2939f, -4.999802f, -111.1141f },
	{ -196.157f, -4.999794f, -39.01812f },
	{ -196.157f, -4.999779f, 39.018f },
	{ -166.2939f, -4.999771f, 111.114f },
	{ -111.114f, -4.999763f, 166.2938f },
	{ -39.018f, -4.999756f, 196.1569f },
	{ 39.01812f, -4.999756f, 196.1569f },
	{ 111.1141f, -4.999763f, 166.2937f },
	{ 166.2939f, -4.999771f, 111.1138f },
	{ -136.0172f, 3.250008f, -90.8838f },
	{ -136.0172f, -2.249992f, -90.8838f },
	{ -90.8838f, 3.250008f, -136.0172f },
	{ -90.8838f, -2.249992f, -136.0172f },
	{ -31.91408f, 3.250008f, -160.4431f },
	{ -31.91408f, -2.249992f, -160.4431f },
	{ 31.91422f, 3.250008f, -160.4431f },
	{ 31.91422f, -2.249992f, -160.4431f },
	{ 90.88382f, 3.250008f, -136.017f },
	{ 90.88382f, -2.249992f, -136.017f },
	{ 136.0172f, 3.25f, -90.88364f },
	{ 136.0172f, -2.25f, -90.88364f },
	{ 160.4431f, 3.25f, -31.91408f },
	{ 160.4431f, -2.25f, -31.91408f },
	{ 160.4431f, 3.25f, 31.91414f },
	{ 160.4431f, -2.25f, 31.91414f },
	{ 19.46759f, -1.750008f, 96.2659f },
	{ 55.43916f, -7.250008f, 81.61035f },
	{ 55.43916f, -1.750008f, 81.61035f },
	{ 82.97055f, -7.250008f, 54.53032f },
	{ 82.97055f, -1.750008f, 54.53032f },
	{ -97.87033f, -1.75f, -19.14848f },
	{ -97.87033f, -7.25f, -19.14848f },
	{ -97.87033f, -7.25f, 19.14846f },
	{ -97.87033f, -1.75f, 19.14846f },
	{ -82.97055f, -7.25f, 54.53026f },
	{ -82.97055f, -1.75f, 54.53026f },
	{ -55.43916f, -7.250008f, 81.61035f },
	{ -55.43916f, -1.750008f, 81.61035f },
	{ -19.46763f, -7.250008f, 96.2659f },
	{ -19.46763f, -1.750008f, 96.2659f },
	{ 19.46759f, -7.250008f, 96.2659f },
	{ -82.97055f, -1.749992f, -54.53032f },
	{ -82.97055f, -7.249992f, -54.53032f },
	{ -55.43916f, -1.749992f, -81.61035f },
	{ -55.43916f, -7.249992f, -81.61035f },
	{ -19.46759f, -1.749992f, -96.2659f },
	{ -19.46759f, -7.249992f, -96.2659f },
	{ 19.46769f, -1.749992f, -96.2659f },
	{ 19.46769f, -7.249992f, -96.2659f },
	{ 55.43917f, -1.749992f, -81.61033f },
	{ 55.43917f, -7.249992f, -81.61033f },
	{ 82.97057f, -1.75f, -54.53019f },
	{ 82.97057f, -7.25f, -54.53019f },
	{ 97.87033f, -1.75f, -19.14846f },
	{ 97.87033f, -7.25f, -19.14846f },
	{ 97.87033f, -1.75f, 19.14848f },
	{ 97.87033f, -7.25f, 19.14848f },
	{ 18.10682f, 0.102491f, 89.53683f },
	{ 51.56399f, -8.532513f, 75.90582f },
	{ 51.56399f, 0.102491f, 75.90582f },
	{ 77.17096f, -8.532513f, 50.71863f },
	{ 77.17096f, 0.102491f, 50.71863f },
	{ -91.02916f, 0.102503f, -17.81002f },
	{ -91.02916f, -8.5325f, -17.81002f },
	{ -91.02916f, -8.5325f, 17.80997f },
	{ -91.02916f, 0.102503f, 17.80997f },
	{ -77.17096f, -8.5325f, 50.71857f },
	{ -77.17096f, 0.102503f, 50.71857f },
	{ -51.56399f, -8.532513f, 75.90581f },
	{ -51.56399f, 0.102491f, 75.90581f },
	{ -18.10683f, -8.532513f, 89.53683f },
	{ -18.10683f, 0.102491f, 89.53683f },
	{ 18.10682f, -8.532513f, 89.53683f },
	{ -77.17096f, 0.102514f, -50.71863f },
	{ -77.17096f, -8.53249f, -50.71863f },
	{ -51.56399f, 0.102514f, -75.90582f },
	{ -51.56399f, -8.53249f, -75.90582f },
	{ -18.10682f, 0.102514f, -89.53683f },
	{ -18.10682f, -8.53249f, -89.53683f },
	{ 18.10689f, 0.102514f, -89.53683f },
	{ 18.10689f, -8.53249f, -89.53683f },
	{ 51.56399f, 0.102514f, -75.9058f },
	{ 51.56399f, -8.53249f, -75.9058f },
	{ 77.171f, 0.102503f, -50.71851f },
	{ 77.171f, -8.5325f, -50.71851f },
	{ 91.02916f, 0.102503f, -17.80997f },
	{ 91.02916f, -8.5325f, -17.80997f },
	{ 91.02916f, 0.102503f, 17.81002f },
	{ 91.02916f, -8.5325f, 17.81002f },
	{ 9.234478f, 0.102491f, 45.66381f },
	{ 26.29764f, -8.532513f, 38.71199f },
	{ 26.29764f, 0.102491f, 38.71199f },
	{ 39.35719f, -8.532513f, 25.86651f },
	{ 39.35719f, 0.102491f, 25.86651f },
	{ -46.4249f, 0.102503f, -9.083112f },
	{ -46.4249f, -8.5325f, -9.083112f },
	{ -46.4249f, -8.5325f, 9.083083f },
	{ -46.4249f, 0.102503f, 9.083083f },
	{ -39.35719f, -8.5325f, 25.86648f },
	{ -39.35719f, 0.102503f, 25.86648f },
	{ -26.29764f, -8.532513f, 38.71199f },
	{ -26.29764f, 0.102491f, 38.71199f },
	{ -9.234488f, -8.532513f, 45.66381f },
	{ -9.234488f, 0.102491f, 45.66381f },
	{ 9.234478f, -8.532513f, 45.66381f },
	{ -39.35719f, 0.102514f, -25.86651f },
	{ -39.35719f, -8.53249f, -25.86651f },
	{ -26.29764f, 0.102514f, -38.71199f },
	{ -26.29764f, -8.53249f, -38.71199f },
	{ -9.234478f, 0.102514f, -45.66381f },
	{ -9.234478f, -8.53249f, -45.66381f },
	{ 9.234521f, 0.102514f, -45.66381f },
	{ 9.234521f, -8.53249f, -45.66381f },
	{ 26.29764f, 0.102514f, -38.71199f },
	{ 26.29764f, -8.53249f, -38.71199f },
	{ 39.3572f, 0.102503f, -25.86644f },
	{ 39.3572f, -8.5325f, -25.86644f },
	{ 46.4249f, 0.102503f, -9.083083f },
	{ 46.4249f, -8.5325f, -9.083083f },
	{ 46.4249f, 0.102503f, 9.083112f },
	{ 46.4249f, -8.5325f, 9.083112f },
	{ 7.572273f, -1.734406f, 37.44432f },
	{ 21.56407f, -7.260809f, 31.74384f },
	{ 21.56407f, -1.734406f, 31.74384f },
	{ 32.2729f, -7.260809f, 21.21054f },
	{ 32.2729f, -1.734406f, 21.21054f },
	{ -38.06842f, -1.734397f, -7.448154f },
	{ -38.06842f, -7.260799f, -7.448154f },
	{ -38.06842f, -7.260799f, 7.44813f },
	{ -38.06842f, -1.734397f, 7.44813f },
	{ -32.2729f, -7.260799f, 21.21051f },
	{ -32.2729f, -1.734397f, 21.21051f },
	{ -21.56407f, -7.260809f, 31.74384f },
	{ -21.56407f, -1.734406f, 31.74384f },
	{ -7.572278f, -7.260809f, 37.44432f },
	{ -7.572278f, -1.734406f, 37.44432f },
	{ 7.572273f, -7.260809f, 37.44432f },
	{ -32.2729f, -1.73439f, -21.21054f },
	{ -32.2729f, -7.260794f, -21.21054f },
	{ -21.56407f, -1.73439f, -31.74384f },
	{ -21.56407f, -7.260794f, -31.74384f },
	{ -7.572273f, -1.73439f, -37.44432f },
	{ -7.572273f, -7.260794f, -37.44432f },
	{ 7.572307f, -1.73439f, -37.44432f },
	{ 7.572307f, -7.260794f, -37.44432f },
	{ 21.56407f, -1.73439f, -31.74384f },
	{ 21.56407f, -7.260794f, -31.74384f },
	{ 32.2729f, -1.734397f, -21.21048f },
	{ 32.2729f, -7.260799f, -21.21048f },
	{ 38.06842f, -1.734397f, -7.44813f },
	{ 38.06842f, -7.260799f, -7.44813f },
	{ 38.06842f, -1.734397f, 7.448154f },
	{ 38.06842f, -7.260799f, 7.448154f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00041950[] = {
	{ -0.213478f, 0.976025f, 0.042463f },
	{ 0, 1, 0 },
	{ 0, -1, 0 },
	{ -0.213474f, -0.976025f, 0.042463f },
	{ -0.213479f, 0.976024f, -0.042464f },
	{ 0, 1, 0 },
	{ 0, -1, 0 },
	{ -0.213475f, -0.976025f, -0.042463f },
	{ -0.180979f, 0.976024f, -0.120927f },
	{ 0, 1, 0 },
	{ -0.180976f, -0.976025f, -0.120924f },
	{ -0.120926f, 0.976024f, -0.180979f },
	{ 0, 1, 0 },
	{ -0.120924f, -0.976025f, -0.180976f },
	{ -0.042464f, 0.976024f, -0.213479f },
	{ 0, 1, 0 },
	{ 0, -1, 0 },
	{ -0.042463f, -0.976025f, -0.213475f },
	{ 0.042464f, 0.976024f, -0.213479f },
	{ 0, 1, 0 },
	{ 0, -1, 0 },
	{ 0.042463f, -0.976025f, -0.213475f },
	{ 0.120927f, 0.976024f, -0.180979f },
	{ 0, 1, 0 },
	{ 0.120924f, -0.976025f, -0.180976f },
	{ 0.180979f, 0.976024f, -0.120926f },
	{ 0, 1, 0 },
	{ 0.180976f, -0.976025f, -0.120924f },
	{ 0.213479f, 0.976024f, -0.042464f },
	{ 0, 1, 0 },
	{ 0, -1, 0 },
	{ 0.213476f, -0.976025f, -0.042463f },
	{ 0.213479f, 0.976024f, 0.042464f },
	{ 0, 1, 0 },
	{ 0, -1, 0 },
	{ 0.213476f, -0.976025f, 0.042463f },
	{ 0.180979f, 0.976024f, 0.120927f },
	{ 0, 1, 0 },
	{ 0.180977f, -0.976025f, 0.120925f },
	{ 0.120926f, 0.976024f, 0.180979f },
	{ 0, 1, 0 },
	{ 0.120925f, -0.976025f, 0.180976f },
	{ 0.042463f, 0.976025f, 0.213478f },
	{ 0, 1, 0 },
	{ 0, -1, 0 },
	{ 0.042463f, -0.976025f, 0.213475f },
	{ -0.042464f, 0.976024f, 0.213479f },
	{ 0, 1, 0 },
	{ 0, -1, 0 },
	{ -0.042463f, -0.976025f, 0.213475f },
	{ -0.120926f, 0.976024f, 0.180979f },
	{ 0, 1, 0 },
	{ -0.120924f, -0.976025f, 0.180976f },
	{ -0.180978f, 0.976025f, 0.120926f },
	{ 0, 1, 0 },
	{ -0.180975f, -0.976025f, 0.120924f },
	{ -0.059984f, 0.95149f, -0.301777f },
	{ -0.135189f, -0.96999f, -0.202099f },
	{ -0.170978f, 0.95141f, -0.256097f },
	{ -0.201998f, -0.9700609f, -0.134826f },
	{ -0.256199f, 0.951318f, -0.171336f },
	{ 0.302426f, 0.951269f, 0.060216f },
	{ 0.237949f, -0.970126f, 0.047286f },
	{ 0.23788f, -0.970144f, -0.047256f },
	{ 0.302357f, 0.951293f, -0.060186f },
	{ 0.201856f, -0.970105f, -0.134722f },
	{ 0.256058f, 0.9513749f, -0.171234f },
	{ 0.135088f, -0.970033f, -0.201958f },
	{ 0.170878f, 0.951465f, -0.255959f },
	{ 0.047492f, -0.9699709f, -0.23854f },
	{ 0.059957f, 0.951512f, -0.301712f },
	{ -0.04752f, -0.9699529f, -0.238606f },
	{ 0.000004f, -1, 0.000001f },
	{ 0.000004f, -1, -0.00001f },
	{ 0.000005f, -1, -0.00003f },
	{ 0.000003f, -1, -0.00005f },
	{ 0.000001f, -1, -0.00003f },
	{ -0.00001f, -1, -0.00003f },
	{ -0.00003f, -1, -0.00005f },
	{ -0.00005f, -1, -0.00003f },
	{ -0.00004f, -1, -0.00001f },
	{ -0.00004f, -1, 0.000001f },
	{ -0.00006f, -1, 0.000004f },
	{ -0.00004f, -1, 0.000006f },
	{ -0.00001f, -1, 0.000005f },
	{ 0.000001f, -1, 0.000005f },
	{ 0.000004f, -1, 0.000006f },
	{ 0.000006f, -1, 0.000004f },
	{ 0.256199f, 0.951318f, 0.171337f },
	{ 0.201998f, -0.9700609f, 0.134826f },
	{ 0.170978f, 0.95141f, 0.256097f },
	{ 0.135189f, -0.96999f, 0.202098f },
	{ 0.059984f, 0.95149f, 0.301776f },
	{ 0.04752f, -0.9699529f, 0.238605f },
	{ -0.059957f, 0.951512f, 0.301711f },
	{ -0.047492f, -0.9699709f, 0.238539f },
	{ -0.170878f, 0.951465f, 0.255958f },
	{ -0.135087f, -0.970033f, 0.201957f },
	{ -0.256056f, 0.9513749f, 0.171233f },
	{ -0.201854f, -0.9701059f, 0.134721f },
	{ -0.302356f, 0.951293f, 0.060186f },
	{ -0.237878f, -0.970145f, 0.047256f },
	{ -0.302425f, 0.951269f, -0.060216f },
	{ -0.237949f, -0.970126f, -0.047287f },
	{ 0.013929f, 0.997356f, 0.071319f },
	{ 0.06812f, -0.9923609f, 0.102851f },
	{ 0.039324f, 0.997429f, 0.059914f },
	{ 0.102135f, -0.992386f, 0.068835f },
	{ 0.058157f, 0.997524f, 0.039555f },
	{ -0.068074f, 0.997585f, -0.013776f },
	{ -0.120693f, -0.992395f, -0.024206f },
	{ -0.120785f, -0.9923829f, 0.024244f },
	{ -0.06816699f, 0.997578f, 0.013815f },
	{ -0.102322f, -0.992357f, 0.06896999f },
	{ -0.058347f, 0.997507f, 0.039692f },
	{ -0.068253f, -0.992333f, 0.103037f },
	{ -0.039458f, 0.997412f, 0.060099f },
	{ -0.023933f, -0.992324f, 0.12133f },
	{ -0.013965f, 0.99735f, 0.071407f },
	{ 0.023896f, -0.992335f, 0.121242f },
	{ -0.058157f, 0.997523f, -0.039555f },
	{ -0.102134f, -0.992386f, -0.068835f },
	{ -0.039325f, 0.997429f, -0.059914f },
	{ -0.068119f, -0.9923609f, -0.102851f },
	{ -0.013929f, 0.997356f, -0.07132f },
	{ -0.023896f, -0.992335f, -0.121241f },
	{ 0.013965f, 0.99735f, -0.071407f },
	{ 0.023933f, -0.992324f, -0.12133f },
	{ 0.039458f, 0.997412f, -0.060099f },
	{ 0.068253f, -0.992333f, -0.103037f },
	{ 0.058348f, 0.997507f, -0.039692f },
	{ 0.102322f, -0.992357f, -0.06896999f },
	{ 0.06816699f, 0.997578f, -0.013815f },
	{ 0.120785f, -0.9923829f, -0.024244f },
	{ 0.068074f, 0.997585f, 0.013776f },
	{ 0.120694f, -0.992395f, 0.024206f },
	{ 0.028178f, 0.9891019f, 0.144511f },
	{ 0.056488f, -0.994671f, 0.08625f },
	{ 0.080413f, 0.989172f, 0.122768f },
	{ 0.08478399f, -0.9947219f, 0.057795f },
	{ 0.120707f, 0.989273f, 0.082275f },
	{ -0.142685f, 0.989345f, -0.028952f },
	{ -0.100212f, -0.994758f, -0.020336f },
	{ -0.100212f, -0.994758f, 0.020336f },
	{ -0.142686f, 0.9893439f, 0.028952f },
	{ -0.084783f, -0.9947219f, 0.057795f },
	{ -0.120707f, 0.989273f, 0.082275f },
	{ -0.056489f, -0.994671f, 0.08625f },
	{ -0.080413f, 0.989172f, 0.122767f },
	{ -0.019796f, -0.994635f, 0.101535f },
	{ -0.028178f, 0.9891019f, 0.14451f },
	{ 0.019796f, -0.994635f, 0.101534f },
	{ -0.120707f, 0.989273f, -0.082275f },
	{ -0.084783f, -0.9947219f, -0.057795f },
	{ -0.080413f, 0.989172f, -0.122769f },
	{ -0.056488f, -0.994671f, -0.08624899f },
	{ -0.028178f, 0.9891019f, -0.144512f },
	{ -0.019796f, -0.994635f, -0.101533f },
	{ 0.028178f, 0.9891019f, -0.144511f },
	{ 0.019796f, -0.994635f, -0.101534f },
	{ 0.080413f, 0.989172f, -0.122767f },
	{ 0.056488f, -0.994671f, -0.08625f },
	{ 0.120708f, 0.989273f, -0.082275f },
	{ 0.084783f, -0.9947219f, -0.057795f },
	{ 0.142686f, 0.9893439f, -0.028952f },
	{ 0.100212f, -0.994758f, -0.020336f },
	{ 0.142685f, 0.989345f, 0.028952f },
	{ 0.100213f, -0.994758f, 0.020336f },
	{ -0.01822f, 0.995527f, -0.09270699f },
	{ -0.036141f, -0.9978459f, -0.05474f },
	{ -0.051768f, 0.995576f, -0.078412f },
	{ -0.053906f, -0.997881f, -0.036452f },
	{ -0.07722399f, 0.995645f, -0.052221f },
	{ 0.09087799f, 0.995694f, 0.018295f },
	{ 0.06343199f, -0.997905f, 0.012769f },
	{ 0.06343199f, -0.997905f, -0.012769f },
	{ 0.09087799f, 0.995694f, -0.018294f },
	{ 0.053906f, -0.997881f, -0.036452f },
	{ 0.07722399f, 0.995645f, -0.052221f },
	{ 0.036141f, -0.9978459f, -0.05474f },
	{ 0.051769f, 0.995576f, -0.078412f },
	{ 0.012721f, -0.997822f, -0.064725f },
	{ 0.01822f, 0.995527f, -0.09270699f },
	{ -0.012721f, -0.997822f, -0.064725f },
	{ 0.07722399f, 0.995645f, 0.052222f },
	{ 0.053906f, -0.997881f, 0.036451f },
	{ 0.051769f, 0.995576f, 0.07841299f },
	{ 0.036141f, -0.9978459f, 0.05474f },
	{ 0.01822f, 0.995527f, 0.09270699f },
	{ 0.012721f, -0.997822f, 0.064724f },
	{ -0.01822f, 0.995527f, 0.09270699f },
	{ -0.012721f, -0.997822f, 0.064724f },
	{ -0.051768f, 0.995576f, 0.07841299f },
	{ -0.036141f, -0.9978459f, 0.05474f },
	{ -0.07722399f, 0.995645f, 0.052222f },
	{ -0.053906f, -0.997881f, 0.036451f },
	{ -0.09087799f, 0.995694f, 0.018294f },
	{ -0.06343199f, -0.997905f, 0.012769f },
	{ -0.09087799f, 0.995694f, -0.018294f },
	{ -0.06343099f, -0.997905f, -0.012769f },
	{ -0.177876f, 0.829399f, -0.529581f },
	{ -0.216757f, -0.857706f, -0.466216f },
	{ -0.242211f, 0.829953f, -0.502506f },
	{ -0.462305f, -0.858375f, -0.222412f },
	{ -0.497969f, 0.830839f, -0.248463f },
	{ 0.524794f, 0.831404f, 0.182645f },
	{ 0.481387f, -0.8588009f, 0.175293f },
	{ 0.481388f, -0.8588f, -0.175293f },
	{ 0.524794f, 0.831404f, -0.182644f },
	{ 0.462305f, -0.858374f, -0.222412f },
	{ 0.497969f, 0.830839f, -0.248463f },
	{ 0.216757f, -0.857706f, -0.466216f },
	{ 0.242212f, 0.829953f, -0.502506f },
	{ 0.170767f, -0.857289f, -0.485689f },
	{ 0.177876f, 0.8293999f, -0.529581f },
	{ -0.170767f, -0.857289f, -0.485689f },
	{ 0.497968f, 0.830839f, 0.248464f },
	{ 0.462305f, -0.858375f, 0.222412f },
	{ 0.242211f, 0.8299519f, 0.502506f },
	{ 0.216756f, -0.857706f, 0.466216f },
	{ 0.177877f, 0.829399f, 0.529582f },
	{ 0.170767f, -0.857289f, 0.485689f },
	{ -0.177877f, 0.829399f, 0.529582f },
	{ -0.170767f, -0.857289f, 0.485689f },
	{ -0.242212f, 0.8299519f, 0.502506f },
	{ -0.216757f, -0.857706f, 0.466215f },
	{ -0.497969f, 0.830839f, 0.248464f },
	{ -0.462305f, -0.858374f, 0.222412f },
	{ -0.524794f, 0.831404f, 0.182645f },
	{ -0.481388f, -0.8588f, 0.175294f },
	{ -0.524794f, 0.831404f, -0.182644f },
	{ -0.481388f, -0.8588f, -0.175294f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00042430 = { vertexSTG12_00040E70, normalSTG12_00041950, LengthOfArray(vertexSTG12_00040E70), meshlistSTG12_00040E28, matlistSTG12_00040318, LengthOfArray(meshlistSTG12_00040E28), LengthOfArray(matlistSTG12_00040318),{ 0, -1.266253f, -0.000122f }, 305.1487f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00042458 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00042430, 750, 83.99989f, -650, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0004248C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 58, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 58, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 40, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000424DC[] = {
	0x8000u | 10, 2, 0, 6, 4, 7, 5, 3, 1, 2, 0
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000424F2[] = {
	4, 11, 10, 9, 8
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000424FC[] = {
	0x8000u | 10, 8, 2, 10, 6, 11, 7, 9, 3, 8, 2
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00042512[] = {
	4, 15, 13, 14, 12
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0004251C[] = {
	{ 1, -3793 },
	{ 253, -3793 },
	{ 0, -2805 },
	{ 254, -2805 },
	{ 0, -1785 },
	{ 254, -1785 },
	{ 0, -765 },
	{ 254, -765 },
	{ 1, 223 },
	{ 253, 223 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00042544[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00042554[] = {
	{ 7, 251 },
	{ 7, -251 },
	{ 255, 255 },
	{ 255, -255 },
	{ 510, 255 },
	{ 510, -255 },
	{ 765, 255 },
	{ 765, -255 },
	{ 1012, 251 },
	{ 1012, -251 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0004257C[] = {
	{ 251, 3 },
	{ 3, 3 },
	{ 251, 251 },
	{ 3, 251 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0004258C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_000424DC, NULL, NULL, NULL, uvSTG12_0004251C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, polySTG12_000424F2, NULL, NULL, NULL, uvSTG12_00042544, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, polySTG12_000424FC, NULL, NULL, NULL, uvSTG12_00042554, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, polySTG12_00042512, NULL, NULL, NULL, uvSTG12_0004257C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_000425EC[] = {
	{ -6, -0.00001f, 6 },
	{ 6, -0.00001f, 6 },
	{ -5, 1.999999f, 5 },
	{ 5, 1.999999f, 5 },
	{ -6, -0.00001f, -6 },
	{ 6, -0.00001f, -6 },
	{ -5, 1.999999f, -5 },
	{ 5, 1.999999f, -5 },
	{ -4, 15, 4 },
	{ 4, 15, 4 },
	{ -4, 15, -4 },
	{ 4, 15, -4 },
	{ -1.800003f, 11.2f, 4.400001f },
	{ -1.800003f, 13.7f, 4.200001f },
	{ 1.700001f, 11.2f, 4.400001f },
	{ 1.700001f, 13.7f, 4.200001f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_000426AC[] = {
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.648514f, 0.398573f, 0.648514f },
	{ 0.648514f, 0.398573f, 0.648514f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.648514f, 0.398573f, -0.648514f },
	{ 0.648514f, 0.398573f, -0.648514f },
	{ -0.556197f, 0.617487f, 0.556197f },
	{ 0.556197f, 0.617487f, 0.556197f },
	{ -0.556197f, 0.617487f, -0.556197f },
	{ 0.556197f, 0.617487f, -0.556197f },
	{ 0, 0.07974499f, 0.996815f },
	{ 0, 0.07974499f, 0.996815f },
	{ 0, 0.07974499f, 0.996815f },
	{ 0, 0.07974499f, 0.996815f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0004276C = { vertexSTG12_000425EC, normalSTG12_000426AC, LengthOfArray(vertexSTG12_000425EC), meshlistSTG12_0004258C, matlistSTG12_0004248C, LengthOfArray(meshlistSTG12_0004258C), LengthOfArray(matlistSTG12_0004248C),{ 0, 7.499999f, 0 }, 9.604687f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00042794 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0004276C, -37, 0, -205, 0, 0x4000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_000427C8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 57, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 42, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 54, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00042890[] = {
	0x8000u | 34, 153, 192, 167, 206, 166, 205, 165, 204, 207, 191, 203, 179, 202, 178, 201, 177, 200, 176, 199, 175, 198, 174, 197, 173, 196, 172, 195, 171, 194, 170, 193, 169, 192, 168,
	0x8000u | 34, 192, 168, 206, 182, 205, 181, 204, 180, 191, 189, 179, 149, 178, 148, 177, 147, 176, 146, 175, 145, 174, 144, 173, 143, 172, 142, 171, 141, 170, 140, 169, 139, 168, 138,
	9, 189, 150, 180, 151, 181, 152, 182, 138, 168,
	0x8000u | 34, 123, 153, 137, 167, 136, 166, 135, 165, 190, 207, 164, 203, 163, 202, 162, 201, 161, 200, 160, 199, 159, 198, 158, 197, 157, 196, 156, 195, 155, 194, 154, 193, 153, 192,
	0x8000u | 27, 153, 123, 154, 124, 155, 125, 156, 126, 157, 127, 158, 128, 159, 129, 160, 130, 161, 131, 162, 132, 163, 133, 164, 134, 190, 188, 135
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000429AE[] = {
	0x8000u | 8, 1, 31, 30, 46, 28, 45, 26, 44,
	0x8000u | 5, 31, 1, 32, 3, 5,
	0x8000u | 23, 24, 43, 23, 42, 21, 41, 19, 40, 17, 39, 15, 38, 13, 37, 11, 36, 9, 35, 7, 34, 5, 33, 32
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000429FC[] = {
	26, 0, 109, 2, 121, 4, 120, 6, 119, 8, 122, 10, 118, 12, 117, 14, 116, 16, 115, 18, 114, 20, 113, 22, 112, 183, 111,
	8, 109, 0, 107, 29, 108, 27, 110, 25
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00042A44[] = {
	34, 212, 135, 213, 136, 214, 137, 215, 123, 216, 124, 217, 125, 218, 126, 219, 127, 220, 128, 221, 129, 222, 130, 223, 131, 208, 132, 209, 133, 210, 134, 211, 188, 212, 135
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00042A8A[] = {
	0x8000u | 33, 189, 186, 149, 88, 148, 87, 147, 86, 146, 85, 145, 84, 144, 83, 143, 82, 142, 81, 141, 80, 140, 79, 139, 78, 138, 77, 152, 91, 151, 90, 150, 89, 186,
	3, 150, 189, 186
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00042AD6[] = {
	9, 185, 74, 89, 75, 90, 76, 91, 62, 77,
	27, 89, 186, 185, 88, 73, 87, 72, 86, 71, 85, 70, 84, 69, 83, 68, 82, 67, 81, 66, 80, 65, 79, 64, 78, 63, 77, 62
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00042B22[] = {
	34, 185, 187, 74, 96, 75, 95, 76, 94, 62, 92, 63, 93, 64, 106, 65, 105, 66, 104, 67, 103, 68, 102, 69, 101, 70, 100, 71, 99, 72, 98, 73, 97, 185, 187
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00042B68[] = {
	32, 24, 111, 23, 112, 21, 113, 19, 114, 17, 115, 15, 116, 13, 117, 11, 118, 9, 122, 7, 119, 5, 120, 3, 121, 1, 109, 30, 107, 28, 108, 26, 110
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00042BAA[] = {
	34, 187, 183, 96, 25, 95, 27, 94, 29, 92, 0, 93, 2, 106, 4, 105, 6, 104, 8, 103, 10, 102, 12, 101, 14, 100, 16, 99, 18, 98, 20, 97, 22, 187, 183
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00042BF0[] = {
	34, 222, 54, 221, 53, 220, 52, 219, 51, 218, 50, 217, 49, 216, 48, 215, 47, 214, 61, 213, 60, 212, 59, 211, 184, 210, 58, 209, 57, 208, 56, 223, 55, 222, 54
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00042C38[] = {
	{ 0, 79 },
	{ 0 },
	{ 320, 79 },
	{ 320, 0 },
	{ 640, 79 },
	{ 640, 0 },
	{ 960, 79 },
	{ 960, 0 },
	{ 1280, 0 },
	{ 1280, 79 },
	{ 1600, 0 },
	{ 1600, 79 },
	{ 1920, 0 },
	{ 1920, 79 },
	{ 2240, 0 },
	{ 2240, 79 },
	{ 2560, 0 },
	{ 2560, 79 },
	{ 2880, 0 },
	{ 2880, 79 },
	{ 3200, 0 },
	{ 3200, 79 },
	{ 3520, 0 },
	{ 3520, 79 },
	{ 3840, 0 },
	{ 3840, 79 },
	{ 4160, 0 },
	{ 4160, 79 },
	{ 4480, 0 },
	{ 4480, 79 },
	{ 4800, 0 },
	{ 4800, 79 },
	{ 5100, 0 },
	{ 5100, 79 },
	{ 0 },
	{ 0, 79 },
	{ 320, 0 },
	{ 320, 79 },
	{ 640, 0 },
	{ 640, 79 },
	{ 960, 0 },
	{ 960, 79 },
	{ 1280, 79 },
	{ 1280, 254 },
	{ 1600, 79 },
	{ 1600, 254 },
	{ 1920, 79 },
	{ 1920, 254 },
	{ 2240, 79 },
	{ 2240, 254 },
	{ 2560, 79 },
	{ 2560, 254 },
	{ 2880, 79 },
	{ 2880, 254 },
	{ 3200, 79 },
	{ 3200, 254 },
	{ 3520, 79 },
	{ 3520, 254 },
	{ 3840, 79 },
	{ 3840, 254 },
	{ 4160, 79 },
	{ 4160, 254 },
	{ 4480, 79 },
	{ 4480, 254 },
	{ 4800, 79 },
	{ 4800, 254 },
	{ 5100, 79 },
	{ 5100, 254 },
	{ 1280, 254 },
	{ 960, 254 },
	{ 960, 79 },
	{ 640, 254 },
	{ 640, 79 },
	{ 320, 254 },
	{ 320, 79 },
	{ 0, 254 },
	{ 0, 79 },
	{ 0, 254 },
	{ 0, 79 },
	{ 320, 254 },
	{ 320, 79 },
	{ 640, 254 },
	{ 640, 79 },
	{ 960, 254 },
	{ 960, 79 },
	{ 1280, 79 },
	{ 1280, 0 },
	{ 1600, 79 },
	{ 1600, 0 },
	{ 1920, 79 },
	{ 1920, 0 },
	{ 2240, 79 },
	{ 2240, 0 },
	{ 2560, 79 },
	{ 2560, 0 },
	{ 2880, 79 },
	{ 2880, 0 },
	{ 3200, 79 },
	{ 3200, 0 },
	{ 3520, 79 },
	{ 3520, 0 },
	{ 3840, 79 },
	{ 3840, 0 },
	{ 4160, 79 },
	{ 4160, 0 },
	{ 4480, 79 },
	{ 4480, 0 },
	{ 4800, 79 },
	{ 4800, 0 },
	{ 5100, 79 },
	{ 5100, 0 },
	{ 5100, 79 },
	{ 5100, 254 },
	{ 4800, 79 },
	{ 4800, 254 },
	{ 4480, 79 },
	{ 4480, 254 },
	{ 4160, 79 },
	{ 4160, 254 },
	{ 3840, 79 },
	{ 3840, 254 },
	{ 3520, 79 },
	{ 3520, 254 },
	{ 3200, 79 },
	{ 3200, 254 },
	{ 2880, 79 },
	{ 2880, 254 },
	{ 2560, 79 },
	{ 2560, 254 },
	{ 2240, 79 },
	{ 2240, 254 },
	{ 1920, 79 },
	{ 1920, 254 },
	{ 1600, 79 },
	{ 1600, 254 },
	{ 1280, 79 },
	{ 1280, 254 },
	{ 960, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00042E60[] = {
	{ 0 },
	{ 0, 255 },
	{ 1280, 0 },
	{ 1280, 255 },
	{ 2560, 0 },
	{ 2560, 254 },
	{ 3840, 0 },
	{ 3840, 254 },
	{ 20400, 255 },
	{ 20400, 0 },
	{ 19201, 255 },
	{ 19201, 0 },
	{ 17921, 0 },
	{ 5120, 0 },
	{ 5120, 254 },
	{ 6400, 0 },
	{ 6400, 254 },
	{ 7680, 0 },
	{ 7680, 254 },
	{ 8960, 0 },
	{ 8960, 255 },
	{ 10240, 0 },
	{ 10240, 255 },
	{ 11520, 0 },
	{ 11520, 255 },
	{ 12800, 0 },
	{ 12800, 255 },
	{ 14081, 0 },
	{ 14081, 255 },
	{ 15361, 0 },
	{ 15361, 255 },
	{ 16641, 0 },
	{ 16641, 255 },
	{ 17921, 0 },
	{ 17921, 255 },
	{ 19201, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00042EF0[] = {
	{ 24480, 0 },
	{ 24480, 254 },
	{ 23041, 0 },
	{ 23041, 254 },
	{ 21505, 0 },
	{ 21505, 254 },
	{ 19969, 0 },
	{ 19969, 254 },
	{ 18433, 0 },
	{ 18433, 254 },
	{ 16897, 0 },
	{ 16897, 254 },
	{ 15361, 0 },
	{ 15361, 254 },
	{ 13825, 0 },
	{ 13825, 254 },
	{ 12288, 0 },
	{ 12288, 254 },
	{ 10752, 0 },
	{ 10752, 254 },
	{ 9216, 0 },
	{ 9216, 254 },
	{ 7680, 0 },
	{ 7680, 254 },
	{ 6144, 0 },
	{ 6144, 254 },
	{ 0, 254 },
	{ 0 },
	{ 1536, 254 },
	{ 1536, 0 },
	{ 3072, 254 },
	{ 3072, 0 },
	{ 4608, 254 },
	{ 4608, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00042F78[] = {
	{ 7618, 253 },
	{ 7618, -253 },
	{ 7140, 253 },
	{ 7140, -253 },
	{ 6661, 253 },
	{ 6661, -253 },
	{ 6183, 253 },
	{ 6183, -253 },
	{ 5705, 253 },
	{ 5705, -253 },
	{ 5227, 253 },
	{ 5227, -253 },
	{ 4749, 253 },
	{ 4749, -253 },
	{ 4271, 253 },
	{ 4271, -253 },
	{ 3793, 253 },
	{ 3793, -253 },
	{ 3315, 253 },
	{ 3315, -253 },
	{ 2836, 253 },
	{ 2836, -253 },
	{ 2358, 253 },
	{ 2358, -253 },
	{ 1880, 253 },
	{ 1880, -253 },
	{ 1402, 253 },
	{ 1402, -253 },
	{ 924, 253 },
	{ 924, -253 },
	{ 448, 253 },
	{ 448, -253 },
	{ 29, 253 },
	{ 29, -253 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00043000[] = {
	{ 5078, -253 },
	{ 5078, 253 },
	{ 4759, -253 },
	{ 4759, 253 },
	{ 4440, -253 },
	{ 4440, 253 },
	{ 4121, -253 },
	{ 4121, 253 },
	{ 3805, -253 },
	{ 3805, 253 },
	{ 3486, -253 },
	{ 3486, 253 },
	{ 3167, -253 },
	{ 3167, 253 },
	{ 2848, -253 },
	{ 2848, 253 },
	{ 2530, -253 },
	{ 2530, 253 },
	{ 2211, -253 },
	{ 2211, 253 },
	{ 1890, -253 },
	{ 1890, 253 },
	{ 1571, -253 },
	{ 1571, 253 },
	{ 1253, -253 },
	{ 1253, 253 },
	{ 936, -253 },
	{ 936, 253 },
	{ 617, -253 },
	{ 617, 253 },
	{ 298, -253 },
	{ 298, 253 },
	{ 19, 253 },
	{ 298, -253 },
	{ 19, -253 },
	{ 19, 253 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00043090[] = {
	{ 1600, 254 },
	{ 1200, 254 },
	{ 1200, 0 },
	{ 800, 254 },
	{ 800, 0 },
	{ 400, 254 },
	{ 400, 0 },
	{ 0, 254 },
	{ 0 },
	{ 1200, 0 },
	{ 1600, 0 },
	{ 1600, 254 },
	{ 2000, 0 },
	{ 2000, 254 },
	{ 2400, 0 },
	{ 2400, 254 },
	{ 2800, 0 },
	{ 2800, 254 },
	{ 3200, 0 },
	{ 3200, 254 },
	{ 3600, 0 },
	{ 3600, 254 },
	{ 4000, 0 },
	{ 4000, 254 },
	{ 4398, 0 },
	{ 4398, 254 },
	{ 4800, 0 },
	{ 4800, 254 },
	{ 5198, 0 },
	{ 5198, 254 },
	{ 5600, 0 },
	{ 5600, 254 },
	{ 5998, 0 },
	{ 5998, 254 },
	{ 6375, 0 },
	{ 6375, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00043120[] = {
	{ 6070, 253 },
	{ 6070, 1 },
	{ 5783, 253 },
	{ 5783, 1 },
	{ 5400, 253 },
	{ 5400, 1 },
	{ 5018, 253 },
	{ 5018, 1 },
	{ 4635, 253 },
	{ 4635, 1 },
	{ 4253, 253 },
	{ 4253, 1 },
	{ 3872, 253 },
	{ 3872, 1 },
	{ 3490, 253 },
	{ 3490, 1 },
	{ 3107, 253 },
	{ 3107, 1 },
	{ 2725, 253 },
	{ 2725, 1 },
	{ 2342, 253 },
	{ 2342, 1 },
	{ 1960, 253 },
	{ 1960, 1 },
	{ 1577, 253 },
	{ 1577, 1 },
	{ 1195, 253 },
	{ 1195, 1 },
	{ 812, 253 },
	{ 812, 1 },
	{ 430, 253 },
	{ 430, 1 },
	{ 47, 253 },
	{ 47, 1 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000431A8[] = {
	{ 0, 255 },
	{ 0 },
	{ 408, 255 },
	{ 408, 0 },
	{ 816, 255 },
	{ 816, 0 },
	{ 1224, 255 },
	{ 1224, 0 },
	{ 1632, 255 },
	{ 1632, 0 },
	{ 2040, 255 },
	{ 2040, 0 },
	{ 2448, 255 },
	{ 2448, 0 },
	{ 2854, 255 },
	{ 2854, 0 },
	{ 3264, 255 },
	{ 3264, 0 },
	{ 3669, 255 },
	{ 3669, 0 },
	{ 4080, 255 },
	{ 4080, 0 },
	{ 4488, 255 },
	{ 4488, 0 },
	{ 4896, 255 },
	{ 4896, 0 },
	{ 5301, 255 },
	{ 5301, 0 },
	{ 5709, 255 },
	{ 5709, 0 },
	{ 6120, 255 },
	{ 6120, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00043228[] = {
	{ 12750, 255 },
	{ 12725, 1 },
	{ 11951, 255 },
	{ 11951, 0 },
	{ 11156, 255 },
	{ 11156, 0 },
	{ 10357, 255 },
	{ 10357, 0 },
	{ 9562, 255 },
	{ 9562, 0 },
	{ 8763, 255 },
	{ 8763, 0 },
	{ 7968, 255 },
	{ 7968, 0 },
	{ 7171, 255 },
	{ 7171, 0 },
	{ 6375, 255 },
	{ 6375, 0 },
	{ 5578, 255 },
	{ 5578, 0 },
	{ 4781, 255 },
	{ 4781, 0 },
	{ 3984, 255 },
	{ 3984, 0 },
	{ 3187, 255 },
	{ 3187, 0 },
	{ 2390, 255 },
	{ 2390, 0 },
	{ 1593, 255 },
	{ 1593, 0 },
	{ 796, 255 },
	{ 796, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000432B0[] = {
	{ 15178, 1 },
	{ 15178, 253 },
	{ 14463, 1 },
	{ 14463, 253 },
	{ 13507, 1 },
	{ 13507, 253 },
	{ 12550, 1 },
	{ 12550, 253 },
	{ 11594, 1 },
	{ 11594, 253 },
	{ 10638, 1 },
	{ 10638, 253 },
	{ 9682, 1 },
	{ 9682, 253 },
	{ 8725, 1 },
	{ 8725, 253 },
	{ 7769, 1 },
	{ 7769, 253 },
	{ 6813, 1 },
	{ 6813, 253 },
	{ 5857, 1 },
	{ 5857, 253 },
	{ 4900, 1 },
	{ 4900, 253 },
	{ 3942, 1 },
	{ 3942, 253 },
	{ 2986, 1 },
	{ 2986, 253 },
	{ 2032, 1 },
	{ 2032, 253 },
	{ 1075, 1 },
	{ 1075, 253 },
	{ 119, 1 },
	{ 119, 253 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00043338[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, polySTG12_00042890, NULL, NULL, NULL, uvSTG12_00042C38, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, polySTG12_000429AE, NULL, NULL, NULL, uvSTG12_00042E60, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, polySTG12_000429FC, NULL, NULL, NULL, uvSTG12_00042EF0, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, polySTG12_00042A44, NULL, NULL, NULL, uvSTG12_00042F78, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, polySTG12_00042A8A, NULL, NULL, NULL, uvSTG12_00043000, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, polySTG12_00042AD6, NULL, NULL, NULL, uvSTG12_00043090, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 1, polySTG12_00042B22, NULL, NULL, NULL, uvSTG12_00043120, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 1, polySTG12_00042B68, NULL, NULL, NULL, uvSTG12_000431A8, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 1, polySTG12_00042BAA, NULL, NULL, NULL, uvSTG12_00043228, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 1, polySTG12_00042BF0, NULL, NULL, NULL, uvSTG12_000432B0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00043428[] = {
	{ 191.157f, 140, -38.0235f },
	{ 191.157f, 100, -38.0235f },
	{ 191.157f, 140, 38.0235f },
	{ 191.157f, 100, 38.0235f },
	{ 162.0552f, 140, 108.2817f },
	{ 162.0552f, 99.99998f, 108.2817f },
	{ 108.2817f, 140, 162.0551f },
	{ 108.2817f, 99.99998f, 162.0551f },
	{ 38.0235f, 140, 191.157f },
	{ 38.0235f, 99.99998f, 191.157f },
	{ -38.0235f, 140, 191.157f },
	{ -38.0235f, 99.99998f, 191.157f },
	{ -108.2817f, 140, 162.0551f },
	{ -108.2817f, 99.99998f, 162.0551f },
	{ -162.0552f, 140, 108.2818f },
	{ -162.0552f, 100, 108.2818f },
	{ -191.157f, 140, 38.0235f },
	{ -191.157f, 100, 38.0235f },
	{ -191.157f, 140, -38.02344f },
	{ -191.157f, 100, -38.02344f },
	{ -162.0552f, 140, -108.2817f },
	{ -162.0552f, 100, -108.2817f },
	{ -108.2818f, 140, -162.0552f },
	{ -108.2818f, 100, -162.0552f },
	{ -38.0235f, 100, -191.157f },
	{ 38.0235f, 140, -191.157f },
	{ 38.0235f, 100, -191.157f },
	{ 108.2818f, 140, -162.0551f },
	{ 108.2818f, 100, -162.0551f },
	{ 162.0552f, 140, -108.2817f },
	{ 162.0552f, 100, -108.2817f },
	{ 191.157f, 90, -38.0235f },
	{ 191.157f, 90, 38.0235f },
	{ 162.0552f, 89.99998f, 108.2817f },
	{ 108.2817f, 89.99998f, 162.0551f },
	{ 38.0235f, 89.99998f, 191.157f },
	{ -38.0235f, 89.99998f, 191.157f },
	{ -108.2817f, 89.99998f, 162.0551f },
	{ -162.0552f, 90, 108.2818f },
	{ -191.157f, 90, 38.0235f },
	{ -191.157f, 90, -38.02344f },
	{ -162.0552f, 90.00001f, -108.2817f },
	{ -108.2818f, 90.00001f, -162.0552f },
	{ -38.0235f, 90.00001f, -191.157f },
	{ 38.0235f, 90.00001f, -191.157f },
	{ 108.2818f, 90.00001f, -162.0551f },
	{ 162.0552f, 90, -108.2817f },
	{ 173.9529f, 190, -34.60139f },
	{ 173.9529f, 190, 34.60139f },
	{ 147.4703f, 190, 98.53638f },
	{ 98.53638f, 190, 147.4702f },
	{ 34.60139f, 190, 173.9529f },
	{ -34.60139f, 190, 173.9529f },
	{ -98.53638f, 190, 147.4702f },
	{ -147.4703f, 190, 98.53645f },
	{ -173.9529f, 190, 34.60139f },
	{ -173.9529f, 190, -34.60133f },
	{ -147.4703f, 190, -98.53638f },
	{ -98.53644f, 190, -147.4703f },
	{ 34.60139f, 190, -173.9529f },
	{ 98.53644f, 190, -147.4702f },
	{ 147.4703f, 190, -98.53632f },
	{ 156.7487f, 152, -31.17928f },
	{ 156.7487f, 152, 31.17928f },
	{ 132.8853f, 152, 88.79102f },
	{ 88.79102f, 152, 132.8853f },
	{ 31.17928f, 152, 156.7487f },
	{ -31.17928f, 152, 156.7487f },
	{ -88.79102f, 152, 132.8853f },
	{ -132.8853f, 152, 88.79108f },
	{ -156.7487f, 152, 31.17928f },
	{ -156.7487f, 152, -31.17923f },
	{ -132.8853f, 152, -88.79102f },
	{ -88.79108f, 152, -132.8853f },
	{ 31.17928f, 152, -156.7487f },
	{ 88.79108f, 152, -132.8853f },
	{ 132.8853f, 152, -88.79095f },
	{ 156.7487f, 190, -31.17928f },
	{ 156.7487f, 190, 31.17928f },
	{ 132.8853f, 190, 88.79102f },
	{ 88.79102f, 190, 132.8853f },
	{ 31.17928f, 190, 156.7487f },
	{ -31.17928f, 190, 156.7487f },
	{ -88.79102f, 190, 132.8853f },
	{ -132.8853f, 190, 88.79108f },
	{ -156.7487f, 190, 31.17928f },
	{ -156.7487f, 190, -31.17923f },
	{ -132.8853f, 190, -88.79102f },
	{ -88.79108f, 190, -132.8853f },
	{ 31.17928f, 190, -156.7487f },
	{ 88.79108f, 190, -132.8853f },
	{ 132.8853f, 190, -88.79095f },
	{ 173.9529f, 142.5f, -34.60139f },
	{ 173.9529f, 142.5f, 34.60139f },
	{ 147.4702f, 142.5f, -98.53632f },
	{ 98.53644f, 142.5f, -147.4702f },
	{ 34.60139f, 142.5f, -173.9529f },
	{ -98.53644f, 142.5f, -147.4702f },
	{ -147.4702f, 142.5f, -98.53638f },
	{ -173.9529f, 142.5f, -34.60133f },
	{ -173.9529f, 142.5f, 34.60139f },
	{ -147.4702f, 142.5f, 98.53644f },
	{ -98.53638f, 142.5f, 147.4702f },
	{ -34.60139f, 142.5f, 173.9529f },
	{ 34.60139f, 142.5f, 173.9529f },
	{ 98.53638f, 142.5f, 147.4702f },
	{ 147.4702f, 142.5f, 98.53638f },
	{ 162.0552f, 131, -108.2817f },
	{ 108.2818f, 131, -162.0551f },
	{ 191.157f, 131, -38.0235f },
	{ 38.0235f, 131, -191.157f },
	{ -38.0235f, 131, -191.157f },
	{ -108.2818f, 131, -162.0552f },
	{ -162.0552f, 131, -108.2817f },
	{ -191.157f, 131, -38.02344f },
	{ -191.157f, 131, 38.0235f },
	{ -162.0552f, 131, 108.2818f },
	{ -108.2817f, 131, 162.0551f },
	{ -38.0235f, 131, 191.157f },
	{ 108.2817f, 131, 162.0551f },
	{ 162.0552f, 131, 108.2817f },
	{ 191.157f, 131, 38.0235f },
	{ 38.0235f, 131, 191.157f },
	{ 191.157f, 308, -38.0235f },
	{ 191.157f, 308, 38.0235f },
	{ 162.0552f, 308, 108.2817f },
	{ 108.2817f, 308, 162.0551f },
	{ 38.0235f, 308, 191.157f },
	{ -38.0235f, 308, 191.157f },
	{ -108.2817f, 308, 162.0551f },
	{ -162.0552f, 308, 108.2818f },
	{ -191.157f, 308, 38.0235f },
	{ -191.157f, 308, -38.02344f },
	{ -162.0552f, 308, -108.2817f },
	{ -108.2818f, 308, -162.0552f },
	{ 38.0235f, 308, -191.157f },
	{ 108.2818f, 308, -162.0551f },
	{ 162.0552f, 308, -108.2817f },
	{ 156.7487f, 308, -31.17928f },
	{ 156.7487f, 308, 31.17928f },
	{ 132.8853f, 308, 88.79102f },
	{ 88.79102f, 308, 132.8853f },
	{ 31.17928f, 308, 156.7487f },
	{ -31.17928f, 308, 156.7487f },
	{ -88.79102f, 308, 132.8853f },
	{ -132.8853f, 308, 88.79108f },
	{ -156.7487f, 308, 31.17928f },
	{ -156.7487f, 308, -31.17923f },
	{ -132.8853f, 308, -88.79102f },
	{ -88.79108f, 308, -132.8853f },
	{ 31.17928f, 308, -156.7487f },
	{ 88.79108f, 308, -132.8853f },
	{ 132.8853f, 308, -88.79095f },
	{ 156.7487f, 339, -31.17927f },
	{ 156.7487f, 339, 31.17927f },
	{ 132.8852f, 339, 88.79101f },
	{ 88.79101f, 339, 132.8852f },
	{ 31.17927f, 339, 156.7487f },
	{ -31.17927f, 339, 156.7487f },
	{ -88.79101f, 339, 132.8852f },
	{ -132.8852f, 339, 88.79108f },
	{ -156.7487f, 339, 31.17927f },
	{ -156.7487f, 339, -31.17921f },
	{ -132.8852f, 339, -88.79101f },
	{ -88.79108f, 339, -132.8852f },
	{ 31.17927f, 339, -156.7487f },
	{ 88.79108f, 339, -132.8852f },
	{ 132.8852f, 339, -88.79095f },
	{ 128.534f, 339, -25.56701f },
	{ 128.534f, 339, 25.56701f },
	{ 108.9659f, 339, 72.80865f },
	{ 72.80865f, 339, 108.9659f },
	{ 25.56701f, 339, 128.534f },
	{ -25.56701f, 339, 128.534f },
	{ -72.80865f, 339, 108.9659f },
	{ -108.9659f, 339, 72.80868f },
	{ -128.534f, 339, 25.56701f },
	{ -128.534f, 339, -25.56696f },
	{ -108.9659f, 339, -72.80865f },
	{ -72.80868f, 339, -108.9659f },
	{ 25.56701f, 339, -128.534f },
	{ 72.80868f, 339, -108.9659f },
	{ 108.9659f, 339, -72.80859f },
	{ -38.0235f, 140, -191.157f },
	{ -34.60139f, 190, -173.9529f },
	{ -31.17927f, 152, -156.7487f },
	{ -31.17927f, 190, -156.7487f },
	{ -34.60138f, 142.5f, -173.9529f },
	{ -38.0235f, 308, -191.157f },
	{ -31.17927f, 308, -156.7487f },
	{ -31.17926f, 339, -156.7487f },
	{ -25.56701f, 339, -128.534f },
	{ 68.12303f, 353, -13.55053f },
	{ 68.12303f, 353, 13.55053f },
	{ 57.75196f, 353, 38.58861f },
	{ 38.58861f, 353, 57.75195f },
	{ 13.55053f, 353, 68.12303f },
	{ -13.55053f, 353, 68.12303f },
	{ -38.58861f, 353, 57.75195f },
	{ -57.75196f, 353, 38.58861f },
	{ -68.12303f, 353, 13.55053f },
	{ -68.12303f, 353, -13.55048f },
	{ -57.75196f, 353, -38.58861f },
	{ -38.58861f, 353, -57.75196f },
	{ 13.55053f, 353, -68.12303f },
	{ 38.58861f, 353, -57.75195f },
	{ 57.75196f, 353, -38.58857f },
	{ -13.55053f, 353, -68.12305f },
	{ -191.157f, 190, -38.02344f },
	{ -162.0552f, 190, -108.2817f },
	{ -108.2818f, 190, -162.0552f },
	{ -38.0235f, 190, -191.157f },
	{ 38.0235f, 190, -191.157f },
	{ 108.2818f, 190, -162.0551f },
	{ 162.0552f, 190, -108.2817f },
	{ 191.157f, 190, -38.0235f },
	{ 191.157f, 190, 38.0235f },
	{ 162.0552f, 190, 108.2817f },
	{ 108.2817f, 190, 162.0551f },
	{ 38.0235f, 190, 191.157f },
	{ -38.0235f, 190, 191.157f },
	{ -108.2817f, 190, 162.0551f },
	{ -162.0552f, 190, 108.2818f },
	{ -191.157f, 190, 38.0235f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00043EA8[] = {
	{ -0.771401f, -0.617573f, 0.153441f },
	{ -0.980785f, 0, 0.19509f },
	{ -0.771401f, -0.617573f, -0.153441f },
	{ -0.980785f, 0, -0.19509f },
	{ -0.653962f, -0.617573f, -0.436963f },
	{ -0.83147f, 0, -0.5555699f },
	{ -0.436963f, -0.617573f, -0.653962f },
	{ -0.5555699f, 0, -0.83147f },
	{ -0.153441f, -0.617573f, -0.771401f },
	{ -0.19509f, 0, -0.980785f },
	{ 0.153441f, -0.617573f, -0.771401f },
	{ 0.19509f, 0, -0.980785f },
	{ 0.436963f, -0.617573f, -0.653962f },
	{ 0.5555699f, 0, -0.83147f },
	{ 0.653962f, -0.617573f, -0.436964f },
	{ 0.83147f, 0, -0.5555699f },
	{ 0.771401f, -0.617573f, -0.153441f },
	{ 0.980785f, 0, -0.19509f },
	{ 0.771401f, -0.617573f, 0.153441f },
	{ 0.980785f, 0, 0.19509f },
	{ 0.653962f, -0.617573f, 0.436963f },
	{ 0.83147f, 0, 0.5555699f },
	{ 0.436963f, -0.617573f, 0.653962f },
	{ 0.5555699f, 0, 0.83147f },
	{ 0.382683f, 0, 0.92388f },
	{ -0.201927f, -0.8127199f, 0.546545f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.436964f, -0.617573f, 0.653962f },
	{ -0.5555699f, 0, 0.83147f },
	{ -0.653962f, -0.617573f, 0.436963f },
	{ -0.83147f, 0, 0.5555699f },
	{ -0.980785f, 0, 0.19509f },
	{ -0.980785f, 0, -0.19509f },
	{ -0.83147f, 0, -0.5555699f },
	{ -0.5555699f, 0, -0.83147f },
	{ -0.19509f, 0, -0.980785f },
	{ 0.19509f, 0, -0.980785f },
	{ 0.5555699f, 0, -0.83147f },
	{ 0.83147f, 0, -0.5555699f },
	{ 0.980785f, 0, -0.19509f },
	{ 0.980785f, 0, 0.19509f },
	{ 0.83147f, 0, 0.5555699f },
	{ 0.5555699f, 0, 0.83147f },
	{ 0.382683f, 0, 0.92388f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.5555699f, 0, 0.831469f },
	{ -0.83147f, 0, 0.5555699f },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ -0.824332f, -0.541841f, 0.163969f },
	{ -0.824332f, -0.541841f, -0.163969f },
	{ -0.698835f, -0.541841f, -0.466946f },
	{ -0.466946f, -0.541841f, -0.698835f },
	{ -0.163969f, -0.541841f, -0.824332f },
	{ 0.163969f, -0.541841f, -0.824332f },
	{ 0.466945f, -0.541841f, -0.698835f },
	{ 0.698835f, -0.541841f, -0.466946f },
	{ 0.824332f, -0.541841f, -0.163969f },
	{ 0.824332f, -0.541841f, 0.163969f },
	{ 0.698835f, -0.541841f, 0.466945f },
	{ 0.466945f, -0.541841f, 0.698835f },
	{ -0.163969f, -0.541841f, 0.824332f },
	{ -0.466946f, -0.541841f, 0.698835f },
	{ -0.698835f, -0.541841f, 0.466945f },
	{ -0.980785f, 0, 0.19509f },
	{ -0.980785f, 0, -0.195089f },
	{ -0.83147f, 0, -0.5555699f },
	{ -0.5555699f, 0, -0.83147f },
	{ -0.19509f, 0, -0.980785f },
	{ 0.19509f, 0, -0.980785f },
	{ 0.555569f, 0, -0.83147f },
	{ 0.83147f, 0, -0.5555699f },
	{ 0.980786f, 0, -0.195089f },
	{ 0.980786f, 0, 0.195089f },
	{ 0.83147f, 0, 0.555569f },
	{ 0.555569f, 0, 0.83147f },
	{ -0.195089f, 0, 0.980786f },
	{ -0.5555699f, 0, 0.83147f },
	{ -0.83147f, 0, 0.555569f },
	{ -0.2878f, -0.955978f, 0.057247f },
	{ -0.2878f, -0.955978f, -0.057247f },
	{ -0.243985f, -0.955978f, 0.163026f },
	{ -0.163026f, -0.955978f, 0.243985f },
	{ -0.057247f, -0.955978f, 0.2878f },
	{ 0.163025f, -0.955978f, 0.243985f },
	{ 0.243985f, -0.955978f, 0.163025f },
	{ 0.2878f, -0.955978f, 0.057247f },
	{ 0.2878f, -0.955978f, -0.057247f },
	{ 0.243985f, -0.955978f, -0.163026f },
	{ 0.163026f, -0.955978f, -0.243986f },
	{ 0.057247f, -0.955978f, -0.2878f },
	{ -0.057247f, -0.955978f, -0.2878f },
	{ -0.163026f, -0.955978f, -0.243986f },
	{ -0.243985f, -0.955978f, -0.163026f },
	{ -0.83147f, 0, 0.5555699f },
	{ -0.5555699f, 0, 0.831469f },
	{ -0.980785f, 0, 0.19509f },
	{ -0.382683f, 0, 0.92388f },
	{ 0.382683f, 0, 0.92388f },
	{ 0.5555699f, 0, 0.83147f },
	{ 0.83147f, 0, 0.5555699f },
	{ 0.980785f, 0, 0.19509f },
	{ 0.980785f, 0, -0.19509f },
	{ 0.83147f, 0, -0.5555699f },
	{ 0.5555699f, 0, -0.83147f },
	{ 0.19509f, 0, -0.980785f },
	{ -0.5555699f, 0, -0.83147f },
	{ -0.83147f, 0, -0.5555699f },
	{ -0.980785f, 0, -0.19509f },
	{ -0.19509f, 0, -0.980785f },
	{ 0.901869f, 0.393002f, -0.179393f },
	{ 0.901869f, 0.393002f, 0.179393f },
	{ 0.764567f, 0.393002f, 0.510868f },
	{ 0.510868f, 0.393002f, 0.764568f },
	{ 0.179393f, 0.393002f, 0.901869f },
	{ -0.179393f, 0.393002f, 0.901869f },
	{ -0.510867f, 0.393002f, 0.764568f },
	{ -0.764567f, 0.393002f, 0.510868f },
	{ -0.901869f, 0.393002f, 0.179392f },
	{ -0.901869f, 0.393002f, -0.179392f },
	{ -0.764568f, 0.393002f, -0.510867f },
	{ -0.510868f, 0.393002f, -0.764568f },
	{ 0.179393f, 0.393002f, -0.901869f },
	{ 0.510868f, 0.393002f, -0.764567f },
	{ 0.764568f, 0.393002f, -0.510867f },
	{ -0.918463f, -0.350784f, 0.182693f },
	{ -0.918463f, -0.350784f, -0.182693f },
	{ -0.778635f, -0.350784f, -0.520267f },
	{ -0.520267f, -0.350784f, -0.778635f },
	{ -0.182693f, -0.350784f, -0.918463f },
	{ 0.182693f, -0.350784f, -0.918463f },
	{ 0.520266f, -0.350784f, -0.778636f },
	{ 0.778635f, -0.350784f, -0.520267f },
	{ 0.918463f, -0.350784f, -0.182693f },
	{ 0.918463f, -0.350784f, 0.182693f },
	{ 0.778636f, -0.350784f, 0.520266f },
	{ 0.520267f, -0.350784f, 0.778636f },
	{ -0.182693f, -0.350784f, 0.918463f },
	{ -0.520267f, -0.350784f, 0.778635f },
	{ -0.778636f, -0.350784f, 0.520266f },
	{ 0.443989f, 0.891669f, -0.088315f },
	{ 0.443989f, 0.89167f, 0.088315f },
	{ 0.376396f, 0.891669f, 0.2515f },
	{ 0.251499f, 0.891669f, 0.376396f },
	{ 0.088315f, 0.891669f, 0.443989f },
	{ -0.088315f, 0.891669f, 0.443989f },
	{ -0.251499f, 0.891669f, 0.376396f },
	{ -0.376396f, 0.891669f, 0.2515f },
	{ -0.443989f, 0.891669f, 0.088315f },
	{ -0.443989f, 0.891669f, -0.088315f },
	{ -0.376396f, 0.891669f, -0.251499f },
	{ -0.251499f, 0.891669f, -0.376396f },
	{ 0.088315f, 0.89167f, -0.443989f },
	{ 0.2515f, 0.891669f, -0.376396f },
	{ 0.376396f, 0.891669f, -0.251499f },
	{ -0.516116f, -0.8503439f, 0.102662f },
	{ -0.516116f, -0.8503439f, -0.102661f },
	{ -0.437542f, -0.8503439f, -0.292356f },
	{ -0.292356f, -0.8503439f, -0.437542f },
	{ -0.102662f, -0.8503439f, -0.516116f },
	{ 0.102661f, -0.8503439f, -0.516116f },
	{ 0.292356f, -0.8503439f, -0.437542f },
	{ 0.437542f, -0.8503439f, -0.292356f },
	{ 0.516116f, -0.8503439f, -0.102661f },
	{ 0.516116f, -0.8503439f, 0.102661f },
	{ 0.437542f, -0.8503439f, 0.292356f },
	{ 0.292356f, -0.8503439f, 0.437542f },
	{ -0.102662f, -0.8503439f, 0.516116f },
	{ -0.292356f, -0.8503439f, 0.437542f },
	{ -0.437542f, -0.8503439f, 0.292356f },
	{ 0.201927f, -0.8127199f, 0.546545f },
	{ 0, -1, 0 },
	{ 0.163969f, -0.541841f, 0.824332f },
	{ 0.195089f, 0, 0.980786f },
	{ 0.057247f, -0.955978f, 0.2878f },
	{ -0.179392f, 0.393002f, -0.901869f },
	{ 0.182693f, -0.350784f, 0.918463f },
	{ -0.088315f, 0.891669f, -0.443989f },
	{ 0.102661f, -0.8503439f, 0.516116f },
	{ -0.957788f, 0.215283f, 0.190515f },
	{ -0.957788f, 0.215283f, -0.190515f },
	{ -0.811973f, 0.215284f, -0.542542f },
	{ -0.542542f, 0.215285f, -0.811973f },
	{ -0.190514f, 0.215283f, -0.957788f },
	{ 0.190514f, 0.215283f, -0.957788f },
	{ 0.542542f, 0.215284f, -0.811973f },
	{ 0.811974f, 0.215284f, -0.542542f },
	{ 0.957788f, 0.215284f, -0.190515f },
	{ 0.957788f, 0.215284f, 0.190514f },
	{ 0.811974f, 0.215284f, 0.542542f },
	{ 0.542543f, 0.215284f, 0.811973f },
	{ -0.190515f, 0.215283f, 0.957788f },
	{ -0.542543f, 0.215284f, 0.811973f },
	{ -0.811974f, 0.215283f, 0.542542f },
	{ 0.190515f, 0.215284f, 0.957788f },
	{ -0.731865f, -0.665719f, -0.145577f },
	{ -0.620445f, -0.665719f, -0.414568f },
	{ -0.414568f, -0.665719f, -0.620445f },
	{ -0.145577f, -0.665719f, -0.731865f },
	{ 0.145577f, -0.665719f, -0.731865f },
	{ 0.414568f, -0.665719f, -0.620445f },
	{ 0.620445f, -0.665719f, -0.414568f },
	{ 0.731865f, -0.665719f, -0.145577f },
	{ 0.731865f, -0.665719f, 0.145577f },
	{ 0.620445f, -0.665719f, 0.414568f },
	{ 0.414568f, -0.665719f, 0.620445f },
	{ 0.145577f, -0.665719f, 0.731865f },
	{ -0.145577f, -0.665719f, 0.731865f },
	{ -0.414568f, -0.665719f, 0.620445f },
	{ -0.620445f, -0.665719f, 0.414568f },
	{ -0.731865f, -0.665719f, 0.145577f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00044928 = { vertexSTG12_00043428, normalSTG12_00043EA8, LengthOfArray(vertexSTG12_00043428), meshlistSTG12_00043338, matlistSTG12_000427C8, LengthOfArray(meshlistSTG12_00043338), LengthOfArray(matlistSTG12_000427C8),{ 0, 221.5f, 0 }, 270.3369f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00044950 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00044928, 750, -0.000109f, -650, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00044984[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 57, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 42, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 54, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00044A74[] = {
	34, 120, 135, 119, 134, 118, 133, 117, 132, 116, 131, 115, 130, 114, 129, 113, 144, 128, 143, 127, 142, 126, 141, 125, 140, 124, 139, 123, 138, 122, 137, 121, 136, 120, 135,
	4, 1, 64, 5, 9,
	4, 33, 64, 37, 49,
	0x8000u | 5, 41, 61, 64, 57, 1,
	0x8000u | 5, 21, 25, 64, 29, 33,
	5, 41, 45, 64, 53, 49,
	5, 21, 17, 64, 13, 9,
	34, 108, 93, 109, 94, 110, 95, 111, 96, 112, 81, 97, 82, 98, 83, 99, 84, 100, 85, 101, 86, 102, 87, 103, 88, 104, 89, 105, 90, 106, 91, 107, 92, 108, 93
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00044B44[] = {
	34, 18, 65, 22, 66, 26, 67, 30, 68, 34, 69, 38, 70, 42, 71, 46, 72, 50, 73, 54, 74, 58, 75, 62, 76, 2, 77, 6, 78, 10, 79, 14, 80, 18, 65
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00044B8A[] = {
	34, 113, 44, 114, 40, 115, 36, 116, 32, 117, 28, 118, 24, 119, 20, 120, 16, 121, 12, 122, 8, 123, 4, 124, 60, 125, 0, 126, 56, 127, 52, 128, 48, 113, 44,
	0x8000u | 34, 65, 3, 80, 63, 79, 59, 78, 55, 77, 51, 76, 47, 75, 43, 74, 39, 73, 35, 72, 31, 71, 27, 70, 23, 69, 19, 68, 15, 67, 11, 66, 7, 65, 3,
	34, 81, 18, 82, 22, 83, 26, 84, 30, 85, 34, 86, 38, 87, 42, 88, 46, 89, 50, 90, 54, 91, 58, 92, 62, 93, 2, 94, 6, 95, 10, 96, 14, 81, 18
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00044C5C[] = {
	34, 44, 97, 40, 98, 36, 99, 32, 100, 28, 101, 24, 102, 20, 103, 16, 104, 12, 105, 8, 106, 4, 107, 60, 108, 0, 109, 56, 110, 52, 111, 48, 112, 44, 97
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00044CA2[] = {
	0x8000u | 34, 37, 145, 49, 160, 53, 159, 45, 158, 41, 157, 61, 156, 57, 155, 1, 154, 5, 153, 9, 152, 13, 151, 17, 150, 21, 149, 25, 148, 29, 147, 33, 146, 37, 145
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00044CE8[] = {
	0x8000u | 34, 149, 181, 148, 180, 147, 179, 146, 178, 145, 177, 160, 192, 159, 191, 158, 190, 157, 189, 156, 188, 155, 187, 154, 186, 153, 185, 152, 184, 151, 183, 150, 182, 149, 181,
	0x8000u | 34, 165, 133, 164, 132, 163, 131, 162, 130, 161, 129, 176, 144, 175, 143, 174, 142, 173, 141, 172, 140, 171, 139, 170, 138, 169, 137, 168, 136, 167, 135, 166, 134, 165, 133,
	0x8000u | 34, 181, 165, 180, 164, 179, 163, 178, 162, 177, 161, 192, 176, 191, 175, 190, 174, 189, 173, 188, 172, 187, 171, 186, 170, 185, 169, 184, 168, 183, 167, 182, 166, 181, 165
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00044DBC[] = {
	{ 183, -394 },
	{ 532, -356 },
	{ 272, -180 },
	{ 609, -280 },
	{ 434, -17 },
	{ 709, -238 },
	{ 649, 71 },
	{ 819, -238 },
	{ 880, 71 },
	{ 920, -280 },
	{ 1092, -17 },
	{ 996, -356 },
	{ 1257, -180 },
	{ 1037, -456 },
	{ 1346, -394 },
	{ 1037, -561 },
	{ 1346, -625 },
	{ 996, -661 },
	{ 1257, -839 },
	{ 920, -737 },
	{ 1092, -1000 },
	{ 819, -780 },
	{ 880, -1091 },
	{ 709, -780 },
	{ 649, -1091 },
	{ 609, -737 },
	{ 434, -1000 },
	{ 532, -661 },
	{ 272, -839 },
	{ 490, -561 },
	{ 183, -625 },
	{ 490, -456 },
	{ 183, -394 },
	{ 532, -356 },
	{ 581, -629 },
	{ 765, -510 },
	{ 545, -552 },
	{ 545, -466 },
	{ 948, -388 },
	{ 765, -510 },
	{ 980, -466 },
	{ 980, -552 },
	{ 808, -724 },
	{ 721, -724 },
	{ 765, -510 },
	{ 641, -689 },
	{ 581, -629 },
	{ 721, -294 },
	{ 808, -294 },
	{ 765, -510 },
	{ 887, -328 },
	{ 948, -388 },
	{ 808, -724 },
	{ 887, -689 },
	{ 765, -510 },
	{ 948, -629 },
	{ 980, -552 },
	{ 721, -294 },
	{ 641, -328 },
	{ 765, -510 },
	{ 581, -388 },
	{ 545, -466 },
	{ 649, -1091 },
	{ 916, -1275 },
	{ 880, -1091 },
	{ 1196, -1156 },
	{ 1092, -1000 },
	{ 1411, -943 },
	{ 1257, -839 },
	{ 1530, -661 },
	{ 1346, -625 },
	{ 1530, -356 },
	{ 1346, -394 },
	{ 1411, -76 },
	{ 1257, -180 },
	{ 1196, 138 },
	{ 1092, -17 },
	{ 916, 255 },
	{ 880, 71 },
	{ 612, 255 },
	{ 649, 71 },
	{ 330, 138 },
	{ 434, -17 },
	{ 116, -76 },
	{ 272, -180 },
	{ 0, -356 },
	{ 183, -394 },
	{ 0, -661 },
	{ 183, -625 },
	{ 116, -943 },
	{ 272, -839 },
	{ 330, -1156 },
	{ 434, -1000 },
	{ 612, -1275 },
	{ 649, -1091 },
	{ 916, -1275 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00044F3C[] = {
	{ 0, -255 },
	{ 0, 254 },
	{ 254, -255 },
	{ 254, 254 },
	{ 510, -255 },
	{ 510, 254 },
	{ 768, -255 },
	{ 768, 254 },
	{ 1026, -255 },
	{ 1026, 254 },
	{ 1282, -255 },
	{ 1282, 254 },
	{ 1538, -255 },
	{ 1538, 254 },
	{ 1792, -255 },
	{ 1792, 254 },
	{ 2048, -255 },
	{ 2048, 254 },
	{ 2300, -255 },
	{ 2300, 254 },
	{ 2558, -255 },
	{ 2558, 254 },
	{ 2816, -255 },
	{ 2816, 254 },
	{ 3074, -255 },
	{ 3074, 254 },
	{ 3330, -255 },
	{ 3330, 254 },
	{ 3586, -255 },
	{ 3586, 254 },
	{ 3840, -255 },
	{ 3840, 254 },
	{ 4080, -255 },
	{ 4080, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00044FC4[] = {
	{ 0 },
	{ 0, 255 },
	{ 633, 0 },
	{ 633, 255 },
	{ 1275, 0 },
	{ 1275, 255 },
	{ 1920, 0 },
	{ 1920, 255 },
	{ 2565, 0 },
	{ 2565, 255 },
	{ 3209, 0 },
	{ 3209, 255 },
	{ 3851, 0 },
	{ 3851, 255 },
	{ 4486, 0 },
	{ 4486, 255 },
	{ 5120, 0 },
	{ 5120, 255 },
	{ 5755, 0 },
	{ 5755, 255 },
	{ 6395, 0 },
	{ 6395, 255 },
	{ 7040, 0 },
	{ 7040, 255 },
	{ 7685, 0 },
	{ 7685, 255 },
	{ 8331, 0 },
	{ 8331, 255 },
	{ 8971, 0 },
	{ 8971, 255 },
	{ 9607, 0 },
	{ 9607, 255 },
	{ 10200, 0 },
	{ 10200, 255 },
	{ 10200, 0 },
	{ 10201, 255 },
	{ 9607, 0 },
	{ 9604, 255 },
	{ 8971, 0 },
	{ 8963, 255 },
	{ 8331, 0 },
	{ 8323, 255 },
	{ 7685, 0 },
	{ 7681, 255 },
	{ 7040, 0 },
	{ 7043, 255 },
	{ 6395, 0 },
	{ 6403, 255 },
	{ 5755, 0 },
	{ 5763, 255 },
	{ 5120, 0 },
	{ 5123, 255 },
	{ 4486, 0 },
	{ 4483, 255 },
	{ 3851, 0 },
	{ 3841, 255 },
	{ 3209, 0 },
	{ 3203, 255 },
	{ 2565, 0 },
	{ 2563, 255 },
	{ 1920, 0 },
	{ 1921, 255 },
	{ 1275, 0 },
	{ 1282, 255 },
	{ 633, 0 },
	{ 641, 255 },
	{ 0 },
	{ 3, 255 },
	{ 0 },
	{ 0, 255 },
	{ 633, 0 },
	{ 633, 255 },
	{ 1275, 0 },
	{ 1275, 255 },
	{ 1920, 0 },
	{ 1920, 255 },
	{ 2565, 0 },
	{ 2565, 255 },
	{ 3209, 0 },
	{ 3209, 255 },
	{ 3851, 0 },
	{ 3851, 255 },
	{ 4486, 0 },
	{ 4486, 255 },
	{ 5120, 0 },
	{ 5120, 255 },
	{ 5755, 0 },
	{ 5755, 255 },
	{ 6395, 0 },
	{ 6395, 255 },
	{ 7040, 0 },
	{ 7040, 255 },
	{ 7685, 0 },
	{ 7685, 255 },
	{ 8331, 0 },
	{ 8331, 255 },
	{ 8971, 0 },
	{ 8971, 255 },
	{ 9607, 0 },
	{ 9607, 255 },
	{ 10200, 0 },
	{ 10200, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0004515C[] = {
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 768, 0 },
	{ 768, 255 },
	{ 1026, 0 },
	{ 1026, 255 },
	{ 1282, 0 },
	{ 1282, 255 },
	{ 1538, 0 },
	{ 1538, 255 },
	{ 1792, 0 },
	{ 1792, 255 },
	{ 2048, 0 },
	{ 2048, 255 },
	{ 2300, 0 },
	{ 2300, 255 },
	{ 2558, 0 },
	{ 2558, 255 },
	{ 2816, 0 },
	{ 2816, 255 },
	{ 3074, 0 },
	{ 3074, 255 },
	{ 3330, 0 },
	{ 3330, 255 },
	{ 3586, 0 },
	{ 3586, 255 },
	{ 3840, 0 },
	{ 3840, 255 },
	{ 4080, 0 },
	{ 4080, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000451E4[] = {
	{ 6120, 255 },
	{ 6120, 0 },
	{ 5769, 255 },
	{ 5769, 0 },
	{ 5389, 255 },
	{ 5389, 0 },
	{ 5005, 255 },
	{ 5005, 0 },
	{ 4617, 255 },
	{ 4617, 0 },
	{ 4224, 255 },
	{ 4224, 0 },
	{ 3833, 255 },
	{ 3833, 0 },
	{ 3447, 255 },
	{ 3447, 0 },
	{ 3072, 255 },
	{ 3072, 0 },
	{ 2695, 255 },
	{ 2695, 0 },
	{ 2319, 255 },
	{ 2319, 0 },
	{ 1935, 255 },
	{ 1935, 0 },
	{ 1545, 255 },
	{ 1545, 0 },
	{ 1149, 255 },
	{ 1149, 0 },
	{ 761, 255 },
	{ 761, 0 },
	{ 376, 255 },
	{ 376, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0004526C[] = {
	{ 253, -3793 },
	{ 177, -3793 },
	{ 255, -3566 },
	{ 176, -3566 },
	{ 255, -3309 },
	{ 176, -3309 },
	{ 255, -3054 },
	{ 177, -3054 },
	{ 255, -2801 },
	{ 177, -2801 },
	{ 255, -2550 },
	{ 177, -2550 },
	{ 255, -2295 },
	{ 177, -2295 },
	{ 255, -2040 },
	{ 176, -2040 },
	{ 255, -1785 },
	{ 176, -1785 },
	{ 255, -1524 },
	{ 176, -1524 },
	{ 255, -1267 },
	{ 176, -1267 },
	{ 255, -1012 },
	{ 177, -1012 },
	{ 255, -761 },
	{ 177, -761 },
	{ 255, -510 },
	{ 177, -510 },
	{ 255, -256 },
	{ 177, -256 },
	{ 255, -2 },
	{ 176, -2 },
	{ 253, 223 },
	{ 177, 223 },
	{ 77, -3793 },
	{ 1, -3793 },
	{ 78, -3566 },
	{ 0, -3566 },
	{ 78, -3309 },
	{ 0, -3309 },
	{ 77, -3054 },
	{ 0, -3054 },
	{ 77, -2801 },
	{ 0, -2801 },
	{ 77, -2550 },
	{ 0, -2550 },
	{ 77, -2295 },
	{ 0, -2295 },
	{ 78, -2040 },
	{ 0, -2040 },
	{ 78, -1785 },
	{ 0, -1785 },
	{ 78, -1524 },
	{ 0, -1524 },
	{ 78, -1267 },
	{ 0, -1267 },
	{ 77, -1012 },
	{ 0, -1012 },
	{ 77, -761 },
	{ 0, -761 },
	{ 77, -510 },
	{ 0, -510 },
	{ 77, -256 },
	{ 0, -256 },
	{ 78, -2 },
	{ 0, -2 },
	{ 77, 223 },
	{ 1, 223 },
	{ 177, -3793 },
	{ 77, -3793 },
	{ 176, -3566 },
	{ 78, -3566 },
	{ 176, -3309 },
	{ 78, -3309 },
	{ 177, -3054 },
	{ 77, -3054 },
	{ 177, -2801 },
	{ 77, -2801 },
	{ 177, -2550 },
	{ 77, -2550 },
	{ 177, -2295 },
	{ 77, -2295 },
	{ 176, -2040 },
	{ 78, -2040 },
	{ 176, -1785 },
	{ 78, -1785 },
	{ 176, -1524 },
	{ 78, -1524 },
	{ 176, -1267 },
	{ 78, -1267 },
	{ 177, -1012 },
	{ 77, -1012 },
	{ 177, -761 },
	{ 77, -761 },
	{ 177, -510 },
	{ 77, -510 },
	{ 177, -256 },
	{ 77, -256 },
	{ 176, -2 },
	{ 78, -2 },
	{ 177, 223 },
	{ 77, 223 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00045404[] = {
	{ NJD_MESHSET_TRIMESH | 0, 8, polySTG12_00044A74, NULL, NULL, NULL, uvSTG12_00044DBC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, polySTG12_00044B44, NULL, NULL, NULL, uvSTG12_00044F3C, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 3, polySTG12_00044B8A, NULL, NULL, NULL, uvSTG12_00044FC4, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 1, polySTG12_00044C5C, NULL, NULL, NULL, uvSTG12_0004515C, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 1, polySTG12_00044CA2, NULL, NULL, NULL, uvSTG12_000451E4, NULL },
	{ NJD_MESHSET_TRIMESH | 11, 3, polySTG12_00044CE8, NULL, NULL, NULL, uvSTG12_0004526C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00045494[] = {
	{ 11.66283f, -5.000214f, 58.01563f },
	{ -18.55426f, -5.000214f, 12.10346f },
	{ 15.34582f, -30.00021f, 76.33633f },
	{ 81.20898f, -80.00021f, -16.15356f },
	{ -33.21285f, -5.000214f, 49.18331f },
	{ -21.88621f, -5.000214f, 4.250153f },
	{ 43.70117f, -30.00021f, 64.71481f },
	{ 68.84563f, -80.00021f, -46.00134f },
	{ -49.70659f, -5.000214f, 32.86319f },
	{ -21.88621f, -5.000214f, -4.250202f },
	{ 65.40343f, -30.00021f, 43.24097f },
	{ 46.00122f, -80.00021f, -68.84582f },
	{ -58.63292f, -5.000214f, 11.53998f },
	{ -18.55426f, -5.000214f, -12.10352f },
	{ 77.14855f, -30.00021f, 15.18412f },
	{ 16.15344f, -80.00021f, -81.2091f },
	{ -58.63292f, -5.000214f, -11.54011f },
	{ -12.39755f, -5.000214f, -18.11416f },
	{ 77.14855f, -30.00021f, -15.18435f },
	{ -16.1535f, -80.00021f, -81.2091f },
	{ -49.70663f, -5.000214f, -32.86338f },
	{ -4.353446f, -5.000214f, -21.3671f },
	{ 65.40339f, -30.00021f, -43.24126f },
	{ -46.00122f, -80.00021f, -68.84576f },
	{ -33.21289f, -5.000214f, -49.18343f },
	{ 4.353431f, -5.000214f, -21.3671f },
	{ 43.70117f, -30.00021f, -64.71507f },
	{ -68.8457f, -80.00021f, -46.00134f },
	{ -11.66283f, -5.000214f, -58.0158f },
	{ 12.39755f, -5.000214f, -18.11418f },
	{ 15.34577f, -30.00021f, -76.33659f },
	{ -81.20898f, -80.00021f, -16.15356f },
	{ 11.66279f, -5.000214f, -58.0158f },
	{ 18.55426f, -5.000214f, -12.10352f },
	{ -15.34582f, -30.00021f, -76.33659f },
	{ -81.20898f, -80.00021f, 16.15338f },
	{ 33.21289f, -5.000214f, -49.18347f },
	{ 21.88621f, -5.000214f, -4.250202f },
	{ -43.70117f, -30.00021f, -64.71501f },
	{ -68.84563f, -80.00021f, 46.0011f },
	{ 49.70659f, -5.000214f, -32.86338f },
	{ 4.353446f, -5.000214f, 21.36704f },
	{ -65.40343f, -30.00021f, -43.24126f },
	{ -46.00116f, -80.00021f, 68.84557f },
	{ 58.63292f, -5.000214f, -11.54011f },
	{ 12.39755f, -5.000214f, 18.11411f },
	{ -77.14855f, -30.00021f, -15.18435f },
	{ -16.15344f, -80.00021f, 81.20885f },
	{ 58.63292f, -5.000214f, 11.53993f },
	{ 21.88621f, -5.000214f, 4.250141f },
	{ -77.14855f, -30.00021f, 15.18418f },
	{ 16.1535f, -80.00021f, 81.20885f },
	{ 49.70663f, -5.000214f, 32.86314f },
	{ 18.55426f, -5.000214f, 12.10345f },
	{ -65.40339f, -30.00021f, 43.24104f },
	{ 46.00122f, -80.00021f, 68.84551f },
	{ 33.21289f, -5.000214f, 49.18325f },
	{ -12.39754f, -5.000214f, 18.11412f },
	{ -43.70111f, -30.00021f, 64.71485f },
	{ 68.8457f, -80.00021f, 46.00104f },
	{ -11.66279f, -5.000214f, 58.01563f },
	{ -4.353431f, -5.000214f, 21.36704f },
	{ -15.34577f, -30.00021f, 76.33633f },
	{ 81.20898f, -80.00021f, 16.15332f },
	{ 0, -5.000214f, -0.00032f },
	{ 77.14855f, -70.00021f, -15.18435f },
	{ 65.40339f, -70.00021f, -43.24126f },
	{ 43.70117f, -70.00021f, -64.71507f },
	{ 15.34577f, -70.00021f, -76.33659f },
	{ -15.34582f, -70.00021f, -76.33659f },
	{ -43.70117f, -70.00021f, -64.71501f },
	{ -65.40343f, -70.00021f, -43.24126f },
	{ -77.14855f, -70.00021f, -15.18435f },
	{ -77.14855f, -70.00021f, 15.18418f },
	{ -65.40339f, -70.00021f, 43.24104f },
	{ -43.70111f, -70.00021f, 64.71485f },
	{ -15.34577f, -70.00021f, 76.33633f },
	{ 15.34582f, -70.00021f, 76.33633f },
	{ 43.70117f, -70.00021f, 64.71481f },
	{ 65.40343f, -70.00021f, 43.24097f },
	{ 77.14855f, -70.00021f, 15.18412f },
	{ 77.14855f, -20.00021f, -15.18435f },
	{ 65.40339f, -20.00021f, -43.24126f },
	{ 43.70117f, -20.00021f, -64.71507f },
	{ 15.34577f, -20.00021f, -76.33659f },
	{ -15.34582f, -20.00021f, -76.33659f },
	{ -43.70117f, -20.00021f, -64.71501f },
	{ -65.40343f, -20.00021f, -43.24126f },
	{ -77.14855f, -20.00021f, -15.18435f },
	{ -77.14855f, -20.00021f, 15.18418f },
	{ -65.40339f, -20.00021f, 43.24104f },
	{ -43.70111f, -20.00021f, 64.71485f },
	{ -15.34577f, -20.00021f, 76.33633f },
	{ 15.34582f, -20.00021f, 76.33633f },
	{ 43.70117f, -20.00021f, 64.71481f },
	{ 65.40343f, -20.00021f, 43.24097f },
	{ 77.14855f, -20.00021f, 15.18412f },
	{ 58.63292f, -18.00021f, -11.54011f },
	{ 49.70659f, -18.00021f, -32.86338f },
	{ 33.21289f, -18.00021f, -49.18347f },
	{ 11.66279f, -18.00021f, -58.0158f },
	{ -11.66283f, -18.00021f, -58.0158f },
	{ -33.21289f, -18.00021f, -49.18343f },
	{ -49.70663f, -18.00021f, -32.86338f },
	{ -58.63292f, -18.00021f, -11.54011f },
	{ -58.63292f, -18.00021f, 11.53998f },
	{ -49.70659f, -18.00021f, 32.86319f },
	{ -33.21285f, -18.00021f, 49.18331f },
	{ -11.66279f, -18.00021f, 58.01563f },
	{ 11.66283f, -18.00021f, 58.01563f },
	{ 33.21289f, -18.00021f, 49.18325f },
	{ 49.70663f, -18.00021f, 32.86314f },
	{ 58.63292f, -18.00021f, 11.53993f },
	{ 58.63292f, 1.999786f, -11.54011f },
	{ 49.70659f, 1.999786f, -32.86338f },
	{ 33.21289f, 1.999786f, -49.18347f },
	{ 11.66279f, 1.999786f, -58.0158f },
	{ -11.66283f, 1.999786f, -58.0158f },
	{ -33.21289f, 1.999786f, -49.18343f },
	{ -49.70663f, 1.999786f, -32.86338f },
	{ -58.63292f, 1.999786f, -11.54011f },
	{ -58.63292f, 1.999786f, 11.53998f },
	{ -49.70659f, 1.999786f, 32.86319f },
	{ -33.21285f, 1.999786f, 49.18331f },
	{ -11.66279f, 1.999786f, 58.01563f },
	{ 11.66283f, 1.999786f, 58.01563f },
	{ 33.21289f, 1.999786f, 49.18325f },
	{ 49.70663f, 1.999786f, 32.86314f },
	{ 58.63292f, 1.999786f, 11.53993f },
	{ 27.70406f, 1.999786f, -5.380004f },
	{ 23.48639f, 1.999786f, -15.32091f },
	{ 15.6931f, 1.999786f, -22.92935f },
	{ 5.510671f, 1.999786f, -27.04696f },
	{ -5.510691f, 1.999786f, -27.04696f },
	{ -15.6931f, 1.999786f, -22.92933f },
	{ -23.4864f, 1.999786f, -15.32091f },
	{ -27.70406f, 1.999786f, -5.380004f },
	{ -27.70406f, 1.999786f, 5.379941f },
	{ -23.48639f, 1.999786f, 15.32083f },
	{ -15.69308f, 1.999786f, 22.92927f },
	{ -5.510671f, 1.999786f, 27.0469f },
	{ 5.510691f, 1.999786f, 27.0469f },
	{ 15.6931f, 1.999786f, 22.92924f },
	{ 23.4864f, 1.999786f, 15.32081f },
	{ 27.70406f, 1.999786f, 5.379923f },
	{ 21.88621f, 1.999786f, -4.250202f },
	{ 18.55426f, 1.999786f, -12.10352f },
	{ 12.39755f, 1.999786f, -18.11418f },
	{ 4.353431f, 1.999786f, -21.3671f },
	{ -4.353446f, 1.999786f, -21.3671f },
	{ -12.39755f, 1.999786f, -18.11416f },
	{ -18.55426f, 1.999786f, -12.10352f },
	{ -21.88621f, 1.999786f, -4.250202f },
	{ -21.88621f, 1.999786f, 4.250153f },
	{ -18.55426f, 1.999786f, 12.10346f },
	{ -12.39754f, 1.999786f, 18.11412f },
	{ -4.353431f, 1.999786f, 21.36704f },
	{ 4.353446f, 1.999786f, 21.36704f },
	{ 12.39755f, 1.999786f, 18.11411f },
	{ 18.55426f, 1.999786f, 12.10345f },
	{ 21.88621f, 1.999786f, 4.250141f },
	{ 27.70406f, 6.599785f, -5.380004f },
	{ 23.48639f, 6.599785f, -15.32091f },
	{ 15.6931f, 6.599785f, -22.92935f },
	{ 5.510671f, 6.599785f, -27.04696f },
	{ -5.510691f, 6.599785f, -27.04696f },
	{ -15.6931f, 6.599785f, -22.92933f },
	{ -23.4864f, 6.599785f, -15.32091f },
	{ -27.70406f, 6.599785f, -5.380004f },
	{ -27.70406f, 6.599785f, 5.379941f },
	{ -23.48639f, 6.599785f, 15.32083f },
	{ -15.69308f, 6.599785f, 22.92927f },
	{ -5.510671f, 6.599785f, 27.0469f },
	{ 5.510691f, 6.599785f, 27.0469f },
	{ 15.6931f, 6.599785f, 22.92924f },
	{ 23.4864f, 6.599785f, 15.32081f },
	{ 27.70406f, 6.599785f, 5.379923f },
	{ 21.88621f, 6.599785f, -4.250202f },
	{ 18.55426f, 6.599785f, -12.10352f },
	{ 12.39755f, 6.599785f, -18.11418f },
	{ 4.353431f, 6.599785f, -21.3671f },
	{ -4.353446f, 6.599785f, -21.3671f },
	{ -12.39755f, 6.599785f, -18.11416f },
	{ -18.55426f, 6.599785f, -12.10352f },
	{ -21.88621f, 6.599785f, -4.250202f },
	{ -21.88621f, 6.599785f, 4.250153f },
	{ -18.55426f, 6.599785f, 12.10346f },
	{ -12.39754f, 6.599785f, 18.11412f },
	{ -4.353431f, 6.599785f, 21.36704f },
	{ 4.353446f, 6.599785f, 21.36704f },
	{ 12.39755f, 6.599785f, 18.11411f },
	{ 18.55426f, 6.599785f, 12.10345f },
	{ 21.88621f, 6.599785f, 4.250141f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00045DA0[] = {
	{ 0.193262f, 0, 0.981147f },
	{ 0.616399f, 0.665381f, -0.421094f },
	{ 0.193262f, 0, 0.981147f },
	{ 0.902827f, 0.389753f, -0.18165f },
	{ -0.551815f, 0, 0.833967f },
	{ 0.731966f, 0.6648819f, -0.148855f },
	{ 0.551815f, 0, 0.833966f },
	{ 0.7558179f, 0.409135f, -0.5112219f },
	{ -0.828948f, 0, 0.559326f },
	{ 0.731966f, 0.6648819f, 0.148855f },
	{ 0.828949f, 0, 0.559325f },
	{ 0.497027f, 0.430924f, -0.753172f },
	{ -0.980417f, 0, 0.196932f },
	{ 0.616399f, 0.665381f, 0.421094f },
	{ 0.980417f, 0, 0.196931f },
	{ 0.172698f, 0.442678f, -0.8798929f },
	{ -0.980417f, 0, -0.19693f },
	{ 0.40804f, 0.666071f, 0.624382f },
	{ 0.980417f, 0, -0.196931f },
	{ -0.173503f, 0.438376f, -0.8818859f },
	{ -0.828948f, 0, -0.559325f },
	{ 0.142355f, 0.666545f, 0.731746f },
	{ 0.828949f, 0, -0.559325f },
	{ -0.499917f, 0.420245f, -0.757283f },
	{ -0.551815f, 0, -0.833967f },
	{ -0.142354f, 0.666545f, 0.731746f },
	{ 0.551815f, 0, -0.833966f },
	{ -0.7597719f, 0.398032f, -0.514118f },
	{ -0.193262f, 0, -0.981147f },
	{ -0.40804f, 0.66607f, 0.624383f },
	{ 0.193261f, 0, -0.981147f },
	{ -0.9046969f, 0.385027f, -0.18242f },
	{ 0.193261f, 0, -0.981147f },
	{ -0.616399f, 0.665381f, 0.421093f },
	{ -0.193263f, 0, -0.981147f },
	{ -0.902827f, 0.389753f, 0.181651f },
	{ 0.551815f, 0, -0.833967f },
	{ -0.731966f, 0.6648819f, 0.148855f },
	{ -0.551815f, 0, -0.833966f },
	{ -0.7558179f, 0.409134f, 0.511223f },
	{ 0.828948f, 0, -0.559325f },
	{ -0.142355f, 0.666545f, -0.731746f },
	{ -0.828948f, 0, -0.559325f },
	{ -0.497027f, 0.430923f, 0.753173f },
	{ 0.980417f, 0, -0.196931f },
	{ -0.40804f, 0.66607f, -0.624382f },
	{ -0.980417f, 0, -0.19693f },
	{ -0.172698f, 0.442678f, 0.8798929f },
	{ 0.980417f, 0, 0.196931f },
	{ -0.731966f, 0.6648819f, -0.148855f },
	{ -0.980417f, 0, 0.196932f },
	{ 0.173503f, 0.438375f, 0.8818859f },
	{ 0.828948f, 0, 0.559325f },
	{ -0.616399f, 0.665381f, -0.421093f },
	{ -0.828948f, 0, 0.559326f },
	{ 0.499918f, 0.420243f, 0.757283f },
	{ 0.551815f, 0, 0.833966f },
	{ 0.40804f, 0.66607f, -0.624383f },
	{ -0.551815f, 0, 0.833967f },
	{ 0.759773f, 0.398031f, 0.514118f },
	{ -0.193261f, 0, 0.981147f },
	{ 0.142354f, 0.666545f, -0.731746f },
	{ -0.193261f, 0, 0.981147f },
	{ 0.904698f, 0.385026f, 0.18242f },
	{ 0, 1, 0 },
	{ 0.960154f, 0.203773f, -0.191261f },
	{ 0.811658f, 0.214369f, -0.543375f },
	{ 0.540284f, 0.226744f, -0.810358f },
	{ 0.189193f, 0.233693f, -0.953726f },
	{ -0.189519f, 0.231241f, -0.954259f },
	{ -0.541118f, 0.22076f, -0.811453f },
	{ -0.8127f, 0.208304f, -0.544177f },
	{ -0.960629f, 0.201238f, -0.191559f },
	{ -0.960154f, 0.203773f, 0.191262f },
	{ -0.811658f, 0.214368f, 0.543376f },
	{ -0.540283f, 0.226744f, 0.8103589f },
	{ -0.189193f, 0.233694f, 0.953726f },
	{ 0.189519f, 0.23124f, 0.954259f },
	{ 0.541119f, 0.220759f, 0.811453f },
	{ 0.8127f, 0.208303f, 0.544177f },
	{ 0.960629f, 0.201238f, 0.19156f },
	{ 0.761618f, 0.629716f, -0.152954f },
	{ 0.643919f, 0.629815f, -0.434398f },
	{ 0.428614f, 0.6299509f, -0.647651f },
	{ 0.150106f, 0.630045f, -0.7619129f },
	{ -0.150107f, 0.630045f, -0.7619129f },
	{ -0.428614f, 0.6299509f, -0.647651f },
	{ -0.643919f, 0.629815f, -0.434399f },
	{ -0.761618f, 0.629716f, -0.152954f },
	{ -0.761618f, 0.629716f, 0.152955f },
	{ -0.643919f, 0.629815f, 0.434399f },
	{ -0.428614f, 0.6299509f, 0.647652f },
	{ -0.150106f, 0.630045f, 0.7619129f },
	{ 0.150106f, 0.630045f, 0.7619129f },
	{ 0.428614f, 0.6299509f, 0.647651f },
	{ 0.643919f, 0.629815f, 0.434398f },
	{ 0.761618f, 0.629716f, 0.152954f },
	{ 0.686986f, 0.713439f, -0.138037f },
	{ 0.581122f, 0.713055f, -0.392237f },
	{ 0.387094f, 0.712517f, -0.585216f },
	{ 0.135633f, 0.71214f, -0.6888109f },
	{ -0.135634f, 0.71214f, -0.68881f },
	{ -0.387094f, 0.712516f, -0.585217f },
	{ -0.581122f, 0.713055f, -0.392237f },
	{ -0.686987f, 0.713439f, -0.138037f },
	{ -0.686986f, 0.713439f, 0.138037f },
	{ -0.581122f, 0.713055f, 0.392238f },
	{ -0.387094f, 0.712517f, 0.585217f },
	{ -0.135633f, 0.71214f, 0.6888109f },
	{ 0.135634f, 0.71214f, 0.68881f },
	{ 0.387094f, 0.712516f, 0.585216f },
	{ 0.581122f, 0.713055f, 0.392237f },
	{ 0.686986f, 0.713439f, 0.138037f },
	{ 0.7319109f, 0.665351f, -0.147015f },
	{ 0.618675f, 0.665568f, -0.417445f },
	{ 0.41169f, 0.665872f, -0.622194f },
	{ 0.144149f, 0.6660849f, -0.731814f },
	{ -0.14415f, 0.666084f, -0.731815f },
	{ -0.41169f, 0.665872f, -0.622194f },
	{ -0.618675f, 0.665568f, -0.417445f },
	{ -0.7319109f, 0.665351f, -0.147015f },
	{ -0.7319109f, 0.665351f, 0.147015f },
	{ -0.618674f, 0.665568f, 0.417445f },
	{ -0.41169f, 0.665872f, 0.622194f },
	{ -0.144149f, 0.6660849f, 0.731814f },
	{ 0.14415f, 0.666084f, 0.731815f },
	{ 0.411691f, 0.665872f, 0.622194f },
	{ 0.618675f, 0.665568f, 0.417445f },
	{ 0.7319109f, 0.665351f, 0.147015f },
	{ 0.64276f, 0.754833f, -0.130714f },
	{ 0.542205f, 0.754196f, -0.370408f },
	{ 0.35977f, 0.7533219f, -0.5505199f },
	{ 0.125717f, 0.75272f, -0.646226f },
	{ -0.125717f, 0.752721f, -0.646225f },
	{ -0.35977f, 0.753321f, -0.5505199f },
	{ -0.542204f, 0.7541969f, -0.370408f },
	{ -0.64276f, 0.754833f, -0.130714f },
	{ -0.64276f, 0.754834f, 0.130714f },
	{ -0.542204f, 0.754196f, 0.370408f },
	{ -0.359771f, 0.753321f, 0.5505199f },
	{ -0.125717f, 0.752721f, 0.646225f },
	{ 0.125718f, 0.752721f, 0.646225f },
	{ 0.359771f, 0.753321f, 0.5505199f },
	{ 0.542205f, 0.754196f, 0.370408f },
	{ 0.64276f, 0.754833f, 0.130714f },
	{ -0.979942f, 0, 0.199284f },
	{ -0.8257149f, 0, 0.564088f },
	{ -0.547052f, 0, 0.837099f },
	{ -0.19096f, 0, 0.981598f },
	{ 0.190961f, 0, 0.981598f },
	{ 0.547052f, 0, 0.837099f },
	{ 0.8257149f, 0, 0.564088f },
	{ 0.979942f, 0, 0.199284f },
	{ 0.979942f, 0, -0.199285f },
	{ 0.8257149f, 0, -0.564088f },
	{ 0.547052f, 0, -0.837099f },
	{ 0.190961f, 0, -0.981598f },
	{ -0.190961f, 0, -0.981598f },
	{ -0.547053f, 0, -0.8370979f },
	{ -0.8257149f, 0, -0.564088f },
	{ -0.979942f, 0, -0.199285f },
	{ 0.731966f, 0.6648819f, -0.148856f },
	{ 0.616399f, 0.665382f, -0.421093f },
	{ 0.40804f, 0.66607f, -0.624383f },
	{ 0.142354f, 0.666545f, -0.731746f },
	{ -0.142355f, 0.666545f, -0.731746f },
	{ -0.40804f, 0.666071f, -0.624382f },
	{ -0.616399f, 0.665381f, -0.421094f },
	{ -0.731966f, 0.6648819f, -0.148855f },
	{ -0.731966f, 0.6648819f, 0.148856f },
	{ -0.616399f, 0.665382f, 0.421094f },
	{ -0.40804f, 0.666071f, 0.624382f },
	{ -0.142355f, 0.666545f, 0.731746f },
	{ 0.142356f, 0.666545f, 0.731747f },
	{ 0.408041f, 0.666071f, 0.624382f },
	{ 0.616399f, 0.665382f, 0.421093f },
	{ 0.731966f, 0.6648819f, 0.148855f },
	{ -0.64276f, 0.754833f, 0.130714f },
	{ -0.542205f, 0.7541969f, 0.370407f },
	{ -0.35977f, 0.7533219f, 0.5505199f },
	{ -0.125717f, 0.75272f, 0.646226f },
	{ 0.125717f, 0.752721f, 0.646225f },
	{ 0.35977f, 0.753321f, 0.5505199f },
	{ 0.542204f, 0.7541969f, 0.370408f },
	{ 0.64276f, 0.754833f, 0.130714f },
	{ 0.64276f, 0.754833f, -0.130714f },
	{ 0.542204f, 0.7541969f, -0.370408f },
	{ 0.35977f, 0.753321f, -0.5505199f },
	{ 0.125717f, 0.752721f, -0.646225f },
	{ -0.125717f, 0.752721f, -0.646225f },
	{ -0.359771f, 0.753321f, -0.5505199f },
	{ -0.542205f, 0.754196f, -0.370407f },
	{ -0.64276f, 0.754833f, -0.130714f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_000466AC = { vertexSTG12_00045494, normalSTG12_00045DA0, LengthOfArray(vertexSTG12_00045494), meshlistSTG12_00045404, matlistSTG12_00044984, LengthOfArray(meshlistSTG12_00045404), LengthOfArray(matlistSTG12_00044984),{ 0, -36.70021f, -0.000122f }, 114.8468f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_000466D4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_000466AC, 750, -0.000109f, -650, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00046708[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 57, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 42, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 54, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000467F8[] = {
	32, 37, 32, 31, 27, 26, 22, 21, 17, 16, 12, 11, 7, 6, 2, 1, 77, 76, 72, 71, 67, 66, 62, 61, 57, 56, 52, 51, 47, 46, 42, 41, 36,
	4, 42, 37, 36, 31
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00046844[] = {
	0x8000u | 16, 84, 20, 85, 25, 86, 30, 87, 35, 88, 40, 89, 45, 90, 50, 91, 55,
	0x8000u | 8, 15, 83, 10, 82, 5, 81, 0, 80,
	0x8000u | 10, 0, 80, 75, 95, 70, 94, 65, 93, 60, 92
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0004688E[] = {
	0x8000u | 16, 105, 84, 107, 85, 109, 86, 111, 87, 113, 88, 115, 89, 117, 90, 119, 91,
	0x8000u | 8, 95, 127, 94, 125, 93, 123, 92, 121,
	0x8000u | 8, 97, 80, 99, 81, 101, 82, 103, 83
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000468D4[] = {
	8, 110, 140, 108, 141, 106, 142, 104, 143,
	8, 139, 112, 138, 114, 137, 116, 136, 118,
	8, 135, 120, 134, 122, 133, 124, 132, 126,
	8, 131, 96, 130, 98, 129, 100, 128, 102
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0004691C[] = {
	8, 97, 131, 99, 130, 101, 129, 103, 128,
	4, 140, 110, 139, 112,
	8, 132, 127, 133, 125, 134, 123, 135, 121,
	16, 105, 143, 107, 142, 109, 141, 111, 140, 113, 139, 115, 138, 117, 137, 119, 136
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0004696C[] = {
	4, 13, 8, 0, 75,
	4, 8, 3, 75, 70,
	4, 3, 78, 70, 65,
	4, 78, 73, 65, 60,
	4, 68, 63, 55, 50,
	4, 63, 53, 50, 45,
	4, 53, 58, 45, 40,
	4, 58, 48, 40, 35,
	4, 48, 43, 35, 30,
	4, 43, 38, 30, 25,
	4, 38, 33, 25, 20,
	4, 28, 23, 15, 10,
	4, 23, 18, 10, 5,
	4, 18, 13, 5, 0
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000469F8[] = {
	0x8000u | 11, 51, 63, 46, 53, 41, 58, 36, 48, 31, 43, 38,
	4, 31, 26, 38, 33,
	0x8000u | 23, 63, 51, 68, 56, 73, 61, 78, 66, 3, 71, 8, 76, 13, 1, 18, 6, 23, 11, 28, 16, 33, 21, 26
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00046A4A[] = {
	17, 39, 37, 44, 42, 49, 47, 54, 52, 59, 57, 64, 62, 69, 67, 74, 72, 77,
	0x8000u | 7, 22, 29, 27, 34, 32, 39, 37,
	14, 29, 24, 22, 19, 17, 14, 12, 9, 7, 4, 2, 79, 77, 74
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00046A9C[] = {
	{ 1112, -1600 },
	{ 1251, -1259 },
	{ 625, -839 },
	{ 1514, -996 },
	{ 1092, -370 },
	{ 1855, -856 },
	{ 1705, -115 },
	{ 2224, -856 },
	{ 2372, -115 },
	{ 2565, -996 },
	{ 2983, -370 },
	{ 2824, -1259 },
	{ 3454, -839 },
	{ 2965, -1600 },
	{ 3709, -1450 },
	{ 2965, -1968 },
	{ 3709, -2117 },
	{ 2824, -2310 },
	{ 3454, -2728 },
	{ 2565, -2569 },
	{ 2983, -3199 },
	{ 2224, -2710 },
	{ 2372, -3454 },
	{ 1855, -2710 },
	{ 1705, -3454 },
	{ 1514, -2569 },
	{ 1092, -3199 },
	{ 1251, -2310 },
	{ 625, -2728 },
	{ 1112, -1968 },
	{ 370, -2117 },
	{ 370, -1450 },
	{ 1112, -1968 },
	{ 1112, -1600 },
	{ 370, -1450 },
	{ 625, -839 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00046B2C[] = {
	{ 1279, -254 },
	{ 1279, 255 },
	{ 1599, -254 },
	{ 1599, 255 },
	{ 1919, -254 },
	{ 1919, 255 },
	{ 2237, -254 },
	{ 2237, 255 },
	{ 2559, -254 },
	{ 2559, 255 },
	{ 2879, -254 },
	{ 2879, 255 },
	{ 3199, -254 },
	{ 3199, 255 },
	{ 3520, -254 },
	{ 3520, 255 },
	{ 959, 255 },
	{ 959, -254 },
	{ 637, 255 },
	{ 637, -254 },
	{ 318, 255 },
	{ 318, -254 },
	{ 0, 255 },
	{ 0, -254 },
	{ 5099, 255 },
	{ 5099, -254 },
	{ 4800, 255 },
	{ 4800, -254 },
	{ 4480, 255 },
	{ 4480, -254 },
	{ 4160, 255 },
	{ 4160, -254 },
	{ 3840, 255 },
	{ 3840, -254 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00046BB4[] = {
	{ 5120, 0 },
	{ 5120, 255 },
	{ 6400, 0 },
	{ 6400, 255 },
	{ 7680, 0 },
	{ 7680, 255 },
	{ 8960, 0 },
	{ 8960, 255 },
	{ 10240, 0 },
	{ 10240, 255 },
	{ 11520, 0 },
	{ 11520, 255 },
	{ 12800, 0 },
	{ 12800, 255 },
	{ 14081, 0 },
	{ 14081, 255 },
	{ 19201, 255 },
	{ 19201, 0 },
	{ 17921, 255 },
	{ 17921, 0 },
	{ 16641, 255 },
	{ 16641, 0 },
	{ 15361, 255 },
	{ 15361, 0 },
	{ 0 },
	{ 0, 255 },
	{ 1280, 0 },
	{ 1280, 255 },
	{ 2560, 0 },
	{ 2560, 255 },
	{ 3840, 0 },
	{ 3840, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00046C34[] = {
	{ 4080, 255 },
	{ 4080, 0 },
	{ 2720, 255 },
	{ 2720, 0 },
	{ 1360, 255 },
	{ 1360, 0 },
	{ 0, 255 },
	{ 0 },
	{ 5440, 0 },
	{ 5440, 255 },
	{ 6798, 0 },
	{ 6798, 255 },
	{ 8160, 0 },
	{ 8160, 255 },
	{ 9518, 0 },
	{ 9518, 255 },
	{ 10880, 0 },
	{ 10880, 255 },
	{ 12240, 0 },
	{ 12240, 255 },
	{ 13598, 0 },
	{ 13598, 255 },
	{ 14960, 0 },
	{ 14960, 255 },
	{ 16320, 0 },
	{ 16320, 255 },
	{ 17680, 0 },
	{ 17679, 255 },
	{ 19038, 0 },
	{ 19037, 255 },
	{ 20400, 0 },
	{ 20400, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00046CB4[] = {
	{ 6123, 186 },
	{ 6123, 68 },
	{ 6661, 186 },
	{ 6661, 68 },
	{ 7140, 186 },
	{ 7140, 68 },
	{ 7618, 186 },
	{ 7618, 68 },
	{ 1522, 68 },
	{ 1522, 186 },
	{ 2059, 68 },
	{ 2059, 186 },
	{ 5645, 68 },
	{ 5645, 186 },
	{ 5107, 68 },
	{ 5107, 186 },
	{ 4570, 68 },
	{ 4570, 186 },
	{ 4091, 68 },
	{ 4091, 186 },
	{ 29, 186 },
	{ 29, 68 },
	{ 508, 186 },
	{ 508, 68 },
	{ 984, 186 },
	{ 984, 68 },
	{ 1522, 186 },
	{ 1522, 68 },
	{ 2059, 186 },
	{ 2059, 68 },
	{ 2538, 186 },
	{ 2538, 68 },
	{ 3075, 186 },
	{ 3075, 68 },
	{ 3554, 186 },
	{ 3554, 68 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00046D44[] = {
	{ 1, 254 },
	{ 508, 254 },
	{ 1, 164 },
	{ 508, 164 },
	{ 1, 254 },
	{ 508, 254 },
	{ 1, 164 },
	{ 508, 164 },
	{ 1, 254 },
	{ 508, 254 },
	{ 1, 164 },
	{ 508, 164 },
	{ 1, 254 },
	{ 508, 254 },
	{ 1, 164 },
	{ 508, 164 },
	{ 1, 254 },
	{ 508, 254 },
	{ 1, 164 },
	{ 508, 164 },
	{ 1, 254 },
	{ 508, 254 },
	{ 1, 164 },
	{ 508, 164 },
	{ 1, 254 },
	{ 508, 254 },
	{ 1, 164 },
	{ 508, 164 },
	{ 1, 254 },
	{ 508, 254 },
	{ 1, 164 },
	{ 508, 164 },
	{ 1, 254 },
	{ 508, 254 },
	{ 1, 164 },
	{ 508, 164 },
	{ 1, 254 },
	{ 508, 254 },
	{ 1, 164 },
	{ 508, 164 },
	{ 1, 254 },
	{ 508, 254 },
	{ 1, 164 },
	{ 508, 164 },
	{ 1, 254 },
	{ 508, 254 },
	{ 1, 164 },
	{ 508, 164 },
	{ 1, 254 },
	{ 508, 254 },
	{ 1, 164 },
	{ 508, 164 },
	{ 1, 254 },
	{ 508, 254 },
	{ 1, 164 },
	{ 508, 164 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00046E24[] = {
	{ 79, 253 },
	{ 79, 1 },
	{ 557, 253 },
	{ 557, 1 },
	{ 1195, 253 },
	{ 1195, 1 },
	{ 1832, 253 },
	{ 1832, 1 },
	{ 2470, 253 },
	{ 2470, 1 },
	{ 3107, 1 },
	{ 2470, 253 },
	{ 3107, 253 },
	{ 3107, 1 },
	{ 3745, 1 },
	{ 10120, 1 },
	{ 10120, 253 },
	{ 9482, 1 },
	{ 9482, 253 },
	{ 8845, 1 },
	{ 8845, 253 },
	{ 8207, 1 },
	{ 8207, 253 },
	{ 7568, 1 },
	{ 7568, 253 },
	{ 6930, 1 },
	{ 6930, 253 },
	{ 6293, 1 },
	{ 6293, 253 },
	{ 5655, 1 },
	{ 5655, 253 },
	{ 5018, 1 },
	{ 5018, 253 },
	{ 4380, 1 },
	{ 4380, 253 },
	{ 3745, 1 },
	{ 3745, 253 },
	{ 3107, 253 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00046EBC[] = {
	{ 39, 253 },
	{ 39, 1 },
	{ 278, 253 },
	{ 278, 1 },
	{ 597, 253 },
	{ 597, 1 },
	{ 916, 253 },
	{ 916, 1 },
	{ 1235, 253 },
	{ 1235, 1 },
	{ 1553, 253 },
	{ 1553, 1 },
	{ 1872, 253 },
	{ 1872, 1 },
	{ 2189, 253 },
	{ 2189, 1 },
	{ 2508, 1 },
	{ 4103, 1 },
	{ 4422, 253 },
	{ 4422, 1 },
	{ 4741, 253 },
	{ 4741, 1 },
	{ 5060, 253 },
	{ 5060, 1 },
	{ 4422, 253 },
	{ 4103, 253 },
	{ 4103, 1 },
	{ 3783, 253 },
	{ 3783, 1 },
	{ 3464, 253 },
	{ 3464, 1 },
	{ 3145, 253 },
	{ 3145, 1 },
	{ 2826, 253 },
	{ 2826, 1 },
	{ 2508, 253 },
	{ 2508, 1 },
	{ 2189, 253 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00046F54[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, polySTG12_000467F8, NULL, NULL, NULL, uvSTG12_00046A9C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, polySTG12_00046844, NULL, NULL, NULL, uvSTG12_00046B2C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, polySTG12_0004688E, NULL, NULL, NULL, uvSTG12_00046BB4, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, polySTG12_000468D4, NULL, NULL, NULL, uvSTG12_00046C34, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 4, polySTG12_0004691C, NULL, NULL, NULL, uvSTG12_00046CB4, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 14, polySTG12_0004696C, NULL, NULL, NULL, uvSTG12_00046D44, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 3, polySTG12_000469F8, NULL, NULL, NULL, uvSTG12_00046E24, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 3, polySTG12_00046A4A, NULL, NULL, NULL, uvSTG12_00046EBC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00047014[] = {
	{ 196.157f, -70.00021f, -39.01818f },
	{ 176.5414f, -80.00021f, -35.11639f },
	{ 98.07854f, -80.00021f, -19.50915f },
	{ 166.2939f, -80.00021f, 111.1138f },
	{ 81.20898f, -80.00021f, -16.15356f },
	{ 166.2939f, -70.00021f, -111.1141f },
	{ 149.6646f, -80.00021f, -100.0027f },
	{ 83.14697f, -80.00021f, -55.55713f },
	{ 196.157f, -80.00021f, 39.01782f },
	{ 68.84563f, -80.00021f, -46.00134f },
	{ 111.114f, -70.00021f, -166.2941f },
	{ 100.0026f, -80.00021f, -149.6647f },
	{ 55.55701f, -80.00021f, -83.14709f },
	{ 196.157f, -80.00021f, -39.01818f },
	{ 46.00122f, -80.00021f, -68.84582f },
	{ 39.01806f, -70.00021f, -196.1572f },
	{ 35.11627f, -80.00021f, -176.5414f },
	{ 19.50903f, -80.00021f, -98.07867f },
	{ 166.2939f, -80.00021f, -111.1141f },
	{ 16.15344f, -80.00021f, -81.2091f },
	{ -39.01806f, -70.00021f, -196.1572f },
	{ -35.11627f, -80.00021f, -176.5414f },
	{ -19.50903f, -80.00021f, -98.07867f },
	{ 111.114f, -80.00021f, -166.2941f },
	{ -16.1535f, -80.00021f, -81.2091f },
	{ -111.1141f, -70.00021f, -166.294f },
	{ -100.0027f, -80.00021f, -149.6646f },
	{ -55.55701f, -80.00021f, -83.14709f },
	{ 39.01806f, -80.00021f, -196.1572f },
	{ -46.00122f, -80.00021f, -68.84576f },
	{ -166.2939f, -70.00021f, -111.1141f },
	{ -149.6646f, -80.00021f, -100.0027f },
	{ -83.14697f, -80.00021f, -55.55713f },
	{ -39.01806f, -80.00021f, -196.1572f },
	{ -68.8457f, -80.00021f, -46.00134f },
	{ -196.157f, -70.00021f, -39.01812f },
	{ -176.5413f, -80.00021f, -35.11633f },
	{ -98.07854f, -80.00021f, -19.50915f },
	{ -111.1141f, -80.00021f, -166.294f },
	{ -81.20898f, -80.00021f, -16.15356f },
	{ -196.157f, -70.00021f, 39.018f },
	{ -176.5413f, -80.00021f, 35.11615f },
	{ -98.07848f, -80.00021f, 19.50891f },
	{ -166.2939f, -80.00021f, -111.1141f },
	{ -81.20898f, -80.00021f, 16.15338f },
	{ -166.2939f, -70.00021f, 111.114f },
	{ -149.6645f, -80.00021f, 100.0026f },
	{ -83.14691f, -80.00021f, 55.55695f },
	{ -196.157f, -80.00021f, -39.01812f },
	{ -68.84563f, -80.00021f, 46.0011f },
	{ -111.114f, -70.00021f, 166.2938f },
	{ -100.0026f, -80.00021f, 149.6644f },
	{ -55.55701f, -80.00021f, 83.14685f },
	{ -166.2939f, -80.00021f, 111.114f },
	{ -46.00116f, -80.00021f, 68.84557f },
	{ -39.018f, -70.00021f, 196.1569f },
	{ -35.11621f, -80.00021f, 176.5412f },
	{ -19.50897f, -80.00021f, 98.07842f },
	{ -196.157f, -80.00021f, 39.018f },
	{ -16.15344f, -80.00021f, 81.20885f },
	{ 39.01812f, -70.00021f, 196.1569f },
	{ 35.11633f, -80.00021f, 176.5412f },
	{ 19.50909f, -80.00021f, 98.07836f },
	{ -111.114f, -80.00021f, 166.2938f },
	{ 16.1535f, -80.00021f, 81.20885f },
	{ 111.1141f, -70.00021f, 166.2937f },
	{ 100.0027f, -80.00021f, 149.6643f },
	{ 55.55707f, -80.00021f, 83.14679f },
	{ -39.018f, -80.00021f, 196.1569f },
	{ 46.00122f, -80.00021f, 68.84551f },
	{ 166.2939f, -70.00021f, 111.1138f },
	{ 149.6646f, -80.00021f, 100.0024f },
	{ 83.14697f, -80.00021f, 55.55688f },
	{ 39.01812f, -80.00021f, 196.1569f },
	{ 68.8457f, -80.00021f, 46.00104f },
	{ 196.157f, -70.00021f, 39.01782f },
	{ 176.5413f, -80.00021f, 35.11603f },
	{ 98.07854f, -80.00021f, 19.50885f },
	{ 111.1141f, -80.00021f, 166.2937f },
	{ 81.20898f, -80.00021f, 16.15332f },
	{ 196.157f, -10.00021f, -39.01818f },
	{ 166.2939f, -10.00021f, -111.1141f },
	{ 111.114f, -10.00021f, -166.2941f },
	{ 39.01806f, -10.00021f, -196.1572f },
	{ -39.01806f, -10.00021f, -196.1572f },
	{ -111.1141f, -10.00021f, -166.294f },
	{ -166.2939f, -10.00021f, -111.1141f },
	{ -196.157f, -10.00021f, -39.01812f },
	{ -196.157f, -10.00021f, 39.018f },
	{ -166.2939f, -10.00021f, 111.114f },
	{ -111.114f, -10.00021f, 166.2938f },
	{ -39.018f, -10.00021f, 196.1569f },
	{ 39.01812f, -10.00021f, 196.1569f },
	{ 111.1141f, -10.00021f, 166.2937f },
	{ 166.2939f, -10.00021f, 111.1138f },
	{ 196.157f, -10.00021f, 39.01782f },
	{ 215.7728f, -0.000214f, -42.91998f },
	{ 196.157f, -0.000214f, -39.01818f },
	{ 182.9233f, -0.000214f, -122.2256f },
	{ 166.2939f, -0.000214f, -111.1141f },
	{ 122.2255f, -0.000214f, -182.9235f },
	{ 111.114f, -0.000214f, -166.2941f },
	{ 42.91986f, -0.000214f, -215.7729f },
	{ 39.01806f, -0.000214f, -196.1572f },
	{ -42.91986f, -0.000214f, -215.7729f },
	{ -39.01806f, -0.000214f, -196.1572f },
	{ -122.2255f, -0.000214f, -182.9234f },
	{ -111.1141f, -0.000214f, -166.294f },
	{ -182.9233f, -0.000214f, -122.2255f },
	{ -166.2939f, -0.000214f, -111.1141f },
	{ -215.7728f, -0.000214f, -42.91998f },
	{ -196.157f, -0.000214f, -39.01812f },
	{ -215.7728f, -0.000214f, 42.9198f },
	{ -196.157f, -0.000214f, 39.018f },
	{ -182.9233f, -0.000214f, 122.2253f },
	{ -166.2939f, -0.000214f, 111.114f },
	{ -122.2254f, -0.000214f, 182.9232f },
	{ -111.114f, -0.000214f, 166.2938f },
	{ -42.9198f, -0.000214f, 215.7726f },
	{ -39.018f, -0.000214f, 196.1569f },
	{ 42.91992f, -0.000214f, 215.7726f },
	{ 39.01812f, -0.000214f, 196.1569f },
	{ 122.2255f, -0.000214f, 182.9232f },
	{ 111.1141f, -0.000214f, 166.2937f },
	{ 182.9233f, -0.000214f, 122.2252f },
	{ 166.2939f, -0.000214f, 111.1138f },
	{ 215.7728f, -0.000214f, 42.91968f },
	{ 196.157f, -0.000214f, 39.01782f },
	{ 40.96899f, 1.999786f, -205.965f },
	{ 116.6697f, 1.999786f, -174.6088f },
	{ 174.6086f, 1.999786f, -116.6699f },
	{ 205.9649f, 1.999786f, -40.96911f },
	{ 205.9649f, 1.999786f, 40.96875f },
	{ 174.6086f, 1.999786f, 116.6696f },
	{ 116.6698f, 1.999786f, 174.6084f },
	{ 40.96899f, 1.999786f, 205.9648f },
	{ -40.96887f, 1.999786f, 205.9648f },
	{ -116.6697f, 1.999786f, 174.6085f },
	{ -174.6086f, 1.999786f, 116.6697f },
	{ -205.9649f, 1.999786f, 40.96887f },
	{ -205.9649f, 1.999786f, -40.96905f },
	{ -174.6086f, 1.999786f, -116.6698f },
	{ -116.6698f, 1.999786f, -174.6087f },
	{ -40.96899f, 1.999786f, -205.965f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_000476D4[] = {
	{ -0.980785f, 0, 0.19509f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.620445f, 0.665719f, -0.414567f },
	{ 0, 1, 0 },
	{ -0.83147f, 0, 0.5555699f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.731865f, 0.665719f, -0.145577f },
	{ 0, 1, 0 },
	{ -0.5555699f, 0, 0.83147f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.731865f, 0.665719f, 0.145577f },
	{ 0, 1, 0 },
	{ -0.382683f, 0, 0.92388f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.620445f, 0.665719f, 0.414568f },
	{ 0, 1, 0 },
	{ 0.382684f, 0, 0.92388f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.414568f, 0.665719f, 0.620445f },
	{ 0, 1, 0 },
	{ 0.5555699f, 0, 0.83147f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.189864f, 0.868243f, 0.458373f },
	{ 0, 1, 0 },
	{ 0.83147f, 0, 0.5555699f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.189864f, 0.868243f, 0.458373f },
	{ 0, 1, 0 },
	{ 0.980785f, 0, 0.19509f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.414568f, 0.665719f, 0.620445f },
	{ 0, 1, 0 },
	{ 0.980785f, 0, -0.195091f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.620445f, 0.665719f, 0.414568f },
	{ 0, 1, 0 },
	{ 0.831469f, 0, -0.555571f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.731865f, 0.665719f, 0.145577f },
	{ 0, 1, 0 },
	{ 0.5555699f, 0, -0.83147f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.620445f, 0.665719f, -0.414568f },
	{ 0, 1, 0 },
	{ 0.382683f, 0, -0.92388f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.731865f, 0.665719f, -0.145577f },
	{ 0, 1, 0 },
	{ -0.382684f, 0, -0.92388f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.414568f, 0.665719f, -0.620445f },
	{ 0, 1, 0 },
	{ -0.555571f, 0, -0.831469f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.189864f, 0.868243f, -0.458373f },
	{ 0, 1, 0 },
	{ -0.83147f, 0, -0.5555699f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.189864f, 0.868243f, -0.458373f },
	{ 0, 1, 0 },
	{ -0.980785f, 0, -0.19509f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.414568f, 0.665719f, -0.620445f },
	{ 0, 1, 0 },
	{ -0.96573f, 0, 0.25955f },
	{ -0.83147f, 0, 0.5555699f },
	{ -0.5555699f, 0, 0.83147f },
	{ -0.382683f, 0, 0.92388f },
	{ 0.382684f, 0, 0.92388f },
	{ 0.5555699f, 0, 0.83147f },
	{ 0.83147f, 0, 0.5555699f },
	{ 0.980785f, 0, 0.19509f },
	{ 0.980785f, 0, -0.195091f },
	{ 0.831469f, 0, -0.555571f },
	{ 0.5555699f, 0, -0.83147f },
	{ 0.382683f, 0, -0.92388f },
	{ -0.382684f, 0, -0.92388f },
	{ -0.555571f, 0, -0.831469f },
	{ -0.83147f, 0, -0.5555699f },
	{ -0.96573f, 0, -0.25955f },
	{ 0.184597f, 0.979835f, -0.07646199f },
	{ -0.68726f, 0.668308f, 0.284672f },
	{ 0.163064f, 0.980581f, -0.108956f },
	{ -0.613124f, 0.675459f, 0.409676f },
	{ 0.108956f, 0.980581f, -0.163064f },
	{ -0.409676f, 0.675459f, 0.613124f },
	{ 0.07646199f, 0.979835f, -0.184597f },
	{ -0.284672f, 0.668308f, 0.68726f },
	{ -0.076463f, 0.979835f, -0.184597f },
	{ 0.284673f, 0.668308f, 0.68726f },
	{ -0.108956f, 0.980581f, -0.163065f },
	{ 0.409676f, 0.675459f, 0.613124f },
	{ -0.163064f, 0.980581f, -0.108956f },
	{ 0.613124f, 0.675459f, 0.409676f },
	{ -0.192348f, 0.980581f, -0.03826f },
	{ 0.723229f, 0.675459f, 0.143859f },
	{ -0.192348f, 0.980581f, 0.03826f },
	{ 0.723229f, 0.675459f, -0.143859f },
	{ -0.163065f, 0.980581f, 0.108956f },
	{ 0.613124f, 0.675459f, -0.409676f },
	{ -0.108956f, 0.980581f, 0.163064f },
	{ 0.409676f, 0.675459f, -0.613124f },
	{ -0.07646199f, 0.979835f, 0.184597f },
	{ 0.284672f, 0.668309f, -0.687259f },
	{ 0.076463f, 0.979835f, 0.184597f },
	{ -0.284672f, 0.668309f, -0.687259f },
	{ 0.108956f, 0.980581f, 0.163064f },
	{ -0.409677f, 0.675459f, -0.613123f },
	{ 0.163065f, 0.980581f, 0.108956f },
	{ -0.613124f, 0.675459f, -0.409676f },
	{ 0.184597f, 0.979835f, 0.076463f },
	{ -0.68726f, 0.668308f, -0.284672f },
	{ 0.009559999f, 0.999688f, -0.023079f },
	{ 0.013612f, 0.9997f, -0.020372f },
	{ 0.020372f, 0.9997f, -0.013612f },
	{ 0.023079f, 0.999688f, -0.009559999f },
	{ 0.023079f, 0.999688f, 0.009559999f },
	{ 0.020372f, 0.9997f, 0.013612f },
	{ 0.013612f, 0.9997f, 0.020372f },
	{ 0.009559999f, 0.999688f, 0.023079f },
	{ -0.009559999f, 0.999688f, 0.023079f },
	{ -0.013612f, 0.9997f, 0.020372f },
	{ -0.020372f, 0.9997f, 0.013612f },
	{ -0.02403f, 0.9997f, 0.00478f },
	{ -0.02403f, 0.9997f, -0.00478f },
	{ -0.020372f, 0.9997f, -0.013612f },
	{ -0.013612f, 0.9997f, -0.020372f },
	{ -0.009559999f, 0.999688f, -0.023079f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00047D94 = { vertexSTG12_00047014, normalSTG12_000476D4, LengthOfArray(vertexSTG12_00047014), meshlistSTG12_00046F54, matlistSTG12_00046708, LengthOfArray(meshlistSTG12_00046F54), LengthOfArray(matlistSTG12_00046708),{ 0, -39.00021f, -0.000122f }, 305.1487f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00047DBC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00047D94, 750, -0.000109f, -650, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00047DF0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 16, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00047E2C[] = {
	6, 0, 14, 3, 12, 5, 16,
	6, 27, 23, 29, 24, 31, 26,
	6, 1, 10, 4, 9, 2, 11
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00047E56[] = {
	6, 19, 26, 20, 24, 17, 23,
	6, 17, 23, 18, 22, 21, 25,
	6, 23, 27, 22, 28, 25, 30
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00047E80[] = {
	6, 10, 0, 9, 3, 11, 5,
	6, 14, 27, 12, 29, 16, 31,
	6, 27, 14, 28, 15, 30, 13,
	6, 2, 6, 4, 7, 1, 8
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00047EB8[] = {
	{ 0, 254 },
	{ 254, 254 },
	{ 0, 126 },
	{ 254, 126 },
	{ 0 },
	{ 254, 0 },
	{ 0, 254 },
	{ 254, 254 },
	{ 0, 126 },
	{ 254, 126 },
	{ 0 },
	{ 254, 0 },
	{ 0, 254 },
	{ 254, 254 },
	{ 0, 126 },
	{ 254, 126 },
	{ 0 },
	{ 254, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00047F00[] = {
	{ 254, 0 },
	{ 0 },
	{ 254, 126 },
	{ 0, 126 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0 },
	{ 254, 126 },
	{ 0, 126 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0 },
	{ 254, 126 },
	{ 0, 126 },
	{ 254, 254 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00047F48[] = {
	{ 1, 254 },
	{ 508, 254 },
	{ 1, 126 },
	{ 508, 126 },
	{ 1, 0 },
	{ 508, 0 },
	{ 1, 254 },
	{ 508, 254 },
	{ 1, 126 },
	{ 508, 126 },
	{ 1, 0 },
	{ 508, 0 },
	{ 508, 0 },
	{ 1, 0 },
	{ 508, 126 },
	{ 1, 126 },
	{ 508, 254 },
	{ 1, 254 },
	{ 508, 0 },
	{ 1, 0 },
	{ 508, 126 },
	{ 1, 126 },
	{ 508, 254 },
	{ 1, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00047FA8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, polySTG12_00047E2C, NULL, NULL, NULL, uvSTG12_00047EB8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, polySTG12_00047E56, NULL, NULL, NULL, uvSTG12_00047F00, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, polySTG12_00047E80, NULL, NULL, NULL, uvSTG12_00047F48, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00047FF0[] = {
	{ 134.9999f, 61.04779f, 700 },
	{ 255, 61.04783f, 700 },
	{ 254.9999f, 80.04783f, 680 },
	{ 134.9999f, 66.90565f, 685.8578f },
	{ 255, 66.90569f, 685.8578f },
	{ 134.9999f, 80.04779f, 680 },
	{ 342.4999f, 80.04785f, 680 },
	{ 342.4999f, 66.9057f, 685.8578f },
	{ 342.4999f, 61.04785f, 700 },
	{ 222.5f, 66.90566f, 685.8578f },
	{ 222.5f, 61.04781f, 700 },
	{ 222.5f, 80.04781f, 680 },
	{ 107.5f, 66.90562f, 685.8578f },
	{ 107.5f, 80.04775f, 719.7396f },
	{ 107.5f, 61.04777f, 700 },
	{ 107.5f, 66.90562f, 714.1422f },
	{ 107.5f, 80.04777f, 680 },
	{ -60.00006f, 61.04787f, 700 },
	{ -60.00006f, 66.90572f, 714.1422f },
	{ -60.00006f, 80.04787f, 680 },
	{ -60.00006f, 66.90572f, 685.8578f },
	{ -60.00006f, 80.04785f, 719.7396f },
	{ -12.5f, 66.90574f, 714.1422f },
	{ -12.5f, 61.04789f, 700 },
	{ -12.5f, 66.90575f, 685.8578f },
	{ -12.50003f, 80.04787f, 719.7396f },
	{ -12.50003f, 80.04789f, 680 },
	{ 20, 61.04779f, 700 },
	{ 20, 66.90564f, 714.1422f },
	{ 20, 66.90565f, 685.8578f },
	{ 20, 80.04777f, 719.7396f },
	{ 20, 80.04779f, 680 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00048170[] = {
	{ 0, -0.92388f, -0.382683f },
	{ 0, -0.92388f, -0.382683f },
	{ 0, -0.407119f, -0.913375f },
	{ 0, -0.7164479f, -0.6976399f },
	{ 0, -0.7164479f, -0.6976399f },
	{ 0, -0.407119f, -0.913375f },
	{ 0, -0.407119f, -0.913375f },
	{ 0, -0.7164479f, -0.6976399f },
	{ 0, -0.92388f, -0.382683f },
	{ 0, -0.7164479f, -0.6976399f },
	{ 0, -0.92388f, -0.382683f },
	{ 0, -0.407119f, -0.913375f },
	{ 0, -0.7164479f, -0.6976399f },
	{ 0, -0.39186f, 0.920025f },
	{ 0, -0.990602f, -0.136774f },
	{ 0, -0.7106169f, 0.7035789f },
	{ 0, -0.407119f, -0.913375f },
	{ 0, -1, 0 },
	{ 0, -0.7106169f, 0.7035789f },
	{ 0, -0.407119f, -0.913375f },
	{ 0, -0.7164479f, -0.6976399f },
	{ 0, -0.39186f, 0.920025f },
	{ -0.00001f, -0.7106169f, 0.7035789f },
	{ -0.00001f, -1, 0 },
	{ -0.00001f, -0.7164479f, -0.697641f },
	{ -0.00001f, -0.39186f, 0.920025f },
	{ -0.00001f, -0.407119f, -0.913375f },
	{ -0.00002f, -1, 0 },
	{ -0.00001f, -0.7106169f, 0.7035789f },
	{ -0.00001f, -0.7164479f, -0.6976399f },
	{ -0.00001f, -0.39186f, 0.920025f },
	{ -0.00001f, -0.407119f, -0.913375f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_000482F0 = { vertexSTG12_00047FF0, normalSTG12_00048170, LengthOfArray(vertexSTG12_00047FF0), meshlistSTG12_00047FA8, matlistSTG12_00047DF0, LengthOfArray(meshlistSTG12_00047FA8), LengthOfArray(matlistSTG12_00047DF0),{ 141.2499f, 70.54783f, 699.8698f }, 202.2285f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00048318 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_000482F0, 0, 0, -1300, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0004834C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 16, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00048388[] = {
	6, 22, 0, 20, 5, 24, 9,
	6, 31, 35, 32, 37, 34, 39,
	6, 17, 1, 16, 6, 19, 4
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000483B2[] = {
	6, 34, 27, 32, 28, 31, 25,
	6, 0, 22, 3, 23, 7, 21,
	6, 31, 25, 30, 26, 33, 29,
	6, 35, 31, 36, 30, 38, 33,
	6, 1, 17, 8, 15, 2, 18
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000483F8[] = {
	6, 10, 4, 12, 6, 14, 1,
	6, 14, 1, 13, 8, 11, 2,
	6, 38, 21, 36, 23, 35, 22,
	6, 0, 17, 5, 16, 9, 19,
	6, 35, 22, 37, 20, 39, 24,
	6, 7, 18, 3, 15, 0, 17
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0004844C[] = {
	{ 254, 254 },
	{ 0, 254 },
	{ 254, 126 },
	{ 0, 126 },
	{ 254, 0 },
	{ 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, 126 },
	{ 0, 126 },
	{ 254, 0 },
	{ 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, 126 },
	{ 0, 126 },
	{ 254, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00048494[] = {
	{ 0 },
	{ 254, 0 },
	{ 0, 126 },
	{ 254, 126 },
	{ 0, 254 },
	{ 254, 254 },
	{ 0 },
	{ 254, 0 },
	{ 0, 126 },
	{ 254, 126 },
	{ 0, 254 },
	{ 254, 254 },
	{ 0 },
	{ 254, 0 },
	{ 0, 126 },
	{ 254, 126 },
	{ 0, 254 },
	{ 254, 254 },
	{ 0 },
	{ 254, 0 },
	{ 0, 126 },
	{ 254, 126 },
	{ 0, 254 },
	{ 254, 254 },
	{ 0 },
	{ 254, 0 },
	{ 0, 126 },
	{ 254, 126 },
	{ 0, 254 },
	{ 254, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0004850C[] = {
	{ 1, 0 },
	{ 508, 0 },
	{ 1, 126 },
	{ 508, 126 },
	{ 1, 254 },
	{ 508, 254 },
	{ 1, 0 },
	{ 508, 0 },
	{ 1, 126 },
	{ 508, 126 },
	{ 1, 254 },
	{ 508, 254 },
	{ 508, 254 },
	{ 1, 254 },
	{ 508, 126 },
	{ 1, 126 },
	{ 508, 0 },
	{ 1, 0 },
	{ 508, 254 },
	{ 1, 254 },
	{ 508, 126 },
	{ 1, 126 },
	{ 508, 0 },
	{ 1, 0 },
	{ 508, 254 },
	{ 1, 254 },
	{ 508, 126 },
	{ 1, 126 },
	{ 508, 0 },
	{ 1, 0 },
	{ 508, 254 },
	{ 1, 254 },
	{ 508, 126 },
	{ 1, 126 },
	{ 508, 0 },
	{ 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0004859C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, polySTG12_00048388, NULL, NULL, NULL, uvSTG12_0004844C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 5, polySTG12_000483B2, NULL, NULL, NULL, uvSTG12_00048494, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 6, polySTG12_000483F8, NULL, NULL, NULL, uvSTG12_0004850C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_000485E4[] = {
	{ 134.9999f, 61.04779f, -700 },
	{ 255, 61.04783f, -700 },
	{ 254.9999f, 80.04781f, -720 },
	{ 134.9999f, 66.90564f, -714.1422f },
	{ 254.9999f, 80.04783f, -680 },
	{ 134.9999f, 66.90565f, -685.8578f },
	{ 255, 66.90569f, -685.8578f },
	{ 134.9999f, 80.04778f, -720 },
	{ 255, 66.90568f, -714.1422f },
	{ 134.9999f, 80.04779f, -680 },
	{ 342.4999f, 80.04785f, -680 },
	{ 342.4999f, 80.04783f, -720 },
	{ 342.4999f, 66.9057f, -685.8578f },
	{ 342.4999f, 66.9057f, -714.1422f },
	{ 342.4999f, 61.04785f, -700 },
	{ 222.5f, 66.90566f, -714.1422f },
	{ 222.5f, 66.90566f, -685.8578f },
	{ 222.5f, 61.04781f, -700 },
	{ 222.5f, 80.04779f, -720 },
	{ 222.5f, 80.04781f, -680 },
	{ 107.5f, 66.90562f, -685.8578f },
	{ 107.5f, 80.04775f, -720 },
	{ 107.5f, 61.04777f, -700 },
	{ 107.5f, 66.90562f, -714.1422f },
	{ 107.5f, 80.04777f, -680 },
	{ -60.00006f, 61.04787f, -700 },
	{ -60.00006f, 66.90572f, -714.1422f },
	{ -60.00006f, 80.04787f, -680 },
	{ -60.00006f, 66.90572f, -685.8578f },
	{ -60.00006f, 80.04785f, -720 },
	{ -12.5f, 66.90574f, -714.1422f },
	{ -12.5f, 61.04789f, -700 },
	{ -12.5f, 66.90575f, -685.8578f },
	{ -12.50003f, 80.04787f, -720 },
	{ -12.50003f, 80.04789f, -680 },
	{ 20, 61.04779f, -700 },
	{ 20, 66.90564f, -714.1422f },
	{ 20, 66.90565f, -685.8578f },
	{ 20, 80.04777f, -720 },
	{ 20, 80.04779f, -680 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_000487C4[] = {
	{ 0.000001f, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -0.407119f, -0.913375f },
	{ 0, -0.7164479f, -0.6976399f },
	{ 0, -0.407119f, 0.913375f },
	{ 0, -0.7164479f, 0.6976399f },
	{ 0, -0.7164479f, 0.6976399f },
	{ 0, -0.407119f, -0.913375f },
	{ 0, -0.7164479f, -0.6976399f },
	{ 0, -0.407119f, 0.913375f },
	{ 0, -0.407119f, 0.913375f },
	{ 0, -0.407119f, -0.913375f },
	{ 0, -0.7164479f, 0.6976399f },
	{ 0, -0.7164479f, -0.6976399f },
	{ 0, -1, 0 },
	{ 0, -0.7164479f, -0.6976399f },
	{ 0, -0.7164479f, 0.6976399f },
	{ 0, -1, 0 },
	{ 0, -0.407119f, -0.913375f },
	{ 0, -0.407119f, 0.913375f },
	{ 0, -0.7164479f, 0.6976399f },
	{ 0, -0.407119f, -0.913375f },
	{ 0, -1, 0 },
	{ 0, -0.7164479f, -0.6976399f },
	{ 0, -0.407119f, 0.913375f },
	{ 0, -1, 0 },
	{ 0, -0.7164479f, -0.6976399f },
	{ 0, -0.407119f, 0.913375f },
	{ 0, -0.7164479f, 0.6976399f },
	{ 0, -0.407119f, -0.913375f },
	{ -0.00001f, -0.7164479f, -0.6976399f },
	{ -0.00001f, -1, 0 },
	{ -0.00001f, -0.7164479f, 0.697641f },
	{ -0.00001f, -0.407119f, -0.913375f },
	{ -0.00001f, -0.407119f, 0.913375f },
	{ -0.00002f, -1, 0 },
	{ -0.00001f, -0.716449f, -0.6976399f },
	{ -0.00001f, -0.7164479f, 0.6976399f },
	{ -0.00001f, -0.407119f, -0.913375f },
	{ -0.00001f, -0.407119f, 0.913375f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_000489A4 = { vertexSTG12_000485E4, normalSTG12_000487C4, LengthOfArray(vertexSTG12_000485E4), meshlistSTG12_0004859C, matlistSTG12_0004834C, LengthOfArray(meshlistSTG12_0004859C), LengthOfArray(matlistSTG12_0004834C),{ 141.2499f, 70.54783f, -700 }, 202.2414f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_000489CC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_000489A4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00048A00[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00048A14[] = {
	6, 5, 2, 3, 1, 4, 0,
	4, 2, 6, 1, 0
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00048A2C[] = {
	{ 194, 0 },
	{ 128, 0 },
	{ 194, 126 },
	{ 128, 126 },
	{ 194, 254 },
	{ 128, 254 },
	{ 255, 0 },
	{ 0 },
	{ 182, 176 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00048A54[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, polySTG12_00048A14, NULL, NULL, NULL, uvSTG12_00048A2C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00048A6C[] = {
	{ -65.00005f, 61.04787f, 700 },
	{ -65.00005f, 66.90572f, 714.1422f },
	{ -65.00005f, 80.04785f, 719.7396f },
	{ -60.00006f, 66.90572f, 714.1422f },
	{ -60.00006f, 61.04787f, 700 },
	{ -60.00006f, 80.04785f, 719.7396f },
	{ -65.00005f, 80.04787f, 700 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00048AC0[] = {
	{ -0.6f, -0.739104f, 0.306146f },
	{ -0.631086f, -0.551235f, 0.545775f },
	{ -0.596741f, -0.314441f, 0.738259f },
	{ 0, -0.7106169f, 0.7035789f },
	{ 0, -0.92388f, 0.382683f },
	{ 0, -0.39186f, 0.920025f },
	{ -1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00048B14 = { vertexSTG12_00048A6C, normalSTG12_00048AC0, LengthOfArray(vertexSTG12_00048A6C), meshlistSTG12_00048A54, matlistSTG12_00048A00, LengthOfArray(meshlistSTG12_00048A54), LengthOfArray(matlistSTG12_00048A00),{ -62.50006f, 70.54787f, 709.8698f }, 13.69904f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00048B3C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00048B14, 0, 0, -1300, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00048B70[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00048B84[] = {
	0x8000u | 5, 0, 4, 1, 5, 7,
	6, 4, 6, 2, 7, 3, 1,
	3, 2, 0, 4
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00048BA8[] = {
	{ 19, 247 },
	{ 2530, 247 },
	{ 19, -7 },
	{ 2530, -7 },
	{ 2530, -262 },
	{ 2530, -757 },
	{ 2530, -517 },
	{ 19, -517 },
	{ 2530, -262 },
	{ 19, -262 },
	{ 19, -7 },
	{ 19, -517 },
	{ 19, -757 },
	{ 2530, -757 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00048BE0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, polySTG12_00048B84, NULL, NULL, NULL, uvSTG12_00048BA8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00048BF8[] = {
	{ -5, -10, -8 },
	{ -5, -10, 7 },
	{ -5, 5, -8 },
	{ -5, 5, 7 },
	{ 148, -10, -8 },
	{ 148, -10, 7 },
	{ 148, 5, -8 },
	{ 148, 5, 7 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00048C58[] = {
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, -0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, -0.7071069f, -0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00048CB8 = { vertexSTG12_00048BF8, normalSTG12_00048C58, LengthOfArray(vertexSTG12_00048BF8), meshlistSTG12_00048BE0, matlistSTG12_00048B70, LengthOfArray(meshlistSTG12_00048BE0), LengthOfArray(matlistSTG12_00048B70),{ 71.5f, -2.5f, -0.5f }, 76.86677f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00048CE0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00048CB8, 1945, 70, -672, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00048D14[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00048D28[] = {
	0x8000u | 10, 2, 3, 16, 17, 10, 11, 12, 13, 6, 7,
	0x8000u | 10, 0, 2, 18, 16, 8, 10, 15, 12, 4, 6,
	0x8000u | 10, 3, 1, 17, 19, 11, 9, 13, 14, 7, 5,
	0x8000u | 10, 1, 0, 19, 18, 9, 8, 14, 15, 5, 4
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00048D80[] = {
	{ 7, -247 },
	{ 7, 7 },
	{ 262, -247 },
	{ 262, 7 },
	{ 517, -247 },
	{ 517, 7 },
	{ 772, -247 },
	{ 772, 7 },
	{ 1012, -247 },
	{ 1012, 7 },
	{ 7, -502 },
	{ 7, -247 },
	{ 262, -502 },
	{ 262, -247 },
	{ 517, -502 },
	{ 517, -247 },
	{ 772, -502 },
	{ 772, -247 },
	{ 1012, -502 },
	{ 1012, -247 },
	{ 7, 7 },
	{ 7, 247 },
	{ 262, 7 },
	{ 262, 247 },
	{ 517, 7 },
	{ 517, 247 },
	{ 772, 7 },
	{ 772, 247 },
	{ 1012, 7 },
	{ 1012, 247 },
	{ 7, -757 },
	{ 7, -502 },
	{ 262, -757 },
	{ 262, -502 },
	{ 517, -757 },
	{ 517, -502 },
	{ 772, -757 },
	{ 772, -502 },
	{ 1012, -757 },
	{ 1012, -502 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00048E20[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, polySTG12_00048D28, NULL, NULL, NULL, uvSTG12_00048D80, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00048E38[] = {
	{ 0, 0.5f, -8 },
	{ 0, 0.5f, 7 },
	{ 0, 15.5f, -8 },
	{ 0, 15.5f, 7 },
	{ 27.49999f, -38.49999f, -8 },
	{ 27.49999f, -38.49999f, 7 },
	{ 42.49999f, -38.5f, -8 },
	{ 42.49999f, -38.5f, 7 },
	{ 21.6127f, -10.40559f, -8 },
	{ 21.6127f, -10.40559f, 7 },
	{ 32.7193f, 0.201008f, -8 },
	{ 32.7193f, 0.201008f, 7 },
	{ 41.59888f, -18.38961f, -8 },
	{ 41.59888f, -18.38961f, 7 },
	{ 27.24068f, -23.12986f, 7 },
	{ 27.24068f, -23.12986f, -8 },
	{ 17.56403f, 10.68811f, -8 },
	{ 17.56403f, 10.68811f, 7 },
	{ 11.82378f, -3.170084f, -8 },
	{ 11.82378f, -3.170084f, 7 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00048F28[] = {
	{ 0.190566f, 0.6139399f, 0.766004f },
	{ 0.190566f, 0.6139399f, -0.766004f },
	{ -0.203341f, -0.74222f, 0.638563f },
	{ -0.203341f, -0.74222f, -0.638563f },
	{ 0.70322f, 0.011864f, 0.7108729f },
	{ 0.70322f, 0.011864f, -0.7108729f },
	{ -0.716537f, -0.032107f, 0.696809f },
	{ -0.716537f, -0.032107f, -0.696809f },
	{ 0.498428f, 0.399244f, 0.769528f },
	{ 0.498428f, 0.399244f, -0.769528f },
	{ -0.5761729f, -0.490783f, 0.653573f },
	{ -0.5761729f, -0.490783f, -0.653573f },
	{ -0.7245719f, -0.181304f, 0.664924f },
	{ -0.7245719f, -0.181304f, -0.664924f },
	{ 0.64082f, 0.141049f, -0.754623f },
	{ 0.64082f, 0.141049f, 0.754623f },
	{ -0.313318f, -0.671861f, 0.6711439f },
	{ -0.313318f, -0.671861f, -0.6711439f },
	{ 0.3005f, 0.593417f, 0.746696f },
	{ 0.3005f, 0.593417f, -0.746696f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00049018 = { vertexSTG12_00048E38, normalSTG12_00048F28, LengthOfArray(vertexSTG12_00048E38), meshlistSTG12_00048E20, matlistSTG12_00048D14, LengthOfArray(meshlistSTG12_00048E20), LengthOfArray(matlistSTG12_00048D14),{ 21.24999f, -11.5f, -0.5f }, 28.02231f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00049040 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00049018, 2093, 59.5f, -672, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00049074[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 41, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 65, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 55, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 52, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 37, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 16, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 47, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 41, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00049164[] = {
	10, 34, 21, 3, 53, 52, 20, 2, 42, 43, 67,
	10, 27, 6, 22, 58, 59, 7, 23, 45, 44, 68,
	6, 42, 66, 67, 68, 69, 45,
	0x8000u | 9, 82, 83, 75, 74, 103, 98, 27, 35, 22,
	0x8000u | 7, 83, 82, 97, 96, 34, 25, 3
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000491C2[] = {
	0x8000u | 8, 27, 6, 26, 5, 31, 14, 30, 12,
	0x8000u | 8, 29, 10, 28, 9, 24, 0, 25, 3
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000491E6[] = {
	8, 103, 75, 99, 73, 100, 72, 101, 79,
	8, 93, 78, 94, 80, 95, 81, 96, 82
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0004920A[] = {
	8, 45, 7, 46, 4, 41, 15, 39, 13,
	8, 2, 43, 1, 47, 8, 40, 11, 37
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0004922E[] = {
	0x8000u | 8, 63, 39, 65, 41, 70, 46, 69, 45,
	0x8000u | 8, 67, 43, 71, 47, 64, 40, 61, 37
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00049252[] = {
	8, 63, 61, 65, 64, 70, 71, 69, 67
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00049264[] = {
	8, 86, 91, 85, 90, 84, 89, 88, 87
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00049276[] = {
	8, 52, 2, 51, 1, 50, 8, 49, 11,
	8, 55, 13, 56, 15, 57, 4, 58, 7
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0004929A[] = {
	8, 58, 6, 57, 5, 56, 14, 55, 12,
	8, 49, 10, 50, 9, 51, 0, 52, 3
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000492BE[] = {
	0x8000u | 8, 87, 78, 89, 80, 90, 81, 91, 82,
	4, 88, 87, 79, 78,
	4, 91, 86, 82, 75,
	0x8000u | 8, 86, 75, 85, 73, 84, 72, 88, 79
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000492F6[] = {
	8, 96, 25, 95, 24, 94, 28, 93, 29,
	8, 101, 30, 100, 31, 99, 26, 103, 27
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0004931A[] = {
	10, 29, 10, 16, 49, 48, 11, 17, 37, 36, 60,
	10, 33, 18, 12, 54, 55, 19, 13, 38, 39, 63,
	6, 37, 61, 60, 63, 62, 38,
	0x8000u | 9, 77, 78, 76, 79, 102, 101, 33, 30, 12,
	0x8000u | 7, 78, 77, 93, 92, 29, 32, 16
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00049378[] = {
	{ 510, -396 },
	{ 510, -831 },
	{ 0, -831 },
	{ 510, -1211 },
	{ 0, -1211 },
	{ 510, -1767 },
	{ 0, -1767 },
	{ 510, -2380 },
	{ 0, -2380 },
	{ 0, -2738 },
	{ 0, -5949 },
	{ 0, -5514 },
	{ 510, -5514 },
	{ 0, -5131 },
	{ 510, -5131 },
	{ 0, -4578 },
	{ 510, -4578 },
	{ 0, -3964 },
	{ 510, -3964 },
	{ 510, -3605 },
	{ 510, -2380 },
	{ 510, -2738 },
	{ 0, -2738 },
	{ 510, -3605 },
	{ 0, -3605 },
	{ 0, -3964 },
	{ 0, -7905 },
	{ 510, -7905 },
	{ 0, -6599 },
	{ 510, -6599 },
	{ 0, -6164 },
	{ 510, -6164 },
	{ 0, -5949 },
	{ 510, -5949 },
	{ 510, -5514 },
	{ 508, 243 },
	{ 0, 243 },
	{ 510, -179 },
	{ 0, -179 },
	{ 510, -396 },
	{ 0, -396 },
	{ 0, -831 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00049420[] = {
	{ 0, 255 },
	{ 0 },
	{ 753, 255 },
	{ 753, 0 },
	{ 1698, 255 },
	{ 1698, 0 },
	{ 2550, 255 },
	{ 2550, 0 },
	{ 2550, 255 },
	{ 2550, 0 },
	{ 1698, 255 },
	{ 1698, 0 },
	{ 753, 255 },
	{ 753, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00049460[] = {
	{ 2040, 251 },
	{ 1632, 251 },
	{ 2040, -653 },
	{ 1632, -653 },
	{ 2040, -1783 },
	{ 1632, -1783 },
	{ 2040, -2801 },
	{ 1632, -2801 },
	{ 0, -2801 },
	{ 408, -2801 },
	{ 0, -1783 },
	{ 408, -1783 },
	{ 0, -653 },
	{ 408, -653 },
	{ 0, 251 },
	{ 408, 251 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000494A0[] = {
	{ 0 },
	{ 0, 255 },
	{ 604, 0 },
	{ 604, 255 },
	{ 1359, 0 },
	{ 1359, 255 },
	{ 2040, 0 },
	{ 2040, 255 },
	{ 2040, 255 },
	{ 2040, 0 },
	{ 1434, 255 },
	{ 1434, 0 },
	{ 677, 255 },
	{ 677, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000494E0[] = {
	{ 0, 255 },
	{ 0 },
	{ 680, 255 },
	{ 680, 0 },
	{ 1434, 255 },
	{ 1434, 0 },
	{ 2040, 255 },
	{ 2040, 0 },
	{ 0, 255 },
	{ 0 },
	{ 604, 255 },
	{ 604, 0 },
	{ 1360, 255 },
	{ 1360, 0 },
	{ 2040, 255 },
	{ 2040, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00049520[] = {
	{ 255, 0 },
	{ -255, 0 },
	{ 255, 677 },
	{ -255, 677 },
	{ 255, 1434 },
	{ -255, 1434 },
	{ 255, 2040 },
	{ -255, 2040 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00049540[] = {
	{ 0, 255 },
	{ 0, -1785 },
	{ 3426, 255 },
	{ 3426, -1785 },
	{ 8323, 255 },
	{ 8323, -1785 },
	{ 12240, 255 },
	{ 12240, -1785 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00049560[] = {
	{ 2550, 0 },
	{ 2550, 255 },
	{ 1792, 0 },
	{ 1792, 255 },
	{ 848, 0 },
	{ 848, 255 },
	{ 0 },
	{ 0, 255 },
	{ 2550, 0 },
	{ 2550, 255 },
	{ 1698, 0 },
	{ 1698, 255 },
	{ 753, 0 },
	{ 753, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000495A0[] = {
	{ 2550, 0 },
	{ 2550, 255 },
	{ 1792, 0 },
	{ 1792, 255 },
	{ 848, 0 },
	{ 848, 255 },
	{ 0 },
	{ 0, 255 },
	{ 2550, 0 },
	{ 2550, 255 },
	{ 1698, 0 },
	{ 1698, 255 },
	{ 753, 0 },
	{ 753, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000495E0[] = {
	{ 4420, 255 },
	{ 4590, 0 },
	{ 3060, 255 },
	{ 3060, 0 },
	{ 1359, 255 },
	{ 1359, 0 },
	{ 169, 255 },
	{ 0 },
	{ 1275, 254 },
	{ 255, 254 },
	{ 1530, 0 },
	{ 0 },
	{ 1274, 254 },
	{ 254, 254 },
	{ 1529, 0 },
	{ 0 },
	{ 4420, 255 },
	{ 4590, 0 },
	{ 3230, 255 },
	{ 3230, 0 },
	{ 1529, 255 },
	{ 1529, 0 },
	{ 169, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00049640[] = {
	{ 6070, 1 },
	{ 6070, 253 },
	{ 4253, 1 },
	{ 4253, 253 },
	{ 2055, 1 },
	{ 2055, 253 },
	{ 47, 1 },
	{ 47, 253 },
	{ 47, 1 },
	{ 47, 253 },
	{ 2055, 1 },
	{ 2055, 253 },
	{ 4253, 1 },
	{ 4253, 253 },
	{ 6070, 1 },
	{ 6070, 253 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00049680[] = {
	{ 510, -396 },
	{ 510, -831 },
	{ 0, -831 },
	{ 510, -1211 },
	{ 0, -1211 },
	{ 510, -1767 },
	{ 0, -1767 },
	{ 510, -2380 },
	{ 0, -2380 },
	{ 0, -2738 },
	{ 0, -5949 },
	{ 0, -5514 },
	{ 510, -5514 },
	{ 0, -5131 },
	{ 510, -5131 },
	{ 0, -4578 },
	{ 510, -4578 },
	{ 0, -3964 },
	{ 510, -3964 },
	{ 510, -3605 },
	{ 510, -2380 },
	{ 510, -2738 },
	{ 0, -2738 },
	{ 510, -3605 },
	{ 0, -3605 },
	{ 0, -3964 },
	{ 0, -7905 },
	{ 510, -7905 },
	{ 0, -6599 },
	{ 510, -6599 },
	{ 0, -6164 },
	{ 510, -6164 },
	{ 0, -5949 },
	{ 510, -5949 },
	{ 510, -5514 },
	{ 508, 236 },
	{ 1, 244 },
	{ 510, -179 },
	{ 0, -179 },
	{ 510, -396 },
	{ 0, -396 },
	{ 0, -831 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00049728[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, polySTG12_00049164, NULL, NULL, NULL, uvSTG12_00049378, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, polySTG12_000491C2, NULL, NULL, NULL, uvSTG12_00049420, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, polySTG12_000491E6, NULL, NULL, NULL, uvSTG12_00049460, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, polySTG12_0004920A, NULL, NULL, NULL, uvSTG12_000494A0, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, polySTG12_0004922E, NULL, NULL, NULL, uvSTG12_000494E0, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, polySTG12_00049252, NULL, NULL, NULL, uvSTG12_00049520, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 1, polySTG12_00049264, NULL, NULL, NULL, uvSTG12_00049540, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 2, polySTG12_00049276, NULL, NULL, NULL, uvSTG12_00049560, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 2, polySTG12_0004929A, NULL, NULL, NULL, uvSTG12_000495A0, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 4, polySTG12_000492BE, NULL, NULL, NULL, uvSTG12_000495E0, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 2, polySTG12_000492F6, NULL, NULL, NULL, uvSTG12_00049640, NULL },
	{ NJD_MESHSET_TRIMESH | 11, 5, polySTG12_0004931A, NULL, NULL, NULL, uvSTG12_00049680, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00049848[] = {
	{ -60, 20, -200 },
	{ -50, 60, -200 },
	{ -50, 60, -280 },
	{ -60, 20, -280 },
	{ 50, 60, -200 },
	{ 60, 20, -200 },
	{ 60, 20, -280 },
	{ 50, 60, -280 },
	{ -50, 60, -100 },
	{ -60, 20, -100 },
	{ -60, 20, -10 },
	{ -50, 60, -10 },
	{ 60, 20, -10 },
	{ 50, 60, -10 },
	{ 60, 20, -100 },
	{ 50, 60, -100 },
	{ -60, 20, 0 },
	{ -50, 60, 0 },
	{ 60, 20, 0 },
	{ 50, 60, 0 },
	{ -50, 60, -290 },
	{ -60, 20, -290 },
	{ 60, 20, -290 },
	{ 50, 60, -290 },
	{ -60, 0, -200 },
	{ -60, 0, -280 },
	{ 60, 0, -200 },
	{ 60, 0, -280 },
	{ -60, 0, -100 },
	{ -60, 0, -10 },
	{ 60, 0, -10 },
	{ 60, 0, -100 },
	{ -60, 0, 0 },
	{ 60, 0, 0 },
	{ -60, 0, -290 },
	{ 60, 0, -290 },
	{ -30, 80, 0 },
	{ -30, 80, -10 },
	{ 30, 80, 0 },
	{ 30, 80, -10 },
	{ -30, 80, -100 },
	{ 30, 80, -100 },
	{ -30, 80, -290 },
	{ -30, 80, -280 },
	{ 30, 80, -290 },
	{ 30, 80, -280 },
	{ 30, 80, -200 },
	{ -30, 80, -200 },
	{ -50, 34.5f, 0 },
	{ -50, 34.5f, -10 },
	{ -50, 34.5f, -100 },
	{ -50, 34.5f, -200 },
	{ -50, 34.5f, -280 },
	{ -50, 34.5f, -290 },
	{ 50, 34.5f, 0 },
	{ 50, 34.5f, -10 },
	{ 50, 34.5f, -100 },
	{ 50, 34.5f, -200 },
	{ 50, 34.5f, -280 },
	{ 50, 34.5f, -290 },
	{ -20, 67, 0 },
	{ -20, 67, -10 },
	{ 20, 67, 0 },
	{ 20, 67, -10 },
	{ -20, 67, -100 },
	{ 20, 67, -100 },
	{ -20, 67, -290 },
	{ -20, 67, -280 },
	{ 20, 67, -290 },
	{ 20, 67, -280 },
	{ 20, 67, -200 },
	{ -20, 67, -200 },
	{ 30, 0, -100 },
	{ 30, 0, -200 },
	{ 30, 0, -290 },
	{ 30, 0, -280 },
	{ 30, 0, 0 },
	{ -30, 0, 0 },
	{ -30, 0, -10 },
	{ 30, 0, -10 },
	{ -30, 0, -100 },
	{ -30, 0, -200 },
	{ -30, 0, -280 },
	{ -30, 0, -290 },
	{ 20, 0, -100 },
	{ 20, 0, -200 },
	{ 20, 0, -270 },
	{ -20, 0, -20 },
	{ 20, 0, -20 },
	{ -20, 0, -100 },
	{ -20, 0, -200 },
	{ -20, 0, -270 },
	{ -50, 0, 0 },
	{ -50, 0, -10 },
	{ -50, 0, -100 },
	{ -50, 0, -200 },
	{ -50, 0, -280 },
	{ -50, 0, -290 },
	{ 50, 0, -290 },
	{ 50, 0, -200 },
	{ 50, 0, -100 },
	{ 50, 0, -10 },
	{ 50, 0, 0 },
	{ 50, 0, -280 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00049D28[] = {
	{ 0.954781f, -0.297311f, 0 },
	{ 0.92388f, -0.382683f, 0 },
	{ 0.92388f, -0.382683f, 0 },
	{ 0.954781f, -0.297311f, 0 },
	{ -0.92388f, -0.382683f, 0 },
	{ -0.954781f, -0.297311f, 0 },
	{ -0.954781f, -0.297311f, 0 },
	{ -0.92388f, -0.382683f, 0 },
	{ 0.92388f, -0.382683f, 0 },
	{ 0.954781f, -0.297311f, 0 },
	{ 0.954781f, -0.297311f, 0 },
	{ 0.92388f, -0.382683f, 0 },
	{ -0.954781f, -0.297311f, 0 },
	{ -0.92388f, -0.382683f, 0 },
	{ -0.954781f, -0.297311f, 0 },
	{ -0.92388f, -0.382683f, 0 },
	{ 0.954781f, -0.297311f, 0 },
	{ 0.92388f, -0.382683f, 0 },
	{ -0.954781f, -0.297311f, 0 },
	{ -0.92388f, -0.382683f, 0 },
	{ 0.92388f, -0.382683f, 0 },
	{ 0.954781f, -0.297311f, 0 },
	{ -0.954781f, -0.297311f, 0 },
	{ -0.92388f, -0.382683f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.064806f, -0.997898f, 0 },
	{ -0.064806f, -0.997898f, 0 },
	{ 0.064806f, -0.997898f, 0 },
	{ 0.064806f, -0.997898f, 0 },
	{ -0.064806f, -0.997898f, 0 },
	{ 0.064806f, -0.997898f, 0 },
	{ -0.064806f, -0.997898f, 0 },
	{ -0.064806f, -0.997898f, 0 },
	{ 0.064806f, -0.997898f, 0 },
	{ 0.064806f, -0.997898f, 0 },
	{ 0.064806f, -0.997898f, 0 },
	{ -0.064806f, -0.997898f, 0 },
	{ 0.954781f, -0.297311f, 0 },
	{ 0.954781f, -0.297311f, 0 },
	{ 0.954781f, -0.297311f, 0 },
	{ 0.954781f, -0.297311f, 0 },
	{ 0.954781f, -0.297311f, 0 },
	{ 0.954781f, -0.297311f, 0 },
	{ -0.954781f, -0.297311f, 0 },
	{ -0.954781f, -0.297311f, 0 },
	{ -0.954781f, -0.297311f, 0 },
	{ -0.954781f, -0.297311f, 0 },
	{ -0.954781f, -0.297311f, 0 },
	{ -0.954781f, -0.297311f, 0 },
	{ -0.441752f, -0.897137f, 0 },
	{ -0.441752f, -0.897137f, 0 },
	{ 0.441752f, -0.897137f, 0 },
	{ 0.441752f, -0.897137f, 0 },
	{ -0.441752f, -0.897137f, 0 },
	{ 0.441752f, -0.897137f, 0 },
	{ -0.441752f, -0.897137f, 0 },
	{ -0.441752f, -0.897137f, 0 },
	{ 0.441752f, -0.897137f, 0 },
	{ 0.441752f, -0.897137f, 0 },
	{ 0.441752f, -0.897137f, 0 },
	{ -0.441752f, -0.897137f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0004A208 = { vertexSTG12_00049848, normalSTG12_00049D28, LengthOfArray(vertexSTG12_00049848), meshlistSTG12_00049728, matlistSTG12_00049074, LengthOfArray(meshlistSTG12_00049728), LengthOfArray(matlistSTG12_00049074),{ 0, 40, -145 }, 156.9235f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004A230 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0004A208, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_0004A264[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0004A2B4[] = {
	0x8000u | 6, 9, 11, 17, 16, 8, 10
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0004A2C2[] = {
	4, 0, 4, 1, 5,
	4, 2, 3, 6, 7
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0004A2D6[] = {
	3, 1, 5, 15,
	4, 3, 13, 7, 12,
	0x8000u | 7, 3, 13, 20, 21, 1, 14, 15,
	0x8000u | 6, 5, 15, 19, 18, 7, 12
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0004A306[] = {
	0x8000u | 7, 13, 9, 21, 17, 14, 8, 10,
	3, 15, 10, 14,
	4, 11, 12, 9, 13,
	0x8000u | 6, 11, 12, 16, 18, 10, 15
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0004A338[] = {
	{ 2039, 255 },
	{ 2039, -765 },
	{ 1019, 255 },
	{ 1019, -765 },
	{ 0, 255 },
	{ 0, -765 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0004A350[] = {
	{ 508, 70 },
	{ 1, 70 },
	{ 508, 184 },
	{ 1, 184 },
	{ 1, 70 },
	{ 1, 184 },
	{ 508, 70 },
	{ 508, 184 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0004A370[] = {
	{ 0 },
	{ 510, 0 },
	{ 510, 254 },
	{ 0 },
	{ 0, 254 },
	{ 510, 0 },
	{ 510, 254 },
	{ 2039, 0 },
	{ 2039, 254 },
	{ 1019, 0 },
	{ 1019, 254 },
	{ 0 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0 },
	{ 0, 254 },
	{ 1019, 0 },
	{ 1019, 254 },
	{ 2039, 0 },
	{ 2039, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0004A3C0[] = {
	{ 2039, -255 },
	{ 2039, 255 },
	{ 1019, -255 },
	{ 1019, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 510, 255 },
	{ 510, -255 },
	{ 510, 255 },
	{ 0, -255 },
	{ 510, 255 },
	{ 510, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 2039, 255 },
	{ 2039, -255 },
	{ 1019, 255 },
	{ 1019, -255 },
	{ 0, 255 },
	{ 0, -255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_0004A410[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polySTG12_0004A2B4, NULL, NULL, NULL, uvSTG12_0004A338, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, polySTG12_0004A2C2, NULL, NULL, NULL, uvSTG12_0004A350, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, polySTG12_0004A2D6, NULL, NULL, NULL, uvSTG12_0004A370, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, polySTG12_0004A306, NULL, NULL, NULL, uvSTG12_0004A3C0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_0004A470[] = {
	{ 60, 0, -690 },
	{ 70, 0, -690 },
	{ 300, 0, -690 },
	{ 290, 0, -690 },
	{ 59.99977f, 0, -610.0001f },
	{ 70, 0, -610 },
	{ 300, 0, -610 },
	{ 290, 0, -610 },
	{ 70, -100, -690 },
	{ 290, -100, -690 },
	{ 70, -100, -610 },
	{ 290, -100, -610 },
	{ 290, -30, -610 },
	{ 290, -30, -690 },
	{ 70, -30, -690 },
	{ 70, -30, -610 },
	{ 180, -100, -610 },
	{ 180, -100, -690 },
	{ 180, -30, -610 },
	{ 180, 0, -610 },
	{ 180, 0, -690 },
	{ 180, -30, -690 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0004A578[] = {
	{ 0, 1, 0 },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0, 1, 0 },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0, 1, 0 },
	{ 0.577352f, 0.577346f, -0.577352f },
	{ 0, 1, 0 },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_0004A680 = { vertexSTG12_0004A470, normalSTG12_0004A578, LengthOfArray(vertexSTG12_0004A470), meshlistSTG12_0004A410, matlistSTG12_0004A264, LengthOfArray(meshlistSTG12_0004A410), LengthOfArray(matlistSTG12_0004A264),{ 179.9999f, -50, -650 }, 126.4912f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004A6A8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0004A680, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004A6DC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0001AA38, 1680, 40, -649.9999f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004A710 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0001B738, 1680, 40, -649.9999f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004A744 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0001FCE0, -155, 0, -1055, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004A778 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0001FCE0, 305, 0, -1055, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004A7AC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0001FCE0, -725, 0, -500, 0, 0xFFFFC000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004A7E0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0001FCE0, -575, 0, -875, 0, 0xFFFFA38F, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004A814 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0001FCE0, -570, 0, -125, 0, 0xFFFFE000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004A848 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0002166C, 426.0001f, 122, -499.5002f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004A87C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0002166C, 466.0001f, 41, -324.5002f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004A8B0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0002FC98, 0, -100, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004A8E4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0002FC98, 0, -200, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004A918 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0002FC98, 0, 100, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004A94C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0002FC98, 0, 200, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004A980 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00030580, 0, 150, -167.5f, 0, 0x7FFF, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004A9B4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00030580, 0, 250, -167.5f, 0, 0x7FFF, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004A9E8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00030580, 0, -150, -167.5f, 0, 0x7FFF, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004AA1C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_000326AC, 75, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004AA50 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_000326AC, 195, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004AA84 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_000326AC, 315, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004AAB8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00032BC4, -249, 0, -569, 0, 0x2000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004AAEC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00032BC4, -278, 0, -500, 0, 0x4000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004AB20 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00032BC4, -249, 0, -431, 0, 0x5FFF, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004AB54 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00032BC4, -175, 0, -400, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004AB88 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00032BC4, -60, 0, -400, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004ABBC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00032BC4, 60, 0, -400, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004ABF0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00032BC4, -321, 0, -358, 0, 0x5FFF, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004AC24 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_00032BC4, -379, 0, -500, 0, 0x4000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004AC58 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0003BDDC, -37, 0, -245, 0, 0x4000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004AC8C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0003BDDC, 37, 0, -125, 0, 0xFFFFC000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004ACC0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0003CEE4, -37, 0, -125, 0, 0x4000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0004ACF4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG12_0003DFE0, -37, 0, -165, 0, 0x4000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_000315F4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 56, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00031644[] = {
	5, 8, 6, 0, 4, 2,
	5, 2, 12, 0, 10, 8
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003165C[] = {
	14, 8, 5, 6, 3, 4, 1, 2, 11, 12, 9, 10, 7, 8, 5
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003167C[] = {
	0x8000u | 14, 24, 18, 23, 17, 22, 16, 21, 15, 20, 14, 19, 13, 24, 18,
	0x8000u | 14, 11, 18, 1, 13, 3, 14, 5, 15, 7, 16, 9, 17, 11, 18
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000316B8[] = {
	0x8000u | 6, 24, 23, 19, 22, 20, 21
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000316C8[] = {
	{ 30, 127 },
	{ 79, 30 },
	{ 127, 127 },
	{ 175, 30 },
	{ 224, 127 },
	{ 224, 127 },
	{ 175, 224 },
	{ 127, 127 },
	{ 79, 224 },
	{ 30, 127 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000316F0[] = {
	{ 255, 0 },
	{ 169, 255 },
	{ 169, 0 },
	{ 84, 255 },
	{ 84, 0 },
	{ 0, 255 },
	{ 0 },
	{ 424, 255 },
	{ 424, 0 },
	{ 340, 255 },
	{ 340, 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 169, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00031728[] = {
	{ 1516, 1 },
	{ 1516, 173 },
	{ 1276, 1 },
	{ 1276, 173 },
	{ 1037, 1 },
	{ 1037, 173 },
	{ 776, 1 },
	{ 776, 173 },
	{ 513, 1 },
	{ 513, 173 },
	{ 251, 1 },
	{ 251, 173 },
	{ 11, 1 },
	{ 11, 173 },
	{ 11, 253 },
	{ 11, 173 },
	{ 251, 253 },
	{ 251, 173 },
	{ 513, 253 },
	{ 513, 173 },
	{ 776, 253 },
	{ 776, 173 },
	{ 1037, 253 },
	{ 1037, 173 },
	{ 1276, 253 },
	{ 1276, 173 },
	{ 1516, 253 },
	{ 1516, 173 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00031798[] = {
	{ 0, 255 },
	{ 0 },
	{ 127, 255 },
	{ 127, 0 },
	{ 255, 255 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_000317B0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, polySTG12_00031644, NULL, NULL, NULL, uvSTG12_000316C8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, polySTG12_0003165C, NULL, NULL, NULL, uvSTG12_000316F0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, polySTG12_0003167C, NULL, NULL, NULL, uvSTG12_00031728, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, polySTG12_000316B8, NULL, NULL, NULL, uvSTG12_00031798, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00031810[] = {
	{ 0, 25, -0.00002f },
	{ 10, -18, -0.00002f },
	{ 10, 25, -0.00002f },
	{ 5, -18, 8.660253f },
	{ 5, 25, 8.660253f },
	{ -5, -18, 8.660252f },
	{ -5, 25, 8.660252f },
	{ -10, -18, -0.00004f },
	{ -10, 25, -0.00004f },
	{ -4.999998f, -18, -8.660256f },
	{ -4.999998f, 25, -8.660256f },
	{ 5.000003f, -18, -8.660254f },
	{ 5.000003f, 25, -8.660254f },
	{ 13.19999f, -18, -0.00002f },
	{ 6.599997f, -18, 11.34493f },
	{ -6.599998f, -18, 11.34493f },
	{ -13.19999f, -18, -0.00004f },
	{ -6.599995f, -18, -11.34494f },
	{ 6.600002f, -18, -11.34493f },
	{ 13.19999f, -25, -0.00002f },
	{ 6.599997f, -25, 11.34493f },
	{ -6.599998f, -25, 11.34493f },
	{ -13.19999f, -25, -0.00004f },
	{ -6.599995f, -25, -11.34494f },
	{ 6.600002f, -25, -11.34493f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0003193C[] = {
	{ 0, 1, 0 },
	{ 0.544705f, 0.838628f, 0 },
	{ 0.792406f, 0.609994f, 0 },
	{ 0.272352f, 0.838628f, 0.471728f },
	{ 0.396203f, 0.609994f, 0.686244f },
	{ -0.272352f, 0.838628f, 0.471728f },
	{ -0.396203f, 0.609994f, 0.686244f },
	{ -0.544705f, 0.838628f, 0 },
	{ -0.792406f, 0.609994f, 0 },
	{ -0.272352f, 0.838628f, -0.471728f },
	{ -0.396203f, 0.609994f, -0.686244f },
	{ 0.272352f, 0.838628f, -0.471728f },
	{ 0.396203f, 0.609994f, -0.686243f },
	{ 0.792772f, 0.609518f, 0 },
	{ 0.394979f, 0.6102329f, 0.6867369f },
	{ -0.394979f, 0.6102329f, 0.6867369f },
	{ -0.792772f, 0.609518f, 0 },
	{ -0.394979f, 0.6102329f, -0.6867369f },
	{ 0.394979f, 0.6102329f, -0.6867369f },
	{ 0.792772f, -0.609518f, 0 },
	{ 0.394979f, -0.6102329f, 0.6867369f },
	{ -0.394979f, -0.6102329f, 0.6867369f },
	{ -0.792772f, -0.609518f, 0 },
	{ -0.394979f, -0.6102329f, -0.6867369f },
	{ 0.394979f, -0.6102329f, -0.6867369f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00031A68 = { vertexSTG12_00031810, normalSTG12_0003193C, LengthOfArray(vertexSTG12_00031810), meshlistSTG12_000317B0, matlistSTG12_000315F4, LengthOfArray(meshlistSTG12_000317B0), LengthOfArray(matlistSTG12_000315F4),{ 0, 0, -0.00002f }, 30.43504f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00031A90 = { NJD_EVAL_BREAK, &attachSTG12_00031A68, 0, 50, 0, 0x7FFF, 0, 0, 1.53f, 1, 1.53f, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00031AC4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 56, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00031B00[] = {
	0x8000u | 14, 1, 0, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00031B20[] = {
	0x8000u | 14, 17, 10, 12, 0, 13, 2, 14, 4, 15, 6, 16, 8, 17, 10,
	0x8000u | 14, 17, 23, 16, 22, 15, 21, 14, 20, 13, 19, 12, 18, 17, 23
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00031B5C[] = {
	{ 1, 254 },
	{ 1, 0 },
	{ 84, 255 },
	{ 84, 0 },
	{ 169, 255 },
	{ 169, 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 340, 255 },
	{ 340, 0 },
	{ 424, 255 },
	{ 424, 0 },
	{ 508, 254 },
	{ 508, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00031B94[] = {
	{ 11, 81 },
	{ 11, 1 },
	{ 251, 81 },
	{ 251, 1 },
	{ 513, 81 },
	{ 513, 1 },
	{ 776, 81 },
	{ 776, 1 },
	{ 1037, 81 },
	{ 1037, 1 },
	{ 1300, 81 },
	{ 1300, 1 },
	{ 1516, 81 },
	{ 1516, 1 },
	{ 1516, 81 },
	{ 1516, 253 },
	{ 1300, 81 },
	{ 1300, 253 },
	{ 1037, 81 },
	{ 1037, 253 },
	{ 776, 81 },
	{ 776, 253 },
	{ 513, 81 },
	{ 513, 253 },
	{ 251, 81 },
	{ 251, 253 },
	{ 11, 81 },
	{ 11, 253 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00031C04[] = {
	{ NJD_MESHSET_TRIMESH | 1, 1, polySTG12_00031B00, NULL, NULL, NULL, uvSTG12_00031B5C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, polySTG12_00031B20, NULL, NULL, NULL, uvSTG12_00031B94, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00031C34[] = {
	{ 10, -18, 0 },
	{ 10, 25, 0 },
	{ 5, -18, -8.660254f },
	{ 5, 25, -8.660254f },
	{ -5.000001f, -18, -8.660254f },
	{ -5.000001f, 25, -8.660254f },
	{ -10, -18, 0.000002f },
	{ -10, 25, 0.000002f },
	{ -4.999999f, -18, 8.660254f },
	{ -4.999999f, 25, 8.660254f },
	{ 5.000002f, -18, 8.660254f },
	{ 5.000002f, 25, 8.660254f },
	{ 13.19999f, -18, 0 },
	{ 6.599997f, -18, -11.34493f },
	{ -6.599999f, -18, -11.34493f },
	{ -13.19999f, -18, 0.000002f },
	{ -6.599995f, -18, 11.34493f },
	{ 6.600001f, -18, 11.34493f },
	{ 13.19999f, -25, 0 },
	{ 6.599997f, -25, -11.34493f },
	{ -6.599999f, -25, -11.34493f },
	{ -13.19999f, -25, 0.000002f },
	{ -6.599995f, -25, 11.34493f },
	{ 6.600001f, -25, 11.34493f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00031D54[] = {
	{ 0.544705f, 0.838628f, 0 },
	{ 1, 0, 0 },
	{ 0.272352f, 0.838628f, -0.471728f },
	{ 0.5f, 0, -0.866025f },
	{ -0.272352f, 0.838628f, -0.471728f },
	{ -0.5f, 0, -0.866025f },
	{ -0.544705f, 0.838628f, 0 },
	{ -1, 0, 0 },
	{ -0.272352f, 0.838628f, 0.471728f },
	{ -0.5f, 0, 0.866026f },
	{ 0.272352f, 0.838628f, 0.471728f },
	{ 0.5f, 0, 0.866025f },
	{ 0.792772f, 0.609518f, 0 },
	{ 0.394979f, 0.6102329f, -0.6867369f },
	{ -0.394979f, 0.6102329f, -0.6867369f },
	{ -0.792772f, 0.609518f, 0 },
	{ -0.394979f, 0.6102329f, 0.6867369f },
	{ 0.394979f, 0.6102329f, 0.6867369f },
	{ 1, 0, 0 },
	{ 0.498571f, 0, -0.8668489f },
	{ -0.498571f, 0, -0.8668489f },
	{ -1, 0, 0 },
	{ -0.498571f, 0, 0.8668489f },
	{ 0.498571f, 0, 0.8668489f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00031E74 = { vertexSTG12_00031C34, normalSTG12_00031D54, LengthOfArray(vertexSTG12_00031C34), meshlistSTG12_00031C04, matlistSTG12_00031AC4, LengthOfArray(meshlistSTG12_00031C04), LengthOfArray(matlistSTG12_00031AC4),{ 0 }, 27.45374f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00031E9C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attachSTG12_00031E74, 60, 105, -400, 0, 0, 0, 1, 1, 1, &objectSTG12_00031A90, NULL };

extern "C" __declspec(dllexport) NJS_MKEY_F animation_000320D0_1_pos[] = {
	{ 0, 0, 50, 0 },
	{ 1, 0, 47.14279f, 0 },
	{ 2, 0, 44.28554f, 0 },
	{ 3, 0, 41.42834f, 0 },
	{ 4, 0, 38.57117f, 0 },
	{ 5, 0, 35.71397f, 0 },
	{ 6, 0, 32.85669f, 0 },
	{ 7, 0, 29.99956f, 0 },
	{ 8, 0, 27.14235f, 0 },
	{ 9, 0, 24.28538f, 0 },
	{ 10, 0, 21.42779f, 0 },
	{ 11, 0, 18.5706f, 0 },
	{ 12, 0, 15.71342f, 0 },
	{ 13, 0, 12.85615f, 0 },
	{ 14, 0, 10, 0 },
	{ 15, 0, 12.66617f, 0 },
	{ 16, 0, 15.33224f, 0 },
	{ 17, 0, 17.99945f, 0 },
	{ 18, 0, 20.66609f, 0 },
	{ 19, 0, 23.33287f, 0 },
	{ 20, 0, 25.99933f, 0 },
	{ 21, 0, 28.66615f, 0 },
	{ 22, 0, 31.33293f, 0 },
	{ 23, 0, 33.99958f, 0 },
	{ 24, 0, 36.66631f, 0 },
	{ 25, 0, 39.33328f, 0 },
	{ 26, 0, 41.99977f, 0 },
	{ 27, 0, 44.66659f, 0 },
	{ 28, 0, 47.33325f, 0 },
	{ 29, 0, 50, 0 }
};

extern "C" __declspec(dllexport) NJS_MDATA2 animation_000320D0_mdat[] = {
	{ NULL, NULL, 0, 0 },
	{ animation_000320D0_1_pos, NULL, LengthOfArray(animation_000320D0_1_pos), 0 }
};

extern "C" __declspec(dllexport) NJS_MOTION animation_000320D0 = { animation_000320D0_mdat, 30, NJD_MTYPE_POS_0 | NJD_MTYPE_ANG_1, 2 };

extern "C" __declspec(dllexport) NJS_ACTION action_animation_000320D0 = { &objectSTG12_00031E9C, &animation_000320D0 };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_000320E4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 56, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00032134[] = {
	5, 8, 6, 0, 4, 2,
	5, 2, 12, 0, 10, 8
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003214C[] = {
	14, 8, 5, 6, 3, 4, 1, 2, 11, 12, 9, 10, 7, 8, 5
};

extern "C" __declspec(dllexport) Sint16 polySTG12_0003216C[] = {
	0x8000u | 14, 24, 18, 23, 17, 22, 16, 21, 15, 20, 14, 19, 13, 24, 18,
	0x8000u | 14, 11, 18, 1, 13, 3, 14, 5, 15, 7, 16, 9, 17, 11, 18
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000321A8[] = {
	0x8000u | 6, 24, 23, 19, 22, 20, 21
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000321B8[] = {
	{ 30, 127 },
	{ 79, 30 },
	{ 127, 127 },
	{ 175, 30 },
	{ 224, 127 },
	{ 224, 127 },
	{ 175, 224 },
	{ 127, 127 },
	{ 79, 224 },
	{ 30, 127 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_000321E0[] = {
	{ 255, 0 },
	{ 169, 255 },
	{ 169, 0 },
	{ 84, 255 },
	{ 84, 0 },
	{ 0, 255 },
	{ 0 },
	{ 424, 255 },
	{ 424, 0 },
	{ 340, 255 },
	{ 340, 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 169, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00032218[] = {
	{ 1516, 1 },
	{ 1516, 173 },
	{ 1276, 1 },
	{ 1276, 173 },
	{ 1037, 1 },
	{ 1037, 173 },
	{ 776, 1 },
	{ 776, 173 },
	{ 513, 1 },
	{ 513, 173 },
	{ 251, 1 },
	{ 251, 173 },
	{ 11, 1 },
	{ 11, 173 },
	{ 11, 253 },
	{ 11, 173 },
	{ 251, 253 },
	{ 251, 173 },
	{ 513, 253 },
	{ 513, 173 },
	{ 776, 253 },
	{ 776, 173 },
	{ 1037, 253 },
	{ 1037, 173 },
	{ 1276, 253 },
	{ 1276, 173 },
	{ 1516, 253 },
	{ 1516, 173 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00032288[] = {
	{ 0, 255 },
	{ 0 },
	{ 127, 255 },
	{ 127, 0 },
	{ 255, 255 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_000322A0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, polySTG12_00032134, NULL, NULL, NULL, uvSTG12_000321B8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, polySTG12_0003214C, NULL, NULL, NULL, uvSTG12_000321E0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, polySTG12_0003216C, NULL, NULL, NULL, uvSTG12_00032218, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, polySTG12_000321A8, NULL, NULL, NULL, uvSTG12_00032288, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00032300[] = {
	{ 0, 25, -0.00002f },
	{ 10, -18, -0.00002f },
	{ 10, 25, -0.00002f },
	{ 5, -18, 8.660253f },
	{ 5, 25, 8.660253f },
	{ -5, -18, 8.660252f },
	{ -5, 25, 8.660252f },
	{ -10, -18, -0.00004f },
	{ -10, 25, -0.00004f },
	{ -4.999998f, -18, -8.660256f },
	{ -4.999998f, 25, -8.660256f },
	{ 5.000003f, -18, -8.660254f },
	{ 5.000003f, 25, -8.660254f },
	{ 13.19999f, -18, -0.00002f },
	{ 6.599997f, -18, 11.34493f },
	{ -6.599998f, -18, 11.34493f },
	{ -13.19999f, -18, -0.00004f },
	{ -6.599995f, -18, -11.34494f },
	{ 6.600002f, -18, -11.34493f },
	{ 13.19999f, -25, -0.00002f },
	{ 6.599997f, -25, 11.34493f },
	{ -6.599998f, -25, 11.34493f },
	{ -13.19999f, -25, -0.00004f },
	{ -6.599995f, -25, -11.34494f },
	{ 6.600002f, -25, -11.34493f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_0003242C[] = {
	{ 0, 1, 0 },
	{ 0.544705f, 0.838628f, 0 },
	{ 0.792406f, 0.609994f, 0 },
	{ 0.272352f, 0.838628f, 0.471728f },
	{ 0.396203f, 0.609994f, 0.686244f },
	{ -0.272352f, 0.838628f, 0.471728f },
	{ -0.396203f, 0.609994f, 0.686244f },
	{ -0.544705f, 0.838628f, 0 },
	{ -0.792406f, 0.609994f, 0 },
	{ -0.272352f, 0.838628f, -0.471728f },
	{ -0.396203f, 0.609994f, -0.686244f },
	{ 0.272352f, 0.838628f, -0.471728f },
	{ 0.396203f, 0.609994f, -0.686243f },
	{ 0.792772f, 0.609518f, 0 },
	{ 0.394979f, 0.6102329f, 0.6867369f },
	{ -0.394979f, 0.6102329f, 0.6867369f },
	{ -0.792772f, 0.609518f, 0 },
	{ -0.394979f, 0.6102329f, -0.6867369f },
	{ 0.394979f, 0.6102329f, -0.6867369f },
	{ 0.792772f, -0.609518f, 0 },
	{ 0.394979f, -0.6102329f, 0.6867369f },
	{ -0.394979f, -0.6102329f, 0.6867369f },
	{ -0.792772f, -0.609518f, 0 },
	{ -0.394979f, -0.6102329f, -0.6867369f },
	{ 0.394979f, -0.6102329f, -0.6867369f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00032558 = { vertexSTG12_00032300, normalSTG12_0003242C, LengthOfArray(vertexSTG12_00032300), meshlistSTG12_000322A0, matlistSTG12_000320E4, LengthOfArray(meshlistSTG12_000322A0), LengthOfArray(matlistSTG12_000320E4),{ 0, 0, -0.00002f }, 30.43504f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00032580 = { NJD_EVAL_BREAK, &attachSTG12_00032558, 0, 30, 0, 0x7FFF, 0, 0, 1.53f, 1, 1.53f, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_000325B4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 56, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000325F0[] = {
	0x8000u | 14, 1, 0, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00032610[] = {
	0x8000u | 14, 17, 10, 12, 0, 13, 2, 14, 4, 15, 6, 16, 8, 17, 10,
	0x8000u | 14, 17, 23, 16, 22, 15, 21, 14, 20, 13, 19, 12, 18, 17, 23
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003264C[] = {
	{ 1, 254 },
	{ 1, 0 },
	{ 84, 255 },
	{ 84, 0 },
	{ 169, 255 },
	{ 169, 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 340, 255 },
	{ 340, 0 },
	{ 424, 255 },
	{ 424, 0 },
	{ 508, 254 },
	{ 508, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00032684[] = {
	{ 11, 81 },
	{ 11, 1 },
	{ 251, 81 },
	{ 251, 1 },
	{ 513, 81 },
	{ 513, 1 },
	{ 776, 81 },
	{ 776, 1 },
	{ 1037, 81 },
	{ 1037, 1 },
	{ 1300, 81 },
	{ 1300, 1 },
	{ 1516, 81 },
	{ 1516, 1 },
	{ 1516, 81 },
	{ 1516, 253 },
	{ 1300, 81 },
	{ 1300, 253 },
	{ 1037, 81 },
	{ 1037, 253 },
	{ 776, 81 },
	{ 776, 253 },
	{ 513, 81 },
	{ 513, 253 },
	{ 251, 81 },
	{ 251, 253 },
	{ 11, 81 },
	{ 11, 253 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_000326F4[] = {
	{ NJD_MESHSET_TRIMESH | 1, 1, polySTG12_000325F0, NULL, NULL, NULL, uvSTG12_0003264C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, polySTG12_00032610, NULL, NULL, NULL, uvSTG12_00032684, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00032724[] = {
	{ 10, -18, 0 },
	{ 10, 25, 0 },
	{ 5, -18, -8.660254f },
	{ 5, 25, -8.660254f },
	{ -5.000001f, -18, -8.660254f },
	{ -5.000001f, 25, -8.660254f },
	{ -10, -18, 0.000002f },
	{ -10, 25, 0.000002f },
	{ -4.999999f, -18, 8.660254f },
	{ -4.999999f, 25, 8.660254f },
	{ 5.000002f, -18, 8.660254f },
	{ 5.000002f, 25, 8.660254f },
	{ 13.19999f, -18, 0 },
	{ 6.599997f, -18, -11.34493f },
	{ -6.599999f, -18, -11.34493f },
	{ -13.19999f, -18, 0.000002f },
	{ -6.599995f, -18, 11.34493f },
	{ 6.600001f, -18, 11.34493f },
	{ 13.19999f, -25, 0 },
	{ 6.599997f, -25, -11.34493f },
	{ -6.599999f, -25, -11.34493f },
	{ -13.19999f, -25, 0.000002f },
	{ -6.599995f, -25, 11.34493f },
	{ 6.600001f, -25, 11.34493f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00032844[] = {
	{ 0.544705f, 0.838628f, 0 },
	{ 1, 0, 0 },
	{ 0.272352f, 0.838628f, -0.471728f },
	{ 0.5f, 0, -0.866025f },
	{ -0.272352f, 0.838628f, -0.471728f },
	{ -0.5f, 0, -0.866025f },
	{ -0.544705f, 0.838628f, 0 },
	{ -1, 0, 0 },
	{ -0.272352f, 0.838628f, 0.471728f },
	{ -0.5f, 0, 0.866026f },
	{ 0.272352f, 0.838628f, 0.471728f },
	{ 0.5f, 0, 0.866025f },
	{ 0.792772f, 0.609518f, 0 },
	{ 0.394979f, 0.6102329f, -0.6867369f },
	{ -0.394979f, 0.6102329f, -0.6867369f },
	{ -0.792772f, 0.609518f, 0 },
	{ -0.394979f, 0.6102329f, 0.6867369f },
	{ 0.394979f, 0.6102329f, 0.6867369f },
	{ 1, 0, 0 },
	{ 0.498571f, 0, -0.8668489f },
	{ -0.498571f, 0, -0.8668489f },
	{ -1, 0, 0 },
	{ -0.498571f, 0, 0.8668489f },
	{ 0.498571f, 0, 0.8668489f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00032964 = { vertexSTG12_00032724, normalSTG12_00032844, LengthOfArray(vertexSTG12_00032724), meshlistSTG12_000326F4, matlistSTG12_000325B4, LengthOfArray(meshlistSTG12_000326F4), LengthOfArray(matlistSTG12_000325B4),{ 0 }, 27.45374f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0003298C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attachSTG12_00032964, -3, 105, -400, 0, 0, 0, 1, 1, 1, &objectSTG12_00032580, NULL };

extern "C" __declspec(dllexport) NJS_MKEY_F animation_00032BC0_1_pos[] = {
	{ 0, 0, 30, 0 },
	{ 1, 0, 32.22227f, 0 },
	{ 2, 0, 34.44445f, 0 },
	{ 3, 0, 36.66681f, 0 },
	{ 4, 0, 38.88908f, 0 },
	{ 5, 0, 41.11111f, 0 },
	{ 6, 0, 43.33353f, 0 },
	{ 7, 0, 45.55597f, 0 },
	{ 8, 0, 47.77826f, 0 },
	{ 9, 0, 50, 0 },
	{ 10, 0, 48.0003f, 0 },
	{ 11, 0, 46.00019f, 0 },
	{ 12, 0, 44.00024f, 0 },
	{ 13, 0, 42.00013f, 0 },
	{ 14, 0, 40.00005f, 0 },
	{ 15, 0, 37.99995f, 0 },
	{ 16, 0, 35.99982f, 0 },
	{ 17, 0, 33.99974f, 0 },
	{ 18, 0, 31.99985f, 0 },
	{ 19, 0, 30, 0 },
	{ 20, 0, 27.00001f, 0 },
	{ 21, 0, 24, 0 },
	{ 22, 0, 20.99985f, 0 },
	{ 23, 0, 17.99983f, 0 },
	{ 24, 0, 15, 0 },
	{ 25, 0, 17.99976f, 0 },
	{ 26, 0, 20.99972f, 0 },
	{ 27, 0, 23.99983f, 0 },
	{ 28, 0, 26.99989f, 0 },
	{ 29, 0, 30, 0 }
};

extern "C" __declspec(dllexport) NJS_MDATA2 animation_00032BC0_mdat[] = {
	{ NULL, NULL, 0, 0 },
	{ animation_00032BC0_1_pos, NULL, LengthOfArray(animation_00032BC0_1_pos), 0 }
};

extern "C" __declspec(dllexport) NJS_MOTION animation_00032BC0 = { animation_00032BC0_mdat, 30, NJD_MTYPE_POS_0 | NJD_MTYPE_ANG_1, 2 };

extern "C" __declspec(dllexport) NJS_ACTION action_animation_00032BC0 = { &objectSTG12_0003298C, &animation_00032BC0 };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_00032BD4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 56, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00032C24[] = {
	5, 8, 6, 0, 4, 2,
	5, 2, 12, 0, 10, 8
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00032C3C[] = {
	14, 8, 5, 6, 3, 4, 1, 2, 11, 12, 9, 10, 7, 8, 5
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00032C5C[] = {
	0x8000u | 14, 24, 18, 23, 17, 22, 16, 21, 15, 20, 14, 19, 13, 24, 18,
	0x8000u | 14, 11, 18, 1, 13, 3, 14, 5, 15, 7, 16, 9, 17, 11, 18
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00032C98[] = {
	0x8000u | 6, 24, 23, 19, 22, 20, 21
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00032CA8[] = {
	{ 30, 127 },
	{ 79, 30 },
	{ 127, 127 },
	{ 175, 30 },
	{ 224, 127 },
	{ 224, 127 },
	{ 175, 224 },
	{ 127, 127 },
	{ 79, 224 },
	{ 30, 127 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00032CD0[] = {
	{ 255, 0 },
	{ 169, 255 },
	{ 169, 0 },
	{ 84, 255 },
	{ 84, 0 },
	{ 0, 255 },
	{ 0 },
	{ 424, 255 },
	{ 424, 0 },
	{ 340, 255 },
	{ 340, 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 169, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00032D08[] = {
	{ 1516, 1 },
	{ 1516, 173 },
	{ 1276, 1 },
	{ 1276, 173 },
	{ 1037, 1 },
	{ 1037, 173 },
	{ 776, 1 },
	{ 776, 173 },
	{ 513, 1 },
	{ 513, 173 },
	{ 251, 1 },
	{ 251, 173 },
	{ 11, 1 },
	{ 11, 173 },
	{ 11, 253 },
	{ 11, 173 },
	{ 251, 253 },
	{ 251, 173 },
	{ 513, 253 },
	{ 513, 173 },
	{ 776, 253 },
	{ 776, 173 },
	{ 1037, 253 },
	{ 1037, 173 },
	{ 1276, 253 },
	{ 1276, 173 },
	{ 1516, 253 },
	{ 1516, 173 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00032D78[] = {
	{ 0, 255 },
	{ 0 },
	{ 127, 255 },
	{ 127, 0 },
	{ 255, 255 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_00032D90[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, polySTG12_00032C24, NULL, NULL, NULL, uvSTG12_00032CA8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, polySTG12_00032C3C, NULL, NULL, NULL, uvSTG12_00032CD0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, polySTG12_00032C5C, NULL, NULL, NULL, uvSTG12_00032D08, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, polySTG12_00032C98, NULL, NULL, NULL, uvSTG12_00032D78, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00032DF0[] = {
	{ 0, 25, -0.00002f },
	{ 10, -18, -0.00002f },
	{ 10, 25, -0.00002f },
	{ 5, -18, 8.660253f },
	{ 5, 25, 8.660253f },
	{ -5, -18, 8.660252f },
	{ -5, 25, 8.660252f },
	{ -10, -18, -0.00004f },
	{ -10, 25, -0.00004f },
	{ -4.999998f, -18, -8.660256f },
	{ -4.999998f, 25, -8.660256f },
	{ 5.000003f, -18, -8.660254f },
	{ 5.000003f, 25, -8.660254f },
	{ 13.19999f, -18, -0.00002f },
	{ 6.599997f, -18, 11.34493f },
	{ -6.599998f, -18, 11.34493f },
	{ -13.19999f, -18, -0.00004f },
	{ -6.599995f, -18, -11.34494f },
	{ 6.600002f, -18, -11.34493f },
	{ 13.19999f, -25, -0.00002f },
	{ 6.599997f, -25, 11.34493f },
	{ -6.599998f, -25, 11.34493f },
	{ -13.19999f, -25, -0.00004f },
	{ -6.599995f, -25, -11.34494f },
	{ 6.600002f, -25, -11.34493f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00032F1C[] = {
	{ 0, 1, 0 },
	{ 0.544705f, 0.838628f, 0 },
	{ 0.792406f, 0.609994f, 0 },
	{ 0.272352f, 0.838628f, 0.471728f },
	{ 0.396203f, 0.609994f, 0.686244f },
	{ -0.272352f, 0.838628f, 0.471728f },
	{ -0.396203f, 0.609994f, 0.686244f },
	{ -0.544705f, 0.838628f, 0 },
	{ -0.792406f, 0.609994f, 0 },
	{ -0.272352f, 0.838628f, -0.471728f },
	{ -0.396203f, 0.609994f, -0.686244f },
	{ 0.272352f, 0.838628f, -0.471728f },
	{ 0.396203f, 0.609994f, -0.686243f },
	{ 0.792772f, 0.609518f, 0 },
	{ 0.394979f, 0.6102329f, 0.6867369f },
	{ -0.394979f, 0.6102329f, 0.6867369f },
	{ -0.792772f, 0.609518f, 0 },
	{ -0.394979f, 0.6102329f, -0.6867369f },
	{ 0.394979f, 0.6102329f, -0.6867369f },
	{ 0.792772f, -0.609518f, 0 },
	{ 0.394979f, -0.6102329f, 0.6867369f },
	{ -0.394979f, -0.6102329f, 0.6867369f },
	{ -0.792772f, -0.609518f, 0 },
	{ -0.394979f, -0.6102329f, -0.6867369f },
	{ 0.394979f, -0.6102329f, -0.6867369f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00033048 = { vertexSTG12_00032DF0, normalSTG12_00032F1C, LengthOfArray(vertexSTG12_00032DF0), meshlistSTG12_00032D90, matlistSTG12_00032BD4, LengthOfArray(meshlistSTG12_00032D90), LengthOfArray(matlistSTG12_00032BD4),{ 0, 0, -0.00002f }, 30.43504f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_00033070 = { NJD_EVAL_BREAK, &attachSTG12_00033048, 0, 10, 0, 0x7FFF, 0, 0, 1.53f, 1, 1.53f, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistSTG12_000330A4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 56, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polySTG12_000330E0[] = {
	0x8000u | 14, 1, 0, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
};

extern "C" __declspec(dllexport) Sint16 polySTG12_00033100[] = {
	0x8000u | 14, 17, 10, 12, 0, 13, 2, 14, 4, 15, 6, 16, 8, 17, 10,
	0x8000u | 14, 17, 23, 16, 22, 15, 21, 14, 20, 13, 19, 12, 18, 17, 23
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_0003313C[] = {
	{ 1, 254 },
	{ 1, 0 },
	{ 84, 255 },
	{ 84, 0 },
	{ 169, 255 },
	{ 169, 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 340, 255 },
	{ 340, 0 },
	{ 424, 255 },
	{ 424, 0 },
	{ 508, 254 },
	{ 508, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uvSTG12_00033174[] = {
	{ 11, 81 },
	{ 11, 1 },
	{ 251, 81 },
	{ 251, 1 },
	{ 513, 81 },
	{ 513, 1 },
	{ 776, 81 },
	{ 776, 1 },
	{ 1037, 81 },
	{ 1037, 1 },
	{ 1300, 81 },
	{ 1300, 1 },
	{ 1516, 81 },
	{ 1516, 1 },
	{ 1516, 81 },
	{ 1516, 253 },
	{ 1300, 81 },
	{ 1300, 253 },
	{ 1037, 81 },
	{ 1037, 253 },
	{ 776, 81 },
	{ 776, 253 },
	{ 513, 81 },
	{ 513, 253 },
	{ 251, 81 },
	{ 251, 253 },
	{ 11, 81 },
	{ 11, 253 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistSTG12_000331E4[] = {
	{ NJD_MESHSET_TRIMESH | 1, 1, polySTG12_000330E0, NULL, NULL, NULL, uvSTG12_0003313C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, polySTG12_00033100, NULL, NULL, NULL, uvSTG12_00033174, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexSTG12_00033214[] = {
	{ 10, -18, 0 },
	{ 10, 25, 0 },
	{ 5, -18, -8.660254f },
	{ 5, 25, -8.660254f },
	{ -5.000001f, -18, -8.660254f },
	{ -5.000001f, 25, -8.660254f },
	{ -10, -18, 0.000002f },
	{ -10, 25, 0.000002f },
	{ -4.999999f, -18, 8.660254f },
	{ -4.999999f, 25, 8.660254f },
	{ 5.000002f, -18, 8.660254f },
	{ 5.000002f, 25, 8.660254f },
	{ 13.19999f, -18, 0 },
	{ 6.599997f, -18, -11.34493f },
	{ -6.599999f, -18, -11.34493f },
	{ -13.19999f, -18, 0.000002f },
	{ -6.599995f, -18, 11.34493f },
	{ 6.600001f, -18, 11.34493f },
	{ 13.19999f, -25, 0 },
	{ 6.599997f, -25, -11.34493f },
	{ -6.599999f, -25, -11.34493f },
	{ -13.19999f, -25, 0.000002f },
	{ -6.599995f, -25, 11.34493f },
	{ 6.600001f, -25, 11.34493f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalSTG12_00033334[] = {
	{ 0.544705f, 0.838628f, 0 },
	{ 1, 0, 0 },
	{ 0.272352f, 0.838628f, -0.471728f },
	{ 0.5f, 0, -0.866025f },
	{ -0.272352f, 0.838628f, -0.471728f },
	{ -0.5f, 0, -0.866025f },
	{ -0.544705f, 0.838628f, 0 },
	{ -1, 0, 0 },
	{ -0.272352f, 0.838628f, 0.471728f },
	{ -0.5f, 0, 0.866026f },
	{ 0.272352f, 0.838628f, 0.471728f },
	{ 0.5f, 0, 0.866025f },
	{ 0.792772f, 0.609518f, 0 },
	{ 0.394979f, 0.6102329f, -0.6867369f },
	{ -0.394979f, 0.6102329f, -0.6867369f },
	{ -0.792772f, 0.609518f, 0 },
	{ -0.394979f, 0.6102329f, 0.6867369f },
	{ 0.394979f, 0.6102329f, 0.6867369f },
	{ 1, 0, 0 },
	{ 0.498571f, 0, -0.8668489f },
	{ -0.498571f, 0, -0.8668489f },
	{ -1, 0, 0 },
	{ -0.498571f, 0, 0.8668489f },
	{ 0.498571f, 0, 0.8668489f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachSTG12_00033454 = { vertexSTG12_00033214, normalSTG12_00033334, LengthOfArray(vertexSTG12_00033214), meshlistSTG12_000331E4, matlistSTG12_000330A4, LengthOfArray(meshlistSTG12_000331E4), LengthOfArray(matlistSTG12_000330A4),{ 0 }, 27.45374f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectSTG12_0003347C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attachSTG12_00033454, -60, 105, -400, 0, 0, 0, 1, 1, 1, &objectSTG12_00033070, NULL };

extern "C" __declspec(dllexport) NJS_MKEY_F animation_000336A0_1_pos[] = {
	{ 0, 0, 10, 0 },
	{ 2, 0, 10, 0 },
	{ 3, 0, 11.10255f, 0 },
	{ 4, 0, 13.95978f, 0 },
	{ 5, 0, 16.817f, 0 },
	{ 6, 0, 19.67418f, 0 },
	{ 7, 0, 22.53133f, 0 },
	{ 8, 0, 25.38856f, 0 },
	{ 9, 0, 28.24588f, 0 },
	{ 10, 0, 31.10284f, 0 },
	{ 11, 0, 33.96031f, 0 },
	{ 12, 0, 36.81753f, 0 },
	{ 13, 0, 39.67398f, 0 },
	{ 14, 0, 42.53184f, 0 },
	{ 15, 0, 45.19844f, 0 },
	{ 16, 0, 47.86566f, 0 },
	{ 17, 0, 49.47017f, 0 },
	{ 18, 0, 46.80247f, 0 },
	{ 19, 0, 44.13602f, 0 },
	{ 20, 0, 41.46974f, 0 },
	{ 21, 0, 38.80232f, 0 },
	{ 22, 0, 36.13557f, 0 },
	{ 23, 0, 33.46948f, 0 },
	{ 24, 0, 30.80263f, 0 },
	{ 25, 0, 28.13589f, 0 },
	{ 26, 0, 25.46927f, 0 },
	{ 27, 0, 22.80248f, 0 },
	{ 28, 0, 20.1356f, 0 },
	{ 29, 0, 17.46905f, 0 }
};

extern "C" __declspec(dllexport) NJS_MDATA2 animation_000336A0_mdat[] = {
	{ NULL, NULL, 0, 0 },
	{ animation_000336A0_1_pos, NULL, LengthOfArray(animation_000336A0_1_pos), 0 }
};

extern "C" __declspec(dllexport) NJS_MOTION animation_000336A0 = { animation_000336A0_mdat, 30, NJD_MTYPE_POS_0 | NJD_MTYPE_ANG_1, 2 };

extern "C" __declspec(dllexport) NJS_ACTION action_animation_000336A0 = { &objectSTG12_0003347C, &animation_000336A0 };

extern "C" __declspec(dllexport) COL collist_00018020[] = {
	{ { 417.5f, 0, -650 }, 124.1219f, 0, 0, &objectSTG12_0001983C, 0, 0xA0000001 },
	{ { 165.0058f, 75, -810 }, 246.2775f, 0, 0, &objectSTG12_00019EB8, 0, 0xA0000001 },
	{ { 942.5f, -4.500216f, -650 }, 55.10445f, 0, 0, &objectSTG12_0001A17C, 0, 0xC0000001 },
	{ { 1920, 40, -650 }, 74.83315f, 0, 0, &objectSTG12_0001A724, 0, 0xC0000001 },
	{ { 1200, 86, -650 }, 225.69f, 0, 0, &objectSTG12_0001AA60, 0, 0xA0000001 },
	{ { -100, 75.75f, -795 }, 76.43993f, 0, 0, &objectSTG12_0001ACCC, 0, 0xA0000001 },
	{ { -427.5731f, 75.00001f, -671.2241f }, 118.7057f, 0, 0, &objectSTG12_0001AF38, 0, 0xA0000001 },
	{ { -320.1959f, 135, -500 }, 480.3404f, 0, 0, &objectSTG12_0001B234, 0, 0x20000001 },
	{ { 165, 135, -900.9963f }, 231.6268f, 0, 0, &objectSTG12_0001B3C4, 0, 0x20000001 },
	{ { 1200, 46, -650 }, 228.2893f, 0, 0, &objectSTG12_0001B760, 0, 0x20000001 },
	{ { -10, 103, -490 }, 126.4476f, 0, 0, &objectSTG12_0001B8C0, 0, 0x20000001 },
	{ { 0.00010589f, 39.12499f, 0.009002499f }, 76.08833f, 0, 0, &objectSTG12_0001BACC, 0, 0x20000001 },
	{ { 750, 82.10773f, -650 }, 53.39764f, 0, 0, &objectSTG12_0001BD3C, 0, 0x40000001 },
	{ { -154.902f, 35.74998f, -510 }, 295.738f, 0, 0, &objectSTG12_0001C37C, 0, 0x20000001 },
	{ { -104.902f, 35, -500.0001f }, 191.096f, 0, 0, &objectSTG12_0001C6E4, 0, 0x20000001 },
	{ { 120, 35, -785 }, 198.1161f, 0, 0, &objectSTG12_0001C944, 0, 0x20000001 },
	{ { -340.7837f, 35, -389.1829f }, 321.918f, 0, 0, &objectSTG12_0001CCDC, 0, 0x20000001 },
	{ { -287.5871f, 35.74997f, -747.1058f }, 189.6067f, 0, 0, &objectSTG12_0001D0D4, 0, 0x20000001 },
	{ { 297.5f, 35, -649.9998f }, 243.3747f, 0, 0, &objectSTG12_0001D368, 0, 0x20000001 },
	{ { 575.4926f, 145, -475.4925f }, 173.8307f, 0, 0, &objectSTG12_0001D4C4, 0, 0x20000001 },
	{ { 749, 39.50001f, -649.931f }, 280.9553f, 0, 0, &objectSTG12_0001D894, 0, 0x20000001 },
	{ { 0.09989565f, 20.5f, 0.1052556f }, 27.18492f, 0, 0, &objectSTG12_0001DEB4, 0, 0xC0000001 },
	{ { -100, 42.5f, -499.9999f }, 228.6935f, 0, 0, &objectSTG12_0001F2DC, 0, 0xC0000001 },
	{ { 260.2048f, -35.25f, -564.3531f }, 221.13f, 0, 0, &objectSTG12_0001F508, 0, 0x80000020 },
	{ { -161.25f, 79.5f, 12.25003f }, 316.5645f, 0, 0, &objectSTG12_0001FD08, 0, 0x80000020 },
	{ { 121.0001f, 13.75f, -230.2955f }, 247.6367f, 0, 0, &objectSTG12_00020004, 0, 0x80000020 },
	{ { 690.7432f, 200, -186.7383f }, 544.1529f, 0, 0, &objectSTG12_00020340, 0, 0x80000020 },
	{ { -565.8498f, 200, -119.4001f }, 519.3257f, 0, 0, &objectSTG12_0002067C, 0, 0x80000020 },
	{ { 530.8503f, 200, -1213.62f }, 534.7332f, 0, 0, &objectSTG12_000209B8, 0, 0x80000020 },
	{ { -507.875f, 200, -977.625f }, 549.5017f, 0, 0, &objectSTG12_00020CF4, 0, 0x80000020 },
	{ { 121.0001f, 60.5f, -499.0002f }, 175.218f, 0, 0, &objectSTG12_00021694, 0, 0x80000020 },
	{ { -154.902f, -0.000045f, -490.0001f }, 293.5692f, 0, 0, &objectSTG12_00021ABC, 0, 0xA0000001 },
	{ { -324.808f, 75, -500 }, 489.6184f, 0, 0, &objectSTG12_0002255C, 0, 0xA0000001 },
	{ { -115.098f, 75, -500 }, 206.8436f, 0, 0, &objectSTG12_00022C88, 0, 0x80000001 },
	{ { 180, 75, -710 }, 121.7579f, 0, 0, &objectSTG12_00023918, 0, 0x80000001 },
	{ { 109.9822f, 105, -594.9527f }, 202.4831f, 0, 0, &objectSTG12_00023EF8, 0, 0xA0000001 },
	{ { 0.00000368f, 40, -299.9498f }, 72.80798f, 0, 0, &objectSTG12_000246E4, 0, 0xC0000001 },
	{ { -104.902f, 0.0000005f, -500.0001f }, 187.8635f, 0, 0, &objectSTG12_00024994, 0, 0xA0000001 },
	{ { -154.8041f, 80, -490.0001f }, 293.4975f, 0, 0, &objectSTG12_00024E48, 0, 0xA0000001 },
	{ { 180, 79, -650 }, 123.6932f, 0, 0, &objectSTG12_00024F4C, 0, 0x80000001 },
	{ { -110, 75, -225 }, 90.27735f, 0, 0, &objectSTG12_000251F8, 0, 0xA0000001 },
	{ { -9.999985f, 101.5f, -239 }, 167.8191f, 0, 0, &objectSTG12_000256D4, 0, 0xA0000001 },
	{ { -244.8041f, 101.5f, -500 }, 228.3382f, 0, 0, &objectSTG12_0002641C, 0, 0xC0000001 },
	{ { 110, 101.5f, -650 }, 195.3516f, 0, 0, &objectSTG12_0002694C, 0, 0xA0000001 },
	{ { 750.0001f, 30.25f, -324.7048f }, 29.30772f, 0, 0, &objectSTG12_00026C1C, 0, 0xC0000001 },
	{ { 750.0001f, 109.25f, -324.7048f }, 29.30772f, 0, 0, &objectSTG12_00026EEC, 0, 0xC0000001 },
	{ { 750.0001f, -0.5000956f, -447.2048f }, 91.66485f, 0, 0, &objectSTG12_000278FC, 0, 0xC0000001 },
	{ { 750.0001f, 30.25f, -455.7048f }, 29.30772f, 0, 0, &objectSTG12_00027BCC, 0, 0xC0000001 },
	{ { 705.3672f, 115, -400.7285f }, 63.75658f, 0, 0, &objectSTG12_00028100, 0, 0xC0000001 },
	{ { 705.418f, 112.75f, -403.0498f }, 28.80667f, 0, 0, &objectSTG12_000283D0, 0, 0xC0000001 },
	{ { 643, -57.50011f, -649.9999f }, 40.38873f, 0, 0, &objectSTG12_00028A90, 0, 0xC0000001 },
	{ { 643, -57.50011f, -649.9999f }, 40.38873f, 0, 0, &objectSTG12_00028A90_2, 0, 0x82040001 },
	{ { -287.1407f, 80.00001f, -761.4557f }, 177.0914f, 0, 0, &objectSTG12_00028C0C, 0, 0xA0000001 },
	{ { 750.0001f, 32.75f, -390.2048f }, 67.83575f, 0, 0, &objectSTG12_00029148, 0, 0xA0000001 },
	{ { 739.0037f, 111.25f, -375.9755f }, 60.27956f, 0, 0, &objectSTG12_000299E4, 0, 0xC0000001 },
	{ { 749.9999f, -19.75f, -974.2952f }, 29.30773f, 0, 0, &objectSTG12_00029CB4, 0, 0xC0000001 },
	{ { 749.9999f, 109.25f, -974.2952f }, 29.30773f, 0, 0, &objectSTG12_00029F84, 0, 0xC0000001 },
	{ { 749.9999f, 109.75f, -835.2951f }, 28.96452f, 0, 0, &objectSTG12_0002A254, 0, 0xC0000001 },
	{ { 750, -0.5000893f, -855.965f }, 90.87682f, 0, 0, &objectSTG12_0002A788, 0, 0xA0000001 },
	{ { 749.9999f, 116.2499f, -835.7953f }, 47.81792f, 0, 0, &objectSTG12_0002AB8C, 0, 0xC0000001 },
	{ { 749.9999f, -17.24999f, -912.7953f }, 64.29379f, 0, 0, &objectSTG12_0002B0C8, 0, 0xA0000001 },
	{ { 749.9999f, 111.25f, -904.7953f }, 71.26848f, 0, 0, &objectSTG12_0002B604, 0, 0xA0000001 },
	{ { 749.9999f, 92.5f, -270.0002f }, 115.3835f, 0, 0, &objectSTG12_0002C124, 0, 0xC0000001 },
	{ { 749.9999f, 67.5f, -1029 }, 136.0638f, 0, 0, &objectSTG12_0002CDAC, 0, 0xC0000001 },
	{ { 1680, 25, -649.9998f }, 229.4014f, 0, 0, &objectSTG12_0002D200, 0, 0x80000000 },
	{ { 1200, 25, -649.9998f }, 229.4014f, 0, 0, &objectSTG12_0002D654, 0, 0x80000000 },
	{ { 1680, 40, -649.9998f }, 231.5167f, 0, 0, &objectSTG12_0002DE98, 0, 0x80000000 },
	{ { 1200, 40, -649.9998f }, 231.5167f, 0, 0, &objectSTG12_0002E6DC, 0, 0x80000000 },
	{ { 1680, 32.5f, -689.9999f }, 221.7124f, 0, 0, &objectSTG12_0002E894, 0, 0x80040001 },
	{ { 1680, 32.5f, -609.9999f }, 221.7121f, 0, 0, &objectSTG12_0002EA4C, 0, 0x80040001 },
	{ { 1200, 32.5f, -609.9999f }, 221.7121f, 0, 0, &objectSTG12_0002EC04, 0, 0x80040001 },
	{ { 1200, 32.5f, -689.9999f }, 221.7124f, 0, 0, &objectSTG12_0002EDBC, 0, 0x80040001 },
	{ { -100, 38.75f, -780 }, 95.25f, 0, 0, &objectSTG12_0002F1AC, 0, 0x80000000 },
	{ { -417.0589f, 38.25f, -665.6132f }, 136.22f, 0, 0, &objectSTG12_0002F59C, 0, 0x80000000 },
	{ { -0.06249094f, 150, 51.00006f }, 85.3428f, 0, 0, &objectSTG12_0002FCC0, 0, 0x80000000 },
	{ { 65, 40, -499 }, 99.52888f, 0, 0, &objectSTG12_0002FF28, 0, 0x80000000 },
	{ { 0.00014118f, 150, 51 }, 80.91208f, 0, 0, &objectSTG12_000305A8, 0, 0x80000000 },
	{ { 0.00014118f, 50, 50.99103f }, 80.91708f, 0, 0, &objectSTG12_00030D64, 0, 0x80000000 },
	{ { 0.00000116f, 40, 0.00000731f }, 72.11102f, 0, 0, &objectSTG12_000310A0, 0, 0x80000000 },
	{ { -60, 43, -650 }, 71.19691f, 0, 0, &objectSTG12_000326D4, 0, 0x80000000 },
	{ { -180, 38, -600 }, 34.62658f, 0, 0, &objectSTG12_00032BEC, 0, 0x80000000 },
	{ { -165.098f, 3, -500 }, 307.8605f, 0, 0, &objectSTG12_000337EC, 0, 0x80000000 },
	{ { -115.098f, 2.999999f, -500 }, 206.805f, 0, 0, &objectSTG12_000341CC, 0, 0x80000000 },
	{ { 296, 3, -700 }, 236.2308f, 0, 0, &objectSTG12_000343FC, 0, 0x80000000 },
	{ { 295.9999f, 3, -605.0001f }, 236.0721f, 0, 0, &objectSTG12_000345A8, 0, 0x80000000 },
	{ { 165, 89, -902.5f }, 225.0228f, 0, 0, &objectSTG12_000348E4, 0, 0x80000000 },
	{ { 165, 82, -902.5f }, 225.0228f, 0, 0, &objectSTG12_00034C1C, 0, 0x80000000 },
	{ { -322.3599f, 88.99999f, -500 }, 484.8091f, 0, 0, &objectSTG12_00035274, 0, 0x80000000 },
	{ { -322.3599f, 81.99999f, -500 }, 484.8091f, 0, 0, &objectSTG12_000358B0, 0, 0x80000000 },
	{ { 60, 40, -352.5f }, 58.36309f, 0, 0, &objectSTG12_00035AB0, 0, 0x80000000 },
	{ { -140, 38, -225 }, 90.82401f, 0, 0, &objectSTG12_00035CD8, 0, 0x80000000 },
	{ { -100, 40, -310 }, 56.56854f, 0, 0, &objectSTG12_00035EB0, 0, 0x80000000 },
	{ { 120, 35, -785 }, 198.1161f, 0, 0, &objectSTG12_00036374, 0, 0x80000000 },
	{ { -340.7836f, 35, -500 }, 413.6896f, 0, 0, &objectSTG12_00036DD4, 0, 0x80000000 },
	{ { 572.6594f, 97.99999f, -472.6324f }, 168.117f, 0, 0, &objectSTG12_00037004, 0, 0x80000000 },
	{ { 572.9564f, 91.99999f, -472.9159f }, 168.5274f, 0, 0, &objectSTG12_000372B8, 0, 0x80000000 },
	{ { 750, 78.0001f, -650.0001f }, 305.1504f, 0, 0, &objectSTG12_00037990, 0, 0x80000000 },
	{ { 750, 79.50229f, -649.9999f }, 53.46885f, 0, 0, &objectSTG12_00038864, 0, 0x80000000 },
	{ { 180, 33.5f, -599.9999f }, 118.2423f, 0, 0, &objectSTG12_00038A28, 0, 0x80000000 },
	{ { 749.9999f, 39.49988f, -650.0001f }, 422.7202f, 0, 0, &objectSTG12_00039728, 0, 0x80000000 },
	{ { 641.5f, -54.8001f, -650 }, 43.57178f, 0, 0, &objectSTG12_00039DEC, 0, 0x80000000 },
	{ { 416, 40, -650 }, 132.4991f, 0, 0, &objectSTG12_0003A60C, 0, 0x80000000 },
	{ { 1899.75f, 67.5f, -672.4999f }, 13.43735f, 0, 0, &objectSTG12_0003A984, 0, 0x80000000 },
	{ { 750, -25, -845.7f }, 30.22416f, 0, 0, &objectSTG12_0003ACFC, 0, 0x80000000 },
	{ { 37, 13.60827f, -205 }, 16.03699f, 0, 0, &objectSTG12_0003BE04, 0, 0xE0000001 },
	{ { 37, 13.27896f, -165 }, 15.75852f, 0, 0, &objectSTG12_0003CF0C, 0, 0xE0000001 },
	{ { 37, 14.6893f, -245 }, 16.96395f, 0, 0, &objectSTG12_0003E008, 0, 0xE0000001 },
	{ { 542, 39.99989f, -650 }, 72.80109f, 0, 0, &objectSTG12_0003E834, 0, 0xC0000001 },
	{ { 963, 39.99989f, -650 }, 74.08784f, 0, 0, &objectSTG12_0003F264, 0, 0xC0000001 },
	{ { 505.9883f, 134.5f, -627.3f }, 354.1528f, 0, 0, &objectSTG12_000402E4, 0, 0xA0000001 },
	{ { 750, 82.73363f, -650.0001f }, 305.2353f, 0, 0, &objectSTG12_00042458, 0, 0xC0000001 },
	{ { -37, 7.499999f, -205 }, 11.32475f, 0, 0, &objectSTG12_00042794, 0, 0xE0000001 },
	{ { 750, 221.4999f, -650 }, 300.6231f, 0, 0, &objectSTG12_00044950, 0, 0xA0000001 },
	{ { 750, -36.70032f, -650.0001f }, 122.7383f, 0, 0, &objectSTG12_000466D4, 0, 0xC0000001 },
	{ { 750, -39.00032f, -650.0001f }, 307.8908f, 0, 0, &objectSTG12_00047DBC, 0, 0xC0000001 },
	{ { 141.2499f, 70.54783f, -600.1301f }, 202.4515f, 0, 0, &objectSTG12_00048318, 0, 0xC0000001 },
	{ { 141.2499f, 70.54783f, -700 }, 202.4644f, 0, 0, &objectSTG12_000489CC, 0, 0xC0000001 },
	{ { -62.50006f, 70.54787f, -590.1301f }, 13.92529f, 0, 0, &objectSTG12_00048B3C, 0, 0xE0000001 },
	{ { 2016.5f, 67.5f, -672.5f }, 77.23179f, 0, 0, &objectSTG12_00048CE0, 0, 0xA0000001 },
	{ { 2114.25f, 48, -672.5f }, 35.16834f, 0, 0, &objectSTG12_00049040, 0, 0xE0000001 },
	{ { 0, 40, -145 }, 161.9413f, 0, 0, &objectSTG12_0004A230, 0, 0xA0000001 },
	{ { 179.9999f, -50, -650 }, 136.0148f, 0, 0, &objectSTG12_0004A6A8, 0, 0xA0000001 },
	{ { 1680, 86, -650 }, 225.69f, 0, 0, &objectSTG12_0004A6DC, 0, 0xA0000001 },
	{ { 1680, 46, -650 }, 228.2893f, 0, 0, &objectSTG12_0004A710, 0, 0x20000001 },
	{ { -158.75f, 79.5f, -1022.25f }, 316.5645f, 0, 0, &objectSTG12_0004A744, 0, 0x80000020 },
	{ { 301.25f, 79.5f, -1022.25f }, 316.5645f, 0, 0, &objectSTG12_0004A778, 0, 0x80000020 },
	{ { -692.25f, 79.5f, -496.25f }, 316.5645f, 0, 0, &objectSTG12_0004A7AC, 0, 0x80000020 },
	{ { -552.3225f, 79.5f, -851.076f }, 316.5645f, 0, 0, &objectSTG12_0004A7E0, 0, 0x80000020 },
	{ { -544.1906f, 79.5f, -145.5061f }, 316.5645f, 0, 0, &objectSTG12_0004A814, 0, 0x80000020 },
	{ { 426.0001f, 60.5f, -499.0002f }, 175.218f, 0, 0, &objectSTG12_0004A848, 0, 0x80000020 },
	{ { 466.0001f, -20.5f, -324.0002f }, 175.218f, 0, 0, &objectSTG12_0004A87C, 0, 0x80000020 },
	{ { -0.06249094f, 50, 51.00006f }, 85.3428f, 0, 0, &objectSTG12_0004A8B0, 0, 0x80000000 },
	{ { -0.06249094f, -50, 51.00006f }, 85.3428f, 0, 0, &objectSTG12_0004A8E4, 0, 0x80000000 },
	{ { -0.06249094f, 250, 51.00006f }, 85.3428f, 0, 0, &objectSTG12_0004A918, 0, 0x80000000 },
	{ { -0.06249094f, 350, 51.00006f }, 85.3428f, 0, 0, &objectSTG12_0004A94C, 0, 0x80000000 },
	{ { 0.00014118f, 250, 51 }, 80.91208f, 0, 0, &objectSTG12_0004A980, 0, 0x80000000 },
	{ { 0.00014118f, 350, 51 }, 80.91208f, 0, 0, &objectSTG12_0004A9B4, 0, 0x80000000 },
	{ { 0.00014118f, -50, 51 }, 80.91208f, 0, 0, &objectSTG12_0004A9E8, 0, 0x80000000 },
	{ { 60, 43, -650 }, 71.19691f, 0, 0, &objectSTG12_0004AA1C, 0, 0x80000000 },
	{ { 180, 43, -650 }, 71.19691f, 0, 0, &objectSTG12_0004AA50, 0, 0x80000000 },
	{ { 300, 43, -650 }, 71.19691f, 0, 0, &objectSTG12_0004AA84, 0, 0x80000000 },
	{ { -249, 38, -569 }, 34.62658f, 0, 0, &objectSTG12_0004AAB8, 0, 0x80000000 },
	{ { -278, 38, -500 }, 34.62658f, 0, 0, &objectSTG12_0004AAEC, 0, 0x80000000 },
	{ { -249, 38, -431 }, 34.62658f, 0, 0, &objectSTG12_0004AB20, 0, 0x80000000 },
	{ { -175, 38, -400 }, 34.62658f, 0, 0, &objectSTG12_0004AB54, 0, 0x80000000 },
	{ { -60, 38, -400 }, 34.62658f, 0, 0, &objectSTG12_0004AB88, 0, 0x80000000 },
	{ { 60, 38, -400 }, 34.62658f, 0, 0, &objectSTG12_0004ABBC, 0, 0x80000000 },
	{ { -321, 38, -358 }, 34.62658f, 0, 0, &objectSTG12_0004ABF0, 0, 0x80000000 },
	{ { -379, 38, -500 }, 34.62658f, 0, 0, &objectSTG12_0004AC24, 0, 0x80000000 },
	{ { -37, 13.60827f, -245 }, 16.03699f, 0, 0, &objectSTG12_0004AC58, 0, 0xE0000001 },
	{ { 37, 13.60827f, -125 }, 16.03699f, 0, 0, &objectSTG12_0004AC8C, 0, 0xE0000001 },
	{ { -37, 13.27896f, -125 }, 15.75852f, 0, 0, &objectSTG12_0004ACC0, 0, 0xE0000001 },
	{ { -37, 14.6893f, -165 }, 16.96395f, 0, 0, &objectSTG12_0004ACF4, 0, 0xE0000001 },
	{ { -175.1959f, 75, -500 }, 329.0017f, 0, 0, &objectSTG12_000236E0, 0, 0x80004001 },
	{ { 120, 38, -700 }, 68, 0, 0, &objectSTG12_000318FC, 0, 0x82000000 },//green glass things from here
	{ { 240, 38, -700 }, 68, 0, 0, &objectSTG12_00031A00, 0, 0x82000000 },
	{ { 0, 38, -700 }, 68, 0, 0, &objectSTG12_00031B04, 0, 0x82000000 },
	{ { -60, 38, -600 }, 124.1934f, 0, 0, &objectSTG12_00031410, 0, 0x82000000 },
	{ { -230, 38, -500 }, 116.2927f, 0, 0, &objectSTG12_000316B8, 0, 0x82000000 },
	{ { -260, 37.99999f, -438.2683f }, 185.8551f, 0, 0, &objectSTG12_000312D0, 0, 0x82000000 },
	{ { -60, 38, -400 }, 124.1934f, 0, 0, &objectSTG12_000317F8, 0, 0x82000000 },
	{ { 750, 139.8324f, -650 }, 260.3053f, 0, 0, &objectSTG12_00033044, 0, 0x83040000 }, //Green light thing
};

extern "C" __declspec(dllexport) GeoAnimData animlist_000196C4[] = {
	{ 0, 1, 30, &objectSTG12_00031E9C, &action_animation_000320D0, (NJS_TEXLIST *)0 },
	{ 0, 1, 30, &objectSTG12_0003298C, &action_animation_00032BC0, (NJS_TEXLIST *)0 },
	{ 0, 1, 30, &objectSTG12_0003347C, &action_animation_000336A0, (NJS_TEXLIST *)0 }
};

extern "C" __declspec(dllexport) LandTable landtable_0001970C = { LengthOfArray(collist_00018020), LengthOfArray(animlist_000196C4), 0xD, 450, collist_00018020, animlist_000196C4, "HOTSHELTER1", (NJS_TEXLIST *)&texlist_hotshelter1, 0, 0 };

#pragma warning(pop)