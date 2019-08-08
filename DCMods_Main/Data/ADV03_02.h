#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00099948[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009995C[] = {
	0x8000u | 8, 4, 3, 5, 2, 6, 1, 7, 0,
	0x8000u | 8, 8, 4, 9, 5, 10, 6, 11, 7
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00099980[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0009995C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00099998[] = {
	{ -600.9328f, 253.2563f, 402.2672f },
	{ -513.9016f, 264.6073f, 346.938f },
	{ -520.4057f, 259.869f, 230.2365f },
	{ -515.2136f, 269.4875f, 93.05856f },
	{ -515.2136f, 369.4875f, 93.05856f },
	{ -520.4057f, 359.869f, 230.2365f },
	{ -513.9016f, 364.6073f, 346.938f },
	{ -600.9328f, 353.2563f, 402.2672f },
	{ -515.2136f, 469.4875f, 93.05856f },
	{ -520.4057f, 459.869f, 230.2365f },
	{ -513.9016f, 464.6073f, 346.938f },
	{ -600.9328f, 453.2563f, 402.2672f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00099A28[] = {
	{ 0.5365f, 0, 0.8439f },
	{ 0.883871f, 0, 0.467731f },
	{ 0.999956f, 0, -0.009376f },
	{ 0.999285f, 0, 0.037822f },
	{ 0.999284f, 0, 0.037822f },
	{ 0.9999599f, 0, -0.008921999f },
	{ 0.889559f, 0, 0.456821f },
	{ 0.5365f, 0, 0.8439f },
	{ 0.999284f, 0, 0.037822f },
	{ 0.999964f, 0, -0.008498f },
	{ 0.895661f, 0, 0.444737f },
	{ 0.5365f, 0, 0.8439f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00099AB8 = { vertex_00099998, normal_00099A28, LengthOfArray<Sint32>(vertex_00099998), meshlist_00099980, matlist_00099948, LengthOfArray<Uint16>(meshlist_00099980), LengthOfArray<Uint16>(matlist_00099948), { -557.4172f, 361.3719f, 247.6629f }, 188.657f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00099AE0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00099AB8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00099B14[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00099B28[] = {
	0x8000u | 10, 9, 14, 8, 13, 7, 12, 6, 11, 5, 10,
	0x8000u | 10, 5, 4, 6, 3, 7, 2, 8, 1, 9, 0
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00099B54[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00099B28, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00099B6C[] = {
	{ -515.2136f, 269.4875f, 93.05856f },
	{ -444.5405f, 259.1615f, -17.02681f },
	{ -465.3212f, 251.9754f, -123.8794f },
	{ -471.5118f, 273.5332f, -220.1101f },
	{ -506.203f, 252.7255f, -299.4345f },
	{ -506.203f, 352.7255f, -299.4345f },
	{ -471.5118f, 373.5332f, -220.1101f },
	{ -465.3212f, 351.9754f, -123.8794f },
	{ -444.5405f, 359.1615f, -17.02681f },
	{ -515.2136f, 369.4875f, 93.05856f },
	{ -506.203f, 452.7255f, -299.4345f },
	{ -471.5118f, 473.5332f, -220.1101f },
	{ -465.3212f, 451.9754f, -123.8794f },
	{ -444.5405f, 459.1615f, -17.02681f },
	{ -515.2136f, 469.4875f, 93.05856f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00099C20[] = {
	{ 0.841512f, 0, 0.540238f },
	{ 0.985453f, 0, 0.169946f },
	{ 0.9913509f, 0, -0.131235f },
	{ 0.971567f, 0, -0.236764f },
	{ 0.916213f, 0, -0.400691f },
	{ 0.916213f, 0, -0.400691f },
	{ 0.971751f, 0, -0.236009f },
	{ 0.991798f, 0, -0.127812f },
	{ 0.982133f, 0, 0.18819f },
	{ 0.841512f, 0, 0.540238f },
	{ 0.916213f, 0, -0.400691f },
	{ 0.9719959f, 0, -0.234996f },
	{ 0.992162f, 0, -0.124958f },
	{ 0.978505f, 0, 0.206222f },
	{ 0.841512f, 0, 0.540238f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00099CD4 = { vertex_00099B6C, normal_00099C20, LengthOfArray<Sint32>(vertex_00099B6C), meshlist_00099B54, matlist_00099B14, LengthOfArray<Uint16>(meshlist_00099B54), LengthOfArray<Uint16>(matlist_00099B14), { -479.877f, 362.7543f, -103.188f }, 225.3546f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00099CFC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00099CD4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00099D30[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00099D44[] = {
	0x8000u | 10, 9, 14, 8, 13, 7, 12, 6, 11, 5, 10,
	0x8000u | 10, 5, 4, 6, 3, 7, 2, 8, 1, 9, 0
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00099D70[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00099D44, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00099D88[] = {
	{ -506.203f, 252.7255f, -299.4345f },
	{ -531.2958f, 291.2286f, -406.9625f },
	{ -519.6003f, 326.8151f, -535.4988f },
	{ -469.4478f, 327.1873f, -639.0505f },
	{ -412.2147f, 334.3868f, -726.7702f },
	{ -412.2147f, 434.3868f, -726.7702f },
	{ -469.4478f, 427.1873f, -639.0505f },
	{ -519.6003f, 426.8151f, -535.4988f },
	{ -531.2958f, 391.2286f, -406.9625f },
	{ -506.203f, 352.7255f, -299.4345f },
	{ -412.2147f, 534.3868f, -726.7702f },
	{ -469.4478f, 527.1873f, -639.0505f },
	{ -519.6003f, 526.8152f, -535.4988f },
	{ -531.2958f, 491.2286f, -406.9625f },
	{ -506.203f, 452.7255f, -299.4345f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00099E3C[] = {
	{ 0.973835f, 0, -0.227255f },
	{ 0.995038f, 0, -0.099496f },
	{ 0.967326f, 0, 0.253535f },
	{ 0.871238f, 0, 0.49086f },
	{ 0.837503f, 0, 0.546433f },
	{ 0.837503f, 0, 0.546433f },
	{ 0.870508f, 0, 0.492155f },
	{ 0.963535f, 0, 0.267583f },
	{ 0.997603f, 0, -0.069204f },
	{ 0.973835f, 0, -0.227255f },
	{ 0.837503f, 0, 0.546433f },
	{ 0.869805f, 0, 0.493395f },
	{ 0.958779f, 0, 0.284155f },
	{ 0.999295f, 0, -0.037534f },
	{ 0.973835f, 0, -0.227255f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00099EF0 = { vertex_00099D88, normal_00099E3C, LengthOfArray<Sint32>(vertex_00099D88), meshlist_00099D70, matlist_00099D30, LengthOfArray<Uint16>(meshlist_00099D70), LengthOfArray<Uint16>(matlist_00099D30), { -471.7553f, 393.5561f, -513.1024f }, 255.9047f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00099F18 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00099EF0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00099F4C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00099F60[] = {
	0x8000u | 10, 9, 14, 8, 13, 7, 12, 6, 11, 5, 10,
	0x8000u | 10, 5, 4, 6, 3, 7, 2, 8, 1, 9, 0
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00099F8C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00099F60, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00099FA4[] = {
	{ -412.2147f, 334.3868f, -726.7702f },
	{ -411.513f, 328.9364f, -834.9347f },
	{ -348.9101f, 340.9864f, -909.3071f },
	{ -258.5143f, 346.734f, -901.9807f },
	{ -173.2758f, 367.5608f, -961.5109f },
	{ -173.2758f, 467.5608f, -961.5109f },
	{ -258.5143f, 446.734f, -901.9807f },
	{ -348.9101f, 440.9864f, -909.3071f },
	{ -411.513f, 428.9364f, -834.9347f },
	{ -412.2147f, 434.3868f, -726.7702f },
	{ -173.2758f, 567.5608f, -961.5109f },
	{ -258.5143f, 546.734f, -901.9807f },
	{ -348.9101f, 540.9864f, -909.3071f },
	{ -411.513f, 528.9363f, -834.9347f },
	{ -412.2147f, 534.3868f, -726.7702f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009A058[] = {
	{ 0.999979f, 0, 0.006488f },
	{ 0.941344f, 0, 0.337449f },
	{ 0.412467f, 0, 0.910973f },
	{ 0.231076f, 0, 0.972936f },
	{ 0.57258f, 0, 0.819849f },
	{ 0.57258f, 0, 0.819849f },
	{ 0.261319f, 0, 0.965252f },
	{ 0.384919f, 0, 0.92295f },
	{ 0.93831f, 0, 0.345795f },
	{ 0.999979f, 0, 0.006488f },
	{ 0.57258f, 0, 0.819849f },
	{ 0.288859f, 0, 0.957372f },
	{ 0.355931f, 0, 0.934512f },
	{ 0.935531f, 0, 0.353244f },
	{ 0.999979f, 0, 0.006488f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009A10C = { vertex_00099FA4, normal_0009A058, LengthOfArray<Sint32>(vertex_00099FA4), meshlist_00099F8C, matlist_00099F4C, LengthOfArray<Uint16>(meshlist_00099F8C), LengthOfArray<Uint16>(matlist_00099F4C), { -292.7453f, 448.2486f, -844.1406f }, 167.4776f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009A134 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009A10C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009A168[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009A17C[] = {
	0x8000u | 10, 9, 14, 8, 13, 7, 12, 6, 11, 5, 10,
	0x8000u | 10, 5, 4, 6, 3, 7, 2, 8, 1, 9, 0
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009A1A8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0009A17C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009A1C0[] = {
	{ -173.2758f, 367.5608f, -961.5109f },
	{ -99.36198f, 347.7229f, -889.7546f },
	{ -5.328627f, 346.7114f, -818.7344f },
	{ 90.41737f, 379.3078f, -830.5027f },
	{ 89.71553f, 422.922f, -713.1014f },
	{ 89.71553f, 522.9219f, -713.1014f },
	{ 90.41737f, 479.3078f, -830.5027f },
	{ -5.328627f, 446.7114f, -818.7344f },
	{ -99.36198f, 447.7229f, -889.7546f },
	{ -173.2758f, 467.5608f, -961.5109f },
	{ 89.71553f, 622.9219f, -713.1014f },
	{ 90.41737f, 579.3078f, -830.5027f },
	{ -5.328627f, 546.7114f, -818.7344f },
	{ -99.36198f, 547.7229f, -889.7546f },
	{ -173.2758f, 567.5608f, -961.5109f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009A274[] = {
	{ -0.696558f, 0, 0.717501f },
	{ -0.647702f, 0, 0.761894f },
	{ -0.303149f, 0, 0.952943f },
	{ -0.464542f, 0, 0.885551f },
	{ -0.999982f, 0, -0.005978f },
	{ -0.999982f, 0, -0.005978f },
	{ -0.664809f, 0, 0.747013f },
	{ -0.259286f, 0, 0.9658009f },
	{ -0.650867f, 0, 0.759192f },
	{ -0.696558f, 0, 0.717501f },
	{ -0.999982f, 0, -0.005978f },
	{ -0.823153f, 0, 0.567819f },
	{ -0.223455f, 0, 0.974714f },
	{ -0.653676f, 0, 0.756775f },
	{ -0.696558f, 0, 0.717501f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009A328 = { vertex_0009A1C0, normal_0009A274, LengthOfArray<Sint32>(vertex_0009A1C0), meshlist_0009A1A8, matlist_0009A168, LengthOfArray<Uint16>(meshlist_0009A1A8), LengthOfArray<Uint16>(matlist_0009A168), { -41.42923f, 484.8167f, -837.3062f }, 185.7415f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009A350 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009A328, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009A384[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009A398[] = {
	0x8000u | 10, 16, 17, 12, 13, 8, 9, 4, 5, 3, 2,
	10, 2, 1, 5, 6, 9, 10, 13, 14, 17, 18,
	10, 1, 0, 6, 7, 10, 11, 14, 15, 18, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009A3DC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0009A398, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009A3F4[] = {
	{ 322.0959f, -60.91554f, 662.9922f },
	{ 411.7874f, -45.17593f, 594.8542f },
	{ 487.515f, -30.85904f, 517.8473f },
	{ 600.0004f, 35.83952f, 421.5496f },
	{ 600.0004f, 135.8395f, 421.5496f },
	{ 487.515f, 69.14096f, 517.8473f },
	{ 411.7874f, 54.82406f, 594.8542f },
	{ 322.0959f, 39.08445f, 662.9922f },
	{ 600.0004f, 235.8395f, 421.5496f },
	{ 487.515f, 169.141f, 517.8473f },
	{ 411.7874f, 154.8241f, 594.8542f },
	{ 322.0959f, 139.0844f, 662.9922f },
	{ 600.0004f, 335.8395f, 421.5496f },
	{ 487.515f, 269.141f, 517.8473f },
	{ 411.7874f, 254.8241f, 594.8542f },
	{ 322.0959f, 239.0844f, 662.9922f },
	{ 600.0004f, 435.8395f, 421.5496f },
	{ 487.515f, 369.141f, 517.8473f },
	{ 411.7874f, 354.824f, 594.8542f },
	{ 322.0959f, 339.0845f, 662.9922f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009A4E4[] = {
	{ -0.604928f, 0, -0.79628f },
	{ -0.656011f, 0, -0.754751f },
	{ -0.688378f, 0, -0.725352f },
	{ -0.650331f, 0, -0.7596509f },
	{ -0.650331f, 0, -0.7596509f },
	{ -0.682295f, 0, -0.731077f },
	{ -0.66068f, 0, -0.750667f },
	{ -0.604928f, 0, -0.79628f },
	{ -0.650331f, 0, -0.7596509f },
	{ -0.682295f, 0, -0.731077f },
	{ -0.66068f, 0, -0.750667f },
	{ -0.604928f, 0, -0.79628f },
	{ -0.650331f, 0, -0.7596509f },
	{ -0.682295f, 0, -0.731077f },
	{ -0.66068f, 0, -0.750667f },
	{ -0.604928f, 0, -0.79628f },
	{ -0.650331f, 0, -0.7596509f },
	{ -0.677207f, 0, -0.735792f },
	{ -0.665345f, 0, -0.746536f },
	{ -0.604928f, 0, -0.79628f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009A5D4 = { vertex_0009A3F4, normal_0009A4E4, LengthOfArray<Sint32>(vertex_0009A3F4), meshlist_0009A3DC, matlist_0009A384, LengthOfArray<Uint16>(meshlist_0009A3DC), LengthOfArray<Uint16>(matlist_0009A384), { 461.0482f, 187.462f, 542.2709f }, 276.1613f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009A5FC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009A5D4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009A630[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009A644[] = {
	10, 17, 16, 13, 12, 9, 8, 5, 4, 0, 1,
	8, 5, 6, 9, 10, 13, 14, 17, 18,
	0x8000u | 10, 1, 2, 4, 3, 8, 7, 12, 11, 16, 15,
	6, 20, 6, 21, 5, 19, 0
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009A690[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0009A644, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009A6A8[] = {
	{ 115.1325f, -71.09544f, 788.5297f },
	{ 200.0001f, -74.97592f, 789.5499f },
	{ 322.0959f, -60.91554f, 662.9922f },
	{ 322.0959f, 39.08445f, 662.9922f },
	{ 200.0001f, 25.02407f, 789.5499f },
	{ 115.1325f, 28.90455f, 788.5297f },
	{ 8.048442f, 28.90436f, 789.5871f },
	{ 322.0959f, 139.0844f, 662.9922f },
	{ 200.0001f, 125.0241f, 789.5499f },
	{ 115.1325f, 128.9045f, 788.5297f },
	{ 8.048442f, 128.9044f, 789.5871f },
	{ 322.0959f, 239.0844f, 662.9922f },
	{ 200.0001f, 225.0241f, 789.5499f },
	{ 115.1325f, 228.9045f, 788.5297f },
	{ 8.048442f, 228.9044f, 789.5871f },
	{ 322.0959f, 339.0845f, 662.9922f },
	{ 200.0001f, 325.024f, 789.5499f },
	{ 115.1325f, 328.9045f, 788.5297f },
	{ 8.048442f, 328.9044f, 789.5871f },
	{ 45.99396f, -80, 788 },
	{ 0.493958f, 20, 788 },
	{ 45.99396f, 20, 788 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009A7B0[] = {
	{ 0.005675f, 0.003577f, -0.9999779f },
	{ -0.380908f, 0, -0.924613f },
	{ -0.719679f, 0, -0.694307f },
	{ -0.719679f, 0, -0.694307f },
	{ -0.385417f, 0, -0.9227419f },
	{ 0.003451f, 0.001745f, -0.999993f },
	{ -0.004257f, 0.004122f, -0.999982f },
	{ -0.719679f, 0, -0.694307f },
	{ -0.385417f, 0, -0.9227419f },
	{ 0.001073f, 0, -0.999999f },
	{ -0.009873999f, 0, -0.9999509f },
	{ -0.719679f, 0, -0.694307f },
	{ -0.385417f, 0, -0.9227419f },
	{ 0.001073f, 0, -0.999999f },
	{ -0.009873999f, 0, -0.9999509f },
	{ -0.719679f, 0, -0.694307f },
	{ -0.389573f, 0, -0.920996f },
	{ 0.000911f, 0, -1 },
	{ -0.009873999f, 0, -0.9999509f },
	{ -0.000361f, 0.006981f, -0.999976f },
	{ -0.000361f, 0.006981f, -0.999976f },
	{ -0.000361f, 0.006981f, -0.999976f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009A8B8 = { vertex_0009A6A8, normal_0009A7B0, LengthOfArray<Sint32>(vertex_0009A6A8), meshlist_0009A690, matlist_0009A630, LengthOfArray<Uint16>(meshlist_0009A690), LengthOfArray<Uint16>(matlist_0009A630), { 161.2949f, 129.5422f, 726.2897f }, 218.8938f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009A8E0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009A8B8, 0.006042f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009A914[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009A928[] = {
	0x8000u | 10, 9, 14, 8, 13, 7, 12, 6, 11, 5, 10,
	0x8000u | 10, 5, 4, 6, 3, 7, 2, 8, 1, 9, 0
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009A954[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0009A928, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009A96C[] = {
	{ 89.71553f, 422.922f, -713.1014f },
	{ 121.433f, 413.1959f, -583.1205f },
	{ 206.8117f, 384.9963f, -590.9416f },
	{ 292.3559f, 340.4476f, -506.6414f },
	{ 362.0359f, 279.3676f, -455.9994f },
	{ 362.0359f, 379.3676f, -455.9994f },
	{ 292.3559f, 440.4476f, -506.6414f },
	{ 206.8117f, 484.9963f, -590.9416f },
	{ 121.433f, 513.1959f, -583.1205f },
	{ 89.71553f, 522.9219f, -713.1014f },
	{ 362.0359f, 479.3676f, -455.9994f },
	{ 292.3559f, 540.4476f, -506.6414f },
	{ 206.8117f, 584.9963f, -590.9416f },
	{ 121.433f, 613.1959f, -583.1205f },
	{ 89.71553f, 622.9219f, -713.1014f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009AA20[] = {
	{ -0.971495f, 0, 0.237061f },
	{ -0.497779f, 0, 0.867304f },
	{ -0.427153f, 0, 0.904179f },
	{ -0.630249f, 0, 0.776393f },
	{ -0.58791f, 0, 0.808926f },
	{ -0.587911f, 0, 0.808926f },
	{ -0.646718f, 0, 0.762729f },
	{ -0.336655f, 0, 0.941628f },
	{ -0.5810789f, 0, 0.8138469f },
	{ -0.971495f, 0, 0.237061f },
	{ -0.587911f, 0, 0.808926f },
	{ -0.665797f, 0, 0.746133f },
	{ -0.240651f, 0, 0.970612f },
	{ -0.671106f, 0, 0.741362f },
	{ -0.971495f, 0, 0.237061f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009AAD4 = { vertex_0009A96C, normal_0009AA20, LengthOfArray<Sint32>(vertex_0009A96C), meshlist_0009A954, matlist_0009A914, LengthOfArray<Uint16>(meshlist_0009A954), LengthOfArray<Uint16>(matlist_0009A914), { 225.8758f, 451.1447f, -584.5504f }, 214.5525f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009AAFC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009AAD4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009AB30[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009AB44[] = {
	6, 10, 11, 6, 7, 1, 0,
	6, 1, 2, 6, 5, 10, 9,
	6, 2, 3, 5, 4, 9, 8
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009AB70[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0009AB44, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009AB88[] = {
	{ 362.0359f, 279.3676f, -455.9994f },
	{ 431.1138f, 217.0392f, -412.5846f },
	{ 443.671f, 217.669f, -270.1508f },
	{ 504.0844f, 205.4272f, -139.3769f },
	{ 504.0844f, 305.4272f, -139.3769f },
	{ 443.671f, 317.669f, -270.1508f },
	{ 431.1138f, 317.0392f, -412.5846f },
	{ 362.0359f, 379.3676f, -455.9994f },
	{ 504.0844f, 405.4272f, -139.3769f },
	{ 443.671f, 417.669f, -270.1508f },
	{ 431.1138f, 417.0392f, -412.5846f },
	{ 362.0359f, 479.3676f, -455.9994f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009AC18[] = {
	{ -0.532123f, 0, 0.846667f },
	{ -0.91307f, 0, 0.407803f },
	{ -0.965176f, 0, 0.261601f },
	{ -0.907811f, 0, 0.41938f },
	{ -0.907811f, 0, 0.41938f },
	{ -0.9663f, 0, 0.257417f },
	{ -0.8531449f, 0, 0.521674f },
	{ -0.532123f, 0, 0.846667f },
	{ -0.907811f, 0, 0.41938f },
	{ -0.9674709f, 0, 0.252984f },
	{ -0.80607f, 0, 0.5918199f },
	{ -0.532123f, 0, 0.846667f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009ACA8 = { vertex_0009AB88, normal_0009AC18, LengthOfArray<Sint32>(vertex_0009AB88), meshlist_0009AB70, matlist_0009AB30, LengthOfArray<Uint16>(meshlist_0009AB70), LengthOfArray<Uint16>(matlist_0009AB30), { 433.0602f, 342.3974f, -297.6881f }, 209.3401f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009ACD0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009ACA8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009AD04[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009AD18[] = {
	0x8000u | 9, 5, 3, 6, 0, 4, 10, 13, 11, 14,
	8, 6, 8, 4, 7, 13, 15, 14, 16,
	8, 11, 12, 10, 9, 0, 1, 3, 2
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009AD50[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0009AD18, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009AD68[] = {
	{ -45, 50, -83.33334f },
	{ -45, -50, -83.33334f },
	{ -45, -50, -250 },
	{ -45, 50, -250 },
	{ 46, 50, -83.33334f },
	{ 0.5f, 50, -250 },
	{ 46, 50, -250 },
	{ 46, -50, -83.33334f },
	{ 46, -50, -250 },
	{ -45, -50, 83.33334f },
	{ -45, 50, 83.33334f },
	{ -45, 50, 250 },
	{ -45, -50, 250 },
	{ 46, 50, 83.33334f },
	{ 46, 50, 250 },
	{ 46, -50, 83.33334f },
	{ 46, -50, 250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009AE34[] = {
	{ 0.7071069f, -0.7071069f, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ 0, -1, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 1, 0, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009AF00 = { vertex_0009AD68, normal_0009AE34, LengthOfArray<Sint32>(vertex_0009AD68), meshlist_0009AD50, matlist_0009AD04, LengthOfArray<Uint16>(meshlist_0009AD50), LengthOfArray<Uint16>(matlist_0009AD04), { 0.5f, 0, 0 }, 254.951f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009AF28 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009AF00, 0, -30, 1038, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009AF5C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009AF70[] = {
	0x8000u | 10, 9, 14, 8, 13, 7, 12, 6, 11, 5, 10,
	0x8000u | 10, 5, 4, 6, 3, 7, 2, 8, 1, 9, 0
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009AF9C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0009AF70, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009AFB4[] = {
	{ 504.0844f, 205.4272f, -139.3769f },
	{ 448.8851f, 212.7419f, -9.737366f },
	{ 453.7444f, 228.39f, 102.7235f },
	{ 548.0829f, 203.2293f, 175.6826f },
	{ 575.7904f, 204.0962f, 281.0717f },
	{ 575.7904f, 304.0962f, 281.0717f },
	{ 548.0829f, 303.2293f, 175.6826f },
	{ 453.7444f, 328.39f, 102.7235f },
	{ 448.8851f, 312.7419f, -9.737366f },
	{ 504.0844f, 305.4272f, -139.3769f },
	{ 575.7904f, 404.0962f, 281.0717f },
	{ 548.0829f, 403.2293f, 175.6826f },
	{ 453.7444f, 428.39f, 102.7235f },
	{ 448.8851f, 412.7419f, -9.737366f },
	{ 504.0844f, 405.4272f, -139.3769f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009B068[] = {
	{ -0.920069f, 0, -0.391757f },
	{ -0.981285f, 0, -0.19256f },
	{ -0.883678f, 0, 0.468095f },
	{ -0.846424f, 0, 0.53251f },
	{ -0.967134f, 0, 0.254266f },
	{ -0.967134f, 0, 0.254266f },
	{ -0.833825f, 0, 0.552029f },
	{ -0.887989f, 0, 0.459864f },
	{ -0.983901f, 0, -0.178713f },
	{ -0.920069f, 0, -0.391757f },
	{ -0.967134f, 0, 0.254266f },
	{ -0.822479f, 0, 0.568796f },
	{ -0.8932599f, 0, 0.449541f },
	{ -0.986197f, 0, -0.165574f },
	{ -0.920069f, 0, -0.391757f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009B11C = { vertex_0009AFB4, normal_0009B068, LengthOfArray<Sint32>(vertex_0009AFB4), meshlist_0009AF9C, matlist_0009AF5C, LengthOfArray<Uint16>(meshlist_0009AF9C), LengthOfArray<Uint16>(matlist_0009AF5C), { 512.3378f, 315.8096f, 70.84738f }, 238.4714f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009B144 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009B11C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009B178[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009B18C[] = {
	6, 13, 14, 8, 9, 1, 0,
	0x8000u | 8, 1, 8, 2, 7, 3, 5, 4, 6,
	0x8000u | 8, 8, 13, 7, 12, 5, 10, 6, 11
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009B1C0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0009B18C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009B1D8[] = {
	{ 575.7904f, 204.0962f, 281.0717f },
	{ 684.0887f, 213.8119f, 269.1934f },
	{ 767.7232f, 218.7079f, 224.33f },
	{ 848.532f, 218.2004f, 291.6443f },
	{ 945.9682f, 221.9729f, 298.3197f },
	{ 848.532f, 318.2004f, 291.6443f },
	{ 945.9682f, 321.9729f, 298.3197f },
	{ 767.7232f, 318.7079f, 224.33f },
	{ 684.0887f, 313.8119f, 269.1934f },
	{ 575.7904f, 304.0962f, 281.0717f },
	{ 848.532f, 418.2004f, 291.6443f },
	{ 945.9682f, 421.9729f, 298.3197f },
	{ 767.7232f, 418.7079f, 224.33f },
	{ 684.0887f, 413.8119f, 269.1934f },
	{ 575.7904f, 404.0962f, 281.0717f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009B28C[] = {
	{ 0.109027f, 0, 0.994039f },
	{ 0.28809f, 0, 0.957603f },
	{ -0.09111299f, 0, 0.995841f },
	{ -0.375564f, 0, 0.926797f },
	{ -0.06834999f, 0, 0.997661f },
	{ -0.37229f, 0, 0.928117f },
	{ -0.06834999f, 0, 0.997661f },
	{ -0.100921f, 0, 0.994895f },
	{ 0.296287f, 0, 0.955099f },
	{ 0.109027f, 0, 0.994039f },
	{ -0.369101f, 0, 0.929389f },
	{ -0.06834999f, 0, 0.997661f },
	{ -0.111077f, 0, 0.993812f },
	{ 0.304657f, 0, 0.952462f },
	{ 0.109027f, 0, 0.994039f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009B340 = { vertex_0009B1D8, normal_0009B28C, LengthOfArray<Sint32>(vertex_0009B1D8), meshlist_0009B1C0, matlist_0009B178, LengthOfArray<Uint16>(meshlist_0009B1C0), LengthOfArray<Uint16>(matlist_0009B178), { 760.8793f, 313.0345f, 261.3249f }, 188.7499f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009B368 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009B340, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009B39C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009B3B0[] = {
	10, 22, 21, 17, 16, 12, 11, 7, 6, 2, 3,
	10, 21, 20, 16, 15, 11, 10, 6, 5, 3, 4,
	10, 2, 1, 7, 8, 12, 13, 17, 18, 22, 23,
	10, 1, 0, 8, 9, 13, 14, 18, 19, 23, 24
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009B408[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0009B3B0, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009B420[] = {
	{ 600.0004f, 35.83952f, 421.5496f },
	{ 700.0005f, 44.72787f, 421.5496f },
	{ 800.0011f, 41.10547f, 329.5495f },
	{ 900.0012f, 33.87398f, 329.5495f },
	{ 900.0012f, 39.69129f, 237.5495f },
	{ 900.0012f, 139.6913f, 237.5495f },
	{ 900.0012f, 133.874f, 329.5495f },
	{ 800.0011f, 141.1055f, 329.5495f },
	{ 700.0005f, 144.7279f, 421.5496f },
	{ 600.0004f, 135.8395f, 421.5496f },
	{ 900.0012f, 239.6913f, 237.5495f },
	{ 900.0012f, 233.874f, 329.5495f },
	{ 800.0011f, 241.1055f, 329.5495f },
	{ 700.0005f, 244.7279f, 421.5496f },
	{ 600.0004f, 235.8395f, 421.5496f },
	{ 900.0012f, 339.6913f, 237.5495f },
	{ 900.0012f, 333.874f, 329.5495f },
	{ 800.0011f, 341.1055f, 329.5495f },
	{ 700.0005f, 344.7279f, 421.5496f },
	{ 600.0004f, 335.8395f, 421.5496f },
	{ 900.0012f, 439.6913f, 237.5495f },
	{ 900.0012f, 433.874f, 329.5495f },
	{ 800.0011f, 441.1055f, 329.5495f },
	{ 700.0005f, 444.7279f, 421.5496f },
	{ 600.0004f, 435.8395f, 421.5496f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009B54C[] = {
	{ 0, 0, -1 },
	{ -0.356438f, 0, -0.934319f },
	{ -0.35207f, 0, -0.9359739f },
	{ -0.7092299f, 0, -0.704977f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.363365f, 0, -0.9316469f },
	{ -0.363364f, 0, -0.9316469f },
	{ 0, 0, -1 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.363365f, 0, -0.9316469f },
	{ -0.363364f, 0, -0.9316469f },
	{ 0, 0, -1 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.363365f, 0, -0.9316469f },
	{ -0.363364f, 0, -0.9316469f },
	{ 0, 0, -1 },
	{ -1, 0, 0 },
	{ -0.705153f, 0, -0.7090549f },
	{ -0.374936f, 0, -0.9270509f },
	{ -0.370797f, 0, -0.928714f },
	{ 0, 0, -1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009B678 = { vertex_0009B420, normal_0009B54C, LengthOfArray<Sint32>(vertex_0009B420), meshlist_0009B408, matlist_0009B39C, LengthOfArray<Uint16>(meshlist_0009B408), LengthOfArray<Uint16>(matlist_0009B39C), { 750.0007f, 239.3009f, 329.5495f }, 225.0872f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009B6A0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009B678, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009B6D4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009B6E8[] = {
	0x8000u | 5, 3, 2, 10, 11, 17,
	7, 8, 9, 15, 7, 12, 0, 1,
	3, 4, 5, 6,
	10, 3, 4, 10, 6, 17, 8, 11, 15, 16, 12,
	0x8000u | 8, 2, 14, 11, 18, 16, 19, 12, 1,
	3, 1, 13, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009B73C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_0009B6E8, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009B754[] = {
	{ -165.6097f, 15.02316f, -23.58997f },
	{ -96.73972f, -2.326294f, -127.6423f },
	{ 84.24487f, 0.770294f, -120.3527f },
	{ 173.4598f, 15.04633f, 22.63623f },
	{ 272.4149f, 12.04254f, 95.26049f },
	{ 247.3827f, 1.283356f, 103.2382f },
	{ 228.1729f, 135.763f, 113.6002f },
	{ -137.6969f, 153.7468f, 29.6466f },
	{ 68.86862f, 153.763f, 75.48693f },
	{ -50.4335f, 153.7468f, 169.9215f },
	{ 172.8163f, 75.40465f, 23.11816f },
	{ 84.55674f, 154.2667f, -77.43285f },
	{ -96.21828f, 152.7103f, -84.9978f },
	{ -14, -11, -130 },
	{ 77, -11, -130 },
	{ -34.41412f, 153.7549f, 52.56677f },
	{ -5.83078f, 153.4884f, -98.21532f },
	{ 156.3648f, 145.0148f, -2.91626f },
	{ 77, 89, -130 },
	{ -14, 89, -130 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009B844[] = {
	{ 0.853987f, -0.220136f, 0.471429f },
	{ 0.38777f, -0.180934f, 0.903824f },
	{ -0.754729f, -0.11716f, 0.64549f },
	{ -0.735168f, -0.013249f, 0.677756f },
	{ -0.91715f, -0.181653f, -0.354736f },
	{ -0.314505f, 0.028185f, -0.948837f },
	{ -0.70691f, -0.573952f, 0.413349f },
	{ 0.396608f, -0.905785f, 0.149182f },
	{ -0.046451f, -0.998899f, -0.006601f },
	{ 0.00009099999f, -1, -0.00057f },
	{ -0.771684f, -0.07908399f, 0.63107f },
	{ -0.413207f, -0.761857f, 0.498833f },
	{ 0.415429f, -0.7223459f, 0.552843f },
	{ 0.010813f, -0.164932f, 0.986246f },
	{ -0.722169f, -0.114608f, 0.682156f },
	{ 0.001491f, -0.999998f, 0.001305f },
	{ 0.015004f, -0.837149f, 0.546768f },
	{ -0.629146f, -0.629533f, 0.455921f },
	{ -0.508727f, -0.309563f, 0.803347f },
	{ 0.032801f, -0.316232f, 0.948115f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009B934 = { vertex_0009B754, normal_0009B844, LengthOfArray<Sint32>(vertex_0009B754), meshlist_0009B73C, matlist_0009B6D4, LengthOfArray<Uint16>(meshlist_0009B73C), LengthOfArray<Uint16>(matlist_0009B6D4), { 53.40257f, 71.63332f, 19.96075f }, 265.4328f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009B95C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009B934, -31, -69, 1418, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009B990[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009B9A4[] = {
	10, 17, 16, 13, 12, 9, 8, 5, 4, 21, 20,
	10, 2, 1, 6, 3, 10, 7, 14, 11, 18, 15,
	10, 0, 2, 5, 6, 9, 10, 13, 14, 17, 18,
	4, 21, 19, 5, 0
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009B9F0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0009B9A4, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009BA08[] = {
	{ -99.97752f, -71.12593f, 790.6536f },
	{ -302.5797f, -57.24869f, 686.7604f },
	{ -206.4202f, -73.08591f, 766.0866f },
	{ -302.5797f, 42.7513f, 686.7604f },
	{ 8.048442f, 28.90436f, 789.5871f },
	{ -99.97752f, 28.87407f, 790.6536f },
	{ -206.4202f, 26.91409f, 766.0866f },
	{ -302.5797f, 142.7513f, 686.7604f },
	{ 8.048442f, 128.9044f, 789.5871f },
	{ -99.97752f, 128.8741f, 790.6536f },
	{ -206.4202f, 126.9141f, 766.0866f },
	{ -302.5797f, 242.7513f, 686.7604f },
	{ 8.048442f, 228.9044f, 789.5871f },
	{ -99.97752f, 228.8741f, 790.6536f },
	{ -206.4202f, 226.9141f, 766.0866f },
	{ -302.5797f, 342.7513f, 686.7604f },
	{ 8.048442f, 328.9044f, 789.5871f },
	{ -99.97752f, 328.8741f, 790.6536f },
	{ -206.4202f, 326.9141f, 766.0866f },
	{ -45, -80, 788 },
	{ 0.5f, 20, 788 },
	{ -45, 20, 788 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009BB10[] = {
	{ 0.08328599f, 0, -0.9965259f },
	{ 0.6363569f, 0, -0.771395f },
	{ 0.43476f, 0, -0.900547f },
	{ 0.6363569f, 0, -0.771395f },
	{ -0.008828999f, 0.06512199f, -0.997838f },
	{ 0.09975199f, 0.004783f, -0.995001f },
	{ 0.442422f, 0, -0.896807f },
	{ 0.6363569f, 0, -0.771395f },
	{ -0.009872f, 0, -0.9999509f },
	{ 0.108266f, 0, -0.994122f },
	{ 0.442422f, 0, -0.896807f },
	{ 0.6363569f, 0, -0.771395f },
	{ -0.009872f, 0, -0.9999509f },
	{ 0.108266f, 0, -0.994122f },
	{ 0.442422f, 0, -0.896807f },
	{ 0.6363569f, 0, -0.771395f },
	{ -0.009872f, 0, -0.9999509f },
	{ 0.107576f, 0, -0.994197f },
	{ 0.449383f, 0, -0.893339f },
	{ -0.048211f, 0, -0.998837f },
	{ -0.006867f, 0.181114f, -0.983438f },
	{ -0.022163f, 0.114965f, -0.993122f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009BC18 = { vertex_0009BA08, normal_0009BB10, LengthOfArray<Sint32>(vertex_0009BA08), meshlist_0009B9F0, matlist_0009B990, LengthOfArray<Uint16>(meshlist_0009B9F0), LengthOfArray<Uint16>(matlist_0009B990), { -147.2657f, 131.3756f, 738.707f }, 217.6651f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009BC40 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009BC18, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009BC74[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009BC88[] = {
	10, 6, 4, 8, 10, 16, 18, 24, 26, 32, 34,
	10, 5, 3, 11, 12, 19, 20, 27, 28, 35, 36,
	10, 1, 0, 14, 15, 22, 23, 30, 31, 38, 39,
	10, 38, 37, 30, 29, 22, 21, 14, 13, 1, 2,
	10, 37, 36, 29, 28, 21, 20, 13, 12, 2, 3,
	10, 35, 34, 27, 26, 19, 18, 11, 10, 5, 4,
	10, 32, 33, 24, 25, 16, 17, 8, 9, 6, 7
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009BD24[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_0009BC88, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009BD3C[] = {
	{ -635.5139f, 95.39786f, 435.091f },
	{ -609.0562f, 98.41288f, 532.7053f },
	{ -609.3658f, 29.17741f, 572.619f },
	{ -609.4146f, 5.735435f, 583.9977f },
	{ -500.0008f, -4.74757f, 697.5497f },
	{ -600.0009f, 2.69869f, 605.5497f },
	{ -400.0007f, -44.03449f, 697.5497f },
	{ -302.5797f, -57.24869f, 686.7604f },
	{ -400.0007f, 55.96551f, 697.5497f },
	{ -302.5797f, 42.7513f, 686.7604f },
	{ -500.0008f, 95.25242f, 697.5497f },
	{ -600.0009f, 102.6987f, 605.5497f },
	{ -609.4146f, 105.7354f, 583.9977f },
	{ -609.3658f, 129.1774f, 572.619f },
	{ -609.0562f, 198.4129f, 532.7053f },
	{ -608.8912f, 210, 412.1179f },
	{ -400.0007f, 155.9655f, 697.5497f },
	{ -302.5797f, 142.7513f, 686.7604f },
	{ -500.0008f, 195.2524f, 697.5497f },
	{ -600.0009f, 202.6987f, 605.5497f },
	{ -609.4146f, 205.7354f, 583.9977f },
	{ -609.3658f, 229.1774f, 572.619f },
	{ -609.0562f, 298.4128f, 532.7053f },
	{ -600.9328f, 253.2563f, 402.2672f },
	{ -400.0007f, 255.9655f, 697.5497f },
	{ -302.5797f, 242.7513f, 686.7604f },
	{ -500.0008f, 295.2524f, 697.5497f },
	{ -600.0009f, 302.6986f, 605.5497f },
	{ -609.4146f, 305.7354f, 583.9977f },
	{ -609.3658f, 329.1774f, 572.619f },
	{ -609.0562f, 398.4128f, 532.7053f },
	{ -600.9328f, 353.2563f, 402.2672f },
	{ -400.0007f, 355.9655f, 697.5497f },
	{ -302.5797f, 342.7513f, 686.7604f },
	{ -500.0008f, 395.2524f, 697.5497f },
	{ -600.0009f, 402.6986f, 605.5497f },
	{ -609.4146f, 405.7354f, 583.9977f },
	{ -609.3658f, 429.1774f, 572.619f },
	{ -609.0562f, 498.4128f, 532.7053f },
	{ -600.9328f, 453.2563f, 402.2672f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009BF1C[] = {
	{ 0.992818f, 0, -0.119632f },
	{ 0.999174f, 0, -0.040649f },
	{ 0.999988f, 0, 0.00485f },
	{ 0.9474699f, 0, -0.319844f },
	{ 0.317947f, 0, -0.948108f },
	{ 0.806846f, 0, -0.5907609f },
	{ -0.06477699f, 0, -0.9978999f },
	{ -0.110076f, 0, -0.9939229f },
	{ -0.055122f, 0, -0.99848f },
	{ -0.110076f, 0, -0.9939229f },
	{ 0.363365f, 0, -0.9316469f },
	{ 0.814211f, 0, -0.580569f },
	{ 0.9793119f, 0, -0.202356f },
	{ 0.999982f, 0, 0.00602f },
	{ 0.999797f, 0, -0.020145f },
	{ 0.999582f, 0, -0.028924f },
	{ -0.055122f, 0, -0.99848f },
	{ -0.110076f, 0, -0.9939229f },
	{ 0.363365f, 0, -0.9316469f },
	{ 0.814211f, 0, -0.580569f },
	{ 0.9793119f, 0, -0.202356f },
	{ 0.999982f, 0, 0.00602f },
	{ 0.999573f, 0, 0.029219f },
	{ 0.9989679f, 0, 0.045428f },
	{ -0.055122f, 0, -0.99848f },
	{ -0.110076f, 0, -0.9939229f },
	{ 0.363365f, 0, -0.9316469f },
	{ 0.814211f, 0, -0.580569f },
	{ 0.9793119f, 0, -0.202356f },
	{ 0.999982f, 0, 0.00602f },
	{ 0.999388f, 0, 0.034969f },
	{ 0.9980659f, 0, 0.062157f },
	{ -0.046835f, 0, -0.998903f },
	{ -0.110076f, 0, -0.9939229f },
	{ 0.417881f, 0, -0.908502f },
	{ 0.821119f, 0, -0.570757f },
	{ 0.990198f, 0, -0.139668f },
	{ 0.999974f, 0, 0.007244f },
	{ 0.9989409f, 0, 0.046016f },
	{ 0.9980659f, 0, 0.062157f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009C0FC = { vertex_0009BD3C, normal_0009BF1C, LengthOfArray<Sint32>(vertex_0009BD3C), meshlist_0009BD24, matlist_0009BC74, LengthOfArray<Uint16>(meshlist_0009BD24), LengthOfArray<Uint16>(matlist_0009BC74), { -469.0469f, 220.5821f, 549.9084f }, 314.6234f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009C124 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009C0FC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009C158[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009C16C[] = {
	7, 15, 8, 13, 0, 1, 12, 20,
	0x8000u | 5, 3, 11, 2, 10, 4,
	5, 20, 14, 1, 19, 13,
	0x8000u | 9, 2, 18, 3, 17, 6, 16, 5, 9, 7
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009C1A8[] = {
	{ 2429, 0 },
	{ 2429, 254 },
	{ 1553, 0 },
	{ 1553, 254 },
	{ 677, 78 },
	{ 597, 254 },
	{ 39, 254 },
	{ 5776, 254 },
	{ 6653, 254 },
	{ 6653, 0 },
	{ 7450, 254 },
	{ 7370, 0 },
	{ 39, 254 },
	{ 39, 0 },
	{ 677, 78 },
	{ 677, 0 },
	{ 1553, 0 },
	{ 6653, 0 },
	{ 5857, 0 },
	{ 5776, 254 },
	{ 4979, 0 },
	{ 4979, 254 },
	{ 4103, 0 },
	{ 4103, 254 },
	{ 3261, 107 },
	{ 3226, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009C210[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0009C16C, NULL, NULL, NULL, uv_0009C1A8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009C228[] = {
	{ 526.9471f, -467.7559f, -17.20568f },
	{ 452.9398f, -467.7559f, -164.9043f },
	{ 906.6072f, -467.9404f, 428.7088f },
	{ 832.3889f, -498.9404f, 363.1117f },
	{ 1009.553f, -467.5222f, 516.5073f },
	{ 828.0699f, -498.7166f, -23.78744f },
	{ 892.6743f, -504.9404f, 101.544f },
	{ 671.9462f, -492.2166f, -69.38f },
	{ 610.1995f, -476.7363f, -65.42689f },
	{ 671.9404f, -470.1566f, -72.73866f },
	{ 1009.014f, -498.5924f, 507.99f },
	{ 906.2759f, -487.0082f, 423.4818f },
	{ 454.1332f, -487.7416f, -172.1149f },
	{ 526.6008f, -451.2917f, -12.81977f },
	{ 406.8941f, -485.9803f, -211.4499f },
	{ 614.6619f, -454.873f, -67.78955f },
	{ 822.0502f, -458.5861f, -20.93785f },
	{ 891.1869f, -474.0386f, 106.6983f },
	{ 836.1567f, -460.981f, 361.0763f },
	{ 452.678f, -455.3097f, -161.5887f },
	{ 404.8844f, -510.3036f, -223.1614f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009C324[] = {
	{ 0.311444f, 0.173568f, -0.934279f },
	{ 0.776095f, 0.213433f, -0.5933999f },
	{ 0.632771f, 0.162157f, -0.75717f },
	{ 0.960199f, -0.062732f, -0.27218f },
	{ 0.636167f, 0.193685f, -0.7468449f },
	{ 0.667139f, 0.128239f, -0.733812f },
	{ 0.986459f, 0.063098f, -0.151387f },
	{ 0.271808f, -0.14478f, -0.951399f },
	{ -0.490809f, 0.09841f, -0.865692f },
	{ 0.279923f, -0.105275f, -0.954233f },
	{ 0.636167f, 0.193685f, -0.7468449f },
	{ 0.616058f, 0.19828f, -0.762337f },
	{ 0.7231719f, 0.272196f, -0.634769f },
	{ 0.262667f, 0.168867f, -0.949995f },
	{ 0.619736f, 0.293335f, -0.7279299f },
	{ -0.490809f, 0.09841f, -0.865692f },
	{ 0.630925f, 0.138385f, -0.763402f },
	{ 0.99454f, 0.047003f, -0.093176f },
	{ 0.957375f, -0.085118f, -0.276023f },
	{ 0.817549f, 0.16423f, -0.5519429f },
	{ 0.6171049f, 0.299391f, -0.727699f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009C420 = { vertex_0009C228, normal_0009C324, LengthOfArray<Sint32>(vertex_0009C228), meshlist_0009C210, matlist_0009C158, LengthOfArray<Uint16>(meshlist_0009C210), LengthOfArray<Uint16>(matlist_0009C158), { 707.2188f, -480.7976f, 146.673f }, 477.6857f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009C448 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009C420, -605, 431, 1620, 0, 0x3BF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009C47C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009C490[] = {
	0x8000u | 10, 0, 5, 1, 6, 2, 7, 3, 8, 4, 9,
	0x8000u | 10, 5, 10, 6, 11, 7, 12, 8, 13, 9, 14
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009C4BC[] = {
	{ 1785, 255 },
	{ 1785, 127 },
	{ 1381, 255 },
	{ 1381, 127 },
	{ 895, 255 },
	{ 895, 127 },
	{ 532, 255 },
	{ 532, 127 },
	{ 0, 255 },
	{ 0, 127 },
	{ 1785, 127 },
	{ 1785, 0 },
	{ 1381, 127 },
	{ 1381, 0 },
	{ 895, 127 },
	{ 895, 0 },
	{ 532, 127 },
	{ 532, 0 },
	{ 0, 127 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009C50C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0009C490, NULL, NULL, NULL, uv_0009C4BC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009C524[] = {
	{ 1670.769f, -36, 3325.502f },
	{ 1108.596f, 13, 2869.736f },
	{ 210.288f, -36, 2593.343f },
	{ -650.3876f, 13, 2530.608f },
	{ -1535.642f, -36, 2895.451f },
	{ 1643.992f, 214, 3472.199f },
	{ 1081.819f, 263, 3016.433f },
	{ 183.5111f, 214, 2740.04f },
	{ -677.1646f, 263, 2677.305f },
	{ -1562.419f, 214, 3042.147f },
	{ 1650.982f, 364, 3667.392f },
	{ 1088.808f, 413, 3211.625f },
	{ 190.5007f, 364, 2935.232f },
	{ -670.1748f, 413, 2872.498f },
	{ -1555.43f, 364, 3237.34f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009C5D8[] = {
	{ 0.583998f, 0.456445f, -0.671271f },
	{ 0.396181f, 0.495876f, -0.7727529f },
	{ 0.159668f, 0.512265f, -0.843855f },
	{ -0.11302f, 0.493817f, -0.8621899f },
	{ -0.362537f, 0.442473f, -0.8202339f },
	{ 0.5366099f, 0.595484f, -0.5978709f },
	{ 0.36267f, 0.6275f, -0.6889949f },
	{ 0.140523f, 0.650072f, -0.746766f },
	{ -0.129206f, 0.642083f, -0.755669f },
	{ -0.322169f, 0.642308f, -0.695448f },
	{ 0.496921f, 0.6794f, -0.539894f },
	{ 0.368475f, 0.730702f, -0.574718f },
	{ 0.119402f, 0.785172f, -0.607658f },
	{ -0.108168f, 0.79013f, -0.603319f },
	{ -0.280799f, 0.7658449f, -0.578475f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009C68C = { vertex_0009C524, normal_0009C5D8, LengthOfArray<Sint32>(vertex_0009C524), meshlist_0009C50C, matlist_0009C47C, LengthOfArray<Uint16>(meshlist_0009C50C), LengthOfArray<Uint16>(matlist_0009C47C), { 54.17505f, 188.5f, 3099 }, 1745.066f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009C6B4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009C68C, -10, 313, 29, 0, 0xFFFFFADE, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009C6E8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009C6FC[] = {
	0x8000u | 10, 0, 5, 1, 6, 2, 7, 3, 8, 4, 9,
	0x8000u | 10, 5, 10, 6, 11, 7, 12, 8, 13, 9, 14
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009C728[] = {
	{ 2040, 255 },
	{ 2040, 127 },
	{ 1578, 255 },
	{ 1578, 127 },
	{ 1022, 255 },
	{ 1022, 127 },
	{ 608, 255 },
	{ 608, 127 },
	{ 0, 255 },
	{ 0, 127 },
	{ 2040, 127 },
	{ 2040, 0 },
	{ 1578, 127 },
	{ 1578, 0 },
	{ 1022, 127 },
	{ 1022, 0 },
	{ 608, 127 },
	{ 608, 0 },
	{ 0, 127 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009C778[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0009C6FC, NULL, NULL, NULL, uv_0009C728, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009C790[] = {
	{ 1791.141f, 88, 3209.455f },
	{ 1142.326f, 232, 2865.463f },
	{ 282.376f, 168, 2231.415f },
	{ -880.3708f, 78, 2441.807f },
	{ -1945.038f, -36, 2846.511f },
	{ 1764.363f, 338, 3356.151f },
	{ 1115.549f, 482, 3012.16f },
	{ 255.5992f, 418, 2378.111f },
	{ -907.1477f, 328, 2588.503f },
	{ -1971.815f, 214, 2993.208f },
	{ 1771.353f, 488, 3551.344f },
	{ 1122.539f, 632, 3207.352f },
	{ 262.5888f, 568, 2573.304f },
	{ -900.158f, 478, 2783.696f },
	{ -1964.826f, 364, 3188.401f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009C844[] = {
	{ 0.491788f, 0.479245f, -0.726959f },
	{ 0.495114f, 0.478545f, -0.7251599f },
	{ 0.141235f, 0.512228f, -0.8471569f },
	{ -0.268817f, 0.465884f, -0.843024f },
	{ -0.359582f, 0.443293f, -0.8210919f },
	{ 0.473742f, 0.604389f, -0.640534f },
	{ 0.448095f, 0.6172889f, -0.646657f },
	{ 0.127493f, 0.641792f, -0.756207f },
	{ -0.263163f, 0.627363f, -0.7329119f },
	{ -0.333098f, 0.634349f, -0.697601f },
	{ 0.449402f, 0.700487f, -0.554397f },
	{ 0.421365f, 0.711735f, -0.562037f },
	{ 0.14046f, 0.782618f, -0.6064489f },
	{ -0.2401f, 0.773855f, -0.5860879f },
	{ -0.299928f, 0.761569f, -0.574505f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009C8F8 = { vertex_0009C790, normal_0009C844, LengthOfArray<Sint32>(vertex_0009C790), meshlist_0009C778, matlist_0009C6E8, LengthOfArray<Uint16>(meshlist_0009C778), LengthOfArray<Uint16>(matlist_0009C6E8), { -90.33733f, 298, 2891.379f }, 2006.523f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009C920 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009C8F8, -311, 512, 1064, 0, 0xFFFFFADE, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009C954[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009C968[] = {
	11, 15, 14, 12, 11, 10, 9, 8, 7, 5, 6, 4,
	0x8000u | 5, 10, 12, 13, 15, 16,
	3, 2, 5, 4,
	5, 4, 3, 2, 1, 0
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009C9A0[] = {
	{ 4590, -10525 },
	{ 4589, -9896 },
	{ 3824, -10528 },
	{ 3824, -9895 },
	{ 3059, -10545 },
	{ 3059, -9896 },
	{ 2294, -10551 },
	{ 2294, -9899 },
	{ 1529, -9924 },
	{ 2294, -9249 },
	{ 1529, -9269 },
	{ 3059, -10545 },
	{ 3824, -10528 },
	{ 3824, -11172 },
	{ 4590, -10525 },
	{ 4590, -11167 },
	{ 764, -9303 },
	{ 1529, -9924 },
	{ 1529, -9269 },
	{ 1529, -9269 },
	{ 1529, -8619 },
	{ 764, -9303 },
	{ 764, -8647 },
	{ 0, -8662 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009CA00[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0009C968, NULL, NULL, NULL, uv_0009C9A0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009CA18[] = {
	{ -1300.002f, 29.2878f, 237.5495f },
	{ -1200.002f, 42.01319f, 237.5495f },
	{ -1200.002f, 9.782889f, 329.5495f },
	{ -1100.001f, 65.17677f, 237.5495f },
	{ -1100.001f, 37.32717f, 329.5495f },
	{ -1100.001f, 7.025766f, 421.5496f },
	{ -1000.001f, 54.37115f, 329.5495f },
	{ -1000.001f, 27.5873f, 421.5496f },
	{ -1000.001f, -0.474865f, 513.5497f },
	{ -900.0012f, 29.90416f, 421.5496f },
	{ -900.0012f, 3.296247f, 513.5497f },
	{ -800.0012f, 30.51837f, 421.5496f },
	{ -800.0012f, 17.54782f, 513.5497f },
	{ -800.0012f, -4.415432f, 605.5497f },
	{ -700.001f, 29.99816f, 421.5496f },
	{ -700.0009f, 20.50993f, 513.5497f },
	{ -700.0009f, -0.750095f, 605.5497f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009CAE4[] = {
	{ -0.119241f, 0.937028f, 0.328268f },
	{ -0.189179f, 0.930214f, 0.314505f },
	{ -0.217989f, 0.925777f, 0.308899f },
	{ -0.253299f, 0.919607f, 0.300271f },
	{ -0.232672f, 0.925806f, 0.297906f },
	{ -0.209398f, 0.932894f, 0.293022f },
	{ -0.1927f, 0.93719f, 0.290759f },
	{ -0.140812f, 0.947199f, 0.288072f },
	{ -0.09155799f, 0.9538389f, 0.286021f },
	{ -0.087371f, 0.965105f, 0.246858f },
	{ -0.096531f, 0.964923f, 0.244143f },
	{ -0.0839f, 0.9827009f, 0.165103f },
	{ -0.085172f, 0.976614f, 0.197412f },
	{ -0.071168f, 0.970745f, 0.229322f },
	{ -0.02939f, 0.992204f, 0.121107f },
	{ -0.032564f, 0.984044f, 0.174918f },
	{ -0.035659f, 0.972882f, 0.228539f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009CBB0 = { vertex_0009CA18, normal_0009CAE4, LengthOfArray<Sint32>(vertex_0009CA18), meshlist_0009CA00, matlist_0009C954, LengthOfArray<Uint16>(meshlist_0009CA00), LengthOfArray<Uint16>(matlist_0009C954), { -1000.001f, 30.38067f, 421.5496f }, 351.9321f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009CBD8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009CBB0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009CC0C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009CC34[] = {
	0x8000u | 54, 79, 106, 78, 105, 77, 104, 76, 103, 75, 102, 74, 101, 73, 100, 72, 99, 71, 98, 70, 97, 69, 96, 68, 95, 67, 94, 66, 93, 65, 92, 64, 91, 63, 90, 62, 89, 61, 88, 60, 87, 59, 86, 58, 85, 57, 84, 56, 83, 54, 81, 55, 82, 80, 107,
	0x8000u | 54, 80, 52, 55, 51, 54, 50, 56, 49, 57, 48, 58, 47, 59, 46, 60, 45, 61, 44, 62, 43, 63, 42, 64, 41, 65, 40, 66, 39, 67, 38, 68, 37, 69, 36, 70, 35, 71, 34, 72, 33, 73, 32, 74, 31, 75, 30, 76, 29, 77, 28, 78, 27, 79, 53
};

extern "C" __declspec(dllexport) Sint16 poly_0009CD10[] = {
	0x8000u | 8, 37, 38, 14, 39, 13, 40, 12, 11,
	25, 40, 11, 41, 10, 42, 9, 43, 8, 44, 7, 45, 6, 46, 5, 47, 4, 48, 3, 49, 2, 50, 1, 51, 0, 52,
	0x8000u | 25, 26, 53, 25, 27, 24, 28, 23, 29, 22, 30, 21, 31, 20, 32, 19, 33, 18, 34, 17, 35, 16, 36, 15, 37, 14
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009CD8C[] = {
	{ 6374, -112 },
	{ 6375, 58 },
	{ 6178, -112 },
	{ 6178, 58 },
	{ 5896, -112 },
	{ 5896, 58 },
	{ 5687, -112 },
	{ 5687, 58 },
	{ 5407, -112 },
	{ 5407, 58 },
	{ 5199, -112 },
	{ 5199, 58 },
	{ 4919, -112 },
	{ 4919, 58 },
	{ 4713, -112 },
	{ 4713, 58 },
	{ 4377, -112 },
	{ 4369, -30 },
	{ 4152, -112 },
	{ 4145, -66 },
	{ 3918, -112 },
	{ 3921, -78 },
	{ 3554, -112 },
	{ 3548, -80 },
	{ 3378, -112 },
	{ 3374, -82 },
	{ 3157, -112 },
	{ 3150, -84 },
	{ 2934, -112 },
	{ 2926, -80 },
	{ 2709, -112 },
	{ 2700, -76 },
	{ 2450, -112 },
	{ 2452, -64 },
	{ 2246, -112 },
	{ 2228, -20 },
	{ 2024, -112 },
	{ 2024, 58 },
	{ 1744, -112 },
	{ 1744, 58 },
	{ 1537, -112 },
	{ 1537, 58 },
	{ 1330, -112 },
	{ 1330, 58 },
	{ 1050, -112 },
	{ 1050, 58 },
	{ 844, -112 },
	{ 844, 58 },
	{ 562, -112 },
	{ 562, 58 },
	{ 282, -112 },
	{ 282, 58 },
	{ 0, -112 },
	{ 0, 58 },
	{ 0, -112 },
	{ 0, -255 },
	{ 282, -112 },
	{ 282, -254 },
	{ 562, -112 },
	{ 562, -255 },
	{ 844, -112 },
	{ 844, -255 },
	{ 1050, -112 },
	{ 1050, -255 },
	{ 1330, -112 },
	{ 1330, -255 },
	{ 1537, -112 },
	{ 1537, -255 },
	{ 1744, -112 },
	{ 1744, -255 },
	{ 2024, -112 },
	{ 2024, -255 },
	{ 2246, -112 },
	{ 2246, -254 },
	{ 2450, -112 },
	{ 2450, -255 },
	{ 2709, -112 },
	{ 2709, -254 },
	{ 2934, -112 },
	{ 2934, -254 },
	{ 3157, -112 },
	{ 3157, -255 },
	{ 3378, -112 },
	{ 3378, -255 },
	{ 3554, -112 },
	{ 3554, -255 },
	{ 3918, -112 },
	{ 3918, -254 },
	{ 4152, -112 },
	{ 4152, -254 },
	{ 4377, -112 },
	{ 4377, -255 },
	{ 4713, -112 },
	{ 4713, -255 },
	{ 4919, -112 },
	{ 4919, -255 },
	{ 5199, -112 },
	{ 5199, -255 },
	{ 5407, -112 },
	{ 5407, -255 },
	{ 5687, -112 },
	{ 5687, -255 },
	{ 5896, -112 },
	{ 5896, -255 },
	{ 6178, -112 },
	{ 6178, -254 },
	{ 6374, -112 },
	{ 6375, -254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009CF3C[] = {
	{ 7108, 255 },
	{ 6757, 255 },
	{ 6757, 0 },
	{ 6315, 255 },
	{ 6315, 0 },
	{ 5870, 255 },
	{ 5870, 0 },
	{ 5419, 0 },
	{ 5870, 255 },
	{ 5419, 0 },
	{ 5419, 255 },
	{ 4901, 0 },
	{ 4901, 255 },
	{ 4493, 0 },
	{ 4493, 255 },
	{ 4049, 0 },
	{ 4049, 255 },
	{ 3488, 0 },
	{ 3488, 255 },
	{ 3075, 0 },
	{ 3075, 255 },
	{ 2662, 0 },
	{ 2662, 255 },
	{ 2101, 0 },
	{ 2101, 255 },
	{ 1688, 0 },
	{ 1688, 255 },
	{ 1126, 0 },
	{ 1126, 255 },
	{ 565, 0 },
	{ 565, 255 },
	{ 0 },
	{ 0, 255 },
	{ 12750, 0 },
	{ 12750, 255 },
	{ 12356, 0 },
	{ 12356, 255 },
	{ 11793, 0 },
	{ 11793, 255 },
	{ 11375, 0 },
	{ 11375, 255 },
	{ 10814, 0 },
	{ 10814, 255 },
	{ 10400, 0 },
	{ 10400, 255 },
	{ 9839, 0 },
	{ 9839, 255 },
	{ 9426, 0 },
	{ 9426, 255 },
	{ 8755, 0 },
	{ 8755, 255 },
	{ 8305, 0 },
	{ 8305, 255 },
	{ 7837, 0 },
	{ 7837, 255 },
	{ 7108, 0 },
	{ 7108, 255 },
	{ 6757, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009D024[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0009CC34, NULL, NULL, NULL, uv_0009CD8C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, poly_0009CD10, NULL, NULL, NULL, uv_0009CF3C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009D054[] = {
	{ -1300.002f, 29.2878f, 237.5495f },
	{ -1200.002f, 9.782889f, 329.5495f },
	{ -1100.001f, 7.025766f, 421.5496f },
	{ -1000.001f, -0.474865f, 513.5497f },
	{ -900.0012f, 3.296247f, 513.5497f },
	{ -800.0012f, -4.415432f, 605.5497f },
	{ -700.0009f, -0.750095f, 605.5497f },
	{ -600.0009f, 2.69869f, 605.5497f },
	{ -500.0008f, -4.74757f, 697.5497f },
	{ -400.0007f, -44.03449f, 697.5497f },
	{ -302.5797f, -57.24869f, 686.7604f },
	{ -206.4202f, -73.08591f, 766.0866f },
	{ -99.97752f, -71.12593f, 790.6536f },
	{ 8.048442f, -71.09563f, 789.5871f },
	{ 115.1325f, -71.09544f, 788.5297f },
	{ 200.0001f, -74.97592f, 789.5499f },
	{ 322.0959f, -60.91554f, 662.9922f },
	{ 411.7874f, -45.17593f, 594.8542f },
	{ 487.515f, -30.85904f, 517.8473f },
	{ 600.0004f, 35.83952f, 421.5496f },
	{ 700.0005f, 44.72787f, 421.5496f },
	{ 800.0011f, 41.10547f, 329.5495f },
	{ 900.0012f, 33.87398f, 329.5495f },
	{ 1000.001f, 39.69129f, 237.5495f },
	{ 1100.001f, 22.64029f, 237.5495f },
	{ 1200.001f, 14.73638f, 145.5496f },
	{ 1200.001f, 40.07403f, 53.54944f },
	{ 1200.001f, 3.067856f, 167.5496f },
	{ 1100.001f, 10.97177f, 259.5494f },
	{ 1000.001f, 28.02276f, 259.5494f },
	{ 900.0012f, 22.20546f, 351.5495f },
	{ 800.0011f, 29.43695f, 351.5495f },
	{ 700.0005f, 33.05934f, 443.5496f },
	{ 600.0004f, 24.17099f, 443.5496f },
	{ 487.515f, -42.52756f, 539.8473f },
	{ 411.7874f, -56.84443f, 616.8542f },
	{ 322.0959f, -72.58405f, 684.9922f },
	{ 200.0001f, -86.64444f, 811.5499f },
	{ 115.1325f, -82.76395f, 810.5297f },
	{ 8.048442f, -82.76413f, 811.5871f },
	{ -99.97752f, -82.79443f, 812.6536f },
	{ -206.4202f, -84.75439f, 788.0866f },
	{ -302.5797f, -68.91721f, 708.7604f },
	{ -400.0007f, -55.70301f, 719.5497f },
	{ -500.0008f, -16.41611f, 719.5497f },
	{ -600.0009f, -8.969849f, 627.5497f },
	{ -700.0009f, -12.41864f, 627.5497f },
	{ -800.0012f, -16.08398f, 627.5497f },
	{ -900.0012f, -8.372284f, 535.5497f },
	{ -1000.001f, -12.1434f, 535.5497f },
	{ -1100.001f, -4.642761f, 443.5496f },
	{ -1200.002f, -1.885635f, 351.5495f },
	{ -1300.002f, 17.61928f, 259.5494f },
	{ 1200.001f, 15.4055f, 75.54943f },
	{ -1100.001f, -111.8002f, 443.5496f },
	{ -1200.002f, -109.0431f, 351.5495f },
	{ -1000.001f, -119.3008f, 535.5497f },
	{ -900.0012f, -115.5297f, 535.5497f },
	{ -800.0012f, -123.2414f, 627.5497f },
	{ -700.0009f, -119.5761f, 627.5497f },
	{ -600.0009f, -116.1273f, 627.5497f },
	{ -500.0008f, -123.5735f, 719.5497f },
	{ -400.0007f, -162.8604f, 719.5497f },
	{ -302.5797f, -176.0745f, 708.7604f },
	{ -206.4202f, -191.9117f, 788.0866f },
	{ -99.97752f, -189.9518f, 812.6536f },
	{ 8.048442f, -189.9214f, 811.5871f },
	{ 115.1325f, -189.9213f, 810.5297f },
	{ 200.0001f, -193.8018f, 811.5499f },
	{ 322.0959f, -179.7414f, 684.9922f },
	{ 411.7874f, -164.0018f, 616.8542f },
	{ 487.515f, -149.685f, 539.8473f },
	{ 600.0004f, -82.98646f, 443.5496f },
	{ 700.0005f, -74.09808f, 443.5496f },
	{ 800.0011f, -77.72049f, 351.5495f },
	{ 900.0012f, -84.95197f, 351.5495f },
	{ 1000.001f, -79.13468f, 259.5494f },
	{ 1100.001f, -96.18564f, 259.5494f },
	{ 1200.001f, -104.0896f, 167.5496f },
	{ 1200.001f, -78.75192f, 75.54943f },
	{ -1300.002f, -89.53815f, 259.5494f },
	{ -1100.001f, -220, 443.5496f },
	{ -1200.002f, -220, 351.5495f },
	{ -1000.001f, -220, 535.5497f },
	{ -900.0012f, -220, 535.5497f },
	{ -800.0012f, -220, 627.5497f },
	{ -700.0009f, -220, 627.5497f },
	{ -600.0009f, -220, 627.5497f },
	{ -500.0008f, -220, 719.5497f },
	{ -400.0007f, -220, 719.5497f },
	{ -302.5797f, -220, 708.7604f },
	{ -206.4202f, -220, 788.0866f },
	{ -99.97752f, -220, 812.6536f },
	{ 8.048442f, -220, 811.5871f },
	{ 115.1325f, -220, 810.5297f },
	{ 200.0001f, -220, 811.5499f },
	{ 322.0959f, -220, 684.9922f },
	{ 411.7874f, -220, 616.8542f },
	{ 487.515f, -220, 539.8473f },
	{ 600.0004f, -220, 443.5496f },
	{ 700.0005f, -220, 443.5496f },
	{ 800.0011f, -220, 351.5495f },
	{ 900.0012f, -220, 351.5495f },
	{ 1000.001f, -220, 259.5494f },
	{ 1100.001f, -220, 259.5494f },
	{ 1200.001f, -220, 167.5496f },
	{ 1200.001f, -220, 75.54943f },
	{ -1300.002f, -220, 259.5494f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009D564[] = {
	{ -0.250513f, 0.855261f, 0.45362f },
	{ -0.287154f, 0.846225f, 0.448827f },
	{ -0.367009f, 0.8217829f, 0.435863f },
	{ -0.217085f, 0.862364f, 0.457387f },
	{ -0.14773f, 0.873738f, 0.46342f },
	{ -0.215817f, 0.8626119f, 0.457519f },
	{ -0.031398f, 0.8829949f, 0.468331f },
	{ -0.146698f, 0.873873f, 0.463492f },
	{ -0.09037299f, 0.879816f, 0.466644f },
	{ 0.252692f, 0.8547609f, 0.453355f },
	{ 0.019942f, 0.883256f, 0.468467f },
	{ -0.192308f, 0.866942f, 0.459814f },
	{ -0.06316099f, 0.881668f, 0.467624f },
	{ 0.004502f, 0.883423f, 0.468555f },
	{ 0.019572f, 0.883262f, 0.468471f },
	{ 0.228761f, 0.860005f, 0.456136f },
	{ 0.241995f, 0.857174f, 0.454634f },
	{ 0.267643f, 0.851202f, 0.451466f },
	{ -0.015227f, 0.883329f, 0.468506f },
	{ -0.092392f, 0.879652f, 0.466557f },
	{ 0.2226f, 0.861266f, 0.456805f },
	{ 0.202765f, 0.86508f, 0.458828f },
	{ 0.235872f, 0.858504f, 0.45534f },
	{ 0.227956f, 0.860172f, 0.456225f },
	{ 0.322926f, 0.836101f, 0.443458f },
	{ 0.9685169f, 0.21993f, 0.116648f },
	{ 1, 0, 0 },
	{ 0.8352849f, 0.347274f, 0.426262f },
	{ 0.352494f, 0.433726f, 0.829235f },
	{ 0.359155f, 0.569384f, 0.739465f },
	{ 0.320314f, 0.445501f, 0.836019f },
	{ 0.363902f, 0.5484729f, 0.75283f },
	{ 0.289246f, 0.478485f, 0.829089f },
	{ 0.06097f, 0.6176209f, 0.784109f },
	{ 0.524832f, 0.475228f, 0.706194f },
	{ 0.519565f, 0.490028f, 0.699946f },
	{ 0.553095f, 0.481013f, 0.68023f },
	{ 0.329503f, 0.44345f, 0.8335339f },
	{ 0.011185f, 0.522462f, 0.852589f },
	{ 0.008386999f, 0.515506f, 0.856845f },
	{ -0.09600399f, 0.499962f, 0.86071f },
	{ -0.36899f, 0.459093f, 0.808134f },
	{ -0.171679f, 0.578845f, 0.79716f },
	{ 0.162394f, 0.464017f, 0.870814f },
	{ -0.196204f, 0.515539f, 0.8340999f },
	{ -0.319851f, 0.565793f, 0.7599829f },
	{ -0.018343f, 0.515526f, 0.8566779f },
	{ -0.310653f, 0.450956f, 0.83674f },
	{ -0.319742f, 0.566438f, 0.7595479f },
	{ -0.311068f, 0.450874f, 0.83663f },
	{ -0.581095f, 0.471833f, 0.6630999f },
	{ -0.583655f, 0.456087f, 0.671812f },
	{ -0.473735f, 0.602196f, 0.6426f },
	{ 1, 0, 0 },
	{ -0.677056f, 0, 0.735931f },
	{ -0.677057f, 0, 0.735931f },
	{ -0.363365f, 0, 0.9316469f },
	{ -0.363366f, 0, 0.9316469f },
	{ -0.363366f, 0, 0.9316469f },
	{ 0, 0, 1 },
	{ -0.363365f, 0, 0.9316469f },
	{ -0.363365f, 0, 0.9316469f },
	{ 0.055122f, 0, 0.99848f },
	{ -0.285697f, 0, 0.95832f },
	{ -0.442422f, 0, 0.896807f },
	{ -0.108266f, 0, 0.994122f },
	{ 0.009873f, 0, 0.9999509f },
	{ -0.001073f, 0, 0.999999f },
	{ 0.385417f, 0, 0.9227419f },
	{ 0.664263f, 0, 0.747499f },
	{ 0.66068f, 0, 0.750667f },
	{ 0.682295f, 0, 0.731077f },
	{ 0.346662f, 0, 0.93799f },
	{ 0.363364f, 0, 0.9316469f },
	{ 0.363365f, 0, 0.9316469f },
	{ 0.363366f, 0, 0.9316469f },
	{ 0.363366f, 0, 0.9316469f },
	{ 0.363365f, 0, 0.9316469f },
	{ 0.915712f, 0, 0.401836f },
	{ 1, 0, 0 },
	{ -0.677057f, 0, 0.735931f },
	{ -0.677056f, 0, 0.735931f },
	{ -0.677057f, 0, 0.735931f },
	{ -0.363366f, 0, 0.9316469f },
	{ -0.363366f, 0, 0.9316469f },
	{ -0.363366f, 0, 0.9316469f },
	{ 0, 0, 1 },
	{ -0.363365f, 0, 0.9316469f },
	{ -0.363365f, 0, 0.9316469f },
	{ 0.055122f, 0, 0.99848f },
	{ -0.285697f, 0, 0.95832f },
	{ -0.442422f, 0, 0.896807f },
	{ -0.108266f, 0, 0.994122f },
	{ 0.009873f, 0, 0.9999509f },
	{ -0.001073f, 0, 0.999999f },
	{ 0.385417f, 0, 0.9227419f },
	{ 0.664263f, 0, 0.747498f },
	{ 0.66068f, 0, 0.750667f },
	{ 0.682295f, 0, 0.731077f },
	{ 0.346662f, 0, 0.93799f },
	{ 0.363364f, 0, 0.9316469f },
	{ 0.363365f, 0, 0.9316469f },
	{ 0.363366f, 0, 0.9316469f },
	{ 0.363366f, 0, 0.9316469f },
	{ 0.363365f, 0, 0.9316469f },
	{ 0.915712f, 0, 0.401836f },
	{ 1, 0, 0 },
	{ -0.677057f, 0, 0.735931f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009DA74 = { vertex_0009D054, normal_0009D564, LengthOfArray<Sint32>(vertex_0009D054), meshlist_0009D024, matlist_0009CC0C, LengthOfArray<Uint16>(meshlist_0009D024), LengthOfArray<Uint16>(matlist_0009CC0C), { -50.00012f, -87.63606f, 433.1015f }, 1306.355f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009DA9C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009DA74, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009DAD0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009DAE4[] = {
	0x8000u | 18, 9, 4, 25, 26, 8, 3, 22, 21, 7, 2, 17, 20, 6, 1, 18, 19, 5, 0,
	0x8000u | 18, 14, 9, 24, 25, 13, 8, 23, 22, 12, 7, 16, 17, 11, 6, 15, 18, 10, 5
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009DB30[] = {
	{ 2295, 89 },
	{ 2295, 255 },
	{ 1986, 69 },
	{ 1985, 255 },
	{ 1674, 101 },
	{ 1676, 255 },
	{ 1400, 74 },
	{ 1404, 255 },
	{ 1129, 81 },
	{ 1132, 255 },
	{ 855, 73 },
	{ 857, 255 },
	{ 581, 80 },
	{ 582, 255 },
	{ 292, 76 },
	{ 290, 255 },
	{ 0, 88 },
	{ 0, 255 },
	{ 2294, 0 },
	{ 2295, 89 },
	{ 2011, 0 },
	{ 1986, 69 },
	{ 1723, 0 },
	{ 1674, 101 },
	{ 1439, 0 },
	{ 1400, 74 },
	{ 1160, 0 },
	{ 1129, 81 },
	{ 876, 0 },
	{ 855, 73 },
	{ 594, 0 },
	{ 581, 80 },
	{ 298, 0 },
	{ 292, 76 },
	{ 0 },
	{ 0, 88 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009DBC0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0009DAE4, NULL, NULL, NULL, uv_0009DB30, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009DBD8[] = {
	{ 1641.551f, -391, 1467.265f },
	{ 968.7092f, -192, 1122.013f },
	{ 275.0341f, -191, 810.3276f },
	{ -253.565f, -192, 276.1113f },
	{ -1083.388f, -191, 475.6044f },
	{ 1646.066f, -240, 1495.616f },
	{ 973.2244f, -41, 1150.364f },
	{ 279.5494f, -40, 838.6784f },
	{ -249.0497f, -91, 304.462f },
	{ -1078.873f, -40, 503.9554f },
	{ 1633.068f, -186, 1541.489f },
	{ 968.6592f, 13, 1181.888f },
	{ 270.0284f, 14.00001f, 871.4011f },
	{ -265.605f, -37, 336.4655f },
	{ -1012.656f, 14, 503.6231f },
	{ 1275.384f, -111.5f, 1362.708f },
	{ 619.3438f, 38.5f, 1026.645f },
	{ 626.3869f, -15.5f, 994.521f },
	{ 1284.166f, -165.5f, 1324.01f },
	{ 1279.651f, -341.5f, 1295.659f },
	{ 621.8716f, -191.5f, 966.1703f },
	{ 10.73452f, -191.5f, 543.2194f },
	{ 15.24981f, -15.5f, 571.5702f },
	{ 2.211627f, 38.5f, 603.9333f },
	{ -639.1304f, 38.5f, 420.0443f },
	{ -663.9613f, -15.5f, 404.2087f },
	{ -668.4766f, -191.5f, 375.8578f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009DD1C[] = {
	{ 0.444645f, 0.152425f, -0.882642f },
	{ 0.473617f, 0.148821f, -0.868066f },
	{ 0.577063f, 0.134004f, -0.805631f },
	{ 0.239783f, 0.252419f, -0.937437f },
	{ -0.234746f, 0.18615f, -0.954066f },
	{ 0.459757f, 0.404066f, -0.790794f },
	{ 0.4831f, 0.326851f, -0.81227f },
	{ 0.539708f, 0.330629f, -0.774209f },
	{ 0.283194f, 0.368787f, -0.885323f },
	{ -0.234727f, 0.213956f, -0.948223f },
	{ 0.439292f, 0.6406839f, -0.629719f },
	{ 0.481811f, 0.471802f, -0.738418f },
	{ 0.470267f, 0.516534f, -0.71557f },
	{ 0.195062f, 0.543618f, -0.816352f },
	{ -0.233884f, 0.281071f, -0.930751f },
	{ 0.51256f, 0.5454389f, -0.663158f },
	{ 0.35246f, 0.509586f, -0.784916f },
	{ 0.382236f, 0.347783f, -0.8561209f },
	{ 0.51256f, 0.350599f, -0.783813f },
	{ 0.482795f, 0.147634f, -0.8631999f },
	{ 0.404679f, 0.157042f, -0.9008729f },
	{ 0.6983989f, 0.140895f, -0.701703f },
	{ 0.643091f, 0.349576f, -0.681345f },
	{ 0.591685f, 0.507459f, -0.6264139f },
	{ -0.16096f, 0.403801f, -0.900576f },
	{ -0.200703f, 0.302975f, -0.9316249f },
	{ -0.218042f, 0.230237f, -0.948393f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009DE60 = { vertex_0009DBD8, normal_0009DD1C, LengthOfArray<Sint32>(vertex_0009DBD8), meshlist_0009DBC0, matlist_0009DAD0, LengthOfArray<Uint16>(meshlist_0009DBC0), LengthOfArray<Uint16>(matlist_0009DAD0), { 281.339f, -176.25f, 908.8002f }, 1501.022f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009DE88 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009DE60, -122, 420, 1349, 0, 0xFFFFFE5F, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009DEBC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009DED0[] = {
	0x8000u | 14, 0, 3, 1, 2, 4, 5, 6, 7, 8, 9, 10, 13, 11, 12,
	0x8000u | 14, 11, 20, 10, 19, 8, 18, 6, 17, 4, 16, 1, 15, 0, 14,
	0x8000u | 14, 20, 27, 19, 26, 18, 25, 17, 24, 16, 23, 15, 22, 14, 21,
	0x8000u | 14, 27, 34, 26, 33, 25, 32, 24, 31, 23, 30, 22, 29, 21, 28,
	0x8000u | 14, 34, 41, 33, 40, 32, 39, 31, 38, 30, 37, 29, 36, 28, 35,
	0x8000u | 14, 41, 48, 40, 47, 39, 46, 38, 45, 37, 44, 36, 43, 35, 42,
	0x8000u | 14, 48, 55, 47, 54, 46, 53, 45, 52, 44, 51, 43, 50, 42, 49,
	0x8000u | 14, 55, 62, 54, 61, 53, 60, 52, 59, 51, 58, 50, 57, 49, 56,
	0x8000u | 14, 62, 69, 61, 68, 60, 67, 59, 66, 58, 65, 57, 64, 56, 63
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009DFE0[] = {
	{ 1387, -6884 },
	{ 0, -6885 },
	{ 1387, -5694 },
	{ 0, -5694 },
	{ 1387, -4503 },
	{ 0, -4503 },
	{ 1387, -3314 },
	{ 0, -3314 },
	{ 1387, -2123 },
	{ 0, -2123 },
	{ 1387, -933 },
	{ 0, -933 },
	{ 1387, 254 },
	{ 0, 254 },
	{ 1387, 254 },
	{ 2775, 254 },
	{ 1387, -933 },
	{ 2775, -933 },
	{ 1387, -2123 },
	{ 2775, -2123 },
	{ 1387, -3314 },
	{ 2775, -3314 },
	{ 1387, -4503 },
	{ 2775, -4504 },
	{ 1387, -5694 },
	{ 2775, -5695 },
	{ 1387, -6884 },
	{ 2775, -6885 },
	{ 2775, 254 },
	{ 4165, 254 },
	{ 2775, -933 },
	{ 4165, -933 },
	{ 2775, -2123 },
	{ 4164, -2123 },
	{ 2775, -3314 },
	{ 4164, -3315 },
	{ 2775, -4504 },
	{ 4164, -4504 },
	{ 2775, -5695 },
	{ 4164, -5695 },
	{ 2775, -6885 },
	{ 4164, -6884 },
	{ 4165, 254 },
	{ 5552, 254 },
	{ 4165, -933 },
	{ 5552, -933 },
	{ 4164, -2123 },
	{ 5552, -2123 },
	{ 4164, -3315 },
	{ 5552, -3315 },
	{ 4164, -4504 },
	{ 5552, -4504 },
	{ 4164, -5695 },
	{ 5552, -5695 },
	{ 4164, -6884 },
	{ 5552, -6884 },
	{ 5552, 254 },
	{ 6941, 254 },
	{ 5552, -933 },
	{ 6941, -933 },
	{ 5552, -2123 },
	{ 6941, -2123 },
	{ 5552, -3315 },
	{ 6941, -3315 },
	{ 5552, -4504 },
	{ 6941, -4504 },
	{ 5552, -5695 },
	{ 6941, -5695 },
	{ 5552, -6884 },
	{ 6941, -6884 },
	{ 6941, 254 },
	{ 8329, 254 },
	{ 6941, -933 },
	{ 8329, -933 },
	{ 6941, -2123 },
	{ 8329, -2124 },
	{ 6941, -3315 },
	{ 8329, -3315 },
	{ 6941, -4504 },
	{ 8329, -4504 },
	{ 6941, -5695 },
	{ 8329, -5695 },
	{ 6941, -6884 },
	{ 8329, -6884 },
	{ 8329, 254 },
	{ 9717, 254 },
	{ 8329, -933 },
	{ 9717, -933 },
	{ 8329, -2124 },
	{ 9717, -2124 },
	{ 8329, -3315 },
	{ 9717, -3315 },
	{ 8329, -4504 },
	{ 9717, -4504 },
	{ 8329, -5695 },
	{ 9717, -5695 },
	{ 8329, -6884 },
	{ 9717, -6884 },
	{ 9717, 254 },
	{ 11105, 254 },
	{ 9717, -933 },
	{ 11105, -935 },
	{ 9717, -2124 },
	{ 11105, -2124 },
	{ 9717, -3315 },
	{ 11105, -3315 },
	{ 9717, -4504 },
	{ 11105, -4504 },
	{ 9717, -5695 },
	{ 11105, -5695 },
	{ 9717, -6884 },
	{ 11105, -6884 },
	{ 11105, 254 },
	{ 12495, 254 },
	{ 11105, -935 },
	{ 12495, -935 },
	{ 11105, -2124 },
	{ 12494, -2124 },
	{ 11105, -3315 },
	{ 12494, -3315 },
	{ 11105, -4504 },
	{ 12494, -4504 },
	{ 11105, -5695 },
	{ 12494, -5695 },
	{ 11105, -6884 },
	{ 12494, -6884 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009E1D8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 9, poly_0009DED0, NULL, NULL, NULL, uv_0009DFE0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009E1F0[] = {
	{ -1499.99f, 0, -2454.575f },
	{ -999.9901f, 0, -2454.575f },
	{ -999.9901f, 0, -3000.028f },
	{ -1499.99f, 0, -3000.028f },
	{ -499.99f, 0, -2454.575f },
	{ -499.99f, 0, -3000.029f },
	{ 0.010193f, 0, -2454.575f },
	{ 0.010193f, 0, -3000.029f },
	{ 500.0103f, 0, -2454.575f },
	{ 500.0103f, 0, -3000.029f },
	{ 1000.01f, 0, -2454.575f },
	{ 1500.01f, 0, -2454.575f },
	{ 1500.01f, 0, -3000.03f },
	{ 1000.01f, 0, -3000.03f },
	{ -1499.99f, 0, -1909.12f },
	{ -999.9901f, 0, -1909.12f },
	{ -499.99f, 0, -1909.12f },
	{ 0.010193f, 0, -1909.12f },
	{ 500.0103f, 0, -1909.12f },
	{ 1000.01f, 0, -1909.12f },
	{ 1500.01f, 0, -1909.12f },
	{ -1499.99f, 0, -1363.666f },
	{ -999.9901f, 0, -1363.666f },
	{ -499.99f, 0, -1363.666f },
	{ 0.010193f, 0, -1363.666f },
	{ 500.0103f, 0, -1363.666f },
	{ 1000.01f, 0, -1363.666f },
	{ 1500.01f, 0, -1363.666f },
	{ -1499.99f, 0, -818.2111f },
	{ -999.9901f, 0, -818.2111f },
	{ -499.99f, 0, -818.2111f },
	{ 0.010193f, 0, -818.2111f },
	{ 500.0103f, 0, -818.2111f },
	{ 1000.01f, 0, -818.2111f },
	{ 1500.01f, 0, -818.2111f },
	{ -1499.99f, 0, -272.7564f },
	{ -999.9901f, 0, -272.7564f },
	{ -499.99f, 0, -272.7564f },
	{ 0.010193f, 0, -272.7564f },
	{ 500.0103f, 0, -272.7564f },
	{ 1000.01f, 0, -272.7564f },
	{ 1500.01f, 0, -272.7564f },
	{ -1499.99f, 0, 272.6983f },
	{ -999.9901f, 0, 272.6983f },
	{ -499.99f, 0, 272.6983f },
	{ 0.010193f, 0, 272.6983f },
	{ 500.0103f, 0, 272.6983f },
	{ 1000.01f, 0, 272.6983f },
	{ 1500.01f, 0, 272.6983f },
	{ -1499.99f, 0, 818.153f },
	{ -999.9901f, 0, 818.153f },
	{ -499.99f, 0, 818.153f },
	{ 0.010193f, 0, 818.153f },
	{ 500.0103f, 0, 818.153f },
	{ 1000.01f, 0, 818.153f },
	{ 1500.01f, 0, 818.153f },
	{ -1499.99f, 0, 1363.608f },
	{ -999.9901f, 0, 1363.608f },
	{ -499.99f, 0, 1363.608f },
	{ 0.010193f, 0, 1363.608f },
	{ 500.0103f, 0, 1363.608f },
	{ 1000.01f, 0, 1363.608f },
	{ 1500.01f, 0, 1363.608f },
	{ -1499.989f, 0, 1909.063f },
	{ -999.9901f, 0, 1909.063f },
	{ -499.99f, 0, 1909.063f },
	{ 0.010193f, 0, 1909.063f },
	{ 500.0103f, 0, 1909.063f },
	{ 1000.01f, 0, 1909.063f },
	{ 1500.01f, 0, 1909.063f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009E538[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009E880 = { vertex_0009E1F0, normal_0009E538, LengthOfArray<Sint32>(vertex_0009E1F0), meshlist_0009E1D8, matlist_0009DEBC, LengthOfArray<Uint16>(meshlist_0009E1D8), LengthOfArray<Uint16>(matlist_0009DEBC), { 0.010132f, 0, -545.4838f }, 2876.595f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009E8A8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009E880, 0, -220, 1000, 0, 0x3FFF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009E8DC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009E918[] = {
	0x8000u | 14, 53, 52, 49, 65, 62, 61, 63, 60, 57, 75, 70, 69, 71, 68,
	4, 49, 48, 62, 63,
	0x8000u | 14, 29, 28, 25, 41, 38, 37, 39, 36, 33, 51, 46, 45, 47, 44,
	0x8000u | 10, 23, 8, 22, 9, 27, 12, 26, 13, 29, 16,
	4, 45, 44, 58, 59,
	4, 57, 56, 70, 71,
	0x8000u | 9, 33, 34, 39, 21, 24, 27, 25, 26, 29,
	4, 61, 60, 74, 75,
	4, 51, 50, 36, 37,
	0x8000u | 14, 41, 40, 37, 53, 50, 49, 51, 48, 45, 63, 58, 57, 59, 56,
	4, 25, 24, 38, 39,
	3, 27, 22, 21,
	9, 69, 72, 75, 73, 74, 77, 61, 64, 65,
	0x8000u | 10, 5, 17, 4, 14, 3, 15, 2, 10, 1, 11,
	3, 76, 77, 73,
	10, 22, 23, 21, 20, 34, 35, 33, 32, 46, 47,
	0x8000u | 6, 13, 12, 15, 9, 10, 11,
	0x8000u | 5, 15, 14, 13, 17, 16,
	3, 8, 9, 11
};

extern "C" __declspec(dllexport) Sint16 poly_0009EA4A[] = {
	25, 66, 67, 85, 54, 84, 55, 86, 42, 83, 43, 87, 30, 89, 31, 88, 18, 79, 19, 82, 6, 81, 7, 78, 0, 80
};

extern "C" __declspec(dllexport) Sint16 poly_0009EA7E[] = {
	6, 71, 56, 54, 59, 55, 42,
	5, 54, 67, 71, 66, 68,
	4, 47, 32, 30, 35,
	6, 30, 43, 47, 42, 44, 59,
	6, 23, 8, 6, 11, 7, 0,
	4, 6, 19, 23, 18,
	3, 1, 0, 11,
	0x8000u | 6, 23, 20, 18, 35, 31, 30
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009EAE0[] = {
	{ 624, 126 },
	{ 705, 130 },
	{ 706, 72 },
	{ 780, 131 },
	{ 779, 70 },
	{ 855, 74 },
	{ 776, 15 },
	{ 853, 15 },
	{ 856, -40 },
	{ 927, 15 },
	{ 928, -41 },
	{ 1020, -40 },
	{ 928, -100 },
	{ 1020, -99 },
	{ 706, 72 },
	{ 702, 16 },
	{ 779, 70 },
	{ 776, 15 },
	{ 288, 128 },
	{ 368, 127 },
	{ 368, 68 },
	{ 450, 125 },
	{ 450, 65 },
	{ 540, 63 },
	{ 446, 10 },
	{ 537, 9 },
	{ 544, -50 },
	{ 622, 12 },
	{ 626, -46 },
	{ 705, -39 },
	{ 626, -110 },
	{ 704, -101 },
	{ 288, -105 },
	{ 212, -103 },
	{ 290, -42 },
	{ 215, -41 },
	{ 280, 15 },
	{ 204, 16 },
	{ 288, 68 },
	{ 212, 69 },
	{ 288, 128 },
	{ 213, 129 },
	{ 705, -39 },
	{ 704, -101 },
	{ 779, -43 },
	{ 776, -103 },
	{ 856, -40 },
	{ 855, -100 },
	{ 928, -41 },
	{ 928, -100 },
	{ 544, -50 },
	{ 454, -48 },
	{ 446, 10 },
	{ 370, -44 },
	{ 362, 13 },
	{ 280, 15 },
	{ 368, 68 },
	{ 288, 68 },
	{ 288, 128 },
	{ 855, 74 },
	{ 853, 15 },
	{ 927, 73 },
	{ 927, 15 },
	{ 622, 12 },
	{ 625, 65 },
	{ 537, 9 },
	{ 540, 63 },
	{ 450, 125 },
	{ 538, 124 },
	{ 540, 63 },
	{ 624, 126 },
	{ 625, 65 },
	{ 706, 72 },
	{ 622, 12 },
	{ 702, 16 },
	{ 705, -39 },
	{ 776, 15 },
	{ 779, -43 },
	{ 856, -40 },
	{ 776, -103 },
	{ 855, -100 },
	{ 368, 68 },
	{ 362, 13 },
	{ 450, 65 },
	{ 446, 10 },
	{ 280, 15 },
	{ 290, -42 },
	{ 370, -44 },
	{ 1020, -40 },
	{ 1020, 16 },
	{ 927, 15 },
	{ 1020, 73 },
	{ 927, 73 },
	{ 927, 134 },
	{ 855, 74 },
	{ 855, 133 },
	{ 780, 131 },
	{ 75, 131 },
	{ 141, 128 },
	{ 75, 70 },
	{ 141, 69 },
	{ 63, 16 },
	{ 130, 13 },
	{ 76, -42 },
	{ 142, -44 },
	{ 72, -103 },
	{ 138, -106 },
	{ 1020, 133 },
	{ 927, 134 },
	{ 1020, 73 },
	{ 290, -42 },
	{ 288, -105 },
	{ 370, -44 },
	{ 368, -107 },
	{ 454, -48 },
	{ 452, -112 },
	{ 544, -50 },
	{ 542, -115 },
	{ 626, -46 },
	{ 626, -110 },
	{ 212, 69 },
	{ 204, 16 },
	{ 130, 13 },
	{ 215, -41 },
	{ 142, -44 },
	{ 138, -106 },
	{ 130, 13 },
	{ 141, 69 },
	{ 212, 69 },
	{ 141, 128 },
	{ 213, 129 },
	{ 212, -103 },
	{ 215, -41 },
	{ 138, -106 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009ECF8[] = {
	{ 7650, -4845 },
	{ 7592, -4318 },
	{ 7356, -4552 },
	{ 7395, -3952 },
	{ 7171, -4204 },
	{ 7175, -3574 },
	{ 6963, -3843 },
	{ 6886, -3314 },
	{ 6786, -3606 },
	{ 6511, -3205 },
	{ 6434, -3504 },
	{ 6106, -3090 },
	{ 6052, -3394 },
	{ 5670, -2977 },
	{ 5642, -3286 },
	{ 5285, -2793 },
	{ 5281, -3112 },
	{ 4949, -2530 },
	{ 4966, -2862 },
	{ 4595, -2368 },
	{ 4632, -2708 },
	{ 4229, -2296 },
	{ 4138, -2597 },
	{ 3952, -2086 },
	{ 3780, -2333 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009ED5C[] = {
	{ 12350, 255 },
	{ 12025, 255 },
	{ 12024, 0 },
	{ 11679, 255 },
	{ 11678, 0 },
	{ 11354, 0 },
	{ 12024, 0 },
	{ 12351, 0 },
	{ 12350, 255 },
	{ 12750, 0 },
	{ 12750, 255 },
	{ 11015, 255 },
	{ 10643, 255 },
	{ 10640, 0 },
	{ 10247, 255 },
	{ 10640, 0 },
	{ 11011, 0 },
	{ 11015, 255 },
	{ 11354, 0 },
	{ 11357, 254 },
	{ 11679, 255 },
	{ 9519, 255 },
	{ 9183, 255 },
	{ 9178, 0 },
	{ 8854, 255 },
	{ 8848, 0 },
	{ 8554, 0 },
	{ 9178, 0 },
	{ 9515, 0 },
	{ 9519, 255 },
	{ 9874, 0 },
	{ 8561, 255 },
	{ 8554, 0 },
	{ 8854, 255 },
	{ 9519, 255 },
	{ 9877, 255 },
	{ 9874, 0 },
	{ 10247, 255 },
	{ 10243, 0 },
	{ 10640, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009EDFC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 19, poly_0009E918, NULL, NULL, NULL, uv_0009EAE0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0009EA4A, NULL, NULL, NULL, uv_0009ECF8, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 8, poly_0009EA7E, NULL, NULL, NULL, uv_0009ED5C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009EE44[] = {
	{ 907.6689f, -203.0026f, 559.2604f },
	{ 912.4812f, -276.8047f, 500.1909f },
	{ 907.2985f, -346.4493f, 457.3608f },
	{ 905.6113f, -467.9404f, 428.617f },
	{ 903.7119f, -577.2861f, 398.6419f },
	{ 907.6246f, -651, 368.1859f },
	{ 1172.143f, -231.9479f, 656.6813f },
	{ 1021.288f, -227.6293f, 632.1279f },
	{ 1172.35f, -276.4256f, 604.0291f },
	{ 1163.52f, -346.0703f, 568.0211f },
	{ 1016.313f, -346.0703f, 536.6456f },
	{ 1021.495f, -276.4256f, 579.4756f },
	{ 1155.765f, -467.5222f, 547.7911f },
	{ 1148.092f, -576.8679f, 528.6179f },
	{ 1006.658f, -576.8679f, 486.4403f },
	{ 1008.557f, -467.5222f, 516.4155f },
	{ 1146.295f, -651, 506.7175f },
	{ 1004.861f, -651, 464.5401f },
	{ 1455.869f, -214.2205f, 803.498f },
	{ 1318.059f, -212.5267f, 712.6975f },
	{ 1453.983f, -276.6052f, 754.0436f },
	{ 1445.505f, -346.2499f, 717.1771f },
	{ 1307.344f, -346.2499f, 627.2353f },
	{ 1316.173f, -276.6052f, 663.2431f },
	{ 1436.444f, -467.7473f, 701.0243f },
	{ 1429.328f, -577.093f, 680.4916f },
	{ 1290.61f, -577.093f, 591.9092f },
	{ 1298.283f, -467.7473f, 611.0823f },
	{ 1424.553f, -651, 662.7014f },
	{ 1285.836f, -651, 574.1188f },
	{ 1793.888f, -237.6578f, 905.5784f },
	{ 1614.484f, -227.7766f, 866.8699f },
	{ 1791.477f, -276.5786f, 858.5648f },
	{ 1781.262f, -346.2233f, 826.9646f },
	{ 1603.595f, -346.2233f, 782.9899f },
	{ 1612.073f, -276.5786f, 819.8564f },
	{ 1770.755f, -467.7085f, 813.4803f },
	{ 1760.887f, -577.0541f, 801.2859f },
	{ 1585.971f, -577.0541f, 748.973f },
	{ 1593.088f, -467.7085f, 769.5057f },
	{ 1755.545f, -651, 786.7285f },
	{ 1580.629f, -651, 734.4156f },
	{ 2115.409f, -216.0816f, 983.1556f },
	{ 1960.983f, -223.9255f, 945.7711f },
	{ 2114.321f, -276.8456f, 932.5184f },
	{ 2109.399f, -346.4903f, 889.3168f },
	{ 1949.68f, -346.4903f, 863.5334f },
	{ 1959.895f, -276.8456f, 895.1338f },
	{ 2103.034f, -468.1714f, 871.9091f },
	{ 2101.55f, -577.5172f, 841.3459f },
	{ 1933.447f, -577.5172f, 833.9313f },
	{ 1943.314f, -468.1714f, 846.1258f },
	{ 2097.333f, -651, 822.0588f },
	{ 1929.231f, -651, 814.644f },
	{ 2325.262f, -236.5108f, 1203.474f },
	{ 2234.67f, -250.8838f, 1073.012f },
	{ 2330.766f, -276.5375f, 1142.481f },
	{ 2332.522f, -346.1822f, 1092.341f },
	{ 2235.274f, -346.1822f, 968.8182f },
	{ 2240.196f, -276.5375f, 1012.02f },
	{ 2333.112f, -467.8518f, 1063.832f },
	{ 2342.382f, -577.1975f, 1022.281f },
	{ 2234.656f, -577.1975f, 909.7458f },
	{ 2236.14f, -467.8518f, 940.309f },
	{ 2347.149f, -651, 989.3887f },
	{ 2239.449f, -651, 876.853f },
	{ 2429.492f, -224.4322f, 1510.911f },
	{ 2406.284f, -245.6417f, 1329.781f },
	{ 2436.894f, -276.6165f, 1448.314f },
	{ 2436.783f, -346.2613f, 1399.724f },
	{ 2416.695f, -346.2441f, 1216.307f },
	{ 2414.829f, -276.5994f, 1266.448f },
	{ 2438.69f, -467.7565f, 1367.831f },
	{ 2444.822f, -577.1022f, 1328.736f },
	{ 2428.998f, -577.0515f, 1141.621f },
	{ 2419.726f, -467.7058f, 1183.171f },
	{ 2452.191f, -651, 1293.757f },
	{ 2437.892f, -651, 1105.704f },
	{ 983.7468f, -189.6293f, 735.9672f },
	{ 1454.158f, -176.2205f, 913.5189f },
	{ 836.7755f, -165.0026f, 644.9605f },
	{ 1187.455f, -193.9479f, 774.0432f },
	{ 1324.617f, -174.5267f, 827.2584f },
	{ 2074.126f, -178.0816f, 1084.194f },
	{ 2232.553f, -198.5108f, 1289.913f },
	{ 2308.713f, -207.6417f, 1409.904f },
	{ 2147.396f, -212.8838f, 1165.974f },
	{ 1928.966f, -185.9255f, 1048.679f },
	{ 1603.256f, -189.7766f, 973.7222f },
	{ 1771.896f, -199.6578f, 1010.495f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009F27C[] = {
	{ 0.426421f, 0.8026969f, -0.416945f },
	{ 0.53316f, 0.482908f, -0.6946509f },
	{ 0.568263f, 0.254315f, -0.7825609f },
	{ 0.6128359f, 0.169507f, -0.7718149f },
	{ 0.630006f, 0.236115f, -0.739825f },
	{ 0.62442f, 0.268662f, -0.733431f },
	{ 0.109664f, 0.835863f, -0.537872f },
	{ 0.24738f, 0.855634f, -0.454635f },
	{ 0.220505f, 0.569698f, -0.791721f },
	{ 0.281297f, 0.285961f, -0.916023f },
	{ 0.396112f, 0.305916f, -0.865743f },
	{ 0.352854f, 0.571291f, -0.741027f },
	{ 0.317598f, 0.1473f, -0.9367149f },
	{ 0.339468f, 0.205678f, -0.917855f },
	{ 0.463243f, 0.235486f, -0.854372f },
	{ 0.434795f, 0.172702f, -0.883814f },
	{ 0.331682f, 0.246107f, -0.910724f },
	{ 0.476557f, 0.272947f, -0.835699f },
	{ 0.311059f, 0.793303f, -0.523366f },
	{ 0.22915f, 0.803773f, -0.549034f },
	{ 0.419362f, 0.478951f, -0.771195f },
	{ 0.459278f, 0.228877f, -0.8583f },
	{ 0.448338f, 0.234259f, -0.8626209f },
	{ 0.382207f, 0.497359f, -0.778815f },
	{ 0.466514f, 0.103761f, -0.8784069f },
	{ 0.465165f, 0.148959f, -0.872601f },
	{ 0.468201f, 0.158092f, -0.869365f },
	{ 0.466394f, 0.108097f, -0.877947f },
	{ 0.471287f, 0.168397f, -0.8657539f },
	{ 0.457536f, 0.197175f, -0.867054f },
	{ 0.102533f, 0.840369f, -0.5322289f },
	{ 0.213299f, 0.8227389f, -0.526881f },
	{ 0.178019f, 0.554806f, -0.812712f },
	{ 0.219619f, 0.250404f, -0.942903f },
	{ 0.305799f, 0.250749f, -0.918484f },
	{ 0.274977f, 0.532786f, -0.800329f },
	{ 0.228977f, 0.101216f, -0.968155f },
	{ 0.234181f, 0.148153f, -0.960838f },
	{ 0.340022f, 0.150769f, -0.928253f },
	{ 0.327126f, 0.10776f, -0.938816f },
	{ 0.236358f, 0.185927f, -0.953712f },
	{ 0.343993f, 0.168569f, -0.923717f },
	{ 0.316381f, 0.848577f, -0.424052f },
	{ 0.077827f, 0.842403f, -0.533198f },
	{ 0.341645f, 0.57166f, -0.745978f },
	{ 0.330399f, 0.29713f, -0.895851f },
	{ 0.180285f, 0.271237f, -0.945478f },
	{ 0.148945f, 0.572363f, -0.806359f },
	{ 0.299691f, 0.180977f, -0.936714f },
	{ 0.248881f, 0.251795f, -0.935231f },
	{ 0.114316f, 0.185002f, -0.9760669f },
	{ 0.148077f, 0.132349f, -0.9800799f },
	{ 0.230387f, 0.281063f, -0.9316249f },
	{ 0.116363f, 0.229578f, -0.966309f },
	{ 0.397553f, 0.879472f, -0.261689f },
	{ 0.384972f, 0.880049f, -0.278049f },
	{ 0.632345f, 0.628469f, -0.452953f },
	{ 0.776435f, 0.2652f, -0.5716799f },
	{ 0.6337489f, 0.282623f, -0.72006f },
	{ 0.600415f, 0.560598f, -0.570292f },
	{ 0.77231f, 0.209011f, -0.599876f },
	{ 0.733372f, 0.297317f, -0.611366f },
	{ 0.573239f, 0.285376f, -0.768087f },
	{ 0.622515f, 0.198471f, -0.757023f },
	{ 0.716538f, 0.332999f, -0.612932f },
	{ 0.550482f, 0.320498f, -0.770876f },
	{ 0.555932f, 0.8173479f, -0.151268f },
	{ 0.606832f, 0.7768109f, -0.168284f },
	{ 0.9074939f, 0.399254f, -0.130579f },
	{ 0.9913329f, 0.075834f, -0.107279f },
	{ 0.912994f, 0.200957f, -0.355047f },
	{ 0.847812f, 0.444416f, -0.289326f },
	{ 0.992664f, 0.07261f, -0.09667899f },
	{ 0.989163f, 0.121759f, -0.082048f },
	{ 0.917374f, 0.22505f, -0.328294f },
	{ 0.9312479f, 0.148504f, -0.332751f },
	{ 0.984466f, 0.156786f, -0.07901999f },
	{ 0.879846f, 0.273703f, -0.388532f },
	{ 0.18614f, 0.950534f, -0.248672f },
	{ 0.21284f, 0.924568f, -0.316027f },
	{ 0.289461f, 0.940568f, -0.177604f },
	{ 0.024464f, 0.948638f, -0.315417f },
	{ 0.143139f, 0.937587f, -0.316925f },
	{ 0.213823f, 0.959505f, -0.183386f },
	{ 0.235661f, 0.957899f, -0.163991f },
	{ 0.268363f, 0.9550239f, -0.126137f },
	{ 0.268451f, 0.95297f, -0.140651f },
	{ 0.017324f, 0.940729f, -0.338717f },
	{ 0.161382f, 0.933827f, -0.319255f },
	{ 0.061986f, 0.941484f, -0.331308f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009F6B4 = { vertex_0009EE44, normal_0009F27C, LengthOfArray<Sint32>(vertex_0009EE44), meshlist_0009EDFC, matlist_0009E8DC, LengthOfArray<Uint16>(meshlist_0009EDFC), LengthOfArray<Uint16>(matlist_0009E8DC), { 1644.483f, -408.0013f, 939.5483f }, 971.9842f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009F6DC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009F6B4, -605, 431, 1620, 0, 0x3BF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009F710[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009F774[] = {
	3, 46, 47, 43,
	0x8000u | 6, 43, 44, 47, 31, 34, 35,
	4, 31, 35, 32, 19,
	5, 23, 10, 7, 11, 8,
	6, 7, 20, 23, 19, 22, 35,
	16, 8, 9, 7, 6, 20, 21, 19, 18, 32, 33, 31, 30, 44, 45, 43, 42
};

extern "C" __declspec(dllexport) Sint16 poly_0009F7D0[] = {
	3, 9, 4, 3,
	0x8000u | 6, 21, 18, 15, 33, 28, 27,
	0x8000u | 6, 15, 16, 21, 3, 6, 9,
	0x8000u | 6, 33, 30, 27, 45, 40, 39,
	3, 42, 45, 39
};

extern "C" __declspec(dllexport) Sint16 poly_0009F80A[] = {
	16, 4, 5, 3, 2, 16, 17, 15, 14, 28, 29, 27, 26, 40, 41, 39, 38
};

extern "C" __declspec(dllexport) Sint16 poly_0009F82C[] = {
	0x8000u | 5, 38, 36, 41, 37, 24,
	5, 17, 2, 0, 5, 1,
	6, 29, 14, 12, 17, 13, 0,
	6, 12, 25, 29, 24, 26, 41
};

extern "C" __declspec(dllexport) Sint16 poly_0009F860[] = {
	15, 1, 51, 0, 50, 13, 52, 12, 49, 25, 53, 24, 54, 37, 48, 36
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009F880[] = {
	{ 1275, 255 },
	{ 1098, 255 },
	{ 1275, 153 },
	{ 1275, 153 },
	{ 1096, 150 },
	{ 1098, 255 },
	{ 920, 151 },
	{ 916, 255 },
	{ 729, 255 },
	{ 920, 151 },
	{ 729, 255 },
	{ 732, 151 },
	{ 538, 152 },
	{ 344, 255 },
	{ 180, 255 },
	{ 182, 151 },
	{ 0, 255 },
	{ 0, 153 },
	{ 182, 151 },
	{ 342, 151 },
	{ 344, 255 },
	{ 538, 152 },
	{ 538, 255 },
	{ 729, 255 },
	{ 0, 153 },
	{ 0 },
	{ 182, 151 },
	{ 169, 0 },
	{ 342, 151 },
	{ 332, 0 },
	{ 538, 152 },
	{ 537, 0 },
	{ 732, 151 },
	{ 733, 0 },
	{ 920, 151 },
	{ 924, 0 },
	{ 1096, 150 },
	{ 1101, 0 },
	{ 1275, 153 },
	{ 1275, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009F920[] = {
	{ 2, 254 },
	{ 0, 1 },
	{ 352, 0 },
	{ 732, 254 },
	{ 1090, 254 },
	{ 1080, 0 },
	{ 1458, 254 },
	{ 1449, 0 },
	{ 1847, 0 },
	{ 1080, 0 },
	{ 712, 0 },
	{ 732, 254 },
	{ 352, 0 },
	{ 352, 254 },
	{ 2, 254 },
	{ 1458, 254 },
	{ 1856, 254 },
	{ 1847, 0 },
	{ 2215, 254 },
	{ 2205, 0 },
	{ 2549, 0 },
	{ 2545, 254 },
	{ 2215, 254 },
	{ 2549, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009F980[] = {
	{ 1939, -586 },
	{ 1934, -765 },
	{ 2112, -585 },
	{ 2100, -765 },
	{ 2278, -585 },
	{ 2265, -765 },
	{ 2486, -585 },
	{ 2482, -765 },
	{ 2688, -585 },
	{ 2684, -765 },
	{ 2883, -585 },
	{ 2880, -765 },
	{ 3054, -585 },
	{ 3051, -765 },
	{ 3230, -586 },
	{ 3228, -765 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009F9C0[] = {
	{ 6580, 255 },
	{ 6566, 0 },
	{ 6222, 255 },
	{ 6208, 0 },
	{ 5865, 0 },
	{ 4627, 255 },
	{ 4290, 254 },
	{ 4272, 0 },
	{ 3949, 255 },
	{ 3932, 0 },
	{ 5479, 255 },
	{ 5066, 255 },
	{ 5050, 0 },
	{ 4627, 255 },
	{ 4612, 0 },
	{ 4272, 0 },
	{ 5050, 0 },
	{ 5470, 0 },
	{ 5479, 255 },
	{ 5865, 0 },
	{ 5872, 255 },
	{ 6222, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009FA18[] = {
	{ 0, -753 },
	{ 239, -569 },
	{ 146, -332 },
	{ 544, -344 },
	{ 470, -96 },
	{ 1003, -260 },
	{ 957, -10 },
	{ 1437, -163 },
	{ 1420, 92 },
	{ 1834, -9 },
	{ 1843, 255 },
	{ 2119, -93 },
	{ 2225, 185 },
	{ 2444, -324 },
	{ 2571, -57 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009FA54[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_0009F774, NULL, NULL, NULL, uv_0009F880, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 5, poly_0009F7D0, NULL, NULL, NULL, uv_0009F920, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0009F80A, NULL, NULL, NULL, uv_0009F980, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, poly_0009F82C, NULL, NULL, NULL, uv_0009F9C0, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_0009F860, NULL, NULL, NULL, uv_0009FA18, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009FACC[] = {
	{ -659.9496f, -226.8987f, -45.11848f },
	{ -720.3157f, -234.579f, 99.53326f },
	{ -652.7974f, -277.0688f, -64.80052f },
	{ -657.1162f, -346.7135f, -87.16585f },
	{ -710.2225f, -346.7135f, 67.10034f },
	{ -713.1634f, -277.0688f, 79.85125f },
	{ -656.1892f, -468.5066f, -76.11453f },
	{ -656.7205f, -577.8523f, -71.2076f },
	{ -698.5804f, -577.8523f, 101.5015f },
	{ -709.2955f, -468.5066f, 78.15165f },
	{ -650.2074f, -651, -56.64157f },
	{ -692.0675f, -651, 116.0675f },
	{ -325.6735f, -219.6534f, -156.7573f },
	{ -526.4601f, -237.5403f, -126.8247f },
	{ -324.7079f, -276.3166f, -185.3399f },
	{ -335.1031f, -345.9613f, -211.3034f },
	{ -529.8132f, -345.9613f, -177.7726f },
	{ -525.4945f, -276.3166f, -155.4072f },
	{ -342.2674f, -467.463f, -212.6992f },
	{ -352.5219f, -576.8086f, -222.3979f },
	{ -537.5089f, -576.8086f, -174.2614f },
	{ -536.9775f, -467.463f, -179.1684f },
	{ -355.844f, -651, -223.5362f },
	{ -540.831f, -651, -175.3998f },
	{ 39.05661f, -223.1183f, -248.2206f },
	{ -135.0344f, -226.5181f, -192.3161f },
	{ 35.30782f, -276.6806f, -285.9322f },
	{ 24.81419f, -346.3253f, -315.2652f },
	{ -149.1784f, -346.3253f, -255.9912f },
	{ -138.7832f, -276.6806f, -230.0278f },
	{ 13.24219f, -467.7482f, -321.8839f },
	{ 2.911018f, -577.0938f, -331.314f },
	{ -171.0048f, -577.0938f, -272.3087f },
	{ -160.7504f, -467.7482f, -262.61f },
	{ -4.336683f, -651, -340.3668f },
	{ -178.2525f, -651, -281.3614f },
	{ 338.7388f, -241.9541f, -140.4036f },
	{ 195.8927f, -226.9542f, -224.2751f },
	{ 339.8901f, -276.7104f, -193.4052f },
	{ 340.0305f, -346.3552f, -242.2197f },
	{ 186.5505f, -346.3552f, -306.6097f },
	{ 197.0442f, -276.7104f, -277.2767f },
	{ 338.0682f, -468.266f, -261.4542f },
	{ 344.5973f, -577.6116f, -300.9046f },
	{ 174.2571f, -577.6116f, -335.2743f },
	{ 184.5883f, -468.266f, -325.8442f },
	{ 342.9046f, -651, -324.2534f },
	{ 172.5644f, -651, -358.6232f },
	{ 286.5382f, -190.9541f, -48.25923f },
	{ -128.1092f, -188.5181f, -103.782f },
	{ -496.0487f, -199.5403f, -41.56512f },
	{ -621.5291f, -188.8987f, 36.05574f },
	{ -307.3095f, -181.6534f, -70.00106f },
	{ 35.53662f, -178.1183f, -156.8913f },
	{ 152.2624f, -175.9542f, -127.9372f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009FD60[] = {
	{ -0.6257499f, 0.592119f, -0.507772f },
	{ -0.8650129f, 0.367209f, -0.341922f },
	{ -0.752566f, 0.225968f, -0.618533f },
	{ -0.782869f, 0.089962f, -0.615649f },
	{ -0.9451399f, 0.029127f, -0.325366f },
	{ -0.931439f, 0.050559f, -0.360368f },
	{ -0.82888f, -0.042003f, -0.557847f },
	{ -0.846123f, -0.08322f, -0.52645f },
	{ -0.966273f, -0.107089f, -0.234198f },
	{ -0.959155f, -0.057665f, -0.276941f },
	{ -0.860187f, -0.114923f, -0.49686f },
	{ -0.963323f, -0.132266f, -0.233483f },
	{ -0.120531f, 0.777786f, -0.616864f },
	{ -0.259115f, 0.715875f, -0.648369f },
	{ -0.166137f, 0.458109f, -0.8732319f },
	{ -0.197448f, 0.198201f, -0.960068f },
	{ -0.37321f, 0.160065f, -0.913835f },
	{ -0.331905f, 0.411993f, -0.848588f },
	{ -0.229324f, 0.054306f, -0.9718339f },
	{ -0.257823f, 0.0632f, -0.964123f },
	{ -0.464232f, -0.013484f, -0.885611f },
	{ -0.426504f, 0.001678f, -0.904484f },
	{ -0.257859f, 0.054839f, -0.9646249f },
	{ -0.46814f, -0.030216f, -0.8831379f },
	{ -0.045949f, 0.77917f, -0.6251259f },
	{ -0.153894f, 0.771902f, -0.616833f },
	{ -0.090627f, 0.511637f, -0.854409f },
	{ -0.132281f, 0.242176f, -0.961173f },
	{ -0.271366f, 0.227352f, -0.935239f },
	{ -0.229389f, 0.475358f, -0.849362f },
	{ -0.15631f, 0.097165f, -0.982917f },
	{ -0.172747f, 0.143912f, -0.974396f },
	{ -0.29125f, 0.11383f, -0.949851f },
	{ -0.284155f, 0.088257f, -0.954708f },
	{ -0.178499f, 0.181591f, -0.967038f },
	{ -0.290285f, 0.114501f, -0.950065f },
	{ 0.348235f, 0.810393f, -0.471163f },
	{ 0.250809f, 0.790388f, -0.558911f },
	{ 0.384568f, 0.588133f, -0.711482f },
	{ 0.368327f, 0.305859f, -0.877944f },
	{ 0.205869f, 0.266064f, -0.9417149f },
	{ 0.237865f, 0.540203f, -0.807218f },
	{ 0.294525f, 0.173519f, -0.939759f },
	{ 0.191441f, 0.251248f, -0.948802f },
	{ 0.08334199f, 0.203359f, -0.9755509f },
	{ 0.154134f, 0.138718f, -0.978264f },
	{ 0.189059f, 0.29375f, -0.936999f },
	{ 0.081608f, 0.255652f, -0.963318f },
	{ 0.296453f, 0.8930449f, -0.338506f },
	{ -0.093819f, 0.916971f, -0.387765f },
	{ -0.142813f, 0.921375f, -0.361487f },
	{ -0.335584f, 0.904139f, -0.264418f },
	{ -0.087844f, 0.921363f, -0.378646f },
	{ -0.038324f, 0.910951f, -0.410731f },
	{ 0.19147f, 0.899829f, -0.391978f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009FFF4 = { vertex_0009FACC, normal_0009FD60, LengthOfArray<Sint32>(vertex_0009FACC), meshlist_0009FA54, matlist_0009F710, LengthOfArray<Uint16>(meshlist_0009FA54), LengthOfArray<Uint16>(matlist_0009F710), { -187.8591f, -413.4771f, -121.2779f }, 585.4393f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A001C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009FFF4, -605, 431, 1620, 0, 0x3BF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A0050[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A0078[] = {
	0x8000u | 14, 14, 0, 18, 3, 17, 2, 19, 7, 15, 6, 20, 11, 16, 10
};

extern "C" __declspec(dllexport) Sint16 poly_000A0096[] = {
	0x8000u | 5, 12, 10, 13, 11, 6,
	6, 2, 7, 9, 6, 8, 13,
	3, 1, 0, 5,
	6, 0, 3, 5, 2, 4, 9
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A00C8[] = {
	{ 2444, -324 },
	{ 2571, -57 },
	{ 2680, -657 },
	{ 2822, -406 },
	{ 2872, -1137 },
	{ 3001, -836 },
	{ 3107, -1314 },
	{ 3251, -1021 },
	{ 3401, -1554 },
	{ 3550, -1266 },
	{ 3617, -1983 },
	{ 3778, -1715 },
	{ 3780, -2333 },
	{ 3952, -2086 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A0100[] = {
	{ 8561, 255 },
	{ 8554, 0 },
	{ 8243, 255 },
	{ 8235, 0 },
	{ 7926, 0 },
	{ 7272, 0 },
	{ 7603, 0 },
	{ 7609, 255 },
	{ 7926, 0 },
	{ 7931, 255 },
	{ 8243, 255 },
	{ 6580, 255 },
	{ 6566, 0 },
	{ 6919, 255 },
	{ 6566, 0 },
	{ 6913, 0 },
	{ 6919, 255 },
	{ 7272, 0 },
	{ 7279, 255 },
	{ 7609, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A0150[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000A0078, NULL, NULL, NULL, uv_000A00C8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_000A0096, NULL, NULL, NULL, uv_000A0100, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A0180[] = {
	{ 338.7388f, -241.9541f, -140.4036f },
	{ 339.8901f, -276.7104f, -193.4051f },
	{ 515.8113f, -214.6051f, 128.4457f },
	{ 442.2517f, -234.6735f, -19.64191f },
	{ 523.7114f, -276.6084f, 65.36092f },
	{ 450.1517f, -276.6084f, -82.72674f },
	{ 741.6072f, -220.7438f, 276.4797f },
	{ 618.7697f, -240.0724f, 192.4991f },
	{ 749.3799f, -276.5922f, 213.6259f },
	{ 626.5423f, -276.5922f, 129.6453f },
	{ 907.6689f, -203.0026f, 559.2604f },
	{ 835.72f, -230.3659f, 431.7136f },
	{ 912.4812f, -276.8047f, 500.1909f },
	{ 822.6083f, -276.8047f, 370.9905f },
	{ 286.5383f, -190.9541f, -48.25921f },
	{ 680.6774f, -187.7438f, 376.3197f },
	{ 836.7755f, -165.0026f, 644.9605f },
	{ 462.7307f, -185.6051f, 232.1489f },
	{ 383.8405f, -181.6735f, 66.46431f },
	{ 559.5115f, -178.0724f, 292.9997f },
	{ 769.1436f, -164.3659f, 523.7913f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A027C[] = {
	{ 0.422034f, 0.806978f, -0.413126f },
	{ 0.480524f, 0.7484879f, -0.457014f },
	{ 0.423841f, 0.846635f, -0.32182f },
	{ 0.491389f, 0.795997f, -0.353448f },
	{ 0.590521f, 0.691247f, -0.416487f },
	{ 0.5278299f, 0.730301f, -0.433654f },
	{ 0.450973f, 0.794629f, -0.406434f },
	{ 0.289066f, 0.8723119f, -0.394352f },
	{ 0.429861f, 0.768308f, -0.47426f },
	{ 0.402377f, 0.773143f, -0.490248f },
	{ 0.520619f, 0.759785f, -0.389464f },
	{ 0.563899f, 0.7255549f, -0.394446f },
	{ 0.728813f, 0.458814f, -0.508253f },
	{ 0.754879f, 0.477176f, -0.449957f },
	{ 0.304977f, 0.895884f, -0.323081f },
	{ 0.233459f, 0.932293f, -0.276274f },
	{ 0.406133f, 0.855988f, -0.319907f },
	{ 0.278452f, 0.939158f, -0.201112f },
	{ 0.377258f, 0.883023f, -0.279188f },
	{ 0.219778f, 0.930722f, -0.292326f },
	{ 0.341138f, 0.900564f, -0.269462f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A0378 = { vertex_000A0180, normal_000A027C, LengthOfArray<Sint32>(vertex_000A0180), meshlist_000A0150, matlist_000A0050, LengthOfArray<Uint16>(meshlist_000A0150), LengthOfArray<Uint16>(matlist_000A0050), { 599.5098f, -220.5853f, 225.7777f }, 519.0121f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A03A0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A0378, -605, 431, 1620, 0, 0x3BF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A03D4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A03E8[] = {
	3, 29, 30, 32,
	0x8000u | 5, 30, 27, 29, 26, 52,
	5, 27, 26, 24, 51, 22,
	14, 43, 44, 41, 40, 39, 38, 37, 36, 35, 34, 32, 53, 29, 52,
	4, 1, 31, 2, 3,
	0x8000u | 6, 16, 17, 58, 18, 59, 19,
	0x8000u | 6, 13, 11, 46, 9, 45, 7,
	0x8000u | 17, 42, 19, 49, 18, 48, 17, 47, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7,
	14, 8, 7, 6, 5, 4, 33, 3, 57, 2, 56, 1, 55, 0, 54,
	0x8000u | 12, 49, 50, 42, 20, 21, 22, 23, 24, 25, 27, 28, 30
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A04A8[] = {
	{ 3710, 138 },
	{ 3710, 254 },
	{ 4009, 254 },
	{ 29, 254 },
	{ 880, 102 },
	{ 29, 44 },
	{ 805, 0 },
	{ 0 },
	{ 880, 102 },
	{ 805, 0 },
	{ 1300, 95 },
	{ 1225, 0 },
	{ 2120, 0 },
	{ 6349, 254 },
	{ 6349, 0 },
	{ 5852, 254 },
	{ 5852, 0 },
	{ 5303, 254 },
	{ 5354, 0 },
	{ 4905, 254 },
	{ 4954, 0 },
	{ 4506, 254 },
	{ 4557, 0 },
	{ 4009, 254 },
	{ 4059, 0 },
	{ 3710, 138 },
	{ 3710, 0 },
	{ 272, 254 },
	{ 572, 254 },
	{ 572, 208 },
	{ 1020, 254 },
	{ 5468, 254 },
	{ 4870, 166 },
	{ 4870, 254 },
	{ 4152, 166 },
	{ 4152, 254 },
	{ 3495, 254 },
	{ 6245, 0 },
	{ 6723, 68 },
	{ 6723, 0 },
	{ 7021, 64 },
	{ 7021, 0 },
	{ 7619, 0 },
	{ 3137, 254 },
	{ 3495, 254 },
	{ 3495, 0 },
	{ 4152, 166 },
	{ 4152, 0 },
	{ 4870, 166 },
	{ 4870, 0 },
	{ 5468, 254 },
	{ 5468, 0 },
	{ 6245, 254 },
	{ 6245, 0 },
	{ 6723, 254 },
	{ 6723, 68 },
	{ 7021, 254 },
	{ 7021, 64 },
	{ 7619, 254 },
	{ 7619, 0 },
	{ 2465, 254 },
	{ 2415, 0 },
	{ 1967, 254 },
	{ 1967, 0 },
	{ 1519, 254 },
	{ 1519, 0 },
	{ 1020, 254 },
	{ 971, 0 },
	{ 572, 208 },
	{ 572, 0 },
	{ 272, 254 },
	{ 272, 0 },
	{ 24, 254 },
	{ 24, 0 },
	{ 3495, 0 },
	{ 3137, 0 },
	{ 3137, 254 },
	{ 2719, 0 },
	{ 2659, 254 },
	{ 2120, 0 },
	{ 2120, 254 },
	{ 1300, 95 },
	{ 1403, 254 },
	{ 880, 102 },
	{ 865, 254 },
	{ 29, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A0600[] = {
	{ NJD_MESHSET_TRIMESH | 0, 10, poly_000A03E8, NULL, NULL, NULL, uv_000A04A8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A0618[] = {
	{ -1159.941f, 9.998655f, 141.633f },
	{ -1121.073f, 9.99861f, 241.9016f },
	{ -1049.326f, 9.999994f, 323.3777f },
	{ -953.9053f, 9.999994f, 346.3003f },
	{ -861.8121f, 9.999994f, 315.1663f },
	{ -760.8848f, 100.0001f, 389.2315f },
	{ -791.0687f, 9.999994f, 384.7092f },
	{ -669.8347f, 100.0001f, 394.4214f },
	{ -693.2524f, 9.999994f, 418.6522f },
	{ -622.5344f, 100.0001f, 299.0049f },
	{ -644.1358f, 9.999994f, 325.7424f },
	{ -526.6566f, 99.99361f, 249.8256f },
	{ -540.4117f, 9.999994f, 283.7133f },
	{ -518.8295f, 99.59936f, 137.2296f },
	{ -518.2534f, 9.838856f, 175.2228f },
	{ -525.2569f, 97.50972f, -2.537492f },
	{ -536.3002f, 7.409497f, 32.86682f },
	{ -452.5926f, 9.842263f, -72.87394f },
	{ -422.2733f, 9.996044f, -199.9843f },
	{ -414.7893f, -10.00023f, -320.7058f },
	{ -527.0653f, 91.52448f, -476.0941f },
	{ -525.5021f, -23.33807f, -446.1578f },
	{ -541.2337f, 90.10285f, -595.9608f },
	{ -550.1678f, -25.96746f, -568.117f },
	{ -503.313f, 92.94067f, -707.7878f },
	{ -517.0756f, -22.73435f, -683.2103f },
	{ -421.2724f, 182.2451f, -821.9101f },
	{ -431.3301f, 93.35718f, -786.05f },
	{ -439.2704f, -20.97661f, -757.7395f },
	{ -424.3213f, 176.317f, -932.0809f },
	{ -438.1296f, 86.56051f, -898.2271f },
	{ -1055.266f, -19.09893f, 321.8f },
	{ -378.0532f, 180.0052f, -1028.493f },
	{ -847.0981f, 55.00003f, 319.9328f },
	{ -269.4922f, 294.8207f, -1029.206f },
	{ -288.3112f, 184.5919f, -1024.449f },
	{ -184.3936f, 293.6825f, -1093.204f },
	{ -203.4526f, 183.9512f, -1096.107f },
	{ -108.5437f, 294.5746f, -1027.772f },
	{ -124.2838f, 184.3733f, -1041.515f },
	{ -16.26109f, 294.9995f, -951.7761f },
	{ -35.00244f, 184.9999f, -956.9908f },
	{ -463.8396f, -10.33748f, -374.7329f },
	{ 88.4955f, 194.2634f, -966.0007f },
	{ 87.21415f, 299.2365f, -969.6661f },
	{ -616.7593f, 146.5621f, 291.8567f },
	{ -524.3981f, 128.5878f, 244.2613f },
	{ -450.3296f, 54.8625f, -91.66215f },
	{ -432.7852f, 54.95823f, -213.7081f },
	{ -428.72f, 44.96236f, -328.3069f },
	{ -474.1804f, 44.38341f, -388.6582f },
	{ -494.5967f, 138.0623f, -723.3535f },
	{ -419.9608f, 231.4487f, -942.7715f },
	{ -368.8501f, 235.7939f, -1031.908f },
	{ -1150.637f, 54.9962f, 156.6571f },
	{ -1109.028f, 54.99913f, 253.4901f },
	{ -1034.457f, 55.00003f, 327.3262f },
	{ -938.7083f, 55.00002f, 345.922f },
	{ -453.5393f, -20.63234f, -65.0147f },
	{ -418.3144f, -17.43225f, -194.816f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A08E8[] = {
	{ -0.9263639f, 0.113571f, 0.359097f },
	{ -0.8597119f, 0.114132f, 0.497865f },
	{ -0.523592f, 0.067936f, 0.849256f },
	{ -0.031889f, -0.035724f, 0.998853f },
	{ -0.11357f, -0.017433f, 0.993377f },
	{ -0.450019f, 0.195945f, 0.8712569f },
	{ -0.5528319f, 0.191913f, 0.810892f },
	{ 0.569715f, 0.028064f, 0.821363f },
	{ 0.235975f, 0.102867f, 0.966299f },
	{ 0.6775039f, 0.068069f, 0.732362f },
	{ 0.7278529f, 0.040556f, 0.684533f },
	{ 0.8167509f, 0.071966f, 0.572485f },
	{ 0.68744f, 0.162757f, 0.707769f },
	{ 0.997871f, -0.065123f, 0.003666f },
	{ 0.996216f, -0.036097f, 0.07906099f },
	{ 0.945681f, 0.053956f, 0.320587f },
	{ 0.9776289f, 0.009528f, 0.210119f },
	{ 0.885348f, 0.146499f, 0.441244f },
	{ 0.976899f, 0.167276f, 0.132995f },
	{ 0.937728f, 0.184821f, -0.294121f },
	{ 0.930547f, -0.09326699f, -0.354096f },
	{ 0.88601f, -0.100446f, -0.452656f },
	{ 0.993426f, -0.055738f, 0.099994f },
	{ 0.998105f, -0.06142f, 0.003839f },
	{ 0.860536f, 0.030195f, 0.508494f },
	{ 0.877324f, 0.024731f, 0.479261f },
	{ 0.9854119f, -0.06400599f, 0.157688f },
	{ 0.9298919f, 0.017259f, 0.367428f },
	{ 0.833769f, 0.054683f, 0.549399f },
	{ 0.974154f, -0.058835f, 0.21809f },
	{ 0.993637f, -0.104695f, 0.041535f },
	{ -0.553275f, 0.067935f, 0.830224f },
	{ 0.647214f, -0.001548f, 0.762307f },
	{ -0.378533f, 0.07044499f, 0.9229029f },
	{ 0.438287f, -0.053398f, 0.897248f },
	{ 0.276826f, -0.015256f, 0.960799f },
	{ -0.017299f, -0.041186f, 0.999002f },
	{ 0.112518f, -0.055305f, 0.9921089f },
	{ -0.636525f, 0.037523f, 0.7703429f },
	{ -0.621832f, 0.035356f, 0.782352f },
	{ -0.287613f, 0.013826f, 0.957647f },
	{ -0.388878f, 0.02159f, 0.9210359f },
	{ 0.771814f, -0.026673f, -0.635289f },
	{ 0.073739f, -0.013176f, 0.997191f },
	{ 0.073739f, -0.013176f, 0.997191f },
	{ 0.6576549f, 0.04779f, 0.751802f },
	{ 0.826668f, 0.023301f, 0.562207f },
	{ 0.895293f, 0.174464f, 0.409893f },
	{ 0.970956f, 0.212535f, 0.10988f },
	{ 0.919161f, 0.14995f, -0.364223f },
	{ 0.776462f, -0.072747f, -0.625951f },
	{ 0.804332f, 0.09493399f, 0.586547f },
	{ 0.958557f, -0.066961f, 0.276921f },
	{ 0.372552f, 0.016927f, 0.927857f },
	{ -0.9263639f, 0.113571f, 0.359097f },
	{ -0.828822f, 0.112844f, 0.548016f },
	{ -0.461195f, 0.070997f, 0.884454f },
	{ 0.101277f, -0.078172f, 0.9917819f },
	{ 0.882994f, 0.123098f, 0.452956f },
	{ 0.981378f, 0.123408f, 0.1472f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A0BB8 = { vertex_000A0618, normal_000A08E8, LengthOfArray<Sint32>(vertex_000A0618), meshlist_000A0600, matlist_000A03D4, LengthOfArray<Uint16>(meshlist_000A0600), LengthOfArray<Uint16>(matlist_000A03D4), { -535.723f, 136.6345f, -338.7276f }, 981.4647f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A0BE0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A0BB8, 0, 0, 131, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A0C14[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A0C50[] = {
	0x8000u | 8, 115, 100, 114, 99, 113, 98, 112, 97,
	11, 96, 97, 111, 112, 118, 119, 122, 123, 126, 127, 161,
	18, 95, 96, 110, 111, 117, 118, 121, 122, 125, 126, 129, 130, 132, 133, 135, 136, 139, 140,
	18, 94, 95, 109, 110, 116, 117, 120, 121, 124, 125, 128, 129, 131, 132, 134, 135, 138, 139,
	0x8000u | 15, 108, 92, 107, 91, 106, 90, 105, 89, 104, 88, 103, 87, 102, 86, 85,
	3, 150, 106, 149,
	6, 106, 107, 149, 108, 148, 147,
	0x8000u | 10, 146, 145, 75, 144, 57, 143, 39, 142, 37, 141,
	3, 146, 93, 75,
	0x8000u | 34, 58, 76, 59, 77, 60, 78, 61, 79, 62, 80, 63, 81, 64, 82, 65, 83, 66, 84, 67, 85, 68, 86, 69, 87, 70, 88, 71, 89, 72, 90, 73, 91, 74, 92,
	0x8000u | 8, 112, 119, 158, 123, 159, 127, 160, 161,
	5, 85, 102, 84, 166, 83,
	0x8000u | 33, 74, 56, 73, 55, 72, 54, 71, 53, 70, 52, 69, 51, 68, 50, 67, 49, 66, 48, 65, 47, 64, 46, 63, 45, 62, 44, 61, 43, 60, 42, 59, 41, 167,
	0x8000u | 5, 162, 137, 163, 165, 35,
	4, 108, 93, 147, 146,
	9, 165, 140, 137, 136, 162, 133, 161, 130, 126,
	0x8000u | 13, 108, 93, 92, 75, 74, 57, 56, 39, 38, 37, 36, 141, 40,
	0x8000u | 7, 153, 152, 104, 151, 105, 150, 106,
	17, 166, 101, 83, 100, 82, 99, 81, 98, 80, 97, 79, 96, 78, 95, 77, 94, 76,
	6, 115, 157, 114, 158, 113, 112,
	0x8000u | 9, 157, 156, 115, 155, 101, 154, 166, 164, 102,
	0x8000u | 5, 102, 164, 103, 153, 104,
	3, 100, 101, 115,
	3, 59, 58, 167
};

extern "C" __declspec(dllexport) Sint16 poly_000A0E7A[] = {
	0x8000u | 10, 28, 29, 0, 4, 1, 5, 2, 6, 3, 7,
	0x8000u | 10, 11, 7, 10, 6, 9, 5, 8, 4, 30, 29,
	0x8000u | 10, 30, 31, 8, 12, 9, 13, 10, 14, 11, 15,
	0x8000u | 10, 31, 32, 12, 16, 13, 17, 14, 18, 15, 19,
	0x8000u | 10, 23, 19, 22, 18, 21, 17, 20, 16, 33, 32,
	0x8000u | 10, 27, 23, 26, 22, 25, 21, 24, 20, 34, 33
};

extern "C" __declspec(dllexport) Sint16 poly_000A0EFE[] = {
	14, 40, 28, 141, 29, 142, 30, 143, 31, 144, 32, 145, 33, 146, 34
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A0F1C[] = {
	{ 5600, -3735 },
	{ 4954, -3735 },
	{ 5600, -3071 },
	{ 4954, -3071 },
	{ 5600, -2406 },
	{ 4954, -2406 },
	{ 5600, -1739 },
	{ 4954, -1739 },
	{ 4954, -1075 },
	{ 4954, -1739 },
	{ 5600, -1075 },
	{ 5600, -1739 },
	{ 6245, -1075 },
	{ 6245, -1739 },
	{ 6889, -1075 },
	{ 6889, -1739 },
	{ 7534, -1075 },
	{ 7534, -1739 },
	{ 8136, -1252 },
	{ 4954, -410 },
	{ 4954, -1075 },
	{ 5600, -410 },
	{ 5600, -1075 },
	{ 6245, -410 },
	{ 6245, -1075 },
	{ 6889, -410 },
	{ 6889, -1075 },
	{ 7534, -410 },
	{ 7534, -1075 },
	{ 8178, -410 },
	{ 8178, -944 },
	{ 8824, -410 },
	{ 8824, -1075 },
	{ 9470, -410 },
	{ 9470, -1075 },
	{ 10116, -410 },
	{ 10116, -1075 },
	{ 4954, 254 },
	{ 4954, -410 },
	{ 5600, 255 },
	{ 5600, -410 },
	{ 6245, 254 },
	{ 6245, -410 },
	{ 6889, 254 },
	{ 6889, -410 },
	{ 7534, 254 },
	{ 7534, -410 },
	{ 8178, 254 },
	{ 8178, -410 },
	{ 8824, 254 },
	{ 8824, -410 },
	{ 9470, 254 },
	{ 9470, -410 },
	{ 10116, 254 },
	{ 10116, -410 },
	{ 4954, -10389 },
	{ 4309, -10389 },
	{ 4954, -9723 },
	{ 4309, -9723 },
	{ 4954, -9057 },
	{ 4309, -9057 },
	{ 4954, -8393 },
	{ 4309, -8393 },
	{ 4954, -7727 },
	{ 4309, -7727 },
	{ 4954, -7062 },
	{ 4309, -7062 },
	{ 4954, -6397 },
	{ 4309, -6397 },
	{ 4309, -5732 },
	{ 4976, -8779 },
	{ 4809, -8929 },
	{ 5438, -9570 },
	{ 4809, -8929 },
	{ 4881, -9445 },
	{ 5438, -9570 },
	{ 5137, -9960 },
	{ 5635, -10197 },
	{ 5669, -10780 },
	{ 4328, -11940 },
	{ 3668, -12187 },
	{ 3665, -11053 },
	{ 3084, -11771 },
	{ 3019, -11053 },
	{ 2359, -11819 },
	{ 2374, -11053 },
	{ 1577, -11801 },
	{ 1729, -11053 },
	{ 888, -11425 },
	{ 4328, -11940 },
	{ 4309, -11053 },
	{ 3665, -11053 },
	{ 3665, 254 },
	{ 4309, 254 },
	{ 3665, -410 },
	{ 4309, -410 },
	{ 3665, -1075 },
	{ 4309, -1075 },
	{ 3665, -1739 },
	{ 4309, -1739 },
	{ 3665, -2406 },
	{ 4309, -2406 },
	{ 3665, -3071 },
	{ 4309, -3071 },
	{ 3665, -3735 },
	{ 4309, -3735 },
	{ 3665, -4400 },
	{ 4309, -4400 },
	{ 3665, -5067 },
	{ 4309, -5067 },
	{ 3665, -5732 },
	{ 4309, -5732 },
	{ 3665, -6397 },
	{ 4309, -6397 },
	{ 3665, -7062 },
	{ 4309, -7062 },
	{ 3665, -7727 },
	{ 4309, -7727 },
	{ 3665, -8393 },
	{ 4309, -8393 },
	{ 3665, -9057 },
	{ 4309, -9057 },
	{ 3665, -9723 },
	{ 4309, -9723 },
	{ 3665, -10389 },
	{ 4309, -10389 },
	{ 1311, -3012 },
	{ 1623, -2767 },
	{ 3024, -3242 },
	{ 2089, -2520 },
	{ 2921, -2470 },
	{ 2550, -2275 },
	{ 3204, -2238 },
	{ 3242, -1667 },
	{ 4309, -5732 },
	{ 4954, -6397 },
	{ 4309, -5067 },
	{ 4585, -5155 },
	{ 4309, -4400 },
	{ 3665, -10389 },
	{ 3019, -10389 },
	{ 3665, -9723 },
	{ 3019, -9723 },
	{ 3665, -9057 },
	{ 3019, -9057 },
	{ 3665, -8393 },
	{ 3019, -8393 },
	{ 3665, -7727 },
	{ 3019, -7727 },
	{ 3665, -7062 },
	{ 3019, -7062 },
	{ 3665, -6397 },
	{ 3019, -6397 },
	{ 3665, -5732 },
	{ 3019, -5732 },
	{ 3665, -5067 },
	{ 3019, -5067 },
	{ 3665, -4400 },
	{ 3019, -4400 },
	{ 3665, -3735 },
	{ 3019, -3735 },
	{ 3665, -3071 },
	{ 3019, -3071 },
	{ 3665, -2406 },
	{ 3019, -2406 },
	{ 3665, -1739 },
	{ 3019, -1739 },
	{ 3665, -1075 },
	{ 3019, -1075 },
	{ 3665, -410 },
	{ 3019, -410 },
	{ 3201, 78 },
	{ 3842, -1883 },
	{ 3655, -1537 },
	{ 4374, -1960 },
	{ 3772, -1290 },
	{ 4356, -1523 },
	{ 5137, -9960 },
	{ 4953, -10722 },
	{ 5669, -10780 },
	{ 5764, -11404 },
	{ 10116, -1739 },
	{ 10116, -1075 },
	{ 9470, -1739 },
	{ 9470, -1075 },
	{ 8718, -1817 },
	{ 8824, -1075 },
	{ 8136, -1252 },
	{ 8178, -944 },
	{ 7534, -1075 },
	{ 4954, -10389 },
	{ 4309, -11053 },
	{ 4309, -10389 },
	{ 3665, -11053 },
	{ 3665, -10389 },
	{ 3019, -11053 },
	{ 3019, -10389 },
	{ 2374, -11053 },
	{ 2374, -10389 },
	{ 1729, -11053 },
	{ 1729, -10389 },
	{ 888, -11425 },
	{ 418, -10082 },
	{ 5405, -6757 },
	{ 5476, -7420 },
	{ 4954, -7727 },
	{ 5718, -8165 },
	{ 4954, -8393 },
	{ 5168, -8967 },
	{ 4954, -9057 },
	{ 4585, -5155 },
	{ 4954, -4400 },
	{ 4309, -4400 },
	{ 4954, -3735 },
	{ 4309, -3735 },
	{ 4954, -3071 },
	{ 4309, -3071 },
	{ 4954, -2406 },
	{ 4309, -2406 },
	{ 4954, -1739 },
	{ 4309, -1739 },
	{ 4954, -1075 },
	{ 4309, -1075 },
	{ 4954, -410 },
	{ 4309, -410 },
	{ 4954, 254 },
	{ 4309, 254 },
	{ 2547, -4559 },
	{ 3171, -3851 },
	{ 2311, -4045 },
	{ 3024, -3242 },
	{ 1944, -3528 },
	{ 1311, -3012 },
	{ 3171, -3851 },
	{ 3312, -4520 },
	{ 2547, -4559 },
	{ 3328, -5253 },
	{ 2436, -5322 },
	{ 3683, -6011 },
	{ 3167, -6047 },
	{ 4500, -6602 },
	{ 3825, -6867 },
	{ 4954, -6397 },
	{ 5146, -6149 },
	{ 4954, -7062 },
	{ 5405, -6757 },
	{ 4954, -7727 },
	{ 1750, -4806 },
	{ 2436, -5322 },
	{ 2547, -4559 },
	{ 3665, -410 },
	{ 3665, 254 },
	{ 3201, 78 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A1310[] = {
	{ 1274, -1020 },
	{ 1043, -1019 },
	{ 1275, -912 },
	{ 1088, -948 },
	{ 1275, -701 },
	{ 1100, -729 },
	{ 1275, -516 },
	{ 1101, -537 },
	{ 1275, -290 },
	{ 1102, -304 },
	{ 915, -288 },
	{ 1102, -304 },
	{ 915, -514 },
	{ 1101, -537 },
	{ 913, -701 },
	{ 1100, -729 },
	{ 903, -915 },
	{ 1088, -948 },
	{ 861, -1020 },
	{ 1043, -1019 },
	{ 861, -1020 },
	{ 676, -1020 },
	{ 903, -915 },
	{ 709, -939 },
	{ 913, -701 },
	{ 721, -720 },
	{ 915, -514 },
	{ 726, -530 },
	{ 915, -288 },
	{ 732, -300 },
	{ 676, -1020 },
	{ 502, -1020 },
	{ 709, -939 },
	{ 528, -935 },
	{ 721, -720 },
	{ 536, -717 },
	{ 726, -530 },
	{ 541, -528 },
	{ 732, -300 },
	{ 548, -298 },
	{ 376, -290 },
	{ 548, -298 },
	{ 368, -517 },
	{ 541, -528 },
	{ 360, -704 },
	{ 536, -717 },
	{ 354, -919 },
	{ 528, -935 },
	{ 336, -1020 },
	{ 502, -1020 },
	{ 165, -294 },
	{ 376, -290 },
	{ 172, -524 },
	{ 368, -517 },
	{ 179, -713 },
	{ 360, -704 },
	{ 180, -928 },
	{ 354, -919 },
	{ 172, -1020 },
	{ 336, -1020 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A1400[] = {
	{ 6375, 0 },
	{ 6375, 255 },
	{ 5981, 0 },
	{ 6050, 255 },
	{ 5719, 0 },
	{ 5794, 255 },
	{ 5460, 0 },
	{ 5533, 255 },
	{ 5226, 0 },
	{ 5291, 255 },
	{ 4999, 0 },
	{ 5058, 255 },
	{ 4772, 0 },
	{ 4825, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A1438[] = {
	{ NJD_MESHSET_TRIMESH | 0, 24, poly_000A0C50, NULL, NULL, NULL, uv_000A0F1C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_000A0E7A, NULL, NULL, NULL, uv_000A1310, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000A0EFE, NULL, NULL, NULL, uv_000A1400, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A1480[] = {
	{ -1130.25f, 208.8188f, 178.9108f },
	{ -1141.332f, 99.99377f, 170.6813f },
	{ -1159.941f, 9.998655f, 140.633f },
	{ -1174.633f, -105.001f, 116.9106f },
	{ -1081.767f, 210, 278.7167f },
	{ -1096.983f, 99.99964f, 264.0786f },
	{ -1121.073f, 9.99861f, 240.9016f },
	{ -1140.092f, -105.0012f, 222.6037f },
	{ -1000.809f, 210, 335.2624f },
	{ -1019.589f, 100.0001f, 330.2746f },
	{ -1049.326f, 9.999994f, 322.3777f },
	{ -1072.802f, -105, 316.1428f },
	{ -904.315f, 210, 344.0657f },
	{ -923.5114f, 100.0001f, 344.5437f },
	{ -953.9053f, 9.999994f, 345.3003f },
	{ -977.9006f, -105, 345.8977f },
	{ -813.7982f, 210, 329.7207f },
	{ -832.3842f, 100.0001f, 323.6995f },
	{ -861.8121f, 9.999994f, 314.1663f },
	{ -885.0446f, -105, 306.6399f },
	{ -741.8212f, 210, 391.0876f },
	{ -760.8848f, 100.0001f, 388.2315f },
	{ -791.0687f, 9.999994f, 383.7092f },
	{ -814.8982f, -105, 380.1389f },
	{ -655.0445f, 210, 378.1177f },
	{ -669.8347f, 100.0001f, 393.4214f },
	{ -693.2524f, 9.999994f, 417.6522f },
	{ -711.7401f, -105, 436.782f },
	{ -1126.036f, 255.5479f, 147.6373f },
	{ -1073.128f, 243.7662f, 283.4644f },
	{ -989.8531f, 262.8891f, 338.1719f },
	{ -893.1172f, 248.9318f, 343.787f },
	{ -802.9564f, 251.1471f, 333.233f },
	{ -730.7008f, 260.8274f, 392.7537f },
	{ -646.4169f, 254.5896f, 369.1906f },
	{ 85.20869f, 424.364f, -1005.978f },
	{ -960.002f, 341.1118f, 145.5499f },
	{ -960.002f, 315.6614f, 237.5498f },
	{ -880.002f, 358.6259f, 145.5499f },
	{ -880.002f, 335.5037f, 237.5498f },
	{ -1122.639f, 300.8089f, 103.2933f },
	{ -800.0017f, 384.9211f, -1234.453f },
	{ -800.0017f, 350.4986f, -1142.453f },
	{ -800.0018f, 339.4256f, -1050.453f },
	{ -800.0017f, 359.1978f, -958.4525f },
	{ -800.0017f, 391.4351f, -866.4521f },
	{ -800.0017f, 401.9285f, -774.452f },
	{ -800.0017f, 376.6422f, -682.4517f },
	{ -800.0017f, 348.6496f, -590.4515f },
	{ -800.0017f, 332.9538f, -498.4514f },
	{ -800.0017f, 322.943f, -406.451f },
	{ -800.0017f, 319.7739f, -314.4509f },
	{ -800.0017f, 327.0223f, -222.4508f },
	{ -800.0017f, 338.0222f, -130.4506f },
	{ -800.0017f, 352.5888f, -38.4505f },
	{ -800.0017f, 370.1445f, 53.54963f },
	{ -800.0017f, 373.8348f, 145.5499f },
	{ -800.0018f, 353.484f, 237.5498f },
	{ -720.0015f, 451.3874f, -1326.453f },
	{ -720.0015f, 439.2697f, -1234.453f },
	{ -720.0015f, 402.5983f, -1142.453f },
	{ -720.0015f, 386.4045f, -1050.453f },
	{ -720.0015f, 403.0045f, -958.4524f },
	{ -720.0015f, 442.8585f, -866.4521f },
	{ -720.0015f, 457.8022f, -774.4519f },
	{ -720.0015f, 421.9654f, -682.4517f },
	{ -720.0015f, 381.5937f, -590.4514f },
	{ -720.0015f, 360.9449f, -498.4514f },
	{ -720.0015f, 350.2546f, -406.451f },
	{ -720.0015f, 345.1877f, -314.4509f },
	{ -720.0015f, 343.6598f, -222.4508f },
	{ -720.0015f, 341.8214f, -130.4506f },
	{ -720.0015f, 352.5716f, -38.4505f },
	{ -720.0015f, 374.84f, 53.54963f },
	{ -720.0015f, 381.6706f, 145.5499f },
	{ -720.0015f, 360.6009f, 237.5498f },
	{ -640.0015f, 507.9277f, -1326.453f },
	{ -640.0015f, 495.5045f, -1234.453f },
	{ -640.0015f, 465.7266f, -1142.453f },
	{ -640.0015f, 444.0194f, -1050.453f },
	{ -640.0015f, 446.8455f, -958.4524f },
	{ -640.0015f, 481.4687f, -866.4521f },
	{ -640.0015f, 494.5493f, -774.452f },
	{ -640.0015f, 449.8712f, -682.4517f },
	{ -640.0015f, 400.9656f, -590.4514f },
	{ -640.0015f, 378.7147f, -498.4514f },
	{ -640.0015f, 369.7738f, -406.451f },
	{ -640.0015f, 365.1635f, -314.4509f },
	{ -640.0015f, 357.0112f, -222.4508f },
	{ -640.0015f, 343.6443f, -130.4506f },
	{ -640.0015f, 349.9089f, -38.4505f },
	{ -640.0015f, 370.8476f, 53.54963f },
	{ -640.0015f, 373.5466f, 145.5499f },
	{ -640.0015f, 351.1675f, 237.5498f },
	{ -560.0012f, 533.5901f, -1326.453f },
	{ -560.0012f, 526.8333f, -1234.453f },
	{ -560.0012f, 506.3284f, -1142.453f },
	{ -560.0012f, 477.3759f, -1050.453f },
	{ -560.0012f, 459.3648f, -958.4525f },
	{ -560.0012f, 476.446f, -866.4521f },
	{ -560.0012f, 482.0854f, -774.452f },
	{ -560.0012f, 435.007f, -682.4517f },
	{ -560.0012f, 357.8186f, -406.451f },
	{ -560.0012f, 357.0789f, -314.4509f },
	{ -560.0012f, 350.3224f, -222.4508f },
	{ -560.0012f, 335.9083f, -130.4506f },
	{ -560.0012f, 338.5246f, -38.4505f },
	{ -560.0012f, 350.2799f, 53.54963f },
	{ -560.0012f, 344.4508f, 145.5499f },
	{ -480.0011f, 536.2626f, -1326.453f },
	{ -480.0011f, 538.9634f, -1234.453f },
	{ -480.0011f, 526.0973f, -1142.453f },
	{ -480.0011f, 497.7005f, -1050.453f },
	{ -480.0011f, 455.6657f, -958.4524f },
	{ -480.0011f, 439.1124f, -866.4521f },
	{ -480.0011f, 435.3348f, -774.452f },
	{ -400.001f, 533.2486f, -1326.453f },
	{ -400.001f, 545.605f, -1234.453f },
	{ -400.001f, 537.8054f, -1142.453f },
	{ -400.001f, 497.483f, -1050.453f },
	{ -320.0006f, 533.5452f, -1326.453f },
	{ -320.0007f, 550.0912f, -1234.453f },
	{ -320.0008f, 544.0913f, -1142.453f },
	{ -320.0006f, 482.3882f, -1050.453f },
	{ -240.0005f, 529.246f, -1326.453f },
	{ -240.0005f, 536.7046f, -1234.453f },
	{ -240.0005f, 529.7127f, -1142.453f },
	{ -240.0005f, 467.884f, -1050.453f },
	{ -160.0004f, 514.8622f, -1326.453f },
	{ -160.0005f, 501.6912f, -1234.453f },
	{ -160.0005f, 465.5979f, -1160.453f },
	{ -80.00024f, 516.7274f, -1326.453f },
	{ -80.00023f, 493.0304f, -1234.453f },
	{ -80.00024f, 472.9911f, -1142.453f },
	{ -0.000111f, 546.6694f, -1326.453f },
	{ -0.000111f, 537.5908f, -1234.453f },
	{ -0.000111f, 507.6441f, -1142.453f },
	{ -0.000111f, 450.8905f, -1050.452f },
	{ 80.00002f, 564.8208f, -1326.453f },
	{ 80.00001f, 576.053f, -1234.453f },
	{ 80.00002f, 539.5103f, -1142.453f },
	{ -1064.437f, 277.6247f, 289.0602f },
	{ -978.8976f, 315.7781f, 341.0812f },
	{ -881.9196f, 287.8635f, 343.5083f },
	{ -792.1146f, 292.2942f, 336.7453f },
	{ -719.5804f, 311.6546f, 394.4197f },
	{ -637.7894f, 299.1791f, 360.2634f },
	{ -615.3745f, 296.5053f, 261.4164f },
	{ -531.2341f, 319.1927f, 203.4531f },
	{ -543.0179f, 309.624f, 85.23891f },
	{ -533.5451f, 329.6444f, -50.98502f },
	{ -465.2729f, 308.1399f, -161.8708f },
	{ -495.4669f, 293.3393f, -264.9917f },
	{ -504.1764f, 336.2732f, -356.7109f },
	{ -571.9548f, 334.5216f, -565.9029f },
	{ -532.2309f, 360.287f, -679.4926f },
	{ -479.8252f, 360.5239f, -781.5201f },
	{ -425.3094f, 376.0722f, -870.9817f },
	{ -423.2257f, 369.084f, -978.4073f },
	{ -341.3731f, 390.2622f, -1071.291f },
	{ -250.7365f, 398.5136f, -1065.755f },
	{ -165.3581f, 415.3912f, -1117.818f },
	{ -93.38023f, 400.381f, -1039.737f },
	{ 2.403822f, 398.4033f, -973.6927f },
	{ -536.2225f, 294.934f, -440.6954f },
	{ 80.00002f, 469.4202f, -1050.453f },
	{ -605.9781f, 369.0182f, -578.1771f },
	{ -777.6f, 418, -1302 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A1C60[] = {
	{ -0.88713f, 0.180739f, 0.424657f },
	{ -0.9165829f, 0.092226f, 0.389062f },
	{ -0.939365f, 0.094845f, 0.329542f },
	{ -0.947306f, 0.08228599f, 0.309581f },
	{ -0.776719f, 0.118875f, 0.618527f },
	{ -0.818944f, 0.082284f, 0.567943f },
	{ -0.873716f, 0.09980299f, 0.476089f },
	{ -0.8976769f, 0.085465f, 0.432287f },
	{ -0.380654f, 0.02419f, 0.924401f },
	{ -0.451237f, 0.04611f, 0.891212f },
	{ -0.558135f, 0.074049f, 0.826439f },
	{ -0.615301f, 0.069271f, 0.785243f },
	{ 0.034815f, -0.035692f, 0.998756f },
	{ 0.059565f, -0.051721f, 0.996884f },
	{ 0.039167f, -0.042442f, 0.998331f },
	{ 0.002148f, -0.02716f, 0.999629f },
	{ -0.251211f, 0.009791f, 0.967883f },
	{ -0.265483f, 0.026136f, 0.963761f },
	{ -0.195905f, -0.000972f, 0.980622f },
	{ -0.128197f, -0.010579f, 0.9916919f },
	{ -0.339805f, 0.084033f, 0.936734f },
	{ -0.451624f, 0.13815f, 0.881448f },
	{ -0.572464f, 0.160051f, 0.804157f },
	{ -0.618423f, 0.129757f, 0.775059f },
	{ 0.057413f, 0.053979f, 0.9968899f },
	{ -0.175614f, 0.124815f, 0.976515f },
	{ -0.394351f, 0.174278f, 0.902283f },
	{ -0.47613f, 0.146263f, 0.867126f },
	{ -0.891655f, 0.288857f, 0.348586f },
	{ -0.759849f, 0.177337f, 0.6254449f },
	{ -0.315065f, 0.016125f, 0.9489329f },
	{ 0.033242f, -0.044581f, 0.998453f },
	{ -0.290426f, 0.021914f, 0.956646f },
	{ -0.217141f, 0.073511f, 0.973368f },
	{ 0.280373f, 0.01501f, 0.959774f },
	{ -0.176371f, 0.761472f, 0.623742f },
	{ -0.235951f, 0.943801f, 0.231447f },
	{ -0.123039f, 0.973479f, 0.192875f },
	{ -0.223166f, 0.945762f, 0.236077f },
	{ -0.054725f, 0.950195f, 0.306814f },
	{ -0.577409f, 0.762752f, 0.291219f },
	{ -0.522064f, 0.819961f, 0.23476f },
	{ -0.512346f, 0.8325559f, 0.210601f },
	{ -0.493537f, 0.869496f, -0.01996f },
	{ -0.493284f, 0.8370489f, -0.236686f },
	{ -0.542137f, 0.81059f, -0.22143f },
	{ -0.5308509f, 0.842734f, 0.08942799f },
	{ -0.412738f, 0.8586299f, 0.303975f },
	{ -0.34242f, 0.905442f, 0.250848f },
	{ -0.323165f, 0.9353909f, 0.143557f },
	{ -0.311913f, 0.947238f, 0.07382099f },
	{ -0.253716f, 0.967258f, 0.006268f },
	{ -0.126847f, 0.9911129f, -0.040051f },
	{ -0.02371f, 0.995391f, -0.092924f },
	{ -0.028562f, 0.984341f, -0.173948f },
	{ -0.077462f, 0.9878449f, -0.134763f },
	{ -0.13295f, 0.982606f, 0.129654f },
	{ -0.100039f, 0.9392599f, 0.328304f },
	{ -0.550661f, 0.827478f, 0.109783f },
	{ -0.556624f, 0.806286f, 0.200181f },
	{ -0.549203f, 0.806108f, 0.220376f },
	{ -0.512275f, 0.8588049f, 0.005421f },
	{ -0.474759f, 0.849766f, -0.229133f },
	{ -0.478967f, 0.847738f, -0.227883f },
	{ -0.448288f, 0.887395f, 0.107553f },
	{ -0.341217f, 0.870421f, 0.354877f },
	{ -0.281082f, 0.914537f, 0.290887f },
	{ -0.27463f, 0.949159f, 0.153868f },
	{ -0.275992f, 0.958164f, 0.07583f },
	{ -0.228683f, 0.9730729f, 0.028853f },
	{ -0.110011f, 0.993837f, 0.013612f },
	{ -0.009234999f, 0.9987479f, -0.049173f },
	{ 0.0062f, 0.985854f, -0.16749f },
	{ -0.001278f, 0.9905109f, -0.137428f },
	{ 0.007851f, 0.996323f, 0.08531199f },
	{ 0.036943f, 0.9507549f, 0.307734f },
	{ -0.466645f, 0.878422f, 0.103044f },
	{ -0.495268f, 0.850215f, 0.178447f },
	{ -0.5001529f, 0.8335299f, 0.234681f },
	{ -0.409651f, 0.9066139f, 0.101179f },
	{ -0.261581f, 0.9507599f, -0.166226f },
	{ -0.154985f, 0.963796f, -0.21697f },
	{ -0.102216f, 0.983323f, 0.150424f },
	{ -0.018218f, 0.899124f, 0.437314f },
	{ 0.035646f, 0.930666f, 0.364128f },
	{ -0.007245f, 0.982507f, 0.186083f },
	{ -0.058558f, 0.9957449f, 0.071156f },
	{ -0.056411f, 0.996967f, 0.053609f },
	{ -0.002617f, 0.99583f, 0.091192f },
	{ 0.062099f, 0.9978009f, 0.023157f },
	{ 0.118324f, 0.983695f, -0.13544f },
	{ 0.185736f, 0.976517f, -0.109166f },
	{ 0.223681f, 0.969047f, 0.104475f },
	{ 0.302044f, 0.876807f, 0.374137f },
	{ -0.25733f, 0.964502f, 0.059309f },
	{ -0.298713f, 0.945108f, 0.132445f },
	{ -0.323396f, 0.91568f, 0.238633f },
	{ -0.184268f, 0.953744f, 0.237522f },
	{ 0.09662899f, 0.9948609f, 0.030249f },
	{ 0.291175f, 0.951549f, -0.098855f },
	{ 0.439901f, 0.873089f, 0.210243f },
	{ 0.586121f, 0.660401f, 0.469395f },
	{ 0.313646f, 0.947288f, -0.065363f },
	{ 0.336636f, 0.940573f, 0.04471f },
	{ 0.349694f, 0.927398f, 0.132844f },
	{ 0.252678f, 0.966508f, 0.044904f },
	{ 0.413009f, 0.906333f, -0.089357f },
	{ 0.535279f, 0.841033f, -0.07836f },
	{ 0.501777f, 0.853321f, 0.141645f },
	{ -0.116389f, 0.9927559f, -0.029805f },
	{ -0.153767f, 0.9865119f, 0.056119f },
	{ -0.153278f, 0.960277f, 0.233182f },
	{ 0.047221f, 0.8730119f, 0.485407f },
	{ 0.458049f, 0.817094f, 0.35007f },
	{ 0.7423829f, 0.664109f, 0.088469f },
	{ 0.882867f, 0.349401f, 0.313791f },
	{ -0.068922f, 0.990589f, -0.118254f },
	{ -0.090448f, 0.995816f, -0.013008f },
	{ -0.013935f, 0.965695f, 0.259304f },
	{ 0.162866f, 0.724001f, 0.670297f },
	{ 0.05483f, 0.988331f, -0.142109f },
	{ 0.051858f, 0.99805f, -0.034731f },
	{ 0.104854f, 0.948993f, 0.297351f },
	{ 0.209729f, 0.472393f, 0.856071f },
	{ 0.285974f, 0.9569499f, -0.04966f },
	{ 0.353511f, 0.934528f, 0.041085f },
	{ 0.423084f, 0.82136f, 0.38258f },
	{ 0.359972f, 0.261844f, 0.895465f },
	{ 0.258037f, 0.959502f, 0.113012f },
	{ 0.274865f, 0.941488f, 0.195063f },
	{ 0.272472f, 0.817998f, 0.5065939f },
	{ -0.205532f, 0.96152f, 0.182308f },
	{ -0.235136f, 0.942977f, 0.235596f },
	{ -0.284288f, 0.853138f, 0.43742f },
	{ -0.458385f, 0.885961f, 0.07040399f },
	{ -0.416066f, 0.89134f, 0.180004f },
	{ -0.316735f, 0.855139f, 0.410385f },
	{ -0.26599f, 0.786813f, 0.556933f },
	{ -0.433275f, 0.9012f, -0.010549f },
	{ -0.399356f, 0.904449f, 0.149956f },
	{ -0.281907f, 0.858496f, 0.428384f },
	{ -0.6480449f, 0.549771f, 0.5270579f },
	{ -0.181706f, 0.677758f, 0.7124799f },
	{ 0.090826f, 0.484319f, 0.870164f },
	{ -0.239673f, 0.598592f, 0.764359f },
	{ 0.010343f, 0.553206f, 0.83298f },
	{ 0.429182f, 0.597948f, 0.676949f },
	{ 0.6278419f, 0.661055f, 0.410878f },
	{ 0.359734f, 0.800901f, 0.478695f },
	{ 0.730588f, 0.680107f, -0.060788f },
	{ 0.445336f, 0.894199f, -0.04565f },
	{ 0.448474f, 0.889618f, 0.08631799f },
	{ 0.6296999f, 0.763126f, 0.145319f },
	{ 0.402278f, 0.909963f, -0.100697f },
	{ 0.844513f, 0.5250469f, 0.105468f },
	{ 0.833246f, 0.351922f, 0.42644f },
	{ 0.927672f, -0.032959f, 0.371938f },
	{ 0.908843f, 0.386332f, 0.15733f },
	{ 0.65754f, 0.463544f, 0.593942f },
	{ 0.46241f, -0.295871f, 0.835845f },
	{ 0.221112f, -0.243347f, 0.9444f },
	{ 0.275085f, 0.582868f, 0.764587f },
	{ -0.304255f, 0.777362f, 0.55058f },
	{ -0.26269f, 0.76789f, 0.584242f },
	{ 0.665558f, 0.731178f, -0.149704f },
	{ -0.182371f, 0.787378f, 0.588877f },
	{ 0.558132f, 0.777818f, 0.288944f },
	{ -0.520109f, 0.846786f, 0.111532f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A2440 = { vertex_000A1480, normal_000A1C60, LengthOfArray<Sint32>(vertex_000A1480), meshlist_000A1438, matlist_000A0C14, LengthOfArray<Uint16>(meshlist_000A1438), LengthOfArray<Uint16>(matlist_000A0C14), { -544.7121f, 235.5259f, -444.8357f }, 1083.536f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A2468 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A2440, 0, 0, 131, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A249C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A24D8[] = {
	4, 67, 57, 58, 48,
	0x8000u | 17, 12, 123, 49, 122, 121, 118, 117, 114, 113, 102, 101, 89, 88, 75, 74, 144, 143,
	10, 12, 59, 49, 26, 121, 120, 117, 116, 113, 112,
	0x8000u | 19, 31, 37, 32, 38, 33, 39, 40, 46, 47, 55, 56, 65, 66, 79, 80, 92, 93, 104, 105,
	10, 59, 60, 26, 18, 120, 119, 116, 115, 112, 111,
	0x8000u | 6, 123, 124, 122, 125, 118, 114,
	9, 81, 67, 68, 58, 69, 141, 70, 142, 71,
	13, 81, 68, 82, 69, 83, 70, 84, 71, 85, 72, 86, 73, 87,
	0x8000u | 5, 31, 32, 145, 33, 27,
	3, 31, 25, 145,
	6, 72, 143, 73, 74, 87, 88,
	0x8000u | 16, 101, 88, 100, 87, 99, 86, 98, 85, 97, 84, 96, 83, 95, 82, 94, 81,
	14, 20, 21, 23, 24, 29, 30, 35, 36, 42, 43, 51, 52, 61, 62,
	4, 17, 16, 131, 142,
	14, 104, 103, 92, 91, 79, 78, 65, 64, 55, 54, 46, 45, 39, 38,
	13, 106, 105, 94, 93, 81, 80, 67, 66, 57, 56, 48, 47, 40,
	0x8000u | 16, 113, 101, 112, 100, 111, 99, 110, 98, 109, 97, 108, 96, 107, 95, 106, 94,
	10, 138, 40, 135, 33, 134, 27, 133, 145, 139, 25,
	3, 114, 102, 125,
	0x8000u | 7, 125, 126, 102, 127, 89, 128, 75,
	12, 91, 90, 78, 77, 64, 63, 54, 53, 45, 44, 38, 37,
	0x8000u | 8, 130, 131, 143, 17, 72, 16, 71, 142,
	0x8000u | 10, 131, 132, 142, 137, 141, 136, 58, 138, 48, 40,
	16, 77, 76, 63, 62, 53, 52, 44, 43, 37, 36, 31, 30, 25, 24, 139, 21,
	0x8000u | 7, 128, 129, 75, 140, 144, 130, 143,
	12, 51, 50, 42, 41, 35, 34, 29, 28, 23, 22, 20, 19
};

extern "C" __declspec(dllexport) Sint16 poly_000A271C[] = {
	0x8000u | 10, 14, 15, 7, 3, 6, 2, 5, 1, 4, 0,
	0x8000u | 10, 13, 14, 11, 7, 10, 6, 9, 5, 8, 4
};

extern "C" __declspec(dllexport) Sint16 poly_000A2748[] = {
	6, 124, 13, 123, 14, 12, 15
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A2758[] = {
	{ 5985, -5237 },
	{ 5018, -5237 },
	{ 5018, -6022 },
	{ 4051, -5237 },
	{ 12352, -11231 },
	{ 11650, -11969 },
	{ 11783, -10730 },
	{ 10817, -11515 },
	{ 10817, -10730 },
	{ 9850, -11515 },
	{ 9850, -10730 },
	{ 8883, -11515 },
	{ 8883, -10730 },
	{ 7917, -11515 },
	{ 7917, -10730 },
	{ 6950, -11515 },
	{ 6950, -10730 },
	{ 5985, -11515 },
	{ 5985, -10730 },
	{ 5165, -10757 },
	{ 5145, -9885 },
	{ 12352, -11231 },
	{ 12750, -9945 },
	{ 11783, -10730 },
	{ 11783, -9945 },
	{ 10817, -10730 },
	{ 10817, -9945 },
	{ 9850, -10730 },
	{ 9850, -9945 },
	{ 8883, -10730 },
	{ 8883, -9945 },
	{ 2119, -2099 },
	{ 3086, -2099 },
	{ 2119, -2883 },
	{ 3086, -2883 },
	{ 2119, -3667 },
	{ 3086, -3667 },
	{ 3086, -4453 },
	{ 4051, -3667 },
	{ 4051, -4453 },
	{ 5018, -3667 },
	{ 5018, -4453 },
	{ 5985, -3667 },
	{ 5985, -4453 },
	{ 6950, -3667 },
	{ 6950, -4453 },
	{ 7917, -3667 },
	{ 7917, -4453 },
	{ 8883, -3667 },
	{ 8883, -4453 },
	{ 12750, -9945 },
	{ 12750, -9161 },
	{ 11783, -9945 },
	{ 11783, -9161 },
	{ 10817, -9945 },
	{ 10817, -9161 },
	{ 9850, -9945 },
	{ 9850, -9161 },
	{ 8883, -9945 },
	{ 8883, -9161 },
	{ 11650, -11969 },
	{ 10608, -12483 },
	{ 10817, -11515 },
	{ 9433, -12419 },
	{ 9850, -11515 },
	{ 8883, -11515 },
	{ 6950, -5237 },
	{ 5985, -5237 },
	{ 5985, -6022 },
	{ 5018, -6022 },
	{ 5985, -6807 },
	{ 5223, -6605 },
	{ 5985, -7591 },
	{ 5285, -7596 },
	{ 5985, -8376 },
	{ 6950, -5237 },
	{ 5985, -6022 },
	{ 6950, -6022 },
	{ 5985, -6807 },
	{ 6950, -6807 },
	{ 5985, -7591 },
	{ 6950, -7591 },
	{ 5985, -8376 },
	{ 6950, -8376 },
	{ 5985, -9161 },
	{ 6950, -9161 },
	{ 5985, -9945 },
	{ 6950, -9945 },
	{ 2119, -2099 },
	{ 2119, -2883 },
	{ 1085, -2916 },
	{ 2119, -3667 },
	{ 1153, -3667 },
	{ 2119, -2099 },
	{ 1153, -2099 },
	{ 1085, -2916 },
	{ 5985, -9161 },
	{ 5145, -9885 },
	{ 5985, -9945 },
	{ 5985, -10730 },
	{ 6950, -9945 },
	{ 6950, -10730 },
	{ 7917, -10730 },
	{ 6950, -10730 },
	{ 7917, -9945 },
	{ 6950, -9945 },
	{ 7917, -9161 },
	{ 6950, -9161 },
	{ 7917, -8376 },
	{ 6950, -8376 },
	{ 7917, -7591 },
	{ 6950, -7591 },
	{ 7917, -6807 },
	{ 6950, -6807 },
	{ 7917, -6022 },
	{ 6950, -6022 },
	{ 7917, -5237 },
	{ 6950, -5237 },
	{ 187, -529 },
	{ 187, -1314 },
	{ 1153, -529 },
	{ 1153, -1314 },
	{ 2119, -529 },
	{ 2119, -1314 },
	{ 3086, -529 },
	{ 3086, -1314 },
	{ 4051, -529 },
	{ 4051, -1314 },
	{ 5018, -529 },
	{ 5018, -1314 },
	{ 5985, -529 },
	{ 5985, -1314 },
	{ 9194, -6534 },
	{ 8801, -6466 },
	{ 8973, -6027 },
	{ 7851, -6311 },
	{ 8883, -3667 },
	{ 8883, -2883 },
	{ 7917, -3667 },
	{ 7917, -2883 },
	{ 6950, -3667 },
	{ 6950, -2883 },
	{ 5985, -3667 },
	{ 5985, -2883 },
	{ 5018, -3667 },
	{ 5018, -2883 },
	{ 4051, -3667 },
	{ 4051, -2883 },
	{ 3086, -3667 },
	{ 3086, -2883 },
	{ 8883, -5237 },
	{ 8883, -4453 },
	{ 7917, -5237 },
	{ 7917, -4453 },
	{ 6950, -5237 },
	{ 6950, -4453 },
	{ 5985, -5237 },
	{ 5985, -4453 },
	{ 5018, -5237 },
	{ 5018, -4453 },
	{ 4051, -5237 },
	{ 4051, -4453 },
	{ 3086, -4453 },
	{ 8883, -10730 },
	{ 7917, -10730 },
	{ 8883, -9945 },
	{ 7917, -9945 },
	{ 8883, -9161 },
	{ 7917, -9161 },
	{ 8883, -8376 },
	{ 7917, -8376 },
	{ 8883, -7591 },
	{ 7917, -7591 },
	{ 8883, -6807 },
	{ 7917, -6807 },
	{ 8883, -6022 },
	{ 7917, -6022 },
	{ 8883, -5237 },
	{ 7917, -5237 },
	{ 2877, -5457 },
	{ 3086, -4453 },
	{ 1872, -4755 },
	{ 2119, -3667 },
	{ 801, -4820 },
	{ 1153, -3667 },
	{ 400, -3733 },
	{ 1085, -2916 },
	{ 187, -2099 },
	{ 1153, -2099 },
	{ 2285, -506 },
	{ 1514, -506 },
	{ 2285, 252 },
	{ 2285, 252 },
	{ 1514, 252 },
	{ 1514, -506 },
	{ 725, 252 },
	{ 725, -506 },
	{ 8, 252 },
	{ 8, -506 },
	{ 7917, -2883 },
	{ 7917, -2099 },
	{ 6950, -2883 },
	{ 6950, -2099 },
	{ 5985, -2883 },
	{ 5985, -2099 },
	{ 5018, -2883 },
	{ 5018, -2099 },
	{ 4051, -2883 },
	{ 4051, -2099 },
	{ 3086, -2883 },
	{ 3086, -2099 },
	{ 10080, -5551 },
	{ 8973, -6027 },
	{ 10140, -6388 },
	{ 9194, -6534 },
	{ 9416, -7261 },
	{ 8801, -6466 },
	{ 8631, -7112 },
	{ 7851, -6311 },
	{ 8973, -6027 },
	{ 7858, -5597 },
	{ 7851, -6311 },
	{ 6660, -5472 },
	{ 6860, -6425 },
	{ 6227, -5488 },
	{ 6277, -6988 },
	{ 5712, -5178 },
	{ 5492, -6728 },
	{ 4708, -5962 },
	{ 6950, -2099 },
	{ 6950, -1314 },
	{ 5985, -2099 },
	{ 5985, -1314 },
	{ 5018, -2099 },
	{ 5018, -1314 },
	{ 4051, -2099 },
	{ 4051, -1314 },
	{ 3086, -2099 },
	{ 3086, -1314 },
	{ 2119, -2099 },
	{ 2119, -1314 },
	{ 1153, -2099 },
	{ 1153, -1314 },
	{ 187, -2099 },
	{ 187, -1314 },
	{ 12565, -6475 },
	{ 11665, -6187 },
	{ 11770, -6922 },
	{ 11038, -5895 },
	{ 11012, -6522 },
	{ 10080, -5551 },
	{ 10140, -6388 },
	{ 5018, -529 },
	{ 5018, 254 },
	{ 4051, -529 },
	{ 4051, 255 },
	{ 3086, -529 },
	{ 3086, 254 },
	{ 2119, -529 },
	{ 2119, 255 },
	{ 1153, -529 },
	{ 1153, 254 },
	{ 187, -529 },
	{ 187, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A2B78[] = {
	{ 236, -1275 },
	{ 0, -1275 },
	{ 236, -1165 },
	{ 0, -1158 },
	{ 235, -971 },
	{ 0, -964 },
	{ 236, -730 },
	{ 0, -725 },
	{ 239, -460 },
	{ 0, -456 },
	{ 496, -1275 },
	{ 236, -1275 },
	{ 496, -1155 },
	{ 236, -1165 },
	{ 494, -963 },
	{ 235, -971 },
	{ 496, -725 },
	{ 236, -730 },
	{ 498, -456 },
	{ 239, -460 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A2BC8[] = {
	{ 5734, 0 },
	{ 5723, 255 },
	{ 6068, 0 },
	{ 6063, 255 },
	{ 6375, 0 },
	{ 6375, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A2BE0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 26, poly_000A24D8, NULL, NULL, NULL, uv_000A2758, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000A271C, NULL, NULL, NULL, uv_000A2B78, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000A2748, NULL, NULL, NULL, uv_000A2BC8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A2C28[] = {
	{ 1076.714f, -135.6939f, 29.77429f },
	{ 1096.106f, -21.11418f, 12.0985f },
	{ 1098.691f, 83.8186f, 9.741813f },
	{ 1092.227f, 168.9816f, 15.63366f },
	{ 1017.061f, -135.0041f, 112.5644f },
	{ 1039.402f, -20.01663f, 101.6041f },
	{ 1042.381f, 84.98086f, 100.143f },
	{ 1034.934f, 169.9868f, 103.7963f },
	{ 930.0106f, -134.9998f, 165.8686f },
	{ 953.9473f, -19.99978f, 168.0453f },
	{ 957.1387f, 85.00027f, 168.3356f },
	{ 949.1597f, 170.0003f, 167.61f },
	{ 1087.056f, 269.9691f, 20.34734f },
	{ 945.9682f, 221.9729f, 167.3197f },
	{ 1031.955f, 217.587f, 105.2576f },
	{ 1089.642f, 219.593f, 17.99047f },
	{ 521.4991f, 289.6976f, -294.4059f },
	{ 521.499f, 296.4526f, -248.4058f },
	{ 1040.002f, 290.1797f, -222.4508f },
	{ 80.00002f, 564.8208f, -1326.453f },
	{ 80.00002f, 576.053f, -1234.453f },
	{ 80.00002f, 539.5103f, -1142.453f },
	{ 160.0002f, 548.4012f, -1326.453f },
	{ 160.0002f, 562.0074f, -1234.453f },
	{ 160.0002f, 523.0342f, -1142.453f },
	{ 160.0002f, 466.1668f, -1050.453f },
	{ 1040.002f, 294.8723f, -130.4506f },
	{ 160.0002f, 473.8104f, -866.452f },
	{ 240.0004f, 518.2097f, -1326.453f },
	{ 240.0004f, 516.13f, -1234.453f },
	{ 240.0004f, 474.9111f, -1142.453f },
	{ 240.0004f, 442.827f, -1050.453f },
	{ 240.0004f, 454.169f, -958.4525f },
	{ 240.0004f, 465.6687f, -866.4521f },
	{ 320.0005f, 498.6513f, -1326.453f },
	{ 320.0005f, 481.6315f, -1234.453f },
	{ 320.0005f, 438.4131f, -1142.453f },
	{ 320.0005f, 421.1739f, -1050.453f },
	{ 320.0005f, 438.7076f, -958.4524f },
	{ 320.0005f, 456.6273f, -866.4521f },
	{ 320.0005f, 441.3112f, -774.452f },
	{ 400.0006f, 485.5513f, -1326.453f },
	{ 400.0005f, 468.7755f, -1234.453f },
	{ 400.0005f, 427.4368f, -1142.453f },
	{ 400.0006f, 413.8728f, -1050.453f },
	{ 400.0005f, 436.383f, -958.4524f },
	{ 400.0005f, 463.6882f, -866.4521f },
	{ 400.0006f, 463.577f, -774.4519f },
	{ 400.0005f, 437.3272f, -682.4517f },
	{ 1040.002f, 292.4448f, -38.4505f },
	{ 480.0007f, 459.7231f, -1326.453f },
	{ 480.0007f, 455.7622f, -1234.453f },
	{ 480.0007f, 421.811f, -1142.453f },
	{ 480.0007f, 404.9382f, -1050.453f },
	{ 480.0007f, 420.7399f, -958.4524f },
	{ 480.0007f, 453.8261f, -866.4521f },
	{ 480.0007f, 469.0568f, -774.452f },
	{ 480.0007f, 450.7175f, -682.4517f },
	{ 480.0007f, 383.1275f, -590.4514f },
	{ 1120.002f, 284.1201f, -130.4506f },
	{ 1120.002f, 289.4106f, -222.4508f },
	{ 560.0007f, 431.9204f, -1234.453f },
	{ 560.0007f, 409.5714f, -1142.453f },
	{ 560.0008f, 391.2271f, -1050.453f },
	{ 560.0007f, 398.2673f, -958.4524f },
	{ 560.0007f, 431.1355f, -866.4521f },
	{ 560.0007f, 453.6606f, -774.4519f },
	{ 560.0007f, 446.114f, -682.4517f },
	{ 560.0007f, 403.4868f, -590.4514f },
	{ 560.0007f, 342.315f, -498.4514f },
	{ 560.0007f, 308.2077f, -406.451f },
	{ 560.0008f, 315.4172f, -314.4509f },
	{ 560.0007f, 330.1113f, -222.4508f },
	{ 560.0007f, 348.0437f, -130.4506f },
	{ 560.0007f, 348.097f, -38.4505f },
	{ 560.0007f, 296.5823f, 53.54963f },
	{ 640.0015f, 389.7188f, -1142.453f },
	{ 640.0011f, 376.2029f, -1050.453f },
	{ 640.0015f, 379.2503f, -958.4524f },
	{ 640.0015f, 406.1371f, -866.4521f },
	{ 640.0014f, 427.1542f, -774.452f },
	{ 640.0015f, 426.7605f, -682.4517f },
	{ 640.0015f, 405.6154f, -590.4514f },
	{ 640.0015f, 368.0004f, -498.4514f },
	{ 640.0014f, 333.0467f, -406.451f },
	{ 640.0015f, 321.338f, -314.4509f },
	{ 640.0015f, 327.8857f, -222.4508f },
	{ 640.0015f, 361.6017f, -130.4506f },
	{ 640.0014f, 387.3906f, -38.45047f },
	{ 640.001f, 340.7878f, 53.54963f },
	{ 720.0015f, 349.075f, -1050.453f },
	{ 720.0015f, 357.0573f, -958.4524f },
	{ 720.0015f, 383.3776f, -866.4521f },
	{ 720.0015f, 403.3348f, -774.452f },
	{ 720.0015f, 404.7067f, -682.4517f },
	{ 720.0015f, 389.5029f, -590.4515f },
	{ 720.0015f, 357.7619f, -498.4514f },
	{ 720.0015f, 317.6458f, -406.451f },
	{ 720.0015f, 294.326f, -314.4509f },
	{ 720.0015f, 298.324f, -222.4508f },
	{ 720.0015f, 346.0689f, -130.4506f },
	{ 720.0015f, 399.517f, -38.4505f },
	{ 720.0015f, 371.8947f, 53.54963f },
	{ 800.0015f, 319.0838f, -958.4524f },
	{ 800.0015f, 358.8388f, -866.4521f },
	{ 800.0017f, 387.1118f, -774.452f },
	{ 800.0015f, 388.9227f, -682.4517f },
	{ 800.0017f, 372.5131f, -590.4514f },
	{ 800.0016f, 340.1346f, -498.4514f },
	{ 800.0016f, 296.7021f, -406.451f },
	{ 800.0017f, 271.1106f, -314.4509f },
	{ 800.0015f, 278.3302f, -222.4508f },
	{ 800.0015f, 327.624f, -130.4506f },
	{ 800.0016f, 384.1897f, -38.4505f },
	{ 800.0015f, 368.7055f, 53.54963f },
	{ 880.0017f, 277.5829f, -222.4508f },
	{ 880.0017f, 315.2109f, -130.4506f },
	{ 880.0017f, 350.1437f, -38.4505f },
	{ 880.0017f, 333.0571f, 53.54963f },
	{ 960.0018f, 284.7953f, -222.4508f },
	{ 960.0018f, 304.9962f, -130.4506f },
	{ 960.0018f, 315.3692f, -38.4505f },
	{ 960.0018f, 293.1908f, 53.54963f },
	{ 1028.976f, 265.187f, 106.719f },
	{ 942.7766f, 273.9456f, 167.0295f },
	{ 845.4769f, 266.4007f, 159.4551f },
	{ 764.5245f, 267.6463f, 93.21651f },
	{ 680.931f, 257.6239f, 137.5456f },
	{ 573.9906f, 238.1926f, 146.7644f },
	{ 546.5253f, 237.1533f, 41.18835f },
	{ 464.2335f, 256.345f, -144.5575f },
	{ 518.1974f, 249.6196f, -274.3608f },
	{ 458.4937f, 266.4704f, -405.1158f },
	{ 97.77786f, 460.8319f, -858.6837f },
	{ 130.9601f, 441.3918f, -731.272f },
	{ 219.5619f, 437.0385f, -738.9462f },
	{ 371.5888f, 342.6883f, -596.2009f },
	{ 448.2825f, 264.3319f, -545.59f },
	{ 302.6793f, 380.8947f, -656.6151f },
	{ 80.00002f, 469.4202f, -1050.453f },
	{ 467.5476f, 287.0385f, -32.20645f },
	{ 496.9416f, 310.1868f, -522.0207f },
	{ 502.0473f, 293.7903f, -405.7834f },
	{ 490.5172f, 313.0988f, -137.5041f },
	{ 492.1742f, 324.6334f, -35.32847f },
	{ 154.489f, 466.3894f, -954.5681f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A3300[] = {
	{ 0.841117f, -0.086303f, 0.533923f },
	{ 0.845753f, -0.046785f, 0.531519f },
	{ 0.843837f, 0.011814f, 0.536469f },
	{ 0.838224f, 0.032499f, 0.5443569f },
	{ 0.722312f, -0.091358f, 0.685507f },
	{ 0.748881f, -0.051805f, 0.6606759f },
	{ 0.742817f, 0.013081f, 0.669367f },
	{ 0.727852f, 0.033596f, 0.684911f },
	{ 0.6111349f, -0.092951f, 0.78605f },
	{ 0.618022f, -0.055597f, 0.784193f },
	{ 0.6106409f, 0.013551f, 0.791792f },
	{ 0.596566f, 0.033691f, 0.801857f },
	{ 0.5548649f, 0.742535f, 0.37519f },
	{ 0.58521f, 0.026733f, 0.810441f },
	{ 0.721643f, 0.026745f, 0.691748f },
	{ 0.833804f, 0.025831f, 0.551455f },
	{ -0.8550889f, 0.51658f, 0.044364f },
	{ -0.77662f, 0.584507f, -0.234974f },
	{ 0.129116f, 0.989489f, -0.06512f },
	{ 0.171416f, 0.976343f, -0.131798f },
	{ 0.185291f, 0.975201f, 0.121036f },
	{ 0.116205f, 0.875991f, 0.46812f },
	{ 0.34361f, 0.934447f, -0.09349599f },
	{ 0.339606f, 0.930576f, 0.136734f },
	{ 0.248614f, 0.864336f, 0.437166f },
	{ 0.164191f, 0.954639f, 0.248404f },
	{ 0.213851f, 0.976729f, -0.016349f },
	{ -0.04024f, 0.997622f, 0.055959f },
	{ 0.44765f, 0.8939829f, 0.020084f },
	{ 0.450292f, 0.870637f, 0.19806f },
	{ 0.341665f, 0.8683929f, 0.359386f },
	{ 0.249954f, 0.961134f, 0.117234f },
	{ 0.176016f, 0.976985f, -0.120497f },
	{ 0.094637f, 0.994793f, 0.037822f },
	{ 0.28025f, 0.950122f, 0.136848f },
	{ 0.271861f, 0.921804f, 0.27635f },
	{ 0.210333f, 0.928443f, 0.306191f },
	{ 0.141307f, 0.9898919f, 0.01206f },
	{ 0.061044f, 0.979687f, -0.191014f },
	{ -0.033387f, 0.998687f, -0.038853f },
	{ -0.118646f, 0.9578429f, 0.261649f },
	{ 0.157891f, 0.976679f, 0.145497f },
	{ 0.127958f, 0.953465f, 0.273003f },
	{ 0.09728f, 0.95477f, 0.280982f },
	{ 0.106567f, 0.994063f, -0.021956f },
	{ 0.06193f, 0.968188f, -0.242437f },
	{ -0.07878999f, 0.987193f, -0.138715f },
	{ -0.190207f, 0.973835f, 0.124369f },
	{ -0.242619f, 0.850799f, 0.466131f },
	{ 0.272878f, 0.956163f, 0.106257f },
	{ 0.159571f, 0.980976f, 0.110556f },
	{ 0.122806f, 0.957144f, 0.262286f },
	{ 0.12207f, 0.95924f, 0.254869f },
	{ 0.186544f, 0.982416f, 0.007719f },
	{ 0.210017f, 0.9474739f, -0.241216f },
	{ 0.123418f, 0.9651009f, -0.230971f },
	{ 0.00269f, 0.999714f, 0.023782f },
	{ -0.114666f, 0.92224f, 0.369222f },
	{ -0.287496f, 0.679939f, 0.674558f },
	{ 0.219991f, 0.974107f, 0.05214f },
	{ 0.133205f, 0.991083f, 0.00322f },
	{ 0.144759f, 0.946166f, 0.289507f },
	{ 0.164483f, 0.962826f, 0.214269f },
	{ 0.213938f, 0.975771f, 0.045832f },
	{ 0.262914f, 0.943981f, -0.19944f },
	{ 0.260312f, 0.929589f, -0.260964f },
	{ 0.197295f, 0.978574f, -0.058889f },
	{ 0.014177f, 0.965508f, 0.259987f },
	{ -0.219632f, 0.862958f, 0.455044f },
	{ -0.332024f, 0.852282f, 0.404197f },
	{ -0.255289f, 0.954371f, 0.154931f },
	{ -0.274496f, 0.961163f, -0.028579f },
	{ -0.308356f, 0.929377f, -0.202915f },
	{ -0.356205f, 0.923762f, -0.140648f },
	{ -0.404588f, 0.892995f, 0.197149f },
	{ -0.53199f, 0.592684f, 0.604742f },
	{ 0.18196f, 0.968889f, 0.167766f },
	{ 0.228332f, 0.973415f, 0.018126f },
	{ 0.263146f, 0.949695f, -0.169806f },
	{ 0.283815f, 0.926118f, -0.248505f },
	{ 0.274008f, 0.956646f, -0.098734f },
	{ 0.168095f, 0.975511f, 0.141856f },
	{ 0.004334f, 0.941653f, 0.336558f },
	{ -0.066282f, 0.91838f, 0.390109f },
	{ 0.031414f, 0.969894f, 0.241492f },
	{ 0.158626f, 0.987294f, 0.009381f },
	{ 0.100477f, 0.970672f, -0.218403f },
	{ -0.150187f, 0.9409159f, -0.303513f },
	{ -0.355962f, 0.932526f, 0.060717f },
	{ -0.157565f, 0.809575f, 0.565474f },
	{ 0.266872f, 0.962005f, -0.057667f },
	{ 0.271467f, 0.937099f, -0.219433f },
	{ 0.252521f, 0.931275f, -0.262604f },
	{ 0.235026f, 0.964457f, -0.120769f },
	{ 0.215529f, 0.972863f, 0.08417699f },
	{ 0.180246f, 0.949123f, 0.258218f },
	{ 0.182673f, 0.9143879f, 0.361281f },
	{ 0.250382f, 0.919883f, 0.301867f },
	{ 0.295596f, 0.952f, 0.079492f },
	{ 0.247047f, 0.937015f, -0.246923f },
	{ 0.105009f, 0.8897499f, -0.444205f },
	{ -0.078121f, 0.993524f, -0.08250199f },
	{ -0.082904f, 0.797081f, 0.598155f },
	{ 0.277358f, 0.904231f, -0.324713f },
	{ 0.238083f, 0.9270239f, -0.289731f },
	{ 0.19434f, 0.971449f, -0.136085f },
	{ 0.200103f, 0.976856f, 0.075572f },
	{ 0.204936f, 0.9470029f, 0.24736f },
	{ 0.218757f, 0.905089f, 0.364635f },
	{ 0.252906f, 0.912523f, 0.321466f },
	{ 0.258923f, 0.961448f, 0.092612f },
	{ 0.197227f, 0.928606f, -0.314314f },
	{ 0.218683f, 0.8649999f, -0.451612f },
	{ 0.249297f, 0.95805f, -0.141389f },
	{ 0.069419f, 0.812491f, 0.578825f },
	{ 0.130319f, 0.923113f, -0.361774f },
	{ 0.254259f, 0.9043069f, -0.342901f },
	{ 0.409414f, 0.908857f, -0.079738f },
	{ 0.27929f, 0.9021159f, 0.328912f },
	{ 0.123093f, 0.968384f, -0.216981f },
	{ 0.22972f, 0.957317f, -0.175423f },
	{ 0.342122f, 0.939062f, 0.033408f },
	{ 0.202513f, 0.949691f, 0.238906f },
	{ 0.5957479f, 0.554947f, 0.580619f },
	{ 0.271328f, 0.7513739f, 0.601514f },
	{ -0.098311f, 0.759831f, 0.6426449f },
	{ -0.096072f, 0.401302f, 0.910893f },
	{ 0.118727f, 0.706962f, 0.697215f },
	{ -0.371657f, 0.696154f, 0.6142f },
	{ -0.817148f, 0.174934f, 0.549242f },
	{ -0.871511f, 0.416497f, -0.258841f },
	{ -0.95297f, 0.29852f, -0.052283f },
	{ -0.577049f, 0.7994f, 0.167252f },
	{ -0.156403f, 0.9841149f, 0.08399899f },
	{ 0.003293f, 0.973754f, 0.22758f },
	{ 0.078255f, 0.949547f, 0.303703f },
	{ -0.278348f, 0.541192f, 0.793495f },
	{ -0.518188f, 0.557892f, 0.648257f },
	{ -0.200238f, 0.807451f, 0.554913f },
	{ 0.026999f, 0.948096f, 0.316835f },
	{ -0.854378f, 0.374151f, 0.360623f },
	{ -0.479393f, 0.729582f, 0.487742f },
	{ -0.5066569f, 0.844206f, 0.17497f },
	{ -0.702567f, 0.6885599f, -0.179682f },
	{ -0.655122f, 0.68128f, 0.326608f },
	{ 0.07357f, 0.996671f, -0.035138f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A39D8 = { vertex_000A2C28, normal_000A3300, LengthOfArray<Sint32>(vertex_000A2C28), meshlist_000A2BE0, matlist_000A249C, LengthOfArray<Uint16>(meshlist_000A2BE0), LengthOfArray<Uint16>(matlist_000A249C), { 600.0009f, 220.1795f, -579.0588f }, 910.494f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A3A00 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A39D8, 0, 0, 131, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A3A34[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A3A48[] = {
	26, 16, 17, 10, 18, 11, 19, 5, 20, 4, 21, 33, 22, 32, 23, 3, 24, 31, 25, 2, 26, 1, 27, 0, 28, 36, 29,
	10, 35, 15, 9, 16, 14, 10, 30, 11, 34, 5,
	0x8000u | 5, 9, 35, 8, 6, 7,
	4, 13, 12, 7, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A3AAC[] = {
	{ 3436, 254 },
	{ 3934, 254 },
	{ 4333, 100 },
	{ 4333, 254 },
	{ 5030, 106 },
	{ 5030, 254 },
	{ 6025, 0 },
	{ 6025, 254 },
	{ 7121, 30 },
	{ 7121, 254 },
	{ 7718, 0 },
	{ 7718, 254 },
	{ 8516, 0 },
	{ 8415, 254 },
	{ 9511, 0 },
	{ 9511, 254 },
	{ 10309, 0 },
	{ 10309, 254 },
	{ 10906, 0 },
	{ 10906, 254 },
	{ 11503, 0 },
	{ 11503, 254 },
	{ 12102, 0 },
	{ 12102, 254 },
	{ 12699, 0 },
	{ 12699, 254 },
	{ 1743, 254 },
	{ 2340, 254 },
	{ 2340, 40 },
	{ 3436, 254 },
	{ 3436, 0 },
	{ 4333, 100 },
	{ 4333, 0 },
	{ 5030, 106 },
	{ 5030, 0 },
	{ 6025, 0 },
	{ 2340, 40 },
	{ 1743, 254 },
	{ 1642, 40 },
	{ 746, 254 },
	{ 646, 38 },
	{ 646, 38 },
	{ 746, 254 },
	{ 49, 0 },
	{ 49, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A3B60[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000A3A48, NULL, NULL, NULL, uv_000A3AAC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A3B78[] = {
	{ 859.2256f, 85.00003f, 165.8068f },
	{ 778.9188f, 84.7788f, 94.7272f },
	{ 695.141f, 84.99978f, 141.4608f },
	{ 552.5345f, 84.47271f, 56.91223f },
	{ 504.0889f, 72.1037f, -256.4333f },
	{ 441.1911f, 82.40325f, -387.2735f },
	{ 84.55968f, 194.9779f, -852.6462f },
	{ 82.89724f, 299.9746f, -856.0642f },
	{ 112.6152f, 195, -715.2424f },
	{ 202.0491f, 194.9972f, -721.6885f },
	{ 356.8429f, 72.15884f, -557.3241f },
	{ 431.8658f, 47.9944f, -522.1702f },
	{ 87.4955f, 194.2634f, -967.0007f },
	{ 86.21416f, 299.2365f, -970.6661f },
	{ 290.5713f, 195.0001f, -637.4467f },
	{ 211.8525f, 147.652f, -720.1515f },
	{ 301.217f, 142.9934f, -640.0889f },
	{ 339.1384f, 75.40764f, -592.9417f },
	{ 354.6092f, 12.20492f, -551.1824f },
	{ 433.4989f, 2.908786f, -521.2125f },
	{ 441.5344f, -2.855503f, -390.4918f },
	{ 504.0091f, 42.89066f, -257.5421f },
	{ 445.4135f, -10.77512f, -130.7818f },
	{ 454.3362f, -2.991049f, -17.79386f },
	{ 551.7339f, 30.4606f, 55.11597f },
	{ 580.1575f, 30.58465f, 160.9333f },
	{ 694.0597f, 49.04534f, 141.239f },
	{ 778.158f, 59.80288f, 94.70025f },
	{ 857.8177f, 36.61232f, 165.2587f },
	{ 955.0388f, 15.91246f, 169.1446f },
	{ 355.7758f, 132.9613f, -571.5355f },
	{ 580.8027f, 68.22676f, 162.1189f },
	{ 454.6689f, 55.56473f, -15.60311f },
	{ 444.9229f, 43.5967f, -128.8056f },
	{ 430.3894f, 87.41616f, -528.509f },
	{ 122.7782f, 150.0715f, -712.7556f },
	{ 955.7f, 37.66789f, 169.2048f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A3D34[] = {
	{ -0.421675f, 0.00498f, 0.906734f },
	{ -0.118751f, -0.002492f, 0.992921f },
	{ 0.345362f, -0.020737f, 0.93824f },
	{ -0.836938f, -0.007459f, 0.547247f },
	{ -0.999171f, -0.00524f, 0.040367f },
	{ -0.966745f, -0.018517f, 0.255072f },
	{ -0.9947309f, -0.02942f, 0.09820399f },
	{ -0.998439f, -0.012898f, 0.054341f },
	{ -0.758651f, -0.09647299f, 0.6443149f },
	{ -0.279422f, -0.027305f, 0.95978f },
	{ -0.645026f, 0.092975f, 0.758483f },
	{ -0.829012f, 0.0447f, 0.557441f },
	{ -0.999472f, -0.014985f, -0.028831f },
	{ -0.999472f, -0.014985f, -0.028831f },
	{ -0.736181f, -0.146804f, 0.660671f },
	{ -0.380251f, -0.043237f, 0.923872f },
	{ -0.821255f, -0.190009f, 0.537993f },
	{ -0.892796f, -0.126939f, 0.432207f },
	{ -0.545977f, 0.070562f, 0.834823f },
	{ -0.842209f, 0.024347f, 0.538601f },
	{ -0.971689f, -0.017581f, 0.235608f },
	{ -0.999947f, -0.004174f, 0.009434f },
	{ -0.988287f, 0.002735f, -0.152584f },
	{ -0.902615f, -0.013347f, 0.430241f },
	{ -0.806259f, -0.009846999f, 0.591481f },
	{ -0.588679f, -0.009529999f, 0.80831f },
	{ 0.319111f, -0.021122f, 0.947482f },
	{ -0.118545f, -0.002498f, 0.992946f },
	{ -0.335039f, 0.002024f, 0.942202f },
	{ -0.041519f, -0.00744f, 0.99911f },
	{ -0.55192f, 0.174811f, 0.815369f },
	{ -0.527551f, -0.011171f, 0.84945f },
	{ -0.845592f, -0.01594f, 0.533592f },
	{ -0.984446f, 0.003443f, -0.175653f },
	{ -0.749117f, 0.07772399f, 0.6578619f },
	{ -0.436077f, -0.058864f, 0.8979819f },
	{ -0.041519f, -0.00744f, 0.99911f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A3EF0 = { vertex_000A3B78, normal_000A3D34, LengthOfArray<Sint32>(vertex_000A3B78), meshlist_000A3B60, matlist_000A3A34, LengthOfArray<Uint16>(meshlist_000A3B60), LengthOfArray<Uint16>(matlist_000A3A34), { 519.2986f, 144.5998f, -400.7307f }, 717.8248f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A3F18 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A3EF0, 0, 0, 131, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A3F4C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A3F60[] = {
	0x8000u | 8, 9, 4, 8, 3, 7, 2, 6, 1,
	6, 11, 10, 6, 5, 1, 0,
	0x8000u | 8, 6, 11, 7, 12, 8, 13, 9, 14
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A3F94[] = {
	{ 4, 72 },
	{ 0, 254 },
	{ 382, 70 },
	{ 380, 255 },
	{ 641, 70 },
	{ 638, 255 },
	{ 991, 68 },
	{ 987, 255 },
	{ 987, 0 },
	{ 1275, 0 },
	{ 991, 68 },
	{ 1269, 70 },
	{ 987, 255 },
	{ 1275, 254 },
	{ 991, 68 },
	{ 987, 0 },
	{ 641, 70 },
	{ 638, 0 },
	{ 382, 70 },
	{ 380, 0 },
	{ 4, 72 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A3FEC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000A3F60, NULL, NULL, NULL, uv_000A3F94, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A4004[] = {
	{ 1635.231f, -151, 2909.671f },
	{ 1073.057f, -102, 2453.905f },
	{ 210.288f, -151, 2593.343f },
	{ -348.4423f, -179, 2256.49f },
	{ -1233.697f, -228, 2621.332f },
	{ 1608.454f, 214, 3056.368f },
	{ 1046.28f, 263, 2600.602f },
	{ 183.5111f, 214, 2740.04f },
	{ -375.2191f, 263, 2403.186f },
	{ -1260.474f, 214, 2768.029f },
	{ 1615.443f, 364, 3251.561f },
	{ 1053.269f, 413, 2795.795f },
	{ 190.5007f, 364, 2935.232f },
	{ -368.2295f, 413, 2598.379f },
	{ -1253.484f, 364, 2963.222f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A40B8[] = {
	{ 0.611098f, 0.333374f, -0.7179289f },
	{ 0.235216f, 0.377261f, -0.8957379f },
	{ 0.184581f, 0.348261f, -0.919045f },
	{ 0.060072f, 0.317705f, -0.9462849f },
	{ -0.379589f, 0.270627f, -0.884688f },
	{ 0.555162f, 0.5477819f, -0.625883f },
	{ 0.202063f, 0.5766439f, -0.791614f },
	{ 0.174751f, 0.607953f, -0.774503f },
	{ 0.051121f, 0.550007f, -0.833594f },
	{ -0.339512f, 0.571556f, -0.747031f },
	{ 0.496921f, 0.6794f, -0.539894f },
	{ 0.227297f, 0.7682109f, -0.598488f },
	{ 0.101329f, 0.787077f, -0.608475f },
	{ 0.080289f, 0.788964f, -0.609172f },
	{ -0.280799f, 0.7658449f, -0.578475f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A416C = { vertex_000A4004, normal_000A40B8, LengthOfArray<Sint32>(vertex_000A4004), meshlist_000A3FEC, matlist_000A3F4C, LengthOfArray<Uint16>(meshlist_000A3FEC), LengthOfArray<Uint16>(matlist_000A3F4C), { 187.3785f, 92.5f, 2754.025f }, 1515.139f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A4194 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A416C, -277, 25, 746, 0, 0x45AB, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A41C8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A41F0[] = {
	4, 4, 79, 5, 0,
	30, 75, 74, 70, 69, 65, 64, 60, 59, 55, 54, 50, 49, 45, 44, 40, 39, 35, 34, 30, 29, 25, 24, 20, 19, 15, 14, 10, 9, 5, 4
};

extern "C" __declspec(dllexport) Sint16 poly_000A4238[] = {
	14, 0, 1, 5, 6, 10, 11, 15, 16, 20, 21, 25, 26, 30, 31,
	14, 2, 3, 7, 8, 12, 13, 17, 18, 22, 23, 27, 28, 32, 33,
	18, 77, 76, 72, 71, 67, 66, 62, 61, 57, 56, 52, 51, 47, 46, 42, 41, 37, 36,
	14, 32, 31, 27, 26, 22, 21, 17, 16, 12, 11, 7, 6, 2, 1,
	0x8000u | 8, 38, 33, 37, 32, 36, 31, 35, 30,
	18, 35, 36, 40, 41, 45, 46, 50, 51, 55, 56, 60, 61, 65, 66, 70, 71, 75, 76,
	18, 37, 38, 42, 43, 47, 48, 52, 53, 57, 58, 62, 63, 67, 68, 72, 73, 77, 78
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A4318[] = {
	{ 3522, 0 },
	{ 3825, 0 },
	{ 3538, 255 },
	{ 3825, 255 },
	{ 0, 255 },
	{ 0 },
	{ 304, 255 },
	{ 292, 0 },
	{ 572, 255 },
	{ 577, 0 },
	{ 765, 255 },
	{ 791, 0 },
	{ 952, 255 },
	{ 971, 0 },
	{ 1233, 255 },
	{ 1210, 0 },
	{ 1469, 255 },
	{ 1449, 0 },
	{ 1756, 255 },
	{ 1747, 0 },
	{ 2053, 255 },
	{ 2044, 0 },
	{ 2360, 255 },
	{ 2374, 0 },
	{ 2719, 255 },
	{ 2734, 0 },
	{ 3003, 255 },
	{ 3079, 0 },
	{ 3279, 255 },
	{ 3296, 0 },
	{ 3538, 255 },
	{ 3522, 0 },
	{ 3825, 255 },
	{ 3825, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A43A0[] = {
	{ 2550, 0 },
	{ 2550, 78 },
	{ 2369, 0 },
	{ 2374, 75 },
	{ 2204, 0 },
	{ 2215, 72 },
	{ 2055, 0 },
	{ 2054, 72 },
	{ 1897, 0 },
	{ 1902, 76 },
	{ 1735, 0 },
	{ 1726, 70 },
	{ 1529, 0 },
	{ 1544, 77 },
	{ 2550, 193 },
	{ 2550, 255 },
	{ 2374, 191 },
	{ 2374, 255 },
	{ 2213, 190 },
	{ 2213, 255 },
	{ 2051, 190 },
	{ 2050, 255 },
	{ 1898, 190 },
	{ 1897, 255 },
	{ 1737, 190 },
	{ 1734, 255 },
	{ 1552, 193 },
	{ 1560, 255 },
	{ 173, 194 },
	{ 169, 79 },
	{ 336, 200 },
	{ 336, 89 },
	{ 488, 198 },
	{ 482, 78 },
	{ 633, 207 },
	{ 628, 87 },
	{ 757, 212 },
	{ 749, 89 },
	{ 933, 216 },
	{ 928, 91 },
	{ 1067, 214 },
	{ 1059, 90 },
	{ 1216, 213 },
	{ 1204, 92 },
	{ 1385, 198 },
	{ 1373, 75 },
	{ 1552, 193 },
	{ 1544, 77 },
	{ 1737, 190 },
	{ 1726, 70 },
	{ 1898, 190 },
	{ 1902, 76 },
	{ 2051, 190 },
	{ 2054, 72 },
	{ 2213, 190 },
	{ 2215, 72 },
	{ 2374, 191 },
	{ 2374, 75 },
	{ 2550, 193 },
	{ 2550, 78 },
	{ 1394, 255 },
	{ 1560, 255 },
	{ 1385, 198 },
	{ 1552, 193 },
	{ 1373, 75 },
	{ 1544, 77 },
	{ 1352, 0 },
	{ 1529, 0 },
	{ 1352, 0 },
	{ 1373, 75 },
	{ 1181, 0 },
	{ 1204, 92 },
	{ 1016, 0 },
	{ 1059, 90 },
	{ 880, 0 },
	{ 928, 91 },
	{ 720, 0 },
	{ 749, 89 },
	{ 613, 0 },
	{ 628, 87 },
	{ 502, 0 },
	{ 482, 78 },
	{ 348, 0 },
	{ 336, 89 },
	{ 173, 0 },
	{ 169, 79 },
	{ 1385, 198 },
	{ 1394, 255 },
	{ 1216, 213 },
	{ 1226, 255 },
	{ 1067, 214 },
	{ 1075, 255 },
	{ 933, 216 },
	{ 940, 255 },
	{ 757, 212 },
	{ 764, 255 },
	{ 633, 207 },
	{ 640, 255 },
	{ 488, 198 },
	{ 490, 255 },
	{ 336, 200 },
	{ 338, 255 },
	{ 173, 194 },
	{ 175, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A4540[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000A41F0, NULL, NULL, NULL, uv_000A4318, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 7, poly_000A4238, NULL, NULL, NULL, uv_000A43A0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A4570[] = {
	{ 1205.755f, -270.6945f, 1644.691f },
	{ 1268.063f, -365.2556f, 1542.309f },
	{ 1293.757f, -601.8279f, 1503.607f },
	{ 1294.569f, -675, 1462.526f },
	{ 914.4135f, -15.45952f, 1608.831f },
	{ 914.4135f, -214.4595f, 1608.831f },
	{ 910.4799f, -311.1593f, 1485.164f },
	{ 936.1746f, -549.8815f, 1446.461f },
	{ 936.9863f, -675, 1405.38f },
	{ 556.613f, 1.684814f, 1551.278f },
	{ 556.613f, -197.3152f, 1551.278f },
	{ 582.6127f, -300.6993f, 1442.693f },
	{ 604.2004f, -544.7166f, 1419.588f },
	{ 601.7697f, -675, 1390.82f },
	{ 291.2181f, 14.78076f, 1354.695f },
	{ 291.2181f, -184.2192f, 1354.695f },
	{ 311.9235f, -293.7594f, 1247.63f },
	{ 335.8669f, -541.4116f, 1217.345f },
	{ 335.296f, -675, 1182.91f },
	{ -57.86352f, 22.9895f, 1368.169f },
	{ -57.86357f, -176.0105f, 1368.169f },
	{ -3.833596f, -288.2437f, 1248.344f },
	{ 22.62725f, -538.8315f, 1199.797f },
	{ 24.04394f, -675, 1150.945f },
	{ -417.5876f, 22.60339f, 1336.813f },
	{ -417.5876f, -176.3966f, 1336.813f },
	{ -369.2453f, -287.464f, 1244.448f },
	{ -309.6287f, -537.1255f, 1234.866f },
	{ -310.563f, -675, 1216.775f },
	{ -690.2041f, -6.961914f, 972.9828f },
	{ -690.2041f, -205.9619f, 972.9828f },
	{ -579.4135f, -312.7553f, 933.4875f },
	{ -570.9937f, -549.6545f, 955.246f },
	{ -564.3464f, -675, 961.8975f },
	{ -597.7482f, -121.9723f, 598.428f },
	{ -597.7482f, -270.9723f, 598.428f },
	{ -505.3774f, -364.0554f, 592.949f },
	{ -512.8148f, -577.7382f, 614.6537f },
	{ -518.6862f, -675, 621.2626f },
	{ -645.4035f, -92.77322f, 233.1214f },
	{ -645.4036f, -341.7732f, 233.1214f },
	{ -522.4328f, -420.4581f, 248.247f },
	{ -537.2185f, -609.8221f, 268.7056f },
	{ -548.8916f, -675, 274.3308f },
	{ -505.7592f, -179.626f, -101.5788f },
	{ -505.7592f, -378.626f, -101.5788f },
	{ -415.7166f, -449.6339f, -31.85023f },
	{ -462.5382f, -627.9119f, -27.8104f },
	{ -499.5027f, -675, -35.14737f },
	{ -255.0393f, -174.74f, -268.2705f },
	{ -255.0393f, -373.74f, -268.2705f },
	{ -184.5266f, -449.6228f, -180.7528f },
	{ -226.1828f, -628.4362f, -172.5403f },
	{ -259.0693f, -675, -176.5831f },
	{ -166.4795f, -137.7681f, -611.9089f },
	{ -166.4794f, -336.768f, -611.9089f },
	{ -82.40672f, -422.0676f, -534.1534f },
	{ -120.0729f, -614.2658f, -523.2091f },
	{ -149.8093f, -675, -525.0952f },
	{ 9.046143f, -98.8977f, -766.5671f },
	{ 9.046247f, -297.8977f, -766.5671f },
	{ 109.6025f, -388.7534f, -695.5496f },
	{ 80.11868f, -596.0039f, -680.1104f },
	{ 56.84204f, -675, -678.4479f },
	{ 29.00513f, -108.7164f, -1008.148f },
	{ 29.00516f, -257.7164f, -1008.148f },
	{ 147.4777f, -343.6094f, -989.0679f },
	{ 162.1882f, -569.2512f, -968.2875f },
	{ 173.8019f, -675, -962.408f },
	{ -154.1902f, -4.675919f, -1293.899f },
	{ -154.1902f, -253.6759f, -1293.899f },
	{ 12.99583f, -330.3549f, -1263.451f },
	{ 10.81521f, -561.8962f, -1241.334f },
	{ 9.09375f, -675, -1234.399f },
	{ 21.73071f, 35.40037f, -1637.234f },
	{ 21.73072f, -213.5996f, -1637.234f },
	{ 157.158f, -300.8019f, -1575.498f },
	{ 130.0155f, -546.0984f, -1559.014f },
	{ 108.5873f, -675, -1556.527f },
	{ 1205.755f, -120.6945f, 1644.691f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A4930[] = {
	{ 0.194538f, 0.507481f, -0.839416f },
	{ 0.205512f, 0.439047f, -0.874644f },
	{ 0.16248f, 0.289438f, -0.943306f },
	{ 0.145988f, 0.37971f, -0.913514f },
	{ 0.143034f, 0, -0.989718f },
	{ 0.166091f, 0.405903f, -0.898697f },
	{ 0.152004f, 0.500291f, -0.85241f },
	{ 0.115705f, 0.237642f, -0.9644369f },
	{ 0.093393f, 0.321651f, -0.942241f },
	{ 0.394264f, 0, -0.918997f },
	{ 0.356836f, 0.379708f, -0.853516f },
	{ 0.341094f, 0.487811f, -0.803552f },
	{ 0.334312f, 0.187281f, -0.923667f },
	{ 0.354955f, 0.229379f, -0.906307f },
	{ 0.288229f, 0, -0.957562f },
	{ 0.288907f, 0.421985f, -0.859338f },
	{ 0.293072f, 0.439552f, -0.84906f },
	{ 0.365493f, 0.202077f, -0.908614f },
	{ 0.349042f, 0.249513f, -0.9032789f },
	{ 0.024634f, 0, -0.999696f },
	{ 0.01832f, 0.371166f, -0.928386f },
	{ -0.010061f, 0.443122f, -0.896405f },
	{ -0.033032f, 0.200048f, -0.979229f },
	{ -0.043154f, 0.266684f, -0.962817f },
	{ 0.477458f, 0, -0.878655f },
	{ 0.441221f, 0.356139f, -0.8237039f },
	{ 0.367017f, 0.49408f, -0.788152f },
	{ 0.287413f, 0.130578f, -0.948864f },
	{ 0.307623f, 0.155739f, -0.938677f },
	{ 0.966882f, 0, -0.255223f },
	{ 0.911714f, 0.348158f, -0.21809f },
	{ 0.8477589f, 0.470184f, -0.245423f },
	{ 0.9504859f, 0.045284f, -0.307451f },
	{ 0.941089f, 0.03271f, -0.336574f },
	{ 0.997728f, 0, 0.06737199f },
	{ 0.907538f, 0.41993f, -0.005827f },
	{ 0.920532f, 0.390619f, -0.006109f },
	{ 0.998597f, -0.036027f, 0.038799f },
	{ 0.998412f, -0.048685f, 0.02833f },
	{ 0.9930519f, 0, 0.117678f },
	{ 0.89633f, 0.43663f, 0.07711f },
	{ 0.9025559f, 0.428209f, 0.04505f },
	{ 0.981001f, -0.184326f, 0.060501f },
	{ 0.967849f, -0.25048f, 0.022966f },
	{ 0.783757f, 0, 0.6210679f },
	{ 0.696345f, 0.466343f, 0.545552f },
	{ 0.70356f, 0.46738f, 0.535312f },
	{ 0.767032f, -0.31351f, 0.559797f },
	{ 0.7806759f, -0.445386f, 0.438379f },
	{ 0.82313f, 0, 0.567853f },
	{ 0.689117f, 0.521497f, 0.503149f },
	{ 0.747953f, 0.347837f, 0.5653099f },
	{ 0.752109f, -0.31832f, 0.5770659f },
	{ 0.6442299f, -0.485724f, 0.590796f },
	{ 0.83858f, 0, 0.544778f },
	{ 0.741926f, 0.425733f, 0.517974f },
	{ 0.7172419f, 0.42586f, 0.55155f },
	{ 0.78554f, -0.254082f, 0.5642419f },
	{ 0.762725f, -0.401532f, 0.506974f },
	{ 0.901127f, 0, 0.433556f },
	{ 0.7261299f, 0.507665f, 0.463693f },
	{ 0.754001f, 0.401246f, 0.520081f },
	{ 0.809566f, -0.07825799f, 0.581789f },
	{ 0.762999f, -0.148169f, 0.629189f },
	{ 0.9640869f, 0, -0.265587f },
	{ 0.850641f, 0.503777f, -0.150395f },
	{ 0.889037f, 0.451601f, -0.07529099f },
	{ 0.995309f, -0.016806f, -0.095277f },
	{ 0.998092f, -0.020365f, -0.058288f },
	{ 0.999557f, 0, 0.029747f },
	{ 0.882688f, 0.469946f, -0.003459f },
	{ 0.8207459f, 0.571139f, -0.01329f },
	{ 0.993985f, -0.03483f, -0.103832f },
	{ 0.989712f, -0.037457f, -0.138082f },
	{ 0.889974f, 0, 0.456011f },
	{ 0.758988f, 0.493722f, 0.424471f },
	{ 0.759756f, 0.542179f, 0.358904f },
	{ 0.944392f, -0.052354f, 0.324628f },
	{ 0.952428f, -0.079655f, 0.294171f },
	{ 0.122163f, -0.00001f, -0.99251f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A4CF0 = { vertex_000A4570, normal_000A4930, LengthOfArray<Sint32>(vertex_000A4570), meshlist_000A4540, matlist_000A41C8, LengthOfArray<Uint16>(meshlist_000A4540), LengthOfArray<Uint16>(matlist_000A41C8), { 302.1824f, -319.7998f, 3.72821f }, 1917.704f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A4D18 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A4CF0, -2145, 455, 502, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A4D4C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 14, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A4D60[] = {
	0x8000u | 18, 0, 9, 1, 10, 2, 11, 3, 12, 4, 13, 5, 14, 6, 15, 7, 16, 8, 17
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A4D88[] = {
	{ 0, 255 },
	{ 0 },
	{ 201, 255 },
	{ 196, 0 },
	{ 268, 255 },
	{ 272, 0 },
	{ 406, 255 },
	{ 408, 0 },
	{ 693, 255 },
	{ 673, 0 },
	{ 795, 255 },
	{ 781, 0 },
	{ 949, 255 },
	{ 932, 0 },
	{ 1205, 255 },
	{ 1189, 0 },
	{ 1275, 255 },
	{ 1275, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A4DD0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000A4D60, NULL, NULL, NULL, uv_000A4D88, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A4DE8[] = {
	{ -400.001f, 533.2486f, -1195.453f },
	{ -160.0004f, 514.8622f, -1195.453f },
	{ -80.00024f, 516.7274f, -1195.453f },
	{ 80.00002f, 564.8208f, -1195.453f },
	{ 240.0004f, 442.827f, -919.4526f },
	{ 320.0005f, 438.7076f, -827.4524f },
	{ 480.0007f, 453.8261f, -735.4521f },
	{ 720.0015f, 404.7067f, -551.4517f },
	{ 800.0015f, 388.9227f, -551.4517f },
	{ -400.001f, 583.2486f, -1195.453f },
	{ -160.0004f, 614.8622f, -1195.453f },
	{ -80.00024f, 666.7274f, -1195.453f },
	{ 80.00002f, 714.8208f, -1195.453f },
	{ 240.0004f, 682.827f, -919.4526f },
	{ 320.0005f, 628.7076f, -827.4524f },
	{ 480.0007f, 603.8261f, -735.4521f },
	{ 720.0015f, 504.7066f, -551.4517f },
	{ 800.0015f, 411.9227f, -551.4517f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A4EC0[] = {
	{ -0.00001f, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.508829f, 0, 0.860868f },
	{ -0.805598f, 0, 0.5924619f },
	{ -0.637392f, 0, 0.77054f },
	{ -0.555954f, 0, 0.831213f },
	{ -0.28504f, 0, 0.9585159f },
	{ 0, 0, 1 },
	{ -0.00001f, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.533669f, 0, 0.845693f },
	{ -0.823608f, 0, 0.567159f },
	{ -0.656015f, 0, 0.754748f },
	{ -0.546242f, 0, 0.837627f },
	{ -0.461192f, 0, 0.887301f },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A4F98 = { vertex_000A4DE8, normal_000A4EC0, LengthOfArray<Sint32>(vertex_000A4DE8), meshlist_000A4DD0, matlist_000A4D4C, LengthOfArray<Uint16>(meshlist_000A4DD0), LengthOfArray<Uint16>(matlist_000A4D4C), { 200.0002f, 551.8717f, -873.4525f }, 680.9448f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A4FC0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A4F98, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A4FF4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 14, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A5008[] = {
	0x8000u | 16, 0, 8, 1, 9, 2, 10, 3, 11, 4, 12, 5, 13, 6, 14, 7, 15
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A502C[] = {
	{ 0, 255 },
	{ 0 },
	{ 186, 255 },
	{ 170, 0 },
	{ 262, 255 },
	{ 244, 0 },
	{ 492, 255 },
	{ 480, 0 },
	{ 669, 255 },
	{ 668, 0 },
	{ 799, 255 },
	{ 780, 0 },
	{ 884, 255 },
	{ 864, 0 },
	{ 1275, 255 },
	{ 1275, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A506C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000A5008, NULL, NULL, NULL, uv_000A502C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A5084[] = {
	{ 80.00002f, 564.8208f, -1195.453f },
	{ -80.00023f, 493.0304f, -1103.453f },
	{ -160.0005f, 501.6912f, -1103.453f },
	{ -400.001f, 545.605f, -1103.453f },
	{ -560.0012f, 506.3284f, -1011.453f },
	{ -640.0015f, 444.0194f, -919.4526f },
	{ -640.0015f, 446.8455f, -827.4524f },
	{ -800.0017f, 348.6496f, -459.4515f },
	{ 80.00002f, 614.8208f, -1195.453f },
	{ -80.00023f, 603.0304f, -1103.453f },
	{ -160.0005f, 641.6911f, -1103.453f },
	{ -400.001f, 705.605f, -1103.453f },
	{ -560.0012f, 656.3283f, -1011.453f },
	{ -640.0015f, 644.0193f, -919.4526f },
	{ -640.0015f, 596.8455f, -827.4524f },
	{ -800.0017f, 398.6496f, -459.4515f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A5144[] = {
	{ -0.498472f, 0, -0.866906f },
	{ -0.232395f, 0, -0.972621f },
	{ 0, 0, -1 },
	{ -0.260062f, 0, -0.965592f },
	{ -0.660981f, 0, -0.750402f },
	{ -0.956704f, 0, -0.291064f },
	{ -0.976371f, 0, -0.216101f },
	{ -0.91707f, 0, -0.398726f },
	{ -0.498471f, 0, -0.866906f },
	{ -0.23061f, 0, -0.9730459f },
	{ 0, 0, -1 },
	{ -0.257904f, 0, -0.966171f },
	{ -0.621011f, 0, -0.783802f },
	{ -0.906738f, 0, -0.421695f },
	{ -0.989694f, 0, -0.143201f },
	{ -0.91707f, 0, -0.398726f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A5204 = { vertex_000A5084, normal_000A5144, LengthOfArray<Sint32>(vertex_000A5084), meshlist_000A506C, matlist_000A4FF4, LengthOfArray<Uint16>(meshlist_000A506C), LengthOfArray<Uint16>(matlist_000A4FF4), { -360.0009f, 527.1273f, -827.4523f }, 573.6073f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A522C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A5204, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A5260[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A529C[] = {
	18, 10, 36, 0, 34, 11, 32, 12, 30, 15, 28, 4, 26, 16, 24, 2, 22, 14, 20
};

extern "C" __declspec(dllexport) Sint16 poly_000A52C2[] = {
	18, 36, 3, 34, 35, 32, 33, 30, 31, 28, 29, 26, 27, 24, 25, 22, 23, 20, 21
};

extern "C" __declspec(dllexport) Sint16 poly_000A52E8[] = {
	0x8000u | 5, 12, 9, 15, 5, 4,
	3, 14, 1, 2,
	8, 16, 2, 6, 1, 7, 8, 18, 19,
	13, 4, 16, 5, 6, 9, 13, 12, 17, 11, 18, 0, 19, 10,
	0x8000u | 5, 18, 7, 17, 6, 13
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A5338[] = {
	{ 8397, 0 },
	{ 8425, 254 },
	{ 7679, 0 },
	{ 7709, 254 },
	{ 6961, 0 },
	{ 6991, 254 },
	{ 6124, 0 },
	{ 6154, 254 },
	{ 5319, 0 },
	{ 5319, 254 },
	{ 4122, 0 },
	{ 4122, 254 },
	{ 3376, 0 },
	{ 3406, 254 },
	{ 2539, 0 },
	{ 2568, 254 },
	{ 1680, 0 },
	{ 1732, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A5380[] = {
	{ 1527, 0 },
	{ 1527, 95 },
	{ 1340, 0 },
	{ 1340, 95 },
	{ 1149, 0 },
	{ 1149, 95 },
	{ 959, 0 },
	{ 959, 95 },
	{ 767, 0 },
	{ 767, 95 },
	{ 576, 0 },
	{ 576, 95 },
	{ 384, 0 },
	{ 384, 95 },
	{ 194, 0 },
	{ 194, 95 },
	{ 2, 0 },
	{ 2, 95 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A53C8[] = {
	{ 5868, -2167 },
	{ 4552, -1442 },
	{ 4984, -390 },
	{ 3446, -1440 },
	{ 3192, -300 },
	{ 573, -3345 },
	{ 1714, -3782 },
	{ 1800, -2852 },
	{ 2511, -1493 },
	{ 1800, -2852 },
	{ 3487, -2576 },
	{ 1714, -3782 },
	{ 3487, -3749 },
	{ 3487, -4923 },
	{ 6264, -4920 },
	{ 6251, -6120 },
	{ 3192, -300 },
	{ 2511, -1493 },
	{ 3446, -1440 },
	{ 3487, -2576 },
	{ 4552, -1442 },
	{ 5368, -2551 },
	{ 5868, -2167 },
	{ 6162, -3693 },
	{ 6849, -3070 },
	{ 6264, -4920 },
	{ 7325, -4596 },
	{ 6251, -6120 },
	{ 7183, -6070 },
	{ 6264, -4920 },
	{ 3487, -3749 },
	{ 6162, -3693 },
	{ 3487, -2576 },
	{ 5368, -2551 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A5450[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000A529C, NULL, NULL, NULL, uv_000A5338, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000A52C2, NULL, NULL, NULL, uv_000A5380, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 5, poly_000A52E8, NULL, NULL, NULL, uv_000A53C8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A5498[] = {
	{ 551.5746f, 626.8411f, -1126.576f },
	{ -864.5461f, 680.0396f, -1290.432f },
	{ -843.0109f, 651.6954f, -1477.55f },
	{ 605.4673f, 455, -897.8318f },
	{ -491.4362f, 616.1842f, -1991.229f },
	{ -427.2932f, 643.9533f, -1762.064f },
	{ -417.1465f, 681.788f, -1533.323f },
	{ -417.0873f, 683.4917f, -1297.123f },
	{ -417.0873f, 691.8349f, -1060.873f },
	{ -148.495f, 641.8216f, -1761.602f },
	{ 515.9222f, 632.9047f, -829.9779f },
	{ 431.4502f, 621.1063f, -1433.972f },
	{ 184.0624f, 628.6158f, -1615.532f },
	{ 57.86372f, 654.4285f, -1538.117f },
	{ -1152.813f, 623.7692f, -1378.525f },
	{ -38.97477f, 615.9257f, -1973.005f },
	{ -663.6113f, 628.5579f, -1751.098f },
	{ 258.33f, 636.6337f, -1308.638f },
	{ 283.8466f, 650.0231f, -1061.481f },
	{ 280.8274f, 659.2007f, -820.2245f },
	{ -1274.602f, 533.6921f, -1429.953f },
	{ -1297.475f, 455, -1438.631f },
	{ -930.9834f, 536.8432f, -1529.053f },
	{ -944.0532f, 455, -1544.805f },
	{ -723.5836f, 533.9442f, -1805.606f },
	{ -734.7156f, 455, -1815.765f },
	{ -478.3693f, 532.4433f, -2091.474f },
	{ -482.512f, 455, -2103.191f },
	{ -25.28823f, 530.6633f, -2058.649f },
	{ -16.43071f, 455, -2067.759f },
	{ 201.0571f, 534.6114f, -1671.78f },
	{ 209.221f, 455, -1679.203f },
	{ 479.015f, 533.7373f, -1480.23f },
	{ 489.8154f, 455, -1486.564f },
	{ 616.0525f, 536.0692f, -1187.864f },
	{ 633.4486f, 455, -1195.392f },
	{ 584.9484f, 535.3362f, -889.7899f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A5654[] = {
	{ 0.536715f, 0.8415239f, -0.061431f },
	{ -0.094623f, 0.989846f, -0.106077f },
	{ -0.258312f, 0.908676f, -0.327999f },
	{ 0.971357f, 0.219366f, 0.09134199f },
	{ -0.253831f, 0.856005f, -0.450362f },
	{ -0.02002f, 0.991298f, -0.130102f },
	{ -0.010024f, 0.995327f, -0.09604099f },
	{ 0.009132f, 0.9991609f, -0.039935f },
	{ 0.03451f, 0.998759f, -0.035906f },
	{ 0.04439f, 0.990982f, -0.126427f },
	{ 0.419162f, 0.9076369f, 0.022306f },
	{ 0.40666f, 0.847288f, -0.341657f },
	{ 0.35691f, 0.867297f, -0.347003f },
	{ 0.086514f, 0.9938419f, -0.06923699f },
	{ -0.215997f, 0.717102f, -0.662654f },
	{ 0.33817f, 0.832602f, -0.438652f },
	{ -0.368726f, 0.86551f, -0.339019f },
	{ 0.075045f, 0.996045f, -0.047575f },
	{ 0.078852f, 0.996081f, -0.040066f },
	{ 0.087153f, 0.995816f, -0.027488f },
	{ -0.269084f, 0.344064f, -0.899563f },
	{ -0.281563f, 0.205671f, -0.937241f },
	{ -0.481771f, 0.468806f, -0.7403499f },
	{ -0.549391f, 0.219135f, -0.806319f },
	{ -0.7018239f, 0.420657f, -0.574883f },
	{ -0.757894f, 0.188052f, -0.6246859f },
	{ -0.307864f, 0.443503f, -0.841739f },
	{ -0.369428f, 0.167218f, -0.91409f },
	{ 0.466553f, 0.412102f, -0.7826239f },
	{ 0.533303f, 0.159753f, -0.830703f },
	{ 0.698532f, 0.349976f, -0.624155f },
	{ 0.725228f, 0.145857f, -0.672882f },
	{ 0.692889f, 0.386886f, -0.6084599f },
	{ 0.746998f, 0.171463f, -0.642335f },
	{ 0.89292f, 0.412416f, -0.180575f },
	{ 0.9589469f, 0.213451f, -0.186705f },
	{ 0.9061339f, 0.413045f, 0.09118199f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A5810 = { vertex_000A5498, normal_000A5654, LengthOfArray<Sint32>(vertex_000A5498), meshlist_000A5450, matlist_000A5260, LengthOfArray<Uint16>(meshlist_000A5450), LengthOfArray<Uint16>(matlist_000A5260), { -332.0132f, 573.4174f, -1461.708f }, 1127.253f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A5838 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A5810, -90, -675, 2737, 0, 0x167D, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A586C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A58A8[] = {
	0x8000u | 14, 2, 3, 7, 6, 9, 5, 10, 4, 11, 1, 12, 8, 13, 0
};

extern "C" __declspec(dllexport) Sint16 poly_000A58C6[] = {
	14, 0, 26, 8, 24, 1, 22, 4, 20, 5, 18, 6, 16, 3, 14
};

extern "C" __declspec(dllexport) Sint16 poly_000A58E4[] = {
	14, 26, 27, 24, 25, 22, 23, 20, 21, 18, 19, 16, 17, 14, 15
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A5904[] = {
	{ 0, -1545 },
	{ 380, -59 },
	{ 569, -2051 },
	{ 1524, -98 },
	{ 1233, -2051 },
	{ 2088, -863 },
	{ 1801, -2051 },
	{ 2714, -1251 },
	{ 2333, -2565 },
	{ 3018, -1910 },
	{ 2332, -3062 },
	{ 2929, -2545 },
	{ 2900, -3570 },
	{ 3516, -3222 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A593C[] = {
	{ 7013, 0 },
	{ 6947, 254 },
	{ 6297, 0 },
	{ 6319, 254 },
	{ 5759, 0 },
	{ 5781, 254 },
	{ 5222, 0 },
	{ 5244, 254 },
	{ 4593, 0 },
	{ 4616, 254 },
	{ 3988, 0 },
	{ 3988, 254 },
	{ 3091, 0 },
	{ 3091, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A5974[] = {
	{ 2854, 0 },
	{ 2864, 62 },
	{ 2572, 0 },
	{ 2581, 63 },
	{ 2359, 0 },
	{ 2368, 63 },
	{ 2131, 0 },
	{ 2136, 63 },
	{ 1867, 0 },
	{ 1872, 64 },
	{ 1545, 0 },
	{ 1604, 63 },
	{ 1308, 0 },
	{ 1317, 63 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A59AC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000A58A8, NULL, NULL, NULL, uv_000A5904, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000A58C6, NULL, NULL, NULL, uv_000A593C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000A58E4, NULL, NULL, NULL, uv_000A5974, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A59F4[] = {
	{ 750.1558f, 551.0097f, -486.4991f },
	{ 553.6617f, 580.8411f, -1099.453f },
	{ -639.9337f, 675.0515f, -1269.846f },
	{ -489.3492f, 539.1842f, -1964.106f },
	{ 433.5372f, 575.1063f, -1406.849f },
	{ 186.1495f, 582.6158f, -1588.41f },
	{ -36.88777f, 546.9257f, -1945.882f },
	{ -415.0003f, 645.8349f, -1033.75f },
	{ 518.0093f, 586.9047f, -802.8553f },
	{ -152.5002f, 633.3682f, -1033.75f },
	{ 72.49989f, 622.9656f, -1033.75f },
	{ 282.9144f, 613.2007f, -793.1019f },
	{ 282.5087f, 628.4317f, -561.1384f },
	{ 506.7094f, 603.3179f, -324.5502f },
	{ -476.2823f, 522.4433f, -2064.351f },
	{ -512.6165f, 455, -2110.941f },
	{ -23.20123f, 520.6633f, -2031.526f },
	{ 12.62197f, 455, -2074.308f },
	{ 203.1441f, 524.6114f, -1644.657f },
	{ 237.3923f, 455, -1682.907f },
	{ 481.1019f, 523.7373f, -1453.107f },
	{ 522.3121f, 455, -1493.476f },
	{ 618.1396f, 526.0692f, -1160.741f },
	{ 682.652f, 455, -1208.456f },
	{ 587.0355f, 525.3362f, -862.6673f },
	{ 647.2671f, 455, -908.4086f },
	{ 810.5955f, 519.1498f, -533.0168f },
	{ 872.0577f, 455, -576.4875f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A5B44[] = {
	{ 0.304933f, 0.939181f, -0.157968f },
	{ 0.418983f, 0.907052f, -0.041352f },
	{ 0.09536999f, 0.980606f, -0.17122f },
	{ 0.060678f, 0.978903f, -0.195108f },
	{ 0.31061f, 0.912681f, -0.265584f },
	{ 0.231807f, 0.934468f, -0.27025f },
	{ 0.251935f, 0.935885f, -0.246266f },
	{ 0.059851f, 0.989097f, -0.134559f },
	{ 0.281135f, 0.956256f, -0.080855f },
	{ 0.037051f, 0.995464f, -0.087625f },
	{ 0.068445f, 0.996146f, -0.054842f },
	{ 0.07828099f, 0.9962789f, -0.036053f },
	{ 0.149551f, 0.9879439f, -0.040001f },
	{ 0.182788f, 0.9822339f, -0.042481f },
	{ 0.044007f, 0.798382f, -0.6005419f },
	{ 0.057814f, 0.55635f, -0.828934f },
	{ 0.332994f, 0.772927f, -0.540092f },
	{ 0.429888f, 0.6269709f, -0.649695f },
	{ 0.530205f, 0.6992109f, -0.479569f },
	{ 0.579675f, 0.615835f, -0.533595f },
	{ 0.507973f, 0.722128f, -0.469568f },
	{ 0.540033f, 0.664996f, -0.515893f },
	{ 0.67457f, 0.728842f, -0.117234f },
	{ 0.702464f, 0.686613f, -0.187369f },
	{ 0.6259789f, 0.770788f, -0.118473f },
	{ 0.705924f, 0.700002f, -0.108025f },
	{ 0.4836f, 0.8149559f, -0.319341f },
	{ 0.551123f, 0.7462929f, -0.373243f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A5C94 = { vertex_000A59F4, normal_000A5B44, LengthOfArray<Sint32>(vertex_000A59F4), meshlist_000A59AC, matlist_000A586C, LengthOfArray<Uint16>(meshlist_000A59AC), LengthOfArray<Uint16>(matlist_000A586C), { 116.0621f, 565.0258f, -1217.745f }, 1165.912f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A5CBC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A5C94, 1772, -675, 3327, 0, 0x16FA, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A5CF0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A5D18[] = {
	0x8000u | 15, 22, 27, 12, 26, 11, 25, 0, 24, 8, 21, 1, 20, 7, 16, 13,
	0x8000u | 13, 51, 14, 50, 6, 2, 17, 4, 5, 9, 3, 13, 15, 7
};

extern "C" __declspec(dllexport) Sint16 poly_000A5D54[] = {
	26, 29, 28, 31, 30, 33, 32, 35, 34, 37, 36, 39, 38, 41, 40, 43, 42, 45, 44, 47, 46, 49, 48, 19, 18, 10, 23,
	26, 22, 23, 12, 18, 11, 48, 0, 46, 8, 44, 1, 42, 7, 40, 15, 38, 3, 36, 5, 34, 17, 32, 6, 30, 14, 28
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A5DC0[] = {
	{ 0, 255 },
	{ 0 },
	{ 386, 255 },
	{ 386, 0 },
	{ 819, 255 },
	{ 819, 0 },
	{ 1156, 255 },
	{ 1156, 0 },
	{ 1648, 255 },
	{ 1648, 0 },
	{ 2021, 255 },
	{ 2021, 0 },
	{ 2433, 255 },
	{ 2433, 0 },
	{ 2817, 0 },
	{ 5100, 0 },
	{ 5100, 255 },
	{ 4691, 0 },
	{ 4691, 255 },
	{ 4282, 0 },
	{ 4282, 255 },
	{ 3909, 0 },
	{ 3909, 255 },
	{ 3344, 0 },
	{ 3344, 255 },
	{ 2817, 0 },
	{ 2817, 255 },
	{ 2433, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A5E30[] = {
	{ 0, 255 },
	{ 0, 111 },
	{ 212, 255 },
	{ 214, 105 },
	{ 414, 255 },
	{ 420, 92 },
	{ 661, 255 },
	{ 645, 92 },
	{ 952, 255 },
	{ 919, 87 },
	{ 1217, 255 },
	{ 1187, 81 },
	{ 1417, 255 },
	{ 1388, 81 },
	{ 1617, 255 },
	{ 1583, 93 },
	{ 1793, 255 },
	{ 1761, 97 },
	{ 2029, 255 },
	{ 2000, 82 },
	{ 2190, 255 },
	{ 2164, 93 },
	{ 2355, 255 },
	{ 2356, 84 },
	{ 2550, 255 },
	{ 2549, 82 },
	{ 2550, 0 },
	{ 2549, 82 },
	{ 2356, 0 },
	{ 2356, 84 },
	{ 2139, 0 },
	{ 2164, 93 },
	{ 1970, 0 },
	{ 2000, 82 },
	{ 1724, 0 },
	{ 1761, 97 },
	{ 1538, 0 },
	{ 1583, 93 },
	{ 1332, 0 },
	{ 1388, 81 },
	{ 1140, 0 },
	{ 1187, 81 },
	{ 876, 0 },
	{ 919, 87 },
	{ 593, 0 },
	{ 645, 92 },
	{ 408, 0 },
	{ 420, 92 },
	{ 203, 0 },
	{ 214, 105 },
	{ 0 },
	{ 0, 111 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A5F00[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000A5D18, NULL, NULL, NULL, uv_000A5DC0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000A5D54, NULL, NULL, NULL, uv_000A5E30, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A5F30[] = {
	{ 735.5791f, 650.0097f, -504.2902f },
	{ 539.0851f, 679.8411f, -1117.244f },
	{ -1056.547f, 831.5578f, -1967.858f },
	{ -143.4467f, 645.9257f, -1681.469f },
	{ -592.0216f, 838.1842f, -1674.436f },
	{ -592.0215f, 638.1842f, -1674.436f },
	{ -1381.428f, 704.6954f, -2290.019f },
	{ 418.9605f, 674.1063f, -1424.64f },
	{ 503.4326f, 685.9047f, -820.6464f },
	{ -143.4469f, 795.9257f, -1681.469f },
	{ 1380.73f, 455, -14.45353f },
	{ 742.3486f, 685.417f, -235.9848f },
	{ 1008.355f, 680.0907f, -14.81329f },
	{ 171.5727f, 881.6158f, -1606.201f },
	{ -1792.233f, 676.7692f, -2562.004f },
	{ 171.5728f, 681.6158f, -1606.201f },
	{ 418.9605f, 874.1063f, -1424.64f },
	{ -1056.547f, 681.5579f, -1967.858f },
	{ 1043.669f, 622.5972f, -66.70418f },
	{ 1058.397f, 455, -90.16647f },
	{ 539.085f, 829.841f, -1117.244f },
	{ 503.4325f, 785.9047f, -820.6464f },
	{ 1305.448f, 657.4188f, 71.52948f },
	{ 1356.109f, 620.3548f, 18.06634f },
	{ 735.5789f, 850.0097f, -504.2903f },
	{ 742.3486f, 835.4169f, -235.9848f },
	{ 1008.355f, 880.0908f, -14.81337f },
	{ 1305.448f, 857.4188f, 71.52944f },
	{ -1796.109f, 622.6921f, -2627.301f },
	{ -1774.509f, 455, -2670.741f },
	{ -1348.392f, 625.8432f, -2357.926f },
	{ -1320.418f, 455, -2402.495f },
	{ -1009.455f, 622.9442f, -2055.788f },
	{ -986.5089f, 455, -2110.281f },
	{ -578.9547f, 621.4433f, -1774.681f },
	{ -582.427f, 455, -1819.046f },
	{ -129.7601f, 619.6633f, -1767.113f },
	{ -92.79943f, 455, -1795.898f },
	{ 188.5675f, 623.6114f, -1662.448f },
	{ 231.2157f, 455, -1689.869f },
	{ 466.5253f, 622.7373f, -1470.898f },
	{ 516.1353f, 455, -1500.438f },
	{ 603.5629f, 625.0692f, -1178.532f },
	{ 665.7956f, 455, -1193.741f },
	{ 572.4587f, 624.3362f, -880.4584f },
	{ 630.4108f, 455, -893.6937f },
	{ 796.0189f, 618.1498f, -550.8079f },
	{ 855.2014f, 455, -561.7723f },
	{ 803.911f, 620.3536f, -279.2971f },
	{ 857.3494f, 455, -286.4216f },
	{ -1381.428f, 854.6954f, -2290.019f },
	{ -1792.233f, 826.7692f, -2562.004f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A61A0[] = {
	{ 0.804724f, 0.542866f, -0.24024f },
	{ 0.8892739f, 0.448348f, -0.090423f },
	{ 0.623801f, 0, -0.781583f },
	{ 0.108987f, 0.594327f, -0.796805f },
	{ 0.278163f, 0, -0.960534f },
	{ 0.231848f, 0.56194f, -0.794021f },
	{ 0.564861f, 0.404168f, -0.719431f },
	{ 0.68343f, 0.478675f, -0.551175f },
	{ 0.874431f, 0.422341f, -0.238742f },
	{ 0.115103f, 0, -0.993354f },
	{ 0.224619f, 0.187331f, -0.956271f },
	{ 0.826078f, 0.383693f, -0.412766f },
	{ 0.43706f, 0.40278f, -0.804206f },
	{ 0.435303f, 0, -0.900284f },
	{ 0.478349f, 0.436036f, -0.76227f },
	{ 0.386863f, 0.457647f, -0.80056f },
	{ 0.7836919f, 0, -0.6211489f },
	{ 0.543784f, 0.482808f, -0.686437f },
	{ 0.402682f, 0.545351f, -0.735146f },
	{ 0.469412f, 0.20293f, -0.8593439f },
	{ 0.988939f, 0.000001f, -0.148324f },
	{ 0.966765f, 0.000001f, -0.255667f },
	{ 0.236756f, 0.510262f, -0.826789f },
	{ 0.213638f, 0.463302f, -0.860064f },
	{ 0.949986f, 0, -0.312293f },
	{ 0.895469f, 0, -0.445124f },
	{ 0.465601f, 0, -0.884995f },
	{ 0.279079f, 0, -0.960268f },
	{ 0.45f, 0.468186f, -0.760462f },
	{ 0.487392f, 0.285862f, -0.825065f },
	{ 0.496413f, 0.528938f, -0.68833f },
	{ 0.558738f, 0.295955f, -0.77474f },
	{ 0.491223f, 0.61839f, -0.613428f },
	{ 0.598199f, 0.285521f, -0.748756f },
	{ 0.22548f, 0.737627f, -0.636448f },
	{ 0.333816f, 0.253273f, -0.907976f },
	{ 0.138256f, 0.628423f, -0.7654859f },
	{ 0.191134f, 0.22657f, -0.955057f },
	{ 0.358638f, 0.557109f, -0.749005f },
	{ 0.431967f, 0.259577f, -0.863727f },
	{ 0.619458f, 0.554007f, -0.55619f },
	{ 0.717991f, 0.3193f, -0.618495f },
	{ 0.805877f, 0.570576f, -0.158128f },
	{ 0.925862f, 0.341695f, -0.16132f },
	{ 0.76643f, 0.6277f, -0.136299f },
	{ 0.913884f, 0.338522f, -0.224098f },
	{ 0.761522f, 0.597195f, -0.251876f },
	{ 0.9024889f, 0.33298f, -0.273201f },
	{ 0.728349f, 0.607898f, -0.316178f },
	{ 0.8724689f, 0.282355f, -0.398839f },
	{ 0.631282f, 0, -0.775553f },
	{ 0.552049f, 0, -0.833811f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A6410 = { vertex_000A5F30, normal_000A61A0, LengthOfArray<Sint32>(vertex_000A5F30), meshlist_000A5F00, matlist_000A5CF0, LengthOfArray<Uint16>(meshlist_000A5F00), LengthOfArray<Uint16>(matlist_000A5CF0), { -207.6894f, 668.3079f, -1299.606f }, 2111.229f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A6438 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A6410, 2561, -675, 268, 0, 0xFFFF6409, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A646C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A6480[] = {
	10, 14, 5, 13, 6, 12, 7, 11, 8, 10, 9,
	10, 10, 4, 11, 3, 12, 2, 13, 1, 14, 0
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A64AC[] = {
	{ 0, 61 },
	{ 0 },
	{ 330, 51 },
	{ 328, 0 },
	{ 657, 68 },
	{ 654, 0 },
	{ 976, 59 },
	{ 981, 0 },
	{ 1275, 66 },
	{ 1275, 0 },
	{ 1275, 66 },
	{ 1274, 255 },
	{ 976, 59 },
	{ 961, 255 },
	{ 657, 68 },
	{ 661, 255 },
	{ 330, 51 },
	{ 338, 255 },
	{ 0, 61 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A64FC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000A6480, NULL, NULL, NULL, uv_000A64AC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A6514[] = {
	{ -2182.742f, -607, -1598.167f },
	{ -3323.709f, -194, -1064.688f },
	{ -3953.709f, -273, -403.6885f },
	{ -4199.708f, -323, 474.3114f },
	{ -5271.708f, -389, 959.3118f },
	{ -2316.603f, -54, -1697.362f },
	{ -3411, 351, -1211 },
	{ -4133, 247, -514.9999f },
	{ -4356, 322, 350 },
	{ -5439, 146, 768 },
	{ -5439.951f, -31.54318f, 900.5797f },
	{ -4295.337f, 113.5026f, 407.6647f },
	{ -4060.85f, 52.73236f, -457.7317f },
	{ -3371.4f, 197.0144f, -1162.841f },
	{ -2210.673f, -171.0676f, -1685.522f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A65C8[] = {
	{ 0.479942f, 0.233588f, 0.8456309f },
	{ 0.5791f, 0.263005f, 0.771668f },
	{ 0.8234659f, 0.297029f, 0.483402f },
	{ 0.705906f, 0.303141f, 0.640158f },
	{ 0.383532f, 0.267074f, 0.884067f },
	{ 0.494978f, 0.432565f, 0.753581f },
	{ 0.5568759f, 0.416644f, 0.718538f },
	{ 0.784102f, 0.39803f, 0.47619f },
	{ 0.667121f, 0.459873f, 0.586059f },
	{ 0.254041f, 0.458876f, 0.8514079f },
	{ 0.32384f, 0.36124f, 0.874433f },
	{ 0.684045f, 0.380733f, 0.622193f },
	{ 0.8108169f, 0.346459f, 0.471743f },
	{ 0.565178f, 0.356001f, 0.744202f },
	{ 0.486501f, 0.290464f, 0.823983f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A667C = { vertex_000A6514, normal_000A65C8, LengthOfArray<Sint32>(vertex_000A6514), meshlist_000A64FC, matlist_000A646C, LengthOfArray<Uint16>(meshlist_000A64FC), LengthOfArray<Uint16>(matlist_000A646C), { -3811.346f, -128, -369.0251f }, 2101.478f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A66A4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A667C, 704, 395, -501, 0, 0x2EE, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A66D8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 16, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A66EC[] = {
	0x8000u | 21, 0, 97, 57, 50, 56, 46, 55, 88, 48, 101, 77, 40, 74, 27, 64, 1, 79, 14, 109, 72, 70,
	7, 0, 59, 57, 63, 56, 102, 55,
	0x8000u | 14, 52, 23, 92, 44, 53, 26, 3, 22, 95, 16, 94, 13, 54, 7,
	14, 23, 20, 52, 91, 5, 8, 21, 60, 10, 93, 107, 106, 68, 67,
	7, 108, 61, 99, 19, 96, 53, 92,
	0x8000u | 13, 83, 24, 71, 38, 110, 25, 69, 18, 15, 80, 78, 41, 39,
	3, 12, 24, 38,
	0x8000u | 8, 80, 18, 81, 25, 82, 38, 84, 12,
	6, 9, 6, 76, 75, 37, 36,
	4, 72, 73, 14, 1,
	18, 68, 70, 107, 109, 108, 79, 61, 64, 100, 74, 47, 77, 86, 48, 54, 55, 7, 102,
	14, 66, 67, 105, 106, 87, 93, 11, 60, 98, 8, 90, 91, 17, 20,
	14, 65, 66, 104, 105, 62, 87, 103, 11, 2, 98, 51, 90, 111, 17,
	0x8000u | 8, 84, 45, 82, 43, 81, 42, 80, 41,
	9, 54, 94, 86, 95, 47, 85, 100, 19, 61,
	0x8000u | 5, 19, 53, 85, 3, 95,
	3, 35, 36, 75,
	0x8000u | 9, 52, 92, 5, 96, 21, 99, 10, 108, 107,
	0x8000u | 30, 28, 65, 29, 66, 30, 67, 31, 68, 32, 70, 34, 72, 35, 73, 75, 1, 6, 27, 9, 40, 33, 101, 4, 88, 58, 46, 49, 50, 89, 97,
	0x8000u | 15, 89, 83, 49, 71, 58, 110, 4, 69, 33, 15, 9, 78, 76, 39, 37
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A68D0[] = {
	{ 186, 91 },
	{ 194, 110 },
	{ 183, 90 },
	{ 189, 110 },
	{ 175, 82 },
	{ 181, 106 },
	{ 164, 74 },
	{ 166, 97 },
	{ 155, 102 },
	{ 157, 118 },
	{ 145, 125 },
	{ 152, 147 },
	{ 133, 117 },
	{ 140, 147 },
	{ 127, 149 },
	{ 128, 172 },
	{ 118, 149 },
	{ 119, 175 },
	{ 99, 179 },
	{ 120, 214 },
	{ 99, 217 },
	{ 186, 91 },
	{ 174, 69 },
	{ 183, 90 },
	{ 165, 61 },
	{ 175, 82 },
	{ 157, 52 },
	{ 164, 74 },
	{ 84, 23 },
	{ 83, 0 },
	{ 93, 24 },
	{ 92, 8 },
	{ 106, 46 },
	{ 101, 20 },
	{ 121, 67 },
	{ 116, 40 },
	{ 130, 75 },
	{ 127, 49 },
	{ 144, 74 },
	{ 138, 51 },
	{ 152, 69 },
	{ 146, 39 },
	{ 83, 0 },
	{ 75, 19 },
	{ 84, 23 },
	{ 74, 55 },
	{ 80, 86 },
	{ 70, 107 },
	{ 79, 117 },
	{ 64, 137 },
	{ 77, 145 },
	{ 52, 162 },
	{ 73, 170 },
	{ 53, 178 },
	{ 70, 213 },
	{ 44, 216 },
	{ 97, 156 },
	{ 116, 122 },
	{ 94, 131 },
	{ 114, 100 },
	{ 95, 100 },
	{ 106, 46 },
	{ 93, 24 },
	{ 211, 151 },
	{ 224, 173 },
	{ 212, 164 },
	{ 224, 185 },
	{ 199, 158 },
	{ 209, 179 },
	{ 181, 155 },
	{ 185, 174 },
	{ 166, 167 },
	{ 191, 195 },
	{ 176, 201 },
	{ 197, 229 },
	{ 183, 229 },
	{ 238, 193 },
	{ 224, 173 },
	{ 224, 185 },
	{ 191, 195 },
	{ 185, 174 },
	{ 220, 201 },
	{ 209, 179 },
	{ 237, 209 },
	{ 224, 185 },
	{ 251, 226 },
	{ 238, 193 },
	{ 154, 173 },
	{ 143, 176 },
	{ 160, 207 },
	{ 148, 211 },
	{ 165, 233 },
	{ 151, 234 },
	{ 120, 214 },
	{ 133, 213 },
	{ 119, 175 },
	{ 128, 172 },
	{ 70, 213 },
	{ 99, 217 },
	{ 73, 170 },
	{ 99, 179 },
	{ 97, 156 },
	{ 118, 149 },
	{ 116, 122 },
	{ 127, 149 },
	{ 123, 123 },
	{ 133, 117 },
	{ 131, 93 },
	{ 145, 125 },
	{ 144, 101 },
	{ 155, 102 },
	{ 152, 69 },
	{ 164, 74 },
	{ 146, 39 },
	{ 157, 52 },
	{ 20, 222 },
	{ 44, 216 },
	{ 36, 185 },
	{ 53, 178 },
	{ 39, 170 },
	{ 52, 162 },
	{ 53, 141 },
	{ 64, 137 },
	{ 61, 113 },
	{ 70, 107 },
	{ 63, 88 },
	{ 74, 55 },
	{ 68, 35 },
	{ 75, 19 },
	{ 7, 229 },
	{ 20, 222 },
	{ 25, 198 },
	{ 36, 185 },
	{ 26, 181 },
	{ 39, 170 },
	{ 42, 155 },
	{ 53, 141 },
	{ 52, 128 },
	{ 61, 113 },
	{ 55, 112 },
	{ 63, 88 },
	{ 55, 94 },
	{ 68, 35 },
	{ 251, 226 },
	{ 255, 241 },
	{ 237, 209 },
	{ 245, 229 },
	{ 220, 201 },
	{ 230, 228 },
	{ 191, 195 },
	{ 197, 229 },
	{ 152, 69 },
	{ 144, 74 },
	{ 144, 101 },
	{ 130, 75 },
	{ 131, 93 },
	{ 122, 98 },
	{ 123, 123 },
	{ 114, 100 },
	{ 116, 122 },
	{ 114, 100 },
	{ 106, 46 },
	{ 122, 98 },
	{ 121, 67 },
	{ 130, 75 },
	{ 134, 239 },
	{ 151, 234 },
	{ 148, 211 },
	{ 84, 23 },
	{ 93, 24 },
	{ 80, 86 },
	{ 95, 100 },
	{ 79, 117 },
	{ 94, 131 },
	{ 77, 145 },
	{ 97, 156 },
	{ 73, 170 },
	{ 0, 253 },
	{ 7, 229 },
	{ 17, 254 },
	{ 20, 222 },
	{ 38, 250 },
	{ 44, 216 },
	{ 67, 241 },
	{ 70, 213 },
	{ 101, 236 },
	{ 99, 217 },
	{ 122, 239 },
	{ 120, 214 },
	{ 134, 239 },
	{ 133, 213 },
	{ 148, 211 },
	{ 128, 172 },
	{ 143, 176 },
	{ 140, 147 },
	{ 154, 173 },
	{ 152, 147 },
	{ 162, 140 },
	{ 157, 118 },
	{ 171, 124 },
	{ 166, 97 },
	{ 187, 134 },
	{ 181, 106 },
	{ 196, 136 },
	{ 189, 110 },
	{ 200, 124 },
	{ 194, 110 },
	{ 200, 124 },
	{ 211, 151 },
	{ 196, 136 },
	{ 212, 164 },
	{ 187, 134 },
	{ 199, 158 },
	{ 171, 124 },
	{ 181, 155 },
	{ 162, 140 },
	{ 166, 167 },
	{ 154, 173 },
	{ 176, 201 },
	{ 160, 207 },
	{ 183, 229 },
	{ 165, 233 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A6C48[] = {
	{ NJD_MESHSET_TRIMESH | 0, 20, poly_000A66EC, NULL, NULL, NULL, uv_000A68D0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A6C60[] = {
	{ -72.94784f, 2038.208f, -1675.269f },
	{ -408.0603f, 1012.324f, -91.0889f },
	{ -2496.857f, 1575.94f, -691.0427f },
	{ -1064.356f, 2346.394f, -879.5009f },
	{ 126.3935f, 1626.513f, -785.6082f },
	{ -1830.097f, 2101.295f, -623.7056f },
	{ -208.1661f, 962.0743f, -312.1468f },
	{ -627.8943f, 2688.734f, -1097.256f },
	{ -1972.441f, 1841.516f, -477.6496f },
	{ -81.35818f, 1006.552f, -488.8183f },
	{ -1704.481f, 1360.548f, -309.7254f },
	{ -2331.503f, 1414.396f, -440.7961f },
	{ 1037.822f, 752.5519f, -1746.189f },
	{ -777.8605f, 2545.587f, -1036.414f },
	{ -604.1701f, 980.007f, -64.21055f },
	{ 100.1612f, 1081.203f, -647.0578f },
	{ -1088.355f, 2563.654f, -1145.555f },
	{ -2235.879f, 2739.456f, -861.8114f },
	{ 432.273f, 996.1268f, -795.6766f },
	{ -1004.028f, 1927.818f, -522.955f },
	{ -2067.043f, 2950.75f, -828.991f },
	{ -1748.898f, 1705.174f, -464.9395f },
	{ -1355.049f, 2678.731f, -1162.222f },
	{ -1908.804f, 3191.777f, -876.6167f },
	{ 761.8702f, 1012.066f, -1708.326f },
	{ 819.9033f, 924.2217f, -1050.323f },
	{ -1621.515f, 2931.169f, -1066.123f },
	{ -363.4776f, 1328.24f, -458.0801f },
	{ -2891.961f, -0.06265999f, 599.7748f },
	{ -2441.056f, -21.01262f, 695.3445f },
	{ -1961.488f, 36.20208f, 713.0613f },
	{ -1445.531f, 147.9202f, 459.2592f },
	{ -802.5671f, 207.0284f, 277.1363f },
	{ -33.39392f, 1420.237f, -723.6082f },
	{ -374.4678f, 169.2605f, 201.7733f },
	{ -132.7525f, 174.7056f, 146.0893f },
	{ 90.34192f, 233.454f, -109.4492f },
	{ 386.5636f, 250.8346f, -147.798f },
	{ 979.2034f, 849.0232f, -1355.298f },
	{ 650.752f, 297.3564f, -361.2785f },
	{ -220.9637f, 1337.29f, -642.0095f },
	{ 818.6732f, 295.149f, -606.8221f },
	{ 1442.032f, 312.6428f, -808.8905f },
	{ 1660.441f, 300.3513f, -995.408f },
	{ -1748.027f, 3085.58f, -929.6146f },
	{ 1543.556f, 144.6144f, -1541.032f },
	{ 198.712f, 1844.112f, -1016.51f },
	{ -768.3364f, 2019.67f, -776.7802f },
	{ -265.8392f, 1899.601f, -847.4075f },
	{ 430.5311f, 1466.563f, -1214.693f },
	{ 224.7615f, 1802.199f, -1274.985f },
	{ -2474.77f, 1780.561f, -772.7853f },
	{ -1791.036f, 2898.354f, -714.8574f },
	{ -1343.441f, 2605.264f, -791.1458f },
	{ -346.1759f, 2316.258f, -841.0021f },
	{ -160.5307f, 2255.729f, -996.1174f },
	{ 21.03493f, 2148.854f, -1096.21f },
	{ 76.73911f, 2048.211f, -1299.681f },
	{ 408.145f, 1496.852f, -904.2415f },
	{ -210.5588f, 2315.514f, -1425.323f },
	{ -1997.475f, 1463.774f, -312.2196f },
	{ -796.7408f, 1652.633f, -279.5691f },
	{ -2825.691f, 908.2263f, -277.7687f },
	{ -291.2216f, 2423.038f, -1237.857f },
	{ -510.2054f, 1312.878f, -212.4749f },
	{ -2945.055f, 294.3609f, 241.913f },
	{ -2523.805f, 384.5331f, 436.2794f },
	{ -1983.538f, 465.7022f, 459.2682f },
	{ -1528.781f, 498.9828f, 241.8674f },
	{ 322.4406f, 1237.923f, -839.3455f },
	{ -911.151f, 448.9609f, 159.0166f },
	{ 713.8572f, 1115.244f, -1318.566f },
	{ -508.5247f, 493.3766f, 73.27464f },
	{ -241.2845f, 497.3035f, 19.2166f },
	{ -584.3806f, 1715.944f, -539.2958f },
	{ -28.61959f, 524.8867f, -191.0725f },
	{ 234.9091f, 583.2795f, -196.4374f },
	{ -400.7828f, 1609.219f, -669.8048f },
	{ 479.5334f, 654.8392f, -399.804f },
	{ -682.3287f, 1311.823f, -148.9281f },
	{ 642.1284f, 734.619f, -661.6445f },
	{ 1162.479f, 651.0007f, -878.1279f },
	{ 1425.547f, 546.0708f, -1099.322f },
	{ 568.0368f, 1279.058f, -1522.102f },
	{ 1422.015f, 338.0231f, -1599.359f },
	{ -859.3721f, 1952.382f, -589.0704f },
	{ -485.372f, 1911.59f, -792.6872f },
	{ -2512.336f, 1047.075f, -241.7497f },
	{ -37.10377f, 1969.322f, -873.5545f },
	{ 307.2588f, 1617.39f, -1553.949f },
	{ -2218.767f, 2071.34f, -624.1187f },
	{ -1951.829f, 2490.262f, -615.4169f },
	{ -1592.403f, 2879.402f, -712.8851f },
	{ -2142.415f, 1149.783f, -105.2918f },
	{ -528.6935f, 2258.672f, -853.2185f },
	{ -861.9114f, 2246.127f, -903.4948f },
	{ -1468.95f, 1931.335f, -583.8995f },
	{ 181.4379f, 1796.375f, -1544.78f },
	{ -2237.586f, 1759.022f, -606.647f },
	{ -1318.814f, 1536.74f, -297.8329f },
	{ -685.7158f, 1640.557f, -327.1865f },
	{ -164.8609f, 1699.443f, -729.7775f },
	{ -454.5251f, 2529.243f, -1208.48f },
	{ -2611.675f, 1231.313f, -523.5701f },
	{ -2821.424f, 692.835f, -215.0498f },
	{ -2487.88f, 849.9221f, -70.67208f },
	{ -2036.528f, 946.1367f, 41.39743f },
	{ -1643.453f, 1037.461f, -76.2021f },
	{ -1162.688f, 1215.34f, -155.8129f },
	{ -1060.475f, 930.0006f, -59.64286f },
	{ 627.0715f, 1200.041f, -978.4224f },
	{ -2499.377f, 1995.953f, -790.3315f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A71A0[] = {
	{ 0.724717f, 0.623674f, -0.292943f },
	{ 0.456742f, 0.420409f, 0.783992f },
	{ -0.529055f, 0.358571f, 0.769108f },
	{ 0.477968f, 0.69778f, 0.533525f },
	{ 0.350834f, 0.290477f, 0.890247f },
	{ 0.277834f, 0.199789f, 0.939624f },
	{ 0.563902f, 0.537025f, 0.627391f },
	{ 0.187342f, 0.710448f, 0.678356f },
	{ -0.101384f, 0.33804f, 0.935655f },
	{ 0.381075f, 0.576332f, 0.722926f },
	{ -0.018953f, 0.440333f, 0.897635f },
	{ -0.463275f, 0.521719f, 0.716369f },
	{ 0.72473f, 0.673923f, -0.143504f },
	{ -0.185912f, 0.487746f, 0.85296f },
	{ 0.08637299f, 0.308123f, 0.947418f },
	{ 0.368894f, 0.508196f, 0.778238f },
	{ 0.206343f, 0.6820199f, 0.70162f },
	{ -0.495006f, 0.268389f, 0.8264f },
	{ 0.488364f, 0.497642f, 0.716836f },
	{ 0.289933f, 0.62807f, 0.7221259f },
	{ -0.368201f, 0.330625f, 0.868974f },
	{ 0.107755f, 0.440204f, 0.891409f },
	{ 0.640496f, 0.7322069f, 0.231597f },
	{ 0.013221f, 0.637296f, 0.770506f },
	{ 0.716001f, 0.693097f, -0.08341999f },
	{ 0.578142f, 0.7413419f, 0.340827f },
	{ 0.739842f, 0.671463f, 0.042086f },
	{ 0.6877609f, 0.500131f, 0.52617f },
	{ -0.312263f, 0.465353f, 0.828214f },
	{ -0.193742f, 0.489112f, 0.850431f },
	{ 0.07051399f, 0.5349849f, 0.841914f },
	{ 0.240465f, 0.527074f, 0.815089f },
	{ 0.16765f, 0.492268f, 0.8541459f },
	{ 0.23562f, 0.193786f, 0.952329f },
	{ 0.175932f, 0.444075f, 0.878547f },
	{ 0.413502f, 0.44468f, 0.794529f },
	{ 0.345393f, 0.322764f, 0.8812079f },
	{ 0.352829f, 0.281272f, 0.892411f },
	{ 0.672859f, 0.7389669f, -0.03448f },
	{ 0.6666909f, 0.362348f, 0.651327f },
	{ 0.431804f, 0.401293f, 0.80778f },
	{ 0.532161f, 0.425526f, 0.731937f },
	{ 0.489434f, 0.6401809f, 0.592134f },
	{ 0.771557f, 0.630778f, 0.082576f },
	{ 0.5290999f, 0.77979f, 0.334634f },
	{ 0.8512689f, 0.457396f, -0.257158f },
	{ 0.767069f, 0.559216f, 0.314456f },
	{ 0.308397f, 0.629515f, 0.713163f },
	{ 0.226624f, 0.340193f, 0.912639f },
	{ 0.816408f, 0.576382f, -0.035514f },
	{ 0.843724f, 0.530015f, -0.084934f },
	{ -0.515436f, 0.130395f, 0.846949f },
	{ 0.020037f, 0.474691f, 0.879924f },
	{ 0.69762f, 0.588498f, 0.408653f },
	{ 0.336912f, 0.528762f, 0.779038f },
	{ 0.646295f, 0.628805f, 0.432328f },
	{ 0.733555f, 0.64017f, 0.228212f },
	{ 0.785652f, 0.599674f, -0.152124f },
	{ 0.717765f, 0.419718f, 0.555562f },
	{ 0.714662f, 0.674153f, -0.186483f },
	{ -0.09601299f, 0.477876f, 0.873164f },
	{ 0.108328f, 0.546864f, 0.830184f },
	{ -0.450086f, 0.563754f, 0.692534f },
	{ 0.628501f, 0.7675869f, 0.125682f },
	{ 0.517336f, 0.493089f, 0.699448f },
	{ -0.409616f, 0.5849479f, 0.700036f },
	{ -0.281667f, 0.569321f, 0.7723579f },
	{ 0.059926f, 0.569977f, 0.819473f },
	{ 0.203375f, 0.5046279f, 0.839041f },
	{ 0.430188f, 0.191618f, 0.882168f },
	{ 0.131253f, 0.429129f, 0.893656f },
	{ 0.745416f, 0.666572f, 0.006064f },
	{ 0.14093f, 0.362333f, 0.921333f },
	{ 0.42725f, 0.413008f, 0.80429f },
	{ 0.568513f, 0.638398f, 0.518885f },
	{ 0.405098f, 0.46587f, 0.7866769f },
	{ 0.287265f, 0.458665f, 0.840895f },
	{ 0.461681f, 0.489199f, 0.739956f },
	{ 0.5481679f, 0.520268f, 0.654853f },
	{ 0.095746f, 0.382717f, 0.918891f },
	{ 0.499642f, 0.623153f, 0.601696f },
	{ 0.463063f, 0.720186f, 0.516628f },
	{ 0.709833f, 0.7005489f, 0.073273f },
	{ 0.79694f, 0.601829f, -0.051854f },
	{ 0.8085369f, 0.54695f, -0.217057f },
	{ 0.443923f, 0.687924f, 0.5741889f },
	{ 0.215747f, 0.485411f, 0.847248f },
	{ -0.420018f, 0.550317f, 0.72162f },
	{ 0.485493f, 0.451241f, 0.7487839f },
	{ 0.825713f, 0.54575f, -0.142673f },
	{ -0.50047f, 0.212158f, 0.8393559f },
	{ -0.002335f, 0.21043f, 0.977606f },
	{ 0.5315199f, 0.5898269f, 0.6079389f },
	{ -0.192154f, 0.552741f, 0.810897f },
	{ -0.097353f, 0.377393f, 0.920922f },
	{ 0.122684f, 0.599225f, 0.791124f },
	{ 0.217012f, 0.443286f, 0.869715f },
	{ 0.797946f, 0.560214f, -0.222358f },
	{ -0.466981f, 0.258711f, 0.845575f },
	{ -0.120118f, 0.434914f, 0.892424f },
	{ 0.468026f, 0.5890779f, 0.65874f },
	{ 0.139693f, 0.296193f, 0.9448569f },
	{ 0.596923f, 0.780305f, 0.186566f },
	{ -0.479381f, 0.556325f, 0.678746f },
	{ -0.466046f, 0.6187119f, 0.632453f },
	{ -0.377247f, 0.571324f, 0.728885f },
	{ -0.030505f, 0.568465f, 0.8221419f },
	{ 0.062566f, 0.5116839f, 0.8568929f },
	{ -0.122554f, 0.361012f, 0.924473f },
	{ 0.008541999f, 0.358039f, 0.933668f },
	{ 0.721999f, 0.445837f, 0.529101f },
	{ -0.611634f, 0.251227f, 0.750193f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A76E0 = { vertex_000A6C60, normal_000A71A0, LengthOfArray<Sint32>(vertex_000A6C60), meshlist_000A6C48, matlist_000A66D8, LengthOfArray<Uint16>(meshlist_000A6C48), LengthOfArray<Uint16>(matlist_000A66D8), { -642.3071f, 1585.382f, -516.5636f }, 2641.656f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A7708 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A76E0, -3030, 251, -1374, 0, 0xA2F, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A773C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A7750[] = {
	26, 19, 20, 21, 22, 23, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A7788[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000A7750, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A77A0[] = {
	{ 141.9339f, -2.5f, 0 },
	{ 111.6179f, 16, 0 },
	{ 122.9184f, -2.5f, -70.96694f },
	{ 96.66396f, 16, -55.80895f },
	{ 70.96694f, -2.5f, -122.9184f },
	{ 55.80894f, 16, -96.66396f },
	{ -0.00005f, -2.5f, -141.9339f },
	{ -0.00004f, 16, -111.6179f },
	{ -70.96694f, -2.5f, -122.9184f },
	{ -55.80895f, 16, -96.66396f },
	{ -122.9184f, -2.5f, -70.96694f },
	{ -96.66396f, 16, -55.80894f },
	{ -141.9339f, -2.5f, 0.000004f },
	{ -111.6179f, 16, 0.000003f },
	{ -122.9184f, -2.5f, 70.96694f },
	{ -96.66392f, 16, 55.80894f },
	{ -70.96693f, -2.5f, 122.9184f },
	{ -55.80893f, 16, 96.66396f },
	{ 0.000014f, -2.5f, 141.9339f },
	{ 0.000011f, 16, 111.6179f },
	{ 70.96694f, -2.5f, 122.9184f },
	{ 55.80895f, 16, 96.66392f },
	{ 122.9184f, -2.5f, 70.96693f },
	{ 96.66396f, 16, 55.80893f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A78C0[] = {
	{ 0.520908f, 0.853613f, 0 },
	{ 0.520908f, 0.853613f, 0 },
	{ 0.451119f, 0.853613f, -0.260454f },
	{ 0.451119f, 0.853613f, -0.260454f },
	{ 0.260454f, 0.853613f, -0.451119f },
	{ 0.260454f, 0.853613f, -0.451119f },
	{ 0, 0.853613f, -0.520908f },
	{ 0, 0.853613f, -0.520908f },
	{ -0.260454f, 0.853613f, -0.451119f },
	{ -0.260454f, 0.853613f, -0.451119f },
	{ -0.451119f, 0.853613f, -0.260454f },
	{ -0.451119f, 0.853613f, -0.260454f },
	{ -0.520908f, 0.853613f, 0 },
	{ -0.520908f, 0.853613f, 0 },
	{ -0.451119f, 0.853613f, 0.260454f },
	{ -0.451119f, 0.853613f, 0.260454f },
	{ -0.260454f, 0.853613f, 0.451119f },
	{ -0.260454f, 0.853613f, 0.451119f },
	{ 0, 0.853613f, 0.520908f },
	{ 0, 0.853613f, 0.520908f },
	{ 0.260454f, 0.853613f, 0.451119f },
	{ 0.260454f, 0.853613f, 0.451119f },
	{ 0.451119f, 0.853613f, 0.260454f },
	{ 0.451119f, 0.853613f, 0.260454f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A79E0 = { vertex_000A77A0, normal_000A78C0, LengthOfArray<Sint32>(vertex_000A77A0), meshlist_000A7788, matlist_000A773C, LengthOfArray<Uint16>(meshlist_000A7788), LengthOfArray<Uint16>(matlist_000A773C), { 0, 6.75f, 0 }, 193.8853f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A7A08 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A79E0, 0, 45.875f, 0, 0, 0xAAA, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A7A3C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A7A8C[] = {
	0x8000u | 26, 8, 7, 9, 6, 5, 4, 2, 1, 3, 0, 12, 11, 13, 10, 16, 15, 17, 14, 23, 22, 21, 20, 19, 18, 8, 7
};

extern "C" __declspec(dllexport) Sint16 poly_000A7AC2[] = {
	0x8000u | 26, 7, 61, 6, 60, 4, 57, 1, 55, 0, 54, 11, 65, 10, 64, 15, 69, 14, 68, 22, 62, 20, 63, 18, 71, 7, 61,
	0x8000u | 26, 35, 28, 30, 58, 50, 33, 47, 70, 46, 56, 34, 59, 43, 26, 42, 52, 37, 25, 36, 24, 40, 53, 29, 27, 35, 28
};

extern "C" __declspec(dllexport) Sint16 poly_000A7B2E[] = {
	26, 43, 45, 42, 38, 37, 39, 36, 41, 40, 67, 29, 66, 35, 32, 30, 51, 50, 48, 47, 49, 46, 31, 34, 44, 43, 45
};

extern "C" __declspec(dllexport) Sint16 poly_000A7B64[] = {
	4, 24, 53, 55, 57,
	4, 25, 24, 54, 55,
	4, 52, 25, 65, 54,
	4, 26, 52, 64, 65,
	4, 56, 59, 68, 69,
	4, 59, 26, 69, 64,
	4, 53, 27, 57, 60,
	4, 27, 28, 60, 61,
	4, 58, 33, 71, 63,
	4, 28, 58, 61, 71,
	4, 33, 70, 63, 62,
	4, 70, 56, 62, 68
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A7BDC[] = {
	{ 0, 55 },
	{ 0, -218 },
	{ 681, 55 },
	{ 681, -218 },
	{ 1364, 55 },
	{ 1364, -218 },
	{ 2048, 55 },
	{ 2048, -218 },
	{ 2729, 55 },
	{ 2729, -218 },
	{ 3412, 55 },
	{ 3412, -218 },
	{ 4096, 55 },
	{ 4096, -218 },
	{ 4779, 55 },
	{ 4779, -218 },
	{ 5460, 55 },
	{ 5460, -218 },
	{ 6144, 55 },
	{ 6144, -218 },
	{ 6826, 55 },
	{ 6826, -218 },
	{ 7509, 55 },
	{ 7509, -218 },
	{ 8160, 55 },
	{ 8160, -218 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A7C44[] = {
	{ 0, 207 },
	{ 0, -508 },
	{ 836, 207 },
	{ 836, -508 },
	{ 1674, 207 },
	{ 1674, -510 },
	{ 2513, 207 },
	{ 2513, -510 },
	{ 3350, 207 },
	{ 3350, -510 },
	{ 4188, 207 },
	{ 4188, -508 },
	{ 5027, 207 },
	{ 5027, -508 },
	{ 5865, 207 },
	{ 5865, -508 },
	{ 6702, 207 },
	{ 6702, -508 },
	{ 7540, 207 },
	{ 7540, -508 },
	{ 8377, 207 },
	{ 8377, -508 },
	{ 9216, 207 },
	{ 9216, -508 },
	{ 10013, 207 },
	{ 10013, -508 },
	{ 10013, -454 },
	{ 10013, -508 },
	{ 9216, -454 },
	{ 9216, -508 },
	{ 8377, -454 },
	{ 8377, -508 },
	{ 7540, -454 },
	{ 7540, -508 },
	{ 6702, -454 },
	{ 6702, -508 },
	{ 5865, -454 },
	{ 5865, -508 },
	{ 5027, -454 },
	{ 5027, -508 },
	{ 4188, -454 },
	{ 4188, -508 },
	{ 3350, -454 },
	{ 3350, -510 },
	{ 2513, -454 },
	{ 2513, -510 },
	{ 1674, -454 },
	{ 1674, -510 },
	{ 836, -454 },
	{ 836, -508 },
	{ 0, -454 },
	{ 0, -508 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A7D14[] = {
	{ 368, -2294 },
	{ 1038, -1421 },
	{ 661, -1203 },
	{ 1676, -784 },
	{ 1458, -406 },
	{ 2550, -549 },
	{ 2550, -114 },
	{ 3422, -784 },
	{ 3639, -406 },
	{ 4060, -1421 },
	{ 4437, -1203 },
	{ 4294, -2295 },
	{ 4729, -2295 },
	{ 4060, -3167 },
	{ 4437, -3384 },
	{ 3422, -3805 },
	{ 3639, -4182 },
	{ 2549, -4038 },
	{ 2549, -4474 },
	{ 1676, -3805 },
	{ 1458, -4182 },
	{ 1038, -3167 },
	{ 661, -3384 },
	{ 804, -2294 },
	{ 368, -2294 },
	{ 1038, -1421 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A7D7C[] = {
	{ 7, 1 },
	{ 1012, 1 },
	{ 7, 253 },
	{ 1012, 253 },
	{ 7, 1 },
	{ 1012, 1 },
	{ 7, 253 },
	{ 1012, 253 },
	{ 7, 1 },
	{ 1012, 1 },
	{ 7, 253 },
	{ 1012, 253 },
	{ 7, 1 },
	{ 1012, 1 },
	{ 7, 253 },
	{ 1012, 253 },
	{ 7, 1 },
	{ 1012, 1 },
	{ 7, 253 },
	{ 1012, 253 },
	{ 7, 1 },
	{ 1012, 1 },
	{ 7, 253 },
	{ 1012, 253 },
	{ 7, 1 },
	{ 1012, 1 },
	{ 7, 253 },
	{ 1012, 253 },
	{ 7, 1 },
	{ 1012, 1 },
	{ 7, 253 },
	{ 1012, 253 },
	{ 7, 1 },
	{ 1012, 1 },
	{ 7, 253 },
	{ 1012, 253 },
	{ 7, 1 },
	{ 1012, 1 },
	{ 7, 253 },
	{ 1012, 253 },
	{ 7, 1 },
	{ 1012, 1 },
	{ 7, 253 },
	{ 1012, 253 },
	{ 7, 1 },
	{ 1012, 1 },
	{ 7, 253 },
	{ 1012, 253 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A7E3C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000A7A8C, NULL, NULL, NULL, uv_000A7BDC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000A7AC2, NULL, NULL, NULL, uv_000A7C44, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000A7B2E, NULL, NULL, NULL, uv_000A7D14, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 12, poly_000A7B64, NULL, NULL, NULL, uv_000A7D7C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A7E9C[] = {
	{ -84.66091f, 12.25f, -146.6368f },
	{ 0.000023f, 12.25f, -169.3219f },
	{ 0.000024f, -2.999994f, -175 },
	{ -87.49997f, -2.999994f, -151.5545f },
	{ 84.66095f, 12.25f, -146.6368f },
	{ 87.50002f, -2.999994f, -151.5544f },
	{ 146.6368f, 12.25f, -84.66091f },
	{ 169.3219f, 12.25f, 0.000001f },
	{ 175, -3, 0.000001f },
	{ 151.5545f, -2.999997f, -87.49996f },
	{ -169.3219f, 12.25f, -0.00015f },
	{ -146.6368f, 12.25f, -84.66095f },
	{ -151.5544f, -2.999997f, -87.50001f },
	{ -175, -3, -0.00016f },
	{ -84.66093f, 12.25f, 146.6368f },
	{ -146.6368f, 12.25f, 84.66091f },
	{ -151.5545f, -3.000003f, 87.49998f },
	{ -87.50001f, -3.000006f, 151.5544f },
	{ 146.6368f, 12.25f, 84.66093f },
	{ 151.5544f, -3.000003f, 87.5f },
	{ 84.66091f, 12.25f, 146.6368f },
	{ 87.49998f, -3.000006f, 151.5544f },
	{ -0.00008f, 12.25f, 169.3219f },
	{ -0.00008f, -3.000006f, 175 },
	{ 0.00002f, 45.00001f, -149.625f },
	{ -74.81247f, 45.00001f, -129.5791f },
	{ -149.625f, 45, -0.00014f },
	{ 129.5791f, 45, -74.81246f },
	{ 149.625f, 45, 0.000001f },
	{ 129.5791f, 42.5f, -74.81246f },
	{ 129.579f, 42.5f, 74.8125f },
	{ -103.6632f, 42.5f, 59.84998f },
	{ 103.6632f, 42.5f, 59.85f },
	{ 74.81248f, 44.99999f, 129.579f },
	{ -129.5791f, 42.5f, 74.81248f },
	{ 149.625f, 42.5f, 0.000001f },
	{ 0.00002f, 42.5f, -149.625f },
	{ -74.81247f, 42.5f, -129.5791f },
	{ -59.84998f, 42.5f, -103.6632f },
	{ 0.000016f, 42.5f, -119.7f },
	{ 74.81251f, 42.5f, -129.579f },
	{ 59.85002f, 42.5f, -103.6632f },
	{ -129.579f, 42.5f, -74.81251f },
	{ -149.625f, 42.5f, -0.00014f },
	{ -119.7f, 42.5f, -0.00011f },
	{ -103.6632f, 42.5f, -59.85001f },
	{ -74.81251f, 42.49999f, 129.579f },
	{ -0.00007f, 42.49999f, 149.625f },
	{ -0.00006f, 42.49999f, 119.7f },
	{ -59.85001f, 42.49999f, 103.6632f },
	{ 74.81248f, 42.49999f, 129.579f },
	{ 59.84999f, 42.49999f, 103.6632f },
	{ -129.579f, 45, -74.81251f },
	{ 74.81251f, 45.00001f, -129.579f },
	{ -78.74997f, 45.00001f, -136.399f },
	{ 0.000021f, 45.00001f, -157.5f },
	{ -74.81251f, 44.99999f, 129.579f },
	{ 78.75001f, 45.00001f, -136.399f },
	{ 129.579f, 45, 74.8125f },
	{ -129.5791f, 45, 74.81248f },
	{ 136.399f, 45, -78.74996f },
	{ 157.5f, 45, 0.000001f },
	{ -0.00007f, 44.99999f, 157.5f },
	{ 78.74998f, 44.99999f, 136.399f },
	{ -157.5f, 45, -0.00014f },
	{ -136.399f, 45, -78.75001f },
	{ 119.7f, 42.5f, 0 },
	{ 103.6632f, 42.5f, -59.84998f },
	{ -78.75001f, 44.99999f, 136.399f },
	{ -136.399f, 45, 78.74998f },
	{ -0.00007f, 44.99999f, 149.625f },
	{ 136.399f, 45, 78.75f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A81FC[] = {
	{ -0.469393f, 0.344505f, -0.813011f },
	{ 0, 0.344506f, -0.9387839f },
	{ 0, 0.348941f, -0.937145f },
	{ -0.468571f, 0.34894f, -0.811592f },
	{ 0.469393f, 0.344507f, -0.81301f },
	{ 0.468571f, 0.348946f, -0.81159f },
	{ 0.813011f, 0.344505f, -0.469393f },
	{ 0.9387839f, 0.344506f, 0 },
	{ 0.937144f, 0.348942f, -0.00001f },
	{ 0.811592f, 0.348939f, -0.468571f },
	{ -0.9387839f, 0.344506f, 0 },
	{ -0.81301f, 0.344507f, -0.469393f },
	{ -0.81159f, 0.348946f, -0.468571f },
	{ -0.937144f, 0.348942f, 0.000001f },
	{ -0.469393f, 0.344507f, 0.81301f },
	{ -0.813011f, 0.344505f, 0.469393f },
	{ -0.811592f, 0.34894f, 0.468572f },
	{ -0.468571f, 0.348946f, 0.81159f },
	{ 0.81301f, 0.344507f, 0.469393f },
	{ 0.81159f, 0.348946f, 0.468571f },
	{ 0.469393f, 0.344505f, 0.813011f },
	{ 0.468572f, 0.34894f, 0.811592f },
	{ 0, 0.344506f, 0.9387839f },
	{ 0.000001f, 0.348942f, 0.937144f },
	{ 0, 0.7702619f, 0.637728f },
	{ 0.318864f, 0.7702619f, 0.5522889f },
	{ 0.637728f, 0.7702619f, 0 },
	{ -0.552288f, 0.7702619f, 0.318864f },
	{ -0.637728f, 0.7702619f, 0 },
	{ -0.655722f, 0.653227f, 0.378581f },
	{ -0.655722f, 0.653227f, -0.378581f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.318864f, 0.7702619f, -0.552288f },
	{ 0.655722f, 0.653227f, -0.378581f },
	{ -0.757162f, 0.653227f, 0 },
	{ 0, 0.653227f, 0.757162f },
	{ 0.378581f, 0.653227f, 0.655722f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.378581f, 0.653227f, 0.655722f },
	{ 0, 1, 0 },
	{ 0.655722f, 0.653227f, 0.378581f },
	{ 0.757162f, 0.653227f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.378581f, 0.653227f, -0.655722f },
	{ 0, 0.653227f, -0.757162f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.378581f, 0.653227f, -0.655722f },
	{ 0, 1, 0 },
	{ 0.552288f, 0.7702619f, 0.318864f },
	{ -0.318864f, 0.7702619f, 0.552288f },
	{ -0.316007f, 0.774958f, -0.54734f },
	{ 0, 0.7749569f, -0.632014f },
	{ 0.318864f, 0.7702619f, -0.552288f },
	{ 0.316007f, 0.774956f, -0.547341f },
	{ -0.552288f, 0.7702619f, -0.318864f },
	{ 0.552288f, 0.7702619f, -0.318864f },
	{ 0.547339f, 0.774958f, -0.316007f },
	{ 0.632014f, 0.7749569f, 0 },
	{ 0, 0.7749569f, 0.632014f },
	{ 0.316007f, 0.7749569f, 0.547339f },
	{ -0.632014f, 0.7749569f, 0 },
	{ -0.547341f, 0.774956f, -0.316007f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.316007f, 0.774956f, 0.547341f },
	{ -0.54734f, 0.7749569f, 0.316007f },
	{ 0, 0.7702619f, -0.637728f },
	{ 0.547341f, 0.774956f, 0.316007f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A855C = { vertex_000A7E9C, normal_000A81FC, LengthOfArray<Sint32>(vertex_000A7E9C), meshlist_000A7E3C, matlist_000A7A3C, LengthOfArray<Uint16>(meshlist_000A7E3C), LengthOfArray<Uint16>(matlist_000A7A3C), { 0, 21, 0 }, 239.0544f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A8584 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A855C, 0, 0, 0, 0, 0xAAA, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A85B8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A85CC[] = {
	9, 17, 19, 4, 16, 5, 20, 1, 18, 2,
	0x8000u | 8, 0, 11, 6, 12, 3, 13, 8, 7,
	13, 1, 0, 5, 11, 4, 12, 15, 13, 23, 7, 22, 9, 21,
	5, 15, 14, 4, 10, 17,
	5, 21, 14, 22, 15, 23
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A8628[] = {
	{ 440, 252 },
	{ 440, 93 },
	{ 718, -225 },
	{ 360, 13 },
	{ 320, -225 },
	{ 280, 93 },
	{ 2, -225 },
	{ 280, 252 },
	{ 2, 252 },
	{ 2, -424 },
	{ 320, -424 },
	{ 360, -702 },
	{ 718, -424 },
	{ 799, -702 },
	{ 997, -424 },
	{ 1272, -624 },
	{ 1272, -225 },
	{ 2, -225 },
	{ 2, -424 },
	{ 320, -225 },
	{ 320, -424 },
	{ 718, -225 },
	{ 718, -424 },
	{ 997, -225 },
	{ 997, -424 },
	{ 1113, -225 },
	{ 1272, -225 },
	{ 1113, -26 },
	{ 1272, 252 },
	{ 1113, 252 },
	{ 997, -225 },
	{ 997, 252 },
	{ 718, -225 },
	{ 718, 252 },
	{ 440, 252 },
	{ 1113, 252 },
	{ 997, 252 },
	{ 1113, -26 },
	{ 997, -225 },
	{ 1113, -225 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A86C8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_000A85CC, NULL, NULL, NULL, uv_000A8628, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A86E0[] = {
	{ 523.7114f, -276.6084f, 65.36086f },
	{ 524.2993f, -346.2532f, 16.15733f },
	{ 526.8553f, -467.7559f, -16.20993f },
	{ 749.3799f, -276.5922f, 213.6259f },
	{ 806.9017f, -366.237f, -14.3302f },
	{ 651.7726f, -346.237f, -66.91758f },
	{ 626.5423f, -276.5922f, 129.6452f },
	{ 846.5294f, -346.4493f, 354.8431f },
	{ 822.6083f, -276.8047f, 370.9905f },
	{ 831.3931f, -498.9404f, 363.0198f },
	{ 826.9823f, -498.7166f, -22.88357f },
	{ 648.1528f, -316.5923f, 15.14645f },
	{ 764.3547f, -316.5923f, 51.31536f },
	{ 848.9962f, -320.8047f, 204.7116f },
	{ 891.6786f, -504.9404f, 101.4521f },
	{ 884.7714f, -361.4493f, 125.3861f },
	{ 652.636f, -415.9768f, -80.577f },
	{ 671.8542f, -492.2166f, -68.38425f },
	{ 610.1076f, -476.7363f, -64.43114f },
	{ 671.8427f, -448.0967f, -75.10153f },
	{ 620.5948f, -425.3565f, -69.98352f },
	{ 861.5359f, -501.9404f, 232.236f },
	{ 858.0822f, -430.1949f, 244.2029f },
	{ 865.6504f, -353.9493f, 240.1146f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A8800[] = {
	{ 0.09423599f, 0.879387f, -0.466688f },
	{ -0.241868f, 0.5940289f, -0.767222f },
	{ -0.471494f, 0.217731f, -0.8545679f },
	{ 0.318236f, 0.927521f, -0.19604f },
	{ 0.570009f, 0.496429f, -0.654712f },
	{ 0.013213f, 0.557604f, -0.830002f },
	{ 0.149978f, 0.950081f, -0.273591f },
	{ 0.981098f, 0.151612f, 0.120253f },
	{ 0.809652f, 0.5863039f, -0.026657f },
	{ 0.980489f, -0.053947f, 0.189029f },
	{ 0.6548899f, 0.147123f, -0.741265f },
	{ 0.128042f, 0.891108f, -0.435352f },
	{ 0.306058f, 0.901961f, -0.304623f },
	{ 0.6497599f, 0.757252f, -0.066191f },
	{ 0.982491f, 0.08651999f, -0.165003f },
	{ 0.881864f, 0.442406f, -0.163075f },
	{ 0.06950399f, 0.192574f, -0.978818f },
	{ 0.392093f, -0.025758f, -0.919565f },
	{ -0.571378f, 0.125189f, -0.811083f },
	{ 0.428197f, 0.008609f, -0.903645f },
	{ -0.547907f, 0.139417f, -0.8248399f },
	{ 0.974457f, 0.009481999f, 0.224373f },
	{ 0.979571f, -0.039496f, 0.197183f },
	{ 0.9611199f, 0.235113f, 0.144814f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A8920 = { vertex_000A86E0, normal_000A8800, LengthOfArray<Sint32>(vertex_000A86E0), meshlist_000A86C8, matlist_000A85B8, LengthOfArray<Uint16>(meshlist_000A86C8), LengthOfArray<Uint16>(matlist_000A85B8), { 707.6949f, -390.7663f, 145.2067f }, 286.5031f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A8948 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A8920, -605, 431, 1620, 0, 0x3BF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A897C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A89B8[] = {
	6, 9, 10, 12, 11, 2, 3,
	6, 4, 3, 14, 11, 13, 10
};

extern "C" __declspec(dllexport) Sint16 poly_000A89D4[] = {
	6, 5, 6, 8, 7, 0, 1
};

extern "C" __declspec(dllexport) Sint16 poly_000A89E2[] = {
	6, 2, 1, 12, 7, 9, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A89F0[] = {
	{ 510, 0 },
	{ 508, 254 },
	{ 243, 0 },
	{ 244, 254 },
	{ 0 },
	{ 0, 254 },
	{ 0, 153 },
	{ 0, 255 },
	{ 244, 133 },
	{ 243, 255 },
	{ 508, 149 },
	{ 510, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A8A20[] = {
	{ 508, 0 },
	{ 508, 254 },
	{ 255, 0 },
	{ 255, 254 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A8A38[] = {
	{ 0, 254 },
	{ 0 },
	{ 255, 254 },
	{ 255, 0 },
	{ 508, 254 },
	{ 508, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A8A50[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000A89B8, NULL, NULL, NULL, uv_000A89F0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000A89D4, NULL, NULL, NULL, uv_000A8A20, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000A89E2, NULL, NULL, NULL, uv_000A8A38, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A8A98[] = {
	{ 339.89f, -276.7104f, -193.4053f },
	{ 340.0303f, -346.3552f, -242.2198f },
	{ 338.0681f, -468.266f, -261.4543f },
	{ 344.5972f, -577.6116f, -300.9047f },
	{ 342.9044f, -651, -324.2536f },
	{ 523.7114f, -276.6084f, 65.36078f },
	{ 524.2993f, -346.2532f, 16.15725f },
	{ 450.292f, -346.2532f, -131.5414f },
	{ 450.1516f, -276.6084f, -82.72689f },
	{ 526.8553f, -467.7559f, -16.21001f },
	{ 534.0931f, -577.1016f, -56.27634f },
	{ 459.3769f, -577.1016f, -203.359f },
	{ 452.8478f, -467.7559f, -163.9087f },
	{ 542.1132f, -651, -91.89169f },
	{ 467.3971f, -651, -238.9745f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A8B4C[] = {
	{ 0.634387f, 0.444538f, -0.632408f },
	{ 0.661587f, 0.271713f, -0.698909f },
	{ 0.632011f, 0.214119f, -0.744792f },
	{ 0.587459f, 0.29499f, -0.7535729f },
	{ 0.548333f, 0.242026f, -0.8004709f },
	{ 0.852525f, 0.306381f, -0.423476f },
	{ 0.8685189f, 0.24031f, -0.433505f },
	{ 0.772414f, 0.282342f, -0.568912f },
	{ 0.785421f, 0.357203f, -0.505489f },
	{ 0.880893f, 0.170886f, -0.44139f },
	{ 0.8642589f, 0.249579f, -0.436769f },
	{ 0.749356f, 0.309882f, -0.585183f },
	{ 0.779139f, 0.205748f, -0.592124f },
	{ 0.85036f, 0.300478f, -0.431972f },
	{ 0.7069359f, 0.340096f, -0.620142f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A8C00 = { vertex_000A8A98, normal_000A8B4C, LengthOfArray<Sint32>(vertex_000A8A98), meshlist_000A8A50, matlist_000A897C, LengthOfArray<Uint16>(meshlist_000A8A50), LengthOfArray<Uint16>(matlist_000A897C), { 440.0907f, -463.8042f, -129.4464f }, 263.6637f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A8C28 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A8C00, -605, 431, 1620, 0, 0x3BF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A8C5C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A8C84[] = {
	0x8000u | 10, 16, 17, 0, 4, 1, 5, 2, 6, 3, 7,
	0x8000u | 10, 17, 18, 4, 8, 5, 9, 6, 10, 7, 11,
	0x8000u | 10, 18, 19, 8, 12, 9, 13, 10, 14, 11, 15
};

extern "C" __declspec(dllexport) Sint16 poly_000A8CC6[] = {
	8, 20, 16, 21, 17, 22, 18, 23, 19
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A8CD8[] = {
	{ 172, -1020 },
	{ 0, -1020 },
	{ 180, -928 },
	{ 0, -932 },
	{ 179, -713 },
	{ 0, -713 },
	{ 172, -524 },
	{ 0, -525 },
	{ 165, -294 },
	{ 0, -296 },
	{ 2040, -1020 },
	{ 1696, -1020 },
	{ 2040, -864 },
	{ 1694, -832 },
	{ 2040, -482 },
	{ 1691, -460 },
	{ 2040, -149 },
	{ 1692, -138 },
	{ 2040, 255 },
	{ 1696, 255 },
	{ 1696, -1020 },
	{ 1368, -1020 },
	{ 1694, -832 },
	{ 1372, -844 },
	{ 1691, -460 },
	{ 1385, -468 },
	{ 1692, -138 },
	{ 1404, -142 },
	{ 1696, 255 },
	{ 1418, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A8D50[] = {
	{ 4772, 0 },
	{ 4825, 255 },
	{ 4558, 0 },
	{ 4584, 255 },
	{ 4303, 0 },
	{ 4321, 255 },
	{ 4053, 0 },
	{ 4069, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A8D70[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000A8C84, NULL, NULL, NULL, uv_000A8CD8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000A8CC6, NULL, NULL, NULL, uv_000A8D50, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A8DA0[] = {
	{ -655.0445f, 210, 378.1177f },
	{ -669.8347f, 100.0001f, 393.4214f },
	{ -693.2524f, 9.999994f, 417.6522f },
	{ -711.7401f, -105, 436.782f },
	{ -608.8912f, 210, 281.1179f },
	{ -622.5344f, 100.0001f, 298.0049f },
	{ -644.1358f, 9.999994f, 324.7424f },
	{ -661.1896f, -105, 345.8513f },
	{ -518.9692f, 209.9785f, 228.423f },
	{ -527.6566f, 99.99361f, 249.8256f },
	{ -541.4117f, 9.999994f, 283.7133f },
	{ -552.271f, -105, 310.4666f },
	{ -520.1934f, 209.3652f, 113.234f },
	{ -519.8295f, 99.59936f, 137.2296f },
	{ -519.2534f, 9.838856f, 175.2228f },
	{ -518.7986f, -105.0608f, 205.2175f },
	{ -646.4169f, 254.5896f, 369.1906f },
	{ -600.9328f, 253.2563f, 271.2672f },
	{ -513.9016f, 264.6073f, 215.9381f },
	{ -520.4057f, 259.869f, 99.23647f },
	{ -637.7894f, 299.1791f, 360.2634f },
	{ -615.3745f, 296.5053f, 261.4164f },
	{ -531.2341f, 319.1927f, 203.4531f },
	{ -543.0179f, 309.624f, 85.23891f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A8EC0[] = {
	{ 0.8972329f, -0.062606f, 0.437096f },
	{ 0.886805f, -0.072587f, 0.456408f },
	{ 0.876255f, -0.06564599f, 0.477356f },
	{ 0.872928f, -0.049991f, 0.485281f },
	{ 0.7290649f, 0.02402f, 0.684023f },
	{ 0.675798f, 0.067995f, 0.733944f },
	{ 0.663282f, 0.057624f, 0.746148f },
	{ 0.675976f, 0.043531f, 0.7356369f },
	{ 0.848991f, 0.05f, 0.526036f },
	{ 0.81494f, 0.085016f, 0.573276f },
	{ 0.721036f, 0.12981f, 0.680629f },
	{ 0.657964f, 0.11603f, 0.744056f },
	{ 0.998999f, -0.037997f, 0.023622f },
	{ 0.992517f, -0.010893f, 0.12162f },
	{ 0.970148f, 0.017669f, 0.24187f },
	{ 0.952495f, 0.031661f, 0.302904f },
	{ 0.939468f, 0.001424f, 0.342634f },
	{ 0.746874f, 0.145654f, 0.648818f },
	{ 0.878034f, 0.209917f, 0.430106f },
	{ 0.9824359f, 0.170985f, -0.074729f },
	{ 0.9699f, 0.110577f, 0.216948f },
	{ 0.771526f, 0.253103f, 0.583684f },
	{ 0.84531f, 0.390236f, 0.364921f },
	{ 0.936945f, 0.328243f, -0.119966f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A8FE0 = { vertex_000A8DA0, normal_000A8EC0, LengthOfArray<Sint32>(vertex_000A8DA0), meshlist_000A8D70, matlist_000A8C5C, LengthOfArray<Uint16>(meshlist_000A8D70), LengthOfArray<Uint16>(matlist_000A8C5C), { -612.8209f, 107.066f, 261.0105f }, 275.4875f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A9008 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A8FE0, 0, 0, 131, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A903C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A9064[] = {
	3, 2, 3, 7,
	0x8000u | 8, 23, 24, 12, 16, 13, 17, 14, 18,
	0x8000u | 8, 14, 10, 13, 9, 12, 8, 23, 22,
	0x8000u | 13, 21, 22, 4, 8, 5, 9, 6, 10, 11, 14, 15, 18, 19,
	0x8000u | 10, 11, 7, 6, 2, 5, 1, 4, 0, 21, 20
};

extern "C" __declspec(dllexport) Sint16 poly_000A90C2[] = {
	10, 25, 20, 26, 21, 27, 22, 28, 23, 29, 24
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A90D8[] = {
	{ 1404, -142 },
	{ 1418, 255 },
	{ 1057, 255 },
	{ 276, -1020 },
	{ 0, -1020 },
	{ 280, -868 },
	{ 0, -808 },
	{ 294, -484 },
	{ 0, -444 },
	{ 310, -150 },
	{ 0, -129 },
	{ 310, -150 },
	{ 652, -143 },
	{ 294, -484 },
	{ 612, -470 },
	{ 280, -868 },
	{ 590, -848 },
	{ 276, -1020 },
	{ 585, -1020 },
	{ 981, -1019 },
	{ 585, -1020 },
	{ 988, -813 },
	{ 590, -848 },
	{ 1004, -448 },
	{ 612, -470 },
	{ 1034, -130 },
	{ 652, -143 },
	{ 685, 255 },
	{ 310, -150 },
	{ 320, 255 },
	{ 0, -129 },
	{ 0, 255 },
	{ 685, 255 },
	{ 1057, 255 },
	{ 1034, -130 },
	{ 1404, -142 },
	{ 1004, -448 },
	{ 1385, -468 },
	{ 988, -813 },
	{ 1372, -844 },
	{ 981, -1019 },
	{ 1368, -1020 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A9180[] = {
	{ 4053, 0 },
	{ 4069, 255 },
	{ 3764, 0 },
	{ 3775, 255 },
	{ 3470, 0 },
	{ 3472, 255 },
	{ 3238, 0 },
	{ 3235, 255 },
	{ 3027, 0 },
	{ 3024, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A91A8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_000A9064, NULL, NULL, NULL, uv_000A90D8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000A90C2, NULL, NULL, NULL, uv_000A9180, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A91D8[] = {
	{ -520.1934f, 209.3652f, 113.234f },
	{ -519.8295f, 99.59936f, 137.2296f },
	{ -519.2534f, 9.838856f, 175.2228f },
	{ -518.7986f, -105.0608f, 205.2175f },
	{ -519.2822f, 207.7102f, -24.89785f },
	{ -526.2569f, 97.50972f, -2.537492f },
	{ -537.3002f, 7.409497f, 32.86682f },
	{ -546.0185f, -107.4468f, 60.81726f },
	{ -446.2079f, 209.9062f, -134.1828f },
	{ -449.0666f, 99.88273f, -110.4504f },
	{ -453.5926f, 9.842263f, -72.87394f },
	{ -457.1659f, -105.1883f, -43.20816f },
	{ -457.5756f, 209.7817f, -244.7671f },
	{ -444.2972f, 99.9204f, -227.4319f },
	{ -423.2733f, 9.996044f, -199.9843f },
	{ -406.6754f, -105, -178.3154f },
	{ -461.2471f, 209.7258f, -345.5093f },
	{ -443.6506f, 99.92495f, -335.908f },
	{ -415.7893f, -10.00023f, -320.7058f },
	{ -393.7934f, -105, -308.7041f },
	{ -520.4057f, 259.869f, 99.23647f },
	{ -515.2136f, 269.4875f, -37.94143f },
	{ -444.5405f, 259.1615f, -148.0268f },
	{ -465.3212f, 251.9754f, -254.8794f },
	{ -471.5118f, 273.5332f, -351.1101f },
	{ -543.0179f, 309.624f, 85.23891f },
	{ -533.5451f, 329.6444f, -50.98502f },
	{ -465.2729f, 308.1399f, -161.8708f },
	{ -495.4669f, 293.3393f, -264.9917f },
	{ -504.1764f, 336.2732f, -356.7109f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A9340[] = {
	{ 0.9990619f, -0.036625f, -0.023082f },
	{ 0.992632f, -0.079725f, -0.091245f },
	{ 0.985837f, -0.085118f, -0.144501f },
	{ 0.981864f, -0.044239f, -0.184353f },
	{ 0.956394f, 0.027438f, 0.290787f },
	{ 0.9523979f, 0.046492f, 0.301292f },
	{ 0.965899f, 0.013854f, 0.258546f },
	{ 0.9776109f, -0.002459f, 0.210405f },
	{ 0.953364f, 0.072601f, 0.292962f },
	{ 0.946199f, 0.063296f, 0.317335f },
	{ 0.877861f, 0.147749f, 0.455555f },
	{ 0.8464119f, 0.125491f, 0.517531f },
	{ 0.994949f, 0.09680399f, -0.026565f },
	{ 0.987175f, 0.151613f, 0.049984f },
	{ 0.96012f, 0.219178f, 0.17358f },
	{ 0.958417f, 0.160781f, 0.235766f },
	{ 0.988286f, 0.151742f, -0.016285f },
	{ 0.982196f, 0.18744f, 0.012535f },
	{ 0.974189f, 0.217766f, 0.059451f },
	{ 0.976081f, 0.19485f, 0.096433f },
	{ 0.98983f, 0.132091f, 0.052815f },
	{ 0.924516f, 0.23318f, 0.301491f },
	{ 0.958774f, 0.240528f, 0.151324f },
	{ 0.955371f, 0.279936f, -0.094354f },
	{ 0.916406f, 0.390412f, 0.088195f },
	{ 0.9205599f, 0.372126f, 0.118705f },
	{ 0.8751349f, 0.390078f, 0.286318f },
	{ 0.9015729f, 0.429637f, 0.050772f },
	{ 0.8689809f, 0.494633f, -0.014509f },
	{ 0.832646f, 0.5277219f, 0.16796f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A94A8 = { vertex_000A91D8, normal_000A9340, LengthOfArray<Sint32>(vertex_000A91D8), meshlist_000A91A8, matlist_000A903C, LengthOfArray<Uint16>(meshlist_000A91A8), LengthOfArray<Uint16>(matlist_000A903C), { -469.9059f, 114.4132f, -75.74673f }, 357.9983f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A94D0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A94A8, 0, 0, 131, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A9504[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A952C[] = {
	0x8000u | 6, 0, 3, 1, 4, 2, 5,
	10, 14, 24, 9, 18, 6, 17, 3, 16, 0, 15,
	8, 4, 5, 7, 8, 10, 11, 13, 12,
	8, 3, 4, 6, 7, 9, 10, 14, 13
};

extern "C" __declspec(dllexport) Sint16 poly_000A9574[] = {
	10, 20, 15, 21, 16, 22, 17, 23, 18, 19, 24
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A958C[] = {
	{ 406, -632 },
	{ 410, -414 },
	{ 189, -641 },
	{ 190, -426 },
	{ 0, -636 },
	{ 0, -420 },
	{ 376, 255 },
	{ 508, 255 },
	{ 406, 26 },
	{ 508, 35 },
	{ 404, -214 },
	{ 508, -206 },
	{ 410, -414 },
	{ 510, -412 },
	{ 406, -632 },
	{ 508, -628 },
	{ 190, -426 },
	{ 0, -420 },
	{ 188, -238 },
	{ 0, -240 },
	{ 188, -4 },
	{ 0, -9 },
	{ 201, 255 },
	{ 0, 255 },
	{ 410, -414 },
	{ 190, -426 },
	{ 404, -214 },
	{ 188, -238 },
	{ 406, 26 },
	{ 188, -4 },
	{ 376, 255 },
	{ 201, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A960C[] = {
	{ 1017, 0 },
	{ 1073, 255 },
	{ 767, 0 },
	{ 812, 255 },
	{ 517, 0 },
	{ 561, 255 },
	{ 232, 0 },
	{ 266, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A9634[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000A952C, NULL, NULL, NULL, uv_000A958C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000A9574, NULL, NULL, NULL, uv_000A960C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A9664[] = {
	{ -269.4922f, 294.8207f, -1030.206f },
	{ -288.3112f, 184.5919f, -1025.449f },
	{ -318.1081f, 93.8116f, -1017.917f },
	{ -184.3936f, 293.6825f, -1094.204f },
	{ -203.4526f, 183.9512f, -1097.107f },
	{ -233.6294f, 94.36817f, -1101.704f },
	{ -108.5437f, 294.5746f, -1028.772f },
	{ -124.2838f, 184.3733f, -1042.515f },
	{ -149.2057f, 94.03107f, -1064.276f },
	{ -16.26109f, 294.9995f, -952.7761f },
	{ -35.00244f, 184.9999f, -957.9908f },
	{ -64.67622f, 94.9976f, -966.2469f },
	{ 64.50523f, 79.78482f, -939.5106f },
	{ 88.4955f, 194.2634f, -967.0007f },
	{ 87.21415f, 299.2365f, -970.6661f },
	{ -258.5143f, 346.734f, -1035.981f },
	{ -173.2758f, 367.5608f, -1092.511f },
	{ -99.36198f, 347.7229f, -1020.755f },
	{ -5.328627f, 346.7114f, -949.7344f },
	{ 85.20869f, 424.364f, -1005.978f },
	{ -250.7365f, 398.5136f, -1065.755f },
	{ -165.3581f, 415.3912f, -1117.818f },
	{ -93.38023f, 400.381f, -1039.737f },
	{ 2.403822f, 398.4033f, -973.6927f },
	{ 90.41737f, 379.3078f, -961.5027f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A9790[] = {
	{ 0.622724f, -0.093174f, 0.7768739f },
	{ 0.669385f, -0.168751f, 0.723496f },
	{ 0.688054f, -0.217521f, 0.6922899f },
	{ 0.003403f, -0.034298f, 0.999406f },
	{ 0.08893099f, -0.08783299f, 0.992158f },
	{ 0.281812f, -0.158245f, 0.94633f },
	{ -0.6409799f, 0.040757f, 0.7664739f },
	{ -0.627915f, 0.053259f, 0.776457f },
	{ -0.554607f, 0.041873f, 0.831058f },
	{ -0.302098f, -0.005931f, 0.953258f },
	{ -0.412052f, 0.083256f, 0.907348f },
	{ -0.541454f, 0.135748f, 0.829699f },
	{ -0.184839f, 0.140008f, 0.9727449f },
	{ -0.04025f, 0.0547f, 0.997691f },
	{ 0.125504f, -0.062805f, 0.9901029f },
	{ 0.555881f, 0.07733399f, 0.827657f },
	{ -0.105949f, 0.283538f, 0.95309f },
	{ -0.619719f, 0.205609f, 0.757412f },
	{ -0.252864f, 0.186493f, 0.949358f },
	{ -0.096521f, 0.576454f, 0.811409f },
	{ 0.423292f, 0.386434f, 0.819446f },
	{ -0.174199f, 0.455115f, 0.8732269f },
	{ -0.590158f, 0.383422f, 0.710423f },
	{ -0.293606f, 0.503552f, 0.8125449f },
	{ 0.013559f, 0.322547f, 0.946456f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A98BC = { vertex_000A9664, normal_000A9790, LengthOfArray<Sint32>(vertex_000A9664), meshlist_000A9634, matlist_000A9504, LengthOfArray<Uint16>(meshlist_000A9634), LengthOfArray<Uint16>(matlist_000A9504), { -113.8454f, 252.0744f, -1028.664f }, 222.8713f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A98E4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A98BC, 0, 0, 131, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A9918[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A9954[] = {
	3, 1, 2, 17,
	8, 12, 11, 8, 7, 4, 3, 15, 19,
	8, 13, 12, 9, 8, 5, 4, 16, 15,
	13, 14, 13, 10, 9, 6, 5, 17, 16, 1, 15, 0, 19, 18
};

extern "C" __declspec(dllexport) Sint16 poly_000A999C[] = {
	10, 22, 18, 26, 19, 23, 3, 24, 20, 25, 21
};

extern "C" __declspec(dllexport) Sint16 poly_000A99B2[] = {
	0x8000u | 5, 3, 20, 7, 21, 11
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A99C0[] = {
	{ 1529, -16 },
	{ 1530, 255 },
	{ 1345, 255 },
	{ 525, -249 },
	{ 508, -510 },
	{ 807, -249 },
	{ 784, -510 },
	{ 1080, -248 },
	{ 1048, -510 },
	{ 1324, -370 },
	{ 1317, -510 },
	{ 545, -22 },
	{ 525, -249 },
	{ 831, -21 },
	{ 807, -249 },
	{ 1115, -21 },
	{ 1080, -248 },
	{ 1330, -35 },
	{ 1324, -370 },
	{ 534, 255 },
	{ 545, -22 },
	{ 812, 255 },
	{ 831, -21 },
	{ 1096, 255 },
	{ 1115, -21 },
	{ 1345, 255 },
	{ 1330, -35 },
	{ 1529, -16 },
	{ 1324, -370 },
	{ 1530, -328 },
	{ 1317, -510 },
	{ 1530, -508 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A9A40[] = {
	{ 3027, 0 },
	{ 3024, 255 },
	{ 2814, 0 },
	{ 2824, 255 },
	{ 2524, 0 },
	{ 2570, 255 },
	{ 2261, 0 },
	{ 2283, 255 },
	{ 2008, 0 },
	{ 2024, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A9A68[] = {
	{ 765, 248 },
	{ 534, 201 },
	{ 557, 247 },
	{ 350, 200 },
	{ 370, 246 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A9A7C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000A9954, NULL, NULL, NULL, uv_000A99C0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000A999C, NULL, NULL, NULL, uv_000A9A40, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000A99B2, NULL, NULL, NULL, uv_000A9A68, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A9AC4[] = {
	{ -461.2471f, 209.7258f, -345.5093f },
	{ -443.6506f, 99.92495f, -335.908f },
	{ -415.7893f, -10.00023f, -320.7058f },
	{ -531.2958f, 291.2286f, -537.9625f },
	{ -530.0452f, 181.3451f, -514.0133f },
	{ -528.0653f, 91.52448f, -476.0941f },
	{ -526.5021f, -23.33807f, -446.1578f },
	{ -523.7695f, 291.8925f, -653.5051f },
	{ -530.9169f, 181.2641f, -631.2299f },
	{ -542.2337f, 90.10285f, -595.9608f },
	{ -551.1678f, -25.96746f, -568.117f },
	{ -475.8704f, 293.0165f, -758.581f },
	{ -486.8804f, 183.1839f, -738.9191f },
	{ -504.313f, 92.94067f, -707.7878f },
	{ -518.0756f, -22.73435f, -683.2103f },
	{ -498.5833f, 208.5453f, -420.1736f },
	{ -485.5213f, 99.1043f, -402.5835f },
	{ -464.8396f, -10.33748f, -374.7329f },
	{ -471.5118f, 273.5332f, -351.1101f },
	{ -506.203f, 252.7255f, -430.4345f },
	{ -519.6003f, 326.8151f, -666.4988f },
	{ -469.4478f, 327.1873f, -770.0505f },
	{ -504.1764f, 336.2732f, -356.7109f },
	{ -571.9548f, 334.5216f, -565.9029f },
	{ -532.2309f, 360.287f, -679.4926f },
	{ -479.8252f, 360.5239f, -781.5201f },
	{ -536.2225f, 294.934f, -440.6954f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A9C08[] = {
	{ 0.867297f, 0.06592499f, -0.493407f },
	{ 0.8267649f, 0.050565f, -0.56027f },
	{ 0.736803f, 0.094156f, -0.6695189f },
	{ 0.935816f, 0.352484f, 0.002045f },
	{ 0.971085f, -0.058082f, -0.231561f },
	{ 0.92116f, -0.085531f, -0.379669f },
	{ 0.886157f, -0.08814199f, -0.454924f },
	{ 0.977385f, -0.035824f, 0.208411f },
	{ 0.98627f, -0.038715f, 0.16054f },
	{ 0.9958709f, -0.06422599f, 0.06416199f },
	{ 0.998105f, -0.06142f, 0.003839f },
	{ 0.916532f, 0.00261f, 0.399953f },
	{ 0.934554f, -0.015626f, 0.355478f },
	{ 0.952648f, -0.032434f, 0.302339f },
	{ 0.960813f, -0.031812f, 0.275365f },
	{ 0.894846f, 0.014666f, -0.446134f },
	{ 0.830471f, -0.022806f, -0.556594f },
	{ 0.77475f, 0.001162f, -0.632266f },
	{ 0.845786f, 0.242445f, -0.475254f },
	{ 0.902198f, 0.227756f, -0.366287f },
	{ 0.869905f, 0.320402f, 0.374978f },
	{ 0.8669969f, 0.261926f, 0.423924f },
	{ 0.779057f, 0.391283f, -0.489866f },
	{ 0.699984f, 0.66035f, 0.271956f },
	{ 0.7500229f, 0.524676f, 0.402717f },
	{ 0.8034509f, 0.428177f, 0.413681f },
	{ 0.8044299f, 0.549746f, -0.225105f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A9D4C = { vertex_000A9AC4, normal_000A9C08, LengthOfArray<Sint32>(vertex_000A9AC4), meshlist_000A9A7C, matlist_000A9918, LengthOfArray<Uint16>(meshlist_000A9A7C), LengthOfArray<Uint16>(matlist_000A9918), { -493.872f, 167.2782f, -551.1129f }, 300.718f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A9D74 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A9D4C, 0, 0, 131, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A9DA8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A9DE4[] = {
	0x8000u | 8, 17, 14, 16, 13, 15, 12, 22, 21,
	0x8000u | 8, 0, 4, 1, 5, 2, 6, 3, 7,
	0x8000u | 8, 4, 8, 5, 9, 6, 10, 7, 11,
	0x8000u | 8, 20, 21, 8, 12, 9, 13, 10, 14
};

extern "C" __declspec(dllexport) Sint16 poly_000A9E2C[] = {
	6, 8, 20, 4, 19, 0, 18
};

extern "C" __declspec(dllexport) Sint16 poly_000A9E3A[] = {
	10, 23, 18, 24, 19, 25, 20, 26, 21, 27, 22
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A9E50[] = {
	{ 0, -636 },
	{ 0, -816 },
	{ 189, -641 },
	{ 193, -828 },
	{ 406, -632 },
	{ 410, -828 },
	{ 508, -628 },
	{ 510, -828 },
	{ 508, -510 },
	{ 248, -510 },
	{ 525, -249 },
	{ 256, -248 },
	{ 545, -22 },
	{ 264, -21 },
	{ 534, 255 },
	{ 258, 255 },
	{ 248, -510 },
	{ 0, -510 },
	{ 256, -248 },
	{ 0, -247 },
	{ 264, -21 },
	{ 0, -20 },
	{ 258, 255 },
	{ 0, 255 },
	{ 510, -1020 },
	{ 510, -828 },
	{ 420, -1020 },
	{ 410, -828 },
	{ 194, -1020 },
	{ 193, -828 },
	{ 0, -1020 },
	{ 0, -816 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A9ED0[] = {
	{ 22, 255 },
	{ 0, 198 },
	{ 216, 248 },
	{ 193, 191 },
	{ 370, 246 },
	{ 350, 200 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A9EE8[] = {
	{ 2008, 0 },
	{ 2024, 255 },
	{ 1770, 0 },
	{ 1780, 255 },
	{ 1546, 0 },
	{ 1548, 255 },
	{ 1254, 0 },
	{ 1315, 255 },
	{ 1017, 0 },
	{ 1073, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A9F10[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000A9DE4, NULL, NULL, NULL, uv_000A9E50, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000A9E2C, NULL, NULL, NULL, uv_000A9ED0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000A9E3A, NULL, NULL, NULL, uv_000A9EE8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A9F58[] = {
	{ -475.8704f, 293.0165f, -758.581f },
	{ -486.8804f, 183.1839f, -738.9191f },
	{ -504.313f, 92.94067f, -707.7878f },
	{ -518.0756f, -22.73435f, -683.2103f },
	{ -415.9202f, 291.5154f, -844.5587f },
	{ -422.2724f, 182.2451f, -821.9101f },
	{ -432.3301f, 93.35718f, -786.05f },
	{ -440.2704f, -20.97661f, -757.7395f },
	{ -416.6003f, 286.5804f, -953.4622f },
	{ -425.3213f, 176.317f, -932.0809f },
	{ -439.1296f, 86.56051f, -898.2271f },
	{ -450.0309f, -27.68108f, -871.5005f },
	{ -359.647f, 291.5826f, -1036.323f },
	{ -378.0532f, 180.0052f, -1029.493f },
	{ -407.1963f, 86.68221f, -1018.68f },
	{ -269.4922f, 294.8207f, -1030.206f },
	{ -288.3112f, 184.5919f, -1025.449f },
	{ -318.1081f, 93.8116f, -1017.917f },
	{ -469.4478f, 327.1873f, -770.0505f },
	{ -412.2147f, 334.3868f, -857.7702f },
	{ -411.513f, 328.9364f, -965.9347f },
	{ -348.9101f, 340.9864f, -1040.307f },
	{ -258.5143f, 346.734f, -1035.981f },
	{ -479.8252f, 360.5239f, -781.5201f },
	{ -425.3094f, 376.0722f, -870.9817f },
	{ -423.2257f, 369.084f, -978.4073f },
	{ -341.3731f, 390.2622f, -1071.291f },
	{ -250.7365f, 398.5136f, -1065.755f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000AA0A8[] = {
	{ 0.800928f, 0.063681f, 0.595364f },
	{ 0.788075f, 0.057814f, 0.612858f },
	{ 0.7168429f, 0.108624f, 0.6887209f },
	{ 0.687041f, 0.100641f, 0.719615f },
	{ 0.9497319f, -0.007873f, 0.312964f },
	{ 0.955153f, -0.023792f, 0.295157f },
	{ 0.932378f, 0.022582f, 0.360779f },
	{ 0.910827f, 0.014231f, 0.412544f },
	{ 0.96846f, -0.07274999f, 0.238312f },
	{ 0.98062f, -0.115583f, 0.158194f },
	{ 0.989949f, -0.139801f, 0.021383f },
	{ 0.991752f, -0.100808f, -0.07915f },
	{ 0.477227f, 0.019408f, 0.878566f },
	{ 0.528662f, -0.004807f, 0.848819f },
	{ 0.710857f, -0.06876899f, 0.699966f },
	{ -0.061242f, 0.08895499f, 0.994151f },
	{ -0.035471f, 0.07804599f, 0.996319f },
	{ -0.016878f, 0.104491f, 0.994383f },
	{ 0.800591f, 0.214375f, 0.5595509f },
	{ 0.944023f, 0.174095f, 0.280199f },
	{ 0.93115f, 0.132951f, 0.339534f },
	{ 0.37608f, 0.283874f, 0.882031f },
	{ -0.089397f, 0.354601f, 0.930734f },
	{ 0.747001f, 0.406724f, 0.525894f },
	{ 0.905224f, 0.354658f, 0.234066f },
	{ 0.846194f, 0.349203f, 0.402508f },
	{ 0.173876f, 0.502907f, 0.846671f },
	{ -0.099354f, 0.523747f, 0.84606f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000AA1F8 = { vertex_000A9F58, normal_000AA0A8, LengthOfArray<Sint32>(vertex_000A9F58), meshlist_000A9F10, matlist_000A9DA8, LengthOfArray<Uint16>(meshlist_000A9F10), LengthOfArray<Uint16>(matlist_000A9DA8), { -384.4061f, 185.4163f, -877.2508f }, 288.205f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000AA220 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000AA1F8, 0, 0, 131, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000AA254[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000AA27C[] = {
	0x8000u | 10, 20, 21, 19, 15, 18, 14, 17, 13, 16, 12,
	0x8000u | 10, 21, 22, 15, 11, 14, 10, 13, 9, 12, 8,
	0x8000u | 10, 22, 23, 11, 7, 10, 6, 9, 5, 8, 4,
	0x8000u | 10, 23, 24, 7, 3, 6, 2, 5, 1, 4, 0
};

extern "C" __declspec(dllexport) Sint16 poly_000AA2D4[] = {
	10, 29, 20, 28, 21, 27, 22, 26, 23, 25, 24
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AA2EC[] = {
	{ 1530, -1275 },
	{ 1243, -1275 },
	{ 1530, -1195 },
	{ 1242, -1173 },
	{ 1530, -996 },
	{ 1235, -977 },
	{ 1530, -752 },
	{ 1237, -737 },
	{ 1530, -474 },
	{ 1257, -464 },
	{ 1243, -1275 },
	{ 1005, -1275 },
	{ 1242, -1173 },
	{ 1004, -1163 },
	{ 1235, -977 },
	{ 1000, -968 },
	{ 1237, -737 },
	{ 1001, -729 },
	{ 1257, -464 },
	{ 1016, -458 },
	{ 1005, -1275 },
	{ 752, -1275 },
	{ 1004, -1163 },
	{ 750, -1163 },
	{ 1000, -968 },
	{ 746, -969 },
	{ 1001, -729 },
	{ 748, -729 },
	{ 1016, -458 },
	{ 760, -460 },
	{ 752, -1275 },
	{ 496, -1275 },
	{ 750, -1163 },
	{ 496, -1155 },
	{ 746, -969 },
	{ 494, -963 },
	{ 748, -729 },
	{ 496, -725 },
	{ 760, -460 },
	{ 498, -456 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AA38C[] = {
	{ 4402, 0 },
	{ 4368, 255 },
	{ 4769, 0 },
	{ 4743, 255 },
	{ 5076, 0 },
	{ 5055, 255 },
	{ 5404, 0 },
	{ 5387, 255 },
	{ 5734, 0 },
	{ 5723, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000AA3B4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000AA27C, NULL, NULL, NULL, uv_000AA2EC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000AA2D4, NULL, NULL, NULL, uv_000AA38C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000AA3E4[] = {
	{ 930.0106f, -134.9998f, 165.8686f },
	{ 953.9473f, -19.99978f, 168.0453f },
	{ 957.1387f, 85.00027f, 168.3356f },
	{ 949.1597f, 170.0003f, 167.61f },
	{ 833.256f, -135.0001f, 154.6979f },
	{ 856.1705f, -19.99999f, 163.6174f },
	{ 859.2256f, 85.00003f, 164.8068f },
	{ 851.5873f, 170.0001f, 161.8337f },
	{ 751.7299f, -135.25f, 92.76259f },
	{ 775.7202f, -20.225f, 93.61391f },
	{ 778.9188f, 84.7788f, 93.7272f },
	{ 770.9219f, 169.7695f, 93.4435f },
	{ 668.3003f, -135.0003f, 134.9543f },
	{ 691.9833f, -20.00024f, 139.8129f },
	{ 695.141f, 84.99978f, 140.4608f },
	{ 687.2465f, 169.9999f, 138.8412f },
	{ 566.7911f, -135.0003f, 133.5353f },
	{ 580.2904f, -20.00037f, 158.34f },
	{ 582.0903f, 84.99978f, 161.6472f },
	{ 577.5904f, 169.9998f, 153.3791f },
	{ 575.7904f, 204.0962f, 150.0717f },
	{ 684.0887f, 213.8119f, 138.1934f },
	{ 767.7232f, 218.7079f, 93.32999f },
	{ 848.532f, 218.2004f, 160.6443f },
	{ 945.9682f, 221.9729f, 167.3197f },
	{ 942.7766f, 273.9456f, 167.0295f },
	{ 845.4769f, 266.4007f, 159.4551f },
	{ 764.5245f, 267.6463f, 93.21651f },
	{ 680.931f, 257.6239f, 137.5456f },
	{ 573.9906f, 238.1926f, 146.7644f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000AA54C[] = {
	{ -0.045206f, -0.03895f, 0.998218f },
	{ -0.040251f, -0.02115f, 0.998966f },
	{ -0.047317f, 0.004926f, 0.998868f },
	{ -0.059092f, 0.013802f, 0.998157f },
	{ -0.412231f, 0.042741f, 0.910076f },
	{ -0.353597f, 0.014346f, 0.935288f },
	{ -0.359413f, -0.004329f, 0.933168f },
	{ -0.374477f, -0.01335f, 0.92714f },
	{ -0.029974f, -0.026991f, 0.999186f },
	{ -0.138734f, 0.00027f, 0.99033f },
	{ -0.127465f, 0.000725f, 0.991843f },
	{ -0.097831f, 0.006206f, 0.9951839f },
	{ 0.306739f, -0.140139f, 0.94142f },
	{ 0.340935f, -0.078315f, 0.936819f },
	{ 0.330504f, 0.020305f, 0.943586f },
	{ 0.30794f, 0.055904f, 0.949762f },
	{ 0.161741f, -0.151903f, 0.975072f },
	{ 0.173003f, -0.08938199f, 0.980857f },
	{ 0.157666f, 0.022471f, 0.987237f },
	{ 0.131168f, 0.06273299f, 0.989373f },
	{ 0.10435f, 0.057047f, 0.992903f },
	{ 0.292336f, 0.049144f, 0.955052f },
	{ -0.101917f, 0.005192f, 0.994779f },
	{ -0.372681f, -0.010764f, 0.927897f },
	{ -0.068592f, 0.010457f, 0.9975899f },
	{ -0.078366f, 0.009835999f, 0.9968759f },
	{ -0.378749f, -0.011196f, 0.925432f },
	{ -0.098014f, 0.005423f, 0.99517f },
	{ 0.285944f, 0.047797f, 0.9570529f },
	{ 0.075765f, 0.055363f, 0.9955879f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000AA6B4 = { vertex_000AA3E4, normal_000AA54C, LengthOfArray<Sint32>(vertex_000AA3E4), meshlist_000AA3B4, matlist_000AA254, LengthOfArray<Uint16>(meshlist_000AA3B4), LengthOfArray<Uint16>(matlist_000AA254), { 761.9649f, 69.34779f, 130.5491f }, 208.0579f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000AA6DC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000AA6B4, 0, 0, 131, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000AA710[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000AA74C[] = {
	10, 26, 27, 21, 18, 22, 19, 23, 11, 25, 20
};

extern "C" __declspec(dllexport) Sint16 poly_000AA762[] = {
	3, 9, 8, 16,
	10, 17, 20, 10, 11, 6, 7, 2, 3, 14, 24,
	0x8000u | 5, 10, 17, 9, 15, 16,
	5, 10, 5, 9, 4, 8,
	7, 10, 6, 5, 2, 1, 13, 12,
	3, 2, 14, 13,
	5, 12, 0, 1, 4, 5
};

extern "C" __declspec(dllexport) Sint16 poly_000AA7BC[] = {
	3, 19, 7, 11,
	4, 7, 19, 3, 18,
	4, 3, 18, 24, 27
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AA7D8[] = {
	{ 0 },
	{ 0, 255 },
	{ 521, 0 },
	{ 444, 255 },
	{ 888, 0 },
	{ 817, 254 },
	{ 1187, 0 },
	{ 1121, 255 },
	{ 1577, 0 },
	{ 1514, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AA800[] = {
	{ 282, -136 },
	{ 278, 255 },
	{ 0, 255 },
	{ 0, -606 },
	{ 0, -764 },
	{ 282, -482 },
	{ 288, -765 },
	{ 504, -482 },
	{ 512, -765 },
	{ 789, -482 },
	{ 788, -765 },
	{ 1020, -496 },
	{ 1019, -764 },
	{ 282, -482 },
	{ 0, -606 },
	{ 282, -136 },
	{ 0, -203 },
	{ 0, 255 },
	{ 282, -482 },
	{ 506, -136 },
	{ 282, -136 },
	{ 508, 255 },
	{ 278, 255 },
	{ 282, -482 },
	{ 504, -482 },
	{ 506, -136 },
	{ 789, -482 },
	{ 788, -136 },
	{ 1020, -148 },
	{ 1020, 255 },
	{ 789, -482 },
	{ 1020, -496 },
	{ 1020, -148 },
	{ 1020, 255 },
	{ 771, 255 },
	{ 788, -136 },
	{ 508, 255 },
	{ 506, -136 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AA898[] = {
	{ 0 },
	{ 0, 111 },
	{ 254, 55 },
	{ 254, 111 },
	{ 254, 0 },
	{ 0, 111 },
	{ 0 },
	{ 254, 111 },
	{ 254, 0 },
	{ 0, 111 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000AA8C4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000AA74C, NULL, NULL, NULL, uv_000AA7D8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 7, poly_000AA762, NULL, NULL, NULL, uv_000AA800, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_000AA7BC, NULL, NULL, NULL, uv_000AA898, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000AA90C[] = {
	{ 98.02753f, 79.99567f, -827.012f },
	{ 85.55968f, 194.9779f, -852.6462f },
	{ 83.89724f, 299.9746f, -856.0642f },
	{ 88.05316f, 384.9827f, -847.5193f },
	{ 137.0689f, 80.00001f, -709.8771f },
	{ 113.6152f, 195, -716.2424f },
	{ 110.4881f, 300, -717.091f },
	{ 118.3059f, 385, -714.9692f },
	{ 225.8627f, 79.99001f, -718.955f },
	{ 202.0491f, 194.9972f, -722.6885f },
	{ 198.8739f, 299.9979f, -723.1862f },
	{ 206.8117f, 384.9963f, -721.9416f },
	{ 64.50523f, 79.78482f, -939.5106f },
	{ 88.4955f, 194.2634f, -967.0007f },
	{ 87.21416f, 299.2365f, -970.6661f },
	{ 291.5713f, 195.0001f, -637.4467f },
	{ 315.1118f, 80.00001f, -643.2895f },
	{ 288.4325f, 300.0002f, -636.6677f },
	{ 89.71553f, 422.922f, -844.1014f },
	{ 121.433f, 413.1959f, -714.1205f },
	{ 292.3559f, 340.4476f, -637.6414f },
	{ 97.77786f, 460.8319f, -858.6837f },
	{ 130.9601f, 441.3918f, -731.272f },
	{ 219.5619f, 437.0385f, -738.9462f },
	{ 90.41737f, 379.3078f, -961.5027f },
	{ 302.6793f, 380.8947f, -656.6151f },
	{ 80.00002f, 469.4202f, -1050.453f },
	{ 85.20869f, 424.364f, -1005.978f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000AAA5C[] = {
	{ -0.984786f, 0.000072f, 0.173774f },
	{ -0.995495f, -0.016705f, 0.09333199f },
	{ -0.996057f, 0.017529f, 0.086964f },
	{ -0.994462f, 0.024563f, 0.102184f },
	{ -0.513633f, -0.027731f, 0.8575619f },
	{ -0.629465f, -0.052952f, 0.775223f },
	{ -0.620384f, 0.003677f, 0.78429f },
	{ -0.594903f, 0.015422f, 0.80365f },
	{ -0.355382f, -0.037897f, 0.933952f },
	{ -0.312171f, -0.020334f, 0.9498079f },
	{ -0.325033f, 0.0053f, 0.9456879f },
	{ -0.256747f, 0.234243f, 0.937663f },
	{ -0.998689f, 0.044149f, -0.025915f },
	{ -0.99955f, 0.01199f, -0.027513f },
	{ -0.9995469f, 0.015069f, -0.026042f },
	{ -0.688509f, -0.101847f, 0.71804f },
	{ -0.662188f, -0.14321f, 0.735526f },
	{ -0.6946329f, 0.021589f, 0.71904f },
	{ -0.9762909f, 0.141079f, 0.164171f },
	{ -0.531423f, 0.236191f, 0.813513f },
	{ -0.626107f, 0.201786f, 0.753175f },
	{ -0.964176f, 0.204705f, 0.168702f },
	{ -0.524754f, 0.455388f, 0.719205f },
	{ -0.168674f, 0.408968f, 0.896825f },
	{ -0.999752f, -0.009203f, -0.020278f },
	{ -0.479912f, 0.419466f, 0.77054f },
	{ -0.990037f, 0.102657f, 0.096378f },
	{ -0.995601f, 0.064399f, 0.068053f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000AABAC = { vertex_000AA90C, normal_000AAA5C, LengthOfArray<Sint32>(vertex_000AA90C), meshlist_000AA8C4, matlist_000AA710, LengthOfArray<Uint16>(meshlist_000AA8C4), LengthOfArray<Uint16>(matlist_000AA710), { 189.8085f, 274.6025f, -843.5602f }, 284.1802f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000AABD4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000AABAC, 0, 0, 131, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000AAC08[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000AAC30[] = {
	8, 5, 18, 8, 17, 11, 16, 14, 15,
	0x8000u | 8, 18, 19, 5, 2, 4, 1, 3, 0,
	8, 13, 12, 10, 9, 7, 6, 4, 3,
	8, 4, 5, 7, 8, 10, 11, 13, 14
};

extern "C" __declspec(dllexport) Sint16 poly_000AAC78[] = {
	10, 19, 20, 18, 21, 17, 24, 16, 22, 15, 23
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AAC90[] = {
	{ 280, -392 },
	{ 274, -510 },
	{ 632, -328 },
	{ 624, -510 },
	{ 916, -362 },
	{ 904, -510 },
	{ 1290, -354 },
	{ 1269, -510 },
	{ 274, -510 },
	{ 0, -510 },
	{ 280, -392 },
	{ 0, -392 },
	{ 278, -102 },
	{ 0, -102 },
	{ 264, 255 },
	{ 0, 255 },
	{ 1297, -81 },
	{ 1232, 255 },
	{ 920, -86 },
	{ 875, 255 },
	{ 634, -66 },
	{ 602, 255 },
	{ 278, -102 },
	{ 264, 255 },
	{ 278, -102 },
	{ 280, -392 },
	{ 634, -66 },
	{ 632, -328 },
	{ 920, -86 },
	{ 916, -362 },
	{ 1297, -81 },
	{ 1290, -354 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AAD10[] = {
	{ 4368, 255 },
	{ 4402, 0 },
	{ 4064, 255 },
	{ 4103, 0 },
	{ 3678, 255 },
	{ 3744, 0 },
	{ 3365, 255 },
	{ 3428, 0 },
	{ 2962, 255 },
	{ 3032, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000AAD38[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000AAC30, NULL, NULL, NULL, uv_000AAC90, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000AAC78, NULL, NULL, NULL, uv_000AAD10, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000AAD68[] = {
	{ 580.2904f, -20.00037f, 158.34f },
	{ 582.0903f, 84.99978f, 161.6472f },
	{ 577.5904f, 169.9998f, 153.3791f },
	{ 551.9771f, -20.59285f, 53.41809f },
	{ 553.5345f, 84.47271f, 56.91223f },
	{ 549.6406f, 169.3018f, 48.17689f },
	{ 455.2364f, -20.57694f, -18.4518f },
	{ 455.8329f, 84.45825f, -14.52211f },
	{ 454.3411f, 169.3686f, -24.34658f },
	{ 446.5141f, -21.91579f, -131.1867f },
	{ 445.5655f, 83.19467f, -127.3664f },
	{ 447.9366f, 167.9115f, -136.9172f },
	{ 504.8021f, -32.86377f, -260.4172f },
	{ 505.0889f, 72.1037f, -256.4333f },
	{ 504.3714f, 157.1933f, -266.393f },
	{ 504.0844f, 205.4272f, -270.3769f },
	{ 448.8851f, 212.7419f, -140.7374f },
	{ 453.7444f, 228.39f, -28.27651f },
	{ 548.0829f, 203.2293f, 44.68262f },
	{ 575.7904f, 204.0962f, 150.0717f },
	{ 573.9906f, 238.1926f, 146.7644f },
	{ 546.5253f, 237.1533f, 41.18835f },
	{ 464.2335f, 256.345f, -144.5575f },
	{ 518.1974f, 249.6196f, -274.3608f },
	{ 467.5476f, 287.0385f, -32.20645f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000AAE94[] = {
	{ -0.9647689f, 0.006903f, 0.263008f },
	{ -0.965576f, -0.007266f, 0.260019f },
	{ -0.966202f, -0.022025f, 0.256845f },
	{ -0.819087f, -0.008607999f, 0.573604f },
	{ -0.835815f, 0.006599f, 0.548972f },
	{ -0.83089f, 0.019629f, 0.55609f },
	{ -0.87547f, -0.014845f, 0.483043f },
	{ -0.867301f, 0.015045f, 0.497556f },
	{ -0.885483f, 0.037028f, 0.463193f },
	{ -0.982996f, 0.004458f, -0.183575f },
	{ -0.986967f, -0.004338f, -0.160863f },
	{ -0.984141f, -0.011641f, -0.177007f },
	{ -0.907592f, 0.012731f, -0.41966f },
	{ -0.912616f, -0.011312f, -0.408661f },
	{ -0.9172029f, -0.031697f, -0.397158f },
	{ -0.9104649f, 0.127168f, -0.393551f },
	{ -0.972936f, 0.125854f, -0.193794f },
	{ -0.895671f, 0.138725f, 0.422527f },
	{ -0.835021f, 0.034498f, 0.549135f },
	{ -0.9668069f, -0.02227f, 0.254534f },
	{ -0.967487f, -0.022566f, 0.251911f },
	{ -0.806084f, 0.07970399f, 0.586409f },
	{ -0.937999f, 0.271088f, -0.216029f },
	{ -0.8858809f, 0.263324f, -0.381936f },
	{ -0.8920259f, 0.234258f, 0.38654f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000AAFC0 = { vertex_000AAD68, normal_000AAE94, LengthOfArray<Sint32>(vertex_000AAD68), meshlist_000AAD38, matlist_000AAC08, LengthOfArray<Uint16>(meshlist_000AAD38), LengthOfArray<Uint16>(matlist_000AAC08), { 513.8279f, 127.0874f, -56.35684f }, 270.3888f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000AAFE8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000AAFC0, 0, 0, 131, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000AB01C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000AB058[] = {
	0x8000u | 8, 19, 20, 5, 2, 4, 1, 3, 0,
	8, 5, 19, 13, 18, 8, 7, 14, 16,
	0x8000u | 6, 13, 12, 8, 9, 14, 15,
	7, 15, 6, 9, 10, 12, 11, 3,
	5, 5, 13, 4, 12, 3
};

extern "C" __declspec(dllexport) Sint16 poly_000AB0A6[] = {
	10, 20, 21, 19, 22, 18, 24, 7, 23, 17, 25
};

extern "C" __declspec(dllexport) Sint16 poly_000AB0BC[] = {
	3, 17, 16, 7
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AB0C4[] = {
	{ 1644, -510 },
	{ 1269, -510 },
	{ 1673, -348 },
	{ 1290, -354 },
	{ 1681, -78 },
	{ 1297, -81 },
	{ 1598, 255 },
	{ 1232, 255 },
	{ 1673, -348 },
	{ 1644, -510 },
	{ 2041, -382 },
	{ 2000, -510 },
	{ 2289, -248 },
	{ 2284, -510 },
	{ 2550, -270 },
	{ 2549, -510 },
	{ 2041, -382 },
	{ 2033, -59 },
	{ 2289, -248 },
	{ 2294, -21 },
	{ 2550, -270 },
	{ 2550, 0 },
	{ 2550, 0 },
	{ 2550, 255 },
	{ 2294, -21 },
	{ 2193, 255 },
	{ 2033, -59 },
	{ 1928, 255 },
	{ 1598, 255 },
	{ 1673, -348 },
	{ 2041, -382 },
	{ 1681, -78 },
	{ 2033, -59 },
	{ 1598, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AB14C[] = {
	{ 2962, 255 },
	{ 3032, 0 },
	{ 2547, 255 },
	{ 2623, 0 },
	{ 2152, 255 },
	{ 2242, 0 },
	{ 1838, 255 },
	{ 1880, 0 },
	{ 1514, 255 },
	{ 1577, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AB174[] = {
	{ 0 },
	{ 0, 111 },
	{ 254, 55 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000AB180[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_000AB058, NULL, NULL, NULL, uv_000AB0C4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000AB0A6, NULL, NULL, NULL, uv_000AB14C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000AB0BC, NULL, NULL, NULL, uv_000AB174, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000AB1C8[] = {
	{ 504.8021f, -32.86377f, -260.4172f },
	{ 505.0889f, 72.1037f, -256.4333f },
	{ 504.3714f, 157.1933f, -266.393f },
	{ 442.6141f, -22.63267f, -391.2383f },
	{ 442.1911f, 82.40325f, -387.2735f },
	{ 443.2482f, 167.3135f, -397.1858f },
	{ 324.4845f, -21.98482f, -687.0822f },
	{ 362.0359f, 279.3676f, -586.9994f },
	{ 356.1738f, 167.2666f, -579.5538f },
	{ 358.8429f, 72.15884f, -557.3241f },
	{ 353.4427f, -45.94436f, -545.2256f },
	{ 437.1762f, -70.99815f, -519.6426f },
	{ 433.8658f, 47.9944f, -522.1702f },
	{ 428.345f, 168.7019f, -541.5792f },
	{ 291.5713f, 195.0001f, -637.4467f },
	{ 315.1118f, 80.00001f, -643.2895f },
	{ 288.4325f, 300.0002f, -636.6677f },
	{ 292.3559f, 340.4476f, -637.6414f },
	{ 431.1138f, 217.0392f, -543.5846f },
	{ 443.671f, 217.669f, -401.1508f },
	{ 504.0844f, 205.4272f, -270.3769f },
	{ 518.1974f, 249.6196f, -274.3608f },
	{ 458.4937f, 266.4704f, -405.1158f },
	{ 371.5888f, 342.6883f, -596.2009f },
	{ 448.2825f, 264.3319f, -545.59f },
	{ 302.6793f, 380.8947f, -656.6151f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000AB300[] = {
	{ -0.90166f, -0.01694f, 0.432114f },
	{ -0.9029109f, 0.014888f, 0.42957f },
	{ -0.9037369f, 0.044403f, 0.425778f },
	{ -0.972857f, -0.016282f, 0.230833f },
	{ -0.964003f, 0.008575999f, 0.265754f },
	{ -0.963168f, 0.037313f, 0.2663f },
	{ -0.980258f, -0.045406f, 0.192438f },
	{ -0.517383f, 0.141384f, 0.843994f },
	{ -0.5495149f, 0.113637f, 0.82772f },
	{ -0.676717f, 0.057567f, 0.7339889f },
	{ -0.665224f, 0.019736f, 0.746383f },
	{ -0.777998f, 0.022053f, 0.62788f },
	{ -0.810874f, 0.042931f, 0.583645f },
	{ -0.8171459f, 0.06639799f, 0.572594f },
	{ -0.711837f, 0.007504f, 0.702305f },
	{ -0.942603f, -0.122568f, 0.310608f },
	{ -0.595523f, 0.055043f, 0.801451f },
	{ -0.531705f, 0.239178f, 0.812456f },
	{ -0.7979169f, 0.16872f, 0.5786729f },
	{ -0.949315f, 0.179543f, 0.258003f },
	{ -0.887876f, 0.162251f, 0.430524f },
	{ -0.851991f, 0.30168f, 0.427903f },
	{ -0.916732f, 0.316163f, 0.244222f },
	{ -0.482877f, 0.274995f, 0.831389f },
	{ -0.737449f, 0.282978f, 0.613263f },
	{ -0.5208099f, 0.315173f, 0.793362f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000AB438 = { vertex_000AB1C8, normal_000AB300, LengthOfArray<Sint32>(vertex_000AB1C8), meshlist_000AB180, matlist_000AB01C, LengthOfArray<Uint16>(meshlist_000AB180), LengthOfArray<Uint16>(matlist_000AB01C), { 403.3149f, 154.9483f, -471.7578f }, 312.116f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000AB460 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000AB438, 0, 0, 131, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000AB494[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 24, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 21, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 22, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000AB584[] = {
	4, 32, 49, 15, 23,
	0x8000u | 5, 31, 36, 16, 37, 14,
	0x8000u | 6, 44, 19, 39, 36, 29, 31,
	0x8000u | 5, 28, 46, 37, 33, 14,
	0x8000u | 5, 42, 8, 38, 10, 2,
	0x8000u | 7, 32, 18, 15, 20, 10, 3, 2,
	4, 104, 74, 128, 80,
	4, 128, 80, 129, 76,
	4, 120, 91, 119, 90,
	4, 100, 67, 121, 75,
	4, 119, 90, 106, 82,
	4, 131, 68, 132, 79,
	4, 132, 79, 110, 78,
	4, 121, 75, 122, 65
};

extern "C" __declspec(dllexport) Sint16 poly_000AB620[] = {
	0x8000u | 7, 7, 56, 61, 59, 62, 4, 1,
	3, 7, 24, 61
};

extern "C" __declspec(dllexport) Sint16 poly_000AB638[] = {
	4, 21, 40, 18, 32,
	4, 2, 38, 5, 41,
	4, 29, 39, 26, 34,
	4, 11, 35, 14, 33,
	4, 26, 34, 21, 40,
	4, 5, 41, 11, 35,
	0x8000u | 8, 16, 14, 12, 11, 6, 5, 3, 2,
	3, 20, 22, 18,
	0x8000u | 6, 31, 27, 26, 22, 21, 18,
	3, 31, 29, 26,
	8, 163, 164, 162, 161, 180, 181, 176, 179,
	8, 158, 157, 168, 170, 185, 186, 183, 175
};

extern "C" __declspec(dllexport) Sint16 poly_000AB6C8[] = {
	6, 50, 19, 51, 36, 52, 37,
	4, 52, 37, 54, 28,
	6, 23, 53, 15, 55, 10, 25,
	4, 9, 8, 25, 10,
	4, 139, 78, 135, 79,
	4, 143, 65, 137, 75,
	4, 137, 75, 69, 67,
	4, 135, 79, 142, 68,
	4, 134, 76, 138, 80,
	4, 140, 90, 133, 91,
	4, 141, 82, 140, 90,
	4, 138, 80, 136, 74
};

extern "C" __declspec(dllexport) Sint16 poly_000AB748[] = {
	0x8000u | 7, 46, 48, 35, 60, 41, 63, 47,
	3, 46, 33, 35,
	0x8000u | 7, 49, 45, 40, 58, 34, 57, 43,
	3, 49, 32, 40,
	0x8000u | 8, 31, 16, 27, 12, 22, 6, 20, 3,
	4, 34, 39, 43, 44,
	4, 41, 38, 47, 42,
	4, 131, 132, 126, 125,
	4, 128, 127, 104, 103,
	4, 116, 119, 109, 106,
	0x8000u | 5, 122, 121, 113, 100, 107,
	3, 122, 150, 113,
	4, 152, 127, 129, 128,
	4, 125, 132, 105, 110,
	4, 120, 119, 118, 116
};

extern "C" __declspec(dllexport) Sint16 poly_000AB7EE[] = {
	4, 13, 24, 30, 7,
	4, 17, 4, 0, 1
};

extern "C" __declspec(dllexport) Sint16 poly_000AB802[] = {
	4, 83, 64, 66, 153,
	4, 71, 83, 89, 66,
	4, 64, 73, 153, 149,
	4, 70, 84, 154, 111,
	0x8000u | 8, 154, 70, 98, 81, 101, 72, 111, 84,
	4, 86, 95, 115, 117,
	4, 93, 88, 97, 102,
	4, 95, 93, 117, 97,
	4, 88, 86, 102, 115,
	0x8000u | 6, 155, 94, 124, 87, 99, 85,
	4, 96, 85, 148, 99,
	4, 73, 71, 149, 89,
	4, 94, 96, 156, 148
};

extern "C" __declspec(dllexport) Sint16 poly_000AB890[] = {
	4, 114, 147, 112, 98,
	4, 130, 144, 66, 89,
	4, 118, 116, 117, 115,
	4, 154, 111, 150, 113,
	4, 123, 92, 151, 146,
	4, 117, 97, 118, 145,
	4, 115, 116, 102, 109,
	4, 151, 125, 155, 124,
	4, 127, 77, 103, 108,
	4, 66, 77, 152, 127,
	4, 113, 111, 107, 101,
	4, 105, 99, 125, 124,
	10, 160, 157, 159, 158, 169, 168, 184, 185, 174, 183,
	3, 165, 166, 163,
	0x8000u | 9, 163, 164, 166, 161, 167, 181, 182, 179, 189,
	8, 157, 160, 170, 171, 186, 187, 175, 173,
	8, 165, 163, 172, 162, 188, 180, 178, 176,
	3, 176, 177, 178,
	3, 176, 179, 189,
	4, 183, 175, 174, 173
};

extern "C" __declspec(dllexport) Sint16 poly_000AB978[] = {
	4, 94, 87, 96, 85,
	4, 64, 83, 73, 71,
	4, 95, 86, 93, 88,
	4, 84, 70, 72, 81,
	4, 194, 230, 195, 233,
	4, 218, 214, 219, 215,
	4, 205, 236, 204, 234,
	4, 227, 199, 226, 200,
	4, 206, 210, 207, 211,
	4, 245, 250, 244, 251,
	4, 241, 249, 240, 248,
	4, 223, 192, 222, 193,
	4, 246, 247, 238, 239,
	4, 253, 252, 242, 243,
	4, 225, 224, 191, 190,
	4, 229, 228, 201, 198,
	4, 196, 197, 231, 232,
	4, 203, 202, 237, 235,
	4, 220, 221, 216, 217,
	4, 212, 213, 208, 209
};

extern "C" __declspec(dllexport) Sint16 poly_000ABA40[] = {
	0x8000u | 5, 352, 355, 357, 348, 347,
	3, 352, 347, 357,
	5, 339, 342, 344, 335, 334,
	3, 344, 334, 339,
	3, 331, 321, 322,
	0x8000u | 5, 321, 326, 331, 329, 322,
	3, 266, 256, 257,
	5, 257, 264, 266, 261, 256,
	3, 270, 269, 279,
	0x8000u | 5, 270, 277, 279, 274, 269,
	3, 287, 282, 292,
	5, 282, 283, 292, 290, 287,
	3, 305, 295, 300,
	0x8000u | 5, 295, 296, 305, 303, 300,
	3, 318, 308, 313,
	0x8000u | 5, 308, 309, 318, 316, 313
};

extern "C" __declspec(dllexport) Sint16 poly_000ABAE0[] = {
	4, 195, 233, 197, 232,
	4, 203, 237, 205, 236,
	4, 225, 191, 223, 192,
	4, 226, 200, 228, 198,
	4, 204, 234, 202, 235,
	4, 222, 193, 224, 190,
	4, 219, 215, 221, 217,
	4, 229, 201, 227, 199,
	4, 244, 251, 242, 253,
	4, 209, 213, 206, 210,
	4, 243, 252, 245, 250,
	4, 240, 248, 238, 246,
	4, 239, 247, 241, 249,
	4, 196, 231, 194, 230,
	4, 231, 232, 230, 233,
	4, 235, 234, 237, 236,
	4, 198, 200, 201, 199,
	4, 190, 193, 191, 192,
	4, 239, 241, 238, 240,
	3, 216, 217, 215,
	4, 243, 245, 242, 244,
	7, 206, 207, 208, 211, 212, 210, 213,
	3, 208, 209, 206,
	4, 253, 251, 252, 250,
	3, 219, 221, 218,
	6, 221, 220, 218, 216, 214, 215,
	4, 246, 248, 247, 249,
	4, 225, 223, 224, 222,
	4, 229, 227, 228, 226,
	4, 203, 205, 202, 204,
	4, 196, 194, 197, 195
};

extern "C" __declspec(dllexport) Sint16 poly_000ABC1A[] = {
	6, 349, 356, 345, 354, 348, 355,
	6, 352, 355, 351, 354, 353, 356,
	6, 353, 350, 351, 346, 352, 347,
	6, 348, 347, 345, 346, 349, 350,
	6, 343, 336, 341, 332, 342, 335,
	6, 342, 339, 341, 338, 343, 340,
	6, 337, 340, 333, 338, 334, 339,
	6, 334, 335, 333, 332, 337, 336,
	6, 329, 322, 328, 319, 330, 323,
	6, 330, 327, 328, 325, 329, 326,
	6, 321, 326, 320, 325, 324, 327,
	6, 324, 323, 320, 319, 321, 322,
	6, 257, 256, 254, 255, 258, 259,
	6, 262, 259, 260, 255, 261, 256,
	6, 261, 264, 260, 263, 262, 265,
	6, 258, 265, 254, 263, 257, 264,
	6, 269, 270, 268, 267, 272, 271,
	6, 272, 275, 268, 273, 269, 274,
	6, 277, 274, 276, 273, 278, 275,
	6, 278, 271, 276, 267, 277, 270,
	0x8000u | 8, 286, 287, 281, 282, 280, 283, 289, 290,
	0x8000u | 8, 288, 286, 285, 281, 284, 280, 291, 289,
	6, 291, 288, 289, 286, 290, 287,
	6, 297, 298, 293, 294, 296, 295,
	6, 300, 295, 299, 294, 301, 298,
	6, 301, 304, 299, 302, 300, 303,
	6, 296, 303, 293, 302, 297, 304,
	6, 310, 311, 306, 307, 309, 308,
	6, 313, 308, 312, 307, 314, 311,
	6, 314, 317, 312, 315, 313, 316,
	6, 309, 316, 306, 315, 310, 317
};

extern "C" __declspec(dllexport) NJS_TEX uv_000ABDD4[] = {
	{ 820, -254 },
	{ 210, -254 },
	{ 1016, 77 },
	{ 211, 77 },
	{ 924, -254 },
	{ 1016, 77 },
	{ 95, -254 },
	{ 3, 77 },
	{ 0, -254 },
	{ 210, -254 },
	{ 211, 77 },
	{ 820, -254 },
	{ 1016, 77 },
	{ 1019, -254 },
	{ 924, -254 },
	{ 211, 77 },
	{ 210, -254 },
	{ 1016, 77 },
	{ 820, -254 },
	{ 1019, -254 },
	{ 210, -254 },
	{ 211, 77 },
	{ 820, -254 },
	{ 1016, 77 },
	{ 1019, -254 },
	{ 820, -254 },
	{ 1019, -254 },
	{ 1016, 77 },
	{ 924, -254 },
	{ 3, 77 },
	{ 95, -254 },
	{ 0, -254 },
	{ 0, -254 },
	{ 3, 77 },
	{ 210, -254 },
	{ 211, 77 },
	{ 0, -254 },
	{ 3, 77 },
	{ 210, -254 },
	{ 211, 77 },
	{ 210, -254 },
	{ 211, 77 },
	{ 0, -254 },
	{ 3, 77 },
	{ 210, -254 },
	{ 211, 77 },
	{ 0, -254 },
	{ 3, 77 },
	{ 210, -254 },
	{ 211, 77 },
	{ 0, -254 },
	{ 3, 77 },
	{ 0, -254 },
	{ 3, 77 },
	{ 210, -254 },
	{ 211, 77 },
	{ 0, -254 },
	{ 3, 77 },
	{ 210, -254 },
	{ 211, 77 },
	{ 210, -254 },
	{ 211, 77 },
	{ 0, -254 },
	{ 3, 77 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000ABED4[] = {
	{ 6374, -764 },
	{ 4296, -764 },
	{ 4296, 255 },
	{ 2080, -764 },
	{ 2080, 255 },
	{ 0, -764 },
	{ 0, 255 },
	{ 6374, -764 },
	{ 6374, 255 },
	{ 4296, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000ABEFC[] = {
	{ 225, -2265 },
	{ 0, -2295 },
	{ 254, -86 },
	{ 17, 254 },
	{ 254, -86 },
	{ 17, 254 },
	{ 225, -2265 },
	{ 0, -2295 },
	{ 254, -86 },
	{ 17, 254 },
	{ 225, -2265 },
	{ 0, -2295 },
	{ 225, -2265 },
	{ 0, -2295 },
	{ 254, -86 },
	{ 17, 254 },
	{ 254, -4663 },
	{ 0, -4844 },
	{ 254, 74 },
	{ 0, 254 },
	{ 254, 74 },
	{ 0, 254 },
	{ 254, -4663 },
	{ 0, -4844 },
	{ 255, -10075 },
	{ 0, -10075 },
	{ 255, -8393 },
	{ 0, -8393 },
	{ 255, -3845 },
	{ 0, -3845 },
	{ 255, -2163 },
	{ 0, -2163 },
	{ 255, -2163 },
	{ 255, -3845 },
	{ 0, -2163 },
	{ 255, -10075 },
	{ 255, -8393 },
	{ 0, -8393 },
	{ 255, -3845 },
	{ 0, -3845 },
	{ 0, -2163 },
	{ 255, -10075 },
	{ 0, -10075 },
	{ 0, -8393 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -3995 },
	{ 255, -3995 },
	{ 0, -8244 },
	{ 255, -8244 },
	{ 0, -12495 },
	{ 255, -12495 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, -3995 },
	{ 0, -3995 },
	{ 255, -8244 },
	{ 0, -8244 },
	{ 255, -12495 },
	{ 0, -12495 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000ABFEC[] = {
	{ 157, 254 },
	{ 157, -510 },
	{ 764, 254 },
	{ 764, -510 },
	{ 157, 254 },
	{ 157, -510 },
	{ 764, 254 },
	{ 764, -510 },
	{ 157, 254 },
	{ 157, -510 },
	{ 157, -510 },
	{ 157, 254 },
	{ 764, -510 },
	{ 764, 254 },
	{ 157, -510 },
	{ 157, 254 },
	{ 157, 254 },
	{ 157, -510 },
	{ 764, 254 },
	{ 764, -510 },
	{ 157, 254 },
	{ 157, -510 },
	{ 0, 254 },
	{ 0, -510 },
	{ 600, 252 },
	{ 600, -506 },
	{ 761, 252 },
	{ 761, -506 },
	{ 0, 254 },
	{ 0, -510 },
	{ 157, 254 },
	{ 157, -510 },
	{ 761, 252 },
	{ 761, -506 },
	{ 600, 252 },
	{ 600, -506 },
	{ 600, 252 },
	{ 600, -506 },
	{ 761, 252 },
	{ 761, -506 },
	{ 761, 252 },
	{ 761, -506 },
	{ 600, 252 },
	{ 600, -506 },
	{ 0, 254 },
	{ 0, -510 },
	{ 157, 254 },
	{ 157, -510 },
	{ 0, 254 },
	{ 0, -510 },
	{ 157, 254 },
	{ 157, -510 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AC0BC[] = {
	{ 3675, 255 },
	{ 3675, -765 },
	{ 2645, -217 },
	{ 2550, -765 },
	{ 1178, -217 },
	{ 1275, -765 },
	{ 149, -765 },
	{ 3675, 255 },
	{ 3240, 255 },
	{ 2645, -217 },
	{ 149, 255 },
	{ 149, -765 },
	{ 1178, -217 },
	{ 1275, -765 },
	{ 2645, -217 },
	{ 2550, -765 },
	{ 3675, -765 },
	{ 149, 255 },
	{ 582, 255 },
	{ 1178, -217 },
	{ 1020, 254 },
	{ 0, 254 },
	{ 1020, -286 },
	{ 0, -286 },
	{ 1020, -1752 },
	{ 0, -1752 },
	{ 1020, -2295 },
	{ 0, -2295 },
	{ 2645, -217 },
	{ 3240, 255 },
	{ 3675, -765 },
	{ 3675, 255 },
	{ 1178, -217 },
	{ 582, 255 },
	{ 149, -765 },
	{ 149, 255 },
	{ 0, 255 },
	{ 149, 255 },
	{ 0, -765 },
	{ 149, -765 },
	{ 3825, 255 },
	{ 3825, -765 },
	{ 3675, 255 },
	{ 3675, -765 },
	{ 3825, -765 },
	{ 3825, 255 },
	{ 3675, -765 },
	{ 3675, 255 },
	{ 0, 255 },
	{ 149, 255 },
	{ 149, -765 },
	{ 0, 255 },
	{ 0, -765 },
	{ 0, 255 },
	{ 0, -765 },
	{ 149, -765 },
	{ 3825, -765 },
	{ 3675, -765 },
	{ 3825, 255 },
	{ 3675, 255 },
	{ 0, -765 },
	{ 0, 255 },
	{ 149, -765 },
	{ 149, 255 },
	{ 3825, 255 },
	{ 3675, 255 },
	{ 3825, -765 },
	{ 3675, -765 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AC1CC[] = {
	{ 0, 255 },
	{ 0, 74 },
	{ 1020, 255 },
	{ 1017, 74 },
	{ 0, 255 },
	{ 0, 74 },
	{ 1020, 255 },
	{ 1017, 74 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AC1EC[] = {
	{ 0 },
	{ 255, 0 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0 },
	{ 255, 0 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0 },
	{ 255, 0 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0 },
	{ 255, 0 },
	{ 0, 254 },
	{ 255, 254 },
	{ 255, 254 },
	{ 255, 0 },
	{ 0, 254 },
	{ 0 },
	{ 255, 254 },
	{ 255, 0 },
	{ 0, 254 },
	{ 0 },
	{ 0 },
	{ 255, 0 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0 },
	{ 255, 0 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0 },
	{ 255, 0 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0 },
	{ 255, 0 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0, 254 },
	{ 0 },
	{ 255, 254 },
	{ 255, 0 },
	{ 0, 254 },
	{ 0 },
	{ 0 },
	{ 255, 0 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0 },
	{ 255, 0 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0 },
	{ 255, 0 },
	{ 0, 254 },
	{ 255, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AC2D4[] = {
	{ 764, 254 },
	{ 292, 254 },
	{ 764, 0 },
	{ 292, 0 },
	{ 764, 254 },
	{ 292, 254 },
	{ 764, 0 },
	{ 292, 0 },
	{ 12750, 254 },
	{ 12250, 254 },
	{ 12750, 0 },
	{ 12250, 0 },
	{ 0 },
	{ 498, 0 },
	{ 0, 254 },
	{ 498, 254 },
	{ 764, 0 },
	{ 292, 0 },
	{ 764, 254 },
	{ 292, 254 },
	{ 764, 0 },
	{ 292, 0 },
	{ 764, 254 },
	{ 292, 254 },
	{ 12750, 0 },
	{ 12750, 254 },
	{ 12250, 0 },
	{ 12250, 254 },
	{ 0, 254 },
	{ 498, 254 },
	{ 0 },
	{ 498, 0 },
	{ 12750, 254 },
	{ 12750, 0 },
	{ 12250, 254 },
	{ 12250, 0 },
	{ 12750, 0 },
	{ 12250, 0 },
	{ 12750, 254 },
	{ 12250, 254 },
	{ 0, 254 },
	{ 0 },
	{ 498, 254 },
	{ 498, 0 },
	{ 498, 254 },
	{ 498, 0 },
	{ 0, 254 },
	{ 0 },
	{ 292, 254 },
	{ 292, 0 },
	{ 0, 254 },
	{ 0 },
	{ 4249, 254 },
	{ 4249, 0 },
	{ 8499, 254 },
	{ 8499, 0 },
	{ 12750, 254 },
	{ 12750, 0 },
	{ 292, 254 },
	{ 0, 254 },
	{ 292, 0 },
	{ 292, 0 },
	{ 0 },
	{ 0, 254 },
	{ 4249, 0 },
	{ 4249, 254 },
	{ 8499, 0 },
	{ 8499, 254 },
	{ 12750, 0 },
	{ 12750, 254 },
	{ 0 },
	{ 0, 254 },
	{ 4249, 0 },
	{ 4249, 254 },
	{ 8499, 0 },
	{ 8499, 254 },
	{ 12750, 0 },
	{ 12750, 254 },
	{ 0, 254 },
	{ 0 },
	{ 4249, 254 },
	{ 4249, 0 },
	{ 8499, 254 },
	{ 8499, 0 },
	{ 12750, 254 },
	{ 12750, 0 },
	{ 292, 0 },
	{ 0, 254 },
	{ 292, 254 },
	{ 292, 0 },
	{ 0 },
	{ 0, 254 },
	{ 0 },
	{ 292, 0 },
	{ 0, 254 },
	{ 292, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AC454[] = {
	{ 0, -255 },
	{ 510, -255 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0, -255 },
	{ 510, -255 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0, -255 },
	{ 510, -255 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0, -255 },
	{ 510, -255 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0, -255 },
	{ 510, -255 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0, -255 },
	{ 510, -255 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0, -255 },
	{ 510, -255 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0, -255 },
	{ 510, -255 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0, -255 },
	{ 510, -255 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0, -255 },
	{ 510, -255 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0, -255 },
	{ 510, -255 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0, -255 },
	{ 510, -255 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0, -255 },
	{ 510, -255 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0, -255 },
	{ 510, -255 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0, -255 },
	{ 510, -255 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0, -255 },
	{ 510, -255 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0, -255 },
	{ 510, -255 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0, -255 },
	{ 510, -255 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0, -255 },
	{ 510, -255 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0, -255 },
	{ 510, -255 },
	{ 0, 254 },
	{ 510, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AC594[] = {
	{ 0, -255 },
	{ 0, 254 },
	{ 254, 0 },
	{ 508, 254 },
	{ 508, -255 },
	{ 0, -255 },
	{ 508, -255 },
	{ 254, 0 },
	{ 0, -255 },
	{ 508, -255 },
	{ 254, 0 },
	{ 508, 254 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0, -255 },
	{ 254, 0 },
	{ 508, -255 },
	{ 508, 254 },
	{ 508, -255 },
	{ 0, -255 },
	{ 254, 0 },
	{ 0, 254 },
	{ 508, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0, -255 },
	{ 0, -255 },
	{ 508, -255 },
	{ 254, 0 },
	{ 508, 254 },
	{ 0, 254 },
	{ 0, -255 },
	{ 508, -255 },
	{ 254, 0 },
	{ 0, -255 },
	{ 0, 254 },
	{ 254, 0 },
	{ 508, 254 },
	{ 508, -255 },
	{ 508, 254 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0, -255 },
	{ 254, 0 },
	{ 508, -255 },
	{ 508, 254 },
	{ 254, 0 },
	{ 508, -255 },
	{ 508, 254 },
	{ 508, -255 },
	{ 0, -255 },
	{ 254, 0 },
	{ 0, 254 },
	{ 508, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0, -255 },
	{ 0, 254 },
	{ 508, 254 },
	{ 254, 0 },
	{ 508, -255 },
	{ 0, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AC694[] = {
	{ 254, -253 },
	{ 0, -253 },
	{ 254, 29 },
	{ 0, 29 },
	{ 0, 29 },
	{ 254, 29 },
	{ 0, -253 },
	{ 254, -253 },
	{ 0, 29 },
	{ 254, 29 },
	{ 0, -253 },
	{ 254, -253 },
	{ 254, -253 },
	{ 0, -253 },
	{ 254, 29 },
	{ 0, 29 },
	{ 254, -253 },
	{ 0, -253 },
	{ 254, 29 },
	{ 0, 29 },
	{ 254, -253 },
	{ 0, -253 },
	{ 254, 29 },
	{ 0, 29 },
	{ 254, -253 },
	{ 0, -253 },
	{ 254, 29 },
	{ 0, 29 },
	{ 0, 29 },
	{ 254, 29 },
	{ 0, -253 },
	{ 254, -253 },
	{ 254, -253 },
	{ 0, -253 },
	{ 254, 29 },
	{ 0, 29 },
	{ 0, 29 },
	{ 254, 29 },
	{ 0, -253 },
	{ 254, -253 },
	{ 0, 29 },
	{ 254, 29 },
	{ 0, -253 },
	{ 254, -253 },
	{ 254, -253 },
	{ 0, -253 },
	{ 254, 29 },
	{ 0, 29 },
	{ 0, 29 },
	{ 254, 29 },
	{ 0, -253 },
	{ 254, -253 },
	{ 0, 29 },
	{ 254, 29 },
	{ 0, -253 },
	{ 254, -253 },
	{ 0, 29 },
	{ 254, 29 },
	{ 0, -253 },
	{ 254, -253 },
	{ 254, 29 },
	{ 254, -253 },
	{ 0, 29 },
	{ 0, -253 },
	{ 254, 29 },
	{ 254, -253 },
	{ 0, 29 },
	{ 0, -253 },
	{ 254, 29 },
	{ 254, -253 },
	{ 0, 29 },
	{ 0, -253 },
	{ 254, 29 },
	{ 254, -253 },
	{ 0, 29 },
	{ 0, -253 },
	{ 0, 29 },
	{ 254, 29 },
	{ 254, -253 },
	{ 254, 29 },
	{ 254, -253 },
	{ 0, 29 },
	{ 0, -253 },
	{ 254, -253 },
	{ 0, -253 },
	{ 0, 29 },
	{ 254, -253 },
	{ 254, 29 },
	{ 0, -253 },
	{ 0, 29 },
	{ 0, 29 },
	{ 254, 29 },
	{ 254, -253 },
	{ 254, 29 },
	{ 254, -253 },
	{ 0, 29 },
	{ 0, -253 },
	{ 0, -253 },
	{ 0, 29 },
	{ 254, -253 },
	{ 0, 29 },
	{ 254, 29 },
	{ 254, -253 },
	{ 0, 29 },
	{ 0, -253 },
	{ 254, -253 },
	{ 254, 29 },
	{ 254, -253 },
	{ 0, 29 },
	{ 0, -253 },
	{ 254, 29 },
	{ 254, -253 },
	{ 0, 29 },
	{ 0, -253 },
	{ 254, 29 },
	{ 254, -253 },
	{ 0, 29 },
	{ 0, -253 },
	{ 254, 29 },
	{ 254, -253 },
	{ 0, 29 },
	{ 0, -253 },
	{ 254, 29 },
	{ 254, -253 },
	{ 0, 29 },
	{ 0, -253 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AC88C[] = {
	{ 28, 255 },
	{ 226, 255 },
	{ 47, 191 },
	{ 207, 191 },
	{ 0 },
	{ 255, 0 },
	{ 255, 0 },
	{ 0 },
	{ 207, 191 },
	{ 47, 191 },
	{ 226, 255 },
	{ 28, 255 },
	{ 28, 255 },
	{ 226, 255 },
	{ 47, 191 },
	{ 207, 191 },
	{ 0 },
	{ 255, 0 },
	{ 255, 0 },
	{ 0 },
	{ 207, 191 },
	{ 47, 191 },
	{ 226, 255 },
	{ 28, 255 },
	{ 28, 255 },
	{ 226, 255 },
	{ 47, 191 },
	{ 207, 191 },
	{ 0 },
	{ 255, 0 },
	{ 255, 0 },
	{ 0 },
	{ 207, 191 },
	{ 47, 191 },
	{ 226, 255 },
	{ 28, 255 },
	{ 28, 255 },
	{ 226, 255 },
	{ 47, 191 },
	{ 207, 191 },
	{ 0 },
	{ 255, 0 },
	{ 255, 0 },
	{ 0 },
	{ 207, 191 },
	{ 47, 191 },
	{ 226, 255 },
	{ 28, 255 },
	{ 255, 0 },
	{ 0 },
	{ 207, 191 },
	{ 47, 191 },
	{ 226, 255 },
	{ 28, 255 },
	{ 28, 255 },
	{ 226, 255 },
	{ 47, 191 },
	{ 207, 191 },
	{ 0 },
	{ 255, 0 },
	{ 255, 0 },
	{ 0 },
	{ 207, 191 },
	{ 47, 191 },
	{ 226, 255 },
	{ 28, 255 },
	{ 28, 255 },
	{ 226, 255 },
	{ 47, 191 },
	{ 207, 191 },
	{ 0 },
	{ 255, 0 },
	{ 255, 0 },
	{ 0 },
	{ 207, 191 },
	{ 47, 191 },
	{ 226, 255 },
	{ 28, 255 },
	{ 28, 255 },
	{ 226, 255 },
	{ 47, 191 },
	{ 207, 191 },
	{ 0 },
	{ 255, 0 },
	{ 255, 0 },
	{ 0 },
	{ 207, 191 },
	{ 47, 191 },
	{ 226, 255 },
	{ 28, 255 },
	{ 28, 255 },
	{ 226, 255 },
	{ 47, 191 },
	{ 207, 191 },
	{ 0 },
	{ 255, 0 },
	{ 255, 0 },
	{ 0 },
	{ 207, 191 },
	{ 47, 191 },
	{ 226, 255 },
	{ 28, 255 },
	{ 28, 255 },
	{ 226, 255 },
	{ 47, 191 },
	{ 207, 191 },
	{ 0 },
	{ 255, 0 },
	{ 255, 0 },
	{ 0 },
	{ 207, 191 },
	{ 47, 191 },
	{ 226, 255 },
	{ 28, 255 },
	{ 28, 255 },
	{ 226, 255 },
	{ 47, 191 },
	{ 207, 191 },
	{ 0 },
	{ 255, 0 },
	{ 47, 191 },
	{ 0 },
	{ 207, 191 },
	{ 255, 0 },
	{ 47, 191 },
	{ 0 },
	{ 207, 191 },
	{ 255, 0 },
	{ 28, 255 },
	{ 47, 191 },
	{ 226, 255 },
	{ 207, 191 },
	{ 28, 255 },
	{ 47, 191 },
	{ 226, 255 },
	{ 207, 191 },
	{ 28, 255 },
	{ 226, 255 },
	{ 47, 191 },
	{ 207, 191 },
	{ 0 },
	{ 255, 0 },
	{ 28, 255 },
	{ 226, 255 },
	{ 47, 191 },
	{ 207, 191 },
	{ 0 },
	{ 255, 0 },
	{ 255, 0 },
	{ 0 },
	{ 207, 191 },
	{ 47, 191 },
	{ 226, 255 },
	{ 28, 255 },
	{ 28, 255 },
	{ 226, 255 },
	{ 47, 191 },
	{ 207, 191 },
	{ 0 },
	{ 255, 0 },
	{ 255, 0 },
	{ 0 },
	{ 207, 191 },
	{ 47, 191 },
	{ 226, 255 },
	{ 28, 255 },
	{ 28, 255 },
	{ 226, 255 },
	{ 47, 191 },
	{ 207, 191 },
	{ 0 },
	{ 255, 0 },
	{ 255, 0 },
	{ 0 },
	{ 207, 191 },
	{ 47, 191 },
	{ 226, 255 },
	{ 28, 255 },
	{ 28, 255 },
	{ 226, 255 },
	{ 47, 191 },
	{ 207, 191 },
	{ 0 },
	{ 255, 0 },
	{ 255, 0 },
	{ 0 },
	{ 207, 191 },
	{ 47, 191 },
	{ 226, 255 },
	{ 28, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000ACB84[] = {
	{ NJD_MESHSET_TRIMESH | 0, 14, poly_000AB584, NULL, NULL, NULL, uv_000ABDD4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000AB620, NULL, NULL, NULL, uv_000ABED4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 12, poly_000AB638, NULL, NULL, NULL, uv_000ABEFC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 12, poly_000AB6C8, NULL, NULL, NULL, uv_000ABFEC, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 15, poly_000AB748, NULL, NULL, NULL, uv_000AC0BC, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, poly_000AB7EE, NULL, NULL, NULL, uv_000AC1CC, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 13, poly_000AB802, NULL, NULL, NULL, uv_000AC1EC, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 20, poly_000AB890, NULL, NULL, NULL, uv_000AC2D4, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 20, poly_000AB978, NULL, NULL, NULL, uv_000AC454, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 16, poly_000ABA40, NULL, NULL, NULL, uv_000AC594, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 31, poly_000ABAE0, NULL, NULL, NULL, uv_000AC694, NULL },
	{ NJD_MESHSET_TRIMESH | 11, 31, poly_000ABC1A, NULL, NULL, NULL, uv_000AC88C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000ACCA4[] = {
	{ -250, 100, -40.66666f },
	{ -239.8789f, 100, -40.66666f },
	{ -155.1666f, -50, -50 },
	{ -155.1666f, -50, -40.66666f },
	{ -239.8789f, 100, 40.66665f },
	{ -89.16665f, 10, -50 },
	{ -89.16665f, 10, -40.66666f },
	{ 239.7205f, 100, 40.66665f },
	{ -230.4632f, -70, -50 },
	{ -230.4632f, -150, -50 },
	{ -155.1666f, -70, -50 },
	{ 89.16667f, 10, -50 },
	{ 89.16667f, 10, -40.66666f },
	{ 250, 100, -40.66666f },
	{ 155.1667f, -50, -50 },
	{ -155.1666f, -70, 50 },
	{ 155.1667f, -50, -40.66666f },
	{ -250, 100, 40.66665f },
	{ -155.1666f, -50, 50 },
	{ 230.4632f, -70, 50 },
	{ -155.1666f, -50, 40.66665f },
	{ -89.16665f, 10, 50 },
	{ -89.16665f, 10, 40.66665f },
	{ -230.4632f, -70, 50 },
	{ 239.7205f, 100, -40.66666f },
	{ -155.1666f, -150, -50 },
	{ 89.16667f, 10, 50 },
	{ 89.16667f, 10, 40.66665f },
	{ 230.4632f, -70, -50 },
	{ 155.1667f, -50, 50 },
	{ 250, 100, 40.66665f },
	{ 155.1667f, -50, 40.66665f },
	{ -173.7527f, -50, 50 },
	{ 173.7527f, -50, -50 },
	{ 95.979f, 19.5f, 50 },
	{ 95.979f, 19.5f, -50 },
	{ 155.1667f, -70, 50 },
	{ 155.1667f, -70, -50 },
	{ -173.7527f, -50, -50 },
	{ 173.7527f, -50, 50 },
	{ -95.97899f, 19.5f, 50 },
	{ -95.97899f, 19.5f, -50 },
	{ -230.4632f, -50, -50 },
	{ 230.4632f, 100, 50 },
	{ 230.4632f, -50, 50 },
	{ -230.4632f, 100, 50 },
	{ 230.4632f, -50, -50 },
	{ -230.4632f, 100, -50 },
	{ 230.4632f, 100, -50 },
	{ -230.4632f, -50, 50 },
	{ 230.4632f, -150, 50 },
	{ 155.1667f, -150, 50 },
	{ 155.1667f, -150, -50 },
	{ -230.4632f, -150, 50 },
	{ 230.4632f, -150, -50 },
	{ -155.1666f, -150, 50 },
	{ 83.33327f, 100, 40.66665f },
	{ 83.33334f, 100, 50 },
	{ -83.33332f, 100, 50 },
	{ -83.33331f, 100, 40.66665f },
	{ 83.33336f, 100, -50 },
	{ 83.33327f, 100, -40.66666f },
	{ -83.33332f, 100, -40.66666f },
	{ -83.33331f, 100, -50 },
	{ 230.4632f, 130, 65 },
	{ -250, -70, -64.5f },
	{ 250, 110, 65 },
	{ -230.4632f, -70, -50 },
	{ -250, -70, 65 },
	{ -230.4632f, -150, -50 },
	{ -250, 130, -64.5f },
	{ 250, 130, 50 },
	{ -230.4632f, 130, -50 },
	{ 230.4632f, 130, 50 },
	{ 230.4632f, -70, 50 },
	{ -230.4632f, -70, -64.5f },
	{ 250, -70, 65 },
	{ 230.4632f, 110, 65 },
	{ -230.4632f, -70, 50 },
	{ -230.4632f, -70, 65 },
	{ 230.4632f, -70, 65 },
	{ -250, 130, -50 },
	{ 230.4632f, -70, -50 },
	{ 250, 130, 65 },
	{ -230.4632f, 130, -64.5f },
	{ -230.4632f, 130, 50 },
	{ 230.4632f, 130, -64.5f },
	{ -230.4632f, 130, 65 },
	{ 230.4632f, 130, -50 },
	{ 250, 110, 50 },
	{ 230.4632f, -70, -64.5f },
	{ 250, -70, -64.5f },
	{ -250, 110, 50 },
	{ 250, 130, -50 },
	{ -250, 130, 65 },
	{ 250, 130, -64.5f },
	{ -250, 130, 50 },
	{ 250, 110, -50 },
	{ -250, 110, -50 },
	{ -230.4632f, 110, 50 },
	{ -230.4632f, -50, -50 },
	{ -230.4632f, 110, -50 },
	{ 230.4632f, 110, -50 },
	{ 230.4632f, 100, 50 },
	{ 230.4632f, -50, 50 },
	{ -230.4632f, 100, 50 },
	{ 230.4632f, -50, -50 },
	{ -230.4632f, 100, -50 },
	{ 230.4632f, 110, 50 },
	{ 230.4632f, 100, -50 },
	{ -230.4632f, -50, 50 },
	{ -230.4632f, 110, -64.5f },
	{ -250, 110, -64.5f },
	{ -230.4632f, 100, -64.5f },
	{ -250, 100, -64.5f },
	{ 230.4632f, 110, -64.5f },
	{ 230.4632f, 100, -64.5f },
	{ 250, 110, -64.5f },
	{ 250, 100, -64.5f },
	{ 230.4632f, -50, -64.5f },
	{ 250, -50, -64.5f },
	{ -230.4632f, -50, -64.5f },
	{ -250, -50, -64.5f },
	{ -250, 110, 65 },
	{ -230.4632f, 110, 65 },
	{ -230.4632f, 100, 65 },
	{ -250, 100, 65 },
	{ 230.4632f, 100, 65 },
	{ 230.4632f, -50, 65 },
	{ 250, -50, 65 },
	{ 250, 100, 65 },
	{ -250, -50, 65 },
	{ -230.4632f, -50, 65 },
	{ 250, -150, -64.5f },
	{ 250, -150, 65 },
	{ -230.4632f, -150, 65 },
	{ 230.4632f, -150, 50 },
	{ -230.4632f, -150, -64.5f },
	{ 230.4632f, -150, 65 },
	{ -230.4632f, -150, 50 },
	{ 230.4632f, -150, -64.5f },
	{ 230.4632f, -150, -50 },
	{ -250, -150, 65 },
	{ -250, -150, -64.5f },
	{ 250, 100, 50.00068f },
	{ 250, 100, -49.99995f },
	{ -250, 100, 50.00068f },
	{ -250, 100, -49.99995f },
	{ -250, 110, 50 },
	{ 230.4632f, 110, 50 },
	{ -250, 100, -64.5f },
	{ -250, 100, 65 },
	{ 250, 100, 65 },
	{ 230.4632f, 110, 65 },
	{ -250, 110, -64.5f },
	{ -250, 110, 65 },
	{ -250, 110, 65 },
	{ -250, 110, 50 },
	{ -250, 110, 40.66665f },
	{ -250, 100, 40.66665f },
	{ -250, 100, 50.00068f },
	{ -83.33332f, 110, -40.66666f },
	{ -83.33332f, 110, -50 },
	{ -250, 110, -50 },
	{ -250, 110, -40.66666f },
	{ -250, 100, -49.99995f },
	{ -250, 100, -40.66666f },
	{ -83.33332f, 100, -40.66666f },
	{ -83.33332f, 110, 40.66665f },
	{ -83.33332f, 100, 40.66665f },
	{ -83.33332f, 110, 50 },
	{ -83.33332f, 100, 50.00068f },
	{ -83.33332f, 100, -49.99995f },
	{ 250, 100, 50.00068f },
	{ 250, 100, 40.66665f },
	{ 250, 110, 50 },
	{ 250, 110, -50 },
	{ 250, 100, -40.66666f },
	{ 250, 100, -49.99995f },
	{ 250, 110, -40.66666f },
	{ 83.33334f, 110, -50 },
	{ 83.33334f, 110, -40.66666f },
	{ 83.33334f, 100, -40.66666f },
	{ 250, 110, 40.66665f },
	{ 83.33334f, 100, 40.66665f },
	{ 83.33334f, 110, 40.66665f },
	{ 83.33334f, 110, 50 },
	{ 83.33334f, 100, 50.00068f },
	{ 83.33334f, 100, -49.99995f },
	{ 250, 100, -40.66666f },
	{ -64.99978f, 100, -35.66666f },
	{ -64.99978f, 100, -55 },
	{ -64.99978f, 120, -55 },
	{ -64.99978f, 120, -35.66666f },
	{ -144.971f, 120, -55 },
	{ -144.9749f, 120, -35.66666f },
	{ -144.9593f, 100, -55 },
	{ -144.9581f, 100, -35.66666f },
	{ -64.99978f, 100, 55 },
	{ -64.99978f, 120, 35.66665f },
	{ -64.99978f, 120, 55 },
	{ -64.99978f, 100, 35.66665f },
	{ -144.9593f, 100, 55 },
	{ -144.9581f, 100, 35.66665f },
	{ -144.971f, 120, 55 },
	{ -144.9749f, 120, 35.66665f },
	{ 145.0093f, 120, -35.66666f },
	{ 145.0094f, 120, -55 },
	{ 145.0094f, 100, -55 },
	{ 145.0094f, 100, -35.66666f },
	{ 165.0286f, 120, -35.66666f },
	{ 165.0286f, 120, -55 },
	{ 165.0286f, 100, -55 },
	{ 165.0285f, 100, -35.66666f },
	{ 145.0093f, 120, 35.66665f },
	{ 145.0094f, 120, 55 },
	{ 145.0094f, 100, 35.66665f },
	{ 145.0094f, 100, 55 },
	{ 165.0286f, 120, 35.66665f },
	{ 165.0286f, 120, 55 },
	{ 165.0285f, 100, 35.66665f },
	{ 165.0286f, 100, 55 },
	{ -45.00166f, 120, -35.66666f },
	{ -45.00167f, 120, -55 },
	{ -45.00167f, 100, -35.66666f },
	{ -45.00166f, 100, -55 },
	{ -45.00166f, 120, 55 },
	{ -45.00166f, 120, 35.66665f },
	{ -45.00167f, 100, 55 },
	{ -45.00166f, 100, 35.66665f },
	{ -164.9708f, 120, -55 },
	{ -164.9644f, 100, -55 },
	{ -164.9644f, 100, -35.66666f },
	{ -164.9708f, 120, -35.66666f },
	{ -164.9708f, 120, 55 },
	{ -164.9644f, 100, 55 },
	{ -164.9708f, 120, 35.66665f },
	{ -164.9644f, 100, 35.66665f },
	{ 45.0026f, 100, 35.66665f },
	{ 45.0026f, 100, 55 },
	{ 45.00259f, 120, 35.66665f },
	{ 45.0026f, 120, 55 },
	{ 45.0026f, 100, -55 },
	{ 45.0026f, 100, -35.66666f },
	{ 45.0026f, 120, -55 },
	{ 45.00259f, 120, -35.66666f },
	{ 65, 100, 35.66665f },
	{ 65, 100, 55 },
	{ 64.99998f, 120, 35.66665f },
	{ 65, 120, 55 },
	{ 64.99998f, 120, -35.66666f },
	{ 65, 120, -55 },
	{ 65, 100, -35.66666f },
	{ 65, 100, -55 },
	{ 51.84205f, 122.354f, 45 },
	{ 55, 122.354f, 41.84206f },
	{ 55, 129.8743f, 39.99085f },
	{ 49.99085f, 129.8743f, 45 },
	{ 51.11574f, 119.8744f, 45 },
	{ 55, 119.8744f, 41.11573f },
	{ 58.15794f, 122.354f, 45 },
	{ 60.00915f, 129.8743f, 45 },
	{ 58.88426f, 119.8744f, 45 },
	{ 55, 122.354f, 48.15794f },
	{ 55, 129.8743f, 50.00914f },
	{ 55, 119.8744f, 48.88427f },
	{ 55, 127.6581f, 45 },
	{ 51.84205f, 122.354f, -45 },
	{ 55, 122.354f, -41.84206f },
	{ 55, 129.8743f, -39.99085f },
	{ 49.99085f, 129.8743f, -45 },
	{ 51.11574f, 119.8744f, -45 },
	{ 55, 119.8744f, -41.11573f },
	{ 58.15794f, 122.354f, -45 },
	{ 60.00915f, 129.8743f, -45 },
	{ 58.88426f, 119.8744f, -45 },
	{ 55, 122.354f, -48.15794f },
	{ 55, 129.8743f, -50.00914f },
	{ 55, 119.8744f, -48.88427f },
	{ 55, 127.6581f, -45 },
	{ 151.842f, 122.354f, 45 },
	{ 155, 122.354f, 41.84206f },
	{ 155, 129.8743f, 39.99085f },
	{ 149.9909f, 129.8743f, 45 },
	{ 151.1157f, 119.8744f, 45 },
	{ 155, 119.8744f, 41.11573f },
	{ 158.1579f, 122.354f, 45 },
	{ 160.0091f, 129.8743f, 45 },
	{ 158.8842f, 119.8744f, 45 },
	{ 155, 122.354f, 48.15794f },
	{ 155, 129.8743f, 50.00914f },
	{ 155, 119.8744f, 48.88427f },
	{ 155, 127.6581f, 45 },
	{ 151.842f, 122.354f, -45 },
	{ 155, 122.354f, -41.84206f },
	{ 155, 129.8743f, -39.99085f },
	{ 149.9909f, 129.8743f, -45 },
	{ 151.1157f, 119.8744f, -45 },
	{ 155, 119.8744f, -41.11573f },
	{ 158.1579f, 122.354f, -45 },
	{ 160.0091f, 129.8743f, -45 },
	{ 158.8842f, 119.8744f, -45 },
	{ 155, 122.354f, -48.15794f },
	{ 155, 129.8743f, -50.00914f },
	{ 155, 119.8744f, -48.88427f },
	{ 155, 127.6581f, -45 },
	{ -151.842f, 122.354f, 45 },
	{ -155, 122.354f, 41.84206f },
	{ -155, 129.8743f, 39.99085f },
	{ -149.9909f, 129.8743f, 45 },
	{ -151.1157f, 119.8744f, 45 },
	{ -155, 119.8744f, 41.11573f },
	{ -158.1579f, 122.354f, 45 },
	{ -160.0091f, 129.8743f, 45 },
	{ -158.8842f, 119.8744f, 45 },
	{ -155, 122.354f, 48.15794f },
	{ -155, 129.8743f, 50.00914f },
	{ -155, 119.8744f, 48.88427f },
	{ -155, 127.6581f, 45 },
	{ -151.842f, 122.354f, -45 },
	{ -155, 122.354f, -41.84206f },
	{ -155, 129.8743f, -39.99085f },
	{ -149.9909f, 129.8743f, -45 },
	{ -151.1157f, 119.8744f, -45 },
	{ -155, 119.8744f, -41.11573f },
	{ -158.1579f, 122.354f, -45 },
	{ -160.0091f, 129.8743f, -45 },
	{ -158.8842f, 119.8744f, -45 },
	{ -155, 122.354f, -48.15794f },
	{ -155, 129.8743f, -50.00914f },
	{ -155, 119.8744f, -48.88427f },
	{ -155, 127.6581f, -45 },
	{ -51.84205f, 122.354f, 45 },
	{ -55, 122.354f, 41.84206f },
	{ -55, 129.8743f, 39.99085f },
	{ -49.99085f, 129.8743f, 45 },
	{ -51.11574f, 119.8744f, 45 },
	{ -55, 119.8744f, 41.11573f },
	{ -58.15794f, 122.354f, 45 },
	{ -60.00915f, 129.8743f, 45 },
	{ -58.88426f, 119.8744f, 45 },
	{ -55, 122.354f, 48.15794f },
	{ -55, 129.8743f, 50.00914f },
	{ -55, 119.8744f, 48.88427f },
	{ -55, 127.6581f, 45 },
	{ -51.84205f, 122.354f, -45 },
	{ -55, 122.354f, -41.84206f },
	{ -55, 129.8743f, -39.99085f },
	{ -49.99085f, 129.8743f, -45 },
	{ -51.11574f, 119.8744f, -45 },
	{ -55, 119.8744f, -41.11573f },
	{ -58.15794f, 122.354f, -45 },
	{ -60.00915f, 129.8743f, -45 },
	{ -58.88426f, 119.8744f, -45 },
	{ -55, 122.354f, -48.15794f },
	{ -55, 129.8743f, -50.00914f },
	{ -55, 119.8744f, -48.88427f },
	{ -55, 127.6581f, -45 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000ADD6C[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.535746f, -0.236998f, -0.810437f },
	{ 0.9145139f, -0.404554f, 0 },
	{ 0, 1, 0 },
	{ 0.217338f, -0.562169f, -0.797954f },
	{ 0.360597f, -0.932722f, 0 },
	{ 0, 1, 0 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.217338f, -0.562169f, -0.797954f },
	{ -0.360597f, -0.932722f, 0 },
	{ 0, 1, 0 },
	{ -0.535746f, -0.236998f, -0.810437f },
	{ 0.7071069f, 0, 0.7071069f },
	{ -0.9145139f, -0.404554f, 0 },
	{ 0, 1, 0 },
	{ 0.535747f, -0.236998f, 0.810437f },
	{ 0, 0, 1 },
	{ 0.9145139f, -0.404554f, 0 },
	{ 0.217338f, -0.562169f, 0.797954f },
	{ 0.360597f, -0.932722f, 0 },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.217338f, -0.562169f, 0.797954f },
	{ -0.360597f, -0.932722f, 0 },
	{ 0, 0, -1 },
	{ -0.535746f, -0.236998f, 0.810437f },
	{ 0, 1, 0 },
	{ -0.9145139f, -0.404554f, 0 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 0, -1 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0, -1 },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0, 0, -1 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 1, 0, 0 },
	{ 0, 0, 1 },
	{ 1, 0, 0 },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -1, 0, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0, 0, 1 },
	{ -0.7071069f, 0, 0.7071069f },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -1, 0, 0 },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.8944229f, 0, -0.447221f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ -1, 0, 0 },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.894428f, 0, 0.447213f },
	{ -0.894428f, 0, 0.447213f },
	{ 0.8944269f, 0, -0.447214f },
	{ 1, 0, 0 },
	{ 0.8944269f, 0, 0.447214f },
	{ -0.8944269f, 0, 0.447214f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ -1, 0, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.447214f, 0, -0.8944269f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ -1, 0, 0 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 1, 0, 0 },
	{ 0, 0, 1 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0.7071069f, 0, 0.7071069f },
	{ -1, 0, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -1, 0, 0 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.447214f, 0, -0.8944269f },
	{ 0, 0, 1 },
	{ -1, 0, 0 },
	{ -0.577354f, 0.577368f, 0.577329f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.707092f, 0.000048f, 0.707122f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.707105f, -0.707109f },
	{ -0.57735f, 0.5773489f, -0.577352f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.707108f, -0.00004f, -0.707106f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0.707131f, 0.707083f },
	{ 0, 0.00006799999f, 1 },
	{ 0, -0.00005f, -1 },
	{ 0.707092f, 0.000048f, 0.707122f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.577354f, 0.577368f, 0.577329f },
	{ 0.57735f, 0.5773489f, -0.577352f },
	{ 1, 0, 0 },
	{ 0.707108f, -0.00004f, -0.707106f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0, 0.707105f, -0.707109f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0, 1 },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.707131f, 0.707083f },
	{ 0, 0.00006799999f, 1 },
	{ 0, -0.00005f, -1 },
	{ 0.431305f, 0, 0.9022059f },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ -0.57735f, -0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.577155f, 0.577491f, -0.577405f },
	{ 0.577099f, 0.5775819f, 0.57737f },
	{ 0.577538f, -0.577152f, -0.57736f },
	{ 0.5776089f, -0.577176f, 0.577265f },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, -0.57735f, -0.57735f },
	{ 0.577538f, -0.577152f, 0.57736f },
	{ 0.5776089f, -0.577176f, -0.577265f },
	{ 0.577155f, 0.577491f, 0.577405f },
	{ 0.577099f, 0.5775819f, -0.57737f },
	{ -0.577351f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, -0.577351f, -0.57735f },
	{ -0.57735f, -0.57735f, 0.577351f },
	{ 0.57735f, 0.5773489f, 0.577351f },
	{ 0.577351f, 0.57735f, -0.57735f },
	{ 0.577351f, -0.577351f, -0.5773489f },
	{ 0.5773489f, -0.577351f, 0.577351f },
	{ -0.577351f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, -0.57735f, -0.577351f },
	{ -0.57735f, -0.577351f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.577351f },
	{ 0.577351f, 0.57735f, 0.5773489f },
	{ 0.5773489f, -0.577351f, -0.577351f },
	{ 0.577351f, -0.577351f, 0.5773489f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, 0.577351f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ -0.57745f, 0.577267f, -0.577334f },
	{ -0.5772499f, -0.5774339f, -0.5773669f },
	{ -0.5772499f, -0.5774339f, 0.5773669f },
	{ -0.57745f, 0.577267f, 0.577334f },
	{ -0.57745f, 0.577267f, 0.577334f },
	{ -0.5772499f, -0.5774339f, 0.5773669f },
	{ -0.57745f, 0.577267f, -0.577334f },
	{ -0.5772499f, -0.5774339f, -0.5773669f },
	{ -0.57735f, -0.57735f, -0.57735f },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, -0.57735f, -0.57735f },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ -0.9996909f, 0.024879f, 0 },
	{ 0, 0.024879f, -0.9996909f },
	{ 0, 0.605751f, -0.795654f },
	{ -0.795654f, 0.605751f, 0 },
	{ -0.959676f, 0.281109f, 0 },
	{ 0, 0.281109f, -0.959676f },
	{ 0.9996909f, 0.024879f, 0 },
	{ 0.795654f, 0.605751f, 0 },
	{ 0.959676f, 0.281109f, 0 },
	{ 0, 0.024879f, 0.9996909f },
	{ 0, 0.605751f, 0.795654f },
	{ 0, 0.281109f, 0.959676f },
	{ 0, 1, 0 },
	{ -0.9996909f, 0.024879f, 0 },
	{ 0, 0.024879f, 0.9996909f },
	{ 0, 0.605751f, 0.795654f },
	{ -0.795654f, 0.605751f, 0 },
	{ -0.959676f, 0.281109f, 0 },
	{ 0, 0.281109f, 0.959676f },
	{ 0.9996909f, 0.024879f, 0 },
	{ 0.795654f, 0.605751f, 0 },
	{ 0.959676f, 0.281109f, 0 },
	{ 0, 0.024879f, -0.9996909f },
	{ 0, 0.605751f, -0.795654f },
	{ 0, 0.281109f, -0.959676f },
	{ 0, 1, 0 },
	{ -0.9996909f, 0.024879f, 0 },
	{ 0, 0.024879f, -0.9996909f },
	{ 0, 0.605751f, -0.795654f },
	{ -0.795654f, 0.605751f, 0 },
	{ -0.959676f, 0.281109f, 0 },
	{ 0, 0.281109f, -0.959676f },
	{ 0.9996909f, 0.024879f, 0 },
	{ 0.795654f, 0.605751f, 0 },
	{ 0.959676f, 0.281109f, 0 },
	{ 0, 0.024879f, 0.9996909f },
	{ 0, 0.605751f, 0.795654f },
	{ 0, 0.281109f, 0.959676f },
	{ 0, 1, 0 },
	{ -0.9996909f, 0.024879f, 0 },
	{ 0, 0.024879f, 0.9996909f },
	{ 0, 0.605751f, 0.795654f },
	{ -0.795654f, 0.605751f, 0 },
	{ -0.959676f, 0.281109f, 0 },
	{ 0, 0.281109f, 0.959676f },
	{ 0.9996909f, 0.024879f, 0 },
	{ 0.795654f, 0.605751f, 0 },
	{ 0.959676f, 0.281109f, 0 },
	{ 0, 0.024879f, -0.9996909f },
	{ 0, 0.605751f, -0.795654f },
	{ 0, 0.281109f, -0.959676f },
	{ 0, 1, 0 },
	{ 0.9996909f, 0.024879f, 0 },
	{ 0, 0.024879f, -0.9996909f },
	{ 0, 0.605751f, -0.795654f },
	{ 0.795654f, 0.605751f, 0 },
	{ 0.959676f, 0.281109f, 0 },
	{ 0, 0.281109f, -0.959676f },
	{ -0.9996909f, 0.024879f, 0 },
	{ -0.795654f, 0.605751f, 0 },
	{ -0.959676f, 0.281109f, 0 },
	{ 0, 0.024879f, 0.9996909f },
	{ 0, 0.605751f, 0.795654f },
	{ 0, 0.281109f, 0.959676f },
	{ 0, 1, 0 },
	{ 0.9996909f, 0.024879f, 0 },
	{ 0, 0.024879f, 0.9996909f },
	{ 0, 0.605751f, 0.795654f },
	{ 0.795654f, 0.605751f, 0 },
	{ 0.959676f, 0.281109f, 0 },
	{ 0, 0.281109f, 0.959676f },
	{ -0.9996909f, 0.024879f, 0 },
	{ -0.795654f, 0.605751f, 0 },
	{ -0.959676f, 0.281109f, 0 },
	{ 0, 0.024879f, -0.9996909f },
	{ 0, 0.605751f, -0.795654f },
	{ 0, 0.281109f, -0.959676f },
	{ 0, 1, 0 },
	{ 0.9996909f, 0.024879f, 0 },
	{ 0, 0.024879f, -0.9996909f },
	{ 0, 0.605751f, -0.795654f },
	{ 0.795654f, 0.605751f, 0 },
	{ 0.959676f, 0.281109f, 0 },
	{ 0, 0.281109f, -0.959676f },
	{ -0.9996909f, 0.024879f, 0 },
	{ -0.795654f, 0.605751f, 0 },
	{ -0.959676f, 0.281109f, 0 },
	{ 0, 0.024879f, 0.9996909f },
	{ 0, 0.605751f, 0.795654f },
	{ 0, 0.281109f, 0.959676f },
	{ 0, 1, 0 },
	{ 0.9996909f, 0.024879f, 0 },
	{ 0, 0.024879f, 0.9996909f },
	{ 0, 0.605751f, 0.795654f },
	{ 0.795654f, 0.605751f, 0 },
	{ 0.959676f, 0.281109f, 0 },
	{ 0, 0.281109f, 0.959676f },
	{ -0.9996909f, 0.024879f, 0 },
	{ -0.795654f, 0.605751f, 0 },
	{ -0.959676f, 0.281109f, 0 },
	{ 0, 0.024879f, -0.9996909f },
	{ 0, 0.605751f, -0.795654f },
	{ 0, 0.281109f, -0.959676f },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000AEE34 = { vertex_000ACCA4, normal_000ADD6C, LengthOfArray<Sint32>(vertex_000ACCA4), meshlist_000ACB84, matlist_000AB494, LengthOfArray<Uint16>(meshlist_000ACB84), LengthOfArray<Uint16>(matlist_000AB494), { 0, -10, 0.25f }, 286.5309f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000AEE5C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000AEE34, 0, -171, 1038, 0, 0x3FFF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000AEE90[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0x7FFFFFFF }, { 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
};

extern "C" __declspec(dllexport) Sint16 poly_000AEEF4[] = {
	5, 45, 48, 0, 47, 46,
	0x8000u | 5, 45, 44, 0, 43, 42,
	5, 39, 37, 0, 38, 42,
	0x8000u | 5, 39, 41, 0, 40, 46
};

extern "C" __declspec(dllexport) Sint16 poly_000AEF24[] = {
	0x8000u | 26, 40, 28, 46, 34, 47, 35, 48, 36, 45, 33, 44, 32, 43, 31, 42, 30, 38, 26, 37, 25, 39, 27, 41, 29, 40, 28,
	26, 68, 16, 67, 22, 66, 23, 65, 24, 64, 21, 63, 20, 62, 19, 61, 18, 72, 14, 71, 13, 70, 15, 69, 17, 68, 16
};

extern "C" __declspec(dllexport) Sint16 poly_000AEF90[] = {
	4, 26, 25, 14, 13,
	4, 25, 27, 13, 15,
	4, 31, 30, 19, 18,
	4, 30, 26, 18, 14,
	4, 36, 33, 24, 21,
	4, 35, 36, 23, 24,
	4, 28, 34, 16, 22,
	4, 34, 35, 22, 23,
	4, 29, 28, 17, 16,
	4, 27, 29, 15, 17,
	4, 32, 31, 20, 19,
	4, 33, 32, 21, 20
};

extern "C" __declspec(dllexport) Sint16 poly_000AF008[] = {
	26, 4, 50, 10, 57, 11, 49, 12, 59, 9, 51, 8, 53, 7, 55, 6, 60, 2, 58, 1, 56, 3, 54, 5, 52, 4, 50
};

extern "C" __declspec(dllexport) Sint16 poly_000AF03E[] = {
	26, 68, 50, 69, 52, 70, 54, 71, 56, 72, 58, 61, 60, 62, 55, 63, 53, 64, 51, 65, 59, 66, 49, 67, 57, 68, 50
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AF074[] = {
	{ 787, -1864 },
	{ 1274, -1994 },
	{ 1275, -1020 },
	{ 1761, -1864 },
	{ 2119, -1506 },
	{ 787, -1864 },
	{ 430, -1506 },
	{ 1275, -1020 },
	{ 298, -1019 },
	{ 430, -532 },
	{ 1761, -175 },
	{ 1275, -44 },
	{ 1275, -1020 },
	{ 787, -175 },
	{ 430, -532 },
	{ 1761, -175 },
	{ 2119, -532 },
	{ 1275, -1020 },
	{ 2249, -1020 },
	{ 2119, -1506 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AF0C4[] = {
	{ 6120, -646 },
	{ 6120, -740 },
	{ 5632, -646 },
	{ 5632, -740 },
	{ 5120, -646 },
	{ 5120, -740 },
	{ 4608, -646 },
	{ 4608, -740 },
	{ 4096, -646 },
	{ 4096, -740 },
	{ 3584, -646 },
	{ 3584, -740 },
	{ 3072, -646 },
	{ 3072, -740 },
	{ 2560, -646 },
	{ 2560, -740 },
	{ 2048, -646 },
	{ 2048, -740 },
	{ 1536, -646 },
	{ 1536, -740 },
	{ 1024, -646 },
	{ 1024, -740 },
	{ 512, -646 },
	{ 512, -740 },
	{ 0, -646 },
	{ 0, -740 },
	{ 6120, -502 },
	{ 6120, -740 },
	{ 5632, -502 },
	{ 5632, -740 },
	{ 5120, -502 },
	{ 5120, -740 },
	{ 4608, -502 },
	{ 4608, -740 },
	{ 4096, -502 },
	{ 4096, -740 },
	{ 3584, -502 },
	{ 3584, -740 },
	{ 3072, -502 },
	{ 3072, -740 },
	{ 2560, -502 },
	{ 2560, -740 },
	{ 2048, -502 },
	{ 2048, -740 },
	{ 1536, -502 },
	{ 1536, -740 },
	{ 1024, -502 },
	{ 1024, -740 },
	{ 512, -502 },
	{ 512, -740 },
	{ 0, -502 },
	{ 0, -740 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AF194[] = {
	{ 758, 1 },
	{ 5, 1 },
	{ 758, 253 },
	{ 5, 253 },
	{ 758, 1 },
	{ 5, 1 },
	{ 758, 253 },
	{ 5, 253 },
	{ 758, 1 },
	{ 5, 1 },
	{ 758, 253 },
	{ 5, 253 },
	{ 758, 1 },
	{ 5, 1 },
	{ 758, 253 },
	{ 5, 253 },
	{ 758, 1 },
	{ 5, 1 },
	{ 758, 253 },
	{ 5, 253 },
	{ 758, 1 },
	{ 5, 1 },
	{ 758, 253 },
	{ 5, 253 },
	{ 758, 1 },
	{ 5, 1 },
	{ 758, 253 },
	{ 5, 253 },
	{ 758, 1 },
	{ 5, 1 },
	{ 758, 253 },
	{ 5, 253 },
	{ 758, 1 },
	{ 5, 1 },
	{ 758, 253 },
	{ 5, 253 },
	{ 758, 1 },
	{ 5, 1 },
	{ 758, 253 },
	{ 5, 253 },
	{ 758, 1 },
	{ 5, 1 },
	{ 758, 253 },
	{ 5, 253 },
	{ 758, 1 },
	{ 5, 1 },
	{ 758, 253 },
	{ 5, 253 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AF254[] = {
	{ 6120, 69 },
	{ 6120, -227 },
	{ 5632, 69 },
	{ 5632, -227 },
	{ 5120, 69 },
	{ 5120, -227 },
	{ 4608, 69 },
	{ 4608, -227 },
	{ 4096, 69 },
	{ 4096, -227 },
	{ 3584, 69 },
	{ 3584, -227 },
	{ 3072, 69 },
	{ 3072, -227 },
	{ 2560, 69 },
	{ 2560, -227 },
	{ 2048, 69 },
	{ 2048, -227 },
	{ 1536, 69 },
	{ 1536, -227 },
	{ 1024, 69 },
	{ 1024, -227 },
	{ 512, 69 },
	{ 512, -227 },
	{ 0, 69 },
	{ 0, -227 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AF2BC[] = {
	{ 0, -525 },
	{ 0, -92 },
	{ 512, -525 },
	{ 512, -92 },
	{ 1024, -525 },
	{ 1024, -92 },
	{ 1536, -525 },
	{ 1536, -92 },
	{ 2048, -525 },
	{ 2048, -92 },
	{ 2560, -525 },
	{ 2560, -92 },
	{ 3072, -525 },
	{ 3072, -92 },
	{ 3584, -525 },
	{ 3584, -92 },
	{ 4096, -525 },
	{ 4096, -92 },
	{ 4608, -525 },
	{ 4608, -92 },
	{ 5120, -525 },
	{ 5120, -92 },
	{ 5632, -525 },
	{ 5632, -92 },
	{ 6120, -525 },
	{ 6120, -92 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000AF324[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000AEF24, NULL, NULL, NULL, uv_000AF0C4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 12, poly_000AEF90, NULL, NULL, NULL, uv_000AF194, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000AF008, NULL, NULL, NULL, uv_000AF254, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_000AF03E, NULL, NULL, NULL, uv_000AF2BC, NULL }
	
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000AF324_2[] = {
	{ NJD_MESHSET_TRIMESH | 4, 4, poly_000AEEF4, NULL, NULL, NULL, uv_000AF074, NULL },
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000AF39C[] = {
	{ 0, 85.5f, 0 },
	{ 0.000017f, 40.50001f, -119.7f },
	{ -59.84998f, 40.50001f, -103.6632f },
	{ 59.85002f, 40.50001f, -103.6632f },
	{ 119.7f, 40.5f, 0.000001f },
	{ 103.6632f, 40.5f, -59.84998f },
	{ -103.6632f, 40.5f, -59.85001f },
	{ -119.7f, 40.5f, -0.00012f },
	{ -103.6632f, 40.5f, 59.84998f },
	{ -59.85001f, 40.49999f, 103.6632f },
	{ 103.6632f, 40.5f, 59.85f },
	{ 59.84999f, 40.49999f, 103.6632f },
	{ -0.00006f, 40.49999f, 119.7f },
	{ 0.000014f, 90.00001f, -101.745f },
	{ -50.87249f, 90.00001f, -88.11377f },
	{ 50.87251f, 90.00001f, -88.11373f },
	{ 101.745f, 90, 0.000001f },
	{ 88.11377f, 90, -50.87248f },
	{ -88.11375f, 90, -50.87251f },
	{ -101.745f, 90, -0.0001f },
	{ -88.11377f, 90, 50.87249f },
	{ -50.87251f, 89.99998f, 88.11375f },
	{ 88.11375f, 90, 50.8725f },
	{ 50.87249f, 89.99998f, 88.11375f },
	{ -0.00005f, 89.99998f, 101.745f },
	{ 0.000013f, 90.00001f, -91.5705f },
	{ -45.78524f, 90.00001f, -79.30238f },
	{ 45.78526f, 90.00001f, -79.30236f },
	{ 91.5705f, 90, 0.000001f },
	{ 79.30238f, 90, -45.78523f },
	{ -79.30238f, 90, -45.78526f },
	{ -91.5705f, 90, -0.00008999999f },
	{ -79.30238f, 90, 45.78524f },
	{ -45.78518f, 89.99998f, 79.30207f },
	{ 79.30238f, 90, 45.78525f },
	{ 45.78524f, 89.99998f, 79.30238f },
	{ 0.00009099999f, 89.99998f, 91.57019f },
	{ 0.000013f, 85.50001f, -91.5705f },
	{ -45.78524f, 85.50001f, -79.30238f },
	{ 45.78526f, 85.50001f, -79.30236f },
	{ 91.5705f, 85.5f, 0.000001f },
	{ 79.30238f, 85.5f, -45.78523f },
	{ -79.30238f, 85.5f, -45.78526f },
	{ -91.5705f, 85.5f, -0.00008999999f },
	{ -79.30238f, 85.5f, 45.78524f },
	{ -45.78526f, 85.49998f, 79.30238f },
	{ 79.30238f, 85.5f, 45.78525f },
	{ 45.78524f, 85.49998f, 79.30238f },
	{ -0.00005f, 85.49998f, 91.5705f },
	{ 56.98428f, 57.37501f, 98.69965f },
	{ 113.9686f, 57.37501f, 0.000001f },
	{ -56.9843f, 57.37501f, 98.69963f },
	{ 98.69965f, 57.37501f, -56.98425f },
	{ -98.69965f, 57.37501f, 56.98428f },
	{ 56.9843f, 57.37502f, -98.69963f },
	{ -113.9686f, 57.37501f, -0.00011f },
	{ 0.000016f, 57.37502f, -113.9686f },
	{ 98.69963f, 57.37501f, 56.9843f },
	{ -56.98428f, 57.37502f, -98.69965f },
	{ -0.00006f, 57.37501f, 113.9686f },
	{ -98.69963f, 57.37501f, -56.9843f },
	{ -91.45466f, 78.43753f, -52.8014f },
	{ -105.6028f, 78.43753f, -0.0001f },
	{ -91.45466f, 78.43753f, 52.80138f },
	{ -52.80141f, 78.43751f, 91.45466f },
	{ -0.00006f, 78.43751f, 105.6028f },
	{ 52.80139f, 78.43751f, 91.45466f },
	{ 91.45466f, 78.43753f, 52.80139f },
	{ 105.6028f, 78.43753f, 0.000001f },
	{ 91.45466f, 78.43753f, -52.80137f },
	{ 52.80141f, 78.43753f, -91.45465f },
	{ 0.000015f, 78.43753f, -105.6028f },
	{ -52.80138f, 78.43753f, -91.45467f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000AF708[] = {
	{ 0, 1, 0 },
	{ 0, 0.321597f, -0.9468769f },
	{ -0.473438f, 0.321598f, -0.8200189f },
	{ 0.473438f, 0.321598f, -0.8200189f },
	{ 0.9468769f, 0.321597f, 0 },
	{ 0.8200189f, 0.321598f, -0.473438f },
	{ -0.8200189f, 0.321597f, -0.473438f },
	{ -0.9468769f, 0.321597f, 0 },
	{ -0.8200189f, 0.321598f, 0.473438f },
	{ -0.473438f, 0.321597f, 0.8200189f },
	{ 0.8200189f, 0.321597f, 0.473438f },
	{ 0.473438f, 0.321597f, 0.8200189f },
	{ 0, 0.321597f, 0.9468769f },
	{ 0, 0.766931f, -0.64173f },
	{ -0.320865f, 0.76693f, -0.555755f },
	{ 0.320865f, 0.76693f, -0.555755f },
	{ 0.64173f, 0.76693f, 0 },
	{ 0.555755f, 0.76693f, -0.320865f },
	{ -0.555755f, 0.76693f, -0.320865f },
	{ -0.64173f, 0.76693f, 0 },
	{ -0.555755f, 0.76693f, 0.320865f },
	{ -0.320865f, 0.76693f, 0.555755f },
	{ 0.555755f, 0.76693f, 0.320865f },
	{ 0.320865f, 0.76693f, 0.555755f },
	{ 0, 0.76693f, 0.64173f },
	{ 0, 0.7702619f, 0.637728f },
	{ 0.318864f, 0.7702619f, 0.5522889f },
	{ -0.318864f, 0.7702619f, 0.5522889f },
	{ -0.637728f, 0.7702619f, 0 },
	{ -0.552288f, 0.7702619f, 0.318864f },
	{ 0.552288f, 0.7702619f, 0.318864f },
	{ 0.637728f, 0.7702619f, 0 },
	{ 0.552296f, 0.770254f, -0.318869f },
	{ 0.318878f, 0.7702399f, -0.55231f },
	{ -0.552288f, 0.7702619f, -0.318864f },
	{ -0.318863f, 0.7702619f, -0.552288f },
	{ -0.00001f, 0.770248f, -0.6377439f },
	{ 0, 0.653227f, 0.757162f },
	{ 0.378581f, 0.653227f, 0.655722f },
	{ -0.378581f, 0.653227f, 0.655722f },
	{ -0.757162f, 0.653227f, 0 },
	{ -0.655722f, 0.653227f, 0.378581f },
	{ 0.655722f, 0.653227f, 0.378581f },
	{ 0.757162f, 0.653227f, 0 },
	{ 0.655731f, 0.653214f, -0.378588f },
	{ 0.378589f, 0.653201f, -0.655742f },
	{ -0.655722f, 0.653227f, -0.378581f },
	{ -0.37858f, 0.653227f, -0.655722f },
	{ 0.000004f, 0.653215f, -0.7571729f },
	{ 0.469461f, 0.344131f, 0.81313f },
	{ 0.938922f, 0.344131f, 0 },
	{ -0.469461f, 0.344131f, 0.81313f },
	{ 0.81313f, 0.344131f, -0.469461f },
	{ -0.81313f, 0.344131f, 0.469461f },
	{ 0.469461f, 0.344131f, -0.81313f },
	{ -0.938922f, 0.344131f, 0 },
	{ 0, 0.344131f, -0.938922f },
	{ 0.81313f, 0.344131f, 0.469461f },
	{ -0.469461f, 0.344131f, -0.81313f },
	{ 0, 0.344131f, 0.938922f },
	{ -0.81313f, 0.344131f, -0.469461f },
	{ -0.813029f, 0.344449f, -0.469403f },
	{ -0.938805f, 0.344449f, 0 },
	{ -0.813029f, 0.344449f, 0.469403f },
	{ -0.469403f, 0.344449f, 0.813029f },
	{ 0, 0.344449f, 0.938805f },
	{ 0.469403f, 0.344449f, 0.813029f },
	{ 0.813029f, 0.344449f, 0.469403f },
	{ 0.938805f, 0.344449f, 0 },
	{ 0.813029f, 0.344449f, -0.469403f },
	{ 0.469403f, 0.344449f, -0.813029f },
	{ 0, 0.344449f, -0.938805f },
	{ -0.469403f, 0.344449f, -0.813029f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000AFA74 = { vertex_000AF39C, normal_000AF708, LengthOfArray<Sint32>(vertex_000AF39C), meshlist_000AF324, matlist_000AEE90, LengthOfArray<Uint16>(meshlist_000AF324), LengthOfArray<Uint16>(matlist_000AEE90), { 0, 65.25f, 0 }, 163.5132f, NULL };

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000AFA74_2 = { vertex_000AF39C, normal_000AF708, LengthOfArray<Sint32>(vertex_000AF39C), meshlist_000AF324_2, matlist_000AEE90, LengthOfArray<Uint16>(meshlist_000AF324_2), LengthOfArray<Uint16>(matlist_000AEE90), { 0, 65.25f, 0 }, 163.5132f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000AFA9C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000AFA74, 0, 0, 0, 0, 0xAAA, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000AFA9C_2 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000AFA74_2, 0, 0, 0, 0, 0xAAA, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000AFAD0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000AFB34[] = {
	4, 2, 3, 1, 25,
	4, 3, 2, 6, 5,
	0x8000u | 6, 6, 9, 5, 8, 4, 7,
	4, 16, 18, 13, 19,
	0x8000u | 6, 14, 10, 13, 11, 19, 12,
	4, 15, 24, 16, 18,
	4, 39, 41, 35, 29,
	4, 29, 15, 43, 14,
	4, 31, 28, 37, 36,
	9, 35, 29, 30, 43, 31, 42, 28, 4, 1,
	3, 30, 34, 35,
	4, 38, 34, 33, 30,
	4, 37, 21, 31, 32,
	4, 36, 28, 20, 40
};

extern "C" __declspec(dllexport) Sint16 poly_000AFBD0[] = {
	4, 2, 1, 5, 4,
	4, 15, 16, 14, 13,
	4, 18, 26, 19, 12,
	4, 6, 9, 3, 27,
	4, 36, 20, 37, 21,
	4, 34, 38, 35, 39
};

extern "C" __declspec(dllexport) Sint16 poly_000AFC0C[] = {
	4, 26, 18, 17, 24,
	4, 0, 25, 27, 3
};

extern "C" __declspec(dllexport) Sint16 poly_000AFC20[] = {
	3, 22, 17, 24,
	6, 28, 1, 40, 25, 23, 0,
	0x8000u | 5, 15, 24, 29, 22, 41
};

extern "C" __declspec(dllexport) Sint16 poly_000AFC42[] = {
	4, 4, 42, 14, 43
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AFC4C[] = {
	{ 4417, 255 },
	{ 4590, 254 },
	{ 1402, -2021 },
	{ 1576, -2021 },
	{ 0, -764 },
	{ 191, -764 },
	{ 0, -661 },
	{ 191, -661 },
	{ 4590, 254 },
	{ 4590, 124 },
	{ 4417, 255 },
	{ 4417, 124 },
	{ 1402, -2021 },
	{ 1402, -2151 },
	{ 191, 255 },
	{ 0, 255 },
	{ 191, 153 },
	{ 0, 153 },
	{ 1402, -2021 },
	{ 1402, -2151 },
	{ 4417, 255 },
	{ 4417, 124 },
	{ 4590, 254 },
	{ 4590, 124 },
	{ 1402, -2021 },
	{ 1576, -2021 },
	{ 4417, 255 },
	{ 4590, 254 },
	{ 0, -2294 },
	{ 540, -2294 },
	{ 0, -2099 },
	{ 541, -2021 },
	{ 4495, 254 },
	{ 3539, 254 },
	{ 4427, 152 },
	{ 3539, 152 },
	{ 4495, -661 },
	{ 4495, -764 },
	{ 5100, -662 },
	{ 5100, -765 },
	{ 5100, 254 },
	{ 4495, 254 },
	{ 4495, 152 },
	{ 4427, 152 },
	{ 4495, -661 },
	{ 4427, -661 },
	{ 4495, -764 },
	{ 3539, -661 },
	{ 3539, -764 },
	{ 4495, 152 },
	{ 5100, 152 },
	{ 5100, 254 },
	{ 0, -2294 },
	{ 0, -2099 },
	{ 541, -2294 },
	{ 541, -2021 },
	{ 0, -2099 },
	{ 0, -2294 },
	{ 541, -2021 },
	{ 541, -2294 },
	{ 0, -2099 },
	{ 541, -2021 },
	{ 0, -2294 },
	{ 540, -2294 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AFD4C[] = {
	{ 78, -2295 },
	{ 78, -18 },
	{ 190, -2295 },
	{ 190, -18 },
	{ 1195, -18 },
	{ 1195, -2295 },
	{ 1083, -18 },
	{ 1083, -2295 },
	{ 1195, -2295 },
	{ 1195, -2164 },
	{ 1083, -2295 },
	{ 1083, -2164 },
	{ 190, -2295 },
	{ 190, -2164 },
	{ 78, -2295 },
	{ 78, -2164 },
	{ 78, 59 },
	{ 78, 255 },
	{ 190, 59 },
	{ 190, 255 },
	{ 1083, 59 },
	{ 1083, 255 },
	{ 1195, 59 },
	{ 1195, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AFDAC[] = {
	{ 0, -1195 },
	{ 0, -1275 },
	{ 420, 91 },
	{ 2008, 91 },
	{ 420, 91 },
	{ 2008, 91 },
	{ 0, -1195 },
	{ 0, -1275 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AFDCC[] = {
	{ 420, 34 },
	{ 420, -98 },
	{ 2008, -98 },
	{ 2697, -98 },
	{ 2123, -98 },
	{ 2698, 34 },
	{ 2008, -98 },
	{ 420, 34 },
	{ 420, -98 },
	{ 2123, -98 },
	{ 2008, -98 },
	{ 2697, -98 },
	{ 420, 34 },
	{ 2698, 34 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AFE04[] = {
	{ 76, -1464 },
	{ 76, -1906 },
	{ 688, -1464 },
	{ 688, -1906 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000AFE14[] = {
	{ NJD_MESHSET_TRIMESH | 0, 14, poly_000AFB34, NULL, NULL, NULL, uv_000AFC4C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_000AFBD0, NULL, NULL, NULL, uv_000AFD4C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_000AFC0C, NULL, NULL, NULL, uv_000AFDAC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 3, poly_000AFC20, NULL, NULL, NULL, uv_000AFDCC, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_000AFC42, NULL, NULL, NULL, uv_000AFE04, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000AFE8C[] = {
	{ -25, -2.5f, -50 },
	{ -25, -2.5f, 61 },
	{ -25, 85, -70 },
	{ -25, 85, -77.5f },
	{ -20, -2.5f, 61 },
	{ -20, 85, -70 },
	{ -20, 85, -77.5f },
	{ -20, -7.5f, 61 },
	{ -20, 80, -70 },
	{ -20, 80, -77.5f },
	{ 20, -7.5f, 61 },
	{ 20, 80, -70 },
	{ 20, 80, -77.5f },
	{ 20, 85, -70 },
	{ 20, -2.5f, 61 },
	{ 25, -2.5f, 61 },
	{ 25, 85, -70 },
	{ 25, -2.5f, -50 },
	{ 25, 85, -77.5f },
	{ 20, 85, -77.5f },
	{ -25, -13, 122 },
	{ -20, -13, 122 },
	{ 25, -13, -50 },
	{ -25, -13, -50 },
	{ 25, -2.5f, 53.5f },
	{ -25, -2.5f, 53.5f },
	{ 25, 80, -77.5f },
	{ -25, 80, -77.5f },
	{ -25, -2.5f, 98.41002f },
	{ 25, -2.5f, 98.41002f },
	{ 20, -2.5f, 98.41002f },
	{ -20, -2.5f, 98.41002f },
	{ -20, -13, 98.41003f },
	{ 20, -13, 98.41003f },
	{ 20, -5.5f, 122 },
	{ 25, -5.5f, 122 },
	{ -25, -5.5f, 122 },
	{ -20, -5.5f, 122 },
	{ 20, -13, 122 },
	{ 25, -13, 122 },
	{ -25, -13, 98.5f },
	{ 25, -13, 98.5f },
	{ -20, -2.5f, 95.705f },
	{ 20, -2.5f, 95.705f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B009C[] = {
	{ -1, 0, 0 },
	{ -0.778623f, 0.6004879f, 0.182102f },
	{ -0.647247f, 0.729475f, 0.221218f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.430147f, 0.885877f, 0.173771f },
	{ 0.647247f, 0.729475f, 0.221218f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.647247f, 0.729475f, 0.221218f },
	{ -0.430147f, 0.885877f, 0.173771f },
	{ 0.778623f, 0.6004879f, 0.182102f },
	{ 0.647247f, 0.729475f, 0.221218f },
	{ 1, 0, 0 },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 0.873602f, 0, -0.486641f },
	{ -0.873602f, 0, -0.486641f },
	{ -0.693154f, 0.719349f, 0.045557f },
	{ 0.693154f, 0.719349f, 0.045557f },
	{ -0.293513f, 0.955107f, 0.040272f },
	{ 0.293513f, 0.955107f, 0.040272f },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.584295f, 0.536429f, 0.608969f },
	{ 0.584295f, 0.536429f, 0.608969f },
	{ -0.584295f, 0.536429f, 0.608969f },
	{ 0.584295f, 0.536429f, 0.608969f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B02AC = { vertex_000AFE8C, normal_000B009C, LengthOfArray<Sint32>(vertex_000AFE8C), meshlist_000AFE14, matlist_000AFAD0, LengthOfArray<Uint16>(meshlist_000AFE14), LengthOfArray<Uint16>(matlist_000AFAD0), { 0, 36, 22.25f }, 111.1353f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B02D4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B02AC, 0, 10, 170, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B0308[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 34, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B0358[] = {
	4, 10, 11, 5, 4,
	4, 12, 13, 15, 14
};

extern "C" __declspec(dllexport) Sint16 poly_000B036C[] = {
	4, 4, 11, 6, 3,
	4, 10, 5, 2, 7
};

extern "C" __declspec(dllexport) Sint16 poly_000B0380[] = {
	4, 7, 0, 2, 9,
	4, 8, 1, 3, 6
};

extern "C" __declspec(dllexport) Sint16 poly_000B0394[] = {
	4, 14, 13, 8, 1,
	4, 12, 15, 0, 9
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B03A8[] = {
	{ 203, 187 },
	{ 203, -195 },
	{ 1349, 187 },
	{ 1349, -195 },
	{ 203, 187 },
	{ 203, -195 },
	{ 1349, 187 },
	{ 1349, -195 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B03C8[] = {
	{ 2, 36 },
	{ 761, 36 },
	{ 2, 254 },
	{ 761, 254 },
	{ 2, 36 },
	{ 761, 36 },
	{ 2, 254 },
	{ 761, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B03E8[] = {
	{ 1517, 1 },
	{ 1517, 253 },
	{ 11, 1 },
	{ 11, 253 },
	{ 1517, 253 },
	{ 11, 253 },
	{ 1517, 1 },
	{ 11, 1 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B0408[] = {
	{ 11, 253 },
	{ 1517, 253 },
	{ 11, 1 },
	{ 1517, 1 },
	{ 1517, 253 },
	{ 11, 253 },
	{ 1517, 1 },
	{ 11, 1 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B0428[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000B0358, NULL, NULL, NULL, uv_000B03A8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000B036C, NULL, NULL, NULL, uv_000B03C8, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_000B0380, NULL, NULL, NULL, uv_000B03E8, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_000B0394, NULL, NULL, NULL, uv_000B0408, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B0488[] = {
	{ 22, 42.5f, -328.35f },
	{ 22, 42.5f, -317.35f },
	{ -22, 48.75f, -328.35f },
	{ -22, 48.75f, -317.35f },
	{ 22, 60, -317.35f },
	{ 22, 60, -328.35f },
	{ 22, 48.75f, -317.35f },
	{ 22, 48.75f, -328.35f },
	{ -22, 42.5f, -317.35f },
	{ -22, 42.5f, -328.35f },
	{ -22, 60, -328.35f },
	{ -22, 60, -317.35f },
	{ 22, 36.5f, -328.35f },
	{ 22, 36.5f, -317.35f },
	{ -22, 36.5f, -317.35f },
	{ -22, 36.5f, -328.35f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B0548[] = {
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, -0.7071069f, -0.7071069f },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, -0.7071069f, -0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B0608 = { vertex_000B0488, normal_000B0548, LengthOfArray<Sint32>(vertex_000B0488), meshlist_000B0428, matlist_000B0308, LengthOfArray<Uint16>(meshlist_000B0428), LengthOfArray<Uint16>(matlist_000B0308), { 0, 48.25f, -322.85f }, 22.67708f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B0630 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B0608, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B0664[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 35, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B06B4[] = {
	5, 24, 19, 0, 20, 21,
	0x8000u | 5, 24, 23, 0, 22, 21
};

extern "C" __declspec(dllexport) Sint16 poly_000B06CC[] = {
	3, 29, 4, 27,
	0x8000u | 5, 27, 2, 4, 13, 14,
	3, 27, 2, 25,
	0x8000u | 5, 25, 12, 2, 18, 13,
	3, 30, 6, 29,
	0x8000u | 5, 29, 4, 6, 14, 15,
	3, 28, 8, 30,
	0x8000u | 5, 30, 6, 8, 15, 16,
	3, 25, 12, 26,
	0x8000u | 5, 26, 10, 12, 17, 18,
	3, 26, 10, 28,
	0x8000u | 5, 28, 8, 10, 16, 17
};

extern "C" __declspec(dllexport) Sint16 poly_000B0744[] = {
	0x8000u | 14, 19, 13, 24, 18, 23, 17, 22, 16, 21, 15, 20, 14, 19, 13
};

extern "C" __declspec(dllexport) Sint16 poly_000B0762[] = {
	14, 1, 27, 11, 25, 9, 26, 7, 28, 5, 30, 3, 29, 1, 27
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B0780[] = {
	{ 190, 4 },
	{ 253, 127 },
	{ 127, 127 },
	{ 190, 250 },
	{ 64, 250 },
	{ 190, 4 },
	{ 64, 4 },
	{ 127, 127 },
	{ 1, 127 },
	{ 64, 250 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B07A8[] = {
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0 },
	{ 226, 28 },
	{ 28, 28 },
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0 },
	{ 226, 28 },
	{ 28, 28 },
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0 },
	{ 226, 28 },
	{ 28, 28 },
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0 },
	{ 226, 28 },
	{ 28, 28 },
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0 },
	{ 226, 28 },
	{ 28, 28 },
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0 },
	{ 226, 28 },
	{ 28, 28 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B0868[] = {
	{ 765, -1937 },
	{ 765, -87 },
	{ 640, -1937 },
	{ 640, -87 },
	{ 512, -1937 },
	{ 512, -87 },
	{ 384, -1937 },
	{ 384, -87 },
	{ 256, -1937 },
	{ 256, -87 },
	{ 128, -1937 },
	{ 128, -87 },
	{ 0, -1937 },
	{ 0, -87 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B08A0[] = {
	{ 1020, 54 },
	{ 1020, -224 },
	{ 852, 54 },
	{ 852, -224 },
	{ 681, 54 },
	{ 681, -224 },
	{ 512, 54 },
	{ 512, -224 },
	{ 340, 54 },
	{ 340, -224 },
	{ 170, 54 },
	{ 170, -224 },
	{ 0, 54 },
	{ 0, -224 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B08D8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000B06B4, NULL, NULL, NULL, uv_000B0780, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 12, poly_000B06CC, NULL, NULL, NULL, uv_000B07A8, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000B0744, NULL, NULL, NULL, uv_000B0868, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_000B0762, NULL, NULL, NULL, uv_000B08A0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B0938[] = {
	{ 0, 135, -0.00029f },
	{ 13.5f, 0, -0.00029f },
	{ 13.5f, 30, -0.00029f },
	{ 6.749999f, 0, -11.69137f },
	{ 6.749999f, 30, -11.69137f },
	{ -6.750001f, 0, -11.69137f },
	{ -6.750001f, 30, -11.69137f },
	{ -13.5f, 0, -0.00027f },
	{ -13.5f, 30, -0.00027f },
	{ -6.749998f, 0, 11.69132f },
	{ -6.749998f, 30, 11.69132f },
	{ 6.750004f, 0, 11.69131f },
	{ 6.750004f, 30, 11.69131f },
	{ 10.8f, 30, -0.00029f },
	{ 5.4f, 30, -9.353104f },
	{ -5.400002f, 30, -9.353103f },
	{ -10.8f, 30, -0.00027f },
	{ -5.399999f, 30, 9.353046f },
	{ 5.400003f, 30, 9.353045f },
	{ 6.912001f, 128, -0.00029f },
	{ 3.456f, 128, -5.985997f },
	{ -3.456001f, 128, -5.985996f },
	{ -6.912001f, 128, -0.00028f },
	{ -3.455999f, 128, 5.98594f },
	{ 3.456002f, 128, 5.985939f },
	{ 6.750004f, 15, 11.69131f },
	{ -6.749998f, 15, 11.69132f },
	{ 13.5f, 15, -0.00029f },
	{ -13.5f, 15, -0.00027f },
	{ 6.749999f, 15, -11.69137f },
	{ -6.750001f, 15, -11.69137f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B0AAC[] = {
	{ 0, 1, 0 },
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
	{ 0.5f, 0, 0.866025f },
	{ 0.396203f, 0.609994f, 0.686243f },
	{ 0.53003f, 0.8479789f, 0 },
	{ 0.265015f, 0.8479789f, -0.459019f },
	{ -0.265015f, 0.8479789f, -0.459019f },
	{ -0.53003f, 0.8479789f, 0 },
	{ -0.265015f, 0.8479789f, 0.459019f },
	{ 0.265015f, 0.8479789f, 0.459019f },
	{ 0.9324909f, 0.361192f, 0 },
	{ 0.466246f, 0.361192f, -0.807561f },
	{ -0.466246f, 0.361192f, -0.807561f },
	{ -0.9324909f, 0.361192f, 0 },
	{ -0.466246f, 0.361192f, 0.807561f },
	{ 0.466246f, 0.361192f, 0.807561f },
	{ 0.5f, 0, 0.866025f },
	{ -0.5f, 0, 0.866026f },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 0.5f, 0, -0.866025f },
	{ -0.5f, 0, -0.866025f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B0C20 = { vertex_000B0938, normal_000B0AAC, LengthOfArray<Sint32>(vertex_000B0938), meshlist_000B08D8, matlist_000B0664, LengthOfArray<Uint16>(meshlist_000B08D8), LengthOfArray<Uint16>(matlist_000B0664), { 0, 67.5f, -0.00028f }, 68.83675f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B0C48 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B0C20, 0, -3, -215, 0, 0x3FFF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B0C7C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 34, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B0CCC[] = {
	0x8000u | 14, 9, 8, 11, 10, 2, 1, 3, 0, 6, 5, 7, 4, 9, 8
};

extern "C" __declspec(dllexport) Sint16 poly_000B0CEA[] = {
	14, 26, 8, 24, 10, 25, 1, 27, 0, 29, 5, 28, 4, 26, 8
};

extern "C" __declspec(dllexport) Sint16 poly_000B0D08[] = {
	0x8000u | 14, 16, 12, 17, 13, 23, 22, 19, 18, 21, 15, 20, 14, 16, 12
};

extern "C" __declspec(dllexport) Sint16 poly_000B0D26[] = {
	14, 16, 26, 17, 24, 23, 25, 19, 27, 21, 29, 20, 28, 16, 26
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B0D44[] = {
	{ 63, 40 },
	{ 63, -214 },
	{ 192, 40 },
	{ 192, -214 },
	{ 320, 40 },
	{ 320, -214 },
	{ 446, 40 },
	{ 446, -214 },
	{ 576, 40 },
	{ 576, -214 },
	{ 704, 40 },
	{ 704, -214 },
	{ 828, 40 },
	{ 828, -214 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B0D7C[] = {
	{ 85, -648 },
	{ 85, 0 },
	{ 256, -648 },
	{ 256, 0 },
	{ 426, -648 },
	{ 426, 0 },
	{ 597, -648 },
	{ 597, 0 },
	{ 768, -648 },
	{ 768, 0 },
	{ 937, -648 },
	{ 937, 0 },
	{ 1105, -648 },
	{ 1105, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B0DB4[] = {
	{ 63, -765 },
	{ 63, -1020 },
	{ 192, -765 },
	{ 192, -1020 },
	{ 320, -765 },
	{ 320, -1020 },
	{ 446, -765 },
	{ 446, -1020 },
	{ 576, -765 },
	{ 576, -1020 },
	{ 704, -765 },
	{ 704, -1020 },
	{ 828, -765 },
	{ 828, -1020 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B0DEC[] = {
	{ 127, -1785 },
	{ 127, -1551 },
	{ 384, -1785 },
	{ 384, -1551 },
	{ 640, -1785 },
	{ 640, -1551 },
	{ 895, -1785 },
	{ 895, -1551 },
	{ 1152, -1785 },
	{ 1152, -1551 },
	{ 1408, -1785 },
	{ 1408, -1551 },
	{ 1657, -1785 },
	{ 1657, -1551 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B0E24[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000B0CCC, NULL, NULL, NULL, uv_000B0D44, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000B0CEA, NULL, NULL, NULL, uv_000B0D7C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000B0D08, NULL, NULL, NULL, uv_000B0DB4, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_000B0D26, NULL, NULL, NULL, uv_000B0DEC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B0E84[] = {
	{ -6.5f, 69, 90 },
	{ -6.5f, 69, 82.5f },
	{ -6.5f, 57, 82.5f },
	{ -6.5f, 57, 90 },
	{ 6.5f, 69, 90 },
	{ 0, 69, 94 },
	{ 0, 57, 94 },
	{ 6.5f, 57, 90 },
	{ 6.5f, 69, 82.5f },
	{ 6.5f, 57, 82.5f },
	{ 0, 69, 78.5f },
	{ 0, 57, 78.5f },
	{ 6.5f, 117, 82.5f },
	{ 0, 117, 78.5f },
	{ 6.5f, 117, 90 },
	{ 0, 117, 94 },
	{ 6.5f, 105, 82.5f },
	{ 0, 105, 78.5f },
	{ -6.5f, 117, 90 },
	{ -6.5f, 105, 90 },
	{ 6.5f, 105, 90 },
	{ 0, 105, 94 },
	{ -6.5f, 117, 82.5f },
	{ -6.5f, 105, 82.5f },
	{ 0, 99.5f, 78.5f },
	{ -6.5f, 99.5f, 82.5f },
	{ 6.5f, 99.5f, 82.5f },
	{ -6.5f, 99.5f, 90 },
	{ 6.5f, 99.5f, 90 },
	{ 0, 99.5f, 94 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B0FEC[] = {
	{ -0.872954f, 0, 0.487803f },
	{ -0.872954f, 0, -0.487803f },
	{ -0.872954f, 0, -0.487803f },
	{ -0.872954f, 0, 0.487803f },
	{ 0.872954f, 0, 0.487803f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.872954f, 0, 0.487803f },
	{ 0.872954f, 0, -0.487803f },
	{ 0.872954f, 0, -0.487803f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0.872954f, 0, -0.487803f },
	{ 0, 0, -1 },
	{ 0.872954f, 0, 0.487803f },
	{ 0, 0, 1 },
	{ 0.872954f, 0, -0.487803f },
	{ 0, 0, -1 },
	{ -0.872954f, 0, 0.487803f },
	{ -0.872954f, 0, 0.487803f },
	{ 0.872954f, 0, 0.487803f },
	{ 0, 0, 1 },
	{ -0.872954f, 0, -0.487803f },
	{ -0.872954f, 0, -0.487803f },
	{ 0, 0, -1 },
	{ -0.872954f, 0, -0.487803f },
	{ 0.872954f, 0, -0.487803f },
	{ -0.872954f, 0, 0.487803f },
	{ 0.872954f, 0, 0.487803f },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B1154 = { vertex_000B0E84, normal_000B0FEC, LengthOfArray<Sint32>(vertex_000B0E84), meshlist_000B0E24, matlist_000B0C7C, LengthOfArray<Uint16>(meshlist_000B0E24), LengthOfArray<Uint16>(matlist_000B0C7C), { 0, 87, 86.25f }, 30.74161f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B117C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B1154, 0, 28.5f, 0, 0, 0x1555, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B11B0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 36, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 35, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B1200[] = {
	0x8000u | 5, 21, 20, 0, 19, 24,
	5, 21, 22, 0, 23, 24
};

extern "C" __declspec(dllexport) Sint16 poly_000B1218[] = {
	3, 29, 4, 27,
	0x8000u | 5, 27, 2, 4, 13, 14,
	3, 27, 2, 25,
	0x8000u | 5, 25, 12, 2, 18, 13,
	3, 30, 6, 29,
	0x8000u | 5, 29, 4, 6, 14, 15,
	3, 28, 8, 30,
	0x8000u | 5, 30, 6, 8, 15, 16,
	3, 25, 12, 26,
	0x8000u | 5, 26, 10, 12, 17, 18,
	3, 26, 10, 28,
	0x8000u | 5, 28, 8, 10, 16, 17
};

extern "C" __declspec(dllexport) Sint16 poly_000B1290[] = {
	0x8000u | 14, 19, 13, 24, 18, 23, 17, 22, 16, 21, 15, 20, 14, 19, 13
};

extern "C" __declspec(dllexport) Sint16 poly_000B12AE[] = {
	14, 1, 27, 11, 25, 9, 26, 7, 28, 5, 30, 3, 29, 1, 27
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B12CC[] = {
	{ 66, 223 },
	{ 188, 223 },
	{ 127, 127 },
	{ 250, 127 },
	{ 188, 31 },
	{ 66, 223 },
	{ 4, 127 },
	{ 127, 127 },
	{ 66, 31 },
	{ 188, 31 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B12F4[] = {
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0 },
	{ 226, 28 },
	{ 28, 28 },
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0 },
	{ 226, 28 },
	{ 28, 28 },
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0 },
	{ 226, 28 },
	{ 28, 28 },
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0 },
	{ 226, 28 },
	{ 28, 28 },
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0 },
	{ 226, 28 },
	{ 28, 28 },
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0 },
	{ 226, 28 },
	{ 28, 28 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B13B4[] = {
	{ 765, -1295 },
	{ 765, -1061 },
	{ 640, -1266 },
	{ 640, -1061 },
	{ 512, -1236 },
	{ 512, -1061 },
	{ 384, -1295 },
	{ 384, -1061 },
	{ 256, -1251 },
	{ 256, -1061 },
	{ 128, -1236 },
	{ 128, -1061 },
	{ 0, -1295 },
	{ 0, -1061 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B13EC[] = {
	{ 1020, 48 },
	{ 1020, -216 },
	{ 852, 48 },
	{ 852, -216 },
	{ 681, 48 },
	{ 681, -216 },
	{ 512, 48 },
	{ 512, -216 },
	{ 340, 48 },
	{ 340, -216 },
	{ 170, 48 },
	{ 170, -216 },
	{ 0, 48 },
	{ 0, -216 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B1424[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000B1200, NULL, NULL, NULL, uv_000B12CC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 12, poly_000B1218, NULL, NULL, NULL, uv_000B12F4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000B1290, NULL, NULL, NULL, uv_000B13B4, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_000B12AE, NULL, NULL, NULL, uv_000B13EC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B1484[] = {
	{ 0, 46, -0.00041f },
	{ 13.5f, 0, -0.00029f },
	{ 13.5f, 30, -0.00029f },
	{ 6.749999f, 0, -11.69137f },
	{ 6.749999f, 30, -11.69137f },
	{ -6.750001f, 0, -11.69137f },
	{ -6.750001f, 30, -11.69137f },
	{ -13.5f, 0, -0.00027f },
	{ -13.5f, 30, -0.00027f },
	{ -6.749998f, 0, 11.69132f },
	{ -6.749998f, 30, 11.69132f },
	{ 6.750004f, 0, 11.69131f },
	{ 6.750004f, 30, 11.69131f },
	{ 10.8f, 30, -0.00029f },
	{ 5.4f, 30, -9.353104f },
	{ -5.400002f, 30, -9.353103f },
	{ -10.8f, 30, -0.00027f },
	{ -5.399999f, 30, 9.353046f },
	{ 5.400003f, 30, 9.353045f },
	{ 10.0224f, 46, -0.00041f },
	{ 5.011199f, 42, -8.679691f },
	{ -5.0112f, 43, -8.67969f },
	{ -10.0224f, 46, -0.0004f },
	{ -5.011198f, 42, 8.67961f },
	{ 5.011201f, 44, 8.679607f },
	{ 6.750004f, 15, 11.69131f },
	{ -6.749998f, 15, 11.69132f },
	{ 13.5f, 15, -0.00029f },
	{ -13.5f, 15, -0.00027f },
	{ 6.749999f, 15, -11.69137f },
	{ -6.750001f, 15, -11.69137f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B15F8[] = {
	{ -0.016524f, 0.999519f, -0.026236f },
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
	{ 0.5f, 0, 0.866025f },
	{ 0.396203f, 0.609994f, 0.686243f },
	{ 0.523024f, 0.852317f, -0.001673f },
	{ 0.259479f, 0.852446f, -0.453879f },
	{ -0.260336f, 0.851454f, -0.455248f },
	{ -0.5228069f, 0.85245f, 0.001147f },
	{ -0.260318f, 0.851975f, 0.454282f },
	{ 0.260577f, 0.851092f, 0.455788f },
	{ 0.723135f, 0.689394f, -0.042562f },
	{ 0.406356f, 0.460695f, -0.789072f },
	{ -0.369626f, 0.514471f, -0.7737539f },
	{ -0.714408f, 0.699401f, 0.021445f },
	{ -0.42283f, 0.449122f, 0.787086f },
	{ 0.346744f, 0.563855f, 0.749557f },
	{ 0.5f, 0, 0.866025f },
	{ -0.5f, 0, 0.866026f },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 0.5f, 0, -0.866025f },
	{ -0.5f, 0, -0.866025f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B176C = { vertex_000B1484, normal_000B15F8, LengthOfArray<Sint32>(vertex_000B1484), meshlist_000B1424, matlist_000B11B0, LengthOfArray<Uint16>(meshlist_000B1424), LengthOfArray<Uint16>(matlist_000B11B0), { 0, 23, -0.00028f }, 25.80092f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B1794 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B176C, -215, -3, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B17C8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 36, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 35, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B1818[] = {
	0x8000u | 5, 19, 24, 0, 23, 22,
	5, 19, 20, 0, 21, 22
};

extern "C" __declspec(dllexport) Sint16 poly_000B1830[] = {
	3, 29, 4, 27,
	0x8000u | 5, 27, 2, 4, 13, 14,
	3, 27, 2, 25,
	0x8000u | 5, 25, 12, 2, 18, 13,
	3, 30, 6, 29,
	0x8000u | 5, 29, 4, 6, 14, 15,
	3, 28, 8, 30,
	0x8000u | 5, 30, 6, 8, 15, 16,
	3, 25, 12, 26,
	0x8000u | 5, 26, 10, 12, 17, 18,
	3, 26, 10, 28,
	0x8000u | 5, 28, 8, 10, 16, 17
};

extern "C" __declspec(dllexport) Sint16 poly_000B18A8[] = {
	0x8000u | 14, 13, 19, 14, 20, 15, 21, 16, 22, 17, 23, 18, 24, 13, 19
};

extern "C" __declspec(dllexport) Sint16 poly_000B18C6[] = {
	14, 1, 27, 11, 25, 9, 26, 7, 28, 5, 30, 3, 29, 1, 27
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B18E4[] = {
	{ 231, 127 },
	{ 179, 25 },
	{ 73, 134 },
	{ 75, 25 },
	{ 23, 127 },
	{ 231, 127 },
	{ 179, 229 },
	{ 73, 134 },
	{ 75, 229 },
	{ 23, 127 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B190C[] = {
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0 },
	{ 226, 28 },
	{ 28, 28 },
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0 },
	{ 226, 28 },
	{ 28, 28 },
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0 },
	{ 226, 28 },
	{ 28, 28 },
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0 },
	{ 226, 28 },
	{ 28, 28 },
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0 },
	{ 226, 28 },
	{ 28, 28 },
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0 },
	{ 226, 28 },
	{ 28, 28 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B19CC[] = {
	{ 0, -69 },
	{ 0, -1108 },
	{ 128, -69 },
	{ 128, -1093 },
	{ 256, -69 },
	{ 256, -1124 },
	{ 384, -69 },
	{ 384, -1078 },
	{ 512, -69 },
	{ 512, -1033 },
	{ 640, -69 },
	{ 640, -1093 },
	{ 765, -69 },
	{ 765, -1108 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B1A04[] = {
	{ 1020, -1 },
	{ 1020, -211 },
	{ 852, -1 },
	{ 852, -211 },
	{ 681, -1 },
	{ 681, -211 },
	{ 512, -1 },
	{ 512, -211 },
	{ 340, -1 },
	{ 340, -211 },
	{ 170, -1 },
	{ 170, -211 },
	{ 0, -1 },
	{ 0, -211 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B1A3C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000B1818, NULL, NULL, NULL, uv_000B18E4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 12, poly_000B1830, NULL, NULL, NULL, uv_000B190C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000B18A8, NULL, NULL, NULL, uv_000B19CC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_000B18C6, NULL, NULL, NULL, uv_000B1A04, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B1A9C[] = {
	{ -4.806899f, 100, -0.534139f },
	{ 13.5f, 0, -0.00029f },
	{ 13.5f, 30, -0.00029f },
	{ 6.749999f, 0, -11.69137f },
	{ 6.749999f, 30, -11.69137f },
	{ -6.750001f, 0, -11.69137f },
	{ -6.750001f, 30, -11.69137f },
	{ -13.5f, 0, -0.00027f },
	{ -13.5f, 30, -0.00027f },
	{ -6.749998f, 0, 11.69132f },
	{ -6.749998f, 30, 11.69132f },
	{ 6.750004f, 0, 11.69131f },
	{ 6.750004f, 30, 11.69131f },
	{ 10.8f, 30, -0.00029f },
	{ 5.4f, 30, -9.353104f },
	{ -5.400002f, 30, -9.353103f },
	{ -10.8f, 30, -0.00027f },
	{ -5.399999f, 30, 9.353046f },
	{ 5.400003f, 30, 9.353045f },
	{ 9.303078f, 98, -0.00039f },
	{ 4.651538f, 97, -8.056741f },
	{ -4.651539f, 99, -8.05674f },
	{ -9.303078f, 96, -0.00037f },
	{ -4.651537f, 93, 8.056664f },
	{ 4.651541f, 97, 8.056663f },
	{ 6.750004f, 15, 11.69131f },
	{ -6.749998f, 15, 11.69132f },
	{ 13.5f, 15, -0.00029f },
	{ -13.5f, 15, -0.00027f },
	{ 6.749999f, 15, -11.69137f },
	{ -6.750001f, 15, -11.69137f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B1C10[] = {
	{ -0.302785f, 0.939376f, 0.160918f },
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
	{ 0.5f, 0, 0.866025f },
	{ 0.396203f, 0.609994f, 0.686243f },
	{ 0.5362999f, 0.844027f, -0.00003f },
	{ 0.268621f, 0.843694f, -0.464783f },
	{ -0.268253f, 0.844209f, -0.46406f },
	{ -0.5361429f, 0.844126f, 0.001609f },
	{ -0.268596f, 0.843682f, 0.46482f },
	{ 0.266968f, 0.844117f, 0.464968f },
	{ 0.7995099f, 0.60065f, 0.001713f },
	{ 0.44384f, 0.506256f, -0.739399f },
	{ -0.362078f, 0.633684f, -0.683626f },
	{ -0.920263f, 0.380339f, 0.091971f },
	{ -0.481564f, 0.291624f, 0.8264689f },
	{ 0.352342f, 0.5467359f, 0.759562f },
	{ 0.5f, 0, 0.866025f },
	{ -0.5f, 0, 0.866026f },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 0.5f, 0, -0.866025f },
	{ -0.5f, 0, -0.866025f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B1D84 = { vertex_000B1A9C, normal_000B1C10, LengthOfArray<Sint32>(vertex_000B1A9C), meshlist_000B1A3C, matlist_000B17C8, LengthOfArray<Uint16>(meshlist_000B1A3C), LengthOfArray<Uint16>(matlist_000B17C8), { 0, 50, -0.00028f }, 51.67244f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B1DAC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B1D84, -152.5f, -3, -152.5f, 0, 0xFFFFE000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B1DE0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 34, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 36, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B1E44[] = {
	4, 10, 11, 5, 4,
	4, 12, 13, 15, 14
};

extern "C" __declspec(dllexport) Sint16 poly_000B1E58[] = {
	4, 4, 11, 6, 3,
	4, 10, 5, 2, 7
};

extern "C" __declspec(dllexport) Sint16 poly_000B1E6C[] = {
	4, 7, 0, 2, 9,
	4, 8, 1, 3, 6
};

extern "C" __declspec(dllexport) Sint16 poly_000B1E80[] = {
	4, 14, 13, 8, 1,
	4, 12, 15, 0, 9
};

extern "C" __declspec(dllexport) Sint16 poly_000B1E94[] = {
	3, 13, 12, 0,
	0x8000u | 6, 5, 7, 6, 0, 1, 13,
	3, 5, 4, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B1EB4[] = {
	{ 87, 255 },
	{ 87, 0 },
	{ 344, 255 },
	{ 266, 0 },
	{ 370, 255 },
	{ 396, 0 },
	{ 87, 255 },
	{ 87, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B1ED4[] = {
	{ 164, 11 },
	{ 3, 11 },
	{ 256, 255 },
	{ 3, 255 },
	{ 3, 11 },
	{ 233, 11 },
	{ 3, 255 },
	{ 302, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B1EF4[] = {
	{ 549, 1 },
	{ 508, 252 },
	{ 4, 1 },
	{ 4, 252 },
	{ 4, 252 },
	{ 382, 252 },
	{ 4, 1 },
	{ 466, 1 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B1F14[] = {
	{ 3, 251 },
	{ 545, 251 },
	{ 3, 11 },
	{ 410, 11 },
	{ 500, 251 },
	{ 3, 251 },
	{ 545, 11 },
	{ 3, 11 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B1F34[] = {
	{ 255, 255 },
	{ 0, 255 },
	{ 0, 124 },
	{ 0, -255 },
	{ 0, -10 },
	{ 255, -10 },
	{ 0, 124 },
	{ 255, 124 },
	{ 255, 255 },
	{ 0, -255 },
	{ 255, -255 },
	{ 255, -10 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B1F64[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000B1E44, NULL, NULL, NULL, uv_000B1EB4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000B1E58, NULL, NULL, NULL, uv_000B1ED4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_000B1E6C, NULL, NULL, NULL, uv_000B1EF4, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_000B1E80, NULL, NULL, NULL, uv_000B1F14, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 3, poly_000B1E94, NULL, NULL, NULL, uv_000B1F34, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B1FDC[] = {
	{ -10, 42.5f, -328.35f },
	{ -13, 42.5f, -317.35f },
	{ -22, 48.75f, -328.35f },
	{ -22, 48.75f, -317.35f },
	{ -15, 60, -317.35f },
	{ -12, 60, -328.35f },
	{ -11, 48.75f, -317.35f },
	{ -9.000002f, 48.75f, -328.35f },
	{ -22, 42.5f, -317.35f },
	{ -22, 42.5f, -328.35f },
	{ -22, 60, -328.35f },
	{ -22, 60, -317.35f },
	{ -11, 36.5f, -328.35f },
	{ -10, 36.5f, -317.35f },
	{ -22, 36.5f, -317.35f },
	{ -22, 36.5f, -328.35f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B209C[] = {
	{ 0.743224f, -0.062557f, -0.666111f },
	{ 0.49419f, 0.035904f, 0.868612f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0.384068f, 0.658063f, 0.647646f },
	{ 0.5506999f, 0.641634f, -0.533887f },
	{ 0.6897179f, 0.014244f, 0.723938f },
	{ 0.8028319f, 0.040019f, -0.594861f },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0.495325f, -0.620926f, -0.607539f },
	{ 0.654369f, -0.474955f, 0.588404f },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, -0.7071069f, -0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B215C = { vertex_000B1FDC, normal_000B209C, LengthOfArray<Sint32>(vertex_000B1FDC), meshlist_000B1F64, matlist_000B1DE0, LengthOfArray<Uint16>(meshlist_000B1F64), LengthOfArray<Uint16>(matlist_000B1DE0), { -15.5f, 48.25f, -322.85f }, 13.60793f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B2184 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B215C, 0, 0, 0, 0, 0x471C, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B21B8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 34, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 36, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B221C[] = {
	4, 10, 11, 5, 4,
	4, 12, 13, 15, 14
};

extern "C" __declspec(dllexport) Sint16 poly_000B2230[] = {
	4, 4, 11, 6, 3,
	4, 10, 5, 2, 7
};

extern "C" __declspec(dllexport) Sint16 poly_000B2244[] = {
	4, 7, 0, 2, 9,
	4, 8, 1, 3, 6
};

extern "C" __declspec(dllexport) Sint16 poly_000B2258[] = {
	4, 14, 13, 8, 1,
	4, 12, 15, 0, 9
};

extern "C" __declspec(dllexport) Sint16 poly_000B226C[] = {
	3, 15, 14, 8,
	3, 11, 10, 2,
	0x8000u | 6, 15, 9, 8, 2, 3, 11
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B228C[] = {
	{ 0, 255 },
	{ 28, 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 198, 255 },
	{ 198, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B22AC[] = {
	{ 255, 12 },
	{ 28, 12 },
	{ 255, 253 },
	{ 56, 253 },
	{ 0, 12 },
	{ 255, 12 },
	{ 84, 253 },
	{ 255, 253 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B22CC[] = {
	{ 508, 3 },
	{ 508, 251 },
	{ 264, 3 },
	{ 264, 251 },
	{ 304, 251 },
	{ 508, 251 },
	{ 223, 3 },
	{ 508, 3 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B22EC[] = {
	{ 198, 250 },
	{ 255, 250 },
	{ 113, 4 },
	{ 255, 4 },
	{ 255, 250 },
	{ 198, 250 },
	{ 255, 4 },
	{ 84, 4 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B230C[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 255, 124 },
	{ 255, -255 },
	{ 0, -255 },
	{ 0, -10 },
	{ 0, 255 },
	{ 0, 124 },
	{ 255, 124 },
	{ 0, -10 },
	{ 255, -10 },
	{ 255, -255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B233C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000B221C, NULL, NULL, NULL, uv_000B228C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000B2230, NULL, NULL, NULL, uv_000B22AC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_000B2244, NULL, NULL, NULL, uv_000B22CC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_000B2258, NULL, NULL, NULL, uv_000B22EC, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 3, poly_000B226C, NULL, NULL, NULL, uv_000B230C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B23B4[] = {
	{ 21.99999f, 42.5f, -328.35f },
	{ 21.99999f, 42.5f, -317.35f },
	{ 15.99999f, 48.75f, -328.35f },
	{ 14.99999f, 48.75f, -317.35f },
	{ 21.99999f, 60, -317.35f },
	{ 21.99999f, 60, -328.35f },
	{ 21.99999f, 48.75f, -317.35f },
	{ 21.99999f, 48.75f, -328.35f },
	{ 16.99999f, 42.5f, -317.35f },
	{ 15.99999f, 42.5f, -328.35f },
	{ 12.99999f, 60, -328.35f },
	{ 13.99999f, 60, -317.35f },
	{ 21.99999f, 36.5f, -328.35f },
	{ 21.99999f, 36.5f, -317.35f },
	{ 19.99999f, 36.5f, -317.35f },
	{ 19.99999f, 36.5f, -328.35f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B2474[] = {
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ -0.674675f, -0.09429599f, -0.732066f },
	{ -0.744939f, -0.149404f, 0.650188f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ -0.675816f, -0.255874f, 0.691231f },
	{ -0.756124f, -0.225038f, -0.6145189f },
	{ -0.681884f, 0.49577f, -0.5378169f },
	{ -0.608973f, 0.5404209f, 0.580601f },
	{ 0, -0.7071069f, -0.7071069f },
	{ 0, -0.7071069f, 0.7071069f },
	{ -0.418309f, -0.676838f, 0.605729f },
	{ -0.390538f, -0.6935239f, -0.605397f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B2534 = { vertex_000B23B4, normal_000B2474, LengthOfArray<Sint32>(vertex_000B23B4), meshlist_000B233C, matlist_000B21B8, LengthOfArray<Uint16>(meshlist_000B233C), LengthOfArray<Uint16>(matlist_000B21B8), { 17.49999f, 48.25f, -322.85f }, 13.4765f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B255C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B2534, 0, 0, 0, 0, 0x238E, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B2590[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 37, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 38, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B25CC[] = {
	4, 2, 3, 1, 0,
	4, 3, 5, 0, 4,
	4, 5, 7, 4, 6,
	4, 7, 2, 6, 1
};

extern "C" __declspec(dllexport) Sint16 poly_000B25F4[] = {
	0x8000u | 10, 4, 11, 6, 10, 1, 9, 0, 8, 4, 11
};

extern "C" __declspec(dllexport) Sint16 poly_000B260A[] = {
	4, 11, 10, 8, 9
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B2614[] = {
	{ 0, 41 },
	{ 254, 41 },
	{ 0, -225 },
	{ 254, -225 },
	{ 0, 41 },
	{ 254, 41 },
	{ 0, -225 },
	{ 254, -225 },
	{ 0, 41 },
	{ 254, 41 },
	{ 0, -225 },
	{ 254, -225 },
	{ 0, 41 },
	{ 254, 41 },
	{ 0, -225 },
	{ 254, -225 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B2654[] = {
	{ 0 },
	{ 0, -468 },
	{ 256, 0 },
	{ 256, -510 },
	{ 512, 0 },
	{ 512, -386 },
	{ 768, 0 },
	{ 768, -406 },
	{ 1020, 0 },
	{ 1020, -468 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B267C[] = {
	{ 254, 0 },
	{ 254, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B268C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000B25CC, NULL, NULL, NULL, uv_000B2614, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000B25F4, NULL, NULL, NULL, uv_000B2654, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000B260A, NULL, NULL, NULL, uv_000B267C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B26D4[] = {
	{ -7.149985f, 12.4f, -316.25f },
	{ -7.14999f, 12.4f, -330.55f },
	{ -7.14999f, 0, -330.55f },
	{ -7.149985f, 0, -316.25f },
	{ 7.150015f, 12.4f, -316.25f },
	{ 7.150015f, 0, -316.25f },
	{ 7.150011f, 12.4f, -330.55f },
	{ 7.150011f, 0, -330.55f },
	{ -7.149985f, 32.2f, -316.25f },
	{ -7.14999f, 31.2f, -330.55f },
	{ 7.150011f, 37.2f, -330.55f },
	{ 7.150015f, 35.2f, -316.25f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B2764[] = {
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.640737f, 0.489913f, 0.591136f },
	{ -0.665516f, 0.422701f, -0.6151519f },
	{ 0.472145f, 0.698591f, -0.5376329f },
	{ 0.530105f, 0.5937729f, 0.605328f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B27F4 = { vertex_000B26D4, normal_000B2764, LengthOfArray<Sint32>(vertex_000B26D4), meshlist_000B268C, matlist_000B2590, LengthOfArray<Uint16>(meshlist_000B268C), LengthOfArray<Uint16>(matlist_000B2590), { 0.000013f, 18.6f, -323.4f }, 21.17085f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B281C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B27F4, 0, 0, 0, 0, 0x5FFF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B2850[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 37, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 38, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B288C[] = {
	4, 1, 0, 2, 3,
	4, 0, 4, 3, 5,
	4, 4, 6, 5, 7,
	4, 6, 1, 7, 2
};

extern "C" __declspec(dllexport) Sint16 poly_000B28B4[] = {
	0x8000u | 10, 10, 6, 9, 1, 8, 0, 11, 4, 10, 6
};

extern "C" __declspec(dllexport) Sint16 poly_000B28CA[] = {
	4, 11, 8, 10, 9
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B28D4[] = {
	{ 0, -225 },
	{ 254, -225 },
	{ 0, 41 },
	{ 254, 41 },
	{ 0, -225 },
	{ 254, -225 },
	{ 0, 41 },
	{ 254, 41 },
	{ 0, -225 },
	{ 254, -225 },
	{ 0, 41 },
	{ 254, 41 },
	{ 0, -225 },
	{ 254, -225 },
	{ 0, 41 },
	{ 254, 41 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B2914[] = {
	{ 1020, -510 },
	{ 1020, 0 },
	{ 768, -386 },
	{ 768, 0 },
	{ 512, -406 },
	{ 512, 0 },
	{ 256, -468 },
	{ 256, 0 },
	{ 0, -510 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B293C[] = {
	{ 254, 255 },
	{ 0, 255 },
	{ 254, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B294C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000B288C, NULL, NULL, NULL, uv_000B28D4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000B28B4, NULL, NULL, NULL, uv_000B2914, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000B28CA, NULL, NULL, NULL, uv_000B293C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B2994[] = {
	{ -7.149985f, 12.4f, 316.25f },
	{ -7.14999f, 12.4f, 330.55f },
	{ -7.14999f, 0, 330.55f },
	{ -7.149985f, 0, 316.25f },
	{ 7.150015f, 12.4f, 316.25f },
	{ 7.150015f, 0, 316.25f },
	{ 7.150011f, 12.4f, 330.55f },
	{ 7.150011f, 0, 330.55f },
	{ -7.149985f, 32.2f, 316.25f },
	{ -7.14999f, 31.2f, 330.55f },
	{ 7.150011f, 37.2f, 330.55f },
	{ 7.150015f, 35.2f, 316.25f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B2A24[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ -0.640737f, 0.489913f, -0.591136f },
	{ -0.665516f, 0.422701f, 0.6151519f },
	{ 0.472145f, 0.698591f, 0.5376329f },
	{ 0.530105f, 0.5937729f, -0.605328f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B2AB4 = { vertex_000B2994, normal_000B2A24, LengthOfArray<Sint32>(vertex_000B2994), meshlist_000B294C, matlist_000B2850, LengthOfArray<Uint16>(meshlist_000B294C), LengthOfArray<Uint16>(matlist_000B2850), { 0.000013f, 18.6f, 323.4f }, 20.14845f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B2ADC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B2AB4, 0, 0, 0, 0, 0xFFFFBC72, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B2B10[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 37, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 36, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B2B38[] = {
	4, 2, 3, 1, 0,
	4, 3, 5, 0, 4,
	4, 5, 7, 4, 6,
	4, 7, 2, 6, 1
};

extern "C" __declspec(dllexport) Sint16 poly_000B2B60[] = {
	4, 0, 4, 1, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B2B6C[] = {
	{ 0, 41 },
	{ 254, 41 },
	{ 0, -225 },
	{ 254, -145 },
	{ 0, 41 },
	{ 254, 41 },
	{ 0, -145 },
	{ 254, -225 },
	{ 0, 41 },
	{ 254, 41 },
	{ 0, -225 },
	{ 254, -225 },
	{ 0, 41 },
	{ 254, 41 },
	{ 0, -225 },
	{ 254, -225 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B2BAC[] = {
	{ 0 },
	{ 254, 0 },
	{ 0, 255 },
	{ 254, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B2BBC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000B2B38, NULL, NULL, NULL, uv_000B2B6C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000B2B60, NULL, NULL, NULL, uv_000B2BAC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B2BEC[] = {
	{ -7.149985f, 9.4f, -316.25f },
	{ -7.14999f, 12.4f, -330.55f },
	{ -7.14999f, 0, -330.55f },
	{ -7.149985f, 0, -316.25f },
	{ 7.150015f, 12.4f, -316.25f },
	{ 7.150015f, 0, -316.25f },
	{ 7.150011f, 12.4f, -330.55f },
	{ 7.150011f, 0, -330.55f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B2C4C[] = {
	{ -0.633214f, 0.445062f, 0.633214f },
	{ -0.587761f, 0.6002229f, -0.542466f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.542466f, 0.6002229f, 0.587761f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.7071069f, 0, -0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B2CAC = { vertex_000B2BEC, normal_000B2C4C, LengthOfArray<Sint32>(vertex_000B2BEC), meshlist_000B2BBC, matlist_000B2B10, LengthOfArray<Uint16>(meshlist_000B2BBC), LengthOfArray<Uint16>(matlist_000B2B10), { 0.000013f, 6.2f, -323.4f }, 13.43761f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B2CD4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B2CAC, 0, 0, 0, 0, 0x2E38, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B2D08[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 37, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B2D58[] = {
	4, 2, 3, 1, 0,
	4, 3, 5, 0, 4,
	4, 5, 7, 4, 6,
	4, 7, 2, 6, 1
};

extern "C" __declspec(dllexport) Sint16 poly_000B2D80[] = {
	10, 4, 9, 0, 11, 1, 10, 6, 8, 4, 9
};

extern "C" __declspec(dllexport) Sint16 poly_000B2D96[] = {
	4, 12, 10, 15, 11,
	4, 15, 11, 13, 9,
	4, 13, 9, 14, 8,
	4, 14, 8, 12, 10
};

extern "C" __declspec(dllexport) Sint16 poly_000B2DBE[] = {
	4, 13, 14, 15, 12
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B2DC8[] = {
	{ 1, 37 },
	{ 254, 37 },
	{ 1, -225 },
	{ 254, -225 },
	{ 1, 37 },
	{ 254, 37 },
	{ 1, -225 },
	{ 254, -225 },
	{ 1, 37 },
	{ 254, 37 },
	{ 1, -225 },
	{ 254, -225 },
	{ 1, 37 },
	{ 254, 37 },
	{ 1, -225 },
	{ 254, -225 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B2E08[] = {
	{ 1020, 0 },
	{ 1020, -637 },
	{ 768, 0 },
	{ 768, -637 },
	{ 512, 0 },
	{ 512, -637 },
	{ 256, 0 },
	{ 256, -637 },
	{ 0 },
	{ 0, -637 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B2E30[] = {
	{ 0, 24 },
	{ 0, 254 },
	{ 254, 24 },
	{ 254, 254 },
	{ 0, 24 },
	{ 0, 254 },
	{ 254, 24 },
	{ 254, 254 },
	{ 0, 24 },
	{ 0, 254 },
	{ 254, 24 },
	{ 254, 254 },
	{ 0, 24 },
	{ 0, 254 },
	{ 254, 24 },
	{ 254, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B2E70[] = {
	{ 3, 123 },
	{ 3, -251 },
	{ 386, 123 },
	{ 386, -251 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B2E80[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000B2D58, NULL, NULL, NULL, uv_000B2DC8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000B2D80, NULL, NULL, NULL, uv_000B2E08, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_000B2D96, NULL, NULL, NULL, uv_000B2E30, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_000B2DBE, NULL, NULL, NULL, uv_000B2E70, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B2EE0[] = {
	{ -7.149981f, 12.4f, -316.25f },
	{ -7.149982f, 12.4f, -330.55f },
	{ -7.149982f, 0, -330.55f },
	{ -7.149981f, 0, -316.25f },
	{ 7.150019f, 12.4f, -316.25f },
	{ 7.150019f, 0, -316.25f },
	{ 7.150018f, 12.4f, -330.55f },
	{ 7.150018f, 0, -330.55f },
	{ 7.150018f, 43.4f, -330.55f },
	{ 7.150019f, 43.4f, -316.25f },
	{ -7.149982f, 43.4f, -330.55f },
	{ -7.149981f, 43.4f, -316.25f },
	{ -7.149982f, 62, -330.55f },
	{ 7.150019f, 62, -316.25f },
	{ 7.150018f, 62, -330.55f },
	{ -7.149981f, 62, -316.25f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B2FA0[] = {
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B3060 = { vertex_000B2EE0, normal_000B2FA0, LengthOfArray<Sint32>(vertex_000B2EE0), meshlist_000B2E80, matlist_000B2D08, LengthOfArray<Uint16>(meshlist_000B2E80), LengthOfArray<Uint16>(matlist_000B2D08), { 0.000018f, 31, -323.4f }, 31.95309f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B3088 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B3060, 0, 0, 0, 0, 0x38E, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B30BC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B30F8[] = {
	6, 5, 2, 1, 30, 24, 66,
	0x8000u | 7, 78, 79, 22, 16, 3, 27, 40,
	0x8000u | 5, 64, 58, 46, 78, 22,
	0x8000u | 5, 55, 62, 61, 65, 68,
	3, 30, 2, 4,
	3, 68, 0, 71,
	3, 13, 14, 7,
	6, 14, 11, 7, 8, 1, 5,
	0x8000u | 5, 49, 56, 55, 59, 62,
	0x8000u | 5, 43, 50, 49, 53, 56,
	0x8000u | 5, 37, 44, 43, 47, 50,
	0x8000u | 7, 76, 75, 0, 73, 68, 67, 61,
	0x8000u | 8, 0, 40, 76, 27, 54, 16, 34, 79,
	0x8000u | 7, 64, 70, 58, 10, 66, 12, 30,
	0x8000u | 5, 31, 38, 37, 41, 44,
	3, 25, 26, 19,
	7, 26, 23, 19, 20, 13, 17, 14,
	3, 3, 22, 69,
	0x8000u | 7, 26, 29, 25, 32, 31, 35, 38
};

extern "C" __declspec(dllexport) Sint16 poly_000B31E6[] = {
	3, 77, 52, 78,
	15, 21, 19, 18, 13, 9, 7, 6, 1, 15, 24, 28, 66, 52, 58, 78,
	3, 63, 39, 72,
	3, 36, 57, 45,
	3, 52, 42, 28,
	3, 9, 51, 18,
	0x8000u | 20, 19, 25, 21, 31, 33, 37, 36, 43, 45, 49, 48, 55, 60, 61, 63, 67, 72, 73, 74, 75
};

extern "C" __declspec(dllexport) Sint16 poly_000B3258[] = {
	4, 74, 54, 75, 76,
	4, 34, 77, 79, 78
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B326C[] = {
	{ 8582, -4230 },
	{ 8635, -4844 },
	{ 9637, -4844 },
	{ 8421, -6054 },
	{ 9365, -6397 },
	{ 8576, -7762 },
	{ 6514, -9090 },
	{ 6311, -9167 },
	{ 5713, -8327 },
	{ 5888, -9313 },
	{ 4485, -8327 },
	{ 4310, -9313 },
	{ 3889, -8166 },
	{ 6867, -7906 },
	{ 7368, -8775 },
	{ 6309, -8166 },
	{ 6514, -9090 },
	{ 5713, -8327 },
	{ 561, -4844 },
	{ 1777, -6054 },
	{ 833, -6397 },
	{ 2037, -6611 },
	{ 2390, -7116 },
	{ 8421, -6054 },
	{ 8635, -4844 },
	{ 8582, -5458 },
	{ 2390, -7116 },
	{ 3331, -7906 },
	{ 2826, -7553 },
	{ 8576, -1927 },
	{ 7808, -2571 },
	{ 9365, -3292 },
	{ 7808, -2571 },
	{ 8161, -3075 },
	{ 9365, -3292 },
	{ 8421, -3634 },
	{ 9637, -4844 },
	{ 8582, -4230 },
	{ 833, -3292 },
	{ 1563, -4844 },
	{ 561, -4844 },
	{ 1617, -5458 },
	{ 1777, -6054 },
	{ 1623, -1927 },
	{ 1777, -3634 },
	{ 833, -3292 },
	{ 1617, -4230 },
	{ 1563, -4844 },
	{ 2830, -913 },
	{ 2390, -2571 },
	{ 1623, -1927 },
	{ 2037, -3075 },
	{ 1777, -3634 },
	{ 4041, -9230 },
	{ 3837, -9140 },
	{ 3331, -7906 },
	{ 2830, -8775 },
	{ 2390, -7116 },
	{ 1623, -7762 },
	{ 833, -6397 },
	{ 3331, -7906 },
	{ 3889, -8166 },
	{ 4041, -9230 },
	{ 4310, -9313 },
	{ 4028, -9944 },
	{ 5888, -9313 },
	{ 6335, -9944 },
	{ 6311, -9167 },
	{ 6867, -7906 },
	{ 7371, -7553 },
	{ 7368, -8775 },
	{ 7808, -7116 },
	{ 8576, -7762 },
	{ 8161, -6611 },
	{ 8421, -6054 },
	{ 4310, -374 },
	{ 3330, -1782 },
	{ 2830, -913 },
	{ 2826, -2135 },
	{ 2390, -2571 },
	{ 5888, -374 },
	{ 5713, -1362 },
	{ 7368, -913 },
	{ 5713, -1362 },
	{ 6309, -1522 },
	{ 7368, -913 },
	{ 6867, -1782 },
	{ 8576, -1927 },
	{ 7371, -2135 },
	{ 7808, -2571 },
	{ 4485, -8327 },
	{ 5713, -8327 },
	{ 5100, -8379 },
	{ 5713, -1362 },
	{ 5099, -1307 },
	{ 5888, -374 },
	{ 4485, -1362 },
	{ 4310, -374 },
	{ 3889, -1522 },
	{ 3330, -1782 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B33FC[] = {
	{ 4916, -7395 },
	{ 6375, -7394 },
	{ 4885, -6754 },
	{ 4621, 255 },
	{ 5526, -621 },
	{ 6375, 255 },
	{ 6432, -1380 },
	{ 7650, -1019 },
	{ 7022, -2405 },
	{ 7650, -2773 },
	{ 7229, -3569 },
	{ 7650, -4366 },
	{ 7022, -4734 },
	{ 7650, -6119 },
	{ 6432, -5758 },
	{ 6375, -7394 },
	{ 5526, -6517 },
	{ 4885, -6754 },
	{ 0, -6119 },
	{ 0, -7394 },
	{ 1275, -7394 },
	{ 1275, 255 },
	{ 0, 255 },
	{ 0, -1019 },
	{ 6375, -7394 },
	{ 7650, -7394 },
	{ 7650, -6119 },
	{ 7650, -1019 },
	{ 7650, 255 },
	{ 6375, 255 },
	{ 5526, -621 },
	{ 4416, -217 },
	{ 4621, 255 },
	{ 3233, -217 },
	{ 3028, 255 },
	{ 2121, -621 },
	{ 1275, 255 },
	{ 1217, -1380 },
	{ 0, -1019 },
	{ 625, -2405 },
	{ 0, -2773 },
	{ 420, -3569 },
	{ 0, -4366 },
	{ 625, -4734 },
	{ 0, -6119 },
	{ 1217, -5758 },
	{ 1275, -7394 },
	{ 2121, -6517 },
	{ 2871, -7395 },
	{ 2878, -6791 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B34C4[] = {
	{ 0, 253 },
	{ 254, 253 },
	{ 0, -253 },
	{ 254, -209 },
	{ 254, 253 },
	{ 0, 253 },
	{ 254, -209 },
	{ 0, -253 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B34E4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 19, poly_000B30F8, NULL, NULL, NULL, uv_000B326C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 7, poly_000B31E6, NULL, NULL, NULL, uv_000B33FC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_000B3258, NULL, NULL, NULL, uv_000B34C4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B352C[] = {
	{ -138.6665f, 0, 240.1776f },
	{ 355.9868f, 0, 0 },
	{ 277.3333f, 0, 0 },
	{ -48.15835f, 0, 273.1199f },
	{ 273.1198f, 0, 48.15834f },
	{ 273.12f, 0, -48.15842f },
	{ 400, 0, -83.33332f },
	{ 334.5182f, 0, -121.7547f },
	{ 260.6081f, 0, -94.85359f },
	{ 400, 0, -266.6666f },
	{ 212.4495f, 0, 178.2663f },
	{ 240.1777f, 0, -138.6667f },
	{ 240.1776f, 0, 138.6665f },
	{ 272.7017f, 0, -228.824f },
	{ 212.4496f, 0, -178.2664f },
	{ 400, 0, 83.33332f },
	{ 61.81649f, 0, 350.5786f },
	{ 178.2664f, 0, -212.4496f },
	{ 266.6666f, 0, -400 },
	{ 177.9934f, 0, -308.2937f },
	{ 138.6666f, 0, -240.1777f },
	{ 83.33332f, 0, -400 },
	{ 48.15846f, 0, 273.1198f },
	{ 94.85355f, 0, -260.6081f },
	{ 334.5182f, 0, 121.7546f },
	{ 61.81647f, 0, -350.5788f },
	{ 48.1584f, 0, -273.12f },
	{ -61.8164f, 0, 350.5786f },
	{ 400, 0, 266.6666f },
	{ -0.00024f, 0, -277.3333f },
	{ 260.6079f, 0, 94.85347f },
	{ -61.81651f, 0, -350.5786f },
	{ -48.15845f, 0, -273.12f },
	{ -83.33332f, 0, -400 },
	{ 96.87871f, -0.00001f, 400.0002f },
	{ -94.8536f, 0, -260.6081f },
	{ -266.6666f, 0, -400 },
	{ -177.9935f, 0, -308.2937f },
	{ -138.6667f, 0, -240.1776f },
	{ -400, 0, 400 },
	{ -94.85349f, 0, 260.608f },
	{ -178.2664f, 0, -212.4496f },
	{ 400, 0, 400 },
	{ -272.7017f, 0, -228.8239f },
	{ -212.4496f, 0, -178.2664f },
	{ -400, 0, -266.6666f },
	{ 94.85359f, 0, 260.6079f },
	{ -240.1777f, 0, -138.6666f },
	{ -400, 0, -83.33332f },
	{ -334.5182f, 0, -121.7546f },
	{ -260.6081f, 0, -94.85352f },
	{ 400, 0, -400 },
	{ 266.6666f, 0, 400 },
	{ -273.12f, 0, -48.15836f },
	{ -84.02275f, -0.00001f, 400.0002f },
	{ -355.9868f, 0, 0.000031f },
	{ -277.3333f, 0, 0.000058f },
	{ -400, 0, -400 },
	{ 177.9934f, 0, 308.2935f },
	{ -273.12f, 0, 48.15847f },
	{ -400, 0, 83.33332f },
	{ -334.5182f, 0, 121.7547f },
	{ -260.608f, 0, 94.85361f },
	{ -400, 0, 266.6666f },
	{ 138.6666f, 0, 240.1775f },
	{ -240.1776f, 0, 138.6667f },
	{ 272.7016f, 0, 228.8238f },
	{ -272.7016f, 0, 228.8239f },
	{ -212.4495f, 0, 178.2664f },
	{ 0.000058f, 0, 277.3332f },
	{ 178.2664f, 0, 212.4495f },
	{ -178.2663f, 0, 212.4496f },
	{ -266.6666f, 0, 400 },
	{ -177.9934f, 0, 308.2937f },
	{ -99.65163f, -0.00001f, 400.0004f },
	{ -99, 0, 337 },
	{ -83, 0, 344 },
	{ 114.2698f, -0.00084f, 400.0004f },
	{ 111, 0, 333 },
	{ 95, 0, 339 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B38EC[] = {
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
	{ 0.000001f, 1, 0 },
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
	{ 0.000001f, 1, 0 },
	{ 0, 1, 0 },
	{ 0.000001f, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B3CAC = { vertex_000B352C, normal_000B38EC, LengthOfArray<Sint32>(vertex_000B352C), meshlist_000B34E4, matlist_000B30BC, LengthOfArray<Uint16>(meshlist_000B34E4), LengthOfArray<Uint16>(matlist_000B30BC), { 0, -0.00042f, 0.000198f }, 565.6855f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B3CD4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B3CAC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B3D08[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 38, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B3D30[] = {
	4, 3, 2, 1, 0,
	0x8000u | 6, 2, 0, 6, 4, 7, 5
};

extern "C" __declspec(dllexport) Sint16 poly_000B3D48[] = {
	4, 6, 2, 7, 3,
	4, 1, 0, 5, 4
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B3D5C[] = {
	{ 254, -253 },
	{ 0, -225 },
	{ 254, 189 },
	{ 0, 189 },
	{ 208, -225 },
	{ 208, 189 },
	{ 0, -129 },
	{ 0, 93 },
	{ 254, -253 },
	{ 254, 253 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B3D84[] = {
	{ 0 },
	{ 254, 0 },
	{ 0, 255 },
	{ 254, 254 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B3DA4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000B3D30, NULL, NULL, NULL, uv_000B3D5C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000B3D48, NULL, NULL, NULL, uv_000B3D84, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B3DD4[] = {
	{ -7.150022f, -1.099989f, -10.55002f },
	{ -7.150021f, -1.099989f, 3.75f },
	{ -7.150022f, 23.90001f, -10.55002f },
	{ -7.150021f, 25.90001f, 3.75f },
	{ 7.149978f, 3.900012f, -10.55002f },
	{ 7.14998f, -5.099988f, 3.75f },
	{ 7.149978f, 17.9f, -10.55002f },
	{ 7.14998f, 25.90001f, 3.75f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B3E34[] = {
	{ -0.55132f, -0.556877f, -0.621236f },
	{ -0.796674f, -0.604409f, 0 },
	{ -0.521714f, 0.568916f, -0.635727f },
	{ -0.6736619f, 0.731916f, -0.102366f },
	{ 0.6631939f, -0.296785f, -0.687089f },
	{ 0.578696f, -0.781962f, -0.231616f },
	{ 0.669359f, 0.296366f, -0.681267f },
	{ 0.6552989f, 0.715796f, -0.241287f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B3E94 = { vertex_000B3DD4, normal_000B3E34, LengthOfArray<Sint32>(vertex_000B3DD4), meshlist_000B3DA4, matlist_000B3D08, LengthOfArray<Uint16>(meshlist_000B3DA4), LengthOfArray<Uint16>(matlist_000B3D08), { -0.00021f, 10.40001f, -3.400009f }, 21.36452f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B3EBC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B3E94, -329.5f, 3.5f, -149, 0x3FFF, 0x1555, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B3EF0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 42, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 40, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 44, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 41, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 45, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 46, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B3F90[] = {
	3, 17, 16, 12,
	0x8000u | 7, 12, 15, 16, 14, 13, 48, 47,
	0x8000u | 8, 43, 44, 0, 3, 1, 2, 20, 4
};

extern "C" __declspec(dllexport) Sint16 poly_000B3FBA[] = {
	8, 10, 6, 11, 7, 59, 60, 66, 67
};

extern "C" __declspec(dllexport) Sint16 poly_000B3FCC[] = {
	4, 4, 6, 12, 10
};

extern "C" __declspec(dllexport) Sint16 poly_000B3FD6[] = {
	0x8000u | 5, 23, 26, 24, 25, 28,
	3, 27, 20, 1,
	10, 28, 29, 25, 27, 26, 1, 23, 0, 50, 43,
	4, 39, 37, 17, 16,
	0x8000u | 6, 31, 30, 40, 39, 38, 37,
	0x8000u | 10, 34, 31, 42, 40, 35, 38, 36, 37, 13, 16,
	0x8000u | 6, 28, 52, 24, 51, 23, 50,
	8, 52, 53, 28, 34, 29, 31, 27, 30,
	0x8000u | 10, 53, 34, 8, 42, 9, 35, 5, 36, 47, 13
};

extern "C" __declspec(dllexport) Sint16 poly_000B4064[] = {
	8, 65, 67, 58, 60, 19, 7, 18, 6,
	8, 18, 45, 19, 32, 58, 57, 65, 64
};

extern "C" __declspec(dllexport) Sint16 poly_000B4088[] = {
	0x8000u | 14, 10, 12, 21, 17, 49, 39, 46, 30, 45, 27, 18, 20, 6, 4
};

extern "C" __declspec(dllexport) Sint16 poly_000B40A6[] = {
	8, 21, 10, 22, 11, 55, 59, 62, 66,
	8, 62, 61, 55, 54, 22, 41, 21, 49
};

extern "C" __declspec(dllexport) Sint16 poly_000B40CA[] = {
	8, 45, 46, 32, 33, 57, 56, 64, 63,
	8, 46, 49, 33, 41, 56, 54, 63, 61
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B40F0[] = {
	{ 0 },
	{ 78, 17 },
	{ 0, 238 },
	{ 0, 238 },
	{ 78, 254 },
	{ 78, 17 },
	{ 188, 234 },
	{ 188, 17 },
	{ 498, 234 },
	{ 498, 17 },
	{ 498, 5 },
	{ 498, 234 },
	{ 188, 17 },
	{ 188, 234 },
	{ 78, 17 },
	{ 78, 254 },
	{ 0 },
	{ 0, 238 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B4138[] = {
	{ 255, -1274 },
	{ 0, -1275 },
	{ 255, -756 },
	{ 0, -828 },
	{ 255, -340 },
	{ 0, -348 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B4158[] = {
	{ 1, -504 },
	{ 253, -504 },
	{ 1, 249 },
	{ 253, 249 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B4168[] = {
	{ 63, 129 },
	{ 65, 54 },
	{ 124, 127 },
	{ 124, 53 },
	{ 187, 122 },
	{ 127, 0 },
	{ 0 },
	{ 0, 54 },
	{ 187, 122 },
	{ 182, 55 },
	{ 124, 53 },
	{ 127, 0 },
	{ 65, 54 },
	{ 0, 54 },
	{ 63, 129 },
	{ 0, 125 },
	{ 70, 254 },
	{ 0, 254 },
	{ 118, 0 },
	{ 72, 79 },
	{ 0 },
	{ 0, 80 },
	{ 254, 73 },
	{ 254, 0 },
	{ 199, 77 },
	{ 118, 0 },
	{ 126, 82 },
	{ 72, 79 },
	{ 254, 120 },
	{ 254, 73 },
	{ 207, 126 },
	{ 199, 77 },
	{ 125, 127 },
	{ 126, 82 },
	{ 61, 132 },
	{ 72, 79 },
	{ 0, 131 },
	{ 0, 80 },
	{ 187, 122 },
	{ 202, 254 },
	{ 124, 127 },
	{ 140, 254 },
	{ 63, 129 },
	{ 70, 254 },
	{ 202, 254 },
	{ 255, 254 },
	{ 187, 122 },
	{ 254, 125 },
	{ 182, 55 },
	{ 254, 54 },
	{ 127, 0 },
	{ 254, 0 },
	{ 255, 254 },
	{ 254, 120 },
	{ 205, 254 },
	{ 207, 126 },
	{ 127, 254 },
	{ 125, 127 },
	{ 65, 254 },
	{ 61, 132 },
	{ 0, 254 },
	{ 0, 131 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B4260[] = {
	{ 0, 170 },
	{ 0, 254 },
	{ 336, 169 },
	{ 352, 255 },
	{ 650, 169 },
	{ 694, 254 },
	{ 1020, 108 },
	{ 1020, 255 },
	{ 1020, 108 },
	{ 1020, 0 },
	{ 650, 169 },
	{ 645, 0 },
	{ 336, 169 },
	{ 324, 0 },
	{ 0, 170 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B42A0[] = {
	{ 255, -1275 },
	{ 0, -1275 },
	{ 255, -963 },
	{ 0, -1011 },
	{ 254, -732 },
	{ 0, -738 },
	{ 255, -516 },
	{ 0, -513 },
	{ 255, -286 },
	{ 0, -274 },
	{ 255, -56 },
	{ 0, -7 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B42D8[] = {
	{ 1020, 108 },
	{ 1020, 255 },
	{ 596, 170 },
	{ 648, 255 },
	{ 306, 170 },
	{ 340, 255 },
	{ 0, 170 },
	{ 0, 255 },
	{ 0, 170 },
	{ 0 },
	{ 306, 170 },
	{ 320, 0 },
	{ 596, 170 },
	{ 602, 0 },
	{ 1020, 108 },
	{ 1020, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B4318[] = {
	{ 255, -765 },
	{ 123, -765 },
	{ 255, -422 },
	{ 112, -396 },
	{ 254, -122 },
	{ 122, -117 },
	{ 255, 255 },
	{ 115, 255 },
	{ 123, -765 },
	{ 0, -764 },
	{ 112, -396 },
	{ 0, -374 },
	{ 122, -117 },
	{ 0, -116 },
	{ 115, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B4358[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000B3F90, NULL, NULL, NULL, uv_000B40F0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000B3FBA, NULL, NULL, NULL, uv_000B4138, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000B3FCC, NULL, NULL, NULL, uv_000B4158, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 9, poly_000B3FD6, NULL, NULL, NULL, uv_000B4168, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_000B4064, NULL, NULL, NULL, uv_000B4260, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_000B4088, NULL, NULL, NULL, uv_000B42A0, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, poly_000B40A6, NULL, NULL, NULL, uv_000B42D8, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 2, poly_000B40CA, NULL, NULL, NULL, uv_000B4318, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B4418[] = {
	{ -41.41185f, -0.738822f, -22.4161f },
	{ -35.69985f, -0.738822f, -32.4001f },
	{ -35.69985f, -28.104f, -32.4001f },
	{ -41.41185f, -25.704f, -22.4161f },
	{ -26.41785f, -26.25f, -39.60011f },
	{ 47.12415f, 22.5166f, 5.99989f },
	{ -21.13425f, -19.08f, -20.6641f },
	{ -22.20653f, -11.63518f, 50.12602f },
	{ 29.27415f, 50.87081f, 5.999891f },
	{ 44.26815f, 38.23098f, 5.99989f },
	{ 21.13454f, -19.08f, -20.6641f },
	{ 23.69769f, -11.63518f, 46.56546f },
	{ 26.41815f, -26.25f, -39.60011f },
	{ 42.84014f, -0.738822f, -22.4161f },
	{ 42.84014f, -25.704f, -22.4161f },
	{ 35.70015f, -28.104f, -32.4001f },
	{ 35.70015f, -0.738822f, -32.4001f },
	{ 27.84615f, 1.298486f, -39.60011f },
	{ -20.43216f, 1.038788f, -36.60011f },
	{ -25.36105f, 1.246545f, 50.63994f },
	{ -26.41785f, 1.298486f, -39.60011f },
	{ 20.27204f, 1.038788f, -36.60011f },
	{ 26.83217f, 1.246545f, 45.69291f },
	{ -41.41185f, 13.9486f, -22.4161f },
	{ -37.12785f, 29.66297f, -22.4161f },
	{ -31.41585f, 29.66297f, -32.4001f },
	{ -35.69985f, 13.9486f, -32.4001f },
	{ -23.56185f, 27.97826f, -39.60011f },
	{ -29.27385f, 42.30281f, -22.4161f },
	{ -23.56185f, 39.44681f, -32.4001f },
	{ 0.000147f, 32.26828f, -39.60011f },
	{ 0.000147f, 47.16107f, -32.4001f },
	{ -19.46477f, 26.97912f, 50.10199f },
	{ 2.136509f, 32.65758f, 48.6323f },
	{ 0.000147f, 51.44507f, -22.4161f },
	{ 38.55614f, 33.94698f, -22.4161f },
	{ 41.41215f, 18.2326f, -22.4161f },
	{ 34.27214f, 18.2326f, -32.4001f },
	{ 31.41615f, 33.94698f, -32.4001f },
	{ 22.13415f, 27.97826f, -39.60011f },
	{ 17.85015f, 43.73082f, -32.4001f },
	{ 19.58503f, 26.97912f, 46.54144f },
	{ 24.99015f, 46.58681f, -22.4161f },
	{ -45.69585f, 0.689178f, 5.999891f },
	{ -45.69585f, -25.704f, 5.999891f },
	{ -18.84945f, 19.9826f, -36.60011f },
	{ 0.000147f, 22.21462f, -36.60011f },
	{ 48.55215f, -0.738822f, 5.99989f },
	{ 48.55215f, -25.704f, 5.99989f },
	{ 17.70735f, 19.9826f, -36.60011f },
	{ -45.69585f, 15.3766f, 5.999891f },
	{ -41.41185f, 31.09097f, 5.999891f },
	{ -33.55785f, 45.15881f, 5.999891f },
	{ 0.000147f, 57.15707f, 5.999891f },
	{ 37.35595f, 27.05647f, 100.3352f },
	{ 44.62314f, 1.323924f, 99.24663f },
	{ 21.86914f, 32.73488f, 110.538f },
	{ 5.029369f, 27.05647f, 120.857f },
	{ -0.8735639f, 1.323924f, 121.233f },
	{ 41.41921f, -11.55782f, 100.0106f },
	{ 2.327538f, -11.55782f, 121.1133f },
	{ 85.38705f, 27.05647f, 151.3913f },
	{ 90.5384f, 1.323925f, 147.8949f },
	{ 70.71956f, 32.73488f, 162.9543f },
	{ 56.88516f, 27.05647f, 174.4404f },
	{ 51.66593f, 1.323925f, 178.9973f },
	{ 88.37272f, -11.55782f, 148.975f },
	{ 53.92775f, -11.55782f, 177.2094f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B4748[] = {
	{ -0.944526f, 0, -0.328437f },
	{ -0.75067f, 0.014335f, -0.660522f },
	{ -0.752554f, 0, -0.65853f },
	{ -0.940686f, 0, -0.339278f },
	{ 0.051226f, 0.465973f, -0.883315f },
	{ 0.969892f, 0.124741f, -0.209163f },
	{ 0.689587f, 0.694778f, -0.204334f },
	{ 0.684377f, 0.71857f, -0.123631f },
	{ 0.445031f, 0.869181f, -0.215571f },
	{ 0.842762f, 0.480869f, -0.241903f },
	{ -0.5766f, 0.6973349f, -0.425743f },
	{ -0.6120459f, 0.78769f, 0.07031699f },
	{ 0.215991f, 0.283335f, -0.934382f },
	{ 0.9175889f, 0.032431f, -0.396206f },
	{ 0.912268f, 0, -0.409594f },
	{ 0.7330289f, 0, -0.6801969f },
	{ 0.727624f, 0.025559f, -0.6855f },
	{ 0.172831f, -0.088351f, -0.980981f },
	{ 0.937836f, -0.07770099f, -0.33827f },
	{ 0.9893219f, -0.01235f, -0.145224f },
	{ 0.052314f, -0.021573f, -0.9983979f },
	{ -0.778116f, -0.190001f, -0.598695f },
	{ -0.981913f, -0.041011f, 0.184836f },
	{ -0.937964f, 0.121964f, -0.324573f },
	{ -0.863911f, 0.370974f, -0.340642f },
	{ -0.701676f, 0.343363f, -0.624302f },
	{ -0.7533849f, 0.10597f, -0.648985f },
	{ -0.269611f, 0.188179f, -0.9444039f },
	{ -0.585804f, 0.737219f, -0.336662f },
	{ -0.396785f, 0.659347f, -0.638611f },
	{ -0.014254f, 0.142921f, -0.989631f },
	{ -0.043512f, 0.762951f, -0.64499f },
	{ 0.7324719f, -0.675469f, -0.08500399f },
	{ 0.01016f, -0.998742f, 0.049102f },
	{ -0.056736f, 0.956266f, -0.286943f },
	{ 0.81371f, 0.437875f, -0.382284f },
	{ 0.910184f, 0.111459f, -0.398926f },
	{ 0.712106f, 0.084822f, -0.696929f },
	{ 0.6198699f, 0.420148f, -0.662749f },
	{ 0.207363f, 0.132926f, -0.969191f },
	{ 0.26646f, 0.70406f, -0.658254f },
	{ -0.665077f, -0.729147f, 0.161299f },
	{ 0.437633f, 0.844278f, -0.309309f },
	{ -0.988826f, 0, -0.149076f },
	{ -0.988826f, 0, -0.149076f },
	{ 0.561731f, -0.456932f, -0.689689f },
	{ -0.003053f, -0.818591f, -0.574369f },
	{ 0.979856f, 0.032972f, -0.196965f },
	{ 0.980389f, 0, -0.197072f },
	{ -0.564891f, -0.476251f, -0.673857f },
	{ -0.978966f, 0.133482f, -0.154297f },
	{ -0.908705f, 0.381813f, -0.168744f },
	{ -0.627135f, 0.754292f, -0.194281f },
	{ -0.057408f, 0.980602f, -0.187412f },
	{ -0.592699f, -0.728156f, 0.344232f },
	{ -0.850476f, -0.015538f, 0.525785f },
	{ 0.026415f, -0.999552f, -0.014054f },
	{ 0.64058f, -0.654893f, -0.400964f },
	{ 0.863261f, 0.001117f, -0.504757f },
	{ -0.483637f, 0.827727f, 0.284541f },
	{ 0.569672f, 0.743349f, -0.350579f },
	{ -0.542152f, -0.666793f, 0.5113299f },
	{ -0.72439f, -0.018638f, 0.6891389f },
	{ -0.010127f, -0.999894f, 0.010464f },
	{ 0.521871f, -0.690752f, -0.500513f },
	{ 0.729305f, -0.006636f, -0.684157f },
	{ -0.476786f, 0.750758f, 0.457205f },
	{ 0.45632f, 0.787089f, -0.415045f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B4A78 = { vertex_000B4418, normal_000B4748, LengthOfArray<Sint32>(vertex_000B4418), meshlist_000B4358, matlist_000B3EF0, LengthOfArray<Uint16>(meshlist_000B4358), LengthOfArray<Uint16>(matlist_000B3EF0), { 22.42128f, 14.52654f, 69.6986f }, 133.6434f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B4AA0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B4A78, 38, -18, 1519, 0, 0xAAA, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B4AD4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 44, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 45, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 46, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 47, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B4B38[] = {
	8, 27, 26, 20, 19, 1, 3, 0, 2
};

extern "C" __declspec(dllexport) Sint16 poly_000B4B4A[] = {
	8, 25, 27, 18, 20, 5, 1, 4, 0,
	8, 4, 11, 5, 8, 18, 17, 25, 24
};

extern "C" __declspec(dllexport) Sint16 poly_000B4B6E[] = {
	8, 6, 2, 7, 3, 15, 19, 22, 26,
	8, 13, 6, 10, 7, 14, 15, 21, 22
};

extern "C" __declspec(dllexport) Sint16 poly_000B4B92[] = {
	8, 23, 24, 16, 17, 9, 8, 12, 11,
	8, 12, 13, 9, 10, 16, 14, 23, 21
};

extern "C" __declspec(dllexport) Sint16 poly_000B4BB6[] = {
	0x8000u | 7, 21, 23, 22, 24, 26, 25, 27
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B4BC8[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -348 },
	{ 255, -340 },
	{ 0, -828 },
	{ 255, -756 },
	{ 0, -1275 },
	{ 255, -1274 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B4BE8[] = {
	{ 0, 162 },
	{ 0, 255 },
	{ 348, 162 },
	{ 342, 255 },
	{ 669, 162 },
	{ 669, 254 },
	{ 1020, 170 },
	{ 1020, 255 },
	{ 1020, 170 },
	{ 1020, 0 },
	{ 669, 162 },
	{ 665, 0 },
	{ 348, 162 },
	{ 340, 0 },
	{ 0, 162 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B4C28[] = {
	{ 1019, 170 },
	{ 1020, 255 },
	{ 642, 163 },
	{ 641, 255 },
	{ 298, 162 },
	{ 302, 255 },
	{ 0, 163 },
	{ 0, 255 },
	{ 1020, 0 },
	{ 1019, 170 },
	{ 641, 0 },
	{ 642, 163 },
	{ 302, 0 },
	{ 298, 162 },
	{ 0 },
	{ 0, 163 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B4C68[] = {
	{ 115, 255 },
	{ 255, 255 },
	{ 122, -117 },
	{ 254, -122 },
	{ 112, -396 },
	{ 255, -422 },
	{ 123, -765 },
	{ 255, -765 },
	{ 123, -765 },
	{ 0, -764 },
	{ 112, -396 },
	{ 0, -374 },
	{ 122, -117 },
	{ 0, -116 },
	{ 115, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B4CA8[] = {
	{ 15, 143 },
	{ 15, 15 },
	{ 15, 239 },
	{ 111, 15 },
	{ 239, 239 },
	{ 239, 15 },
	{ 239, 143 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B4CC4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000B4B38, NULL, NULL, NULL, uv_000B4BC8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000B4B4A, NULL, NULL, NULL, uv_000B4BE8, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_000B4B6E, NULL, NULL, NULL, uv_000B4C28, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_000B4B92, NULL, NULL, NULL, uv_000B4C68, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_000B4BB6, NULL, NULL, NULL, uv_000B4CA8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B4D3C[] = {
	{ -24.18933f, -12.55782f, -22.97428f },
	{ -50.5264f, -12.32346f, 36.53213f },
	{ 19.58029f, -12.55782f, -14.73665f },
	{ -16.39754f, -12.32346f, 57.99776f },
	{ -27.01281f, 0.323924f, -23.5577f },
	{ -52.99673f, 1.320283f, 35.49659f },
	{ 21.79973f, 0.323924f, -13.77187f },
	{ -13.74162f, 1.320283f, 58.72601f },
	{ -48.61449f, 25.39757f, 37.78337f },
	{ -33.3227f, 31.23442f, 47.90601f },
	{ -19.23195f, 25.39757f, 56.07105f },
	{ -20.16718f, 26.05647f, -22.48864f },
	{ -2.475666f, 31.73489f, -19.27405f },
	{ 15.81017f, 26.05647f, -15.47064f },
	{ -68.69624f, 25.47952f, 113.9038f },
	{ -67.04651f, 1.402238f, 118.6852f },
	{ -79.82601f, 31.31638f, 96.58536f },
	{ -89.39594f, 25.47952f, 81.7574f },
	{ -91.64909f, 1.402238f, 77.65556f },
	{ -67.84382f, -12.2415f, 115.9824f },
	{ -90.58791f, -12.2415f, 79.91301f },
	{ -128.3785f, 25.47952f, 146.567f },
	{ -128.3275f, 1.402238f, 151.7256f },
	{ -136.9643f, 31.31638f, 129.3946f },
	{ -144.7012f, 25.47952f, 111.7733f },
	{ -145.9913f, 1.402238f, 107.7796f },
	{ -128.3472f, -12.2415f, 149.4581f },
	{ -145.0627f, -12.2415f, 109.9769f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B4E8C[] = {
	{ 0.529484f, 0.817048f, 0.228211f },
	{ 0.499101f, 0.805289f, 0.320013f },
	{ -0.623072f, 0.71769f, -0.31097f },
	{ -0.552116f, 0.743114f, -0.378087f },
	{ 0.911012f, -0.011488f, 0.412221f },
	{ 0.8318419f, -0.010733f, 0.554908f },
	{ -0.897434f, -0.020932f, -0.440652f },
	{ -0.8322099f, -0.021504f, -0.5540439f },
	{ 0.59714f, -0.694792f, 0.400859f },
	{ -0.029134f, -0.999357f, -0.020904f },
	{ -0.627681f, -0.654561f, -0.421386f },
	{ 0.6329139f, -0.71758f, 0.290686f },
	{ -0.043452f, -0.99849f, -0.033616f },
	{ -0.689847f, -0.638827f, -0.340606f },
	{ -0.47761f, -0.6472f, -0.594155f },
	{ -0.616289f, -0.01454f, -0.7873859f },
	{ -0.018365f, -0.999766f, -0.011473f },
	{ 0.444526f, -0.689504f, 0.571822f },
	{ 0.618926f, -0.004911f, 0.7854339f },
	{ -0.428836f, 0.733407f, -0.52746f },
	{ 0.369765f, 0.800192f, 0.472193f },
	{ 0.271762f, -0.548337f, -0.790868f },
	{ 0.299371f, -0.016738f, -0.95399f },
	{ 0.596186f, -0.759892f, -0.259088f },
	{ 0.803407f, -0.529601f, 0.272139f },
	{ 0.926634f, -0.009848f, 0.375835f },
	{ 0.281503f, 0.609837f, -0.740847f },
	{ 0.755488f, 0.620618f, 0.209932f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B4FDC = { vertex_000B4D3C, normal_000B4E8C, LengthOfArray<Sint32>(vertex_000B4D3C), meshlist_000B4CC4, matlist_000B4AD4, LengthOfArray<Uint16>(meshlist_000B4CC4), LengthOfArray<Uint16>(matlist_000B4AD4), { -62.09578f, 9.588532f, 64.08395f }, 118.2196f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B5004 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B4FDC, 167, -17, 1664, 0, 0x2E38, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B5038[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B5074[] = {
	6, 4, 5, 0, 1, 3, 2,
	3, 2, 6, 3,
	0x8000u | 5, 3, 7, 6, 9, 8
};

extern "C" __declspec(dllexport) Sint16 poly_000B5096[] = {
	0x8000u | 5, 5, 10, 11, 8, 9,
	3, 5, 4, 11
};

extern "C" __declspec(dllexport) Sint16 poly_000B50AA[] = {
	6, 3, 7, 0, 9, 4, 11
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B50B8[] = {
	{ 0 },
	{ 0, 255 },
	{ 390, 0 },
	{ 378, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0, 255 },
	{ 253, 255 },
	{ 0 },
	{ 0 },
	{ 272, 0 },
	{ 253, 255 },
	{ 510, 0 },
	{ 510, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B50F0[] = {
	{ 510, 255 },
	{ 372, 255 },
	{ 342, 0 },
	{ 0, 255 },
	{ 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 342, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B5110[] = {
	{ 0, 255 },
	{ 0, -255 },
	{ 244, 255 },
	{ 218, -255 },
	{ 510, 255 },
	{ 510, -255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B5128[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000B5074, NULL, NULL, NULL, uv_000B50B8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000B5096, NULL, NULL, NULL, uv_000B50F0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000B50AA, NULL, NULL, NULL, uv_000B5110, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B5170[] = {
	{ -13.22017f, -12, 6.799076f },
	{ -27.40599f, -27, 13.33837f },
	{ -2.852262f, -32.00001f, 37.54816f },
	{ -0.624033f, -9.843402f, 13.17341f },
	{ -14.22524f, -13, -4.862392f },
	{ -28.19069f, -26, -10.69045f },
	{ 21.39694f, -35.00001f, 24.39612f },
	{ 6.084399f, -7.693859f, 8.541117f },
	{ 27.33251f, -36.00001f, -9.215917f },
	{ 2.450888f, -5.000001f, -1.411771f },
	{ -8.769822f, -30.00001f, -25.14141f },
	{ -3.45598f, -13, -10.2497f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B5200[] = {
	{ -0.536191f, 0.827474f, 0.166691f },
	{ -0.595647f, 0.733242f, 0.327963f },
	{ 0.034423f, 0.712732f, 0.700591f },
	{ -0.07505199f, 0.8346519f, 0.54564f },
	{ -0.519011f, 0.761534f, -0.388192f },
	{ -0.566106f, 0.7425449f, -0.357982f },
	{ 0.683871f, 0.659176f, 0.312741f },
	{ 0.451624f, 0.864921f, 0.218968f },
	{ 0.694039f, 0.573508f, -0.4352f },
	{ 0.181265f, 0.918972f, -0.350189f },
	{ 0.031426f, 0.646587f, -0.762193f },
	{ -0.016408f, 0.7045929f, -0.709422f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B5290 = { vertex_000B5170, normal_000B5200, LengthOfArray<Sint32>(vertex_000B5170), meshlist_000B5128, matlist_000B5038, LengthOfArray<Uint16>(meshlist_000B5128), LengthOfArray<Uint16>(matlist_000B5038), { -0.429088f, -20.5f, 6.203379f }, 41.01829f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B52B8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B5290, -219, 24, 434, 0, 0xFFFFCAB6, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B52EC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 42, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B5314[] = {
	6, 4, 5, 0, 1, 3, 2,
	3, 2, 6, 3,
	0x8000u | 5, 3, 7, 6, 9, 8,
	0x8000u | 5, 5, 10, 11, 8, 9,
	3, 5, 4, 11
};

extern "C" __declspec(dllexport) Sint16 poly_000B534A[] = {
	6, 11, 4, 9, 0, 7, 3
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B5358[] = {
	{ 0 },
	{ 0, 255 },
	{ 390, 0 },
	{ 378, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0, 255 },
	{ 253, 255 },
	{ 0 },
	{ 0 },
	{ 272, 0 },
	{ 253, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 510, 255 },
	{ 372, 255 },
	{ 342, 0 },
	{ 0, 255 },
	{ 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 342, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B53B0[] = {
	{ 46, 255 },
	{ 0, 237 },
	{ 127, 200 },
	{ 31, 149 },
	{ 119, 158 },
	{ 60, 127 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B53C8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_000B5314, NULL, NULL, NULL, uv_000B5358, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000B534A, NULL, NULL, NULL, uv_000B53B0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B53F8[] = {
	{ -7.749479f, -4.958649f, 11.42851f },
	{ -14.53004f, -11.34683f, 17.78239f },
	{ -3.491621f, -11.94031f, 26.84169f },
	{ -2.888594f, -1.706543f, 17.74205f },
	{ -13.02025f, -9.989441f, -13.78466f },
	{ -20.15515f, -16.16815f, -23.12419f },
	{ 11.42548f, -15.17604f, 14.08122f },
	{ 7.050081f, -6.323181f, 8.800977f },
	{ 15.54753f, -18.97679f, -4.84975f },
	{ 8.38588f, -7.890991f, -3.204577f },
	{ -8.874128f, -18.75781f, -29.52403f },
	{ -5.14105f, -10.88983f, -18.67555f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B5488[] = {
	{ -0.383274f, 0.923534f, 0.013686f },
	{ -0.557737f, 0.761916f, 0.329262f },
	{ 0.140675f, 0.771092f, 0.620989f },
	{ 0.062226f, 0.936466f, 0.345194f },
	{ -0.342316f, 0.917312f, -0.203369f },
	{ -0.295483f, 0.882296f, -0.366392f },
	{ 0.766675f, 0.5770169f, 0.281533f },
	{ 0.5126899f, 0.858574f, -0.000532f },
	{ 0.7797f, 0.538921f, -0.318798f },
	{ 0.5129859f, 0.8003359f, -0.310334f },
	{ 0.154901f, 0.805698f, -0.571714f },
	{ 0.24599f, 0.830668f, -0.499479f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B5518 = { vertex_000B53F8, normal_000B5488, LengthOfArray<Sint32>(vertex_000B53F8), meshlist_000B53C8, matlist_000B52EC, LengthOfArray<Uint16>(meshlist_000B53C8), LengthOfArray<Uint16>(matlist_000B52EC), { -2.30381f, -10.34167f, -1.341173f }, 33.41303f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B5540 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B5518, 57, -42, 1368, 0, 0x5F2, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B5574[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B55B0[] = {
	6, 2, 3, 1, 0, 5, 4,
	3, 2, 6, 3,
	0x8000u | 5, 3, 7, 6, 9, 8
};

extern "C" __declspec(dllexport) Sint16 poly_000B55D2[] = {
	0x8000u | 5, 5, 10, 11, 8, 9,
	3, 5, 4, 11
};

extern "C" __declspec(dllexport) Sint16 poly_000B55E6[] = {
	6, 11, 4, 9, 0, 7, 3
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B55F4[] = {
	{ 765, 255 },
	{ 672, 0 },
	{ 456, 254 },
	{ 456, 0 },
	{ 0, 255 },
	{ 98, 0 },
	{ 0, 255 },
	{ 380, 255 },
	{ 74, 0 },
	{ 74, 0 },
	{ 384, 0 },
	{ 380, 255 },
	{ 648, 0 },
	{ 765, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B562C[] = {
	{ 765, 255 },
	{ 480, 254 },
	{ 480, 0 },
	{ 0, 255 },
	{ 122, 0 },
	{ 765, 255 },
	{ 672, 0 },
	{ 480, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B564C[] = {
	{ 354, -504 },
	{ 131, -504 },
	{ 510, -86 },
	{ 0, -163 },
	{ 386, 249 },
	{ 99, 249 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B5664[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000B55B0, NULL, NULL, NULL, uv_000B55F4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000B55D2, NULL, NULL, NULL, uv_000B562C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000B55E6, NULL, NULL, NULL, uv_000B564C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B56AC[] = {
	{ -40.7445f, -12.00001f, 20.95476f },
	{ -63.21338f, -40.69245f, 33.59115f },
	{ -6.406186f, -20.26364f, 83.86398f },
	{ -1.923236f, -9.84341f, 40.60044f },
	{ -43.84214f, -13.00001f, -14.98587f },
	{ -65.28764f, -48.23109f, -17.30575f },
	{ 49.57225f, -7.61515f, 50.28523f },
	{ 18.75214f, -7.693866f, 26.32372f },
	{ 38.23219f, -17.46734f, -13.23923f },
	{ 7.553661f, -5.000009f, -4.351061f },
	{ -20.52985f, -44.38489f, -51.99937f },
	{ -25.60105f, -11.94084f, -25.84f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B573C[] = {
	{ -0.512971f, 0.850127f, 0.118933f },
	{ -0.708374f, 0.686007f, 0.166136f },
	{ -0.352559f, 0.9081039f, 0.225942f },
	{ -0.241362f, 0.956139f, 0.16596f },
	{ -0.575021f, 0.7559209f, -0.312945f },
	{ -0.774274f, 0.53945f, -0.330897f },
	{ 0.008153f, 0.9959289f, 0.089774f },
	{ 0.021367f, 0.997474f, 0.067736f },
	{ 0.193445f, 0.922862f, -0.333023f },
	{ 0.058915f, 0.96232f, -0.265461f },
	{ -0.233611f, 0.574571f, -0.784407f },
	{ -0.215021f, 0.789935f, -0.574254f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B57CC = { vertex_000B56AC, normal_000B573C, LengthOfArray<Sint32>(vertex_000B56AC), meshlist_000B5664, matlist_000B5574, LengthOfArray<Uint16>(meshlist_000B5664), LengthOfArray<Uint16>(matlist_000B5574), { -7.857695f, -26.61555f, 15.9323f }, 86.15541f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B57F4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B57CC, 225, 1, 559, 0xFFFF89DD, 0xFFFF4F5F, 0xFFFF816C, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B5828[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B5864[] = {
	6, 2, 3, 1, 0, 5, 4,
	3, 2, 6, 3,
	0x8000u | 5, 3, 7, 6, 9, 8
};

extern "C" __declspec(dllexport) Sint16 poly_000B5886[] = {
	0x8000u | 5, 5, 10, 11, 8, 9,
	3, 5, 4, 11
};

extern "C" __declspec(dllexport) Sint16 poly_000B589A[] = {
	6, 11, 4, 9, 0, 7, 3
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B58A8[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 189, 255 },
	{ 195, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 126, 255 },
	{ 0 },
	{ 0 },
	{ 136, 0 },
	{ 126, 255 },
	{ 255, 0 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B58E0[] = {
	{ 255, 255 },
	{ 186, 255 },
	{ 171, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 171, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B5900[] = {
	{ 255, -255 },
	{ 0, -255 },
	{ 255, 59 },
	{ 0, 135 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B5918[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000B5864, NULL, NULL, NULL, uv_000B58A8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000B5886, NULL, NULL, NULL, uv_000B58E0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000B589A, NULL, NULL, NULL, uv_000B5900, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B5960[] = {
	{ -7.749496f, -4.958649f, 11.42844f },
	{ -14.53006f, -14.34683f, 17.78232f },
	{ -3.491637f, -16.94031f, 26.84162f },
	{ -2.88861f, -3.706543f, 17.74198f },
	{ -13.02026f, -4.989441f, -13.78473f },
	{ -20.15517f, -9.168152f, -23.12427f },
	{ 11.42546f, -18.17604f, 14.08115f },
	{ 7.050065f, -2.323181f, 8.800905f },
	{ 15.54752f, -14.97679f, -4.84982f },
	{ 8.385864f, -1.890991f, -3.204648f },
	{ -8.874145f, -9.757813f, -29.52411f },
	{ -5.141067f, -3.889832f, -18.67563f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B59F0[] = {
	{ -0.445064f, 0.864498f, 0.233583f },
	{ -0.557926f, 0.6683969f, 0.491899f },
	{ 0.144505f, 0.576805f, 0.8039989f },
	{ 0.038863f, 0.790051f, 0.6118079f },
	{ -0.42144f, 0.906783f, -0.011508f },
	{ -0.376421f, 0.9142579f, -0.1498f },
	{ 0.782122f, 0.412231f, 0.46728f },
	{ 0.484464f, 0.835431f, 0.259517f },
	{ 0.867161f, 0.459123f, -0.192969f },
	{ 0.516316f, 0.838915f, -0.172161f },
	{ 0.13136f, 0.892933f, -0.430598f },
	{ 0.223734f, 0.900263f, -0.373456f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B5A80 = { vertex_000B5960, normal_000B59F0, LengthOfArray<Sint32>(vertex_000B5960), meshlist_000B5918, matlist_000B5828, LengthOfArray<Uint16>(meshlist_000B5918), LengthOfArray<Uint16>(matlist_000B5828), { -2.303825f, -10.03352f, -1.341246f }, 30.85404f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B5AA8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B5A80, 189, -35, 663, 0, 0xFFFFDF15, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B5ADC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B5B40[] = {
	18, 30, 12, 29, 9, 28, 6, 27, 3, 26, 24, 25, 21, 0, 18, 31, 15, 30, 12
};

extern "C" __declspec(dllexport) Sint16 poly_000B5B66[] = {
	0x8000u | 6, 22, 23, 1, 2, 4, 5,
	0x8000u | 6, 10, 11, 13, 14, 16, 17
};

extern "C" __declspec(dllexport) Sint16 poly_000B5B82[] = {
	0x8000u | 6, 16, 17, 19, 20, 22, 23,
	0x8000u | 6, 11, 10, 8, 7, 5, 4
};

extern "C" __declspec(dllexport) Sint16 poly_000B5B9E[] = {
	3, 18, 21, 24,
	3, 9, 12, 15,
	0x8000u | 6, 6, 3, 9, 24, 15, 18
};

extern "C" __declspec(dllexport) Sint16 poly_000B5BBC[] = {
	16, 14, 31, 11, 30, 8, 29, 5, 28, 2, 27, 23, 26, 20, 25, 17, 0,
	4, 17, 0, 14, 31
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B5BE8[] = {
	{ 765, 255 },
	{ 762, 75 },
	{ 670, 255 },
	{ 669, 79 },
	{ 568, 255 },
	{ 562, 79 },
	{ 482, 255 },
	{ 478, 79 },
	{ 376, 255 },
	{ 372, 79 },
	{ 292, 255 },
	{ 264, 79 },
	{ 191, 255 },
	{ 180, 79 },
	{ 97, 254 },
	{ 97, 79 },
	{ 1, 254 },
	{ 1, 79 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B5C30[] = {
	{ 765, 254 },
	{ 765, 0 },
	{ 362, 255 },
	{ 362, 0 },
	{ 0, 255 },
	{ 0 },
	{ 764, 255 },
	{ 765, 0 },
	{ 440, 255 },
	{ 440, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B5C60[] = {
	{ 765, 255 },
	{ 765, 0 },
	{ 362, 255 },
	{ 362, 0 },
	{ 0, 254 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ 426, 0 },
	{ 426, 255 },
	{ 765, 0 },
	{ 765, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B5C90[] = {
	{ 174, -944 },
	{ 741, -1275 },
	{ 1203, -947 },
	{ 741, 254 },
	{ 149, 20 },
	{ 0, -604 },
	{ 1386, -83 },
	{ 1530, -488 },
	{ 741, 254 },
	{ 1203, -947 },
	{ 0, -604 },
	{ 174, -944 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B5CC0[] = {
	{ 669, 254 },
	{ 669, 0 },
	{ 577, 255 },
	{ 573, 0 },
	{ 468, 255 },
	{ 478, 0 },
	{ 380, 255 },
	{ 376, 0 },
	{ 292, 255 },
	{ 290, 0 },
	{ 194, 255 },
	{ 186, 0 },
	{ 102, 255 },
	{ 100, 0 },
	{ 0, 255 },
	{ 0 },
	{ 762, 0 },
	{ 762, 254 },
	{ 669, 0 },
	{ 669, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B5D10[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000B5B40, NULL, NULL, NULL, uv_000B5BE8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000B5B66, NULL, NULL, NULL, uv_000B5C30, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_000B5B82, NULL, NULL, NULL, uv_000B5C60, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 3, poly_000B5B9E, NULL, NULL, NULL, uv_000B5C90, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_000B5BBC, NULL, NULL, NULL, uv_000B5CC0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B5D88[] = {
	{ -53.76795f, 75.39617f, 52.24058f },
	{ 96.67717f, 30.90907f, -5.154265f },
	{ 87.25114f, 48.4591f, -4.651715f },
	{ 67.42958f, 86.96803f, -2.350012f },
	{ 77.46351f, 33.03188f, -78.3797f },
	{ 69.91083f, 50.5819f, -70.73766f },
	{ 55.88927f, 81.12785f, -39.7308f },
	{ 11.40061f, 24.54518f, -108.4911f },
	{ 10.28906f, 42.09522f, -97.91323f },
	{ 3.459013f, 85.10092f, -70.95325f },
	{ -74.4041f, 21.727f, -75.36366f },
	{ -67.1497f, 39.277f, -68.01572f },
	{ -44.72704f, 85.06459f, -49.32735f },
	{ -98.65128f, 23.30504f, -12.42998f },
	{ -89.03278f, 40.85505f, -11.21805f },
	{ -56.83604f, 103.2663f, 8.373913f },
	{ -79.68654f, 19.99027f, 77.57088f },
	{ -71.9171f, 37.54028f, 70.00768f },
	{ -42.69563f, 94.83995f, 39.79129f },
	{ -3.108342f, 14.53769f, 115.8486f },
	{ -2.805274f, 32.08771f, 104.5533f },
	{ 3.39082f, 82.18112f, 70.30372f },
	{ 58.53775f, 17.01596f, 68.78408f },
	{ 52.83031f, 34.56599f, 62.07762f },
	{ 40.9474f, 86.90272f, 40.08427f },
	{ 2.057956f, 64.49961f, 88.79604f },
	{ 47.96376f, 69.40388f, 52.42697f },
	{ 75.53628f, 75.61578f, -2.769986f },
	{ 60.01627f, 70.18038f, -51.39516f },
	{ 2.335877f, 73.25979f, -74.50883f },
	{ -52.25497f, 73.53435f, -56.96141f },
	{ -67.1689f, 91.49219f, 0.8579929f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B5F08[] = {
	{ -0.6120639f, 0.5616519f, 0.556708f },
	{ 0.874343f, 0.46235f, 0.1475f },
	{ 0.886849f, 0.439162f, 0.143653f },
	{ 0.523076f, 0.852254f, -0.007429f },
	{ 0.618253f, 0.5323949f, -0.578203f },
	{ 0.591288f, 0.5870709f, -0.552925f },
	{ 0.445166f, 0.80594f, -0.390241f },
	{ -0.022921f, 0.51811f, -0.855007f },
	{ -0.019169f, 0.556357f, -0.830722f },
	{ 0.089874f, 0.823594f, -0.5600139f },
	{ -0.612191f, 0.505359f, -0.60814f },
	{ -0.621264f, 0.498028f, -0.604979f },
	{ -0.39733f, 0.770479f, -0.498489f },
	{ -0.87081f, 0.486693f, -0.06942499f },
	{ -0.87912f, 0.469809f, -0.08017199f },
	{ -0.360031f, 0.91983f, 0.155853f },
	{ -0.638478f, 0.5318559f, 0.556305f },
	{ -0.666383f, 0.516251f, 0.537977f },
	{ -0.23599f, 0.860905f, 0.450723f },
	{ 0.080991f, 0.535966f, 0.840346f },
	{ 0.09267499f, 0.50403f, 0.8587f },
	{ 0.094699f, 0.8037249f, 0.587416f },
	{ 0.649744f, 0.434837f, 0.6234969f },
	{ 0.6859699f, 0.368541f, 0.627394f },
	{ 0.419615f, 0.837847f, 0.349192f },
	{ 0.12094f, 0.539931f, 0.832976f },
	{ 0.657035f, 0.447216f, 0.6068799f },
	{ 0.853707f, 0.508535f, 0.112146f },
	{ 0.613399f, 0.60022f, -0.5132999f },
	{ -0.031526f, 0.579725f, -0.814202f },
	{ -0.580005f, 0.538587f, -0.611161f },
	{ -0.80676f, 0.589472f, -0.040757f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B6088 = { vertex_000B5D88, normal_000B5F08, LengthOfArray<Sint32>(vertex_000B5D88), meshlist_000B5D10, matlist_000B5ADC, LengthOfArray<Uint16>(meshlist_000B5D10), LengthOfArray<Uint16>(matlist_000B5ADC), { -0.987053f, 58.90199f, 3.678757f }, 148.7292f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B60B0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B6088, 392, -25.95284f, 392, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B60E4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B6120[] = {
	6, 2, 3, 1, 0, 5, 4,
	3, 2, 6, 3,
	0x8000u | 5, 3, 7, 6, 9, 8
};

extern "C" __declspec(dllexport) Sint16 poly_000B6142[] = {
	0x8000u | 5, 5, 10, 11, 8, 9,
	3, 5, 4, 11
};

extern "C" __declspec(dllexport) Sint16 poly_000B6156[] = {
	6, 3, 7, 0, 9, 4, 11
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B6164[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 189, 255 },
	{ 195, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 126, 255 },
	{ 0 },
	{ 0 },
	{ 136, 0 },
	{ 126, 255 },
	{ 255, 0 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B619C[] = {
	{ 255, 255 },
	{ 186, 255 },
	{ 171, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 171, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B61BC[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 135 },
	{ 255, 59 },
	{ 0, -255 },
	{ 255, -255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B61D4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000B6120, NULL, NULL, NULL, uv_000B6164, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000B6142, NULL, NULL, NULL, uv_000B619C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000B6156, NULL, NULL, NULL, uv_000B61BC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B621C[] = {
	{ -2.41269f, 2.518606f, 8.760791f },
	{ -5.599555f, -5.256078f, 11.74711f },
	{ -4.350412f, -6.423142f, 23.03954f },
	{ -1.651412f, -0.917946f, 20.54174f },
	{ -3.491745f, -0.245249f, -3.301573f },
	{ -10.82759f, -3.025671f, -5.656413f },
	{ 14.1455f, -9.079223f, 26.74251f },
	{ 9.249125f, -1.045432f, 19.68535f },
	{ 14.84787f, -7.189559f, -9.145312f },
	{ 11.4819f, 0.9490539f, -8.372083f },
	{ -1.417937f, -4.391017f, -19.3005f },
	{ 0.336609f, -0.400424f, -14.20171f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B62AC[] = {
	{ -0.317046f, 0.9428239f, 0.102779f },
	{ -0.828957f, 0.556938f, 0.051473f },
	{ -0.484842f, 0.6675259f, 0.5651f },
	{ -0.334285f, 0.810344f, 0.481244f },
	{ -0.34495f, 0.9288149f, -0.135326f },
	{ -0.488667f, 0.856515f, -0.166095f },
	{ 0.511193f, 0.685586f, 0.518317f },
	{ 0.460867f, 0.780675f, 0.422076f },
	{ 0.808947f, 0.513136f, -0.286871f },
	{ 0.5503809f, 0.795384f, -0.253861f },
	{ 0.144088f, 0.813622f, -0.563257f },
	{ 0.09144299f, 0.887222f, -0.45219f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B633C = { vertex_000B621C, normal_000B62AC, LengthOfArray<Sint32>(vertex_000B621C), meshlist_000B61D4, matlist_000B60E4, LengthOfArray<Uint16>(meshlist_000B61D4), LengthOfArray<Uint16>(matlist_000B60E4), { 2.010143f, -3.280308f, 3.721005f }, 27.28626f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B6364 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B633C, -183, -13, 500, 0, 0xFFFFD9DE, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B6398[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B63D4[] = {
	6, 4, 5, 0, 1, 3, 2,
	3, 2, 6, 3,
	0x8000u | 5, 3, 7, 6, 9, 8
};

extern "C" __declspec(dllexport) Sint16 poly_000B63F6[] = {
	0x8000u | 5, 5, 10, 11, 8, 9,
	3, 5, 4, 11
};

extern "C" __declspec(dllexport) Sint16 poly_000B640A[] = {
	6, 3, 7, 0, 9, 4, 11
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B6418[] = {
	{ 0 },
	{ 0, 255 },
	{ 195, 0 },
	{ 189, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 126, 255 },
	{ 0 },
	{ 0 },
	{ 136, 0 },
	{ 126, 255 },
	{ 255, 0 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B6450[] = {
	{ 255, 255 },
	{ 186, 255 },
	{ 171, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 171, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B6470[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 135 },
	{ 255, 59 },
	{ 0, -255 },
	{ 255, -255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B6488[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000B63D4, NULL, NULL, NULL, uv_000B6418, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000B63F6, NULL, NULL, NULL, uv_000B6450, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000B640A, NULL, NULL, NULL, uv_000B6470, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B64D0[] = {
	{ -16.07854f, -12.95865f, 13.04926f },
	{ -18.6571f, -23.34683f, 11.38173f },
	{ -3.491638f, -26.94031f, 26.84161f },
	{ -7.090613f, -19.70654f, 25.76339f },
	{ -17.22226f, -4.989441f, -5.763313f },
	{ -20.15517f, -7.168152f, -23.12427f },
	{ 11.42546f, -16.17604f, 14.08115f },
	{ 2.84806f, -5.323181f, 16.82232f },
	{ 15.54752f, -4.976791f, -4.849823f },
	{ 0.038082f, 3.109009f, 2.021681f },
	{ -8.874146f, -0.757813f, -29.52411f },
	{ -9.343069f, 4.110168f, -10.65421f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B6560[] = {
	{ -0.734816f, 0.426291f, 0.527562f },
	{ -0.886513f, 0.06639799f, 0.457914f },
	{ -0.004765f, 0.114763f, 0.993381f },
	{ -0.232432f, 0.255979f, 0.938323f },
	{ -0.786885f, 0.571104f, 0.233777f },
	{ -0.740291f, 0.670926f, 0.04275f },
	{ 0.638768f, 0.490908f, 0.592439f },
	{ 0.253699f, 0.696461f, 0.671252f },
	{ 0.551056f, 0.833409f, 0.042034f },
	{ 0.119126f, 0.9548039f, 0.27232f },
	{ -0.240918f, 0.965269f, -0.101063f },
	{ -0.205628f, 0.978021f, 0.034531f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B65F0 = { vertex_000B64D0, normal_000B6560, LengthOfArray<Sint32>(vertex_000B64D0), meshlist_000B6488, matlist_000B6398, LengthOfArray<Uint16>(meshlist_000B6488), LengthOfArray<Uint16>(matlist_000B6398), { -2.303825f, -11.41507f, -1.341248f }, 32.47514f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B6618 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B65F0, -476, 36, 149, 0, 0x582B, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B664C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B6688[] = {
	6, 4, 5, 0, 1, 3, 2,
	3, 2, 6, 3,
	0x8000u | 5, 3, 7, 6, 9, 8
};

extern "C" __declspec(dllexport) Sint16 poly_000B66AA[] = {
	0x8000u | 5, 5, 10, 11, 8, 9,
	3, 5, 4, 11
};

extern "C" __declspec(dllexport) Sint16 poly_000B66BE[] = {
	6, 11, 4, 9, 0, 7, 3
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B66CC[] = {
	{ 0 },
	{ 0, 255 },
	{ 195, 0 },
	{ 189, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 126, 255 },
	{ 0 },
	{ 0 },
	{ 136, 0 },
	{ 126, 255 },
	{ 255, 0 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B6704[] = {
	{ 255, 255 },
	{ 186, 255 },
	{ 171, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 171, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B6724[] = {
	{ 255, -255 },
	{ 0, -255 },
	{ 255, 59 },
	{ 0, 135 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B673C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000B6688, NULL, NULL, NULL, uv_000B66CC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000B66AA, NULL, NULL, NULL, uv_000B6704, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000B66BE, NULL, NULL, NULL, uv_000B6724, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B6784[] = {
	{ -7.749496f, -9.958649f, 11.42844f },
	{ -14.53006f, -18.34683f, 17.78232f },
	{ -3.491638f, -20.94031f, 26.84161f },
	{ -2.888611f, -8.706543f, 17.74197f },
	{ -13.02026f, -4.989441f, -13.78473f },
	{ -20.15517f, -11.16815f, -23.12427f },
	{ 11.42546f, -20.17604f, 14.08115f },
	{ 7.050064f, -2.323181f, 8.800902f },
	{ 15.54752f, -15.97679f, -4.849823f },
	{ 8.385863f, 2.109009f, -3.204651f },
	{ -8.874146f, -9.757813f, -29.52411f },
	{ -5.141068f, -0.889832f, -18.67563f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B6814[] = {
	{ -0.5445229f, 0.761665f, 0.351229f },
	{ -0.537434f, 0.656293f, 0.52957f },
	{ 0.102438f, 0.569998f, 0.815235f },
	{ -0.028828f, 0.717138f, 0.696335f },
	{ -0.560252f, 0.822879f, 0.094807f },
	{ -0.554521f, 0.829311f, -0.068922f },
	{ 0.745553f, 0.360426f, 0.5605749f },
	{ 0.375359f, 0.8134609f, 0.444283f },
	{ 0.915106f, 0.375633f, -0.146564f },
	{ 0.437725f, 0.895988f, -0.07484999f },
	{ 0.026445f, 0.863374f, -0.503871f },
	{ 0.099902f, 0.920425f, -0.377939f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B68A4 = { vertex_000B6784, normal_000B6814, LengthOfArray<Sint32>(vertex_000B6784), meshlist_000B673C, matlist_000B664C, LengthOfArray<Uint16>(meshlist_000B673C), LengthOfArray<Uint16>(matlist_000B664C), { -2.303825f, -9.415648f, -1.341248f }, 33.36082f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B68CC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B68A4, -143, 0, 474, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B6900[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B693C[] = {
	6, 4, 5, 0, 1, 3, 2,
	3, 2, 6, 3,
	0x8000u | 5, 3, 7, 6, 9, 8
};

extern "C" __declspec(dllexport) Sint16 poly_000B695E[] = {
	0x8000u | 5, 5, 10, 11, 8, 9,
	3, 5, 4, 11
};

extern "C" __declspec(dllexport) Sint16 poly_000B6972[] = {
	6, 3, 7, 0, 9, 4, 11
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B6980[] = {
	{ 0 },
	{ 0, 255 },
	{ 195, 0 },
	{ 189, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 126, 255 },
	{ 0 },
	{ 0 },
	{ 136, 0 },
	{ 126, 255 },
	{ 255, 0 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B69B8[] = {
	{ 255, 255 },
	{ 186, 255 },
	{ 171, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 171, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B69D8[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 135 },
	{ 255, 59 },
	{ 0, -255 },
	{ 255, -255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B69F0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000B693C, NULL, NULL, NULL, uv_000B6980, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000B695E, NULL, NULL, NULL, uv_000B69B8, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000B6972, NULL, NULL, NULL, uv_000B69D8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B6A38[] = {
	{ -7.749496f, -15.95865f, 11.42844f },
	{ -14.53006f, -24.34683f, 17.78232f },
	{ -3.491638f, -24.94031f, 26.84161f },
	{ -2.888611f, -12.70654f, 17.74197f },
	{ -13.02026f, -16.98944f, -13.78473f },
	{ -20.15517f, -23.16815f, -23.12427f },
	{ 11.42546f, -24.17604f, 14.08115f },
	{ 7.050064f, -11.32318f, 8.800902f },
	{ 15.54752f, -24.97679f, -4.849823f },
	{ 8.385863f, -11.89099f, -3.204651f },
	{ -8.874146f, -24.75781f, -29.52411f },
	{ -5.141068f, -15.88983f, -18.67563f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B6AC8[] = {
	{ -0.5254869f, 0.833975f, 0.168374f },
	{ -0.6046529f, 0.674089f, 0.424263f },
	{ 0.030186f, 0.648383f, 0.760716f },
	{ -0.044234f, 0.844528f, 0.533681f },
	{ -0.466991f, 0.880484f, -0.08165099f },
	{ -0.412548f, 0.8734559f, -0.258609f },
	{ 0.761372f, 0.475161f, 0.441061f },
	{ 0.401644f, 0.899671f, 0.1711f },
	{ 0.8337989f, 0.469352f, -0.290667f },
	{ 0.46222f, 0.85071f, -0.250291f },
	{ 0.105165f, 0.8232819f, -0.557806f },
	{ 0.166165f, 0.866082f, -0.471477f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B6B58 = { vertex_000B6A38, normal_000B6AC8, LengthOfArray<Sint32>(vertex_000B6A38), meshlist_000B69F0, matlist_000B6900, LengthOfArray<Uint16>(meshlist_000B69F0), LengthOfArray<Uint16>(matlist_000B6900), { -2.303825f, -18.14998f, -1.341248f }, 30.96524f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B6B80 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B6B58, -377, 24, 302, 0, 0x2404, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B6BB4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B6C18[] = {
	18, 12, 30, 15, 31, 18, 0, 21, 25, 24, 26, 3, 27, 6, 28, 9, 29, 12, 30
};

extern "C" __declspec(dllexport) Sint16 poly_000B6C3E[] = {
	0x8000u | 6, 5, 4, 2, 1, 23, 22,
	0x8000u | 6, 10, 11, 13, 14, 16, 17
};

extern "C" __declspec(dllexport) Sint16 poly_000B6C5A[] = {
	0x8000u | 6, 23, 22, 20, 19, 17, 16,
	0x8000u | 6, 11, 10, 8, 7, 5, 4
};

extern "C" __declspec(dllexport) Sint16 poly_000B6C76[] = {
	3, 18, 21, 24,
	3, 9, 12, 15,
	0x8000u | 6, 6, 3, 9, 24, 15, 18
};

extern "C" __declspec(dllexport) Sint16 poly_000B6C94[] = {
	0x8000u | 18, 20, 26, 23, 27, 2, 28, 5, 29, 8, 30, 11, 31, 14, 0, 17, 25, 20, 26
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B6CBC[] = {
	{ 2, 79 },
	{ 2, 254 },
	{ 194, 79 },
	{ 194, 254 },
	{ 360, 79 },
	{ 382, 255 },
	{ 528, 79 },
	{ 584, 255 },
	{ 744, 79 },
	{ 754, 255 },
	{ 959, 79 },
	{ 964, 255 },
	{ 1125, 79 },
	{ 1136, 255 },
	{ 1340, 79 },
	{ 1341, 255 },
	{ 1527, 75 },
	{ 1530, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B6D04[] = {
	{ 0 },
	{ 0, 255 },
	{ 362, 0 },
	{ 362, 255 },
	{ 765, 0 },
	{ 765, 254 },
	{ 764, 255 },
	{ 765, 0 },
	{ 440, 255 },
	{ 440, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B6D34[] = {
	{ 0 },
	{ 0, 254 },
	{ 362, 0 },
	{ 362, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 0 },
	{ 0, 255 },
	{ 426, 0 },
	{ 426, 255 },
	{ 765, 0 },
	{ 765, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B6D64[] = {
	{ 203, -956 },
	{ 741, -1219 },
	{ 1203, -856 },
	{ 622, 209 },
	{ 149, 220 },
	{ -2, -454 },
	{ 1335, -11 },
	{ 1530, -344 },
	{ 622, 209 },
	{ 1203, -856 },
	{ -2, -454 },
	{ 203, -956 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B6D94[] = {
	{ 664, 255 },
	{ 561, 0 },
	{ 572, 255 },
	{ 460, 0 },
	{ 472, 255 },
	{ 378, 0 },
	{ 384, 255 },
	{ 280, 0 },
	{ 298, 255 },
	{ 189, 0 },
	{ 190, 255 },
	{ 93, 0 },
	{ 109, 255 },
	{ 764, 0 },
	{ 765, 255 },
	{ 657, 0 },
	{ 664, 255 },
	{ 561, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B6DDC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000B6C18, NULL, NULL, NULL, uv_000B6CBC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000B6C3E, NULL, NULL, NULL, uv_000B6D04, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_000B6C5A, NULL, NULL, NULL, uv_000B6D34, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 3, poly_000B6C76, NULL, NULL, NULL, uv_000B6D64, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_000B6C94, NULL, NULL, NULL, uv_000B6D94, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B6E54[] = {
	{ 34.1078f, 36.76331f, -104.0105f },
	{ -123.5189f, -24.0329f, 58.36995f },
	{ -110.0697f, -0.9560879f, 55.06885f },
	{ -81.44282f, 63.13703f, 48.30158f },
	{ -45.41456f, -27.26456f, 126.9977f },
	{ -45.36582f, -3.822589f, 115.619f },
	{ -45.05627f, 65.41288f, 75.70536f },
	{ 45.71257f, -15.7801f, 111.075f },
	{ 42.8158f, 9.349526f, 99.58212f },
	{ 40.43314f, 71.02998f, 67.76669f },
	{ 137.4552f, -23.91714f, 53.41191f },
	{ 125.5715f, 0.799982f, 50.78463f },
	{ 90.32716f, 65.27487f, 46.52476f },
	{ 132.402f, -30.52882f, -42.89058f },
	{ 120.8936f, -6.8965f, -36.32775f },
	{ 74.02938f, 61.93277f, -33.68329f },
	{ 56.43297f, -32.34077f, -149.5288f },
	{ 44.20647f, -10.3763f, -142.7813f },
	{ 28.51814f, 60.39832f, -78.85304f },
	{ -64.27f, -32.06765f, -156.1866f },
	{ -56.78432f, -10.96123f, -138.8858f },
	{ -41.17189f, 49.02955f, -83.91698f },
	{ -116.4805f, -24.25031f, -59.33649f },
	{ -103.804f, -2.427051f, -51.30812f },
	{ -71.51397f, 62.39785f, -21.90896f },
	{ -51.35772f, 29.06054f, -111.0311f },
	{ -89.01944f, 41.71621f, -36.40253f },
	{ -92.68107f, 48.23692f, 51.69492f },
	{ -44.85041f, 48.87471f, 91.30012f },
	{ 40.80467f, 54.69705f, 73.87803f },
	{ 103.2629f, 48.45412f, 50.28054f },
	{ 90.49483f, 44.74919f, -31.70235f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B6FD4[] = {
	{ 0.311972f, 0.666477f, -0.677113f },
	{ -0.819909f, 0.4631f, 0.336581f },
	{ -0.840461f, 0.409044f, 0.355399f },
	{ -0.489083f, 0.848237f, 0.203204f },
	{ -0.261054f, 0.415881f, 0.871145f },
	{ -0.289303f, 0.412959f, 0.863579f },
	{ -0.20564f, 0.841619f, 0.49939f },
	{ 0.306203f, 0.388837f, 0.868934f },
	{ 0.30457f, 0.401861f, 0.863565f },
	{ 0.145243f, 0.863696f, 0.482632f },
	{ 0.822397f, 0.455393f, 0.341001f },
	{ 0.7978629f, 0.458349f, 0.391574f },
	{ 0.51401f, 0.807983f, 0.288022f },
	{ 0.797593f, 0.511854f, -0.31914f },
	{ 0.812667f, 0.504083f, -0.292358f },
	{ 0.410272f, 0.862238f, -0.297022f },
	{ 0.439282f, 0.614213f, -0.655571f },
	{ 0.315807f, 0.623964f, -0.714797f },
	{ 0.160167f, 0.88806f, -0.430925f },
	{ -0.348413f, 0.655449f, -0.6700709f },
	{ -0.39246f, 0.624665f, -0.6751069f },
	{ -0.261331f, 0.851002f, -0.455523f },
	{ -0.791334f, 0.547754f, -0.27158f },
	{ -0.84221f, 0.47133f, -0.261785f },
	{ -0.403683f, 0.897395f, -0.178106f },
	{ -0.416277f, 0.646523f, -0.639313f },
	{ -0.781741f, 0.560999f, -0.272326f },
	{ -0.8038009f, 0.495402f, 0.329364f },
	{ -0.272061f, 0.485697f, 0.8307109f },
	{ 0.265683f, 0.452187f, 0.851434f },
	{ 0.749702f, 0.528818f, 0.397868f },
	{ 0.753705f, 0.567771f, -0.331007f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B7154 = { vertex_000B6E54, normal_000B6FD4, LengthOfArray<Sint32>(vertex_000B6E54), meshlist_000B6DDC, matlist_000B6BB4, LengthOfArray<Uint16>(meshlist_000B6DDC), LengthOfArray<Uint16>(matlist_000B6BB4), { 6.968182f, 19.3446f, -14.59446f }, 192.5493f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B717C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B7154, -564, 33, 457, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B71B0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B71EC[] = {
	6, 2, 3, 1, 0, 5, 4,
	3, 2, 6, 3,
	0x8000u | 5, 3, 7, 6, 9, 8
};

extern "C" __declspec(dllexport) Sint16 poly_000B720E[] = {
	0x8000u | 5, 5, 10, 11, 8, 9,
	3, 5, 4, 11
};

extern "C" __declspec(dllexport) Sint16 poly_000B7222[] = {
	6, 11, 4, 9, 0, 7, 3
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B7230[] = {
	{ 510, 255 },
	{ 510, 0 },
	{ 378, 255 },
	{ 390, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 253, 255 },
	{ 0 },
	{ 0 },
	{ 272, 0 },
	{ 253, 255 },
	{ 510, 0 },
	{ 510, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B7268[] = {
	{ 510, 255 },
	{ 372, 255 },
	{ 342, 0 },
	{ 0, 255 },
	{ 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 342, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B7288[] = {
	{ 510, -255 },
	{ 510, 255 },
	{ 218, -255 },
	{ 244, 255 },
	{ 0, -255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B72A0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000B71EC, NULL, NULL, NULL, uv_000B7230, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000B720E, NULL, NULL, NULL, uv_000B7268, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000B7222, NULL, NULL, NULL, uv_000B7288, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B72E8[] = {
	{ -13.22018f, -25, 6.799066f },
	{ -27.406f, -45.00001f, 13.33836f },
	{ -5.588051f, -65.00001f, 36.83017f },
	{ -3.359823f, -30.8434f, 12.45542f },
	{ -14.22525f, -16, -4.862402f },
	{ -28.19069f, -30, -10.69046f },
	{ 28.518f, -63.00001f, 16.76129f },
	{ 6.08439f, -23.69386f, 8.541105f },
	{ 27.3325f, -48.00001f, -9.215926f },
	{ 2.450879f, -13, -1.411781f },
	{ -4.811618f, -28, -26.29577f },
	{ -3.455988f, -11, -10.2497f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B7378[] = {
	{ -0.417235f, 0.639781f, 0.6454419f },
	{ -0.453324f, 0.560079f, 0.693404f },
	{ 0.11982f, 0.478981f, 0.869609f },
	{ -0.0008259999f, 0.534365f, 0.845253f },
	{ -0.54664f, 0.835219f, 0.059954f },
	{ -0.688731f, 0.718596f, 0.096278f },
	{ 0.602413f, 0.477787f, 0.639388f },
	{ 0.466855f, 0.595373f, 0.6538939f },
	{ 0.8229679f, 0.567012f, 0.034941f },
	{ 0.349641f, 0.918969f, 0.182338f },
	{ 0.165599f, 0.733867f, -0.658799f },
	{ 0.008594999f, 0.9393179f, -0.342939f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B7408 = { vertex_000B72E8, normal_000B7378, LengthOfArray<Sint32>(vertex_000B72E8), meshlist_000B72A0, matlist_000B71B0, LengthOfArray<Uint16>(meshlist_000B72A0), LengthOfArray<Uint16>(matlist_000B71B0), { 0.163651f, -38.00001f, 5.267196f }, 39.89697f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B7430 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B7408, -475, 68, 257, 0, 0x2A74, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B7464[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B74A0[] = {
	9, 35, 1, 6, 2, 7, 3, 8, 4, 9,
	4, 6, 5, 35, 0,
	0x8000u | 11, 24, 19, 23, 18, 22, 17, 21, 16, 36, 15, 20
};

extern "C" __declspec(dllexport) Sint16 poly_000B74D6[] = {
	10, 10, 28, 11, 27, 12, 26, 13, 25, 14, 33,
	10, 14, 34, 13, 32, 12, 31, 11, 30, 10, 29
};

extern "C" __declspec(dllexport) Sint16 poly_000B7502[] = {
	10, 34, 19, 32, 18, 31, 17, 30, 16, 29, 15,
	10, 9, 33, 8, 25, 7, 26, 6, 27, 5, 28
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B7530[] = {
	{ 8438, -10180 },
	{ 8414, -10573 },
	{ 9159, -10588 },
	{ 8412, -11218 },
	{ 9160, -11229 },
	{ 8412, -11852 },
	{ 9160, -11854 },
	{ 8364, -12331 },
	{ 9180, -12495 },
	{ 9159, -10588 },
	{ 9181, -9788 },
	{ 8438, -10180 },
	{ 8464, -9788 },
	{ 11474, -12492 },
	{ 10825, -12480 },
	{ 11664, -11854 },
	{ 10830, -11855 },
	{ 11664, -11226 },
	{ 10829, -11228 },
	{ 11663, -10583 },
	{ 10829, -10584 },
	{ 11662, -10181 },
	{ 10819, -9788 },
	{ 11661, -9788 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B7590[] = {
	{ 4080, -705 },
	{ 4080, 255 },
	{ 2850, -729 },
	{ 2849, 255 },
	{ 1894, -729 },
	{ 1895, 255 },
	{ 948, -729 },
	{ 949, 255 },
	{ 0, -792 },
	{ 0, 255 },
	{ 0, -792 },
	{ 0, -1785 },
	{ 948, -729 },
	{ 941, -1785 },
	{ 1894, -729 },
	{ 1889, -1785 },
	{ 2850, -729 },
	{ 2849, -1785 },
	{ 4080, -705 },
	{ 4080, -1785 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B75E0[] = {
	{ 254, 239 },
	{ 0, 239 },
	{ 254, -780 },
	{ 0, -780 },
	{ 254, -1800 },
	{ 0, -1800 },
	{ 254, -2820 },
	{ 0, -2820 },
	{ 254, -3809 },
	{ 0, -3809 },
	{ 0, -3809 },
	{ 254, -3809 },
	{ 0, -2820 },
	{ 254, -2820 },
	{ 0, -1800 },
	{ 254, -1800 },
	{ 0, -780 },
	{ 254, -780 },
	{ 0, 239 },
	{ 254, 239 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B7630[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000B74A0, NULL, NULL, NULL, uv_000B7530, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000B74D6, NULL, NULL, NULL, uv_000B7590, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_000B7502, NULL, NULL, NULL, uv_000B75E0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B7678[] = {
	{ -193.4854f, 0, -200 },
	{ -200.0004f, -19.16743f, -86.45031f },
	{ -200.3841f, -30.39031f, 7.686157f },
	{ -200.3233f, -49.52657f, 98.68627f },
	{ -206.4202f, -73.08591f, 166.0866f },
	{ -99.65163f, -0.00001f, -199.9996f },
	{ -102.6503f, -15.38896f, -83.38007f },
	{ -102.5894f, -40.9409f, 7.620056f },
	{ -102.5286f, -51.87139f, 98.62017f },
	{ -99.97752f, -71.12593f, 190.6536f },
	{ 1.197352f, -0.00001f, -199.9996f },
	{ 2.455401f, -14.19474f, -83.45056f },
	{ 2.516271f, -40.46803f, 7.549805f },
	{ 2.57714f, -51.79607f, 98.54999f },
	{ 8.048442f, -71.09563f, 189.5871f },
	{ 114.2698f, -0.00084f, -199.9996f },
	{ 115.5842f, -12.64667f, -83.52312f },
	{ 115.645f, -41.34355f, 7.477112f },
	{ 115.7059f, -53.79495f, 98.47717f },
	{ 115.1325f, -71.09544f, 188.5297f },
	{ 224.4038f, 0, -200 },
	{ 224.6615f, -12.27603f, -83.59821f },
	{ 224.7223f, -39.25609f, 7.401794f },
	{ 224.7833f, -53.41467f, 98.40192f },
	{ 200.0001f, -74.97592f, 189.5499f },
	{ -84.77137f, -51.84606f, 98.58508f },
	{ -84.83223f, -40.70448f, 7.5849f },
	{ -84.8931f, -14.79185f, -83.41521f },
	{ -84.02275f, -0.00001f, -199.9998f },
	{ 96.87871f, -0.00001f, -199.9998f },
	{ 95.9902f, -13.42072f, -83.48675f },
	{ 96.05106f, -40.90578f, 7.513306f },
	{ 96.11192f, -52.80611f, 98.51355f },
	{ -85.1096f, -71.12587f, 190.1192f },
	{ 96.38616f, -71.12587f, 189.0576f },
	{ -196.7429f, -9.583714f, -143.2252f },
	{ 224.5327f, -2.138013f, -141.7991f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B7834[] = {
	{ -0.00001f, 0.98605f, 0.166447f },
	{ 0.031281f, 0.983268f, 0.17946f },
	{ 0.065013f, 0.981744f, 0.178749f },
	{ -0.027853f, 0.976973f, 0.211536f },
	{ -0.07704899f, 0.963341f, 0.256979f },
	{ -0.015912f, 0.990514f, 0.136488f },
	{ 0.009559999f, 0.982664f, 0.185148f },
	{ 0.024711f, 0.98206f, 0.186943f },
	{ -0.014821f, 0.982312f, 0.186666f },
	{ -0.033879f, 0.972846f, 0.228961f },
	{ -0.003722f, 0.992653f, 0.120937f },
	{ -0.003396f, 0.979829f, 0.199807f },
	{ 0.000013f, 0.979567f, 0.201116f },
	{ 0.003099f, 0.986206f, 0.165491f },
	{ 0.00333f, 0.978294f, 0.207195f },
	{ -0.011544f, 0.994467f, 0.104415f },
	{ -0.012466f, 0.977977f, 0.20834f },
	{ 0.001847f, 0.975746f, 0.218899f },
	{ 0.025603f, 0.984901f, 0.171216f },
	{ 0.034629f, 0.9787959f, 0.201889f },
	{ -0.00001f, 0.999326f, 0.03671f },
	{ -0.010725f, 0.977281f, 0.211676f },
	{ -0.010774f, 0.975571f, 0.21942f },
	{ 0.017301f, 0.984082f, 0.176874f },
	{ 0.042026f, 0.97568f, 0.215133f },
	{ -0.001413f, 0.986484f, 0.163848f },
	{ -0.008835f, 0.9801f, 0.198309f },
	{ -0.011922f, 0.979686f, 0.200184f },
	{ -0.010468f, 0.992022f, 0.125629f },
	{ -0.012406f, 0.993343f, 0.114521f },
	{ -0.008496f, 0.9791639f, 0.202893f },
	{ 0.008706f, 0.977644f, 0.210085f },
	{ 0.019402f, 0.986306f, 0.163782f },
	{ 0.001534f, 0.978547f, 0.206019f },
	{ 0.016686f, 0.980061f, 0.197995f },
	{ -0.022268f, 0.9879889f, 0.152914f },
	{ -0.00215f, 0.995235f, 0.09748299f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B79F0 = { vertex_000B7678, normal_000B7834, LengthOfArray<Sint32>(vertex_000B7678), meshlist_000B7630, matlist_000B7464, LengthOfArray<Uint16>(meshlist_000B7630), LengthOfArray<Uint16>(matlist_000B7464), { 9.181548f, -37.48796f, -4.673187f }, 290.9239f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B7A18 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B79F0, 0, 0, 600, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B7A4C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B7A60[] = {
	14, 20, 0, 19, 1, 18, 2, 17, 3, 16, 4, 15, 5, 14, 6,
	14, 14, 12, 15, 11, 16, 10, 17, 9, 18, 8, 19, 7, 20, 13
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B7A9C[] = {
	{ 13196, -4621 },
	{ 12697, -4691 },
	{ 13323, -4954 },
	{ 12820, -5015 },
	{ 13395, -5565 },
	{ 12965, -5595 },
	{ 13370, -6170 },
	{ 12913, -6181 },
	{ 13305, -6823 },
	{ 12783, -6825 },
	{ 13367, -7404 },
	{ 12904, -7391 },
	{ 13350, -8015 },
	{ 12874, -7985 },
	{ 13350, -8015 },
	{ 13828, -8012 },
	{ 13367, -7404 },
	{ 13828, -7384 },
	{ 13305, -6823 },
	{ 13828, -6787 },
	{ 13370, -6170 },
	{ 13827, -6111 },
	{ 13395, -5565 },
	{ 13827, -5499 },
	{ 13323, -4954 },
	{ 13826, -4828 },
	{ 13196, -4621 },
	{ 13693, -4492 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B7B0C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000B7A60, NULL, NULL, NULL, uv_000B7A9C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B7B24[] = {
	{ 360, 0, -359 },
	{ 376, 0, -310.6947f },
	{ 395, 0, -224.4815f },
	{ 388, 0, -137.1465f },
	{ 371, 0, -41.13098f },
	{ 387, 0, 43.01895f },
	{ 383, 0, 131.4766f },
	{ 507.3978f, 72.26289f, -325.8925f },
	{ 507.4579f, 61.82768f, -227.8722f },
	{ 507.5189f, 61.27845f, -136.9024f },
	{ 507.5858f, 57.41163f, -36.8934f },
	{ 507.6444f, 49.67861f, 50.78966f },
	{ 507.7059f, 40.50373f, 142.8655f },
	{ 490.0003f, 75.58809f, -375.4508f },
	{ 445.3529f, 6.251873f, 137.1711f },
	{ 447.3222f, 9.839312f, 46.9043f },
	{ 439.2929f, 13.70582f, -39.01219f },
	{ 447.7594f, 10.63923f, -137.0245f },
	{ 451.2289f, 15.91383f, -226.1768f },
	{ 441.6989f, 9.131447f, -318.2935f },
	{ 425.0002f, 13.79405f, -367.2254f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B7C20[] = {
	{ -0.166044f, 0.984583f, 0.054998f },
	{ -0.180475f, 0.982316f, 0.049839f },
	{ -0.210432f, 0.977515f, 0.013517f },
	{ -0.203352f, 0.9787599f, -0.026008f },
	{ -0.183985f, 0.982929f, -0.000105f },
	{ -0.157712f, 0.9873559f, 0.015939f },
	{ -0.129603f, 0.991549f, -0.005861f },
	{ -0.657086f, 0.732119f, 0.179552f },
	{ -0.651345f, 0.757514f, 0.043842f },
	{ -0.616981f, 0.786768f, 0.018189f },
	{ -0.569917f, 0.820013f, 0.052672f },
	{ -0.532869f, 0.842452f, 0.07952999f },
	{ -0.519972f, 0.849939f, 0.085039f },
	{ -0.646768f, 0.711466f, 0.274785f },
	{ -0.339197f, 0.939773f, 0.042103f },
	{ -0.357627f, 0.932613f, 0.048339f },
	{ -0.377281f, 0.925721f, 0.026438f },
	{ -0.422045f, 0.9065689f, -0.003245f },
	{ -0.457679f, 0.888629f, 0.029466f },
	{ -0.446345f, 0.8863789f, 0.122913f },
	{ -0.405049f, 0.899596f, 0.163286f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B7D1C = { vertex_000B7B24, normal_000B7C20, LengthOfArray<Sint32>(vertex_000B7B24), meshlist_000B7B0C, matlist_000B7A4C, LengthOfArray<Uint16>(meshlist_000B7B0C), LengthOfArray<Uint16>(matlist_000B7A4C), { 433.8529f, 37.79404f, -116.2927f }, 269.4758f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B7D44 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B7D1C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B7D78[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B7DB4[] = {
	12, 20, 19, 17, 16, 14, 13, 10, 9, 6, 5, 2, 1,
	11, 39, 3, 38, 7, 37, 11, 36, 15, 35, 18, 34,
	3, 21, 20, 17,
	8, 13, 12, 9, 8, 5, 4, 1, 0,
	12, 34, 27, 35, 26, 36, 25, 37, 24, 38, 23, 39, 22
};

extern "C" __declspec(dllexport) Sint16 poly_000B7E1A[] = {
	12, 33, 21, 32, 17, 31, 14, 30, 10, 29, 6, 28, 2
};

extern "C" __declspec(dllexport) Sint16 poly_000B7E34[] = {
	12, 27, 33, 26, 32, 25, 31, 24, 30, 23, 29, 22, 28
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B7E50[] = {
	{ 13769, -3541 },
	{ 13769, -2900 },
	{ 13030, -3712 },
	{ 13004, -2902 },
	{ 12323, -3771 },
	{ 12240, -2931 },
	{ 11513, -3541 },
	{ 11474, -2948 },
	{ 10769, -3382 },
	{ 10709, -2941 },
	{ 9937, -3547 },
	{ 9945, -2915 },
	{ 9946, -4157 },
	{ 9957, -4484 },
	{ 10754, -4110 },
	{ 10738, -4417 },
	{ 11516, -4187 },
	{ 11520, -4417 },
	{ 12311, -4304 },
	{ 12301, -4585 },
	{ 12865, -4425 },
	{ 12697, -4691 },
	{ 13196, -4621 },
	{ 13693, -4106 },
	{ 13769, -3541 },
	{ 13030, -3712 },
	{ 12240, -2931 },
	{ 12240, -2272 },
	{ 11474, -2948 },
	{ 11474, -2258 },
	{ 10709, -2941 },
	{ 10709, -2229 },
	{ 9945, -2915 },
	{ 9945, -2216 },
	{ 13196, -4621 },
	{ 13693, -4492 },
	{ 12865, -4425 },
	{ 13030, -4110 },
	{ 12311, -4304 },
	{ 12323, -4025 },
	{ 11516, -4187 },
	{ 11513, -3959 },
	{ 10754, -4110 },
	{ 10769, -3809 },
	{ 9946, -4157 },
	{ 9937, -3816 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B7F08[] = {
	{ 1787, 254 },
	{ 1787, 0 },
	{ 1532, 254 },
	{ 1532, 0 },
	{ 1277, 254 },
	{ 1277, 0 },
	{ 1022, 254 },
	{ 1022, 0 },
	{ 785, 255 },
	{ 768, 0 },
	{ 513, 254 },
	{ 513, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B7F38[] = {
	{ 2155, 222 },
	{ 2155, 7 },
	{ 1837, 246 },
	{ 1837, 23 },
	{ 1598, 222 },
	{ 1598, 0 },
	{ 1279, 238 },
	{ 1279, 0 },
	{ 1040, 246 },
	{ 1040, 23 },
	{ 721, 222 },
	{ 721, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B7F68[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_000B7DB4, NULL, NULL, NULL, uv_000B7E50, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000B7E1A, NULL, NULL, NULL, uv_000B7F08, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000B7E34, NULL, NULL, NULL, uv_000B7F38, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B7FB0[] = {
	{ -0.000146f, 256.625f, -682.4513f },
	{ -0.000146f, 188.7214f, -590.4512f },
	{ -1.012115f, 109.0132f, -510.2865f },
	{ 1.7888f, 0, -390 },
	{ 99.99992f, 246.4104f, -682.4513f },
	{ 99.99992f, 166.7331f, -590.4512f },
	{ 107.7673f, 117.3731f, -533.3592f },
	{ 103.8147f, 0, -400 },
	{ 200.0001f, 222.0422f, -682.4513f },
	{ 200.0001f, 160.4221f, -590.4512f },
	{ 204.9884f, 123.7976f, -508.4309f },
	{ 205.9055f, 0, -400 },
	{ 300.0002f, 209.5918f, -682.4513f },
	{ 300.0002f, 175.244f, -590.4512f },
	{ 311.0002f, 151.1898f, -469.5019f },
	{ 307.9962f, 0, -375 },
	{ 400.0003f, 198.5806f, -590.4512f },
	{ 403.4065f, 166.8896f, -475.5591f },
	{ 360, 0, -359 },
	{ 500.0003f, 201.4226f, -590.4512f },
	{ 500.0003f, 180.4002f, -498.4512f },
	{ 490.0003f, 163.3034f, -417.4509f },
	{ -1.012115f, 17.41626f, -486.2866f },
	{ 107.7673f, -4.955359f, -491.3593f },
	{ 204.9884f, 9.294308f, -466.431f },
	{ 311.0002f, 44.51153f, -450.502f },
	{ 403.4065f, 69.17432f, -433.5591f },
	{ 490.0003f, 75.58809f, -375.4508f },
	{ -1.012115f, 70.45717f, -486.2866f },
	{ 107.7673f, 66.67017f, -491.3593f },
	{ 204.9884f, 77.00728f, -466.431f },
	{ 311.0002f, 108.312f, -450.502f },
	{ 403.4065f, 134.931f, -433.5591f },
	{ 490.0003f, 136.3448f, -375.4509f },
	{ 425.0002f, 13.79405f, -367.2254f },
	{ 381.7032f, 14.58716f, -396.2796f },
	{ 309.4982f, 22.25576f, -412.751f },
	{ 205.4469f, 4.647156f, -433.2155f },
	{ 105.791f, 0.522321f, -445.6796f },
	{ 0.388342f, 2.708133f, -438.1433f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B8190[] = {
	{ 0.169058f, 0.768852f, 0.616673f },
	{ 0.132384f, 0.751256f, 0.646598f },
	{ 0.108757f, 0.653127f, 0.749398f },
	{ 0.003375f, 0.999401f, 0.034431f },
	{ 0.114068f, 0.7810839f, 0.613919f },
	{ 0.033926f, 0.784425f, 0.6192949f },
	{ -0.058815f, 0.720767f, 0.690677f },
	{ 0.001784f, 0.998796f, 0.049033f },
	{ -0.034773f, 0.839444f, 0.542332f },
	{ -0.157134f, 0.8626879f, 0.480706f },
	{ -0.307064f, 0.746066f, 0.590844f },
	{ -0.047039f, 0.97378f, 0.222574f },
	{ -0.130298f, 0.87909f, 0.458502f },
	{ -0.208992f, 0.918943f, 0.334464f },
	{ -0.238851f, 0.787861f, 0.5676489f },
	{ -0.10801f, 0.917596f, 0.382559f },
	{ -0.112033f, 0.9638169f, 0.241879f },
	{ -0.142092f, 0.894718f, 0.423426f },
	{ -0.139009f, 0.921424f, 0.362843f },
	{ -0.076479f, 0.965901f, 0.247357f },
	{ -0.082017f, 0.970504f, 0.226704f },
	{ -0.254262f, 0.865141f, 0.432298f },
	{ 0.160755f, 0.604793f, 0.7799889f },
	{ -0.046059f, 0.691351f, 0.721049f },
	{ -0.287672f, 0.647564f, 0.705624f },
	{ -0.276773f, 0.447034f, 0.850622f },
	{ -0.406321f, 0.317354f, 0.856849f },
	{ -0.553802f, 0.231984f, 0.799679f },
	{ 0.090297f, 0.314655f, 0.944901f },
	{ -0.087052f, 0.326496f, 0.9411809f },
	{ -0.266861f, 0.285362f, 0.920518f },
	{ -0.223786f, 0.300961f, 0.927007f },
	{ -0.320271f, 0.438431f, 0.839764f },
	{ -0.51175f, 0.350771f, 0.784265f },
	{ -0.408656f, 0.716975f, 0.5647539f },
	{ -0.286378f, 0.80843f, 0.514227f },
	{ -0.222917f, 0.866833f, 0.445992f },
	{ -0.15019f, 0.970529f, 0.188459f },
	{ 0.018576f, 0.998747f, 0.04646f },
	{ 0.102269f, 0.992606f, 0.06537399f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B8370 = { vertex_000B7FB0, normal_000B8190, LengthOfArray<Sint32>(vertex_000B7FB0), meshlist_000B7F68, matlist_000B7D78, LengthOfArray<Uint16>(meshlist_000B7F68), LengthOfArray<Uint16>(matlist_000B7D78), { 249.4941f, 125.8348f, -520.7256f }, 298.1754f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B8398 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B8370, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B83CC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B83E0[] = {
	0x8000u | 9, 3, 7, 4, 8, 5, 9, 6, 10, 11,
	3, 13, 12, 26,
	10, 23, 22, 18, 30, 29, 17, 28, 13, 27, 26,
	0x8000u | 8, 20, 16, 19, 15, 18, 14, 29, 28,
	0x8000u | 6, 0, 4, 1, 5, 2, 6,
	6, 25, 24, 20, 23, 19, 18,
	11, 26, 7, 27, 8, 28, 9, 14, 10, 15, 11, 16,
	3, 30, 21, 17
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B8460[] = {
	{ 5354, -9262 },
	{ 6119, -9269 },
	{ 5354, -9892 },
	{ 6119, -9892 },
	{ 5354, -10521 },
	{ 6119, -10516 },
	{ 5354, -11163 },
	{ 6119, -11148 },
	{ 6119, -11791 },
	{ 6885, -9788 },
	{ 6885, -9225 },
	{ 6502, -9263 },
	{ 8412, -11218 },
	{ 8414, -10573 },
	{ 7575, -10571 },
	{ 8438, -10180 },
	{ 7618, -10179 },
	{ 7661, -9788 },
	{ 6831, -10175 },
	{ 6885, -9788 },
	{ 6502, -9851 },
	{ 6502, -9263 },
	{ 7629, -11781 },
	{ 6884, -11837 },
	{ 7575, -11219 },
	{ 6813, -11270 },
	{ 7575, -10571 },
	{ 6779, -10562 },
	{ 7618, -10179 },
	{ 6831, -10175 },
	{ 4589, -9896 },
	{ 5354, -9892 },
	{ 4590, -10525 },
	{ 5354, -10521 },
	{ 4590, -11167 },
	{ 5354, -11163 },
	{ 8364, -12331 },
	{ 8412, -11852 },
	{ 7629, -11781 },
	{ 8412, -11218 },
	{ 7575, -11219 },
	{ 7575, -10571 },
	{ 6502, -9263 },
	{ 6119, -9269 },
	{ 6502, -9851 },
	{ 6119, -9892 },
	{ 6831, -10175 },
	{ 6119, -10516 },
	{ 6779, -10562 },
	{ 6119, -11148 },
	{ 6813, -11270 },
	{ 6119, -11791 },
	{ 6884, -11837 },
	{ 8438, -10180 },
	{ 8464, -9788 },
	{ 7661, -9788 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B8540[] = {
	{ NJD_MESHSET_TRIMESH | 0, 8, poly_000B83E0, NULL, NULL, NULL, uv_000B8460, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B8558[] = {
	{ -700.001f, 29.99816f, 421.5496f },
	{ -700.0009f, 20.50993f, 513.5497f },
	{ -700.0009f, -0.750095f, 605.5497f },
	{ -600.0009f, 43.7461f, 329.5495f },
	{ -600.0009f, 33.38711f, 421.5496f },
	{ -600.0009f, 23.6816f, 513.5497f },
	{ -600.0009f, 2.69869f, 605.5497f },
	{ -500.0008f, 37.61725f, 329.5495f },
	{ -500.0008f, 33.56396f, 421.5496f },
	{ -500.0008f, 28.26498f, 513.5497f },
	{ -500.0008f, 16.55899f, 605.5497f },
	{ -500.0008f, -4.74757f, 697.5497f },
	{ -400, 0, 316.2462f },
	{ -400, 0, 400 },
	{ -413.7848f, 8.654444f, 516.8285f },
	{ -409.4114f, -23.08964f, 616.7811f },
	{ -400.0007f, -44.03449f, 697.5497f },
	{ -298.3967f, 0, 400 },
	{ -309.7845f, 0.332346f, 516.7589f },
	{ -309.7236f, -31.07263f, 607.7594f },
	{ -302.5797f, -57.24869f, 686.7604f },
	{ -193.4854f, 0, 400 },
	{ -200.0004f, -19.16743f, 513.5497f },
	{ -200.3841f, -30.39031f, 607.6861f },
	{ -200.3233f, -49.52657f, 698.6862f },
	{ -206.4202f, -73.08591f, 766.0866f },
	{ -450.0004f, 4.808626f, 322.8979f },
	{ -450.0004f, 7.781984f, 410.7748f },
	{ -406.8924f, 4.327222f, 458.4142f },
	{ -304.0906f, 0.166173f, 458.3795f },
	{ -196.7429f, -9.583714f, 456.7748f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B86CC[] = {
	{ -0.03153f, 0.994109f, 0.103699f },
	{ -0.032626f, 0.985893f, 0.164168f },
	{ -0.033594f, 0.974094f, 0.223634f },
	{ -0.001763f, 0.996945f, 0.07808799f },
	{ -0.026313f, 0.995802f, 0.08766799f },
	{ -0.061799f, 0.987379f, 0.145818f },
	{ -0.093797f, 0.9744689f, 0.203991f },
	{ 0.270514f, 0.96087f, 0.059593f },
	{ 0.187712f, 0.980564f, 0.057091f },
	{ 0.123126f, 0.984989f, 0.120981f },
	{ 0.118674f, 0.971422f, 0.205561f },
	{ 0.198444f, 0.955982f, 0.216145f },
	{ 0.124919f, 0.992167f, 0 },
	{ 0.084667f, 0.995996f, -0.028693f },
	{ 0.224386f, 0.965877f, 0.129355f },
	{ 0.251523f, 0.9362569f, 0.245274f },
	{ 0.251696f, 0.938209f, 0.237515f },
	{ 0.033478f, 0.999373f, 0.011499f },
	{ 0.108967f, 0.98235f, 0.152036f },
	{ 0.041567f, 0.95544f, 0.292246f },
	{ 0.000029f, 0.961918f, 0.27334f },
	{ 0, 0.98605f, 0.166447f },
	{ 0.176893f, 0.97858f, 0.105308f },
	{ -0.003501f, 0.971195f, 0.23826f },
	{ -0.105732f, 0.950906f, 0.290858f },
	{ -0.108332f, 0.941449f, 0.319278f },
	{ 0.307795f, 0.951288f, 0.017713f },
	{ 0.296684f, 0.954922f, 0.01013f },
	{ 0.14802f, 0.988867f, -0.015204f },
	{ 0.08736499f, 0.996132f, 0.009383f },
	{ 0.100526f, 0.989334f, 0.105418f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B8840 = { vertex_000B8558, normal_000B86CC, LengthOfArray<Sint32>(vertex_000B8558), meshlist_000B8540, matlist_000B83CC, LengthOfArray<Uint16>(meshlist_000B8540), LengthOfArray<Uint16>(matlist_000B83CC), { -446.7432f, -14.6699f, 541.1664f }, 338.7161f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B8868 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B8840, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B889C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B88B0[] = {
	0x8000u | 8, 7, 3, 6, 2, 5, 1, 4, 0,
	12, 6, 7, 11, 12, 16, 17, 21, 22, 25, 26, 28, 29,
	6, 19, 18, 14, 13, 9, 8,
	10, 24, 23, 20, 19, 15, 14, 10, 9, 5, 4,
	12, 28, 27, 25, 24, 21, 20, 16, 15, 11, 10, 6, 5
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B891C[] = {
	{ 6884, -2412 },
	{ 6119, -2401 },
	{ 6884, -1752 },
	{ 6119, -1745 },
	{ 6884, -1084 },
	{ 6119, -1083 },
	{ 6884, -408 },
	{ 6119, -414 },
	{ 6884, -1752 },
	{ 6884, -2412 },
	{ 7649, -1728 },
	{ 7649, -2381 },
	{ 8414, -1675 },
	{ 8414, -2310 },
	{ 9180, -1622 },
	{ 9180, -2244 },
	{ 9945, -1590 },
	{ 9945, -2216 },
	{ 10709, -1586 },
	{ 10709, -2229 },
	{ 9180, -370 },
	{ 9180, 222 },
	{ 8414, -384 },
	{ 8415, 233 },
	{ 7649, -396 },
	{ 7649, 255 },
	{ 9945, -977 },
	{ 9945, -354 },
	{ 9180, -1001 },
	{ 9180, -370 },
	{ 8414, -1035 },
	{ 8414, -384 },
	{ 7649, -1067 },
	{ 7649, -396 },
	{ 6884, -1084 },
	{ 6884, -408 },
	{ 10709, -1586 },
	{ 10709, -973 },
	{ 9945, -1590 },
	{ 9945, -977 },
	{ 9180, -1622 },
	{ 9180, -1001 },
	{ 8414, -1675 },
	{ 8414, -1035 },
	{ 7649, -1728 },
	{ 7649, -1067 },
	{ 6884, -1752 },
	{ 6884, -1084 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B89DC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_000B88B0, NULL, NULL, NULL, uv_000B891C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B89F4[] = {
	{ -500.0008f, 214.5995f, -958.4517f },
	{ -500.0008f, 170.459f, -866.4515f },
	{ -500.0008f, 132.8903f, -774.4514f },
	{ -500.0008f, 100.9873f, -682.4513f },
	{ -400.0008f, 218.3832f, -958.4517f },
	{ -400.0008f, 169.4439f, -866.4515f },
	{ -400.0008f, 127.1398f, -774.4515f },
	{ -400.0008f, 90.9226f, -682.4513f },
	{ -300.0005f, 258.0381f, -1050.452f },
	{ -300.0005f, 228.7463f, -958.4517f },
	{ -300.0005f, 184.3207f, -866.4515f },
	{ -300.0005f, 147.4715f, -774.4515f },
	{ -300.0005f, 116.9783f, -682.4513f },
	{ -200.0003f, 240.1965f, -1050.452f },
	{ -200.0004f, 239.2062f, -958.4517f },
	{ -200.0004f, 210.9219f, -866.4515f },
	{ -200.0004f, 191.4856f, -774.4514f },
	{ -200.0004f, 176.7425f, -682.4513f },
	{ -100.0002f, 230.6026f, -1050.452f },
	{ -100.0002f, 251.5255f, -958.4517f },
	{ -100.0002f, 239.4503f, -866.4515f },
	{ -100.0002f, 237.3272f, -774.4514f },
	{ -100.0002f, 233.7955f, -682.4513f },
	{ -0.000146f, 263.763f, -958.4517f },
	{ -0.000146f, 259.6804f, -866.4515f },
	{ -0.000146f, 264.5301f, -774.4514f },
	{ -0.000146f, 256.625f, -682.4513f },
	{ 99.99992f, 263.1671f, -866.4515f },
	{ 99.99992f, 266.6522f, -774.4515f },
	{ 99.99992f, 246.4104f, -682.4513f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B8B5C[] = {
	{ 0.009058f, 0.892287f, 0.451378f },
	{ 0.030831f, 0.904732f, 0.424864f },
	{ 0.07309999f, 0.9252689f, 0.372201f },
	{ 0.093968f, 0.933646f, 0.345652f },
	{ -0.062851f, 0.890277f, 0.451062f },
	{ -0.064086f, 0.903823f, 0.423081f },
	{ -0.069849f, 0.926854f, 0.368867f },
	{ -0.06987599f, 0.936632f, 0.343276f },
	{ -0.102665f, 0.981512f, 0.161534f },
	{ -0.161106f, 0.9316559f, 0.325671f },
	{ -0.239127f, 0.898636f, 0.367794f },
	{ -0.33283f, 0.893379f, 0.301824f },
	{ -0.363628f, 0.8894629f, 0.276822f },
	{ -0.113137f, 0.993193f, 0.027693f },
	{ -0.186627f, 0.969884f, 0.156507f },
	{ -0.330154f, 0.9137419f, 0.236798f },
	{ -0.45106f, 0.876409f, 0.168674f },
	{ -0.498992f, 0.8536029f, 0.149563f },
	{ -0.121568f, 0.98681f, -0.1069f },
	{ -0.198077f, 0.978162f, 0.06296f },
	{ -0.287729f, 0.9527709f, 0.097161f },
	{ -0.350643f, 0.93458f, 0.060078f },
	{ -0.363049f, 0.928817f, 0.07413f },
	{ -0.197553f, 0.9765339f, 0.085754f },
	{ -0.161864f, 0.986773f, 0.008912999f },
	{ -0.101904f, 0.994051f, 0.038439f },
	{ -0.062257f, 0.992326f, 0.10683f },
	{ -0.021194f, 0.998751f, -0.045241f },
	{ 0.039826f, 0.997809f, 0.05284f },
	{ 0.10046f, 0.983501f, 0.150448f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B8CC4 = { vertex_000B89F4, normal_000B8B5C, LengthOfArray<Sint32>(vertex_000B89F4), meshlist_000B89DC, matlist_000B889C, LengthOfArray<Uint16>(meshlist_000B89DC), LengthOfArray<Uint16>(matlist_000B889C), { -200.0004f, 178.7874f, -866.4515f }, 351.9323f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B8CEC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B8CC4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B8D20[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B8D34[] = {
	3, 6, 7, 10,
	7, 5, 6, 9, 10, 12, 13, 15,
	0x8000u | 9, 17, 15, 14, 12, 11, 9, 8, 5, 4,
	0x8000u | 8, 7, 3, 6, 2, 5, 1, 4, 0,
	3, 16, 17, 19,
	0x8000u | 5, 19, 20, 17, 18, 15
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B8D88[] = {
	{ 15299, -9252 },
	{ 15299, -9879 },
	{ 16065, -9265 },
	{ 15299, -8621 },
	{ 15299, -9252 },
	{ 16065, -8617 },
	{ 16065, -9265 },
	{ 16830, -8621 },
	{ 16830, -9274 },
	{ 17595, -8650 },
	{ 18360, -8010 },
	{ 17595, -8650 },
	{ 17595, -7972 },
	{ 16830, -8621 },
	{ 16830, -7955 },
	{ 16065, -8617 },
	{ 16065, -7965 },
	{ 15299, -8621 },
	{ 15299, -7989 },
	{ 15299, -9879 },
	{ 14534, -9889 },
	{ 15299, -9252 },
	{ 14515, -9302 },
	{ 15299, -8621 },
	{ 14534, -8637 },
	{ 15299, -7989 },
	{ 14534, -8013 },
	{ 18360, -7358 },
	{ 18360, -8010 },
	{ 19125, -7414 },
	{ 19125, -7414 },
	{ 19125, -8062 },
	{ 18360, -8010 },
	{ 18360, -8670 },
	{ 17595, -8650 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B8E14[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_000B8D34, NULL, NULL, NULL, uv_000B8D88, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B8E2C[] = {
	{ 600.0004f, 55.16686f, 145.5496f },
	{ 600.0004f, 49.6843f, 237.5495f },
	{ 597.4462f, 45.00068f, 335.5749f },
	{ 600.0004f, 35.83952f, 421.5496f },
	{ 700.0004f, 76.40315f, 145.5496f },
	{ 700.0004f, 63.36235f, 237.5495f },
	{ 700.0004f, 52.17044f, 329.5495f },
	{ 700.0005f, 44.72787f, 421.5496f },
	{ 800.001f, 96.31364f, 145.5496f },
	{ 800.0011f, 67.0751f, 237.5495f },
	{ 800.0011f, 41.10547f, 329.5495f },
	{ 900.0012f, 105.0545f, 145.5496f },
	{ 900.0012f, 63.76889f, 237.5495f },
	{ 900.0012f, 33.87398f, 329.5495f },
	{ 1000.001f, 89.5215f, 145.5496f },
	{ 1000.001f, 39.69129f, 237.5495f },
	{ 1100.001f, 87.3511f, 53.54944f },
	{ 1100.001f, 57.70521f, 145.5496f },
	{ 1100.001f, 22.64029f, 237.5495f },
	{ 1200.001f, 40.07403f, 53.54944f },
	{ 1200.001f, 14.73638f, 145.5496f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B8F28[] = {
	{ -0.13485f, 0.985883f, 0.09925f },
	{ -0.099393f, 0.990907f, 0.090684f },
	{ -0.07689799f, 0.993127f, 0.08823799f },
	{ -0.088144f, 0.9916829f, 0.09378199f },
	{ -0.084886f, 0.98294f, 0.163164f },
	{ -0.032281f, 0.987946f, 0.151395f },
	{ 0.016511f, 0.9933479f, 0.113963f },
	{ -0.019888f, 0.995791f, 0.08946899f },
	{ -0.001735f, 0.955961f, 0.293488f },
	{ 0.042737f, 0.9624349f, 0.268128f },
	{ 0.092562f, 0.9726149f, 0.213197f },
	{ 0.120709f, 0.909636f, 0.397481f },
	{ 0.134534f, 0.927278f, 0.349367f },
	{ 0.124212f, 0.947477f, 0.294718f },
	{ 0.184112f, 0.8863569f, 0.424822f },
	{ 0.189238f, 0.897052f, 0.399358f },
	{ 0.380699f, 0.885988f, 0.264754f },
	{ 0.300997f, 0.891271f, 0.339172f },
	{ 0.237319f, 0.891844f, 0.38509f },
	{ 0.380699f, 0.885988f, 0.264754f },
	{ 0.378048f, 0.87982f, 0.288092f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B9024 = { vertex_000B8E2C, normal_000B8F28, LengthOfArray<Sint32>(vertex_000B8E2C), meshlist_000B8E14, matlist_000B8D20, LengthOfArray<Uint16>(meshlist_000B8E14), LengthOfArray<Uint16>(matlist_000B8D20), { 898.7238f, 59.89545f, 237.5495f }, 353.0215f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B904C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B9024, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B9080[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B9094[] = {
	7, 8, 14, 7, 13, 6, 26, 25,
	10, 0, 24, 5, 25, 12, 26, 27, 13, 19, 14,
	9, 15, 30, 16, 29, 17, 28, 18, 27, 19,
	9, 4, 8, 3, 7, 2, 6, 1, 25, 24,
	0x8000u | 9, 15, 20, 16, 21, 17, 22, 18, 23, 19,
	8, 30, 9, 29, 10, 28, 11, 27, 12
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B9108[] = {
	{ 12409, -11624 },
	{ 13094, -11149 },
	{ 12475, -11224 },
	{ 13128, -10582 },
	{ 12474, -10579 },
	{ 13066, -10178 },
	{ 12418, -10180 },
	{ 11661, -9788 },
	{ 11662, -10181 },
	{ 12363, -9788 },
	{ 12418, -10180 },
	{ 13004, -9788 },
	{ 13066, -10178 },
	{ 13375, -9898 },
	{ 13128, -10582 },
	{ 13673, -10615 },
	{ 13094, -11149 },
	{ 13828, -8012 },
	{ 13350, -8015 },
	{ 13829, -8702 },
	{ 13416, -8671 },
	{ 13829, -9335 },
	{ 13416, -9272 },
	{ 13746, -10009 },
	{ 13375, -9898 },
	{ 13673, -10615 },
	{ 11474, -12492 },
	{ 12409, -11624 },
	{ 11664, -11854 },
	{ 12475, -11224 },
	{ 11664, -11226 },
	{ 12474, -10579 },
	{ 11663, -10583 },
	{ 12418, -10180 },
	{ 11662, -10181 },
	{ 13828, -8012 },
	{ 14534, -8013 },
	{ 13829, -8702 },
	{ 14534, -8637 },
	{ 13829, -9335 },
	{ 14515, -9302 },
	{ 13746, -10009 },
	{ 14534, -9889 },
	{ 13673, -10615 },
	{ 13350, -8015 },
	{ 12874, -7985 },
	{ 13416, -8671 },
	{ 13004, -8631 },
	{ 13416, -9272 },
	{ 13004, -9218 },
	{ 13375, -9898 },
	{ 13004, -9788 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B91D8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_000B9094, NULL, NULL, NULL, uv_000B9108, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B91F0[] = {
	{ 224.4038f, 0, 400 },
	{ 224.6615f, -12.27603f, 516.4017f },
	{ 224.7223f, -39.25609f, 607.4017f },
	{ 224.7833f, -53.41467f, 698.4019f },
	{ 200.0001f, -74.97592f, 789.5499f },
	{ 316.1218f, 0, 400 },
	{ 330.673f, -8.822701f, 516.3308f },
	{ 330.7341f, -38.22321f, 607.3308f },
	{ 322.0959f, -60.91554f, 662.9922f },
	{ 383, 0, 131.4766f },
	{ 400, 0, 227.8089f },
	{ 400, 0, 315.078f },
	{ 400, 0, 400 },
	{ 416.0794f, -12.00941f, 516.2737f },
	{ 411.7874f, -45.17593f, 594.8542f },
	{ 507.7059f, 40.50373f, 142.8655f },
	{ 507.7733f, 27.53534f, 243.2114f },
	{ 507.8344f, 8.031528f, 334.2115f },
	{ 496.9457f, 10.584f, 435.0607f },
	{ 487.515f, -30.85904f, 517.8473f },
	{ 600.0004f, 55.16686f, 145.5496f },
	{ 600.0004f, 49.6843f, 237.5495f },
	{ 597.4462f, 45.00068f, 335.5749f },
	{ 600.0004f, 35.83952f, 421.5496f },
	{ 224.5327f, -2.138013f, 458.2009f },
	{ 323.3974f, -1.41135f, 458.1654f },
	{ 408.0397f, -0.004704f, 458.1368f },
	{ 448.4728f, 5.292001f, 417.5304f },
	{ 453.9171f, 7.015765f, 324.6447f },
	{ 453.8867f, 9.767669f, 235.5101f },
	{ 445.3529f, 6.251873f, 137.1711f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B9364[] = {
	{ 0, 0.999535f, 0.030487f },
	{ -0.020605f, 0.9742759f, 0.224415f },
	{ 0.078036f, 0.958636f, 0.273728f },
	{ 0.168894f, 0.949917f, 0.26293f },
	{ 0.17152f, 0.947257f, 0.270712f },
	{ 0, 0.999757f, 0.022057f },
	{ 0.033552f, 0.970352f, 0.239355f },
	{ 0.106414f, 0.93929f, 0.326205f },
	{ 0.159513f, 0.944505f, 0.287169f },
	{ -0.139262f, 0.989951f, 0.024576f },
	{ -0.14557f, 0.989249f, 0.013963f },
	{ -0.138521f, 0.9903589f, 0 },
	{ -0.075021f, 0.997149f, 0.008092999f },
	{ 0.122515f, 0.937951f, 0.324403f },
	{ 0.157285f, 0.917464f, 0.365406f },
	{ -0.324478f, 0.939983f, 0.105573f },
	{ -0.307395f, 0.942108f, 0.133942f },
	{ -0.216724f, 0.9735129f, 0.072817f },
	{ -0.08764099f, 0.967547f, 0.237008f },
	{ 0.076124f, 0.915698f, 0.394591f },
	{ -0.227098f, 0.969414f, 0.093072f },
	{ -0.300586f, 0.948223f, 0.102571f },
	{ -0.309569f, 0.948383f, 0.068822f },
	{ -0.220176f, 0.967001f, 0.128185f },
	{ -0.016062f, 0.99573f, 0.090903f },
	{ -0.000127f, 0.996112f, 0.08809599f },
	{ 0.025863f, 0.982554f, 0.184172f },
	{ -0.032152f, 0.992672f, 0.116485f },
	{ -0.134957f, 0.9895779f, 0.050223f },
	{ -0.239093f, 0.967111f, 0.086783f },
	{ -0.26558f, 0.961808f, 0.066276f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B94D8 = { vertex_000B91F0, normal_000B9364, LengthOfArray<Sint32>(vertex_000B91F0), meshlist_000B91D8, matlist_000B9080, LengthOfArray<Uint16>(meshlist_000B91D8), LengthOfArray<Uint16>(matlist_000B9080), { 400.0003f, -9.904531f, 460.5132f }, 385.0522f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B9500 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B94D8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B9534[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B9548[] = {
	0x8000u | 8, 3, 12, 4, 13, 5, 14, 6, 15,
	0x8000u | 6, 0, 7, 1, 8, 2, 9,
	18, 33, 24, 32, 23, 31, 22, 30, 21, 29, 20, 28, 19, 27, 18, 26, 17, 25, 16,
	18, 15, 33, 14, 32, 13, 31, 12, 30, 11, 29, 10, 28, 9, 27, 8, 26, 7, 25
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B95B4[] = {
	{ 5354, -7390 },
	{ 6119, -7426 },
	{ 5354, -7998 },
	{ 6119, -8032 },
	{ 5354, -8624 },
	{ 6119, -8648 },
	{ 5354, -9262 },
	{ 6119, -9269 },
	{ 5354, -4306 },
	{ 6119, -4357 },
	{ 5354, -4940 },
	{ 6119, -4993 },
	{ 5354, -5568 },
	{ 6119, -5613 },
	{ 6502, -9263 },
	{ 6885, -9225 },
	{ 6529, -8660 },
	{ 6938, -8639 },
	{ 6543, -8043 },
	{ 6969, -8022 },
	{ 6502, -7438 },
	{ 6885, -7428 },
	{ 6502, -6835 },
	{ 6885, -6833 },
	{ 6502, -6206 },
	{ 6885, -6188 },
	{ 6502, -5590 },
	{ 6885, -5573 },
	{ 6502, -4974 },
	{ 6885, -4962 },
	{ 6502, -4393 },
	{ 6885, -4417 },
	{ 6119, -9269 },
	{ 6502, -9263 },
	{ 6119, -8648 },
	{ 6529, -8660 },
	{ 6119, -8032 },
	{ 6543, -8043 },
	{ 6119, -7426 },
	{ 6502, -7438 },
	{ 6119, -6825 },
	{ 6502, -6835 },
	{ 6119, -6223 },
	{ 6502, -6206 },
	{ 6119, -5613 },
	{ 6502, -5590 },
	{ 6119, -4993 },
	{ 6502, -4974 },
	{ 6119, -4357 },
	{ 6502, -4393 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B967C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000B9548, NULL, NULL, NULL, uv_000B95B4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B9694[] = {
	{ -600.0009f, 56.47008f, -406.4509f },
	{ -600.0009f, 42.00639f, -314.4508f },
	{ -600.0009f, 34.21662f, -222.4508f },
	{ -600.0009f, 60.25781f, 53.54944f },
	{ -600.0009f, 68.40964f, 145.5496f },
	{ -600.0009f, 60.96831f, 237.5495f },
	{ -600.0009f, 43.7461f, 329.5495f },
	{ -500.0008f, 14.30859f, -406.4509f },
	{ -500.0008f, -1.626226f, -314.4508f },
	{ -500.0008f, -4.362914f, -222.4508f },
	{ -500.0008f, 2.076494f, -130.4507f },
	{ -500.0008f, 15.52752f, -38.45062f },
	{ -500.0008f, 29.81511f, 53.54944f },
	{ -500.0008f, 38.8775f, 145.5496f },
	{ -500.0008f, 40.99142f, 237.5495f },
	{ -500.0008f, 37.61725f, 329.5495f },
	{ -400, 0, -400 },
	{ -400, 0, -318.7431f },
	{ -400, 0, -227.8387f },
	{ -400, 0, -136.0231f },
	{ -400, 0, -40.01455f },
	{ -400, 0, 48.64617f },
	{ -389, 0, 137.0389f },
	{ -393, 0, 228.8861f },
	{ -400, 0, 316.2462f },
	{ -450.0004f, 2.154293f, -403.2255f },
	{ -450.0004f, 1.186887f, -316.597f },
	{ -450.0004f, -0.181457f, -225.1447f },
	{ -450.0004f, 1.038247f, -133.2369f },
	{ -450.0004f, 2.763763f, -39.23259f },
	{ -450.0004f, 4.907555f, 51.09781f },
	{ -444.5004f, 5.438749f, 141.2942f },
	{ -446.5004f, 6.49571f, 233.2178f },
	{ -450.0004f, 4.808626f, 322.8979f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B982C[] = {
	{ 0.395408f, 0.906222f, 0.149716f },
	{ 0.378493f, 0.919843f, 0.103111f },
	{ 0.359426f, 0.93165f, 0.053299f },
	{ 0.282095f, 0.955215f, -0.089366f },
	{ 0.239585f, 0.970395f, -0.030535f },
	{ 0.129838f, 0.989115f, 0.06924099f },
	{ 0.060795f, 0.991955f, 0.111036f },
	{ 0.254073f, 0.953639f, 0.161307f },
	{ 0.195357f, 0.9755059f, 0.101108f },
	{ 0.087129f, 0.996192f, 0.003296f },
	{ 0.050801f, 0.992808f, -0.108404f },
	{ 0.242549f, 0.959296f, -0.144639f },
	{ 0.373064f, 0.9217539f, -0.105793f },
	{ 0.37521f, 0.926017f, -0.041342f },
	{ 0.340521f, 0.93941f, 0.039435f },
	{ 0.307375f, 0.9486639f, 0.074552f },
	{ 0.033393f, 0.999442f, 0 },
	{ 0.022043f, 0.999757f, 0 },
	{ 0.009335999f, 0.999956f, 0 },
	{ 0.022761f, 0.999741f, 0 },
	{ 0.057059f, 0.9983709f, 0 },
	{ 0.086747f, 0.9962119f, -0.006073f },
	{ 0.102876f, 0.994687f, -0.003852f },
	{ 0.109336f, 0.993983f, 0.006582f },
	{ 0.10949f, 0.993949f, 0.008773f },
	{ 0.06303699f, 0.994047f, 0.088865f },
	{ 0.017252f, 0.998545f, 0.051094f },
	{ -0.021547f, 0.999726f, -0.009194f },
	{ 0.034332f, 0.998013f, -0.052835f },
	{ 0.148251f, 0.9862829f, -0.072577f },
	{ 0.256275f, 0.96455f, -0.062985f },
	{ 0.304698f, 0.9520169f, -0.028691f },
	{ 0.331424f, 0.943465f, 0.005664f },
	{ 0.359372f, 0.93295f, 0.021371f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000B99C4 = { vertex_000B9694, normal_000B982C, LengthOfArray<Sint32>(vertex_000B9694), meshlist_000B967C, matlist_000B9534, LengthOfArray<Uint16>(meshlist_000B967C), LengthOfArray<Uint16>(matlist_000B9534), { -494.5005f, 32.02336f, -38.45068f }, 382.8243f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000B99EC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B99C4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000B9A20[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000B9A5C[] = {
	0x8000u | 17, 4, 8, 5, 9, 6, 10, 33, 34, 11, 38, 15, 37, 19, 36, 23, 35, 27,
	0x8000u | 8, 7, 3, 6, 2, 5, 1, 4, 0,
	0x8000u | 6, 9, 13, 10, 14, 34, 38,
	8, 14, 38, 28, 37, 29, 36, 30, 35,
	3, 33, 6, 7,
	3, 13, 14, 18,
	10, 25, 24, 21, 20, 17, 16, 13, 12, 9, 8,
	0x8000u | 7, 13, 17, 18, 21, 22, 25, 26
};

extern "C" __declspec(dllexport) Sint16 poly_000B9AE8[] = {
	6, 30, 32, 29, 31, 28, 18
};

extern "C" __declspec(dllexport) Sint16 poly_000B9AF6[] = {
	0x8000u | 5, 18, 22, 31, 26, 32,
	3, 28, 18, 14
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B9B0C[] = {
	{ 6119, -2401 },
	{ 6884, -2412 },
	{ 6119, -3054 },
	{ 6884, -3072 },
	{ 6119, -3708 },
	{ 6861, -4068 },
	{ 6502, -4393 },
	{ 6873, -4242 },
	{ 6885, -4417 },
	{ 7631, -4328 },
	{ 7615, -4496 },
	{ 8401, -4312 },
	{ 8396, -4476 },
	{ 9163, -4306 },
	{ 9177, -4470 },
	{ 9946, -4157 },
	{ 9957, -4484 },
	{ 6119, -4357 },
	{ 5354, -4306 },
	{ 6119, -3708 },
	{ 5354, -3663 },
	{ 6119, -3054 },
	{ 5354, -3016 },
	{ 6119, -2401 },
	{ 5354, -2371 },
	{ 6884, -3072 },
	{ 7649, -3044 },
	{ 6861, -4068 },
	{ 7649, -4037 },
	{ 6873, -4242 },
	{ 7631, -4328 },
	{ 7649, -4037 },
	{ 7631, -4328 },
	{ 8406, -3996 },
	{ 8401, -4312 },
	{ 9147, -3949 },
	{ 9163, -4306 },
	{ 9937, -3816 },
	{ 9946, -4157 },
	{ 6502, -4393 },
	{ 6119, -3708 },
	{ 6119, -4357 },
	{ 7649, -3044 },
	{ 7649, -4037 },
	{ 8406, -3919 },
	{ 9945, -2915 },
	{ 9945, -2216 },
	{ 9180, -2916 },
	{ 9180, -2244 },
	{ 8414, -2974 },
	{ 8414, -2310 },
	{ 7649, -3044 },
	{ 7649, -2381 },
	{ 6884, -3072 },
	{ 6884, -2412 },
	{ 7649, -3044 },
	{ 8414, -2974 },
	{ 8406, -3919 },
	{ 9180, -2916 },
	{ 9147, -3787 },
	{ 9945, -2915 },
	{ 9937, -3547 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B9C04[] = {
	{ 721, 222 },
	{ 721, 0 },
	{ 402, 254 },
	{ 402, 15 },
	{ 164, 206 },
	{ 164, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000B9C1C[] = {
	{ 3, 119 },
	{ 258, 0 },
	{ 258, 254 },
	{ 513, 0 },
	{ 513, 254 },
	{ 258, 254 },
	{ 251, 119 },
	{ 3, 119 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000B9C3C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 8, poly_000B9A5C, NULL, NULL, NULL, uv_000B9B0C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000B9AE8, NULL, NULL, NULL, uv_000B9C04, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_000B9AF6, NULL, NULL, NULL, uv_000B9C1C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000B9C84[] = {
	{ -600.0009f, 126.0483f, -682.4513f },
	{ -600.0009f, 102.7112f, -590.4512f },
	{ -600.0009f, 78.2897f, -498.4512f },
	{ -600.0009f, 56.47008f, -406.4509f },
	{ -500.0008f, 100.9873f, -682.4513f },
	{ -500.0008f, 70.91756f, -590.4512f },
	{ -500.0008f, 40.51783f, -498.4512f },
	{ -500.0008f, 14.30859f, -406.4509f },
	{ -400.0008f, 90.9226f, -682.4513f },
	{ -400.0008f, 55.54835f, -590.4512f },
	{ -403.0008f, 19.03499f, -448.4512f },
	{ -400, 0, -400 },
	{ -300.0005f, 116.9783f, -682.4513f },
	{ -300.0005f, 79.89384f, -590.4512f },
	{ -300.0005f, 33.58054f, -450.4512f },
	{ -304.5485f, 0, -388 },
	{ -200.0004f, 176.7425f, -682.4513f },
	{ -200.0004f, 138.9087f, -590.4512f },
	{ -201.1181f, 85.3003f, -459.1466f },
	{ -202.4576f, 0, -391 },
	{ -100.0002f, 233.7955f, -682.4513f },
	{ -100.0002f, 186.7665f, -590.4512f },
	{ -104.1178f, 128.2206f, -471.2165f },
	{ -100.2687f, 0, -392 },
	{ -0.000146f, 256.625f, -682.4513f },
	{ -0.000146f, 188.7214f, -590.4512f },
	{ -1.012115f, 109.0132f, -510.2865f },
	{ 1.7888f, 0, -390 },
	{ -201.1181f, 20.30028f, -459.1466f },
	{ -104.1178f, 36.62369f, -463.2165f },
	{ -1.012115f, 17.41626f, -486.2866f },
	{ -104.1178f, 89.66457f, -463.2165f },
	{ -1.012115f, 70.45717f, -486.2866f },
	{ -450.0004f, 2.154293f, -403.2255f },
	{ -401.5003f, 9.517491f, -424.2256f },
	{ 0.388342f, 2.708133f, -438.1433f },
	{ -102.1932f, 4.311853f, -415.6082f },
	{ -201.7878f, 2.150137f, -415.0733f },
	{ -302.2745f, 2.790272f, -412.7256f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000B9E58[] = {
	{ 0.292025f, 0.918502f, 0.266599f },
	{ 0.315131f, 0.910544f, 0.267586f },
	{ 0.358146f, 0.898958f, 0.2522f },
	{ 0.377724f, 0.8959f, 0.233853f },
	{ 0.220892f, 0.928326f, 0.299027f },
	{ 0.21428f, 0.93341f, 0.287801f },
	{ 0.223252f, 0.937414f, 0.267235f },
	{ 0.233786f, 0.935626f, 0.264478f },
	{ -0.042572f, 0.9355429f, 0.350637f },
	{ -0.03432f, 0.9491929f, 0.312817f },
	{ -0.009853f, 0.936298f, 0.351069f },
	{ -0.009296999f, 0.954264f, 0.29882f },
	{ -0.365227f, 0.864125f, 0.34626f },
	{ -0.325477f, 0.888386f, 0.323781f },
	{ -0.103154f, 0.861112f, 0.497841f },
	{ -0.014338f, 0.984527f, 0.174645f },
	{ -0.434628f, 0.824998f, 0.361217f },
	{ -0.422439f, 0.833349f, 0.356474f },
	{ -0.213368f, 0.541048f, 0.813475f },
	{ 0.002164f, 0.993118f, 0.1171f },
	{ -0.190721f, 0.8591999f, 0.474764f },
	{ -0.104225f, 0.869269f, 0.483227f },
	{ 0.084681f, 0.662699f, 0.744082f },
	{ -0.000384f, 0.993377f, 0.114896f },
	{ -0.016578f, 0.848022f, 0.5297019f },
	{ 0.166389f, 0.822085f, 0.5445099f },
	{ 0.37977f, 0.591046f, 0.7116449f },
	{ -0.00191f, 0.9952379f, 0.09745999f },
	{ 0.041073f, 0.528024f, 0.848235f },
	{ 0.122586f, 0.482918f, 0.867043f },
	{ 0.277556f, 0.518493f, 0.808781f },
	{ 0.177477f, 0.152897f, 0.9721749f },
	{ 0.304165f, 0.168454f, 0.937607f },
	{ 0.09053899f, 0.949838f, 0.299351f },
	{ -0.001106f, 0.930014f, 0.367521f },
	{ 0.145263f, 0.947985f, 0.283239f },
	{ 0.027604f, 0.959363f, 0.280821f },
	{ 0.010833f, 0.948815f, 0.315646f },
	{ 0.005852f, 0.937284f, 0.348518f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000BA02C = { vertex_000B9C84, normal_000B9E58, LengthOfArray<Sint32>(vertex_000B9C84), meshlist_000B9C3C, matlist_000B9A20, LengthOfArray<Uint16>(meshlist_000B9C3C), LengthOfArray<Uint16>(matlist_000B9A20), { -299.106f, 128.3125f, -535.2256f }, 334.9822f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000BA054 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000BA02C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000BA088[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 51, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 52, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000BA0D8[] = {
	5, 11, 12, 0, 13, 14,
	4, 9, 10, 0, 11,
	0x8000u | 5, 9, 16, 0, 15, 14
};

extern "C" __declspec(dllexport) Sint16 poly_000BA0FA[] = {
	0x8000u | 6, 10, 11, 6, 7, 18, 19,
	0x8000u | 6, 11, 12, 7, 8, 19, 20,
	0x8000u | 6, 12, 13, 8, 1, 20, 21,
	0x8000u | 6, 13, 14, 1, 2, 21, 22,
	0x8000u | 6, 14, 15, 2, 3, 22, 23,
	0x8000u | 6, 15, 16, 3, 4, 23, 24,
	0x8000u | 6, 16, 9, 4, 5, 24, 17,
	0x8000u | 6, 9, 10, 5, 6, 17, 18
};

extern "C" __declspec(dllexport) Sint16 poly_000BA16A[] = {
	6, 31, 42, 44, 41, 43, 34,
	0x8000u | 7, 42, 35, 31, 36, 32, 37, 25,
	0x8000u | 13, 43, 30, 34, 29, 33, 28, 40, 27, 39, 26, 38, 25, 37
};

extern "C" __declspec(dllexport) Sint16 poly_000BA1A4[] = {
	4, 36, 37, 20, 21,
	4, 35, 36, 19, 20,
	6, 34, 41, 18, 42, 19, 35,
	4, 33, 34, 17, 18,
	4, 40, 33, 24, 17,
	4, 39, 40, 23, 24,
	4, 38, 39, 22, 23,
	4, 37, 38, 21, 22
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BA1F8[] = {
	{ 253, 1 },
	{ 1, 1 },
	{ 129, 253 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 1 },
	{ 129, 253 },
	{ 253, 1 },
	{ 253, 1 },
	{ 1, 1 },
	{ 129, 253 },
	{ 253, 1 },
	{ 1, 1 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BA230[] = {
	{ 115, -251 },
	{ 402, -251 },
	{ 3, -67 },
	{ 506, -67 },
	{ 3, 75 },
	{ 506, 75 },
	{ 115, -251 },
	{ 402, -251 },
	{ 3, -67 },
	{ 506, -67 },
	{ 3, 75 },
	{ 506, 75 },
	{ 115, -251 },
	{ 402, -251 },
	{ 3, -67 },
	{ 506, -67 },
	{ 3, 75 },
	{ 506, 75 },
	{ 115, -251 },
	{ 402, -251 },
	{ 3, -67 },
	{ 506, -67 },
	{ 3, 75 },
	{ 506, 75 },
	{ 115, -251 },
	{ 402, -251 },
	{ 3, -67 },
	{ 506, -67 },
	{ 3, 75 },
	{ 506, 75 },
	{ 115, -251 },
	{ 402, -251 },
	{ 3, -67 },
	{ 506, -67 },
	{ 3, 75 },
	{ 506, 75 },
	{ 115, -251 },
	{ 402, -251 },
	{ 3, -67 },
	{ 506, -67 },
	{ 3, 75 },
	{ 506, 75 },
	{ 115, -251 },
	{ 402, -251 },
	{ 3, -67 },
	{ 506, -67 },
	{ 3, 75 },
	{ 506, 75 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BA2F0[] = {
	{ 4608, 52 },
	{ 4449, -64 },
	{ 4430, 52 },
	{ 4000, -64 },
	{ 4018, 52 },
	{ 3839, -64 },
	{ 4449, -64 },
	{ 4608, -64 },
	{ 4608, 52 },
	{ 5376, -64 },
	{ 5376, 52 },
	{ 6120, -64 },
	{ 6120, 52 },
	{ 4018, 52 },
	{ 3840, 52 },
	{ 3839, -64 },
	{ 3072, 52 },
	{ 3072, -64 },
	{ 2304, 52 },
	{ 2304, -64 },
	{ 1536, 52 },
	{ 1536, -64 },
	{ 768, 52 },
	{ 768, -64 },
	{ 0, 52 },
	{ 0, -64 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BA358[] = {
	{ 3, -513 },
	{ 508, -513 },
	{ 97, -3 },
	{ 416, -3 },
	{ 3, -513 },
	{ 508, -513 },
	{ 97, -3 },
	{ 416, -3 },
	{ 3, -513 },
	{ 117, -418 },
	{ 97, -3 },
	{ 396, -418 },
	{ 416, -3 },
	{ 508, -513 },
	{ 3, -513 },
	{ 508, -513 },
	{ 97, -3 },
	{ 416, -3 },
	{ 3, -513 },
	{ 508, -513 },
	{ 97, -3 },
	{ 416, -3 },
	{ 3, -513 },
	{ 508, -513 },
	{ 97, -3 },
	{ 416, -3 },
	{ 3, -513 },
	{ 508, -513 },
	{ 97, -3 },
	{ 416, -3 },
	{ 3, -513 },
	{ 508, -513 },
	{ 97, -3 },
	{ 416, -3 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000BA3E0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000BA0D8, NULL, NULL, NULL, uv_000BA1F8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 8, poly_000BA0FA, NULL, NULL, NULL, uv_000BA230, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_000BA16A, NULL, NULL, NULL, uv_000BA2F0, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 8, poly_000BA1A4, NULL, NULL, NULL, uv_000BA358, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000BA440[] = {
	{ 0, -7.020004f, 0 },
	{ 27.60001f, 9, -0.00027f },
	{ 19.51615f, 9, -19.51615f },
	{ -0.00027f, 9, -27.6f },
	{ -19.51615f, 9, -19.51615f },
	{ -27.6f, 9, 0.000027f },
	{ -19.51615f, 9, 19.51615f },
	{ 0.000027f, 9, 27.6f },
	{ 19.51615f, 9, 19.51615f },
	{ -16.89998f, 9, 0.000017f },
	{ -11.95009f, 9, 11.95009f },
	{ 0.000017f, 9, 16.89998f },
	{ 11.95009f, 9, 11.95009f },
	{ 16.89999f, 9, -0.00017f },
	{ 11.95009f, 9, -11.95009f },
	{ -0.00017f, 9, -16.89998f },
	{ -11.95009f, 9, -11.95009f },
	{ -30.36f, 4.5f, 0.00003f },
	{ -21.46777f, 4.5f, 21.46777f },
	{ 0.00003f, 4.5f, 30.36f },
	{ 21.46777f, 4.5f, 21.46777f },
	{ 30.36001f, 4.5f, -0.0003f },
	{ 21.46777f, 4.5f, -21.46777f },
	{ -0.0003f, 4.5f, -30.36f },
	{ -21.46777f, 4.5f, -21.46777f },
	{ 66.24002f, 0, -0.0006499999f },
	{ 46.83877f, 0, -46.83877f },
	{ -0.0006499999f, 0, -66.24001f },
	{ -46.83876f, 0, -46.83876f },
	{ -66.24001f, 0, 0.00006499999f },
	{ -46.83876f, 0, 46.83876f },
	{ 0.00006499999f, 0, 66.24001f },
	{ 46.83876f, 0, 46.83876f },
	{ -60.72001f, 4.5f, 0.00006f },
	{ -42.898f, 4.5f, 42.84503f },
	{ 0.037513f, 4.5f, 60.62947f },
	{ 42.93553f, 4.5f, 42.93553f },
	{ 60.72001f, 4.5f, -0.0006f },
	{ 42.93554f, 4.5f, -42.93554f },
	{ -0.0006f, 4.5f, -60.72001f },
	{ -42.93553f, 4.5f, -42.93553f },
	{ -33.44068f, 4.5f, 46.76238f },
	{ -9.310547f, 4.5f, 56.75739f },
	{ -35.42978f, 0, 51.56451f },
	{ -11.2477f, 0, 61.58104f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000BA65C[] = {
	{ 0, 1, 0 },
	{ 0.570304f, 0.821434f, 0 },
	{ 0.403266f, 0.821434f, -0.403266f },
	{ 0, 0.821434f, -0.570304f },
	{ -0.403266f, 0.821434f, -0.403266f },
	{ -0.570304f, 0.821434f, 0 },
	{ -0.403266f, 0.821434f, 0.403266f },
	{ 0, 0.821434f, 0.570304f },
	{ 0.403266f, 0.821434f, 0.403266f },
	{ 0.285518f, 0.958373f, 0 },
	{ 0.201892f, 0.958373f, -0.201892f },
	{ 0, 0.958373f, -0.285518f },
	{ -0.201892f, 0.958373f, -0.201892f },
	{ -0.285518f, 0.958373f, 0 },
	{ -0.201892f, 0.958373f, 0.201892f },
	{ 0, 0.958373f, 0.285518f },
	{ 0.201892f, 0.958373f, 0.201892f },
	{ -0.384998f, 0.922918f, 0 },
	{ -0.272234f, 0.922918f, 0.272235f },
	{ 0, 0.922918f, 0.384998f },
	{ 0.272235f, 0.922918f, 0.272234f },
	{ 0.384998f, 0.922918f, 0 },
	{ 0.272234f, 0.922918f, -0.272235f },
	{ 0, 0.922918f, -0.384998f },
	{ -0.272235f, 0.922918f, -0.272234f },
	{ 0.63186f, 0.775082f, 0 },
	{ 0.446792f, 0.775082f, -0.446793f },
	{ 0, 0.775082f, -0.63186f },
	{ -0.446793f, 0.775082f, -0.446792f },
	{ -0.6305749f, 0.776128f, -0.000498f },
	{ -0.443229f, 0.7790599f, 0.44341f },
	{ -0.000127f, 0.7790599f, 0.626949f },
	{ 0.446236f, 0.776128f, 0.445531f },
	{ -0.404426f, 0.914571f, -0.00027f },
	{ -0.284757f, 0.915758f, 0.283375f },
	{ 0.000978f, 0.915758f, 0.40173f },
	{ 0.286163f, 0.914571f, 0.285782f },
	{ 0.4052f, 0.914228f, 0 },
	{ 0.28652f, 0.914228f, -0.28652f },
	{ 0, 0.914228f, -0.4052f },
	{ -0.28652f, 0.914228f, -0.28652f },
	{ -0.133657f, 0.937025f, 0.322677f },
	{ -0.133657f, 0.937025f, 0.322677f },
	{ -0.25048f, 0.756031f, 0.6047119f },
	{ -0.25048f, 0.756031f, 0.6047119f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000BA878 = { vertex_000BA440, normal_000BA65C, LengthOfArray<Sint32>(vertex_000BA440), meshlist_000BA3E0, matlist_000BA088, LengthOfArray<Uint16>(meshlist_000BA3E0), LengthOfArray<Uint16>(matlist_000BA088), { 0.000004f, 0.989998f, 0 }, 86.54675f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000BA8A0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000BA878, 0, 85.5f, 0, 0, 0x1000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000BA8D4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0x7FFFFFFF }, { 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000BA910[] = {
	4, 95, 94, 2, 71,
	4, 2, 71, 1, 70,
	4, 5, 2, 4, 1,
	4, 93, 95, 5, 2,
	4, 94, 91, 71, 68,
	4, 8, 5, 7, 4,
	4, 92, 93, 8, 5,
	4, 71, 68, 70, 67,
	4, 11, 8, 10, 7,
	4, 90, 92, 11, 8,
	4, 91, 88, 68, 65,
	4, 68, 65, 67, 64,
	4, 14, 11, 13, 10,
	4, 89, 90, 14, 11,
	4, 87, 89, 17, 14,
	4, 17, 14, 16, 13,
	4, 88, 85, 65, 62,
	4, 65, 62, 64, 61,
	4, 20, 17, 19, 16,
	4, 86, 87, 20, 17,
	4, 84, 86, 23, 20,
	4, 62, 59, 61, 58,
	4, 23, 20, 22, 19,
	4, 85, 81, 62, 59,
	4, 83, 84, 26, 23,
	4, 26, 23, 25, 22,
	4, 82, 83, 29, 26,
	4, 59, 56, 58, 55,
	4, 29, 26, 28, 25,
	4, 80, 82, 32, 29,
	4, 81, 76, 59, 56,
	4, 56, 53, 55, 52,
	4, 32, 29, 31, 28,
	4, 79, 80, 35, 32,
	4, 78, 79, 38, 35,
	4, 35, 32, 34, 31,
	4, 77, 75, 53, 50,
	4, 53, 50, 52, 49,
	4, 38, 35, 37, 34,
	4, 74, 78, 41, 38,
	4, 76, 77, 56, 53,
	4, 50, 47, 49, 46,
	4, 41, 38, 40, 37,
	4, 75, 72, 50, 47,
	4, 73, 74, 44, 41,
	4, 44, 41, 43, 40,
	4, 72, 73, 47, 44,
	4, 47, 44, 46, 43,
	4, 191, 190, 98, 167,
	6, 98, 167, 97, 166, 96, 165,
	6, 96, 99, 97, 100, 98, 101,
	4, 189, 191, 101, 98,
	4, 190, 187, 167, 164,
	6, 99, 102, 100, 103, 101, 104,
	4, 188, 189, 104, 101,
	6, 162, 165, 163, 166, 164, 167,
	6, 102, 105, 103, 106, 104, 107,
	4, 186, 188, 107, 104,
	4, 187, 184, 164, 161,
	6, 164, 161, 163, 160, 162, 159,
	6, 105, 108, 106, 109, 107, 110,
	4, 185, 186, 110, 107,
	4, 183, 185, 113, 110,
	6, 108, 111, 109, 112, 110, 113,
	4, 184, 181, 161, 158,
	6, 161, 158, 160, 157, 159, 156,
	6, 111, 114, 112, 115, 113, 116,
	4, 182, 183, 116, 113,
	4, 180, 182, 119, 116,
	6, 114, 117, 115, 118, 116, 119,
	4, 181, 177, 158, 155,
	6, 153, 156, 154, 157, 155, 158,
	4, 179, 180, 122, 119,
	6, 117, 120, 118, 121, 119, 122,
	4, 178, 179, 125, 122,
	6, 150, 153, 151, 154, 152, 155,
	6, 120, 123, 121, 124, 122, 125,
	4, 176, 178, 128, 125,
	4, 177, 172, 155, 152,
	6, 152, 149, 151, 148, 150, 147,
	6, 123, 126, 124, 127, 125, 128,
	4, 175, 176, 131, 128,
	4, 174, 175, 134, 131,
	6, 126, 129, 127, 130, 128, 131,
	4, 173, 171, 149, 146,
	6, 144, 147, 145, 148, 146, 149,
	6, 129, 132, 130, 133, 131, 134,
	4, 170, 174, 137, 134,
	4, 172, 173, 152, 149,
	6, 146, 143, 145, 142, 144, 141,
	6, 132, 135, 133, 136, 134, 137,
	4, 171, 168, 146, 143,
	4, 169, 170, 140, 137,
	6, 135, 138, 136, 139, 137, 140,
	4, 168, 169, 143, 140,
	6, 143, 140, 142, 139, 141, 138
};

extern "C" __declspec(dllexport) Sint16 poly_000BAD30[] = {
	4, 4, 1, 3, 0,
	4, 1, 70, 0, 69,
	4, 7, 4, 6, 3,
	4, 70, 67, 69, 66,
	4, 10, 7, 9, 6,
	4, 13, 10, 12, 9,
	4, 67, 64, 66, 63,
	4, 16, 13, 15, 12,
	4, 64, 61, 63, 60,
	4, 19, 16, 18, 15,
	4, 22, 19, 21, 18,
	4, 61, 58, 60, 57,
	4, 25, 22, 24, 21,
	4, 58, 55, 57, 54,
	4, 28, 25, 27, 24,
	4, 31, 28, 30, 27,
	4, 55, 52, 54, 51,
	4, 34, 31, 33, 30,
	4, 52, 49, 51, 48,
	4, 37, 34, 36, 33,
	4, 40, 37, 39, 36,
	4, 49, 46, 48, 45,
	4, 43, 40, 42, 39,
	4, 46, 43, 45, 42
};

extern "C" __declspec(dllexport) Sint16 poly_000BAE20[] = {
	3, 214, 213, 211,
	3, 208, 215, 214,
	0x8000u | 6, 212, 200, 211, 199, 213, 201,
	3, 211, 212, 210,
	3, 210, 209, 208,
	0x8000u | 6, 215, 206, 208, 205, 209, 207,
	10, 206, 192, 215, 204, 214, 202, 213, 203, 201, 193,
	10, 200, 195, 212, 198, 210, 196, 209, 197, 207, 194
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BAE88[] = {
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 2, -189 },
	{ 761, -189 },
	{ 2, -65 },
	{ 761, -65 },
	{ 2, -189 },
	{ 761, -189 },
	{ 2, -65 },
	{ 761, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 2, -189 },
	{ 761, -189 },
	{ 2, -65 },
	{ 761, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 2, -189 },
	{ 761, -189 },
	{ 2, -65 },
	{ 761, -65 },
	{ 2, -189 },
	{ 761, -189 },
	{ 2, -65 },
	{ 761, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 2, -189 },
	{ 761, -189 },
	{ 2, -65 },
	{ 761, -65 },
	{ 2, -189 },
	{ 761, -189 },
	{ 2, -65 },
	{ 761, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 2, -189 },
	{ 761, -189 },
	{ 2, -65 },
	{ 761, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 2, -189 },
	{ 761, -189 },
	{ 2, -65 },
	{ 761, -65 },
	{ 2, -189 },
	{ 761, -189 },
	{ 2, -65 },
	{ 761, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 2, -189 },
	{ 761, -189 },
	{ 2, -65 },
	{ 761, -65 },
	{ 2, -189 },
	{ 761, -189 },
	{ 2, -65 },
	{ 761, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 2, -189 },
	{ 761, -189 },
	{ 2, -65 },
	{ 761, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 2, -189 },
	{ 761, -189 },
	{ 2, -65 },
	{ 761, -65 },
	{ 2, -189 },
	{ 761, -189 },
	{ 2, -65 },
	{ 761, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 2, -189 },
	{ 761, -189 },
	{ 2, -65 },
	{ 761, -65 },
	{ 2, -189 },
	{ 761, -189 },
	{ 2, -65 },
	{ 761, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 2, -189 },
	{ 761, -189 },
	{ 2, -65 },
	{ 761, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 2, -189 },
	{ 761, -189 },
	{ 2, -65 },
	{ 761, -65 },
	{ 2, -189 },
	{ 761, -189 },
	{ 2, -65 },
	{ 761, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 2, -189 },
	{ 761, -189 },
	{ 2, -65 },
	{ 761, -65 },
	{ 2, -189 },
	{ 761, -189 },
	{ 2, -65 },
	{ 761, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 2, -189 },
	{ 761, -189 },
	{ 2, -65 },
	{ 761, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 2, -189 },
	{ 761, -189 },
	{ 2, -65 },
	{ 761, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 2, -189 },
	{ 761, -189 },
	{ 2, -65 },
	{ 761, -65 },
	{ 2, 53 },
	{ 761, 53 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, -189 },
	{ 2, -189 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, -189 },
	{ 2, -189 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, -189 },
	{ 2, -189 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, -189 },
	{ 2, -189 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 2, -189 },
	{ 761, -189 },
	{ 2, -65 },
	{ 761, -65 },
	{ 2, 53 },
	{ 761, 53 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, -189 },
	{ 2, -189 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, -189 },
	{ 2, -189 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 2, -189 },
	{ 761, -189 },
	{ 2, -65 },
	{ 761, -65 },
	{ 2, 53 },
	{ 761, 53 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, -189 },
	{ 2, -189 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, -189 },
	{ 2, -189 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, -189 },
	{ 2, -189 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, -189 },
	{ 2, -189 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, -189 },
	{ 2, -189 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, -189 },
	{ 2, -189 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 2, -189 },
	{ 761, -189 },
	{ 2, -65 },
	{ 761, -65 },
	{ 2, 53 },
	{ 761, 53 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, -189 },
	{ 2, -189 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, -189 },
	{ 2, -189 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, -189 },
	{ 2, -189 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, -189 },
	{ 2, -189 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 2, -189 },
	{ 761, -189 },
	{ 2, -65 },
	{ 761, -65 },
	{ 2, 53 },
	{ 761, 53 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, -189 },
	{ 2, -189 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 761, -189 },
	{ 2, -189 },
	{ 761, 53 },
	{ 2, 53 },
	{ 761, -65 },
	{ 2, -65 },
	{ 2, -189 },
	{ 761, -189 },
	{ 2, -65 },
	{ 761, -65 },
	{ 2, 53 },
	{ 761, 53 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BB548[] = {
	{ 1016, 62 },
	{ 3, 62 },
	{ 1016, 172 },
	{ 3, 172 },
	{ 1016, 62 },
	{ 3, 62 },
	{ 1016, 172 },
	{ 3, 172 },
	{ 1016, 62 },
	{ 3, 62 },
	{ 1016, 172 },
	{ 3, 172 },
	{ 1016, 62 },
	{ 3, 62 },
	{ 1016, 172 },
	{ 3, 172 },
	{ 1016, 62 },
	{ 3, 62 },
	{ 1016, 172 },
	{ 3, 172 },
	{ 1016, 62 },
	{ 3, 62 },
	{ 1016, 172 },
	{ 3, 172 },
	{ 1016, 62 },
	{ 3, 62 },
	{ 1016, 172 },
	{ 3, 172 },
	{ 1016, 62 },
	{ 3, 62 },
	{ 1016, 172 },
	{ 3, 172 },
	{ 1016, 62 },
	{ 3, 62 },
	{ 1016, 172 },
	{ 3, 172 },
	{ 1016, 62 },
	{ 3, 62 },
	{ 1016, 172 },
	{ 3, 172 },
	{ 1016, 62 },
	{ 3, 62 },
	{ 1016, 172 },
	{ 3, 172 },
	{ 1016, 62 },
	{ 3, 62 },
	{ 1016, 172 },
	{ 3, 172 },
	{ 1016, 62 },
	{ 3, 62 },
	{ 1016, 172 },
	{ 3, 172 },
	{ 1016, 62 },
	{ 3, 62 },
	{ 1016, 172 },
	{ 3, 172 },
	{ 1016, 62 },
	{ 3, 62 },
	{ 1016, 172 },
	{ 3, 172 },
	{ 1016, 62 },
	{ 3, 62 },
	{ 1016, 172 },
	{ 3, 172 },
	{ 1016, 62 },
	{ 3, 62 },
	{ 1016, 172 },
	{ 3, 172 },
	{ 1016, 62 },
	{ 3, 62 },
	{ 1016, 172 },
	{ 3, 172 },
	{ 1016, 62 },
	{ 3, 62 },
	{ 1016, 172 },
	{ 3, 172 },
	{ 1016, 62 },
	{ 3, 62 },
	{ 1016, 172 },
	{ 3, 172 },
	{ 1016, 62 },
	{ 3, 62 },
	{ 1016, 172 },
	{ 3, 172 },
	{ 1016, 62 },
	{ 3, 62 },
	{ 1016, 172 },
	{ 3, 172 },
	{ 1016, 62 },
	{ 3, 62 },
	{ 1016, 172 },
	{ 3, 172 },
	{ 1016, 62 },
	{ 3, 62 },
	{ 1016, 172 },
	{ 3, 172 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BB6C8[] = {
	{ 3570, -5036 },
	{ 5291, -5036 },
	{ 5291, -3315 },
	{ 1847, -3315 },
	{ 1847, -5036 },
	{ 3570, -5036 },
	{ 5291, -1592 },
	{ 7014, -1592 },
	{ 5291, -3315 },
	{ 7014, -3315 },
	{ 5291, -5036 },
	{ 7014, -5036 },
	{ 5291, -3315 },
	{ 5291, -1592 },
	{ 3570, -1592 },
	{ 3570, -1592 },
	{ 1847, -1592 },
	{ 1847, -3315 },
	{ 1847, -5036 },
	{ 124, -5036 },
	{ 1847, -3315 },
	{ 124, -3315 },
	{ 1847, -1592 },
	{ 124, -1592 },
	{ 124, -5036 },
	{ 124, -6759 },
	{ 1847, -5036 },
	{ 1847, -6759 },
	{ 3570, -5036 },
	{ 3570, -6759 },
	{ 5291, -5036 },
	{ 5291, -6759 },
	{ 7014, -5036 },
	{ 7014, -6759 },
	{ 7014, -1592 },
	{ 7014, 130 },
	{ 5291, -1592 },
	{ 5291, 130 },
	{ 3570, -1592 },
	{ 3570, 130 },
	{ 1847, -1592 },
	{ 1847, 130 },
	{ 124, -1592 },
	{ 124, 130 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000BB778[] = {
	{ NJD_MESHSET_TRIMESH | 0, 96, poly_000BA910, NULL, NULL, NULL, uv_000BAE88, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 24, poly_000BAD30, NULL, NULL, NULL, uv_000BB548, NULL }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000BB778_2[] = {
	{ NJD_MESHSET_TRIMESH | 2, 8, poly_000BAE20, NULL, NULL, NULL, uv_000BB6C8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000BB7C0[] = {
	{ 279.7361f, 0, -36.82795f },
	{ 279.7361f, 5, -36.82795f },
	{ 268.4068f, 5, -35.33643f },
	{ 260.6726f, 0, -107.9741f },
	{ 260.6726f, 5, -107.9741f },
	{ 250.1154f, 5, -103.6012f },
	{ 223.8446f, 0, -171.762f },
	{ 223.8446f, 5, -171.762f },
	{ 214.7789f, 5, -164.8056f },
	{ 171.762f, 0, -223.8446f },
	{ 171.762f, 5, -223.8446f },
	{ 164.8057f, 5, -214.779f },
	{ 107.9741f, 0, -260.6725f },
	{ 107.9741f, 5, -260.6725f },
	{ 103.6012f, 5, -250.1154f },
	{ 36.82793f, 0, -279.7361f },
	{ 36.82793f, 5, -279.7361f },
	{ 35.33645f, 5, -268.4069f },
	{ -36.82795f, 0, -279.7361f },
	{ -36.82795f, 5, -279.7361f },
	{ -35.33643f, 5, -268.4068f },
	{ -107.9741f, 0, -260.6726f },
	{ -107.9741f, 5, -260.6726f },
	{ -103.6012f, 5, -250.1154f },
	{ -171.762f, 0, -223.8446f },
	{ -171.762f, 5, -223.8446f },
	{ -164.8056f, 5, -214.7789f },
	{ -223.8446f, 0, -171.762f },
	{ -223.8446f, 5, -171.762f },
	{ -214.779f, 5, -164.8057f },
	{ -260.6725f, 0, -107.9741f },
	{ -260.6725f, 5, -107.9741f },
	{ -250.1154f, 5, -103.6012f },
	{ -279.7361f, 0, -36.82793f },
	{ -279.7361f, 5, -36.82793f },
	{ -268.4069f, 5, -35.33645f },
	{ -279.7361f, 0, 36.82795f },
	{ -279.7361f, 5, 36.82795f },
	{ -268.4068f, 5, 35.33643f },
	{ -260.6726f, 0, 107.9741f },
	{ -260.6726f, 5, 107.9741f },
	{ -250.1154f, 5, 103.6012f },
	{ -223.8446f, 0, 171.762f },
	{ -223.8446f, 5, 171.762f },
	{ -214.7789f, 5, 164.8056f },
	{ -171.762f, 0, 223.8446f },
	{ -171.762f, 5, 223.8446f },
	{ -164.8057f, 5, 214.779f },
	{ -107.9741f, 0, 260.6725f },
	{ -107.9741f, 5, 260.6725f },
	{ -103.6012f, 5, 250.1154f },
	{ -36.82793f, 0, 279.7361f },
	{ -36.82793f, 5, 279.7361f },
	{ -35.33645f, 5, 268.4069f },
	{ 36.82795f, 0, 279.7361f },
	{ 36.82795f, 5, 279.7361f },
	{ 35.33643f, 5, 268.4068f },
	{ 107.9741f, 0, 260.6726f },
	{ 107.9741f, 5, 260.6726f },
	{ 103.6012f, 5, 250.1154f },
	{ 171.762f, 0, 223.8446f },
	{ 171.762f, 5, 223.8446f },
	{ 164.8056f, 5, 214.7789f },
	{ 223.8446f, 0, 171.762f },
	{ 223.8446f, 5, 171.762f },
	{ 214.779f, 5, 164.8057f },
	{ 260.6725f, 0, 107.9741f },
	{ 260.6725f, 5, 107.9741f },
	{ 250.1154f, 5, 103.6012f },
	{ 279.7361f, 0, 36.82793f },
	{ 279.7361f, 5, 36.82793f },
	{ 268.4069f, 5, 35.33645f },
	{ -164.8057f, -3, 214.779f },
	{ -214.7789f, -3, 164.8056f },
	{ -250.1154f, -3, 103.6012f },
	{ -103.6012f, -3, 250.1154f },
	{ 35.33643f, -3, 268.4068f },
	{ -35.33645f, -3, 268.4069f },
	{ -268.4068f, -3, 35.33643f },
	{ -268.4069f, -3, -35.33645f },
	{ -250.1154f, -3, -103.6012f },
	{ 103.6012f, -3, 250.1154f },
	{ -214.779f, -3, -164.8057f },
	{ -164.8056f, -3, -214.7789f },
	{ -103.6012f, -3, -250.1154f },
	{ 164.8056f, -3, 214.7789f },
	{ -35.33643f, -3, -268.4068f },
	{ 35.33645f, -3, -268.4069f },
	{ 214.779f, -3, 164.8057f },
	{ 103.6012f, -3, -250.1154f },
	{ 164.8057f, -3, -214.779f },
	{ 250.1154f, -3, 103.6012f },
	{ 214.7789f, -3, -164.8056f },
	{ 250.1154f, -3, -103.6012f },
	{ 268.4069f, -3, 35.33645f },
	{ 268.4068f, -3, -35.33643f },
	{ 220.2983f, -3, -29.00283f },
	{ 220.2983f, 5, -29.00283f },
	{ 209.2841f, 5, -27.55278f },
	{ 205.2855f, -3, -85.03204f },
	{ 205.2855f, 5, -85.03204f },
	{ 195.0217f, 5, -80.78064f },
	{ 176.2828f, -3, -135.2664f },
	{ 176.2828f, 5, -135.2664f },
	{ 167.4689f, 5, -128.5035f },
	{ 135.2665f, -3, -176.2827f },
	{ 135.2665f, 5, -176.2827f },
	{ 128.5034f, 5, -167.4689f },
	{ 85.03195f, -3, -205.2856f },
	{ 85.03195f, 5, -205.2856f },
	{ 80.78066f, 5, -195.0217f },
	{ 29.00285f, -3, -220.2985f },
	{ 29.00285f, 5, -220.2985f },
	{ 27.55277f, 5, -209.2841f },
	{ -29.00283f, -3, -220.2983f },
	{ -29.00283f, 5, -220.2983f },
	{ -27.55278f, 5, -209.2841f },
	{ -85.03204f, -3, -205.2855f },
	{ -85.03204f, 5, -205.2855f },
	{ -80.78064f, 5, -195.0217f },
	{ -135.2664f, -3, -176.2828f },
	{ -135.2664f, 5, -176.2828f },
	{ -128.5035f, 5, -167.4689f },
	{ -176.2827f, -3, -135.2665f },
	{ -176.2827f, 5, -135.2665f },
	{ -167.4689f, 5, -128.5034f },
	{ -205.2856f, -3, -85.03195f },
	{ -205.2856f, 5, -85.03195f },
	{ -195.0217f, 5, -80.78066f },
	{ -220.2985f, -3, -29.00285f },
	{ -220.2985f, 5, -29.00285f },
	{ -209.2841f, 5, -27.55277f },
	{ -220.2983f, -3, 29.00283f },
	{ -220.2983f, 5, 29.00283f },
	{ -209.2841f, 5, 27.55278f },
	{ -205.2855f, -3, 85.03204f },
	{ -205.2855f, 5, 85.03204f },
	{ -195.0217f, 5, 80.78064f },
	{ -176.2828f, -3, 135.2664f },
	{ -176.2828f, 5, 135.2664f },
	{ -167.4689f, 5, 128.5035f },
	{ -135.2665f, -3, 176.2827f },
	{ -135.2665f, 5, 176.2827f },
	{ -128.5034f, 5, 167.4689f },
	{ -85.03195f, -3, 205.2856f },
	{ -85.03195f, 5, 205.2856f },
	{ -80.78066f, 5, 195.0217f },
	{ -29.00285f, -3, 220.2985f },
	{ -29.00285f, 5, 220.2985f },
	{ -27.55277f, 5, 209.2841f },
	{ 29.00283f, -3, 220.2983f },
	{ 29.00283f, 5, 220.2983f },
	{ 27.55278f, 5, 209.2841f },
	{ 85.03204f, -3, 205.2855f },
	{ 85.03204f, 5, 205.2855f },
	{ 80.78064f, 5, 195.0217f },
	{ 135.2664f, -3, 176.2828f },
	{ 135.2664f, 5, 176.2828f },
	{ 128.5035f, 5, 167.4689f },
	{ 176.2827f, -3, 135.2665f },
	{ 176.2827f, 5, 135.2665f },
	{ 167.4689f, 5, 128.5034f },
	{ 205.2856f, -3, 85.03195f },
	{ 205.2856f, 5, 85.03195f },
	{ 195.0217f, 5, 80.78066f },
	{ 220.2985f, -3, 29.00285f },
	{ 220.2985f, 5, 29.00285f },
	{ 209.2841f, 5, 27.55277f },
	{ -128.5034f, -3, 167.4689f },
	{ -167.4689f, -3, 128.5035f },
	{ -195.0217f, -3, 80.78064f },
	{ -80.78066f, -3, 195.0217f },
	{ 27.55278f, -3, 209.2841f },
	{ -27.55277f, -3, 209.2841f },
	{ -209.2841f, -3, 27.55278f },
	{ -209.2841f, -3, -27.55277f },
	{ -195.0217f, -3, -80.78066f },
	{ 80.78064f, -3, 195.0217f },
	{ -167.4689f, -3, -128.5034f },
	{ -128.5035f, -3, -167.4689f },
	{ -80.78064f, -3, -195.0217f },
	{ 128.5035f, -3, 167.4689f },
	{ -27.55278f, -3, -209.2841f },
	{ 27.55277f, -3, -209.2841f },
	{ 167.4689f, -3, 128.5034f },
	{ 80.78066f, -3, -195.0217f },
	{ 128.5034f, -3, -167.4689f },
	{ 195.0217f, -3, 80.78066f },
	{ 167.4689f, -3, -128.5035f },
	{ 195.0217f, -3, -80.78064f },
	{ 209.2841f, -3, 27.55277f },
	{ 209.2841f, -3, -27.55278f },
	{ -270, -3, 270 },
	{ 270, -3, 270 },
	{ -270, -3, -270 },
	{ 270, -3, -270 },
	{ 0, -3, -270 },
	{ -135, -3, -270 },
	{ 135, -3, -270 },
	{ 270, -3, 0 },
	{ 270, -3, -135 },
	{ 270, -3, 135 },
	{ 0, -3, 270 },
	{ 135, -3, 270 },
	{ -135, -3, 270 },
	{ -270, -3, 0 },
	{ -270, -3, 135 },
	{ -270, -3, -135 },
	{ -135, -3, 0 },
	{ -135, -3, -135 },
	{ 0, -3, -135 },
	{ 135, -3, 0 },
	{ 135, -3, -135 },
	{ 135, -3, 135 },
	{ 0, -3, 135 },
	{ -135, -3, 135 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000BC1E0[] = {
	{ 0.9914449f, 0, -0.130526f },
	{ 0.727973f, 0.678875f, -0.09583899f },
	{ -0.6693529f, 0.7377f, 0.088122f },
	{ 0.92388f, 0, -0.382683f },
	{ 0.678363f, 0.678874f, -0.280987f },
	{ -0.623737f, 0.7377f, 0.25836f },
	{ 0.793353f, 0, -0.608762f },
	{ 0.582523f, 0.678874f, -0.446986f },
	{ -0.535616f, 0.7377f, 0.410992f },
	{ 0.608761f, 0, -0.793353f },
	{ 0.446986f, 0.678874f, -0.582523f },
	{ -0.410992f, 0.7377f, 0.535615f },
	{ 0.382684f, 0, -0.923879f },
	{ 0.280987f, 0.678874f, -0.678362f },
	{ -0.25836f, 0.7377f, 0.623738f },
	{ 0.130526f, 0, -0.9914449f },
	{ 0.09583899f, 0.678874f, -0.727973f },
	{ -0.088122f, 0.7377f, 0.669352f },
	{ -0.130526f, 0, -0.9914449f },
	{ -0.09583899f, 0.678875f, -0.727973f },
	{ 0.088122f, 0.7377f, 0.6693529f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.280987f, 0.678874f, -0.678363f },
	{ 0.25836f, 0.7377f, 0.623737f },
	{ -0.608762f, 0, -0.793353f },
	{ -0.446986f, 0.678874f, -0.582523f },
	{ 0.410992f, 0.7377f, 0.535616f },
	{ -0.793353f, 0, -0.608761f },
	{ -0.582523f, 0.678874f, -0.446986f },
	{ 0.535615f, 0.7377f, 0.410992f },
	{ -0.923879f, 0, -0.382684f },
	{ -0.678362f, 0.678874f, -0.280987f },
	{ 0.623738f, 0.7377f, 0.25836f },
	{ -0.9914449f, 0, -0.130526f },
	{ -0.727973f, 0.678874f, -0.09583899f },
	{ 0.669352f, 0.7377f, 0.088122f },
	{ -0.9914449f, 0, 0.130526f },
	{ -0.727973f, 0.678875f, 0.09583899f },
	{ 0.6693529f, 0.7377f, -0.088122f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.678363f, 0.678874f, 0.280987f },
	{ 0.623737f, 0.7377f, -0.25836f },
	{ -0.793353f, 0, 0.608762f },
	{ -0.582523f, 0.678874f, 0.446986f },
	{ 0.535616f, 0.7377f, -0.410992f },
	{ -0.608761f, 0, 0.793353f },
	{ -0.446986f, 0.678874f, 0.582523f },
	{ 0.410992f, 0.7377f, -0.535615f },
	{ -0.382684f, 0, 0.923879f },
	{ -0.280987f, 0.678874f, 0.678362f },
	{ 0.25836f, 0.7377f, -0.623738f },
	{ -0.130526f, 0, 0.9914449f },
	{ -0.09583899f, 0.678874f, 0.727973f },
	{ 0.088122f, 0.7377f, -0.669352f },
	{ 0.130526f, 0, 0.9914449f },
	{ 0.09583899f, 0.678875f, 0.727973f },
	{ -0.088122f, 0.7377f, -0.6693529f },
	{ 0.382683f, 0, 0.92388f },
	{ 0.280987f, 0.678874f, 0.678363f },
	{ -0.25836f, 0.7377f, -0.623737f },
	{ 0.608762f, 0, 0.793353f },
	{ 0.446986f, 0.678874f, 0.582523f },
	{ -0.410992f, 0.7377f, -0.535616f },
	{ 0.793353f, 0, 0.608761f },
	{ 0.582523f, 0.678874f, 0.446986f },
	{ -0.535615f, 0.7377f, -0.410992f },
	{ 0.923879f, 0, 0.382684f },
	{ 0.678362f, 0.678874f, 0.280987f },
	{ -0.623738f, 0.7377f, -0.25836f },
	{ 0.9914449f, 0, 0.130526f },
	{ 0.727973f, 0.678874f, 0.09583899f },
	{ -0.669352f, 0.7377f, -0.088122f },
	{ 0.608761f, 0, -0.793353f },
	{ 0.793353f, 0, -0.608761f },
	{ 0.92388f, 0, -0.382683f },
	{ 0.382683f, 0, -0.92388f },
	{ -0.130526f, 0, -0.9914449f },
	{ 0.130526f, 0, -0.9914449f },
	{ 0.9914449f, 0, -0.130526f },
	{ 0.9914449f, 0, 0.130526f },
	{ 0.92388f, 0, 0.382683f },
	{ -0.382683f, 0, -0.92388f },
	{ 0.793353f, 0, 0.608761f },
	{ 0.608761f, 0, 0.793353f },
	{ 0.382683f, 0, 0.92388f },
	{ -0.608761f, 0, -0.793353f },
	{ 0.130526f, 0, 0.9914449f },
	{ -0.130526f, 0, 0.9914449f },
	{ -0.793353f, 0, -0.608761f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.608761f, 0, 0.793353f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.793353f, 0, 0.608761f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.9914449f, 0, -0.130526f },
	{ -0.9914449f, 0, 0.130526f },
	{ 0.9914449f, 0, -0.130526f },
	{ 0.727972f, 0.678875f, -0.09583899f },
	{ -0.669352f, 0.7377f, 0.088122f },
	{ 0.92388f, 0, -0.382682f },
	{ 0.678363f, 0.678874f, -0.280986f },
	{ -0.623737f, 0.7377f, 0.258361f },
	{ 0.793354f, 0, -0.60876f },
	{ 0.5825239f, 0.678874f, -0.446985f },
	{ -0.535615f, 0.7377f, 0.410992f },
	{ 0.608761f, 0, -0.793353f },
	{ 0.446986f, 0.678874f, -0.582523f },
	{ -0.410992f, 0.7377f, 0.535615f },
	{ 0.382682f, 0, -0.92388f },
	{ 0.280986f, 0.678874f, -0.678363f },
	{ -0.258361f, 0.7377f, 0.623737f },
	{ 0.130524f, 0, -0.9914449f },
	{ 0.095838f, 0.678874f, -0.727973f },
	{ -0.088122f, 0.7377f, 0.6693529f },
	{ -0.130526f, 0, -0.9914449f },
	{ -0.09583899f, 0.678875f, -0.727972f },
	{ 0.088122f, 0.7377f, 0.669352f },
	{ -0.382682f, 0, -0.92388f },
	{ -0.280986f, 0.678874f, -0.678363f },
	{ 0.258361f, 0.7377f, 0.623737f },
	{ -0.60876f, 0, -0.793354f },
	{ -0.446985f, 0.678874f, -0.5825239f },
	{ 0.410992f, 0.7377f, 0.535615f },
	{ -0.793353f, 0, -0.608761f },
	{ -0.582523f, 0.678874f, -0.446986f },
	{ 0.535615f, 0.7377f, 0.410992f },
	{ -0.92388f, 0, -0.382682f },
	{ -0.678363f, 0.678874f, -0.280986f },
	{ 0.623737f, 0.7377f, 0.258361f },
	{ -0.9914449f, 0, -0.130524f },
	{ -0.727973f, 0.678874f, -0.095838f },
	{ 0.6693529f, 0.7377f, 0.088122f },
	{ -0.9914449f, 0, 0.130526f },
	{ -0.727972f, 0.678875f, 0.09583899f },
	{ 0.669352f, 0.7377f, -0.088122f },
	{ -0.92388f, 0, 0.382682f },
	{ -0.678363f, 0.678874f, 0.280986f },
	{ 0.623737f, 0.7377f, -0.258361f },
	{ -0.793354f, 0, 0.60876f },
	{ -0.5825239f, 0.678874f, 0.446985f },
	{ 0.535615f, 0.7377f, -0.410992f },
	{ -0.608761f, 0, 0.793353f },
	{ -0.446986f, 0.678874f, 0.582523f },
	{ 0.410992f, 0.7377f, -0.535615f },
	{ -0.382682f, 0, 0.92388f },
	{ -0.280986f, 0.678874f, 0.678363f },
	{ 0.258361f, 0.7377f, -0.623737f },
	{ -0.130524f, 0, 0.9914449f },
	{ -0.095838f, 0.678874f, 0.727973f },
	{ 0.088122f, 0.7377f, -0.6693529f },
	{ 0.130526f, 0, 0.9914449f },
	{ 0.09583899f, 0.678875f, 0.727972f },
	{ -0.088122f, 0.7377f, -0.669352f },
	{ 0.382682f, 0, 0.92388f },
	{ 0.280986f, 0.678874f, 0.678363f },
	{ -0.258361f, 0.7377f, -0.623737f },
	{ 0.60876f, 0, 0.793354f },
	{ 0.446985f, 0.678874f, 0.5825239f },
	{ -0.410992f, 0.7377f, -0.535615f },
	{ 0.793353f, 0, 0.608761f },
	{ 0.582523f, 0.678874f, 0.446986f },
	{ -0.535615f, 0.7377f, -0.410992f },
	{ 0.92388f, 0, 0.382682f },
	{ 0.678363f, 0.678874f, 0.280986f },
	{ -0.623737f, 0.7377f, -0.258361f },
	{ 0.9914449f, 0, 0.130524f },
	{ 0.727973f, 0.678874f, 0.095838f },
	{ -0.6693529f, 0.7377f, -0.088122f },
	{ 0.608761f, 0, -0.793353f },
	{ 0.793353f, 0, -0.608762f },
	{ 0.923879f, 0, -0.382684f },
	{ 0.382684f, 0, -0.923879f },
	{ -0.130526f, 0, -0.9914449f },
	{ 0.130527f, 0, -0.9914449f },
	{ 0.9914449f, 0, -0.130526f },
	{ 0.9914449f, 0, 0.130527f },
	{ 0.923879f, 0, 0.382684f },
	{ -0.382684f, 0, -0.923879f },
	{ 0.793353f, 0, 0.608761f },
	{ 0.608762f, 0, 0.793353f },
	{ 0.382684f, 0, 0.923879f },
	{ -0.608762f, 0, -0.793353f },
	{ 0.130526f, 0, 0.9914449f },
	{ -0.130527f, 0, 0.9914449f },
	{ -0.793353f, 0, -0.608761f },
	{ -0.382684f, 0, 0.923879f },
	{ -0.608761f, 0, 0.793353f },
	{ -0.923879f, 0, -0.382684f },
	{ -0.793353f, 0, 0.608762f },
	{ -0.923879f, 0, 0.382684f },
	{ -0.9914449f, 0, -0.130527f },
	{ -0.9914449f, 0, 0.130526f },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000BCC00 = { vertex_000BB7C0, normal_000BC1E0, LengthOfArray<Sint32>(vertex_000BB7C0), meshlist_000BB778, matlist_000BA8D4, LengthOfArray<Uint16>(meshlist_000BB778), LengthOfArray<Uint16>(matlist_000BA8D4), { 0, 1, 0 }, 395.6067f, NULL };
extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000BCC00_2 = { vertex_000BB7C0, normal_000BC1E0, LengthOfArray<Sint32>(vertex_000BB7C0), meshlist_000BB778_2, matlist_000BA8D4, LengthOfArray<Uint16>(meshlist_000BB778_2), LengthOfArray<Uint16>(matlist_000BA8D4), { 0, 1, 0 }, 395.6067f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000BCC28 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000BCC00, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000BCC28_2 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000BCC00_2, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000BCC5C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000BCCE8[] = {
	6, 22, 1, 23, 2, 0, 3,
	6, 0, 21, 23, 20, 22, 19,
	6, 10, 13, 11, 14, 12, 15,
	3, 19, 20, 13,
	0x8000u | 5, 13, 14, 20, 15, 21,
	6, 12, 9, 11, 8, 10, 7,
	0x8000u | 6, 16, 5, 6, 34, 40, 43,
	0x8000u | 6, 40, 37, 6, 4, 16, 17,
	6, 59, 18, 25, 61, 24, 65,
	3, 45, 46, 58,
	3, 48, 51, 49,
	0x8000u | 6, 49, 52, 51, 58, 57, 45,
	8, 46, 47, 58, 44, 52, 53, 49, 50,
	6, 63, 59, 62, 25, 60, 24
};

extern "C" __declspec(dllexport) Sint16 poly_000BCD9C[] = {
	0x8000u | 6, 3, 9, 2, 8, 1, 7,
	6, 31, 17, 27, 16, 28, 5,
	6, 28, 65, 27, 61, 31, 18,
	6, 64, 43, 66, 40, 67, 37,
	6, 67, 63, 66, 62, 64, 60
};

extern "C" __declspec(dllexport) Sint16 poly_000BCDE2[] = {
	0x8000u | 6, 3, 0, 9, 21, 12, 15,
	6, 4, 17, 37, 26, 67, 63,
	6, 17, 31, 26, 18, 63, 59
};

extern "C" __declspec(dllexport) Sint16 poly_000BCE0C[] = {
	8, 42, 29, 36, 38, 33, 35, 39, 41,
	0x8000u | 5, 49, 48, 55, 54, 45,
	3, 55, 46, 45,
	6, 49, 50, 55, 56, 46, 47
};

extern "C" __declspec(dllexport) Sint16 poly_000BCE40[] = {
	6, 39, 41, 30, 32, 42, 29
};

extern "C" __declspec(dllexport) Sint16 poly_000BCE4E[] = {
	0x8000u | 5, 41, 32, 35, 29, 38
};

extern "C" __declspec(dllexport) Sint16 poly_000BCE5A[] = {
	0x8000u | 5, 56, 47, 50, 44, 53
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BCE68[] = {
	{ 288, 255 },
	{ 510, 255 },
	{ 298, 152 },
	{ 510, 144 },
	{ 288, 0 },
	{ 510, 0 },
	{ 288, 0 },
	{ 0 },
	{ 298, 152 },
	{ 0, 157 },
	{ 288, 255 },
	{ 0, 255 },
	{ 294, 255 },
	{ 510, 255 },
	{ 290, 109 },
	{ 510, 140 },
	{ 322, 0 },
	{ 510, 0 },
	{ 510, 255 },
	{ 510, 157 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, 140 },
	{ 510, 157 },
	{ 0 },
	{ 510, 0 },
	{ 322, 0 },
	{ 0 },
	{ 290, 109 },
	{ 0, 115 },
	{ 294, 255 },
	{ 0, 255 },
	{ 765, 112 },
	{ 765, 255 },
	{ 422, 128 },
	{ 424, 255 },
	{ 0, 132 },
	{ 0, 255 },
	{ 0, 132 },
	{ 0 },
	{ 422, 128 },
	{ 444, 0 },
	{ 765, 112 },
	{ 765, 0 },
	{ 233, 0 },
	{ 0 },
	{ 292, 128 },
	{ 0, 119 },
	{ 278, 254 },
	{ 0, 255 },
	{ 510, 255 },
	{ 510, 71 },
	{ 400, 85 },
	{ 0, 255 },
	{ 155, 255 },
	{ 0, 93 },
	{ 0, 93 },
	{ 152, 96 },
	{ 155, 255 },
	{ 400, 85 },
	{ 406, 255 },
	{ 510, 255 },
	{ 510, 71 },
	{ 510, 0 },
	{ 400, 85 },
	{ 400, 0 },
	{ 152, 96 },
	{ 150, 0 },
	{ 0, 93 },
	{ 0 },
	{ 510, 0 },
	{ 233, 0 },
	{ 510, 123 },
	{ 292, 128 },
	{ 510, 254 },
	{ 278, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BCF98[] = {
	{ 0 },
	{ 510, 0 },
	{ 0, 144 },
	{ 510, 115 },
	{ 0, 255 },
	{ 510, 255 },
	{ 225, 0 },
	{ 0 },
	{ 238, 123 },
	{ 0, 112 },
	{ 232, 255 },
	{ 0, 255 },
	{ 232, 255 },
	{ 510, 255 },
	{ 238, 123 },
	{ 510, 119 },
	{ 225, 0 },
	{ 510, 0 },
	{ 278, 255 },
	{ 510, 255 },
	{ 260, 118 },
	{ 510, 132 },
	{ 231, 0 },
	{ 510, 0 },
	{ 231, 0 },
	{ 0 },
	{ 260, 118 },
	{ 0, 123 },
	{ 278, 255 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BD010[] = {
	{ 510, 255 },
	{ 510, -255 },
	{ 191, 255 },
	{ 310, -255 },
	{ 0, 254 },
	{ 0, -255 },
	{ 510, 255 },
	{ 276, 255 },
	{ 510, 13 },
	{ 270, -10 },
	{ 510, -255 },
	{ 245, -255 },
	{ 276, 255 },
	{ 0, 255 },
	{ 270, -10 },
	{ 0, -50 },
	{ 245, -255 },
	{ 0, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BD058[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 138, 255 },
	{ 145, 0 },
	{ 87, 255 },
	{ 91, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 93 },
	{ 255, 255 },
	{ 156, 82 },
	{ 157, 255 },
	{ 0, 255 },
	{ 156, 82 },
	{ 0, 90 },
	{ 0, 255 },
	{ 255, 93 },
	{ 255, 0 },
	{ 156, 82 },
	{ 149, 0 },
	{ 0, 90 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BD0B0[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 64, 255 },
	{ 69, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BD0C8[] = {
	{ 508, 222 },
	{ 294, 0 },
	{ 210, 255 },
	{ 133, 5 },
	{ 0, 186 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BD0DC[] = {
	{ 0, 81 },
	{ 178, 255 },
	{ 85, 0 },
	{ 255, 212 },
	{ 203, 33 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000BD0F0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 14, poly_000BCCE8, NULL, NULL, NULL, uv_000BCE68, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 5, poly_000BCD9C, NULL, NULL, NULL, uv_000BCF98, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_000BCDE2, NULL, NULL, NULL, uv_000BD010, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, poly_000BCE0C, NULL, NULL, NULL, uv_000BD058, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_000BCE40, NULL, NULL, NULL, uv_000BD0B0, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_000BCE4E, NULL, NULL, NULL, uv_000BD0C8, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 1, poly_000BCE5A, NULL, NULL, NULL, uv_000BD0DC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000BD198[] = {
	{ 177.2555f, 121.6647f, 100.4491f },
	{ 179.1692f, 39.58726f, 135.2497f },
	{ 183.9464f, 77.91336f, 129.2722f },
	{ 190.7738f, 112.7942f, 111.6072f },
	{ 14.13949f, 66.64335f, -26.53776f },
	{ 11.80052f, 1.492054f, -70.13705f },
	{ 34.95483f, 48.03833f, -42.75929f },
	{ 248.9225f, 38.93213f, 76.68697f },
	{ 240.7698f, 73.70866f, 79.25157f },
	{ 224.4297f, 98.63943f, 79.79528f },
	{ 233.4461f, 38.59433f, 26.88908f },
	{ 229.2919f, 78.63306f, 37.26173f },
	{ 217.3309f, 103.0237f, 52.5518f },
	{ 204.0591f, 41.45651f, 3.013991f },
	{ 203.8488f, 76.2616f, 16.74628f },
	{ 202.607f, 109.8213f, 47.87017f },
	{ 8.381557f, 38.79776f, -55.39632f },
	{ 2.042828f, 62.09228f, -34.61919f },
	{ -21.68743f, 52.61628f, -5.657203f },
	{ 154.0539f, 36.35189f, 55.21112f },
	{ 160.1051f, 74.84009f, 62.45652f },
	{ 178.836f, 121.2518f, 76.30491f },
	{ 157.0077f, 34.65518f, 105.072f },
	{ 161.1167f, 75.79362f, 107.4752f },
	{ -51.15776f, 2.633881f, 44.76159f },
	{ -39.77657f, 34.90958f, 31.41266f },
	{ -1.454434f, 66.37352f, -6.512011f },
	{ -27.62723f, 29.83595f, -46.96044f },
	{ -35.90696f, -5.360387f, -58.92682f },
	{ -123.5732f, 22.30304f, 85.82016f },
	{ -122.5997f, -0.1976f, 113.9487f },
	{ -12.10189f, 54.72674f, -26.16541f },
	{ -116.1583f, 20.17166f, 94.73077f },
	{ -72.27035f, -1.61993f, 27.74115f },
	{ 45.17627f, 19.01082f, -49.80036f },
	{ -83.86103f, 25.81795f, 53.53479f },
	{ -102.8269f, -8.074846f, 30.16568f },
	{ 19.58668f, 70.63347f, -6.491525f },
	{ -104.3576f, 23.78673f, 52.80994f },
	{ -60.22094f, 9.104737f, 79.00883f },
	{ 45.4498f, 54.66444f, -6.758902f },
	{ -73.35457f, 20.32592f, 73.31039f },
	{ -135.6534f, -4.516462f, 94.01292f },
	{ 63.75944f, 33.72271f, -1.695309f },
	{ 26.80793f, 59.94754f, -109.8576f },
	{ 60.53845f, 35.65619f, -123.0364f },
	{ 41.55524f, 59.11486f, -121.5861f },
	{ 30.23041f, 61.85564f, -120.1156f },
	{ 0.924713f, 6.166135f, -132.67f },
	{ -7.079921f, 34.91957f, -128.9019f },
	{ -4.046315f, 51.64307f, -124.8831f },
	{ 15.90209f, 8.223477f, -107.1894f },
	{ 6.800485f, 35.16285f, -109.2337f },
	{ 2.99295f, 52.08425f, -111.4854f },
	{ 17.70905f, 20.65699f, -163.1227f },
	{ 6.772676f, 46.66518f, -149.8963f },
	{ 4.089434f, 53.82436f, -137.2162f },
	{ 58.58411f, 29.01938f, -104.5186f },
	{ 40.81362f, 54.47769f, -105.1603f },
	{ -19.91422f, 56.82899f, 8.861148f },
	{ -21.01624f, 15.91785f, 73.02084f },
	{ -44.38425f, 28.19017f, -7.06347f },
	{ -17.2402f, 44.50657f, 46.97464f },
	{ -8.301044f, 66.1816f, 19.05016f },
	{ 35.015f, 31.45564f, 43.64019f },
	{ -61.45484f, -5.873169f, -5.625897f },
	{ 22.49146f, 53.6991f, 29.19411f },
	{ 10.16777f, 70.60352f, 14.96117f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000BD4C8[] = {
	{ -0.375557f, 0.873397f, 0.310054f },
	{ -0.153475f, 0.190802f, 0.969557f },
	{ 0.010479f, 0.335456f, 0.9419979f },
	{ 0.23055f, 0.725296f, 0.648685f },
	{ 0.122968f, 0.918134f, -0.376709f },
	{ -0.037466f, 0.386515f, -0.921522f },
	{ 0.5175689f, 0.587189f, -0.62236f },
	{ 0.962146f, 0.142601f, 0.232249f },
	{ 0.921833f, 0.275662f, 0.27246f },
	{ 0.748827f, 0.623502f, 0.224729f },
	{ 0.798474f, 0.248329f, -0.548427f },
	{ 0.764076f, 0.419758f, -0.489888f },
	{ 0.607489f, 0.7407899f, -0.286683f },
	{ -0.052365f, 0.359589f, -0.93164f },
	{ -0.068624f, 0.473529f, -0.878101f },
	{ 0.0029f, 0.8431309f, -0.5377f },
	{ -0.040322f, 0.555277f, -0.830688f },
	{ -0.234085f, 0.833617f, -0.500287f },
	{ -0.665448f, 0.7286479f, -0.162021f },
	{ -0.915818f, 0.189775f, -0.353926f },
	{ -0.892302f, 0.292165f, -0.344147f },
	{ -0.381842f, 0.903381f, -0.195192f },
	{ -0.934045f, 0.147751f, 0.32516f },
	{ -0.882009f, 0.284907f, 0.375352f },
	{ -0.828321f, 0.470929f, 0.303498f },
	{ -0.781263f, 0.56741f, 0.260141f },
	{ -0.382283f, 0.9129699f, -0.142635f },
	{ -0.595445f, 0.543697f, -0.591471f },
	{ -0.6124099f, 0.41747f, -0.671322f },
	{ -0.65097f, 0.758971f, -0.014191f },
	{ -0.375042f, 0.681042f, 0.628907f },
	{ -0.565659f, 0.758959f, -0.322508f },
	{ -0.154435f, 0.832408f, 0.532209f },
	{ 0.170178f, 0.697207f, -0.696377f },
	{ 0.560185f, 0.405287f, -0.722451f },
	{ 0.22635f, 0.906124f, -0.357357f },
	{ -0.488585f, 0.507356f, -0.709842f },
	{ 0.23155f, 0.972107f, -0.037312f },
	{ -0.475368f, 0.7455119f, -0.467159f },
	{ 0.623312f, 0.7465129f, 0.232808f },
	{ 0.704039f, 0.710112f, -0.008359999f },
	{ 0.495191f, 0.842668f, 0.211414f },
	{ -0.892629f, 0.45077f, 0.004512f },
	{ 0.814232f, 0.580047f, 0.023917f },
	{ -0.132529f, 0.777123f, 0.615236f },
	{ 0.728165f, 0.6481619f, -0.222849f },
	{ 0.503252f, 0.83337f, -0.228542f },
	{ 0.038321f, 0.993629f, -0.10599f },
	{ -0.972394f, -0.233265f, 0.006173f },
	{ -0.997716f, -0.06650899f, 0.011801f },
	{ -0.8290859f, 0.544494f, 0.127052f },
	{ -0.510313f, -0.132935f, 0.849652f },
	{ -0.537755f, -0.056432f, 0.841211f },
	{ -0.55976f, 0.48854f, 0.6693259f },
	{ -0.286001f, 0.228209f, -0.930658f },
	{ -0.348172f, 0.454923f, -0.819647f },
	{ -0.470413f, 0.79194f, -0.389284f },
	{ 0.406323f, 0.376313f, 0.8326409f },
	{ 0.310382f, 0.546049f, 0.7781349f },
	{ -0.659692f, 0.7512169f, 0.021908f },
	{ -0.342424f, 0.645206f, 0.6829759f },
	{ -0.8427849f, 0.516302f, -0.152137f },
	{ -0.276222f, 0.7057059f, 0.652442f },
	{ -0.31785f, 0.886362f, 0.336652f },
	{ 0.418638f, 0.654825f, 0.629243f },
	{ -0.907906f, 0.395291f, -0.139466f },
	{ 0.387139f, 0.716429f, 0.58039f },
	{ 0.128002f, 0.940766f, 0.313967f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000BD7F8 = { vertex_000BD198, normal_000BD4C8, LengthOfArray<Sint32>(vertex_000BD198), meshlist_000BD0F0, matlist_000BCC5C, LengthOfArray<Uint16>(meshlist_000BD0F0), LengthOfArray<Uint16>(matlist_000BCC5C), { 56.63453f, 56.79491f, -13.93651f }, 227.6982f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000BD820 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000BD7F8, -311.0712f, -41.28561f, 592.455f, 0, 0x53AF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000BD854[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000BD8E0[] = {
	6, 22, 1, 23, 2, 0, 3,
	6, 0, 21, 23, 20, 22, 19,
	6, 10, 13, 11, 14, 12, 15,
	3, 19, 20, 13,
	0x8000u | 5, 13, 14, 20, 15, 21,
	6, 12, 9, 11, 8, 10, 7,
	0x8000u | 6, 16, 5, 6, 34, 40, 43,
	0x8000u | 6, 40, 37, 6, 4, 16, 17,
	0x8000u | 6, 61, 18, 25, 59, 62, 63,
	6, 39, 41, 30, 32, 42, 29,
	0x8000u | 6, 62, 60, 25, 24, 61, 65
};

extern "C" __declspec(dllexport) Sint16 poly_000BD972[] = {
	0x8000u | 6, 7, 1, 8, 2, 9, 3,
	6, 31, 17, 27, 16, 28, 5,
	6, 28, 65, 27, 61, 31, 18,
	0x8000u | 6, 37, 40, 67, 66, 63, 62,
	0x8000u | 6, 40, 43, 66, 64, 62, 60,
	8, 41, 39, 35, 33, 38, 36, 29, 42
};

extern "C" __declspec(dllexport) Sint16 poly_000BD9CA[] = {
	0x8000u | 6, 3, 0, 9, 21, 12, 15,
	0x8000u | 5, 41, 32, 35, 29, 38
};

extern "C" __declspec(dllexport) Sint16 poly_000BD9E4[] = {
	0x8000u | 6, 37, 67, 26, 63, 18, 59,
	0x8000u | 6, 18, 31, 26, 17, 37, 4
};

extern "C" __declspec(dllexport) Sint16 poly_000BDA00[] = {
	0x8000u | 5, 49, 48, 55, 54, 45,
	3, 55, 46, 45,
	6, 49, 50, 55, 56, 46, 47
};

extern "C" __declspec(dllexport) Sint16 poly_000BDA22[] = {
	3, 45, 46, 58,
	3, 48, 51, 49,
	0x8000u | 8, 50, 53, 49, 52, 51, 58, 57, 45,
	6, 46, 47, 58, 44, 52, 53
};

extern "C" __declspec(dllexport) Sint16 poly_000BDA52[] = {
	0x8000u | 5, 56, 47, 50, 44, 53
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BDA60[] = {
	{ 288, 255 },
	{ 510, 255 },
	{ 298, 152 },
	{ 510, 144 },
	{ 288, 0 },
	{ 510, 0 },
	{ 288, 0 },
	{ 0 },
	{ 298, 152 },
	{ 0, 157 },
	{ 288, 255 },
	{ 0, 255 },
	{ 294, 255 },
	{ 510, 255 },
	{ 290, 109 },
	{ 510, 140 },
	{ 322, 0 },
	{ 510, 0 },
	{ 510, 255 },
	{ 510, 157 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, 140 },
	{ 510, 157 },
	{ 0 },
	{ 510, 0 },
	{ 322, 0 },
	{ 0 },
	{ 290, 109 },
	{ 0, 115 },
	{ 294, 255 },
	{ 0, 255 },
	{ 510, 112 },
	{ 510, 255 },
	{ 280, 128 },
	{ 282, 255 },
	{ 0, 132 },
	{ 0, 255 },
	{ 0, 132 },
	{ 0 },
	{ 280, 128 },
	{ 296, 0 },
	{ 510, 112 },
	{ 510, 0 },
	{ 0, 119 },
	{ 0 },
	{ 292, 128 },
	{ 233, 0 },
	{ 510, 123 },
	{ 510, 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 128, 255 },
	{ 138, 0 },
	{ 0, 255 },
	{ 0 },
	{ 510, 123 },
	{ 510, 254 },
	{ 292, 128 },
	{ 278, 254 },
	{ 0, 119 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BDB58[] = {
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 115 },
	{ 0, 144 },
	{ 510, 0 },
	{ 0 },
	{ 225, 0 },
	{ 0 },
	{ 238, 123 },
	{ 0, 112 },
	{ 232, 255 },
	{ 0, 255 },
	{ 232, 255 },
	{ 510, 255 },
	{ 238, 123 },
	{ 510, 119 },
	{ 225, 0 },
	{ 510, 0 },
	{ 510, 0 },
	{ 510, 132 },
	{ 231, 0 },
	{ 260, 118 },
	{ 0 },
	{ 0, 123 },
	{ 510, 132 },
	{ 510, 255 },
	{ 260, 118 },
	{ 278, 255 },
	{ 0, 123 },
	{ 0, 254 },
	{ 0 },
	{ 0, 255 },
	{ 182, 0 },
	{ 175, 255 },
	{ 290, 0 },
	{ 276, 255 },
	{ 510, 0 },
	{ 510, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BDBF0[] = {
	{ 510, 255 },
	{ 510, 0 },
	{ 191, 255 },
	{ 310, 0 },
	{ 0, 254 },
	{ 0 },
	{ 402, 244 },
	{ 521, 39 },
	{ 136, 188 },
	{ 416, -13 },
	{ 36, 105 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BDC1C[] = {
	{ 510, 13 },
	{ 510, -255 },
	{ 270, -10 },
	{ 245, -255 },
	{ 0, -50 },
	{ 0, -255 },
	{ 0, -50 },
	{ 0, 255 },
	{ 270, -10 },
	{ 276, 255 },
	{ 510, 13 },
	{ 510, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BDC4C[] = {
	{ 255, 93 },
	{ 255, 255 },
	{ 156, 82 },
	{ 157, 255 },
	{ 0, 255 },
	{ 156, 82 },
	{ 0, 90 },
	{ 0, 255 },
	{ 255, 93 },
	{ 255, 0 },
	{ 156, 82 },
	{ 149, 0 },
	{ 0, 90 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BDC84[] = {
	{ 255, 255 },
	{ 255, 71 },
	{ 200, 85 },
	{ 0, 255 },
	{ 77, 255 },
	{ 0, 93 },
	{ 0 },
	{ 75, 0 },
	{ 0, 93 },
	{ 76, 96 },
	{ 77, 255 },
	{ 200, 85 },
	{ 203, 255 },
	{ 255, 255 },
	{ 255, 71 },
	{ 255, 0 },
	{ 200, 85 },
	{ 200, 0 },
	{ 76, 96 },
	{ 75, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BDCD4[] = {
	{ 0, 76 },
	{ 177, 255 },
	{ 87, 0 },
	{ 255, 213 },
	{ 205, 31 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000BDCE8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 11, poly_000BD8E0, NULL, NULL, NULL, uv_000BDA60, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_000BD972, NULL, NULL, NULL, uv_000BDB58, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_000BD9CA, NULL, NULL, NULL, uv_000BDBF0, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_000BD9E4, NULL, NULL, NULL, uv_000BDC1C, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 3, poly_000BDA00, NULL, NULL, NULL, uv_000BDC4C, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 4, poly_000BDA22, NULL, NULL, NULL, uv_000BDC84, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 1, poly_000BDA52, NULL, NULL, NULL, uv_000BDCD4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000BDD90[] = {
	{ 177.4366f, 45.6506f, -137.437f },
	{ 180.0897f, -3.671082f, -176.1707f },
	{ 174.0882f, 20.87201f, -167.1058f },
	{ 164.1693f, 40.38195f, -144.4492f },
	{ -161.4276f, 2.912338f, -106.5911f },
	{ -215.6926f, -48.42213f, -130.4897f },
	{ -167.6969f, -13.62154f, -132.9695f },
	{ 120.5378f, 5.180908f, -131.4847f },
	{ 129.4106f, 27.48611f, -126.2997f },
	{ 146.0854f, 41.46835f, -120.3304f },
	{ 130.9814f, 0.556488f, -81.71579f },
	{ 136.7262f, 29.68854f, -83.47738f },
	{ 150.4979f, 46.18849f, -92.41279f },
	{ 157.8815f, -2.308807f, -55.28613f },
	{ 159.959f, 22.48892f, -61.73784f },
	{ 164.7681f, 51.44994f, -85.30482f },
	{ -195.1786f, -15.73878f, -119.015f },
	{ -175.8332f, 2.633297f, -101.616f },
	{ -169.7533f, -0.185951f, -65.35228f },
	{ 196.331f, -11.38596f, -111.5163f },
	{ 191.5894f, 15.95828f, -111.4975f },
	{ 175.1911f, 51.53378f, -114.9526f },
	{ 198.2947f, -9.127533f, -160.9688f },
	{ 195.044f, 19.79608f, -155.5166f },
	{ -162.443f, -49.81496f, -11.77033f },
	{ -156.6942f, -17.80028f, -28.84243f },
	{ -154.8953f, 14.59469f, -82.17324f },
	{ -211.6814f, -19.98429f, -84.98939f },
	{ -236.0376f, -49.26133f, -85.38975f },
	{ 32.67629f, -9.087277f, 67.18637f },
	{ 51.22766f, -35.80306f, 79.48528f },
	{ -179.5022f, -3.938404f, -85.21044f },
	{ 46.16342f, -13.25522f, 63.61271f },
	{ 50.67379f, -17.83766f, -11.51235f },
	{ -175.9799f, -41.44459f, -145.3759f },
	{ 51.2889f, 3.766541f, 21.4327f },
	{ 25.68615f, -31.12985f, 3.631917f },
	{ -141.7319f, 20.95578f, -99.1282f },
	{ 33.22695f, -3.238831f, 30.00412f },
	{ 87.89133f, -17.47844f, 21.9511f },
	{ -132.0841f, 1.224251f, -120.1418f },
	{ 72.98792f, -0.6948529f, 25.14119f },
	{ 27.8969f, -37.31233f, 74.94552f },
	{ -124.0762f, -23.20486f, -131.9116f },
	{ 115.8704f, 34.70901f, -27.44578f },
	{ 135.9611f, -3.2771f, -38.843f },
	{ 128.5619f, 26.01407f, -39.08397f },
	{ 119.4663f, 33.33423f, -37.81444f },
	{ 69.21865f, -4.658325f, -46.33023f },
	{ 74.07043f, 24.98352f, -44.64024f },
	{ 83.93018f, 39.12371f, -41.83495f },
	{ 84.44669f, -7.401062f, -21.06361f },
	{ 87.36961f, 20.67718f, -25.04057f },
	{ 90.9105f, 37.45126f, -28.50364f },
	{ 89.59525f, -0.549652f, -77.74641f },
	{ 90.92306f, 28.45094f, -66.42532f },
	{ 91.85793f, 36.88739f, -54.29306f },
	{ 131.9725f, -6.26059f, -19.8957f },
	{ 126.4466f, 24.19739f, -22.36717f },
	{ -156.3216f, 5.042107f, -58.19598f },
	{ -119.7167f, -50.21181f, -19.36317f },
	{ -190.9165f, -19.17695f, -47.88176f },
	{ -129.1339f, -17.33419f, -37.81185f },
	{ -139.1383f, 8.48495f, -61.53478f },
	{ -106.0776f, -33.18647f, -81.92124f },
	{ -209.5799f, -49.04076f, -33.26624f },
	{ -117.6548f, -6.282017f, -80.36599f },
	{ -130.543f, 15.43875f, -78.84583f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000BE0C0[] = {
	{ 0.375939f, 0.890774f, -0.255325f },
	{ 0.133774f, 0.430184f, -0.892775f },
	{ -0.120836f, 0.575574f, -0.808773f },
	{ -0.295091f, 0.812718f, -0.5024059f },
	{ -0.388395f, 0.796872f, -0.462756f },
	{ -0.620834f, 0.597486f, -0.507518f },
	{ -0.169123f, 0.613264f, -0.77156f },
	{ -0.902774f, 0.266774f, -0.337388f },
	{ -0.8608969f, 0.43392f, -0.26565f },
	{ -0.575497f, 0.7912689f, -0.206633f },
	{ -0.8408329f, 0.233816f, 0.488191f },
	{ -0.766706f, 0.458138f, 0.449747f },
	{ -0.532239f, 0.8154449f, 0.227532f },
	{ 0.179445f, 0.264649f, 0.947502f },
	{ 0.152439f, 0.447785f, 0.8810509f },
	{ 0.194661f, 0.866414f, 0.459819f },
	{ -0.503326f, 0.735682f, -0.453249f },
	{ -0.465958f, 0.855638f, -0.225316f },
	{ -0.500874f, 0.80805f, 0.310129f },
	{ 0.952043f, 0.106491f, 0.286836f },
	{ 0.917972f, 0.283199f, 0.277714f },
	{ 0.389112f, 0.919803f, 0.05054f },
	{ 0.886163f, 0.283203f, -0.366757f },
	{ 0.779229f, 0.507026f, -0.368412f },
	{ -0.121147f, 0.526661f, 0.841399f },
	{ -0.103534f, 0.62335f, 0.775058f },
	{ -0.418487f, 0.906824f, 0.050391f },
	{ -0.669298f, 0.740065f, 0.065911f },
	{ -0.758818f, 0.650705f, 0.027892f },
	{ -0.577166f, 0.6230209f, 0.527944f },
	{ 0.169762f, 0.5066749f, 0.845258f },
	{ -0.542424f, 0.82913f, 0.135348f },
	{ 0.266783f, 0.680513f, 0.682443f },
	{ -0.206284f, 0.787326f, -0.581003f },
	{ -0.227782f, 0.484975f, -0.8443429f },
	{ -0.02814f, 0.983497f, -0.178724f },
	{ -0.814545f, 0.508418f, -0.279334f },
	{ 0.08456299f, 0.964105f, -0.251694f },
	{ -0.734708f, 0.674531f, -0.072192f },
	{ 0.688088f, 0.7235759f, 0.054518f },
	{ 0.423721f, 0.706347f, -0.56704f },
	{ 0.5784979f, 0.813503f, 0.0596f },
	{ -0.6925319f, 0.384799f, 0.610187f },
	{ 0.555114f, 0.446196f, -0.7019669f },
	{ 0.237171f, 0.804832f, 0.544054f },
	{ 0.922471f, 0.266471f, -0.279358f },
	{ 0.801676f, 0.5176859f, -0.298858f },
	{ 0.467554f, 0.863091f, -0.190963f },
	{ -0.9802859f, 0.196246f, 0.022937f },
	{ -0.933475f, 0.35826f, 0.016556f },
	{ -0.512017f, 0.855029f, 0.08224799f },
	{ -0.493354f, 0.148758f, 0.8570139f },
	{ -0.486581f, 0.228992f, 0.843091f },
	{ -0.284161f, 0.720597f, 0.632449f },
	{ -0.184439f, 0.266386f, -0.946055f },
	{ -0.148075f, 0.50783f, -0.848636f },
	{ -0.090679f, 0.889259f, -0.448325f },
	{ 0.5684699f, 0.228448f, 0.79035f },
	{ 0.537774f, 0.425643f, 0.727755f },
	{ -0.26647f, 0.845248f, 0.463195f },
	{ 0.513371f, 0.507792f, 0.691808f },
	{ -0.533385f, 0.670657f, 0.51548f },
	{ 0.557331f, 0.553521f, 0.618867f },
	{ 0.284861f, 0.820926f, 0.494909f },
	{ 0.915958f, 0.39531f, 0.068921f },
	{ -0.57593f, 0.575449f, 0.5806569f },
	{ 0.881329f, 0.467595f, 0.06793199f },
	{ 0.533189f, 0.824643f, 0.188876f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000BE3F0 = { vertex_000BDD90, normal_000BE0C0, LengthOfArray<Sint32>(vertex_000BDD90), meshlist_000BDCE8, matlist_000BD854, LengthOfArray<Uint16>(meshlist_000BDCE8), LengthOfArray<Uint16>(matlist_000BD854), { -18.87146f, 0.660984f, -48.34272f }, 261.3925f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000BE418 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000BE3F0, 521.9288f, 47.71439f, 347.4551f, 0, 0xFFFFE9D6, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000BE44C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000BE4D8[] = {
	6, 3, 0, 2, 23, 1, 22,
	6, 0, 21, 23, 20, 22, 19,
	6, 10, 13, 11, 14, 12, 15,
	3, 19, 20, 13,
	0x8000u | 5, 13, 14, 20, 15, 21,
	6, 7, 10, 8, 11, 9, 12,
	6, 34, 5, 6, 16, 4, 17,
	6, 4, 37, 6, 40, 34, 43,
	6, 59, 18, 25, 61, 24, 65,
	6, 63, 59, 62, 25, 60, 24
};

extern "C" __declspec(dllexport) Sint16 poly_000BE55C[] = {
	0x8000u | 6, 3, 9, 2, 8, 1, 7,
	6, 31, 17, 27, 16, 28, 5,
	6, 28, 65, 27, 61, 31, 18,
	6, 64, 43, 66, 40, 67, 37,
	6, 67, 63, 66, 62, 64, 60
};

extern "C" __declspec(dllexport) Sint16 poly_000BE5A2[] = {
	0x8000u | 6, 15, 12, 21, 9, 0, 3,
	0x8000u | 6, 59, 18, 63, 26, 67, 37,
	0x8000u | 6, 18, 31, 26, 17, 37, 4
};

extern "C" __declspec(dllexport) Sint16 poly_000BE5CC[] = {
	8, 41, 39, 35, 33, 38, 36, 29, 42,
	0x8000u | 5, 49, 48, 55, 54, 45,
	3, 55, 46, 45,
	6, 49, 50, 55, 56, 46, 47
};

extern "C" __declspec(dllexport) Sint16 poly_000BE600[] = {
	6, 39, 41, 30, 32, 42, 29,
	3, 45, 46, 58,
	3, 48, 51, 49,
	0x8000u | 8, 50, 53, 49, 52, 51, 58, 57, 45,
	6, 46, 47, 58, 44, 52, 53
};

extern "C" __declspec(dllexport) Sint16 poly_000BE63E[] = {
	0x8000u | 5, 41, 32, 35, 29, 38
};

extern "C" __declspec(dllexport) Sint16 poly_000BE64A[] = {
	0x8000u | 5, 56, 47, 50, 44, 53
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BE658[] = {
	{ 510, 0 },
	{ 288, 0 },
	{ 510, 144 },
	{ 298, 152 },
	{ 510, 255 },
	{ 288, 255 },
	{ 288, 0 },
	{ 0 },
	{ 298, 152 },
	{ 0, 157 },
	{ 288, 255 },
	{ 0, 255 },
	{ 294, 255 },
	{ 510, 255 },
	{ 290, 109 },
	{ 510, 140 },
	{ 322, 0 },
	{ 510, 0 },
	{ 510, 255 },
	{ 510, 157 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, 140 },
	{ 510, 157 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 294, 255 },
	{ 0, 115 },
	{ 290, 109 },
	{ 0 },
	{ 322, 0 },
	{ 282, 255 },
	{ 510, 255 },
	{ 280, 128 },
	{ 510, 112 },
	{ 296, 0 },
	{ 510, 0 },
	{ 296, 0 },
	{ 0 },
	{ 280, 128 },
	{ 0, 132 },
	{ 282, 255 },
	{ 0, 255 },
	{ 233, 0 },
	{ 0 },
	{ 292, 128 },
	{ 0, 119 },
	{ 278, 254 },
	{ 0, 255 },
	{ 510, 0 },
	{ 233, 0 },
	{ 510, 123 },
	{ 292, 128 },
	{ 510, 254 },
	{ 278, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BE738[] = {
	{ 0 },
	{ 510, 0 },
	{ 0, 144 },
	{ 510, 115 },
	{ 0, 255 },
	{ 510, 255 },
	{ 225, 0 },
	{ 0 },
	{ 238, 123 },
	{ 0, 112 },
	{ 232, 255 },
	{ 0, 255 },
	{ 232, 255 },
	{ 510, 255 },
	{ 238, 123 },
	{ 510, 119 },
	{ 225, 0 },
	{ 510, 0 },
	{ 278, 255 },
	{ 510, 255 },
	{ 260, 118 },
	{ 510, 132 },
	{ 231, 0 },
	{ 510, 0 },
	{ 231, 0 },
	{ 0 },
	{ 260, 118 },
	{ 0, 123 },
	{ 278, 255 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BE7B0[] = {
	{ 0, -255 },
	{ 0, 254 },
	{ 310, -255 },
	{ 191, 255 },
	{ 510, -255 },
	{ 510, 255 },
	{ 0, -255 },
	{ 0, -50 },
	{ 245, -255 },
	{ 270, -10 },
	{ 510, -255 },
	{ 510, 13 },
	{ 0, -50 },
	{ 0, 255 },
	{ 270, -10 },
	{ 276, 255 },
	{ 510, 13 },
	{ 510, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BE7F8[] = {
	{ 0 },
	{ 0, 255 },
	{ 91, 0 },
	{ 87, 255 },
	{ 145, 0 },
	{ 138, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 255, 93 },
	{ 255, 255 },
	{ 156, 82 },
	{ 157, 255 },
	{ 0, 255 },
	{ 156, 82 },
	{ 0, 90 },
	{ 0, 255 },
	{ 255, 93 },
	{ 255, 0 },
	{ 156, 82 },
	{ 149, 0 },
	{ 0, 90 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BE850[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 64, 255 },
	{ 69, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 71 },
	{ 200, 85 },
	{ 0, 255 },
	{ 77, 255 },
	{ 0, 93 },
	{ 0 },
	{ 75, 0 },
	{ 0, 93 },
	{ 76, 96 },
	{ 77, 255 },
	{ 200, 85 },
	{ 203, 255 },
	{ 255, 255 },
	{ 255, 71 },
	{ 255, 0 },
	{ 200, 85 },
	{ 200, 0 },
	{ 76, 96 },
	{ 75, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BE8B8[] = {
	{ 508, 222 },
	{ 294, 0 },
	{ 210, 255 },
	{ 133, 5 },
	{ 0, 186 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BE8CC[] = {
	{ 0, 81 },
	{ 178, 255 },
	{ 85, 0 },
	{ 255, 212 },
	{ 203, 33 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000BE8E0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 10, poly_000BE4D8, NULL, NULL, NULL, uv_000BE658, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 5, poly_000BE55C, NULL, NULL, NULL, uv_000BE738, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_000BE5A2, NULL, NULL, NULL, uv_000BE7B0, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, poly_000BE5CC, NULL, NULL, NULL, uv_000BE7F8, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 5, poly_000BE600, NULL, NULL, NULL, uv_000BE850, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_000BE63E, NULL, NULL, NULL, uv_000BE8B8, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 1, poly_000BE64A, NULL, NULL, NULL, uv_000BE8CC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000BE988[] = {
	{ 54.10191f, 141.3327f, -135.8821f },
	{ 100.067f, 68.47075f, -79.60388f },
	{ 86.32144f, 106.363f, -97.10413f },
	{ 69.8199f, 144.904f, -126.7201f },
	{ 11.41965f, 66.64335f, -27.81671f },
	{ 4.739939f, 1.492054f, -70.96472f },
	{ 30.51166f, 48.03833f, -46.03516f },
	{ 148.9958f, 97.85418f, -155.6434f },
	{ 126.5961f, 125.4808f, -159.8237f },
	{ 101.0507f, 140.7207f, -161.8277f },
	{ 131.3949f, 75.24766f, -199.2358f },
	{ 110.9297f, 111.4123f, -198.1243f },
	{ 90.82741f, 132.456f, -186.9521f },
	{ 102.233f, 57.85266f, -216.0904f },
	{ 87.89378f, 92.08964f, -211.3752f },
	{ 74.70869f, 130.1851f, -189.6641f },
	{ 2.809592f, 38.79776f, -55.95631f },
	{ -1.423337f, 62.09228f, -34.65019f },
	{ -22.14384f, 52.61628f, -3.463934f },
	{ 72.3461f, 34.05999f, -150.5194f },
	{ 61.40501f, 71.97448f, -154.1576f },
	{ 53.13617f, 135.0476f, -159.2348f },
	{ 80.54832f, 48.22483f, -103.2521f },
	{ 66.27864f, 86.17204f, -111.7028f },
	{ -46.43376f, 2.633881f, 49.64496f },
	{ -36.44202f, 34.90958f, 35.22655f },
	{ -2.097249f, 66.37352f, -6.334289f },
	{ -32.17719f, 29.83595f, -43.9679f },
	{ -41.61014f, -5.360387f, -55.04795f },
	{ -141.5702f, 16.43656f, 95.07836f },
	{ -139.3502f, -5.280049f, 122.9693f },
	{ -14.65348f, 54.72674f, -24.8266f },
	{ -133.4776f, 13.71597f, 103.2043f },
	{ -98.15986f, -10.6795f, 32.16808f },
	{ 39.97913f, 19.01082f, -54.06144f },
	{ -105.1207f, 17.33169f, 58.98994f },
	{ -128.7079f, -14.94791f, 37.6309f },
	{ 18.8408f, 70.63347f, -8.414392f },
	{ -125.6803f, 16.77806f, 60.31483f },
	{ -80.25357f, -0.215869f, 81.97676f },
	{ 44.54804f, 54.66444f, -11.2623f },
	{ -93.11984f, 10.95985f, 77.61788f },
	{ -154.6006f, -8.510195f, 104.4361f },
	{ 63.27171f, 33.72271f, -8.051808f },
	{ 13.51061f, 57.48208f, -125.5184f },
	{ 45.75703f, 30.63275f, -137.3835f },
	{ 27.01342f, 54.31004f, -138.2991f },
	{ 15.89195f, 57.47088f, -136.238f },
	{ -14.52063f, 0.968487f, -135.6796f },
	{ -22.10911f, 30.07168f, -136.3523f },
	{ -18.68947f, 47.18667f, -135.7101f },
	{ 2.925605f, 7.263908f, -112.5752f },
	{ -6.334617f, 33.56654f, -118.5055f },
	{ -10.34791f, 49.88152f, -123.3651f },
	{ -0.860162f, 9.500557f, -169.7334f },
	{ -10.42155f, 37.64008f, -160.3678f },
	{ -11.82556f, 46.99033f, -148.9731f },
	{ 45.66104f, 27.43677f, -117.8757f },
	{ 27.91526f, 52.68706f, -121.3164f },
	{ -18.93015f, 56.82899f, 10.80488f },
	{ -13.62175f, 15.91785f, 74.75408f },
	{ -44.86766f, 28.19017f, -2.597401f },
	{ -12.4647f, 44.50657f, 48.46104f },
	{ -6.357841f, 66.1816f, 19.78367f },
	{ 39.19659f, 31.45564f, 39.92672f },
	{ -61.70947f, -5.873169f, 0.537111f },
	{ 25.29349f, 53.6991f, 26.803f },
	{ 11.61052f, 70.60352f, 13.87141f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000BECB8[] = {
	{ -0.767994f, 0.6074589f, 0.202929f },
	{ -0.237218f, 0.357111f, 0.903438f },
	{ -0.047713f, 0.530419f, 0.846392f },
	{ -0.121121f, 0.882714f, 0.454034f },
	{ 0.08474699f, 0.918134f, -0.387103f },
	{ -0.129272f, 0.386515f, -0.913179f },
	{ 0.452854f, 0.587189f, -0.670918f },
	{ 0.816342f, 0.5764329f, 0.036198f },
	{ 0.725844f, 0.687856f, 0.002026f },
	{ 0.377649f, 0.922963f, -0.074304f },
	{ 0.547628f, 0.360243f, -0.755201f },
	{ 0.443468f, 0.514358f, -0.734011f },
	{ 0.157841f, 0.806488f, -0.569792f },
	{ -0.389614f, -0.038345f, -0.92018f },
	{ -0.384996f, 0.09430499f, -0.918088f },
	{ -0.48183f, 0.54972f, -0.682384f },
	{ -0.123046f, 0.555277f, -0.822513f },
	{ -0.282858f, 0.833617f, -0.47442f },
	{ -0.678298f, 0.7286479f, -0.094781f },
	{ -0.943011f, -0.311425f, -0.117238f },
	{ -0.955393f, -0.249076f, -0.1587f },
	{ -0.823254f, 0.498065f, -0.272367f },
	{ -0.873885f, -0.139598f, 0.465659f },
	{ -0.876624f, -0.03954f, 0.479548f },
	{ -0.793885f, 0.470929f, 0.384671f },
	{ -0.751391f, 0.56741f, 0.336833f },
	{ -0.394612f, 0.9129699f, -0.10376f },
	{ -0.651516f, 0.543697f, -0.529075f },
	{ -0.676367f, 0.41747f, -0.606833f },
	{ -0.588361f, 0.807338f, 0.045127f },
	{ -0.261052f, 0.7192619f, 0.643827f },
	{ -0.595029f, 0.758959f, -0.264428f },
	{ -0.042098f, 0.8465649f, 0.530618f },
	{ 0.137621f, 0.689499f, -0.711091f },
	{ 0.485266f, 0.405287f, -0.7747639f },
	{ 0.246972f, 0.891318f, -0.380206f },
	{ -0.514603f, 0.548218f, -0.659272f },
	{ 0.226668f, 0.972107f, -0.060241f },
	{ -0.462621f, 0.781759f, -0.418132f },
	{ 0.677554f, 0.719853f, 0.150773f },
	{ 0.699688f, 0.710112f, -0.078601f },
	{ 0.558354f, 0.816001f, 0.149609f },
	{ -0.8467399f, 0.5248269f, 0.087106f },
	{ 0.812552f, 0.580047f, -0.057486f },
	{ -0.07044999f, 0.8765309f, 0.476161f },
	{ 0.702282f, 0.584979f, -0.40571f },
	{ 0.477924f, 0.7702f, -0.422351f },
	{ 0.02755f, 0.95801f, -0.285409f },
	{ -0.96692f, -0.211018f, 0.143308f },
	{ -0.991554f, -0.045501f, 0.121451f },
	{ -0.812261f, 0.573147f, 0.108324f },
	{ -0.422945f, 0.029687f, 0.905669f },
	{ -0.451092f, 0.10394f, 0.886404f },
	{ -0.490146f, 0.609882f, 0.622737f },
	{ -0.377477f, 0.063852f, -0.923815f },
	{ -0.428256f, 0.307788f, -0.849625f },
	{ -0.506925f, 0.7182069f, -0.476661f },
	{ 0.487414f, 0.5112939f, 0.707818f },
	{ 0.386511f, 0.670293f, 0.633496f },
	{ -0.654209f, 0.7512169f, 0.08765399f },
	{ -0.272533f, 0.645206f, 0.713747f },
	{ -0.853762f, 0.516302f, -0.06724399f },
	{ -0.209711f, 0.7057059f, 0.676757f },
	{ -0.282655f, 0.886362f, 0.3667f },
	{ 0.479362f, 0.654825f, 0.584308f },
	{ -0.917294f, 0.395291f, -0.048135f },
	{ 0.443144f, 0.716429f, 0.538844f },
	{ 0.158705f, 0.940766f, 0.29962f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000BEFE8 = { vertex_000BE988, normal_000BECB8, LengthOfArray<Sint32>(vertex_000BE988), meshlist_000BE8E0, matlist_000BE44C, LengthOfArray<Uint16>(meshlist_000BE8E0), LengthOfArray<Uint16>(matlist_000BE44C), { -2.802414f, 64.97806f, -46.56055f }, 220.2697f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000BF010 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000BEFE8, -351.0712f, 33.71439f, -538.5449f, 0xCA6, 0x90B, 0xFFFFFB29, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000BF044[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 42, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000BF06C[] = {
	6, 16, 1, 17, 2, 0, 3,
	0x8000u | 6, 4, 1, 5, 2, 6, 3,
	6, 0, 15, 17, 14, 16, 13,
	6, 7, 10, 8, 11, 9, 12,
	3, 13, 14, 10,
	0x8000u | 5, 10, 11, 14, 12, 15,
	6, 9, 6, 8, 5, 7, 4,
	6, 33, 34, 39, 40, 30, 31,
	6, 30, 31, 42, 28, 36, 37,
	5, 30, 29, 39, 38, 32,
	0x8000u | 8, 34, 37, 33, 36, 35, 42, 41, 29,
	3, 32, 35, 33,
	3, 29, 30, 42,
	3, 32, 33, 39,
	8, 27, 18, 23, 24, 21, 22, 25, 26,
	6, 18, 27, 20, 19, 26, 25
};

extern "C" __declspec(dllexport) Sint16 poly_000BF138[] = {
	0x8000u | 6, 3, 0, 6, 15, 9, 12,
	0x8000u | 5, 40, 31, 34, 28, 37,
	0x8000u | 5, 26, 20, 22, 18, 24
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BF160[] = {
	{ 432, 255 },
	{ 765, 255 },
	{ 446, 152 },
	{ 765, 144 },
	{ 432, 0 },
	{ 765, 0 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 115 },
	{ 0, 144 },
	{ 510, 0 },
	{ 0 },
	{ 432, 0 },
	{ 0 },
	{ 446, 152 },
	{ 0, 157 },
	{ 432, 255 },
	{ 0, 255 },
	{ 442, 255 },
	{ 765, 255 },
	{ 436, 109 },
	{ 765, 140 },
	{ 482, 0 },
	{ 765, 0 },
	{ 510, 255 },
	{ 510, 157 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, 140 },
	{ 510, 157 },
	{ 0 },
	{ 510, 0 },
	{ 482, 0 },
	{ 0 },
	{ 436, 109 },
	{ 0, 115 },
	{ 442, 255 },
	{ 0, 255 },
	{ 765, 93 },
	{ 765, 0 },
	{ 470, 82 },
	{ 446, 0 },
	{ 0, 90 },
	{ 0 },
	{ 765, 71 },
	{ 765, 0 },
	{ 601, 85 },
	{ 601, 0 },
	{ 228, 96 },
	{ 225, 0 },
	{ 0, 90 },
	{ 0, 255 },
	{ 470, 82 },
	{ 470, 255 },
	{ 765, 255 },
	{ 0 },
	{ 225, 0 },
	{ 0, 93 },
	{ 228, 96 },
	{ 233, 255 },
	{ 601, 85 },
	{ 609, 255 },
	{ 765, 255 },
	{ 0, 255 },
	{ 233, 255 },
	{ 0, 93 },
	{ 765, 255 },
	{ 765, 71 },
	{ 601, 85 },
	{ 765, 255 },
	{ 765, 93 },
	{ 470, 82 },
	{ 765, 255 },
	{ 765, 0 },
	{ 414, 255 },
	{ 436, 0 },
	{ 262, 255 },
	{ 274, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ 138, 0 },
	{ 128, 255 },
	{ 510, 0 },
	{ 510, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BF2B8[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 95, 255 },
	{ 155, 0 },
	{ 0, 254 },
	{ 0 },
	{ 0, 81 },
	{ 178, 255 },
	{ 85, 0 },
	{ 255, 212 },
	{ 203, 33 },
	{ 254, 222 },
	{ 147, 0 },
	{ 105, 255 },
	{ 66, 5 },
	{ 0, 186 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000BF2F8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 16, poly_000BF06C, NULL, NULL, NULL, uv_000BF160, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, poly_000BF138, NULL, NULL, NULL, uv_000BF2B8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000BF328[] = {
	{ -145.3075f, 16.46512f, -65.14188f },
	{ -157.5285f, -39.67006f, -108.3681f },
	{ -160.9142f, -13.87707f, -97.34314f },
	{ -160.9814f, 14.50873f, -73.46974f },
	{ -221.714f, -26.5796f, -38.29754f },
	{ -212.7075f, -3.261124f, -37.98108f },
	{ -189.0939f, 12.26232f, -35.78863f },
	{ -195.494f, -19.08753f, 7.791615f },
	{ -192.884f, 8.685574f, 1.06213f },
	{ -176.7034f, 17.5636f, -10.41074f },
	{ -160.0915f, -13.00199f, 25.76726f },
	{ -161.6425f, 8.998547f, 16.58142f },
	{ -159.6598f, 22.13267f, -2.792965f },
	{ -114.7484f, -21.70209f, -34.26765f },
	{ -122.085f, 3.547737f, -36.00153f },
	{ -142.3194f, 21.90625f, -41.14109f },
	{ -127.2848f, -33.83269f, -82.64877f },
	{ -131.9575f, -5.531597f, -80.04282f },
	{ 39.64695f, -3.385483f, 40.01878f },
	{ 59.42093f, -27.30347f, 44.4956f },
	{ 43.81182f, -9.051762f, 34.13292f },
	{ -11.89789f, -24.14468f, -5.356636f },
	{ 6.430937f, -0.961063f, -0.858574f },
	{ -10.85811f, -20.34749f, 25.82812f },
	{ 5.051804f, 4.449612f, 19.23301f },
	{ 25.70742f, -31.87872f, -16.86347f },
	{ 21.56245f, -18.45142f, -8.025191f },
	{ 41.28623f, -24.2358f, 53.98932f },
	{ -111.9182f, 13.93159f, 36.55564f },
	{ -119.0016f, -15.67581f, 17.37637f },
	{ -122.7664f, 1.693085f, 23.54553f },
	{ -122.7573f, 9.41774f, 32.39174f },
	{ -131.1594f, -8.989096f, 83.62353f },
	{ -132.0869f, 13.04665f, 77.66798f },
	{ -129.8918f, 27.03782f, 67.41453f },
	{ -102.7955f, -9.060127f, 69.98837f },
	{ -109.7625f, 10.21382f, 65.69718f },
	{ -114.9722f, 26.43353f, 61.28124f },
	{ -163.92f, -5.133825f, 61.335f },
	{ -154.6895f, 12.77069f, 59.47098f },
	{ -142.4943f, 22.31567f, 58.88631f },
	{ -98.54372f, -14.64329f, 22.60019f },
	{ -104.6966f, 3.601997f, 26.7255f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000BF52C[] = {
	{ 0.354908f, 0.8571039f, -0.373381f },
	{ -0.079324f, 0.404341f, -0.911162f },
	{ -0.188032f, 0.510574f, -0.839023f },
	{ -0.187496f, 0.842873f, -0.5043899f },
	{ -0.947798f, 0.255771f, -0.190421f },
	{ -0.86293f, 0.48064f, -0.156f },
	{ -0.455267f, 0.870447f, -0.187226f },
	{ -0.705642f, 0.262424f, 0.658182f },
	{ -0.619782f, 0.603359f, 0.501825f },
	{ -0.337509f, 0.93043f, 0.142789f },
	{ 0.194226f, 0.38299f, 0.903103f },
	{ 0.149131f, 0.614819f, 0.77444f },
	{ 0.114737f, 0.9466659f, 0.301096f },
	{ 0.962806f, 0.246739f, 0.110111f },
	{ 0.8674909f, 0.483822f, 0.115654f },
	{ 0.364165f, 0.930934f, -0.027299f },
	{ 0.731096f, 0.324755f, -0.600028f },
	{ 0.668903f, 0.472586f, -0.573787f },
	{ 0.185544f, 0.847622f, 0.497103f },
	{ 0.729085f, 0.660152f, 0.180648f },
	{ 0.702279f, 0.704636f, -0.101452f },
	{ -0.613804f, 0.5849929f, -0.530121f },
	{ -0.191032f, 0.832826f, -0.5195259f },
	{ -0.699675f, 0.601845f, 0.385017f },
	{ -0.338846f, 0.913825f, 0.223848f },
	{ 0.380257f, 0.505842f, -0.774292f },
	{ 0.350688f, 0.56854f, -0.744164f },
	{ 0.08481099f, 0.606753f, 0.7903529f },
	{ 0.468932f, 0.798165f, -0.378201f },
	{ -0.184127f, 0.332462f, -0.9249679f },
	{ -0.304505f, 0.472954f, -0.826796f },
	{ -0.203677f, 0.752968f, -0.625744f },
	{ -0.034315f, 0.317431f, 0.94766f },
	{ -0.077953f, 0.436701f, 0.8962229f },
	{ -0.032532f, 0.929212f, 0.368111f },
	{ 0.790724f, 0.377908f, 0.481602f },
	{ 0.764878f, 0.418119f, 0.490039f },
	{ 0.485644f, 0.86275f, 0.140752f },
	{ -0.953955f, 0.287533f, 0.085411f },
	{ -0.857637f, 0.512148f, 0.046514f },
	{ -0.484318f, 0.871183f, -0.08047599f },
	{ 0.68491f, 0.443769f, -0.577899f },
	{ 0.64027f, 0.5646099f, -0.520836f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000BF730 = { vertex_000BF328, normal_000BF52C, LengthOfArray<Sint32>(vertex_000BF328), meshlist_000BF2F8, matlist_000BF044, LengthOfArray<Uint16>(meshlist_000BF2F8), LengthOfArray<Uint16>(matlist_000BF044), { -81.14656f, -6.31612f, -12.37229f }, 170.2188f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000BF758 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000BF730, 70.92883f, -28.28561f, 1425.455f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000BF78C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000BF7B4[] = {
	22, 24, 35, 25, 42, 26, 43, 27, 36, 28, 37, 29, 38, 30, 44, 31, 39, 32, 0, 33, 40, 34, 41
};

extern "C" __declspec(dllexport) Sint16 poly_000BF7E2[] = {
	0x8000u | 5, 0, 40, 18, 20, 19,
	3, 39, 18, 0,
	6, 20, 21, 40, 22, 41, 23,
	0x8000u | 6, 35, 42, 1, 3, 4, 6,
	0x8000u | 6, 42, 43, 3, 36, 6, 37,
	0x8000u | 6, 5, 7, 8, 9, 10, 11,
	3, 1, 2, 4,
	21, 2, 5, 4, 7, 6, 9, 37, 11, 38, 12, 44, 13, 39, 14, 18, 15, 19, 16, 20, 17, 21
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BF864[] = {
	{ 1927, 254 },
	{ 1904, 0 },
	{ 2553, 254 },
	{ 2532, 0 },
	{ 3091, 254 },
	{ 3091, 0 },
	{ 3988, 254 },
	{ 3988, 0 },
	{ 4616, 254 },
	{ 4593, 0 },
	{ 5244, 254 },
	{ 5222, 0 },
	{ 5781, 254 },
	{ 5759, 0 },
	{ 6319, 254 },
	{ 6297, 0 },
	{ 6947, 254 },
	{ 7013, 0 },
	{ 7575, 254 },
	{ 7552, 0 },
	{ 8187, 255 },
	{ 8178, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BF8BC[] = {
	{ 5386, -4282 },
	{ 5408, -5055 },
	{ 4600, -4115 },
	{ 4607, -5392 },
	{ 4604, -4749 },
	{ 4641, -3373 },
	{ 4600, -4115 },
	{ 5386, -4282 },
	{ 4607, -5392 },
	{ 4608, -6106 },
	{ 5408, -5055 },
	{ 5328, -6065 },
	{ 6260, -5691 },
	{ 6082, -6120 },
	{ 282, -1509 },
	{ 856, -780 },
	{ 928, -1375 },
	{ 1615, -692 },
	{ 1648, -1349 },
	{ 2509, -693 },
	{ 856, -780 },
	{ 1410, -33 },
	{ 1615, -692 },
	{ 2861, -85 },
	{ 2509, -693 },
	{ 3576, -1114 },
	{ 1648, -2029 },
	{ 2489, -1349 },
	{ 2489, -2087 },
	{ 3171, -1336 },
	{ 3210, -2029 },
	{ 3814, -1995 },
	{ 928, -1375 },
	{ 927, -2030 },
	{ 1648, -1349 },
	{ 927, -2030 },
	{ 1648, -2029 },
	{ 1648, -1349 },
	{ 2489, -1349 },
	{ 2509, -693 },
	{ 3171, -1336 },
	{ 3576, -1114 },
	{ 3814, -1995 },
	{ 4369, -1635 },
	{ 3897, -2707 },
	{ 4755, -2519 },
	{ 3887, -3400 },
	{ 4641, -3373 },
	{ 3886, -4067 },
	{ 4600, -4115 },
	{ 3886, -4748 },
	{ 4604, -4749 },
	{ 3886, -5426 },
	{ 4607, -5392 },
	{ 3886, -6107 },
	{ 4608, -6106 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000BF99C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000BF7B4, NULL, NULL, NULL, uv_000BF864, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 8, poly_000BF7E2, NULL, NULL, NULL, uv_000BF8BC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000BF9CC[] = {
	{ 300.0623f, 220.4039f, -194.5996f },
	{ -255.8304f, 250.1592f, -599.0471f },
	{ -255.9735f, 270.0206f, -507.9382f },
	{ -170.0825f, 239.1813f, -693.9764f },
	{ -166.0238f, 254.3152f, -602.4798f },
	{ -166.0002f, 254.9967f, -508.0001f },
	{ -58.56321f, 238.3287f, -693.7917f },
	{ -61.00011f, 245.9588f, -602.5001f },
	{ -61.00011f, 250.5323f, -500.0001f },
	{ 23.98027f, 243.3714f, -604.3975f },
	{ 28.87625f, 239.3617f, -508.0469f },
	{ 104.1668f, 236.2535f, -512.6059f },
	{ 114.3734f, 241.6093f, -413.7431f },
	{ 113.1657f, 245.2803f, -317.2407f },
	{ 113.0035f, 251.3727f, -224.4553f },
	{ 113, 257.2691f, -130 },
	{ 113, 259.2042f, -35.49976f },
	{ 113, 259.9877f, 59.00024f },
	{ 202.1379f, 236.0762f, -217.8246f },
	{ 202.6837f, 241.3272f, -129.82f },
	{ 202.9286f, 250.5871f, -40.30053f },
	{ 202.9972f, 259.7517f, 58.81274f },
	{ 292.9311f, 254.2122f, 53.34253f },
	{ 386.8483f, 241.8591f, 60.75219f },
	{ -371.5585f, 210.7373f, -600.7721f },
	{ -288.5986f, 209.5777f, -711.3931f },
	{ -190.5129f, 208.9773f, -825.7402f },
	{ -9.28051f, 208.2653f, -812.6105f },
	{ 81.25762f, 209.8446f, -657.8628f },
	{ 192.4408f, 209.4949f, -581.2429f },
	{ 247.2558f, 210.4277f, -464.2963f },
	{ 234.8142f, 210.1344f, -345.0669f },
	{ 324.2382f, 207.6599f, -213.2067f },
	{ 327.3951f, 208.5414f, -104.6024f },
	{ 423.2984f, 209.4389f, -19.56519f },
	{ -336.3696f, 242.2782f, -580.1708f },
	{ -14.75513f, 218.7703f, -778.3526f },
	{ 74.45976f, 233.0463f, -635.3638f },
	{ 173.4149f, 230.0425f, -562.7395f },
	{ 207.2037f, 234.7619f, -321.1421f },
	{ 302.7701f, 234.5668f, -87.27743f },
	{ 409.1729f, 232.4363f, 1.191162f },
	{ -264.6097f, 233.0232f, -681.59f },
	{ -195.7397f, 215.6737f, -785.6423f },
	{ 221.4647f, 232.3364f, -439.7813f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000BFBE8[] = {
	{ 0.384868f, 0.915861f, -0.114349f },
	{ -0.011645f, 0.987053f, -0.159969f },
	{ 0.163658f, 0.98054f, -0.108431f },
	{ -0.011951f, 0.9811659f, -0.192797f },
	{ 0.058604f, 0.992232f, -0.109734f },
	{ 0.102972f, 0.99244f, -0.066773f },
	{ 0.060441f, 0.984093f, -0.167056f },
	{ 0.06934199f, 0.9957989f, -0.059794f },
	{ 0.083462f, 0.996377f, -0.016326f },
	{ 0.108133f, 0.991799f, -0.06813499f },
	{ 0.083809f, 0.996346f, 0.01647f },
	{ 0.07342f, 0.996742f, -0.033391f },
	{ 0.094024f, 0.994958f, -0.034898f },
	{ 0.141979f, 0.989511f, -0.026651f },
	{ 0.173058f, 0.983835f, -0.046049f },
	{ 0.133384f, 0.989208f, -0.060627f },
	{ 0.045752f, 0.997391f, -0.055847f },
	{ 0.002511f, 0.998679f, -0.051314f },
	{ 0.160649f, 0.985653f, -0.051776f },
	{ 0.133024f, 0.98681f, -0.092249f },
	{ 0.065573f, 0.9939629f, -0.087966f },
	{ 0.027703f, 0.9961219f, -0.08350299f },
	{ 0.094561f, 0.988413f, -0.118736f },
	{ 0.138794f, 0.982971f, -0.120437f },
	{ -0.458253f, 0.816055f, -0.352219f },
	{ -0.391988f, 0.862193f, -0.320886f },
	{ -0.07734799f, 0.966336f, -0.245381f },
	{ 0.204916f, 0.94096f, -0.26945f },
	{ 0.491627f, 0.761383f, -0.422609f },
	{ 0.457769f, 0.786784f, -0.414027f },
	{ 0.588596f, 0.794221f, -0.15089f },
	{ 0.596155f, 0.800411f, -0.062782f },
	{ 0.49417f, 0.851651f, -0.174604f },
	{ 0.550388f, 0.7946f, -0.256289f },
	{ 0.441269f, 0.741466f, -0.50548f },
	{ -0.362779f, 0.8806159f, -0.304807f },
	{ 0.249045f, 0.930665f, -0.268028f },
	{ 0.275608f, 0.920187f, -0.27802f },
	{ 0.309988f, 0.913684f, -0.262847f },
	{ 0.296089f, 0.95252f, -0.07096399f },
	{ 0.275573f, 0.941245f, -0.19524f },
	{ 0.28339f, 0.910107f, -0.302315f },
	{ -0.24883f, 0.931585f, -0.265017f },
	{ -0.153205f, 0.953304f, -0.260269f },
	{ 0.424294f, 0.904566f, -0.041641f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000BFE04 = { vertex_000BF9CC, normal_000BFBE8, LengthOfArray<Sint32>(vertex_000BF9CC), meshlist_000BF99C, matlist_000BF78C, LengthOfArray<Uint16>(meshlist_000BF99C), LengthOfArray<Uint16>(matlist_000BF78C), { 25.86992f, 238.8403f, -382.494f }, 595.3289f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000BFE2C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000BFE04, 68, -287, 2076, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000BFE60[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 52, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000BFE88[] = {
	4, 3, 2, 1, 0,
	4, 6, 7, 4, 5
};

extern "C" __declspec(dllexport) Sint16 poly_000BFE9C[] = {
	6, 9, 7, 3, 6, 2, 8
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BFEAC[] = {
	{ 1, 194 },
	{ 508, 194 },
	{ 1, 254 },
	{ 508, 254 },
	{ 1, 194 },
	{ 508, 194 },
	{ 1, 254 },
	{ 508, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000BFECC[] = {
	{ 510, 135 },
	{ 510, 16 },
	{ 510, 494 },
	{ 0, 16 },
	{ 0, 494 },
	{ 0, 135 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000BFEE4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000BFE88, NULL, NULL, NULL, uv_000BFEAC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000BFE9C, NULL, NULL, NULL, uv_000BFECC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000BFF14[] = {
	{ -20, 0, 55.95f },
	{ -20, 0, 88.45f },
	{ -20, 4.5f, 56 },
	{ -20, 4.5f, 88.45f },
	{ 20, 0, 55.95f },
	{ 20, 0, 88.45f },
	{ 20, 4.5f, 56 },
	{ 20, 4.5f, 88.45f },
	{ 10, 4.5f, 56 },
	{ 10, 4.5f, 88.45f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000BFF8C[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.709594f, 0.70461f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.709594f, 0.70461f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000C0004 = { vertex_000BFF14, normal_000BFF8C, LengthOfArray<Sint32>(vertex_000BFF14), meshlist_000BFEE4, matlist_000BFE60, LengthOfArray<Uint16>(meshlist_000BFEE4), LengthOfArray<Uint16>(matlist_000BFE60), { 0, 2.25f, 72.2f }, 25.76941f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000C002C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C0004, 0, 85.5f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000C0060[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000C00D8[] = {
	7, 4, 9, 82, 14, 80, 19, 24,
	0x8000u | 7, 44, 39, 76, 34, 78, 29, 24,
	3, 86, 55, 5,
	0x8000u | 7, 40, 95, 35, 93, 45, 91, 89,
	0x8000u | 7, 86, 73, 5, 77, 15, 81, 0,
	5, 76, 44, 74, 49, 54,
	3, 78, 80, 24,
	3, 82, 72, 4,
	5, 74, 54, 72, 59, 4,
	0x8000u | 5, 45, 89, 55, 87, 86,
	0x8000u | 5, 15, 0, 25, 20, 40,
	3, 25, 35, 40
};

extern "C" __declspec(dllexport) Sint16 poly_000C0168[] = {
	4, 7, 2, 6, 1,
	4, 12, 7, 11, 6,
	4, 17, 12, 16, 11,
	4, 22, 17, 21, 16,
	4, 27, 22, 26, 21,
	4, 32, 27, 31, 26,
	4, 37, 32, 36, 31,
	4, 42, 37, 41, 36,
	4, 47, 42, 46, 41,
	4, 52, 47, 51, 46,
	4, 57, 52, 56, 51,
	4, 2, 57, 1, 56
};

extern "C" __declspec(dllexport) Sint16 poly_000C01E0[] = {
	4, 8, 3, 61, 60,
	4, 13, 8, 62, 61,
	4, 18, 13, 63, 62,
	4, 23, 18, 64, 63,
	4, 28, 23, 65, 64,
	4, 33, 28, 66, 65,
	4, 38, 33, 67, 66,
	4, 43, 38, 68, 67,
	4, 48, 43, 69, 68,
	4, 53, 48, 70, 69,
	4, 58, 53, 71, 70,
	4, 60, 71, 2, 57,
	4, 71, 70, 57, 52,
	4, 3, 58, 60, 71,
	4, 70, 69, 52, 47,
	4, 61, 60, 7, 2,
	4, 62, 61, 12, 7,
	4, 63, 62, 17, 12,
	4, 64, 63, 22, 17,
	4, 65, 64, 27, 22,
	4, 66, 65, 32, 27,
	4, 67, 66, 37, 32,
	4, 68, 67, 42, 37,
	4, 69, 68, 47, 42
};

extern "C" __declspec(dllexport) Sint16 poly_000C02D0[] = {
	4, 9, 4, 8, 3,
	4, 14, 9, 13, 8,
	4, 19, 14, 18, 13,
	4, 24, 19, 23, 18,
	4, 29, 24, 28, 23,
	4, 34, 29, 33, 28,
	4, 39, 34, 38, 33,
	4, 44, 39, 43, 38,
	4, 49, 44, 48, 43,
	4, 54, 49, 53, 48,
	4, 59, 54, 58, 53,
	4, 4, 59, 3, 58,
	4, 35, 76, 45, 74,
	4, 45, 74, 55, 72,
	4, 55, 72, 5, 82,
	4, 5, 82, 15, 80,
	4, 15, 80, 25, 78,
	4, 25, 78, 35, 76
};

extern "C" __declspec(dllexport) Sint16 poly_000C0384[] = {
	4, 50, 30, 40, 20,
	4, 92, 93, 90, 91,
	4, 94, 50, 95, 40,
	4, 90, 91, 88, 89,
	4, 88, 89, 84, 87,
	4, 92, 94, 93, 95,
	4, 84, 87, 85, 86,
	4, 85, 86, 75, 73,
	4, 75, 73, 79, 77,
	4, 79, 77, 83, 81,
	4, 83, 81, 10, 0,
	4, 10, 0, 30, 20
};

extern "C" __declspec(dllexport) Sint16 poly_000C03FC[] = {
	4, 84, 85, 56, 1,
	4, 88, 84, 51, 56,
	4, 90, 88, 46, 51,
	4, 92, 90, 41, 46,
	4, 94, 92, 36, 41,
	4, 50, 94, 31, 36,
	4, 30, 50, 26, 31,
	4, 10, 30, 21, 26,
	4, 83, 10, 16, 21,
	4, 79, 83, 11, 16,
	4, 75, 79, 6, 11,
	4, 85, 75, 1, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C0474[] = {
	{ 0, -965 },
	{ 384, -965 },
	{ 384, -1785 },
	{ 768, -965 },
	{ 1152, -1785 },
	{ 1152, -965 },
	{ 1536, -965 },
	{ 3072, -965 },
	{ 2688, -965 },
	{ 2688, -1785 },
	{ 2304, -965 },
	{ 1920, -1785 },
	{ 1920, -965 },
	{ 1536, -965 },
	{ 4590, 255 },
	{ 4224, -1784 },
	{ 4973, -1784 },
	{ 2304, 255 },
	{ 2688, 255 },
	{ 2688, -1784 },
	{ 3072, 255 },
	{ 3456, -1784 },
	{ 3456, 255 },
	{ 3840, 255 },
	{ 0, 255 },
	{ 384, 255 },
	{ 384, -1784 },
	{ 768, 255 },
	{ 1152, -1784 },
	{ 1152, 255 },
	{ 1536, 255 },
	{ 2688, -1785 },
	{ 3072, -965 },
	{ 3456, -1785 },
	{ 3456, -965 },
	{ 3840, -965 },
	{ 1920, -1785 },
	{ 1152, -1785 },
	{ 1536, -965 },
	{ 4973, -1785 },
	{ 4224, -1785 },
	{ 4590, -965 },
	{ 3456, -1785 },
	{ 3840, -965 },
	{ 4224, -1785 },
	{ 4224, -965 },
	{ 4590, -965 },
	{ 3456, -1784 },
	{ 3840, 255 },
	{ 4224, -1784 },
	{ 4224, 255 },
	{ 4590, 255 },
	{ 1152, -1784 },
	{ 1536, 255 },
	{ 1920, -1784 },
	{ 1920, 255 },
	{ 2304, 255 },
	{ 1920, -1784 },
	{ 2688, -1784 },
	{ 2304, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C0564[] = {
	{ 761, 36 },
	{ 2, 36 },
	{ 761, 254 },
	{ 2, 254 },
	{ 761, 36 },
	{ 2, 36 },
	{ 761, 254 },
	{ 2, 254 },
	{ 761, 36 },
	{ 2, 36 },
	{ 761, 254 },
	{ 2, 254 },
	{ 761, 36 },
	{ 2, 36 },
	{ 761, 254 },
	{ 2, 254 },
	{ 761, 36 },
	{ 2, 36 },
	{ 761, 254 },
	{ 2, 254 },
	{ 761, 36 },
	{ 2, 36 },
	{ 761, 254 },
	{ 2, 254 },
	{ 761, 36 },
	{ 2, 36 },
	{ 761, 254 },
	{ 2, 254 },
	{ 761, 36 },
	{ 2, 36 },
	{ 761, 254 },
	{ 2, 254 },
	{ 761, 36 },
	{ 2, 36 },
	{ 761, 254 },
	{ 2, 254 },
	{ 761, 36 },
	{ 2, 36 },
	{ 761, 254 },
	{ 2, 254 },
	{ 761, 36 },
	{ 2, 36 },
	{ 761, 254 },
	{ 2, 254 },
	{ 761, 36 },
	{ 2, 36 },
	{ 761, 254 },
	{ 2, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C0624[] = {
	{ 1, -506 },
	{ 508, -506 },
	{ 1, 252 },
	{ 508, 252 },
	{ 1, -506 },
	{ 508, -506 },
	{ 1, 252 },
	{ 508, 252 },
	{ 1, -506 },
	{ 508, -506 },
	{ 1, 252 },
	{ 508, 252 },
	{ 1, -506 },
	{ 508, -506 },
	{ 1, 252 },
	{ 508, 252 },
	{ 1, -506 },
	{ 508, -506 },
	{ 1, 252 },
	{ 508, 252 },
	{ 1, -506 },
	{ 508, -506 },
	{ 1, 252 },
	{ 508, 252 },
	{ 1, -506 },
	{ 508, -506 },
	{ 1, 252 },
	{ 508, 252 },
	{ 1, -506 },
	{ 508, -506 },
	{ 1, 252 },
	{ 508, 252 },
	{ 1, -506 },
	{ 508, -506 },
	{ 1, 252 },
	{ 508, 252 },
	{ 1, -506 },
	{ 508, -506 },
	{ 1, 252 },
	{ 508, 252 },
	{ 1, -506 },
	{ 508, -506 },
	{ 1, 252 },
	{ 508, 252 },
	{ 508, 252 },
	{ 1, 252 },
	{ 508, -4 },
	{ 1, -4 },
	{ 508, 252 },
	{ 1, 252 },
	{ 508, -4 },
	{ 1, -4 },
	{ 1, -506 },
	{ 508, -506 },
	{ 1, 252 },
	{ 508, 252 },
	{ 508, 252 },
	{ 1, 252 },
	{ 508, -4 },
	{ 1, -4 },
	{ 508, 252 },
	{ 1, 252 },
	{ 508, -4 },
	{ 1, -4 },
	{ 508, 252 },
	{ 1, 252 },
	{ 508, -4 },
	{ 1, -4 },
	{ 508, 252 },
	{ 1, 252 },
	{ 508, -4 },
	{ 1, -4 },
	{ 508, 252 },
	{ 1, 252 },
	{ 508, -4 },
	{ 1, -4 },
	{ 508, 252 },
	{ 1, 252 },
	{ 508, -4 },
	{ 1, -4 },
	{ 508, 252 },
	{ 1, 252 },
	{ 508, -4 },
	{ 1, -4 },
	{ 508, 252 },
	{ 1, 252 },
	{ 508, -4 },
	{ 1, -4 },
	{ 508, 252 },
	{ 1, 252 },
	{ 508, -4 },
	{ 1, -4 },
	{ 508, 252 },
	{ 1, 252 },
	{ 508, -4 },
	{ 1, -4 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C07A4[] = {
	{ 5, -251 },
	{ 758, -251 },
	{ 5, 251 },
	{ 758, 251 },
	{ 5, -251 },
	{ 758, -251 },
	{ 5, 251 },
	{ 758, 251 },
	{ 5, -251 },
	{ 758, -251 },
	{ 5, 251 },
	{ 758, 251 },
	{ 5, -251 },
	{ 758, -251 },
	{ 5, 251 },
	{ 758, 251 },
	{ 5, -251 },
	{ 758, -251 },
	{ 5, 251 },
	{ 758, 251 },
	{ 5, -251 },
	{ 758, -251 },
	{ 5, 251 },
	{ 758, 251 },
	{ 5, -251 },
	{ 758, -251 },
	{ 5, 251 },
	{ 758, 251 },
	{ 5, -251 },
	{ 758, -251 },
	{ 5, 251 },
	{ 758, 251 },
	{ 5, -251 },
	{ 758, -251 },
	{ 5, 251 },
	{ 758, 251 },
	{ 5, -251 },
	{ 758, -251 },
	{ 5, 251 },
	{ 758, 251 },
	{ 5, -251 },
	{ 758, -251 },
	{ 5, 251 },
	{ 758, 251 },
	{ 5, -251 },
	{ 758, -251 },
	{ 5, 251 },
	{ 758, 251 },
	{ 5, 251 },
	{ 5, -3 },
	{ 758, 251 },
	{ 758, -3 },
	{ 5, 251 },
	{ 5, -3 },
	{ 758, 251 },
	{ 758, -3 },
	{ 5, 251 },
	{ 5, -3 },
	{ 758, 251 },
	{ 758, -3 },
	{ 5, 251 },
	{ 5, -3 },
	{ 758, 251 },
	{ 758, -3 },
	{ 5, 251 },
	{ 5, -3 },
	{ 758, 251 },
	{ 758, -3 },
	{ 5, 251 },
	{ 5, -3 },
	{ 758, 251 },
	{ 758, -3 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C08C4[] = {
	{ 1012, -504 },
	{ 7, -504 },
	{ 900, 249 },
	{ 135, 249 },
	{ 7, -504 },
	{ 135, 249 },
	{ 1012, -504 },
	{ 900, 249 },
	{ 1012, -504 },
	{ 7, -504 },
	{ 900, 249 },
	{ 135, 249 },
	{ 7, -504 },
	{ 135, 249 },
	{ 1012, -504 },
	{ 900, 249 },
	{ 7, -504 },
	{ 135, 249 },
	{ 1012, -504 },
	{ 900, 249 },
	{ 1012, -504 },
	{ 7, -504 },
	{ 900, 249 },
	{ 135, 249 },
	{ 7, -504 },
	{ 135, 249 },
	{ 1012, -504 },
	{ 900, 249 },
	{ 7, -504 },
	{ 135, 249 },
	{ 1012, -504 },
	{ 900, 249 },
	{ 7, -504 },
	{ 135, 249 },
	{ 1012, -504 },
	{ 900, 249 },
	{ 7, -504 },
	{ 135, 249 },
	{ 1012, -504 },
	{ 900, 249 },
	{ 7, -504 },
	{ 135, 249 },
	{ 1012, -504 },
	{ 900, 249 },
	{ 7, -504 },
	{ 135, 249 },
	{ 1012, -504 },
	{ 900, 249 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C0984[] = {
	{ 1265, 253 },
	{ 9, 253 },
	{ 1265, 1 },
	{ 9, 1 },
	{ 1265, 253 },
	{ 9, 253 },
	{ 1265, 1 },
	{ 9, 1 },
	{ 1265, 253 },
	{ 9, 253 },
	{ 1265, 1 },
	{ 9, 1 },
	{ 1265, 253 },
	{ 9, 253 },
	{ 1265, 1 },
	{ 9, 1 },
	{ 1265, 253 },
	{ 9, 253 },
	{ 1265, 1 },
	{ 9, 1 },
	{ 1265, 253 },
	{ 9, 253 },
	{ 1265, 1 },
	{ 9, 1 },
	{ 1265, 253 },
	{ 9, 253 },
	{ 1265, 1 },
	{ 9, 1 },
	{ 1265, 253 },
	{ 9, 253 },
	{ 1265, 1 },
	{ 9, 1 },
	{ 1265, 253 },
	{ 9, 253 },
	{ 1265, 1 },
	{ 9, 1 },
	{ 1265, 253 },
	{ 9, 253 },
	{ 1265, 1 },
	{ 9, 1 },
	{ 1265, 253 },
	{ 9, 253 },
	{ 1265, 1 },
	{ 9, 1 },
	{ 1265, 253 },
	{ 9, 253 },
	{ 1265, 1 },
	{ 9, 1 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000C0A44[] = {
	{ NJD_MESHSET_TRIMESH | 0, 12, poly_000C00D8, NULL, NULL, NULL, uv_000C0474, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 12, poly_000C0168, NULL, NULL, NULL, uv_000C0564, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 24, poly_000C01E0, NULL, NULL, NULL, uv_000C0624, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 18, poly_000C02D0, NULL, NULL, NULL, uv_000C07A4, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 12, poly_000C0384, NULL, NULL, NULL, uv_000C08C4, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 12, poly_000C03FC, NULL, NULL, NULL, uv_000C0984, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000C0AD4[] = {
	{ -33.70654f, 2, -58.38141f },
	{ 100, 8, -0.00003f },
	{ 100, 19.5f, -0.00003f },
	{ 61.8657f, 48, -0.00002f },
	{ 44.85265f, 47.81f, -0.00001f },
	{ 9.979727f, 78.5f, -5.7618f },
	{ 86.60253f, 8, -50 },
	{ 86.60253f, 19.5f, -50 },
	{ 53.57734f, 48, -30.93285f },
	{ 38.84352f, 47.81f, -22.42633f },
	{ -50, 2, -86.60252f },
	{ 49.99999f, 8, -86.60253f },
	{ 49.99999f, 19.5f, -86.60253f },
	{ 30.93285f, 48, -53.57734f },
	{ 22.42633f, 47.81f, -38.84352f },
	{ -0.00001f, 78.5f, -11.5236f },
	{ -0.00006f, 8, -99.99998f },
	{ -0.00006f, 19.5f, -99.99998f },
	{ -0.00002f, 48, -61.8657f },
	{ -0.00002f, 47.81f, -44.85265f },
	{ -58.38141f, 2, -33.70653f },
	{ -50, 8, -86.60252f },
	{ -50, 19.5f, -86.60252f },
	{ -30.93285f, 48, -53.57734f },
	{ -22.42633f, 47.81f, -38.84352f },
	{ -9.979727f, 78.5f, -5.761797f },
	{ -86.60252f, 8, -49.99999f },
	{ -86.60252f, 19.5f, -49.99999f },
	{ -53.57734f, 48, -30.93285f },
	{ -38.84352f, 47.81f, -22.4263f },
	{ -86.60252f, 2, -49.99999f },
	{ -99.99998f, 8, 0.000006f },
	{ -99.99998f, 19.5f, 0.000006f },
	{ -61.8657f, 48, 0.000002f },
	{ -44.85261f, 47.81f, 0.000003f },
	{ -9.979727f, 78.5f, 5.7618f },
	{ -86.60252f, 8, 49.99999f },
	{ -86.60252f, 19.5f, 49.99999f },
	{ -53.57734f, 48, 30.93285f },
	{ -38.84349f, 47.81f, 22.42633f },
	{ -67.41307f, 2, 0.000007f },
	{ -49.99998f, 8, 86.60252f },
	{ -49.99998f, 19.5f, 86.60252f },
	{ -30.93285f, 48, 53.57734f },
	{ -22.4263f, 47.81f, 38.84352f },
	{ 0.000001f, 78.5f, 11.5236f },
	{ 0.000012f, 8, 99.99998f },
	{ 0.000012f, 19.5f, 99.99998f },
	{ 0.000002f, 48, 61.8657f },
	{ 0.000006f, 47.81f, 44.8526f },
	{ -99.99998f, 2, 0.000006f },
	{ 50, 8, 86.60252f },
	{ 50, 19.5f, 86.60252f },
	{ 30.93285f, 48, 53.57734f },
	{ 22.42633f, 47.81f, 38.84349f },
	{ 9.979727f, 78.5f, 5.761797f },
	{ 86.60252f, 8, 49.99998f },
	{ 86.60252f, 19.5f, 49.99998f },
	{ 53.57734f, 48, 30.93285f },
	{ 38.84349f, 47.81f, 22.4263f },
	{ 86.22014f, 19.5f, -0.00002f },
	{ 74.66883f, 19.5f, -43.11007f },
	{ 43.11007f, 19.5f, -74.66883f },
	{ -0.00005f, 19.5f, -86.22014f },
	{ -43.11007f, 19.5f, -74.66879f },
	{ -74.66879f, 19.5f, -43.11006f },
	{ -86.22012f, 19.5f, 0.000005f },
	{ -74.66879f, 19.5f, 43.11007f },
	{ -43.11006f, 19.5f, 74.66879f },
	{ 0.000011f, 19.5f, 86.22012f },
	{ 43.11007f, 19.5f, 74.66879f },
	{ 74.66879f, 19.5f, 43.11006f },
	{ 18.51658f, 78.50247f, 10.69055f },
	{ 58.38141f, 2, -33.70654f },
	{ 0.000003f, 78.50247f, 21.38111f },
	{ 86.60253f, 2, -50 },
	{ -18.51658f, 78.50247f, 10.69056f },
	{ 33.70654f, 2, -58.38141f },
	{ -18.51659f, 78.50247f, -10.69056f },
	{ 49.99999f, 2, -86.60253f },
	{ -0.00001f, 78.50247f, -21.38112f },
	{ -0.00005f, 2, -67.41307f },
	{ 18.51659f, 78.50247f, -10.69056f },
	{ -0.00006f, 2, -99.99998f },
	{ 86.60252f, 2, 49.99998f },
	{ 100, 2, -0.00003f },
	{ 67.41307f, 2, -0.00002f },
	{ 58.38141f, 2, 33.70653f },
	{ 50, 2, 86.60252f },
	{ 33.70654f, 2, 58.38141f },
	{ 0.000012f, 2, 99.99998f },
	{ 0.000007f, 2, 67.41307f },
	{ -49.99998f, 2, 86.60252f },
	{ -33.70653f, 2, 58.38141f },
	{ -86.60252f, 2, 49.99999f },
	{ -58.38141f, 2, 33.70654f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000C0F54[] = {
	{ 0.194357f, -0.921358f, 0.336636f },
	{ 1, 0, 0 },
	{ 0.757162f, 0.653227f, 0 },
	{ 0.468488f, 0.88347f, 0 },
	{ 0.369826f, 0.929101f, 0 },
	{ -0.6997319f, 0.5892079f, 0.403991f },
	{ 0.866025f, 0, -0.5f },
	{ 0.655722f, 0.653227f, -0.378581f },
	{ 0.405723f, 0.88347f, -0.234244f },
	{ 0.323839f, 0.927454f, -0.186969f },
	{ -0.378581f, -0.653227f, -0.655722f },
	{ 0.5f, 0, -0.866025f },
	{ 0.378581f, 0.653227f, -0.655722f },
	{ 0.234244f, 0.88347f, -0.405723f },
	{ 0.184914f, 0.929101f, -0.320279f },
	{ 0, 0.5892079f, 0.807981f },
	{ 0, 0, -1 },
	{ 0, 0.653227f, -0.757162f },
	{ 0, 0.88347f, -0.468488f },
	{ 0, 0.927454f, -0.373937f },
	{ 0.336824f, -0.921267f, 0.194465f },
	{ -0.5f, 0, -0.866025f },
	{ -0.378581f, 0.653227f, -0.655722f },
	{ -0.234244f, 0.883469f, -0.405723f },
	{ -0.184914f, 0.929101f, -0.320279f },
	{ 0.699733f, 0.5892079f, 0.403991f },
	{ -0.866026f, 0, -0.5f },
	{ -0.655722f, 0.653227f, -0.378581f },
	{ -0.405723f, 0.88347f, -0.234244f },
	{ -0.323839f, 0.927454f, -0.186968f },
	{ -0.655722f, -0.653227f, -0.378581f },
	{ -1, 0, 0 },
	{ -0.757162f, 0.653227f, 0 },
	{ -0.468488f, 0.88347f, 0 },
	{ -0.369827f, 0.929101f, 0 },
	{ 0.6997319f, 0.5892079f, -0.403991f },
	{ -0.866025f, 0, 0.5f },
	{ -0.655722f, 0.653227f, 0.378581f },
	{ -0.405723f, 0.883469f, 0.234244f },
	{ -0.323839f, 0.927454f, 0.186969f },
	{ 0.388714f, -0.921358f, 0 },
	{ -0.5f, 0, 0.866025f },
	{ -0.378581f, 0.653227f, 0.655722f },
	{ -0.234244f, 0.88347f, 0.405723f },
	{ -0.184913f, 0.929101f, 0.320279f },
	{ 0, 0.5892079f, -0.807981f },
	{ 0, 0, 1 },
	{ 0, 0.653227f, 0.757162f },
	{ 0, 0.88347f, 0.468488f },
	{ 0, 0.927454f, 0.373938f },
	{ -0.757162f, -0.653227f, 0 },
	{ 0.5f, 0, 0.866025f },
	{ 0.378581f, 0.653227f, 0.655722f },
	{ 0.234244f, 0.883469f, 0.405723f },
	{ 0.184914f, 0.929101f, 0.320279f },
	{ -0.699733f, 0.5892079f, -0.403991f },
	{ 0.866025f, 0, 0.5f },
	{ 0.655722f, 0.653227f, 0.378581f },
	{ 0.405723f, 0.88347f, 0.234244f },
	{ 0.323839f, 0.927454f, 0.186969f },
	{ 0.35785f, 0.9337789f, 0 },
	{ 0.309907f, 0.9337789f, -0.178925f },
	{ 0.178925f, 0.9337789f, -0.309907f },
	{ 0, 0.9337789f, -0.35785f },
	{ -0.178925f, 0.9337789f, -0.309908f },
	{ -0.309907f, 0.9337789f, -0.178925f },
	{ -0.35785f, 0.9337789f, 0 },
	{ -0.309908f, 0.9337789f, 0.178925f },
	{ -0.178925f, 0.9337789f, 0.309907f },
	{ 0, 0.9337789f, 0.35785f },
	{ 0.178925f, 0.9337789f, 0.309908f },
	{ 0.309907f, 0.9337789f, 0.178925f },
	{ 0.436996f, 0.863353f, 0.2523f },
	{ -0.336824f, -0.921267f, 0.194465f },
	{ 0, 0.863353f, 0.5046f },
	{ 0.655722f, -0.653227f, -0.378581f },
	{ -0.436996f, 0.863353f, 0.2523f },
	{ -0.194357f, -0.921358f, 0.336636f },
	{ -0.436996f, 0.863353f, -0.2523f },
	{ 0.378581f, -0.653227f, -0.655722f },
	{ 0, 0.863353f, -0.5046f },
	{ 0, -0.921267f, 0.38893f },
	{ 0.436996f, 0.863354f, -0.2523f },
	{ 0, -0.653227f, -0.757162f },
	{ 0.655722f, -0.653227f, 0.378581f },
	{ 0.757162f, -0.653227f, 0 },
	{ -0.388714f, -0.921358f, 0 },
	{ -0.336824f, -0.921267f, -0.194465f },
	{ 0.378581f, -0.653227f, 0.655722f },
	{ -0.194357f, -0.921358f, -0.336636f },
	{ 0, -0.653227f, 0.757162f },
	{ 0, -0.921267f, -0.38893f },
	{ -0.378581f, -0.653227f, 0.655722f },
	{ 0.194357f, -0.921358f, -0.336636f },
	{ -0.655722f, -0.653227f, 0.378581f },
	{ 0.336824f, -0.921267f, -0.194465f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000C13D4 = { vertex_000C0AD4, normal_000C0F54, LengthOfArray<Sint32>(vertex_000C0AD4), meshlist_000C0A44, matlist_000C0060, LengthOfArray<Uint16>(meshlist_000C0A44), LengthOfArray<Uint16>(matlist_000C0060), { 0.000008f, 40.25124f, -0.00004f }, 141.4213f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000C13FC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C13D4, 0, 141.5f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000C1430[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000C1444[] = {
	4, 6, 9, 7, 8,
	7, 10, 3, 1, 5, 4, 2, 0,
	3, 1, 11, 10
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000C1468[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000C1444, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000C1480[] = {
	{ -20, 89.99998f, -51.72187f },
	{ -20, 7.5f, 77.5f },
	{ 20, 89.99998f, -51.72187f },
	{ 20, 7.5f, 77.5f },
	{ -20, 90, -46 },
	{ 20, 90, -46 },
	{ 20, 0, 140.75f },
	{ -20, 0, 140.75f },
	{ -20, 7.5f, 118.41f },
	{ 20, 7.5f, 118.41f },
	{ 20, 7.5f, 81 },
	{ -20, 7.5f, 81 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000C1510[] = {
	{ 0, 1, -0.00001f },
	{ 0, 0.956957f, 0.290231f },
	{ 0, 1, -0.00001f },
	{ 0, 0.956957f, 0.290231f },
	{ 0, 0.956957f, 0.29023f },
	{ 0, 0.956957f, 0.29023f },
	{ 0, 0.948002f, 0.318264f },
	{ 0, 0.948002f, 0.318264f },
	{ 0, 0.948002f, 0.318264f },
	{ 0, 0.948002f, 0.318264f },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000C15A0 = { vertex_000C1480, normal_000C1510, LengthOfArray<Sint32>(vertex_000C1480), meshlist_000C1468, matlist_000C1430, LengthOfArray<Uint16>(meshlist_000C1468), LengthOfArray<Uint16>(matlist_000C1430), { 0, 45, 44.51406f }, 106.2373f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000C15C8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C15A0, 0, 0, 150, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000C15FC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 56, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 56, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_ONE | NJD_SA_ONE }
};

extern "C" __declspec(dllexport) Sint16 poly_000C1610[] = {
	0x8000u | 26, 15, 4, 16, 3, 21, 9, 22, 10, 23, 11, 19, 8, 20, 7, 17, 6, 18, 5, 12, 1, 13, 0, 14, 2, 15, 4
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C1648[] = {
	{ 3187, 0 },
	{ 3187, 254 },
	{ 2944, 0 },
	{ 2944, 254 },
	{ 2688, 0 },
	{ 2688, 254 },
	{ 2432, 0 },
	{ 2432, 254 },
	{ 2176, 0 },
	{ 2176, 254 },
	{ 1920, 0 },
	{ 1920, 254 },
	{ 1664, 0 },
	{ 1664, 254 },
	{ 1408, 0 },
	{ 1408, 254 },
	{ 1152, 0 },
	{ 1152, 254 },
	{ 896, 0 },
	{ 896, 254 },
	{ 640, 0 },
	{ 640, 254 },
	{ 384, 0 },
	{ 384, 254 },
	{ 128, 0 },
	{ 128, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000C16B0[] = {
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000C1610, NULL, NULL, NULL, uv_000C1648, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000C16C8[] = {
	{ 45.29335f, -0.00021f, 169.037f },
	{ -45.29332f, -0.00019f, 169.037f },
	{ 123.7437f, -0.00019f, 123.7437f },
	{ 169.037f, 0, -45.29333f },
	{ 169.037f, -0.00011f, 45.2933f },
	{ -123.7437f, -0.00011f, 123.7437f },
	{ -169.037f, 0, 45.29334f },
	{ -169.037f, 0.00001f, -45.29332f },
	{ -123.7437f, 0.000019f, -123.7437f },
	{ 123.7437f, 0.00001f, -123.7437f },
	{ 45.29333f, 0.000019f, -169.037f },
	{ -45.29334f, 0.000021f, -169.037f },
	{ -40.76398f, -45.00001f, 152.1333f },
	{ 40.76401f, -45.00002f, 152.1333f },
	{ 111.3693f, -45.00001f, 111.3693f },
	{ 152.1333f, -45.00001f, 40.76397f },
	{ 152.1333f, -45, -40.764f },
	{ -152.1333f, -45, 40.76401f },
	{ -111.3693f, -45.00001f, 111.3693f },
	{ -111.3693f, -44.99998f, -111.3693f },
	{ -152.1333f, -44.99999f, -40.76399f },
	{ 111.3693f, -44.99999f, -111.3693f },
	{ 40.76399f, -44.99998f, -152.1333f },
	{ -40.76401f, -44.99998f, -152.1333f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000C17E8[] = {
	{ 0.241221f, -0.362446f, 0.900247f },
	{ -0.24122f, -0.362446f, 0.900247f },
	{ 0.659027f, -0.362446f, 0.659027f },
	{ 0.900247f, -0.362447f, -0.241221f },
	{ 0.900247f, -0.362446f, 0.24122f },
	{ -0.659027f, -0.362446f, 0.659027f },
	{ -0.900247f, -0.362446f, 0.241221f },
	{ -0.900247f, -0.362446f, -0.241221f },
	{ -0.659027f, -0.362446f, -0.659027f },
	{ 0.659027f, -0.362446f, -0.659027f },
	{ 0.241221f, -0.362446f, -0.900247f },
	{ -0.241221f, -0.362446f, -0.900247f },
	{ -0.24122f, -0.362446f, 0.900247f },
	{ 0.241221f, -0.362446f, 0.900247f },
	{ 0.659027f, -0.362446f, 0.659027f },
	{ 0.900247f, -0.362446f, 0.24122f },
	{ 0.900247f, -0.362447f, -0.241221f },
	{ -0.900247f, -0.362446f, 0.241221f },
	{ -0.659027f, -0.362446f, 0.659027f },
	{ -0.659027f, -0.362446f, -0.659027f },
	{ -0.900247f, -0.362446f, -0.241221f },
	{ 0.659027f, -0.362446f, -0.659027f },
	{ 0.241221f, -0.362446f, -0.900247f },
	{ -0.241221f, -0.362446f, -0.900247f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000C1908 = { vertex_000C16C8, normal_000C17E8, LengthOfArray<Sint32>(vertex_000C16C8), meshlist_000C16B0, matlist_000C15FC, LengthOfArray<Uint16>(meshlist_000C16B0), LengthOfArray<Uint16>(matlist_000C15FC), { 0, -22.5f, 0.000008f }, 239.0545f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000C1930 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C1908, 0, -3, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000C1964[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 55, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000C198C[] = {
	4, 5, 4, 2, 1,
	4, 6, 7, 0, 3
};

extern "C" __declspec(dllexport) Sint16 poly_000C19A0[] = {
	4, 2, 1, 3, 0
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C19AC[] = {
	{ 3035, 253 },
	{ 23, 253 },
	{ 3035, 181 },
	{ 23, 181 },
	{ 23, 253 },
	{ 3035, 253 },
	{ 23, 181 },
	{ 3035, 181 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C19CC[] = {
	{ 2024, 253 },
	{ 15, 253 },
	{ 2024, 141 },
	{ 15, 141 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000C19DC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000C198C, NULL, NULL, NULL, uv_000C19AC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000C19A0, NULL, NULL, NULL, uv_000C19CC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000C1A0C[] = {
	{ -59.99999f, 2, -350 },
	{ -59.99999f, 2, -355 },
	{ 65.03584f, 2, -354.112f },
	{ 63.32574f, 2, -349.4136f },
	{ -59.99999f, 0, -355 },
	{ 65.03584f, 0, -354.112f },
	{ -59.99999f, 0, -350 },
	{ 63.32574f, 0, -349.4136f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000C1A6C[] = {
	{ -0.003357f, 0.7081749f, 0.706029f },
	{ 0.005033f, 0.705503f, -0.708689f },
	{ 0.005593f, 0.616156f, -0.787604f },
	{ -0.003015f, 0.773188f, 0.63417f },
	{ 0.007102f, 0, -0.999975f },
	{ 0.007102f, 0, -0.999975f },
	{ -0.004755f, 0, 0.999989f },
	{ -0.004755f, 0, 0.999989f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000C1ACC = { vertex_000C1A0C, normal_000C1A6C, LengthOfArray<Sint32>(vertex_000C1A0C), meshlist_000C19DC, matlist_000C1964, LengthOfArray<Uint16>(meshlist_000C19DC), LengthOfArray<Uint16>(matlist_000C1964), { 2.517927f, 1, -352.2068f }, 62.58028f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000C1AF4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C1ACC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000C1B28[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 56, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 56, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_ONE | NJD_SA_ONE }
};

extern "C" __declspec(dllexport) Sint16 poly_000C1B3C[] = {
	0x8000u | 14, 21, 20, 15, 14, 2, 0, 3, 1, 9, 8, 17, 16, 21, 20,
	0x8000u | 14, 7, 4, 11, 10, 23, 22, 19, 18, 13, 12, 6, 5, 7, 4
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C1B78[] = {
	{ 255, 117 },
	{ 255, 255 },
	{ 213, 117 },
	{ 213, 255 },
	{ 170, 117 },
	{ 170, 255 },
	{ 128, 117 },
	{ 128, 255 },
	{ 85, 117 },
	{ 85, 255 },
	{ 42, 117 },
	{ 42, 255 },
	{ 0, 117 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 117 },
	{ 213, 0 },
	{ 213, 117 },
	{ 170, 0 },
	{ 170, 117 },
	{ 128, 0 },
	{ 128, 117 },
	{ 85, 0 },
	{ 85, 117 },
	{ 42, 0 },
	{ 42, 117 },
	{ 0 },
	{ 0, 117 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000C1BE8[] = {
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000C1B3C, NULL, NULL, NULL, uv_000C1B78, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000C1C00[] = {
	{ -4.719599f, -65, 8.174552f },
	{ -9.439199f, -65, -0.00034f },
	{ -5.399999f, -30, 9.35305f },
	{ -10.8f, -30, -0.00023f },
	{ 13.5f, -30, -0.00025f },
	{ 6.749999f, -29.99999f, -11.69137f },
	{ 6.749999f, 0.000004f, -11.69136f },
	{ 13.5f, 0, -0.00015f },
	{ -4.719601f, -65, -8.174623f },
	{ -5.400002f, -29.99999f, -9.3531f },
	{ 6.750004f, -30, 11.69132f },
	{ 6.750004f, -0.00004f, 11.69133f },
	{ -6.750001f, -29.99999f, -11.69137f },
	{ -6.750001f, 0.000004f, -11.69136f },
	{ 4.719603f, -65, 8.17455f },
	{ 5.400003f, -30, 9.353048f },
	{ 4.7196f, -65, -8.174623f },
	{ 5.4f, -29.99999f, -9.3531f },
	{ -13.5f, -30, -0.00022f },
	{ -13.5f, 0, -0.00013f },
	{ 9.439199f, -65, -0.00036f },
	{ 10.8f, -30, -0.00025f },
	{ -6.749998f, -30, 11.69132f },
	{ -6.749998f, -0.00004f, 11.69133f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000C1D20[] = {
	{ -0.499622f, -0.038851f, 0.8653719f },
	{ -0.999245f, -0.038851f, 0 },
	{ -0.499622f, -0.038851f, 0.8653719f },
	{ -0.999245f, -0.038851f, 0 },
	{ 1, 0, 0 },
	{ 0.5f, 0, -0.866025f },
	{ 0.5f, 0, -0.866025f },
	{ 1, 0, 0 },
	{ -0.499623f, -0.03885f, -0.8653719f },
	{ -0.499623f, -0.03885f, -0.8653719f },
	{ 0.5f, 0, 0.866025f },
	{ 0.5f, 0, 0.866025f },
	{ -0.5f, 0, -0.866025f },
	{ -0.5f, 0, -0.866025f },
	{ 0.499623f, -0.038851f, 0.865371f },
	{ 0.499623f, -0.038851f, 0.865371f },
	{ 0.499622f, -0.03885f, -0.8653719f },
	{ 0.499622f, -0.03885f, -0.8653719f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 0.999245f, -0.038851f, 0 },
	{ 0.999245f, -0.038851f, 0 },
	{ -0.5f, 0, 0.866026f },
	{ -0.5f, 0, 0.866026f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000C1E40 = { vertex_000C1C00, normal_000C1D20, LengthOfArray<Sint32>(vertex_000C1C00), meshlist_000C1BE8, matlist_000C1B28, LengthOfArray<Uint16>(meshlist_000C1BE8), LengthOfArray<Uint16>(matlist_000C1B28), { 0, -32.5f, -0.00019f }, 35.19233f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000C1E68 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C1E40, 0, -3, -215, 0, 0x3FFF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000C1E9C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000C1EC4[] = {
	4, 94, 99, 95, 98,
	4, 3, 2, 5, 4,
	4, 7, 6, 9, 8,
	4, 11, 10, 13, 12,
	4, 15, 14, 17, 16,
	4, 19, 18, 21, 20,
	4, 23, 22, 25, 24,
	4, 27, 26, 29, 28,
	4, 31, 30, 33, 32,
	4, 35, 34, 37, 36,
	4, 39, 38, 41, 40,
	4, 43, 42, 45, 44,
	4, 47, 46, 49, 48,
	4, 51, 50, 53, 52,
	4, 55, 54, 57, 56,
	4, 59, 58, 61, 60,
	4, 63, 62, 65, 64,
	4, 67, 66, 69, 68,
	4, 71, 70, 73, 72,
	4, 75, 74, 77, 76,
	4, 79, 78, 81, 80,
	4, 83, 82, 85, 84,
	4, 87, 86, 89, 88,
	4, 91, 90, 92, 93,
	4, 130, 131, 127, 136,
	4, 96, 100, 97, 101,
	4, 102, 105, 103, 104,
	4, 109, 106, 108, 107,
	4, 110, 125, 111, 121,
	4, 113, 124, 116, 120,
	4, 112, 123, 115, 118,
	4, 114, 122, 117, 119,
	4, 133, 134, 128, 135,
	4, 129, 132, 126, 137
};

extern "C" __declspec(dllexport) Sint16 poly_000C2018[] = {
	4, 1, 0, 3, 2,
	4, 5, 4, 7, 6,
	4, 9, 8, 11, 10,
	4, 13, 12, 15, 14,
	4, 17, 16, 19, 18,
	4, 21, 20, 23, 22,
	4, 25, 24, 27, 26,
	4, 29, 28, 31, 30,
	4, 33, 32, 35, 34,
	4, 37, 36, 39, 38,
	4, 41, 40, 43, 42,
	4, 45, 44, 47, 46,
	4, 49, 48, 51, 50,
	4, 53, 52, 55, 54,
	4, 57, 56, 59, 58,
	4, 61, 60, 63, 62,
	4, 65, 64, 67, 66,
	4, 69, 68, 71, 70,
	4, 73, 72, 75, 74,
	4, 77, 76, 79, 78,
	4, 81, 80, 83, 82,
	4, 85, 84, 87, 86,
	4, 89, 88, 91, 90,
	4, 94, 95, 93, 92,
	4, 99, 96, 98, 97,
	4, 100, 102, 101, 103,
	4, 105, 109, 104, 108,
	4, 111, 107, 110, 106,
	4, 125, 113, 121, 116,
	4, 124, 112, 120, 115,
	4, 123, 114, 118, 117,
	4, 122, 136, 119, 131,
	4, 134, 129, 135, 126,
	4, 132, 130, 137, 127
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C216C[] = {
	{ 508, 42 },
	{ 508, 114 },
	{ 1, 42 },
	{ 1, 114 },
	{ 508, 42 },
	{ 1, 42 },
	{ 508, 114 },
	{ 1, 114 },
	{ 1, 42 },
	{ 508, 42 },
	{ 1, 114 },
	{ 508, 114 },
	{ 508, 42 },
	{ 1, 42 },
	{ 508, 114 },
	{ 1, 114 },
	{ 1, 42 },
	{ 508, 42 },
	{ 1, 114 },
	{ 508, 114 },
	{ 508, 42 },
	{ 1, 42 },
	{ 508, 114 },
	{ 1, 114 },
	{ 1, 42 },
	{ 508, 42 },
	{ 1, 114 },
	{ 508, 114 },
	{ 508, 42 },
	{ 1, 42 },
	{ 508, 114 },
	{ 1, 114 },
	{ 1, 42 },
	{ 508, 42 },
	{ 1, 114 },
	{ 508, 114 },
	{ 508, 42 },
	{ 1, 42 },
	{ 508, 114 },
	{ 1, 114 },
	{ 1, 42 },
	{ 508, 42 },
	{ 1, 114 },
	{ 508, 114 },
	{ 508, 42 },
	{ 1, 42 },
	{ 508, 114 },
	{ 1, 114 },
	{ 1, 42 },
	{ 508, 42 },
	{ 1, 114 },
	{ 508, 114 },
	{ 508, 42 },
	{ 1, 42 },
	{ 508, 114 },
	{ 1, 114 },
	{ 1, 42 },
	{ 508, 42 },
	{ 1, 114 },
	{ 508, 114 },
	{ 508, 42 },
	{ 1, 42 },
	{ 508, 114 },
	{ 1, 114 },
	{ 1, 42 },
	{ 508, 42 },
	{ 1, 114 },
	{ 508, 114 },
	{ 508, 42 },
	{ 1, 42 },
	{ 508, 114 },
	{ 1, 114 },
	{ 1, 42 },
	{ 508, 42 },
	{ 1, 114 },
	{ 508, 114 },
	{ 508, 42 },
	{ 1, 42 },
	{ 508, 114 },
	{ 1, 114 },
	{ 1, 42 },
	{ 508, 42 },
	{ 1, 114 },
	{ 508, 114 },
	{ 508, 42 },
	{ 1, 42 },
	{ 508, 114 },
	{ 1, 114 },
	{ 1, 42 },
	{ 508, 42 },
	{ 1, 114 },
	{ 508, 114 },
	{ 508, 42 },
	{ 1, 42 },
	{ 508, 114 },
	{ 1, 114 },
	{ 1, 114 },
	{ 1, 42 },
	{ 508, 114 },
	{ 508, 42 },
	{ 1, 42 },
	{ 1, 114 },
	{ 508, 42 },
	{ 508, 114 },
	{ 508, 42 },
	{ 508, 114 },
	{ 1, 42 },
	{ 1, 114 },
	{ 1, 42 },
	{ 1, 114 },
	{ 508, 42 },
	{ 508, 114 },
	{ 508, 42 },
	{ 508, 114 },
	{ 1, 42 },
	{ 1, 114 },
	{ 1, 42 },
	{ 1, 114 },
	{ 508, 42 },
	{ 508, 114 },
	{ 508, 42 },
	{ 508, 114 },
	{ 1, 42 },
	{ 1, 114 },
	{ 1, 42 },
	{ 1, 114 },
	{ 508, 42 },
	{ 508, 114 },
	{ 1, 114 },
	{ 1, 42 },
	{ 508, 114 },
	{ 508, 42 },
	{ 508, 114 },
	{ 508, 42 },
	{ 1, 114 },
	{ 1, 42 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C238C[] = {
	{ 1, 128 },
	{ 508, 128 },
	{ 1, 38 },
	{ 508, 38 },
	{ 508, 118 },
	{ 1, 124 },
	{ 508, 38 },
	{ 1, 38 },
	{ 1, 124 },
	{ 508, 118 },
	{ 1, 38 },
	{ 508, 38 },
	{ 508, 118 },
	{ 1, 124 },
	{ 508, 38 },
	{ 1, 38 },
	{ 1, 124 },
	{ 508, 118 },
	{ 1, 38 },
	{ 508, 38 },
	{ 508, 118 },
	{ 1, 124 },
	{ 508, 38 },
	{ 1, 38 },
	{ 1, 124 },
	{ 508, 118 },
	{ 1, 38 },
	{ 508, 38 },
	{ 508, 118 },
	{ 1, 124 },
	{ 508, 38 },
	{ 1, 38 },
	{ 1, 124 },
	{ 508, 118 },
	{ 1, 38 },
	{ 508, 38 },
	{ 508, 118 },
	{ 1, 124 },
	{ 508, 38 },
	{ 1, 38 },
	{ 1, 124 },
	{ 508, 118 },
	{ 1, 38 },
	{ 508, 38 },
	{ 508, 118 },
	{ 1, 124 },
	{ 508, 38 },
	{ 1, 38 },
	{ 1, 124 },
	{ 508, 118 },
	{ 1, 38 },
	{ 508, 38 },
	{ 508, 118 },
	{ 1, 124 },
	{ 508, 38 },
	{ 1, 38 },
	{ 1, 124 },
	{ 508, 118 },
	{ 1, 38 },
	{ 508, 38 },
	{ 508, 118 },
	{ 1, 124 },
	{ 508, 38 },
	{ 1, 38 },
	{ 1, 124 },
	{ 508, 118 },
	{ 1, 38 },
	{ 508, 38 },
	{ 508, 118 },
	{ 1, 124 },
	{ 508, 38 },
	{ 1, 38 },
	{ 1, 124 },
	{ 508, 118 },
	{ 1, 38 },
	{ 508, 38 },
	{ 508, 118 },
	{ 1, 124 },
	{ 508, 38 },
	{ 1, 38 },
	{ 1, 124 },
	{ 508, 118 },
	{ 1, 38 },
	{ 508, 38 },
	{ 508, 118 },
	{ 1, 124 },
	{ 508, 38 },
	{ 1, 38 },
	{ 1, 124 },
	{ 508, 118 },
	{ 1, 38 },
	{ 508, 38 },
	{ 1, 38 },
	{ 508, 38 },
	{ 1, 124 },
	{ 508, 118 },
	{ 508, 118 },
	{ 508, 38 },
	{ 1, 124 },
	{ 1, 38 },
	{ 1, 124 },
	{ 1, 38 },
	{ 508, 118 },
	{ 508, 38 },
	{ 508, 118 },
	{ 508, 38 },
	{ 1, 124 },
	{ 1, 38 },
	{ 508, 38 },
	{ 508, 118 },
	{ 1, 38 },
	{ 1, 124 },
	{ 508, 118 },
	{ 508, 38 },
	{ 1, 124 },
	{ 1, 38 },
	{ 1, 124 },
	{ 1, 38 },
	{ 508, 118 },
	{ 508, 38 },
	{ 508, 118 },
	{ 508, 38 },
	{ 1, 124 },
	{ 1, 38 },
	{ 1, 124 },
	{ 1, 38 },
	{ 508, 118 },
	{ 508, 38 },
	{ 508, 38 },
	{ 508, 118 },
	{ 1, 38 },
	{ 1, 124 },
	{ 1, 38 },
	{ 1, 124 },
	{ 508, 38 },
	{ 508, 118 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000C25AC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 34, poly_000C1EC4, NULL, NULL, NULL, uv_000C216C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 34, poly_000C2018, NULL, NULL, NULL, uv_000C238C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000C25DC[] = {
	{ -20, 89.99998f, 98.27812f },
	{ 20, 89.99998f, 98.27813f },
	{ -20, 90, 103.75f },
	{ 20, 90, 103.75f },
	{ -20, 87.5f, 103.75f },
	{ 20, 87.5f, 103.75f },
	{ -20, 87.5f, 107.5f },
	{ 20, 87.5f, 107.5f },
	{ -20, 85, 107.5f },
	{ 20, 85, 107.5f },
	{ -20, 85, 111.25f },
	{ 20, 85, 111.25f },
	{ -20, 82.5f, 111.25f },
	{ 20, 82.5f, 111.25f },
	{ -20, 82.5f, 115 },
	{ 20, 82.5f, 115 },
	{ -20, 80, 115 },
	{ 20, 80, 115 },
	{ -20, 80, 118.75f },
	{ 20, 80, 118.75f },
	{ -20, 77.5f, 118.75f },
	{ 20, 77.5f, 118.75f },
	{ -20, 77.5f, 122.5f },
	{ 20, 77.5f, 122.5f },
	{ -20, 75, 122.5f },
	{ 20, 75, 122.5f },
	{ -20, 75, 126.25f },
	{ 20, 75, 126.25f },
	{ -20, 72.5f, 126.25f },
	{ 20, 72.5f, 126.25f },
	{ -20, 72.5f, 130 },
	{ 20, 72.5f, 130 },
	{ -20, 70, 130 },
	{ 20, 70, 130 },
	{ -20, 70, 133.75f },
	{ 20, 70, 133.75f },
	{ -20, 67.5f, 133.75f },
	{ 20, 67.5f, 133.75f },
	{ -20, 67.5f, 137.5f },
	{ 20, 67.5f, 137.5f },
	{ -20, 65, 137.5f },
	{ 20, 65, 137.5f },
	{ -20, 65, 141.25f },
	{ 20, 65, 141.25f },
	{ -20, 62.5f, 141.25f },
	{ 20, 62.5f, 141.25f },
	{ -20, 62.5f, 145 },
	{ 20, 62.5f, 145 },
	{ -20, 60, 145 },
	{ 20, 60, 145 },
	{ -20, 60, 148.75f },
	{ 20, 60, 148.75f },
	{ -20, 57.5f, 148.75f },
	{ 20, 57.5f, 148.75f },
	{ -20, 57.5f, 152.5f },
	{ 20, 57.5f, 152.5f },
	{ -20, 55, 152.5f },
	{ 20, 55, 152.5f },
	{ -20, 55, 156.25f },
	{ 20, 55, 156.25f },
	{ -20, 52.5f, 156.25f },
	{ 20, 52.5f, 156.25f },
	{ -20, 52.5f, 160 },
	{ 20, 52.5f, 160 },
	{ -20, 50, 160 },
	{ 20, 50, 160 },
	{ -20, 50, 163.75f },
	{ 20, 50, 163.75f },
	{ -20, 47.5f, 163.75f },
	{ 20, 47.5f, 163.75f },
	{ -20, 47.5f, 167.5f },
	{ 20, 47.5f, 167.5f },
	{ -20, 45, 167.5f },
	{ 20, 45, 167.5f },
	{ -20, 45, 171.25f },
	{ 20, 45, 171.25f },
	{ -20, 42.5f, 171.25f },
	{ 20, 42.5f, 171.25f },
	{ -20, 42.5f, 175 },
	{ 20, 42.5f, 175 },
	{ -20, 40, 175 },
	{ 20, 40, 175 },
	{ -20, 40, 178.75f },
	{ 20, 40, 178.75f },
	{ -20, 37.5f, 178.75f },
	{ 20, 37.5f, 178.75f },
	{ -20, 37.5f, 182.5f },
	{ 20, 37.5f, 182.5f },
	{ -20, 35, 182.5f },
	{ 20, 35, 182.5f },
	{ -20, 35, 186.25f },
	{ 20, 35, 186.25f },
	{ 20, 32.5f, 186.25f },
	{ -20, 32.5f, 186.25f },
	{ -20, 32.5f, 190 },
	{ 20, 32.5f, 190 },
	{ -20, 30, 193.75f },
	{ 20, 30, 193.75f },
	{ 20, 30, 190 },
	{ -20, 30, 190 },
	{ -20, 27.5f, 193.75f },
	{ 20, 27.5f, 193.75f },
	{ -20, 27.5f, 197.5f },
	{ 20, 27.5f, 197.5f },
	{ 20, 25, 197.5f },
	{ -20, 25, 197.5f },
	{ -20, 22.5f, 201.25f },
	{ 20, 22.5f, 201.25f },
	{ 20, 25, 201.25f },
	{ -20, 25, 201.25f },
	{ -20, 22.5f, 205 },
	{ 20, 22.5f, 205 },
	{ -20, 17.5f, 212.5f },
	{ -20, 20, 208.75f },
	{ -20, 15, 216 },
	{ 20, 17.5f, 212.5f },
	{ 20, 20, 208.75f },
	{ 20, 15, 216 },
	{ 20, 15, 212.5f },
	{ 20, 12.5f, 216 },
	{ 20, 17.5f, 208.75f },
	{ 20, 20, 205 },
	{ -20, 12.5f, 216 },
	{ -20, 15, 212.5f },
	{ -20, 17.5f, 208.75f },
	{ -20, 20, 205 },
	{ -20, 7.5f, 223.75f },
	{ -20, 10, 220 },
	{ -20, 7.5f, 231 },
	{ 20, 7.5f, 223.75f },
	{ 20, 10, 220 },
	{ 20, 12.5f, 220 },
	{ 20, 10, 223.75f },
	{ 20, 7.5f, 231 },
	{ 20, 7.5f, 227.5f },
	{ -20, 7.5f, 227.5f },
	{ -20, 12.5f, 220 },
	{ -20, 10, 223.75f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000C2C54[] = {
	{ 0, 1, -0.00001f },
	{ 0, 1, -0.00001f },
	{ 0, 0.7071069f, 0.707106f },
	{ 0, 0.7071069f, 0.707106f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000C32CC = { vertex_000C25DC, normal_000C2C54, LengthOfArray<Sint32>(vertex_000C25DC), meshlist_000C25AC, matlist_000C1E9C, LengthOfArray<Uint16>(meshlist_000C25AC), LengthOfArray<Uint16>(matlist_000C1E9C), { 0, 48.75f, 164.6391f }, 78.13666f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000C32F4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C32CC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000C3328[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 57, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000C333C[] = {
	0x8000u | 12, 17, 1, 21, 0, 20, 11, 16, 10, 15, 9, 14, 8,
	0x8000u | 14, 1, 17, 2, 12, 3, 13, 4, 18, 5, 22, 6, 23, 7, 19,
	14, 7, 8, 19, 14, 23, 15, 22, 16, 18, 20, 13, 21, 12, 17
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C3394[] = {
	{ 264, 255 },
	{ 264, 0 },
	{ 245, 255 },
	{ 245, 0 },
	{ 224, 255 },
	{ 224, 0 },
	{ 202, 255 },
	{ 202, 0 },
	{ 181, 255 },
	{ 181, 0 },
	{ 160, 255 },
	{ 160, 0 },
	{ 10, 0 },
	{ 10, 255 },
	{ 32, 0 },
	{ 32, 255 },
	{ 53, 0 },
	{ 53, 255 },
	{ 74, 0 },
	{ 74, 255 },
	{ 96, 0 },
	{ 96, 255 },
	{ 117, 0 },
	{ 117, 255 },
	{ 138, 0 },
	{ 138, 255 },
	{ 138, 0 },
	{ 160, 0 },
	{ 138, 255 },
	{ 160, 255 },
	{ 372, 255 },
	{ 181, 255 },
	{ 350, 255 },
	{ 202, 255 },
	{ 328, 255 },
	{ 224, 255 },
	{ 308, 255 },
	{ 245, 255 },
	{ 286, 255 },
	{ 264, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000C3434[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000C333C, NULL, NULL, NULL, uv_000C3394, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000C344C[] = {
	{ 88.45031f, 2.5f, 23.70019f },
	{ 88.45031f, 2.5f, -23.70019f },
	{ 64.75013f, 2.5f, -64.75011f },
	{ 23.7002f, 2.500008f, -88.45029f },
	{ -23.70018f, 2.500008f, -88.45031f },
	{ -64.75011f, 2.500008f, -64.75013f },
	{ -88.45031f, 2.5f, -23.7002f },
	{ -88.45031f, 2.5f, 23.70018f },
	{ -64.75013f, 2.5f, 64.75011f },
	{ -23.7002f, 2.499992f, 88.45031f },
	{ 23.70019f, 2.499992f, 88.45031f },
	{ 64.75011f, 2.499992f, 64.75011f },
	{ 64.75013f, -53, -64.75011f },
	{ 23.7002f, -53, -88.45029f },
	{ -64.75013f, -53, 64.75011f },
	{ -23.7002f, -53, 88.45031f },
	{ 23.70019f, -53, 88.45031f },
	{ 88.45031f, -53, -23.70019f },
	{ -23.70018f, -53, -88.45031f },
	{ -88.45031f, -53, 23.70018f },
	{ 64.75011f, -53, 64.75011f },
	{ 88.45031f, -53, 23.70019f },
	{ -64.75011f, -53, -64.75013f },
	{ -88.45031f, -53, -23.7002f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000C356C[] = {
	{ -0.965926f, 0, -0.258819f },
	{ -0.965926f, 0, 0.258819f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.258819f, 0, 0.965926f },
	{ 0.258819f, 0, 0.965926f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.965926f, 0, 0.258819f },
	{ 0.965926f, 0, -0.258819f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.258819f, 0, -0.965926f },
	{ -0.258819f, 0, -0.965926f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.535395f, 0.653227f, 0.535395f },
	{ -0.195968f, 0.653227f, 0.731363f },
	{ 0.535395f, 0.653227f, -0.535394f },
	{ 0.195968f, 0.653227f, -0.731363f },
	{ -0.195968f, 0.653227f, -0.731363f },
	{ -0.731363f, 0.653227f, 0.195968f },
	{ 0.195968f, 0.653227f, 0.731363f },
	{ 0.731363f, 0.653227f, -0.195968f },
	{ -0.535395f, 0.653227f, -0.535395f },
	{ -0.731363f, 0.653227f, -0.195968f },
	{ 0.535395f, 0.653227f, 0.535395f },
	{ 0.731363f, 0.653227f, 0.195968f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000C368C = { vertex_000C344C, normal_000C356C, LengthOfArray<Sint32>(vertex_000C344C), meshlist_000C3434, matlist_000C3328, LengthOfArray<Uint16>(meshlist_000C3434), LengthOfArray<Uint16>(matlist_000C3328), { 0, -25.24999f, -0.00004f }, 125.0876f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000C36B4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C368C, 0, 83, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000C36E8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 57, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000C36FC[] = {
	4, 7, 0, 6, 5,
	10, 0, 1, 5, 2, 6, 3, 7, 4, 0, 1
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C371C[] = {
	{ 224, 146 },
	{ 286, 146 },
	{ 160, 146 },
	{ 350, 146 },
	{ 32, 146 },
	{ 32, 108 },
	{ 96, 146 },
	{ 96, 108 },
	{ 160, 146 },
	{ 160, 108 },
	{ 224, 146 },
	{ 224, 108 },
	{ 286, 146 },
	{ 286, 108 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000C3754[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000C36FC, NULL, NULL, NULL, uv_000C371C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000C376C[] = {
	{ 300, -107, -300 },
	{ 300, 100, -300 },
	{ -300, 100, -300 },
	{ -300, 100, 300 },
	{ 300, 100, 300 },
	{ -300, -107, -300 },
	{ -300, -107, 300 },
	{ 300, -107, 300 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000C37CC[] = {
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000C382C = { vertex_000C376C, normal_000C37CC, LengthOfArray<Sint32>(vertex_000C376C), meshlist_000C3754, matlist_000C36E8, LengthOfArray<Uint16>(meshlist_000C3754), LengthOfArray<Uint16>(matlist_000C36E8), { 0, -3.5f, 0 }, 424.2641f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000C3854 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C382C, 0, -103, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000C3888[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 56, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 56, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_ONE | NJD_SA_ONE }
};

extern "C" __declspec(dllexport) Sint16 poly_000C389C[] = {
	14, 0, 8, 1, 6, 5, 7, 4, 9, 3, 11, 2, 10, 0, 8
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C38BC[] = {
	{ 42, 0 },
	{ 42, 255 },
	{ 128, 0 },
	{ 128, 255 },
	{ 213, 0 },
	{ 213, 255 },
	{ 298, 0 },
	{ 298, 255 },
	{ 384, 0 },
	{ 384, 255 },
	{ 468, 0 },
	{ 468, 255 },
	{ 552, 0 },
	{ 552, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000C38F4[] = {
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000C389C, NULL, NULL, NULL, uv_000C38BC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000C390C[] = {
	{ 6.5f, 116, 82.5f },
	{ 0, 116, 78.5f },
	{ 6.5f, 116, 90 },
	{ 0, 116, 94 },
	{ -6.5f, 116, 90 },
	{ -6.5f, 116, 82.5f },
	{ 0, 68, 78.5f },
	{ -6.5f, 68, 82.5f },
	{ 6.5f, 68, 82.5f },
	{ -6.5f, 68, 90 },
	{ 6.5f, 68, 90 },
	{ 0, 68, 94 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000C399C[] = {
	{ 0.872954f, 0, -0.487803f },
	{ 0, 0, -1 },
	{ 0.872954f, 0, 0.487803f },
	{ 0, 0, 1 },
	{ -0.872954f, 0, 0.487803f },
	{ -0.872954f, 0, -0.487803f },
	{ 0, 0, -1 },
	{ -0.872954f, 0, -0.487803f },
	{ 0.872954f, 0, -0.487803f },
	{ -0.872954f, 0, 0.487803f },
	{ 0.872954f, 0, 0.487803f },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000C3A2C = { vertex_000C390C, normal_000C399C, LengthOfArray<Sint32>(vertex_000C390C), meshlist_000C38F4, matlist_000C3888, LengthOfArray<Uint16>(meshlist_000C38F4), LengthOfArray<Uint16>(matlist_000C3888), { 0, 92, 86.25f }, 24.92081f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000C3A54 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C3A2C, 0, -30.5f, 0, 0, 0x1555, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000C3A88[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000C3AC4[] = {
	6, 2, 3, 1, 0, 5, 4,
	3, 2, 6, 3,
	0x8000u | 5, 3, 7, 6, 9, 8
};

extern "C" __declspec(dllexport) Sint16 poly_000C3AE6[] = {
	0x8000u | 5, 5, 10, 11, 8, 9,
	3, 5, 4, 11
};

extern "C" __declspec(dllexport) Sint16 poly_000C3AFA[] = {
	6, 3, 7, 0, 9, 4, 11
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C3B08[] = {
	{ 765, 255 },
	{ 672, 0 },
	{ 456, 254 },
	{ 456, 0 },
	{ 0, 255 },
	{ 98, 0 },
	{ 0, 255 },
	{ 380, 255 },
	{ 74, 0 },
	{ 74, 0 },
	{ 384, 0 },
	{ 380, 255 },
	{ 648, 0 },
	{ 765, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C3B40[] = {
	{ 765, 255 },
	{ 480, 254 },
	{ 480, 0 },
	{ 0, 255 },
	{ 122, 0 },
	{ 765, 255 },
	{ 672, 0 },
	{ 480, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C3B60[] = {
	{ 99, 249 },
	{ 386, 249 },
	{ 0, -163 },
	{ 510, -86 },
	{ 131, -504 },
	{ 354, -504 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000C3B78[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000C3AC4, NULL, NULL, NULL, uv_000C3B08, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000C3AE6, NULL, NULL, NULL, uv_000C3B40, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000C3AFA, NULL, NULL, NULL, uv_000C3B60, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000C3BC0[] = {
	{ -40.47507f, 8.538565f, 16.58506f },
	{ -62.94395f, -20.15388f, 29.22146f },
	{ -6.406186f, -20.26364f, 83.86398f },
	{ -1.692288f, 7.761085f, 36.85499f },
	{ -43.55988f, 8.516596f, -19.56364f },
	{ -65.00536f, -26.71448f, -21.88352f },
	{ 49.35416f, -24.24161f, 53.8226f },
	{ 18.88044f, 2.08641f, 24.24291f },
	{ 37.98842f, -36.04985f, -9.285699f },
	{ 7.528f, -6.956064f, -3.9349f },
	{ -20.51702f, -43.40686f, -52.20745f },
	{ -25.4984f, -4.116624f, -27.50465f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000C3C50[] = {
	{ -0.390103f, 0.915754f, 0.095989f },
	{ -0.6695189f, 0.6832539f, 0.291391f },
	{ -0.052531f, 0.870895f, 0.488653f },
	{ 0.020448f, 0.974454f, 0.223656f },
	{ -0.378789f, 0.812928f, -0.442342f },
	{ -0.710193f, 0.510373f, -0.484917f },
	{ 0.556825f, 0.8293689f, 0.045759f },
	{ 0.470063f, 0.871769f, -0.138058f },
	{ 0.5948139f, 0.561268f, -0.575478f },
	{ 0.440892f, 0.746588f, -0.498217f },
	{ 0.108247f, 0.491078f, -0.864364f },
	{ 0.078922f, 0.674979f, -0.733604f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000C3CE0 = { vertex_000C3BC0, normal_000C3C50, LengthOfArray<Sint32>(vertex_000C3BC0), meshlist_000C3B78, matlist_000C3A88, LengthOfArray<Uint16>(meshlist_000C3B78), LengthOfArray<Uint16>(matlist_000C3A88), { -7.825605f, -17.43415f, 15.82826f }, 91.75361f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000C3D08 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C3CE0, 836, -105, 701, 0xFFFF88A8, 0xFFFEF75B, 0xFFFF7F78, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000C3D3C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000C3D50[] = {
	3, 8, 9, 5,
	6, 9, 6, 5, 7, 4, 1,
	5, 7, 2, 1, 3, 0
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C3D74[] = {
	{ 150, 8 },
	{ 0, 27 },
	{ 150, -113 },
	{ 0, 27 },
	{ 0, -82 },
	{ 150, -113 },
	{ 0, -228 },
	{ 127, -222 },
	{ 153, -340 },
	{ 0, -228 },
	{ 0, -324 },
	{ 153, -340 },
	{ 0, -476 },
	{ 144, -460 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000C3DAC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000C3D50, NULL, NULL, NULL, uv_000C3D74, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000C3DC4[] = {
	{ 912.4812f, -276.8047f, 500.1909f },
	{ 907.2985f, -346.4493f, 457.3608f },
	{ 846.5294f, -346.4493f, 354.8431f },
	{ 822.6083f, -276.8047f, 370.9905f },
	{ 905.6113f, -467.9404f, 428.617f },
	{ 903.7119f, -577.2861f, 398.6419f },
	{ 844.6121f, -577.2861f, 256.4452f },
	{ 831.3931f, -498.9404f, 363.0199f },
	{ 907.6246f, -651, 368.1859f },
	{ 848.5245f, -651, 225.9892f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000C3E3C[] = {
	{ 0.816498f, 0.314772f, -0.483993f },
	{ 0.823658f, 0.149548f, -0.547013f },
	{ 0.821076f, 0.102828f, -0.561481f },
	{ 0.816498f, 0.314772f, -0.483993f },
	{ 0.8408059f, 0.039535f, -0.5398909f },
	{ 0.888612f, 0.271968f, -0.369326f },
	{ 0.897087f, 0.237106f, -0.372848f },
	{ 0.868782f, 0.170254f, -0.465007f },
	{ 0.9041449f, 0.203249f, -0.375782f },
	{ 0.9041449f, 0.203249f, -0.375782f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000C3EB4 = { vertex_000C3DC4, normal_000C3E3C, LengthOfArray<Sint32>(vertex_000C3DC4), meshlist_000C3DAC, matlist_000C3D3C, LengthOfArray<Uint16>(meshlist_000C3DAC), LengthOfArray<Uint16>(matlist_000C3D3C), { 867.5448f, -463.9023f, 363.0901f }, 229.8913f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000C3EDC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C3EB4, -605, 431, 1620, 0, 0x3BF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000C3F10[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000C3F4C[] = {
	18, 22, 8, 21, 6, 20, 4, 19, 2, 18, 16, 17, 14, 0, 12, 23, 10, 22, 8
};

extern "C" __declspec(dllexport) Sint16 poly_000C3F72[] = {
	0x8000u | 6, 12, 10, 16, 6, 2, 4,
	3, 6, 8, 10,
	3, 12, 14, 16
};

extern "C" __declspec(dllexport) Sint16 poly_000C3F90[] = {
	0x8000u | 18, 7, 23, 9, 0, 11, 17, 13, 18, 15, 19, 1, 20, 3, 21, 5, 22, 7, 23
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C3FB8[] = {
	{ 1530, 255 },
	{ 1527, 75 },
	{ 1341, 255 },
	{ 1340, 79 },
	{ 1136, 255 },
	{ 1125, 79 },
	{ 964, 255 },
	{ 959, 79 },
	{ 754, 255 },
	{ 744, 79 },
	{ 584, 255 },
	{ 528, 79 },
	{ 382, 255 },
	{ 360, 79 },
	{ 194, 254 },
	{ 194, 79 },
	{ 2, 254 },
	{ 2, 79 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C4000[] = {
	{ 173, -928 },
	{ -1, -577 },
	{ 1203, -925 },
	{ 718, 258 },
	{ 1528, -454 },
	{ 1364, -81 },
	{ 718, 258 },
	{ 147, 63 },
	{ -1, -577 },
	{ 173, -928 },
	{ 741, -1266 },
	{ 1203, -925 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C4030[] = {
	{ 253, 255 },
	{ 125, -255 },
	{ 145, 255 },
	{ 1019, -255 },
	{ 1020, 255 },
	{ 876, -255 },
	{ 884, 255 },
	{ 748, -255 },
	{ 761, 255 },
	{ 614, -255 },
	{ 630, 255 },
	{ 506, -255 },
	{ 513, 255 },
	{ 372, -255 },
	{ 396, 255 },
	{ 252, -255 },
	{ 253, 255 },
	{ 125, -255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000C4078[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000C3F4C, NULL, NULL, NULL, uv_000C3FB8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, poly_000C3F72, NULL, NULL, NULL, uv_000C4000, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000C3F90, NULL, NULL, NULL, uv_000C4030, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000C40C0[] = {
	{ -75.58723f, 37.4488f, 74.76279f },
	{ 122.6353f, -17.95687f, -8.663314f },
	{ 94.97123f, 62.62402f, -3.309875f },
	{ 98.30507f, -5.311749f, -100.97f },
	{ 76.26035f, 68.51137f, -50.9017f },
	{ 14.16997f, 1.290325f, -140.5842f },
	{ 2.47815f, 79.10683f, -94.35053f },
	{ -94.85838f, -2.606903f, -98.13947f },
	{ -62.99582f, 76.08611f, -69.47512f },
	{ -125.558f, -12.87427f, -17.12983f },
	{ -79.97172f, 85.31091f, 12.45231f },
	{ -101.3963f, -28.51153f, 97.73057f },
	{ -59.99241f, 63.37384f, 57.2286f },
	{ -4.046546f, -36.53521f, 146.4634f },
	{ 4.918075f, 45.16207f, 100.2038f },
	{ 74.17853f, -29.68969f, 85.51522f },
	{ 57.71981f, 57.51045f, 56.85154f },
	{ 3.0408f, 21.5867f, 126.2494f },
	{ 67.60199f, 34.17868f, 74.23563f },
	{ 106.3891f, 47.48769f, -3.901388f },
	{ 84.48251f, 54.60029f, -72.78237f },
	{ 3.305775f, 64.00421f, -104.8104f },
	{ -73.59853f, 60.71245f, -80.22732f },
	{ -94.52502f, 69.6121f, 1.866514f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000C41E0[] = {
	{ -0.616156f, 0.518451f, 0.592925f },
	{ 0.9594809f, 0.241815f, 0.144645f },
	{ 0.517765f, 0.845282f, 0.131977f },
	{ 0.71518f, 0.42443f, -0.555317f },
	{ 0.42407f, 0.887666f, -0.179482f },
	{ 0.070714f, 0.478779f, -0.875083f },
	{ 0.08401699f, 0.918812f, -0.38565f },
	{ -0.6838599f, 0.422087f, -0.595129f },
	{ -0.389735f, 0.839559f, -0.378481f },
	{ -0.922793f, 0.383747f, -0.034523f },
	{ -0.338414f, 0.890884f, 0.302989f },
	{ -0.676128f, 0.407663f, 0.613728f },
	{ -0.220681f, 0.810077f, 0.5432079f },
	{ 0.06581999f, 0.351458f, 0.9338869f },
	{ 0.067334f, 0.7992319f, 0.597239f },
	{ 0.730547f, 0.193234f, 0.654952f },
	{ 0.381035f, 0.815533f, 0.435566f },
	{ 0.11074f, 0.485089f, 0.867425f },
	{ 0.659929f, 0.417354f, 0.624748f },
	{ 0.88591f, 0.442086f, 0.140438f },
	{ 0.67184f, 0.553135f, -0.492618f },
	{ 0.032417f, 0.596434f, -0.802007f },
	{ -0.612502f, 0.534605f, -0.58227f },
	{ -0.8309439f, 0.5544879f, 0.045562f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000C4300 = { vertex_000C40C0, normal_000C41E0, LengthOfArray<Sint32>(vertex_000C40C0), meshlist_000C4078, matlist_000C3F10, LengthOfArray<Uint16>(meshlist_000C4078), LengthOfArray<Uint16>(matlist_000C3F10), { -1.461323f, 24.38785f, 2.939629f }, 180.1149f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000C4328 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C4300, 834, -203, 701, 0xFFFFFAE8, 0x90D6, 0xFFFFFF4C, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000C435C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 36, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000C4384[] = {
	5, 6, 7, 4, 8, 5,
	3, 5, 6, 4
};

extern "C" __declspec(dllexport) Sint16 poly_000C4398[] = {
	0x8000u | 10, 8, 3, 7, 2, 6, 1, 5, 0, 8, 3
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C43B0[] = {
	{ 0, 16 },
	{ 238, 16 },
	{ 90, 187 },
	{ 238, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, 16 },
	{ 90, 187 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C43D0[] = {
	{ 1158, 143 },
	{ 1136, 255 },
	{ 896, 143 },
	{ 896, 255 },
	{ 628, 143 },
	{ 650, 255 },
	{ 384, 143 },
	{ 384, 255 },
	{ 139, 143 },
	{ 116, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000C43F8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000C4384, NULL, NULL, NULL, uv_000C43B0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000C4398, NULL, NULL, NULL, uv_000C43D0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000C4428[] = {
	{ -7.14999f, 0, -7.050018f },
	{ -7.149985f, 0, 7.25f },
	{ 7.150015f, 0, 7.25f },
	{ 7.150011f, 0, -7.050018f },
	{ -2.696643f, 9.133332f, -4.026672f },
	{ -8.149989f, 4, -8.050017f },
	{ -8.149984f, 4, 6.25f },
	{ 6.150015f, 4, 6.25f },
	{ 6.150011f, 4, -8.050017f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000C4494[] = {
	{ -0.666667f, -0.333333f, -0.666667f },
	{ -0.592398f, 0.052877f, 0.803908f },
	{ 0.666667f, 0.333333f, 0.666667f },
	{ 0.803908f, 0.052877f, -0.592398f },
	{ -0.09656399f, 0.976685f, -0.191734f },
	{ -0.696376f, 0.232268f, -0.679052f },
	{ -0.697108f, 0.431032f, 0.572933f },
	{ 0.5559649f, 0.614226f, 0.560026f },
	{ 0.587458f, 0.406762f, -0.699598f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000C4500 = { vertex_000C4428, normal_000C4494, LengthOfArray<Sint32>(vertex_000C4428), meshlist_000C43F8, matlist_000C435C, LengthOfArray<Uint16>(meshlist_000C43F8), LengthOfArray<Uint16>(matlist_000C435C), { -0.499988f, 4.566667f, -0.400009f }, 10.81875f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000C4528 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C4500, -296.5f, 0, -174.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000C455C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 37, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000C4584[] = {
	4, 1, 4, 7, 11,
	4, 6, 3, 5, 2,
	4, 9, 10, 8, 0
};

extern "C" __declspec(dllexport) Sint16 poly_000C45A2[] = {
	4, 7, 11, 9, 10,
	4, 3, 6, 0, 8
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C45B8[] = {
	{ 1020, 0 },
	{ 0 },
	{ 1020, 76 },
	{ 0, 76 },
	{ 1020, 169 },
	{ 0, 169 },
	{ 1020, 255 },
	{ 0, 255 },
	{ 1020, 76 },
	{ 0, 76 },
	{ 1020, 169 },
	{ 0, 169 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C45E8[] = {
	{ 510, 191 },
	{ 0, 191 },
	{ 510, 59 },
	{ 0, 59 },
	{ 0, -63 },
	{ 510, -63 },
	{ 0, 59 },
	{ 510, 59 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000C4608[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000C4584, NULL, NULL, NULL, uv_000C45B8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000C45A2, NULL, NULL, NULL, uv_000C45E8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000C4638[] = {
	{ -20, 2.5f, -13.5f },
	{ 20, 7.5f, -25.08997f },
	{ -20, 0, -2.75f },
	{ -20, 2.5f, -2.75f },
	{ -20, 7.5f, -25.09f },
	{ 20, 0, -2.75f },
	{ 20, 2.5f, -2.75f },
	{ 20, 5.25f, -25.09f },
	{ 20, 2.5f, -13.5f },
	{ 20, 5.25f, -13.5f },
	{ -20, 5.25f, -13.5f },
	{ -20, 5.25f, -25.09f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000C46C8[] = {
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, -0.00015f, 1 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, -0.00015f, 1 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.707101f, 0.707112f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.707101f, 0.707112f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000C4758 = { vertex_000C4638, normal_000C46C8, LengthOfArray<Sint32>(vertex_000C4638), meshlist_000C4608, matlist_000C455C, LengthOfArray<Uint16>(meshlist_000C4608), LengthOfArray<Uint16>(matlist_000C455C), { 0, 3.75f, -13.92f }, 22.90783f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000C4780 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C4758, 0, 0, 293.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000C47B4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000C47C8[] = {
	22, 31, 32, 28, 29, 25, 26, 22, 23, 19, 20, 16, 17, 13, 14, 10, 11, 7, 8, 4, 5, 1, 2,
	22, 1, 0, 4, 3, 7, 6, 10, 9, 13, 12, 16, 15, 19, 18, 22, 21, 25, 24, 28, 27, 31, 30
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C4824[] = {
	{ 3284, -508 },
	{ 3289, -286 },
	{ 3058, -512 },
	{ 3060, -282 },
	{ 2864, -513 },
	{ 2865, -282 },
	{ 2581, -508 },
	{ 2585, -278 },
	{ 2368, -508 },
	{ 2372, -276 },
	{ 2136, -508 },
	{ 2138, -282 },
	{ 1872, -508 },
	{ 1874, -282 },
	{ 1604, -508 },
	{ 1611, -284 },
	{ 1317, -510 },
	{ 1321, -286 },
	{ 1035, -510 },
	{ 1029, -284 },
	{ 791, -508 },
	{ 788, -282 },
	{ 791, -508 },
	{ 785, -765 },
	{ 1035, -510 },
	{ 1030, -765 },
	{ 1317, -510 },
	{ 1308, -765 },
	{ 1604, -508 },
	{ 1545, -765 },
	{ 1872, -508 },
	{ 1867, -765 },
	{ 2136, -508 },
	{ 2131, -765 },
	{ 2368, -508 },
	{ 2359, -765 },
	{ 2581, -508 },
	{ 2572, -765 },
	{ 2864, -513 },
	{ 2854, -765 },
	{ 3058, -512 },
	{ 3047, -765 },
	{ 3284, -508 },
	{ 3274, -765 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000C48D4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000C47C8, NULL, NULL, NULL, uv_000C4824, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000C48EC[] = {
	{ -371.5585f, 210.7373f, -600.7721f },
	{ -378.7115f, 106, -592.9023f },
	{ -377.4104f, 67, -573.4336f },
	{ -288.5986f, 209.5777f, -711.3931f },
	{ -291.6225f, 106, -700.6299f },
	{ -284.9116f, 67, -675.2398f },
	{ -190.5129f, 208.9773f, -825.7402f },
	{ -198.259f, 106, -823.9883f },
	{ -201.3002f, 67, -813.4362f },
	{ -9.28051f, 208.2653f, -812.6105f },
	{ 11.83639f, 106, -809.3354f },
	{ 12.47601f, 67, -824.9083f },
	{ 81.25762f, 209.8446f, -657.8628f },
	{ 81.21934f, 106, -675.697f },
	{ 86.2625f, 67, -696.655f },
	{ 192.4408f, 209.4949f, -581.2429f },
	{ 195.1872f, 106, -599.9248f },
	{ 202.6793f, 67, -623.0398f },
	{ 247.2558f, 210.4277f, -464.2963f },
	{ 259.3234f, 106, -485.9167f },
	{ 281.1651f, 67, -515.3887f },
	{ 234.8142f, 210.1344f, -345.0669f },
	{ 245.1694f, 106, -365.8979f },
	{ 264.1874f, 67, -394.7678f },
	{ 324.2382f, 207.6599f, -213.2067f },
	{ 335.0857f, 106, -233.1294f },
	{ 352.0869f, 67, -261.3979f },
	{ 327.3951f, 208.5414f, -104.6024f },
	{ 335.945f, 106, -122.989f },
	{ 349.1803f, 67, -149.7175f },
	{ 423.2984f, 209.4389f, -19.56519f },
	{ 423.6075f, 106, -28.70313f },
	{ 422.8341f, 67, -41.86255f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000C4A78[] = {
	{ -0.777536f, -0.018239f, -0.628574f },
	{ -0.7335449f, -0.250416f, -0.631825f },
	{ -0.671693f, -0.419977f, -0.610285f },
	{ -0.788187f, -0.00593f, -0.6154079f },
	{ -0.78934f, -0.170934f, -0.589681f },
	{ -0.7353809f, -0.364344f, -0.571374f },
	{ -0.393829f, -0.009035f, -0.919139f },
	{ -0.445f, -0.050348f, -0.894114f },
	{ -0.548938f, -0.136353f, -0.824667f },
	{ 0.49755f, 0.050444f, -0.865968f },
	{ 0.550452f, 0.14703f, -0.821818f },
	{ 0.402751f, 0.192155f, -0.894913f },
	{ 0.722942f, 0.142881f, -0.675973f },
	{ 0.70231f, 0.277092f, -0.655729f },
	{ 0.69743f, 0.383299f, -0.605535f },
	{ 0.735262f, 0.158024f, -0.659103f },
	{ 0.660469f, 0.37013f, -0.653287f },
	{ 0.556332f, 0.533392f, -0.637171f },
	{ 0.9799539f, 0.120801f, -0.158418f },
	{ 0.932363f, 0.322136f, -0.164095f },
	{ 0.791751f, 0.53814f, -0.289027f },
	{ 0.951869f, 0.152542f, -0.265852f },
	{ 0.908609f, 0.348551f, -0.230093f },
	{ 0.863904f, 0.496646f, -0.083745f },
	{ 0.952541f, 0.146405f, -0.266891f },
	{ 0.91524f, 0.32733f, -0.234927f },
	{ 0.785664f, 0.548153f, -0.28681f },
	{ 0.911011f, 0.117675f, -0.395235f },
	{ 0.907084f, 0.245713f, -0.341794f },
	{ 0.9079289f, 0.376314f, -0.184532f },
	{ 0.7269289f, 0.121579f, -0.675864f },
	{ 0.751287f, 0.243411f, -0.613449f },
	{ 0.7612939f, 0.387492f, -0.5198849f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000C4C04 = { vertex_000C48EC, normal_000C4A78, LengthOfArray<Sint32>(vertex_000C48EC), meshlist_000C48D4, matlist_000C47B4, LengthOfArray<Uint16>(meshlist_000C48D4), LengthOfArray<Uint16>(matlist_000C47B4), { 22.44801f, 138.8686f, -422.6527f }, 568.6902f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000C4C2C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C4C04, 68, -287, 2076, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000C4C60[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 42, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000C4C88[] = {
	6, 16, 1, 17, 2, 0, 3,
	0x8000u | 6, 3, 6, 2, 5, 1, 4,
	6, 0, 15, 17, 14, 16, 13,
	6, 7, 10, 8, 11, 9, 12,
	3, 13, 14, 10,
	0x8000u | 5, 10, 11, 14, 12, 15,
	6, 9, 6, 8, 5, 7, 4,
	6, 23, 24, 29, 30, 20, 21,
	5, 32, 26, 25, 23, 22,
	8, 20, 21, 32, 18, 26, 27, 23, 24,
	3, 29, 20, 19,
	0x8000u | 5, 20, 19, 32, 31, 25,
	0x8000u | 5, 23, 22, 29, 28, 19
};

extern "C" __declspec(dllexport) Sint16 poly_000C4D2E[] = {
	0x8000u | 6, 3, 0, 6, 15, 9, 12,
	0x8000u | 5, 30, 21, 24, 18, 27
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C4D48[] = {
	{ 432, 255 },
	{ 765, 255 },
	{ 446, 152 },
	{ 765, 144 },
	{ 432, 0 },
	{ 765, 0 },
	{ 0 },
	{ 510, 0 },
	{ 0, 144 },
	{ 510, 115 },
	{ 0, 255 },
	{ 510, 255 },
	{ 432, 0 },
	{ 0 },
	{ 446, 152 },
	{ 0, 157 },
	{ 432, 255 },
	{ 0, 255 },
	{ 442, 255 },
	{ 765, 255 },
	{ 436, 109 },
	{ 765, 140 },
	{ 482, 0 },
	{ 765, 0 },
	{ 510, 255 },
	{ 510, 157 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, 140 },
	{ 510, 157 },
	{ 0 },
	{ 510, 0 },
	{ 482, 0 },
	{ 0 },
	{ 436, 109 },
	{ 0, 115 },
	{ 442, 255 },
	{ 0, 255 },
	{ 765, 93 },
	{ 765, 0 },
	{ 470, 82 },
	{ 446, 0 },
	{ 0, 90 },
	{ 0 },
	{ 601, 85 },
	{ 228, 96 },
	{ 233, 255 },
	{ 0, 93 },
	{ 0, 255 },
	{ 765, 71 },
	{ 765, 0 },
	{ 601, 85 },
	{ 601, 0 },
	{ 228, 96 },
	{ 225, 0 },
	{ 0, 93 },
	{ 0 },
	{ 470, 82 },
	{ 0, 90 },
	{ 0, 255 },
	{ 765, 71 },
	{ 765, 255 },
	{ 601, 85 },
	{ 609, 255 },
	{ 233, 255 },
	{ 765, 93 },
	{ 765, 255 },
	{ 470, 82 },
	{ 470, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C4E60[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 95, 255 },
	{ 155, 0 },
	{ 0, 254 },
	{ 0 },
	{ 0, 81 },
	{ 178, 255 },
	{ 85, 0 },
	{ 255, 212 },
	{ 203, 33 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000C4E8C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 13, poly_000C4C88, NULL, NULL, NULL, uv_000C4D48, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000C4D2E, NULL, NULL, NULL, uv_000C4E60, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000C4EBC[] = {
	{ -290.6149f, 34.93024f, -130.2838f },
	{ -315.0571f, -75.34011f, -216.7362f },
	{ -321.8285f, -23.75414f, -194.6863f },
	{ -321.9628f, 33.01746f, -146.9395f },
	{ -443.4281f, -69.82585f, -76.59508f },
	{ -425.4149f, -23.18891f, -75.96215f },
	{ -378.1878f, 7.857979f, -71.57726f },
	{ -390.9881f, -60.84172f, 15.58323f },
	{ -385.7681f, -5.295517f, 2.124266f },
	{ -353.4068f, 12.46053f, -20.82147f },
	{ -320.183f, -44.67065f, 51.53452f },
	{ -323.285f, -0.669571f, 33.16285f },
	{ -319.3197f, 25.59868f, -5.585924f },
	{ -229.4969f, -58.07085f, -68.53529f },
	{ -244.17f, -7.57119f, -72.00305f },
	{ -284.6389f, 29.14584f, -82.28218f },
	{ -254.5696f, -65.66538f, -165.2975f },
	{ -263.9149f, -9.063191f, -160.0857f },
	{ -88.50298f, -16.1368f, -204.222f },
	{ -102.6698f, -75.35162f, -242.5806f },
	{ -110.1995f, -40.61383f, -230.2422f },
	{ -110.1813f, -25.16451f, -212.5499f },
	{ -126.9854f, -65.97819f, -110.0863f },
	{ -128.8405f, -21.90669f, -121.9974f },
	{ -124.4502f, 6.075638f, -142.5043f },
	{ -70.25763f, -66.12025f, -137.3566f },
	{ -84.19167f, -27.57235f, -145.939f },
	{ -94.61101f, 4.867058f, -154.7709f },
	{ -192.5067f, -58.26765f, -154.6634f },
	{ -174.0457f, -22.45862f, -158.3914f },
	{ -149.6554f, -3.36866f, -159.5607f },
	{ -61.7541f, -73.28658f, -232.1329f },
	{ -74.05997f, -36.796f, -223.8823f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000C5048[] = {
	{ 0.365858f, 0.901149f, -0.23255f },
	{ -0.115961f, 0.40502f, -0.9069239f },
	{ -0.20855f, 0.529421f, -0.8223259f },
	{ -0.23528f, 0.8910469f, -0.388173f },
	{ -0.95854f, 0.252314f, -0.132434f },
	{ -0.871576f, 0.47486f, -0.121918f },
	{ -0.513703f, 0.8536389f, -0.08607899f },
	{ -0.7069229f, 0.260448f, 0.657592f },
	{ -0.6217909f, 0.5874619f, 0.517942f },
	{ -0.396224f, 0.9001729f, 0.18082f },
	{ 0.162112f, 0.382492f, 0.9096259f },
	{ 0.128787f, 0.614626f, 0.7782339f },
	{ 0.058684f, 0.941705f, 0.331283f },
	{ 0.955809f, 0.248264f, 0.15746f },
	{ 0.876956f, 0.453418f, 0.159249f },
	{ 0.36446f, 0.924732f, 0.109724f },
	{ 0.760843f, 0.317318f, -0.5660639f },
	{ 0.695767f, 0.476298f, -0.537632f },
	{ 0.463256f, 0.812067f, -0.354882f },
	{ -0.193986f, 0.332077f, -0.92309f },
	{ -0.308052f, 0.477467f, -0.822879f },
	{ -0.217267f, 0.7629139f, -0.608898f },
	{ -0.034316f, 0.317431f, 0.94766f },
	{ -0.077952f, 0.436701f, 0.8962229f },
	{ -0.036854f, 0.921935f, 0.385587f },
	{ 0.783161f, 0.376291f, 0.49504f },
	{ 0.761456f, 0.414316f, 0.498524f },
	{ 0.493645f, 0.851901f, 0.174869f },
	{ -0.952687f, 0.286368f, 0.101892f },
	{ -0.861066f, 0.505802f, 0.052254f },
	{ -0.496156f, 0.8659739f, -0.06259f },
	{ 0.696826f, 0.446308f, -0.561464f },
	{ 0.642787f, 0.568139f, -0.5138519f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000C51D4 = { vertex_000C4EBC, normal_000C5048, LengthOfArray<Sint32>(vertex_000C4EBC), meshlist_000C4E8C, matlist_000C4C60, LengthOfArray<Uint16>(meshlist_000C4E8C), LengthOfArray<Uint16>(matlist_000C4C60), { -252.5911f, -20.21069f, -95.52304f }, 241.1969f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000C51FC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C51D4, -861.0712f, 5.714386f, 1438.455f, 0x16C, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000C5230[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 59, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000C5244[] = {
	6, 47, 69, 34, 70, 58, 71,
	4, 3, 1, 2, 0,
	6, 46, 72, 33, 73, 57, 74,
	4, 1, 23, 0, 22,
	4, 5, 3, 4, 2,
	6, 45, 75, 32, 76, 56, 77,
	6, 44, 78, 31, 79, 55, 80,
	4, 7, 5, 6, 4,
	4, 23, 21, 22, 20,
	4, 9, 7, 8, 6,
	0x8000u | 6, 88, 87, 28, 41, 85, 84,
	4, 11, 9, 10, 8,
	6, 40, 90, 27, 91, 51, 92,
	4, 21, 19, 20, 18,
	4, 13, 11, 12, 10,
	6, 39, 38, 26, 25, 50, 49,
	6, 38, 60, 25, 61, 49, 62,
	4, 15, 13, 14, 12,
	6, 36, 63, 24, 64, 48, 65,
	4, 19, 17, 18, 16,
	4, 17, 15, 16, 14,
	6, 37, 66, 35, 67, 59, 68,
	6, 48, 62, 24, 61, 36, 60,
	6, 51, 89, 27, 88, 40, 87,
	0x8000u | 6, 85, 86, 28, 52, 88, 89,
	6, 53, 83, 29, 82, 42, 81,
	6, 54, 80, 30, 79, 43, 78,
	6, 55, 77, 31, 76, 44, 75,
	6, 56, 74, 32, 73, 45, 72,
	6, 58, 68, 34, 67, 47, 66,
	6, 59, 65, 35, 64, 37, 63,
	6, 69, 46, 70, 33, 71, 57,
	6, 83, 54, 82, 30, 81, 43,
	6, 86, 53, 85, 29, 84, 42,
	6, 90, 39, 91, 26, 92, 50
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C5400[] = {
	{ 384, 0 },
	{ 762, 0 },
	{ 384, 126 },
	{ 762, 126 },
	{ 384, 254 },
	{ 762, 253 },
	{ 764, 0 },
	{ 0 },
	{ 764, 254 },
	{ 0, 254 },
	{ 384, 0 },
	{ 762, 0 },
	{ 384, 126 },
	{ 762, 126 },
	{ 384, 254 },
	{ 762, 253 },
	{ 764, 0 },
	{ 0 },
	{ 764, 254 },
	{ 0, 254 },
	{ 764, 0 },
	{ 0 },
	{ 764, 254 },
	{ 0, 254 },
	{ 384, 0 },
	{ 762, 0 },
	{ 384, 126 },
	{ 762, 126 },
	{ 384, 254 },
	{ 762, 253 },
	{ 384, 0 },
	{ 762, 0 },
	{ 384, 126 },
	{ 762, 126 },
	{ 384, 254 },
	{ 762, 253 },
	{ 764, 0 },
	{ 0 },
	{ 764, 254 },
	{ 0, 254 },
	{ 764, 0 },
	{ 0 },
	{ 764, 254 },
	{ 0, 254 },
	{ 764, 0 },
	{ 0 },
	{ 764, 254 },
	{ 0, 254 },
	{ 762, 126 },
	{ 762, 0 },
	{ 384, 126 },
	{ 384, 0 },
	{ 0, 126 },
	{ 0 },
	{ 764, 0 },
	{ 0 },
	{ 764, 254 },
	{ 0, 254 },
	{ 384, 0 },
	{ 762, 0 },
	{ 384, 126 },
	{ 762, 126 },
	{ 384, 254 },
	{ 762, 253 },
	{ 764, 0 },
	{ 0 },
	{ 764, 254 },
	{ 0, 254 },
	{ 764, 0 },
	{ 0 },
	{ 764, 254 },
	{ 0, 254 },
	{ 0 },
	{ 764, 0 },
	{ 0, 127 },
	{ 764, 127 },
	{ 0, 254 },
	{ 764, 254 },
	{ 384, 0 },
	{ 762, 0 },
	{ 384, 126 },
	{ 762, 126 },
	{ 384, 254 },
	{ 762, 253 },
	{ 764, 0 },
	{ 0 },
	{ 764, 254 },
	{ 0, 254 },
	{ 384, 0 },
	{ 762, 0 },
	{ 384, 126 },
	{ 762, 126 },
	{ 384, 254 },
	{ 762, 253 },
	{ 764, 0 },
	{ 0 },
	{ 764, 254 },
	{ 0, 254 },
	{ 764, 0 },
	{ 0 },
	{ 764, 254 },
	{ 0, 254 },
	{ 384, 0 },
	{ 762, 0 },
	{ 384, 126 },
	{ 762, 126 },
	{ 384, 254 },
	{ 762, 253 },
	{ 384, 254 },
	{ 0, 253 },
	{ 384, 126 },
	{ 0, 126 },
	{ 384, 0 },
	{ 0 },
	{ 384, 254 },
	{ 0, 253 },
	{ 384, 126 },
	{ 0, 126 },
	{ 384, 0 },
	{ 0 },
	{ 0, 126 },
	{ 0, 253 },
	{ 384, 126 },
	{ 384, 254 },
	{ 762, 126 },
	{ 762, 253 },
	{ 384, 254 },
	{ 0, 253 },
	{ 384, 126 },
	{ 0, 126 },
	{ 384, 0 },
	{ 0 },
	{ 384, 254 },
	{ 0, 253 },
	{ 384, 126 },
	{ 0, 126 },
	{ 384, 0 },
	{ 0 },
	{ 384, 254 },
	{ 0, 253 },
	{ 384, 126 },
	{ 0, 126 },
	{ 384, 0 },
	{ 0 },
	{ 384, 254 },
	{ 0, 253 },
	{ 384, 126 },
	{ 0, 126 },
	{ 384, 0 },
	{ 0 },
	{ 384, 254 },
	{ 0, 253 },
	{ 384, 126 },
	{ 0, 126 },
	{ 384, 0 },
	{ 0 },
	{ 384, 254 },
	{ 0, 253 },
	{ 384, 126 },
	{ 0, 126 },
	{ 384, 0 },
	{ 0 },
	{ 0 },
	{ 384, 0 },
	{ 0, 126 },
	{ 384, 126 },
	{ 0, 253 },
	{ 384, 254 },
	{ 762, 253 },
	{ 384, 254 },
	{ 762, 126 },
	{ 384, 126 },
	{ 762, 0 },
	{ 384, 0 },
	{ 762, 253 },
	{ 384, 254 },
	{ 762, 126 },
	{ 384, 126 },
	{ 762, 0 },
	{ 384, 0 },
	{ 0 },
	{ 384, 0 },
	{ 0, 126 },
	{ 384, 126 },
	{ 0, 253 },
	{ 384, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000C56E8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 35, poly_000C5244, NULL, NULL, NULL, uv_000C5400, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000C5700[] = {
	{ 136.4382f, -6.434999f, -0.00032f },
	{ 114.5055f, 1.365001f, -0.00029f },
	{ 123.2023f, -6.434999f, -71.8719f },
	{ 96.09394f, 6.965002f, -56.05793f },
	{ 68.21906f, -6.434995f, -119.3898f },
	{ 56.66314f, 1.365004f, -99.16591f },
	{ -0.00054f, -6.434991f, -130.9664f },
	{ -0.00049f, 1.365006f, -114.1284f },
	{ -68.21921f, -6.43499f, -119.3898f },
	{ -52.27662f, 10.06501f, -91.48872f },
	{ -121.7037f, -9.994987f, -70.99764f },
	{ -98.16232f, 2.265008f, -57.26436f },
	{ -136.4383f, -6.43499f, -0.00026f },
	{ -114.4252f, 1.365008f, -0.00023f },
	{ -116.6314f, -6.43499f, 68.03854f },
	{ -95.04527f, 11.96501f, 55.44597f },
	{ -68.21918f, -6.434993f, 119.3897f },
	{ -56.07971f, 8.365005f, 98.14444f },
	{ -0.00036f, -6.434997f, 137.8594f },
	{ -0.00031f, 5.065004f, 108.9374f },
	{ 68.21907f, -6.434999f, 119.3897f },
	{ 54.43538f, 14.365f, 95.26699f },
	{ 118.1589f, -8.774999f, 68.92973f },
	{ 98.14265f, 2.925f, 57.25302f },
	{ -107.8448f, 2.635006f, 62.91283f },
	{ -62.21384f, -0.044995f, 108.8912f },
	{ -0.00044f, 0.955005f, 129.7172f },
	{ 62.90599f, -0.044995f, 110.0913f },
	{ 111.1801f, -6.044995f, 64.85858f },
	{ 128.3801f, -6.044995f, -0.00036f },
	{ 106.7329f, 2.955005f, -62.91289f },
	{ 64.19002f, -6.044995f, -112.3383f },
	{ -0.00064f, -6.044995f, -129.7173f },
	{ -62.44625f, -0.344995f, -109.2864f },
	{ -111.1802f, -6.044995f, -64.85868f },
	{ -128.3801f, -6.044995f, -0.00029f },
	{ -92.48094f, 9.680008f, 53.95005f },
	{ -114.5044f, -3.119994f, -0.00031f },
	{ -56.74777f, 6.880006f, 99.31366f },
	{ -0.00047f, 6.880006f, 112.3842f },
	{ 56.74765f, 6.880006f, 99.31366f },
	{ 98.27995f, -3.119994f, 57.33305f },
	{ 114.5847f, -3.119994f, -0.00038f },
	{ 96.18027f, 9.680008f, -56.10821f },
	{ 56.70236f, -3.119994f, -99.23444f },
	{ -0.0006599999f, -3.119994f, -114.6777f },
	{ -55.56838f, 10.58001f, -96.25735f },
	{ -99.27278f, -3.119994f, -57.91223f },
	{ -116.7359f, -10.18999f, 68.09952f },
	{ -70.20579f, -11.86999f, 122.8664f },
	{ -0.00047f, -11.86999f, 141.874f },
	{ 68.80155f, -11.86999f, 120.409f },
	{ 121.5998f, -11.86999f, 70.937f },
	{ 140.4115f, -11.86999f, -0.00039f },
	{ 121.5998f, -11.86999f, -70.93705f },
	{ 70.2057f, -11.86999f, -122.8665f },
	{ -0.0006899999f, -11.86999f, -141.8741f },
	{ -70.20579f, -11.86999f, -122.8665f },
	{ -121.5999f, -11.86999f, -70.93706f },
	{ -140.4115f, -11.86999f, -0.00031f },
	{ -75.06469f, 9.480007f, 75.84653f },
	{ -89.30734f, 1.755006f, 90.23749f },
	{ -95.90284f, -11.97f, 96.9017f },
	{ -104.591f, 6.480008f, 28.31697f },
	{ -121.9961f, 1.755006f, 33.02921f },
	{ -131.0057f, -10.97f, 35.46848f },
	{ -103.576f, 7.920008f, -28.31987f },
	{ -119.3046f, 0.975006f, -32.30061f },
	{ -131.0057f, -10.97f, -35.46855f },
	{ -75.82293f, 9.480007f, -75.83091f },
	{ -89.30769f, -1.244994f, -90.23795f },
	{ -95.90284f, -10.97f, -96.90177f },
	{ -27.75316f, 9.480007f, -103.587f },
	{ -31.38141f, -1.244994f, -118.3366f },
	{ -35.10293f, -11.97f, -132.3703f },
	{ 27.88849f, 4.680007f, -105.0661f },
	{ 31.77468f, 0.195006f, -119.82f },
	{ 35.10282f, -10.97f, -132.3703f },
	{ 76.5976f, 4.480008f, -77.39549f },
	{ 88.38654f, -3.244993f, -89.30727f },
	{ 95.90273f, -10.97f, -96.90179f },
	{ 104.6332f, 7.480008f, -28.32847f },
	{ 125.7691f, -1.244994f, -34.05081f },
	{ 131.0056f, -10.97f, -35.46855f },
	{ 104.7164f, 6.480008f, 28.35094f },
	{ 120.6754f, -1.244994f, 32.67168f },
	{ 131.0056f, -8.969995f, 35.46848f },
	{ 75.11749f, 9.680008f, 75.89996f },
	{ 86.48552f, -2.144994f, 86.9146f },
	{ 95.20066f, -10.97f, 95.67301f },
	{ 26.96105f, 9.480007f, 101.6682f },
	{ 33.02562f, 1.755006f, 125.8995f },
	{ 34.40076f, -10.97f, 131.1415f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000C5B5C[] = {
	{ 0.375562f, 0.926663f, 0.015789f },
	{ 0.375307f, 0.926757f, 0.016303f },
	{ 0.304282f, 0.93872f, -0.161917f },
	{ 0.304884f, 0.938615f, -0.161391f },
	{ 0.143163f, 0.931376f, -0.334728f },
	{ 0.141346f, 0.930602f, -0.337641f },
	{ 0.008440999f, 0.89327f, -0.449442f },
	{ 0.004204f, 0.892531f, -0.450967f },
	{ -0.206278f, 0.906458f, -0.368488f },
	{ -0.200234f, 0.905666f, -0.373731f },
	{ -0.327958f, 0.927053f, -0.181704f },
	{ -0.327699f, 0.926394f, -0.185491f },
	{ -0.470797f, 0.8822049f, 0.008029f },
	{ -0.479331f, 0.877504f, 0.015097f },
	{ -0.493566f, 0.831472f, 0.255041f },
	{ -0.491097f, 0.83209f, 0.257779f },
	{ -0.217878f, 0.899713f, 0.378214f },
	{ -0.222044f, 0.898641f, 0.378339f },
	{ 0.0202f, 0.866363f, 0.499007f },
	{ 0.022259f, 0.864525f, 0.502096f },
	{ 0.244298f, 0.860438f, 0.447175f },
	{ 0.240649f, 0.858932f, 0.452022f },
	{ 0.354389f, 0.91811f, 0.177434f },
	{ 0.355155f, 0.917208f, 0.180542f },
	{ -0.523594f, 0.800133f, 0.292638f },
	{ -0.247123f, 0.852229f, 0.461125f },
	{ -0.029795f, 0.855561f, 0.516844f },
	{ 0.351152f, 0.791506f, 0.5002109f },
	{ 0.286923f, 0.9402069f, 0.183536f },
	{ 0.33861f, 0.940845f, 0.012361f },
	{ 0.464784f, 0.824336f, -0.323181f },
	{ 0.185397f, 0.941194f, -0.282455f },
	{ -0.00577f, 0.939608f, -0.342203f },
	{ -0.274677f, 0.8040619f, -0.527292f },
	{ -0.299007f, 0.938772f, -0.171177f },
	{ -0.345345f, 0.938414f, -0.010782f },
	{ -0.326831f, 0.929588f, 0.170435f },
	{ -0.206266f, 0.978494f, 0.002229f },
	{ -0.213918f, 0.899435f, 0.381124f },
	{ -0.034647f, 0.9456739f, 0.323265f },
	{ 0.28462f, 0.872212f, 0.397792f },
	{ 0.174964f, 0.9812f, 0.08144899f },
	{ 0.207396f, 0.978155f, 0.014105f },
	{ 0.383659f, 0.881273f, -0.275978f },
	{ 0.118309f, 0.9813589f, -0.151453f },
	{ 0.025746f, 0.981282f, -0.190845f },
	{ -0.279602f, 0.803252f, -0.5259359f },
	{ -0.179396f, 0.978223f, -0.104392f },
	{ -0.67434f, 0.62593f, 0.391761f },
	{ -0.275413f, 0.805769f, 0.524294f },
	{ -0.023327f, 0.754039f, 0.656415f },
	{ 0.402747f, 0.707498f, 0.580725f },
	{ 0.360789f, 0.900127f, 0.244135f },
	{ 0.435762f, 0.900057f, 0.003052f },
	{ 0.555268f, 0.750643f, -0.358067f },
	{ 0.231667f, 0.901217f, -0.36625f },
	{ -0.021627f, 0.9016089f, -0.432011f },
	{ -0.272737f, 0.804801f, -0.527171f },
	{ -0.374502f, 0.900506f, -0.220991f },
	{ -0.435723f, 0.899976f, -0.013757f },
	{ -0.30426f, 0.895531f, 0.324732f },
	{ -0.41923f, 0.807591f, 0.414781f },
	{ -0.498027f, 0.7261159f, 0.474051f },
	{ -0.296086f, 0.95432f, -0.040072f },
	{ -0.460485f, 0.886025f, 0.053977f },
	{ -0.5908599f, 0.793375f, 0.146427f },
	{ -0.137711f, 0.989712f, -0.038809f },
	{ -0.269338f, 0.960436f, -0.070855f },
	{ -0.412008f, 0.904574f, -0.10952f },
	{ -0.368236f, 0.904613f, -0.214658f },
	{ -0.372772f, 0.886623f, -0.273752f },
	{ -0.380306f, 0.856133f, -0.349863f },
	{ 0.014585f, 0.901224f, -0.433107f },
	{ -0.030953f, 0.889605f, -0.455681f },
	{ -0.112722f, 0.8517759f, -0.5116349f },
	{ 0.038393f, 0.989888f, -0.136559f },
	{ 0.072338f, 0.960691f, -0.268031f },
	{ 0.111216f, 0.90453f, -0.41165f },
	{ 0.149508f, 0.929427f, -0.337361f },
	{ 0.268959f, 0.8858849f, -0.377979f },
	{ 0.377822f, 0.828053f, -0.41422f },
	{ 0.356813f, 0.9339629f, 0.019916f },
	{ 0.456106f, 0.888362f, -0.052729f },
	{ 0.535316f, 0.836027f, -0.120393f },
	{ 0.142662f, 0.988894f, 0.041672f },
	{ 0.276971f, 0.957965f, 0.074769f },
	{ 0.410763f, 0.905175f, 0.109236f },
	{ 0.329032f, 0.93221f, 0.150738f },
	{ 0.38205f, 0.885224f, 0.265362f },
	{ 0.427686f, 0.811375f, 0.398441f },
	{ 0.112179f, 0.91542f, 0.38655f },
	{ 0.17063f, 0.814404f, 0.554646f },
	{ 0.216383f, 0.696986f, 0.6836579f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000C5FB8 = { vertex_000C5700, normal_000C5B5C, LengthOfArray<Sint32>(vertex_000C5700), meshlist_000C56E8, matlist_000C5230, LengthOfArray<Uint16>(meshlist_000C56E8), LengthOfArray<Uint16>(matlist_000C5230), { -0.00038f, 1.197503f, -0.00061f }, 192.9812f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000C5FE0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C5FB8, 0, 56.75f, 0, 0, 0xAAA, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000C6014[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000C60A0[] = {
	6, 22, 1, 23, 2, 0, 3,
	6, 0, 21, 23, 20, 22, 19,
	6, 10, 13, 11, 14, 12, 15,
	3, 19, 20, 13,
	0x8000u | 5, 13, 14, 20, 15, 21,
	6, 12, 9, 11, 8, 10, 7,
	6, 17, 4, 16, 6, 5, 34,
	6, 4, 37, 6, 40, 34, 43,
	6, 29, 42, 32, 30, 41, 39,
	0x8000u | 6, 63, 62, 59, 25, 18, 61,
	0x8000u | 6, 62, 60, 25, 24, 61, 65
};

extern "C" __declspec(dllexport) Sint16 poly_000C6132[] = {
	0x8000u | 6, 3, 9, 2, 8, 1, 7,
	6, 31, 17, 27, 16, 28, 5,
	6, 28, 65, 27, 61, 31, 18,
	6, 64, 43, 66, 40, 67, 37,
	6, 67, 63, 66, 62, 64, 60,
	8, 41, 39, 35, 33, 38, 36, 29, 42
};

extern "C" __declspec(dllexport) Sint16 poly_000C618A[] = {
	0x8000u | 6, 15, 12, 21, 9, 0, 3
};

extern "C" __declspec(dllexport) Sint16 poly_000C6198[] = {
	6, 63, 67, 26, 37, 17, 4,
	6, 17, 31, 26, 18, 63, 59
};

extern "C" __declspec(dllexport) Sint16 poly_000C61B4[] = {
	0x8000u | 5, 41, 32, 35, 29, 38,
	0x8000u | 5, 56, 47, 50, 44, 53
};

extern "C" __declspec(dllexport) Sint16 poly_000C61CC[] = {
	0x8000u | 6, 54, 45, 55, 46, 56, 47,
	3, 56, 55, 50,
	0x8000u | 5, 50, 49, 55, 48, 54
};

extern "C" __declspec(dllexport) Sint16 poly_000C61EE[] = {
	3, 45, 46, 58,
	3, 48, 51, 49,
	0x8000u | 6, 49, 52, 51, 58, 57, 45,
	8, 46, 47, 58, 44, 52, 53, 49, 50
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C6220[] = {
	{ 288, 255 },
	{ 510, 255 },
	{ 298, 152 },
	{ 510, 144 },
	{ 288, 0 },
	{ 510, 0 },
	{ 288, 0 },
	{ 0 },
	{ 298, 152 },
	{ 0, 157 },
	{ 288, 255 },
	{ 0, 255 },
	{ 294, 255 },
	{ 510, 255 },
	{ 290, 109 },
	{ 510, 140 },
	{ 322, 0 },
	{ 510, 0 },
	{ 510, 255 },
	{ 510, 157 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, 140 },
	{ 510, 157 },
	{ 0 },
	{ 510, 0 },
	{ 322, 0 },
	{ 0 },
	{ 290, 109 },
	{ 0, 115 },
	{ 294, 255 },
	{ 0, 255 },
	{ 510, 0 },
	{ 296, 0 },
	{ 510, 112 },
	{ 280, 128 },
	{ 510, 255 },
	{ 282, 255 },
	{ 296, 0 },
	{ 0 },
	{ 280, 128 },
	{ 0, 132 },
	{ 282, 255 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 138, 0 },
	{ 128, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 510, 123 },
	{ 233, 0 },
	{ 292, 128 },
	{ 0 },
	{ 0, 119 },
	{ 510, 123 },
	{ 510, 254 },
	{ 292, 128 },
	{ 278, 254 },
	{ 0, 119 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C6318[] = {
	{ 0 },
	{ 510, 0 },
	{ 0, 144 },
	{ 510, 115 },
	{ 0, 255 },
	{ 510, 255 },
	{ 225, 0 },
	{ 0 },
	{ 238, 123 },
	{ 0, 112 },
	{ 232, 255 },
	{ 0, 255 },
	{ 232, 255 },
	{ 510, 255 },
	{ 238, 123 },
	{ 510, 119 },
	{ 225, 0 },
	{ 510, 0 },
	{ 278, 255 },
	{ 510, 255 },
	{ 260, 118 },
	{ 510, 132 },
	{ 231, 0 },
	{ 510, 0 },
	{ 231, 0 },
	{ 0 },
	{ 260, 118 },
	{ 0, 123 },
	{ 278, 255 },
	{ 0, 254 },
	{ 0 },
	{ 0, 255 },
	{ 182, 0 },
	{ 175, 255 },
	{ 290, 0 },
	{ 276, 255 },
	{ 510, 0 },
	{ 510, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C63B0[] = {
	{ 0 },
	{ 0, 254 },
	{ 310, 0 },
	{ 191, 255 },
	{ 510, 0 },
	{ 510, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C63C8[] = {
	{ 245, -255 },
	{ 510, -255 },
	{ 270, -10 },
	{ 510, 13 },
	{ 276, 255 },
	{ 510, 255 },
	{ 276, 255 },
	{ 0, 255 },
	{ 270, -10 },
	{ 0, -50 },
	{ 245, -255 },
	{ 0, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C63F8[] = {
	{ 254, 222 },
	{ 147, 0 },
	{ 105, 255 },
	{ 66, 5 },
	{ 0, 186 },
	{ 0, 81 },
	{ 178, 255 },
	{ 85, 0 },
	{ 255, 212 },
	{ 203, 33 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C6420[] = {
	{ 157, 255 },
	{ 0, 255 },
	{ 156, 82 },
	{ 0, 90 },
	{ 149, 0 },
	{ 0 },
	{ 149, 0 },
	{ 156, 82 },
	{ 255, 0 },
	{ 255, 0 },
	{ 255, 93 },
	{ 156, 82 },
	{ 255, 255 },
	{ 157, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C6458[] = {
	{ 255, 255 },
	{ 255, 71 },
	{ 200, 85 },
	{ 0, 255 },
	{ 77, 255 },
	{ 0, 93 },
	{ 0, 93 },
	{ 76, 96 },
	{ 77, 255 },
	{ 200, 85 },
	{ 203, 255 },
	{ 255, 255 },
	{ 255, 71 },
	{ 255, 0 },
	{ 200, 85 },
	{ 200, 0 },
	{ 76, 96 },
	{ 75, 0 },
	{ 0, 93 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000C64A8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 11, poly_000C60A0, NULL, NULL, NULL, uv_000C6220, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_000C6132, NULL, NULL, NULL, uv_000C6318, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000C618A, NULL, NULL, NULL, uv_000C63B0, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_000C6198, NULL, NULL, NULL, uv_000C63C8, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_000C61B4, NULL, NULL, NULL, uv_000C63F8, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 3, poly_000C61CC, NULL, NULL, NULL, uv_000C6420, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 4, poly_000C61EE, NULL, NULL, NULL, uv_000C6458, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000C6550[] = {
	{ -85.10938f, -94.9322f, 176.3181f },
	{ -110.346f, -153.8485f, 148.2052f },
	{ -109.8446f, -130.0678f, 161.4099f },
	{ -100.252f, -106.4182f, 182.8326f },
	{ -226.0694f, 146.9886f, -107.1211f },
	{ -263.5904f, 89.78229f, -82.20551f },
	{ -250.1048f, 121.9627f, -117.2638f },
	{ -86.40636f, -152.6452f, 237.6767f },
	{ -88.20654f, -129.9659f, 235.1893f },
	{ -84.08935f, -109.4284f, 224.5324f },
	{ -34.65738f, -152.9391f, 244.0199f },
	{ -45.60358f, -125.8562f, 242.7997f },
	{ -56.65426f, -106.7058f, 229.9237f },
	{ -1.196777f, -149.5679f, 227.7985f },
	{ -16.38196f, -128.371f, 227.8499f },
	{ -46.9126f, -102.2532f, 219.6292f },
	{ -248.9488f, 126.9054f, -87.51555f },
	{ -227.6053f, 143.0197f, -92.48415f },
	{ -190.9337f, 134.8535f, -84.55396f },
	{ -26.83063f, -150.0924f, 157.6641f },
	{ -38.91315f, -126.4261f, 166.6108f },
	{ -63.77545f, -93.58378f, 187.7427f },
	{ -73.27502f, -154.4291f, 139.3918f },
	{ -80.36902f, -127.7837f, 149.0332f },
	{ -132.5948f, 96.01783f, -79.88635f },
	{ -149.7034f, 128.1127f, -85.04997f },
	{ -201.0911f, 144.8991f, -102.6095f },
	{ -224.7485f, 107.0691f, -59.21273f },
	{ -231.498f, 72.41643f, -44.924f },
	{ -147.147f, -2.970428f, 63.79087f },
	{ -120.1574f, -8.875098f, 49.45831f },
	{ -213.5475f, 131.0038f, -83.59895f },
	{ -142.522f, 7.647541f, 53.03817f },
	{ -218.7191f, 3.666168f, 45.304f },
	{ -261.0888f, 92.72732f, -121.8783f },
	{ -194.3566f, 34.59973f, 43.86362f },
	{ -201.5185f, -19.93499f, 71.07622f },
	{ -210.849f, 142.4102f, -121.4067f },
	{ -185.1787f, 14.50303f, 62.28426f },
	{ -181.0068f, 35.99344f, 10.82824f },
	{ -223.1022f, 125.543f, -143.5277f },
	{ -181.2213f, 46.06932f, 25.24585f },
	{ -130.9566f, -26.9641f, 70.26193f },
	{ -227.1252f, 103.8756f, -161.2415f },
	{ -272.1609f, 72.43304f, 29.51193f },
	{ -291.9548f, 41.59788f, 2.402869f },
	{ -288.6726f, 64.47352f, 21.86332f },
	{ -282.8223f, 67.72672f, 31.51303f },
	{ -262.196f, 1.526241f, 54.61751f },
	{ -263.9061f, 29.9944f, 64.19191f },
	{ -267.1112f, 47.04565f, 62.18875f },
	{ -249.0999f, 13.79619f, 30.10556f },
	{ -254.5118f, 38.61892f, 43.03945f },
	{ -259.6286f, 53.85556f, 49.93637f },
	{ -299.7066f, 12.66788f, 56.07698f },
	{ -291.3976f, 41.77747f, 63.46302f },
	{ -281.8368f, 52.82468f, 61.05713f },
	{ -273.7853f, 44.60586f, -5.384831f },
	{ -273.4117f, 68.64187f, 14.27382f },
	{ -178.9014f, 149.7302f, -93.03146f },
	{ -121.5751f, 102.6988f, -120.206f },
	{ -181.6337f, 111.2767f, -62.84213f },
	{ -146.3937f, 131.6149f, -112.5986f },
	{ -175.2745f, 146.4748f, -108.411f },
	{ -173.625f, 109.7859f, -156.7643f },
	{ -172.4294f, 77.81844f, -47.04324f },
	{ -180.5986f, 132.7235f, -139.8665f },
	{ -187.4762f, 150.3152f, -123.0308f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000C6880[] = {
	{ -0.256697f, 0.913804f, -0.314752f },
	{ -0.750929f, 0.35041f, -0.559748f },
	{ -0.8766159f, 0.392827f, -0.277906f },
	{ -0.7630759f, 0.643544f, 0.059713f },
	{ -0.24376f, 0.948303f, -0.20323f },
	{ -0.796012f, 0.425115f, 0.430862f },
	{ -0.7730629f, 0.548892f, -0.317948f },
	{ -0.6211219f, -0.059651f, 0.78144f },
	{ -0.652104f, 0.141098f, 0.7448829f },
	{ -0.541898f, 0.6117989f, 0.5762359f },
	{ 0.208752f, 0.185804f, 0.960156f },
	{ 0.127087f, 0.372446f, 0.919311f },
	{ 0.008241f, 0.758925f, 0.651126f },
	{ 0.7896219f, 0.542841f, 0.286045f },
	{ 0.7121519f, 0.6062689f, 0.353945f },
	{ 0.40056f, 0.8862f, 0.232813f },
	{ -0.6327839f, 0.678202f, 0.373666f },
	{ -0.217685f, 0.9084f, 0.356963f },
	{ -0.09532899f, 0.689209f, 0.718264f },
	{ 0.610872f, 0.507785f, -0.6074449f },
	{ 0.574852f, 0.589094f, -0.567903f },
	{ 0.179272f, 0.967741f, -0.177026f },
	{ 0.064008f, 0.450166f, -0.8906479f },
	{ -0.03289f, 0.579237f, -0.814495f },
	{ 0.634481f, 0.503906f, 0.586099f },
	{ 0.537851f, 0.655271f, 0.5304109f },
	{ -0.211682f, 0.919085f, 0.332375f },
	{ -0.225169f, 0.537131f, 0.812889f },
	{ -0.265956f, 0.439211f, 0.858115f },
	{ 0.254188f, 0.478025f, 0.840762f },
	{ 0.5968029f, 0.632774f, 0.493379f },
	{ -0.062895f, 0.709039f, 0.702359f },
	{ 0.538344f, 0.762181f, 0.359535f },
	{ -0.654986f, 0.5280989f, 0.540467f },
	{ -0.8759699f, 0.380885f, -0.295978f },
	{ -0.444052f, 0.8108799f, 0.38117f },
	{ -0.22718f, 0.353766f, 0.907325f },
	{ -0.223116f, 0.918644f, -0.326055f },
	{ -0.07674f, 0.541348f, 0.83729f },
	{ -0.035866f, 0.920885f, -0.388181f },
	{ -0.388299f, 0.637475f, -0.665469f },
	{ -0.046473f, 0.998303f, -0.035096f },
	{ 0.299112f, 0.415832f, 0.858845f },
	{ -0.412262f, 0.538008f, -0.735247f },
	{ 0.383905f, 0.92292f, 0.028895f },
	{ -0.7860709f, 0.486232f, -0.381668f },
	{ -0.729216f, 0.659574f, -0.182228f },
	{ -0.396111f, 0.893486f, 0.211611f },
	{ 0.545278f, -0.199129f, 0.8142599f },
	{ 0.492986f, -0.07616299f, 0.866697f },
	{ 0.415719f, 0.44123f, 0.7952949f },
	{ 0.986127f, 0.130371f, 0.10275f },
	{ 0.972748f, 0.205318f, 0.10773f },
	{ 0.755694f, 0.56203f, 0.336228f },
	{ -0.674908f, -0.120841f, 0.72794f },
	{ -0.647594f, 0.1748f, 0.7416649f },
	{ -0.274683f, 0.669422f, 0.6902339f },
	{ 0.384384f, 0.638957f, -0.666321f },
	{ 0.304199f, 0.806354f, -0.507204f },
	{ -0.085301f, 0.875526f, 0.475582f },
	{ 0.729561f, 0.668086f, -0.146296f },
	{ 0.174778f, 0.5008669f, 0.847694f },
	{ 0.634416f, 0.745812f, -0.203174f },
	{ 0.186782f, 0.980079f, -0.067512f },
	{ 0.25927f, 0.645362f, -0.718531f },
	{ 0.214611f, 0.412071f, 0.8855169f },
	{ 0.225627f, 0.726548f, -0.6490149f },
	{ 0.00599f, 0.961411f, -0.275051f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000C6BB0 = { vertex_000C6550, normal_000C6880, LengthOfArray<Sint32>(vertex_000C6550), meshlist_000C64A8, matlist_000C6014, LengthOfArray<Uint16>(meshlist_000C64A8), LengthOfArray<Uint16>(matlist_000C6014), { -150.4517f, -2.056953f, 41.38919f }, 253.528f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000C6BD8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C6BB0, 193.9288f, 148.7144f, -602.5449f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000C6C0C[] = {
	{ { 0xBFFFFFFF }, { 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000C6C20[] = {
	26, 20, 18, 17, 19, 16, 2, 4, 14, 13, 15, 12, 8, 7, 9, 6, 11, 10, 23, 0, 22, 5, 3, 1, 21, 20, 18
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C6C58[] = {
	{ 2649, -2394 },
	{ 1838, -2424 },
	{ 1938, -2805 },
	{ 1220, -2424 },
	{ 1120, -2804 },
	{ 686, -2117 },
	{ 408, -2394 },
	{ 378, -1583 },
	{ 0, -1683 },
	{ 378, -965 },
	{ 0, -864 },
	{ 686, -432 },
	{ 408, -154 },
	{ 1220, -124 },
	{ 1120, 255 },
	{ 1838, -124 },
	{ 1938, 254 },
	{ 2372, -432 },
	{ 2649, -154 },
	{ 2679, -965 },
	{ 3060, -864 },
	{ 2679, -1583 },
	{ 3059, -1683 },
	{ 2372, -2117 },
	{ 2649, -2394 },
	{ 1838, -2424 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000C6CC0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000C6C20, NULL, NULL, NULL, uv_000C6C58, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000C6CD8[] = {
	{ 105.8009f, 40.5f, -105.8008f },
	{ 144.5266f, 40.5f, 38.7258f },
	{ -79.56224f, 40.5f, 79.56222f },
	{ 108.6841f, 40.5f, 29.1218f },
	{ -105.8009f, 40.5f, 105.8008f },
	{ 144.5266f, 40.5f, -38.7258f },
	{ -38.72578f, 40.50001f, -144.5266f },
	{ -105.8008f, 40.50001f, -105.8009f },
	{ -79.56222f, 40.50001f, -79.56224f },
	{ -29.12178f, 40.50001f, -108.6841f },
	{ 38.72582f, 40.50001f, -144.5266f },
	{ 29.12182f, 40.50001f, -108.684f },
	{ -144.5266f, 40.5f, -38.72581f },
	{ -144.5266f, 40.5f, 38.72578f },
	{ -108.6841f, 40.5f, 29.12179f },
	{ -108.6841f, 40.5f, -29.12181f },
	{ -38.72581f, 40.49999f, 144.5266f },
	{ 38.72579f, 40.49999f, 144.5266f },
	{ 29.1218f, 40.49999f, 108.6841f },
	{ -29.12181f, 40.49999f, 108.6841f },
	{ 105.8008f, 40.49999f, 105.8008f },
	{ 79.56222f, 40.49999f, 79.56223f },
	{ 108.6841f, 40.5f, -29.1218f },
	{ 79.56224f, 40.5f, -79.56222f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000C6DF8[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000C6F18 = { vertex_000C6CD8, normal_000C6DF8, LengthOfArray<Sint32>(vertex_000C6CD8), meshlist_000C6CC0, matlist_000C6C0C, LengthOfArray<Uint16>(meshlist_000C6CC0), LengthOfArray<Uint16>(matlist_000C6C0C), { 0, 40.5f, 0 }, 204.3916f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000C6F40 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C6F18, 0, 4.5f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000C6F74[] = {
	{ { 0xBFFFFFFF }, { 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000C6F88[] = {
	7, 1, 5, 13, 6, 12, 7, 8,
	7, 3, 4, 14, 2, 13, 0, 1,
	7, 8, 11, 12, 10, 14, 9, 3
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C6FB8[] = {
	{ 272, -18 },
	{ 0, -490 },
	{ 645, -390 },
	{ 0, -1037 },
	{ 883, -1275 },
	{ 272, -1511 },
	{ 745, -1785 },
	{ 2040, -490 },
	{ 1766, -18 },
	{ 1530, -628 },
	{ 1292, 254 },
	{ 645, -390 },
	{ 745, 255 },
	{ 272, -18 },
	{ 745, -1785 },
	{ 1292, -1785 },
	{ 883, -1275 },
	{ 1766, -1511 },
	{ 1530, -628 },
	{ 2039, -1037 },
	{ 2040, -490 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000C700C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000C6F88, NULL, NULL, NULL, uv_000C6FB8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000C7024[] = {
	{ -23.70018f, 85.50001f, -88.45031f },
	{ -64.75011f, 85.50001f, -64.75013f },
	{ 23.7002f, 85.50001f, -88.45029f },
	{ 88.45031f, 85.5f, -23.70019f },
	{ 64.75013f, 85.5f, -64.75011f },
	{ -88.45031f, 85.5f, -23.7002f },
	{ -88.45031f, 85.5f, 23.70018f },
	{ -64.75013f, 85.5f, 64.75011f },
	{ -23.7002f, 85.49998f, 88.45031f },
	{ 88.45031f, 85.5f, 23.70019f },
	{ 64.75011f, 85.49998f, 64.75011f },
	{ 23.70019f, 85.49998f, 88.45031f },
	{ -11.8501f, 85.5f, 44.22516f },
	{ -32.37506f, 85.5f, -32.37507f },
	{ 44.22516f, 85.5f, -11.85009f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000C70D8[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000C718C = { vertex_000C7024, normal_000C70D8, LengthOfArray<Sint32>(vertex_000C7024), meshlist_000C700C, matlist_000C6F74, LengthOfArray<Uint16>(meshlist_000C700C), LengthOfArray<Uint16>(matlist_000C6F74), { 0, 85.5f, 0 }, 125.0876f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000C71B4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C718C, 0, 2, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000C71E8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 60, NJD_CUSTOMFLAG_UVANIM1 | NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_ONE | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000C71FC[] = {
	4, 2, 3, 33, 32,
	4, 5, 2, 35, 33,
	4, 8, 9, 0, 6,
	4, 9, 5, 6, 35,
	4, 12, 13, 10, 18,
	4, 3, 12, 32, 10,
	4, 16, 17, 15, 20,
	4, 13, 16, 18, 15,
	4, 19, 8, 14, 0,
	4, 21, 19, 7, 14,
	4, 23, 21, 11, 7,
	4, 17, 23, 20, 11,
	4, 22, 34, 11, 20,
	4, 29, 22, 7, 11,
	4, 28, 4, 0, 14,
	4, 4, 29, 14, 7,
	4, 27, 28, 6, 0,
	4, 31, 27, 35, 6,
	4, 24, 31, 33, 35,
	4, 25, 24, 32, 33,
	4, 30, 25, 10, 32,
	4, 26, 30, 18, 10,
	4, 34, 1, 20, 15,
	4, 1, 26, 15, 18
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C72EC[] = {
	{ 5, 251 },
	{ 758, 251 },
	{ 5, -251 },
	{ 758, -251 },
	{ 5, 251 },
	{ 758, 251 },
	{ 5, -251 },
	{ 758, -251 },
	{ 5, 251 },
	{ 758, 251 },
	{ 5, -251 },
	{ 758, -251 },
	{ 5, 251 },
	{ 758, 251 },
	{ 5, -251 },
	{ 758, -251 },
	{ 5, 251 },
	{ 758, 251 },
	{ 5, -251 },
	{ 758, -251 },
	{ 5, 251 },
	{ 758, 251 },
	{ 5, -251 },
	{ 758, -251 },
	{ 5, 251 },
	{ 758, 251 },
	{ 5, -251 },
	{ 758, -251 },
	{ 5, 251 },
	{ 758, 251 },
	{ 5, -251 },
	{ 758, -251 },
	{ 5, 251 },
	{ 758, 251 },
	{ 5, -251 },
	{ 758, -251 },
	{ 5, 251 },
	{ 758, 251 },
	{ 5, -251 },
	{ 758, -251 },
	{ 5, 251 },
	{ 758, 251 },
	{ 5, -251 },
	{ 758, -251 },
	{ 5, 251 },
	{ 758, 251 },
	{ 5, -251 },
	{ 758, -251 },
	{ 758, 163 },
	{ 5, 163 },
	{ 758, 251 },
	{ 5, 251 },
	{ 758, 163 },
	{ 5, 163 },
	{ 758, 251 },
	{ 5, 251 },
	{ 758, 163 },
	{ 5, 163 },
	{ 758, 251 },
	{ 5, 251 },
	{ 758, 163 },
	{ 5, 163 },
	{ 758, 251 },
	{ 5, 251 },
	{ 758, 163 },
	{ 5, 163 },
	{ 758, 251 },
	{ 5, 251 },
	{ 758, 163 },
	{ 5, 163 },
	{ 758, 251 },
	{ 5, 251 },
	{ 758, 163 },
	{ 5, 163 },
	{ 758, 251 },
	{ 5, 251 },
	{ 758, 163 },
	{ 5, 163 },
	{ 758, 251 },
	{ 5, 251 },
	{ 758, 163 },
	{ 5, 163 },
	{ 758, 251 },
	{ 5, 251 },
	{ 758, 163 },
	{ 5, 163 },
	{ 758, 251 },
	{ 5, 251 },
	{ 758, 163 },
	{ 5, 163 },
	{ 758, 251 },
	{ 5, 251 },
	{ 758, 163 },
	{ 5, 163 },
	{ 758, 251 },
	{ 5, 251 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000C746C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 24, poly_000C71FC, NULL, NULL, NULL, uv_000C72EC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000C7484[] = {
	{ 157.5f, 45.49999f, 0.000001f },
	{ -129.5791f, 44.99999f, 74.81248f },
	{ 0.000024f, 0.000006f, -174.1247f },
	{ -87.06235f, 0.000006f, -150.7966f },
	{ 129.579f, 44.99999f, 74.8125f },
	{ 87.06239f, 0.000006f, -150.7966f },
	{ 136.399f, 45.49999f, -78.74996f },
	{ 78.74998f, 45.49999f, 136.399f },
	{ 174.1247f, 0, 0.000001f },
	{ 150.7966f, 0.000003f, -87.06235f },
	{ -136.399f, 45.49999f, -78.75001f },
	{ -0.00008f, 45.49999f, 157.5f },
	{ -150.7966f, 0.000003f, -87.06239f },
	{ -174.1247f, 0, -0.00016f },
	{ 136.399f, 45.49999f, 78.75f },
	{ -136.399f, 45.49999f, 78.74998f },
	{ -150.7966f, -0.00003f, 87.06236f },
	{ -87.06236f, -0.00006f, 150.7966f },
	{ -157.5f, 45.49999f, -0.00015f },
	{ 150.7966f, -0.00003f, 87.06236f },
	{ -78.75001f, 45.49999f, 136.399f },
	{ 87.06236f, -0.00006f, 150.7966f },
	{ -0.00007f, 44.99999f, 149.625f },
	{ -0.00008999999f, -0.00006f, 174.1247f },
	{ 0.00002f, 45.00001f, -149.625f },
	{ -74.81247f, 45.00001f, -129.5791f },
	{ -149.625f, 44.99999f, -0.00014f },
	{ 129.5791f, 44.99999f, -74.81246f },
	{ 149.625f, 44.99999f, 0.000001f },
	{ 74.81248f, 44.99999f, 129.579f },
	{ -129.579f, 44.99999f, -74.81251f },
	{ 74.81251f, 45.00001f, -129.579f },
	{ -78.74997f, 45.50001f, -136.399f },
	{ 0.000022f, 45.50001f, -157.5f },
	{ -74.81251f, 44.99999f, 129.579f },
	{ 78.75001f, 45.50001f, -136.399f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000C7634[] = {
	{ 0.609377f, 0.792881f, 0 },
	{ 0.054875f, 0.99799f, -0.031682f },
	{ 0, 0.343189f, -0.939266f },
	{ -0.469633f, 0.343189f, -0.813429f },
	{ -0.054875f, 0.99799f, -0.031682f },
	{ 0.469633f, 0.34319f, -0.813428f },
	{ 0.5277359f, 0.792881f, -0.304688f },
	{ 0.304688f, 0.792881f, 0.5277359f },
	{ 0.939266f, 0.343189f, 0 },
	{ 0.813429f, 0.343189f, -0.469633f },
	{ -0.527735f, 0.792881f, -0.304688f },
	{ 0, 0.792881f, 0.609377f },
	{ -0.813428f, 0.34319f, -0.469633f },
	{ -0.939266f, 0.343189f, 0 },
	{ 0.527735f, 0.792881f, 0.304688f },
	{ -0.5277359f, 0.792881f, 0.304688f },
	{ -0.813429f, 0.343189f, 0.469633f },
	{ -0.469633f, 0.34319f, 0.813428f },
	{ -0.609377f, 0.792881f, 0 },
	{ 0.813428f, 0.34319f, 0.469633f },
	{ -0.304688f, 0.792881f, 0.5277359f },
	{ 0.469633f, 0.343189f, 0.813429f },
	{ 0, 0.99799f, -0.063364f },
	{ 0, 0.343189f, 0.939266f },
	{ 0, 0.99799f, 0.063364f },
	{ 0.031682f, 0.99799f, 0.054875f },
	{ 0.063364f, 0.99799f, 0 },
	{ -0.054875f, 0.99799f, 0.031682f },
	{ -0.063364f, 0.99799f, 0 },
	{ -0.031682f, 0.99799f, -0.054875f },
	{ 0.054875f, 0.99799f, 0.031682f },
	{ -0.031682f, 0.99799f, 0.054875f },
	{ -0.304688f, 0.792881f, -0.5277359f },
	{ 0, 0.792881f, -0.609377f },
	{ 0.031682f, 0.99799f, -0.054875f },
	{ 0.304688f, 0.792881f, -0.527735f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000C77E4 = { vertex_000C7484, normal_000C7634, LengthOfArray<Sint32>(vertex_000C7484), meshlist_000C746C, matlist_000C71E8, LengthOfArray<Uint16>(meshlist_000C746C), LengthOfArray<Uint16>(matlist_000C71E8), { 0.000008f, 22.75f, 0 }, 237.8589f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000C780C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C77E4, 0, 0, 0, 0, 0xAAA, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000C7840[] = {
	{ { 0xBFFFFFFF }, { 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000C7854[] = {
	0x8000u | 10, 0, 3, 1, 2, 4, 5, 6, 9, 7, 8,
	0x8000u | 10, 7, 14, 6, 13, 4, 12, 1, 11, 0, 10,
	0x8000u | 10, 21, 24, 22, 23, 19, 20, 15, 18, 16, 17,
	0x8000u | 10, 14, 21, 13, 22, 12, 19, 11, 15, 10, 16
};

extern "C" __declspec(dllexport) NJS_TEX uv_000C78AC[] = {
	{ 0, -1338 },
	{ 0, 255 },
	{ 1593, -1338 },
	{ 1593, 255 },
	{ 3187, -1338 },
	{ 3187, 255 },
	{ 4781, -1338 },
	{ 4781, 255 },
	{ 6375, -1338 },
	{ 6375, 255 },
	{ 6375, -1338 },
	{ 6375, -2932 },
	{ 4781, -1338 },
	{ 4781, -2932 },
	{ 3187, -1338 },
	{ 3187, -2932 },
	{ 1593, -1338 },
	{ 1593, -2932 },
	{ 0, -1338 },
	{ 0, -2932 },
	{ 6375, -4526 },
	{ 6375, -6120 },
	{ 4781, -4526 },
	{ 4781, -6120 },
	{ 3187, -4526 },
	{ 3187, -6120 },
	{ 1593, -4526 },
	{ 1593, -6120 },
	{ 0, -4526 },
	{ 0, -6120 },
	{ 6375, -2932 },
	{ 6375, -4526 },
	{ 4781, -2932 },
	{ 4781, -4526 },
	{ 3187, -2932 },
	{ 3187, -4526 },
	{ 1593, -2932 },
	{ 1593, -4526 },
	{ 0, -2932 },
	{ 0, -4526 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000C794C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000C7854, NULL, NULL, NULL, uv_000C78AC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000C7964[] = {
	{ -270, 0, -135 },
	{ -135, 0, -135 },
	{ -135, 0, -270 },
	{ -270, 0, -270 },
	{ 0, 0, -135 },
	{ 0, 0, -270 },
	{ 135, 0, -135 },
	{ 270, 0, -135 },
	{ 270, 0, -270 },
	{ 135, 0, -270 },
	{ -270, 0, 0 },
	{ -135, 0, 0 },
	{ 0 },
	{ 135, 0, 0 },
	{ 270, 0, 0 },
	{ -135, 0, 135 },
	{ -270, 0, 135 },
	{ -270, 0, 270 },
	{ -135, 0, 270 },
	{ 0, 0, 135 },
	{ 0, 0, 270 },
	{ 270, 0, 135 },
	{ 135, 0, 135 },
	{ 135, 0, 270 },
	{ 270, 0, 270 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000C7A90[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000C7BBC = { vertex_000C7964, normal_000C7A90, LengthOfArray<Sint32>(vertex_000C7964), meshlist_000C794C, matlist_000C7840, LengthOfArray<Uint16>(meshlist_000C794C), LengthOfArray<Uint16>(matlist_000C7840), { 0 }, 381.8376f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000C7BE4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C7BBC, 0, -0.25f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C7C18 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B0608, 0, 0, 0, 0, 0x71C, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C7C4C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B0608, 0, 0, 0, 0, 0x4E38, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C7C80 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B0608, 0, 0, 0, 0, 0x5555, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C7CB4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B0608, 0, 0, 0, 0, 0xEAAA, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C7CE8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B0608, 0, 0, 0, 0, 0xF1C7, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C7D1C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B0608, 0, 0, 0, 0, 0xF8E3, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C7D50 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B0608, 0, 0, 0, 0, 0xE38, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C7D84 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B0608, 0, 0, 0, 0, 0x9C71, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C7DB8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B0608, 0, 0, 0, 0, 0xA38E, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C7DEC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B0608, 0, 0, 0, 0, 0xAAAA, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C7E20 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B0608, 0, 0, 0, 0, 0xB1C7, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C7E54 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B0608, 0, 0, 0, 0, 0xB8E3, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C7E88 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B0608, 0, 0, 0, 0, 0xC000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C7EBC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B0608, 0, 0, 0, 0, 0xC71C, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C7EF0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B0608, 0, 0, 0, 0, 0xCE38, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C7F24 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B0608, 0, 0, 0, 0, 0x1555, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C7F58 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B0608, 0, 0, 0, 0, 0xD555, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C7F8C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B0608, 0, 0, 0, 0, 0xDC71, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C7FC0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B0608, 0, 0, 0, 0, 0xE38E, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C7FF4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B0608, 0, 0, 0, 0, 0x1C71, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8028 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B0C20, 215, -3, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C805C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B0C20, 152.5f, -3, -152.5f, 0, 0xFFFFF556, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8090 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B1154, 0, 28.5f, 0, 0, 0x3FFF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C80C4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B1154, 0, 28.5f, 0, 0, 0x6AAA, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C80F8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B1154, 0, 28.5f, 0, 0, 0x9555, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C812C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B1154, 0, 28.5f, 0, 0, 0xC000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8160 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B1154, 0, 28.5f, 0, 0, 0xEAAA, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8194 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B176C, -152.5f, -3, 152.5f, 0, 0xFFFFA001, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C81C8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B1D84, 151.5f, -3, 152.5f, 0, 0x2000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C81FC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B215C, 0, 0, 0, 0, 0x9555, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8230 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B2534, 0, 0, 0, 0, 0x5C71, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8264 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B27F4, 0, 0, 0, 0, 0x271C, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8298 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B27F4, 0, 0, 0, 0, 0x78E3, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C82CC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B27F4, 0, 0, 0, 0, 0x91C7, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8300 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B2AB4, 0, 0, 0, 0, 0xFFFFE71D, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8334 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B2CAC, 0, 0, 0, 0, 0x438E, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8368 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B2CAC, 0, 0, 0, 0, 0x3555, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C839C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B2CAC, 0, 0, 0, 0, 0x6E38, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C83D0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B2CAC, 0, 0, 0, 0, 0x7555, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8404 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B2CAC, 0, 0, 0, 0, 0x8AAA, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8438 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B2CAC, 0, 0, 0, 0, 0x871C, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C846C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B3060, 0, 0, 0, 0, 0xAAA, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C84A0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B3060, 0, 0, 0, 0, 0x4AAA, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C84D4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B3060, 0, 0, 0, 0, 0x51C7, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8508 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B3060, 0, 0, 0, 0, 0x58E3, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C853C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B3060, 0, 0, 0, 0, 0x11C7, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8570 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B3060, 0, 0, 0, 0, 0x98E3, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C85A4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B3060, 0, 0, 0, 0, 0xA000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C85D8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B3060, 0, 0, 0, 0, 0xA71C, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C860C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B3060, 0, 0, 0, 0, 0xAE38, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8640 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B3060, 0, 0, 0, 0, 0xB555, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8674 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B3060, 0, 0, 0, 0, 0xBC71, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C86A8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B3060, 0, 0, 0, 0, 0xC38E, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C86DC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B3060, 0, 0, 0, 0, 0xCAAA, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8710 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B3060, 0, 0, 0, 0, 0xD1C7, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8744 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B3060, 0, 0, 0, 0, 0x18E3, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8778 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B3060, 0, 0, 0, 0, 0xD8E3, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C87AC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B3060, 0, 0, 0, 0, 0xE000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C87E0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B3060, 0, 0, 0, 0, 0xE71C, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8814 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B3060, 0, 0, 0, 0, 0xEE38, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8848 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B3060, 0, 0, 0, 0, 0xF555, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C887C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B3060, 0, 0, 0, 0, 0xFC71, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C88B0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B3060, 0, 0, 0, 0, 0x2000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C88E4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B3E94, -355.5f, 3.5f, 39, 0x3FFF, 0x71C, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8918 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B3E94, -262, 3.5f, 223, 0x3FFF, 0x222, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C894C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B3E94, 177.5f, 3.5f, 308, 0x3FFF, 0x471C, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8980 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C1ACC, 0, 0, 0, 0, 0xE38, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C89B4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C1ACC, 0, 0, 0, 0, 0x8E38, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C89E8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C1ACC, 0, 0, 0, 0, 0x9C71, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8A1C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C1ACC, 0, 0, 0, 0, 0xAAAA, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8A50 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C1ACC, 0, 0, 0, 0, 0xB8E3, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8A84 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C1ACC, 0, 0, 0, 0, 0xC71C, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8AB8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C1ACC, 0, 0, 0, 0, 0xD555, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8AEC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C1ACC, 0, 0, 0, 0, 0xE38E, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8B20 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C1ACC, 0, 0, 0, 0, 0xF1C7, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8B54 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C1ACC, 0, 0, 0, 0, 0x1C71, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8B88 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C1ACC, 0, 0, 0, 0, 0x2AAA, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8BBC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C1ACC, 0, 0, 0, 0, 0x38E3, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8BF0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C1ACC, 0, 0, 0, 0, 0x471C, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8C24 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C1ACC, 0, 0, 0, 0, 0x5555, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8C58 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C1ACC, 0, 0, 0, 0, 0x638E, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8C8C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C1ACC, 0, 0, 0, 0, 0x71C7, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8CC0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C1ACC, 0, 0, 0, 0, 0x7FFF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8CF4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C1E40, -152.5f, -3, -152.5f, 0, 0xAAA, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8D28 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C1E40, -215, -3, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8D5C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C1E40, -152.5f, -3, 152.5f, 0, 0xFFFFF556, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8D90 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C1E40, 151.5f, -3, 152.5f, 0, 0xFFFFF556, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8DC4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C1E40, 215, -3, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8DF8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C1E40, 152.5f, -3, -152.5f, 0, 0xFFFFF556, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8E2C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C3A2C, 0, -30.5f, 0, 0, 0x3FFF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8E60 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C3A2C, 0, -30.5f, 0, 0, 0x6AAA, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8E94 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C3A2C, 0, -30.5f, 0, 0, 0x9555, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8EC8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C3A2C, 0, -30.5f, 0, 0, 0xC000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8EFC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C3A2C, 0, -30.5f, 0, 0, 0xEAAA, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8F30 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C4300, -1260, -203, 603, 0xFFFFFF06, 0xB95B, 0xFFFFFA8E, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8F64 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C4500, -192.5f, 0, 302, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000C8F98 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C51D4, 892.9288f, -59.28561f, 2034.455f, 0x16C, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) COL collist_000976C0[] = {
	{ { -545.4837f, -220, 999.9899f }, 2876.595f, 0, 0, &object_0009E8A8, 0, 0x88000020 }, //Ocean
	{ { -3780.139f, 1836.382f, -1715.595f }, 3065.147f, 0, 0, &object_000A7708, 0, 0x80000020 }, //BG mountain
	{ { -3124.018f, 267, -594.889f }, 2155.521f, 0, 0, &object_000A66A4, 0, 0x80000020 }, //Icy rock under mountain
	{ { -763.9807f, 810, 3921.104f }, 2021.65f, 0, 0, &object_0009C920, 0, 0x80000020 }, //BG rock above cave 1
	{ { 2424.387f, 117.5f, 178.3075f }, 1564.141f, 0, 0, &object_000A4194, 0, 0x80000020 }, //BG rock 2
	{ { -345.7057f, 501.5f, 3110.24f }, 1728.25f, 0, 0, &object_0009C6B4, 0, 0x80000020 }, //BG rock above cave 2
	{ { 122.7695f, 243.75f, 2268.324f }, 1519.504f, 0, 0, &object_0009DE88, 0, 0x80000020 }, //Forest above cave
	{ { -1842.818f, 135.2002f, 505.7282f }, 1950.322f, 0, 0, &object_000A4D18, 0, 0x80000020 }, //Forest+rocks under mountain
	{ { 1898.021f, -6.692077f, 1404.912f }, 2109.167f, 0, 0, &object_000A6438, 0, 0x80000020 }, //Forest under BG rock 2
	{ { -557.4172f, 361.3719f, 247.6629f }, 193.6107f, 0, 0, &object_00099AE0, 0, 0x20200001 },
	{ { -479.877f, 362.7543f, -103.188f }, 228.1082f, 0, 0, &object_00099CFC, 0, 0x20200001 },
	{ { -471.7552f, 393.5562f, -513.1024f }, 262.7399f, 0, 0, &object_00099F18, 0, 0x20200001 },
	{ { -292.7453f, 448.2486f, -844.1406f }, 205.6311f, 0, 0, &object_0009A134, 0, 0x20200001 },
	{ { -41.42923f, 484.8167f, -837.3062f }, 227.7793f, 0, 0, &object_0009A350, 0, 0x20200001 },
	{ { 461.0482f, 187.462f, 542.2709f }, 309.1484f, 0, 0, &object_0009A5FC, 0, 0x20200001 },
	{ { 161.301f, 129.5422f, 726.2897f }, 271.609f, 0, 0, &object_0009A8E0, 0, 0x20200001 },
	{ { 225.8757f, 451.1448f, -584.5504f }, 254.111f, 0, 0, &object_0009AAFC, 0, 0x20200001 },
	{ { 433.0602f, 342.3974f, -297.6882f }, 221.0604f, 0, 0, &object_0009ACD0, 0, 0x20200001 },
	{ { 0.5f, -30, 1038 }, 258.9792f, 0, 0, &object_0009AF28, 0, 0x20200001 },
	{ { 512.3377f, 315.8096f, 70.84737f }, 246.7688f, 0, 0, &object_0009B144, 0, 0x20200001 },
	{ { 760.8793f, 313.0345f, 261.3249f }, 217.9314f, 0, 0, &object_0009B368, 0, 0x20200001 },
	{ { 750.0008f, 239.3009f, 329.5495f }, 270.4891f, 0, 0, &object_0009B6A0, 0, 0x20200001 },
	{ { 22.40257f, 2.633331f, 1437.961f }, 277.998f, 0, 0, &object_0009B95C, 0, 0x20200001 },
	{ { -147.2656f, 131.3756f, 738.707f }, 267.3959f, 0, 0, &object_0009BC40, 0, 0x20200001 },
	{ { -469.0468f, 220.5821f, 549.9084f }, 355.9483f, 0, 0, &object_0009C124, 0, 0x20200001 },
	{ { -1000.001f, 30.38067f, 421.5496f }, 353.6481f, 0, 0, &object_0009CBD8, 0, 0x80000020 },
	{ { -50.00012f, -87.63605f, 433.1015f }, 1313.044f, 0, 0, &object_0009DA9C, 0, 0x80000020 },
	{ { 1118.845f, 22.99869f, 2404.496f }, 1018.771f, 0, 0, &object_0009F6DC, 0, 0x80000020 },
	{ { -803.2065f, 17.5229f, 1516.494f }, 629.4918f, 0, 0, &object_000A001C, 0, 0x80000020 },
	{ { 12.71671f, 210.4147f, 1789.746f }, 526.1426f, 0, 0, &object_000A03A0, 0, 0x80000020 },
	{ { -544.7122f, 235.5259f, -313.8357f }, 1135.786f, 0, 0, &object_000A2468, 0, 0x80000020 },
	{ { 600.0009f, 220.1795f, -448.0588f }, 977.5711f, 0, 0, &object_000A3A00, 0, 0x80000020 },
	{ { -1139.213f, -101.5825f, 1666.498f }, 1165.178f, 0, 0, &object_000A5838, 0, 0x80000020 },
	{ { 1219.11f, -109.9742f, 2235.814f }, 1175.344f, 0, 0, &object_000A5CBC, 0, 0x80000020 },
	{ { 0, 52.625f, 0 }, 200.9379f, 0, 0, &object_000A7A08, 0, 0x40000001 },
	{ { 0, 21, 0 }, 248.6483f, 0, 0, &object_000A8584, 0, 0xC0001001 },
	{ { 113.0423f, 40.23366f, 1699.576f }, 312.8322f, 0, 0, &object_000A8948, 0, 0xA0001001 },
	{ { -178.6627f, -32.80423f, 1450.67f }, 288.7918f, 0, 0, &object_000A8C28, 0, 0xA0001001 },
	{ { -612.8209f, 107.066f, 392.0105f }, 292.7088f, 0, 0, &object_000A9008, 0, 0xA0001001 },
	{ { -469.906f, 114.4132f, 55.25326f }, 365.9998f, 0, 0, &object_000A94D0, 0, 0xA0001001 },
	{ { -113.8454f, 252.0744f, -897.6641f }, 281.7007f, 0, 0, &object_000A98E4, 0, 0xA0001001 },
	{ { -493.8721f, 167.2782f, -420.1129f }, 310.6899f, 0, 0, &object_000A9D74, 0, 0xA0001001 },
	{ { -384.406f, 185.4163f, -746.2508f }, 317.6943f, 0, 0, &object_000AA220, 0, 0xA0001001 },
	{ { 761.9649f, 69.34779f, 261.5491f }, 285.2733f, 0, 0, &object_000AA6DC, 0, 0xA0001001 },
	{ { 189.8085f, 274.6025f, -712.5601f }, 310.579f, 0, 0, &object_000AABD4, 0, 0xA0001001 },
	{ { 513.8279f, 127.0874f, 74.64316f }, 278.8725f, 0, 0, &object_000AAFE8, 0, 0xA0001001 },
	{ { 403.3149f, 154.9483f, -340.7578f }, 332.5874f, 0, 0, &object_000AB460, 0, 0xA0001001 },
	{ { 0.25f, -181, 1038 }, 293.756f, 0, 0, &object_000AEE5C, 0, 0xA0000001 },
	{ { 0, 65.25f, 0 }, 171.0811f, 0, 0, &object_000AFA9C, 0, 0xC0000001 }, //Middle thing
	{ { 0, 46, 192.25f }, 113.9125f, 0, 0, &object_000B02D4, 0, 0xA0000001 },
	{ { 0, 48.25f, -322.85f }, 25.54041f, 0, 0, &object_000B0630, 0, 0xC0000001 },
	{ { -0.000275f, 64.5f, -215 }, 69.82254f, 0, 0, &object_000B0C48, 0, 0xC0000001 },
	{ { 43.125f, 115.5f, 74.69469f }, 31.65932f, 0, 0, &object_000B117C, 0, 0xC0000001 },
	{ { -215, 20, -0.000275f }, 29.11937f, 0, 0, &object_000B1794, 0, 0xE0000001 },
	{ { -152.5f, 47, -152.5f }, 53.09367f, 0, 0, &object_000B1DAC, 0, 0xC0000001 },
	{ { -315.2536f, 48.25f, 71.32684f }, 14.51077f, 0, 0, &object_000B2184, 0, 0xE0000001 },
	{ { -236.0687f, 48.25f, -220.9297f }, 13.73181f, 0, 0, &object_000B255C, 0, 0xE0000001 },
	{ { -228.6784f, 18.6f, 228.6783f }, 21.17086f, 0, 0, &object_000B281C, 0, 0xE0000001 },
	{ { -322.1693f, 18.6f, -28.18635f }, 21.17086f, 0, 0, &object_000B2ADC, 0, 0xE0000001 },
	{ { -293.0999f, 6.2f, -136.6747f }, 11.86108f, 0, 0, &object_000B2CD4, 0, 0xE0000001 },
	{ { -28.18615f, 31, -322.1694f }, 32.60744f, 0, 0, &object_000B3088, 0, 0xC0000001 },
	{ { 0, -0.00042f, 0.0001985f }, 565.6855f, 0, 0, &object_000B3CD4, 0, 0xA0000001 },
	{ { -324.3f, 6.900009f, -139.9933f }, 18.50662f, 0, 0, &object_000B3EBC, 0, 0xC0000001 },
	{ { 77.69662f, -3.473464f, 1580.521f }, 135.6595f, 0, 0, &object_000B4AA0, 0, 0xC0000001 },
	{ { 198.837f, -7.411467f, 1747.361f }, 123.3287f, 0, 0, &object_000B5004, 0, 0xC0000001 },
	{ { -225.1019f, 3.499995f, 435.1971f }, 44.64809f, 0, 0, &object_000B52B8, 0, 0xC0000001 },
	{ { 54.52558f, -52.34166f, 1367.008f }, 34.46026f, 0, 0, &object_000B5540, 0, 0xC0000001 },
	{ { 231.5865f, -28.44661f, 569.6529f }, 91.54311f, 0, 0, &object_000B57F4, 0, 0xC0000001 },
	{ { 188.3778f, -45.03352f, 660.4078f }, 34.34013f, 0, 0, &object_000B5AA8, 0, 0xC0000001 },
	{ { 391.0129f, 32.94915f, 395.6787f }, 155.2049f, 0, 0, &object_000B60B0, 0, 0xA0000001 },
	{ { -184.8041f, -16.28031f, 503.8251f }, 26.98934f, 0, 0, &object_000B6364, 0, 0xC0000001 },
	{ { -475.8242f, 24.58493f, 151.66f }, 36.79642f, 0, 0, &object_000B6618, 0, 0xC0000001 },
	{ { -145.3038f, -9.415649f, 472.6588f }, 35.29535f, 0, 0, &object_000B68CC, 0, 0xC0000001 },
	{ { -379.4979f, 5.850014f, 302.9311f }, 34.05215f, 0, 0, &object_000B6B80, 0, 0xC0000001 },
	{ { -557.0318f, 52.3446f, 442.4055f }, 199.3655f, 0, 0, &object_000B717C, 0, 0xA0000001 },
	{ { -470.3695f, 29.99999f, 259.5157f }, 50.29105f, 0, 0, &object_000B7430, 0, 0xC0000001 },
	{ { 9.181548f, -37.48796f, 595.3268f }, 293.3292f, 0, 0, &object_000B7A18, 0, 0xA0000001 },
	{ { 433.8529f, 37.79404f, -116.2927f }, 272.1132f, 0, 0, &object_000B7D44, 0, 0xA0000001 },
	{ { 249.4941f, 125.8348f, -520.7256f }, 325.5989f, 0, 0, &object_000B8398, 0, 0xA0000001 },
	{ { -446.7432f, -14.6699f, 541.1664f }, 343.7165f, 0, 0, &object_000B8868, 0, 0xA0000001 },
	{ { -200.0004f, 178.7874f, -866.4515f }, 362.7348f, 0, 0, &object_000B8CEC, 0, 0xA0000001 },
	{ { 898.7238f, 59.89546f, 237.5495f }, 355.8982f, 0, 0, &object_000B904C, 0, 0xA0000001 },
	{ { 400.0002f, -9.904531f, 460.5132f }, 390.5117f, 0, 0, &object_000B9500, 0, 0xA0000001 },
	{ { -494.5005f, 32.02337f, -38.45068f }, 384.5497f, 0, 0, &object_000B99EC, 0, 0xA0000001 },
	{ { -299.106f, 128.3125f, -535.2256f }, 358.716f, 0, 0, &object_000BA054, 0, 0xA0000001 },
	{ { 0.0000037f, 86.49f, -0.0000153f }, 94.01936f, 0, 0, &object_000BA8A0, 0, 0xC0000001 },
	{ { 0, 1, 0 }, 395.6269f, 0, 0, &object_000BCC28, 0, 0xA0000001 }, //floor
	{ { -349.7254f, 15.5093f, 548.7796f }, 251.8715f, 0, 0, &object_000BD820, 0, 0xC0000001 },
	{ { 530.8021f, 48.37537f, 296.3237f }, 257.0781f, 0, 0, &object_000BE418, 0, 0xC0000001 },
	{ { -350.1193f, 110.2367f, -561.8109f }, 241.1871f, 0, 0, &object_000BF010, 0, 0xA0000001 },
	{ { -10.21773f, -34.60173f, 1413.083f }, 173.4558f, 0, 0, &object_000BF758, 0, 0xC0000001 },
	{ { 93.86992f, -48.15973f, 1693.506f }, 596.145f, 0, 0, &object_000BFE2C, 0, 0xA0000001 },
	{ { 0, 87.75f, 72.2f }, 25.86745f, 0, 0, &object_000C002C, 0, 0xC0000001 },
	{ { 0.0000075f, 181.7512f, -0.000035f }, 146.5031f, 0, 0, &object_000C13FC, 0, 0xC0000001 },
	{ { 0, 45, 194.5141f }, 108.1034f, 0, 0, &object_000C15C8, 0, 0x20004001 },
	{ { 2.517927f, 1, -352.2068f }, 62.58827f, 0, 0, &object_000C1AF4, 0, 0x80000000 },
	{ { 0, 48.75f, 164.6391f }, 80.65566f, 0, 0, &object_000C32F4, 0, 0x80000000 },
	{ { 0, 57.75f, -0.000035f }, 128.1288f, 0, 0, &object_000C36B4, 0, 0x80000000 },
	{ { 0, -106.5f, 0 }, 436.7061f, 0, 0, &object_000C3854, 0, 0x80000000 },
	{ { 840.8971f, -125.445f, 687.8188f }, 92.59031f, 0, 0, &object_000C3D08, 0, 0x80000000 },
	{ { 292.2332f, -32.90233f, 1901.853f }, 236.2657f, 0, 0, &object_000C3EDC, 0, 0x80000000 },
	{ { 835.8126f, -178.4636f, 700.5284f }, 199.2754f, 0, 0, &object_000C4328, 0, 0x80000000 },
	{ { -297, 4.566666f, -174.9f }, 11.74307f, 0, 0, &object_000C4528, 0, 0x80000000 },
	{ { 0, 3.75f, 279.58f }, 23.21274f, 0, 0, &object_000C4780, 0, 0x80000000 },
	{ { 90.44801f, -148.1314f, 1653.347f }, 573.2134f, 0, 0, &object_000C4C2C, 0, 0x80000000 },
	{ { -1113.662f, -11.15029f, 1342.285f }, 247.1542f, 0, 0, &object_000C51FC, 0, 0x80000000 },
	{ { 43.47709f, 146.6574f, -561.1557f }, 294.1997f, 0, 0, &object_000C6BD8, 0, 0xC0000001 },
	{ { -56.06232f, 48.25f, -317.9452f }, 25.54041f, 0, 0, &object_000C7C18, 0, 0xC0000001 },
	{ { -303.3797f, 48.25f, 110.4213f }, 25.54041f, 0, 0, &object_000C7C4C, 0, 0xC0000001 },
	{ { -279.5963f, 48.25f, 161.4251f }, 25.54041f, 0, 0, &object_000C7C80, 0, 0xC0000001 },
	{ { 161.4249f, 48.25f, -279.5964f }, 25.54041f, 0, 0, &object_000C7CB4, 0, 0xC0000001 },
	{ { 110.4209f, 48.25f, -303.3799f }, 25.54041f, 0, 0, &object_000C7CE8, 0, 0xC0000001 },
	{ { 56.06215f, 48.25f, -317.9452f }, 25.54041f, 0, 0, &object_000C7D1C, 0, 0xC0000001 },
	{ { -110.4212f, 48.25f, -303.3798f }, 25.54041f, 0, 0, &object_000C7D50, 0, 0xC0000001 },
	{ { 207.5241f, 48.25f, 247.3173f }, 25.54041f, 0, 0, &object_000C7D84, 0, 0xC0000001 },
	{ { 247.3176f, 48.25f, 207.5238f }, 25.54041f, 0, 0, &object_000C7DB8, 0, 0xC0000001 },
	{ { 279.5964f, 48.25f, 161.4249f }, 25.54041f, 0, 0, &object_000C7DEC, 0, 0xC0000001 },
	{ { 303.3799f, 48.25f, 110.4209f }, 25.54041f, 0, 0, &object_000C7E20, 0, 0xC0000001 },
	{ { 317.9452f, 48.25f, 56.062f }, 25.54041f, 0, 0, &object_000C7E54, 0, 0xC0000001 },
	{ { 322.85f, 48.25f, -0.00032114f }, 25.54041f, 0, 0, &object_000C7E88, 0, 0xC0000001 },
	{ { 317.9451f, 48.25f, -56.06263f }, 25.54041f, 0, 0, &object_000C7EBC, 0, 0xC0000001 },
	{ { 303.3796f, 48.25f, -110.4215f }, 25.54041f, 0, 0, &object_000C7EF0, 0, 0xC0000001 },
	{ { -161.425f, 48.25f, -279.5963f }, 25.54041f, 0, 0, &object_000C7F24, 0, 0xC0000001 },
	{ { 279.5961f, 48.25f, -161.4254f }, 25.54041f, 0, 0, &object_000C7F58, 0, 0xC0000001 },
	{ { 247.3171f, 48.25f, -207.5243f }, 25.54041f, 0, 0, &object_000C7F8C, 0, 0xC0000001 },
	{ { 207.5238f, 48.25f, -247.3176f }, 25.54041f, 0, 0, &object_000C7FC0, 0, 0xC0000001 },
	{ { -207.524f, 48.25f, -247.3174f }, 25.54041f, 0, 0, &object_000C7FF4, 0, 0xC0000001 },
	{ { 215, 64.5f, -0.000275f }, 69.82254f, 0, 0, &object_000C8028, 0, 0xC0000001 },
	{ { 152.5f, 64.5f, -152.5f }, 69.82254f, 0, 0, &object_000C805C, 0, 0xC0000001 },
	{ { 86.25f, 115.5f, -0.000015f }, 31.65932f, 0, 0, &object_000C8090, 0, 0xC0000001 },
	{ { 43.12494f, 115.5f, -74.69472f }, 31.65932f, 0, 0, &object_000C80C4, 0, 0xC0000001 },
	{ { -43.125f, 115.5f, -74.69469f }, 31.65932f, 0, 0, &object_000C80F8, 0, 0xC0000001 },
	{ { -86.25f, 115.5f, 0.00008578999f }, 31.65932f, 0, 0, &object_000C812C, 0, 0xC0000001 },
	{ { -43.12495f, 115.5f, 74.69471f }, 31.65932f, 0, 0, &object_000C8160, 0, 0xC0000001 },
	{ { -152.5f, 20, 152.5f }, 29.11937f, 0, 0, &object_000C8194, 0, 0xE0000001 },
	{ { 151.5f, 47, 152.5f }, 53.09367f, 0, 0, &object_000C81C8, 0, 0xC0000001 },
	{ { 174.8484f, 48.25f, 271.8463f }, 14.51077f, 0, 0, &object_000C81FC, 0, 0xE0000001 },
	{ { -258.5661f, 48.25f, 194.1183f }, 13.73181f, 0, 0, &object_000C8230, 0, 0xE0000001 },
	{ { -264.9138f, 18.6f, -185.4946f }, 21.17086f, 0, 0, &object_000C8264, 0, 0xE0000001 },
	{ { -56.1576f, 18.6f, 318.4868f }, 21.17086f, 0, 0, &object_000C8298, 0, 0xE0000001 },
	{ { 136.675f, 18.6f, 293.0998f }, 21.17086f, 0, 0, &object_000C82CC, 0, 0xE0000001 },
	{ { -185.4946f, 18.6f, 264.9138f }, 21.17086f, 0, 0, &object_000C8300, 0, 0xE0000001 },
	{ { -322.1693f, 6.2f, 28.18635f }, 11.86108f, 0, 0, &object_000C8334, 0, 0xE0000001 },
	{ { -312.3804f, 6.2f, -83.70197f }, 11.86108f, 0, 0, &object_000C8368, 0, 0xE0000001 },
	{ { -136.6747f, 6.2f, 293.1f }, 11.86108f, 0, 0, &object_000C839C, 0, 0xE0000001 },
	{ { -83.70201f, 6.2f, 312.3804f }, 11.86108f, 0, 0, &object_000C83D0, 0, 0xE0000001 },
	{ { 83.70222f, 6.2f, 312.3804f }, 11.86108f, 0, 0, &object_000C8404, 0, 0xE0000001 },
	{ { 56.1582f, 6.2f, 318.4868f }, 11.86108f, 0, 0, &object_000C8438, 0, 0xE0000001 },
	{ { -83.70206f, 31, -312.3804f }, 32.60743f, 0, 0, &object_000C846C, 0, 0xC0000001 },
	{ { -312.3804f, 31, 83.70226f }, 32.60744f, 0, 0, &object_000C84A0, 0, 0xC0000001 },
	{ { -293.0999f, 31, 136.6749f }, 32.60744f, 0, 0, &object_000C84D4, 0, 0xC0000001 },
	{ { -264.9136f, 31, 185.4949f }, 32.60744f, 0, 0, &object_000C8508, 0, 0xC0000001 },
	{ { -136.6747f, 31, -293.0999f }, 32.60744f, 0, 0, &object_000C853C, 0, 0xC0000001 },
	{ { 185.4949f, 31, 264.9136f }, 32.60744f, 0, 0, &object_000C8570, 0, 0xC0000001 },
	{ { 228.6785f, 31, 228.6781f }, 32.60744f, 0, 0, &object_000C85A4, 0, 0xC0000001 },
	{ { 264.9139f, 31, 185.4944f }, 32.60744f, 0, 0, &object_000C85D8, 0, 0xC0000001 },
	{ { 293.1001f, 31, 136.6745f }, 32.60744f, 0, 0, &object_000C860C, 0, 0xC0000001 },
	{ { 312.3805f, 31, 83.70163f }, 32.60744f, 0, 0, &object_000C8640, 0, 0xC0000001 },
	{ { 322.1694f, 31, 28.18571f }, 32.60744f, 0, 0, &object_000C8674, 0, 0xC0000001 },
	{ { 322.1693f, 31, -28.18632f }, 32.60744f, 0, 0, &object_000C86A8, 0, 0xC0000001 },
	{ { 312.3804f, 31, -83.70221f }, 32.60744f, 0, 0, &object_000C86DC, 0, 0xC0000001 },
	{ { 293.0998f, 31, -136.675f }, 32.60744f, 0, 0, &object_000C8710, 0, 0xC0000001 },
	{ { -185.4946f, 31, -264.9137f }, 32.60744f, 0, 0, &object_000C8744, 0, 0xC0000001 },
	{ { 264.9136f, 31, -185.4949f }, 32.60744f, 0, 0, &object_000C8778, 0, 0xC0000001 },
	{ { 228.6781f, 31, -228.6785f }, 32.60744f, 0, 0, &object_000C87AC, 0, 0xC0000001 },
	{ { 185.4946f, 31, -264.9138f }, 32.60744f, 0, 0, &object_000C87E0, 0, 0xC0000001 },
	{ { 136.6747f, 31, -293.0999f }, 32.60744f, 0, 0, &object_000C8814, 0, 0xC0000001 },
	{ { 83.70193f, 31, -312.3804f }, 32.60744f, 0, 0, &object_000C8848, 0, 0xC0000001 },
	{ { 28.18602f, 31, -322.1694f }, 32.60744f, 0, 0, &object_000C887C, 0, 0xC0000001 },
	{ { -228.6783f, 31, -228.6783f }, 32.60744f, 0, 0, &object_000C88B0, 0, 0xC0000001 },
	{ { -353.6941f, 6.900009f, 49.24202f }, 18.50662f, 0, 0, &object_000C88E4, 0, 0xC0000001 },
	{ { -261.4557f, 6.900009f, 233.3857f }, 18.50662f, 0, 0, &object_000C8918, 0, 0xC0000001 },
	{ { 187.742f, 6.900009f, 306.1941f }, 18.50662f, 0, 0, &object_000C894C, 0, 0xC0000001 },
	{ { -118.0958f, 1, -331.8273f }, 62.58827f, 0, 0, &object_000C8980, 0, 0x80000000 },
	{ { 118.0958f, 1, 331.8273f }, 62.58828f, 0, 0, &object_000C89B4, 0, 0x80000000 },
	{ { 224.4655f, 1, 271.4244f }, 62.58827f, 0, 0, &object_000C89E8, 0, 0x80000000 },
	{ { 303.7612f, 1, 178.2839f }, 62.58827f, 0, 0, &object_000C8A1C, 0, 0x80000000 },
	{ { 346.4188f, 1, 63.6394f }, 62.58827f, 0, 0, &object_000C8A50, 0, 0x80000000 },
	{ { 347.2932f, 1, -58.6804f }, 62.58827f, 0, 0, &object_000C8A84, 0, 0x80000000 },
	{ { 306.2789f, 1, -173.923f }, 62.58827f, 0, 0, &object_000C8AB8, 0, 0x80000000 },
	{ { 228.3229f, 1, -268.1877f }, 62.58827f, 0, 0, &object_000C8AEC, 0, 0x80000000 },
	{ { 122.8276f, 1, -330.1051f }, 62.58827f, 0, 0, &object_000C8B20, 0, 0x80000000 },
	{ { -224.4654f, 1, -271.4245f }, 62.58826f, 0, 0, &object_000C8B54, 0, 0x80000000 },
	{ { -303.7612f, 1, -178.2838f }, 62.58827f, 0, 0, &object_000C8B88, 0, 0x80000000 },
	{ { -346.4188f, 1, -63.63978f }, 62.58827f, 0, 0, &object_000C8BBC, 0, 0x80000000 },
	{ { -347.2932f, 1, 58.6804f }, 62.58827f, 0, 0, &object_000C8BF0, 0, 0x80000000 },
	{ { -306.279f, 1, 173.9229f }, 62.58828f, 0, 0, &object_000C8C24, 0, 0x80000000 },
	{ { -228.3229f, 1, 268.1877f }, 62.58827f, 0, 0, &object_000C8C58, 0, 0x80000000 },
	{ { -122.828f, 1, 330.1049f }, 62.58827f, 0, 0, &object_000C8C8C, 0, 0x80000000 },
	{ { -2.517921f, 1, 352.2068f }, 62.58827f, 0, 0, &object_000C8CC0, 0, 0x80000000 },
	{ { -1259.204f, -180.2348f, 601.205f }, 199.4881f, 0, 0, &object_000C8F30, 0, 0x80000000 },
	{ { -193, 4.566666f, 301.6f }, 11.74307f, 0, 0, &object_000C8F64, 0, 0x80000000 },
	{ { 640.3376f, -76.15028f, 1938.285f }, 247.1542f, 0, 0, &object_000C8F98, 0, 0x80000000 },
	{ { -535.723f, 136.6345f, -207.7276f }, 994.8428f, 0, 0, &object_000A0BE0, 0, 0x80000020 }, //Grassy bits
	{ { 112.7029f, -49.79767f, 1701.08f }, 478.5961f, 0, 0, &object_0009C448, 0, 0x80000020 }, //Grassy bits
	{ { 519.2986f, 144.5998f, -269.7307f }, 734.4481f, 0, 0, &object_000A3F18, 0, 0x80000020 }, //Grassy bits
	{ { 200.0002f, 551.8717f, -873.4525f }, 700.1702f, 0, 0, &object_000A4FC0, 0, 0x80000020 }, //Grass above altar
	{ { -360.0009f, 527.1273f, -827.4522f }, 600.7325f, 0, 0, &object_000A522C, 0, 0x80000020 }, //Grass above altar
	{ { 0, -25.5f, 0.0000075f }, 240.111f, 0, 0, &object_000C1930, 0, 0x88000000 }, //WTF thing
	{ { -0.00019f, -35.5f, -215 }, 37.08352f, 0, 0, &object_000C1E68, 0, 0x88000000 }, //Pillar reflection bottom
	{ { -152.5f, -35.5f, -152.5f }, 37.08352f, 0, 0, &object_000C8CF4, 0, 0x88000000 }, //Pillar reflection bottom
	{ { -215, -35.5f, -0.00019f }, 37.08352f, 0, 0, &object_000C8D28, 0, 0x88000000 }, //Pillar reflection bottom
	{ { -152.5f, -35.5f, 152.5f }, 37.08352f, 0, 0, &object_000C8D5C, 0, 0x88000000 }, //Pillar reflection bottom
	{ { 151.5f, -35.5f, 152.5f }, 37.08352f, 0, 0, &object_000C8D90, 0, 0x88000000 }, //Pillar reflection bottom
	{ { 215, -35.5f, -0.00019f }, 37.08352f, 0, 0, &object_000C8DC4, 0, 0x88000000 }, //Pillar reflection bottom
	{ { 152.5f, -35.5f, -152.5f }, 37.08352f, 0, 0, &object_000C8DF8, 0, 0x88000000 }, //Pillar reflection bottom
	{ { 43.125f, 61.5f, 74.69469f }, 26.04443f, 0, 0, &object_000C3A54, 0, 0x88000000 }, //Pillar reflection top
	{ { 86.25f, 61.5f, -0.000015f }, 26.04443f, 0, 0, &object_000C8E2C, 0, 0x88000000 }, //Pillar reflection top
	{ { 43.12494f, 61.5f, -74.69472f }, 26.04443f, 0, 0, &object_000C8E60, 0, 0x88000000 }, //Pillar reflection top
	{ { -43.125f, 61.5f, -74.69469f }, 26.04443f, 0, 0, &object_000C8E94, 0, 0x88000000 }, //Pillar reflection top
	{ { -86.25f, 61.5f, 0.00008578999f }, 26.04443f, 0, 0, &object_000C8EC8, 0, 0x88000000 }, //Pillar reflection top
	{ { -43.12495f, 61.5f, 74.69471f }, 26.04443f, 0, 0, &object_000C8EFC, 0, 0x88000000 }, //Pillar reflection top
	{ { 0, 1, 0 }, 395.6269f, 0, 0, &object_000BCC28_2, 0, 0xA0040001 }, //floor  transparent
	{ { 0, 65.25f, 0 }, 171.0811f, 0, 0, &object_000AFA9C_2, 0, 0xC0040001 }, //Middle thing transparent
	{ { 0, -0.25f, 0 }, 381.8376f, 0, 0, &object_000C7BE4, 0, 0xA0000002 }, //Water bottom
	{ { 0, 45, 0 }, 204.3916f, 0, 0, &object_000C6F40, 0, 0xC0000002 }, //Water middle
	{ { 0, 87.5f, 0 }, 125.0876f, 0, 0, &object_000C71B4, 0, 0xC0000002 }, //Water top
	{ { 0.000007729999f, 22.75f, -0.0000207f }, 247.2982f, 0, 0, &object_000C780C, 0, 0xC0000002 }, //Waterfall
	{ { -0.0005249f, 57.9475f, -0.0004909f }, 200.0426f, 0, 0, &object_000C5FE0, 0, 0x80000000 }, //Leaves
};

extern "C" __declspec(dllexport) LandTable landtable_000002C0 = { LengthOfArray<int16_t>(collist_000976C0), 0, 8, 0, collist_000976C0, NULL, "PAST02", &texlist_past02, 0, 0 };

#pragma warning(pop)