#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

extern "C" __declspec(dllexport) Sint16 poly_00024340[] = {
	0x8000u | 6, 1, 0, 5, 4, 3, 2
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00024350[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00024340, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00024368[] = {
	{ -54.12276f, 0, -18.67517f },
	{ -54.12276f, 0, 17.37451f },
	{ 49.3503f, -1.18f, -18.67517f },
	{ 49.3503f, -1.18f, 17.37451f },
	{ 35.21777f, 0, -18.67517f },
	{ 35.21777f, 0, 17.37451f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000243B0[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.083206f, 0.996532f, 0 },
	{ 0.083206f, 0.996532f, 0 },
	{ 0.041639f, 0.999133f, 0 },
	{ 0.041639f, 0.999133f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000243F8 = { vertex_00024368, normal_000243B0, LengthOfArray(vertex_00024368), meshlist_00024350, NULL, LengthOfArray(meshlist_00024350), 0,{ -2.386232f, -0.59f, -0.650331f }, 69.46931f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00024420 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000243F8, -487, 61.01033f, 26, 0, 0x2443, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00024454[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 33, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000244A4[] = {
	0x8000u | 18, 3, 7, 13, 14, 23, 24, 29, 30, 26, 27, 20, 21, 16, 18, 4, 8, 3, 7
};

extern "C" __declspec(dllexport) Sint16 poly_000244CA[] = {
	8, 1, 2, 0, 6, 12, 5, 11, 17
};

extern "C" __declspec(dllexport) Sint16 poly_000244DC[] = {
	0x8000u | 18, 6, 3, 2, 13, 1, 23, 0, 29, 12, 26, 11, 20, 17, 16, 5, 4, 6, 3
};

extern "C" __declspec(dllexport) Sint16 poly_00024502[] = {
	0x8000u | 18, 28, 27, 31, 30, 25, 24, 15, 14, 9, 7, 10, 8, 19, 18, 22, 21, 28, 27
};

extern "C" __declspec(dllexport) NJS_TEX uv_00024528[] = {
	{ 224, 0 },
	{ 224, 255 },
	{ -240, 0 },
	{ -240, 255 },
	{ -720, 0 },
	{ -720, 255 },
	{ -1200, 0 },
	{ -1200, 255 },
	{ -1680, 0 },
	{ -1680, 255 },
	{ -2160, 0 },
	{ -2160, 255 },
	{ -2640, 0 },
	{ -2640, 255 },
	{ -3120, 0 },
	{ -3120, 255 },
	{ -3600, 0 },
	{ -3600, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00024570[] = {
	{ 0, 127 },
	{ 37, 217 },
	{ 37, 37 },
	{ 127, 254 },
	{ 127, 0 },
	{ 217, 217 },
	{ 217, 37 },
	{ 254, 127 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00024590[] = {
	{ 296, 0 },
	{ 296, 255 },
	{ -316, 0 },
	{ -322, 255 },
	{ -960, 0 },
	{ -960, 255 },
	{ -1606, 0 },
	{ -1601, 255 },
	{ -2242, 0 },
	{ -2242, 255 },
	{ -2878, 0 },
	{ -2882, 255 },
	{ -3522, 0 },
	{ -3522, 255 },
	{ -4166, 0 },
	{ -4162, 255 },
	{ -4802, 0 },
	{ -4802, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000245D8[] = {
	{ -4800, 255 },
	{ -4800, 107 },
	{ -4160, 255 },
	{ -4160, 107 },
	{ -3520, 255 },
	{ -3520, 107 },
	{ -2880, 255 },
	{ -2880, 107 },
	{ -2240, 255 },
	{ -2240, 107 },
	{ -1600, 255 },
	{ -1600, 107 },
	{ -960, 255 },
	{ -960, 107 },
	{ -320, 255 },
	{ -320, 107 },
	{ 298, 255 },
	{ 298, 107 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00024620[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000244A4, NULL, NULL, NULL, uv_00024528, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000244CA, NULL, NULL, NULL, uv_00024570, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000244DC, NULL, NULL, NULL, uv_00024590, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_00024502, NULL, NULL, NULL, uv_000245D8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00024680[] = {
	{ 4.782871f, 2, -4.732525f },
	{ -0.00001f, 2, -6.6928f },
	{ -4.782872f, 2, -4.732523f },
	{ -8, 0.333728f, 0.000002f },
	{ -5.656853f, 0.333728f, 5.656855f },
	{ -4.782871f, 2, 4.732525f },
	{ -6.763999f, 2, 0.000001f },
	{ -8, -4.54f, 0.000002f },
	{ -5.656853f, -4.54f, 5.656855f },
	{ -8, -6, 0.000002f },
	{ -5.656853f, -6, 5.656855f },
	{ 4.782872f, 2, 4.732523f },
	{ 6.763999f, 2, -0.00001f },
	{ -5.656855f, 0.333728f, -5.656853f },
	{ -5.656855f, -4.54f, -5.656853f },
	{ -5.656855f, -6, -5.656853f },
	{ 0.000002f, 0.333728f, 8 },
	{ 0.000001f, 2, 6.6928f },
	{ 0.000002f, -4.54f, 8 },
	{ 0.000002f, -6, 8 },
	{ 5.656855f, 0.333728f, 5.656853f },
	{ 5.656855f, -4.54f, 5.656853f },
	{ 5.656855f, -6, 5.656853f },
	{ -0.00002f, 0.333728f, -8 },
	{ -0.00002f, -4.54f, -8 },
	{ -0.00002f, -6, -8 },
	{ 8, 0.333728f, -0.00002f },
	{ 8, -4.54f, -0.00002f },
	{ 8, -6, -0.00002f },
	{ 5.656853f, 0.333728f, -5.656855f },
	{ 5.656853f, -4.54f, -5.656855f },
	{ 5.656853f, -6, -5.656855f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00024800[] = {
	{ 0.370236f, 0.8533159f, -0.36712f },
	{ -0.0006349999f, 0.855054f, -0.518538f },
	{ -0.373334f, 0.850631f, -0.370201f },
	{ -0.955515f, 0.294941f, -0.000482f },
	{ -0.673284f, 0.300686f, 0.675482f },
	{ -0.370236f, 0.8533159f, 0.36712f },
	{ -0.528528f, 0.848915f, -0.000647f },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, 0.7071069f },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.373334f, 0.850631f, 0.370201f },
	{ 0.528528f, 0.848915f, 0.000647f },
	{ -0.6741379f, 0.296789f, -0.676353f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.000477f, 0.302431f, 0.953171f },
	{ 0.0006349999f, 0.855054f, 0.518538f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.6741379f, 0.296789f, 0.676353f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ -0.000477f, 0.302431f, -0.953171f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0.955515f, 0.294941f, 0.000482f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.673284f, 0.300686f, -0.675482f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00024980 = { vertex_00024680, normal_00024800, LengthOfArray(vertex_00024680), meshlist_00024620, matlist_00024454, LengthOfArray(meshlist_00024620), LengthOfArray(matlist_00024454),{ 0, -2, 0 }, 10.95752f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000249A8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00024980, -73.88863f, 16.07522f, 355.2039f, 0, 0xFFFF8A41, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000249DC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 33, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00024A18[] = {
	0x8000u | 18, 7, 3, 8, 4, 15, 13, 17, 16, 21, 20, 23, 22, 19, 18, 12, 11, 7, 3
};

extern "C" __declspec(dllexport) Sint16 poly_00024A3E[] = {
	8, 1, 2, 0, 6, 10, 5, 9, 14
};

extern "C" __declspec(dllexport) Sint16 poly_00024A50[] = {
	0x8000u | 18, 10, 20, 9, 16, 14, 13, 5, 4, 6, 3, 2, 11, 1, 18, 0, 22, 10, 20
};

extern "C" __declspec(dllexport) NJS_TEX uv_00024A78[] = {
	{ -4800, 255 },
	{ -4800, 0 },
	{ -4160, 255 },
	{ -4160, 52 },
	{ -3520, 255 },
	{ -3520, 52 },
	{ -2880, 255 },
	{ -2880, 52 },
	{ -2240, 255 },
	{ -2240, 52 },
	{ -1600, 255 },
	{ -1600, 52 },
	{ -960, 255 },
	{ -960, 52 },
	{ -320, 255 },
	{ -320, 0 },
	{ 298, 255 },
	{ 298, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00024AC0[] = {
	{ 0, 127 },
	{ 37, 217 },
	{ 37, 37 },
	{ 127, 255 },
	{ 127, 0 },
	{ 217, 217 },
	{ 217, 37 },
	{ 255, 127 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00024AE0[] = {
	{ 298, 0 },
	{ 298, 255 },
	{ -320, 0 },
	{ -320, 255 },
	{ -960, 0 },
	{ -960, 255 },
	{ -1600, 0 },
	{ -1600, 255 },
	{ -2240, 0 },
	{ -2240, 184 },
	{ -2880, 0 },
	{ -2880, 184 },
	{ -3520, 0 },
	{ -3520, 255 },
	{ -4160, 0 },
	{ -4160, 255 },
	{ -4800, 0 },
	{ -4800, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00024B28[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00024A18, NULL, NULL, NULL, uv_00024A78, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00024A3E, NULL, NULL, NULL, uv_00024AC0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_00024A50, NULL, NULL, NULL, uv_00024AE0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00024B70[] = {
	{ 4.683875f, -2, -4.683876f },
	{ -0.00001f, -2, -6.624001f },
	{ -4.683876f, -2, -4.683875f },
	{ -8, -3.400001f, 0.000002f },
	{ -5.656853f, -3.94f, 5.656855f },
	{ -4.683875f, -2, 4.683876f },
	{ -6.624001f, -2, 0.000001f },
	{ -8, -6, 0.000002f },
	{ -5.656853f, -6, 5.656855f },
	{ 4.683876f, -2, 4.683875f },
	{ 6.624001f, -2, -0.00001f },
	{ -5.656855f, -3.400001f, -5.656853f },
	{ -5.656855f, -6, -5.656853f },
	{ 0.000002f, -3.94f, 8 },
	{ 0.000001f, -2, 6.624001f },
	{ 0.000002f, -6, 8 },
	{ 5.656855f, -3.94f, 5.656853f },
	{ 5.656855f, -6, 5.656853f },
	{ -0.00002f, -3.94f, -8 },
	{ -0.00002f, -6, -8 },
	{ 8, -3.94f, -0.00002f },
	{ 8, -6, -0.00002f },
	{ 5.656853f, -3.94f, -5.656855f },
	{ 5.656853f, -6, -5.656855f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00024C90[] = {
	{ 0.381763f, 0.841732f, -0.381764f },
	{ 0.021969f, 0.86353f, -0.503818f },
	{ -0.318642f, 0.887123f, -0.333888f },
	{ -0.945808f, 0.324453f, 0.01332f },
	{ -0.676447f, 0.276374f, 0.682669f },
	{ -0.375986f, 0.841106f, 0.388813f },
	{ -0.499222f, 0.8662249f, 0.020765f },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.381764f, 0.841732f, 0.381763f },
	{ 0.539895f, 0.841732f, 0 },
	{ -0.6559719f, 0.35883f, -0.664035f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0, 0.284107f, 0.958793f },
	{ 0, 0.841732f, 0.539895f },
	{ 0, 0, 1 },
	{ 0.677969f, 0.284107f, 0.677969f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.013873f, 0.306899f, -0.951641f },
	{ 0, 0, -1 },
	{ 0.958793f, 0.284107f, 0 },
	{ 1, 0, 0 },
	{ 0.677969f, 0.284107f, -0.677969f },
	{ 0.7071069f, 0, -0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00024DB0 = { vertex_00024B70, normal_00024C90, LengthOfArray(vertex_00024B70), meshlist_00024B28, matlist_000249DC, LengthOfArray(meshlist_00024B28), LengthOfArray(matlist_000249DC),{ 0, -4, 0 }, 10.95752f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00024DD8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00024DB0, -68.36165f, 16.07522f, 369.6001f, 0, 0xFFFF8A41, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) Sint16 poly_00024E20[] = {
	4, 0, 2, 11, 3,
	3, 13, 9, 23,
	0x8000u | 29, 12, 10, 4, 1, 14, 22, 15, 18, 16, 19, 17, 20, 23, 21, 9, 20, 8, 19, 7, 18, 6, 22, 5, 1, 2, 10, 0, 12, 11
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00024E70[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00024E20, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00024E88[] = {
	{ -61.63581f, 40.31562f, -140.1795f },
	{ -19.87034f, 40.31562f, -71.94428f },
	{ 18.15245f, 40.31562f, -131.1366f },
	{ 18.15245f, -40, -131.1366f },
	{ -22.02843f, -40, -68.04647f },
	{ 66.78194f, 40.31562f, -61.42612f },
	{ 64.4999f, 40.31562f, 27.65204f },
	{ 11.83104f, 40.31562f, 94.27463f },
	{ -45.55825f, 40.31562f, 113.242f },
	{ -94.32397f, 37.27561f, 117.862f },
	{ -61.63581f, 40.31562f, -80.68226f },
	{ -61.63581f, -40, -140.1795f },
	{ -61.63581f, -40, -80.68226f },
	{ -94.32397f, -40.43634f, 117.862f },
	{ -4.946358f, -40.1046f, -36.13409f },
	{ -6.884192f, -40.18115f, 6.120078f },
	{ -26.61984f, -40.25113f, 31.80359f },
	{ -57.54453f, -40.29979f, 44.1549f },
	{ 1.640053f, 40.31562f, 8.400023f },
	{ -21.29898f, 40.31562f, 43.28529f },
	{ -54.72162f, 40.31562f, 52.40991f },
	{ -102.5139f, 37.27561f, 58.72388f },
	{ 1.640053f, 40.31562f, -38.50592f },
	{ -102.5139f, -40.43634f, 58.72388f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00024FA8[] = {
	{ -0.546537f, 0.571647f, -0.611978f },
	{ -0.345944f, 0.817849f, 0.459833f },
	{ 0.063649f, 0.8249609f, -0.561595f },
	{ 0.112615f, 0, -0.993639f },
	{ -0.603864f, 0.04642f, 0.795734f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.031912f, 0.9994799f, 0.004616f },
	{ -0.713098f, 0.6940359f, 0.099019f },
	{ -0.644337f, 0.581267f, 0.496949f },
	{ -0.666102f, 0, -0.74586f },
	{ -0.7918479f, 0, 0.610718f },
	{ -0.990546f, 0, 0.137179f },
	{ -0.963124f, 0.099402f, 0.250024f },
	{ -0.941923f, 0.125858f, -0.311354f },
	{ -0.596463f, 0.127755f, -0.792408f },
	{ -0.267942f, 0.053931f, -0.961924f },
	{ -0.552292f, 0.813791f, -0.18088f },
	{ -0.331375f, 0.828409f, -0.451585f },
	{ -0.199712f, 0.746869f, -0.634273f },
	{ -0.6961319f, 0.540599f, -0.47239f },
	{ -0.574559f, 0.804395f, 0.151098f },
	{ -0.822486f, 0, -0.568786f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000250C8 = { vertex_00024E88, normal_00024FA8, LengthOfArray(vertex_00024E88), meshlist_00024E70, NULL, LengthOfArray(meshlist_00024E70), 0,{ -17.866f, -0.060354f, -11.15873f }, 154.3101f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000250F0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000250C8, 333.2487f, 40.06f, 252.3587f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) Sint16 poly_00025138[] = {
	0x8000u | 10, 1, 0, 3, 2, 5, 4, 7, 6, 9, 8
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00025150[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00025138, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00025168[] = {
	{ 42.72997f, 52.40802f, 106.5351f },
	{ 42.72997f, 110.1697f, 106.5351f },
	{ 95.81145f, 52.40802f, 45.16359f },
	{ 95.81145f, 110.1697f, 45.16359f },
	{ 104.0044f, 52.40802f, -31.26034f },
	{ 104.0044f, 110.1697f, -31.26034f },
	{ 67.76909f, 52.40802f, -90.78898f },
	{ 67.76909f, 110.1697f, -90.78898f },
	{ 6.550026f, 52.40802f, -115.9848f },
	{ 6.550026f, 110.1697f, -115.9848f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000251E0[] = {
	{ -0.756342f, 0, -0.654176f },
	{ -0.756342f, 0, -0.654176f },
	{ -0.917143f, 0, -0.398558f },
	{ -0.917143f, 0, -0.398558f },
	{ -0.975898f, 0, 0.218229f },
	{ -0.975898f, 0, 0.218229f },
	{ -0.649723f, 0, 0.760171f },
	{ -0.649723f, 0, 0.760171f },
	{ -0.380595f, 0, 0.924742f },
	{ -0.380595f, 0, 0.924742f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00025258 = { vertex_00025168, normal_000251E0, LengthOfArray(vertex_00025168), meshlist_00025150, NULL, LengthOfArray(meshlist_00025150), 0,{ 55.27722f, 81.28883f, -4.724861f }, 121.4624f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00025280 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00025258, 294.2321f, 10.48f, 232.806f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) Sint16 poly_000252C8[] = {
	4, 3, 2, 1, 0
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000252D4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000252C8, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000252EC[] = {
	{ -43.39086f, 0, -16.4695f },
	{ -43.39086f, 0, 16.4695f },
	{ 44.67086f, 0, -16.4695f },
	{ 44.67086f, 0, 16.4695f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002531C[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002534C = { vertex_000252EC, normal_0002531C, LengthOfArray(vertex_000252EC), meshlist_000252D4, NULL, LengthOfArray(meshlist_000252D4), 0,{ 0.639999f, 0, 0 }, 47.01023f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00025374 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002534C, -317.3999f, 60, -38.8f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000253A8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 33, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000253E4[] = {
	0x8000u | 18, 7, 3, 8, 4, 15, 13, 17, 16, 21, 20, 23, 22, 19, 18, 12, 11, 7, 3
};

extern "C" __declspec(dllexport) Sint16 poly_0002540A[] = {
	8, 1, 2, 0, 6, 10, 5, 9, 14
};

extern "C" __declspec(dllexport) Sint16 poly_0002541C[] = {
	0x8000u | 18, 10, 20, 9, 16, 14, 13, 5, 4, 6, 3, 2, 11, 1, 18, 0, 22, 10, 20
};

extern "C" __declspec(dllexport) NJS_TEX uv_00025444[] = {
	{ -128, 255 },
	{ -128, -254 },
	{ 128, 255 },
	{ 128, -254 },
	{ 384, 255 },
	{ 384, -254 },
	{ 640, 255 },
	{ 640, -254 },
	{ 896, 255 },
	{ 896, -254 },
	{ 1152, 255 },
	{ 1152, -254 },
	{ 1408, 255 },
	{ 1408, -254 },
	{ 1664, 255 },
	{ 1664, -254 },
	{ 1911, 255 },
	{ 1911, -254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002548C[] = {
	{ 0, 127 },
	{ 37, 217 },
	{ 37, 37 },
	{ 127, 255 },
	{ 127, 0 },
	{ 217, 217 },
	{ 217, 37 },
	{ 255, 127 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000254AC[] = {
	{ 298, 0 },
	{ 298, 255 },
	{ -320, 0 },
	{ -320, 255 },
	{ -960, 0 },
	{ -960, 255 },
	{ -1600, 0 },
	{ -1600, 255 },
	{ -2240, 0 },
	{ -2240, 255 },
	{ -2880, 0 },
	{ -2880, 255 },
	{ -3520, 0 },
	{ -3520, 255 },
	{ -4160, 0 },
	{ -4160, 255 },
	{ -4800, 0 },
	{ -4800, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000254F4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000253E4, NULL, NULL, NULL, uv_00025444, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0002540A, NULL, NULL, NULL, uv_0002548C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0002541C, NULL, NULL, NULL, uv_000254AC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002553C[] = {
	{ 4.632963f, 6, -4.632964f },
	{ -0.00001f, 6, -6.552f },
	{ -4.632964f, 6, -4.632963f },
	{ -8, 3.841458f, 0.000001f },
	{ -5.656854f, 3.841458f, 5.656855f },
	{ -4.632963f, 6, 4.632964f },
	{ -6.552f, 6, 0.000001f },
	{ -8, -6, 0.000001f },
	{ -5.656854f, -6, 5.656855f },
	{ 4.632964f, 6, 4.632963f },
	{ 6.552f, 6, -0.00001f },
	{ -5.656855f, 3.841458f, -5.656854f },
	{ -5.656855f, -6, -5.656854f },
	{ 0.000001f, 3.841458f, 8 },
	{ 0.000001f, 6, 6.552f },
	{ 0.000001f, -6, 8 },
	{ 5.656855f, 3.841458f, 5.656854f },
	{ 5.656855f, -6, 5.656854f },
	{ -0.00001f, 3.841458f, -8 },
	{ -0.00001f, -6, -8 },
	{ 8, 3.841458f, -0.00001f },
	{ 8, -6, -0.00001f },
	{ 5.656854f, 3.841458f, -5.656855f },
	{ 5.656854f, -6, -5.656855f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002565C[] = {
	{ 0.390253f, 0.833909f, -0.390253f },
	{ 0, 0.833909f, -0.551902f },
	{ -0.390253f, 0.833909f, -0.390253f },
	{ -0.961983f, 0.273108f, 0 },
	{ -0.680225f, 0.273108f, 0.680225f },
	{ -0.390253f, 0.833909f, 0.390253f },
	{ -0.551902f, 0.833909f, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.390253f, 0.833909f, 0.390253f },
	{ 0.551902f, 0.833909f, 0 },
	{ -0.680225f, 0.273108f, -0.680225f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0, 0.273108f, 0.961983f },
	{ 0, 0.833909f, 0.551902f },
	{ 0, 0, 1 },
	{ 0.680225f, 0.273108f, 0.680225f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0, 0.273108f, -0.961983f },
	{ 0, 0, -1 },
	{ 0.961983f, 0.273108f, 0 },
	{ 1, 0, 0 },
	{ 0.680225f, 0.273108f, -0.680225f },
	{ 0.7071069f, 0, -0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002577C = { vertex_0002553C, normal_0002565C, LengthOfArray(vertex_0002553C), meshlist_000254F4, matlist_000253A8, LengthOfArray(meshlist_000254F4), LengthOfArray(matlist_000253A8),{ 0 }, 10.95752f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000257A4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002577C, -82.85841f, 16.07522f, 365.8793f, 0, 0xFFFF8A41, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) Sint16 poly_000257EC[] = {
	4, 3, 2, 1, 0
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000257F8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000257EC, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00025810[] = {
	{ -60.03576f, 1.340003f, -11.66347f },
	{ -60.03576f, 1.340003f, 9.663379f },
	{ 59.09468f, 1.340004f, -11.66347f },
	{ 59.09468f, 1.340004f, 9.663374f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00025840[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00025870 = { vertex_00025810, normal_00025840, LengthOfArray(vertex_00025810), meshlist_000257F8, NULL, LengthOfArray(meshlist_000257F8), 0,{ -0.470541f, 1.340003f, -1.000048f }, 67.8056f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00025898 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00025870, -461.4474f, 45.57705f, 191.8234f, 0x56B, 0xFFFFEA31, 0xFFFFF58D, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) Sint16 poly_000258E0[] = {
	3, 2, 3, 6,
	9, 5, 2, 7, 6, 0, 3, 1, 4, 5,
	4, 5, 7, 1, 0
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00025908[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000258E0, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00025920[] = {
	{ -274.8499f, 1, -40.53215f },
	{ -368.5898f, 1, -40.53215f },
	{ -274.8499f, -61.18615f, 40.53215f },
	{ -274.8499f, -61.18615f, -40.53215f },
	{ -368.5898f, -61.18615f, -40.53215f },
	{ -368.5898f, -61.18615f, 40.53215f },
	{ -274.8499f, 1, 40.53215f },
	{ -368.5898f, 1, 40.53215f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00025980[] = {
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000259E0 = { vertex_00025920, normal_00025980, LengthOfArray(vertex_00025920), meshlist_00025908, NULL, LengthOfArray(meshlist_00025908), 0,{ -321.7198f, -30.09308f, 0 }, 61.96493f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00025A08 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000259E0, 93.82457f, 59.32244f, -38.59999f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) Sint16 poly_00025A50[] = {
	10, 4, 5, 3, 2, 7, 6, 9, 8, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00025A68[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00025A50, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00025A80[] = {
	{ -274.8499f, 1, 40.53215f },
	{ -274.8499f, 1, -40.53215f },
	{ 46.95003f, 1, -40.53215f },
	{ 46.95003f, 1, 40.53215f },
	{ 141.15f, 1, 40.53215f },
	{ 141.15f, 1, -40.53215f },
	{ -61.47993f, 1, -40.53215f },
	{ -61.47993f, 1, 40.53215f },
	{ -172.5199f, 1, -40.53215f },
	{ -172.5199f, 1, 40.53215f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00025AF8[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00025B70 = { vertex_00025A80, normal_00025AF8, LengthOfArray(vertex_00025A80), meshlist_00025A68, NULL, LengthOfArray(meshlist_00025A68), 0,{ -66.84991f, 1, 0 }, 211.9123f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00025B98 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00025B70, 93.82457f, 59.32244f, -38.59999f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00025BCC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00025BE0[] = {
	0x8000u | 18, 0, 1, 14, 15, 12, 13, 10, 11, 8, 9, 6, 7, 4, 5, 2, 3, 0, 1
};

extern "C" __declspec(dllexport) NJS_TEX uv_00025C08[] = {
	{ 4779, 255 },
	{ 4779, 0 },
	{ 4160, 255 },
	{ 4160, 0 },
	{ 3520, 255 },
	{ 3520, 0 },
	{ 2880, 255 },
	{ 2880, 0 },
	{ 2240, 255 },
	{ 2240, 0 },
	{ 1600, 255 },
	{ 1600, 0 },
	{ 960, 255 },
	{ 960, 0 },
	{ 320, 255 },
	{ 320, 0 },
	{ -320, 255 },
	{ -320, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00025C50[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00025BE0, NULL, NULL, NULL, uv_00025C08, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00025C68[] = {
	{ 652.9437f, -60.95746f, 0 },
	{ 652.9437f, 16.56301f, 0 },
	{ 461.7008f, -60.95746f, -461.7008f },
	{ 461.7008f, 16.56301f, -461.7008f },
	{ 0, -60.95746f, -652.9436f },
	{ 0, 16.56301f, -652.9436f },
	{ -461.7008f, -60.95746f, -461.7008f },
	{ -461.7008f, 16.56301f, -461.7008f },
	{ -652.9436f, -60.95746f, 0 },
	{ -652.9436f, 16.56301f, 0 },
	{ -461.7008f, -60.95746f, 461.7008f },
	{ -461.7008f, 16.56301f, 461.7008f },
	{ 0, -60.95746f, 652.9436f },
	{ 0, 16.56301f, 652.9436f },
	{ 461.7008f, -60.95746f, 461.7008f },
	{ 461.7008f, 16.56301f, 461.7008f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00025D28[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00025DE8 = { vertex_00025C68, normal_00025D28, LengthOfArray(vertex_00025C68), meshlist_00025C50, matlist_00025BCC, LengthOfArray(meshlist_00025C50), LengthOfArray(matlist_00025BCC),{ 0.000031f, -22.19723f, 0 }, 923.4017f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00025E10 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00025DE8, -147.5748f, 51.04001f, 145.0127f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00025E44[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00025E80[] = {
	4, 22, 21, 41, 40,
	0x8000u | 8, 0, 23, 1, 24, 2, 25, 3, 26,
	0x8000u | 16, 7, 30, 8, 31, 9, 32, 10, 33, 11, 34, 12, 35, 13, 36, 14, 37,
	0x8000u | 8, 29, 6, 28, 5, 27, 4, 39, 38
};

extern "C" __declspec(dllexport) Sint16 poly_00025ED0[] = {
	0x8000u | 16, 15, 37, 16, 36, 17, 35, 18, 34, 19, 33, 20, 32, 21, 31, 22, 30
};

extern "C" __declspec(dllexport) Sint16 poly_00025EF2[] = {
	0x8000u | 8, 23, 29, 24, 28, 25, 27, 26, 39
};

extern "C" __declspec(dllexport) NJS_TEX uv_00025F04[] = {
	{ 6576, 38 },
	{ 5636, 37 },
	{ 6576, 255 },
	{ 5636, 255 },
	{ 63, 255 },
	{ 63, 18 },
	{ 398, 255 },
	{ 398, 18 },
	{ 340, 255 },
	{ 340, 18 },
	{ 544, 255 },
	{ 544, 0 },
	{ 6620, 255 },
	{ 6620, 38 },
	{ 5618, 255 },
	{ 5618, 37 },
	{ 4825, 255 },
	{ 4825, 37 },
	{ 4239, 255 },
	{ 4239, 37 },
	{ 3601, 255 },
	{ 3601, 37 },
	{ 2806, 255 },
	{ 2806, 37 },
	{ 2486, 255 },
	{ 2486, 37 },
	{ 2215, 255 },
	{ 2215, 37 },
	{ 133, 18 },
	{ 133, 255 },
	{ 496, 18 },
	{ 496, 255 },
	{ 406, 18 },
	{ 406, 255 },
	{ 585, 0 },
	{ 585, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00025F94[] = {
	{ 4738, -255 },
	{ 4980, 255 },
	{ 7042, -255 },
	{ 7246, 255 },
	{ 8584, -255 },
	{ 8438, 255 },
	{ 10686, -255 },
	{ 11135, 255 },
	{ 13495, -255 },
	{ 13533, 255 },
	{ 15478, -255 },
	{ 15479, 255 },
	{ 18171, -255 },
	{ 18304, 255 },
	{ 20400, -255 },
	{ 20400, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00025FD4[] = {
	{ 147, -1020 },
	{ 0, -948 },
	{ 450, -462 },
	{ 330, -342 },
	{ 1056, -380 },
	{ 976, -262 },
	{ 1275, 197 },
	{ 1161, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00025FF4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00025E80, NULL, NULL, NULL, uv_00025F04, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00025ED0, NULL, NULL, NULL, uv_00025F94, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_00025EF2, NULL, NULL, NULL, uv_00025FD4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002603C[] = {
	{ -323.9842f, 0, 89.13413f },
	{ -300.7711f, 0, 44.59103f },
	{ -254.4375f, 0, 38.00763f },
	{ -237.6834f, 0, -8.274526f },
	{ -260.3622f, 0, 28.55121f },
	{ -310, 0, 35 },
	{ -335.2915f, 0, 83.40974f },
	{ -336.4695f, 0, 224.9111f },
	{ -465.3f, 0, 277.8f },
	{ -585.3f, 0, 247.8f },
	{ -645, 0, 170 },
	{ -640, 0, 65 },
	{ -545, 0, -5 },
	{ -530, 0, -55 },
	{ -498.7867f, 0, -85.22812f },
	{ -507.0719f, 16.47774f, -95.34262f },
	{ -540.3119f, 16.47774f, -65.81123f },
	{ -556.1099f, 16.47774f, -14.42841f },
	{ -650.9227f, 16.47774f, 57.093f },
	{ -659.8486f, 16.47774f, 174.8486f },
	{ -595.1486f, 16.47774f, 261.3608f },
	{ -464.1367f, 16.47774f, 292.1392f },
	{ -332.0563f, 16.4167f, 239.2693f },
	{ -323.9842f, 17.94148f, 89.13413f },
	{ -300.7711f, 17.94148f, 44.59103f },
	{ -254.4375f, 17.94148f, 38.00763f },
	{ -237.6834f, 19.31745f, -8.274526f },
	{ -260.3622f, 17.94148f, 28.55121f },
	{ -310, 17.94148f, 35 },
	{ -335.2915f, 17.94148f, 83.40974f },
	{ -336.4695f, 16.4167f, 224.9111f },
	{ -465.3f, 16.47774f, 277.8f },
	{ -585.3f, 16.47774f, 247.8f },
	{ -645, 16.47774f, 170 },
	{ -640, 16.47774f, 65 },
	{ -545, 16.47774f, -5 },
	{ -530, 16.47774f, -55 },
	{ -498.7867f, 16.47774f, -85.22812f },
	{ -246.3977f, 0, -12.86557f },
	{ -246.3977f, 19.31745f, -12.86557f },
	{ -464.1367f, 0, 292.1392f },
	{ -332.0563f, 0, 239.2693f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00026234[] = {
	{ 0.886804f, 0, 0.462146f },
	{ 0.577581f, 0, 0.816333f },
	{ 0.630585f, 0, 0.7761199f },
	{ 0.940287f, 0, 0.340383f },
	{ -0.634526f, 0, -0.772902f },
	{ -0.5722719f, 0, -0.8200639f },
	{ -0.886328f, 0, -0.463059f },
	{ -0.379774f, 0, -0.925079f },
	{ -0.072224f, 0, -0.9973879f },
	{ 0.548551f, 0, -0.836117f },
	{ 0.954307f, 0, -0.298829f },
	{ 0.881543f, 0, 0.472104f },
	{ 0.817573f, 0, 0.575825f },
	{ 0.854378f, 0, 0.5196519f },
	{ 0.69568f, 0, 0.718352f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.196151f, 0.849639f, 0.489529f },
	{ 0.256296f, 0.724867f, 0.639437f },
	{ 0.624719f, 0.709742f, 0.325564f },
	{ 0.325781f, 0.825744f, 0.460448f },
	{ 0.5008489f, 0.602556f, 0.62135f },
	{ 0.621147f, 0.743319f, 0.248301f },
	{ -0.348839f, 0.847459f, -0.400155f },
	{ -0.45061f, 0.616435f, -0.645723f },
	{ -0.6292869f, 0.7042069f, -0.328769f },
	{ -0.276216f, 0.6855339f, -0.6736079f },
	{ -0.044591f, 0.784537f, -0.618477f },
	{ 0.336827f, 0.789283f, -0.513401f },
	{ 0.581023f, 0.793291f, -0.18194f },
	{ 0.507452f, 0.817702f, 0.271763f },
	{ 0.6266299f, 0.642302f, 0.441342f },
	{ 0.546645f, 0.768527f, 0.332482f },
	{ 0.479089f, 0.725081f, 0.494703f },
	{ -0.947587f, 0, -0.319498f },
	{ -0.706241f, 0.673862f, -0.217101f },
	{ 0.371619f, 0, 0.928385f },
	{ 0.371619f, 0, 0.928385f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002642C = { vertex_0002603C, normal_00026234, LengthOfArray(vertex_0002603C), meshlist_00025FF4, matlist_00025E44, LengthOfArray(meshlist_00025FF4), LengthOfArray(matlist_00025E44),{ -448.766f, 9.658724f, 98.39828f }, 286.516f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00026454 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002642C, 0, 0.059997f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00026488[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000264B0[] = {
	18, 53, 26, 54, 25, 13, 24, 47, 23, 49, 58, 57, 38, 39, 59, 40, 37, 41, 36,
	23, 0, 26, 27, 53, 28, 52, 29, 51, 30, 50, 31, 48, 32, 46, 33, 45, 34, 44, 35, 43, 36, 42, 41,
	3, 27, 1, 0
};

extern "C" __declspec(dllexport) Sint16 poly_0002650E[] = {
	4, 3, 2, 36, 35,
	0x8000u | 29, 9, 43, 8, 42, 7, 41, 6, 40, 5, 39, 56, 57, 22, 49, 21, 47, 20, 13, 19, 54, 18, 53, 17, 52, 16, 51, 15, 50, 48,
	9, 14, 12, 46, 11, 45, 10, 44, 9, 43,
	4, 15, 14, 48, 46,
	0x8000u | 6, 36, 3, 37, 4, 59, 55
};

extern "C" __declspec(dllexport) NJS_TEX uv_00026580[] = {
	{ 549, -5381 },
	{ 692, -6926 },
	{ 1042, -6369 },
	{ 1728, -7395 },
	{ 1978, -6979 },
	{ 2582, -7201 },
	{ 2602, -6716 },
	{ 4901, -7341 },
	{ 4858, -6858 },
	{ 6929, -7299 },
	{ 6880, -6693 },
	{ 8499, -7164 },
	{ 8460, -6680 },
	{ 10750, -6694 },
	{ 10259, -6157 },
	{ 12750, -4738 },
	{ 11921, -4729 },
	{ 12132, -1072 },
	{ 692, -6926 },
	{ 692, -6926 },
	{ 0, -5619 },
	{ 549, -5381 },
	{ 77, -4432 },
	{ 1218, -2807 },
	{ 956, -2256 },
	{ 2282, -2368 },
	{ 1992, -1697 },
	{ 3732, -1371 },
	{ 3362, -852 },
	{ 6513, -767 },
	{ 6252, -214 },
	{ 7882, -709 },
	{ 7702, -7 },
	{ 9008, -502 },
	{ 8719, 167 },
	{ 10333, -544 },
	{ 10480, 255 },
	{ 11647, -1466 },
	{ 12132, -1072 },
	{ 12250, -3425 },
	{ 11921, -4729 },
	{ 0, -5619 },
	{ 0, -5619 },
	{ 692, -6926 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00026630[] = {
	{ -17221, 255 },
	{ -16314, 255 },
	{ -17221, 0 },
	{ -16314, 0 },
	{ 545, 255 },
	{ 564, 0 },
	{ -272, 255 },
	{ -288, 0 },
	{ -860, 255 },
	{ -884, 0 },
	{ -1770, 255 },
	{ -1871, 0 },
	{ -2900, 255 },
	{ -2954, 0 },
	{ -4347, 255 },
	{ -4316, 0 },
	{ -6420, 255 },
	{ -6395, 0 },
	{ -7880, 255 },
	{ -7777, 0 },
	{ -7994, 255 },
	{ -7865, 0 },
	{ -8377, 255 },
	{ -8366, 0 },
	{ -8848, 255 },
	{ -8879, 0 },
	{ -10123, 255 },
	{ -10141, 0 },
	{ -10582, 255 },
	{ -10573, 0 },
	{ -11663, 255 },
	{ -11732, 0 },
	{ -14246, 0 },
	{ -14224, 255 },
	{ -15478, 255 },
	{ -15380, 0 },
	{ -16089, 255 },
	{ -15986, 0 },
	{ -16614, 255 },
	{ -16556, 0 },
	{ -17302, 255 },
	{ -17285, 0 },
	{ -11663, 255 },
	{ -14224, 255 },
	{ -14246, 0 },
	{ -15380, 0 },
	{ 625, 0 },
	{ 625, 255 },
	{ -844, 0 },
	{ -844, 255 },
	{ -1998, 0 },
	{ -2000, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00026700[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000264B0, NULL, NULL, NULL, uv_00026580, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 5, poly_0002650E, NULL, NULL, NULL, uv_00026630, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00026730[] = {
	{ -383.0427f, 0, -177.5424f },
	{ -398.0427f, 0, -237.5424f },
	{ 110.6676f, 0, -347.8122f },
	{ 166.0995f, 0, -275.7512f },
	{ 151.9133f, 0, -123.0332f },
	{ -52.28587f, 0, -104.4695f },
	{ 29.60346f, 0, -105.7882f },
	{ 107.9953f, 0, -138.6782f },
	{ 134.7119f, 0, -184.3074f },
	{ 129.4715f, 0, -262.5368f },
	{ 90.2567f, 0, -310.4348f },
	{ 36.72911f, 0, -324.7126f },
	{ -10.16466f, 0, -332.5193f },
	{ -329.0273f, 10, -160.4326f },
	{ -71.82011f, 0, -347.9966f },
	{ -193.9369f, 0, -356.2674f },
	{ -262.0154f, 0, -338.0937f },
	{ -316.6655f, 0, -333.6756f },
	{ -363.697f, 0, -237.2681f },
	{ -354.767f, 0, -197.5061f },
	{ -319.1173f, 0, -173.5806f },
	{ -294.2998f, 0, -172.586f },
	{ -199.2613f, 0, -139.9588f },
	{ -209.2848f, 10, -111.7052f },
	{ -305.8887f, 10, -144.5392f },
	{ -344.3009f, 10, -146.8869f },
	{ -383.0427f, 10, -177.5424f },
	{ -398.0427f, 10, -237.5424f },
	{ -381.7427f, 10, -283.7424f },
	{ -320.5055f, 10, -359.8397f },
	{ -270.5055f, 10, -369.8397f },
	{ -203.1542f, 10, -387.3374f },
	{ -73.63094f, 10, -378.7477f },
	{ -10.00001f, 10, -370 },
	{ 35, 10, -365 },
	{ 110.6676f, 10, -347.8122f },
	{ 166.0995f, 10, -275.7512f },
	{ 151.9133f, 10, -123.0332f },
	{ -54.76174f, 10, -76.59269f },
	{ -51.18114f, 10, -96.26966f },
	{ 30.76387f, 10, -95.85422f },
	{ 116.9133f, 10, -133.0332f },
	{ 145.235f, 10, -180.9904f },
	{ 141.0995f, 10, -265.7512f },
	{ 95.66758f, 10, -317.8122f },
	{ 40, 10, -335 },
	{ -10.00001f, 10, -340 },
	{ -299.7264f, 10, -163.5457f },
	{ -68.63094f, 10, -353.7477f },
	{ -205.7042f, 10, -131.382f },
	{ -193.1542f, 10, -362.3374f },
	{ -265.5055f, 10, -339.8397f },
	{ -315.5055f, 10, -334.8397f },
	{ -372.0936f, 10, -240.6251f },
	{ -362.0936f, 10, -195.6251f },
	{ 45.70641f, 0.01757f, -68.6144f },
	{ -119.2085f, 0, -124.1719f },
	{ -118.2823f, 10, -114.2544f },
	{ -122.758f, 10, -89.65829f },
	{ 45.69916f, 10, -68.79694f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00026A00[] = {
	{ -0.970143f, 0, 0.242536f },
	{ -0.970143f, 0, 0.242536f },
	{ 0.792622f, 0, -0.609713f },
	{ 0.96063f, 0, -0.277832f },
	{ 0.827976f, 0.009476f, 0.560683f },
	{ 0.117877f, 0.6548139f, -0.746541f },
	{ -0.156987f, 0.687072f, -0.709427f },
	{ -0.436687f, 0.7086149f, -0.554229f },
	{ -0.629174f, 0.762419f, -0.15119f },
	{ -0.623085f, 0.731308f, 0.277406f },
	{ -0.383655f, 0.716101f, 0.583102f },
	{ -0.145709f, 0.665994f, 0.7315879f },
	{ -0.149918f, 0.582182f, 0.799117f },
	{ 0.075146f, 0.974845f, -0.209834f },
	{ -0.121511f, 0.539037f, 0.8334709f },
	{ 0.119644f, 0.385869f, 0.914762f },
	{ 0.197594f, 0.196272f, 0.960434f },
	{ 0.459811f, 0.477325f, 0.748822f },
	{ 0.750429f, 0.657423f, 0.068198f },
	{ 0.555823f, 0.772146f, -0.307979f },
	{ 0.131375f, 0.7717209f, -0.622243f },
	{ 0.122062f, 0.698856f, -0.70477f },
	{ 0.175965f, 0.70135f, -0.690756f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.518335f, 0.845303f, 0.129584f },
	{ -0.5077429f, 0.852106f, 0.126936f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.427824f, 0.8418199f, -0.329098f },
	{ 0.743398f, 0.63335f, -0.215005f },
	{ 0.651216f, 0.617598f, 0.44101f },
	{ 0, 1, 0 },
	{ 0.047999f, 0.924805f, -0.377402f },
	{ -0.06989899f, 0.937314f, -0.341403f },
	{ -0.210015f, 0.951665f, -0.224113f },
	{ -0.340752f, 0.9359429f, -0.088873f },
	{ -0.269799f, 0.9567789f, 0.108546f },
	{ -0.179262f, 0.9477569f, 0.263859f },
	{ -0.077136f, 0.92448f, 0.373347f },
	{ -0.09054f, 0.8809839f, 0.464402f },
	{ 0.046642f, 0.8986149f, -0.436251f },
	{ -0.075848f, 0.889075f, 0.451434f },
	{ 0.099736f, 0.929278f, -0.35566f },
	{ 0.050364f, 0.871417f, 0.487951f },
	{ 0.111166f, 0.743672f, 0.659238f },
	{ 0.187385f, 0.905596f, 0.380503f },
	{ 0.317823f, 0.946656f, 0.053205f },
	{ 0.274099f, 0.952997f, -0.129099f },
	{ 0.45533f, 0.016608f, 0.890168f },
	{ 0.172093f, 0.655606f, -0.735231f },
	{ 0.102839f, 0.902916f, -0.417334f },
	{ 0, 1, 0 },
	{ 0.235096f, 0.856438f, 0.459613f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00026CD0 = { vertex_00026730, normal_00026A00, LengthOfArray(vertex_00026730), meshlist_00026700, matlist_00026488, LengthOfArray(meshlist_00026700), LengthOfArray(matlist_00026488),{ -115.9716f, 5, -227.9759f }, 321.5079f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00026CF8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00026CD0, -62.35121f, 0.059998f, 103.5587f, 0, 0x8B00, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00026D2C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00026D40[] = {
	0x8000u | 5, 5, 4, 19, 3, 2,
	9, 5, 11, 19, 14, 2, 15, 1, 12, 0,
	3, 11, 13, 14,
	9, 5, 6, 16, 7, 17, 8, 18, 9, 10,
	7, 5, 16, 11, 17, 13, 18, 10
};

extern "C" __declspec(dllexport) NJS_TEX uv_00026D8C[] = {
	{ 1290, -1219 },
	{ 1482, -577 },
	{ 3075, -1058 },
	{ 2453, 255 },
	{ 3936, 190 },
	{ 1290, -1219 },
	{ 2587, -1808 },
	{ 3075, -1058 },
	{ 4325, -1730 },
	{ 3936, 190 },
	{ 4970, -1666 },
	{ 4648, -1 },
	{ 5100, -1282 },
	{ 5035, -450 },
	{ 2587, -1808 },
	{ 3936, -2501 },
	{ 4325, -1730 },
	{ 1290, -1219 },
	{ 64, -2116 },
	{ 593, -2488 },
	{ 0, -3460 },
	{ 1742, -3158 },
	{ 768, -4460 },
	{ 2978, -3897 },
	{ 2320, -4845 },
	{ 3550, -4360 },
	{ 1290, -1219 },
	{ 593, -2488 },
	{ 2587, -1808 },
	{ 1742, -3158 },
	{ 3936, -2501 },
	{ 2978, -3897 },
	{ 3550, -4360 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00026E10[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_00026D40, NULL, NULL, NULL, uv_00026D8C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00026E28[] = {
	{ -255, 0, -65 },
	{ -285, 0, -100 },
	{ -340, 0, -115 },
	{ -455, 0, -120 },
	{ -530, 0, -55 },
	{ -545, 0, -5 },
	{ -640, 0, 65 },
	{ -645, 0, 170 },
	{ -585.3f, 0, 247.8f },
	{ -465.3f, 0, 277.8f },
	{ -370, 0, 240 },
	{ -444.444f, 0, 41.07968f },
	{ -250, 0, 0 },
	{ -340, 0, 95 },
	{ -310, 0, 35 },
	{ -260, 0, 30 },
	{ -598.8881f, 0, 94.16418f },
	{ -510.012f, 0, 146.3839f },
	{ -414.3141f, 0, 203.8963f },
	{ -406.8022f, 0, -17.51983f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00026F18[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00027008 = { vertex_00026E28, normal_00026F18, LengthOfArray(vertex_00026E28), meshlist_00026E10, matlist_00026D2C, LengthOfArray(meshlist_00026E10), LengthOfArray(matlist_00026D2C),{ -447.5f, 0, 78.89999f }, 280.2989f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00027030 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00027008, 0, 4.23999f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00027064[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00027078[] = {
	14, 10, 11, 5, 12, 22, 13, 21, 15, 20, 14, 19, 18, 4, 3,
	0x8000u | 5, 14, 18, 0, 17, 1,
	0x8000u | 5, 18, 3, 17, 2, 1,
	0x8000u | 12, 4, 19, 6, 20, 7, 21, 16, 22, 8, 5, 9, 10
};

extern "C" __declspec(dllexport) NJS_TEX uv_000270C8[] = {
	{ 10200, -5257 },
	{ 10002, -3563 },
	{ 9293, -5843 },
	{ 9346, -2426 },
	{ 8413, -5722 },
	{ 8723, -2562 },
	{ 6867, -5570 },
	{ 6885, -1352 },
	{ 5293, -5320 },
	{ 5080, -482 },
	{ 4328, -5009 },
	{ 2680, -4492 },
	{ 1157, -8755 },
	{ 149, -6317 },
	{ 5080, -482 },
	{ 2680, -4492 },
	{ 3443, 186 },
	{ 1726, -4111 },
	{ 2297, 255 },
	{ 2680, -4492 },
	{ 149, -6317 },
	{ 1726, -4111 },
	{ 0, -1125 },
	{ 2297, 255 },
	{ 1157, -8755 },
	{ 4328, -5009 },
	{ 3679, -9426 },
	{ 5293, -5320 },
	{ 5582, -9945 },
	{ 6867, -5570 },
	{ 6884, -9899 },
	{ 8413, -5722 },
	{ 8162, -9094 },
	{ 9293, -5843 },
	{ 9247, -8905 },
	{ 10200, -5257 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00027158[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00027078, NULL, NULL, NULL, uv_000270C8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00027170[] = {
	{ -154.1127f, 0, 102.9558f },
	{ -212.1983f, 0, 101.1251f },
	{ -328.6678f, 0, 137.8551f },
	{ -321.0994f, 0, 275.7512f },
	{ -269.9395f, 0, 340.4858f },
	{ 142.1023f, 0, 263.1626f },
	{ -142.2867f, 0, 358.2625f },
	{ -45.77292f, 0, 372.034f },
	{ 84.90371f, 0, 349.4383f },
	{ 139.9037f, 0, 344.4383f },
	{ 188.0428f, 0, 247.5424f },
	{ 178.0428f, 0, 202.5424f },
	{ 144.7887f, 0, 172.3945f },
	{ 113.2254f, 0, 175.9512f },
	{ -71.21954f, 0, 120.7489f },
	{ 20.11571f, 0, 143.8256f },
	{ 20.09128f, 0, 370.8891f },
	{ -241.1952f, 0, 217.1055f },
	{ -192.7651f, 0, 227.2117f },
	{ -109.3905f, 0, 240.9997f },
	{ -60.38658f, 0, 249.2041f },
	{ 19.3215f, 0, 255.8601f },
	{ 97.5356f, 0, 259.8789f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00027284[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00027398 = { vertex_00027170, normal_00027284, LengthOfArray(vertex_00027170), meshlist_00027158, matlist_00027064, LengthOfArray(meshlist_00027158), LengthOfArray(matlist_00027064),{ -70.31251f, 0, 236.5795f }, 296.7799f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000273C0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00027398, 111.5488f, 0.41999f, 48.95874f, 0, 0xB00, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000273F4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00027408[] = {
	5, 10, 12, 0, 2, 4,
	14, 7, 6, 5, 4, 3, 2, 1, 12, 11, 10, 9, 8, 7, 6,
	0x8000u | 5, 10, 8, 0, 6, 4
};

extern "C" __declspec(dllexport) NJS_TEX uv_00027440[] = {
	{ 63, 255 },
	{ 191, 255 },
	{ 127, 255 },
	{ 255, 255 },
	{ 191, 255 },
	{ 0, 255 },
	{ 63, 0 },
	{ 63, 255 },
	{ 191, 0 },
	{ 191, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 191, 0 },
	{ 191, 255 },
	{ 63, 0 },
	{ 63, 255 },
	{ 0 },
	{ 0, 255 },
	{ 63, 0 },
	{ 63, 255 },
	{ 0, 255 },
	{ 127, 255 },
	{ 63, 255 },
	{ 191, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000274A0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00027408, NULL, NULL, NULL, uv_00027440, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000274B8[] = {
	{ 0, 5.000008f, 0 },
	{ 1, -4.999992f, 0 },
	{ 1, 5.000008f, 0 },
	{ 0.5f, -4.999992f, -0.866025f },
	{ 0.5f, 5.000008f, -0.866025f },
	{ -0.5f, -4.999992f, -0.866025f },
	{ -0.5f, 5.000008f, -0.866025f },
	{ -1, -4.999992f, 0 },
	{ -1, 5.000008f, 0 },
	{ -0.5f, -4.999992f, 0.866026f },
	{ -0.5f, 5.000008f, 0.866026f },
	{ 0.5f, -4.999992f, 0.866025f },
	{ 0.5f, 5.000008f, 0.866025f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00027554[] = {
	{ 0, 1, 0 },
	{ 1, 0, 0 },
	{ 0.792406f, 0.609994f, 0 },
	{ 0.5f, 0, -0.866025f },
	{ 0.396203f, 0.609994f, -0.686244f },
	{ -0.5f, 0, -0.866025f },
	{ -0.396203f, 0.609994f, -0.686243f },
	{ -1, 0, 0 },
	{ -0.792406f, 0.609994f, 0 },
	{ -0.5f, 0, 0.866026f },
	{ -0.396203f, 0.609994f, 0.686244f },
	{ 0.5f, 0, 0.866025f },
	{ 0.396203f, 0.609994f, 0.686243f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000275F0 = { vertex_000274B8, normal_00027554, LengthOfArray(vertex_000274B8), meshlist_000274A0, matlist_000273F4, LengthOfArray(meshlist_000274A0), LengthOfArray(matlist_000273F4),{ 0, 0.000008f, 0 }, 5.468266f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00027618 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000275F0, -362.429f, 63.2133f, -20.88109f, 0xA2F, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002764C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00027660[] = {
	5, 10, 12, 0, 2, 4,
	14, 7, 6, 5, 4, 3, 2, 1, 12, 11, 10, 9, 8, 7, 6,
	0x8000u | 5, 10, 8, 0, 6, 4
};

extern "C" __declspec(dllexport) NJS_TEX uv_00027698[] = {
	{ 255, 63 },
	{ 255, 191 },
	{ 255, 127 },
	{ 255, 255 },
	{ 255, 191 },
	{ 255, 0 },
	{ 0, 63 },
	{ 255, 63 },
	{ 0, 191 },
	{ 255, 191 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 191 },
	{ 255, 191 },
	{ 0, 63 },
	{ 255, 63 },
	{ 0 },
	{ 255, 0 },
	{ 0, 63 },
	{ 255, 63 },
	{ 255, 0 },
	{ 255, 127 },
	{ 255, 63 },
	{ 255, 191 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000276F8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00027660, NULL, NULL, NULL, uv_00027698, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00027710[] = {
	{ 0, 4.999992f, 0 },
	{ 1, -5.000008f, 0 },
	{ 1, 4.999992f, 0 },
	{ 0.5f, -5.000008f, -0.866025f },
	{ 0.5f, 4.999992f, -0.866025f },
	{ -0.5f, -5.000008f, -0.866025f },
	{ -0.5f, 4.999992f, -0.866025f },
	{ -1, -5.000008f, 0 },
	{ -1, 4.999992f, 0 },
	{ -0.5f, -5.000008f, 0.866026f },
	{ -0.5f, 4.999992f, 0.866026f },
	{ 0.5f, -5.000008f, 0.866025f },
	{ 0.5f, 4.999992f, 0.866025f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000277AC[] = {
	{ 0, 1, 0 },
	{ 1, 0, 0 },
	{ 0.792406f, 0.609994f, 0 },
	{ 0.5f, 0, -0.866025f },
	{ 0.396203f, 0.609994f, -0.686244f },
	{ -0.5f, 0, -0.866025f },
	{ -0.396203f, 0.609994f, -0.686243f },
	{ -1, 0, 0 },
	{ -0.792406f, 0.609994f, 0 },
	{ -0.5f, 0, 0.866026f },
	{ -0.396203f, 0.609994f, 0.686244f },
	{ 0.5f, 0, 0.866025f },
	{ 0.396203f, 0.609994f, 0.686243f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00027848 = { vertex_00027710, normal_000277AC, LengthOfArray(vertex_00027710), meshlist_000276F8, matlist_0002764C, LengthOfArray(meshlist_000276F8), LengthOfArray(matlist_0002764C),{ 0, -0.00008f, 0 }, 5.468267f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00027870 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00027848, -271.0798f, 63.88363f, -22.06691f, 0xA2F, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000278A4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000278B8[] = {
	5, 10, 12, 0, 2, 4,
	14, 7, 6, 5, 4, 3, 2, 1, 12, 11, 10, 9, 8, 7, 6,
	0x8000u | 5, 10, 8, 0, 6, 4
};

extern "C" __declspec(dllexport) NJS_TEX uv_000278F0[] = {
	{ 255, 63 },
	{ 255, 191 },
	{ 255, 127 },
	{ 255, 255 },
	{ 255, 191 },
	{ 255, 0 },
	{ 0, 63 },
	{ 255, 63 },
	{ 0, 191 },
	{ 255, 191 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 191 },
	{ 255, 191 },
	{ 0, 63 },
	{ 255, 63 },
	{ 0 },
	{ 255, 0 },
	{ 0, 63 },
	{ 255, 63 },
	{ 255, 0 },
	{ 255, 127 },
	{ 255, 63 },
	{ 255, 191 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00027950[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000278B8, NULL, NULL, NULL, uv_000278F0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00027968[] = {
	{ 0, 5, 0 },
	{ 1, -5, 0 },
	{ 1, 5, 0 },
	{ 0.5f, -5, -0.866025f },
	{ 0.5f, 5, -0.866025f },
	{ -0.5f, -5, -0.866025f },
	{ -0.5f, 5, -0.866025f },
	{ -1, -5, 0 },
	{ -1, 5, 0 },
	{ -0.5f, -5, 0.866026f },
	{ -0.5f, 5, 0.866026f },
	{ 0.5f, -5, 0.866025f },
	{ 0.5f, 5, 0.866025f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00027A04[] = {
	{ 0, 1, 0 },
	{ 1, 0, 0 },
	{ 0.792406f, 0.609994f, 0 },
	{ 0.5f, 0, -0.866025f },
	{ 0.396203f, 0.609994f, -0.686244f },
	{ -0.5f, 0, -0.866025f },
	{ -0.396203f, 0.609994f, -0.686243f },
	{ -1, 0, 0 },
	{ -0.792406f, 0.609994f, 0 },
	{ -0.5f, 0, 0.866026f },
	{ -0.396203f, 0.609994f, 0.686244f },
	{ 0.5f, 0, 0.866025f },
	{ 0.396203f, 0.609994f, 0.686243f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00027AA0 = { vertex_00027968, normal_00027A04, LengthOfArray(vertex_00027968), meshlist_00027950, matlist_000278A4, LengthOfArray(meshlist_00027950), LengthOfArray(matlist_000278A4),{ 0 }, 5.468267f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00027AC8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00027AA0, -333.2f, 63.70923f, -23.30421f, 0xA2F, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00027AFC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00027B10[] = {
	5, 10, 12, 0, 2, 4,
	14, 7, 6, 5, 4, 3, 2, 1, 12, 11, 10, 9, 8, 7, 6,
	0x8000u | 5, 10, 8, 0, 6, 4
};

extern "C" __declspec(dllexport) NJS_TEX uv_00027B48[] = {
	{ 255, 63 },
	{ 255, 191 },
	{ 255, 127 },
	{ 255, 255 },
	{ 255, 191 },
	{ 255, 0 },
	{ 0, 63 },
	{ 255, 63 },
	{ 0, 191 },
	{ 255, 191 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 191 },
	{ 255, 191 },
	{ 0, 63 },
	{ 255, 63 },
	{ 0 },
	{ 255, 0 },
	{ 0, 63 },
	{ 255, 63 },
	{ 255, 0 },
	{ 255, 127 },
	{ 255, 63 },
	{ 255, 191 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00027BA8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00027B10, NULL, NULL, NULL, uv_00027B48, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00027BC0[] = {
	{ 0, 5, 0 },
	{ 1, -5, 0 },
	{ 1, 5, 0 },
	{ 0.5f, -5, -0.866025f },
	{ 0.5f, 5, -0.866025f },
	{ -0.5f, -5, -0.866025f },
	{ -0.5f, 5, -0.866025f },
	{ -1, -5, 0 },
	{ -1, 5, 0 },
	{ -0.5f, -5, 0.866026f },
	{ -0.5f, 5, 0.866026f },
	{ 0.5f, -5, 0.866025f },
	{ 0.5f, 5, 0.866025f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00027C5C[] = {
	{ 0, 1, 0 },
	{ 1, 0, 0 },
	{ 0.792406f, 0.609994f, 0 },
	{ 0.5f, 0, -0.866025f },
	{ 0.396203f, 0.609994f, -0.686244f },
	{ -0.5f, 0, -0.866025f },
	{ -0.396203f, 0.609994f, -0.686243f },
	{ -1, 0, 0 },
	{ -0.792406f, 0.609994f, 0 },
	{ -0.5f, 0, 0.866026f },
	{ -0.396203f, 0.609994f, 0.686244f },
	{ 0.5f, 0, 0.866025f },
	{ 0.396203f, 0.609994f, 0.686243f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00027CF8 = { vertex_00027BC0, normal_00027C5C, LengthOfArray(vertex_00027BC0), meshlist_00027BA8, matlist_00027AFC, LengthOfArray(meshlist_00027BA8), LengthOfArray(matlist_00027AFC),{ 0 }, 5.468267f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00027D20 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00027CF8, -300.3287f, 63.7286f, -23.68478f, 0xA2F, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00027D54[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00027D68[] = {
	14, 12, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 1,
	5, 10, 12, 0, 2, 4,
	0x8000u | 5, 10, 8, 0, 6, 4
};

extern "C" __declspec(dllexport) NJS_TEX uv_00027DA0[] = {
	{ 0, 191 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 191 },
	{ 0, 191 },
	{ 255, 63 },
	{ 0, 63 },
	{ 255, 0 },
	{ 0 },
	{ 255, 63 },
	{ 0, 63 },
	{ 255, 191 },
	{ 0, 191 },
	{ 255, 255 },
	{ 255, 63 },
	{ 255, 191 },
	{ 255, 127 },
	{ 255, 255 },
	{ 255, 191 },
	{ 255, 63 },
	{ 255, 0 },
	{ 255, 127 },
	{ 255, 63 },
	{ 255, 191 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00027E00[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00027D68, NULL, NULL, NULL, uv_00027DA0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00027E18[] = {
	{ -0.005583f, 10, -0.000606f },
	{ 0.994414f, 0.000004f, -0.000606f },
	{ 0.994414f, 10, -0.000606f },
	{ 0.494416f, 0.000004f, -0.866628f },
	{ 0.494416f, 10, -0.866628f },
	{ -0.505581f, 0.000004f, -0.866624f },
	{ -0.505581f, 10, -0.866624f },
	{ -1.005579f, 0.000004f, -0.000606f },
	{ -1.005579f, 10, -0.000606f },
	{ -0.505581f, 0.000004f, 0.865415f },
	{ -0.505581f, 10, 0.865415f },
	{ 0.494416f, 0.000004f, 0.865415f },
	{ 0.494416f, 10, 0.865415f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00027EB4[] = {
	{ 0, 1, 0 },
	{ 1, 0, 0 },
	{ 0.792406f, 0.609994f, 0 },
	{ 0.499998f, 0, -0.866027f },
	{ 0.396201f, 0.609994f, -0.686245f },
	{ -0.500001f, 0, -0.866025f },
	{ -0.396203f, 0.6099949f, -0.686243f },
	{ -1, 0, -0.00001f },
	{ -0.792406f, 0.609994f, -0.00001f },
	{ -0.5f, 0, 0.866025f },
	{ -0.396203f, 0.609994f, 0.686244f },
	{ 0.5f, 0, 0.866026f },
	{ 0.396203f, 0.609994f, 0.686244f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00027F50 = { vertex_00027E18, normal_00027EB4, LengthOfArray(vertex_00027E18), meshlist_00027E00, matlist_00027D54, LengthOfArray(meshlist_00027E00), LengthOfArray(matlist_00027D54),{ -0.005582f, 5.000004f, -0.000606f }, 5.092446f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00027F78 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00027F50, -528.8129f, 60.06f, 53.42965f, 0, 0x2000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00027FAC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00027FC0[] = {
	14, 12, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 1,
	5, 10, 12, 0, 2, 4,
	0x8000u | 5, 10, 8, 0, 6, 4
};

extern "C" __declspec(dllexport) NJS_TEX uv_00027FF8[] = {
	{ 0, 191 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 191 },
	{ 0, 191 },
	{ 255, 63 },
	{ 0, 63 },
	{ 255, 0 },
	{ 0 },
	{ 255, 63 },
	{ 0, 63 },
	{ 255, 191 },
	{ 0, 191 },
	{ 255, 255 },
	{ 255, 63 },
	{ 255, 191 },
	{ 255, 127 },
	{ 255, 255 },
	{ 255, 191 },
	{ 255, 63 },
	{ 255, 0 },
	{ 255, 127 },
	{ 255, 63 },
	{ 255, 191 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00028058[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00027FC0, NULL, NULL, NULL, uv_00027FF8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00028070[] = {
	{ -0.005583f, 10, -0.000606f },
	{ 0.994414f, 0.000004f, -0.000606f },
	{ 0.994414f, 10, -0.000606f },
	{ 0.494416f, 0.000004f, -0.866628f },
	{ 0.494416f, 10, -0.866628f },
	{ -0.505581f, 0.000004f, -0.866624f },
	{ -0.505581f, 10, -0.866624f },
	{ -1.005579f, 0.000004f, -0.000606f },
	{ -1.005579f, 10, -0.000606f },
	{ -0.505581f, 0.000004f, 0.865415f },
	{ -0.505581f, 10, 0.865415f },
	{ 0.494416f, 0.000004f, 0.865415f },
	{ 0.494416f, 10, 0.865415f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002810C[] = {
	{ 0, 1, 0 },
	{ 1, 0, 0 },
	{ 0.792406f, 0.609994f, 0 },
	{ 0.499998f, 0, -0.866027f },
	{ 0.396201f, 0.609994f, -0.686245f },
	{ -0.500001f, 0, -0.866025f },
	{ -0.396203f, 0.6099949f, -0.686243f },
	{ -1, 0, -0.00001f },
	{ -0.792406f, 0.609994f, -0.00001f },
	{ -0.5f, 0, 0.866025f },
	{ -0.396203f, 0.609994f, 0.686244f },
	{ 0.5f, 0, 0.866026f },
	{ 0.396203f, 0.609994f, 0.686244f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000281A8 = { vertex_00028070, normal_0002810C, LengthOfArray(vertex_00028070), meshlist_00028058, matlist_00027FAC, LengthOfArray(meshlist_00028058), LengthOfArray(matlist_00027FAC),{ -0.005582f, 5.000004f, -0.000606f }, 5.092446f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000281D0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000281A8, -507.9382f, 60.06f, 70.82525f, 0, 0x2000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00028204[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00028218[] = {
	14, 12, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 1,
	5, 10, 12, 0, 2, 4,
	0x8000u | 5, 10, 8, 0, 6, 4
};

extern "C" __declspec(dllexport) NJS_TEX uv_00028250[] = {
	{ 0, 191 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 191 },
	{ 0, 191 },
	{ 255, 63 },
	{ 0, 63 },
	{ 255, 0 },
	{ 0 },
	{ 255, 63 },
	{ 0, 63 },
	{ 255, 191 },
	{ 0, 191 },
	{ 255, 255 },
	{ 255, 63 },
	{ 255, 191 },
	{ 255, 127 },
	{ 255, 255 },
	{ 255, 191 },
	{ 255, 63 },
	{ 255, 0 },
	{ 255, 127 },
	{ 255, 63 },
	{ 255, 191 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000282B0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00028218, NULL, NULL, NULL, uv_00028250, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000282C8[] = {
	{ -0.005583f, 10, -0.000606f },
	{ 0.994414f, 0.000004f, -0.000606f },
	{ 0.994414f, 10, -0.000606f },
	{ 0.494416f, 0.000004f, -0.866628f },
	{ 0.494416f, 10, -0.866628f },
	{ -0.505581f, 0.000004f, -0.866624f },
	{ -0.505581f, 10, -0.866624f },
	{ -1.005579f, 0.000004f, -0.000606f },
	{ -1.005579f, 10, -0.000606f },
	{ -0.505581f, 0.000004f, 0.865415f },
	{ -0.505581f, 10, 0.865415f },
	{ 0.494416f, 0.000004f, 0.865415f },
	{ 0.494416f, 10, 0.865415f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00028364[] = {
	{ 0, 1, 0 },
	{ 1, 0, 0 },
	{ 0.792406f, 0.609994f, 0 },
	{ 0.499998f, 0, -0.866027f },
	{ 0.396201f, 0.609994f, -0.686245f },
	{ -0.500001f, 0, -0.866025f },
	{ -0.396203f, 0.6099949f, -0.686243f },
	{ -1, 0, -0.00001f },
	{ -0.792406f, 0.609994f, -0.00001f },
	{ -0.5f, 0, 0.866025f },
	{ -0.396203f, 0.609994f, 0.686244f },
	{ 0.5f, 0, 0.866026f },
	{ 0.396203f, 0.609994f, 0.686244f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00028400 = { vertex_000282C8, normal_00028364, LengthOfArray(vertex_000282C8), meshlist_000282B0, matlist_00028204, LengthOfArray(meshlist_000282B0), LengthOfArray(matlist_00028204),{ -0.005582f, 5.000004f, -0.000606f }, 5.42001f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00028428 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00028400, -378.5338f, 79.15828f, 124.9552f, 0xFFFFF2F7, 0x2000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002845C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00028470[] = {
	14, 12, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 1,
	5, 10, 12, 0, 2, 4,
	0x8000u | 5, 10, 8, 0, 6, 4
};

extern "C" __declspec(dllexport) NJS_TEX uv_000284A8[] = {
	{ 0, 191 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 191 },
	{ 0, 191 },
	{ 255, 63 },
	{ 0, 63 },
	{ 255, 0 },
	{ 0 },
	{ 255, 63 },
	{ 0, 63 },
	{ 255, 191 },
	{ 0, 191 },
	{ 255, 255 },
	{ 255, 63 },
	{ 255, 191 },
	{ 255, 127 },
	{ 255, 255 },
	{ 255, 191 },
	{ 255, 63 },
	{ 255, 0 },
	{ 255, 127 },
	{ 255, 63 },
	{ 255, 191 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00028508[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00028470, NULL, NULL, NULL, uv_000284A8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00028520[] = {
	{ -0.005583f, 10, -0.000606f },
	{ 0.994414f, 0.000004f, -0.000606f },
	{ 0.994414f, 10, -0.000606f },
	{ 0.494416f, 0.000004f, -0.866628f },
	{ 0.494416f, 10, -0.866628f },
	{ -0.505581f, 0.000004f, -0.866624f },
	{ -0.505581f, 10, -0.866624f },
	{ -1.005579f, 0.000004f, -0.000606f },
	{ -1.005579f, 10, -0.000606f },
	{ -0.505581f, 0.000004f, 0.865415f },
	{ -0.505581f, 10, 0.865415f },
	{ 0.494416f, 0.000004f, 0.865415f },
	{ 0.494416f, 10, 0.865415f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000285BC[] = {
	{ 0, 1, 0 },
	{ 1, 0, 0 },
	{ 0.792406f, 0.609994f, 0 },
	{ 0.499998f, 0, -0.866027f },
	{ 0.396201f, 0.609994f, -0.686245f },
	{ -0.500001f, 0, -0.866025f },
	{ -0.396203f, 0.6099949f, -0.686243f },
	{ -1, 0, -0.00001f },
	{ -0.792406f, 0.609994f, -0.00001f },
	{ -0.5f, 0, 0.866025f },
	{ -0.396203f, 0.609994f, 0.686244f },
	{ 0.5f, 0, 0.866026f },
	{ 0.396203f, 0.609994f, 0.686244f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00028658 = { vertex_00028520, normal_000285BC, LengthOfArray(vertex_00028520), meshlist_00028508, matlist_0002845C, LengthOfArray(meshlist_00028508), LengthOfArray(matlist_0002845C),{ -0.005582f, 5.000004f, -0.000606f }, 5.193446f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00028680 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00028658, -378.9056f, 79.15828f, 155.2596f, 0xDF, 0x2055, 0x8AC, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000286B4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 21, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000286DC[] = {
	14, 7, 6, 5, 4, 3, 2, 1, 0, 11, 10, 9, 8, 7, 6
};

extern "C" __declspec(dllexport) Sint16 poly_000286FA[] = {
	3, 8, 10, 6,
	5, 10, 0, 6, 2, 4
};

extern "C" __declspec(dllexport) NJS_TEX uv_00028710[] = {
	{ 255, 0 },
	{ 0, 63 },
	{ 255, 63 },
	{ 0, 191 },
	{ 255, 191 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 191 },
	{ 255, 191 },
	{ 0, 63 },
	{ 255, 63 },
	{ 0 },
	{ 255, 0 },
	{ 0, 63 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00028748[] = {
	{ 0, 127 },
	{ 63, 0 },
	{ 63, 255 },
	{ 63, 0 },
	{ 191, 0 },
	{ 63, 255 },
	{ 255, 127 },
	{ 191, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00028768[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000286DC, NULL, NULL, NULL, uv_00028710, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000286FA, NULL, NULL, NULL, uv_00028748, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00028798[] = {
	{ 0.5f, 5, 0.866025f },
	{ 1, -5, 0 },
	{ 1, 5, 0 },
	{ 0.5f, -5, -0.866025f },
	{ 0.5f, 5, -0.866025f },
	{ -0.5f, -5, -0.866025f },
	{ -0.5f, 5, -0.866025f },
	{ -1, -5, 0 },
	{ -1, 5, 0 },
	{ -0.5f, -5, 0.866026f },
	{ -0.5f, 5, 0.866026f },
	{ 0.5f, -5, 0.866025f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00028828[] = {
	{ 0.396203f, 0.609994f, 0.686243f },
	{ 1, 0, 0 },
	{ 0.792406f, 0.609994f, 0 },
	{ 0.5f, 0, -0.866025f },
	{ 0.396203f, 0.609994f, -0.686244f },
	{ -0.5f, 0, -0.866025f },
	{ -0.396203f, 0.609994f, -0.686244f },
	{ -1, 0, 0 },
	{ -0.792406f, 0.609994f, 0 },
	{ -0.5f, 0, 0.866026f },
	{ -0.396203f, 0.609994f, 0.686244f },
	{ 0.5f, 0, 0.866025f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000288B8 = { vertex_00028798, normal_00028828, LengthOfArray(vertex_00028798), meshlist_00028768, matlist_000286B4, LengthOfArray(meshlist_00028768), LengthOfArray(matlist_000286B4),{ 0 }, 5.66409f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000288E0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000288B8, -271.8508f, 63.5825f, -58.40284f, 0xFFFFEF4C, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00028914[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00028928[] = {
	3, 8, 10, 6,
	5, 10, 0, 6, 2, 4,
	14, 7, 6, 5, 4, 3, 2, 1, 0, 11, 10, 9, 8, 7, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002895C[] = {
	{ 255, 0 },
	{ 255, 63 },
	{ 255, 63 },
	{ 255, 63 },
	{ 255, 191 },
	{ 255, 63 },
	{ 255, 255 },
	{ 255, 191 },
	{ 255, 0 },
	{ 0, 63 },
	{ 255, 63 },
	{ 0, 191 },
	{ 255, 191 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 191 },
	{ 255, 191 },
	{ 0, 63 },
	{ 255, 63 },
	{ 0 },
	{ 255, 0 },
	{ 0, 63 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000289B4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00028928, NULL, NULL, NULL, uv_0002895C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000289CC[] = {
	{ 0.5f, 5, 0.866022f },
	{ 1, -5, -0.00004f },
	{ 1, 5, -0.00004f },
	{ 0.5f, -5, -0.866029f },
	{ 0.5f, 5, -0.866029f },
	{ -0.5f, -5, -0.866029f },
	{ -0.5f, 5, -0.866029f },
	{ -1, -5, -0.00004f },
	{ -1, 5, -0.00004f },
	{ -0.5f, -5, 0.866022f },
	{ -0.5f, 5, 0.866022f },
	{ 0.5f, -5, 0.866022f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00028A5C[] = {
	{ 0.396203f, 0.609994f, 0.686243f },
	{ 1, 0, 0 },
	{ 0.792406f, 0.609994f, 0 },
	{ 0.5f, 0, -0.866025f },
	{ 0.396203f, 0.609994f, -0.686244f },
	{ -0.5f, 0, -0.866025f },
	{ -0.396203f, 0.609994f, -0.686244f },
	{ -1, 0, 0 },
	{ -0.792406f, 0.609994f, 0 },
	{ -0.5f, 0, 0.866026f },
	{ -0.396203f, 0.609994f, 0.686244f },
	{ 0.5f, 0, 0.866025f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00028AEC = { vertex_000289CC, normal_00028A5C, LengthOfArray(vertex_000289CC), meshlist_000289B4, matlist_00028914, LengthOfArray(meshlist_000289B4), LengthOfArray(matlist_00028914),{ 0, 0, -0.00004f }, 5.664088f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00028B14 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00028AEC, -333.2f, 63.5825f, -56.43904f, 0xFFFFEF4C, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00028B48[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00028B5C[] = {
	3, 8, 10, 6,
	5, 10, 0, 6, 2, 4,
	14, 7, 6, 5, 4, 3, 2, 1, 0, 11, 10, 9, 8, 7, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_00028B90[] = {
	{ 255, 0 },
	{ 255, 63 },
	{ 255, 63 },
	{ 255, 63 },
	{ 255, 191 },
	{ 255, 63 },
	{ 255, 255 },
	{ 255, 191 },
	{ 255, 0 },
	{ 0, 63 },
	{ 255, 63 },
	{ 0, 191 },
	{ 255, 191 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 191 },
	{ 255, 191 },
	{ 0, 63 },
	{ 255, 63 },
	{ 0 },
	{ 255, 0 },
	{ 0, 63 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00028BE8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00028B5C, NULL, NULL, NULL, uv_00028B90, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00028C00[] = {
	{ 0.5f, 5, 0.866022f },
	{ 1, -5, -0.00004f },
	{ 1, 5, -0.00004f },
	{ 0.5f, -5, -0.866029f },
	{ 0.5f, 5, -0.866029f },
	{ -0.5f, -5, -0.866029f },
	{ -0.5f, 5, -0.866029f },
	{ -1, -5, -0.00004f },
	{ -1, 5, -0.00004f },
	{ -0.5f, -5, 0.866022f },
	{ -0.5f, 5, 0.866022f },
	{ 0.5f, -5, 0.866022f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00028C90[] = {
	{ 0.396203f, 0.609994f, 0.686243f },
	{ 1, 0, 0 },
	{ 0.792406f, 0.609994f, 0 },
	{ 0.5f, 0, -0.866025f },
	{ 0.396203f, 0.609994f, -0.686244f },
	{ -0.5f, 0, -0.866025f },
	{ -0.396203f, 0.609994f, -0.686244f },
	{ -1, 0, 0 },
	{ -0.792406f, 0.609994f, 0 },
	{ -0.5f, 0, 0.866026f },
	{ -0.396203f, 0.609994f, 0.686244f },
	{ 0.5f, 0, 0.866025f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00028D20 = { vertex_00028C00, normal_00028C90, LengthOfArray(vertex_00028C00), meshlist_00028BE8, matlist_00028B48, LengthOfArray(meshlist_00028BE8), LengthOfArray(matlist_00028B48),{ 0, 0, -0.00004f }, 5.664088f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00028D48 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00028D20, -300.3087f, 63.5825f, -56.82455f, 0xFFFFEF4C, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00028D7C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00028D90[] = {
	5, 10, 12, 0, 2, 4,
	14, 7, 6, 5, 4, 3, 2, 1, 12, 11, 10, 9, 8, 7, 6,
	0x8000u | 5, 10, 8, 0, 6, 4
};

extern "C" __declspec(dllexport) NJS_TEX uv_00028DC8[] = {
	{ 255, 63 },
	{ 255, 191 },
	{ 255, 127 },
	{ 255, 255 },
	{ 255, 191 },
	{ 255, 0 },
	{ 0, 63 },
	{ 255, 63 },
	{ 0, 191 },
	{ 255, 191 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 191 },
	{ 255, 191 },
	{ 0, 63 },
	{ 255, 63 },
	{ 0 },
	{ 255, 0 },
	{ 0, 63 },
	{ 255, 63 },
	{ 255, 0 },
	{ 255, 127 },
	{ 255, 63 },
	{ 255, 191 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00028E28[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00028D90, NULL, NULL, NULL, uv_00028DC8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00028E40[] = {
	{ 0, 5, 0 },
	{ 1, -5, 0 },
	{ 1, 5, 0 },
	{ 0.5f, -5, -0.866025f },
	{ 0.5f, 5, -0.866025f },
	{ -0.5f, -5, -0.866025f },
	{ -0.5f, 5, -0.866025f },
	{ -1, -5, 0 },
	{ -1, 5, 0 },
	{ -0.5f, -5, 0.866026f },
	{ -0.5f, 5, 0.866026f },
	{ 0.5f, -5, 0.866025f },
	{ 0.5f, 5, 0.866025f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00028EDC[] = {
	{ 0, 1, 0 },
	{ 1, 0, 0 },
	{ 0.792406f, 0.609994f, 0 },
	{ 0.5f, 0, -0.866025f },
	{ 0.396203f, 0.609994f, -0.686244f },
	{ -0.5f, 0, -0.866025f },
	{ -0.396203f, 0.609994f, -0.686243f },
	{ -1, 0, 0 },
	{ -0.792406f, 0.609994f, 0 },
	{ -0.5f, 0, 0.866026f },
	{ -0.396203f, 0.609994f, 0.686244f },
	{ 0.5f, 0, 0.866025f },
	{ 0.396203f, 0.609994f, 0.686243f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00028F78 = { vertex_00028E40, normal_00028EDC, LengthOfArray(vertex_00028E40), meshlist_00028E28, matlist_00028D7C, LengthOfArray(meshlist_00028E28), LengthOfArray(matlist_00028D7C),{ 0 }, 5.674397f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00028FA0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00028F78, -363.2f, 63.61201f, -57.40948f, 0xFFFFEEE4, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00028FD4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 54, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 54, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 54, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00029060[] = {
	3, 26, 42, 18,
	3, 15, 52, 22
};

extern "C" __declspec(dllexport) Sint16 poly_00029070[] = {
	3, 9, 21, 6,
	0x8000u | 13, 6, 12, 21, 20, 19, 33, 31, 35, 30, 23, 36, 16, 17
};

extern "C" __declspec(dllexport) Sint16 poly_00029094[] = {
	6, 45, 46, 43, 44, 22, 34,
	0x8000u | 30, 43, 45, 51, 53, 56, 57, 25, 29, 24, 28, 38, 41, 37, 40, 1, 5, 0, 4, 48, 50, 68, 71, 66, 69, 67, 70, 47, 49, 54, 55,
	0x8000u | 30, 54, 14, 47, 11, 67, 64, 66, 63, 68, 65, 48, 10, 0, 3, 1, 2, 37, 39, 38, 32, 24, 27, 25, 26, 56, 42, 51, 52, 43, 22,
	4, 18, 42, 15, 52,
	6, 14, 13, 54, 58, 55, 59
};

extern "C" __declspec(dllexport) Sint16 poly_00029136[] = {
	0x8000u | 19, 13, 12, 14, 6, 11, 7, 64, 61, 63, 60, 65, 62, 10, 8, 3, 9, 2, 21, 19,
	17, 34, 35, 22, 23, 15, 16, 18, 17, 26, 36, 27, 30, 32, 31, 39, 19, 2
};

extern "C" __declspec(dllexport) Sint16 poly_00029182[] = {
	0x8000u | 5, 6, 9, 7, 8, 62
};

extern "C" __declspec(dllexport) Sint16 poly_0002918E[] = {
	4, 60, 62, 61, 7
};

extern "C" __declspec(dllexport) NJS_TEX uv_00029198[] = {
	{ 0, 508 },
	{ 254, 179 },
	{ 40, 44 },
	{ 34, 0 },
	{ 246, 124 },
	{ 29, 470 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000291B0[] = {
	{ 206, 255 },
	{ 860, 255 },
	{ 120, -255 },
	{ 120, -255 },
	{ 919, -255 },
	{ 860, 255 },
	{ 1893, -255 },
	{ 1670, 255 },
	{ 2913, -255 },
	{ 2624, 255 },
	{ 3885, -255 },
	{ 3473, 255 },
	{ 4577, -255 },
	{ 4176, 255 },
	{ 5100, -255 },
	{ 5100, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000291F0[] = {
	{ 296, 255 },
	{ 0, 255 },
	{ 306, -223 },
	{ 0, -233 },
	{ 292, -510 },
	{ 0, -510 },
	{ 306, -223 },
	{ 296, 255 },
	{ 474, -360 },
	{ 434, 255 },
	{ 761, -360 },
	{ 669, 255 },
	{ 924, -220 },
	{ 896, 255 },
	{ 1098, -217 },
	{ 1061, 255 },
	{ 1290, -219 },
	{ 1236, 255 },
	{ 1491, -223 },
	{ 1431, 255 },
	{ 1674, -223 },
	{ 1594, 255 },
	{ 1816, -200 },
	{ 1830, 255 },
	{ 1866, -197 },
	{ 1877, 255 },
	{ 1941, -197 },
	{ 1946, 255 },
	{ 2021, -198 },
	{ 2024, 255 },
	{ 2096, -198 },
	{ 2100, 255 },
	{ 2162, -200 },
	{ 2169, 255 },
	{ 2204, -201 },
	{ 2211, 255 },
	{ 2204, -201 },
	{ 2217, -510 },
	{ 2162, -200 },
	{ 2176, -510 },
	{ 2096, -198 },
	{ 2097, -510 },
	{ 2021, -198 },
	{ 2024, -510 },
	{ 1941, -197 },
	{ 1937, -510 },
	{ 1866, -197 },
	{ 1880, -510 },
	{ 1816, -200 },
	{ 1832, -510 },
	{ 1674, -223 },
	{ 1691, -510 },
	{ 1491, -223 },
	{ 1507, -510 },
	{ 1290, -219 },
	{ 1312, -510 },
	{ 1098, -217 },
	{ 1117, -510 },
	{ 924, -220 },
	{ 952, -510 },
	{ 761, -360 },
	{ 768, -510 },
	{ 474, -360 },
	{ 478, -510 },
	{ 306, -223 },
	{ 292, -510 },
	{ -254, 76 },
	{ 255, -1 },
	{ -254, 456 },
	{ 255, 508 },
	{ 2217, -510 },
	{ 2550, -510 },
	{ 2204, -201 },
	{ 2550, -205 },
	{ 2211, 255 },
	{ 2550, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00029320[] = {
	{ 7650, 255 },
	{ 7650, 0 },
	{ 6666, 255 },
	{ 6659, 0 },
	{ 6536, 255 },
	{ 6537, 0 },
	{ 6322, 255 },
	{ 6334, 0 },
	{ 6110, 255 },
	{ 6121, 0 },
	{ 5874, 255 },
	{ 5896, 0 },
	{ 5668, 255 },
	{ 5692, 0 },
	{ 5524, 255 },
	{ 5546, 0 },
	{ 5107, 255 },
	{ 5091, 0 },
	{ 4526, 0 },
	{ 0, 255 },
	{ 0 },
	{ 872, 255 },
	{ 856, 0 },
	{ 1576, 255 },
	{ 1506, 0 },
	{ 2215, 255 },
	{ 2135, 0 },
	{ 2905, 255 },
	{ 2773, 0 },
	{ 3399, 255 },
	{ 3267, 0 },
	{ 3973, 255 },
	{ 3858, 0 },
	{ 4558, 255 },
	{ 4526, 0 },
	{ 5107, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000293B0[] = {
	{ 254, 252 },
	{ 217, -228 },
	{ 78, 220 },
	{ 0, -188 },
	{ 90, -125 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000293C4[] = {
	{ 0, -70 },
	{ 255, -249 },
	{ 0, 89 },
	{ 220, 250 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000293D4[] = {
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00029060, NULL, NULL, NULL, uv_00029198, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_00029070, NULL, NULL, NULL, uv_000291B0, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 5, poly_00029094, NULL, NULL, NULL, uv_000291F0, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_00029136, NULL, NULL, NULL, uv_00029320, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_00029182, NULL, NULL, NULL, uv_000293B0, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 1, poly_0002918E, NULL, NULL, NULL, uv_000293C4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00029464[] = {
	{ -52.92898f, 2.853779f, -73.76427f },
	{ -25.68602f, 2.973778f, -66.75528f },
	{ -24.15158f, 31.06157f, -68.80003f },
	{ -52.57723f, 32.02265f, -77.11206f },
	{ -53.3486f, -40, -73.44476f },
	{ -7.151944f, -40, -62.20245f },
	{ -50.51434f, 40.31562f, -142.4039f },
	{ -57.05611f, 37.11562f, -138.1941f },
	{ -59.95995f, 37.11562f, -83.52282f },
	{ -51.90305f, 40.31562f, -78.20198f },
	{ -59.95995f, 32.38143f, -83.52282f },
	{ -57.05611f, 32.02377f, -138.1941f },
	{ 18.15245f, 40.31562f, -131.1366f },
	{ 18.15245f, 31.1765f, -131.1366f },
	{ -48.80759f, 31.81127f, -141.9077f },
	{ -94.32397f, 28.43686f, 111.7365f },
	{ -91.12398f, 37.27561f, 111.7365f },
	{ -96.8411f, 37.27561f, 67.75323f },
	{ -100.0411f, 28.43686f, 67.75323f },
	{ 1.64006f, 40.31562f, -38.50592f },
	{ 66.78194f, 40.31562f, -61.42612f },
	{ -19.87034f, 40.31562f, -71.94428f },
	{ -45.55825f, 28.7622f, 113.242f },
	{ -45.55825f, 40.31562f, 113.242f },
	{ -26.66274f, 2.973778f, 32.18068f },
	{ -58.15132f, 2.973778f, 44.70035f },
	{ -57.16727f, 31.55974f, 46.6021f },
	{ -24.73368f, 31.51972f, 35.72742f },
	{ -8.580547f, -40, 29.9272f },
	{ -38.92322f, -40, 44.44183f },
	{ -21.29898f, 40.31562f, 43.28529f },
	{ 1.64006f, 40.31562f, 8.400023f },
	{ -1.84562f, 31.49439f, 3.148869f },
	{ 64.4999f, 40.31562f, 27.65204f },
	{ 11.83104f, 27.35026f, 94.27463f },
	{ 11.83104f, 40.31562f, 94.27463f },
	{ -54.72163f, 40.31562f, 52.40991f },
	{ -4.199449f, 2.973778f, -37.87912f },
	{ -3.750852f, 2.973778f, 2.041756f },
	{ -2.68511f, 31.04632f, -37.36894f },
	{ 14.35844f, -40, -36.46408f },
	{ 14.35844f, -40, 2.741792f },
	{ -88.23392f, 13.1883f, 58.72388f },
	{ -45.55825f, 2.973778f, 113.242f },
	{ 11.83104f, 2.973778f, 94.27463f },
	{ -45.55825f, -40, 113.242f },
	{ 11.83104f, -40, 94.27463f },
	{ -56.60609f, 2.853779f, -137.1441f },
	{ -59.95995f, 2.853779f, -80.44284f },
	{ -57.05611f, -40, -139.2141f },
	{ -59.95995f, -40, -80.44284f },
	{ -78.47603f, 2.973778f, 116.3613f },
	{ -80.04396f, 13.1883f, 117.862f },
	{ -73.64395f, -40, 111.7365f },
	{ -48.75085f, 2.853779f, -140.787f },
	{ -49.67299f, -40, -142.772f },
	{ -86.41589f, 2.973778f, 60.22456f },
	{ -80.813f, -40, 64.8494f },
	{ 18.15245f, 2.853779f, -131.1366f },
	{ 18.15245f, -40, -131.1366f },
	{ -59.95995f, 37.11562f, -108.4114f },
	{ -59.95995f, 37.11562f, -123.2858f },
	{ -56.60609f, 37.11562f, -91.89111f },
	{ -61.54186f, 32.2026f, -108.7612f },
	{ -61.54186f, 32.11318f, -123.6355f },
	{ -56.60609f, 32.29201f, -91.89111f },
	{ -58.6099f, 2.853779f, -110.1914f },
	{ -58.6099f, 2.853779f, -125.0658f },
	{ -57.05611f, 2.853779f, -94.59119f },
	{ -59.95995f, -40, -110.1914f },
	{ -59.95995f, -40, -125.0658f },
	{ -57.05611f, -40, -94.59119f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000297C4[] = {
	{ -0.482838f, 0.047753f, 0.874407f },
	{ -0.522141f, -0.020237f, 0.852619f },
	{ -0.536956f, 0.273527f, 0.798036f },
	{ -0.456868f, 0.150444f, 0.87672f },
	{ -0.493346f, 0.004967f, 0.869819f },
	{ -0.5978529f, -0.170538f, 0.783255f },
	{ -0.22676f, 0.666447f, -0.7102309f },
	{ -0.734828f, 0.476518f, -0.482658f },
	{ -0.872046f, 0.428988f, 0.235596f },
	{ -0.342628f, 0.7598619f, 0.5524639f },
	{ -0.966409f, 0.017301f, 0.256425f },
	{ -0.778577f, -0.017084f, -0.627316f },
	{ 0.08932599f, 0.8305579f, -0.549722f },
	{ 0.155459f, -0.019087f, -0.987658f },
	{ -0.132012f, -0.020085f, -0.991045f },
	{ -0.77988f, -0.107935f, 0.616552f },
	{ -0.455623f, 0.639291f, 0.619447f },
	{ -0.555971f, 0.751391f, -0.355398f },
	{ -0.932075f, -0.030278f, -0.360999f },
	{ -0.434874f, 0.891859f, 0.12439f },
	{ 0, 1, 0 },
	{ -0.249485f, 0.912067f, 0.325408f },
	{ 0.169184f, 0.02614f, 0.985238f },
	{ 0.084905f, 0.678169f, 0.729985f },
	{ -0.582875f, -0.053017f, -0.810831f },
	{ -0.393505f, -0.115136f, -0.912084f },
	{ -0.334722f, 0.267145f, -0.903657f },
	{ -0.554725f, 0.408118f, -0.725065f },
	{ -0.625704f, -0.250421f, -0.738772f },
	{ -0.416935f, -0.148329f, -0.896752f },
	{ -0.189383f, 0.941855f, -0.277568f },
	{ -0.384664f, 0.912343f, -0.140229f },
	{ -0.917052f, 0.315126f, -0.244357f },
	{ 0, 1, 0 },
	{ 0.313808f, 0, 0.949486f },
	{ 0.164167f, 0.852244f, 0.496719f },
	{ -0.173092f, 0.86999f, -0.461688f },
	{ -0.928441f, -0.153376f, 0.338339f },
	{ -0.934791f, -0.148691f, -0.322579f },
	{ -0.9225979f, 0.26175f, 0.283373f },
	{ -0.891014f, -0.354796f, 0.283218f },
	{ -0.87995f, -0.380832f, -0.284f },
	{ -0.759937f, -0.2206f, -0.6114179f },
	{ 0.193782f, -0.026252f, 0.980693f },
	{ 0.313808f, 0, 0.949486f },
	{ 0.172122f, -0.052653f, 0.983667f },
	{ 0.313808f, 0, 0.949486f },
	{ -0.785997f, 0.002028f, -0.6182269f },
	{ -0.954304f, 0.020589f, 0.298127f },
	{ -0.785559f, 0.039742f, -0.61751f },
	{ -0.957999f, 0, 0.286771f },
	{ -0.617303f, -0.130093f, 0.775895f },
	{ -0.487262f, -0.086335f, 0.868978f },
	{ -0.6332549f, -0.144168f, 0.760397f },
	{ -0.139045f, -0.006898f, -0.990262f },
	{ -0.144416f, 0.02694f, -0.98915f },
	{ -0.859629f, -0.211361f, -0.46515f },
	{ -0.880477f, -0.187275f, -0.435533f },
	{ 0.153319f, -0.018973f, -0.987995f },
	{ 0.156055f, 0, -0.987748f },
	{ -0.610929f, 0.787726f, 0.07907499f },
	{ -0.6629429f, 0.744132f, -0.082303f },
	{ -0.783227f, 0.6194699f, -0.053041f },
	{ -0.989631f, 0.09707399f, 0.10586f },
	{ -0.991722f, 0.04339f, -0.120851f },
	{ -0.9972039f, 0.04066f, -0.0627f },
	{ -0.995856f, -0.036235f, 0.083412f },
	{ -0.993991f, -0.017653f, -0.108027f },
	{ -0.9992509f, -0.027693f, -0.027046f },
	{ -0.997001f, 0.031409f, 0.070731f },
	{ -0.995419f, 0.025467f, -0.092159f },
	{ -0.999416f, 0.015822f, -0.030294f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00029B24 = { vertex_00029464, normal_000297C4, LengthOfArray(vertex_00029464), meshlist_000293D4, matlist_00028FD4, LengthOfArray(meshlist_000293D4), LengthOfArray(matlist_00028FD4),{ -16.62958f, 0.157814f, -12.45502f }, 154.7256f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00029B4C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00029B24, 333.2487f, 40.06f, 252.3587f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00029B80[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 51, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 54, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00029BE4[] = {
	0x8000u | 14, 9, 3, 8, 4, 20, 17, 19, 16, 21, 18, 7, 5, 1, 6
};

extern "C" __declspec(dllexport) Sint16 poly_00029C02[] = {
	0x8000u | 14, 0, 2, 11, 13, 24, 27, 22, 25, 23, 26, 10, 12, 14, 15,
	0x8000u | 14, 14, 9, 10, 8, 23, 20, 22, 19, 24, 21, 11, 7, 0, 1
};

extern "C" __declspec(dllexport) Sint16 poly_00029C3E[] = {
	0x8000u | 6, 6, 5, 4, 18, 17, 16,
	3, 4, 6, 3
};

extern "C" __declspec(dllexport) NJS_TEX uv_00029C54[] = {
	{ 6666, 255 },
	{ 6659, 0 },
	{ 6536, 255 },
	{ 6537, 0 },
	{ 6322, 255 },
	{ 6334, 0 },
	{ 6110, 255 },
	{ 6121, 0 },
	{ 5874, 255 },
	{ 5896, 0 },
	{ 5668, 255 },
	{ 5692, 0 },
	{ 5524, 255 },
	{ 5546, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00029C8C[] = {
	{ 741, 121 },
	{ 768, 253 },
	{ 851, 111 },
	{ 864, 253 },
	{ 987, 100 },
	{ 936, 253 },
	{ 1035, 104 },
	{ 1012, 255 },
	{ 1074, 115 },
	{ 1061, 254 },
	{ 1132, 94 },
	{ 1133, 253 },
	{ 1209, 111 },
	{ 1218, 253 },
	{ 1209, 111 },
	{ 1244, 0 },
	{ 1132, 94 },
	{ 1115, 0 },
	{ 1074, 115 },
	{ 1048, 0 },
	{ 1035, 104 },
	{ 1012, 0 },
	{ 987, 100 },
	{ 968, 0 },
	{ 851, 111 },
	{ 891, 1 },
	{ 741, 121 },
	{ 792, 1 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00029CFC[] = {
	{ 220, -255 },
	{ 71, -187 },
	{ 210, 181 },
	{ 157, -129 },
	{ 0, 104 },
	{ 0, -6 },
	{ 210, 181 },
	{ 220, -255 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00029D20[] = {
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00029BE4, NULL, NULL, NULL, uv_00029C54, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_00029C02, NULL, NULL, NULL, uv_00029C8C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_00029C3E, NULL, NULL, NULL, uv_00029CFC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00029D68[] = {
	{ -26.1915f, 1.626655f, -46.87392f },
	{ -29.96903f, 18.25292f, -42.1983f },
	{ -22.84856f, -29.56624f, -48.48996f },
	{ -27.2253f, 31.16779f, -81.75166f },
	{ -28.24791f, 28.47273f, -76.17796f },
	{ -31.47533f, 27.77589f, -47.97998f },
	{ -28.01687f, 31.16779f, -42.81955f },
	{ -34.17718f, 18.45742f, -45.85242f },
	{ -30.89589f, 18.25356f, -76.17796f },
	{ -27.82034f, 18.13243f, -81.46882f },
	{ -26.67419f, 1.626655f, -70.74929f },
	{ -28.4903f, 1.626655f, -49.90095f },
	{ -23.33574f, -29.56624f, -68.59053f },
	{ -24.90817f, -29.56624f, -51.84319f },
	{ -23.80997f, 1.626655f, -75.55148f },
	{ -20.75347f, -29.56624f, -73.18267f },
	{ -33.13192f, 27.77589f, -61.79454f },
	{ -33.13192f, 27.77589f, -70.2729f },
	{ -29.47813f, 28.47273f, -52.37794f },
	{ -35.07888f, 18.35549f, -61.99387f },
	{ -35.07888f, 18.30452f, -70.47224f },
	{ -32.26549f, 18.40646f, -52.37794f },
	{ -29.42963f, 1.626655f, -59.12963f },
	{ -29.42963f, 1.626655f, -66.92971f },
	{ -28.54397f, 1.626655f, -55.9092f },
	{ -26.61703f, -29.56624f, -61.44101f },
	{ -26.61703f, -29.56624f, -66.92971f },
	{ -24.96184f, -29.56624f, -58.09178f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00029EB8[] = {
	{ -0.754684f, -0.237213f, 0.6117049f },
	{ -0.771663f, 0.006997f, 0.6359929f },
	{ -0.818846f, -0.128863f, 0.559362f },
	{ -0.9064569f, 0.361384f, -0.218487f },
	{ -0.8356439f, 0.495147f, -0.237758f },
	{ -0.904992f, 0.419607f, 0.07013699f },
	{ -0.816126f, 0.484996f, 0.314195f },
	{ -0.967547f, -0.013498f, 0.252329f },
	{ -0.858467f, -0.07571699f, -0.50725f },
	{ -0.916945f, -0.043931f, -0.396587f },
	{ -0.781857f, -0.246072f, -0.572843f },
	{ -0.930253f, -0.238443f, 0.278879f },
	{ -0.77367f, -0.123538f, -0.621428f },
	{ -0.947988f, -0.127038f, 0.291857f },
	{ -0.83733f, -0.248581f, -0.486915f },
	{ -0.858663f, -0.121943f, -0.497823f },
	{ -0.724124f, 0.681119f, 0.108265f },
	{ -0.713722f, 0.66277f, -0.226578f },
	{ -0.875497f, 0.483077f, -0.011937f },
	{ -0.988906f, -0.052318f, 0.139021f },
	{ -0.945491f, -0.073782f, -0.317181f },
	{ -0.998783f, -0.045656f, 0.018663f },
	{ -0.964584f, -0.200514f, 0.171382f },
	{ -0.910444f, -0.247583f, -0.331352f },
	{ -0.970849f, -0.197346f, 0.13604f },
	{ -0.979046f, -0.101366f, 0.176615f },
	{ -0.904003f, -0.116281f, -0.41141f },
	{ -0.974889f, -0.11415f, 0.191209f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002A008 = { vertex_00029D68, normal_00029EB8, LengthOfArray(vertex_00029D68), meshlist_00029D20, matlist_00029B80, LengthOfArray(meshlist_00029D20), LengthOfArray(matlist_00029B80),{ -27.91617f, 0.800771f, -61.97498f }, 36.19881f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002A030 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002A008, 287.3808f, 28.78913f, 398.1236f, 0, 0x755, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002A064[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 51, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 54, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002A0C8[] = {
	0x8000u | 14, 9, 3, 8, 4, 20, 17, 19, 16, 21, 18, 7, 5, 1, 6
};

extern "C" __declspec(dllexport) Sint16 poly_0002A0E6[] = {
	0x8000u | 14, 0, 2, 11, 13, 24, 27, 22, 25, 23, 26, 10, 12, 14, 15,
	0x8000u | 14, 14, 9, 10, 8, 23, 20, 22, 19, 24, 21, 11, 7, 0, 1
};

extern "C" __declspec(dllexport) Sint16 poly_0002A122[] = {
	0x8000u | 6, 6, 5, 4, 18, 17, 16,
	3, 4, 6, 3
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002A138[] = {
	{ 6666, 255 },
	{ 6659, 0 },
	{ 6536, 255 },
	{ 6537, 0 },
	{ 6322, 255 },
	{ 6334, 0 },
	{ 6110, 255 },
	{ 6121, 0 },
	{ 5874, 255 },
	{ 5896, 0 },
	{ 5668, 255 },
	{ 5692, 0 },
	{ 5524, 255 },
	{ 5546, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002A170[] = {
	{ 741, 121 },
	{ 768, 253 },
	{ 851, 111 },
	{ 864, 253 },
	{ 987, 100 },
	{ 936, 253 },
	{ 1035, 104 },
	{ 1012, 255 },
	{ 1074, 115 },
	{ 1061, 254 },
	{ 1132, 94 },
	{ 1133, 253 },
	{ 1209, 111 },
	{ 1218, 253 },
	{ 1209, 111 },
	{ 1244, 0 },
	{ 1132, 94 },
	{ 1115, 0 },
	{ 1074, 115 },
	{ 1048, 0 },
	{ 1035, 104 },
	{ 1012, 0 },
	{ 987, 100 },
	{ 968, 0 },
	{ 851, 111 },
	{ 891, 1 },
	{ 741, 121 },
	{ 792, 1 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002A1E0[] = {
	{ 721, -765 },
	{ 89, -609 },
	{ 262, 127 },
	{ 196, -494 },
	{ 0, -26 },
	{ 0, -248 },
	{ 262, 127 },
	{ 721, -765 },
	{ 765, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002A204[] = {
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0002A0C8, NULL, NULL, NULL, uv_0002A138, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0002A0E6, NULL, NULL, NULL, uv_0002A170, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_0002A122, NULL, NULL, NULL, uv_0002A1E0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002A24C[] = {
	{ -26.1915f, 1.626655f, -46.87392f },
	{ -29.96903f, 18.25292f, -42.1983f },
	{ -22.84856f, -29.56624f, -48.48996f },
	{ -18.9321f, 31.16779f, -81.02613f },
	{ -28.24791f, 28.47273f, -76.17796f },
	{ -31.47533f, 27.77589f, -47.97998f },
	{ -19.72367f, 31.16779f, -42.09407f },
	{ -34.17718f, 18.45742f, -45.85242f },
	{ -30.89589f, 18.25356f, -76.17796f },
	{ -19.52714f, 18.13243f, -80.7433f },
	{ -26.67419f, 1.626655f, -70.74929f },
	{ -28.4903f, 1.626655f, -49.90095f },
	{ -23.33574f, -29.56624f, -68.59053f },
	{ -24.90817f, -29.56624f, -51.84319f },
	{ -23.80997f, 1.626655f, -75.55148f },
	{ -20.75347f, -29.56624f, -73.18267f },
	{ -33.13192f, 27.77589f, -61.79454f },
	{ -33.13192f, 27.77589f, -70.2729f },
	{ -29.47813f, 28.47273f, -52.37794f },
	{ -35.07888f, 18.35549f, -61.99387f },
	{ -35.07888f, 18.30452f, -70.47224f },
	{ -32.26549f, 18.40646f, -52.37794f },
	{ -29.42963f, 1.626655f, -59.12963f },
	{ -29.42963f, 1.626655f, -66.92971f },
	{ -28.54397f, 1.626655f, -55.9092f },
	{ -26.61703f, -29.56624f, -61.44101f },
	{ -26.61703f, -29.56624f, -66.92971f },
	{ -24.96184f, -29.56624f, -58.09178f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002A39C[] = {
	{ -0.754684f, -0.237213f, 0.6117049f },
	{ -0.636126f, 0.040204f, 0.770537f },
	{ -0.818846f, -0.128863f, 0.559362f },
	{ -0.45392f, 0.640342f, -0.619612f },
	{ -0.532858f, 0.647324f, -0.5450079f },
	{ -0.779027f, 0.593487f, 0.202212f },
	{ -0.438353f, 0.826434f, 0.353347f },
	{ -0.93754f, -0.018936f, 0.347361f },
	{ -0.666075f, -0.107663f, -0.7380739f },
	{ -0.476902f, -0.10769f, -0.8723339f },
	{ -0.71868f, -0.253342f, -0.6475469f },
	{ -0.930253f, -0.238443f, 0.278879f },
	{ -0.77367f, -0.123538f, -0.621428f },
	{ -0.947988f, -0.127038f, 0.291857f },
	{ -0.687553f, -0.275371f, -0.671894f },
	{ -0.858663f, -0.121943f, -0.497823f },
	{ -0.724124f, 0.681119f, 0.108265f },
	{ -0.713722f, 0.66277f, -0.226578f },
	{ -0.685692f, 0.727892f, 0.000509f },
	{ -0.988906f, -0.052318f, 0.139021f },
	{ -0.945491f, -0.073782f, -0.317181f },
	{ -0.998783f, -0.045656f, 0.018663f },
	{ -0.964584f, -0.200514f, 0.171382f },
	{ -0.910444f, -0.247583f, -0.331352f },
	{ -0.970849f, -0.197346f, 0.13604f },
	{ -0.979046f, -0.101366f, 0.176615f },
	{ -0.904003f, -0.116281f, -0.41141f },
	{ -0.974889f, -0.11415f, 0.191209f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002A4EC = { vertex_0002A24C, normal_0002A39C, LengthOfArray(vertex_0002A24C), meshlist_0002A204, matlist_0002A064, LengthOfArray(meshlist_0002A204), LengthOfArray(matlist_0002A064),{ -27.00549f, 0.800771f, -61.5601f }, 32.39753f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002A514 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002A4EC, 367.2502f, 22.83627f, 175.5229f, 0, 0x3701, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002A548[] = {
	{ { 0xCCB2B2B2 },{ 0xFFFFFFFF }, 11, 55, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002A55C[] = {
	6, 8, 7, 4, 3, 1, 0,
	6, 1, 2, 4, 5, 8, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002A578[] = {
	{ 12749, -6085 },
	{ 12750, 254 },
	{ 6298, -6152 },
	{ 6298, 254 },
	{ 0, -6152 },
	{ 0, 255 },
	{ 0, -6152 },
	{ 0, -12494 },
	{ 6298, -6152 },
	{ 6298, -12494 },
	{ 12749, -6085 },
	{ 12749, -12495 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002A5A8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0002A55C, NULL, NULL, NULL, uv_0002A578, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002A5C0[] = {
	{ -811.287f, -0.00017f, -808.9822f },
	{ -811.287f, -0.00017f, 4.321967f },
	{ -811.2871f, -0.00017f, 808.9824f },
	{ -9.719121f, -0.00017f, -808.9822f },
	{ -9.719216f, -0.00017f, 4.322019f },
	{ -9.719315f, -0.00017f, 808.9824f },
	{ 811.2866f, -0.00017f, 808.9825f },
	{ 811.2867f, -0.00017f, -808.9821f },
	{ 811.2866f, -0.00017f, -4.321991f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002A62C[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002A698 = { vertex_0002A5C0, normal_0002A62C, LengthOfArray(vertex_0002A5C0), meshlist_0002A5A8, matlist_0002A548, LengthOfArray(meshlist_0002A5A8), LengthOfArray(matlist_0002A548),{ -0.000214f, -0.00017f, 0.000122f }, 1620.077f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002A6C0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002A698, -156.2123f, -0.5f, 153.2003f, 0, 0x1F5F, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002A8BC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002A8E4[] = {
	0x8000u | 6, 1, 3, 5, 7, 9, 8,
	4, 6, 13, 4, 14,
	4, 2, 6, 0, 4,
	4, 13, 8, 12, 15,
	4, 7, 6, 3, 2,
	4, 14, 13, 10, 12,
	4, 0, 10, 2, 12,
	4, 3, 15, 1, 11,
	4, 9, 11, 8, 15
};

extern "C" __declspec(dllexport) Sint16 poly_0002A942[] = {
	4, 2, 12, 3, 15,
	4, 7, 8, 6, 13
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002A958[] = {
	{ 0, 255 },
	{ 2, -1020 },
	{ 254, 254 },
	{ 254, -1019 },
	{ 237, 254 },
	{ 238, -924 },
	{ 0, -1019 },
	{ 16, -924 },
	{ 0, 254 },
	{ 17, 254 },
	{ 2, -1020 },
	{ 254, -1019 },
	{ 0, 255 },
	{ 254, 254 },
	{ 251, 91 },
	{ 251, -2130 },
	{ 0, 91 },
	{ 0, -2130 },
	{ 254, -2294 },
	{ 254, 255 },
	{ 0, -2289 },
	{ 0, 250 },
	{ 255, 254 },
	{ 251, -924 },
	{ 0, 255 },
	{ 2, -924 },
	{ 0, 255 },
	{ 17, 255 },
	{ 0, -1020 },
	{ 16, -924 },
	{ 254, -1020 },
	{ 238, -924 },
	{ 254, 255 },
	{ 237, 255 },
	{ 255, 254 },
	{ 0, 255 },
	{ 251, -924 },
	{ 2, -924 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002A9F0[] = {
	{ 254, -2290 },
	{ -4, -2131 },
	{ 254, 249 },
	{ -4, 90 },
	{ 253, 255 },
	{ -4, 90 },
	{ 253, -2294 },
	{ -4, -2131 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002AA10[] = {
	{ NJD_MESHSET_TRIMESH | 0, 9, poly_0002A8E4, NULL, NULL, NULL, uv_0002A958, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0002A942, NULL, NULL, NULL, uv_0002A9F0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002AA40[] = {
	{ -4.551683f, -19.35594f, -46.62647f },
	{ -4.551683f, -19.35594f, 46.62647f },
	{ -4.487936f, 20.66571f, -46.56633f },
	{ -4.487936f, 20.66571f, 46.56633f },
	{ 2.608723f, -19.34031f, -46.82669f },
	{ 2.608723f, -19.34031f, 46.82662f },
	{ 2.604248f, 20.65391f, -46.73245f },
	{ 2.606796f, 20.65206f, 46.78284f },
	{ 2.500715f, 17.66952f, 40.74554f },
	{ 2.611178f, -19.33826f, 40.54476f },
	{ -4.551683f, -19.35594f, -40.54476f },
	{ -4.551683f, -19.35594f, 40.54476f },
	{ -4.487936f, 17.66952f, -40.74554f },
	{ 2.500715f, 17.66952f, -40.74554f },
	{ 2.611178f, -19.33826f, -40.54476f },
	{ -4.487936f, 17.66952f, 40.74554f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002AB00[] = {
	{ -0.716756f, 0.002189f, -0.697321f },
	{ -0.717981f, 0.001872f, 0.6960599f },
	{ -0.583491f, 0.579428f, -0.569035f },
	{ -0.584071f, 0.580333f, 0.567517f },
	{ 0.6998129f, 0.001178f, -0.714325f },
	{ 0.698882f, 0.000817f, 0.7152359f },
	{ 0.574181f, 0.573436f, -0.5843689f },
	{ 0.573461f, 0.572332f, 0.586155f },
	{ 0.899044f, -0.315782f, -0.303316f },
	{ 0.703091f, 0.003853f, -0.71109f },
	{ -0.706688f, 0.004961f, 0.707508f },
	{ -0.7066849f, 0.004962f, -0.7075109f },
	{ -0.905206f, -0.299124f, 0.301871f },
	{ 0.899081f, -0.31575f, 0.303243f },
	{ 0.703145f, 0.00389f, 0.711036f },
	{ -0.905206f, -0.299124f, -0.301872f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002ABC0 = { vertex_0002AA40, normal_0002AB00, LengthOfArray(vertex_0002AA40), meshlist_0002AA10, matlist_0002A8BC, LengthOfArray(meshlist_0002AA10), LengthOfArray(matlist_0002A8BC),{ -0.970252f, 0.6548859f, -0.00036f }, 50.92316f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002ABE8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002ABC0, 187.5583f, 81.11263f, -39.00063f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002AC1C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002AC30[] = {
	4, 0, 1, 3, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002AC3C[] = {
	{ 0 },
	{ 5, 255 },
	{ 2040, 0 },
	{ 2032, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002AC4C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0002AC30, NULL, NULL, NULL, uv_0002AC3C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002AC64[] = {
	{ -0.039394f, 16.32207f, -41.32719f },
	{ -0.07002299f, -0.02876f, -41.12642f },
	{ -0.07002299f, -0.02876f, 39.96311f },
	{ -0.039394f, 16.32207f, 40.16389f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002AC94[] = {
	{ -0.999998f, 0.001873f, 0 },
	{ -0.999998f, 0.001873f, 0 },
	{ -0.999998f, 0.001873f, 0 },
	{ -0.999998f, 0.001873f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002ACC4 = { vertex_0002AC64, normal_0002AC94, LengthOfArray(vertex_0002AC64), meshlist_0002AC4C, matlist_0002AC1C, LengthOfArray(meshlist_0002AC4C), LengthOfArray(matlist_0002AC1C),{ -0.054708f, 8.146655f, -0.581652f }, 41.55763f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002ACEC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002ACC4, 190.163f, 83.86366f, -38.41941f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002AD20[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 14, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 16, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002ADD4[] = {
	4, 16, 17, 15, 14
};

extern "C" __declspec(dllexport) Sint16 poly_0002ADDE[] = {
	4, 13, 12, 14, 15
};

extern "C" __declspec(dllexport) Sint16 poly_0002ADE8[] = {
	4, 11, 10, 13, 12
};

extern "C" __declspec(dllexport) Sint16 poly_0002ADF2[] = {
	4, 9, 8, 11, 10
};

extern "C" __declspec(dllexport) Sint16 poly_0002ADFC[] = {
	4, 7, 6, 9, 8
};

extern "C" __declspec(dllexport) Sint16 poly_0002AE06[] = {
	4, 5, 4, 7, 6
};

extern "C" __declspec(dllexport) Sint16 poly_0002AE10[] = {
	4, 1, 0, 5, 4
};

extern "C" __declspec(dllexport) Sint16 poly_0002AE1A[] = {
	4, 2, 3, 1, 0
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002AE24[] = {
	{ 249, 255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 0, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002AE34[] = {
	{ 0, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002AE44[] = {
	{ 0, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002AE54[] = {
	{ 0, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002AE64[] = {
	{ 0, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002AE74[] = {
	{ 0, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002AE84[] = {
	{ 0, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002AE94[] = {
	{ 0, -255 },
	{ 5, 255 },
	{ 255, -255 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002AEA4[] = {
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0002ADD4, NULL, NULL, NULL, uv_0002AE24, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0002ADDE, NULL, NULL, NULL, uv_0002AE34, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_0002ADE8, NULL, NULL, NULL, uv_0002AE44, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_0002ADF2, NULL, NULL, NULL, uv_0002AE54, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_0002ADFC, NULL, NULL, NULL, uv_0002AE64, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 1, poly_0002AE06, NULL, NULL, NULL, uv_0002AE74, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 1, poly_0002AE10, NULL, NULL, NULL, uv_0002AE84, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 1, poly_0002AE1A, NULL, NULL, NULL, uv_0002AE94, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002AF64[] = {
	{ -0.07002299f, -0.02876f, -31.14081f },
	{ -0.180481f, 21.96553f, -31.14081f },
	{ -0.180481f, 21.96553f, -41.32719f },
	{ -0.07002299f, -0.02876f, -41.12642f },
	{ -0.07002299f, -0.02876f, -20.95442f },
	{ -0.180481f, 21.96553f, -20.95442f },
	{ -0.07002299f, -0.02876f, -10.76804f },
	{ -0.180481f, 21.96553f, -10.76804f },
	{ -0.07002299f, -0.02876f, -0.58165f },
	{ -0.180481f, 21.96553f, -0.58165f },
	{ -0.07002299f, -0.02876f, 9.604735f },
	{ -0.180481f, 21.96553f, 9.604735f },
	{ -0.07002299f, -0.02876f, 19.79112f },
	{ -0.180481f, 21.96553f, 19.79112f },
	{ -0.180481f, 21.96553f, 29.97751f },
	{ -0.07002299f, -0.02876f, 29.97751f },
	{ -0.07002299f, -0.02876f, 39.96311f },
	{ -0.180481f, 21.96553f, 40.16389f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002B03C[] = {
	{ -0.9999869f, -0.005022f, 0 },
	{ -0.9999869f, -0.005022f, 0 },
	{ -0.9999869f, -0.005022f, 0 },
	{ -0.9999869f, -0.005022f, 0 },
	{ -0.9999869f, -0.005022f, 0 },
	{ -0.9999869f, -0.005022f, 0 },
	{ -0.9999869f, -0.005022f, 0 },
	{ -0.9999869f, -0.005022f, 0 },
	{ -0.9999869f, -0.005022f, 0 },
	{ -0.9999869f, -0.005022f, 0 },
	{ -0.9999869f, -0.005022f, 0 },
	{ -0.9999869f, -0.005022f, 0 },
	{ -0.9999869f, -0.005022f, 0 },
	{ -0.9999869f, -0.005022f, 0 },
	{ -0.9999869f, -0.005022f, 0 },
	{ -0.9999869f, -0.005022f, 0 },
	{ -0.9999869f, -0.005022f, 0 },
	{ -0.9999869f, -0.005022f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002B114 = { vertex_0002AF64, normal_0002B03C, LengthOfArray(vertex_0002AF64), meshlist_0002AEA4, matlist_0002AD20, LengthOfArray(meshlist_0002AEA4), LengthOfArray(matlist_0002AD20),{ -0.125252f, 10.96839f, -0.581652f }, 42.20351f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002B13C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002B114, 190.2395f, 61.80314f, -38.41898f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002B170[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 52, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002B184[] = {
	10, 0, 6, 83, 4, 5, 7, 84, 111, 110, 9,
	0x8000u | 7, 83, 0, 1, 3, 2, 28, 82,
	0x8000u | 11, 116, 13, 86, 14, 11, 10, 85, 12, 9, 8, 111,
	4, 13, 108, 16, 15,
	3, 19, 18, 109,
	0x8000u | 5, 109, 17, 18, 15, 16,
	7, 20, 23, 24, 27, 88, 25, 26,
	7, 24, 21, 20, 87, 22, 117, 19,
	12, 107, 30, 31, 34, 35, 37, 106, 39, 94, 93, 22, 20,
	0x8000u | 27, 33, 32, 29, 53, 95, 50, 96, 49, 97, 56, 98, 55, 99, 112, 115, 59, 100, 75, 101, 63, 102, 62, 103, 77, 104, 68, 105,
	0x8000u | 29, 36, 33, 30, 29, 107, 95, 13, 96, 14, 97, 10, 98, 12, 99, 8, 115, 111, 100, 7, 101, 4, 102, 6, 103, 0, 104, 3, 105, 28,
	12, 30, 36, 34, 38, 37, 41, 39, 42, 40, 74, 73, 45,
	0x8000u | 8, 23, 27, 91, 90, 43, 44, 46, 72,
	0x8000u | 8, 46, 45, 43, 73, 91, 92, 23, 20,
	0x8000u | 14, 113, 114, 60, 61, 76, 67, 65, 80, 64, 66, 78, 79, 69, 70,
	0x8000u | 25, 69, 68, 78, 77, 64, 62, 65, 63, 76, 75, 60, 59, 113, 112, 57, 55, 58, 56, 51, 49, 52, 50, 54, 53, 32,
	6, 17, 15, 31, 108, 107, 13,
	8, 31, 35, 17, 106, 109, 94, 19, 22,
	7, 72, 71, 44, 89, 90, 25, 27,
	5, 20, 93, 92, 40, 73,
	0x8000u | 6, 72, 48, 46, 81, 45, 47,
	3, 39, 40, 93
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002B370[] = {
	{ -212, -613 },
	{ -207, -616 },
	{ -208, -709 },
	{ -163, -664 },
	{ -193, -753 },
	{ -145, -673 },
	{ -183, -757 },
	{ -164, -657 },
	{ -199, -689 },
	{ -266, -745 },
	{ -208, -709 },
	{ -212, -613 },
	{ -219, -689 },
	{ -298, -573 },
	{ -302, -689 },
	{ -310, -573 },
	{ -314, -632 },
	{ -424, -684 },
	{ -498, -593 },
	{ -398, -713 },
	{ -366, -652 },
	{ -370, -745 },
	{ -346, -668 },
	{ -332, -765 },
	{ -302, -677 },
	{ -266, -745 },
	{ -219, -677 },
	{ -164, -657 },
	{ -498, -593 },
	{ -521, -533 },
	{ -625, -564 },
	{ -617, -508 },
	{ 637, -593 },
	{ 661, -564 },
	{ 617, -537 },
	{ 617, -537 },
	{ 608, -517 },
	{ 661, -564 },
	{ 908, -508 },
	{ 900, -564 },
	{ 609, -605 },
	{ 589, -617 },
	{ 629, -689 },
	{ 589, -617 },
	{ 625, -677 },
	{ 625, -605 },
	{ 637, -636 },
	{ 629, -689 },
	{ 644, -689 },
	{ 609, -605 },
	{ 653, -672 },
	{ 625, -605 },
	{ 657, -645 },
	{ 637, -593 },
	{ 828, -85 },
	{ 757, 34 },
	{ 761, -65 },
	{ 580, 35 },
	{ 581, -54 },
	{ 549, 27 },
	{ 537, -72 },
	{ 438, 33 },
	{ 444, -77 },
	{ 354, -65 },
	{ 328, -255 },
	{ 290, -255 },
	{ 760, 255 },
	{ 812, 255 },
	{ 816, 21 },
	{ 947, 32 },
	{ 948, -83 },
	{ 1004, 57 },
	{ 1024, -45 },
	{ 1107, 63 },
	{ 1112, -38 },
	{ 1204, 61 },
	{ 1187, -37 },
	{ 1279, 59 },
	{ 1283, -36 },
	{ 1424, 60 },
	{ 1432, -49 },
	{ 1545, 66 },
	{ 1553, -42 },
	{ 1587, 63 },
	{ 1625, -51 },
	{ 1680, 38 },
	{ 1705, -77 },
	{ 1742, 36 },
	{ 1750, -84 },
	{ 1950, 20 },
	{ 1976, -108 },
	{ 2040, 23 },
	{ 2040, -107 },
	{ 657, 255 },
	{ 760, 255 },
	{ 757, 34 },
	{ 816, 21 },
	{ 828, -85 },
	{ 948, -83 },
	{ 948, -255 },
	{ 1024, -45 },
	{ 1082, -255 },
	{ 1112, -38 },
	{ 1131, -255 },
	{ 1187, -37 },
	{ 1187, -255 },
	{ 1283, -36 },
	{ 1298, -255 },
	{ 1432, -49 },
	{ 1444, -255 },
	{ 1553, -42 },
	{ 1569, -255 },
	{ 1625, -51 },
	{ 1626, -255 },
	{ 1705, -77 },
	{ 1761, -255 },
	{ 1750, -84 },
	{ 1777, -255 },
	{ 1976, -108 },
	{ 2008, -255 },
	{ 2040, -107 },
	{ 2040, -255 },
	{ 757, 34 },
	{ 657, 255 },
	{ 580, 35 },
	{ 597, 255 },
	{ 549, 27 },
	{ 504, 255 },
	{ 438, 33 },
	{ 446, 255 },
	{ 366, 37 },
	{ 312, 255 },
	{ 282, 37 },
	{ 208, 255 },
	{ 213, -255 },
	{ 175, -255 },
	{ 207, -69 },
	{ 151, -72 },
	{ 201, 39 },
	{ 127, 46 },
	{ 108, 255 },
	{ 0, 255 },
	{ 108, 255 },
	{ 208, 255 },
	{ 201, 39 },
	{ 282, 37 },
	{ 207, -69 },
	{ 288, -75 },
	{ 213, -255 },
	{ 290, -255 },
	{ 1833, -508 },
	{ 1809, 255 },
	{ 2048, -508 },
	{ 2002, 239 },
	{ 1809, -508 },
	{ 1887, 255 },
	{ 1561, -508 },
	{ 1654, 255 },
	{ 1354, -508 },
	{ 1431, 255 },
	{ 653, -508 },
	{ 672, 255 },
	{ 187, -508 },
	{ 0, 255 },
	{ 2040, 255 },
	{ 2040, 23 },
	{ 1934, 255 },
	{ 1950, 20 },
	{ 1723, 255 },
	{ 1742, 36 },
	{ 1665, 255 },
	{ 1680, 38 },
	{ 1558, 255 },
	{ 1587, 63 },
	{ 1490, 255 },
	{ 1545, 66 },
	{ 1385, 255 },
	{ 1424, 60 },
	{ 1267, 255 },
	{ 1279, 59 },
	{ 1205, 255 },
	{ 1204, 61 },
	{ 1080, 255 },
	{ 1107, 63 },
	{ 984, 255 },
	{ 1004, 57 },
	{ 936, 255 },
	{ 947, 32 },
	{ 812, 255 },
	{ 601, -255 },
	{ 780, -255 },
	{ 761, -65 },
	{ 844, -255 },
	{ 828, -85 },
	{ 948, -255 },
	{ 761, -65 },
	{ 581, -54 },
	{ 601, -255 },
	{ 537, -72 },
	{ 533, -255 },
	{ 444, -77 },
	{ 430, -255 },
	{ 328, -255 },
	{ 0, 255 },
	{ 0, 41 },
	{ 127, 46 },
	{ 0, -76 },
	{ 151, -72 },
	{ 0, -255 },
	{ 175, -255 },
	{ 290, -255 },
	{ 354, -65 },
	{ 288, -75 },
	{ 366, 37 },
	{ 282, 37 },
	{ 596, -135 },
	{ 568, 255 },
	{ 565, -135 },
	{ 537, 255 },
	{ 532, -135 },
	{ 529, 255 },
	{ 438, 33 },
	{ 366, 37 },
	{ 354, -65 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002B6F0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 22, poly_0002B184, NULL, NULL, NULL, uv_0002B370, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002B708[] = {
	{ 14.39549f, 109.7653f, -74.65887f },
	{ 19.54996f, 124.4472f, -69.29999f },
	{ 50.35f, 124.4472f, -65.45003f },
	{ 48.79082f, 101.9286f, -68.39514f },
	{ 1.41749f, 119.4664f, -58.55188f },
	{ 12.70671f, 137.0172f, -60.71812f },
	{ 12.83919f, 110.1181f, -73.0256f },
	{ -0.662093f, 121.6381f, -50.11356f },
	{ 34.5663f, 122.0096f, -28.81578f },
	{ 42.42979f, 135.6904f, -40.23748f },
	{ 58.23573f, 120.3812f, -20.96426f },
	{ 65.52979f, 135.6904f, -32.53749f },
	{ 51.08569f, 122.1732f, -25.10409f },
	{ 73.45f, 105.7616f, -3.85f },
	{ 59.9311f, 117.1154f, -13.92367f },
	{ 65.08507f, 89.16348f, 13.56345f },
	{ 71.53986f, 99.91472f, 12.32405f },
	{ 68.11704f, 90.94395f, 40.80201f },
	{ 75.69788f, 99.91472f, 39.27403f },
	{ 84.54999f, 105.7616f, 53.90001f },
	{ 91.51665f, 108.3433f, 73.31374f },
	{ 103.0576f, 124.4472f, 72.12791f },
	{ 92.21165f, 108.0219f, 67.7086f },
	{ 91.64273f, 110.5902f, 85.08664f },
	{ 103.7836f, 124.4472f, 79.32216f },
	{ 118.9582f, 108.3456f, 101.2971f },
	{ 118.7087f, 114.0873f, 92.39234f },
	{ 94.38684f, 110.2686f, 90.35668f },
	{ 53.28534f, 102.1619f, -69.11732f },
	{ 87.18334f, 56.01647f, 6.887585f },
	{ 93.83184f, 55.46279f, 13.90931f },
	{ 96.91519f, 73.84608f, 11.98482f },
	{ 91.25351f, 16.24093f, 9.029524f },
	{ 88.82508f, 14.7428f, 18.55083f },
	{ 97.84351f, 55.46279f, 42.85298f },
	{ 100.8857f, 71.91513f, 40.07171f },
	{ 92.91245f, 14.7428f, 37.07758f },
	{ 97.63565f, 55.73963f, 47.73933f },
	{ 99.87447f, 16.24093f, 45.51077f },
	{ 85.70297f, 55.46279f, 61.31082f },
	{ 93.2552f, 55.46279f, 70.58482f },
	{ 89.8199f, 16.24093f, 60.13258f },
	{ 96.79367f, 16.24093f, 68.69624f },
	{ 88.23755f, 55.46279f, 96.41274f },
	{ 94.05831f, 55.46279f, 107.1014f },
	{ 79.14337f, 16.24093f, 106.8398f },
	{ 96.63691f, 16.24093f, 113.2365f },
	{ 81.79536f, -60, 119.051f },
	{ 109.7301f, -60, 140.351f },
	{ 54.59341f, 55.46279f, -24.37009f },
	{ 62.21755f, 55.46279f, -9.348634f },
	{ 57.88396f, 16.24093f, -26.39999f },
	{ 66.07294f, 16.24093f, -10.61424f },
	{ 68.24216f, 55.46279f, -2.095486f },
	{ 71.63612f, 16.24093f, -3.916635f },
	{ 28.00727f, 55.46279f, -33.23167f },
	{ 39.4336f, 55.46279f, -29.42293f },
	{ 31.03632f, 16.24093f, -47.30878f },
	{ 41.58748f, 16.24093f, -43.79176f },
	{ -6.508359f, 55.46279f, -57.53782f },
	{ -7.926285f, 16.24093f, -54.48244f },
	{ -11.98702f, -58.50122f, -62.29543f },
	{ 9.255445f, 55.46279f, -82.8213f },
	{ 2.060185f, 55.46279f, -75.62464f },
	{ 4.019894f, 16.24093f, -94.92077f },
	{ -3.773168f, 16.24093f, -87.12643f },
	{ -5.104603f, -60, -105.3138f },
	{ -15, -60, -75 },
	{ 55.97372f, 55.46279f, -75.02991f },
	{ 60.30744f, 16.24093f, -77.77521f },
	{ 70, -60, -90 },
	{ 113.4414f, 55.46279f, 114.5508f },
	{ 115.7865f, 16.24093f, 120.1154f },
	{ 88.2322f, 55.46279f, 83.14285f },
	{ 80.15936f, 16.24093f, 87.31185f },
	{ -7.806523f, 55.46279f, -64.52317f },
	{ -5.098126f, 16.24093f, -66.92431f },
	{ 41.55709f, 55.46279f, -72.62769f },
	{ 41.06743f, 16.24093f, -82.4336f },
	{ 40, -60, -85 },
	{ -14.35601f, -60, -96.06239f },
	{ 90.6565f, -60, 135.3219f },
	{ 54.40411f, 113.2106f, -68.5418f },
	{ 16.25159f, 128.334f, -66.00161f },
	{ 12.88057f, 138.0574f, -52.77549f },
	{ 57.6682f, 139.1588f, -37.07257f },
	{ 69.86838f, 129.586f, -28.00658f },
	{ 98.73006f, 121.0949f, 63.8742f },
	{ 106.8065f, 122.5459f, 86.22935f },
	{ 118.2236f, 75.83679f, 107.5618f },
	{ 96.46174f, 76.20984f, 98.04178f },
	{ 92.23272f, 75.10607f, 90.40556f },
	{ 92.16402f, 75.34246f, 77.53638f },
	{ 95.99219f, 73.78796f, 68.19947f },
	{ 87.94741f, 74.54812f, 56.59825f },
	{ 72.91334f, 75.29691f, -4.642372f },
	{ 64.37455f, 75.65939f, -12.9068f },
	{ 58.7005f, 75.98115f, -25.38837f },
	{ 47.30062f, 75.43705f, -29.28064f },
	{ 33.00573f, 75.5889f, -34.03262f },
	{ -4.381149f, 77.75347f, -53.68295f },
	{ -1.738433f, 78.26215f, -64.36782f },
	{ 7.142509f, 76.85735f, -72.93683f },
	{ 12.19043f, 77.59467f, -77.86839f },
	{ 47.23074f, 77.0336f, -72.30376f },
	{ 56.95706f, 77.70254f, -73.81829f },
	{ 97.94633f, 73.1862f, 45.82922f },
	{ 88.11f, 74.37832f, 5.885059f },
	{ 67.03556f, 94.29169f, 5.214406f },
	{ 74.83696f, 94.90492f, 48.25626f },
	{ 22.4538f, 124.4472f, -44.73171f },
	{ 14.5617f, 118.3919f, -38.93672f },
	{ 6.229611f, 55.46279f, -42.46266f },
	{ 9.011842f, 16.24093f, -44.63866f },
	{ 8.661078f, -60, -46.53556f },
	{ 11.92148f, 76.9613f, -43.27452f },
	{ 72.99527f, 123.4635f, -22.79509f },
	{ 93.82986f, 116.1069f, 57.07506f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002BC90[] = {
	{ -0.233914f, 0.222301f, -0.946502f },
	{ -0.13802f, 0.320802f, -0.937036f },
	{ 0.015271f, 0.183568f, -0.982888f },
	{ -0.046003f, 0.15057f, -0.987529f },
	{ -0.841972f, 0.281574f, -0.460216f },
	{ -0.779215f, 0.446988f, -0.439346f },
	{ -0.610427f, 0.243959f, -0.753567f },
	{ -0.830672f, 0.429015f, 0.354866f },
	{ -0.408511f, 0.381601f, 0.829156f },
	{ -0.326884f, 0.73102f, 0.598963f },
	{ -0.5241989f, 0.394374f, 0.754775f },
	{ -0.229272f, 0.6541319f, 0.720796f },
	{ -0.308788f, 0.364771f, 0.8784029f },
	{ -0.6752329f, 0.216805f, 0.705022f },
	{ -0.588958f, 0.41204f, 0.695235f },
	{ -0.92748f, -0.37352f, 0.016228f },
	{ -0.8247409f, 0.555497f, 0.105945f },
	{ -0.930598f, -0.244849f, 0.272097f },
	{ -0.760242f, 0.624368f, 0.179436f },
	{ -0.925406f, 0.198444f, 0.322869f },
	{ -0.959255f, 0.2825f, 0.004839f },
	{ -0.788303f, 0.611334f, 0.069642f },
	{ -0.93529f, 0.306713f, 0.176523f },
	{ -0.8879279f, 0.377529f, 0.262786f },
	{ -0.709235f, 0.668209f, 0.224686f },
	{ -0.25989f, 0.492328f, 0.830704f },
	{ -0.015089f, 0.840151f, 0.542143f },
	{ -0.611233f, 0.459515f, 0.6443909f },
	{ -0.26306f, 0.144762f, -0.9538569f },
	{ -0.661352f, 0.143655f, 0.736191f },
	{ -0.923841f, 0.165978f, 0.344918f },
	{ -0.863455f, -0.392215f, 0.317194f },
	{ -0.80789f, 0.085158f, 0.5831479f },
	{ -0.970813f, 0.117962f, 0.208824f },
	{ -0.988693f, 0.083655f, 0.124454f },
	{ -0.940572f, -0.334767f, 0.057054f },
	{ -0.955492f, 0.023722f, 0.294063f },
	{ -0.939777f, -0.027847f, -0.340651f },
	{ -0.9953409f, -0.083616f, -0.047999f },
	{ -0.9988919f, 0.003951f, 0.046903f },
	{ -0.9930969f, 0.093577f, 0.070719f },
	{ -0.994539f, -0.104365f, -0.000904f },
	{ -0.9983529f, 0.001684f, 0.057339f },
	{ -0.918068f, 0.22357f, 0.327365f },
	{ -0.537208f, 0.229112f, 0.811736f },
	{ -0.8005f, 0.144227f, 0.58172f },
	{ -0.472995f, 0.143249f, 0.869342f },
	{ -0.648926f, 0.09827f, 0.754479f },
	{ -0.286642f, 0.266977f, 0.920087f },
	{ -0.695559f, 0.028137f, 0.717918f },
	{ -0.8328f, 0.053572f, 0.550976f },
	{ -0.753466f, -0.098864f, 0.6500109f },
	{ -0.829265f, -0.09926099f, 0.54997f },
	{ -0.645948f, 0.08567999f, 0.758558f },
	{ -0.638173f, -0.049679f, 0.768288f },
	{ -0.297871f, -0.111313f, 0.948094f },
	{ -0.388792f, -0.049668f, 0.9199859f },
	{ -0.220785f, -0.344535f, 0.912441f },
	{ -0.432778f, -0.2327f, 0.87095f },
	{ -0.921218f, 0.055169f, 0.385115f },
	{ -0.893582f, 0.000741f, 0.4489f },
	{ -0.902259f, 0.050278f, 0.428254f },
	{ -0.223938f, 0.254398f, -0.940815f },
	{ -0.78324f, 0.179928f, -0.595114f },
	{ -0.200386f, 0.211589f, -0.956596f },
	{ -0.8694929f, 0.160998f, -0.466971f },
	{ -0.227345f, 0.126928f, -0.965507f },
	{ -0.9909599f, 0.131511f, -0.026523f },
	{ -0.04713f, 0.15437f, -0.986888f },
	{ 0.027075f, 0.197348f, -0.97996f },
	{ -0.006851f, 0.157469f, -0.9875f },
	{ -0.341823f, 0.254057f, 0.904772f },
	{ -0.316454f, 0.192878f, 0.928792f },
	{ -0.956012f, 0.160341f, -0.245625f },
	{ -0.943285f, 0.176138f, -0.281404f },
	{ -0.970278f, 0.09571899f, -0.222259f },
	{ -0.990918f, 0.061683f, -0.119482f },
	{ 0.145671f, 0.151709f, -0.977632f },
	{ 0.187296f, 0.170877f, -0.967327f },
	{ 0.187871f, 0.092958f, -0.977785f },
	{ -0.897142f, 0.167572f, -0.408724f },
	{ -0.465941f, 0.193141f, 0.863479f },
	{ -0.357633f, 0.125587f, -0.925379f },
	{ -0.5527509f, 0.328856f, -0.7657149f },
	{ -0.603404f, 0.757495f, 0.24921f },
	{ -0.211766f, 0.673394f, 0.7083049f },
	{ -0.171212f, 0.694151f, 0.6991709f },
	{ -0.7941909f, 0.59394f, 0.128437f },
	{ -0.3243f, 0.803908f, 0.498559f },
	{ -0.361147f, 0.289409f, 0.886462f },
	{ -0.651384f, 0.249799f, 0.716449f },
	{ -0.961013f, 0.144957f, 0.23546f },
	{ -0.990683f, 0.040496f, -0.130026f },
	{ -0.981779f, 0.052463f, 0.182644f },
	{ -0.992528f, -0.023127f, 0.119807f },
	{ -0.712174f, 0.108789f, 0.693522f },
	{ -0.834532f, 0.082067f, 0.544814f },
	{ -0.744095f, 0.044734f, 0.6665739f },
	{ -0.336918f, 0.021692f, 0.9412839f },
	{ -0.341908f, 0.023657f, 0.939436f },
	{ -0.918873f, 0.092209f, 0.383627f },
	{ -0.901908f, 0.170134f, -0.397008f },
	{ -0.713778f, 0.186804f, -0.675f },
	{ -0.251806f, 0.14995f, -0.95609f },
	{ 0.028977f, 0.09742799f, -0.994821f },
	{ -0.164636f, 0.111132f, -0.980074f },
	{ -0.92878f, -0.355013f, -0.106458f },
	{ -0.771436f, -0.300996f, 0.560614f },
	{ -0.982974f, 0.0598f, 0.173739f },
	{ -0.9471869f, 0.049978f, 0.316764f },
	{ -0.326047f, 0.772383f, 0.545085f },
	{ -0.438492f, 0.342457f, 0.830932f },
	{ -0.522944f, -0.056112f, 0.850518f },
	{ -0.457613f, -0.172545f, 0.8722489f },
	{ -0.563629f, -0.055529f, 0.824159f },
	{ -0.548112f, 0.031693f, 0.835804f },
	{ 0.142246f, 0.7249449f, 0.673959f },
	{ -0.757656f, 0.602973f, 0.249763f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002C218 = { vertex_0002B708, normal_0002BC90, LengthOfArray(vertex_0002B708), meshlist_0002B6F0, matlist_0002B170, LengthOfArray(meshlist_0002B6F0), LengthOfArray(matlist_0002B170),{ 51.97911f, 39.57942f, 17.51862f }, 158.1261f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002C240 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002C218, 308.4489f, 60.06f, 171.7587f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002C274[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 33, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 36, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 36, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 36, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 33, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 33, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002C274X[] = {
	{ { 0xE5B2B2B2 },{ 0xFFFFFFFF }, 11, 34, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002C300[] = {
	0x8000u | 18, 83, 101, 82, 100, 81, 99, 89, 107, 88, 106, 87, 105, 86, 104, 85, 103, 84, 102
};

extern "C" __declspec(dllexport) Sint16 poly_0002C326[] = {
	18, 44, 43, 38, 37, 32, 31, 34, 28, 36, 27, 35, 29, 33, 30, 40, 39, 42, 41
};

extern "C" __declspec(dllexport) Sint16 poly_0002C34C[] = {
	18, 45, 26, 46, 25, 47, 24, 48, 23, 49, 22, 50, 21, 51, 20, 52, 19, 53, 18,
	18, 72, 10, 73, 14, 74, 1, 76, 16, 77, 3, 78, 11, 79, 0, 80, 12, 75, 9
};

extern "C" __declspec(dllexport) Sint16 poly_0002C398[] = {
	18, 58, 63, 61, 64, 55, 65, 62, 66, 56, 67, 59, 68, 54, 69, 60, 70, 57, 71
};

extern "C" __declspec(dllexport) Sint16 poly_0002C3BE[] = {
	18, 93, 101, 98, 100, 97, 99, 96, 107, 95, 106, 94, 105, 92, 104, 91, 103, 90, 102
};

extern "C" __declspec(dllexport) Sint16 poly_0002C3E4[] = {
	0x8000u | 18, 93, 75, 98, 80, 97, 79, 96, 78, 95, 77, 94, 76, 92, 74, 91, 73, 90, 72,
	18, 4, 44, 5, 38, 2, 32, 15, 34, 6, 36, 7, 35, 17, 33, 13, 40, 8, 42,
	0x8000u | 14, 46, 64, 47, 65, 48, 66, 49, 67, 50, 68, 51, 69, 52, 70,
	18, 26, 41, 25, 39, 24, 30, 23, 29, 22, 27, 21, 28, 20, 31, 19, 37, 18, 43,
	0x8000u | 18, 58, 10, 61, 14, 55, 1, 62, 16, 56, 3, 59, 11, 54, 0, 60, 12, 57, 9
};

extern "C" __declspec(dllexport) Sint16 poly_0002C49A[] = {
	4, 52, 53, 70, 71,
	4, 45, 46, 63, 64
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002C4B0[] = {
	{ 0, 255 },
	{ 0 },
	{ 673, 255 },
	{ 685, 0 },
	{ 1328, 255 },
	{ 1329, 0 },
	{ 1950, 255 },
	{ 1952, 0 },
	{ 2550, 255 },
	{ 2550, 0 },
	{ 3149, 255 },
	{ 3143, 0 },
	{ 3771, 255 },
	{ 3770, 0 },
	{ 4425, 255 },
	{ 4411, 0 },
	{ 5100, 255 },
	{ 5100, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002C4F8[] = {
	{ 5120, 254 },
	{ 5120, 0 },
	{ 4660, 243 },
	{ 4658, 0 },
	{ 4091, 243 },
	{ 4088, 0 },
	{ 3382, 243 },
	{ 3380, 0 },
	{ 2562, 243 },
	{ 2562, 0 },
	{ 1738, 243 },
	{ 1743, 0 },
	{ 1034, 243 },
	{ 1035, 0 },
	{ 466, 243 },
	{ 468, 0 },
	{ 11, 254 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002C540[] = {
	{ 13, 150 },
	{ 18, 255 },
	{ 51, 150 },
	{ 58, 255 },
	{ 100, 150 },
	{ 109, 255 },
	{ 167, 150 },
	{ 175, 255 },
	{ 255, 150 },
	{ 255, 255 },
	{ 344, 150 },
	{ 336, 255 },
	{ 410, 150 },
	{ 402, 255 },
	{ 458, 150 },
	{ 452, 255 },
	{ 498, 150 },
	{ 492, 255 },
	{ 0 },
	{ 9, 93 },
	{ 31, 0 },
	{ 46, 93 },
	{ 70, 0 },
	{ 92, 93 },
	{ 130, 0 },
	{ 159, 93 },
	{ 255, 0 },
	{ 255, 93 },
	{ 380, 0 },
	{ 352, 93 },
	{ 440, 0 },
	{ 418, 93 },
	{ 480, 0 },
	{ 464, 93 },
	{ 512, 0 },
	{ 502, 93 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002C5D0[] = {
	{ 0, 252 },
	{ 0 },
	{ 438, 252 },
	{ 438, 0 },
	{ 960, 252 },
	{ 960, 0 },
	{ 1657, 255 },
	{ 1657, 0 },
	{ 2553, 255 },
	{ 2553, 0 },
	{ 3455, 255 },
	{ 3455, 0 },
	{ 4154, 252 },
	{ 4153, 0 },
	{ 4681, 252 },
	{ 4680, 0 },
	{ 5120, 252 },
	{ 5119, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002C618[] = {
	{ 5120, 255 },
	{ 5120, 0 },
	{ 4771, 255 },
	{ 4771, 0 },
	{ 4342, 255 },
	{ 4342, 0 },
	{ 3679, 255 },
	{ 3678, 0 },
	{ 2551, 255 },
	{ 2551, 0 },
	{ 1434, 255 },
	{ 1434, 0 },
	{ 772, 255 },
	{ 772, 0 },
	{ 346, 255 },
	{ 348, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002C660[] = {
	{ 5100, 0 },
	{ 5100, 255 },
	{ 4412, 0 },
	{ 4425, 255 },
	{ 3771, 0 },
	{ 3771, 255 },
	{ 3143, 0 },
	{ 3149, 255 },
	{ 2550, 0 },
	{ 2550, 255 },
	{ 1952, 0 },
	{ 1950, 255 },
	{ 1328, 0 },
	{ 1328, 255 },
	{ 685, 0 },
	{ 673, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0 },
	{ 1012, 255 },
	{ 1012, 0 },
	{ 1992, 255 },
	{ 1992, 0 },
	{ 2925, 255 },
	{ 2926, 0 },
	{ 3823, 255 },
	{ 3825, 0 },
	{ 4720, 255 },
	{ 4722, 0 },
	{ 5653, 255 },
	{ 5655, 0 },
	{ 6632, 255 },
	{ 6635, 0 },
	{ 7650, 255 },
	{ 7650, 0 },
	{ 0, 255 },
	{ 0 },
	{ 888, 255 },
	{ 887, 0 },
	{ 1734, 255 },
	{ 1730, 0 },
	{ 2549, 255 },
	{ 2549, 0 },
	{ 3363, 255 },
	{ 3365, 0 },
	{ 4209, 255 },
	{ 4210, 0 },
	{ 5100, 255 },
	{ 5100, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1011, 255 },
	{ 1008, 0 },
	{ 1992, 255 },
	{ 1989, 0 },
	{ 2925, 255 },
	{ 2920, 0 },
	{ 3825, 255 },
	{ 3821, 0 },
	{ 4722, 255 },
	{ 4718, 0 },
	{ 5655, 255 },
	{ 5651, 0 },
	{ 6636, 255 },
	{ 6630, 0 },
	{ 7650, 255 },
	{ 7650, 0 },
	{ 5100, 0 },
	{ 5100, 255 },
	{ 4431, 0 },
	{ 4425, 255 },
	{ 3777, 0 },
	{ 3771, 255 },
	{ 3153, 0 },
	{ 3149, 255 },
	{ 2549, 0 },
	{ 2550, 255 },
	{ 1944, 0 },
	{ 1950, 255 },
	{ 1321, 0 },
	{ 1328, 255 },
	{ 665, 0 },
	{ 673, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002C7B8[] = {
	{ 119, 171 },
	{ 119, 254 },
	{ 119, 168 },
	{ 119, 254 },
	{ 119, 254 },
	{ 119, 171 },
	{ 119, 254 },
	{ 119, 168 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002C7D8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0002C300, NULL, NULL, NULL, uv_0002C4B0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0002C326, NULL, NULL, NULL, uv_0002C4F8, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0002C398, NULL, NULL, NULL, uv_0002C5D0, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_0002C3BE, NULL, NULL, NULL, uv_0002C618, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 5, poly_0002C3E4, NULL, NULL, NULL, uv_0002C660, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, poly_0002C49A, NULL, NULL, NULL, uv_0002C7B8, NULL }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002C7D8X[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0002C34C, NULL, NULL, NULL, uv_0002C540, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002C880[] = {
	{ 32.65786f, 37.2976f, 32.82195f },
	{ 32.65786f, 37.29762f, -32.82193f },
	{ 10.63804f, 43.93288f, 38.66099f },
	{ 32.65786f, 52.7468f, 0.000008999999f },
	{ 10.27469f, -0.041392f, 54.711f },
	{ 10.63804f, 23.77626f, 50.51302f },
	{ 10.63804f, 62.13053f, 0.000012f },
	{ 10.63804f, 57.4011f, -20.92317f },
	{ 10.27469f, -0.101965f, -54.68998f },
	{ 32.65786f, -0.00062f, 46.41722f },
	{ 32.65786f, -0.00035f, -46.41723f },
	{ 32.65786f, 48.73168f, 17.76311f },
	{ 32.65786f, 20.18528f, 42.88393f },
	{ 10.63804f, 23.7763f, -50.513f },
	{ 32.65786f, 20.18531f, -42.88392f },
	{ 10.63804f, 57.40109f, 20.92319f },
	{ 32.65786f, 48.73169f, -17.7631f },
	{ 10.63804f, 43.9329f, -38.66097f },
	{ 17.07955f, -0.0006599999f, 54.67219f },
	{ 17.07956f, 23.77509f, 50.51053f },
	{ 17.07956f, 43.9307f, 38.65908f },
	{ 17.07956f, 57.39827f, 20.92215f },
	{ 17.07956f, 62.12744f, 0.000012f },
	{ 17.07956f, 57.39828f, -20.92213f },
	{ 17.07956f, 43.93072f, -38.65906f },
	{ 17.07956f, 23.77512f, -50.51053f },
	{ 17.07955f, -0.00035f, -54.67221f },
	{ 17.10983f, 67.02646f, 0.000013f },
	{ 17.10983f, 61.92437f, 22.57196f },
	{ 17.10983f, 61.92437f, -22.57194f },
	{ 17.10983f, 47.39487f, -41.7075f },
	{ 17.10983f, 47.39483f, 41.70753f },
	{ 10.55169f, 47.24719f, 41.57761f },
	{ 10.55169f, 47.24721f, -41.57758f },
	{ 10.55169f, 61.73148f, 22.50164f },
	{ 10.55169f, 61.73149f, -22.50162f },
	{ 10.55169f, 66.81772f, 0.000013f },
	{ 17.10983f, 25.64987f, 54.49348f },
	{ 10.55169f, 25.56997f, 54.32376f },
	{ 17.10983f, 25.6499f, -54.49348f },
	{ 10.55169f, 25.57001f, -54.32376f },
	{ 17.0884f, -0.151801f, -57.81504f },
	{ 10.24444f, -0.013913f, -58.84581f },
	{ 17.0884f, -0.155058f, 58.99344f },
	{ 10.24444f, -0.054749f, 58.82907f },
	{ 27.18251f, -0.00035f, -49.94834f },
	{ 27.18251f, 21.72087f, -46.14626f },
	{ 27.18251f, 40.13497f, -35.31881f },
	{ 27.18251f, 52.43888f, -19.1144f },
	{ 27.18251f, 56.75943f, 0.00001f },
	{ 27.18251f, 52.43887f, 19.11441f },
	{ 27.18251f, 40.13495f, 35.31882f },
	{ 27.18251f, 21.72084f, 46.14626f },
	{ 27.18251f, -0.00064f, 49.94834f },
	{ 32.60053f, 41.78389f, 37.02272f },
	{ 32.60053f, 41.7839f, -37.02271f },
	{ 32.64916f, 59.09138f, 0.00001f },
	{ 32.60053f, -0.0006999999f, 49.86478f },
	{ 32.60053f, -0.00039f, -49.8648f },
	{ 32.64916f, 54.59333f, 20.03656f },
	{ 32.60054f, 22.61323f, 48.37254f },
	{ 32.60054f, 22.61326f, -48.37254f },
	{ 32.64916f, 54.59335f, -20.03655f },
	{ 27.22827f, 0.033749f, -49.90211f },
	{ 27.22827f, 22.63287f, -48.40873f },
	{ 27.22827f, 41.82647f, -37.05043f },
	{ 27.22827f, 54.59359f, -20.05153f },
	{ 27.22827f, 59.07502f, 0.00001f },
	{ 27.22827f, 54.59357f, 20.05154f },
	{ 27.22827f, 41.82642f, 37.05044f },
	{ 27.22827f, 22.63284f, 48.40873f },
	{ 27.22827f, 0.033716f, 49.90211f },
	{ 41.70234f, -0.00037f, -38.71612f },
	{ 41.70234f, 16.83634f, -35.76902f },
	{ 41.70234f, 31.10953f, -27.37642f },
	{ 41.70234f, -0.00059f, 38.71611f },
	{ 41.70234f, 40.64657f, -14.81601f },
	{ 41.70234f, 43.99553f, 0.000006f },
	{ 41.70234f, 40.64656f, 14.81602f },
	{ 41.70234f, 31.10952f, 27.37643f },
	{ 41.70234f, 16.83632f, 35.76903f },
	{ 46.5366f, 28.29563f, 24.90021f },
	{ 46.5366f, 15.31346f, 32.53369f },
	{ 46.5366f, -0.00058f, 35.2142f },
	{ 46.5366f, -0.00039f, -35.21421f },
	{ 46.5366f, 15.31347f, -32.53367f },
	{ 46.5366f, 28.29564f, -24.9002f },
	{ 46.5366f, 36.97005f, -13.47589f },
	{ 46.5366f, 40.0161f, 0.000004f },
	{ 46.5366f, 36.97005f, 13.4759f },
	{ 41.70234f, -0.00044f, -41.67421f },
	{ 41.70234f, 18.46722f, -38.50192f },
	{ 41.70234f, 33.55909f, -29.46811f },
	{ 41.70234f, -0.0007099999f, 41.67421f },
	{ 41.70234f, 44.01481f, -15.94802f },
	{ 41.70234f, 47.31776f, 0.000007f },
	{ 41.70234f, 44.0148f, 15.94803f },
	{ 41.70234f, 33.55906f, 29.46812f },
	{ 41.70234f, 18.4672f, 38.50193f },
	{ 46.5366f, 33.55748f, 29.45351f },
	{ 46.5366f, 18.48339f, 38.48285f },
	{ 46.5366f, -0.0006899999f, 41.65355f },
	{ 46.5366f, -0.00046f, -41.65356f },
	{ 46.5366f, 18.4834f, -38.48284f },
	{ 46.5366f, 33.55748f, -29.45351f },
	{ 46.53661f, 44.0275f, -15.94012f },
	{ 46.53661f, 47.30714f, 0.000005f },
	{ 46.53661f, 44.02749f, 15.94013f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002CD90[] = {
	{ 0.930336f, 0.245715f, 0.272212f },
	{ 0.9310409f, 0.244211f, -0.271153f },
	{ -0.999805f, -0.012844f, -0.015005f },
	{ 0.93959f, 0.342302f, 0 },
	{ -0.999774f, 0.012179f, -0.017436f },
	{ -0.999844f, 0.001434f, -0.017584f },
	{ -0.9998299f, -0.018419f, 0 },
	{ -0.999823f, -0.016949f, 0.008195999f },
	{ -0.999773f, 0.012152f, 0.017502f },
	{ 0.919425f, 0.067251f, 0.387471f },
	{ 0.920886f, 0.066883f, -0.384052f },
	{ 0.936555f, 0.318404f, 0.146575f },
	{ 0.924388f, 0.133051f, 0.357497f },
	{ -0.999844f, 0.001423f, 0.017618f },
	{ 0.9251f, 0.13292f, -0.355701f },
	{ -0.999823f, -0.016949f, -0.008195999f },
	{ 0.937308f, 0.316782f, -0.145272f },
	{ -0.999805f, -0.012844f, 0.015005f },
	{ 0.871806f, 0.084461f, 0.482515f },
	{ 0.874527f, 0.169134f, 0.454529f },
	{ 0.881047f, 0.316483f, 0.351561f },
	{ 0.887769f, 0.418244f, 0.192196f },
	{ 0.890729f, 0.454535f, 0 },
	{ 0.887768f, 0.418244f, -0.192196f },
	{ 0.881047f, 0.316483f, -0.351561f },
	{ 0.87463f, 0.169111f, -0.454339f },
	{ 0.8730879f, 0.084066f, -0.480261f },
	{ 0.6508819f, 0.759179f, 0 },
	{ 0.652864f, 0.686754f, 0.319588f },
	{ 0.652864f, 0.686754f, -0.319588f },
	{ 0.6571659f, 0.5008709f, -0.5632589f },
	{ 0.6571659f, 0.50087f, 0.56326f },
	{ -0.68333f, 0.484581f, 0.546115f },
	{ -0.68333f, 0.484582f, -0.546114f },
	{ -0.679921f, 0.664561f, 0.309944f },
	{ -0.679921f, 0.664561f, -0.309944f },
	{ -0.678351f, 0.734738f, 0 },
	{ 0.661174f, 0.259379f, 0.703968f },
	{ -0.682997f, 0.255684f, 0.684208f },
	{ 0.6742719f, 0.255459f, -0.692892f },
	{ -0.665028f, 0.261495f, -0.699541f },
	{ 0.691827f, 0.125144f, -0.711136f },
	{ -0.652909f, 0.141634f, -0.744076f },
	{ 0.650556f, 0.131728f, 0.747947f },
	{ -0.6769699f, 0.137393f, 0.7230729f },
	{ 0.519784f, 0.132426f, -0.843972f },
	{ 0.202314f, 0.269868f, -0.941404f },
	{ -0.5711769f, 0.540759f, -0.617525f },
	{ -0.568348f, 0.743859f, -0.351645f },
	{ -0.566985f, 0.823728f, 0.000047f },
	{ -0.568036f, 0.744034f, 0.351781f },
	{ -0.570857f, 0.540936f, 0.617665f },
	{ -0.573607f, 0.278762f, 0.770238f },
	{ -0.185404f, 0.168774f, 0.96806f },
	{ 0.66507f, 0.497419f, 0.5570059f },
	{ 0.666343f, 0.49628f, -0.556501f },
	{ 0.660179f, 0.7511089f, 0 },
	{ 0.690018f, 0.048242f, 0.722183f },
	{ 0.692358f, 0.047862f, -0.719965f },
	{ 0.662084f, 0.679894f, 0.315261f },
	{ 0.657197f, 0.222624f, 0.720091f },
	{ 0.658172f, 0.22273f, -0.719167f },
	{ 0.663231f, 0.6791829f, -0.31438f },
	{ 0.415664f, 0.083692f, -0.90566f },
	{ -0.136271f, 0.254835f, -0.957334f },
	{ -0.656995f, 0.502749f, -0.561784f },
	{ -0.655506f, 0.6852739f, -0.317352f },
	{ -0.655136f, 0.755511f, 0.000031f },
	{ -0.655289f, 0.68543f, 0.317461f },
	{ -0.6567619f, 0.502906f, 0.561916f },
	{ -0.649253f, 0.225546f, 0.726361f },
	{ -0.790073f, 0.041181f, 0.611627f },
	{ -0.457124f, 0.153352f, -0.8760819f },
	{ -0.460366f, 0.300319f, -0.835387f },
	{ -0.454673f, 0.583847f, -0.672604f },
	{ -0.457125f, 0.153352f, 0.8760819f },
	{ -0.448505f, 0.806675f, -0.384861f },
	{ -0.445804f, 0.895131f, 0 },
	{ -0.448505f, 0.806675f, 0.384862f },
	{ -0.454672f, 0.583847f, 0.672604f },
	{ -0.460366f, 0.300318f, 0.835387f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, -0.00001f, 0 },
	{ 1, 0, 0 },
	{ -0.6641369f, 0.126401f, -0.736848f },
	{ -0.666899f, 0.258488f, -0.698878f },
	{ -0.6671349f, 0.494241f, -0.557366f },
	{ -0.6641369f, 0.126401f, 0.736848f },
	{ -0.659681f, 0.682685f, -0.314266f },
	{ -0.664206f, 0.74755f, 0 },
	{ -0.659681f, 0.6826839f, 0.314266f },
	{ -0.6671349f, 0.494241f, 0.557366f },
	{ -0.666899f, 0.258488f, 0.698878f },
	{ 0.6682259f, 0.493822f, 0.556429f },
	{ 0.669116f, 0.258533f, 0.6967379f },
	{ 0.66699f, 0.125971f, 0.73434f },
	{ 0.66699f, 0.125971f, -0.73434f },
	{ 0.669116f, 0.258533f, -0.6967379f },
	{ 0.668227f, 0.493821f, -0.556429f },
	{ 0.659764f, 0.682851f, -0.313728f },
	{ 0.6643119f, 0.747456f, 0 },
	{ 0.659764f, 0.682852f, 0.313728f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002D2A0 = { vertex_0002C880, normal_0002CD90, LengthOfArray(vertex_0002C880), meshlist_0002C7D8, matlist_0002C274, LengthOfArray(meshlist_0002C7D8), LengthOfArray(matlist_0002C274),{ 28.39053f, 33.4357f, 0.07381599f }, 66.96513f, NULL };
extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002D2A0X = { vertex_0002C880, normal_0002CD90, LengthOfArray(vertex_0002C880), meshlist_0002C7D8X, matlist_0002C274X, LengthOfArray(meshlist_0002C7D8X), LengthOfArray(matlist_0002C274X),{ 28.39053f, 33.4357f, 0.07381599f }, 66.96513f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002D2C8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002D2A0, -69.30155f, -0.480255f, 363.306f, 0, 0x87AD, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0002D2C8X = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002D2A0X, -69.30155f, -0.480255f, 363.306f, 0, 0x87AD, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002D2FC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002D324[] = {
	0x8000u | 10, 0, 5, 4, 7, 6, 3, 2, 1, 0, 5,
	0x8000u | 10, 8, 13, 12, 15, 14, 11, 10, 9, 8, 13,
	0x8000u | 10, 16, 21, 20, 23, 22, 19, 18, 17, 16, 21,
	0x8000u | 10, 24, 29, 28, 31, 30, 27, 26, 25, 24, 29,
	0x8000u | 10, 32, 37, 36, 39, 38, 35, 34, 33, 32, 37,
	0x8000u | 10, 40, 45, 44, 47, 46, 43, 42, 41, 40, 45,
	0x8000u | 10, 48, 53, 52, 55, 54, 51, 50, 49, 48, 53,
	0x8000u | 10, 56, 61, 60, 63, 62, 59, 58, 57, 56, 61
};

extern "C" __declspec(dllexport) Sint16 poly_0002D3D4[] = {
	4, 7, 3, 5, 1,
	4, 2, 6, 0, 4,
	4, 15, 11, 13, 9,
	4, 10, 14, 8, 12,
	4, 23, 19, 21, 17,
	4, 18, 22, 16, 20,
	4, 31, 27, 29, 25,
	4, 26, 30, 24, 28,
	4, 39, 35, 37, 33,
	4, 34, 38, 32, 36,
	4, 47, 43, 45, 41,
	4, 42, 46, 40, 44,
	4, 55, 51, 53, 49,
	4, 50, 54, 48, 52,
	4, 63, 59, 61, 57,
	4, 58, 62, 56, 60
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002D474[] = {
	{ 3648, 254 },
	{ 4080, -1785 },
	{ 4080, 254 },
	{ 4080, -1651 },
	{ 4080, 197 },
	{ 3648, -1651 },
	{ 3648, 197 },
	{ 3648, -1785 },
	{ 3648, 254 },
	{ 4080, -1785 },
	{ 3144, 254 },
	{ 3575, -1785 },
	{ 3575, 254 },
	{ 3575, -1651 },
	{ 3575, 197 },
	{ 3144, -1651 },
	{ 3144, 197 },
	{ 3144, -1785 },
	{ 3144, 254 },
	{ 3575, -1785 },
	{ 2626, 254 },
	{ 3058, -1785 },
	{ 3058, 254 },
	{ 3058, -1651 },
	{ 3058, 197 },
	{ 2626, -1651 },
	{ 2626, 197 },
	{ 2626, -1785 },
	{ 2626, 254 },
	{ 3058, -1785 },
	{ 2086, 254 },
	{ 2518, -1785 },
	{ 2518, 254 },
	{ 2518, -1651 },
	{ 2518, 197 },
	{ 2086, -1651 },
	{ 2086, 197 },
	{ 2086, -1785 },
	{ 2086, 254 },
	{ 2518, -1785 },
	{ 1545, 254 },
	{ 1976, -1785 },
	{ 1976, 254 },
	{ 1976, -1651 },
	{ 1976, 197 },
	{ 1545, -1651 },
	{ 1545, 197 },
	{ 1545, -1785 },
	{ 1545, 254 },
	{ 1976, -1785 },
	{ 1007, 254 },
	{ 1439, -1785 },
	{ 1439, 254 },
	{ 1439, -1651 },
	{ 1439, 197 },
	{ 1007, -1651 },
	{ 1007, 197 },
	{ 1007, -1785 },
	{ 1007, 254 },
	{ 1439, -1785 },
	{ 510, 254 },
	{ 940, -1785 },
	{ 940, 254 },
	{ 940, -1651 },
	{ 940, 197 },
	{ 510, -1651 },
	{ 510, 197 },
	{ 510, -1785 },
	{ 510, 254 },
	{ 940, -1785 },
	{ 0, 254 },
	{ 430, -1785 },
	{ 430, 254 },
	{ 430, -1651 },
	{ 430, 197 },
	{ 0, -1651 },
	{ 0, 197 },
	{ 0, -1785 },
	{ 0, 254 },
	{ 430, -1785 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002D5B4[] = {
	{ 4080, 0 },
	{ 3648, 0 },
	{ 4080, 255 },
	{ 3648, 255 },
	{ 3648, 0 },
	{ 4080, 0 },
	{ 3648, 255 },
	{ 4080, 255 },
	{ 3575, 0 },
	{ 3144, 0 },
	{ 3575, 255 },
	{ 3144, 255 },
	{ 3144, 0 },
	{ 3575, 0 },
	{ 3144, 255 },
	{ 3575, 255 },
	{ 3058, 0 },
	{ 2626, 0 },
	{ 3058, 255 },
	{ 2626, 255 },
	{ 2626, 0 },
	{ 3058, 0 },
	{ 2626, 255 },
	{ 3058, 255 },
	{ 2518, 0 },
	{ 2086, 0 },
	{ 2518, 255 },
	{ 2086, 255 },
	{ 2086, 0 },
	{ 2518, 0 },
	{ 2086, 255 },
	{ 2518, 255 },
	{ 1976, 0 },
	{ 1545, 0 },
	{ 1976, 255 },
	{ 1545, 255 },
	{ 1545, 0 },
	{ 1976, 0 },
	{ 1545, 255 },
	{ 1976, 255 },
	{ 1439, 0 },
	{ 1007, 0 },
	{ 1439, 255 },
	{ 1007, 255 },
	{ 1007, 0 },
	{ 1439, 0 },
	{ 1007, 255 },
	{ 1439, 255 },
	{ 940, 0 },
	{ 510, 0 },
	{ 940, 255 },
	{ 510, 255 },
	{ 510, 0 },
	{ 940, 0 },
	{ 510, 255 },
	{ 940, 255 },
	{ 430, 0 },
	{ 0 },
	{ 430, 255 },
	{ 0, 255 },
	{ 0 },
	{ 430, 0 },
	{ 0, 255 },
	{ 430, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002D6B4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 8, poly_0002D324, NULL, NULL, NULL, uv_0002D474, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 16, poly_0002D3D4, NULL, NULL, NULL, uv_0002D5B4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002D6E4[] = {
	{ 32.6128f, -1.5f, -11.01999f },
	{ 32.6128f, -1.5f, 25.19173f },
	{ 32.6128f, 1.5f, -10 },
	{ 32.6128f, 1.5f, 22.86001f },
	{ 41.33279f, -1.5f, -11.01999f },
	{ 41.33279f, -1.5f, 25.19173f },
	{ 41.33279f, 1.5f, -10 },
	{ 41.33279f, 1.5f, 22.86001f },
	{ 22.4758f, -1.5f, -11.01999f },
	{ 22.4758f, -1.5f, 25.19173f },
	{ 22.4758f, 1.5f, -10 },
	{ 22.4758f, 1.5f, 22.86001f },
	{ 31.1958f, -1.5f, -11.01999f },
	{ 31.1958f, -1.5f, 25.19173f },
	{ 31.1958f, 1.5f, -10 },
	{ 31.1958f, 1.5f, 22.86001f },
	{ 11.99f, -1.5f, -11.01999f },
	{ 11.99f, -1.5f, 25.19173f },
	{ 11.99f, 1.5f, -10 },
	{ 11.99f, 1.5f, 22.86001f },
	{ 20.71f, -1.5f, -11.01999f },
	{ 20.71f, -1.5f, 25.19173f },
	{ 20.71f, 1.5f, -10 },
	{ 20.71f, 1.5f, 22.86001f },
	{ 1.09f, -1.5f, -11.01999f },
	{ 1.09f, -1.5f, 25.19173f },
	{ 1.09f, 1.5f, -10 },
	{ 1.09f, 1.5f, 22.86001f },
	{ 9.809999f, -1.5f, -11.01999f },
	{ 9.809999f, -1.5f, 25.19173f },
	{ 9.809999f, 1.5f, -10 },
	{ 9.809999f, 1.5f, 22.86001f },
	{ -9.809999f, -1.5f, -11.01999f },
	{ -9.809999f, -1.5f, 25.19173f },
	{ -9.809999f, 1.5f, -10 },
	{ -9.809999f, 1.5f, 22.86001f },
	{ -1.09f, -1.5f, -11.01999f },
	{ -1.09f, -1.5f, 25.19173f },
	{ -1.09f, 1.5f, -10 },
	{ -1.09f, 1.5f, 22.86001f },
	{ -20.71f, -1.5f, -11.01999f },
	{ -20.71f, -1.5f, 25.19173f },
	{ -20.71f, 1.5f, -10 },
	{ -20.71f, 1.5f, 22.86001f },
	{ -11.99f, -1.5f, -11.01999f },
	{ -11.99f, -1.5f, 25.19173f },
	{ -11.99f, 1.5f, -10 },
	{ -11.99f, 1.5f, 22.86001f },
	{ -30.738f, -1.5f, -11.01999f },
	{ -30.738f, -1.5f, 25.19173f },
	{ -30.738f, 1.5f, -10 },
	{ -30.738f, 1.5f, 22.86001f },
	{ -22.018f, -1.5f, -11.01999f },
	{ -22.018f, -1.5f, 25.19173f },
	{ -22.018f, 1.5f, -10 },
	{ -22.018f, 1.5f, 22.86001f },
	{ -41.0494f, -1.5f, -11.01999f },
	{ -41.0494f, -1.5f, 25.19173f },
	{ -41.0494f, 1.5f, -10 },
	{ -41.0494f, 1.5f, 22.86001f },
	{ -32.3294f, -1.5f, -11.01999f },
	{ -32.3294f, -1.5f, 25.19173f },
	{ -32.3294f, 1.5f, -10 },
	{ -32.3294f, 1.5f, 22.86001f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002D9E4[] = {
	{ -0.562046f, -0.481607f, -0.672428f },
	{ -0.550338f, -0.366959f, 0.74998f },
	{ -0.59657f, 0.652473f, -0.467315f },
	{ -0.6202739f, 0.704567f, 0.344739f },
	{ 0.562046f, -0.481607f, -0.672428f },
	{ 0.550338f, -0.366959f, 0.74998f },
	{ 0.59657f, 0.652473f, -0.467315f },
	{ 0.6202739f, 0.704567f, 0.344739f },
	{ -0.562046f, -0.481607f, -0.672428f },
	{ -0.550338f, -0.366959f, 0.749979f },
	{ -0.59657f, 0.652473f, -0.467315f },
	{ -0.6202739f, 0.704567f, 0.344739f },
	{ 0.562046f, -0.481607f, -0.672428f },
	{ 0.550338f, -0.366959f, 0.749979f },
	{ 0.59657f, 0.652473f, -0.467315f },
	{ 0.6202739f, 0.704567f, 0.344739f },
	{ -0.562046f, -0.481607f, -0.672428f },
	{ -0.550338f, -0.366959f, 0.74998f },
	{ -0.59657f, 0.652473f, -0.467315f },
	{ -0.6202739f, 0.704567f, 0.344739f },
	{ 0.562046f, -0.481607f, -0.672428f },
	{ 0.550338f, -0.366959f, 0.74998f },
	{ 0.59657f, 0.652473f, -0.467315f },
	{ 0.6202739f, 0.704567f, 0.344739f },
	{ -0.562046f, -0.481607f, -0.672428f },
	{ -0.550338f, -0.366959f, 0.749979f },
	{ -0.59657f, 0.652473f, -0.467315f },
	{ -0.6202739f, 0.704567f, 0.344739f },
	{ 0.562046f, -0.481607f, -0.672428f },
	{ 0.550338f, -0.366959f, 0.749979f },
	{ 0.59657f, 0.652473f, -0.467315f },
	{ 0.6202739f, 0.704567f, 0.344739f },
	{ -0.562046f, -0.481607f, -0.672428f },
	{ -0.550338f, -0.366959f, 0.749979f },
	{ -0.59657f, 0.652473f, -0.467315f },
	{ -0.6202739f, 0.704567f, 0.344739f },
	{ 0.562046f, -0.481607f, -0.672428f },
	{ 0.550338f, -0.366959f, 0.749979f },
	{ 0.59657f, 0.652473f, -0.467315f },
	{ 0.6202739f, 0.704567f, 0.344739f },
	{ -0.562046f, -0.481607f, -0.672428f },
	{ -0.550338f, -0.366959f, 0.74998f },
	{ -0.59657f, 0.652473f, -0.467315f },
	{ -0.6202739f, 0.704567f, 0.344739f },
	{ 0.562046f, -0.481607f, -0.672428f },
	{ 0.550338f, -0.366959f, 0.74998f },
	{ 0.59657f, 0.652473f, -0.467315f },
	{ 0.6202739f, 0.704567f, 0.344739f },
	{ -0.562046f, -0.481607f, -0.672428f },
	{ -0.550338f, -0.366959f, 0.749979f },
	{ -0.59657f, 0.652473f, -0.467315f },
	{ -0.6202739f, 0.704567f, 0.344739f },
	{ 0.562046f, -0.481607f, -0.672428f },
	{ 0.550338f, -0.366959f, 0.749979f },
	{ 0.59657f, 0.652473f, -0.467315f },
	{ 0.6202739f, 0.704567f, 0.344739f },
	{ -0.562046f, -0.481607f, -0.672428f },
	{ -0.550338f, -0.366959f, 0.749979f },
	{ -0.59657f, 0.652473f, -0.467315f },
	{ -0.6202739f, 0.704567f, 0.344739f },
	{ 0.562046f, -0.481607f, -0.672428f },
	{ 0.550338f, -0.366959f, 0.749979f },
	{ 0.59657f, 0.652473f, -0.467315f },
	{ 0.6202739f, 0.704567f, 0.344739f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002DCE4 = { vertex_0002D6E4, normal_0002D9E4, LengthOfArray(vertex_0002D6E4), meshlist_0002D6B4, matlist_0002D2FC, LengthOfArray(meshlist_0002D6B4), LengthOfArray(matlist_0002D2FC),{ 0.141695f, 0, 7.085867f }, 44.99476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002DD0C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002DCE4, -316.62f, 58.56f, -45.50003f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002DD40[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002DD68[] = {
	4, 39, 38, 35, 34,
	4, 33, 32, 37, 36,
	4, 38, 39, 36, 37,
	4, 35, 34, 33, 32,
	4, 31, 30, 27, 26,
	4, 25, 24, 29, 28,
	4, 30, 31, 28, 29,
	4, 27, 26, 25, 24,
	4, 23, 22, 19, 18,
	4, 17, 16, 21, 20,
	4, 22, 23, 20, 21,
	4, 19, 18, 17, 16,
	4, 3, 2, 1, 0,
	4, 6, 7, 4, 5,
	4, 1, 0, 5, 4,
	4, 7, 6, 3, 2,
	4, 11, 10, 9, 8,
	4, 14, 15, 12, 13,
	4, 9, 8, 13, 12,
	4, 15, 14, 11, 10
};

extern "C" __declspec(dllexport) Sint16 poly_0002DE30[] = {
	4, 34, 38, 32, 36,
	4, 39, 35, 37, 33,
	4, 26, 30, 24, 28,
	4, 31, 27, 29, 25,
	4, 18, 22, 16, 20,
	4, 23, 19, 21, 17,
	4, 7, 3, 5, 1,
	4, 2, 6, 0, 4,
	4, 15, 11, 13, 9,
	4, 10, 14, 8, 12
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002DE94[] = {
	{ -761, 420 },
	{ 238, 442 },
	{ -765, 0 },
	{ 236, 20 },
	{ -765, 0 },
	{ 236, 20 },
	{ -761, 420 },
	{ 238, 442 },
	{ 386, -255 },
	{ 1384, -255 },
	{ 386, 254 },
	{ 1384, 254 },
	{ 996, -255 },
	{ 0, -255 },
	{ 996, 254 },
	{ 0, 254 },
	{ -757, 948 },
	{ 242, 968 },
	{ -761, 525 },
	{ 239, 545 },
	{ -761, 525 },
	{ 239, 545 },
	{ -757, 948 },
	{ 242, 968 },
	{ 868, -255 },
	{ 1865, -255 },
	{ 868, 254 },
	{ 1865, 254 },
	{ 1481, -255 },
	{ 482, -255 },
	{ 1481, 254 },
	{ 482, 254 },
	{ -756, 1474 },
	{ 245, 1496 },
	{ -757, 1051 },
	{ 242, 1074 },
	{ -757, 1051 },
	{ 242, 1074 },
	{ -756, 1474 },
	{ 245, 1496 },
	{ 1351, -255 },
	{ 2347, -255 },
	{ 1351, 254 },
	{ 2347, 254 },
	{ 1961, -255 },
	{ 964, -255 },
	{ 1961, 254 },
	{ 964, 254 },
	{ 2928, -255 },
	{ 1928, -255 },
	{ 2928, 254 },
	{ 1928, 254 },
	{ 2314, -255 },
	{ 3315, -255 },
	{ 2314, 254 },
	{ 3315, 254 },
	{ -752, 2105 },
	{ 248, 2128 },
	{ -749, 2529 },
	{ 251, 2550 },
	{ -749, 2529 },
	{ 251, 2550 },
	{ -752, 2105 },
	{ 248, 2128 },
	{ 2444, -255 },
	{ 1447, -255 },
	{ 2444, 254 },
	{ 1447, 254 },
	{ 1832, -255 },
	{ 2832, -255 },
	{ 1832, 254 },
	{ 2832, 254 },
	{ -748, 1586 },
	{ 252, 1609 },
	{ -745, 2008 },
	{ 255, 2030 },
	{ -745, 2008 },
	{ 255, 2030 },
	{ -748, 1586 },
	{ 252, 1609 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002DFD4[] = {
	{ 31, -255 },
	{ 450, -255 },
	{ 31, 254 },
	{ 450, 254 },
	{ 418, -255 },
	{ 0, -255 },
	{ 418, 254 },
	{ 0, 254 },
	{ 553, -255 },
	{ 975, -255 },
	{ 553, 254 },
	{ 975, 254 },
	{ 944, -255 },
	{ 524, -255 },
	{ 944, 254 },
	{ 524, 254 },
	{ 1080, -255 },
	{ 1498, -255 },
	{ 1080, 254 },
	{ 1498, 254 },
	{ 1467, -255 },
	{ 1049, -255 },
	{ 1467, 254 },
	{ 1049, 254 },
	{ 2518, -255 },
	{ 2099, -255 },
	{ 2518, 254 },
	{ 2099, 254 },
	{ 2130, -255 },
	{ 2550, -255 },
	{ 2130, 254 },
	{ 2550, 254 },
	{ 2000, -255 },
	{ 1582, -255 },
	{ 2000, 254 },
	{ 1582, 254 },
	{ 1611, -255 },
	{ 2032, -255 },
	{ 1611, 254 },
	{ 2032, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002E074[] = {
	{ NJD_MESHSET_TRIMESH | 0, 20, poly_0002DD68, NULL, NULL, NULL, uv_0002DE94, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 10, poly_0002DE30, NULL, NULL, NULL, uv_0002DFD4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002E0A4[] = {
	{ -10.7436f, -10.84547f, -14.22248f },
	{ 13.47108f, -10.84547f, 9.758853f },
	{ -10.7436f, 2.639977f, -14.22248f },
	{ 13.47108f, 2.639977f, 9.758853f },
	{ -1.384887f, -10.84547f, -24.17854f },
	{ 22.82979f, -10.84547f, -0.197217f },
	{ -1.384887f, 2.639977f, -24.17854f },
	{ 22.82979f, 2.639977f, -0.197217f },
	{ -22.43315f, -10.84547f, -2.114653f },
	{ 1.781527f, -10.84547f, 21.86668f },
	{ -22.43315f, 2.639977f, -2.114653f },
	{ 1.781527f, 2.639977f, 21.86668f },
	{ -13.07444f, -10.84547f, -12.07072f },
	{ 11.14024f, -10.84547f, 11.91061f },
	{ -13.07444f, 2.639977f, -12.07072f },
	{ 11.14024f, 2.639977f, 11.91061f },
	{ -34.14032f, -10.84547f, 10.66768f },
	{ -9.925695f, -10.84547f, 34.64902f },
	{ -34.14032f, 2.639977f, 10.66768f },
	{ -9.925695f, 2.639977f, 34.64902f },
	{ -24.78161f, -10.84547f, 0.71162f },
	{ -0.566986f, -10.84547f, 24.69295f },
	{ -24.78161f, 2.639977f, 0.71162f },
	{ -0.566986f, 2.639977f, 24.69295f },
	{ -45.83865f, -10.84547f, 23.11276f },
	{ -21.62403f, -10.84547f, 47.0941f },
	{ -45.83865f, 2.639977f, 23.11276f },
	{ -21.62403f, 2.639977f, 47.0941f },
	{ -36.48f, -10.84547f, 13.1567f },
	{ -12.26537f, -10.84547f, 37.13804f },
	{ -36.48f, 2.639977f, 13.1567f },
	{ -12.26537f, 2.639977f, 37.13804f },
	{ -57.53711f, -10.84547f, 35.55785f },
	{ -33.32243f, -10.84547f, 59.53916f },
	{ -57.53711f, 2.639977f, 35.55785f },
	{ -33.32243f, 2.639977f, 59.53916f },
	{ -48.17839f, -10.84547f, 25.60178f },
	{ -23.96371f, -10.84547f, 49.5831f },
	{ -48.17839f, 2.639977f, 25.60178f },
	{ -23.96371f, 2.639977f, 49.5831f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002E284[] = {
	{ -0.815386f, -0.578734f, 0.01458f },
	{ 0.014615f, -0.575991f, 0.817325f },
	{ -0.815386f, 0.578734f, 0.01458f },
	{ 0.014615f, 0.575991f, 0.817325f },
	{ -0.014615f, -0.575991f, -0.817325f },
	{ 0.815386f, -0.578734f, -0.01458f },
	{ -0.014615f, 0.575991f, -0.817325f },
	{ 0.815386f, 0.578734f, -0.01458f },
	{ -0.815386f, -0.578734f, 0.01458f },
	{ 0.014615f, -0.575991f, 0.817325f },
	{ -0.815386f, 0.578734f, 0.01458f },
	{ 0.014615f, 0.575991f, 0.817325f },
	{ -0.014615f, -0.575991f, -0.817325f },
	{ 0.815386f, -0.578734f, -0.01458f },
	{ -0.014615f, 0.575991f, -0.817325f },
	{ 0.815386f, 0.578734f, -0.01458f },
	{ -0.815386f, -0.578734f, 0.01458f },
	{ 0.014615f, -0.575991f, 0.817325f },
	{ -0.815386f, 0.578734f, 0.01458f },
	{ 0.014615f, 0.575991f, 0.817325f },
	{ -0.014614f, -0.575991f, -0.817325f },
	{ 0.815386f, -0.578734f, -0.01458f },
	{ -0.014614f, 0.575991f, -0.817325f },
	{ 0.815386f, 0.578734f, -0.01458f },
	{ -0.815386f, -0.578734f, 0.014581f },
	{ 0.014616f, -0.575991f, 0.817325f },
	{ -0.815386f, 0.578734f, 0.014581f },
	{ 0.014616f, 0.575991f, 0.817325f },
	{ -0.014616f, -0.575991f, -0.817325f },
	{ 0.815386f, -0.578734f, -0.014581f },
	{ -0.014616f, 0.575991f, -0.817325f },
	{ 0.815386f, 0.578734f, -0.014581f },
	{ -0.815386f, -0.578734f, 0.01458f },
	{ 0.014615f, -0.575992f, 0.817325f },
	{ -0.815386f, 0.578734f, 0.01458f },
	{ 0.014615f, 0.575992f, 0.817325f },
	{ -0.014615f, -0.575991f, -0.817325f },
	{ 0.815386f, -0.578734f, -0.01458f },
	{ -0.014615f, 0.575991f, -0.817325f },
	{ 0.815386f, 0.578734f, -0.01458f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002E464 = { vertex_0002E0A4, normal_0002E284, LengthOfArray(vertex_0002E0A4), meshlist_0002E074, matlist_0002DD40, LengthOfArray(meshlist_0002E074), LengthOfArray(matlist_0002DD40),{ -17.35366f, -4.102745f, 17.68031f }, 57.80211f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002E48C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002E464, -479.1946f, 58.56f, 14.70932f, 0, 0x342, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002E4C0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002E4E8[] = {
	4, 7, 3, 5, 1,
	4, 2, 6, 0, 4,
	10, 2, 3, 6, 7, 4, 5, 0, 1, 2, 3,
	4, 15, 11, 13, 9,
	4, 10, 14, 8, 12,
	0x8000u | 10, 13, 8, 9, 10, 11, 14, 15, 12, 13, 8,
	4, 23, 19, 21, 17,
	0x8000u | 10, 23, 20, 21, 16, 17, 18, 19, 22, 23, 20,
	4, 18, 22, 16, 20,
	0x8000u | 10, 25, 26, 27, 30, 31, 28, 29, 24, 25, 26,
	4, 31, 27, 29, 25,
	4, 26, 30, 24, 28,
	4, 39, 35, 37, 33,
	4, 34, 38, 32, 36,
	0x8000u | 10, 35, 38, 39, 36, 37, 32, 33, 34, 35, 38,
	4, 47, 43, 45, 41,
	0x8000u | 10, 47, 44, 45, 40, 41, 42, 43, 46, 47, 44,
	4, 42, 46, 40, 44,
	4, 55, 51, 53, 49,
	0x8000u | 10, 55, 52, 53, 48, 49, 50, 51, 54, 55, 52,
	4, 50, 54, 48, 52,
	4, 63, 59, 61, 57,
	4, 58, 62, 56, 60,
	0x8000u | 10, 61, 56, 57, 58, 59, 62, 63, 60, 61, 56,
	0x8000u | 10, 65, 66, 67, 70, 71, 68, 69, 64, 65, 66,
	4, 71, 67, 69, 65,
	4, 66, 70, 64, 68,
	0x8000u | 10, 73, 74, 75, 78, 79, 76, 77, 72, 73, 74,
	4, 79, 75, 77, 73,
	4, 74, 78, 72, 76,
	4, 82, 80, 81, 85,
	8, 81, 83, 82, 86, 80, 84, 85, 87,
	4, 87, 83, 85, 81,
	4, 84, 86, 87, 83,
	4, 95, 91, 93, 89,
	0x8000u | 10, 95, 92, 93, 88, 89, 90, 91, 94, 95, 92,
	4, 90, 94, 88, 92
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002E6E8[] = {
	{ 412, 255 },
	{ 0, 255 },
	{ 440, 255 },
	{ 27, 255 },
	{ 0, 255 },
	{ 412, 255 },
	{ 27, 255 },
	{ 440, 255 },
	{ 0, 255 },
	{ 0, -765 },
	{ 412, 255 },
	{ 412, -765 },
	{ 440, 255 },
	{ 440, -765 },
	{ 27, 255 },
	{ 27, -765 },
	{ 0, 255 },
	{ 0, -765 },
	{ 928, 255 },
	{ 516, 255 },
	{ 956, 255 },
	{ 541, 255 },
	{ 516, 255 },
	{ 928, 255 },
	{ 541, 255 },
	{ 956, 255 },
	{ 956, -765 },
	{ 541, 255 },
	{ 541, -765 },
	{ 516, 255 },
	{ 516, -765 },
	{ 928, 255 },
	{ 928, -765 },
	{ 956, 255 },
	{ 956, -765 },
	{ 541, 255 },
	{ 1443, 255 },
	{ 1032, 255 },
	{ 1473, 255 },
	{ 1059, 255 },
	{ 1443, -765 },
	{ 1473, 255 },
	{ 1473, -765 },
	{ 1059, 255 },
	{ 1059, -765 },
	{ 1032, 255 },
	{ 1032, -765 },
	{ 1443, 255 },
	{ 1443, -765 },
	{ 1473, 255 },
	{ 1032, 255 },
	{ 1443, 255 },
	{ 1059, 255 },
	{ 1473, 255 },
	{ 1576, -765 },
	{ 1546, 255 },
	{ 1546, -765 },
	{ 1960, 255 },
	{ 1960, -765 },
	{ 1989, 255 },
	{ 1989, -765 },
	{ 1576, 255 },
	{ 1576, -765 },
	{ 1546, 255 },
	{ 1960, 255 },
	{ 1546, 255 },
	{ 1989, 255 },
	{ 1576, 255 },
	{ 1546, 255 },
	{ 1960, 255 },
	{ 1576, 255 },
	{ 1989, 255 },
	{ 2476, 255 },
	{ 2065, 255 },
	{ 2503, 255 },
	{ 2090, 255 },
	{ 2065, 255 },
	{ 2476, 255 },
	{ 2090, 255 },
	{ 2503, 255 },
	{ 2065, -765 },
	{ 2476, 255 },
	{ 2476, -765 },
	{ 2503, 255 },
	{ 2503, -765 },
	{ 2090, 255 },
	{ 2090, -765 },
	{ 2065, 255 },
	{ 2065, -765 },
	{ 2476, 255 },
	{ 2994, 255 },
	{ 2581, 255 },
	{ 3022, 255 },
	{ 2608, 255 },
	{ 2994, -765 },
	{ 3022, 255 },
	{ 3022, -765 },
	{ 2608, 255 },
	{ 2608, -765 },
	{ 2581, 255 },
	{ 2581, -765 },
	{ 2994, 255 },
	{ 2994, -765 },
	{ 3022, 255 },
	{ 2581, 255 },
	{ 2994, 255 },
	{ 2608, 255 },
	{ 3022, 255 },
	{ 3509, 255 },
	{ 3095, 255 },
	{ 3538, 255 },
	{ 3123, 255 },
	{ 3509, -765 },
	{ 3538, 255 },
	{ 3538, -765 },
	{ 3123, 255 },
	{ 3123, -765 },
	{ 3095, 255 },
	{ 3095, -765 },
	{ 3509, 255 },
	{ 3509, -765 },
	{ 3538, 255 },
	{ 3095, 255 },
	{ 3509, 255 },
	{ 3123, 255 },
	{ 3538, 255 },
	{ 4027, 255 },
	{ 3614, 255 },
	{ 4052, 255 },
	{ 3639, 255 },
	{ 3614, 255 },
	{ 4027, 255 },
	{ 3639, 255 },
	{ 4052, 255 },
	{ 4052, -765 },
	{ 3639, 255 },
	{ 3639, -765 },
	{ 3614, 255 },
	{ 3614, -765 },
	{ 4027, 255 },
	{ 4027, -765 },
	{ 4052, 255 },
	{ 4052, -765 },
	{ 3639, 255 },
	{ 4155, -765 },
	{ 4130, 255 },
	{ 4130, -765 },
	{ 4543, 255 },
	{ 4543, -765 },
	{ 4569, 255 },
	{ 4569, -765 },
	{ 4155, 255 },
	{ 4155, -765 },
	{ 4130, 255 },
	{ 4543, 255 },
	{ 4130, 255 },
	{ 4569, 255 },
	{ 4155, 255 },
	{ 4130, 255 },
	{ 4543, 255 },
	{ 4155, 255 },
	{ 4569, 255 },
	{ 4674, -765 },
	{ 4646, 255 },
	{ 4646, -765 },
	{ 5060, 255 },
	{ 5060, -765 },
	{ 5087, 255 },
	{ 5087, -765 },
	{ 4674, 255 },
	{ 4674, -765 },
	{ 4646, 255 },
	{ 5060, 255 },
	{ 4646, 255 },
	{ 5087, 255 },
	{ 4674, 255 },
	{ 4646, 255 },
	{ 5060, 255 },
	{ 4674, 255 },
	{ 5087, 255 },
	{ 5163, 255 },
	{ 5190, 255 },
	{ 5190, -765 },
	{ 5603, -765 },
	{ 5190, -765 },
	{ 5163, -765 },
	{ 5163, 255 },
	{ 5576, 255 },
	{ 5190, 255 },
	{ 5603, 255 },
	{ 5603, -765 },
	{ 5576, -765 },
	{ 5576, 255 },
	{ 5163, 255 },
	{ 5603, 255 },
	{ 5190, 255 },
	{ 5603, 255 },
	{ 5576, 255 },
	{ 5576, -765 },
	{ 5163, -765 },
	{ 6090, 255 },
	{ 5677, 255 },
	{ 6120, 255 },
	{ 5705, 255 },
	{ 6090, -765 },
	{ 6120, 255 },
	{ 6120, -765 },
	{ 5705, 255 },
	{ 5705, -765 },
	{ 5677, 255 },
	{ 5677, -765 },
	{ 6090, 255 },
	{ 6090, -765 },
	{ 6120, 255 },
	{ 5677, 255 },
	{ 6090, 255 },
	{ 5705, 255 },
	{ 6120, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002EA50[] = {
	{ NJD_MESHSET_TRIMESH | 0, 37, poly_0002E4E8, NULL, NULL, NULL, uv_0002E6E8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002EA68[] = {
	{ -57.8432f, -11.72243f, -10 },
	{ -57.8432f, -11.72243f, 10 },
	{ -58.36414f, -8.768008f, -10 },
	{ -58.36414f, -8.768008f, 10 },
	{ -49.96475f, -10.33325f, -10 },
	{ -49.96475f, -10.33325f, 10 },
	{ -50.48568f, -7.378827f, -10 },
	{ -50.48568f, -7.378827f, 10 },
	{ -47.99511f, -9.985951f, -10 },
	{ -47.99511f, -9.985951f, 10 },
	{ -48.51605f, -7.031529f, -10 },
	{ -48.51605f, -7.031529f, 10 },
	{ -40.11667f, -8.596766f, -10 },
	{ -40.11667f, -8.596766f, 10 },
	{ -40.6376f, -5.642343f, -10 },
	{ -40.6376f, -5.642343f, 10 },
	{ -38.14703f, -8.249472f, -10 },
	{ -38.14703f, -8.249472f, 10 },
	{ -38.668f, -5.29505f, -10 },
	{ -38.668f, -5.29505f, 10 },
	{ -30.26858f, -6.860285f, -10 },
	{ -30.26858f, -6.860285f, 10 },
	{ -30.78952f, -3.905867f, -10 },
	{ -30.78952f, -3.905866f, 10 },
	{ -28.29898f, -6.512991f, -10 },
	{ -28.29898f, -6.512991f, 10 },
	{ -28.81992f, -3.558569f, -10 },
	{ -28.81992f, -3.558568f, 10 },
	{ -20.4205f, -5.123805f, -10 },
	{ -20.4205f, -5.123805f, 10 },
	{ -20.94147f, -2.169379f, -10 },
	{ -20.94147f, -2.169378f, 10 },
	{ -18.4509f, -4.776507f, -10 },
	{ -18.4509f, -4.776507f, 10 },
	{ -18.97183f, -1.822082f, -10 },
	{ -18.97183f, -1.822081f, 10 },
	{ -10.57245f, -3.387321f, -10 },
	{ -10.57245f, -3.387321f, 10 },
	{ -11.09338f, -0.432899f, -10 },
	{ -11.09338f, -0.432899f, 10 },
	{ -8.602814f, -3.040024f, -10 },
	{ -8.602814f, -3.040023f, 10 },
	{ -9.123778f, -0.08560199f, -10 },
	{ -9.123778f, -0.08560099f, 10 },
	{ -0.724365f, -1.650841f, -10 },
	{ -0.724365f, -1.650841f, 10 },
	{ -1.2453f, 1.303581f, -10 },
	{ -1.2453f, 1.303581f, 10 },
	{ 1.24527f, -1.303543f, -10 },
	{ 1.24527f, -1.303543f, 10 },
	{ 0.724304f, 1.650879f, -10 },
	{ 0.724304f, 1.650879f, 10 },
	{ 9.123717f, 0.085639f, -10 },
	{ 9.123717f, 0.08564f, 10 },
	{ 8.602782f, 3.040061f, -10 },
	{ 8.602782f, 3.040062f, 10 },
	{ 11.09332f, 0.432937f, -10 },
	{ 11.09332f, 0.432937f, 10 },
	{ 10.57239f, 3.387359f, -10 },
	{ 10.57239f, 3.38736f, 10 },
	{ 18.9718f, 1.822119f, -10 },
	{ 18.9718f, 1.82212f, 10 },
	{ 18.45087f, 4.776542f, -10 },
	{ 18.45087f, 4.776542f, 10 },
	{ 20.9414f, 2.169416f, -10 },
	{ 20.9414f, 2.169417f, 10 },
	{ 20.42047f, 5.123839f, -10 },
	{ 20.42047f, 5.123839f, 10 },
	{ 28.81988f, 3.558599f, -10 },
	{ 28.81988f, 3.5586f, 10 },
	{ 28.29892f, 6.513021f, -10 },
	{ 28.29892f, 6.513021f, 10 },
	{ 30.78949f, 3.905897f, -10 },
	{ 30.78949f, 3.905898f, 10 },
	{ 30.26855f, 6.860319f, -10 },
	{ 30.26855f, 6.860319f, 10 },
	{ 38.66797f, 5.29508f, -10 },
	{ 38.66797f, 5.29508f, 10 },
	{ 38.147f, 8.249501f, -10 },
	{ 38.147f, 8.249501f, 10 },
	{ 40.63757f, 5.642377f, -10 },
	{ 40.63757f, 5.642377f, 10 },
	{ 40.11663f, 8.5968f, -10 },
	{ 40.11663f, 8.5968f, 10 },
	{ 48.51602f, 7.03156f, -10 },
	{ 48.51602f, 7.03156f, 10 },
	{ 47.99509f, 9.985983f, -10 },
	{ 47.99509f, 9.985983f, 10 },
	{ 50.48566f, 7.378858f, -10 },
	{ 50.48566f, 7.378858f, 10 },
	{ 49.96469f, 10.33328f, -10 },
	{ 49.96469f, 10.33328f, 10 },
	{ 58.3641f, 8.76804f, -10 },
	{ 58.3641f, 8.76804f, 10 },
	{ 57.84317f, 11.72247f, -10 },
	{ 57.84317f, 11.72247f, 10 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002EEE8[] = {
	{ -0.468324f, -0.668834f, -0.57735f },
	{ -0.468324f, -0.668834f, 0.57735f },
	{ -0.668834f, 0.468324f, -0.57735f },
	{ -0.668834f, 0.468324f, 0.57735f },
	{ 0.668834f, -0.468324f, -0.57735f },
	{ 0.668834f, -0.468324f, 0.57735f },
	{ 0.468324f, 0.668834f, -0.57735f },
	{ 0.468324f, 0.668834f, 0.57735f },
	{ -0.468324f, -0.668834f, -0.57735f },
	{ -0.468324f, -0.668834f, 0.57735f },
	{ -0.668834f, 0.468324f, -0.57735f },
	{ -0.668834f, 0.468324f, 0.57735f },
	{ 0.668834f, -0.468324f, -0.57735f },
	{ 0.668834f, -0.468324f, 0.57735f },
	{ 0.468324f, 0.668834f, -0.57735f },
	{ 0.468324f, 0.668834f, 0.57735f },
	{ -0.468321f, -0.668836f, -0.577351f },
	{ -0.468321f, -0.668836f, 0.577351f },
	{ -0.668837f, 0.468321f, -0.57735f },
	{ -0.668837f, 0.468321f, 0.57735f },
	{ 0.668834f, -0.468324f, -0.57735f },
	{ 0.668834f, -0.468324f, 0.57735f },
	{ 0.468324f, 0.668834f, -0.57735f },
	{ 0.468324f, 0.668834f, 0.57735f },
	{ -0.468324f, -0.668834f, -0.57735f },
	{ -0.468324f, -0.668834f, 0.57735f },
	{ -0.668834f, 0.468324f, -0.57735f },
	{ -0.668834f, 0.468324f, 0.57735f },
	{ 0.668837f, -0.468321f, -0.57735f },
	{ 0.668837f, -0.468321f, 0.57735f },
	{ 0.46832f, 0.668836f, -0.577351f },
	{ 0.468321f, 0.668836f, 0.577351f },
	{ -0.468324f, -0.668834f, -0.57735f },
	{ -0.468324f, -0.668834f, 0.57735f },
	{ -0.668834f, 0.468324f, -0.57735f },
	{ -0.668834f, 0.468324f, 0.57735f },
	{ 0.668834f, -0.468324f, -0.57735f },
	{ 0.668834f, -0.468324f, 0.57735f },
	{ 0.468324f, 0.668834f, -0.57735f },
	{ 0.468324f, 0.668834f, 0.57735f },
	{ -0.468321f, -0.668836f, -0.577351f },
	{ -0.468321f, -0.668836f, 0.577351f },
	{ -0.668837f, 0.468321f, -0.57735f },
	{ -0.668837f, 0.468321f, 0.57735f },
	{ 0.668834f, -0.468324f, -0.57735f },
	{ 0.668834f, -0.468324f, 0.57735f },
	{ 0.468324f, 0.668834f, -0.57735f },
	{ 0.468324f, 0.668834f, 0.57735f },
	{ -0.468321f, -0.668836f, -0.577351f },
	{ -0.468321f, -0.668836f, 0.577351f },
	{ -0.668837f, 0.468321f, -0.57735f },
	{ -0.668837f, 0.468321f, 0.57735f },
	{ 0.668834f, -0.468324f, -0.57735f },
	{ 0.668834f, -0.468324f, 0.57735f },
	{ 0.468324f, 0.668834f, -0.57735f },
	{ 0.468324f, 0.668834f, 0.57735f },
	{ -0.468324f, -0.668834f, -0.57735f },
	{ -0.468324f, -0.668834f, 0.57735f },
	{ -0.668834f, 0.468324f, -0.57735f },
	{ -0.668834f, 0.468324f, 0.57735f },
	{ 0.668834f, -0.468324f, -0.57735f },
	{ 0.668834f, -0.468324f, 0.57735f },
	{ 0.468325f, 0.668834f, -0.57735f },
	{ 0.468325f, 0.668834f, 0.57735f },
	{ -0.468325f, -0.668834f, -0.57735f },
	{ -0.468324f, -0.668834f, 0.57735f },
	{ -0.668834f, 0.468324f, -0.57735f },
	{ -0.668834f, 0.468324f, 0.57735f },
	{ 0.668837f, -0.468321f, -0.57735f },
	{ 0.668837f, -0.468321f, 0.57735f },
	{ 0.468321f, 0.668836f, -0.577351f },
	{ 0.468321f, 0.668836f, 0.577351f },
	{ -0.468325f, -0.668834f, -0.57735f },
	{ -0.468324f, -0.668834f, 0.57735f },
	{ -0.668834f, 0.468324f, -0.57735f },
	{ -0.668834f, 0.468324f, 0.57735f },
	{ 0.668837f, -0.468321f, -0.57735f },
	{ 0.668837f, -0.468321f, 0.57735f },
	{ 0.468321f, 0.668836f, -0.577351f },
	{ 0.468321f, 0.668836f, 0.577351f },
	{ -0.468324f, -0.668834f, -0.57735f },
	{ -0.468324f, -0.668834f, 0.57735f },
	{ -0.668834f, 0.468324f, -0.57735f },
	{ -0.668834f, 0.468324f, 0.57735f },
	{ 0.668834f, -0.468324f, -0.57735f },
	{ 0.668834f, -0.468324f, 0.57735f },
	{ 0.468324f, 0.668834f, -0.57735f },
	{ 0.468324f, 0.668834f, 0.57735f },
	{ -0.468321f, -0.668836f, -0.577351f },
	{ -0.468321f, -0.668836f, 0.577351f },
	{ -0.668837f, 0.468321f, -0.57735f },
	{ -0.668837f, 0.468321f, 0.57735f },
	{ 0.668834f, -0.468324f, -0.57735f },
	{ 0.668834f, -0.468324f, 0.57735f },
	{ 0.468324f, 0.668834f, -0.57735f },
	{ 0.468324f, 0.668834f, 0.57735f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002F368 = { vertex_0002EA68, normal_0002EEE8, LengthOfArray(vertex_0002EA68), meshlist_0002EA50, matlist_0002E4C0, LengthOfArray(meshlist_0002EA50), LengthOfArray(matlist_0002E4C0),{ -0.00015f, 0.000019f, 0 }, 66.90222f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002F390 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002F368, -460.9259f, 45.25359f, 190.825f, 0x8B4, 0xFFFFEB94, 0xFFFFED7B, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002F3C4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 36, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002F3D8[] = {
	4, 34, 38, 32, 36,
	4, 42, 46, 40, 44,
	4, 47, 46, 43, 42,
	4, 47, 43, 45, 41,
	4, 43, 42, 41, 40,
	4, 1, 0, 3, 2,
	4, 5, 1, 7, 3,
	4, 3, 2, 7, 6,
	4, 0, 4, 2, 6,
	4, 39, 38, 35, 34,
	4, 9, 8, 11, 10,
	4, 13, 9, 15, 11,
	4, 11, 10, 15, 14,
	4, 8, 12, 10, 14,
	4, 39, 35, 37, 33,
	4, 17, 16, 19, 18,
	4, 21, 17, 23, 19,
	4, 19, 18, 23, 22,
	4, 16, 20, 18, 22,
	4, 35, 34, 33, 32,
	4, 27, 26, 25, 24,
	4, 31, 27, 29, 25,
	4, 31, 30, 27, 26,
	4, 26, 30, 24, 28
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002F4C8[] = {
	{ 60, -1259 },
	{ 2, -1259 },
	{ 58, 250 },
	{ 0, 250 },
	{ 60, -1259 },
	{ 2, -1259 },
	{ 58, 250 },
	{ 0, 250 },
	{ 254, -1274 },
	{ 208, -1266 },
	{ 252, -516 },
	{ 209, -516 },
	{ 60, -1259 },
	{ 2, -1259 },
	{ 58, 250 },
	{ 0, 250 },
	{ 253, -1259 },
	{ 2, -1259 },
	{ 252, 253 },
	{ 1, 253 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, -1259 },
	{ 253, -1259 },
	{ 0, 250 },
	{ 58, 250 },
	{ 2, -1259 },
	{ 60, -1259 },
	{ 254, -1274 },
	{ 208, -1266 },
	{ 252, -516 },
	{ 209, -516 },
	{ 0, 250 },
	{ 58, 250 },
	{ 2, -1259 },
	{ 60, -1259 },
	{ 254, -1274 },
	{ 208, -1266 },
	{ 252, -516 },
	{ 209, -516 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, -1259 },
	{ 253, -1259 },
	{ 0, 250 },
	{ 58, 250 },
	{ 2, -1259 },
	{ 60, -1259 },
	{ 254, -1274 },
	{ 208, -1266 },
	{ 252, -516 },
	{ 209, -516 },
	{ 0, 250 },
	{ 58, 250 },
	{ 2, -1259 },
	{ 60, -1259 },
	{ 60, -1259 },
	{ 2, -1259 },
	{ 58, 250 },
	{ 0, 250 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, -1259 },
	{ 253, -1259 },
	{ 0, 250 },
	{ 58, 250 },
	{ 2, -1259 },
	{ 60, -1259 },
	{ 254, -1274 },
	{ 208, -1266 },
	{ 252, -516 },
	{ 209, -516 },
	{ 0, 250 },
	{ 58, 250 },
	{ 2, -1259 },
	{ 60, -1259 },
	{ 253, -1259 },
	{ 2, -1259 },
	{ 252, 253 },
	{ 1, 253 },
	{ 253, -1259 },
	{ 2, -1259 },
	{ 252, 253 },
	{ 1, 253 },
	{ 60, -1259 },
	{ 2, -1259 },
	{ 58, 250 },
	{ 0, 250 },
	{ 254, -1274 },
	{ 208, -1266 },
	{ 252, -516 },
	{ 209, -516 },
	{ 60, -1259 },
	{ 2, -1259 },
	{ 58, 250 },
	{ 0, 250 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002F648[] = {
	{ NJD_MESHSET_TRIMESH | 0, 24, poly_0002F3D8, NULL, NULL, NULL, uv_0002F4C8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002F660[] = {
	{ -100.7633f, -78.79956f, -44.13133f },
	{ -87.00297f, -78.79956f, -64.72518f },
	{ -100.7633f, 22.26794f, -44.13133f },
	{ -87.00297f, 22.26794f, -64.72518f },
	{ -93.24861f, -78.79956f, -35.78066f },
	{ -77.83793f, -78.79956f, -58.7553f },
	{ -93.24861f, 28.80948f, -35.78066f },
	{ -77.83793f, 28.80948f, -58.7553f },
	{ -77.36623f, -78.79956f, -74.30425f },
	{ -56.77237f, -78.79956f, -88.06465f },
	{ -77.36623f, 22.26793f, -74.30425f },
	{ -56.77237f, 22.26794f, -88.06465f },
	{ -73.83817f, -78.79956f, -62.90008f },
	{ -50.66664f, -78.88666f, -78.40755f },
	{ -73.83817f, 28.80948f, -62.90008f },
	{ -50.66664f, 28.72238f, -78.40755f },
	{ -43.78952f, -78.79956f, -93.39617f },
	{ -19.49741f, -78.79956f, -98.22818f },
	{ -43.78952f, 22.26794f, -93.39617f },
	{ -19.49741f, 22.26794f, -98.22818f },
	{ -45.36132f, -78.88666f, -80.65059f },
	{ -17.77448f, -78.79962f, -86.19838f },
	{ -45.36132f, 28.72238f, -80.65059f },
	{ -17.77448f, 28.80941f, -86.19838f },
	{ -43.78954f, -78.79956f, 93.39617f },
	{ -19.49742f, -78.79956f, 98.22818f },
	{ -43.78954f, 22.26794f, 93.39617f },
	{ -19.49742f, 22.26794f, 98.22818f },
	{ -45.36134f, -78.88668f, 80.65056f },
	{ -17.77448f, -78.79964f, 86.19838f },
	{ -45.36134f, 28.72238f, 80.65057f },
	{ -17.77452f, 28.80941f, 86.19839f },
	{ -77.36623f, -78.79956f, 74.30424f },
	{ -56.77238f, -78.79956f, 88.06463f },
	{ -77.36623f, 22.26794f, 74.30424f },
	{ -56.77238f, 22.26794f, 88.06463f },
	{ -73.83818f, -78.79956f, 62.90008f },
	{ -50.66664f, -78.88666f, 78.40755f },
	{ -73.83818f, 28.80948f, 62.90008f },
	{ -50.66664f, 28.72238f, 78.40755f },
	{ -100.7633f, -78.79956f, 44.13135f },
	{ -87.00298f, -78.79956f, 64.7252f },
	{ -100.7633f, 22.26794f, 44.13135f },
	{ -87.00298f, 22.26794f, 64.7252f },
	{ -93.24861f, -78.79956f, 35.78066f },
	{ -77.83793f, -78.79956f, 58.7553f },
	{ -93.24861f, 28.80948f, 35.78066f },
	{ -77.83793f, 28.80948f, 58.7553f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002F8A0[] = {
	{ -0.99742f, 0, 0.071793f },
	{ -0.200828f, 0, -0.979627f },
	{ -0.921167f, 0.389132f, 0.005309f },
	{ -0.238389f, 0.390218f, -0.889326f },
	{ -0.743333f, 0, 0.6689219f },
	{ 0.5457979f, 0, -0.837916f },
	{ -0.746978f, 0.642462f, 0.171077f },
	{ -0.054333f, 0.713564f, -0.69848f },
	{ -0.942468f, 0, -0.334298f },
	{ 0.209885f, 0, -0.977726f },
	{ -0.842194f, 0.399256f, -0.362359f },
	{ 0.138774f, 0.399901f, -0.905992f },
	{ -0.9553289f, 0, 0.295546f },
	{ 0.845232f, 0, -0.5344f },
	{ -0.763518f, 0.633878f, -0.123445f },
	{ 0.24104f, 0.729574f, -0.640017f },
	{ -0.733719f, 0, -0.679453f },
	{ 0.577855f, 0, -0.816139f },
	{ -0.626404f, 0.40859f, -0.663831f },
	{ 0.484907f, 0.408027f, -0.77355f },
	{ -0.9924819f, 0, -0.122394f },
	{ 0.989899f, 0, -0.141775f },
	{ -0.670242f, 0.6228549f, -0.403517f },
	{ 0.475716f, 0.742357f, -0.471806f },
	{ -0.733719f, 0, 0.679453f },
	{ 0.5778559f, 0, 0.816139f },
	{ -0.626404f, 0.40859f, 0.6638319f },
	{ 0.484907f, 0.408026f, 0.77355f },
	{ -0.9924819f, 0, 0.122394f },
	{ 0.989899f, 0, 0.141775f },
	{ -0.670243f, 0.6228549f, 0.403518f },
	{ 0.475715f, 0.742357f, 0.471807f },
	{ -0.942467f, 0, 0.334298f },
	{ 0.209884f, 0, 0.977726f },
	{ -0.842194f, 0.399256f, 0.36236f },
	{ 0.138773f, 0.3999f, 0.905992f },
	{ -0.9553289f, 0, -0.295546f },
	{ 0.845231f, 0, 0.534401f },
	{ -0.763518f, 0.633878f, 0.123445f },
	{ 0.241039f, 0.729573f, 0.640018f },
	{ -0.99742f, 0, -0.071792f },
	{ -0.200828f, 0, 0.979627f },
	{ -0.921167f, 0.389132f, -0.005308f },
	{ -0.238389f, 0.390218f, 0.889326f },
	{ -0.743334f, 0, -0.668921f },
	{ 0.545799f, 0, 0.837916f },
	{ -0.746978f, 0.6424609f, -0.171078f },
	{ -0.054333f, 0.713564f, 0.69848f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002FAE0 = { vertex_0002F660, normal_0002F8A0, LengthOfArray(vertex_0002F660), meshlist_0002F648, matlist_0002F3C4, LengthOfArray(meshlist_0002F648), LengthOfArray(matlist_0002F3C4),{ -59.26891f, -25.0386f, 0 }, 112.0196f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002FB08 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002FAE0, 287.7846f, 76.10244f, -39.00063f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002FB3C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002FB50[] = {
	3, 3, 1, 0,
	3, 1, 2, 0,
	3, 2, 3, 0,
	3, 7, 5, 4,
	3, 5, 6, 4,
	3, 6, 7, 4,
	3, 14, 15, 12,
	3, 13, 14, 12,
	3, 15, 13, 12,
	3, 11, 9, 8,
	3, 9, 10, 8,
	3, 10, 11, 8,
	3, 16, 17, 19,
	3, 16, 18, 17,
	3, 16, 19, 18,
	3, 20, 21, 23,
	3, 20, 22, 21,
	3, 20, 23, 22,
	3, 28, 31, 30,
	3, 28, 30, 29,
	3, 28, 29, 31,
	3, 24, 25, 27,
	3, 24, 26, 25,
	3, 24, 27, 26
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002FC10[] = {
	{ 255, 127 },
	{ 122, 206 },
	{ 132, 127 },
	{ 255, 127 },
	{ 122, 206 },
	{ 132, 127 },
	{ 7, 254 },
	{ 7, 8 },
	{ 55, 136 },
	{ 255, 127 },
	{ 122, 206 },
	{ 132, 127 },
	{ 255, 127 },
	{ 122, 206 },
	{ 132, 127 },
	{ 7, 254 },
	{ 7, 8 },
	{ 55, 136 },
	{ 7, 254 },
	{ 7, 8 },
	{ 55, 136 },
	{ 255, 127 },
	{ 122, 206 },
	{ 132, 127 },
	{ 255, 127 },
	{ 122, 206 },
	{ 132, 127 },
	{ 255, 127 },
	{ 122, 206 },
	{ 132, 127 },
	{ 255, 127 },
	{ 122, 206 },
	{ 132, 127 },
	{ 7, 254 },
	{ 7, 8 },
	{ 55, 136 },
	{ 132, 127 },
	{ 255, 127 },
	{ 122, 206 },
	{ 132, 127 },
	{ 255, 127 },
	{ 122, 206 },
	{ 55, 136 },
	{ 7, 254 },
	{ 7, 8 },
	{ 132, 127 },
	{ 255, 127 },
	{ 122, 206 },
	{ 132, 127 },
	{ 255, 127 },
	{ 122, 206 },
	{ 55, 136 },
	{ 7, 254 },
	{ 7, 8 },
	{ 55, 136 },
	{ 7, 254 },
	{ 7, 8 },
	{ 132, 127 },
	{ 255, 127 },
	{ 122, 206 },
	{ 132, 127 },
	{ 255, 127 },
	{ 122, 206 },
	{ 132, 127 },
	{ 255, 127 },
	{ 122, 206 },
	{ 132, 127 },
	{ 255, 127 },
	{ 122, 206 },
	{ 55, 136 },
	{ 7, 254 },
	{ 7, 8 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002FD30[] = {
	{ NJD_MESHSET_TRIMESH | 0, 24, poly_0002FB50, NULL, NULL, NULL, uv_0002FC10, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002FD48[] = {
	{ -51.53344f, 1.506203f, -30.2162f },
	{ -46.42292f, 0.017624f, -35.28794f },
	{ -58.48099f, 0.017612f, -32.10621f },
	{ -49.6964f, 0.017677f, -23.25442f },
	{ -64.94805f, 1.47279f, -60.60559f },
	{ -57.75648f, -0.01572f, -60.25718f },
	{ -68.24214f, -0.015709f, -67.00783f },
	{ -68.84555f, -0.015694f, -54.55172f },
	{ -29.0092f, 1.472824f, -10.49904f },
	{ -24.94855f, -0.015717f, -16.44477f },
	{ -36.18863f, -0.015724f, -11.04286f },
	{ -25.89047f, -0.015724f, -4.009498f },
	{ 0.26875f, 1.472809f, -0.043162f },
	{ 2.528143f, -0.015678f, -6.879545f },
	{ -6.781359f, -0.015686f, 1.41821f },
	{ 5.059503f, -0.015709f, 5.331646f },
	{ -51.10693f, 1.506153f, -115.4085f },
	{ -44.50823f, 0.017641f, -112.5279f },
	{ -56.90089f, 0.017629f, -111.1341f },
	{ -51.91169f, 0.017639f, -122.5634f },
	{ -65.1906f, 1.472826f, -85.8832f },
	{ -58.06971f, -0.015738f, -84.8186f },
	{ -69.67301f, -0.015722f, -80.24867f },
	{ -67.82902f, -0.015709f, -92.58235f },
	{ -28.96619f, 1.472806f, -135.3733f },
	{ -25.08567f, -0.015707f, -129.3085f },
	{ -36.15871f, -0.015702f, -135.0451f },
	{ -25.65417f, -0.015702f, -141.7663f },
	{ -0.26152f, 1.472811f, -145.6188f },
	{ 0.973473f, -0.0157f, -138.5255f },
	{ -7.021996f, -0.015704f, -148.0959f },
	{ 5.263924f, -0.015701f, -150.235f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002FEC8[] = {
	{ -0.00003f, 1, -0.00005f },
	{ 0.143705f, 0.979289f, -0.142622f },
	{ -0.195365f, 0.979289f, -0.053151f },
	{ 0.051654f, 0.979291f, 0.195756f },
	{ 0.000002f, 1, -0.00003f },
	{ 0.202219f, 0.979291f, 0.009795f },
	{ -0.09262399f, 0.979291f, -0.180025f },
	{ -0.109591f, 0.979292f, 0.170226f },
	{ 0.000002f, 1, 0.000001f },
	{ 0.114183f, 0.979291f, -0.167189f },
	{ -0.201883f, 0.9792899f, -0.015291f },
	{ 0.08769599f, 0.979291f, 0.182481f },
	{ 0, 1, 0.000007f },
	{ 0.06353199f, 0.979292f, -0.192225f },
	{ -0.19824f, 0.979292f, 0.041096f },
	{ 0.134711f, 0.979291f, 0.151136f },
	{ 0, 1, -0.00001f },
	{ 0.185547f, 0.979291f, 0.080998f },
	{ -0.16292f, 0.979291f, 0.120191f },
	{ -0.02263f, 0.979291f, -0.201188f },
	{ 0.000001f, 1, 0.000002f },
	{ 0.200237f, 0.9792899f, 0.029938f },
	{ -0.126042f, 0.9792899f, 0.158442f },
	{ -0.07419f, 0.9792899f, -0.188377f },
	{ 0, 1, -0.00001f },
	{ 0.109115f, 0.979291f, 0.170535f },
	{ -0.202245f, 0.979291f, 0.00923f },
	{ 0.09313f, 0.979291f, -0.179764f },
	{ 0.000001f, 1, -0.00003f },
	{ 0.034727f, 0.979291f, 0.199455f },
	{ -0.190098f, 0.979291f, -0.069654f },
	{ 0.155371f, 0.979291f, -0.129803f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00030048 = { vertex_0002FD48, normal_0002FEC8, LengthOfArray(vertex_0002FD48), meshlist_0002FD30, matlist_0002FB3C, LengthOfArray(meshlist_0002FD30), LengthOfArray(matlist_0002FB3C),{ -32.20454f, 0.745233f, -72.45165f }, 89.01981f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00030070 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00030048, -50.34072f, 0.521253f, 278.4623f, 0, 0x89C7, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000300A4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 21, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 22, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000300E0[] = {
	18, 8, 4, 9, 12, 14, 10, 13, 0, 5, 11, 15, 1, 6, 2, 7, 3, 8, 4
};

extern "C" __declspec(dllexport) Sint16 poly_00030106[] = {
	0x8000u | 8, 15, 5, 6, 13, 7, 14, 8, 9
};

extern "C" __declspec(dllexport) NJS_TEX uv_00030118[] = {
	{ 0, 36 },
	{ 255, 109 },
	{ 0, 114 },
	{ 255, -765 },
	{ 0, -765 },
	{ 255, -609 },
	{ 0, -601 },
	{ 255, -504 },
	{ 0, -502 },
	{ 255, -370 },
	{ 0, -384 },
	{ 255, -223 },
	{ 0, -240 },
	{ 255, -115 },
	{ 0, -115 },
	{ 255, 38 },
	{ 0, 36 },
	{ 255, 109 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00030160[] = {
	{ 58, 240 },
	{ 147, 254 },
	{ 0, 144 },
	{ 221, 225 },
	{ 29, 51 },
	{ 255, 105 },
	{ 135, 0 },
	{ 194, 14 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00030180[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00030106, NULL, NULL, NULL, uv_00030160, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000300E0, NULL, NULL, NULL, uv_00030118, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000301B0[] = {
	{ 0.419251f, 0, -5.55258f },
	{ -5.516381f, 0, -0.71654f },
	{ -4.171842f, 0, 2.321979f },
	{ -0.00245f, 0, 4.563719f },
	{ 2.114785f, 0, 4.03441f },
	{ 0.355196f, 4.680005f, -3.781362f },
	{ -3.581837f, 4.680005f, -0.82505f },
	{ -2.794527f, 4.680005f, 1.656237f },
	{ 0.031944f, 4.680005f, 3.03427f },
	{ 1.591946f, 4.680005f, 2.644269f },
	{ 3.392695f, 0, -4.167054f },
	{ -3.612827f, 0, -4.815241f },
	{ 4.653725f, 0, 0.377428f },
	{ 2.305195f, 4.680006f, -3.001362f },
	{ 3.20773f, 4.680008f, 0.218766f },
	{ -2.035714f, 4.680464f, -3.392018f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00030270[] = {
	{ 0.106878f, 0.347662f, -0.931509f },
	{ -0.935767f, 0.350086f, -0.042196f },
	{ -0.7194549f, 0.315156f, 0.61892f },
	{ -0.104122f, 0.30964f, 0.945136f },
	{ 0.532434f, 0.301497f, 0.790958f },
	{ 0.078667f, 0.7774079f, -0.6240579f },
	{ -0.656689f, 0.7528239f, -0.044899f },
	{ -0.491832f, 0.74073f, 0.457624f },
	{ -0.080809f, 0.75151f, 0.654753f },
	{ 0.391824f, 0.743951f, 0.5413049f },
	{ 0.707455f, 0.335422f, -0.622093f },
	{ -0.56759f, 0.370052f, -0.735461f },
	{ 0.942575f, 0.297526f, 0.151756f },
	{ 0.510976f, 0.742721f, -0.432746f },
	{ 0.668936f, 0.734576f, 0.11368f },
	{ -0.370449f, 0.760824f, -0.532837f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00030330 = { vertex_000301B0, normal_00030270, LengthOfArray(vertex_000301B0), meshlist_00030180, matlist_000300A4, LengthOfArray(meshlist_00030180), LengthOfArray(matlist_000300A4),{ -0.431328f, 2.340232f, -0.494431f }, 7.172352f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00030358 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00030330, -463.8519f, 60.02506f, -21.34454f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0003038C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 34, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 24, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 24, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000303C8[] = {
	4, 5, 9, 0, 13,
	5, 25, 29, 0, 1, 5,
	18, 26, 21, 22, 17, 18, 13, 14, 9, 10, 5, 6, 1, 2, 29, 30, 25, 26, 21,
	5, 13, 17, 0, 21, 25
};

extern "C" __declspec(dllexport) Sint16 poly_00030410[] = {
	18, 6, 11, 10, 15, 14, 19, 18, 23, 22, 27, 26, 31, 30, 3, 2, 7, 6, 11,
	18, 12, 7, 8, 3, 4, 31, 32, 27, 28, 23, 24, 19, 20, 15, 16, 11, 12, 7
};

extern "C" __declspec(dllexport) Sint16 poly_0003045C[] = {
	0x8000u | 6, 36, 33, 47, 46, 43, 42,
	8, 44, 37, 43, 35, 42, 34, 41, 39,
	0x8000u | 6, 41, 42, 45, 46, 40, 33,
	0x8000u | 6, 43, 44, 47, 48, 36, 38,
	0x8000u | 8, 52, 49, 63, 62, 59, 58, 51, 50,
	0x8000u | 8, 55, 50, 57, 58, 61, 62, 56, 49,
	0x8000u | 8, 51, 53, 59, 60, 63, 64, 52, 54,
	8, 77, 72, 78, 65, 79, 68, 80, 70,
	8, 76, 69, 75, 67, 74, 66, 73, 71,
	8, 80, 76, 79, 75, 78, 74, 77, 73,
	0x8000u | 8, 81, 88, 94, 93, 90, 89, 82, 87,
	0x8000u | 8, 82, 83, 90, 91, 94, 95, 81, 84,
	0x8000u | 8, 83, 85, 91, 92, 95, 96, 84, 86,
	8, 109, 104, 110, 97, 111, 100, 112, 102,
	8, 108, 101, 107, 99, 106, 98, 105, 103,
	8, 112, 108, 111, 107, 110, 106, 109, 105,
	0x8000u | 8, 114, 119, 122, 121, 126, 125, 113, 120,
	0x8000u | 8, 115, 114, 123, 122, 127, 126, 116, 113,
	0x8000u | 8, 117, 115, 124, 123, 128, 127, 118, 116,
	8, 137, 135, 138, 130, 139, 131, 140, 133,
	0x8000u | 6, 138, 137, 142, 141, 129, 136,
	0x8000u | 6, 139, 138, 143, 142, 132, 129,
	0x8000u | 6, 140, 139, 144, 143, 134, 132,
	0x8000u | 8, 148, 150, 159, 160, 155, 156, 147, 149,
	0x8000u | 8, 146, 151, 154, 153, 158, 157, 145, 152,
	0x8000u | 8, 147, 146, 155, 154, 159, 158, 148, 145,
	8, 176, 166, 175, 164, 174, 161, 173, 168,
	8, 169, 167, 170, 162, 171, 163, 172, 165,
	8, 173, 169, 174, 170, 175, 171, 176, 172
};

extern "C" __declspec(dllexport) NJS_TEX uv_00030650[] = {
	{ 157, -97 },
	{ 255, -138 },
	{ 255, 0 },
	{ 352, -97 },
	{ 255, 138 },
	{ 157, 97 },
	{ 255, 0 },
	{ 116, 0 },
	{ 157, -97 },
	{ 255, 255 },
	{ 352, 97 },
	{ 434, 180 },
	{ 392, 0 },
	{ 510, 0 },
	{ 352, -97 },
	{ 434, -180 },
	{ 255, -138 },
	{ 255, -254 },
	{ 157, -97 },
	{ 74, -180 },
	{ 116, 0 },
	{ 0 },
	{ 157, 97 },
	{ 74, 180 },
	{ 255, 138 },
	{ 255, 255 },
	{ 352, 97 },
	{ 352, -97 },
	{ 392, 0 },
	{ 255, 0 },
	{ 352, 97 },
	{ 255, 138 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000306D0[] = {
	{ 239, 3 },
	{ 494, 139 },
	{ 494, 3 },
	{ 812, 139 },
	{ 749, 3 },
	{ 980, 138 },
	{ 876, 3 },
	{ 812, 139 },
	{ 749, 3 },
	{ 494, 139 },
	{ 494, 3 },
	{ 176, 138 },
	{ 239, 3 },
	{ 38, 138 },
	{ 111, 3 },
	{ 176, 138 },
	{ 239, 3 },
	{ 494, 139 },
	{ 494, 251 },
	{ 176, 138 },
	{ 175, 251 },
	{ 38, 138 },
	{ 15, 251 },
	{ 176, 138 },
	{ 175, 251 },
	{ 494, 139 },
	{ 494, 251 },
	{ 812, 139 },
	{ 812, 251 },
	{ 980, 138 },
	{ 1004, 251 },
	{ 812, 139 },
	{ 812, 251 },
	{ 494, 139 },
	{ 494, 251 },
	{ 176, 138 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00030760[] = {
	{ 376, -1256 },
	{ 125, -1256 },
	{ 378, -868 },
	{ 127, -868 },
	{ 378, -243 },
	{ 127, -243 },
	{ 502, -230 },
	{ 502, 255 },
	{ 378, -243 },
	{ 378, 242 },
	{ 127, -243 },
	{ 127, 242 },
	{ 1, -230 },
	{ 1, 254 },
	{ 1, -230 },
	{ 127, -243 },
	{ 1, -864 },
	{ 127, -868 },
	{ 0, -1275 },
	{ 125, -1256 },
	{ 378, -243 },
	{ 502, -230 },
	{ 378, -868 },
	{ 502, -864 },
	{ 376, -1256 },
	{ 510, -1275 },
	{ 376, -1256 },
	{ 125, -1256 },
	{ 378, -868 },
	{ 127, -868 },
	{ 378, -243 },
	{ 127, -243 },
	{ 378, 242 },
	{ 127, 242 },
	{ 1, 254 },
	{ 127, 242 },
	{ 1, -230 },
	{ 127, -243 },
	{ 1, -864 },
	{ 127, -868 },
	{ 0, -1275 },
	{ 125, -1256 },
	{ 378, 242 },
	{ 502, 255 },
	{ 378, -243 },
	{ 502, -230 },
	{ 378, -868 },
	{ 502, -864 },
	{ 376, -1256 },
	{ 510, -1275 },
	{ 1, -864 },
	{ 0, -1275 },
	{ 127, -868 },
	{ 125, -1256 },
	{ 378, -868 },
	{ 376, -1256 },
	{ 502, -864 },
	{ 510, -1275 },
	{ 502, -230 },
	{ 502, 255 },
	{ 378, -243 },
	{ 378, 242 },
	{ 127, -243 },
	{ 127, 242 },
	{ 1, -230 },
	{ 1, 254 },
	{ 502, -864 },
	{ 502, -230 },
	{ 378, -868 },
	{ 378, -243 },
	{ 127, -868 },
	{ 127, -243 },
	{ 1, -864 },
	{ 1, -230 },
	{ 125, -1256 },
	{ 0, -1275 },
	{ 127, -868 },
	{ 1, -864 },
	{ 127, -243 },
	{ 1, -230 },
	{ 127, 242 },
	{ 1, 254 },
	{ 127, 242 },
	{ 378, 242 },
	{ 127, -243 },
	{ 378, -243 },
	{ 127, -868 },
	{ 378, -868 },
	{ 125, -1256 },
	{ 376, -1256 },
	{ 378, 242 },
	{ 502, 255 },
	{ 378, -243 },
	{ 502, -230 },
	{ 378, -868 },
	{ 502, -864 },
	{ 376, -1256 },
	{ 510, -1275 },
	{ 1, -864 },
	{ 0, -1275 },
	{ 127, -868 },
	{ 125, -1256 },
	{ 378, -868 },
	{ 376, -1256 },
	{ 502, -864 },
	{ 510, -1275 },
	{ 502, -230 },
	{ 502, 255 },
	{ 378, -243 },
	{ 378, 242 },
	{ 127, -243 },
	{ 127, 242 },
	{ 1, -230 },
	{ 1, 254 },
	{ 502, -864 },
	{ 502, -230 },
	{ 378, -868 },
	{ 378, -243 },
	{ 127, -868 },
	{ 127, -243 },
	{ 1, -864 },
	{ 1, -230 },
	{ 382, 242 },
	{ 508, 254 },
	{ 382, -243 },
	{ 508, -230 },
	{ 382, -868 },
	{ 508, -864 },
	{ 384, -1256 },
	{ 510, -1275 },
	{ 131, 242 },
	{ 382, 242 },
	{ 131, -243 },
	{ 382, -243 },
	{ 131, -868 },
	{ 382, -868 },
	{ 133, -1256 },
	{ 384, -1256 },
	{ 6, 255 },
	{ 131, 242 },
	{ 6, -230 },
	{ 131, -243 },
	{ 6, -864 },
	{ 131, -868 },
	{ 0, -1275 },
	{ 133, -1256 },
	{ 508, -230 },
	{ 508, 254 },
	{ 382, -243 },
	{ 382, 242 },
	{ 131, -243 },
	{ 131, 242 },
	{ 6, -230 },
	{ 6, 255 },
	{ 382, -243 },
	{ 508, -230 },
	{ 382, -868 },
	{ 508, -864 },
	{ 384, -1256 },
	{ 510, -1275 },
	{ 131, -243 },
	{ 382, -243 },
	{ 131, -868 },
	{ 382, -868 },
	{ 133, -1256 },
	{ 384, -1256 },
	{ 6, -230 },
	{ 131, -243 },
	{ 6, -864 },
	{ 131, -868 },
	{ 0, -1275 },
	{ 133, -1256 },
	{ 133, -1256 },
	{ 0, -1275 },
	{ 131, -868 },
	{ 6, -864 },
	{ 131, -243 },
	{ 6, -230 },
	{ 131, 242 },
	{ 6, 255 },
	{ 382, 242 },
	{ 508, 254 },
	{ 382, -243 },
	{ 508, -230 },
	{ 382, -868 },
	{ 508, -864 },
	{ 384, -1256 },
	{ 510, -1275 },
	{ 131, 242 },
	{ 382, 242 },
	{ 131, -243 },
	{ 382, -243 },
	{ 131, -868 },
	{ 382, -868 },
	{ 133, -1256 },
	{ 384, -1256 },
	{ 6, -864 },
	{ 0, -1275 },
	{ 131, -868 },
	{ 133, -1256 },
	{ 382, -868 },
	{ 384, -1256 },
	{ 508, -864 },
	{ 510, -1275 },
	{ 508, -230 },
	{ 508, 254 },
	{ 382, -243 },
	{ 382, 242 },
	{ 131, -243 },
	{ 131, 242 },
	{ 6, -230 },
	{ 6, 255 },
	{ 508, -864 },
	{ 508, -230 },
	{ 382, -868 },
	{ 382, -243 },
	{ 131, -868 },
	{ 131, -243 },
	{ 6, -864 },
	{ 6, -230 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00030AD0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000303C8, NULL, NULL, NULL, uv_00030650, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00030410, NULL, NULL, NULL, uv_000306D0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 29, poly_0003045C, NULL, NULL, NULL, uv_00030760, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00030B18[] = {
	{ 0.146066f, 117.5252f, 0 },
	{ 9.829443f, 115.9871f, 0 },
	{ 17.55638f, 112.3004f, 0 },
	{ 22.61051f, 108.4085f, 0 },
	{ 24.2224f, 104.8801f, 0 },
	{ 7.114466f, 116.0579f, -6.562736f },
	{ 12.53975f, 112.2454f, -12.12635f },
	{ 16.05597f, 108.2916f, -15.84384f },
	{ 17.12782f, 104.7651f, -17.14926f },
	{ 0.09993199f, 116.0494f, -9.28111f },
	{ -0.031446f, 112.3733f, -17.14926f },
	{ 0.231932f, 108.2702f, -22.40658f },
	{ 0.000001f, 104.8279f, -24.25271f },
	{ -5.994601f, 116.201f, -6.562736f },
	{ -11.68264f, 112.3812f, -12.12635f },
	{ -15.59211f, 108.1287f, -15.84384f },
	{ -17.12782f, 103.9708f, -17.14926f },
	{ -8.709578f, 116.0317f, 0 },
	{ -16.69927f, 112.0863f, 0 },
	{ -22.14664f, 107.7719f, 0 },
	{ -24.2224f, 103.6158f, 0 },
	{ -5.994601f, 116.201f, 6.562736f },
	{ -11.68264f, 112.3812f, 12.12635f },
	{ -15.59211f, 108.1287f, 15.84384f },
	{ -17.12782f, 103.9708f, 17.14926f },
	{ 0.09993199f, 116.0494f, 9.281109f },
	{ -0.031446f, 112.3733f, 17.14926f },
	{ 0.231932f, 108.2702f, 22.40658f },
	{ 0.000001f, 104.8279f, 24.25271f },
	{ 7.114465f, 116.0579f, 6.562736f },
	{ 12.53975f, 112.2454f, 12.12635f },
	{ 16.05597f, 108.2916f, 15.84384f },
	{ 17.12782f, 104.7651f, 17.14926f },
	{ -23.74089f, 108.6763f, 1.457332f },
	{ -88.1685f, 50.81118f, 1.44f },
	{ -88.1685f, 50.81118f, -1.44f },
	{ -23.74089f, 108.6763f, -1.422669f },
	{ -85.71876f, 52.19883f, -2.880001f },
	{ -22.71231f, 107.1021f, -2.949646f },
	{ -85.71876f, 52.19884f, 2.880002f },
	{ -22.71231f, 107.1021f, 2.897337f },
	{ -70.7718f, 74.52254f, 2.880002f },
	{ -73.22155f, 74.76944f, 1.44f },
	{ -73.22155f, 74.76944f, -1.44f },
	{ -70.7718f, 74.52253f, -2.880002f },
	{ -46.91504f, 99.54978f, 2.880002f },
	{ -49.69955f, 99.82481f, 1.44f },
	{ -49.69955f, 99.82481f, -1.44f },
	{ -46.91504f, 99.54978f, -2.880003f },
	{ -21.63656f, 108.6763f, -7.720176f },
	{ -82.34475f, 50.81117f, -32.56087f },
	{ -81.2498f, 50.81118f, -35.22461f },
	{ -20.54161f, 108.6763f, -10.38391f },
	{ -78.32307f, 52.19883f, -35.53554f },
	{ -20.02137f, 107.1021f, -11.64563f },
	{ -80.51294f, 52.19884f, -30.20806f },
	{ -22.24433f, 107.1021f, -6.2377f },
	{ -66.68837f, 74.52254f, -24.52539f },
	{ -68.52018f, 74.76946f, -26.87821f },
	{ -67.42522f, 74.76946f, -29.54195f },
	{ -64.49849f, 74.52254f, -29.85288f },
	{ -44.62305f, 99.5498f, -15.45533f },
	{ -46.76446f, 99.82484f, -17.93543f },
	{ -45.66951f, 99.82484f, -20.59917f },
	{ -42.43315f, 99.5498f, -20.78281f },
	{ -18.11546f, 108.6763f, -15.65194f },
	{ -63.50082f, 50.81119f, -61.46316f },
	{ -61.455f, 50.81119f, -63.49023f },
	{ -16.06964f, 108.6763f, -17.67901f },
	{ -58.49916f, 52.19885f, -62.58433f },
	{ -14.1029f, 107.1021f, -17.87651f },
	{ -62.59079f, 52.19885f, -58.53017f },
	{ -18.25632f, 107.1021f, -13.76114f },
	{ -52.07045f, 74.52255f, -47.91256f },
	{ -52.98047f, 74.76946f, -50.84554f },
	{ -50.93465f, 74.76946f, -52.87262f },
	{ -47.97881f, 74.52254f, -51.96671f },
	{ -35.27898f, 99.54983f, -30.96582f },
	{ -36.42465f, 99.82485f, -34.13664f },
	{ -34.37884f, 99.82485f, -36.16371f },
	{ -31.18734f, 99.54983f, -35.01998f },
	{ -10.06584f, 108.6763f, -20.24605f },
	{ -35.37897f, 50.81118f, -81.25484f },
	{ -32.7161f, 50.81119f, -82.35191f },
	{ -7.402972f, 108.6763f, -21.34311f },
	{ -30.13915f, 52.19884f, -80.29443f },
	{ -6.074074f, 107.1021f, -22.06481f },
	{ -35.46489f, 52.19885f, -78.1003f },
	{ -11.48023f, 107.1021f, -19.83755f },
	{ -29.77123f, 74.52254f, -64.28025f },
	{ -29.68532f, 74.76945f, -67.43478f },
	{ -27.02245f, 74.76945f, -68.53185f },
	{ -24.4455f, 74.52254f, -66.47438f },
	{ -20.68361f, 99.5498f, -42.22214f },
	{ -20.72523f, 99.82482f, -45.68619f },
	{ -18.06236f, 99.82482f, -46.78325f },
	{ -15.35787f, 99.5498f, -44.41626f },
	{ -1.454411f, 108.6763f, -23.75483f },
	{ -1.48619f, 50.81119f, -88.79463f },
	{ 1.39381f, 50.81119f, -88.79692f },
	{ 1.425588f, 108.6763f, -23.75712f },
	{ 2.83216f, 52.19884f, -86.12218f },
	{ 2.951976f, 107.1021f, -23.11582f },
	{ -2.927842f, 52.19885f, -86.11759f },
	{ -2.895004f, 107.1021f, -23.11116f },
	{ -2.91594f, 74.52254f, -71.17065f },
	{ -1.474288f, 74.76946f, -73.84769f },
	{ 1.405712f, 74.76946f, -73.84998f },
	{ 2.844063f, 74.52254f, -71.17524f },
	{ -2.896943f, 99.5498f, -47.31389f },
	{ -1.455558f, 99.82484f, -50.32565f },
	{ 1.424442f, 99.82484f, -50.32795f },
	{ 2.86306f, 99.5498f, -47.31848f },
	{ -21.70964f, 108.6763f, 7.567134f },
	{ -82.57085f, 50.81119f, 32.56087f },
	{ -81.4759f, 50.81119f, 35.22461f },
	{ -20.61469f, 108.6763f, 10.23087f },
	{ -78.32307f, 52.19884f, 35.53554f },
	{ -20.02138f, 107.1021f, 11.64563f },
	{ -80.51295f, 52.19885f, 30.20806f },
	{ -22.24434f, 107.1021f, 6.2377f },
	{ -66.68838f, 74.52254f, 24.52539f },
	{ -68.74628f, 74.76945f, 26.87821f },
	{ -67.65132f, 74.76945f, 29.54195f },
	{ -64.49849f, 74.52254f, 29.85288f },
	{ -44.62305f, 99.5498f, 15.45533f },
	{ -46.99058f, 99.82482f, 17.93543f },
	{ -45.89564f, 99.82482f, 20.59917f },
	{ -42.43317f, 99.5498f, 20.78281f },
	{ -17.77577f, 108.6764f, 15.5845f },
	{ -63.46723f, 50.81119f, 61.70185f },
	{ -61.42141f, 50.81119f, 63.72893f },
	{ -15.72995f, 108.6763f, 17.61157f },
	{ -58.49915f, 52.19883f, 62.58431f },
	{ -14.10289f, 107.1021f, 17.8765f },
	{ -62.59077f, 52.19885f, 58.53016f },
	{ -18.25632f, 107.1021f, 13.76113f },
	{ -52.07043f, 74.52255f, 47.91254f },
	{ -52.94688f, 74.76946f, 51.08424f },
	{ -50.90107f, 74.76946f, 53.11132f },
	{ -47.9788f, 74.52254f, 51.9667f },
	{ -35.27897f, 99.54983f, 30.96582f },
	{ -36.39107f, 99.82485f, 34.37534f },
	{ -34.34525f, 99.82485f, 36.40241f },
	{ -31.18733f, 99.54983f, 35.01997f },
	{ -10.05599f, 108.6763f, 20.29022f },
	{ -35.5222f, 50.81118f, 81.45204f },
	{ -32.85932f, 50.81119f, 82.5491f },
	{ -7.393121f, 108.6763f, 21.38728f },
	{ -30.13915f, 52.19883f, 80.29445f },
	{ -6.074072f, 107.1021f, 22.06481f },
	{ -35.46488f, 52.19885f, 78.10032f },
	{ -11.48023f, 107.1021f, 19.83756f },
	{ -29.77123f, 74.52254f, 64.28025f },
	{ -29.82852f, 74.76945f, 67.63199f },
	{ -27.16565f, 74.76945f, 68.72905f },
	{ -24.44549f, 74.52254f, 66.47438f },
	{ -20.68361f, 99.5498f, 42.22214f },
	{ -20.86843f, 99.82482f, 45.88342f },
	{ -18.20557f, 99.82482f, 46.98048f },
	{ -15.35787f, 99.5498f, 44.41627f },
	{ -1.454411f, 108.6763f, 23.94125f },
	{ -1.48619f, 50.81119f, 88.67495f },
	{ 1.39381f, 50.81119f, 88.67724f },
	{ 1.425588f, 108.6763f, 23.94354f },
	{ 2.832159f, 52.19883f, 86.12218f },
	{ 2.951976f, 107.1021f, 23.11582f },
	{ -2.927841f, 52.19885f, 86.11759f },
	{ -2.895004f, 107.1021f, 23.11116f },
	{ -2.91594f, 74.52254f, 71.17065f },
	{ -1.474288f, 74.76945f, 73.728f },
	{ 1.405712f, 74.76945f, 73.73029f },
	{ 2.844063f, 74.52254f, 71.17524f },
	{ -2.896943f, 99.5498f, 47.31389f },
	{ -1.455557f, 99.82482f, 50.20604f },
	{ 1.424442f, 99.82482f, 50.20834f },
	{ 2.86306f, 99.5498f, 47.31848f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00031364[] = {
	{ -0.000845f, 1, 0 },
	{ 0.332829f, 0.942986f, -0.001535f },
	{ 0.54505f, 0.838402f, -0.001429f },
	{ 0.803723f, 0.595004f, -0.000276f },
	{ 0.909333f, 0.416069f, 0.000085f },
	{ 0.235224f, 0.944236f, -0.230407f },
	{ 0.385887f, 0.8390149f, -0.383595f },
	{ 0.567242f, 0.603047f, -0.560866f },
	{ 0.630816f, 0.43503f, -0.64251f },
	{ 0.00024f, 0.944469f, -0.328601f },
	{ -0.009784f, 0.839402f, -0.543423f },
	{ 0.003309f, 0.605509f, -0.795832f },
	{ -0.027777f, 0.439373f, -0.897875f },
	{ -0.234021f, 0.9460739f, -0.224003f },
	{ -0.393189f, 0.837402f, -0.379684f },
	{ -0.56893f, 0.60211f, -0.5601619f },
	{ -0.653238f, 0.437067f, -0.618266f },
	{ -0.340929f, 0.940089f, 0.000146f },
	{ -0.554549f, 0.832151f, 0.000364f },
	{ -0.798033f, 0.602614f, 0.000345f },
	{ -0.895265f, 0.445533f, 0.000258f },
	{ -0.232526f, 0.947333f, 0.220207f },
	{ -0.393666f, 0.837494f, 0.378987f },
	{ -0.563827f, 0.6167229f, 0.54932f },
	{ -0.647353f, 0.466418f, 0.602818f },
	{ 0.003659f, 0.9442649f, 0.329165f },
	{ -0.008083f, 0.838281f, 0.545178f },
	{ 0.006379f, 0.618306f, 0.785912f },
	{ -0.021505f, 0.469714f, 0.882557f },
	{ 0.233271f, 0.944004f, 0.233326f },
	{ 0.38345f, 0.839527f, 0.384917f },
	{ 0.567581f, 0.60146f, 0.562226f },
	{ 0.631978f, 0.430097f, 0.644686f },
	{ -0.282353f, 0.841335f, 0.460903f },
	{ -0.826957f, 0.520273f, 0.213208f },
	{ -0.826957f, 0.520273f, -0.213209f },
	{ -0.284749f, 0.848313f, -0.446412f },
	{ -0.6224549f, 0.402049f, -0.671495f },
	{ -0.200723f, 0.611352f, -0.76548f },
	{ -0.622456f, 0.402049f, 0.671495f },
	{ -0.193586f, 0.590314f, 0.7836159f },
	{ -0.501766f, 0.408656f, 0.762385f },
	{ -0.738899f, 0.555456f, 0.381441f },
	{ -0.738899f, 0.555456f, -0.381441f },
	{ -0.501766f, 0.408656f, -0.762385f },
	{ -0.263026f, 0.544063f, 0.796751f },
	{ -0.5223849f, 0.737031f, 0.428834f },
	{ -0.522505f, 0.738472f, -0.426202f },
	{ -0.26833f, 0.559679f, -0.7840649f },
	{ -0.396424f, 0.895189f, 0.203679f },
	{ -0.848132f, 0.51897f, -0.106501f },
	{ -0.675579f, 0.518348f, -0.524317f },
	{ -0.124197f, 0.882737f, -0.453157f },
	{ -0.274331f, 0.380736f, -0.8830529f },
	{ 0.08934499f, 0.64071f, -0.762567f },
	{ -0.823654f, 0.391248f, 0.410511f },
	{ -0.464416f, 0.695551f, 0.548203f },
	{ -0.74808f, 0.400493f, 0.529133f },
	{ -0.8290679f, 0.5530159f, 0.082586f },
	{ -0.523208f, 0.549913f, -0.651036f },
	{ -0.138293f, 0.387199f, -0.9115649f },
	{ -0.538529f, 0.62265f, 0.567709f },
	{ -0.638595f, 0.745782f, 0.189754f },
	{ -0.311998f, 0.739366f, -0.596653f },
	{ 0.047186f, 0.577225f, -0.815221f },
	{ -0.536943f, 0.831935f, 0.139913f },
	{ -0.748256f, 0.5169269f, -0.415813f },
	{ -0.410878f, 0.51729f, -0.750726f },
	{ 0.130159f, 0.840709f, -0.525611f },
	{ 0.106668f, 0.374176f, -0.921203f },
	{ 0.411766f, 0.600439f, -0.685508f },
	{ -0.922982f, 0.368121f, 0.11221f },
	{ -0.69803f, 0.575016f, 0.426744f },
	{ -0.8951409f, 0.37661f, 0.238512f },
	{ -0.806501f, 0.546913f, -0.224595f },
	{ -0.223321f, 0.548672f, -0.805659f },
	{ 0.234042f, 0.384062f, -0.893152f },
	{ -0.752841f, 0.525584f, 0.396222f },
	{ -0.680815f, 0.730619f, -0.051827f },
	{ -0.052234f, 0.7337739f, -0.6773829f },
	{ 0.384445f, 0.546616f, -0.7439179f },
	{ -0.422576f, 0.896295f, -0.13448f },
	{ -0.551184f, 0.513867f, -0.657372f },
	{ -0.088764f, 0.516625f, -0.851599f },
	{ 0.201401f, 0.8966269f, -0.394332f },
	{ 0.446476f, 0.375264f, -0.8123029f },
	{ 0.5577919f, 0.685432f, -0.468029f },
	{ -0.928344f, 0.330279f, -0.170571f },
	{ -0.732555f, 0.676881f, 0.072079f },
	{ -0.939853f, 0.336743f, -0.057271f },
	{ -0.68829f, 0.5367939f, -0.487964f },
	{ 0.09648599f, 0.549698f, -0.829772f },
	{ 0.546407f, 0.390655f, -0.740829f },
	{ -0.801107f, 0.596086f, 0.05393f },
	{ -0.613803f, 0.733627f, -0.291612f },
	{ 0.193568f, 0.744868f, -0.6385159f },
	{ 0.5763029f, 0.614038f, -0.539289f },
	{ -0.426746f, 0.859056f, -0.282684f },
	{ -0.234075f, 0.5176899f, -0.822925f },
	{ 0.233162f, 0.517629f, -0.823222f },
	{ 0.412741f, 0.865002f, -0.285337f },
	{ 0.720648f, 0.375903f, -0.58255f },
	{ 0.743176f, 0.636305f, -0.206895f },
	{ -0.719754f, 0.376929f, -0.5829909f },
	{ -0.7621379f, 0.616074f, -0.198994f },
	{ -0.793034f, 0.385755f, -0.471476f },
	{ -0.406693f, 0.549245f, -0.730022f },
	{ 0.406632f, 0.548945f, -0.730281f },
	{ 0.793827f, 0.384481f, -0.471182f },
	{ -0.7877409f, 0.558611f, -0.259649f },
	{ -0.437407f, 0.7363009f, -0.516271f },
	{ 0.434829f, 0.737444f, -0.516817f },
	{ 0.774826f, 0.5736859f, -0.265574f },
	{ -0.402033f, 0.886983f, -0.227225f },
	{ -0.852516f, 0.515874f, 0.084203f },
	{ -0.66804f, 0.516655f, 0.535529f },
	{ -0.132986f, 0.891619f, 0.432816f },
	{ -0.250903f, 0.369594f, 0.894678f },
	{ 0.064545f, 0.680382f, 0.73001f },
	{ -0.797269f, 0.356716f, -0.486946f },
	{ -0.468732f, 0.657436f, -0.589972f },
	{ -0.72338f, 0.365278f, -0.5859129f },
	{ -0.830665f, 0.543959f, -0.118762f },
	{ -0.51658f, 0.547677f, 0.658175f },
	{ -0.126747f, 0.380929f, 0.915876f },
	{ -0.533313f, 0.586217f, -0.609857f },
	{ -0.6405579f, 0.737075f, -0.215421f },
	{ -0.312374f, 0.741796f, 0.5934319f },
	{ 0.030546f, 0.6075799f, 0.793671f },
	{ -0.502046f, 0.8592719f, -0.097991f },
	{ -0.749203f, 0.516863f, 0.414184f },
	{ -0.391882f, 0.513928f, 0.76309f },
	{ 0.140021f, 0.837079f, 0.528861f },
	{ 0.204292f, 0.329983f, 0.921616f },
	{ 0.438063f, 0.569782f, 0.695305f },
	{ -0.9215029f, 0.377971f, -0.089277f },
	{ -0.6721539f, 0.6387939f, -0.374367f },
	{ -0.894914f, 0.393577f, -0.2103f },
	{ -0.800754f, 0.550431f, 0.236259f },
	{ -0.181658f, 0.536654f, 0.824016f },
	{ 0.313657f, 0.335973f, 0.888111f },
	{ -0.7365479f, 0.578741f, -0.350081f },
	{ -0.66965f, 0.7395549f, 0.068027f },
	{ -0.022621f, 0.723943f, 0.6894889f },
	{ 0.423011f, 0.5122f, 0.747471f },
	{ -0.422317f, 0.896743f, 0.132289f },
	{ -0.568435f, 0.510604f, 0.645109f },
	{ -0.07413f, 0.514583f, 0.85423f },
	{ 0.20966f, 0.894144f, 0.395664f },
	{ 0.479699f, 0.359882f, 0.8002329f },
	{ 0.566949f, 0.677016f, 0.469274f },
	{ -0.948802f, 0.297253f, 0.106843f },
	{ -0.729313f, 0.680421f, -0.071623f },
	{ -0.952167f, 0.305428f, 0.009614999f },
	{ -0.7095349f, 0.528363f, 0.466254f },
	{ 0.111141f, 0.546129f, 0.830296f },
	{ 0.566735f, 0.378507f, 0.731809f },
	{ -0.80189f, 0.594005f, -0.06425899f },
	{ -0.625506f, 0.728705f, 0.278802f },
	{ 0.200699f, 0.742737f, 0.638797f },
	{ 0.58648f, 0.605756f, 0.537681f },
	{ -0.443743f, 0.850481f, 0.282444f },
	{ -0.22355f, 0.519067f, 0.824981f },
	{ 0.22262f, 0.5190099f, 0.825269f },
	{ 0.429439f, 0.8568529f, 0.28528f },
	{ 0.696064f, 0.389301f, 0.603274f },
	{ 0.7542779f, 0.624002f, 0.20417f },
	{ -0.695186f, 0.390268f, 0.603662f },
	{ -0.7727129f, 0.603681f, 0.196171f },
	{ -0.7773319f, 0.397944f, 0.487232f },
	{ -0.393779f, 0.552548f, 0.734594f },
	{ 0.393692f, 0.5522619f, 0.7348559f },
	{ 0.778128f, 0.396714f, 0.486965f },
	{ -0.792003f, 0.551753f, 0.261344f },
	{ -0.432865f, 0.736842f, 0.519319f },
	{ 0.430257f, 0.737994f, 0.51985f },
	{ 0.779378f, 0.566696f, 0.267255f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00031BB0 = { vertex_00030B18, normal_00031364, LengthOfArray(vertex_00030B18), meshlist_00030AD0, matlist_0003038C, LengthOfArray(meshlist_00030AD0), LengthOfArray(matlist_0003038C),{ -31.97306f, 84.1682f, -0.059841f }, 105.0343f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00031BD8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00031BB0, 272.8831f, 61.77919f, -39.00063f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00031C0C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00031C34[] = {
	0x8000u | 7, 22, 18, 17, 16, 15, 14, 12,
	0x8000u | 5, 1, 0, 19, 2, 3,
	0x8000u | 8, 8, 20, 6, 7, 4, 5, 3, 19,
	0x8000u | 12, 0, 9, 2, 10, 3, 12, 4, 14, 6, 16, 8, 18,
	0x8000u | 7, 9, 21, 10, 11, 12, 13, 15
};

extern "C" __declspec(dllexport) Sint16 poly_00031C8C[] = {
	6, 15, 17, 13, 22, 11, 21
};

extern "C" __declspec(dllexport) NJS_TEX uv_00031C9C[] = {
	{ 1081, -510 },
	{ 1065, -332 },
	{ 920, -500 },
	{ 868, -332 },
	{ 717, -500 },
	{ 712, -332 },
	{ 516, -332 },
	{ 61, 207 },
	{ 140, -72 },
	{ -4, 254 },
	{ 284, -72 },
	{ 472, -72 },
	{ 1081, -72 },
	{ 1147, 200 },
	{ 956, -72 },
	{ 1155, 255 },
	{ 812, -72 },
	{ 1155, 254 },
	{ 1746, -72 },
	{ 1268, 254 },
	{ 140, -72 },
	{ 211, -332 },
	{ 284, -72 },
	{ 358, -332 },
	{ 472, -72 },
	{ 516, -332 },
	{ 812, -72 },
	{ 712, -332 },
	{ 956, -72 },
	{ 868, -332 },
	{ 1081, -72 },
	{ 1065, -332 },
	{ 211, -332 },
	{ 160, -500 },
	{ 358, -332 },
	{ 312, -500 },
	{ 516, -332 },
	{ 486, -506 },
	{ 717, -500 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00031D38[] = {
	{ 0, -39 },
	{ 176, -177 },
	{ 0, 175 },
	{ 508, -255 },
	{ 214, 254 },
	{ 474, 247 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00031D50[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_00031C34, NULL, NULL, NULL, uv_00031C9C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00031C8C, NULL, NULL, NULL, uv_00031D38, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00031D80[] = {
	{ 1.569901f, -3.421064f, -11.83954f },
	{ 0.829468f, -11.06626f, -7.27153f },
	{ -5.604303f, -3.421064f, -10.82763f },
	{ -7.870514f, -3.419163f, -6.071533f },
	{ -10.28716f, -3.421064f, 0.199593f },
	{ 0.507933f, -12.3699f, -0.374986f },
	{ -6.04045f, -3.421064f, 4.641671f },
	{ 0.507935f, -12.36991f, -0.374985f },
	{ 2.594776f, -3.421064f, 7.38677f },
	{ 3.965511f, 3.708251f, -24.27277f },
	{ -10.67882f, 3.708251f, -22.20721f },
	{ -6.570526f, 8.291775f, -15.47154f },
	{ -18.77054f, 3.709743f, -12.37154f },
	{ -14.47052f, 8.428493f, -11.57155f },
	{ -18.87051f, 3.709743f, 0.628464f },
	{ -14.47052f, 8.291775f, -0.9715419f },
	{ -12.10606f, 3.708251f, 9.104456f },
	{ -7.977485f, 8.290252f, 5.830947f },
	{ 6.057548f, 3.708251f, 14.97296f },
	{ 0.654614f, -12.3699f, -4.815407f },
	{ 4.129486f, -10.87228f, 2.528458f },
	{ 3.03653f, 8.290253f, -15.099f },
	{ 4.329468f, 8.525406f, 9.628448f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00031E94[] = {
	{ -0.181298f, -0.717292f, -0.6727729f },
	{ -0.308777f, -0.465639f, -0.8293599f },
	{ -0.384616f, -0.7847739f, -0.486004f },
	{ -0.592732f, -0.776899f, -0.212358f },
	{ -0.59837f, -0.776471f, 0.197598f },
	{ -0.701921f, -0.692134f, -0.168096f },
	{ -0.399408f, -0.672128f, 0.623473f },
	{ -0.267779f, -0.6127599f, 0.743518f },
	{ -0.247618f, -0.634577f, 0.732118f },
	{ -0.102508f, 0.02196f, -0.99449f },
	{ -0.469202f, -0.121278f, -0.874723f },
	{ -0.153244f, 0.921424f, -0.357064f },
	{ -0.9055319f, -0.134482f, -0.4024f },
	{ -0.454809f, 0.85396f, -0.252787f },
	{ -0.949909f, -0.04781f, 0.308849f },
	{ -0.405733f, 0.902316f, 0.145623f },
	{ -0.5834399f, 0.035647f, 0.8113739f },
	{ -0.211202f, 0.907897f, 0.362101f },
	{ -0.306988f, 0.060909f, 0.949762f },
	{ -0.630402f, -0.6708789f, -0.39053f },
	{ -0.267779f, -0.6127599f, 0.743518f },
	{ -0.020685f, 0.9604599f, -0.277649f },
	{ -0.15072f, 0.8724149f, 0.464947f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00031FA8 = { vertex_00031D80, normal_00031E94, LengthOfArray(vertex_00031D80), meshlist_00031D50, matlist_00031C0C, LengthOfArray(meshlist_00031D50), LengthOfArray(matlist_00031C0C),{ -6.406483f, -1.922251f, -4.649908f }, 23.24669f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00031FD0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00031FA8, 337.0705f, 55.18869f, 252.1715f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00032004[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 52, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00032018[] = {
	3, 3, 2, 19,
	4, 4, 3, 5, 19,
	8, 5, 7, 4, 6, 14, 16, 15, 17,
	8, 7, 20, 6, 8, 16, 18, 17, 22,
	0x8000u | 6, 14, 4, 12, 3, 10, 2,
	0x8000u | 6, 15, 13, 17, 11, 22, 21,
	5, 14, 15, 12, 13, 11,
	3, 10, 12, 11,
	8, 11, 21, 10, 9, 2, 0, 19, 1
};

extern "C" __declspec(dllexport) NJS_TEX uv_00032090[] = {
	{ 506, -155 },
	{ 388, -154 },
	{ 55, 255 },
	{ 669, -154 },
	{ 1779, -155 },
	{ 1224, 255 },
	{ 1330, 255 },
	{ 1224, 255 },
	{ 1224, 255 },
	{ 669, -154 },
	{ 792, -154 },
	{ 657, -404 },
	{ 768, -404 },
	{ 648, -458 },
	{ 804, -504 },
	{ 1224, 255 },
	{ 1179, 224 },
	{ 792, -154 },
	{ 1019, -154 },
	{ 768, -404 },
	{ 1043, -404 },
	{ 804, -504 },
	{ 1056, -510 },
	{ 657, -404 },
	{ 669, -154 },
	{ 520, -404 },
	{ 506, -155 },
	{ 396, -404 },
	{ 388, -154 },
	{ 0, -39 },
	{ 0, 175 },
	{ 176, -177 },
	{ 214, 254 },
	{ 508, -255 },
	{ 474, 247 },
	{ 657, -404 },
	{ 648, -458 },
	{ 520, -404 },
	{ 521, -460 },
	{ 370, -504 },
	{ 396, -404 },
	{ 520, -404 },
	{ 370, -504 },
	{ 370, -504 },
	{ 138, -504 },
	{ 396, -404 },
	{ 184, -404 },
	{ 388, -154 },
	{ 201, -154 },
	{ 55, 255 },
	{ 99, 228 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0003215C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 9, poly_00032018, NULL, NULL, NULL, uv_00032090, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00032174[] = {
	{ 2.967083f, -17.08949f, -22.37667f },
	{ 9.047011f, -60.28997f, -15.46715f },
	{ -13.61616f, -17.08949f, -20.46416f },
	{ -17.89928f, -17.08639f, -11.47513f },
	{ -19.44276f, -17.08949f, 0.377288f },
	{ 8.484323f, -63.23231f, -3.398206f },
	{ -14.44047f, -17.08949f, 8.772811f },
	{ 8.484324f, -63.23231f, -3.398204f },
	{ 4.904097f, -17.08949f, 13.96105f },
	{ 5.746003f, 11.14469f, -24.27274f },
	{ -15.47363f, 11.14469f, -22.20718f },
	{ -9.520718f, 22.38717f, -15.47151f },
	{ -23.91853f, 11.14775f, -12.99008f },
	{ -20.9678f, 17.30791f, -11.57152f },
	{ -24.06339f, 11.14775f, 0.659919f },
	{ -20.9678f, 17.02715f, -0.971512f },
	{ -17.5417f, 11.14469f, 9.104486f },
	{ -11.55939f, 22.38404f, 5.830978f },
	{ 8.777362f, 11.14469f, 14.97299f },
	{ 8.741014f, -63.23231f, -11.16894f },
	{ 14.82204f, -59.85217f, 1.68282f },
	{ 4.399912f, 22.38404f, -15.09897f },
	{ 6.273376f, 22.86693f, 9.628478f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00032288[] = {
	{ -0.208843f, -0.125723f, -0.969834f },
	{ -0.308976f, -0.192452f, -0.931395f },
	{ -0.578711f, -0.22285f, -0.784495f },
	{ -0.903332f, -0.323924f, -0.281186f },
	{ -0.910144f, -0.343838f, 0.231112f },
	{ -0.86309f, -0.498793f, -0.079256f },
	{ -0.578532f, -0.273984f, 0.768266f },
	{ -0.29992f, -0.379828f, 0.875088f },
	{ -0.27203f, -0.212029f, 0.938639f },
	{ -0.076803f, 0.242869f, -0.967014f },
	{ -0.455728f, 0.206028f, -0.8659469f },
	{ -0.243373f, 0.8407f, -0.483728f },
	{ -0.913678f, 0.151869f, -0.377f },
	{ -0.699619f, 0.651145f, -0.294182f },
	{ -0.944771f, 0.157681f, 0.287305f },
	{ -0.712032f, 0.671159f, 0.206292f },
	{ -0.5688739f, 0.188072f, 0.800632f },
	{ -0.328279f, 0.812057f, 0.482491f },
	{ -0.224506f, 0.160343f, 0.96119f },
	{ -0.771099f, -0.451231f, -0.449219f },
	{ -0.29992f, -0.379828f, 0.875088f },
	{ -0.030273f, 0.871869f, -0.488802f },
	{ -0.149376f, 0.761202f, 0.631077f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0003239C = { vertex_00032174, normal_00032288, LengthOfArray(vertex_00032174), meshlist_0003215C, matlist_00032004, LengthOfArray(meshlist_0003215C), LengthOfArray(matlist_00032004),{ -4.620676f, -20.18269f, -4.649877f }, 47.03097f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000323C4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0003239C, 357.0705f, 131.5902f, 145.0715f, 0, 0x2CD1, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000323F8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0003240C[] = {
	4, 32, 2, 0, 1,
	0x8000u | 5, 2, 1, 4, 3, 33,
	0x8000u | 9, 3, 5, 33, 6, 8, 7, 10, 9, 34,
	25, 22, 24, 20, 26, 18, 28, 16, 30, 14, 36, 13, 35, 0, 31, 32, 12, 34, 11, 9, 25, 23, 24, 21, 22, 20,
	0x8000u | 9, 13, 14, 15, 16, 17, 18, 19, 20, 21,
	0x8000u | 13, 0, 13, 1, 15, 3, 17, 5, 19, 6, 21, 7, 23, 9,
	8, 24, 25, 26, 27, 28, 29, 30, 36,
	3, 29, 35, 36,
	0x8000u | 7, 35, 31, 29, 12, 27, 11, 25
};

extern "C" __declspec(dllexport) NJS_TEX uv_000324C4[] = {
	{ 2495, 255 },
	{ 2686, 255 },
	{ 2597, 60 },
	{ 2794, 60 },
	{ 136, 255 },
	{ 246, 60 },
	{ 500, 255 },
	{ 528, 60 },
	{ 1029, 255 },
	{ 528, 60 },
	{ 916, 60 },
	{ 1029, 255 },
	{ 1208, 60 },
	{ 1520, 255 },
	{ 1442, 60 },
	{ 1712, 255 },
	{ 1667, 60 },
	{ 2084, 255 },
	{ 3682, -482 },
	{ 1384, -436 },
	{ 3404, -436 },
	{ 1638, -436 },
	{ 3050, -436 },
	{ 2025, -482 },
	{ 2809, -510 },
	{ 2167, -482 },
	{ 2660, -436 },
	{ 2443, -436 },
	{ 2692, -242 },
	{ 2481, -242 },
	{ 2597, 60 },
	{ 2386, 60 },
	{ 2495, 255 },
	{ 2124, 60 },
	{ 2084, 255 },
	{ 1991, 60 },
	{ 1667, 60 },
	{ 1608, -242 },
	{ 1351, -242 },
	{ 1384, -436 },
	{ 1096, -242 },
	{ 1132, -482 },
	{ 852, -436 },
	{ 142, -242 },
	{ 110, -436 },
	{ 314, -242 },
	{ 260, -510 },
	{ 537, -242 },
	{ 502, -436 },
	{ 840, -242 },
	{ 852, -436 },
	{ 1096, -242 },
	{ 47, 60 },
	{ 142, -242 },
	{ 246, 60 },
	{ 314, -242 },
	{ 528, 60 },
	{ 537, -242 },
	{ 916, 60 },
	{ 840, -242 },
	{ 1208, 60 },
	{ 1096, -242 },
	{ 1442, 60 },
	{ 1351, -242 },
	{ 1667, 60 },
	{ 1384, -436 },
	{ 1608, -242 },
	{ 1638, -436 },
	{ 2024, -242 },
	{ 2025, -482 },
	{ 2182, -242 },
	{ 2167, -482 },
	{ 2443, -436 },
	{ 2182, -242 },
	{ 2481, -242 },
	{ 2443, -436 },
	{ 2481, -242 },
	{ 2386, 60 },
	{ 2182, -242 },
	{ 2124, 60 },
	{ 2024, -242 },
	{ 1991, 60 },
	{ 1608, -242 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00032610[] = {
	{ NJD_MESHSET_TRIMESH | 0, 9, poly_0003240C, NULL, NULL, NULL, uv_000324C4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00032628[] = {
	{ 9.853083f, -7.792276f, -6.281754f },
	{ 6.694318f, -7.792276f, -9.815718f },
	{ 4.154525f, -12.3699f, -6.357185f },
	{ 1.569901f, -7.792276f, -11.83954f },
	{ 0.8212349f, -12.3699f, -7.673631f },
	{ -5.604303f, -7.792276f, -10.82763f },
	{ -8.678937f, -7.792276f, -5.768076f },
	{ -10.28716f, -7.792276f, 0.199593f },
	{ -6.692067f, -12.3699f, 0.225014f },
	{ -6.04045f, -7.792276f, 4.641671f },
	{ -3.988005f, -12.3699f, 3.116593f },
	{ 2.594776f, -7.792276f, 7.38677f },
	{ 6.694318f, -7.792276f, 6.374858f },
	{ 20.79686f, -0.6629609f, -13.38233f },
	{ 14.59713f, 3.919039f, -9.49264f },
	{ 14.42574f, -0.6629609f, -20.14164f },
	{ 9.50861f, 5.618964f, -12.54294f },
	{ 3.965511f, -0.6629609f, -24.27277f },
	{ 3.036533f, 3.919039f, -15.099f },
	{ -10.67882f, -0.6629609f, -22.20721f },
	{ -6.024378f, 3.919039f, -13.82097f },
	{ -16.95494f, -0.6629609f, -11.87938f },
	{ -11.00731f, 4.9729f, -8.154655f },
	{ -20.99659f, -0.6629609f, 0.04516f },
	{ -14.15871f, 3.919039f, -0.272036f },
	{ -12.10606f, -0.6629609f, 9.104456f },
	{ -7.977485f, 3.919039f, 5.830947f },
	{ 6.057548f, -0.6629609f, 14.97296f },
	{ 4.330948f, 4.9729f, 9.183582f },
	{ 14.42574f, -0.6629609f, 12.90739f },
	{ 9.50861f, 4.9729f, 7.905552f },
	{ 9.768974f, -7.792276f, -0.708522f },
	{ 6.229374f, -12.3699f, -3.939041f },
	{ -3.845387f, -12.3699f, -7.015407f },
	{ 4.154527f, -12.3699f, 4.174337f },
	{ 20.70189f, -0.662962f, -1.551561f },
	{ 14.59713f, 3.919039f, -1.134318f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000327E4[] = {
	{ 0.56225f, -0.802152f, -0.201066f },
	{ 0.339255f, -0.802415f, -0.490954f },
	{ 0.416181f, -0.687097f, -0.59556f },
	{ 0.069408f, -0.796405f, -0.600767f },
	{ 0.08078f, -0.67806f, -0.730555f },
	{ -0.341827f, -0.797654f, -0.496893f },
	{ -0.612528f, -0.744953f, -0.264301f },
	{ -0.6296279f, -0.756034f, 0.178829f },
	{ -0.7342359f, -0.63992f, 0.226717f },
	{ -0.402187f, -0.596956f, 0.694182f },
	{ -0.406311f, -0.451446f, 0.794423f },
	{ -0.059021f, -0.6015339f, 0.796664f },
	{ 0.438845f, -0.733615f, 0.518869f },
	{ 0.927991f, -0.023324f, -0.371872f },
	{ 0.353531f, 0.92935f, -0.106417f },
	{ 0.552283f, 0.007332f, -0.8336239f },
	{ 0.13391f, 0.970535f, -0.200323f },
	{ 0.075835f, 0.026408f, -0.996771f },
	{ 0.009334999f, 0.966749f, -0.255558f },
	{ -0.526899f, -0.017655f, -0.849745f },
	{ -0.178925f, 0.948985f, -0.25964f },
	{ -0.8874159f, -0.02404f, -0.460343f },
	{ -0.307794f, 0.938958f, -0.153692f },
	{ -0.984682f, -0.000816f, 0.174358f },
	{ -0.3825f, 0.915936f, 0.121472f },
	{ -0.55656f, 0.020546f, 0.830553f },
	{ -0.201926f, 0.901175f, 0.383547f },
	{ 0.007782f, 0.001304f, 0.9999689f },
	{ -0.03149f, 0.902716f, 0.429083f },
	{ 0.660068f, -0.023006f, 0.750854f },
	{ 0.244492f, 0.911524f, 0.330679f },
	{ 0.668054f, -0.7276469f, 0.155672f },
	{ 0.728807f, -0.671773f, -0.132518f },
	{ -0.452534f, -0.699941f, -0.552536f },
	{ 0.395141f, -0.588078f, 0.7057109f },
	{ 0.98268f, -0.02998f, 0.18287f },
	{ 0.367888f, 0.923472f, 0.108891f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000329A0 = { vertex_00032628, normal_000327E4, LengthOfArray(vertex_00032628), meshlist_00032610, matlist_000323F8, LengthOfArray(meshlist_00032610), LengthOfArray(matlist_000323F8),{ -0.099865f, -3.375471f, -4.649908f }, 28.66583f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000329C8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000329A0, -502.871f, 8.943152f, 242.0471f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000329FC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 52, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00032A10[] = {
	0x8000u | 7, 22, 18, 17, 16, 15, 14, 12,
	8, 1, 19, 0, 2, 9, 10, 21, 11,
	3, 3, 2, 19,
	0x8000u | 8, 8, 20, 6, 7, 4, 5, 3, 19,
	5, 15, 13, 12, 11, 10,
	0x8000u | 10, 2, 10, 3, 12, 4, 14, 6, 16, 8, 18,
	0x8000u | 6, 21, 22, 11, 17, 13, 15
};

extern "C" __declspec(dllexport) NJS_TEX uv_00032A7C[] = {
	{ 1035, -510 },
	{ 1035, -404 },
	{ 900, -504 },
	{ 840, -404 },
	{ 701, -458 },
	{ 708, -404 },
	{ 536, -404 },
	{ 111, 228 },
	{ 68, 255 },
	{ 230, -154 },
	{ 372, -154 },
	{ 251, -404 },
	{ 386, -404 },
	{ 227, -504 },
	{ 324, -504 },
	{ 510, -155 },
	{ 372, -154 },
	{ 68, 255 },
	{ 1042, -154 },
	{ 1187, 224 },
	{ 872, -154 },
	{ 1243, 255 },
	{ 732, -154 },
	{ 1243, 255 },
	{ 1785, -155 },
	{ 1343, 255 },
	{ 701, -458 },
	{ 533, -460 },
	{ 536, -404 },
	{ 324, -504 },
	{ 386, -404 },
	{ 372, -154 },
	{ 386, -404 },
	{ 510, -155 },
	{ 536, -404 },
	{ 732, -154 },
	{ 708, -404 },
	{ 872, -154 },
	{ 840, -404 },
	{ 1042, -154 },
	{ 1035, -404 },
	{ 412, 247 },
	{ 458, -255 },
	{ 288, 238 },
	{ 241, -193 },
	{ 16, 159 },
	{ 16, -55 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00032B38[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_00032A10, NULL, NULL, NULL, uv_00032A7C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00032B50[] = {
	{ 7.110324f, -17.08949f, -22.00277f },
	{ 15.12356f, -60.28997f, -14.91878f },
	{ -4.869318f, -17.08949f, -19.67481f },
	{ -9.15244f, -17.08639f, -10.68578f },
	{ -10.69591f, -17.08949f, 1.166636f },
	{ 14.56087f, -63.23231f, -2.849836f },
	{ -5.693632f, -17.08949f, 9.562159f },
	{ 14.56087f, -63.23231f, -2.849833f },
	{ 9.047338f, -17.08949f, 14.33495f },
	{ 5.746003f, 11.14469f, -24.27274f },
	{ -6.72679f, 11.14469f, -21.41783f },
	{ -0.773873f, 22.38717f, -14.68216f },
	{ -15.17168f, 11.14775f, -12.20074f },
	{ -12.22096f, 17.30791f, -10.78217f },
	{ -15.31655f, 11.14775f, 1.449267f },
	{ -12.22096f, 17.02715f, -0.182164f },
	{ -8.794854f, 11.14469f, 9.893833f },
	{ -2.81255f, 22.38404f, 6.620326f },
	{ 8.777362f, 11.14469f, 14.97299f },
	{ 14.81756f, -63.23231f, -10.62057f },
	{ 14.82204f, -59.85217f, 1.68282f },
	{ 4.399912f, 22.38404f, -15.09897f },
	{ 6.273376f, 22.86693f, 9.628478f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00032C64[] = {
	{ -0.322633f, -0.160457f, -0.932824f },
	{ -0.421046f, -0.222299f, -0.8793769f },
	{ -0.619971f, -0.220973f, -0.752865f },
	{ -0.909888f, -0.303414f, -0.282921f },
	{ -0.916171f, -0.325938f, 0.233229f },
	{ -0.884442f, -0.459529f, -0.081208f },
	{ -0.612413f, -0.267751f, 0.743814f },
	{ -0.415565f, -0.401898f, 0.815956f },
	{ -0.361672f, -0.22943f, 0.903635f },
	{ -0.192129f, 0.22244f, -0.955828f },
	{ -0.499437f, 0.206906f, -0.841281f },
	{ -0.284645f, 0.8475659f, -0.447895f },
	{ -0.913678f, 0.151869f, -0.377f },
	{ -0.699619f, 0.651145f, -0.294182f },
	{ -0.944771f, 0.15768f, 0.287305f },
	{ -0.712032f, 0.671159f, 0.206292f },
	{ -0.592495f, 0.191624f, 0.782451f },
	{ -0.35239f, 0.819515f, 0.451903f },
	{ -0.290417f, 0.158747f, 0.94364f },
	{ -0.8070689f, -0.420687f, -0.414321f },
	{ -0.415565f, -0.401898f, 0.815956f },
	{ -0.104582f, 0.868013f, -0.485403f },
	{ -0.211348f, 0.751518f, 0.6249419f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00032D78 = { vertex_00032B50, normal_00032C64, LengthOfArray(vertex_00032B50), meshlist_00032B38, matlist_000329FC, LengthOfArray(meshlist_00032B38), LengthOfArray(matlist_000329FC),{ -0.096494f, -20.18269f, -4.649877f }, 47.22192f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00032DA0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00032D78, 401.1524f, 149.7934f, 237.3202f, 0, 0x3AA, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00032DD4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 24, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00032DE8[] = {
	0x8000u | 8, 61, 60, 59, 58, 57, 56, 63, 62,
	0x8000u | 8, 1, 0, 3, 2, 5, 4, 7, 6,
	0x8000u | 8, 53, 52, 51, 50, 49, 48, 55, 54,
	0x8000u | 8, 47, 46, 45, 44, 43, 42, 41, 40,
	0x8000u | 8, 32, 33, 34, 35, 36, 37, 38, 39,
	0x8000u | 8, 9, 8, 11, 10, 13, 12, 15, 14,
	0x8000u | 8, 31, 30, 25, 24, 27, 26, 29, 28,
	0x8000u | 8, 20, 21, 18, 19, 16, 17, 22, 23
};

extern "C" __declspec(dllexport) NJS_TEX uv_00032E78[] = {
	{ 5, -2295 },
	{ 5, -1273 },
	{ 1, -2295 },
	{ 1, -1273 },
	{ 4, -2295 },
	{ 4, -1273 },
	{ 13, -2295 },
	{ 13, -1273 },
	{ 255, -2294 },
	{ 255, 246 },
	{ 250, -2294 },
	{ 250, 246 },
	{ 241, -2294 },
	{ 241, 246 },
	{ 237, -2294 },
	{ 237, 246 },
	{ 58, -2295 },
	{ 58, 254 },
	{ 56, -2295 },
	{ 56, 254 },
	{ 62, -2295 },
	{ 62, 254 },
	{ 70, -2295 },
	{ 70, 254 },
	{ 139, -2292 },
	{ 139, 248 },
	{ 141, -2292 },
	{ 141, 248 },
	{ 149, -2292 },
	{ 149, 248 },
	{ 155, -2292 },
	{ 155, 248 },
	{ 255, 246 },
	{ 255, -2294 },
	{ 250, 246 },
	{ 250, -2294 },
	{ 241, 246 },
	{ 241, -2294 },
	{ 237, 246 },
	{ 237, -2294 },
	{ 155, -2292 },
	{ 155, 248 },
	{ 148, -2292 },
	{ 148, 248 },
	{ 140, -2292 },
	{ 140, 248 },
	{ 139, -2292 },
	{ 139, 248 },
	{ 13, -2294 },
	{ 13, -1273 },
	{ 3, -2294 },
	{ 3, -1273 },
	{ 0, -2294 },
	{ 0, -1273 },
	{ 5, -2294 },
	{ 5, -1273 },
	{ 58, 255 },
	{ 58, -2294 },
	{ 57, 255 },
	{ 57, -2294 },
	{ 63, 255 },
	{ 63, -2294 },
	{ 70, 255 },
	{ 70, -2294 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00032F78[] = {
	{ NJD_MESHSET_TRIMESH | 0, 8, poly_00032DE8, NULL, NULL, NULL, uv_00032E78, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00032F90[] = {
	{ -12.02859f, -78.72108f, 86.60115f },
	{ -12.02859f, 28.80944f, 86.60115f },
	{ -13.70079f, -78.72108f, 88.7294f },
	{ -13.70079f, 28.80944f, 88.7294f },
	{ -16.57374f, -78.72108f, 88.52796f },
	{ -16.57374f, 28.80944f, 88.52796f },
	{ -17.77449f, -78.72108f, 86.19827f },
	{ -17.77449f, 28.80944f, 86.19827f },
	{ -45.36129f, -78.80812f, 80.65049f },
	{ -45.36129f, 28.7224f, 80.65049f },
	{ -47.76722f, -78.80812f, 82.50948f },
	{ -47.76722f, 28.7224f, 82.50948f },
	{ -50.41988f, -78.80812f, 81.38794f },
	{ -50.41988f, 28.7224f, 81.38794f },
	{ -50.6666f, -78.80812f, 78.40745f },
	{ -50.6666f, 28.7224f, 78.40745f },
	{ -76.32471f, -79.07844f, 63.8235f },
	{ -76.32471f, 28.80945f, 63.8235f },
	{ -78.32461f, -79.07844f, 61.7511f },
	{ -78.32461f, 28.80945f, 61.7511f },
	{ -77.83791f, -79.07844f, 58.75529f },
	{ -77.83791f, 28.80945f, 58.75529f },
	{ -73.83811f, -79.07844f, 62.90008f },
	{ -73.83811f, 28.80945f, 62.90008f },
	{ -96.4352f, -14.39055f, 35.51442f },
	{ -96.4352f, 28.80946f, 35.51442f },
	{ -97.61898f, -14.39055f, 32.88897f },
	{ -97.61898f, 28.80946f, 32.88897f },
	{ -95.6162f, -14.39055f, 30.52976f },
	{ -95.6162f, 28.80946f, 30.52976f },
	{ -93.24858f, -14.39055f, 35.78066f },
	{ -93.24858f, 28.80946f, 35.78066f },
	{ -12.02859f, -78.72108f, -86.60125f },
	{ -12.02859f, 28.80944f, -86.60125f },
	{ -13.70079f, -78.72108f, -88.7295f },
	{ -13.70079f, 28.80944f, -88.7295f },
	{ -16.57374f, -78.72108f, -88.52807f },
	{ -16.57374f, 28.80944f, -88.52807f },
	{ -17.77449f, -78.72108f, -86.19838f },
	{ -17.77449f, 28.80944f, -86.19838f },
	{ -45.36132f, -78.80812f, -80.6506f },
	{ -45.36132f, 28.7224f, -80.6506f },
	{ -47.56217f, -78.80812f, -82.50958f },
	{ -47.56217f, 28.7224f, -82.50958f },
	{ -50.21482f, -78.80812f, -81.38806f },
	{ -50.21482f, 28.7224f, -81.38806f },
	{ -50.66663f, -78.80812f, -78.40755f },
	{ -50.66663f, 28.7224f, -78.40755f },
	{ -76.52988f, -79.07838f, -63.8235f },
	{ -76.52988f, 28.8095f, -63.8235f },
	{ -78.52978f, -79.07838f, -61.75111f },
	{ -78.52978f, 28.8095f, -61.75111f },
	{ -77.83797f, -79.07838f, -58.7553f },
	{ -77.83797f, 28.8095f, -58.7553f },
	{ -73.83818f, -79.07838f, -62.90008f },
	{ -73.83818f, 28.8095f, -62.90008f },
	{ -96.07877f, -14.3905f, -35.69869f },
	{ -96.07877f, 28.8095f, -35.69869f },
	{ -97.26258f, -14.3905f, -33.07323f },
	{ -97.26258f, 28.8095f, -33.07323f },
	{ -95.61626f, -14.3905f, -30.52975f },
	{ -95.61626f, 28.8095f, -30.52975f },
	{ -93.24865f, -14.3905f, -35.78066f },
	{ -93.24865f, 28.8095f, -35.78066f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00033290[] = {
	{ 0.7863179f, 0, 0.617822f },
	{ 0.7863179f, 0, 0.617822f },
	{ 0.405398f, 0, 0.91414f },
	{ 0.405398f, 0, 0.91414f },
	{ -0.550069f, 0, 0.8351189f },
	{ -0.550069f, 0, 0.8351189f },
	{ -0.888881f, 0, 0.458139f },
	{ -0.888881f, 0, 0.458139f },
	{ 0.611417f, 0, 0.791308f },
	{ 0.611417f, 0, 0.791308f },
	{ 0.128567f, 0, 0.9917009f },
	{ 0.128567f, 0, 0.9917009f },
	{ -0.809972f, 0, 0.586469f },
	{ -0.809972f, 0, 0.586469f },
	{ -0.996591f, 0, 0.08249599f },
	{ -0.996591f, 0, 0.08249599f },
	{ -0.22195f, 0, 0.975058f },
	{ -0.22195f, 0, 0.975058f },
	{ -0.9543639f, 0, 0.298645f },
	{ -0.9543639f, 0, 0.298645f },
	{ -0.987059f, 0, -0.160359f },
	{ -0.987059f, 0, -0.160359f },
	{ 0.348126f, 0, 0.937448f },
	{ 0.348126f, 0, 0.937448f },
	{ -0.5771869f, 0, 0.8166119f },
	{ -0.5771869f, 0, 0.8166119f },
	{ -0.9901969f, 0, -0.139679f },
	{ -0.9901969f, 0, -0.139679f },
	{ -0.762345f, 0, -0.647171f },
	{ -0.762345f, 0, -0.647171f },
	{ -0.08326f, 0, 0.996528f },
	{ -0.08326f, 0, 0.996528f },
	{ 0.7863179f, 0, -0.617822f },
	{ 0.7863179f, 0, -0.617822f },
	{ 0.405398f, 0, -0.91414f },
	{ 0.405398f, 0, -0.91414f },
	{ -0.550069f, 0, -0.8351189f },
	{ -0.550069f, 0, -0.8351189f },
	{ -0.888881f, 0, -0.458139f },
	{ -0.888881f, 0, -0.458139f },
	{ 0.645279f, 0, -0.763947f },
	{ 0.645279f, 0, -0.763947f },
	{ 0.150125f, 0, -0.988667f },
	{ 0.150125f, 0, -0.988667f },
	{ -0.789612f, 0, -0.613606f },
	{ -0.789612f, 0, -0.613606f },
	{ -0.988705f, 0, -0.149876f },
	{ -0.988705f, 0, -0.149876f },
	{ -0.234165f, 0, -0.972197f },
	{ -0.234165f, 0, -0.972197f },
	{ -0.9636829f, 0, -0.267048f },
	{ -0.9636829f, 0, -0.267048f },
	{ -0.974359f, 0, 0.225f },
	{ -0.974359f, 0, 0.225f },
	{ 0.324496f, 0, -0.945887f },
	{ 0.324496f, 0, -0.945887f },
	{ -0.554761f, 0, -0.83201f },
	{ -0.554761f, 0, -0.83201f },
	{ -0.997157f, 0, 0.07535499f },
	{ -0.997157f, 0, 0.07535499f },
	{ -0.83949f, 0, 0.543376f },
	{ -0.83949f, 0, 0.543376f },
	{ -0.028951f, 0, -0.999581f },
	{ -0.028951f, 0, -0.999581f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00033590 = { vertex_00032F90, normal_00033290, LengthOfArray(vertex_00032F90), meshlist_00032F78, matlist_00032DD4, LengthOfArray(meshlist_00032F78), LengthOfArray(matlist_00032DD4),{ -54.82379f, -25.13447f, -0.00053f }, 103.8406f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000335B8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00033590, 287.7846f, 76.10244f, -39.00063f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000335EC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00033600[] = {
	3, 0, 1, 2,
	6, 1, 3, 2, 6, 0, 4,
	4, 7, 3, 5, 1,
	3, 3, 7, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_00033628[] = {
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ -27285, 255 },
	{ 0, 255 },
	{ -27285, 255 },
	{ -27285, 255 },
	{ 0, 255 },
	{ -27285, 255 },
	{ 0, 255 },
	{ 0 },
	{ -27285, 0 },
	{ -27285, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00033668[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00033600, NULL, NULL, NULL, uv_00033628, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00033680[] = {
	{ -121, -0.5f, -0.5f },
	{ -121, -0.5f, 0.5f },
	{ -121, 0.5f, -0.5f },
	{ -121, 0.5f, 0.5f },
	{ 111, -0.5f, -0.5f },
	{ 111, -0.5f, 0.5f },
	{ 111, 0.5f, -0.5f },
	{ 111, 0.5f, 0.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000336E0[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00033740 = { vertex_00033680, normal_000336E0, LengthOfArray(vertex_00033680), meshlist_00033668, matlist_000335EC, LengthOfArray(meshlist_00033668), LengthOfArray(matlist_000335EC),{ -5, 0, 0 }, 116.0011f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00033768 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00033740, 95.74f, 60.56135f, 1.399999f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0003379C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000337B0[] = {
	3, 0, 1, 2,
	6, 1, 3, 2, 6, 0, 4,
	4, 7, 3, 5, 1,
	3, 3, 7, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_000337D8[] = {
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ -27285, 255 },
	{ 0, 255 },
	{ -27285, 255 },
	{ -27285, 255 },
	{ 0, 255 },
	{ -27285, 255 },
	{ 0, 255 },
	{ 0 },
	{ -27285, 0 },
	{ -27285, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00033818[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000337B0, NULL, NULL, NULL, uv_000337D8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00033830[] = {
	{ -121, -0.5f, -0.5f },
	{ -121, -0.5f, 0.5f },
	{ -121, 0.5f, -0.5f },
	{ -121, 0.5f, 0.5f },
	{ 111, -0.5f, -0.5f },
	{ 111, -0.5f, 0.5f },
	{ 111, 0.5f, -0.5f },
	{ 111, 0.5f, 0.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00033890[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000338F0 = { vertex_00033830, normal_00033890, LengthOfArray(vertex_00033830), meshlist_00033818, matlist_0003379C, LengthOfArray(meshlist_00033818), LengthOfArray(matlist_0003379C),{ -5, 0, 0 }, 116.0011f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00033918 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000338F0, 95.74f, 60.56135f, -8.599999f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0003394C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00033960[] = {
	3, 0, 1, 2,
	6, 1, 3, 2, 6, 0, 4,
	4, 7, 3, 5, 1,
	3, 3, 7, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_00033988[] = {
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ -27285, 255 },
	{ 0, 255 },
	{ -27285, 255 },
	{ -27285, 255 },
	{ 0, 255 },
	{ -27285, 255 },
	{ 0, 255 },
	{ 0 },
	{ -27285, 0 },
	{ -27285, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000339C8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00033960, NULL, NULL, NULL, uv_00033988, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000339E0[] = {
	{ -121, -0.5f, -0.5f },
	{ -121, -0.5f, 0.5f },
	{ -121, 0.5f, -0.5f },
	{ -121, 0.5f, 0.5f },
	{ 111, -0.5f, -0.5f },
	{ 111, -0.5f, 0.5f },
	{ 111, 0.5f, -0.5f },
	{ 111, 0.5f, 0.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00033A40[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00033AA0 = { vertex_000339E0, normal_00033A40, LengthOfArray(vertex_000339E0), meshlist_000339C8, matlist_0003394C, LengthOfArray(meshlist_000339C8), LengthOfArray(matlist_0003394C),{ -5, 0, 0 }, 116.0011f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00033AC8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00033AA0, 95.74f, 60.56135f, -18.35999f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00033AFC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00033B10[] = {
	3, 0, 1, 2,
	6, 1, 3, 2, 6, 0, 4,
	4, 7, 3, 5, 1,
	3, 3, 7, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_00033B38[] = {
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ -27285, 255 },
	{ 0, 255 },
	{ -27285, 255 },
	{ -27285, 255 },
	{ 0, 255 },
	{ -27285, 255 },
	{ 0, 255 },
	{ 0 },
	{ -27285, 0 },
	{ -27285, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00033B78[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00033B10, NULL, NULL, NULL, uv_00033B38, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00033B90[] = {
	{ -121, -0.5f, -0.5f },
	{ -121, -0.5f, 0.5f },
	{ -121, 0.5f, -0.5f },
	{ -121, 0.5f, 0.5f },
	{ 111, -0.5f, -0.5f },
	{ 111, -0.5f, 0.5f },
	{ 111, 0.5f, -0.5f },
	{ 111, 0.5f, 0.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00033BF0[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00033C50 = { vertex_00033B90, normal_00033BF0, LengthOfArray(vertex_00033B90), meshlist_00033B78, matlist_00033AFC, LengthOfArray(meshlist_00033B78), LengthOfArray(matlist_00033AFC),{ -5, 0, 0 }, 116.0011f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00033C78 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00033C50, 95.74f, 60.56135f, -28.48f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00033CAC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00033CC0[] = {
	3, 0, 1, 2,
	6, 1, 3, 2, 6, 0, 4,
	4, 7, 3, 5, 1,
	3, 3, 7, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_00033CE8[] = {
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ -27285, 255 },
	{ 0, 255 },
	{ -27285, 255 },
	{ -27285, 255 },
	{ 0, 255 },
	{ -27285, 255 },
	{ 0, 255 },
	{ 0 },
	{ -27285, 0 },
	{ -27285, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00033D28[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00033CC0, NULL, NULL, NULL, uv_00033CE8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00033D40[] = {
	{ -121, -0.5f, -0.5f },
	{ -121, -0.5f, 0.5f },
	{ -121, 0.5f, -0.5f },
	{ -121, 0.5f, 0.5f },
	{ 111, -0.5f, -0.5f },
	{ 111, -0.5f, 0.5f },
	{ 111, 0.5f, -0.5f },
	{ 111, 0.5f, 0.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00033DA0[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00033E00 = { vertex_00033D40, normal_00033DA0, LengthOfArray(vertex_00033D40), meshlist_00033D28, matlist_00033CAC, LengthOfArray(meshlist_00033D28), LengthOfArray(matlist_00033CAC),{ -5, 0, 0 }, 116.0011f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00033E28 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00033E00, 95.74f, 60.56135f, -38.59999f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00033E5C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00033E70[] = {
	3, 0, 1, 2,
	6, 1, 3, 2, 6, 0, 4,
	4, 7, 3, 5, 1,
	3, 3, 7, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_00033E98[] = {
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ -27285, 255 },
	{ 0, 255 },
	{ -27285, 255 },
	{ -27285, 255 },
	{ 0, 255 },
	{ -27285, 255 },
	{ 0, 255 },
	{ 0 },
	{ -27285, 0 },
	{ -27285, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00033ED8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00033E70, NULL, NULL, NULL, uv_00033E98, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00033EF0[] = {
	{ -121, -0.5f, -0.5f },
	{ -121, -0.5f, 0.5f },
	{ -121, 0.5f, -0.5f },
	{ -121, 0.5f, 0.5f },
	{ 111, -0.5f, -0.5f },
	{ 111, -0.5f, 0.5f },
	{ 111, 0.5f, -0.5f },
	{ 111, 0.5f, 0.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00033F50[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00033FB0 = { vertex_00033EF0, normal_00033F50, LengthOfArray(vertex_00033EF0), meshlist_00033ED8, matlist_00033E5C, LengthOfArray(meshlist_00033ED8), LengthOfArray(matlist_00033E5C),{ -5, 0, 0 }, 116.0011f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00033FD8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00033FB0, 95.74f, 60.56135f, -48.7f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0003400C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00034020[] = {
	3, 0, 1, 2,
	6, 1, 3, 2, 6, 0, 4,
	4, 7, 3, 5, 1,
	3, 3, 7, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_00034048[] = {
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ -27285, 255 },
	{ 0, 255 },
	{ -27285, 255 },
	{ -27285, 255 },
	{ 0, 255 },
	{ -27285, 255 },
	{ 0, 255 },
	{ 0 },
	{ -27285, 0 },
	{ -27285, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00034088[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00034020, NULL, NULL, NULL, uv_00034048, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000340A0[] = {
	{ -121, -0.5f, -0.5f },
	{ -121, -0.5f, 0.5f },
	{ -121, 0.5f, -0.5f },
	{ -121, 0.5f, 0.5f },
	{ 111, -0.5f, -0.5f },
	{ 111, -0.5f, 0.5f },
	{ 111, 0.5f, -0.5f },
	{ 111, 0.5f, 0.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00034100[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00034160 = { vertex_000340A0, normal_00034100, LengthOfArray(vertex_000340A0), meshlist_00034088, matlist_0003400C, LengthOfArray(meshlist_00034088), LengthOfArray(matlist_0003400C),{ -5, 0, 0 }, 116.0011f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00034188 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00034160, 95.74f, 60.56135f, -58.84f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000341BC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000341D0[] = {
	3, 0, 1, 2,
	6, 1, 3, 2, 6, 0, 4,
	4, 7, 3, 5, 1,
	3, 3, 7, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_000341F8[] = {
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ -27285, 255 },
	{ 0, 255 },
	{ -27285, 255 },
	{ -27285, 255 },
	{ 0, 255 },
	{ -27285, 255 },
	{ 0, 255 },
	{ 0 },
	{ -27285, 0 },
	{ -27285, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00034238[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000341D0, NULL, NULL, NULL, uv_000341F8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00034250[] = {
	{ -121, -0.5f, -0.5f },
	{ -121, -0.5f, 0.5f },
	{ -121, 0.5f, -0.5f },
	{ -121, 0.5f, 0.5f },
	{ 111, -0.5f, -0.5f },
	{ 111, -0.5f, 0.5f },
	{ 111, 0.5f, -0.5f },
	{ 111, 0.5f, 0.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000342B0[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00034310 = { vertex_00034250, normal_000342B0, LengthOfArray(vertex_00034250), meshlist_00034238, matlist_000341BC, LengthOfArray(meshlist_00034238), LengthOfArray(matlist_000341BC),{ -5, 0, 0 }, 116.0011f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00034338 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00034310, 95.74f, 60.56135f, -69.00002f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0003436C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00034380[] = {
	3, 0, 1, 2,
	6, 1, 3, 2, 6, 0, 4,
	4, 7, 3, 5, 1,
	3, 3, 7, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_000343A8[] = {
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ -27285, 255 },
	{ 0, 255 },
	{ -27285, 255 },
	{ -27285, 255 },
	{ 0, 255 },
	{ -27285, 255 },
	{ 0, 255 },
	{ 0 },
	{ -27285, 0 },
	{ -27285, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000343E8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00034380, NULL, NULL, NULL, uv_000343A8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00034400[] = {
	{ -121, -0.5f, -0.5f },
	{ -121, -0.5f, 0.5f },
	{ -121, 0.5f, -0.5f },
	{ -121, 0.5f, 0.5f },
	{ 111, -0.5f, -0.5f },
	{ 111, -0.5f, 0.5f },
	{ 111, 0.5f, -0.5f },
	{ 111, 0.5f, 0.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00034460[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000344C0 = { vertex_00034400, normal_00034460, LengthOfArray(vertex_00034400), meshlist_000343E8, matlist_0003436C, LengthOfArray(meshlist_000343E8), LengthOfArray(matlist_0003436C),{ -5, 0, 0 }, 116.0011f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000344E8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000344C0, 95.74f, 60.56135f, -78.59999f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0003451C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00034530[] = {
	8, 7, 6, 5, 4, 3, 2, 1, 0
};

extern "C" __declspec(dllexport) NJS_TEX uv_00034544[] = {
	{ 0, 255 },
	{ 0 },
	{ 677, 255 },
	{ 668, 0 },
	{ 1367, 255 },
	{ 1362, 0 },
	{ 2550, 255 },
	{ 2550, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00034564[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00034530, NULL, NULL, NULL, uv_00034544, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0003457C[] = {
	{ 45.3239f, 41.43543f, 33.76596f },
	{ 43.55913f, 34.33564f, 33.29922f },
	{ -2.670204f, 41.43543f, 95.05964f },
	{ -3.205529f, 34.33564f, 94.15803f },
	{ -56.55952f, 41.43543f, 112.4523f },
	{ -56.39711f, 34.33564f, 111.3369f },
	{ -74.05207f, 40.04425f, 113.563f },
	{ -74.05203f, 32.91661f, 113.563f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000345DC[] = {
	{ -0.779405f, 0.183964f, -0.598904f },
	{ -0.779404f, 0.183964f, -0.598904f },
	{ -0.56516f, 0.17025f, -0.807223f },
	{ -0.5685109f, 0.170547f, -0.804804f },
	{ -0.217817f, 0.109144f, -0.9698679f },
	{ -0.219359f, 0.109728f, -0.969454f },
	{ -0.130749f, 0.076001f, -0.988498f },
	{ -0.130749f, 0.076001f, -0.988498f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0003463C = { vertex_0003457C, normal_000345DC, LengthOfArray(vertex_0003457C), meshlist_00034564, matlist_0003451C, LengthOfArray(meshlist_00034564), LengthOfArray(matlist_0003451C),{ -14.36408f, 37.17602f, 73.43113f }, 71.92514f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00034664 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0003463C, 344.5488f, 46.03556f, 248.7588f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00034698[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000346AC[] = {
	8, 2, 3, 1, 0, 5, 4, 7, 6,
	6, 9, 8, 10, 11, 13, 12
};

extern "C" __declspec(dllexport) NJS_TEX uv_000346CC[] = {
	{ 0, 255 },
	{ 0 },
	{ 6987, 255 },
	{ 6978, 0 },
	{ 9263, 255 },
	{ 9255, 0 },
	{ 12346, 255 },
	{ 12328, 0 },
	{ 16850, 255 },
	{ 16818, 0 },
	{ 23135, 255 },
	{ 23091, 0 },
	{ 25500, 255 },
	{ 25500, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00034704[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000346AC, NULL, NULL, NULL, uv_000346CC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0003471C[] = {
	{ -198.6621f, 38.77542f, -163.0666f },
	{ -198.6621f, 34.32726f, -163.8288f },
	{ 64.09139f, 34.30778f, -164.7125f },
	{ 64.09139f, 39.0354f, -164.7125f },
	{ -281.2937f, 39.11541f, -139.9478f },
	{ -281.1313f, 34.33564f, -141.0631f },
	{ -358.4514f, 38.81543f, -79.96896f },
	{ -358.4514f, 34.33564f, -81.02391f },
	{ -266.2035f, 38.77542f, 108.1438f },
	{ -266.2035f, 34.33564f, 107.1107f },
	{ 16.07741f, 34.33564f, 59.82624f },
	{ 16.07741f, 39.0354f, 60.81543f },
	{ 61.62395f, 39.0354f, 30.26596f },
	{ 59.85918f, 34.33564f, 29.79923f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000347C4[] = {
	{ 0.137058f, -0.137541f, 0.980968f },
	{ 0.133073f, -0.135935f, 0.98174f },
	{ 0.003345f, -0.082787f, 0.9965619f },
	{ 0.003345f, -0.082787f, 0.9965619f },
	{ 0.456109f, -0.182459f, 0.871018f },
	{ 0.427434f, -0.183811f, 0.8851629f },
	{ 0.604196f, -0.171775f, 0.7781f },
	{ 0.604196f, -0.171775f, 0.7781f },
	{ -0.161408f, 0.213217f, -0.96358f },
	{ -0.161408f, 0.213217f, -0.96358f },
	{ -0.368726f, 0.225307f, -0.901819f },
	{ -0.350193f, 0.22463f, -0.909344f },
	{ -0.542477f, 0.227126f, -0.808785f },
	{ -0.542477f, 0.227126f, -0.808785f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0003486C = { vertex_0003471C, normal_000347C4, LengthOfArray(vertex_0003471C), meshlist_00034704, matlist_00034698, LengthOfArray(meshlist_00034704), LengthOfArray(matlist_00034698),{ -147.18f, 36.71159f, -28.28433f }, 251.4921f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00034894 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0003486C, 207.5489f, -24.53885f, 342.4586f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000348C8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000348DC[] = {
	4, 1, 3, 5, 7,
	10, 6, 3, 2, 1, 0, 5, 4, 7, 6, 3
};

extern "C" __declspec(dllexport) NJS_TEX uv_000348FC[] = {
	{ 0, 135 },
	{ 0 },
	{ 0, 255 },
	{ 0, 122 },
	{ 255, 122 },
	{ 0 },
	{ 255, 0 },
	{ 0, 135 },
	{ 255, 135 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 122 },
	{ 255, 122 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00034934[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000348DC, NULL, NULL, NULL, uv_000348FC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0003494C[] = {
	{ 0.06545199f, 0.000005f, -1.097608f },
	{ 0.06545199f, 13.8f, -1.097608f },
	{ -1.09953f, 0.000005f, -0.008696999f },
	{ -1.09953f, 13.8f, -0.008696999f },
	{ 1.093422f, 0.000005f, -0.099585f },
	{ 1.093422f, 13.8f, -0.099585f },
	{ -0.04864f, 0.000005f, 1.088307f },
	{ -0.04864f, 13.8f, 1.088307f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000349AC[] = {
	{ 0.009478999f, 0, -0.999955f },
	{ 0.007722f, 0.579944f, -0.8146189f },
	{ -0.9996189f, 0, -0.027599f },
	{ -0.81664f, 0.5767069f, -0.022547f },
	{ 0.9998519f, 0, -0.017223f },
	{ 0.816193f, 0.577608f, -0.014059f },
	{ -0.0009f, 0, 1 },
	{ -0.000736f, 0.575218f, 0.818f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00034A0C = { vertex_0003494C, normal_000349AC, LengthOfArray(vertex_0003494C), meshlist_00034934, matlist_000348C8, LengthOfArray(meshlist_00034934), LengthOfArray(matlist_000348C8),{ -0.003054f, 6.900002f, -0.004651f }, 6.948995f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00034A34 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00034A0C, -411.1955f, 18.92406f, 211.7654f, 0, 0x2000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00034A68[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00034A7C[] = {
	4, 1, 3, 5, 7,
	10, 6, 3, 2, 1, 0, 5, 4, 7, 6, 3
};

extern "C" __declspec(dllexport) NJS_TEX uv_00034A9C[] = {
	{ 0, 135 },
	{ 0 },
	{ 0, 255 },
	{ 0, 122 },
	{ 255, 122 },
	{ 0 },
	{ 255, 0 },
	{ 0, 135 },
	{ 255, 135 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 122 },
	{ 255, 122 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00034AD4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00034A7C, NULL, NULL, NULL, uv_00034A9C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00034AEC[] = {
	{ 0.06545199f, 0.000005f, -1.097608f },
	{ 0.06545199f, 13.8f, -1.097608f },
	{ -1.09953f, 0.000005f, -0.008696999f },
	{ -1.09953f, 13.8f, -0.008696999f },
	{ 1.093422f, 0.000005f, -0.099585f },
	{ 1.093422f, 13.8f, -0.099585f },
	{ -0.04864f, 0.000005f, 1.088307f },
	{ -0.04864f, 13.8f, 1.088307f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00034B4C[] = {
	{ 0.009478999f, 0, -0.999955f },
	{ 0.007722f, 0.579944f, -0.8146189f },
	{ -0.9996189f, 0, -0.027599f },
	{ -0.81664f, 0.5767069f, -0.022547f },
	{ 0.9998519f, 0, -0.017223f },
	{ 0.816193f, 0.577608f, -0.014059f },
	{ -0.0009f, 0, 1 },
	{ -0.000736f, 0.575218f, 0.818f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00034BAC = { vertex_00034AEC, normal_00034B4C, LengthOfArray(vertex_00034AEC), meshlist_00034AD4, matlist_00034A68, LengthOfArray(meshlist_00034AD4), LengthOfArray(matlist_00034A68),{ -0.003054f, 6.900002f, -0.004651f }, 6.948995f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00034BD4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00034BAC, -419.0249f, 18.92406f, 225.8278f, 0, 0x2000, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00034C08[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00034C30[] = {
	4, 15, 14, 21, 16,
	6, 4, 2, 5, 1, 3, 0,
	4, 11, 10, 13, 12,
	4, 20, 18, 19, 17,
	4, 7, 6, 9, 8
};

extern "C" __declspec(dllexport) Sint16 poly_00034C66[] = {
	4, 13, 12, 15, 14,
	4, 18, 20, 16, 21,
	4, 3, 0, 7, 6,
	4, 9, 8, 11, 10
};

extern "C" __declspec(dllexport) NJS_TEX uv_00034C90[] = {
	{ 7650, -1275 },
	{ 0, -1275 },
	{ 7650, -1529 },
	{ 0, -1529 },
	{ 7650, 255 },
	{ 0, 255 },
	{ 7650, 255 },
	{ 0, 255 },
	{ 7650, 0 },
	{ 0 },
	{ 7650, -765 },
	{ 0, -765 },
	{ 7650, -1020 },
	{ 0, -1020 },
	{ 7650, 255 },
	{ 0, 255 },
	{ 7650, 255 },
	{ 0, 255 },
	{ 7650, -255 },
	{ 0, -255 },
	{ 7650, -510 },
	{ 0, -510 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00034CE8[] = {
	{ 10200, -1928 },
	{ 0, -1928 },
	{ 10200, -2475 },
	{ 0, -2475 },
	{ 0, -3570 },
	{ 10200, -3570 },
	{ 0, -3023 },
	{ 10200, -3023 },
	{ 10200, 255 },
	{ 0, 255 },
	{ 10200, -290 },
	{ 0, -290 },
	{ 10200, -836 },
	{ 0, -836 },
	{ 10200, -1384 },
	{ 0, -1384 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00034D28[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_00034C30, NULL, NULL, NULL, uv_00034C90, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_00034C66, NULL, NULL, NULL, uv_00034CE8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00034D58[] = {
	{ -199.65f, 1, -30.39911f },
	{ -199.65f, 1, -40.53215f },
	{ -199.65f, -1, -40.53215f },
	{ 111.65f, 1, -30.39911f },
	{ 111.65f, -1, -40.53215f },
	{ 111.65f, 1, -40.53215f },
	{ -199.65f, 1, -20.26607f },
	{ 111.65f, 1, -20.26607f },
	{ -199.65f, 1, -10.13304f },
	{ 111.65f, 1, -10.13304f },
	{ -199.65f, 1, 0 },
	{ 111.65f, 1, 0 },
	{ -199.65f, 1, 10.13304f },
	{ 111.65f, 1, 10.13304f },
	{ -199.65f, 1, 20.26607f },
	{ 111.65f, 1, 20.26607f },
	{ -199.65f, 1, 30.39911f },
	{ -199.65f, -1, 40.53215f },
	{ -199.65f, 1, 40.53215f },
	{ 111.65f, -1, 40.53215f },
	{ 111.65f, 1, 40.53215f },
	{ 111.65f, 1, 30.39911f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00034E60[] = {
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 1, 0 },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, -0.7071069f },
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
	{ 0, 0, 1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00034F68 = { vertex_00034D58, normal_00034E60, LengthOfArray(vertex_00034D58), meshlist_00034D28, matlist_00034C08, LengthOfArray(meshlist_00034D28), LengthOfArray(matlist_00034C08),{ -43.99999f, 0, 0 }, 160.8408f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00034F90 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00034F68, 95.39998f, 59.05997f, -38.59999f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00034FC4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 52, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00035000[] = {
	4, 27, 29, 33, 31,
	8, 33, 35, 27, 37, 25, 39, 22, 23
};

extern "C" __declspec(dllexport) Sint16 poly_0003501C[] = {
	0x8000u | 22, 0, 3, 1, 2, 18, 19, 16, 17, 14, 15, 12, 13, 10, 11, 8, 9, 6, 7, 4, 5, 0, 3,
	0x8000u | 22, 0, 21, 4, 24, 6, 26, 8, 28, 10, 30, 12, 32, 14, 34, 16, 36, 18, 38, 1, 20, 0, 21
};

extern "C" __declspec(dllexport) Sint16 poly_00035078[] = {
	22, 26, 25, 24, 22, 21, 23, 20, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25
};

extern "C" __declspec(dllexport) NJS_TEX uv_000350A8[] = {
	{ 208, -553 },
	{ 35, -492 },
	{ 151, 81 },
	{ 35, -39 },
	{ 151, 81 },
	{ 266, 141 },
	{ 208, -553 },
	{ 438, 167 },
	{ 496, -733 },
	{ 725, 227 },
	{ 1998, -733 },
	{ 1998, 227 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000350D8[] = {
	{ 3212, 143 },
	{ 3212, 255 },
	{ 2906, 143 },
	{ 2906, 255 },
	{ 1888, 143 },
	{ 1888, 255 },
	{ 1763, 143 },
	{ 1763, 255 },
	{ 1719, 143 },
	{ 1719, 255 },
	{ 1679, 143 },
	{ 1679, 255 },
	{ 1623, 143 },
	{ 1623, 255 },
	{ 1450, 143 },
	{ 1450, 255 },
	{ 1411, 143 },
	{ 1411, 255 },
	{ 1280, 143 },
	{ 1280, 255 },
	{ 152, 143 },
	{ 152, 255 },
	{ 152, 143 },
	{ 218, 26 },
	{ 1280, 143 },
	{ 1177, 26 },
	{ 1411, 143 },
	{ 1363, 26 },
	{ 1450, 143 },
	{ 1419, 26 },
	{ 1623, 143 },
	{ 1639, 26 },
	{ 1679, 143 },
	{ 1712, 26 },
	{ 1719, 143 },
	{ 1768, 26 },
	{ 1763, 143 },
	{ 1838, 26 },
	{ 1888, 143 },
	{ 2032, 26 },
	{ 2906, 143 },
	{ 2852, 26 },
	{ 3212, 143 },
	{ 3278, 26 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00035188[] = {
	{ 2492, 255 },
	{ 2814, 0 },
	{ 2808, 255 },
	{ 4231, 0 },
	{ 4216, 255 },
	{ 5100, 0 },
	{ 5100, 255 },
	{ 1197, 0 },
	{ 1192, 255 },
	{ 1474, 0 },
	{ 1466, 255 },
	{ 1640, 0 },
	{ 1631, 255 },
	{ 1761, 0 },
	{ 1752, 255 },
	{ 1913, 0 },
	{ 1904, 255 },
	{ 2326, 0 },
	{ 2323, 255 },
	{ 2498, 0 },
	{ 2492, 255 },
	{ 2814, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000351E0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00035000, NULL, NULL, NULL, uv_000350A8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0003501C, NULL, NULL, NULL, uv_000350D8, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_00035078, NULL, NULL, NULL, uv_00035188, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00035228[] = {
	{ 109.2498f, 8.54981f, -26.04114f },
	{ 109.2498f, 8.54981f, 23.55887f },
	{ 109.2498f, -17.63817f, 23.55887f },
	{ 109.2498f, -17.63817f, -26.04114f },
	{ -6.348397f, 8.54981f, -26.04114f },
	{ -6.348397f, -17.63817f, -26.04114f },
	{ -21.84839f, 8.54981f, -16.74114f },
	{ -21.84839f, -17.63817f, -16.74114f },
	{ -31.1484f, 8.54981f, -13.64113f },
	{ -31.1484f, -17.63817f, -13.64113f },
	{ -31.1484f, 8.54981f, 9.819672f },
	{ -31.1484f, -17.63817f, 9.819672f },
	{ -24.9484f, 8.54981f, 16.01967f },
	{ -24.9484f, -17.63817f, 16.01967f },
	{ -18.7484f, 8.54981f, 19.11967f },
	{ -18.7484f, -17.63817f, 19.11967f },
	{ -9.448398f, 8.54981f, 20.45887f },
	{ -9.448398f, -17.63817f, 20.45887f },
	{ 6.051604f, 8.54981f, 23.55887f },
	{ 6.051604f, -17.63817f, 23.55887f },
	{ 123.7841f, 36.02267f, 40.29705f },
	{ 123.7841f, 36.02267f, -44.54293f },
	{ 120.1771f, 42.36182f, -42.00184f },
	{ 120.1771f, 42.36182f, 37.99817f },
	{ -11.78381f, 36.02267f, -44.54293f },
	{ -10.23935f, 42.36182f, -42.00184f },
	{ -37.77131f, 36.02267f, -28.63544f },
	{ -35.23935f, 42.36182f, -27.00183f },
	{ -53.36381f, 36.02267f, -23.33293f },
	{ -50.23935f, 42.36182f, -22.00182f },
	{ -53.36381f, 36.02267f, 16.79639f },
	{ -50.23935f, 42.36182f, 15.83818f },
	{ -42.9688f, 36.02267f, 27.40139f },
	{ -40.23935f, 42.36182f, 25.83817f },
	{ -32.57381f, 36.02267f, 32.70389f },
	{ -30.23935f, 42.36182f, 30.83817f },
	{ -16.9813f, 36.02267f, 34.99456f },
	{ -15.23935f, 42.36182f, 32.99818f },
	{ 9.006199f, 36.02267f, 40.29705f },
	{ 9.760651f, 42.36182f, 37.99817f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00035408[] = {
	{ 0.66676f, -0.406607f, -0.624582f },
	{ 0.662565f, -0.390921f, 0.638896f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.25363f, -0.316965f, -0.913896f },
	{ -0.266934f, 0, -0.963715f },
	{ -0.410443f, -0.278277f, -0.868388f },
	{ -0.417857f, 0, -0.9085129f },
	{ -0.723285f, -0.395014f, -0.566412f },
	{ -0.811242f, 0, -0.5847099f },
	{ -0.854473f, -0.373638f, 0.360931f },
	{ -0.92388f, 0, 0.382684f },
	{ -0.547967f, -0.313872f, 0.775381f },
	{ -0.5847099f, 0, 0.811242f },
	{ -0.275054f, -0.278629f, 0.920169f },
	{ -0.298702f, 0, 0.9543459f },
	{ -0.165928f, -0.254404f, 0.9527569f },
	{ -0.169386f, 0, 0.98555f },
	{ -0.09978399f, -0.268527f, 0.9580899f },
	{ -0.098537f, 0, 0.995133f },
	{ 0.716624f, -0.037076f, 0.6964729f },
	{ 0.710218f, -0.041168f, -0.702777f },
	{ 0.400166f, 0.7919739f, -0.461133f },
	{ 0.399421f, 0.7842259f, 0.474819f },
	{ -0.278694f, -0.095483f, -0.955622f },
	{ -0.152449f, 0.7922f, -0.590913f },
	{ -0.402505f, -0.099649f, -0.909978f },
	{ -0.231913f, 0.846208f, -0.479737f },
	{ -0.827581f, -0.09751999f, -0.55281f },
	{ -0.49963f, 0.7685699f, -0.399587f },
	{ -0.924596f, -0.095722f, 0.368728f },
	{ -0.551625f, 0.800663f, 0.233769f },
	{ -0.6019379f, -0.09185699f, 0.793242f },
	{ -0.330457f, 0.816519f, 0.473387f },
	{ -0.323787f, -0.08643299f, 0.942174f },
	{ -0.166303f, 0.798998f, 0.57788f },
	{ -0.167519f, -0.084209f, 0.9822659f },
	{ -0.100432f, 0.8176669f, 0.5668629f },
	{ -0.097613f, -0.087542f, 0.991367f },
	{ -0.0561f, 0.8046359f, 0.591112f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000355E8 = { vertex_00035228, normal_00035408, LengthOfArray(vertex_00035228), meshlist_000351E0, matlist_00034FC4, LengthOfArray(meshlist_000351E0), LengthOfArray(matlist_00034FC4),{ 35.21013f, 12.36183f, -2.122944f }, 98.20795f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00035610 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000355E8, -224.3607f, 17.69817f, -36.59817f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00035644[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0003566C[] = {
	14, 0, 6, 1, 7, 2, 8, 3, 9, 4, 10, 5, 11, 0, 6,
	14, 6, 12, 7, 13, 8, 14, 9, 15, 10, 16, 11, 17, 6, 12,
	11, 22, 23, 17, 18, 12, 19, 13, 20, 14, 21, 15,
	0x8000u | 5, 17, 22, 16, 21, 15,
	14, 1, 42, 0, 44, 5, 43, 4, 47, 3, 46, 2, 45, 1, 42,
	14, 46, 33, 45, 32, 42, 31, 44, 30, 43, 35, 47, 34, 46, 33
};

extern "C" __declspec(dllexport) Sint16 poly_00035708[] = {
	14, 41, 26, 40, 27, 39, 28, 36, 29, 38, 24, 37, 25, 41, 26,
	14, 22, 39, 23, 36, 18, 38, 19, 37, 20, 41, 21, 40, 22, 39
};

extern "C" __declspec(dllexport) NJS_TEX uv_00035744[] = {
	{ 1530, -255 },
	{ 1530, 255 },
	{ 1332, -255 },
	{ 1367, 255 },
	{ 1021, -255 },
	{ 972, 255 },
	{ 765, -255 },
	{ 701, 255 },
	{ 544, -255 },
	{ 508, 255 },
	{ 292, -255 },
	{ 229, 255 },
	{ 2, -253 },
	{ 2, 254 },
	{ 1530, -255 },
	{ 1530, 255 },
	{ 1367, -255 },
	{ 1299, 255 },
	{ 972, -255 },
	{ 987, 255 },
	{ 701, -255 },
	{ 748, 255 },
	{ 508, -255 },
	{ 430, 255 },
	{ 229, -255 },
	{ 132, 255 },
	{ 7, -252 },
	{ 3, 252 },
	{ 510, -1024 },
	{ 510, -871 },
	{ 0, -645 },
	{ 510, -510 },
	{ 0, -513 },
	{ 510, -224 },
	{ 0, -272 },
	{ 510, 124 },
	{ 0, 11 },
	{ 506, 247 },
	{ 1, 251 },
	{ 0, -645 },
	{ 510, -1024 },
	{ 0, -948 },
	{ 510, -1275 },
	{ 0, -1275 },
	{ 2, -1261 },
	{ 506, -1261 },
	{ 0, -1077 },
	{ 510, -1049 },
	{ 0, -787 },
	{ 510, -768 },
	{ 0, -533 },
	{ 510, -529 },
	{ 0, -312 },
	{ 510, -290 },
	{ 0, -56 },
	{ 510, -31 },
	{ 0, 255 },
	{ 510, 255 },
	{ 1020, -255 },
	{ 1020, 255 },
	{ 844, -255 },
	{ 848, 255 },
	{ 653, -255 },
	{ 677, 255 },
	{ 504, -255 },
	{ 508, 255 },
	{ 318, -255 },
	{ 340, 255 },
	{ 158, -255 },
	{ 169, 255 },
	{ 5, -251 },
	{ 2, 252 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00035864[] = {
	{ 510, 255 },
	{ 510, -255 },
	{ 444, 255 },
	{ 424, -255 },
	{ 358, 255 },
	{ 340, -255 },
	{ 288, 255 },
	{ 254, -255 },
	{ 187, 255 },
	{ 170, -255 },
	{ 98, 255 },
	{ 85, -255 },
	{ 1, 251 },
	{ 1, -253 },
	{ 3, -253 },
	{ 7, 253 },
	{ 153, -255 },
	{ 212, 255 },
	{ 512, -255 },
	{ 513, 255 },
	{ 799, -255 },
	{ 783, 255 },
	{ 1147, -255 },
	{ 1075, 255 },
	{ 1279, -255 },
	{ 1274, 255 },
	{ 1530, -255 },
	{ 1530, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000358D4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_0003566C, NULL, NULL, NULL, uv_00035744, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00035708, NULL, NULL, NULL, uv_00035864, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00035904[] = {
	{ -4.717434f, 18.50129f, -73.5806f },
	{ 13.57877f, 11.73155f, -71.08626f },
	{ 23.74918f, -2.723844f, -45.10023f },
	{ 2.837592f, -14.69059f, -35.67544f },
	{ -12.86692f, -0.442118f, -43.09273f },
	{ -28.33301f, 4.70679f, -62.54387f },
	{ 3.028597f, 48.99653f, -20.61223f },
	{ 10.29431f, 44.202f, -23.08044f },
	{ 9.649731f, 23.01654f, -17.12666f },
	{ -3.612216f, 20.18563f, -10.3476f },
	{ -9.846766f, 27.99252f, -14.20503f },
	{ -7.939023f, 42.46912f, -19.72783f },
	{ -1.764652f, 49.37801f, 41.75886f },
	{ 13.01514f, 43.13876f, 40.15379f },
	{ 17.0257f, 28.99235f, 28.06152f },
	{ 1.584638f, 24.88199f, 25.03778f },
	{ -16.61077f, 29.24738f, 36.11414f },
	{ -10.15203f, 48.14107f, 39.68412f },
	{ 2.22415f, 7.119242f, 92.31784f },
	{ 15.69844f, 6.394661f, 77.75538f },
	{ 8.653603f, -8.246668f, 59.98701f },
	{ 0.279934f, -5.593589f, 57.98627f },
	{ -14.27657f, 0.549701f, 65.04729f },
	{ -15.29774f, 2.647967f, 75.36581f },
	{ -2.688316f, -120.3415f, 124.0314f },
	{ 22.38217f, -120.3931f, 109.5571f },
	{ 22.38217f, -120.4963f, 80.60825f },
	{ -2.688312f, -120.5479f, 66.13387f },
	{ -27.7588f, -120.4963f, 80.60825f },
	{ -27.7588f, -120.3931f, 109.5571f },
	{ -5.430363f, -113.6036f, -115.8637f },
	{ 21.14818f, -114.0235f, -100.5225f },
	{ 21.14818f, -114.8632f, -69.84024f },
	{ -5.430361f, -115.2831f, -54.4991f },
	{ -32.0089f, -114.8632f, -69.84024f },
	{ -32.0089f, -114.0234f, -100.5225f },
	{ -18.2934f, -61.38773f, 95.4948f },
	{ 16.35484f, -60.22826f, 97.28618f },
	{ 0.026189f, -62.43021f, 109.7302f },
	{ -17.77396f, -60.55696f, 79.25614f },
	{ -0.9430569f, -62.24255f, 69.32922f },
	{ 12.79647f, -63.85706f, 75.30676f },
	{ 16.07951f, -61.53554f, -93.62983f },
	{ -24.65208f, -62.07778f, -88.12659f },
	{ -2.956442f, -59.20686f, -102.2567f },
	{ 21.16471f, -60.73241f, -67.39769f },
	{ 0.821072f, -63.29239f, -54.44577f },
	{ -16.91904f, -59.22596f, -67.19836f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00035B44[] = {
	{ -0.12941f, 0.656996f, -0.742704f },
	{ 0.717912f, 0.405962f, -0.565506f },
	{ 0.921151f, -0.16329f, 0.353296f },
	{ -0.07013199f, -0.454506f, 0.887979f },
	{ -0.871951f, -0.164139f, 0.461259f },
	{ -0.92152f, 0.316719f, -0.2247f },
	{ 0.065088f, 0.972738f, -0.222588f },
	{ 0.71987f, 0.668239f, -0.187732f },
	{ 0.891082f, -0.294667f, 0.345174f },
	{ -0.16236f, -0.910366f, 0.380623f },
	{ -0.959291f, -0.239777f, 0.149225f },
	{ -0.706463f, 0.686588f, -0.171775f },
	{ 0.004345f, 0.935498f, 0.353304f },
	{ 0.77352f, 0.614078f, 0.156766f },
	{ 0.926837f, -0.283127f, -0.246602f },
	{ -0.054774f, -0.965241f, -0.255557f },
	{ -0.9631709f, -0.245948f, -0.108682f },
	{ -0.716959f, 0.661092f, 0.221194f },
	{ 0.01198f, 0.495761f, 0.868376f },
	{ 0.901794f, 0.309886f, 0.301228f },
	{ 0.708978f, -0.282355f, -0.64624f },
	{ -0.206307f, -0.502264f, -0.839743f },
	{ -0.9434389f, -0.110031f, -0.312754f },
	{ -0.863986f, 0.295607f, 0.407609f },
	{ -0.011958f, 0.263062f, 0.964705f },
	{ 0.830469f, 0.196504f, 0.521255f },
	{ 0.8860469f, 0.09292299f, -0.454186f },
	{ -0.009117f, 0.047308f, -0.998839f },
	{ -0.872499f, 0.132507f, -0.470305f },
	{ -0.822864f, 0.241701f, 0.514272f },
	{ -0.010656f, 0.245182f, -0.9694189f },
	{ 0.854804f, 0.130182f, -0.502358f },
	{ 0.868261f, -0.001057f, 0.496106f },
	{ -0.036964f, 0.020569f, 0.999105f },
	{ -0.8737029f, 0.167757f, 0.456618f },
	{ -0.821303f, 0.261194f, -0.5071869f },
	{ -0.890116f, 0.19386f, 0.412447f },
	{ 0.923024f, 0.136445f, 0.359736f },
	{ 0.00491f, 0.268386f, 0.963299f },
	{ -0.8593259f, 0.0245f, -0.51084f },
	{ -0.09865899f, -0.089782f, -0.991063f },
	{ 0.784827f, -0.02493f, -0.619213f },
	{ 0.768787f, 0.188242f, -0.611172f },
	{ -0.888205f, 0.203853f, -0.411747f },
	{ -0.06848399f, 0.285772f, -0.955847f },
	{ 0.9340079f, -0.05419f, 0.353118f },
	{ -0.007513f, -0.166898f, 0.985945f },
	{ -0.7774709f, -0.078301f, 0.6240259f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00035D84 = { vertex_00035904, normal_00035B44, LengthOfArray(vertex_00035904), meshlist_000358D4, matlist_00035644, LengthOfArray(meshlist_000358D4), LengthOfArray(matlist_00035644),{ -4.129859f, -35.58496f, 4.083847f }, 130.99f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00035DAC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00035D84, -219.6f, 113.221f, -44.19999f, 0, 0x1942, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00035DE0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 33, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 33, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 38, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 34, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 36, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 38, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 37, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 35, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00035E80[] = {
	34, 99, 96, 91, 92, 87, 88, 83, 84, 81, 82, 72, 75, 71, 77, 69, 78, 70, 76, 73, 74, 79, 80, 85, 86, 89, 90, 93, 94, 95, 100, 97, 98, 99, 96,
	34, 145, 161, 148, 162, 150, 163, 152, 164, 155, 165, 143, 166, 156, 167, 147, 168, 153, 169, 141, 170, 154, 171, 151, 172, 149, 157, 146, 158, 144, 159, 142, 160, 145, 161,
	34, 229, 211, 224, 208, 230, 206, 231, 212, 232, 213, 233, 214, 234, 216, 235, 217, 236, 218, 221, 219, 222, 220, 223, 215, 225, 205, 226, 207, 227, 209, 228, 210, 229, 211
};

extern "C" __declspec(dllexport) Sint16 poly_00035F52[] = {
	8, 13, 105, 20, 109, 28, 107, 38, 103,
	8, 26, 102, 46, 104, 14, 106, 2, 108
};

extern "C" __declspec(dllexport) Sint16 poly_00035F76[] = {
	0x8000u | 5, 41, 25, 0, 18, 31,
	18, 180, 40, 181, 47, 182, 8, 184, 51, 185, 19, 186, 43, 187, 1, 188, 44, 183, 39,
	4, 41, 48, 0, 37,
	0x8000u | 5, 31, 4, 0, 49, 42,
	18, 132, 61, 133, 60, 134, 59, 135, 58, 136, 57, 137, 56, 138, 55, 139, 54, 140, 53,
	18, 42, 199, 49, 200, 4, 201, 31, 202, 18, 203, 25, 204, 41, 189, 48, 190, 37, 191
};

extern "C" __declspec(dllexport) Sint16 poly_0003600A[] = {
	6, 15, 179, 5, 178, 11, 177,
	8, 183, 39, 173, 29, 175, 16, 177, 11,
	8, 179, 15, 176, 22, 174, 30, 180, 40,
	3, 129, 68, 130,
	8, 66, 127, 65, 126, 62, 125, 53, 140,
	6, 127, 66, 128, 67, 129, 68,
	6, 132, 131, 63, 130, 64, 68,
	3, 63, 61, 132,
	8, 195, 6, 194, 27, 193, 21, 191, 37,
	6, 6, 195, 7, 196, 17, 197,
	8, 17, 197, 24, 192, 32, 198, 42, 199
};

extern "C" __declspec(dllexport) Sint16 poly_000360AC[] = {
	12, 35, 103, 115, 119, 114, 123, 116, 101, 110, 121, 10, 105,
	0x8000u | 8, 103, 119, 107, 123, 109, 101, 105, 121,
	0x8000u | 8, 118, 102, 120, 104, 122, 106, 124, 108,
	12, 12, 108, 111, 124, 117, 122, 113, 120, 112, 118, 23, 102
};

extern "C" __declspec(dllexport) Sint16 poly_00036104[] = {
	4, 24, 32, 0, 42,
	5, 6, 7, 0, 17, 24,
	0x8000u | 5, 6, 27, 0, 21, 37
};

extern "C" __declspec(dllexport) Sint16 poly_00036126[] = {
	0x8000u | 34, 78, 36, 77, 52, 75, 45, 82, 38, 84, 28, 88, 20, 92, 13, 96, 3, 98, 2, 100, 14, 94, 46, 90, 26, 86, 33, 80, 9, 74, 50, 76, 34, 78, 36,
	0x8000u | 34, 91, 63, 87, 61, 83, 60, 81, 59, 72, 58, 71, 57, 69, 56, 70, 55, 73, 54, 79, 53, 85, 62, 89, 65, 93, 66, 95, 67, 97, 68, 99, 64, 91, 63,
	34, 147, 51, 156, 8, 143, 47, 155, 40, 152, 30, 150, 22, 148, 15, 145, 5, 142, 11, 144, 16, 146, 29, 149, 39, 151, 44, 154, 1, 141, 43, 153, 19, 147, 51,
	34, 169, 138, 170, 139, 171, 140, 172, 125, 157, 126, 158, 127, 159, 128, 160, 129, 161, 130, 162, 131, 163, 132, 164, 133, 165, 134, 166, 135, 167, 136, 168, 137, 169, 138,
	34, 229, 196, 228, 195, 227, 194, 226, 193, 225, 191, 223, 190, 222, 189, 221, 204, 236, 203, 235, 202, 234, 201, 233, 200, 232, 199, 231, 198, 230, 192, 224, 197, 229, 196,
	34, 208, 174, 206, 180, 212, 181, 213, 182, 214, 184, 216, 185, 217, 186, 218, 187, 219, 188, 220, 183, 215, 173, 205, 175, 207, 177, 209, 178, 210, 179, 211, 176, 208, 174
};

extern "C" __declspec(dllexport) NJS_TEX uv_000362CC[] = {
	{ 254, 13 },
	{ 253, 256 },
	{ 768, 11 },
	{ 768, 264 },
	{ 1506, 7 },
	{ 1506, 254 },
	{ 3267, 15 },
	{ 3270, 253 },
	{ 3874, 14 },
	{ 3876, 245 },
	{ 4437, 14 },
	{ 4438, 245 },
	{ 4977, 14 },
	{ 4977, 245 },
	{ 5507, 14 },
	{ 5507, 245 },
	{ 6034, 14 },
	{ 6033, 245 },
	{ 6573, 14 },
	{ 6572, 245 },
	{ 7138, 14 },
	{ 7136, 245 },
	{ 7745, 15 },
	{ 7743, 253 },
	{ 9503, 7 },
	{ 9504, 254 },
	{ 10240, 10 },
	{ 10242, 262 },
	{ 10760, 13 },
	{ 10759, 256 },
	{ 11266, 14 },
	{ 11266, 256 },
	{ 11729, 13 },
	{ 11728, 256 },
	{ 402, 8 },
	{ 404, 258 },
	{ 1203, 9 },
	{ 1208, 262 },
	{ 2427, 9 },
	{ 2428, 256 },
	{ 5245, 11 },
	{ 5246, 264 },
	{ 6099, 11 },
	{ 6099, 264 },
	{ 6947, 11 },
	{ 6947, 264 },
	{ 7758, 9 },
	{ 7757, 264 },
	{ 8557, 9 },
	{ 8557, 264 },
	{ 9358, 9 },
	{ 9358, 264 },
	{ 10170, 11 },
	{ 10171, 264 },
	{ 11016, 11 },
	{ 11016, 264 },
	{ 11870, 11 },
	{ 11869, 264 },
	{ 14683, 9 },
	{ 14683, 256 },
	{ 15909, 9 },
	{ 15903, 262 },
	{ 16709, 8 },
	{ 16707, 258 },
	{ 17516, 8 },
	{ 17516, 260 },
	{ 18251, 8 },
	{ 18252, 258 },
	{ 470, 7 },
	{ 456, 260 },
	{ 1378, 6 },
	{ 1378, 262 },
	{ 2922, 6 },
	{ 2921, 262 },
	{ 6223, 6 },
	{ 6222, 262 },
	{ 7199, 6 },
	{ 7198, 262 },
	{ 8082, 6 },
	{ 8081, 262 },
	{ 8941, 6 },
	{ 8941, 262 },
	{ 9783, 6 },
	{ 9783, 262 },
	{ 10627, 6 },
	{ 10627, 262 },
	{ 11486, 6 },
	{ 11487, 262 },
	{ 12368, 6 },
	{ 12370, 262 },
	{ 13342, 6 },
	{ 13343, 262 },
	{ 16642, 6 },
	{ 16642, 262 },
	{ 18186, 6 },
	{ 18187, 262 },
	{ 19120, 7 },
	{ 19107, 260 },
	{ 20021, 7 },
	{ 20021, 260 },
	{ 20871, 7 },
	{ 20857, 260 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00036464[] = {
	{ 7, -251 },
	{ 7, 251 },
	{ 247, -251 },
	{ 247, 251 },
	{ 502, -251 },
	{ 502, 251 },
	{ 1012, -251 },
	{ 1012, 251 },
	{ 1012, -251 },
	{ 1012, 251 },
	{ 502, -251 },
	{ 502, 251 },
	{ 247, -251 },
	{ 247, 251 },
	{ 7, -251 },
	{ 7, 251 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000364A4[] = {
	{ 350, 30 },
	{ 302, 30 },
	{ 256, 0 },
	{ 256, 30 },
	{ 208, 30 },
	{ 39, 65 },
	{ 24, 100 },
	{ 97, 65 },
	{ 86, 100 },
	{ 152, 65 },
	{ 145, 100 },
	{ 204, 65 },
	{ 201, 100 },
	{ 256, 65 },
	{ 256, 100 },
	{ 306, 65 },
	{ 310, 100 },
	{ 360, 65 },
	{ 366, 100 },
	{ 414, 65 },
	{ 424, 100 },
	{ 472, 65 },
	{ 486, 100 },
	{ 350, 30 },
	{ 400, 30 },
	{ 256, 0 },
	{ 452, 30 },
	{ 208, 30 },
	{ 160, 30 },
	{ 256, 0 },
	{ 111, 30 },
	{ 59, 30 },
	{ 18, 121 },
	{ 10, 160 },
	{ 82, 121 },
	{ 77, 160 },
	{ 142, 121 },
	{ 138, 160 },
	{ 199, 121 },
	{ 198, 160 },
	{ 256, 121 },
	{ 256, 160 },
	{ 312, 121 },
	{ 314, 160 },
	{ 368, 121 },
	{ 372, 160 },
	{ 428, 121 },
	{ 434, 160 },
	{ 492, 121 },
	{ 500, 160 },
	{ 59, 30 },
	{ 47, 51 },
	{ 111, 30 },
	{ 103, 51 },
	{ 160, 30 },
	{ 155, 51 },
	{ 208, 30 },
	{ 206, 51 },
	{ 256, 30 },
	{ 256, 51 },
	{ 302, 30 },
	{ 304, 51 },
	{ 350, 30 },
	{ 356, 51 },
	{ 400, 30 },
	{ 408, 51 },
	{ 452, 30 },
	{ 464, 51 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000365B4[] = {
	{ 9, 251 },
	{ 9, -251 },
	{ 645, 251 },
	{ 645, -251 },
	{ 1265, 251 },
	{ 1265, -251 },
	{ 19, -251 },
	{ 19, 251 },
	{ 1213, -251 },
	{ 1213, 251 },
	{ 1930, -251 },
	{ 1930, 251 },
	{ 2530, -251 },
	{ 2530, 251 },
	{ 2530, -251 },
	{ 2530, 251 },
	{ 1930, -251 },
	{ 1930, 251 },
	{ 1213, -251 },
	{ 1213, 251 },
	{ 19, -251 },
	{ 19, 251 },
	{ 2530, -251 },
	{ 2530, 251 },
	{ 1930, -251 },
	{ 2530, 251 },
	{ 2530, -251 },
	{ 1930, 251 },
	{ 1930, -251 },
	{ 1213, 251 },
	{ 1213, -251 },
	{ 19, 251 },
	{ 19, -251 },
	{ 1265, -251 },
	{ 1265, 251 },
	{ 645, -251 },
	{ 645, 251 },
	{ 9, -251 },
	{ 9, 251 },
	{ 19, -251 },
	{ 1213, -251 },
	{ 1213, 251 },
	{ 1930, -251 },
	{ 1930, 251 },
	{ 2530, 251 },
	{ 1213, 251 },
	{ 19, 251 },
	{ 19, -251 },
	{ 2530, -3 },
	{ 2530, -251 },
	{ 1930, -3 },
	{ 1930, -251 },
	{ 1213, -3 },
	{ 1213, -251 },
	{ 19, -3 },
	{ 19, -251 },
	{ 1265, -251 },
	{ 1265, -3 },
	{ 645, -251 },
	{ 645, -3 },
	{ 9, -251 },
	{ 9, -3 },
	{ 2530, -251 },
	{ 2530, -3 },
	{ 1930, -251 },
	{ 1930, -3 },
	{ 1213, -251 },
	{ 1213, -3 },
	{ 19, -251 },
	{ 19, -3 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000366CC[] = {
	{ 502, 239 },
	{ 502, -653 },
	{ 502, 239 },
	{ 502, -653 },
	{ 247, 239 },
	{ 247, -653 },
	{ 119, 239 },
	{ 119, -653 },
	{ 7, 239 },
	{ 7, -653 },
	{ 7, 239 },
	{ 7, -653 },
	{ 502, -653 },
	{ 502, -749 },
	{ 247, -653 },
	{ 247, -749 },
	{ 119, -653 },
	{ 119, -749 },
	{ 7, -653 },
	{ 7, -749 },
	{ 502, -749 },
	{ 502, -653 },
	{ 247, -749 },
	{ 247, -653 },
	{ 119, -749 },
	{ 119, -653 },
	{ 7, -749 },
	{ 7, -653 },
	{ 7, 239 },
	{ 7, -653 },
	{ 7, 239 },
	{ 7, -653 },
	{ 119, 239 },
	{ 119, -653 },
	{ 247, 239 },
	{ 247, -653 },
	{ 502, 239 },
	{ 502, -653 },
	{ 502, 239 },
	{ 502, -653 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0003676C[] = {
	{ 189, 170 },
	{ 119, 222 },
	{ -6, 0 },
	{ -6, 241 },
	{ 216, -92 },
	{ 223, 0 },
	{ -6, 0 },
	{ 216, 92 },
	{ 189, 170 },
	{ 216, -92 },
	{ 189, -170 },
	{ -6, 0 },
	{ 119, -223 },
	{ -6, -241 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000367A4[] = {
	{ 0 },
	{ 23, 92 },
	{ 14, 97 },
	{ 61, 170 },
	{ 55, 179 },
	{ 118, 222 },
	{ 115, 234 },
	{ 186, 241 },
	{ 186, 254 },
	{ 364, 222 },
	{ 374, 235 },
	{ 428, 157 },
	{ 448, 164 },
	{ 478, 92 },
	{ 508, 98 },
	{ 478, 0 },
	{ 508, 0 },
	{ 478, -92 },
	{ 508, -98 },
	{ 428, -157 },
	{ 448, -165 },
	{ 364, -223 },
	{ 374, -235 },
	{ 186, -241 },
	{ 186, -254 },
	{ 119, -222 },
	{ 115, -234 },
	{ 61, -170 },
	{ 55, -179 },
	{ 23, -92 },
	{ 14, -97 },
	{ 9, 0 },
	{ 0 },
	{ 23, 92 },
	{ 448, 165 },
	{ 364, 222 },
	{ 374, 234 },
	{ 186, 241 },
	{ 187, 254 },
	{ 119, 222 },
	{ 115, 235 },
	{ 61, 170 },
	{ 54, 180 },
	{ 23, 92 },
	{ 14, 97 },
	{ 9, 0 },
	{ 0 },
	{ 23, -92 },
	{ 14, -97 },
	{ 61, -170 },
	{ 54, -180 },
	{ 119, -222 },
	{ 115, -235 },
	{ 186, -241 },
	{ 187, -255 },
	{ 364, -222 },
	{ 374, -235 },
	{ 428, -157 },
	{ 448, -165 },
	{ 478, -92 },
	{ 510, -98 },
	{ 478, 0 },
	{ 508, 0 },
	{ 478, 92 },
	{ 508, 98 },
	{ 428, 157 },
	{ 448, 165 },
	{ 364, 222 },
	{ 22, 0 },
	{ 50, 76 },
	{ 34, 86 },
	{ 82, 141 },
	{ 70, 159 },
	{ 130, 185 },
	{ 123, 208 },
	{ 186, 200 },
	{ 186, 215 },
	{ 334, 185 },
	{ 352, 206 },
	{ 400, 136 },
	{ 426, 149 },
	{ 442, 78 },
	{ 472, 86 },
	{ 442, 0 },
	{ 472, 0 },
	{ 442, -78 },
	{ 472, -86 },
	{ 400, -136 },
	{ 426, -149 },
	{ 334, -185 },
	{ 352, -207 },
	{ 186, -200 },
	{ 186, -215 },
	{ 130, -185 },
	{ 123, -209 },
	{ 82, -141 },
	{ 70, -160 },
	{ 50, -76 },
	{ 34, -86 },
	{ 39, 0 },
	{ 22, 0 },
	{ 50, 76 },
	{ 34, -86 },
	{ 74, -152 },
	{ 70, -160 },
	{ 126, -199 },
	{ 123, -209 },
	{ 186, -215 },
	{ 186, -215 },
	{ 346, -199 },
	{ 352, -207 },
	{ 412, -144 },
	{ 426, -149 },
	{ 456, -83 },
	{ 472, -86 },
	{ 456, 0 },
	{ 472, 0 },
	{ 456, 83 },
	{ 472, 86 },
	{ 412, 144 },
	{ 426, 149 },
	{ 346, 199 },
	{ 352, 206 },
	{ 186, 215 },
	{ 186, 215 },
	{ 126, 199 },
	{ 123, 209 },
	{ 74, 152 },
	{ 70, 159 },
	{ 40, 82 },
	{ 34, 86 },
	{ 28, 0 },
	{ 22, 0 },
	{ 40, -82 },
	{ 34, -86 },
	{ 74, -152 },
	{ 430, 70 },
	{ 396, 0 },
	{ 440, 0 },
	{ 388, -58 },
	{ 430, -68 },
	{ 362, -106 },
	{ 400, -126 },
	{ 302, -140 },
	{ 326, -166 },
	{ 186, -152 },
	{ 186, -180 },
	{ 143, -140 },
	{ 135, -166 },
	{ 107, -107 },
	{ 93, -127 },
	{ 83, -58 },
	{ 64, -68 },
	{ 75, 0 },
	{ 54, 0 },
	{ 83, 58 },
	{ 64, 68 },
	{ 107, 107 },
	{ 93, 127 },
	{ 143, 140 },
	{ 135, 166 },
	{ 186, 152 },
	{ 186, 179 },
	{ 302, 140 },
	{ 326, 166 },
	{ 362, 106 },
	{ 400, 126 },
	{ 388, 58 },
	{ 430, 70 },
	{ 396, 0 },
	{ 400, 126 },
	{ 312, 154 },
	{ 326, 166 },
	{ 186, 167 },
	{ 186, 179 },
	{ 139, 154 },
	{ 135, 166 },
	{ 99, 118 },
	{ 93, 127 },
	{ 73, 63 },
	{ 64, 68 },
	{ 64, 0 },
	{ 54, 0 },
	{ 73, -64 },
	{ 64, -69 },
	{ 99, -118 },
	{ 93, -127 },
	{ 139, -154 },
	{ 135, -166 },
	{ 186, -167 },
	{ 186, -180 },
	{ 312, -154 },
	{ 326, -166 },
	{ 374, -115 },
	{ 400, -126 },
	{ 404, -64 },
	{ 430, -69 },
	{ 410, 0 },
	{ 440, 0 },
	{ 404, 64 },
	{ 430, 69 },
	{ 374, 115 },
	{ 400, 126 },
	{ 312, 154 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00036AD4[] = {
	{ NJD_MESHSET_TRIMESH | 1, 3, poly_00035E80, NULL, NULL, NULL, uv_000362CC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_00035F52, NULL, NULL, NULL, uv_00036464, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 6, poly_00035F76, NULL, NULL, NULL, uv_000364A4, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 11, poly_0003600A, NULL, NULL, NULL, uv_000365B4, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 4, poly_000360AC, NULL, NULL, NULL, uv_000366CC, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 3, poly_00036104, NULL, NULL, NULL, uv_0003676C, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 6, poly_00036126, NULL, NULL, NULL, uv_000367A4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00036B7C[] = {
	{ 0.000056f, 82.87637f, -0.00005f },
	{ -51.09259f, 47.47653f, 51.09267f },
	{ 144.0019f, 13.857f, 33.23107f },
	{ 144.0019f, 13.86837f, -0.00005f },
	{ -34.13897f, 72.25594f, -34.13902f },
	{ 125.7433f, 47.54626f, -0.00005f },
	{ 89.96482f, 72.25594f, 18.47587f },
	{ 92.9722f, 72.25594f, -0.00005f },
	{ -51.09262f, 47.47653f, -51.09265f },
	{ -61.46038f, 14.57265f, 61.46046f },
	{ 143.7475f, -90.42464f, -33.70488f },
	{ 125.7146f, 47.54626f, 28.14882f },
	{ 143.7361f, -90.42464f, 32.72471f },
	{ 143.9996f, 13.85884f, -33.19529f },
	{ 119.3418f, 14.12889f, 56.73697f },
	{ 125.7146f, 47.54626f, -28.14888f },
	{ 105.9626f, 47.47654f, 49.04892f },
	{ 89.96483f, 72.25594f, -18.47592f },
	{ -48.27982f, 72.25594f, 0.000004f },
	{ -72.25587f, 47.47654f, 0.000014f },
	{ 119.3754f, 14.07602f, -56.74651f },
	{ 51.01995f, 72.25594f, 44.60477f },
	{ 105.9626f, 47.47654f, -49.04896f },
	{ -0.252931f, -90.42462f, 86.40974f },
	{ 79.06712f, 72.25594f, -34.13903f },
	{ -44.60472f, 72.25594f, 18.4759f },
	{ 0.057905f, 14.07491f, 86.97562f },
	{ 79.06712f, 72.25594f, 34.13899f },
	{ 87.57217f, 14.04185f, -80.17471f },
	{ 73.44325f, 47.47653f, 66.75577f },
	{ 73.44323f, 47.47653f, -66.75578f },
	{ -44.60473f, 72.25594f, -18.4759f },
	{ 51.01994f, 72.25594f, -44.60479f },
	{ -33.26207f, 14.57265f, 80.30196f },
	{ -86.9182f, 14.57265f, 0.000019f },
	{ -0.252975f, -90.42462f, -87.42696f },
	{ -80.3019f, 14.57265f, -33.26215f },
	{ 0.000073f, 72.25594f, 48.27986f },
	{ 0.142645f, 14.07491f, -86.94221f },
	{ 0.000083f, 47.47653f, 72.25592f },
	{ 0.000046f, 47.47653f, -72.25594f },
	{ -34.13895f, 72.25594f, 34.13902f },
	{ 0.000051f, 72.25594f, -48.27987f },
	{ -66.75571f, 47.47653f, 27.65116f },
	{ -27.65107f, 47.47653f, 66.75578f },
	{ -33.26211f, 14.57265f, -80.30195f },
	{ 87.67033f, 14.0168f, 80.30456f },
	{ -27.65111f, 47.47653f, -66.75577f },
	{ -18.47583f, 72.25594f, 44.60478f },
	{ -18.47585f, 72.25594f, -44.60478f },
	{ -80.3019f, 14.57265f, 33.26218f },
	{ -66.75573f, 47.47653f, -27.65114f },
	{ -61.46041f, 14.57265f, -61.46044f },
	{ 0.00009099999f, 26.13638f, 86.91393f },
	{ -33.26043f, 26.13638f, 80.29801f },
	{ -61.45734f, 26.13638f, 61.45744f },
	{ -80.29795f, 26.13638f, 33.26053f },
	{ -86.91387f, 26.13638f, 0.000019f },
	{ -80.29796f, 26.13638f, -33.26051f },
	{ -61.45737f, 26.13638f, -61.4574f },
	{ -33.26047f, 26.13638f, -80.29801f },
	{ 0.000048f, 26.13638f, -86.91394f },
	{ 87.72514f, 27.12484f, 80.21455f },
	{ 87.64925f, 27.14422f, -80.11414f },
	{ 119.4528f, 26.59623f, -56.70908f },
	{ 119.4272f, 26.63639f, 56.70178f },
	{ 143.9917f, 25.88639f, 33.23238f },
	{ 143.9853f, 25.81897f, -0.00005f },
	{ 144, 25.87559f, -33.19525f },
	{ -91.81705f, 26.17785f, 0.00002f },
	{ -84.82788f, 26.17785f, 35.13691f },
	{ -84.82788f, 26.17785f, -35.13688f },
	{ -64.92448f, 26.17785f, -64.92448f },
	{ -64.92442f, 26.17785f, 64.92452f },
	{ -64.72218f, 14.45437f, 64.72228f },
	{ -64.72219f, 14.45437f, -64.72224f },
	{ -84.56366f, 14.45436f, 35.02745f },
	{ -84.56367f, 14.45436f, -35.02742f },
	{ -91.5311f, 14.45437f, 0.00002f },
	{ -35.1368f, 26.17785f, 84.82791f },
	{ -35.02735f, 14.45436f, 84.56372f },
	{ -35.13684f, 26.17785f, -84.82791f },
	{ -35.02741f, 14.45436f, -84.56372f },
	{ 0.212363f, 26.1485f, -91.91021f },
	{ 0.019058f, 14.03348f, -91.60304f },
	{ 0.212407f, 26.1485f, 91.83285f },
	{ 0.074998f, 14.03348f, 91.57697f },
	{ 92.7659f, 26.55134f, -84.52187f },
	{ 92.99955f, 14.00345f, -84.8086f },
	{ 92.85195f, 26.53397f, 84.63575f },
	{ 93.09779f, 13.98365f, 84.93842f },
	{ 128.8953f, 26.34903f, -59.5656f },
	{ 128.8105f, 13.50028f, -59.46905f },
	{ 128.6749f, 26.38545f, 59.5574f },
	{ 128.7793f, 13.54076f, 59.45968f },
	{ 159.1329f, 26.25166f, 35.59719f },
	{ 158.9233f, 13.87267f, -35.60865f },
	{ 159.0357f, 26.2178f, -0.00006f },
	{ 159.0291f, 13.86795f, -0.00006f },
	{ 158.9423f, 26.24622f, -35.61974f },
	{ 159.0502f, 13.87356f, 35.60662f },
	{ 116.3762f, -20.28168f, -55.05547f },
	{ 0.014503f, -20.28196f, 86.93266f },
	{ 0.035655f, -20.28196f, -86.92432f },
	{ 88.01224f, -20.29648f, 80.30269f },
	{ 144.0002f, -20.33598f, -33.19605f },
	{ 119.3123f, -20.26846f, 56.7661f },
	{ 87.98767f, -20.29022f, -80.27026f },
	{ 143.9922f, -20.33644f, 33.23273f },
	{ 119.3147f, -20.28168f, -56.78165f },
	{ 140.0585f, -90.42464f, -32.6957f },
	{ 140.0475f, -90.42464f, 31.71441f },
	{ 0.435782f, -90.42462f, 83.7674f },
	{ 85.88293f, -90.42462f, 77.35224f },
	{ 85.88291f, -90.42462f, -78.36949f },
	{ 0.435739f, -90.42462f, -84.78461f },
	{ 116.1037f, -90.42462f, -55.57541f },
	{ 116.1113f, -90.42462f, 54.54124f },
	{ 0.702776f, -20.28196f, 84.28992f },
	{ 0.7232839f, -20.28196f, -84.28183f },
	{ 86.02535f, -20.29648f, 77.86148f },
	{ 140.3113f, -20.33598f, -32.18687f },
	{ 116.3739f, -20.26846f, 55.04038f },
	{ 86.00157f, -20.29022f, -77.83001f },
	{ 140.3035f, -20.33644f, 32.22245f },
	{ 78.79897f, 40.21349f, 71.80281f },
	{ 111.0118f, 40.16355f, 51.91875f },
	{ 132.5685f, 40.15901f, 30.05516f },
	{ 132.584f, 40.13372f, -0.00005f },
	{ 132.5716f, 40.15495f, -30.04127f },
	{ 111.0214f, 40.14848f, -51.9215f },
	{ 78.77049f, 40.22076f, -71.76516f },
	{ 0.000047f, 39.97604f, -77.75269f },
	{ -29.75462f, 39.97604f, -71.83412f },
	{ -54.9794f, 39.97604f, -54.97944f },
	{ -71.83408f, 39.97604f, -29.75466f },
	{ -77.75262f, 39.97604f, 0.000016f },
	{ -71.83406f, 39.97604f, 29.75468f },
	{ -54.97938f, 39.97604f, 54.97946f },
	{ -29.75458f, 39.97604f, 71.83412f },
	{ 0.00008599999f, 39.97604f, 77.75269f },
	{ -57.23819f, 47.39801f, 57.63186f },
	{ 140.8681f, 47.49867f, -0.00006f },
	{ -57.23821f, 47.39801f, -57.63184f },
	{ 140.8361f, 47.49867f, 31.14672f },
	{ 140.8361f, 47.49867f, -31.14676f },
	{ 118.6263f, 47.46462f, 53.74579f },
	{ -80.94708f, 47.46462f, 0.000016f },
	{ 118.6263f, 47.46462f, -53.74583f },
	{ 82.27724f, 47.46462f, 74.5825f },
	{ 82.2772f, 47.46462f, -74.58252f },
	{ 0.000093f, 47.39801f, 77.6226f },
	{ 0.000051f, 47.39801f, -77.62263f },
	{ -74.78535f, 47.46462f, 31.19015f },
	{ -30.97703f, 47.39802f, 75.29968f },
	{ -30.97707f, 47.39802f, -75.29968f },
	{ -74.7854f, 47.46462f, -31.19013f },
	{ 82.25015f, 40.26096f, 74.56989f },
	{ 118.6655f, 40.08532f, 53.91954f },
	{ 140.8489f, 40.20324f, 31.21342f },
	{ 140.8662f, 40.179f, -0.00006f },
	{ 140.8523f, 40.19934f, -31.19899f },
	{ 118.6762f, 40.07089f, -53.92244f },
	{ 82.21828f, 40.26794f, -74.53081f },
	{ -0.046233f, 40.03873f, -77.68071f },
	{ -31.00394f, 40.03873f, -75.35603f },
	{ -57.29652f, 40.03873f, -57.67499f },
	{ -74.78572f, 40.03873f, -31.21345f },
	{ -80.92466f, 40.03873f, 0.000016f },
	{ -74.7857f, 40.03873f, 31.21347f },
	{ -57.29647f, 40.03873f, 57.67501f },
	{ -31.00389f, 40.03873f, 75.35603f },
	{ -0.046188f, 40.03873f, 77.68071f },
	{ 62.23161f, 59.86623f, 55.68026f },
	{ 62.23158f, 59.86623f, -55.68029f },
	{ 92.51487f, 59.86623f, 41.59396f },
	{ 92.51485f, 59.86624f, -41.594f },
	{ 107.8397f, 59.9011f, 23.31235f },
	{ 110.2676f, 59.9011f, -0.00005f },
	{ 107.8397f, 59.9011f, -23.3124f },
	{ 0.000048f, 59.86623f, -60.2679f },
	{ -23.06348f, 59.86623f, -55.68028f },
	{ -42.61579f, 59.86623f, -42.61583f },
	{ 0.000078f, 59.86623f, 60.2679f },
	{ -55.68023f, 59.86623f, -23.06352f },
	{ -60.26785f, 59.86623f, 0.000008999999f },
	{ -55.68022f, 59.86623f, 23.06353f },
	{ -42.61577f, 59.86623f, 42.61585f },
	{ -23.06345f, 59.86623f, 55.68028f },
	{ -38.76114f, 64.59806f, 38.7612f },
	{ -20.97734f, 64.59806f, 50.64395f },
	{ 0.000076f, 64.59806f, 54.8166f },
	{ 86.64889f, 64.59806f, -38.24517f },
	{ 57.19201f, 64.59806f, 50.64393f },
	{ 86.6489f, 64.59806f, 38.24513f },
	{ 99.89125f, 64.58643f, 21.10305f },
	{ 103.555f, 64.58643f, -0.00005f },
	{ 99.89127f, 64.58643f, -21.10309f },
	{ 57.192f, 64.59806f, -50.64395f },
	{ 0.00005f, 64.59806f, -54.81662f },
	{ -20.97735f, 64.59806f, -50.64394f },
	{ -38.76115f, 64.59806f, -38.7612f },
	{ -50.64391f, 64.59806f, -20.9774f },
	{ -54.81657f, 64.59806f, 0.000007f },
	{ -50.6439f, 64.59806f, 20.97742f },
	{ 69.0565f, 59.86623f, 59.93448f },
	{ 69.0565f, 59.86623f, -59.93448f },
	{ 105.9517f, 59.86623f, 45.65344f },
	{ 105.9517f, 59.86624f, -45.65347f },
	{ 120.5884f, 59.9011f, 25.08583f },
	{ 125.0038f, 59.9011f, -0.00006f },
	{ 120.5884f, 59.9011f, -25.08588f },
	{ 0.000058f, 59.86623f, -64.87266f },
	{ -25.29756f, 59.86623f, -59.93448f },
	{ -45.97135f, 59.86623f, -45.87189f },
	{ 0.000094f, 59.86623f, 64.87266f },
	{ -60.29426f, 59.86623f, -24.82568f },
	{ -64.81885f, 59.86623f, 0.000011f },
	{ -60.29424f, 59.86623f, 24.82569f },
	{ -45.97131f, 59.86623f, 45.8719f },
	{ -25.29753f, 59.86623f, 59.93449f },
	{ -45.96915f, 64.59806f, 45.84916f },
	{ -25.31971f, 64.59806f, 59.90479f },
	{ 0.00009199999f, 64.59806f, 64.84048f },
	{ 105.9448f, 64.59806f, -45.6727f },
	{ 69.03086f, 64.59806f, 59.90476f },
	{ 105.9448f, 64.59806f, 45.67263f },
	{ 120.5689f, 64.58643f, 24.70727f },
	{ 124.9912f, 64.58643f, -0.00006f },
	{ 120.569f, 64.58643f, -25.47149f },
	{ 69.03085f, 64.59806f, -59.90478f },
	{ 0.00006f, 64.59806f, -64.84051f },
	{ -25.31973f, 64.59806f, -59.90477f },
	{ -45.96915f, 64.59806f, -45.84915f },
	{ -60.31164f, 64.59806f, -24.81338f },
	{ -64.80429f, 64.59806f, 0.000008f },
	{ -60.31163f, 64.59806f, 24.81339f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00037698[] = {
	{ -0.046069f, 0.998938f, 0 },
	{ -0.7603559f, 0.459805f, 0.458735f },
	{ 0.946417f, 0.151222f, 0.285354f },
	{ 0.987458f, 0.157881f, 0.000346f },
	{ -0.3836f, 0.8400609f, -0.3836f },
	{ 0.873505f, 0.486816f, 0.000367f },
	{ 0.377223f, 0.912228f, 0.159821f },
	{ 0.386849f, 0.922143f, 0 },
	{ -0.7605979f, 0.459952f, -0.458187f },
	{ -0.828959f, 0.159893f, 0.535967f },
	{ -0.263865f, 0.007954f, -0.964527f },
	{ 0.843785f, 0.470399f, 0.258364f },
	{ -0.264165f, -0.006025f, 0.9644589f },
	{ 0.9466749f, 0.151282f, -0.284466f },
	{ 0.821241f, 0.171592f, 0.544168f },
	{ 0.8439389f, 0.470485f, -0.257703f },
	{ 0.713681f, 0.505868f, 0.484517f },
	{ 0.377223f, 0.912228f, -0.159821f },
	{ -0.542492f, 0.8400609f, 0 },
	{ -0.900152f, 0.435575f, 0.000329f },
	{ 0.821708f, 0.171116f, -0.543614f },
	{ 0.09777199f, 0.857462f, 0.505173f },
	{ 0.713945f, 0.506055f, -0.483933f },
	{ 0.967704f, -0.005565f, 0.252027f },
	{ 0.268783f, 0.882099f, -0.386855f },
	{ -0.501197f, 0.8400609f, 0.207603f },
	{ -0.353801f, 0.187947f, 0.916243f },
	{ 0.268783f, 0.882099f, 0.386854f },
	{ 0.548948f, 0.1814f, -0.815935f },
	{ 0.427256f, 0.550383f, 0.717308f },
	{ 0.427511f, 0.550711f, -0.716905f },
	{ -0.501197f, 0.8400609f, -0.207603f },
	{ 0.09777199f, 0.857462f, -0.505173f },
	{ -0.630381f, 0.172825f, 0.756803f },
	{ -0.988621f, 0.150428f, 0.000317f },
	{ 0.967668f, -0.002167f, -0.252217f },
	{ -0.948768f, 0.152746f, -0.276601f },
	{ -0.034329f, 0.844896f, 0.533828f },
	{ -0.353398f, 0.188207f, -0.9163449f },
	{ -0.355061f, 0.54065f, 0.762646f },
	{ -0.355282f, 0.540987f, -0.7623039f },
	{ -0.383599f, 0.8400609f, 0.3836f },
	{ -0.034329f, 0.844896f, -0.533829f },
	{ -0.864984f, 0.441484f, 0.238526f },
	{ -0.588668f, 0.492092f, 0.641338f },
	{ -0.630729f, 0.172921f, -0.7564909f },
	{ 0.548727f, 0.180743f, 0.816229f },
	{ -0.588949f, 0.492326f, -0.640901f },
	{ -0.207603f, 0.8400609f, 0.501197f },
	{ -0.207603f, 0.8400609f, -0.501197f },
	{ -0.948599f, 0.152718f, 0.277196f },
	{ -0.8651209f, 0.441554f, -0.237897f },
	{ -0.829259f, 0.159951f, -0.535486f },
	{ -0.343729f, 0.30546f, 0.888f },
	{ -0.615338f, 0.275038f, 0.738724f },
	{ -0.811934f, 0.255326f, 0.52495f },
	{ -0.930774f, 0.244305f, 0.271983f },
	{ -0.970581f, 0.240774f, 0.000312f },
	{ -0.930934f, 0.244347f, -0.271397f },
	{ -0.812215f, 0.255414f, -0.524471f },
	{ -0.615661f, 0.275182f, -0.738401f },
	{ -0.343971f, 0.305674f, -0.887833f },
	{ 0.5322599f, 0.304182f, 0.790046f },
	{ 0.53243f, 0.304898f, -0.789655f },
	{ 0.800227f, 0.283271f, -0.528577f },
	{ 0.79978f, 0.283572f, 0.529093f },
	{ 0.9271989f, 0.249255f, 0.279596f },
	{ 0.965858f, 0.259072f, 0.000339f },
	{ 0.927479f, 0.24922f, -0.278697f },
	{ -0.972671f, 0.232185f, 0.0003f },
	{ -0.93168f, 0.235519f, 0.276593f },
	{ -0.9318359f, 0.235559f, -0.276031f },
	{ -0.809637f, 0.24599f, -0.532894f },
	{ -0.8093629f, 0.245906f, 0.533349f },
	{ -0.825445f, 0.152944f, 0.543368f },
	{ -0.825736f, 0.152998f, -0.54291f },
	{ -0.948409f, 0.146234f, 0.281311f },
	{ -0.9485739f, 0.14626f, -0.280739f },
	{ -0.989565f, 0.144088f, 0.000306f },
	{ -0.607302f, 0.264409f, 0.749181f },
	{ -0.6216559f, 0.164982f, 0.765719f },
	{ -0.607613f, 0.264544f, -0.748881f },
	{ -0.62199f, 0.165071f, -0.7654279f },
	{ -0.327107f, 0.292652f, -0.8985299f },
	{ -0.339238f, 0.179585f, -0.9234f },
	{ -0.327107f, 0.292652f, 0.8985299f },
	{ -0.338577f, 0.179533f, 0.923652f },
	{ 0.549972f, 0.282164f, -0.7860759f },
	{ 0.565199f, 0.169322f, -0.807391f },
	{ 0.549786f, 0.281497f, 0.7864439f },
	{ 0.564954f, 0.168781f, 0.807676f },
	{ 0.8190359f, 0.259057f, -0.511928f },
	{ 0.8382789f, 0.152185f, -0.523572f },
	{ 0.818094f, 0.259673f, 0.5131209f },
	{ 0.837889f, 0.15252f, 0.524099f },
	{ 0.93744f, 0.224327f, 0.26624f },
	{ 0.953256f, 0.13429f, -0.270683f },
	{ 0.9725609f, 0.232649f, 0.0003f },
	{ 0.990244f, 0.139346f, 0.000306f },
	{ 0.937378f, 0.224612f, -0.266217f },
	{ 0.953195f, 0.134153f, 0.270965f },
	{ 0.44947f, -0.719644f, -0.5292349f },
	{ 0.574851f, -0.440036f, 0.6898659f },
	{ 0.579018f, -0.43615f, -0.6888469f },
	{ 0.267967f, -0.648484f, 0.712504f },
	{ 0.229676f, -0.348978f, -0.90855f },
	{ 0.464187f, -0.693136f, 0.551447f },
	{ 0.266937f, -0.647724f, -0.713581f },
	{ 0.228783f, -0.355444f, 0.906266f },
	{ 0.463469f, -0.692888f, -0.552361f },
	{ 0.246783f, 0.006121f, -0.9690509f },
	{ 0.245187f, -0.007912f, 0.969444f },
	{ 0.640207f, -0.008063f, 0.76816f },
	{ 0.353025f, -0.007831999f, 0.935581f },
	{ 0.352088f, 0.006019f, -0.935948f },
	{ 0.642876f, 0.003065f, -0.765964f },
	{ 0.647302f, 0.003544f, -0.762225f },
	{ 0.647353f, -0.007625f, 0.762152f },
	{ 0.5130619f, -0.599777f, 0.614031f },
	{ 0.512871f, -0.5955859f, -0.618256f },
	{ 0.221542f, -0.778573f, 0.587149f },
	{ 0.192843f, -0.608389f, -0.769853f },
	{ 0.446785f, -0.723283f, 0.52654f },
	{ 0.223806f, -0.774192f, -0.592062f },
	{ 0.19239f, -0.613444f, 0.765946f },
	{ 0.47233f, 0.460261f, 0.751708f },
	{ 0.750842f, 0.426484f, 0.504329f },
	{ 0.8805f, 0.391092f, 0.267895f },
	{ 0.914015f, 0.405681f, 0.000357f },
	{ 0.8807099f, 0.391137f, -0.267138f },
	{ 0.7512029f, 0.426491f, -0.503785f },
	{ 0.472509f, 0.460802f, -0.751263f },
	{ -0.353094f, 0.45897f, -0.8152739f },
	{ -0.602161f, 0.415449f, -0.681765f },
	{ -0.783783f, 0.386865f, -0.485818f },
	{ -0.893946f, 0.370742f, -0.251815f },
	{ -0.9308029f, 0.36552f, 0.000323f },
	{ -0.893798f, 0.370681f, 0.252429f },
	{ -0.783522f, 0.386736f, 0.486341f },
	{ -0.60186f, 0.415241f, 0.682158f },
	{ -0.35286f, 0.458666f, 0.815546f },
	{ -0.762606f, 0.429328f, 0.483848f },
	{ 0.90214f, 0.431444f, 0.000325f },
	{ -0.762846f, 0.429462f, -0.483351f },
	{ 0.872533f, 0.41741f, 0.253879f },
	{ 0.872673f, 0.417477f, -0.25329f },
	{ 0.752853f, 0.453995f, 0.476551f },
	{ -0.912913f, 0.408154f, 0.000308f },
	{ 0.753098f, 0.454143f, -0.476021f },
	{ 0.473181f, 0.498674f, 0.72624f },
	{ 0.473439f, 0.498947f, -0.725884f },
	{ -0.340296f, 0.517373f, 0.78519f },
	{ -0.340505f, 0.517691f, -0.78489f },
	{ -0.874981f, 0.413423f, 0.251972f },
	{ -0.5787579f, 0.458209f, 0.674599f },
	{ -0.579029f, 0.458423f, -0.674221f },
	{ -0.875119f, 0.413488f, -0.251387f },
	{ 0.489193f, 0.443315f, 0.751107f },
	{ 0.774031f, 0.399359f, 0.491313f },
	{ 0.893239f, 0.36647f, 0.260429f },
	{ 0.925259f, 0.379337f, 0.000334f },
	{ 0.893433f, 0.366506f, -0.259712f },
	{ 0.7743689f, 0.399352f, -0.490787f },
	{ 0.489365f, 0.443832f, -0.75069f },
	{ -0.35363f, 0.459693f, -0.814634f },
	{ -0.5959319f, 0.403785f, -0.694134f },
	{ -0.782399f, 0.376883f, -0.495793f },
	{ -0.895909f, 0.361961f, -0.257551f },
	{ -0.934047f, 0.357151f, 0.000315f },
	{ -0.895761f, 0.361901f, 0.258148f },
	{ -0.782141f, 0.376758f, 0.496295f },
	{ -0.595637f, 0.403585f, 0.694504f },
	{ -0.353396f, 0.459389f, 0.814907f },
	{ 0.320041f, 0.712807f, 0.624083f },
	{ 0.320214f, 0.713193f, -0.623554f },
	{ 0.612048f, 0.66179f, 0.432934f },
	{ 0.612261f, 0.66202f, -0.43228f },
	{ 0.738036f, 0.6335059f, 0.23232f },
	{ 0.7690409f, 0.639199f, 0.000388f },
	{ 0.7381679f, 0.633619f, -0.231592f },
	{ -0.35858f, 0.678004f, -0.641663f },
	{ -0.55718f, 0.625146f, -0.546573f },
	{ -0.705736f, 0.5888439f, -0.393953f },
	{ -0.35839f, 0.677646f, 0.6421469f },
	{ -0.797105f, 0.567821f, -0.205435f },
	{ -0.827864f, 0.560928f, 0.000341f },
	{ -0.7969919f, 0.56774f, 0.206096f },
	{ -0.705537f, 0.5886779f, 0.394558f },
	{ -0.556949f, 0.624887f, 0.547106f },
	{ -0.677533f, 0.639671f, 0.363001f },
	{ -0.540215f, 0.676042f, 0.501133f },
	{ -0.358454f, 0.728159f, 0.584205f },
	{ 0.560366f, 0.723018f, -0.404024f },
	{ 0.266517f, 0.774295f, 0.573966f },
	{ 0.560181f, 0.722779f, 0.404708f },
	{ 0.67929f, 0.701106f, 0.21683f },
	{ 0.714921f, 0.699205f, 0.000396f },
	{ 0.679406f, 0.7012269f, -0.216074f },
	{ 0.266651f, 0.774684f, -0.573378f },
	{ -0.358626f, 0.7285089f, -0.583662f },
	{ -0.540423f, 0.6763009f, -0.50056f },
	{ -0.677711f, 0.639839f, -0.362372f },
	{ -0.762608f, 0.618506f, -0.189415f },
	{ -0.791261f, 0.611479f, 0.000346f },
	{ -0.762507f, 0.618424f, 0.19009f },
	{ 0.375226f, 0.674589f, 0.635716f },
	{ 0.375421f, 0.6749409f, -0.635227f },
	{ 0.678157f, 0.596983f, 0.428618f },
	{ 0.678368f, 0.597169f, -0.428026f },
	{ 0.7856579f, 0.575482f, 0.22707f },
	{ 0.820356f, 0.571852f, 0.000347f },
	{ 0.785783f, 0.575574f, -0.226407f },
	{ -0.347406f, 0.656876f, -0.669196f },
	{ -0.559244f, 0.603685f, -0.568164f },
	{ -0.712465f, 0.569408f, -0.410083f },
	{ -0.34722f, 0.656525f, 0.669637f },
	{ -0.808866f, 0.547902f, -0.2134f },
	{ -0.8398809f, 0.542771f, 0.00033f },
	{ -0.808751f, 0.547824f, 0.214035f },
	{ -0.712263f, 0.5692469f, 0.410658f },
	{ -0.559011f, 0.603433f, 0.568661f },
	{ -0.69515f, 0.596894f, 0.400604f },
	{ -0.544172f, 0.630853f, 0.553084f },
	{ -0.336294f, 0.683144f, 0.648244f },
	{ 0.660364f, 0.624603f, -0.416882f },
	{ 0.362552f, 0.700775f, 0.614386f },
	{ 0.66017f, 0.624419f, 0.417465f },
	{ 0.767023f, 0.603308f, 0.218393f },
	{ 0.800586f, 0.599218f, 0.000339f },
	{ 0.765996f, 0.6025f, -0.224153f },
	{ 0.362729f, 0.701117f, -0.613892f },
	{ -0.336463f, 0.683487f, -0.647795f },
	{ -0.544387f, 0.631102f, -0.552588f },
	{ -0.695338f, 0.597056f, -0.400037f },
	{ -0.790839f, 0.5754139f, -0.208502f },
	{ -0.821387f, 0.570371f, 0.000323f },
	{ -0.790731f, 0.575336f, 0.209124f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000381B4 = { vertex_00036B7C, normal_00037698, LengthOfArray(vertex_00036B7C), meshlist_00036AD4, matlist_00035DE0, LengthOfArray(meshlist_00036AD4), LengthOfArray(matlist_00035DE0),{ 33.65791f, -3.774136f, -0.038685f }, 155.5132f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000381DC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000381B4, 272.8831f, 87.90764f, -39.00063f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00038210[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 40, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 41, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 42, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 42, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00038274[] = {
	4, 13, 1, 0, 2,
	8, 1, 5, 2, 4, 3, 13, 12, 0
};

extern "C" __declspec(dllexport) Sint16 poly_00038290[] = {
	8, 8, 7, 4, 14, 13, 6, 1, 5,
	4, 6, 8, 5, 4
};

extern "C" __declspec(dllexport) Sint16 poly_000382AC[] = {
	11, 9, 10, 16, 15, 11, 7, 9, 8, 10, 6, 14,
	3, 9, 16, 11,
	4, 10, 14, 15, 7
};

extern "C" __declspec(dllexport) Sint16 poly_000382D6[] = {
	0x8000u | 7, 41, 40, 50, 39, 51, 38, 52,
	3, 41, 49, 50,
	3, 54, 53, 21,
	3, 20, 53, 54,
	0x8000u | 7, 56, 46, 55, 23, 54, 22, 21,
	7, 56, 17, 55, 18, 54, 19, 20,
	0x8000u | 7, 27, 26, 58, 25, 59, 24, 60,
	0x8000u | 7, 34, 33, 61, 32, 63, 31, 64,
	3, 58, 57, 28,
	3, 27, 57, 58,
	0x8000u | 7, 60, 47, 59, 30, 58, 29, 28,
	3, 61, 62, 35,
	3, 34, 62, 61,
	0x8000u | 7, 64, 48, 63, 37, 61, 36, 35,
	0x8000u | 7, 100, 88, 99, 78, 98, 77, 76,
	0x8000u | 7, 82, 81, 90, 80, 91, 79, 92,
	3, 82, 89, 90,
	3, 94, 93, 69,
	3, 68, 93, 94,
	0x8000u | 7, 96, 87, 95, 71, 94, 70, 69,
	7, 96, 65, 95, 66, 94, 67, 68,
	0x8000u | 7, 75, 74, 98, 73, 99, 72, 100,
	3, 75, 97, 98,
	3, 98, 97, 76
};

extern "C" __declspec(dllexport) Sint16 poly_000383F6[] = {
	3, 50, 49, 42,
	0x8000u | 7, 52, 45, 51, 44, 50, 43, 42,
	3, 90, 89, 83,
	0x8000u | 7, 92, 86, 91, 85, 90, 84, 83
};

extern "C" __declspec(dllexport) NJS_TEX uv_00038428[] = {
	{ 912, 28 },
	{ 848, 0 },
	{ 892, 254 },
	{ 729, 254 },
	{ 848, 0 },
	{ 733, 56 },
	{ 729, 254 },
	{ 653, 18 },
	{ 565, 254 },
	{ 912, 28 },
	{ 1130, 254 },
	{ 892, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00038458[] = {
	{ 815, -1160 },
	{ 772, -1160 },
	{ 713, 56 },
	{ 868, -1160 },
	{ 972, 64 },
	{ 876, -1160 },
	{ 908, 40 },
	{ 795, 87 },
	{ 876, -1160 },
	{ 815, -1160 },
	{ 795, 87 },
	{ 713, 56 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00038488[] = {
	{ 480, -78 },
	{ 581, -78 },
	{ 508, -254 },
	{ 629, -78 },
	{ 392, -78 },
	{ 448, 255 },
	{ 480, -78 },
	{ 488, 255 },
	{ 581, -78 },
	{ 552, 255 },
	{ 544, 255 },
	{ 480, -78 },
	{ 508, -254 },
	{ 392, -78 },
	{ 581, -78 },
	{ 544, 255 },
	{ 629, -78 },
	{ 448, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000384D0[] = {
	{ 0, 255 },
	{ 0, -161 },
	{ 255, -326 },
	{ 0, -601 },
	{ 255, -596 },
	{ 0, -1020 },
	{ 255, -1020 },
	{ 0, 255 },
	{ 255, 255 },
	{ 255, -326 },
	{ 255, -332 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 255, -214 },
	{ 255, -1020 },
	{ 0, -1020 },
	{ 255, -605 },
	{ 0, -620 },
	{ 255, -332 },
	{ 0, -204 },
	{ 0, 255 },
	{ 255, -765 },
	{ 0, -765 },
	{ 255, -432 },
	{ 0, -412 },
	{ 255, -214 },
	{ 0, -89 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, -110 },
	{ 255, -133 },
	{ 0, -460 },
	{ 255, -416 },
	{ 0, -765 },
	{ 255, -765 },
	{ 0, 255 },
	{ 0, -218 },
	{ 255, -236 },
	{ 0, -653 },
	{ 255, -684 },
	{ 0, -1020 },
	{ 255, -1020 },
	{ 255, -230 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 255, -133 },
	{ 255, -1020 },
	{ 0, -1020 },
	{ 255, -584 },
	{ 0, -689 },
	{ 255, -230 },
	{ 0, -224 },
	{ 0, 255 },
	{ 255, -138 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 255, -236 },
	{ 255, -765 },
	{ 0, -765 },
	{ 255, -496 },
	{ 0, -502 },
	{ 255, -138 },
	{ 0, -141 },
	{ 0, 255 },
	{ 255, -1020 },
	{ 0, -1020 },
	{ 255, -584 },
	{ 0, -689 },
	{ 255, -230 },
	{ 0, -224 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, -161 },
	{ 255, -326 },
	{ 0, -601 },
	{ 255, -596 },
	{ 0, -1020 },
	{ 255, -1020 },
	{ 0, 255 },
	{ 255, 255 },
	{ 255, -326 },
	{ 255, -332 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 255, -214 },
	{ 255, -1020 },
	{ 0, -1020 },
	{ 255, -605 },
	{ 0, -620 },
	{ 255, -332 },
	{ 0, -204 },
	{ 0, 255 },
	{ 255, -765 },
	{ 0, -765 },
	{ 255, -432 },
	{ 0, -412 },
	{ 255, -214 },
	{ 0, -89 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, -110 },
	{ 255, -133 },
	{ 0, -460 },
	{ 255, -416 },
	{ 0, -765 },
	{ 255, -765 },
	{ 0, 255 },
	{ 255, 255 },
	{ 255, -133 },
	{ 255, -230 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000386B0[] = {
	{ 0, -211 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -765 },
	{ 255, -765 },
	{ 0, -424 },
	{ 255, -398 },
	{ 0, -211 },
	{ 255, -62 },
	{ 255, 255 },
	{ 0, -211 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -765 },
	{ 255, -765 },
	{ 0, -424 },
	{ 255, -398 },
	{ 0, -211 },
	{ 255, -62 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00038700[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00038274, NULL, NULL, NULL, uv_00038428, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00038290, NULL, NULL, NULL, uv_00038458, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_000382AC, NULL, NULL, NULL, uv_00038488, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 24, poly_000382D6, NULL, NULL, NULL, uv_000384D0, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 4, poly_000383F6, NULL, NULL, NULL, uv_000386B0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00038778[] = {
	{ 3.207907f, 0.379822f, -0.121979f },
	{ 1.593535f, 4.253902f, 0.069707f },
	{ 0, 0.379822f, 3.37318f },
	{ -3.155832f, 0.379822f, 0.002848f },
	{ -1.521397f, 3.968594f, 0.069707f },
	{ -0.231816f, 3.397961f, 1.530313f },
	{ 0.7552339f, 25.94906f, 0.017775f },
	{ -0.762027f, 25.94906f, 0.034184f },
	{ -0.002264f, 25.94906f, 0.829174f },
	{ -0.001618f, 30.04309f, 1.596233f },
	{ 1.464625f, 30.04309f, 0.011298f },
	{ -1.468542f, 30.04309f, 0.011298f },
	{ -0.161131f, 0.379822f, -3.180253f },
	{ 0.055117f, 3.825939f, -1.70377f },
	{ -0.002264f, 25.94906f, -0.827301f },
	{ -0.001619f, 30.04309f, -1.613781f },
	{ 0, 32.2168f, -0.004284f },
	{ -2.238781f, 29.09983f, 0.042348f },
	{ -6.655449f, 33.07513f, 2.646676f },
	{ -10.99669f, 33.65325f, 6.67349f },
	{ -13.56273f, 30.63201f, 12.69608f },
	{ -11.82634f, 30.63201f, 14.03835f },
	{ -6.103237f, 33.65325f, 11.25301f },
	{ -2.156633f, 33.07513f, 6.989319f },
	{ -1.547195f, 29.14935f, 1.574274f },
	{ -1.834999f, 32.67651f, 5.904057f },
	{ -0.952652f, 29.77496f, 13.40675f },
	{ 0.694733f, 25.18806f, 16.02516f },
	{ 3.82831f, 25.18806f, 15.62375f },
	{ 4.712152f, 29.77496f, 12.52539f },
	{ 3.07061f, 32.67651f, 5.088608f },
	{ 0.630304f, 29.91497f, 1.725581f },
	{ 2.868614f, 32.89691f, 4.3882f },
	{ 6.924399f, 32.55453f, 7.780846f },
	{ 12.50929f, 29.41888f, 10.30546f },
	{ 14.08782f, 29.41888f, 8.199933f },
	{ 10.04532f, 32.55453f, 2.780113f },
	{ 5.481409f, 32.89691f, 0.145047f },
	{ -2.681216f, 29.22825f, -1.293529f },
	{ -8.93903f, 31.28997f, -1.126754f },
	{ -15.40529f, 28.33807f, 0.881691f },
	{ -17.99022f, 23.21798f, 4.007227f },
	{ -16.93492f, 23.21798f, 6.790442f },
	{ -13.58251f, 28.33807f, 7.407849f },
	{ -7.020314f, 31.28997f, 5.59135f },
	{ -1.373306f, 30.77111f, 3.13632f },
	{ 0.113858f, 31.08685f, 2.28335f },
	{ 1.793739f, 30.87881f, 1.069242f },
	{ 1.92572f, 31.40716f, -0.593428f },
	{ -20.50961f, 22.08091f, 5.950431f },
	{ -14.50979f, 35.05976f, 3.986723f },
	{ -6.146766f, 36.63743f, 1.445312f },
	{ 0.592598f, 29.48919f, -0.320314f },
	{ -13.99562f, 30.20404f, 15.1219f },
	{ -7.365788f, 37.21966f, 7.305147f },
	{ -3.261605f, 36.64154f, 3.278333f },
	{ 0.478328f, 30.09466f, -0.643277f },
	{ 2.285878f, 24.47357f, 17.19599f },
	{ 1.57896f, 32.77078f, 11.98851f },
	{ 0.617806f, 35.67233f, 5.496333f },
	{ -0.007331f, 30.01263f, -0.8862f },
	{ 8.484859f, 36.69161f, 5.280478f },
	{ 14.32323f, 27.9905f, 10.13277f },
	{ 4.175012f, 35.46474f, 2.266623f },
	{ 0.181536f, 30.66107f, -0.15743f },
	{ 1.67314f, 29.09983f, -2.144817f },
	{ 3.038832f, 33.07513f, -7.086916f },
	{ 3.36168f, 33.65325f, -12.99939f },
	{ 1.021076f, 30.63201f, -19.11313f },
	{ -1.160284f, 30.63201f, -18.87148f },
	{ -3.339526f, 33.65325f, -12.89126f },
	{ -3.213997f, 33.07513f, -7.082735f },
	{ 0.111203f, 29.14935f, -2.765657f },
	{ -2.691012f, 32.67651f, -6.078879f },
	{ -8.539726f, 29.77496f, -10.86024f },
	{ -11.54399f, 25.18806f, -11.59801f },
	{ -13.51813f, 25.18806f, -9.131596f },
	{ -12.0003f, 29.77496f, -6.289549f },
	{ -5.651515f, 32.67651f, -2.083209f },
	{ 3.08066f, 29.39533f, -0.368988f },
	{ 8.894695f, 31.9506f, -2.13148f },
	{ 14.80093f, 29.53225f, -5.850111f },
	{ 16.84471f, 24.64735f, -9.67459f },
	{ 15.09191f, 24.57424f, -12.07922f },
	{ 11.31725f, 29.41284f, -11.66071f },
	{ 5.267879f, 31.82429f, -8.101792f },
	{ 0.531005f, 30.84657f, -4.255863f },
	{ -1.575927f, 31.08685f, -2.121083f },
	{ -1.940003f, 30.87881f, -0.080617f },
	{ 18.83694f, 23.72276f, -12.24218f },
	{ 12.60614f, 36.17339f, -8.439065f },
	{ 4.963821f, 37.06234f, -3.981591f },
	{ -0.344047f, 29.39804f, -0.435857f },
	{ -0.353587f, 30.20404f, -21.1582f },
	{ 0.311992f, 37.21966f, -10.93013f },
	{ 0.159596f, 36.64154f, -5.182407f },
	{ 0.195986f, 30.09466f, 0.236523f },
	{ -13.50178f, 24.47357f, -11.33404f },
	{ -9.374347f, 32.77078f, -8.081056f },
	{ -4.171265f, 35.67233f, -4.081044f },
	{ 0.714014f, 30.01263f, 0.073661f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00038C34[] = {
	{ 0.927375f, 0.371568f, -0.043733f },
	{ 0.964932f, 0.248898f, 0.083399f },
	{ -0.002927f, 0.440312f, 0.89784f },
	{ -0.910782f, 0.412853f, -0.005304f },
	{ -0.970901f, 0.239026f, 0.014781f },
	{ -0.144487f, 0.365369f, 0.919581f },
	{ 0.996043f, -0.075086f, 0.047551f },
	{ -0.997368f, -0.071622f, 0.011283f },
	{ -0.03785f, -0.074612f, 0.996494f },
	{ 0.003315f, 0.190506f, 0.98168f },
	{ 0.983229f, 0.182222f, 0.007456f },
	{ -0.983104f, 0.182742f, 0.010582f },
	{ -0.049867f, 0.395976f, -0.916906f },
	{ -0.0008029999f, 0.27329f, -0.961931f },
	{ -0.000667f, -0.082098f, -0.996624f },
	{ -0.000661f, 0.187768f, -0.982213f },
	{ 0.000652f, 0.999999f, -0.000904f },
	{ -0.303228f, 0.340722f, -0.889922f },
	{ -0.382863f, 0.5091529f, -0.77083f },
	{ -0.666741f, 0.715652f, -0.208083f },
	{ -0.728433f, 0.6851169f, -0.000138f },
	{ 0.208118f, 0.626662f, 0.750987f },
	{ 0.202611f, 0.758011f, 0.619974f },
	{ 0.7007819f, 0.612826f, 0.365171f },
	{ -0.7908649f, 0.48607f, -0.371846f },
	{ -0.766291f, 0.639185f, -0.065121f },
	{ -0.271472f, 0.5895489f, 0.7607459f },
	{ -0.329156f, 0.473348f, 0.817067f },
	{ 0.469281f, 0.491058f, 0.733919f },
	{ 0.474927f, 0.610324f, 0.633995f },
	{ 0.736765f, 0.656788f, -0.160642f },
	{ -0.814877f, 0.490338f, 0.309102f },
	{ -0.717254f, 0.603116f, 0.348994f },
	{ -0.265449f, 0.5700549f, 0.7775429f },
	{ 0.469851f, 0.6628219f, 0.583016f },
	{ 0.700671f, 0.654152f, 0.284862f },
	{ 0.660351f, 0.55489f, -0.5059969f },
	{ 0.137108f, 0.640867f, -0.755308f },
	{ 0.186765f, 0.416292f, -0.889843f },
	{ -0.198198f, 0.466723f, -0.861909f },
	{ -0.785313f, 0.342775f, -0.515547f },
	{ -0.7174349f, 0.209711f, -0.664311f },
	{ -0.363996f, 0.284526f, 0.886878f },
	{ -0.392292f, 0.373679f, 0.840518f },
	{ 0.198175f, 0.538278f, 0.819136f },
	{ 0.651135f, 0.645092f, 0.399849f },
	{ 0.855402f, 0.51785f, 0.010939f },
	{ 0.431822f, 0.66684f, -0.6073329f },
	{ -0.354904f, 0.662033f, -0.660118f },
	{ -0.8654349f, 0.437116f, 0.244848f },
	{ -0.550081f, 0.823097f, 0.141143f },
	{ 0.218577f, 0.967563f, -0.126669f },
	{ 0.566251f, 0.656846f, -0.497909f },
	{ -0.346028f, 0.824945f, 0.446911f },
	{ -0.136005f, 0.988289f, 0.069193f },
	{ 0.288195f, 0.886852f, -0.361162f },
	{ 0.12389f, 0.561038f, -0.818467f },
	{ 0.09015f, 0.534927f, 0.840075f },
	{ 0.06470399f, 0.841824f, 0.5358599f },
	{ -0.037625f, 0.9927509f, -0.114151f },
	{ -0.470645f, 0.6825359f, -0.55914f },
	{ 0.210358f, 0.96817f, 0.135631f },
	{ 0.6024449f, 0.65699f, 0.453237f },
	{ -0.370746f, 0.8985209f, -0.234962f },
	{ -0.776674f, 0.629039f, 0.032974f },
	{ 0.836513f, 0.340722f, 0.429132f },
	{ 0.811005f, 0.5091529f, 0.288157f },
	{ 0.624015f, 0.7156529f, -0.313762f },
	{ 0.5238529f, 0.685118f, -0.5061539f },
	{ -0.671569f, 0.626662f, -0.395335f },
	{ -0.576557f, 0.758011f, -0.304961f },
	{ -0.757666f, 0.612826f, 0.224471f },
	{ 0.827076f, 0.48607f, -0.282278f },
	{ 0.5962369f, 0.639185f, -0.48574f },
	{ -0.333518f, 0.5895489f, -0.735662f },
	{ -0.331181f, 0.473347f, -0.816248f },
	{ -0.847489f, 0.491058f, -0.201557f },
	{ -0.782102f, 0.610324f, -0.125785f },
	{ -0.418104f, 0.656788f, 0.627549f },
	{ 0.020554f, 0.422016f, 0.906356f },
	{ 0.366969f, 0.498538f, 0.7853619f },
	{ 0.865596f, 0.402299f, 0.298161f },
	{ 0.849926f, 0.263648f, 0.456197f },
	{ 0.092938f, 0.316212f, -0.944125f },
	{ 0.125664f, 0.407151f, -0.9046749f },
	{ -0.446583f, 0.5036989f, -0.739493f },
	{ -0.792776f, 0.5743729f, -0.203966f },
	{ -0.622654f, 0.51785f, 0.58663f },
	{ 0.111601f, 0.66684f, 0.736797f },
	{ 0.73368f, 0.50577f, -0.453773f },
	{ 0.43006f, 0.864996f, -0.258517f },
	{ -0.2719f, 0.947265f, 0.169589f },
	{ -0.453014f, 0.6131369f, 0.64718f },
	{ -0.061797f, 0.824945f, -0.561824f },
	{ 0.049701f, 0.988289f, -0.144273f },
	{ 0.043785f, 0.886852f, 0.459975f },
	{ 0.479746f, 0.561038f, 0.674596f },
	{ -0.648662f, 0.534927f, -0.541378f },
	{ -0.41894f, 0.841824f, -0.340325f },
	{ 0.106386f, 0.9927509f, 0.055928f },
	{ 0.727f, 0.6825359f, 0.07494f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000390F0 = { vertex_00038778, normal_00038C34, LengthOfArray(vertex_00038778), meshlist_00038700, matlist_00038210, LengthOfArray(meshlist_00038700), LengthOfArray(matlist_00038210),{ -0.836336f, 18.79974f, -1.981103f }, 27.02439f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00039118 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000390F0, -55.73277f, 8.694106f, 327.7831f, 0, 0x5869, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0003914C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 51, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 54, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0003919C[] = {
	6, 30, 29, 28, 27, 26, 23,
	10, 31, 32, 33, 34, 35, 36, 37, 39, 43, 41,
	3, 43, 25, 37,
	0x8000u | 8, 24, 35, 27, 33, 29, 31, 30, 32,
	12, 27, 24, 23, 25, 22, 43, 42, 41, 40, 39, 38, 36
};

extern "C" __declspec(dllexport) Sint16 poly_000391F4[] = {
	0x8000u | 24, 3, 0, 5, 4, 7, 6, 9, 8, 11, 10, 13, 12, 15, 14, 17, 16, 19, 18, 21, 20, 2, 1, 3, 0
};

extern "C" __declspec(dllexport) Sint16 poly_00039226[] = {
	4, 25, 24, 37, 35
};

extern "C" __declspec(dllexport) Sint16 poly_00039230[] = {
	0x8000u | 24, 42, 20, 40, 18, 38, 16, 36, 14, 34, 12, 32, 10, 30, 8, 28, 6, 26, 4, 23, 0, 22, 1, 42, 20
};

extern "C" __declspec(dllexport) NJS_TEX uv_00039264[] = {
	{ 979, 254 },
	{ 1601, -573 },
	{ 1824, 60 },
	{ 1912, -908 },
	{ 2324, -478 },
	{ 2550, -1112 },
	{ 1080, -452 },
	{ 442, -336 },
	{ 701, -741 },
	{ 0, -1092 },
	{ 382, -1229 },
	{ 322, -1950 },
	{ 609, -1810 },
	{ 1139, -2052 },
	{ 1863, -2034 },
	{ 1633, -2214 },
	{ 1863, -2034 },
	{ 1982, -1840 },
	{ 609, -1810 },
	{ 2135, -1243 },
	{ 382, -1229 },
	{ 1912, -908 },
	{ 701, -741 },
	{ 1601, -573 },
	{ 1080, -452 },
	{ 979, 254 },
	{ 442, -336 },
	{ 1912, -908 },
	{ 2135, -1243 },
	{ 2550, -1112 },
	{ 1982, -1840 },
	{ 2326, -1953 },
	{ 1863, -2034 },
	{ 2150, -2157 },
	{ 1633, -2214 },
	{ 1608, -2295 },
	{ 1139, -2052 },
	{ 1091, -2178 },
	{ 322, -1950 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00039300[] = {
	{ 132, 255 },
	{ 121, 15 },
	{ 438, 255 },
	{ 408, 15 },
	{ 820, 255 },
	{ 792, 15 },
	{ 1330, 255 },
	{ 1323, 15 },
	{ 1739, 255 },
	{ 1753, 15 },
	{ 2123, 255 },
	{ 2135, 15 },
	{ 2487, 255 },
	{ 2501, 15 },
	{ 2898, 255 },
	{ 2917, 15 },
	{ 3244, 255 },
	{ 3239, 15 },
	{ 3523, 255 },
	{ 3518, 15 },
	{ 3643, 255 },
	{ 3632, 15 },
	{ 3955, 255 },
	{ 3946, 15 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00039360[] = {
	{ 152, 254 },
	{ 0, -254 },
	{ 1546, 245 },
	{ 1785, -245 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00039370[] = {
	{ 5100, 0 },
	{ 5100, 255 },
	{ 4618, 0 },
	{ 4615, 255 },
	{ 4276, 0 },
	{ 4271, 255 },
	{ 3522, 0 },
	{ 3537, 255 },
	{ 3017, 0 },
	{ 3034, 255 },
	{ 2517, 0 },
	{ 2529, 255 },
	{ 2033, 0 },
	{ 2043, 255 },
	{ 1450, 0 },
	{ 1457, 255 },
	{ 1007, 0 },
	{ 1008, 255 },
	{ 637, 0 },
	{ 621, 255 },
	{ 165, 0 },
	{ 166, 255 },
	{ 2, 0 },
	{ 3, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000393D0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0003919C, NULL, NULL, NULL, uv_00039264, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000391F4, NULL, NULL, NULL, uv_00039300, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_00039226, NULL, NULL, NULL, uv_00039360, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_00039230, NULL, NULL, NULL, uv_00039370, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00039430[] = {
	{ 105.872f, -3.813833f, -68.36317f },
	{ 104.9682f, -3.813833f, -7.710685f },
	{ 111.4422f, -23.81383f, -7.944808f },
	{ 112.7978f, -23.81383f, -72.24035f },
	{ 71.93084f, -3.813833f, -106.8227f },
	{ 75.22769f, -23.81383f, -116.588f },
	{ 16.86867f, -3.813833f, -128.8476f },
	{ 14.87045f, -23.81383f, -140.731f },
	{ -60.21857f, -3.813833f, -117.8352f },
	{ -69.62999f, -23.81383f, -128.6595f },
	{ -93.25569f, -3.813833f, -62.77292f },
	{ -105.8441f, -23.81383f, -68.30217f },
	{ -110.5362f, -3.813833f, 2.172134f },
	{ -121.176f, -23.81383f, 4.126652f },
	{ -64.905f, -3.813833f, 50.51446f },
	{ -72.21248f, -23.81383f, 57.15694f },
	{ 4.247599f, -3.813833f, 40.52469f },
	{ 1.659512f, -23.81383f, 44.10818f },
	{ 48.29744f, -3.813833f, 30.35382f },
	{ 49.94545f, -23.81383f, 32.03673f },
	{ 96.17442f, -3.813833f, 11.56613f },
	{ 102.6484f, -23.81383f, 13.45005f },
	{ 90.36175f, 16.18617f, -6.859231f },
	{ 90.77626f, 16.18617f, -59.16147f },
	{ 63.71505f, 36.18616f, -41.96567f },
	{ 63.71505f, 36.18616f, -5.014681f },
	{ 62.96695f, 16.18617f, -89.04345f },
	{ 41.50416f, 40.06751f, -55.45062f },
	{ 17.30907f, 16.18617f, -107.3066f },
	{ 13.25417f, 36.18616f, -66.75063f },
	{ -46.61203f, 16.18617f, -98.17505f },
	{ -26.29583f, 36.18616f, -61.10061f },
	{ -74.00668f, 16.18617f, -52.51714f },
	{ -48.04583f, 38.25855f, -36.05062f },
	{ -91.64806f, 16.18617f, 0.199648f },
	{ -61.80141f, 36.18616f, -1.202634f },
	{ -52.84178f, 16.18617f, 40.24955f },
	{ -34.82095f, 36.18616f, 25.77782f },
	{ 6.328286f, 16.18617f, 34.79686f },
	{ 7.378812f, 38.51131f, 26.61085f },
	{ 45.37929f, 16.18617f, 29.0315f },
	{ 45.82781f, 33.20331f, 23.91689f },
	{ 81.56792f, 16.18617f, 8.655856f },
	{ 58.86476f, 37.23684f, 8.605146f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00039640[] = {
	{ 0.815811f, 0.494657f, -0.299611f },
	{ 0.869284f, 0.454897f, 0.193428f },
	{ 0.928669f, 0.317673f, 0.191462f },
	{ 0.874602f, 0.357091f, -0.32796f },
	{ 0.488761f, 0.55067f, -0.6766649f },
	{ 0.513594f, 0.424729f, -0.745537f },
	{ 0.103035f, 0.609042f, -0.7864169f },
	{ 0.084468f, 0.502729f, -0.860307f },
	{ -0.40487f, 0.660892f, -0.631903f },
	{ -0.461769f, 0.580344f, -0.6707979f },
	{ -0.699396f, 0.650673f, -0.295752f },
	{ -0.762611f, 0.566387f, -0.312459f },
	{ -0.7573749f, 0.617534f, 0.212217f },
	{ -0.812075f, 0.538844f, 0.224011f },
	{ -0.282725f, 0.458809f, 0.842354f },
	{ -0.349682f, 0.388801f, 0.852383f },
	{ 0.17062f, 0.266001f, 0.948753f },
	{ 0.189128f, 0.208024f, 0.9596649f },
	{ 0.300213f, 0.154414f, 0.941291f },
	{ 0.291602f, 0.124313f, 0.948427f },
	{ 0.650712f, 0.32226f, 0.687549f },
	{ 0.690981f, 0.24241f, 0.681016f },
	{ 0.7033589f, 0.69155f, 0.164453f },
	{ 0.632253f, 0.739204f, -0.232019f },
	{ 0.347945f, 0.931659f, -0.104627f },
	{ 0.344893f, 0.936061f, 0.069564f },
	{ 0.354083f, 0.784459f, -0.509165f },
	{ 0.151745f, 0.97474f, -0.163879f },
	{ 0.06741299f, 0.81103f, -0.581107f },
	{ 0.009896f, 0.9454409f, -0.325643f },
	{ -0.317366f, 0.811876f, -0.490036f },
	{ -0.177514f, 0.932735f, -0.313837f },
	{ -0.571884f, 0.7733769f, -0.273562f },
	{ -0.300406f, 0.942189f, -0.148443f },
	{ -0.62429f, 0.76214f, 0.171477f },
	{ -0.369667f, 0.920039f, 0.129901f },
	{ -0.249687f, 0.608156f, 0.753527f },
	{ -0.149618f, 0.887713f, 0.435408f },
	{ 0.12673f, 0.31747f, 0.939762f },
	{ 0.036864f, 0.866397f, 0.497994f },
	{ 0.293432f, 0.230094f, 0.927876f },
	{ 0.291752f, 0.611105f, 0.73582f },
	{ 0.606761f, 0.510748f, 0.6090789f },
	{ 0.33519f, 0.901002f, 0.275396f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00039850 = { vertex_00039430, normal_00039640, LengthOfArray(vertex_00039430), meshlist_000393D0, matlist_0003914C, LengthOfArray(meshlist_000393D0), LengthOfArray(matlist_0003914C),{ -4.189125f, 8.126838f, -41.78703f }, 153.2183f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00039878 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00039850, -421.7294f, 23.87383f, -15.92865f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000398AC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 44, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 45, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000398FC[] = {
	3, 33, 34, 35,
	3, 29, 37, 31,
	9, 35, 36, 33, 37, 32, 29, 24, 27, 25
};

extern "C" __declspec(dllexport) Sint16 poly_00039920[] = {
	0x8000u | 24, 28, 29, 26, 27, 22, 25, 23, 24, 40, 32, 43, 33, 42, 34, 41, 35, 39, 36, 38, 37, 30, 31, 28, 29
};

extern "C" __declspec(dllexport) Sint16 poly_00039952[] = {
	0x8000u | 24, 7, 8, 9, 4, 10, 11, 13, 14, 16, 17, 19, 20, 21, 18, 15, 12, 0, 3, 1, 2, 5, 6, 7, 8,
	0x8000u | 24, 7, 28, 5, 26, 1, 22, 0, 23, 15, 40, 21, 43, 19, 42, 16, 41, 13, 39, 10, 38, 9, 30, 7, 28
};

extern "C" __declspec(dllexport) NJS_TEX uv_000399B8[] = {
	{ 52, -1721 },
	{ 800, -2211 },
	{ 1552, -2130 },
	{ 1886, -576 },
	{ 1719, -1312 },
	{ 1968, -1067 },
	{ 1552, -2130 },
	{ 1800, -1639 },
	{ 52, -1721 },
	{ 1719, -1312 },
	{ 52, -984 },
	{ 1886, -576 },
	{ 468, -167 },
	{ 1719, -249 },
	{ 1219, 159 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000399F4[] = {
	{ 533, 254 },
	{ 521, 0 },
	{ 1265, 254 },
	{ 1259, 0 },
	{ 2405, 254 },
	{ 2412, 0 },
	{ 3882, 254 },
	{ 3914, 0 },
	{ 5864, 254 },
	{ 5877, 0 },
	{ 7248, 254 },
	{ 7237, 0 },
	{ 8803, 254 },
	{ 8788, 0 },
	{ 10067, 254 },
	{ 10058, 0 },
	{ 10990, 254 },
	{ 10979, 0 },
	{ 11555, 254 },
	{ 11538, 0 },
	{ 12263, 254 },
	{ 12249, 0 },
	{ 13283, 254 },
	{ 13271, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00039A54[] = {
	{ 3958, -737 },
	{ 3958, 255 },
	{ 3653, -737 },
	{ 3653, 255 },
	{ 3442, -737 },
	{ 3442, 254 },
	{ 3293, -737 },
	{ 3293, 255 },
	{ 3037, -737 },
	{ 3037, 255 },
	{ 2680, -737 },
	{ 2680, 255 },
	{ 2236, -737 },
	{ 2236, 255 },
	{ 1834, -737 },
	{ 1834, 255 },
	{ 1204, -737 },
	{ 1204, 255 },
	{ 729, -737 },
	{ 729, 255 },
	{ 364, -737 },
	{ 364, 255 },
	{ 135, -737 },
	{ 135, 255 },
	{ 135, -737 },
	{ 186, -1020 },
	{ 364, -737 },
	{ 404, -1020 },
	{ 729, -737 },
	{ 745, -1020 },
	{ 1204, -737 },
	{ 1188, -1020 },
	{ 1834, -737 },
	{ 1784, -1020 },
	{ 2236, -737 },
	{ 2199, -1020 },
	{ 2680, -737 },
	{ 2665, -1020 },
	{ 3037, -737 },
	{ 3044, -1020 },
	{ 3293, -737 },
	{ 3323, -1020 },
	{ 3442, -737 },
	{ 3490, -1020 },
	{ 3653, -737 },
	{ 3702, -1020 },
	{ 3958, -737 },
	{ 4011, -1020 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00039B14[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000398FC, NULL, NULL, NULL, uv_000399B8, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_00039920, NULL, NULL, NULL, uv_000399F4, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_00039952, NULL, NULL, NULL, uv_00039A54, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00039B5C[] = {
	{ -23.20887f, -9.37413f, 58.10662f },
	{ 10.54132f, -9.37413f, 43.10663f },
	{ 10.54132f, -60.02003f, 43.10663f },
	{ -23.20887f, -60.02003f, 58.10662f },
	{ 44.2912f, -60.02003f, 99.35663f },
	{ 33.04123f, -9.37413f, 61.85662f },
	{ 33.04123f, -60.02003f, 61.85662f },
	{ 40.54132f, -9.37413f, 76.85663f },
	{ 40.54132f, -60.02003f, 76.85663f },
	{ 44.2912f, -9.37413f, 99.35663f },
	{ 33.04123f, -9.37413f, 110.6066f },
	{ 33.04123f, -60.02002f, 110.6066f },
	{ -41.95869f, -60.02003f, 95.60663f },
	{ 36.79132f, -9.37413f, 125.6067f },
	{ 36.79132f, -60.02003f, 125.6067f },
	{ -41.95869f, -9.37413f, 95.60663f },
	{ 25.54131f, -9.37413f, 148.1067f },
	{ 25.54131f, -60.02003f, 148.1067f },
	{ -41.95869f, -60.02003f, 129.3567f },
	{ -8.208774f, -9.37413f, 151.8567f },
	{ -8.208774f, -60.02003f, 151.8567f },
	{ -41.95869f, -9.37413f, 129.3567f },
	{ 12.80176f, 5.020301f, 21.34217f },
	{ -32.19848f, 5.020301f, 41.34216f },
	{ -30.76109f, 9.920302f, 45.37135f },
	{ 11.53914f, 9.920302f, 26.77137f },
	{ 42.80165f, 5.020301f, 46.34216f },
	{ 39.73904f, 9.920302f, 50.02136f },
	{ 52.80177f, 5.020301f, 66.34217f },
	{ 49.13915f, 9.920302f, 68.62134f },
	{ 57.8016f, 5.020301f, 96.34217f },
	{ 53.83901f, 9.920302f, 96.52133f },
	{ -54.26085f, 9.920302f, 91.87132f },
	{ -54.26085f, 9.920302f, 133.7214f },
	{ -11.96097f, 9.920302f, 161.6213f },
	{ 30.33914f, 9.920302f, 156.9714f },
	{ 44.43916f, 9.920302f, 129.0713f },
	{ 39.73904f, 9.920302f, 110.4714f },
	{ 42.80165f, 5.020301f, 111.3422f },
	{ 47.80177f, 5.020301f, 131.3422f },
	{ -57.19824f, 5.020301f, 91.34217f },
	{ 32.80176f, 5.020301f, 161.3422f },
	{ -12.19836f, 5.020301f, 166.3422f },
	{ -57.19824f, 5.020301f, 136.3422f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00039D6C[] = {
	{ -0.624766f, -0.474505f, -0.6200899f },
	{ 0.120577f, -0.556969f, -0.821734f },
	{ 0.137819f, 0, -0.990457f },
	{ -0.6908669f, 0, -0.722982f },
	{ 0.9522949f, 0, 0.305179f },
	{ 0.711909f, -0.443505f, -0.544509f },
	{ 0.7839119f, 0, -0.620872f },
	{ 0.874569f, -0.401587f, -0.271768f },
	{ 0.950983f, 0, -0.309244f },
	{ 0.869661f, -0.350535f, 0.347583f },
	{ 0.931213f, -0.268404f, 0.246581f },
	{ 0.963716f, 0, 0.26693f },
	{ -0.973249f, 0, -0.229751f },
	{ 0.933749f, -0.350469f, 0.072699f },
	{ 0.994029f, 0, 0.109114f },
	{ -0.880156f, -0.427819f, -0.205661f },
	{ 0.5251409f, -0.442254f, 0.727075f },
	{ 0.571968f, 0, 0.820276f },
	{ -0.8816749f, 0, 0.471857f },
	{ -0.211307f, -0.427128f, 0.879154f },
	{ -0.236414f, 0, 0.971652f },
	{ -0.77257f, -0.473252f, 0.423282f },
	{ 0.140162f, -0.062675f, -0.988143f },
	{ -0.6554959f, -0.107004f, -0.74758f },
	{ -0.387844f, 0.852532f, -0.350381f },
	{ 0.043802f, 0.88845f, -0.456878f },
	{ 0.768496f, -0.047733f, -0.6380709f },
	{ 0.343578f, 0.9022509f, -0.260572f },
	{ 0.943835f, -0.043673f, -0.327518f },
	{ 0.429142f, 0.893518f, -0.132144f },
	{ 0.969879f, -0.022725f, 0.242524f },
	{ 0.504096f, 0.837033f, 0.212751f },
	{ -0.526467f, 0.840578f, -0.127517f },
	{ -0.484395f, 0.8469f, 0.21937f },
	{ -0.125687f, 0.884554f, 0.449184f },
	{ 0.284933f, 0.8793139f, 0.381603f },
	{ 0.534719f, 0.8448949f, 0.015099f },
	{ 0.328382f, 0.940015f, 0.09239499f },
	{ 0.957013f, -0.009896f, 0.289878f },
	{ 0.987087f, -0.015685f, 0.159414f },
	{ -0.964831f, -0.130937f, -0.227939f },
	{ 0.559007f, -0.009333f, 0.82911f },
	{ -0.225604f, -0.021497f, 0.973982f },
	{ -0.873952f, -0.071509f, 0.480723f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00039F7C = { vertex_00039B5C, normal_00039D6C, LengthOfArray(vertex_00039B5C), meshlist_00039B14, matlist_000398AC, LengthOfArray(meshlist_00039B14), LengthOfArray(matlist_000398AC),{ 0.301682f, -25.04987f, 93.84219f }, 92.53374f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00039FA4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00039F7C, -547.8016f, 50.13969f, 18.65782f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00039FD8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 46, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 51, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0003A014[] = {
	11, 12, 23, 13, 10, 11, 8, 9, 6, 7, 4, 5,
	0x8000u | 10, 12, 22, 15, 14, 17, 16, 19, 18, 2, 1,
	3, 15, 12, 13,
	4, 14, 16, 1, 18,
	4, 8, 10, 6, 4
};

extern "C" __declspec(dllexport) Sint16 poly_0003A05E[] = {
	4, 3, 25, 0, 24,
	8, 23, 12, 24, 22, 0, 20, 3, 21
};

extern "C" __declspec(dllexport) Sint16 poly_0003A07A[] = {
	6, 2, 21, 1, 20, 14, 22,
	6, 10, 23, 4, 24, 5, 25
};

extern "C" __declspec(dllexport) NJS_TEX uv_0003A098[] = {
	{ 605, -1519 },
	{ 684, -895 },
	{ 122, -1480 },
	{ 733, -808 },
	{ 300, -488 },
	{ 900, -246 },
	{ 681, 254 },
	{ 2674, -412 },
	{ 2878, -122 },
	{ 3288, -956 },
	{ 3827, -995 },
	{ 605, -1519 },
	{ 537, -2226 },
	{ 0, -2511 },
	{ 625, -2326 },
	{ 721, -3455 },
	{ 823, -2946 },
	{ 3033, -3570 },
	{ 2694, -3058 },
	{ 3804, -2521 },
	{ 3215, -2479 },
	{ 0, -2511 },
	{ 605, -1519 },
	{ 122, -1480 },
	{ 625, -2326 },
	{ 823, -2946 },
	{ 3215, -2479 },
	{ 2694, -3058 },
	{ 900, -246 },
	{ 733, -808 },
	{ 2674, -412 },
	{ 3288, -956 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0003A118[] = {
	{ -1060, 4080 },
	{ -648, 3930 },
	{ -867, 3485 },
	{ -533, 3364 },
	{ 36, 500 },
	{ -492, 294 },
	{ -533, 3364 },
	{ -1097, 80 },
	{ -867, 3485 },
	{ -1665, 3005 },
	{ -1060, 4080 },
	{ -1801, 3636 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0003A148[] = {
	{ 5078, 237 },
	{ 5133, 47 },
	{ 4161, 221 },
	{ 4212, 24 },
	{ 131, 235 },
	{ -14, 49 },
	{ 135, 234 },
	{ 70, 58 },
	{ 3985, 255 },
	{ 4083, 55 },
	{ 4798, 242 },
	{ 4876, 51 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0003A178[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0003A014, NULL, NULL, NULL, uv_0003A098, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0003A05E, NULL, NULL, NULL, uv_0003A118, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0003A07A, NULL, NULL, NULL, uv_0003A148, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0003A1C0[] = {
	{ 32.21038f, -50, -5.318612f },
	{ 24.05013f, -50, 22.60304f },
	{ 39.68133f, -60, 23.76071f },
	{ 47.28284f, -60, -2.203084f },
	{ 26.05831f, -50, -17.19942f },
	{ 40.33113f, -60, -16.16896f },
	{ 9.707788f, -50, -31.38268f },
	{ 15.12977f, -60.00141f, -38.98077f },
	{ -37.29391f, -50, -35.74636f },
	{ -43.13024f, -60, -48.85667f },
	{ -41.73412f, -50, -21.00302f },
	{ -53.21901f, -60.00141f, -29.42278f },
	{ -45.07974f, -50, -2.482729f },
	{ -57.93187f, -60.00141f, -3.516944f },
	{ -44.60117f, -50, 18.6674f },
	{ -61.19148f, -60, 23.42721f },
	{ -39.35939f, -50, 34.81472f },
	{ -42.0592f, -60, 48.11072f },
	{ 10.29762f, -50.00141f, 37.73037f },
	{ 19.28637f, -60.00141f, 51.09871f },
	{ 25.10437f, -50, 19.96589f },
	{ 40.78138f, -60, 21.22768f },
	{ -46.92921f, -50, 15.98039f },
	{ -43.03057f, -50, -18.78275f },
	{ 27.64258f, -50, -14.49518f },
	{ 41.55384f, -60, -13.60865f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0003A2F8[] = {
	{ 0.356036f, 0.932357f, -0.06284399f },
	{ 0.264814f, 0.94939f, 0.168914f },
	{ 0.482734f, 0.835443f, 0.262684f },
	{ 0.556654f, 0.83027f, -0.028066f },
	{ 0.309264f, 0.907613f, -0.28389f },
	{ 0.5484149f, 0.743261f, -0.383151f },
	{ 0.186045f, 0.880271f, -0.436475f },
	{ 0.326553f, 0.664423f, -0.6722389f },
	{ -0.231468f, 0.8853469f, -0.403215f },
	{ -0.284198f, 0.75873f, -0.586141f },
	{ -0.310121f, 0.9458809f, -0.095571f },
	{ -0.627639f, 0.748863f, -0.212774f },
	{ -0.33567f, 0.940393f, -0.054647f },
	{ -0.628271f, 0.771458f, -0.100641f },
	{ -0.244873f, 0.967955f, 0.055683f },
	{ -0.551944f, 0.828006f, 0.098812f },
	{ -0.192621f, 0.938342f, 0.287074f },
	{ -0.207979f, 0.854641f, 0.475745f },
	{ 0.118779f, 0.939034f, 0.322654f },
	{ 0.228679f, 0.851504f, 0.471856f },
	{ 0.279855f, 0.954855f, 0.099667f },
	{ 0.521383f, 0.8349929f, 0.175916f },
	{ -0.341451f, 0.939113f, -0.038433f },
	{ -0.325286f, 0.943058f, -0.0695f },
	{ 0.305884f, 0.938625f, -0.159431f },
	{ 0.5671f, 0.77071f, -0.290523f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0003A430 = { vertex_0003A1C0, normal_0003A2F8, LengthOfArray(vertex_0003A1C0), meshlist_0003A178, matlist_00039FD8, LengthOfArray(meshlist_0003A178), LengthOfArray(matlist_00039FD8),{ -6.954319f, -55.0007f, 1.121019f }, 72.45213f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0003A458 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0003A430, -57.35121f, 60.06f, 358.5588f, 0, 0xC39, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0003A48C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 46, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 51, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0003A4C8[] = {
	10, 5, 7, 4, 6, 8, 9, 19, 11, 18, 10,
	3, 6, 7, 9,
	8, 11, 13, 10, 12, 0, 14, 1, 15,
	4, 14, 12, 15, 13,
	0x8000u | 5, 8, 4, 2, 5, 3
};

extern "C" __declspec(dllexport) Sint16 poly_0003A50E[] = {
	6, 17, 21, 16, 20, 18, 19
};

extern "C" __declspec(dllexport) Sint16 poly_0003A51C[] = {
	6, 1, 17, 0, 16, 10, 18,
	6, 21, 3, 20, 2, 19, 8
};

extern "C" __declspec(dllexport) NJS_TEX uv_0003A538[] = {
	{ 3104, 178 },
	{ 1117, 255 },
	{ 2836, -106 },
	{ 1235, -59 },
	{ 772, -725 },
	{ 316, -394 },
	{ 721, -812 },
	{ 0, -2476 },
	{ 565, -2183 },
	{ 573, -2280 },
	{ 1235, -59 },
	{ 1117, 255 },
	{ 316, -394 },
	{ 0, -2476 },
	{ 645, -3389 },
	{ 573, -2280 },
	{ 804, -3159 },
	{ 3394, -2444 },
	{ 2863, -3295 },
	{ 4016, -2489 },
	{ 3203, -3570 },
	{ 2863, -3295 },
	{ 804, -3159 },
	{ 3203, -3570 },
	{ 645, -3389 },
	{ 772, -725 },
	{ 2836, -106 },
	{ 3474, -876 },
	{ 3104, 178 },
	{ 4042, -916 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0003A5B0[] = {
	{ -1762, 3777 },
	{ -556, 4080 },
	{ -1619, 3123 },
	{ -436, 3495 },
	{ -1026, 102 },
	{ 158, 533 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0003A5C8[] = {
	{ 5048, 368 },
	{ 5103, 187 },
	{ 4140, 352 },
	{ 4192, 165 },
	{ 23, 360 },
	{ 3, 189 },
	{ 5085, 255 },
	{ 5004, 255 },
	{ 4277, 255 },
	{ 4176, 255 },
	{ 185, 255 },
	{ 252, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0003A5F8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0003A4C8, NULL, NULL, NULL, uv_0003A538, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0003A50E, NULL, NULL, NULL, uv_0003A5B0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0003A51C, NULL, NULL, NULL, uv_0003A5C8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0003A640[] = {
	{ 17.79709f, -50, 16.72626f },
	{ 29.36418f, -60, 17.58293f },
	{ 19.28314f, -50, -12.72758f },
	{ 29.84503f, -60, -11.96503f },
	{ 7.471102f, -50, -27.17113f },
	{ 12.40666f, -60.00141f, -32.51864f },
	{ -22.32496f, -50, -28.04255f },
	{ -24.48525f, -60, -33.9503f },
	{ -30.88327f, -50, -15.54224f },
	{ -39.38209f, -60.00141f, -21.77286f },
	{ -34.58641f, -50, 13.65562f },
	{ -45.28173f, -60, 17.33614f },
	{ -30.29102f, -50, 30.14259f },
	{ -33.28469f, -60, 34.42634f },
	{ 7.925035f, -50.00141f, 32.66696f },
	{ 14.27191f, -60.00141f, 37.81306f },
	{ 18.57723f, -50, 14.77477f },
	{ 30.17821f, -60, 15.70849f },
	{ -34.72764f, -50, 11.82549f },
	{ -31.84265f, -50, -13.89924f },
	{ 20.4555f, -50, -10.72645f },
	{ 30.74981f, -60, -10.07043f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0003A748[] = {
	{ 0.361831f, 0.908323f, 0.209829f },
	{ 0.630815f, 0.701887f, 0.330799f },
	{ 0.362061f, 0.8945799f, -0.261988f },
	{ 0.643185f, 0.648248f, -0.407537f },
	{ 0.210882f, 0.836199f, -0.506261f },
	{ 0.378366f, 0.587948f, -0.714952f },
	{ -0.232781f, 0.802954f, -0.548705f },
	{ -0.325553f, 0.521585f, -0.788647f },
	{ -0.400164f, 0.89292f, -0.206306f },
	{ -0.707811f, 0.588713f, -0.390412f },
	{ -0.388281f, 0.9207399f, 0.038428f },
	{ -0.684204f, 0.722846f, 0.09673899f },
	{ -0.259921f, 0.848157f, 0.461595f },
	{ -0.377506f, 0.650055f, 0.659483f },
	{ 0.189514f, 0.816248f, 0.545732f },
	{ 0.396513f, 0.600301f, 0.694562f },
	{ 0.383708f, 0.919084f, 0.089733f },
	{ 0.665401f, 0.733459f, 0.138853f },
	{ -0.408354f, 0.9102319f, -0.068744f },
	{ -0.408354f, 0.9102319f, -0.068744f },
	{ 0.430335f, 0.895287f, -0.115207f },
	{ 0.691802f, 0.709412f, -0.134702f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0003A850 = { vertex_0003A640, normal_0003A748, LengthOfArray(vertex_0003A640), meshlist_0003A5F8, matlist_0003A48C, LengthOfArray(meshlist_0003A5F8), LengthOfArray(matlist_0003A48C),{ -7.265959f, -55.0007f, 1.931377f }, 55.04168f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0003A878 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0003A850, 264.4145f, 60.06f, 241.0889f, 0, 0x8CF9, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0003A8AC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 47, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 51, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 54, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 54, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 47, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0003A924[] = {
	34, 74, 75, 31, 151, 150, 76, 20, 148, 149, 82, 67, 139, 138, 77, 18, 136, 137, 78, 62, 127, 126, 79, 16, 124, 125, 80, 72, 115, 114, 81, 52, 112, 113, 26,
	3, 31, 33, 74
};

extern "C" __declspec(dllexport) Sint16 poly_0003A972[] = {
	0x8000u | 5, 34, 21, 108, 154, 28,
	35, 55, 46, 30, 153, 152, 47, 23, 146, 147, 65, 66, 141, 140, 48, 24, 134, 135, 60, 61, 129, 128, 49, 25, 122, 123, 70, 71, 117, 116, 53, 51, 110, 111, 35, 27,
	4, 30, 32, 55, 29,
	17, 57, 97, 96, 7, 42, 90, 91, 10, 43, 87, 84, 13, 44, 107, 105, 27, 35
};

extern "C" __declspec(dllexport) Sint16 poly_0003A9F4[] = {
	3, 55, 29, 28,
	3, 28, 46, 55
};

extern "C" __declspec(dllexport) Sint16 poly_0003AA04[] = {
	3, 0, 1, 56,
	0x8000u | 55, 28, 46, 108, 153, 34, 47, 145, 146, 63, 65, 142, 141, 45, 48, 133, 134, 59, 60, 130, 129, 36, 49, 121, 122, 69, 70, 118, 117, 54, 53, 109, 110, 37, 35, 104, 105, 38, 44, 85, 84, 39, 43, 92, 91, 40, 42, 95, 96, 41, 57, 101, 99, 56, 2, 1
};

extern "C" __declspec(dllexport) Sint16 poly_0003AA7C[] = {
	3, 3, 83, 0,
	0x8000u | 51, 21, 34, 144, 145, 64, 63, 143, 142, 19, 45, 132, 133, 58, 59, 131, 130, 17, 36, 120, 121, 68, 69, 119, 118, 50, 54, 155, 109, 15, 37, 103, 104, 14, 38, 86, 85, 11, 39, 93, 92, 8, 40, 94, 95, 5, 41, 102, 101, 3, 56, 0,
	0x8000u | 5, 75, 32, 74, 29, 73,
	55, 32, 30, 75, 152, 151, 23, 76, 147, 148, 66, 82, 140, 139, 24, 77, 135, 136, 61, 78, 128, 127, 25, 79, 123, 124, 71, 80, 116, 115, 51, 81, 111, 112, 27, 26, 107, 106, 13, 12, 87, 88, 10, 9, 90, 89, 7, 6, 97, 98, 57, 4, 99, 100, 2, 1
};

extern "C" __declspec(dllexport) Sint16 poly_0003AB68[] = {
	4, 22, 73, 33, 74
};

extern "C" __declspec(dllexport) NJS_TEX uv_0003AB74[] = {
	{ 4803, 9 },
	{ 4299, 30 },
	{ 4342, 254 },
	{ 3974, 41 },
	{ 4011, 254 },
	{ 3681, 51 },
	{ 3707, 254 },
	{ 3432, 72 },
	{ 3451, 254 },
	{ 3190, 93 },
	{ 3199, 254 },
	{ 2974, 97 },
	{ 2980, 254 },
	{ 2739, 102 },
	{ 2741, 254 },
	{ 2500, 114 },
	{ 2502, 254 },
	{ 2246, 125 },
	{ 2246, 254 },
	{ 2043, 133 },
	{ 2042, 254 },
	{ 1809, 140 },
	{ 1808, 254 },
	{ 1594, 153 },
	{ 1586, 254 },
	{ 1388, 166 },
	{ 1379, 254 },
	{ 1098, 178 },
	{ 1099, 254 },
	{ 800, 190 },
	{ 812, 254 },
	{ 404, 222 },
	{ 414, 254 },
	{ 0, 254 },
	{ 4342, 254 },
	{ 4938, 242 },
	{ 4803, 9 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0003AC08[] = {
	{ -900, 3621 },
	{ -816, 3457 },
	{ -943, 3594 },
	{ -900, 3491 },
	{ -983, 3532 },
	{ -1004, 5399 },
	{ -956, 5070 },
	{ -689, 5259 },
	{ -920, 4741 },
	{ -661, 4885 },
	{ -887, 4436 },
	{ -632, 4553 },
	{ -816, 4180 },
	{ -573, 4277 },
	{ -749, 3932 },
	{ -516, 4014 },
	{ -709, 3712 },
	{ -458, 3756 },
	{ -672, 3478 },
	{ -400, 3477 },
	{ -629, 3200 },
	{ -372, 3199 },
	{ -589, 2895 },
	{ -344, 2899 },
	{ -541, 2651 },
	{ -316, 2658 },
	{ -494, 2408 },
	{ -286, 2377 },
	{ -458, 2164 },
	{ -238, 2125 },
	{ -422, 1912 },
	{ -189, 1879 },
	{ -384, 1615 },
	{ -139, 1539 },
	{ -348, 1288 },
	{ -90, 1189 },
	{ -266, 832 },
	{ 0, 724 },
	{ -185, 322 },
	{ 89, 221 },
	{ -689, 5259 },
	{ -737, 5744 },
	{ -1004, 5399 },
	{ -1020, 5247 },
	{ 79, 7492 },
	{ 163, 7979 },
	{ 72, 7905 },
	{ 246, 8478 },
	{ 65, 8381 },
	{ 246, 8996 },
	{ 41, 8932 },
	{ 246, 9560 },
	{ 17, 9541 },
	{ 198, 10136 },
	{ -37, 10172 },
	{ 150, 10725 },
	{ -91, 10752 },
	{ 119, 11219 },
	{ -138, 11297 },
	{ 89, 11694 },
	{ -185, 11796 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0003ACFC[] = {
	{ 254, 229 },
	{ 0, 220 },
	{ 254, -260 },
	{ 1, 252 },
	{ 252, -255 },
	{ 1, -253 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0003AD14[] = {
	{ 0, -255 },
	{ 0, 255 },
	{ 1267, -255 },
	{ 10200, -255 },
	{ 10200, 255 },
	{ 10038, -255 },
	{ 9886, 255 },
	{ 9868, -255 },
	{ 9578, 255 },
	{ 9726, -255 },
	{ 9303, 255 },
	{ 9559, -255 },
	{ 9036, 255 },
	{ 9383, -255 },
	{ 8794, 255 },
	{ 9208, -255 },
	{ 8539, 255 },
	{ 8975, -255 },
	{ 8230, 255 },
	{ 8733, -255 },
	{ 7895, 255 },
	{ 8532, -255 },
	{ 7623, 255 },
	{ 8330, -255 },
	{ 7355, 255 },
	{ 8117, -255 },
	{ 7081, 255 },
	{ 7904, -255 },
	{ 6810, 255 },
	{ 7616, -255 },
	{ 6481, 255 },
	{ 7330, -255 },
	{ 6140, 255 },
	{ 6882, -255 },
	{ 5687, 255 },
	{ 6439, -255 },
	{ 5221, 255 },
	{ 5882, -255 },
	{ 4743, 255 },
	{ 5346, -255 },
	{ 4271, 255 },
	{ 4849, -255 },
	{ 3775, 255 },
	{ 4387, -255 },
	{ 3250, 255 },
	{ 3835, -255 },
	{ 2745, 255 },
	{ 3315, -255 },
	{ 2279, 255 },
	{ 2786, -255 },
	{ 1824, 255 },
	{ 2237, -255 },
	{ 1362, 255 },
	{ 1751, -255 },
	{ 1025, 255 },
	{ 1267, -255 },
	{ 677, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0003ADFC[] = {
	{ 4315, 0 },
	{ 5100, 0 },
	{ 5100, 255 },
	{ 0 },
	{ 0, 255 },
	{ 94, 0 },
	{ 73, 255 },
	{ 188, 0 },
	{ 159, 255 },
	{ 316, 0 },
	{ 249, 255 },
	{ 444, 0 },
	{ 338, 255 },
	{ 552, 0 },
	{ 460, 255 },
	{ 657, 0 },
	{ 585, 255 },
	{ 772, 0 },
	{ 689, 255 },
	{ 891, 0 },
	{ 792, 255 },
	{ 988, 0 },
	{ 904, 255 },
	{ 1085, 0 },
	{ 1015, 255 },
	{ 1240, 0 },
	{ 1163, 255 },
	{ 1394, 0 },
	{ 1311, 255 },
	{ 1650, 0 },
	{ 1543, 255 },
	{ 1906, 0 },
	{ 1769, 255 },
	{ 2185, 0 },
	{ 2057, 255 },
	{ 2454, 0 },
	{ 2336, 255 },
	{ 2693, 0 },
	{ 2592, 255 },
	{ 2936, 0 },
	{ 2832, 255 },
	{ 3154, 0 },
	{ 3117, 255 },
	{ 3340, 0 },
	{ 3384, 255 },
	{ 3587, 0 },
	{ 3659, 255 },
	{ 3843, 0 },
	{ 3940, 255 },
	{ 4083, 0 },
	{ 4194, 255 },
	{ 4315, 0 },
	{ 4442, 255 },
	{ 5100, 255 },
	{ 972, 255 },
	{ 510, 0 },
	{ 474, 255 },
	{ 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 992, 0 },
	{ 972, 255 },
	{ 1290, 0 },
	{ 1256, 255 },
	{ 1585, 0 },
	{ 1543, 255 },
	{ 1840, 0 },
	{ 1791, 255 },
	{ 2087, 0 },
	{ 2039, 255 },
	{ 2326, 0 },
	{ 2257, 255 },
	{ 2584, 0 },
	{ 2492, 255 },
	{ 2851, 0 },
	{ 2741, 255 },
	{ 3139, 0 },
	{ 3011, 255 },
	{ 3373, 0 },
	{ 3223, 255 },
	{ 3647, 0 },
	{ 3474, 255 },
	{ 3898, 0 },
	{ 3710, 255 },
	{ 4144, 0 },
	{ 3939, 255 },
	{ 4480, 0 },
	{ 4262, 255 },
	{ 4817, 0 },
	{ 4587, 255 },
	{ 5264, 0 },
	{ 5017, 255 },
	{ 5727, 0 },
	{ 5457, 255 },
	{ 6202, 0 },
	{ 5925, 255 },
	{ 6662, 0 },
	{ 6382, 255 },
	{ 7206, 0 },
	{ 6886, 255 },
	{ 7751, 0 },
	{ 7393, 255 },
	{ 8271, 0 },
	{ 7894, 255 },
	{ 8741, 0 },
	{ 8351, 255 },
	{ 9194, 0 },
	{ 8792, 255 },
	{ 9628, 0 },
	{ 9209, 255 },
	{ 9909, 0 },
	{ 9515, 255 },
	{ 10200, 0 },
	{ 10200, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0003AFC4[] = {
	{ 175, 241 },
	{ 255, 0 },
	{ 0, 254 },
	{ 10, 10 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0003AFD4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0003A924, NULL, NULL, NULL, uv_0003AB74, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_0003A972, NULL, NULL, NULL, uv_0003AC08, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0003A9F4, NULL, NULL, NULL, uv_0003ACFC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_0003AA04, NULL, NULL, NULL, uv_0003AD14, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 4, poly_0003AA7C, NULL, NULL, NULL, uv_0003ADFC, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_0003AB68, NULL, NULL, NULL, uv_0003AFC4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0003B064[] = {
	{ -82.23206f, -0.460002f, 27.32286f },
	{ -103.5105f, 0.059998f, 75.88502f },
	{ -77.1086f, 15.06001f, 93.2028f },
	{ -41.69389f, 6.400005f, 34.14511f },
	{ -46.43947f, 0.059998f, 111.1013f },
	{ -25.88635f, 11.40001f, 37.63473f },
	{ 9.32373f, 0.059998f, 128.4229f },
	{ 7.096558f, 11.40001f, 119.874f },
	{ -8.499022f, 15.02019f, 34.80829f },
	{ 71.71478f, 0.059998f, 110.5206f },
	{ 65.91155f, 11.40001f, 104.874f },
	{ 4.185852f, 18.98584f, 29.09112f },
	{ 115.397f, 0.059998f, 57.70057f },
	{ 108.4102f, 16.40001f, 53.41568f },
	{ 13.43823f, 24.50299f, 16.01512f },
	{ 16.37781f, 32.01969f, -1.968277f },
	{ 28.857f, 0.059998f, -93.78646f },
	{ 7.234955f, 45.17011f, -32.80477f },
	{ -36.09184f, 0.059998f, -80.95139f },
	{ -5.248291f, 54.51785f, -34.3952f },
	{ -78.28051f, 0.059998f, -32.51744f },
	{ -10.68964f, 66.66424f, -25.48614f },
	{ -21.69385f, 5.060009f, 29.14511f },
	{ -68.71355f, 57.05761f, -31.96209f },
	{ -34.46491f, 45.00618f, -78.32521f },
	{ 27.90219f, 39.13579f, -91.99402f },
	{ 117.0587f, 0.059998f, -5.076965f },
	{ 107.3548f, 19.54058f, -4.086761f },
	{ -11.3205f, 75.25007f, -22.38504f },
	{ -11.3205f, 77.15006f, 13.31493f },
	{ -62.62176f, 60.01949f, 3.738068f },
	{ -73.78912f, 0.058594f, 8.109589f },
	{ -38.14415f, 62.48769f, 20.55745f },
	{ -44.31094f, 2.559982f, 31.72781f },
	{ -16.18332f, 71.05112f, -26.87884f },
	{ 87.97617f, 33.80084f, -4.728821f },
	{ 10.45142f, 52.63063f, -43.48105f },
	{ 36.46905f, 34.21399f, -4.253998f },
	{ 31.87675f, 30.76169f, 22.47417f },
	{ 17.23296f, 24.60938f, 41.10862f },
	{ -4.773693f, 21.76953f, 49.27441f },
	{ -32.60219f, 20.02f, 48.69286f },
	{ 2.967163f, 20.77344f, 98.10516f },
	{ 50.33118f, 23.3086f, 82.91997f },
	{ 84.37415f, 28.94141f, 43.57864f },
	{ -11.41071f, 62.34001f, -41.99018f },
	{ -51.94f, 73.89932f, -0.633438f },
	{ -58.36444f, 70.26536f, -31.37478f },
	{ -33.31428f, 59.09422f, -75.56951f },
	{ 24.7764f, 49.84755f, -84.97343f },
	{ 15.08618f, 35.90935f, -19.92603f },
	{ 86.96596f, 28.88574f, -55.25859f },
	{ 93.08797f, 0.059998f, -59.50585f },
	{ 72.05611f, 42.36328f, -48.29515f },
	{ 28.18728f, 41.8138f, -26.29736f },
	{ -31.87669f, 76.38098f, 12.66493f },
	{ -56.50509f, 14.54001f, 40.86766f },
	{ -43.9162f, 20.06f, 102.7132f },
	{ 0.743347f, 49.84398f, -35.35f },
	{ 0.320374f, 57.31827f, -45.13563f },
	{ -2.499908f, 54.88467f, -86.38707f },
	{ -3.186843f, 42.07097f, -90.99255f },
	{ -3.003142f, 0.059998f, -93.2927f },
	{ -17.13119f, 66.82998f, -35.64712f },
	{ -8.868958f, 61.53899f, -29.54065f },
	{ -49.93938f, 63.1422f, -56.72219f },
	{ -58.21388f, 51.03191f, -60.02436f },
	{ -62.28898f, 0.059998f, -63.25509f },
	{ 11.11056f, 40.53972f, -29.11542f },
	{ 19.81934f, 47.22222f, -38.58923f },
	{ 50.66522f, 46.10543f, -74.88019f },
	{ 56.73089f, 34.01078f, -82.94906f },
	{ 61.15673f, 0.059998f, -88.77801f },
	{ -11.44995f, 49.21596f, 19.95412f },
	{ -43.00354f, 47.30838f, 26.68422f },
	{ -69.70158f, 43.25145f, 6.279493f },
	{ -74.058f, 39.34732f, -31.9639f },
	{ -35.15005f, 29.41388f, -79.45916f },
	{ -2.938813f, 24.93526f, -92.51168f },
	{ 28.46192f, 22.06182f, -92.77206f },
	{ 58.92669f, 17.16696f, -85.84093f },
	{ 91.91768f, 12.5025f, -57.26906f },
	{ -59.94046f, 31.26053f, -61.17667f },
	{ -68.58755f, 3.731406f, 22.71637f },
	{ 69.59026f, 26.125f, 64.20827f },
	{ 24.89582f, 27.68553f, 33.81842f },
	{ 10.41034f, 21.74442f, 23.5121f },
	{ 89.49384f, 13.90001f, 81.89281f },
	{ 95.88886f, 0.059998f, 86.85858f },
	{ 39.87994f, 0.059998f, 122.6683f },
	{ 35.86474f, 11.40001f, 115.5705f },
	{ 26.32951f, 22.04102f, 92.4305f },
	{ 5.830462f, 23.18946f, 46.24375f },
	{ -2.476244f, 17.00302f, 32.58902f },
	{ -16.87303f, 13.2101f, 37.50015f },
	{ -18.14368f, 20.91477f, 51.24984f },
	{ -20.15486f, 20.41672f, 101.6878f },
	{ -19.36879f, 15.73001f, 112.2526f },
	{ -19.8365f, 0.059998f, 121.3604f },
	{ -60.83207f, 17.56001f, 99.87594f },
	{ -65.38524f, 0.059998f, 102.4436f },
	{ -44.8479f, 17.52001f, 45.00266f },
	{ -34.10978f, 8.900007f, 36.52924f },
	{ 15.54734f, 28.26134f, 7.343081f },
	{ 35.30479f, 32.48784f, 10.40025f },
	{ 88.0931f, 31.37113f, 19.74457f },
	{ 118.1458f, 0.059998f, 26.63146f },
	{ 109.8004f, 17.9703f, 24.98412f },
	{ -14.28826f, 73.15395f, -24.92522f },
	{ 32.64783f, 38.0139f, -15.27568f },
	{ 81.29476f, 38.08207f, -27.47096f },
	{ 98.43899f, 24.21316f, -30.63165f },
	{ 105.7668f, 6.281251f, -32.13199f },
	{ 106.3519f, 0.059998f, -33.25038f },
	{ 78.08132f, 0.059998f, -75.42056f },
	{ 76.38116f, 14.83473f, -72.83363f },
	{ 72.8074f, 31.44826f, -70.38245f },
	{ 62.31965f, 44.23436f, -62.86631f },
	{ 24.96229f, 44.51801f, -33.08262f },
	{ 13.09837f, 38.22454f, -24.52072f },
	{ 9.172759f, 42.85492f, -30.96009f },
	{ 15.13538f, 49.92643f, -41.03514f },
	{ 37.72081f, 47.97649f, -79.9268f },
	{ 42.6362f, 36.57328f, -88.11085f },
	{ 44.01397f, 19.61439f, -89.94581f },
	{ 45.32653f, 0.059998f, -91.92155f },
	{ 11.64829f, 0.059998f, -94.49855f },
	{ 11.48292f, 23.49854f, -93.60084f },
	{ 11.07904f, 40.60338f, -92.45226f },
	{ 11.13825f, 52.36611f, -85.68024f },
	{ 5.385896f, 54.97445f, -44.30834f },
	{ 3.989151f, 47.50705f, -34.07739f },
	{ -2.252471f, 52.18092f, -34.8726f },
	{ -5.864825f, 59.75211f, -44.52188f },
	{ -19.18573f, 56.98945f, -82.25693f },
	{ -20.10451f, 43.53857f, -85.93751f },
	{ -20.32306f, 27.17457f, -87.26405f },
	{ -20.82612f, 0.059998f, -88.40068f },
	{ -50.46905f, 0.059998f, -72.74255f },
	{ -48.82389f, 30.33721f, -70.95723f },
	{ -47.61803f, 48.01905f, -69.81409f },
	{ -42.90547f, 61.11821f, -66.78517f },
	{ -14.27095f, 64.50796f, -38.81865f },
	{ -7.058624f, 58.02842f, -31.96792f },
	{ -9.779297f, 64.10162f, -27.5134f },
	{ -17.83292f, 68.94391f, -31.55626f },
	{ -56.06986f, 66.70377f, -45.00747f },
	{ -65.38168f, 54.04476f, -46.95221f },
	{ -68.91719f, 35.30392f, -47.52926f },
	{ -72.2027f, 0.059998f, -48.84525f },
	{ -77.95276f, 0.059296f, -11.88427f },
	{ -73.79773f, 41.29939f, -12.52254f },
	{ -67.5856f, 58.53855f, -13.79235f },
	{ -57.07018f, 72.08233f, -15.68445f },
	{ -11.00507f, 70.95715f, -23.93559f },
	{ 16.69097f, 33.96452f, -10.94715f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0003B7B4[] = {
	{ -0.260495f, 0.9414549f, -0.214021f },
	{ -0.515084f, 0.856019f, 0.043821f },
	{ -0.564774f, 0.6517839f, 0.50617f },
	{ 0.04221f, 0.798485f, -0.6005329f },
	{ -0.302874f, 0.400843f, 0.864634f },
	{ -0.0325f, 0.778604f, -0.626673f },
	{ -0.000192f, 0.601954f, 0.798531f },
	{ -0.00175f, 0.7649f, 0.644147f },
	{ -0.240495f, 0.90188f, -0.358851f },
	{ 0.439758f, 0.570457f, 0.69368f },
	{ 0.322969f, 0.748002f, 0.579814f },
	{ -0.315084f, 0.9438249f, -0.09958f },
	{ 0.840354f, 0.44171f, 0.314161f },
	{ 0.678642f, 0.682956f, 0.270213f },
	{ -0.357268f, 0.925908f, 0.122698f },
	{ -0.07736699f, 0.965872f, 0.247198f },
	{ 0.098256f, 0.047594f, -0.994022f },
	{ 0.222573f, 0.76638f, 0.602597f },
	{ -0.478987f, 0.059889f, -0.875776f },
	{ 0.644961f, 0.72943f, 0.22794f },
	{ -0.979814f, 0.107681f, -0.168432f },
	{ 0.5835f, 0.537421f, -0.608857f },
	{ 0.096403f, 0.145137f, 0.984704f },
	{ -0.876705f, 0.456475f, -0.151717f },
	{ -0.490506f, 0.14329f, -0.859576f },
	{ 0.190538f, 0.328646f, -0.925034f },
	{ 0.8918779f, 0.428341f, -0.145182f },
	{ 0.770825f, 0.631921f, -0.080652f },
	{ 0.082849f, 0.925159f, -0.370429f },
	{ 0.014015f, 0.836806f, 0.5473199f },
	{ -0.715569f, 0.5252849f, 0.460475f },
	{ -0.854903f, 0.105902f, 0.507864f },
	{ -0.241629f, 0.441146f, 0.8642949f },
	{ -0.30852f, 0.13033f, 0.942247f },
	{ 0.30015f, 0.821772f, -0.484355f },
	{ 0.344548f, 0.935971f, 0.072422f },
	{ 0.256388f, 0.91857f, 0.300824f },
	{ -0.028386f, 0.977821f, 0.207509f },
	{ -0.177273f, 0.974986f, 0.134078f },
	{ -0.197004f, 0.98023f, 0.018388f },
	{ -0.147545f, 0.9757529f, -0.161669f },
	{ -0.071729f, 0.941852f, -0.328284f },
	{ 0.00006f, 0.976191f, 0.216913f },
	{ 0.064193f, 0.965035f, 0.25414f },
	{ 0.212457f, 0.959403f, 0.185494f },
	{ 0.42144f, 0.90579f, -0.043959f },
	{ -0.450124f, 0.862259f, 0.23216f },
	{ -0.445071f, 0.869579f, -0.21388f },
	{ -0.24632f, 0.704298f, -0.665801f },
	{ 0.249849f, 0.846965f, -0.469281f },
	{ -0.214225f, 0.895728f, 0.389588f },
	{ 0.730719f, 0.554067f, -0.398823f },
	{ 0.799567f, 0.178302f, -0.573499f },
	{ 0.366891f, 0.929554f, -0.036332f },
	{ -0.059627f, 0.9519269f, 0.300465f },
	{ -0.186209f, 0.860589f, 0.474038f },
	{ -0.142196f, 0.948278f, -0.283811f },
	{ -0.218688f, 0.848449f, 0.481986f },
	{ 0.34344f, 0.753468f, 0.560656f },
	{ 0.312651f, 0.921671f, 0.229721f },
	{ 0.058463f, 0.772036f, -0.632884f },
	{ -0.139876f, 0.21364f, -0.9668469f },
	{ -0.176666f, 0.031345f, -0.983772f },
	{ 0.340661f, 0.890755f, -0.300842f },
	{ 0.653506f, 0.706255f, -0.272275f },
	{ -0.306068f, 0.826347f, -0.472729f },
	{ -0.707665f, 0.337941f, -0.6204889f },
	{ -0.735018f, 0.09999999f, -0.670633f },
	{ -0.01719f, 0.824421f, 0.565716f },
	{ 0.111729f, 0.931097f, 0.347239f },
	{ 0.368626f, 0.872948f, -0.319495f },
	{ 0.487438f, 0.426846f, -0.761713f },
	{ 0.436226f, 0.207206f, -0.875655f },
	{ 0.104651f, 0.217394f, 0.970458f },
	{ -0.282058f, 0.248782f, 0.92658f },
	{ -0.823554f, 0.260508f, 0.503879f },
	{ -0.966894f, 0.199318f, -0.15934f },
	{ -0.485153f, 0.072543f, -0.871415f },
	{ -0.177584f, 0.057651f, -0.982416f },
	{ 0.118207f, 0.048652f, -0.991796f },
	{ 0.451294f, 0.207828f, -0.867837f },
	{ 0.809186f, 0.243718f, -0.5346209f },
	{ -0.744519f, 0.101635f, -0.65982f },
	{ 0.02271f, 0.960401f, -0.277694f },
	{ 0.117412f, 0.96211f, 0.246087f },
	{ -0.210584f, 0.972483f, 0.099659f },
	{ -0.37325f, 0.92663f, 0.045179f },
	{ 0.492054f, 0.732727f, 0.4701f },
	{ 0.649753f, 0.517257f, 0.5570149f },
	{ 0.219667f, 0.576306f, 0.787158f },
	{ 0.157179f, 0.767939f, 0.6209379f },
	{ 0.018736f, 0.972043f, 0.234056f },
	{ -0.164141f, 0.982259f, -0.090693f },
	{ -0.277901f, 0.922941f, -0.266365f },
	{ -0.115835f, 0.8599589f, -0.497045f },
	{ -0.06797899f, 0.970219f, -0.232493f },
	{ -0.003022f, 0.977065f, 0.212918f },
	{ -0.119345f, 0.7376519f, 0.664549f },
	{ -0.230199f, 0.496744f, 0.836812f },
	{ -0.363252f, 0.754025f, 0.547261f },
	{ -0.436075f, 0.146097f, 0.887972f },
	{ -0.08127099f, 0.916488f, -0.391719f },
	{ -0.006313f, 0.743591f, -0.668605f },
	{ -0.232714f, 0.9555269f, 0.181143f },
	{ -0.103904f, 0.983924f, 0.145249f },
	{ 0.281471f, 0.955277f, 0.090669f },
	{ 0.9037139f, 0.42769f, 0.019531f },
	{ 0.739303f, 0.6718f, 0.045996f },
	{ 0.216118f, 0.791734f, -0.571358f },
	{ -0.051145f, 0.962504f, 0.266404f },
	{ 0.363284f, 0.929778f, 0.059472f },
	{ 0.77374f, 0.597801f, -0.209668f },
	{ 0.894995f, 0.274712f, -0.35145f },
	{ 0.901909f, 0.157155f, -0.402321f },
	{ 0.658371f, 0.200391f, -0.7255279f },
	{ 0.663166f, 0.228816f, -0.712638f },
	{ 0.635964f, 0.498015f, -0.589518f },
	{ 0.378492f, 0.908556f, -0.176832f },
	{ -0.000273f, 0.9528739f, 0.303366f },
	{ -0.145733f, 0.866209f, 0.477958f },
	{ 0.159928f, 0.754787f, 0.636176f },
	{ 0.205763f, 0.907465f, 0.366291f },
	{ 0.313963f, 0.881201f, -0.353429f },
	{ 0.323167f, 0.378976f, -0.8671449f },
	{ 0.237267f, 0.125003f, -0.963368f },
	{ 0.1963f, 0.124217f, -0.972644f },
	{ -0.014804f, 0.039283f, -0.999118f },
	{ -0.016634f, 0.052053f, -0.9985059f },
	{ 0.021543f, 0.267978f, -0.963184f },
	{ 0.18405f, 0.826139f, -0.53256f },
	{ 0.281874f, 0.912617f, 0.296104f },
	{ 0.27537f, 0.755596f, 0.594345f },
	{ 0.48165f, 0.740605f, 0.468528f },
	{ 0.343072f, 0.9306369f, 0.127341f },
	{ -0.113642f, 0.748275f, -0.653583f },
	{ -0.345234f, 0.181735f, -0.9207529f },
	{ -0.365601f, 0.064636f, -0.928525f },
	{ -0.363051f, 0.045528f, -0.930656f },
	{ -0.575992f, 0.07985f, -0.8135459f },
	{ -0.5840589f, 0.086565f, -0.807082f },
	{ -0.590942f, 0.234214f, -0.771966f },
	{ -0.283945f, 0.775668f, -0.563662f },
	{ 0.428816f, 0.883097f, -0.190411f },
	{ 0.7329569f, 0.6753809f, -0.081446f },
	{ 0.651176f, 0.646827f, -0.396969f },
	{ 0.323696f, 0.872925f, -0.364997f },
	{ -0.391965f, 0.8372689f, -0.38124f },
	{ -0.8153729f, 0.399113f, -0.419376f },
	{ -0.885821f, 0.141847f, -0.441815f },
	{ -0.883674f, 0.10308f, -0.456613f },
	{ -0.988822f, 0.104226f, 0.106625f },
	{ -0.968689f, 0.225458f, 0.103974f },
	{ -0.865968f, 0.491571f, 0.091964f },
	{ -0.482713f, 0.87455f, -0.046365f },
	{ 0.470462f, 0.330959f, -0.818005f },
	{ -0.147387f, 0.939476f, 0.309291f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0003BF04 = { vertex_0003B064, normal_0003B7B4, LengthOfArray(vertex_0003B064), meshlist_0003AFD4, matlist_0003A8AC, LengthOfArray(meshlist_0003AFD4), LengthOfArray(matlist_0003A8AC),{ 7.317646f, 38.34503f, 16.96218f }, 157.1826f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0003BF2C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0003BF04, -372.6987f, 0, 145.126f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0003BF60[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0003BF9C[] = {
	6, 1, 5, 6, 9, 10, 14,
	3, 6, 2, 1,
	4, 9, 13, 14, 17,
	0x8000u | 12, 14, 18, 17, 22, 21, 26, 25, 30, 29, 34, 33, 37,
	6, 32, 28, 31, 24, 27, 20,
	0x8000u | 13, 27, 23, 20, 19, 16, 15, 12, 11, 8, 7, 4, 3, 0,
	6, 31, 35, 32, 39, 36, 43,
	4, 41, 38, 37, 34,
	0x8000u | 10, 77, 73, 74, 115, 116, 45, 46, 41, 42, 38,
	4, 91, 84, 87, 80,
	0x8000u | 13, 74, 78, 77, 82, 81, 86, 85, 90, 89, 94, 93, 98, 97,
	0x8000u | 14, 87, 83, 80, 79, 76, 75, 72, 117, 114, 47, 44, 43, 40, 36,
	0x8000u | 6, 84, 88, 91, 92, 95, 99,
	3, 99, 96, 92
};

extern "C" __declspec(dllexport) Sint16 poly_0003C088[] = {
	26, 1, 50, 5, 51, 9, 53, 13, 57, 17, 59, 21, 62, 25, 66, 29, 69, 33, 71, 37, 64, 41, 70, 45, 61, 115, 119,
	26, 49, 0, 52, 4, 54, 8, 56, 12, 60, 16, 63, 20, 65, 24, 68, 28, 48, 32, 55, 36, 67, 40, 58, 44, 118, 114,
	16, 115, 119, 73, 101, 77, 103, 81, 104, 85, 109, 89, 106, 93, 111, 97, 107,
	16, 96, 108, 92, 112, 88, 113, 84, 110, 80, 105, 76, 102, 72, 100, 114, 118
};

extern "C" __declspec(dllexport) Sint16 poly_0003C138[] = {
	40, 108, 107, 112, 111, 113, 106, 110, 109, 105, 104, 102, 103, 100, 101, 118, 119, 58, 61, 67, 70, 55, 64, 48, 71, 68, 69, 65, 66, 63, 62, 60, 59, 56, 57, 54, 53, 52, 51, 49, 50
};

extern "C" __declspec(dllexport) NJS_TEX uv_0003C18C[] = {
	{ 0, -1020 },
	{ 184, -1020 },
	{ 173, 254 },
	{ 310, -908 },
	{ 316, 247 },
	{ 478, 247 },
	{ 173, 254 },
	{ 0, 254 },
	{ 0, -1020 },
	{ 310, -908 },
	{ 482, -528 },
	{ 478, 247 },
	{ 613, -268 },
	{ 478, 247 },
	{ 605, 244 },
	{ 613, -268 },
	{ 705, 245 },
	{ 705, -112 },
	{ 924, 251 },
	{ 920, -20 },
	{ 1201, 254 },
	{ 1179, -79 },
	{ 1440, 252 },
	{ 1431, -135 },
	{ 1714, -348 },
	{ 1431, -133 },
	{ 1179, -77 },
	{ 1177, 254 },
	{ 920, -18 },
	{ 900, 251 },
	{ 705, -110 },
	{ 900, 251 },
	{ 705, 245 },
	{ 705, -110 },
	{ 605, 244 },
	{ 613, -266 },
	{ 444, 247 },
	{ 482, -525 },
	{ 258, 247 },
	{ 310, -908 },
	{ 173, 254 },
	{ 184, -1016 },
	{ 0, 254 },
	{ 0, -1016 },
	{ 1177, 254 },
	{ 1450, 252 },
	{ 1431, -133 },
	{ 1752, 245 },
	{ 1714, -344 },
	{ 1992, 246 },
	{ 1958, -605 },
	{ 1752, 245 },
	{ 1714, -348 },
	{ 1440, 252 },
	{ 2518, -358 },
	{ 2358, -697 },
	{ 2354, 254 },
	{ 2233, -712 },
	{ 2199, 254 },
	{ 2103, -713 },
	{ 2086, 254 },
	{ 1958, -605 },
	{ 1959, 246 },
	{ 1752, 245 },
	{ 2989, 254 },
	{ 2825, 74 },
	{ 2806, 251 },
	{ 2644, -142 },
	{ 2354, 254 },
	{ 2511, 251 },
	{ 2518, -358 },
	{ 2644, 253 },
	{ 2644, -142 },
	{ 2822, 251 },
	{ 2825, 74 },
	{ 2983, 254 },
	{ 2991, 114 },
	{ 3122, 252 },
	{ 3117, 120 },
	{ 3263, 252 },
	{ 3267, 112 },
	{ 2806, 251 },
	{ 2646, 253 },
	{ 2644, -142 },
	{ 2515, 251 },
	{ 2518, -358 },
	{ 2324, 250 },
	{ 2358, -697 },
	{ 2233, 254 },
	{ 2233, -712 },
	{ 2119, 254 },
	{ 2103, -709 },
	{ 1992, 246 },
	{ 1958, -605 },
	{ 1714, -344 },
	{ 2825, 74 },
	{ 2991, 114 },
	{ 2989, 254 },
	{ 3117, 120 },
	{ 3137, 252 },
	{ 3315, 252 },
	{ 3315, 252 },
	{ 3267, 112 },
	{ 3117, 120 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0003C32C[] = {
	{ 0 },
	{ 0, 255 },
	{ 1920, 0 },
	{ 1920, 255 },
	{ 3346, 0 },
	{ 3346, 255 },
	{ 5898, 0 },
	{ 5898, 255 },
	{ 7745, 0 },
	{ 7745, 255 },
	{ 8961, 0 },
	{ 8961, 255 },
	{ 11247, 0 },
	{ 11247, 255 },
	{ 13955, 0 },
	{ 13955, 255 },
	{ 16586, 0 },
	{ 16586, 255 },
	{ 19729, 0 },
	{ 19729, 255 },
	{ 22533, 0 },
	{ 22533, 255 },
	{ 24135, 0 },
	{ 24135, 255 },
	{ 25500, 0 },
	{ 25500, 255 },
	{ 25500, 255 },
	{ 25500, 0 },
	{ 23577, 255 },
	{ 23577, 0 },
	{ 22153, 255 },
	{ 22153, 0 },
	{ 19599, 255 },
	{ 19599, 0 },
	{ 17750, 255 },
	{ 17750, 0 },
	{ 16538, 255 },
	{ 16538, 0 },
	{ 14250, 255 },
	{ 14250, 0 },
	{ 11542, 255 },
	{ 11542, 0 },
	{ 8911, 255 },
	{ 8911, 0 },
	{ 5769, 255 },
	{ 5769, 0 },
	{ 2964, 255 },
	{ 2964, 0 },
	{ 1362, 255 },
	{ 1362, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ 2727, 0 },
	{ 2727, 255 },
	{ 7643, 0 },
	{ 7643, 255 },
	{ 11184, 0 },
	{ 11184, 255 },
	{ 15769, 0 },
	{ 15769, 255 },
	{ 19398, 0 },
	{ 19398, 255 },
	{ 22183, 0 },
	{ 22183, 255 },
	{ 25500, 0 },
	{ 25500, 255 },
	{ 0 },
	{ 0, 255 },
	{ 3315, 0 },
	{ 3315, 255 },
	{ 6097, 0 },
	{ 6096, 255 },
	{ 9728, 0 },
	{ 9727, 255 },
	{ 14313, 0 },
	{ 14312, 255 },
	{ 17854, 0 },
	{ 17855, 255 },
	{ 22770, 0 },
	{ 22771, 255 },
	{ 25500, 0 },
	{ 25500, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0003C47C[] = {
	{ 15084, -685 },
	{ 15084, 254 },
	{ 14387, -685 },
	{ 14387, 254 },
	{ 13802, -685 },
	{ 13802, 254 },
	{ 13043, -685 },
	{ 13043, 254 },
	{ 12195, -704 },
	{ 12195, 254 },
	{ 11612, -685 },
	{ 11612, 254 },
	{ 10878, -685 },
	{ 10878, 254 },
	{ 10304, -685 },
	{ 10304, 254 },
	{ 9697, -684 },
	{ 9697, 254 },
	{ 9023, -684 },
	{ 9023, 254 },
	{ 7905, -684 },
	{ 7905, 254 },
	{ 6586, -684 },
	{ 6586, 254 },
	{ 5420, -684 },
	{ 5420, 254 },
	{ 4226, -684 },
	{ 4226, 254 },
	{ 3228, -684 },
	{ 3228, 254 },
	{ 2805, -684 },
	{ 2805, 254 },
	{ 2198, -684 },
	{ 2198, 254 },
	{ 1409, -692 },
	{ 1409, 254 },
	{ 820, -737 },
	{ 820, 254 },
	{ -10, -765 },
	{ -10, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0003C51C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 14, poly_0003BF9C, NULL, NULL, NULL, uv_0003C18C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_0003C088, NULL, NULL, NULL, uv_0003C32C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0003C138, NULL, NULL, NULL, uv_0003C47C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0003C564[] = {
	{ -200.4201f, 85.54134f, 161.8187f },
	{ -200.4201f, 85.68133f, 120.7452f },
	{ -200.4201f, 0.060001f, 120.7452f },
	{ -200.4201f, 0.060001f, 165.2787f },
	{ -173.5089f, 85.54134f, 160.3187f },
	{ -173.5089f, 85.68133f, 120.7452f },
	{ -175.1317f, 0.060001f, 112.2587f },
	{ -175.1317f, 0.060001f, 167.1587f },
	{ -154.9785f, 78.21674f, 158.7387f },
	{ -154.9785f, 78.35673f, 120.7452f },
	{ -154.1822f, 0.490147f, 102.2587f },
	{ -162.7822f, 0.49015f, 167.1587f },
	{ -130.1267f, 52.51476f, 158.4387f },
	{ -130.1267f, 52.65476f, 120.7452f },
	{ -130.714f, 0.545242f, 102.2587f },
	{ -135.714f, 0.545242f, 168.4387f },
	{ -111.0203f, 35.09998f, 158.4387f },
	{ -111.0203f, 35.23998f, 120.7452f },
	{ -112.0203f, 0.700005f, 107.2587f },
	{ -112.0203f, 0.700008f, 178.4387f },
	{ -97.68945f, 24.55677f, 158.4387f },
	{ -97.68945f, 24.69677f, 120.7452f },
	{ -97.63137f, 0.663219f, 112.2587f },
	{ -97.63137f, 0.663223f, 183.4387f },
	{ -66.26528f, 18.38312f, 158.4387f },
	{ -66.26528f, 18.52309f, 120.7452f },
	{ -65.49551f, 0.216888f, 119.3187f },
	{ -68.97555f, 0.216888f, 173.4387f },
	{ -28.60289f, 22.34604f, 158.4387f },
	{ -28.60289f, 22.48604f, 120.7452f },
	{ -25.39789f, 0.01395f, 119.3187f },
	{ -28.87793f, 0.01395f, 173.4387f },
	{ 8.05423f, 26.11093f, 158.4387f },
	{ 8.05423f, 26.25093f, 120.7452f },
	{ 9.411179f, 0.18906f, 119.3187f },
	{ 10.93114f, 0.18906f, 178.4387f },
	{ 49.64315f, 40.39051f, 158.4387f },
	{ 49.64315f, 40.5305f, 120.7452f },
	{ 54.92178f, 0.62949f, 112.2587f },
	{ 54.92178f, 0.62949f, 178.4387f },
	{ 84.80295f, 57.83051f, 158.4387f },
	{ 84.80295f, 57.97051f, 120.7452f },
	{ 85.08157f, 0.5694889f, 107.2587f },
	{ 90.08157f, 0.5694889f, 168.4387f },
	{ 106.0785f, 64.98f, 158.4387f },
	{ 106.0785f, 65.11999f, 120.7452f },
	{ 103.4392f, 0.059998f, 102.2587f },
	{ 108.4392f, 0.060001f, 158.4387f },
	{ 8.05423f, 28.87094f, 155.6068f },
	{ -199.7063f, 88.27887f, 158.441f },
	{ -199.7063f, 88.27887f, 122.741f },
	{ -173.5089f, 88.30135f, 122.7666f },
	{ -173.5089f, 88.30135f, 157.4868f },
	{ -154.9785f, 80.97675f, 122.7666f },
	{ -154.9785f, 80.97675f, 155.9068f },
	{ 49.64315f, 43.15051f, 155.6068f },
	{ -130.1267f, 55.27476f, 155.6068f },
	{ -130.1267f, 55.27476f, 122.7666f },
	{ 106.0785f, 67.74f, 155.6068f },
	{ -111.0203f, 37.86f, 122.7666f },
	{ -111.0203f, 37.86f, 155.6068f },
	{ 106.0785f, 67.74f, 122.7666f },
	{ -97.68945f, 27.31678f, 122.7666f },
	{ -97.68945f, 27.31678f, 155.6068f },
	{ 49.64315f, 43.15051f, 122.7666f },
	{ -66.26528f, 21.14312f, 155.6068f },
	{ -66.26528f, 21.14312f, 122.7666f },
	{ 84.80295f, 60.59051f, 155.6068f },
	{ -28.60289f, 25.10605f, 155.6068f },
	{ -28.60289f, 25.10605f, 122.7666f },
	{ 84.80295f, 60.59051f, 122.7666f },
	{ 8.05423f, 28.87094f, 122.7666f },
	{ 143.2024f, 64.16396f, 158.4387f },
	{ 143.2024f, 64.16396f, 120.7987f },
	{ 142.6151f, 0.025227f, 102.2587f },
	{ 138.2174f, 0.305233f, 162.4147f },
	{ 166.3887f, 41.3292f, 158.4387f },
	{ 166.3887f, 41.3292f, 120.7987f },
	{ 165.3887f, 0.259991f, 107.2587f },
	{ 165.9911f, 0.259995f, 174.5231f },
	{ 184.7597f, 26.72598f, 158.4387f },
	{ 184.7597f, 26.72598f, 120.7987f },
	{ 184.8177f, 0.143215f, 112.2587f },
	{ 185.4202f, 0.143219f, 177.4147f },
	{ 211.4038f, 12.17231f, 158.4387f },
	{ 211.4038f, 12.17231f, 120.7987f },
	{ 210.9936f, 0.216888f, 116.7587f },
	{ 208.6936f, 0.216888f, 173.4387f },
	{ 235.2862f, 9.475235f, 158.4387f },
	{ 235.2862f, 9.475235f, 120.7987f },
	{ 234.5112f, 0.01395f, 115.1587f },
	{ 235.0112f, 0.01395f, 173.4387f },
	{ 253.7103f, 9.060122f, 158.4387f },
	{ 253.7103f, 9.060122f, 120.7987f },
	{ 254.3871f, 0.18906f, 111.8587f },
	{ 256.5871f, 0.18906f, 178.4387f },
	{ 275.6685f, 9.607844f, 158.4387f },
	{ 275.6685f, 9.607844f, 120.7987f },
	{ 274.9472f, 0.157642f, 115.5587f },
	{ 282.4572f, 0.206562f, 172.0387f },
	{ 143.2024f, 66.89475f, 155.6814f },
	{ 143.2024f, 66.89475f, 122.7448f },
	{ 166.3887f, 44.06f, 155.6814f },
	{ 166.3887f, 44.06f, 122.7448f },
	{ 184.7597f, 29.45678f, 122.7448f },
	{ 184.7597f, 29.45678f, 156.3371f },
	{ 235.2862f, 12.20604f, 122.7448f },
	{ 275.6685f, 12.33865f, 122.7448f },
	{ 275.6685f, 12.33865f, 155.6814f },
	{ 211.4038f, 14.90311f, 122.7448f },
	{ 211.4038f, 14.90311f, 155.6814f },
	{ 253.7103f, 11.79093f, 122.7448f },
	{ 253.7103f, 11.79093f, 155.6814f },
	{ 235.2862f, 12.20604f, 155.6814f },
	{ 125.1487f, 65.00919f, 158.4387f },
	{ 125.1487f, 65.00919f, 120.7987f },
	{ 120.1488f, 0.060001f, 107.2587f },
	{ 125.1488f, 0.060001f, 158.4387f },
	{ 125.1487f, 67.74f, 155.6814f },
	{ 125.1487f, 67.74f, 122.7448f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0003CB04[] = {
	{ 0.050778f, 0.409267f, 0.911001f },
	{ -0.180659f, 0.327861f, -0.927291f },
	{ -0.317754f, 0.049936f, -0.946857f },
	{ 0.055554f, 0.05952f, 0.99668f },
	{ 0.151783f, 0.456386f, 0.87674f },
	{ -0.001401f, 0.388997f, -0.9212379f },
	{ -0.341798f, 0.122042f, -0.931815f },
	{ 0.086262f, 0.072357f, 0.993641f },
	{ 0.354171f, 0.416888f, 0.837119f },
	{ 0.241802f, 0.399749f, -0.884156f },
	{ -0.21114f, 0.246345f, -0.945904f },
	{ 0.064514f, 0.122314f, 0.990392f },
	{ 0.357871f, 0.388178f, 0.849262f },
	{ 0.300579f, 0.423632f, -0.854511f },
	{ 0.123776f, 0.307142f, -0.94358f },
	{ -0.120274f, 0.295755f, 0.947662f },
	{ 0.334027f, 0.492886f, 0.803423f },
	{ 0.369241f, 0.439519f, -0.818831f },
	{ 0.271808f, 0.343186f, -0.89908f },
	{ -0.206791f, 0.593262f, 0.7779959f },
	{ 0.25259f, 0.6349109f, 0.730127f },
	{ 0.229314f, 0.430122f, -0.873161f },
	{ 0.25502f, 0.331043f, -0.908502f },
	{ 0.007902999f, 0.72291f, 0.690897f },
	{ 0.039738f, 0.663817f, 0.746839f },
	{ 0.016785f, 0.333292f, -0.942674f },
	{ 0.049253f, 0.128269f, -0.9905159f },
	{ 0.106887f, 0.655688f, 0.747428f },
	{ -0.066442f, 0.639094f, 0.766253f },
	{ -0.033174f, 0.352726f, -0.935138f },
	{ 0, 0.063738f, -0.9979669f },
	{ -0.057679f, 0.5818999f, 0.811213f },
	{ -0.113584f, 0.629912f, 0.768316f },
	{ -0.067462f, 0.328029f, -0.942256f },
	{ -0.043576f, 0.089824f, -0.995004f },
	{ -0.050475f, 0.606567f, 0.793429f },
	{ -0.16195f, 0.526813f, 0.83441f },
	{ -0.173227f, 0.387251f, -0.905554f },
	{ -0.144042f, 0.201875f, -0.968761f },
	{ 0.083701f, 0.490978f, 0.867142f },
	{ -0.187249f, 0.437244f, 0.879634f },
	{ -0.233866f, 0.428234f, -0.8728819f },
	{ -0.205608f, 0.237924f, -0.949272f },
	{ 0.03809f, 0.210425f, 0.976868f },
	{ -0.079813f, 0.432551f, 0.89807f },
	{ -0.035458f, 0.448968f, -0.892844f },
	{ 0.011403f, 0.24054f, -0.970572f },
	{ -0.013034f, 0.038788f, 0.999162f },
	{ -0.203323f, 0.9022599f, 0.380245f },
	{ 0.020765f, 0.924666f, 0.380213f },
	{ -0.000447f, 0.882751f, -0.46984f },
	{ 0.164691f, 0.8931029f, -0.418621f },
	{ 0.189555f, 0.917663f, 0.349233f },
	{ 0.496457f, 0.776217f, -0.388612f },
	{ 0.524803f, 0.791086f, 0.314268f },
	{ -0.363596f, 0.858362f, 0.361957f },
	{ 0.669293f, 0.680497f, 0.298281f },
	{ 0.651785f, 0.6644509f, -0.365623f },
	{ -0.146926f, 0.920572f, 0.361883f },
	{ 0.602332f, 0.701775f, -0.380405f },
	{ 0.618074f, 0.720663f, 0.314052f },
	{ -0.141214f, 0.89353f, -0.42622f },
	{ 0.396897f, 0.8062699f, -0.438636f },
	{ 0.409018f, 0.8354599f, 0.367029f },
	{ -0.352562f, 0.831677f, -0.428968f },
	{ 0.042348f, 0.9200439f, 0.389519f },
	{ 0.040937f, 0.887868f, -0.458274f },
	{ -0.353456f, 0.865737f, 0.354356f },
	{ -0.095822f, 0.9219f, 0.375391f },
	{ -0.092847f, 0.8932829f, -0.439802f },
	{ -0.343257f, 0.841124f, -0.417953f },
	{ -0.196758f, 0.872028f, -0.448166f },
	{ 0.22895f, 0.439374f, 0.868638f },
	{ 0.173136f, 0.44853f, -0.876838f },
	{ 0.003934f, 0.273712f, -0.961804f },
	{ -0.26807f, 0.166811f, 0.9488479f },
	{ 0.28333f, 0.416306f, 0.863952f },
	{ 0.34795f, 0.403998f, -0.846f },
	{ 0.219349f, 0.300663f, -0.9281639f },
	{ -0.17111f, 0.441937f, 0.8805749f },
	{ 0.29359f, 0.557678f, 0.776402f },
	{ 0.278334f, 0.422443f, -0.862596f },
	{ 0.201385f, 0.300495f, -0.9322799f },
	{ 0.010679f, 0.581145f, 0.8137299f },
	{ 0.206359f, 0.723137f, 0.659158f },
	{ 0.114767f, 0.457474f, -0.881786f },
	{ 0.057014f, 0.361323f, -0.930696f },
	{ 0.146443f, 0.709097f, 0.6897359f },
	{ 0.052695f, 0.782607f, 0.620281f },
	{ -0.030927f, 0.551246f, -0.83377f },
	{ -0.09672999f, 0.519112f, -0.849215f },
	{ 0.002109f, 0.853263f, 0.521476f },
	{ -0.001273f, 0.806994f, 0.5905589f },
	{ -0.014672f, 0.608845f, -0.7931539f },
	{ 0.000021f, 0.671522f, -0.740985f },
	{ 0.005322f, 0.9143839f, 0.404813f },
	{ -0.019259f, 0.772118f, 0.635188f },
	{ -0.013356f, 0.535458f, -0.844456f },
	{ 0.03266f, 0.563702f, -0.825333f },
	{ 0.040812f, 0.874611f, 0.483104f },
	{ 0.358913f, 0.869326f, 0.339786f },
	{ 0.348544f, 0.843452f, -0.408785f },
	{ 0.633501f, 0.7041039f, 0.320803f },
	{ 0.614761f, 0.682821f, -0.394746f },
	{ 0.509239f, 0.749487f, -0.423018f },
	{ 0.521047f, 0.766443f, 0.375599f },
	{ 0.060314f, 0.884316f, -0.462976f },
	{ -0.022205f, 0.890205f, -0.455019f },
	{ -0.023083f, 0.92542f, 0.37824f },
	{ 0.278225f, 0.8383369f, -0.468808f },
	{ 0.285959f, 0.8713689f, 0.398678f },
	{ -0.001075f, 0.887447f, -0.460908f },
	{ -0.001119f, 0.923961f, 0.382486f },
	{ 0.062818f, 0.921288f, 0.383774f },
	{ 0.008923f, 0.390831f, 0.920419f },
	{ 0.022482f, 0.425243f, -0.9048f },
	{ 0.048309f, 0.235679f, -0.97063f },
	{ -0.121353f, 0.034177f, 0.992021f },
	{ 0.021256f, 0.925613f, 0.377874f },
	{ 0.022299f, 0.892177f, -0.451136f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0003D0A4 = { vertex_0003C564, normal_0003CB04, LengthOfArray(vertex_0003C564), meshlist_0003C51C, matlist_0003BF60, LengthOfArray(meshlist_0003C51C), LengthOfArray(matlist_0003BF60),{ 41.01854f, 44.15764f, 142.8487f }, 244.8268f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0003D0CC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0003D0A4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0003D100[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 51, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0003D13C[] = {
	12, 10, 12, 9, 11, 17, 18, 23, 24, 33, 36, 34, 35,
	0x8000u | 7, 6, 10, 5, 12, 0, 2, 1,
	12, 34, 27, 33, 26, 23, 19, 17, 13, 9, 3, 10, 6
};

extern "C" __declspec(dllexport) Sint16 poly_0003D180[] = {
	12, 2, 1, 8, 7, 16, 15, 22, 21, 31, 32, 29, 30
};

extern "C" __declspec(dllexport) Sint16 poly_0003D19A[] = {
	12, 5, 6, 4, 3, 14, 13, 20, 19, 25, 26, 28, 27,
	12, 12, 2, 11, 8, 18, 16, 24, 22, 36, 31, 35, 29
};

extern "C" __declspec(dllexport) NJS_TEX uv_0003D1D0[] = {
	{ 11, 22 },
	{ 11, -280 },
	{ 418, 22 },
	{ 418, -508 },
	{ 1268, 22 },
	{ 1268, -508 },
	{ 2120, 22 },
	{ 2120, -508 },
	{ 2973, 22 },
	{ 2973, -508 },
	{ 3825, 22 },
	{ 3825, -508 },
	{ 125, -462 },
	{ 268, -510 },
	{ 48, -402 },
	{ 454, -446 },
	{ 0, 255 },
	{ 764, -102 },
	{ 764, 241 },
	{ 3825, 22 },
	{ 3825, 255 },
	{ 2973, 22 },
	{ 2973, 255 },
	{ 2120, 22 },
	{ 2120, 255 },
	{ 1268, 22 },
	{ 1268, 255 },
	{ 418, 22 },
	{ 418, 255 },
	{ 11, 22 },
	{ 11, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0003D24C[] = {
	{ 157, 254 },
	{ 157, -254 },
	{ 412, 254 },
	{ 412, -254 },
	{ 947, 254 },
	{ 947, -254 },
	{ 1481, 254 },
	{ 1481, -254 },
	{ 2015, 254 },
	{ 2015, -254 },
	{ 2550, 254 },
	{ 2550, -254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0003D27C[] = {
	{ 15, 254 },
	{ 15, 0 },
	{ 557, 254 },
	{ 557, 0 },
	{ 1694, 254 },
	{ 1694, 0 },
	{ 2829, 254 },
	{ 2829, 0 },
	{ 3964, 254 },
	{ 3964, 0 },
	{ 5100, 254 },
	{ 5100, 0 },
	{ 7, 0 },
	{ 7, 255 },
	{ 278, 0 },
	{ 278, 255 },
	{ 847, 0 },
	{ 847, 255 },
	{ 1412, 0 },
	{ 1412, 255 },
	{ 1982, 0 },
	{ 1982, 255 },
	{ 2550, 0 },
	{ 2550, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0003D2DC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0003D13C, NULL, NULL, NULL, uv_0003D1D0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0003D180, NULL, NULL, NULL, uv_0003D24C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0003D19A, NULL, NULL, NULL, uv_0003D27C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0003D324[] = {
	{ -202.3141f, -107.6264f, -49.50386f },
	{ -177.6341f, -106.3492f, -5.735242f },
	{ -177.6341f, -74.48852f, -5.692081f },
	{ -137.5925f, -41.16187f, -42.29182f },
	{ -137.5925f, -46.61999f, -46.7125f },
	{ -177.6341f, -46.61999f, -46.7125f },
	{ -177.6341f, -41.16187f, -42.29182f },
	{ -137.5925f, -106.3492f, 2.304758f },
	{ -137.5925f, -74.48852f, 2.347918f },
	{ -137.5925f, -36.74121f, -34.12259f },
	{ -177.6341f, -36.74121f, -34.12259f },
	{ -137.5925f, -42.62788f, -15.44892f },
	{ -177.6341f, -42.62788f, -23.48891f },
	{ -54.09082f, -41.16187f, -42.29182f },
	{ -54.09082f, -46.61999f, -46.7125f },
	{ -54.09082f, -106.3492f, 2.304758f },
	{ -54.09082f, -74.48852f, 2.347918f },
	{ -54.09082f, -36.74121f, -34.12259f },
	{ -54.09082f, -42.62788f, -15.44892f },
	{ 29.41084f, -41.16187f, -42.29182f },
	{ 29.41084f, -46.61999f, -46.7125f },
	{ 29.41084f, -106.3492f, 2.304758f },
	{ 29.41084f, -74.48852f, 2.347918f },
	{ 29.41084f, -36.74121f, -34.12259f },
	{ 29.41084f, -42.62788f, -15.44892f },
	{ 112.9125f, -46.61999f, -46.7125f },
	{ 112.9125f, -41.16187f, -42.29182f },
	{ 196.4141f, -41.16187f, -42.29182f },
	{ 196.4141f, -46.61999f, -46.7125f },
	{ 196.4141f, -74.48852f, 2.347918f },
	{ 196.4141f, -106.3492f, 2.304758f },
	{ 112.9125f, -74.48852f, 2.347918f },
	{ 112.9125f, -106.3492f, 2.304758f },
	{ 112.9125f, -36.74121f, -34.12259f },
	{ 196.4141f, -36.74121f, -34.12259f },
	{ 196.4141f, -42.62788f, -15.44892f },
	{ 112.9125f, -42.62788f, -15.44892f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0003D4E0[] = {
	{ -0.930223f, 0.165905f, 0.327354f },
	{ -0.5904649f, -0.001093f, 0.807062f },
	{ -0.579027f, 0.219838f, 0.785111f },
	{ 0, 0.769319f, -0.638865f },
	{ 0, 0.629387f, -0.777092f },
	{ -0.74224f, 0.521643f, -0.420676f },
	{ -0.66559f, 0.574157f, -0.476796f },
	{ -0.098924f, -0.001348f, 0.9950939f },
	{ -0.094569f, 0.246596f, 0.964493f },
	{ 0, 0.997088f, -0.076254f },
	{ -0.6012959f, 0.7977279f, -0.045529f },
	{ -0.049831f, 0.752633f, 0.656552f },
	{ -0.603502f, 0.637574f, 0.478836f },
	{ 0, 0.769319f, -0.638865f },
	{ 0, 0.629387f, -0.777092f },
	{ 0, -0.001355f, 0.999999f },
	{ 0, 0.251304f, 0.967908f },
	{ 0, 0.995461f, -0.095172f },
	{ 0, 0.775441f, 0.63142f },
	{ 0, 0.769319f, -0.638865f },
	{ 0, 0.629387f, -0.777092f },
	{ 0, -0.001355f, 0.999999f },
	{ 0, 0.251304f, 0.967908f },
	{ 0, 0.995461f, -0.095172f },
	{ 0, 0.775441f, 0.63142f },
	{ 0, 0.629387f, -0.777092f },
	{ 0, 0.769319f, -0.638865f },
	{ 0, 0.769319f, -0.638865f },
	{ 0, 0.629387f, -0.777092f },
	{ 0, 0.251304f, 0.967908f },
	{ 0, -0.001355f, 0.999999f },
	{ 0, 0.251304f, 0.967908f },
	{ 0, -0.001355f, 0.999999f },
	{ 0, 0.995461f, -0.095172f },
	{ 0, 0.995461f, -0.095172f },
	{ 0, 0.775441f, 0.63142f },
	{ 0, 0.775441f, 0.63142f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0003D69C = { vertex_0003D324, normal_0003D4E0, LengthOfArray(vertex_0003D324), meshlist_0003D2DC, matlist_0003D100, LengthOfArray(meshlist_0003D2DC), LengthOfArray(matlist_0003D100),{ -2.949989f, -72.18378f, -23.57797f }, 201.0428f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0003D6C4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0003D69C, 18.12291f, 105.115f, 48.67678f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0003D6F8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 51, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0003D734[] = {
	12, 10, 6, 9, 3, 17, 13, 23, 19, 33, 26, 34, 27,
	0x8000u | 6, 6, 5, 12, 0, 2, 1,
	3, 6, 10, 12,
	12, 34, 35, 33, 36, 23, 24, 17, 18, 9, 11, 10, 12
};

extern "C" __declspec(dllexport) Sint16 poly_0003D77E[] = {
	12, 29, 30, 31, 32, 22, 21, 16, 15, 8, 7, 2, 1
};

extern "C" __declspec(dllexport) Sint16 poly_0003D798[] = {
	12, 2, 12, 8, 11, 16, 18, 22, 24, 31, 36, 29, 35,
	12, 28, 27, 25, 26, 20, 19, 14, 13, 4, 3, 5, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_0003D7CC[] = {
	{ 74, -276 },
	{ 36, -510 },
	{ 408, -276 },
	{ 408, -510 },
	{ 1261, -276 },
	{ 1261, -510 },
	{ 2117, -276 },
	{ 2117, -510 },
	{ 2969, -276 },
	{ 2969, -510 },
	{ 3825, -276 },
	{ 3825, -510 },
	{ 637, -462 },
	{ 716, -402 },
	{ 310, -446 },
	{ 765, 255 },
	{ 0, -102 },
	{ 0, 241 },
	{ 637, -462 },
	{ 496, -510 },
	{ 310, -446 },
	{ 3825, -276 },
	{ 3825, 254 },
	{ 2969, -276 },
	{ 2969, 254 },
	{ 2117, -276 },
	{ 2117, 254 },
	{ 1261, -276 },
	{ 1261, 254 },
	{ 408, -276 },
	{ 408, 254 },
	{ 74, -276 },
	{ 2, 25 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0003D850[] = {
	{ 2550, 254 },
	{ 2550, 0 },
	{ 2015, 254 },
	{ 2015, 0 },
	{ 1481, 254 },
	{ 1481, 0 },
	{ 947, 254 },
	{ 947, 0 },
	{ 412, 254 },
	{ 412, 0 },
	{ 157, 254 },
	{ 157, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0003D880[] = {
	{ 7, 255 },
	{ 9, 0 },
	{ 278, 255 },
	{ 278, 0 },
	{ 847, 255 },
	{ 847, 0 },
	{ 1412, 255 },
	{ 1412, 0 },
	{ 1982, 255 },
	{ 1982, 0 },
	{ 2550, 255 },
	{ 2550, 0 },
	{ 5100, 254 },
	{ 5100, 0 },
	{ 3964, 254 },
	{ 3964, 0 },
	{ 2829, 254 },
	{ 2829, 0 },
	{ 1694, 254 },
	{ 1694, 0 },
	{ 557, 254 },
	{ 557, 0 },
	{ 18, 254 },
	{ 63, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0003D8E0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0003D734, NULL, NULL, NULL, uv_0003D7CC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0003D77E, NULL, NULL, NULL, uv_0003D850, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0003D798, NULL, NULL, NULL, uv_0003D880, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0003D928[] = {
	{ -202.3141f, -107.6264f, 49.50386f },
	{ -177.6341f, -106.3492f, 5.735242f },
	{ -177.6341f, -74.48852f, 5.692081f },
	{ -137.5925f, -41.16187f, 42.29182f },
	{ -137.5925f, -46.61999f, 46.7125f },
	{ -177.3941f, -46.61999f, 46.7125f },
	{ -174.0542f, -41.16187f, 42.29182f },
	{ -137.5925f, -106.3492f, -2.304758f },
	{ -137.5925f, -74.48852f, -2.347918f },
	{ -137.5925f, -36.74121f, 34.12259f },
	{ -170.3142f, -36.74121f, 34.12259f },
	{ -137.5925f, -42.62788f, 15.44892f },
	{ -177.3941f, -42.62788f, 23.48891f },
	{ -54.09082f, -41.16187f, 42.29182f },
	{ -54.09082f, -46.61999f, 46.7125f },
	{ -54.09082f, -106.3492f, -2.304758f },
	{ -54.09082f, -74.48852f, -2.347918f },
	{ -54.09082f, -36.74121f, 34.12259f },
	{ -54.09082f, -42.62788f, 15.44892f },
	{ 29.41084f, -41.16187f, 42.29182f },
	{ 29.41084f, -46.61999f, 46.7125f },
	{ 29.41084f, -106.3492f, -2.304758f },
	{ 29.41084f, -74.48852f, -2.347918f },
	{ 29.41084f, -36.74121f, 34.12259f },
	{ 29.41084f, -42.62788f, 15.44892f },
	{ 112.9125f, -46.61999f, 46.7125f },
	{ 112.9125f, -41.16187f, 42.29182f },
	{ 196.4141f, -41.16187f, 42.29182f },
	{ 196.4141f, -46.61999f, 46.7125f },
	{ 196.4141f, -74.48852f, -2.347918f },
	{ 196.4141f, -106.3492f, -2.304758f },
	{ 112.9125f, -74.48852f, -2.347918f },
	{ 112.9125f, -106.3492f, -2.304758f },
	{ 112.9125f, -36.74121f, 34.12259f },
	{ 196.4141f, -36.74121f, 34.12259f },
	{ 196.4141f, -42.62788f, 15.44892f },
	{ 112.9125f, -42.62788f, 15.44892f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0003DAE4[] = {
	{ -0.930228f, 0.16847f, -0.326026f },
	{ -0.5904649f, -0.001093f, -0.807062f },
	{ -0.580301f, 0.221312f, -0.7837549f },
	{ 0, 0.769319f, 0.638865f },
	{ 0, 0.629387f, 0.777092f },
	{ -0.717258f, 0.617662f, 0.322545f },
	{ -0.400651f, 0.810973f, 0.426381f },
	{ -0.098924f, -0.001348f, -0.9950939f },
	{ -0.094811f, 0.246712f, -0.96444f },
	{ 0, 0.997088f, 0.076254f },
	{ -0.266184f, 0.963205f, 0.03717f },
	{ -0.050127f, 0.752672f, -0.656485f },
	{ -0.601255f, 0.667179f, -0.439731f },
	{ 0, 0.769319f, 0.638865f },
	{ 0, 0.629387f, 0.777092f },
	{ 0, -0.001355f, -0.999999f },
	{ 0, 0.251304f, -0.967908f },
	{ 0, 0.995461f, 0.095172f },
	{ 0, 0.775441f, -0.63142f },
	{ 0, 0.769319f, 0.638865f },
	{ 0, 0.629387f, 0.777092f },
	{ 0, -0.001355f, -0.999999f },
	{ 0, 0.251304f, -0.967908f },
	{ 0, 0.995461f, 0.095172f },
	{ 0, 0.775441f, -0.63142f },
	{ 0, 0.629387f, 0.777092f },
	{ 0, 0.769319f, 0.638865f },
	{ 0, 0.769319f, 0.638865f },
	{ 0, 0.629387f, 0.777092f },
	{ 0, 0.251304f, -0.967908f },
	{ 0, -0.001355f, -0.999999f },
	{ 0, 0.251304f, -0.967908f },
	{ 0, -0.001355f, -0.999999f },
	{ 0, 0.995461f, 0.095172f },
	{ 0, 0.995461f, 0.095172f },
	{ 0, 0.775441f, -0.63142f },
	{ 0, 0.775441f, -0.63142f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0003DCA0 = { vertex_0003D928, normal_0003DAE4, LengthOfArray(vertex_0003D928), meshlist_0003D8E0, matlist_0003D6F8, LengthOfArray(meshlist_0003D8E0), LengthOfArray(matlist_0003D6F8),{ -2.949989f, -72.18378f, 23.57797f }, 201.0428f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0003DCC8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0003DCA0, 18.18966f, 105.115f, -125.9415f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0003DCFC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 52, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 54, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 52, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0003DD4C[] = {
	10, 69, 96, 65, 30, 67, 101, 31, 28, 111, 95,
	3, 108, 51, 105,
	4, 50, 27, 23, 19,
	0x8000u | 6, 50, 32, 23, 66, 24, 22,
	0x8000u | 8, 61, 52, 85, 83, 63, 53, 74, 25,
	0x8000u | 6, 68, 59, 57, 58, 55, 56,
	10, 35, 109, 100, 51, 20, 108, 107, 3, 4, 80,
	0x8000u | 6, 9, 37, 49, 55, 8, 56,
	0x8000u | 7, 52, 44, 83, 82, 53, 45, 76,
	3, 73, 76, 53,
	3, 25, 73, 53,
	5, 45, 81, 82, 43, 44,
	0x8000u | 8, 81, 46, 45, 47, 76, 51, 77, 105,
	0x8000u | 8, 62, 61, 84, 85, 64, 63, 65, 74,
	3, 47, 51, 109,
	0x8000u | 5, 28, 15, 101, 102, 30,
	3, 67, 31, 111
};

extern "C" __declspec(dllexport) Sint16 poly_0003DE32[] = {
	10, 103, 29, 106, 26, 21, 98, 99, 48, 34, 9,
	3, 49, 9, 48,
	0x8000u | 5, 98, 48, 54, 49, 8,
	0x8000u | 5, 29, 26, 97, 98, 54,
	0x8000u | 6, 106, 103, 6, 18, 5, 17
};

extern "C" __declspec(dllexport) Sint16 poly_0003DE76[] = {
	3, 18, 17, 90,
	12, 8, 54, 69, 97, 96, 29, 30, 103, 102, 18, 15, 90,
	3, 80, 5, 4,
	12, 5, 6, 4, 106, 107, 21, 20, 99, 100, 34, 35, 9
};

extern "C" __declspec(dllexport) Sint16 poly_0003DEBA[] = {
	0x8000u | 6, 5, 1, 80, 79, 3, 2,
	0x8000u | 9, 65, 69, 64, 56, 86, 87, 60, 58, 59,
	10, 109, 35, 47, 36, 46, 89, 88, 42, 81, 43,
	6, 13, 11, 33, 7, 50, 27,
	9, 65, 78, 74, 94, 25, 70, 73, 77, 76,
	10, 65, 67, 78, 111, 94, 110, 70, 104, 77, 105,
	8, 90, 17, 91, 71, 92, 12, 93, 10,
	0x8000u | 9, 9, 35, 37, 36, 38, 39, 41, 89, 42,
	10, 28, 15, 16, 90, 14, 91, 13, 92, 11, 93,
	7, 50, 32, 33, 95, 72, 16, 14,
	0x8000u | 5, 60, 62, 86, 84, 64,
	3, 38, 40, 41,
	3, 8, 69, 56,
	3, 89, 36, 39,
	3, 58, 56, 87,
	3, 81, 46, 88,
	4, 14, 13, 72, 33,
	4, 79, 2, 75, 0,
	8, 111, 95, 110, 32, 104, 66, 105, 22,
	3, 105, 22, 108,
	0x8000u | 6, 108, 3, 22, 2, 24, 0,
	3, 28, 16, 95
};

extern "C" __declspec(dllexport) NJS_TEX uv_0003DFF0[] = {
	{ -111, -1007 },
	{ -221, -988 },
	{ -276, -816 },
	{ -597, -1000 },
	{ -673, -907 },
	{ -912, -987 },
	{ -892, -860 },
	{ -972, -976 },
	{ -908, -725 },
	{ -964, -652 },
	{ -1418, -920 },
	{ -1622, -907 },
	{ -1412, -729 },
	{ -1045, -290 },
	{ -1042, 198 },
	{ -1259, -290 },
	{ -1314, 198 },
	{ -1045, -290 },
	{ -1032, -652 },
	{ -1259, -290 },
	{ -1203, -652 },
	{ -1330, -290 },
	{ -1361, -652 },
	{ -81, 198 },
	{ 23, 198 },
	{ -83, -12 },
	{ 24, -47 },
	{ -109, -452 },
	{ 28, -452 },
	{ -256, -677 },
	{ -75, -649 },
	{ -25, 254 },
	{ -116, 198 },
	{ -32, -46 },
	{ -93, -46 },
	{ -38, -616 },
	{ -134, -616 },
	{ -2136, -976 },
	{ -2008, -947 },
	{ -2024, -972 },
	{ -1622, -907 },
	{ -1663, -968 },
	{ -1418, -920 },
	{ -1384, -960 },
	{ -1291, -936 },
	{ -1281, -952 },
	{ -1251, -895 },
	{ 89, -1019 },
	{ 84, -616 },
	{ 18, -1020 },
	{ -38, -616 },
	{ -45, -1019 },
	{ -134, -616 },
	{ -2269, 198 },
	{ -2139, 198 },
	{ -2268, -47 },
	{ -2138, -28 },
	{ -2264, -452 },
	{ -2119, -452 },
	{ -2043, -729 },
	{ -2272, -657 },
	{ -2043, -729 },
	{ -2264, -452 },
	{ -75, -649 },
	{ 22, -657 },
	{ 28, -452 },
	{ -2119, -452 },
	{ -2073, -67 },
	{ -2138, -28 },
	{ -2081, 198 },
	{ -2139, 198 },
	{ -2073, -67 },
	{ -2039, -452 },
	{ -2119, -452 },
	{ -1984, -815 },
	{ -2043, -729 },
	{ -1622, -907 },
	{ -1602, -799 },
	{ -1412, -729 },
	{ -165, 198 },
	{ -81, 198 },
	{ -167, -5 },
	{ -83, -12 },
	{ -204, -452 },
	{ -109, -452 },
	{ -276, -816 },
	{ -256, -677 },
	{ -1984, -815 },
	{ -1622, -907 },
	{ -2008, -947 },
	{ -972, -976 },
	{ -1021, -987 },
	{ -912, -987 },
	{ -932, -996 },
	{ -597, -1000 },
	{ -673, -907 },
	{ -892, -860 },
	{ -908, -725 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0003E178[] = {
	{ 1783, 254 },
	{ 1290, 254 },
	{ 1769, -254 },
	{ 1290, 0 },
	{ 1290, -254 },
	{ 760, 0 },
	{ 765, -254 },
	{ 164, 0 },
	{ 164, -254 },
	{ 0, -254 },
	{ 0 },
	{ 0, -254 },
	{ 164, 0 },
	{ 760, 0 },
	{ 164, 0 },
	{ 164, 253 },
	{ 0 },
	{ 0, 253 },
	{ 1290, 254 },
	{ 1290, 0 },
	{ 761, 254 },
	{ 760, 0 },
	{ 164, 253 },
	{ 1769, -254 },
	{ 1783, 254 },
	{ 2265, -254 },
	{ 2265, 253 },
	{ 2549, -254 },
	{ 2549, 253 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0003E1EC[] = {
	{ 169, 0 },
	{ 0 },
	{ 55, 178 },
	{ 1529, 0 },
	{ 1431, 0 },
	{ 1394, 246 },
	{ 1072, 1 },
	{ 1075, 243 },
	{ 753, 1 },
	{ 764, 232 },
	{ 458, 0 },
	{ 456, 211 },
	{ 169, 0 },
	{ 169, 191 },
	{ 55, 178 },
	{ 69, 209 },
	{ 0 },
	{ 276, 252 },
	{ 0 },
	{ 282, 0 },
	{ 276, 252 },
	{ 776, 0 },
	{ 775, 253 },
	{ 1258, 0 },
	{ 1251, 254 },
	{ 1784, 0 },
	{ 1800, 254 },
	{ 2385, 0 },
	{ 2303, 255 },
	{ 2549, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0003E264[] = {
	{ 59, -840 },
	{ 0, -616 },
	{ 91, -895 },
	{ 39, -616 },
	{ 191, -936 },
	{ 118, -616 },
	{ 1012, -804 },
	{ 1251, -1007 },
	{ 1098, -426 },
	{ 1348, -597 },
	{ 1243, -4 },
	{ 1298, -18 },
	{ 1276, 254 },
	{ 1458, 0 },
	{ 1530, 254 },
	{ 900, -947 },
	{ 1130, -976 },
	{ 884, -815 },
	{ 1243, -616 },
	{ 976, -452 },
	{ 1192, -74 },
	{ 1125, -67 },
	{ 1168, 198 },
	{ 1044, -67 },
	{ 1059, 198 },
	{ 215, -171 },
	{ 143, 254 },
	{ 410, -256 },
	{ 358, 254 },
	{ 446, -256 },
	{ 466, 254 },
	{ 1020, -508 },
	{ 517, -324 },
	{ 931, -398 },
	{ 517, -255 },
	{ 944, -220 },
	{ 517, -117 },
	{ 916, -137 },
	{ 517, 184 },
	{ 983, 102 },
	{ 1020, -508 },
	{ 517, -464 },
	{ 517, -324 },
	{ 211, -422 },
	{ 517, -255 },
	{ 214, -286 },
	{ 517, -117 },
	{ 197, -70 },
	{ 517, 184 },
	{ 212, 211 },
	{ 276, -840 },
	{ 236, -860 },
	{ 210, -608 },
	{ 184, -617 },
	{ 169, -171 },
	{ 143, -171 },
	{ 39, 254 },
	{ 0, 254 },
	{ 1243, -1019 },
	{ 1130, -976 },
	{ 1282, -616 },
	{ 1243, -616 },
	{ 1434, -46 },
	{ 1360, -46 },
	{ 1321, 198 },
	{ 1192, -74 },
	{ 1168, 198 },
	{ 450, -976 },
	{ 358, -984 },
	{ 358, -811 },
	{ 276, -840 },
	{ 251, -597 },
	{ 210, -608 },
	{ 215, -171 },
	{ 169, -171 },
	{ 143, 254 },
	{ 39, 254 },
	{ 446, -256 },
	{ 502, -633 },
	{ 410, -256 },
	{ 476, -633 },
	{ 374, -637 },
	{ 358, -811 },
	{ 251, -597 },
	{ 1276, 254 },
	{ 1176, 254 },
	{ 1243, -4 },
	{ 1171, 41 },
	{ 1098, -426 },
	{ 1434, -46 },
	{ 1530, 254 },
	{ 1321, 198 },
	{ 1348, -1019 },
	{ 1251, -1007 },
	{ 1348, -597 },
	{ 1192, -74 },
	{ 1243, -616 },
	{ 1360, -46 },
	{ 1458, 0 },
	{ 1348, -597 },
	{ 1298, -18 },
	{ 1044, -67 },
	{ 976, -452 },
	{ 1125, -67 },
	{ 251, -597 },
	{ 215, -171 },
	{ 374, -637 },
	{ 410, -256 },
	{ 39, -616 },
	{ 118, -616 },
	{ 4, -209 },
	{ 80, -209 },
	{ 211, -422 },
	{ 0, -436 },
	{ 214, -286 },
	{ 48, -304 },
	{ 197, -70 },
	{ 0, -41 },
	{ 212, 211 },
	{ 0, 254 },
	{ 434, -729 },
	{ 314, -652 },
	{ 426, -920 },
	{ 426, -920 },
	{ 191, -936 },
	{ 314, -652 },
	{ 118, -616 },
	{ 246, -290 },
	{ 80, -209 },
	{ 450, -976 },
	{ 358, -811 },
	{ 476, -633 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0003E474[] = {
	{ NJD_MESHSET_TRIMESH | 0, 17, poly_0003DD4C, NULL, NULL, NULL, uv_0003DFF0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 5, poly_0003DE32, NULL, NULL, NULL, uv_0003E178, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_0003DE76, NULL, NULL, NULL, uv_0003E1EC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 22, poly_0003DEBA, NULL, NULL, NULL, uv_0003E264, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0003E4D4[] = {
	{ -72.35639f, 27.75431f, -37.16643f },
	{ -84.84639f, 57.50431f, -19.31644f },
	{ -66.40643f, 57.50431f, -37.16643f },
	{ -55.09644f, 80.8802f, -32.34143f },
	{ -55.49643f, 82.10381f, -29.49063f },
	{ -75.54642f, 73.89436f, -19.31644f },
	{ -55.09644f, 80.26327f, -19.31644f },
	{ -55.09644f, -1.995687f, 36.78357f },
	{ 108.7665f, 86.92314f, 16.38356f },
	{ 108.7665f, 86.92314f, -19.31644f },
	{ -114.5964f, -1.995687f, 16.38356f },
	{ -90.79639f, -1.995687f, 52.08355f },
	{ -90.79639f, 27.75431f, 16.38356f },
	{ -78.89639f, 27.75431f, 34.23356f },
	{ -72.94643f, 57.50431f, 34.23356f },
	{ -55.09644f, 84.55353f, 25.30856f },
	{ -55.09644f, 72.37814f, 32.07105f },
	{ -75.54642f, 75.79435f, 16.38356f },
	{ -55.09644f, 80.26327f, 16.38356f },
	{ -31.29643f, -1.995687f, -25.26644f },
	{ 15.00356f, 83.26588f, -29.56644f },
	{ 15.40356f, 82.64178f, -19.31644f },
	{ -35.74642f, 60.08432f, -37.16643f },
	{ -40.56644f, 33.70431f, -19.31644f },
	{ -46.51644f, 33.70431f, -37.16643f },
	{ 46.55723f, 60.0462f, 8.400983f },
	{ 15.40356f, 82.64178f, -1.466438f },
	{ -37.24643f, -1.995687f, 16.38356f },
	{ -39.9464f, 83.92386f, 29.9836f },
	{ 15.40356f, 82.64178f, 16.47879f },
	{ 16.60356f, 85.67349f, 27.23356f },
	{ -19.39643f, 75.35432f, 31.83356f },
	{ -31.52641f, 60.08432f, 16.38356f },
	{ -46.51644f, 33.70431f, 34.23356f },
	{ 96.86652f, 86.92316f, -19.31644f },
	{ 90.91653f, 83.82337f, -29.57811f },
	{ 108.7665f, 57.50431f, -31.21643f },
	{ 114.7165f, 57.50431f, -19.31644f },
	{ 138.5165f, 15.85431f, -19.31644f },
	{ 126.6165f, 15.85431f, -37.16643f },
	{ 153.0465f, -6.136885f, -19.31644f },
	{ 120.6665f, -1.995687f, -49.06643f },
	{ 96.86652f, -1.995687f, -43.11643f },
	{ 80.04657f, -1.995687f, -37.16643f },
	{ 68.14656f, -1.995687f, -19.31644f },
	{ 61.16655f, 45.60432f, -19.31644f },
	{ 67.11657f, 45.60432f, -37.16643f },
	{ 53.05409f, 71.99683f, -35.28643f },
	{ 96.86652f, 86.92316f, -1.466438f },
	{ 108.7665f, 86.92316f, -1.466438f },
	{ -40.56644f, 33.70431f, 16.38356f },
	{ 9.453556f, 78.71431f, -37.16643f },
	{ 80.04657f, -1.995687f, -1.466438f },
	{ 67.11657f, 45.60432f, -1.466438f },
	{ 96.86652f, 86.92316f, 16.38356f },
	{ 120.6665f, 57.50431f, 16.38356f },
	{ 108.7665f, 57.50431f, 40.18356f },
	{ 132.5665f, 15.85431f, 16.38356f },
	{ 126.6165f, 15.85431f, 34.23356f },
	{ 138.5165f, -1.995687f, 46.13356f },
	{ 96.86652f, -1.995687f, 38.56084f },
	{ 74.09658f, -1.995687f, 16.38356f },
	{ 80.04657f, -1.995687f, 34.23356f },
	{ 61.16655f, 45.60432f, 16.38356f },
	{ 67.11657f, 45.60432f, 34.23356f },
	{ 53.05409f, 72.03681f, 36.11356f },
	{ -35.74642f, 60.08432f, -8.766436f },
	{ 9.453562f, 78.71431f, 31.83356f },
	{ 153.0465f, -6.136885f, 16.38356f },
	{ 92.57651f, 86.04398f, 27.86357f },
	{ 9.453562f, 67.54413f, -1.466438f },
	{ -84.09728f, 59.0074f, 13.94487f },
	{ -52.42039f, 60.31604f, 35.10553f },
	{ 44.12795f, 60.61538f, 0.413562f },
	{ 45.30948f, 61.94943f, 25.41824f },
	{ -84.08229f, 27.75431f, -29.38759f },
	{ 49.86391f, 65.75478f, -22.52735f },
	{ 9.453558f, 70.83431f, -30.44812f },
	{ 9.453562f, 73.15597f, 18.40198f },
	{ -78.71859f, 57.50431f, -28.50816f },
	{ -70.54349f, 77.84433f, -27.7611f },
	{ 77.94527f, 17.43757f, -37.16643f },
	{ 67.98177f, 14.59148f, -19.31644f },
	{ 78.34911f, 15.95084f, -1.466431f },
	{ 79.18304f, 12.88086f, 34.23356f },
	{ 73.09835f, 13.37672f, 16.38356f },
	{ 91.31837f, 16.08134f, 37.57928f },
	{ 100.4211f, 17.0571f, 38.88191f },
	{ 90.47475f, 17.43115f, -41.59808f },
	{ 100.5899f, 17.90137f, -40.59302f },
	{ -68.8685f, 74.47499f, 24.72215f },
	{ -79.74216f, 58.2559f, 26.36863f },
	{ -86.47285f, 27.75431f, 26.97881f },
	{ -108.1158f, -1.995687f, 30.21435f },
	{ 9.453562f, 69.70033f, 11.7076f },
	{ -35.74643f, 60.08432f, 29.09356f },
	{ 54.04284f, 84.79207f, 27.76255f },
	{ 53.69726f, 84.65434f, 16.43402f },
	{ 53.83637f, 84.66165f, -1.466438f },
	{ 53.46977f, 84.64239f, -19.31644f },
	{ 54.70313f, 83.55742f, -29.57254f },
	{ -20.3067f, 84.5315f, 29.02851f },
	{ -20.39032f, 85.25352f, 26.24035f },
	{ -20.15723f, 81.44203f, 16.43076f },
	{ -18.59033f, 63.81152f, -5.995651f },
	{ -17.27233f, 65.68786f, -32.99002f },
	{ -19.28776f, 81.47137f, -19.31644f },
	{ -19.52149f, 82.69679f, -29.52931f },
	{ -18.56558f, 79.65445f, -35.07205f },
	{ 55.52127f, 81.60351f, -32.8752f },
	{ -17.07966f, 64.30624f, 14.73513f },
	{ -17.36282f, 65.40078f, 27.79458f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0003EA14[] = {
	{ -0.353202f, 0.07064f, -0.932876f },
	{ -0.796562f, 0.451981f, -0.4015f },
	{ -0.272862f, 0.182334f, -0.944617f },
	{ -0.15568f, 0.6567619f, -0.737853f },
	{ -0.166595f, 0.979051f, -0.117066f },
	{ -0.571571f, 0.8055829f, -0.156024f },
	{ -0.152836f, 0.98305f, 0.101257f },
	{ 0.691255f, 0.073584f, 0.718855f },
	{ 0.5911019f, 0.7775379f, 0.214551f },
	{ 0.654714f, 0.718012f, -0.236237f },
	{ -0.738084f, 0.590467f, 0.326468f },
	{ -0.227179f, 0.479434f, 0.847663f },
	{ -0.8350559f, 0.428808f, 0.34468f },
	{ -0.264529f, 0.272807f, 0.924987f },
	{ -0.357951f, 0.276718f, 0.891795f },
	{ -0.232992f, 0.92766f, 0.291826f },
	{ -0.146305f, 0.398145f, 0.90558f },
	{ -0.551131f, 0.809122f, 0.203902f },
	{ -0.134632f, 0.982189f, -0.131067f },
	{ 0.9770899f, 0.160659f, 0.139584f },
	{ -0.018527f, 0.9720629f, -0.233989f },
	{ -0.035207f, 0.998902f, 0.030917f },
	{ 0.384798f, -0.269981f, -0.882633f },
	{ 0.9834279f, -0.18067f, -0.015079f },
	{ 0.482966f, -0.197178f, -0.85315f },
	{ -0.490947f, -0.87111f, 0.011735f },
	{ -0.043103f, 0.9990709f, 0 },
	{ 0.972192f, 0.054252f, 0.227813f },
	{ -0.026268f, 0.6517569f, 0.757973f },
	{ -0.029493f, 0.9902509f, -0.136133f },
	{ -0.011218f, 0.940244f, 0.340317f },
	{ -0.002623f, -0.027667f, 0.9996139f },
	{ 0.642846f, -0.761791f, 0.08014099f },
	{ 0.641708f, -0.056939f, 0.764833f },
	{ -0.018501f, 0.98955f, -0.142997f },
	{ 0.240458f, 0.685299f, -0.687419f },
	{ 0.545993f, 0.331591f, -0.769376f },
	{ 0.8744079f, 0.364103f, -0.320686f },
	{ 0.732877f, 0.442916f, -0.5164469f },
	{ 0.486781f, 0.438833f, -0.755295f },
	{ 0.674464f, 0.445631f, -0.588652f },
	{ 0.139397f, 0.468785f, -0.8722439f },
	{ -0.223068f, 0.187078f, -0.956683f },
	{ -0.600101f, -0.04609f, -0.798595f },
	{ -0.998298f, -0.058318f, 0.000121f },
	{ -0.915758f, -0.388102f, -0.103751f },
	{ -0.511493f, -0.121025f, -0.850722f },
	{ -0.169499f, -0.174702f, -0.9699219f },
	{ -0.026251f, 0.9996549f, 0 },
	{ 0.5987599f, 0.79694f, -0.079834f },
	{ 0.973472f, -0.139704f, 0.181203f },
	{ -0.017542f, 0.118844f, -0.992758f },
	{ -0.989289f, -0.06765199f, 0.129343f },
	{ -0.888343f, -0.456981f, -0.044882f },
	{ -0.021441f, 0.999154f, 0.035083f },
	{ 0.92813f, 0.311985f, 0.203075f },
	{ 0.416448f, 0.233896f, 0.878558f },
	{ 0.815655f, 0.5048299f, 0.282583f },
	{ 0.541731f, 0.431246f, 0.721494f },
	{ 0.42537f, 0.6847939f, 0.591707f },
	{ -0.107756f, 0.073976f, 0.991421f },
	{ -0.9974729f, -0.07104f, 0.000205f },
	{ -0.671618f, -0.043839f, 0.739599f },
	{ -0.844732f, -0.534718f, -0.022452f },
	{ -0.594348f, -0.244864f, 0.766023f },
	{ -0.292864f, -0.015569f, 0.956027f },
	{ 0.680969f, -0.729917f, -0.059188f },
	{ 0.03656f, -0.130415f, 0.9907849f },
	{ 0.711237f, 0.654581f, 0.256253f },
	{ 0.060325f, 0.76407f, 0.642307f },
	{ -0.01417f, -0.999893f, -0.00363f },
	{ -0.868607f, 0.28229f, 0.407228f },
	{ 0.09911299f, 0.137726f, 0.985499f },
	{ -0.443982f, -0.8959799f, -0.009973f },
	{ -0.512559f, -0.812076f, 0.278956f },
	{ -0.560888f, 0.112177f, -0.8202569f },
	{ -0.573468f, -0.744981f, -0.340791f },
	{ -0.007939f, -0.892312f, -0.45135f },
	{ 0.043701f, -0.90965f, 0.413071f },
	{ -0.64127f, 0.324101f, -0.6955079f },
	{ -0.5290239f, 0.762448f, -0.372567f },
	{ -0.637576f, -0.134225f, -0.758604f },
	{ -0.984105f, -0.177561f, -0.002998f },
	{ -0.97755f, -0.200152f, 0.06584f },
	{ -0.646275f, -0.132894f, 0.751444f },
	{ -0.976988f, -0.213292f, -0.000133f },
	{ -0.187859f, -0.020085f, 0.981991f },
	{ 0.014485f, -0.027558f, 0.999515f },
	{ -0.103603f, 0.07134999f, -0.992056f },
	{ 0.01512f, 0.242363f, -0.970068f },
	{ -0.494566f, 0.7390389f, 0.457412f },
	{ -0.757424f, 0.329536f, 0.563662f },
	{ -0.769742f, 0.406068f, 0.492551f },
	{ -0.6949379f, 0.585911f, 0.416856f },
	{ -0.019531f, -0.972585f, 0.231727f },
	{ 0.468848f, -0.340585f, 0.814974f },
	{ -0.022138f, 0.8985479f, 0.438317f },
	{ -0.040359f, 0.9977f, -0.054462f },
	{ -0.052484f, 0.9986219f, 0 },
	{ -0.041606f, 0.998026f, -0.04704f },
	{ -0.018805f, 0.946082f, -0.32338f },
	{ -0.005085f, 0.779901f, 0.625882f },
	{ -0.020215f, 0.99775f, -0.063929f },
	{ -0.026295f, 0.98356f, -0.178658f },
	{ 0.210616f, -0.97754f, -0.007469f },
	{ 0.164479f, -0.769581f, -0.617002f },
	{ -0.029345f, 0.997769f, 0.059968f },
	{ -0.017894f, 0.98527f, -0.170068f },
	{ 0.013086f, 0.469918f, -0.8826129f },
	{ 0.038119f, 0.590032f, -0.806479f },
	{ 0.255632f, -0.951582f, 0.170718f },
	{ 0.183759f, -0.744683f, 0.641623f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0003EF54 = { vertex_0003E4D4, normal_0003EA14, LengthOfArray(vertex_0003E4D4), meshlist_0003E474, matlist_0003DCFC, LengthOfArray(meshlist_0003E474), LengthOfArray(matlist_0003DCFC),{ 19.22506f, 40.39313f, 1.508562f }, 143.0595f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0003EF7C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0003EF54, -308.4728f, 1.355719f, 142.0574f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0003EFB0[] = {
	{ { 0xCCB2B2B2 },{ 0xFFFFFFFF }, 11, 55, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0003EFC4[] = {
	0x8000u | 6, 7, 18, 8, 16, 9, 10,
	0x8000u | 10, 5, 4, 12, 3, 14, 2, 15, 1, 11, 0,
	0x8000u | 7, 6, 5, 17, 12, 19, 14, 13,
	8, 10, 13, 16, 19, 18, 17, 7, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_0003F00C[] = {
	{ 0, -2345 },
	{ 665, -2554 },
	{ 556, -3060 },
	{ 1609, -2747 },
	{ 1625, -3315 },
	{ 2485, -2975 },
	{ 903, -776 },
	{ 1037, -328 },
	{ 1745, -1008 },
	{ 1715, 255 },
	{ 3027, -1136 },
	{ 2756, 210 },
	{ 3477, -1091 },
	{ 3251, 75 },
	{ 3570, -820 },
	{ 3522, -238 },
	{ 45, -1403 },
	{ 903, -776 },
	{ 816, -1481 },
	{ 1745, -1008 },
	{ 1695, -1594 },
	{ 3027, -1136 },
	{ 2756, -1673 },
	{ 2485, -2975 },
	{ 2756, -1673 },
	{ 1609, -2747 },
	{ 1695, -1594 },
	{ 665, -2554 },
	{ 816, -1481 },
	{ 0, -2345 },
	{ 45, -1403 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0003F088[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0003EFC4, NULL, NULL, NULL, uv_0003F00C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0003F0A0[] = {
	{ -260.1f, 0, -65 },
	{ -290.7f, 0, -100 },
	{ -346.8f, 0, -115 },
	{ -464.1f, 0, -120 },
	{ -540.6f, 0, -55 },
	{ -555.8999f, 0, -5 },
	{ -652.8f, 0, 65 },
	{ -657.8999f, 0, 170 },
	{ -595.1f, 0, 249.5f },
	{ -474.5f, 0, 277.8f },
	{ -377.4f, 0, 240 },
	{ -255, 0, 0 },
	{ -460.6423f, 0, 20.8796f },
	{ -346.8f, 0, 95 },
	{ -316.2f, 0, 35 },
	{ -265.2f, 0, 30 },
	{ -475.9979f, 0, 214.8104f },
	{ -565.6999f, 0, 73.51179f },
	{ -582.8189f, 0, 193.3184f },
	{ -466.5878f, 0, 86.35026f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0003F190[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0003F280 = { vertex_0003F0A0, normal_0003F190, LengthOfArray(vertex_0003F0A0), meshlist_0003F088, matlist_0003EFB0, LengthOfArray(meshlist_0003F088), LengthOfArray(matlist_0003EFB0),{ -456.45f, 0, 78.89999f }, 283.0959f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0003F2A8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0003F280, 9, 15.06f, 1.8f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0003F2DC[] = {
	{ { 0xCCB2B2B2 },{ 0xFFFFFFFF }, 11, 55, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0003F2F0[] = {
	14, 10, 11, 20, 12, 19, 13, 18, 15, 17, 14, 21, 5, 4, 3,
	0x8000u | 12, 4, 21, 6, 17, 7, 18, 16, 19, 8, 20, 9, 10,
	0x8000u | 5, 5, 3, 22, 2, 1,
	0x8000u | 5, 14, 5, 0, 22, 1
};

extern "C" __declspec(dllexport) NJS_TEX uv_0003F340[] = {
	{ -2602, 7650 },
	{ -1766, 7499 },
	{ -2692, 6980 },
	{ -1261, 7071 },
	{ -2853, 6371 },
	{ -1237, 6565 },
	{ -2847, 5163 },
	{ -673, 5226 },
	{ -2639, 4102 },
	{ -243, 3809 },
	{ -2491, 3277 },
	{ -2226, 2010 },
	{ -4335, 868 },
	{ -3128, 112 },
	{ -4335, 868 },
	{ -2491, 3277 },
	{ -4626, 2783 },
	{ -2639, 4102 },
	{ -4842, 4170 },
	{ -2847, 5163 },
	{ -4845, 5156 },
	{ -2853, 6371 },
	{ -4500, 6121 },
	{ -2692, 6980 },
	{ -4406, 6937 },
	{ -2602, 7650 },
	{ -2226, 2010 },
	{ -3128, 112 },
	{ -2048, 1323 },
	{ -561, 0 },
	{ 163, 1715 },
	{ -243, 3809 },
	{ -2226, 2010 },
	{ 255, 2730 },
	{ -2048, 1323 },
	{ 163, 1715 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0003F3D0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0003F2F0, NULL, NULL, NULL, uv_0003F340, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0003F3E8[] = {
	{ -144.1326f, 0, 93.95097f },
	{ -212.642f, 0, 98.8629f },
	{ -328.6678f, 0, 137.8551f },
	{ -321.0994f, 0, 275.7512f },
	{ -269.9395f, 0, 340.4858f },
	{ -192.7651f, 0, 227.2117f },
	{ -140.6563f, 0, 356.2367f },
	{ -46.97512f, 0, 367.7323f },
	{ 84.90371f, 0, 349.4383f },
	{ 139.9037f, 0, 344.4383f },
	{ 188.0428f, 0, 247.5424f },
	{ 178.0428f, 0, 202.5424f },
	{ 148.9394f, 0, 175.517f },
	{ 114.769f, 0, 174.2389f },
	{ -71.21954f, 0, 120.7489f },
	{ 24.36514f, 0, 143.9319f },
	{ 19.60771f, 0, 367.856f },
	{ -51.55231f, 0, 249.4252f },
	{ 20.24377f, 0, 260.5631f },
	{ 101.6669f, 0, 261.0222f },
	{ 142.8951f, 0, 252.2627f },
	{ -107.3248f, 0, 241.5714f },
	{ -239.1295f, 0, 217.6772f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0003F4FC[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0003F610 = { vertex_0003F3E8, normal_0003F4FC, LengthOfArray(vertex_0003F3E8), meshlist_0003F3D0, matlist_0003F2DC, LengthOfArray(meshlist_0003F3D0), LengthOfArray(matlist_0003F2DC),{ -70.31251f, 0, 230.9035f }, 296.4447f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0003F638 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0003F610, 111.5488f, 5.059998f, 48.95874f, 0, 0xB00, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0003F66C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000390F0, -236.6535f, 58.29203f, -12.71396f, 0x755, 0xFFFFDDC7, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0003F6A0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000390F0, -236.3849f, 58.95579f, -71.79276f, 0xFFFFFCBE, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0003F6D4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000390F0, -574.3878f, 59.45618f, 106.0952f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0003F708 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000390F0, -44.08002f, 8.694106f, 388.678f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0003F73C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000390F0, -440.9465f, 63.12196f, -40.6637f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0003F770 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000390F0, -424.2308f, 60.75843f, 6.258868f, 0, 0x23DA, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) COL collist_00000294[] = {
	//{ { -156.2124f, -12.32002f, 153.2005f }, 1145.704f, 0, 0, &object_0002A888, 0, 0x80000020 }, //bottom thing
	//{ { -135.9999f, 232.5f, 168.9999f }, 1378.426f, 0, 0, &object_0001C628, 0, 0x80000020 }, //skybox
	{ { -489.0073f, 60.42033f, 27.44495f }, 54.7897f, 0, 0, &object_00024420, 0, 0x40000001 },
	{ { -73.88863f, 14.07522f, 355.2039f }, 12, 0, 0, &object_000249A8, 0, 0xE0000001 },
	{ { -68.36165f, 12.07522f, 369.6001f }, 11.48913f, 0, 0, &object_00024DD8, 0, 0xE0000001 },
	{ { 315.3827f, 39.99965f, 241.2f }, 159.505f, 0, 0, &object_000250F0, 0, 0x20000001 },
	{ { 349.5093f, 91.76884f, 228.0811f }, 124.8488f, 0, 0, &object_00025280, 0, 0x40000001 },
	{ { -316.7599f, 60, -38.8f }, 47.01023f, 0, 0, &object_00025374, 0, 0x40000001 },
	{ { -82.85841f, 16.07522f, 365.8793f }, 12.80625f, 0, 0, &object_000257A4, 0, 0xE0000001 },
	{ { -461.0668f, 46.98744f, 190.8837f }, 60.51218f, 0, 0, &object_00025898, 0, 0x20000001 },
	{ { -227.8953f, 29.22936f, -38.59999f }, 69.32844f, 0, 0, &object_00025A08, 0, 0x20000001 },
	{ { 26.97465f, 60.32244f, -38.59999f }, 211.9123f, 0, 0, &object_00025B98, 0, 0x20000001 },
	{ { -448.766f, 9.71872f, 98.39828f }, 286.6787f, 0, 0, &object_00026454, 0, 0xA0000001 },
	{ { 110.2274f, 5.059998f, 292.3418f }, 324.0142f, 0, 0, &object_00026CF8, 0, 0xA0000001 },
	{ { -447.5f, 4.23999f, 78.89999f }, 280.2989f, 0, 0, &object_00027030, 0, 0xA0000001 },
	{ { 106.8868f, 0.41999f, 295.7218f }, 291.7112f, 0, 0, &object_000273C0, 0, 0xA0000001 },
	{ { -362.429f, 63.21331f, -20.88109f }, 5.17204f, 0, 0, &object_00027618, 0, 0x80000000 },
	{ { -271.0798f, 63.88362f, -22.06691f }, 5.17204f, 0, 0, &object_00027870, 0, 0x80000000 },
	{ { -333.2f, 63.70923f, -23.30421f }, 5.17204f, 0, 0, &object_00027AC8, 0, 0x80000000 },
	{ { -300.3287f, 63.7286f, -23.68478f }, 5.17204f, 0, 0, &object_00027D20, 0, 0x80000000 },
	{ { -528.8173f, 65.06f, 53.43317f }, 5.172039f, 0, 0, &object_00027F78, 0, 0x80000000 },
	{ { -507.9426f, 65.06f, 70.82877f }, 5.172039f, 0, 0, &object_000281D0, 0, 0x80000000 },
	{ { -379.6503f, 83.90427f, 123.8466f }, 5.172039f, 0, 0, &object_00028428, 0, 0x80000000 },
	{ { -379.8914f, 84.05952f, 155.3383f }, 5.172039f, 0, 0, &object_00028680, 0, 0x80000000 },
	{ { -271.8508f, 63.5825f, -58.40284f }, 5.17204f, 0, 0, &object_000288E0, 0, 0x80000000 },
	{ { -333.2f, 63.5825f, -56.43904f }, 5.17204f, 0, 0, &object_00028B14, 0, 0x80000000 },
	{ { -300.3087f, 63.5825f, -56.82456f }, 5.17204f, 0, 0, &object_00028D48, 0, 0x80000000 },
	{ { -363.2f, 63.61201f, -57.40948f }, 5.17204f, 0, 0, &object_00028FA0, 0, 0x80000000 },
	{ { 316.6191f, 40.21781f, 239.9037f }, 159.852f, 0, 0, &object_00029B4C, 0, 0x80000000 },
	{ { 248.8203f, 29.5899f, 342.1477f }, 36.94018f, 0, 0, &object_0002A030, 0, 0x80000000 },
	{ { 301.2702f, 23.63704f, 188.3907f }, 36.96297f, 0, 0, &object_0002A514, 0, 0x80000000 },
	{ { 186.588f, 81.76752f, -39.00066f }, 51.04895f, 0, 0, &object_0002ABE8, 0, 0x80000000 },
	{ { 190.1083f, 92.01031f, -39.00106f }, 41.55763f, 0, 0, &object_0002ACEC, 0, 0x80000000 },
	{ { 190.1142f, 72.77152f, -39.00063f }, 42.20355f, 0, 0, &object_0002B13C, 0, 0x80000000 },
	{ { 360.428f, 99.63942f, 189.2773f }, 171.7267f, 0, 0, &object_0002C240, 0, 0x80000000 },
	{ { -316.4783f, 58.56f, -38.41416f }, 45.01975f, 0, 0, &object_0002DD0C, 0, 0x80000000 },
	{ { -495.0798f, 54.45725f, 33.71989f }, 58.41521f, 0, 0, &object_0002E48C, 0, 0x80000000 },
	{ { -460.9259f, 45.25361f, 190.825f }, 60.36378f, 0, 0, &object_0002F390, 0, 0x80000000 },
	{ { 228.5157f, 51.06384f, -39.00063f }, 119.4578f, 0, 0, &object_0002FB08, 0, 0x80000000 },
	{ { -1.83721f, 1.266485f, 341.1822f }, 86.34064f, 0, 0, &object_00030070, 0, 0x80000000 },
	{ { 240.91f, 145.9474f, -39.06047f }, 110.2039f, 0, 0, &object_00031BD8, 0, 0x80000000 },
	{ { 330.664f, 53.26644f, 247.5216f }, 25.48652f, 0, 0, &object_00031FD0, 0, 0x80000000 },
	{ { 350.8306f, 111.4075f, 147.0803f }, 51.15023f, 0, 0, &object_000323C4, 0, 0x80000000 },
	{ { -502.9709f, 5.567682f, 237.3972f }, 30.04379f, 0, 0, &object_000329C8, 0, 0x80000000 },
	{ { 400.6384f, 129.6107f, 232.6978f }, 49.69886f, 0, 0, &object_00032DA0, 0, 0x80000000 },
	{ { 232.9608f, 50.96797f, -39.00068f }, 112.3134f, 0, 0, &object_000335B8, 0, 0x80000000 },
	{ { 90.74f, 60.56135f, 1.399999f }, 116.0022f, 0, 0, &object_00033768, 0, 0x80000000 },
	{ { 90.74f, 60.56135f, -8.599999f }, 116.0022f, 0, 0, &object_00033918, 0, 0x80000000 },
	{ { 90.74f, 60.56135f, -18.35999f }, 116.0022f, 0, 0, &object_00033AC8, 0, 0x80000000 },
	{ { 90.74f, 60.56135f, -28.48f }, 116.0022f, 0, 0, &object_00033C78, 0, 0x80000000 },
	{ { 90.74f, 60.56135f, -38.59999f }, 116.0022f, 0, 0, &object_00033E28, 0, 0x80000000 },
	{ { 90.74f, 60.56135f, -48.7f }, 116.0022f, 0, 0, &object_00033FD8, 0, 0x80000000 },
	{ { 90.74f, 60.56135f, -58.84f }, 116.0022f, 0, 0, &object_00034188, 0, 0x80000000 },
	{ { 90.74f, 60.56135f, -69.00002f }, 116.0022f, 0, 0, &object_00034338, 0, 0x80000000 },
	{ { 90.74f, 60.56135f, -78.59999f }, 116.0022f, 0, 0, &object_000344E8, 0, 0x80000000 },
	{ { 330.1847f, 83.21158f, 322.1899f }, 72.05115f, 0, 0, &object_00034664, 0, 0x80000000 },
	{ { 60.36887f, 12.17275f, 314.1743f }, 251.5036f, 0, 0, &object_00034894, 0, 0x80000000 },
	{ { -411.2009f, 25.82406f, 211.7643f }, 7.071547f, 0, 0, &object_00034A34, 0, 0x80000000 },
	{ { -419.0303f, 25.82406f, 225.8267f }, 7.071547f, 0, 0, &object_00034BD4, 0, 0x80000000 },
	{ { 51.39999f, 59.05997f, -38.59999f }, 160.8439f, 0, 0, &object_00034F90, 0, 0x80000000 },
	{ { -189.1506f, 30.06f, -38.72111f }, 102.6879f, 0, 0, &object_00035610, 0, 0x80000000 },
	{ { -220.5883f, 77.63603f, -38.47664f }, 149.6107f, 0, 0, &object_00035DAC, 0, 0x80000000 },
	{ { 306.541f, 84.1335f, -39.03931f }, 178.0243f, 0, 0, &object_000381DC, 0, 0x80000000 },
	{ { -425.9185f, 32.00067f, -57.71568f }, 156.5121f, 0, 0, &object_00039878, 0, 0xA0000001 },
	{ { -547.4999f, 25.08982f, 112.5f }, 98.92121f, 0, 0, &object_00039FA4, 0, 0x80000001 }, //islet with Cheer Chao
	{ { -63.66364f, 5.059297f, 361.6849f }, 73.92189f, 0, 0, &object_0003A458, 0, 0xC0000001 },
	{ { 270.7106f, 5.059297f, 236.98f }, 52.51381f, 0, 0, &object_0003A878, 0, 0xC0000001 },
	{ { -365.381f, 38.34503f, 162.0882f }, 161.9018f, 0, 0, &object_0003BF2C, 0, 0xC0000001 },
	{ { 41.01854f, 44.15765f, 142.8487f }, 248.7747f, 0, 0, &object_0003D0CC, 0, 0xC0000001 },
	{ { 15.17292f, 32.93121f, 25.09881f }, 204.1431f, 0, 0, &object_0003D6C4, 0, 0xC0000001 },
	{ { 15.23967f, 32.93121f, -102.3635f }, 204.1431f, 0, 0, &object_0003DCC8, 0, 0xC0000001 },
	{ { -289.2477f, 41.74885f, 143.566f }, 150.4362f, 0, 0, &object_0003EF7C, 0, 0xC0000001 },
	{ { -97.2035f, 32.95545f, 368.5509f }, 70.20785f, 0, 0, &object_0002D2C8, 0, 0x80000000 }, //dome thing
	{ { -97.2035f, 32.95545f, 368.5509f }, 70.20785f, 0, 0, &object_0002D2C8X, 0, 0x80040000 }, //dome thing trans
	{ { -464.2832f, 62.36529f, -21.83897f }, 7.544489f, 0, 0, &object_00030358, 0, 0x80040000 },//tree stump
	{ { -238.2666f, 77.14271f, -12.39119f }, 33.07706f, 0, 0, &object_0003F66C, 0, 0x80040000 }, //palm trees
	{ { -56.89705f, 27.49385f, 329.591f }, 33.07706f, 0, 0, &object_00039118, 0, 0x80040000 },
	{ { -237.2212f, 77.53709f, -75.26991f }, 33.07706f, 0, 0, &object_0003F6A0, 0, 0x80040000 },
	{ { -575.2241f, 78.25593f, 104.1141f }, 33.07706f, 0, 0, &object_0003F6D4, 0, 0x80040000 },
	{ { -44.91636f, 27.49385f, 386.6969f }, 33.07706f, 0, 0, &object_0003F708, 0, 0x80040000 },
	{ { -441.7828f, 81.9217f, -42.6448f }, 33.07706f, 0, 0, &object_0003F73C, 0, 0x80040000 },
	{ { -426.2906f, 79.55817f, 5.641203f }, 33.07706f, 0, 0, &object_0003F770, 0, 0x80040000 }, //end palm trees
	{ { -156.2124f, -0.00017f, 153.2005f }, 1145.704f, 0, 0, &object_0002A6C0, 0, 0x80000000 }, //water 3
	{ { -447.45f, 15.06f, 80.69999f }, 283.0959f, 0, 0, &object_0003F2A8, 0, 0x84000002 }, //water 1
	{ { 105.3728f, 5.059998f, 290.2513f }, 292.4098f, 0, 0, &object_0003F638, 0, 0x84000002 }, //water 2
	{ { -147.5748f, 28.84278f, 145.0127f }, 924.2148f, 0, 0, &object_00025E10, 0, 0x80040420 }, //walls
};

extern "C" __declspec(dllexport) LandTable landtable_00000E64 = { LengthOfArray(collist_00000294), 0, 0xC, 0, 3000, collist_00000294, NULL, "AL_RACE02", (NJS_TEXLIST *)&texlist_ChaoRace, 0, 0 };

#pragma warning(pop)