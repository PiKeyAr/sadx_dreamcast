#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

NJS_MATERIAL matlistSTG04_00139614[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_tirepattern, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_tyre_all, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polySTG04_0013963C[] = {
	0x8000u | 18, 0, 1, 14, 15, 12, 13, 10, 11, 8, 9, 6, 7, 4, 5, 2, 3, 0, 1,
	0x8000u | 18, 17, 16, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16
};

Sint16 polySTG04_00139688[] = {
	0x8000u | 8, 17, 31, 19, 29, 21, 27, 23, 25,
	0x8000u | 8, 9, 11, 7, 13, 5, 15, 3, 1
};

NJS_TEX uvSTG04_001396AC[] = {
	{ -256, 254 },
	{ -256, 0 },
	{ 0, 254 },
	{ 0 },
	{ 256, 254 },
	{ 256, 0 },
	{ 512, 254 },
	{ 512, 0 },
	{ 768, 254 },
	{ 768, 0 },
	{ 1024, 254 },
	{ 1024, 0 },
	{ 1280, 254 },
	{ 1280, 0 },
	{ 1536, 254 },
	{ 1536, 0 },
	{ 1783, 254 },
	{ 1783, 0 },
	{ 0, 255 },
	{ 0 },
	{ 256, 255 },
	{ 256, 0 },
	{ 512, 255 },
	{ 512, 0 },
	{ 768, 255 },
	{ 768, 0 },
	{ 1024, 255 },
	{ 1024, 0 },
	{ 1280, 255 },
	{ 1280, 0 },
	{ 1536, 255 },
	{ 1536, 0 },
	{ 1792, 255 },
	{ 1792, 0 },
	{ 2040, 255 },
	{ 2040, 0 }
};

NJS_TEX uvSTG04_0013973C[] = {
	{ 509, 0 },
	{ 435, 180 },
	{ 435, -180 },
	{ 255, 255 },
	{ 255, -254 },
	{ 74, 180 },
	{ 74, -180 },
	{ 0 },
	{ 0 },
	{ 74, 180 },
	{ 74, -180 },
	{ 255, 255 },
	{ 255, -254 },
	{ 435, 180 },
	{ 435, -180 },
	{ 509, 0 }
};

NJS_MESHSET_SADX meshlistSTG04_0013977C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, polySTG04_0013963C, NULL, NULL, NULL, uvSTG04_001396AC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, polySTG04_00139688, NULL, NULL, NULL, uvSTG04_0013973C, NULL }
};

NJS_VECTOR normalSTG04_001397AC[] = {
	{ 3.62462f, 0.000002f, -7.597375f },
	{ 3.62462f, 0.000001f, -10.63752f },
	{ 2.562997f, 2.562989f, -7.597375f },
	{ 2.562997f, 2.562988f, -10.63752f },
	{ 0.00001f, 3.624611f, -7.597375f },
	{ 0.00001f, 3.62461f, -10.63752f },
	{ -2.562977f, 2.562989f, -7.597375f },
	{ -2.562977f, 2.562988f, -10.63752f },
	{ -3.624603f, 0.000002f, -7.597375f },
	{ -3.624603f, 0.000001f, -10.63752f },
	{ -2.562977f, -2.562985f, -7.597375f },
	{ -2.562977f, -2.562986f, -10.63752f },
	{ 0.00001f, -3.624609f, -7.597375f },
	{ 0.00001f, -3.62461f, -10.63752f },
	{ 2.562996f, -2.562985f, -7.597374f },
	{ 2.562996f, -2.562986f, -10.63752f },
	{ 3.62462f, 0.000002f, 7.604571f },
	{ 3.62462f, 0.000001f, 10.64471f },
	{ 2.562997f, 2.562989f, 7.604571f },
	{ 2.562997f, 2.562988f, 10.64471f },
	{ 0.00001f, 3.624611f, 7.604571f },
	{ 0.00001f, 3.62461f, 10.64471f },
	{ -2.562977f, 2.562989f, 7.604571f },
	{ -2.562977f, 2.562988f, 10.64471f },
	{ -3.624603f, 0.000002f, 7.604571f },
	{ -3.624603f, 0.000001f, 10.64471f },
	{ -2.562977f, -2.562985f, 7.604571f },
	{ -2.562977f, -2.562986f, 10.64471f },
	{ 0.00001f, -3.624609f, 7.604571f },
	{ 0.00001f, -3.62461f, 10.64471f },
	{ 2.562996f, -2.562985f, 7.604571f },
	{ 2.562996f, -2.562986f, 10.64471f }
};

NJS_VECTOR normalSTG04_0013992C[] = {
	{ 1, 0, 0 },
	{ 0.776382f, 0, -0.630262f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.5489849f, 0.5489849f, -0.630263f },
	{ 0, 1, 0 },
	{ 0, 0.776382f, -0.630263f },
	{ -0.707106f, 0.7071069f, 0 },
	{ -0.5489849f, 0.5489849f, -0.630263f },
	{ -1, 0, 0 },
	{ -0.776382f, 0, -0.630262f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.5489849f, -0.5489849f, -0.630262f },
	{ 0, -1, 0 },
	{ 0, -0.776382f, -0.630262f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.5489849f, -0.5489849f, -0.630262f },
	{ 1, 0, 0 },
	{ 0.776382f, 0, 0.630262f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.5489849f, 0.5489849f, 0.630263f },
	{ 0, 1, 0 },
	{ 0, 0.776382f, 0.630263f },
	{ -0.707106f, 0.7071069f, 0 },
	{ -0.5489849f, 0.5489849f, 0.630263f },
	{ -1, 0, 0 },
	{ -0.776382f, 0, 0.630262f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.5489849f, -0.5489849f, 0.630262f },
	{ 0, -1, 0 },
	{ 0, -0.776382f, 0.630262f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.5489849f, -0.5489849f, 0.630262f }
};

NJS_MODEL_SADX attachSTG04_00139AAC = { normalSTG04_001397AC, normalSTG04_0013992C, LengthOfArray(normalSTG04_001397AC), meshlistSTG04_0013977C, matlistSTG04_00139614, LengthOfArray(meshlistSTG04_0013977C), LengthOfArray(matlistSTG04_00139614), { 0.000008f, 0.000001f, 0.003598f }, 11.24149f, NULL };

NJS_OBJECT objectSTG04_00139AD4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG04_00139AAC, 14.20206f, -3.265216f, -0.066299f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlistSTG04_00139B08[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_tirepattern, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_tyre_all, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polySTG04_00139B30[] = {
	0x8000u | 18, 0, 1, 14, 15, 12, 13, 10, 11, 8, 9, 6, 7, 4, 5, 2, 3, 0, 1,
	0x8000u | 18, 17, 16, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16
};

Sint16 polySTG04_00139B7C[] = {
	0x8000u | 8, 17, 31, 19, 29, 21, 27, 23, 25,
	0x8000u | 8, 9, 11, 7, 13, 5, 15, 3, 1
};

NJS_TEX uvSTG04_00139BA0[] = {
	{ -256, 254 },
	{ -256, 0 },
	{ 0, 254 },
	{ 0 },
	{ 256, 254 },
	{ 256, 0 },
	{ 512, 254 },
	{ 512, 0 },
	{ 768, 254 },
	{ 768, 0 },
	{ 1024, 254 },
	{ 1024, 0 },
	{ 1280, 254 },
	{ 1280, 0 },
	{ 1536, 254 },
	{ 1536, 0 },
	{ 1783, 254 },
	{ 1783, 0 },
	{ 0, 255 },
	{ 0 },
	{ 256, 255 },
	{ 256, 0 },
	{ 512, 255 },
	{ 512, 0 },
	{ 768, 255 },
	{ 768, 0 },
	{ 1024, 255 },
	{ 1024, 0 },
	{ 1280, 255 },
	{ 1280, 0 },
	{ 1536, 255 },
	{ 1536, 0 },
	{ 1792, 255 },
	{ 1792, 0 },
	{ 2040, 255 },
	{ 2040, 0 }
};

NJS_TEX uvSTG04_00139C30[] = {
	{ 509, 0 },
	{ 435, 180 },
	{ 435, -180 },
	{ 255, 255 },
	{ 255, -254 },
	{ 74, 180 },
	{ 74, -180 },
	{ 0 },
	{ 0 },
	{ 74, 180 },
	{ 74, -180 },
	{ 255, 255 },
	{ 255, -254 },
	{ 435, 180 },
	{ 435, -180 },
	{ 509, 0 }
};

NJS_MESHSET_SADX meshlistSTG04_00139C70[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, polySTG04_00139B30, NULL, NULL, NULL, uvSTG04_00139BA0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, polySTG04_00139B7C, NULL, NULL, NULL, uvSTG04_00139C30, NULL }
};

NJS_VECTOR normalSTG04_00139CA0[] = {
	{ 3.62462f, 0.000002f, -7.097375f },
	{ 3.62462f, 0.000001f, -10.13752f },
	{ 2.562997f, 2.562989f, -7.097375f },
	{ 2.562997f, 2.562988f, -10.13752f },
	{ 0.00001f, 3.624611f, -7.097375f },
	{ 0.00001f, 3.62461f, -10.13752f },
	{ -2.562977f, 2.562989f, -7.097375f },
	{ -2.562977f, 2.562988f, -10.13752f },
	{ -3.624603f, 0.000002f, -7.097375f },
	{ -3.624603f, 0.000001f, -10.13752f },
	{ -2.562977f, -2.562985f, -7.097375f },
	{ -2.562977f, -2.562986f, -10.13752f },
	{ 0.00001f, -3.624609f, -7.097375f },
	{ 0.00001f, -3.62461f, -10.13752f },
	{ 2.562996f, -2.562985f, -7.097374f },
	{ 2.562996f, -2.562986f, -10.13752f },
	{ 3.62462f, 0.000002f, 7.104571f },
	{ 3.62462f, 0.000001f, 10.14471f },
	{ 2.562997f, 2.562989f, 7.104571f },
	{ 2.562997f, 2.562988f, 10.14471f },
	{ 0.00001f, 3.624611f, 7.104571f },
	{ 0.00001f, 3.62461f, 10.14471f },
	{ -2.562977f, 2.562989f, 7.104571f },
	{ -2.562977f, 2.562988f, 10.14471f },
	{ -3.624603f, 0.000002f, 7.104571f },
	{ -3.624603f, 0.000001f, 10.14471f },
	{ -2.562977f, -2.562985f, 7.104571f },
	{ -2.562977f, -2.562986f, 10.14471f },
	{ 0.00001f, -3.624609f, 7.104571f },
	{ 0.00001f, -3.62461f, 10.14471f },
	{ 2.562996f, -2.562985f, 7.104571f },
	{ 2.562996f, -2.562986f, 10.14471f }
};

NJS_VECTOR normalSTG04_00139E20[] = {
	{ 1, 0, 0 },
	{ 0.776382f, 0, -0.630262f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.5489849f, 0.5489849f, -0.630263f },
	{ 0, 1, 0 },
	{ 0, 0.776382f, -0.630263f },
	{ -0.707106f, 0.7071069f, 0 },
	{ -0.5489849f, 0.5489849f, -0.630263f },
	{ -1, 0, 0 },
	{ -0.776382f, 0, -0.630262f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.5489849f, -0.5489849f, -0.630262f },
	{ 0, -1, 0 },
	{ 0, -0.776382f, -0.630262f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.5489849f, -0.5489849f, -0.630262f },
	{ 1, 0, 0 },
	{ 0.776382f, 0, 0.630262f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.5489849f, 0.5489849f, 0.630263f },
	{ 0, 1, 0 },
	{ 0, 0.776382f, 0.630263f },
	{ -0.707106f, 0.7071069f, 0 },
	{ -0.5489849f, 0.5489849f, 0.630263f },
	{ -1, 0, 0 },
	{ -0.776382f, 0, 0.630262f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.5489849f, -0.5489849f, 0.630262f },
	{ 0, -1, 0 },
	{ 0, -0.776382f, 0.630262f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.5489849f, -0.5489849f, 0.630262f }
};

NJS_MODEL_SADX attachSTG04_00139FA0 = { normalSTG04_00139CA0, normalSTG04_00139E20, LengthOfArray(normalSTG04_00139CA0), meshlistSTG04_00139C70, matlistSTG04_00139B08, LengthOfArray(meshlistSTG04_00139C70), LengthOfArray(matlistSTG04_00139B08), { 0.000008f, 0.000001f, 0.003598f }, 10.7694f, NULL };

NJS_OBJECT objectSTG04_00139FC8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachSTG04_00139FA0, -11.79793f, -3.265216f, -0.066299f, 0, 0, 0, 1, 1, 1, NULL, &objectSTG04_00139AD4 };

NJS_MATERIAL matlistSTG04_00139FFC[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_ref_red, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_ref_black, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_streetsky, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_front_g, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_ref_crome, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_light1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_light2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_tyre, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_streetsky, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polySTG04_0013A0B0[] = {
	4, 3, 2, 1, 0,
	4, 5, 4, 7, 6,
	13, 67, 85, 12, 81, 87, 75, 10, 68, 43, 76, 46, 40, 73,
	4, 76, 69, 40, 71,
	3, 64, 91, 47,
	11, 91, 79, 47, 78, 11, 67, 62, 12, 102, 44, 61,
	5, 81, 90, 75, 70, 68,
	0x8000u | 5, 83, 15, 74, 72, 73,
	0x8000u | 6, 73, 48, 74, 94, 83, 86,
	4, 86, 17, 94, 18,
	7, 55, 58, 39, 57, 38, 56, 55,
	0x8000u | 7, 73, 46, 48, 96, 94, 45, 18,
	0x8000u | 6, 43, 10, 59, 87, 44, 19,
	3, 12, 87, 19,
	0x8000u | 8, 22, 21, 20, 23, 24, 26, 25, 27,
	3, 55, 39, 38,
	3, 36, 37, 52,
	0x8000u | 7, 52, 51, 37, 54, 36, 53, 52,
	0x8000u | 8, 35, 33, 34, 32, 31, 29, 30, 28,
	4, 93, 98, 80, 99,
	0x8000u | 6, 63, 101, 17, 64, 86, 91,
	0x8000u | 7, 17, 45, 63, 66, 61, 65, 44
};

Sint16 polySTG04_0013A1DC[] = {
	0x8000u | 8, 60, 9, 78, 16, 79, 92, 91, 86,
	0x8000u | 7, 14, 15, 88, 83, 84, 86, 92,
	13, 15, 13, 14, 8, 89, 90, 95, 81, 82, 85, 60, 67, 78,
	4, 49, 97, 66, 45,
	3, 65, 44, 50,
	7, 44, 100, 50, 99, 49, 98, 97
};

Sint16 polySTG04_0013A23C[] = {
	4, 50, 49, 65, 66,
	4, 80, 43, 93, 46,
	4, 58, 55, 57, 56,
	4, 53, 52, 54, 51,
	0x8000u | 6, 100, 99, 44, 80, 59, 43,
	3, 98, 93, 97,
	0x8000u | 5, 97, 45, 93, 96, 46
};

Sint16 polySTG04_0013A286[] = {
	4, 47, 11, 63, 61,
	4, 71, 69, 13, 8
};

Sint16 polySTG04_0013A29A[] = {
	3, 41, 42, 77
};

Sint16 polySTG04_0013A2A2[] = {
	4, 70, 90, 69, 8,
	4, 15, 72, 13, 71
};

Sint16 polySTG04_0013A2B6[] = {
	4, 102, 61, 62, 11,
	4, 64, 47, 101, 63
};

Sint16 polySTG04_0013A2CA[] = {
	3, 17, 45, 18,
	3, 19, 44, 12
};

Sint16 polySTG04_0013A2DA[] = {
	4, 76, 68, 69, 70,
	4, 72, 73, 71, 40
};

NJS_TEX uvSTG04_0013A2F0[] = {
	{ 116, 95 },
	{ 136, 8 },
	{ 121, 95 },
	{ 141, 8 },
	{ 121, 95 },
	{ 141, 8 },
	{ 116, 95 },
	{ 136, 8 },
	{ 249, 182 },
	{ 163, 242 },
	{ 191, 109 },
	{ 41, 254 },
	{ 132, 124 },
	{ 31, 159 },
	{ 73, 103 },
	{ 23, 148 },
	{ 73, 109 },
	{ 22, 159 },
	{ 73, 109 },
	{ 22, 159 },
	{ 23, 148 },
	{ 22, 159 },
	{ 0, 205 },
	{ 22, 159 },
	{ 0, 205 },
	{ 248, 106 },
	{ 249, 182 },
	{ 253, 106 },
	{ 249, 182 },
	{ 255, 182 },
	{ 253, 106 },
	{ 255, 182 },
	{ 253, 106 },
	{ 249, 182 },
	{ 248, 106 },
	{ 191, 109 },
	{ 241, 55 },
	{ 191, 69 },
	{ 246, 47 },
	{ 41, 254 },
	{ 7, 238 },
	{ 31, 159 },
	{ 4, 205 },
	{ 23, 148 },
	{ 41, 254 },
	{ 7, 238 },
	{ 31, 159 },
	{ 4, 205 },
	{ 23, 148 },
	{ 23, 148 },
	{ 73, 103 },
	{ 31, 159 },
	{ 132, 124 },
	{ 41, 254 },
	{ 163, 242 },
	{ 163, 242 },
	{ 191, 109 },
	{ 132, 124 },
	{ 184, 97 },
	{ 98, 64 },
	{ 98, 64 },
	{ 86, 80 },
	{ 98, 99 },
	{ 86, 94 },
	{ 98, 99 },
	{ 98, 64 },
	{ 23, 148 },
	{ 73, 109 },
	{ 73, 103 },
	{ 116, 95 },
	{ 132, 124 },
	{ 191, 69 },
	{ 184, 97 },
	{ 73, 109 },
	{ 73, 103 },
	{ 116, 95 },
	{ 132, 124 },
	{ 191, 69 },
	{ 184, 97 },
	{ 191, 109 },
	{ 132, 124 },
	{ 184, 97 },
	{ 32, 211 },
	{ 38, 155 },
	{ 37, 153 },
	{ 55, 129 },
	{ 55, 124 },
	{ 71, 155 },
	{ 72, 153 },
	{ 78, 211 },
	{ 98, 64 },
	{ 86, 80 },
	{ 86, 94 },
	{ 86, 94 },
	{ 86, 80 },
	{ 98, 99 },
	{ 98, 99 },
	{ 98, 64 },
	{ 86, 80 },
	{ 98, 64 },
	{ 86, 94 },
	{ 98, 99 },
	{ 98, 99 },
	{ 78, 211 },
	{ 71, 155 },
	{ 72, 153 },
	{ 55, 129 },
	{ 55, 124 },
	{ 38, 155 },
	{ 37, 153 },
	{ 32, 211 },
	{ 136, 8 },
	{ 176, 0 },
	{ 136, 8 },
	{ 176, 0 },
	{ 246, 47 },
	{ 241, 55 },
	{ 191, 109 },
	{ 248, 106 },
	{ 163, 242 },
	{ 249, 182 },
	{ 191, 109 },
	{ 191, 69 },
	{ 246, 47 },
	{ 233, 43 },
	{ 246, 47 },
	{ 233, 43 },
	{ 191, 69 }
};

NJS_TEX uvSTG04_0013A4F0[] = {
	{ 246, 198 },
	{ 251, 199 },
	{ 255, 163 },
	{ 251, 199 },
	{ 255, 163 },
	{ 246, 198 },
	{ 249, 163 },
	{ 163, 217 },
	{ 0, 254 },
	{ 7, 213 },
	{ 4, 254 },
	{ 41, 228 },
	{ 167, 243 },
	{ 163, 217 },
	{ 246, 198 },
	{ 7, 213 },
	{ 2, 213 },
	{ 0, 254 },
	{ 2, 213 },
	{ 0, 254 },
	{ 7, 213 },
	{ 4, 254 },
	{ 41, 228 },
	{ 167, 243 },
	{ 163, 217 },
	{ 246, 198 },
	{ 249, 163 },
	{ 255, 163 },
	{ 187, 2 },
	{ 182, 14 },
	{ 233, 38 },
	{ 191, 61 },
	{ 233, 38 },
	{ 191, 61 },
	{ 187, 2 },
	{ 191, 61 },
	{ 182, 14 },
	{ 187, 2 },
	{ 176, 0 },
	{ 187, 2 },
	{ 176, 0 },
	{ 182, 14 }
};

NJS_TEX uvSTG04_0013A598[] = {
	{ 66, 7 },
	{ 186, 7 },
	{ 63, 100 },
	{ 189, 100 },
	{ 66, 18 },
	{ 43, 255 },
	{ 186, 18 },
	{ 209, 255 },
	{ 223, 150 },
	{ 255, 150 },
	{ 223, 231 },
	{ 255, 231 },
	{ 31, 231 },
	{ 0, 231 },
	{ 31, 150 },
	{ 0, 150 },
	{ 58, 38 },
	{ 66, 0 },
	{ 25, 160 },
	{ 66, 18 },
	{ 25, 222 },
	{ 43, 255 },
	{ 186, 0 },
	{ 186, 18 },
	{ 195, 38 },
	{ 195, 38 },
	{ 226, 160 },
	{ 186, 18 },
	{ 227, 222 },
	{ 209, 255 }
};

NJS_TEX uvSTG04_0013A610[] = {
	{ 1020, 255 },
	{ 0, 255 },
	{ 1018, 0 },
	{ 1, 0 },
	{ 1020, 0 },
	{ 0 },
	{ 1020, 255 },
	{ 0, 255 }
};

NJS_TEX uvSTG04_0013A630[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 254 }
};

NJS_TEX uvSTG04_0013A63C[] = {
	{ 0 },
	{ 0, 255 },
	{ 227, 0 },
	{ 255, 255 },
	{ 255, 255 },
	{ 227, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_TEX uvSTG04_0013A65C[] = {
	{ 254, 0 },
	{ 0 },
	{ 255, 255 },
	{ 1, 255 },
	{ 255, 255 },
	{ 1, 255 },
	{ 254, 0 },
	{ 0 }
};

NJS_TEX uvSTG04_0013A67C[] = {
	{ 255, 255 },
	{ 0 },
	{ 71, 181 },
	{ 214, 181 },
	{ 255, 0 },
	{ 0, 255 }
};

NJS_TEX uvSTG04_0013A694[] = {
	{ 239, 47 },
	{ 255, 0 },
	{ 0, 254 },
	{ 52, 254 },
	{ 52, 254 },
	{ 255, 0 },
	{ 0, 254 },
	{ 239, 47 }
};

NJS_MESHSET_SADX meshlistSTG04_0013A6B4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 22, polySTG04_0013A0B0, NULL, NULL, NULL, uvSTG04_0013A2F0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, polySTG04_0013A1DC, NULL, NULL, NULL, uvSTG04_0013A4F0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 7, polySTG04_0013A23C, NULL, NULL, NULL, uvSTG04_0013A598, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, polySTG04_0013A286, NULL, NULL, NULL, uvSTG04_0013A610, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, polySTG04_0013A29A, NULL, NULL, NULL, uvSTG04_0013A630, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, polySTG04_0013A2A2, NULL, NULL, NULL, uvSTG04_0013A63C, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, polySTG04_0013A2B6, NULL, NULL, NULL, uvSTG04_0013A65C, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 2, polySTG04_0013A2CA, NULL, NULL, NULL, uvSTG04_0013A67C, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 2, polySTG04_0013A2DA, NULL, NULL, NULL, uvSTG04_0013A694, NULL }
};

NJS_VECTOR normalSTG04_0013A78C[] = {
	{ 2.238632f, 5.33695f, -5.119054f },
	{ -0.941285f, 1.854956f, -8.5574f },
	{ 1.438632f, 5.33695f, -5.019054f },
	{ -1.741285f, 1.854956f, -8.457398f },
	{ 2.238632f, 5.33695f, 4.993651f },
	{ -0.941285f, 1.854956f, 8.431996f },
	{ 1.438632f, 5.33695f, 4.893651f },
	{ -1.741285f, 1.854956f, 8.331997f },
	{ -20.42463f, -3.856044f, -6.952698f },
	{ 20.30773f, -3.206937f, -6.669725f },
	{ -8.849702f, 1.520428f, -8.545205f },
	{ 20.54151f, 1.3974f, -6.477288f },
	{ 10.50029f, 1.284563f, -10.69416f },
	{ -20.42463f, -3.856044f, 6.827293f },
	{ -20.82231f, -5.696579f, 7.033993f },
	{ -19.61408f, -3.856044f, 8.419805f },
	{ 20.30773f, -3.206937f, 6.544322f },
	{ 10.50029f, 1.284563f, 10.56876f },
	{ 9.309155f, 1.752563f, 8.920546f },
	{ 9.309214f, 1.752577f, -8.764762f },
	{ -14.65265f, -0.468542f, -9.092281f },
	{ -14.45743f, -0.536139f, -10.32116f },
	{ -15.59649f, -2.78106f, -9.722318f },
	{ -11.80013f, 0.5039f, -10.64119f },
	{ -11.80013f, 0.704845f, -8.639991f },
	{ -8.947604f, -0.468542f, -9.092281f },
	{ -9.142831f, -0.536139f, -10.32116f },
	{ -8.00377f, -2.78106f, -9.722318f },
	{ -15.59649f, -2.78106f, 9.775293f },
	{ -14.45743f, -0.536139f, 10.37413f },
	{ -14.65265f, -0.468542f, 9.145259f },
	{ -11.80013f, 0.704845f, 8.692966f },
	{ -11.80013f, 0.5039f, 10.69416f },
	{ -9.142831f, -0.536139f, 10.37413f },
	{ -8.947604f, -0.468542f, 9.145259f },
	{ -8.00377f, -2.78106f, 9.775293f },
	{ -6.621008f, 1.888186f, -8.925029f },
	{ -6.626055f, 2.429005f, -8.925029f },
	{ -6.621008f, 1.888186f, 8.978004f },
	{ -6.626055f, 2.429005f, 8.978004f },
	{ -17.14007f, -0.693339f, 6.827293f },
	{ -19.19447f, -1.590744f, 0.783217f },
	{ -19.19447f, -1.590744f, -0.90862f },
	{ -8.849702f, 1.289701f, -6.952698f },
	{ 10.50029f, 2.906551f, -8.397775f },
	{ 10.50029f, 2.906551f, 8.272371f },
	{ -8.849702f, 1.289701f, 6.827293f },
	{ 20.54851f, 1.3974f, 6.351883f },
	{ -8.849702f, 1.520428f, 8.419804f },
	{ 9.741343f, 5.527888f, 4.901276f },
	{ 9.741343f, 5.527888f, -5.02668f },
	{ -4.708214f, 3.075146f, -10.55025f },
	{ -4.708214f, 1.695446f, -10.55025f },
	{ -4.708214f, 1.695446f, -7.940648f },
	{ -4.708214f, 3.075146f, -7.940648f },
	{ -4.708214f, 3.075146f, 10.60322f },
	{ -4.708214f, 1.695446f, 10.60322f },
	{ -4.708214f, 1.695446f, 7.993625f },
	{ -4.708214f, 3.075146f, 7.993625f },
	{ -1.743551f, 1.854816f, -8.457026f },
	{ 19.43702f, -3.190502f, -9.651488f },
	{ 19.42701f, 3.768188f, -6.453554f },
	{ 19.73096f, 1.3974f, -9.960591f },
	{ 19.43401f, 3.768188f, 6.328149f },
	{ 19.73797f, 1.3974f, 9.83519f },
	{ 17.37143f, 3.930786f, -5.287684f },
	{ 17.37143f, 3.930786f, 5.129676f },
	{ 19.94579f, -1.628264f, -10.35901f },
	{ -16.90807f, -0.275229f, -8.545205f },
	{ -20.82231f, -2.523933f, -6.952698f },
	{ -20.01177f, -2.525198f, -8.375556f },
	{ -20.82231f, -2.523933f, 6.827293f },
	{ -20.01177f, -2.525198f, 8.250154f },
	{ -16.90807f, -0.275229f, 8.419804f },
	{ -15.63983f, -0.7016529f, 9.962254f },
	{ -15.63983f, -0.7016529f, -10.08766f },
	{ -17.14007f, -0.693339f, -6.952698f },
	{ -20.30069f, -2.229421f, -0.06270099f },
	{ 20.81651f, -1.628264f, -6.477288f },
	{ 20.81651f, -1.628264f, 6.351883f },
	{ 1.438632f, 5.33695f, -5.019054f },
	{ -13.99576f, -4.515443f, -9.786908f },
	{ 6.500291f, -5.185464f, -9.356034f },
	{ -13.99576f, -4.515443f, 9.661507f },
	{ 6.500291f, -5.185464f, 9.230633f },
	{ 5.825294f, -4.006861f, -10.05409f },
	{ 5.825294f, -4.006861f, 9.925606f },
	{ 0.825295f, 0.674843f, -9.812704f },
	{ -20.01177f, -5.696579f, 8.674277f },
	{ -20.82231f, -5.696579f, -7.159397f },
	{ -19.61408f, -3.856044f, -8.545206f },
	{ 19.94579f, -1.628264f, 10.2286f },
	{ 19.43702f, -3.190502f, 9.531102f },
	{ 1.438632f, 5.33695f, 4.893651f },
	{ 0.825295f, 0.674843f, 9.687303f },
	{ -20.01177f, -5.696579f, -8.799681f },
	{ -1.741285f, 1.854956f, 8.331997f },
	{ 9, 5, 5.7f },
	{ 8, 5.66113f, 4.90052f },
	{ 8, 5.65485f, -5.02579f },
	{ 9, 5, -5.7f },
	{ 18.6f, 3.45f, 9.2f },
	{ 18.6f, 3.45f, -9.2f }
};

NJS_VECTOR normalSTG04_0013AC60[] = {
	{ -0.083722f, 0.737833f, -0.669771f },
	{ -0.083722f, 0.737833f, -0.669771f },
	{ -0.083722f, 0.737833f, -0.669771f },
	{ -0.083722f, 0.737833f, -0.669771f },
	{ -0.083722f, 0.737833f, 0.669771f },
	{ -0.083722f, 0.737833f, 0.669771f },
	{ -0.083722f, 0.737833f, 0.669771f },
	{ -0.083722f, 0.737833f, 0.669771f },
	{ -0.9690329f, -0.016539f, -0.246376f },
	{ 0.948147f, -0.28961f, -0.130934f },
	{ -0.104838f, 0.939607f, -0.325803f },
	{ 0.950231f, 0.288381f, -0.11789f },
	{ -0.085241f, 0.480259f, -0.872975f },
	{ -0.971966f, -0.01886f, 0.234363f },
	{ -0.944487f, 0.233154f, 0.231482f },
	{ -0.591406f, 0.040863f, 0.805338f },
	{ 0.939844f, -0.322062f, 0.113885f },
	{ -0.05177f, 0.48393f, 0.873574f },
	{ -0.145996f, 0.750306f, 0.644768f },
	{ -0.142579f, 0.67288f, -0.725881f },
	{ -0.657683f, 0.740374f, -0.138923f },
	{ -0.637206f, 0.75855f, -0.136275f },
	{ -0.896612f, 0.41091f, -0.165043f },
	{ -0.004265f, 0.9942859f, -0.106662f },
	{ -0.004265f, 0.9942859f, -0.106662f },
	{ 0.654147f, 0.74348f, -0.13903f },
	{ 0.633323f, 0.761778f, -0.136365f },
	{ 0.896612f, 0.41091f, -0.165044f },
	{ -0.896612f, 0.41091f, 0.165043f },
	{ -0.633323f, 0.761778f, 0.136365f },
	{ -0.654147f, 0.74348f, 0.13903f },
	{ 0.004265f, 0.9942859f, 0.106662f },
	{ 0.004265f, 0.9942859f, 0.106662f },
	{ 0.637206f, 0.75855f, 0.136275f },
	{ 0.657683f, 0.740374f, 0.138923f },
	{ 0.896612f, 0.41091f, 0.165044f },
	{ -0.852796f, -0.513252f, 0.096495f },
	{ -0.9083239f, 0.406088f, 0.100202f },
	{ -0.852796f, -0.513252f, -0.096495f },
	{ -0.9083239f, 0.406088f, -0.100202f },
	{ -0.346994f, 0.932934f, -0.096065f },
	{ -0.5f, 0.866025f, 0 },
	{ -0.5f, 0.866025f, 0 },
	{ -0.780993f, 0.115419f, -0.613782f },
	{ 0.7632059f, 0.21249f, -0.610217f },
	{ 0.767453f, 0.213673f, 0.60445f },
	{ -0.786306f, 0.116204f, 0.606811f },
	{ 0.951057f, 0.286488f, 0.115829f },
	{ -0.104839f, 0.939607f, 0.325802f },
	{ 0.79634f, 0.453211f, 0.400553f },
	{ 0.79305f, 0.451338f, -0.409104f },
	{ -0.393459f, 0.258627f, -0.882214f },
	{ -0.402911f, 0.146697f, -0.903406f },
	{ -0.5012209f, 0.182491f, -0.845857f },
	{ -0.483366f, 0.317724f, -0.815726f },
	{ -0.391927f, 0.257619f, 0.883191f },
	{ -0.401266f, 0.146098f, 0.9042349f },
	{ -0.498838f, 0.181623f, 0.847451f },
	{ -0.481228f, 0.316318f, 0.817535f },
	{ -0.197017f, 0.211945f, -0.957217f },
	{ 0.5755799f, -0.424995f, -0.698633f },
	{ 0.530766f, 0.828584f, -0.178146f },
	{ 0.62493f, 0.32508f, -0.709778f },
	{ 0.5321259f, 0.828176f, 0.175975f },
	{ 0.64494f, 0.247678f, 0.722986f },
	{ 0.934837f, 0.212452f, -0.284507f },
	{ 0.937072f, 0.21296f, 0.276665f },
	{ 0.6319799f, -0.134126f, -0.76329f },
	{ -0.39754f, 0.894145f, -0.206073f },
	{ -0.913516f, 0.352811f, -0.202514f },
	{ -0.699682f, 0.278882f, -0.657776f },
	{ -0.917834f, 0.349224f, 0.188744f },
	{ -0.710915f, 0.277286f, 0.646307f },
	{ -0.39754f, 0.894145f, 0.206074f },
	{ -0.237443f, 0.434086f, 0.8690169f },
	{ -0.237443f, 0.434086f, -0.8690169f },
	{ -0.346994f, 0.932934f, 0.096065f },
	{ -0.5f, 0.866025f, 0 },
	{ 0.988452f, -0.102532f, -0.111581f },
	{ 0.987826f, -0.115917f, 0.103748f },
	{ 0.192734f, 0.715923f, -0.67105f },
	{ -0.049839f, -0.35369f, -0.934034f },
	{ 0.034658f, -0.497258f, -0.86691f },
	{ -0.048837f, -0.347883f, 0.936265f },
	{ 0.034329f, -0.495743f, 0.867791f },
	{ -0.00175f, -0.3126f, -0.949883f },
	{ -0.003427f, -0.281438f, 0.959573f },
	{ -0.044364f, 0.3532f, -0.934495f },
	{ -0.610305f, 0.175094f, 0.772573f },
	{ -0.944487f, 0.233154f, -0.231483f },
	{ -0.584036f, 0.042583f, -0.81061f },
	{ 0.633939f, -0.201016f, 0.746802f },
	{ 0.568109f, -0.457621f, 0.683985f },
	{ 0.194912f, 0.724012f, 0.6616769f },
	{ -0.044255f, 0.395064f, 0.917587f },
	{ -0.610305f, 0.175094f, -0.772573f },
	{ -0.19947f, 0.21488f, 0.956053f },
	{ 0.764387f, 0.426027f, 0.483956f },
	{ 0.729617f, 0.517736f, 0.446776f },
	{ 0.7260889f, 0.514662f, -0.455981f },
	{ 0.764387f, 0.426027f, -0.483956f },
	{ 0.331121f, 0.731355f, 0.596221f },
	{ 0.329033f, 0.7442189f, -0.581271f }
};

NJS_MODEL_SADX attachSTG04_0013B134 = { normalSTG04_0013A78C, normalSTG04_0013AC60, LengthOfArray(normalSTG04_0013A78C), meshlistSTG04_0013A6B4, matlistSTG04_00139FFC, LengthOfArray(meshlistSTG04_0013A6B4), LengthOfArray(matlistSTG04_00139FFC), { -0.002903f, -0.017725f, 0 }, 23.40541f, NULL };

NJS_OBJECT objectSTG04_0013B15C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attachSTG04_0013B134, -0.770775f, 6.976982f, 0.06270099f, 0, 0, 0, 1, 1, 1, &objectSTG04_00139FC8, NULL };

#pragma warning(pop)
