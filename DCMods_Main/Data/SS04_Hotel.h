#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00136050[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00136078[] = {
	0x8000u | 14, 42, 17, 9, 11, 8, 10, 15, 16, 37, 36, 25, 23, 26, 24,
	0x8000u | 14, 22, 35, 5, 7, 4, 6, 20, 21, 39, 38, 29, 27, 30, 28,
	0x8000u | 14, 32, 34, 31, 33, 40, 41, 19, 18, 2, 1, 3, 0, 14, 13
};

extern "C" __declspec(dllexport) Sint16 poly_001360D2[] = {
	4, 10, 12, 11, 17,
	3, 23, 24, 12,
	0x8000u | 5, 23, 36, 12, 16, 10,
	0x8000u | 14, 30, 32, 29, 31, 39, 40, 20, 19, 4, 2, 5, 3, 22, 14,
	0x8000u | 14, 26, 28, 25, 27, 37, 38, 15, 21, 8, 6, 9, 7, 42, 35
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013612C[] = {
	{ 0, 63 },
	{ 0 },
	{ 221, 63 },
	{ 221, 0 },
	{ 444, 63 },
	{ 444, 0 },
	{ 649, 63 },
	{ 649, 0 },
	{ 892, 63 },
	{ 892, 0 },
	{ 1132, 63 },
	{ 1132, 0 },
	{ 1530, 63 },
	{ 1530, 0 },
	{ 0, 91 },
	{ 0 },
	{ 241, 91 },
	{ 241, 0 },
	{ 482, 91 },
	{ 482, 0 },
	{ 725, 91 },
	{ 725, 0 },
	{ 967, 91 },
	{ 967, 0 },
	{ 1228, 91 },
	{ 1228, 0 },
	{ 1530, 91 },
	{ 1530, 0 },
	{ 1530, 111 },
	{ 1530, 255 },
	{ 1284, 111 },
	{ 1284, 255 },
	{ 1011, 111 },
	{ 1011, 255 },
	{ 757, 111 },
	{ 757, 255 },
	{ 504, 111 },
	{ 504, 255 },
	{ 252, 111 },
	{ 252, 255 },
	{ 0, 111 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001361D4[] = {
	{ 6436, -2360 },
	{ 6789, -1969 },
	{ 6326, -2182 },
	{ 6288, -1969 },
	{ 6999, -2481 },
	{ 7288, -2264 },
	{ 6789, -1969 },
	{ 6999, -2481 },
	{ 6789, -2522 },
	{ 6789, -1969 },
	{ 6581, -2481 },
	{ 6436, -2360 },
	{ 7408, -2519 },
	{ 7545, -2807 },
	{ 7102, -2732 },
	{ 7204, -2986 },
	{ 6789, -2795 },
	{ 6789, -3071 },
	{ 6503, -2732 },
	{ 6407, -2986 },
	{ 6260, -2553 },
	{ 6085, -2747 },
	{ 6098, -2285 },
	{ 5867, -2390 },
	{ 6042, -1969 },
	{ 5793, -1969 },
	{ 7288, -2264 },
	{ 7408, -2519 },
	{ 6999, -2481 },
	{ 7102, -2732 },
	{ 6789, -2522 },
	{ 6789, -2795 },
	{ 6581, -2481 },
	{ 6503, -2732 },
	{ 6436, -2360 },
	{ 6260, -2553 },
	{ 6326, -2182 },
	{ 6098, -2285 },
	{ 6288, -1969 },
	{ 6042, -1969 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00136274[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00136078, NULL, NULL, NULL, uv_0013612C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 5, poly_001360D2, NULL, NULL, NULL, uv_001361D4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_001362A4[] = {
	{ 60.84188f, -7, -14.85791f },
	{ 69.44341f, -7, -2.020752f },
	{ 69.44341f, -1, -2.020752f },
	{ 60.84188f, -1, -14.85791f },
	{ 76.45789f, -0.999999f, -9.015625f },
	{ 70.00677f, -0.999999f, -18.64355f },
	{ 76.45789f, 3, -9.015625f },
	{ 70.00677f, 3, -18.64355f },
	{ 83.40224f, 3, -15.94055f },
	{ 79.07999f, 3, -22.39123f },
	{ 83.40224f, 6.000001f, -15.94055f },
	{ 79.07999f, 6.000001f, -22.39123f },
	{ 97.50137f, 6.000001f, -30.00036f },
	{ 57.83328f, -7, -30 },
	{ 57.83328f, -1, -30 },
	{ 89.20748f, 3, -11.63037f },
	{ 89.20748f, 6.000001f, -11.63037f },
	{ 77.56219f, 6.000001f, -30.00036f },
	{ 82.31652f, -7, 6.556763f },
	{ 82.31652f, -1, 6.556763f },
	{ 86.11273f, -0.999999f, -2.58252f },
	{ 86.11273f, 3, -2.58252f },
	{ 67.74139f, -0.999999f, -30.00036f },
	{ 105.7953f, 6.000001f, -11.63037f },
	{ 117.2778f, 6.000001f, -19.40747f },
	{ 105.7953f, 3, -11.63037f },
	{ 117.2778f, 3, -19.40747f },
	{ 109.8803f, 3, -2.58252f },
	{ 122.0962f, 3, -10.22327f },
	{ 109.8803f, -0.999999f, -2.58252f },
	{ 122.0962f, -0.999999f, -10.22327f },
	{ 114.0067f, -1, 6.556763f },
	{ 127.5f, -1, 0.111084f },
	{ 114.0067f, -7, 6.556763f },
	{ 127.5f, -7, 0.111084f },
	{ 67.74139f, 3, -30.00036f },
	{ 97.50137f, 6.000001f, -10.11682f },
	{ 97.50137f, 3, -10.11682f },
	{ 97.5014f, 3, -0.323486f },
	{ 97.5014f, -0.999999f, -0.323486f },
	{ 97.5014f, -1, 9.568848f },
	{ 97.5014f, -7, 9.568848f },
	{ 77.56219f, 3, -30.00036f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_001364A8[] = {
	{ -0.923673f, 0, 0.383182f },
	{ -0.706193f, 0, 0.70802f },
	{ -0.526963f, 0.665719f, 0.528326f },
	{ -0.6893679f, 0.665572f, 0.285982f },
	{ -0.464068f, 0.753768f, 0.465268f },
	{ -0.606791f, 0.75386f, 0.25199f },
	{ -0.5269639f, 0.665718f, 0.528326f },
	{ -0.689201f, 0.665646f, 0.286214f },
	{ -0.480943f, 0.747465f, 0.458247f },
	{ -0.6067899f, 0.753861f, 0.25199f },
	{ -0.536962f, 0.670757f, 0.511623f },
	{ -0.689201f, 0.6656449f, 0.286214f },
	{ 0, 1, 0 },
	{ -0.980827f, 0, 0.194882f },
	{ -0.738089f, 0.658572f, 0.146652f },
	{ -0.257897f, 0.7619669f, 0.59405f },
	{ -0.299387f, 0.6593879f, 0.6896189f },
	{ -0.738162f, 0.658359f, 0.147241f },
	{ -0.381842f, 0, 0.924228f },
	{ -0.284906f, 0.6657929f, 0.6896f },
	{ -0.250964f, 0.753673f, 0.607449f },
	{ -0.284904f, 0.6657929f, 0.6896009f },
	{ -0.6514249f, 0.747503f, 0.129942f },
	{ 0.282985f, 0.66356f, 0.692537f },
	{ 0.461125f, 0.569069f, 0.6808259f },
	{ 0.247368f, 0.756528f, 0.605372f },
	{ 0.410932f, 0.680461f, 0.606719f },
	{ 0.269193f, 0.66712f, 0.694612f },
	{ 0.366039f, 0.72356f, 0.585215f },
	{ 0.238196f, 0.751995f, 0.6146269f },
	{ 0.38429f, 0.689088f, 0.6143939f },
	{ 0.226238f, 0.678531f, 0.698865f },
	{ 0.308318f, 0.698827f, 0.645431f },
	{ 0.307986f, 0, 0.951391f },
	{ 0.431039f, 0, 0.902333f },
	{ -0.738162f, 0.658358f, 0.147244f },
	{ 0, 0.668844f, 0.743403f },
	{ 0, 0.749835f, 0.661625f },
	{ -0.005702f, 0.667329f, 0.744741f },
	{ -0.005049f, 0.751732f, 0.659449f },
	{ -0.005702f, 0.6673279f, 0.744742f },
	{ -0.007656f, 0, 0.999971f },
	{ -0.651418f, 0.7475089f, 0.129938f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_001366AC = { vertex_001362A4, normal_001364A8, LengthOfArray<Sint32>(vertex_001362A4), meshlist_00136274, matlist_00136050, LengthOfArray<Uint16>(meshlist_00136274), LengthOfArray<Uint16>(matlist_00136050), { 92.66663f, -0.5f, -10.21576f }, 40.05987f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_001366D4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001366AC, -367.5f, -7, 1900, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00136708[] = {
	{ { 0x00FFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0013671C[] = {
	7, 4, 2, 3, 7, 6, 0, 1,
	3, 3, 5, 4
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00136734[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0013671C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0013674C[] = {
	{ -75, -100, -9.999995f },
	{ -75, 70, -10 },
	{ 65, -100, -9.999995f },
	{ 65, 70, -10 },
	{ 145, -100, -9.999995f },
	{ 145, 70, -10 },
	{ 5, 70, -10 },
	{ 5, -100, -10 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_001367AC[] = {
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0013680C = { vertex_0013674C, normal_001367AC, LengthOfArray<Sint32>(vertex_0013674C), meshlist_00136734, matlist_00136708, LengthOfArray<Uint16>(meshlist_00136734), LengthOfArray<Uint16>(matlist_00136708), { 35, -15, -10 }, 110, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00136834 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013680C, -685, 90, 2180, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00136868[] = {
	{ { 0x00FFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0013687C[] = {
	0x8000u | 5, 0, 4, 2, 1, 3
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00136888[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0013687C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_001368A0[] = {
	{ 11.04474f, -0.00008f, 31.55542f },
	{ -19.00021f, 0, -63.49988f },
	{ 55.99978f, 0, -13.5f },
	{ 55.99978f, 0, -63.49976f },
	{ -41.50021f, 0, -21 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_001368DC[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00136918 = { vertex_001368A0, normal_001368DC, LengthOfArray<Sint32>(vertex_001368A0), meshlist_00136888, matlist_00136868, LengthOfArray<Uint16>(meshlist_00136888), LengthOfArray<Uint16>(matlist_00136868), { 7.249786f, -0.00004f, -15.97223f }, 68.08406f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00136940 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00136918, -485.9998f, 0, 2073.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00136974[] = {
	{ { 0x00FFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00136988[] = {
	6, 2, 3, 1, 0, 5, 4
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00136998[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00136988, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_001369B0[] = {
	{ 2.249981f, 25, 5 },
	{ 2.249981f, 0, 4.999973f },
	{ 29.99997f, 0, 4.999954f },
	{ 29.99997f, 25, 5 },
	{ -25.5f, 25, 5 },
	{ -25.50001f, 0, 4.999992f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_001369F8[] = {
	{ 0, -0.00001f, 1 },
	{ 0, -0.00001f, 1 },
	{ 0.000001f, -0.00001f, 1 },
	{ 0.000001f, -0.00001f, 1 },
	{ 0, -0.00001f, 1 },
	{ 0, -0.00001f, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00136A40 = { vertex_001369B0, normal_001369F8, LengthOfArray<Sint32>(vertex_001369B0), meshlist_00136998, matlist_00136974, LengthOfArray<Uint16>(meshlist_00136998), LengthOfArray<Uint16>(matlist_00136974), { 2.249981f, 12.5f, 4.999977f }, 27.74998f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00136A68 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00136A40, -300, 0, 1640, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00136A9C[] = {
	{ { 0x00FFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00136AB0[] = {
	0x8000u | 5, 0, 6, 26, 21, 23,
	13, 0, 1, 26, 11, 22, 2, 4, 3, 24, 13, 25, 12, 17,
	0x8000u | 12, 27, 5, 29, 31, 8, 9, 14, 15, 30, 7, 28, 18,
	5, 20, 24, 19, 25, 17,
	3, 10, 11, 1,
	0x8000u | 12, 28, 20, 30, 24, 14, 4, 8, 22, 29, 23, 27, 21,
	4, 2, 16, 3, 13,
	4, 22, 23, 26, 29
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00136B34[] = {
	{ NJD_MESHSET_TRIMESH | 0, 8, poly_00136AB0, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00136B4C[] = {
	{ -153.5001f, 0, 167 },
	{ -128.5f, 0, 167 },
	{ 1.7223f, 25, 167 },
	{ 78.5f, 25, 167 },
	{ 78.5f, 30, 185 },
	{ -153.5001f, 160, 167 },
	{ -153.5001f, 30, 167 },
	{ 78.5f, 160, 135 },
	{ -28.8889f, 50, 185 },
	{ -28.8889f, 160, 185 },
	{ -58.8889f, 0, 167 },
	{ -58.8889f, 25, 167 },
	{ 78.5f, 0, 135 },
	{ 78.5f, 0, 167 },
	{ 78.5f, 50, 185 },
	{ 78.5f, 160, 185 },
	{ 1.7223f, 0, 167 },
	{ 166.5f, 0, 135 },
	{ 166.5f, 160, 135 },
	{ 166.5f, 30, 135 },
	{ 166.5f, 30, 145 },
	{ -153.5001f, 30, 177 },
	{ -28.8889f, 30, 185 },
	{ -128.5f, 30, 185 },
	{ 78.16663f, 30, 144.9996f },
	{ 78.5f, 30, 135 },
	{ -128.5f, 25, 167 },
	{ -153.5001f, 50, 177 },
	{ 166.5f, 50, 145 },
	{ -128.5f, 50, 185 },
	{ 78.5f, 50, 145 },
	{ -128.5f, 160, 185 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00136CCC[] = {
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, -0.782123f, 0.623125f },
	{ 0.878523f, -0.283779f, 0.384274f },
	{ 0.594786f, -0.486157f, 0.64022f },
	{ -0.461351f, 0, 0.887218f },
	{ -0.09234899f, -0.639345f, 0.7633539f },
	{ 0.685792f, 0.065892f, 0.724809f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, -0.782123f, 0.623125f },
	{ 0.707096f, 0.003929f, 0.7071069f },
	{ 0.709265f, 0.002353f, 0.704938f },
	{ 0.707842f, 0, 0.7063709f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0.090536f, 0.9958929f },
	{ 0, -0.7071069f, 0.7071069f },
	{ -0.00001f, -0.707113f, 0.707101f },
	{ -0.265194f, -0.644911f, 0.716772f },
	{ 0, -0.605127f, 0.796129f },
	{ -0.469177f, -0.5128199f, 0.71895f },
	{ 0.909077f, -0.293021f, 0.296173f },
	{ 0.574331f, -0.583334f, 0.57434f },
	{ -0.170718f, -0.571382f, 0.802731f },
	{ -0.385132f, 0, 0.922862f },
	{ -0.00001f, 0.045305f, 0.998973f },
	{ -0.289976f, 0, 0.957034f },
	{ 0.716329f, 0.031511f, 0.697051f },
	{ -0.237468f, 0, 0.971395f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00136E4C = { vertex_00136B4C, normal_00136CCC, LengthOfArray<Sint32>(vertex_00136B4C), meshlist_00136B34, matlist_00136A9C, LengthOfArray<Uint16>(meshlist_00136B34), LengthOfArray<Uint16>(matlist_00136A9C), { 6.499939f, 80, 160 }, 161.9414f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00136E74 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00136E4C, -351.5f, 0, 1665, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00136EA8[] = {
	{ { 0x00FFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00136EBC[] = {
	3, 6, 3, 7,
	0x8000u | 7, 7, 2, 3, 1, 0, 5, 4
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00136ED4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00136EBC, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00136EEC[] = {
	{ 195, 0, 129.5f },
	{ 195, 160, 129.5f },
	{ 195.0001f, 160, 229.9999f },
	{ 195.0001f, 0, 229.9999f },
	{ 194.9999f, 0, 32 },
	{ 194.9999f, 160, 32 },
	{ 172.5f, 0, 252.5f },
	{ 172.5f, 160, 252.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00136F4C[] = {
	{ 1, 0, -0.00001f },
	{ 1, 0, -0.00001f },
	{ 0.92388f, 0, 0.382683f },
	{ 0.92388f, 0, 0.382683f },
	{ 1, 0, -0.00002f },
	{ 1, 0, -0.00002f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00136FAC = { vertex_00136EEC, normal_00136F4C, LengthOfArray<Sint32>(vertex_00136EEC), meshlist_00136ED4, matlist_00136EA8, LengthOfArray<Uint16>(meshlist_00136ED4), LengthOfArray<Uint16>(matlist_00136EA8), { 183.75f, 80, 142.25f }, 136.217f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00136FD4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00136FAC, -700, 0, 1800, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00137008[] = {
	{ { 0x00FFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0013701C[] = {
	0x8000u | 5, 1, 3, 0, 4, 2,
	6, 3, 6, 1, 7, 5, 8
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00137038[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0013701C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00137050[] = {
	{ 39.9998f, 160, 284.9853f },
	{ 140.0251f, 160, 284.9749f },
	{ -65.0005f, 160, 285 },
	{ 39.99981f, -10, 284.9853f },
	{ -65.00048f, -10, 285 },
	{ 172.5f, 160, 252.5f },
	{ 140.0251f, -10, 284.9749f },
	{ 152.5095f, -10, 272.4904f },
	{ 172.5f, 0, 252.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_001370BC[] = {
	{ 0.000122f, 0, 1 },
	{ 0.382731f, 0, 0.92386f },
	{ 0.00014f, 0, 1 },
	{ 0.000122f, 0, 1 },
	{ 0.00014f, 0, 1 },
	{ 0.707106f, 0, 0.7071069f },
	{ 0.382731f, 0, 0.92386f },
	{ 0.707106f, 0, 0.7071069f },
	{ 0.707106f, 0, 0.707108f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00137128 = { vertex_00137050, normal_001370BC, LengthOfArray<Sint32>(vertex_00137050), meshlist_00137038, matlist_00137008, LengthOfArray<Uint16>(meshlist_00137038), LengthOfArray<Uint16>(matlist_00137008), { 53.74974f, 75, 268.75f }, 119.8569f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00137150 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00137128, -700, 0, 1800, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00137184[] = {
	{ { 0x00FFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00137198[] = {
	6, 2, 3, 1, 0, 5, 4
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_001371A8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00137198, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_001371C0[] = {
	{ 166.5f, 160, 240 },
	{ 166.5f, 0, 240 },
	{ 166.5f, 0, 345 },
	{ 166.5f, 160, 345 },
	{ 166.5f, 160, 135 },
	{ 166.5f, 0, 135 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00137208[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00137250 = { vertex_001371C0, normal_00137208, LengthOfArray<Sint32>(vertex_001371C0), meshlist_001371A8, matlist_00137184, LengthOfArray<Uint16>(meshlist_001371A8), LengthOfArray<Uint16>(matlist_00137184), { 166.5f, 80, 240 }, 132.0038f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00137278 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00137250, -351.5f, 0, 1665, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_001372AC[] = {
	{ { 0x00FFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_001372C0[] = {
	0x8000u | 8, 6, 1, 0, 5, 4, 7, 3, 2
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_001372D4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001372C0, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_001372EC[] = {
	{ -20.31848f, 30, 9.176381f },
	{ -50.5f, 39, -5.00001f },
	{ -21.5f, 6, 49.39999f },
	{ -2.676392f, 6, 21.3185f },
	{ -14.64209f, 19, 17.14214f },
	{ -49.3739f, 36, 6.500143f },
	{ -22.46008f, 39, -5.00001f },
	{ -39.50903f, 24, 30.31627f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0013734C[] = {
	{ -0.07751399f, -0.862143f, -0.500701f },
	{ 0, -0.9059449f, -0.423396f },
	{ -0.413744f, -0.767481f, -0.489682f },
	{ -0.413744f, -0.767481f, -0.489682f },
	{ -0.30609f, -0.800519f, -0.515246f },
	{ -0.044972f, -0.8820699f, -0.468966f },
	{ 0, -0.9059449f, -0.423396f },
	{ -0.254559f, -0.812265f, -0.5248089f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_001373AC = { vertex_001372EC, normal_0013734C, LengthOfArray<Sint32>(vertex_001372EC), meshlist_001372D4, matlist_001372AC, LengthOfArray<Uint16>(meshlist_001372D4), LengthOfArray<Uint16>(matlist_001372AC), { -26.5882f, 22.5f, 22.19999f }, 36.21621f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_001373D4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001373AC, -335, -6, 1715, 0, 0xFFFF4000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00137408[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_001374A8[] = {
	10, 8, 0, 10, 9, 7, 6, 4, 5, 3, 2,
	10, 11, 19, 20, 21, 17, 18, 16, 15, 13, 14
};

extern "C" __declspec(dllexport) Sint16 poly_001374D4[] = {
	0x8000u | 6, 3, 4, 1, 7, 8, 10,
	0x8000u | 6, 15, 14, 18, 12, 21, 19,
	0x8000u | 8, 24, 27, 23, 34, 28, 37, 31, 32,
	0x8000u | 8, 30, 33, 29, 36, 22, 35, 25, 26
};

extern "C" __declspec(dllexport) Sint16 poly_00137514[] = {
	12, 25, 24, 26, 27, 35, 34, 36, 37, 33, 32, 30, 31
};

extern "C" __declspec(dllexport) Sint16 poly_0013752E[] = {
	0x8000u | 10, 54, 57, 59, 62, 41, 46, 40, 47, 49, 52
};

extern "C" __declspec(dllexport) Sint16 poly_00137544[] = {
	0x8000u | 10, 49, 48, 40, 38, 41, 39, 59, 58, 54, 53,
	0x8000u | 10, 51, 50, 44, 43, 45, 42, 61, 60, 56, 55,
	0x8000u | 10, 74, 73, 65, 63, 66, 64, 84, 83, 79, 78,
	0x8000u | 10, 76, 75, 69, 68, 70, 67, 86, 85, 81, 80
};

extern "C" __declspec(dllexport) Sint16 poly_0013759C[] = {
	0x8000u | 10, 50, 52, 43, 47, 42, 46, 60, 62, 55, 57
};

extern "C" __declspec(dllexport) Sint16 poly_001375B2[] = {
	0x8000u | 10, 79, 82, 84, 87, 66, 71, 65, 72, 74, 77
};

extern "C" __declspec(dllexport) Sint16 poly_001375C8[] = {
	0x8000u | 10, 75, 77, 68, 72, 67, 71, 85, 87, 80, 82
};

extern "C" __declspec(dllexport) NJS_TEX uv_001375E0[] = {
	{ 1275, 0 },
	{ 1275, 255 },
	{ 801, 0 },
	{ 801, 255 },
	{ 544, 0 },
	{ 544, 255 },
	{ 300, 0 },
	{ 300, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0 },
	{ 472, 255 },
	{ 472, 0 },
	{ 729, 255 },
	{ 729, 0 },
	{ 973, 255 },
	{ 973, 0 },
	{ 1275, 255 },
	{ 1275, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00137630[] = {
	{ 2550, 255 },
	{ 2550, 92 },
	{ 2379, 255 },
	{ 2379, 0 },
	{ 2124, 254 },
	{ 2124, 0 },
	{ 0, 92 },
	{ 0, 254 },
	{ 170, 0 },
	{ 170, 254 },
	{ 424, 0 },
	{ 424, 254 },
	{ 2550, 255 },
	{ 2550, 92 },
	{ 2379, 255 },
	{ 2379, 0 },
	{ 170, 254 },
	{ 170, 0 },
	{ 0, 254 },
	{ 0, 92 },
	{ 0, 254 },
	{ 0, 92 },
	{ 170, 254 },
	{ 170, 0 },
	{ 2379, 255 },
	{ 2379, 0 },
	{ 2550, 255 },
	{ 2550, 92 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001376A0[] = {
	{ 0, 255 },
	{ 0 },
	{ 230, 255 },
	{ 230, 0 },
	{ 416, 255 },
	{ 416, 0 },
	{ 2132, 255 },
	{ 2132, 0 },
	{ 2319, 255 },
	{ 2319, 0 },
	{ 2550, 255 },
	{ 2550, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001376D0[] = {
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 1020, 0 },
	{ 1020, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001376F8[] = {
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 508, 0 },
	{ 508, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 1019, 0 },
	{ 1019, 255 },
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 1020, 0 },
	{ 1020, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00137798[] = {
	{ 1020, -1785 },
	{ 1020, 255 },
	{ 765, -1785 },
	{ 765, 255 },
	{ 510, -1785 },
	{ 510, 255 },
	{ 254, -1785 },
	{ 254, 255 },
	{ 0, -1785 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001377C0[] = {
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 1020, 0 },
	{ 1020, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001377E8[] = {
	{ 1020, -1785 },
	{ 1020, 255 },
	{ 765, -1785 },
	{ 765, 255 },
	{ 510, -1785 },
	{ 510, 255 },
	{ 254, -1785 },
	{ 254, 255 },
	{ 0, -1785 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00137810[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_001374A8, NULL, NULL, NULL, uv_001375E0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_001374D4, NULL, NULL, NULL, uv_00137630, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_00137514, NULL, NULL, NULL, uv_001376A0, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_0013752E, NULL, NULL, NULL, uv_001376D0, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 4, poly_00137544, NULL, NULL, NULL, uv_001376F8, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_0013759C, NULL, NULL, NULL, uv_00137798, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 1, poly_001375B2, NULL, NULL, NULL, uv_001377C0, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 1, poly_001375C8, NULL, NULL, NULL, uv_001377E8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_001378D0[] = {
	{ -2.750155f, -14.5f, -9.999726f },
	{ -2.750155f, -12, -12.99973f },
	{ -2.750155f, -14.5f, -14.99973f },
	{ -2.750155f, -12, -14.99973f },
	{ 0.749846f, -12, -14.99973f },
	{ 0.749846f, -14.5f, -14.99973f },
	{ 2.749845f, -14.5f, -12.99973f },
	{ 2.749845f, -12, -12.99973f },
	{ -2.750155f, -12, -9.999726f },
	{ 2.749845f, -14.5f, -9.999726f },
	{ 2.749845f, -12, -9.999726f },
	{ -2.750155f, -14.5f, 10.00027f },
	{ -2.750155f, -12, 13.00027f },
	{ -2.750155f, -14.5f, 15.00027f },
	{ -2.750155f, -12, 15.00027f },
	{ 0.749846f, -12, 15.00027f },
	{ 0.749846f, -14.5f, 15.00027f },
	{ 2.749845f, -14.5f, 13.00027f },
	{ 2.749845f, -12, 13.00027f },
	{ -2.750155f, -12, 10.00027f },
	{ 2.749845f, -14.5f, 10.00027f },
	{ 2.749845f, -12, 10.00027f },
	{ -2.750155f, 10.5f, -12.99973f },
	{ -2.750155f, 14.5f, -12.99973f },
	{ -2.750155f, 14.5f, -14.99973f },
	{ -2.750155f, 10.5f, -14.99973f },
	{ 0.749846f, 10.5f, -14.99973f },
	{ 0.749846f, 14.5f, -14.99973f },
	{ -2.750155f, 14.5f, 13.00027f },
	{ -2.750155f, 10.5f, 13.00027f },
	{ -2.750155f, 10.5f, 15.00027f },
	{ -2.750155f, 14.5f, 15.00027f },
	{ 0.749846f, 14.5f, 15.00027f },
	{ 0.749846f, 10.5f, 15.00027f },
	{ 2.749845f, 14.5f, -12.99973f },
	{ 2.749845f, 10.5f, -12.99973f },
	{ 2.749845f, 10.5f, 13.00027f },
	{ 2.749845f, 14.5f, 13.00027f },
	{ -0.750154f, -12, 10.36819f },
	{ 0.249846f, -12, 12.10025f },
	{ -0.750154f, -10, 10.36819f },
	{ 0.249846f, -10, 12.10025f },
	{ 0.249846f, 8, 12.10025f },
	{ -0.750154f, 8, 10.36819f },
	{ -0.750154f, 10.5f, 10.36819f },
	{ 0.249846f, 10.5f, 12.10025f },
	{ 0.249846f, -9, 12.10025f },
	{ -0.750154f, -9, 10.36819f },
	{ -2.750155f, -12, 10.36819f },
	{ -2.750155f, -10, 10.36819f },
	{ -2.750155f, 8, 10.36819f },
	{ -2.750155f, 10.5f, 10.36819f },
	{ -2.750155f, -9, 10.36819f },
	{ -2.750155f, -12, 13.8323f },
	{ -2.750155f, -10, 13.8323f },
	{ -2.750155f, 8, 13.8323f },
	{ -2.750155f, 10.5f, 13.8323f },
	{ -2.750155f, -9, 13.8323f },
	{ -0.750154f, -12, 13.8323f },
	{ -0.750154f, -10, 13.8323f },
	{ -0.750154f, 8, 13.8323f },
	{ -0.750154f, 10.5f, 13.8323f },
	{ -0.750154f, -9, 13.8323f },
	{ -0.750154f, -12, -13.63181f },
	{ 0.249846f, -12, -11.89975f },
	{ -0.750154f, -10, -13.63181f },
	{ 0.249846f, -10, -11.89975f },
	{ 0.249846f, 8, -11.89975f },
	{ -0.750154f, 8, -13.63181f },
	{ -0.750154f, 10.5f, -13.63181f },
	{ 0.249846f, 10.5f, -11.89975f },
	{ 0.249846f, -9, -11.89975f },
	{ -0.750154f, -9, -13.63181f },
	{ -2.750155f, -12, -13.63181f },
	{ -2.750155f, -10, -13.63181f },
	{ -2.750155f, 8, -13.63181f },
	{ -2.750155f, 10.5f, -13.63181f },
	{ -2.750155f, -9, -13.63181f },
	{ -2.750155f, -12, -10.1677f },
	{ -2.750155f, -10, -10.1677f },
	{ -2.750155f, 8, -10.1677f },
	{ -2.750155f, 10.5f, -10.1677f },
	{ -2.750155f, -9, -10.1677f },
	{ -0.750154f, -12, -10.1677f },
	{ -0.750154f, -10, -10.1677f },
	{ -0.750154f, 8, -10.1677f },
	{ -0.750154f, 10.5f, -10.1677f },
	{ -0.750154f, -9, -10.1677f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00137CF0[] = {
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0.297109f, 0.630262f, -0.717284f },
	{ 0.382684f, 0, -0.92388f },
	{ 0.92388f, 0, -0.382683f },
	{ 0.717284f, 0.630262f, -0.297109f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0, 0, -1 },
	{ 0, 1, 0 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0.297109f, 0.630262f, 0.717284f },
	{ 0.382684f, 0, 0.92388f },
	{ 0.92388f, 0, 0.382683f },
	{ 0.717284f, 0.630262f, 0.297109f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0, -1, 0 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, -0.7071069f, -0.7071069f },
	{ 0.297109f, -0.630262f, -0.717284f },
	{ 0.297109f, 0.630262f, -0.717284f },
	{ 0, 1, 0 },
	{ 0, -1, 0 },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0.297109f, 0.630262f, 0.717284f },
	{ 0.297109f, -0.630262f, 0.717284f },
	{ 0.717284f, 0.630262f, -0.297109f },
	{ 0.717284f, -0.630262f, -0.297109f },
	{ 0.717284f, -0.630262f, 0.297109f },
	{ 0.717284f, 0.630262f, 0.297109f },
	{ 0.5f, 0, -0.866025f },
	{ 1, 0, 0 },
	{ 0.5f, 0, -0.866025f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.5f, 0, -0.866025f },
	{ 0.500001f, 0, -0.866025f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.5f, 0, -0.866025f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.5f, 0, 0.866025f },
	{ 0.5f, 0, 0.866025f },
	{ 0.5f, 0, 0.866025f },
	{ 0.500001f, 0, 0.866025f },
	{ 0.5f, 0, 0.866025f },
	{ 0.5f, 0, -0.866025f },
	{ 1, 0, 0 },
	{ 0.5f, 0, -0.866025f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.5f, 0, -0.866025f },
	{ 0.500001f, 0, -0.866025f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.5f, 0, -0.866025f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.5f, 0, 0.866025f },
	{ 0.5f, 0, 0.866025f },
	{ 0.5f, 0, 0.866025f },
	{ 0.500001f, 0, 0.866025f },
	{ 0.5f, 0, 0.866025f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00138110 = { vertex_001378D0, normal_00137CF0, LengthOfArray<Sint32>(vertex_001378D0), meshlist_00137810, matlist_00137408, LengthOfArray<Uint16>(meshlist_00137810), LengthOfArray<Uint16>(matlist_00137408), { -0.000155f, 0, 0.000273f }, 20.86264f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00138138 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00138110, -397.25f, 14.5f, 1700, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0013816C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00138220[] = {
	10, 8, 0, 10, 9, 7, 6, 4, 5, 3, 2,
	10, 11, 19, 20, 21, 17, 18, 16, 15, 13, 14
};

extern "C" __declspec(dllexport) Sint16 poly_0013824C[] = {
	0x8000u | 6, 3, 4, 1, 7, 8, 10,
	0x8000u | 6, 15, 14, 18, 12, 21, 19,
	0x8000u | 8, 24, 27, 23, 34, 28, 37, 31, 32,
	0x8000u | 8, 30, 33, 29, 36, 22, 35, 25, 26
};

extern "C" __declspec(dllexport) Sint16 poly_0013828C[] = {
	12, 25, 24, 26, 27, 35, 34, 36, 37, 33, 32, 30, 31
};

extern "C" __declspec(dllexport) Sint16 poly_001382A6[] = {
	0x8000u | 10, 54, 57, 59, 62, 41, 46, 40, 47, 49, 52
};

extern "C" __declspec(dllexport) Sint16 poly_001382BC[] = {
	0x8000u | 10, 49, 48, 40, 38, 41, 39, 59, 58, 54, 53,
	0x8000u | 10, 51, 50, 44, 43, 45, 42, 61, 60, 56, 55,
	0x8000u | 10, 76, 75, 69, 68, 70, 67, 86, 85, 81, 80
};

extern "C" __declspec(dllexport) Sint16 poly_001382FE[] = {
	0x8000u | 10, 50, 52, 43, 47, 42, 46, 60, 62, 55, 57
};

extern "C" __declspec(dllexport) Sint16 poly_00138314[] = {
	0x8000u | 10, 77, 74, 72, 65, 71, 66, 87, 84, 82, 79
};

extern "C" __declspec(dllexport) Sint16 poly_0013832A[] = {
	0x8000u | 10, 74, 73, 65, 63, 66, 64, 84, 83, 79, 78
};

extern "C" __declspec(dllexport) Sint16 poly_00138340[] = {
	0x8000u | 10, 75, 77, 68, 72, 67, 71, 85, 87, 80, 82
};

extern "C" __declspec(dllexport) NJS_TEX uv_00138358[] = {
	{ 1275, 0 },
	{ 1275, 255 },
	{ 801, 0 },
	{ 801, 255 },
	{ 544, 0 },
	{ 544, 255 },
	{ 300, 0 },
	{ 300, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0 },
	{ 472, 255 },
	{ 472, 0 },
	{ 729, 255 },
	{ 729, 0 },
	{ 973, 255 },
	{ 973, 0 },
	{ 1275, 255 },
	{ 1275, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001383A8[] = {
	{ 2550, 255 },
	{ 2550, 92 },
	{ 2476, 255 },
	{ 2476, 0 },
	{ 2367, 254 },
	{ 2367, 0 },
	{ 0, 92 },
	{ 0, 254 },
	{ 72, 0 },
	{ 72, 254 },
	{ 182, 0 },
	{ 182, 254 },
	{ 2550, 255 },
	{ 2550, 92 },
	{ 2476, 255 },
	{ 2476, 0 },
	{ 72, 254 },
	{ 72, 0 },
	{ 0, 254 },
	{ 0, 92 },
	{ 0, 254 },
	{ 0, 92 },
	{ 72, 254 },
	{ 72, 0 },
	{ 2476, 255 },
	{ 2476, 0 },
	{ 2550, 255 },
	{ 2550, 92 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00138418[] = {
	{ 0, 255 },
	{ 0 },
	{ 226, 255 },
	{ 226, 0 },
	{ 410, 255 },
	{ 410, 0 },
	{ 4688, 255 },
	{ 4688, 0 },
	{ 4873, 255 },
	{ 4873, 0 },
	{ 5100, 255 },
	{ 5100, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00138448[] = {
	{ 1020, 0 },
	{ 1020, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 508, 0 },
	{ 508, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00138470[] = {
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 508, 0 },
	{ 508, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 508, 0 },
	{ 508, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001384E8[] = {
	{ 1020, -1785 },
	{ 1020, 255 },
	{ 765, -1785 },
	{ 765, 255 },
	{ 510, -1785 },
	{ 510, 255 },
	{ 254, -1785 },
	{ 254, 255 },
	{ 0, -1785 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00138510[] = {
	{ 0, 255 },
	{ 0 },
	{ 254, 255 },
	{ 254, 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 765, 255 },
	{ 765, 0 },
	{ 1020, 255 },
	{ 1020, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00138538[] = {
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 1020, 0 },
	{ 1020, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00138560[] = {
	{ 1020, -1785 },
	{ 1020, 255 },
	{ 765, -1785 },
	{ 765, 255 },
	{ 508, -1785 },
	{ 508, 255 },
	{ 254, -1785 },
	{ 254, 255 },
	{ 0, -1785 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00138588[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00138220, NULL, NULL, NULL, uv_00138358, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_0013824C, NULL, NULL, NULL, uv_001383A8, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0013828C, NULL, NULL, NULL, uv_00138418, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_001382A6, NULL, NULL, NULL, uv_00138448, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 3, poly_001382BC, NULL, NULL, NULL, uv_00138470, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_001382FE, NULL, NULL, NULL, uv_001384E8, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 1, poly_00138314, NULL, NULL, NULL, uv_00138510, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 1, poly_0013832A, NULL, NULL, NULL, uv_00138538, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 1, poly_00138340, NULL, NULL, NULL, uv_00138560, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00138660[] = {
	{ -2.750003f, -14.5f, -29.80038f },
	{ -2.750003f, -12, -32.80038f },
	{ -2.750003f, -14.5f, -34.80038f },
	{ -2.750003f, -12, -34.80038f },
	{ 0.75f, -12, -34.80038f },
	{ 0.75f, -14.5f, -34.80038f },
	{ 2.749997f, -14.5f, -32.80038f },
	{ 2.749997f, -12, -32.80038f },
	{ -2.750003f, -12, -29.80038f },
	{ 2.749997f, -14.5f, -29.80038f },
	{ 2.749997f, -12, -29.80038f },
	{ -2.750003f, -14.5f, 30.19962f },
	{ -2.750003f, -12, 33.19962f },
	{ -2.750003f, -14.5f, 35.19962f },
	{ -2.750003f, -12, 35.19962f },
	{ 0.749998f, -12, 35.19962f },
	{ 0.749998f, -14.5f, 35.19962f },
	{ 2.749997f, -14.5f, 33.19962f },
	{ 2.749997f, -12, 33.19962f },
	{ -2.750003f, -12, 30.19962f },
	{ 2.749997f, -14.5f, 30.19962f },
	{ 2.749997f, -12, 30.19962f },
	{ -2.750003f, 10.5f, -32.80038f },
	{ -2.750003f, 14.5f, -32.80038f },
	{ -2.750003f, 14.5f, -34.80038f },
	{ -2.750003f, 10.5f, -34.80038f },
	{ 0.75f, 10.5f, -34.80038f },
	{ 0.75f, 14.5f, -34.80038f },
	{ -2.750003f, 14.5f, 33.19962f },
	{ -2.750003f, 10.5f, 33.19962f },
	{ -2.750003f, 10.5f, 35.19962f },
	{ -2.750003f, 14.5f, 35.19962f },
	{ 0.749998f, 14.5f, 35.19962f },
	{ 0.749998f, 10.5f, 35.19962f },
	{ 2.749997f, 14.5f, -32.80038f },
	{ 2.749997f, 10.5f, -32.80038f },
	{ 2.749997f, 10.5f, 33.19962f },
	{ 2.749997f, 14.5f, 33.19962f },
	{ -0.750002f, -12, 30.56754f },
	{ 0.249998f, -12, 32.29959f },
	{ -0.750002f, -10, 30.56754f },
	{ 0.249998f, -10, 32.29959f },
	{ 0.249998f, 8, 32.29959f },
	{ -0.750002f, 8, 30.56754f },
	{ -0.750002f, 10.5f, 30.56754f },
	{ 0.249998f, 10.5f, 32.29959f },
	{ 0.249998f, -9, 32.29959f },
	{ -0.750002f, -9, 30.56754f },
	{ -2.750003f, -12, 30.56754f },
	{ -2.750003f, -10, 30.56754f },
	{ -2.750003f, 8, 30.56754f },
	{ -2.750003f, 10.5f, 30.56754f },
	{ -2.750003f, -9, 30.56754f },
	{ -2.750003f, -12, 34.03165f },
	{ -2.750003f, -10, 34.03165f },
	{ -2.750003f, 8, 34.03165f },
	{ -2.750003f, 10.5f, 34.03165f },
	{ -2.750003f, -9, 34.03165f },
	{ -0.750002f, -12, 34.03165f },
	{ -0.750002f, -10, 34.03165f },
	{ -0.750002f, 8, 34.03165f },
	{ -0.750002f, 10.5f, 34.03165f },
	{ -0.750002f, -9, 34.03165f },
	{ -0.75f, -12, -33.43246f },
	{ 0.249999f, -12, -31.7004f },
	{ -0.75f, -10, -33.43246f },
	{ 0.249999f, -10, -31.7004f },
	{ 0.249999f, 8, -31.7004f },
	{ -0.75f, 8, -33.43246f },
	{ -0.75f, 10.5f, -33.43246f },
	{ 0.249999f, 10.5f, -31.7004f },
	{ 0.249999f, -9, -31.7004f },
	{ -0.75f, -9, -33.43246f },
	{ -2.750003f, -12, -33.43246f },
	{ -2.750003f, -10, -33.43246f },
	{ -2.750003f, 8, -33.43246f },
	{ -2.750003f, 10.5f, -33.43246f },
	{ -2.750003f, -9, -33.43246f },
	{ -2.750003f, -12, -29.96835f },
	{ -2.750003f, -10, -29.96835f },
	{ -2.750003f, 8, -29.96835f },
	{ -2.750003f, 10.5f, -29.96835f },
	{ -2.750003f, -9, -29.96835f },
	{ -0.75f, -12, -29.96835f },
	{ -0.75f, -10, -29.96835f },
	{ -0.75f, 8, -29.96835f },
	{ -0.75f, 10.5f, -29.96835f },
	{ -0.75f, -9, -29.96835f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00138A80[] = {
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0.297109f, 0.630262f, -0.717283f },
	{ 0.382684f, 0, -0.923879f },
	{ 0.92388f, 0, -0.382683f },
	{ 0.717284f, 0.630263f, -0.297108f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0, 0, -1 },
	{ 0, 1, 0 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0.297109f, 0.630262f, 0.717284f },
	{ 0.382683f, 0, 0.92388f },
	{ 0.92388f, 0, 0.382683f },
	{ 0.717284f, 0.630262f, 0.297109f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0, -1, 0 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, -0.7071069f, -0.7071069f },
	{ 0.297109f, -0.630262f, -0.717283f },
	{ 0.297109f, 0.630262f, -0.717283f },
	{ 0, 1, 0 },
	{ 0, -1, 0 },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0.297109f, 0.630262f, 0.717284f },
	{ 0.297109f, -0.630262f, 0.717284f },
	{ 0.717284f, 0.630263f, -0.297108f },
	{ 0.717284f, -0.630263f, -0.297108f },
	{ 0.717284f, -0.630262f, 0.297109f },
	{ 0.717284f, 0.630262f, 0.297109f },
	{ 0.5f, 0, -0.866025f },
	{ 1, 0, 0 },
	{ 0.5f, 0, -0.866025f },
	{ 1, 0, 0 },
	{ 1, 0, -0.00001f },
	{ 0.5f, 0, -0.866025f },
	{ 0.5f, 0, -0.866025f },
	{ 1, 0, 0 },
	{ 1, 0, -0.00001f },
	{ 0.5f, 0, -0.866025f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.500001f, 0, 0.866025f },
	{ 0.500001f, 0, 0.866025f },
	{ 0.5f, 0, 0.866025f },
	{ 0.500001f, 0, 0.866025f },
	{ 0.500001f, 0, 0.866025f },
	{ 0.500001f, 0, -0.866025f },
	{ 1, 0, 0 },
	{ 0.500001f, 0, -0.866025f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.500001f, 0, -0.866025f },
	{ 0.500001f, 0, -0.866025f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.500001f, 0, -0.866025f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.500001f, 0, 0.866025f },
	{ 0.500001f, 0, 0.866025f },
	{ 0.500001f, 0, 0.866025f },
	{ 0.500001f, 0, 0.866025f },
	{ 0.500001f, 0, 0.866025f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00138EA0 = { vertex_00138660, normal_00138A80, LengthOfArray<Sint32>(vertex_00138660), meshlist_00138588, matlist_0013816C, LengthOfArray<Uint16>(meshlist_00138588), LengthOfArray<Uint16>(matlist_0013816C), { -0.00003f, 0, 0.199619f }, 37.88469f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00138EC8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00138EA0, -267.7501f, 14.5f, 1685.449f, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00138EFC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00138F9C[] = {
	10, 8, 0, 10, 9, 7, 6, 4, 5, 3, 2,
	10, 14, 13, 15, 16, 18, 17, 21, 20, 19, 11
};

extern "C" __declspec(dllexport) Sint16 poly_00138FC8[] = {
	0x8000u | 6, 3, 4, 1, 7, 8, 10,
	0x8000u | 6, 15, 14, 18, 12, 21, 19,
	0x8000u | 8, 28, 31, 27, 34, 22, 33, 24, 25
};

extern "C" __declspec(dllexport) Sint16 poly_00138FF6[] = {
	12, 29, 28, 30, 31, 35, 34, 32, 33, 26, 25, 23, 24
};

extern "C" __declspec(dllexport) Sint16 poly_00139010[] = {
	0x8000u | 10, 73, 75, 66, 70, 65, 69, 83, 85, 78, 80
};

extern "C" __declspec(dllexport) Sint16 poly_00139026[] = {
	0x8000u | 10, 74, 73, 67, 66, 68, 65, 84, 83, 79, 78
};

extern "C" __declspec(dllexport) Sint16 poly_0013903C[] = {
	0x8000u | 10, 47, 46, 38, 36, 39, 37, 57, 56, 52, 51,
	0x8000u | 10, 49, 48, 42, 41, 43, 40, 59, 58, 54, 53,
	0x8000u | 10, 72, 71, 63, 61, 64, 62, 82, 81, 77, 76
};

extern "C" __declspec(dllexport) Sint16 poly_0013907E[] = {
	0x8000u | 10, 50, 47, 45, 38, 44, 39, 60, 57, 55, 52,
	0x8000u | 10, 77, 80, 82, 85, 64, 69, 63, 70, 72, 75
};

extern "C" __declspec(dllexport) Sint16 poly_001390AA[] = {
	0x8000u | 10, 48, 50, 41, 45, 40, 44, 58, 60, 53, 55
};

extern "C" __declspec(dllexport) NJS_TEX uv_001390C0[] = {
	{ 1275, 0 },
	{ 1275, 255 },
	{ 801, 0 },
	{ 801, 255 },
	{ 544, 0 },
	{ 544, 255 },
	{ 300, 0 },
	{ 300, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1275, 0 },
	{ 1275, 255 },
	{ 973, 0 },
	{ 973, 255 },
	{ 729, 0 },
	{ 729, 255 },
	{ 472, 0 },
	{ 472, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00139110[] = {
	{ 2550, 255 },
	{ 2550, 92 },
	{ 2422, 255 },
	{ 2422, 0 },
	{ 2231, 255 },
	{ 2231, 0 },
	{ 0, 92 },
	{ 0, 254 },
	{ 127, 0 },
	{ 127, 254 },
	{ 318, 0 },
	{ 318, 254 },
	{ 0, 254 },
	{ 0, 92 },
	{ 127, 254 },
	{ 127, 0 },
	{ 2422, 255 },
	{ 2422, 0 },
	{ 2550, 255 },
	{ 2550, 92 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00139160[] = {
	{ 5100, 0 },
	{ 5100, 255 },
	{ 4732, 0 },
	{ 4732, 255 },
	{ 4435, 0 },
	{ 4435, 255 },
	{ 662, 0 },
	{ 662, 255 },
	{ 366, 0 },
	{ 366, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00139190[] = {
	{ 1020, -1785 },
	{ 1020, 255 },
	{ 765, -1785 },
	{ 765, 255 },
	{ 508, -1785 },
	{ 508, 255 },
	{ 254, -1785 },
	{ 254, 255 },
	{ 0, -1785 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001391B8[] = {
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 508, 0 },
	{ 508, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 1020, 0 },
	{ 1020, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001391E0[] = {
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 508, 0 },
	{ 508, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 508, 0 },
	{ 508, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 508, 0 },
	{ 508, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 1020, 0 },
	{ 1020, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00139258[] = {
	{ 1020, 255 },
	{ 1020, 0 },
	{ 765, 255 },
	{ 765, 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 254, 255 },
	{ 254, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 1020, 0 },
	{ 1020, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001392A8[] = {
	{ 1020, -1785 },
	{ 1020, 255 },
	{ 765, -1785 },
	{ 765, 255 },
	{ 510, -1785 },
	{ 510, 255 },
	{ 254, -1785 },
	{ 254, 255 },
	{ 0, -1785 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_001392D0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00138F9C, NULL, NULL, NULL, uv_001390C0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, poly_00138FC8, NULL, NULL, NULL, uv_00139110, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_00138FF6, NULL, NULL, NULL, uv_00139160, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_00139010, NULL, NULL, NULL, uv_00139190, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_00139026, NULL, NULL, NULL, uv_001391B8, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 3, poly_0013903C, NULL, NULL, NULL, uv_001391E0, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, poly_0013907E, NULL, NULL, NULL, uv_00139258, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 1, poly_001390AA, NULL, NULL, NULL, uv_001392A8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00139390[] = {
	{ -2.749892f, -14.5f, -13.64986f },
	{ -2.749892f, -12, -16.64986f },
	{ -2.749892f, -14.5f, -18.64986f },
	{ -2.749892f, -12, -18.64986f },
	{ 0.75011f, -12, -18.64986f },
	{ 0.75011f, -14.5f, -18.64986f },
	{ 2.750108f, -14.5f, -16.64986f },
	{ 2.750108f, -12, -16.64986f },
	{ -2.749892f, -12, -13.64986f },
	{ 2.750108f, -14.5f, -13.64986f },
	{ 2.750108f, -12, -13.64986f },
	{ -2.749892f, -14.5f, 16.35015f },
	{ -2.749892f, -12, 19.35014f },
	{ -2.749892f, -14.5f, 21.35014f },
	{ -2.749892f, -12, 21.35014f },
	{ 0.750107f, -12, 21.35014f },
	{ 0.750107f, -14.5f, 21.35014f },
	{ 2.750108f, -14.5f, 19.35014f },
	{ 2.750108f, -12, 19.35014f },
	{ -2.749892f, -12, 16.35015f },
	{ 2.750108f, -14.5f, 16.35015f },
	{ 2.750108f, -12, 16.35015f },
	{ -2.749892f, 12.5f, -16.64986f },
	{ -2.749892f, 15.5f, -18.64986f },
	{ -2.749892f, 12.5f, -18.64986f },
	{ 0.75011f, 12.5f, -18.64986f },
	{ 0.75011f, 15.5f, -18.64986f },
	{ -2.749892f, 12.5f, 19.35014f },
	{ -2.749892f, 12.5f, 21.35014f },
	{ -2.749892f, 15.5f, 21.35014f },
	{ 0.750107f, 15.5f, 21.35014f },
	{ 0.750107f, 12.5f, 21.35014f },
	{ 2.750108f, 15.5f, -16.64986f },
	{ 2.750108f, 12.5f, -16.64986f },
	{ 2.750108f, 12.5f, 19.35014f },
	{ 2.750108f, 15.5f, 19.35014f },
	{ -0.749893f, -12, 16.71807f },
	{ 0.250107f, -12, 18.45012f },
	{ -0.749893f, -10, 16.71807f },
	{ 0.250107f, -10, 18.45012f },
	{ 0.250107f, 10, 18.45012f },
	{ -0.749893f, 10, 16.71807f },
	{ -0.749893f, 12.5f, 16.71807f },
	{ 0.250107f, 12.5f, 18.45012f },
	{ 0.250107f, -9, 18.45012f },
	{ -0.749893f, -9, 16.71807f },
	{ -2.749892f, -12, 16.71807f },
	{ -2.749892f, -10, 16.71807f },
	{ -2.749892f, 10, 16.71807f },
	{ -2.749892f, 12.5f, 16.71807f },
	{ -2.749892f, -9, 16.71807f },
	{ -2.749892f, -12, 20.18218f },
	{ -2.749892f, -10, 20.18218f },
	{ -2.749892f, 10, 20.18218f },
	{ -2.749892f, 12.5f, 20.18218f },
	{ -2.749892f, -9, 20.18218f },
	{ -0.749893f, -12, 20.18218f },
	{ -0.749893f, -10, 20.18218f },
	{ -0.749893f, 10, 20.18218f },
	{ -0.749893f, 12.5f, 20.18218f },
	{ -0.749893f, -9, 20.18218f },
	{ -0.74989f, -12, -17.28194f },
	{ 0.25011f, -12, -15.54989f },
	{ -0.74989f, -10, -17.28194f },
	{ 0.25011f, -10, -15.54989f },
	{ 0.25011f, 10, -15.54989f },
	{ -0.74989f, 10, -17.28194f },
	{ -0.74989f, 12.5f, -17.28194f },
	{ 0.25011f, 12.5f, -15.54989f },
	{ 0.25011f, -9, -15.54989f },
	{ -0.74989f, -9, -17.28194f },
	{ -2.749892f, -12, -17.28194f },
	{ -2.749892f, -10, -17.28194f },
	{ -2.749892f, 10, -17.28194f },
	{ -2.749892f, 12.5f, -17.28194f },
	{ -2.749892f, -9, -17.28194f },
	{ -2.749892f, -12, -13.81783f },
	{ -2.749892f, -10, -13.81783f },
	{ -2.749892f, 10, -13.81783f },
	{ -2.749892f, 12.5f, -13.81783f },
	{ -2.749892f, -9, -13.81783f },
	{ -0.74989f, -12, -13.81783f },
	{ -0.74989f, -10, -13.81783f },
	{ -0.74989f, 10, -13.81783f },
	{ -0.74989f, 12.5f, -13.81783f },
	{ -0.74989f, -9, -13.81783f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00139798[] = {
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0.297109f, 0.630262f, -0.717283f },
	{ 0.382684f, 0, -0.923879f },
	{ 0.92388f, 0, -0.382683f },
	{ 0.717284f, 0.630263f, -0.297108f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0, 0, -1 },
	{ 0, 1, 0 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0.297109f, 0.630262f, 0.717284f },
	{ 0.382683f, 0, 0.92388f },
	{ 0.92388f, 0, 0.382684f },
	{ 0.717284f, 0.630262f, 0.297109f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0, -1, 0 },
	{ 0, 0, -1 },
	{ 0, -0.7071069f, -0.7071069f },
	{ 0.297109f, -0.630262f, -0.717283f },
	{ 0.382684f, 0, -0.923879f },
	{ 0, -1, 0 },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, 0, 1 },
	{ 0.382683f, 0, 0.92388f },
	{ 0.297109f, -0.630262f, 0.717284f },
	{ 0.92388f, 0, -0.382683f },
	{ 0.717284f, -0.630263f, -0.297108f },
	{ 0.717284f, -0.630262f, 0.297109f },
	{ 0.92388f, 0, 0.382684f },
	{ 0.5f, 0, -0.866025f },
	{ 1, 0, 0 },
	{ 0.5f, 0, -0.866025f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.5f, 0, -0.866025f },
	{ 0.5f, 0, -0.866025f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.5f, 0, -0.866025f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.5f, 0, 0.866025f },
	{ 0.5f, 0, 0.866025f },
	{ 0.5f, 0, 0.866025f },
	{ 0.5f, 0, 0.866025f },
	{ 0.5f, 0, 0.866025f },
	{ 0.5f, 0, -0.866025f },
	{ 1, 0, -0.00001f },
	{ 0.5f, 0, -0.866025f },
	{ 1, 0, -0.00001f },
	{ 1, 0, -0.00001f },
	{ 0.5f, 0, -0.866025f },
	{ 0.5f, 0, -0.866025f },
	{ 1, 0, -0.00001f },
	{ 1, 0, -0.00001f },
	{ 0.5f, 0, -0.866025f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.500001f, 0, 0.866025f },
	{ 0.500001f, 0, 0.866025f },
	{ 0.5f, 0, 0.866025f },
	{ 0.500001f, 0, 0.866025f },
	{ 0.500001f, 0, 0.866025f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00139BA0 = { vertex_00139390, normal_00139798, LengthOfArray<Sint32>(vertex_00139390), meshlist_001392D0, matlist_00138EFC, LengthOfArray<Uint16>(meshlist_001392D0), LengthOfArray<Uint16>(matlist_00138EFC), { 0.000108f, 0.5f, 1.350144f }, 20.18818f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00139BC8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00139BA0, -303.6499f, 53.5f, 1602.749f, 0, 0xFFFFC001, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00139BFC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00139C38[] = {
	3, 2, 13, 3,
	0x8000u | 5, 3, 12, 13, 0, 1
};

extern "C" __declspec(dllexport) Sint16 poly_00139C4C[] = {
	4, 6, 7, 5, 2,
	4, 10, 8, 11, 9
};

extern "C" __declspec(dllexport) Sint16 poly_00139C60[] = {
	8, 11, 5, 4, 2, 10, 3, 8, 12
};

extern "C" __declspec(dllexport) NJS_TEX uv_00139C74[] = {
	{ 0, 245 },
	{ 0, -608 },
	{ 1778, 245 },
	{ 1778, 245 },
	{ 1778, -608 },
	{ 0, -608 },
	{ 1778, -1017 },
	{ 0, -1017 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00139C94[] = {
	{ 12, 229 },
	{ 1021, 229 },
	{ 12, -502 },
	{ 1021, -502 },
	{ 2085, 252 },
	{ 2085, -504 },
	{ 2, 252 },
	{ 2, -504 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00139CB4[] = {
	{ 0, 255 },
	{ 0 },
	{ 608, 255 },
	{ 608, 0 },
	{ 2068, 255 },
	{ 2068, 0 },
	{ 2805, 255 },
	{ 2805, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00139CD4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00139C38, NULL, NULL, NULL, uv_00139C74, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00139C4C, NULL, NULL, NULL, uv_00139C94, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_00139C60, NULL, NULL, NULL, uv_00139CB4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00139D1C[] = {
	{ 40, 3, 30.25f },
	{ -20, 3, 30.25f },
	{ -20, 3, -14.5f },
	{ 40, 3, -14.5f },
	{ -20, -3, -14.5f },
	{ -45, 3, -14.5f },
	{ -45, 3, -29.75f },
	{ -20, 3, -29.75f },
	{ 40, -3, 15.75f },
	{ -45, -3, 15.75f },
	{ 40, -3, -14.5f },
	{ -45, -3, -14.5f },
	{ 40, 3, 15.75f },
	{ -20, 3, 15.75f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00139DC4[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0, -1 },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0, 0, -1 },
	{ 0, -0.7071069f, -0.7071069f },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0, -1, 0 },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ 0, -0.7071069f, -0.7071069f },
	{ 0.447214f, 0.8944269f, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00139E6C = { vertex_00139D1C, normal_00139DC4, LengthOfArray<Sint32>(vertex_00139D1C), meshlist_00139CD4, matlist_00139BFC, LengthOfArray<Uint16>(meshlist_00139CD4), LengthOfArray<Uint16>(matlist_00139BFC), { -2.5f, 0, 0.249999f }, 52.02163f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00139E94 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00139E6C, -380, 36, 1749.75f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00139EC8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00139F04[] = {
	0x8000u | 10, 2, 1, 3, 0, 26, 6, 16, 7, 15, 11
};

extern "C" __declspec(dllexport) Sint16 poly_00139F1A[] = {
	0x8000u | 20, 3, 23, 2, 20, 1, 19, 0, 28, 6, 5, 7, 4, 11, 10, 15, 14, 16, 13, 26, 25,
	4, 26, 3, 25, 23
};

extern "C" __declspec(dllexport) Sint16 poly_00139F4E[] = {
	4, 21, 22, 19, 20,
	0x8000u | 20, 19, 21, 28, 29, 5, 9, 4, 8, 10, 12, 14, 18, 13, 17, 25, 27, 23, 24, 20, 22
};

extern "C" __declspec(dllexport) NJS_TEX uv_00139F84[] = {
	{ 0, -3060 },
	{ 905, -3060 },
	{ 0, -582 },
	{ 905, -2826 },
	{ 905, -582 },
	{ 1737, -2826 },
	{ 905, 255 },
	{ 1737, -2076 },
	{ 2040, 255 },
	{ 2040, -2076 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00139FAC[] = {
	{ 17850, 227 },
	{ 17850, 35 },
	{ 13622, 227 },
	{ 13622, 35 },
	{ 11742, 227 },
	{ 11742, 35 },
	{ 11288, 227 },
	{ 11288, 35 },
	{ 9565, 227 },
	{ 9565, 35 },
	{ 8305, 227 },
	{ 8305, 35 },
	{ 7680, 227 },
	{ 7680, 35 },
	{ 3757, 227 },
	{ 3757, 35 },
	{ 1409, 227 },
	{ 1409, 35 },
	{ 0, 227 },
	{ 0, 35 },
	{ 13622, 227 },
	{ 11742, 227 },
	{ 13622, 35 },
	{ 11742, 35 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013A00C[] = {
	{ 2511, 105 },
	{ 3665, 105 },
	{ 2596, 25 },
	{ 3750, 25 },
	{ 10965, 25 },
	{ 10879, 105 },
	{ 10686, 25 },
	{ 10599, 105 },
	{ 9627, 25 },
	{ 9542, 105 },
	{ 8853, 25 },
	{ 8768, 105 },
	{ 8469, 25 },
	{ 8382, 105 },
	{ 6058, 25 },
	{ 5972, 105 },
	{ 4616, 25 },
	{ 4530, 105 },
	{ 3750, 25 },
	{ 3665, 105 },
	{ 2596, 25 },
	{ 2511, 105 },
	{ 0, 26 },
	{ 0, 105 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0013A06C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00139F04, NULL, NULL, NULL, uv_00139F84, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00139F1A, NULL, NULL, NULL, uv_00139FAC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_00139F4E, NULL, NULL, NULL, uv_0013A00C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0013A0B4[] = {
	{ 80, 66, 35.5f },
	{ 80, 66, 48.00001f },
	{ 20, 66, 48.00001f },
	{ 20, 66, -85 },
	{ 135, 62.5f, -4.75001f },
	{ 135, 62.5f, 35.49999f },
	{ 135, 66, 35.49999f },
	{ 135, 66, -4.75001f },
	{ 135, 55, -4.75001f },
	{ 135, 55, 35.49999f },
	{ 155, 62.5f, -4.750028f },
	{ 155, 66, -4.750028f },
	{ 155, 55, -4.750028f },
	{ 80, 62.5f, -130 },
	{ 155, 62.5f, -130 },
	{ 155, 66, -130 },
	{ 80, 66, -130 },
	{ 80, 55, -130 },
	{ 155, 55, -130 },
	{ 80, 62.5f, 48.00001f },
	{ 20, 62.5f, 48.00001f },
	{ 80, 55, 48.00001f },
	{ 20, 55, 48.00001f },
	{ 20, 62.5f, -85 },
	{ 20, 55, -85 },
	{ 80, 62.5f, -85 },
	{ 80, 66, -85 },
	{ 80, 55, -85 },
	{ 80, 62.5f, 35.5f },
	{ 80, 55, 35.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0013A21C[] = {
	{ -0.301511f, -0.904534f, -0.301511f },
	{ -0.57735f, -0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ -0.7071069f, 0, -0.707106f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.57735f, -0.57735f, -0.57735f },
	{ -0.301512f, -0.904534f, -0.301511f },
	{ -0.7071069f, 0, -0.707106f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.707106f },
	{ -0.57735f, -0.57735f, -0.57735f },
	{ -0.7071069f, 0, -0.707106f },
	{ 0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.301511f, -0.904534f, 0.301511f },
	{ 0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0013A384 = { vertex_0013A0B4, normal_0013A21C, LengthOfArray<Sint32>(vertex_0013A0B4), meshlist_0013A06C, matlist_00139EC8, LengthOfArray<Uint16>(meshlist_0013A06C), LengthOfArray<Uint16>(matlist_00139EC8), { 87.5f, 60.5f, -40.99999f }, 111.7016f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0013A3AC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013A384, -420, 14, 1730, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0013A3E0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0013A444[] = {
	6, 28, 30, 31, 25, 26, 27,
	3, 31, 29, 28,
	3, 25, 24, 27,
	0x8000u | 8, 24, 33, 25, 34, 30, 37, 28, 36
};

extern "C" __declspec(dllexport) Sint16 poly_0013A474[] = {
	0x8000u | 5, 21, 18, 23, 45, 32,
	3, 21, 22, 23,
	3, 12, 15, 17,
	0x8000u | 8, 17, 16, 15, 35, 42, 2, 38, 39,
	0x8000u | 5, 2, 3, 39, 32, 45,
	4, 12, 17, 10, 1,
	4, 22, 21, 0, 5,
	0x8000u | 8, 33, 32, 34, 3, 37, 2, 36, 35,
	0x8000u | 5, 22, 23, 24, 32, 33,
	3, 22, 27, 24,
	3, 17, 16, 29,
	0x8000u | 5, 29, 28, 16, 36, 35,
	0x8000u | 8, 29, 17, 31, 1, 26, 0, 27, 22
};

extern "C" __declspec(dllexport) Sint16 poly_0013A50E[] = {
	4, 19, 20, 18, 21,
	3, 10, 8, 12,
	4, 42, 40, 38, 41,
	4, 44, 45, 43, 39,
	4, 21, 20, 5, 7,
	3, 11, 38, 41,
	6, 42, 15, 14, 12, 13, 8,
	3, 14, 40, 42,
	6, 39, 4, 6, 11, 9, 41,
	3, 6, 43, 39,
	4, 45, 44, 18, 19
};

extern "C" __declspec(dllexport) Sint16 poly_0013A57C[] = {
	0x8000u | 5, 13, 14, 9, 40, 41,
	3, 7, 20, 19,
	8, 44, 43, 19, 6, 7, 9, 8, 13
};

extern "C" __declspec(dllexport) Sint16 poly_0013A5A2[] = {
	4, 39, 38, 4, 11
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013A5AC[] = {
	{ 0, -58 },
	{ 139, -58 },
	{ 139, -765 },
	{ 556, -58 },
	{ 556, -764 },
	{ 765, -764 },
	{ 139, -765 },
	{ 0, -765 },
	{ 0, -58 },
	{ 556, -58 },
	{ 765, -58 },
	{ 765, -764 },
	{ 765, -58 },
	{ 765, 255 },
	{ 556, -58 },
	{ 556, 255 },
	{ 139, -58 },
	{ 139, 254 },
	{ 0, -58 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013A5FC[] = {
	{ 1019, 255 },
	{ 312, 255 },
	{ 312, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1019, 255 },
	{ 1019, 0 },
	{ 312, 0 },
	{ 1020, 255 },
	{ 312, 255 },
	{ 1020, 0 },
	{ 1020, 0 },
	{ 312, 0 },
	{ 312, 255 },
	{ 0 },
	{ 0, 255 },
	{ 139, 0 },
	{ 139, 255 },
	{ 556, 255 },
	{ 139, 0 },
	{ 556, 0 },
	{ 556, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 0, 255 },
	{ 0 },
	{ 139, 255 },
	{ 139, 0 },
	{ 765, 0 },
	{ 765, 255 },
	{ 556, 0 },
	{ 556, 255 },
	{ 765, -3 },
	{ 765, 253 },
	{ 556, -3 },
	{ 556, 253 },
	{ 139, -3 },
	{ 139, 253 },
	{ 0, -3 },
	{ 0, 253 },
	{ 1019, 255 },
	{ 312, 255 },
	{ 312, 1 },
	{ 0, 255 },
	{ 0, 1 },
	{ 1019, 255 },
	{ 1019, 1 },
	{ 312, 1 },
	{ 1020, 255 },
	{ 312, 255 },
	{ 1020, 1 },
	{ 1020, 1 },
	{ 312, 1 },
	{ 312, 255 },
	{ 0, 1 },
	{ 0, 255 },
	{ 0, -3 },
	{ 0, 253 },
	{ 139, -3 },
	{ 139, 253 },
	{ 556, -3 },
	{ 556, 253 },
	{ 765, -3 },
	{ 765, 253 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013A6FC[] = {
	{ 2249, 255 },
	{ 900, 255 },
	{ 2249, 0 },
	{ 900, 0 },
	{ 2550, 0 },
	{ 2550, 255 },
	{ 2249, 0 },
	{ 278, 3 },
	{ 278, 251 },
	{ 39, 3 },
	{ 39, 251 },
	{ 278, 251 },
	{ 278, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 510, 223 },
	{ 510, 255 },
	{ 370, 223 },
	{ 370, 255 },
	{ 1821, 0 },
	{ 2550, 0 },
	{ 2550, 255 },
	{ 300, 0 },
	{ 900, 0 },
	{ 900, 255 },
	{ 2249, 0 },
	{ 2249, 255 },
	{ 2550, 255 },
	{ 900, 255 },
	{ 300, 255 },
	{ 300, 0 },
	{ 0 },
	{ 728, 0 },
	{ 728, 255 },
	{ 1821, 0 },
	{ 1821, 255 },
	{ 2550, 255 },
	{ 728, 255 },
	{ 0, 255 },
	{ 0 },
	{ 358, 3 },
	{ 358, 251 },
	{ 836, 3 },
	{ 836, 251 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013A7AC[] = {
	{ 0, -1785 },
	{ 0, -372 },
	{ 278, -372 },
	{ 0, 254 },
	{ 278, 254 },
	{ 1112, -1784 },
	{ 1530, -1784 },
	{ 1530, -372 },
	{ 1530, 255 },
	{ 1112, 255 },
	{ 1530, -372 },
	{ 1112, -372 },
	{ 1112, -1784 },
	{ 278, -372 },
	{ 278, -1785 },
	{ 0, -1785 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013A7EC[] = {
	{ 254, 255 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0013A7FC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0013A444, NULL, NULL, NULL, uv_0013A5AC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 13, poly_0013A474, NULL, NULL, NULL, uv_0013A5FC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 11, poly_0013A50E, NULL, NULL, NULL, uv_0013A6FC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 3, poly_0013A57C, NULL, NULL, NULL, uv_0013A7AC, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_0013A5A2, NULL, NULL, NULL, uv_0013A7EC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0013A874[] = {
	{ 14.99997f, 27, 17.49995f },
	{ -15.00003f, 27, 17.49997f },
	{ -15.00003f, 27, -47.50001f },
	{ 14.99997f, 27, -47.50003f },
	{ 14.99997f, 5, -27.50003f },
	{ 14.99997f, 5, 17.49995f },
	{ 14.99997f, 0, -27.50003f },
	{ 14.99997f, 0, 17.49995f },
	{ -15.00003f, 0, 17.49997f },
	{ -15.00003f, 0, -27.50001f },
	{ -15.00003f, 5, 17.49997f },
	{ -15.00003f, 5, -27.50001f },
	{ -25.00003f, 5, 17.49997f },
	{ -25.00003f, 0, 17.49997f },
	{ -25.00003f, 0, -27.50001f },
	{ -25.00003f, 5, -27.50001f },
	{ -25.00003f, 27, -27.50001f },
	{ -25.00003f, 27, 17.49997f },
	{ 29.99997f, 5, -27.50003f },
	{ 29.99997f, 0, -27.50003f },
	{ 29.99997f, 0, 17.49995f },
	{ 29.99997f, 5, 17.49995f },
	{ 29.99997f, 27, 17.49995f },
	{ 29.99997f, 27, -27.50003f },
	{ 29.99997f, 41, -27.50003f },
	{ 14.99997f, 41, -27.50003f },
	{ 14.99997f, 41, 17.49995f },
	{ 29.99997f, 41, 17.49995f },
	{ -25.00003f, 41, -27.50001f },
	{ -25.00003f, 41, 17.49997f },
	{ -15.00003f, 41, -27.50001f },
	{ -15.00003f, 41, 17.49997f },
	{ 29.99997f, 27, -47.50003f },
	{ 29.99997f, 41, -47.50003f },
	{ 14.99997f, 41, -47.50003f },
	{ -25.00003f, 27, -47.50001f },
	{ -25.00003f, 41, -47.50001f },
	{ -15.00003f, 41, -47.50001f },
	{ -15.00003f, 5, -47.50001f },
	{ 14.99997f, 5, -47.50003f },
	{ -25.00003f, 0, -47.50001f },
	{ -15.00003f, 0, -47.50001f },
	{ -25.00003f, 5, -47.50001f },
	{ 14.99997f, 0, -47.50003f },
	{ 29.99997f, 0, -47.50003f },
	{ 29.99997f, 5, -47.50003f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0013AA9C[] = {
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0, 0, -1 },
	{ 0.301512f, 0.904534f, 0.301511f },
	{ 0, 0.8944269f, -0.447214f },
	{ 0, 0.8944269f, -0.447214f },
	{ -0.301511f, 0.904534f, 0.301511f },
	{ 0, 0, -1 },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ -1, 0, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -1, 0, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ 0, -1, 0 },
	{ 0, -0.7071069f, -0.7071069f },
	{ -0.57735f, -0.57735f, -0.57735f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ 0, -1, 0 },
	{ 0, -0.7071069f, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0, -0.7071069f, 0.7071069f },
	{ -0.301511f, 0.301511f, 0.904534f },
	{ 0.301511f, 0.301511f, 0.904534f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.7071069f, 0, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0013ACC4 = { vertex_0013A874, normal_0013AA9C, LengthOfArray<Sint32>(vertex_0013A874), meshlist_0013A7FC, matlist_0013A3E0, LengthOfArray<Uint16>(meshlist_0013A7FC), LengthOfArray<Uint16>(matlist_0013A3E0), { 2.499969f, 20.5f, -15.00003f }, 42.57346f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0013ACEC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013ACC4, -305, 39, 1577.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0013AD20[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0013AD70[] = {
	0x8000u | 7, 1, 0, 73, 4, 3, 76, 75,
	3, 1, 72, 73,
	4, 74, 2, 78, 77,
	4, 80, 6, 79, 5,
	4, 98, 7, 81, 12,
	4, 31, 30, 34, 35,
	4, 86, 36, 88, 38,
	4, 43, 44, 39, 40,
	4, 48, 47, 51, 52,
	7, 60, 58, 57, 106, 103, 102, 83,
	0x8000u | 5, 57, 60, 59, 91, 92,
	4, 97, 96, 90, 89,
	4, 65, 67, 64, 66,
	4, 93, 94, 10, 11
};

extern "C" __declspec(dllexport) Sint16 poly_0013AE08[] = {
	4, 72, 1, 74, 2,
	6, 10, 11, 9, 8, 7, 12,
	6, 5, 6, 14, 13, 75, 76,
	4, 98, 81, 28, 27,
	4, 22, 21, 25, 24,
	4, 36, 31, 38, 34,
	4, 44, 86, 40, 88,
	4, 89, 48, 90, 51,
	4, 92, 80, 91, 79,
	3, 61, 99, 63,
	0x8000u | 5, 63, 84, 99, 19, 18,
	4, 69, 67, 70, 65,
	4, 62, 71, 91, 60,
	0x8000u | 6, 102, 83, 105, 104, 78, 77
};

extern "C" __declspec(dllexport) Sint16 poly_0013AEA0[] = {
	4, 7, 98, 5, 79,
	6, 17, 12, 15, 8, 16, 11,
	4, 17, 82, 12, 81,
	6, 7, 5, 9, 14, 10, 75,
	4, 85, 84, 20, 19,
	4, 81, 82, 27, 29,
	4, 23, 22, 26, 25,
	4, 32, 33, 31, 30,
	4, 73, 72, 35, 34,
	4, 87, 37, 86, 36,
	4, 74, 78, 38, 88,
	4, 37, 32, 36, 31,
	4, 72, 74, 34, 38,
	4, 41, 42, 40, 39,
	4, 45, 46, 43, 44,
	4, 49, 50, 48, 47,
	4, 53, 105, 52, 51,
	4, 46, 87, 44, 86,
	4, 78, 41, 88, 40,
	4, 100, 49, 89, 48,
	4, 90, 102, 97, 106,
	4, 51, 105, 90, 102,
	0x8000u | 6, 62, 61, 91, 99, 79, 98,
	4, 85, 56, 84, 63,
	4, 60, 65, 58, 64,
	4, 96, 101, 89, 100,
	4, 67, 54, 66, 68,
	4, 55, 54, 69, 67,
	4, 60, 71, 65, 70,
	4, 3, 93, 75, 10,
	4, 16, 11, 95, 94
};

extern "C" __declspec(dllexport) Sint16 poly_0013AFE2[] = {
	4, 53, 42, 105, 41
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013AFEC[] = {
	{ 2897, -508 },
	{ 1553, -508 },
	{ 1553, -195 },
	{ 312, -508 },
	{ 312, -195 },
	{ 3, -508 },
	{ 3, -195 },
	{ 2897, -508 },
	{ 2897, -195 },
	{ 1553, -195 },
	{ 2897, -195 },
	{ 2897, -508 },
	{ 3311, -195 },
	{ 3311, -508 },
	{ 518, -508 },
	{ 3, -508 },
	{ 518, -195 },
	{ 3, -195 },
	{ 518, -140 },
	{ 3, -140 },
	{ 518, 250 },
	{ 3, 250 },
	{ 2897, 250 },
	{ 1553, 250 },
	{ 2897, -140 },
	{ 1553, -140 },
	{ 3311, 250 },
	{ 2897, 250 },
	{ 3311, -140 },
	{ 2897, -140 },
	{ 3827, 250 },
	{ 3311, 250 },
	{ 3827, -140 },
	{ 3311, -140 },
	{ 3311, 250 },
	{ 3827, 250 },
	{ 3311, -140 },
	{ 3827, -140 },
	{ 1760, -195 },
	{ 2059, -195 },
	{ 2059, -508 },
	{ 3206, -195 },
	{ 3206, -508 },
	{ 3311, -195 },
	{ 3311, -508 },
	{ 2059, -508 },
	{ 1760, -195 },
	{ 1760, -508 },
	{ 518, -195 },
	{ 518, -508 },
	{ 3206, -140 },
	{ 3206, 250 },
	{ 3311, -140 },
	{ 3311, 250 },
	{ 1760, -140 },
	{ 1760, 250 },
	{ 2059, -140 },
	{ 2059, 250 },
	{ 312, -140 },
	{ 312, 250 },
	{ 3, -140 },
	{ 3, 250 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013B0E4[] = {
	{ 3282, -198 },
	{ 3282, -508 },
	{ 2484, -198 },
	{ 2484, -508 },
	{ 3282, -143 },
	{ 3282, 244 },
	{ 2681, -143 },
	{ 2681, 244 },
	{ 2379, -143 },
	{ 2379, 244 },
	{ 2379, -198 },
	{ 2379, -508 },
	{ 2681, -198 },
	{ 2681, -508 },
	{ 3282, -198 },
	{ 3282, -508 },
	{ 2379, -143 },
	{ 2379, 244 },
	{ 2182, -143 },
	{ 2182, 244 },
	{ 1488, 244 },
	{ 1488, -143 },
	{ 1785, 244 },
	{ 1785, -143 },
	{ 2484, 244 },
	{ 3282, 244 },
	{ 2484, -143 },
	{ 3282, -143 },
	{ 2285, 244 },
	{ 2484, 244 },
	{ 2285, -143 },
	{ 2484, -143 },
	{ 892, 244 },
	{ 1096, 244 },
	{ 892, -143 },
	{ 1096, -143 },
	{ 892, -508 },
	{ 2379, -508 },
	{ 892, -198 },
	{ 2379, -198 },
	{ 0, -143 },
	{ 892, -143 },
	{ 0, 244 },
	{ 0, 244 },
	{ 892, 244 },
	{ 892, -143 },
	{ 1091, 244 },
	{ 1091, -143 },
	{ 0, 244 },
	{ 892, 244 },
	{ 0, -143 },
	{ 892, -143 },
	{ 0, -198 },
	{ 0, -198 },
	{ 892, -198 },
	{ 892, -198 },
	{ 892, -198 },
	{ 892, -508 },
	{ 1096, -198 },
	{ 1096, -508 },
	{ 2484, -198 },
	{ 2484, -508 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013B1DC[] = {
	{ 0, 26 },
	{ 516, 26 },
	{ 0, 1 },
	{ 516, 1 },
	{ 2056, 105 },
	{ 2056, 25 },
	{ 2474, 105 },
	{ 2474, 25 },
	{ 3303, 105 },
	{ 3303, 25 },
	{ 6, 104 },
	{ 521, 104 },
	{ 32, 24 },
	{ 548, 24 },
	{ 2587, 26 },
	{ 2587, 1 },
	{ 2916, 26 },
	{ 2916, 1 },
	{ 3570, 26 },
	{ 3570, 1 },
	{ 2, 105 },
	{ 2, 25 },
	{ 276, 105 },
	{ 276, 25 },
	{ 2056, 25 },
	{ 2056, 105 },
	{ 1783, 25 },
	{ 1783, 105 },
	{ 824, 105 },
	{ 824, 25 },
	{ 1235, 105 },
	{ 1235, 25 },
	{ 2898, 104 },
	{ 1554, 104 },
	{ 2923, 24 },
	{ 1580, 24 },
	{ 1550, 1 },
	{ 2894, 1 },
	{ 1550, 26 },
	{ 2894, 26 },
	{ 3311, 104 },
	{ 2898, 104 },
	{ 3336, 24 },
	{ 2923, 24 },
	{ 2894, 1 },
	{ 3308, 1 },
	{ 2894, 26 },
	{ 3308, 26 },
	{ 2200, 105 },
	{ 3303, 105 },
	{ 2200, 25 },
	{ 3303, 25 },
	{ 3570, 1 },
	{ 2700, 1 },
	{ 3570, 26 },
	{ 2700, 26 },
	{ 3308, 1 },
	{ 3825, 1 },
	{ 3308, 26 },
	{ 3825, 26 },
	{ 6, 104 },
	{ 521, 104 },
	{ 32, 24 },
	{ 548, 24 },
	{ 6, 104 },
	{ 521, 104 },
	{ 32, 24 },
	{ 548, 24 },
	{ 3825, 1 },
	{ 3308, 1 },
	{ 3825, 26 },
	{ 3308, 26 },
	{ 1927, 105 },
	{ 2200, 105 },
	{ 1927, 25 },
	{ 2200, 25 },
	{ 2700, 1 },
	{ 2486, 1 },
	{ 2700, 26 },
	{ 2486, 26 },
	{ 2, 105 },
	{ 282, 105 },
	{ 2, 25 },
	{ 282, 25 },
	{ 3308, 26 },
	{ 3308, 1 },
	{ 3203, 26 },
	{ 3203, 1 },
	{ 1190, 26 },
	{ 1190, 1 },
	{ 969, 26 },
	{ 969, 1 },
	{ 0, 1 },
	{ 0, 26 },
	{ 969, 1 },
	{ 969, 26 },
	{ 2587, 1 },
	{ 2587, 26 },
	{ 2200, 105 },
	{ 3303, 105 },
	{ 2200, 25 },
	{ 3303, 25 },
	{ 1756, 1 },
	{ 1756, 26 },
	{ 2056, 1 },
	{ 2056, 26 },
	{ 3207, 24 },
	{ 3207, 104 },
	{ 3311, 24 },
	{ 3311, 104 },
	{ 1787, 24 },
	{ 1761, 104 },
	{ 2087, 24 },
	{ 2061, 104 },
	{ 2200, 105 },
	{ 3303, 105 },
	{ 2200, 25 },
	{ 3303, 25 },
	{ 969, 1 },
	{ 0, 1 },
	{ 969, 26 },
	{ 0, 26 },
	{ 310, 1 },
	{ 310, 26 },
	{ 0, 1 },
	{ 0, 26 },
	{ 6, 104 },
	{ 32, 24 },
	{ 316, 104 },
	{ 342, 24 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013B3E4[] = {
	{ 508, 254 },
	{ 508, -1019 },
	{ 3, 254 },
	{ 3, -1019 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0013B3F4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 14, poly_0013AD70, NULL, NULL, NULL, uv_0013AFEC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 14, poly_0013AE08, NULL, NULL, NULL, uv_0013B0E4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 31, poly_0013AEA0, NULL, NULL, NULL, uv_0013B1DC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_0013AFE2, NULL, NULL, NULL, uv_0013B3E4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0013B454[] = {
	{ -20, 19.5f, 82.75f },
	{ 45, 19.5f, 82.75f },
	{ 45, 19.5f, 42.5f },
	{ -80, 5.5f, 82.75f },
	{ -80, 19.5f, 82.75f },
	{ -95, 5.5f, 37.25f },
	{ -95, 19.5f, 37.25f },
	{ -95, 3, 37.25f },
	{ -95, -14.5f, 52.5f },
	{ -95, 3, 52.5f },
	{ -95, 3, 82.75f },
	{ -95, -14.5f, 82.75f },
	{ -95, -14.5f, 37.25f },
	{ -95, 19.5f, 52.5f },
	{ -95, 5.5f, 52.5f },
	{ -95, -19.5f, 52.5f },
	{ -95, -19.5f, 82.75f },
	{ -95, -19.5f, 37.25f },
	{ -70, 3, -27.75f },
	{ -70, -14.5f, -27.75f },
	{ -70, -19.5f, -27.75f },
	{ -70, 3, -7.75f },
	{ -70, -14.5f, -7.75f },
	{ -70, -19.5f, -7.75f },
	{ -70, 3, 7.25f },
	{ -70, -14.5f, 7.25f },
	{ -70, -19.5f, 7.25f },
	{ -70, -14.5f, 27.25f },
	{ -70, 3, 27.25f },
	{ -70, -19.5f, 27.25f },
	{ -20, -14.5f, 82.75f },
	{ 45, -14.5f, 82.75f },
	{ 45, -19.5f, 82.75f },
	{ -20, -19.5f, 82.75f },
	{ 45, 3, 82.75f },
	{ -20, 3, 82.75f },
	{ 45, -14.5f, 42.5f },
	{ 45, -19.5f, 42.5f },
	{ 45, 3, 42.5f },
	{ 90, 3, 32.5f },
	{ 65, 3, 32.5f },
	{ 65, 5.5f, 32.5f },
	{ 90, 5.5f, 32.5f },
	{ 90, -14.5f, 32.5f },
	{ 65, -14.5f, 32.5f },
	{ 90, -19.5f, 32.5f },
	{ 65, -19.5f, 32.5f },
	{ 90, -14.5f, -27.5f },
	{ 65, -14.5f, -27.5f },
	{ 65, -19.5f, -27.5f },
	{ 90, -19.5f, -27.5f },
	{ 65, 3, -27.5f },
	{ 90, 3, -27.5f },
	{ 90, 5.5f, -27.5f },
	{ -10, -19.5f, -37.75f },
	{ -10, -19.5f, -82.75f },
	{ -70, -19.5f, -82.75f },
	{ 4.5f, 19.5f, -37.75f },
	{ 4.5f, 5.5f, -37.75f },
	{ -10, 19.5f, -37.75f },
	{ -10, 5.5f, -37.75f },
	{ -70, 3, -82.75f },
	{ -70, 5.5f, -82.75f },
	{ -70, -14.5f, -82.75f },
	{ 4.5f, 3, -37.75f },
	{ -10, 3, -37.75f },
	{ 4.5f, -14.5f, -37.75f },
	{ -10, -14.5f, -37.75f },
	{ 4.5f, -19.5f, -37.75f },
	{ -10, -14.5f, -82.75f },
	{ -10, 3, -82.75f },
	{ -10, 5.5f, -82.75f },
	{ 45, 5.5f, 82.75f },
	{ -20, 5.5f, 82.75f },
	{ 45, 5.5f, 42.5f },
	{ -95, 5.5f, 82.75f },
	{ -95, 19.5f, 82.75f },
	{ 65, 19.5f, 42.5f },
	{ 65, 5.5f, 42.5f },
	{ -70, 5.5f, 37.25f },
	{ -70, 19.5f, 37.25f },
	{ -70, -14.5f, 37.25f },
	{ -70, -19.5f, 37.25f },
	{ 64.99998f, 19.5f, -37.75f },
	{ -70, -14.5f, -37.75f },
	{ -70, -19.5f, -37.75f },
	{ 65, -14.5f, 42.5f },
	{ 65, -19.5f, 42.5f },
	{ 65, 3, 42.5f },
	{ 64.99997f, -14.5f, -37.75f },
	{ 64.99997f, 3, -37.75f },
	{ -70, 5.5f, -37.75f },
	{ -70, 19.5f, -37.75f },
	{ -80, 3, 82.75f },
	{ -80, -14.5f, 82.75f },
	{ -80, -19.5f, 82.75f },
	{ 59.99997f, -14.5f, -37.75f },
	{ 59.99997f, 3, -37.75f },
	{ -70, 3, 37.25f },
	{ -70, 3, -37.75f },
	{ 64.99997f, -19.5f, -37.75f },
	{ 59.99997f, -19.5f, -37.75f },
	{ 65, 5.5f, -37.75f },
	{ 59.99997f, 19.5f, -37.75f },
	{ 65, 19.5f, -27.5f },
	{ 65, 5.5f, -27.5f },
	{ 59.99997f, 5.5f, -37.75f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0013B958[] = {
	{ 0, 0, -1 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
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
	{ 0, 0, -1 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.57735f, -0.57735f, -0.57735f },
	{ 0, -0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0, 0, 1 },
	{ -0.707106f, 0, 0.707108f },
	{ -0.707106f, 0, 0.707108f },
	{ 0, 0, 1 },
	{ -0.707106f, 0.000002f, 0.707108f },
	{ 0, 0, 1 },
	{ 0, -0.7071069f, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.301511f, -0.301511f, 0.904534f },
	{ 1, 0, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 1, 0, 0 },
	{ 0, 0, 1 },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ -0.707106f, -0.00001f, 0.7071069f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.707106f, 0, 0.707108f },
	{ -0.707105f, 0.000002f, 0.707109f },
	{ 0.904534f, -0.301511f, 0.301511f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 1, 0, 0 },
	{ -0.707106f, 0, 0.707108f },
	{ 0, 0, 1 },
	{ -0.7071069f, 0.000001f, 0.707106f },
	{ 0, 0, 1 },
	{ -1, -0.00001f, 0 },
	{ -0.904534f, -0.30151f, 0.301512f },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0013BE5C = { vertex_0013B454, normal_0013B958, LengthOfArray<Sint32>(vertex_0013B454), meshlist_0013B3F4, matlist_0013AD20, LengthOfArray<Uint16>(meshlist_0013B3F4), LengthOfArray<Uint16>(matlist_0013AD20), { -2.5f, 0, 0 }, 124.1121f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0013BE84 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013BE5C, -330, 19.5f, 1682.75f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0013BEB8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0013BEF4[] = {
	0x8000u | 6, 39, 35, 36, 3, 1, 57,
	4, 20, 40, 39, 36,
	0x8000u | 10, 3, 59, 57, 63, 65, 62, 64, 9, 8, 11,
	11, 11, 12, 14, 44, 43, 48, 47, 26, 29, 53, 54,
	4, 9, 11, 10, 14,
	9, 50, 51, 16, 24, 18, 25, 20, 22, 40
};

extern "C" __declspec(dllexport) Sint16 poly_0013BF58[] = {
	4, 21, 39, 38, 35,
	0x8000u | 6, 59, 3, 0, 35, 34, 38,
	0x8000u | 10, 0, 56, 59, 61, 63, 60, 62, 4, 9, 10,
	11, 10, 14, 6, 43, 42, 47, 46, 29, 30, 54, 55,
	4, 4, 10, 5, 6,
	9, 52, 50, 17, 16, 19, 18, 21, 20, 39
};

extern "C" __declspec(dllexport) Sint16 poly_0013BFBC[] = {
	0x8000u | 6, 40, 36, 37, 1, 2, 58,
	0x8000u | 14, 26, 53, 28, 51, 31, 24, 32, 25, 33, 22, 23, 40, 41, 37,
	0x8000u | 7, 1, 57, 58, 65, 66, 64, 67,
	8, 26, 48, 49, 44, 45, 12, 13, 15,
	4, 49, 27, 26, 28,
	6, 67, 7, 8, 15, 11, 12,
	3, 8, 64, 67
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013C02C[] = {
	{ 5641, -510 },
	{ 4744, -510 },
	{ 4744, 255 },
	{ 4560, -510 },
	{ 4560, 255 },
	{ 4198, 255 },
	{ 6361, -510 },
	{ 5641, 255 },
	{ 5641, -510 },
	{ 4744, 255 },
	{ 4560, -510 },
	{ 4198, -510 },
	{ 4198, 255 },
	{ 4048, -510 },
	{ 4048, 255 },
	{ 3330, -510 },
	{ 3330, 255 },
	{ 3180, -510 },
	{ 3180, 255 },
	{ 2520, 255 },
	{ 2520, 255 },
	{ 2039, 255 },
	{ 2039, -510 },
	{ 1799, 255 },
	{ 1799, -510 },
	{ 837, 255 },
	{ 837, -510 },
	{ 298, 255 },
	{ 298, -510 },
	{ 0, 255 },
	{ 0, -510 },
	{ 3180, -510 },
	{ 2520, 255 },
	{ 2520, -510 },
	{ 2039, -510 },
	{ 7140, -510 },
	{ 7140, 255 },
	{ 7019, -510 },
	{ 7019, 255 },
	{ 6899, -510 },
	{ 6899, 255 },
	{ 6361, -510 },
	{ 6361, 255 },
	{ 5641, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013C0DC[] = {
	{ 1184, 105 },
	{ 2203, 23 },
	{ 2203, 105 },
	{ 3478, 23 },
	{ 4252, 23 },
	{ 3738, 23 },
	{ 3738, 105 },
	{ 3478, 23 },
	{ 3478, 105 },
	{ 2203, 105 },
	{ 3738, 105 },
	{ 4252, 105 },
	{ 4252, 23 },
	{ 4498, 105 },
	{ 4498, 23 },
	{ 5518, 105 },
	{ 5518, 23 },
	{ 5766, 105 },
	{ 5766, 23 },
	{ 6700, 23 },
	{ 6700, 23 },
	{ 7385, 23 },
	{ 7385, 105 },
	{ 7724, 23 },
	{ 7724, 105 },
	{ 9089, 23 },
	{ 9089, 105 },
	{ 9854, 23 },
	{ 9854, 105 },
	{ 10200, 23 },
	{ 10200, 105 },
	{ 5766, 105 },
	{ 6700, 23 },
	{ 6700, 105 },
	{ 7385, 105 },
	{ 79, 105 },
	{ 79, 23 },
	{ 249, 105 },
	{ 249, 23 },
	{ 418, 105 },
	{ 418, 23 },
	{ 1184, 105 },
	{ 1184, 23 },
	{ 2203, 23 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013C18C[] = {
	{ 11287, 255 },
	{ 13243, 255 },
	{ 13243, 0 },
	{ 13641, 255 },
	{ 13641, 0 },
	{ 14428, 0 },
	{ 6595, 255 },
	{ 7246, 255 },
	{ 7246, 0 },
	{ 8029, 255 },
	{ 8029, 0 },
	{ 8289, 255 },
	{ 8289, 0 },
	{ 8550, 255 },
	{ 8550, 0 },
	{ 9724, 255 },
	{ 9724, 0 },
	{ 11287, 255 },
	{ 11287, 0 },
	{ 13243, 0 },
	{ 13641, 255 },
	{ 14428, 255 },
	{ 14428, 0 },
	{ 14754, 255 },
	{ 14754, 0 },
	{ 16320, 255 },
	{ 16320, 0 },
	{ 6595, 255 },
	{ 5421, 255 },
	{ 5421, 0 },
	{ 3330, 255 },
	{ 3330, 0 },
	{ 2808, 255 },
	{ 2808, 0 },
	{ 1759, 0 },
	{ 5421, 0 },
	{ 6595, 0 },
	{ 6595, 255 },
	{ 7246, 0 },
	{ 0 },
	{ 324, 0 },
	{ 324, 255 },
	{ 1759, 0 },
	{ 1759, 255 },
	{ 2808, 255 },
	{ 324, 255 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0013C24C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_0013BEF4, NULL, NULL, NULL, uv_0013C02C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_0013BF58, NULL, NULL, NULL, uv_0013C0DC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 7, poly_0013BFBC, NULL, NULL, NULL, uv_0013C18C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0013C294[] = {
	{ -67.5f, -15, 50 },
	{ -67.5f, 12, 50 },
	{ -67.5f, 15, 50 },
	{ -67.5f, -10, 50 },
	{ -7.5f, -15, 80.25f },
	{ 47.5f, -15, 80.25f },
	{ 47.5f, -15, 40 },
	{ -7.5f, 15, 80.25f },
	{ -7.5f, 12, 80.25f },
	{ -7.5f, -10, 80.25f },
	{ 47.5f, -10, 80.25f },
	{ 47.5f, 12, 80.25f },
	{ 47.5f, 12, 40 },
	{ 47.5f, 15, 40 },
	{ 47.5f, -10, 40 },
	{ 47.5f, 15, 80.25f },
	{ 2.5f, -10, -85.25f },
	{ 2.5f, -15, -85.25f },
	{ -7.5f, -10, -85.25f },
	{ -7.5f, -15, -85.25f },
	{ -7.5f, -10, -40.25f },
	{ -7.5f, -15, -40.25f },
	{ -7.5f, 12, -40.25f },
	{ -7.5f, 15, -40.25f },
	{ 2.5f, 12, -85.25f },
	{ -7.5f, 12, -85.25f },
	{ 67.49998f, 12, -85.25f },
	{ 67.49998f, 15, -85.25f },
	{ 42.49997f, 15, -85.25f },
	{ 67.49998f, -10, -85.25f },
	{ 67.49998f, -15, -85.25f },
	{ 12.49997f, 15, -85.25f },
	{ 2.5f, 15, -85.25f },
	{ -7.5f, 15, -85.25f },
	{ -67.5f, -15, 34.75f },
	{ -67.5f, -10, 34.75f },
	{ -67.5f, 12, 34.75f },
	{ -67.5f, 15, 34.75f },
	{ -67.5f, -15, -40.25f },
	{ -67.5f, -10, -40.25f },
	{ -67.5f, 12, -40.25f },
	{ -67.5f, 15, -40.25f },
	{ 67.5f, -15, 40 },
	{ 67.5f, -10, 40 },
	{ 67.5f, 12, 40 },
	{ 67.5f, 15, 40 },
	{ 67.49998f, -15, -40.25f },
	{ 67.49998f, -10, -40.25f },
	{ 67.49998f, 12, -40.25f },
	{ 67.49998f, 15, -40.25f },
	{ 12.49998f, -10, -85.25f },
	{ 12.49998f, 12, -85.25f },
	{ 12.49998f, -15, -85.25f },
	{ 42.49998f, 12, -85.25f },
	{ 42.49998f, -10, -85.25f },
	{ 42.49998f, -15, -85.25f },
	{ -67.5f, -15, 80.25f },
	{ -67.5f, 12, 80.25f },
	{ -67.5f, 15, 80.25f },
	{ -67.5f, -10, 80.25f },
	{ -7.5f, -15, 92.75001f },
	{ -67.5f, -15, 92.75001f },
	{ -7.5f, -10, 92.75001f },
	{ -67.5f, -10, 92.75001f },
	{ -7.5f, 12, 92.75001f },
	{ -67.5f, 12, 92.75001f },
	{ -67.5f, 15, 92.75001f },
	{ -7.5f, 15, 92.75001f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0013C5C4[] = {
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0013C8F4 = { vertex_0013C294, normal_0013C5C4, LengthOfArray<Sint32>(vertex_0013C294), meshlist_0013C24C, matlist_0013BEB8, LengthOfArray<Uint16>(meshlist_0013C24C), LengthOfArray<Uint16>(matlist_0013BEB8), { 0, 0, 3.750004f }, 111.7016f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0013C91C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013C8F4, -332.5f, 54, 1685.25f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0013C950[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0013C964[] = {
	4, 3, 2, 1, 0
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0013C970[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0013C964, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0013C988[] = {
	{ -24, 0, 2.4f },
	{ -24, 11.5f, 0 },
	{ 34, 0, 2.4f },
	{ 34, 11.5f, 0 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0013C9B8[] = {
	{ 0, -0.204294f, -0.97891f },
	{ 0, -0.204294f, -0.97891f },
	{ 0, -0.204294f, -0.97891f },
	{ 0, -0.204294f, -0.97891f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0013C9E8 = { vertex_0013C988, normal_0013C9B8, LengthOfArray<Sint32>(vertex_0013C988), meshlist_0013C970, matlist_0013C950, LengthOfArray<Uint16>(meshlist_0013C970), LengthOfArray<Uint16>(matlist_0013C950), { 5, 5.75f, 1.2f }, 29.02482f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0013CA10 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013C9E8, -300, 40, 1642.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0013CA44[] = {
	{ { 0x00FFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0013CA58[] = {
	0x8000u | 11, 2, 0, 3, 1, 6, 4, 7, 5, 8, 11, 9,
	3, 10, 9, 8
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0013CA78[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0013CA58, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0013CA90[] = {
	{ 47.5f, -6.25f, -37.25f },
	{ 45.31851f, -6.25f, -22.07361f },
	{ 47.5f, -26.75f, -37.25f },
	{ 45.31851f, -18.75f, -22.07361f },
	{ 38.64215f, -0.25f, -9.107909f },
	{ 27.17639f, 8.75f, 2.068481f },
	{ 38.64215f, -11.75f, -9.107909f },
	{ 27.17639f, -3.25f, 2.068481f },
	{ 12, 4.75f, 9.710034f },
	{ -5, 26.75f, 12.25f },
	{ -5, 12.25f, 12.21003f },
	{ 12, 17.75f, 9.75f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0013CB20[] = {
	{ -0.989826f, 0, -0.14228f },
	{ -0.946786f, 0, -0.321862f },
	{ -0.989827f, 0, -0.14228f },
	{ -0.966371f, 0, -0.257153f },
	{ -0.776428f, 0, -0.630206f },
	{ -0.540326f, 0, -0.841456f },
	{ -0.832169f, 0, -0.554522f },
	{ -0.616877f, 0, -0.7870589f },
	{ -0.342733f, 0.001064f, -0.939432f },
	{ -0.144003f, 0.002876f, -0.9895729f },
	{ -0.144003f, 0.002876f, -0.9895729f },
	{ -0.252838f, 0.001906f, -0.9675069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0013CBB0 = { vertex_0013CA90, normal_0013CB20, LengthOfArray<Sint32>(vertex_0013CA90), meshlist_0013CA78, matlist_0013CA44, LengthOfArray<Uint16>(meshlist_0013CA78), LengthOfArray<Uint16>(matlist_0013CA44), { 21.25f, 0, -12.5f }, 36.44345f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0013CBD8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013CBB0, -335, 26.75f, 1750.75f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0013CC0C[] = {
	{ { 0x00FFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0013CC20[] = {
	0x8000u | 10, 0, 2, 1, 3, 4, 6, 5, 7, 13, 8,
	6, 12, 8, 11, 13, 9, 10
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0013CC44[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0013CC20, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0013CC5C[] = {
	{ 43, -6.25f, -12.25f },
	{ 42.31851f, -6.25f, -7.573608f },
	{ 43, -26.75f, -12.25f },
	{ 42.31851f, -26.75f, -7.573608f },
	{ 38.14215f, 6.25f, 4.39209f },
	{ 30.17639f, 16.75f, 10.06848f },
	{ 38.14215f, -13.75f, 4.39209f },
	{ 30.17639f, -2.75f, 10.06848f },
	{ 21, 6.25f, 12.21003f },
	{ -33, 13.25f, 12.25f },
	{ -33, 24.75f, 12.25f },
	{ 16, 13.25f, 12.25f },
	{ 16, 6.25f, 12.21003f },
	{ 21, 24.75f, 12.25f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0013CD04[] = {
	{ 0.989548f, 0, 0.144206f },
	{ 0.966572f, 0, 0.256395f },
	{ 0.989548f, 0, 0.144206f },
	{ 0.9785219f, 0, 0.206142f },
	{ 0.695159f, 0, 0.718857f },
	{ 0.32081f, 0, 0.947143f },
	{ 0.8885559f, 0, 0.458768f },
	{ 0.499301f, 0, 0.866428f },
	{ 0.138706f, -0.001744f, 0.9903319f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.002226f, -0.001719f, 0.9999959f },
	{ 0, -0.005709f, 0.999984f },
	{ 0.08287299f, -0.000366f, 0.99656f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0013CDAC = { vertex_0013CC5C, normal_0013CD04, LengthOfArray<Sint32>(vertex_0013CC5C), meshlist_0013CC44, matlist_0013CC0C, LengthOfArray<Uint16>(meshlist_0013CC44), LengthOfArray<Uint16>(matlist_0013CC0C), { 5, -1, 0 }, 39.92571f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0013CDD4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013CDAC, -356, 26.75f, 1725.25f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0013CE08[] = {
	{ { 0x00FFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0013CE1C[] = {
	8, 0, 1, 2, 3, 4, 5, 6, 7
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0013CE30[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0013CE1C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0013CE48[] = {
	{ -148.5005f, -10, -34 },
	{ -143.5f, -10, 51 },
	{ -43.50018f, -10, -34.01464f },
	{ -33.5f, -10, 51 },
	{ 56.52508f, -10, -34.02514f },
	{ 76.5f, -10, 51 },
	{ 69.00945f, -10, -46.50952f },
	{ 121.5506f, -10, 6.049805f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0013CEA8[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0013CF08 = { vertex_0013CE48, normal_0013CEA8, LengthOfArray<Sint32>(vertex_0013CE48), meshlist_0013CE30, matlist_0013CE08, LengthOfArray<Uint16>(meshlist_0013CE30), LengthOfArray<Uint16>(matlist_0013CE08), { -13.47493f, -10, 2.245239f }, 143.5581f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0013CF30 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013CF08, -616.5f, 0, 2119, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0013CF64[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0013CFB4[] = {
	3, 11, 8, 7,
	4, 2, 1, 5, 12,
	4, 0, 3, 13, 4,
	6, 9, 10, 15, 11, 14, 7,
	3, 15, 6, 9,
	4, 12, 13, 5, 4
};

extern "C" __declspec(dllexport) Sint16 poly_0013CFF0[] = {
	4, 9, 8, 10, 11,
	4, 3, 2, 4, 5
};

extern "C" __declspec(dllexport) Sint16 poly_0013D004[] = {
	4, 7, 0, 14, 13,
	4, 1, 6, 12, 15
};

extern "C" __declspec(dllexport) Sint16 poly_0013D018[] = {
	4, 13, 12, 14, 15
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013D024[] = {
	{ 521, 255 },
	{ 765, 255 },
	{ 765, -255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 280, -255 },
	{ 243, 255 },
	{ 765, 255 },
	{ 765, -255 },
	{ 521, 255 },
	{ 484, -255 },
	{ 0, 255 },
	{ 243, 255 },
	{ 280, -255 },
	{ 521, 255 },
	{ 484, -255 },
	{ 765, -255 },
	{ 280, -255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 484, -255 },
	{ 280, -255 },
	{ 521, 255 },
	{ 243, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013D084[] = {
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 0, 255 },
	{ 0 },
	{ 254, 255 },
	{ 254, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013D0A4[] = {
	{ 46, 254 },
	{ 1227, 254 },
	{ 46, 0 },
	{ 1227, 0 },
	{ 1227, 254 },
	{ 46, 254 },
	{ 1227, 0 },
	{ 46, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013D0C4[] = {
	{ 0, 255 },
	{ 0 },
	{ 1274, 255 },
	{ 1274, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0013D0D4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_0013CFB4, NULL, NULL, NULL, uv_0013D024, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0013CFF0, NULL, NULL, NULL, uv_0013D084, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0013D004, NULL, NULL, NULL, uv_0013D0A4, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_0013D018, NULL, NULL, NULL, uv_0013D0C4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0013D134[] = {
	{ -0.050415f, 25, -22.75f },
	{ -0.050415f, 29, -22.75f },
	{ -0.050415f, 29, -24.75f },
	{ -0.050415f, 25, -24.75f },
	{ 3.449584f, 25, -24.75f },
	{ 3.449584f, 29, -24.75f },
	{ -0.050415f, 29, 28.25f },
	{ -0.050415f, 25, 28.25f },
	{ -0.050415f, 25, 30.25f },
	{ -0.050415f, 29, 30.25f },
	{ 3.449586f, 29, 30.25f },
	{ 3.449586f, 25, 30.25f },
	{ 5.449585f, 29, -22.75f },
	{ 5.449585f, 25, -22.75f },
	{ 5.449585f, 25, 28.25f },
	{ 5.449585f, 29, 28.25f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0013D1F4[] = {
	{ 0, -1, 0 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, -0.7071069f, -0.7071069f },
	{ 0.297109f, -0.630262f, -0.717284f },
	{ 0.297109f, 0.630262f, -0.717284f },
	{ 0, 1, 0 },
	{ 0, -1, 0 },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0.297109f, 0.630262f, 0.717284f },
	{ 0.297109f, -0.630262f, 0.717284f },
	{ 0.717284f, 0.630262f, -0.297109f },
	{ 0.717284f, -0.630262f, -0.297109f },
	{ 0.717284f, -0.630262f, 0.297109f },
	{ 0.717284f, 0.630262f, 0.297109f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0013D2B4 = { vertex_0013D134, normal_0013D1F4, LengthOfArray<Sint32>(vertex_0013D134), meshlist_0013D0D4, matlist_0013CF64, LengthOfArray<Uint16>(meshlist_0013D0D4), LengthOfArray<Uint16>(matlist_0013CF64), { 2.699585f, 27, 2.75f }, 27.63716f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0013D2DC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013D2B4, -295, 0, 1645, 0, 0xFFFFC001, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0013D310[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0013D3C4[] = {
	10, 8, 0, 10, 9, 7, 6, 4, 5, 3, 2,
	10, 11, 19, 20, 21, 17, 18, 16, 15, 13, 14
};

extern "C" __declspec(dllexport) Sint16 poly_0013D3F0[] = {
	0x8000u | 6, 3, 4, 1, 7, 8, 10,
	0x8000u | 6, 15, 14, 18, 12, 21, 19,
	0x8000u | 8, 24, 27, 23, 34, 28, 37, 31, 32,
	0x8000u | 8, 30, 33, 29, 36, 22, 35, 25, 26
};

extern "C" __declspec(dllexport) Sint16 poly_0013D430[] = {
	12, 25, 24, 26, 27, 35, 34, 36, 37, 33, 32, 30, 31
};

extern "C" __declspec(dllexport) Sint16 poly_0013D44A[] = {
	0x8000u | 10, 54, 57, 59, 62, 41, 46, 40, 47, 49, 52
};

extern "C" __declspec(dllexport) Sint16 poly_0013D460[] = {
	0x8000u | 10, 49, 48, 40, 38, 41, 39, 59, 58, 54, 53,
	0x8000u | 10, 51, 50, 44, 43, 45, 42, 61, 60, 56, 55,
	0x8000u | 10, 76, 75, 69, 68, 70, 67, 86, 85, 81, 80
};

extern "C" __declspec(dllexport) Sint16 poly_0013D4A2[] = {
	0x8000u | 10, 50, 52, 43, 47, 42, 46, 60, 62, 55, 57
};

extern "C" __declspec(dllexport) Sint16 poly_0013D4B8[] = {
	0x8000u | 10, 77, 74, 72, 65, 71, 66, 87, 84, 82, 79
};

extern "C" __declspec(dllexport) Sint16 poly_0013D4CE[] = {
	0x8000u | 10, 74, 73, 65, 63, 66, 64, 84, 83, 79, 78
};

extern "C" __declspec(dllexport) Sint16 poly_0013D4E4[] = {
	0x8000u | 10, 75, 77, 68, 72, 67, 71, 85, 87, 80, 82
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013D4FC[] = {
	{ 1275, 0 },
	{ 1275, 255 },
	{ 801, 0 },
	{ 801, 255 },
	{ 544, 0 },
	{ 544, 255 },
	{ 300, 0 },
	{ 300, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0 },
	{ 472, 255 },
	{ 472, 0 },
	{ 729, 255 },
	{ 729, 0 },
	{ 973, 255 },
	{ 973, 0 },
	{ 1275, 255 },
	{ 1275, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013D54C[] = {
	{ 2550, 255 },
	{ 2550, 92 },
	{ 2476, 255 },
	{ 2476, 0 },
	{ 2367, 254 },
	{ 2367, 0 },
	{ 0, 92 },
	{ 0, 254 },
	{ 72, 0 },
	{ 72, 254 },
	{ 182, 0 },
	{ 182, 254 },
	{ 2550, 255 },
	{ 2550, 92 },
	{ 2476, 255 },
	{ 2476, 0 },
	{ 72, 254 },
	{ 72, 0 },
	{ 0, 254 },
	{ 0, 92 },
	{ 0, 254 },
	{ 0, 92 },
	{ 72, 254 },
	{ 72, 0 },
	{ 2476, 255 },
	{ 2476, 0 },
	{ 2550, 255 },
	{ 2550, 92 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013D5BC[] = {
	{ 0, 255 },
	{ 0 },
	{ 226, 255 },
	{ 226, 0 },
	{ 410, 255 },
	{ 410, 0 },
	{ 4688, 255 },
	{ 4688, 0 },
	{ 4873, 255 },
	{ 4873, 0 },
	{ 5100, 255 },
	{ 5100, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013D5EC[] = {
	{ 1020, 0 },
	{ 1020, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 508, 0 },
	{ 508, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013D614[] = {
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 508, 0 },
	{ 508, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 508, 0 },
	{ 508, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013D68C[] = {
	{ 1020, -1785 },
	{ 1020, 255 },
	{ 765, -1785 },
	{ 765, 255 },
	{ 510, -1785 },
	{ 510, 255 },
	{ 254, -1785 },
	{ 254, 255 },
	{ 0, -1785 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013D6B4[] = {
	{ 0, 255 },
	{ 0 },
	{ 254, 255 },
	{ 254, 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 765, 255 },
	{ 765, 0 },
	{ 1020, 255 },
	{ 1020, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013D6DC[] = {
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 1020, 0 },
	{ 1020, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013D704[] = {
	{ 1020, -1785 },
	{ 1020, 255 },
	{ 765, -1785 },
	{ 765, 255 },
	{ 508, -1785 },
	{ 508, 255 },
	{ 254, -1785 },
	{ 254, 255 },
	{ 0, -1785 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0013D72C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0013D3C4, NULL, NULL, NULL, uv_0013D4FC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_0013D3F0, NULL, NULL, NULL, uv_0013D54C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0013D430, NULL, NULL, NULL, uv_0013D5BC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_0013D44A, NULL, NULL, NULL, uv_0013D5EC, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 3, poly_0013D460, NULL, NULL, NULL, uv_0013D614, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_0013D4A2, NULL, NULL, NULL, uv_0013D68C, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 1, poly_0013D4B8, NULL, NULL, NULL, uv_0013D6B4, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 1, poly_0013D4CE, NULL, NULL, NULL, uv_0013D6DC, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 1, poly_0013D4E4, NULL, NULL, NULL, uv_0013D704, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0013D804[] = {
	{ -2.750003f, -14.5f, -29.80038f },
	{ -2.750003f, -12, -32.80038f },
	{ -2.750003f, -14.5f, -34.80038f },
	{ -2.750003f, -12, -34.80038f },
	{ 0.75f, -12, -34.80038f },
	{ 0.75f, -14.5f, -34.80038f },
	{ 2.749997f, -14.5f, -32.80038f },
	{ 2.749997f, -12, -32.80038f },
	{ -2.750003f, -12, -29.80038f },
	{ 2.749997f, -14.5f, -29.80038f },
	{ 2.749997f, -12, -29.80038f },
	{ -2.750003f, -14.5f, 30.19962f },
	{ -2.750003f, -12, 33.19962f },
	{ -2.750003f, -14.5f, 35.19962f },
	{ -2.750003f, -12, 35.19962f },
	{ 0.749998f, -12, 35.19962f },
	{ 0.749998f, -14.5f, 35.19962f },
	{ 2.749997f, -14.5f, 33.19962f },
	{ 2.749997f, -12, 33.19962f },
	{ -2.750003f, -12, 30.19962f },
	{ 2.749997f, -14.5f, 30.19962f },
	{ 2.749997f, -12, 30.19962f },
	{ -2.750003f, 10.5f, -32.80038f },
	{ -2.750003f, 14.5f, -32.80038f },
	{ -2.750003f, 14.5f, -34.80038f },
	{ -2.750003f, 10.5f, -34.80038f },
	{ 0.75f, 10.5f, -34.80038f },
	{ 0.75f, 14.5f, -34.80038f },
	{ -2.750003f, 14.5f, 33.19962f },
	{ -2.750003f, 10.5f, 33.19962f },
	{ -2.750003f, 10.5f, 35.19962f },
	{ -2.750003f, 14.5f, 35.19962f },
	{ 0.749998f, 14.5f, 35.19962f },
	{ 0.749998f, 10.5f, 35.19962f },
	{ 2.749997f, 14.5f, -32.80038f },
	{ 2.749997f, 10.5f, -32.80038f },
	{ 2.749997f, 10.5f, 33.19962f },
	{ 2.749997f, 14.5f, 33.19962f },
	{ -0.750002f, -12, 30.56754f },
	{ 0.249998f, -12, 32.29959f },
	{ -0.750002f, -10, 30.56754f },
	{ 0.249998f, -10, 32.29959f },
	{ 0.249998f, 8, 32.29959f },
	{ -0.750002f, 8, 30.56754f },
	{ -0.750002f, 10.5f, 30.56754f },
	{ 0.249998f, 10.5f, 32.29959f },
	{ 0.249998f, -9, 32.29959f },
	{ -0.750002f, -9, 30.56754f },
	{ -2.750003f, -12, 30.56754f },
	{ -2.750003f, -10, 30.56754f },
	{ -2.750003f, 8, 30.56754f },
	{ -2.750003f, 10.5f, 30.56754f },
	{ -2.750003f, -9, 30.56754f },
	{ -2.750003f, -12, 34.03165f },
	{ -2.750003f, -10, 34.03165f },
	{ -2.750003f, 8, 34.03165f },
	{ -2.750003f, 10.5f, 34.03165f },
	{ -2.750003f, -9, 34.03165f },
	{ -0.750002f, -12, 34.03165f },
	{ -0.750002f, -10, 34.03165f },
	{ -0.750002f, 8, 34.03165f },
	{ -0.750002f, 10.5f, 34.03165f },
	{ -0.750002f, -9, 34.03165f },
	{ -0.75f, -12, -33.43246f },
	{ 0.249999f, -12, -31.7004f },
	{ -0.75f, -10, -33.43246f },
	{ 0.249999f, -10, -31.7004f },
	{ 0.249999f, 8, -31.7004f },
	{ -0.75f, 8, -33.43246f },
	{ -0.75f, 10.5f, -33.43246f },
	{ 0.249999f, 10.5f, -31.7004f },
	{ 0.249999f, -9, -31.7004f },
	{ -0.75f, -9, -33.43246f },
	{ -2.750003f, -12, -33.43246f },
	{ -2.750003f, -10, -33.43246f },
	{ -2.750003f, 8, -33.43246f },
	{ -2.750003f, 10.5f, -33.43246f },
	{ -2.750003f, -9, -33.43246f },
	{ -2.750003f, -12, -29.96835f },
	{ -2.750003f, -10, -29.96835f },
	{ -2.750003f, 8, -29.96835f },
	{ -2.750003f, 10.5f, -29.96835f },
	{ -2.750003f, -9, -29.96835f },
	{ -0.75f, -12, -29.96835f },
	{ -0.75f, -10, -29.96835f },
	{ -0.75f, 8, -29.96835f },
	{ -0.75f, 10.5f, -29.96835f },
	{ -0.75f, -9, -29.96835f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0013DC24[] = {
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0.297109f, 0.630262f, -0.717283f },
	{ 0.382684f, 0, -0.923879f },
	{ 0.92388f, 0, -0.382683f },
	{ 0.717284f, 0.630263f, -0.297108f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0, 0, -1 },
	{ 0, 1, 0 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0.297109f, 0.630262f, 0.717284f },
	{ 0.382683f, 0, 0.92388f },
	{ 0.92388f, 0, 0.382683f },
	{ 0.717284f, 0.630262f, 0.297109f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0, -1, 0 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, -0.7071069f, -0.7071069f },
	{ 0.297109f, -0.630262f, -0.717283f },
	{ 0.297109f, 0.630262f, -0.717283f },
	{ 0, 1, 0 },
	{ 0, -1, 0 },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0.297109f, 0.630262f, 0.717284f },
	{ 0.297109f, -0.630262f, 0.717284f },
	{ 0.717284f, 0.630263f, -0.297108f },
	{ 0.717284f, -0.630263f, -0.297108f },
	{ 0.717284f, -0.630262f, 0.297109f },
	{ 0.717284f, 0.630262f, 0.297109f },
	{ 0.5f, 0, -0.866025f },
	{ 1, 0, 0 },
	{ 0.5f, 0, -0.866025f },
	{ 1, 0, 0 },
	{ 1, 0, -0.00001f },
	{ 0.5f, 0, -0.866025f },
	{ 0.5f, 0, -0.866025f },
	{ 1, 0, 0 },
	{ 1, 0, -0.00001f },
	{ 0.5f, 0, -0.866025f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.500001f, 0, 0.866025f },
	{ 0.500001f, 0, 0.866025f },
	{ 0.5f, 0, 0.866025f },
	{ 0.500001f, 0, 0.866025f },
	{ 0.500001f, 0, 0.866025f },
	{ 0.500001f, 0, -0.866025f },
	{ 1, 0, 0 },
	{ 0.500001f, 0, -0.866025f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.500001f, 0, -0.866025f },
	{ 0.500001f, 0, -0.866025f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.500001f, 0, -0.866025f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.500001f, 0, 0.866025f },
	{ 0.500001f, 0, 0.866025f },
	{ 0.500001f, 0, 0.866025f },
	{ 0.500001f, 0, 0.866025f },
	{ 0.500001f, 0, 0.866025f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0013E044 = { vertex_0013D804, normal_0013DC24, LengthOfArray<Sint32>(vertex_0013D804), meshlist_0013D72C, matlist_0013D310, LengthOfArray<Uint16>(meshlist_0013D72C), LengthOfArray<Uint16>(matlist_0013D310), { -0.00003f, 0, 0.199619f }, 35.10786f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0013E06C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013E044, -380.2496f, 14.5f, 1762.7f, 0, 0x14000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0013E0A0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0013E0B4[] = {
	4, 2, 3, 1, 0
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013E0C0[] = {
	{ 0, 255 },
	{ 0, -1020 },
	{ 2040, 255 },
	{ 2039, -1019 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0013E0D0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0013E0B4, NULL, NULL, NULL, uv_0013E0C0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0013E0E8[] = {
	{ 155, 25, -135 },
	{ 155, 25, -180 },
	{ 80, 25, -180 },
	{ 80, 25, -135 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0013E118[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0013E148 = { vertex_0013E0E8, normal_0013E118, LengthOfArray<Sint32>(vertex_0013E0E8), meshlist_0013E0D0, matlist_0013E0A0, LengthOfArray<Uint16>(meshlist_0013E0D0), LengthOfArray<Uint16>(matlist_0013E0A0), { 117.5f, 25, -157.5f }, 43.73214f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0013E170 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013E148, -420, 14, 1780, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0013E1A4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 16, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 14, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0013E1E0[] = {
	3, 2, 7, 6,
	3, 8, 9, 5,
	3, 12, 3, 5,
	0x8000u | 7, 8, 6, 5, 2, 3, 1, 15,
	5, 15, 3, 16, 4, 0
};

extern "C" __declspec(dllexport) Sint16 poly_0013E214[] = {
	4, 11, 8, 10, 6,
	4, 13, 12, 14, 5
};

extern "C" __declspec(dllexport) Sint16 poly_0013E228[] = {
	4, 16, 17, 15, 18
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013E234[] = {
	{ 2900, -1442 },
	{ 3314, -1442 },
	{ 3314, -1230 },
	{ 3314, 38 },
	{ 3314, 254 },
	{ 1761, 254 },
	{ 517, 254 },
	{ 517, -1331 },
	{ 1761, 254 },
	{ 3314, 38 },
	{ 3314, -1230 },
	{ 1761, 254 },
	{ 2900, -1442 },
	{ 517, -1331 },
	{ 2900, -2295 },
	{ 1553, -2295 },
	{ 1553, -2295 },
	{ 517, -1331 },
	{ 310, -2295 },
	{ 0, -1331 },
	{ 0, -2295 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013E288[] = {
	{ 765, 254 },
	{ 0, 254 },
	{ 765, -1529 },
	{ 0, -1529 },
	{ 0, 254 },
	{ 0, -1019 },
	{ 1785, 254 },
	{ 1785, -1019 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013E2A8[] = {
	{ 0, -1019 },
	{ 1274, -1019 },
	{ 0, 255 },
	{ 1275, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0013E2B8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0013E1E0, NULL, NULL, NULL, uv_0013E234, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0013E214, NULL, NULL, NULL, uv_0013E288, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0013E228, NULL, NULL, NULL, uv_0013E2A8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0013E300[] = {
	{ -4.999989f, -15, 35.50002f },
	{ 135, -15, 35.49997f },
	{ 135, -15, -4.750027f },
	{ 19.99999f, -15, -10.00003f },
	{ -4.999996f, -15, -10.00003f },
	{ 80, -15, -85.00001f },
	{ 155, -15, -14.75001f },
	{ 155, -15, -4.750028f },
	{ 155, -15, -74.75001f },
	{ 155, -15, -85.00005f },
	{ 180, -15, -14.75001f },
	{ 180, -15, -74.75001f },
	{ 20, -15, -85 },
	{ 20, -15, -130 },
	{ 80, -15, -130 },
	{ 70, -15, 35.5f },
	{ 10, -15, 35.5f },
	{ 10.0003f, -15, 100.4996f },
	{ 70, -15, 100.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0013E3E4[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0013E4C8 = { vertex_0013E300, normal_0013E3E4, LengthOfArray<Sint32>(vertex_0013E300), meshlist_0013E2B8, matlist_0013E1A4, LengthOfArray<Uint16>(meshlist_0013E2B8), LengthOfArray<Uint16>(matlist_0013E1A4), { 87.5f, -15, -14.75f }, 147.7796f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0013E4F0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013E4C8, -420, 15, 1730, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0013E524[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 22, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 21, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0013E560[] = {
	4, 1, 0, 5, 4
};

extern "C" __declspec(dllexport) Sint16 poly_0013E56A[] = {
	4, 3, 2, 7, 6
};

extern "C" __declspec(dllexport) Sint16 poly_0013E574[] = {
	4, 0, 3, 4, 7
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013E580[] = {
	{ 122, 255 },
	{ 122, 0 },
	{ 98, 255 },
	{ 98, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013E590[] = {
	{ 1012, -6119 },
	{ 0, -6119 },
	{ 1012, -11219 },
	{ 0, -11219 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013E5A0[] = {
	{ 5475, 255 },
	{ 5501, 0 },
	{ 11863, 255 },
	{ 11874, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0013E5B0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0013E560, NULL, NULL, NULL, uv_0013E580, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0013E56A, NULL, NULL, NULL, uv_0013E590, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0013E574, NULL, NULL, NULL, uv_0013E5A0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0013E5F8[] = {
	{ -69.99998f, 1.25f, 264.1536f },
	{ -69.99998f, -1.25f, 264.1535f },
	{ -69.99989f, 1.25f, 299.1933f },
	{ -69.99998f, 1.25f, 269.1635f },
	{ 70.00001f, 1.25f, 264.1536f },
	{ 70.00001f, -1.25f, 264.1535f },
	{ 70.00001f, 1.25f, 299.1933f },
	{ 70.00001f, 1.25f, 269.1635f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0013E658[] = {
	{ 0, 0.7071109f, -0.7071019f },
	{ 0, 0.000012f, -1 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0.7071109f, -0.7071019f },
	{ 0, 0.000012f, -1 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0013E6B8 = { vertex_0013E5F8, normal_0013E658, LengthOfArray<Sint32>(vertex_0013E5F8), meshlist_0013E5B0, matlist_0013E524, LengthOfArray<Uint16>(meshlist_0013E5B0), LengthOfArray<Uint16>(matlist_0013E524), { 0.000015f, 0, 281.6735f }, 72.15918f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0013E6E0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013E6B8, -370.3737f, -1.25f, 1300.807f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0013E714[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 22, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 21, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0013E750[] = {
	4, 1, 0, 5, 4
};

extern "C" __declspec(dllexport) Sint16 poly_0013E75A[] = {
	4, 3, 2, 7, 6
};

extern "C" __declspec(dllexport) Sint16 poly_0013E764[] = {
	4, 0, 3, 4, 7
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013E770[] = {
	{ 122, 255 },
	{ 122, 0 },
	{ 98, 255 },
	{ 98, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013E780[] = {
	{ 1012, -6119 },
	{ 0, -6119 },
	{ 1012, -11219 },
	{ 0, -11219 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013E790[] = {
	{ 5475, 255 },
	{ 5501, 0 },
	{ 11863, 255 },
	{ 11874, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0013E7A0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0013E750, NULL, NULL, NULL, uv_0013E770, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0013E75A, NULL, NULL, NULL, uv_0013E780, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0013E764, NULL, NULL, NULL, uv_0013E790, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0013E7E8[] = {
	{ -264.1536f, 1.25f, -70 },
	{ -264.1535f, -1.25f, -70 },
	{ -299.2161f, 1.25f, -70 },
	{ -269.1635f, 1.25f, -70 },
	{ -264.1536f, 1.25f, 70 },
	{ -264.1535f, -1.25f, 70 },
	{ -299.2161f, 1.25f, 70 },
	{ -269.1635f, 1.25f, 70 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0013E848[] = {
	{ 0.7071019f, 0.7071109f, 0 },
	{ 1, 0.000012f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.7071019f, 0.7071109f, 0 },
	{ 1, 0.000012f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0013E8A8 = { vertex_0013E7E8, normal_0013E848, LengthOfArray<Sint32>(vertex_0013E7E8), meshlist_0013E7A0, matlist_0013E714, LengthOfArray<Uint16>(meshlist_0013E7A0), LengthOfArray<Uint16>(matlist_0013E714), { -281.6848f, 0, 0 }, 72.16193f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0013E8D0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013E8A8, 59.21606f, -1.25f, 1676.262f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0013E904[] = {
	{ { 0x00FFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0013E918[] = {
	4, 3, 1, 2, 0
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0013E924[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0013E918, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0013E93C[] = {
	{ -8.949685f, -10, 51.54985f },
	{ -61.49084f, -10, -1.009521f },
	{ 11.04474f, -0.00008f, 31.55542f },
	{ -41.5003f, 0, -21 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0013E96C[] = {
	{ -0.235804f, 0.9427699f, 0.235758f },
	{ -0.235804f, 0.9427699f, 0.235758f },
	{ -0.235804f, 0.9427699f, 0.235758f },
	{ -0.235804f, 0.9427699f, 0.235758f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0013E99C = { vertex_0013E93C, normal_0013E96C, LengthOfArray<Sint32>(vertex_0013E93C), meshlist_0013E924, matlist_0013E904, LengthOfArray<Uint16>(meshlist_0013E924), LengthOfArray<Uint16>(matlist_0013E904), { -25.22305f, -5, 15.27492f }, 51.29543f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0013E9C4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013E99C, -485.9997f, 0, 2073.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0013E9F8[] = {
	{ { 0x00FFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0013EA0C[] = {
	0x8000u | 8, 0, 7, 8, 4, 6, 5, 3, 2,
	3, 0, 1, 8
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0013EA28[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0013EA0C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0013EA40[] = {
	{ 10.5f, 0.000002f, 49.80001f },
	{ 10.58865f, 0, 20.16685f },
	{ -49.80005f, 39, -5.00001f },
	{ -20.84998f, 39, -5.00001f },
	{ -19.05762f, 12, 46.00917f },
	{ -39.50903f, 24, 30.31627f },
	{ -16.67979f, 24, 12.79873f },
	{ 2.098999f, 3.000003f, 49.8922f },
	{ -8.045762f, 12, 19.42388f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0013EAAC[] = {
	{ 0.485129f, 0.874441f, 0.001451f },
	{ 0.485129f, 0.874441f, 0.001451f },
	{ 0, 0.8707139f, 0.49179f },
	{ 0, 0.8707139f, 0.49179f },
	{ 0.35696f, 0.884933f, 0.29912f },
	{ 0.180534f, 0.861444f, 0.474682f },
	{ 0.166291f, 0.863233f, 0.476629f },
	{ 0.445554f, 0.89371f, 0.052585f },
	{ 0.399696f, 0.8813649f, 0.25187f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0013EB18 = { vertex_0013EA40, normal_0013EAAC, LengthOfArray<Sint32>(vertex_0013EA40), meshlist_0013EA28, matlist_0013E9F8, LengthOfArray<Uint16>(meshlist_0013EA28), LengthOfArray<Uint16>(matlist_0013E9F8), { -19.6057f, 19.5f, 22.44609f }, 40.80425f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0013EB40 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013EB18, -335, 0, 1715, 0, 0xFFFF4000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0013EB74[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 24, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 24, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0013EBEC[] = {
	0x8000u | 22, 12, 13, 82, 83, 91, 15, 81, 25, 93, 27, 6, 9, 7, 8, 67, 23, 28, 21, 0, 3, 1, 2,
	0x8000u | 18, 79, 66, 55, 58, 56, 57, 71, 65, 72, 73, 77, 76, 95, 53, 45, 43, 46, 44
};

extern "C" __declspec(dllexport) Sint16 poly_0013EC40[] = {
	4, 18, 70, 17, 81,
	0x8000u | 6, 92, 87, 82, 84, 12, 14,
	0x8000u | 14, 31, 30, 10, 6, 11, 7, 68, 67, 29, 28, 4, 0, 5, 1,
	4, 70, 90, 81, 94,
	0x8000u | 6, 88, 52, 32, 45, 47, 46,
	0x8000u | 14, 96, 89, 77, 78, 72, 75, 71, 74, 56, 60, 55, 59, 79, 80
};

extern "C" __declspec(dllexport) Sint16 poly_0013ECAC[] = {
	8, 85, 83, 16, 15, 26, 25, 9, 27,
	8, 8, 23, 22, 21, 24, 3, 48, 2,
	4, 9, 8, 26, 22,
	4, 13, 83, 34, 85,
	0x8000u | 9, 39, 38, 44, 35, 54, 64, 66, 57, 58,
	4, 57, 65, 64, 63,
	9, 65, 73, 63, 76, 42, 53, 39, 43, 44
};

extern "C" __declspec(dllexport) Sint16 poly_0013ED16[] = {
	3, 19, 20, 86,
	6, 50, 51, 33, 49, 86, 19,
	6, 40, 37, 41, 36, 62, 61
};

extern "C" __declspec(dllexport) Sint16 poly_0013ED3A[] = {
	3, 86, 85, 33,
	10, 85, 16, 33, 26, 50, 22, 51, 24, 49, 19,
	10, 38, 35, 36, 64, 61, 63, 62, 42, 41, 40,
	6, 42, 39, 40, 38, 37, 36,
	3, 48, 19, 24,
	4, 86, 20, 85, 34
};

extern "C" __declspec(dllexport) Sint16 poly_0013ED8E[] = {
	4, 90, 70, 69, 18
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013ED98[] = {
	{ 0, 255 },
	{ 0 },
	{ 209, 255 },
	{ 209, 0 },
	{ 864, 255 },
	{ 864, 0 },
	{ 1976, 255 },
	{ 1976, 0 },
	{ 2045, 255 },
	{ 2045, 0 },
	{ 2118, 255 },
	{ 2118, 0 },
	{ 2210, 255 },
	{ 2210, 0 },
	{ 2279, 255 },
	{ 2279, 0 },
	{ 2351, 255 },
	{ 2351, 0 },
	{ 3554, 255 },
	{ 3554, 0 },
	{ 4080, 255 },
	{ 4080, 0 },
	{ 0, 255 },
	{ 0 },
	{ 145, 255 },
	{ 145, 0 },
	{ 288, 255 },
	{ 288, 0 },
	{ 478, 255 },
	{ 478, 0 },
	{ 622, 255 },
	{ 622, 0 },
	{ 767, 255 },
	{ 767, 0 },
	{ 1715, 255 },
	{ 1715, 0 },
	{ 2521, 255 },
	{ 2521, 0 },
	{ 3060, 255 },
	{ 3060, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013EE38[] = {
	{ 924, 69 },
	{ 1944, 253 },
	{ 864, 0 },
	{ 1976, 0 },
	{ 864, 0 },
	{ 924, 69 },
	{ 209, 0 },
	{ 286, 69 },
	{ 0 },
	{ 31, 69 },
	{ 2051, 255 },
	{ 2045, 0 },
	{ 2120, 255 },
	{ 2118, 0 },
	{ 2214, 255 },
	{ 2210, 0 },
	{ 2283, 255 },
	{ 2279, 0 },
	{ 2354, 255 },
	{ 2351, 0 },
	{ 3555, 255 },
	{ 3554, 0 },
	{ 4080, 255 },
	{ 4080, 0 },
	{ 1981, 255 },
	{ 2051, 255 },
	{ 1976, 0 },
	{ 2045, 0 },
	{ 1163, 69 },
	{ 1144, 0 },
	{ 1673, 69 },
	{ 1681, 0 },
	{ 2024, 69 },
	{ 2040, 0 },
	{ 1144, 0 },
	{ 1163, 69 },
	{ 510, 0 },
	{ 504, 255 },
	{ 414, 0 },
	{ 410, 255 },
	{ 318, 0 },
	{ 314, 255 },
	{ 192, 0 },
	{ 190, 255 },
	{ 97, 0 },
	{ 95, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013EEF8[] = {
	{ 1824, -2 },
	{ 1770, -2 },
	{ 1824, -580 },
	{ 1770, -548 },
	{ 992, -1577 },
	{ 965, -1513 },
	{ 965, -1673 },
	{ 939, -1593 },
	{ 1033, -1753 },
	{ 1099, -1785 },
	{ 1113, -1721 },
	{ 1166, -1753 },
	{ 1985, -676 },
	{ 2040, -708 },
	{ 1985, -2 },
	{ 2039, -66 },
	{ 965, -1673 },
	{ 1033, -1753 },
	{ 992, -1577 },
	{ 1113, -1721 },
	{ 1985, 255 },
	{ 1770, 255 },
	{ 1985, 190 },
	{ 1824, 190 },
	{ 508, 190 },
	{ 348, 190 },
	{ 294, 255 },
	{ 348, -98 },
	{ 294, -66 },
	{ 53, -450 },
	{ 27, -386 },
	{ 26, -546 },
	{ 0, -466 },
	{ 26, -546 },
	{ 93, -626 },
	{ 53, -450 },
	{ 174, -594 },
	{ 93, -626 },
	{ 161, -657 },
	{ 174, -594 },
	{ 227, -626 },
	{ 508, -194 },
	{ 562, -226 },
	{ 508, 190 },
	{ 562, 255 },
	{ 294, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013EFB0[] = {
	{ 3570, -104 },
	{ 3570, 254 },
	{ 3271, 254 },
	{ 1735, -3044 },
	{ 1958, -3314 },
	{ 3271, -1184 },
	{ 3570, -1363 },
	{ 3271, -104 },
	{ 3570, -104 },
	{ 841, 254 },
	{ 545, 254 },
	{ 841, -464 },
	{ 545, -284 },
	{ 222, -1211 },
	{ 0, -943 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013EFEC[] = {
	{ 3547, 255 },
	{ 3547, 0 },
	{ 2748, 255 },
	{ 3547, 0 },
	{ 2748, 0 },
	{ 2748, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 2882, 0 },
	{ 2882, 255 },
	{ 3812, 255 },
	{ 1375, 0 },
	{ 976, 0 },
	{ 976, 255 },
	{ 2, 0 },
	{ 2, 255 },
	{ 2, 0 },
	{ 2, 255 },
	{ 1108, 0 },
	{ 1108, 255 },
	{ 1641, 255 },
	{ 1108, 0 },
	{ 1641, 0 },
	{ 1641, 255 },
	{ 1375, 0 },
	{ 1375, 255 },
	{ 976, 255 },
	{ 3812, 0 },
	{ 3812, 255 },
	{ 2882, 0 },
	{ 3812, 255 },
	{ 4079, 255 },
	{ 3812, 0 },
	{ 4079, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0013F07C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0013EBEC, NULL, NULL, NULL, uv_0013ED98, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_0013EC40, NULL, NULL, NULL, uv_0013EE38, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 7, poly_0013ECAC, NULL, NULL, NULL, uv_0013EEF8, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 3, poly_0013ED16, NULL, NULL, NULL, uv_0013EFB0, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 6, poly_0013ED3A, NULL, NULL, NULL, uv_0013EFEC, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_0013ED8E, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0013F10C[] = {
	{ 75.99994f, 4, -3.5f },
	{ 75.99978f, 4, -43.49902f },
	{ 75.99978f, 10, -43.49902f },
	{ 75.99994f, 9.999995f, -3.5f },
	{ 75.99994f, -10, -3.5f },
	{ 75.99978f, -10, -43.5f },
	{ -3.999939f, 4, 56.56665f },
	{ 1.000031f, 4, 61.53344f },
	{ 1.000031f, 9.999991f, 61.53344f },
	{ -3.999939f, 9.999991f, 56.56665f },
	{ -3.999939f, -10, 56.56665f },
	{ 1.000031f, -10, 61.53344f },
	{ 71.99976f, 4, -63.49976f },
	{ 71.99982f, 10, -63.5f },
	{ 71.99982f, 0, -63.5f },
	{ 55.99982f, 10, -13.5f },
	{ 59.99982f, 10, -11.5f },
	{ 55.99982f, 4, -13.5f },
	{ 55.99982f, 0, -13.5f },
	{ 71.99982f, 8, -47.5f },
	{ 71.99982f, 8, -59.5f },
	{ 10.9751f, 9.999991f, 61.5249f },
	{ 6.99176f, 9.999991f, 59.5415f },
	{ 6, 9.999991f, 63.5f },
	{ 71.99982f, 10, -5.5f },
	{ -3.974854f, 9.999991f, 46.57495f },
	{ -1.991547f, 9.999991f, 50.55835f },
	{ -5.999939f, 9.999991f, 51.6001f },
	{ 10.9751f, 4, 61.5249f },
	{ 10.9751f, -10, 61.5249f },
	{ -5.999939f, 4, 51.6001f },
	{ -5.999939f, -10, 51.6001f },
	{ -34.00021f, 0, -63.49988f },
	{ 59.99982f, 8, -11.5f },
	{ 71.99982f, 10, -59.5f },
	{ -50.00012f, 10, -41.50012f },
	{ -50.00012f, 8, -41.50012f },
	{ -50.00018f, 8, -59.5f },
	{ -50.00018f, 10, -59.5f },
	{ -38.00018f, 10, -59.5f },
	{ -38.00018f, 8, -59.5f },
	{ -38.00012f, 8, -35.5f },
	{ -38.00012f, 10, -35.5f },
	{ -34.0002f, 10, -63.5f },
	{ -54.0002f, 10, -63.5f },
	{ -34.00021f, 4, -63.49991f },
	{ -54.0002f, 4, -63.5f },
	{ -54.0002f, 0, -63.5f },
	{ 71.99976f, 10, -47.5f },
	{ 71.99982f, 8, -5.5f },
	{ -1.991547f, 7.999992f, 50.55835f },
	{ 6.99176f, 7.999992f, 59.5415f },
	{ -34.00021f, 4, -33.5f },
	{ -34.00018f, 10, -33.5f },
	{ -54.00012f, 10, -43.5f },
	{ -76.00007f, 4, -18.5f },
	{ -74.00007f, 4, -13.53345f },
	{ -74.00005f, 9.999991f, -13.53345f },
	{ -76.00005f, 9.999991f, -18.5f },
	{ -76.00007f, -10, -18.5f },
	{ -74.00007f, -10, -13.53345f },
	{ -71.99163f, 7.999992f, -19.54175f },
	{ -63.00824f, 7.999992f, -10.55835f },
	{ -63.00824f, 9.999991f, -10.55835f },
	{ -71.99163f, 9.999991f, -19.54175f },
	{ -68.99994f, 9.999991f, -8.566649f },
	{ -73.97504f, 9.999991f, -23.52514f },
	{ 6, 4, 63.5f },
	{ 6, -10, 63.5f },
	{ -3.974854f, -10, 46.57495f },
	{ -3.999939f, -10, 46.6001f },
	{ -68.99995f, 4, -8.566649f },
	{ -63.99995f, 4, -6.599854f },
	{ -63.99994f, 9.999991f, -6.599854f },
	{ -68.99995f, -10, -8.566649f },
	{ -63.99997f, -10, -6.599854f },
	{ -59.0249f, 9.999991f, -8.57495f },
	{ -59.02489f, 4, -8.57495f },
	{ -59.02488f, -10, -8.57495f },
	{ -73.97504f, 4, -23.52514f },
	{ -73.97505f, -9.900002f, -23.52514f },
	{ -3.987396f, 4, 46.58752f },
	{ 55.99979f, 4, -63.49985f },
	{ 55.99982f, 10, -63.5f },
	{ 55.99978f, 0, -63.49976f },
	{ 59.99982f, 10, -59.5f },
	{ 59.99982f, 8, -59.5f },
	{ 55.99982f, 0, -13.5f },
	{ -34.00021f, 0, -33.5f },
	{ -34.00021f, 0, -33.5f },
	{ -5.999939f, -10, 51.6001f },
	{ 55.99982f, 4, -13.5f },
	{ 55.99982f, 4, -13.5f },
	{ -5.999939f, 4, 51.6001f },
	{ -5.999939f, 4, 51.6001f },
	{ -34.00021f, 4, -33.5f },
	{ -34.00021f, 4, -33.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0013F598[] = {
	{ 0.92388f, 0, 0.382681f },
	{ 1, 0, -0.00004f },
	{ 0.5546809f, 0.832063f, -0.00002f },
	{ 0.717285f, 0.630262f, 0.297107f },
	{ 0.92388f, 0, 0.382681f },
	{ 1, 0, -0.00004f },
	{ -0.8332829f, 0, 0.552847f },
	{ -0.546684f, 0, 0.837339f },
	{ -0.408634f, 0.664288f, 0.625891f },
	{ -0.622755f, 0.6644289f, 0.413171f },
	{ -0.8332829f, 0, 0.552847f },
	{ -0.546684f, 0, 0.837339f },
	{ -0.00001f, 0.000018f, -1 },
	{ 0.000002f, 0.707101f, -0.707113f },
	{ -0.00005f, 0.000061f, -1 },
	{ -0.549365f, 0.804077f, -0.227286f },
	{ 0.71733f, 0.630307f, 0.296901f },
	{ -0.707697f, 0, -0.706516f },
	{ -0.707697f, 0, -0.706516f },
	{ -0.447216f, 0.894426f, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0.410677f, 0.664274f, 0.624567f },
	{ -0.00057f, 0.904563f, -0.42634f },
	{ 0.001233f, 0.632988f, 0.774161f },
	{ -0.549206f, 0.804151f, -0.227406f },
	{ -0.623225f, 0.664856f, -0.411774f },
	{ 0.426533f, 0.904472f, -0.000117f },
	{ -0.775107f, 0.63183f, 0.00015f },
	{ 0.549409f, 0, 0.8355539f },
	{ 0.549409f, 0, 0.8355539f },
	{ -0.927613f, 0, 0.373544f },
	{ -0.927613f, 0, 0.373544f },
	{ 0.7071109f, -0.00008f, -0.707103f },
	{ 0.549283f, 0.804116f, 0.227347f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0.717219f, 0.6302f, 0.297397f },
	{ 0.548923f, 0.8042859f, 0.227613f },
	{ 0.577351f, 0.57735f, 0.5773489f },
	{ 0.301511f, 0.904534f, 0.30151f },
	{ -0.301511f, 0.904534f, 0.301512f },
	{ -0.5773489f, 0.57735f, 0.577351f },
	{ -0.717169f, 0.630152f, -0.297619f },
	{ -0.548763f, 0.804361f, -0.227732f },
	{ 0.577348f, 0.577351f, -0.577352f },
	{ 0.000001f, 0.707106f, -0.707108f },
	{ 0.707108f, -0.00004f, -0.707105f },
	{ 0.000004f, -0.00005f, -1 },
	{ 0.000005f, -0.0001f, -1 },
	{ -0.89446f, 0.447148f, 0 },
	{ -0.717309f, 0.63028f, -0.297011f },
	{ 0.8164769f, 0.577378f, -0.000224f },
	{ -0.000108f, 0.577337f, -0.816506f },
	{ 1, -0.00002f, 0 },
	{ 0.717111f, 0.630097f, 0.297875f },
	{ 0, 1, 0 },
	{ -1, 0.000001f, -0.000122f },
	{ -0.833279f, 0.000001f, 0.552853f },
	{ -0.622753f, 0.664428f, 0.413176f },
	{ -0.775066f, 0.63188f, -0.00095f },
	{ -0.999997f, 0.000001f, 0.002258f },
	{ -0.833279f, 0, 0.552853f },
	{ 0.816524f, 0.577311f, 0.000308f },
	{ 0.0005429999f, 0.57742f, -0.816447f },
	{ 0.000284f, 0.904378f, -0.426732f },
	{ 0.426214f, 0.904622f, 0.000161f },
	{ -0.408639f, 0.6642939f, 0.625882f },
	{ -0.461397f, 0.867492f, -0.185933f },
	{ 0.001593f, 0, 0.999999f },
	{ 0.001593f, 0, 0.999999f },
	{ -0.7021109f, -0.128332f, -0.700407f },
	{ -0.623985f, -0.664489f, -0.411214f },
	{ -0.546695f, 0.000001f, 0.837332f },
	{ 0.001574f, 0, 0.999999f },
	{ 0.001219f, 0.632984f, 0.774164f },
	{ -0.546695f, 0, 0.837332f },
	{ 0.001573f, 0, 0.999999f },
	{ 0.40996f, 0.6644689f, 0.624831f },
	{ 0.548576f, -0.00001f, 0.836101f },
	{ 0.5319239f, 0, 0.846792f },
	{ -0.927521f, 0.000001f, -0.373771f },
	{ -0.927521f, 0.000001f, -0.373771f },
	{ -0.834774f, 0.000127f, -0.550593f },
	{ -0.707108f, 0.000013f, -0.707106f },
	{ -0.577347f, 0.5773439f, -0.577359f },
	{ -0.707114f, 0.000044f, -0.707099f },
	{ 0.301511f, 0.904534f, 0.301511f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -1, 0.000001f, 0.000001f },
	{ 1, -0.00002f, 0 },
	{ 0.705695f, 0.000001f, 0.7085159f },
	{ -0.9282359f, -0.001133f, -0.371991f },
	{ -0.9240389f, -0.00001f, -0.382297f },
	{ -1, 0.000001f, 0.000001f },
	{ -1, 0, 0.000193f },
	{ -0.9282359f, 0.000498f, -0.371991f },
	{ 0.923497f, -0.00002f, 0.383605f },
	{ 0.705695f, 0.000001f, 0.7085159f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0013FA24 = { vertex_0013F10C, normal_0013F598, LengthOfArray<Sint32>(vertex_0013F10C), meshlist_0013F07C, matlist_0013EB74, LengthOfArray<Uint16>(meshlist_0013F07C), LengthOfArray<Uint16>(matlist_0013EB74), { -0.0006899999f, 0, 0 }, 99.03661f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0013FA4C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013FA24, -485.9998f, 0, 2073.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0013FA80[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0013FA94[] = {
	6, 0, 1, 4, 5, 2, 3
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013FAA4[] = {
	{ 0, -816 },
	{ 1403, -2294 },
	{ 256, -549 },
	{ 2550, -1085 },
	{ 256, 255 },
	{ 2550, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0013FABC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0013FA94, NULL, NULL, NULL, uv_0013FAA4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0013FAD4[] = {
	{ -44.09094f, -0.00008f, -23.50903f },
	{ 11.04474f, -0.00008f, 31.55542f },
	{ -34.00021f, 0, -63.49988f },
	{ 55.99978f, 0, -63.49976f },
	{ -34.00021f, 0, -33.5f },
	{ 55.99982f, 0, -13.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0013FB1C[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0013FB64 = { vertex_0013FAD4, normal_0013FB1C, LengthOfArray<Sint32>(vertex_0013FAD4), meshlist_0013FABC, matlist_0013FA80, LengthOfArray<Uint16>(meshlist_0013FABC), LengthOfArray<Uint16>(matlist_0013FA80), { 5.954437f, -0.00004f, -15.97223f }, 69.0175f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0013FB8C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013FB64, -485.9998f, 0, 2073.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0013FBC0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0013FBE8[] = {
	4, 0, 13, 14, 15,
	4, 2, 1, 12, 11,
	4, 9, 10, 7, 8,
	4, 4, 3, 6, 5
};

extern "C" __declspec(dllexport) Sint16 poly_0013FC10[] = {
	4, 12, 11, 9, 10,
	4, 7, 8, 5, 6,
	4, 0, 14, 4, 3
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013FC30[] = {
	{ 0 },
	{ 0, 255 },
	{ 2039, 0 },
	{ 2039, 255 },
	{ 2039, 0 },
	{ 0 },
	{ 2039, 255 },
	{ 0, 255 },
	{ 2039, 0 },
	{ 0 },
	{ 2039, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 2039, 255 },
	{ 0 },
	{ 2039, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013FC70[] = {
	{ 2039, -1346 },
	{ 434, 254 },
	{ 1895, -1490 },
	{ 290, 111 },
	{ 1895, -1490 },
	{ 290, 111 },
	{ 1752, -1633 },
	{ 148, -31 },
	{ 0, -178 },
	{ 1601, -1785 },
	{ 147, -32 },
	{ 1751, -1634 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0013FCA0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0013FBE8, NULL, NULL, NULL, uv_0013FC30, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, poly_0013FC10, NULL, NULL, NULL, uv_0013FC70, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0013FCD0[] = {
	{ -59.00006f, -7.500008f, -8.599854f },
	{ -44.09094f, -0.00008f, -23.50903f },
	{ 11.04474f, -0.00008f, 31.55542f },
	{ 1.128371f, -7.500008f, 41.47185f },
	{ -53.97172f, -7.500008f, -13.62825f },
	{ 1.17427f, -5.000008f, 41.42595f },
	{ -53.92582f, -5.000008f, -13.67415f },
	{ 6.07196f, -5.000008f, 36.52832f },
	{ -49.00604f, -5.000008f, -18.59399f },
	{ 6.071838f, -2.500008f, 36.52832f },
	{ -49.00579f, -2.500008f, -18.59424f },
	{ -44.09265f, -2.500008f, -23.50732f },
	{ 11.04471f, -2.500008f, 31.55542f },
	{ -59.02488f, -10, -8.57495f },
	{ -3.999939f, -7.500008f, 46.6001f },
	{ -3.999939f, -10, 46.6001f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0013FD90[] = {
	{ -0.498845f, 0.710004f, 0.497039f },
	{ -0.706639f, 0.000008999999f, 0.707575f },
	{ -0.706639f, 0.000008999999f, 0.707575f },
	{ -0.493469f, 0.7162229f, 0.493469f },
	{ -0.493469f, 0.7162229f, 0.493469f },
	{ -0.493468f, 0.716226f, 0.493468f },
	{ -0.493468f, 0.716226f, 0.493468f },
	{ -0.500143f, 0.707191f, 0.499738f },
	{ -0.500276f, 0.707003f, 0.499871f },
	{ -0.500282f, 0.706994f, 0.499877f },
	{ -0.500147f, 0.707185f, 0.499742f },
	{ -0.499558f, 0.7072639f, 0.5002199f },
	{ -0.499775f, 0.706956f, 0.500437f },
	{ -0.70837f, 0.007032f, 0.705806f },
	{ -0.499429f, 0.709186f, 0.497621f },
	{ -0.70837f, 0.007032f, 0.705806f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0013FE50 = { vertex_0013FCD0, normal_0013FD90, LengthOfArray<Sint32>(vertex_0013FCD0), meshlist_0013FCA0, matlist_0013FBC0, LengthOfArray<Uint16>(meshlist_0013FCA0), LengthOfArray<Uint16>(matlist_0013FBC0), { -23.99007f, -5.000004f, 11.54553f }, 49.56067f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0013FE78 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013FE50, -485.9998f, 0, 2073.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0013FEAC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0013FF24[] = {
	4, 11, 10, 4, 3
};

extern "C" __declspec(dllexport) Sint16 poly_0013FF2E[] = {
	0x8000u | 5, 26, 27, 3, 24, 10,
	0x8000u | 5, 25, 29, 28, 2, 8
};

extern "C" __declspec(dllexport) Sint16 poly_0013FF46[] = {
	4, 8, 9, 2, 1
};

extern "C" __declspec(dllexport) Sint16 poly_0013FF50[] = {
	4, 4, 0, 11, 7
};

extern "C" __declspec(dllexport) Sint16 poly_0013FF5A[] = {
	4, 22, 23, 20, 21,
	4, 25, 27, 19, 18,
	4, 16, 17, 14, 15,
	4, 24, 28, 13, 12,
	4, 6, 30, 5, 31
};

extern "C" __declspec(dllexport) Sint16 poly_0013FF8C[] = {
	4, 19, 18, 21, 20,
	4, 25, 31, 27, 30,
	4, 13, 12, 15, 14,
	4, 23, 22, 16, 17
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013FFB4[] = {
	{ 4080, 255 },
	{ 4080, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013FFC4[] = {
	{ 0, 255 },
	{ 956, 255 },
	{ 0 },
	{ 4080, 255 },
	{ 4080, 0 },
	{ 956, 255 },
	{ 0, 255 },
	{ 4080, 255 },
	{ 0 },
	{ 4080, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013FFEC[] = {
	{ 4080, 255 },
	{ 4080, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0013FFFC[] = {
	{ 0 },
	{ 0, 254 },
	{ 2550, 0 },
	{ 2550, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014000C[] = {
	{ 0 },
	{ 0, 254 },
	{ 255, 0 },
	{ 255, 254 },
	{ 0 },
	{ 0, 254 },
	{ 255, 0 },
	{ 255, 254 },
	{ 255, 254 },
	{ 255, 0 },
	{ 0, 254 },
	{ 0 },
	{ 129, 253 },
	{ 129, 1 },
	{ 0, 254 },
	{ 0 },
	{ 129, 1 },
	{ 0 },
	{ 129, 253 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014005C[] = {
	{ 0 },
	{ 0, 254 },
	{ 510, 0 },
	{ 510, 254 },
	{ 510, 0 },
	{ 0 },
	{ 510, 254 },
	{ 0, 254 },
	{ 510, 254 },
	{ 510, 0 },
	{ 0, 254 },
	{ 0 },
	{ 0 },
	{ 0, 254 },
	{ 510, 0 },
	{ 510, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0014009C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0013FF24, NULL, NULL, NULL, uv_0013FFB4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0013FF2E, NULL, NULL, NULL, uv_0013FFC4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0013FF46, NULL, NULL, NULL, uv_0013FFEC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_0013FF50, NULL, NULL, NULL, uv_0013FFFC, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 5, poly_0013FF5A, NULL, NULL, NULL, uv_0014000C, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 4, poly_0013FF8C, NULL, NULL, NULL, uv_0014005C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0014012C[] = {
	{ -75, -27.5f, 5 },
	{ -75, 27.5f, 5 },
	{ -75, 22.5f, 5 },
	{ -75, -6.5f, 5 },
	{ -75, -10.5f, 5 },
	{ -75, 22.5f, -5 },
	{ -75, -6.5f, -5 },
	{ 245, -27.5f, 5 },
	{ 245, 22.5f, 5 },
	{ 245, 27.5f, 5 },
	{ 245, -6.5f, 5 },
	{ 245, -10.5f, 5 },
	{ 240, 22.5f, -5 },
	{ 240, -6.5f, -5 },
	{ 170, 22.5f, -5 },
	{ 170, -6.5f, -5 },
	{ 160, 22.5f, -5 },
	{ 160, -6.5f, -5 },
	{ 10, -6.5f, -5 },
	{ 10, 22.5f, -5 },
	{ 80, -6.5f, -5 },
	{ 80, 22.5f, -5 },
	{ 90, -6.5f, -5 },
	{ 90, 22.5f, -5 },
	{ 245, -6.5f, -5 },
	{ 0, 22.5f, -5 },
	{ -75, -6.5f, -5 },
	{ 0, -6.5f, -5 },
	{ 245, 22.5f, -5 },
	{ -75, 22.5f, -5 },
	{ -70, -6.5f, -5 },
	{ -70, 22.5f, -5 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_001402AC[] = {
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, -1, 0 },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0014042C = { vertex_0014012C, normal_001402AC, LengthOfArray<Sint32>(vertex_0014012C), meshlist_0014009C, matlist_0013FEAC, LengthOfArray<Uint16>(meshlist_0014009C), LengthOfArray<Uint16>(matlist_0013FEAC), { 85, 0, 0 }, 160.0781f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00140454 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014042C, -440, 67.5f, 1785, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00140488[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_001404C4[] = {
	4, 0, 4, 2, 6
};

extern "C" __declspec(dllexport) Sint16 poly_001404CE[] = {
	4, 1, 5, 0, 4
};

extern "C" __declspec(dllexport) Sint16 poly_001404D8[] = {
	4, 7, 3, 6, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_001404E4[] = {
	{ 0, 255 },
	{ 4080, 255 },
	{ 0 },
	{ 4080, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001404F4[] = {
	{ 0, 254 },
	{ 2550, 254 },
	{ 0 },
	{ 2550, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00140504[] = {
	{ 4080, 0 },
	{ 0 },
	{ 4080, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00140514[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001404C4, NULL, NULL, NULL, uv_001404E4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_001404CE, NULL, NULL, NULL, uv_001404F4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_001404D8, NULL, NULL, NULL, uv_00140504, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0014055C[] = {
	{ 215, 334.6999f, 200 },
	{ 215, 320, 200 },
	{ 215, 339.9999f, 200 },
	{ 215, 350, 200 },
	{ 215, 334.6999f, -120 },
	{ 215, 320, -120 },
	{ 215, 339.9999f, -120 },
	{ 215, 350, -120 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_001405BC[] = {
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0014061C = { vertex_0014055C, normal_001405BC, LengthOfArray<Sint32>(vertex_0014055C), meshlist_00140514, matlist_00140488, LengthOfArray<Uint16>(meshlist_00140514), LengthOfArray<Uint16>(matlist_00140488), { 215, 335, 40 }, 160, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00140644 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014061C, -315, -115, 1575, 0, 0xFFFFC001, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00140678[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_001406B4[] = {
	4, 0, 4, 2, 6
};

extern "C" __declspec(dllexport) Sint16 poly_001406BE[] = {
	4, 1, 5, 0, 4
};

extern "C" __declspec(dllexport) Sint16 poly_001406C8[] = {
	4, 7, 3, 6, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_001406D4[] = {
	{ 0, 255 },
	{ 4080, 255 },
	{ 0 },
	{ 4080, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001406E4[] = {
	{ 0, 254 },
	{ 2550, 254 },
	{ 0 },
	{ 2550, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001406F4[] = {
	{ 4080, 0 },
	{ 0 },
	{ 4080, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00140704[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001406B4, NULL, NULL, NULL, uv_001406D4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_001406BE, NULL, NULL, NULL, uv_001406E4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_001406C8, NULL, NULL, NULL, uv_001406F4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0014074C[] = {
	{ 215, 334.6999f, 200 },
	{ 215, 320, 200 },
	{ 215, 339.9999f, 200 },
	{ 215, 350, 200 },
	{ 215, 334.6999f, -120 },
	{ 215, 320, -120 },
	{ 215, 339.9999f, -120 },
	{ 215, 350, -120 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_001407AC[] = {
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0014080C = { vertex_0014074C, normal_001407AC, LengthOfArray<Sint32>(vertex_0014074C), meshlist_00140704, matlist_00140678, LengthOfArray<Uint16>(meshlist_00140704), LengthOfArray<Uint16>(matlist_00140678), { 215, 335, 40 }, 160, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00140834 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014080C, -680, -115, 1845, 0, 0xFFFFC001, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00140868[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 37, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 35, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 38, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 37, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 36, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 33, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 34, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0014091C[] = {
	4, 2, 3, 1, 0,
	4, 16, 12, 15, 14,
	4, 21, 22, 20, 19
};

extern "C" __declspec(dllexport) Sint16 poly_0014093A[] = {
	4, 3, 5, 0, 4,
	4, 12, 11, 14, 17,
	4, 28, 21, 27, 20
};

extern "C" __declspec(dllexport) Sint16 poly_00140958[] = {
	4, 30, 31, 36, 37,
	4, 34, 33, 32, 35,
	4, 39, 41, 38, 40
};

extern "C" __declspec(dllexport) Sint16 poly_00140976[] = {
	4, 9, 10, 8, 7,
	4, 25, 26, 24, 23
};

extern "C" __declspec(dllexport) Sint16 poly_0014098A[] = {
	0x8000u | 8, 46, 48, 14, 20, 17, 27, 18, 29,
	0x8000u | 8, 43, 44, 0, 12, 4, 11, 6, 13
};

extern "C" __declspec(dllexport) Sint16 poly_001409AE[] = {
	4, 0, 43, 1, 42,
	4, 19, 49, 20, 48,
	4, 14, 46, 15, 47,
	4, 16, 45, 12, 44
};

extern "C" __declspec(dllexport) Sint16 poly_001409D6[] = {
	4, 30, 36, 5, 4,
	4, 40, 41, 27, 28,
	4, 34, 32, 11, 17
};

extern "C" __declspec(dllexport) Sint16 poly_001409F4[] = {
	4, 38, 40, 29, 27,
	4, 36, 37, 4, 6,
	4, 32, 35, 17, 18,
	4, 33, 34, 13, 11
};

extern "C" __declspec(dllexport) Sint16 poly_00140A1C[] = {
	8, 9, 42, 10, 43, 7, 44, 8, 45,
	8, 25, 47, 26, 46, 23, 48, 24, 49
};

extern "C" __declspec(dllexport) NJS_TEX uv_00140A40[] = {
	{ 2040, 0 },
	{ 2040, 254 },
	{ 1506, 0 },
	{ 1506, 254 },
	{ 1249, 0 },
	{ 1249, 254 },
	{ 734, 0 },
	{ 734, 255 },
	{ 0, 254 },
	{ 0 },
	{ 476, 255 },
	{ 476, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00140A70[] = {
	{ 2040, 0 },
	{ 2039, 255 },
	{ 1506, 0 },
	{ 1506, 255 },
	{ 1249, 0 },
	{ 1249, 255 },
	{ 734, 0 },
	{ 734, 255 },
	{ 0, 255 },
	{ 0 },
	{ 476, 255 },
	{ 476, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00140AA0[] = {
	{ 508, 0 },
	{ 510, 255 },
	{ 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0 },
	{ 508, 255 },
	{ 508, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00140AD0[] = {
	{ 255, 0 },
	{ 255, 254 },
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00140AF0[] = {
	{ 254, 0 },
	{ 0 },
	{ 254, 35 },
	{ 0, 35 },
	{ 254, 69 },
	{ 0, 69 },
	{ 254, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 35 },
	{ 0, 35 },
	{ 255, 69 },
	{ 0, 69 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00140B30[] = {
	{ 254, 255 },
	{ 254, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 254, 255 },
	{ 254, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 254, 255 },
	{ 254, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00140B70[] = {
	{ 2549, 0 },
	{ 1882, 0 },
	{ 2549, 254 },
	{ 1882, 254 },
	{ 597, 0 },
	{ 0 },
	{ 597, 254 },
	{ 0, 254 },
	{ 1561, 0 },
	{ 917, 0 },
	{ 1561, 254 },
	{ 917, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00140BA0[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00140BE0[] = {
	{ 0 },
	{ 0, 255 },
	{ 532, 0 },
	{ 532, 255 },
	{ 996, 0 },
	{ 996, 255 },
	{ 1530, 0 },
	{ 1530, 255 },
	{ 0 },
	{ 0, 255 },
	{ 532, 0 },
	{ 532, 255 },
	{ 996, 0 },
	{ 996, 255 },
	{ 1530, 0 },
	{ 1530, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00140C20[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0014091C, NULL, NULL, NULL, uv_00140A40, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, poly_0014093A, NULL, NULL, NULL, uv_00140A70, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_00140958, NULL, NULL, NULL, uv_00140AA0, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_00140976, NULL, NULL, NULL, uv_00140AD0, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_0014098A, NULL, NULL, NULL, uv_00140AF0, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 4, poly_001409AE, NULL, NULL, NULL, uv_00140B30, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 3, poly_001409D6, NULL, NULL, NULL, uv_00140B70, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 4, poly_001409F4, NULL, NULL, NULL, uv_00140BA0, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 2, poly_00140A1C, NULL, NULL, NULL, uv_00140BE0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00140CF8[] = {
	{ -0.00001f, 13, 16 },
	{ -8.000001f, 13, 16 },
	{ -8.00001f, 13, 30.50001f },
	{ -0.0001f, 13, 30.50001f },
	{ -0.00001f, 11, 16 },
	{ -0.00002f, 11, 30.5f },
	{ -0.00001f, 0, 16 },
	{ 0, 16, 9 },
	{ -8, 16, 9 },
	{ -8.000001f, 16, 16 },
	{ -0.00001f, 16, 16 },
	{ 0, 11, 9 },
	{ 0, 13, 9 },
	{ 0, 0, 9 },
	{ 0.000001f, 13, -5 },
	{ -7.999999f, 13, -5 },
	{ -8, 13, 9 },
	{ 0.000001f, 11, -5 },
	{ 0, 0, -4.999998f },
	{ -7.999999f, 13, -12 },
	{ 0.000001f, 13, -12 },
	{ -0.00043f, 13, -24.99997f },
	{ -8.000044f, 13, -24.99997f },
	{ 0.000001f, 16, -12 },
	{ -7.999999f, 16, -12 },
	{ -7.999999f, 16, -5 },
	{ 0.000001f, 16, -5 },
	{ 0.000001f, 11, -12 },
	{ 0.000002f, 11, -24.99997f },
	{ 0.000001f, 0, -12 },
	{ -1.000002f, 11, 30.5f },
	{ -1.00001f, 0, 30.50001f },
	{ -0.999999f, 11, -5 },
	{ -1, 0, 9 },
	{ -1, 11, 9 },
	{ -0.999999f, 0, -5 },
	{ -1.000001f, 11, 16 },
	{ -1.000001f, 0, 16 },
	{ -0.999999f, 0, -12 },
	{ -1.000044f, 0, -24.99997f },
	{ -0.999999f, 11, -12 },
	{ -0.999998f, 11, -24.99997f },
	{ -8.000001f, 15.08436f, 16 },
	{ -0.00001f, 15.08436f, 16 },
	{ 0, 15.08436f, 9 },
	{ -8, 15.08436f, 9 },
	{ 0.000001f, 15.08436f, -5 },
	{ -7.999999f, 15.08436f, -5 },
	{ 0.000001f, 15.08436f, -12 },
	{ -7.999999f, 15.08436f, -12 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00140F50[] = {
	{ 0.904534f, 0.301512f, 0.301511f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 1, 0 },
	{ 0.707105f, 0.707108f, 0 },
	{ 0.904534f, -0.301511f, 0.301512f },
	{ 0.707108f, -0.707105f, 0 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.904534f, -0.301511f, -0.301511f },
	{ 0.904534f, 0.301511f, -0.301511f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.904534f, 0.301511f, 0.301511f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0.904534f, -0.301511f, 0.301511f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0, 0.707108f, -0.707106f },
	{ 0.904533f, 0.301514f, -0.301511f },
	{ 0.7071019f, 0.707112f, 0 },
	{ 0, 1, 0 },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.904535f, -0.301508f, -0.301512f },
	{ 0.7071109f, -0.707103f, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 1, 0, 0 },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.707106f, -0.00001f, -0.707108f },
	{ 1, -0.00002f, -0.00003f },
	{ 0.5773489f, -0.57735f, -0.577351f },
	{ 0.707106f, -0.707108f, -0.00002f },
	{ 0, 0, 1 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_001411A8 = { vertex_00140CF8, normal_00140F50, LengthOfArray<Sint32>(vertex_00140CF8), meshlist_00140C20, matlist_00140868, LengthOfArray<Uint16>(meshlist_00140C20), LengthOfArray<Uint16>(matlist_00140868), { -4.000021f, 8, 2.750019f }, 28.03679f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_001411D0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001411A8, -295, 0, 1645, 0, 0xFFFFC001, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00141204[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 40, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 41, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 42, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00141268[] = {
	8, 9, 14, 12, 13, 6, 7, 1, 0
};

extern "C" __declspec(dllexport) Sint16 poly_0014127A[] = {
	8, 8, 9, 11, 12, 5, 6, 2, 1
};

extern "C" __declspec(dllexport) Sint16 poly_0014128C[] = {
	8, 15, 8, 10, 11, 4, 5, 3, 2
};

extern "C" __declspec(dllexport) Sint16 poly_0014129E[] = {
	4, 10, 4, 15, 3
};

extern "C" __declspec(dllexport) Sint16 poly_001412A8[] = {
	4, 13, 14, 7, 0
};

extern "C" __declspec(dllexport) NJS_TEX uv_001412B4[] = {
	{ 0, 255 },
	{ 0 },
	{ 533, 255 },
	{ 533, 0 },
	{ 2015, 255 },
	{ 2015, 0 },
	{ 2550, 255 },
	{ 2550, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001412D4[] = {
	{ 2550, 255 },
	{ 2550, 0 },
	{ 2015, 255 },
	{ 2015, 0 },
	{ 533, 255 },
	{ 533, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001412F4[] = {
	{ 0, 255 },
	{ 0 },
	{ 533, 255 },
	{ 533, 0 },
	{ 2015, 255 },
	{ 2015, 0 },
	{ 2550, 255 },
	{ 2550, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00141314[] = {
	{ 1019, 255 },
	{ 0, 255 },
	{ 1019, -255 },
	{ 0, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00141324[] = {
	{ 2039, 255 },
	{ 2039, -510 },
	{ 0, 255 },
	{ 0, -510 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00141334[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00141268, NULL, NULL, NULL, uv_001412B4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0014127A, NULL, NULL, NULL, uv_001412D4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0014128C, NULL, NULL, NULL, uv_001412F4, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_0014129E, NULL, NULL, NULL, uv_00141314, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_001412A8, NULL, NULL, NULL, uv_00141324, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_001413AC[] = {
	{ 4.5f, 5.5f, -37.75f },
	{ 4.5f, 3, -37.75f },
	{ 4.5f, -14.5f, -37.75f },
	{ 4.5f, -19.5f, -37.75f },
	{ 4.5f, -19.5f, -57.75f },
	{ 4.5f, -14.5f, -57.75f },
	{ 4.5f, 3, -57.75f },
	{ 4.5f, 5.5f, -57.75f },
	{ 59.99997f, -14.5f, -37.75f },
	{ 59.99997f, 3, -37.75f },
	{ 59.99997f, -19.5f, -57.75f },
	{ 59.99997f, -14.5f, -57.75f },
	{ 59.99997f, 3, -57.75f },
	{ 59.99997f, 5.5f, -57.75f },
	{ 59.99997f, 5.5f, -37.75f },
	{ 59.99997f, -19.5f, -37.75f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0014146C[] = {
	{ 0.7071069f, -0.7071069f, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ -1, 0, 0 },
	{ -1, -0.00001f, 0 },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, -0.00001f, 0.7071069f },
	{ -0.57735f, -0.577351f, 0.57735f },
	{ -0.707106f, -0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0014152C = { vertex_001413AC, normal_0014146C, LengthOfArray<Sint32>(vertex_001413AC), meshlist_00141334, matlist_00141204, LengthOfArray<Uint16>(meshlist_00141334), LengthOfArray<Uint16>(matlist_00141204), { 32.24999f, -7, -47.75f }, 29.49681f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00141554 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014152C, -330, 19.5f, 1682.75f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00141588[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_001415EC[] = {
	0x8000u | 17, 47, 46, 48, 30, 35, 33, 34, 31, 32, 41, 42, 6, 8, 7, 9, 54, 50,
	4, 16, 17, 49, 36,
	0x8000u | 13, 16, 18, 49, 19, 37, 39, 45, 4, 14, 5, 15, 51, 56
};

extern "C" __declspec(dllexport) Sint16 poly_00141636[] = {
	8, 45, 38, 14, 0, 15, 1, 56, 57,
	6, 38, 45, 20, 37, 22, 49,
	4, 31, 25, 33, 27,
	3, 46, 30, 28,
	0x8000u | 5, 28, 29, 30, 27, 33,
	9, 55, 11, 7, 10, 6, 43, 41, 25, 31,
	3, 7, 54, 55
};

extern "C" __declspec(dllexport) Sint16 poly_00141690[] = {
	12, 22, 23, 20, 21, 38, 40, 0, 2, 1, 3, 57, 53
};

extern "C" __declspec(dllexport) Sint16 poly_001416AA[] = {
	0x8000u | 7, 44, 40, 13, 2, 12, 3, 53,
	14, 28, 29, 26, 27, 24, 25, 44, 43, 13, 10, 12, 11, 52, 55,
	4, 24, 44, 21, 40,
	3, 12, 52, 53
};

extern "C" __declspec(dllexport) Sint16 poly_001416EA[] = {
	4, 24, 21, 26, 23
};

extern "C" __declspec(dllexport) NJS_TEX uv_001416F4[] = {
	{ 6120, 255 },
	{ 6120, -298 },
	{ 5907, 255 },
	{ 6021, -338 },
	{ 5627, -21 },
	{ 5979, -436 },
	{ 5627, -436 },
	{ 5979, -3063 },
	{ 5627, -3063 },
	{ 5346, -3685 },
	{ 5346, -3340 },
	{ 2884, -3685 },
	{ 2884, -3340 },
	{ 772, -3685 },
	{ 772, -3340 },
	{ 140, -3063 },
	{ 492, -3063 },
	{ 5627, -21 },
	{ 5907, 255 },
	{ 6120, -436 },
	{ 6120, 255 },
	{ 5627, -21 },
	{ 5627, -436 },
	{ 6120, -436 },
	{ 5627, -3063 },
	{ 6120, -3063 },
	{ 5346, -3340 },
	{ 5346, -3825 },
	{ 2884, -3340 },
	{ 2884, -3825 },
	{ 772, -3340 },
	{ 772, -3825 },
	{ 492, -3063 },
	{ 0, -3063 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014177C[] = {
	{ 6120, 255 },
	{ 6120, 0 },
	{ 3300, 255 },
	{ 3300, 0 },
	{ 884, 255 },
	{ 884, 0 },
	{ 0, 255 },
	{ 0 },
	{ 4080, 0 },
	{ 4080, 255 },
	{ 3164, 0 },
	{ 3164, 255 },
	{ 0 },
	{ 0, 255 },
	{ 5593, 253 },
	{ 5593, 1 },
	{ 4636, 253 },
	{ 4636, 1 },
	{ 5975, 253 },
	{ 5784, 253 },
	{ 5975, 1 },
	{ 5975, 1 },
	{ 5784, 1 },
	{ 5784, 253 },
	{ 5401, 1 },
	{ 5401, 253 },
	{ 239, 1 },
	{ 621, 1 },
	{ 621, 253 },
	{ 2725, 1 },
	{ 2725, 253 },
	{ 4828, 1 },
	{ 4828, 253 },
	{ 5401, 1 },
	{ 5401, 253 },
	{ 621, 253 },
	{ 239, 253 },
	{ 239, 1 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00141814[] = {
	{ 0, 255 },
	{ 0 },
	{ 4746, 255 },
	{ 4746, 0 },
	{ 6120, 255 },
	{ 6120, 0 },
	{ 3300, 255 },
	{ 3300, 0 },
	{ 884, 255 },
	{ 884, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00141844[] = {
	{ 6120, 0 },
	{ 6120, 255 },
	{ 3300, 0 },
	{ 3300, 255 },
	{ 884, 0 },
	{ 884, 255 },
	{ 0, 255 },
	{ 5833, 251 },
	{ 6024, 251 },
	{ 5833, 3 },
	{ 5833, 251 },
	{ 5450, 3 },
	{ 5450, 251 },
	{ 4685, 3 },
	{ 4685, 251 },
	{ 2773, 3 },
	{ 2773, 251 },
	{ 1243, 3 },
	{ 1243, 251 },
	{ 478, 3 },
	{ 478, 251 },
	{ 1530, 0 },
	{ 0 },
	{ 1530, 255 },
	{ 0, 255 },
	{ 884, 0 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001418B4[] = {
	{ 4079, 0 },
	{ 4079, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_001418C4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_001415EC, NULL, NULL, NULL, uv_001416F4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 7, poly_00141636, NULL, NULL, NULL, uv_0014177C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_00141690, NULL, NULL, NULL, uv_00141814, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, poly_001416AA, NULL, NULL, NULL, uv_00141844, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_001416EA, NULL, NULL, NULL, uv_001418B4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0014193C[] = {
	{ -25, 0, 155 },
	{ -175.0002f, 0, 155 },
	{ -25, 5, 155 },
	{ -175.0002f, 5, 155 },
	{ -25, -10, 120 },
	{ -175.0001f, -10, 120 },
	{ -25, 0, 145 },
	{ -175.0002f, 0, 145 },
	{ -25, 0, 120 },
	{ -175.0001f, 0, 120 },
	{ -25, 10, 145 },
	{ -175.0002f, 10, 145 },
	{ -175.0002f, 10, 155 },
	{ -25, 10, 155 },
	{ -25, -10, 155 },
	{ -175.0002f, -10, 155 },
	{ 170, -10, -120 },
	{ 190, -10, -140 },
	{ 170, -10, -90 },
	{ 170, -10, 100 },
	{ 205, 0, 100 },
	{ 205, 5, 100 },
	{ 205, 0, -90 },
	{ 205, 5, -90 },
	{ 205, 10, 100 },
	{ 195, 10, 100 },
	{ 205, 10, -90 },
	{ 195, 10, -90 },
	{ 205, 10, -100 },
	{ 198, 10, -97 },
	{ 198, 0, -97 },
	{ 195, 0, 100 },
	{ 170, 0, 100 },
	{ 195, 0, -90 },
	{ 170, 0, -90 },
	{ 170, 0, -120 },
	{ 205, -10, -140 },
	{ 205, -10, 100 },
	{ 150, 0, 155 },
	{ 150, -10, 120 },
	{ 150, 5, 155 },
	{ 150, 0, 144.9999f },
	{ 150, 0, 120 },
	{ 150, 10, 144.9999f },
	{ 150, 10, 155 },
	{ 150, -10, 155 },
	{ 205, 0, -100 },
	{ 205, 0, -140 },
	{ 190, 0, -140 },
	{ 205, -10, -90 },
	{ -195.0001f, 0, 100 },
	{ -195.0001f, -10, 100 },
	{ -230, 10, 100 },
	{ -230, 5, 100 },
	{ -220.0001f, 0, 100 },
	{ -220.0001f, 10, 100 },
	{ -230, -10, 100 },
	{ -230, 0, 100 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00141BF4[] = {
	{ 0, 0, 1 },
	{ -0.382684f, 0, 0.923879f },
	{ 0, 0, 1 },
	{ -0.382684f, 0, 0.923879f },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0.297109f, 0.630262f, -0.717284f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0.227458f, 0.804186f, -0.5491329f },
	{ -0.297109f, 0.630262f, 0.717283f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, -0.7071069f, 0.7071069f },
	{ -0.297109f, -0.630262f, 0.717283f },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0.92388f, 0, 0.382683f },
	{ 0.92388f, 0, 0.382683f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.717284f, 0.630262f, 0.297109f },
	{ -0.5491329f, 0.804187f, -0.227458f },
	{ 0.447214f, 0.8944269f, 0 },
	{ -0.732003f, 0.664527f, -0.150249f },
	{ -0.31631f, 0.5960039f, -0.738057f },
	{ -0.54782f, 0.632287f, -0.54782f },
	{ -0.423329f, 0.80099f, -0.423329f },
	{ -0.717283f, 0.630262f, -0.297109f },
	{ 0, 1, 0 },
	{ -0.64201f, 0.755287f, -0.131777f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, -1, 0 },
	{ 0.717284f, -0.630262f, 0.297109f },
	{ 0.382683f, 0, 0.92388f },
	{ 0, -1, 0 },
	{ 0.382683f, 0, 0.92388f },
	{ -0.297109f, 0.630263f, -0.717284f },
	{ 0, 1, 0 },
	{ -0.227458f, 0.804186f, -0.5491329f },
	{ 0.297109f, 0.630262f, 0.717284f },
	{ 0.297109f, -0.630262f, 0.717284f },
	{ -0.24515f, 0.78275f, -0.572017f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.447214f, -0.8944269f, 0 },
	{ 0, 1, 0 },
	{ 0, -1, 0 },
	{ -0.6324559f, 0.447214f, 0.632455f },
	{ -0.707108f, 0, 0.707106f },
	{ 0.6324559f, 0.447214f, -0.632455f },
	{ 0.392232f, 0.83205f, -0.392232f },
	{ -0.6324559f, -0.447214f, 0.632455f },
	{ -0.707108f, 0, 0.707106f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00141EAC = { vertex_0014193C, normal_00141BF4, LengthOfArray<Sint32>(vertex_0014193C), meshlist_001418C4, matlist_00141588, LengthOfArray<Uint16>(meshlist_001418C4), LengthOfArray<Uint16>(matlist_00141588), { -12.50003f, 0, 7.5f }, 262.7975f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00141ED4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00141EAC, -710, 40, 1930, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00141F08[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 44, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00141FE4[] = {
	0x8000u | 9, 1, 3, 2, 9, 8, 53, 57, 12, 11,
	8, 7, 4, 5, 18, 17, 1, 0, 3,
	3, 5, 6, 7,
	4, 11, 57, 56, 58,
	0x8000u | 14, 57, 58, 8, 19, 2, 20, 1, 24, 18, 25, 4, 23, 7, 22
};

extern "C" __declspec(dllexport) Sint16 poly_0014203A[] = {
	4, 40, 38, 33, 34,
	0x8000u | 10, 13, 15, 43, 14, 44, 16, 42, 10, 54, 41,
	4, 44, 43, 46, 45,
	12, 37, 26, 40, 28, 38, 27, 39, 147, 31, 32, 29, 121,
	4, 35, 36, 58, 56,
	0x8000u | 8, 136, 69, 141, 63, 140, 64, 149, 68
};

extern "C" __declspec(dllexport) Sint16 poly_0014209A[] = {
	0x8000u | 16, 49, 22, 50, 23, 52, 25, 51, 24, 48, 20, 47, 19, 55, 58, 30, 35
};

extern "C" __declspec(dllexport) Sint16 poly_001420BC[] = {
	4, 53, 12, 54, 41
};

extern "C" __declspec(dllexport) Sint16 poly_001420C6[] = {
	16, 49, 37, 50, 40, 52, 33, 51, 34, 48, 38, 47, 39, 55, 31, 30, 29,
	0x8000u | 14, 6, 21, 5, 43, 17, 45, 0, 46, 3, 44, 9, 42, 53, 54,
	9, 133, 131, 130, 103, 101, 104, 102, 120, 119,
	9, 130, 134, 133, 82, 81, 80, 79, 75, 76,
	0x8000u | 9, 78, 77, 86, 85, 84, 83, 139, 138, 125,
	0x8000u | 9, 107, 106, 108, 105, 116, 115, 125, 124, 139
};

extern "C" __declspec(dllexport) Sint16 poly_00142156[] = {
	3, 21, 43, 13
};

extern "C" __declspec(dllexport) Sint16 poly_0014215E[] = {
	20, 59, 122, 60, 135, 62, 136, 70, 69, 66, 63, 65, 64, 67, 68, 61, 149, 174, 150, 121, 151,
	0x8000u | 9, 111, 163, 112, 164, 114, 165, 127, 166, 167,
	4, 123, 161, 144, 91,
	8, 142, 176, 148, 160, 71, 167, 137, 127,
	3, 148, 87, 142,
	9, 159, 155, 132, 153, 73, 152, 72, 154, 74,
	0x8000u | 9, 158, 118, 157, 100, 156, 99, 159, 129, 132
};

extern "C" __declspec(dllexport) Sint16 poly_001421E8[] = {
	0x8000u | 9, 106, 111, 105, 112, 115, 114, 124, 127, 137,
	9, 129, 132, 134, 73, 82, 72, 80, 74, 75,
	0x8000u | 9, 118, 119, 100, 102, 99, 101, 129, 130, 134,
	9, 124, 139, 137, 84, 71, 86, 175, 78, 123
};

extern "C" __declspec(dllexport) Sint16 poly_00142238[] = {
	9, 166, 167, 140, 160, 149, 162, 150, 161, 151,
	9, 155, 159, 128, 156, 98, 157, 97, 158, 117,
	9, 128, 141, 155, 136, 153, 135, 152, 122, 154,
	0x8000u | 9, 163, 110, 164, 109, 165, 113, 166, 126, 140
};

extern "C" __declspec(dllexport) Sint16 poly_00142288[] = {
	4, 94, 92, 91, 170,
	4, 145, 94, 90, 91,
	4, 92, 93, 170, 89,
	4, 146, 96, 168, 88,
	4, 93, 171, 89, 90,
	4, 172, 173, 87, 168,
	4, 95, 172, 169, 87,
	4, 96, 95, 88, 169
};

extern "C" __declspec(dllexport) Sint16 poly_001422D8[] = {
	4, 89, 90, 143, 88
};

extern "C" __declspec(dllexport) NJS_TEX uv_001422E4[] = {
	{ 3538, 3 },
	{ 3920, 251 },
	{ 3920, 3 },
	{ 5068, 251 },
	{ 5068, 3 },
	{ 5450, 251 },
	{ 5450, 3 },
	{ 6024, 251 },
	{ 6024, 3 },
	{ 95, 3 },
	{ 860, 3 },
	{ 860, 251 },
	{ 1243, 3 },
	{ 1243, 251 },
	{ 3538, 3 },
	{ 3538, 251 },
	{ 3920, 251 },
	{ 860, 251 },
	{ 95, 251 },
	{ 95, 3 },
	{ 0 },
	{ 765, 0 },
	{ 0, 255 },
	{ 765, 255 },
	{ 6120, 0 },
	{ 6119, 255 },
	{ 5676, 0 },
	{ 5676, 255 },
	{ 4092, 0 },
	{ 4092, 255 },
	{ 3829, 0 },
	{ 3829, 255 },
	{ 924, 0 },
	{ 924, 255 },
	{ 660, 0 },
	{ 660, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014237C[] = {
	{ 657, -1443 },
	{ 4079, -1443 },
	{ 920, -1785 },
	{ 3815, -1785 },
	{ 0, -354 },
	{ 0, 254 },
	{ 372, -354 },
	{ 370, 254 },
	{ 1855, -354 },
	{ 1854, 254 },
	{ 2593, -354 },
	{ 2595, 254 },
	{ 2738, -49 },
	{ 2741, 254 },
	{ 1855, -354 },
	{ 372, -354 },
	{ 1731, -510 },
	{ 494, -510 },
	{ 0, -1443 },
	{ 0, 255 },
	{ 657, -1443 },
	{ 657, 255 },
	{ 4079, -1443 },
	{ 4079, 255 },
	{ 5656, -1443 },
	{ 5655, 255 },
	{ 6097, -424 },
	{ 6097, 255 },
	{ 8159, -424 },
	{ 8159, 255 },
	{ 4079, -51 },
	{ 3831, 254 },
	{ 2864, -51 },
	{ 2864, 254 },
	{ 0, 254 },
	{ 0, 84 },
	{ 248, -102 },
	{ 248, -255 },
	{ 3856, -102 },
	{ 3856, -255 },
	{ 4080, 254 },
	{ 4080, 84 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00142424[] = {
	{ 0, 254 },
	{ 0 },
	{ 492, 254 },
	{ 492, 0 },
	{ 689, 254 },
	{ 689, 0 },
	{ 2862, 254 },
	{ 2862, 0 },
	{ 3059, 254 },
	{ 3059, 0 },
	{ 4242, 254 },
	{ 4242, 0 },
	{ 4572, 254 },
	{ 4572, 0 },
	{ 6119, 254 },
	{ 6119, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00142464[] = {
	{ 254, 0 },
	{ 0 },
	{ 254, 254 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00142474[] = {
	{ 0 },
	{ 0, 255 },
	{ 428, 0 },
	{ 428, 255 },
	{ 673, 0 },
	{ 673, 255 },
	{ 2564, 0 },
	{ 2564, 255 },
	{ 2806, 0 },
	{ 2806, 255 },
	{ 3838, 0 },
	{ 3838, 255 },
	{ 4429, 0 },
	{ 4429, 255 },
	{ 6120, 0 },
	{ 6120, 255 },
	{ 0 },
	{ 0, 254 },
	{ 553, 0 },
	{ 553, 254 },
	{ 737, 0 },
	{ 737, 254 },
	{ 2581, 0 },
	{ 2581, 254 },
	{ 2763, 0 },
	{ 2763, 254 },
	{ 3862, 0 },
	{ 3862, 254 },
	{ 4079, 0 },
	{ 4079, 254 },
	{ 2577, 255 },
	{ 3682, 255 },
	{ 3682, 0 },
	{ 3771, 255 },
	{ 3771, 0 },
	{ 3991, 255 },
	{ 3991, 0 },
	{ 4080, 255 },
	{ 4080, 0 },
	{ 3682, 0 },
	{ 2577, 0 },
	{ 2577, 255 },
	{ 2156, 0 },
	{ 2156, 255 },
	{ 1340, 0 },
	{ 1340, 255 },
	{ 0 },
	{ 0, 255 },
	{ 6120, 0 },
	{ 6120, 255 },
	{ 2820, 0 },
	{ 2820, 255 },
	{ 1974, 0 },
	{ 1974, 255 },
	{ 1558, 0 },
	{ 1558, 255 },
	{ 410, 255 },
	{ 0, 255 },
	{ 0 },
	{ 90, 255 },
	{ 90, 0 },
	{ 320, 255 },
	{ 320, 0 },
	{ 410, 255 },
	{ 410, 0 },
	{ 1558, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014257C[] = {
	{ 6120, 135 },
	{ 6120, 255 },
	{ 5416, 135 },
	{ 5416, 255 },
	{ 4987, 135 },
	{ 4987, 255 },
	{ 4915, 135 },
	{ 4915, 255 },
	{ 4699, 135 },
	{ 4699, 255 },
	{ 2379, 135 },
	{ 2379, 255 },
	{ 2176, 135 },
	{ 2176, 255 },
	{ 2103, 135 },
	{ 2103, 255 },
	{ 1668, 135 },
	{ 1668, 255 },
	{ 0, 135 },
	{ 0, 255 },
	{ 1530, 255 },
	{ 1530, 0 },
	{ 1489, 255 },
	{ 1489, 0 },
	{ 1386, 255 },
	{ 1386, 0 },
	{ 1345, 255 },
	{ 1345, 0 },
	{ 829, 0 },
	{ 765, 255 },
	{ 765, 0 },
	{ 0, 254 },
	{ 0 },
	{ 0 },
	{ 270, 0 },
	{ 270, 255 },
	{ 656, 0 },
	{ 656, 255 },
	{ 829, 0 },
	{ 829, 255 },
	{ 1345, 255 },
	{ 270, 255 },
	{ 0, 255 },
	{ 0 },
	{ 1842, 0 },
	{ 1292, 0 },
	{ 1292, 255 },
	{ 1099, 0 },
	{ 1099, 255 },
	{ 686, 0 },
	{ 686, 255 },
	{ 0 },
	{ 0, 255 },
	{ 2040, 0 },
	{ 2040, 255 },
	{ 1995, 0 },
	{ 1995, 255 },
	{ 1886, 0 },
	{ 1886, 255 },
	{ 1842, 0 },
	{ 1842, 255 },
	{ 1292, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00142674[] = {
	{ 6120, 255 },
	{ 6120, 0 },
	{ 6028, 255 },
	{ 6028, 0 },
	{ 5799, 255 },
	{ 5800, 0 },
	{ 5708, 255 },
	{ 5708, 0 },
	{ 4563, 0 },
	{ 392, 0 },
	{ 1491, 0 },
	{ 1501, 255 },
	{ 1880, 0 },
	{ 1921, 255 },
	{ 2705, 0 },
	{ 2738, 255 },
	{ 4080, 0 },
	{ 4080, 255 },
	{ 0 },
	{ 0, 255 },
	{ 86, 0 },
	{ 87, 255 },
	{ 306, 0 },
	{ 308, 255 },
	{ 392, 0 },
	{ 396, 255 },
	{ 1501, 255 },
	{ 5708, 255 },
	{ 4560, 255 },
	{ 4563, 0 },
	{ 4144, 255 },
	{ 4178, 0 },
	{ 3299, 255 },
	{ 3319, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00142704[] = {
	{ 410, 255 },
	{ 1554, 255 },
	{ 1553, 0 },
	{ 1939, 255 },
	{ 1967, 0 },
	{ 2799, 255 },
	{ 2825, 0 },
	{ 6120, 255 },
	{ 6120, 0 },
	{ 2586, 255 },
	{ 3685, 255 },
	{ 3682, 0 },
	{ 3773, 255 },
	{ 3771, 0 },
	{ 3993, 255 },
	{ 3991, 0 },
	{ 4080, 255 },
	{ 4080, 0 },
	{ 3682, 0 },
	{ 2577, 0 },
	{ 2586, 255 },
	{ 2156, 0 },
	{ 2198, 255 },
	{ 1340, 0 },
	{ 1373, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0 },
	{ 90, 255 },
	{ 90, 0 },
	{ 318, 255 },
	{ 318, 0 },
	{ 410, 255 },
	{ 408, 0 },
	{ 1553, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00142794[] = {
	{ 254, 254 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00142814[] = {
	{ 255, 254 },
	{ 255, 0 },
	{ 0, 254 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00142824[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_00141FE4, NULL, NULL, NULL, uv_001422E4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_0014203A, NULL, NULL, NULL, uv_0014237C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0014209A, NULL, NULL, NULL, uv_00142424, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_001420BC, NULL, NULL, NULL, uv_00142464, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 6, poly_001420C6, NULL, NULL, NULL, uv_00142474, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_00142156, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 7, poly_0014215E, NULL, NULL, NULL, uv_0014257C, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 4, poly_001421E8, NULL, NULL, NULL, uv_00142674, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 4, poly_00142238, NULL, NULL, NULL, uv_00142704, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 8, poly_00142288, NULL, NULL, NULL, uv_00142794, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 1, poly_001422D8, NULL, NULL, NULL, uv_00142814, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0014292C[] = {
	{ -7.364319f, 25, 21.00659f },
	{ -2.500122f, 25, 31.00659f },
	{ 7.499878f, 25, 21.00659f },
	{ 2.599854f, 25, 10.90649f },
	{ -122.5001f, 25, 21.00659f },
	{ -117.4003f, 25, 10.90649f },
	{ -147.5001f, 25, 10.90649f },
	{ -147.5001f, 25, 21.00659f },
	{ 67.4332f, 25, 21.00659f },
	{ 62.23318f, 25, 10.90649f },
	{ 62.43317f, 15, -28.99341f },
	{ 84.16653f, 25, -28.99341f },
	{ 74.28121f, 25, -28.99341f },
	{ -147.5001f, 15, 10.90649f },
	{ -117.5001f, 15, -28.99341f },
	{ -147.5001f, 15, -28.99341f },
	{ 2.499878f, 15, -28.99341f },
	{ -107.3933f, 25, 21.00659f },
	{ -112.5001f, 25, 31.00659f },
	{ 67.4332f, 20, 21.00659f },
	{ 7.499878f, 20, 21.00659f },
	{ -147.5001f, 15, 11.00659f },
	{ -147.5001f, 20, 21.00659f },
	{ -122.5001f, 20, 21.00659f },
	{ -2.500122f, 20, 31.00659f },
	{ -112.5001f, 20, 31.00659f },
	{ -147.5001f, 5, -28.5f },
	{ 7.499908f, 5, -28.49304f },
	{ -122.5001f, 5, -28.5f },
	{ 182.4999f, 5, -8.993407f },
	{ 182.4999f, 15, -8.993407f },
	{ 84.16653f, 5, -8.993407f },
	{ 84.1665f, 5, -28.49304f },
	{ -112.5001f, 5, 31.00659f },
	{ -2.500122f, 5, 31.00659f },
	{ 182.4999f, 20, -8.993407f },
	{ 162.4999f, 20, -28.99341f },
	{ -147.5001f, 5, 21.00659f },
	{ 7.499878f, 5, 21.00659f },
	{ 67.4332f, 5, 21.00659f },
	{ -122.5001f, 5, 21.00659f },
	{ 74.28121f, 15, -28.99341f },
	{ 62.23318f, 15, 10.90649f },
	{ -117.4003f, 15, 10.90649f },
	{ 2.599854f, 15, 10.90649f },
	{ -107.3933f, 15, 21.00659f },
	{ -7.364319f, 15, 21.00659f },
	{ 67.4332f, 15, 21.00659f },
	{ 7.499878f, 15, 21.00659f },
	{ -147.5001f, 15, 21.00659f },
	{ -122.5001f, 15, 21.00659f },
	{ -2.500122f, 15, 31.00659f },
	{ -112.5001f, 15, 31.00659f },
	{ 73.99969f, 25, -9.093384f },
	{ 73.99969f, 15, -9.093384f },
	{ 84.16653f, 15, -8.993407f },
	{ 84.16653f, 20, -28.99341f },
	{ 84.18872f, 25, -8.993407f },
	{ 84.16653f, 20, -8.993407f },
	{ -162.0001f, 5, -28.49341f },
	{ -113.5001f, 5, -28.49304f },
	{ 67.39996f, 5, 1.006592f },
	{ -113.5001f, 5, 1.006592f },
	{ -102.4883f, 0, 16.00659f },
	{ 57.48785f, 0, 16.00659f },
	{ 57.48785f, 5, 16.00659f },
	{ -102.4883f, 5, 16.00659f },
	{ 67.39996f, 5, 6.006592f },
	{ 67.39996f, 0, 6.006592f },
	{ -113.5001f, 0, 6.006592f },
	{ -113.5001f, 5, 6.006592f },
	{ 66.4999f, -19.5f, 1.006592f },
	{ -112.5001f, -19.5f, -28.99304f },
	{ -112.5001f, -19.5f, 1.006592f },
	{ -162.5001f, -19.5f, -28.99341f },
	{ -162.0001f, -20, -28.49341f },
	{ -162.0001f, -25, -28.49341f },
	{ 182.4999f, -25, -28.49304f },
	{ 182.4999f, -20, -28.49304f },
	{ -113.5001f, -25, -28.49304f },
	{ -113.5001f, -20, -28.49304f },
	{ -113.5001f, -25, 1.006592f },
	{ -113.5001f, -20, 1.006592f },
	{ 67.4999f, -25, 1.006592f },
	{ 67.4999f, -20, 1.006592f },
	{ 67.4999f, -25, -28.49304f },
	{ 67.4999f, -20, -28.49304f },
	{ 87.49988f, -19.49999f, -28.99805f },
	{ 107.4999f, -1.500002f, -28.99805f },
	{ 117.4999f, -19.49999f, -28.9978f },
	{ 117.4999f, -1.500002f, -28.9978f },
	{ 137.4999f, -1.500002f, -28.99756f },
	{ 137.4999f, -19.49999f, -31.00305f },
	{ 117.4999f, -19.49999f, -31.00671f },
	{ 137.4999f, -1.500002f, -31.00305f },
	{ 107.4999f, -19.49999f, -31.00305f },
	{ 107.4999f, -1.500002f, -31.00305f },
	{ -53.49982f, 0, 14.50659f },
	{ -61.49982f, 0, 14.50659f },
	{ -61.49982f, -19.5f, 14.00659f },
	{ -53.49982f, -19.5f, 14.00659f },
	{ -61.49982f, -20, 14.50659f },
	{ -53.49982f, -20, 14.50659f },
	{ -61.49982f, -25, 14.50659f },
	{ -53.49982f, -25, 14.50659f },
	{ 8.500121f, -20, 14.50659f },
	{ 7.500122f, -20, 11.50659f },
	{ 7.500122f, -25, 11.50659f },
	{ 8.500121f, -25, 14.50659f },
	{ 8.500121f, 0, 14.50659f },
	{ 7.500122f, 0, 11.50659f },
	{ 7.500122f, -19.5f, 11.50659f },
	{ 8.500121f, -19.5f, 14.00659f },
	{ 16.50015f, 0, 14.50659f },
	{ 16.50015f, -19.5f, 14.00659f },
	{ 16.50015f, -20, 14.50659f },
	{ 16.50015f, -25, 14.50659f },
	{ -52.49982f, 0, 11.50659f },
	{ -52.49982f, -19.5f, 11.50659f },
	{ -52.49982f, -20, 11.50659f },
	{ -52.49982f, -25, 11.50659f },
	{ 182.4999f, 5, -28.49304f },
	{ -162.0001f, 0, -28.49341f },
	{ 182.4999f, -19.5f, -28.99304f },
	{ 17.49997f, -20, 11.50659f },
	{ 17.49997f, -25, 11.50659f },
	{ 17.49997f, 0, 11.50659f },
	{ 17.49997f, -19.5f, 11.00659f },
	{ -62.50001f, 0, 11.50659f },
	{ -62.50001f, -19.5f, 11.00659f },
	{ -62.50001f, -20, 11.50659f },
	{ -62.50001f, -25, 11.50659f },
	{ -102.5002f, -19.5f, 11.00659f },
	{ -102.5002f, -25, 11.50659f },
	{ -102.5002f, -20, 11.50659f },
	{ -113.5001f, 0, -28.49304f },
	{ -113.5001f, 0, 1.006592f },
	{ 57.49978f, -19.5f, 11.00659f },
	{ 57.49978f, -25, 11.50659f },
	{ 57.49978f, -20, 11.50659f },
	{ 57.48785f, 0, 11.50659f },
	{ -102.5002f, 0, 11.50659f },
	{ 87.49988f, -1.500002f, -28.99805f },
	{ 107.4999f, -19.49999f, -28.99805f },
	{ 137.4999f, -19.49999f, -28.99756f },
	{ 117.4999f, -1.500002f, -31.00671f },
	{ 87.49988f, -1.500002f, -31.00671f },
	{ 67.4999f, 5, -28.49304f },
	{ 66.4999f, -19.5f, -28.99304f },
	{ 67.39996f, 0, 1.006592f },
	{ 67.4999f, 0, -28.49304f },
	{ 182.4999f, 0, -28.49304f },
	{ -112.5004f, -1.5f, -28.99341f },
	{ -112.5004f, -1.5f, 1.006592f },
	{ -162.5001f, -1.5f, -28.99341f },
	{ -102.5002f, -1.5f, 11.00659f },
	{ -61.49982f, -1.5f, 14.00659f },
	{ -53.49982f, -1.5f, 14.00659f },
	{ -52.49982f, -1.5f, 11.50659f },
	{ -62.50002f, -1.5f, 11.00659f },
	{ 66.4999f, -1.5f, 1.006592f },
	{ 182.4999f, -1.5f, -28.99304f },
	{ 66.4999f, -1.5f, -28.99304f },
	{ 7.500122f, -1.5f, 11.50659f },
	{ 8.500121f, -1.5f, 14.00659f },
	{ 16.50015f, -1.5f, 14.00659f },
	{ 17.49997f, -1.5f, 11.00659f },
	{ 57.49978f, -1.5f, 11.00659f },
	{ 87.49988f, -1.500002f, -28.99805f },
	{ 107.4999f, -19.49999f, -28.99805f },
	{ 137.4999f, -19.49999f, -28.99756f },
	{ 117.4999f, -1.500002f, -31.00671f },
	{ 87.49988f, -19.49999f, -31.00671f },
	{ 87.49988f, -1.500002f, -31.00671f },
	{ 67.4999f, 5, -28.49304f },
	{ 66.4999f, -19.5f, -28.99304f },
	{ 66.4999f, -1.5f, -28.99304f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00143178[] = {
	{ -0.228852f, 0.805075f, -0.5472479f },
	{ 0.297109f, 0.630262f, 0.717284f },
	{ 0.227458f, 0.804186f, 0.5491329f },
	{ -0.299711f, 0.629704f, -0.716691f },
	{ -0.227458f, 0.804186f, 0.5491329f },
	{ 0.299047f, 0.627472f, -0.718923f },
	{ -0.001182f, 0.703559f, -0.710636f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0.401996f, 0.607879f, 0.68475f },
	{ -0.271238f, 0.837552f, -0.474275f },
	{ 0, 1, 0 },
	{ 0.706857f, 0.707356f, -0.000392f },
	{ -0.70386f, 0.710269f, -0.009957f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.228412f, 0.804794f, -0.547846f },
	{ -0.297109f, 0.630262f, 0.717284f },
	{ 0.5063339f, -0.001123f, 0.862336f },
	{ 0.382683f, 0, 0.92388f },
	{ -0.001183f, 0.702806f, -0.711381f },
	{ 0, 0, 1 },
	{ -0.382683f, 0, 0.92388f },
	{ 0.382683f, 0, 0.92388f },
	{ -0.382683f, 0, 0.92388f },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -0.7071069f, 0.707106f },
	{ 0, 0, 1 },
	{ 0.274317f, -0.84057f, 0.467111f },
	{ 0, -1, 0 },
	{ -0.297109f, -0.630262f, 0.717284f },
	{ 0.297109f, -0.630262f, 0.717284f },
	{ 0, 0.447214f, 0.8944269f },
	{ 0, 1, 0 },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0.227458f, -0.804186f, 0.5491329f },
	{ 0.401687f, -0.608928f, 0.6839989f },
	{ -0.227458f, -0.804186f, 0.5491329f },
	{ -0.710227f, 0.703901f, -0.010048f },
	{ -0.393161f, 0.610588f, -0.687464f },
	{ 0.228374f, 0.804002f, -0.549023f },
	{ -0.228852f, 0.805075f, -0.5472479f },
	{ 0.298887f, 0.629881f, -0.71688f },
	{ -0.299711f, 0.629704f, -0.716691f },
	{ 0.5063969f, 0, 0.862301f },
	{ 0.382683f, 0, 0.92388f },
	{ 0, 0, 1 },
	{ -0.382683f, 0, 0.92388f },
	{ 0.382683f, 0, 0.92388f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.614996f, 0.769504f, -0.172173f },
	{ -0.728668f, 0.65378f, -0.203997f },
	{ 0.5063969f, 0, 0.862301f },
	{ 0.7071069f, 0.7071069f, -0.000392f },
	{ 0.732372f, 0.653803f, 0.190192f },
	{ 0.779004f, 0.282409f, 0.559819f },
	{ -0.00008f, 0, 1 },
	{ -0.707109f, 0, 0.707104f },
	{ 0.999999f, 0, 0.001694f },
	{ -1, 0, 0 },
	{ -0.278586f, -0.63428f, 0.7211649f },
	{ 0.298804f, -0.629898f, 0.716899f },
	{ 0.384721f, 0, 0.923033f },
	{ -0.360348f, 0, 0.932818f },
	{ 0.924722f, 0, 0.380644f },
	{ 0.7176639f, -0.630627f, 0.295412f },
	{ -0.712828f, -0.626336f, 0.315562f },
	{ -0.9144059f, 0, 0.404798f },
	{ 0.806648f, 0.44672f, 0.386989f },
	{ -0.6430399f, 0.451477f, 0.618602f },
	{ -0.746533f, 0.562197f, 0.355841f },
	{ -0.00005f, 0.287991f, 0.957633f },
	{ -0.00007f, 0.444351f, 0.895853f },
	{ -0.00008f, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0.382683f, 0.92388f },
	{ -0.707109f, 0, 0.707104f },
	{ -0.448981f, 0.650718f, 0.612358f },
	{ -0.919369f, 0, 0.393396f },
	{ -0.8202569f, 0.466475f, 0.331027f },
	{ 0.928476f, 0, 0.371394f },
	{ 0.84655f, 0.409204f, 0.340449f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.448977f, 0.6507199f, 0.612359f },
	{ 0.577442f, 0.5773039f, 0.5773039f },
	{ -0.57736f, -0.577346f, 0.577346f },
	{ 0.577339f, 0.5773579f, 0.5773529f },
	{ 0.577339f, -0.5773579f, 0.5773529f },
	{ -0.57739f, -0.577328f, 0.577332f },
	{ -0.707066f, 0.707148f, 0 },
	{ 0.707148f, 0.707066f, 0 },
	{ -0.707066f, -0.707148f, 0 },
	{ -0.707066f, 0.707148f, 0 },
	{ -0.707066f, -0.707148f, 0 },
	{ 0.513949f, -0.214555f, 0.830555f },
	{ -0.514541f, -0.271154f, 0.813463f },
	{ -0.641692f, 0.3241f, 0.695119f },
	{ 0.6207049f, 0.328865f, 0.71174f },
	{ -0.5198039f, 0.315389f, 0.793936f },
	{ 0.515242f, 0.318603f, 0.795624f },
	{ -0.584686f, 0, 0.81126f },
	{ 0.5847099f, 0, 0.811242f },
	{ -0.530323f, 0.258877f, 0.807304f },
	{ -0.944325f, 0, 0.329015f },
	{ -0.948683f, 0, 0.316228f },
	{ -0.5847099f, 0, 0.811242f },
	{ -0.5043769f, -0.273057f, 0.819172f },
	{ -0.933755f, -0.113182f, 0.339547f },
	{ -0.934253f, 0, 0.356612f },
	{ -0.651944f, 0.200714f, 0.7312199f },
	{ 0.514582f, -0.271147f, 0.81344f },
	{ 0.641754f, 0.324074f, 0.695074f },
	{ 0.5198449f, 0.315383f, 0.793911f },
	{ 0.5847329f, 0, 0.811226f },
	{ 0.939793f, 0, 0.341743f },
	{ 0.92146f, 0.163927f, 0.352191f },
	{ 0.931672f, 0.163922f, 0.324217f },
	{ 0.948683f, 0, 0.316228f },
	{ 0, -0.707106f, 0.7071069f },
	{ -0.00005f, -0.174512f, 0.984655f },
	{ -0.00054f, 0.382683f, 0.92388f },
	{ 0.641754f, 0.324074f, 0.695074f },
	{ 0.5847329f, 0, 0.811226f },
	{ 0.628055f, -0.246079f, 0.738236f },
	{ 0.5198449f, 0.315383f, 0.793911f },
	{ -0.628001f, -0.246092f, 0.738277f },
	{ -0.519803f, 0.315389f, 0.793936f },
	{ -0.641692f, 0.3241f, 0.695119f },
	{ -0.584686f, 0, 0.81126f },
	{ -0.338896f, 0.485963f, 0.805599f },
	{ -0.37192f, 0, 0.928265f },
	{ -0.307287f, 0.400005f, 0.863464f },
	{ -0.615285f, -0.336413f, 0.712917f },
	{ -0.927597f, -0.345211f, 0.142808f },
	{ 0.411539f, 0.386221f, 0.825511f },
	{ 0.393916f, 0, 0.9191459f },
	{ 0.353836f, 0.339276f, 0.871603f },
	{ 0.160703f, -0.894777f, 0.416591f },
	{ -0.170512f, -0.875807f, 0.45154f },
	{ 0.000238f, 0, 1 },
	{ -0.00024f, 0, 1 },
	{ -0.0001f, 0, 1 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0.707191f, 0, 0.707022f },
	{ 0.9195549f, -0.369967f, 0.132449f },
	{ 0.6143129f, -0.335991f, 0.713953f },
	{ 0, -0.160182f, 0.987087f },
	{ -0.696646f, -0.273035f, 0.6634279f },
	{ -0.884057f, -0.22046f, 0.412118f },
	{ -0.00004f, -0.142944f, 0.989731f },
	{ -0.39035f, -0.152958f, 0.907872f },
	{ -0.612626f, -0.130317f, 0.779555f },
	{ 0.59773f, -0.092359f, 0.79636f },
	{ 0.934253f, 0, 0.356612f },
	{ -0.556723f, -0.130537f, 0.8203779f },
	{ 0.88657f, -0.273641f, 0.37298f },
	{ -0.00051f, -0.160182f, 0.987087f },
	{ 0.607729f, -0.584395f, 0.537725f },
	{ -0.932732f, -0.056689f, 0.356086f },
	{ -0.59412f, -0.131353f, 0.793579f },
	{ 0.612677f, -0.13031f, 0.779516f },
	{ 0.5567679f, -0.130533f, 0.820348f },
	{ 0.406093f, -0.208584f, 0.889708f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.70711f, 0.707104f, 0 },
	{ 1, 0, 0 },
	{ 0.707148f, 0.707066f, 0 },
	{ 1, 0, 0 },
	{ 0.7059079f, 0, 0.708304f },
	{ 0.319183f, 0.908406f, 0.270039f },
	{ 0.707191f, 0, 0.707022f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_001439C4 = { vertex_0014292C, normal_00143178, LengthOfArray<Sint32>(vertex_0014292C), meshlist_00142824, matlist_00141F08, LengthOfArray<Uint16>(meshlist_00142824), LengthOfArray<Uint16>(matlist_00141F08), { 9.999892f, 0, -0.00061f }, 175.2645f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_001439EC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001439C4, -357.4999f, 25, 1818.993f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00143A20[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 45, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00143A70[] = {
	0x8000u | 5, 14, 0, 1, 37, 36,
	0x8000u | 8, 1, 2, 14, 35, 32, 21, 22, 23,
	0x8000u | 5, 3, 4, 13, 5, 12,
	0x8000u | 8, 13, 15, 3, 34, 33, 19, 16, 17,
	3, 17, 18, 19,
	3, 20, 21, 23
};

extern "C" __declspec(dllexport) Sint16 poly_00143ABC[] = {
	0x8000u | 5, 2, 1, 4, 36, 5,
	0x8000u | 8, 4, 3, 2, 33, 35, 16, 21, 20,
	4, 7, 0, 6, 37,
	3, 23, 22, 24,
	0x8000u | 7, 24, 25, 22, 29, 32, 30, 14,
	3, 20, 17, 16
};

extern "C" __declspec(dllexport) Sint16 poly_00143B04[] = {
	4, 7, 6, 9, 8,
	3, 24, 25, 27,
	7, 30, 31, 29, 28, 25, 26, 27
};

extern "C" __declspec(dllexport) Sint16 poly_00143B26[] = {
	4, 10, 11, 8, 9
};

extern "C" __declspec(dllexport) NJS_TEX uv_00143B30[] = {
	{ 1682, 255 },
	{ 1874, 255 },
	{ 1874, 0 },
	{ 4080, 255 },
	{ 4080, 0 },
	{ 1874, 0 },
	{ 1682, 0 },
	{ 1682, 255 },
	{ 940, 0 },
	{ 940, 255 },
	{ 191, 0 },
	{ 191, 255 },
	{ 0, 255 },
	{ 1679, 107 },
	{ 1874, 107 },
	{ 1874, 0 },
	{ 4080, 107 },
	{ 4080, 0 },
	{ 1874, 0 },
	{ 1679, 0 },
	{ 1679, 107 },
	{ 933, 0 },
	{ 933, 107 },
	{ 186, 0 },
	{ 186, 107 },
	{ 0, 107 },
	{ 0, 107 },
	{ 0 },
	{ 186, 0 },
	{ 0 },
	{ 191, 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00143BB0[] = {
	{ 3594, 255 },
	{ 3305, 255 },
	{ 3305, 0 },
	{ 0, 255 },
	{ 0 },
	{ 3305, 0 },
	{ 3600, 0 },
	{ 3594, 255 },
	{ 4717, 0 },
	{ 4708, 255 },
	{ 5838, 0 },
	{ 5832, 255 },
	{ 6120, 255 },
	{ 0, 255 },
	{ 0 },
	{ 4080, 255 },
	{ 4080, 0 },
	{ 0 },
	{ 464, 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 452, 255 },
	{ 464, 0 },
	{ 2269, 255 },
	{ 2279, 0 },
	{ 4080, 255 },
	{ 4080, 0 },
	{ 6120, 255 },
	{ 6120, 0 },
	{ 5838, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00143C28[] = {
	{ 3060, 0 },
	{ 0 },
	{ 3060, 255 },
	{ 0, 255 },
	{ 0 },
	{ 452, 0 },
	{ 0, 255 },
	{ 4080, 0 },
	{ 4080, 255 },
	{ 2269, 0 },
	{ 2269, 255 },
	{ 452, 0 },
	{ 452, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00143C60[] = {
	{ 0, 255 },
	{ 2040, 255 },
	{ 0 },
	{ 2040, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00143C70[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_00143A70, NULL, NULL, NULL, uv_00143B30, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_00143ABC, NULL, NULL, NULL, uv_00143BB0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_00143B04, NULL, NULL, NULL, uv_00143C28, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_00143B26, NULL, NULL, NULL, uv_00143C60, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00143CD0[] = {
	{ 152.5003f, -12, 264.5f },
	{ 152.5003f, 6, 264.5f },
	{ 172.4789f, 6, 244.5f },
	{ 173.4789f, 7.5f, 245 },
	{ 153.0003f, 7.5f, 265.5f },
	{ -172.5f, 7.5f, 265.5f },
	{ -172.5f, -12.5f, 265.5f },
	{ 153.0003f, -12.5f, 265.5f },
	{ -172.5f, -17.5f, 265.5f },
	{ 153.0003f, -17.5f, 265.5f },
	{ -172.5f, -27.5f, 265.5f },
	{ 153.0003f, -27.5f, 265.5f },
	{ -172.5f, 12.5f, 265.5f },
	{ 153.0003f, 12.5f, 265.5f },
	{ 172.4789f, -12.04998f, 244.5f },
	{ 173.4789f, 12.5f, 245 },
	{ 173.4999f, 7.5f, 24.5f },
	{ 193, 7.5f, 4.999634f },
	{ 193, 12.5f, 5 },
	{ 173.4999f, 12.5f, 24.5f },
	{ 192.5f, 6, 4.5f },
	{ 172.4999f, 6, 24.5f },
	{ 172.4999f, -12.04998f, 24.5f },
	{ 192.5f, -12.00001f, 4.5f },
	{ 193, -12.50001f, 5 },
	{ 173.4999f, -12.50001f, 24.5f },
	{ 173.4999f, -17.50001f, 24.5f },
	{ 193, -17.50001f, 5 },
	{ 173.4893f, -17.50001f, 135 },
	{ 173.4893f, -12.50001f, 135 },
	{ 173.4789f, -12.50001f, 245 },
	{ 173.4789f, -17.50001f, 245 },
	{ 172.4893f, -12.04998f, 135 },
	{ 173.4893f, 7.5f, 135 },
	{ 173.4893f, 12.5f, 135 },
	{ 172.4893f, 6, 135 },
	{ -172.5f, 5.999998f, 264.4956f },
	{ -172.5f, -11.99999f, 264.4956f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00143E98[] = {
	{ 0.268523f, 0.430076f, 0.8619339f },
	{ 0.354635f, -0.339861f, 0.8710499f },
	{ 0.8713779f, -0.339481f, 0.354192f },
	{ 0.881942f, -0.293619f, 0.368737f },
	{ 0.369151f, -0.29387f, 0.881685f },
	{ -0.00006f, -0.290268f, 0.9569449f },
	{ 0, 0.526103f, 0.850421f },
	{ 0, 0.442776f, 0.896632f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.382925f, 0.000001f, 0.92378f },
	{ 0.853939f, 0.444526f, 0.270526f },
	{ 0.923961f, 0, 0.382486f },
	{ 0.873466f, -0.284906f, 0.394822f },
	{ 0.690033f, -0.218428f, 0.690031f },
	{ 0.707108f, -0.00052f, 0.707106f },
	{ 0.923862f, -0.0003f, 0.382727f },
	{ 0.690033f, -0.218421f, 0.690034f },
	{ 0.8989249f, -0.259897f, 0.352687f },
	{ 0.814638f, 0.482924f, 0.321168f },
	{ 0.61983f, 0.480483f, 0.620441f },
	{ 0.619664f, 0.480908f, 0.620277f },
	{ 0.732942f, 0.5859039f, 0.345707f },
	{ 0.923861f, 0, 0.382729f },
	{ 0.707105f, 0, 0.707109f },
	{ 1, 0, 0.000095f },
	{ 0.839755f, 0.5429659f, 0.00008f },
	{ 0.890471f, 0.455039f, 0.000085f },
	{ 1, 0, 0.000095f },
	{ 0.839755f, 0.5429659f, 0.00008f },
	{ 0.957091f, -0.289787f, 0.00009099999f },
	{ 1, -0.00003f, 0.000095f },
	{ 0.957092f, -0.289785f, 0.00009099999f },
	{ -0.00013f, -0.290267f, 0.956946f },
	{ -0.00008f, 0.526101f, 0.850422f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00144060 = { vertex_00143CD0, normal_00143E98, LengthOfArray<Sint32>(vertex_00143CD0), meshlist_00143C70, matlist_00143A20, LengthOfArray<Uint16>(meshlist_00143C70), LengthOfArray<Uint16>(matlist_00143A20), { 10.25f, -7.5f, 135 }, 224.5614f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00144088 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00144060, -712.5f, 17.5f, 1785.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_001440BC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 52, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 46, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 46, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 51, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 47, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 47, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 51, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_001441AC[] = {
	4, 0, 1, 3, 2,
	4, 11, 9, 10, 8,
	4, 17, 15, 16, 14,
	4, 29, 27, 28, 26,
	4, 35, 33, 34, 32,
	4, 41, 39, 40, 38,
	4, 47, 45, 46, 44,
	4, 53, 51, 52, 50,
	4, 59, 57, 58, 56,
	4, 73, 74, 76, 75
};

extern "C" __declspec(dllexport) Sint16 poly_00144210[] = {
	6, 3, 2, 4, 5, 0, 1,
	6, 76, 75, 77, 78, 73, 74
};

extern "C" __declspec(dllexport) Sint16 poly_0014422C[] = {
	4, 9, 7, 8, 6,
	4, 15, 13, 14, 12,
	4, 21, 19, 20, 18,
	4, 27, 25, 26, 24,
	4, 33, 31, 32, 30,
	4, 39, 37, 38, 36,
	4, 45, 43, 44, 42,
	4, 51, 49, 50, 48,
	4, 57, 55, 56, 54
};

extern "C" __declspec(dllexport) Sint16 poly_00144286[] = {
	4, 7, 11, 6, 10,
	4, 13, 17, 12, 16,
	4, 19, 23, 18, 22,
	4, 25, 29, 24, 28,
	4, 31, 35, 30, 34,
	4, 37, 41, 36, 40,
	4, 43, 47, 42, 46,
	4, 49, 53, 48, 52,
	4, 55, 59, 54, 58
};

extern "C" __declspec(dllexport) Sint16 poly_001442E0[] = {
	4, 23, 21, 22, 20
};

extern "C" __declspec(dllexport) Sint16 poly_001442EA[] = {
	3, 98, 96, 72,
	5, 96, 97, 72, 99, 98
};

extern "C" __declspec(dllexport) Sint16 poly_001442FE[] = {
	4, 62, 63, 60, 61,
	4, 67, 70, 66, 69,
	4, 81, 82, 79, 80,
	4, 86, 89, 85, 88
};

extern "C" __declspec(dllexport) Sint16 poly_00144326[] = {
	0x8000u | 6, 70, 71, 67, 68, 63, 65,
	0x8000u | 6, 71, 70, 64, 62, 65, 63,
	0x8000u | 6, 89, 90, 86, 87, 82, 84,
	0x8000u | 6, 90, 89, 83, 81, 84, 82
};

extern "C" __declspec(dllexport) Sint16 poly_0014435E[] = {
	4, 63, 67, 61, 66,
	4, 70, 62, 69, 60,
	4, 82, 86, 80, 85,
	4, 89, 81, 88, 79
};

extern "C" __declspec(dllexport) Sint16 poly_00144386[] = {
	3, 94, 92, 91,
	5, 92, 93, 91, 95, 94
};

extern "C" __declspec(dllexport) Sint16 poly_0014439A[] = {
	4, 93, 92, 79, 88,
	4, 94, 95, 85, 80,
	4, 97, 96, 60, 69,
	4, 98, 99, 66, 61
};

extern "C" __declspec(dllexport) Sint16 poly_001443C2[] = {
	4, 92, 94, 88, 85,
	4, 95, 93, 80, 79,
	4, 96, 98, 69, 66,
	4, 99, 97, 61, 60
};

extern "C" __declspec(dllexport) NJS_TEX uv_001443EC[] = {
	{ 255, 254 },
	{ 254, -2294 },
	{ 0, 254 },
	{ 0, -2294 },
	{ 0, -510 },
	{ 254, -510 },
	{ 0, 254 },
	{ 254, 254 },
	{ 0, -510 },
	{ 254, -510 },
	{ 0, 254 },
	{ 254, 254 },
	{ 0, -510 },
	{ 254, -510 },
	{ 0, 254 },
	{ 254, 254 },
	{ 0, -510 },
	{ 254, -510 },
	{ 0, 254 },
	{ 254, 254 },
	{ 0, -510 },
	{ 254, -510 },
	{ 0, 254 },
	{ 254, 254 },
	{ 0, -510 },
	{ 254, -510 },
	{ 0, 254 },
	{ 254, 254 },
	{ 0, -510 },
	{ 254, -510 },
	{ 0, 254 },
	{ 254, 254 },
	{ 0, -510 },
	{ 254, -510 },
	{ 0, 254 },
	{ 254, 254 },
	{ 255, 254 },
	{ 254, -2294 },
	{ 0, 254 },
	{ 0, -2294 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014448C[] = {
	{ 2549, 254 },
	{ 0, 254 },
	{ 2549, 0 },
	{ 0 },
	{ 2549, -255 },
	{ 0, -255 },
	{ 2549, 254 },
	{ 0, 254 },
	{ 2549, 0 },
	{ 0 },
	{ 2549, -255 },
	{ 0, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001444BC[] = {
	{ 0, 254 },
	{ 255, 254 },
	{ 0, -510 },
	{ 255, -510 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0, -510 },
	{ 255, -510 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0, -510 },
	{ 255, -510 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0, -510 },
	{ 255, -510 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0, -510 },
	{ 255, -510 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0, -510 },
	{ 255, -510 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0, -510 },
	{ 255, -510 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0, -510 },
	{ 255, -510 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0, -510 },
	{ 255, -510 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014454C[] = {
	{ 254, -510 },
	{ 0, -510 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, -510 },
	{ 0, -510 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, -510 },
	{ 0, -510 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, -510 },
	{ 0, -510 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, -510 },
	{ 0, -510 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, -510 },
	{ 0, -510 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, -510 },
	{ 0, -510 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, -510 },
	{ 0, -510 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, -510 },
	{ 0, -510 },
	{ 254, 254 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001445DC[] = {
	{ 0, -510 },
	{ 254, -510 },
	{ 0, 254 },
	{ 254, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001445EC[] = {
	{ 254, 0 },
	{ 254, 254 },
	{ 127, 127 },
	{ 254, 254 },
	{ 0, 255 },
	{ 127, 127 },
	{ 0 },
	{ 254, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014460C[] = {
	{ 0, 254 },
	{ 254, 254 },
	{ 0, -255 },
	{ 254, -255 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, -255 },
	{ 0, -255 },
	{ 0, 254 },
	{ 254, 254 },
	{ 0, -255 },
	{ 254, -255 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, -255 },
	{ 0, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014464C[] = {
	{ 0 },
	{ 0, 254 },
	{ 508, 0 },
	{ 508, 254 },
	{ 0 },
	{ 0, 254 },
	{ 510, 254 },
	{ 510, 0 },
	{ 0, 254 },
	{ 0 },
	{ 508, 254 },
	{ 508, 0 },
	{ 0 },
	{ 0, 254 },
	{ 508, 0 },
	{ 508, 254 },
	{ 0 },
	{ 0, 254 },
	{ 510, 254 },
	{ 510, 0 },
	{ 0, 254 },
	{ 0 },
	{ 508, 254 },
	{ 508, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001446AC[] = {
	{ 0, 254 },
	{ 255, 254 },
	{ 0, -255 },
	{ 255, -255 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, -255 },
	{ 0, -255 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0, -255 },
	{ 255, -255 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, -255 },
	{ 0, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001446EC[] = {
	{ 254, 255 },
	{ 254, 0 },
	{ 127, 127 },
	{ 254, 0 },
	{ 0 },
	{ 127, 127 },
	{ 0, 254 },
	{ 254, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014470C[] = {
	{ 0 },
	{ 254, 0 },
	{ 26, 254 },
	{ 228, 254 },
	{ 254, 0 },
	{ 0 },
	{ 228, 254 },
	{ 26, 254 },
	{ 0 },
	{ 254, 0 },
	{ 26, 254 },
	{ 228, 254 },
	{ 254, 0 },
	{ 0 },
	{ 228, 254 },
	{ 26, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014474C[] = {
	{ 0 },
	{ 255, 0 },
	{ 26, 254 },
	{ 228, 254 },
	{ 254, 0 },
	{ 0 },
	{ 228, 254 },
	{ 26, 254 },
	{ 0 },
	{ 255, 0 },
	{ 26, 254 },
	{ 228, 254 },
	{ 254, 0 },
	{ 0 },
	{ 228, 254 },
	{ 26, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0014478C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 10, poly_001441AC, NULL, NULL, NULL, uv_001443EC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00144210, NULL, NULL, NULL, uv_0014448C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 9, poly_0014422C, NULL, NULL, NULL, uv_001444BC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 9, poly_00144286, NULL, NULL, NULL, uv_0014454C, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_001442E0, NULL, NULL, NULL, uv_001445DC, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, poly_001442EA, NULL, NULL, NULL, uv_001445EC, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 4, poly_001442FE, NULL, NULL, NULL, uv_0014460C, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 4, poly_00144326, NULL, NULL, NULL, uv_0014464C, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 4, poly_0014435E, NULL, NULL, NULL, uv_001446AC, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 2, poly_00144386, NULL, NULL, NULL, uv_001446EC, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 4, poly_0014439A, NULL, NULL, NULL, uv_0014470C, NULL },
	{ NJD_MESHSET_TRIMESH | 11, 4, poly_001443C2, NULL, NULL, NULL, uv_0014474C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_001448AC[] = {
	{ 26, 1.5f, 1.099976f },
	{ -26, 1.5f, 1.099976f },
	{ -26, 1.5f, -1 },
	{ 26, 1.5f, -1 },
	{ 26, 2.5f, 0.050049f },
	{ -26, 2.5f, 0.050049f },
	{ 15, 1.5f, 1 },
	{ 15, 9.5f, 1 },
	{ 15.86603f, 1.5f, -0.5f },
	{ 15.86603f, 9.5f, -0.5f },
	{ 14.13397f, 1.5f, -0.5f },
	{ 14.13397f, 9.5f, -0.5f },
	{ 5, 1.5f, 1 },
	{ 5, 9.5f, 1 },
	{ 5.866028f, 1.5f, -0.5f },
	{ 5.866028f, 9.5f, -0.5f },
	{ 4.133972f, 1.5f, -0.5f },
	{ 4.133972f, 9.5f, -0.5f },
	{ -5, 1.5f, 1 },
	{ -5, 9.5f, 1 },
	{ -4.133972f, 1.5f, -0.5f },
	{ -4.133972f, 9.5f, -0.5f },
	{ -5.866028f, 1.5f, -0.5f },
	{ -5.866028f, 9.5f, -0.5f },
	{ -15, 1.5f, 1 },
	{ -15, 9.5f, 1 },
	{ -14.13397f, 1.5f, -0.5f },
	{ -14.13397f, 9.5f, -0.5f },
	{ -15.86603f, 1.5f, -0.5f },
	{ -15.86603f, 9.5f, -0.5f },
	{ 20, 1.5f, 1 },
	{ 20, 9.5f, 1 },
	{ 20.86603f, 1.5f, -0.5f },
	{ 20.86603f, 9.5f, -0.5f },
	{ 19.13397f, 1.5f, -0.5f },
	{ 19.13397f, 9.5f, -0.5f },
	{ 10, 1.5f, 1 },
	{ 10, 9.5f, 1 },
	{ 10.86603f, 1.5f, -0.5f },
	{ 10.86603f, 9.5f, -0.5f },
	{ 9.133971f, 1.5f, -0.5f },
	{ 9.133971f, 9.5f, -0.5f },
	{ 0, 1.5f, 1 },
	{ 0, 9.5f, 1 },
	{ 0.866028f, 1.5f, -0.5f },
	{ 0.866028f, 9.5f, -0.5f },
	{ -0.866028f, 1.5f, -0.5f },
	{ -0.866028f, 9.5f, -0.5f },
	{ -10, 1.5f, 1 },
	{ -10, 9.5f, 1 },
	{ -9.133971f, 1.5f, -0.5f },
	{ -9.133971f, 9.5f, -0.5f },
	{ -10.86603f, 1.5f, -0.5f },
	{ -10.86603f, 9.5f, -0.5f },
	{ -20, 1.5f, 1 },
	{ -20, 9.5f, 1 },
	{ -19.13397f, 1.5f, -0.5f },
	{ -19.13397f, 9.5f, -0.5f },
	{ -20.86603f, 1.5f, -0.5f },
	{ -20.86603f, 9.5f, -0.5f },
	{ 26, 11.5f, -1.5f },
	{ 26, 11.5f, 1.5f },
	{ 26, 1.5f, -1.5f },
	{ 26, 1.5f, 1.5f },
	{ 26, 0, -1.5f },
	{ 26, 0, 1.5f },
	{ 29, 11.5f, 1.5f },
	{ 29, 1.5f, 1.5f },
	{ 29, 0, 1.5f },
	{ 29, 11.5f, -1.5f },
	{ 29, 1.5f, -1.5f },
	{ 29, 0, -1.5f },
	{ 27.5f, 14.5f, 0 },
	{ 26, 9.5f, 1.099976f },
	{ -26, 9.5f, 1.099976f },
	{ -26, 9.5f, -1 },
	{ 26, 9.5f, -1 },
	{ 26, 10.5f, 0.050049f },
	{ -26, 10.5f, 0.050049f },
	{ -29, 11.5f, -1.5f },
	{ -29, 11.5f, 1.5f },
	{ -29, 1.5f, -1.5f },
	{ -29, 1.5f, 1.5f },
	{ -29, 0, -1.5f },
	{ -29, 0, 1.5f },
	{ -26, 11.5f, 1.5f },
	{ -26, 1.5f, 1.5f },
	{ -26, 0, 1.5f },
	{ -26, 11.5f, -1.5f },
	{ -26, 1.5f, -1.5f },
	{ -26, 0, -1.5f },
	{ -27.5f, 14.5f, 0 },
	{ -25.6f, 13.5f, -1.9f },
	{ -29.4f, 13.5f, -1.9f },
	{ -25.6f, 13.5f, 1.9f },
	{ -29.4f, 13.5f, 1.9f },
	{ 29.4f, 13.5f, -1.9f },
	{ 25.6f, 13.5f, -1.9f },
	{ 29.4f, 13.5f, 1.9f },
	{ 25.6f, 13.5f, 1.9f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00144D5C[] = {
	{ 0, -0.371407f, 0.92847f },
	{ 0, -0.371407f, 0.92847f },
	{ 0, -0.37138f, -0.928481f },
	{ 0, -0.37138f, -0.928481f },
	{ 0, 1, 0.000029f },
	{ 0, 1, 0.000029f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.866026f, 0, -0.499999f },
	{ 0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.866026f, 0, -0.499999f },
	{ 0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.866026f, 0, -0.499999f },
	{ 0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.866026f, 0, -0.499999f },
	{ 0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.866026f, 0, -0.499999f },
	{ 0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.866026f, 0, -0.499999f },
	{ 0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.866026f, 0, -0.499999f },
	{ 0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.866026f, 0, -0.499999f },
	{ 0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.866026f, 0, -0.499999f },
	{ 0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ -0.699462f, -0.146647f, -0.699462f },
	{ -0.699462f, -0.146647f, 0.699462f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.699462f, -0.146647f, 0.699462f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.699462f, -0.146647f, -0.699462f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0, 1, 0 },
	{ 0, -0.371407f, 0.92847f },
	{ 0, -0.371407f, 0.92847f },
	{ 0, -0.37138f, -0.928481f },
	{ 0, -0.37138f, -0.928481f },
	{ 0, 1, 0.000029f },
	{ 0, 1, 0.000029f },
	{ -0.699462f, -0.146647f, -0.699462f },
	{ -0.699462f, -0.146647f, 0.699462f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.699462f, -0.146647f, 0.699462f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.699462f, -0.146647f, -0.699462f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0, 1, 0 },
	{ 0.659179f, 0.361893f, -0.659179f },
	{ -0.659179f, 0.361893f, -0.659179f },
	{ 0.659179f, 0.361893f, 0.659179f },
	{ -0.659179f, 0.361893f, 0.659179f },
	{ 0.659179f, 0.361893f, -0.659179f },
	{ -0.659179f, 0.361893f, -0.659179f },
	{ 0.659179f, 0.361893f, 0.659179f },
	{ -0.659179f, 0.361893f, 0.659179f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0014520C = { vertex_001448AC, normal_00144D5C, LengthOfArray<Sint32>(vertex_001448AC), meshlist_0014478C, matlist_001440BC, LengthOfArray<Uint16>(meshlist_0014478C), LengthOfArray<Uint16>(matlist_001440BC), { 0, 7.25f, 0 }, 29.46133f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00145234 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014520C, -294.9998f, 39, 1642.499f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00145268[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 52, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 46, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 46, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 46, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 51, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 47, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 47, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00145344[] = {
	4, 0, 1, 3, 2,
	4, 61, 62, 64, 63
};

extern "C" __declspec(dllexport) Sint16 poly_00145358[] = {
	6, 3, 2, 4, 5, 0, 1,
	6, 64, 63, 65, 66, 61, 62
};

extern "C" __declspec(dllexport) Sint16 poly_00145374[] = {
	0x8000u | 6, 84, 57, 86, 54, 87, 49,
	0x8000u | 6, 57, 84, 48, 85, 49, 87,
	0x8000u | 6, 76, 80, 67, 81, 68, 83,
	0x8000u | 6, 80, 76, 82, 73, 83, 68
};

extern "C" __declspec(dllexport) Sint16 poly_001453AC[] = {
	4, 11, 9, 10, 8
};

extern "C" __declspec(dllexport) Sint16 poly_001453B6[] = {
	4, 9, 7, 8, 6,
	4, 7, 11, 6, 10,
	0x8000u | 8, 13, 12, 17, 16, 15, 14, 13, 12,
	0x8000u | 8, 19, 18, 23, 22, 21, 20, 19, 18,
	0x8000u | 8, 25, 24, 29, 28, 27, 26, 25, 24,
	0x8000u | 8, 31, 30, 35, 34, 33, 32, 31, 30,
	0x8000u | 8, 37, 36, 41, 40, 39, 38, 37, 36,
	4, 45, 43, 44, 42,
	4, 43, 47, 42, 46
};

extern "C" __declspec(dllexport) Sint16 poly_00145438[] = {
	4, 47, 45, 46, 44
};

extern "C" __declspec(dllexport) Sint16 poly_00145442[] = {
	3, 86, 84, 60,
	5, 84, 85, 60, 87, 86,
	3, 82, 80, 79,
	5, 80, 81, 79, 83, 82
};

extern "C" __declspec(dllexport) Sint16 poly_0014546A[] = {
	4, 50, 51, 48, 49,
	4, 55, 58, 54, 57,
	4, 69, 70, 67, 68,
	4, 74, 77, 73, 76
};

extern "C" __declspec(dllexport) Sint16 poly_00145492[] = {
	4, 52, 53, 50, 51,
	4, 56, 59, 55, 58,
	0x8000u | 6, 77, 78, 74, 75, 70, 72,
	0x8000u | 6, 78, 77, 71, 69, 72, 70
};

extern "C" __declspec(dllexport) Sint16 poly_001454C2[] = {
	4, 51, 55, 49, 54,
	4, 58, 50, 57, 48,
	4, 70, 74, 68, 73,
	4, 77, 69, 76, 67
};

extern "C" __declspec(dllexport) Sint16 poly_001454EA[] = {
	4, 53, 56, 51, 55,
	4, 59, 52, 58, 50
};

extern "C" __declspec(dllexport) NJS_TEX uv_00145500[] = {
	{ 254, 254 },
	{ 254, -2294 },
	{ 0, 254 },
	{ 0, -2294 },
	{ 254, 254 },
	{ 254, -2294 },
	{ 0, 254 },
	{ 0, -2294 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00145520[] = {
	{ 2549, 254 },
	{ 0, 254 },
	{ 2549, 0 },
	{ 0 },
	{ 2549, -254 },
	{ 0, -255 },
	{ 2549, 254 },
	{ 0, 254 },
	{ 2549, 0 },
	{ 0 },
	{ 2549, -254 },
	{ 0, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00145550[] = {
	{ 0 },
	{ 26, 254 },
	{ 254, 0 },
	{ 228, 254 },
	{ 0 },
	{ 26, 254 },
	{ 228, 254 },
	{ 255, 0 },
	{ 26, 254 },
	{ 0 },
	{ 228, 254 },
	{ 254, 0 },
	{ 228, 254 },
	{ 254, 0 },
	{ 26, 254 },
	{ 0 },
	{ 228, 254 },
	{ 254, 0 },
	{ 0 },
	{ 26, 254 },
	{ 255, 0 },
	{ 228, 254 },
	{ 0 },
	{ 26, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001455B0[] = {
	{ 0, -510 },
	{ 254, -510 },
	{ 0, 254 },
	{ 254, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001455C0[] = {
	{ 255, -510 },
	{ 0, -510 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, -510 },
	{ 0, -510 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, -510 },
	{ 255, 254 },
	{ 0, -510 },
	{ 0, 254 },
	{ 255, -510 },
	{ 255, 254 },
	{ 0, -510 },
	{ 0, 254 },
	{ 255, -510 },
	{ 255, 254 },
	{ 0, -510 },
	{ 0, 254 },
	{ 255, -510 },
	{ 255, 254 },
	{ 0, -510 },
	{ 0, 254 },
	{ 255, -510 },
	{ 255, 254 },
	{ 0, -510 },
	{ 0, 254 },
	{ 254, -510 },
	{ 254, 254 },
	{ 0, -510 },
	{ 0, 254 },
	{ 255, -510 },
	{ 255, 254 },
	{ 0, -510 },
	{ 0, 254 },
	{ 254, -510 },
	{ 254, 254 },
	{ 0, -510 },
	{ 0, 254 },
	{ 255, -510 },
	{ 255, 254 },
	{ 0, -510 },
	{ 0, 254 },
	{ 254, -510 },
	{ 254, 254 },
	{ 0, -510 },
	{ 0, 254 },
	{ 255, -510 },
	{ 0, -510 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, -510 },
	{ 0, -510 },
	{ 255, 254 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001456A0[] = {
	{ 0, -510 },
	{ 255, -510 },
	{ 0, 254 },
	{ 255, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001456B0[] = {
	{ 255, 0 },
	{ 255, 254 },
	{ 127, 127 },
	{ 255, 254 },
	{ 0, 255 },
	{ 127, 127 },
	{ 0 },
	{ 255, 0 },
	{ 254, 0 },
	{ 254, 255 },
	{ 127, 127 },
	{ 254, 255 },
	{ 0, 255 },
	{ 127, 127 },
	{ 0 },
	{ 254, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001456F0[] = {
	{ 0, 254 },
	{ 254, 254 },
	{ 0, -255 },
	{ 254, -255 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, -255 },
	{ 0, -255 },
	{ 0, 254 },
	{ 254, 254 },
	{ 0, -255 },
	{ 254, -255 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, -255 },
	{ 0, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00145730[] = {
	{ 0, 254 },
	{ 508, 254 },
	{ 0 },
	{ 508, 0 },
	{ 508, 254 },
	{ 0, 254 },
	{ 508, 0 },
	{ 0 },
	{ 0 },
	{ 0, 254 },
	{ 508, 0 },
	{ 508, 254 },
	{ 0 },
	{ 0, 254 },
	{ 510, 254 },
	{ 510, 0 },
	{ 0, 254 },
	{ 0 },
	{ 508, 254 },
	{ 508, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00145780[] = {
	{ 0, 254 },
	{ 255, 254 },
	{ 0, -255 },
	{ 255, -255 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, -255 },
	{ 0, -255 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0, -255 },
	{ 255, -255 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, -255 },
	{ 0, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001457C0[] = {
	{ 0, 254 },
	{ 510, 254 },
	{ 0 },
	{ 510, 0 },
	{ 510, 254 },
	{ 0, 254 },
	{ 510, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_001457E0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00145344, NULL, NULL, NULL, uv_00145500, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00145358, NULL, NULL, NULL, uv_00145520, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_00145374, NULL, NULL, NULL, uv_00145550, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_001453AC, NULL, NULL, NULL, uv_001455B0, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 9, poly_001453B6, NULL, NULL, NULL, uv_001455C0, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_00145438, NULL, NULL, NULL, uv_001456A0, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 4, poly_00145442, NULL, NULL, NULL, uv_001456B0, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 4, poly_0014546A, NULL, NULL, NULL, uv_001456F0, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 4, poly_00145492, NULL, NULL, NULL, uv_00145730, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 4, poly_001454C2, NULL, NULL, NULL, uv_00145780, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 2, poly_001454EA, NULL, NULL, NULL, uv_001457C0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_001458E8[] = {
	{ 15.99996f, 1.5f, 1.099967f },
	{ -26.00004f, 1.5f, 1.099971f },
	{ -26.00004f, 1.5f, -1.000005f },
	{ 15.99996f, 1.5f, -1.000008f },
	{ 15.99996f, 2.5f, 0.050041f },
	{ -26.00004f, 2.5f, 0.050044f },
	{ 4.999959f, 1.5f, 0.9999959f },
	{ 4.999959f, 9.5f, 0.9999959f },
	{ 5.865986f, 1.5f, -0.500004f },
	{ 5.865986f, 9.5f, -0.500004f },
	{ 4.133931f, 1.5f, -0.500004f },
	{ 4.133931f, 9.5f, -0.500004f },
	{ -5.000041f, 1.5f, 0.9999959f },
	{ -5.000041f, 9.5f, 0.9999959f },
	{ -4.134014f, 1.5f, -0.500004f },
	{ -4.134014f, 9.5f, -0.500004f },
	{ -5.866069f, 1.5f, -0.500004f },
	{ -5.866069f, 9.5f, -0.500004f },
	{ -15.00004f, 1.5f, 0.9999959f },
	{ -15.00004f, 9.5f, 0.9999959f },
	{ -14.13401f, 1.5f, -0.500004f },
	{ -14.13401f, 9.5f, -0.500004f },
	{ -15.86607f, 1.5f, -0.500004f },
	{ -15.86607f, 9.5f, -0.500004f },
	{ 9.99996f, 1.5f, 0.9999959f },
	{ 9.99996f, 9.5f, 0.9999959f },
	{ 10.86599f, 1.5f, -0.500004f },
	{ 10.86599f, 9.5f, -0.500004f },
	{ 9.133931f, 1.5f, -0.500004f },
	{ 9.133931f, 9.5f, -0.500004f },
	{ -0.00041f, 1.5f, 0.9999959f },
	{ -0.00041f, 9.5f, 0.9999959f },
	{ 0.8659869f, 1.5f, -0.500004f },
	{ 0.8659869f, 9.5f, -0.500004f },
	{ -0.866069f, 1.5f, -0.500004f },
	{ -0.866069f, 9.5f, -0.500004f },
	{ -10.00004f, 1.5f, 0.9999959f },
	{ -10.00004f, 9.5f, 0.9999959f },
	{ -9.134011f, 1.5f, -0.500004f },
	{ -9.134011f, 9.5f, -0.500004f },
	{ -10.86607f, 1.5f, -0.500004f },
	{ -10.86607f, 9.5f, -0.500004f },
	{ -20.00004f, 1.5f, 0.9999959f },
	{ -20.00004f, 9.5f, 0.9999959f },
	{ -19.13401f, 1.5f, -0.500004f },
	{ -19.13401f, 9.5f, -0.500004f },
	{ -20.86607f, 1.5f, -0.500004f },
	{ -20.86607f, 9.5f, -0.500004f },
	{ 15.99996f, 11.5f, -1.500008f },
	{ 15.99996f, 11.5f, 1.499992f },
	{ 15.99996f, 1.5f, -1.500008f },
	{ 15.99996f, 1.5f, 1.499992f },
	{ 15.99996f, 0, -1.500008f },
	{ 15.99996f, 0, 1.499992f },
	{ 18.99996f, 11.5f, 1.499992f },
	{ 18.99996f, 1.5f, 1.499992f },
	{ 18.99996f, 0, 1.499992f },
	{ 18.99996f, 11.5f, -1.500008f },
	{ 18.99996f, 1.5f, -1.500008f },
	{ 18.99996f, 0, -1.500008f },
	{ 17.49996f, 14.5f, -0.00008f },
	{ 15.99996f, 9.5f, 1.099967f },
	{ -26.00004f, 9.5f, 1.099971f },
	{ -26.00004f, 9.5f, -1.000005f },
	{ 15.99996f, 9.5f, -1.000008f },
	{ 15.99996f, 10.5f, 0.050041f },
	{ -26.00004f, 10.5f, 0.050044f },
	{ -29.00004f, 11.5f, -1.500005f },
	{ -29.00004f, 11.5f, 1.499995f },
	{ -29.00004f, 1.5f, -1.500005f },
	{ -29.00004f, 1.5f, 1.499995f },
	{ -29.00004f, 0, -1.500005f },
	{ -29.00004f, 0, 1.499995f },
	{ -26.00004f, 11.5f, 1.499995f },
	{ -26.00004f, 1.5f, 1.499995f },
	{ -26.00004f, 0, 1.499995f },
	{ -26.00004f, 11.5f, -1.500005f },
	{ -26.00004f, 1.5f, -1.500005f },
	{ -26.00004f, 0, -1.500005f },
	{ -27.50004f, 14.5f, -0.00005f },
	{ -25.60004f, 13.5f, -1.900005f },
	{ -29.40004f, 13.5f, -1.900005f },
	{ -25.60004f, 13.5f, 1.899995f },
	{ -29.40004f, 13.5f, 1.899995f },
	{ 19.39996f, 13.5f, -1.900008f },
	{ 15.59996f, 13.5f, -1.900008f },
	{ 19.39996f, 13.5f, 1.899992f },
	{ 15.59996f, 13.5f, 1.899992f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00145D08[] = {
	{ 0, -0.371407f, 0.92847f },
	{ 0, -0.371407f, 0.92847f },
	{ 0, -0.37138f, -0.928481f },
	{ 0, -0.37138f, -0.928481f },
	{ 0, 1, 0.000029f },
	{ 0, 1, 0.000029f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.866026f, 0, -0.499999f },
	{ 0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.866026f, 0, -0.499999f },
	{ 0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.866026f, 0, -0.499999f },
	{ 0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.866026f, 0, -0.499999f },
	{ 0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.866026f, 0, -0.499999f },
	{ 0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.866026f, 0, -0.499999f },
	{ 0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.866026f, 0, -0.499999f },
	{ 0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ -0.866026f, 0, -0.499999f },
	{ -0.699462f, -0.146647f, -0.699462f },
	{ -0.699462f, -0.146647f, 0.699462f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.699462f, -0.146647f, 0.699462f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.699462f, -0.146647f, -0.699462f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0, 1, 0 },
	{ 0, -0.371407f, 0.92847f },
	{ 0, -0.371407f, 0.92847f },
	{ 0, -0.37138f, -0.928481f },
	{ 0, -0.37138f, -0.928481f },
	{ 0, 1, 0.000029f },
	{ 0, 1, 0.000029f },
	{ -0.699462f, -0.146647f, -0.699462f },
	{ -0.699462f, -0.146647f, 0.699462f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.699462f, -0.146647f, 0.699462f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.699462f, -0.146647f, -0.699462f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0, 1, 0 },
	{ 0.659179f, 0.361893f, -0.659179f },
	{ -0.659179f, 0.361893f, -0.659179f },
	{ 0.659179f, 0.361893f, 0.659179f },
	{ -0.659179f, 0.361893f, 0.659179f },
	{ 0.659179f, 0.361893f, -0.659179f },
	{ -0.659179f, 0.361893f, -0.659179f },
	{ 0.659179f, 0.361893f, 0.659179f },
	{ -0.659179f, 0.361893f, 0.659179f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00146128 = { vertex_001458E8, normal_00145D08, LengthOfArray<Sint32>(vertex_001458E8), meshlist_001457E0, matlist_00145268, LengthOfArray<Uint16>(meshlist_001457E0), LengthOfArray<Uint16>(matlist_00145268), { -5.00004f, 7.25f, -0.00006f }, 24.47386f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00146150 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00146128, -370, 39, 1737.5f, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00146184[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 55, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 54, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00146210[] = {
	0x8000u | 26, 87, 67, 86, 68, 84, 69, 79, 70, 78, 71, 77, 72, 82, 73, 85, 74, 83, 108, 76, 107, 75, 106, 80, 105, 81, 104
};

extern "C" __declspec(dllexport) Sint16 poly_00146246[] = {
	4, 50, 0, 51, 1,
	4, 2, 4, 3, 5,
	4, 8, 6, 9, 7,
	4, 10, 12, 11, 13,
	4, 16, 14, 17, 15,
	4, 18, 20, 19, 21,
	4, 24, 22, 25, 23,
	4, 26, 28, 27, 29,
	4, 32, 30, 33, 31,
	4, 34, 36, 35, 37,
	4, 40, 38, 41, 39,
	0x8000u | 5, 43, 45, 44, 47, 46,
	3, 43, 42, 44
};

extern "C" __declspec(dllexport) Sint16 poly_001462C8[] = {
	0x8000u | 6, 94, 73, 95, 72, 96, 71,
	0x8000u | 27, 65, 58, 88, 57, 80, 52, 75, 53, 76, 60, 83, 62, 85, 59, 82, 54, 77, 55, 78, 56, 79, 61, 84, 63, 86, 64, 87,
	3, 65, 66, 88,
	3, 103, 89, 102,
	10, 90, 91, 106, 92, 107, 93, 108, 94, 74, 73,
	0x8000u | 6, 106, 90, 105, 89, 104, 102,
	10, 67, 68, 100, 69, 99, 70, 98, 71, 97, 96,
	3, 100, 101, 67,
	0x8000u | 28, 51, 103, 1, 89, 5, 90, 7, 91, 13, 92, 15, 93, 21, 94, 23, 95, 29, 96, 31, 97, 37, 98, 39, 99, 45, 100, 47, 101
};

extern "C" __declspec(dllexport) Sint16 poly_0014639A[] = {
	3, 44, 42, 38,
	3, 20, 18, 14,
	3, 38, 40, 36,
	3, 14, 16, 12,
	3, 4, 2, 0,
	3, 22, 24, 20,
	3, 36, 34, 30,
	3, 30, 32, 28,
	3, 12, 10, 6,
	3, 6, 8, 4,
	3, 28, 26, 22,
	3, 39, 43, 45,
	3, 37, 41, 39,
	3, 31, 35, 37,
	3, 29, 33, 31,
	3, 23, 27, 29,
	3, 21, 25, 23,
	3, 15, 19, 21,
	3, 13, 17, 15,
	3, 7, 11, 13,
	3, 5, 9, 7,
	3, 1, 3, 5
};

extern "C" __declspec(dllexport) Sint16 poly_0014644A[] = {
	4, 39, 38, 43, 42,
	4, 37, 36, 41, 40,
	4, 15, 14, 19, 18,
	4, 13, 12, 17, 16,
	4, 49, 48, 51, 50,
	4, 1, 0, 3, 2,
	4, 21, 20, 25, 24,
	4, 23, 22, 27, 26,
	4, 31, 30, 35, 34,
	4, 29, 28, 33, 32,
	4, 7, 6, 11, 10,
	4, 5, 4, 9, 8
};

extern "C" __declspec(dllexport) Sint16 poly_001464C2[] = {
	0x8000u | 28, 65, 50, 58, 0, 57, 4, 52, 6, 53, 12, 60, 14, 62, 20, 59, 22, 54, 28, 55, 30, 56, 36, 61, 38, 63, 44, 64, 46
};

extern "C" __declspec(dllexport) Sint16 poly_001464FC[] = {
	4, 66, 65, 48, 50,
	4, 103, 102, 51, 49
};

extern "C" __declspec(dllexport) NJS_TEX uv_00146510[] = {
	{ 1275, -2805 },
	{ 0, -2805 },
	{ 1275, -2491 },
	{ 0, -2642 },
	{ 1275, -2242 },
	{ 0, -2376 },
	{ 1275, -1992 },
	{ 0, -2115 },
	{ 1275, -1743 },
	{ 0, -1838 },
	{ 1275, -1492 },
	{ 0, -1576 },
	{ 1275, -1243 },
	{ 0, -1314 },
	{ 1275, -992 },
	{ 0, -1052 },
	{ 1275, -744 },
	{ 0, -791 },
	{ 1275, -494 },
	{ 0, -529 },
	{ 1275, -244 },
	{ 0, -268 },
	{ 1275, 5 },
	{ 0, -6 },
	{ 1275, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00146578[] = {
	{ 33, 254 },
	{ 33, 2 },
	{ 476, 254 },
	{ 472, 2 },
	{ 33, 254 },
	{ 33, 2 },
	{ 476, 254 },
	{ 472, 2 },
	{ 33, 254 },
	{ 33, 2 },
	{ 476, 254 },
	{ 472, 2 },
	{ 33, 254 },
	{ 33, 2 },
	{ 476, 254 },
	{ 472, 2 },
	{ 33, 254 },
	{ 33, 2 },
	{ 476, 254 },
	{ 472, 2 },
	{ 33, 254 },
	{ 33, 2 },
	{ 476, 254 },
	{ 472, 2 },
	{ 33, 254 },
	{ 33, 2 },
	{ 476, 254 },
	{ 472, 2 },
	{ 33, 254 },
	{ 33, 2 },
	{ 476, 254 },
	{ 472, 2 },
	{ 33, 254 },
	{ 33, 2 },
	{ 476, 254 },
	{ 472, 2 },
	{ 33, 254 },
	{ 33, 2 },
	{ 476, 254 },
	{ 472, 2 },
	{ 33, 254 },
	{ 33, 2 },
	{ 476, 254 },
	{ 472, 2 },
	{ 478, 254 },
	{ 478, 102 },
	{ 38, 152 },
	{ 478, 0 },
	{ 38, 0 },
	{ 478, 254 },
	{ 38, 254 },
	{ 38, 152 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00146648[] = {
	{ 1457, 255 },
	{ 1240, 0 },
	{ 1240, 255 },
	{ 1021, 0 },
	{ 1021, 255 },
	{ 804, 0 },
	{ 2805, 0 },
	{ 2562, 0 },
	{ 2562, 255 },
	{ 2353, 0 },
	{ 2353, 255 },
	{ 2144, 0 },
	{ 2144, 255 },
	{ 1934, 0 },
	{ 1934, 255 },
	{ 1724, 0 },
	{ 1724, 255 },
	{ 1515, 0 },
	{ 1515, 255 },
	{ 1306, 0 },
	{ 1306, 255 },
	{ 1098, 0 },
	{ 1098, 255 },
	{ 888, 0 },
	{ 888, 255 },
	{ 680, 0 },
	{ 680, 255 },
	{ 470, 0 },
	{ 470, 255 },
	{ 260, 0 },
	{ 260, 255 },
	{ 0 },
	{ 0, 255 },
	{ 2805, 0 },
	{ 2805, 255 },
	{ 2562, 255 },
	{ 2804, 255 },
	{ 2546, 255 },
	{ 2805, 0 },
	{ 2327, 255 },
	{ 2110, 255 },
	{ 2110, 0 },
	{ 1893, 255 },
	{ 1893, 0 },
	{ 1674, 255 },
	{ 1674, 0 },
	{ 1457, 255 },
	{ 1457, 0 },
	{ 1240, 0 },
	{ 2110, 0 },
	{ 2327, 255 },
	{ 2327, 0 },
	{ 2546, 255 },
	{ 2546, 0 },
	{ 2805, 0 },
	{ 0 },
	{ 135, 0 },
	{ 135, 255 },
	{ 354, 0 },
	{ 354, 255 },
	{ 573, 0 },
	{ 573, 255 },
	{ 804, 0 },
	{ 804, 255 },
	{ 1021, 255 },
	{ 135, 255 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 258, 255 },
	{ 472, 0 },
	{ 476, 255 },
	{ 690, 0 },
	{ 693, 255 },
	{ 908, 0 },
	{ 911, 255 },
	{ 1126, 0 },
	{ 1129, 255 },
	{ 1345, 0 },
	{ 1346, 255 },
	{ 1563, 0 },
	{ 1563, 255 },
	{ 1782, 0 },
	{ 1782, 255 },
	{ 2000, 0 },
	{ 2000, 255 },
	{ 2217, 0 },
	{ 2231, 255 },
	{ 2437, 0 },
	{ 2449, 255 },
	{ 2655, 0 },
	{ 2668, 255 },
	{ 2805, 0 },
	{ 2805, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001467C8[] = {
	{ 254, 0 },
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 254, 0 },
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001468D0[] = {
	{ 472, 254 },
	{ 37, 254 },
	{ 472, 0 },
	{ 37, 0 },
	{ 472, 254 },
	{ 37, 254 },
	{ 472, 0 },
	{ 37, 0 },
	{ 472, 254 },
	{ 37, 254 },
	{ 472, 0 },
	{ 37, 0 },
	{ 472, 254 },
	{ 37, 254 },
	{ 472, 0 },
	{ 37, 0 },
	{ 472, 254 },
	{ 37, 254 },
	{ 472, 0 },
	{ 37, 0 },
	{ 472, 254 },
	{ 37, 254 },
	{ 472, 0 },
	{ 37, 0 },
	{ 472, 254 },
	{ 37, 254 },
	{ 472, 0 },
	{ 37, 0 },
	{ 472, 254 },
	{ 37, 254 },
	{ 472, 0 },
	{ 37, 0 },
	{ 472, 254 },
	{ 37, 254 },
	{ 472, 0 },
	{ 37, 0 },
	{ 472, 254 },
	{ 37, 254 },
	{ 472, 0 },
	{ 37, 0 },
	{ 472, 254 },
	{ 37, 254 },
	{ 472, 0 },
	{ 37, 0 },
	{ 472, 254 },
	{ 37, 254 },
	{ 472, 0 },
	{ 37, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00146990[] = {
	{ 0, 255 },
	{ 0 },
	{ 242, 255 },
	{ 250, 0 },
	{ 450, 255 },
	{ 460, 0 },
	{ 660, 255 },
	{ 670, 0 },
	{ 869, 255 },
	{ 881, 0 },
	{ 1078, 255 },
	{ 1092, 0 },
	{ 1288, 255 },
	{ 1304, 0 },
	{ 1497, 255 },
	{ 1514, 0 },
	{ 1705, 255 },
	{ 1724, 0 },
	{ 1914, 255 },
	{ 1936, 0 },
	{ 2123, 255 },
	{ 2147, 0 },
	{ 2333, 255 },
	{ 2357, 0 },
	{ 2543, 255 },
	{ 2567, 0 },
	{ 2805, 255 },
	{ 2805, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00146A00[] = {
	{ -1, 255 },
	{ -1, 0 },
	{ 252, 255 },
	{ 252, 0 },
	{ 255, 0 },
	{ 255, 254 },
	{ 0 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00146A20[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00146210, NULL, NULL, NULL, uv_00146510, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 13, poly_00146246, NULL, NULL, NULL, uv_00146578, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 9, poly_001462C8, NULL, NULL, NULL, uv_00146648, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 22, poly_0014639A, NULL, NULL, NULL, uv_001467C8, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 12, poly_0014644A, NULL, NULL, NULL, uv_001468D0, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_001464C2, NULL, NULL, NULL, uv_00146990, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, poly_001464FC, NULL, NULL, NULL, uv_00146A00, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00146AC8[] = {
	{ 30.02618f, -15, 5.143188f },
	{ 49.51835f, -15, 7.602256f },
	{ 30.02618f, -12, 5.143188f },
	{ 49.51835f, -12, 7.602256f },
	{ 29.38312f, -12, 8.376221f },
	{ 48.36192f, -12, 13.41628f },
	{ 28.32352f, -8.999998f, 11.49768f },
	{ 46.45644f, -8.999997f, 19.02958f },
	{ 29.38312f, -8.999998f, 8.376221f },
	{ 48.36192f, -8.999996f, 13.41628f },
	{ 28.32352f, -5.999999f, 11.49768f },
	{ 46.45644f, -5.999998f, 19.02958f },
	{ 26.86572f, -5.999999f, 14.45398f },
	{ 43.83463f, -5.999998f, 24.34617f },
	{ 25.03433f, -3, 17.19482f },
	{ 40.54125f, -2.999998f, 29.27507f },
	{ 26.86572f, -2.999999f, 14.45398f },
	{ 43.83463f, -2.999998f, 24.34617f },
	{ 25.03433f, 0, 17.19482f },
	{ 40.54125f, 0.000002f, 29.27507f },
	{ 22.86087f, 0, 19.6731f },
	{ 36.63275f, 0.000002f, 33.73187f },
	{ 20.38254f, 3, 21.84656f },
	{ 32.1759f, 3.000002f, 37.64036f },
	{ 22.86087f, 3, 19.6731f },
	{ 36.63275f, 3.000002f, 33.73187f },
	{ 20.38254f, 6, 21.84656f },
	{ 32.1759f, 6.000002f, 37.64036f },
	{ 17.64181f, 6, 23.67785f },
	{ 27.24707f, 6.000002f, 40.93367f },
	{ 14.68549f, 9, 25.13574f },
	{ 21.93048f, 9, 43.55549f },
	{ 17.64181f, 9, 23.67785f },
	{ 27.24707f, 9.000002f, 40.93367f },
	{ 14.68549f, 12, 25.13574f },
	{ 21.93048f, 12, 43.55549f },
	{ 11.56409f, 12, 26.19531f },
	{ 16.31727f, 12, 45.461f },
	{ 8.331023f, 15, 26.83838f },
	{ 10.50324f, 15, 46.61739f },
	{ 11.56409f, 15, 26.19531f },
	{ 16.31727f, 15, 45.461f },
	{ 8.331023f, 18, 26.83838f },
	{ 10.50324f, 18, 46.61739f },
	{ 5.04184f, 18, 27.05395f },
	{ 4.588074f, 18, 47.00519f },
	{ 0.04184f, 18, 27.05395f },
	{ 0.038074f, 18, 47.00519f },
	{ 30.24182f, -18, -0.145996f },
	{ 49.90609f, -18, -0.132857f },
	{ 30.24182f, -15, -0.145996f },
	{ 49.90609f, -15, -0.132857f },
	{ 23.66717f, -8.999998f, 9.56897f },
	{ 22.50094f, -5.999999f, 11.93396f },
	{ 15.12183f, 6, 19.31311f },
	{ 12.75674f, 9, 20.47937f },
	{ 10.25964f, 12, 21.32702f },
	{ 24.51486f, -12, 7.071777f },
	{ 25.02933f, -15, 4.485352f },
	{ 17.31439f, 3, 17.84802f },
	{ 21.03586f, -3, 14.12659f },
	{ 7.673187f, 15, 21.84155f },
	{ 19.29706f, 0, 16.10925f },
	{ 5.04184f, 18, 22.01404f },
	{ 0.04184f, 18, 22.104f },
	{ 25.20184f, -15, -0.145996f },
	{ 25.20184f, -18, -0.145996f },
	{ 0.034406f, 15, 51.92159f },
	{ 4.498836f, 15, 51.92159f },
	{ 11.10159f, 12, 51.4039f },
	{ 17.50225f, 9, 50.13083f },
	{ 24.13575f, 6, 47.85146f },
	{ 29.98882f, 3.000002f, 44.96511f },
	{ 35.41492f, 0.000002f, 41.33952f },
	{ 40.32145f, -2.999998f, 37.03667f },
	{ 23.66717f, -12, 9.56897f },
	{ 22.50094f, -8.999998f, 11.93396f },
	{ 15.12183f, 3, 19.31311f },
	{ 12.75674f, 6, 20.47937f },
	{ 10.25964f, 9, 21.32702f },
	{ 24.51486f, -15, 7.071777f },
	{ 25.02933f, -18, 4.485352f },
	{ 17.31439f, 0, 17.84802f },
	{ 21.03586f, -5.999999f, 14.12659f },
	{ 7.673187f, 12, 21.84155f },
	{ 19.29706f, -3, 16.10925f },
	{ 5.04184f, 15, 22.01404f },
	{ 0.04184f, 15, 22.104f },
	{ 25.02933f, -18, 4.485352f },
	{ 54.50723f, -15, 8.270566f },
	{ 53.23413f, -12, 14.67123f },
	{ 51.13638f, -8.999997f, 20.8509f },
	{ 48.25003f, -5.999998f, 26.70394f },
	{ 44.62433f, -2.999998f, 32.13017f },
	{ 40.32148f, 0.000002f, 37.03667f },
	{ 35.41492f, 3.000002f, 41.33952f },
	{ 29.98878f, 6.000002f, 44.96511f },
	{ 24.13575f, 9, 47.85146f },
	{ 17.50228f, 12, 50.13083f },
	{ 11.10162f, 15, 51.4039f },
	{ 4.498836f, 18, 51.92159f },
	{ 0.034406f, 18, 51.92159f },
	{ 54.9341f, -18, -0.245015f },
	{ 54.9341f, -15, -0.245015f },
	{ 54.50723f, -18, 8.270566f },
	{ 53.23416f, -15, 14.67123f },
	{ 51.13635f, -12, 20.8509f },
	{ 48.24999f, -8.999997f, 26.70394f },
	{ 44.62437f, -5.999998f, 32.13017f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00146FE4[] = {
	{ -0.09431399f, 0.829111f, -0.551071f },
	{ 0.277167f, 0.879616f, -0.386592f },
	{ -0.4758f, 0.581168f, -0.6601959f },
	{ 0.664471f, 0.573716f, -0.478882f },
	{ -0.123226f, 0.676339f, -0.72621f },
	{ 0.419933f, 0.797165f, -0.433802f },
	{ -0.026534f, 0.6768349f, -0.735656f },
	{ 0.471619f, 0.7974229f, -0.376419f },
	{ -0.384472f, 0.580993f, -0.717376f },
	{ 0.721814f, 0.573875f, -0.38685f },
	{ -0.286377f, 0.580815f, -0.761999f },
	{ 0.766489f, 0.5740359f, -0.288057f },
	{ 0.070478f, 0.677333f, -0.732293f },
	{ 0.515596f, 0.797658f, -0.312893f },
	{ 0.166145f, 0.677822f, -0.716207f },
	{ 0.5511349f, 0.7978719f, -0.244234f },
	{ -0.183211f, 0.58064f, -0.793279f },
	{ 0.797718f, 0.5741979f, -0.184238f },
	{ -0.07684f, 0.58047f, -0.810648f },
	{ 0.814953f, 0.5743549f, -0.07725599f },
	{ 0.258769f, 0.678287f, -0.6877249f },
	{ 0.5776449f, 0.798063f, -0.171527f },
	{ 0.346762f, 0.6787249f, -0.647371f },
	{ 0.594665f, 0.79823f, -0.095933f },
	{ 0.030839f, 0.580305f, -0.813815f },
	{ 0.817913f, 0.574506f, 0.031f },
	{ 0.137943f, 0.580153f, -0.8027419f },
	{ 0.806579f, 0.574648f, 0.138604f },
	{ 0.428609f, 0.6791199f, -0.595895f },
	{ 0.601876f, 0.798371f, -0.018658f },
	{ 0.502917f, 0.679478f, -0.534214f },
	{ 0.597901f, 0.798263f, 0.072745f },
	{ 0.242571f, 0.580013f, -0.777653f },
	{ 0.781187f, 0.574778f, 0.243674f },
	{ 0.34288f, 0.579889f, -0.739028f },
	{ 0.742234f, 0.574895f, 0.344361f },
	{ 0.5684339f, 0.679788f, -0.463434f },
	{ 0.585044f, 0.795077f, 0.159924f },
	{ 0.624083f, 0.6800359f, -0.384799f },
	{ 0.562053f, 0.792877f, 0.235462f },
	{ 0.437125f, 0.579783f, -0.687585f },
	{ 0.690443f, 0.574993f, 0.438945f },
	{ 0.523671f, 0.579696f, -0.624277f },
	{ 0.626785f, 0.575076f, 0.5257649f },
	{ 0.170985f, 0.974344f, -0.146347f },
	{ 0.120239f, 0.989692f, 0.077791f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.000334f, 0, -1 },
	{ -0.010817f, 0, -0.9999419f },
	{ 0.000236f, 0.707032f, -0.707182f },
	{ -0.007621f, 0.7097009f, -0.704462f },
	{ -0.454559f, 0.486873f, -0.745876f },
	{ -0.353292f, 0.486876f, -0.798835f },
	{ 0.09346399f, 0.486872f, -0.868458f },
	{ 0.206009f, 0.486873f, -0.848832f },
	{ 0.315027f, 0.486883f, -0.81468f },
	{ -0.548014f, 0.486883f, -0.680165f },
	{ -0.7586f, 0.559514f, -0.33387f },
	{ -0.020718f, 0.486878f, -0.873224f },
	{ -0.246f, 0.486881f, -0.838111f },
	{ 0.418673f, 0.486878f, -0.766592f },
	{ -0.134511f, 0.486881f, -0.863049f },
	{ 0.281241f, 0.71036f, -0.645207f },
	{ -0.012648f, 0.711122f, -0.7029549f },
	{ -0.565527f, 0.5793329f, -0.586985f },
	{ -0.693821f, 0, -0.720147f },
	{ 0, -0.707051f, 0.707163f },
	{ -0.138273f, -0.606896f, 0.782661f },
	{ -0.260729f, -0.577848f, 0.7733769f },
	{ -0.154559f, -0.581506f, 0.7987249f },
	{ -0.043365f, -0.5749429f, 0.8170429f },
	{ 0.054843f, -0.57274f, 0.817901f },
	{ 0.161192f, -0.572688f, 0.8037699f },
	{ 0.264789f, -0.572641f, 0.775866f },
	{ -0.785399f, -0.6052459f, 0.129713f },
	{ -0.795634f, -0.605216f, 0.02606f },
	{ -0.702077f, -0.605059f, -0.375489f },
	{ -0.640507f, -0.609734f, -0.466878f },
	{ -0.573415f, -0.608133f, -0.548972f },
	{ -0.761736f, -0.60526f, 0.231127f },
	{ -0.06988499f, -0.8360119f, 0.544242f },
	{ -0.745069f, -0.605106f, -0.280568f },
	{ -0.792242f, -0.605191f, -0.078072f },
	{ -0.502106f, -0.603433f, -0.619482f },
	{ -0.775291f, -0.605153f, -0.180868f },
	{ -0.2147f, -0.584188f, -0.782706f },
	{ -0.012647f, -0.711177f, -0.702899f },
	{ -0.996197f, 0, -0.08713099f },
	{ 0.791326f, 0.610338f, -0.035923f },
	{ 0.778951f, 0.620997f, -0.08716699f },
	{ 0.782357f, 0.622676f, 0.01387f },
	{ 0.772763f, 0.624304f, 0.114374f },
	{ 0.750371f, 0.625855f, 0.212718f },
	{ 0.715573f, 0.6273119f, 0.307301f },
	{ 0.668961f, 0.628659f, 0.396584f },
	{ 0.611302f, 0.629868f, 0.47914f },
	{ 0.540253f, 0.629282f, 0.558687f },
	{ 0.460415f, 0.616075f, 0.6391169f },
	{ 0.382001f, 0.61809f, 0.687051f },
	{ 0.179911f, 0.719915f, 0.670339f },
	{ 0, 0.706939f, 0.707275f },
	{ 0.7168609f, 0, -0.697216f },
	{ 0.587187f, 0.573639f, -0.5710959f },
	{ 0.836956f, -0.408872f, 0.36377f },
	{ 0.617403f, -0.572516f, 0.53948f },
	{ 0.541671f, -0.572536f, 0.615463f },
	{ 0.456677f, -0.572562f, 0.680896f },
	{ 0.363855f, -0.572596f, 0.734672f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00147500 = { vertex_00146AC8, normal_00146FE4, LengthOfArray<Sint32>(vertex_00146AC8), meshlist_00146A20, matlist_00146184, LengthOfArray<Uint16>(meshlist_00146A20), LengthOfArray<Uint16>(matlist_00146184), { 27.48425f, 0, 25.83829f }, 37.866f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00147528 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00147500, -340.0419f, 18, 1713.146f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0014755C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00147598[] = {
	8, 2, 3, 1, 0, 5, 4, 7, 6
};

extern "C" __declspec(dllexport) Sint16 poly_001475AA[] = {
	8, 3, 9, 0, 8, 4, 10, 6, 11
};

extern "C" __declspec(dllexport) Sint16 poly_001475BC[] = {
	8, 13, 2, 12, 1, 14, 5, 15, 7
};

extern "C" __declspec(dllexport) NJS_TEX uv_001475D0[] = {
	{ 4080, 0 },
	{ 4080, 255 },
	{ 3626, 0 },
	{ 3626, 255 },
	{ 302, 0 },
	{ 302, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001475F0[] = {
	{ 2040, 0 },
	{ 2040, 255 },
	{ 1813, 0 },
	{ 1813, 255 },
	{ 151, 0 },
	{ 151, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00147610[] = {
	{ 2040, 0 },
	{ 2040, 255 },
	{ 1813, 0 },
	{ 1813, 255 },
	{ 151, 0 },
	{ 151, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00147630[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00147598, NULL, NULL, NULL, uv_001475D0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_001475AA, NULL, NULL, NULL, uv_001475F0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_001475BC, NULL, NULL, NULL, uv_00147610, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00147678[] = {
	{ 195, 334.6999f, 120 },
	{ 195, 339.9999f, 120 },
	{ 170, 339.9999f, 150 },
	{ 170, 334.6999f, 150 },
	{ 195, 334.6999f, -100 },
	{ 195, 339.9999f, -100 },
	{ 215, 334.6999f, -120 },
	{ 215, 339.9999f, -120 },
	{ 195.1001f, 320, 120 },
	{ 170, 320, 150 },
	{ 195.1001f, 320, -100 },
	{ 215, 320, -120 },
	{ 195, 350, 120 },
	{ 170, 350, 150 },
	{ 195, 350, -100 },
	{ 215, 350, -120 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00147738[] = {
	{ 0.940183f, 0.002506f, 0.340662f },
	{ 0.940272f, 0, 0.340425f },
	{ 0.768221f, 0, 0.640184f },
	{ 0.768221f, 0.001308f, 0.640184f },
	{ 0.924236f, 0.002495f, 0.381812f },
	{ 0.92388f, 0, 0.382683f },
	{ 0.707993f, 0.001207f, 0.706219f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.94043f, 0.005015f, 0.33995f },
	{ 0.768219f, 0.002616f, 0.640182f },
	{ 0.924105f, 0.004985f, 0.382106f },
	{ 0.708876f, 0.002414f, 0.7053289f },
	{ 0.940272f, 0, 0.340425f },
	{ 0.768221f, 0, 0.640184f },
	{ 0.92388f, 0, 0.382683f },
	{ 0.7071069f, 0, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_001477F8 = { vertex_00147678, normal_00147738, LengthOfArray<Sint32>(vertex_00147678), meshlist_00147630, matlist_0014755C, LengthOfArray<Uint16>(meshlist_00147630), LengthOfArray<Uint16>(matlist_0014755C), { 192.5f, 335, 15 }, 136.8621f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00147820 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001477F8, -730, -115, 1910, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00147854[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 45, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00147868[] = {
	4, 3, 2, 1, 0
};

extern "C" __declspec(dllexport) NJS_TEX uv_00147874[] = {
	{ 510, 255 },
	{ 510, 0 },
	{ 0, 254 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00147884[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00147868, NULL, NULL, NULL, uv_00147874, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0014789C[] = {
	{ -5.999802f, -0.00006f, -8 },
	{ -6, -10, -8.000121f },
	{ 19.00012f, -0.0001f, 12 },
	{ 19.00012f, -10.00001f, 12 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_001478CC[] = {
	{ -0.6246949f, 0.000001f, 0.780868f },
	{ -0.6246949f, 0.000001f, 0.780868f },
	{ -0.6246949f, 0.000001f, 0.780868f },
	{ -0.6246949f, 0.000001f, 0.780868f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_001478FC = { vertex_0014789C, normal_001478CC, LengthOfArray<Sint32>(vertex_0014789C), meshlist_00147884, matlist_00147854, LengthOfArray<Uint16>(meshlist_00147884), LengthOfArray<Uint16>(matlist_00147854), { 6.500061f, -5.000008f, 1.999939f }, 16.00789f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00147924 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001478FC, -169, 0, 2038, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00147958[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 56, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 58, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 59, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 57, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_001479A8[] = {
	42, 4, 23, 5, 24, 6, 25, 7, 75, 73, 26, 8, 27, 9, 28, 10, 29, 11, 30, 12, 31, 13, 32, 14, 33, 15, 34, 16, 35, 17, 74, 72, 18, 0, 19, 1, 20, 2, 21, 3, 22, 4, 23
};

extern "C" __declspec(dllexport) Sint16 poly_001479FE[] = {
	19, 72, 0, 87, 1, 86, 2, 85, 3, 84, 4, 83, 5, 82, 6, 81, 7, 80, 73, 8,
	0x8000u | 19, 72, 17, 87, 16, 86, 15, 85, 14, 84, 13, 83, 12, 82, 11, 81, 10, 80, 9, 8
};

extern "C" __declspec(dllexport) Sint16 poly_00147A4E[] = {
	42, 75, 44, 26, 45, 27, 46, 28, 47, 29, 48, 30, 49, 31, 50, 32, 51, 33, 52, 34, 53, 35, 76, 74, 36, 18, 37, 19, 38, 20, 39, 21, 40, 22, 41, 23, 42, 24, 43, 25, 77, 75, 44
};

extern "C" __declspec(dllexport) Sint16 poly_00147AA4[] = {
	42, 77, 62, 44, 63, 45, 64, 46, 65, 47, 66, 48, 67, 49, 68, 50, 69, 51, 70, 52, 71, 53, 78, 76, 54, 36, 55, 37, 56, 38, 57, 39, 58, 40, 59, 41, 60, 42, 61, 43, 79, 77, 62
};

extern "C" __declspec(dllexport) NJS_TEX uv_00147AFC[] = {
	{ 829, 0 },
	{ 1093, 255 },
	{ 1053, 0 },
	{ 1338, 255 },
	{ 1297, 0 },
	{ 1554, 255 },
	{ 1512, 0 },
	{ 1805, 255 },
	{ 1768, 0 },
	{ 2024, 255 },
	{ 2009, 0 },
	{ 2252, 255 },
	{ 2234, 0 },
	{ 2422, 255 },
	{ 2383, 0 },
	{ 2577, 255 },
	{ 2516, 0 },
	{ 2771, 255 },
	{ 2704, 0 },
	{ 2968, 255 },
	{ 2922, 0 },
	{ 3151, 255 },
	{ 3118, 0 },
	{ 3410, 255 },
	{ 3378, 0 },
	{ 3652, 255 },
	{ 3619, 0 },
	{ 3887, 255 },
	{ 3870, 0 },
	{ 0, 255 },
	{ 0 },
	{ 174, 255 },
	{ 129, 0 },
	{ 348, 255 },
	{ 292, 0 },
	{ 462, 255 },
	{ 426, 0 },
	{ 612, 255 },
	{ 569, 0 },
	{ 868, 255 },
	{ 829, 0 },
	{ 1093, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00147BA4[] = {
	{ 68, 90 },
	{ 0, -61 },
	{ 175, -33 },
	{ 49, -268 },
	{ 274, -115 },
	{ 30, -446 },
	{ 410, -205 },
	{ 49, -637 },
	{ 564, -438 },
	{ 172, -949 },
	{ 724, -654 },
	{ 342, -1162 },
	{ 951, -787 },
	{ 586, -1269 },
	{ 1129, -896 },
	{ 817, -1274 },
	{ 1248, -1007 },
	{ 1086, -1211 },
	{ 1309, -1044 },
	{ 68, 90 },
	{ 284, 168 },
	{ 175, -33 },
	{ 544, 250 },
	{ 274, -115 },
	{ 803, 255 },
	{ 410, -205 },
	{ 1049, 90 },
	{ 564, -438 },
	{ 1195, -95 },
	{ 724, -654 },
	{ 1376, -282 },
	{ 951, -787 },
	{ 1509, -470 },
	{ 1129, -896 },
	{ 1530, -646 },
	{ 1248, -1007 },
	{ 1482, -836 },
	{ 1309, -1044 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00147C3C[] = {
	{ 1805, 0 },
	{ 2039, 255 },
	{ 2024, 0 },
	{ 2279, 255 },
	{ 2252, 0 },
	{ 2487, 255 },
	{ 2422, 0 },
	{ 2680, 255 },
	{ 2577, 0 },
	{ 2884, 255 },
	{ 2771, 0 },
	{ 3046, 255 },
	{ 2968, 0 },
	{ 3205, 255 },
	{ 3151, 0 },
	{ 3468, 255 },
	{ 3410, 0 },
	{ 3711, 255 },
	{ 3652, 0 },
	{ 3916, 255 },
	{ 3887, 0 },
	{ 0, 255 },
	{ 0 },
	{ 219, 255 },
	{ 174, 0 },
	{ 394, 255 },
	{ 348, 0 },
	{ 513, 255 },
	{ 462, 0 },
	{ 672, 255 },
	{ 612, 0 },
	{ 920, 255 },
	{ 868, 0 },
	{ 1153, 255 },
	{ 1093, 0 },
	{ 1399, 255 },
	{ 1338, 0 },
	{ 1620, 255 },
	{ 1554, 0 },
	{ 1862, 255 },
	{ 1805, 0 },
	{ 2039, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00147CE4[] = {
	{ 1862, 0 },
	{ 2055, 255 },
	{ 2039, 0 },
	{ 2300, 255 },
	{ 2279, 0 },
	{ 2536, 255 },
	{ 2487, 0 },
	{ 2754, 255 },
	{ 2680, 0 },
	{ 2964, 255 },
	{ 2884, 0 },
	{ 3102, 255 },
	{ 3046, 0 },
	{ 3246, 255 },
	{ 3205, 0 },
	{ 3507, 255 },
	{ 3468, 0 },
	{ 3750, 255 },
	{ 3711, 0 },
	{ 3936, 255 },
	{ 3916, 0 },
	{ 0, 255 },
	{ 0 },
	{ 248, 255 },
	{ 219, 0 },
	{ 466, 255 },
	{ 394, 0 },
	{ 557, 255 },
	{ 513, 0 },
	{ 721, 255 },
	{ 672, 0 },
	{ 963, 255 },
	{ 920, 0 },
	{ 1200, 255 },
	{ 1153, 0 },
	{ 1447, 255 },
	{ 1399, 0 },
	{ 1672, 255 },
	{ 1620, 0 },
	{ 1906, 255 },
	{ 1862, 0 },
	{ 2055, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00147D8C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001479A8, NULL, NULL, NULL, uv_00147AFC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_001479FE, NULL, NULL, NULL, uv_00147BA4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_00147A4E, NULL, NULL, NULL, uv_00147C3C, NULL }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00147D8C_2[] = {
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_00147AA4, NULL, NULL, NULL, uv_00147CE4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00147DEC[] = {
	{ -187.8207f, -6.999997f, -78.42089f },
	{ -175, -9.999996f, -35 },
	{ -180, -9.999996f, 2 },
	{ -175, -9.999996f, 42 },
	{ -143.0351f, -10, 107.1689f },
	{ -98.89123f, -10.00001f, 151.4509f },
	{ -35, -10.00001f, 174 },
	{ 25, -10.00001f, 175 },
	{ 153.035f, -10, 127.1689f },
	{ 197.8207f, -10, 83.42065f },
	{ 210, -10, 44 },
	{ 205, -10, 7 },
	{ 170, -10, -32 },
	{ 123.0352f, -9.999995f, -71.16869f },
	{ 85, -9.999995f, -110 },
	{ 21.2146f, -9.999992f, -144.416f },
	{ -46.21435f, -9.999992f, -143.416f },
	{ -113.8911f, -9.999993f, -126.4509f },
	{ -209.0566f, -13.00003f, -85.7168f },
	{ -195.3928f, -13.00003f, -33.43872f },
	{ -200.1681f, -13.00003f, 1.899902f },
	{ -194.4304f, -13.00002f, 47.80249f },
	{ -159.5348f, -13.00002f, 118.9465f },
	{ -109.8411f, -13.00001f, 168.7961f },
	{ -38.58728f, -12.99999f, 193.9433f },
	{ 28.83972f, -12.99998f, 195.0671f },
	{ 162.9277f, -12.99998f, 144.6318f },
	{ 214.8676f, -12.99997f, 95.99927f },
	{ 230.4104f, -12.99997f, 45.6914f },
	{ 223.9957f, -12.99998f, -1.777344f },
	{ 183.9197f, -12.99999f, -46.43335f },
	{ 136.6184f, -12.99999f, -85.88256f },
	{ 97.16583f, -12.99999f, -126.1611f },
	{ 26.12695f, -13, -164.4907f },
	{ -48.82885f, -13.00001f, -163.3789f },
	{ -119.1383f, -13.00001f, -145.7539f },
	{ -247.1473f, -22.0001f, -110.9558f },
	{ -241.3749f, -22.00009f, -43.53564f },
	{ -250.5889f, -22.0001f, 1.649414f },
	{ -243.0067f, -22.00008f, 62.30859f },
	{ -200.7843f, -22.00006f, 148.3904f },
	{ -137.2158f, -22.00001f, 212.1584f },
	{ -47.55554f, -21.99997f, 243.8015f },
	{ 38.43872f, -21.99993f, 245.2346f },
	{ 187.6589f, -21.99991f, 188.2893f },
	{ 257.4837f, -21.99989f, 127.4465f },
	{ 281.4358f, -21.9999f, 49.91968f },
	{ 271.4845f, -21.99993f, -23.72046f },
	{ 218.7184f, -21.99997f, -82.51733f },
	{ 170.576f, -21.99997f, -122.6675f },
	{ 127.5803f, -21.99998f, -166.564f },
	{ 38.40747f, -22.00002f, -214.6777f },
	{ -55.36548f, -22.00005f, -213.2868f },
	{ -132.2565f, -22.00007f, -194.012f },
	{ -290.2377f, -40.00018f, -141.1956f },
	{ -292.3568f, -40.00016f, -39.6333f },
	{ -301.0096f, -40.00017f, 1.398193f },
	{ -291.5829f, -40.00013f, 76.81396f },
	{ -242.0336f, -40.00009f, 177.8335f },
	{ -164.5901f, -40.00002f, 255.5195f },
	{ -56.52356f, -39.99995f, 293.6587f },
	{ 48.03784f, -39.99989f, 295.4016f },
	{ 212.3902f, -39.99984f, 231.946f },
	{ 300.1001f, -39.9998f, 158.8931f },
	{ 332.4617f, -39.99982f, 54.14722f },
	{ 318.9734f, -39.99988f, -45.66455f },
	{ 253.5173f, -39.99995f, -118.6021f },
	{ 204.5337f, -39.99995f, -159.4536f },
	{ 157.9948f, -39.99996f, -206.9673f },
	{ 50.68798f, -40.00004f, -264.8655f },
	{ -61.90185f, -40.0001f, -263.1956f },
	{ -145.3745f, -40.00012f, -242.2705f },
	{ -170, -6.999994f, -110 },
	{ 95, -10.00001f, 162 },
	{ -176.5422f, -13.00002f, -128.9233f },
	{ 104.7313f, -12.99998f, 179.5374f },
	{ -192.8981f, -22.00007f, -176.2322f },
	{ 129.0593f, -21.99991f, 223.3808f },
	{ -209.2536f, -40.00013f, -223.5417f },
	{ 153.3874f, -39.99984f, 267.2234f },
	{ 136.7525f, -7.000005f, 119.1584f },
	{ 105.9057f, -6.000005f, 96.15473f },
	{ 59.54759f, -5.000005f, 73.21071f },
	{ 0.624893f, -4.000004f, 45.76446f },
	{ -40.98898f, -5.000002f, 0.317612f },
	{ -81.02586f, -5.999995f, -48.28002f },
	{ -116.4231f, -6.999995f, -67.10378f },
	{ -142.1624f, -6.999995f, -84.14234f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0014820C[] = {
	{ -0.109249f, 0.994011f, -0.00277f },
	{ -0.093109f, 0.995529f, 0.015886f },
	{ -0.101206f, 0.9948649f, 0.00041f },
	{ -0.09265099f, 0.995293f, 0.028419f },
	{ -0.07859299f, 0.995294f, 0.05668f },
	{ -0.053283f, 0.995056f, 0.083816f },
	{ -0.018879f, 0.994935f, 0.09873f },
	{ 0.007665f, 0.994434f, 0.105086f },
	{ 0.099818f, 0.987108f, 0.125114f },
	{ 0.097774f, 0.993763f, 0.053626f },
	{ 0.099581f, 0.995008f, 0.006479f },
	{ 0.088147f, 0.995244f, -0.041466f },
	{ 0.064661f, 0.99565f, -0.067076f },
	{ 0.060436f, 0.996017f, -0.065552f },
	{ 0.057303f, 0.995497f, -0.07550599f },
	{ 0.024227f, 0.995255f, -0.094237f },
	{ -0.01199f, 0.994945f, -0.099704f },
	{ -0.025564f, 0.990059f, -0.138313f },
	{ -0.182478f, 0.982471f, -0.038112f },
	{ -0.161844f, 0.9867499f, 0.011454f },
	{ -0.162591f, 0.98669f, -0.00264f },
	{ -0.155295f, 0.986779f, 0.046373f },
	{ -0.131939f, 0.986774f, 0.09417699f },
	{ -0.08583099f, 0.98699f, 0.135958f },
	{ -0.028705f, 0.986767f, 0.159585f },
	{ 0.01618f, 0.986101f, 0.16536f },
	{ 0.095413f, 0.987186f, 0.12791f },
	{ 0.132929f, 0.987665f, 0.082752f },
	{ 0.160416f, 0.98696f, 0.013291f },
	{ 0.143734f, 0.987385f, -0.066418f },
	{ 0.113153f, 0.986625f, -0.117333f },
	{ 0.109959f, 0.986773f, -0.119117f },
	{ 0.097623f, 0.986738f, -0.129685f },
	{ 0.038001f, 0.9871359f, -0.155301f },
	{ -0.021134f, 0.986667f, -0.161374f },
	{ -0.046773f, 0.980213f, -0.192342f },
	{ -0.24815f, 0.965431f, -0.079774f },
	{ -0.255475f, 0.966757f, -0.010663f },
	{ -0.264787f, 0.9642569f, -0.009786f },
	{ -0.252663f, 0.964608f, 0.075448f },
	{ -0.214608f, 0.964613f, 0.153185f },
	{ -0.140786f, 0.964597f, 0.223008f },
	{ -0.046674f, 0.964619f, 0.259482f },
	{ 0.029849f, 0.963664f, 0.265446f },
	{ 0.15127f, 0.966146f, 0.208996f },
	{ 0.217786f, 0.965877f, 0.140178f },
	{ 0.262869f, 0.964586f, 0.021779f },
	{ 0.238266f, 0.964939f, -0.110099f },
	{ 0.181729f, 0.965124f, -0.188442f },
	{ 0.173673f, 0.966666f, -0.188136f },
	{ 0.158492f, 0.964651f, -0.210544f },
	{ 0.062603f, 0.964689f, -0.255843f },
	{ -0.034146f, 0.964811f, -0.260719f },
	{ -0.068142f, 0.965668f, -0.250684f },
	{ -0.280905f, 0.951414f, -0.126112f },
	{ -0.33415f, 0.941858f, -0.035304f },
	{ -0.336134f, 0.9417329f, -0.012373f },
	{ -0.320607f, 0.942362f, 0.095737f },
	{ -0.272414f, 0.942327f, 0.194446f },
	{ -0.176809f, 0.943558f, 0.280067f },
	{ -0.059274f, 0.942283f, 0.32953f },
	{ 0.04226f, 0.940115f, 0.338229f },
	{ 0.192241f, 0.942951f, 0.271822f },
	{ 0.267804f, 0.946706f, 0.178964f },
	{ 0.330526f, 0.943399f, 0.027385f },
	{ 0.295348f, 0.945592f, -0.136476f },
	{ 0.234586f, 0.941168f, -0.243253f },
	{ 0.229495f, 0.9410239f, -0.248608f },
	{ 0.20167f, 0.942103f, -0.267902f },
	{ 0.07819299f, 0.944336f, -0.319556f },
	{ -0.043726f, 0.941604f, -0.333873f },
	{ -0.088832f, 0.940908f, -0.326803f },
	{ -0.08930399f, 0.986728f, -0.135621f },
	{ 0.03786f, 0.992798f, 0.113664f },
	{ -0.114329f, 0.977339f, -0.178148f },
	{ 0.059853f, 0.986251f, 0.154032f },
	{ -0.142582f, 0.9650469f, -0.219899f },
	{ 0.100452f, 0.9636019f, 0.247751f },
	{ -0.157925f, 0.946525f, -0.281337f },
	{ 0.132948f, 0.940659f, 0.312227f },
	{ 0.064205f, 0.994325f, 0.084824f },
	{ 0.018585f, 0.999596f, 0.021502f },
	{ 0.008314f, 0.999912f, 0.010334f },
	{ -0.001246f, 0.999965f, 0.008289999f },
	{ -0.005266f, 0.999984f, -0.00193f },
	{ -0.01153f, 0.9998209f, -0.01498f },
	{ -0.032713f, 0.9991f, -0.027014f },
	{ -0.012397f, 0.999739f, -0.019171f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0014862C = { vertex_00147DEC, normal_0014820C, LengthOfArray<Sint32>(vertex_00147DEC), meshlist_00147D8C, matlist_00147958, LengthOfArray<Uint16>(meshlist_00147D8C), LengthOfArray<Uint16>(matlist_00147958), { 15.72601f, -22.00009f, 15.26807f }, 422.8431f, NULL };

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0014862C_2 = { vertex_00147DEC, normal_0014820C, LengthOfArray<Sint32>(vertex_00147DEC), meshlist_00147D8C_2, matlist_00147958, LengthOfArray<Uint16>(meshlist_00147D8C_2), LengthOfArray<Uint16>(matlist_00147958), { 15.72601f, -22.00009f, 15.26807f }, 422.8431f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00148654 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014862C, -1030, 0, 2611, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00148654_2 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014862C_2, -1030, 0, 2611, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00148688[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 60, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0014869C[] = {
	42, 37, 26, 8, 27, 9, 28, 10, 29, 11, 30, 12, 31, 13, 32, 14, 33, 15, 34, 16, 35, 17, 38, 36, 18, 0, 19, 1, 20, 2, 21, 3, 22, 4, 23, 5, 24, 6, 25, 7, 39, 37, 26
};

extern "C" __declspec(dllexport) NJS_TEX uv_001486F4[] = {
	{ 1976, 0 },
	{ 2216, 255 },
	{ 2219, 0 },
	{ 2445, 255 },
	{ 2443, 0 },
	{ 2615, 255 },
	{ 2592, 0 },
	{ 2770, 255 },
	{ 2725, 0 },
	{ 2964, 255 },
	{ 2914, 0 },
	{ 3161, 255 },
	{ 3133, 0 },
	{ 3344, 255 },
	{ 3328, 0 },
	{ 3603, 255 },
	{ 3587, 0 },
	{ 3845, 255 },
	{ 3828, 0 },
	{ 0, 255 },
	{ 0 },
	{ 192, 255 },
	{ 209, 0 },
	{ 366, 255 },
	{ 338, 0 },
	{ 541, 255 },
	{ 500, 0 },
	{ 656, 255 },
	{ 634, 0 },
	{ 804, 255 },
	{ 780, 0 },
	{ 1059, 255 },
	{ 1040, 0 },
	{ 1287, 255 },
	{ 1264, 0 },
	{ 1530, 255 },
	{ 1506, 0 },
	{ 1747, 255 },
	{ 1721, 0 },
	{ 1998, 255 },
	{ 1976, 0 },
	{ 2216, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0014879C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0014869C, NULL, NULL, NULL, uv_001486F4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_001487B4[] = {
	{ -187.8207f, -9.999996f, -78.42089f },
	{ -175, -9.999996f, -35 },
	{ -180, -9.999996f, 2 },
	{ -175, -9.999996f, 42 },
	{ -143.0351f, -10, 107.1689f },
	{ -98.89123f, -10.00001f, 151.4509f },
	{ -35, -10.00001f, 174 },
	{ 25, -10.00001f, 175 },
	{ 153.035f, -10, 127.1689f },
	{ 197.8207f, -10, 83.42065f },
	{ 210, -10, 44 },
	{ 205, -10, 7 },
	{ 170, -10, -32 },
	{ 123.0352f, -9.999995f, -71.16869f },
	{ 85, -9.999995f, -110 },
	{ 21.2146f, -9.999992f, -144.416f },
	{ -46.21435f, -9.999992f, -143.416f },
	{ -113.8911f, -9.999993f, -126.4509f },
	{ -209.0566f, -13.00003f, -85.7168f },
	{ -195.3928f, -13.00003f, -33.43872f },
	{ -200.1681f, -13.00003f, 1.899902f },
	{ -194.4304f, -13.00002f, 47.80249f },
	{ -159.5348f, -13.00002f, 118.9465f },
	{ -109.8411f, -13.00001f, 168.7961f },
	{ -38.58728f, -12.99999f, 193.9433f },
	{ 28.83972f, -12.99998f, 195.0671f },
	{ 162.9277f, -12.99998f, 144.6318f },
	{ 214.8676f, -12.99997f, 95.99927f },
	{ 230.4104f, -12.99997f, 45.6914f },
	{ 223.9957f, -12.99998f, -1.777344f },
	{ 183.9197f, -12.99999f, -46.43335f },
	{ 136.6184f, -12.99999f, -85.88256f },
	{ 97.16583f, -12.99999f, -126.1611f },
	{ 26.12695f, -13, -164.4907f },
	{ -48.82885f, -13.00001f, -163.3789f },
	{ -119.1383f, -13.00001f, -145.7539f },
	{ -170, -9.999993f, -110 },
	{ 95, -10.00001f, 162 },
	{ -176.5422f, -13.00002f, -128.9233f },
	{ 104.7313f, -12.99998f, 179.5374f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00148994[] = {
	{ -0.129873f, 0.991455f, -0.012212f },
	{ -0.144806f, 0.989412f, 0.009787f },
	{ -0.147128f, 0.989117f, -0.000733f },
	{ -0.140231f, 0.989233f, 0.041874f },
	{ -0.119153f, 0.989227f, 0.08504999f },
	{ -0.077253f, 0.989473f, 0.12237f },
	{ -0.025927f, 0.989218f, 0.14414f },
	{ 0.012662f, 0.988564f, 0.150271f },
	{ 0.08810899f, 0.989581f, 0.113869f },
	{ 0.121114f, 0.990025f, 0.07198299f },
	{ 0.144439f, 0.989441f, 0.011967f },
	{ 0.128825f, 0.989879f, -0.059529f },
	{ 0.102712f, 0.988993f, -0.106507f },
	{ 0.100496f, 0.988964f, -0.108865f },
	{ 0.08822899f, 0.989181f, -0.117205f },
	{ 0.034144f, 0.989628f, -0.139538f },
	{ -0.019138f, 0.98908f, -0.146132f },
	{ -0.038904f, 0.9889399f, -0.143123f },
	{ -0.126564f, 0.99163f, -0.025521f },
	{ -0.144826f, 0.989411f, 0.009524999f },
	{ -0.147128f, 0.989117f, -0.000733f },
	{ -0.140231f, 0.989233f, 0.041875f },
	{ -0.119153f, 0.989227f, 0.08504999f },
	{ -0.077253f, 0.989473f, 0.12237f },
	{ -0.025927f, 0.989218f, 0.14414f },
	{ 0.014725f, 0.988495f, 0.150534f },
	{ 0.086206f, 0.989511f, 0.11592f },
	{ 0.118823f, 0.990071f, 0.07509799f },
	{ 0.144439f, 0.989441f, 0.011968f },
	{ 0.128825f, 0.989879f, -0.059528f },
	{ 0.102713f, 0.988993f, -0.106507f },
	{ 0.100495f, 0.988964f, -0.108865f },
	{ 0.08822899f, 0.989181f, -0.117205f },
	{ 0.034144f, 0.989628f, -0.139538f },
	{ -0.019138f, 0.98908f, -0.146132f },
	{ -0.038904f, 0.9889399f, -0.143123f },
	{ -0.083942f, 0.991037f, -0.103915f },
	{ 0.051072f, 0.988731f, 0.140721f },
	{ -0.070062f, 0.990702f, -0.116621f },
	{ 0.055173f, 0.988832f, 0.138448f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00148B74 = { vertex_001487B4, normal_00148994, LengthOfArray<Sint32>(vertex_001487B4), meshlist_0014879C, matlist_00148688, LengthOfArray<Uint16>(meshlist_0014879C), LengthOfArray<Uint16>(matlist_00148688), { 10.67688f, -11.50001f, 15.28821f }, 283.9072f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00148B9C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00148B74, -1030, 1, 2611, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00148BD0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 63, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 64, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 62, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 61, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 61, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00148C34[] = {
	4, 3, 2, 1, 0,
	4, 5, 4, 3, 2,
	4, 9, 8, 7, 6,
	4, 11, 10, 9, 8,
	4, 15, 14, 13, 12,
	4, 17, 16, 15, 14,
	4, 21, 20, 19, 18,
	4, 23, 22, 21, 20,
	4, 27, 26, 25, 24,
	4, 29, 28, 27, 26,
	4, 33, 32, 31, 30,
	4, 35, 34, 33, 32,
	4, 39, 38, 37, 36,
	4, 41, 40, 39, 38,
	4, 45, 44, 43, 42,
	4, 47, 46, 45, 44,
	4, 51, 50, 49, 48,
	4, 53, 52, 51, 50,
	4, 57, 56, 55, 54,
	4, 59, 58, 57, 56,
	4, 63, 62, 61, 60,
	4, 65, 64, 63, 62,
	4, 69, 68, 67, 66,
	4, 71, 70, 69, 68
};

extern "C" __declspec(dllexport) Sint16 poly_00148D24[] = {
	6, 82, 73, 83, 77, 76, 81,
	6, 73, 74, 77, 78, 81, 80,
	6, 74, 75, 78, 79, 80, 72,
	6, 94, 85, 95, 89, 88, 93,
	6, 85, 86, 89, 90, 93, 92,
	6, 84, 92, 91, 90, 87, 86,
	6, 98, 99, 102, 103, 104, 96,
	6, 105, 100, 101, 107, 97, 106,
	6, 104, 105, 102, 101, 98, 97,
	6, 118, 109, 119, 113, 112, 117,
	6, 109, 110, 113, 114, 117, 116,
	6, 110, 111, 114, 115, 116, 108,
	6, 130, 121, 131, 125, 124, 129,
	6, 121, 122, 125, 126, 129, 128,
	6, 122, 123, 126, 127, 128, 120,
	6, 142, 133, 143, 137, 136, 141,
	6, 133, 134, 137, 138, 141, 140,
	6, 134, 135, 138, 139, 140, 132,
	6, 145, 146, 149, 150, 153, 152,
	6, 146, 147, 150, 151, 152, 144,
	6, 153, 148, 149, 155, 145, 154,
	6, 157, 158, 161, 162, 165, 164,
	6, 158, 159, 162, 163, 164, 156,
	6, 165, 160, 161, 167, 157, 166,
	6, 178, 169, 179, 173, 172, 177,
	6, 169, 170, 173, 174, 177, 176,
	6, 170, 171, 174, 175, 176, 168,
	6, 190, 181, 191, 185, 184, 189,
	6, 181, 182, 185, 186, 189, 188,
	6, 182, 183, 186, 187, 188, 180,
	6, 202, 193, 203, 197, 196, 201,
	6, 193, 194, 197, 198, 201, 200,
	6, 192, 200, 199, 198, 195, 194,
	6, 214, 205, 215, 209, 208, 213,
	6, 205, 206, 209, 210, 213, 212,
	6, 206, 207, 210, 211, 212, 204
};

extern "C" __declspec(dllexport) Sint16 poly_00148F1C[] = {
	10, 233, 217, 232, 231, 234, 221, 235, 220, 233, 217,
	0x8000u | 10, 234, 227, 235, 225, 233, 223, 232, 226, 234, 227
};

extern "C" __declspec(dllexport) Sint16 poly_00148F48[] = {
	4, 229, 224, 216, 219,
	4, 218, 228, 216, 229,
	4, 222, 230, 218, 228,
	4, 225, 229, 227, 228,
	4, 230, 224, 226, 223,
	4, 227, 228, 226, 230,
	4, 222, 219, 230, 224,
	4, 225, 223, 229, 224
};

extern "C" __declspec(dllexport) Sint16 poly_00148F98[] = {
	4, 222, 218, 219, 216
};

extern "C" __declspec(dllexport) NJS_TEX uv_00148FA4[] = {
	{ 7, 7 },
	{ 247, 7 },
	{ 7, 247 },
	{ 247, 247 },
	{ 7, 7 },
	{ 247, 7 },
	{ 7, 247 },
	{ 247, 247 },
	{ 7, 7 },
	{ 247, 7 },
	{ 7, 247 },
	{ 247, 247 },
	{ 7, 7 },
	{ 247, 7 },
	{ 7, 247 },
	{ 247, 247 },
	{ 7, 7 },
	{ 247, 7 },
	{ 7, 247 },
	{ 247, 247 },
	{ 7, 7 },
	{ 247, 7 },
	{ 7, 247 },
	{ 247, 247 },
	{ 7, 7 },
	{ 247, 7 },
	{ 7, 247 },
	{ 247, 247 },
	{ 7, 7 },
	{ 247, 7 },
	{ 7, 247 },
	{ 247, 247 },
	{ 7, 7 },
	{ 247, 7 },
	{ 7, 247 },
	{ 247, 247 },
	{ 7, 7 },
	{ 247, 7 },
	{ 7, 247 },
	{ 247, 247 },
	{ 7, 7 },
	{ 247, 7 },
	{ 7, 247 },
	{ 247, 247 },
	{ 7, 7 },
	{ 247, 7 },
	{ 7, 247 },
	{ 247, 247 },
	{ 7, 7 },
	{ 247, 7 },
	{ 7, 247 },
	{ 247, 247 },
	{ 7, 7 },
	{ 247, 7 },
	{ 7, 247 },
	{ 247, 247 },
	{ 7, 7 },
	{ 247, 7 },
	{ 7, 247 },
	{ 247, 247 },
	{ 7, 7 },
	{ 247, 7 },
	{ 7, 247 },
	{ 247, 247 },
	{ 7, 7 },
	{ 247, 7 },
	{ 7, 247 },
	{ 247, 247 },
	{ 123, 116 },
	{ 100, 81 },
	{ 129, 119 },
	{ 106, 84 },
	{ 138, 119 },
	{ 156, 114 },
	{ 141, 123 },
	{ 160, 119 },
	{ 7, 7 },
	{ 247, 7 },
	{ 7, 247 },
	{ 247, 247 },
	{ 7, 7 },
	{ 247, 7 },
	{ 7, 247 },
	{ 247, 247 },
	{ 7, 7 },
	{ 247, 7 },
	{ 7, 247 },
	{ 247, 247 },
	{ 7, 7 },
	{ 247, 7 },
	{ 7, 247 },
	{ 247, 247 },
	{ 7, 7 },
	{ 247, 7 },
	{ 7, 247 },
	{ 247, 247 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00149124[] = {
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 1 },
	{ 6, 1 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 1 },
	{ 6, 1 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 1 },
	{ 6, 1 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 1 },
	{ 6, 1 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 1 },
	{ 6, 1 },
	{ 486, 251 },
	{ 7, 251 },
	{ 7, 251 },
	{ 486, 251 },
	{ 6, 1 },
	{ 486, 1 },
	{ 7, 251 },
	{ 486, 251 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 1 },
	{ 6, 1 },
	{ 486, 251 },
	{ 7, 251 },
	{ 7, 251 },
	{ 486, 251 },
	{ 6, 1 },
	{ 486, 1 },
	{ 7, 251 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 251 },
	{ 6, 1 },
	{ 486, 1 },
	{ 7, 251 },
	{ 486, 251 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 1 },
	{ 6, 1 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 1 },
	{ 6, 1 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 1 },
	{ 6, 1 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 1 },
	{ 6, 1 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 1 },
	{ 6, 1 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 1 },
	{ 6, 1 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 1 },
	{ 6, 1 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 1 },
	{ 6, 1 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 1 },
	{ 6, 1 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 1 },
	{ 6, 1 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 1 },
	{ 6, 1 },
	{ 486, 251 },
	{ 7, 251 },
	{ 7, 251 },
	{ 486, 251 },
	{ 6, 1 },
	{ 486, 1 },
	{ 7, 251 },
	{ 486, 251 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 1 },
	{ 6, 1 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 1 },
	{ 6, 1 },
	{ 486, 251 },
	{ 7, 251 },
	{ 7, 251 },
	{ 486, 251 },
	{ 6, 1 },
	{ 486, 1 },
	{ 7, 251 },
	{ 486, 251 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 1 },
	{ 6, 1 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 1 },
	{ 6, 1 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 1 },
	{ 6, 1 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 1 },
	{ 6, 1 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 1 },
	{ 6, 1 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 1 },
	{ 6, 1 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 1 },
	{ 6, 1 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 1 },
	{ 6, 1 },
	{ 486, 251 },
	{ 7, 251 },
	{ 7, 251 },
	{ 486, 251 },
	{ 6, 1 },
	{ 486, 1 },
	{ 7, 251 },
	{ 486, 251 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 1 },
	{ 6, 1 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 1 },
	{ 6, 1 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 251 },
	{ 7, 251 },
	{ 486, 1 },
	{ 6, 1 },
	{ 486, 251 },
	{ 7, 251 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00149484[] = {
	{ 100, 0 },
	{ 0, 255 },
	{ 117, 0 },
	{ 94, 255 },
	{ 164, 0 },
	{ 166, 255 },
	{ 205, 0 },
	{ 256, 255 },
	{ 100, 0 },
	{ 424, 255 },
	{ 156, 254 },
	{ 255, -1274 },
	{ 256, 254 },
	{ 0, -1274 },
	{ 0, 254 },
	{ 42, -1274 },
	{ 42, 254 },
	{ 156, -1274 },
	{ 156, 254 },
	{ 255, -1274 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001494D4[] = {
	{ 482, 13 },
	{ 3, 13 },
	{ 482, 253 },
	{ 3, 253 },
	{ 482, 13 },
	{ 3, 13 },
	{ 482, 253 },
	{ 3, 253 },
	{ 482, 13 },
	{ 3, 13 },
	{ 482, 253 },
	{ 3, 253 },
	{ 482, 13 },
	{ 3, 13 },
	{ 482, 253 },
	{ 3, 253 },
	{ 482, 13 },
	{ 3, 13 },
	{ 482, 253 },
	{ 3, 253 },
	{ 482, 13 },
	{ 3, 13 },
	{ 482, 253 },
	{ 3, 253 },
	{ 482, 13 },
	{ 3, 13 },
	{ 482, 253 },
	{ 3, 253 },
	{ 482, 13 },
	{ 3, 13 },
	{ 482, 253 },
	{ 3, 253 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00149554[] = {
	{ 166, 0 },
	{ 254, 178 },
	{ 0, 83 },
	{ 88, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00149564[] = {
	{ NJD_MESHSET_TRIMESH | 0, 24, poly_00148C34, NULL, NULL, NULL, uv_00148FA4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 36, poly_00148D24, NULL, NULL, NULL, uv_00149124, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_00148F1C, NULL, NULL, NULL, uv_00149484, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 8, poly_00148F48, NULL, NULL, NULL, uv_001494D4, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_00148F98, NULL, NULL, NULL, uv_00149554, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_001495DC[] = {
	{ 3.345862f, 44.52684f, -5.623869f },
	{ 0.144027f, 41.65931f, -0.923457f },
	{ 3.435657f, 44.74707f, -5.381975f },
	{ 0.233822f, 41.87953f, -0.681564f },
	{ 3.684339f, 44.52125f, -5.399364f },
	{ 0.482504f, 41.65372f, -0.698953f },
	{ 5.880735f, 40.93715f, -1.44634f },
	{ 1.140358f, 39.97742f, 0.044094f },
	{ 5.880225f, 41.13617f, -1.322883f },
	{ 1.139848f, 40.17645f, 0.167552f },
	{ 5.961504f, 40.9666f, -1.155731f },
	{ 1.221127f, 40.00688f, 0.334703f },
	{ -7.198478f, 41.16988f, -0.5864469f },
	{ -0.820326f, 40.85638f, 0.331055f },
	{ -7.233235f, 41.35407f, -0.754109f },
	{ -0.855085f, 41.04056f, 0.163392f },
	{ -7.156805f, 41.15948f, -0.8824559f },
	{ -0.778654f, 40.84597f, 0.035046f },
	{ -5.883156f, 44.63061f, -3.397391f },
	{ -0.9234819f, 41.12634f, 0.208573f },
	{ -5.595417f, 44.87431f, -3.46799f },
	{ -0.635744f, 41.37004f, 0.137974f },
	{ -5.613116f, 44.6322f, -3.766052f },
	{ -0.653442f, 41.12793f, -0.160088f },
	{ -7.368436f, 43.77012f, 3.847236f },
	{ -0.722554f, 41.9795f, 0.75459f },
	{ -7.368285f, 44.06647f, 3.654299f },
	{ -0.722403f, 42.27586f, 0.5616519f },
	{ -7.5417f, 43.81506f, 3.428638f },
	{ -0.895818f, 42.02445f, 0.335992f },
	{ 5.543696f, 41.75359f, 5.382896f },
	{ 0.591651f, 42.1236f, 0.07289799f },
	{ 5.407393f, 41.99923f, 5.598458f },
	{ 0.455347f, 42.36924f, 0.28846f },
	{ 5.227695f, 41.72435f, 5.673974f },
	{ 0.27565f, 42.09437f, 0.363976f },
	{ -0.067985f, 44.75534f, 6.435663f },
	{ -0.067986f, 41.32704f, 1.329859f },
	{ -0.271101f, 44.96056f, 6.244189f },
	{ -0.271102f, 41.53227f, 1.138384f },
	{ -0.474217f, 44.75534f, 6.435663f },
	{ -0.474218f, 41.32704f, 1.329859f },
	{ 7.037345f, 43.80944f, -0.389004f },
	{ 0.812158f, 41.57632f, -0.250351f },
	{ 6.959629f, 44.01079f, -0.111737f },
	{ 0.734442f, 41.77767f, 0.026916f },
	{ 7.086536f, 43.74619f, 0.008309999f },
	{ 0.861349f, 41.51307f, 0.146963f },
	{ -1.438315f, 47.03167f, 2.264171f },
	{ -0.120975f, 42.19062f, 0.376121f },
	{ -1.433844f, 47.14339f, 1.902795f },
	{ -0.116504f, 42.30232f, 0.014745f },
	{ -1.771469f, 47.03167f, 2.031722f },
	{ -0.454129f, 42.19062f, 0.143671f },
	{ 1.644474f, 46.32959f, -0.00279f },
	{ 0.5827f, 42.29355f, -0.241178f },
	{ 1.460757f, 46.38434f, 0.250921f },
	{ 0.398983f, 42.34831f, 0.012533f },
	{ 1.758903f, 46.30251f, 0.30246f },
	{ 0.697129f, 42.26648f, 0.064072f },
	{ -0.402726f, 45.99438f, -4.257735f },
	{ -0.54625f, 41.51061f, -0.910745f },
	{ -0.187576f, 46.12661f, -4.01523f },
	{ -0.3311f, 41.64284f, -0.66824f },
	{ -0.094037f, 45.96935f, -4.30413f },
	{ -0.237561f, 41.48558f, -0.957139f },
	{ 0.767924f, 41.33622f, -7.322333f },
	{ 0.128222f, 39.91711f, -0.673457f },
	{ 1.024244f, 41.55707f, -7.256038f },
	{ 0.384542f, 40.13796f, -0.607161f },
	{ 1.173097f, 41.28413f, -7.303114f },
	{ 0.5333959f, 39.86502f, -0.654238f },
	{ 5.520312f, 39.3319f, -3.218337f },
	{ 5.435328f, 44.25816f, -17.68596f },
	{ 2.740603f, 43.12705f, -13.67328f },
	{ 0.412555f, 39.41621f, -6.606203f },
	{ 13.59836f, 44.07629f, -16.0998f },
	{ 8.469248f, 47.82116f, -12.83492f },
	{ 5.662694f, 47.01943f, -8.639053f },
	{ 3.219577f, 44.72865f, -5.057014f },
	{ 11.27553f, 42.98617f, -8.012238f },
	{ 13.97026f, 44.11728f, -12.02492f },
	{ 9.33089f, 44.14674f, -18.93032f },
	{ 10.67362f, 46.44142f, -16.21941f },
	{ 2.278422f, 38.81011f, 2.900521f },
	{ 12.01571f, 38.05119f, -5.834979f },
	{ 7.097559f, 39.16854f, -4.811404f },
	{ 0.948483f, 38.16725f, -2.24398f },
	{ 16.93528f, 36.60485f, -2.23897f },
	{ 15.34083f, 40.02784f, -3.725366f },
	{ 10.63834f, 41.87258f, -2.819229f },
	{ 4.748532f, 41.09646f, -0.783313f },
	{ 8.865608f, 39.81341f, 1.550144f },
	{ 13.78376f, 38.69605f, 0.52657f },
	{ 16.05126f, 36.28242f, -5.419744f },
	{ 16.76464f, 38.02597f, -3.760322f },
	{ -1.763736f, 37.80024f, -3.441511f },
	{ -13.52695f, 37.02378f, 3.464029f },
	{ -9.276758f, 39.49268f, 4.144584f },
	{ -2.929408f, 37.88322f, 4.38486f },
	{ -15.64903f, 33.57975f, -3.054375f },
	{ -15.53339f, 39.10027f, -1.518714f },
	{ -11.58225f, 42.26464f, -1.063047f },
	{ -5.772669f, 41.50304f, -0.565586f },
	{ -7.913395f, 39.15237f, -5.539764f },
	{ -12.16358f, 36.68347f, -6.22032f },
	{ -16.33071f, 33.7499f, 1.7878f },
	{ -16.40981f, 35.9635f, -1.446137f },
	{ -2.250749f, 38.52027f, -4.471809f },
	{ -16.96858f, 45.37937f, -5.57758f },
	{ -12.84334f, 44.32668f, -2.566499f },
	{ -5.688429f, 38.49998f, 0.221343f },
	{ -15.43364f, 44.22651f, -13.49108f },
	{ -11.81776f, 47.84022f, -7.8022f },
	{ -7.485838f, 46.75411f, -4.637467f },
	{ -3.86442f, 44.14039f, -2.004914f },
	{ -7.09906f, 44.3606f, -10.40864f },
	{ -11.2243f, 45.41328f, -13.41972f },
	{ -18.30578f, 44.20955f, -9.57001f },
	{ -15.40886f, 46.58875f, -10.44226f },
	{ -5.139301f, 38.41893f, -2.152854f },
	{ -15.30602f, 42.03255f, 12.40393f },
	{ -10.05321f, 42.19957f, 10.20689f },
	{ -2.524671f, 37.74065f, 4.163968f },
	{ -21.80046f, 40.00643f, 5.665767f },
	{ -16.18829f, 44.96484f, 7.434323f },
	{ -10.81744f, 45.24759f, 5.265216f },
	{ -5.719103f, 43.77011f, 2.872898f },
	{ -14.42219f, 41.86735f, -0.348353f },
	{ -19.675f, 41.09433f, 1.848678f },
	{ -19.61596f, 39.43974f, 10.94339f },
	{ -19.87318f, 42.56841f, 8.502094f },
	{ 0.7651269f, 38.31977f, 4.637534f },
	{ 13.4418f, 38.09739f, 5.298997f },
	{ 10.68551f, 40.24884f, 2.963645f },
	{ 4.293882f, 38.99149f, 0.474577f },
	{ 10.94709f, 35.6142f, 11.9595f },
	{ 10.82947f, 40.63855f, 10.48066f },
	{ 8.228998f, 43.44918f, 8.390924f },
	{ 3.192511f, 42.17369f, 3.213401f },
	{ 4.789054f, 39.12641f, 9.919834f },
	{ 7.545341f, 36.97496f, 12.25519f },
	{ 13.89532f, 36.17541f, 8.481406f },
	{ 12.57547f, 37.6999f, 11.2684f },
	{ -3.272711f, 39.76267f, 5.676283f },
	{ 4.914104f, 44.91004f, 15.12555f },
	{ 4.914104f, 43.52206f, 11.19582f },
	{ 2.857497f, 39.76267f, 5.676282f },
	{ -2.768462f, 45.12843f, 17.8486f },
	{ -0.207606f, 47.7813f, 12.54413f },
	{ -0.207607f, 46.65362f, 8.380387f },
	{ -0.207607f, 44.32644f, 5.056096f },
	{ -5.329318f, 43.52206f, 11.19582f },
	{ -5.329317f, 44.91004f, 15.12555f },
	{ 2.35325f, 45.12843f, 17.8486f },
	{ -0.207606f, 46.96959f, 16.19329f },
	{ 4.059532f, 37.84508f, 1.680971f },
	{ 17.54188f, 43.54565f, -7.242401f },
	{ 12.45375f, 43.41835f, -6.670192f },
	{ 3.31722f, 38.79967f, -4.314662f },
	{ 22.38707f, 40.19544f, -0.312502f },
	{ 16.04137f, 45.87019f, -0.898002f },
	{ 10.76098f, 45.34502f, -0.204754f },
	{ 5.077411f, 43.53464f, -0.013502f },
	{ 13.69413f, 41.82326f, 3.348359f },
	{ 18.78226f, 41.95056f, 2.77615f },
	{ 21.76687f, 40.99299f, -5.321777f },
	{ 20.71709f, 43.0241f, -1.961004f },
	{ -4.230572f, 42.07861f, 1.498816f },
	{ -2.019681f, 50.85975f, 10.16624f },
	{ -0.602042f, 48.52959f, 8.001739f },
	{ -0.118132f, 42.07861f, 4.368168f },
	{ -9.012233f, 52.08937f, 8.85171f },
	{ -3.255896f, 50.61187f, 4.616296f },
	{ -1.638842f, 48.25923f, 2.165983f },
	{ -0.5345179f, 44.33629f, 0.583234f },
	{ -7.473825f, 48.52959f, 3.207124f },
	{ -8.891463f, 50.85975f, 5.371627f },
	{ -5.576341f, 52.08937f, 11.24902f },
	{ -5.957272f, 52.16264f, 8.134118f },
	{ 5.417009f, 41.20636f, 0.610409f },
	{ 6.234279f, 49.54528f, -5.483294f },
	{ 4.405301f, 46.88265f, -5.217516f },
	{ 3.690232f, 41.61494f, -3.995937f },
	{ 11.33133f, 50.40537f, 0.053705f },
	{ 3.811551f, 50.36198f, -0.003116f },
	{ 1.632147f, 47.80433f, 0.410581f },
	{ 0.8969229f, 44.66586f, 0.19131f },
	{ 7.290702f, 46.19994f, 2.479573f },
	{ 9.119678f, 48.86257f, 2.213795f },
	{ 9.88863f, 50.74673f, -3.79484f },
	{ 8.131308f, 51.31863f, -0.824295f },
	{ 0.986013f, 39.06463f, -5.459369f },
	{ -5.199858f, 47.94156f, -12.32326f },
	{ -5.04008f, 45.28378f, -8.71018f },
	{ -3.67223f, 39.44247f, -4.759254f },
	{ 0.355039f, 48.49584f, -16.06944f },
	{ -0.326486f, 50.02175f, -8.676647f },
	{ -0.077731f, 47.58117f, -4.679949f },
	{ -0.209726f, 44.07047f, -2.18987f },
	{ 2.743725f, 44.65242f, -9.880054f },
	{ 2.583947f, 47.3102f, -13.49314f },
	{ -3.536864f, 48.81153f, -15.48451f },
	{ -0.961554f, 50.19002f, -13.06353f },
	{ 2.302189f, 36.27245f, -4.33785f },
	{ -3.398754f, 40.50558f, -18.19819f },
	{ -3.625503f, 40.76101f, -13.07399f },
	{ -2.785052f, 36.9264f, -4.579165f },
	{ 2.901688f, 37.9269f, -20.94717f },
	{ 1.690614f, 42.41291f, -17.18086f },
	{ 1.534933f, 42.81061f, -11.98294f },
	{ 1.022506f, 41.62925f, -6.871784f },
	{ 4.87515f, 39.66826f, -12.67075f },
	{ 5.101899f, 39.41285f, -17.79496f },
	{ -1.348638f, 38.47327f, -21.14878f },
	{ 1.337417f, 40.1735f, -20.52382f },
	{ -0.244996f, 42.54605f, -0.438228f },
	{ -0.891087f, -0.006781f, -2.868607f },
	{ 0.730529f, 42.54605f, -0.038993f },
	{ -0.766308f, 42.54605f, 0.459032f },
	{ 2.443236f, -0.006781f, -1.286452f },
	{ 0.663539f, -0.006781f, 2.586985f },
	{ 0.211544f, 42.54605f, 0.896275f },
	{ -1.123932f, 39.54546f, 0.266531f },
	{ -1.744308f, 41.62042f, 0.439862f },
	{ -0.300581f, 39.54546f, -1.17551f },
	{ 0.423067f, 39.54546f, 0.923403f },
	{ 1.175836f, 39.54546f, -0.498644f },
	{ 1.614932f, 41.62042f, -0.677819f },
	{ -0.553129f, 41.62042f, -1.657131f },
	{ 0.462928f, 41.62042f, 1.756594f },
	{ -2.872636f, -0.006781f, 0.482234f },
	{ -1.12775f, 5.977715f, 0.270902f },
	{ -0.30076f, 5.977715f, -1.17219f },
	{ 0.422049f, 5.977715f, 0.922879f },
	{ 1.174206f, 5.977715f, -0.504114f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0014A0EC[] = {
	{ -0.804227f, 0.556648f, -0.208236f },
	{ -0.804227f, 0.556648f, -0.208236f },
	{ -0.231442f, 0.892608f, 0.386891f },
	{ -0.236148f, 0.892728f, 0.383758f },
	{ 0.521738f, 0.52266f, 0.674253f },
	{ 0.521738f, 0.52266f, 0.674253f },
	{ -0.35022f, 0.493093f, -0.79637f },
	{ -0.35022f, 0.493093f, -0.79637f },
	{ -0.224647f, 0.970303f, -0.089696f },
	{ -0.220976f, 0.972253f, -0.07676399f },
	{ 0.07251099f, 0.71758f, 0.692691f },
	{ 0.07251099f, 0.717581f, 0.692691f },
	{ -0.074466f, 0.663569f, 0.7444f },
	{ -0.074466f, 0.663569f, 0.7444f },
	{ 0.054983f, 0.997631f, -0.041335f },
	{ 0.055591f, 0.99741f, -0.04564f },
	{ 0.143657f, 0.58359f, -0.79924f },
	{ 0.143657f, 0.58359f, -0.79924f },
	{ -0.234661f, 0.5157599f, 0.8239689f },
	{ -0.234661f, 0.5157599f, 0.8239689f },
	{ 0.397167f, 0.868205f, 0.297453f },
	{ 0.398105f, 0.868214f, 0.296172f },
	{ 0.711059f, 0.5245129f, -0.468275f },
	{ 0.711059f, 0.5245129f, -0.468275f },
	{ 0.473095f, 0.480509f, 0.738439f },
	{ 0.473095f, 0.480509f, 0.738439f },
	{ 0.279968f, 0.958885f, 0.046446f },
	{ 0.272665f, 0.961668f, 0.029142f },
	{ -0.130329f, 0.710552f, -0.69147f },
	{ -0.130329f, 0.710552f, -0.69147f },
	{ 0.543565f, 0.703465f, -0.457903f },
	{ 0.543565f, 0.703465f, -0.457903f },
	{ -0.034774f, 0.994206f, 0.101709f },
	{ -0.041166f, 0.993341f, 0.10761f },
	{ -0.591815f, 0.5490389f, 0.590179f },
	{ -0.591815f, 0.5490389f, 0.590179f },
	{ 0.8065529f, 0.49079f, -0.329541f },
	{ 0.8065529f, 0.49079f, -0.329541f },
	{ 0, 0.830213f, -0.557447f },
	{ 0, 0.830213f, -0.557447f },
	{ -0.8065529f, 0.49079f, -0.329541f },
	{ -0.8065529f, 0.49079f, -0.329541f },
	{ -0.278537f, 0.7383299f, -0.614237f },
	{ -0.278537f, 0.7383299f, -0.614237f },
	{ -0.318924f, 0.906276f, 0.277403f },
	{ -0.323843f, 0.917182f, 0.232171f },
	{ -0.110742f, 0.366081f, 0.92397f },
	{ -0.110742f, 0.366081f, 0.92397f },
	{ 0.969315f, 0.231217f, 0.083463f },
	{ 0.9693159f, 0.231217f, 0.083463f },
	{ 0.5167519f, 0.429467f, -0.740625f },
	{ 0.516753f, 0.429467f, -0.740625f },
	{ -0.412895f, 0.231217f, -0.88094f },
	{ -0.412895f, 0.231217f, -0.88094f },
	{ -0.762137f, 0.236104f, -0.602829f },
	{ -0.762137f, 0.236104f, -0.602829f },
	{ -0.891654f, 0.21091f, 0.400588f },
	{ -0.914843f, 0.220698f, 0.338164f },
	{ -0.17365f, -0.01248f, 0.984728f },
	{ -0.17365f, -0.01248f, 0.984728f },
	{ -0.784318f, 0.387018f, 0.484832f },
	{ -0.784318f, 0.387018f, 0.484832f },
	{ 0.222231f, 0.578651f, 0.784715f },
	{ 0.162947f, 0.586837f, 0.79314f },
	{ 0.961764f, 0.143395f, 0.23334f },
	{ 0.961764f, 0.143395f, 0.23334f },
	{ -0.663741f, 0.741969f, 0.09450299f },
	{ -0.663741f, 0.741969f, 0.09450299f },
	{ 0.181666f, 0.957986f, 0.221947f },
	{ 0.161659f, 0.961819f, 0.22084f },
	{ 0.876332f, 0.446933f, 0.179705f },
	{ 0.876332f, 0.446933f, 0.179705f },
	{ 0.453579f, 0.454545f, 0.766587f },
	{ -0.407072f, 0.829006f, -0.383459f },
	{ -0.731919f, 0.656114f, -0.183873f },
	{ -0.8648289f, 0.489507f, -0.111597f },
	{ 0.560423f, 0.8279639f, -0.020021f },
	{ 0.032252f, 0.999355f, -0.015778f },
	{ -0.22112f, 0.903865f, 0.366242f },
	{ -0.337243f, 0.773567f, 0.536526f },
	{ 0.473426f, 0.627755f, 0.617893f },
	{ 0.535698f, 0.8096189f, 0.239883f },
	{ -0.178877f, 0.843003f, -0.507295f },
	{ 0.212823f, 0.931805f, -0.294018f },
	{ 0.026563f, 0.84128f, 0.539947f },
	{ 0.114362f, 0.524887f, -0.8434539f },
	{ -0.226361f, 0.697111f, -0.680292f },
	{ -0.335164f, 0.731127f, -0.594238f },
	{ 0.733614f, 0.523951f, 0.432765f },
	{ 0.548103f, 0.791127f, -0.27148f },
	{ 0.098234f, 0.980095f, -0.172523f },
	{ -0.187506f, 0.982092f, -0.018355f },
	{ 0.138397f, 0.832576f, 0.536343f },
	{ 0.475643f, 0.7242759f, 0.499187f },
	{ 0.323306f, 0.380731f, -0.8663239f },
	{ 0.738542f, 0.6250449f, -0.252733f },
	{ 0.263881f, 0.753446f, -0.602235f },
	{ -0.6544859f, 0.52891f, 0.54028f },
	{ -0.133469f, 0.802449f, 0.581603f },
	{ 0.13027f, 0.834505f, 0.535379f },
	{ -0.747817f, 0.193046f, -0.635219f },
	{ -0.786478f, 0.607741f, -0.110011f },
	{ -0.260765f, 0.963311f, -0.063503f },
	{ 0.243714f, 0.967518f, -0.06717899f },
	{ 0.015861f, 0.734859f, -0.6780339f },
	{ -0.505432f, 0.48859f, -0.711209f },
	{ -0.810662f, 0.347494f, 0.471249f },
	{ -0.938387f, 0.322404f, -0.124441f },
	{ 0.817802f, 0.411437f, -0.402392f },
	{ -0.33807f, 0.912552f, 0.230125f },
	{ -0.167326f, 0.693509f, 0.700748f },
	{ -0.139937f, 0.402348f, 0.9047289f },
	{ -0.141492f, 0.903226f, -0.405169f },
	{ -0.007644f, 0.999971f, 0.000532f },
	{ 0.3941f, 0.870486f, 0.294855f },
	{ 0.578347f, 0.6942289f, 0.42844f },
	{ 0.61338f, 0.700325f, -0.365116f },
	{ 0.113241f, 0.915965f, -0.384947f },
	{ -0.43349f, 0.901132f, -0.006866f },
	{ -0.296695f, 0.931011f, -0.212579f },
	{ 0.022566f, 0.685718f, -0.7275169f },
	{ -0.172427f, 0.828356f, 0.533006f },
	{ 0.390698f, 0.716298f, 0.578163f },
	{ 0.632413f, 0.467338f, 0.617777f },
	{ -0.604555f, 0.7797239f, -0.162923f },
	{ -0.270927f, 0.9534529f, 0.132382f },
	{ 0.22572f, 0.974154f, 0.008657999f },
	{ 0.493878f, 0.8659509f, -0.07883199f },
	{ -0.130476f, 0.825106f, -0.549705f },
	{ -0.42961f, 0.8580559f, -0.281379f },
	{ -0.473736f, 0.719097f, 0.5084029f },
	{ -0.574389f, 0.798071f, 0.182098f },
	{ -0.665314f, 0.588701f, 0.459116f },
	{ 0.777117f, 0.629007f, 0.020987f },
	{ 0.542269f, 0.736003f, -0.405272f },
	{ 0.29866f, 0.679837f, -0.669794f },
	{ 0.165659f, 0.305653f, 0.937621f },
	{ 0.435978f, 0.671914f, 0.598711f },
	{ 0.07758f, 0.9693f, 0.233322f },
	{ -0.25011f, 0.950292f, -0.185445f },
	{ -0.479668f, 0.564015f, 0.672165f },
	{ -0.055928f, 0.415438f, 0.9079f },
	{ 0.8387589f, 0.517607f, 0.169017f },
	{ 0.586607f, 0.481847f, 0.650934f },
	{ -0.7567469f, 0.442906f, -0.4808f },
	{ 0.510937f, 0.859601f, -0.005396f },
	{ 0.678803f, 0.6481709f, -0.345111f },
	{ 0.7567469f, 0.442906f, -0.4808f },
	{ -0.381668f, 0.89351f, 0.236578f },
	{ 0, 0.996822f, -0.079664f },
	{ 0, 0.8416539f, -0.5400169f },
	{ 0, 0.677529f, -0.735496f },
	{ -0.678803f, 0.6481709f, -0.345111f },
	{ -0.510937f, 0.859601f, -0.005396f },
	{ 0.381668f, 0.89351f, 0.236578f },
	{ 0, 0.966689f, 0.255954f },
	{ -0.207639f, 0.313147f, 0.926728f },
	{ 0.261205f, 0.9321899f, -0.250589f },
	{ -0.225666f, 0.871242f, -0.435904f },
	{ -0.403293f, 0.69288f, -0.597722f },
	{ 0.582694f, 0.734163f, 0.348529f },
	{ 0.198831f, 0.963926f, 0.176955f },
	{ -0.279999f, 0.921465f, 0.269264f },
	{ -0.499536f, 0.822486f, 0.271994f },
	{ -0.057519f, 0.588437f, 0.806494f },
	{ 0.381121f, 0.769742f, 0.512098f },
	{ 0.52272f, 0.832947f, -0.181557f },
	{ 0.574767f, 0.81319f, 0.091464f },
	{ -0.327444f, 0.15829f, -0.931518f },
	{ 0.502512f, 0.853575f, -0.137451f },
	{ 0.854569f, 0.505532f, -0.118953f },
	{ 0.987291f, 0.15829f, -0.014195f },
	{ -0.009091999f, 0.928032f, -0.37239f },
	{ 0.321191f, 0.836687f, -0.443611f },
	{ 0.496776f, 0.492387f, -0.714681f },
	{ 0.551793f, 0.264739f, -0.790846f },
	{ -0.182087f, 0.519241f, -0.835005f },
	{ -0.044488f, 0.851571f, -0.522348f },
	{ 0.331107f, 0.936488f, -0.115579f },
	{ 0.161817f, 0.95411f, -0.25197f },
	{ -0.222743f, -0.174844f, 0.95907f },
	{ -0.502641f, 0.7850569f, -0.361991f },
	{ -0.789592f, 0.318632f, -0.524422f },
	{ -0.805981f, 0.068954f, -0.587911f },
	{ -0.028112f, 0.795478f, 0.6053309f },
	{ -0.535665f, 0.791971f, 0.292993f },
	{ -0.88699f, 0.274496f, 0.37135f },
	{ -0.942004f, -0.093907f, 0.322195f },
	{ -0.244265f, 0.105123f, 0.963994f },
	{ -0.126368f, 0.621159f, 0.773429f },
	{ -0.228911f, 0.942957f, -0.241725f },
	{ -0.136892f, 0.963749f, 0.229016f },
	{ 0.9530399f, 0.030884f, 0.301265f },
	{ -0.5456049f, 0.802815f, 0.240422f },
	{ -0.718556f, 0.481576f, 0.501758f },
	{ -0.783971f, 0.278516f, 0.554814f },
	{ 0.595435f, 0.798384f, -0.089668f },
	{ 0.161995f, 0.922184f, 0.35119f },
	{ 0.194839f, 0.602971f, 0.773605f },
	{ 0.169565f, 0.336011f, 0.926469f },
	{ 0.925146f, 0.268666f, 0.268186f },
	{ 0.742273f, 0.6683249f, 0.048712f },
	{ -0.432391f, 0.899353f, 0.064821f },
	{ 0.099631f, 0.994909f, -0.015175f },
	{ 0.874109f, 0.362009f, 0.323857f },
	{ -0.278188f, 0.897288f, -0.342761f },
	{ -0.522438f, 0.848323f, 0.08606599f },
	{ -0.680833f, 0.681747f, 0.267746f },
	{ 0.481924f, 0.664814f, -0.5707639f },
	{ 0.191564f, 0.93402f, -0.301513f },
	{ 0.189602f, 0.960966f, 0.201485f },
	{ 0.165897f, 0.857467f, 0.48706f },
	{ 0.799059f, 0.584516f, 0.140874f },
	{ 0.604144f, 0.728186f, -0.323659f },
	{ -0.17941f, 0.790832f, -0.585147f },
	{ 0.16099f, 0.772884f, -0.613785f },
	{ -0.160474f, 0.900408f, -0.404367f },
	{ -0.283468f, 0.287027f, -0.91502f },
	{ 0.485641f, 0.871859f, -0.06336199f },
	{ -0.453339f, 0.867344f, 0.205423f },
	{ 0.904923f, 0.244034f, -0.348658f },
	{ 0.270455f, 0.249933f, 0.929725f },
	{ 0.164159f, 0.843908f, 0.510756f },
	{ -0.934171f, -0.212522f, 0.286634f },
	{ -0.9533809f, 0.197663f, 0.22802f },
	{ -0.292841f, -0.133936f, -0.946734f },
	{ 0.340598f, -0.183401f, 0.922148f },
	{ 0.940027f, -0.12768f, -0.316302f },
	{ 0.902564f, 0.266621f, -0.33807f },
	{ -0.304754f, 0.273211f, -0.9124039f },
	{ 0.274285f, 0.147374f, 0.950289f },
	{ -0.930676f, 0.290801f, 0.221982f },
	{ -0.943285f, 0.16192f, 0.289821f },
	{ -0.293214f, 0.154892f, -0.943416f },
	{ 0.327656f, 0.126943f, 0.9362299f },
	{ 0.939656f, 0.131283f, -0.31593f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0014ABFC = { vertex_001495DC, normal_0014A0EC, LengthOfArray<Sint32>(vertex_001495DC), meshlist_00149564, matlist_00148BD0, LengthOfArray<Uint16>(meshlist_00149564), LengthOfArray<Uint16>(matlist_00148BD0), { 0.293304f, 26.07793f, -1.650091f }, 32.56704f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0014AC24 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014ABFC, -217, 8, 2021, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0014AC58[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0014ACE4[] = {
	6, 5, 6, 34, 35, 7, 8,
	6, 16, 17, 27, 28, 14, 15
};

extern "C" __declspec(dllexport) Sint16 poly_0014AD00[] = {
	3, 2, 5, 34,
	3, 3, 32, 6,
	0x8000u | 6, 12, 23, 28, 32, 35, 6,
	3, 12, 15, 28,
	3, 10, 22, 14,
	0x8000u | 6, 14, 27, 22, 34, 30, 2
};

extern "C" __declspec(dllexport) Sint16 poly_0014AD3C[] = {
	8, 4, 0, 33, 29, 24, 20, 13, 9
};

extern "C" __declspec(dllexport) Sint16 poly_0014AD4E[] = {
	8, 1, 2, 31, 30, 21, 22, 11, 10
};

extern "C" __declspec(dllexport) Sint16 poly_0014AD60[] = {
	8, 3, 4, 32, 33, 23, 24, 12, 13
};

extern "C" __declspec(dllexport) Sint16 poly_0014AD72[] = {
	4, 26, 25, 8, 7,
	4, 16, 18, 17, 19
};

extern "C" __declspec(dllexport) Sint16 poly_0014AD86[] = {
	4, 26, 19, 25, 18
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014AD90[] = {
	{ 1020, 0 },
	{ 1020, 255 },
	{ 452, 0 },
	{ 452, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1275, 0 },
	{ 1275, 255 },
	{ 584, 0 },
	{ 584, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014ADC0[] = {
	{ 4088, 0 },
	{ 3942, 0 },
	{ 3649, 85 },
	{ 4088, 0 },
	{ 3649, 141 },
	{ 3942, 0 },
	{ 146, 254 },
	{ 438, 141 },
	{ 438, 85 },
	{ 3649, 141 },
	{ 3649, 85 },
	{ 3942, 0 },
	{ 146, 254 },
	{ 0, 254 },
	{ 438, 85 },
	{ 146, 254 },
	{ 438, 141 },
	{ 0, 254 },
	{ 0, 254 },
	{ 438, 85 },
	{ 438, 141 },
	{ 3649, 85 },
	{ 3649, 141 },
	{ 4088, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014AE20[] = {
	{ 0 },
	{ 0, 255 },
	{ 346, 0 },
	{ 346, 255 },
	{ 2298, 0 },
	{ 2298, 255 },
	{ 2550, 0 },
	{ 2550, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014AE40[] = {
	{ 4080, 0 },
	{ 4080, 255 },
	{ 3523, 0 },
	{ 3523, 255 },
	{ 400, 0 },
	{ 400, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014AE60[] = {
	{ 4080, 0 },
	{ 4080, 255 },
	{ 3523, 0 },
	{ 3523, 255 },
	{ 400, 0 },
	{ 400, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014AE80[] = {
	{ 510, 255 },
	{ 510, 0 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0 },
	{ 510, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014AEA0[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0014AEB0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0014ACE4, NULL, NULL, NULL, uv_0014AD90, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_0014AD00, NULL, NULL, NULL, uv_0014ADC0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0014AD3C, NULL, NULL, NULL, uv_0014AE20, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_0014AD4E, NULL, NULL, NULL, uv_0014AE40, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_0014AD60, NULL, NULL, NULL, uv_0014AE60, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, poly_0014AD72, NULL, NULL, NULL, uv_0014AE80, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 1, poly_0014AD86, NULL, NULL, NULL, uv_0014AEA0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0014AF58[] = {
	{ -22.55005f, -27.5f, 140 },
	{ -22.55005f, 27.5f, 140 },
	{ -22.55005f, 22.5f, 140 },
	{ -22.55005f, -6.5f, 140 },
	{ -22.55005f, -10.5f, 140 },
	{ -22.55005f, 22.5f, 130 },
	{ -22.55005f, -6.5f, 130 },
	{ -7.449951f, 22.5f, 90 },
	{ -7.449951f, -6.5f, 90 },
	{ 22.44995f, -27.5f, -130 },
	{ 22.44995f, 22.5f, -130 },
	{ 22.44995f, 27.5f, -130 },
	{ 22.44995f, -6.5f, -130 },
	{ 22.55005f, -10.5f, -130 },
	{ 22.44995f, 22.5f, -140 },
	{ 22.44995f, -6.5f, -140 },
	{ -7.449951f, 22.5f, -60 },
	{ -7.449951f, -6.5f, -60 },
	{ -7.449951f, 22.5f, 10 },
	{ -7.449951f, -6.5f, 10 },
	{ 2.550049f, -27.5f, -110 },
	{ 2.550049f, 27.5f, -110 },
	{ 2.550049f, 22.5f, -110 },
	{ 2.550049f, -6.5f, -110 },
	{ 2.550049f, -10.5f, -110 },
	{ -7.449951f, 22.5f, 20 },
	{ -7.449951f, -6.5f, 20 },
	{ -7.449951f, 22.5f, -110 },
	{ -7.449951f, -6.5f, -110 },
	{ 2.550049f, -27.5f, 110 },
	{ 2.550049f, 22.5f, 110 },
	{ 2.550049f, 27.5f, 110 },
	{ 2.550049f, -6.5f, 110 },
	{ 2.550049f, -10.5f, 110 },
	{ -7.449951f, 22.5f, 110 },
	{ -7.449951f, -6.5f, 110 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0014B108[] = {
	{ 0.766961f, 0, 0.641693f },
	{ 0.766961f, 0, 0.641693f },
	{ 0.701094f, -0.405445f, 0.586585f },
	{ 0.701094f, 0.405445f, 0.586585f },
	{ 0.766961f, 0, 0.641693f },
	{ 0.425214f, -0.846243f, 0.321039f },
	{ 0.425214f, 0.846243f, 0.321039f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.707105f, -0.002082f, 0.707105f },
	{ 0.392925f, -0.832323f, 0.390959f },
	{ 0.708878f, 0, 0.705331f },
	{ 0.393353f, 0.830991f, 0.393353f },
	{ 0.707103f, 0.003359f, 0.707103f },
	{ 0.633781f, -0.446452f, 0.6316659f },
	{ 0.633781f, 0.446452f, 0.6316659f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.923879f, -0.001127f, 0.382683f },
	{ 0.924359f, 0, 0.381524f },
	{ 0.5498289f, -0.803857f, 0.226939f },
	{ 0.548099f, 0.805014f, 0.227025f },
	{ 0.92388f, 0.001831f, 0.382679f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.717428f, -0.6303999f, 0.296466f },
	{ 0.717428f, 0.6303999f, 0.296466f },
	{ 0.939937f, 0, 0.341349f },
	{ 0.723988f, -0.63774f, 0.262925f },
	{ 0.939937f, 0, 0.341349f },
	{ 0.723988f, 0.63774f, 0.262925f },
	{ 0.939937f, 0, 0.341349f },
	{ 0.586081f, -0.7860889f, 0.196401f },
	{ 0.586081f, 0.7860889f, 0.196401f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0014B2B8 = { vertex_0014AF58, normal_0014B108, LengthOfArray<Sint32>(vertex_0014AF58), meshlist_0014AEB0, matlist_0014AC58, LengthOfArray<Uint16>(meshlist_0014AEB0), LengthOfArray<Uint16>(matlist_0014AC58), { 0 }, 142.6753f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0014B2E0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014B2B8, -537.45f, 67.5f, 1920, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0014B314[] = {
	{ { 0x65FFFFFF }, { 0xFFFFFFFF }, 11, 65, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0014B328[] = {
	0x8000u | 16, 10, 49, 32, 42, 34, 43, 12, 44, 11, 45, 37, 46, 40, 47, 13, 51,
	0x8000u | 42, 26, 25, 51, 50, 13, 41, 40, 39, 37, 35, 11, 36, 12, 38, 34, 33, 32, 30, 10, 31, 49, 48, 24, 29, 0, 14, 15, 27, 16, 18, 5, 17, 1, 19, 20, 28, 21, 23, 9, 22, 26, 25,
	0x8000u | 16, 9, 26, 21, 8, 20, 7, 1, 6, 5, 4, 16, 3, 15, 2, 0, 24,
	0x8000u | 16, 26, 51, 8, 47, 7, 46, 6, 45, 4, 44, 3, 43, 2, 42, 24, 49
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014B3E4[] = {
	{ 78, -428 },
	{ 0, -278 },
	{ 225, -510 },
	{ 225, -278 },
	{ 530, -510 },
	{ 530, -278 },
	{ 685, -428 },
	{ 685, -278 },
	{ 843, -428 },
	{ 843, -278 },
	{ 997, -510 },
	{ 997, -278 },
	{ 1298, -510 },
	{ 1298, -278 },
	{ 1450, -428 },
	{ 1530, -278 },
	{ 4207, 255 },
	{ 4207, 0 },
	{ 3968, 255 },
	{ 3968, 0 },
	{ 3826, 255 },
	{ 3826, 0 },
	{ 3691, 255 },
	{ 3691, 0 },
	{ 3428, 255 },
	{ 3428, 0 },
	{ 3236, 255 },
	{ 3236, 0 },
	{ 2905, 255 },
	{ 2905, 0 },
	{ 2714, 255 },
	{ 2714, 0 },
	{ 2449, 255 },
	{ 2449, 0 },
	{ 2316, 255 },
	{ 2316, 0 },
	{ 2174, 255 },
	{ 2174, 0 },
	{ 1920, 255 },
	{ 1920, 0 },
	{ 1777, 255 },
	{ 1777, 0 },
	{ 1646, 255 },
	{ 1646, 0 },
	{ 1380, 255 },
	{ 1380, 0 },
	{ 1188, 255 },
	{ 1188, 0 },
	{ 857, 255 },
	{ 857, 0 },
	{ 666, 255 },
	{ 666, 0 },
	{ 404, 255 },
	{ 404, 0 },
	{ 268, 255 },
	{ 268, 0 },
	{ 127, 255 },
	{ 127, 0 },
	{ 1450, 173 },
	{ 1530, 24 },
	{ 1298, 255 },
	{ 1298, 24 },
	{ 997, 255 },
	{ 997, 24 },
	{ 843, 173 },
	{ 843, 24 },
	{ 685, 173 },
	{ 685, 24 },
	{ 530, 255 },
	{ 530, 24 },
	{ 225, 255 },
	{ 225, 24 },
	{ 78, 173 },
	{ 0, 24 },
	{ 1530, 24 },
	{ 1530, -278 },
	{ 1298, 24 },
	{ 1298, -278 },
	{ 997, 24 },
	{ 997, -278 },
	{ 843, 24 },
	{ 843, -278 },
	{ 685, 24 },
	{ 685, -278 },
	{ 530, 24 },
	{ 530, -278 },
	{ 225, 24 },
	{ 225, -278 },
	{ 0, 24 },
	{ 0, -278 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0014B54C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0014B328, NULL, NULL, NULL, uv_0014B3E4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0014B564[] = {
	{ -62.17777f, -6.9f, -19.30735f },
	{ 37.71111f, -6.9f, -19.30735f },
	{ -42.95554f, -6.9f, 0.211084f },
	{ -2.933343f, -6.9f, 0.211084f },
	{ 17.28888f, -6.9f, 0.211084f },
	{ 17.28888f, -6.9f, -19.30735f },
	{ 37.71111f, -6.9f, 0.211084f },
	{ 57.93331f, -6.9f, 0.211084f },
	{ 97.35557f, -6.9f, 0.211084f },
	{ 117.1778f, -6.9f, -19.30735f },
	{ -62.17777f, -6.9f, 59.30747f },
	{ 37.71111f, -6.9f, 59.30747f },
	{ 17.28888f, -6.9f, 59.30747f },
	{ 117.1778f, -6.9f, 59.30747f },
	{ -62.17777f, 4, -19.30736f },
	{ -42.95554f, -6.9f, -29.90001f },
	{ -2.933347f, -6.9f, -29.90001f },
	{ 17.28888f, 4, -19.30736f },
	{ -2.933347f, 4, -29.90001f },
	{ 37.71112f, 4, -19.30736f },
	{ 57.93331f, -6.9f, -29.90001f },
	{ 97.35555f, -6.9f, -29.90001f },
	{ 117.1778f, 4, -19.30736f },
	{ 97.35555f, 4, -29.90001f },
	{ -72.39999f, -6.9f, 0.111084f },
	{ 127.4f, 4, 0.211072f },
	{ 127.4f, -6.9f, 0.211072f },
	{ -42.95554f, 4, -29.90001f },
	{ 57.93331f, 4, -29.90001f },
	{ -72.39999f, 4, 0.111084f },
	{ -42.95554f, 4, 69.9f },
	{ -62.17777f, 4, 59.30748f },
	{ -42.95554f, -6.9f, 69.9f },
	{ -2.933347f, 4, 69.9f },
	{ -2.933347f, -6.9f, 69.9f },
	{ 57.93331f, 4, 69.9f },
	{ 37.71112f, 4, 59.30748f },
	{ 57.93331f, -6.9f, 69.9f },
	{ 17.28888f, 4, 59.30748f },
	{ 97.35555f, 4, 69.9f },
	{ 97.35555f, -6.9f, 69.9f },
	{ 117.1778f, 4, 59.30748f },
	{ -42.95554f, -6.9f, 39.78893f },
	{ -2.933347f, -6.9f, 39.78893f },
	{ 17.28888f, -6.9f, 39.78893f },
	{ 37.71112f, -6.9f, 39.78893f },
	{ 57.93331f, -6.9f, 39.78893f },
	{ 97.35555f, -6.9f, 39.78893f },
	{ -72.39999f, 4, 39.78893f },
	{ -72.39999f, -6.9f, 39.78893f },
	{ 127.4f, 4, 39.78893f },
	{ 127.4f, -6.9f, 39.78893f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0014B7D4[] = {
	{ 0.543791f, 0.647818f, 0.533502f },
	{ 0.153862f, 0.765044f, 0.625327f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.153862f, 0.765044f, 0.625327f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.541726f, 0.646464f, 0.537232f },
	{ 0.54447f, 0.647626f, -0.533042f },
	{ 0.153861f, 0.765043f, -0.6253279f },
	{ -0.153861f, 0.765043f, -0.6253279f },
	{ -0.541725f, 0.646463f, -0.537233f },
	{ 0.713827f, 0, 0.700322f },
	{ 0.188266f, 0.655087f, 0.731722f },
	{ -0.180107f, 0.657075f, 0.731993f },
	{ -0.238924f, 0.000001f, 0.971038f },
	{ -0.238924f, 0, 0.971038f },
	{ 0.238925f, 0.000001f, 0.971038f },
	{ 0.180107f, 0.6570759f, 0.731993f },
	{ -0.183293f, 0.656296f, 0.731901f },
	{ -0.710046f, 0, 0.704156f },
	{ -0.242932f, 0, 0.9700429f },
	{ 0.731972f, 0.656882f, 0.180895f },
	{ -0.971047f, 0, 0.23889f },
	{ -0.731993f, 0.657082f, 0.18008f },
	{ 0.249176f, 0, 0.968458f },
	{ 0.238925f, 0, 0.971038f },
	{ 0.970794f, 0, 0.239916f },
	{ 0.249174f, 0, -0.968459f },
	{ 0.714566f, 0, -0.699568f },
	{ 0.188264f, 0.655087f, -0.731722f },
	{ -0.238922f, 0, -0.971039f },
	{ -0.180105f, 0.6570759f, -0.731993f },
	{ 0.238922f, 0, -0.971039f },
	{ 0.238922f, 0.000001f, -0.971039f },
	{ 0.180105f, 0.6570759f, -0.731993f },
	{ -0.238922f, 0.000001f, -0.971039f },
	{ -0.24293f, 0, -0.970044f },
	{ -0.183291f, 0.656297f, -0.731901f },
	{ -0.710045f, 0, -0.704157f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.971047f, 0, -0.238888f },
	{ 0.731993f, 0.657082f, -0.180079f },
	{ -0.971047f, 0, -0.238888f },
	{ -0.731993f, 0.657082f, -0.180079f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0014BA44 = { vertex_0014B564, normal_0014B7D4, LengthOfArray<Sint32>(vertex_0014B564), meshlist_0014B54C, matlist_0014B314, LengthOfArray<Uint16>(meshlist_0014B54C), LengthOfArray<Uint16>(matlist_0014B314), { 27.5f, -1.45f, 20 }, 111.6692f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0014BA6C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014BA44, -367.5f, -7, 1900, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0014BAA0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 24, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0014BB04[] = {
	3, 12, 9, 5,
	6, 11, 13, 4, 12, 3, 5,
	3, 4, 6, 11
};

extern "C" __declspec(dllexport) Sint16 poly_0014BB22[] = {
	4, 0, 1, 14, 15,
	4, 7, 8, 17, 18
};

extern "C" __declspec(dllexport) Sint16 poly_0014BB36[] = {
	3, 13, 11, 7,
	6, 9, 12, 15, 13, 17, 7,
	3, 15, 1, 9
};

extern "C" __declspec(dllexport) Sint16 poly_0014BB54[] = {
	4, 2, 0, 16, 14,
	4, 8, 10, 18, 19
};

extern "C" __declspec(dllexport) Sint16 poly_0014BB68[] = {
	4, 5, 6, 3, 4
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014BB74[] = {
	{ 4181, 0 },
	{ 8160, 0 },
	{ 8160, 255 },
	{ 0 },
	{ 3978, 0 },
	{ 3978, 255 },
	{ 4181, 0 },
	{ 4181, 255 },
	{ 8160, 255 },
	{ 3978, 255 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014BBA4[] = {
	{ 0, 255 },
	{ 0 },
	{ 4080, 255 },
	{ 4080, 0 },
	{ 68, 0 },
	{ 68, 255 },
	{ 4080, 0 },
	{ 4080, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014BBC4[] = {
	{ 1997, 51 },
	{ 0, 50 },
	{ 34, 0 },
	{ 0, 203 },
	{ 1997, 204 },
	{ 2040, 255 },
	{ 1997, 51 },
	{ 2040, 0 },
	{ 34, 0 },
	{ 2040, 255 },
	{ 0, 254 },
	{ 0, 203 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014BBF4[] = {
	{ 0, 75 },
	{ 0 },
	{ 2550, 75 },
	{ 2550, 0 },
	{ 0, 11 },
	{ 0, 255 },
	{ 2549, 11 },
	{ 2549, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014BC14[] = {
	{ 0, 254 },
	{ 0 },
	{ 4080, 255 },
	{ 4080, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0014BC24[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0014BB04, NULL, NULL, NULL, uv_0014BB74, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0014BB22, NULL, NULL, NULL, uv_0014BBA4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_0014BB36, NULL, NULL, NULL, uv_0014BBC4, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_0014BB54, NULL, NULL, NULL, uv_0014BBF4, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_0014BB68, NULL, NULL, NULL, uv_0014BC14, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0014BC9C[] = {
	{ -119.5f, 9, 99.99927f },
	{ -119.5f, 15, 99.99927f },
	{ -119.5f, 4.999999f, 99.99927f },
	{ 114.5f, 13, 103.9989f },
	{ 114.5f, 13, 115.9989f },
	{ -119.5f, 13, 103.9993f },
	{ -119.5f, 13, 115.9993f },
	{ -115.5f, 15, 119.999f },
	{ -115.5f, 9, 119.999f },
	{ -119.5f, 15, 103.9993f },
	{ -115.5f, -5, 119.999f },
	{ -119.5f, 15, 115.9993f },
	{ 114.5f, 15, 103.9989f },
	{ 114.5f, 15, 115.9989f },
	{ 119.5f, 9, 99.99889f },
	{ 119.5f, 15, 99.99889f },
	{ 119.5f, 4.999999f, 99.99889f },
	{ 119.5f, 15, 119.999f },
	{ 119.5f, 9, 119.999f },
	{ 119.5f, -5, 119.999f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0014BD8C[] = {
	{ -0.00002f, 0, -1 },
	{ -0.00001f, 0.7071069f, -0.707106f },
	{ -0.00002f, 0, -1 },
	{ -0.57735f, 0.57735f, 0.577351f },
	{ -0.577351f, 0.57735f, -0.57735f },
	{ 0.000001f, 0.7071069f, 0.707106f },
	{ -0.00001f, 0.707106f, -0.7071069f },
	{ 0, 0.832054f, 0.554695f },
	{ 0, 0, 1 },
	{ 0.000001f, 0.707106f, 0.7071069f },
	{ 0, 0, 1 },
	{ -0.00001f, 0.447199f, -0.894435f },
	{ -0.301511f, 0.904534f, 0.301511f },
	{ -0.301512f, 0.904534f, -0.301511f },
	{ -0.00002f, 0, -1 },
	{ -0.00001f, 0.707106f, -0.7071069f },
	{ -0.00002f, 0, -1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0014BE7C = { vertex_0014BC9C, normal_0014BD8C, LengthOfArray<Sint32>(vertex_0014BC9C), meshlist_0014BC24, matlist_0014BAA0, LengthOfArray<Uint16>(meshlist_0014BC24), LengthOfArray<Uint16>(matlist_0014BAA0), { -0.00015f, 5, 109.999f }, 119.9177f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0014BEA4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014BE7C, -294.5f, -5, 1910.001f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0014BED8[] = {
	{ { 0x65FFFFFF }, { 0xFFFFFFFF }, 11, 65, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0014BEEC[] = {
	0x8000u | 14, 25, 27, 24, 26, 36, 37, 14, 20, 8, 6, 9, 7, 41, 34,
	0x8000u | 8, 15, 14, 10, 8, 11, 9, 16, 41,
	0x8000u | 14, 27, 29, 26, 28, 37, 38, 20, 19, 6, 4, 7, 5, 34, 21,
	0x8000u | 14, 29, 31, 28, 30, 38, 39, 19, 18, 4, 2, 5, 3, 21, 13,
	0x8000u | 14, 31, 33, 30, 32, 39, 40, 18, 17, 2, 1, 3, 0, 13, 12,
	4, 23, 22, 25, 24,
	0x8000u | 6, 22, 24, 35, 36, 15, 14
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014BF90[] = {
	{ 434, 118 },
	{ 470, 0 },
	{ 350, 18 },
	{ 380, -98 },
	{ 290, -1 },
	{ 290, -127 },
	{ 229, 18 },
	{ 207, -98 },
	{ 187, 73 },
	{ 136, -15 },
	{ 155, 156 },
	{ 89, 108 },
	{ 144, 255 },
	{ 72, 255 },
	{ 1008, 0 },
	{ 1008, 58 },
	{ 948, 0 },
	{ 948, 58 },
	{ 884, 0 },
	{ 884, 58 },
	{ 815, 0 },
	{ 815, 58 },
	{ 2295, 58 },
	{ 2295, 137 },
	{ 2151, 58 },
	{ 2151, 137 },
	{ 1894, 58 },
	{ 1894, 137 },
	{ 1466, 58 },
	{ 1466, 137 },
	{ 1179, 58 },
	{ 1179, 137 },
	{ 1020, 58 },
	{ 1020, 137 },
	{ 905, 58 },
	{ 905, 137 },
	{ 470, 0 },
	{ 510, -133 },
	{ 380, -98 },
	{ 410, -216 },
	{ 290, -127 },
	{ 290, -255 },
	{ 207, -98 },
	{ 179, -216 },
	{ 136, -15 },
	{ 84, -105 },
	{ 89, 108 },
	{ 22, 59 },
	{ 72, 255 },
	{ 0, 254 },
	{ 2198, 137 },
	{ 2198, 255 },
	{ 2058, 137 },
	{ 2058, 255 },
	{ 1816, 137 },
	{ 1816, 255 },
	{ 1524, 137 },
	{ 1524, 255 },
	{ 1275, 137 },
	{ 1275, 255 },
	{ 1098, 137 },
	{ 1098, 255 },
	{ 961, 137 },
	{ 961, 255 },
	{ 131, 0 },
	{ 39, 0 },
	{ 131, 58 },
	{ 39, 58 },
	{ 2333, 0 },
	{ 2333, 58 },
	{ 2295, 0 },
	{ 2295, 58 },
	{ 3303, 0 },
	{ 3303, 58 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0014C0B8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_0014BEEC, NULL, NULL, NULL, uv_0014BF90, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0014C0D0[] = {
	{ -37.02457f, 0.000012f, 15.294f },
	{ -28.33702f, 0.000012f, 28.25953f },
	{ -28.33702f, 6.060011f, 28.25953f },
	{ -37.02457f, 6.060011f, 15.294f },
	{ -21.25241f, 6.060012f, 21.19471f },
	{ -27.76803f, 6.060012f, 11.4705f },
	{ -21.25241f, 10.10001f, 21.19471f },
	{ -27.76803f, 10.10001f, 11.4705f },
	{ -14.2386f, 10.10001f, 14.20053f },
	{ -18.60409f, 10.10001f, 7.685344f },
	{ -14.2386f, 13.13001f, 14.20053f },
	{ -18.60409f, 13.13001f, 7.685344f },
	{ -40.06326f, 0.000012f, 0.000492f },
	{ -40.06326f, 6.060011f, 0.000492f },
	{ -8.375313f, 10.10001f, 18.55382f },
	{ -8.375313f, 13.13001f, 18.55382f },
	{ -20.13706f, 13.13001f, 0.000122f },
	{ -15.33518f, 0.000012f, 36.92282f },
	{ -15.33518f, 6.060011f, 36.92282f },
	{ -11.50102f, 6.060012f, 27.69215f },
	{ -11.50102f, 10.10001f, 27.69215f },
	{ -30.05607f, 6.060012f, 0.000122f },
	{ 8.378365f, 13.13001f, 18.55382f },
	{ 19.97566f, 13.13001f, 10.69895f },
	{ 8.378365f, 10.10001f, 18.55382f },
	{ 19.97566f, 10.10001f, 10.69895f },
	{ 12.50427f, 10.10001f, 27.69215f },
	{ 24.84228f, 10.10001f, 19.97499f },
	{ 12.50427f, 6.060012f, 27.69215f },
	{ 24.84228f, 6.060012f, 19.97499f },
	{ 16.67186f, 6.060011f, 36.92282f },
	{ 30.30012f, 6.060011f, 30.41268f },
	{ 16.67186f, 0.000012f, 36.92282f },
	{ 30.30012f, 0.000012f, 30.41268f },
	{ -30.05607f, 10.10001f, 0.000122f },
	{ 0.00151f, 13.13001f, 20.0825f },
	{ 0.00151f, 10.10001f, 20.0825f },
	{ 0.001541f, 10.10001f, 29.97377f },
	{ 0.001541f, 6.060012f, 29.97377f },
	{ 0.001541f, 6.060011f, 39.96503f },
	{ 0.001541f, 0.000012f, 39.96503f },
	{ -20.13706f, 10.10001f, 0.000122f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0014C2C8[] = {
	{ -0.923673f, 0, 0.383182f },
	{ -0.706193f, 0, 0.70802f },
	{ -0.526963f, 0.665719f, 0.528326f },
	{ -0.6893679f, 0.665571f, 0.285982f },
	{ -0.464068f, 0.753768f, 0.465268f },
	{ -0.606791f, 0.75386f, 0.25199f },
	{ -0.5269639f, 0.665718f, 0.528326f },
	{ -0.689201f, 0.665646f, 0.286214f },
	{ -0.480943f, 0.747465f, 0.458247f },
	{ -0.6067899f, 0.753861f, 0.25199f },
	{ -0.723983f, 0, 0.689818f },
	{ -0.92353f, 0, 0.383527f },
	{ -0.980827f, 0, 0.194882f },
	{ -0.738089f, 0.658572f, 0.146652f },
	{ -0.257898f, 0.7619669f, 0.59405f },
	{ -0.398226f, 0, 0.917287f },
	{ -0.9806809f, 0, 0.195616f },
	{ -0.381842f, 0, 0.924228f },
	{ -0.284906f, 0.6657929f, 0.6896f },
	{ -0.250964f, 0.753673f, 0.607449f },
	{ -0.284904f, 0.6657929f, 0.6896009f },
	{ -0.6514249f, 0.747503f, 0.129942f },
	{ 0.37826f, 0, 0.925699f },
	{ 0.560782f, 0, 0.8279639f },
	{ 0.247368f, 0.756528f, 0.605372f },
	{ 0.410932f, 0.680461f, 0.606719f },
	{ 0.269193f, 0.66712f, 0.694612f },
	{ 0.366039f, 0.72356f, 0.585215f },
	{ 0.238196f, 0.751995f, 0.6146269f },
	{ 0.38429f, 0.689087f, 0.6143939f },
	{ 0.226238f, 0.678531f, 0.698865f },
	{ 0.308318f, 0.698827f, 0.64543f },
	{ 0.307986f, 0, 0.951391f },
	{ 0.431039f, 0, 0.902333f },
	{ -0.738162f, 0.658358f, 0.147244f },
	{ 0, 0, 1 },
	{ 0, 0.749835f, 0.661625f },
	{ -0.005702f, 0.667329f, 0.744741f },
	{ -0.005049f, 0.751732f, 0.659449f },
	{ -0.005702f, 0.6673279f, 0.744742f },
	{ -0.007656f, 0, 0.999971f },
	{ -0.651418f, 0.7475089f, 0.129938f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0014C4C0 = { vertex_0014C0D0, normal_0014C2C8, LengthOfArray<Sint32>(vertex_0014C0D0), meshlist_0014C0B8, matlist_0014BED8, LengthOfArray<Uint16>(meshlist_0014C0B8), LengthOfArray<Uint16>(matlist_0014BED8), { -4.88157f, 6.565012f, 19.98257f }, 40.46049f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0014C4E8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014C4C0, -270.0001f, -14.00001f, 1869.999f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0014C51C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 52, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 52, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 51, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 47, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 47, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 46, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 46, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 47, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 51, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 47, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0014C684[] = {
	4, 69, 67, 37, 36,
	4, 66, 68, 45, 42
};

extern "C" __declspec(dllexport) Sint16 poly_0014C698[] = {
	14, 4, 3, 5, 2, 80, 75, 81, 78, 82, 76, 83, 77, 84, 79
};

extern "C" __declspec(dllexport) Sint16 poly_0014C6B6[] = {
	4, 68, 69, 42, 37,
	4, 67, 66, 36, 45
};

extern "C" __declspec(dllexport) Sint16 poly_0014C6CA[] = {
	0x8000u | 14, 0, 3, 1, 2, 70, 75, 71, 78, 72, 76, 73, 77, 74, 79,
	4, 11, 9, 10, 8,
	4, 17, 15, 16, 14,
	4, 23, 21, 22, 20,
	4, 29, 27, 28, 26,
	4, 35, 33, 34, 32
};

extern "C" __declspec(dllexport) Sint16 poly_0014C71A[] = {
	14, 84, 74, 83, 73, 82, 72, 81, 71, 80, 70, 5, 1, 4, 0
};

extern "C" __declspec(dllexport) Sint16 poly_0014C738[] = {
	4, 65, 64, 58, 55,
	4, 63, 62, 50, 49
};

extern "C" __declspec(dllexport) Sint16 poly_0014C74C[] = {
	4, 62, 65, 49, 58,
	4, 64, 63, 55, 50
};

extern "C" __declspec(dllexport) Sint16 poly_0014C760[] = {
	3, 67, 69, 48,
	5, 69, 68, 48, 66, 67
};

extern "C" __declspec(dllexport) Sint16 poly_0014C774[] = {
	4, 43, 46, 42, 45,
	4, 38, 39, 36, 37
};

extern "C" __declspec(dllexport) Sint16 poly_0014C788[] = {
	4, 44, 47, 43, 46,
	4, 40, 41, 38, 39
};

extern "C" __declspec(dllexport) Sint16 poly_0014C79C[] = {
	4, 46, 38, 45, 36,
	4, 39, 43, 37, 42
};

extern "C" __declspec(dllexport) Sint16 poly_0014C7B0[] = {
	4, 47, 40, 46, 38,
	4, 41, 44, 39, 43
};

extern "C" __declspec(dllexport) Sint16 poly_0014C7C4[] = {
	4, 7, 11, 6, 10,
	4, 13, 17, 12, 16,
	4, 19, 23, 18, 22,
	4, 25, 29, 24, 28,
	4, 31, 35, 30, 34
};

extern "C" __declspec(dllexport) Sint16 poly_0014C7F6[] = {
	4, 9, 7, 8, 6,
	4, 15, 13, 14, 12,
	4, 21, 19, 20, 18,
	4, 27, 25, 26, 24,
	4, 33, 31, 32, 30
};

extern "C" __declspec(dllexport) Sint16 poly_0014C828[] = {
	0x8000u | 6, 54, 52, 57, 56, 60, 59,
	0x8000u | 6, 52, 54, 51, 53, 59, 60
};

extern "C" __declspec(dllexport) Sint16 poly_0014C844[] = {
	4, 59, 51, 58, 49,
	4, 52, 56, 50, 55
};

extern "C" __declspec(dllexport) Sint16 poly_0014C858[] = {
	3, 63, 64, 61,
	0x8000u | 5, 63, 62, 61, 65, 64
};

extern "C" __declspec(dllexport) Sint16 poly_0014C86C[] = {
	4, 56, 59, 55, 58,
	4, 51, 52, 49, 50
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014C880[] = {
	{ 0 },
	{ 255, 0 },
	{ 26, 255 },
	{ 228, 255 },
	{ 255, 0 },
	{ 0 },
	{ 228, 255 },
	{ 26, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014C8A0[] = {
	{ 0 },
	{ 0, 255 },
	{ 316, 0 },
	{ 310, 255 },
	{ 856, 0 },
	{ 851, 255 },
	{ 1394, 0 },
	{ 1391, 255 },
	{ 1934, 0 },
	{ 1931, 255 },
	{ 2473, 0 },
	{ 2471, 255 },
	{ 3060, 0 },
	{ 3059, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014C8D8[] = {
	{ 0 },
	{ 255, 0 },
	{ 26, 255 },
	{ 228, 255 },
	{ 255, 0 },
	{ 0 },
	{ 228, 255 },
	{ 26, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014C8F8[] = {
	{ 255, 255 },
	{ 0, 254 },
	{ 255, -67 },
	{ 0, -55 },
	{ 255, -605 },
	{ 0, -596 },
	{ 255, -1144 },
	{ 0, -1136 },
	{ 254, -1681 },
	{ 0, -1676 },
	{ 254, -2219 },
	{ 0, -2216 },
	{ 255, -2805 },
	{ 0, -2805 },
	{ 255, -508 },
	{ 0, -508 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, -508 },
	{ 0, -508 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, -508 },
	{ 0, -508 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, -508 },
	{ 0, -508 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, -508 },
	{ 0, -508 },
	{ 255, 254 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014C980[] = {
	{ 3060, 0 },
	{ 3060, 255 },
	{ 2473, 0 },
	{ 2474, 255 },
	{ 1934, 0 },
	{ 1936, 255 },
	{ 1394, 0 },
	{ 1399, 255 },
	{ 856, 0 },
	{ 860, 255 },
	{ 316, 0 },
	{ 322, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014C9B8[] = {
	{ 255, 0 },
	{ 0 },
	{ 228, 254 },
	{ 26, 254 },
	{ 0 },
	{ 255, 0 },
	{ 26, 254 },
	{ 228, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014C9D8[] = {
	{ 255, 0 },
	{ 0 },
	{ 228, 254 },
	{ 26, 254 },
	{ 0 },
	{ 255, 0 },
	{ 26, 254 },
	{ 228, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014C9F8[] = {
	{ 255, 0 },
	{ 255, 255 },
	{ 127, 127 },
	{ 255, 255 },
	{ 0, 255 },
	{ 127, 127 },
	{ 0 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014CA18[] = {
	{ 254, -255 },
	{ 0, -255 },
	{ 254, 255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014CA38[] = {
	{ 0, 255 },
	{ 510, 255 },
	{ 0 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014CA58[] = {
	{ 254, -255 },
	{ 0, -255 },
	{ 254, 255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014CA78[] = {
	{ 0, 255 },
	{ 508, 255 },
	{ 0 },
	{ 508, 0 },
	{ 508, 255 },
	{ 0, 255 },
	{ 508, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014CA98[] = {
	{ 0, -420 },
	{ 254, -508 },
	{ 0, 255 },
	{ 254, 149 },
	{ 0, -420 },
	{ 254, -508 },
	{ 0, 255 },
	{ 254, 149 },
	{ 0, -420 },
	{ 254, -508 },
	{ 0, 255 },
	{ 254, 149 },
	{ 0, -420 },
	{ 254, -508 },
	{ 0, 255 },
	{ 254, 149 },
	{ 0, -420 },
	{ 254, -508 },
	{ 0, 255 },
	{ 254, 149 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014CAE8[] = {
	{ 254, -508 },
	{ 0, -420 },
	{ 254, 149 },
	{ 0, 255 },
	{ 254, -508 },
	{ 0, -420 },
	{ 254, 149 },
	{ 0, 255 },
	{ 254, -508 },
	{ 0, -420 },
	{ 254, 149 },
	{ 0, 255 },
	{ 254, -508 },
	{ 0, -420 },
	{ 254, 149 },
	{ 0, 255 },
	{ 254, -508 },
	{ 0, -420 },
	{ 254, 149 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014CB38[] = {
	{ 508, 255 },
	{ 508, 0 },
	{ 0, 255 },
	{ 0 },
	{ 508, 255 },
	{ 508, 0 },
	{ 0 },
	{ 0, 255 },
	{ 508, 0 },
	{ 508, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014CB68[] = {
	{ 254, -254 },
	{ 0, -254 },
	{ 254, 255 },
	{ 0, 255 },
	{ 0, -254 },
	{ 254, -254 },
	{ 0, 255 },
	{ 254, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014CB88[] = {
	{ 255, 255 },
	{ 0, 255 },
	{ 127, 127 },
	{ 255, 255 },
	{ 255, 0 },
	{ 127, 127 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014CBA8[] = {
	{ 255, -254 },
	{ 0, -254 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, -254 },
	{ 255, -254 },
	{ 0, 255 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0014CBC8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0014C684, NULL, NULL, NULL, uv_0014C880, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0014C698, NULL, NULL, NULL, uv_0014C8A0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0014C6B6, NULL, NULL, NULL, uv_0014C8D8, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 6, poly_0014C6CA, NULL, NULL, NULL, uv_0014C8F8, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_0014C71A, NULL, NULL, NULL, uv_0014C980, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, poly_0014C738, NULL, NULL, NULL, uv_0014C9B8, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, poly_0014C74C, NULL, NULL, NULL, uv_0014C9D8, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 2, poly_0014C760, NULL, NULL, NULL, uv_0014C9F8, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 2, poly_0014C774, NULL, NULL, NULL, uv_0014CA18, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 2, poly_0014C788, NULL, NULL, NULL, uv_0014CA38, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 2, poly_0014C79C, NULL, NULL, NULL, uv_0014CA58, NULL },
	{ NJD_MESHSET_TRIMESH | 11, 2, poly_0014C7B0, NULL, NULL, NULL, uv_0014CA78, NULL },
	{ NJD_MESHSET_TRIMESH | 12, 5, poly_0014C7C4, NULL, NULL, NULL, uv_0014CA98, NULL },
	{ NJD_MESHSET_TRIMESH | 13, 5, poly_0014C7F6, NULL, NULL, NULL, uv_0014CAE8, NULL },
	{ NJD_MESHSET_TRIMESH | 14, 2, poly_0014C828, NULL, NULL, NULL, uv_0014CB38, NULL },
	{ NJD_MESHSET_TRIMESH | 15, 2, poly_0014C844, NULL, NULL, NULL, uv_0014CB68, NULL },
	{ NJD_MESHSET_TRIMESH | 16, 2, poly_0014C858, NULL, NULL, NULL, uv_0014CB88, NULL },
	{ NJD_MESHSET_TRIMESH | 17, 2, poly_0014C86C, NULL, NULL, NULL, uv_0014CBA8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0014CD78[] = {
	{ 13.55041f, -13.75f, -9.5f },
	{ 12.65198f, -10.75f, -5.43042f },
	{ 10.62778f, -10.75f, -5.972778f },
	{ 11.47272f, -13.75f, -9.5f },
	{ 12.51858f, -12.25f, -9.5f },
	{ 11.64679f, -9.25f, -5.699707f },
	{ -4.710266f, 2.450001f, 10.35815f },
	{ -4.710266f, 13.95f, 10.35815f },
	{ -6.316956f, 4.25f, 9.711304f },
	{ -6.316956f, 15.45f, 9.711304f },
	{ -6.073883f, 4.25f, 11.42615f },
	{ -6.073883f, 15.45f, 11.42615f },
	{ 0.616516f, -3.549999f, 8.299561f },
	{ 0.616516f, 7.950001f, 8.299561f },
	{ -1.104523f, -1.75f, 8.104491f },
	{ -1.104523f, 9.450001f, 8.104491f },
	{ -0.412842f, -1.75f, 9.692505f },
	{ -0.412842f, 9.450001f, 9.692505f },
	{ 5.389282f, -9.549998f, 4.885376f },
	{ 5.389282f, 1.950001f, 4.885376f },
	{ 3.673523f, -7.75f, 5.122314f },
	{ 3.673523f, 3.450001f, 5.122314f },
	{ 4.736572f, -7.75f, 6.489746f },
	{ 4.736572f, 3.450001f, 6.489746f },
	{ 9.105164f, -15.55f, 0.403198f },
	{ 9.105164f, -4.049999f, 0.403198f },
	{ 7.507935f, -13.75f, 1.073242f },
	{ 7.507935f, -2.549999f, 1.073242f },
	{ 8.886809f, -13.75f, 2.12146f },
	{ 8.886809f, -2.549999f, 2.12146f },
	{ 11.59863f, -21.55f, -5.117065f },
	{ 11.59863f, -10.05f, -5.117065f },
	{ 10.20645f, -19.75f, -4.086548f },
	{ 10.20645f, -8.549998f, -4.086548f },
	{ 11.79495f, -19.75f, -3.39624f },
	{ 11.79495f, -8.549998f, -3.39624f },
	{ -11, 21.75f, 12.5f },
	{ -11, 21.75f, 9.5f },
	{ -11, 9.75f, 12.5f },
	{ -11, 9.75f, 9.5f },
	{ -11, 8.25f, 12.5f },
	{ -11, 8.25f, 9.5f },
	{ -14, 21.75f, 9.5f },
	{ -14, 9.75f, 9.5f },
	{ -14, 8.25f, 9.5f },
	{ -14, 21.75f, 12.5f },
	{ -14, 9.75f, 12.5f },
	{ -14, 8.25f, 12.5f },
	{ -12.5f, 24.75f, 11 },
	{ 14, -11.25f, -9.5f },
	{ 14, -11.25f, -12.5f },
	{ 14, -23.25f, -9.5f },
	{ 14, -23.25f, -12.5f },
	{ 14, -24.75f, -9.5f },
	{ 14, -24.75f, -12.5f },
	{ 11, -11.25f, -12.5f },
	{ 11, -23.25f, -12.5f },
	{ 11, -24.75f, -12.5f },
	{ 11, -11.25f, -9.5f },
	{ 11, -23.25f, -9.5f },
	{ 11, -24.75f, -9.5f },
	{ 12.5f, -8.25f, -11 },
	{ 14.39999f, -9.25f, -9.099976f },
	{ 14.39999f, -9.25f, -12.90002f },
	{ 10.60001f, -9.25f, -12.90002f },
	{ 10.60001f, -9.25f, -9.099976f },
	{ -14.39999f, 23.75f, 12.90002f },
	{ -10.60001f, 23.75f, 12.90002f },
	{ -14.39999f, 23.75f, 9.099976f },
	{ -10.60001f, 23.75f, 9.099976f },
	{ 10.3093f, -4.75f, 0.225586f },
	{ 6.582367f, 1.25f, 5.082397f },
	{ 1.725555f, 7.25f, 8.809325f },
	{ -3.930389f, 13.25f, 11.15198f },
	{ -11, 19.25f, 11.95105f },
	{ 8.494414f, -4.75f, -0.822266f },
	{ 0.677734f, 7.25f, 6.994385f },
	{ -4.472778f, 13.25f, 9.127808f },
	{ 5.100555f, 1.25f, 3.600586f },
	{ -11, 19.25f, 9.855469f },
	{ 9.408051f, -3.25f, -0.2948f },
	{ 5.846527f, 2.75f, 4.346558f },
	{ 1.205231f, 8.75f, 7.907959f },
	{ -4.199738f, 14.75f, 10.14685f },
	{ -11, 20.75f, 10.9104f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0014D174[] = {
	{ 0.547054f, -0.591215f, 0.592618f },
	{ 0.768065f, -0.333059f, 0.546945f },
	{ -0.950729f, -0.310016f, -0.002244f },
	{ -0.746129f, -0.605725f, 0.276384f },
	{ 0.188735f, 0.778971f, -0.5979829f },
	{ 0.262975f, 0.719784f, -0.6424609f },
	{ 0.990102f, 0, -0.140353f },
	{ 0.990098f, 0, -0.140377f },
	{ -0.319264f, 0, -0.947666f },
	{ -0.906693f, 0, -0.421792f },
	{ -0.043279f, 0, 0.999063f },
	{ -0.753748f, 0, 0.657164f },
	{ 0.916811f, 0, -0.399321f },
	{ 0.916819f, 0, -0.399303f },
	{ -0.5603859f, 0, -0.828231f },
	{ -0.986343f, 0, -0.164703f },
	{ 0.224746f, 0, 0.974418f },
	{ -0.551184f, 0, 0.834384f },
	{ 0.789492f, 0, -0.61376f },
	{ 0.789488f, 0, -0.613766f },
	{ -0.747925f, 0, -0.663783f },
	{ -0.996426f, 0, 0.084475f },
	{ 0.458855f, 0, 0.8885109f },
	{ -0.327584f, 0, 0.944822f },
	{ 0.6051829f, 0, -0.796087f },
	{ 0.6051829f, 0, -0.796087f },
	{ -0.8934259f, 0, -0.44921f },
	{ -0.941225f, 0, 0.33778f },
	{ 0.671838f, 0, 0.740698f },
	{ -0.073685f, 0, 0.997282f },
	{ 0.398575f, 0, -0.917136f },
	{ 0.398616f, 0, -0.917118f },
	{ -0.9746f, 0, -0.223954f },
	{ -0.833931f, 0, 0.551869f },
	{ 0.828653f, 0, 0.5597619f },
	{ 0.165513f, 0, 0.986208f },
	{ 0.699464f, -0.146651f, 0.69946f },
	{ 0.699464f, -0.146651f, -0.69946f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.699464f, -0.146651f, -0.69946f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.699464f, -0.146651f, 0.69946f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 1, 0 },
	{ 0.699464f, -0.146651f, 0.69946f },
	{ 0.699464f, -0.146651f, -0.69946f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.699464f, -0.146651f, -0.69946f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.699464f, -0.146651f, 0.69946f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 1, 0 },
	{ 0.6591769f, 0.361891f, 0.659182f },
	{ 0.6591769f, 0.361891f, -0.659182f },
	{ -0.6591769f, 0.361891f, -0.659182f },
	{ -0.6591769f, 0.361891f, 0.659182f },
	{ -0.6591769f, 0.361891f, 0.659182f },
	{ 0.6591769f, 0.361891f, 0.659182f },
	{ -0.6591769f, 0.361891f, -0.659182f },
	{ 0.6591769f, 0.361891f, -0.659182f },
	{ 0.674601f, -0.300596f, 0.674208f },
	{ 0.477108f, -0.300594f, 0.82584f },
	{ 0.247116f, -0.300593f, 0.921183f },
	{ 0.032153f, -0.302874f, 0.9524879f },
	{ 0.077305f, -0.038951f, 0.996246f },
	{ -0.941561f, -0.246457f, -0.229613f },
	{ -0.700618f, -0.246458f, -0.669621f },
	{ -0.488345f, -0.255585f, -0.834383f },
	{ -0.854973f, -0.242891f, -0.458285f },
	{ -0.168249f, -0.06533f, -0.983577f },
	{ 0.428427f, 0.696369f, -0.5757779f },
	{ 0.567582f, 0.69306f, -0.444429f },
	{ 0.658911f, 0.696368f, -0.284444f },
	{ 0.670041f, 0.736758f, -0.090734f },
	{ 0.6605369f, 0.75063f, -0.015654f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0014D570 = { vertex_0014CD78, normal_0014D174, LengthOfArray<Sint32>(vertex_0014CD78), meshlist_0014CBC8, matlist_0014C51C, LengthOfArray<Uint16>(meshlist_0014CBC8), LengthOfArray<Uint16>(matlist_0014C51C), { 0 }, 27.91009f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0014D598 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014D570, -325, 27.75f, 1726.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0014D5CC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 52, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 51, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 47, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 47, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 46, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 47, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 51, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0014D694[] = {
	0x8000u | 6, 69, 37, 67, 36, 66, 45,
	0x8000u | 6, 66, 45, 68, 42, 69, 37,
	0x8000u | 6, 65, 58, 64, 55, 63, 50,
	0x8000u | 6, 63, 50, 62, 49, 65, 58
};

extern "C" __declspec(dllexport) Sint16 poly_0014D6CC[] = {
	14, 84, 74, 83, 73, 82, 72, 81, 71, 80, 70, 5, 1, 4, 0,
	14, 4, 3, 5, 2, 80, 75, 81, 78, 82, 76, 83, 77, 84, 79
};

extern "C" __declspec(dllexport) Sint16 poly_0014D708[] = {
	0x8000u | 14, 0, 3, 1, 2, 70, 75, 71, 78, 72, 76, 73, 77, 74, 79,
	4, 11, 9, 10, 8,
	4, 17, 15, 16, 14,
	4, 23, 21, 22, 20,
	4, 29, 27, 28, 26,
	4, 35, 33, 34, 32
};

extern "C" __declspec(dllexport) Sint16 poly_0014D758[] = {
	3, 67, 69, 48,
	5, 69, 68, 48, 66, 67
};

extern "C" __declspec(dllexport) Sint16 poly_0014D76C[] = {
	4, 43, 46, 42, 45,
	4, 38, 39, 36, 37
};

extern "C" __declspec(dllexport) Sint16 poly_0014D780[] = {
	0x8000u | 6, 41, 39, 44, 43, 47, 46,
	0x8000u | 6, 39, 41, 38, 40, 46, 47,
	0x8000u | 6, 54, 52, 57, 56, 60, 59,
	0x8000u | 6, 52, 54, 51, 53, 59, 60
};

extern "C" __declspec(dllexport) Sint16 poly_0014D7B8[] = {
	4, 46, 38, 45, 36,
	4, 56, 59, 55, 58,
	4, 51, 52, 49, 50,
	4, 39, 43, 37, 42
};

extern "C" __declspec(dllexport) Sint16 poly_0014D7E0[] = {
	4, 7, 11, 6, 10,
	4, 9, 7, 8, 6,
	4, 13, 17, 12, 16,
	4, 15, 13, 14, 12,
	4, 19, 23, 18, 22,
	4, 21, 19, 20, 18,
	4, 25, 29, 24, 28,
	4, 27, 25, 26, 24,
	4, 31, 35, 30, 34,
	4, 33, 31, 32, 30
};

extern "C" __declspec(dllexport) Sint16 poly_0014D844[] = {
	4, 59, 51, 58, 49,
	4, 52, 56, 50, 55
};

extern "C" __declspec(dllexport) Sint16 poly_0014D858[] = {
	3, 63, 64, 61,
	0x8000u | 5, 63, 62, 61, 65, 64
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014D86C[] = {
	{ 0 },
	{ 26, 255 },
	{ 254, 0 },
	{ 228, 255 },
	{ 0 },
	{ 26, 255 },
	{ 254, 0 },
	{ 228, 255 },
	{ 0 },
	{ 26, 255 },
	{ 255, 0 },
	{ 228, 255 },
	{ 254, 0 },
	{ 228, 254 },
	{ 0 },
	{ 26, 254 },
	{ 255, 0 },
	{ 228, 254 },
	{ 0 },
	{ 26, 254 },
	{ 254, 0 },
	{ 228, 254 },
	{ 0 },
	{ 26, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014D8CC[] = {
	{ 4080, 0 },
	{ 4080, 255 },
	{ 3424, 0 },
	{ 3424, 255 },
	{ 2714, 0 },
	{ 2714, 255 },
	{ 2003, 0 },
	{ 2006, 255 },
	{ 1330, 0 },
	{ 1330, 255 },
	{ 624, 0 },
	{ 625, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 624, 0 },
	{ 622, 255 },
	{ 1330, 0 },
	{ 1329, 255 },
	{ 2003, 0 },
	{ 2002, 255 },
	{ 2714, 0 },
	{ 2713, 255 },
	{ 3424, 0 },
	{ 3424, 255 },
	{ 4080, 0 },
	{ 4080, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014D93C[] = {
	{ 255, 255 },
	{ 0, 255 },
	{ 255, -448 },
	{ 0, -444 },
	{ 255, -1243 },
	{ 0, -1240 },
	{ 255, -2000 },
	{ 0, -1999 },
	{ 254, -2800 },
	{ 0, -2799 },
	{ 254, -3597 },
	{ 0, -3598 },
	{ 255, -4335 },
	{ 0, -4335 },
	{ 255, -508 },
	{ 0, -508 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, -508 },
	{ 0, -508 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, -508 },
	{ 0, -508 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, -508 },
	{ 0, -508 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, -508 },
	{ 0, -508 },
	{ 255, 254 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014D9C4[] = {
	{ 255, 0 },
	{ 255, 254 },
	{ 127, 127 },
	{ 255, 254 },
	{ 0, 254 },
	{ 127, 127 },
	{ 0 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014D9E4[] = {
	{ 255, -255 },
	{ 0, -255 },
	{ 255, 254 },
	{ 0, 254 },
	{ 0, -255 },
	{ 255, -255 },
	{ 0, 254 },
	{ 255, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014DA04[] = {
	{ 508, 255 },
	{ 508, 0 },
	{ 0, 255 },
	{ 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0 },
	{ 0, 255 },
	{ 510, 255 },
	{ 510, 0 },
	{ 0, 255 },
	{ 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014DA64[] = {
	{ 255, -255 },
	{ 0, -255 },
	{ 255, 254 },
	{ 0, 254 },
	{ 254, -254 },
	{ 0, -254 },
	{ 254, 255 },
	{ 0, 255 },
	{ 0, -254 },
	{ 254, -254 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 255, -255 },
	{ 0, 254 },
	{ 255, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014DAA4[] = {
	{ 0, -458 },
	{ 254, -510 },
	{ 0, 254 },
	{ 254, 140 },
	{ 0, -510 },
	{ 254, -458 },
	{ 0, 140 },
	{ 254, 254 },
	{ 0, -458 },
	{ 254, -510 },
	{ 0, 254 },
	{ 254, 140 },
	{ 0, -510 },
	{ 254, -458 },
	{ 0, 140 },
	{ 254, 254 },
	{ 0, -458 },
	{ 254, -510 },
	{ 0, 254 },
	{ 254, 140 },
	{ 0, -510 },
	{ 254, -458 },
	{ 0, 140 },
	{ 254, 254 },
	{ 0, -458 },
	{ 254, -510 },
	{ 0, 254 },
	{ 254, 140 },
	{ 0, -510 },
	{ 254, -458 },
	{ 0, 140 },
	{ 254, 254 },
	{ 0, -458 },
	{ 254, -510 },
	{ 0, 254 },
	{ 254, 140 },
	{ 0, -510 },
	{ 254, -458 },
	{ 0, 140 },
	{ 254, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014DB44[] = {
	{ 254, -254 },
	{ 0, -254 },
	{ 254, 255 },
	{ 0, 255 },
	{ 0, -254 },
	{ 254, -254 },
	{ 0, 255 },
	{ 254, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014DB64[] = {
	{ 255, 255 },
	{ 0, 255 },
	{ 127, 127 },
	{ 255, 255 },
	{ 255, 0 },
	{ 127, 127 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0014DB84[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0014D694, NULL, NULL, NULL, uv_0014D86C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0014D6CC, NULL, NULL, NULL, uv_0014D8CC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 6, poly_0014D708, NULL, NULL, NULL, uv_0014D93C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_0014D758, NULL, NULL, NULL, uv_0014D9C4, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_0014D76C, NULL, NULL, NULL, uv_0014D9E4, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 4, poly_0014D780, NULL, NULL, NULL, uv_0014DA04, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 4, poly_0014D7B8, NULL, NULL, NULL, uv_0014DA64, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 10, poly_0014D7E0, NULL, NULL, NULL, uv_0014DAA4, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 2, poly_0014D844, NULL, NULL, NULL, uv_0014DB44, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 2, poly_0014D858, NULL, NULL, NULL, uv_0014DB64, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0014DC74[] = {
	{ 38.05041f, -13.75f, -35 },
	{ 36.15198f, -10.75f, -22.93042f },
	{ 34.12777f, -10.75f, -23.47278f },
	{ 35.97271f, -13.75f, -35 },
	{ 37.01858f, -12.25f, -35 },
	{ 35.14679f, -9.25f, -23.19971f },
	{ -0.210266f, 2.450001f, 9.358153f },
	{ -0.210266f, 13.62999f, 9.358153f },
	{ -1.816956f, 4.25f, 8.711304f },
	{ -1.815338f, 14.43442f, 8.712891f },
	{ -1.573883f, 4.25f, 10.42615f },
	{ -1.572266f, 14.43442f, 10.42773f },
	{ 11.61652f, -3.549999f, 5.299561f },
	{ 11.61652f, 7.630001f, 5.299561f },
	{ 9.895476f, -1.75f, 5.104492f },
	{ 9.897095f, 8.434422f, 5.106079f },
	{ 10.58716f, -1.75f, 6.692505f },
	{ 10.58878f, 8.434422f, 6.694092f },
	{ 21.88928f, -9.549998f, -2.114624f },
	{ 21.88928f, 1.630001f, -2.114624f },
	{ 20.17352f, -7.75f, -1.877686f },
	{ 20.17514f, 2.434438f, -1.876099f },
	{ 21.23657f, -7.75f, -0.510254f },
	{ 21.23819f, 2.434438f, -0.508667f },
	{ 29.60516f, -15.55f, -11.0968f },
	{ 29.60516f, -4.369999f, -11.0968f },
	{ 28.00793f, -13.75f, -10.42676f },
	{ 28.00955f, -3.565562f, -10.42517f },
	{ 29.38681f, -13.75f, -9.378539f },
	{ 29.38843f, -3.565562f, -9.376952f },
	{ 35.09863f, -21.55f, -22.61706f },
	{ 35.09863f, -10.37001f, -22.61706f },
	{ 33.70645f, -19.75f, -21.58655f },
	{ 33.70807f, -9.565578f, -21.58496f },
	{ 35.29495f, -19.75f, -20.89624f },
	{ 35.29657f, -9.565578f, -20.89465f },
	{ -11, 21.75f, 12.5f },
	{ -11, 21.75f, 9.5f },
	{ -11, 9.75f, 12.5f },
	{ -11, 9.75f, 9.5f },
	{ -11, 8.25f, 12.5f },
	{ -11, 8.25f, 9.5f },
	{ -14, 21.75f, 9.5f },
	{ -14, 9.75f, 9.5f },
	{ -14, 8.25f, 9.5f },
	{ -14, 21.75f, 12.5f },
	{ -14, 9.75f, 12.5f },
	{ -14, 8.25f, 12.5f },
	{ -12.5f, 24.75f, 11 },
	{ 38.5f, -11.25f, -35 },
	{ 38.5f, -11.25f, -38 },
	{ 38.5f, -23.25f, -35 },
	{ 38.5f, -23.25f, -38 },
	{ 38.5f, -24.75f, -35 },
	{ 38.5f, -24.75f, -38 },
	{ 35.5f, -11.25f, -38 },
	{ 35.5f, -23.25f, -38 },
	{ 35.5f, -24.75f, -38 },
	{ 35.5f, -11.25f, -35 },
	{ 35.5f, -23.25f, -35 },
	{ 35.5f, -24.75f, -35 },
	{ 37, -8.25f, -36.5f },
	{ 38.89999f, -9.25f, -34.59998f },
	{ 38.89999f, -9.25f, -38.40002f },
	{ 35.1f, -9.25f, -38.40002f },
	{ 35.1f, -9.25f, -34.59998f },
	{ -14.39999f, 23.75f, 12.90002f },
	{ -10.60001f, 23.75f, 12.90002f },
	{ -14.39999f, 23.75f, 9.099976f },
	{ -10.60001f, 23.75f, 9.099976f },
	{ 30.8093f, -4.75f, -11.27441f },
	{ 23.08237f, 1.25f, -1.917603f },
	{ 12.72555f, 7.25f, 5.809326f },
	{ 0.569611f, 13.25f, 10.15198f },
	{ -11, 19.25f, 11.95105f },
	{ 28.99441f, -4.75f, -12.32227f },
	{ 11.67773f, 7.25f, 3.994385f },
	{ 0.027222f, 13.25f, 8.127808f },
	{ 21.60055f, 1.25f, -3.399414f },
	{ -11, 19.25f, 9.855469f },
	{ 29.90805f, -3.25f, -11.7948f },
	{ 22.34653f, 2.75f, -2.653442f },
	{ 12.20523f, 8.75f, 4.907959f },
	{ 0.300262f, 14.75f, 9.146851f },
	{ -11, 20.75f, 10.9104f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0014E070[] = {
	{ 0.800212f, -0.538538f, 0.26389f },
	{ 0.7955509f, -0.460667f, 0.393554f },
	{ -0.881405f, -0.467784f, -0.065605f },
	{ -0.82447f, -0.565837f, 0.008783f },
	{ 0.109506f, 0.966525f, -0.23203f },
	{ 0.182677f, 0.9308619f, -0.316425f },
	{ 0.990043f, 0.000085f, -0.140766f },
	{ 0.990015f, 0.000085f, -0.140959f },
	{ -0.319398f, 0.000198f, -0.947621f },
	{ -0.805241f, 0.00022f, -0.5929469f },
	{ -0.042812f, 0.000102f, 0.999083f },
	{ -0.608326f, 0.000151f, 0.793687f },
	{ 0.916622f, 0.000137f, -0.399756f },
	{ 0.916549f, 0.000137f, -0.399922f },
	{ -0.560565f, 0.000218f, -0.82811f },
	{ -0.934211f, 0.000204f, -0.35672f },
	{ 0.225205f, 0.000063f, 0.974311f },
	{ -0.374553f, 0.000093f, 0.927205f },
	{ 0.789189f, 0.000176f, -0.6141509f },
	{ 0.7890519f, 0.000176f, -0.6143259f },
	{ -0.748105f, 0.000222f, -0.6635799f },
	{ -0.993427f, 0.000176f, -0.114465f },
	{ 0.45925f, 0.000022f, 0.888307f },
	{ -0.133442f, 0.000033f, 0.991057f },
	{ 0.6047969f, 0.000205f, -0.79638f },
	{ 0.604626f, 0.000205f, -0.796509f },
	{ -0.893565f, 0.000212f, -0.448933f },
	{ -0.989472f, 0.000135f, 0.144725f },
	{ 0.672125f, -0.00021f, 0.740438f },
	{ 0.125841f, -0.00031f, 0.99205f },
	{ 0.398165f, 0.00022f, -0.917314f },
	{ 0.39802f, 0.00022f, -0.917377f },
	{ -0.974673f, 0.00019f, -0.223634f },
	{ -0.926713f, 0.00008899999f, 0.37577f },
	{ 0.828827f, -0.0006f, 0.559504f },
	{ 0.358078f, -0.0008899999f, 0.933692f },
	{ 0.699464f, -0.146651f, 0.69946f },
	{ 0.699464f, -0.146651f, -0.69946f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.699464f, -0.146651f, -0.69946f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.699464f, -0.146651f, 0.69946f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 1, 0 },
	{ 0.699464f, -0.146651f, 0.69946f },
	{ 0.699464f, -0.146651f, -0.69946f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.699464f, -0.146651f, -0.69946f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.699464f, -0.146651f, 0.69946f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 1, 0 },
	{ 0.6591769f, 0.361891f, 0.659182f },
	{ 0.6591769f, 0.361891f, -0.659182f },
	{ -0.6591769f, 0.361891f, -0.659182f },
	{ -0.6591769f, 0.361891f, 0.659182f },
	{ -0.6591769f, 0.361891f, 0.659182f },
	{ 0.6591769f, 0.361891f, 0.659182f },
	{ -0.6591769f, 0.361891f, -0.659182f },
	{ 0.6591769f, 0.361891f, -0.659182f },
	{ 0.677562f, -0.397976f, 0.618486f },
	{ 0.508926f, -0.391995f, 0.766377f },
	{ 0.294978f, -0.395063f, 0.870007f },
	{ 0.042027f, -0.410184f, 0.911034f },
	{ 0.057142f, -0.180825f, 0.981854f },
	{ -0.868626f, -0.403191f, -0.287967f },
	{ -0.607893f, -0.406234f, -0.6822309f },
	{ -0.42833f, -0.391552f, -0.814383f },
	{ -0.768008f, -0.391669f, -0.506714f },
	{ -0.259132f, -0.210869f, -0.942542f },
	{ 0.293416f, 0.8954819f, -0.334693f },
	{ 0.360335f, 0.898142f, -0.25199f },
	{ 0.411113f, 0.902347f, -0.129447f },
	{ 0.448004f, 0.892308f, -0.055498f },
	{ 0.47192f, 0.881269f, 0.025633f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0014E46C = { vertex_0014DC74, normal_0014E070, LengthOfArray<Sint32>(vertex_0014DC74), meshlist_0014DB84, matlist_0014D5CC, LengthOfArray<Uint16>(meshlist_0014DB84), LengthOfArray<Uint16>(matlist_0014D5CC), { 12.25f, 0, -12.75f }, 36.98846f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0014E494 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014E46C, -325, 27.75f, 1752, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0014E4C8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0014E554[] = {
	6, 6, 5, 35, 34, 8, 7,
	6, 17, 16, 28, 27, 15, 14
};

extern "C" __declspec(dllexport) Sint16 poly_0014E570[] = {
	3, 5, 2, 30,
	3, 6, 35, 3,
	0x8000u | 6, 3, 32, 35, 23, 28, 15,
	3, 15, 12, 23,
	3, 14, 27, 10,
	0x8000u | 6, 10, 22, 27, 30, 34, 5
};

extern "C" __declspec(dllexport) Sint16 poly_0014E5AC[] = {
	8, 0, 4, 29, 33, 20, 24, 9, 13
};

extern "C" __declspec(dllexport) Sint16 poly_0014E5BE[] = {
	8, 11, 10, 21, 22, 31, 30, 1, 2
};

extern "C" __declspec(dllexport) Sint16 poly_0014E5D0[] = {
	8, 12, 13, 23, 24, 32, 33, 3, 4
};

extern "C" __declspec(dllexport) Sint16 poly_0014E5E2[] = {
	4, 8, 7, 26, 25,
	4, 17, 19, 16, 18
};

extern "C" __declspec(dllexport) Sint16 poly_0014E5F6[] = {
	4, 25, 18, 26, 19
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014E600[] = {
	{ 0, 255 },
	{ 0 },
	{ 637, 255 },
	{ 637, 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 0, 255 },
	{ 0 },
	{ 689, 255 },
	{ 689, 0 },
	{ 1275, 255 },
	{ 1275, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014E630[] = {
	{ 148, -255 },
	{ 0, -255 },
	{ 446, 28 },
	{ 148, -255 },
	{ 446, -84 },
	{ 0, -255 },
	{ 0, -255 },
	{ 446, 28 },
	{ 446, -84 },
	{ 3642, 28 },
	{ 3642, -84 },
	{ 4088, 253 },
	{ 4088, 253 },
	{ 3939, 253 },
	{ 3642, 28 },
	{ 4088, 253 },
	{ 3642, -84 },
	{ 3939, 253 },
	{ 3939, 253 },
	{ 3642, 28 },
	{ 3642, -84 },
	{ 446, 28 },
	{ 446, -84 },
	{ 148, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014E690[] = {
	{ 2550, 255 },
	{ 2550, 0 },
	{ 2196, 255 },
	{ 2196, 0 },
	{ 254, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014E6B0[] = {
	{ 4080, 0 },
	{ 4080, 255 },
	{ 3671, 0 },
	{ 3671, 255 },
	{ 565, 0 },
	{ 565, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014E6D0[] = {
	{ 4080, 0 },
	{ 4080, 255 },
	{ 3671, 0 },
	{ 3670, 255 },
	{ 565, 0 },
	{ 565, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014E6F0[] = {
	{ 510, 255 },
	{ 510, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0 },
	{ 510, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014E710[] = {
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0014E720[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0014E554, NULL, NULL, NULL, uv_0014E600, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_0014E570, NULL, NULL, NULL, uv_0014E630, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0014E5AC, NULL, NULL, NULL, uv_0014E690, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_0014E5BE, NULL, NULL, NULL, uv_0014E6B0, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_0014E5D0, NULL, NULL, NULL, uv_0014E6D0, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, poly_0014E5E2, NULL, NULL, NULL, uv_0014E6F0, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 1, poly_0014E5F6, NULL, NULL, NULL, uv_0014E710, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0014E7C8[] = {
	{ -22.54996f, -27.5f, -130 },
	{ -22.54996f, 27.5f, -130 },
	{ -22.54996f, 22.5f, -130 },
	{ -22.54996f, -6.5f, -130 },
	{ -22.54996f, -10.5f, -130 },
	{ -22.55005f, 22.5f, -117 },
	{ -22.55005f, -6.5f, -117 },
	{ -7.449951f, 22.5f, -90 },
	{ -7.449951f, -6.5f, -90 },
	{ 22.44995f, -27.5f, 130 },
	{ 22.44995f, 22.5f, 130 },
	{ 22.44995f, 27.5f, 130 },
	{ 22.44995f, -6.5f, 130 },
	{ 22.55005f, -10.5f, 130 },
	{ 22.44995f, 22.5f, 140 },
	{ 22.44995f, -6.5f, 140 },
	{ -7.449951f, 22.5f, 60 },
	{ -7.449951f, -6.5f, 60 },
	{ -7.449951f, 22.5f, -10 },
	{ -7.449951f, -6.5f, -10 },
	{ 2.550049f, -27.5f, 110 },
	{ 2.550049f, 27.5f, 110 },
	{ 2.550049f, 22.5f, 110 },
	{ 2.550049f, -6.5f, 110 },
	{ 2.550049f, -10.5f, 110 },
	{ -7.449951f, 22.5f, -20 },
	{ -7.449951f, -6.5f, -20 },
	{ -7.449951f, 22.5f, 110 },
	{ -7.449951f, -6.5f, 110 },
	{ 2.550051f, -27.5f, -110 },
	{ 2.550051f, 22.5f, -110 },
	{ 2.550051f, 27.5f, -110 },
	{ 2.550051f, -6.5f, -110 },
	{ 2.550051f, -10.5f, -110 },
	{ -7.449952f, 22.5f, -105 },
	{ -7.449952f, -6.5f, -105 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0014E978[] = {
	{ 0.623174f, 0, -0.782083f },
	{ 0.623174f, 0, -0.782083f },
	{ 0.541005f, -0.49631f, -0.678962f },
	{ 0.541005f, 0.49631f, -0.678962f },
	{ 0.623174f, 0, -0.782083f },
	{ 0.356968f, -0.8190269f, -0.449187f },
	{ 0.356968f, 0.8190269f, -0.449187f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.707105f, -0.002082f, -0.707105f },
	{ 0.392925f, -0.832323f, -0.390959f },
	{ 0.708878f, 0, -0.705331f },
	{ 0.393353f, 0.830991f, -0.393353f },
	{ 0.707103f, 0.003359f, -0.707103f },
	{ 0.633781f, -0.446452f, -0.6316659f },
	{ 0.633781f, 0.446452f, -0.6316659f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.923879f, -0.001127f, -0.382683f },
	{ 0.924359f, 0, -0.381524f },
	{ 0.5498289f, -0.803857f, -0.226939f },
	{ 0.548099f, 0.805014f, -0.227025f },
	{ 0.92388f, 0.001831f, -0.382679f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.717428f, -0.6303999f, -0.296466f },
	{ 0.717428f, 0.6303999f, -0.296466f },
	{ 0.900881f, 0, -0.434066f },
	{ 0.705966f, -0.621216f, -0.340151f },
	{ 0.900881f, 0, -0.434066f },
	{ 0.705966f, 0.621216f, -0.340151f },
	{ 0.900881f, 0, -0.434066f },
	{ 0.516545f, -0.8191659f, -0.249296f },
	{ 0.516545f, 0.8191659f, -0.249296f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0014EB28 = { vertex_0014E7C8, normal_0014E978, LengthOfArray<Sint32>(vertex_0014E7C8), meshlist_0014E720, matlist_0014E4C8, LengthOfArray<Uint16>(meshlist_0014E720), LengthOfArray<Uint16>(matlist_0014E4C8), { 0, 0, 5 }, 137.7725f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0014EB50 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014EB28, -172.55f, 67.5f, 1920, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0014EB84[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0014EBC0[] = {
	0x8000u | 5, 14, 0, 1, 3, 2,
	3, 14, 10, 1,
	0x8000u | 6, 16, 17, 9, 12, 8, 11
};

extern "C" __declspec(dllexport) Sint16 poly_0014EBE2[] = {
	3, 15, 5, 13,
	0x8000u | 5, 13, 4, 5, 7, 6
};

extern "C" __declspec(dllexport) Sint16 poly_0014EBF6[] = {
	0x8000u | 6, 8, 10, 9, 1, 16, 2,
	0x8000u | 6, 13, 11, 4, 12, 7, 17
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014EC14[] = {
	{ 0 },
	{ 1574, 0 },
	{ 1574, 255 },
	{ 1785, 0 },
	{ 1785, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1574, 255 },
	{ 2040, 0 },
	{ 2040, 255 },
	{ 1799, 0 },
	{ 1799, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014EC4C[] = {
	{ 0, 255 },
	{ 3544, 255 },
	{ 0 },
	{ 0 },
	{ 3544, 0 },
	{ 3544, 255 },
	{ 4080, 0 },
	{ 4080, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014EC6C[] = {
	{ 0, 255 },
	{ 0 },
	{ 3545, 255 },
	{ 3545, 0 },
	{ 4080, 255 },
	{ 4080, 0 },
	{ 0, 255 },
	{ 0 },
	{ 3544, 255 },
	{ 3545, 0 },
	{ 4080, 255 },
	{ 4080, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0014EC9C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0014EBC0, NULL, NULL, NULL, uv_0014EC14, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0014EBE2, NULL, NULL, NULL, uv_0014EC4C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0014EBF6, NULL, NULL, NULL, uv_0014EC6C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0014ECE4[] = {
	{ 173.4999f, 22.5f, -244.5f },
	{ 173.4999f, 7.500002f, -244.5f },
	{ 148.5f, 7.5f, -264.5f },
	{ 148.5f, 22.5f, -264.5f },
	{ 173.4999f, -12.50001f, -244.5f },
	{ 173.4999f, -17.50001f, -244.5f },
	{ 148.5f, -17.50001f, -264.5f },
	{ 148.5f, -12.50001f, -264.5f },
	{ 173.4999f, 6, -4.499634f },
	{ 173.4999f, 5.999998f, -244.5f },
	{ 173.5f, 7.5f, -4.499634f },
	{ 173.4999f, -12, -4.499634f },
	{ 173.4999f, -12, -244.5f },
	{ 173.5f, -12.50001f, -5 },
	{ 173.5f, 22.5f, -4.49963f },
	{ 173.5f, -17.50001f, -5 },
	{ 148.5f, 6, -264.5f },
	{ 148.5f, -12, -264.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0014EDBC[] = {
	{ 0.9013039f, 0.000001f, -0.433188f },
	{ 0.9013039f, 0.000001f, -0.433188f },
	{ 0.624696f, 0, -0.780868f },
	{ 0.624696f, 0, -0.780868f },
	{ 0.901303f, 0.000046f, -0.43319f },
	{ 0.9013039f, 0, -0.433188f },
	{ 0.624696f, 0, -0.780868f },
	{ 0.624696f, -0.0001f, -0.780868f },
	{ 1, 0, 0 },
	{ 0.9013039f, 0, -0.433188f },
	{ 1, 0.000001f, 0 },
	{ 1, 0.000062f, 0 },
	{ 0.9013039f, 0.000046f, -0.433186f },
	{ 1, 0.00011f, 0 },
	{ 1, 0.000002f, -0.00001f },
	{ 1, 0, -0.00001f },
	{ 0.624696f, 0, -0.780868f },
	{ 0.624696f, -0.0001f, -0.780868f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0014EE94 = { vertex_0014ECE4, normal_0014EDBC, LengthOfArray<Sint32>(vertex_0014ECE4), meshlist_0014EC9C, matlist_0014EB84, LengthOfArray<Uint16>(meshlist_0014EC9C), LengthOfArray<Uint16>(matlist_0014EB84), { 161, 2.499995f, -134.4998f }, 131.5296f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0014EEBC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014EE94, -1.5f, 17.5f, 1785.5f, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0014EEF0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0014EF2C[] = {
	8, 2, 3, 1, 0, 5, 4, 7, 6
};

extern "C" __declspec(dllexport) Sint16 poly_0014EF3E[] = {
	8, 3, 9, 0, 8, 4, 10, 6, 11
};

extern "C" __declspec(dllexport) Sint16 poly_0014EF50[] = {
	8, 13, 2, 12, 1, 14, 5, 15, 7
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014EF64[] = {
	{ 4080, 0 },
	{ 4080, 255 },
	{ 3665, 0 },
	{ 3665, 255 },
	{ 517, 0 },
	{ 517, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014EF84[] = {
	{ 2550, 0 },
	{ 2550, 255 },
	{ 2291, 0 },
	{ 2291, 255 },
	{ 322, 0 },
	{ 324, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014EFA4[] = {
	{ 4080, 0 },
	{ 4080, 255 },
	{ 3665, 0 },
	{ 3665, 255 },
	{ 517, 0 },
	{ 517, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0014EFC4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0014EF2C, NULL, NULL, NULL, uv_0014EF64, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0014EF3E, NULL, NULL, NULL, uv_0014EF84, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0014EF50, NULL, NULL, NULL, uv_0014EFA4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0014F00C[] = {
	{ -19.99999f, -0.300049f, 96 },
	{ -19.99999f, 4.999939f, 96 },
	{ 0.000011f, 4.999939f, 116 },
	{ 0.000011f, -0.300049f, 116 },
	{ -20.00001f, -0.300049f, -124 },
	{ -20.00001f, 4.999939f, -124 },
	{ -45, -0.300049f, -144 },
	{ -45, 4.999939f, -144 },
	{ -19.89991f, -15, 96 },
	{ -0.00004f, -15, 116 },
	{ -19.8999f, -15, -124 },
	{ -44.99999f, -15, -144 },
	{ -19.99999f, 15, 96 },
	{ 0.000011f, 15, 116 },
	{ -20.00001f, 15, -124 },
	{ -45, 15, -144 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0014F0CC[] = {
	{ 0.923997f, 0.002494f, -0.382391f },
	{ 0.92388f, 0, -0.382683f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.707106f, 0.001203f, -0.707106f },
	{ 0.900911f, 0.002478f, -0.433996f },
	{ 0.901303f, 0, -0.433189f },
	{ 0.623934f, 0.001061f, -0.781476f },
	{ 0.6246949f, 0, -0.7808689f },
	{ 0.923624f, 0.004984f, -0.383267f },
	{ 0.707105f, 0.002407f, -0.707105f },
	{ 0.901222f, 0.004961f, -0.433329f },
	{ 0.623171f, 0.002122f, -0.782083f },
	{ 0.92388f, 0, -0.382683f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.901303f, 0, -0.433189f },
	{ 0.6246949f, 0, -0.7808689f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0014F18C = { vertex_0014F00C, normal_0014F0CC, LengthOfArray<Sint32>(vertex_0014F00C), meshlist_0014EFC4, matlist_0014EEF0, LengthOfArray<Uint16>(meshlist_0014EFC4), LengthOfArray<Uint16>(matlist_0014EEF0), { -22.49999f, 0, -14 }, 131.9328f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0014F1B4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014F18C, -195, 220, 1906, 0, 0xFFFF8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0014F1E8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 67, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 67, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 68, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 67, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 68, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0014F274[] = {
	10, 1, 7, 5, 6, 4, 2, 0, 3, 1, 7,
	10, 9, 15, 13, 14, 12, 10, 8, 11, 9, 15,
	10, 19, 21, 23, 20, 22, 16, 18, 17, 19, 21,
	10, 27, 29, 31, 28, 30, 24, 26, 25, 27, 29,
	8, 48, 49, 51, 50, 55, 53, 54, 52,
	8, 56, 57, 59, 58, 63, 61, 62, 60,
	8, 150, 148, 151, 149, 147, 146, 144, 145,
	10, 130, 129, 131, 133, 135, 132, 134, 128, 130, 129,
	10, 140, 138, 136, 139, 137, 143, 141, 142, 140, 138
};

extern "C" __declspec(dllexport) Sint16 poly_0014F32E[] = {
	4, 35, 34, 39, 38,
	4, 165, 164, 163, 162,
	4, 166, 167, 152, 155,
	4, 43, 42, 47, 46,
	4, 52, 53, 49, 50,
	4, 55, 54, 51, 48,
	4, 60, 61, 57, 58,
	4, 63, 62, 59, 56,
	4, 71, 70, 67, 66,
	4, 79, 78, 75, 74,
	4, 87, 86, 83, 82,
	4, 147, 144, 151, 150,
	4, 145, 146, 148, 149,
	4, 157, 156, 158, 159,
	4, 160, 161, 154, 153,
	4, 91, 90, 95, 94,
	4, 99, 98, 103, 102,
	4, 107, 106, 111, 110,
	4, 115, 114, 119, 118,
	4, 123, 122, 127, 126
};

extern "C" __declspec(dllexport) Sint16 poly_0014F3F6[] = {
	10, 35, 32, 34, 36, 38, 37, 39, 33, 35, 32,
	10, 69, 67, 65, 66, 64, 70, 68, 71, 69, 67,
	10, 85, 83, 81, 82, 80, 86, 84, 87, 85, 83,
	10, 95, 89, 91, 88, 90, 92, 94, 93, 95, 89,
	10, 103, 97, 99, 96, 98, 100, 102, 101, 103, 97,
	10, 119, 113, 115, 112, 114, 116, 118, 117, 119, 113
};

extern "C" __declspec(dllexport) Sint16 poly_0014F47A[] = {
	4, 164, 165, 166, 167,
	4, 156, 157, 160, 161
};

extern "C" __declspec(dllexport) Sint16 poly_0014F48E[] = {
	6, 156, 165, 159, 163, 158, 162,
	6, 153, 152, 154, 155, 160, 167
};

extern "C" __declspec(dllexport) Sint16 poly_0014F4AA[] = {
	4, 165, 156, 167, 160
};

extern "C" __declspec(dllexport) Sint16 poly_0014F4B4[] = {
	10, 47, 41, 43, 40, 42, 44, 46, 45, 47, 41,
	10, 77, 75, 73, 74, 72, 78, 76, 79, 77, 75,
	10, 111, 105, 107, 104, 106, 108, 110, 109, 111, 105,
	10, 127, 121, 123, 120, 122, 124, 126, 125, 127, 121
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014F50C[] = {
	{ 0, -191 },
	{ 1020, 0 },
	{ 0 },
	{ 1020, 63 },
	{ 0, 63 },
	{ 1020, -255 },
	{ 0, -255 },
	{ 1020, -191 },
	{ 0, -191 },
	{ 1020, 0 },
	{ 0, -191 },
	{ 1020, 0 },
	{ 0 },
	{ 1020, 63 },
	{ 0, 63 },
	{ 1020, -255 },
	{ 0, -255 },
	{ 1020, -191 },
	{ 0, -191 },
	{ 1020, 0 },
	{ 0, -191 },
	{ 1020, 0 },
	{ 0 },
	{ 1020, 63 },
	{ 0, 63 },
	{ 1020, -255 },
	{ 0, -255 },
	{ 1020, -191 },
	{ 0, -191 },
	{ 1020, 0 },
	{ 0, -191 },
	{ 1020, 0 },
	{ 0 },
	{ 1020, 63 },
	{ 0, 63 },
	{ 1020, -255 },
	{ 0, -255 },
	{ 1020, -191 },
	{ 0, -191 },
	{ 1020, 0 },
	{ 0, 255 },
	{ 1020, 255 },
	{ 0, 36 },
	{ 1020, 36 },
	{ 0, -36 },
	{ 1020, -36 },
	{ 0, -255 },
	{ 1020, -255 },
	{ 0, 255 },
	{ 1530, 255 },
	{ 0, 36 },
	{ 1530, 36 },
	{ 0, -36 },
	{ 1530, -36 },
	{ 0, -255 },
	{ 1530, -255 },
	{ 2040, -255 },
	{ 0, -255 },
	{ 2040, -36 },
	{ 0, -36 },
	{ 2040, 36 },
	{ 0, 36 },
	{ 2040, 255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 765, -191 },
	{ 0, -191 },
	{ 765, 0 },
	{ 0 },
	{ 765, 63 },
	{ 0, 63 },
	{ 765, -255 },
	{ 0, -255 },
	{ 765, -191 },
	{ 0, 63 },
	{ 765, -255 },
	{ 0, -255 },
	{ 765, -191 },
	{ 0, -191 },
	{ 765, 0 },
	{ 0 },
	{ 765, 63 },
	{ 0, 63 },
	{ 765, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014F65C[] = {
	{ 255, 0 },
	{ 255, 254 },
	{ 0 },
	{ 0, 254 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 254 },
	{ 0 },
	{ 0, 254 },
	{ 0, 254 },
	{ 0 },
	{ 255, 254 },
	{ 255, 0 },
	{ 0 },
	{ 0, 254 },
	{ 255, 0 },
	{ 255, 254 },
	{ 255, 254 },
	{ 255, 0 },
	{ 0, 254 },
	{ 0 },
	{ 255, 0 },
	{ 255, 254 },
	{ 0 },
	{ 0, 254 },
	{ 255, 0 },
	{ 255, 254 },
	{ 0 },
	{ 0, 254 },
	{ 255, 0 },
	{ 255, 254 },
	{ 0 },
	{ 0, 254 },
	{ 255, 0 },
	{ 255, 254 },
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 255, 0 },
	{ 255, 254 },
	{ 0 },
	{ 0, 254 },
	{ 255, 0 },
	{ 255, 254 },
	{ 0 },
	{ 0, 254 },
	{ 255, 0 },
	{ 255, 254 },
	{ 0 },
	{ 0, 254 },
	{ 255, 0 },
	{ 255, 254 },
	{ 0 },
	{ 0, 254 },
	{ 255, 0 },
	{ 255, 254 },
	{ 0 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014F79C[] = {
	{ 1020, 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 508, 255 },
	{ 508, 0 },
	{ 764, 255 },
	{ 764, 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 255, 255 },
	{ 510, 0 },
	{ 765, 255 },
	{ 765, 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 765, 255 },
	{ 510, 0 },
	{ 765, 255 },
	{ 765, 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 765, 255 },
	{ 510, 0 },
	{ 765, 255 },
	{ 765, 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 765, 255 },
	{ 510, 0 },
	{ 765, 255 },
	{ 765, 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 765, 255 },
	{ 510, 0 },
	{ 765, 255 },
	{ 765, 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 765, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014F88C[] = {
	{ 0, 255 },
	{ 0 },
	{ 1019, 255 },
	{ 1019, 0 },
	{ 0 },
	{ 0, 255 },
	{ 1019, 0 },
	{ 1019, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014F8AC[] = {
	{ 2024, -216 },
	{ 15, -216 },
	{ 2024, 38 },
	{ 15, 38 },
	{ 2024, 242 },
	{ 15, 242 },
	{ 2024, -216 },
	{ 15, -216 },
	{ 2024, -12 },
	{ 15, -12 },
	{ 2024, 242 },
	{ 15, 242 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014F8DC[] = {
	{ 0, 255 },
	{ 0, -1785 },
	{ 508, 255 },
	{ 508, -1785 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0014F8EC[] = {
	{ 510, -510 },
	{ 765, 255 },
	{ 765, -510 },
	{ 1020, 255 },
	{ 1020, -510 },
	{ 255, 255 },
	{ 255, -510 },
	{ 510, 255 },
	{ 510, -510 },
	{ 765, 255 },
	{ 510, -510 },
	{ 765, 255 },
	{ 765, -510 },
	{ 1020, 255 },
	{ 1020, -510 },
	{ 255, 255 },
	{ 255, -510 },
	{ 510, 255 },
	{ 510, -510 },
	{ 765, 255 },
	{ 510, -510 },
	{ 765, 255 },
	{ 765, -510 },
	{ 1020, 255 },
	{ 1020, -510 },
	{ 255, 255 },
	{ 255, -510 },
	{ 510, 255 },
	{ 510, -510 },
	{ 765, 255 },
	{ 510, -510 },
	{ 765, 255 },
	{ 765, -510 },
	{ 1020, 255 },
	{ 1020, -510 },
	{ 255, 255 },
	{ 255, -510 },
	{ 510, 255 },
	{ 510, -510 },
	{ 765, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0014F98C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 9, poly_0014F274, NULL, NULL, NULL, uv_0014F50C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 20, poly_0014F32E, NULL, NULL, NULL, uv_0014F65C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 6, poly_0014F3F6, NULL, NULL, NULL, uv_0014F79C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_0014F47A, NULL, NULL, NULL, uv_0014F88C, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_0014F48E, NULL, NULL, NULL, uv_0014F8AC, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_0014F4AA, NULL, NULL, NULL, uv_0014F8DC, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 4, poly_0014F4B4, NULL, NULL, NULL, uv_0014F8EC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0014FA34[] = {
	{ -19.40888f, -3.864774f, -54.96027f },
	{ -18.37373f, -3.864774f, -54.96027f },
	{ -19.40888f, 6.004556f, -36.03643f },
	{ -18.37373f, 6.004556f, -36.03643f },
	{ -19.40888f, -6.326801f, -53.06763f },
	{ -18.37373f, -6.326801f, -53.06763f },
	{ -19.40888f, 3.542529f, -34.14379f },
	{ -18.37373f, 3.542528f, -34.14379f },
	{ 18.37411f, -3.864774f, -54.96027f },
	{ 19.40926f, -3.864774f, -54.96027f },
	{ 18.37411f, 6.004556f, -36.03643f },
	{ 19.40926f, 6.004556f, -36.03643f },
	{ 18.37411f, -6.326801f, -53.06763f },
	{ 19.40926f, -6.326801f, -53.06763f },
	{ 18.37411f, 3.542529f, -34.14379f },
	{ 19.40926f, 3.542528f, -34.14379f },
	{ 18.37411f, -3.864774f, 54.96027f },
	{ 19.40926f, -3.864774f, 54.96027f },
	{ 18.37411f, 6.004556f, 36.03643f },
	{ 19.40926f, 6.004556f, 36.03643f },
	{ 18.37411f, -6.326801f, 53.06763f },
	{ 19.40926f, -6.326801f, 53.06763f },
	{ 18.37411f, 3.542529f, 34.14379f },
	{ 19.40926f, 3.542528f, 34.14379f },
	{ -19.40888f, -3.864774f, 54.96027f },
	{ -18.37373f, -3.864774f, 54.96027f },
	{ -19.40888f, 6.004556f, 36.03643f },
	{ -18.37373f, 6.004556f, 36.03643f },
	{ -19.40888f, -6.326801f, 53.06763f },
	{ -18.37373f, -6.326801f, 53.06763f },
	{ -19.40888f, 3.542529f, 34.14379f },
	{ -18.37373f, 3.542528f, 34.14379f },
	{ 1.035324f, 6.2109f, 52.53389f },
	{ 1.035324f, 6.2109f, 55.12176f },
	{ 1.035324f, 14.4921f, 52.53389f },
	{ 1.035324f, 14.4921f, 55.12176f },
	{ -1.552536f, 6.2109f, 52.53389f },
	{ -1.552552f, 6.2109f, 55.12176f },
	{ -1.552536f, 14.4921f, 52.53389f },
	{ -1.552552f, 14.4921f, 55.12176f },
	{ -17.59737f, -14.4921f, 52.53389f },
	{ -17.59737f, -14.4921f, 55.12176f },
	{ -17.59737f, 14.4921f, 52.53389f },
	{ -17.59737f, 14.4921f, 55.12176f },
	{ -20.18524f, -14.4921f, 52.53389f },
	{ -20.18524f, -14.4921f, 55.12176f },
	{ -20.18524f, 14.4921f, 52.53389f },
	{ -20.18524f, 14.4921f, 55.12176f },
	{ -20.70282f, 9.316351f, 54.08649f },
	{ 20.7032f, 9.316351f, 54.08649f },
	{ 20.7032f, 12.4218f, 54.08649f },
	{ -20.70282f, 12.4218f, 54.08649f },
	{ 20.7032f, 9.316351f, 53.05133f },
	{ 20.7032f, 12.4218f, 53.05133f },
	{ -20.70282f, 9.316351f, 53.05133f },
	{ -20.70282f, 12.4218f, 53.05133f },
	{ -19.46063f, 9.316351f, -56.67448f },
	{ -19.46063f, 9.316351f, 2.846664f },
	{ -19.46063f, 12.4218f, 2.846664f },
	{ -19.46063f, 12.4218f, -56.67448f },
	{ -18.42547f, 9.316351f, 2.846664f },
	{ -18.42547f, 12.4218f, 2.846664f },
	{ -18.42547f, 9.316351f, -56.67448f },
	{ -18.42547f, 12.4218f, -56.67448f },
	{ -20.18523f, 6.2109f, -28.20785f },
	{ -20.18523f, 6.2109f, -25.61997f },
	{ -20.18523f, 14.4921f, -28.20785f },
	{ -20.18523f, 14.4921f, -25.61997f },
	{ -17.59735f, 6.2109f, -28.20785f },
	{ -17.59735f, 6.2109f, -25.61997f },
	{ -17.59735f, 14.4921f, -28.20785f },
	{ -17.59735f, 14.4921f, -25.61997f },
	{ -20.18521f, -14.4921f, -55.12176f },
	{ -20.18521f, -14.4921f, -52.53389f },
	{ -20.18521f, 14.4921f, -55.12176f },
	{ -20.18521f, 14.4921f, -52.53389f },
	{ -17.59734f, -14.4921f, -55.12176f },
	{ -17.59734f, -14.4921f, -52.53389f },
	{ -17.59734f, 14.4921f, -55.12176f },
	{ -17.59734f, 14.4921f, -52.53389f },
	{ -20.18523f, 6.2109f, -1.293938f },
	{ -20.18523f, 6.2109f, 1.293938f },
	{ -20.18523f, 14.4921f, -1.293938f },
	{ -20.18523f, 14.4921f, 1.293938f },
	{ -17.59735f, 6.2109f, -1.293938f },
	{ -17.59735f, 6.2109f, 1.293938f },
	{ -17.59735f, 14.4921f, -1.293938f },
	{ -17.59735f, 14.4921f, 1.293938f },
	{ 20.18562f, 6.2109f, -1.293938f },
	{ 20.18562f, 6.2109f, 1.293938f },
	{ 20.18562f, 14.4921f, -1.293938f },
	{ 20.18562f, 14.4921f, 1.293938f },
	{ 17.59775f, 6.2109f, -1.293938f },
	{ 17.59775f, 6.2109f, 1.293938f },
	{ 17.59775f, 14.4921f, -1.293938f },
	{ 17.59775f, 14.4921f, 1.293938f },
	{ 20.18562f, 6.2109f, 25.61997f },
	{ 20.18562f, 6.2109f, 28.20785f },
	{ 20.18562f, 14.4921f, 25.61997f },
	{ 20.18562f, 14.4921f, 28.20785f },
	{ 17.59775f, 6.2109f, 25.61997f },
	{ 17.59775f, 6.2109f, 28.20785f },
	{ 17.59775f, 14.4921f, 25.61997f },
	{ 17.59775f, 14.4921f, 28.20785f },
	{ 20.18562f, -14.4921f, -55.12176f },
	{ 20.18562f, -14.4921f, -52.53389f },
	{ 20.18562f, 14.4921f, -55.12176f },
	{ 20.18562f, 14.4921f, -52.53389f },
	{ 17.59775f, -14.4921f, -55.12176f },
	{ 17.59775f, -14.4921f, -52.53389f },
	{ 17.59775f, 14.4921f, -55.12176f },
	{ 17.59775f, 14.4921f, -52.53389f },
	{ 20.18562f, 6.2109f, -28.20785f },
	{ 20.18562f, 6.2109f, -25.61997f },
	{ 20.18562f, 14.4921f, -28.20785f },
	{ 20.18562f, 14.4921f, -25.61997f },
	{ 17.59775f, 6.2109f, -28.20785f },
	{ 17.59775f, 6.2109f, -25.61997f },
	{ 17.59775f, 14.4921f, -28.20785f },
	{ 17.59775f, 14.4921f, -25.61997f },
	{ 20.18562f, -14.4921f, 52.53389f },
	{ 20.18562f, -14.4921f, 55.12176f },
	{ 20.18562f, 14.4921f, 52.53389f },
	{ 20.18562f, 14.4921f, 55.12176f },
	{ 17.59775f, -14.4921f, 52.53389f },
	{ 17.59775f, -14.4921f, 55.12176f },
	{ 17.59775f, 14.4921f, 52.53389f },
	{ 17.59775f, 14.4921f, 55.12176f },
	{ -19.40326f, -4.279674f, 53.56903f },
	{ -19.40326f, -4.279674f, 54.60419f },
	{ -6.782308f, 5.235826f, 53.56903f },
	{ -6.782308f, 5.235826f, 54.60419f },
	{ -17.20738f, -6.475558f, 53.56903f },
	{ -17.20738f, -6.475559f, 54.60419f },
	{ -4.586404f, 3.039942f, 53.56903f },
	{ -4.58642f, 3.039941f, 54.60419f },
	{ 19.33022f, -4.279666f, 53.56903f },
	{ 19.33022f, -4.279666f, 54.60419f },
	{ 6.709271f, 5.235834f, 53.56903f },
	{ 6.709255f, 5.235834f, 54.60419f },
	{ 17.13432f, -6.475552f, 53.56903f },
	{ 17.13432f, -6.475552f, 54.60419f },
	{ 4.513367f, 3.039949f, 53.56903f },
	{ 4.513367f, 3.039949f, 54.60419f },
	{ 19.56453f, 9.316351f, -56.67448f },
	{ 19.56453f, 9.316351f, 56.67448f },
	{ 19.56453f, 12.4218f, 56.67448f },
	{ 19.56453f, 12.4218f, -56.67448f },
	{ 18.52938f, 9.316351f, 56.67448f },
	{ 18.52938f, 12.4218f, 56.67448f },
	{ 18.52938f, 9.316351f, -56.67448f },
	{ 18.52938f, 12.4218f, -56.67448f },
	{ 20.7032f, 3.10545f, -56.67448f },
	{ 20.7032f, 3.10545f, 56.67448f },
	{ 20.7032f, 6.2109f, 56.67448f },
	{ 20.7032f, 6.2109f, -56.67448f },
	{ -16.56222f, 6.2109f, 56.67448f },
	{ -16.56222f, 3.10545f, 56.67448f },
	{ -20.70282f, 3.10545f, 56.67448f },
	{ -20.70282f, 6.2109f, 56.67448f },
	{ 16.56258f, 6.2109f, 56.67448f },
	{ 16.56258f, 3.10545f, 56.67448f },
	{ -20.70282f, 3.10545f, -56.67448f },
	{ -20.70282f, 6.2109f, -56.67448f },
	{ -16.5622f, 3.10545f, -56.67448f },
	{ -16.5622f, 6.2109f, -56.67448f },
	{ 16.56259f, 3.10545f, -56.67448f },
	{ 16.56259f, 6.2109f, -56.67448f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00150214[] = {
	{ -0.6643299f, 0.662725f, -0.34563f },
	{ 0.6643299f, 0.662725f, -0.34563f },
	{ -0.743318f, 0.593121f, -0.30933f },
	{ 0.743318f, 0.593121f, -0.30933f },
	{ -0.743318f, -0.593121f, 0.30933f },
	{ 0.743318f, -0.5931219f, 0.30933f },
	{ -0.6643299f, -0.662725f, 0.34563f },
	{ 0.6643299f, -0.662726f, 0.345631f },
	{ -0.6643299f, 0.662725f, -0.34563f },
	{ 0.6643299f, 0.662725f, -0.34563f },
	{ -0.743318f, 0.593121f, -0.30933f },
	{ 0.743318f, 0.593121f, -0.30933f },
	{ -0.743318f, -0.593121f, 0.30933f },
	{ 0.743318f, -0.5931219f, 0.30933f },
	{ -0.6643299f, -0.662725f, 0.34563f },
	{ 0.6643299f, -0.662726f, 0.345631f },
	{ -0.6643299f, 0.662725f, 0.34563f },
	{ 0.6643299f, 0.662725f, 0.34563f },
	{ -0.743318f, 0.593121f, 0.30933f },
	{ 0.743318f, 0.593121f, 0.30933f },
	{ -0.743318f, -0.593121f, -0.30933f },
	{ 0.743318f, -0.5931219f, -0.30933f },
	{ -0.6643299f, -0.662725f, -0.34563f },
	{ 0.6643299f, -0.662726f, -0.345631f },
	{ -0.6643299f, 0.662725f, 0.34563f },
	{ 0.6643299f, 0.662725f, 0.34563f },
	{ -0.743318f, 0.593121f, 0.30933f },
	{ 0.743318f, 0.593121f, 0.30933f },
	{ -0.743318f, -0.593121f, -0.30933f },
	{ 0.743318f, -0.5931219f, -0.30933f },
	{ -0.6643299f, -0.662725f, -0.34563f },
	{ 0.6643299f, -0.662726f, -0.345631f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.707105f, 0, -0.707109f },
	{ -0.707109f, 0, 0.707105f },
	{ -0.577348f, 0.577351f, -0.577352f },
	{ -0.577352f, 0.57735f, 0.5773489f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.444971f, 0.5901909f, -0.673555f },
	{ -0.444971f, 0.59019f, 0.673555f },
	{ -0.407237f, 0.540141f, -0.736482f },
	{ -0.407237f, 0.540142f, 0.736481f },
	{ 0.407238f, -0.540144f, -0.736479f },
	{ 0.407236f, -0.540142f, 0.736482f },
	{ 0.444971f, -0.5901909f, -0.6735539f },
	{ 0.444972f, -0.590193f, 0.673552f },
	{ 0.444973f, 0.590193f, -0.673551f },
	{ 0.444971f, 0.5901909f, 0.673555f },
	{ 0.407239f, 0.540145f, -0.736478f },
	{ 0.407234f, 0.540139f, 0.7364849f },
	{ -0.407237f, -0.540142f, -0.736482f },
	{ -0.407237f, -0.540142f, 0.736482f },
	{ -0.444972f, -0.590192f, -0.673553f },
	{ -0.444972f, -0.5901909f, 0.6735539f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0, 1 },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0, 1 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, -0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_001509F4 = { vertex_0014FA34, normal_00150214, LengthOfArray<Sint32>(vertex_0014FA34), meshlist_0014F98C, matlist_0014F1E8, LengthOfArray<Uint16>(meshlist_0014F98C), LengthOfArray<Uint16>(matlist_0014F1E8), { 0.00019f, 0, 0 }, 68.4809f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00150A1C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001509F4, -821.3391f, -6.236092f, 2619.258f, 0, 0x4970, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00150A50[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 57, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 59, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 56, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 58, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00150A50_3[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 101, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_ALPHA | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};


extern "C" __declspec(dllexport) Sint16 poly_00150AA0[] = {
	0x8000u | 58, 0, 53, 1, 54, 2, 55, 3, 56, 4, 57, 5, 58, 6, 59, 7, 60, 8, 61, 9, 62, 10, 63, 11, 64, 12, 65, 13, 66, 14, 67, 15, 68, 16, 69, 17, 70, 18, 71, 19, 72, 20, 73, 21, 74, 22, 75, 23, 76, 24, 77, 25, 78, 26, 79, 27, 80, 28, 81
};

extern "C" __declspec(dllexport) Sint16 poly_00150B16[] = {
	0x8000u | 58, 110, 81, 109, 80, 108, 79, 107, 78, 106, 77, 105, 76, 104, 75, 103, 74, 102, 73, 101, 72, 100, 71, 99, 70, 98, 69, 97, 68, 96, 67, 95, 66, 94, 65, 93, 64, 92, 63, 91, 62, 90, 61, 89, 60, 88, 59, 87, 58, 86, 57, 85, 56, 84, 55, 83, 54, 82, 53
};

extern "C" __declspec(dllexport) Sint16 poly_00150B8C[] = {
	0x8000u | 58, 82, 111, 83, 112, 84, 113, 85, 114, 86, 115, 87, 116, 88, 117, 89, 118, 90, 119, 91, 120, 92, 121, 93, 122, 94, 123, 95, 124, 96, 125, 97, 126, 98, 127, 99, 128, 100, 129, 101, 130, 102, 131, 103, 132, 104, 133, 105, 134, 106, 135, 107, 136, 108, 137, 109, 138, 110, 139
};

extern "C" __declspec(dllexport) Sint16 poly_00150C02[] = {
	4, 137, 138, 47, 139,
	15, 47, 48, 137, 29, 136, 30, 135, 31, 134, 32, 133, 33, 35, 34, 36,
	3, 30, 29, 48,
	26, 133, 35, 132, 36, 131, 37, 130, 38, 129, 40, 128, 42, 127, 44, 126, 45, 125, 43, 124, 41, 123, 39, 122, 52, 121, 120,
	3, 118, 51, 50,
	0x8000u | 5, 52, 120, 51, 119, 118,
	3, 49, 46, 114,
	0x8000u | 5, 114, 113, 46, 112, 111,
	7, 114, 115, 49, 116, 50, 117, 118
};

extern "C" __declspec(dllexport) NJS_TEX uv_00150CA4[] = {
	{ 0, 255 },
	{ 0 },
	{ 498, 255 },
	{ 488, 0 },
	{ 820, 255 },
	{ 780, 0 },
	{ 1045, 255 },
	{ 1003, 0 },
	{ 1259, 255 },
	{ 1216, 0 },
	{ 1459, 255 },
	{ 1416, 0 },
	{ 1612, 255 },
	{ 1585, 0 },
	{ 1750, 255 },
	{ 1748, 0 },
	{ 1946, 255 },
	{ 1957, 0 },
	{ 2171, 255 },
	{ 2174, 0 },
	{ 2393, 255 },
	{ 2388, 0 },
	{ 2601, 255 },
	{ 2586, 0 },
	{ 2787, 255 },
	{ 2773, 0 },
	{ 2971, 255 },
	{ 2957, 0 },
	{ 3160, 255 },
	{ 3143, 0 },
	{ 3352, 255 },
	{ 3332, 0 },
	{ 3539, 255 },
	{ 3519, 0 },
	{ 3761, 255 },
	{ 3728, 0 },
	{ 3954, 255 },
	{ 3926, 0 },
	{ 4117, 255 },
	{ 4103, 0 },
	{ 4304, 255 },
	{ 4296, 0 },
	{ 4458, 255 },
	{ 4464, 0 },
	{ 4603, 255 },
	{ 4629, 0 },
	{ 4731, 255 },
	{ 4781, 0 },
	{ 4941, 255 },
	{ 4980, 0 },
	{ 5221, 255 },
	{ 5231, 0 },
	{ 5514, 255 },
	{ 5506, 0 },
	{ 5827, 255 },
	{ 5813, 0 },
	{ 6120, 255 },
	{ 6120, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00150D8C[] = {
	{ 6120, 0 },
	{ 6120, 255 },
	{ 5800, 0 },
	{ 5813, 255 },
	{ 5495, 0 },
	{ 5506, 255 },
	{ 5245, 0 },
	{ 5231, 255 },
	{ 5025, 0 },
	{ 4980, 255 },
	{ 4835, 0 },
	{ 4781, 255 },
	{ 4658, 0 },
	{ 4629, 255 },
	{ 4471, 0 },
	{ 4464, 255 },
	{ 4285, 0 },
	{ 4296, 255 },
	{ 4086, 0 },
	{ 4103, 255 },
	{ 3893, 0 },
	{ 3926, 255 },
	{ 3690, 0 },
	{ 3728, 255 },
	{ 3495, 0 },
	{ 3519, 255 },
	{ 3310, 0 },
	{ 3332, 255 },
	{ 3123, 0 },
	{ 3143, 255 },
	{ 2939, 0 },
	{ 2957, 255 },
	{ 2756, 0 },
	{ 2773, 255 },
	{ 2570, 0 },
	{ 2586, 255 },
	{ 2379, 0 },
	{ 2388, 255 },
	{ 2179, 0 },
	{ 2174, 255 },
	{ 1968, 0 },
	{ 1957, 255 },
	{ 1748, 0 },
	{ 1748, 255 },
	{ 1553, 0 },
	{ 1585, 255 },
	{ 1365, 0 },
	{ 1416, 255 },
	{ 1165, 0 },
	{ 1216, 255 },
	{ 955, 0 },
	{ 1003, 255 },
	{ 734, 0 },
	{ 780, 255 },
	{ 478, 0 },
	{ 488, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00150E74[] = {
	{ 0, 255 },
	{ 0 },
	{ 478, 255 },
	{ 468, 0 },
	{ 734, 255 },
	{ 709, 0 },
	{ 955, 255 },
	{ 928, 0 },
	{ 1165, 255 },
	{ 1139, 0 },
	{ 1365, 255 },
	{ 1338, 0 },
	{ 1553, 255 },
	{ 1536, 0 },
	{ 1748, 255 },
	{ 1745, 0 },
	{ 1968, 255 },
	{ 1968, 0 },
	{ 2179, 255 },
	{ 2176, 0 },
	{ 2379, 255 },
	{ 2373, 0 },
	{ 2570, 255 },
	{ 2561, 0 },
	{ 2756, 255 },
	{ 2745, 0 },
	{ 2939, 255 },
	{ 2930, 0 },
	{ 3123, 255 },
	{ 3112, 0 },
	{ 3310, 255 },
	{ 3297, 0 },
	{ 3495, 255 },
	{ 3483, 0 },
	{ 3690, 255 },
	{ 3669, 0 },
	{ 3893, 255 },
	{ 3870, 0 },
	{ 4086, 255 },
	{ 4077, 0 },
	{ 4285, 255 },
	{ 4279, 0 },
	{ 4471, 255 },
	{ 4473, 0 },
	{ 4658, 255 },
	{ 4670, 0 },
	{ 4835, 255 },
	{ 4856, 0 },
	{ 5025, 255 },
	{ 5042, 0 },
	{ 5245, 255 },
	{ 5249, 0 },
	{ 5495, 255 },
	{ 5490, 0 },
	{ 5800, 255 },
	{ 5794, 0 },
	{ 6120, 255 },
	{ 6120, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00150F5C[] = {
	{ 9628, -1452 },
	{ 9903, -1164 },
	{ 9628, -290 },
	{ 10044, -578 },
	{ 9628, -290 },
	{ 8944, 255 },
	{ 9628, -1452 },
	{ 9287, -1507 },
	{ 9287, -1641 },
	{ 8944, -1538 },
	{ 8944, -1687 },
	{ 8603, -1538 },
	{ 8603, -1758 },
	{ 8262, -1538 },
	{ 8262, -1842 },
	{ 7919, -1538 },
	{ 7919, -1840 },
	{ 7544, -1538 },
	{ 7544, -1850 },
	{ 8944, -1538 },
	{ 9287, -1507 },
	{ 8944, 255 },
	{ 8262, -1842 },
	{ 7919, -1840 },
	{ 7919, -1992 },
	{ 7544, -1850 },
	{ 7578, -2132 },
	{ 7235, -2156 },
	{ 7235, -2319 },
	{ 6893, -2105 },
	{ 6893, -2530 },
	{ 6538, -1689 },
	{ 6552, -2702 },
	{ 6211, -1689 },
	{ 6211, -2787 },
	{ 5868, -1689 },
	{ 5868, -2857 },
	{ 5526, -1689 },
	{ 5526, -2888 },
	{ 5185, -1689 },
	{ 5185, -2888 },
	{ 4843, -1689 },
	{ 4843, -2857 },
	{ 4501, -1689 },
	{ 4501, -2803 },
	{ 4160, 255 },
	{ 4160, -2716 },
	{ 3818, -2561 },
	{ 3134, -2070 },
	{ 3475, 255 },
	{ 2791, 255 },
	{ 4160, 255 },
	{ 3818, -2561 },
	{ 3475, 255 },
	{ 3475, -2351 },
	{ 3134, -2070 },
	{ 2108, 255 },
	{ 1425, 255 },
	{ 1767, -1297 },
	{ 1767, -1297 },
	{ 1425, -1040 },
	{ 1425, 255 },
	{ 1083, -696 },
	{ 741, 239 },
	{ 1767, -1297 },
	{ 2108, -1522 },
	{ 2108, 255 },
	{ 2451, -1695 },
	{ 2791, 255 },
	{ 2791, -1850 },
	{ 3134, -2070 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00151078[] = {
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00150B16, NULL, NULL, NULL, uv_00150D8C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_00150B8C, NULL, NULL, NULL, uv_00150E74, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 9, poly_00150C02, NULL, NULL, NULL, uv_00150F5C, NULL }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00151078_2[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00150AA0, NULL, NULL, NULL, uv_00150CA4, NULL },
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00151078_3[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00150B8C, NULL, NULL, NULL, uv_00150E74, NULL },
};


extern "C" __declspec(dllexport) NJS_VECTOR vertex_001510D8[] = {
	{ -818.9722f, -15, -215.171f },
	{ -754.4001f, -15, -69.00402f },
	{ -678.2163f, -15, 0.576172f },
	{ -617.536f, -15, 40.11914f },
	{ -557.7616f, -15, 73.95727f },
	{ -498.9347f, -15, 99.51196f },
	{ -453.143f, -15, 117.2222f },
	{ -414.8345f, -15, 138.3193f },
	{ -363.0595f, -15, 174.7998f },
	{ -299.316f, -15, 208.6059f },
	{ -232.9258f, -15, 234.4285f },
	{ -168.0818f, -15, 248.7249f },
	{ -109.1135f, -15, 256.8547f },
	{ -49.95294f, -15, 261.4533f },
	{ 10.43707f, -15, 261.4533f },
	{ 71.87811f, -15, 256.5869f },
	{ 130.8233f, -15, 246.3049f },
	{ 200.2483f, -15, 230.1387f },
	{ 257.2388f, -15, 205.5859f },
	{ 303.2188f, -15, 180.7759f },
	{ 357.3162f, -15, 155.5542f },
	{ 403.6589f, -15, 139.3542f },
	{ 447.4261f, -15, 122.7209f },
	{ 487.8233f, -15, 114.3049f },
	{ 553.8387f, -15, 101.3374f },
	{ 633.6695f, -15, 81.14794f },
	{ 705.1511f, -15, 39.76196f },
	{ 756.1337f, -15, -9.349364f },
	{ 778.9722f, -15, -86.97681f },
	{ 566.7421f, 15, -35.5f },
	{ 515.7421f, 15, -31.45288f },
	{ 464.742f, 15, -31.45288f },
	{ 413.742f, 15, -31.45288f },
	{ 362.742f, 15, -31.45288f },
	{ 306.7421f, 15, -31.45288f },
	{ 362.742f, 15, 7.213379f },
	{ 306.7422f, 15, 8.547118f },
	{ 260.742f, 15, 47.71338f },
	{ 209.7421f, 15, 41.21338f },
	{ -147.2581f, 15, -12.28662f },
	{ 156.7421f, 15, -12.28662f },
	{ -96.25793f, 15, -12.28662f },
	{ 107.7421f, 15, -12.28662f },
	{ -45.25793f, 15, -12.28662f },
	{ 56.74206f, 15, -12.28662f },
	{ 5.742065f, 15, -12.28662f },
	{ -606.2579f, 15, -261.4533f },
	{ 617.742f, 15, -191.4534f },
	{ 515.742f, 15, -261.4533f },
	{ -504.2579f, 15, -261.4533f },
	{ -402.2577f, 15, -261.4533f },
	{ -300.2578f, 15, -261.4533f },
	{ -198.2579f, 15, -261.4533f },
	{ -772.8413f, 3, -234.4553f },
	{ -713.9241f, 3, -98.3579f },
	{ -648.2336f, 3, -39.43615f },
	{ -591.5868f, 3, -2.619385f },
	{ -535.4684f, 3, 29.20288f },
	{ -479.9027f, 3, 53.27636f },
	{ -431.9409f, 3, 71.94067f },
	{ -388.3442f, 3, 95.91405f },
	{ -336.8922f, 3, 132.1943f },
	{ -278.4585f, 3, 163.1646f },
	{ -218.4808f, 3, 186.561f },
	{ -159.4052f, 3, 199.4839f },
	{ -103.757f, 3, 207.1431f },
	{ -47.9967f, 3, 211.4922f },
	{ 8.480835f, 3, 211.4922f },
	{ 65.5714f, 3, 206.9868f },
	{ 121.2061f, 3, 197.239f },
	{ 182.954f, 3, 183.2253f },
	{ 238.2819f, 3, 159.3196f },
	{ 285.5201f, 3, 134.0137f },
	{ 338.327f, 3, 109.301f },
	{ 386.6102f, 3, 92.35107f },
	{ 433.391f, 3, 74.73168f },
	{ 478.2061f, 3, 65.23901f },
	{ 537.9651f, 3, 53.92456f },
	{ 605.783f, 3, 39.64746f },
	{ 668.7307f, 3, 5.505493f },
	{ 715.5538f, 3, -38.55932f },
	{ 737.6263f, 3, -115.092f },
	{ -726.7103f, 12, -253.7396f },
	{ -673.4482f, 12, -127.7118f },
	{ -618.251f, 12, -79.44848f },
	{ -565.6375f, 12, -45.35791f },
	{ -513.1752f, 12, -15.55151f },
	{ -460.8707f, 12, 7.040771f },
	{ -410.7388f, 12, 26.65918f },
	{ -361.854f, 12, 53.50879f },
	{ -310.7249f, 12, 89.58886f },
	{ -257.6009f, 12, 117.7231f },
	{ -204.0359f, 12, 138.6936f },
	{ -150.7286f, 12, 150.2429f },
	{ -98.40051f, 12, 157.4314f },
	{ -46.04046f, 12, 161.531f },
	{ 6.524597f, 12, 161.531f },
	{ 59.26471f, 12, 157.3867f },
	{ 111.5889f, 12, 148.1731f },
	{ 165.6598f, 12, 136.312f },
	{ 219.325f, 12, 113.0532f },
	{ 267.8215f, 12, 87.25146f },
	{ 319.3378f, 12, 63.04785f },
	{ 369.5616f, 12, 45.3479f },
	{ 419.356f, 12, 26.74243f },
	{ 468.5889f, 12, 16.1731f },
	{ 522.0915f, 12, 6.511719f },
	{ 577.8965f, 12, -1.85315f },
	{ 632.3102f, 12, -28.75085f },
	{ 674.9739f, 12, -67.7694f },
	{ 696.2805f, 12, -143.2073f },
	{ -708.2579f, 15, -259.4533f },
	{ -657.2579f, 15, -139.4534f },
	{ -606.2579f, 15, -95.45336f },
	{ -555.2579f, 15, -62.45337f },
	{ -504.2579f, 15, -33.45337f },
	{ -453.2579f, 15, -11.45337f },
	{ -402.2579f, 15, 8.546631f },
	{ -351.2579f, 15, 36.54663f },
	{ -300.2579f, 15, 72.54663f },
	{ -249.2579f, 15, 99.54663f },
	{ -198.2579f, 15, 119.5466f },
	{ -147.2579f, 15, 130.5466f },
	{ -96.25793f, 15, 137.5466f },
	{ -45.25793f, 15, 141.5466f },
	{ 5.742065f, 15, 141.5466f },
	{ 56.74206f, 15, 137.5466f },
	{ 107.7421f, 15, 128.5466f },
	{ 158.7421f, 15, 117.5466f },
	{ 209.7421f, 15, 95.54663f },
	{ 260.742f, 15, 68.54663f },
	{ 311.742f, 15, 44.54663f },
	{ 362.742f, 15, 26.54663f },
	{ 413.742f, 15, 7.546631f },
	{ 464.742f, 15, -3.453369f },
	{ 515.742f, 15, -12.45337f },
	{ 566.742f, 15, -18.45337f },
	{ 617.742f, 15, -42.45337f },
	{ 658.742f, 15, -79.45336f },
	{ 679.742f, 15, -154.4534f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00151768[] = {
	{ -0.316774f, 0.9383219f, 0.138587f },
	{ -0.2731f, 0.9418139f, 0.195968f },
	{ -0.206413f, 0.9409699f, 0.268271f },
	{ -0.176019f, 0.940834f, 0.289566f },
	{ -0.151028f, 0.9409519f, 0.302985f },
	{ -0.128808f, 0.940773f, 0.313615f },
	{ -0.143162f, 0.940918f, 0.306884f },
	{ -0.179541f, 0.940862f, 0.287305f },
	{ -0.177235f, 0.940906f, 0.288588f },
	{ -0.14112f, 0.940814f, 0.308146f },
	{ -0.09801599f, 0.940999f, 0.323905f },
	{ -0.059468f, 0.940901f, 0.333421f },
	{ -0.036279f, 0.94087f, 0.33682f },
	{ -0.013159f, 0.940886f, 0.338467f },
	{ 0.01336f, 0.940868f, 0.33851f },
	{ 0.042543f, 0.9409339f, 0.335908f },
	{ 0.067379f, 0.9404759f, 0.333113f },
	{ 0.106044f, 0.940893f, 0.321677f },
	{ 0.147409f, 0.940525f, 0.306079f },
	{ 0.15312f, 0.9403729f, 0.303732f },
	{ 0.127732f, 0.940958f, 0.313502f },
	{ 0.116075f, 0.940731f, 0.318673f },
	{ 0.094945f, 0.941043f, 0.32469f },
	{ 0.0672f, 0.94041f, 0.333336f },
	{ 0.07372499f, 0.936434f, 0.343011f },
	{ 0.133571f, 0.9357409f, 0.326416f },
	{ 0.20881f, 0.9383669f, 0.275439f },
	{ 0.286876f, 0.9411089f, 0.17893f },
	{ 0.339842f, 0.935257f, 0.099005f },
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
	{ -0.243284f, 0.964185f, 0.105643f },
	{ -0.217218f, 0.963625f, 0.1557f },
	{ -0.159863f, 0.9649349f, 0.208192f },
	{ -0.135278f, 0.965483f, 0.22258f },
	{ -0.116586f, 0.965244f, 0.233906f },
	{ -0.098826f, 0.965601f, 0.240516f },
	{ -0.108095f, 0.966808f, 0.231511f },
	{ -0.135725f, 0.966643f, 0.217211f },
	{ -0.137085f, 0.9650829f, 0.223209f },
	{ -0.109059f, 0.965102f, 0.238085f },
	{ -0.076005f, 0.964941f, 0.251221f },
	{ -0.045718f, 0.965403f, 0.256724f },
	{ -0.027882f, 0.965515f, 0.258848f },
	{ -0.010141f, 0.965399f, 0.26058f },
	{ 0.010277f, 0.965382f, 0.260639f },
	{ 0.03282f, 0.965315f, 0.259016f },
	{ 0.051549f, 0.9653299f, 0.255891f },
	{ 0.081612f, 0.964676f, 0.25048f },
	{ 0.114014f, 0.96513f, 0.235638f },
	{ 0.1158f, 0.9659989f, 0.231164f },
	{ 0.09681299f, 0.9666229f, 0.237206f },
	{ 0.088837f, 0.965678f, 0.244079f },
	{ 0.07151099f, 0.967008f, 0.244503f },
	{ 0.051051f, 0.9657699f, 0.254328f },
	{ 0.053456f, 0.963025f, 0.264055f },
	{ 0.09599999f, 0.960322f, 0.26185f },
	{ 0.158775f, 0.962367f, 0.220547f },
	{ 0.233039f, 0.962368f, 0.13979f },
	{ 0.244876f, 0.9669729f, 0.070708f },
	{ -0.153944f, 0.9859f, 0.06559899f },
	{ -0.132384f, 0.9866109f, 0.095248f },
	{ -0.09857699f, 0.986582f, 0.130151f },
	{ -0.08467799f, 0.986607f, 0.139411f },
	{ -0.072763f, 0.986601f, 0.14603f },
	{ -0.062044f, 0.986613f, 0.150816f },
	{ -0.068696f, 0.9867679f, 0.146869f },
	{ -0.08599f, 0.986742f, 0.137641f },
	{ -0.08547f, 0.9865749f, 0.139158f },
	{ -0.068113f, 0.986559f, 0.14853f },
	{ -0.047232f, 0.986576f, 0.15632f },
	{ -0.028421f, 0.9866109f, 0.160595f },
	{ -0.017466f, 0.986617f, 0.162118f },
	{ -0.006367f, 0.9866059f, 0.162995f },
	{ 0.006402f, 0.986601f, 0.163025f },
	{ 0.020546f, 0.9866059f, 0.161825f },
	{ 0.031845f, 0.986515f, 0.160541f },
	{ 0.050367f, 0.98648f, 0.155952f },
	{ 0.071334f, 0.986478f, 0.147558f },
	{ 0.073046f, 0.9865879f, 0.145973f },
	{ 0.061495f, 0.986756f, 0.150104f },
	{ 0.05566f, 0.986616f, 0.153267f },
	{ 0.04546f, 0.986807f, 0.15539f },
	{ 0.031747f, 0.986556f, 0.160312f },
	{ 0.028699f, 0.98519f, 0.169049f },
	{ 0.053579f, 0.9845189f, 0.166889f },
	{ 0.095827f, 0.985573f, 0.139507f },
	{ 0.140993f, 0.9862919f, 0.08572999f },
	{ 0.161874f, 0.985747f, 0.045824f },
	{ -0.08209699f, 0.996017f, 0.034791f },
	{ -0.068191f, 0.9964539f, 0.049293f },
	{ -0.04662f, 0.996989f, 0.061961f },
	{ -0.039325f, 0.997126f, 0.064761f },
	{ -0.034296f, 0.9970379f, 0.068839f },
	{ -0.028634f, 0.997166f, 0.06957699f },
	{ -0.03024f, 0.997452f, 0.06461f },
	{ -0.038011f, 0.997423f, 0.060845f },
	{ -0.040491f, 0.997003f, 0.06592499f },
	{ -0.032152f, 0.997023f, 0.07007799f },
	{ -0.022571f, 0.996947f, 0.07474399f },
	{ -0.013236f, 0.9970959f, 0.07499599f },
	{ -0.008114999f, 0.997126f, 0.07532199f },
	{ -0.00298f, 0.997091f, 0.076161f },
	{ 0.002986f, 0.99709f, 0.076176f },
	{ 0.009656999f, 0.997061f, 0.07599799f },
	{ 0.014612f, 0.997137f, 0.07419199f },
	{ 0.024057f, 0.996857f, 0.07548299f },
	{ 0.033149f, 0.997052f, 0.06920099f },
	{ 0.032806f, 0.99729f, 0.065846f },
	{ 0.027315f, 0.997407f, 0.06658f },
	{ 0.025542f, 0.997193f, 0.070389f },
	{ 0.019906f, 0.997484f, 0.068042f },
	{ 0.014259f, 0.997268f, 0.07248399f },
	{ 0.012024f, 0.997025f, 0.076138f },
	{ 0.022823f, 0.9960589f, 0.085708f },
	{ 0.04566f, 0.996429f, 0.071022f },
	{ 0.075118f, 0.996163f, 0.044901f },
	{ 0.061117f, 0.997983f, 0.017188f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00151DF8 = { vertex_001510D8, normal_00151768, LengthOfArray<Sint32>(vertex_001510D8), meshlist_00151078, matlist_00150A50, LengthOfArray<Uint16>(meshlist_00151078), LengthOfArray<Uint16>(matlist_00150A50), { -20, 0, 0 }, 840.6631f, NULL };

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00151DF8_2 = { vertex_001510D8, normal_00151768, LengthOfArray<Sint32>(vertex_001510D8), meshlist_00151078_2, matlist_00150A50, LengthOfArray<Uint16>(meshlist_00151078_2), LengthOfArray<Uint16>(matlist_00150A50), { -20, 0, 0 }, 840.6631f, NULL };

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00151DF8_3 = { vertex_001510D8, normal_00151768, LengthOfArray<Sint32>(vertex_001510D8), meshlist_00151078_3, matlist_00150A50_3, LengthOfArray<Uint16>(meshlist_00151078_3), LengthOfArray<Uint16>(matlist_00150A50_3), { -20, 0, 0 }, 840.6631f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00151E20 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00151DF8, -716.7422f, -25, 2061.453f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00151E20_2 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00151DF8_2, -716.7422f, -25, 2061.453f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00151E54[] = {
	{ { 0xB2FFFFFF }, { 0xFFFFFFFF }, 11, 65, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00151E68[] = {
	4, 3, 2, 1, 0
};

extern "C" __declspec(dllexport) NJS_TEX uv_00151E74[] = {
	{ 16320, -16065 },
	{ 16320, 255 },
	{ 0, -16065 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00151E84[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00151E68, NULL, NULL, NULL, uv_00151E74, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00151E9C[] = {
	{ -3685, 0, -1475 },
	{ -3685, 0, 3608 },
	{ 1275, 0, -1475 },
	{ 1275, 0, 3608 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00151ECC[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00151EFC = { vertex_00151E9C, normal_00151ECC, LengthOfArray<Sint32>(vertex_00151E9C), meshlist_00151E84, matlist_00151E54, LengthOfArray<Uint16>(meshlist_00151E84), LengthOfArray<Uint16>(matlist_00151E54), { -1205, 0, 1066.5f }, 3551.003f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00151F24 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00151EFC, 567.5f, -15, 1812, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00151F58[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 69, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00151F6C[] = {
	0x8000u | 10, 4, 7, 5, 6, 0, 3, 1, 2, 8, 9
};

extern "C" __declspec(dllexport) NJS_TEX uv_00151F84[] = {
	{ 255, 0 },
	{ 255, 255 },
	{ 198, 0 },
	{ 198, 255 },
	{ 133, 0 },
	{ 133, 255 },
	{ 66, 0 },
	{ 66, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00151FAC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00151F6C, NULL, NULL, NULL, uv_00151F84, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00151FC4[] = {
	{ 0, 55, -81 },
	{ -50.10407f, 55, -70.10407f },
	{ -50.10407f, -34, -70.10407f },
	{ 0, -34, -81 },
	{ 90, 55, -57.00001f },
	{ 50.10407f, 55, -75.10407f },
	{ 50.10407f, -34, -75.10407f },
	{ 90, -34, -57.00001f },
	{ -90, 55, -37.00001f },
	{ -90, -34, -37.00001f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0015203C[] = {
	{ 0.048479f, 0, 0.9988239f },
	{ 0.438006f, 0, 0.898972f },
	{ 0.438006f, 0, 0.898972f },
	{ 0.048479f, 0, 0.9988239f },
	{ -0.413227f, 0, 0.910628f },
	{ -0.268239f, 0, 0.963352f },
	{ -0.268239f, 0, 0.963352f },
	{ -0.413227f, 0, 0.910628f },
	{ 0.63856f, 0, 0.769572f },
	{ 0.63856f, 0, 0.769572f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_001520B4 = { vertex_00151FC4, normal_0015203C, LengthOfArray<Sint32>(vertex_00151FC4), meshlist_00151FAC, matlist_00151F58, LengthOfArray<Uint16>(meshlist_00151FAC), LengthOfArray<Uint16>(matlist_00151F58), { 0, 10.5f, -59.00001f }, 92.64987f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_001520DC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001520B4, -370, 22, 1586, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00152110[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 70, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00152124[] = {
	0x8000u | 10, 8, 9, 6, 7, 4, 5, 2, 3, 0, 1
};

extern "C" __declspec(dllexport) NJS_TEX uv_0015213C[] = {
	{ 0, 255 },
	{ 0 },
	{ 65, 255 },
	{ 65, 0 },
	{ 127, 255 },
	{ 127, 0 },
	{ 189, 255 },
	{ 189, 0 },
	{ 255, 255 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00152164[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00152124, NULL, NULL, NULL, uv_0015213C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0015217C[] = {
	{ 85, -25, -47.00001f },
	{ 85, 68, -48.00001f },
	{ 45.10407f, -25, -75.10407f },
	{ 45.10407f, 68, -76.10407f },
	{ 0, -25, -81 },
	{ 0, 68, -82 },
	{ -45.10407f, -25, -75.10407f },
	{ -45.10407f, 68, -76.10407f },
	{ -85, -25, -47.00001f },
	{ -85, 68, -48.00001f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_001521F4[] = {
	{ -0.575871f, 0.008789999f, 0.817494f },
	{ -0.575871f, 0.008789999f, 0.817494f },
	{ -0.363867f, 0.010015f, 0.931397f },
	{ -0.362757f, 0.01002f, 0.93183f },
	{ 0, 0.010752f, 0.9999419f },
	{ 0, 0.010752f, 0.9999419f },
	{ 0.363867f, 0.010015f, 0.931397f },
	{ 0.362757f, 0.01002f, 0.93183f },
	{ 0.575871f, 0.008789999f, 0.817494f },
	{ 0.575871f, 0.008789999f, 0.817494f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0015226C = { vertex_0015217C, normal_001521F4, LengthOfArray<Sint32>(vertex_0015217C), meshlist_00152164, matlist_00152110, LengthOfArray<Uint16>(meshlist_00152164), LengthOfArray<Uint16>(matlist_00152110), { 0, 21.5f, -64.50001f }, 96.88782f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00152294 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0015226C, -237, 22, 1676, 0, 0xFFFFC001, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_001522C8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 64, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 62, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 61, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00152304[] = {
	4, 5, 11, 1, 10,
	4, 6, 5, 2, 1,
	4, 7, 6, 3, 2,
	4, 9, 4, 5, 11,
	4, 8, 9, 6, 5,
	4, 0, 8, 7, 6,
	6, 12, 13, 14, 15, 16, 17,
	6, 18, 19, 20, 21, 22, 23,
	4, 29, 35, 25, 34,
	4, 30, 29, 26, 25,
	4, 31, 30, 27, 26,
	4, 33, 28, 29, 35,
	4, 32, 33, 30, 29,
	4, 24, 32, 31, 30,
	6, 36, 37, 38, 39, 40, 41,
	4, 47, 53, 43, 52,
	4, 48, 47, 44, 43,
	4, 49, 48, 45, 44,
	4, 51, 46, 47, 53,
	4, 50, 51, 48, 47,
	4, 42, 50, 49, 48,
	6, 54, 55, 56, 57, 58, 59,
	4, 65, 71, 61, 70,
	4, 66, 65, 62, 61,
	4, 67, 66, 63, 62,
	4, 69, 64, 65, 71,
	4, 68, 69, 66, 65,
	4, 60, 68, 67, 66,
	6, 72, 73, 74, 75, 76, 77,
	4, 83, 89, 79, 88,
	4, 84, 83, 80, 79,
	4, 85, 84, 81, 80,
	4, 87, 82, 83, 89,
	4, 86, 87, 84, 83,
	4, 78, 86, 85, 84,
	6, 95, 94, 93, 92, 91, 90,
	4, 101, 107, 97, 106,
	4, 102, 101, 98, 97,
	4, 103, 102, 99, 98,
	4, 105, 100, 101, 107,
	4, 104, 105, 102, 101,
	4, 96, 104, 103, 102,
	6, 108, 109, 110, 111, 112, 113,
	4, 119, 125, 115, 124,
	4, 120, 119, 116, 115,
	4, 121, 120, 117, 116,
	4, 123, 118, 119, 125,
	4, 122, 123, 120, 119,
	4, 114, 122, 121, 120,
	6, 131, 130, 129, 128, 127, 126,
	4, 137, 143, 133, 142,
	4, 138, 137, 134, 133,
	4, 139, 138, 135, 134,
	4, 141, 136, 137, 143,
	4, 140, 141, 138, 137,
	4, 132, 140, 139, 138,
	6, 144, 145, 146, 147, 148, 149,
	4, 155, 161, 151, 160,
	4, 156, 155, 152, 151,
	4, 157, 156, 153, 152,
	4, 159, 154, 155, 161,
	4, 158, 159, 156, 155,
	4, 150, 158, 157, 156,
	6, 162, 163, 164, 165, 166, 167,
	4, 173, 179, 169, 178,
	4, 174, 173, 170, 169,
	4, 175, 174, 171, 170,
	4, 177, 172, 173, 179,
	4, 176, 177, 174, 173,
	4, 168, 176, 175, 174,
	6, 180, 181, 182, 183, 184, 185,
	4, 191, 197, 187, 196,
	4, 192, 191, 188, 187,
	4, 193, 192, 189, 188,
	4, 195, 190, 191, 197,
	4, 194, 195, 192, 191,
	4, 186, 194, 193, 192,
	6, 198, 199, 200, 201, 202, 203,
	4, 209, 215, 205, 214,
	4, 210, 209, 206, 205,
	4, 211, 210, 207, 206,
	4, 213, 208, 209, 215,
	4, 212, 213, 210, 209,
	4, 204, 212, 211, 210,
	6, 221, 220, 219, 218, 217, 216,
	4, 227, 233, 223, 232,
	4, 228, 227, 224, 223,
	4, 229, 228, 225, 224,
	4, 231, 226, 227, 233,
	4, 230, 231, 228, 227,
	4, 222, 230, 229, 228,
	6, 234, 235, 236, 237, 238, 239,
	4, 245, 251, 241, 250,
	4, 246, 245, 242, 241,
	4, 247, 246, 243, 242,
	4, 249, 244, 245, 251,
	4, 248, 249, 246, 245,
	4, 240, 248, 247, 246
};

extern "C" __declspec(dllexport) Sint16 poly_00152710[] = {
	0x8000u | 8, 253, 256, 274, 275, 271, 270, 261, 263,
	0x8000u | 8, 256, 257, 275, 272, 270, 268, 263, 262,
	0x8000u | 8, 267, 253, 273, 274, 269, 271, 259, 261,
	0x8000u | 8, 257, 267, 272, 273, 268, 269, 262, 259
};

extern "C" __declspec(dllexport) Sint16 poly_00152758[] = {
	0x8000u | 7, 265, 252, 260, 255, 266, 258, 254,
	4, 254, 264, 252, 265,
	0x8000u | 9, 254, 264, 266, 262, 260, 259, 265, 261, 263,
	3, 264, 263, 265,
	3, 262, 263, 264,
	4, 258, 254, 255, 252
};

extern "C" __declspec(dllexport) NJS_TEX uv_001527A0[] = {
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 286, 16 },
	{ 252, 22 },
	{ 288, 16 },
	{ 253, 22 },
	{ 290, 16 },
	{ 255, 22 },
	{ 218, 30 },
	{ 243, 33 },
	{ 219, 30 },
	{ 244, 32 },
	{ 221, 30 },
	{ 246, 33 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 316, 30 },
	{ 262, 32 },
	{ 316, 30 },
	{ 262, 32 },
	{ 316, 30 },
	{ 264, 32 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 222, 32 },
	{ 246, 34 },
	{ 221, 31 },
	{ 245, 34 },
	{ 219, 32 },
	{ 243, 34 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 312, 25 },
	{ 256, 27 },
	{ 310, 25 },
	{ 253, 27 },
	{ 310, 25 },
	{ 253, 27 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 236, 28 },
	{ 166, 24 },
	{ 238, 28 },
	{ 168, 24 },
	{ 239, 28 },
	{ 169, 25 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 168, 25 },
	{ 232, 28 },
	{ 171, 24 },
	{ 235, 28 },
	{ 172, 25 },
	{ 236, 28 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 260, 23 },
	{ 328, 18 },
	{ 258, 22 },
	{ 328, 17 },
	{ 258, 22 },
	{ 328, 18 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 249, 16 },
	{ 249, 22 },
	{ 247, 15 },
	{ 247, 22 },
	{ 245, 16 },
	{ 245, 22 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 166, 16 },
	{ 234, 21 },
	{ 168, 16 },
	{ 236, 21 },
	{ 167, 16 },
	{ 235, 21 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 268, 12 },
	{ 256, 21 },
	{ 266, 12 },
	{ 255, 21 },
	{ 270, 12 },
	{ 258, 21 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 234, 11 },
	{ 249, 21 },
	{ 234, 10 },
	{ 249, 21 },
	{ 230, 11 },
	{ 245, 21 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 247, 23 },
	{ 249, 13 },
	{ 246, 22 },
	{ 248, 13 },
	{ 244, 23 },
	{ 246, 13 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 258, 25 },
	{ 251, 28 },
	{ 260, 24 },
	{ 254, 28 },
	{ 262, 25 },
	{ 256, 28 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 7, 3 },
	{ 502, 3 },
	{ 7, 251 },
	{ 502, 251 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 },
	{ 502, 251 },
	{ 7, 251 },
	{ 502, 3 },
	{ 7, 3 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00152E30[] = {
	{ 189, 255 },
	{ 127, 255 },
	{ 189, -1442 },
	{ 127, -1442 },
	{ 190, -2689 },
	{ 127, -2689 },
	{ 190, -3825 },
	{ 127, -3825 },
	{ 127, 255 },
	{ 66, 255 },
	{ 127, -1442 },
	{ 66, -1442 },
	{ 127, -2689 },
	{ 65, -2689 },
	{ 127, -3825 },
	{ 65, -3825 },
	{ 255, 255 },
	{ 189, 255 },
	{ 255, -1442 },
	{ 189, -1442 },
	{ 255, -2689 },
	{ 190, -2689 },
	{ 255, -3825 },
	{ 190, -3825 },
	{ 66, 255 },
	{ 255, 255 },
	{ 66, -1442 },
	{ 255, -1442 },
	{ 65, -2689 },
	{ 255, -2689 },
	{ 65, -3825 },
	{ 255, -3825 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00152EB0[] = {
	{ 113, 81 },
	{ 119, 10 },
	{ 165, 81 },
	{ 157, 10 },
	{ 221, 81 },
	{ 200, 10 },
	{ 322, 10 },
	{ 200, 10 },
	{ 221, 81 },
	{ 322, 10 },
	{ 300, 81 },
	{ 322, 10 },
	{ 300, 81 },
	{ 221, 81 },
	{ 227, 244 },
	{ 165, 81 },
	{ 177, 244 },
	{ 113, 81 },
	{ 114, 244 },
	{ 27, 244 },
	{ 45, 81 },
	{ 27, 244 },
	{ 113, 81 },
	{ 227, 244 },
	{ 282, 244 },
	{ 300, 81 },
	{ 166, 0 },
	{ 254, 178 },
	{ 0, 83 },
	{ 88, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00152F28[] = {
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_00152710, NULL, NULL, NULL, uv_00152E30, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 6, poly_00152758, NULL, NULL, NULL, uv_00152EB0, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 98, poly_00152304, NULL, NULL, NULL, uv_001527A0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00152F70[] = {
	{ 9.376351f, 152.7754f, -3.280363f },
	{ 9.283804f, 159.9284f, -19.0356f },
	{ 6.349251f, 158.2859f, -14.66579f },
	{ 3.814008f, 152.8978f, -6.969748f },
	{ 18.17334f, 159.6642f, -17.30827f },
	{ 12.58774f, 165.1018f, -13.75281f },
	{ 9.531406f, 163.9377f, -9.183521f },
	{ 6.870854f, 160.6115f, -5.282682f },
	{ 15.64379f, 158.0814f, -8.500918f },
	{ 18.57834f, 159.7238f, -12.87073f },
	{ 13.52607f, 159.7665f, -20.3907f },
	{ 14.98831f, 163.0984f, -17.43853f },
	{ 7.008378f, 160.3185f, -5.899986f },
	{ 3.52158f, 156.1548f, -0.78124f },
	{ 7.106164f, 160.6382f, -5.636565f },
	{ 3.619367f, 156.4746f, -0.517818f },
	{ 7.376979f, 160.3103f, -5.655501f },
	{ 3.890182f, 156.1467f, -0.536755f },
	{ 0.191746f, 150.5728f, -4.769737f },
	{ 2.662886f, 149.0264f, -0.108685f },
	{ 0.332539f, 150.8522f, -4.789373f },
	{ 2.803678f, 149.306f, -0.128321f },
	{ 0.482606f, 150.6061f, -4.912858f },
	{ 2.953746f, 149.0598f, -0.251806f },
	{ 7.074239f, 145.1419f, -1.416998f },
	{ -7.248064f, 142.7604f, -9.753916f },
	{ -5.000481f, 146.1067f, -4.172116f },
	{ -0.473004f, 144.0197f, 2.160679f },
	{ -2.606804f, 140.9904f, -17.07594f },
	{ -4.352193f, 148.3654f, -14.42995f },
	{ -2.263879f, 152.1714f, -9.064513f },
	{ 1.452576f, 150.2838f, -2.834949f },
	{ 4.304893f, 147.1756f, -8.75092f },
	{ 2.057311f, 143.8293f, -14.33272f },
	{ -7.259492f, 140.456f, -14.78654f },
	{ -4.740742f, 144.1111f, -16.21272f },
	{ 9.768855f, 150.9514f, -1.350654f },
	{ 4.606587f, 149.5579f, 0.272429f },
	{ 9.7683f, 151.2404f, -1.216208f },
	{ 4.606032f, 149.8469f, 0.406874f },
	{ 9.856812f, 150.9942f, -1.03418f },
	{ 4.694544f, 149.6007f, 0.588902f },
	{ 6.409412f, 145.5919f, 5.316491f },
	{ 16.04127f, 142.1082f, -7.728647f },
	{ 10.59484f, 146.1332f, -6.877326f },
	{ 4.0491f, 144.0912f, -3.571899f },
	{ 22.22853f, 140.1159f, -0.873472f },
	{ 20.12178f, 148.4905f, -3.692488f },
	{ 14.90651f, 153.0267f, -2.974501f },
	{ 8.567944f, 151.176f, -0.514098f },
	{ 13.65587f, 147.6218f, 4.13646f },
	{ 19.1023f, 143.5968f, 3.285138f },
	{ 20.69802f, 139.3716f, -6.380365f },
	{ 21.76093f, 143.5968f, -3.486633f },
	{ 0.668103f, 149.8279f, 6.075825f },
	{ 3.0132f, 148.2565f, 1.358406f },
	{ 0.510381f, 150.0701f, 5.954033f },
	{ 2.855479f, 148.4986f, 1.236614f },
	{ 0.373385f, 149.7882f, 5.942547f },
	{ 2.718482f, 148.2168f, 1.225128f },
	{ -0.170637f, 143.5925f, 0.04335f },
	{ 3.570168f, 143.2374f, 14.11945f },
	{ 5.319484f, 146.6178f, 9.486771f },
	{ 7.213825f, 144.3311f, 3.495876f },
	{ -3.986238f, 139.8736f, 14.78794f },
	{ -2.5265f, 147.6681f, 13.90086f },
	{ -0.914781f, 151.5061f, 9.436091f },
	{ 1.377893f, 149.562f, 4.025095f },
	{ -3.838253f, 145.3837f, 5.345431f },
	{ -5.58757f, 142.0034f, 9.978106f },
	{ 0.59263f, 140.4907f, 16.85861f },
	{ -2.670077f, 143.419f, 15.48461f },
	{ 9.493619f, 154.2024f, 6.2616f },
	{ 3.918344f, 152.823f, 0.800593f },
	{ 9.259476f, 154.5156f, 6.488445f },
	{ 3.684201f, 153.1362f, 1.027438f },
	{ 9.191093f, 154.083f, 6.60061f },
	{ 3.615819f, 152.7036f, 1.139603f },
	{ 3.956898f, 147.0916f, 2.913068f },
	{ 21.88632f, 150.7552f, 9.74867f },
	{ 17.77634f, 151.3867f, 6.303408f },
	{ 7.674196f, 148.5585f, -1.252548f },
	{ 19.7792f, 147.5118f, 16.75129f },
	{ 17.5893f, 154.8672f, 14.04563f },
	{ 13.37133f, 155.9826f, 10.6744f },
	{ 7.074172f, 154.1486f, 4.180309f },
	{ 11.56483f, 148.9355f, 13.26405f },
	{ 15.67481f, 148.304f, 16.70931f },
	{ 22.88495f, 148.7374f, 13.27097f },
	{ 20.56819f, 151.5473f, 15.5348f },
	{ -4.58083f, 154.5865f, 5.562129f },
	{ 2.25789f, 152.0925f, 1.379582f },
	{ -4.618418f, 155.0117f, 5.345135f },
	{ 2.220302f, 152.5177f, 1.162588f },
	{ -4.82578f, 154.6365f, 5.131819f },
	{ 2.012939f, 152.1424f, 0.949273f },
	{ -2.758609f, 146.7316f, -1.066504f },
	{ -11.85865f, 149.0561f, 15.98268f },
	{ -6.47267f, 148.9714f, 12.9069f },
	{ 0.937794f, 145.9774f, 5.427032f },
	{ -19.77735f, 148.7751f, 9.573054f },
	{ -13.67804f, 156.1687f, 10.58795f },
	{ -8.177025f, 156.6716f, 7.514947f },
	{ -2.929215f, 154.6072f, 4.287908f },
	{ -12.64927f, 150.2316f, 2.056368f },
	{ -18.03525f, 150.3163f, 5.132139f },
	{ -16.68906f, 148.1451f, 14.99832f },
	{ -17.41953f, 152.6169f, 12.30527f },
	{ -4.624745f, 154.4439f, -5.341156f },
	{ 1.6414f, 152.09f, -0.273966f },
	{ -4.41617f, 154.8476f, -5.492496f },
	{ 1.849975f, 152.4937f, -0.425306f },
	{ -4.311821f, 154.4439f, -5.728121f },
	{ 1.954324f, 152.09f, -0.6609319f },
	{ 0.6034499f, 146.7238f, -6.26237f },
	{ -18.45787f, 149.7611f, -8.778256f },
	{ -13.6347f, 149.7939f, -4.877953f },
	{ -4.118703f, 146.7238f, -0.4229f },
	{ -15.40671f, 148.4584f, -18.41473f },
	{ -13.7633f, 156.296f, -13.05116f },
	{ -8.872213f, 156.9212f, -9.095926f },
	{ -4.054817f, 154.9637f, -5.200284f },
	{ -5.744102f, 149.7939f, -14.63556f },
	{ -10.56726f, 149.7611f, -18.53587f },
	{ -19.35201f, 148.4584f, -13.53592f },
	{ -16.8989f, 152.6489f, -15.5868f },
	{ 11.02841f, 159.2768f, -0.199175f },
	{ 4.24918f, 156.0343f, -0.048181f },
	{ 10.94377f, 159.5692f, 0.102769f },
	{ 4.164546f, 156.3267f, 0.253762f },
	{ 11.08197f, 159.185f, 0.2335f },
	{ 4.302749f, 155.9425f, 0.384494f },
	{ 7.785564f, 150.6166f, 2.055037f },
	{ 23.46569f, 158.4238f, -7.662511f },
	{ 16.92686f, 156.6636f, -7.039378f },
	{ 6.977187f, 152.0026f, -4.474205f },
	{ 28.7421f, 154.5282f, -0.115854f },
	{ 21.83164f, 162.7679f, -0.753463f },
	{ 15.08344f, 161.5064f, 0.001483f },
	{ 8.894033f, 158.8778f, 0.209757f },
	{ 18.27764f, 154.3475f, 3.870821f },
	{ 24.81647f, 156.1078f, 3.247687f },
	{ 28.06671f, 155.6862f, -5.570953f },
	{ 26.92349f, 158.6354f, -1.911071f },
	{ 3.290698f, 160.3464f, 7.813416f },
	{ 3.290697f, 156.156f, 1.637998f },
	{ 3.069504f, 160.6696f, 7.64658f },
	{ 3.069504f, 156.4792f, 1.471163f },
	{ 2.848311f, 160.3464f, 7.813416f },
	{ 2.848311f, 156.156f, 1.637998f },
	{ -0.268392f, 152.8637f, 6.970755f },
	{ 8.647048f, 159.9094f, 20.01967f },
	{ 8.647046f, 158.2446f, 14.76299f },
	{ 6.407403f, 152.8637f, 6.970755f },
	{ 0.280735f, 159.8134f, 23.49427f },
	{ 3.069505f, 165.1752f, 17.42128f },
	{ 3.069505f, 163.9877f, 11.92904f },
	{ 3.069504f, 160.641f, 7.221722f },
	{ -2.508037f, 158.2446f, 14.763f },
	{ -2.508037f, 159.9094f, 20.01967f },
	{ 5.858277f, 159.8134f, 23.49427f },
	{ 3.069506f, 163.19f, 21.82807f },
	{ -4.827291f, 160.1968f, -0.225601f },
	{ 1.837692f, 156.9123f, 0.471068f },
	{ -4.684299f, 160.5425f, -0.428647f },
	{ 1.980684f, 157.258f, 0.268021f },
	{ -4.778963f, 160.2016f, -0.6653129f },
	{ 1.88602f, 156.9171f, 0.031355f },
	{ -0.294622f, 151.7231f, -3.400696f },
	{ -17.34498f, 157.5006f, 3.758075f },
	{ -10.97335f, 156.3034f, 4.445298f },
	{ -1.023913f, 151.6507f, 3.234748f },
	{ -20.53589f, 157.1905f, -5.013209f },
	{ -14.1291f, 163.036f, -1.43948f },
	{ -7.521165f, 162.3352f, -0.720865f },
	{ -1.649924f, 159.4141f, -0.107467f },
	{ -9.754717f, 156.4245f, -6.642362f },
	{ -16.12635f, 157.6216f, -7.329585f },
	{ -21.1452f, 157.13f, 0.530621f },
	{ -19.16911f, 160.671f, -2.019248f },
	{ 5.155573f, 162.936f, 0.221368f },
	{ 3.999302f, 157.0757f, -0.038236f },
	{ 4.955507f, 163.0155f, 0.497659f },
	{ 3.799235f, 157.1552f, 0.238055f },
	{ 5.280187f, 162.8967f, 0.553785f },
	{ 4.123915f, 157.0364f, 0.294181f },
	{ 9.263865f, 155.4971f, 0.889138f },
	{ 10.15387f, 167.6052f, -5.746903f },
	{ 8.162115f, 163.739f, -5.45747f },
	{ 7.383407f, 156.0903f, -4.127172f },
	{ 15.70456f, 168.854f, 0.282888f },
	{ 7.515523f, 168.791f, 0.22101f },
	{ 5.142153f, 165.0773f, 0.6715249f },
	{ 4.341494f, 160.5203f, 0.43274f },
	{ 11.30432f, 162.7478f, 2.924657f },
	{ 13.29607f, 166.6138f, 2.635225f },
	{ 14.13346f, 169.3496f, -3.908176f },
	{ 12.21974f, 170.1801f, -0.673255f },
	{ 1.798419f, 163.9553f, 2.690075f },
	{ 3.233002f, 156.9261f, 0.633989f },
	{ 1.803288f, 164.1174f, 2.296536f },
	{ 3.237871f, 157.0882f, 0.24045f },
	{ 1.435615f, 163.9553f, 2.436938f },
	{ 2.870197f, 156.9261f, 0.380851f },
	{ -1.740562f, 156.7634f, 1.508994f },
	{ 2.012897f, 169.5135f, 11.88682f },
	{ 3.541617f, 166.1302f, 9.519144f },
	{ 3.734307f, 156.7634f, 5.328947f },
	{ -6.890975f, 171.299f, 9.555936f },
	{ -0.165839f, 169.1536f, 5.262071f },
	{ 1.580042f, 165.7377f, 2.583154f },
	{ 2.78265f, 160.0415f, 0.859541f },
	{ -5.606752f, 166.1302f, 3.1361f },
	{ -7.135471f, 169.5135f, 5.50377f },
	{ -2.31679f, 171.299f, 12.74746f },
	{ -3.147873f, 171.4054f, 9.064905f },
	{ 2.926171f, 162.4493f, -4.412238f },
	{ 2.769873f, 155.9389f, -0.767366f },
	{ 3.160469f, 162.6413f, -4.14815f },
	{ 3.004172f, 156.1309f, -0.503278f },
	{ 3.262333f, 162.413f, -4.462761f },
	{ 3.106035f, 155.9025f, -0.817889f },
	{ 4.438508f, 152.3873f, -5.720807f },
	{ -2.297905f, 165.2766f, -13.19559f },
	{ -2.123906f, 161.4175f, -9.260942f },
	{ -0.634317f, 152.936f, -4.958383f },
	{ 3.751377f, 166.0814f, -17.27518f },
	{ 3.009196f, 168.297f, -9.224425f },
	{ 3.280091f, 164.7534f, -4.872021f },
	{ 3.136348f, 159.6558f, -2.160325f },
	{ 6.352656f, 160.5008f, -10.53494f },
	{ 6.178658f, 164.3599f, -14.46958f },
	{ -0.486904f, 166.5398f, -16.63818f },
	{ 2.317607f, 168.5413f, -14.00174f },
	{ 4.201043f, 154.2981f, -7.749619f },
	{ 3.504408f, 152.2375f, -0.508995f },
	{ 4.480176f, 154.6188f, -7.677423f },
	{ 3.783541f, 152.5582f, -0.436798f },
	{ 4.642277f, 154.2225f, -7.728689f },
	{ 3.945642f, 152.162f, -0.488065f },
	{ 6.431056f, 146.8496f, -4.472994f },
	{ -1.309702f, 151.011f, -19.6396f },
	{ -1.565593f, 151.0624f, -14.05976f },
	{ -0.227344f, 147.9909f, -4.788839f },
	{ 6.991916f, 148.4114f, -22.5649f },
	{ 5.205852f, 155.8615f, -18.48555f },
	{ 5.036316f, 156.4389f, -12.82502f },
	{ 4.478283f, 154.7236f, -7.258975f },
	{ 9.560426f, 149.1554f, -13.53199f },
	{ 9.816315f, 149.1041f, -19.11183f },
	{ 1.428906f, 149.3649f, -22.82878f },
	{ 4.821221f, 152.6098f, -22.12604f },
	{ 2.668718f, 157.3186f, -1.016354f },
	{ -0.550427f, 0.016325f, -4.104226f },
	{ 4.242437f, 157.3186f, -0.372306f },
	{ 1.827737f, 157.3186f, 0.431108f },
	{ 1.621635f, 0.016325f, -3.09986f },
	{ 0.528493f, 0.016325f, -0.986079f },
	{ 3.405209f, 157.3186f, 1.136468f },
	{ 2.164555f, 143.8768f, 1.319241f },
	{ 0.829313f, 153.2212f, 1.096425f },
	{ 3.230818f, 143.8768f, -0.548239f },
	{ 4.167962f, 143.8768f, 2.169909f },
	{ 5.142818f, 143.8768f, 0.328319f },
	{ 5.537509f, 153.2212f, -0.470078f },
	{ 2.486965f, 153.2212f, -1.878306f },
	{ 3.937208f, 153.2212f, 2.984916f },
	{ -1.857823f, 0.016325f, -1.942182f },
	{ 6.086507f, 103.7686f, 4.656551f },
	{ 3.891646f, 103.7686f, 3.753165f },
	{ 7.120507f, 103.7686f, 2.678865f },
	{ 5.078475f, 103.7686f, 1.738403f },
	{ 0.763962f, 60.15286f, 0.39468f },
	{ -1.526627f, 60.15286f, -0.535065f },
	{ -0.279514f, 60.15286f, -2.623468f },
	{ 1.827531f, 60.15286f, -1.651054f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00153C60[] = {
	{ 0.475581f, 0.357448f, 0.803775f },
	{ -0.488688f, 0.743075f, -0.457191f },
	{ -0.818921f, 0.538089f, -0.199571f },
	{ -0.914067f, 0.388032f, -0.11795f },
	{ 0.669795f, 0.74216f, -0.023931f },
	{ 0.041455f, 0.998709f, -0.029361f },
	{ -0.262138f, 0.866905f, 0.423981f },
	{ -0.397253f, 0.675379f, 0.6213329f },
	{ 0.518374f, 0.508658f, 0.687426f },
	{ 0.6336049f, 0.718374f, 0.2872f },
	{ -0.215481f, 0.761646f, -0.611116f },
	{ 0.268121f, 0.887496f, -0.374783f },
	{ -0.8649909f, 0.44903f, -0.22397f },
	{ -0.8649909f, 0.44903f, -0.22397f },
	{ -0.295744f, 0.829698f, 0.473431f },
	{ -0.295747f, 0.829698f, 0.473428f },
	{ 0.5560229f, 0.41775f, 0.718556f },
	{ 0.5560229f, 0.41775f, 0.718556f },
	{ -0.741985f, 0.410937f, 0.5297059f },
	{ -0.741985f, 0.410937f, 0.5297059f },
	{ 0.036589f, 0.954134f, 0.297135f },
	{ 0.036587f, 0.954134f, 0.297136f },
	{ 0.780212f, 0.585812f, -0.219301f },
	{ 0.780212f, 0.585812f, -0.219301f },
	{ 0.6864049f, 0.717099f, -0.120904f },
	{ -0.920984f, 0.382955f, -0.07165f },
	{ -0.735608f, 0.572791f, 0.36165f },
	{ -0.554685f, 0.616311f, 0.559003f },
	{ 0.275335f, 0.370026f, -0.887283f },
	{ -0.381006f, 0.702195f, -0.6014619f },
	{ -0.17374f, 0.9775749f, -0.119002f },
	{ 0.118435f, 0.947526f, 0.296932f },
	{ 0.627377f, 0.699277f, -0.342651f },
	{ 0.412777f, 0.524334f, -0.744774f },
	{ -0.929441f, 0.2916f, -0.226071f },
	{ -0.417538f, 0.457827f, -0.784892f },
	{ -0.370476f, 0.391198f, -0.8424439f },
	{ -0.370476f, 0.391198f, -0.8424439f },
	{ -0.275764f, 0.959759f, -0.053069f },
	{ -0.275764f, 0.959759f, -0.053068f },
	{ 0.082397f, 0.611419f, 0.7870049f },
	{ 0.082397f, 0.611419f, 0.7870049f },
	{ -0.023394f, 0.726324f, 0.686955f },
	{ 0.337231f, 0.315953f, -0.88682f },
	{ -0.18449f, 0.53421f, -0.824975f },
	{ -0.471885f, 0.585488f, -0.659187f },
	{ 0.874064f, 0.328384f, 0.358016f },
	{ 0.725401f, 0.624445f, -0.289589f },
	{ 0.178773f, 0.966442f, -0.184475f },
	{ -0.343213f, 0.937974f, 0.049097f },
	{ 0.262388f, 0.70407f, 0.659878f },
	{ 0.73206f, 0.486705f, 0.476661f },
	{ 0.48295f, 0.226191f, -0.84593f },
	{ 0.888262f, 0.361468f, -0.283427f },
	{ 0.7776189f, 0.600421f, 0.186557f },
	{ 0.7776189f, 0.600421f, 0.186557f },
	{ 0.012313f, 0.950493f, -0.310503f },
	{ 0.012308f, 0.950492f, -0.310505f },
	{ -0.764756f, 0.392547f, -0.5109349f },
	{ -0.764756f, 0.392547f, -0.5109349f },
	{ -0.647476f, 0.531958f, -0.545706f },
	{ 0.375161f, 0.517152f, 0.769291f },
	{ 0.615878f, 0.7287869f, 0.299273f },
	{ 0.665473f, 0.745721f, -0.032335f },
	{ -0.891934f, 0.201756f, 0.404657f },
	{ -0.379965f, 0.654647f, 0.653501f },
	{ -0.181571f, 0.975979f, 0.120401f },
	{ -0.015759f, 0.905928f, -0.423137f },
	{ -0.804933f, 0.508499f, -0.305797f },
	{ -0.92274f, 0.329645f, 0.199712f },
	{ 0.270927f, 0.415633f, 0.868244f },
	{ -0.432797f, 0.39365f, 0.811003f },
	{ 0.392052f, 0.71365f, -0.580516f },
	{ 0.392052f, 0.71365f, -0.580516f },
	{ -0.300708f, 0.951382f, 0.066691f },
	{ -0.300708f, 0.951381f, 0.06669199f },
	{ -0.706199f, 0.280248f, 0.650188f },
	{ -0.706199f, 0.280248f, 0.650188f },
	{ -0.774043f, 0.23645f, 0.587323f },
	{ 0.635855f, 0.760916f, -0.129212f },
	{ 0.425281f, 0.747795f, -0.509842f },
	{ 0.364877f, 0.668748f, -0.647797f },
	{ 0.015427f, 0.372144f, 0.9280469f },
	{ 0.173428f, 0.87018f, 0.461204f },
	{ -0.222635f, 0.964349f, 0.143054f },
	{ -0.406897f, 0.9111339f, -0.06534699f },
	{ -0.653751f, 0.331313f, 0.680324f },
	{ -0.26063f, 0.407135f, 0.875393f },
	{ 0.74335f, 0.659403f, 0.112336f },
	{ 0.459888f, 0.6252109f, 0.630567f },
	{ 0.580028f, 0.41037f, 0.703679f },
	{ 0.580028f, 0.41037f, 0.703679f },
	{ 0.306904f, 0.949559f, -0.064409f },
	{ 0.306903f, 0.949559f, -0.06440999f },
	{ -0.259404f, 0.581646f, -0.770972f },
	{ -0.259404f, 0.581646f, -0.770972f },
	{ -0.140189f, 0.554606f, -0.820219f },
	{ 0.091475f, 0.597996f, 0.796262f },
	{ 0.532962f, 0.499795f, 0.6827559f },
	{ 0.680724f, 0.387122f, 0.621893f },
	{ -0.742346f, 0.660046f, -0.115163f },
	{ -0.239787f, 0.9392509f, 0.245579f },
	{ 0.248807f, 0.9681129f, -0.029198f },
	{ 0.489706f, 0.853173f, -0.179676f },
	{ -0.257023f, 0.6609679f, -0.705025f },
	{ -0.571502f, 0.733257f, -0.368401f },
	{ -0.21938f, 0.55335f, 0.80354f },
	{ -0.567579f, 0.716107f, 0.406257f },
	{ -0.422319f, 0.501384f, 0.755156f },
	{ -0.422319f, 0.501384f, 0.755156f },
	{ 0.218017f, 0.959889f, 0.176302f },
	{ 0.218017f, 0.959889f, 0.176302f },
	{ 0.650075f, 0.501384f, -0.570979f },
	{ 0.650075f, 0.501384f, -0.570979f },
	{ 0.738103f, 0.478569f, -0.47558f },
	{ -0.6778049f, 0.662912f, 0.318008f },
	{ -0.415725f, 0.58561f, 0.695869f },
	{ -0.310613f, 0.478569f, 0.821274f },
	{ -0.132235f, 0.59849f, -0.790142f },
	{ -0.270412f, 0.937582f, -0.218672f },
	{ 0.16495f, 0.977241f, 0.133388f },
	{ 0.38729f, 0.867133f, 0.313187f },
	{ 0.59348f, 0.58561f, -0.552126f },
	{ 0.169146f, 0.662911f, -0.729341f },
	{ -0.800321f, 0.598489f, 0.03602f },
	{ -0.5503629f, 0.706417f, -0.445057f },
	{ -0.319192f, 0.634576f, -0.703868f },
	{ -0.319192f, 0.634576f, -0.703868f },
	{ -0.414787f, 0.878294f, 0.237807f },
	{ -0.414786f, 0.878292f, 0.237813f },
	{ -0.114139f, 0.282983f, 0.952309f },
	{ -0.114139f, 0.282983f, 0.952309f },
	{ -0.182518f, 0.237595f, 0.954063f },
	{ 0.214358f, 0.837725f, -0.502262f },
	{ -0.308445f, 0.694254f, -0.650287f },
	{ -0.38825f, 0.59035f, -0.707636f },
	{ 0.628027f, 0.587817f, 0.509953f },
	{ 0.169182f, 0.970536f, 0.171575f },
	{ -0.369173f, 0.897168f, 0.242489f },
	{ -0.551269f, 0.799659f, 0.238008f },
	{ -0.093509f, 0.366829f, 0.925577f },
	{ 0.361453f, 0.576244f, 0.733004f },
	{ 0.565547f, 0.751837f, -0.338965f },
	{ 0.662825f, 0.741608f, 0.103347f },
	{ 0.8527279f, 0.432238f, -0.293301f },
	{ 0.8527279f, 0.432238f, -0.293301f },
	{ 0, 0.8274789f, -0.561497f },
	{ 0, 0.8274789f, -0.561497f },
	{ -0.8527279f, 0.432238f, -0.293301f },
	{ -0.8527279f, 0.432238f, -0.293301f },
	{ -0.833912f, 0.371085f, -0.408519f },
	{ 0.673474f, 0.731308f, 0.107802f },
	{ 0.802494f, 0.522252f, -0.288543f },
	{ 0.8339109f, 0.371085f, -0.408519f },
	{ -0.531245f, 0.753666f, 0.386996f },
	{ 0, 0.999068f, 0.043174f },
	{ 0, 0.864944f, -0.5018679f },
	{ 0, 0.672379f, -0.740207f },
	{ -0.802494f, 0.522252f, -0.288543f },
	{ -0.673474f, 0.731308f, 0.107803f },
	{ 0.5312459f, 0.753666f, 0.386996f },
	{ 0, 0.889577f, 0.456785f },
	{ 0.134813f, 0.459744f, 0.877759f },
	{ 0.134813f, 0.459744f, 0.877759f },
	{ 0.436435f, 0.8978789f, 0.057779f },
	{ 0.436437f, 0.8978789f, 0.057763f },
	{ 0.321121f, 0.478247f, -0.8174109f },
	{ 0.321121f, 0.478247f, -0.8174109f },
	{ 0.411822f, 0.419062f, -0.809191f },
	{ -0.236362f, 0.71945f, 0.653088f },
	{ 0.109233f, 0.5444829f, 0.831629f },
	{ 0.225269f, 0.400525f, 0.888163f },
	{ -0.327447f, 0.7483349f, -0.576865f },
	{ -0.105583f, 0.99441f, -0.000746f },
	{ 0.38212f, 0.922645f, 0.052074f },
	{ 0.6119519f, 0.787248f, 0.07585599f },
	{ 0.285937f, 0.56204f, -0.776113f },
	{ -0.090595f, 0.733933f, -0.673153f },
	{ -0.446683f, 0.736489f, 0.507994f },
	{ -0.461912f, 0.885973f, -0.041094f },
	{ -0.7716039f, 0.179278f, -0.610316f },
	{ -0.7716039f, 0.179278f, -0.610316f },
	{ -0.917f, 0.164838f, 0.363235f },
	{ -0.91699f, 0.164835f, 0.36326f },
	{ -0.173656f, -0.00936f, 0.984762f },
	{ -0.173656f, -0.00936f, 0.984762f },
	{ -0.224248f, -0.132019f, 0.965549f },
	{ -0.575987f, 0.7016f, -0.419519f },
	{ -0.808301f, 0.23715f, -0.538896f },
	{ -0.806821f, 0.051769f, -0.588523f },
	{ -0.033058f, 0.7015719f, 0.711831f },
	{ -0.595623f, 0.744999f, 0.300348f },
	{ -0.8982649f, 0.243876f, 0.365573f },
	{ -0.936681f, -0.072903f, 0.342511f },
	{ -0.243358f, 0.058924f, 0.968145f },
	{ -0.141565f, 0.504892f, 0.851495f },
	{ -0.292852f, 0.904768f, -0.309246f },
	{ -0.186208f, 0.946037f, 0.26522f },
	{ 0.980854f, 0.17548f, 0.08444799f },
	{ 0.980854f, 0.17548f, 0.08444799f },
	{ 0.538954f, 0.335939f, -0.772446f },
	{ 0.538955f, 0.335939f, -0.772446f },
	{ -0.417803f, 0.17548f, -0.89143f },
	{ -0.417803f, 0.17548f, -0.89143f },
	{ -0.235828f, 0.134729f, -0.96241f },
	{ 0.577867f, 0.786678f, -0.217275f },
	{ 0.880087f, 0.426149f, -0.209391f },
	{ 0.984663f, 0.134729f, -0.110843f },
	{ 0.030579f, 0.893282f, -0.448456f },
	{ 0.371736f, 0.7707379f, -0.5174699f },
	{ 0.519114f, 0.414741f, -0.747336f },
	{ 0.560453f, 0.20167f, -0.803257f },
	{ -0.107042f, 0.438808f, -0.8921829f },
	{ 0.004924f, 0.785337f, -0.619048f },
	{ 0.387122f, 0.9049799f, -0.176484f },
	{ 0.210453f, 0.922501f, -0.323576f },
	{ -0.8113599f, 0.300264f, 0.501535f },
	{ -0.8113599f, 0.300264f, 0.501535f },
	{ 0.180847f, 0.477141f, 0.860018f },
	{ 0.180842f, 0.477141f, 0.860019f },
	{ 0.9661199f, 0.108033f, 0.234395f },
	{ 0.9661199f, 0.108033f, 0.234395f },
	{ 0.953239f, 0.023168f, 0.301328f },
	{ -0.64562f, 0.707371f, 0.287752f },
	{ -0.761916f, 0.368523f, 0.532611f },
	{ -0.797622f, 0.212525f, 0.564475f },
	{ 0.701175f, 0.7051269f, -0.105594f },
	{ 0.15799f, 0.901774f, 0.402297f },
	{ 0.181916f, 0.54068f, 0.821323f },
	{ 0.170877f, 0.258803f, 0.950696f },
	{ 0.9432639f, 0.184108f, 0.27633f },
	{ 0.8343779f, 0.547309f, 0.06531499f },
	{ -0.537912f, 0.8391359f, 0.080634f },
	{ 0.105123f, 0.994329f, -0.016071f },
	{ -0.7617919f, 0.638678f, 0.108462f },
	{ -0.7617919f, 0.638678f, 0.108462f },
	{ 0.148882f, 0.947228f, 0.283888f },
	{ 0.148874f, 0.94723f, 0.283887f },
	{ 0.9173239f, 0.350896f, 0.188116f },
	{ 0.917325f, 0.350896f, 0.188116f },
	{ 0.88895f, 0.332071f, 0.315431f },
	{ -0.535929f, 0.765748f, -0.355542f },
	{ -0.696613f, 0.713082f, 0.079022f },
	{ -0.753108f, 0.613517f, 0.23754f },
	{ 0.652039f, 0.497873f, -0.571811f },
	{ 0.174458f, 0.922747f, -0.343659f },
	{ 0.155002f, 0.964061f, 0.215781f },
	{ 0.123067f, 0.8566689f, 0.500972f },
	{ 0.88358f, 0.442239f, 0.15398f },
	{ 0.790212f, 0.538451f, -0.292635f },
	{ -0.394039f, 0.677167f, -0.6214319f },
	{ 0.152263f, 0.6934699f, -0.704213f },
	{ -0.254534f, 0.658626f, -0.708113f },
	{ -0.291311f, 0.024925f, -0.956304f },
	{ 0.665472f, 0.695013f, -0.272222f },
	{ -0.712756f, 0.682268f, 0.162754f },
	{ 0.9423569f, 0.004874f, -0.334575f },
	{ 0.350409f, -0.022836f, 0.936318f },
	{ 0.19277f, 0.741353f, 0.6428339f },
	{ -0.949858f, -0.096433f, 0.297439f },
	{ -0.958522f, 0.077295f, 0.274337f },
	{ -0.303003f, -0.114995f, -0.946026f },
	{ 0.320379f, 0.005153f, 0.947275f },
	{ 0.946637f, -0.024464f, -0.321371f },
	{ 0.938522f, 0.116557f, -0.324949f },
	{ -0.319872f, 0.019858f, -0.947253f },
	{ 0.271187f, 0.155803f, 0.949833f },
	{ -0.951937f, -0.002082f, 0.306288f },
	{ 0.357557f, -0.029161f, 0.933436f },
	{ -0.930042f, 0.029111f, 0.366297f },
	{ 0.959796f, -0.029182f, -0.279176f },
	{ -0.27707f, 0.03172f, -0.960326f },
	{ 0.325445f, -0.077952f, 0.942342f },
	{ -0.954274f, 0.044797f, 0.295557f },
	{ -0.310963f, 0.077673f, -0.947243f },
	{ 0.936479f, -0.035385f, -0.348935f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00154950 = { vertex_00152F70, normal_00153C60, LengthOfArray<Sint32>(vertex_00152F70), meshlist_00152F28, matlist_001522C8, LengthOfArray<Uint16>(meshlist_00152F28), LengthOfArray<Uint16>(matlist_001522C8), { 3.798449f, 85.71085f, 0.332745f }, 87.58822f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00154978 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00154950, -718.2245f, -20.25875f, 2177.195f, 0x4E3, 0, 0xFFFFFBED, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_001549AC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 71, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 72, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 73, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_001549FC[] = {
	4, 2, 3, 1, 0
};

extern "C" __declspec(dllexport) Sint16 poly_00154A06[] = {
	4, 2, 1, 5, 4,
	4, 0, 3, 13, 12
};

extern "C" __declspec(dllexport) Sint16 poly_00154A1A[] = {
	4, 8, 9, 4, 5,
	4, 15, 7, 12, 13
};

extern "C" __declspec(dllexport) Sint16 poly_00154A2E[] = {
	4, 10, 11, 8, 9,
	4, 6, 14, 15, 7
};

extern "C" __declspec(dllexport) NJS_TEX uv_00154A44[] = {
	{ 0, 255 },
	{ 1274, 255 },
	{ 0, -1019 },
	{ 1275, -1019 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00154A54[] = {
	{ 3, 1 },
	{ 1514, 1 },
	{ 3, 253 },
	{ 1509, 253 },
	{ 1514, 1 },
	{ 3, 1 },
	{ 1509, 253 },
	{ 3, 253 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00154A74[] = {
	{ 1275, 256 },
	{ 0, 256 },
	{ 1274, -253 },
	{ 0, -253 },
	{ 0, 256 },
	{ 1275, 256 },
	{ 0, -253 },
	{ 1274, -253 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00154A94[] = {
	{ 2040, 254 },
	{ 0, 254 },
	{ 2040, 0 },
	{ 0 },
	{ 0, 254 },
	{ 2040, 254 },
	{ 0 },
	{ 2040, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00154AB4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001549FC, NULL, NULL, NULL, uv_00154A44, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00154A06, NULL, NULL, NULL, uv_00154A54, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_00154A1A, NULL, NULL, NULL, uv_00154A74, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_00154A2E, NULL, NULL, NULL, uv_00154A94, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00154B14[] = {
	{ 30.50021f, 12.5f, 40.24963f },
	{ -29.49972f, 12.5f, 40.24963f },
	{ -29.5f, 12.5f, -24.75f },
	{ 30.5f, 12.5f, -24.75f },
	{ -29.49972f, 11, 40.24963f },
	{ -29.5f, 11, -24.75f },
	{ 30.5f, -12.5f, -24.75f },
	{ 30.5f, -7.499998f, 40.25f },
	{ -29.5f, -7.499998f, 40.25f },
	{ -29.5f, -7.5f, -24.75f },
	{ -29.49969f, -12.5f, 40.24963f },
	{ -29.5f, -12.5f, -24.75f },
	{ 30.5f, 11, -24.75f },
	{ 30.50021f, 11, 40.24963f },
	{ 30.5f, -12.5f, 40.25f },
	{ 30.5f, -7.5f, -24.75f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00154BD4[] = {
	{ -0.707108f, -0.707106f, 0.000002f },
	{ 0.707106f, -0.707108f, -0.00003f },
	{ 0.707108f, -0.707106f, -0.00003f },
	{ -0.707106f, -0.707108f, 0.000002f },
	{ 1, -0.00007f, -0.00003f },
	{ 1, -0.00007f, -0.00003f },
	{ -1, 0, 0 },
	{ -1, 0, 0.000001f },
	{ 1, 0.000023f, -0.00002f },
	{ 1, 0.000023f, -0.00002f },
	{ 1, 0.000061f, -0.00002f },
	{ 1, 0.000061f, -0.00002f },
	{ -1, 0, 0.000002f },
	{ -1, 0, 0.000002f },
	{ -1, 0, 0 },
	{ -1, 0, 0.000001f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00154C94 = { vertex_00154B14, normal_00154BD4, LengthOfArray<Sint32>(vertex_00154B14), meshlist_00154AB4, matlist_001549AC, LengthOfArray<Uint16>(meshlist_00154AB4), LengthOfArray<Uint16>(matlist_001549AC), { 0.500107f, 0, 7.75f }, 44.22959f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00154CBC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00154C94, -380.5f, 12.5f, 1790.25f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00154CF0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 74, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00154D2C[] = {
	6, 84, 97, 81, 94, 74, 75,
	18, 52, 93, 84, 92, 97, 91, 94, 90, 75, 89, 78, 88, 96, 87, 95, 86, 66, 49,
	6, 78, 96, 69, 95, 65, 66,
	6, 1, 2, 3, 4, 5, 21,
	6, 9, 10, 11, 12, 13, 27,
	18, 45, 27, 26, 12, 24, 10, 23, 9, 22, 21, 20, 4, 19, 2, 18, 1, 17, 16,
	0x8000u | 20, 45, 46, 26, 60, 24, 59, 23, 58, 22, 57, 20, 56, 19, 55, 18, 54, 17, 53, 16, 41,
	0x8000u | 20, 46, 52, 60, 93, 59, 92, 58, 91, 57, 90, 56, 89, 55, 88, 54, 87, 53, 86, 41, 49
};

extern "C" __declspec(dllexport) Sint16 poly_00154E04[] = {
	46, 40, 38, 39, 85, 0, 28, 30, 29, 7, 31, 6, 32, 8, 33, 35, 34, 15, 36, 14, 42, 25, 43, 44, 50, 51, 82, 83, 79, 80, 70, 73, 71, 72, 76, 77, 67, 68, 61, 64, 62, 63, 47, 48, 37, 40, 38
};

extern "C" __declspec(dllexport) Sint16 poly_00154E62[] = {
	46, 37, 16, 38, 1, 85, 3, 28, 5, 29, 21, 31, 9, 32, 11, 33, 13, 34, 27, 36, 45, 42, 46, 43, 52, 50, 84, 82, 81, 79, 74, 70, 75, 71, 78, 76, 69, 67, 65, 61, 66, 62, 49, 47, 41, 37, 16
};

extern "C" __declspec(dllexport) NJS_TEX uv_00154EC0[] = {
	{ 1935, -656 },
	{ 1732, -656 },
	{ 1732, -764 },
	{ 1329, -656 },
	{ 1329, -764 },
	{ 1123, -656 },
	{ 2040, -456 },
	{ 1935, -456 },
	{ 1935, -656 },
	{ 1732, -456 },
	{ 1732, -656 },
	{ 1329, -456 },
	{ 1329, -656 },
	{ 1123, -456 },
	{ 1123, -656 },
	{ 916, -456 },
	{ 916, -656 },
	{ 709, -456 },
	{ 709, -656 },
	{ 300, -456 },
	{ 300, -656 },
	{ 104, -456 },
	{ 104, -656 },
	{ 0, -456 },
	{ 916, -656 },
	{ 709, -656 },
	{ 709, -764 },
	{ 300, -656 },
	{ 300, -764 },
	{ 104, -656 },
	{ 104, 146 },
	{ 300, 146 },
	{ 300, 255 },
	{ 709, 146 },
	{ 709, 255 },
	{ 916, 146 },
	{ 1123, 146 },
	{ 1329, 146 },
	{ 1329, 255 },
	{ 1732, 146 },
	{ 1732, 255 },
	{ 1935, 146 },
	{ 2040, -52 },
	{ 1935, 146 },
	{ 1935, -52 },
	{ 1732, 146 },
	{ 1732, -52 },
	{ 1329, 146 },
	{ 1329, -52 },
	{ 1123, 146 },
	{ 1123, -52 },
	{ 916, 146 },
	{ 916, -52 },
	{ 709, 146 },
	{ 709, -52 },
	{ 300, 146 },
	{ 300, -52 },
	{ 104, 146 },
	{ 104, -52 },
	{ 0, -52 },
	{ 2040, -52 },
	{ 2040, -248 },
	{ 1935, -52 },
	{ 1935, -248 },
	{ 1732, -52 },
	{ 1732, -248 },
	{ 1329, -52 },
	{ 1329, -248 },
	{ 1123, -52 },
	{ 1123, -248 },
	{ 916, -52 },
	{ 916, -248 },
	{ 709, -52 },
	{ 709, -248 },
	{ 300, -52 },
	{ 300, -248 },
	{ 104, -52 },
	{ 104, -248 },
	{ 0, -52 },
	{ 0, -248 },
	{ 2040, -248 },
	{ 2040, -456 },
	{ 1935, -248 },
	{ 1935, -456 },
	{ 1732, -248 },
	{ 1732, -456 },
	{ 1329, -248 },
	{ 1329, -456 },
	{ 1123, -248 },
	{ 1123, -456 },
	{ 916, -248 },
	{ 916, -456 },
	{ 709, -248 },
	{ 709, -456 },
	{ 300, -248 },
	{ 300, -456 },
	{ 104, -248 },
	{ 104, -456 },
	{ 0, -248 },
	{ 0, -456 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00155050[] = {
	{ 4228, 0 },
	{ 4442, 255 },
	{ 4442, 0 },
	{ 4688, 255 },
	{ 4688, 0 },
	{ 4935, 255 },
	{ 4935, 0 },
	{ 5384, 255 },
	{ 5384, 0 },
	{ 5639, 255 },
	{ 5639, 0 },
	{ 5865, 255 },
	{ 5865, 0 },
	{ 0, 255 },
	{ 0 },
	{ 442, 255 },
	{ 442, 0 },
	{ 693, 255 },
	{ 693, 0 },
	{ 939, 255 },
	{ 939, 0 },
	{ 1154, 255 },
	{ 1154, 0 },
	{ 1383, 255 },
	{ 1383, 0 },
	{ 1628, 255 },
	{ 1628, 0 },
	{ 1880, 255 },
	{ 1880, 0 },
	{ 2323, 255 },
	{ 2323, 0 },
	{ 2578, 255 },
	{ 2578, 0 },
	{ 2804, 255 },
	{ 2804, 0 },
	{ 3059, 255 },
	{ 3059, 0 },
	{ 3507, 255 },
	{ 3507, 0 },
	{ 3752, 255 },
	{ 3752, 0 },
	{ 3999, 255 },
	{ 3999, 0 },
	{ 4228, 255 },
	{ 4228, 0 },
	{ 4442, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00155108[] = {
	{ 2989, 0 },
	{ 3132, 255 },
	{ 3132, 0 },
	{ 3296, 255 },
	{ 3296, 0 },
	{ 3458, 255 },
	{ 3458, 0 },
	{ 3759, 255 },
	{ 3759, 0 },
	{ 3929, 255 },
	{ 3929, 0 },
	{ 4080, 255 },
	{ 4080, 0 },
	{ 169, 255 },
	{ 169, 0 },
	{ 464, 255 },
	{ 464, 0 },
	{ 632, 255 },
	{ 632, 0 },
	{ 796, 255 },
	{ 796, 0 },
	{ 939, 255 },
	{ 939, 0 },
	{ 1091, 255 },
	{ 1091, 0 },
	{ 1256, 255 },
	{ 1256, 0 },
	{ 1423, 255 },
	{ 1423, 0 },
	{ 1718, 255 },
	{ 1718, 0 },
	{ 1888, 255 },
	{ 1888, 0 },
	{ 2039, 255 },
	{ 2039, 0 },
	{ 2209, 255 },
	{ 2209, 0 },
	{ 2507, 255 },
	{ 2507, 0 },
	{ 2672, 255 },
	{ 2672, 0 },
	{ 2836, 255 },
	{ 2836, 0 },
	{ 2989, 255 },
	{ 2989, 0 },
	{ 3132, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_001551C0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 8, poly_00154D2C, NULL, NULL, NULL, uv_00154EC0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00154E04, NULL, NULL, NULL, uv_00155050, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_00154E62, NULL, NULL, NULL, uv_00155108, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00155208[] = {
	{ -62.27777f, 7, -19.40735f },
	{ -62.27777f, -7, -19.40735f },
	{ -43.05554f, -7, -19.40735f },
	{ -43.05554f, -7, -30 },
	{ -2.833344f, -7, -19.40735f },
	{ -2.833344f, -7, -30 },
	{ 17.38888f, 7, -19.40735f },
	{ -2.833344f, 7, -30 },
	{ 37.61111f, 7, -19.40735f },
	{ 37.61111f, -7, -19.40735f },
	{ 57.83331f, -7, -19.40735f },
	{ 57.83331f, -7, -30 },
	{ 97.45556f, -7, -19.40735f },
	{ 97.45556f, -7, -30 },
	{ 117.2778f, 7, -19.40735f },
	{ 97.45556f, 7, -30 },
	{ -72.5f, -7, 0.111084f },
	{ -62.27777f, -7, 0.111084f },
	{ -43.05554f, -7, 0.111084f },
	{ -2.833344f, -7, 0.111084f },
	{ 17.38888f, -7, 0.111084f },
	{ 17.38888f, -7, -19.40735f },
	{ 37.61111f, -7, 0.111084f },
	{ 57.83331f, -7, 0.111084f },
	{ 97.45556f, -7, 0.111084f },
	{ 127.5f, 7, 0.111084f },
	{ 117.2778f, -7, 0.111084f },
	{ 117.2778f, -7, -19.40735f },
	{ -43.05554f, 4, -30 },
	{ -2.833344f, 4, -30 },
	{ -43.05554f, 7, -30 },
	{ 17.38888f, 4, -19.40735f },
	{ 37.61111f, 4, -19.40735f },
	{ 57.83331f, 4, -30 },
	{ 97.45556f, 4, -30 },
	{ 57.83331f, 7, -30 },
	{ 117.2778f, 4, -19.40735f },
	{ -72.5f, 4, 19.37036f },
	{ -72.5f, 4, 0.111084f },
	{ -72.5f, 7, 0.111084f },
	{ -72.5f, 7, 19.37036f },
	{ -72.5f, -7, 19.37036f },
	{ 127.5f, 4, 0.111084f },
	{ 127.5f, 4, 19.37036f },
	{ 127.5f, 7, 19.37036f },
	{ 127.5f, -7, 0.111084f },
	{ 127.5f, -7, 19.37036f },
	{ -72.5f, 4, 39.88891f },
	{ -72.5f, 7, 39.88891f },
	{ -72.5f, -7, 39.88891f },
	{ 127.5f, 4, 39.88891f },
	{ 127.5f, 7, 39.88891f },
	{ 127.5f, -7, 39.88891f },
	{ -62.27777f, -7, 19.37036f },
	{ -43.05554f, -7, 19.37036f },
	{ -2.833344f, -7, 19.37036f },
	{ 17.38888f, -7, 19.37036f },
	{ 37.61111f, -7, 19.37036f },
	{ 57.83331f, -7, 19.37036f },
	{ 97.45556f, -7, 19.37036f },
	{ 117.2778f, -7, 19.37036f },
	{ -43.05554f, 4, 70 },
	{ -62.27777f, 4, 59.40747f },
	{ -62.27777f, 7, 59.40747f },
	{ -43.05554f, 7, 70 },
	{ -43.05554f, -7, 70 },
	{ -62.27777f, -7, 59.40747f },
	{ -2.833344f, 4, 70 },
	{ -2.833344f, 7, 70 },
	{ -2.833344f, -7, 70 },
	{ 57.83331f, 4, 70 },
	{ 37.61111f, 4, 59.40747f },
	{ 37.61111f, 7, 59.40747f },
	{ 57.83331f, 7, 70 },
	{ 57.83331f, -7, 70 },
	{ 37.61111f, -7, 59.40747f },
	{ 17.38888f, 4, 59.40747f },
	{ 17.38888f, 7, 59.40747f },
	{ 17.38888f, -7, 59.40747f },
	{ 97.45556f, 4, 70 },
	{ 97.45556f, 7, 70 },
	{ 97.45556f, -7, 70 },
	{ 117.2778f, 4, 59.40747f },
	{ 117.2778f, 7, 59.40747f },
	{ 117.2778f, -7, 59.40747f },
	{ -62.27777f, 4, -19.40735f },
	{ -62.27777f, -7, 39.88891f },
	{ -43.05554f, -7, 39.88891f },
	{ -2.833344f, -7, 39.88891f },
	{ 17.38888f, -7, 39.88891f },
	{ 37.61111f, -7, 39.88891f },
	{ 57.83331f, -7, 39.88891f },
	{ 97.45556f, -7, 39.88891f },
	{ 117.2778f, -7, 39.88891f },
	{ 57.83331f, -7, 59.40747f },
	{ -43.05554f, -7, 59.40747f },
	{ -2.833344f, -7, 59.40747f },
	{ 97.45556f, -7, 59.40747f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_001556A0[] = {
	{ 0.7145669f, 0, 0.699567f },
	{ 0.54447f, 0.647626f, 0.5330409f },
	{ 0, 1, 0 },
	{ 0.188266f, 0.655087f, 0.731722f },
	{ 0, 1, 0 },
	{ -0.180107f, 0.657075f, 0.731993f },
	{ -0.238924f, 0, 0.971038f },
	{ -0.238924f, 0, 0.971038f },
	{ 0.238924f, 0, 0.971038f },
	{ 0.153862f, 0.765044f, 0.625327f },
	{ 0, 1, 0 },
	{ 0.180107f, 0.657075f, 0.731993f },
	{ 0, 1, 0 },
	{ -0.183293f, 0.656296f, 0.731901f },
	{ -0.710046f, 0, 0.704156f },
	{ -0.242932f, 0, 0.9700429f },
	{ 0.731993f, 0.657082f, 0.18008f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.153862f, 0.765044f, 0.6253279f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.971047f, 0, 0.23889f },
	{ 0, 1, 0 },
	{ -0.541726f, 0.646464f, 0.537232f },
	{ 0.249176f, 0, 0.968458f },
	{ -0.238924f, 0, 0.971038f },
	{ 0.249176f, 0, 0.968458f },
	{ -0.238924f, 0, 0.971038f },
	{ 0.238924f, 0, 0.971038f },
	{ 0.238924f, 0, 0.971038f },
	{ -0.242932f, 0, 0.9700429f },
	{ 0.238924f, 0, 0.971038f },
	{ -0.710046f, 0, 0.704156f },
	{ 1, 0, 0 },
	{ 0.971047f, 0, 0.23889f },
	{ 0.971047f, 0, 0.23889f },
	{ 1, 0, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.971047f, 0, 0.23889f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.731993f, 0.657082f, 0.18008f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.971047f, 0, -0.238888f },
	{ 0.971047f, 0, -0.238888f },
	{ 0.731993f, 0.657082f, -0.180079f },
	{ -0.971047f, 0, -0.238888f },
	{ -0.971047f, 0, -0.238888f },
	{ -0.731993f, 0.657082f, -0.180079f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.249174f, 0, -0.968459f },
	{ 0.714566f, 0, -0.699568f },
	{ 0.714566f, 0, -0.699568f },
	{ 0.249174f, 0, -0.968459f },
	{ 0.188264f, 0.655087f, -0.731722f },
	{ 0.54447f, 0.647625f, -0.533042f },
	{ -0.238922f, 0, -0.971039f },
	{ -0.238922f, 0, -0.971039f },
	{ -0.180105f, 0.6570759f, -0.731993f },
	{ 0.238922f, 0, -0.971039f },
	{ 0.238922f, 0, -0.971039f },
	{ 0.238922f, 0, -0.971039f },
	{ 0.238922f, 0, -0.971039f },
	{ 0.180105f, 0.6570759f, -0.731993f },
	{ 0.153861f, 0.765043f, -0.625329f },
	{ -0.238922f, 0, -0.971039f },
	{ -0.238922f, 0, -0.971039f },
	{ -0.153861f, 0.765043f, -0.625329f },
	{ -0.24293f, 0, -0.970044f },
	{ -0.24293f, 0, -0.970044f },
	{ -0.183291f, 0.656297f, -0.731901f },
	{ -0.710045f, 0, -0.704156f },
	{ -0.710045f, 0, -0.704156f },
	{ -0.541725f, 0.646463f, -0.537233f },
	{ 0.7145669f, 0, 0.699567f },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00155B38 = { vertex_00155208, normal_001556A0, LengthOfArray<Sint32>(vertex_00155208), meshlist_001551C0, matlist_00154CF0, LengthOfArray<Uint16>(meshlist_001551C0), LengthOfArray<Uint16>(matlist_00154CF0), { 27.5f, 0, 20 }, 111.8034f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00155B60 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00155B38, -367.5f, -7.01f, 1900, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00155B94[] = {
	{ { 0x00FFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00155BA8[] = {
	3, 0, 1, 2,
	6, 1, 3, 2, 15, 14, 5,
	11, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 14
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00155BD8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00155BA8, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00155BF0[] = {
	{ 145, -100, -9.999995f },
	{ 145, 70, -10 },
	{ 190, -100, -55 },
	{ 190, 70, -55 },
	{ 255, -90, -120 },
	{ 255, 70, -120 },
	{ 255, -90, -169.9998f },
	{ 255, 70, -170 },
	{ 344.7f, -90, -170 },
	{ 345, 70, -170 },
	{ 425.0001f, -90, -169.9999f },
	{ 425, 70, -170 },
	{ 499.9999f, -90, -170 },
	{ 500, 70, -170 },
	{ 210.0449f, -90.00001f, -74.94457f },
	{ 208.5296f, 70, -73.52959f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00155CB0[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.706702f, 0, -0.7075109f },
	{ -0.706646f, 0, -0.707567f },
	{ -0.923984f, 0, -0.38243f },
	{ -0.923984f, 0, -0.38243f },
	{ -0.7071069f, -0.00001f, -0.707106f },
	{ -0.707106f, -0.00001f, -0.7071069f },
	{ 0, -0.00001f, -1 },
	{ 0, -0.00001f, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.706781f, 0, -0.707432f },
	{ -0.706835f, 0, -0.707379f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00155D70 = { vertex_00155BF0, normal_00155CB0, LengthOfArray<Sint32>(vertex_00155BF0), meshlist_00155BD8, matlist_00155B94, LengthOfArray<Uint16>(meshlist_00155BD8), LengthOfArray<Uint16>(matlist_00155B94), { 322.5f, -15, -90 }, 194.6953f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00155D98 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00155D70, -685, 90, 2180, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00155DCC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00155DE0[] = {
	4, 11, 19, 44, 18,
	4, 13, 12, 43, 10,
	4, 6, 41, 4, 5,
	4, 7, 40, 0, 9,
	0x8000u | 5, 8, 3, 42, 1, 2,
	0x8000u | 5, 14, 17, 45, 15, 16,
	0x8000u | 7, 22, 40, 20, 43, 27, 29, 28,
	3, 23, 24, 25,
	3, 26, 34, 25,
	6, 34, 42, 25, 41, 23, 30,
	4, 35, 37, 21, 39,
	4, 41, 44, 30, 32,
	7, 43, 29, 45, 33, 44, 31, 32,
	10, 26, 38, 34, 36, 42, 37, 40, 35, 22, 21
};

extern "C" __declspec(dllexport) NJS_TEX uv_00155E88[] = {
	{ 7545, -3914 },
	{ 7288, -4457 },
	{ 7545, -4751 },
	{ 6789, -4751 },
	{ 3254, -4751 },
	{ 2772, -4457 },
	{ 2515, -4751 },
	{ 2515, -3914 },
	{ 7545, -2807 },
	{ 7545, -1969 },
	{ 7288, -2264 },
	{ 6789, -1969 },
	{ 3254, -1969 },
	{ 2515, -1969 },
	{ 2772, -2264 },
	{ 2515, -2807 },
	{ 5793, -1969 },
	{ 5284, -2264 },
	{ 5022, -1969 },
	{ 4775, -2264 },
	{ 4267, -1969 },
	{ 4267, -4751 },
	{ 4775, -4457 },
	{ 5022, -4751 },
	{ 5284, -4457 },
	{ 5793, -4751 },
	{ 0, 255 },
	{ 2515, -1969 },
	{ 0, -1969 },
	{ 2515, -4751 },
	{ 0, -4751 },
	{ 2515, -5865 },
	{ 0, -5865 },
	{ 9180, -1969 },
	{ 9180, 255 },
	{ 7545, 255 },
	{ 5022, 255 },
	{ 5022, -856 },
	{ 7545, 255 },
	{ 5022, -856 },
	{ 5022, -1969 },
	{ 7545, 255 },
	{ 7545, -1969 },
	{ 9180, -1969 },
	{ 9180, -4751 },
	{ 2515, -856 },
	{ 3268, -871 },
	{ 2515, 255 },
	{ 3268, 255 },
	{ 7545, -1969 },
	{ 7545, -4751 },
	{ 9180, -4751 },
	{ 9180, -5865 },
	{ 2515, -4751 },
	{ 2515, -5865 },
	{ 5022, -4751 },
	{ 5022, -5865 },
	{ 7545, -4751 },
	{ 7545, -5865 },
	{ 9180, -5865 },
	{ 5022, 255 },
	{ 4778, 255 },
	{ 5022, -856 },
	{ 4778, -871 },
	{ 5022, -1969 },
	{ 3268, -871 },
	{ 2515, -1969 },
	{ 2515, -856 },
	{ 0, 255 },
	{ 2515, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00155FA0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 14, poly_00155DE0, NULL, NULL, NULL, uv_00155E88, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00155FB8[] = {
	{ -79.77821f, 0, -9.40741f },
	{ -0.111099f, 0, -9.40741f },
	{ -20.33318f, 0, -19.99994f },
	{ 20.11113f, 0, -9.40741f },
	{ 99.77789f, 0, -9.40741f },
	{ 79.9557f, 0, -19.99994f },
	{ 110.0001f, 0, 10.11114f },
	{ -60.55598f, 0, -19.99994f },
	{ 40.33342f, 0, -19.99994f },
	{ -90.00044f, 0, 10.11114f },
	{ -90.00044f, 0, 49.88891f },
	{ 110.0001f, 0, 49.88891f },
	{ -79.77821f, 0, 69.40747f },
	{ -60.55598f, 0, 80 },
	{ -20.33318f, 0, 80 },
	{ 20.11113f, 0, 69.40747f },
	{ 40.33342f, 0, 80 },
	{ -0.111099f, 0, 69.40747f },
	{ 79.9557f, 0, 80 },
	{ 99.77789f, 0, 69.40747f },
	{ -190.0005f, 0, -19.99994f },
	{ -90.00044f, 0, -99.99988f },
	{ -190.0005f, 0, -99.99988f },
	{ 175, 0, -19.99994f },
	{ 175, 0, -99.99988f },
	{ 110.0001f, 0, -99.99988f },
	{ 9.700089f, 0, -99.99988f },
	{ -190.0005f, 0, 79.99976f },
	{ -190.0005f, 0, 120.0001f },
	{ -90.00044f, 0, 120.0001f },
	{ 175, 0, 79.99976f },
	{ 110.0001f, 0, 120.0001f },
	{ 175, 0, 120.0001f },
	{ 9.700089f, 0, 120.0001f },
	{ 9.700089f, 0, -59.99994f },
	{ -90.00044f, 0, -59.99994f },
	{ 0.000046f, 0, -59.49994f },
	{ -60.00013f, 0, -59.50042f },
	{ 0.000046f, 0, -99.99988f },
	{ -60.00044f, 0, -99.99988f },
	{ -90.00044f, 0, -19.99994f },
	{ 110.0001f, 0, -19.99994f },
	{ 9.700089f, 0, -19.99994f },
	{ -90.00044f, 0, 79.99976f },
	{ 110.0001f, 0, 79.99976f },
	{ 9.700089f, 0, 79.99976f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_001561E0[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00156408 = { vertex_00155FB8, normal_001561E0, LengthOfArray<Sint32>(vertex_00155FB8), meshlist_00155FA0, matlist_00155DCC, LengthOfArray<Uint16>(meshlist_00155FA0), LengthOfArray<Uint16>(matlist_00155DCC), { -7.500244f, 0, 10.00009f }, 213.0877f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00156430 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00156408, -350, 0, 1890, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00156464[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 75, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00156478[] = {
	0x8000u | 6, 5, 4, 2, 1, 3, 0
};

extern "C" __declspec(dllexport) NJS_TEX uv_00156488[] = {
	{ 0, -510 },
	{ 0, 255 },
	{ 765, -510 },
	{ 765, 255 },
	{ 1529, -510 },
	{ 1530, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_001564A0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00156478, NULL, NULL, NULL, uv_00156488, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_001564B8[] = {
	{ 320, 0, -369.9999f },
	{ 210, 0, -369.9999f },
	{ 210, 0, -279.9999f },
	{ 320, 0, -279.9999f },
	{ 100, 0, -369.9999f },
	{ 100, 0, -279.9999f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00156500[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00156548 = { vertex_001564B8, normal_00156500, LengthOfArray<Sint32>(vertex_001564B8), meshlist_001564A0, matlist_00156464, LengthOfArray<Uint16>(meshlist_001564A0), LengthOfArray<Uint16>(matlist_00156464), { 210, 0, -324.9999f }, 118.8487f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00156570 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00156548, -579.7736f, -2.5f, 1850.255f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_001565A4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 75, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_001565B8[] = {
	6, 2, 5, 0, 3, 1, 4
};

extern "C" __declspec(dllexport) NJS_TEX uv_001565C8[] = {
	{ 765, 255 },
	{ 0, 255 },
	{ 765, -510 },
	{ 0, -510 },
	{ 765, -1275 },
	{ 0, -1275 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_001565E0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001565B8, NULL, NULL, NULL, uv_001565C8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_001565F8[] = {
	{ 220, 0, -349.9999f },
	{ 220, 0, -259.9999f },
	{ 220, 0, -439.9999f },
	{ 140, 0, -349.9999f },
	{ 140, 0, -259.9999f },
	{ 140, 0, -439.9999f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00156640[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00156688 = { vertex_001565F8, normal_00156640, LengthOfArray<Sint32>(vertex_001565F8), meshlist_001565E0, matlist_001565A4, LengthOfArray<Uint16>(meshlist_001565E0), LengthOfArray<Uint16>(matlist_001565A4), { 180, 0, -349.9999f }, 98.48858f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_001566B0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00156688, -349.573f, -2.5f, 2026.613f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_001566E4[] = {
	{ { 0xB2FFFFFF }, { 0xFFFFFFFF }, 11, 65, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_001566F8[] = {
	6, 2, 3, 1, 0, 5, 4
};

extern "C" __declspec(dllexport) NJS_TEX uv_00156708[] = {
	{ 1275, -510 },
	{ 1275, 255 },
	{ 637, -510 },
	{ 637, 255 },
	{ 0, -510 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00156720[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001566F8, NULL, NULL, NULL, uv_00156708, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00156738[] = {
	{ -90, 0, -100 },
	{ -90, 0, 20 },
	{ 20, 0, 20 },
	{ 20, 0, -100 },
	{ -200, 0, -100 },
	{ -200, 0, 20 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00156780[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_001567C8 = { vertex_00156738, normal_00156780, LengthOfArray<Sint32>(vertex_00156738), meshlist_00156720, matlist_001566E4, LengthOfArray<Uint16>(meshlist_00156720), LengthOfArray<Uint16>(matlist_001566E4), { -90, 0, -40 }, 125.2996f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_001567F0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001567C8, -250, -2, 1960, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00156824[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00156838[] = {
	4, 3, 2, 7, 6,
	0x8000u | 8, 6, 4, 2, 0, 3, 1, 7, 5,
	4, 5, 4, 1, 0
};

extern "C" __declspec(dllexport) NJS_TEX uv_00156860[] = {
	{ 0, -1785 },
	{ 0, 255 },
	{ 1020, -1785 },
	{ 1020, 255 },
	{ 3060, -765 },
	{ 3060, 255 },
	{ 2347, -765 },
	{ 2347, 255 },
	{ 710, -765 },
	{ 710, 255 },
	{ 0, -765 },
	{ 0, 255 },
	{ 1020, -1785 },
	{ 1020, 255 },
	{ 0, -1785 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_001568A0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00156838, NULL, NULL, NULL, uv_00156860, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_001568B8[] = {
	{ 20, -1, -32 },
	{ 20, -1, 37 },
	{ 20, 30, -32 },
	{ 20, 30, 37 },
	{ 49.98f, -1, -32 },
	{ 49.98f, -1, 37 },
	{ 49.98f, 30, -32 },
	{ 49.98f, 30, 37 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00156918[] = {
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, -0.7071069f, -0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00156978 = { vertex_001568B8, normal_00156918, LengthOfArray<Sint32>(vertex_001568B8), meshlist_001568A0, matlist_00156824, LengthOfArray<Uint16>(meshlist_001568A0), LengthOfArray<Uint16>(matlist_00156824), { 34.99f, 14.5f, 2.5f }, 37.82195f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_001569A0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00156978, -450, 0, 1680, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_001569D4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 76, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0x65FFFFFF }, { 0xFFFFFFFF }, 11, 77, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_001569FC[] = {
	4, 3, 2, 1, 0,
	4, 9, 8, 7, 6
};

extern "C" __declspec(dllexport) Sint16 poly_00156A10[] = {
	4, 5, 4, 11, 10
};

extern "C" __declspec(dllexport) NJS_TEX uv_00156A1C[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00156A3C[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00156A4C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_001569FC, NULL, NULL, NULL, uv_00156A1C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00156A10, NULL, NULL, NULL, uv_00156A3C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00156A7C[] = {
	{ 5, 8.999993f, -1 },
	{ 5, -8.999993f, -1 },
	{ 25, 8.999993f, -1 },
	{ 25, -8.999993f, -1 },
	{ 25, 8.999993f, 0 },
	{ 25, -8.999993f, 0 },
	{ -25, 8.999993f, -1 },
	{ -25, -8.999993f, -1 },
	{ -5, 8.999993f, -1 },
	{ -5, -8.999993f, -1 },
	{ -25, 8.999993f, 0 },
	{ -25, -8.999993f, 0 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00156B0C[] = {
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.940721f, 0.338659f, 0.018814f },
	{ 0.940721f, -0.338659f, 0.018814f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.940721f, 0.338659f, 0.018814f },
	{ -0.940721f, -0.338659f, 0.018814f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00156B9C = { vertex_00156A7C, normal_00156B0C, LengthOfArray<Sint32>(vertex_00156A7C), meshlist_00156A4C, matlist_001569D4, LengthOfArray<Uint16>(meshlist_00156A4C), LengthOfArray<Uint16>(matlist_001569D4), { 0, 0, -0.5f }, 25.005f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00156BC4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00156B9C, -245, 14.5f, 1788.995f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00156BF8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00138110, -397.2499f, 14.5f, 1665, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00156C2C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014042C, -440, 122.5f, 1785, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00156C60 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014042C, -440, 177.5f, 1785, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00156C94 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014042C, -805, 67.5f, 2055, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00156CC8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014042C, -805, 122.5f, 2055, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00156CFC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014042C, -805, 177.5f, 2055, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00156D30 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014ABFC, -272, 8, 2021, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00156D64 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014ABFC, -326, 8, 2021, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00156D98 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014ABFC, -384, 8, 2021, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00156DCC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014ABFC, -422, 8, 2049, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00156E00 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014ABFC, -446, 8, 2087, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00156E34 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014ABFC, -478, 8, 2123, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00156E68 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014B2B8, -537.45f, 122.5f, 1920, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00156E9C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014B2B8, -537.45f, 177.5f, 1920, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00156ED0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014EB28, -172.55f, 122.5f, 1920, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00156F04 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014EB28, -172.55f, 177.5f, 1920, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00156F38 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00151DF8_3, -716.7422f, -24.05f, 2061.453f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00156F6C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00154950, -728.7998f, -20.25875f, 2109.782f, 0xFFFFFEF8, 0x6B0E, 0x7E8, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00156FA0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00154950, -850.5773f, -20.25875f, 2145.729f, 0x684, 0xFFFFE998, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00156FD4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00154950, -1063.028f, -20.25875f, 2660.761f, 0x5A1, 0xFFFFF68D, 0x89B, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00157008 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00154950, -1075.904f, -20.25875f, 2626.426f, 0xFFFFF3F3, 0xFFFFE710, 0xDEC, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0015703C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00154950, -388.7247f, -20.25875f, 2043.195f, 0x6E9, 0xFFFFF31D, 0xFFFFF9E3, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00157070 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00154950, -305.2247f, -20.25875f, 2045.195f, 0x73A, 0xFFFFFE00, 0x123, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_001570A4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00154950, -231.2247f, -20.25875f, 2043.195f, 0x807E, 0xFFFFD25B, 0xFFFF8278, 1, 1, 1, NULL, NULL };

//Collision pieces from DX

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00192E58[] = {
	{ { 0x00B2B2B2 }, { 0x00FFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00192E6C[] = {
	0x8000u | 9, 0, 1, 12, 13, 10, 11, 8, 9, 6,
	3, 2, 4, 5,
	3, 6, 7, 9,
	0x8000u | 5, 6, 7, 3, 5, 2
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00192EF0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00192E6C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00192F10[] = {
	{ 190, -80, -55 },
	{ 190, -100, -55 },
	{ 500, -80, -170 },
	{ 425.0001f, -80, -169.9999f },
	{ 499.9999f, -90, -170 },
	{ 425.0001f, -90, -169.9999f },
	{ 344.8441f, -80, -170 },
	{ 344.7001f, -90, -170 },
	{ 255, -80, -169.9999f },
	{ 255, -90, -169.9998f },
	{ 255, -80, -120 },
	{ 255, -90, -120 },
	{ 209.317f, -80, -74.26483f },
	{ 210.045f, -90.00001f, -74.94458f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00192FB8[] = {
	{ -0.705326f, -0.00316f, -0.708876f },
	{ -0.705326f, -0.00316f, -0.708876f },
	{ -0.00001f, 0, -1 },
	{ 0, -0.00003f, -1 },
	{ -0.00001f, 0, -1 },
	{ 0, -0.00003f, -1 },
	{ 0, -0.00003f, -1 },
	{ 0, -0.00003f, -1 },
	{ -0.707105f, 0, -0.707109f },
	{ -0.70711f, 0, -0.707103f },
	{ -0.92404f, -0.00001f, -0.382295f },
	{ -0.92404f, -0.00001f, -0.382295f },
	{ -0.70644f, -0.00168f, -0.707771f },
	{ -0.706467f, -0.001645f, -0.707744f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00193060 = { vertex_00192F10, normal_00192FB8, LengthOfArray<Sint32>(vertex_00192F10), meshlist_00192EF0, matlist_00192E58, LengthOfArray<Uint16>(meshlist_00192EF0), LengthOfArray<Uint16>(matlist_00192E58), { 345, -90, -112.5f }, 165.3217f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0019308C_DX = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00193060, -685, 90, 2180, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00191E98[] = {
	{ { 0x00B2B2B2 }, { 0x00FFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00191EAC[] = {
	3, 1, 0, 5,
	3, 0, 4, 5,
	0x8000u | 16, 6, 9, 7, 8, 10, 11, 12, 13, 14, 15, 16, 17, 0, 3, 1, 2
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00191F38[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00191EAC, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00191F58[] = {
	{ 190, -80, -55 },
	{ 145, -80, -10 },
	{ 145, 165, -10 },
	{ 190, 165, -55 },
	{ 190, -100, -55 },
	{ 145, -100, -9.999996f },
	{ 500, -80, -170 },
	{ 425.0001f, -80, -169.9999f },
	{ 425, 165, -170 },
	{ 500, 165, -170 },
	{ 344.8441f, -80, -170 },
	{ 345, 165, -170 },
	{ 255, -80, -169.9999f },
	{ 255, 165, -170 },
	{ 255, -80, -120 },
	{ 255, 165, -120 },
	{ 209.317f, -80, -74.26483f },
	{ 208.5296f, 165, -73.52959f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00192030[] = {
	{ -0.706944f, 0, -0.707269f },
	{ -0.707107f, 0, -0.707107f },
	{ -0.707107f, 0, -0.707107f },
	{ -0.706863f, 0, -0.707351f },
	{ -0.707107f, 0, -0.707107f },
	{ -0.707107f, 0, -0.707107f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.707107f, 0, -0.707106f },
	{ -0.707107f, 0, -0.707107f },
	{ -0.923934f, -0.00082f, -0.382553f },
	{ -0.923934f, -0.00082f, -0.382553f },
	{ -0.706964f, -0.00076f, -0.70725f },
	{ -0.706962f, -0.00076f, -0.707252f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00192108 = { vertex_00191F58, normal_00192030, LengthOfArray<Sint32>(vertex_00191F58), meshlist_00191F38, matlist_00191E98, LengthOfArray<Uint16>(meshlist_00191F38), LengthOfArray<Uint16>(matlist_00191E98), { 322.5f, 32.5f, -90 }, 194.6953f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00192134_DX = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00192108, -685, 90, 2180, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_001B6178[] = {
		{ { 0xB2FFFFFF },{ 0xFFFFFFFF }, 11, 78, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_001B6190[] = {
		4, 3, 2, 1, 0
};

NJS_COLOR vcolor_001B6370_DX[] = {
	{ 0xFF3163D3 },
	{ 0xFF3C70E1 },
	{ 0xFF3C70E1 },
	{ 0xFF3163D3 },
	{ 0xFE3163D3 },
	{ 0xFF3C70E1 },
	{ 0xFE3163D3 },
	{ 0xFF3C70E1 },
	{ 0xFF3C70E1 },
	{ 0xFE3163D3 },
	{ 0xFF3263D3 },
	{ 0xFF3C70E1 },
	{ 0xFF3263D3 },
	{ 0xFF3C70E1 },
	{ 0xFF3C70E1 },
	{ 0xFF3263D3 },
	{ 0xFE3163D3 },
	{ 0xFF3C70E1 },
	{ 0xFE3163D3 },
	{ 0xFF3C70E1 },
	{ 0xFF3C70E1 },
	{ 0xFF3263D3 },
	{ 0xFE3163D3 },
	{ 0xFE3B6FE0 },
	{ 0xFE3163D3 },
	{ 0xFF3C70E1 },
	{ 0xFE3B6FE0 },
	{ 0xFE3163D3 },
	{ 0xFF3263D3 },
	{ 0xFF3C70E1 },
	{ 0xFF3263D3 },
	{ 0xFE3B6FE0 },
	{ 0xFF3C70E1 },
	{ 0xFE2756C5 },
	{ 0xFF2856C5 },
	{ 0xFF3163D3 },
	{ 0xFF2856C5 },
	{ 0xFF3163D3 },
	{ 0xFF3163D3 },
	{ 0xFF3C70E1 },
	{ 0xFF2856C5 },
	{ 0xFE3163D3 },
	{ 0xFF3163D3 },
	{ 0xFF2856C5 },
	{ 0xFF3263D3 },
	{ 0xFE3163D3 },
	{ 0xFF2856C5 },
	{ 0xFF2756C5 },
	{ 0xFF3263D3 },
	{ 0xFF2756C5 },
	{ 0xFE3163D3 },
	{ 0xFF3263D3 },
	{ 0xFF2756C5 },
	{ 0xFF2856C5 },
	{ 0xFF3263D3 },
	{ 0xFF2856C5 },
	{ 0xFE3163D3 },
	{ 0xFF3263D3 },
	{ 0xFF2756C5 },
	{ 0xFF3263D3 },
	{ 0xFE3163D3 },
	{ 0xFF1E49B7 },
	{ 0xFF2856C5 },
	{ 0xFE2756C5 },
	{ 0xFF1E49B7 },
	{ 0xFF1D49B7 },
	{ 0xFF2856C5 },
	{ 0xFF1D49B7 },
	{ 0xFF2856C5 },
	{ 0xFF2856C5 },
	{ 0xFF3163D3 },
	{ 0xFF1D49B7 },
	{ 0xFF1E49B7 },
	{ 0xFF2856C5 },
	{ 0xFF1E49B7 },
	{ 0xFF2856C5 },
	{ 0xFF2856C5 },
	{ 0xFE3163D3 },
	{ 0xFF1E49B7 },
	{ 0xFF2756C5 },
	{ 0xFF2856C5 },
	{ 0xFF1E49B7 },
	{ 0xFF2856C5 },
	{ 0xFF2756C5 },
	{ 0xFF1E49B7 },
	{ 0xFF2756C5 },
	{ 0xFF2756C5 },
	{ 0xFE3163D3 },
	{ 0xFF133CA9 },
	{ 0xFF1E49B7 },
	{ 0xFF1E49B7 },
	{ 0xFE2756C5 },
	{ 0xFF133CA9 },
	{ 0xFF143CA9 },
	{ 0xFF1E49B7 },
	{ 0xFF143CA9 },
	{ 0xFF1D49B7 },
	{ 0xFF1E49B7 },
	{ 0xFF143CA9 },
	{ 0xFF133CA9 },
	{ 0xFF1D49B7 },
	{ 0xFF133CA9 },
	{ 0xFF1E49B7 },
	{ 0xFF1D49B7 },
	{ 0xFF133CA9 },
	{ 0xFF143CA9 },
	{ 0xFF1E49B7 },
	{ 0xFF143CA9 },
	{ 0xFF1E49B7 },
	{ 0xFF1E49B7 },
	{ 0xFF2856C5 },
	{ 0xFF143CA9 },
	{ 0xFE143CA9 },
	{ 0xFF1E49B7 },
	{ 0xFE143CA9 },
	{ 0xFF1E49B7 },
	{ 0xFF1E49B7 },
	{ 0xFF2756C5 },
	{ 0xFF143CA9 },
	{ 0xFF1E49B7 },
	{ 0xFF1E49B7 },
	{ 0xFF2756C5 },
	{ 0xFF0A2F9B },
	{ 0xFF00238E },
	{ 0xFF00238E },
	{ 0xFF133CA9 },
	{ 0xFF0A2F9B },
	{ 0xFF0A2F9B },
	{ 0xFF00238E },
	{ 0xFF0A2F9B },
	{ 0xFF133CA9 },
	{ 0xFF133CA9 },
	{ 0xFF1E49B7 },
	{ 0xFF0A2F9B },
	{ 0xFF00238E },
	{ 0xFF00238E },
	{ 0xFF133CA9 },
	{ 0xFF0A2F9B },
	{ 0xFF0A2F9B },
	{ 0xFF00238E },
	{ 0xFF0A2F9B },
	{ 0xFF143CA9 },
	{ 0xFF133CA9 },
	{ 0xFF0A2F9B },
	{ 0xFF00238E },
	{ 0xFF00238E },
	{ 0xFF143CA9 },
	{ 0xFF0A2F9B },
	{ 0xFF0A2F9B },
	{ 0xFF00238E },
	{ 0xFF0A2F9B },
	{ 0xFF133CA9 },
	{ 0xFF143CA9 },
	{ 0xFF0A2F9B },
	{ 0xFF00238E },
	{ 0xFE00238D },
	{ 0xFF133CA9 },
	{ 0xFF0A2F9B },
	{ 0xFF0A2F9B },
	{ 0xFE00238D },
	{ 0xFF0A2F9B },
	{ 0xFF143CA9 },
	{ 0xFF133CA9 },
	{ 0xFF0A2F9B },
	{ 0xFF00238E },
	{ 0xFF00238E },
	{ 0xFF143CA9 },
	{ 0xFF0A2F9B },
	{ 0xFF0A2F9B },
	{ 0xFF00238E },
	{ 0xFF0A2F9B },
	{ 0xFE143CA9 },
	{ 0xFF143CA9 },
	{ 0xFF0A2F9B },
	{ 0xFE00238D },
	{ 0xFF00238E },
	{ 0xFF143CA9 },
	{ 0xFF0A2F9B },
	{ 0xFF0A2F9B },
	{ 0xFF00238E },
	{ 0xFF0A2F9B },
	{ 0xFF143CA9 },
	{ 0xFF143CA9 },
	{ 0xFF1E49B7 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001B6650[] = {
	{ 16320, -16065 },
	{ 16320, 255 },
	{ 0, -16065 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_001B6930[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001B6190, NULL, NULL, vcolor_001B6370_DX, uv_001B6650, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_001B6950[] = {
	{ -3685, 0, -1475 },
	{ -3685, 0, 3608 },
	{ 1275, 0, -1475 },
	{ 1275, 0, 3608 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_001B6BA0[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_001B6DEC = { vertex_001B6950, normal_001B6BA0, LengthOfArray<Sint32>(vertex_001B6950), meshlist_001B6930, matlist_001B6178, LengthOfArray<Uint16>(meshlist_001B6930), LengthOfArray<Uint16>(matlist_001B6178), { -1205, 0, 1066.5f }, 3551.003f, NULL };

NJS_OBJECT SADXWaterSeaBottom = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001B6DEC, 567.5f, -25.5f, 1812, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) COL collist_00134D10[] = {
	{ { -637.5001f, -40.5f, 2878.5f }, 3552.003f, 0, 0, &SADXWaterSeaBottom, 0, 0 }, //SADX style sea bottom
	{ { -340, 0, 2067.5f }, 166.6238f, 0, 0, &object_0019308C_DX, 0, 0x20001001 }, //DX collision bottom
	{ { -362.5f, 122.5f, 2090 }, 236.5048f, 0, 0, &object_00192134_DX, 0, 0x200001 }, //DX collision top
	//{ { -362.5f, 75, 2090 }, 212.4412f, 0, 0, &object_00155D98, 0, 0x20200001 }, //SA1 piece replaced with DX collision
	{ { -274.8333f, -7.499999f, 1889.784f }, 40.58378f, 0, 0, &object_001366D4, 0, 0xE0000001 },
	{ { -649.9999f, 75, 2170 }, 139.0144f, 0, 0, &object_00136834, 0, 0x20200001 },
	{ { -478.75f, -0.00004f, 2057.528f }, 68.08406f, 0, 0, &object_00136940, 0, 0x40000001 },
	{ { -297.75f, 12.5f, 1645 }, 30.43537f, 0, 0, &object_00136A68, 0, 0x40001001 },
	{ { -345.0001f, 80, 1825 }, 180.624f, 0, 0, &object_00136E74, 0, 0x20001001 },
	{ { -516.2499f, 80, 1942.25f }, 136.6807f, 0, 0, &object_00136FD4, 0, 0x20001001 },
	{ { -646.2502f, 75, 2068.75f }, 146.9377f, 0, 0, &object_00137150, 0, 0x20001001 },
	{ { -185, 80, 1905 }, 132.0038f, 0, 0, &object_00137278, 0, 0x20001001 },
	{ { -312.8f, 16.5f, 1741.588f }, 39.79779f, 0, 0, &object_001373D4, 0, 0x40001001 },
	{ { -397.2502f, 14.5f, 1700 }, 21.04311f, 0, 0, &object_00138138, 0, 0xE0001001 },
	{ { -267.7501f, 14.5f, 1685.249f }, 37.98437f, 0, 0, &object_00138EC8, 0, 0xC0001001 },
	{ { -305, 54, 1602.749f }, 25.15079f, 0, 0, &object_00139BC8, 0, 0xC0001001 },
	{ { -382.5f, 36, 1750 }, 52.10806f, 0, 0, &object_00139E94, 0, 0xC0001001 },
	{ { -332.5f, 74.5f, 1689 }, 111.8369f, 0, 0, &object_0013A3AC, 0, 0xA0001001 },
	{ { -302.5f, 59.5f, 1562.5f }, 47.25198f, 0, 0, &object_0013ACEC, 0, 0xC0001001 },
	{ { -332.5f, 19.5f, 1682.75f }, 125.6346f, 0, 0, &object_0013BE84, 0, 0xC0001001 },
	{ { -332.5f, 54, 1689 }, 112.7043f, 0, 0, &object_0013C91C, 0, 0xC0001001 },
	{ { -295, 45.75f, 1643.7f }, 29.58889f, 0, 0, &object_0013CA10, 0, 0x40001001 },
	{ { -313.75f, 26.75f, 1738.25f }, 44.91311f, 0, 0, &object_0013CBD8, 0, 0xE0001001 },
	{ { -351, 25.75f, 1725.25f }, 47.50921f, 0, 0, &object_0013CDD4, 0, 0xC0001001 },
	{ { -629.9749f, -10, 2121.245f }, 143.5581f, 0, 0, &object_0013CF30, 0, 0x20100101 },
	{ { -297.75f, 27, 1647.699f }, 27.70943f, 0, 0, &object_0013D2DC, 0, 0xC0000001 },
	{ { -380.05f, 14.5f, 1762.7f }, 37.98437f, 0, 0, &object_0013E06C, 0, 0xC0000001 },
	{ { -302.5f, 39, 1622.5f }, 43.73214f, 0, 0, &object_0013E170, 0, 0xC0000001 },
	{ { -332.5f, 0, 1715.25f }, 147.7796f, 0, 0, &object_0013E4F0, 0, 0xA0000001 },
	{ { -370.3737f, -1.25f, 1582.48f }, 72.17f, 0, 0, &object_0013E6E0, 0, 0xA0000001 },
	{ { -222.4688f, -1.25f, 1676.262f }, 72.17276f, 0, 0, &object_0013E8D0, 0, 0xA0000001 },
	{ { -511.2227f, -5, 2088.775f }, 51.53855f, 0, 0, &object_0013E9C4, 0, 0x40004001 },
	{ { -312.5539f, 19.5f, 1734.606f }, 45.2243f, 0, 0, &object_0013EB40, 0, 0x40004001 },
	{ { -485.9998f, 0, 2073.5f }, 99.54019f, 0, 0, &object_0013FA4C, 0, 0x80000000 },
	{ { -480.0453f, -0.00004f, 2057.528f }, 69.01751f, 0, 0, &object_0013FB8C, 0, 0x80000000 },
	{ { -509.9898f, -5.000004f, 2085.045f }, 49.81225f, 0, 0, &object_0013FE78, 0, 0x80000000 },
	{ { -355, 67.5f, 1785 }, 162.423f, 0, 0, &object_00140454, 0, 0x80000000 },
	{ { -355, 220, 1790 }, 160.7016f, 0, 0, &object_00140644, 0, 0x80000000 },
	{ { -720, 220, 2060 }, 160.7016f, 0, 0, &object_00140834, 0, 0x80000000 },
	{ { -297.75f, 8, 1641 }, 29.15582f, 0, 0, &object_001411D0, 0, 0x80000000 },
	{ { -297.75f, 12.5f, 1635 }, 32.0361f, 0, 0, &object_00141554, 0, 0x80000000 },
	{ { -722.5f, 40, 1937.5f }, 262.9876f, 0, 0, &object_00141ED4, 0, 0x80000000 },
	{ { -347.5f, 25, 1818.993f }, 177.0386f, 0, 0, &object_001439EC, 0, 0x80000000 },
	{ { -702.25f, 10, 1920.5f }, 225.4502f, 0, 0, &object_00144088, 0, 0x80000000 },
	{ { -294.9998f, 46.25f, 1642.499f }, 30.34028f, 0, 0, &object_00145234, 0, 0x80000000 },
	{ { -364.9999f, 46.25f, 1737.5f }, 25.52513f, 0, 0, &object_00146150, 0, 0x80000000 },
	{ { -312.5576f, 18, 1738.984f }, 41.92652f, 0, 0, &object_00147528, 0, 0x80000000 },
	{ { -537.5f, 220, 1925 }, 137.6817f, 0, 0, &object_00147820, 0, 0x80000000 },
	{ { -162.4999f, -5.000008f, 2040 }, 16.77059f, 0, 0, &object_00147924, 0, 0x80000000 },
	{ { -537.45f, 67.5f, 1920 }, 144.4464f, 0, 0, &object_0014B2E0, 0, 0x80000000 },
	{ { -294.5f, 0, 2020 }, 120.3339f, 0, 0, &object_0014BEA4, 0, 0x80000000 },
	{ { -325, 27.75f, 1726.5f }, 31.40594f, 0, 0, &object_0014D598, 0, 0x80000000 },
	{ { -312.75f, 27.75f, 1739.25f }, 44.50515f, 0, 0, &object_0014E494, 0, 0x80000000 },
	{ { -172.55f, 67.5f, 1915 }, 139.6057f, 0, 0, &object_0014EB50, 0, 0x80000000 },
	{ { -162.4999f, 19.99999f, 1920 }, 132.1223f, 0, 0, &object_0014EEBC, 0, 0x80000000 },
	{ { -172.5f, 220, 1920 }, 132.7827f, 0, 0, &object_0014F1B4, 0, 0x80000000 },
	{ { -821.3391f, -6.236092f, 2619.258f }, 62.05347f, 0, 0, &object_00150A1C, 0, 0x80000000 },
	{ { -370, 32.5f, 1527 }, 102.7825f, 0, 0, &object_001520DC, 0, 0x80000000 },
	{ { -172.5f, 43.5f, 1676 }, 98.45557f, 0, 0, &object_00152294, 0, 0x80000000 },
	{ { -705.9538f, 63.99175f, 2187.786f }, 92.20733f, 0, 0, &object_00154978, 0, 0x80000000 },
	{ { -379.9999f, 12.5f, 1798 }, 45.96201f, 0, 0, &object_00154CBC, 0, 0xC0000001 },
	{ { -340, -7, 1920 }, 112.0223f, 0, 0, &object_00155B60, 0, 0xC0000001 },
	{ { -357.5002f, 0, 1900 }, 213.0876f, 0, 0, &object_00156430, 0, 0xA0000001 },
	{ { -369.7735f, -2.5f, 1525.255f }, 118.8487f, 0, 0, &object_00156570, 0, 0xA0000001 },
	{ { -169.5729f, -2.5f, 1676.613f }, 98.48858f, 0, 0, &object_001566B0, 0, 0xA0000001 },
	{ { -415.01f, 14.5f, 1682.5f }, 40.68415f, 0, 0, &object_001569A0, 0, 0x80000000 },
	{ { -245, 14.5f, 1788.495f }, 26.57536f, 0, 0, &object_00156BC4, 0, 0x80000000 },
	{ { -397.2501f, 14.5f, 1665 }, 21.04311f, 0, 0, &object_00156BF8, 0, 0xE0001001 },
	{ { -355, 122.5f, 1785 }, 162.423f, 0, 0, &object_00156C2C, 0, 0x80000000 },
	{ { -355, 177.5f, 1785 }, 162.423f, 0, 0, &object_00156C60, 0, 0x80000000 },
	{ { -720, 67.5f, 2055 }, 162.423f, 0, 0, &object_00156C94, 0, 0x80000000 },
	{ { -720, 122.5f, 2055 }, 162.423f, 0, 0, &object_00156CC8, 0, 0x80000000 },
	{ { -720, 177.5f, 2055 }, 162.423f, 0, 0, &object_00156CFC, 0, 0x80000000 },
	{ { -271.7067f, 34.07793f, 2019.35f }, 39.3541f, 0, 0, &object_00156D30, 0, 0x86040000 }, //Palm tree small 1
	{ { -325.7067f, 34.07793f, 2019.35f }, 39.3541f, 0, 0, &object_00156D64, 0, 0x86040000 }, //Palm tree small 2
	{ { -383.7067f, 34.07793f, 2019.35f }, 39.3541f, 0, 0, &object_00156D98, 0, 0x86040000 }, //Palm tree small 3
	{ { -421.7067f, 34.07793f, 2047.35f }, 39.3541f, 0, 0, &object_00156DCC, 0, 0x86040000 }, //Palm tree small 4
	{ { -445.7067f, 34.07793f, 2085.35f }, 39.3541f, 0, 0, &object_00156E00, 0, 0x86040000 }, //Palm tree small 5
	{ { -477.7067f, 34.07793f, 2121.35f }, 39.3541f, 0, 0, &object_00156E34, 0, 0x86040000 }, //Palm tree small 6
	{ { -216.7067f, 34.07793f, 2019.35f }, 39.3541f, 0, 0, &object_0014AC24, 0, 0x86040000 }, //Palm tree small 7
	{ { -537.45f, 122.5f, 1920 }, 144.4464f, 0, 0, &object_00156E68, 0, 0x80000000 },
	{ { -537.45f, 177.5f, 1920 }, 144.4464f, 0, 0, &object_00156E9C, 0, 0x80000000 },
	{ { -172.55f, 122.5f, 1915 }, 139.6057f, 0, 0, &object_00156ED0, 0, 0x80000000 },
	{ { -172.55f, 177.5f, 1915 }, 139.6057f, 0, 0, &object_00156F04, 0, 0x80000000 },
	{ { -749.4633f, 63.01091f, 2109.519f }, 92.20733f, 0, 0, &object_00156F6C, 0, 0x86040000 }, //Palm tree 1
	{ { -854.6483f, 64.30426f, 2159.636f }, 92.20733f, 0, 0, &object_00156FA0, 0, 0x86040000 }, //Palm tree 2
	{ { -1079.934f, 62.89273f, 2673.445f }, 92.20733f, 0, 0, &object_00156FD4, 0, 0x86040000 }, //Palm tree 3
	{ { -1087.123f, 62.87156f, 2608.416f }, 92.20733f, 0, 0, &object_00157008, 0, 0x86040000 }, //Palm tree 4
	{ { -377.0827f, 63.36539f, 2058.438f }, 92.20733f, 0, 0, &object_0015703C, 0, 0x86040000 }, //Palm tree 5
	{ { -304.5501f, 64.09923f, 2060.821f }, 92.20733f, 0, 0, &object_00157070, 0, 0x86040000 }, //Palm tree 6
	{ { -239.2983f, 65.10952f, 2046.016f }, 92.20733f, 0, 0, &object_001570A4, 0, 0x86040000 }, //Palm tree 7
	{ { -736.7422f, -25, 2061.453f }, 840.7969f, 0, 0, &object_00151E20, 0, 0x80040000 }, //Seashore
	{ { -1014.274f, -22.00009f, 2626.268f }, 423.226f, 0, 0, &object_00148654, 0, 0x80000000 }, //Island
	{ { -1014.274f, -22.00009f, 2626.268f }, 423.226f, 0, 0, &object_00148654_2, 0, 0x80000000 }, //Seashore transparent (island)
	{ { -1019.323f, -10.50001f, 2626.288f }, 283.9111f, 0, 0, &object_00148B9C, 0, 0x80000000 }, //Seawaves (island)
	{ { -736.7422f, -25, 2061.453f }, 840.7969f, 0, 0, &object_00151E20_2, 0, 0x80040000 }, //Seashore transparent
	{ { -731.9571f, -10.5f, 2012.492f }, 741.9803f, 0, 0, &object_00156F38, 0, 0x80000000 }, //There are two identical seashore objects, I modified the second one for the sea waves
	{ { -340, -8.45f, 1920 }, 111.8022f, 0, 0, &object_0014BA6C, 0, 0x80040000 }, //Pool shadow
	{ { -274.8817f, -7.434997f, 1889.982f }, 40.98962f, 0, 0, &object_0014C4E8, 0, 0x80040000 }, //Pool stairs shadow
	{ { -340, -2, 1920 }, 125.2996f, 0, 0, &object_001567F0, 0, 0x80000002 }, //Pool water
	{ { -637.5001f, -13, 2878.5f }, 3551.003f, 0, 0, &object_00151F24, 0, 0x8000000 }, //Ocean
};

extern "C" __declspec(dllexport) LandTable landtable_00135A90 = { LengthOfArray<int16_t>(collist_00134D10), 0, 0xC, 1500, collist_00134D10, NULL, "ADVSS04", (NJS_TEXLIST *)&texlist_advss04, 0, 0 };

#pragma warning(pop)