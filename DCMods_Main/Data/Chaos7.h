#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00022BA0[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00022BB4[] = {
	6, 18, 17, 5, 4, 2, 1,
	0x8000u | 5, 6, 1, 9, 2, 10,
	9, 17, 15, 4, 3, 1, 0, 6, 8, 7,
	6, 15, 16, 3, 13, 0, 8,
	8, 20, 19, 22, 14, 23, 12, 21, 11,
	8, 10, 11, 2, 12, 5, 14, 18, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00022C14[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_00022BB4, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00022C2C[] = {
	{ -214, 0, -100.0001f },
	{ -133, 0, 30.9999f },
	{ -6.999999f, 0, 107.9999f },
	{ -214, 100, -100.0001f },
	{ -133, 100, 30.9999f },
	{ -6.999999f, 100, 107.9999f },
	{ -214, -100, -100.0001f },
	{ -200, -100, -200.0001f },
	{ -200, 0, -200.0001f },
	{ -133, -100, 30.9999f },
	{ -6.999999f, -100, 107.9999f },
	{ 100, -100, 199.9999f },
	{ 100, 0, 199.9999f },
	{ -200, 100, -200.0001f },
	{ 100, 100, 199.9999f },
	{ -214, 200, -100.0001f },
	{ -200, 200, -200.0001f },
	{ -133, 200, 30.9999f },
	{ -6.999999f, 200, 107.9999f },
	{ 100, 200, 199.9999f },
	{ 200.0001f, 200, 299.9999f },
	{ 200, -100, 299.9999f },
	{ 200.0001f, 100, 299.9999f },
	{ 200.0001f, 0, 299.9999f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00022D4C[] = {
	{ -0.978581f, 0, 0.20586f },
	{ -0.705254f, 0, 0.708954f },
	{ -0.588625f, 0, 0.808406f },
	{ -0.978581f, 0, 0.20586f },
	{ -0.705254f, 0, 0.708954f },
	{ -0.588625f, 0, 0.808406f },
	{ -0.978581f, 0, 0.20586f },
	{ -0.990342f, 0, -0.138648f },
	{ -0.990342f, 0, -0.138648f },
	{ -0.705254f, 0, 0.708954f },
	{ -0.588625f, 0, 0.808406f },
	{ -0.6800129f, 0, 0.7332f },
	{ -0.6800129f, 0, 0.7332f },
	{ -0.990342f, 0, -0.138648f },
	{ -0.6800129f, 0, 0.7332f },
	{ -0.978581f, 0, 0.20586f },
	{ -0.990342f, 0, -0.138648f },
	{ -0.705254f, 0, 0.708954f },
	{ -0.588625f, 0, 0.808406f },
	{ -0.6800129f, 0, 0.7332f },
	{ -0.707106f, 0, 0.7071069f },
	{ -0.707106f, 0, 0.7071069f },
	{ -0.707106f, 0, 0.7071069f },
	{ -0.707106f, 0, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00022E6C = { vertex_00022C2C, normal_00022D4C, LengthOfArray<Sint32>(vertex_00022C2C), meshlist_00022C14, matlist_00022BA0, LengthOfArray<Uint16>(meshlist_00022C14), LengthOfArray<Uint16>(matlist_00022BA0), { -6.999939f, 50, 49.9999f }, 324.575f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00022E94 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00022E6C, 3989.998f, 0, -300, 0, 0xFFFFC001, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00022EC8[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00022EDC[] = {
	0x8000u | 5, 4, 1, 5, 7, 6,
	6, 1, 7, 3, 8, 10, 11,
	7, 10, 9, 3, 2, 1, 0, 4
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00022F08[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00022EDC, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00022F20[] = {
	{ 39.00052f, 0, 89.99929f },
	{ 29.00053f, 0, -0.000661f },
	{ 39.00052f, 100, 89.99929f },
	{ 29.00053f, 100, -0.000661f },
	{ 39.00052f, -100, 89.99929f },
	{ 29.00053f, -100, -0.000661f },
	{ 26.00053f, -100, -100.0007f },
	{ 26.00053f, 0, -100.0007f },
	{ 26.00053f, 100, -100.0007f },
	{ 39.00052f, 200, 89.99929f },
	{ 29.00053f, 200, -0.000661f },
	{ 26.00053f, 200, -100.0007f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00022FB0[] = {
	{ 0.993884f, 0, -0.110432f },
	{ 0.997528f, 0, -0.07026599f },
	{ 0.993884f, 0, -0.110432f },
	{ 0.997528f, 0, -0.07026599f },
	{ 0.993884f, 0, -0.110432f },
	{ 0.997528f, 0, -0.07026599f },
	{ 0.99955f, 0, -0.029986f },
	{ 0.99955f, 0, -0.029986f },
	{ 0.99955f, 0, -0.029986f },
	{ 0.993884f, 0, -0.110432f },
	{ 0.997528f, 0, -0.07026599f },
	{ 0.99955f, 0, -0.029986f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00023040 = { vertex_00022F20, normal_00022FB0, LengthOfArray<Sint32>(vertex_00022F20), meshlist_00022F08, matlist_00022EC8, LengthOfArray<Uint16>(meshlist_00022F08), LengthOfArray<Uint16>(matlist_00022EC8), { 32.50052f, 50, -5.00071f }, 150.1407f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00023068 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00023040, 3200, 0, 299.9999f, 0, 0x3FFF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002309C[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000230B0[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000230F8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000230B0, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00023110[] = {
	{ 0, 0, 125 },
	{ 0 },
	{ 0, 0, -125 },
	{ 0, 100, 125 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, -100, 125 },
	{ 16, -100, 236 },
	{ 16, 0, 236 },
	{ 0, -100, 0 },
	{ 0, -100, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 16, 100, 236 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 16, 200, 236 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00023200[] = {
	{ 0.997439f, 0, -0.071518f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.997439f, 0, -0.071518f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.997439f, 0, -0.071518f },
	{ 0.98977f, 0, -0.14267f },
	{ 0.98977f, 0, -0.14267f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.98977f, 0, -0.14267f },
	{ 1, 0, 0 },
	{ 0.997439f, 0, -0.071518f },
	{ 0.98977f, 0, -0.14267f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000232F0 = { vertex_00023110, normal_00023200, LengthOfArray<Sint32>(vertex_00023110), meshlist_000230F8, matlist_0002309C, LengthOfArray<Uint16>(meshlist_000230F8), LengthOfArray<Uint16>(matlist_0002309C), { 8, 50, -7 }, 285.5678f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00023318 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000232F0, -300, 0, 50, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002334C[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00023360[] = {
	0x8000u | 8, 0, 3, 1, 4, 2, 5, 12, 14,
	8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 8, 3, 15, 4, 17, 5, 18, 14, 19,
	8, 15, 16, 3, 13, 0, 8, 6, 7
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000233A8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00023360, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000233C0[] = {
	{ 15.00001f, 0, 125.0001f },
	{ 5.00001f, 0, 0.000094f },
	{ 0.00001f, 0, -124.9999f },
	{ 15.00001f, 100, 125.0001f },
	{ 5.00001f, 100, 0.000094f },
	{ 0.00001f, 100, -124.9999f },
	{ 15.00001f, -100, 125.0001f },
	{ 26.00001f, -100, 250.0001f },
	{ 26.00001f, 0, 250.0001f },
	{ 5.00001f, -100, 0.000094f },
	{ 0.00001f, -100, -124.9999f },
	{ 0.00001f, -100, -249.9999f },
	{ 0.00001f, 0, -249.9999f },
	{ 26.00001f, 100, 250.0001f },
	{ 0.00001f, 100, -249.9999f },
	{ 15.00001f, 200, 125.0001f },
	{ 26.00001f, 200, 250.0001f },
	{ 5.00001f, 200, 0.000094f },
	{ 0.00001f, 200, -124.9999f },
	{ 0.00001f, 200, -249.9999f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000234B0[] = {
	{ 0.996491f, 0, -0.08370399f },
	{ 0.998206f, 0, -0.059869f },
	{ 0.9998f, 0, -0.019988f },
	{ 0.996491f, 0, -0.08370399f },
	{ 0.998206f, 0, -0.059869f },
	{ 0.9998f, 0, -0.019988f },
	{ 0.996491f, 0, -0.08370399f },
	{ 0.99615f, 0, -0.087661f },
	{ 0.99615f, 0, -0.087661f },
	{ 0.998206f, 0, -0.059869f },
	{ 0.9998f, 0, -0.019988f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.99615f, 0, -0.087661f },
	{ 1, 0, 0 },
	{ 0.996491f, 0, -0.08370399f },
	{ 0.99615f, 0, -0.087661f },
	{ 0.998206f, 0, -0.059869f },
	{ 0.9998f, 0, -0.019988f },
	{ 1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000235A0 = { vertex_000233C0, normal_000234B0, LengthOfArray<Sint32>(vertex_000233C0), meshlist_000233A8, matlist_0002334C, LengthOfArray<Uint16>(meshlist_000233A8), LengthOfArray<Uint16>(matlist_0002334C), { 13.00001f, 50, 0.00009199999f }, 250.3378f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000235C8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000235A0, 2850, 0, 299.9998f, 0, 0x3FFF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000235FC[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00023610[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00023658[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00023610, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00023670[] = {
	{ 0.000005f, 0, 125.0001f },
	{ 0.000005f, 0, 0.000094f },
	{ 0.000005f, 0, -124.9999f },
	{ 0.000005f, 100, 125.0001f },
	{ 0.000005f, 100, 0.000094f },
	{ 0.000005f, 100, -124.9999f },
	{ 0.000005f, -100, 125.0001f },
	{ 0.000005f, -100, 250.0001f },
	{ 0.000005f, 0, 250.0001f },
	{ 0.000005f, -100, 0.000094f },
	{ 0.000005f, -100, -124.9999f },
	{ 0.000005f, -100, -249.9999f },
	{ 0.000005f, 0, -249.9999f },
	{ 0.000005f, 100, 250.0001f },
	{ 0.000005f, 100, -249.9999f },
	{ 0.000005f, 200, 125.0001f },
	{ 0.000005f, 200, 250.0001f },
	{ 0.000005f, 200, 0.000094f },
	{ 0.000005f, 200, -124.9999f },
	{ 0.000005f, 200, -249.9999f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00023760[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00023850 = { vertex_00023670, normal_00023760, LengthOfArray<Sint32>(vertex_00023670), meshlist_00023658, matlist_000235FC, LengthOfArray<Uint16>(meshlist_00023658), LengthOfArray<Uint16>(matlist_000235FC), { 0.000005f, 50, 0.00009199999f }, 250, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00023878 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00023850, 2350, 0, 299.9998f, 0, 0x3FFF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000238AC[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000238C0[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00023908[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000238C0, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00023920[] = {
	{ 0.000001f, 0, 125 },
	{ 0.000001f, 0, -0.00028f },
	{ 0.000001f, 0, -125 },
	{ 0.000001f, 100, 125 },
	{ 0.000001f, 100, -0.00028f },
	{ 0.000001f, 100, -125 },
	{ 0.000001f, -100, 125 },
	{ 0.000001f, -100, 250 },
	{ 0.000001f, 0, 250 },
	{ 0.000001f, -100, -0.00028f },
	{ 0.000001f, -100, -125 },
	{ 0.000001f, -100, -250 },
	{ 0.000001f, 0, -250 },
	{ 0.000001f, 100, 250 },
	{ 0.000001f, 100, -250 },
	{ 0.000001f, 200, 125 },
	{ 0.000001f, 200, 250 },
	{ 0.000001f, 200, -0.00028f },
	{ 0.000001f, 200, -125 },
	{ 0.000001f, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00023A10[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00023B00 = { vertex_00023920, normal_00023A10, LengthOfArray<Sint32>(vertex_00023920), meshlist_00023908, matlist_000238AC, LengthOfArray<Uint16>(meshlist_00023908), LengthOfArray<Uint16>(matlist_000238AC), { 0.000001f, 50, -0.00031f }, 250, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00023B28 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00023B00, 1850, 0, 299.9999f, 0, 0x3FFF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00023B5C[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00023B70[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00023BB8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00023B70, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00023BD0[] = {
	{ -0.00003f, 0, 125 },
	{ -0.00003f, 0, -0.00028f },
	{ -0.00003f, 0, -125 },
	{ -0.00003f, 100, 125 },
	{ -0.00003f, 100, -0.00028f },
	{ -0.00003f, 100, -125 },
	{ -0.00003f, -100, 125 },
	{ -0.00003f, -100, 250 },
	{ -0.00003f, 0, 250 },
	{ -0.00003f, -100, -0.00028f },
	{ -0.00003f, -100, -125 },
	{ -0.00003f, -100, -250 },
	{ -0.00003f, 0, -250 },
	{ -0.00003f, 100, 250 },
	{ -0.00003f, 100, -250 },
	{ -0.00003f, 200, 125 },
	{ -0.00003f, 200, 250 },
	{ -0.00003f, 200, -0.00028f },
	{ -0.00003f, 200, -125 },
	{ -0.00003f, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00023CC0[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00023DB0 = { vertex_00023BD0, normal_00023CC0, LengthOfArray<Sint32>(vertex_00023BD0), meshlist_00023BB8, matlist_00023B5C, LengthOfArray<Uint16>(meshlist_00023BB8), LengthOfArray<Uint16>(matlist_00023B5C), { -0.00003f, 50, -0.00031f }, 250, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00023DD8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00023DB0, 1350, 0, 299.9999f, 0, 0x3FFF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00023E0C[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00023E20[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00023E68[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00023E20, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00023E80[] = {
	{ -0.00008f, 0, 125 },
	{ -0.00008f, 0, -0.00028f },
	{ -0.00008f, 0, -125 },
	{ -0.00008f, 100, 125 },
	{ -0.00008f, 100, -0.00028f },
	{ -0.00008f, 100, -125 },
	{ -0.00008f, -100, 125 },
	{ -0.00008f, -100, 250 },
	{ -0.00008f, 0, 250 },
	{ -0.00008f, -100, -0.00028f },
	{ -0.00008f, -100, -125 },
	{ -0.00008f, -100, -250 },
	{ -0.00008f, 0, -250 },
	{ -0.00008f, 100, 250 },
	{ -0.00008f, 100, -250 },
	{ -0.00008f, 200, 125 },
	{ -0.00008f, 200, 250 },
	{ -0.00008f, 200, -0.00028f },
	{ -0.00008f, 200, -125 },
	{ -0.00008f, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00023F70[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00024060 = { vertex_00023E80, normal_00023F70, LengthOfArray<Sint32>(vertex_00023E80), meshlist_00023E68, matlist_00023E0C, LengthOfArray<Uint16>(meshlist_00023E68), LengthOfArray<Uint16>(matlist_00023E0C), { -0.00008f, 50, -0.00031f }, 250, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00024088 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00024060, 849.9995f, 0, 299.9999f, 0, 0x3FFF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000240BC[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000240D0[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00024118[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000240D0, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00024130[] = {
	{ -0.00012f, 0, 125 },
	{ -0.00012f, 0, 0.000003f },
	{ -0.00012f, 0, -125 },
	{ -0.00012f, 100, 125 },
	{ -0.00012f, 100, 0.000003f },
	{ -0.00012f, 100, -125 },
	{ -0.00012f, -100, 125 },
	{ -0.00012f, -100, 250 },
	{ -0.00012f, 0, 250 },
	{ -0.00012f, -100, 0.000003f },
	{ -0.00012f, -100, -125 },
	{ -0.00012f, -100, -250 },
	{ -0.00012f, 0, -250 },
	{ -0.00012f, 100, 250 },
	{ -0.00012f, 100, -250 },
	{ -0.00012f, 200, 125 },
	{ -0.00012f, 200, 250 },
	{ -0.00012f, 200, 0.000003f },
	{ -0.00012f, 200, -125 },
	{ -0.00012f, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00024220[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00024310 = { vertex_00024130, normal_00024220, LengthOfArray<Sint32>(vertex_00024130), meshlist_00024118, matlist_000240BC, LengthOfArray<Uint16>(meshlist_00024118), LengthOfArray<Uint16>(matlist_000240BC), { -0.00012f, 50, 0 }, 250, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00024338 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00024310, 349.9995f, 0, 299.9999f, 0, 0x3FFF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002436C[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00024380[] = {
	3, 10, 2, 9,
	8, 6, 9, 1, 2, 4, 5, 14, 15,
	6, 12, 13, 3, 11, 0, 8,
	9, 14, 12, 4, 3, 1, 0, 6, 8, 7
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000243BC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00024380, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000243D4[] = {
	{ -0.00012f, 0, 125 },
	{ -0.00012f, 0, 0.000003f },
	{ 13.99988f, 0, -134 },
	{ -0.00012f, 100, 125 },
	{ -0.00012f, 100, 0.000003f },
	{ 13.99988f, 100, -134 },
	{ -0.00012f, -100, 125 },
	{ -0.00012f, -100, 250 },
	{ -0.00012f, 0, 250 },
	{ -0.00012f, -100, 0.000003f },
	{ 13.99988f, -100, -134 },
	{ -0.00012f, 100, 250 },
	{ -0.00012f, 200, 125 },
	{ -0.00012f, 200, 250 },
	{ -0.00012f, 200, 0.000003f },
	{ 13.99988f, 200, -134 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00024494[] = {
	{ 1, 0, 0 },
	{ 0.998646f, 0, 0.052026f },
	{ 0.9945869f, 0, 0.103911f },
	{ 1, 0, 0 },
	{ 0.998646f, 0, 0.052026f },
	{ 0.9945869f, 0, 0.103911f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.998646f, 0, 0.052026f },
	{ 0.9945869f, 0, 0.103911f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.998646f, 0, 0.052026f },
	{ 0.9945869f, 0, 0.103911f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00024554 = { vertex_000243D4, normal_00024494, LengthOfArray<Sint32>(vertex_000243D4), meshlist_000243BC, matlist_0002436C, LengthOfArray<Uint16>(meshlist_000243BC), LengthOfArray<Uint16>(matlist_0002436C), { 6.999933f, 50, 58 }, 192.1275f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002457C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00024554, -150, 0, 299.9999f, 0, 0x3FFF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000245B0[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000245C4[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002460C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000245C4, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00024624[] = {
	{ 0, 0, 125 },
	{ 0 },
	{ 0, 0, -125 },
	{ 0, 100, 125 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0, -100, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 250 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00024714[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00024804 = { vertex_00024624, normal_00024714, LengthOfArray<Sint32>(vertex_00024624), meshlist_0002460C, matlist_000245B0, LengthOfArray<Uint16>(meshlist_0002460C), LengthOfArray<Uint16>(matlist_000245B0), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002482C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00024804, -300, 0, -2450, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00024860[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00024874[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000248BC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00024874, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000248D4[] = {
	{ 0, 0, 125 },
	{ 0 },
	{ 0, 0, -125 },
	{ 0, 100, 125 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0, -100, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 250 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000249C4[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00024AB4 = { vertex_000248D4, normal_000249C4, LengthOfArray<Sint32>(vertex_000248D4), meshlist_000248BC, matlist_00024860, LengthOfArray<Uint16>(meshlist_000248BC), LengthOfArray<Uint16>(matlist_00024860), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00024ADC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00024AB4, -300, 0, -2950, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00024B10[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00024B24[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00024B6C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00024B24, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00024B84[] = {
	{ 0, 0, 125 },
	{ 0 },
	{ 0, 0, -125 },
	{ 0, 100, 125 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0, -100, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 250 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00024C74[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00024D64 = { vertex_00024B84, normal_00024C74, LengthOfArray<Sint32>(vertex_00024B84), meshlist_00024B6C, matlist_00024B10, LengthOfArray<Uint16>(meshlist_00024B6C), LengthOfArray<Uint16>(matlist_00024B10), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00024D8C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00024D64, -300, 0, -3450, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00024DC0[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00024DD4[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00024E1C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00024DD4, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00024E34[] = {
	{ 0, 0, 125 },
	{ 0 },
	{ 0, 0, -125 },
	{ 0, 100, 125 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0, -100, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 250 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00024F24[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00025014 = { vertex_00024E34, normal_00024F24, LengthOfArray<Sint32>(vertex_00024E34), meshlist_00024E1C, matlist_00024DC0, LengthOfArray<Uint16>(meshlist_00024E1C), LengthOfArray<Uint16>(matlist_00024DC0), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002503C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00025014, -300, 0, -3950, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00025070[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00025084[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000250CC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00025084, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000250E4[] = {
	{ 0, 0, 125 },
	{ 0 },
	{ 0, 0, -125 },
	{ 0, 100, 125 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0, -100, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 250 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000251D4[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000252C4 = { vertex_000250E4, normal_000251D4, LengthOfArray<Sint32>(vertex_000250E4), meshlist_000250CC, matlist_00025070, LengthOfArray<Uint16>(meshlist_000250CC), LengthOfArray<Uint16>(matlist_00025070), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000252EC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000252C4, -300, 0, -4450, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00025320[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00025334[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002537C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00025334, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00025394[] = {
	{ 0, 0, 125 },
	{ 0 },
	{ 0, 0, -125 },
	{ 0, 100, 125 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0, -100, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 250 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00025484[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00025574 = { vertex_00025394, normal_00025484, LengthOfArray<Sint32>(vertex_00025394), meshlist_0002537C, matlist_00025320, LengthOfArray<Uint16>(meshlist_0002537C), LengthOfArray<Uint16>(matlist_00025320), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002559C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00025574, -300, 0, -450, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000255D0[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000255E4[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002562C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000255E4, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00025644[] = {
	{ 0, 0, 125 },
	{ 0 },
	{ 0, 0, -125 },
	{ 0, 100, 125 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0, -100, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 250 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00025734[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00025824 = { vertex_00025644, normal_00025734, LengthOfArray<Sint32>(vertex_00025644), meshlist_0002562C, matlist_000255D0, LengthOfArray<Uint16>(meshlist_0002562C), LengthOfArray<Uint16>(matlist_000255D0), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002584C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00025824, -300, 0, -4950, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00025880[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00025894[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000258DC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00025894, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000258F4[] = {
	{ 0, 0, 125 },
	{ 0 },
	{ 0, 0, -125 },
	{ 0, 100, 125 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0, -100, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 250 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000259E4[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00025AD4 = { vertex_000258F4, normal_000259E4, LengthOfArray<Sint32>(vertex_000258F4), meshlist_000258DC, matlist_00025880, LengthOfArray<Uint16>(meshlist_000258DC), LengthOfArray<Uint16>(matlist_00025880), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00025AFC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00025AD4, -300, 0, -5450, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00025B30[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00025B44[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00025B8C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00025B44, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00025BA4[] = {
	{ 0, 0, 125 },
	{ 0 },
	{ 0, 0, -125 },
	{ 0, 100, 125 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0, -100, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 250 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00025C94[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00025D84 = { vertex_00025BA4, normal_00025C94, LengthOfArray<Sint32>(vertex_00025BA4), meshlist_00025B8C, matlist_00025B30, LengthOfArray<Uint16>(meshlist_00025B8C), LengthOfArray<Uint16>(matlist_00025B30), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00025DAC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00025D84, -300, 0, -5950, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00025DE0[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00025DF4[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00025E3C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00025DF4, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00025E54[] = {
	{ 0, 0, 125 },
	{ 0 },
	{ 0, 0, -125 },
	{ 0, 100, 125 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0, -100, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 250 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00025F44[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00026034 = { vertex_00025E54, normal_00025F44, LengthOfArray<Sint32>(vertex_00025E54), meshlist_00025E3C, matlist_00025DE0, LengthOfArray<Uint16>(meshlist_00025E3C), LengthOfArray<Uint16>(matlist_00025DE0), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002605C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00026034, -300, 0, -6450, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00026090[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000260A4[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000260EC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000260A4, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00026104[] = {
	{ 0, 0, 125 },
	{ 0 },
	{ 0, 0, -125 },
	{ 0, 100, 125 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0, -100, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 250 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000261F4[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000262E4 = { vertex_00026104, normal_000261F4, LengthOfArray<Sint32>(vertex_00026104), meshlist_000260EC, matlist_00026090, LengthOfArray<Uint16>(meshlist_000260EC), LengthOfArray<Uint16>(matlist_00026090), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002630C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000262E4, -300, 0, -6950, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00026340[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00026354[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002639C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00026354, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000263B4[] = {
	{ 0, 0, 125 },
	{ 0 },
	{ 0, 0, -125 },
	{ 0, 100, 125 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0, -100, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 250 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000264A4[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00026594 = { vertex_000263B4, normal_000264A4, LengthOfArray<Sint32>(vertex_000263B4), meshlist_0002639C, matlist_00026340, LengthOfArray<Uint16>(meshlist_0002639C), LengthOfArray<Uint16>(matlist_00026340), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000265BC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00026594, -300, 0, -7450, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000265F0[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00026604[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002664C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00026604, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00026664[] = {
	{ 0, 0, 125 },
	{ 0 },
	{ 0, 0, -125 },
	{ 0, 100, 125 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0, -100, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 250 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00026754[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00026844 = { vertex_00026664, normal_00026754, LengthOfArray<Sint32>(vertex_00026664), meshlist_0002664C, matlist_000265F0, LengthOfArray<Uint16>(meshlist_0002664C), LengthOfArray<Uint16>(matlist_000265F0), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002686C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00026844, -300, 0, -7950, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000268A0[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000268B4[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000268FC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000268B4, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00026914[] = {
	{ 0, 0, 125 },
	{ 0 },
	{ 0, 0, -125 },
	{ 0, 100, 125 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0, -100, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 250 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00026A04[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00026AF4 = { vertex_00026914, normal_00026A04, LengthOfArray<Sint32>(vertex_00026914), meshlist_000268FC, matlist_000268A0, LengthOfArray<Uint16>(meshlist_000268FC), LengthOfArray<Uint16>(matlist_000268A0), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00026B1C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00026AF4, -300, 0, -8450, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00026B50[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00026B64[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00026BAC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00026B64, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00026BC4[] = {
	{ 0, 0, 125 },
	{ 0 },
	{ 0, 0, -125 },
	{ 0, 100, 125 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0, -100, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 250 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00026CB4[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00026DA4 = { vertex_00026BC4, normal_00026CB4, LengthOfArray<Sint32>(vertex_00026BC4), meshlist_00026BAC, matlist_00026B50, LengthOfArray<Uint16>(meshlist_00026BAC), LengthOfArray<Uint16>(matlist_00026B50), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00026DCC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00026DA4, -300, 0, -8950, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00026E00[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00026E14[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00026E5C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00026E14, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00026E74[] = {
	{ 0, 0, 125 },
	{ 0 },
	{ 0, 0, -125 },
	{ 0, 100, 125 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0, -100, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 250 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00026F64[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00027054 = { vertex_00026E74, normal_00026F64, LengthOfArray<Sint32>(vertex_00026E74), meshlist_00026E5C, matlist_00026E00, LengthOfArray<Uint16>(meshlist_00026E5C), LengthOfArray<Uint16>(matlist_00026E00), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002707C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00027054, -300, 0, -950, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000270B0[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000270C4[] = {
	3, 8, 7, 6,
	9, 13, 0, 3, 1, 4, 2, 5, 12, 14,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002710C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000270C4, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00027124[] = {
	{ 11.00002f, 0, 125 },
	{ -1.999977f, 0, 0.000001f },
	{ -11.99998f, 0, -125 },
	{ 11.00002f, 100, 125 },
	{ -1.999977f, 100, 0.000001f },
	{ -11.99998f, 100, -125 },
	{ 11.00002f, -100, 125 },
	{ 26.00002f, -100, 250 },
	{ 26.00002f, 0, 250 },
	{ -1.999977f, -100, 0.000001f },
	{ -11.99998f, -100, -125 },
	{ 8.000024f, -100, -250 },
	{ 8.000024f, 0, -250 },
	{ 26.00002f, 100, 250 },
	{ 8.000024f, 100, -250 },
	{ 11.00002f, 200, 125 },
	{ 26.00002f, 200, 250 },
	{ -1.999977f, 200, 0.000001f },
	{ -11.99998f, 200, -125 },
	{ 8.000024f, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00027214[] = {
	{ 0.993787f, 0, -0.111297f },
	{ 0.995796f, 0, -0.09159999f },
	{ 0.999223f, 0, 0.039402f },
	{ 0.993787f, 0, -0.111297f },
	{ 0.995796f, 0, -0.09159999f },
	{ 0.999223f, 0, 0.039402f },
	{ 0.993787f, 0, -0.111297f },
	{ 0.9928769f, 0, -0.119145f },
	{ 0.9928769f, 0, -0.119145f },
	{ 0.995796f, 0, -0.09159999f },
	{ 0.999223f, 0, 0.039402f },
	{ 0.9874409f, 0, 0.157991f },
	{ 0.9874409f, 0, 0.157991f },
	{ 0.9928769f, 0, -0.119145f },
	{ 0.9874409f, 0, 0.157991f },
	{ 0.993787f, 0, -0.111297f },
	{ 0.9928769f, 0, -0.119145f },
	{ 0.995796f, 0, -0.09159999f },
	{ 0.999223f, 0, 0.039402f },
	{ 0.9874409f, 0, 0.157991f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00027304 = { vertex_00027124, normal_00027214, LengthOfArray<Sint32>(vertex_00027124), meshlist_0002710C, matlist_000270B0, LengthOfArray<Uint16>(meshlist_0002710C), LengthOfArray<Uint16>(matlist_000270B0), { 7.000023f, 50, 0 }, 250.721f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002732C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00027304, 75, 0, -9500, 0, 0xFFFFC001, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00027360[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00027374[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000273BC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00027374, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000273D4[] = {
	{ 0.000214f, 0, 125.0002f },
	{ 0.000214f, 0, 0.000197f },
	{ 0.000214f, 0, -124.9998f },
	{ 0.000214f, 100, 125.0002f },
	{ 0.000214f, 100, 0.000197f },
	{ 0.000214f, 100, -124.9998f },
	{ 0.000214f, -100, 125.0002f },
	{ 0.000214f, -100, 250.0002f },
	{ 0.000214f, 0, 250.0002f },
	{ 0.000214f, -100, 0.000197f },
	{ 0.000214f, -100, -124.9998f },
	{ 0.000214f, -100, -249.9998f },
	{ 0.000214f, 0, -249.9998f },
	{ 0.000214f, 100, 250.0002f },
	{ 0.000214f, 100, -249.9998f },
	{ 0.000214f, 200, 125.0002f },
	{ 0.000214f, 200, 250.0002f },
	{ 0.000214f, 200, 0.000197f },
	{ 0.000214f, 200, -124.9998f },
	{ 0.000214f, 200, -249.9998f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000274C4[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000275B4 = { vertex_000273D4, normal_000274C4, LengthOfArray<Sint32>(vertex_000273D4), meshlist_000273BC, matlist_00027360, LengthOfArray<Uint16>(meshlist_000273BC), LengthOfArray<Uint16>(matlist_00027360), { 0.000214f, 50, 0.000198f }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000275DC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000275B4, 5099.999f, 0, -6650, 0, 0xFFFF8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00027610[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00027624[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002766C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00027624, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00027684[] = {
	{ 0, 0, 125 },
	{ 0 },
	{ 0, 0, -125 },
	{ 0, 100, 125 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0, -100, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 250 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00027774[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00027864 = { vertex_00027684, normal_00027774, LengthOfArray<Sint32>(vertex_00027684), meshlist_0002766C, matlist_00027610, LengthOfArray<Uint16>(meshlist_0002766C), LengthOfArray<Uint16>(matlist_00027610), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002788C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00027864, -300, 0, -1450, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000278C0[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000278D4[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002791C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000278D4, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00027934[] = {
	{ 0.000051f, 0, 125.0002f },
	{ 0.000051f, 0, 0.000197f },
	{ 0.000051f, 0, -124.9998f },
	{ 0.000051f, 100, 125.0002f },
	{ 0.000051f, 100, 0.000197f },
	{ 0.000051f, 100, -124.9998f },
	{ 0.000051f, -100, 125.0002f },
	{ 0.000051f, -100, 250.0002f },
	{ 0.000051f, 0, 250.0002f },
	{ 0.000051f, -100, 0.000197f },
	{ 0.000051f, -100, -124.9998f },
	{ 0.000051f, -100, -249.9998f },
	{ 0.000051f, 0, -249.9998f },
	{ 0.000051f, 100, 250.0002f },
	{ 0.000051f, 100, -249.9998f },
	{ 0.000051f, 200, 125.0002f },
	{ 0.000051f, 200, 250.0002f },
	{ 0.000051f, 200, 0.000197f },
	{ 0.000051f, 200, -124.9998f },
	{ 0.000051f, 200, -249.9998f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00027A24[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00027B14 = { vertex_00027934, normal_00027A24, LengthOfArray<Sint32>(vertex_00027934), meshlist_0002791C, matlist_000278C0, LengthOfArray<Uint16>(meshlist_0002791C), LengthOfArray<Uint16>(matlist_000278C0), { 0.000051f, 50, 0.000198f }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00027B3C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00027B14, 5099.999f, 0, -6150, 0, 0xFFFF8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00027B70[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00027B84[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00027BCC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00027B84, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00027BE4[] = {
	{ -0.000112f, 0, 125.0002f },
	{ -0.000112f, 0, 0.000197f },
	{ -0.000112f, 0, -124.9998f },
	{ -0.000112f, 100, 125.0002f },
	{ -0.000112f, 100, 0.000197f },
	{ -0.000112f, 100, -124.9998f },
	{ -0.000112f, -100, 125.0002f },
	{ -0.000112f, -100, 250.0002f },
	{ -0.000112f, 0, 250.0002f },
	{ -0.000112f, -100, 0.000197f },
	{ -0.000112f, -100, -124.9998f },
	{ -0.000112f, -100, -249.9998f },
	{ -0.000112f, 0, -249.9998f },
	{ -0.000112f, 100, 250.0002f },
	{ -0.000112f, 100, -249.9998f },
	{ -0.000112f, 200, 125.0002f },
	{ -0.000112f, 200, 250.0002f },
	{ -0.000112f, 200, 0.000197f },
	{ -0.000112f, 200, -124.9998f },
	{ -0.000112f, 200, -249.9998f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00027CD4[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00027DC4 = { vertex_00027BE4, normal_00027CD4, LengthOfArray<Sint32>(vertex_00027BE4), meshlist_00027BCC, matlist_00027B70, LengthOfArray<Uint16>(meshlist_00027BCC), LengthOfArray<Uint16>(matlist_00027B70), { -0.000112f, 50, 0.000198f }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00027DEC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00027DC4, 5099.999f, 0, -5650, 0, 0xFFFF8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00027E20[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00027E34[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00027E7C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00027E34, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00027E94[] = {
	{ 0.000213f, 0, 125.0002f },
	{ 0.000213f, 0, 0.000197f },
	{ 0.000213f, 0, -124.9998f },
	{ 0.000213f, 100, 125.0002f },
	{ 0.000213f, 100, 0.000197f },
	{ 0.000213f, 100, -124.9998f },
	{ 0.000213f, -100, 125.0002f },
	{ 0.000213f, -100, 250.0002f },
	{ 0.000213f, 0, 250.0002f },
	{ 0.000213f, -100, 0.000197f },
	{ 0.000213f, -100, -124.9998f },
	{ 0.000213f, -100, -249.9998f },
	{ 0.000213f, 0, -249.9998f },
	{ 0.000213f, 100, 250.0002f },
	{ 0.000213f, 100, -249.9998f },
	{ 0.000213f, 200, 125.0002f },
	{ 0.000213f, 200, 250.0002f },
	{ 0.000213f, 200, 0.000197f },
	{ 0.000213f, 200, -124.9998f },
	{ 0.000213f, 200, -249.9998f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00027F84[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00028074 = { vertex_00027E94, normal_00027F84, LengthOfArray<Sint32>(vertex_00027E94), meshlist_00027E7C, matlist_00027E20, LengthOfArray<Uint16>(meshlist_00027E7C), LengthOfArray<Uint16>(matlist_00027E20), { 0.000213f, 50, 0.000198f }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002809C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00028074, 5099.999f, 0, -5150, 0, 0xFFFF8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000280D0[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000280E4[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002812C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000280E4, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00028144[] = {
	{ 0.00005f, 0, 125.0002f },
	{ 0.00005f, 0, 0.000197f },
	{ 0.00005f, 0, -124.9998f },
	{ 0.00005f, 100, 125.0002f },
	{ 0.00005f, 100, 0.000197f },
	{ 0.00005f, 100, -124.9998f },
	{ 0.00005f, -100, 125.0002f },
	{ 0.00005f, -100, 250.0002f },
	{ 0.00005f, 0, 250.0002f },
	{ 0.00005f, -100, 0.000197f },
	{ 0.00005f, -100, -124.9998f },
	{ 0.00005f, -100, -249.9998f },
	{ 0.00005f, 0, -249.9998f },
	{ 0.00005f, 100, 250.0002f },
	{ 0.00005f, 100, -249.9998f },
	{ 0.00005f, 200, 125.0002f },
	{ 0.00005f, 200, 250.0002f },
	{ 0.00005f, 200, 0.000197f },
	{ 0.00005f, 200, -124.9998f },
	{ 0.00005f, 200, -249.9998f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00028234[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00028324 = { vertex_00028144, normal_00028234, LengthOfArray<Sint32>(vertex_00028144), meshlist_0002812C, matlist_000280D0, LengthOfArray<Uint16>(meshlist_0002812C), LengthOfArray<Uint16>(matlist_000280D0), { 0.00005f, 50, 0.000198f }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002834C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00028324, 5099.999f, 0, -4650, 0, 0xFFFF8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00028380[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00028394[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000283DC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00028394, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000283F4[] = {
	{ -0.000113f, 0, 125.0002f },
	{ -0.000113f, 0, 0.000197f },
	{ -0.000113f, 0, -124.9998f },
	{ -0.000113f, 100, 125.0002f },
	{ -0.000113f, 100, 0.000197f },
	{ -0.000113f, 100, -124.9998f },
	{ -0.000113f, -100, 125.0002f },
	{ -0.000113f, -100, 250.0002f },
	{ -0.000113f, 0, 250.0002f },
	{ -0.000113f, -100, 0.000197f },
	{ -0.000113f, -100, -124.9998f },
	{ -0.000113f, -100, -249.9998f },
	{ -0.000113f, 0, -249.9998f },
	{ -0.000113f, 100, 250.0002f },
	{ -0.000113f, 100, -249.9998f },
	{ -0.000113f, 200, 125.0002f },
	{ -0.000113f, 200, 250.0002f },
	{ -0.000113f, 200, 0.000197f },
	{ -0.000113f, 200, -124.9998f },
	{ -0.000113f, 200, -249.9998f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000284E4[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000285D4 = { vertex_000283F4, normal_000284E4, LengthOfArray<Sint32>(vertex_000283F4), meshlist_000283DC, matlist_00028380, LengthOfArray<Uint16>(meshlist_000283DC), LengthOfArray<Uint16>(matlist_00028380), { -0.000113f, 50, 0.000198f }, 291.5475f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000285FC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000285D4, 5099.999f, 0, -4150, 0, 0xFFFF8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00028630[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00028644[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002868C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00028644, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000286A4[] = {
	{ 0.000213f, 0, 124.9999f },
	{ 0.000213f, 0, -0.00047f },
	{ 0.000213f, 0, -125 },
	{ 0.000213f, 100, 124.9999f },
	{ 0.000213f, 100, -0.00047f },
	{ 0.000213f, 100, -125 },
	{ 0.000213f, -100, 124.9999f },
	{ 0.000213f, -100, 249.9999f },
	{ 0.000213f, 0, 249.9999f },
	{ 0.000213f, -100, -0.00047f },
	{ 0.000213f, -100, -125 },
	{ 0.000213f, -100, -250 },
	{ 0.000213f, 0, -250 },
	{ 0.000213f, 100, 249.9999f },
	{ 0.000213f, 100, -250 },
	{ 0.000213f, 200, 124.9999f },
	{ 0.000213f, 200, 249.9999f },
	{ 0.000213f, 200, -0.00047f },
	{ 0.000213f, 200, -125 },
	{ 0.000213f, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00028794[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00028884 = { vertex_000286A4, normal_00028794, LengthOfArray<Sint32>(vertex_000286A4), meshlist_0002868C, matlist_00028630, LengthOfArray<Uint16>(meshlist_0002868C), LengthOfArray<Uint16>(matlist_00028630), { 0.000213f, 50, -0.00046f }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000288AC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00028884, 5099.999f, 0, -3650, 0, 0xFFFF8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000288E0[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000288F4[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002893C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000288F4, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00028954[] = {
	{ 0.00005f, 0, 124.9999f },
	{ 0.00005f, 0, -0.00047f },
	{ 0.00005f, 0, -125 },
	{ 0.00005f, 100, 124.9999f },
	{ 0.00005f, 100, -0.00047f },
	{ 0.00005f, 100, -125 },
	{ 0.00005f, -100, 124.9999f },
	{ 0.00005f, -100, 249.9999f },
	{ 0.00005f, 0, 249.9999f },
	{ 0.00005f, -100, -0.00047f },
	{ 0.00005f, -100, -125 },
	{ 0.00005f, -100, -250 },
	{ 0.00005f, 0, -250 },
	{ 0.00005f, 100, 249.9999f },
	{ 0.00005f, 100, -250 },
	{ 0.00005f, 200, 124.9999f },
	{ 0.00005f, 200, 249.9999f },
	{ 0.00005f, 200, -0.00047f },
	{ 0.00005f, 200, -125 },
	{ 0.00005f, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00028A44[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00028B34 = { vertex_00028954, normal_00028A44, LengthOfArray<Sint32>(vertex_00028954), meshlist_0002893C, matlist_000288E0, LengthOfArray<Uint16>(meshlist_0002893C), LengthOfArray<Uint16>(matlist_000288E0), { 0.00005f, 50, -0.00046f }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00028B5C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00028B34, 5099.999f, 0, -3150, 0, 0xFFFF8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00028B90[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00028BA4[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00028BEC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00028BA4, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00028C04[] = {
	{ -0.000113f, 0, 124.9999f },
	{ -0.000113f, 0, -0.00047f },
	{ -0.000113f, 0, -125 },
	{ -0.000113f, 100, 124.9999f },
	{ -0.000113f, 100, -0.00047f },
	{ -0.000113f, 100, -125 },
	{ -0.000113f, -100, 124.9999f },
	{ -0.000113f, -100, 249.9999f },
	{ -0.000113f, 0, 249.9999f },
	{ -0.000113f, -100, -0.00047f },
	{ -0.000113f, -100, -125 },
	{ -0.000113f, -100, -250 },
	{ -0.000113f, 0, -250 },
	{ -0.000113f, 100, 249.9999f },
	{ -0.000113f, 100, -250 },
	{ -0.000113f, 200, 124.9999f },
	{ -0.000113f, 200, 249.9999f },
	{ -0.000113f, 200, -0.00047f },
	{ -0.000113f, 200, -125 },
	{ -0.000113f, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00028CF4[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00028DE4 = { vertex_00028C04, normal_00028CF4, LengthOfArray<Sint32>(vertex_00028C04), meshlist_00028BEC, matlist_00028B90, LengthOfArray<Uint16>(meshlist_00028BEC), LengthOfArray<Uint16>(matlist_00028B90), { -0.000113f, 50, -0.00046f }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00028E0C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00028DE4, 5099.999f, 0, -2650, 0, 0xFFFF8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00028E40[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00028E54[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00028E9C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00028E54, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00028EB4[] = {
	{ 0, 0, 125 },
	{ 0 },
	{ 0, 0, -125 },
	{ 0, 100, 125 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0, -100, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 250 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00028FA4[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00029094 = { vertex_00028EB4, normal_00028FA4, LengthOfArray<Sint32>(vertex_00028EB4), meshlist_00028E9C, matlist_00028E40, LengthOfArray<Uint16>(meshlist_00028E9C), LengthOfArray<Uint16>(matlist_00028E40), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000290BC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00029094, -300, 0, -1950, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000290F0[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00029104[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002914C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00029104, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00029164[] = {
	{ 0.000212f, 0, 124.9999f },
	{ 0.000212f, 0, -0.00047f },
	{ 0.000212f, 0, -125 },
	{ 0.000212f, 100, 124.9999f },
	{ 0.000212f, 100, -0.00047f },
	{ 0.000212f, 100, -125 },
	{ 0.000212f, -100, 124.9999f },
	{ 0.000212f, -100, 249.9999f },
	{ 0.000212f, 0, 249.9999f },
	{ 0.000212f, -100, -0.00047f },
	{ 0.000212f, -100, -125 },
	{ 0.000212f, -100, -250 },
	{ 0.000212f, 0, -250 },
	{ 0.000212f, 100, 249.9999f },
	{ 0.000212f, 100, -250 },
	{ 0.000212f, 200, 124.9999f },
	{ 0.000212f, 200, 249.9999f },
	{ 0.000212f, 200, -0.00047f },
	{ 0.000212f, 200, -125 },
	{ 0.000212f, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00029254[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00029344 = { vertex_00029164, normal_00029254, LengthOfArray<Sint32>(vertex_00029164), meshlist_0002914C, matlist_000290F0, LengthOfArray<Uint16>(meshlist_0002914C), LengthOfArray<Uint16>(matlist_000290F0), { 0.000212f, 50, -0.00046f }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002936C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00029344, 5099.999f, 0, -2150, 0, 0xFFFF8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000293A0[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000293B4[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000293FC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000293B4, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00029414[] = {
	{ 0.000049f, 0, 124.9999f },
	{ 0.000049f, 0, -0.00047f },
	{ 0.000049f, 0, -125 },
	{ 0.000049f, 100, 124.9999f },
	{ 0.000049f, 100, -0.00047f },
	{ 0.000049f, 100, -125 },
	{ 0.000049f, -100, 124.9999f },
	{ 0.000049f, -100, 249.9999f },
	{ 0.000049f, 0, 249.9999f },
	{ 0.000049f, -100, -0.00047f },
	{ 0.000049f, -100, -125 },
	{ 0.000049f, -100, -250 },
	{ 0.000049f, 0, -250 },
	{ 0.000049f, 100, 249.9999f },
	{ 0.000049f, 100, -250 },
	{ 0.000049f, 200, 124.9999f },
	{ 0.000049f, 200, 249.9999f },
	{ 0.000049f, 200, -0.00047f },
	{ 0.000049f, 200, -125 },
	{ 0.000049f, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00029504[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000295F4 = { vertex_00029414, normal_00029504, LengthOfArray<Sint32>(vertex_00029414), meshlist_000293FC, matlist_000293A0, LengthOfArray<Uint16>(meshlist_000293FC), LengthOfArray<Uint16>(matlist_000293A0), { 0.000049f, 50, -0.00046f }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002961C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000295F4, 5099.999f, 0, -1650, 0, 0xFFFF8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00029650[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00029664[] = {
	7, 14, 15, 10, 11, 5, 7, 6,
	8, 4, 2, 3, 1, 9, 8, 13, 12,
	8, 6, 4, 5, 3, 10, 9, 14, 13,
	3, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000296A0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00029664, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000296B8[] = {
	{ 27, -100, 70 },
	{ 27, 0, 70 },
	{ 7, -100, -33 },
	{ 7, 0, -33 },
	{ 2, -100, -125 },
	{ 2, 0, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 27, 100, 70 },
	{ 7, 100, -33 },
	{ 2, 100, -125 },
	{ 0, 100, -250 },
	{ 27, 200, 70 },
	{ 7, 200, -33 },
	{ 2, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00029778[] = {
	{ -0.981665f, 0, 0.190615f },
	{ -0.981665f, 0, 0.190615f },
	{ -0.99244f, 0, 0.122731f },
	{ -0.99244f, 0, 0.122731f },
	{ -0.999382f, 0, 0.035139f },
	{ -0.999382f, 0, 0.035139f },
	{ -0.999872f, 0, 0.015998f },
	{ -0.999872f, 0, 0.015998f },
	{ -0.981665f, 0, 0.190615f },
	{ -0.99244f, 0, 0.122731f },
	{ -0.999382f, 0, 0.035139f },
	{ -0.999872f, 0, 0.015998f },
	{ -0.981665f, 0, 0.190615f },
	{ -0.99244f, 0, 0.122731f },
	{ -0.999382f, 0, 0.035139f },
	{ -0.999872f, 0, 0.015998f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00029838 = { vertex_000296B8, normal_00029778, LengthOfArray<Sint32>(vertex_000296B8), meshlist_000296A0, matlist_00029650, LengthOfArray<Uint16>(meshlist_000296A0), LengthOfArray<Uint16>(matlist_00029650), { 13.5f, 50, -90 }, 219.3171f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00029860 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00029838, 400, 0, -650, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00029894[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000298A8[] = {
	6, 5, 2, 12, 10, 17, 15,
	6, 18, 19, 13, 14, 7, 9,
	0x8000u | 7, 1, 2, 3, 10, 11, 15, 16,
	6, 7, 5, 13, 12, 18, 17,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000298F8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_000298A8, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00029910[] = {
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 125 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0 },
	{ 0, -100, -125 },
	{ 0, 0, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 125 },
	{ 0, 100, 250 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00029A00[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00029AF0 = { vertex_00029910, normal_00029A00, LengthOfArray<Sint32>(vertex_00029910), meshlist_000298F8, matlist_00029894, LengthOfArray<Uint16>(meshlist_000298F8), LengthOfArray<Uint16>(matlist_00029894), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00029B18 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00029AF0, 400, 0, -1150, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00029B4C[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00029B60[] = {
	6, 5, 2, 12, 10, 17, 15,
	6, 18, 19, 13, 14, 7, 9,
	0x8000u | 7, 1, 2, 3, 10, 11, 15, 16,
	6, 7, 5, 13, 12, 18, 17,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00029BB0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_00029B60, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00029BC8[] = {
	{ 0.000012f, -100, 125.0001f },
	{ 0.000012f, -100, 250.0001f },
	{ 0.000012f, 0, 125.0001f },
	{ 0.000012f, 0, 250.0001f },
	{ 0.000012f, -100, 0.000119f },
	{ 0.000012f, 0, 0.000119f },
	{ 0.000012f, -100, -124.9999f },
	{ 0.000012f, 0, -124.9999f },
	{ 0.000012f, -100, -249.9999f },
	{ 0.000012f, 0, -249.9999f },
	{ 0.000012f, 100, 125.0001f },
	{ 0.000012f, 100, 250.0001f },
	{ 0.000012f, 100, 0.000119f },
	{ 0.000012f, 100, -124.9999f },
	{ 0.000012f, 100, -249.9999f },
	{ 0.000012f, 200, 125.0001f },
	{ 0.000012f, 200, 250.0001f },
	{ 0.000012f, 200, 0.000119f },
	{ 0.000012f, 200, -124.9999f },
	{ 0.000012f, 200, -249.9999f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00029CB8[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00029DA8 = { vertex_00029BC8, normal_00029CB8, LengthOfArray<Sint32>(vertex_00029BC8), meshlist_00029BB0, matlist_00029B4C, LengthOfArray<Uint16>(meshlist_00029BB0), LengthOfArray<Uint16>(matlist_00029B4C), { 0.000012f, 50, 0.000122f }, 250, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00029DD0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00029DA8, 3149.999f, 0, -399.9995f, 0, 0x3FFF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00029E04[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00029E18[] = {
	6, 5, 2, 12, 10, 17, 15,
	6, 18, 19, 13, 14, 7, 9,
	0x8000u | 7, 1, 2, 3, 10, 11, 15, 16,
	6, 7, 5, 13, 12, 18, 17,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00029E68[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_00029E18, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00029E80[] = {
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 125 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0 },
	{ 0, -100, -125 },
	{ 0, 0, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 125 },
	{ 0, 100, 250 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00029F70[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002A060 = { vertex_00029E80, normal_00029F70, LengthOfArray<Sint32>(vertex_00029E80), meshlist_00029E68, matlist_00029E04, LengthOfArray<Uint16>(meshlist_00029E68), LengthOfArray<Uint16>(matlist_00029E04), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002A088 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002A060, 400, 0, -2650, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002A0BC[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002A0D0[] = {
	6, 5, 2, 12, 10, 17, 15,
	6, 18, 19, 13, 14, 7, 9,
	0x8000u | 7, 1, 2, 3, 10, 11, 15, 16,
	6, 7, 5, 13, 12, 18, 17,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002A120[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0002A0D0, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002A138[] = {
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 125 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0 },
	{ 0, -100, -125 },
	{ 0, 0, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 125 },
	{ 0, 100, 250 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002A228[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002A318 = { vertex_0002A138, normal_0002A228, LengthOfArray<Sint32>(vertex_0002A138), meshlist_0002A120, matlist_0002A0BC, LengthOfArray<Uint16>(meshlist_0002A120), LengthOfArray<Uint16>(matlist_0002A0BC), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002A340 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002A318, 400, 0, -3150, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002A374[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002A388[] = {
	6, 5, 2, 12, 10, 17, 15,
	6, 18, 19, 13, 14, 7, 9,
	0x8000u | 7, 1, 2, 3, 10, 11, 15, 16,
	6, 7, 5, 13, 12, 18, 17,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002A3D8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0002A388, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002A3F0[] = {
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 125 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0 },
	{ 0, -100, -125 },
	{ 0, 0, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 125 },
	{ 0, 100, 250 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002A4E0[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002A5D0 = { vertex_0002A3F0, normal_0002A4E0, LengthOfArray<Sint32>(vertex_0002A3F0), meshlist_0002A3D8, matlist_0002A374, LengthOfArray<Uint16>(meshlist_0002A3D8), LengthOfArray<Uint16>(matlist_0002A374), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002A5F8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002A5D0, 400, 0, -4650, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002A62C[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002A640[] = {
	6, 5, 2, 12, 10, 17, 15,
	6, 18, 19, 13, 14, 7, 9,
	0x8000u | 7, 1, 2, 3, 10, 11, 15, 16,
	6, 7, 5, 13, 12, 18, 17,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002A690[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0002A640, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002A6A8[] = {
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 125 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0 },
	{ 0, -100, -125 },
	{ 0, 0, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 125 },
	{ 0, 100, 250 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002A798[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002A888 = { vertex_0002A6A8, normal_0002A798, LengthOfArray<Sint32>(vertex_0002A6A8), meshlist_0002A690, matlist_0002A62C, LengthOfArray<Uint16>(meshlist_0002A690), LengthOfArray<Uint16>(matlist_0002A62C), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002A8B0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002A888, 400, 0, -3650, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002A8E4[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002A8F8[] = {
	6, 5, 2, 12, 10, 17, 15,
	6, 18, 19, 13, 14, 7, 9,
	0x8000u | 7, 1, 2, 3, 10, 11, 15, 16,
	6, 7, 5, 13, 12, 18, 17,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002A948[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0002A8F8, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002A960[] = {
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 125 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0 },
	{ 0, -100, -125 },
	{ 0, 0, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 125 },
	{ 0, 100, 250 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002AA50[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002AB40 = { vertex_0002A960, normal_0002AA50, LengthOfArray<Sint32>(vertex_0002A960), meshlist_0002A948, matlist_0002A8E4, LengthOfArray<Uint16>(meshlist_0002A948), LengthOfArray<Uint16>(matlist_0002A8E4), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002AB68 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002AB40, 400, 0, -4150, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002AB9C[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002ABB0[] = {
	6, 5, 2, 12, 10, 17, 15,
	6, 18, 19, 13, 14, 7, 9,
	0x8000u | 7, 1, 2, 3, 10, 11, 15, 16,
	6, 7, 5, 13, 12, 18, 17,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002AC00[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0002ABB0, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002AC18[] = {
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 125 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0 },
	{ 0, -100, -125 },
	{ 0, 0, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 125 },
	{ 0, 100, 250 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002AD08[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002ADF8 = { vertex_0002AC18, normal_0002AD08, LengthOfArray<Sint32>(vertex_0002AC18), meshlist_0002AC00, matlist_0002AB9C, LengthOfArray<Uint16>(meshlist_0002AC00), LengthOfArray<Uint16>(matlist_0002AB9C), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002AE20 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002ADF8, 400, 0, -5150, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002AE54[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002AE68[] = {
	6, 5, 2, 12, 10, 17, 15,
	6, 18, 19, 13, 14, 7, 9,
	0x8000u | 7, 1, 2, 3, 10, 11, 15, 16,
	6, 7, 5, 13, 12, 18, 17,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002AEB8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0002AE68, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002AED0[] = {
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 125 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0 },
	{ 0, -100, -125 },
	{ 0, 0, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 125 },
	{ 0, 100, 250 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002AFC0[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002B0B0 = { vertex_0002AED0, normal_0002AFC0, LengthOfArray<Sint32>(vertex_0002AED0), meshlist_0002AEB8, matlist_0002AE54, LengthOfArray<Uint16>(meshlist_0002AEB8), LengthOfArray<Uint16>(matlist_0002AE54), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002B0D8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002B0B0, 400, 0, -5650, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002B10C[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002B120[] = {
	6, 5, 2, 12, 10, 17, 15,
	6, 18, 19, 13, 14, 7, 9,
	0x8000u | 7, 1, 2, 3, 10, 11, 15, 16,
	6, 7, 5, 13, 12, 18, 17,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002B170[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0002B120, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002B188[] = {
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 125 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0 },
	{ 0, -100, -125 },
	{ 0, 0, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 125 },
	{ 0, 100, 250 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002B278[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002B368 = { vertex_0002B188, normal_0002B278, LengthOfArray<Sint32>(vertex_0002B188), meshlist_0002B170, matlist_0002B10C, LengthOfArray<Uint16>(meshlist_0002B170), LengthOfArray<Uint16>(matlist_0002B10C), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002B390 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002B368, 400, 0, -6150, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002B3C4[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002B3D8[] = {
	6, 5, 2, 12, 10, 17, 15,
	6, 18, 19, 13, 14, 7, 9,
	0x8000u | 7, 1, 2, 3, 10, 11, 15, 16,
	6, 7, 5, 13, 12, 18, 17,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002B428[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0002B3D8, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002B440[] = {
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 125 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0 },
	{ 0, -100, -125 },
	{ 0, 0, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 125 },
	{ 0, 100, 250 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002B530[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002B620 = { vertex_0002B440, normal_0002B530, LengthOfArray<Sint32>(vertex_0002B440), meshlist_0002B428, matlist_0002B3C4, LengthOfArray<Uint16>(meshlist_0002B428), LengthOfArray<Uint16>(matlist_0002B3C4), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002B648 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002B620, 400, 0, -6650, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002B67C[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002B690[] = {
	6, 5, 2, 12, 10, 17, 15,
	6, 18, 19, 13, 14, 7, 9,
	0x8000u | 7, 1, 2, 3, 10, 11, 15, 16,
	6, 7, 5, 13, 12, 18, 17,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002B6E0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0002B690, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002B6F8[] = {
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 125 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0 },
	{ 0, -100, -125 },
	{ 0, 0, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 125 },
	{ 0, 100, 250 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002B7E8[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002B8D8 = { vertex_0002B6F8, normal_0002B7E8, LengthOfArray<Sint32>(vertex_0002B6F8), meshlist_0002B6E0, matlist_0002B67C, LengthOfArray<Uint16>(meshlist_0002B6E0), LengthOfArray<Uint16>(matlist_0002B67C), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002B900 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002B8D8, 400, 0, -7150, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002B934[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002B948[] = {
	6, 5, 2, 12, 10, 17, 15,
	6, 18, 19, 13, 14, 7, 9,
	0x8000u | 7, 1, 2, 3, 10, 11, 15, 16,
	6, 7, 5, 13, 12, 18, 17,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002B998[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0002B948, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002B9B0[] = {
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 125 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0 },
	{ 0, -100, -125 },
	{ 0, 0, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 125 },
	{ 0, 100, 250 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002BAA0[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002BB90 = { vertex_0002B9B0, normal_0002BAA0, LengthOfArray<Sint32>(vertex_0002B9B0), meshlist_0002B998, matlist_0002B934, LengthOfArray<Uint16>(meshlist_0002B998), LengthOfArray<Uint16>(matlist_0002B934), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002BBB8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002BB90, 400, 0, -7650, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002BBEC[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002BC00[] = {
	6, 5, 2, 12, 10, 17, 15,
	6, 18, 19, 13, 14, 7, 9,
	0x8000u | 7, 1, 2, 3, 10, 11, 15, 16,
	6, 7, 5, 13, 12, 18, 17,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002BC50[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0002BC00, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002BC68[] = {
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 125 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0 },
	{ 0, -100, -125 },
	{ 0, 0, -125 },
	{ 0, -100, -256 },
	{ 0, 0, -256 },
	{ 0, 100, 125 },
	{ 0, 100, 250 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, 100, -256 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -256 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002BD58[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002BE48 = { vertex_0002BC68, normal_0002BD58, LengthOfArray<Sint32>(vertex_0002BC68), meshlist_0002BC50, matlist_0002BBEC, LengthOfArray<Uint16>(meshlist_0002BC50), LengthOfArray<Uint16>(matlist_0002BBEC), { 0, 50, -3 }, 294.1241f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002BE70 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002BE48, 400, 0, -8150, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002BEA4[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002BEB8[] = {
	0x8000u | 6, 5, 12, 2, 10, 3, 11,
	7, 18, 19, 13, 14, 7, 9, 8,
	3, 3, 2, 1,
	8, 17, 18, 12, 13, 5, 7, 6, 8,
	0x8000u | 6, 12, 17, 10, 15, 11, 16,
	0x8000u | 6, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002BF0C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_0002BEB8, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002BF24[] = {
	{ 23.00011f, -100, 125 },
	{ 49.00011f, -100, 250 },
	{ 23.00011f, 0, 125 },
	{ 49.00011f, 0, 250 },
	{ 13.00012f, -100, -0.00029f },
	{ 13.00012f, 0, -0.00029f },
	{ 0.000116f, -100, -125 },
	{ 0.000116f, 0, -125 },
	{ 0.000116f, -100, -250 },
	{ 0.000116f, 0, -250 },
	{ 23.00011f, 100, 125 },
	{ 49.00011f, 100, 250 },
	{ 13.00012f, 100, -0.00029f },
	{ 0.000116f, 100, -125 },
	{ 0.000116f, 100, -250 },
	{ 23.00011f, 200, 125 },
	{ 49.00011f, 200, 250 },
	{ 13.00012f, 200, -0.00029f },
	{ 0.000116f, 200, -125 },
	{ 0.000116f, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002C014[] = {
	{ -0.989871f, 0, 0.141972f },
	{ -0.979046f, 0, 0.203641f },
	{ -0.989871f, 0, 0.141972f },
	{ -0.979046f, 0, 0.203641f },
	{ -0.995796f, 0, 0.09159999f },
	{ -0.995796f, 0, 0.09159999f },
	{ -0.9986579f, 0, 0.051791f },
	{ -0.9986579f, 0, 0.051791f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.989871f, 0, 0.141972f },
	{ -0.979046f, 0, 0.203641f },
	{ -0.995796f, 0, 0.09159999f },
	{ -0.9986579f, 0, 0.051791f },
	{ -1, 0, 0 },
	{ -0.989871f, 0, 0.141972f },
	{ -0.979046f, 0, 0.203641f },
	{ -0.995796f, 0, 0.09159999f },
	{ -0.9986579f, 0, 0.051791f },
	{ -1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002C104 = { vertex_0002BF24, normal_0002C014, LengthOfArray<Sint32>(vertex_0002BF24), meshlist_0002BF0C, matlist_0002BEA4, LengthOfArray<Uint16>(meshlist_0002BF0C), LengthOfArray<Uint16>(matlist_0002BEA4), { 24.50011f, 50, -0.00031f }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002C12C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002C104, 4400, 0, -6350, 0, 0xFFFF8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002C160[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002C174[] = {
	6, 5, 2, 12, 10, 17, 15,
	6, 18, 19, 13, 14, 7, 9,
	0x8000u | 7, 1, 2, 3, 10, 11, 15, 16,
	6, 7, 5, 13, 12, 18, 17,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002C1C4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0002C174, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002C1DC[] = {
	{ -0.00047f, -100, 125 },
	{ -0.00047f, -100, 250 },
	{ -0.00047f, 0, 125 },
	{ -0.00047f, 0, 250 },
	{ -0.00047f, -100, -0.00031f },
	{ -0.00047f, 0, -0.00031f },
	{ -0.00047f, -100, -125 },
	{ -0.00047f, 0, -125 },
	{ -0.00047f, -100, -250 },
	{ -0.00047f, 0, -250 },
	{ -0.00047f, 100, 125 },
	{ -0.00047f, 100, 250 },
	{ -0.00047f, 100, -0.00031f },
	{ -0.00047f, 100, -125 },
	{ -0.00047f, 100, -250 },
	{ -0.00047f, 200, 125 },
	{ -0.00047f, 200, 250 },
	{ -0.00047f, 200, -0.00031f },
	{ -0.00047f, 200, -125 },
	{ -0.00047f, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002C2CC[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002C3BC = { vertex_0002C1DC, normal_0002C2CC, LengthOfArray<Sint32>(vertex_0002C1DC), meshlist_0002C1C4, matlist_0002C160, LengthOfArray<Uint16>(meshlist_0002C1C4), LengthOfArray<Uint16>(matlist_0002C160), { -0.00047f, 50, -0.00031f }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002C3E4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002C3BC, 4400, 0, -5850, 0, 0xFFFF8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002C418[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002C42C[] = {
	6, 5, 2, 12, 10, 17, 15,
	6, 18, 19, 13, 14, 7, 9,
	0x8000u | 7, 1, 2, 3, 10, 11, 15, 16,
	6, 7, 5, 13, 12, 18, 17,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002C47C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0002C42C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002C494[] = {
	{ -0.00021f, -100, 125 },
	{ -0.00021f, -100, 250 },
	{ -0.00021f, 0, 125 },
	{ -0.00021f, 0, 250 },
	{ -0.00021f, -100, -0.00031f },
	{ -0.00021f, 0, -0.00031f },
	{ -0.00021f, -100, -125 },
	{ -0.00021f, 0, -125 },
	{ -0.00021f, -100, -250 },
	{ -0.00021f, 0, -250 },
	{ -0.00021f, 100, 125 },
	{ -0.00021f, 100, 250 },
	{ -0.00021f, 100, -0.00031f },
	{ -0.00021f, 100, -125 },
	{ -0.00021f, 100, -250 },
	{ -0.00021f, 200, 125 },
	{ -0.00021f, 200, 250 },
	{ -0.00021f, 200, -0.00031f },
	{ -0.00021f, 200, -125 },
	{ -0.00021f, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002C584[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002C674 = { vertex_0002C494, normal_0002C584, LengthOfArray<Sint32>(vertex_0002C494), meshlist_0002C47C, matlist_0002C418, LengthOfArray<Uint16>(meshlist_0002C47C), LengthOfArray<Uint16>(matlist_0002C418), { -0.00021f, 50, -0.00031f }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002C69C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002C674, 4400, 0, -5350, 0, 0xFFFF8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002C6D0[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002C6E4[] = {
	6, 5, 2, 12, 10, 17, 15,
	6, 18, 19, 13, 14, 7, 9,
	0x8000u | 7, 1, 2, 3, 10, 11, 15, 16,
	6, 7, 5, 13, 12, 18, 17,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002C734[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0002C6E4, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002C74C[] = {
	{ 0.000115f, -100, 125 },
	{ 0.000115f, -100, 250 },
	{ 0.000115f, 0, 125 },
	{ 0.000115f, 0, 250 },
	{ 0.000115f, -100, -0.00031f },
	{ 0.000115f, 0, -0.00031f },
	{ 0.000115f, -100, -125 },
	{ 0.000115f, 0, -125 },
	{ 0.000115f, -100, -250 },
	{ 0.000115f, 0, -250 },
	{ 0.000115f, 100, 125 },
	{ 0.000115f, 100, 250 },
	{ 0.000115f, 100, -0.00031f },
	{ 0.000115f, 100, -125 },
	{ 0.000115f, 100, -250 },
	{ 0.000115f, 200, 125 },
	{ 0.000115f, 200, 250 },
	{ 0.000115f, 200, -0.00031f },
	{ 0.000115f, 200, -125 },
	{ 0.000115f, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002C83C[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002C92C = { vertex_0002C74C, normal_0002C83C, LengthOfArray<Sint32>(vertex_0002C74C), meshlist_0002C734, matlist_0002C6D0, LengthOfArray<Uint16>(meshlist_0002C734), LengthOfArray<Uint16>(matlist_0002C6D0), { 0.000115f, 50, -0.00031f }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002C954 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002C92C, 4400, 0, -4850, 0, 0xFFFF8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002C988[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002C99C[] = {
	6, 5, 2, 12, 10, 17, 15,
	6, 18, 19, 13, 14, 7, 9,
	0x8000u | 7, 1, 2, 3, 10, 11, 15, 16,
	6, 7, 5, 13, 12, 18, 17,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002C9EC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0002C99C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002CA04[] = {
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 125 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0 },
	{ 0, -100, -125 },
	{ 0, 0, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 125 },
	{ 0, 100, 250 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002CAF4[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002CBE4 = { vertex_0002CA04, normal_0002CAF4, LengthOfArray<Sint32>(vertex_0002CA04), meshlist_0002C9EC, matlist_0002C988, LengthOfArray<Uint16>(meshlist_0002C9EC), LengthOfArray<Uint16>(matlist_0002C988), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002CC0C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002CBE4, 400, 0, -1650, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002CC40[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002CC54[] = {
	6, 5, 2, 12, 10, 17, 15,
	6, 18, 19, 13, 14, 7, 9,
	0x8000u | 7, 1, 2, 3, 10, 11, 15, 16,
	6, 7, 5, 13, 12, 18, 17,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002CCA4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0002CC54, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002CCBC[] = {
	{ -0.00047f, -100, 125 },
	{ -0.00047f, -100, 250 },
	{ -0.00047f, 0, 125 },
	{ -0.00047f, 0, 250 },
	{ -0.00047f, -100, -0.00031f },
	{ -0.00047f, 0, -0.00031f },
	{ -0.00047f, -100, -125 },
	{ -0.00047f, 0, -125 },
	{ -0.00047f, -100, -250 },
	{ -0.00047f, 0, -250 },
	{ -0.00047f, 100, 125 },
	{ -0.00047f, 100, 250 },
	{ -0.00047f, 100, -0.00031f },
	{ -0.00047f, 100, -125 },
	{ -0.00047f, 100, -250 },
	{ -0.00047f, 200, 125 },
	{ -0.00047f, 200, 250 },
	{ -0.00047f, 200, -0.00031f },
	{ -0.00047f, 200, -125 },
	{ -0.00047f, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002CDAC[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002CE9C = { vertex_0002CCBC, normal_0002CDAC, LengthOfArray<Sint32>(vertex_0002CCBC), meshlist_0002CCA4, matlist_0002CC40, LengthOfArray<Uint16>(meshlist_0002CCA4), LengthOfArray<Uint16>(matlist_0002CC40), { -0.00047f, 50, -0.00031f }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002CEC4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002CE9C, 4400, 0, -4350, 0, 0xFFFF8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002CEF8[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002CF0C[] = {
	6, 5, 2, 12, 10, 17, 15,
	6, 18, 19, 13, 14, 7, 9,
	0x8000u | 7, 1, 2, 3, 10, 11, 15, 16,
	6, 7, 5, 13, 12, 18, 17,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002CF5C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0002CF0C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002CF74[] = {
	{ -0.00021f, -100, 125 },
	{ -0.00021f, -100, 250 },
	{ -0.00021f, 0, 125 },
	{ -0.00021f, 0, 250 },
	{ -0.00021f, -100, -0.00031f },
	{ -0.00021f, 0, -0.00031f },
	{ -0.00021f, -100, -125 },
	{ -0.00021f, 0, -125 },
	{ -0.00021f, -100, -250 },
	{ -0.00021f, 0, -250 },
	{ -0.00021f, 100, 125 },
	{ -0.00021f, 100, 250 },
	{ -0.00021f, 100, -0.00031f },
	{ -0.00021f, 100, -125 },
	{ -0.00021f, 100, -250 },
	{ -0.00021f, 200, 125 },
	{ -0.00021f, 200, 250 },
	{ -0.00021f, 200, -0.00031f },
	{ -0.00021f, 200, -125 },
	{ -0.00021f, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002D064[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002D154 = { vertex_0002CF74, normal_0002D064, LengthOfArray<Sint32>(vertex_0002CF74), meshlist_0002CF5C, matlist_0002CEF8, LengthOfArray<Uint16>(meshlist_0002CF5C), LengthOfArray<Uint16>(matlist_0002CEF8), { -0.00021f, 50, -0.00031f }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002D17C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002D154, 4400, 0, -3850, 0, 0xFFFF8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002D1B0[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002D1C4[] = {
	6, 5, 2, 12, 10, 17, 15,
	6, 18, 19, 13, 14, 7, 9,
	0x8000u | 7, 1, 2, 3, 10, 11, 15, 16,
	6, 7, 5, 13, 12, 18, 17,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002D214[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0002D1C4, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002D22C[] = {
	{ 0.000115f, -100, 125 },
	{ 0.000115f, -100, 250 },
	{ 0.000115f, 0, 125 },
	{ 0.000115f, 0, 250 },
	{ 0.000115f, -100, -0.00031f },
	{ 0.000115f, 0, -0.00031f },
	{ 0.000115f, -100, -125 },
	{ 0.000115f, 0, -125 },
	{ 0.000115f, -100, -250 },
	{ 0.000115f, 0, -250 },
	{ 0.000115f, 100, 125 },
	{ 0.000115f, 100, 250 },
	{ 0.000115f, 100, -0.00031f },
	{ 0.000115f, 100, -125 },
	{ 0.000115f, 100, -250 },
	{ 0.000115f, 200, 125 },
	{ 0.000115f, 200, 250 },
	{ 0.000115f, 200, -0.00031f },
	{ 0.000115f, 200, -125 },
	{ 0.000115f, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002D31C[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002D40C = { vertex_0002D22C, normal_0002D31C, LengthOfArray<Sint32>(vertex_0002D22C), meshlist_0002D214, matlist_0002D1B0, LengthOfArray<Uint16>(meshlist_0002D214), LengthOfArray<Uint16>(matlist_0002D1B0), { 0.000115f, 50, -0.00031f }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002D434 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002D40C, 4400, 0, -3350, 0, 0xFFFF8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002D468[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002D47C[] = {
	6, 5, 2, 12, 10, 17, 15,
	6, 18, 19, 13, 14, 7, 9,
	0x8000u | 7, 1, 2, 3, 10, 11, 15, 16,
	6, 7, 5, 13, 12, 18, 17,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002D4CC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0002D47C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002D4E4[] = {
	{ -0.00048f, -100, 125 },
	{ -0.00048f, -100, 250 },
	{ -0.00048f, 0, 125 },
	{ -0.00048f, 0, 250 },
	{ -0.00048f, -100, -0.00031f },
	{ -0.00048f, 0, -0.00031f },
	{ -0.00048f, -100, -125 },
	{ -0.00048f, 0, -125 },
	{ -0.00048f, -100, -250 },
	{ -0.00048f, 0, -250 },
	{ -0.00048f, 100, 125 },
	{ -0.00048f, 100, 250 },
	{ -0.00048f, 100, -0.00031f },
	{ -0.00048f, 100, -125 },
	{ -0.00048f, 100, -250 },
	{ -0.00048f, 200, 125 },
	{ -0.00048f, 200, 250 },
	{ -0.00048f, 200, -0.00031f },
	{ -0.00048f, 200, -125 },
	{ -0.00048f, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002D5D4[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002D6C4 = { vertex_0002D4E4, normal_0002D5D4, LengthOfArray<Sint32>(vertex_0002D4E4), meshlist_0002D4CC, matlist_0002D468, LengthOfArray<Uint16>(meshlist_0002D4CC), LengthOfArray<Uint16>(matlist_0002D468), { -0.00048f, 50, -0.00031f }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002D6EC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002D6C4, 4400, 0, -2850, 0, 0xFFFF8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002D720[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002D734[] = {
	6, 5, 2, 12, 10, 17, 15,
	6, 18, 19, 13, 14, 7, 9,
	0x8000u | 7, 1, 2, 3, 10, 11, 15, 16,
	6, 7, 5, 13, 12, 18, 17,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002D784[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0002D734, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002D79C[] = {
	{ -0.000211f, -100, 125 },
	{ -0.000211f, -100, 250 },
	{ -0.000211f, 0, 125 },
	{ -0.000211f, 0, 250 },
	{ -0.000211f, -100, -0.00031f },
	{ -0.000211f, 0, -0.00031f },
	{ -0.000211f, -100, -125 },
	{ -0.000211f, 0, -125 },
	{ -0.000211f, -100, -250 },
	{ -0.000211f, 0, -250 },
	{ -0.000211f, 100, 125 },
	{ -0.000211f, 100, 250 },
	{ -0.000211f, 100, -0.00031f },
	{ -0.000211f, 100, -125 },
	{ -0.000211f, 100, -250 },
	{ -0.000211f, 200, 125 },
	{ -0.000211f, 200, 250 },
	{ -0.000211f, 200, -0.00031f },
	{ -0.000211f, 200, -125 },
	{ -0.000211f, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002D88C[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002D97C = { vertex_0002D79C, normal_0002D88C, LengthOfArray<Sint32>(vertex_0002D79C), meshlist_0002D784, matlist_0002D720, LengthOfArray<Uint16>(meshlist_0002D784), LengthOfArray<Uint16>(matlist_0002D720), { -0.000211f, 50, -0.00031f }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002D9A4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002D97C, 4400, 0, -2350, 0, 0xFFFF8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002D9D8[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002D9EC[] = {
	6, 5, 2, 12, 10, 17, 15,
	6, 18, 19, 13, 14, 7, 9,
	0x8000u | 7, 1, 2, 3, 10, 11, 15, 16,
	6, 7, 5, 13, 12, 18, 17,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002DA3C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0002D9EC, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002DA54[] = {
	{ 0.000115f, -100, 125 },
	{ 0.000115f, -100, 250 },
	{ 0.000115f, 0, 125 },
	{ 0.000115f, 0, 250 },
	{ 0.000115f, -100, -0.00031f },
	{ 0.000115f, 0, -0.00031f },
	{ 0.000115f, -100, -125 },
	{ 0.000115f, 0, -125 },
	{ 0.000115f, -100, -250 },
	{ 0.000115f, 0, -250 },
	{ 0.000115f, 100, 125 },
	{ 0.000115f, 100, 250 },
	{ 0.000115f, 100, -0.00031f },
	{ 0.000115f, 100, -125 },
	{ 0.000115f, 100, -250 },
	{ 0.000115f, 200, 125 },
	{ 0.000115f, 200, 250 },
	{ 0.000115f, 200, -0.00031f },
	{ 0.000115f, 200, -125 },
	{ 0.000115f, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002DB44[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002DC34 = { vertex_0002DA54, normal_0002DB44, LengthOfArray<Sint32>(vertex_0002DA54), meshlist_0002DA3C, matlist_0002D9D8, LengthOfArray<Uint16>(meshlist_0002DA3C), LengthOfArray<Uint16>(matlist_0002D9D8), { 0.000115f, 50, -0.00031f }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002DC5C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002DC34, 4400, 0, -1850, 0, 0xFFFF8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002DC90[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002DCA4[] = {
	7, 18, 19, 13, 14, 7, 9, 8,
	8, 0, 1, 2, 3, 10, 11, 15, 16,
	8, 17, 18, 12, 13, 5, 7, 6, 8,
	3, 4, 0, 2,
	8, 6, 4, 5, 2, 12, 10, 17, 15
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002DCF4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0002DCA4, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002DD0C[] = {
	{ -0.00048f, -100, 125 },
	{ -0.00048f, -100, 250 },
	{ -0.00048f, 0, 125 },
	{ -0.00048f, 0, 250 },
	{ -0.00048f, -100, -0.00031f },
	{ -0.00048f, 0, -0.00031f },
	{ -0.00048f, -100, -125 },
	{ -0.00048f, 0, -125 },
	{ 22.99995f, -100, -250 },
	{ 22.99995f, 0, -250 },
	{ -0.00048f, 100, 125 },
	{ -0.00048f, 100, 250 },
	{ -0.00048f, 100, -0.00031f },
	{ -0.00048f, 100, -125 },
	{ 22.99995f, 100, -250 },
	{ -0.00048f, 200, 125 },
	{ -0.00048f, 200, 250 },
	{ -0.00048f, 200, -0.00031f },
	{ -0.00048f, 200, -125 },
	{ 22.99995f, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002DDFC[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.995864f, 0, -0.090857f },
	{ -0.995864f, 0, -0.090857f },
	{ -0.98349f, 0, -0.180962f },
	{ -0.98349f, 0, -0.180962f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.995864f, 0, -0.090857f },
	{ -0.98349f, 0, -0.180962f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.995864f, 0, -0.090857f },
	{ -0.98349f, 0, -0.180962f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002DEEC = { vertex_0002DD0C, normal_0002DDFC, LengthOfArray<Sint32>(vertex_0002DD0C), meshlist_0002DCF4, matlist_0002DC90, LengthOfArray<Uint16>(meshlist_0002DCF4), LengthOfArray<Uint16>(matlist_0002DC90), { 11.49995f, 50, -0.00031f }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002DF14 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002DEEC, 4399.999f, 0, -1350, 0, 0xFFFF8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002DF48[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002DF5C[] = {
	8, 19, 4, 18, 5, 17, 10, 16, 14,
	8, 0, 1, 2, 3, 8, 9, 12, 13,
	8, 16, 15, 17, 11, 18, 7, 19, 6,
	0x8000u | 7, 4, 5, 2, 10, 8, 14, 12,
	3, 4, 0, 2
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002DFAC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0002DF5C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002DFC4[] = {
	{ 16.99998f, -100, 116 },
	{ -0.0001f, -100, 250 },
	{ 16.99998f, 0, 116 },
	{ -0.0001f, 0, 250 },
	{ 63.99999f, -100, -22.00001f },
	{ 63.99999f, 0, -22.00001f },
	{ 180.0006f, -100, -222.9991f },
	{ 180.0006f, 0, -222.9991f },
	{ 16.99998f, 100, 116 },
	{ -0.0001f, 100, 250 },
	{ 63.99999f, 100, -22.00001f },
	{ 180.0006f, 100, -222.9991f },
	{ 16.99998f, 200, 116 },
	{ -0.0001f, 200, 250 },
	{ 63.99999f, 200, -22.00001f },
	{ 180.0006f, 200, -222.9991f },
	{ 126.5003f, 200, -136.9995f },
	{ 126.5003f, 100, -136.9995f },
	{ 126.5003f, 0, -136.9995f },
	{ 126.5003f, -100, -136.9995f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002E0B4[] = {
	{ -0.974295f, 0, -0.225275f },
	{ -0.992048f, 0, -0.125857f },
	{ -0.974295f, 0, -0.225275f },
	{ -0.992048f, 0, -0.125857f },
	{ -0.915904f, 0, -0.401397f },
	{ -0.915904f, 0, -0.401397f },
	{ -0.849103f, 0, -0.528227f },
	{ -0.849103f, 0, -0.528227f },
	{ -0.974295f, 0, -0.225275f },
	{ -0.992048f, 0, -0.125857f },
	{ -0.915904f, 0, -0.401397f },
	{ -0.849103f, 0, -0.528227f },
	{ -0.974295f, 0, -0.225275f },
	{ -0.992048f, 0, -0.125857f },
	{ -0.915904f, 0, -0.401397f },
	{ -0.849103f, 0, -0.528227f },
	{ -0.864235f, 0, -0.503088f },
	{ -0.864235f, 0, -0.503088f },
	{ -0.864235f, 0, -0.503088f },
	{ -0.864235f, 0, -0.503088f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002E1A4 = { vertex_0002DFC4, normal_0002E0B4, LengthOfArray<Sint32>(vertex_0002DFC4), meshlist_0002DFAC, matlist_0002DF48, LengthOfArray<Uint16>(meshlist_0002DFAC), LengthOfArray<Uint16>(matlist_0002DF48), { 90.0003f, 50, 13.50046f }, 253.0456f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002E1CC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002E1A4, 649.999f, 0, -399.9993f, 0, 0x3FFF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002E200[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002E214[] = {
	6, 5, 2, 12, 10, 17, 15,
	6, 18, 19, 13, 14, 7, 9,
	0x8000u | 7, 1, 2, 3, 10, 11, 15, 16,
	6, 7, 5, 13, 12, 18, 17,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002E264[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0002E214, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002E27C[] = {
	{ 0, -100, 125 },
	{ 0, -100, 250 },
	{ 0, 0, 125 },
	{ 0, 0, 250 },
	{ 0, -100, 0 },
	{ 0 },
	{ 0, -100, -125 },
	{ 0, 0, -125 },
	{ 0, -100, -250 },
	{ 0, 0, -250 },
	{ 0, 100, 125 },
	{ 0, 100, 250 },
	{ 0, 100, 0 },
	{ 0, 100, -125 },
	{ 0, 100, -250 },
	{ 0, 200, 125 },
	{ 0, 200, 250 },
	{ 0, 200, 0 },
	{ 0, 200, -125 },
	{ 0, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002E36C[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002E45C = { vertex_0002E27C, normal_0002E36C, LengthOfArray<Sint32>(vertex_0002E27C), meshlist_0002E264, matlist_0002E200, LengthOfArray<Uint16>(meshlist_0002E264), LengthOfArray<Uint16>(matlist_0002E200), { 0, 50, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002E484 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002E45C, 400, 0, -2150, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002E4B8[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002E4CC[] = {
	6, 5, 2, 12, 10, 17, 15,
	6, 18, 19, 13, 14, 7, 9,
	0x8000u | 7, 1, 2, 3, 10, 11, 15, 16,
	6, 7, 5, 13, 12, 18, 17,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002E51C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0002E4CC, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002E534[] = {
	{ -0.00005f, -100, 125 },
	{ -0.00005f, -100, 250 },
	{ -0.00005f, 0, 125 },
	{ -0.00005f, 0, 250 },
	{ -0.00005f, -100, -0.00003f },
	{ -0.00005f, 0, -0.00003f },
	{ -0.00005f, -100, -125 },
	{ -0.00005f, 0, -125 },
	{ -0.00005f, -100, -250 },
	{ -0.00005f, 0, -250 },
	{ -0.00005f, 100, 125 },
	{ -0.00005f, 100, 250 },
	{ -0.00005f, 100, -0.00003f },
	{ -0.00005f, 100, -125 },
	{ -0.00005f, 100, -250 },
	{ -0.00005f, 200, 125 },
	{ -0.00005f, 200, 250 },
	{ -0.00005f, 200, -0.00003f },
	{ -0.00005f, 200, -125 },
	{ -0.00005f, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002E624[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002E714 = { vertex_0002E534, normal_0002E624, LengthOfArray<Sint32>(vertex_0002E534), meshlist_0002E51C, matlist_0002E4B8, LengthOfArray<Uint16>(meshlist_0002E51C), LengthOfArray<Uint16>(matlist_0002E4B8), { -0.00005f, 50, 0 }, 250, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002E73C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002E714, 1149.999f, 0, -399.9993f, 0, 0x3FFF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002E770[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002E784[] = {
	6, 5, 2, 12, 10, 17, 15,
	6, 18, 19, 13, 14, 7, 9,
	0x8000u | 7, 1, 2, 3, 10, 11, 15, 16,
	6, 7, 5, 13, 12, 18, 17,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002E7D4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0002E784, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002E7EC[] = {
	{ -0.00001f, -100, 125 },
	{ -0.00001f, -100, 250 },
	{ -0.00001f, 0, 125 },
	{ -0.00001f, 0, 250 },
	{ -0.00001f, -100, -0.00003f },
	{ -0.00001f, 0, -0.00003f },
	{ -0.00001f, -100, -125 },
	{ -0.00001f, 0, -125 },
	{ -0.00001f, -100, -250 },
	{ -0.00001f, 0, -250 },
	{ -0.00001f, 100, 125 },
	{ -0.00001f, 100, 250 },
	{ -0.00001f, 100, -0.00003f },
	{ -0.00001f, 100, -125 },
	{ -0.00001f, 100, -250 },
	{ -0.00001f, 200, 125 },
	{ -0.00001f, 200, 250 },
	{ -0.00001f, 200, -0.00003f },
	{ -0.00001f, 200, -125 },
	{ -0.00001f, 200, -250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002E8DC[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002E9CC = { vertex_0002E7EC, normal_0002E8DC, LengthOfArray<Sint32>(vertex_0002E7EC), meshlist_0002E7D4, matlist_0002E770, LengthOfArray<Uint16>(meshlist_0002E7D4), LengthOfArray<Uint16>(matlist_0002E770), { -0.00001f, 50, 0 }, 250, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002E9F4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002E9CC, 1649.999f, 0, -399.9994f, 0, 0x3FFF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002EA28[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002EA3C[] = {
	6, 5, 2, 12, 10, 17, 15,
	6, 18, 19, 13, 14, 7, 9,
	0x8000u | 7, 1, 2, 3, 10, 11, 15, 16,
	6, 7, 5, 13, 12, 18, 17,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002EA8C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0002EA3C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002EAA4[] = {
	{ 0.000004f, -100, 125.0001f },
	{ 0.000004f, -100, 250.0001f },
	{ 0.000004f, 0, 125.0001f },
	{ 0.000004f, 0, 250.0001f },
	{ 0.000004f, -100, 0.000119f },
	{ 0.000004f, 0, 0.000119f },
	{ 0.000004f, -100, -124.9999f },
	{ 0.000004f, 0, -124.9999f },
	{ 0.000004f, -100, -249.9999f },
	{ 0.000004f, 0, -249.9999f },
	{ 0.000004f, 100, 125.0001f },
	{ 0.000004f, 100, 250.0001f },
	{ 0.000004f, 100, 0.000119f },
	{ 0.000004f, 100, -124.9999f },
	{ 0.000004f, 100, -249.9999f },
	{ 0.000004f, 200, 125.0001f },
	{ 0.000004f, 200, 250.0001f },
	{ 0.000004f, 200, 0.000119f },
	{ 0.000004f, 200, -124.9999f },
	{ 0.000004f, 200, -249.9999f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002EB94[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002EC84 = { vertex_0002EAA4, normal_0002EB94, LengthOfArray<Sint32>(vertex_0002EAA4), meshlist_0002EA8C, matlist_0002EA28, LengthOfArray<Uint16>(meshlist_0002EA8C), LengthOfArray<Uint16>(matlist_0002EA28), { 0.000004f, 50, 0.000122f }, 249.9999f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002ECAC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002EC84, 2149.999f, 0, -399.9994f, 0, 0x3FFF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002ECE0[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002ECF4[] = {
	6, 5, 2, 12, 10, 17, 15,
	6, 18, 19, 13, 14, 7, 9,
	0x8000u | 7, 1, 2, 3, 10, 11, 15, 16,
	6, 7, 5, 13, 12, 18, 17,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002ED44[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0002ECF4, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002ED5C[] = {
	{ 0.000008f, -100, 125.0001f },
	{ 0.000008f, -100, 250.0001f },
	{ 0.000008f, 0, 125.0001f },
	{ 0.000008f, 0, 250.0001f },
	{ 0.000008f, -100, 0.000119f },
	{ 0.000008f, 0, 0.000119f },
	{ 0.000008f, -100, -124.9999f },
	{ 0.000008f, 0, -124.9999f },
	{ 0.000008f, -100, -249.9999f },
	{ 0.000008f, 0, -249.9999f },
	{ 0.000008f, 100, 125.0001f },
	{ 0.000008f, 100, 250.0001f },
	{ 0.000008f, 100, 0.000119f },
	{ 0.000008f, 100, -124.9999f },
	{ 0.000008f, 100, -249.9999f },
	{ 0.000008f, 200, 125.0001f },
	{ 0.000008f, 200, 250.0001f },
	{ 0.000008f, 200, 0.000119f },
	{ 0.000008f, 200, -124.9999f },
	{ 0.000008f, 200, -249.9999f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002EE4C[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002EF3C = { vertex_0002ED5C, normal_0002EE4C, LengthOfArray<Sint32>(vertex_0002ED5C), meshlist_0002ED44, matlist_0002ECE0, LengthOfArray<Uint16>(meshlist_0002ED44), LengthOfArray<Uint16>(matlist_0002ECE0), { 0.000008f, 50, 0.000122f }, 250, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002EF64 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002EF3C, 2649.999f, 0, -399.9994f, 0, 0x3FFF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002EF98[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002EFAC[] = {
	9, 2, 12, 3, 4, 6, 7, 9, 14, 13,
	0x8000u | 11, 11, 13, 10, 9, 8, 6, 5, 3, 1, 2, 0
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002EFD8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0002EFAC, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002EFF0[] = {
	{ 105, 150, -202 },
	{ 105, 140, -102 },
	{ 205, 120, -102 },
	{ 205, 115, -2 },
	{ 305, 100, 98 },
	{ 105, 130, -2 },
	{ 205, 110, 98 },
	{ 305, 100, 198 },
	{ 105, 120, 98 },
	{ 205, 105, 198 },
	{ 105, 115, 198 },
	{ 105, 105, 298 },
	{ 305, 100, -2 },
	{ 205, 100, 298 },
	{ 305, 100, 298 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002F0A4[] = {
	{ -0.19518f, -0.9759f, -0.09759f },
	{ -0.183613f, -0.979238f, -0.085899f },
	{ -0.183819f, -0.981065f, -0.061017f },
	{ -0.148109f, -0.987741f, -0.049319f },
	{ -0.111815f, -0.993652f, -0.012355f },
	{ -0.135745f, -0.986962f, -0.08648399f },
	{ -0.09934f, -0.9938149f, -0.049641f },
	{ -0.062377f, -0.997975f, -0.01245f },
	{ -0.099227f, -0.992273f, -0.07449199f },
	{ -0.068453f, -0.9967009f, -0.043594f },
	{ -0.087052f, -0.994267f, -0.062088f },
	{ -0.04969f, -0.993808f, -0.099381f },
	{ -0.148321f, -0.988804f, -0.016346f },
	{ -0.037293f, -0.9973609f, -0.062299f },
	{ -0.024984f, -0.999376f, -0.024984f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002F158 = { vertex_0002EFF0, normal_0002F0A4, LengthOfArray<Sint32>(vertex_0002EFF0), meshlist_0002EFD8, matlist_0002EF98, LengthOfArray<Uint16>(meshlist_0002EFD8), LengthOfArray<Uint16>(matlist_0002EF98), { 205, 125, 48 }, 269.2582f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002F180 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002F158, 1995, 0, -7698, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002F1B4[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002F1C8[] = {
	6, 1, 12, 3, 13, 11, 15,
	0x8000u | 5, 4, 1, 7, 12, 14,
	8, 9, 10, 2, 8, 0, 6, 4, 5,
	7, 11, 9, 3, 2, 1, 0, 4
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002F204[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0002F1C8, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002F21C[] = {
	{ -43, 0, 36 },
	{ -16, 0, -46 },
	{ -43, 100, 36 },
	{ -16, 100, -46 },
	{ -43, -100, 36 },
	{ -65, -100, 145 },
	{ -65, 0, 145 },
	{ -16, -100, -46 },
	{ -65, 100, 145 },
	{ -43, 200, 36 },
	{ -65, 200, 145 },
	{ -16, 200, -46 },
	{ 60, 0, -129 },
	{ 60, 100, -129 },
	{ 60, -100, -129 },
	{ 60, 200, -129 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002F2DC[] = {
	{ 0.966743f, 0, 0.25575f },
	{ 0.862936f, 0, 0.505313f },
	{ 0.966743f, 0, 0.25575f },
	{ 0.862936f, 0, 0.505313f },
	{ 0.966743f, 0, 0.25575f },
	{ 0.980233f, 0, 0.197845f },
	{ 0.980233f, 0, 0.197845f },
	{ 0.862936f, 0, 0.505313f },
	{ 0.980233f, 0, 0.197845f },
	{ 0.966743f, 0, 0.25575f },
	{ 0.980233f, 0, 0.197845f },
	{ 0.862936f, 0, 0.505313f },
	{ 0.737523f, 0, 0.675322f },
	{ 0.737523f, 0, 0.675322f },
	{ 0.737523f, 0, 0.675322f },
	{ 0.737523f, 0, 0.675322f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002F39C = { vertex_0002F21C, normal_0002F2DC, LengthOfArray<Sint32>(vertex_0002F21C), meshlist_0002F204, matlist_0002F1B4, LengthOfArray<Uint16>(meshlist_0002F204), LengthOfArray<Uint16>(matlist_0002F1B4), { -2.5f, 50, 8 }, 203.1477f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002F3C4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002F39C, -235, 0, -9345, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002F3F8[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002F40C[] = {
	6, 9, 13, 12, 8, 9, 13,
	0x8000u | 6, 14, 6, 7, 14, 15, 7,
	5, 13, 4, 12, 5, 13,
	0x8000u | 6, 14, 13, 6, 5, 13, 4,
	0x8000u | 8, 11, 3, 10, 2, 9, 1, 8, 0,
	0x8000u | 5, 6, 13, 14, 9, 10,
	0x8000u | 8, 14, 10, 15, 11, 14, 10, 13, 9
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002F474[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_0002F40C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002F48C[] = {
	{ -100, -100, 94 },
	{ -100, 0, 94 },
	{ -100, 100, 94 },
	{ -100, 200, 94 },
	{ 190, -100, 100 },
	{ 190, 0, 100 },
	{ 190, 100, 100 },
	{ 190, 200, 100 },
	{ -7, -100, 82 },
	{ -7, 0, 82 },
	{ -7, 100, 82 },
	{ -7, 200, 82 },
	{ 100, -100, 83 },
	{ 100, 0, 83 },
	{ 100, 100, 83 },
	{ 100, 200, 83 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002F54C[] = {
	{ -0.127971f, 0, -0.991778f },
	{ -0.127971f, 0, -0.991778f },
	{ -0.127971f, 0, -0.991778f },
	{ -0.127971f, 0, -0.991778f },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ -0.127971f, 0, -0.991778f },
	{ -0.127971f, 0, -0.991778f },
	{ -0.127971f, 0, -0.991778f },
	{ -0.127971f, 0, -0.991778f },
	{ 0 },
	{ 0.077888f, 0, -0.996962f },
	{ -1, 0, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002F60C = { vertex_0002F48C, normal_0002F54C, LengthOfArray<Sint32>(vertex_0002F48C), meshlist_0002F474, matlist_0002F3F8, LengthOfArray<Uint16>(meshlist_0002F474), LengthOfArray<Uint16>(matlist_0002F3F8), { 45, 50, 91 }, 150.2697f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002F634 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002F60C, 500, 0, -8500, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002F668[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002F67C[] = {
	0x8000u | 12, 10, 4, 11, 5, 9, 3, 8, 2, 7, 1, 6, 0,
	0x8000u | 12, 4, 16, 5, 17, 3, 15, 2, 14, 1, 13, 0, 12,
	0x8000u | 12, 6, 18, 7, 19, 8, 20, 9, 21, 11, 22, 10, 23
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002F6CC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0002F67C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002F6E4[] = {
	{ -250, 100, -50 },
	{ -150, 100, -50 },
	{ -50, 100, -50 },
	{ 50, 100, -50 },
	{ 250, 100, -50 },
	{ 150, 100, -50 },
	{ -250, 100, 50 },
	{ -150, 100, 50 },
	{ -50, 100, 50 },
	{ 50, 100, 50 },
	{ 250, 100, 50 },
	{ 150, 100, 50 },
	{ -250, 100, -150 },
	{ -150, 100, -150 },
	{ -50, 100, -150 },
	{ 50, 100, -150 },
	{ 250, 100, -150 },
	{ 150, 100, -150 },
	{ -250, 100, 150 },
	{ -150, 100, 150 },
	{ -50, 100, 150 },
	{ 50, 100, 150 },
	{ 150, 100, 150 },
	{ 250, 100, 150 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002F804[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002F924 = { vertex_0002F6E4, normal_0002F804, LengthOfArray<Sint32>(vertex_0002F6E4), meshlist_0002F6CC, matlist_0002F668, LengthOfArray<Uint16>(meshlist_0002F6CC), LengthOfArray<Uint16>(matlist_0002F668), { 0, 100, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002F94C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002F924, 2550, 0, -7550, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002F980[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002F994[] = {
	0x8000u | 12, 10, 4, 11, 5, 9, 3, 8, 2, 7, 1, 6, 0,
	0x8000u | 12, 4, 16, 5, 17, 3, 15, 2, 14, 1, 13, 0, 12,
	0x8000u | 12, 6, 18, 7, 19, 8, 20, 9, 21, 11, 22, 10, 23
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002F9E4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0002F994, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002F9FC[] = {
	{ -250, 100, -50 },
	{ -150, 100, -50 },
	{ -50, 100, -50 },
	{ 50, 100, -50 },
	{ 250, 100, -50 },
	{ 150, 100, -50 },
	{ -250, 100, 50 },
	{ -150, 100, 50 },
	{ -50, 100, 50 },
	{ 50, 100, 50 },
	{ 250, 100, 50 },
	{ 150, 100, 50 },
	{ -250, 100, -150 },
	{ -150, 100, -150 },
	{ -50, 100, -150 },
	{ 50, 100, -150 },
	{ 250, 100, -150 },
	{ 150, 100, -150 },
	{ -250, 100, 150 },
	{ -150, 100, 150 },
	{ -50, 100, 150 },
	{ 50, 100, 150 },
	{ 150, 100, 150 },
	{ 250, 100, 150 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002FB1C[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002FC3C = { vertex_0002F9FC, normal_0002FB1C, LengthOfArray<Sint32>(vertex_0002F9FC), meshlist_0002F9E4, matlist_0002F980, LengthOfArray<Uint16>(meshlist_0002F9E4), LengthOfArray<Uint16>(matlist_0002F980), { 0, 100, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002FC64 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002FC3C, 3050, 0, -7550, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002FC98[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002FCAC[] = {
	3, 8, 7, 6,
	9, 13, 0, 3, 1, 4, 2, 5, 12, 14,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002FCF4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0002FCAC, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002FD0C[] = {
	{ -67.99984f, 0, 103 },
	{ -44.99984f, 0, 10.99998f },
	{ 6.000164f, 0, -88.00002f },
	{ -67.99984f, 100, 103 },
	{ -44.99984f, 100, 10.99998f },
	{ 6.000164f, 100, -88.00002f },
	{ -67.99984f, -100, 103 },
	{ -91.99984f, -100, 195 },
	{ -91.99984f, 0, 195 },
	{ -44.99984f, -100, 10.99998f },
	{ 6.000164f, -100, -88.00002f },
	{ 100.0002f, -100, -180 },
	{ 100.0002f, 0, -180 },
	{ -91.99984f, 100, 195 },
	{ 100.0002f, 100, -180 },
	{ -67.99984f, 200, 103 },
	{ -91.99984f, 200, 195 },
	{ -44.99984f, 200, 10.99998f },
	{ 6.000164f, 200, -88.00002f },
	{ 100.0002f, 200, -180 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002FDFC[] = {
	{ 0.968893f, 0, 0.247482f },
	{ 0.935778f, 0, 0.35259f },
	{ 0.8045239f, 0, 0.59392f },
	{ 0.968893f, 0, 0.247482f },
	{ 0.935778f, 0, 0.35259f },
	{ 0.8045239f, 0, 0.59392f },
	{ 0.968893f, 0, 0.247482f },
	{ 0.967617f, 0, 0.252422f },
	{ 0.967617f, 0, 0.252422f },
	{ 0.935778f, 0, 0.35259f },
	{ 0.8045239f, 0, 0.59392f },
	{ 0.699463f, 0, 0.714669f },
	{ 0.699463f, 0, 0.714669f },
	{ 0.967617f, 0, 0.252422f },
	{ 0.699463f, 0, 0.714669f },
	{ 0.968893f, 0, 0.247482f },
	{ 0.967617f, 0, 0.252422f },
	{ 0.935778f, 0, 0.35259f },
	{ 0.8045239f, 0, 0.59392f },
	{ 0.699463f, 0, 0.714669f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002FEEC = { vertex_0002FD0C, normal_0002FDFC, LengthOfArray<Sint32>(vertex_0002FD0C), meshlist_0002FCF4, matlist_0002FC98, LengthOfArray<Uint16>(meshlist_0002FCF4), LengthOfArray<Uint16>(matlist_0002FC98), { 4.00016f, 50, 7.499985f }, 210.6472f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002FF14 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002FEEC, 520, 0, -9400, 0, 0xFFFFC001, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002FF48[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0002FF5C[] = {
	8, 0, 1, 2, 3, 10, 11, 15, 16,
	11, 17, 18, 12, 13, 5, 7, 6, 9, 8, 23, 21,
	3, 4, 0, 2,
	8, 15, 17, 10, 12, 2, 5, 4, 6,
	0x8000u | 6, 18, 13, 19, 14, 20, 22,
	0x8000u | 6, 13, 7, 14, 9, 22, 23
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002FFBC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_0002FF5C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002FFD4[] = {
	{ -150, -100, -150 },
	{ -250, -100, -250 },
	{ -150, 0, -150 },
	{ -250, 0, -250 },
	{ -50, -100, -50 },
	{ -50, 0, -50 },
	{ 50, -100, 50 },
	{ 50, 0, 50 },
	{ 150, -100, 150 },
	{ 150, 0, 150 },
	{ -150, 100, -150 },
	{ -250, 100, -250 },
	{ -50, 100, -50 },
	{ 50, 100, 50 },
	{ 150, 100, 150 },
	{ -150, 200, -150 },
	{ -250, 200, -250 },
	{ -50, 200, -50 },
	{ 50, 200, 50 },
	{ 150, 200, 150 },
	{ 250, 200, 250 },
	{ 250, -100, 250 },
	{ 250, 100, 250 },
	{ 250, 0, 250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000300F4[] = {
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00030214 = { vertex_0002FFD4, normal_000300F4, LengthOfArray<Sint32>(vertex_0002FFD4), meshlist_0002FFBC, matlist_0002FF48, LengthOfArray<Uint16>(meshlist_0002FFBC), LengthOfArray<Uint16>(matlist_0002FF48), { 0, 50, -0.00008f }, 353.5534f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0003023C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00030214, 940, 0, -8150, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00030270[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00030284[] = {
	6, 5, 4, 1, 0, 9, 8,
	6, 10, 11, 2, 3, 6, 7,
	6, 6, 5, 2, 1, 10, 9,
	0x8000u | 8, 4, 12, 5, 13, 6, 14, 7, 15
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000302C0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00030284, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000302D8[] = {
	{ -250, 100, -50 },
	{ -150, 100, -50 },
	{ -50, 100, -50 },
	{ 50, 100, -50 },
	{ -250, 100, 50 },
	{ -150, 100, 50 },
	{ -50, 100, 50 },
	{ 50, 100, 50 },
	{ -250, 100, -150 },
	{ -150, 100, -150 },
	{ -50, 100, -150 },
	{ 50, 100, -150 },
	{ -250, 100, 150 },
	{ -150, 100, 150 },
	{ -50, 100, 150 },
	{ 50, 100, 150 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00030398[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00030458 = { vertex_000302D8, normal_00030398, LengthOfArray<Sint32>(vertex_000302D8), meshlist_000302C0, matlist_00030270, LengthOfArray<Uint16>(meshlist_000302C0), LengthOfArray<Uint16>(matlist_00030270), { -100, 100, 0 }, 212.132f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00030480 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00030458, 3550, 0, -7550, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000304B4[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000304C8[] = {
	8, 0, 1, 2, 3, 10, 11, 15, 16,
	11, 17, 18, 12, 13, 5, 7, 6, 9, 8, 23, 21,
	3, 4, 0, 2,
	8, 15, 17, 10, 12, 2, 5, 4, 6,
	0x8000u | 6, 18, 13, 19, 14, 20, 22,
	0x8000u | 6, 13, 7, 14, 9, 22, 23
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00030528[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_000304C8, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00030540[] = {
	{ -150, -100, -150 },
	{ -250, -100, -250 },
	{ -150, 0, -150 },
	{ -250, 0, -250 },
	{ -50, -100, -50 },
	{ -50, 0, -50 },
	{ 50, -100, 50 },
	{ 50, 0, 50 },
	{ 150, -100, 150 },
	{ 150, 0, 150 },
	{ -150, 100, -150 },
	{ -250, 100, -250 },
	{ -50, 100, -50 },
	{ 50, 100, 50 },
	{ 150, 100, 150 },
	{ -150, 200, -150 },
	{ -250, 200, -250 },
	{ -50, 200, -50 },
	{ 50, 200, 50 },
	{ 150, 200, 150 },
	{ 250, 200, 250 },
	{ 250, -100, 250 },
	{ 250, 100, 250 },
	{ 250, 0, 250 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00030660[] = {
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00030780 = { vertex_00030540, normal_00030660, LengthOfArray<Sint32>(vertex_00030540), meshlist_00030528, matlist_000304B4, LengthOfArray<Uint16>(meshlist_00030528), LengthOfArray<Uint16>(matlist_000304B4), { 0, 50, -0.00008f }, 353.5534f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000307A8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00030780, 1440, 0, -7650, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000307DC[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000307F0[] = {
	3, 8, 7, 6,
	9, 13, 0, 3, 1, 4, 2, 5, 12, 14,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00030838[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000307F0, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00030850[] = {
	{ -99.99998f, 0, -100.0001f },
	{ 0.000014f, 0, -0.000107f },
	{ 100, 0, 99.99989f },
	{ -99.99998f, 100, -100.0001f },
	{ 0.000014f, 100, -0.000107f },
	{ 100, 100, 99.99989f },
	{ -99.99998f, -100, -100.0001f },
	{ -200, -100, -200.0001f },
	{ -200, 0, -200.0001f },
	{ 0.000014f, -100, -0.000107f },
	{ 100, -100, 99.99989f },
	{ 200, -100, 199.9999f },
	{ 200, 0, 199.9999f },
	{ -200, 100, -200.0001f },
	{ 200, 100, 199.9999f },
	{ -99.99998f, 200, -100.0001f },
	{ -200, 200, -200.0001f },
	{ 0.000014f, 200, -0.000107f },
	{ 100, 200, 99.99989f },
	{ 200, 200, 199.9999f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00030940[] = {
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00030A30 = { vertex_00030850, normal_00030940, LengthOfArray<Sint32>(vertex_00030850), meshlist_00030838, matlist_000307DC, LengthOfArray<Uint16>(meshlist_00030838), LengthOfArray<Uint16>(matlist_000307DC), { 0.000015f, 50, -0.000114f }, 282.8427f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00030A58 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00030A30, 899.9984f, 0, -9100, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00030A8C[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00030AA0[] = {
	3, 8, 7, 6,
	9, 13, 0, 3, 1, 4, 2, 5, 12, 14,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00030AE8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00030AA0, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00030B00[] = {
	{ -100.0001f, 0, -100.0002f },
	{ -0.00061f, 0, -0.000155f },
	{ 99.99994f, 0, 99.99984f },
	{ -100.0001f, 100, -100.0002f },
	{ -0.00061f, 100, -0.000155f },
	{ 99.99994f, 100, 99.99984f },
	{ -100.0001f, -100, -100.0002f },
	{ -200, -100, -200.0002f },
	{ -200, 0, -200.0002f },
	{ -0.00061f, -100, -0.000155f },
	{ 99.99994f, -100, 99.99984f },
	{ 199.9999f, -100, 199.9998f },
	{ 199.9999f, 0, 199.9998f },
	{ -200, 100, -200.0002f },
	{ 199.9999f, 100, 199.9998f },
	{ -100.0001f, 200, -100.0002f },
	{ -200, 200, -200.0002f },
	{ -0.00061f, 200, -0.000155f },
	{ 99.99994f, 200, 99.99984f },
	{ 199.9999f, 200, 199.9998f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00030BF0[] = {
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00030CE0 = { vertex_00030B00, normal_00030BF0, LengthOfArray<Sint32>(vertex_00030B00), meshlist_00030AE8, matlist_00030A8C, LengthOfArray<Uint16>(meshlist_00030AE8), LengthOfArray<Uint16>(matlist_00030A8C), { -0.00061f, 50, -0.00016f }, 282.8427f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00030D08 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00030CE0, 1299.999f, 0, -8700, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00030D3C[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00030D50[] = {
	3, 8, 7, 6,
	7, 13, 0, 3, 1, 4, 2, 5,
	7, 13, 8, 0, 6, 1, 9, 2,
	3, 11, 12, 10,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19,
	6, 9, 10, 2, 12, 5, 14
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00030DA4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_00030D50, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00030DBC[] = {
	{ -100, 0, -100.0002f },
	{ -0.00013f, 0, -0.000203f },
	{ 99.99998f, 0, 99.99979f },
	{ -100, 100, -100.0002f },
	{ -0.00013f, 100, -0.000203f },
	{ 99.99998f, 100, 99.99979f },
	{ -100, -100, -100.0002f },
	{ -200, -100, -200.0002f },
	{ -200, 0, -200.0002f },
	{ -0.00013f, -100, -0.000203f },
	{ 99.99998f, -100, 99.99979f },
	{ 200, -100, 199.9998f },
	{ 200, 0, 199.9998f },
	{ -200, 100, -200.0002f },
	{ 200, 100, 199.9998f },
	{ -100, 200, -100.0002f },
	{ -200, 200, -200.0002f },
	{ -0.00013f, 200, -0.000203f },
	{ 99.99998f, 200, 99.99979f },
	{ 200, 200, 199.9998f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00030EAC[] = {
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00030F9C = { vertex_00030DBC, normal_00030EAC, LengthOfArray<Sint32>(vertex_00030DBC), meshlist_00030DA4, matlist_00030D3C, LengthOfArray<Uint16>(meshlist_00030DA4), LengthOfArray<Uint16>(matlist_00030D3C), { -0.00015f, 50, -0.000206f }, 282.8427f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00030FC4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00030F9C, 1699.999f, 0, -8300, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00030FF8[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0003100C[] = {
	3, 8, 7, 6,
	7, 13, 0, 3, 1, 4, 2, 5,
	7, 13, 8, 0, 6, 1, 9, 2,
	3, 11, 12, 10,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19,
	6, 9, 10, 2, 12, 5, 14
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00031060[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_0003100C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00031078[] = {
	{ -99.99991f, 0, -100 },
	{ 0.000082f, 0, -0.00048f },
	{ 100.0001f, 0, 99.99995f },
	{ -99.99991f, 100, -100 },
	{ 0.000082f, 100, -0.00048f },
	{ 100.0001f, 100, 99.99995f },
	{ -99.99991f, -100, -100 },
	{ -199.9999f, -100, -200 },
	{ -199.9999f, 0, -200 },
	{ 0.000082f, -100, -0.00048f },
	{ 100.0001f, -100, 99.99995f },
	{ 200.0001f, -100, 199.9999f },
	{ 200.0001f, 0, 199.9999f },
	{ -199.9999f, 100, -200 },
	{ 200.0001f, 100, 199.9999f },
	{ -99.99991f, 200, -100 },
	{ -199.9999f, 200, -200 },
	{ 0.000082f, 200, -0.00048f },
	{ 100.0001f, 200, 99.99995f },
	{ 200.0001f, 200, 199.9999f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00031168[] = {
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00031258 = { vertex_00031078, normal_00031168, LengthOfArray<Sint32>(vertex_00031078), meshlist_00031060, matlist_00030FF8, LengthOfArray<Uint16>(meshlist_00031060), LengthOfArray<Uint16>(matlist_00030FF8), { 0.000076f, 50, -0.00053f }, 282.8427f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00031280 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00031258, 4499.999f, 0, -7500, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000312B4[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000312C8[] = {
	3, 8, 7, 6,
	9, 13, 0, 3, 1, 4, 2, 5, 12, 14,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00031310[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000312C8, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00031328[] = {
	{ -99.99986f, 0, -100.0001f },
	{ 0.00013f, 0, -0.00096f },
	{ 100.0001f, 0, 99.9999f },
	{ -99.99986f, 100, -100.0001f },
	{ 0.00013f, 100, -0.00096f },
	{ 100.0001f, 100, 99.9999f },
	{ -99.99986f, -100, -100.0001f },
	{ -199.9999f, -100, -200.0001f },
	{ -199.9999f, 0, -200.0001f },
	{ 0.00013f, -100, -0.00096f },
	{ 100.0001f, -100, 99.9999f },
	{ 200.0001f, -100, 199.9999f },
	{ 200.0001f, 0, 199.9999f },
	{ -199.9999f, 100, -200.0001f },
	{ 200.0001f, 100, 199.9999f },
	{ -99.99986f, 200, -100.0001f },
	{ -199.9999f, 200, -200.0001f },
	{ 0.00013f, 200, -0.00096f },
	{ 100.0001f, 200, 99.9999f },
	{ 200.0001f, 200, 199.9999f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00031418[] = {
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00031508 = { vertex_00031328, normal_00031418, LengthOfArray<Sint32>(vertex_00031328), meshlist_00031310, matlist_000312B4, LengthOfArray<Uint16>(meshlist_00031310), LengthOfArray<Uint16>(matlist_000312B4), { 0.000137f, 50, -0.00099f }, 282.8427f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00031530 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00031508, 4899.999f, 0, -7100, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00031564[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00031578[] = {
	3, 8, 7, 6,
	9, 13, 0, 3, 1, 4, 2, 5, 12, 14,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000315C0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00031578, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000315D8[] = {
	{ -100, 0, -99.99976f },
	{ -0.00021f, 0, 0.000237f },
	{ 99.99997f, 0, 100.0002f },
	{ -100, 100, -99.99976f },
	{ -0.00021f, 100, 0.000237f },
	{ 99.99997f, 100, 100.0002f },
	{ -100, -100, -99.99976f },
	{ -200, -100, -199.9998f },
	{ -200, 0, -199.9998f },
	{ -0.00021f, -100, 0.000237f },
	{ 99.99997f, -100, 100.0002f },
	{ 200, -100, 200.0002f },
	{ 200, 0, 200.0002f },
	{ -200, 100, -199.9998f },
	{ 200, 100, 200.0002f },
	{ -100, 200, -99.99976f },
	{ -200, 200, -199.9998f },
	{ -0.00021f, 200, 0.000237f },
	{ 99.99997f, 200, 100.0002f },
	{ 200, 200, 200.0002f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000316C8[] = {
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000317B8 = { vertex_000315D8, normal_000316C8, LengthOfArray<Sint32>(vertex_000315D8), meshlist_000315C0, matlist_00031564, LengthOfArray<Uint16>(meshlist_000315C0), LengthOfArray<Uint16>(matlist_00031564), { -0.00015f, 50, 0.000237f }, 282.8426f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000317E0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000317B8, 4599.998f, 0, -800, 0, 0xFFFFC001, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00031814[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00031828[] = {
	3, 8, 7, 6,
	9, 13, 0, 3, 1, 4, 2, 5, 12, 14,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00031870[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00031828, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00031888[] = {
	{ -100, 0, -99.99997f },
	{ -0.00003f, 0, 0.000031f },
	{ 100, 0, 100 },
	{ -100, 100, -99.99997f },
	{ -0.00003f, 100, 0.000031f },
	{ 100, 100, 100 },
	{ -100, -100, -99.99997f },
	{ -200, -100, -200 },
	{ -200, 0, -200 },
	{ -0.00003f, -100, 0.000031f },
	{ 100, -100, 100 },
	{ 161, -100, 200 },
	{ 161, 0, 200 },
	{ -200, 100, -200 },
	{ 161, 100, 200 },
	{ -100, 200, -99.99997f },
	{ -200, 200, -200 },
	{ -0.00003f, 200, 0.000031f },
	{ 100, 200, 100 },
	{ 161, 200, 200 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00031978[] = {
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.785948f, 0, 0.618293f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.785948f, 0, 0.618293f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.785948f, 0, 0.618293f },
	{ -0.853704f, 0, 0.520759f },
	{ -0.853704f, 0, 0.520759f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.853704f, 0, 0.520759f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.785948f, 0, 0.618293f },
	{ -0.853704f, 0, 0.520759f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00031A68 = { vertex_00031888, normal_00031978, LengthOfArray<Sint32>(vertex_00031888), meshlist_00031870, matlist_00031814, LengthOfArray<Uint16>(meshlist_00031870), LengthOfArray<Uint16>(matlist_00031814), { -19.5f, 50, 0.000023f }, 269.4072f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00031A90 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00031A68, 3489.998f, 0, 100.0001f, 0, 0xFFFFC001, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00031AC4[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00031AD8[] = {
	0x8000u | 7, 1, 2, 3, 10, 11, 14, 15,
	0x8000u | 6, 7, 13, 5, 12, 2, 10,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1,
	0x8000u | 9, 14, 10, 16, 12, 17, 13, 18, 7, 9
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00031B20[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00031AD8, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00031B38[] = {
	{ -125, -100, -0.00005f },
	{ -250, -100, -0.00011f },
	{ -125, 0, -0.00005f },
	{ -250, 0, -0.00011f },
	{ 0, -100, 0 },
	{ 0 },
	{ 125, -100, 0.000005f },
	{ 125, 0, 0.000005f },
	{ 250, -100, 0.000011f },
	{ 250, 0, 0.000011f },
	{ -125, 100, -0.00005f },
	{ -250, 100, -0.00011f },
	{ 0, 100, 0 },
	{ 125, 100, 0.000005f },
	{ -125, 185, -0.00005f },
	{ -250, 200, -0.00011f },
	{ 0, 145, 0 },
	{ 125, 115, 0.000005f },
	{ 250, 100, 0.000011f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00031C1C[] = {
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
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00031D00 = { vertex_00031B38, normal_00031C1C, LengthOfArray<Sint32>(vertex_00031B38), meshlist_00031B20, matlist_00031AC4, LengthOfArray<Uint16>(meshlist_00031B20), LengthOfArray<Uint16>(matlist_00031AC4), { 0, 50, 0 }, 250, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00031D28 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00031D00, 1940, 0, -7400, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00031D5C[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00031D70[] = {
	3, 8, 7, 6,
	9, 13, 0, 3, 1, 4, 2, 5, 12, 18,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 13, 15, 3, 14, 4, 16, 5, 17, 18
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00031DB8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00031D70, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00031DD0[] = {
	{ -99.99996f, 0, -99.99976f },
	{ 0.000035f, 0, 0.000238f },
	{ 100, 0, 100.0002f },
	{ -99.99996f, 100, -99.99976f },
	{ 0.000035f, 100, 0.000238f },
	{ 100, 100, 100.0002f },
	{ -99.99996f, -100, -99.99976f },
	{ -200, -100, -199.9998f },
	{ -200, 0, -199.9998f },
	{ 0.000035f, -100, 0.000238f },
	{ 100, -100, 100.0002f },
	{ 200, -100, 200.0002f },
	{ 200, 0, 200.0002f },
	{ -200, 100, -199.9998f },
	{ -99.99996f, 185, -99.99976f },
	{ -200, 200, -199.9998f },
	{ 0.000035f, 150, 0.000238f },
	{ 100, 120, 100.0002f },
	{ 200, 100, 200.0002f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00031EB4[] = {
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00031F98 = { vertex_00031DD0, normal_00031EB4, LengthOfArray<Sint32>(vertex_00031DD0), meshlist_00031DB8, matlist_00031D5C, LengthOfArray<Uint16>(meshlist_00031DB8), LengthOfArray<Uint16>(matlist_00031D5C), { 0.000031f, 50, 0.000237f }, 282.8429f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00031FC0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00031F98, 2099.999f, 0, -7900, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00031FF4[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00032008[] = {
	3, 3, 2, 1,
	0x8000u | 10, 9, 14, 7, 13, 5, 12, 2, 10, 3, 11,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0003203C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00032008, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00032054[] = {
	{ -125, -100, -0.00005f },
	{ -250, -100, -0.00011f },
	{ -125, 0, -0.00005f },
	{ -250, 0, -0.00011f },
	{ 0, -100, 0 },
	{ 0 },
	{ 125, -100, 0.000005f },
	{ 125, 0, 0.000005f },
	{ 250, -100, 0.000011f },
	{ 250, 0, 0.000011f },
	{ -125, 100, -0.00005f },
	{ -250, 100, -0.00011f },
	{ 0, 100, 0 },
	{ 125, 100, 0.000005f },
	{ 250, 100, 0.000011f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00032108[] = {
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
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000321BC = { vertex_00032054, normal_00032108, LengthOfArray<Sint32>(vertex_00032054), meshlist_0003203C, matlist_00031FF4, LengthOfArray<Uint16>(meshlist_0003203C), LengthOfArray<Uint16>(matlist_00031FF4), { 0 }, 250, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000321E4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000321BC, 2440, 0, -7400, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00032218[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0003222C[] = {
	3, 3, 2, 1,
	0x8000u | 10, 9, 14, 7, 13, 5, 12, 2, 10, 3, 11,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00032260[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0003222C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00032278[] = {
	{ -125, -100, -0.00005f },
	{ -250, -100, -0.00011f },
	{ -125, 0, -0.00005f },
	{ -250, 0, -0.00011f },
	{ 0, -100, 0 },
	{ 0 },
	{ 125, -100, 0.000005f },
	{ 125, 0, 0.000005f },
	{ 250, -100, 0.000011f },
	{ 250, 0, 0.000011f },
	{ -125, 100, -0.00005f },
	{ -250, 100, -0.00011f },
	{ 0, 100, 0 },
	{ 125, 100, 0.000005f },
	{ 250, 100, 0.000011f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0003232C[] = {
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
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000323E0 = { vertex_00032278, normal_0003232C, LengthOfArray<Sint32>(vertex_00032278), meshlist_00032260, matlist_00032218, LengthOfArray<Uint16>(meshlist_00032260), LengthOfArray<Uint16>(matlist_00032218), { 0 }, 250, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00032408 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000323E0, 2940, 0, -7400, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0003243C[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00032450[] = {
	3, 3, 2, 1,
	0x8000u | 10, 9, 14, 7, 13, 5, 12, 2, 10, 3, 11,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00032484[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00032450, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0003249C[] = {
	{ -125, -100, -0.00005f },
	{ -250, -100, -0.00011f },
	{ -125, 0, -0.00005f },
	{ -250, 0, -0.00011f },
	{ 0, -100, 0 },
	{ 0 },
	{ 125, -100, 0.000005f },
	{ 125, 0, 0.000005f },
	{ 250, -100, 0.000011f },
	{ 250, 0, 0.000011f },
	{ -125, 100, -0.00005f },
	{ -250, 100, -0.00011f },
	{ 0, 100, 0 },
	{ 125, 100, 0.000005f },
	{ 250, 100, 0.000011f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00032550[] = {
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
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00032604 = { vertex_0003249C, normal_00032550, LengthOfArray<Sint32>(vertex_0003249C), meshlist_00032484, matlist_0003243C, LengthOfArray<Uint16>(meshlist_00032484), LengthOfArray<Uint16>(matlist_0003243C), { 0 }, 250, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0003262C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00032604, 3440, 0, -7400, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00032660[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00032674[] = {
	3, 5, 4, 3,
	10, 13, 5, 0, 3, 1, 6, 2, 7, 9, 8,
	0x8000u | 9, 14, 9, 12, 2, 11, 1, 10, 0, 13
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000326A8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00032674, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000326C0[] = {
	{ -124.9999f, 0, 0.000179f },
	{ 0.000059f, 0, 0.000184f },
	{ 125.0001f, 0, 0.00019f },
	{ -124.9999f, -100, 0.000179f },
	{ -249.9999f, -100, 0.000173f },
	{ -249.9999f, 0, 0.000173f },
	{ 0.000059f, -100, 0.000184f },
	{ 125.0001f, -100, 0.00019f },
	{ 250, -100, 0.000195f },
	{ 250, 0, 0.000195f },
	{ -124.9999f, 100, 0.000179f },
	{ 0.000059f, 100, 0.000184f },
	{ 125.0001f, 100, 0.00019f },
	{ -249.9999f, 100, 0.000173f },
	{ 250, 100, 0.000195f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00032774[] = {
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
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00032828 = { vertex_000326C0, normal_00032774, LengthOfArray<Sint32>(vertex_000326C0), meshlist_000326A8, matlist_00032660, LengthOfArray<Uint16>(meshlist_000326A8), LengthOfArray<Uint16>(matlist_00032660), { 0.000061f, 0, 0.000184f }, 250, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00032850 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00032828, 2549.999f, 0, -7700, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00032884[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00032898[] = {
	0x8000u | 9, 8, 9, 6, 7, 5, 12, 11, 16, 15,
	7, 0, 1, 2, 3, 10, 18, 14,
	3, 4, 0, 2,
	6, 16, 17, 12, 13, 7, 9,
	8, 6, 4, 5, 2, 11, 10, 15, 14
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000328E4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_00032898, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000328FC[] = {
	{ -100, -100, -150 },
	{ -210, -100, -150 },
	{ -100, 0, -150 },
	{ -210, 0, -150 },
	{ 0, -100, -50 },
	{ 0, 0, -50 },
	{ 100, -100, 50 },
	{ 100, 0, 50 },
	{ 200, -100, 150 },
	{ 200, 0, 150 },
	{ -100, 100, -150 },
	{ 0, 100, -50 },
	{ 100, 100, 50 },
	{ 200, 100, 150 },
	{ -100, 120, -150 },
	{ 0, 150, -50 },
	{ 100, 185, 50 },
	{ 200, 200, 150 },
	{ -210, 100, -150 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000329E0[] = {
	{ 0.382683f, 0, -0.92388f },
	{ 0, 0, -1 },
	{ 0.382683f, 0, -0.92388f },
	{ 0, 0, -1 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.382684f, 0, -0.92388f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.429065f, 0, -0.903273f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00032AC4 = { vertex_000328FC, normal_000329E0, LengthOfArray<Sint32>(vertex_000328FC), meshlist_000328E4, matlist_00032884, LengthOfArray<Uint16>(meshlist_000328E4), LengthOfArray<Uint16>(matlist_00032884), { -5, 50, -0.00008f }, 254.0177f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00032AEC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00032AC4, 3900, 0, -7250, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00032B20[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00032B34[] = {
	3, 5, 4, 3,
	10, 13, 5, 0, 3, 1, 6, 2, 7, 9, 8,
	0x8000u | 9, 14, 9, 12, 2, 11, 1, 10, 0, 13
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00032B68[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00032B34, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00032B80[] = {
	{ -124.9999f, 0, 0.00006f },
	{ 0.000059f, 0, 0.00006499999f },
	{ 125.0001f, 0, 0.00007099999f },
	{ -124.9999f, -100, 0.00006f },
	{ -249.9999f, -100, 0.000054f },
	{ -249.9999f, 0, 0.000054f },
	{ 0.000059f, -100, 0.00006499999f },
	{ 125.0001f, -100, 0.00007099999f },
	{ 250, -100, 0.000076f },
	{ 250, 0, 0.000076f },
	{ -124.9999f, 100, 0.00006f },
	{ 0.000059f, 100, 0.00006499999f },
	{ 125.0001f, 100, 0.00007099999f },
	{ -249.9999f, 100, 0.000054f },
	{ 250, 100, 0.000076f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00032C34[] = {
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
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00032CE8 = { vertex_00032B80, normal_00032C34, LengthOfArray<Sint32>(vertex_00032B80), meshlist_00032B68, matlist_00032B20, LengthOfArray<Uint16>(meshlist_00032B68), LengthOfArray<Uint16>(matlist_00032B20), { 0.000061f, 0, 0.00006499999f }, 250, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00032D10 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00032CE8, 3549.999f, 0, -7700, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00032D44[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00032D58[] = {
	3, 5, 4, 3,
	10, 13, 5, 0, 3, 1, 6, 2, 7, 9, 8,
	0x8000u | 9, 14, 9, 12, 2, 11, 1, 10, 0, 13
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00032D8C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00032D58, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00032DA4[] = {
	{ -124.9999f, 0, 0.000119f },
	{ 0.000059f, 0, 0.000125f },
	{ 125.0001f, 0, 0.00013f },
	{ -124.9999f, -100, 0.000119f },
	{ -249.9999f, -100, 0.000114f },
	{ -249.9999f, 0, 0.000114f },
	{ 0.000059f, -100, 0.000125f },
	{ 125.0001f, -100, 0.00013f },
	{ 250, -100, 0.000136f },
	{ 250, 0, 0.000136f },
	{ -124.9999f, 100, 0.000119f },
	{ 0.000059f, 100, 0.000125f },
	{ 125.0001f, 100, 0.00013f },
	{ -249.9999f, 100, 0.000114f },
	{ 250, 100, 0.000136f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00032E58[] = {
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
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00032F0C = { vertex_00032DA4, normal_00032E58, LengthOfArray<Sint32>(vertex_00032DA4), meshlist_00032D8C, matlist_00032D44, LengthOfArray<Uint16>(meshlist_00032D8C), LengthOfArray<Uint16>(matlist_00032D44), { 0.000061f, 0, 0.000125f }, 250, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00032F34 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00032F0C, 3049.999f, 0, -7700, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00032F68[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00032F7C[] = {
	3, 8, 7, 6,
	0x8000u | 10, 0, 18, 3, 14, 4, 15, 5, 16, 13, 17,
	10, 18, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 8, 13, 12, 5, 2, 4, 1, 3, 0
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00032FC4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00032F7C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00032FDC[] = {
	{ -124.9999f, 0, 0 },
	{ 0.000059f, 0, 0.000005f },
	{ 125.0001f, 0, 0.000011f },
	{ -124.9999f, 100, 0 },
	{ 0.000059f, 100, 0.000005f },
	{ 125.0001f, 100, 0.000011f },
	{ -124.9999f, -100, 0 },
	{ -249.9999f, -100, -0.00005f },
	{ -249.9999f, 0, -0.00005f },
	{ 0.000059f, -100, 0.000005f },
	{ 125.0001f, -100, 0.000011f },
	{ 250, -100, 0.000016f },
	{ 250, 0, 0.000016f },
	{ 250, 100, 0.000016f },
	{ -124.9999f, 120, 0 },
	{ 0.000059f, 150, 0.000005f },
	{ 125.0001f, 180, 0.000011f },
	{ 250, 200, 0.000016f },
	{ -249.9999f, 100, -0.00005f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000330C0[] = {
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
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000331A4 = { vertex_00032FDC, normal_000330C0, LengthOfArray<Sint32>(vertex_00032FDC), meshlist_00032FC4, matlist_00032F68, LengthOfArray<Uint16>(meshlist_00032FC4), LengthOfArray<Uint16>(matlist_00032F68), { 0.000061f, 50, 0.000005f }, 250, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000331CC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000331A4, 4049.999f, 0, -7700, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00033200[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00033214[] = {
	8, 23, 16, 22, 18, 21, 19, 20, 17,
	3, 6, 4, 7,
	0x8000u | 7, 7, 5, 4, 3, 2, 1, 0,
	0x8000u | 8, 7, 11, 5, 10, 3, 9, 1, 8,
	0x8000u | 8, 11, 15, 10, 14, 9, 13, 8, 12,
	8, 15, 23, 11, 22, 7, 21, 6, 20
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00033274[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_00033214, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0003328C[] = {
	{ -200, -150, -250 },
	{ -200, -50, -250 },
	{ -90, -150, -156 },
	{ -90, -50, -156 },
	{ -43, -150, -50 },
	{ -43, -50, -50 },
	{ -7, -150, 50 },
	{ -7, -50, 50 },
	{ -200, 50, -250 },
	{ -90, 50, -156 },
	{ -43, 50, -50 },
	{ -7, 50, 50 },
	{ -200, 150, -250 },
	{ -90, 150, -156 },
	{ -43, 150, -50 },
	{ -7, 150, 50 },
	{ 51, 150, 250 },
	{ 51, -150, 250 },
	{ 51, 50, 250 },
	{ 51, -50, 250 },
	{ 26, -150, 150 },
	{ 26, -50, 150 },
	{ 26, 50, 150 },
	{ 26, 150, 150 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000333AC[] = {
	{ 0.6496519f, 0, -0.760231f },
	{ 0.6496519f, 0, -0.760231f },
	{ 0.801792f, 0, -0.597604f },
	{ 0.801792f, 0, -0.597604f },
	{ 0.928125f, 0, -0.372269f },
	{ 0.928125f, 0, -0.372269f },
	{ 0.945343f, 0, -0.326078f },
	{ 0.945343f, 0, -0.326078f },
	{ 0.6496519f, 0, -0.760231f },
	{ 0.801792f, 0, -0.597604f },
	{ 0.928125f, 0, -0.372269f },
	{ 0.945343f, 0, -0.326078f },
	{ 0.6496519f, 0, -0.760231f },
	{ 0.801792f, 0, -0.597604f },
	{ 0.928125f, 0, -0.372269f },
	{ 0.945343f, 0, -0.326078f },
	{ 0.970143f, 0, -0.242536f },
	{ 0.970143f, 0, -0.242536f },
	{ 0.970143f, 0, -0.242536f },
	{ 0.970143f, 0, -0.242536f },
	{ 0.960539f, 0, -0.278146f },
	{ 0.960539f, 0, -0.278146f },
	{ 0.960539f, 0, -0.278146f },
	{ 0.960539f, 0, -0.278146f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000334CC = { vertex_0003328C, normal_000333AC, LengthOfArray<Sint32>(vertex_0003328C), meshlist_00033274, matlist_00033200, LengthOfArray<Uint16>(meshlist_00033274), LengthOfArray<Uint16>(matlist_00033200), { -74.5f, 0, 0 }, 291.5476f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000334F4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000334CC, 4300, 50, -6850, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00033528[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0003353C[] = {
	3, 8, 7, 6,
	10, 13, 8, 0, 6, 1, 9, 2, 10, 12, 11,
	0x8000u | 9, 14, 12, 5, 2, 4, 1, 3, 0, 13,
	0x8000u | 10, 13, 16, 3, 15, 4, 17, 5, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00033584[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0003353C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0003359C[] = {
	{ -0.000105f, 0, 124.9999f },
	{ 99.99989f, 0, 24.99996f },
	{ 199.9999f, 0, -75.00005f },
	{ -0.000105f, 100, 124.9999f },
	{ 99.99989f, 100, 24.99996f },
	{ 199.9999f, 100, -75.00005f },
	{ -0.000105f, -100, 124.9999f },
	{ -0.000102f, -100, 224.9999f },
	{ -0.000102f, 0, 224.9999f },
	{ 99.99989f, -100, 24.99996f },
	{ 199.9999f, -100, -75.00005f },
	{ 299.9999f, -100, -175 },
	{ 299.9999f, 0, -175 },
	{ -0.000102f, 100, 224.9999f },
	{ 299.9999f, 100, -175 },
	{ -0.000105f, 200, 124.9999f },
	{ -0.000102f, 200, 224.9999f },
	{ 99.99989f, 200, 24.99996f },
	{ 199.9999f, 200, -75.00005f },
	{ 299.9999f, 200, -175 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0003368C[] = {
	{ 0.92388f, 0, 0.382683f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.92388f, 0, 0.382683f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.92388f, 0, 0.382683f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.92388f, 0, 0.382683f },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0003377C = { vertex_0003359C, normal_0003368C, LengthOfArray<Sint32>(vertex_0003359C), meshlist_00033584, matlist_00033528, LengthOfArray<Uint16>(meshlist_00033584), LengthOfArray<Uint16>(matlist_00033528), { 149.9999f, 50, 24.99995f }, 250, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000337A4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0003377C, 5099.999f, 0, -1175, 0, 0xFFFF8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000337D8[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000337EC[] = {
	0x8000u | 10, 28, 25, 27, 24, 22, 20, 14, 19, 13, 18,
	8, 0, 1, 2, 3, 10, 11, 15, 16,
	15, 17, 18, 12, 13, 5, 7, 6, 9, 8, 23, 21, 30, 31, 29, 26,
	6, 15, 17, 10, 12, 2, 5,
	0x8000u | 5, 6, 5, 4, 2, 0,
	0x8000u | 10, 13, 7, 14, 9, 22, 23, 27, 30, 28, 29
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00033864[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_000337EC, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0003387C[] = {
	{ 112.0001f, -100, 183.0002f },
	{ 200.0001f, -100, 202.0002f },
	{ 112.0001f, 0, 183.0002f },
	{ 200.0001f, 0, 202.0002f },
	{ 20.00009f, -100, 162.0002f },
	{ 20.00009f, 0, 162.0002f },
	{ -62.9999f, -100, 102.0002f },
	{ -62.9999f, 0, 102.0002f },
	{ -97.9999f, -100, 11.00021f },
	{ -97.9999f, 0, 11.00021f },
	{ 112.0001f, 100, 183.0002f },
	{ 200.0001f, 100, 202.0002f },
	{ 20.00009f, 100, 162.0002f },
	{ -62.9999f, 100, 102.0002f },
	{ -97.9999f, 100, 11.00021f },
	{ 112.0001f, 200, 183.0002f },
	{ 200.0001f, 200, 202.0002f },
	{ 20.00009f, 200, 162.0002f },
	{ -62.9999f, 200, 102.0002f },
	{ -97.9999f, 200, 11.00021f },
	{ -136.9999f, 200, -87.99979f },
	{ -136.9999f, -100, -87.99979f },
	{ -136.9999f, 100, -87.99979f },
	{ -136.9999f, 0, -87.99979f },
	{ -174.9999f, 200, -180.9998f },
	{ -215.9999f, 200, -274.9998f },
	{ -215.9999f, -100, -274.9998f },
	{ -174.9999f, 100, -180.9998f },
	{ -215.9999f, 100, -274.9998f },
	{ -215.9999f, 0, -274.9998f },
	{ -174.9999f, 0, -180.9998f },
	{ -174.9999f, -100, -180.9998f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000339FC[] = {
	{ -0.216795f, 0, 0.976217f },
	{ -0.211046f, 0, 0.9774759f },
	{ -0.216795f, 0, 0.976217f },
	{ -0.211046f, 0, 0.9774759f },
	{ -0.412476f, 0, 0.9109679f },
	{ -0.412476f, 0, 0.9109679f },
	{ -0.792424f, 0, 0.60997f },
	{ -0.792424f, 0, 0.60997f },
	{ -0.9318849f, 0, 0.362755f },
	{ -0.9318849f, 0, 0.362755f },
	{ -0.216795f, 0, 0.976217f },
	{ -0.211046f, 0, 0.9774759f },
	{ -0.412476f, 0, 0.9109679f },
	{ -0.792424f, 0, 0.60997f },
	{ -0.9318849f, 0, 0.362755f },
	{ -0.216795f, 0, 0.976217f },
	{ -0.211046f, 0, 0.9774759f },
	{ -0.412476f, 0, 0.9109679f },
	{ -0.792424f, 0, 0.60997f },
	{ -0.9318849f, 0, 0.362755f },
	{ -0.928075f, 0, 0.372392f },
	{ -0.928075f, 0, 0.372392f },
	{ -0.928075f, 0, 0.372392f },
	{ -0.928075f, 0, 0.372392f },
	{ -0.921218f, 0, 0.389047f },
	{ -0.916604f, 0, 0.399796f },
	{ -0.916604f, 0, 0.399796f },
	{ -0.921218f, 0, 0.389047f },
	{ -0.916604f, 0, 0.399796f },
	{ -0.916604f, 0, 0.399796f },
	{ -0.921218f, 0, 0.389047f },
	{ -0.921218f, 0, 0.389047f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00033B7C = { vertex_0003387C, normal_000339FC, LengthOfArray<Sint32>(vertex_0003387C), meshlist_00033864, matlist_000337D8, LengthOfArray<Uint16>(meshlist_00033864), LengthOfArray<Uint16>(matlist_000337D8), { -7.999908f, 50, -36.49979f }, 316.459f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00033BA4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00033B7C, 4174.998f, 0, -899.9999f, 0, 0x3FFF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00033BD8[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00033BEC[] = {
	3, 10, 2, 9,
	8, 6, 9, 1, 2, 4, 5, 14, 15,
	6, 12, 13, 3, 11, 0, 8,
	9, 14, 12, 4, 3, 1, 0, 6, 8, 7
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00033C28[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00033BEC, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00033C40[] = {
	{ 69.99992f, 0, 49.99997f },
	{ -35.00006f, 0, 49.99998f },
	{ -140, 0, 35.99999f },
	{ 69.99992f, 100, 49.99997f },
	{ -35.00006f, 100, 49.99998f },
	{ -140, 100, 35.99999f },
	{ 69.99992f, -100, 49.99997f },
	{ 169.9999f, -100, -50.00003f },
	{ 169.9999f, 0, -50.00003f },
	{ -35.00006f, -100, 49.99998f },
	{ -140, -100, 35.99999f },
	{ 169.9999f, 100, -50.00003f },
	{ 69.99992f, 200, 49.99997f },
	{ 169.9999f, 200, -50.00003f },
	{ -35.00006f, 200, 49.99998f },
	{ -140, 200, 35.99999f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00033D00[] = {
	{ -0.382683f, 0, -0.92388f },
	{ 0.066227f, 0, -0.997805f },
	{ 0.132164f, 0, -0.991228f },
	{ -0.382683f, 0, -0.92388f },
	{ 0.066227f, 0, -0.997805f },
	{ 0.132164f, 0, -0.991228f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.066227f, 0, -0.997805f },
	{ 0.132164f, 0, -0.991228f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.066227f, 0, -0.997805f },
	{ 0.132164f, 0, -0.991228f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00033DC0 = { vertex_00033C40, normal_00033D00, LengthOfArray<Sint32>(vertex_00033C40), meshlist_00033C28, matlist_00033BD8, LengthOfArray<Uint16>(meshlist_00033C28), LengthOfArray<Uint16>(matlist_00033BD8), { 14.99994f, 50, -0.00023f }, 162.865f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00033DE8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00033DC0, 4230, 0, -550.0001f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00033E1C[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00033E30[] = {
	0x8000u | 12, 14, 19, 13, 18, 12, 17, 10, 15, 11, 16, 22, 20,
	5, 2, 1, 3, 21, 23,
	9, 9, 8, 7, 6, 5, 4, 2, 0, 1,
	0x8000u | 12, 9, 14, 7, 13, 5, 12, 2, 10, 3, 11, 23, 22
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00033E84[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00033E30, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00033E9C[] = {
	{ 24.99995f, -100, 62.99958f },
	{ 81.99995f, -100, 161.9996f },
	{ 24.99995f, 0, 62.99958f },
	{ 81.99995f, 0, 161.9996f },
	{ -35.00005f, -100, -46.00041f },
	{ -35.00005f, 0, -46.00041f },
	{ -93.00005f, -100, -152.0004f },
	{ -93.00005f, 0, -152.0004f },
	{ -150, -100, -250.0004f },
	{ -150, 0, -250.0004f },
	{ 24.99995f, 100, 62.99958f },
	{ 81.99995f, 100, 161.9996f },
	{ -35.00005f, 100, -46.00041f },
	{ -93.00005f, 100, -152.0004f },
	{ -150, 100, -250.0004f },
	{ 24.99995f, 200, 62.99958f },
	{ 81.99995f, 200, 161.9996f },
	{ -35.00005f, 200, -46.00041f },
	{ -93.00005f, 200, -152.0004f },
	{ -150, 200, -250.0004f },
	{ 133.9999f, 200, 249.9996f },
	{ 133.9999f, -100, 249.9996f },
	{ 133.9999f, 100, 249.9996f },
	{ 133.9999f, 0, 249.9996f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00033FBC[] = {
	{ -0.871374f, 0, 0.490618f },
	{ -0.8637879f, 0, 0.503855f },
	{ -0.871374f, 0, 0.490618f },
	{ -0.8637879f, 0, 0.503855f },
	{ -0.876655f, 0, 0.48112f },
	{ -0.876655f, 0, 0.48112f },
	{ -0.870915f, 0, 0.491435f },
	{ -0.870915f, 0, 0.491435f },
	{ -0.864418f, 0, 0.5027739f },
	{ -0.864418f, 0, 0.5027739f },
	{ -0.871374f, 0, 0.490618f },
	{ -0.8637879f, 0, 0.503855f },
	{ -0.876655f, 0, 0.48112f },
	{ -0.870915f, 0, 0.491435f },
	{ -0.864418f, 0, 0.5027739f },
	{ -0.871374f, 0, 0.490618f },
	{ -0.8637879f, 0, 0.503855f },
	{ -0.876655f, 0, 0.48112f },
	{ -0.870915f, 0, 0.491435f },
	{ -0.864418f, 0, 0.5027739f },
	{ -0.860927f, 0, 0.508729f },
	{ -0.860927f, 0, 0.508729f },
	{ -0.860927f, 0, 0.508729f },
	{ -0.860927f, 0, 0.508729f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000340DC = { vertex_00033E9C, normal_00033FBC, LengthOfArray<Sint32>(vertex_00033E9C), meshlist_00033E84, matlist_00033E1C, LengthOfArray<Uint16>(meshlist_00033E84), LengthOfArray<Uint16>(matlist_00033E1C), { -8.000046f, 50, -0.000412f }, 287.5134f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00034104 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000340DC, 3649.996f, 0, -550.0004f, 0, 0x3FFF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00034138[] = {
	{ { 0xB2B2B2B2 }, { 0xFFFFFFFF }, 11, 90, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0003414C[] = {
	8, 1, 2, 5, 6, 9, 10, 13, 14,
	8, 2, 3, 6, 7, 10, 11, 14, 15,
	8, 13, 12, 9, 8, 5, 4, 1, 0
};

NJS_TEX uv_00034184[] = {
	{ 0, 169 },
	{ 0, 84 },
	{ 85, 169 },
	{ 85, 84 },
	{ 170, 169 },
	{ 170, 84 },
	{ 255, 169 },
	{ 255, 84 },
	{ 0, 84 },
	{ 0 },
	{ 85, 84 },
	{ 85, 0 },
	{ 170, 84 },
	{ 170, 0 },
	{ 255, 84 },
	{ 255, 0 },
	{ 255, 169 },
	{ 255, 255 },
	{ 170, 169 },
	{ 170, 255 },
	{ 85, 169 },
	{ 85, 255 },
	{ 0, 169 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000341E4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0003414C, NULL, NULL, NULL, uv_00034184, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000341FC[] = {
	{ -7500, 0, -7500 },
	{ -7500, 0, -2500 },
	{ -7500, 0, 2500 },
	{ -7500, 0, 7500 },
	{ -2500, 0, -7500 },
	{ -2500, 0, -2500 },
	{ -2500, 0, 2500 },
	{ -2500, 0, 7500 },
	{ 2500, 0, -7500 },
	{ 2500, 0, -2500 },
	{ 2500, 0, 2500 },
	{ 2500, 0, 7500 },
	{ 7500, 0, -7500 },
	{ 7500, 0, -2500 },
	{ 7500, 0, 2500 },
	{ 7500, 0, 7500 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000342BC[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0003437C = { vertex_000341FC, normal_000342BC, LengthOfArray<Sint32>(vertex_000341FC), meshlist_000341E4, matlist_00034138, LengthOfArray<Uint16>(meshlist_000341E4), LengthOfArray<Uint16>(matlist_00034138), { 0 }, 10606.6f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000343A4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0003437C, 2530, -90, -4750, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000343D8[] = {
	{ { 0xE5B2B2B2 }, { 0xFFFFFFFF }, 11, 90, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000343EC[] = {
	8, 1, 2, 5, 6, 9, 10, 13, 14,
	8, 2, 3, 6, 7, 10, 11, 14, 15,
	8, 13, 12, 9, 8, 5, 4, 1, 0
};

NJS_TEX uv_00034424[] = {
	{ 0, 169 },
	{ 0, 84 },
	{ 85, 169 },
	{ 85, 84 },
	{ 170, 169 },
	{ 170, 84 },
	{ 255, 169 },
	{ 255, 84 },
	{ 0, 84 },
	{ 0 },
	{ 85, 84 },
	{ 85, 0 },
	{ 170, 84 },
	{ 170, 0 },
	{ 255, 84 },
	{ 255, 0 },
	{ 255, 169 },
	{ 255, 255 },
	{ 170, 169 },
	{ 170, 255 },
	{ 85, 169 },
	{ 85, 255 },
	{ 0, 169 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00034484[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000343EC, NULL, NULL, NULL, uv_00034424, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0003449C[] = {
	{ -7500, 0, -7500 },
	{ -7500, 0, -2500 },
	{ -7500, 0, 2500 },
	{ -7500, 0, 7500 },
	{ -2500, 0, -7500 },
	{ -2500, 0, -2500 },
	{ -2500, 0, 2500 },
	{ -2500, 0, 7500 },
	{ 2500, 0, -7500 },
	{ 2500, 0, -2500 },
	{ 2500, 0, 2500 },
	{ 2500, 0, 7500 },
	{ 7500, 0, -7500 },
	{ 7500, 0, -2500 },
	{ 7500, 0, 2500 },
	{ 7500, 0, 7500 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0003455C[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0003461C = { vertex_0003449C, normal_0003455C, LengthOfArray<Sint32>(vertex_0003449C), meshlist_00034484, matlist_000343D8, LengthOfArray<Uint16>(meshlist_00034484), LengthOfArray<Uint16>(matlist_000343D8), { 0 }, 10606.6f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00034644 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0003461C, 2530, -160, -4750, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00034678[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 90, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0003468C[] = {
	8, 1, 2, 5, 6, 9, 10, 13, 14,
	8, 2, 3, 6, 7, 10, 11, 14, 15,
	8, 13, 12, 9, 8, 5, 4, 1, 0
};

NJS_TEX uv_000346C4[] = {
	{ 0, 169 },
	{ 0, 84 },
	{ 85, 169 },
	{ 85, 84 },
	{ 170, 169 },
	{ 170, 84 },
	{ 255, 169 },
	{ 255, 84 },
	{ 0, 84 },
	{ 0 },
	{ 85, 84 },
	{ 85, 0 },
	{ 170, 84 },
	{ 170, 0 },
	{ 255, 84 },
	{ 255, 0 },
	{ 255, 169 },
	{ 255, 255 },
	{ 170, 169 },
	{ 170, 255 },
	{ 85, 169 },
	{ 85, 255 },
	{ 0, 169 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00034724[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0003468C, NULL, NULL, NULL, uv_000346C4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0003473C[] = {
	{ -7500, 0, -7500 },
	{ -7500, 0, -2500 },
	{ -7500, 0, 2500 },
	{ -7500, 0, 7500 },
	{ -2500, 0, -7500 },
	{ -2500, 0, -2500 },
	{ -2500, 0, 2500 },
	{ -2500, 0, 7500 },
	{ 2500, 0, -7500 },
	{ 2500, 0, -2500 },
	{ 2500, 0, 2500 },
	{ 2500, 0, 7500 },
	{ 7500, 0, -7500 },
	{ 7500, 0, -2500 },
	{ 7500, 0, 2500 },
	{ 7500, 0, 7500 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000347FC[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000348BC = { vertex_0003473C, normal_000347FC, LengthOfArray<Sint32>(vertex_0003473C), meshlist_00034724, matlist_00034678, LengthOfArray<Uint16>(meshlist_00034724), LengthOfArray<Uint16>(matlist_00034678), { 0 }, 10606.6f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000348E4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000348BC, 2530, -200, -4750, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00034918[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00034A08[] = {
	6, 110, 108, 114, 132, 133, 134,
	3, 114, 111, 110,
	8, 125, 124, 127, 122, 123, 129, 120, 118,
	3, 127, 126, 125,
	5, 119, 0, 3, 1, 2,
	4, 129, 128, 118, 119,
	0x8000u | 8, 122, 129, 121, 128, 116, 119, 117, 0,
	0x8000u | 9, 133, 135, 134, 136, 130, 115, 109, 113, 112,
	0x8000u | 5, 135, 137, 136, 131, 115
};

extern "C" __declspec(dllexport) Sint16 poly_00034A80[] = {
	4, 114, 142, 111, 143,
	4, 113, 147, 115, 149
};

extern "C" __declspec(dllexport) Sint16 poly_00034A94[] = {
	4, 110, 144, 108, 145,
	4, 109, 146, 112, 148
};

extern "C" __declspec(dllexport) Sint16 poly_00034AA8[] = {
	3, 126, 9, 125,
	0x8000u | 5, 1, 2, 139, 138, 6,
	5, 103, 144, 143, 110, 111,
	0x8000u | 28, 144, 102, 103, 94, 95, 86, 87, 78, 79, 70, 71, 62, 63, 54, 55, 46, 47, 38, 39, 30, 31, 22, 23, 14, 15, 6, 7, 138,
	5, 104, 147, 148, 113, 112,
	0x8000u | 28, 147, 105, 104, 97, 96, 89, 88, 81, 80, 73, 72, 65, 64, 57, 56, 49, 48, 41, 40, 33, 32, 25, 24, 17, 16, 9, 8, 125
};

extern "C" __declspec(dllexport) Sint16 poly_00034B48[] = {
	3, 99, 98, 107,
	8, 98, 106, 107, 135, 149, 137, 115, 131,
	5, 135, 106, 133, 142, 114
};

extern "C" __declspec(dllexport) Sint16 poly_00034B6E[] = {
	0x8000u | 5, 130, 109, 134, 146, 101,
	6, 134, 132, 101, 100, 93, 92,
	3, 150, 5, 140,
	0x8000u | 25, 140, 4, 5, 12, 13, 20, 21, 28, 29, 36, 37, 44, 45, 52, 53, 60, 61, 68, 69, 76, 77, 84, 85, 92, 93,
	4, 100, 132, 145, 108
};

extern "C" __declspec(dllexport) Sint16 poly_00034BCE[] = {
	3, 138, 7, 141,
	3, 142, 106, 143,
	0x8000u | 28, 143, 103, 106, 95, 98, 87, 90, 79, 82, 71, 74, 63, 66, 55, 58, 47, 50, 39, 42, 31, 34, 23, 26, 15, 18, 7, 10, 141,
	3, 147, 105, 149,
	0x8000u | 27, 149, 107, 105, 99, 97, 91, 89, 83, 81, 75, 73, 67, 65, 59, 57, 51, 49, 43, 41, 35, 33, 27, 25, 19, 17, 11, 9
};

extern "C" __declspec(dllexport) Sint16 poly_00034C58[] = {
	3, 140, 4, 139,
	0x8000u | 28, 139, 6, 4, 14, 12, 22, 20, 30, 28, 38, 36, 46, 44, 54, 52, 62, 60, 70, 68, 78, 76, 86, 84, 94, 92, 102, 100, 145,
	3, 144, 102, 145,
	3, 146, 101, 148,
	0x8000u | 27, 148, 104, 101, 96, 93, 88, 85, 80, 77, 72, 69, 64, 61, 56, 53, 48, 45, 40, 37, 32, 29, 24, 21, 16, 13, 8, 5
};

extern "C" __declspec(dllexport) Sint16 poly_00034CE2[] = {
	10, 98, 99, 90, 91, 82, 83, 74, 75, 66, 67,
	16, 66, 67, 58, 59, 50, 51, 42, 43, 34, 35, 26, 27, 18, 19, 10, 11,
	0x8000u | 9, 3, 119, 141, 118, 10, 120, 11, 123, 127
};

extern "C" __declspec(dllexport) Sint16 poly_00034D2E[] = {
	0x8000u | 5, 5, 8, 150, 125, 124,
	4, 0, 140, 1, 139
};

extern "C" __declspec(dllexport) Sint16 poly_00034D44[] = {
	4, 9, 126, 11, 127,
	4, 2, 138, 3, 141
};

extern "C" __declspec(dllexport) Sint16 poly_00034D58[] = {
	8, 121, 122, 116, 124, 117, 150, 0, 140
};

NJS_TEX uv_00034D6C[] = {
	{ 67, 0 },
	{ 67, 84 },
	{ 3, 254 },
	{ 260, 85 },
	{ 240, 254 },
	{ 482, 85 },
	{ 3, 254 },
	{ 3, 0 },
	{ 67, 0 },
	{ 960, 0 },
	{ 960, 84 },
	{ 1016, 254 },
	{ 913, 85 },
	{ 908, 253 },
	{ 750, 169 },
	{ 750, 253 },
	{ 529, 253 },
	{ 1016, 254 },
	{ 1016, 0 },
	{ 960, 0 },
	{ 204, 253 },
	{ 67, 84 },
	{ 3, 254 },
	{ 67, 0 },
	{ 3, 0 },
	{ 750, 169 },
	{ 529, 169 },
	{ 529, 253 },
	{ 204, 253 },
	{ 913, 85 },
	{ 750, 169 },
	{ 744, 85 },
	{ 529, 169 },
	{ 506, 85 },
	{ 204, 253 },
	{ 225, 85 },
	{ 67, 84 },
	{ 240, 254 },
	{ 460, 254 },
	{ 482, 85 },
	{ 573, 169 },
	{ 668, 85 },
	{ 1016, 254 },
	{ 960, 84 },
	{ 1016, 0 },
	{ 960, 0 },
	{ 460, 254 },
	{ 516, 254 },
	{ 573, 169 },
	{ 573, 254 },
	{ 1016, 254 }
};

NJS_TEX uv_00034E38[] = {
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 }
};

NJS_TEX uv_00034E58[] = {
	{ 3, 1 },
	{ 506, 1 },
	{ 3, 253 },
	{ 506, 253 },
	{ 3, 253 },
	{ 506, 253 },
	{ 3, 1 },
	{ 506, 1 }
};

NJS_TEX uv_00034E78[] = {
	{ 7400, 255 },
	{ 7301, 255 },
	{ 7520, 0 },
	{ 7650, 0 },
	{ 7650, 255 },
	{ 7321, 0 },
	{ 7314, 255 },
	{ 6991, 0 },
	{ 252, 255 },
	{ 132, 0 },
	{ 126, 255 },
	{ 0 },
	{ 0, 255 },
	{ 132, 0 },
	{ 264, 0 },
	{ 252, 255 },
	{ 530, 0 },
	{ 504, 255 },
	{ 796, 0 },
	{ 757, 255 },
	{ 1061, 0 },
	{ 1009, 255 },
	{ 1328, 0 },
	{ 1261, 255 },
	{ 1593, 0 },
	{ 1514, 255 },
	{ 3044, 0 },
	{ 2964, 255 },
	{ 3702, 0 },
	{ 3633, 255 },
	{ 4360, 0 },
	{ 4303, 255 },
	{ 5017, 0 },
	{ 4972, 255 },
	{ 5675, 0 },
	{ 5641, 255 },
	{ 6334, 0 },
	{ 6311, 255 },
	{ 6991, 0 },
	{ 6980, 255 },
	{ 7314, 255 },
	{ 562, 0 },
	{ 284, 255 },
	{ 280, 0 },
	{ 0, 255 },
	{ 0 },
	{ 284, 255 },
	{ 568, 255 },
	{ 562, 0 },
	{ 1136, 255 },
	{ 1126, 0 },
	{ 1704, 255 },
	{ 1689, 0 },
	{ 2272, 255 },
	{ 2253, 0 },
	{ 2839, 255 },
	{ 2817, 0 },
	{ 3408, 255 },
	{ 3380, 0 },
	{ 4923, 255 },
	{ 4919, 0 },
	{ 5321, 255 },
	{ 5335, 0 },
	{ 5716, 255 },
	{ 5751, 0 },
	{ 6113, 255 },
	{ 6168, 0 },
	{ 6509, 255 },
	{ 6584, 0 },
	{ 6906, 255 },
	{ 7000, 0 },
	{ 7301, 255 },
	{ 7416, 0 },
	{ 7520, 0 }
};

NJS_TEX uv_00034FA0[] = {
	{ 253, 247 },
	{ 1, 247 },
	{ 253, -262 },
	{ 1, 247 },
	{ 1, -7 },
	{ 253, -262 },
	{ 113, -176 },
	{ 253, -517 },
	{ 121, -318 },
	{ 253, -757 },
	{ 128, -460 },
	{ 113, -176 },
	{ 1, -7 },
	{ 65, -71 },
	{ 1, -135 },
	{ 1, -262 }
};

NJS_TEX uv_00034FE0[] = {
	{ 346, 143 },
	{ 508, 253 },
	{ 256, -253 },
	{ 508, -1 },
	{ 508, -253 },
	{ 256, 253 },
	{ 129, 253 },
	{ 508, 253 },
	{ 1, 253 },
	{ 508, -253 },
	{ 1, -253 },
	{ 510, 255 },
	{ 510, 205 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, 106 },
	{ 510, 205 },
	{ 0, -189 },
	{ 510, 6 },
	{ 0, -486 },
	{ 510, -192 },
	{ 0, -781 },
	{ 510, -392 },
	{ 0, -1078 },
	{ 510, -590 },
	{ 0, -1375 },
	{ 510, -789 },
	{ 0, -1671 },
	{ 510, -988 },
	{ 0, -2326 },
	{ 510, -1726 },
	{ 0, -2444 },
	{ 510, -1994 },
	{ 0, -2565 },
	{ 510, -2264 },
	{ 0, -2684 },
	{ 510, -2534 },
	{ 0, -2805 },
	{ 510, -2805 },
	{ 1, 253 },
	{ 129, -253 },
	{ 1, -1 },
	{ 1, -253 }
};

NJS_TEX uv_0003508C[] = {
	{ 6885, 0 },
	{ 6564, 0 },
	{ 6885, 255 },
	{ 0, 255 },
	{ 120, 255 },
	{ 0 },
	{ 0 },
	{ 120, 0 },
	{ 120, 255 },
	{ 362, 0 },
	{ 362, 255 },
	{ 604, 0 },
	{ 604, 255 },
	{ 845, 0 },
	{ 845, 255 },
	{ 1088, 0 },
	{ 1088, 255 },
	{ 1330, 0 },
	{ 1330, 255 },
	{ 2718, 0 },
	{ 2718, 255 },
	{ 3359, 0 },
	{ 3359, 255 },
	{ 4000, 0 },
	{ 4000, 255 },
	{ 4641, 0 },
	{ 4641, 255 },
	{ 5282, 0 },
	{ 5282, 255 },
	{ 5923, 0 },
	{ 5923, 255 },
	{ 6564, 0 },
	{ 6564, 255 },
	{ 6885, 255 },
	{ 0 },
	{ 278, 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 278, 255 },
	{ 278, 0 },
	{ 835, 255 },
	{ 835, 0 },
	{ 1393, 255 },
	{ 1393, 0 },
	{ 1950, 255 },
	{ 1950, 0 },
	{ 2506, 255 },
	{ 2506, 0 },
	{ 3064, 255 },
	{ 3064, 0 },
	{ 4552, 255 },
	{ 4552, 0 },
	{ 4940, 255 },
	{ 4940, 0 },
	{ 5328, 255 },
	{ 5328, 0 },
	{ 5717, 255 },
	{ 5717, 0 },
	{ 6107, 255 },
	{ 6107, 0 },
	{ 6496, 255 },
	{ 6496, 0 },
	{ 6885, 255 },
	{ 6885, 0 }
};

NJS_TEX uv_0003518C[] = {
	{ 7140, 255 },
	{ 6813, 255 },
	{ 7140, 0 },
	{ 7140, 0 },
	{ 6813, 0 },
	{ 6813, 255 },
	{ 6158, 0 },
	{ 6158, 255 },
	{ 5506, 0 },
	{ 5506, 255 },
	{ 4852, 0 },
	{ 4852, 255 },
	{ 4199, 0 },
	{ 4199, 255 },
	{ 3545, 0 },
	{ 3545, 255 },
	{ 2891, 0 },
	{ 2891, 255 },
	{ 1450, 0 },
	{ 1450, 255 },
	{ 1187, 0 },
	{ 1187, 255 },
	{ 923, 0 },
	{ 923, 255 },
	{ 658, 0 },
	{ 658, 255 },
	{ 394, 0 },
	{ 394, 255 },
	{ 131, 0 },
	{ 131, 255 },
	{ 0, 255 },
	{ 0 },
	{ 131, 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 280, 255 },
	{ 0 },
	{ 0 },
	{ 280, 0 },
	{ 280, 255 },
	{ 844, 0 },
	{ 844, 255 },
	{ 1409, 0 },
	{ 1409, 255 },
	{ 1973, 0 },
	{ 1973, 255 },
	{ 2536, 0 },
	{ 2536, 255 },
	{ 3101, 0 },
	{ 3101, 255 },
	{ 4642, 0 },
	{ 4642, 255 },
	{ 5058, 0 },
	{ 5058, 255 },
	{ 5474, 0 },
	{ 5474, 255 },
	{ 5891, 0 },
	{ 5891, 255 },
	{ 6307, 0 },
	{ 6307, 255 },
	{ 6723, 0 },
	{ 6723, 255 },
	{ 7140, 0 },
	{ 7140, 255 }
};

NJS_TEX uv_0003528C[] = {
	{ 0, 2071 },
	{ 254, 2071 },
	{ 0, 2581 },
	{ 254, 2581 },
	{ 0, 3091 },
	{ 254, 3091 },
	{ 0, 3601 },
	{ 254, 3601 },
	{ 0, 4048 },
	{ 254, 4048 },
	{ 0, 31 },
	{ 254, 31 },
	{ 0, 1051 },
	{ 254, 1051 },
	{ 0, 1561 },
	{ 254, 1561 },
	{ 0, 2071 },
	{ 254, 2071 },
	{ 0, 2581 },
	{ 254, 2581 },
	{ 0, 3091 },
	{ 254, 3091 },
	{ 0, 3601 },
	{ 254, 3601 },
	{ 0, 4048 },
	{ 254, 4048 },
	{ 0, 506 },
	{ 44, 404 },
	{ 0, 258 },
	{ 127, 458 },
	{ 0, 3 },
	{ 187, 386 },
	{ 254, 3 },
	{ 229, 354 },
	{ 254, 258 }
};

NJS_TEX uv_00035318[] = {
	{ 1, 253 },
	{ 1, 1 },
	{ 129, 253 },
	{ 129, 1 },
	{ 253, 253 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 1 },
	{ 1, 1 }
};

NJS_TEX uv_0003533C[] = {
	{ 1, 1 },
	{ 161, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 253 },
	{ 1, 253 }
};

NJS_TEX uv_0003535C[] = {
	{ 382, 229 },
	{ 476, 222 },
	{ 244, 210 },
	{ 508, 237 },
	{ 80, 217 },
	{ 508, 253 },
	{ 1, 190 },
	{ 1, 253 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0003537C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 9, poly_00034A08, NULL, NULL, NULL, uv_00034D6C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00034A80, NULL, NULL, NULL, uv_00034E38, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_00034A94, NULL, NULL, NULL, uv_00034E58, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 6, poly_00034AA8, NULL, NULL, NULL, uv_00034E78, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 3, poly_00034B48, NULL, NULL, NULL, uv_00034FA0, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 5, poly_00034B6E, NULL, NULL, NULL, uv_00034FE0, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 5, poly_00034BCE, NULL, NULL, NULL, uv_0003508C, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 5, poly_00034C58, NULL, NULL, NULL, uv_0003518C, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 3, poly_00034CE2, NULL, NULL, NULL, uv_0003528C, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 2, poly_00034D2E, NULL, NULL, NULL, uv_00035318, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 2, poly_00034D44, NULL, NULL, NULL, uv_0003533C, NULL },
	{ NJD_MESHSET_TRIMESH | 11, 1, poly_00034D58, NULL, NULL, NULL, uv_0003535C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0003549C[] = {
	{ 103.0748f, 150, 267.32f },
	{ 103.0748f, 155, 267.32f },
	{ 101.3646f, 155, 272.0186f },
	{ 101.3646f, 140, 272.0186f },
	{ 62, 150, 248.1666f },
	{ 114.4999f, 150, 157.2341f },
	{ 62, 155, 248.1666f },
	{ 59.49994f, 155, 252.4967f },
	{ 114.4999f, 155, 157.2341f },
	{ 116.9999f, 155, 152.9039f },
	{ 59.49994f, 140, 252.4967f },
	{ 116.9999f, 140, 152.9039f },
	{ 24.87524f, 150, 222.1715f },
	{ 92.36786f, 150, 141.7371f },
	{ 24.87524f, 155, 222.1715f },
	{ 21.66125f, 155, 226.0018f },
	{ 92.36786f, 155, 141.7371f },
	{ 95.58178f, 155, 137.9067f },
	{ 21.66125f, 140, 226.0018f },
	{ 95.58178f, 140, 137.9067f },
	{ -7.171509f, 150, 190.1248f },
	{ 73.26306f, 150, 122.6322f },
	{ -7.171509f, 155, 190.1248f },
	{ -11.00183f, 155, 193.3387f },
	{ 73.26306f, 155, 122.6322f },
	{ 77.09326f, 155, 119.4182f },
	{ -11.00183f, 140, 193.3387f },
	{ 77.09326f, 140, 119.4182f },
	{ -33.1665f, 150, 153 },
	{ 57.76599f, 150, 100.5001f },
	{ -33.1665f, 155, 153 },
	{ -37.49676f, 155, 155.5f },
	{ 57.76599f, 155, 100.5001f },
	{ 62.09613f, 155, 98 },
	{ -37.49676f, 140, 155.5f },
	{ 62.09613f, 140, 98 },
	{ -52.31994f, 150, 111.9252f },
	{ 46.34753f, 150, 76.01318f },
	{ -52.31994f, 155, 111.9252f },
	{ -57.01855f, 155, 113.6354f },
	{ 46.34753f, 155, 76.01318f },
	{ 51.04602f, 155, 74.3031f },
	{ -57.01855f, 140, 113.6354f },
	{ 51.04602f, 140, 74.3031f },
	{ -64.04987f, 150, 68.14844f },
	{ 39.35473f, 150, 49.91552f },
	{ -64.04987f, 155, 68.14844f },
	{ -68.97405f, 155, 69.01672f },
	{ 39.35473f, 155, 49.91552f },
	{ 44.27881f, 155, 49.04724f },
	{ -68.97405f, 140, 69.01672f },
	{ 44.27881f, 140, 49.04724f },
	{ -67.99982f, 150, 23 },
	{ 36.99994f, 150, 23 },
	{ -67.99982f, 155, 23 },
	{ -73, 155, 23 },
	{ 36.99994f, 155, 23 },
	{ 41.99994f, 155, 23 },
	{ -73, 140, 23 },
	{ 41.99994f, 140, 23 },
	{ -67.99982f, 150, -77 },
	{ 36.99994f, 150, -77 },
	{ -67.99982f, 155, -77 },
	{ -73, 155, -77 },
	{ 36.99994f, 155, -77 },
	{ 41.99994f, 155, -77 },
	{ -73, 140, -77 },
	{ 41.99994f, 140, -77 },
	{ -69.59503f, 150, -95.23302f },
	{ 33.80957f, 150, -113.4661f },
	{ -69.59503f, 155, -95.23302f },
	{ -74.51922f, 155, -94.36486f },
	{ 33.80957f, 155, -113.4661f },
	{ 38.73358f, 155, -114.3344f },
	{ -74.51922f, 140, -94.36486f },
	{ 38.73358f, 140, -114.3344f },
	{ -74.33208f, 150, -112.9122f },
	{ 24.33539f, 150, -148.8242f },
	{ -74.33208f, 155, -112.9122f },
	{ -79.03076f, 155, -111.202f },
	{ 24.33539f, 155, -148.8242f },
	{ 29.03387f, 155, -150.5343f },
	{ -79.03076f, 140, -111.202f },
	{ 29.03387f, 140, -150.5343f },
	{ -82.0672f, 150, -129.5001f },
	{ 8.865294f, 150, -182 },
	{ -82.0672f, 155, -129.5001f },
	{ -86.39746f, 155, -127 },
	{ 8.865294f, 155, -182 },
	{ 13.19537f, 155, -184.5f },
	{ -86.39746f, 140, -127 },
	{ 13.19537f, 140, -184.5f },
	{ -92.56519f, 150, -144.4928f },
	{ -12.13068f, 150, -211.9854f },
	{ -92.56519f, 155, -144.4928f },
	{ -96.39557f, 155, -141.2788f },
	{ -12.13068f, 155, -211.9854f },
	{ -8.300475f, 155, -215.1992f },
	{ -96.39557f, 140, -141.2788f },
	{ -8.300475f, 140, -215.1992f },
	{ -105.5072f, 150, -157.4348f },
	{ -38.01458f, 150, -237.8693f },
	{ -105.5072f, 155, -157.4348f },
	{ -108.7212f, 155, -153.6045f },
	{ -38.01458f, 155, -237.8693f },
	{ -34.80072f, 155, -241.6995f },
	{ -108.7212f, 140, -153.6045f },
	{ -34.80072f, 140, -241.6995f },
	{ -120.5f, 150, -167.9328f },
	{ -68, 150, -258.8652f },
	{ -120.5f, 155, -167.9328f },
	{ -123, 155, -163.6025f },
	{ -68, 155, -258.8652f },
	{ -65.50005f, 155, -263.1953f },
	{ -123, 140, -163.6025f },
	{ -65.50005f, 140, -263.1953f },
	{ 116.0308f, 150, 217.9863f },
	{ 102.0528f, 150, 247.6532f },
	{ 121.0308f, 140, 217.9863f },
	{ 101.1977f, 140, 250.0024f },
	{ 125.8638f, 140, 190.9701f },
	{ 120.0088f, 150, 188.3194f },
	{ 129.4978f, 150, 170.9859f },
	{ 130.7804f, 140, 172.4621f },
	{ 126.7434f, 150, 162.9433f },
	{ 120.6217f, 155, 160.0887f },
	{ 122.9242f, 155, 155.6664f },
	{ 128.8484f, 140, 158.4289f },
	{ 121.0308f, 145, 217.9863f },
	{ 125.8638f, 145, 190.9702f },
	{ -76.12498f, 150, -226.1321f },
	{ -84.87503f, 140, -218.2971f },
	{ -88.63404f, 150, -177.5434f },
	{ -90.24111f, 140, -175.6282f },
	{ -71.76089f, 150, -197.652f },
	{ -76.76098f, 140, -197.652f },
	{ -84.87503f, 145, -218.297f },
	{ -80.818f, 140, -207.9746f },
	{ 80.43227f, 155, 262.2577f },
	{ 82.53738f, 155, 257.7433f },
	{ 82.53738f, 150, 257.7433f },
	{ 80.43227f, 140, 262.2577f },
	{ -115.8606f, 140, -158.6035f },
	{ -115.8606f, 155, -158.6035f },
	{ -113.0036f, 155, -162.6838f },
	{ -113.0036f, 150, -162.6838f },
	{ -53.00729f, 150, -248.3672f },
	{ -50.15039f, 155, -252.4474f },
	{ -53.00729f, 155, -248.3672f },
	{ -50.15039f, 140, -252.4474f },
	{ 120.6217f, 150, 160.0887f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00035BB0[] = {
	{ 0.98453f, 0.138031f, -0.10793f },
	{ 0.751237f, 0.582078f, -0.311171f },
	{ 0.313656f, 0.5729f, 0.7572359f },
	{ 0.399434f, -0.597766f, 0.695074f },
	{ 0.362853f, 0.688006f, -0.6284789f },
	{ -0.34318f, 0.7272609f, 0.594407f },
	{ 0.343181f, 0.72726f, -0.594407f },
	{ -0.362853f, 0.688006f, 0.6284789f },
	{ -0.362852f, 0.688005f, 0.62848f },
	{ 0.343181f, 0.7272609f, -0.5944059f },
	{ -0.362853f, -0.688006f, 0.6284789f },
	{ 0.343181f, -0.7272609f, -0.5944059f },
	{ 0.466474f, 0.688006f, -0.555922f },
	{ -0.441185f, 0.72726f, 0.5257829f },
	{ 0.441185f, 0.72726f, -0.5257829f },
	{ -0.466474f, 0.688006f, 0.555922f },
	{ -0.466475f, 0.688006f, 0.555922f },
	{ 0.441185f, 0.72726f, -0.5257829f },
	{ -0.466474f, -0.688006f, 0.555922f },
	{ 0.441185f, -0.72726f, -0.5257829f },
	{ 0.555922f, 0.688006f, -0.466474f },
	{ -0.525784f, 0.72726f, 0.441185f },
	{ 0.525784f, 0.72726f, -0.441185f },
	{ -0.555922f, 0.688006f, 0.466474f },
	{ -0.555922f, 0.688006f, 0.466474f },
	{ 0.525784f, 0.7272609f, -0.441184f },
	{ -0.555922f, -0.688006f, 0.466474f },
	{ 0.525784f, -0.7272609f, -0.441184f },
	{ 0.6284789f, 0.688006f, -0.362852f },
	{ -0.594407f, 0.72726f, 0.343181f },
	{ 0.594407f, 0.72726f, -0.34318f },
	{ -0.6284789f, 0.688006f, 0.362852f },
	{ -0.6284789f, 0.688006f, 0.362853f },
	{ 0.594407f, 0.72726f, -0.343181f },
	{ -0.6284789f, -0.688006f, 0.362852f },
	{ 0.594407f, -0.72726f, -0.343181f },
	{ 0.68194f, 0.688006f, -0.248205f },
	{ -0.644969f, 0.7272609f, 0.234749f },
	{ 0.644969f, 0.72726f, -0.234749f },
	{ -0.68194f, 0.688006f, 0.248205f },
	{ -0.68194f, 0.688006f, 0.248205f },
	{ 0.644968f, 0.7272609f, -0.234749f },
	{ -0.68194f, -0.688006f, 0.248205f },
	{ 0.644968f, -0.7272609f, -0.234749f },
	{ 0.71468f, 0.688006f, -0.126017f },
	{ -0.675935f, 0.72726f, 0.119185f },
	{ 0.675934f, 0.72726f, -0.119185f },
	{ -0.71468f, 0.688006f, 0.126017f },
	{ -0.71468f, 0.688006f, 0.126017f },
	{ 0.675935f, 0.72726f, -0.119185f },
	{ -0.71468f, -0.688006f, 0.126017f },
	{ 0.675935f, -0.72726f, -0.119185f },
	{ 0.7159809f, 0.6974199f, -0.03126f },
	{ -0.69635f, 0.7170579f, 0.030403f },
	{ 0.69635f, 0.7170579f, -0.030403f },
	{ -0.7159809f, 0.6974199f, 0.03126f },
	{ -0.7159809f, 0.6974199f, 0.03126f },
	{ 0.69635f, 0.7170579f, -0.030404f },
	{ -0.7159809f, -0.6974199f, 0.03126f },
	{ 0.69635f, -0.7170579f, -0.030404f },
	{ 0.69635f, 0.7170579f, -0.030404f },
	{ -0.7159809f, 0.6974199f, 0.03126f },
	{ 0.7159809f, 0.697419f, -0.031261f },
	{ -0.69635f, 0.7170579f, 0.030403f },
	{ -0.69635f, 0.7170579f, 0.030403f },
	{ 0.7159809f, 0.697419f, -0.031261f },
	{ -0.69635f, -0.7170579f, 0.030403f },
	{ 0.7159809f, -0.697419f, -0.031261f },
	{ 0.675935f, 0.72726f, -0.119185f },
	{ -0.71468f, 0.688006f, 0.126017f },
	{ 0.7146789f, 0.688007f, -0.126017f },
	{ -0.675934f, 0.7272609f, 0.119186f },
	{ -0.675934f, 0.72726f, 0.119185f },
	{ 0.71468f, 0.688006f, -0.126017f },
	{ -0.675934f, -0.7272609f, 0.119186f },
	{ 0.71468f, -0.688006f, -0.126017f },
	{ 0.644968f, 0.7272609f, -0.234749f },
	{ -0.68194f, 0.688006f, 0.248205f },
	{ 0.68194f, 0.688005f, -0.248205f },
	{ -0.644969f, 0.72726f, 0.23475f },
	{ -0.644969f, 0.72726f, 0.234749f },
	{ 0.68194f, 0.688006f, -0.248206f },
	{ -0.644969f, -0.72726f, 0.23475f },
	{ 0.68194f, -0.688006f, -0.248206f },
	{ 0.5944059f, 0.72726f, -0.343182f },
	{ -0.6284789f, 0.688006f, 0.362852f },
	{ 0.628478f, 0.688006f, -0.362853f },
	{ -0.594407f, 0.72726f, 0.34318f },
	{ -0.594407f, 0.72726f, 0.343181f },
	{ 0.6284789f, 0.688006f, -0.362853f },
	{ -0.594407f, -0.72726f, 0.34318f },
	{ 0.6284789f, -0.688006f, -0.362853f },
	{ 0.525784f, 0.72726f, -0.441185f },
	{ -0.555922f, 0.688006f, 0.466474f },
	{ 0.555922f, 0.688006f, -0.466474f },
	{ -0.525784f, 0.72726f, 0.441184f },
	{ -0.525784f, 0.72726f, 0.441185f },
	{ 0.555922f, 0.688006f, -0.466474f },
	{ -0.525784f, -0.72726f, 0.441184f },
	{ 0.555922f, -0.688006f, -0.466474f },
	{ 0.441185f, 0.72726f, -0.525784f },
	{ -0.466474f, 0.688006f, 0.555923f },
	{ 0.466474f, 0.688006f, -0.555922f },
	{ -0.441184f, 0.72726f, 0.525784f },
	{ -0.441184f, 0.72726f, 0.525784f },
	{ 0.466474f, 0.688006f, -0.555923f },
	{ -0.441185f, -0.72726f, 0.525784f },
	{ 0.466474f, -0.688006f, -0.555923f },
	{ -0.416357f, 0.063853f, -0.906956f },
	{ -0.934243f, 0.343984f, -0.09415799f },
	{ -0.177407f, 0.572899f, -0.800196f },
	{ -0.793856f, 0.5820799f, 0.176002f },
	{ -0.793857f, 0.582079f, 0.175997f },
	{ -0.177402f, 0.572899f, -0.8001969f },
	{ -0.778386f, -0.627458f, -0.020297f },
	{ -0.243472f, -0.486049f, -0.839332f },
	{ 0.492803f, 0.853456f, 0.169584f },
	{ 0.689306f, 0.704959f, 0.167006f },
	{ 0.695588f, -0.6672029f, 0.266453f },
	{ 0.747212f, -0.651798f, 0.129747f },
	{ 0.699166f, -0.697928f, 0.155125f },
	{ 0.410088f, 0.899462f, 0.150982f },
	{ 0.618829f, 0.782989f, 0.063077f },
	{ 0.843299f, -0.5234039f, 0.122045f },
	{ 0.686785f, 0.724703f, 0.055961f },
	{ 0.113448f, 0.680059f, 0.724327f },
	{ 0.644706f, 0.591778f, -0.483894f },
	{ 0.73136f, -0.532156f, -0.426524f },
	{ 0.903432f, 0.297745f, 0.308478f },
	{ 0.899481f, 0.35906f, 0.249019f },
	{ -0.576057f, 0.81378f, -0.076945f },
	{ -0.776041f, -0.6305529f, -0.012773f },
	{ -0.363853f, 0.8137479f, -0.453238f },
	{ -0.338943f, -0.788727f, -0.512861f },
	{ -0.352462f, 0.932358f, -0.080493f },
	{ -0.745877f, -0.633792f, -0.204878f },
	{ -0.9448349f, 0.327538f, -0.002541f },
	{ -0.854808f, -0.479656f, 0.198074f },
	{ -0.298837f, 0.7071069f, 0.640856f },
	{ 0.298837f, 0.7071069f, -0.640856f },
	{ 0.298837f, 0.7071069f, -0.640856f },
	{ -0.298837f, -0.7071069f, 0.640856f },
	{ -0.405611f, -0.707052f, 0.579273f },
	{ -0.405579f, 0.7071069f, 0.579228f },
	{ 0.40558f, 0.7071069f, -0.579228f },
	{ 0.40558f, 0.7071069f, -0.579228f },
	{ -0.405611f, 0.707052f, 0.579273f },
	{ 0.405579f, 0.7071069f, -0.579228f },
	{ -0.405579f, 0.7071069f, 0.579228f },
	{ 0.405579f, -0.7071069f, -0.579228f },
	{ -0.298834f, 0.7071069f, 0.640857f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000362C4 = { vertex_0003549C, normal_00035BB0, LengthOfArray<Sint32>(vertex_0003549C), meshlist_0003537C, matlist_00034918, LengthOfArray<Uint16>(meshlist_0003537C), LengthOfArray<Uint16>(matlist_00034918), { 3.890198f, 147.5f, 4.411652f }, 296.1665f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000362EC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000362C4, 73.0705f, 0, -1093.077f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00036320[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000363E8[] = {
	4, 94, 116, 95, 112
};

extern "C" __declspec(dllexport) Sint16 poly_000363F2[] = {
	3, 116, 94, 115,
	0x8000u | 25, 115, 91, 94, 83, 86, 75, 78, 67, 70, 59, 62, 51, 54, 43, 46, 35, 38, 27, 30, 19, 22, 11, 14, 3, 6,
	3, 109, 93, 112,
	25, 5, 7, 13, 15, 21, 23, 29, 31, 37, 39, 45, 47, 53, 55, 61, 63, 69, 71, 77, 79, 85, 87, 93, 95, 112
};

extern "C" __declspec(dllexport) Sint16 poly_0003646A[] = {
	0x8000u | 25, 113, 90, 91, 82, 83, 74, 75, 66, 67, 58, 59, 50, 51, 42, 43, 34, 35, 26, 27, 18, 19, 10, 11, 2, 3,
	0x8000u | 25, 109, 93, 92, 85, 84, 77, 76, 69, 68, 61, 60, 53, 52, 45, 44, 37, 36, 29, 28, 21, 20, 13, 12, 5, 4,
	0x8000u | 5, 98, 97, 115, 113, 91,
	0x8000u | 5, 99, 100, 110, 109, 92
};

extern "C" __declspec(dllexport) Sint16 poly_000364EA[] = {
	3, 113, 90, 114,
	3, 111, 89, 110,
	25, 1, 4, 9, 12, 17, 20, 25, 28, 33, 36, 41, 44, 49, 52, 57, 60, 65, 68, 73, 76, 81, 84, 89, 92, 110,
	25, 2, 0, 10, 8, 18, 16, 26, 24, 34, 32, 42, 40, 50, 48, 58, 56, 66, 64, 74, 72, 82, 80, 90, 88, 114
};

extern "C" __declspec(dllexport) Sint16 poly_00036562[] = {
	3, 114, 88, 111,
	0x8000u | 25, 111, 89, 88, 81, 80, 73, 72, 65, 64, 57, 56, 49, 48, 41, 40, 33, 32, 25, 24, 17, 16, 9, 8, 1, 0
};

extern "C" __declspec(dllexport) Sint16 poly_0003659E[] = {
	4, 104, 108, 105, 101,
	0x8000u | 7, 97, 98, 117, 118, 107, 106, 102,
	3, 100, 101, 99,
	0x8000u | 8, 99, 96, 101, 103, 108, 102, 104, 106
};

extern "C" __declspec(dllexport) Sint16 poly_000365D2[] = {
	4, 118, 116, 98, 115,
	4, 100, 109, 101, 112
};

extern "C" __declspec(dllexport) Sint16 poly_000365E6[] = {
	4, 97, 113, 117, 114,
	4, 96, 111, 99, 110
};

extern "C" __declspec(dllexport) Sint16 poly_000365FA[] = {
	0x8000u | 7, 105, 104, 101, 106, 112, 118, 116,
	18, 94, 95, 86, 87, 78, 79, 70, 71, 62, 63, 54, 55, 46, 47, 38, 39, 30, 31,
	8, 30, 31, 22, 23, 14, 15, 6, 7
};

extern "C" __declspec(dllexport) Sint16 poly_00036642[] = {
	0x8000u | 7, 111, 114, 96, 117, 103, 107, 102
};

NJS_TEX uv_00036654[] = {
	{ 1, 247 },
	{ 1, -757 },
	{ 253, 247 },
	{ 253, -757 }
};

NJS_TEX uv_00036664[] = {
	{ 0, 255 },
	{ 1046, 255 },
	{ 0 },
	{ 0 },
	{ 1046, 0 },
	{ 1046, 255 },
	{ 1412, 0 },
	{ 1412, 255 },
	{ 1777, 0 },
	{ 1777, 255 },
	{ 2142, 0 },
	{ 2142, 255 },
	{ 2508, 0 },
	{ 2508, 255 },
	{ 2873, 0 },
	{ 2873, 255 },
	{ 3239, 0 },
	{ 3239, 255 },
	{ 3604, 0 },
	{ 3604, 255 },
	{ 3969, 0 },
	{ 3969, 255 },
	{ 5366, 0 },
	{ 5366, 255 },
	{ 6125, 0 },
	{ 6125, 255 },
	{ 6885, 0 },
	{ 6885, 255 },
	{ 0 },
	{ 828, 0 },
	{ 0, 255 },
	{ 6885, 0 },
	{ 6885, 255 },
	{ 6450, 0 },
	{ 6450, 255 },
	{ 6017, 0 },
	{ 6017, 255 },
	{ 4911, 0 },
	{ 4911, 255 },
	{ 4401, 0 },
	{ 4401, 255 },
	{ 3890, 0 },
	{ 3890, 255 },
	{ 3380, 0 },
	{ 3380, 255 },
	{ 2869, 0 },
	{ 2869, 255 },
	{ 2359, 0 },
	{ 2359, 255 },
	{ 1848, 0 },
	{ 1848, 255 },
	{ 1338, 0 },
	{ 1338, 255 },
	{ 828, 0 },
	{ 828, 255 },
	{ 0, 255 }
};

NJS_TEX uv_00036744[] = {
	{ 340, 0 },
	{ 1363, 0 },
	{ 1378, 255 },
	{ 1731, 0 },
	{ 1738, 255 },
	{ 2101, 0 },
	{ 2100, 255 },
	{ 2469, 0 },
	{ 2459, 255 },
	{ 2837, 0 },
	{ 2820, 255 },
	{ 3205, 0 },
	{ 3181, 255 },
	{ 3574, 0 },
	{ 3541, 255 },
	{ 3943, 0 },
	{ 3903, 255 },
	{ 4311, 0 },
	{ 4263, 255 },
	{ 5675, 0 },
	{ 5641, 255 },
	{ 6407, 0 },
	{ 6391, 255 },
	{ 7140, 0 },
	{ 7140, 255 },
	{ 274, 255 },
	{ 1100, 255 },
	{ 1110, 0 },
	{ 1609, 255 },
	{ 1615, 0 },
	{ 2119, 255 },
	{ 2119, 0 },
	{ 2628, 255 },
	{ 2622, 0 },
	{ 3137, 255 },
	{ 3125, 0 },
	{ 3646, 255 },
	{ 3630, 0 },
	{ 4154, 255 },
	{ 4134, 0 },
	{ 4663, 255 },
	{ 4636, 0 },
	{ 5172, 255 },
	{ 5140, 0 },
	{ 6275, 255 },
	{ 6252, 0 },
	{ 6706, 255 },
	{ 6695, 0 },
	{ 7140, 255 },
	{ 7140, 0 },
	{ 0, 255 },
	{ 0 },
	{ 344, 255 },
	{ 340, 0 },
	{ 1378, 255 },
	{ 0 },
	{ 0, 255 },
	{ 276, 0 },
	{ 274, 255 },
	{ 1110, 0 }
};

NJS_TEX uv_00036834[] = {
	{ 0 },
	{ 1035, 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 836, 255 },
	{ 0 },
	{ 6885, 255 },
	{ 6885, 0 },
	{ 6439, 255 },
	{ 6439, 0 },
	{ 5994, 255 },
	{ 5994, 0 },
	{ 4878, 255 },
	{ 4878, 0 },
	{ 4373, 255 },
	{ 4373, 0 },
	{ 3869, 255 },
	{ 3869, 0 },
	{ 3362, 255 },
	{ 3362, 0 },
	{ 2857, 255 },
	{ 2857, 0 },
	{ 2352, 255 },
	{ 2352, 0 },
	{ 1847, 255 },
	{ 1847, 0 },
	{ 1340, 255 },
	{ 1340, 0 },
	{ 836, 255 },
	{ 836, 0 },
	{ 0 },
	{ 6885, 0 },
	{ 6885, 255 },
	{ 6144, 0 },
	{ 6144, 255 },
	{ 5403, 0 },
	{ 5403, 255 },
	{ 4020, 0 },
	{ 4020, 255 },
	{ 3648, 0 },
	{ 3648, 255 },
	{ 3274, 0 },
	{ 3274, 255 },
	{ 2901, 0 },
	{ 2901, 255 },
	{ 2528, 0 },
	{ 2528, 255 },
	{ 2154, 0 },
	{ 2154, 255 },
	{ 1782, 0 },
	{ 1782, 255 },
	{ 1409, 0 },
	{ 1409, 255 },
	{ 1035, 0 },
	{ 1035, 255 },
	{ 0, 255 }
};

NJS_TEX uv_00036914[] = {
	{ 510, 255 },
	{ 510, -243 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, -147 },
	{ 510, -243 },
	{ 0, -390 },
	{ 510, -422 },
	{ 0, -633 },
	{ 510, -602 },
	{ 0, -876 },
	{ 510, -781 },
	{ 0, -1121 },
	{ 510, -961 },
	{ 0, -1363 },
	{ 510, -1141 },
	{ 0, -1607 },
	{ 510, -1322 },
	{ 0, -1850 },
	{ 510, -1500 },
	{ 0, -2093 },
	{ 510, -1681 },
	{ 0, -2630 },
	{ 510, -2345 },
	{ 0, -2845 },
	{ 510, -2703 },
	{ 0, -3060 },
	{ 510, -3060 }
};

NJS_TEX uv_00036984[] = {
	{ 350, 252 },
	{ 181, 169 },
	{ 206, 252 },
	{ 3, 251 },
	{ 960, 0 },
	{ 1016, 0 },
	{ 952, 84 },
	{ 1016, 251 },
	{ 726, 84 },
	{ 749, 252 },
	{ 356, 84 },
	{ 3, 0 },
	{ 3, 251 },
	{ 67, 0 },
	{ 67, 0 },
	{ 74, 84 },
	{ 3, 251 },
	{ 192, 84 },
	{ 181, 169 },
	{ 356, 84 },
	{ 350, 252 },
	{ 749, 252 }
};

NJS_TEX uv_000369DC[] = {
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 }
};

NJS_TEX uv_000369FC[] = {
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_TEX uv_00036A1C[] = {
	{ 204, 188 },
	{ 164, 438 },
	{ 254, 3 },
	{ 62, 294 },
	{ 254, 506 },
	{ 0, 3 },
	{ 0, 506 },
	{ 0, 31 },
	{ 254, 31 },
	{ 0, 541 },
	{ 254, 541 },
	{ 0, 1051 },
	{ 254, 1051 },
	{ 0, 1561 },
	{ 254, 1561 },
	{ 0, 2071 },
	{ 254, 2071 },
	{ 0, 2581 },
	{ 254, 2581 },
	{ 0, 3091 },
	{ 254, 3091 },
	{ 0, 3601 },
	{ 254, 3601 },
	{ 0, 4048 },
	{ 254, 4048 },
	{ 0, 15 },
	{ 254, 15 },
	{ 0, 1035 },
	{ 254, 1035 },
	{ 0, 1545 },
	{ 254, 1545 },
	{ 0, 2024 },
	{ 254, 2024 }
};

NJS_TEX uv_00036AA0[] = {
	{ 1, 254 },
	{ 508, 254 },
	{ 1, 128 },
	{ 508, 128 },
	{ 75, 128 },
	{ 370, 197 },
	{ 165, 208 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00036ABC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000363E8, NULL, NULL, NULL, uv_00036654, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_000363F2, NULL, NULL, NULL, uv_00036664, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_0003646A, NULL, NULL, NULL, uv_00036744, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, poly_000364EA, NULL, NULL, NULL, uv_00036834, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_00036562, NULL, NULL, NULL, uv_00036914, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 4, poly_0003659E, NULL, NULL, NULL, uv_00036984, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, poly_000365D2, NULL, NULL, NULL, uv_000369DC, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 2, poly_000365E6, NULL, NULL, NULL, uv_000369FC, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 3, poly_000365FA, NULL, NULL, NULL, uv_00036A1C, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 1, poly_00036642, NULL, NULL, NULL, uv_00036AA0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00036BAC[] = {
	{ 48.97653f, 150, 292.5876f },
	{ 150.3986f, 150, 265.4117f },
	{ 48.97653f, 155, 292.5876f },
	{ 44.14682f, 155, 293.8818f },
	{ 150.3986f, 155, 265.4117f },
	{ 155.2283f, 155, 264.1176f },
	{ 44.14682f, 140, 293.8818f },
	{ 155.2283f, 140, 264.1176f },
	{ 38.51376f, 150, 239.9876f },
	{ 142.6153f, 150, 226.2823f },
	{ 38.51376f, 155, 239.9876f },
	{ 33.55648f, 155, 240.6403f },
	{ 142.6153f, 155, 226.2823f },
	{ 147.5726f, 155, 225.6297f },
	{ 33.55648f, 140, 240.6403f },
	{ 147.5726f, 140, 225.6297f },
	{ 35.00619f, 150, 186.4719f },
	{ 140.006f, 150, 186.4719f },
	{ 35.00619f, 155, 186.4719f },
	{ 30.00607f, 155, 186.4719f },
	{ 140.006f, 155, 186.4719f },
	{ 145.0061f, 155, 186.4719f },
	{ 30.00607f, 140, 186.4719f },
	{ 145.0061f, 140, 186.4719f },
	{ 35.00619f, 150, 86.47192f },
	{ 140.006f, 150, 86.47186f },
	{ 35.00619f, 155, 86.47192f },
	{ 30.00607f, 155, 86.4718f },
	{ 140.006f, 155, 86.47186f },
	{ 145.0061f, 155, 86.47186f },
	{ 30.00607f, 140, 86.4718f },
	{ 145.0061f, 140, 86.47186f },
	{ 32.65134f, 150, 59.55639f },
	{ 136.056f, 150, 41.32336f },
	{ 32.65134f, 155, 59.55639f },
	{ 27.7272f, 155, 60.42462f },
	{ 136.056f, 155, 41.32336f },
	{ 140.9802f, 155, 40.45514f },
	{ 27.7272f, 140, 60.42462f },
	{ 140.9802f, 140, 40.45514f },
	{ 25.65854f, 150, 33.45874f },
	{ 124.3261f, 150, -2.453369f },
	{ 25.65854f, 155, 33.45874f },
	{ 20.95993f, 155, 35.16882f },
	{ 124.3261f, 155, -2.453369f },
	{ 129.0246f, 155, -4.163452f },
	{ 20.95993f, 140, 35.16882f },
	{ 129.0246f, 140, -4.163452f },
	{ 14.24008f, 150, 8.971802f },
	{ 105.1726f, 150, -43.52807f },
	{ 14.24008f, 155, 8.971802f },
	{ 9.909882f, 155, 11.4718f },
	{ 105.1726f, 155, -43.52807f },
	{ 109.5028f, 155, -46.02813f },
	{ 9.909882f, 140, 11.4718f },
	{ 109.5028f, 140, -46.02813f },
	{ -1.256989f, 150, -13.16028f },
	{ 79.17758f, 150, -80.65282f },
	{ -1.256989f, 155, -13.16028f },
	{ -5.087311f, 155, -9.946288f },
	{ 79.17758f, 155, -80.65282f },
	{ 83.00784f, 155, -83.86681f },
	{ -5.087311f, 140, -9.946288f },
	{ 83.00784f, 140, -83.86681f },
	{ -20.36185f, 150, -32.26508f },
	{ 47.13083f, 150, -112.6996f },
	{ -20.36185f, 155, -32.26508f },
	{ -23.57583f, 155, -28.43481f },
	{ 47.13083f, 155, -112.6996f },
	{ 50.34481f, 155, -116.5299f },
	{ -23.57583f, 140, -28.43481f },
	{ 50.34481f, 140, -116.5299f },
	{ -42.49392f, 150, -47.76215f },
	{ 10.00607f, 150, -138.6947f },
	{ -42.49392f, 155, -47.76215f },
	{ -44.99392f, 155, -43.43195f },
	{ 10.00607f, 155, -138.6947f },
	{ 12.50607f, 155, -143.0248f },
	{ -44.99392f, 140, -43.43195f },
	{ 12.50607f, 140, -143.0248f },
	{ -66.9808f, 150, -59.1806f },
	{ -31.06875f, 150, -157.8481f },
	{ -66.9808f, 155, -59.1806f },
	{ -68.69094f, 155, -54.48206f },
	{ -31.06875f, 155, -157.8481f },
	{ -29.35861f, 155, -162.5466f },
	{ -68.69094f, 140, -54.48206f },
	{ -29.35861f, 140, -162.5466f },
	{ -93.07846f, 150, -66.17346f },
	{ -74.84536f, 150, -169.5781f },
	{ -93.07846f, 155, -66.17346f },
	{ -93.94675f, 155, -61.24927f },
	{ -74.84536f, 155, -169.5781f },
	{ -73.9772f, 155, -174.5021f },
	{ -93.94675f, 140, -61.24927f },
	{ -73.9772f, 140, -174.5021f },
	{ -173.3262f, 150, -186.9429f },
	{ -191.5592f, 155, -83.5382f },
	{ -192.4275f, 155, -78.61414f },
	{ -173.3262f, 155, -186.9429f },
	{ -172.4579f, 155, -191.8669f },
	{ -172.4579f, 140, -191.8669f },
	{ -162.4427f, 150, -150.2405f },
	{ -172.8845f, 150, -171.0917f },
	{ -157.4427f, 140, -150.2405f },
	{ -167.4503f, 140, -168.5537f },
	{ -172.4351f, 140, -106.9274f },
	{ -172.0009f, 150, -109.3894f },
	{ -172.6674f, 145, -172.3227f },
	{ -147.8377f, 155, -187.5257f },
	{ -148.706f, 155, -182.6017f },
	{ -148.706f, 150, -182.6017f },
	{ -147.8377f, 140, -187.5257f },
	{ -166.939f, 155, -79.19704f },
	{ -166.939f, 150, -79.19704f },
	{ -167.8073f, 155, -74.2729f },
	{ -167.8073f, 140, -74.2729f },
	{ -191.5592f, 150, -83.5382f },
	{ -192.4275f, 140, -78.61414f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00037140[] = {
	{ 0.708116f, 0.691905f, -0.140853f },
	{ -0.679225f, 0.721387f, 0.135107f },
	{ 0.679225f, 0.721388f, -0.135106f },
	{ -0.708116f, 0.691905f, 0.140852f },
	{ -0.708116f, 0.691905f, 0.140853f },
	{ 0.679225f, 0.721387f, -0.135107f },
	{ -0.708116f, -0.691905f, 0.140852f },
	{ 0.679225f, -0.721387f, -0.135107f },
	{ 0.715077f, 0.692678f, -0.094141f },
	{ -0.685841f, 0.722129f, 0.090293f },
	{ 0.685841f, 0.722128f, -0.090292f },
	{ -0.715076f, 0.692678f, 0.094141f },
	{ -0.715077f, 0.692678f, 0.094142f },
	{ 0.685841f, 0.722129f, -0.090293f },
	{ -0.715076f, -0.692678f, 0.094141f },
	{ 0.685841f, -0.722129f, -0.090293f },
	{ 0.713941f, 0.699816f, -0.023372f },
	{ -0.699214f, 0.714546f, 0.02289f },
	{ 0.699214f, 0.714546f, -0.02289f },
	{ -0.713941f, 0.699816f, 0.023372f },
	{ -0.713941f, 0.699816f, 0.023372f },
	{ 0.699214f, 0.714546f, -0.02289f },
	{ -0.713941f, -0.699816f, 0.023372f },
	{ 0.699214f, -0.714546f, -0.02289f },
	{ 0.69635f, 0.7170579f, -0.030404f },
	{ -0.7159809f, 0.6974199f, 0.031261f },
	{ 0.7159809f, 0.697419f, -0.031261f },
	{ -0.69635f, 0.7170579f, 0.030404f },
	{ -0.69635f, 0.7170579f, 0.030404f },
	{ 0.7159809f, 0.6974199f, -0.03126f },
	{ -0.69635f, -0.7170579f, 0.030404f },
	{ 0.7159809f, -0.6974199f, -0.03126f },
	{ 0.675935f, 0.72726f, -0.119186f },
	{ -0.71468f, 0.688006f, 0.126017f },
	{ 0.7146789f, 0.688006f, -0.126017f },
	{ -0.675934f, 0.72726f, 0.119186f },
	{ -0.675935f, 0.72726f, 0.119185f },
	{ 0.71468f, 0.688006f, -0.126017f },
	{ -0.675934f, -0.72726f, 0.119186f },
	{ 0.71468f, -0.688006f, -0.126017f },
	{ 0.644969f, 0.7272609f, -0.234749f },
	{ -0.68194f, 0.688006f, 0.248206f },
	{ 0.68194f, 0.688006f, -0.248205f },
	{ -0.644969f, 0.72726f, 0.234749f },
	{ -0.644969f, 0.7272609f, 0.234749f },
	{ 0.6819389f, 0.688006f, -0.248206f },
	{ -0.644969f, -0.72726f, 0.234749f },
	{ 0.6819389f, -0.688006f, -0.248206f },
	{ 0.594407f, 0.72726f, -0.343181f },
	{ -0.6284789f, 0.688006f, 0.362853f },
	{ 0.6284789f, 0.688006f, -0.362853f },
	{ -0.5944059f, 0.7272609f, 0.343181f },
	{ -0.5944059f, 0.72726f, 0.343181f },
	{ 0.6284789f, 0.688006f, -0.362853f },
	{ -0.5944059f, -0.7272609f, 0.343181f },
	{ 0.6284789f, -0.688006f, -0.362853f },
	{ 0.5257829f, 0.72726f, -0.441185f },
	{ -0.555922f, 0.688006f, 0.466474f },
	{ 0.555922f, 0.688006f, -0.466475f },
	{ -0.5257829f, 0.72726f, 0.441186f },
	{ -0.525784f, 0.72726f, 0.441185f },
	{ 0.555922f, 0.688006f, -0.466474f },
	{ -0.5257829f, -0.72726f, 0.441186f },
	{ 0.555922f, -0.688006f, -0.466474f },
	{ 0.441185f, 0.72726f, -0.525784f },
	{ -0.466475f, 0.688006f, 0.555922f },
	{ 0.466474f, 0.688006f, -0.555922f },
	{ -0.441185f, 0.72726f, 0.5257829f },
	{ -0.441185f, 0.72726f, 0.5257829f },
	{ 0.466474f, 0.688006f, -0.555922f },
	{ -0.441185f, -0.72726f, 0.5257829f },
	{ 0.466474f, -0.688006f, -0.555922f },
	{ 0.343181f, 0.72726f, -0.5944059f },
	{ -0.362852f, 0.688006f, 0.6284789f },
	{ 0.362853f, 0.688006f, -0.6284789f },
	{ -0.343181f, 0.72726f, 0.594407f },
	{ -0.34318f, 0.7272609f, 0.594407f },
	{ 0.362852f, 0.688006f, -0.6284789f },
	{ -0.343181f, -0.72726f, 0.594407f },
	{ 0.362852f, -0.688006f, -0.6284789f },
	{ 0.23475f, 0.72726f, -0.644969f },
	{ -0.248205f, 0.688006f, 0.68194f },
	{ 0.248206f, 0.688006f, -0.6819389f },
	{ -0.234749f, 0.7272609f, 0.644969f },
	{ -0.234749f, 0.72726f, 0.644969f },
	{ 0.248205f, 0.688006f, -0.68194f },
	{ -0.234749f, -0.7272609f, 0.644969f },
	{ 0.248205f, -0.688006f, -0.68194f },
	{ 0.150861f, 0.7170579f, -0.680492f },
	{ -0.155114f, 0.6974199f, 0.699675f },
	{ 0.155114f, 0.697419f, -0.699675f },
	{ -0.150861f, 0.717057f, 0.680492f },
	{ -0.150861f, 0.7170579f, 0.680492f },
	{ 0.155114f, 0.6974199f, -0.699675f },
	{ -0.150861f, -0.717057f, 0.680492f },
	{ 0.155114f, -0.6974199f, -0.699675f },
	{ -0.948029f, 0.230818f, 0.219009f },
	{ -0.468321f, 0.577351f, -0.668836f },
	{ -0.668837f, 0.57735f, 0.46832f },
	{ -0.668837f, 0.57735f, 0.468321f },
	{ -0.46832f, 0.577351f, -0.668836f },
	{ -0.5168329f, -0.589948f, -0.6203589f },
	{ -0.927433f, 0.359504f, 0.10308f },
	{ -0.793506f, 0.567087f, 0.220817f },
	{ -0.569328f, -0.820502f, 0.051388f },
	{ -0.467416f, -0.858164f, 0.212314f },
	{ -0.554336f, -0.7775829f, -0.296776f },
	{ -0.7725469f, 0.520386f, -0.363827f },
	{ -0.900046f, -0.377476f, 0.217784f },
	{ 0.122788f, 0.7071069f, -0.696364f },
	{ -0.122788f, 0.7071069f, 0.696364f },
	{ -0.122788f, 0.7071069f, 0.696364f },
	{ 0.122788f, -0.7071069f, -0.696364f },
	{ 0.122787f, 0.7071069f, -0.696364f },
	{ 0.122787f, 0.7071069f, -0.696364f },
	{ -0.122788f, 0.7071069f, 0.696364f },
	{ -0.122788f, -0.7071069f, 0.696364f },
	{ -0.768448f, 0.171188f, -0.616589f },
	{ -0.744628f, -0.565159f, 0.355141f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000376D4 = { vertex_00036BAC, normal_00037140, LengthOfArray<Sint32>(vertex_00036BAC), meshlist_00036ABC, matlist_00036320, LengthOfArray<Uint16>(meshlist_00036ABC), LengthOfArray<Uint16>(matlist_00036320), { -18.59958f, 147.5f, 51.00742f }, 298.6706f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000376FC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000376D4, 608.4427f, 0, -695.7595f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00037730[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00037820[] = {
	10, 10, 14, 2, 200, 199, 198, 197, 202, 193, 195,
	3, 2, 8, 10,
	7, 6, 4, 12, 0, 201, 195, 202,
	4, 176, 178, 182, 179,
	0x8000u | 14, 180, 181, 177, 183, 188, 189, 184, 185, 191, 187, 192, 182, 190, 176,
	4, 191, 186, 192, 190,
	0x8000u | 6, 198, 202, 194, 201, 196, 12
};

extern "C" __declspec(dllexport) Sint16 poly_0003788E[] = {
	3, 215, 3, 216,
	0x8000u | 44, 216, 9, 3, 20, 17, 28, 25, 36, 33, 44, 41, 52, 49, 60, 57, 68, 65, 76, 73, 84, 81, 92, 89, 100, 97, 108, 105, 116, 113, 124, 121, 132, 129, 140, 137, 148, 145, 156, 153, 164, 161, 172, 169, 207,
	3, 206, 168, 205,
	3, 208, 172, 207,
	3, 214, 5, 212,
	0x8000u | 44, 212, 1, 5, 16, 18, 24, 26, 32, 34, 40, 42, 48, 50, 56, 58, 64, 66, 72, 74, 80, 82, 88, 90, 96, 98, 104, 106, 112, 114, 120, 122, 128, 130, 136, 138, 144, 146, 152, 154, 160, 162, 168, 170, 205
};

extern "C" __declspec(dllexport) Sint16 poly_00037962[] = {
	3, 211, 13, 213,
	0x8000u | 44, 213, 7, 13, 19, 22, 27, 30, 35, 38, 43, 46, 51, 54, 59, 62, 67, 70, 75, 78, 83, 86, 91, 94, 99, 102, 107, 110, 115, 118, 123, 126, 131, 134, 139, 142, 147, 150, 155, 158, 163, 166, 171, 174, 203,
	3, 204, 171, 203,
	3, 210, 175, 209,
	3, 217, 11, 218,
	0x8000u | 44, 218, 15, 11, 23, 21, 31, 29, 39, 37, 47, 45, 55, 53, 63, 61, 71, 69, 79, 77, 87, 85, 95, 93, 103, 101, 111, 109, 119, 117, 127, 125, 135, 133, 143, 141, 151, 149, 159, 157, 167, 165, 175, 173, 209
};

extern "C" __declspec(dllexport) Sint16 poly_00037A36[] = {
	10, 12, 196, 211, 194, 13, 198, 15, 200, 218, 14,
	0x8000u | 9, 185, 189, 187, 183, 182, 210, 203, 175, 174
};

extern "C" __declspec(dllexport) Sint16 poly_00037A60[] = {
	10, 2, 199, 215, 197, 3, 193, 1, 195, 212, 0,
	42, 3, 1, 17, 16, 25, 24, 33, 32, 41, 40, 49, 48, 57, 56, 65, 64, 73, 72, 81, 80, 89, 88, 97, 96, 105, 104, 113, 112, 121, 120, 129, 128, 137, 136, 145, 144, 153, 152, 161, 160, 169, 168
};

extern "C" __declspec(dllexport) Sint16 poly_00037ACC[] = {
	5, 170, 204, 205, 179, 178,
	0x8000u | 44, 204, 171, 170, 163, 162, 155, 154, 147, 146, 139, 138, 131, 130, 123, 122, 115, 114, 107, 106, 99, 98, 91, 90, 83, 82, 75, 74, 67, 66, 59, 58, 51, 50, 43, 42, 35, 34, 27, 26, 19, 18, 7, 5, 214,
	5, 173, 208, 209, 180, 181,
	0x8000u | 42, 208, 172, 173, 164, 165, 156, 157, 148, 149, 140, 141, 132, 133, 124, 125, 116, 117, 108, 109, 100, 101, 92, 93, 84, 85, 76, 77, 68, 69, 60, 61, 52, 53, 44, 45, 36, 37, 28, 29, 20, 21, 9,
	0x8000u | 7, 8, 10, 216, 217, 9, 11, 21,
	5, 7, 214, 213, 4, 6
};

extern "C" __declspec(dllexport) Sint16 poly_00037BB0[] = {
	4, 10, 217, 14, 218,
	4, 12, 211, 6, 213
};

extern "C" __declspec(dllexport) Sint16 poly_00037BC4[] = {
	4, 4, 214, 0, 212,
	4, 2, 215, 8, 216
};

extern "C" __declspec(dllexport) Sint16 poly_00037BD8[] = {
	38, 13, 15, 22, 23, 30, 31, 38, 39, 46, 47, 54, 55, 62, 63, 70, 71, 78, 79, 86, 87, 94, 95, 102, 103, 110, 111, 118, 119, 126, 127, 134, 135, 142, 143, 150, 151, 158, 159,
	4, 167, 166, 159, 158,
	4, 175, 174, 167, 166
};

extern "C" __declspec(dllexport) Sint16 poly_00037C3A[] = {
	4, 176, 206, 178, 205,
	4, 180, 208, 177, 207
};

extern "C" __declspec(dllexport) Sint16 poly_00037C4E[] = {
	4, 179, 204, 182, 203,
	4, 183, 210, 181, 209
};

extern "C" __declspec(dllexport) Sint16 poly_00037C62[] = {
	0x8000u | 11, 191, 186, 184, 190, 188, 176, 177, 206, 207, 168, 169
};

NJS_TEX uv_00037C7C[] = {
	{ 1016, 0 },
	{ 1016, 254 },
	{ 960, 94 },
	{ 832, 254 },
	{ 800, 94 },
	{ 641, 254 },
	{ 673, 94 },
	{ 354, 174 },
	{ 354, 94 },
	{ 195, 94 },
	{ 960, 94 },
	{ 960, 0 },
	{ 1016, 0 },
	{ 3, 0 },
	{ 67, 0 },
	{ 3, 254 },
	{ 67, 94 },
	{ 195, 142 },
	{ 195, 94 },
	{ 354, 174 },
	{ 960, 82 },
	{ 960, 0 },
	{ 1016, 254 },
	{ 1016, 0 },
	{ 67, 0 },
	{ 3, 0 },
	{ 67, 82 },
	{ 3, 254 },
	{ 205, 82 },
	{ 227, 254 },
	{ 366, 82 },
	{ 482, 254 },
	{ 486, 82 },
	{ 641, 254 },
	{ 621, 165 },
	{ 1016, 254 },
	{ 720, 82 },
	{ 960, 82 },
	{ 486, 82 },
	{ 625, 82 },
	{ 621, 165 },
	{ 720, 82 },
	{ 641, 254 },
	{ 354, 174 },
	{ 322, 254 },
	{ 195, 142 },
	{ 258, 254 },
	{ 3, 254 }
};

NJS_TEX uv_00037D3C[] = {
	{ 10965, 255 },
	{ 10694, 255 },
	{ 10965, 0 },
	{ 10965, 0 },
	{ 10689, 0 },
	{ 10694, 255 },
	{ 10205, 0 },
	{ 10210, 255 },
	{ 9726, 0 },
	{ 9730, 255 },
	{ 9244, 0 },
	{ 9248, 255 },
	{ 8761, 0 },
	{ 8766, 255 },
	{ 8281, 0 },
	{ 8285, 255 },
	{ 7802, 0 },
	{ 7806, 255 },
	{ 7324, 0 },
	{ 7327, 255 },
	{ 6845, 0 },
	{ 6848, 255 },
	{ 6366, 0 },
	{ 6369, 255 },
	{ 5888, 0 },
	{ 5891, 255 },
	{ 5409, 0 },
	{ 5412, 255 },
	{ 4931, 0 },
	{ 4933, 255 },
	{ 4452, 0 },
	{ 4454, 255 },
	{ 3973, 0 },
	{ 3974, 255 },
	{ 3494, 0 },
	{ 3496, 255 },
	{ 3015, 0 },
	{ 3017, 255 },
	{ 2537, 0 },
	{ 2538, 255 },
	{ 2058, 0 },
	{ 2059, 255 },
	{ 1186, 0 },
	{ 1187, 255 },
	{ 480, 0 },
	{ 480, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 396, 255 },
	{ 0 },
	{ 0 },
	{ 480, 0 },
	{ 0, 255 },
	{ 10965, 0 },
	{ 10029, 0 },
	{ 10965, 255 },
	{ 10965, 255 },
	{ 10050, 255 },
	{ 10029, 0 },
	{ 9635, 255 },
	{ 9617, 0 },
	{ 9222, 255 },
	{ 9202, 0 },
	{ 8807, 255 },
	{ 8790, 0 },
	{ 8394, 255 },
	{ 8376, 0 },
	{ 7979, 255 },
	{ 7963, 0 },
	{ 7567, 255 },
	{ 7553, 0 },
	{ 7161, 255 },
	{ 7145, 0 },
	{ 6753, 255 },
	{ 6738, 0 },
	{ 6345, 255 },
	{ 6333, 0 },
	{ 5937, 255 },
	{ 5926, 0 },
	{ 5531, 255 },
	{ 5519, 0 },
	{ 5124, 255 },
	{ 5112, 0 },
	{ 4716, 255 },
	{ 4707, 0 },
	{ 4308, 255 },
	{ 4300, 0 },
	{ 3901, 255 },
	{ 3892, 0 },
	{ 3493, 255 },
	{ 3487, 0 },
	{ 3086, 255 },
	{ 3079, 0 },
	{ 2678, 255 },
	{ 2674, 0 },
	{ 1193, 255 },
	{ 1189, 0 },
	{ 396, 255 },
	{ 396, 0 },
	{ 0 }
};

NJS_TEX uv_00037ECC[] = {
	{ 10965, 255 },
	{ 10045, 255 },
	{ 10965, 0 },
	{ 10965, 0 },
	{ 9997, 0 },
	{ 10045, 255 },
	{ 9588, 0 },
	{ 9634, 255 },
	{ 9180, 0 },
	{ 9224, 255 },
	{ 8772, 0 },
	{ 8813, 255 },
	{ 8363, 0 },
	{ 8404, 255 },
	{ 7955, 0 },
	{ 7994, 255 },
	{ 7550, 0 },
	{ 7586, 255 },
	{ 7148, 0 },
	{ 7182, 255 },
	{ 6748, 0 },
	{ 6780, 255 },
	{ 6346, 0 },
	{ 6377, 255 },
	{ 5946, 0 },
	{ 5974, 255 },
	{ 5545, 0 },
	{ 5572, 255 },
	{ 5143, 0 },
	{ 5168, 255 },
	{ 4743, 0 },
	{ 4766, 255 },
	{ 4341, 0 },
	{ 4363, 255 },
	{ 3940, 0 },
	{ 3959, 255 },
	{ 3539, 0 },
	{ 3556, 255 },
	{ 3139, 0 },
	{ 3154, 255 },
	{ 2738, 0 },
	{ 2752, 255 },
	{ 1202, 0 },
	{ 1208, 255 },
	{ 400, 0 },
	{ 402, 255 },
	{ 0, 255 },
	{ 0 },
	{ 400, 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 470, 255 },
	{ 0 },
	{ 10965, 0 },
	{ 10695, 0 },
	{ 10965, 255 },
	{ 10965, 255 },
	{ 10711, 255 },
	{ 10695, 0 },
	{ 10225, 255 },
	{ 10209, 0 },
	{ 9743, 255 },
	{ 9727, 0 },
	{ 9259, 255 },
	{ 9244, 0 },
	{ 8774, 255 },
	{ 8759, 0 },
	{ 8290, 255 },
	{ 8278, 0 },
	{ 7809, 255 },
	{ 7797, 0 },
	{ 7328, 255 },
	{ 7316, 0 },
	{ 6847, 255 },
	{ 6835, 0 },
	{ 6365, 255 },
	{ 6354, 0 },
	{ 5884, 255 },
	{ 5874, 0 },
	{ 5403, 255 },
	{ 5393, 0 },
	{ 4920, 255 },
	{ 4913, 0 },
	{ 4439, 255 },
	{ 4432, 0 },
	{ 3958, 255 },
	{ 3952, 0 },
	{ 3477, 255 },
	{ 3472, 0 },
	{ 2996, 255 },
	{ 2992, 0 },
	{ 2515, 255 },
	{ 2511, 0 },
	{ 2033, 255 },
	{ 2031, 0 },
	{ 1176, 255 },
	{ 1173, 0 },
	{ 470, 255 },
	{ 470, 0 },
	{ 0 }
};

NJS_TEX uv_0003805C[] = {
	{ 0, -644 },
	{ 67, -541 },
	{ 0, -388 },
	{ 85, -737 },
	{ 1, 247 },
	{ 162, -628 },
	{ 254, 246 },
	{ 205, -320 },
	{ 254, -72 },
	{ 253, -390 },
	{ 129, 153 },
	{ 193, 249 },
	{ 97, 249 },
	{ 253, 249 },
	{ 1, 249 },
	{ 253, -37 },
	{ 6, -130 },
	{ 253, -504 },
	{ 1, -504 }
};

NJS_TEX uv_000380A8[] = {
	{ 1, -65 },
	{ 83, -21 },
	{ 1, 93 },
	{ 164, -184 },
	{ 1, 253 },
	{ 320, -253 },
	{ 508, 253 },
	{ 416, -172 },
	{ 508, -65 },
	{ 508, -193 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, -10 },
	{ 510, 14 },
	{ 0, -274 },
	{ 510, -226 },
	{ 0, -537 },
	{ 510, -466 },
	{ 0, -804 },
	{ 510, -706 },
	{ 0, -1067 },
	{ 510, -948 },
	{ 0, -1330 },
	{ 510, -1187 },
	{ 0, -1593 },
	{ 510, -1424 },
	{ 0, -1856 },
	{ 510, -1660 },
	{ 0, -2119 },
	{ 510, -1896 },
	{ 0, -2383 },
	{ 510, -2134 },
	{ 0, -2645 },
	{ 510, -2371 },
	{ 0, -2909 },
	{ 510, -2608 },
	{ 0, -3171 },
	{ 510, -2845 },
	{ 0, -3435 },
	{ 510, -3080 },
	{ 0, -3697 },
	{ 510, -3317 },
	{ 0, -3961 },
	{ 510, -3554 },
	{ 0, -4224 },
	{ 510, -3792 },
	{ 0, -4487 },
	{ 510, -4028 },
	{ 0, -4966 },
	{ 510, -4891 },
	{ 0, -5355 },
	{ 510, -5355 }
};

NJS_TEX uv_00038178[] = {
	{ 808, 0 },
	{ 406, 255 },
	{ 404, 0 },
	{ 0, 255 },
	{ 0 },
	{ 406, 255 },
	{ 815, 255 },
	{ 808, 0 },
	{ 1630, 255 },
	{ 1616, 0 },
	{ 3191, 255 },
	{ 3125, 0 },
	{ 3599, 255 },
	{ 3539, 0 },
	{ 4006, 255 },
	{ 3953, 0 },
	{ 4413, 255 },
	{ 4367, 0 },
	{ 4821, 255 },
	{ 4781, 0 },
	{ 5229, 255 },
	{ 5195, 0 },
	{ 5637, 255 },
	{ 5610, 0 },
	{ 6045, 255 },
	{ 6024, 0 },
	{ 6452, 255 },
	{ 6438, 0 },
	{ 6859, 255 },
	{ 6853, 0 },
	{ 7267, 255 },
	{ 7267, 0 },
	{ 7676, 255 },
	{ 7681, 0 },
	{ 8084, 255 },
	{ 8095, 0 },
	{ 8494, 255 },
	{ 8513, 0 },
	{ 8911, 255 },
	{ 8933, 0 },
	{ 9325, 255 },
	{ 9354, 0 },
	{ 9741, 255 },
	{ 9774, 0 },
	{ 10155, 255 },
	{ 10196, 0 },
	{ 10571, 255 },
	{ 10617, 0 },
	{ 11568, 0 },
	{ 11487, 255 },
	{ 11997, 0 },
	{ 11990, 255 },
	{ 12240, 0 },
	{ 12240, 255 },
	{ 11997, 0 },
	{ 11484, 0 },
	{ 11487, 255 },
	{ 10730, 0 },
	{ 10736, 255 },
	{ 9799, 0 },
	{ 9822, 255 },
	{ 9288, 0 },
	{ 9309, 255 },
	{ 8778, 0 },
	{ 8797, 255 },
	{ 8267, 0 },
	{ 8284, 255 },
	{ 7755, 0 },
	{ 7772, 255 },
	{ 7244, 0 },
	{ 7259, 255 },
	{ 6733, 0 },
	{ 6746, 255 },
	{ 6222, 0 },
	{ 6233, 255 },
	{ 5711, 0 },
	{ 5719, 255 },
	{ 5200, 0 },
	{ 5206, 255 },
	{ 4690, 0 },
	{ 4693, 255 },
	{ 4179, 0 },
	{ 4181, 255 },
	{ 3668, 0 },
	{ 3668, 255 },
	{ 3156, 0 },
	{ 3155, 255 },
	{ 2644, 0 },
	{ 2640, 255 },
	{ 2129, 0 },
	{ 2122, 255 },
	{ 1616, 0 },
	{ 1608, 255 },
	{ 1102, 0 },
	{ 1092, 255 },
	{ 586, 0 },
	{ 0 },
	{ 0, 255 },
	{ 292, 0 },
	{ 288, 255 },
	{ 586, 0 },
	{ 576, 255 },
	{ 1092, 255 },
	{ 10571, 255 },
	{ 11568, 0 },
	{ 11554, 255 },
	{ 11985, 0 },
	{ 11985, 255 }
};

NJS_TEX uv_00038328[] = {
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 1 },
	{ 1, 1 }
};

NJS_TEX uv_00038348[] = {
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 }
};

NJS_TEX uv_00038368[] = {
	{ 0 },
	{ 255, 0 },
	{ 0, 516 },
	{ 255, 513 },
	{ 0, 1032 },
	{ 255, 1024 },
	{ 0, 1548 },
	{ 255, 1535 },
	{ 0, 2065 },
	{ 255, 2049 },
	{ 0, 2581 },
	{ 255, 2560 },
	{ 0, 3093 },
	{ 255, 3070 },
	{ 0, 3601 },
	{ 255, 3579 },
	{ 0, 4108 },
	{ 255, 4087 },
	{ 0, 4615 },
	{ 255, 4596 },
	{ 0, 5123 },
	{ 255, 5105 },
	{ 0, 5630 },
	{ 255, 5615 },
	{ 0, 6137 },
	{ 255, 6124 },
	{ 0, 6643 },
	{ 255, 6633 },
	{ 0, 7150 },
	{ 255, 7142 },
	{ 0, 7657 },
	{ 255, 7651 },
	{ 0, 8164 },
	{ 255, 8160 },
	{ 0, 8671 },
	{ 255, 8670 },
	{ 0, 9180 },
	{ 255, 9180 },
	{ 255, 1020 },
	{ 0, 1020 },
	{ 255, 0 },
	{ 0 },
	{ 255, 765 },
	{ 0, 765 },
	{ 255, 0 },
	{ 0 }
};

NJS_TEX uv_00038420[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 }
};

NJS_TEX uv_00038440[] = {
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 253, 1 }
};

NJS_TEX uv_00038460[] = {
	{ 258, 23 },
	{ 336, 77 },
	{ 193, 11 },
	{ 388, 87 },
	{ 113, 189 },
	{ 508, 93 },
	{ 1, 253 },
	{ 508, -97 },
	{ 1, 93 },
	{ 508, -253 },
	{ 1, -253 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0003848C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_00037820, NULL, NULL, NULL, uv_00037C7C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_0003788E, NULL, NULL, NULL, uv_00037D3C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 6, poly_00037962, NULL, NULL, NULL, uv_00037ECC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_00037A36, NULL, NULL, NULL, uv_0003805C, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_00037A60, NULL, NULL, NULL, uv_000380A8, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 6, poly_00037ACC, NULL, NULL, NULL, uv_00038178, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, poly_00037BB0, NULL, NULL, NULL, uv_00038328, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 2, poly_00037BC4, NULL, NULL, NULL, uv_00038348, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 3, poly_00037BD8, NULL, NULL, NULL, uv_00038368, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 2, poly_00037C3A, NULL, NULL, NULL, uv_00038420, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 2, poly_00037C4E, NULL, NULL, NULL, uv_00038440, NULL },
	{ NJD_MESHSET_TRIMESH | 11, 1, poly_00037C62, NULL, NULL, NULL, uv_00038460, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000385AC[] = {
	{ -105, -42.59787f, 25.1896f },
	{ -105, -25, 114 },
	{ 0, -37.25984f, 52.86919f },
	{ 0, -27.5f, 114 },
	{ -105, -37.59787f, 25.1896f },
	{ -105, -20, 114 },
	{ -110, -37.59787f, 25.1896f },
	{ -110, -20, 114 },
	{ 0, -32.25984f, 51.69134f },
	{ 0, -22.5f, 114 },
	{ 5, -32.25984f, 51.69134f },
	{ 5, -22.5f, 114 },
	{ -110, -52.59787f, 29.31209f },
	{ -110, -35, 114 },
	{ 5, -47.25984f, 55.81383f },
	{ 5, -37.5f, 114 },
	{ -108.5778f, -20, 141.176f },
	{ -7.155579f, -20, 168.352f },
	{ -108.5778f, -15, 141.176f },
	{ -113.4074f, -15, 139.8819f },
	{ -7.155579f, -15, 168.352f },
	{ -2.325943f, -15, 169.6461f },
	{ -113.4074f, -30, 139.8819f },
	{ -2.325943f, -30, 169.6461f },
	{ -119.0673f, -15, 166.5f },
	{ -28.13467f, -15, 219 },
	{ -119.0673f, -10, 166.5f },
	{ -123.3975f, -10, 164 },
	{ -28.13467f, -10, 219 },
	{ -23.80453f, -10, 221.5f },
	{ -123.3975f, -25, 164 },
	{ -23.80453f, -25, 221.5f },
	{ -135.7538f, -10, 188.2462f },
	{ -61.50758f, -10, 262.4924f },
	{ -135.7538f, -5, 188.2462f },
	{ -139.2893f, -5, 184.7107f },
	{ -61.50758f, -5, 262.4924f },
	{ -57.97203f, -5, 266.0279f },
	{ -139.2893f, -20, 184.7107f },
	{ -57.97203f, -20, 266.0279f },
	{ -157.5f, -5, 204.9327f },
	{ -105, -2.5f, 295.8653f },
	{ -157.5f, 0, 204.9327f },
	{ -160, 0, 200.6025f },
	{ -105, 2.5f, 295.8653f },
	{ -102.5f, 2.5f, 300.1954f },
	{ -160, -15, 200.6025f },
	{ -102.5f, -12.5f, 300.1954f },
	{ -182.824f, 0, 215.4222f },
	{ -155.648f, 2.5f, 316.8444f },
	{ -182.824f, 5, 215.4222f },
	{ -184.1181f, 5, 210.5926f },
	{ -155.648f, 7.5f, 316.8444f },
	{ -154.3539f, 7.5f, 321.674f },
	{ -184.1181f, -10, 210.5926f },
	{ -154.3539f, -7.5f, 321.674f },
	{ -210, 3.75f, 219 },
	{ -210, 5, 324 },
	{ -210, 8.75f, 219 },
	{ -210, 8.75f, 214 },
	{ -210, 10, 324 },
	{ -210, 10, 329 },
	{ -210, -6.25f, 214 },
	{ -210, -5, 329 },
	{ -237.176f, 5, 215.4222f },
	{ -264.352f, 5, 316.8444f },
	{ -237.176f, 10, 215.4222f },
	{ -235.8819f, 10, 210.5926f },
	{ -264.352f, 10, 316.8444f },
	{ -265.6461f, 10, 321.674f },
	{ -235.8819f, -5, 210.5926f },
	{ -265.6461f, -5, 321.674f },
	{ -262.5f, 5, 204.9326f },
	{ -315, 5, 295.8653f },
	{ -262.5f, 10, 204.9326f },
	{ -260, 10, 200.6025f },
	{ -315, 10, 295.8653f },
	{ -317.5f, 10, 300.1954f },
	{ -260, -5, 200.6025f },
	{ -317.5f, -5, 300.1954f },
	{ -284.2462f, 5, 188.2462f },
	{ -358.4924f, 5, 262.4924f },
	{ -284.2462f, 10, 188.2462f },
	{ -280.7107f, 10, 184.7107f },
	{ -358.4924f, 10, 262.4924f },
	{ -362.0279f, 10, 266.0279f },
	{ -280.7107f, -5, 184.7107f },
	{ -362.0279f, -5, 266.0279f },
	{ -300.9326f, 5, 166.5f },
	{ -391.8653f, 5, 219 },
	{ -300.9326f, 10, 166.5f },
	{ -296.6025f, 10, 164 },
	{ -391.8653f, 10, 219 },
	{ -396.1954f, 10, 221.5f },
	{ -296.6025f, -5, 164 },
	{ -396.1954f, -5, 221.5f },
	{ -311.4221f, 5, 141.176f },
	{ -412.8444f, 5, 168.352f },
	{ -311.4221f, 10, 141.176f },
	{ -306.5926f, 10, 139.8819f },
	{ -412.8444f, 10, 168.352f },
	{ -417.674f, 10, 169.6461f },
	{ -306.5926f, -5, 139.8819f },
	{ -417.674f, -5, 169.6461f },
	{ -315, 5, 114 },
	{ -419.9999f, 5, 114 },
	{ -315, 10, 114 },
	{ -310, 10, 114 },
	{ -419.9999f, 10, 114 },
	{ -425, 10, 114 },
	{ -310, -5, 114 },
	{ -425, -5, 114 },
	{ -311.4221f, 5, 86.824f },
	{ -412.8444f, 5, 59.64801f },
	{ -311.4221f, 10, 86.824f },
	{ -306.5926f, 10, 88.11809f },
	{ -412.8444f, 10, 59.64801f },
	{ -417.674f, 10, 58.35391f },
	{ -306.5926f, -5, 88.11809f },
	{ -417.674f, -5, 58.35391f },
	{ -300.9326f, 5, 61.5f },
	{ -391.8653f, 5, 9.000014f },
	{ -300.9326f, 10, 61.5f },
	{ -296.6025f, 10, 64 },
	{ -391.8653f, 10, 9.000014f },
	{ -396.1954f, 10, 6.5f },
	{ -296.6025f, -5, 64 },
	{ -396.1954f, -5, 6.5f },
	{ -284.2462f, 5, 39.7538f },
	{ -358.4924f, 5, -34.4924f },
	{ -284.2462f, 10, 39.7538f },
	{ -280.7107f, 10, 43.28933f },
	{ -358.4924f, 10, -34.4924f },
	{ -362.0279f, 10, -38.02795f },
	{ -280.7107f, -5, 43.28933f },
	{ -362.0279f, -5, -38.02795f },
	{ -262.5f, 5, 23.06735f },
	{ -314.9999f, 5, -67.86529f },
	{ -262.5f, 10, 23.06735f },
	{ -260, 10, 27.39747f },
	{ -314.9999f, 10, -67.86529f },
	{ -317.5f, 10, -72.19546f },
	{ -260, -5, 27.39747f },
	{ -317.5f, -5, -72.19546f },
	{ -237.176f, 5, 12.5778f },
	{ -264.352f, 5, -88.84439f },
	{ -237.176f, 10, 12.5778f },
	{ -235.8819f, 10, 17.40744f },
	{ -264.352f, 10, -88.84439f },
	{ -265.6461f, 10, -93.67406f },
	{ -235.8819f, -5, 17.40744f },
	{ -265.6461f, -5, -93.67406f },
	{ -210, 5, 9.000031f },
	{ -210, 5, -95.99994f },
	{ -210, 10, 9.000031f },
	{ -210, 10, 14.00003f },
	{ -210, 10, -95.99994f },
	{ -210, 10, -101 },
	{ -210, -5, 14.00003f },
	{ -210, -5, -101 },
	{ -110, 5, 9.000031f },
	{ -110, 5, -95.99994f },
	{ -110, 10, 9.000031f },
	{ -110, 10, 14.00003f },
	{ -110, 10, -95.99994f },
	{ -110, 10, -101 },
	{ -110, -5, 14.00003f },
	{ -110, -5, -101 },
	{ -56.94209f, 5, 15.98524f },
	{ -29.7661f, 5, -85.43695f },
	{ -56.94209f, 10, 15.98524f },
	{ -58.2362f, 10, 20.81486f },
	{ -29.7661f, 10, -85.43695f },
	{ -28.472f, 10, -90.26662f },
	{ -58.2362f, -5, 20.81486f },
	{ -28.472f, -5, -90.26662f },
	{ -7.500015f, 5, 36.46482f },
	{ 44.99998f, 5, -54.46783f },
	{ -7.500015f, 10, 36.46482f },
	{ -10.00001f, 10, 40.79495f },
	{ 44.99998f, 10, -54.46783f },
	{ 47.5f, 10, -58.79797f },
	{ -10.00001f, -5, 40.79495f },
	{ 47.5f, -5, -58.79797f },
	{ -1.250015f, 5, -34.00149f },
	{ 3.727883f, -5, -17.74042f },
	{ 0.624985f, 5, -1.268341f },
	{ 4.375f, -5, 0.8967209f },
	{ 29.22011f, 5, -40.71698f },
	{ 33.125f, -5, -36.90859f },
	{ -0.841309f, 5, 9.851807f },
	{ -3.07312f, 5, -19.91663f },
	{ 4.159286f, 0, -0.18581f },
	{ -67.5f, -45, 14 },
	{ -71.6225f, -53.13168f, 24.07265f },
	{ -86.25f, -41.79716f, 31.07887f },
	{ -79.91608f, -50.72955f, 41.67954f },
	{ -33.75f, -42.06407f, 28.72318f },
	{ -36.55035f, -51.26336f, 34.02352f },
	{ -16.875f, -36.19222f, 59.93633f },
	{ -17.24749f, -46.19222f, 61.70311f },
	{ -86.25f, -46.79716f, 31.07886f },
	{ -67.5f, -50, 14 },
	{ -34.11811f, -5, 30.80491f },
	{ -34.11811f, 10, 30.80491f },
	{ -32.22105f, 10, 26.22504f },
	{ -32.22105f, 5, 26.22504f },
	{ 21.04726f, 5, -64.3894f },
	{ 21.04726f, 10, -64.3894f },
	{ 22.34139f, 10, -69.21905f },
	{ 22.34139f, -5, -69.21905f },
	{ -110, -47.55037f, 55.74311f },
	{ -105, -36.85313f, 53.65138f },
	{ -110, -32.55037f, 52.25689f },
	{ -105, -32.55037f, 52.25689f },
	{ 0, -32.37992f, 83.4346f },
	{ 0, -27.37992f, 82.84567f },
	{ 5, -27.37992f, 82.84567f },
	{ 5, -42.37992f, 84.90691f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00038FF0[] = {
	{ 0.347225f, -0.018365f, -0.937602f },
	{ 0.706511f, 0.70224f, -0.08775499f },
	{ -0.41641f, -0.050631f, -0.907766f },
	{ -0.709195f, 0.684793f, -0.167635f },
	{ 0.590425f, 0.431342f, -0.68216f },
	{ 0.725942f, 0.682896f, -0.08161999f },
	{ -0.624588f, 0.417373f, -0.660068f },
	{ -0.679179f, 0.708969f, -0.189944f },
	{ -0.549933f, 0.466702f, -0.6926489f },
	{ -0.680883f, 0.716098f, -0.153629f },
	{ 0.587194f, 0.452306f, -0.671284f },
	{ 0.723399f, 0.68865f, -0.049545f },
	{ -0.515152f, -0.722652f, -0.460861f },
	{ -0.705144f, -0.70505f, 0.075347f },
	{ 0.513281f, -0.7237549f, -0.461218f },
	{ 0.712959f, -0.683529f, 0.156456f },
	{ 0.690565f, 0.722235f, 0.038693f },
	{ -0.683083f, 0.665446f, -0.300965f },
	{ 0.739773f, 0.6682799f, 0.078347f },
	{ -0.613416f, 0.723086f, -0.317597f },
	{ -0.624899f, 0.736066f, -0.260208f },
	{ 0.722118f, 0.681114f, 0.120954f },
	{ -0.676875f, -0.731029f, -0.086243f },
	{ 0.69573f, -0.670927f, 0.256547f },
	{ 0.654959f, 0.724409f, 0.215081f },
	{ -0.578622f, 0.668517f, -0.467206f },
	{ 0.694288f, 0.6682799f, 0.267145f },
	{ -0.510314f, 0.723086f, -0.465538f },
	{ -0.548822f, 0.734311f, -0.399477f },
	{ 0.6638499f, 0.676438f, 0.318959f },
	{ -0.622459f, -0.733802f, -0.272174f },
	{ 0.608852f, -0.67656f, 0.414206f },
	{ 0.575961f, 0.726449f, 0.374886f },
	{ -0.436043f, 0.6718799f, -0.5987009f },
	{ 0.6014889f, 0.6682799f, 0.437737f },
	{ -0.372435f, 0.723086f, -0.581755f },
	{ -0.417506f, 0.728628f, -0.542946f },
	{ 0.572002f, 0.668946f, 0.474684f },
	{ -0.541797f, -0.732873f, -0.411525f },
	{ 0.468063f, -0.6794209f, 0.56507f },
	{ 0.457648f, 0.730647f, 0.506669f },
	{ -0.274992f, 0.657556f, -0.701427f },
	{ 0.467699f, 0.6682799f, 0.5784979f },
	{ -0.209176f, 0.723086f, -0.658325f },
	{ -0.257876f, 0.736066f, -0.625865f },
	{ 0.425087f, 0.681114f, 0.596142f },
	{ -0.414169f, -0.738875f, -0.531534f },
	{ 0.314538f, -0.663597f, 0.6787519f },
	{ 0.293747f, 0.731234f, 0.6156369f },
	{ -0.09702799f, 0.65765f, -0.747049f },
	{ 0.287747f, 0.676798f, 0.6776029f },
	{ -0.047337f, 0.730184f, -0.681609f },
	{ -0.121509f, 0.739468f, -0.6621349f },
	{ 0.229344f, 0.683603f, 0.692884f },
	{ -0.230007f, -0.7383429f, -0.633992f },
	{ 0.154653f, -0.6649089f, 0.730738f },
	{ 0.070512f, 0.730905f, 0.678827f },
	{ 0.058068f, 0.6645769f, -0.74496f },
	{ 0.059542f, 0.688523f, 0.722767f },
	{ 0.075679f, 0.741465f, -0.66671f },
	{ 0.018042f, 0.741186f, -0.671057f },
	{ 0.014092f, 0.684858f, 0.7285399f },
	{ -0.020994f, -0.7322209f, -0.680744f },
	{ -0.012929f, -0.668804f, 0.743327f },
	{ -0.158523f, 0.734705f, 0.659605f },
	{ 0.205054f, 0.676596f, -0.7072279f },
	{ -0.17419f, 0.685008f, 0.707405f },
	{ 0.191933f, 0.741344f, -0.643095f },
	{ 0.174736f, 0.7377f, -0.652124f },
	{ -0.190039f, 0.678874f, 0.709235f },
	{ 0.17485f, -0.733569f, -0.656737f },
	{ -0.190025f, -0.6779529f, 0.71012f },
	{ -0.337564f, 0.7377f, 0.584678f },
	{ 0.367127f, 0.678874f, -0.635883f },
	{ -0.367127f, 0.678874f, 0.635883f },
	{ 0.337564f, 0.7377f, -0.584678f },
	{ 0.337564f, 0.7377f, -0.584678f },
	{ -0.367127f, 0.678874f, 0.635883f },
	{ 0.337564f, -0.7377f, -0.584678f },
	{ -0.367127f, -0.678874f, 0.635883f },
	{ -0.477388f, 0.7377f, 0.477388f },
	{ 0.519196f, 0.678874f, -0.519196f },
	{ -0.519196f, 0.678874f, 0.519196f },
	{ 0.477388f, 0.7377f, -0.477388f },
	{ 0.477388f, 0.7377f, -0.477388f },
	{ -0.519196f, 0.678874f, 0.519196f },
	{ 0.477388f, -0.7377f, -0.477388f },
	{ -0.519196f, -0.678874f, 0.519196f },
	{ -0.5846789f, 0.7377f, 0.337564f },
	{ 0.635883f, 0.678874f, -0.367127f },
	{ -0.635883f, 0.678874f, 0.367127f },
	{ 0.584678f, 0.7377f, -0.337564f },
	{ 0.584678f, 0.7377f, -0.337564f },
	{ -0.635883f, 0.678874f, 0.367127f },
	{ 0.584678f, -0.7377f, -0.337564f },
	{ -0.635883f, -0.678874f, 0.367127f },
	{ -0.652124f, 0.7377f, 0.174736f },
	{ 0.709235f, 0.678874f, -0.190039f },
	{ -0.709235f, 0.678875f, 0.190039f },
	{ 0.652124f, 0.7377f, -0.174736f },
	{ 0.652124f, 0.7377f, -0.174736f },
	{ -0.709235f, 0.678874f, 0.190039f },
	{ 0.652124f, -0.7377f, -0.174736f },
	{ -0.709235f, -0.678874f, 0.190039f },
	{ -0.675128f, 0.7377f, 0 },
	{ 0.7342539f, 0.678874f, 0 },
	{ -0.734255f, 0.678874f, 0 },
	{ 0.675128f, 0.7377f, 0 },
	{ 0.675128f, 0.7377f, 0 },
	{ -0.7342539f, 0.678874f, 0 },
	{ 0.675128f, -0.7377f, 0 },
	{ -0.7342539f, -0.678874f, 0 },
	{ -0.652124f, 0.7377f, -0.174736f },
	{ 0.709235f, 0.678874f, 0.190039f },
	{ -0.709235f, 0.678875f, -0.190039f },
	{ 0.652124f, 0.7377f, 0.174736f },
	{ 0.652124f, 0.7377f, 0.174736f },
	{ -0.709235f, 0.678874f, -0.190039f },
	{ 0.652124f, -0.7377f, 0.174736f },
	{ -0.709235f, -0.678874f, -0.190039f },
	{ -0.584678f, 0.7377f, -0.337564f },
	{ 0.635883f, 0.678874f, 0.367127f },
	{ -0.635883f, 0.678874f, -0.367127f },
	{ 0.584678f, 0.7377f, 0.337564f },
	{ 0.584678f, 0.7377f, 0.337564f },
	{ -0.635883f, 0.678874f, -0.367127f },
	{ 0.584678f, -0.7377f, 0.337564f },
	{ -0.635883f, -0.678874f, -0.367127f },
	{ -0.477388f, 0.7377f, -0.477388f },
	{ 0.519196f, 0.678874f, 0.519196f },
	{ -0.519196f, 0.678874f, -0.519196f },
	{ 0.477388f, 0.7377f, 0.477388f },
	{ 0.477388f, 0.7377f, 0.477388f },
	{ -0.519196f, 0.678874f, -0.519196f },
	{ 0.477388f, -0.7377f, 0.477388f },
	{ -0.519196f, -0.678874f, -0.519196f },
	{ -0.337564f, 0.7377f, -0.584678f },
	{ 0.367127f, 0.678874f, 0.635883f },
	{ -0.367127f, 0.678874f, -0.635883f },
	{ 0.337564f, 0.7377f, 0.584678f },
	{ 0.337564f, 0.7377f, 0.584678f },
	{ -0.367127f, 0.678874f, -0.635883f },
	{ 0.337564f, -0.7377f, 0.584678f },
	{ -0.367127f, -0.678874f, -0.635883f },
	{ -0.174736f, 0.7377f, -0.652124f },
	{ 0.190039f, 0.678874f, 0.709235f },
	{ -0.190039f, 0.678874f, -0.709235f },
	{ 0.174736f, 0.7377f, 0.652124f },
	{ 0.174736f, 0.7377f, 0.652124f },
	{ -0.190039f, 0.678874f, -0.709235f },
	{ 0.174736f, -0.7377f, 0.652124f },
	{ -0.190039f, -0.678874f, -0.709235f },
	{ -0.045243f, 0.722128f, -0.690278f },
	{ 0.047172f, 0.692678f, 0.719703f },
	{ -0.047172f, 0.692678f, -0.719703f },
	{ 0.045243f, 0.722128f, 0.690278f },
	{ 0.045243f, 0.722128f, 0.690278f },
	{ -0.047172f, 0.692678f, -0.719703f },
	{ 0.045243f, -0.722128f, 0.690278f },
	{ -0.047172f, -0.692678f, -0.719703f },
	{ 0.045243f, 0.722128f, -0.690278f },
	{ -0.047172f, 0.692678f, 0.719703f },
	{ 0.047172f, 0.692678f, -0.719703f },
	{ -0.045243f, 0.722128f, 0.690278f },
	{ -0.045243f, 0.722128f, 0.690278f },
	{ 0.047172f, 0.692678f, -0.719703f },
	{ -0.045243f, -0.722128f, 0.690278f },
	{ 0.047172f, -0.692678f, -0.719703f },
	{ 0.174736f, 0.7377f, -0.652124f },
	{ -0.190039f, 0.678874f, 0.709235f },
	{ 0.190039f, 0.678874f, -0.709235f },
	{ -0.174736f, 0.7377f, 0.652124f },
	{ -0.174736f, 0.7377f, 0.652124f },
	{ 0.190039f, 0.678874f, -0.709235f },
	{ -0.174736f, -0.7377f, 0.652124f },
	{ 0.190039f, -0.678874f, -0.709235f },
	{ 0.970449f, 0.229551f, 0.07439499f },
	{ 0.612551f, 0.175923f, 0.770605f },
	{ 0.7775289f, 0.570777f, -0.263935f },
	{ 0.260803f, 0.584548f, 0.768301f },
	{ 0.260802f, 0.584548f, 0.768301f },
	{ 0.7775289f, 0.570777f, -0.263934f },
	{ 0.325816f, -0.5906489f, 0.738226f },
	{ 0.762688f, -0.611937f, -0.20938f },
	{ 0.224242f, 0.952782f, 0.204747f },
	{ 0.964702f, 0.087229f, 0.248479f },
	{ 0.49904f, 0.866155f, -0.02712f },
	{ 0.821337f, -0.548602f, 0.156339f },
	{ 0.324105f, 0.8623f, 0.389095f },
	{ 0.527604f, -0.593548f, 0.607729f },
	{ 0.612626f, 0.76621f, 0.19394f },
	{ 0.498362f, 0.8667459f, 0.019648f },
	{ 0.909172f, 0.407344f, 0.08647399f },
	{ -0.119104f, 0.5243689f, -0.84312f },
	{ -0.276502f, -0.942018f, -0.190128f },
	{ -0.148014f, 0.472319f, -0.868911f },
	{ -0.166681f, -0.983206f, -0.07431599f },
	{ 0.596145f, 0.274878f, -0.754357f },
	{ 0.327919f, -0.9160179f, -0.231044f },
	{ 0.310556f, 0.102702f, -0.94499f },
	{ 0.205185f, -0.879394f, -0.42961f },
	{ -0.20985f, -0.648464f, -0.73175f },
	{ -0.127126f, -0.461911f, -0.877768f },
	{ -0.270598f, -0.7071069f, 0.653281f },
	{ -0.270598f, 0.7071069f, 0.653281f },
	{ 0.270598f, 0.7071069f, -0.653281f },
	{ 0.270598f, 0.7071069f, -0.653281f },
	{ -0.270598f, 0.7071069f, 0.653281f },
	{ -0.270598f, 0.7071069f, 0.653281f },
	{ 0.270598f, 0.7071069f, -0.653282f },
	{ 0.270598f, -0.7071069f, -0.653281f },
	{ -0.712625f, -0.688229f, 0.13604f },
	{ 0.715578f, 0.687039f, -0.126199f },
	{ -0.708931f, 0.692257f, -0.134894f },
	{ 0.708931f, 0.692257f, -0.134894f },
	{ -0.699697f, 0.702683f, -0.129072f },
	{ -0.7071069f, 0.698589f, -0.109425f },
	{ 0.7071069f, 0.698589f, -0.109425f },
	{ 0.7015449f, -0.6990989f, 0.138188f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00039A34 = { vertex_000385AC, normal_00038FF0, LengthOfArray<Sint32>(vertex_000385AC), meshlist_0003848C, matlist_00037730, LengthOfArray<Uint16>(meshlist_0003848C), LengthOfArray<Uint16>(matlist_00037730), { -188.75f, -21.56584f, 114 }, 319.4355f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00039A5C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00039A34, 1070, 95, -1059, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00039A90[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00039B94[] = {
	4, 78, 100, 79, 96,
	0x8000u | 7, 89, 88, 85, 90, 96, 102, 100,
	4, 15, 110, 14, 106
};

extern "C" __declspec(dllexport) Sint16 poly_00039BB8[] = {
	3, 100, 78, 99,
	0x8000u | 20, 99, 75, 78, 67, 70, 59, 62, 51, 54, 43, 46, 35, 38, 27, 30, 19, 22, 11, 14, 106,
	3, 93, 77, 96,
	3, 103, 11, 106,
	3, 110, 15, 107,
	0x8000u | 20, 107, 13, 15, 21, 23, 29, 31, 37, 39, 45, 47, 53, 55, 61, 63, 69, 71, 77, 79, 96
};

extern "C" __declspec(dllexport) Sint16 poly_00039C2C[] = {
	0x8000u | 5, 82, 81, 99, 97, 75,
	0x8000u | 5, 83, 84, 94, 93, 76,
	0x8000u | 18, 10, 19, 18, 27, 26, 35, 34, 43, 42, 51, 50, 59, 58, 67, 66, 75, 74, 97,
	0x8000u | 18, 13, 20, 21, 28, 29, 36, 37, 44, 45, 52, 53, 60, 61, 68, 69, 76, 77, 93,
	0x8000u | 7, 5, 4, 107, 108, 13, 12, 20,
	0x8000u | 7, 2, 3, 104, 103, 10, 11, 19
};

extern "C" __declspec(dllexport) Sint16 poly_00039CB0[] = {
	3, 97, 74, 98,
	0x8000u | 20, 98, 72, 74, 64, 66, 56, 58, 48, 50, 40, 42, 32, 34, 24, 26, 16, 18, 8, 10, 104,
	3, 95, 73, 94,
	0x8000u | 20, 94, 76, 73, 68, 65, 60, 57, 52, 49, 44, 41, 36, 33, 28, 25, 20, 17, 12, 9, 109,
	3, 105, 8, 104,
	3, 108, 12, 109
};

extern "C" __declspec(dllexport) Sint16 poly_00039D24[] = {
	3, 98, 72, 95,
	3, 109, 9, 105,
	0x8000u | 20, 105, 8, 9, 16, 17, 24, 25, 32, 33, 40, 41, 48, 49, 56, 57, 64, 65, 72, 73, 95
};

extern "C" __declspec(dllexport) Sint16 poly_00039D5E[] = {
	4, 88, 92, 89, 85,
	0x8000u | 7, 81, 82, 101, 102, 91, 90, 86,
	3, 84, 85, 83,
	0x8000u | 8, 83, 80, 85, 87, 92, 86, 88, 90,
	4, 0, 2, 6, 3,
	14, 0, 6, 113, 114, 111, 112, 115, 116, 117, 118, 1, 7, 4, 5
};

extern "C" __declspec(dllexport) Sint16 poly_00039DBA[] = {
	4, 102, 100, 82, 99,
	4, 84, 93, 85, 96
};

extern "C" __declspec(dllexport) Sint16 poly_00039DCE[] = {
	4, 81, 97, 101, 98,
	4, 80, 95, 83, 94
};

extern "C" __declspec(dllexport) Sint16 poly_00039DE2[] = {
	0x8000u | 7, 95, 98, 80, 101, 87, 91, 86,
	8, 115, 117, 111, 1, 113, 109, 0, 105
};

extern "C" __declspec(dllexport) Sint16 poly_00039E04[] = {
	18, 78, 79, 70, 71, 62, 63, 54, 55, 46, 47, 38, 39, 30, 31, 22, 23, 14, 15
};

extern "C" __declspec(dllexport) Sint16 poly_00039E2A[] = {
	4, 7, 110, 5, 107,
	4, 3, 103, 6, 106
};

extern "C" __declspec(dllexport) Sint16 poly_00039E3E[] = {
	4, 4, 108, 1, 109,
	4, 0, 105, 2, 104
};

extern "C" __declspec(dllexport) Sint16 poly_00039E52[] = {
	8, 112, 114, 116, 6, 118, 106, 7, 110
};

NJS_TEX uv_00039E64[] = {
	{ 0, 758 },
	{ 0, 5 },
	{ 254, 758 },
	{ 254, 5 },
	{ 204, 188 },
	{ 164, 438 },
	{ 254, 3 },
	{ 62, 294 },
	{ 254, 506 },
	{ 0, 3 },
	{ 0, 506 },
	{ 255, 0 },
	{ 255, 765 },
	{ 0 },
	{ 0, 765 }
};

NJS_TEX uv_00039EA0[] = {
	{ 0, 255 },
	{ 1171, 255 },
	{ 0 },
	{ 0 },
	{ 1171, 0 },
	{ 1171, 255 },
	{ 1578, 0 },
	{ 1578, 255 },
	{ 1987, 0 },
	{ 1987, 255 },
	{ 2395, 0 },
	{ 2395, 255 },
	{ 2804, 0 },
	{ 2804, 255 },
	{ 3213, 0 },
	{ 3213, 255 },
	{ 3620, 0 },
	{ 3620, 255 },
	{ 4030, 0 },
	{ 4030, 255 },
	{ 4437, 0 },
	{ 4437, 255 },
	{ 5610, 255 },
	{ 0 },
	{ 808, 0 },
	{ 0, 255 },
	{ 5610, 0 },
	{ 4437, 0 },
	{ 5610, 255 },
	{ 5610, 255 },
	{ 4800, 255 },
	{ 5610, 0 },
	{ 5610, 0 },
	{ 4800, 0 },
	{ 4800, 255 },
	{ 4301, 0 },
	{ 4301, 255 },
	{ 3802, 0 },
	{ 3802, 255 },
	{ 3302, 0 },
	{ 3302, 255 },
	{ 2805, 0 },
	{ 2805, 255 },
	{ 2306, 0 },
	{ 2306, 255 },
	{ 1807, 0 },
	{ 1807, 255 },
	{ 1307, 0 },
	{ 1307, 255 },
	{ 808, 0 },
	{ 808, 255 },
	{ 0, 255 }
};

NJS_TEX uv_00039F70[] = {
	{ 0, 255 },
	{ 0 },
	{ 294, 255 },
	{ 292, 0 },
	{ 1181, 255 },
	{ 0 },
	{ 0, 255 },
	{ 238, 0 },
	{ 236, 255 },
	{ 952, 0 },
	{ 3696, 0 },
	{ 3345, 255 },
	{ 3379, 0 },
	{ 3035, 255 },
	{ 3063, 0 },
	{ 2726, 255 },
	{ 2747, 0 },
	{ 2418, 255 },
	{ 2432, 0 },
	{ 2108, 255 },
	{ 2117, 0 },
	{ 1800, 255 },
	{ 1800, 0 },
	{ 1490, 255 },
	{ 1484, 0 },
	{ 1181, 255 },
	{ 1169, 0 },
	{ 292, 0 },
	{ 4433, 255 },
	{ 3974, 0 },
	{ 3998, 255 },
	{ 3542, 0 },
	{ 3560, 255 },
	{ 3110, 0 },
	{ 3124, 255 },
	{ 2678, 0 },
	{ 2689, 255 },
	{ 2247, 0 },
	{ 2252, 255 },
	{ 1816, 0 },
	{ 1816, 255 },
	{ 1384, 0 },
	{ 1379, 255 },
	{ 952, 0 },
	{ 944, 255 },
	{ 236, 255 },
	{ 5378, 255 },
	{ 5358, 0 },
	{ 5378, 255 },
	{ 4406, 0 },
	{ 4433, 255 },
	{ 4406, 0 },
	{ 3974, 0 },
	{ 4865, 0 },
	{ 4836, 255 },
	{ 4865, 0 },
	{ 3653, 255 },
	{ 3696, 0 },
	{ 3653, 255 },
	{ 3345, 255 }
};

NJS_TEX uv_0003A060[] = {
	{ 0 },
	{ 1148, 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 1148, 255 },
	{ 1148, 0 },
	{ 1562, 255 },
	{ 1562, 0 },
	{ 1976, 255 },
	{ 1976, 0 },
	{ 2390, 255 },
	{ 2390, 0 },
	{ 2804, 255 },
	{ 2804, 0 },
	{ 3218, 255 },
	{ 3218, 0 },
	{ 3632, 255 },
	{ 3632, 0 },
	{ 4046, 255 },
	{ 4046, 0 },
	{ 4460, 255 },
	{ 4460, 0 },
	{ 5610, 0 },
	{ 0, 255 },
	{ 781, 255 },
	{ 0 },
	{ 0 },
	{ 781, 0 },
	{ 781, 255 },
	{ 1254, 0 },
	{ 1254, 255 },
	{ 1728, 0 },
	{ 1728, 255 },
	{ 2200, 0 },
	{ 2200, 255 },
	{ 2674, 0 },
	{ 2674, 255 },
	{ 3146, 0 },
	{ 3146, 255 },
	{ 3619, 0 },
	{ 3619, 255 },
	{ 4091, 0 },
	{ 4091, 255 },
	{ 4565, 0 },
	{ 4565, 255 },
	{ 5349, 255 },
	{ 5610, 255 },
	{ 4460, 255 },
	{ 5610, 0 },
	{ 5349, 0 },
	{ 4565, 0 },
	{ 5349, 255 }
};

NJS_TEX uv_0003A130[] = {
	{ 0, 255 },
	{ 0, -318 },
	{ 510, 255 },
	{ 510, -2550 },
	{ 510, -2138 },
	{ 0, -2550 },
	{ 0, -2550 },
	{ 0, -1975 },
	{ 510, -2138 },
	{ 0, -1768 },
	{ 510, -1890 },
	{ 0, -1561 },
	{ 510, -1642 },
	{ 0, -1354 },
	{ 510, -1394 },
	{ 0, -1147 },
	{ 510, -1147 },
	{ 0, -940 },
	{ 510, -899 },
	{ 0, -733 },
	{ 510, -650 },
	{ 0, -525 },
	{ 510, -402 },
	{ 0, -318 },
	{ 510, -155 },
	{ 510, 255 }
};

NJS_TEX uv_0003A198[] = {
	{ 350, 252 },
	{ 181, 169 },
	{ 206, 252 },
	{ 3, 251 },
	{ 960, 0 },
	{ 1016, 0 },
	{ 952, 84 },
	{ 1016, 251 },
	{ 726, 84 },
	{ 749, 252 },
	{ 356, 84 },
	{ 3, 0 },
	{ 3, 251 },
	{ 67, 0 },
	{ 67, 0 },
	{ 74, 84 },
	{ 3, 251 },
	{ 192, 84 },
	{ 181, 169 },
	{ 356, 84 },
	{ 350, 252 },
	{ 749, 252 },
	{ 960, 84 },
	{ 960, 0 },
	{ 1016, 251 },
	{ 1016, 0 },
	{ 960, 84 },
	{ 1016, 254 },
	{ 768, 84 },
	{ 768, 254 },
	{ 513, 84 },
	{ 513, 254 },
	{ 322, 84 },
	{ 322, 254 },
	{ 195, 84 },
	{ 195, 254 },
	{ 74, 84 },
	{ 3, 251 },
	{ 67, 0 },
	{ 3, 0 }
};

NJS_TEX uv_0003A238[] = {
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 }
};

NJS_TEX uv_0003A258[] = {
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_TEX uv_0003A278[] = {
	{ 1, 254 },
	{ 508, 254 },
	{ 1, 64 },
	{ 508, 64 },
	{ 75, 65 },
	{ 370, 167 },
	{ 165, 184 },
	{ 384, 204 },
	{ 448, 127 },
	{ 256, 229 },
	{ 508, 127 },
	{ 130, 156 },
	{ 508, 254 },
	{ 1, 127 },
	{ 1, 254 }
};

NJS_TEX uv_0003A2B4[] = {
	{ 1, -3793 },
	{ 253, -3793 },
	{ 1, -3346 },
	{ 253, -3346 },
	{ 1, -2836 },
	{ 253, -2836 },
	{ 1, -2326 },
	{ 253, -2326 },
	{ 1, -1816 },
	{ 253, -1816 },
	{ 1, -1306 },
	{ 253, -1306 },
	{ 1, -796 },
	{ 253, -796 },
	{ 1, -286 },
	{ 253, -286 },
	{ 1, 223 },
	{ 253, 223 }
};

NJS_TEX uv_0003A2FC[] = {
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 253 },
	{ 1, 253 }
};

NJS_TEX uv_0003A31C[] = {
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 1 },
	{ 1, 1 }
};

NJS_TEX uv_0003A33C[] = {
	{ 128, 48 },
	{ 65, 198 },
	{ 192, 98 },
	{ 0, 253 },
	{ 222, 253 },
	{ 0, 1 },
	{ 254, 253 },
	{ 254, 1 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0003A35C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00039B94, NULL, NULL, NULL, uv_00039E64, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_00039BB8, NULL, NULL, NULL, uv_00039EA0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 6, poly_00039C2C, NULL, NULL, NULL, uv_00039F70, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 6, poly_00039CB0, NULL, NULL, NULL, uv_0003A060, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 3, poly_00039D24, NULL, NULL, NULL, uv_0003A130, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 6, poly_00039D5E, NULL, NULL, NULL, uv_0003A198, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, poly_00039DBA, NULL, NULL, NULL, uv_0003A238, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 2, poly_00039DCE, NULL, NULL, NULL, uv_0003A258, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 2, poly_00039DE2, NULL, NULL, NULL, uv_0003A278, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 1, poly_00039E04, NULL, NULL, NULL, uv_0003A2B4, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 2, poly_00039E2A, NULL, NULL, NULL, uv_0003A2FC, NULL },
	{ NJD_MESHSET_TRIMESH | 11, 2, poly_00039E3E, NULL, NULL, NULL, uv_0003A31C, NULL },
	{ NJD_MESHSET_TRIMESH | 12, 1, poly_00039E52, NULL, NULL, NULL, uv_0003A33C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0003A494[] = {
	{ 35.00619f, 150, 186.4719f },
	{ 140.006f, 150, 186.4719f },
	{ 35.00619f, 155, 186.4719f },
	{ 30.00607f, 155, 186.4719f },
	{ 140.006f, 155, 186.4719f },
	{ 145.0061f, 155, 186.4719f },
	{ 30.00607f, 140, 186.4719f },
	{ 145.0061f, 140, 186.4719f },
	{ 35.00619f, 150, 86.47192f },
	{ 140.006f, 150, 86.47186f },
	{ 35.00619f, 155, 86.47192f },
	{ 30.00607f, 155, 86.4718f },
	{ 140.006f, 155, 86.47186f },
	{ 145.0061f, 155, 86.47186f },
	{ 30.00607f, 140, 86.4718f },
	{ 145.0061f, 140, 86.47186f },
	{ 32.65134f, 150, 59.55639f },
	{ 136.056f, 150, 41.32336f },
	{ 32.65134f, 155, 59.55639f },
	{ 27.7272f, 155, 60.42462f },
	{ 136.056f, 155, 41.32336f },
	{ 140.9802f, 155, 40.45514f },
	{ 27.7272f, 140, 60.42462f },
	{ 140.9802f, 140, 40.45514f },
	{ 25.65854f, 150, 33.45874f },
	{ 124.3261f, 150, -2.453369f },
	{ 25.65854f, 155, 33.45874f },
	{ 20.95993f, 155, 35.16882f },
	{ 124.3261f, 155, -2.453369f },
	{ 129.0246f, 155, -4.163452f },
	{ 20.95993f, 140, 35.16882f },
	{ 129.0246f, 140, -4.163452f },
	{ 14.24008f, 150, 8.971802f },
	{ 105.1726f, 150, -43.52807f },
	{ 14.24008f, 155, 8.971802f },
	{ 9.909882f, 155, 11.4718f },
	{ 105.1726f, 155, -43.52807f },
	{ 109.5028f, 155, -46.02813f },
	{ 9.909882f, 140, 11.4718f },
	{ 109.5028f, 140, -46.02813f },
	{ -1.256989f, 150, -13.16028f },
	{ 79.17758f, 150, -80.65282f },
	{ -1.256989f, 155, -13.16028f },
	{ -5.087311f, 155, -9.946288f },
	{ 79.17758f, 155, -80.65282f },
	{ 83.00784f, 155, -83.86681f },
	{ -5.087311f, 140, -9.946288f },
	{ 83.00784f, 140, -83.86681f },
	{ -20.36185f, 150, -32.26508f },
	{ 47.13083f, 150, -112.6996f },
	{ -20.36185f, 155, -32.26508f },
	{ -23.57583f, 155, -28.43481f },
	{ 47.13083f, 155, -112.6996f },
	{ 50.34481f, 155, -116.5299f },
	{ -23.57583f, 140, -28.43481f },
	{ 50.34481f, 140, -116.5299f },
	{ -42.49392f, 150, -47.76215f },
	{ 10.00607f, 150, -138.6947f },
	{ -42.49392f, 155, -47.76215f },
	{ -44.99392f, 155, -43.43195f },
	{ 10.00607f, 155, -138.6947f },
	{ 12.50607f, 155, -143.0248f },
	{ -44.99392f, 140, -43.43195f },
	{ 12.50607f, 140, -143.0248f },
	{ -66.9808f, 150, -59.1806f },
	{ -31.06875f, 150, -157.8481f },
	{ -66.9808f, 155, -59.1806f },
	{ -68.69094f, 155, -54.48206f },
	{ -31.06875f, 155, -157.8481f },
	{ -29.35861f, 155, -162.5466f },
	{ -68.69094f, 140, -54.48206f },
	{ -29.35861f, 140, -162.5466f },
	{ -93.07846f, 150, -66.17346f },
	{ -74.84536f, 150, -169.5781f },
	{ -93.07846f, 155, -66.17346f },
	{ -93.94675f, 155, -61.24927f },
	{ -74.84536f, 155, -169.5781f },
	{ -73.9772f, 155, -174.5021f },
	{ -93.94675f, 140, -61.24927f },
	{ -73.9772f, 140, -174.5021f },
	{ -173.3262f, 150, -186.9429f },
	{ -191.5592f, 155, -83.5382f },
	{ -192.4275f, 155, -78.61414f },
	{ -173.3262f, 155, -186.9429f },
	{ -172.4579f, 155, -191.8669f },
	{ -172.4579f, 140, -191.8669f },
	{ -162.4427f, 150, -150.2405f },
	{ -172.8845f, 150, -171.0917f },
	{ -157.4427f, 140, -150.2405f },
	{ -167.4503f, 140, -168.5537f },
	{ -172.4351f, 140, -106.9274f },
	{ -172.0009f, 150, -109.3894f },
	{ -172.6674f, 145, -172.3227f },
	{ -147.8377f, 155, -187.5257f },
	{ -148.706f, 155, -182.6017f },
	{ -148.706f, 150, -182.6017f },
	{ -147.8377f, 140, -187.5257f },
	{ -166.939f, 155, -79.19704f },
	{ -166.939f, 150, -79.19704f },
	{ -167.8073f, 155, -74.2729f },
	{ -167.8073f, 140, -74.2729f },
	{ -191.5592f, 150, -83.5382f },
	{ -192.4275f, 140, -78.61414f },
	{ 30.00607f, 155, 161.4719f },
	{ 35.00619f, 155, 161.4719f },
	{ 35.00619f, 150, 161.4719f },
	{ 30.00607f, 140, 161.4719f },
	{ 145.0061f, 155, 161.4719f },
	{ 140.006f, 155, 161.4719f },
	{ 140.006f, 150, 161.4719f },
	{ 145.0061f, 140, 161.4719f },
	{ 87.5061f, 150, 166.4719f },
	{ 87.50607f, 140, 166.4719f },
	{ 61.25615f, 150, 181.4719f },
	{ 58.75607f, 140, 181.4719f },
	{ 113.7561f, 150, 171.4719f },
	{ 116.2561f, 140, 171.4719f },
	{ 126.881f, 150, 186.4719f },
	{ 130.6311f, 140, 186.4719f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0003AA28[] = {
	{ 0.368622f, 0.24086f, 0.897833f },
	{ -0.301506f, 0.30151f, 0.9045359f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.577347f, 0.57735f, 0.577354f },
	{ 0.5773529f, 0.577351f, 0.577346f },
	{ -0.541454f, -0.576699f, 0.611756f },
	{ 0.577351f, -0.577351f, 0.5773489f },
	{ 0.69635f, 0.7170579f, -0.030404f },
	{ -0.7159809f, 0.6974199f, 0.031261f },
	{ 0.7159809f, 0.697419f, -0.031261f },
	{ -0.69635f, 0.7170579f, 0.030404f },
	{ -0.69635f, 0.7170579f, 0.030404f },
	{ 0.7159809f, 0.6974199f, -0.03126f },
	{ -0.69635f, -0.7170579f, 0.030404f },
	{ 0.7159809f, -0.6974199f, -0.03126f },
	{ 0.675935f, 0.72726f, -0.119186f },
	{ -0.71468f, 0.688006f, 0.126017f },
	{ 0.7146789f, 0.688006f, -0.126017f },
	{ -0.675934f, 0.72726f, 0.119186f },
	{ -0.675935f, 0.72726f, 0.119185f },
	{ 0.71468f, 0.688006f, -0.126017f },
	{ -0.675934f, -0.72726f, 0.119186f },
	{ 0.71468f, -0.688006f, -0.126017f },
	{ 0.644969f, 0.7272609f, -0.234749f },
	{ -0.68194f, 0.688006f, 0.248206f },
	{ 0.68194f, 0.688006f, -0.248205f },
	{ -0.644969f, 0.72726f, 0.234749f },
	{ -0.644969f, 0.7272609f, 0.234749f },
	{ 0.6819389f, 0.688006f, -0.248206f },
	{ -0.644969f, -0.72726f, 0.234749f },
	{ 0.6819389f, -0.688006f, -0.248206f },
	{ 0.594407f, 0.72726f, -0.343181f },
	{ -0.6284789f, 0.688006f, 0.362853f },
	{ 0.6284789f, 0.688006f, -0.362853f },
	{ -0.5944059f, 0.7272609f, 0.343181f },
	{ -0.5944059f, 0.72726f, 0.343181f },
	{ 0.6284789f, 0.688006f, -0.362853f },
	{ -0.5944059f, -0.7272609f, 0.343181f },
	{ 0.6284789f, -0.688006f, -0.362853f },
	{ 0.5257829f, 0.72726f, -0.441185f },
	{ -0.555922f, 0.688006f, 0.466474f },
	{ 0.555922f, 0.688006f, -0.466475f },
	{ -0.5257829f, 0.72726f, 0.441186f },
	{ -0.525784f, 0.72726f, 0.441185f },
	{ 0.555922f, 0.688006f, -0.466474f },
	{ -0.5257829f, -0.72726f, 0.441186f },
	{ 0.555922f, -0.688006f, -0.466474f },
	{ 0.441185f, 0.72726f, -0.525784f },
	{ -0.466475f, 0.688006f, 0.555922f },
	{ 0.466474f, 0.688006f, -0.555922f },
	{ -0.441185f, 0.72726f, 0.5257829f },
	{ -0.441185f, 0.72726f, 0.5257829f },
	{ 0.466474f, 0.688006f, -0.555922f },
	{ -0.441185f, -0.72726f, 0.5257829f },
	{ 0.466474f, -0.688006f, -0.555922f },
	{ 0.343181f, 0.72726f, -0.5944059f },
	{ -0.362852f, 0.688006f, 0.6284789f },
	{ 0.362853f, 0.688006f, -0.6284789f },
	{ -0.343181f, 0.72726f, 0.594407f },
	{ -0.34318f, 0.7272609f, 0.594407f },
	{ 0.362852f, 0.688006f, -0.6284789f },
	{ -0.343181f, -0.72726f, 0.594407f },
	{ 0.362852f, -0.688006f, -0.6284789f },
	{ 0.23475f, 0.72726f, -0.644969f },
	{ -0.248205f, 0.688006f, 0.68194f },
	{ 0.248206f, 0.688006f, -0.6819389f },
	{ -0.234749f, 0.7272609f, 0.644969f },
	{ -0.234749f, 0.72726f, 0.644969f },
	{ 0.248205f, 0.688006f, -0.68194f },
	{ -0.234749f, -0.7272609f, 0.644969f },
	{ 0.248205f, -0.688006f, -0.68194f },
	{ 0.150861f, 0.7170579f, -0.680492f },
	{ -0.155114f, 0.6974199f, 0.699675f },
	{ 0.155114f, 0.697419f, -0.699675f },
	{ -0.150861f, 0.717057f, 0.680492f },
	{ -0.150861f, 0.7170579f, 0.680492f },
	{ 0.155114f, 0.6974199f, -0.699675f },
	{ -0.150861f, -0.717057f, 0.680492f },
	{ 0.155114f, -0.6974199f, -0.699675f },
	{ -0.948029f, 0.230818f, 0.219009f },
	{ -0.468321f, 0.577351f, -0.668836f },
	{ -0.668837f, 0.57735f, 0.46832f },
	{ -0.668837f, 0.57735f, 0.468321f },
	{ -0.46832f, 0.577351f, -0.668836f },
	{ -0.5168329f, -0.589948f, -0.6203589f },
	{ -0.927433f, 0.359504f, 0.10308f },
	{ -0.793506f, 0.567087f, 0.220817f },
	{ -0.569328f, -0.820502f, 0.051388f },
	{ -0.467416f, -0.858164f, 0.212314f },
	{ -0.554336f, -0.7775829f, -0.296776f },
	{ -0.7725469f, 0.520386f, -0.363827f },
	{ -0.900046f, -0.377476f, 0.217784f },
	{ 0.122788f, 0.7071069f, -0.696364f },
	{ -0.122788f, 0.7071069f, 0.696364f },
	{ -0.122788f, 0.7071069f, 0.696364f },
	{ 0.122788f, -0.7071069f, -0.696364f },
	{ 0.122787f, 0.7071069f, -0.696364f },
	{ 0.122787f, 0.7071069f, -0.696364f },
	{ -0.122788f, 0.7071069f, 0.696364f },
	{ -0.122788f, -0.7071069f, 0.696364f },
	{ -0.768448f, 0.171188f, -0.616589f },
	{ -0.744628f, -0.565159f, 0.355141f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.121206f, 0.6135679f, 0.780284f },
	{ 0.115293f, -0.660173f, 0.742212f },
	{ 0.260194f, 0.649345f, 0.7145979f },
	{ 0.214991f, -0.695971f, 0.6851299f },
	{ -0.351984f, 0.574745f, 0.738766f },
	{ -0.354488f, -0.7121119f, 0.605999f },
	{ -0.381382f, 0.5680569f, 0.729287f },
	{ -0.235236f, -0.661929f, 0.711697f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0003AFBC = { vertex_0003A494, normal_0003AA28, LengthOfArray<Sint32>(vertex_0003A494), meshlist_0003A35C, matlist_00039A90, LengthOfArray<Uint16>(meshlist_0003A35C), LengthOfArray<Uint16>(matlist_00039A90), { -23.71072f, 147.5f, -2.69751f }, 253.4767f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0003AFE4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0003AFBC, 608.4427f, 0, -695.7595f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0003B018[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 21, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 86, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 136, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0003B0E0[] = {
	0x8000u | 12, 0, 4, 9, 11, 2, 6, 3, 7, 8, 10, 1, 5,
	0x8000u | 6, 1, 0, 8, 9, 3, 2,
	0x8000u | 6, 4, 5, 11, 10, 6, 7
};

extern "C" __declspec(dllexport) Sint16 poly_0003B116[] = {
	10, 12, 18, 16, 19, 17, 15, 13, 14, 12, 18,
	4, 19, 18, 15, 14,
	3, 26, 27, 28,
	3, 29, 22, 30,
	0x8000u | 11, 21, 20, 31, 29, 23, 22, 26, 30, 28, 25, 21,
	6, 21, 28, 31, 27, 23, 26,
	0x8000u | 5, 25, 30, 24, 29, 20
};

extern "C" __declspec(dllexport) Sint16 poly_0003B178[] = {
	6, 37, 56, 33, 55, 32, 53,
	6, 32, 53, 36, 54, 37, 56
};

extern "C" __declspec(dllexport) Sint16 poly_0003B194[] = {
	10, 42, 34, 74, 45, 40, 47, 75, 52, 51, 50,
	8, 57, 64, 87, 91, 59, 90, 60, 86
};

extern "C" __declspec(dllexport) Sint16 poly_0003B1BC[] = {
	4, 45, 67, 47, 66,
	0x8000u | 7, 46, 39, 50, 70, 52, 73, 65,
	0x8000u | 5, 40, 41, 75, 38, 51,
	13, 51, 50, 38, 46, 69, 39, 38, 70, 41, 73, 35, 65, 68
};

extern "C" __declspec(dllexport) Sint16 poly_0003B1FE[] = {
	3, 72, 44, 48,
	12, 40, 41, 48, 49, 72, 71, 44, 35, 34, 68, 45, 67,
	4, 47, 66, 52, 65,
	4, 49, 41, 71, 35,
	0x8000u | 6, 34, 44, 42, 48, 74, 40,
	0x8000u | 9, 93, 87, 58, 57, 63, 64, 94, 91, 90,
	0x8000u | 10, 90, 88, 94, 89, 63, 96, 58, 43, 93, 85,
	0x8000u | 11, 88, 90, 84, 92, 95, 97, 62, 61, 93, 59, 87,
	3, 62, 85, 93,
	0x8000u | 7, 59, 61, 60, 97, 86, 92, 90
};

extern "C" __declspec(dllexport) Sint16 poly_0003B29C[] = {
	4, 53, 65, 54, 66,
	4, 56, 67, 55, 68
};

extern "C" __declspec(dllexport) Sint16 poly_0003B2B0[] = {
	4, 55, 68, 53, 65,
	4, 54, 66, 56, 67
};

extern "C" __declspec(dllexport) Sint16 poly_0003B2C4[] = {
	4, 82, 83, 80, 81,
	0x8000u | 8, 80, 82, 76, 78, 77, 79, 81, 83
};

extern "C" __declspec(dllexport) Sint16 poly_0003B2E0[] = {
	4, 83, 82, 79, 78
};

NJS_TEX uv_0003B2EC[] = {
	{ 182, 252 },
	{ 256, 253 },
	{ 34, 126 },
	{ 108, 126 },
	{ 155, 0 },
	{ 211, 0 },
	{ 126, 1 },
	{ 181, 2 },
	{ 0, 127 },
	{ 72, 128 },
	{ 143, 254 },
	{ 215, 254 },
	{ 143, 254 },
	{ 182, 252 },
	{ 0, 127 },
	{ 34, 126 },
	{ 126, 1 },
	{ 155, 0 },
	{ 256, 253 },
	{ 215, 254 },
	{ 108, 126 },
	{ 72, 128 },
	{ 211, 0 },
	{ 181, 2 }
};

NJS_TEX uv_0003B34C[] = {
	{ 0, 255 },
	{ 133, -254 },
	{ 133, 255 },
	{ 256, -254 },
	{ 256, 255 },
	{ 122, -254 },
	{ 122, 255 },
	{ 0, -254 },
	{ 0, 255 },
	{ 133, -254 },
	{ 256, -254 },
	{ 133, -254 },
	{ 122, -254 },
	{ 0, -254 },
	{ 104, -255 },
	{ 86, -255 },
	{ 230, 0 },
	{ 161, 0 },
	{ 16, -255 },
	{ 256, 0 },
	{ 0, 254 },
	{ 16, 254 },
	{ 139, 0 },
	{ 161, 0 },
	{ 0, -255 },
	{ 16, -255 },
	{ 104, -255 },
	{ 256, 0 },
	{ 230, 0 },
	{ 86, 254 },
	{ 0, 254 },
	{ 0, 254 },
	{ 230, 0 },
	{ 139, 0 },
	{ 86, -255 },
	{ 0, -255 },
	{ 104, -255 },
	{ 86, 254 },
	{ 256, 0 },
	{ 104, 254 },
	{ 161, 0 },
	{ 16, 254 }
};

NJS_TEX uv_0003B3F4[] = {
	{ 254, 254 },
	{ 254, 65 },
	{ 0, 254 },
	{ 0, 65 },
	{ 254, 189 },
	{ 254, 0 },
	{ 0, 189 },
	{ 0 },
	{ 254, 189 },
	{ 255, 0 },
	{ 0, 254 },
	{ 0, 65 }
};

NJS_TEX uv_0003B424[] = {
	{ 492, -45 },
	{ 510, 37 },
	{ 446, -109 },
	{ 510, 254 },
	{ 386, -158 },
	{ 0, 255 },
	{ 332, -170 },
	{ 0, -254 },
	{ 268, -191 },
	{ 221, -254 },
	{ 378, 25 },
	{ 422, 80 },
	{ 340, -41 },
	{ 440, 189 },
	{ 304, -120 },
	{ 66, 189 },
	{ 242, -172 },
	{ 66, -190 }
};

NJS_TEX uv_0003B46C[] = {
	{ 0 },
	{ 0, 254 },
	{ 510, 0 },
	{ 508, 254 },
	{ 286, 58 },
	{ 177, 152 },
	{ 288, 0 },
	{ 122, 141 },
	{ 508, 0 },
	{ 57, 156 },
	{ 508, 254 },
	{ 122, 0 },
	{ 122, 92 },
	{ 177, 0 },
	{ 177, 82 },
	{ 241, 0 },
	{ 241, 0 },
	{ 288, 0 },
	{ 177, 82 },
	{ 286, 58 },
	{ 245, 130 },
	{ 177, 152 },
	{ 177, 82 },
	{ 122, 141 },
	{ 122, 92 },
	{ 57, 156 },
	{ 0, 185 },
	{ 508, 254 },
	{ 0, 254 }
};

NJS_TEX uv_0003B4E0[] = {
	{ 126, 123 },
	{ 143, 63 },
	{ 98, 89 },
	{ 48, 0 },
	{ 70, 92 },
	{ 98, 89 },
	{ 95, 177 },
	{ 126, 123 },
	{ 49, 198 },
	{ 143, 63 },
	{ 0, 185 },
	{ 146, 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 },
	{ 255, 0 },
	{ 255, 254 },
	{ 0 },
	{ 0, 254 },
	{ 95, 177 },
	{ 70, 92 },
	{ 49, 198 },
	{ 0, 185 },
	{ 146, 0 },
	{ 143, 63 },
	{ 104, 0 },
	{ 98, 89 },
	{ 72, 0 },
	{ 48, 0 },
	{ 155, 127 },
	{ 155, 254 },
	{ 103, 127 },
	{ 110, 254 },
	{ 72, 127 },
	{ 73, 255 },
	{ 0, 127 },
	{ 0, 254 },
	{ 254, 254 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0, 127 },
	{ 0 },
	{ 72, 127 },
	{ 87, 0 },
	{ 103, 127 },
	{ 121, 0 },
	{ 155, 127 },
	{ 166, 0 },
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 127 },
	{ 135, 0 },
	{ 135, 127 },
	{ 93, 0 },
	{ 93, 127 },
	{ 68, 127 },
	{ 93, 254 },
	{ 68, 254 },
	{ 93, 0 },
	{ 68, 0 },
	{ 68, 127 },
	{ 93, 254 },
	{ 93, 127 },
	{ 135, 254 },
	{ 135, 127 },
	{ 255, 254 },
	{ 254, 127 },
	{ 0, 254 }
};

NJS_TEX uv_0003B5F4[] = {
	{ 0, 183 },
	{ 0 },
	{ 255, 183 },
	{ 255, 0 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_TEX uv_0003B614[] = {
	{ 0, 255 },
	{ 0 },
	{ 508, 183 },
	{ 508, 0 },
	{ 508, 183 },
	{ 510, 0 },
	{ 0, 254 },
	{ 0 }
};

NJS_TEX uv_0003B634[] = {
	{ -243, 32 },
	{ -247, 0 },
	{ -244, 254 },
	{ -247, 222 },
	{ 10, 254 },
	{ 11, 32 },
	{ -15, 254 },
	{ -16, 32 },
	{ -8, 222 },
	{ -8, 0 },
	{ 7, 222 },
	{ 7, 0 }
};

NJS_TEX uv_0003B664[] = {
	{ 254, 254 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0003B674[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0003B0E0, NULL, NULL, NULL, uv_0003B2EC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 7, poly_0003B116, NULL, NULL, NULL, uv_0003B34C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0003B178, NULL, NULL, NULL, uv_0003B3F4, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_0003B194, NULL, NULL, NULL, uv_0003B424, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 4, poly_0003B1BC, NULL, NULL, NULL, uv_0003B46C, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 10, poly_0003B1FE, NULL, NULL, NULL, uv_0003B4E0, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, poly_0003B29C, NULL, NULL, NULL, uv_0003B5F4, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 2, poly_0003B2B0, NULL, NULL, NULL, uv_0003B614, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 2, poly_0003B2C4, NULL, NULL, NULL, uv_0003B634, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 1, poly_0003B2E0, NULL, NULL, NULL, uv_0003B664, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0003B764[] = {
	{ 90.73969f, 348.755f, 260.0539f },
	{ 90.73967f, 346.7684f, 269.8546f },
	{ 90.73965f, 686.2678f, 338.6527f },
	{ 90.73965f, 684.2812f, 348.4534f },
	{ 100.7397f, 348.755f, 260.0539f },
	{ 100.7397f, 346.7684f, 269.8546f },
	{ 100.7397f, 686.2678f, 338.6527f },
	{ 100.7397f, 684.2812f, 348.4534f },
	{ 58.69313f, 512.3505f, 282.0007f },
	{ 58.69312f, 514.3371f, 272.2f },
	{ 68.69312f, 512.3505f, 282.0007f },
	{ 68.69312f, 514.3371f, 272.2f },
	{ 233.5593f, 321.2959f, 273.5065f },
	{ 243.6463f, 322.4101f, 273.5065f },
	{ 205.0127f, 579.7631f, 273.5065f },
	{ 215.0997f, 580.877f, 273.5065f },
	{ 233.5593f, 321.2959f, 263.3582f },
	{ 243.6463f, 322.4101f, 263.3582f },
	{ 205.0127f, 579.7631f, 263.3582f },
	{ 215.0997f, 580.877f, 263.3582f },
	{ 230.1633f, 580.7773f, -35.71462f },
	{ 240.2502f, 581.8914f, -35.71462f },
	{ 206.8481f, 791.8771f, -35.71462f },
	{ 216.9351f, 792.9913f, -35.71462f },
	{ 230.1633f, 580.7773f, -45.86298f },
	{ 240.2504f, 581.8914f, -45.86297f },
	{ 206.8482f, 791.8771f, -45.86298f },
	{ 216.9351f, 792.9913f, -45.86297f },
	{ 205.1917f, 685.265f, -56.90071f },
	{ 195.1048f, 684.1509f, -46.75234f },
	{ 195.1048f, 684.1509f, -56.90071f },
	{ 205.1917f, 685.265f, -46.75234f },
	{ -296.1825f, -199.9588f, 313.8753f },
	{ 340.3372f, -199.9878f, 313.8755f },
	{ 253.6065f, 585.2858f, -45.55186f },
	{ 280.6254f, 340.6502f, 313.7511f },
	{ -296.1823f, -199.9588f, -311.4146f },
	{ 340.3374f, -199.9878f, -311.4144f },
	{ 47.28517f, 451.9095f, 216.5239f },
	{ 57.15147f, 360.5063f, 313.8718f },
	{ 102.7234f, 568.5626f, 195.3913f },
	{ 115.9655f, 446.2026f, 140.7016f },
	{ 232.4787f, 582.809f, 56.40916f },
	{ 93.69659f, 565.7634f, -9.329325f },
	{ 262.9002f, 501.1381f, -39.19018f },
	{ 253.6132f, 585.226f, -311.4144f },
	{ -92.10421f, 469.1153f, 314.177f },
	{ -375.2119f, 515.5256f, -311.4146f },
	{ 188.0391f, 458.1257f, 71.61977f },
	{ 279.4186f, 351.5771f, 79.83981f },
	{ -102.4743f, 545.6907f, 313.378f },
	{ -44.56766f, 552.2841f, 235.2122f },
	{ -375.2604f, 516.0241f, 312.7407f },
	{ -318.2655f, -0.015582f, 313.8753f },
	{ -318.27f, -0.003554f, -311.4146f },
	{ 318.251f, -0.015441f, 313.8755f },
	{ 318.2499f, -0.003031f, -311.4144f },
	{ 69.80347f, 776.7768f, -30.12534f },
	{ 81.48215f, 671.2958f, -43.12888f },
	{ -23.14222f, 766.5114f, 148.2999f },
	{ -99.95684f, 758.0274f, 211.6992f },
	{ -11.6298f, 661.0114f, 159.4338f },
	{ -0.498788f, 555.3599f, 170.6725f },
	{ 134.1414f, 676.9133f, -99.73634f },
	{ 123.1582f, 782.6698f, -97.483f },
	{ -338.1333f, 179.868f, 313.8753f },
	{ -338.0909f, 179.4319f, -311.4146f },
	{ 290.7605f, 248.8861f, -311.4144f },
	{ 290.7122f, 249.3215f, 313.8755f },
	{ -30.57076f, 380.0993f, 314.0243f },
	{ 123.1802f, 382.4938f, 313.876f },
	{ 282.4662f, 323.9826f, 192.6766f },
	{ 271.6482f, 421.9317f, 3.784456f },
	{ 205.2049f, 371.4545f, 313.8781f },
	{ 176.3414f, 576.6512f, 135.6709f },
	{ 34.90473f, 561.067f, 209.4394f },
	{ 115.69f, 568.3123f, 84.34184f },
	{ 210.0163f, 578.7305f, 84.34187f },
	{ 107.6762f, 640.8713f, 84.34184f },
	{ 202.0025f, 651.2894f, 84.34187f },
	{ 115.6901f, 568.3123f, -10.55818f },
	{ 210.0164f, 578.7305f, -10.55815f },
	{ 107.6762f, 640.8713f, -10.55818f },
	{ 202.0025f, 651.2894f, -10.55815f },
	{ -293.4518f, 523.0043f, 234.2392f },
	{ 44.96429f, 560.3812f, 71.7223f },
	{ -316.7645f, 734.0817f, 234.2392f },
	{ 21.27926f, 771.4174f, 52.29275f },
	{ -293.4517f, 523.0043f, -231.5009f },
	{ 169.4733f, 574.1326f, -231.5007f },
	{ -316.7643f, 734.082f, -231.5009f },
	{ 146.1607f, 785.21f, -231.5007f },
	{ -305.1082f, 628.5433f, 234.2392f },
	{ 33.54419f, 665.9518f, 52.59378f },
	{ 157.817f, 679.6714f, -231.5007f },
	{ -76.67049f, 546.947f, 234.2393f },
	{ 146.8738f, 571.6365f, -71.54557f },
	{ -87.98454f, 652.6285f, 220.9844f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0003BBFC[] = {
	{ -0.672602f, -0.07618099f, -0.736073f },
	{ -0.6304139f, -0.177444f, 0.755706f },
	{ -0.526249f, 0.757838f, -0.385672f },
	{ -0.516139f, 0.429214f, 0.7411979f },
	{ 0.77039f, 0.193659f, -0.6074499f },
	{ 0.701741f, 0.083918f, 0.707473f },
	{ 0.6424749f, 0.656496f, -0.395271f },
	{ 0.618175f, 0.355835f, 0.700886f },
	{ -0.775318f, -0.144014f, 0.6149319f },
	{ -0.714063f, 0.146117f, -0.684663f },
	{ 0.6976309f, -0.152059f, 0.700135f },
	{ 0.628686f, 0.176949f, -0.75726f },
	{ -0.702837f, -0.077625f, 0.707103f },
	{ 0.70283f, 0.077625f, 0.70711f },
	{ -0.637237f, 0.5104859f, 0.5773489f },
	{ 0.510485f, 0.637237f, 0.577351f },
	{ -0.702837f, -0.077625f, -0.707103f },
	{ 0.70283f, 0.077625f, -0.70711f },
	{ -0.637237f, 0.5104859f, -0.5773489f },
	{ 0.510485f, 0.637237f, -0.577351f },
	{ -0.617185f, -0.126393f, 0.7765999f },
	{ 0.6811889f, 0.302221f, 0.666816f },
	{ -0.565823f, 0.538931f, 0.6240169f },
	{ 0.576959f, 0.5587569f, 0.595742f },
	{ -0.631797f, -0.290982f, -0.718444f },
	{ 0.750999f, 0.187082f, -0.633247f },
	{ -0.577558f, 0.5998819f, -0.553687f },
	{ 0.587693f, 0.605662f, -0.5364619f },
	{ 0.624286f, 0.06882f, -0.778159f },
	{ -0.766732f, -0.084232f, 0.636417f },
	{ -0.724799f, -0.079271f, -0.6843849f },
	{ 0.672349f, 0.07335199f, 0.736591f },
	{ -0.6786579f, -0.074961f, 0.730619f },
	{ 0.7278669f, 0.08039f, 0.68099f },
	{ 0.619279f, 0.770649f, 0.150313f },
	{ 0.6501189f, 0.453239f, 0.609853f },
	{ -0.678654f, -0.074961f, -0.7306229f },
	{ 0.7278669f, 0.08039f, -0.68099f },
	{ 0.459686f, 0.319615f, 0.8285739f },
	{ 0.123519f, 0.411185f, 0.903145f },
	{ 0.446343f, 0.566478f, 0.6927339f },
	{ 0.664979f, 0.318858f, 0.675376f },
	{ 0.597452f, 0.706655f, 0.379065f },
	{ 0.800728f, 0.21592f, 0.5587609f },
	{ 0.948894f, 0.175568f, 0.262253f },
	{ 0.5102929f, 0.637203f, -0.577558f },
	{ 0.341988f, 0.112458f, 0.932951f },
	{ -0.637401f, 0.510105f, -0.5775059f },
	{ 0.782549f, 0.270148f, 0.5609249f },
	{ 0.8905849f, 0.391268f, 0.231877f },
	{ 0.213562f, 0.634802f, 0.742575f },
	{ 0.346147f, 0.712476f, 0.6103759f },
	{ -0.638589f, 0.5119669f, 0.5745389f },
	{ -0.702831f, -0.077631f, 0.707108f },
	{ -0.702833f, -0.077632f, -0.707106f },
	{ 0.702833f, 0.077626f, 0.7071069f },
	{ 0.702834f, 0.077626f, -0.707106f },
	{ 0.518928f, 0.751465f, 0.407447f },
	{ 0.798254f, 0.155759f, 0.5818329f },
	{ 0.507891f, 0.741944f, 0.437682f },
	{ 0.209439f, 0.68683f, 0.695989f },
	{ 0.778112f, 0.153561f, 0.609065f },
	{ 0.766825f, 0.163543f, 0.620672f },
	{ 0.9025469f, 0.136605f, 0.408348f },
	{ 0.607108f, 0.724613f, 0.326122f },
	{ -0.703185f, -0.076061f, 0.7069269f },
	{ -0.702837f, -0.077629f, -0.707103f },
	{ 0.702833f, 0.077626f, -0.7071069f },
	{ 0.701953f, 0.079137f, 0.707813f },
	{ 0.219179f, 0.307547f, 0.925946f },
	{ 0.126695f, 0.531388f, 0.8376009f },
	{ 0.886605f, 0.459186f, 0.055495f },
	{ 0.893437f, 0.331799f, 0.302787f },
	{ 0.190377f, 0.614141f, 0.7658899f },
	{ 0.54014f, 0.617951f, 0.571301f },
	{ 0.243377f, 0.680677f, 0.690975f },
	{ -0.702834f, -0.077625f, 0.707106f },
	{ 0.702832f, 0.077625f, 0.707108f },
	{ -0.637242f, 0.51048f, 0.57735f },
	{ 0.51048f, 0.637242f, 0.57735f },
	{ -0.702833f, -0.077625f, -0.7071069f },
	{ 0.702833f, 0.077625f, -0.7071069f },
	{ -0.637242f, 0.51048f, -0.57735f },
	{ 0.51048f, 0.637242f, -0.57735f },
	{ -0.692086f, -0.07643799f, 0.717756f },
	{ 0.8789279f, 0.166721f, 0.446867f },
	{ -0.616789f, 0.502991f, 0.605451f },
	{ 0.554815f, 0.770467f, 0.313944f },
	{ -0.702833f, -0.077625f, -0.7071069f },
	{ 0.7562079f, 0.08352f, -0.6489789f },
	{ -0.6372409f, 0.51048f, -0.577351f },
	{ 0.56328f, 0.6354679f, -0.528106f },
	{ -0.682982f, -0.07543299f, 0.72653f },
	{ 0.882105f, 0.145723f, 0.447946f },
	{ 0.758872f, 0.083814f, -0.645824f },
	{ 0.332368f, 0.08535799f, 0.939279f },
	{ 0.8624049f, 0.204792f, 0.462945f },
	{ 0.35508f, 0.08311f, 0.931134f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0003C094 = { vertex_0003B764, normal_0003BBFC, LengthOfArray<Sint32>(vertex_0003B764), meshlist_0003B674, matlist_0003B018, LengthOfArray<Uint16>(meshlist_0003B674), LengthOfArray<Uint16>(matlist_0003B018), { -17.46147f, 296.5017f, 18.51941f }, 680.8571f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0003C0BC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0003C094, -1140, 0, -3805, 0, 0x2AAA, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0003C0F0[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 86, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFF666666 }, { 0xFFFFFFFF }, 11, 92, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 22, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 24, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 85, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 136, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0003C21C[] = {
	3, 73, 61, 59,
	3, 57, 51, 56,
	9, 50, 54, 57, 58, 51, 59, 56, 61, 79,
	0x8000u | 8, 76, 79, 53, 56, 60, 57, 72, 50,
	5, 54, 62, 58, 52, 65,
	0x8000u | 6, 65, 58, 55, 59, 49, 73
};

extern "C" __declspec(dllexport) Sint16 poly_0003C26C[] = {
	4, 71, 76, 61, 79,
	7, 61, 73, 71, 49, 68, 55, 65,
	3, 65, 52, 68,
	4, 70, 66, 69, 67
};

extern "C" __declspec(dllexport) Sint16 poly_0003C298[] = {
	0x8000u | 10, 5, 2, 7, 3, 6, 1, 4, 0, 5, 2,
	4, 33, 37, 34, 38
};

extern "C" __declspec(dllexport) Sint16 poly_0003C2B8[] = {
	4, 54, 67, 62, 52,
	0x8000u | 7, 53, 60, 69, 72, 67, 50, 54,
	3, 53, 76, 69,
	4, 71, 68, 70, 66
};

extern "C" __declspec(dllexport) Sint16 poly_0003C2E4[] = {
	0x8000u | 8, 14, 12, 15, 13, 11, 9, 10, 8,
	4, 10, 14, 8, 12,
	4, 15, 14, 11, 10,
	4, 78, 36, 75, 35,
	4, 39, 63, 35, 75,
	4, 34, 78, 33, 75,
	0x8000u | 6, 38, 34, 77, 78, 40, 36,
	0x8000u | 6, 37, 38, 63, 77, 39, 40,
	4, 33, 75, 37, 63
};

extern "C" __declspec(dllexport) Sint16 poly_0003C34E[] = {
	0x8000u | 6, 22, 20, 29, 30, 23, 21,
	0x8000u | 6, 16, 18, 32, 31, 17, 19
};

extern "C" __declspec(dllexport) Sint16 poly_0003C36A[] = {
	0x8000u | 6, 17, 19, 25, 24, 21, 23,
	0x8000u | 6, 20, 22, 27, 26, 16, 18
};

extern "C" __declspec(dllexport) Sint16 poly_0003C386[] = {
	6, 29, 22, 28, 26, 31, 18,
	6, 31, 19, 28, 24, 29, 23,
	4, 48, 47, 44, 43
};

extern "C" __declspec(dllexport) Sint16 poly_0003C3AC[] = {
	4, 43, 70, 44, 69,
	4, 48, 76, 47, 71
};

extern "C" __declspec(dllexport) Sint16 poly_0003C3C0[] = {
	4, 44, 69, 48, 76,
	4, 47, 71, 43, 70
};

extern "C" __declspec(dllexport) Sint16 poly_0003C3D4[] = {
	4, 68, 52, 45, 46
};

extern "C" __declspec(dllexport) Sint16 poly_0003C3DE[] = {
	4, 52, 67, 46, 42,
	4, 45, 41, 68, 66
};

extern "C" __declspec(dllexport) Sint16 poly_0003C3F2[] = {
	4, 41, 42, 66, 67
};

extern "C" __declspec(dllexport) Sint16 poly_0003C3FC[] = {
	0x8000u | 8, 74, 84, 64, 85, 83, 81, 82, 80,
	4, 82, 74, 80, 84
};

extern "C" __declspec(dllexport) Sint16 poly_0003C418[] = {
	4, 64, 74, 83, 82
};

NJS_TEX uv_0003C424[] = {
	{ 253, 106 },
	{ 253, 65 },
	{ 207, 139 },
	{ 65, 131 },
	{ 141, 137 },
	{ 134, 11 },
	{ 1, 148 },
	{ 0, 202 },
	{ 65, 131 },
	{ 128, 205 },
	{ 141, 137 },
	{ 207, 139 },
	{ 134, 11 },
	{ 253, 65 },
	{ 201, 11 },
	{ 141, 0 },
	{ 201, 11 },
	{ 55, 11 },
	{ 134, 11 },
	{ 2, 21 },
	{ 65, 131 },
	{ 1, 84 },
	{ 1, 148 },
	{ 0, 202 },
	{ 72, 230 },
	{ 128, 205 },
	{ 135, 254 },
	{ 198, 234 },
	{ 198, 234 },
	{ 128, 205 },
	{ 253, 205 },
	{ 207, 139 },
	{ 253, 167 },
	{ 253, 106 }
};

NJS_TEX uv_0003C4AC[] = {
	{ 0 },
	{ 255, 0 },
	{ 160, 60 },
	{ 201, 3 },
	{ 160, 60 },
	{ 155, 100 },
	{ 0 },
	{ 153, 146 },
	{ 0, 208 },
	{ 184, 180 },
	{ 218, 199 },
	{ 218, 199 },
	{ 254, 208 },
	{ 0, 208 },
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 }
};

NJS_TEX uv_0003C4F4[] = {
	{ 0, -255 },
	{ 206, 16 },
	{ 39, -255 },
	{ 256, 16 },
	{ 92, -255 },
	{ 207, 16 },
	{ 52, -255 },
	{ 157, 16 },
	{ 0, -255 },
	{ 206, 16 },
	{ 61, 218 },
	{ 100, 218 },
	{ 0, 218 },
	{ 39, 218 }
};

NJS_TEX uv_0003C52C[] = {
	{ 350, 174 },
	{ 0, 255 },
	{ 416, 200 },
	{ 510, 208 },
	{ 410, 3 },
	{ 412, 25 },
	{ 0 },
	{ 346, 77 },
	{ 0, 255 },
	{ 326, 130 },
	{ 350, 174 },
	{ 410, 3 },
	{ 508, 0 },
	{ 0 },
	{ 508, 0 },
	{ 508, 208 },
	{ 0 },
	{ 0, 255 }
};

NJS_TEX uv_0003C574[] = {
	{ 0, 255 },
	{ 0, -255 },
	{ 85, 255 },
	{ 85, -255 },
	{ 169, 255 },
	{ 169, -255 },
	{ 255, 255 },
	{ 255, -255 },
	{ 85, 255 },
	{ 169, 255 },
	{ 85, -255 },
	{ 169, -255 },
	{ 85, 255 },
	{ 169, 255 },
	{ 85, -255 },
	{ 169, -255 },
	{ 85, -255 },
	{ 85, 255 },
	{ 169, -255 },
	{ 169, 255 },
	{ 169, 255 },
	{ 169, -255 },
	{ 85, 255 },
	{ 85, -255 },
	{ 169, 255 },
	{ 169, -255 },
	{ 85, 255 },
	{ 85, -255 },
	{ 169, 255 },
	{ 85, 255 },
	{ 169, -255 },
	{ 85, -255 },
	{ 169, 255 },
	{ 85, 255 },
	{ 169, 255 },
	{ 85, 255 },
	{ 169, -255 },
	{ 85, -255 },
	{ 169, 255 },
	{ 85, 255 },
	{ 169, 255 },
	{ 169, -255 },
	{ 85, 255 },
	{ 85, -255 }
};

NJS_TEX uv_0003C624[] = {
	{ 254, 0 },
	{ 254, 254 },
	{ 122, 25 },
	{ 122, 254 },
	{ 0 },
	{ 0, 254 },
	{ 255, 254 },
	{ 255, 8 },
	{ 122, 254 },
	{ 122, 25 },
	{ 0, 254 },
	{ 0, 8 }
};

NJS_TEX uv_0003C654[] = {
	{ 0, 254 },
	{ 0, 8 },
	{ 226, 254 },
	{ 226, 28 },
	{ 510, 254 },
	{ 508, 0 },
	{ 510, 254 },
	{ 508, 0 },
	{ 226, 254 },
	{ 226, 28 },
	{ 0, 254 },
	{ 0, 8 }
};

NJS_TEX uv_0003C684[] = {
	{ 480, -10 },
	{ 480, 228 },
	{ 229, -9 },
	{ 229, 228 },
	{ 28, -10 },
	{ 28, 228 },
	{ 28, -10 },
	{ 28, -231 },
	{ 229, -9 },
	{ 229, -231 },
	{ 480, -10 },
	{ 480, -231 },
	{ 508, -255 },
	{ 508, 254 },
	{ 0, -254 },
	{ 0, 254 }
};

NJS_TEX uv_0003C6C4[] = {
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 },
	{ 255, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 }
};

NJS_TEX uv_0003C6E4[] = {
	{ 0 },
	{ 0, 254 },
	{ 508, 0 },
	{ 510, 254 },
	{ 508, 0 },
	{ 508, 254 },
	{ 0 },
	{ 0, 254 }
};

NJS_TEX uv_0003C704[] = {
	{ 0 },
	{ 254, 0 },
	{ 0, 254 },
	{ 255, 254 }
};

NJS_TEX uv_0003C714[] = {
	{ 508, 0 },
	{ 0, 91 },
	{ 508, 163 },
	{ 0, 255 },
	{ 508, 163 },
	{ 0, 255 },
	{ 508, 0 },
	{ 0, 91 }
};

NJS_TEX uv_0003C734[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_TEX uv_0003C744[] = {
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 0 },
	{ 254, 0 },
	{ 0, 255 },
	{ 254, 255 }
};

NJS_TEX uv_0003C774[] = {
	{ 255, 0 },
	{ 255, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0003C784[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0003C26C, NULL, NULL, NULL, uv_0003C4AC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_0003C21C, NULL, NULL, NULL, uv_0003C424, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0003C298, NULL, NULL, NULL, uv_0003C4F4, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, poly_0003C2B8, NULL, NULL, NULL, uv_0003C52C, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 9, poly_0003C2E4, NULL, NULL, NULL, uv_0003C574, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, poly_0003C34E, NULL, NULL, NULL, uv_0003C624, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, poly_0003C36A, NULL, NULL, NULL, uv_0003C654, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 3, poly_0003C386, NULL, NULL, NULL, uv_0003C684, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 2, poly_0003C3AC, NULL, NULL, NULL, uv_0003C6C4, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 2, poly_0003C3C0, NULL, NULL, NULL, uv_0003C6E4, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 1, poly_0003C3D4, NULL, NULL, NULL, uv_0003C704, NULL },
	{ NJD_MESHSET_TRIMESH | 11, 2, poly_0003C3DE, NULL, NULL, NULL, uv_0003C714, NULL },
	{ NJD_MESHSET_TRIMESH | 12, 1, poly_0003C3F2, NULL, NULL, NULL, uv_0003C734, NULL },
	{ NJD_MESHSET_TRIMESH | 13, 2, poly_0003C3FC, NULL, NULL, NULL, uv_0003C744, NULL },
	{ NJD_MESHSET_TRIMESH | 14, 1, poly_0003C418, NULL, NULL, NULL, uv_0003C774, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0003C8EC[] = {
	{ -191.993f, 1420.629f, 192.3315f },
	{ -191.993f, 1420.629f, 209.1531f },
	{ -175.3604f, 1418.115f, 192.3315f },
	{ -175.3604f, 1418.115f, 209.1531f },
	{ -204.8119f, 1587.049f, 188.6814f },
	{ -204.8119f, 1587.049f, 171.8599f },
	{ -188.1792f, 1584.535f, 188.6814f },
	{ -188.1792f, 1584.535f, 171.8599f },
	{ 101.2701f, 17.78573f, 237.841f },
	{ 101.2701f, 17.78573f, 254.6626f },
	{ 147.1249f, 321.1885f, 237.841f },
	{ 147.1249f, 321.1885f, 254.6626f },
	{ 117.9027f, 15.27202f, 237.841f },
	{ 117.9027f, 15.27202f, 254.6626f },
	{ 163.7575f, 318.6749f, 237.841f },
	{ 163.7575f, 318.6749f, 254.6626f },
	{ -364.5069f, 1111.962f, -253.5936f },
	{ -364.5069f, 1111.962f, 235.6714f },
	{ -334.6791f, 1309.321f, -253.5936f },
	{ -334.6792f, 1309.32f, 235.6714f },
	{ 296.4213f, 1012.073f, -253.5935f },
	{ 296.4213f, 1012.073f, 235.6714f },
	{ 327.3087f, 1216.441f, -253.5935f },
	{ 327.3087f, 1216.441f, 235.6714f },
	{ -44.13207f, 1249.506f, 235.6714f },
	{ -71.61008f, 1067.695f, 235.6714f },
	{ -44.13211f, 1249.506f, -253.5936f },
	{ -71.61012f, 1067.695f, -253.5936f },
	{ -46.04983f, 1236.817f, -0.016175f },
	{ 324.2207f, 1196.01f, 0.575075f },
	{ 296.4214f, 1012.074f, 0.575069f },
	{ -336.7075f, 1295.899f, 0.575008f },
	{ -364.5069f, 1111.962f, 0.575002f },
	{ 230.0007f, 194.1972f, 224.6068f },
	{ 230.0007f, 194.1972f, 241.4283f },
	{ 251.5562f, 536.1188f, 169.3461f },
	{ 251.5562f, 536.1188f, 186.1675f },
	{ 246.6333f, 191.6834f, 224.6069f },
	{ 246.6333f, 191.6834f, 241.4283f },
	{ 268.1887f, 533.6052f, 169.3461f },
	{ 268.1887f, 533.6052f, 186.1675f },
	{ -605.5839f, -199.9993f, -281.453f },
	{ -605.5839f, -199.9993f, 260.6325f },
	{ -406.3455f, 1118.286f, -281.4529f },
	{ -406.3455f, 1118.286f, 260.6327f },
	{ 156.0296f, -199.9991f, -281.4529f },
	{ 156.0297f, -199.9991f, 260.6585f },
	{ 338.26f, 1005.75f, -281.4529f },
	{ 338.2601f, 1005.75f, 260.6585f },
	{ 208.9651f, 150.2314f, 45.11539f },
	{ -53.87188f, 228.1623f, 260.6491f },
	{ 68.62373f, 248.1526f, 108.8899f },
	{ 186.2599f, -0.00063f, 260.6f },
	{ 115.9362f, 517.1251f, 260.6534f },
	{ -32.9846f, 116.6405f, 260.6326f },
	{ 196.2855f, 66.33562f, 110.8533f },
	{ 192.5243f, 513.4145f, 202.6536f },
	{ -10.75868f, 243.4718f, 176.6044f },
	{ 108.6141f, 93.4106f, 195.3981f },
	{ 158.7889f, 214.4598f, 73.19419f },
	{ 110.1404f, 463.7678f, 260.6522f },
	{ 240.0689f, 356.0326f, 59.4016f },
	{ 53.45811f, 39.48269f, 260.6163f },
	{ 228.2323f, 368.8781f, 171.2071f },
	{ -149.2833f, 1422.015f, 221.8279f },
	{ 189.6617f, 22.50832f, 182.211f },
	{ -575.358f, -0.001724f, -281.453f },
	{ -575.358f, -0.00172f, 260.6325f },
	{ 186.2559f, 0.000529f, -281.4529f },
	{ -482.3474f, 615.4113f, 260.6326f },
	{ -482.3474f, 615.4113f, -281.4529f },
	{ 262.258f, 502.8755f, -281.4529f },
	{ -4.720572f, 352.2328f, 260.6501f },
	{ 225.6889f, 260.8859f, 49.58019f },
	{ -149.2833f, 1422.015f, 121.8279f },
	{ 208.5252f, 367.0266f, 171.2071f },
	{ 262.2611f, 502.8748f, 260.6327f },
	{ 228.2323f, 368.8781f, 188.0286f },
	{ 208.5252f, 367.0266f, 188.0285f },
	{ 261.0959f, 495.1864f, 147.3259f },
	{ -273.565f, 1268.867f, 121.8279f },
	{ -273.565f, 1268.867f, 221.8279f },
	{ -248.1606f, 1436.958f, 121.8279f },
	{ -248.1606f, 1436.958f, 221.8279f },
	{ -174.6877f, 1253.924f, 121.8279f },
	{ -174.6877f, 1253.924f, 221.8279f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0003CCF4[] = {
	{ -0.687883f, -0.14058f, -0.712077f },
	{ -0.620049f, 0.048565f, 0.783058f },
	{ 0.779629f, -0.016955f, -0.626012f },
	{ 0.7330419f, 0.138385f, 0.665957f },
	{ -0.779629f, 0.016954f, 0.626012f },
	{ -0.7330419f, -0.138386f, -0.665957f },
	{ 0.687884f, 0.14058f, 0.712077f },
	{ 0.62005f, -0.048565f, -0.783058f },
	{ -0.699167f, 0.105669f, -0.707106f },
	{ -0.699167f, 0.105669f, 0.707106f },
	{ -0.484592f, 0.657143f, -0.577351f },
	{ -0.484592f, 0.657143f, 0.577351f },
	{ 0.699166f, -0.105668f, -0.7071069f },
	{ 0.699166f, -0.105668f, 0.7071069f },
	{ 0.657143f, 0.484592f, -0.57735f },
	{ 0.657143f, 0.484592f, 0.57735f },
	{ -0.699167f, 0.105669f, -0.7071069f },
	{ -0.699167f, 0.105669f, 0.7071069f },
	{ -0.462322f, 0.6870289f, -0.56058f },
	{ -0.461838f, 0.688252f, 0.559478f },
	{ 0.699166f, -0.105669f, -0.707108f },
	{ 0.699166f, -0.105669f, 0.707108f },
	{ 0.639278f, 0.529074f, -0.558037f },
	{ 0.638865f, 0.530906f, 0.556767f },
	{ 0.104138f, 0.708563f, 0.697921f },
	{ 0, 0, 1 },
	{ 0.103904f, 0.706979f, -0.699561f },
	{ 0, 0, -1 },
	{ 0.145405f, 0.98937f, -0.002234f },
	{ 0.803226f, 0.595672f, -0.001881f },
	{ 0.988771f, -0.149438f, 0 },
	{ -0.586732f, 0.8097799f, -0.001502f },
	{ -0.988771f, 0.149438f, 0 },
	{ -0.597967f, -0.64078f, -0.481495f },
	{ -0.558777f, -0.460616f, 0.689638f },
	{ -0.66312f, 0.160594f, -0.731082f },
	{ -0.664825f, 0.177285f, 0.725657f },
	{ 0.5842389f, -0.657888f, -0.475235f },
	{ 0.558145f, -0.5226009f, 0.644486f },
	{ 0.702887f, -0.178165f, -0.6886269f },
	{ 0.7104459f, -0.164705f, 0.684207f },
	{ -0.733302f, 0.110825f, -0.67081f },
	{ -0.733284f, 0.111018f, 0.670797f },
	{ -0.484589f, 0.657145f, -0.57735f },
	{ -0.484604f, 0.65714f, 0.5773439f },
	{ 0.666613f, -0.100746f, -0.738564f },
	{ 0.6665609f, -0.100522f, 0.738642f },
	{ 0.657145f, 0.48459f, -0.57735f },
	{ 0.657127f, 0.484587f, 0.577373f },
	{ 0.9482059f, -0.003759f, 0.317633f },
	{ 0.450098f, -0.02877f, 0.892516f },
	{ 0.521294f, -0.028459f, 0.852902f },
	{ 0.703392f, 0.236404f, 0.670338f },
	{ 0.734198f, -0.625035f, -0.265111f },
	{ 0.244368f, 0.173402f, 0.954053f },
	{ 0.950186f, 0.13387f, 0.281471f },
	{ -0.064835f, -0.937444f, -0.342046f },
	{ 0.736538f, -0.045012f, 0.6748959f },
	{ 0.508743f, 0.554098f, 0.658905f },
	{ 0.5294f, 0.040624f, 0.847399f },
	{ 0.708828f, -0.457839f, 0.536607f },
	{ 0.909996f, -0.257559f, 0.324915f },
	{ 0.156772f, 0.264122f, 0.951663f },
	{ 0.617306f, -0.164519f, -0.769329f },
	{ 0.657145f, 0.48459f, 0.57735f },
	{ 0.946282f, 0.270068f, 0.1778f },
	{ -0.699167f, 0.105667f, -0.707106f },
	{ -0.699161f, 0.105764f, 0.7070979f },
	{ 0.699164f, -0.105668f, -0.70711f },
	{ -0.721884f, 0.109277f, 0.683332f },
	{ -0.699167f, 0.105669f, -0.7071069f },
	{ 0.699166f, -0.105665f, -0.707108f },
	{ 0.307284f, -0.248137f, 0.918697f },
	{ 0.834277f, -0.170863f, 0.524202f },
	{ 0.657145f, 0.48459f, -0.57735f },
	{ -0.726801f, -0.060071f, -0.684217f },
	{ 0.51812f, -0.634999f, 0.573f },
	{ 0.708905f, 0.064499f, 0.702348f },
	{ -0.765394f, 0.145037f, 0.627005f },
	{ 0.7366419f, -0.571606f, 0.361421f },
	{ -0.699168f, 0.105669f, -0.707106f },
	{ -0.699168f, 0.105669f, 0.707106f },
	{ -0.48459f, 0.657145f, -0.57735f },
	{ -0.48459f, 0.657145f, 0.57735f },
	{ 0.699166f, -0.105668f, -0.707108f },
	{ 0.699166f, -0.105669f, 0.707108f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0003D0FC = { vertex_0003C8EC, normal_0003CCF4, LengthOfArray<Sint32>(vertex_0003C8EC), meshlist_0003C784, matlist_0003C0F0, LengthOfArray<Uint16>(meshlist_0003C784), LengthOfArray<Uint16>(matlist_0003C0F0), { -133.662f, 693.5246f, -10.39728f }, 1021.531f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0003D124 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0003D0FC, 420.0007f, 5, -11010, 0xFFFFFF1B, 0xFFFF91D5, 0xFFFFFD88, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0003D158[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 37, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 86, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 161, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 92, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 46, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 92, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 40, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 35, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 41, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 45, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 38, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 42, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 42, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 34, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 36, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 44, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 47, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 45, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 33, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0003D34C[] = {
	4, 100, 102, 183, 184
};

extern "C" __declspec(dllexport) Sint16 poly_0003D356[] = {
	0x8000u | 8, 182, 52, 180, 56, 181, 57, 179, 53,
	0x8000u | 10, 8, 11, 9, 15, 13, 14, 12, 10, 8, 11,
	4, 14, 10, 15, 11,
	4, 19, 18, 16, 20,
	8, 21, 20, 22, 18, 23, 19, 17, 16,
	4, 22, 23, 21, 17,
	6, 43, 42, 48, 49, 41, 40,
	6, 46, 47, 51, 50, 44, 45,
	12, 41, 45, 48, 50, 43, 47, 42, 46, 49, 51, 40, 44,
	4, 58, 54, 59, 55,
	0x8000u | 8, 179, 55, 181, 59, 180, 58, 182, 54,
	0x8000u | 10, 60, 63, 61, 67, 65, 66, 64, 62, 60, 63,
	4, 66, 62, 67, 63
};

extern "C" __declspec(dllexport) Sint16 poly_0003D420[] = {
	4, 24, 25, 26, 27,
	4, 3, 1, 7, 5,
	4, 6, 4, 2, 0,
	4, 27, 25, 31, 29,
	4, 30, 28, 26, 24,
	4, 35, 33, 39, 37,
	4, 38, 36, 34, 32,
	4, 74, 70, 75, 71,
	4, 79, 78, 77, 76
};

extern "C" __declspec(dllexport) Sint16 poly_0003D47A[] = {
	4, 6, 2, 7, 3,
	4, 0, 4, 1, 5,
	4, 24, 28, 25, 29,
	4, 38, 34, 39, 35,
	4, 32, 36, 33, 37,
	0x8000u | 5, 82, 176, 78, 83, 79,
	0x8000u | 5, 76, 77, 80, 81, 175,
	0x8000u | 5, 90, 177, 86, 91, 87,
	0x8000u | 5, 84, 85, 88, 89, 178
};

extern "C" __declspec(dllexport) Sint16 poly_0003D4DC[] = {
	4, 7, 5, 6, 4,
	4, 31, 29, 30, 28,
	4, 39, 37, 38, 36,
	6, 83, 81, 176, 175, 82, 80,
	6, 91, 89, 177, 178, 90, 88
};

extern "C" __declspec(dllexport) Sint16 poly_0003D516[] = {
	4, 30, 26, 31, 27,
	4, 98, 94, 99, 95,
	4, 110, 106, 111, 107,
	3, 119, 122, 133,
	3, 167, 123, 134,
	0x8000u | 5, 127, 126, 167, 128, 134,
	6, 127, 118, 167, 119, 168, 133
};

extern "C" __declspec(dllexport) Sint16 poly_0003D55E[] = {
	6, 70, 68, 71, 69, 75, 73,
	6, 75, 73, 74, 72, 70, 68
};

extern "C" __declspec(dllexport) Sint16 poly_0003D57A[] = {
	4, 79, 77, 83, 81,
	4, 82, 80, 78, 76,
	4, 87, 85, 91, 89,
	4, 90, 88, 86, 84
};

extern "C" __declspec(dllexport) Sint16 poly_0003D5A2[] = {
	0x8000u | 5, 100, 101, 183, 94, 95,
	0x8000u | 5, 102, 184, 103, 99, 98
};

extern "C" __declspec(dllexport) Sint16 poly_0003D5BA[] = {
	4, 183, 184, 95, 99
};

extern "C" __declspec(dllexport) Sint16 poly_0003D5C4[] = {
	4, 100, 101, 93, 92,
	4, 103, 102, 96, 97,
	4, 112, 113, 105, 104,
	4, 115, 114, 108, 109
};

extern "C" __declspec(dllexport) Sint16 poly_0003D5EC[] = {
	4, 102, 100, 97, 93
};

extern "C" __declspec(dllexport) Sint16 poly_0003D5F6[] = {
	4, 174, 172, 106, 107,
	4, 171, 173, 111, 110
};

extern "C" __declspec(dllexport) Sint16 poly_0003D60A[] = {
	4, 172, 171, 107, 111,
	4, 152, 153, 119, 122
};

extern "C" __declspec(dllexport) Sint16 poly_0003D61E[] = {
	6, 105, 109, 112, 114, 172, 171,
	8, 117, 120, 143, 137, 144, 145, 152, 153
};

extern "C" __declspec(dllexport) Sint16 poly_0003D63E[] = {
	4, 160, 152, 118, 119
};

extern "C" __declspec(dllexport) Sint16 poly_0003D648[] = {
	0x8000u | 16, 137, 145, 139, 146, 141, 147, 135, 148, 142, 149, 140, 150, 138, 151, 136, 121
};

extern "C" __declspec(dllexport) Sint16 poly_0003D66A[] = {
	0x8000u | 12, 118, 160, 127, 159, 126, 158, 128, 157, 134, 156, 123, 155,
	4, 153, 154, 122, 133
};

extern "C" __declspec(dllexport) Sint16 poly_0003D68E[] = {
	0x8000u | 9, 120, 137, 131, 139, 124, 141, 132, 135, 142,
	0x8000u | 9, 136, 116, 138, 129, 140, 125, 142, 130, 132
};

extern "C" __declspec(dllexport) Sint16 poly_0003D6B6[] = {
	4, 144, 121, 143, 136
};

extern "C" __declspec(dllexport) Sint16 poly_0003D6C0[] = {
	0x8000u | 6, 166, 163, 165, 162, 164, 161,
	0x8000u | 14, 157, 164, 156, 161, 148, 162, 149, 163, 150, 166, 158, 165, 157, 164,
	8, 155, 123, 170, 167, 169, 168, 154, 133,
	4, 170, 169, 155, 154
};

extern "C" __declspec(dllexport) Sint16 poly_0003D708[] = {
	4, 143, 136, 117, 116
};

extern "C" __declspec(dllexport) Sint16 poly_0003D712[] = {
	0x8000u | 8, 145, 153, 146, 154, 147, 155, 148, 156,
	0x8000u | 6, 160, 121, 159, 151, 158, 150
};

extern "C" __declspec(dllexport) Sint16 poly_0003D732[] = {
	4, 152, 160, 144, 121
};

extern "C" __declspec(dllexport) Sint16 poly_0003D73C[] = {
	4, 172, 174, 112, 113,
	4, 173, 171, 115, 114
};

NJS_TEX uv_0003D750[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_TEX uv_0003D760[] = {
	{ 80, -55 },
	{ 0, 230 },
	{ 92, -30 },
	{ 11, 255 },
	{ 102, -30 },
	{ 22, 255 },
	{ 91, -55 },
	{ 10, 230 },
	{ -8, 240 },
	{ 233, -510 },
	{ -6, 240 },
	{ 253, -494 },
	{ 13, 255 },
	{ 251, -494 },
	{ 11, 255 },
	{ 231, -510 },
	{ -8, 240 },
	{ 233, -510 },
	{ 251, -494 },
	{ 231, -510 },
	{ 253, -494 },
	{ 233, -510 },
	{ 235, -510 },
	{ 233, -510 },
	{ 0, 240 },
	{ 19, 255 },
	{ 21, 255 },
	{ 19, 255 },
	{ 253, -494 },
	{ 233, -510 },
	{ 255, -494 },
	{ 235, -510 },
	{ 1, 240 },
	{ 0, 240 },
	{ 253, -494 },
	{ 255, -494 },
	{ 21, 255 },
	{ 1, 240 },
	{ 230, -510 },
	{ 212, -510 },
	{ 127, -274 },
	{ 108, -274 },
	{ 7, 231 },
	{ -10, 231 },
	{ 232, -486 },
	{ 251, -486 },
	{ 129, -251 },
	{ 147, -251 },
	{ 9, 254 },
	{ 27, 254 },
	{ 7, 231 },
	{ 27, 254 },
	{ 127, -274 },
	{ 147, -251 },
	{ 230, -510 },
	{ 251, -486 },
	{ 212, -510 },
	{ 232, -486 },
	{ 108, -274 },
	{ 129, -251 },
	{ -10, 231 },
	{ 9, 254 },
	{ 244, -230 },
	{ 232, -254 },
	{ 255, -230 },
	{ 243, -254 },
	{ 91, -55 },
	{ 243, -254 },
	{ 102, -30 },
	{ 255, -230 },
	{ 92, -30 },
	{ 244, -230 },
	{ 80, -55 },
	{ 232, -254 },
	{ 0, 242 },
	{ 241, -508 },
	{ 12, 242 },
	{ 254, -496 },
	{ 26, 254 },
	{ 242, -496 },
	{ 13, 254 },
	{ 228, -508 },
	{ 0, 242 },
	{ 241, -508 },
	{ 242, -496 },
	{ 228, -508 },
	{ 254, -496 },
	{ 241, -508 }
};

NJS_TEX uv_0003D8C0[] = {
	{ 2, 254 },
	{ 254, 254 },
	{ 0 },
	{ 252, 0 },
	{ -1, 1 },
	{ 1, 254 },
	{ 254, 2 },
	{ 251, 254 },
	{ 253, 3 },
	{ 252, 255 },
	{ -2, 2 },
	{ 0, 254 },
	{ -1, 2 },
	{ 0, 255 },
	{ 254, 3 },
	{ 253, 254 },
	{ 253, 2 },
	{ 252, 254 },
	{ -1, 1 },
	{ 0, 255 },
	{ -1, 2 },
	{ 0, 255 },
	{ 253, 2 },
	{ 250, 254 },
	{ 254, 3 },
	{ 253, 254 },
	{ -1, 2 },
	{ 0, 254 },
	{ 152, 254 },
	{ 0, 136 },
	{ 255, 118 },
	{ 102, 0 },
	{ 247, 0 },
	{ 10, 0 },
	{ 223, 254 },
	{ -14, 254 }
};

NJS_TEX uv_0003D950[] = {
	{ 114, 245 },
	{ 6, 232 },
	{ 129, 13 },
	{ 21, 0 },
	{ 0, 232 },
	{ 108, 245 },
	{ 15, 0 },
	{ 123, 13 },
	{ 131, 241 },
	{ 239, 255 },
	{ 146, 9 },
	{ 255, 22 },
	{ 163, 245 },
	{ 55, 232 },
	{ 178, 13 },
	{ 70, 0 },
	{ 47, 232 },
	{ 155, 245 },
	{ 62, 0 },
	{ 170, 13 },
	{ 133, 254 },
	{ 209, 191 },
	{ 48, 186 },
	{ 253, 113 },
	{ 168, 44 },
	{ 35, 177 },
	{ 156, 35 },
	{ 120, 245 },
	{ 241, 103 },
	{ 194, 185 },
	{ 64, 199 },
	{ 138, 139 },
	{ 4, 151 },
	{ 184, 57 },
	{ 124, 9 },
	{ -8, 141 },
	{ 111, 0 },
	{ 51, 190 },
	{ 171, 48 },
	{ 125, 129 }
};

NJS_TEX uv_0003D9F0[] = {
	{ 765, 0 },
	{ 764, 255 },
	{ -1, 0 },
	{ 0, 255 },
	{ 764, 0 },
	{ 761, 256 },
	{ -2, 0 },
	{ 1, 255 },
	{ 768, 0 },
	{ 762, 255 },
	{ -1, -2 },
	{ 2, 254 },
	{ 506, 0 },
	{ 506, 254 },
	{ 0, 1 },
	{ 506, 254 },
	{ 0, 1 },
	{ 0, 254 },
	{ 506, 1 },
	{ 506, 255 },
	{ 0, 1 },
	{ 506, 255 },
	{ 0, 1 },
	{ 0, 255 }
};

NJS_TEX uv_0003DA50[] = {
	{ 508, 21 },
	{ 410, 19 },
	{ 510, -60 },
	{ 410, -59 },
	{ 506, -187 },
	{ 3, -187 },
	{ 506, -251 },
	{ 3, -251 },
	{ 506, -147 },
	{ 3, -147 },
	{ 506, -251 },
	{ 3, -251 },
	{ 3, -251 },
	{ 506, -251 },
	{ 506, -75 },
	{ 418, 3 },
	{ 506, 3 },
	{ 490, 147 },
	{ 354, 251 },
	{ 410, 251 },
	{ 418, 3 },
	{ 490, 251 },
	{ 490, 147 },
	{ 354, 251 },
	{ 0, 255 },
	{ 418, 3 },
	{ 3, -251 },
	{ 426, -75 },
	{ 506, -75 }
};

NJS_TEX uv_0003DAC4[] = {
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
	{ 253, 251 }
};

NJS_TEX uv_0003DAF4[] = {
	{ -2, -1 },
	{ 0, 256 },
	{ 253, 2 },
	{ 252, 256 },
	{ 254, 2 },
	{ 251, 255 },
	{ 0 },
	{ 0, 256 },
	{ 0, 1 },
	{ 0, 256 },
	{ 254, 1 },
	{ 251, 255 },
	{ 254, 0 },
	{ 250, 255 },
	{ -1, 0 },
	{ 0, 256 }
};

NJS_TEX uv_0003DB34[] = {
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0, -254 },
	{ 255, -254 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, -254 },
	{ 0, -254 }
};

NJS_TEX uv_0003DB5C[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_TEX uv_0003DB6C[] = {
	{ 510, 0 },
	{ 246, 0 },
	{ 510, 254 },
	{ 246, 254 },
	{ 246, 0 },
	{ 510, 0 },
	{ 246, 254 },
	{ 510, 254 },
	{ 262, 0 },
	{ 0 },
	{ 262, 254 },
	{ 0, 254 },
	{ 0 },
	{ 262, 0 },
	{ 0, 254 },
	{ 262, 254 }
};

NJS_TEX uv_0003DBAC[] = {
	{ 255, 0 },
	{ 0 },
	{ 255, 254 },
	{ 0, 254 }
};

NJS_TEX uv_0003DBBC[] = {
	{ 0, 254 },
	{ 255, 254 },
	{ 0, -255 },
	{ 255, -255 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, -255 },
	{ 0, -255 }
};

NJS_TEX uv_0003DBDC[] = {
	{ 1, 420 },
	{ 251, 420 },
	{ 2, 109 },
	{ 251, 108 },
	{ 0, 254 },
	{ 254, 254 },
	{ 0 },
	{ 255, 0 }
};

NJS_TEX uv_0003DBFC[] = {
	{ 0, 255 },
	{ 510, 255 },
	{ 0 },
	{ 510, 0 }
};

NJS_TEX uv_0003DC0C[] = {
	{ 504, 255 },
	{ 504, 0 },
	{ 432, 254 },
	{ 432, 0 },
	{ 360, 254 },
	{ 360, 0 },
	{ 288, 254 },
	{ 288, 0 },
	{ 217, 254 },
	{ 217, 0 },
	{ 145, 254 },
	{ 145, 0 },
	{ 73, 254 },
	{ 73, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_TEX uv_0003DC4C[] = {
	{ 0 },
	{ 0, 254 },
	{ 73, 0 },
	{ 73, 254 },
	{ 145, 0 },
	{ 145, 254 },
	{ 217, 0 },
	{ 217, 254 },
	{ 288, 0 },
	{ 288, 254 },
	{ 360, 0 },
	{ 360, 254 },
	{ 506, 254 },
	{ 432, 254 },
	{ 504, 0 },
	{ 432, 0 }
};

NJS_TEX uv_0003DC8C[] = {
	{ 504, 254 },
	{ 504, 0 },
	{ 432, 254 },
	{ 432, 0 },
	{ 360, 254 },
	{ 360, 0 },
	{ 288, 254 },
	{ 288, 0 },
	{ 217, 0 },
	{ 0 },
	{ 0, 255 },
	{ 73, 0 },
	{ 73, 254 },
	{ 145, 0 },
	{ 145, 254 },
	{ 217, 0 },
	{ 217, 254 },
	{ 288, 254 }
};

NJS_TEX uv_0003DCD4[] = {
	{ 510, 0 },
	{ 0 },
	{ 510, 254 },
	{ 0, 254 }
};

NJS_TEX uv_0003DCE4[] = {
	{ 75, -251 },
	{ 75, 251 },
	{ 266, -251 },
	{ 266, 251 },
	{ 506, -251 },
	{ 506, 251 },
	{ 266, -251 },
	{ 506, -251 },
	{ 434, -251 },
	{ 506, 251 },
	{ 434, 251 },
	{ 266, 251 },
	{ 243, 251 },
	{ 75, 251 },
	{ 3, 251 },
	{ 75, -251 },
	{ 3, -251 },
	{ 243, -251 },
	{ 266, -251 },
	{ 506, -251 },
	{ 2, 254 },
	{ 2, -254 },
	{ 75, 251 },
	{ 75, -251 },
	{ 434, 251 },
	{ 434, -251 },
	{ 506, 251 },
	{ 506, -251 },
	{ 75, 251 },
	{ 434, 251 },
	{ 2, 254 },
	{ 506, 251 }
};

NJS_TEX uv_0003DD64[] = {
	{ 510, 0 },
	{ 0 },
	{ 510, 254 },
	{ 0, 254 }
};

NJS_TEX uv_0003DD74[] = {
	{ 504, 255 },
	{ 504, 0 },
	{ 432, 254 },
	{ 432, 0 },
	{ 360, 254 },
	{ 360, 0 },
	{ 288, 254 },
	{ 288, 0 },
	{ 0 },
	{ 0, 255 },
	{ 73, 0 },
	{ 73, 254 },
	{ 145, 0 },
	{ 145, 254 }
};

NJS_TEX uv_0003DDAC[] = {
	{ 510, 0 },
	{ 0 },
	{ 510, 255 },
	{ 0, 255 }
};

NJS_TEX uv_0003DDBC[] = {
	{ 255, -254 },
	{ 0, -254 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, -254 },
	{ 255, -254 },
	{ 0, 255 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0003DDDC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0003D34C, NULL, NULL, NULL, uv_0003D750, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 13, poly_0003D356, NULL, NULL, NULL, uv_0003D760, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 9, poly_0003D420, NULL, NULL, NULL, uv_0003D8C0, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 9, poly_0003D47A, NULL, NULL, NULL, uv_0003D950, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 5, poly_0003D4DC, NULL, NULL, NULL, uv_0003D9F0, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 7, poly_0003D516, NULL, NULL, NULL, uv_0003DA50, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, poly_0003D55E, NULL, NULL, NULL, uv_0003DAC4, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 4, poly_0003D57A, NULL, NULL, NULL, uv_0003DAF4, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 2, poly_0003D5A2, NULL, NULL, NULL, uv_0003DB34, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 1, poly_0003D5BA, NULL, NULL, NULL, uv_0003DB5C, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 4, poly_0003D5C4, NULL, NULL, NULL, uv_0003DB6C, NULL },
	{ NJD_MESHSET_TRIMESH | 11, 1, poly_0003D5EC, NULL, NULL, NULL, uv_0003DBAC, NULL },
	{ NJD_MESHSET_TRIMESH | 12, 2, poly_0003D5F6, NULL, NULL, NULL, uv_0003DBBC, NULL },
	{ NJD_MESHSET_TRIMESH | 13, 2, poly_0003D60A, NULL, NULL, NULL, uv_0003DBDC, NULL },
	{ NJD_MESHSET_TRIMESH | 14, 2, poly_0003D61E, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 15, 1, poly_0003D63E, NULL, NULL, NULL, uv_0003DBFC, NULL },
	{ NJD_MESHSET_TRIMESH | 16, 1, poly_0003D648, NULL, NULL, NULL, uv_0003DC0C, NULL },
	{ NJD_MESHSET_TRIMESH | 17, 2, poly_0003D66A, NULL, NULL, NULL, uv_0003DC4C, NULL },
	{ NJD_MESHSET_TRIMESH | 18, 2, poly_0003D68E, NULL, NULL, NULL, uv_0003DC8C, NULL },
	{ NJD_MESHSET_TRIMESH | 19, 1, poly_0003D6B6, NULL, NULL, NULL, uv_0003DCD4, NULL },
	{ NJD_MESHSET_TRIMESH | 20, 4, poly_0003D6C0, NULL, NULL, NULL, uv_0003DCE4, NULL },
	{ NJD_MESHSET_TRIMESH | 21, 1, poly_0003D708, NULL, NULL, NULL, uv_0003DD64, NULL },
	{ NJD_MESHSET_TRIMESH | 22, 2, poly_0003D712, NULL, NULL, NULL, uv_0003DD74, NULL },
	{ NJD_MESHSET_TRIMESH | 23, 1, poly_0003D732, NULL, NULL, NULL, uv_0003DDAC, NULL },
	{ NJD_MESHSET_TRIMESH | 24, 2, poly_0003D73C, NULL, NULL, NULL, uv_0003DDBC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0003E034[] = {
	{ 87.75861f, 454.8857f, 18.53933f },
	{ 92.6246f, 454.8857f, 72.45969f },
	{ 89.87535f, 461.7386f, 18.52684f },
	{ 94.74133f, 461.7386f, 72.4472f },
	{ 122.2341f, 432.5908f, 15.42813f },
	{ 127.1001f, 432.5908f, 69.3485f },
	{ 124.3508f, 439.4436f, 15.41564f },
	{ 129.2168f, 439.4436f, 69.336f },
	{ 72.83793f, 394.4604f, 28.34194f },
	{ 73.45797f, 394.4604f, 35.21252f },
	{ 147.8555f, 602.3663f, 21.57198f },
	{ 148.4756f, 602.3663f, 28.44256f },
	{ 79.02453f, 390.4595f, 27.78363f },
	{ 79.64456f, 390.4595f, 34.65422f },
	{ 154.0421f, 598.3656f, 21.01367f },
	{ 154.6622f, 598.3656f, 27.88425f },
	{ 72.83793f, 394.4604f, 60.47117f },
	{ 73.45797f, 394.4604f, 67.34174f },
	{ 147.8555f, 602.3663f, 53.70121f },
	{ 148.4756f, 602.3663f, 60.5718f },
	{ 79.02453f, 390.4595f, 59.91286f },
	{ 79.64456f, 390.4595f, 66.78346f },
	{ 154.0421f, 598.3656f, 53.1429f },
	{ 154.6622f, 598.3656f, 60.01349f },
	{ 129.7755f, 582.7508f, 16.34199f },
	{ 134.6415f, 582.7508f, 70.26236f },
	{ 135.2339f, 597.8783f, 15.84941f },
	{ 140.0999f, 597.8783f, 69.76977f },
	{ 164.251f, 560.4559f, 13.2308f },
	{ 169.117f, 560.4559f, 67.15115f },
	{ 169.7094f, 575.5833f, 12.73821f },
	{ 174.5754f, 575.5833f, 66.65858f },
	{ 102.8242f, 508.3161f, 18.53933f },
	{ 107.6902f, 508.3161f, 72.45969f },
	{ 105.4183f, 515.8055f, 18.52684f },
	{ 110.2843f, 515.8055f, 72.4472f },
	{ 137.2997f, 486.0211f, 15.42813f },
	{ 142.1658f, 486.0211f, 69.3485f },
	{ 139.8939f, 493.5105f, 15.41564f },
	{ 144.7599f, 493.5105f, 69.336f },
	{ 83.70468f, 342.6148f, -127.9781f },
	{ 87.75661f, 342.6148f, -122.8637f },
	{ 133.0744f, 473.5476f, -183.1641f },
	{ 137.1263f, 473.5476f, -178.0497f },
	{ 88.21732f, 338.5204f, -131.5533f },
	{ 92.26925f, 338.5204f, -126.4389f },
	{ 137.5871f, 469.4532f, -186.7393f },
	{ 141.639f, 469.4532f, -181.6248f },
	{ 114.2004f, 432.0087f, -142.1225f },
	{ 110.1484f, 432.0087f, -147.237f },
	{ 118.713f, 427.9143f, -145.6977f },
	{ 114.661f, 427.9143f, -150.8121f },
	{ 64.44363f, 225.3392f, -107.1328f },
	{ 67.73218f, 225.3392f, -102.5895f },
	{ 137.2013f, 318.8486f, -143.4943f },
	{ 140.4898f, 318.8486f, -138.9509f },
	{ 68.08211f, 220.5842f, -109.847f },
	{ 71.37067f, 220.5843f, -105.3036f },
	{ 140.8398f, 314.0936f, -146.2085f },
	{ 144.1284f, 314.0936f, -141.6651f },
	{ 1.263589f, 200.1914f, -95.07243f },
	{ 5.315526f, 200.1914f, -89.95801f },
	{ 75.46886f, 437.5961f, -155.91f },
	{ 79.5208f, 437.5961f, -150.7955f },
	{ 5.776226f, 196.097f, -98.64759f },
	{ 9.828161f, 196.097f, -93.53316f },
	{ 79.98148f, 433.5017f, -159.4851f },
	{ 84.03342f, 433.5016f, -154.3707f },
	{ 28.59817f, 209.5591f, -43.13082f },
	{ 39.39478f, 209.5591f, -28.30466f },
	{ 90.04702f, 401.6357f, -92.45505f },
	{ 100.8436f, 401.6357f, -77.62885f },
	{ 44.74028f, 196.097f, -56.08794f },
	{ 55.53687f, 196.097f, -41.26181f },
	{ 106.1892f, 388.1737f, -105.4122f },
	{ 116.9858f, 388.1736f, -90.58601f },
	{ 23.42052f, 359.8345f, -136.118f },
	{ 89.5089f, 359.8345f, -52.69987f },
	{ 30.19811f, 386.8068f, -141.5252f },
	{ 96.28646f, 386.8068f, -58.10698f },
	{ 70.07525f, 322.2367f, -176.4056f },
	{ 136.1636f, 322.2367f, -92.9871f },
	{ 76.85284f, 349.2091f, -181.8126f },
	{ 142.9412f, 349.2091f, -98.3942f },
	{ -0.9307089f, 230.8014f, -115.2907f },
	{ 65.15769f, 230.8014f, -31.8725f },
	{ 6.190523f, 259.5496f, -120.971f },
	{ 72.27893f, 259.5496f, -37.55283f },
	{ 31.91907f, 200.446f, -143.614f },
	{ 98.00748f, 200.446f, -60.19583f },
	{ 39.0403f, 229.1943f, -149.2944f },
	{ 105.1287f, 229.1943f, -65.87616f },
	{ -103.0229f, -200, 157.4651f },
	{ -103.0374f, -200, 197.6183f },
	{ -103.0229f, 402, 157.4651f },
	{ -103.0374f, 402, 197.6183f },
	{ 103.0202f, -200, 157.4651f },
	{ 103.0374f, -200, 197.6183f },
	{ 103.0202f, 402, 157.4651f },
	{ 103.0374f, 402, 197.6183f },
	{ -103.0374f, -0.00001f, 197.6183f },
	{ -103.0229f, -0.00001f, 157.4651f },
	{ 103.0374f, -0.00001f, 197.6183f },
	{ 103.0202f, -0.00001f, 157.4651f },
	{ -102.8232f, -199.9999f, 120.0135f },
	{ -103.0374f, -199.9999f, 160.1666f },
	{ -102.8232f, 512.2465f, 120.0135f },
	{ -103.0374f, 512.2465f, 160.1666f },
	{ 102.7824f, -199.9999f, 120.0135f },
	{ 103.0374f, -199.9999f, 160.1666f },
	{ 102.7824f, 512.2465f, 120.0135f },
	{ 103.0374f, 512.2465f, 160.1666f },
	{ -103.0374f, 0, 160.1666f },
	{ -102.8232f, 0, 120.0135f },
	{ 103.0374f, 0, 160.1666f },
	{ 102.7824f, 0, 120.0135f },
	{ -102.911f, -200, -145.2742f },
	{ -102.6944f, -200, 122.7642f },
	{ -102.911f, 600, -145.2742f },
	{ -102.6944f, 600, 122.7642f },
	{ 102.1391f, -200, 122.7642f },
	{ -102.911f, 200.2889f, -145.2742f },
	{ 102.1391f, 600, 122.7642f },
	{ 94.86127f, 600, 17.48738f },
	{ 94.86127f, -200, 17.48738f },
	{ 9.666191f, -200, -124.6791f },
	{ 9.666191f, 600, -124.6791f },
	{ -43.6325f, 600, -142.516f },
	{ 48.03554f, 600, -92.45966f },
	{ -43.6325f, -200, -142.516f },
	{ 48.03554f, -200, -92.45966f },
	{ 100.4424f, -200, 72.36792f },
	{ 79.83279f, -200, -41.57048f },
	{ 100.4424f, 600, 72.36792f },
	{ 79.83279f, 600, -41.57048f },
	{ 79.83279f, -0.00002f, -41.57048f },
	{ -102.911f, -0.00002f, -145.2742f },
	{ 102.1391f, -0.00002f, 122.7642f },
	{ -43.6325f, -0.00002f, -142.516f },
	{ 100.4424f, -0.00002f, 72.36792f },
	{ 9.666191f, -0.00002f, -124.6791f },
	{ 94.86127f, -0.00002f, 17.48738f },
	{ 48.03554f, -0.00002f, -92.45966f },
	{ -102.6944f, -0.00002f, 122.7642f },
	{ -102.6944f, 200.2889f, 122.7642f },
	{ 102.1391f, 200.2889f, 122.7642f },
	{ 100.4424f, 200.2889f, 72.36792f },
	{ 94.86127f, 200.2889f, 17.48738f },
	{ 79.83279f, 200.2889f, -41.57048f },
	{ 48.03554f, 200.2889f, -92.45966f },
	{ 9.666191f, 200.2889f, -124.6791f },
	{ -43.6325f, 200.2889f, -142.516f },
	{ -102.6944f, 401.6437f, 122.7642f },
	{ 102.1391f, 401.6437f, 122.7642f },
	{ 100.4424f, 401.6437f, 72.36792f },
	{ 94.86127f, 401.6437f, 17.48738f },
	{ 79.83279f, 401.6437f, -41.57048f },
	{ 48.03554f, 401.6437f, -92.45966f },
	{ 9.666191f, 401.6437f, -124.6791f },
	{ -43.6325f, 401.6437f, -142.516f },
	{ -102.911f, 401.6437f, -145.2742f },
	{ 45.27226f, 200.2889f, -8.244275f },
	{ 13.47504f, 200.2889f, -59.13345f },
	{ -24.89432f, 200.2889f, -91.35287f },
	{ 45.27226f, 401.6437f, -8.244275f },
	{ 13.47504f, 401.6437f, -59.13345f },
	{ -24.89432f, 401.6437f, -91.35287f },
	{ 56.24021f, 600, 21.86478f },
	{ 60.7234f, 600, 75.18387f },
	{ 60.7234f, 401.6437f, 75.18387f },
	{ 56.24021f, 401.6437f, 21.86477f },
	{ 103.0374f, 263.42f, 160.1666f },
	{ -103.0374f, 263.42f, 160.1666f },
	{ 102.7824f, 263.42f, 120.0135f },
	{ -102.8232f, 263.42f, 120.0135f },
	{ 110.696f, 322.2367f, -140.7576f },
	{ 118.9888f, 349.2091f, -144.6493f },
	{ 79.66103f, 229.1943f, -113.6465f },
	{ 72.53976f, 200.446f, -107.9661f },
	{ 92.92804f, 280.3456f, -126.0737f },
	{ 93.278f, 275.5907f, -133.3313f },
	{ 96.56656f, 275.5907f, -128.7879f },
	{ 89.6395f, 280.3456f, -130.6171f },
	{ -103.0374f, 201, 197.6183f },
	{ 103.0374f, 201, 197.6183f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0003E8E0[] = {
	{ -0.412785f, -0.535487f, -0.736792f },
	{ -0.288203f, -0.554592f, 0.780619f },
	{ 0.362884f, 0.653796f, -0.663977f },
	{ 0.470169f, 0.642617f, 0.604966f },
	{ 0.231738f, -0.769874f, -0.594635f },
	{ 0.330911f, -0.7810709f, 0.529552f },
	{ 0.705303f, 0.282372f, -0.650241f },
	{ 0.802729f, 0.269618f, 0.531914f },
	{ -0.684222f, 0.224288f, -0.693927f },
	{ -0.548933f, 0.224288f, 0.805213f },
	{ -0.313385f, 0.780822f, -0.5404699f },
	{ -0.211559f, 0.780822f, 0.587844f },
	{ 0.6525249f, -0.25864f, -0.712262f },
	{ 0.769498f, -0.258639f, 0.583933f },
	{ 0.708809f, 0.25818f, -0.656454f },
	{ 0.814883f, 0.25818f, 0.51895f },
	{ -0.684222f, 0.224288f, -0.693927f },
	{ -0.548934f, 0.224289f, 0.805212f },
	{ -0.313385f, 0.780822f, -0.540469f },
	{ -0.211559f, 0.780822f, 0.587844f },
	{ 0.6525249f, -0.25864f, -0.712262f },
	{ 0.769498f, -0.25864f, 0.583933f },
	{ 0.70881f, 0.25818f, -0.656454f },
	{ 0.814883f, 0.25818f, 0.51895f },
	{ -0.814883f, -0.258178f, -0.51895f },
	{ -0.70881f, -0.258178f, 0.656454f },
	{ -0.313383f, 0.780822f, -0.540471f },
	{ -0.21156f, 0.780822f, 0.5878429f },
	{ 0.21156f, -0.780822f, -0.5878429f },
	{ 0.313382f, -0.780822f, 0.5404699f },
	{ 0.70881f, 0.258179f, -0.656454f },
	{ 0.814883f, 0.258179f, 0.51895f },
	{ -0.41553f, -0.540455f, -0.731604f },
	{ -0.293092f, -0.561231f, 0.774026f },
	{ 0.358325f, 0.647895f, -0.672187f },
	{ 0.466166f, 0.6348709f, 0.616139f },
	{ 0.218447f, -0.772811f, -0.595857f },
	{ 0.317264f, -0.785547f, 0.531281f },
	{ 0.71211f, 0.270611f, -0.647819f },
	{ 0.808032f, 0.256767f, 0.530241f },
	{ -0.946359f, 0.231346f, -0.225574f },
	{ -0.015277f, 0.214898f, 0.976517f },
	{ -0.497826f, 0.742644f, -0.44794f },
	{ 0.276321f, 0.863418f, 0.422085f },
	{ 0.169841f, -0.2553f, -0.9518279f },
	{ 0.96061f, -0.273231f, 0.050725f },
	{ 0.208519f, 0.035282f, -0.9773819f },
	{ 0.983493f, 0.106356f, -0.146388f },
	{ -0.021774f, 0.442137f, 0.896683f },
	{ -0.9311219f, 0.359598f, -0.060837f },
	{ 0.9357359f, -0.254235f, 0.244463f },
	{ -0.034672f, -0.43705f, -0.898769f },
	{ -0.631526f, -0.041285f, -0.774255f },
	{ 0.631523f, 0.041288f, 0.7742569f },
	{ 0.103989f, 0.551881f, -0.827414f },
	{ 0.8213339f, 0.39187f, 0.414546f },
	{ 0.141112f, -0.44269f, -0.885501f },
	{ 0.921381f, -0.364813f, 0.134045f },
	{ 0.424028f, -0.014069f, -0.90554f },
	{ 0.992161f, -0.089751f, 0.086954f },
	{ -0.947284f, 0.242403f, -0.209507f },
	{ -0.004559f, 0.249574f, 0.968345f },
	{ -0.534161f, 0.78988f, -0.301267f },
	{ 0.16945f, 0.7927189f, 0.585562f },
	{ 0.151097f, -0.289444f, -0.9451939f },
	{ 0.957087f, -0.281259f, 0.06983799f },
	{ 0.237965f, 0.224809f, -0.944899f },
	{ 0.9734949f, 0.22779f, -0.020477f },
	{ -0.94572f, 0.248892f, -0.208964f },
	{ -0.026623f, 0.256618f, 0.966146f },
	{ -0.535394f, 0.7876689f, -0.304846f },
	{ 0.146776f, 0.783687f, 0.603566f },
	{ 0.156394f, -0.292306f, -0.94345f },
	{ 0.9545299f, -0.27721f, 0.109668f },
	{ 0.254701f, 0.240166f, -0.936722f },
	{ 0.970346f, 0.24169f, -0.003701f },
	{ -0.960071f, -0.278763f, 0.023541f },
	{ -0.20907f, -0.283553f, 0.9358889f },
	{ -0.58447f, 0.773152f, -0.246234f },
	{ 0.137919f, 0.767858f, 0.625598f },
	{ -0.209369f, -0.7523879f, -0.624562f },
	{ 0.558381f, -0.76296f, 0.325733f },
	{ 0.128898f, 0.286759f, -0.9492919f },
	{ 0.9504859f, 0.305998f, 0.054231f },
	{ -0.779968f, -0.522086f, -0.345074f },
	{ 0.217087f, -0.5299619f, 0.819764f },
	{ -0.082389f, 0.661429f, -0.745468f },
	{ 0.754647f, 0.622125f, 0.208491f },
	{ -0.224993f, -0.760121f, -0.609585f },
	{ 0.541312f, -0.770402f, 0.336842f },
	{ 0.129348f, 0.262005f, -0.956359f },
	{ 0.957868f, 0.283381f, 0.046738f },
	{ -1, 0, -0.000359f },
	{ -0.707234f, 0, 0.70698f },
	{ -0.7070259f, 0.707188f, -0.000254f },
	{ -0.577463f, 0.5773309f, 0.577256f },
	{ 1, 0, -0.000427f },
	{ 0.707258f, 0, 0.706956f },
	{ 0.707011f, 0.707203f, -0.000302f },
	{ 0.577485f, 0.577328f, 0.577238f },
	{ -0.707234f, 0, 0.70698f },
	{ -1, 0, -0.000359f },
	{ 0.707258f, 0, 0.706956f },
	{ 1, 0, -0.000427f },
	{ -0.999986f, 0, -0.005333f },
	{ -0.70899f, 0, 0.705218f },
	{ -0.705897f, 0.708304f, -0.003765f },
	{ -0.579028f, 0.57707f, 0.575948f },
	{ 0.99998f, 0, -0.006349f },
	{ 0.709348f, 0, 0.704859f },
	{ 0.705665f, 0.708531f, -0.00448f },
	{ 0.579347f, 0.5770169f, 0.57568f },
	{ -0.70899f, 0, 0.705219f },
	{ -0.999986f, 0, -0.005333f },
	{ 0.709348f, 0, 0.704859f },
	{ 0.99998f, 0, -0.006349f },
	{ -0.69077f, 0, -0.723074f },
	{ -0.706821f, 0, 0.707392f },
	{ -0.565203f, 0.574903f, -0.591635f },
	{ -0.577096f, 0.577392f, 0.577562f },
	{ 0.718905f, 0, 0.695108f },
	{ -0.69077f, 0, -0.723074f },
	{ 0.5878699f, 0.575601f, 0.568411f },
	{ 0.675799f, 0.570519f, 0.466695f },
	{ 0.98468f, 0, -0.174369f },
	{ 0.488804f, 0, -0.872393f },
	{ 0.36401f, 0.6674049f, -0.649667f },
	{ 0.135117f, 0.67737f, -0.723128f },
	{ 0.55792f, 0.673567f, -0.484802f },
	{ 0.183671f, 0, -0.982988f },
	{ 0.754837f, 0, -0.655912f },
	{ 0.997723f, 0, -0.06744999f },
	{ 0.919563f, 0, -0.392944f },
	{ 0.547339f, 0.5754229f, -0.607707f },
	{ 0.679289f, 0.674025f, -0.290271f },
	{ 0.919563f, 0, -0.392944f },
	{ -0.69077f, 0, -0.723074f },
	{ 0.718905f, 0, 0.695108f },
	{ 0.183671f, 0, -0.982988f },
	{ 0.997723f, 0, -0.06744999f },
	{ 0.488804f, 0, -0.872393f },
	{ 0.98468f, 0, -0.174369f },
	{ 0.754837f, 0, -0.655912f },
	{ -0.706821f, 0, 0.707392f },
	{ -0.706821f, 0, 0.707392f },
	{ 0.718905f, 0, 0.695108f },
	{ 0.997723f, 0, -0.06744999f },
	{ 0.98468f, 0, -0.174369f },
	{ 0.7093689f, 0.384118f, -0.5909719f },
	{ 0.55792f, 0.673567f, -0.484802f },
	{ 0.664721f, 0.359644f, -0.65483f },
	{ 0.183671f, 0, -0.982988f },
	{ -0.706821f, 0, 0.707392f },
	{ 0.718905f, 0, 0.695108f },
	{ 0.8867829f, 0.297475f, -0.35373f },
	{ 0.943477f, 0.307501f, 0.123674f },
	{ 0.7093689f, -0.384119f, -0.5909719f },
	{ 0.55792f, -0.673567f, -0.484802f },
	{ 0.664721f, -0.359644f, -0.65483f },
	{ 0.183671f, 0, -0.982988f },
	{ -0.69077f, 0, -0.723074f },
	{ 0.10068f, 0.567161f, -0.81743f },
	{ 0.5043409f, 0.74403f, -0.438245f },
	{ 0.819752f, 0.5720249f, -0.028179f },
	{ 0.10068f, -0.567161f, -0.81743f },
	{ 0.5043409f, -0.74403f, -0.438245f },
	{ 0.819752f, -0.5720249f, -0.028179f },
	{ 0.335207f, 0.901121f, 0.274986f },
	{ 0.279431f, 0.902995f, -0.326372f },
	{ 0.5307029f, 0.578043f, -0.619856f },
	{ 0.63042f, 0.578889f, 0.517163f },
	{ 0.709348f, 0, 0.704859f },
	{ -0.70899f, 0, 0.705219f },
	{ 0.99998f, 0, -0.006349f },
	{ -0.999986f, 0, -0.005333f },
	{ 0.487901f, -0.779426f, -0.392998f },
	{ 0.747169f, 0.359528f, -0.558997f },
	{ 0.746024f, 0.353028f, -0.564641f },
	{ 0.494952f, -0.7753929f, -0.392158f },
	{ 0.518116f, -0.08910099f, 0.850657f },
	{ -0.023998f, -0.349651f, -0.936573f },
	{ 0.8046139f, -0.523794f, 0.279708f },
	{ -0.518118f, 0.089103f, -0.850655f },
	{ -0.707234f, 0, 0.70698f },
	{ 0.707258f, 0, 0.706956f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0003F18C = { vertex_0003E034, normal_0003E8E0, LengthOfArray<Sint32>(vertex_0003E034), meshlist_0003DDDC, matlist_0003D158, LengthOfArray<Uint16>(meshlist_0003DDDC), LengthOfArray<Uint16>(matlist_0003D158), { 35.76901f, 201.1832f, 5.439507f }, 452.8426f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0003F1B4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0003F18C, 508.8719f, 0, -1021.461f, 0xFFFFFFFE, 0x7BFD, 0x61C, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0003F1E8[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 51, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 52, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0003F24C[] = {
	3, 2, 3, 0,
	5, 15, 16, 0, 1, 2,
	0x8000u | 5, 6, 5, 0, 4, 3,
	0x8000u | 5, 9, 8, 0, 7, 6,
	5, 12, 13, 0, 14, 15,
	0x8000u | 5, 12, 11, 0, 10, 9
};

extern "C" __declspec(dllexport) Sint16 poly_0003F290[] = {
	6, 13, 12, 53, 34, 57, 36,
	3, 14, 13, 53,
	0x8000u | 25, 16, 1, 44, 2, 46, 3, 48, 4, 47, 5, 45, 6, 43, 7, 41, 8, 39, 9, 37, 10, 35, 11, 33, 12, 34,
	10, 42, 44, 56, 16, 55, 15, 50, 14, 54, 53,
	0x8000u | 6, 56, 42, 60, 40, 59, 38,
	6, 59, 58, 38, 67, 36, 57
};

extern "C" __declspec(dllexport) Sint16 poly_0003F30C[] = {
	34, 71, 21, 70, 19, 69, 18, 72, 17, 74, 20, 76, 22, 78, 24, 79, 26, 81, 28, 83, 30, 84, 32, 82, 31, 80, 29, 77, 27, 75, 25, 73, 23, 71, 21
};

extern "C" __declspec(dllexport) Sint16 poly_0003F352[] = {
	34, 36, 21, 38, 23, 40, 25, 42, 27, 44, 29, 46, 31, 48, 32, 47, 30, 45, 28, 43, 26, 41, 24, 39, 22, 37, 20, 35, 17, 33, 18, 34, 19, 36, 21
};

extern "C" __declspec(dllexport) Sint16 poly_0003F398[] = {
	0x8000u | 5, 52, 65, 61, 66, 49,
	9, 65, 51, 52, 64, 68, 63, 62, 53, 57,
	4, 49, 60, 66, 56,
	0x8000u | 6, 63, 53, 64, 54, 51, 50,
	4, 65, 66, 55, 56,
	4, 52, 68, 58, 67,
	4, 61, 52, 59, 58,
	4, 49, 61, 60, 59,
	4, 55, 50, 65, 51,
	4, 57, 67, 62, 68
};

NJS_TEX uv_0003F40C[] = {
	{ 490, 97 },
	{ 434, 180 },
	{ 255, 0 },
	{ 434, -180 },
	{ 490, -97 },
	{ 255, 0 },
	{ 510, 0 },
	{ 490, 97 },
	{ 157, 235 },
	{ 254, 255 },
	{ 255, 0 },
	{ 352, 235 },
	{ 434, 180 },
	{ 0 },
	{ 19, 97 },
	{ 255, 0 },
	{ 74, 180 },
	{ 157, 235 },
	{ 157, -235 },
	{ 255, -255 },
	{ 255, 0 },
	{ 352, -235 },
	{ 434, -180 },
	{ 157, -235 },
	{ 74, -180 },
	{ 255, 0 },
	{ 19, -97 },
	{ 0 }
};

NJS_TEX uv_0003F47C[] = {
	{ 788, 0 },
	{ 744, 0 },
	{ 788, 56 },
	{ 744, 255 },
	{ 788, 145 },
	{ 788, 255 },
	{ 72, 0 },
	{ 24, 0 },
	{ 24, 56 },
	{ 168, 0 },
	{ 216, 0 },
	{ 216, 255 },
	{ 264, 0 },
	{ 264, 255 },
	{ 312, 0 },
	{ 312, 255 },
	{ 360, 0 },
	{ 360, 255 },
	{ 408, 0 },
	{ 408, 255 },
	{ 456, 0 },
	{ 456, 255 },
	{ 504, 0 },
	{ 504, 255 },
	{ 552, 0 },
	{ 552, 255 },
	{ 600, 0 },
	{ 600, 255 },
	{ 648, 0 },
	{ 648, 255 },
	{ 696, 0 },
	{ 696, 255 },
	{ 744, 0 },
	{ 744, 255 },
	{ 168, 255 },
	{ 216, 255 },
	{ 168, 79 },
	{ 168, 0 },
	{ 120, 79 },
	{ 120, 0 },
	{ 118, 57 },
	{ 72, 0 },
	{ 72, 56 },
	{ 24, 56 },
	{ 168, 79 },
	{ 168, 255 },
	{ 168, 169 },
	{ 120, 255 },
	{ 120, 169 },
	{ 72, 255 },
	{ 120, 169 },
	{ 72, 169 },
	{ 72, 255 },
	{ 69, 146 },
	{ 24, 255 },
	{ 24, 145 }
};

NJS_TEX uv_0003F55C[] = {
	{ 788, 255 },
	{ 788, 0 },
	{ 744, 255 },
	{ 744, 0 },
	{ 696, 255 },
	{ 696, 0 },
	{ 648, 255 },
	{ 648, 0 },
	{ 600, 255 },
	{ 600, 0 },
	{ 552, 255 },
	{ 552, 0 },
	{ 504, 255 },
	{ 504, 0 },
	{ 456, 255 },
	{ 456, 0 },
	{ 408, 255 },
	{ 408, 0 },
	{ 360, 255 },
	{ 360, 0 },
	{ 312, 255 },
	{ 312, 0 },
	{ 264, 255 },
	{ 264, 0 },
	{ 216, 255 },
	{ 216, 0 },
	{ 168, 255 },
	{ 168, 0 },
	{ 120, 255 },
	{ 120, 0 },
	{ 72, 255 },
	{ 72, 0 },
	{ 24, 255 },
	{ 24, 0 }
};

NJS_TEX uv_0003F5E4[] = {
	{ 24, 0 },
	{ 24, 255 },
	{ 72, 0 },
	{ 72, 255 },
	{ 120, 0 },
	{ 120, 255 },
	{ 168, 0 },
	{ 168, 255 },
	{ 216, 0 },
	{ 216, 255 },
	{ 264, 0 },
	{ 264, 255 },
	{ 312, 0 },
	{ 312, 255 },
	{ 360, 0 },
	{ 360, 255 },
	{ 408, 0 },
	{ 408, 255 },
	{ 456, 0 },
	{ 456, 255 },
	{ 504, 0 },
	{ 504, 255 },
	{ 552, 0 },
	{ 552, 255 },
	{ 600, 0 },
	{ 600, 255 },
	{ 648, 0 },
	{ 648, 255 },
	{ 696, 0 },
	{ 696, 255 },
	{ 744, 0 },
	{ 744, 255 },
	{ 788, 0 },
	{ 788, 255 }
};

NJS_TEX uv_0003F66C[] = {
	{ 172, 255 },
	{ 85, 51 },
	{ 85, 255 },
	{ 10, 51 },
	{ 10, 254 },
	{ 85, 51 },
	{ 89, 2 },
	{ 172, 255 },
	{ 172, 0 },
	{ 177, 203 },
	{ 254, 0 },
	{ 254, 200 },
	{ 230, 0 },
	{ 230, 200 },
	{ 22, 255 },
	{ 0, 255 },
	{ 22, 51 },
	{ 0, 51 },
	{ 254, 1 },
	{ 253, 7 },
	{ 172, 0 },
	{ 171, 7 },
	{ 91, 1 },
	{ 90, 8 },
	{ 78, 44 },
	{ 0, 44 },
	{ 78, 52 },
	{ 0, 52 },
	{ 177, 255 },
	{ 177, 203 },
	{ 170, 254 },
	{ 170, 203 },
	{ 78, 245 },
	{ 165, 245 },
	{ 78, 255 },
	{ 165, 255 },
	{ 6, 255 },
	{ 85, 255 },
	{ 7, 247 },
	{ 85, 247 },
	{ 67, 52 },
	{ 67, 1 },
	{ 92, 52 },
	{ 92, 1 },
	{ 253, 200 },
	{ 170, 200 },
	{ 252, 210 },
	{ 171, 210 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0003F72C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_0003F24C, NULL, NULL, NULL, uv_0003F40C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_0003F290, NULL, NULL, NULL, uv_0003F47C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0003F30C, NULL, NULL, NULL, uv_0003F55C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_0003F352, NULL, NULL, NULL, uv_0003F5E4, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 10, poly_0003F398, NULL, NULL, NULL, uv_0003F66C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0003F7A4[] = {
	{ -0.00017f, 454.5029f, 0.000002f },
	{ 98.4554f, 454.5029f, 0.000002f },
	{ 90.96093f, 454.5029f, -37.67726f },
	{ 69.61848f, 454.5029f, -69.6185f },
	{ 37.67723f, 454.5029f, -90.96094f },
	{ -0.0003f, 454.5029f, -98.45541f },
	{ -37.67729f, 454.5029f, -90.96091f },
	{ -69.61851f, 454.5029f, -69.61846f },
	{ -90.96095f, 454.5029f, -37.67723f },
	{ -98.45542f, 454.5029f, 0.00003f },
	{ -90.96094f, 454.5029f, 37.67728f },
	{ -69.61848f, 454.5029f, 69.61851f },
	{ -37.67723f, 454.5029f, 90.96095f },
	{ 0.000027f, 454.5029f, 98.45541f },
	{ 37.67728f, 454.5029f, 90.96091f },
	{ 69.6185f, 454.5029f, 69.61845f },
	{ 90.96094f, 454.5029f, 37.67721f },
	{ -90.96094f, 0, 37.67728f },
	{ -69.61848f, 0, 69.61851f },
	{ -37.67723f, 0, 90.96095f },
	{ -98.45542f, 0, 0.00003f },
	{ 0.000027f, 0, 98.45541f },
	{ -90.96095f, 0, -37.67723f },
	{ 37.67728f, 0, 90.96091f },
	{ -69.61851f, 0, -69.61846f },
	{ 69.6185f, 0, 69.61845f },
	{ -37.67729f, 0, -90.96091f },
	{ 90.96094f, 0, 37.67721f },
	{ -0.0003f, 0, -98.45541f },
	{ 98.4554f, 0, 0.000002f },
	{ 37.67723f, 0, -90.96094f },
	{ 90.96093f, 0, -37.67726f },
	{ 69.61848f, 0, -69.6185f },
	{ -69.61848f, 227.656f, 69.61851f },
	{ -37.67723f, 227.656f, 90.96095f },
	{ -90.96094f, 227.656f, 37.67728f },
	{ 0.000027f, 227.656f, 98.45541f },
	{ -98.45542f, 227.656f, 0.00003f },
	{ 37.67728f, 227.656f, 90.96091f },
	{ -90.96095f, 227.656f, -37.67723f },
	{ 69.6185f, 227.656f, 69.61845f },
	{ -69.61851f, 227.656f, -69.61846f },
	{ 90.96094f, 227.656f, 37.67721f },
	{ -37.67729f, 227.656f, -90.96091f },
	{ 98.4554f, 227.656f, 0.000002f },
	{ -0.0003f, 227.656f, -98.45541f },
	{ 90.96093f, 227.656f, -37.67726f },
	{ 37.67723f, 227.656f, -90.96094f },
	{ 69.61848f, 227.656f, -69.6185f },
	{ 75.26845f, 303.4461f, 16.56801f },
	{ 67.39056f, 403.2027f, 69.61845f },
	{ 51.69806f, 403.2027f, 48.50924f },
	{ 21.98478f, 303.4461f, 69.85171f },
	{ 0.000027f, 404.303f, 98.45541f },
	{ 37.67728f, 404.303f, 90.96091f },
	{ 69.6185f, 384.0215f, 69.61845f },
	{ 90.96094f, 384.0215f, 37.67721f },
	{ 0.000027f, 324.8049f, 98.45541f },
	{ 37.67728f, 303.4461f, 90.96091f },
	{ 69.6185f, 303.4461f, 69.61845f },
	{ 90.96094f, 303.4461f, 37.67721f },
	{ 53.926f, 303.4461f, 48.50924f },
	{ -15.69247f, 324.8049f, 77.34621f },
	{ -15.69247f, 404.303f, 77.34621f },
	{ 21.98478f, 404.303f, 69.85171f },
	{ 53.926f, 384.0215f, 48.50924f },
	{ 75.26845f, 384.0215f, 16.56801f },
	{ 35.2603f, 323.9097f, 90.96091f },
	{ 19.56779f, 323.9097f, 69.8517f },
	{ -69.61848f, -200, 69.61851f },
	{ -37.67723f, -200, 90.96095f },
	{ 0.000027f, -200, 98.45541f },
	{ -90.96094f, -200, 37.67728f },
	{ 37.67728f, -200, 90.96091f },
	{ -98.45542f, -200, 0.00003f },
	{ 69.6185f, -200, 69.61845f },
	{ -90.96095f, -200, -37.67723f },
	{ 90.96094f, -200, 37.67721f },
	{ -69.61851f, -200, -69.61846f },
	{ -37.67729f, -200, -90.96091f },
	{ 98.4554f, -200, 0.000002f },
	{ -0.0003f, -200, -98.45541f },
	{ 90.96093f, -200, -37.67726f },
	{ 37.67723f, -200, -90.96094f },
	{ 69.61848f, -200, -69.6185f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0003FBA0[] = {
	{ 0, 1, 0 },
	{ 0.7462029f, 0.665719f, 0 },
	{ 0.689401f, 0.665719f, -0.285559f },
	{ 0.527645f, 0.665719f, -0.527645f },
	{ 0.285559f, 0.665719f, -0.689401f },
	{ 0, 0.665719f, -0.7462029f },
	{ -0.28556f, 0.665719f, -0.689401f },
	{ -0.527645f, 0.665719f, -0.527645f },
	{ -0.689401f, 0.665719f, -0.285559f },
	{ -0.7462029f, 0.665719f, 0 },
	{ -0.689401f, 0.665719f, 0.28556f },
	{ -0.527645f, 0.665719f, 0.527645f },
	{ -0.285559f, 0.665719f, 0.689401f },
	{ 0, 0.665719f, 0.7462029f },
	{ 0.288742f, 0.666077f, 0.687727f },
	{ 0.530394f, 0.665369f, 0.5253249f },
	{ 0.689401f, 0.665719f, 0.285559f },
	{ -0.923879f, 0, 0.382684f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.382683f, 0, 0.92388f },
	{ -1, 0, 0 },
	{ 0.000001f, 0, 1 },
	{ -0.92388f, 0, -0.382683f },
	{ 0.382684f, 0, 0.923879f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.707106f },
	{ -0.382684f, 0, -0.923879f },
	{ 0.92388f, 0, 0.382683f },
	{ 0, 0, -1 },
	{ 1, 0, 0 },
	{ 0.382683f, 0, -0.92388f },
	{ 0.92388f, 0, -0.382683f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.923879f, 0, 0.382684f },
	{ -0.001309f, 0, 0.999999f },
	{ -1, 0, 0 },
	{ 0.381474f, 0, 0.9243799f },
	{ -0.92388f, 0, -0.382683f },
	{ 0.7071069f, 0, 0.707106f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.92388f, 0, 0.382683f },
	{ -0.382684f, 0, -0.923879f },
	{ 1, 0, 0 },
	{ 0, 0, -1 },
	{ 0.92388f, 0, -0.382683f },
	{ 0.382683f, 0, -0.92388f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.020774f, 0.561446f, 0.827252f },
	{ -0.132149f, -0.5739819f, 0.808135f },
	{ -0.097255f, -0.590223f, 0.80136f },
	{ 0.785969f, 0.598626f, 0.154592f },
	{ 0.221587f, -0.467641f, 0.855693f },
	{ 0.283019f, -0.656428f, 0.699287f },
	{ 0.073898f, -0.590708f, 0.803494f },
	{ 0.711595f, -0.435441f, 0.551384f },
	{ 0.231313f, 0.4695f, 0.852094f },
	{ 0.569912f, 0.379625f, 0.728756f },
	{ 0.527645f, 0.665719f, 0.527645f },
	{ 0.711595f, 0.435441f, 0.551384f },
	{ 0.466283f, 0.754934f, 0.461145f },
	{ 0.778426f, 0.553953f, 0.295279f },
	{ 0.7759719f, -0.556406f, 0.29712f },
	{ 0.244199f, -0.757464f, 0.605487f },
	{ 0.334881f, -0.39954f, 0.853359f },
	{ 0.020774f, -0.561446f, 0.827252f },
	{ 0.749706f, 0.5847819f, 0.309792f },
	{ 0.572059f, 0.773824f, 0.271928f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.382683f, 0, 0.92388f },
	{ 0.000001f, 0, 1 },
	{ -0.923879f, 0, 0.382684f },
	{ 0.382684f, 0, 0.923879f },
	{ -1, 0, 0 },
	{ 0.7071069f, 0, 0.707106f },
	{ -0.92388f, 0, -0.382683f },
	{ 0.92388f, 0, 0.382683f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.382684f, 0, -0.923879f },
	{ 1, 0, 0 },
	{ 0, 0, -1 },
	{ 0.92388f, 0, -0.382683f },
	{ 0.382683f, 0, -0.92388f },
	{ 0.7071069f, 0, -0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0003FF9C = { vertex_0003F7A4, normal_0003FBA0, LengthOfArray<Sint32>(vertex_0003F7A4), meshlist_0003F72C, matlist_0003F1E8, LengthOfArray<Uint16>(meshlist_0003F72C), LengthOfArray<Uint16>(matlist_0003F1E8), { -0.00011f, 127.2515f, 0 }, 341.5841f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0003FFC4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0003FF9C, 877, 0, -502, 0, 0xFFFFE44C, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0003FFF8[] = {
	{ { 0xFFBFBFBF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0004000C[] = {
	0x8000u | 9, 5, 3, 7, 6, 4, 0, 5, 1, 3,
	3, 5, 4, 7,
	4, 0, 2, 6, 3
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00040034[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0004000C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0004004C[] = {
	{ 20.5595f, 337.506f, 73.06448f },
	{ 34.90638f, 340.4878f, 93.86889f },
	{ 21.30166f, 341.2593f, 72.01472f },
	{ 35.64854f, 344.2411f, 92.81915f },
	{ 54.45599f, 324.7761f, 51.51378f },
	{ 68.80286f, 327.7579f, 72.31819f },
	{ 55.19815f, 328.5294f, 50.46402f },
	{ 69.54503f, 331.5112f, 71.26843f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000400AC[] = {
	{ -0.530938f, -0.751811f, -0.391005f },
	{ 0.266388f, -0.586096f, 0.7651989f },
	{ -0.266389f, 0.586095f, -0.7651989f },
	{ 0.530938f, 0.75181f, 0.391006f },
	{ 0.03094f, -0.788277f, -0.6145419f },
	{ 0.681955f, -0.652971f, 0.329495f },
	{ 0.246945f, 0.304119f, -0.9200709f },
	{ 0.8979599f, 0.439424f, 0.023966f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0004010C = { vertex_0004004C, normal_000400AC, LengthOfArray<Sint32>(vertex_0004004C), meshlist_00040034, matlist_0003FFF8, LengthOfArray<Uint16>(meshlist_00040034), LengthOfArray<Uint16>(matlist_0003FFF8), { 45.05227f, 334.5086f, 72.16645f }, 32.72448f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00040134 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004010C, 879.196f, 0, -518.2158f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00040168[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 56, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 57, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 55, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 54, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000401B8[] = {
	10, 16, 1, 18, 5, 19, 3, 20, 8, 17, 13
};

extern "C" __declspec(dllexport) Sint16 poly_000401CE[] = {
	0x8000u | 10, 6, 1, 10, 5, 2, 3, 7, 8, 12, 13
};

extern "C" __declspec(dllexport) Sint16 poly_000401E4[] = {
	10, 15, 16, 11, 18, 4, 19, 9, 20, 14, 17
};

extern "C" __declspec(dllexport) Sint16 poly_000401FA[] = {
	5, 11, 4, 0, 9, 14,
	3, 15, 11, 0
};

NJS_TEX uv_00040210[] = {
	{ 0 },
	{ 0, 254 },
	{ 48, 0 },
	{ 48, 254 },
	{ 132, 0 },
	{ 132, 254 },
	{ 204, 0 },
	{ 204, 254 },
	{ 254, 0 },
	{ 254, 254 }
};

NJS_TEX uv_00040238[] = {
	{ 2, 254 },
	{ 2, 0 },
	{ 48, 254 },
	{ 48, 0 },
	{ 132, 254 },
	{ 132, 0 },
	{ 204, 254 },
	{ 204, 0 },
	{ 254, 254 },
	{ 254, 0 }
};

NJS_TEX uv_00040260[] = {
	{ 2, 0 },
	{ 2, 254 },
	{ 48, 0 },
	{ 48, 254 },
	{ 132, 0 },
	{ 132, 254 },
	{ 204, 0 },
	{ 204, 254 },
	{ 252, 0 },
	{ 254, 254 }
};

NJS_TEX uv_00040288[] = {
	{ 180, 37 },
	{ 255, 127 },
	{ 0, 127 },
	{ 180, 217 },
	{ 0, 255 },
	{ 0 },
	{ 180, 37 },
	{ 0, 127 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000402A8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000401B8, NULL, NULL, NULL, uv_00040210, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000401CE, NULL, NULL, NULL, uv_00040238, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000401E4, NULL, NULL, NULL, uv_00040260, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_000401FA, NULL, NULL, NULL, uv_00040288, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00040308[] = {
	{ 86.47425f, 454.5029f, -33.44203f },
	{ 99.1777f, 0, -4.213904f },
	{ 134.3236f, -200, -54.23885f },
	{ 134.3236f, 0, -54.23885f },
	{ 134.3236f, 454.5029f, -54.23885f },
	{ 129.2915f, 0, -27.4802f },
	{ 99.1777f, -200, -4.213904f },
	{ 111.3262f, -200, -68.81502f },
	{ 111.3262f, 0, -68.81502f },
	{ 111.3262f, 454.5029f, -68.81502f },
	{ 129.2915f, -200, -27.4802f },
	{ 129.2915f, 454.5029f, -27.4802f },
	{ 73.77081f, -200, -62.67015f },
	{ 73.77081f, 0, -62.67015f },
	{ 73.77081f, 454.5029f, -62.67015f },
	{ 99.1777f, 454.5029f, -4.213904f },
	{ 99.1777f, 227.2515f, -4.213904f },
	{ 73.77081f, 227.2515f, -62.67015f },
	{ 129.2915f, 227.2515f, -27.4802f },
	{ 134.3236f, 227.2515f, -54.23885f },
	{ 111.3262f, 227.2515f, -68.81502f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00040404[] = {
	{ 0, 1, 0 },
	{ 0.61139f, 0, 0.791329f },
	{ 0.917121f, 0, -0.398609f },
	{ 0.917121f, 0, -0.398609f },
	{ 0.733735f, 0.599944f, -0.318904f },
	{ 0.852821f, 0, 0.522203f },
	{ 0.61139f, 0, 0.791329f },
	{ 0.200007f, 0, -0.979795f },
	{ 0.200007f, 0, -0.979795f },
	{ 0.154484f, 0.635142f, -0.756788f },
	{ 0.852821f, 0, 0.522203f },
	{ 0.658715f, 0.635143f, 0.403347f },
	{ -0.161474f, 0, -0.986877f },
	{ -0.161474f, 0, -0.986877f },
	{ -0.123506f, 0.6441939f, -0.754825f },
	{ 0.467629f, 0.6441939f, 0.605258f },
	{ 0.61139f, 0, 0.791329f },
	{ -0.161474f, 0, -0.986877f },
	{ 0.852821f, 0, 0.522203f },
	{ 0.917121f, 0, -0.398609f },
	{ 0.200007f, 0, -0.979795f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00040500 = { vertex_00040308, normal_00040404, LengthOfArray<Sint32>(vertex_00040308), meshlist_000402A8, matlist_00040168, LengthOfArray<Uint16>(meshlist_000402A8), LengthOfArray<Uint16>(matlist_00040168), { 104.0472f, 127.2515f, -36.51446f }, 328.7294f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00040528 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00040500, 877, 0, -502, 0, 0xFFFFE44C, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0004055C[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 58, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 58, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00040598[] = {
	4, 6, 0, 4, 2,
	5, 12, 14, 0, 16, 2,
	0x8000u | 5, 12, 10, 0, 8, 6,
	3, 22, 19, 20
};

extern "C" __declspec(dllexport) Sint16 poly_000405C2[] = {
	0x8000u | 18, 2, 1, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1,
	3, 17, 18, 19,
	0x8000u | 5, 19, 20, 18, 22, 21
};

extern "C" __declspec(dllexport) Sint16 poly_000405FC[] = {
	4, 19, 22, 17, 21
};

NJS_TEX uv_00040608[] = {
	{ 127, 255 },
	{ 127, 149 },
	{ 217, 224 },
	{ 255, 149 },
	{ 37, 75 },
	{ 127, 44 },
	{ 127, 149 },
	{ 217, 75 },
	{ 255, 149 },
	{ 37, 75 },
	{ 0, 149 },
	{ 127, 149 },
	{ 37, 224 },
	{ 127, 255 },
	{ 184, 70 },
	{ 70, 70 },
	{ 127, 0 }
};

NJS_TEX uv_0004064C[] = {
	{ 2093, 0 },
	{ 2093, 245 },
	{ 1845, 0 },
	{ 1845, 245 },
	{ 1540, 0 },
	{ 1540, 245 },
	{ 1222, 0 },
	{ 1222, 245 },
	{ 944, 0 },
	{ 944, 245 },
	{ 708, 0 },
	{ 708, 245 },
	{ 492, 0 },
	{ 492, 245 },
	{ 278, 0 },
	{ 278, 245 },
	{ 54, 0 },
	{ 54, 245 },
	{ 1315, 255 },
	{ 1536, 255 },
	{ 1315, 2 },
	{ 1315, 2 },
	{ 1536, 2 },
	{ 1536, 255 },
	{ 1761, 2 },
	{ 1761, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000406B4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00040598, NULL, NULL, NULL, uv_00040608, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, poly_000405C2, NULL, NULL, NULL, uv_0004064C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000405FC, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000406FC[] = {
	{ -0.00017f, 479.7903f, -21.26771f },
	{ 77.18767f, 453.8743f, -21.26771f },
	{ 77.18767f, 479.7903f, -21.26771f },
	{ 54.57991f, 453.8743f, -75.84765f },
	{ 54.57991f, 479.7903f, -75.84765f },
	{ -0.00017f, 453.8743f, -98.4554f },
	{ -0.00017f, 479.7903f, -98.4554f },
	{ -54.57995f, 453.8743f, -75.84765f },
	{ -54.57995f, 479.7903f, -75.84765f },
	{ -77.18769f, 453.8743f, -21.26771f },
	{ -77.18769f, 479.7903f, -21.26771f },
	{ -54.57995f, 453.8743f, 33.31223f },
	{ -54.57995f, 479.7903f, 33.31223f },
	{ -0.00017f, 453.8743f, 55.91997f },
	{ -0.00017f, 479.7903f, 55.91997f },
	{ 54.57991f, 453.8743f, 33.31223f },
	{ 54.57991f, 479.7903f, 33.31223f },
	{ -34.62476f, 452.8904f, 37.07144f },
	{ 0.000025f, 452.8904f, 88.75017f },
	{ -34.62476f, 479.5743f, 37.07144f },
	{ 0.000025f, 479.5743f, 88.75017f },
	{ 34.62473f, 452.8904f, 37.07144f },
	{ 34.62473f, 479.5743f, 37.07144f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00040810[] = {
	{ 0, 1, 0 },
	{ 1, 0, 0 },
	{ 0.776382f, 0.630263f, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.5489849f, 0.630262f, -0.5489849f },
	{ 0, 0, -1 },
	{ 0, 0.630263f, -0.776382f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.5489849f, 0.630262f, -0.5489849f },
	{ -1, 0, 0 },
	{ -0.776382f, 0.630262f, 0 },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.5489849f, 0.630262f, 0.5489849f },
	{ 0, 0, 1 },
	{ 0, 0.630262f, 0.776382f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.5489849f, 0.630262f, 0.5489849f },
	{ -0.8822179f, 0, -0.470842f },
	{ 0.000001f, 0, 1 },
	{ -0.735341f, 0.552498f, -0.392453f },
	{ 0, 0.5595599f, 0.8287899f },
	{ 0.882217f, 0, -0.470842f },
	{ 0.735341f, 0.552498f, -0.392454f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00040924 = { vertex_000406FC, normal_00040810, LengthOfArray<Sint32>(vertex_000406FC), meshlist_000406B4, matlist_0004055C, LengthOfArray<Uint16>(meshlist_000406B4), LengthOfArray<Uint16>(matlist_0004055C), { -0.00015f, 466.3404f, -4.852615f }, 111.7042f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0004094C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00040924, 877, 0, -502, 0, 0xFFFFE44C, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00040980[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 58, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000409A8[] = {
	0x8000u | 6, 6, 4, 7, 5, 3, 1,
	0x8000u | 6, 4, 6, 0, 2, 1, 3
};

extern "C" __declspec(dllexport) Sint16 poly_000409C4[] = {
	4, 7, 6, 3, 2
};

NJS_TEX uv_000409D0[] = {
	{ 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0 },
	{ 0, 255 },
	{ 508, 255 },
	{ 508, 0 },
	{ 0, 255 },
	{ 0 },
	{ 510, 255 },
	{ 510, 0 }
};

NJS_TEX uv_00040A00[] = {
	{ 255, 0 },
	{ 254, 255 },
	{ 0 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00040A10[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000409A8, NULL, NULL, NULL, uv_000409D0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000409C4, NULL, NULL, NULL, uv_00040A00, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00040A40[] = {
	{ -71.90906f, 477.5828f, -21.26771f },
	{ -0.00016f, 477.5828f, 50.64133f },
	{ -71.90906f, 512.3589f, -21.26771f },
	{ -0.00016f, 512.3589f, 50.64133f },
	{ -0.00018f, 477.5828f, -93.17676f },
	{ 71.90903f, 477.5828f, -21.26771f },
	{ -0.00018f, 512.3589f, -93.17676f },
	{ 71.90903f, 512.3589f, -21.26771f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00040AA0[] = {
	{ -1, 0, 0 },
	{ 0, 0, 1 },
	{ -0.816497f, 0.57735f, 0 },
	{ 0, 0.57735f, 0.816497f },
	{ 0, 0, -1 },
	{ 1, 0, 0 },
	{ 0, 0.57735f, -0.816497f },
	{ 0.816497f, 0.57735f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00040B00 = { vertex_00040A40, normal_00040AA0, LengthOfArray<Sint32>(vertex_00040A40), meshlist_00040A10, matlist_00040980, LengthOfArray<Uint16>(meshlist_00040A10), LengthOfArray<Uint16>(matlist_00040980), { -0.00015f, 494.9709f, -21.26771f }, 79.07507f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00040B28 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00040B00, 877, 0, -502, 0, 0xFFFFE44C, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00040B5C[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 59, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00040B84[] = {
	0x8000u | 6, 6, 4, 7, 5, 3, 1,
	0x8000u | 6, 4, 6, 0, 2, 1, 3
};

extern "C" __declspec(dllexport) Sint16 poly_00040BA0[] = {
	4, 7, 6, 3, 2
};

NJS_TEX uv_00040BAC[] = {
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 0 },
	{ 0, 255 },
	{ 254, 255 },
	{ 254, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

NJS_TEX uv_00040BDC[] = {
	{ 255, 0 },
	{ 254, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00040BEC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00040B84, NULL, NULL, NULL, uv_00040BAC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00040BA0, NULL, NULL, NULL, uv_00040BDC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00040C1C[] = {
	{ -42.42636f, 511.6883f, -21.26771f },
	{ -0.00019f, 511.6883f, 21.15863f },
	{ -42.42636f, 539.9093f, -21.26771f },
	{ -0.00019f, 539.9093f, 21.15863f },
	{ -0.00016f, 511.6883f, -63.69405f },
	{ 42.42633f, 511.6883f, -21.26771f },
	{ -0.00016f, 539.9093f, -63.69405f },
	{ 42.42633f, 539.9093f, -21.26771f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00040C7C[] = {
	{ -1, 0, 0 },
	{ 0, 0, 1 },
	{ -0.816497f, 0.57735f, 0 },
	{ 0, 0.57735f, 0.816497f },
	{ 0, 0, -1 },
	{ 1, 0, 0 },
	{ 0, 0.57735f, -0.816497f },
	{ 0.816497f, 0.57735f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00040CDC = { vertex_00040C1C, normal_00040C7C, LengthOfArray<Sint32>(vertex_00040C1C), meshlist_00040BEC, matlist_00040B5C, LengthOfArray<Uint16>(meshlist_00040BEC), LengthOfArray<Uint16>(matlist_00040B5C), { -0.00019f, 525.7988f, -21.26771f }, 46.65428f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00040D04 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00040CDC, 877, 0, -502, 0, 0xFFFFE44C, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00040D38[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00040E28[] = {
	6, 110, 108, 114, 132, 133, 134,
	3, 114, 111, 110,
	8, 125, 124, 127, 122, 123, 129, 120, 118,
	3, 127, 126, 125,
	5, 119, 0, 3, 1, 2,
	4, 129, 128, 118, 119,
	0x8000u | 8, 122, 129, 121, 128, 116, 119, 117, 0,
	0x8000u | 9, 133, 135, 134, 136, 130, 115, 109, 113, 112,
	0x8000u | 5, 135, 137, 136, 131, 115
};

extern "C" __declspec(dllexport) Sint16 poly_00040EA0[] = {
	4, 114, 142, 111, 143,
	4, 113, 147, 115, 149
};

extern "C" __declspec(dllexport) Sint16 poly_00040EB4[] = {
	4, 110, 144, 108, 145,
	4, 109, 146, 112, 148
};

extern "C" __declspec(dllexport) Sint16 poly_00040EC8[] = {
	3, 126, 9, 125,
	0x8000u | 5, 1, 2, 139, 138, 6,
	5, 103, 144, 143, 110, 111,
	0x8000u | 28, 144, 102, 103, 94, 95, 86, 87, 78, 79, 70, 71, 62, 63, 54, 55, 46, 47, 38, 39, 30, 31, 22, 23, 14, 15, 6, 7, 138,
	5, 104, 147, 148, 113, 112,
	0x8000u | 28, 147, 105, 104, 97, 96, 89, 88, 81, 80, 73, 72, 65, 64, 57, 56, 49, 48, 41, 40, 33, 32, 25, 24, 17, 16, 9, 8, 125
};

extern "C" __declspec(dllexport) Sint16 poly_00040F68[] = {
	3, 99, 98, 107,
	8, 98, 106, 107, 135, 149, 137, 115, 131,
	5, 135, 106, 133, 142, 114
};

extern "C" __declspec(dllexport) Sint16 poly_00040F8E[] = {
	0x8000u | 5, 130, 109, 134, 146, 101,
	6, 134, 132, 101, 100, 93, 92,
	3, 150, 5, 140,
	0x8000u | 25, 140, 4, 5, 12, 13, 20, 21, 28, 29, 36, 37, 44, 45, 52, 53, 60, 61, 68, 69, 76, 77, 84, 85, 92, 93,
	4, 100, 132, 145, 108
};

extern "C" __declspec(dllexport) Sint16 poly_00040FEE[] = {
	3, 138, 7, 141,
	3, 142, 106, 143,
	0x8000u | 28, 143, 103, 106, 95, 98, 87, 90, 79, 82, 71, 74, 63, 66, 55, 58, 47, 50, 39, 42, 31, 34, 23, 26, 15, 18, 7, 10, 141,
	3, 147, 105, 149,
	0x8000u | 27, 149, 107, 105, 99, 97, 91, 89, 83, 81, 75, 73, 67, 65, 59, 57, 51, 49, 43, 41, 35, 33, 27, 25, 19, 17, 11, 9
};

extern "C" __declspec(dllexport) Sint16 poly_00041078[] = {
	3, 140, 4, 139,
	0x8000u | 28, 139, 6, 4, 14, 12, 22, 20, 30, 28, 38, 36, 46, 44, 54, 52, 62, 60, 70, 68, 78, 76, 86, 84, 94, 92, 102, 100, 145,
	3, 144, 102, 145,
	3, 146, 101, 148,
	0x8000u | 27, 148, 104, 101, 96, 93, 88, 85, 80, 77, 72, 69, 64, 61, 56, 53, 48, 45, 40, 37, 32, 29, 24, 21, 16, 13, 8, 5
};

extern "C" __declspec(dllexport) Sint16 poly_00041102[] = {
	10, 98, 99, 90, 91, 82, 83, 74, 75, 66, 67,
	16, 66, 67, 58, 59, 50, 51, 42, 43, 34, 35, 26, 27, 18, 19, 10, 11,
	0x8000u | 9, 3, 119, 141, 118, 10, 120, 11, 123, 127
};

extern "C" __declspec(dllexport) Sint16 poly_0004114E[] = {
	0x8000u | 5, 5, 8, 150, 125, 124,
	4, 0, 140, 1, 139
};

extern "C" __declspec(dllexport) Sint16 poly_00041164[] = {
	4, 9, 126, 11, 127,
	4, 2, 138, 3, 141
};

extern "C" __declspec(dllexport) Sint16 poly_00041178[] = {
	8, 121, 122, 116, 124, 117, 150, 0, 140
};

NJS_TEX uv_0004118C[] = {
	{ 67, 0 },
	{ 67, 84 },
	{ 3, 254 },
	{ 260, 85 },
	{ 240, 254 },
	{ 482, 85 },
	{ 3, 254 },
	{ 3, 0 },
	{ 67, 0 },
	{ 960, 0 },
	{ 960, 84 },
	{ 1016, 254 },
	{ 913, 85 },
	{ 908, 253 },
	{ 750, 169 },
	{ 750, 253 },
	{ 529, 253 },
	{ 1016, 254 },
	{ 1016, 0 },
	{ 960, 0 },
	{ 204, 253 },
	{ 67, 84 },
	{ 3, 254 },
	{ 67, 0 },
	{ 3, 0 },
	{ 750, 169 },
	{ 529, 169 },
	{ 529, 253 },
	{ 204, 253 },
	{ 913, 85 },
	{ 750, 169 },
	{ 744, 85 },
	{ 529, 169 },
	{ 506, 85 },
	{ 204, 253 },
	{ 225, 85 },
	{ 67, 84 },
	{ 240, 254 },
	{ 460, 254 },
	{ 482, 85 },
	{ 573, 169 },
	{ 668, 85 },
	{ 1016, 254 },
	{ 960, 84 },
	{ 1016, 0 },
	{ 960, 0 },
	{ 460, 254 },
	{ 516, 254 },
	{ 573, 169 },
	{ 573, 254 },
	{ 1016, 254 }
};

NJS_TEX uv_00041258[] = {
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 }
};

NJS_TEX uv_00041278[] = {
	{ 3, 1 },
	{ 506, 1 },
	{ 3, 253 },
	{ 506, 253 },
	{ 3, 253 },
	{ 506, 253 },
	{ 3, 1 },
	{ 506, 1 }
};

NJS_TEX uv_00041298[] = {
	{ 7400, 255 },
	{ 7301, 255 },
	{ 7520, 0 },
	{ 7650, 0 },
	{ 7650, 255 },
	{ 7321, 0 },
	{ 7314, 255 },
	{ 6991, 0 },
	{ 252, 255 },
	{ 132, 0 },
	{ 126, 255 },
	{ 0 },
	{ 0, 255 },
	{ 132, 0 },
	{ 264, 0 },
	{ 252, 255 },
	{ 530, 0 },
	{ 504, 255 },
	{ 796, 0 },
	{ 757, 255 },
	{ 1061, 0 },
	{ 1009, 255 },
	{ 1328, 0 },
	{ 1261, 255 },
	{ 1593, 0 },
	{ 1514, 255 },
	{ 3044, 0 },
	{ 2964, 255 },
	{ 3702, 0 },
	{ 3633, 255 },
	{ 4360, 0 },
	{ 4303, 255 },
	{ 5017, 0 },
	{ 4972, 255 },
	{ 5675, 0 },
	{ 5641, 255 },
	{ 6334, 0 },
	{ 6311, 255 },
	{ 6991, 0 },
	{ 6980, 255 },
	{ 7314, 255 },
	{ 562, 0 },
	{ 284, 255 },
	{ 280, 0 },
	{ 0, 255 },
	{ 0 },
	{ 284, 255 },
	{ 568, 255 },
	{ 562, 0 },
	{ 1136, 255 },
	{ 1126, 0 },
	{ 1704, 255 },
	{ 1689, 0 },
	{ 2272, 255 },
	{ 2253, 0 },
	{ 2839, 255 },
	{ 2817, 0 },
	{ 3408, 255 },
	{ 3380, 0 },
	{ 4923, 255 },
	{ 4919, 0 },
	{ 5321, 255 },
	{ 5335, 0 },
	{ 5716, 255 },
	{ 5751, 0 },
	{ 6113, 255 },
	{ 6168, 0 },
	{ 6509, 255 },
	{ 6584, 0 },
	{ 6906, 255 },
	{ 7000, 0 },
	{ 7301, 255 },
	{ 7416, 0 },
	{ 7520, 0 }
};

NJS_TEX uv_000413C0[] = {
	{ 253, 247 },
	{ 1, 247 },
	{ 253, -262 },
	{ 1, 247 },
	{ 1, -7 },
	{ 253, -262 },
	{ 113, -176 },
	{ 253, -517 },
	{ 121, -318 },
	{ 253, -757 },
	{ 128, -460 },
	{ 113, -176 },
	{ 1, -7 },
	{ 65, -71 },
	{ 1, -135 },
	{ 1, -262 }
};

NJS_TEX uv_00041400[] = {
	{ 346, 143 },
	{ 508, 253 },
	{ 256, -253 },
	{ 508, -1 },
	{ 508, -253 },
	{ 256, 253 },
	{ 129, 253 },
	{ 508, 253 },
	{ 1, 253 },
	{ 508, -253 },
	{ 1, -253 },
	{ 510, 255 },
	{ 510, 205 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, 106 },
	{ 510, 205 },
	{ 0, -189 },
	{ 510, 6 },
	{ 0, -486 },
	{ 510, -192 },
	{ 0, -781 },
	{ 510, -392 },
	{ 0, -1078 },
	{ 510, -590 },
	{ 0, -1375 },
	{ 510, -789 },
	{ 0, -1671 },
	{ 510, -988 },
	{ 0, -2326 },
	{ 510, -1726 },
	{ 0, -2444 },
	{ 510, -1994 },
	{ 0, -2565 },
	{ 510, -2264 },
	{ 0, -2684 },
	{ 510, -2534 },
	{ 0, -2805 },
	{ 510, -2805 },
	{ 1, 253 },
	{ 129, -253 },
	{ 1, -1 },
	{ 1, -253 }
};

NJS_TEX uv_000414AC[] = {
	{ 6885, 0 },
	{ 6564, 0 },
	{ 6885, 255 },
	{ 0, 255 },
	{ 120, 255 },
	{ 0 },
	{ 0 },
	{ 120, 0 },
	{ 120, 255 },
	{ 362, 0 },
	{ 362, 255 },
	{ 604, 0 },
	{ 604, 255 },
	{ 845, 0 },
	{ 845, 255 },
	{ 1088, 0 },
	{ 1088, 255 },
	{ 1330, 0 },
	{ 1330, 255 },
	{ 2718, 0 },
	{ 2718, 255 },
	{ 3359, 0 },
	{ 3359, 255 },
	{ 4000, 0 },
	{ 4000, 255 },
	{ 4641, 0 },
	{ 4641, 255 },
	{ 5282, 0 },
	{ 5282, 255 },
	{ 5923, 0 },
	{ 5923, 255 },
	{ 6564, 0 },
	{ 6564, 255 },
	{ 6885, 255 },
	{ 0 },
	{ 278, 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 278, 255 },
	{ 278, 0 },
	{ 835, 255 },
	{ 835, 0 },
	{ 1393, 255 },
	{ 1393, 0 },
	{ 1950, 255 },
	{ 1950, 0 },
	{ 2506, 255 },
	{ 2506, 0 },
	{ 3064, 255 },
	{ 3064, 0 },
	{ 4552, 255 },
	{ 4552, 0 },
	{ 4940, 255 },
	{ 4940, 0 },
	{ 5328, 255 },
	{ 5328, 0 },
	{ 5717, 255 },
	{ 5717, 0 },
	{ 6107, 255 },
	{ 6107, 0 },
	{ 6496, 255 },
	{ 6496, 0 },
	{ 6885, 255 },
	{ 6885, 0 }
};

NJS_TEX uv_000415AC[] = {
	{ 7140, 255 },
	{ 6813, 255 },
	{ 7140, 0 },
	{ 7140, 0 },
	{ 6813, 0 },
	{ 6813, 255 },
	{ 6158, 0 },
	{ 6158, 255 },
	{ 5506, 0 },
	{ 5506, 255 },
	{ 4852, 0 },
	{ 4852, 255 },
	{ 4199, 0 },
	{ 4199, 255 },
	{ 3545, 0 },
	{ 3545, 255 },
	{ 2891, 0 },
	{ 2891, 255 },
	{ 1450, 0 },
	{ 1450, 255 },
	{ 1187, 0 },
	{ 1187, 255 },
	{ 923, 0 },
	{ 923, 255 },
	{ 658, 0 },
	{ 658, 255 },
	{ 394, 0 },
	{ 394, 255 },
	{ 131, 0 },
	{ 131, 255 },
	{ 0, 255 },
	{ 0 },
	{ 131, 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 280, 255 },
	{ 0 },
	{ 0 },
	{ 280, 0 },
	{ 280, 255 },
	{ 844, 0 },
	{ 844, 255 },
	{ 1409, 0 },
	{ 1409, 255 },
	{ 1973, 0 },
	{ 1973, 255 },
	{ 2536, 0 },
	{ 2536, 255 },
	{ 3101, 0 },
	{ 3101, 255 },
	{ 4642, 0 },
	{ 4642, 255 },
	{ 5058, 0 },
	{ 5058, 255 },
	{ 5474, 0 },
	{ 5474, 255 },
	{ 5891, 0 },
	{ 5891, 255 },
	{ 6307, 0 },
	{ 6307, 255 },
	{ 6723, 0 },
	{ 6723, 255 },
	{ 7140, 0 },
	{ 7140, 255 }
};

NJS_TEX uv_000416AC[] = {
	{ 0, 2071 },
	{ 254, 2071 },
	{ 0, 2581 },
	{ 254, 2581 },
	{ 0, 3091 },
	{ 254, 3091 },
	{ 0, 3601 },
	{ 254, 3601 },
	{ 0, 4048 },
	{ 254, 4048 },
	{ 0, 31 },
	{ 254, 31 },
	{ 0, 1051 },
	{ 254, 1051 },
	{ 0, 1561 },
	{ 254, 1561 },
	{ 0, 2071 },
	{ 254, 2071 },
	{ 0, 2581 },
	{ 254, 2581 },
	{ 0, 3091 },
	{ 254, 3091 },
	{ 0, 3601 },
	{ 254, 3601 },
	{ 0, 4048 },
	{ 254, 4048 },
	{ 0, 506 },
	{ 44, 404 },
	{ 0, 258 },
	{ 127, 458 },
	{ 0, 3 },
	{ 187, 386 },
	{ 254, 3 },
	{ 229, 354 },
	{ 254, 258 }
};

NJS_TEX uv_00041738[] = {
	{ 1, 253 },
	{ 1, 1 },
	{ 129, 253 },
	{ 129, 1 },
	{ 253, 253 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 1 },
	{ 1, 1 }
};

NJS_TEX uv_0004175C[] = {
	{ 1, 1 },
	{ 161, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 253 },
	{ 1, 253 }
};

NJS_TEX uv_0004177C[] = {
	{ 382, 229 },
	{ 476, 222 },
	{ 244, 210 },
	{ 508, 237 },
	{ 80, 217 },
	{ 508, 253 },
	{ 1, 190 },
	{ 1, 253 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0004179C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 9, poly_00040E28, NULL, NULL, NULL, uv_0004118C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00040EA0, NULL, NULL, NULL, uv_00041258, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_00040EB4, NULL, NULL, NULL, uv_00041278, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 6, poly_00040EC8, NULL, NULL, NULL, uv_00041298, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 3, poly_00040F68, NULL, NULL, NULL, uv_000413C0, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 5, poly_00040F8E, NULL, NULL, NULL, uv_00041400, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 5, poly_00040FEE, NULL, NULL, NULL, uv_000414AC, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 5, poly_00041078, NULL, NULL, NULL, uv_000415AC, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 3, poly_00041102, NULL, NULL, NULL, uv_000416AC, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 2, poly_0004114E, NULL, NULL, NULL, uv_00041738, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 2, poly_00041164, NULL, NULL, NULL, uv_0004175C, NULL },
	{ NJD_MESHSET_TRIMESH | 11, 1, poly_00041178, NULL, NULL, NULL, uv_0004177C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000418BC[] = {
	{ 103.0748f, 150, 267.3201f },
	{ 103.0748f, 155, 267.3201f },
	{ 101.3646f, 155, 272.0187f },
	{ 101.3646f, 140, 272.0187f },
	{ 62.00001f, 150, 248.1666f },
	{ 114.4999f, 150, 157.2342f },
	{ 62.00001f, 155, 248.1666f },
	{ 59.49995f, 155, 252.4968f },
	{ 114.4999f, 155, 157.2342f },
	{ 116.9999f, 155, 152.904f },
	{ 59.49995f, 140, 252.4968f },
	{ 116.9999f, 140, 152.904f },
	{ 24.87526f, 150, 222.1716f },
	{ 92.36787f, 150, 141.7371f },
	{ 24.87526f, 155, 222.1716f },
	{ 21.66127f, 155, 226.0019f },
	{ 92.36787f, 155, 141.7371f },
	{ 95.58179f, 155, 137.9068f },
	{ 21.66127f, 140, 226.0019f },
	{ 95.58179f, 140, 137.9068f },
	{ -7.171494f, 150, 190.1248f },
	{ 73.26306f, 150, 122.6323f },
	{ -7.171494f, 155, 190.1248f },
	{ -11.00182f, 155, 193.3388f },
	{ 73.26306f, 155, 122.6323f },
	{ 77.09326f, 155, 119.4183f },
	{ -11.00182f, 140, 193.3388f },
	{ 77.09326f, 140, 119.4183f },
	{ -33.16649f, 150, 153 },
	{ 57.766f, 150, 100.5002f },
	{ -33.16649f, 155, 153 },
	{ -37.49675f, 155, 155.5f },
	{ 57.766f, 155, 100.5002f },
	{ 62.09614f, 155, 98.00005f },
	{ -37.49675f, 140, 155.5f },
	{ 62.09614f, 140, 98.00005f },
	{ -52.31992f, 150, 111.9252f },
	{ 46.34755f, 150, 76.01324f },
	{ -52.31992f, 155, 111.9252f },
	{ -57.01854f, 155, 113.6354f },
	{ 46.34755f, 155, 76.01324f },
	{ 51.04603f, 155, 74.30316f },
	{ -57.01854f, 140, 113.6354f },
	{ 51.04603f, 140, 74.30316f },
	{ -64.04984f, 150, 68.1485f },
	{ 39.35475f, 150, 49.91559f },
	{ -64.04984f, 155, 68.1485f },
	{ -68.97404f, 155, 69.01678f },
	{ 39.35475f, 155, 49.91559f },
	{ 44.27882f, 155, 49.04731f },
	{ -68.97404f, 140, 69.01678f },
	{ 44.27882f, 140, 49.04731f },
	{ -67.9998f, 150, 23.00007f },
	{ 36.99995f, 150, 23.00007f },
	{ -67.9998f, 155, 23.00007f },
	{ -72.99998f, 155, 23.00007f },
	{ 36.99995f, 155, 23.00007f },
	{ 41.99995f, 155, 23.00007f },
	{ -72.99998f, 140, 23.00007f },
	{ 41.99995f, 140, 23.00007f },
	{ -67.9998f, 150, -76.99992f },
	{ 36.99995f, 150, -76.99992f },
	{ -67.9998f, 155, -76.99992f },
	{ -72.99998f, 155, -76.99992f },
	{ 36.99995f, 155, -76.99992f },
	{ 41.99995f, 155, -76.99992f },
	{ -72.99998f, 140, -76.99992f },
	{ 41.99995f, 140, -76.99992f },
	{ -69.59501f, 150, -95.23296f },
	{ 33.80958f, 150, -113.466f },
	{ -69.59501f, 155, -95.23296f },
	{ -74.51921f, 155, -94.36479f },
	{ 33.80958f, 155, -113.466f },
	{ 38.73359f, 155, -114.3343f },
	{ -74.51921f, 140, -94.36479f },
	{ 38.73359f, 140, -114.3343f },
	{ -74.33207f, 150, -112.9121f },
	{ 24.3354f, 150, -148.8241f },
	{ -74.33207f, 155, -112.9121f },
	{ -79.03074f, 155, -111.2019f },
	{ 24.3354f, 155, -148.8241f },
	{ 29.03389f, 155, -150.5342f },
	{ -79.03074f, 140, -111.2019f },
	{ 29.03389f, 140, -150.5342f },
	{ -82.06718f, 150, -129.5f },
	{ 8.86531f, 150, -181.9999f },
	{ -82.06718f, 155, -129.5f },
	{ -86.39743f, 155, -126.9999f },
	{ 8.86531f, 155, -181.9999f },
	{ 13.19539f, 155, -184.4999f },
	{ -86.39743f, 140, -126.9999f },
	{ 13.19539f, 140, -184.4999f },
	{ -92.56516f, 150, -144.4927f },
	{ -12.13066f, 150, -211.9853f },
	{ -92.56516f, 155, -144.4927f },
	{ -96.39555f, 155, -141.2787f },
	{ -12.13066f, 155, -211.9853f },
	{ -8.300461f, 155, -215.1991f },
	{ -96.39555f, 140, -141.2787f },
	{ -8.300461f, 140, -215.1991f },
	{ -105.5072f, 150, -157.4347f },
	{ -38.01457f, 150, -237.8692f },
	{ -105.5072f, 155, -157.4347f },
	{ -108.7212f, 155, -153.6044f },
	{ -38.01457f, 155, -237.8692f },
	{ -34.8007f, 155, -241.6994f },
	{ -108.7212f, 140, -153.6044f },
	{ -34.8007f, 140, -241.6994f },
	{ -120.4999f, 150, -167.9328f },
	{ -67.99998f, 150, -258.8651f },
	{ -120.4999f, 155, -167.9328f },
	{ -122.9999f, 155, -163.6025f },
	{ -67.99998f, 155, -258.8651f },
	{ -65.50005f, 155, -263.1952f },
	{ -122.9999f, 140, -163.6025f },
	{ -65.50005f, 140, -263.1952f },
	{ 116.0308f, 150, 217.9863f },
	{ 102.0528f, 150, 247.6532f },
	{ 121.0308f, 140, 217.9864f },
	{ 101.1977f, 140, 250.0025f },
	{ 125.8638f, 140, 190.9702f },
	{ 120.0088f, 150, 188.3194f },
	{ 129.4978f, 150, 170.986f },
	{ 130.7804f, 140, 172.4621f },
	{ 126.7434f, 150, 162.9433f },
	{ 120.6217f, 155, 160.0887f },
	{ 122.9242f, 155, 155.6665f },
	{ 128.8484f, 140, 158.429f },
	{ 121.0308f, 145, 217.9863f },
	{ 125.8638f, 145, 190.9702f },
	{ -76.12496f, 150, -226.132f },
	{ -84.87501f, 140, -218.297f },
	{ -88.63403f, 150, -177.5433f },
	{ -90.24109f, 140, -175.6282f },
	{ -71.76088f, 150, -197.6519f },
	{ -76.76096f, 140, -197.6519f },
	{ -84.87501f, 145, -218.297f },
	{ -80.81799f, 140, -207.9745f },
	{ 80.43228f, 155, 262.2577f },
	{ 82.53739f, 155, 257.7434f },
	{ 82.53739f, 150, 257.7434f },
	{ 80.43228f, 140, 262.2577f },
	{ -115.8606f, 140, -158.6034f },
	{ -115.8606f, 155, -158.6034f },
	{ -113.0036f, 155, -162.6838f },
	{ -113.0036f, 150, -162.6838f },
	{ -53.00727f, 150, -248.3672f },
	{ -50.15037f, 155, -252.4473f },
	{ -53.00727f, 155, -248.3672f },
	{ -50.15037f, 140, -252.4473f },
	{ 120.6217f, 150, 160.0888f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00041FD0[] = {
	{ 0.98453f, 0.138031f, -0.10793f },
	{ 0.751237f, 0.582078f, -0.311171f },
	{ 0.313656f, 0.5729f, 0.7572359f },
	{ 0.399434f, -0.597766f, 0.695074f },
	{ 0.362853f, 0.688006f, -0.6284789f },
	{ -0.34318f, 0.7272609f, 0.594407f },
	{ 0.343181f, 0.72726f, -0.594407f },
	{ -0.362853f, 0.688006f, 0.6284789f },
	{ -0.362852f, 0.688005f, 0.62848f },
	{ 0.343181f, 0.7272609f, -0.5944059f },
	{ -0.362853f, -0.688006f, 0.6284789f },
	{ 0.343181f, -0.7272609f, -0.5944059f },
	{ 0.466474f, 0.688006f, -0.555922f },
	{ -0.441185f, 0.72726f, 0.5257829f },
	{ 0.441185f, 0.72726f, -0.5257829f },
	{ -0.466474f, 0.688006f, 0.555922f },
	{ -0.466475f, 0.688006f, 0.555922f },
	{ 0.441185f, 0.72726f, -0.5257829f },
	{ -0.466474f, -0.688006f, 0.555922f },
	{ 0.441185f, -0.72726f, -0.5257829f },
	{ 0.555922f, 0.688006f, -0.466474f },
	{ -0.525784f, 0.72726f, 0.441185f },
	{ 0.525784f, 0.72726f, -0.441185f },
	{ -0.555922f, 0.688006f, 0.466474f },
	{ -0.555922f, 0.688006f, 0.466474f },
	{ 0.525784f, 0.7272609f, -0.441184f },
	{ -0.555922f, -0.688006f, 0.466474f },
	{ 0.525784f, -0.7272609f, -0.441184f },
	{ 0.6284789f, 0.688006f, -0.362852f },
	{ -0.594407f, 0.72726f, 0.343181f },
	{ 0.594407f, 0.72726f, -0.34318f },
	{ -0.6284789f, 0.688006f, 0.362852f },
	{ -0.6284789f, 0.688006f, 0.362853f },
	{ 0.594407f, 0.72726f, -0.343181f },
	{ -0.6284789f, -0.688006f, 0.362852f },
	{ 0.594407f, -0.72726f, -0.343181f },
	{ 0.68194f, 0.688006f, -0.248205f },
	{ -0.644969f, 0.7272609f, 0.234749f },
	{ 0.644969f, 0.72726f, -0.234749f },
	{ -0.68194f, 0.688006f, 0.248205f },
	{ -0.68194f, 0.688006f, 0.248205f },
	{ 0.644968f, 0.7272609f, -0.234749f },
	{ -0.68194f, -0.688006f, 0.248205f },
	{ 0.644968f, -0.7272609f, -0.234749f },
	{ 0.71468f, 0.688006f, -0.126017f },
	{ -0.675935f, 0.72726f, 0.119185f },
	{ 0.675934f, 0.72726f, -0.119185f },
	{ -0.71468f, 0.688006f, 0.126017f },
	{ -0.71468f, 0.688006f, 0.126017f },
	{ 0.675935f, 0.72726f, -0.119185f },
	{ -0.71468f, -0.688006f, 0.126017f },
	{ 0.675935f, -0.72726f, -0.119185f },
	{ 0.7159809f, 0.6974199f, -0.03126f },
	{ -0.69635f, 0.7170579f, 0.030403f },
	{ 0.69635f, 0.7170579f, -0.030403f },
	{ -0.7159809f, 0.6974199f, 0.03126f },
	{ -0.7159809f, 0.6974199f, 0.03126f },
	{ 0.69635f, 0.7170579f, -0.030404f },
	{ -0.7159809f, -0.6974199f, 0.03126f },
	{ 0.69635f, -0.7170579f, -0.030404f },
	{ 0.69635f, 0.7170579f, -0.030404f },
	{ -0.7159809f, 0.6974199f, 0.03126f },
	{ 0.7159809f, 0.697419f, -0.031261f },
	{ -0.69635f, 0.7170579f, 0.030403f },
	{ -0.69635f, 0.7170579f, 0.030403f },
	{ 0.7159809f, 0.697419f, -0.031261f },
	{ -0.69635f, -0.7170579f, 0.030403f },
	{ 0.7159809f, -0.697419f, -0.031261f },
	{ 0.675935f, 0.72726f, -0.119185f },
	{ -0.71468f, 0.688006f, 0.126017f },
	{ 0.7146789f, 0.688007f, -0.126017f },
	{ -0.675934f, 0.7272609f, 0.119186f },
	{ -0.675934f, 0.72726f, 0.119185f },
	{ 0.71468f, 0.688006f, -0.126017f },
	{ -0.675934f, -0.7272609f, 0.119186f },
	{ 0.71468f, -0.688006f, -0.126017f },
	{ 0.644969f, 0.7272609f, -0.234749f },
	{ -0.68194f, 0.688006f, 0.248205f },
	{ 0.68194f, 0.688006f, -0.248205f },
	{ -0.644969f, 0.72726f, 0.23475f },
	{ -0.644969f, 0.72726f, 0.234749f },
	{ 0.68194f, 0.688006f, -0.248206f },
	{ -0.644969f, -0.72726f, 0.23475f },
	{ 0.68194f, -0.688006f, -0.248206f },
	{ 0.594407f, 0.72726f, -0.343182f },
	{ -0.6284789f, 0.688006f, 0.362852f },
	{ 0.628478f, 0.688006f, -0.362853f },
	{ -0.594407f, 0.72726f, 0.34318f },
	{ -0.594407f, 0.72726f, 0.343181f },
	{ 0.6284789f, 0.688006f, -0.362853f },
	{ -0.594407f, -0.72726f, 0.34318f },
	{ 0.6284789f, -0.688006f, -0.362853f },
	{ 0.525784f, 0.72726f, -0.441185f },
	{ -0.555922f, 0.688006f, 0.466474f },
	{ 0.555922f, 0.688006f, -0.466474f },
	{ -0.525784f, 0.72726f, 0.441184f },
	{ -0.5257829f, 0.72726f, 0.441185f },
	{ 0.555922f, 0.688006f, -0.466474f },
	{ -0.525784f, -0.72726f, 0.441184f },
	{ 0.555922f, -0.688006f, -0.466474f },
	{ 0.441185f, 0.72726f, -0.525784f },
	{ -0.466474f, 0.688006f, 0.555923f },
	{ 0.466474f, 0.688006f, -0.555922f },
	{ -0.441184f, 0.72726f, 0.525784f },
	{ -0.441184f, 0.72726f, 0.525784f },
	{ 0.466474f, 0.688006f, -0.555923f },
	{ -0.441185f, -0.72726f, 0.525784f },
	{ 0.466474f, -0.688006f, -0.555923f },
	{ -0.416357f, 0.063853f, -0.906956f },
	{ -0.934243f, 0.343984f, -0.09415799f },
	{ -0.177407f, 0.572899f, -0.800196f },
	{ -0.793856f, 0.5820799f, 0.176002f },
	{ -0.793857f, 0.582079f, 0.175997f },
	{ -0.177402f, 0.572899f, -0.8001969f },
	{ -0.778386f, -0.627458f, -0.020297f },
	{ -0.243472f, -0.486049f, -0.839332f },
	{ 0.492803f, 0.853456f, 0.169584f },
	{ 0.689306f, 0.704959f, 0.167006f },
	{ 0.695588f, -0.6672029f, 0.266453f },
	{ 0.747212f, -0.651798f, 0.129747f },
	{ 0.699166f, -0.697928f, 0.155125f },
	{ 0.410088f, 0.899462f, 0.150982f },
	{ 0.618829f, 0.782989f, 0.063077f },
	{ 0.843299f, -0.5234039f, 0.122045f },
	{ 0.686786f, 0.724703f, 0.055961f },
	{ 0.113449f, 0.680059f, 0.724327f },
	{ 0.644707f, 0.591777f, -0.483894f },
	{ 0.73136f, -0.532156f, -0.426524f },
	{ 0.903432f, 0.297745f, 0.308478f },
	{ 0.899481f, 0.35906f, 0.249019f },
	{ -0.576057f, 0.81378f, -0.076945f },
	{ -0.776041f, -0.6305529f, -0.012773f },
	{ -0.363853f, 0.8137479f, -0.453238f },
	{ -0.338943f, -0.788727f, -0.512861f },
	{ -0.352462f, 0.932358f, -0.080493f },
	{ -0.745877f, -0.633792f, -0.204877f },
	{ -0.9448349f, 0.327538f, -0.002541f },
	{ -0.854808f, -0.479656f, 0.198074f },
	{ -0.298837f, 0.7071069f, 0.640856f },
	{ 0.298837f, 0.7071069f, -0.640856f },
	{ 0.298837f, 0.7071069f, -0.640856f },
	{ -0.298837f, -0.7071069f, 0.640856f },
	{ -0.405611f, -0.707052f, 0.579273f },
	{ -0.405579f, 0.7071069f, 0.579228f },
	{ 0.40558f, 0.7071069f, -0.579228f },
	{ 0.40558f, 0.7071069f, -0.579228f },
	{ -0.405611f, 0.707052f, 0.579273f },
	{ 0.405579f, 0.7071069f, -0.579229f },
	{ -0.405579f, 0.7071069f, 0.579228f },
	{ 0.405601f, -0.707068f, -0.57926f },
	{ -0.298834f, 0.7071069f, 0.640857f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000426E4 = { vertex_000418BC, normal_00041FD0, LengthOfArray<Sint32>(vertex_000418BC), meshlist_0004179C, matlist_00040D38, LengthOfArray<Uint16>(meshlist_0004179C), LengthOfArray<Uint16>(matlist_00040D38), { 3.890209f, 147.5f, 4.411728f }, 287.6701f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0004270C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000426E4, 2300.071f, 0, -7764.077f, 0, 0xFFFFE000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00042740[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00042808[] = {
	3, 73, 44, 72,
	6, 17, 2, 8, 3, 9, 28,
	3, 8, 20, 17,
	6, 18, 4, 0, 5, 1, 24,
	3, 0, 16, 18,
	0x8000u | 8, 3, 28, 25, 36, 33, 44, 41, 72,
	3, 68, 40, 67,
	0x8000u | 8, 67, 42, 40, 34, 32, 26, 24, 5
};

extern "C" __declspec(dllexport) Sint16 poly_00042868[] = {
	3, 55, 53, 52,
	16, 51, 54, 48, 59, 57, 65, 64, 58, 56, 60, 61, 63, 62, 55, 49, 52,
	3, 48, 50, 51
};

extern "C" __declspec(dllexport) Sint16 poly_0004289A[] = {
	3, 71, 47, 70,
	6, 21, 10, 14, 11, 15, 31,
	3, 14, 23, 21,
	6, 22, 12, 6, 13, 7, 27,
	3, 6, 19, 22,
	0x8000u | 8, 11, 31, 29, 39, 37, 47, 45, 70,
	0x8000u | 8, 13, 27, 30, 35, 38, 43, 46, 69,
	3, 66, 43, 69
};

extern "C" __declspec(dllexport) Sint16 poly_000428FA[] = {
	0x8000u | 5, 15, 14, 12, 23, 22,
	0x8000u | 9, 12, 13, 15, 30, 31, 38, 39, 46, 47
};

extern "C" __declspec(dllexport) Sint16 poly_0004291A[] = {
	0x8000u | 5, 1, 0, 2, 16, 17,
	0x8000u | 9, 2, 3, 1, 25, 24, 33, 32, 41, 40
};

extern "C" __declspec(dllexport) Sint16 poly_0004293A[] = {
	0x8000u | 5, 7, 6, 4, 19, 18,
	0x8000u | 5, 9, 8, 10, 20, 21,
	0x8000u | 8, 45, 36, 37, 28, 29, 9, 11, 10,
	0x8000u | 7, 53, 52, 70, 73, 45, 44, 36,
	5, 42, 66, 67, 51, 50,
	0x8000u | 10, 66, 43, 42, 35, 34, 27, 26, 7, 5, 4
};

extern "C" __declspec(dllexport) Sint16 poly_00042996[] = {
	4, 48, 68, 50, 67,
	4, 52, 73, 49, 72
};

extern "C" __declspec(dllexport) Sint16 poly_000429AA[] = {
	4, 51, 66, 54, 69,
	4, 55, 71, 53, 70
};

extern "C" __declspec(dllexport) Sint16 poly_000429BE[] = {
	0x8000u | 11, 56, 64, 61, 57, 62, 48, 49, 68, 72, 40, 41
};

extern "C" __declspec(dllexport) Sint16 poly_000429D6[] = {
	0x8000u | 11, 58, 60, 65, 63, 59, 55, 54, 71, 69, 47, 46
};

NJS_TEX uv_000429F0[] = {
	{ 0 },
	{ 508, 0 },
	{ 0, 255 },
	{ 4080, 255 },
	{ 3314, 255 },
	{ 3314, 0 },
	{ 2548, 255 },
	{ 2548, 0 },
	{ 1867, 0 },
	{ 3314, 0 },
	{ 4080, 0 },
	{ 4080, 255 },
	{ 3825, 0 },
	{ 2720, 0 },
	{ 2720, 255 },
	{ 1615, 0 },
	{ 1615, 255 },
	{ 1153, 255 },
	{ 2720, 255 },
	{ 3825, 255 },
	{ 3825, 0 },
	{ 2548, 255 },
	{ 1867, 0 },
	{ 1867, 255 },
	{ 1188, 0 },
	{ 1188, 255 },
	{ 508, 0 },
	{ 508, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 230, 255 },
	{ 0 },
	{ 0 },
	{ 230, 0 },
	{ 230, 255 },
	{ 692, 0 },
	{ 692, 255 },
	{ 1153, 0 },
	{ 1153, 255 },
	{ 1615, 0 }
};

NJS_TEX uv_00042A90[] = {
	{ 1016, 254 },
	{ 1016, 0 },
	{ 960, 0 },
	{ 3, 0 },
	{ 3, 254 },
	{ 67, 84 },
	{ 195, 254 },
	{ 213, 84 },
	{ 258, 254 },
	{ 276, 84 },
	{ 450, 254 },
	{ 468, 84 },
	{ 641, 254 },
	{ 644, 84 },
	{ 896, 254 },
	{ 833, 84 },
	{ 1016, 254 },
	{ 960, 84 },
	{ 960, 0 },
	{ 67, 84 },
	{ 67, 0 },
	{ 3, 0 }
};

NJS_TEX uv_00042AE8[] = {
	{ 0, 255 },
	{ 644, 255 },
	{ 0 },
	{ 5100, 0 },
	{ 4160, 0 },
	{ 4160, 255 },
	{ 3219, 0 },
	{ 3219, 255 },
	{ 2360, 255 },
	{ 4160, 255 },
	{ 5100, 255 },
	{ 5100, 0 },
	{ 3570, 255 },
	{ 2509, 255 },
	{ 2509, 0 },
	{ 1450, 255 },
	{ 1450, 0 },
	{ 1035, 0 },
	{ 2509, 0 },
	{ 3570, 0 },
	{ 3570, 255 },
	{ 3219, 0 },
	{ 2360, 255 },
	{ 2360, 0 },
	{ 1501, 255 },
	{ 1501, 0 },
	{ 644, 255 },
	{ 644, 0 },
	{ 0 },
	{ 1450, 255 },
	{ 1035, 0 },
	{ 1035, 255 },
	{ 621, 0 },
	{ 621, 255 },
	{ 207, 0 },
	{ 207, 255 },
	{ 0, 255 },
	{ 0 },
	{ 207, 0 },
	{ 0, 255 }
};

NJS_TEX uv_00042B88[] = {
	{ 255, -496 },
	{ 255, -121 },
	{ 0, -306 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, -306 },
	{ 0, -868 },
	{ 255, -496 },
	{ 0, -1089 },
	{ 255, -840 },
	{ 0, -1308 },
	{ 255, -1185 },
	{ 0, -1530 },
	{ 255, -1530 }
};

NJS_TEX uv_00042BC0[] = {
	{ 0, -432 },
	{ 0, -980 },
	{ 510, -1147 },
	{ 0, -1530 },
	{ 510, -1530 },
	{ 510, -1147 },
	{ 510, -764 },
	{ 0, -432 },
	{ 510, -424 },
	{ 0, -203 },
	{ 510, -84 },
	{ 0, 25 },
	{ 510, 255 },
	{ 0, 255 }
};

NJS_TEX uv_00042BF8[] = {
	{ 1791, 255 },
	{ 2934, 255 },
	{ 2967, 0 },
	{ 4080, 255 },
	{ 4080, 0 },
	{ 1561, 0 },
	{ 780, 0 },
	{ 765, 255 },
	{ 0 },
	{ 0, 255 },
	{ 3633, 255 },
	{ 2948, 0 },
	{ 2933, 255 },
	{ 2254, 0 },
	{ 2232, 255 },
	{ 1561, 0 },
	{ 1532, 255 },
	{ 765, 255 },
	{ 4335, 255 },
	{ 4335, 0 },
	{ 4158, 255 },
	{ 4161, 0 },
	{ 3633, 255 },
	{ 3640, 0 },
	{ 2948, 0 },
	{ 464, 0 },
	{ 223, 255 },
	{ 232, 0 },
	{ 0, 255 },
	{ 0 },
	{ 223, 255 },
	{ 446, 255 },
	{ 464, 0 },
	{ 895, 255 },
	{ 928, 0 },
	{ 1343, 255 },
	{ 1392, 0 },
	{ 1791, 255 },
	{ 1856, 0 },
	{ 2967, 0 }
};

NJS_TEX uv_00042C98[] = {
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 }
};

NJS_TEX uv_00042CB8[] = {
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 253, 1 }
};

NJS_TEX uv_00042CD8[] = {
	{ 252, 151 },
	{ 138, 131 },
	{ 338, 33 },
	{ 97, 78 },
	{ 448, 31 },
	{ 1, 78 },
	{ 508, 0 },
	{ 1, 158 },
	{ 508, 62 },
	{ 1, 254 },
	{ 508, 254 }
};

NJS_TEX uv_00042D04[] = {
	{ 127, 138 },
	{ 171, 21 },
	{ 75, 118 },
	{ 222, 20 },
	{ 52, 91 },
	{ 254, 1 },
	{ 0, 97 },
	{ 254, 65 },
	{ 0, 161 },
	{ 254, 253 },
	{ 0, 253 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00042D30[] = {
	{ NJD_MESHSET_TRIMESH | 0, 8, poly_00042808, NULL, NULL, NULL, uv_000429F0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, poly_00042868, NULL, NULL, NULL, uv_00042A90, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 8, poly_0004289A, NULL, NULL, NULL, uv_00042AE8, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_000428FA, NULL, NULL, NULL, uv_00042B88, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_0004291A, NULL, NULL, NULL, uv_00042BC0, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 6, poly_0004293A, NULL, NULL, NULL, uv_00042BF8, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, poly_00042996, NULL, NULL, NULL, uv_00042C98, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 2, poly_000429AA, NULL, NULL, NULL, uv_00042CB8, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 1, poly_000429BE, NULL, NULL, NULL, uv_00042CD8, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 1, poly_000429D6, NULL, NULL, NULL, uv_00042D04, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00042E20[] = {
	{ -189.9936f, 0, 299.9999f },
	{ -189.9936f, 0, 399.9999f },
	{ -9.993896f, 0, 299.9999f },
	{ -9.993896f, 0, 399.9999f },
	{ -189.9936f, 5, 299.9999f },
	{ -189.9936f, 5, 399.9999f },
	{ -199.9936f, 5, 299.9999f },
	{ -199.9936f, 5, 399.9999f },
	{ -9.993896f, 5, 299.9999f },
	{ -9.993896f, 5, 399.9999f },
	{ 0.006084f, 5, 299.9999f },
	{ 0.006083f, 5, 399.9999f },
	{ -199.9936f, -10, 299.9999f },
	{ -199.9936f, -10, 399.9999f },
	{ 0.006084f, -10, 299.9999f },
	{ 0.006083f, -10, 399.9999f },
	{ -189.9936f, 0, 200.0002f },
	{ -9.993893f, 0, 200.0002f },
	{ -189.9936f, 5, 200.0002f },
	{ -199.9936f, 5, 200.0002f },
	{ -9.993893f, 5, 200.0002f },
	{ 0.006085f, 5, 200.0002f },
	{ -199.9936f, -10, 200.0002f },
	{ 0.006085f, -10, 200.0002f },
	{ -195.4454f, 0, 441.4109f },
	{ -21.57911f, 0, 487.9983f },
	{ -195.4454f, 5, 441.4109f },
	{ -205.1047f, 5, 438.8228f },
	{ -21.57911f, 5, 487.9983f },
	{ -11.91986f, 5, 490.5865f },
	{ -205.1047f, -10, 438.8228f },
	{ -11.91986f, -10, 490.5865f },
	{ -211.4295f, 0, 479.9999f },
	{ -55.54522f, 0, 569.9992f },
	{ -211.4295f, 5, 479.9999f },
	{ -220.0897f, 5, 474.9999f },
	{ -55.54522f, 5, 569.9992f },
	{ -46.88495f, 5, 574.9992f },
	{ -220.0897f, -10, 474.9999f },
	{ -46.88495f, -10, 574.9992f },
	{ -236.8565f, 0, 513.1363f },
	{ -109.5775f, 0, 640.4154f },
	{ -236.8565f, 5, 513.1363f },
	{ -243.9275f, 5, 506.0659f },
	{ -109.5775f, 5, 640.4154f },
	{ -102.5064f, 5, 647.4865f },
	{ -243.9275f, -10, 506.0659f },
	{ -102.5064f, -10, 647.4865f },
	{ -269.9932f, 0, 538.5632f },
	{ -179.9937f, 0, 694.4478f },
	{ -269.9932f, 5, 538.5632f },
	{ -274.9932f, 5, 529.903f },
	{ -179.9937f, 5, 694.4478f },
	{ -174.9936f, 5, 703.108f },
	{ -274.9932f, -10, 529.903f },
	{ -174.9936f, -10, 703.108f },
	{ -192.8526f, 0, 592.1754f },
	{ -248.1634f, 0, 566.3741f },
	{ -192.8526f, -10, 592.1754f },
	{ -250.6634f, -10, 562.0439f },
	{ -203.1635f, -10, 644.3163f },
	{ -205.6635f, 0, 639.9862f },
	{ -182.5834f, 0, 669.9622f },
	{ -178.8334f, -10, 676.4574f },
	{ -222.4279f, 0, 565.9495f },
	{ -223.6779f, -10, 563.7844f },
	{ -259.4603f, 5, 517.9843f },
	{ -253.4249f, 5, 525.8497f },
	{ -253.4249f, 0, 525.8497f },
	{ -259.4603f, -10, 517.9843f },
	{ -156.8714f, 5, 689.2024f },
	{ -156.8714f, -10, 689.2024f },
	{ -162.3896f, 0, 680.9397f },
	{ -162.3896f, 5, 680.9397f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00043198[] = {
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.690278f, 0.722128f, 0.045243f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.719703f, 0.692678f, -0.047172f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.719703f, 0.692678f, 0.047172f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.690278f, 0.722128f, -0.045243f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.690278f, 0.722128f, -0.045243f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.719703f, 0.692678f, 0.047172f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.690278f, -0.722128f, -0.045243f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.719703f, -0.692678f, 0.047172f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.652124f, 0.7377f, 0.174736f },
	{ -0.709235f, 0.678874f, -0.19004f },
	{ 0.709235f, 0.678874f, 0.190039f },
	{ -0.652124f, 0.7377f, -0.174736f },
	{ -0.652123f, 0.737701f, -0.174737f },
	{ 0.709235f, 0.678874f, 0.19004f },
	{ -0.652124f, -0.7377f, -0.174736f },
	{ 0.709235f, -0.678874f, 0.19004f },
	{ 0.584676f, 0.737701f, 0.337566f },
	{ -0.635882f, 0.678875f, -0.367128f },
	{ 0.635882f, 0.6788729f, 0.367131f },
	{ -0.584678f, 0.7377f, -0.337564f },
	{ -0.584678f, 0.7377f, -0.337565f },
	{ 0.635882f, 0.678875f, 0.367128f },
	{ -0.584678f, -0.7377f, -0.337564f },
	{ 0.635882f, -0.678875f, 0.367128f },
	{ 0.477388f, 0.737699f, 0.477391f },
	{ -0.519197f, 0.678875f, -0.519196f },
	{ 0.5191939f, 0.678876f, 0.519197f },
	{ -0.477384f, 0.737702f, -0.47739f },
	{ -0.477389f, 0.7377f, -0.477388f },
	{ 0.519197f, 0.678874f, 0.519196f },
	{ -0.477384f, -0.737702f, -0.47739f },
	{ 0.519197f, -0.678874f, 0.519196f },
	{ -0.58653f, 0.250945f, 0.770071f },
	{ -0.998499f, 0.03901f, 0.038435f },
	{ -0.160187f, 0.570777f, 0.805328f },
	{ -0.795769f, 0.584548f, -0.158291f },
	{ -0.79577f, 0.584548f, -0.158287f },
	{ -0.160187f, 0.570777f, 0.805328f },
	{ -0.795285f, -0.591783f, -0.131586f },
	{ -0.226472f, -0.60252f, 0.765297f },
	{ -0.762839f, 0.600617f, 0.239451f },
	{ -0.321534f, 0.482195f, 0.814926f },
	{ -0.751304f, -0.6163819f, 0.23583f },
	{ -0.382964f, -0.722695f, 0.5753689f },
	{ -0.764213f, -0.590489f, 0.259424f },
	{ -0.763178f, 0.6424929f, 0.069011f },
	{ -0.692063f, 0.615759f, 0.376682f },
	{ -0.6211129f, -0.761555f, 0.185074f },
	{ -0.358157f, 0.52734f, 0.770478f },
	{ -0.225462f, -0.754209f, 0.6167139f },
	{ -0.430455f, 0.707106f, -0.56099f },
	{ 0.430462f, 0.7071069f, 0.5609829f },
	{ 0.430462f, 0.7071069f, 0.5609829f },
	{ -0.430455f, -0.7071069f, -0.560989f },
	{ 0.43046f, 0.7071069f, 0.560985f },
	{ 0.43046f, -0.7071069f, 0.560985f },
	{ -0.430459f, 0.7071069f, -0.560985f },
	{ -0.430459f, 0.7071069f, -0.560985f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00043510 = { vertex_00042E20, normal_00043198, LengthOfArray<Sint32>(vertex_00042E20), meshlist_00042D30, matlist_00042740, LengthOfArray<Uint16>(meshlist_00042D30), LengthOfArray<Uint16>(matlist_00042740), { -137.4936f, -2.5f, 451.5541f }, 306.6773f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00043538 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00043510, 2930, 105, -7550, 0, 0xFFFFD556, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0004356C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000435D0[] = {
	14, 5, 7, 13, 15, 21, 23, 29, 31, 37, 39, 45, 47, 53, 55,
	14, 6, 3, 14, 11, 22, 19, 30, 27, 38, 35, 46, 43, 54, 51
};

extern "C" __declspec(dllexport) Sint16 poly_0004360C[] = {
	14, 1, 4, 9, 12, 17, 20, 25, 28, 33, 36, 41, 44, 49, 52,
	14, 2, 0, 10, 8, 18, 16, 26, 24, 34, 32, 42, 40, 50, 48
};

extern "C" __declspec(dllexport) Sint16 poly_00043648[] = {
	14, 50, 51, 42, 43, 34, 35, 26, 27, 18, 19, 10, 11, 2, 3,
	14, 53, 52, 45, 44, 37, 36, 29, 28, 21, 20, 13, 12, 5, 4
};

extern "C" __declspec(dllexport) Sint16 poly_00043684[] = {
	10, 54, 55, 46, 47, 38, 39, 30, 31, 22, 23,
	6, 7, 6, 15, 14, 23, 22
};

extern "C" __declspec(dllexport) Sint16 poly_000436A8[] = {
	14, 49, 48, 41, 40, 33, 32, 25, 24, 17, 16, 9, 8, 1, 0
};

NJS_TEX uv_000436C8[] = {
	{ 0 },
	{ 0, 255 },
	{ 1144, 0 },
	{ 1144, 255 },
	{ 2288, 0 },
	{ 2288, 255 },
	{ 2736, 0 },
	{ 2736, 255 },
	{ 3184, 0 },
	{ 3184, 255 },
	{ 3632, 0 },
	{ 3632, 255 },
	{ 4080, 0 },
	{ 4080, 255 },
	{ 0, 255 },
	{ 0 },
	{ 900, 255 },
	{ 900, 0 },
	{ 1802, 255 },
	{ 1802, 0 },
	{ 2627, 255 },
	{ 2627, 0 },
	{ 3451, 255 },
	{ 3451, 0 },
	{ 4274, 255 },
	{ 4274, 0 },
	{ 5100, 255 },
	{ 5100, 0 }
};

NJS_TEX uv_00043738[] = {
	{ 0, 255 },
	{ 0 },
	{ 832, 255 },
	{ 832, 0 },
	{ 1666, 255 },
	{ 1666, 0 },
	{ 2015, 255 },
	{ 2015, 0 },
	{ 2362, 255 },
	{ 2362, 0 },
	{ 2710, 255 },
	{ 2710, 0 },
	{ 3060, 255 },
	{ 3060, 0 },
	{ 0 },
	{ 0, 255 },
	{ 917, 0 },
	{ 917, 255 },
	{ 1837, 0 },
	{ 1837, 255 },
	{ 2652, 0 },
	{ 2652, 255 },
	{ 3468, 0 },
	{ 3468, 255 },
	{ 4283, 0 },
	{ 4283, 255 },
	{ 5100, 0 },
	{ 5100, 255 }
};

NJS_TEX uv_000437A8[] = {
	{ 0 },
	{ 0, 255 },
	{ 488, 0 },
	{ 494, 255 },
	{ 977, 0 },
	{ 988, 255 },
	{ 1467, 0 },
	{ 1482, 255 },
	{ 1957, 0 },
	{ 1976, 255 },
	{ 2507, 0 },
	{ 2518, 255 },
	{ 3060, 0 },
	{ 3060, 255 },
	{ 0, 255 },
	{ 0 },
	{ 334, 255 },
	{ 348, 0 },
	{ 670, 255 },
	{ 696, 0 },
	{ 1007, 255 },
	{ 1043, 0 },
	{ 1343, 255 },
	{ 1392, 0 },
	{ 2200, 255 },
	{ 2226, 0 },
	{ 3060, 255 },
	{ 3060, 0 }
};

NJS_TEX uv_00043818[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -127 },
	{ 255, -127 },
	{ 0, -508 },
	{ 255, -510 },
	{ 0, -892 },
	{ 255, -892 },
	{ 0, -1275 },
	{ 255, -1275 },
	{ 254, -765 },
	{ 0, -764 },
	{ 255, -255 },
	{ 0, -255 },
	{ 255, 255 },
	{ 0, 255 }
};

NJS_TEX uv_00043858[] = {
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 22 },
	{ 0, -71 },
	{ 510, -209 },
	{ 0, -396 },
	{ 510, -440 },
	{ 0, -722 },
	{ 510, -673 },
	{ 0, -1049 },
	{ 510, -1228 },
	{ 0, -1417 },
	{ 510, -1785 },
	{ 0, -1785 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00043890[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000435D0, NULL, NULL, NULL, uv_000436C8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0004360C, NULL, NULL, NULL, uv_00043738, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_00043648, NULL, NULL, NULL, uv_000437A8, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_00043684, NULL, NULL, NULL, uv_00043818, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_000436A8, NULL, NULL, NULL, uv_00043858, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00043908[] = {
	{ -189.9966f, 0, 199.9999f },
	{ -9.996686f, 0, 199.9999f },
	{ -189.9966f, 5, 199.9999f },
	{ -199.9966f, 5, 199.9999f },
	{ -9.996686f, 5, 199.9999f },
	{ 0.003304f, 5, 199.9999f },
	{ -199.9966f, -10, 199.9999f },
	{ 0.003304f, -10, 199.9999f },
	{ -189.9966f, 0, 100.0001f },
	{ -9.996684f, 0, 100.0001f },
	{ -189.9966f, 5, 100.0001f },
	{ -199.9966f, 5, 100.0001f },
	{ -9.996684f, 5, 100.0001f },
	{ 0.003306f, 5, 100.0001f },
	{ -199.9966f, -10, 100.0001f },
	{ 0.003306f, -10, 100.0001f },
	{ -189.9966f, 0, 0.000135f },
	{ -9.996681f, 0, 0.000138f },
	{ -189.9966f, 5, 0.000135f },
	{ -199.9966f, 5, 0.000134f },
	{ -9.996681f, 5, 0.000138f },
	{ 0.003308f, 5, 0.000138f },
	{ -199.9966f, -10, 0.000134f },
	{ 0.003308f, -10, 0.000138f },
	{ -178.4113f, 0, -87.99825f },
	{ -4.544812f, 0, -41.41087f },
	{ -178.4113f, 5, -87.99825f },
	{ -188.0706f, 5, -90.58643f },
	{ -4.544812f, 5, -41.41087f },
	{ 5.114434f, 5, -38.82267f },
	{ -188.0706f, -10, -90.58643f },
	{ 5.114434f, -10, -38.82267f },
	{ -144.4452f, 0, -169.9997f },
	{ 11.43924f, 0, -79.99978f },
	{ -144.4452f, 5, -169.9997f },
	{ -153.1054f, 5, -174.9997f },
	{ 11.43924f, 5, -79.99978f },
	{ 20.09948f, 5, -74.99978f },
	{ -153.1054f, -10, -174.9997f },
	{ 20.09948f, -10, -74.99978f },
	{ -90.41286f, 0, -240.416f },
	{ 36.86619f, 0, -113.1369f },
	{ -90.41286f, 5, -240.416f },
	{ -97.48397f, 5, -247.4871f },
	{ 36.86619f, 5, -113.1369f },
	{ 43.93726f, 5, -106.0658f },
	{ -97.48397f, -10, -247.4871f },
	{ 43.93726f, -10, -106.0658f },
	{ -19.99662f, 0, -294.4481f },
	{ 70.00323f, 0, -138.5638f },
	{ -19.99662f, 5, -294.4481f },
	{ -24.99665f, 5, -303.1084f },
	{ 70.00323f, 5, -138.5638f },
	{ 75.00323f, 5, -129.9035f },
	{ -24.99665f, -10, -303.1084f },
	{ 75.00323f, -10, -129.9035f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00043BA8[] = {
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.719703f, 0.692678f, 0.047172f },
	{ -0.690278f, 0.722128f, -0.045243f },
	{ 0.690278f, 0.722128f, 0.045243f },
	{ -0.719703f, 0.692678f, -0.047172f },
	{ -0.719703f, 0.692678f, -0.047172f },
	{ 0.690278f, 0.722128f, 0.045243f },
	{ -0.719703f, -0.692678f, -0.047172f },
	{ 0.690278f, -0.722128f, 0.045243f },
	{ 0.709235f, 0.678874f, 0.190039f },
	{ -0.652124f, 0.7377f, -0.174736f },
	{ 0.652124f, 0.7377f, 0.174736f },
	{ -0.709235f, 0.678874f, -0.190039f },
	{ -0.709235f, 0.678874f, -0.190039f },
	{ 0.652124f, 0.7377f, 0.174736f },
	{ -0.709235f, -0.678874f, -0.190039f },
	{ 0.652124f, -0.7377f, 0.174736f },
	{ 0.635883f, 0.678874f, 0.367127f },
	{ -0.584678f, 0.7377f, -0.337564f },
	{ 0.584678f, 0.7377f, 0.337564f },
	{ -0.635883f, 0.678874f, -0.367127f },
	{ -0.635883f, 0.678874f, -0.367127f },
	{ 0.584678f, 0.7377f, 0.337564f },
	{ -0.635883f, -0.678874f, -0.367127f },
	{ 0.584678f, -0.7377f, 0.337564f },
	{ 0.519196f, 0.678874f, 0.519197f },
	{ -0.477388f, 0.7377f, -0.477388f },
	{ 0.477387f, 0.737701f, 0.477388f },
	{ -0.519196f, 0.678874f, -0.519197f },
	{ -0.519196f, 0.678874f, -0.519196f },
	{ 0.477388f, 0.7377f, 0.477388f },
	{ -0.519196f, -0.678874f, -0.519197f },
	{ 0.477388f, -0.7377f, 0.477388f },
	{ 0.44875f, 0.675725f, 0.584824f },
	{ -0.412911f, 0.734803f, -0.538116f },
	{ 0.41291f, 0.734803f, 0.538117f },
	{ -0.44875f, 0.675725f, -0.584824f },
	{ -0.448751f, 0.675725f, -0.584824f },
	{ 0.412911f, 0.734803f, 0.538116f },
	{ -0.44875f, -0.675725f, -0.584824f },
	{ 0.412911f, -0.734803f, 0.538116f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00043E48 = { vertex_00043908, normal_00043BA8, LengthOfArray<Sint32>(vertex_00043908), meshlist_00043890, matlist_0004356C, LengthOfArray<Uint16>(meshlist_00043890), LengthOfArray<Uint16>(matlist_0004356C), { -62.49665f, -2.5f, -51.55422f }, 306.6777f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00043E70 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00043E48, 2930, 105, -7549.999f, 0, 0xFFFFD556, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00043EA4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00043F58[] = {
	3, 41, 44, 45,
	14, 42, 40, 46, 52, 53, 54, 55, 48, 50, 49, 51, 41, 47, 45,
	3, 46, 43, 42
};

extern "C" __declspec(dllexport) Sint16 poly_00043F86[] = {
	3, 60, 34, 61,
	0x8000u | 11, 61, 32, 34, 24, 26, 16, 18, 8, 10, 0, 2,
	3, 59, 33, 57,
	0x8000u | 11, 57, 36, 33, 28, 25, 20, 17, 12, 9, 4, 1
};

extern "C" __declspec(dllexport) Sint16 poly_00043FC6[] = {
	0x8000u | 11, 60, 34, 35, 26, 27, 18, 19, 10, 11, 2, 3,
	0x8000u | 11, 56, 37, 36, 29, 28, 21, 20, 13, 12, 5, 4,
	0x8000u | 5, 43, 42, 62, 60, 35,
	0x8000u | 5, 44, 45, 57, 56, 36
};

extern "C" __declspec(dllexport) Sint16 poly_0004400E[] = {
	3, 63, 38, 62,
	0x8000u | 11, 62, 35, 38, 27, 30, 19, 22, 11, 14, 3, 6
};

extern "C" __declspec(dllexport) Sint16 poly_0004402E[] = {
	3, 56, 37, 58,
	0x8000u | 11, 58, 39, 37, 31, 29, 23, 21, 15, 13, 7, 5
};

extern "C" __declspec(dllexport) Sint16 poly_0004404E[] = {
	4, 46, 63, 43, 62,
	4, 45, 56, 47, 58
};

extern "C" __declspec(dllexport) Sint16 poly_00044062[] = {
	4, 42, 60, 40, 61,
	4, 41, 59, 44, 57
};

extern "C" __declspec(dllexport) Sint16 poly_00044076[] = {
	10, 55, 50, 53, 51, 46, 47, 63, 58, 38, 39,
	10, 38, 39, 30, 31, 22, 23, 14, 15, 6, 7
};

extern "C" __declspec(dllexport) Sint16 poly_000440A2[] = {
	10, 48, 54, 49, 52, 41, 40, 59, 61, 33, 32,
	10, 33, 32, 25, 24, 17, 16, 9, 8, 1, 0
};

NJS_TEX uv_000440D0[] = {
	{ 968, 84 },
	{ 968, 0 },
	{ 1020, 0 },
	{ 51, 0 },
	{ 51, 84 },
	{ 0, 255 },
	{ 178, 84 },
	{ 178, 255 },
	{ 356, 84 },
	{ 368, 255 },
	{ 534, 84 },
	{ 508, 255 },
	{ 789, 84 },
	{ 764, 255 },
	{ 968, 84 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 0, 255 },
	{ 0 },
	{ 51, 0 }
};

NJS_TEX uv_00044120[] = {
	{ 4845, 0 },
	{ 4080, 0 },
	{ 4845, 255 },
	{ 4845, 255 },
	{ 4080, 255 },
	{ 4080, 0 },
	{ 3060, 255 },
	{ 3060, 0 },
	{ 2040, 255 },
	{ 2040, 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 0, 255 },
	{ 0 },
	{ 4845, 255 },
	{ 4079, 255 },
	{ 4845, 0 },
	{ 4845, 0 },
	{ 4079, 0 },
	{ 4079, 255 },
	{ 3059, 0 },
	{ 3059, 255 },
	{ 2040, 0 },
	{ 2040, 255 },
	{ 1019, 0 },
	{ 1019, 255 },
	{ 0 },
	{ 0, 255 }
};

NJS_TEX uv_00044190[] = {
	{ 254, 0 },
	{ 1019, 0 },
	{ 1019, 255 },
	{ 2039, 0 },
	{ 2039, 255 },
	{ 3059, 0 },
	{ 3059, 255 },
	{ 4079, 0 },
	{ 4079, 255 },
	{ 5100, 0 },
	{ 5100, 255 },
	{ 254, 255 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 2040, 255 },
	{ 2040, 0 },
	{ 3059, 255 },
	{ 3059, 0 },
	{ 4080, 255 },
	{ 4080, 0 },
	{ 5100, 255 },
	{ 5100, 0 },
	{ 0, 255 },
	{ 0 },
	{ 254, 255 },
	{ 254, 0 },
	{ 1019, 255 },
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 1020, 0 }
};

NJS_TEX uv_00044210[] = {
	{ 4845, 255 },
	{ 4079, 255 },
	{ 4845, 0 },
	{ 4845, 0 },
	{ 4079, 0 },
	{ 4079, 255 },
	{ 3060, 0 },
	{ 3060, 255 },
	{ 2039, 0 },
	{ 2039, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 0 },
	{ 0, 255 }
};

NJS_TEX uv_00044248[] = {
	{ 4845, 0 },
	{ 4079, 0 },
	{ 4845, 255 },
	{ 4845, 255 },
	{ 4079, 255 },
	{ 4079, 0 },
	{ 3059, 255 },
	{ 3059, 0 },
	{ 2039, 255 },
	{ 2039, 0 },
	{ 1019, 255 },
	{ 1019, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_TEX uv_00044280[] = {
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 253 },
	{ 1, 253 }
};

NJS_TEX uv_000442A0[] = {
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 1 },
	{ 1, 1 }
};

NJS_TEX uv_000442C0[] = {
	{ 92, 76 },
	{ 127, 50 },
	{ 44, 254 },
	{ 191, 229 },
	{ 0, 254 },
	{ 255, 255 },
	{ 0, 127 },
	{ 254, 127 },
	{ 0, -255 },
	{ 255, -255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -254 },
	{ 254, -255 },
	{ 0, -765 },
	{ 255, -764 },
	{ 0, -1274 },
	{ 255, -1275 },
	{ 0, -1785 },
	{ 255, -1785 }
};

NJS_TEX uv_00044310[] = {
	{ 268, 0 },
	{ 169, 25 },
	{ 410, 229 },
	{ 70, 229 },
	{ 508, 255 },
	{ 0, 254 },
	{ 510, 127 },
	{ 0, 127 },
	{ 508, -255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, -255 },
	{ 510, -254 },
	{ 0, -764 },
	{ 510, -765 },
	{ 0, -1275 },
	{ 510, -1275 },
	{ 0, -1785 },
	{ 510, -1785 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00044360[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00043F58, NULL, NULL, NULL, uv_000440D0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_00043F86, NULL, NULL, NULL, uv_00044120, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_00043FC6, NULL, NULL, NULL, uv_00044190, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_0004400E, NULL, NULL, NULL, uv_00044210, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_0004402E, NULL, NULL, NULL, uv_00044248, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, poly_0004404E, NULL, NULL, NULL, uv_00044280, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, poly_00044062, NULL, NULL, NULL, uv_000442A0, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 2, poly_00044076, NULL, NULL, NULL, uv_000442C0, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 2, poly_000440A2, NULL, NULL, NULL, uv_00044310, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00044438[] = {
	{ -19.99739f, 0, -294.4478f },
	{ 70.00247f, 0, -138.5634f },
	{ -19.99739f, 5, -294.4478f },
	{ -24.99742f, 5, -303.1081f },
	{ 70.00247f, 5, -138.5634f },
	{ 75.00248f, 5, -129.9032f },
	{ -24.99742f, -10, -303.1081f },
	{ 75.00248f, -10, -129.9032f },
	{ 66.60506f, 0, -344.4478f },
	{ 156.6049f, 0, -188.5634f },
	{ 66.60506f, 5, -344.4478f },
	{ 61.60506f, 5, -353.1081f },
	{ 156.6049f, 5, -188.5634f },
	{ 161.6049f, 5, -179.9032f },
	{ 61.60506f, -10, -353.1081f },
	{ 161.6049f, -10, -179.9032f },
	{ 153.2075f, 0, -394.4478f },
	{ 243.2075f, 0, -238.5634f },
	{ 153.2075f, 5, -394.4478f },
	{ 148.2075f, 5, -403.1081f },
	{ 243.2075f, 5, -238.5634f },
	{ 248.2075f, 5, -229.9032f },
	{ 148.2075f, -10, -403.1081f },
	{ 248.2075f, -10, -229.9032f },
	{ 239.8101f, 0, -444.4478f },
	{ 329.8099f, 0, -288.5633f },
	{ 239.8101f, 5, -444.4478f },
	{ 234.81f, 5, -453.1081f },
	{ 329.8099f, 5, -288.5633f },
	{ 334.8099f, 5, -279.903f },
	{ 234.81f, -10, -453.1081f },
	{ 334.8099f, -10, -279.903f },
	{ 326.4125f, 0, -494.4478f },
	{ 416.4124f, 0, -338.5633f },
	{ 326.4125f, 5, -494.4478f },
	{ 321.4124f, 5, -503.1081f },
	{ 416.4124f, 5, -338.5633f },
	{ 421.4124f, 5, -329.903f },
	{ 321.4124f, -10, -503.1081f },
	{ 421.4124f, -10, -329.903f },
	{ 413.015f, 0, -544.4476f },
	{ 503.015f, 0, -388.5633f },
	{ 413.015f, 5, -544.4476f },
	{ 408.015f, 5, -553.1078f },
	{ 503.015f, 5, -388.5633f },
	{ 508.015f, 5, -379.903f },
	{ 408.015f, -10, -553.1078f },
	{ 508.015f, -10, -379.903f },
	{ 417.2136f, 0, -437.1754f },
	{ 481.1848f, 0, -416.3741f },
	{ 423.3739f, -10, -446.5056f },
	{ 478.6848f, -10, -420.7043f },
	{ 421.1849f, 0, -520.2969f },
	{ 425.515f, -10, -522.7969f },
	{ 404.0438f, 0, -469.9864f },
	{ 413.954f, -10, -472.8213f },
	{ 486.3644f, 5, -367.4032f },
	{ 481.3644f, 5, -376.0633f },
	{ 486.3644f, -10, -367.4032f },
	{ 481.3644f, 0, -376.0633f },
	{ 391.3644f, 5, -531.9478f },
	{ 391.3644f, 0, -531.9478f },
	{ 386.3644f, 5, -540.6079f },
	{ 386.3644f, -10, -540.6079f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00044738[] = {
	{ 0.353554f, 0.7071069f, 0.612372f },
	{ -0.353554f, 0.7071069f, -0.612372f },
	{ 0.353554f, 0.7071069f, 0.612372f },
	{ -0.353554f, 0.707106f, -0.612373f },
	{ -0.353554f, 0.7071069f, -0.612372f },
	{ 0.353554f, 0.7071069f, 0.612372f },
	{ -0.353554f, -0.7071069f, -0.612372f },
	{ 0.353554f, -0.7071069f, 0.612372f },
	{ 0.353554f, 0.7071069f, 0.612372f },
	{ -0.353554f, 0.7071069f, -0.612372f },
	{ 0.353554f, 0.7071069f, 0.612372f },
	{ -0.353554f, 0.7071069f, -0.612372f },
	{ -0.353554f, 0.7071069f, -0.612372f },
	{ 0.353553f, 0.7071069f, 0.612372f },
	{ -0.353554f, -0.7071069f, -0.612372f },
	{ 0.353553f, -0.7071069f, 0.612372f },
	{ 0.353554f, 0.7071069f, 0.612372f },
	{ -0.353553f, 0.7071069f, -0.612373f },
	{ 0.353554f, 0.7071069f, 0.612372f },
	{ -0.353554f, 0.7071069f, -0.612372f },
	{ -0.353553f, 0.7071069f, -0.612373f },
	{ 0.353553f, 0.7071069f, 0.612373f },
	{ -0.353554f, -0.7071069f, -0.612372f },
	{ 0.353553f, -0.7071069f, 0.612373f },
	{ 0.353554f, 0.7071069f, 0.612372f },
	{ -0.353553f, 0.7071069f, -0.612373f },
	{ 0.353554f, 0.7071069f, 0.612372f },
	{ -0.353554f, 0.7071069f, -0.612372f },
	{ -0.353553f, 0.7071069f, -0.612373f },
	{ 0.353553f, 0.7071069f, 0.612373f },
	{ -0.353554f, -0.7071069f, -0.612372f },
	{ 0.353553f, -0.7071069f, 0.612373f },
	{ 0.353553f, 0.7071069f, 0.612373f },
	{ -0.353553f, 0.7071069f, -0.612373f },
	{ 0.353553f, 0.7071069f, 0.612372f },
	{ -0.353553f, 0.707106f, -0.612373f },
	{ -0.353553f, 0.7071069f, -0.612373f },
	{ 0.353554f, 0.7071069f, 0.612372f },
	{ -0.353553f, -0.707106f, -0.612373f },
	{ 0.353554f, -0.7071069f, 0.612372f },
	{ 0.960366f, 0.229743f, -0.157843f },
	{ 0.606163f, 0.224475f, -0.763005f },
	{ 0.788675f, 0.57735f, 0.211326f },
	{ 0.211324f, 0.577351f, -0.788675f },
	{ 0.211324f, 0.57735f, -0.788676f },
	{ 0.788675f, 0.57735f, 0.211327f },
	{ 0.221679f, -0.601586f, -0.767432f },
	{ 0.787338f, -0.587376f, 0.187319f },
	{ 0.317791f, 0.867312f, -0.383117f },
	{ 0.500684f, 0.657119f, -0.56348f },
	{ 0.690022f, -0.16713f, -0.704228f },
	{ 0.434405f, -0.607024f, -0.6654429f },
	{ 0.71631f, 0.697098f, -0.030894f },
	{ 0.7682239f, -0.632017f, -0.101919f },
	{ 0.478275f, 0.877928f, -0.022272f },
	{ 0.958419f, -0.284311f, 0.024501f },
	{ 0.353553f, 0.7071069f, 0.612372f },
	{ -0.353554f, 0.7071069f, -0.612372f },
	{ 0.353553f, -0.7071069f, 0.612373f },
	{ -0.353574f, 0.707068f, -0.612406f },
	{ 0.353551f, 0.7071069f, 0.612373f },
	{ 0.353551f, 0.7071069f, 0.6123739f },
	{ -0.353552f, 0.7071069f, -0.612373f },
	{ -0.353552f, -0.7071069f, -0.612373f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00044A38 = { vertex_00044438, normal_00044738, LengthOfArray<Sint32>(vertex_00044438), meshlist_00044360, matlist_00043EA4, LengthOfArray<Uint16>(meshlist_00044360), LengthOfArray<Uint16>(matlist_00043EA4), { 241.5088f, -2.5f, -341.5055f }, 340.2955f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00044A60 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00044A38, 2930.001f, 105, -7549.999f, 0, 0xFFFFD556, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00044A94[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 14, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00044BD4[] = {
	3, 65, 64, 63,
	12, 54, 55, 52, 61, 57, 59, 56, 60, 58, 65, 62, 63,
	3, 52, 53, 54
};

extern "C" __declspec(dllexport) Sint16 poly_00044BFE[] = {
	5, 12, 86, 23, 22, 43,
	6, 23, 43, 95, 41, 24, 37,
	8, 97, 24, 32, 37, 31, 39, 79, 36,
	6, 50, 13, 15, 12, 14, 23,
	3, 15, 51, 50
};

extern "C" __declspec(dllexport) Sint16 poly_00044C40[] = {
	0x8000u | 11, 1, 0, 2, 84, 17, 16, 80, 42, 72, 40, 71,
	0x8000u | 5, 2, 3, 1, 45, 44,
	8, 77, 35, 25, 38, 26, 70, 96, 73
};

extern "C" __declspec(dllexport) Sint16 poly_00044C76[] = {
	6, 20, 8, 10, 9, 11, 49,
	0x8000u | 7, 64, 63, 87, 88, 49, 48, 9,
	9, 46, 5, 7, 4, 6, 85, 83, 18, 19,
	7, 7, 47, 46, 99, 98, 54, 53,
	0x8000u | 6, 69, 68, 81, 82, 30, 29,
	0x8000u | 7, 66, 67, 94, 93, 20, 21, 10,
	0x8000u | 6, 34, 33, 76, 78, 27, 28
};

extern "C" __declspec(dllexport) Sint16 poly_00044CE4[] = {
	3, 93, 21, 95,
	0x8000u | 6, 95, 23, 21, 14, 10, 11,
	0x8000u | 5, 86, 83, 12, 6, 13,
	3, 99, 47, 92,
	0x8000u | 6, 92, 50, 47, 13, 7, 6,
	3, 90, 51, 87,
	0x8000u | 6, 87, 49, 51, 11, 15, 14
};

extern "C" __declspec(dllexport) Sint16 poly_00044D32[] = {
	4, 26, 96, 29, 82,
	3, 80, 17, 94,
	0x8000u | 6, 94, 20, 17, 8, 2, 3,
	0x8000u | 5, 85, 84, 4, 0, 5,
	3, 91, 44, 98,
	0x8000u | 6, 98, 46, 44, 5, 1, 0,
	3, 88, 48, 89,
	0x8000u | 6, 89, 45, 48, 3, 9, 8
};

extern "C" __declspec(dllexport) Sint16 poly_00044D8A[] = {
	4, 52, 91, 53, 98,
	4, 63, 88, 62, 89,
	4, 68, 82, 73, 96,
	4, 35, 77, 34, 76
};

extern "C" __declspec(dllexport) Sint16 poly_00044DB2[] = {
	4, 18, 85, 16, 84,
	4, 72, 80, 66, 94
};

extern "C" __declspec(dllexport) Sint16 poly_00044DC6[] = {
	4, 22, 86, 19, 83,
	4, 95, 24, 93, 67
};

extern "C" __declspec(dllexport) Sint16 poly_00044DDA[] = {
	0x8000u | 9, 37, 71, 41, 40, 43, 42, 22, 16, 18,
	3, 38, 35, 39,
	0x8000u | 5, 39, 36, 35, 33, 34,
	0x8000u | 9, 38, 70, 37, 75, 71, 74, 72, 67, 66,
	3, 38, 39, 37,
	3, 19, 18, 22,
	6, 24, 69, 74, 73, 75, 70,
	3, 24, 74, 67,
	3, 69, 68, 73
};

extern "C" __declspec(dllexport) Sint16 poly_00044E44[] = {
	4, 54, 99, 55, 92,
	4, 65, 90, 64, 87,
	4, 33, 78, 36, 79,
	4, 81, 69, 97, 24
};

extern "C" __declspec(dllexport) Sint16 poly_00044E6C[] = {
	4, 30, 81, 32, 97
};

extern "C" __declspec(dllexport) Sint16 poly_00044E76[] = {
	4, 27, 76, 25, 77
};

extern "C" __declspec(dllexport) Sint16 poly_00044E80[] = {
	4, 31, 79, 28, 78
};

extern "C" __declspec(dllexport) Sint16 poly_00044E8A[] = {
	0x8000u | 9, 59, 60, 61, 65, 55, 90, 92, 51, 50
};

extern "C" __declspec(dllexport) Sint16 poly_00044E9E[] = {
	0x8000u | 9, 56, 57, 58, 52, 62, 91, 89, 44, 45
};

NJS_TEX uv_00044EB4[] = {
	{ 1016, 254 },
	{ 1016, 0 },
	{ 960, 0 },
	{ 3, 0 },
	{ 3, 254 },
	{ 67, 86 },
	{ 258, 254 },
	{ 280, 86 },
	{ 513, 254 },
	{ 510, 86 },
	{ 768, 254 },
	{ 738, 86 },
	{ 1016, 254 },
	{ 960, 86 },
	{ 960, 0 },
	{ 67, 86 },
	{ 67, 0 },
	{ 3, 0 }
};

NJS_TEX uv_00044EFC[] = {
	{ 254, -2680 },
	{ 255, -3380 },
	{ 0, -3614 },
	{ 254, -3614 },
	{ 216, -4010 },
	{ 0, -3614 },
	{ 216, -4010 },
	{ 0, -4312 },
	{ 159, -4173 },
	{ 0, -4546 },
	{ 152, -4546 },
	{ 0, -4876 },
	{ 0, -4546 },
	{ 0, -5864 },
	{ 152, -4546 },
	{ 254, -5865 },
	{ 178, -4876 },
	{ 254, -5502 },
	{ 254, -5138 },
	{ 254, -816 },
	{ 254, -1748 },
	{ 0, -1748 },
	{ 254, -2680 },
	{ 0, -2680 },
	{ 0, -3614 },
	{ 0, -1748 },
	{ 0, -816 },
	{ 254, -816 }
};

NJS_TEX uv_00044F6C[] = {
	{ 0, -1848 },
	{ 0, -1383 },
	{ 508, -1383 },
	{ 0, -1033 },
	{ 508, -916 },
	{ 0, -916 },
	{ 508, -589 },
	{ 77, -741 },
	{ 508, -480 },
	{ 212, -682 },
	{ 249, -480 },
	{ 508, -1383 },
	{ 508, -1848 },
	{ 0, -1848 },
	{ 510, -2314 },
	{ 0, -2314 },
	{ 0, 90 },
	{ 0, -74 },
	{ 0, 255 },
	{ 155, -173 },
	{ 508, 255 },
	{ 242, -374 },
	{ 508, -208 },
	{ 508, -362 }
};

NJS_TEX uv_00044FCC[] = {
	{ -2135, 4844 },
	{ -3068, 4844 },
	{ -3068, 5099 },
	{ -4000, 4844 },
	{ -4000, 5099 },
	{ -4932, 5100 },
	{ -5397, 5100 },
	{ -5397, 4845 },
	{ -5164, 5100 },
	{ -5164, 4845 },
	{ -4932, 5100 },
	{ -4932, 4845 },
	{ -4000, 4844 },
	{ -4932, 255 },
	{ -4000, 255 },
	{ -4000, 0 },
	{ -3068, 255 },
	{ -3068, 0 },
	{ -2368, 255 },
	{ -2368, 0 },
	{ -2135, 255 },
	{ -2135, 0 },
	{ -4000, 0 },
	{ -4932, 0 },
	{ -4932, 255 },
	{ -5631, 0 },
	{ -5631, 254 },
	{ -5865, 0 },
	{ -5865, 255 },
	{ -980, 5099 },
	{ -980, 4844 },
	{ -672, 5099 },
	{ -672, 4844 },
	{ 255, 5099 },
	{ 255, 4844 },
	{ -1260, 4844 },
	{ -1260, 5099 },
	{ -1480, 4844 },
	{ -1480, 5099 },
	{ -2135, 4844 },
	{ -2135, 5099 },
	{ -3068, 5099 },
	{ -404, 255 },
	{ -470, 0 },
	{ -74, 255 },
	{ -107, 0 },
	{ 255, 255 },
	{ 255, 0 }
};

NJS_TEX uv_0004508C[] = {
	{ 0 },
	{ 725, 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 764, 255 },
	{ 725, 0 },
	{ 1784, 255 },
	{ 1756, 0 },
	{ 2789, 0 },
	{ 0, 255 },
	{ 0 },
	{ 764, 255 },
	{ 764, 0 },
	{ 1784, 255 },
	{ 3570, 0 },
	{ 2804, 0 },
	{ 3570, 255 },
	{ 3570, 255 },
	{ 2804, 255 },
	{ 2804, 0 },
	{ 1784, 255 },
	{ 1784, 0 },
	{ 764, 0 },
	{ 4080, 255 },
	{ 3824, 255 },
	{ 4080, 0 },
	{ 4080, 0 },
	{ 3821, 0 },
	{ 3824, 255 },
	{ 2789, 0 },
	{ 2804, 255 },
	{ 1784, 255 }
};

NJS_TEX uv_0004510C[] = {
	{ 0, 255 },
	{ 765, 255 },
	{ 0 },
	{ 765, 0 },
	{ 0, 255 },
	{ 725, 255 },
	{ 0 },
	{ 0 },
	{ 725, 0 },
	{ 725, 255 },
	{ 1756, 0 },
	{ 1756, 255 },
	{ 2789, 255 },
	{ 0 },
	{ 0, 255 },
	{ 764, 0 },
	{ 764, 255 },
	{ 1784, 0 },
	{ 3570, 255 },
	{ 2804, 255 },
	{ 3570, 0 },
	{ 3570, 0 },
	{ 2804, 0 },
	{ 2804, 255 },
	{ 1784, 0 },
	{ 1784, 255 },
	{ 764, 255 },
	{ 4080, 0 },
	{ 3821, 0 },
	{ 4080, 255 },
	{ 4080, 255 },
	{ 3821, 255 },
	{ 3821, 0 },
	{ 2789, 255 },
	{ 2789, 0 },
	{ 1756, 0 }
};

NJS_TEX uv_0004519C[] = {
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 1 },
	{ 1, 1 }
};

NJS_TEX uv_000451DC[] = {
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 253, 1 }
};

NJS_TEX uv_000451FC[] = {
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 1 },
	{ 1, 1 }
};

NJS_TEX uv_0004521C[] = {
	{ 408, 254 },
	{ 500, 71 },
	{ 382, 254 },
	{ 432, 71 },
	{ 153, 254 },
	{ 191, 71 },
	{ 3, 254 },
	{ 67, 70 },
	{ 67, 0 },
	{ 191, 71 },
	{ 67, 70 },
	{ 153, 254 },
	{ 153, 254 },
	{ 3, 254 },
	{ 67, 70 },
	{ 3, 0 },
	{ 67, 0 },
	{ 432, 71 },
	{ 500, 71 },
	{ 408, 254 },
	{ 482, 158 },
	{ 500, 71 },
	{ 960, 158 },
	{ 960, 70 },
	{ 1016, 0 },
	{ 960, 0 },
	{ 432, 71 },
	{ 382, 254 },
	{ 408, 254 },
	{ 3, 0 },
	{ 67, 0 },
	{ 3, 254 },
	{ 1016, 254 },
	{ 1016, 0 },
	{ 960, 158 },
	{ 960, 70 },
	{ 482, 158 },
	{ 500, 71 },
	{ 1016, 254 },
	{ 960, 158 },
	{ 1016, 0 },
	{ 1016, 0 },
	{ 960, 0 },
	{ 960, 70 }
};

NJS_TEX uv_000452CC[] = {
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 253 },
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 }
};

NJS_TEX uv_0004530C[] = {
	{ 0 },
	{ 765, 0 },
	{ 0, 255 },
	{ 765, 255 }
};

NJS_TEX uv_0004531C[] = {
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 }
};

NJS_TEX uv_0004532C[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_TEX uv_0004533C[] = {
	{ 144, 29 },
	{ 88, 17 },
	{ 200, 0 },
	{ 32, 62 },
	{ 254, 0 },
	{ 32, 94 },
	{ 254, 30 },
	{ 32, 126 },
	{ 254, 126 }
};

NJS_TEX uv_00045360[] = {
	{ 156, 33 },
	{ 107, 0 },
	{ 205, 19 },
	{ 57, 0 },
	{ 255, 65 },
	{ 57, 33 },
	{ 255, 98 },
	{ 57, 127 },
	{ 255, 127 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00045384[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00044BD4, NULL, NULL, NULL, uv_00044EB4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 5, poly_00044BFE, NULL, NULL, NULL, uv_00044EFC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_00044C40, NULL, NULL, NULL, uv_00044F6C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 7, poly_00044C76, NULL, NULL, NULL, uv_00044FCC, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 7, poly_00044CE4, NULL, NULL, NULL, uv_0004508C, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 8, poly_00044D32, NULL, NULL, NULL, uv_0004510C, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 4, poly_00044D8A, NULL, NULL, NULL, uv_0004519C, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 2, poly_00044DB2, NULL, NULL, NULL, uv_000451DC, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 2, poly_00044DC6, NULL, NULL, NULL, uv_000451FC, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 9, poly_00044DDA, NULL, NULL, NULL, uv_0004521C, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 4, poly_00044E44, NULL, NULL, NULL, uv_000452CC, NULL },
	{ NJD_MESHSET_TRIMESH | 11, 1, poly_00044E6C, NULL, NULL, NULL, uv_0004530C, NULL },
	{ NJD_MESHSET_TRIMESH | 12, 1, poly_00044E76, NULL, NULL, NULL, uv_0004531C, NULL },
	{ NJD_MESHSET_TRIMESH | 13, 1, poly_00044E80, NULL, NULL, NULL, uv_0004532C, NULL },
	{ NJD_MESHSET_TRIMESH | 14, 1, poly_00044E8A, NULL, NULL, NULL, uv_0004533C, NULL },
	{ NJD_MESHSET_TRIMESH | 15, 1, poly_00044E9E, NULL, NULL, NULL, uv_00045360, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00045504[] = {
	{ -90.83385f, 124.086f, 58.48968f },
	{ -90.83385f, 53.37532f, 129.2004f },
	{ 89.1661f, 124.086f, 58.48971f },
	{ 89.1661f, 53.37532f, 129.2004f },
	{ -90.83385f, 127.6215f, 62.0252f },
	{ -90.83385f, 56.91087f, 132.7359f },
	{ -100.8339f, 127.6215f, 62.0252f },
	{ -100.8339f, 56.91087f, 132.7359f },
	{ 89.1661f, 127.6215f, 62.02523f },
	{ 89.1661f, 56.91085f, 132.7359f },
	{ 99.1661f, 127.6215f, 62.02523f },
	{ 99.1661f, 56.91085f, 132.7359f },
	{ -100.8339f, 117.0149f, 51.41861f },
	{ -100.8339f, 46.30427f, 122.1293f },
	{ 99.1661f, 117.0149f, 51.41863f },
	{ 99.1661f, 46.30426f, 122.1293f },
	{ -90.83385f, 194.7966f, -12.221f },
	{ 89.16605f, 194.7966f, -12.22098f },
	{ -90.83385f, 198.3321f, -8.685467f },
	{ -100.8339f, 198.3321f, -8.685472f },
	{ 89.16605f, 198.3321f, -8.685453f },
	{ 99.16605f, 198.3321f, -8.685448f },
	{ -100.8339f, 187.7255f, -19.29207f },
	{ 99.16606f, 187.7255f, -19.29205f },
	{ 99.16605f, 258.4361f, -90.00272f },
	{ -90.83387f, 268.4361f, -190.0027f },
	{ 89.16605f, 268.4361f, -190.0027f },
	{ -90.83387f, 273.4361f, -190.0027f },
	{ -100.8339f, 273.4361f, -190.0027f },
	{ 89.16605f, 273.4361f, -190.0027f },
	{ 99.16605f, 273.4361f, -190.0027f },
	{ -100.8339f, 258.4361f, -190.0027f },
	{ 99.16605f, 258.4361f, -190.0027f },
	{ -100.8339f, 273.4361f, -135.0027f },
	{ -90.83387f, 273.4361f, -140.0027f },
	{ -90.83387f, 268.4361f, -140.0027f },
	{ -100.8339f, 258.4361f, -135.0027f },
	{ -20.83391f, 258.4361f, -90.00272f },
	{ -35.83389f, 268.4361f, -125.0027f },
	{ -40.83389f, 258.4361f, -115.0027f },
	{ -15.83391f, 230.1519f, -47.57634f },
	{ -25.83389f, 230.1519f, -61.71847f },
	{ -63.33388f, 221.3131f, -38.73751f },
	{ -70.83387f, 217.7776f, -49.34411f },
	{ -90.83384f, -17.33529f, 199.9111f },
	{ 89.1661f, -17.3353f, 199.9111f },
	{ -90.83384f, -13.79977f, 203.4466f },
	{ -100.8338f, -13.79977f, 203.4466f },
	{ 89.1661f, -13.79978f, 203.4466f },
	{ 99.1661f, -13.79978f, 203.4466f },
	{ -100.8338f, -24.40637f, 192.84f },
	{ 99.1661f, -24.40637f, 192.84f },
	{ -90.83379f, -88.04594f, 270.6217f },
	{ -90.83379f, -84.51038f, 274.1572f },
	{ -100.8338f, -84.51038f, 274.1572f },
	{ -100.8338f, -95.117f, 263.5506f },
	{ -0.833832f, -70.36823f, 252.944f },
	{ -45.83378f, -88.04594f, 270.6217f },
	{ 44.16616f, -77.43934f, 260.0151f },
	{ -0.833833f, -77.43934f, 245.873f },
	{ 49.16616f, -84.51038f, 252.944f },
	{ -50.83378f, -95.117f, 263.5506f },
	{ 89.1661f, -52.69065f, 235.2664f },
	{ 89.1661f, -49.15513f, 238.8019f },
	{ 99.1661f, -49.15513f, 238.8019f },
	{ 99.1661f, -59.76173f, 228.1953f },
	{ 89.16605f, 264.6233f, -74.9767f },
	{ 99.16605f, 264.6233f, -74.9767f },
	{ 89.16605f, 273.4361f, -96.25272f },
	{ 99.16605f, 273.4361f, -96.25272f },
	{ -5.208916f, 268.4361f, -94.37772f },
	{ -2.708915f, 261.0878f, -78.51224f },
	{ 89.16605f, 261.0878f, -78.51224f },
	{ 89.16605f, 268.4361f, -96.25272f },
	{ 99.16605f, 263.0562f, -88.08902f },
	{ -10.83391f, 263.0555f, -88.08929f },
	{ -90.83387f, 273.4361f, -165.0027f },
	{ -90.83387f, 268.4361f, -165.0027f },
	{ -100.8339f, 273.4361f, -162.5027f },
	{ -100.8339f, 258.4361f, -162.5027f },
	{ 89.16573f, 244.515f, -61.93909f },
	{ 99.16595f, 273.4361f, -119.69f },
	{ 89.16602f, 273.4361f, -119.6902f },
	{ -100.8339f, 180.6545f, 8.992045f },
	{ -90.83394f, 177.119f, 5.456699f },
	{ -90.83385f, 180.6545f, 8.99229f },
	{ -100.834f, 170.0478f, -1.613989f },
	{ 99.1661f, -31.47745f, 221.1243f },
	{ 89.1661f, -31.47745f, 221.1243f },
	{ 89.1661f, -35.01298f, 217.5887f },
	{ 99.1661f, -42.08406f, 210.5177f },
	{ -90.8339f, -70.36854f, 252.9439f },
	{ -100.8339f, -77.43967f, 245.873f },
	{ 99.16529f, 248.0508f, -58.40399f },
	{ 89.16554f, 248.0506f, -58.40399f },
	{ 99.16585f, 240.7583f, -72.32404f },
	{ 89.16587f, 268.4361f, -119.6888f },
	{ 99.16589f, 258.4361f, -115.0017f },
	{ -90.83398f, -66.83276f, 256.4809f },
	{ -100.8339f, -66.83282f, 256.4803f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000459B4[] = {
	{ 0.7071069f, 0.500001f, 0.5f },
	{ 0.7071069f, 0.5f, 0.5f },
	{ -0.7071069f, 0.5f, 0.5f },
	{ -0.7071069f, 0.5f, 0.5f },
	{ 0.7071069f, 0.5f, 0.5f },
	{ 0.7071069f, 0.5f, 0.5f },
	{ -0.7071069f, 0.5f, 0.5f },
	{ -0.7071069f, 0.5f, 0.5f },
	{ -0.7071069f, 0.5f, 0.5f },
	{ -0.7071069f, 0.5f, 0.5f },
	{ 0.7071069f, 0.5f, 0.5f },
	{ 0.7071069f, 0.5f, 0.5f },
	{ -0.707106f, -0.500001f, -0.5f },
	{ -0.7071069f, -0.5f, -0.5f },
	{ 0.7071069f, -0.5f, -0.5f },
	{ 0.7071069f, -0.5f, -0.5f },
	{ 0.061777f, 0.995501f, 0.07184f },
	{ -0.7071069f, 0.499998f, 0.500002f },
	{ 0.577351f, 0.816496f, 0.000001f },
	{ -0.57735f, 0.816497f, -0.00001f },
	{ -0.707106f, 0.499999f, 0.500002f },
	{ 0.707108f, 0.500001f, 0.499997f },
	{ -0.718063f, -0.109397f, -0.687327f },
	{ 0.7071069f, -0.499998f, -0.500002f },
	{ 0.804188f, -0.5491329f, -0.227452f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.707106f, -0.00001f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, -0.00001f },
	{ 0.7071069f, 0.707106f, 0.000001f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ 0.7071069f, -0.707106f, 0.000001f },
	{ -0.436694f, 0.556808f, 0.706585f },
	{ 0.676838f, 0.605729f, 0.418309f },
	{ 0.396975f, 0.5958869f, 0.69809f },
	{ -0.584346f, -0.5206029f, 0.622504f },
	{ -0.9367239f, -0.200441f, 0.287006f },
	{ -0.207454f, 0.913865f, 0.349017f },
	{ -0.531252f, -0.07139f, 0.844201f },
	{ -0.232704f, 0.81638f, 0.528556f },
	{ -0.693718f, 0.711605f, -0.111237f },
	{ -0.245654f, 0.883567f, 0.398702f },
	{ -0.620492f, 0.279439f, -0.7327369f },
	{ 0.7071069f, 0.499999f, 0.500001f },
	{ -0.7071069f, 0.499999f, 0.5f },
	{ 0.707108f, 0.500001f, 0.499997f },
	{ -0.7071069f, 0.500002f, 0.499997f },
	{ -0.7071069f, 0.5f, 0.5f },
	{ 0.7071069f, 0.5f, 0.5f },
	{ -0.7071069f, -0.5f, -0.5f },
	{ 0.7071069f, -0.5f, -0.5f },
	{ 0.301509f, -0.426397f, 0.852806f },
	{ 0.577355f, -0.00008f, 0.816493f },
	{ -0.5773489f, -0.00008999999f, 0.816498f },
	{ -0.577352f, -0.816496f, 0.000003f },
	{ 0.108919f, -0.164627f, 0.980324f },
	{ 0.243836f, -0.119476f, 0.962429f },
	{ 0.049753f, 0.010909f, 0.998702f },
	{ 0.095585f, -0.9953769f, 0.009401999f },
	{ 0.264198f, -0.926102f, 0.269321f },
	{ 0.123508f, -0.992224f, 0.015396f },
	{ -0.0913f, -0.071632f, 0.993244f },
	{ -0.57735f, 0, 0.816497f },
	{ 0.57735f, 0, 0.816497f },
	{ 0.678387f, -0.732386f, -0.058329f },
	{ -0.577343f, 0.816501f, -0.00002f },
	{ 0.576005f, 0.793143f, 0.197846f },
	{ -0.5773489f, 0.57735f, 0.577352f },
	{ 0.5760069f, 0.700726f, 0.42095f },
	{ -0.139362f, 0.927503f, 0.346867f },
	{ -0.209396f, 0.854629f, 0.475145f },
	{ -0.336871f, 0.933692f, 0.121394f },
	{ -0.3365f, 0.73254f, 0.591736f },
	{ 0.782145f, 0.572067f, 0.246956f },
	{ -0.324298f, 0.842014f, 0.431094f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.707109f, 0.5f, 0.499997f },
	{ 0.7071069f, 0.7071069f, -0.00001f },
	{ -0.7071069f, 0.7071069f, 0.000001f },
	{ -0.7071069f, 0.5f, 0.499999f },
	{ 0.7071069f, 0.5f, 0.5f },
	{ 0.707106f, 0.5f, 0.5f },
	{ -0.707109f, -0.499998f, -0.499999f },
	{ 0.7071069f, 0.5f, 0.5f },
	{ -0.7071069f, 0.5f, 0.5f },
	{ -0.7071069f, 0.499999f, 0.500001f },
	{ 0.7071069f, -0.500001f, -0.499999f },
	{ 0.70716f, 0.499963f, 0.499963f },
	{ -0.707106f, -0.500002f, -0.499999f },
	{ 0.707097f, 0.5000049f, 0.5000089f },
	{ -0.7071109f, 0.500001f, 0.499994f },
	{ 0.707118f, -0.499996f, -0.499988f },
	{ -0.7071069f, 0.7071069f, 0.000001f },
	{ 0.707105f, -0.707108f, -0.00002f },
	{ 0.7071f, 0.500001f, 0.5000089f },
	{ -0.707104f, 0.499996f, 0.500008f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00045E64 = { vertex_00045504, normal_000459B4, LengthOfArray<Sint32>(vertex_00045504), meshlist_00045384, matlist_00044A94, LengthOfArray<Uint16>(meshlist_00045384), LengthOfArray<Uint16>(matlist_00044A94), { -0.833935f, 89.15957f, 42.07724f }, 275.1673f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00045E8C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00045E64, 4811.184f, -20.00004f, -7416.901f, 0x2B1C, 0x258B, 0x6B13, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00045EC0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00045F60[] = {
	12, 45, 47, 41, 51, 49, 50, 48, 53, 52, 46, 40, 42,
	3, 41, 44, 45,
	3, 46, 43, 42
};

extern "C" __declspec(dllexport) Sint16 poly_00045F8A[] = {
	4, 46, 60, 43, 59,
	4, 45, 54, 47, 57
};

extern "C" __declspec(dllexport) Sint16 poly_00045F9E[] = {
	4, 42, 58, 40, 61,
	4, 41, 56, 44, 55
};

extern "C" __declspec(dllexport) Sint16 poly_00045FB2[] = {
	5, 35, 58, 59, 42, 43,
	0x8000u | 11, 58, 34, 35, 26, 27, 18, 19, 10, 11, 2, 3,
	5, 36, 54, 55, 45, 44,
	0x8000u | 11, 54, 37, 36, 29, 28, 21, 20, 13, 12, 5, 4
};

extern "C" __declspec(dllexport) Sint16 poly_00045FFA[] = {
	0x8000u | 17, 50, 53, 51, 46, 47, 60, 57, 38, 39, 30, 31, 22, 23, 14, 15, 6, 7
};

extern "C" __declspec(dllexport) Sint16 poly_0004601E[] = {
	0x8000u | 17, 48, 49, 52, 41, 40, 56, 61, 33, 32, 25, 24, 17, 16, 9, 8, 1, 0
};

extern "C" __declspec(dllexport) Sint16 poly_00046042[] = {
	3, 60, 38, 59,
	0x8000u | 11, 59, 35, 38, 27, 30, 19, 22, 11, 14, 3, 6,
	3, 54, 37, 57,
	0x8000u | 11, 57, 39, 37, 31, 29, 23, 21, 15, 13, 7, 5
};

extern "C" __declspec(dllexport) Sint16 poly_00046082[] = {
	3, 58, 34, 61,
	0x8000u | 11, 61, 32, 34, 24, 26, 16, 18, 8, 10, 0, 2,
	3, 56, 33, 55,
	0x8000u | 11, 55, 36, 33, 28, 25, 20, 17, 12, 9, 4, 1
};

NJS_TEX uv_000460C4[] = {
	{ 1020, 0 },
	{ 1020, 254 },
	{ 968, 84 },
	{ 765, 254 },
	{ 738, 84 },
	{ 510, 254 },
	{ 510, 84 },
	{ 255, 254 },
	{ 280, 84 },
	{ 0, 254 },
	{ 51, 84 },
	{ 51, 0 },
	{ 968, 84 },
	{ 968, 0 },
	{ 1020, 0 },
	{ 0, 254 },
	{ 0 },
	{ 51, 0 }
};

NJS_TEX uv_0004610C[] = {
	{ 0, 254 },
	{ 255, 254 },
	{ 0 },
	{ 255, 0 },
	{ 0 },
	{ 254, 0 },
	{ 0, 254 },
	{ 254, 254 }
};

NJS_TEX uv_0004612C[] = {
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 253, 1 }
};

NJS_TEX uv_0004614C[] = {
	{ -764, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ -764, 255 },
	{ -764, 0 },
	{ -1784, 255 },
	{ -1784, 0 },
	{ -2805, 255 },
	{ -2805, 0 },
	{ -3825, 255 },
	{ -3825, 0 },
	{ -4845, 255 },
	{ -4845, 0 },
	{ -764, 4844 },
	{ 0, 5099 },
	{ 0, 4845 },
	{ 255, 5099 },
	{ 255, 4844 },
	{ 0, 5099 },
	{ -764, 5099 },
	{ -764, 4844 },
	{ -1784, 5099 },
	{ -1784, 4844 },
	{ -2805, 5099 },
	{ -2805, 4844 },
	{ -3825, 5099 },
	{ -3825, 4844 },
	{ -4845, 5100 },
	{ -4845, 4845 }
};

NJS_TEX uv_000461CC[] = {
	{ 127, -3531 },
	{ 191, -3378 },
	{ 63, -3492 },
	{ 254, -3570 },
	{ 0, -3570 },
	{ 255, -3378 },
	{ 0, -3378 },
	{ 254, -2805 },
	{ 0, -2805 },
	{ 254, -2040 },
	{ 0, -2040 },
	{ 254, -1275 },
	{ 0, -1274 },
	{ 254, -510 },
	{ 0, -508 },
	{ 254, 254 },
	{ 0, 254 }
};

NJS_TEX uv_00046210[] = {
	{ 254, 229 },
	{ 382, 204 },
	{ 127, 127 },
	{ 508, 255 },
	{ 0, 255 },
	{ 510, 127 },
	{ 0, 127 },
	{ 508, -254 },
	{ 0, -254 },
	{ 508, -764 },
	{ 0, -764 },
	{ 508, -1275 },
	{ 0, -1275 },
	{ 508, -1785 },
	{ 0, -1785 },
	{ 510, -2295 },
	{ 0, -2295 }
};

NJS_TEX uv_00046254[] = {
	{ 0, 254 },
	{ 764, 254 },
	{ 0 },
	{ 0 },
	{ 764, 0 },
	{ 764, 254 },
	{ 1785, 0 },
	{ 1785, 254 },
	{ 2805, 0 },
	{ 2805, 254 },
	{ 3825, 0 },
	{ 3825, 254 },
	{ 4845, 0 },
	{ 4845, 255 },
	{ 0 },
	{ 764, 0 },
	{ 0, 254 },
	{ 0, 254 },
	{ 764, 254 },
	{ 764, 0 },
	{ 1785, 254 },
	{ 1785, 0 },
	{ 2805, 254 },
	{ 2805, 0 },
	{ 3825, 254 },
	{ 3825, 0 },
	{ 4845, 255 },
	{ 4845, 0 }
};

NJS_TEX uv_000462C4[] = {
	{ 0 },
	{ 765, 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 764, 255 },
	{ 765, 0 },
	{ 1784, 255 },
	{ 1785, 0 },
	{ 2804, 255 },
	{ 2805, 0 },
	{ 3824, 255 },
	{ 3824, 0 },
	{ 4845, 255 },
	{ 4845, 0 },
	{ 0, 255 },
	{ 764, 255 },
	{ 0 },
	{ 0 },
	{ 765, 0 },
	{ 764, 255 },
	{ 1785, 0 },
	{ 1784, 255 },
	{ 2805, 0 },
	{ 2804, 255 },
	{ 3824, 0 },
	{ 3824, 255 },
	{ 4845, 0 },
	{ 4845, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00046334[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00045F60, NULL, NULL, NULL, uv_000460C4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00045F8A, NULL, NULL, NULL, uv_0004610C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_00045F9E, NULL, NULL, NULL, uv_0004612C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, poly_00045FB2, NULL, NULL, NULL, uv_0004614C, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_00045FFA, NULL, NULL, NULL, uv_000461CC, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_0004601E, NULL, NULL, NULL, uv_00046210, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 4, poly_00046042, NULL, NULL, NULL, uv_00046254, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 4, poly_00046082, NULL, NULL, NULL, uv_000462C4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000463F4[] = {
	{ -89.41898f, 0.014602f, 301.7539f },
	{ 90.58096f, 0.014602f, 301.7539f },
	{ -89.41898f, 5.014601f, 301.7539f },
	{ -99.41898f, 5.014601f, 301.7539f },
	{ 90.58096f, 5.014601f, 301.7539f },
	{ 100.581f, 5.014601f, 301.7539f },
	{ -99.41898f, -9.985396f, 301.7539f },
	{ 100.581f, -9.985396f, 301.7539f },
	{ -89.419f, 0.014604f, 201.7539f },
	{ 90.58092f, 0.014604f, 201.7539f },
	{ -89.419f, 5.014604f, 201.7539f },
	{ -99.419f, 5.014604f, 201.7539f },
	{ 90.58092f, 5.014604f, 201.7539f },
	{ 100.5809f, 5.014604f, 201.7539f },
	{ -99.419f, -9.985394f, 201.7539f },
	{ 100.5809f, -9.985394f, 201.7539f },
	{ -89.41901f, 0.014607f, 101.754f },
	{ 90.58091f, 0.014607f, 101.754f },
	{ -89.41901f, 5.014606f, 101.754f },
	{ -99.41901f, 5.014606f, 101.754f },
	{ 90.58091f, 5.014606f, 101.754f },
	{ 100.5809f, 5.014606f, 101.754f },
	{ -99.41901f, -9.985392f, 101.754f },
	{ 100.5809f, -9.985393f, 101.754f },
	{ -89.41901f, 0.014609f, 1.75399f },
	{ 90.58091f, 0.014609f, 1.75399f },
	{ -89.41901f, 5.014609f, 1.75399f },
	{ -99.41901f, 5.014609f, 1.75399f },
	{ 90.58091f, 5.014608f, 1.75399f },
	{ 100.5809f, 5.014608f, 1.75399f },
	{ -99.41901f, -9.98539f, 1.75399f },
	{ 100.5809f, -9.98539f, 1.75399f },
	{ -89.41902f, 0.014612f, -98.24597f },
	{ 90.58089f, 0.014612f, -98.24599f },
	{ -89.41902f, 5.014611f, -98.24597f },
	{ -99.41902f, 5.014611f, -98.24597f },
	{ 90.58089f, 5.014611f, -98.24599f },
	{ 100.5809f, 5.014611f, -98.24599f },
	{ -99.41902f, -9.985387f, -98.24597f },
	{ 100.5809f, -9.985387f, -98.24599f },
	{ -89.41907f, 0.014614f, -198.2459f },
	{ 90.58087f, 0.014614f, -198.2459f },
	{ -89.41907f, 5.014614f, -198.2459f },
	{ -99.41907f, 5.014614f, -198.2459f },
	{ 90.58087f, 5.014614f, -198.2459f },
	{ 100.5809f, 5.014614f, -198.2459f },
	{ -99.41907f, -9.985385f, -198.2459f },
	{ 100.5809f, -9.985385f, -198.2459f },
	{ 0.5809039f, 0.014614f, -193.2459f },
	{ 45.58089f, 0.014614f, -188.2459f },
	{ 0.5809039f, -9.985385f, -193.2459f },
	{ 50.58089f, -9.985385f, -188.2459f },
	{ -44.41907f, 0.014614f, -173.2459f },
	{ -49.41907f, -9.985385f, -173.2459f },
	{ 100.5808f, 5.014613f, -173.2459f },
	{ 90.58097f, 5.014613f, -173.2459f },
	{ 90.58099f, 0.014613f, -173.2457f },
	{ 100.5809f, -9.985263f, -173.2459f },
	{ -89.41907f, 5.014613f, -173.2459f },
	{ -99.41907f, 5.01443f, -173.2459f },
	{ -99.41913f, -9.985385f, -173.2459f },
	{ -89.4192f, 0.014614f, -173.2452f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000466DC[] = {
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, -0.00001f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, -0.00001f },
	{ -0.707106f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, -0.7071069f, 0.000001f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.518099f, 0.024548f, -0.854968f },
	{ -0.400135f, 0.172771f, -0.900023f },
	{ 0.577352f, 0.577352f, -0.577348f },
	{ -0.5773489f, 0.577352f, -0.57735f },
	{ -0.577352f, 0.57735f, -0.5773489f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.494148f, -0.6116509f, -0.61782f },
	{ 0.5415f, -0.590449f, -0.598454f },
	{ -0.109614f, 0.663281f, -0.740299f },
	{ -0.003275f, 0.656972f, -0.753908f },
	{ -0.111694f, -0.646901f, -0.7543499f },
	{ -0.06615999f, -0.7225879f, -0.6881059f },
	{ -0.085237f, 0.525692f, -0.8463939f },
	{ 0.095543f, -0.760961f, -0.641724f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.707106f, 0.7071069f, 0.000001f },
	{ -0.7071069f, 0.7071069f, 0.000001f },
	{ 0.707108f, -0.707106f, 0 },
	{ 0.7071069f, 0.7071069f, 0.000001f },
	{ -0.707108f, 0.707106f, 0.000001f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000469C4 = { vertex_000463F4, normal_000466DC, LengthOfArray<Sint32>(vertex_000463F4), meshlist_00046334, matlist_00045EC0, LengthOfArray<Uint16>(meshlist_00046334), LengthOfArray<Uint16>(matlist_00045EC0), { 0.58091f, -2.485392f, 51.75398f }, 259.5229f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000469EC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000469C4, 3702.453f, 41.34949f, -7354.121f, 0x5714, 0x19F, 0xFFFFFFB4, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00046A20[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 14, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00046AE8[] = {
	3, 0, 2, 3,
	0x8000u | 14, 24, 26, 23, 49, 48, 47, 46, 50, 51, 52, 53, 0, 1, 2,
	3, 23, 24, 25
};

extern "C" __declspec(dllexport) Sint16 poly_00046B16[] = {
	0x8000u | 7, 4, 7, 6, 8, 9, 2, 3,
	6, 68, 11, 10, 5, 4, 6,
	3, 68, 10, 69,
	7, 25, 24, 31, 32, 27, 28, 29,
	6, 57, 34, 33, 30, 29, 27,
	3, 57, 33, 56
};

extern "C" __declspec(dllexport) Sint16 poly_00046B62[] = {
	4, 14, 8, 1, 2,
	4, 31, 45, 25, 23
};

extern "C" __declspec(dllexport) Sint16 poly_00046B76[] = {
	6, 13, 18, 63, 65, 68, 66,
	6, 18, 41, 65, 59, 66, 61,
	6, 41, 35, 59, 55, 61, 56
};

extern "C" __declspec(dllexport) Sint16 poly_00046BA0[] = {
	4, 37, 32, 26, 24,
	4, 9, 22, 3, 0
};

extern "C" __declspec(dllexport) Sint16 poly_00046BB4[] = {
	6, 36, 42, 54, 58, 57, 60,
	6, 42, 17, 58, 64, 60, 67,
	6, 12, 13, 62, 63, 69, 68,
	6, 57, 56, 54, 55, 36, 35,
	6, 69, 67, 62, 64, 12, 17
};

extern "C" __declspec(dllexport) Sint16 poly_00046BFA[] = {
	0x8000u | 7, 53, 1, 51, 14, 46, 15, 44,
	0x8000u | 5, 44, 45, 46, 23, 48,
	8, 60, 67, 70, 71, 43, 16, 44, 15
};

extern "C" __declspec(dllexport) Sint16 poly_00046C28[] = {
	3, 39, 38, 21,
	3, 21, 38, 37,
	0x8000u | 5, 47, 49, 21, 26, 37,
	6, 47, 50, 21, 52, 22, 0,
	6, 61, 40, 19, 39, 20, 21,
	3, 61, 19, 66
};

extern "C" __declspec(dllexport) Sint16 poly_00046C68[] = {
	10, 57, 60, 34, 70, 30, 43, 27, 44, 31, 45,
	10, 67, 69, 71, 10, 16, 4, 15, 7, 14, 8
};

extern "C" __declspec(dllexport) Sint16 poly_00046C94[] = {
	10, 68, 66, 11, 19, 5, 20, 6, 21, 9, 22,
	10, 61, 56, 40, 33, 39, 29, 38, 28, 37, 32
};

NJS_TEX uv_00046CC0[] = {
	{ 1016, 254 },
	{ 960, 0 },
	{ 1016, 0 },
	{ 3, 0 },
	{ 3, 254 },
	{ 75, 76 },
	{ 195, 254 },
	{ 195, 76 },
	{ 386, 254 },
	{ 394, 76 },
	{ 641, 254 },
	{ 617, 75 },
	{ 768, 254 },
	{ 768, 74 },
	{ 1016, 254 },
	{ 960, 74 },
	{ 960, 0 },
	{ 75, 76 },
	{ 3, 0 },
	{ 67, 0 }
};

NJS_TEX uv_00046D10[] = {
	{ 1814, 0 },
	{ 907, 0 },
	{ 907, 255 },
	{ 226, 0 },
	{ 226, 255 },
	{ 0 },
	{ 0, 255 },
	{ 3570, 255 },
	{ 2661, 255 },
	{ 2661, 0 },
	{ 1814, 255 },
	{ 1814, 0 },
	{ 907, 255 },
	{ 3570, 255 },
	{ 2661, 0 },
	{ 3570, 0 },
	{ 3570, 0 },
	{ 3570, 255 },
	{ 3327, 0 },
	{ 3327, 255 },
	{ 2842, 0 },
	{ 2842, 255 },
	{ 1873, 255 },
	{ 0 },
	{ 968, 0 },
	{ 968, 255 },
	{ 1873, 0 },
	{ 1873, 255 },
	{ 2842, 0 },
	{ 0 },
	{ 968, 255 },
	{ 0, 255 }
};

NJS_TEX uv_00046D90[] = {
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 }
};

NJS_TEX uv_00046DB0[] = {
	{ 0, 255 },
	{ 39, 255 },
	{ 0, 107 },
	{ 39, 113 },
	{ 0 },
	{ 39, 0 },
	{ 255, 255 },
	{ 37, 255 },
	{ 255, 113 },
	{ 37, 113 },
	{ 255, 0 },
	{ 37, 0 },
	{ 39, 255 },
	{ 0, 255 },
	{ 39, 113 },
	{ 0, 107 },
	{ 39, 0 },
	{ 0 }
};

NJS_TEX uv_00046DF8[] = {
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 }
};

NJS_TEX uv_00046E18[] = {
	{ 15, 255 },
	{ 47, 255 },
	{ 15, 107 },
	{ 47, 110 },
	{ 15, 0 },
	{ 47, 0 },
	{ 255, 255 },
	{ 57, 255 },
	{ 255, 110 },
	{ 57, 110 },
	{ 255, 0 },
	{ 57, 0 },
	{ 15, 255 },
	{ 0, 255 },
	{ 15, 107 },
	{ 0, 107 },
	{ 15, 0 },
	{ 0 },
	{ 15, 0 },
	{ 0 },
	{ 15, 107 },
	{ 0, 107 },
	{ 15, 255 },
	{ 0, 255 },
	{ 15, 0 },
	{ 47, 0 },
	{ 15, 107 },
	{ 47, 110 },
	{ 15, 255 },
	{ 47, 255 }
};

NJS_TEX uv_00046E90[] = {
	{ 396, -223 },
	{ 510, -255 },
	{ 318, -109 },
	{ 510, -130 },
	{ 198, -93 },
	{ 510, 242 },
	{ 0, 242 },
	{ 0, 242 },
	{ 0, -6 },
	{ 198, -93 },
	{ 0, -130 },
	{ 85, -186 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, -254 },
	{ 510, -254 },
	{ 0, -764 },
	{ 510, -764 },
	{ 0, -1275 },
	{ 510, -1275 }
};

NJS_TEX uv_00046EE0[] = {
	{ 0, -1775 },
	{ 1, -2780 },
	{ 253, -2780 },
	{ 255, 227 },
	{ 0, 227 },
	{ 0, -255 },
	{ 102, -424 },
	{ 44, -605 },
	{ 255, 227 },
	{ 0, -496 },
	{ 0, -255 },
	{ 102, -424 },
	{ 159, -454 },
	{ 255, 227 },
	{ 197, -677 },
	{ 255, -496 },
	{ 255, -738 },
	{ 1, 231 },
	{ 1, -762 },
	{ 253, -754 },
	{ 0, -1775 },
	{ 252, -1767 },
	{ 253, -2780 },
	{ 1, 231 },
	{ 253, -754 },
	{ 253, 231 }
};

NJS_TEX uv_00046F48[] = {
	{ 3315, 0 },
	{ 3315, 255 },
	{ 2349, 0 },
	{ 2367, 255 },
	{ 1447, 0 },
	{ 1419, 255 },
	{ 482, 0 },
	{ 472, 255 },
	{ 0 },
	{ 0, 255 },
	{ 3570, 255 },
	{ 3570, 0 },
	{ 2617, 255 },
	{ 2600, 0 },
	{ 1665, 255 },
	{ 1695, 0 },
	{ 713, 255 },
	{ 725, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_TEX uv_00046F98[] = {
	{ 3570, 0 },
	{ 3570, 255 },
	{ 2600, 0 },
	{ 2624, 255 },
	{ 1695, 0 },
	{ 1654, 255 },
	{ 725, 0 },
	{ 709, 255 },
	{ 0 },
	{ 0, 255 },
	{ 3315, 255 },
	{ 3315, 0 },
	{ 2374, 255 },
	{ 2349, 0 },
	{ 1410, 255 },
	{ 1447, 0 },
	{ 470, 255 },
	{ 482, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00046FE8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00046AE8, NULL, NULL, NULL, uv_00046CC0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_00046B16, NULL, NULL, NULL, uv_00046D10, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_00046B62, NULL, NULL, NULL, uv_00046D90, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 3, poly_00046B76, NULL, NULL, NULL, uv_00046DB0, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_00046BA0, NULL, NULL, NULL, uv_00046DF8, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 5, poly_00046BB4, NULL, NULL, NULL, uv_00046E18, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 3, poly_00046BFA, NULL, NULL, NULL, uv_00046E90, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 6, poly_00046C28, NULL, NULL, NULL, uv_00046EE0, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 2, poly_00046C68, NULL, NULL, NULL, uv_00046F48, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 2, poly_00046C94, NULL, NULL, NULL, uv_00046F98, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000470D8[] = {
	{ 94.9891f, 363.8022f, -161.4166f },
	{ 84.98911f, 366.3903f, -151.7573f },
	{ 84.98911f, 365.3608f, -140.5995f },
	{ 94.9891f, 365.3608f, -140.5995f },
	{ 84.98911f, 172.1756f, -88.83583f },
	{ 94.9891f, 172.1756f, -88.83583f },
	{ 94.98909f, 268.7682f, -114.7177f },
	{ 84.9891f, 268.7682f, -114.7177f },
	{ 84.98911f, 341.2126f, -134.1291f },
	{ 94.9891f, 341.2126f, -134.1291f },
	{ 84.98911f, 91.60255f, -41.3334f },
	{ 94.9891f, 91.60255f, -41.3334f },
	{ 84.98887f, -200, 127.0236f },
	{ 94.98862f, -200, 127.0236f },
	{ 84.98911f, 342.2422f, -145.2868f },
	{ 84.98911f, 269.7977f, -125.8754f },
	{ 84.98911f, 173.2051f, -99.99361f },
	{ 84.98911f, -200, 115.4762f },
	{ 94.98911f, -200, 103.9292f },
	{ 94.9891f, 81.60257f, -58.65393f },
	{ 94.9891f, 170.617f, -109.6529f },
	{ 94.9891f, 267.2095f, -135.5347f },
	{ 94.9891f, 339.654f, -154.9461f },
	{ -95.01086f, 342.2422f, -145.2868f },
	{ -105.0108f, 341.2126f, -134.1291f },
	{ -95.01087f, 341.2126f, -134.1291f },
	{ -105.0109f, 339.654f, -154.9461f },
	{ -95.01087f, 268.7682f, -114.7177f },
	{ -105.0109f, 268.7682f, -114.7177f },
	{ -105.0109f, 172.1756f, -88.83583f },
	{ -95.01087f, 172.1756f, -88.83585f },
	{ -95.01086f, 317.0645f, -127.6586f },
	{ -105.0108f, 317.0645f, -127.6586f },
	{ -105.0109f, 91.60255f, -41.3334f },
	{ -95.01087f, 91.60255f, -41.3334f },
	{ -105.0114f, -200, 127.0236f },
	{ -95.60706f, -200, 127.0234f },
	{ -105.0109f, 315.5058f, -148.4756f },
	{ -105.0109f, 267.2095f, -135.5347f },
	{ -105.0109f, 170.617f, -109.6529f },
	{ -105.0109f, 81.60257f, -58.65392f },
	{ -105.0109f, -200, 103.9292f },
	{ -95.01086f, -200, 115.4762f },
	{ -95.01087f, 173.2051f, -99.99361f },
	{ -95.01086f, 269.7977f, -125.8755f },
	{ -95.01088f, 318.094f, -138.8164f },
	{ -25.01087f, 334.9977f, -143.3457f },
	{ -25.01086f, 332.4095f, -153.005f },
	{ -65.01086f, 353.1088f, -148.1986f },
	{ -70.01088f, 350.5207f, -157.8578f },
	{ 19.98912f, 335.428f, -153.8138f },
	{ 17.48912f, 338.0163f, -144.1545f },
	{ 49.98911f, 357.7651f, -159.799f },
	{ 44.98912f, 360.3532f, -150.1397f },
	{ -95.0111f, -81.60269f, 58.66656f },
	{ -105.0111f, -81.60271f, 58.66628f },
	{ -105.0111f, 4.999989f, 8.66654f },
	{ -95.0111f, 4.999989f, 8.666545f },
	{ -95.0111f, -86.60269f, 50.00602f },
	{ -105.0111f, -91.60256f, 41.34597f },
	{ -95.0111f, 0, 0.006281f },
	{ -105.0111f, -4.999996f, -8.653976f },
	{ 84.98887f, -81.60269f, 58.66655f },
	{ 94.98862f, -81.60281f, 58.66634f },
	{ 84.98862f, -86.60279f, 50.00608f },
	{ 94.98887f, -91.60256f, 41.34597f },
	{ 94.98887f, -5.000118f, -8.654181f },
	{ 84.98862f, -0.000122f, 0.006069f },
	{ 94.98862f, 4.999866f, 8.666333f },
	{ 84.98887f, 4.999866f, 8.666333f },
	{ -95.01111f, 86.60257f, -49.99366f },
	{ 84.98887f, 86.60246f, -49.99361f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00047438[] = {
	{ 0.561833f, 0.465414f, -0.68391f },
	{ -0.17292f, 0.97603f, 0.132154f },
	{ -0.583206f, 0.6508279f, 0.4861f },
	{ 0.5878299f, 0.65976f, 0.468157f },
	{ -0.738803f, 0.260731f, 0.621442f },
	{ 0.738803f, 0.260731f, 0.621442f },
	{ 0.707106f, 0.183012f, 0.683013f },
	{ -0.7071069f, 0.183012f, 0.6830119f },
	{ -0.7071069f, 0.183013f, 0.683013f },
	{ 0.7071069f, 0.183013f, 0.683013f },
	{ -0.706074f, 0.356858f, 0.611646f },
	{ 0.706083f, 0.356851f, 0.61164f },
	{ -0.554707f, 0.416023f, 0.7205729f },
	{ 0.554694f, 0.416029f, 0.720579f },
	{ -0.7071069f, 0.183012f, 0.6830119f },
	{ -0.7071069f, 0.183012f, 0.683013f },
	{ -0.678874f, 0.280987f, 0.678363f },
	{ -0.800011f, 0.299991f, 0.519604f },
	{ 0.800009f, -0.299994f, -0.519605f },
	{ 0.7067339f, -0.352722f, -0.613282f },
	{ 0.679217f, -0.279739f, -0.678536f },
	{ 0.7071069f, -0.183012f, -0.6830119f },
	{ 0.7071069f, -0.183012f, -0.683013f },
	{ 0.043944f, 0.934594f, 0.352991f },
	{ -0.603213f, 0.628918f, 0.490506f },
	{ 0.598273f, 0.612601f, 0.516517f },
	{ -0.638405f, 0.393979f, -0.661226f },
	{ 0.7071069f, 0.183012f, 0.683013f },
	{ -0.707106f, 0.183013f, 0.683013f },
	{ -0.738803f, 0.260731f, 0.621442f },
	{ 0.738804f, 0.260729f, 0.6214409f },
	{ 0.707108f, 0.183012f, 0.6830119f },
	{ -0.707106f, 0.183013f, 0.683013f },
	{ -0.706083f, 0.356854f, 0.611639f },
	{ 0.7060919f, 0.356849f, 0.611632f },
	{ -0.554696f, 0.416029f, 0.720578f },
	{ 0.538943f, 0.419138f, 0.73066f },
	{ -0.7071069f, -0.183012f, -0.683013f },
	{ -0.7071069f, -0.183012f, -0.683013f },
	{ -0.679217f, -0.279739f, -0.678536f },
	{ -0.706733f, -0.352721f, -0.613283f },
	{ -0.799989f, -0.300008f, -0.519627f },
	{ 0.778416f, 0.31104f, 0.545274f },
	{ 0.678874f, 0.280986f, 0.678363f },
	{ 0.7071069f, 0.183012f, 0.683013f },
	{ 0.707108f, 0.183013f, 0.6830119f },
	{ 0.11726f, 0.806702f, 0.579208f },
	{ 0.11556f, 0.409797f, -0.904827f },
	{ 0.101713f, 0.917753f, 0.383906f },
	{ -0.06646799f, 0.600293f, -0.797014f },
	{ -0.233221f, 0.31588f, -0.919689f },
	{ -0.210291f, 0.796824f, 0.566436f },
	{ -0.233469f, 0.458879f, -0.857276f },
	{ -0.389787f, 0.85081f, 0.352404f },
	{ 0.707099f, 0.353492f, 0.612416f },
	{ -0.7071159f, 0.353549f, 0.6123649f },
	{ -0.7071069f, 0.353554f, 0.612372f },
	{ 0.7071069f, 0.353552f, 0.612373f },
	{ 0.7071069f, 0.353553f, 0.612372f },
	{ -0.7071069f, -0.353553f, -0.612373f },
	{ 0.707108f, 0.353551f, 0.612373f },
	{ -0.7071069f, -0.353552f, -0.612373f },
	{ -0.7070889f, 0.353564f, 0.612386f },
	{ 0.7071109f, 0.353553f, 0.612367f },
	{ -0.707097f, 0.353558f, 0.612381f },
	{ 0.7071109f, -0.353551f, -0.6123689f },
	{ 0.70711f, -0.353553f, -0.6123689f },
	{ -0.707097f, 0.353558f, 0.612381f },
	{ 0.7071019f, 0.353553f, 0.6123779f },
	{ -0.707099f, 0.353557f, 0.61238f },
	{ 0.7071159f, 0.353548f, 0.6123649f },
	{ -0.7070979f, 0.353558f, 0.612379f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00047798 = { vertex_000470D8, normal_00047438, LengthOfArray<Sint32>(vertex_000470D8), meshlist_00046FE8, matlist_00046A20, LengthOfArray<Uint16>(meshlist_00046FE8), LengthOfArray<Uint16>(matlist_00046A20), { -5.01112f, 83.19512f, -17.19648f }, 308.7382f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000477C0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00047798, 439.0005f, 0, -5448, 0, 0xFFFFC71D, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000477F4[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 89, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 89, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 87, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 52, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00047844[] = {
	4, 120, 119, 61, 63,
	0x8000u | 8, 1, 178, 4, 8, 124, 126, 6, 8,
	0x8000u | 6, 177, 0, 7, 5, 2, 125,
	4, 121, 122, 68, 66,
	10, 68, 62, 121, 64, 63, 66, 65, 120, 67, 61,
	0x8000u | 6, 66, 120, 122, 119, 121, 63,
	11, 76, 70, 79, 72, 77, 71, 78, 69, 82, 75, 73,
	0x8000u | 5, 79, 81, 77, 80, 78,
	4, 96, 97, 142, 140,
	4, 98, 94, 95, 92,
	8, 92, 136, 95, 137, 98, 138, 94, 135,
	4, 104, 105, 130, 132,
	3, 131, 99, 129,
	3, 134, 106, 133,
	0x8000u | 11, 133, 103, 106, 102, 134, 128, 133, 127, 103, 100, 102,
	4, 124, 123, 6, 3,
	9, 132, 131, 130, 129, 104, 99, 105, 101, 132,
	0x8000u | 7, 72, 71, 74, 73, 80, 82, 78,
	3, 139, 91, 141,
	9, 140, 139, 142, 141, 96, 91, 97, 93, 140,
	4, 136, 135, 137, 138,
	5, 80, 74, 81, 76, 79
};

extern "C" __declspec(dllexport) Sint16 poly_00047978[] = {
	4, 178, 8, 3, 6,
	0x8000u | 6, 116, 115, 118, 117, 84, 90,
	3, 125, 0, 5,
	4, 1, 123, 4, 124,
	3, 7, 177, 2,
	0x8000u | 10, 10, 12, 18, 17, 14, 16, 20, 19, 13, 15,
	0x8000u | 10, 27, 25, 31, 32, 28, 26, 29, 30, 24, 22,
	0x8000u | 12, 39, 37, 45, 46, 40, 38, 42, 44, 41, 43, 36, 34,
	0x8000u | 12, 51, 49, 57, 58, 52, 50, 59, 60, 53, 54, 48, 47,
	8, 90, 88, 117, 87, 115, 89, 116, 83,
	3, 112, 111, 149,
	9, 111, 147, 149, 150, 112, 108, 111, 110, 147,
	9, 114, 144, 146, 145, 113, 109, 114, 107, 144,
	3, 113, 114, 146,
	4, 144, 143, 145, 109,
	4, 147, 148, 150, 108,
	4, 87, 88, 85, 86,
	3, 178, 157, 172,
	8, 166, 167, 168, 177, 164, 152, 163, 161,
	10, 169, 162, 160, 152, 159, 158, 179, 154, 176, 180,
	3, 162, 161, 152,
	3, 164, 165, 168,
	4, 173, 175, 154, 180,
	0x8000u | 7, 173, 174, 154, 170, 178, 171, 172
};

extern "C" __declspec(dllexport) Sint16 poly_00047ACC[] = {
	6, 18, 10, 14, 9, 20, 13,
	3, 30, 22, 21,
	3, 43, 34, 33,
	3, 35, 36, 41,
	3, 54, 47, 55,
	3, 57, 51, 56,
	4, 177, 155, 152, 151,
	3, 56, 48, 53,
	0x8000u | 5, 57, 52, 56, 59, 53,
	3, 55, 49, 58,
	0x8000u | 5, 54, 60, 55, 50, 58,
	3, 45, 39, 35,
	0x8000u | 5, 45, 40, 35, 42, 41,
	3, 33, 37, 46,
	0x8000u | 5, 43, 44, 33, 38, 46,
	6, 31, 27, 28, 23, 29, 24,
	0x8000u | 5, 30, 26, 21, 32, 25,
	0x8000u | 6, 15, 19, 11, 16, 12, 17,
	4, 156, 178, 153, 154
};

extern "C" __declspec(dllexport) Sint16 poly_00047B8E[] = {
	6, 83, 85, 116, 86, 118, 84,
	3, 155, 156, 153,
	0x8000u | 6, 155, 151, 153, 152, 154, 158
};

NJS_TEX uv_00047BB4[] = {
	{ 28, 157 },
	{ 0, 157 },
	{ 0, 227 },
	{ 0, 227 },
	{ 466, 0 },
	{ 510, 0 },
	{ 466, 14 },
	{ 510, 16 },
	{ 466, 46 },
	{ 498, 46 },
	{ 510, 44 },
	{ 510, 16 },
	{ 510, 255 },
	{ 466, 255 },
	{ 510, 237 },
	{ 466, 226 },
	{ 510, 255 },
	{ 466, 255 },
	{ 0, 104 },
	{ 28, 104 },
	{ 28, 50 },
	{ 28, 50 },
	{ 28, 50 },
	{ 0, 50 },
	{ 0, 104 },
	{ 0, 50 },
	{ 0, 227 },
	{ 28, 50 },
	{ 28, 227 },
	{ 28, 157 },
	{ 28, 227 },
	{ 0, 227 },
	{ 28, 50 },
	{ 28, 157 },
	{ 28, 104 },
	{ 0, 157 },
	{ 0, 104 },
	{ 0, 227 },
	{ 262, 26 },
	{ 231, 26 },
	{ 231, 66 },
	{ 231, 26 },
	{ 231, 136 },
	{ 231, 246 },
	{ 231, 210 },
	{ 231, 246 },
	{ 262, 210 },
	{ 262, 246 },
	{ 262, 246 },
	{ 231, 66 },
	{ 262, 66 },
	{ 231, 136 },
	{ 262, 136 },
	{ 231, 210 },
	{ 120, 194 },
	{ 139, 194 },
	{ 139, 168 },
	{ 139, 246 },
	{ 139, 79 },
	{ 139, 26 },
	{ 120, 79 },
	{ 120, 26 },
	{ 120, 26 },
	{ 120, 26 },
	{ 120, 79 },
	{ 120, 108 },
	{ 139, 79 },
	{ 139, 113 },
	{ 139, 26 },
	{ 139, 26 },
	{ 328, 236 },
	{ 340, 236 },
	{ 340, 213 },
	{ 340, 253 },
	{ 328, 253 },
	{ 328, 253 },
	{ 328, 213 },
	{ 340, 56 },
	{ 340, 53 },
	{ 328, 56 },
	{ 328, 56 },
	{ 328, 53 },
	{ 340, 53 },
	{ 340, 12 },
	{ 340, 56 },
	{ 340, 12 },
	{ 328, 56 },
	{ 328, 12 },
	{ 328, 53 },
	{ 328, 12 },
	{ 340, 12 },
	{ 466, 46 },
	{ 466, 0 },
	{ 510, 44 },
	{ 510, 0 },
	{ 340, 253 },
	{ 328, 253 },
	{ 340, 213 },
	{ 328, 213 },
	{ 328, 236 },
	{ 328, 253 },
	{ 340, 236 },
	{ 340, 253 },
	{ 340, 253 },
	{ 231, 26 },
	{ 231, 246 },
	{ 262, 26 },
	{ 262, 246 },
	{ 262, 136 },
	{ 262, 210 },
	{ 231, 210 },
	{ 120, 246 },
	{ 120, 246 },
	{ 120, 168 },
	{ 139, 246 },
	{ 120, 246 },
	{ 139, 168 },
	{ 120, 168 },
	{ 120, 194 },
	{ 120, 246 },
	{ 139, 194 },
	{ 139, 246 },
	{ 139, 246 },
	{ 120, 26 },
	{ 139, 26 },
	{ 120, 108 },
	{ 139, 113 },
	{ 262, 136 },
	{ 262, 26 },
	{ 262, 66 },
	{ 262, 26 },
	{ 231, 66 }
};

NJS_TEX uv_00047DC4[] = {
	{ 166, 0 },
	{ 166, 16 },
	{ 180, 0 },
	{ 180, 44 },
	{ 254, 175 },
	{ 238, 175 },
	{ 248, 120 },
	{ 238, 120 },
	{ 248, 99 },
	{ 238, 99 },
	{ 177, 255 },
	{ 166, 255 },
	{ 178, 226 },
	{ 166, 0 },
	{ 178, 0 },
	{ 166, 14 },
	{ 178, 46 },
	{ 178, 237 },
	{ 166, 255 },
	{ 178, 255 },
	{ 0, 23 },
	{ 0 },
	{ 97, 23 },
	{ 129, 0 },
	{ 160, 23 },
	{ 165, 0 },
	{ 204, 23 },
	{ 204, 0 },
	{ 254, 23 },
	{ 254, 0 },
	{ 254, 74 },
	{ 254, 98 },
	{ 222, 74 },
	{ 222, 98 },
	{ 184, 74 },
	{ 184, 98 },
	{ 34, 74 },
	{ 34, 98 },
	{ 0, 74 },
	{ 0, 98 },
	{ 254, 154 },
	{ 254, 180 },
	{ 225, 154 },
	{ 233, 180 },
	{ 166, 154 },
	{ 169, 180 },
	{ 70, 154 },
	{ 74, 180 },
	{ 33, 154 },
	{ 33, 180 },
	{ 0, 154 },
	{ 0, 180 },
	{ 254, 236 },
	{ 254, 254 },
	{ 218, 236 },
	{ 218, 254 },
	{ 165, 236 },
	{ 165, 254 },
	{ 116, 236 },
	{ 118, 254 },
	{ 86, 236 },
	{ 105, 254 },
	{ 19, 236 },
	{ 19, 254 },
	{ 238, 99 },
	{ 238, 99 },
	{ 238, 120 },
	{ 238, 209 },
	{ 238, 175 },
	{ 238, 209 },
	{ 254, 175 },
	{ 248, 209 },
	{ 218, 64 },
	{ 215, 64 },
	{ 215, 91 },
	{ 215, 64 },
	{ 215, 0 },
	{ 215, 91 },
	{ 218, 91 },
	{ 218, 64 },
	{ 218, 0 },
	{ 215, 64 },
	{ 215, 0 },
	{ 215, 0 },
	{ 218, 221 },
	{ 218, 255 },
	{ 218, 198 },
	{ 215, 198 },
	{ 215, 221 },
	{ 215, 255 },
	{ 218, 221 },
	{ 218, 255 },
	{ 218, 255 },
	{ 215, 221 },
	{ 218, 221 },
	{ 218, 198 },
	{ 218, 255 },
	{ 215, 255 },
	{ 215, 198 },
	{ 215, 255 },
	{ 215, 0 },
	{ 218, 0 },
	{ 218, 91 },
	{ 218, 0 },
	{ 238, 209 },
	{ 238, 99 },
	{ 248, 209 },
	{ 248, 99 },
	{ 166, 0 },
	{ 166, 41 },
	{ 157, 42 },
	{ 141, 240 },
	{ 146, 250 },
	{ 137, 251 },
	{ 166, 255 },
	{ 99, 239 },
	{ 0, 255 },
	{ 86, 225 },
	{ 82, 214 },
	{ 54, 198 },
	{ 59, 212 },
	{ 40, 203 },
	{ 0, 255 },
	{ 20, 175 },
	{ 0, 124 },
	{ 20, 124 },
	{ 0 },
	{ 32, 104 },
	{ 57, 104 },
	{ 59, 212 },
	{ 82, 214 },
	{ 0, 255 },
	{ 99, 239 },
	{ 115, 236 },
	{ 137, 251 },
	{ 90, 69 },
	{ 82, 72 },
	{ 0 },
	{ 57, 104 },
	{ 90, 69 },
	{ 117, 53 },
	{ 0 },
	{ 134, 45 },
	{ 166, 0 },
	{ 146, 35 },
	{ 157, 42 }
};

NJS_TEX uv_0004800C[] = {
	{ 146, 0 },
	{ 11, 0 },
	{ 208, 55 },
	{ 11, 243 },
	{ 255, 87 },
	{ 255, 243 },
	{ 60, 0 },
	{ 11, 0 },
	{ 11, 243 },
	{ 58, 0 },
	{ 11, 0 },
	{ 11, 243 },
	{ 11, 243 },
	{ 11, 0 },
	{ 58, 0 },
	{ 158, 0 },
	{ 11, 61 },
	{ 11, 243 },
	{ 255, 131 },
	{ 255, 243 },
	{ 11, 243 },
	{ 255, 0 },
	{ 255, 243 },
	{ 11, 0 },
	{ 11, 243 },
	{ 11, 243 },
	{ 11, 61 },
	{ 131, 0 },
	{ 255, 131 },
	{ 220, 45 },
	{ 11, 243 },
	{ 156, 37 },
	{ 131, 0 },
	{ 11, 243 },
	{ 255, 243 },
	{ 255, 131 },
	{ 158, 0 },
	{ 164, 27 },
	{ 11, 243 },
	{ 220, 45 },
	{ 255, 131 },
	{ 255, 153 },
	{ 255, 243 },
	{ 11, 243 },
	{ 255, 153 },
	{ 189, 118 },
	{ 11, 243 },
	{ 85, 52 },
	{ 58, 0 },
	{ 11, 243 },
	{ 255, 243 },
	{ 255, 176 },
	{ 58, 0 },
	{ 95, 44 },
	{ 11, 243 },
	{ 201, 102 },
	{ 255, 176 },
	{ 255, 145 },
	{ 255, 243 },
	{ 205, 135 },
	{ 11, 243 },
	{ 60, 0 },
	{ 11, 0 },
	{ 60, 0 },
	{ 205, 135 },
	{ 11, 243 },
	{ 255, 145 },
	{ 255, 243 },
	{ 255, 243 },
	{ 255, 87 },
	{ 11, 243 },
	{ 223, 39 },
	{ 11, 0 },
	{ 191, 0 },
	{ 255, 243 },
	{ 255, 0 },
	{ 11, 243 },
	{ 11, 0 }
};

NJS_TEX uv_00048144[] = {
	{ 492, 209 },
	{ 470, 209 },
	{ 510, 175 },
	{ 470, 99 },
	{ 492, 120 },
	{ 492, 99 },
	{ 510, 255 },
	{ 510, 0 },
	{ 225, 0 },
	{ 510, 255 },
	{ 225, 255 },
	{ 225, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 124 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00048180[] = {
	{ NJD_MESHSET_TRIMESH | 0, 22, poly_00047844, NULL, NULL, NULL, uv_00047BB4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 24, poly_00047978, NULL, NULL, NULL, uv_00047DC4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 19, poly_00047ACC, NULL, NULL, NULL, uv_0004800C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 3, poly_00047B8E, NULL, NULL, NULL, uv_00048144, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000481E0[] = {
	{ 93.99994f, -175, 82.99997f },
	{ 93.99994f, 175, 82.99996f },
	{ 109.9999f, -175, 60.99997f },
	{ 109.9999f, 175, 55.99997f },
	{ 93.99994f, 154.5f, 82.99996f },
	{ 93.99994f, -135.5f, 60.99997f },
	{ 109.9999f, 114.5f, 55.99997f },
	{ 109.9999f, -150.5f, 60.99997f },
	{ 109.9999f, 152.5f, 82.99996f },
	{ -111.0001f, 78.99997f, -84.00002f },
	{ -111.0001f, 78.99997f, 82.99997f },
	{ -111.0001f, 101, -84.00002f },
	{ -111.0001f, 101, 82.99997f },
	{ 109.9999f, 78.99997f, -84.00002f },
	{ 67.99994f, 78.99997f, 44.99997f },
	{ 109.9999f, 101, -84.00002f },
	{ 80.99994f, 101, 55.99997f },
	{ 52.49993f, 101, 82.99997f },
	{ 11.49994f, 78.99997f, 82.99997f },
	{ 109.9999f, 101, 22.99997f },
	{ 109.9999f, 78.99997f, 22.99997f },
	{ -111.0001f, 9.999972f, -84.00002f },
	{ -111.0001f, 9.999973f, 82.99997f },
	{ -111.0001f, 31.99997f, -84.00002f },
	{ -111.0001f, 31.99997f, 82.99997f },
	{ 109.9999f, 9.999973f, -84.00002f },
	{ 64.99994f, 9.999973f, -10.00003f },
	{ 109.9999f, 31.99997f, -84.00002f },
	{ 64.99994f, 31.99997f, -10.00003f },
	{ -67.00005f, 31.99997f, 82.99997f },
	{ -67.00005f, 9.999973f, 82.99997f },
	{ 109.9999f, 31.99997f, -16.50003f },
	{ 109.9999f, 9.999973f, -16.50003f },
	{ -111.0001f, -66.00002f, -84.00002f },
	{ -111.0001f, -66.00002f, 82.99997f },
	{ -111.0001f, -42.00003f, -84.00002f },
	{ -111.0001f, -42.00003f, 82.99997f },
	{ 109.9999f, -66.00002f, -84.00002f },
	{ 60.99993f, -66.00002f, 12.99997f },
	{ 109.9999f, -42.00003f, -84.00002f },
	{ 49.99993f, -42.00003f, 1.999974f },
	{ -69.00005f, -42.00003f, 82.99997f },
	{ -44.00006f, -42.00003f, 46.99997f },
	{ -69.00005f, -66.00002f, 82.99997f },
	{ -35.00006f, -66.00002f, 52.99997f },
	{ 109.9999f, -42.00003f, -22.50002f },
	{ 109.9999f, -66.00002f, -38.50003f },
	{ -111.0001f, -135, 40.99997f },
	{ -111.0001f, -118, 40.99997f },
	{ 109.9999f, -135, -84.00002f },
	{ 78.99994f, -135, 51.99997f },
	{ 109.9999f, -118, -84.00002f },
	{ 78.99994f, -118, 51.99997f },
	{ -2.000063f, -118, 82.99997f },
	{ 21.99994f, -135, 82.99997f },
	{ -111.0001f, -135, -84.00002f },
	{ -111.0001f, -118, -84.00002f },
	{ 109.9999f, -118, -7.500025f },
	{ 109.9999f, -135, -7.500025f },
	{ 20.49994f, -118, 57.49997f },
	{ 27.49994f, -135, 64.49997f },
	{ -84.00005f, -137, 82.99997f },
	{ -84.00005f, 106, 82.99997f },
	{ -84.00005f, -137, 44.99997f },
	{ -84.00005f, 106, 44.99997f },
	{ -73.00005f, -137, 44.99997f },
	{ -73.00005f, 106, 44.99997f },
	{ -73.00005f, -137, 82.99997f },
	{ -73.00005f, 106, 82.99997f },
	{ 3.999937f, -163, 82.99997f },
	{ 3.999937f, 138, 82.99996f },
	{ 3.999937f, -163, 21.99997f },
	{ 3.999937f, 138, 21.99997f },
	{ 15.99994f, -163, 21.99997f },
	{ 15.99994f, 138, 21.99997f },
	{ 15.99994f, -163, 82.99997f },
	{ 15.99994f, 138, 82.99996f },
	{ 3.999937f, -12.50003f, 65.99997f },
	{ 3.999937f, -113.75f, 82.99997f },
	{ 3.999937f, 83.74997f, 82.99997f },
	{ 15.99994f, -12.50003f, 65.99997f },
	{ 15.99994f, 83.74997f, 82.99997f },
	{ 15.99994f, -113.75f, 82.99997f },
	{ 109.9999f, -113, -71.00002f },
	{ 109.9999f, 37.99997f, -71.00002f },
	{ 93.99994f, -113, -71.00002f },
	{ 93.99994f, 37.99997f, -71.00002f },
	{ 93.99994f, -113, -53.00003f },
	{ 93.99994f, 37.99997f, -53.00003f },
	{ 109.9999f, -113, -53.00003f },
	{ 109.9999f, 37.99997f, -53.00003f },
	{ -38.00006f, -163, 82.99997f },
	{ -38.00006f, 138, 82.99996f },
	{ -31.00006f, -163, 82.99997f },
	{ -31.00006f, 138, 82.99996f },
	{ -38.00006f, 65.74997f, 82.99997f },
	{ -38.00006f, -91.75002f, 82.99997f },
	{ -31.00006f, -91.75002f, 82.99997f },
	{ -31.00006f, 65.74997f, 82.99997f },
	{ 40.99993f, -173, 82.99997f },
	{ 40.99993f, 158, 67.99996f },
	{ 45.99993f, -173, 82.99997f },
	{ 45.99993f, 158, 67.99996f },
	{ 40.99993f, 101.5f, 61.99997f },
	{ 40.99993f, -149.5f, 82.99997f },
	{ 45.99993f, -149.5f, 82.99997f },
	{ 45.99993f, 101.5f, 61.99997f },
	{ 109.9999f, -175, -16.00002f },
	{ 109.9999f, 174, -16.00003f },
	{ 109.9999f, -175, -10.00002f },
	{ 109.9999f, 174, -10.00003f },
	{ 109.9999f, 86.74997f, -10.00003f },
	{ 109.9999f, 86.74997f, -16.00003f },
	{ 109.9999f, -128.875f, -10.00002f },
	{ 109.9999f, -128.875f, -16.00002f },
	{ 109.9999f, -65.50002f, -53.00003f },
	{ 109.9999f, -65.50002f, -84.00002f },
	{ 109.9999f, 10.24997f, -53.00003f },
	{ 109.9999f, 10.24997f, -71.00002f },
	{ -84.00005f, -41.50003f, 82.99997f },
	{ -73.00005f, -41.50003f, 82.99997f },
	{ -84.00005f, 32.24997f, 82.99997f },
	{ -73.00005f, 32.24997f, 82.99997f },
	{ 93.99994f, 175, 60.99997f },
	{ 93.99994f, 110.9231f, 60.99997f },
	{ 93.99994f, -175, 62.32155f },
	{ 105.674f, 111.2688f, 61.91122f },
	{ 40.77158f, 158, 60.99997f },
	{ 45.71526f, 158, 60.99997f },
	{ 40.99993f, -118, 58.74894f },
	{ 45.99993f, -118, 58.74894f },
	{ 40.99993f, -173, 58.74894f },
	{ 45.99993f, -173, 58.74894f },
	{ 40.77158f, 97.99997f, 60.99997f },
	{ 45.71526f, 97.99997f, 60.99997f },
	{ -31.00006f, 138, 60.99997f },
	{ -38.00006f, 138, 60.99997f },
	{ -38.00006f, 25.65787f, 60.99997f },
	{ -31.00006f, 19.52808f, 57.63633f },
	{ -38.00006f, -163, 60.99997f },
	{ -31.00006f, -163, 60.99997f },
	{ -38.00006f, -56.93753f, 60.99997f },
	{ -31.00006f, -56.93753f, 60.99997f },
	{ 93.99994f, -175, -10.00002f },
	{ 93.99994f, -175, -16.00002f },
	{ 93.99994f, -96.7841f, -10.00002f },
	{ 93.99994f, -96.7841f, -16.00002f },
	{ 93.99994f, 174, -10.00003f },
	{ 93.99994f, 174, -16.00003f },
	{ 93.99994f, 49.02024f, -10.00003f },
	{ 93.99994f, 49.02024f, -16.00003f },
	{ -111.0001f, -175, -84.00002f },
	{ -111.0001f, -175, 82.99997f },
	{ -111.0001f, 175, -84.00003f },
	{ -111.0001f, 175, 82.99996f },
	{ 109.9999f, -175, -84.00002f },
	{ 109.9999f, 175, -84.00003f },
	{ 109.9999f, 117.3874f, 82.99996f },
	{ -110.9789f, 3.807103f, 83.42838f },
	{ -84.00005f, -66.00002f, 82.99997f },
	{ -57.00006f, -105, 82.99997f },
	{ -2.000063f, -119, 82.99997f },
	{ -32.00006f, -117, 82.99997f },
	{ 3.999937f, -135, 82.99997f },
	{ 20.99994f, -154, 82.99997f },
	{ 41.99993f, -150, 82.99997f },
	{ 76.99994f, -155, 82.99997f },
	{ 82.99994f, -169, 82.99997f },
	{ 71.99994f, -170, 82.99997f },
	{ -38.00006f, -97.00002f, 82.99997f },
	{ 67.99994f, 113, 82.99996f },
	{ 83.99994f, 126, 82.99996f },
	{ 97.99994f, 117, 82.99996f },
	{ 8.999936f, 78.99997f, 82.99997f },
	{ 44.99993f, 101, 82.99997f },
	{ -1.000063f, 74.99997f, 82.99997f },
	{ -68.00005f, 31.99997f, 82.99997f },
	{ 109.9999f, -175, 82.99997f },
	{ 109.9999f, 175, 82.99996f },
	{ -84.00005f, 3.999974f, 82.99997f },
	{ -34.00006f, 31.99997f, 82.99997f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00048A5C[] = {
	{ -0.5603189f, 0.469243f, 0.682535f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.677384f, -0.015187f, -0.735472f },
	{ 0.592337f, 0, -0.8056909f },
	{ -0.66836f, -0.15929f, 0.726582f },
	{ -0.7266f, 0.683974f, -0.065055f },
	{ 0.628619f, -0.476585f, -0.614577f },
	{ 0.388015f, 0.821767f, -0.417306f },
	{ 0.647258f, -0.192966f, 0.737442f },
	{ 0, -1, 0 },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.273471f, -0.89373f, 0.355611f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.549296f, 0.434855f, 0.713565f },
	{ 0.449723f, 0.41686f, 0.789922f },
	{ 0.083651f, -0.690405f, 0.7185709f },
	{ 0.7965479f, 0.50171f, 0.337339f },
	{ 0.594662f, -0.763514f, 0.25184f },
	{ 0, -1, 0 },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.23871f, -0.763501f, 0.600069f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.23871f, 0.763501f, 0.600069f },
	{ 0.230849f, 0.645012f, 0.72847f },
	{ 0.230849f, -0.645012f, 0.72847f },
	{ 0.612963f, 0.5852709f, 0.530786f },
	{ 0.612963f, -0.5852709f, 0.530786f },
	{ 0, -1, 0 },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.44835f, -0.432331f, 0.782351f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.230032f, 0.878393f, 0.41894f },
	{ 0.325221f, 0.60479f, 0.726952f },
	{ 0.322502f, 0.851887f, 0.412652f },
	{ 0.312169f, -0.644715f, 0.697778f },
	{ 0.443316f, -0.653421f, 0.613606f },
	{ 0.502807f, 0.796264f, 0.336376f },
	{ 0.814934f, -0.527506f, 0.240043f },
	{ -0.210471f, -0.7668329f, 0.606358f },
	{ -0.20644f, 0.776958f, 0.594743f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.454413f, -0.63171f, 0.628054f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.465911f, 0.606846f, 0.643945f },
	{ -0.067695f, 0.711431f, 0.699488f },
	{ 0.510006f, -0.115341f, 0.852403f },
	{ 0, -1, 0 },
	{ 0, 1, 0 },
	{ 0.7320139f, 0.657284f, 0.179257f },
	{ 0.7320139f, -0.657284f, 0.179257f },
	{ 0.1894f, 0.927738f, 0.321606f },
	{ 0.326121f, -0.712674f, 0.621081f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ -0.747387f, -0.002814f, 0.664382f },
	{ -0.688877f, 0.060222f, 0.722372f },
	{ -0.6879759f, -0.063356f, 0.722963f },
	{ 0.747387f, -0.002814f, 0.664382f },
	{ 0.6879759f, -0.063356f, 0.722963f },
	{ 0.688877f, 0.060222f, 0.722372f },
	{ 0.6545849f, -0.049405f, -0.7543719f },
	{ 0.564182f, -0.053957f, -0.823886f },
	{ -0.825651f, -0.03687f, -0.5629759f },
	{ -0.825651f, -0.03687f, -0.5629759f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ -0.6552539f, -0.187576f, 0.73175f },
	{ -0.6495439f, 0.21143f, 0.730335f },
	{ 0.6495439f, 0.21143f, 0.730335f },
	{ 0.6552539f, -0.187576f, 0.73175f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.661297f, -0.079214f, 0.74593f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.707066f, -0.07467499f, 0.7031929f },
	{ -0.659079f, -0.141375f, 0.738666f },
	{ -0.641266f, 0.247228f, 0.7263989f },
	{ 0.641266f, 0.247228f, 0.7263989f },
	{ 0.7206939f, -0.135279f, 0.679926f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.731964f, -0.148789f, 0.664899f },
	{ 0.731964f, -0.148789f, -0.664899f },
	{ 0.732143f, 0.172397f, 0.658973f },
	{ 0.732143f, 0.172397f, -0.658973f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.564182f, -0.053957f, -0.823886f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.627587f, -0.050879f, -0.776882f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ -0.8056909f, 0, -0.592336f },
	{ -0.659714f, -0.745041f, -0.098444f },
	{ -0.7427059f, -0.013824f, -0.669475f },
	{ 0.357624f, -0.864208f, 0.353907f },
	{ -0.727914f, -0.004628f, -0.685653f },
	{ 0.680263f, 0.005392f, -0.7329479f },
	{ -0.543916f, 0.79439f, -0.270369f },
	{ 0.543916f, 0.79439f, -0.270369f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.552919f, -0.808536f, -0.201373f },
	{ 0.53836f, -0.842616f, -0.012875f },
	{ 0.63241f, 0.021984f, -0.774321f },
	{ -0.781682f, 0.0177f, -0.623427f },
	{ -0.679859f, -0.729004f, -0.079661f },
	{ 0.5712399f, -0.732272f, -0.370758f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.542105f, 0.8071679f, -0.233673f },
	{ 0.542105f, 0.8071679f, -0.233673f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.192845f, 0.8189819f, 0.540444f },
	{ -0.192845f, 0.8189819f, -0.540444f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.167711f, -0.825052f, 0.5395949f },
	{ -0.167711f, -0.825052f, -0.5395949f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.576937f, 0.577648f, -0.577466f },
	{ 0.5774029f, -0.577352f, 0.577296f },
	{ 0.5767879f, -0.577595f, -0.577667f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, 0, -1 },
	{ 0.700793f, 0.000393f, -0.7133639f },
	{ -0.012292f, 0.001333f, -0.9999239f },
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
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.008819999f, -0.000488f, -0.999961f },
	{ 0.298234f, 0.874573f, 0.382333f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ -0.015879f, 0.000233f, -0.999874f },
	{ 0, 0, -1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000492D8 = { vertex_000481E0, normal_00048A5C, LengthOfArray<Sint32>(vertex_000481E0), meshlist_00048180, matlist_000477F4, LengthOfArray<Uint16>(meshlist_00048180), LengthOfArray<Uint16>(matlist_000477F4), { -0.500061f, -0.00031f, -0.285824f }, 233.8185f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00049300 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000492D8, 519.0095f, 124.9996f, -7448.978f, 0x2217, 0xFFFFC468, 0xFFFFD7E6, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00049334[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 16, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 16, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00049370[] = {
	6, 74, 72, 1, 73, 0, 5,
	3, 1, 2, 74,
	0x8000u | 8, 78, 7, 79, 6, 75, 3, 74, 2,
	0x8000u | 9, 8, 81, 9, 80, 10, 82, 11, 83, 84,
	3, 11, 12, 84,
	0x8000u | 8, 13, 85, 14, 86, 15, 87, 8, 81,
	5, 73, 76, 5, 77, 4
};

extern "C" __declspec(dllexport) Sint16 poly_000493D2[] = {
	4, 12, 13, 84, 85,
	4, 4, 77, 7, 78
};

extern "C" __declspec(dllexport) Sint16 poly_000493E6[] = {
	0x8000u | 5, 21, 18, 23, 19, 24,
	4, 25, 26, 23, 24,
	4, 28, 29, 22, 27,
	3, 33, 34, 35,
	3, 39, 40, 41,
	10, 45, 48, 49, 46, 61, 37, 58, 51, 56, 50,
	3, 39, 38, 34,
	0x8000u | 5, 34, 35, 38, 36, 47,
	0x8000u | 14, 72, 44, 74, 45, 75, 48, 31, 47, 20, 36, 17, 51, 16, 52,
	7, 28, 77, 29, 76, 71, 73, 72,
	4, 50, 51, 53, 52,
	0x8000u | 5, 55, 54, 50, 57, 53,
	0x8000u | 8, 56, 58, 60, 61, 86, 49, 87, 81,
	0x8000u | 5, 64, 62, 54, 63, 57,
	10, 43, 70, 71, 68, 29, 67, 27, 25, 22, 23,
	4, 72, 44, 71, 43,
	4, 67, 68, 34, 39,
	0x8000u | 5, 40, 41, 32, 46, 37,
	3, 40, 33, 32,
	4, 69, 66, 40, 33,
	4, 81, 80, 42, 43,
	0x8000u | 12, 80, 43, 82, 70, 65, 69, 64, 66, 62, 25, 63, 26,
	7, 83, 84, 65, 59, 64, 55, 54,
	3, 85, 60, 84,
	0x8000u | 6, 84, 59, 60, 55, 56, 50,
	3, 85, 86, 60,
	0x8000u | 6, 81, 49, 42, 45, 43, 44,
	0x8000u | 10, 77, 78, 30, 31, 21, 20, 18, 17, 19, 16,
	0x8000u | 6, 77, 30, 28, 21, 22, 23,
	0x8000u | 5, 25, 66, 67, 33, 34,
	0x8000u | 6, 51, 36, 37, 35, 32, 33,
	4, 75, 79, 31, 78,
	0x8000u | 6, 48, 46, 47, 41, 38, 39,
	0x8000u | 5, 70, 68, 69, 39, 40,
	3, 82, 83, 65
};

NJS_TEX uv_000495B4[] = {
	{ 81, 1 },
	{ 113, 1 },
	{ 113, 253 },
	{ 129, 1 },
	{ 129, 253 },
	{ 177, 253 },
	{ 113, 253 },
	{ 81, 253 },
	{ 81, 1 },
	{ 193, 1 },
	{ 193, 253 },
	{ 177, 1 },
	{ 177, 253 },
	{ 129, 1 },
	{ 129, 253 },
	{ 113, 1 },
	{ 113, 253 },
	{ 113, 253 },
	{ 113, 1 },
	{ 81, 253 },
	{ 81, 1 },
	{ 65, 253 },
	{ 65, 1 },
	{ 17, 253 },
	{ 17, 1 },
	{ 1, 1 },
	{ 17, 253 },
	{ 0, 253 },
	{ 1, 1 },
	{ 0, 253 },
	{ 1, 1 },
	{ 17, 253 },
	{ 17, 1 },
	{ 65, 253 },
	{ 65, 1 },
	{ 81, 253 },
	{ 81, 1 },
	{ 129, 1 },
	{ 177, 1 },
	{ 177, 253 },
	{ 193, 1 },
	{ 193, 253 }
};

NJS_TEX uv_0004965C[] = {
	{ 193, 253 },
	{ 253, 253 },
	{ 193, 1 },
	{ 253, 1 },
	{ 253, 253 },
	{ 253, 1 },
	{ 193, 253 },
	{ 193, 1 }
};

NJS_TEX uv_0004967C[] = {
	{ 192, -129 },
	{ 192, -225 },
	{ 254, -225 },
	{ 192, -253 },
	{ 254, -253 },
	{ 176, -225 },
	{ 176, -253 },
	{ 192, -225 },
	{ 192, -253 },
	{ 192, 157 },
	{ 176, 157 },
	{ 192, -161 },
	{ 176, -161 },
	{ 80, -97 },
	{ 112, -97 },
	{ 112, -161 },
	{ 112, -1 },
	{ 80, -1 },
	{ 80, 61 },
	{ 112, 189 },
	{ 128, 157 },
	{ 64, 157 },
	{ 64, 93 },
	{ 16, 157 },
	{ 64, -193 },
	{ 16, -161 },
	{ 16, -225 },
	{ 0, -161 },
	{ 0, -225 },
	{ 80, 61 },
	{ 112, 61 },
	{ 80, -161 },
	{ 80, -161 },
	{ 112, -161 },
	{ 112, 61 },
	{ 128, -193 },
	{ 128, 93 },
	{ 80, 253 },
	{ 80, 189 },
	{ 112, 253 },
	{ 112, 189 },
	{ 128, 253 },
	{ 128, 157 },
	{ 176, 157 },
	{ 128, 93 },
	{ 176, -161 },
	{ 128, -193 },
	{ 176, -225 },
	{ 16, -225 },
	{ 176, -253 },
	{ 16, -253 },
	{ 192, 157 },
	{ 192, 253 },
	{ 176, 157 },
	{ 176, 253 },
	{ 128, 157 },
	{ 128, 253 },
	{ 112, 253 },
	{ 0, -225 },
	{ 16, -225 },
	{ 0, -253 },
	{ 16, -253 },
	{ 192, -129 },
	{ 192, -225 },
	{ 254, -225 },
	{ 192, -253 },
	{ 254, -253 },
	{ 0, -161 },
	{ 16, -161 },
	{ 0, 157 },
	{ 16, 157 },
	{ 16, 253 },
	{ 64, 157 },
	{ 64, 253 },
	{ 80, 253 },
	{ 16, -161 },
	{ 16, -225 },
	{ 0, -225 },
	{ 16, -253 },
	{ 0, -253 },
	{ 80, 189 },
	{ 64, 157 },
	{ 128, 157 },
	{ 128, 93 },
	{ 176, 157 },
	{ 128, -193 },
	{ 176, -161 },
	{ 176, -225 },
	{ 192, -161 },
	{ 192, -225 },
	{ 112, 253 },
	{ 112, 189 },
	{ 128, 157 },
	{ 80, 189 },
	{ 128, -193 },
	{ 128, 93 },
	{ 112, -161 },
	{ 112, 61 },
	{ 112, 61 },
	{ 80, 61 },
	{ 80, -161 },
	{ 64, 93 },
	{ 64, -193 },
	{ 112, 61 },
	{ 112, -161 },
	{ 80, -161 },
	{ 64, 93 },
	{ 64, -193 },
	{ 80, 61 },
	{ 80, -161 },
	{ 80, 253 },
	{ 112, 253 },
	{ 80, 189 },
	{ 112, 189 },
	{ 80, 253 },
	{ 80, 189 },
	{ 64, 253 },
	{ 64, 157 },
	{ 16, 157 },
	{ 64, 93 },
	{ 16, -161 },
	{ 64, -193 },
	{ 16, -225 },
	{ 176, -225 },
	{ 16, -253 },
	{ 176, -253 },
	{ 16, 253 },
	{ 0, 253 },
	{ 16, 157 },
	{ 0, 157 },
	{ 16, -161 },
	{ 0, -161 },
	{ 0, -225 },
	{ 254, 253 },
	{ 254, 157 },
	{ 192, 253 },
	{ 192, 253 },
	{ 192, 157 },
	{ 254, 157 },
	{ 192, -129 },
	{ 254, -129 },
	{ 254, -225 },
	{ 0, 253 },
	{ 16, 253 },
	{ 0, 157 },
	{ 80, 253 },
	{ 64, 157 },
	{ 80, 189 },
	{ 112, 189 },
	{ 80, 253 },
	{ 112, 253 },
	{ 254, 253 },
	{ 192, 253 },
	{ 192, 157 },
	{ 176, 157 },
	{ 192, -161 },
	{ 176, -161 },
	{ 192, -225 },
	{ 176, -225 },
	{ 192, -253 },
	{ 176, -253 },
	{ 254, 253 },
	{ 192, 157 },
	{ 254, 157 },
	{ 192, -129 },
	{ 254, -129 },
	{ 254, -225 },
	{ 176, -225 },
	{ 64, -193 },
	{ 128, -193 },
	{ 80, -161 },
	{ 112, -161 },
	{ 16, -225 },
	{ 128, -193 },
	{ 64, -193 },
	{ 112, -161 },
	{ 80, -161 },
	{ 80, -97 },
	{ 128, 253 },
	{ 176, 253 },
	{ 176, 157 },
	{ 192, 253 },
	{ 128, 157 },
	{ 64, 93 },
	{ 128, 93 },
	{ 80, 61 },
	{ 112, 61 },
	{ 112, -1 },
	{ 64, 157 },
	{ 128, 93 },
	{ 64, 93 },
	{ 112, 61 },
	{ 80, 61 },
	{ 64, 253 },
	{ 16, 253 },
	{ 16, 157 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0004998C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_00049370, NULL, NULL, NULL, uv_000495B4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000493D2, NULL, NULL, NULL, uv_0004965C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 35, poly_000493E6, NULL, NULL, NULL, uv_0004967C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000499D4[] = {
	{ 46.25f, -200, -25 },
	{ 41.875f, -200, -20 },
	{ 41.875f, -200, 20 },
	{ 46.25f, -200, 25 },
	{ 66.25f, -200, -20 },
	{ 61.25f, -200, -25 },
	{ 61.25f, -200, 25 },
	{ 66.25f, -200, 20 },
	{ -41.875f, -200, 20 },
	{ -41.875f, -200, -20 },
	{ -46.25f, -200, -25 },
	{ -61.25f, -200, -25 },
	{ -66.25f, -200, -20 },
	{ -66.25f, -200, 20 },
	{ -61.25f, -200, 25 },
	{ -46.25f, -200, 25 },
	{ 52.5f, 140, 25 },
	{ 52.5f, 130, 25 },
	{ 57.5f, 130, 20 },
	{ 57.5f, 140, 20 },
	{ 32.5f, 110, 25 },
	{ 37.5f, 110, 20 },
	{ 37.5f, 110, -20 },
	{ 57.5f, 130, -20 },
	{ 57.5f, 140, -20 },
	{ 52.5f, 130, -25 },
	{ 52.5f, 140, -25 },
	{ 32.5f, 110, -25 },
	{ 37.5f, 30, -20 },
	{ 32.5f, 30, -25 },
	{ 37.5f, 30, 20 },
	{ 32.5f, 30, 25 },
	{ -12.5f, 115, 20 },
	{ -12.5f, 115, -20 },
	{ 12.5f, 115, -20 },
	{ 12.5f, 115, 20 },
	{ 17.5f, 120, 25 },
	{ -17.5f, 120, 25 },
	{ 12.5f, 50, 20 },
	{ 12.5f, 50, -20 },
	{ -12.5f, 50, -20 },
	{ -12.5f, 50, 20 },
	{ -13.75f, 25, 20 },
	{ -13.75f, 25, -20 },
	{ 13.75f, 25, -20 },
	{ 13.75f, 25, 20 },
	{ -17.5f, 45, 25 },
	{ 17.5f, 45, 25 },
	{ 17.5f, 30, 25 },
	{ -17.5f, 30, 25 },
	{ -57.5f, 130, 20 },
	{ -52.5f, 130, 25 },
	{ -52.5f, 140, 25 },
	{ -57.5f, 140, 20 },
	{ -57.5f, 130, -20 },
	{ -37.5f, 110, -20 },
	{ -37.5f, 110, 20 },
	{ -57.5f, 140, -20 },
	{ -32.5f, 110, 25 },
	{ -37.5f, 30, -20 },
	{ -37.5f, 30, 20 },
	{ -32.5f, 30, 25 },
	{ -52.5f, 130, -25 },
	{ -52.5f, 140, -25 },
	{ -32.5f, 110, -25 },
	{ -32.5f, 30, -25 },
	{ -17.5f, 120, -25 },
	{ 17.5f, 120, -25 },
	{ 17.5f, 45, -25 },
	{ -17.5f, 45, -25 },
	{ -17.5f, 30, -25 },
	{ 17.5f, 30, -25 },
	{ 16.875f, 0, -20 },
	{ 21.25f, 0, -25 },
	{ 16.875f, 0, 20 },
	{ 21.25f, 0, 25 },
	{ 36.25f, 0, -25 },
	{ 41.25f, 0, -20 },
	{ 41.25f, 0, 20 },
	{ 36.25f, 0, 25 },
	{ -16.875f, 0, -20 },
	{ -16.875f, 0, 20 },
	{ -21.25f, 0, -25 },
	{ -36.25f, 0, -25 },
	{ -41.25f, 0, -20 },
	{ -41.25f, 0, 20 },
	{ -36.25f, 0, 25 },
	{ -21.25f, 0, 25 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00049DF4[] = {
	{ -0.384937f, -0.048117f, -0.921688f },
	{ -0.926211f, -0.115776f, -0.35879f },
	{ -0.926211f, -0.115776f, 0.35879f },
	{ -0.384937f, -0.048117f, 0.921688f },
	{ 0.921892f, 0.115237f, -0.369913f },
	{ 0.407408f, 0.050926f, -0.9118249f },
	{ 0.407408f, 0.050926f, 0.9118249f },
	{ 0.921892f, 0.115237f, 0.369913f },
	{ 0.926211f, -0.115776f, 0.35879f },
	{ 0.926211f, -0.115776f, -0.35879f },
	{ 0.384937f, -0.048117f, -0.921688f },
	{ -0.407408f, 0.050926f, -0.9118249f },
	{ -0.921892f, 0.115237f, -0.369913f },
	{ -0.921892f, 0.115237f, 0.369913f },
	{ -0.407408f, 0.050926f, 0.9118249f },
	{ 0.384937f, -0.048117f, 0.921688f },
	{ 0.382683f, 0, 0.92388f },
	{ 0.432967f, -0.225673f, 0.872704f },
	{ 0.875579f, -0.341586f, 0.341586f },
	{ 0.92388f, 0, 0.382683f },
	{ 0.289349f, -0.101987f, 0.951775f },
	{ 0.83615f, -0.387849f, 0.387849f },
	{ 0.83615f, -0.387849f, -0.387849f },
	{ 0.875579f, -0.341586f, -0.341586f },
	{ 0.92388f, 0, -0.382683f },
	{ 0.432967f, -0.225673f, -0.872704f },
	{ 0.382683f, 0, -0.92388f },
	{ 0.289349f, -0.101987f, -0.951775f },
	{ 0.919979f, 0.057981f, -0.387656f },
	{ 0.369345f, 0.022375f, -0.929023f },
	{ 0.919979f, 0.057981f, 0.387656f },
	{ 0.369345f, 0.022375f, 0.929023f },
	{ 0.578886f, -0.578886f, 0.574267f },
	{ 0.578886f, -0.578886f, -0.574267f },
	{ -0.578886f, -0.578886f, -0.574267f },
	{ -0.578886f, -0.578886f, 0.574267f },
	{ -0.11005f, -0.11005f, 0.987815f },
	{ 0.11005f, -0.11005f, 0.987815f },
	{ -0.578886f, 0.578886f, 0.574267f },
	{ -0.578886f, 0.578886f, -0.574267f },
	{ 0.578886f, 0.578886f, -0.574267f },
	{ 0.578886f, 0.578886f, 0.574267f },
	{ 0.579825f, -0.623837f, 0.524051f },
	{ 0.579825f, -0.623837f, -0.524051f },
	{ -0.579825f, -0.623837f, -0.524051f },
	{ -0.579825f, -0.623837f, 0.524051f },
	{ 0.11005f, 0.11005f, 0.987815f },
	{ -0.11005f, 0.11005f, 0.987815f },
	{ -0.11972f, -0.140577f, 0.982805f },
	{ 0.11972f, -0.140577f, 0.982805f },
	{ -0.875579f, -0.341586f, 0.341586f },
	{ -0.432967f, -0.225673f, 0.872704f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.875579f, -0.341586f, -0.341586f },
	{ -0.83615f, -0.387849f, -0.387849f },
	{ -0.83615f, -0.387849f, 0.387849f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.289349f, -0.101987f, 0.951775f },
	{ -0.919979f, 0.057981f, -0.387656f },
	{ -0.919979f, 0.057981f, 0.387656f },
	{ -0.369345f, 0.022375f, 0.929023f },
	{ -0.432967f, -0.225673f, -0.872704f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.289349f, -0.101987f, -0.951775f },
	{ -0.369345f, 0.022375f, -0.929023f },
	{ 0.11005f, -0.11005f, -0.987815f },
	{ -0.11005f, -0.11005f, -0.987815f },
	{ -0.11005f, 0.11005f, -0.987815f },
	{ 0.11005f, 0.11005f, -0.987815f },
	{ 0.11972f, -0.140577f, -0.982805f },
	{ -0.11972f, -0.140577f, -0.982805f },
	{ -0.9295419f, -0.116193f, -0.349929f },
	{ -0.411759f, -0.05147f, -0.909838f },
	{ -0.9295419f, -0.116193f, 0.349929f },
	{ -0.411759f, -0.05147f, 0.909838f },
	{ 0.381504f, 0.047688f, -0.923136f },
	{ 0.917479f, 0.114685f, -0.380892f },
	{ 0.917479f, 0.114685f, 0.380892f },
	{ 0.381504f, 0.047688f, 0.923136f },
	{ 0.9295419f, -0.116193f, -0.349929f },
	{ 0.9295419f, -0.116193f, 0.349929f },
	{ 0.411759f, -0.05147f, -0.909838f },
	{ -0.381504f, 0.047688f, -0.923136f },
	{ -0.917479f, 0.114685f, -0.380892f },
	{ -0.917479f, 0.114685f, 0.380892f },
	{ -0.381504f, 0.047688f, 0.923136f },
	{ 0.411759f, -0.05147f, 0.909838f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0004A214 = { vertex_000499D4, normal_00049DF4, LengthOfArray<Sint32>(vertex_000499D4), meshlist_0004998C, matlist_00049334, LengthOfArray<Uint16>(meshlist_0004998C), LengthOfArray<Uint16>(matlist_00049334), { 0, -30, 0 }, 171.8284f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0004A23C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004A214, 57.5705f, 0, -1120.077f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0004A270[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0004A360[] = {
	6, 110, 108, 114, 132, 133, 134,
	3, 114, 111, 110,
	0x8000u | 5, 2, 1, 3, 0, 119,
	8, 125, 124, 127, 122, 123, 129, 120, 118,
	3, 127, 126, 125,
	4, 129, 128, 118, 119,
	0x8000u | 8, 122, 129, 121, 128, 116, 119, 117, 0,
	0x8000u | 9, 133, 135, 134, 136, 130, 115, 109, 113, 112,
	0x8000u | 5, 135, 137, 136, 131, 115
};

extern "C" __declspec(dllexport) Sint16 poly_0004A3D8[] = {
	4, 114, 142, 111, 143,
	4, 113, 147, 115, 149
};

extern "C" __declspec(dllexport) Sint16 poly_0004A3EC[] = {
	4, 110, 144, 108, 145,
	4, 109, 146, 112, 148
};

extern "C" __declspec(dllexport) Sint16 poly_0004A400[] = {
	3, 126, 9, 125,
	0x8000u | 5, 1, 2, 139, 138, 6,
	5, 103, 144, 143, 110, 111,
	0x8000u | 28, 144, 102, 103, 94, 95, 86, 87, 78, 79, 70, 71, 62, 63, 54, 55, 46, 47, 38, 39, 30, 31, 22, 23, 14, 15, 6, 7, 138,
	5, 104, 147, 148, 113, 112,
	0x8000u | 28, 147, 105, 104, 97, 96, 89, 88, 81, 80, 73, 72, 65, 64, 57, 56, 49, 48, 41, 40, 33, 32, 25, 24, 17, 16, 9, 8, 125
};

extern "C" __declspec(dllexport) Sint16 poly_0004A4A0[] = {
	3, 99, 98, 107,
	8, 98, 106, 107, 135, 149, 137, 115, 131,
	5, 135, 106, 133, 142, 114
};

extern "C" __declspec(dllexport) Sint16 poly_0004A4C6[] = {
	0x8000u | 5, 130, 109, 134, 146, 101,
	6, 134, 132, 101, 100, 93, 92,
	3, 150, 5, 140,
	0x8000u | 25, 140, 4, 5, 12, 13, 20, 21, 28, 29, 36, 37, 44, 45, 52, 53, 60, 61, 68, 69, 76, 77, 84, 85, 92, 93,
	4, 100, 132, 145, 108
};

extern "C" __declspec(dllexport) Sint16 poly_0004A526[] = {
	3, 138, 7, 141,
	3, 142, 106, 143,
	0x8000u | 28, 143, 103, 106, 95, 98, 87, 90, 79, 82, 71, 74, 63, 66, 55, 58, 47, 50, 39, 42, 31, 34, 23, 26, 15, 18, 7, 10, 141,
	3, 147, 105, 149,
	0x8000u | 27, 149, 107, 105, 99, 97, 91, 89, 83, 81, 75, 73, 67, 65, 59, 57, 51, 49, 43, 41, 35, 33, 27, 25, 19, 17, 11, 9
};

extern "C" __declspec(dllexport) Sint16 poly_0004A5B0[] = {
	3, 140, 4, 139,
	0x8000u | 28, 139, 6, 4, 14, 12, 22, 20, 30, 28, 38, 36, 46, 44, 54, 52, 62, 60, 70, 68, 78, 76, 86, 84, 94, 92, 102, 100, 145,
	3, 144, 102, 145,
	3, 146, 101, 148,
	0x8000u | 27, 148, 104, 101, 96, 93, 88, 85, 80, 77, 72, 69, 64, 61, 56, 53, 48, 45, 40, 37, 32, 29, 24, 21, 16, 13, 8, 5
};

extern "C" __declspec(dllexport) Sint16 poly_0004A63A[] = {
	10, 98, 99, 90, 91, 82, 83, 74, 75, 66, 67,
	16, 66, 67, 58, 59, 50, 51, 42, 43, 34, 35, 26, 27, 18, 19, 10, 11,
	0x8000u | 9, 3, 119, 141, 118, 10, 120, 11, 123, 127
};

extern "C" __declspec(dllexport) Sint16 poly_0004A686[] = {
	0x8000u | 5, 5, 8, 150, 125, 124,
	4, 0, 140, 1, 139
};

extern "C" __declspec(dllexport) Sint16 poly_0004A69C[] = {
	4, 9, 126, 11, 127,
	4, 2, 138, 3, 141
};

extern "C" __declspec(dllexport) Sint16 poly_0004A6B0[] = {
	8, 121, 122, 116, 124, 117, 150, 0, 140
};

NJS_TEX uv_0004A6C4[] = {
	{ 67, 0 },
	{ 67, 84 },
	{ 3, 254 },
	{ 260, 85 },
	{ 240, 254 },
	{ 482, 85 },
	{ 3, 254 },
	{ 3, 0 },
	{ 67, 0 },
	{ 3, 0 },
	{ 67, 0 },
	{ 3, 254 },
	{ 67, 84 },
	{ 204, 253 },
	{ 960, 0 },
	{ 960, 84 },
	{ 1016, 254 },
	{ 913, 85 },
	{ 908, 253 },
	{ 750, 169 },
	{ 750, 253 },
	{ 529, 253 },
	{ 1016, 254 },
	{ 1016, 0 },
	{ 960, 0 },
	{ 750, 169 },
	{ 529, 169 },
	{ 529, 253 },
	{ 204, 253 },
	{ 913, 85 },
	{ 750, 169 },
	{ 744, 85 },
	{ 529, 169 },
	{ 506, 85 },
	{ 204, 253 },
	{ 225, 85 },
	{ 67, 84 },
	{ 240, 254 },
	{ 460, 254 },
	{ 482, 85 },
	{ 573, 169 },
	{ 668, 85 },
	{ 1016, 254 },
	{ 960, 84 },
	{ 1016, 0 },
	{ 960, 0 },
	{ 460, 254 },
	{ 516, 254 },
	{ 573, 169 },
	{ 573, 254 },
	{ 1016, 254 }
};

NJS_TEX uv_0004A790[] = {
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 }
};

NJS_TEX uv_0004A7B0[] = {
	{ 3, 1 },
	{ 506, 1 },
	{ 3, 253 },
	{ 506, 253 },
	{ 3, 253 },
	{ 506, 253 },
	{ 3, 1 },
	{ 506, 1 }
};

NJS_TEX uv_0004A7D0[] = {
	{ 7400, 255 },
	{ 7301, 255 },
	{ 7520, 0 },
	{ 7650, 0 },
	{ 7650, 255 },
	{ 7321, 0 },
	{ 7314, 255 },
	{ 6991, 0 },
	{ 252, 255 },
	{ 132, 0 },
	{ 126, 255 },
	{ 0 },
	{ 0, 255 },
	{ 132, 0 },
	{ 264, 0 },
	{ 252, 255 },
	{ 530, 0 },
	{ 504, 255 },
	{ 796, 0 },
	{ 757, 255 },
	{ 1061, 0 },
	{ 1009, 255 },
	{ 1328, 0 },
	{ 1261, 255 },
	{ 1593, 0 },
	{ 1514, 255 },
	{ 3044, 0 },
	{ 2964, 255 },
	{ 3702, 0 },
	{ 3633, 255 },
	{ 4360, 0 },
	{ 4303, 255 },
	{ 5017, 0 },
	{ 4972, 255 },
	{ 5675, 0 },
	{ 5641, 255 },
	{ 6334, 0 },
	{ 6311, 255 },
	{ 6991, 0 },
	{ 6980, 255 },
	{ 7314, 255 },
	{ 562, 0 },
	{ 284, 255 },
	{ 280, 0 },
	{ 0, 255 },
	{ 0 },
	{ 284, 255 },
	{ 568, 255 },
	{ 562, 0 },
	{ 1136, 255 },
	{ 1126, 0 },
	{ 1704, 255 },
	{ 1689, 0 },
	{ 2272, 255 },
	{ 2253, 0 },
	{ 2839, 255 },
	{ 2817, 0 },
	{ 3408, 255 },
	{ 3380, 0 },
	{ 4923, 255 },
	{ 4919, 0 },
	{ 5321, 255 },
	{ 5335, 0 },
	{ 5716, 255 },
	{ 5751, 0 },
	{ 6113, 255 },
	{ 6168, 0 },
	{ 6509, 255 },
	{ 6584, 0 },
	{ 6906, 255 },
	{ 7000, 0 },
	{ 7301, 255 },
	{ 7416, 0 },
	{ 7520, 0 }
};

NJS_TEX uv_0004A8F8[] = {
	{ 253, 247 },
	{ 1, 247 },
	{ 253, -262 },
	{ 1, 247 },
	{ 1, -7 },
	{ 253, -262 },
	{ 113, -176 },
	{ 253, -517 },
	{ 121, -318 },
	{ 253, -757 },
	{ 128, -460 },
	{ 113, -176 },
	{ 1, -7 },
	{ 65, -71 },
	{ 1, -135 },
	{ 1, -262 }
};

NJS_TEX uv_0004A938[] = {
	{ 346, 143 },
	{ 508, 253 },
	{ 256, -253 },
	{ 508, -1 },
	{ 508, -253 },
	{ 256, 253 },
	{ 129, 253 },
	{ 508, 253 },
	{ 1, 253 },
	{ 508, -253 },
	{ 1, -253 },
	{ 510, 255 },
	{ 510, 205 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, 106 },
	{ 510, 205 },
	{ 0, -189 },
	{ 510, 6 },
	{ 0, -486 },
	{ 510, -192 },
	{ 0, -781 },
	{ 510, -392 },
	{ 0, -1078 },
	{ 510, -590 },
	{ 0, -1375 },
	{ 510, -789 },
	{ 0, -1671 },
	{ 510, -988 },
	{ 0, -2326 },
	{ 510, -1726 },
	{ 0, -2444 },
	{ 510, -1994 },
	{ 0, -2565 },
	{ 510, -2264 },
	{ 0, -2684 },
	{ 510, -2534 },
	{ 0, -2805 },
	{ 510, -2805 },
	{ 1, 253 },
	{ 129, -253 },
	{ 1, -1 },
	{ 1, -253 }
};

NJS_TEX uv_0004A9E4[] = {
	{ 6885, 0 },
	{ 6564, 0 },
	{ 6885, 255 },
	{ 0, 255 },
	{ 120, 255 },
	{ 0 },
	{ 0 },
	{ 120, 0 },
	{ 120, 255 },
	{ 362, 0 },
	{ 362, 255 },
	{ 604, 0 },
	{ 604, 255 },
	{ 845, 0 },
	{ 845, 255 },
	{ 1088, 0 },
	{ 1088, 255 },
	{ 1330, 0 },
	{ 1330, 255 },
	{ 2718, 0 },
	{ 2718, 255 },
	{ 3359, 0 },
	{ 3359, 255 },
	{ 4000, 0 },
	{ 4000, 255 },
	{ 4641, 0 },
	{ 4641, 255 },
	{ 5282, 0 },
	{ 5282, 255 },
	{ 5923, 0 },
	{ 5923, 255 },
	{ 6564, 0 },
	{ 6564, 255 },
	{ 6885, 255 },
	{ 0 },
	{ 278, 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 278, 255 },
	{ 278, 0 },
	{ 835, 255 },
	{ 835, 0 },
	{ 1393, 255 },
	{ 1393, 0 },
	{ 1950, 255 },
	{ 1950, 0 },
	{ 2506, 255 },
	{ 2506, 0 },
	{ 3064, 255 },
	{ 3064, 0 },
	{ 4552, 255 },
	{ 4552, 0 },
	{ 4940, 255 },
	{ 4940, 0 },
	{ 5328, 255 },
	{ 5328, 0 },
	{ 5717, 255 },
	{ 5717, 0 },
	{ 6107, 255 },
	{ 6107, 0 },
	{ 6496, 255 },
	{ 6496, 0 },
	{ 6885, 255 },
	{ 6885, 0 }
};

NJS_TEX uv_0004AAE4[] = {
	{ 7140, 255 },
	{ 6813, 255 },
	{ 7140, 0 },
	{ 7140, 0 },
	{ 6813, 0 },
	{ 6813, 255 },
	{ 6158, 0 },
	{ 6158, 255 },
	{ 5506, 0 },
	{ 5506, 255 },
	{ 4852, 0 },
	{ 4852, 255 },
	{ 4199, 0 },
	{ 4199, 255 },
	{ 3545, 0 },
	{ 3545, 255 },
	{ 2891, 0 },
	{ 2891, 255 },
	{ 1450, 0 },
	{ 1450, 255 },
	{ 1187, 0 },
	{ 1187, 255 },
	{ 923, 0 },
	{ 923, 255 },
	{ 658, 0 },
	{ 658, 255 },
	{ 394, 0 },
	{ 394, 255 },
	{ 131, 0 },
	{ 131, 255 },
	{ 0, 255 },
	{ 0 },
	{ 131, 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 280, 255 },
	{ 0 },
	{ 0 },
	{ 280, 0 },
	{ 280, 255 },
	{ 844, 0 },
	{ 844, 255 },
	{ 1409, 0 },
	{ 1409, 255 },
	{ 1973, 0 },
	{ 1973, 255 },
	{ 2536, 0 },
	{ 2536, 255 },
	{ 3101, 0 },
	{ 3101, 255 },
	{ 4642, 0 },
	{ 4642, 255 },
	{ 5058, 0 },
	{ 5058, 255 },
	{ 5474, 0 },
	{ 5474, 255 },
	{ 5891, 0 },
	{ 5891, 255 },
	{ 6307, 0 },
	{ 6307, 255 },
	{ 6723, 0 },
	{ 6723, 255 },
	{ 7140, 0 },
	{ 7140, 255 }
};

NJS_TEX uv_0004ABE4[] = {
	{ 0, 2071 },
	{ 254, 2071 },
	{ 0, 2581 },
	{ 254, 2581 },
	{ 0, 3091 },
	{ 254, 3091 },
	{ 0, 3601 },
	{ 254, 3601 },
	{ 0, 4048 },
	{ 254, 4048 },
	{ 0, 31 },
	{ 254, 31 },
	{ 0, 1051 },
	{ 254, 1051 },
	{ 0, 1561 },
	{ 254, 1561 },
	{ 0, 2071 },
	{ 254, 2071 },
	{ 0, 2581 },
	{ 254, 2581 },
	{ 0, 3091 },
	{ 254, 3091 },
	{ 0, 3601 },
	{ 254, 3601 },
	{ 0, 4048 },
	{ 254, 4048 },
	{ 0, 506 },
	{ 44, 404 },
	{ 0, 258 },
	{ 127, 458 },
	{ 0, 3 },
	{ 187, 386 },
	{ 254, 3 },
	{ 229, 354 },
	{ 254, 258 }
};

NJS_TEX uv_0004AC70[] = {
	{ 1, 253 },
	{ 1, 1 },
	{ 129, 253 },
	{ 129, 1 },
	{ 253, 253 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 1 },
	{ 1, 1 }
};

NJS_TEX uv_0004AC94[] = {
	{ 1, 1 },
	{ 161, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 253 },
	{ 1, 253 }
};

NJS_TEX uv_0004ACB4[] = {
	{ 382, 229 },
	{ 476, 222 },
	{ 244, 210 },
	{ 508, 237 },
	{ 80, 217 },
	{ 508, 253 },
	{ 1, 190 },
	{ 1, 253 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0004ACD4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 9, poly_0004A360, NULL, NULL, NULL, uv_0004A6C4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0004A3D8, NULL, NULL, NULL, uv_0004A790, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0004A3EC, NULL, NULL, NULL, uv_0004A7B0, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 6, poly_0004A400, NULL, NULL, NULL, uv_0004A7D0, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 3, poly_0004A4A0, NULL, NULL, NULL, uv_0004A8F8, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 5, poly_0004A4C6, NULL, NULL, NULL, uv_0004A938, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 5, poly_0004A526, NULL, NULL, NULL, uv_0004A9E4, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 5, poly_0004A5B0, NULL, NULL, NULL, uv_0004AAE4, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 3, poly_0004A63A, NULL, NULL, NULL, uv_0004ABE4, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 2, poly_0004A686, NULL, NULL, NULL, uv_0004AC70, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 2, poly_0004A69C, NULL, NULL, NULL, uv_0004AC94, NULL },
	{ NJD_MESHSET_TRIMESH | 11, 1, poly_0004A6B0, NULL, NULL, NULL, uv_0004ACB4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0004ADF4[] = {
	{ 103.0747f, 150, 267.32f },
	{ 103.0747f, 155, 267.32f },
	{ 101.3646f, 155, 272.0186f },
	{ 101.3646f, 140, 272.0186f },
	{ 61.99997f, 150, 248.1665f },
	{ 114.4999f, 150, 157.2341f },
	{ 61.99997f, 155, 248.1665f },
	{ 59.49991f, 155, 252.4967f },
	{ 114.4999f, 155, 157.2341f },
	{ 116.9999f, 155, 152.9039f },
	{ 59.49991f, 140, 252.4967f },
	{ 116.9999f, 140, 152.9039f },
	{ 24.87522f, 150, 222.1715f },
	{ 92.36784f, 150, 141.737f },
	{ 24.87522f, 155, 222.1715f },
	{ 21.66123f, 155, 226.0018f },
	{ 92.36784f, 155, 141.737f },
	{ 95.58176f, 155, 137.9067f },
	{ 21.66123f, 140, 226.0018f },
	{ 95.58176f, 140, 137.9067f },
	{ -7.171531f, 150, 190.1247f },
	{ 73.26304f, 150, 122.6322f },
	{ -7.171531f, 155, 190.1247f },
	{ -11.00185f, 155, 193.3387f },
	{ 73.26304f, 155, 122.6322f },
	{ 77.09324f, 155, 119.4182f },
	{ -11.00185f, 140, 193.3387f },
	{ 77.09324f, 140, 119.4182f },
	{ -33.16653f, 150, 153 },
	{ 57.76596f, 150, 100.5001f },
	{ -33.16653f, 155, 153 },
	{ -37.49678f, 155, 155.5f },
	{ 57.76596f, 155, 100.5001f },
	{ 62.0961f, 155, 97.99998f },
	{ -37.49678f, 140, 155.5f },
	{ 62.0961f, 140, 97.99998f },
	{ -52.31997f, 150, 111.9252f },
	{ 46.34751f, 150, 76.01318f },
	{ -52.31997f, 155, 111.9252f },
	{ -57.01858f, 155, 113.6354f },
	{ 46.34751f, 155, 76.01318f },
	{ 51.046f, 155, 74.30309f },
	{ -57.01858f, 140, 113.6354f },
	{ 51.046f, 140, 74.30309f },
	{ -64.04989f, 150, 68.14843f },
	{ 39.35471f, 150, 49.91552f },
	{ -64.04989f, 155, 68.14843f },
	{ -68.97408f, 155, 69.01671f },
	{ 39.35471f, 155, 49.91552f },
	{ 44.27879f, 155, 49.04723f },
	{ -68.97408f, 140, 69.01671f },
	{ 44.27879f, 140, 49.04723f },
	{ -67.99984f, 150, 22.99999f },
	{ 36.99991f, 150, 22.99999f },
	{ -67.99984f, 155, 22.99999f },
	{ -73.00002f, 155, 22.99999f },
	{ 36.99991f, 155, 22.99999f },
	{ 41.99991f, 155, 22.99999f },
	{ -73.00002f, 140, 22.99999f },
	{ 41.99991f, 140, 22.99999f },
	{ -67.99984f, 150, -77.00001f },
	{ 36.99991f, 150, -77.00001f },
	{ -67.99984f, 155, -77.00001f },
	{ -73.00002f, 155, -77.00001f },
	{ 36.99991f, 155, -77.00001f },
	{ 41.99991f, 155, -77.00001f },
	{ -73.00002f, 140, -77.00001f },
	{ 41.99991f, 140, -77.00001f },
	{ -69.59505f, 150, -95.23304f },
	{ 33.80954f, 150, -113.4661f },
	{ -69.59505f, 155, -95.23304f },
	{ -74.51925f, 155, -94.36488f },
	{ 33.80954f, 155, -113.4661f },
	{ 38.73356f, 155, -114.3344f },
	{ -74.51925f, 140, -94.36488f },
	{ 38.73356f, 140, -114.3344f },
	{ -74.33211f, 150, -112.9122f },
	{ 24.33536f, 150, -148.8242f },
	{ -74.33211f, 155, -112.9122f },
	{ -79.03078f, 155, -111.202f },
	{ 24.33536f, 155, -148.8242f },
	{ 29.03385f, 155, -150.5343f },
	{ -79.03078f, 140, -111.202f },
	{ 29.03385f, 140, -150.5343f },
	{ -82.06722f, 150, -129.5001f },
	{ 8.865273f, 150, -182 },
	{ -82.06722f, 155, -129.5001f },
	{ -86.39748f, 155, -127 },
	{ 8.865273f, 155, -182 },
	{ 13.19535f, 155, -184.5f },
	{ -86.39748f, 140, -127 },
	{ 13.19535f, 140, -184.5f },
	{ -92.5652f, 150, -144.4928f },
	{ -12.1307f, 150, -211.9854f },
	{ -92.5652f, 155, -144.4928f },
	{ -96.39559f, 155, -141.2788f },
	{ -12.1307f, 155, -211.9854f },
	{ -8.300499f, 155, -215.1992f },
	{ -96.39559f, 140, -141.2788f },
	{ -8.300499f, 140, -215.1992f },
	{ -105.5072f, 150, -157.4348f },
	{ -38.01461f, 150, -237.8693f },
	{ -105.5072f, 155, -157.4348f },
	{ -108.7213f, 155, -153.6045f },
	{ -38.01461f, 155, -237.8693f },
	{ -34.80074f, 155, -241.6995f },
	{ -108.7213f, 140, -153.6045f },
	{ -34.80074f, 140, -241.6995f },
	{ -120.5f, 150, -167.9328f },
	{ -68.00002f, 150, -258.8652f },
	{ -120.5f, 155, -167.9328f },
	{ -123, 155, -163.6025f },
	{ -68.00002f, 155, -258.8652f },
	{ -65.50008f, 155, -263.1953f },
	{ -123, 140, -163.6025f },
	{ -65.50008f, 140, -263.1953f },
	{ 116.0308f, 150, 217.9863f },
	{ 102.0527f, 150, 247.6531f },
	{ 121.0307f, 140, 217.9863f },
	{ 101.1977f, 140, 250.0024f },
	{ 125.8638f, 140, 190.9701f },
	{ 120.0088f, 150, 188.3193f },
	{ 129.4978f, 150, 170.9859f },
	{ 130.7803f, 140, 172.462f },
	{ 126.7434f, 150, 162.9433f },
	{ 120.6216f, 155, 160.0887f },
	{ 122.9241f, 155, 155.6664f },
	{ 128.8484f, 140, 158.4289f },
	{ 121.0307f, 145, 217.9863f },
	{ 125.8638f, 145, 190.9701f },
	{ -76.12501f, 150, -226.1321f },
	{ -84.87505f, 140, -218.2971f },
	{ -88.63406f, 150, -177.5434f },
	{ -90.24113f, 140, -175.6282f },
	{ -71.76092f, 150, -197.6521f },
	{ -76.761f, 140, -197.652f },
	{ -84.87505f, 145, -218.2971f },
	{ -80.81802f, 140, -207.9746f },
	{ 80.43226f, 155, 262.2577f },
	{ 82.53735f, 155, 257.7433f },
	{ 82.53735f, 150, 257.7433f },
	{ 80.43226f, 140, 262.2577f },
	{ -115.8606f, 140, -158.6035f },
	{ -115.8606f, 155, -158.6035f },
	{ -113.0036f, 155, -162.6838f },
	{ -113.0036f, 150, -162.6838f },
	{ -53.00732f, 150, -248.3673f },
	{ -50.15041f, 155, -252.4474f },
	{ -53.00732f, 155, -248.3673f },
	{ -50.15041f, 140, -252.4474f },
	{ 120.6216f, 150, 160.0887f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0004B508[] = {
	{ 0.98453f, 0.138031f, -0.10793f },
	{ 0.751237f, 0.582078f, -0.311171f },
	{ 0.313656f, 0.5729f, 0.7572359f },
	{ 0.399434f, -0.597766f, 0.695074f },
	{ 0.362853f, 0.688006f, -0.6284789f },
	{ -0.34318f, 0.7272609f, 0.594407f },
	{ 0.343181f, 0.72726f, -0.5944059f },
	{ -0.362853f, 0.688006f, 0.6284789f },
	{ -0.362852f, 0.688005f, 0.62848f },
	{ 0.343181f, 0.7272609f, -0.5944059f },
	{ -0.362853f, -0.688006f, 0.6284789f },
	{ 0.343181f, -0.7272609f, -0.5944059f },
	{ 0.466474f, 0.688006f, -0.555922f },
	{ -0.441185f, 0.72726f, 0.5257829f },
	{ 0.441185f, 0.72726f, -0.5257829f },
	{ -0.466474f, 0.688006f, 0.555922f },
	{ -0.466475f, 0.688006f, 0.555922f },
	{ 0.441185f, 0.72726f, -0.5257829f },
	{ -0.466474f, -0.688006f, 0.555922f },
	{ 0.441185f, -0.72726f, -0.5257829f },
	{ 0.555922f, 0.688006f, -0.466474f },
	{ -0.525784f, 0.72726f, 0.441185f },
	{ 0.525784f, 0.72726f, -0.441185f },
	{ -0.555922f, 0.688006f, 0.466474f },
	{ -0.555922f, 0.688006f, 0.466474f },
	{ 0.525784f, 0.7272609f, -0.441184f },
	{ -0.555922f, -0.688006f, 0.466474f },
	{ 0.525784f, -0.7272609f, -0.441184f },
	{ 0.6284789f, 0.688006f, -0.362852f },
	{ -0.594407f, 0.72726f, 0.343181f },
	{ 0.594407f, 0.72726f, -0.34318f },
	{ -0.6284789f, 0.688006f, 0.362852f },
	{ -0.6284789f, 0.688006f, 0.362853f },
	{ 0.594407f, 0.72726f, -0.343181f },
	{ -0.6284789f, -0.688006f, 0.362852f },
	{ 0.594407f, -0.72726f, -0.343181f },
	{ 0.68194f, 0.688006f, -0.248205f },
	{ -0.644969f, 0.7272609f, 0.234749f },
	{ 0.644969f, 0.72726f, -0.234749f },
	{ -0.68194f, 0.688006f, 0.248206f },
	{ -0.68194f, 0.688006f, 0.248205f },
	{ 0.644968f, 0.7272609f, -0.234749f },
	{ -0.68194f, -0.688006f, 0.248206f },
	{ 0.644968f, -0.7272609f, -0.234749f },
	{ 0.71468f, 0.688006f, -0.126017f },
	{ -0.675935f, 0.72726f, 0.119185f },
	{ 0.675934f, 0.72726f, -0.119185f },
	{ -0.71468f, 0.688006f, 0.126017f },
	{ -0.71468f, 0.688006f, 0.126017f },
	{ 0.675935f, 0.72726f, -0.119185f },
	{ -0.71468f, -0.688006f, 0.126017f },
	{ 0.675935f, -0.72726f, -0.119185f },
	{ 0.7159809f, 0.6974199f, -0.03126f },
	{ -0.69635f, 0.7170579f, 0.030403f },
	{ 0.69635f, 0.7170579f, -0.030403f },
	{ -0.7159809f, 0.6974199f, 0.03126f },
	{ -0.7159809f, 0.6974199f, 0.03126f },
	{ 0.69635f, 0.7170579f, -0.030404f },
	{ -0.7159809f, -0.6974199f, 0.03126f },
	{ 0.69635f, -0.7170579f, -0.030404f },
	{ 0.69635f, 0.7170579f, -0.030404f },
	{ -0.7159809f, 0.6974199f, 0.03126f },
	{ 0.7159809f, 0.697419f, -0.031261f },
	{ -0.69635f, 0.7170579f, 0.030403f },
	{ -0.69635f, 0.7170579f, 0.030403f },
	{ 0.7159809f, 0.697419f, -0.031261f },
	{ -0.69635f, -0.7170579f, 0.030403f },
	{ 0.7159809f, -0.697419f, -0.031261f },
	{ 0.675935f, 0.72726f, -0.119185f },
	{ -0.71468f, 0.688006f, 0.126017f },
	{ 0.7146789f, 0.688007f, -0.126017f },
	{ -0.675934f, 0.7272609f, 0.119186f },
	{ -0.675934f, 0.72726f, 0.119185f },
	{ 0.71468f, 0.688006f, -0.126017f },
	{ -0.675934f, -0.7272609f, 0.119186f },
	{ 0.71468f, -0.688006f, -0.126017f },
	{ 0.644968f, 0.7272609f, -0.234749f },
	{ -0.68194f, 0.688006f, 0.248205f },
	{ 0.68194f, 0.688005f, -0.248206f },
	{ -0.644969f, 0.72726f, 0.23475f },
	{ -0.644969f, 0.72726f, 0.234749f },
	{ 0.68194f, 0.688006f, -0.248206f },
	{ -0.644969f, -0.72726f, 0.23475f },
	{ 0.68194f, -0.688006f, -0.248206f },
	{ 0.5944059f, 0.72726f, -0.343182f },
	{ -0.6284789f, 0.688006f, 0.362852f },
	{ 0.628478f, 0.688006f, -0.362853f },
	{ -0.594407f, 0.72726f, 0.34318f },
	{ -0.594407f, 0.72726f, 0.34318f },
	{ 0.6284789f, 0.688006f, -0.362853f },
	{ -0.594407f, -0.72726f, 0.34318f },
	{ 0.6284789f, -0.688006f, -0.362853f },
	{ 0.525784f, 0.72726f, -0.441185f },
	{ -0.555922f, 0.688006f, 0.466474f },
	{ 0.555922f, 0.688006f, -0.466474f },
	{ -0.525784f, 0.72726f, 0.441184f },
	{ -0.525784f, 0.72726f, 0.441185f },
	{ 0.555922f, 0.688006f, -0.466474f },
	{ -0.5257829f, -0.7272609f, 0.441185f },
	{ 0.555922f, -0.688006f, -0.466474f },
	{ 0.441185f, 0.72726f, -0.525784f },
	{ -0.466474f, 0.688006f, 0.555922f },
	{ 0.466474f, 0.688006f, -0.555923f },
	{ -0.441185f, 0.72726f, 0.525784f },
	{ -0.441184f, 0.72726f, 0.525784f },
	{ 0.466474f, 0.688006f, -0.555923f },
	{ -0.441184f, -0.72726f, 0.525784f },
	{ 0.466474f, -0.688006f, -0.555922f },
	{ -0.416357f, 0.063853f, -0.906956f },
	{ -0.934243f, 0.343984f, -0.09415799f },
	{ -0.177407f, 0.572899f, -0.800196f },
	{ -0.793856f, 0.5820799f, 0.176002f },
	{ -0.793857f, 0.582079f, 0.175997f },
	{ -0.177403f, 0.572899f, -0.8001969f },
	{ -0.778386f, -0.627458f, -0.020296f },
	{ -0.243472f, -0.486049f, -0.839332f },
	{ 0.492803f, 0.853456f, 0.169584f },
	{ 0.689306f, 0.704959f, 0.167006f },
	{ 0.695588f, -0.6672029f, 0.266453f },
	{ 0.747212f, -0.651798f, 0.129747f },
	{ 0.699166f, -0.697928f, 0.155125f },
	{ 0.410088f, 0.899462f, 0.150982f },
	{ 0.618829f, 0.782989f, 0.063077f },
	{ 0.843299f, -0.5234039f, 0.122046f },
	{ 0.686785f, 0.724703f, 0.055961f },
	{ 0.113448f, 0.680059f, 0.724327f },
	{ 0.644706f, 0.591778f, -0.483894f },
	{ 0.73136f, -0.532156f, -0.426525f },
	{ 0.903432f, 0.297745f, 0.308478f },
	{ 0.899481f, 0.35906f, 0.24902f },
	{ -0.576057f, 0.81378f, -0.076945f },
	{ -0.776041f, -0.6305529f, -0.012773f },
	{ -0.363853f, 0.8137479f, -0.453238f },
	{ -0.338943f, -0.788728f, -0.512861f },
	{ -0.352462f, 0.932358f, -0.080493f },
	{ -0.745877f, -0.633792f, -0.204877f },
	{ -0.9448349f, 0.327538f, -0.002542f },
	{ -0.854808f, -0.479656f, 0.198074f },
	{ -0.298837f, 0.7071069f, 0.640856f },
	{ 0.298837f, 0.7071069f, -0.640856f },
	{ 0.298837f, 0.7071069f, -0.640856f },
	{ -0.298837f, -0.7071069f, 0.640856f },
	{ -0.405611f, -0.707052f, 0.579273f },
	{ -0.405579f, 0.7071069f, 0.579228f },
	{ 0.40558f, 0.7071069f, -0.579228f },
	{ 0.40558f, 0.7071069f, -0.579228f },
	{ -0.405579f, 0.7071069f, 0.579228f },
	{ 0.405579f, 0.7071069f, -0.579229f },
	{ -0.405579f, 0.7071069f, 0.579228f },
	{ 0.405579f, -0.7071069f, -0.579229f },
	{ -0.298834f, 0.7071069f, 0.640857f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0004BC1C = { vertex_0004ADF4, normal_0004B508, LengthOfArray<Sint32>(vertex_0004ADF4), meshlist_0004ACD4, matlist_0004A270, LengthOfArray<Uint16>(meshlist_0004ACD4), LengthOfArray<Uint16>(matlist_0004A270), { 3.890179f, 147.5f, 4.411652f }, 287.0224f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0004BC44 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004BC1C, 855.2012f, -101.2867f, 437.6133f, 0xFFFFDE37, 0xFFFFEDF0, 0xFFFFFD02, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0004BC78[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 75, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 60, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 65, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 63, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 74, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 76, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 64, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 72, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 77, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 71, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 61, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 70, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 73, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 62, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 67, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 68, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 69, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0004BDE0[] = {
	4, 11, 10, 13, 12,
	4, 1, 0, 3, 2,
	4, 15, 14, 1, 0,
	4, 9, 8, 11, 10,
	4, 3, 2, 5, 4,
	4, 7, 6, 9, 8,
	4, 13, 12, 15, 14,
	4, 5, 4, 7, 6
};

extern "C" __declspec(dllexport) Sint16 poly_0004BE30[] = {
	4, 96, 100, 21, 25,
	4, 98, 103, 20, 24,
	4, 97, 101, 16, 23,
	4, 99, 102, 22, 31
};

extern "C" __declspec(dllexport) Sint16 poly_0004BE58[] = {
	8, 27, 54, 150, 130, 111, 131, 26, 51,
	8, 28, 53, 159, 126, 120, 123, 17, 55,
	8, 49, 19, 144, 129, 108, 135, 50, 30,
	8, 52, 18, 127, 139, 128, 140, 48, 29
};

extern "C" __declspec(dllexport) Sint16 poly_0004BEA0[] = {
	3, 145, 43, 42,
	8, 42, 106, 145, 142, 146, 143, 110, 46,
	3, 143, 47, 46,
	0x8000u | 5, 110, 146, 109, 44, 45,
	0x8000u | 5, 106, 142, 107, 41, 40
};

extern "C" __declspec(dllexport) Sint16 poly_0004BEDA[] = {
	4, 55, 54, 17, 27,
	4, 52, 53, 18, 28,
	4, 49, 48, 19, 29,
	4, 51, 50, 26, 30
};

extern "C" __declspec(dllexport) Sint16 poly_0004BF02[] = {
	4, 143, 149, 47, 34,
	4, 107, 115, 40, 36,
	4, 145, 151, 43, 38,
	4, 109, 112, 45, 32,
	4, 148, 142, 35, 41,
	4, 113, 110, 39, 46,
	4, 152, 146, 33, 44,
	4, 116, 106, 37, 42
};

extern "C" __declspec(dllexport) Sint16 poly_0004BF52[] = {
	4, 40, 36, 41, 35,
	4, 43, 38, 42, 37,
	4, 45, 32, 44, 33,
	4, 47, 34, 46, 39
};

extern "C" __declspec(dllexport) Sint16 poly_0004BF7A[] = {
	4, 151, 116, 38, 37,
	6, 147, 157, 156, 158, 24, 20,
	0x8000u | 5, 155, 31, 157, 22, 147,
	3, 16, 23, 119,
	6, 119, 118, 16, 157, 154, 155,
	4, 157, 118, 25, 21,
	4, 112, 152, 32, 33,
	4, 149, 113, 34, 39,
	4, 115, 148, 36, 35,
	8, 115, 116, 148, 151, 149, 152, 113, 112
};

extern "C" __declspec(dllexport) Sint16 poly_0004BFEE[] = {
	4, 117, 155, 102, 31,
	4, 121, 119, 101, 23,
	4, 132, 157, 100, 25,
	4, 137, 156, 103, 24,
	4, 158, 104, 20, 98,
	4, 147, 136, 22, 99,
	4, 154, 138, 16, 97,
	4, 118, 122, 21, 96
};

extern "C" __declspec(dllexport) Sint16 poly_0004C03E[] = {
	4, 58, 56, 59, 57,
	4, 59, 57, 63, 61,
	4, 63, 61, 62, 60,
	4, 62, 60, 58, 56,
	4, 66, 64, 67, 65,
	4, 67, 65, 71, 69,
	4, 71, 69, 70, 68,
	4, 68, 64, 70, 66,
	4, 74, 72, 75, 73,
	4, 75, 73, 79, 77,
	4, 79, 77, 78, 76,
	4, 78, 76, 74, 72,
	4, 86, 84, 82, 80,
	4, 82, 80, 83, 81,
	4, 83, 81, 87, 85,
	4, 87, 85, 86, 84
};

extern "C" __declspec(dllexport) Sint16 poly_0004C0DE[] = {
	4, 90, 94, 51, 50,
	4, 95, 92, 55, 54,
	4, 89, 93, 52, 53,
	3, 88, 48, 49,
	3, 88, 49, 91
};

extern "C" __declspec(dllexport) Sint16 poly_0004C10C[] = {
	4, 133, 130, 92, 54,
	4, 127, 124, 52, 89,
	4, 153, 108, 94, 50,
	4, 105, 126, 93, 53,
	4, 144, 141, 49, 91,
	4, 131, 134, 51, 90,
	4, 123, 114, 55, 95,
	4, 125, 128, 88, 48
};

extern "C" __declspec(dllexport) Sint16 poly_0004C15C[] = {
	4, 93, 89, 97, 101,
	4, 88, 91, 96, 100,
	4, 94, 90, 98, 103,
	4, 92, 95, 99, 102
};

extern "C" __declspec(dllexport) Sint16 poly_0004C184[] = {
	4, 124, 121, 89, 101,
	4, 141, 132, 91, 100,
	4, 134, 137, 90, 103,
	4, 114, 117, 95, 102,
	4, 104, 153, 98, 94,
	4, 136, 133, 99, 92,
	4, 138, 105, 97, 93,
	4, 122, 125, 96, 88
};

extern "C" __declspec(dllexport) Sint16 poly_0004C1D4[] = {
	4, 141, 144, 153, 108,
	4, 130, 133, 131, 134,
	4, 114, 123, 105, 126,
	4, 124, 127, 125, 128
};

extern "C" __declspec(dllexport) Sint16 poly_0004C1FC[] = {
	4, 132, 141, 104, 153,
	4, 133, 136, 134, 137,
	4, 117, 114, 138, 105,
	4, 125, 122, 124, 121
};

extern "C" __declspec(dllexport) Sint16 poly_0004C224[] = {
	4, 157, 132, 158, 104,
	4, 136, 147, 137, 156,
	4, 155, 117, 154, 138,
	4, 122, 118, 121, 119
};

extern "C" __declspec(dllexport) Sint16 poly_0004C24C[] = {
	4, 142, 148, 143, 149,
	4, 112, 109, 113, 110,
	4, 151, 145, 152, 146,
	4, 106, 116, 107, 115
};

NJS_TEX uv_0004C274[] = {
	{ 1, -42 },
	{ 1, 314 },
	{ 250, -42 },
	{ 252, 316 },
	{ 1, -42 },
	{ 1, 314 },
	{ 250, -42 },
	{ 252, 316 },
	{ 1, -42 },
	{ 1, 314 },
	{ 250, -42 },
	{ 252, 316 },
	{ 1, -42 },
	{ 1, 314 },
	{ 250, -42 },
	{ 252, 316 },
	{ 1, -42 },
	{ 1, 314 },
	{ 250, -42 },
	{ 252, 316 },
	{ 1, -42 },
	{ 1, 314 },
	{ 250, -42 },
	{ 252, 316 },
	{ 1, -42 },
	{ 1, 314 },
	{ 250, -42 },
	{ 252, 316 },
	{ 1, -42 },
	{ 1, 314 },
	{ 250, -42 },
	{ 252, 316 }
};

NJS_TEX uv_0004C2F4[] = {
	{ 0, 253 },
	{ 253, 254 },
	{ 0 },
	{ 254, 0 },
	{ 0, 253 },
	{ 253, 254 },
	{ 0 },
	{ 254, 0 },
	{ 0, 253 },
	{ 253, 254 },
	{ 0 },
	{ 254, 0 },
	{ 0, 253 },
	{ 253, 254 },
	{ 0 },
	{ 254, 0 }
};

NJS_TEX uv_0004C334[] = {
	{ 254, 254 },
	{ 252, 0 },
	{ 222, 254 },
	{ 221, 0 },
	{ 31, 254 },
	{ 31, 0 },
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 252, 0 },
	{ 222, 254 },
	{ 221, 0 },
	{ 31, 254 },
	{ 31, 0 },
	{ 0, 254 },
	{ 0 },
	{ 0 },
	{ 0, 254 },
	{ 31, 0 },
	{ 31, 254 },
	{ 221, 0 },
	{ 223, 254 },
	{ 252, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 },
	{ 31, 0 },
	{ 31, 254 },
	{ 221, 0 },
	{ 223, 254 },
	{ 252, 0 },
	{ 254, 254 }
};

NJS_TEX uv_0004C3B4[] = {
	{ 68, 246 },
	{ 51, 255 },
	{ 0, 204 },
	{ 0, 204 },
	{ 8, 187 },
	{ 68, 246 },
	{ 68, 8 },
	{ 187, 246 },
	{ 187, 8 },
	{ 246, 67 },
	{ 254, 50 },
	{ 187, 8 },
	{ 204, 0 },
	{ 254, 50 },
	{ 246, 67 },
	{ 187, 246 },
	{ 246, 187 },
	{ 204, 255 },
	{ 254, 204 },
	{ 8, 187 },
	{ 68, 8 },
	{ 8, 67 },
	{ 51, 0 },
	{ 0, 50 }
};

NJS_TEX uv_0004C414[] = {
	{ 255, 0 },
	{ 7, 0 },
	{ 255, 255 },
	{ 6, 254 },
	{ 255, 0 },
	{ 7, 0 },
	{ 255, 255 },
	{ 6, 254 },
	{ 255, 0 },
	{ 7, 0 },
	{ 255, 255 },
	{ 6, 254 },
	{ 255, 0 },
	{ 7, 0 },
	{ 255, 255 },
	{ 6, 254 }
};

NJS_TEX uv_0004C454[] = {
	{ 0 },
	{ 0, 255 },
	{ 250, 0 },
	{ 251, 254 },
	{ 0 },
	{ 0, 255 },
	{ 250, 0 },
	{ 251, 254 },
	{ 0 },
	{ 0, 255 },
	{ 250, 0 },
	{ 251, 254 },
	{ 0 },
	{ 0, 255 },
	{ 250, 0 },
	{ 251, 254 },
	{ 251, 254 },
	{ 250, 0 },
	{ 0, 255 },
	{ 0 },
	{ 251, 254 },
	{ 250, 0 },
	{ 0, 255 },
	{ 0 },
	{ 251, 254 },
	{ 250, 0 },
	{ 0, 255 },
	{ 0 },
	{ 251, 254 },
	{ 250, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_TEX uv_0004C4D4[] = {
	{ -1, 0 },
	{ 0, 255 },
	{ 241, 2 },
	{ 241, 254 },
	{ -1, 0 },
	{ 0, 255 },
	{ 241, 2 },
	{ 241, 254 },
	{ -1, 0 },
	{ 0, 255 },
	{ 241, 2 },
	{ 241, 254 },
	{ -1, 0 },
	{ 0, 255 },
	{ 241, 2 },
	{ 241, 254 }
};

NJS_TEX uv_0004C514[] = {
	{ 68, 246 },
	{ 8, 187 },
	{ 51, 255 },
	{ 0, 204 },
	{ 246, 187 },
	{ 68, 8 },
	{ 246, 67 },
	{ 187, 8 },
	{ 254, 50 },
	{ 204, 0 },
	{ 187, 246 },
	{ 204, 255 },
	{ 68, 8 },
	{ 254, 204 },
	{ 246, 187 },
	{ 51, 255 },
	{ 0, 204 },
	{ 8, 187 },
	{ 8, 187 },
	{ 8, 67 },
	{ 51, 255 },
	{ 68, 8 },
	{ 68, 246 },
	{ 187, 246 },
	{ 68, 8 },
	{ 8, 67 },
	{ 51, 0 },
	{ 0, 50 },
	{ 246, 187 },
	{ 187, 246 },
	{ 254, 204 },
	{ 204, 255 },
	{ 187, 8 },
	{ 246, 67 },
	{ 204, 0 },
	{ 254, 50 },
	{ 8, 67 },
	{ 68, 8 },
	{ 0, 50 },
	{ 51, 0 },
	{ 8, 67 },
	{ 8, 187 },
	{ 68, 8 },
	{ 68, 246 },
	{ 187, 8 },
	{ 187, 246 },
	{ 246, 67 },
	{ 246, 187 }
};

NJS_TEX uv_0004C5D4[] = {
	{ 250, 254 },
	{ 249, 1 },
	{ -1, 255 },
	{ 0, 1 },
	{ 250, 254 },
	{ 249, 1 },
	{ -1, 255 },
	{ 0, 1 },
	{ 250, 254 },
	{ 249, 1 },
	{ -1, 255 },
	{ 0, 1 },
	{ 250, 254 },
	{ 249, 1 },
	{ -1, 255 },
	{ 0, 1 },
	{ 0, 1 },
	{ -1, 255 },
	{ 249, 1 },
	{ 250, 254 },
	{ 0, 1 },
	{ -1, 255 },
	{ 249, 1 },
	{ 250, 254 },
	{ 0, 1 },
	{ -1, 255 },
	{ 249, 1 },
	{ 250, 254 },
	{ 0, 1 },
	{ -1, 255 },
	{ 249, 1 },
	{ 250, 254 }
};

NJS_TEX uv_0004C654[] = {
	{ 47, 1 },
	{ 47, 254 },
	{ 193, 1 },
	{ 194, 254 },
	{ 55, 1 },
	{ 55, 254 },
	{ 227, 0 },
	{ 227, 255 },
	{ 47, 1 },
	{ 47, 254 },
	{ 193, 1 },
	{ 194, 254 },
	{ 47, 1 },
	{ 47, 254 },
	{ 193, 1 },
	{ 194, 254 },
	{ 47, 1 },
	{ 47, 254 },
	{ 193, 1 },
	{ 194, 254 },
	{ 47, 1 },
	{ 47, 254 },
	{ 193, 1 },
	{ 194, 254 },
	{ 47, 1 },
	{ 47, 254 },
	{ 193, 1 },
	{ 194, 254 },
	{ 47, 1 },
	{ 47, 254 },
	{ 193, 1 },
	{ 194, 254 },
	{ 47, 1 },
	{ 47, 254 },
	{ 193, 1 },
	{ 194, 254 },
	{ 58, 256 },
	{ 57, 1 },
	{ 193, 255 },
	{ 193, 1 },
	{ 47, 1 },
	{ 47, 254 },
	{ 193, 1 },
	{ 194, 254 },
	{ 47, 1 },
	{ 47, 254 },
	{ 193, 1 },
	{ 194, 254 },
	{ 47, 1 },
	{ 47, 254 },
	{ 193, 1 },
	{ 194, 254 },
	{ 47, 1 },
	{ 47, 254 },
	{ 193, 1 },
	{ 194, 254 },
	{ 43, 0 },
	{ 43, 254 },
	{ 201, 0 },
	{ 201, 253 },
	{ 47, 1 },
	{ 47, 254 },
	{ 193, 1 },
	{ 194, 254 }
};

NJS_TEX uv_0004C754[] = {
	{ 254, 3 },
	{ 8, 5 },
	{ 253, 254 },
	{ 8, 254 },
	{ 254, 3 },
	{ 8, 5 },
	{ 253, 254 },
	{ 8, 254 },
	{ 254, 3 },
	{ 8, 5 },
	{ 253, 254 },
	{ 8, 254 },
	{ 8, 5 },
	{ 8, 254 },
	{ 253, 254 },
	{ 8, 4 },
	{ 255, 254 },
	{ 254, 0 }
};

NJS_TEX uv_0004C79C[] = {
	{ 0 },
	{ 0, 254 },
	{ 251, 0 },
	{ 250, 255 },
	{ 250, 255 },
	{ 251, 0 },
	{ 0, 254 },
	{ 0 },
	{ 0 },
	{ 0, 254 },
	{ 251, 0 },
	{ 250, 255 },
	{ 0 },
	{ 0, 254 },
	{ 251, 0 },
	{ 250, 255 },
	{ 250, 255 },
	{ 251, 0 },
	{ 0, 254 },
	{ 0 },
	{ 250, 255 },
	{ 251, 0 },
	{ 0, 254 },
	{ 0 },
	{ 250, 255 },
	{ 251, 0 },
	{ 0, 254 },
	{ 0 },
	{ 0 },
	{ 0, 254 },
	{ 251, 0 },
	{ 250, 255 }
};

NJS_TEX uv_0004C81C[] = {
	{ 0, 254 },
	{ 255, 255 },
	{ 0 },
	{ 254, 0 },
	{ 0, 254 },
	{ 255, 255 },
	{ 0 },
	{ 254, 0 },
	{ 0, 254 },
	{ 255, 255 },
	{ 0 },
	{ 254, 0 },
	{ 0, 254 },
	{ 255, 255 },
	{ 0 },
	{ 254, 0 }
};

NJS_TEX uv_0004C85C[] = {
	{ 251, 255 },
	{ 251, 0 },
	{ 0, 255 },
	{ -1, 0 },
	{ 251, 255 },
	{ 251, 0 },
	{ 0, 255 },
	{ -1, 0 },
	{ 251, 255 },
	{ 251, 0 },
	{ 0, 255 },
	{ -1, 0 },
	{ 251, 255 },
	{ 251, 0 },
	{ 0, 255 },
	{ -1, 0 },
	{ -1, 0 },
	{ 0, 255 },
	{ 251, 0 },
	{ 251, 255 },
	{ -1, 0 },
	{ 0, 255 },
	{ 251, 0 },
	{ 251, 255 },
	{ -1, 0 },
	{ 0, 255 },
	{ 251, 0 },
	{ 251, 255 },
	{ -1, 0 },
	{ 0, 255 },
	{ 251, 0 },
	{ 251, 255 }
};

NJS_TEX uv_0004C8DC[] = {
	{ 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0, 255 },
	{ 0 },
	{ 508, 255 },
	{ 508, 0 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 508, 0 },
	{ 508, 255 }
};

NJS_TEX uv_0004C91C[] = {
	{ 0 },
	{ 0, 254 },
	{ 510, 0 },
	{ 510, 254 },
	{ 0, 254 },
	{ 0 },
	{ 508, 254 },
	{ 508, 0 },
	{ 510, 0 },
	{ 510, 254 },
	{ 0 },
	{ 0, 254 },
	{ 508, 254 },
	{ 508, 0 },
	{ 0, 254 },
	{ 0 }
};

NJS_TEX uv_0004C95C[] = {
	{ 508, 0 },
	{ 508, 254 },
	{ 10, 0 },
	{ 9, 254 },
	{ 9, 254 },
	{ 10, 0 },
	{ 508, 254 },
	{ 508, 0 },
	{ 508, 0 },
	{ 508, 254 },
	{ 10, 0 },
	{ 9, 254 },
	{ 9, 254 },
	{ 10, 0 },
	{ 508, 254 },
	{ 508, 0 }
};

NJS_TEX uv_0004C99C[] = {
	{ 0 },
	{ 0, 254 },
	{ 510, 0 },
	{ 510, 254 },
	{ 0, 254 },
	{ 0 },
	{ 508, 254 },
	{ 508, 0 },
	{ 0, 254 },
	{ 0 },
	{ 510, 254 },
	{ 510, 0 },
	{ 0 },
	{ 0, 254 },
	{ 508, 0 },
	{ 508, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0004C9DC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 8, poly_0004BDE0, NULL, NULL, NULL, uv_0004C274, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_0004BE30, NULL, NULL, NULL, uv_0004C2F4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_0004BE58, NULL, NULL, NULL, uv_0004C334, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 5, poly_0004BEA0, NULL, NULL, NULL, uv_0004C3B4, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 4, poly_0004BEDA, NULL, NULL, NULL, uv_0004C414, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 8, poly_0004BF02, NULL, NULL, NULL, uv_0004C454, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 4, poly_0004BF52, NULL, NULL, NULL, uv_0004C4D4, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 10, poly_0004BF7A, NULL, NULL, NULL, uv_0004C514, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 8, poly_0004BFEE, NULL, NULL, NULL, uv_0004C5D4, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 16, poly_0004C03E, NULL, NULL, NULL, uv_0004C654, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 5, poly_0004C0DE, NULL, NULL, NULL, uv_0004C754, NULL },
	{ NJD_MESHSET_TRIMESH | 11, 8, poly_0004C10C, NULL, NULL, NULL, uv_0004C79C, NULL },
	{ NJD_MESHSET_TRIMESH | 12, 4, poly_0004C15C, NULL, NULL, NULL, uv_0004C81C, NULL },
	{ NJD_MESHSET_TRIMESH | 13, 8, poly_0004C184, NULL, NULL, NULL, uv_0004C85C, NULL },
	{ NJD_MESHSET_TRIMESH | 14, 4, poly_0004C1D4, NULL, NULL, NULL, uv_0004C8DC, NULL },
	{ NJD_MESHSET_TRIMESH | 15, 4, poly_0004C1FC, NULL, NULL, NULL, uv_0004C91C, NULL },
	{ NJD_MESHSET_TRIMESH | 16, 4, poly_0004C224, NULL, NULL, NULL, uv_0004C95C, NULL },
	{ NJD_MESHSET_TRIMESH | 17, 4, poly_0004C24C, NULL, NULL, NULL, uv_0004C99C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0004CB8C[] = {
	{ 105.4999f, 289.2499f, -0.00002f },
	{ 105.4999f, 426.7499f, -0.00002f },
	{ 74.59971f, 289.2499f, -74.59971f },
	{ 74.59971f, 426.7499f, -74.59971f },
	{ 0, 289.2499f, -105.4999f },
	{ 0, 426.7499f, -105.4999f },
	{ -74.59971f, 289.2499f, -74.59971f },
	{ -74.59971f, 426.7499f, -74.59971f },
	{ -105.4999f, 289.2499f, -0.00002f },
	{ -105.4999f, 426.7499f, -0.00002f },
	{ -74.59971f, 289.2499f, 74.59971f },
	{ -74.59971f, 426.7499f, 74.59971f },
	{ 0, 289.2499f, 105.4999f },
	{ 0, 426.7499f, 105.4999f },
	{ 74.59971f, 289.2499f, 74.59971f },
	{ 74.59971f, 426.7499f, 74.59971f },
	{ -90, 320, -150 },
	{ 90, -210, -150 },
	{ -150, -210, -90 },
	{ -90, -210, 150 },
	{ 90, 320, 150 },
	{ -150, 319, 90 },
	{ 150, 320, -90 },
	{ -150, 320, -90 },
	{ 150, 320, 90 },
	{ -90, 319, 150 },
	{ 150, -210, 90 },
	{ 150, -210, -90 },
	{ -90, -210, -150 },
	{ -150, -210, 90 },
	{ 90, -210, 150 },
	{ 90, 320, -150 },
	{ 150, 400, -90 },
	{ 90, 400, -150 },
	{ 90, 400, 150 },
	{ -90, 400, 150 },
	{ -150, 400, 90 },
	{ -150, 400, -90 },
	{ -90, 400, -150 },
	{ 150, 400, 90 },
	{ -150, 510, 90 },
	{ -90, 510, 150 },
	{ -150, 510, -90 },
	{ -90, 510, -150 },
	{ 90, 510, -150 },
	{ 150, 510, -90 },
	{ 150, 510, 90 },
	{ 90, 510, 150 },
	{ -150, 0, 90 },
	{ -90, 0, 150 },
	{ 90, 0, 150 },
	{ 150, 0, 90 },
	{ -150, 0, -90 },
	{ -90, 0, -150 },
	{ 150, 0, -90 },
	{ 90, 0, -150 },
	{ 113.4714f, 308.8904f, -104.2117f },
	{ 123.9139f, 308.8904f, -114.6542f },
	{ 113.4714f, 404.8664f, -104.2117f },
	{ 123.9139f, 404.8664f, -114.6542f },
	{ 103.0289f, 308.8904f, -114.6542f },
	{ 113.4714f, 308.8904f, -125.0967f },
	{ 103.0289f, 404.8664f, -114.6542f },
	{ 113.4714f, 404.8664f, -125.0967f },
	{ 103.8915f, 308.8904f, 113.0278f },
	{ 114.334f, 308.8904f, 123.4703f },
	{ 103.8915f, 404.8664f, 113.0278f },
	{ 114.334f, 404.8664f, 123.4703f },
	{ 114.334f, 308.8904f, 102.5853f },
	{ 124.7765f, 308.8904f, 113.0278f },
	{ 114.334f, 404.8664f, 102.5853f },
	{ 124.7765f, 404.8664f, 113.0278f },
	{ -113.104f, 308.8904f, 103.5262f },
	{ -123.5464f, 308.8904f, 113.9687f },
	{ -113.104f, 404.8664f, 103.5262f },
	{ -123.5464f, 404.8664f, 113.9687f },
	{ -102.6615f, 308.8904f, 113.9687f },
	{ -113.104f, 308.8904f, 124.4112f },
	{ -102.6615f, 404.8664f, 113.9687f },
	{ -113.104f, 404.8664f, 124.4112f },
	{ -103.6161f, 308.8904f, -114.6115f },
	{ -114.0586f, 308.8904f, -125.054f },
	{ -103.6161f, 404.8664f, -114.6115f },
	{ -114.0586f, 404.8664f, -125.054f },
	{ -114.0586f, 308.8904f, -104.169f },
	{ -124.5011f, 308.8904f, -114.6115f },
	{ -114.0586f, 404.8664f, -104.169f },
	{ -124.5011f, 404.8664f, -114.6115f },
	{ -150, 100, 90 },
	{ -150, 100, -90 },
	{ 150, 100, 90 },
	{ -90, 100, 150 },
	{ 150, 100, -90 },
	{ -90, 100, -150 },
	{ 90, 100, 150 },
	{ 90, 100, -150 },
	{ -150.0808f, 200.9707f, 89.96501f },
	{ -90, 200, -150 },
	{ 90, 200, 150 },
	{ 150, 200, -90 },
	{ -90, 201, 150 },
	{ -150, 200, -90 },
	{ 90, 200, -150 },
	{ 150, 200, 90 },
	{ 70, 200, 140 },
	{ -70, 100, -140 },
	{ -140, 510, -70 },
	{ -140, 510, 70 },
	{ 70, 0, 140 },
	{ 140, 510, -70 },
	{ 140, 510, 70 },
	{ 140, -210, 70 },
	{ 140, 400, -70 },
	{ 140, 400, 70 },
	{ 70, 100, -140 },
	{ -140, 400, 70 },
	{ -140, 400, -70 },
	{ 70, 200, -140 },
	{ -140, 320, 70 },
	{ -140, 320, -70 },
	{ 70, -210, -140 },
	{ -140, 200, -70 },
	{ -140, 200, 70 },
	{ 70, 0, -140 },
	{ -140, 100, -70 },
	{ -140, 100, 70 },
	{ -70, 0, -140 },
	{ -140, 0, -70 },
	{ -140, 0, 70 },
	{ -70, -210, 140 },
	{ 140, 0, -70 },
	{ 140, 0, 70 },
	{ -70, 200, 140 },
	{ 140, 100, -70 },
	{ 140, 100, 70 },
	{ 70, -210, 140 },
	{ 140, 200, -70 },
	{ 140, 200, 70 },
	{ -70, 200, -140 },
	{ -140, -210, -70 },
	{ -140, -210, 70 },
	{ -70, 100, 140 },
	{ -70, 510, 140 },
	{ 70, 510, 140 },
	{ -70, 0, 140 },
	{ -70, 510, -140 },
	{ 70, 510, -140 },
	{ 140, 320, -70 },
	{ -70, 400, 140 },
	{ 70, 400, 140 },
	{ 140, -210, -70 },
	{ -70, 400, -140 },
	{ 70, 400, -140 },
	{ 70, 100, 140 },
	{ -70, 320, -140 },
	{ 70, 320, -140 },
	{ 140, 320, 70 },
	{ -70, 320, 140 },
	{ 70, 320, 140 },
	{ -70, -210, -140 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0004D30C[] = {
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ -0.128602f, 0.5961829f, -0.7924809f },
	{ 0.160182f, 0, -0.987087f },
	{ -0.987087f, 0, -0.160182f },
	{ -0.160182f, 0, 0.987087f },
	{ 0.128602f, 0.5961829f, 0.792482f },
	{ -0.803005f, 0.579687f, 0.138369f },
	{ 0.792482f, 0.5961829f, -0.128602f },
	{ -0.792482f, 0.5961829f, -0.128602f },
	{ 0.7924809f, 0.5961829f, 0.128602f },
	{ -0.138383f, 0.579628f, 0.803045f },
	{ 0.987087f, 0, 0.160182f },
	{ 0.987087f, 0, -0.160182f },
	{ -0.160182f, 0, -0.987087f },
	{ -0.987087f, 0, 0.160182f },
	{ 0.160182f, 0, 0.987087f },
	{ 0.128602f, 0.5961829f, -0.792482f },
	{ 0.7924809f, -0.5961829f, -0.128602f },
	{ 0.128602f, -0.5961829f, -0.792482f },
	{ 0.128602f, -0.5961829f, 0.7924809f },
	{ -0.128602f, -0.5961829f, 0.792482f },
	{ -0.7924809f, -0.5961829f, 0.128602f },
	{ -0.792482f, -0.5961829f, -0.128602f },
	{ -0.128602f, -0.5961829f, -0.7924809f },
	{ 0.792482f, -0.5961829f, 0.128602f },
	{ -0.792482f, 0.5961829f, 0.128602f },
	{ -0.128602f, 0.5961829f, 0.7924809f },
	{ -0.7924809f, 0.5961829f, -0.128602f },
	{ -0.128602f, 0.5961829f, -0.792482f },
	{ 0.128602f, 0.5961829f, -0.7924809f },
	{ 0.792482f, 0.5961829f, -0.128602f },
	{ 0.7924809f, 0.5961829f, 0.128602f },
	{ 0.128602f, 0.5961829f, 0.792482f },
	{ -0.987087f, 0, 0.160182f },
	{ -0.160182f, 0, 0.987087f },
	{ 0.160182f, 0, 0.987087f },
	{ 0.987087f, 0, 0.160182f },
	{ -0.987087f, 0, -0.160182f },
	{ -0.160182f, 0, -0.987087f },
	{ 0.987087f, 0, -0.160182f },
	{ 0.160182f, 0, -0.987087f },
	{ -0.00001f, 0, 1 },
	{ 1, 0, 0.000001f },
	{ -0.00001f, 0, 1 },
	{ 1, 0, 0.000002f },
	{ -1, 0, 0 },
	{ 0.000001f, 0, -1 },
	{ -1, 0, 0 },
	{ 0.000001f, 0, -1 },
	{ -1, 0, 0 },
	{ 0, 0, 1 },
	{ -1, 0, 0 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 1, 0, 0 },
	{ 0, 0, -1 },
	{ 1, 0, 0 },
	{ 0, 0, -1 },
	{ -1, 0, 0 },
	{ 0, 0, -1 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ 0, 0, 1 },
	{ 1, 0, 0 },
	{ 0, 0, 1 },
	{ 1, 0, 0 },
	{ 0, 0, -1 },
	{ 1, 0, 0 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ -1, 0, 0 },
	{ 0, 0, 1 },
	{ -1, 0, 0 },
	{ -0.9870729f, -0.000367f, 0.160269f },
	{ -0.987087f, 0, -0.160182f },
	{ 0.987087f, 0, 0.160182f },
	{ -0.16014f, -0.00055f, 0.987094f },
	{ 0.987087f, 0, -0.160182f },
	{ -0.160182f, 0, -0.987087f },
	{ 0.160182f, 0, 0.987087f },
	{ 0.160182f, 0, -0.987087f },
	{ -0.987382f, 0.000239f, 0.158355f },
	{ -0.160182f, 0, -0.987087f },
	{ 0.160182f, 0, 0.987087f },
	{ 0.987087f, 0, -0.160182f },
	{ -0.160031f, 0.000051f, 0.987112f },
	{ -0.987087f, 0, -0.160182f },
	{ 0.160182f, 0, -0.987087f },
	{ 0.987087f, 0, 0.160182f },
	{ -0.229753f, 0, 0.973249f },
	{ 0.229753f, 0, -0.973249f },
	{ -0.6294979f, 0.762659f, 0.148604f },
	{ -0.6294979f, 0.762659f, -0.148604f },
	{ -0.229753f, 0, 0.973249f },
	{ 0.6294979f, 0.762659f, 0.148604f },
	{ 0.6294979f, 0.762659f, -0.148604f },
	{ 0.973249f, 0, -0.229753f },
	{ 0.6294979f, -0.762659f, 0.148604f },
	{ 0.6294979f, -0.762659f, -0.148604f },
	{ -0.229753f, 0, -0.973249f },
	{ -0.6294979f, -0.762659f, -0.148604f },
	{ -0.6294979f, -0.762659f, 0.148604f },
	{ -0.229753f, 0, -0.973249f },
	{ -0.630981f, 0.763816f, -0.135821f },
	{ -0.6294979f, 0.762659f, 0.148604f },
	{ -0.229753f, 0, -0.973249f },
	{ -0.973249f, 0, 0.229753f },
	{ -0.972821f, 0.000163f, -0.231559f },
	{ -0.229753f, 0, -0.973249f },
	{ -0.973249f, 0, 0.229753f },
	{ -0.973218f, -0.000193f, -0.229886f },
	{ 0.229753f, 0, -0.973249f },
	{ -0.973249f, 0, 0.229753f },
	{ -0.973249f, 0, -0.229753f },
	{ 0.229753f, 0, 0.973249f },
	{ 0.973249f, 0, 0.229753f },
	{ 0.973249f, 0, -0.229753f },
	{ 0.229753f, 0, 0.973249f },
	{ 0.973249f, 0, 0.229753f },
	{ 0.973249f, 0, -0.229753f },
	{ -0.229753f, 0, 0.973249f },
	{ 0.973249f, 0, 0.229753f },
	{ 0.973249f, 0, -0.229753f },
	{ 0.229753f, 0, -0.973249f },
	{ -0.973249f, 0, 0.229753f },
	{ -0.973249f, 0, -0.229753f },
	{ 0.229753f, 0, 0.973249f },
	{ 0.148604f, 0.762659f, 0.6294979f },
	{ -0.148604f, 0.762659f, 0.6294979f },
	{ 0.229753f, 0, 0.973249f },
	{ 0.148604f, 0.762659f, -0.6294979f },
	{ -0.148604f, 0.762659f, -0.6294979f },
	{ 0.6294979f, 0.762659f, 0.148604f },
	{ 0.148604f, -0.762659f, 0.6294979f },
	{ -0.148604f, -0.762659f, 0.6294979f },
	{ 0.973249f, 0, 0.229753f },
	{ 0.148604f, -0.762659f, -0.6294979f },
	{ -0.148604f, -0.762659f, -0.6294979f },
	{ -0.229753f, 0, 0.973249f },
	{ 0.148604f, 0.762659f, -0.6294979f },
	{ -0.148604f, 0.762659f, -0.6294979f },
	{ 0.6294979f, 0.762659f, -0.148604f },
	{ 0.135821f, 0.763816f, 0.630981f },
	{ -0.148604f, 0.762659f, 0.6294979f },
	{ 0.229753f, 0, -0.973249f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0004DA8C = { vertex_0004CB8C, normal_0004D30C, LengthOfArray<Sint32>(vertex_0004CB8C), meshlist_0004C9DC, matlist_0004BC78, LengthOfArray<Uint16>(meshlist_0004C9DC), LengthOfArray<Uint16>(matlist_0004BC78), { -0.040398f, 150, 0 }, 403.9327f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0004DAB4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004DA8C, 378.0001f, 5, 453.9999f, 0xFFFFFE5F, 0, 0x1A1, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0004DAE8[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 80, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 78, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 79, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0004DB24[] = {
	4, 2, 3, 1, 0,
	4, 3, 5, 0, 4,
	4, 5, 7, 4, 6,
	4, 7, 2, 6, 1,
	4, 10, 11, 9, 8,
	4, 11, 13, 8, 12,
	4, 13, 15, 12, 14,
	4, 15, 10, 14, 9
};

extern "C" __declspec(dllexport) Sint16 poly_0004DB74[] = {
	4, 18, 19, 17, 16,
	4, 21, 18, 20, 17,
	4, 23, 21, 22, 20,
	4, 19, 23, 16, 22,
	4, 26, 27, 25, 24,
	4, 29, 26, 28, 25,
	4, 31, 29, 30, 28,
	4, 27, 31, 24, 30
};

extern "C" __declspec(dllexport) Sint16 poly_0004DBC4[] = {
	4, 1, 0, 16, 17,
	4, 0, 4, 17, 20,
	4, 4, 6, 20, 22,
	4, 6, 1, 22, 16,
	4, 9, 8, 24, 25,
	4, 8, 12, 25, 28,
	4, 12, 14, 28, 30,
	4, 14, 9, 30, 24
};

NJS_TEX uv_0004DC14[] = {
	{ 254, 255 },
	{ -1, 252 },
	{ 252, 0 },
	{ 4, 2 },
	{ 254, 255 },
	{ -1, 252 },
	{ 252, 0 },
	{ 4, 2 },
	{ 254, 255 },
	{ -1, 252 },
	{ 252, 0 },
	{ 4, 2 },
	{ 254, 255 },
	{ -1, 252 },
	{ 252, 0 },
	{ 4, 2 },
	{ 254, 255 },
	{ -1, 252 },
	{ 252, 0 },
	{ 4, 2 },
	{ 254, 255 },
	{ -1, 252 },
	{ 252, 0 },
	{ 4, 2 },
	{ 254, 255 },
	{ -1, 252 },
	{ 252, 0 },
	{ 4, 2 },
	{ 254, 255 },
	{ -1, 252 },
	{ 252, 0 },
	{ 4, 2 }
};

NJS_TEX uv_0004DC94[] = {
	{ 0, -256 },
	{ 255, -254 },
	{ 0, 258 },
	{ 254, 254 },
	{ 0, -256 },
	{ 255, -254 },
	{ 0, 258 },
	{ 254, 254 },
	{ 0, -256 },
	{ 255, -254 },
	{ 0, 258 },
	{ 254, 254 },
	{ 0, -256 },
	{ 255, -254 },
	{ 0, 258 },
	{ 254, 254 },
	{ 0, -256 },
	{ 255, -254 },
	{ 0, 258 },
	{ 254, 254 },
	{ 0, -256 },
	{ 255, -254 },
	{ 0, 258 },
	{ 254, 254 },
	{ 0, -256 },
	{ 255, -254 },
	{ 0, 258 },
	{ 254, 254 },
	{ 0, -256 },
	{ 255, -254 },
	{ 0, 258 },
	{ 254, 254 }
};

NJS_TEX uv_0004DD14[] = {
	{ 253, 254 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0, 1 },
	{ 253, 254 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0, 1 },
	{ 253, 254 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0, 1 },
	{ 253, 254 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0, 1 },
	{ 253, 254 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0, 1 },
	{ 253, 254 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0, 1 },
	{ 253, 254 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0, 1 },
	{ 253, 254 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0004DD94[] = {
	{ NJD_MESHSET_TRIMESH | 0, 8, poly_0004DB24, NULL, NULL, NULL, uv_0004DC14, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 8, poly_0004DB74, NULL, NULL, NULL, uv_0004DC94, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 8, poly_0004DBC4, NULL, NULL, NULL, uv_0004DD14, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0004DDDC[] = {
	{ -32.14154f, -133.3319f, 6.454475f },
	{ -32.13765f, -133.3319f, -4.718414f },
	{ -32.13764f, -200.0077f, -4.718488f },
	{ -32.14348f, -200.0077f, 6.455824f },
	{ -20.9676f, -133.3319f, 6.451594f },
	{ -20.96759f, -200.0077f, 6.451504f },
	{ -20.96778f, -133.3319f, -4.718306f },
	{ -20.96785f, -200.0077f, -4.718325f },
	{ 16.45515f, -133.3319f, 6.299989f },
	{ 16.45512f, -133.3319f, -4.566616f },
	{ 16.4551f, -200.0079f, -4.566673f },
	{ 16.45515f, -200.0079f, 6.299979f },
	{ 27.32163f, -133.3319f, 6.300092f },
	{ 27.32161f, -200.0079f, 6.300133f },
	{ 27.32165f, -133.3319f, -4.566525f },
	{ 27.32164f, -200.0079f, -4.566536f },
	{ -32.13765f, -66.6558f, -4.718341f },
	{ -32.1396f, -66.6558f, 6.453125f },
	{ -32.13767f, 0.020298f, 6.451776f },
	{ -32.13767f, 0.020298f, -4.718267f },
	{ -20.96762f, -66.6558f, 6.451685f },
	{ -20.96763f, 0.020298f, 6.451776f },
	{ -20.9677f, -66.6558f, -4.718286f },
	{ -20.96763f, 0.020298f, -4.718267f },
	{ 16.45514f, -66.6558f, -4.566559f },
	{ 16.45515f, -66.6558f, 6.299999f },
	{ 16.45515f, -0.008014999f, 6.300009f },
	{ 16.45515f, -0.008014999f, -4.566502f },
	{ 27.32164f, -66.6558f, 6.30005f },
	{ 27.32166f, -0.008014999f, 6.300008f },
	{ 27.32165f, -66.6558f, -4.566514f },
	{ 27.32166f, -0.008014999f, -4.566502f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0004DF5C[] = {
	{ -0.707139f, 0.000014f, 0.707075f },
	{ -0.70698f, 0, -0.707233f },
	{ -0.706948f, 0, -0.707265f },
	{ -0.707149f, 0.000014f, 0.707065f },
	{ 0.707204f, 0.000014f, 0.70701f },
	{ 0.7072279f, 0.000014f, 0.706985f },
	{ 0.707105f, 0, -0.707109f },
	{ 0.707104f, 0, -0.70711f },
	{ -0.707109f, 0, 0.707104f },
	{ -0.707105f, 0, -0.707109f },
	{ -0.707104f, 0, -0.707109f },
	{ -0.70711f, 0, 0.707104f },
	{ 0.707103f, 0, 0.7071109f },
	{ 0.7071019f, 0, 0.707112f },
	{ 0.70711f, 0, -0.707103f },
	{ 0.7071109f, 0, -0.7071019f },
	{ -0.707043f, 0.000011f, -0.70717f },
	{ -0.707123f, 0.000017f, 0.707091f },
	{ -0.707113f, 0.00002f, 0.707101f },
	{ -0.707075f, 0.000021f, -0.7071379f },
	{ 0.707155f, 0.000006f, 0.707058f },
	{ 0.707131f, -0.00002f, 0.707083f },
	{ 0.707106f, 0, -0.707108f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.707106f, 0, -0.707108f },
	{ -0.707108f, 0, 0.707106f },
	{ -0.7071069f, 0, 0.707106f },
	{ -0.707106f, 0.000001f, -0.7071069f },
	{ 0.707105f, 0, 0.707109f },
	{ 0.707106f, 0, 0.707108f },
	{ 0.707109f, 0, -0.707105f },
	{ 0.707108f, 0.000001f, -0.707106f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0004E0DC = { vertex_0004DDDC, normal_0004DF5C, LengthOfArray<Sint32>(vertex_0004DDDC), meshlist_0004DD94, matlist_0004DAE8, LengthOfArray<Uint16>(meshlist_0004DD94), LengthOfArray<Uint16>(matlist_0004DAE8), { -2.410913f, -99.99383f, 0.868668f }, 104.4586f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0004E104 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004E0DC, -355.0004f, 0, -1660, 0, 0x3555, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0004E138[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0004E174[] = {
	3, 1, 4, 5,
	0x8000u | 10, 6, 3, 7, 4, 8, 5, 2, 1, 8, 7,
	6, 7, 6, 1, 0, 4, 3,
	3, 10, 13, 14,
	0x8000u | 10, 15, 12, 16, 13, 17, 14, 11, 10, 17, 16,
	6, 16, 15, 10, 9, 13, 12,
	3, 19, 22, 23,
	0x8000u | 10, 24, 21, 25, 22, 26, 23, 20, 19, 26, 25,
	6, 25, 24, 19, 18, 22, 21,
	3, 27, 31, 29,
	8, 27, 28, 31, 32, 29, 30, 27, 28,
	3, 37, 35, 33,
	8, 37, 38, 35, 36, 33, 34, 37, 38,
	3, 39, 43, 41,
	8, 39, 40, 43, 44, 41, 42, 39, 40,
	3, 45, 49, 47,
	8, 47, 48, 45, 46, 49, 50, 47, 48
};

extern "C" __declspec(dllexport) Sint16 poly_0004E260[] = {
	0x8000u | 5, 53, 59, 51, 54, 52,
	0x8000u | 5, 54, 60, 52, 58, 56,
	4, 58, 56, 57, 55,
	4, 57, 55, 53, 51,
	4, 63, 61, 64, 62,
	4, 64, 62, 68, 66,
	4, 68, 66, 67, 65,
	4, 63, 67, 61, 65,
	4, 73, 71, 77, 75,
	4, 76, 74, 72, 70,
	4, 70, 74, 71, 75,
	4, 76, 72, 77, 73
};

extern "C" __declspec(dllexport) Sint16 poly_0004E2DC[] = {
	0x8000u | 5, 57, 58, 59, 60, 54,
	3, 57, 53, 59,
	3, 69, 67, 63,
	3, 63, 64, 69,
	4, 67, 69, 68, 64,
	10, 80, 76, 81, 77, 79, 75, 78, 74, 80, 76,
	4, 79, 78, 81, 80,
	0x8000u | 10, 70, 83, 71, 85, 73, 84, 72, 82, 70, 83,
	4, 85, 84, 83, 82
};

NJS_TEX uv_0004E34C[] = {
	{ 17, 137 },
	{ 19, 136 },
	{ 2, 130 },
	{ 44, 132 },
	{ 44, 130 },
	{ 19, 137 },
	{ 19, 136 },
	{ 2, 131 },
	{ 2, 130 },
	{ 0, 131 },
	{ 17, 137 },
	{ 2, 131 },
	{ 19, 137 },
	{ 19, 137 },
	{ 44, 132 },
	{ 17, 137 },
	{ 43, 131 },
	{ 19, 136 },
	{ 44, 130 },
	{ 238, 115 },
	{ 237, 116 },
	{ 248, 111 },
	{ 204, 131 },
	{ 205, 132 },
	{ 236, 115 },
	{ 237, 116 },
	{ 247, 110 },
	{ 248, 111 },
	{ 249, 110 },
	{ 238, 115 },
	{ 247, 110 },
	{ 236, 115 },
	{ 236, 115 },
	{ 204, 131 },
	{ 238, 115 },
	{ 204, 132 },
	{ 237, 116 },
	{ 205, 132 },
	{ 161, 24 },
	{ 159, 26 },
	{ 153, 1 },
	{ 159, 54 },
	{ 159, 54 },
	{ 159, 26 },
	{ 159, 26 },
	{ 153, 1 },
	{ 153, 1 },
	{ 154, 0 },
	{ 161, 24 },
	{ 153, 1 },
	{ 159, 26 },
	{ 159, 26 },
	{ 159, 54 },
	{ 161, 24 },
	{ 161, 54 },
	{ 159, 26 },
	{ 159, 54 },
	{ 75, 52 },
	{ 74, 52 },
	{ 75, 52 },
	{ 75, 52 },
	{ 72, 95 },
	{ 74, 52 },
	{ 71, 95 },
	{ 75, 52 },
	{ 72, 95 },
	{ 75, 52 },
	{ 72, 95 },
	{ 157, 23 },
	{ 157, 23 },
	{ 155, 23 },
	{ 157, 23 },
	{ 149, 66 },
	{ 157, 23 },
	{ 149, 66 },
	{ 155, 23 },
	{ 148, 66 },
	{ 157, 23 },
	{ 149, 66 },
	{ 18, 122 },
	{ 18, 123 },
	{ 18, 123 },
	{ 18, 122 },
	{ 48, 122 },
	{ 18, 123 },
	{ 48, 123 },
	{ 18, 123 },
	{ 48, 123 },
	{ 18, 122 },
	{ 48, 122 },
	{ 0, 122 },
	{ 0, 124 },
	{ 0, 124 },
	{ 255, 124 },
	{ 204, 124 },
	{ 255, 122 },
	{ 204, 122 },
	{ 255, 124 },
	{ 204, 124 },
	{ 255, 124 },
	{ 204, 124 }
};

NJS_TEX uv_0004E4E0[] = {
	{ 155, -506 },
	{ 166, -466 },
	{ 155, 159 },
	{ 173, -452 },
	{ 169, 159 },
	{ 156, -444 },
	{ 173, -400 },
	{ 156, 159 },
	{ 186, -428 },
	{ 186, 159 },
	{ 186, -432 },
	{ 186, 161 },
	{ 206, -430 },
	{ 205, 161 },
	{ 186, -432 },
	{ 186, 159 },
	{ 155, -500 },
	{ 156, 159 },
	{ 24, -304 },
	{ 23, 154 },
	{ 0, -352 },
	{ 0, 154 },
	{ 30, -340 },
	{ 23, 154 },
	{ 54, -362 },
	{ 54, 154 },
	{ 48, -368 },
	{ 48, 150 },
	{ 67, -368 },
	{ 67, 150 },
	{ 24, -298 },
	{ 55, -366 },
	{ 23, 154 },
	{ 54, 154 },
	{ 0, -242 },
	{ 0, -189 },
	{ 255, -242 },
	{ 255, -189 },
	{ 255, -242 },
	{ 255, -189 },
	{ 0, -242 },
	{ 0, -189 },
	{ 0, -189 },
	{ 254, -188 },
	{ 0, -284 },
	{ 254, -286 },
	{ 255, -242 },
	{ 0, -244 },
	{ 256, -428 },
	{ 0, -430 }
};

NJS_TEX uv_0004E5A8[] = {
	{ 252, 61 },
	{ 250, 138 },
	{ 67, 64 },
	{ 206, 235 },
	{ 33, 206 },
	{ 252, 62 },
	{ 65, 3 },
	{ 66, 63 },
	{ 86, 153 },
	{ 8, 15 },
	{ -2, 255 },
	{ -1, 254 },
	{ 233, 236 },
	{ 85, 156 },
	{ 8, 15 },
	{ 85, 155 },
	{ 236, 18 },
	{ 232, 237 },
	{ 211, 57 },
	{ 253, 1 },
	{ 184, 134 },
	{ 0 },
	{ 91, 205 },
	{ 0, 254 },
	{ 220, 221 },
	{ 254, 254 },
	{ 211, 58 },
	{ 253, 3 },
	{ 90, 204 },
	{ 220, 221 },
	{ 184, 135 },
	{ 212, 56 },
	{ -2, 255 },
	{ 173, 182 },
	{ 254, 254 },
	{ 223, 122 },
	{ 213, 10 },
	{ 138, 132 },
	{ 13, 13 },
	{ 78, 223 },
	{ -2, 254 },
	{ 173, 182 },
	{ 224, 122 },
	{ 139, 132 },
	{ 173, 181 },
	{ 78, 223 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0004E660[] = {
	{ NJD_MESHSET_TRIMESH | 0, 17, poly_0004E174, NULL, NULL, NULL, uv_0004E34C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 12, poly_0004E260, NULL, NULL, NULL, uv_0004E4E0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 9, poly_0004E2DC, NULL, NULL, NULL, uv_0004E5A8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0004E6A8[] = {
	{ -44.3042f, 77.8812f, 3.266863f },
	{ -60.04721f, 74.32218f, -0.307053f },
	{ -70.09203f, 78.13627f, -9.143275f },
	{ -44.0806f, 78.40008f, 2.302896f },
	{ -58.5232f, 75.04452f, -0.833764f },
	{ -68.89164f, 78.8079f, -9.780223f },
	{ -43.90931f, 77.36233f, 2.359505f },
	{ -58.35191f, 74.00678f, -0.777155f },
	{ -68.72036f, 77.77016f, -9.723614f },
	{ 50.45914f, 77.60844f, 3.96655f },
	{ 70.32371f, 88.35897f, 5.202379f },
	{ 76.79635f, 90.98199f, 2.113175f },
	{ 50.64415f, 77.31416f, 3.35189f },
	{ 69.5263f, 87.56813f, 4.57493f },
	{ 76.24379f, 90.31493f, 1.488095f },
	{ 50.27482f, 77.93711f, 3.372445f },
	{ 69.157f, 88.19109f, 4.595485f },
	{ 75.87445f, 90.93787f, 1.50865f },
	{ 24.82955f, 126.537f, 1.21965f },
	{ 24.82482f, 145.2612f, 1.21965f },
	{ 21.05865f, 160.9426f, 1.21965f },
	{ 23.8441f, 126.537f, 0.650702f },
	{ 23.84646f, 143.9778f, 0.650702f },
	{ 20.07719f, 159.9791f, 0.650702f },
	{ 23.8441f, 126.537f, 1.788598f },
	{ 23.84646f, 143.9778f, 1.788598f },
	{ 20.07719f, 159.9791f, 1.788598f },
	{ -25.52393f, 127.9201f, -0.723611f },
	{ -27.31026f, 100.3819f, 1.129141f },
	{ -25.52053f, 127.9766f, 0.263797f },
	{ -27.30687f, 100.4384f, 2.11655f },
	{ -26.44028f, 127.9917f, -0.358915f },
	{ -28.22662f, 100.4535f, 1.493838f },
	{ 21.60889f, 146.1557f, -0.024496f },
	{ 17.11338f, 118.8287f, -0.024496f },
	{ 22.40713f, 146.0436f, -0.5961789f },
	{ 17.91162f, 118.7167f, -0.5961789f },
	{ 22.42909f, 146.0405f, 0.514442f },
	{ 17.93358f, 118.7136f, 0.514442f },
	{ -59.3282f, 83.67759f, -5.495809f },
	{ -41.79818f, 83.60884f, -5.497299f },
	{ -59.3282f, 82.9113f, -4.95687f },
	{ -41.79818f, 82.94568f, -4.956127f },
	{ -59.3282f, 82.93182f, -6.067492f },
	{ -41.79818f, 82.96619f, -6.06675f },
	{ 80.01652f, 83.41443f, -4.37269f },
	{ 50.09156f, 83.41443f, -4.372689f },
	{ 80.01652f, 82.66865f, -4.944373f },
	{ 50.09156f, 82.66865f, -4.944373f },
	{ 80.01652f, 82.64812f, -3.833752f },
	{ 50.09156f, 82.64812f, -3.833751f },
	{ 16.45521f, -0.00053f, -4.5665f },
	{ 16.45521f, -0.00053f, 6.300008f },
	{ 16.4551f, 144.4453f, -4.566415f },
	{ 16.45521f, 133.0429f, 6.300008f },
	{ 27.32172f, -0.00053f, -4.5665f },
	{ 27.32172f, -0.00053f, 6.300007f },
	{ 27.32172f, 128.6351f, -4.5665f },
	{ 27.32172f, 128.6351f, 6.300007f },
	{ 16.4574f, 133.569f, 0.7848009f },
	{ 23.56707f, 122.332f, 6.307603f },
	{ -32.13759f, 0.028263f, -4.718266f },
	{ -32.13759f, 0.028263f, 6.451776f },
	{ -32.13759f, 99.99612f, -4.718266f },
	{ -29.8558f, 109.9412f, 6.550614f },
	{ -20.96756f, 0.028263f, -4.718266f },
	{ -20.96756f, 0.028263f, 6.451776f },
	{ -20.96756f, 114.5973f, -4.718266f },
	{ -20.96756f, 114.5973f, 6.451776f },
	{ -28.02109f, 114.7266f, -4.625237f },
	{ -40.93045f, 74.82984f, -10.11166f },
	{ -40.93045f, 74.82984f, 8.893838f },
	{ -40.93045f, 86.41673f, -10.11166f },
	{ -40.93045f, 86.41673f, 8.893838f },
	{ 52.61576f, 74.82984f, -10.11166f },
	{ 52.61576f, 74.82984f, 8.893837f },
	{ 52.61576f, 86.41673f, -10.11166f },
	{ 52.61576f, 86.41673f, 8.893837f },
	{ 58.96498f, 74.589f, -10.28874f },
	{ 63.99142f, 75.80425f, 6.184541f },
	{ 57.53292f, 83.92826f, -10.11166f },
	{ 61.75508f, 80.97615f, -4.361603f },
	{ -50.14865f, 74.71053f, -6.994083f },
	{ -52.4955f, 77.95871f, 2.774441f },
	{ -53.33134f, 82.56689f, -0.7251379f },
	{ -45.47395f, 82.79958f, 10.61696f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0004EAB0[] = {
	{ -0.23194f, 0.043257f, 0.971768f },
	{ -0.5564409f, -0.312688f, 0.769805f },
	{ -0.998893f, 0.028572f, 0.037369f },
	{ -0.060343f, 0.8078139f, -0.586341f },
	{ 0.190472f, 0.907653f, -0.374013f },
	{ -0.028999f, 0.810986f, -0.584346f },
	{ 0.288693f, -0.817759f, -0.497922f },
	{ 0.315852f, -0.907459f, -0.277049f },
	{ 0.071252f, -0.582682f, -0.809571f },
	{ -0.044942f, -0.031404f, 0.998496f },
	{ 0.225697f, 0.167176f, 0.9597459f },
	{ 0.874775f, 0.402607f, 0.269584f },
	{ 0.427815f, -0.723117f, -0.5422879f },
	{ 0.274348f, -0.865086f, -0.419952f },
	{ 0.483014f, -0.586339f, -0.65031f },
	{ -0.393471f, 0.786316f, -0.476328f },
	{ -0.5435179f, 0.764116f, -0.34744f },
	{ -0.176693f, 0.717236f, -0.6740569f },
	{ 1, 0.00006599999f, 0.000062f },
	{ 0.9862339f, 0.165358f, 0.000007f },
	{ 0.419014f, 0.90798f, 0 },
	{ -0.500056f, 0.00006799999f, -0.865993f },
	{ -0.455531f, -0.081892f, -0.886445f },
	{ -0.59736f, 0.278342f, -0.752121f },
	{ -0.500003f, 0.000254f, 0.866024f },
	{ -0.45542f, -0.082045f, 0.886488f },
	{ -0.59736f, 0.278342f, 0.752122f },
	{ 0.495534f, 0.488211f, -0.718398f },
	{ 0.556103f, -0.091649f, -0.826045f },
	{ 0.427613f, 0.572068f, 0.699918f },
	{ 0.464258f, 0.029441f, 0.885211f },
	{ -0.794547f, 0.593761f, -0.127054f },
	{ -0.9930159f, 0.057483f, -0.103032f },
	{ -0.735326f, 0.677509f, 0.016667f },
	{ -0.986544f, 0.162295f, 0.019761f },
	{ 0.4577f, 0.489451f, -0.742259f },
	{ 0.433734f, -0.071353f, -0.8982109f },
	{ 0.486645f, 0.485089f, 0.7265429f },
	{ 0.469028f, -0.07715899f, 0.879807f },
	{ -0.562621f, 0.8265589f, 0.016065f },
	{ 0.001081f, 0.999817f, 0.019101f },
	{ -0.550895f, -0.392155f, 0.736701f },
	{ 0.005197f, -0.437293f, 0.899304f },
	{ -0.549433f, -0.362705f, -0.7527069f },
	{ 0.0008259999f, -0.400986f, -0.916084f },
	{ 0.563033f, 0.82626f, 0.016974f },
	{ 0, 0.999789f, 0.020539f },
	{ 0.551091f, -0.362316f, -0.751682f },
	{ 0, -0.434201f, -0.900816f },
	{ 0.5512159f, -0.391322f, 0.736904f },
	{ 0, -0.469007f, 0.883194f },
	{ -0.707106f, 0.000001f, -0.7071069f },
	{ -0.707106f, -0.00002f, 0.707108f },
	{ -0.204717f, 0.966136f, -0.157074f },
	{ -0.250809f, 0.778817f, 0.5749249f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.707198f, 0.380473f, -0.595912f },
	{ 0.5472789f, 0.49087f, 0.677888f },
	{ -0.6054209f, 0.602875f, 0.519622f },
	{ -0.013036f, 0.074424f, 0.9971409f },
	{ -0.711641f, 0.013813f, -0.702408f },
	{ -0.711642f, 0.014743f, 0.702388f },
	{ -0.777338f, 0.058046f, -0.626399f },
	{ -0.652833f, 0.359673f, 0.666667f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.579605f, 0.572114f, -0.580296f },
	{ 0.477001f, 0.639535f, 0.602881f },
	{ -0.490236f, 0.678335f, -0.5472929f },
	{ -0.155598f, -0.688213f, -0.708627f },
	{ -0.143647f, -0.730047f, 0.668129f },
	{ -0.238291f, 0.683031f, -0.690425f },
	{ -0.104262f, 0.756595f, 0.6455179f },
	{ -0.020326f, -0.703907f, -0.7100019f },
	{ 0.10138f, -0.684646f, 0.721791f },
	{ 0.193242f, 0.733384f, -0.6517709f },
	{ 0.275902f, 0.6979859f, 0.660828f },
	{ 0.449589f, -0.597442f, -0.664028f },
	{ 0.825177f, -0.324329f, 0.462486f },
	{ 0.501879f, 0.569985f, -0.650565f },
	{ 0.885331f, 0.427981f, -0.18172f },
	{ -0.5579129f, -0.696995f, -0.450479f },
	{ -0.7999949f, -0.475928f, 0.365376f },
	{ -0.877818f, 0.470416f, -0.09024099f },
	{ -0.359827f, 0.24049f, 0.901493f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0004EEB8 = { vertex_0004E6A8, normal_0004EAB0, LengthOfArray<Sint32>(vertex_0004E6A8), meshlist_0004E660, matlist_0004E138, LengthOfArray<Uint16>(meshlist_0004E660), LengthOfArray<Uint16>(matlist_0004E138), { 4.96225f, 80.47129f, 0.164111f }, 107.9488f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0004EEE0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004EEB8, -355.0004f, 0, -1660, 0, 0x3555, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0004EF14[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 81, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 83, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 92, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 82, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 86, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 58, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 58, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0004EFA0[] = {
	4, 1, 46, 2, 44,
	4, 2, 44, 5, 9,
	4, 5, 9, 4, 45,
	4, 4, 45, 1, 46
};

extern "C" __declspec(dllexport) Sint16 poly_0004EFC8[] = {
	6, 43, 41, 0, 15, 3, 14,
	0x8000u | 5, 3, 10, 42, 47, 8,
	3, 42, 3, 14,
	0x8000u | 6, 43, 41, 48, 42, 49, 8,
	3, 48, 43, 11
};

extern "C" __declspec(dllexport) Sint16 poly_0004F000[] = {
	4, 5, 4, 2, 1,
	6, 29, 22, 28, 26, 31, 18,
	6, 31, 19, 28, 24, 29, 23
};

extern "C" __declspec(dllexport) Sint16 poly_0004F026[] = {
	6, 45, 43, 46, 0, 44, 3,
	6, 11, 43, 6, 45, 13, 9,
	6, 10, 7, 3, 12, 44, 9
};

extern "C" __declspec(dllexport) Sint16 poly_0004F050[] = {
	4, 33, 37, 34, 38,
	10, 40, 37, 39, 33, 35, 34, 36, 38, 40, 37
};

extern "C" __declspec(dllexport) Sint16 poly_0004F070[] = {
	0x8000u | 6, 18, 16, 26, 27, 22, 20,
	0x8000u | 6, 17, 19, 25, 24, 21, 23
};

extern "C" __declspec(dllexport) Sint16 poly_0004F08C[] = {
	0x8000u | 6, 22, 20, 29, 30, 23, 21,
	0x8000u | 6, 16, 18, 32, 31, 17, 19
};

NJS_TEX uv_0004F0A8[] = {
	{ 3, 1 },
	{ 3, 253 },
	{ 506, 1 },
	{ 506, 253 },
	{ 7, 1 },
	{ 7, 253 },
	{ 1012, 1 },
	{ 1012, 253 },
	{ 3, 1 },
	{ 3, 253 },
	{ 506, 1 },
	{ 506, 253 },
	{ 7, 1 },
	{ 7, 253 },
	{ 1012, 1 },
	{ 1012, 253 }
};

NJS_TEX uv_0004F0E8[] = {
	{ 1019, 0 },
	{ 1019, 254 },
	{ 0 },
	{ 0, 254 },
	{ 510, 0 },
	{ 510, 254 },
	{ 0 },
	{ 626, 0 },
	{ 1019, 254 },
	{ 959, 64 },
	{ 1020, 63 },
	{ 1019, 254 },
	{ 0 },
	{ 0, 254 },
	{ 0 },
	{ 0, 254 },
	{ 394, 26 },
	{ 508, 254 },
	{ 508, 64 },
	{ 508, 63 },
	{ 394, 26 },
	{ 0 },
	{ 338, 0 }
};

NJS_TEX uv_0004F144[] = {
	{ 508, -254 },
	{ 508, 255 },
	{ 0, -254 },
	{ 0, 255 },
	{ 480, -10 },
	{ 480, 228 },
	{ 229, -9 },
	{ 229, 228 },
	{ 28, -10 },
	{ 28, 228 },
	{ 28, -10 },
	{ 28, -231 },
	{ 229, -9 },
	{ 229, -231 },
	{ 480, -10 },
	{ 480, -231 }
};

NJS_TEX uv_0004F184[] = {
	{ 1019, 0 },
	{ 1019, 255 },
	{ 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 338, 255 },
	{ 0, 255 },
	{ 304, 154 },
	{ 0 },
	{ 404, 50 },
	{ 508, 0 },
	{ 626, 255 },
	{ 626, 145 },
	{ 0, 255 },
	{ 837, 46 },
	{ 0 },
	{ 1020, 0 }
};

NJS_TEX uv_0004F1CC[] = {
	{ 134, 223 },
	{ 256, 223 },
	{ 0, 223 },
	{ 122, 223 },
	{ 122, -217 },
	{ 256, 223 },
	{ 256, -217 },
	{ 134, 223 },
	{ 134, -217 },
	{ 0, 223 },
	{ 0, -217 },
	{ 122, 223 },
	{ 122, -217 },
	{ 256, 223 }
};

NJS_TEX uv_0004F204[] = {
	{ 5, 1 },
	{ 5, 253 },
	{ 436, 29 },
	{ 436, 253 },
	{ 758, 1 },
	{ 758, 253 },
	{ 758, 253 },
	{ 758, 1 },
	{ 436, 253 },
	{ 436, 29 },
	{ 5, 253 },
	{ 5, 1 }
};

NJS_TEX uv_0004F234[] = {
	{ 506, 1 },
	{ 506, 253 },
	{ 258, 29 },
	{ 258, 253 },
	{ 3, 1 },
	{ 3, 253 },
	{ 3, 253 },
	{ 3, 1 },
	{ 258, 253 },
	{ 258, 29 },
	{ 506, 253 },
	{ 506, 1 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0004F264[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0004EFA0, NULL, NULL, NULL, uv_0004F0A8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 5, poly_0004EFC8, NULL, NULL, NULL, uv_0004F0E8, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_0004F000, NULL, NULL, NULL, uv_0004F144, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 3, poly_0004F026, NULL, NULL, NULL, uv_0004F184, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_0004F050, NULL, NULL, NULL, uv_0004F1CC, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, poly_0004F070, NULL, NULL, NULL, uv_0004F204, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, poly_0004F08C, NULL, NULL, NULL, uv_0004F234, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0004F30C[] = {
	{ -280.256f, -0.00001f, -215.9173f },
	{ -280.256f, 600.4858f, -215.9173f },
	{ -280.256f, 600.4858f, 198.4534f },
	{ -280.256f, 0, 198.4534f },
	{ 295.3847f, 600.4858f, -215.9173f },
	{ 295.3847f, 600.4858f, 198.4534f },
	{ 295.3877f, 118.5479f, 31.41039f },
	{ 74.02115f, 128.8071f, 198.4284f },
	{ 295.3877f, -49.818f, 198.4284f },
	{ 295.3877f, 300, 198.4284f },
	{ 73.84827f, 0, 198.4284f },
	{ 294.9999f, 0, 59.00001f },
	{ 192.885f, 245.7891f, 198.851f },
	{ 294.9999f, 241, 113 },
	{ -280.256f, -198.8688f, 198.4534f },
	{ -280.256f, -198.8688f, -215.9173f },
	{ -247.9113f, 600.4858f, -194.6214f },
	{ -247.9113f, 600.4858f, 179.373f },
	{ -247.9113f, 752.0806f, -194.6214f },
	{ -247.9113f, 752.0806f, 179.373f },
	{ 263.0401f, 600.4858f, -194.6214f },
	{ 263.0401f, 600.4858f, 179.373f },
	{ 263.0401f, 757.466f, -194.6214f },
	{ 263.0401f, 757.466f, 179.373f },
	{ -21.47808f, 740.1391f, 179.373f },
	{ -21.47808f, 600.4858f, 179.373f },
	{ -21.47808f, 740.1391f, -194.6214f },
	{ -21.47808f, 600.4858f, -194.6214f },
	{ -21.47808f, 730.3918f, -0.786725f },
	{ 263.0399f, 741.7719f, -0.33481f },
	{ 263.0399f, 600.4865f, -0.33481f },
	{ -247.9113f, 741.7722f, -0.334809f },
	{ -247.9113f, 600.4858f, -0.33481f },
	{ 216.0584f, 69.13907f, 180.6576f },
	{ 216.0584f, 69.13907f, 193.516f },
	{ 216.0584f, 299.971f, 180.6576f },
	{ 216.0584f, 299.971f, 193.516f },
	{ 228.9168f, 69.13907f, 180.6576f },
	{ 228.9168f, 69.13907f, 193.516f },
	{ 228.9168f, 299.971f, 180.6576f },
	{ 228.9168f, 299.971f, 193.516f },
	{ 295.3847f, -198.8688f, -215.9173f },
	{ 295.3862f, -198.8694f, 198.4409f },
	{ 295.3848f, -0.00001f, -215.9173f },
	{ -280.256f, 300, 198.4534f },
	{ 295.3848f, 300, -215.9173f },
	{ -280.256f, 300, -215.9173f },
	{ 260.9999f, -50, 198 },
	{ 294.9999f, -21, 105 },
	{ 294.9999f, -50, 198 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0004F564[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.5773579f, 0.577334f, 0.5773579f },
	{ -0.707029f, -0.0005739999f, 0.707184f },
	{ 0.5773489f, 0.577352f, -0.5773489f },
	{ 0.577336f, 0.577345f, 0.57737f },
	{ 1, -0.000339f, 0.00015f },
	{ 0.00036f, -0.000795f, 1 },
	{ 0.538983f, 0.581024f, 0.609843f },
	{ 0.7265469f, -0.0009099999f, 0.687117f },
	{ 0.000053f, -0.00047f, 1 },
	{ 0.999999f, -0.000892f, 0.000858f },
	{ 0.000159f, 0.005411f, 0.999985f },
	{ 0.999992f, -0.004064f, -0.000169f },
	{ -0.707091f, -0.0005129999f, 0.707122f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.559916f, 0.6100169f, -0.56069f },
	{ -0.559622f, 0.611291f, 0.559595f },
	{ 0.707106f, 0, -0.7071069f },
	{ 0.707106f, 0, 0.7071069f },
	{ 0.553198f, 0.618406f, -0.558163f },
	{ 0.552521f, 0.620146f, 0.556902f },
	{ -0.0029f, 0.716115f, 0.697976f },
	{ 0, 0, 1 },
	{ -0.002895f, 0.714524f, -0.699605f },
	{ 0, 0, -1 },
	{ -0.004053f, 0.999989f, -0.00222f },
	{ 0.7051989f, 0.709007f, -0.001869f },
	{ 1, 0, 0 },
	{ -0.701192f, 0.712971f, -0.001493f },
	{ -1, 0, 0 },
	{ -0.57735f, -0.57735f, -0.57735f },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.707316f, 0.00008799999f, -0.706898f },
	{ 0.723631f, 0.138693f, 0.6761079f },
	{ 0.707218f, 0.000004f, -0.706995f },
	{ -0.7070259f, -0.000195f, 0.707187f },
	{ 0.707028f, 0.000058f, -0.707185f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.004906f, -0.000405f, 0.999988f },
	{ 0.9735219f, 0.140283f, -0.180485f },
	{ 0.505596f, 0.5283189f, -0.682094f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0004F7BC = { vertex_0004F30C, normal_0004F564, LengthOfArray<Sint32>(vertex_0004F30C), meshlist_0004F264, matlist_0004EF14, LengthOfArray<Uint16>(meshlist_0004F264), LengthOfArray<Uint16>(matlist_0004EF14), { 7.565857f, 279.2983f, -8.533134f }, 577.4149f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0004F7E4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004F7BC, -522, -20, -1487, 0x8EB, 0xFFFFC064, 0xFFFFFC2E, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0004F818[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 95, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 95, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 94, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 96, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 93, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 84, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 91, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 92, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0004F8B8[] = {
	4, 2, 15, 14, 13,
	4, 4, 1, 3, 0,
	4, 11, 12, 9, 10,
	4, 8, 7, 6, 5,
	3, 84, 49, 51,
	4, 20, 83, 21, 80,
	4, 17, 81, 16, 82,
	3, 55, 53, 85
};

extern "C" __declspec(dllexport) Sint16 poly_0004F904[] = {
	4, 1, 2, 0, 14,
	4, 12, 8, 10, 6,
	4, 7, 11, 5, 9,
	4, 15, 4, 13, 3,
	4, 55, 51, 53, 49,
	4, 21, 80, 17, 81,
	4, 16, 82, 20, 83
};

extern "C" __declspec(dllexport) Sint16 poly_0004F94A[] = {
	4, 12, 11, 8, 7,
	4, 1, 4, 2, 15
};

extern "C" __declspec(dllexport) Sint16 poly_0004F95E[] = {
	4, 18, 82, 19, 81,
	4, 19, 81, 23, 80,
	4, 23, 80, 22, 83,
	4, 22, 83, 18, 82,
	4, 54, 55, 52, 85,
	4, 50, 54, 48, 52,
	0x8000u | 6, 63, 61, 59, 57, 58, 56,
	4, 62, 63, 60, 61,
	4, 58, 62, 56, 60,
	4, 67, 66, 65, 64,
	4, 71, 67, 69, 65,
	0x8000u | 6, 66, 64, 70, 68, 71, 69,
	4, 48, 84, 50, 51
};

extern "C" __declspec(dllexport) Sint16 poly_0004F9E8[] = {
	4, 27, 26, 25, 24,
	4, 30, 31, 28, 29,
	4, 35, 34, 33, 32,
	4, 38, 39, 36, 37,
	4, 43, 42, 41, 40,
	4, 46, 47, 44, 45
};

extern "C" __declspec(dllexport) Sint16 poly_0004FA24[] = {
	4, 31, 27, 29, 25,
	4, 26, 30, 24, 28,
	4, 39, 35, 37, 33,
	4, 34, 38, 32, 36,
	4, 47, 43, 45, 41,
	4, 42, 46, 40, 44
};

extern "C" __declspec(dllexport) Sint16 poly_0004FA60[] = {
	4, 31, 30, 27, 26,
	4, 39, 38, 35, 34,
	4, 47, 46, 43, 42
};

extern "C" __declspec(dllexport) Sint16 poly_0004FA7E[] = {
	10, 74, 78, 75, 79, 73, 76, 72, 77, 74, 78,
	0x8000u | 10, 71, 78, 70, 79, 66, 76, 67, 77, 71, 78,
	4, 55, 54, 51, 50,
	4, 63, 62, 59, 58,
	4, 75, 73, 74, 72
};

NJS_TEX uv_0004FAC8[] = {
	{ 508, 83 },
	{ 0, 87 },
	{ 508, 119 },
	{ 0, 123 },
	{ 0, 87 },
	{ 508, 83 },
	{ 0, 123 },
	{ 508, 119 },
	{ 1, 170 },
	{ 508, 166 },
	{ 1, 203 },
	{ 508, 199 },
	{ 508, 166 },
	{ 1, 170 },
	{ 510, 199 },
	{ 1, 203 },
	{ 206, 39 },
	{ 508, 36 },
	{ 508, 1 },
	{ 19, 254 },
	{ 17, 65 },
	{ 488, 212 },
	{ 488, 0 },
	{ 488, 212 },
	{ 488, 0 },
	{ 19, 255 },
	{ 17, 65 },
	{ 508, 1 },
	{ 508, 36 },
	{ 206, 39 }
};

NJS_TEX uv_0004FB40[] = {
	{ 0, 83 },
	{ 508, 83 },
	{ 0, 119 },
	{ 508, 119 },
	{ 0, 166 },
	{ 508, 166 },
	{ 0, 199 },
	{ 508, 199 },
	{ 510, 170 },
	{ 0, 170 },
	{ 510, 203 },
	{ 0, 203 },
	{ 510, 87 },
	{ 0, 87 },
	{ 510, 123 },
	{ 0, 123 },
	{ 0, 1 },
	{ 508, 1 },
	{ 0, 36 },
	{ 508, 36 },
	{ 15, 212 },
	{ 15, 0 },
	{ 494, 212 },
	{ 494, 0 },
	{ 494, 255 },
	{ 494, 65 },
	{ 15, 254 },
	{ 15, 65 }
};

NJS_TEX uv_0004FBB0[] = {
	{ 0, 239 },
	{ 0, -254 },
	{ 508, 239 },
	{ 510, -254 },
	{ 0, 255 },
	{ 0, -239 },
	{ 508, 255 },
	{ 510, -239 }
};

NJS_TEX uv_0004FBD0[] = {
	{ 14, 37 },
	{ 19, 254 },
	{ 490, 32 },
	{ 490, 180 },
	{ 494, 32 },
	{ 494, 180 },
	{ 15, 32 },
	{ 15, 180 },
	{ 490, 32 },
	{ 490, 180 },
	{ 14, 37 },
	{ 19, 254 },
	{ 15, 37 },
	{ 15, 254 },
	{ 494, 37 },
	{ 494, 254 },
	{ 3, 187 },
	{ 508, 182 },
	{ 4, 227 },
	{ 208, 225 },
	{ 510, 187 },
	{ 0, 187 },
	{ 510, 227 },
	{ 0, 227 },
	{ 0, 94 },
	{ 0, 137 },
	{ 508, 94 },
	{ 508, 137 },
	{ 2, 99 },
	{ 3, 142 },
	{ 2, 99 },
	{ 508, 94 },
	{ 3, 142 },
	{ 508, 137 },
	{ 510, 99 },
	{ 0, 99 },
	{ 510, 142 },
	{ 0, 142 },
	{ 506, 0 },
	{ 0, 4 },
	{ 506, 35 },
	{ 0, 40 },
	{ 0 },
	{ 508, 0 },
	{ 0, 35 },
	{ 508, 35 },
	{ 510, 4 },
	{ 510, 40 },
	{ 0, 4 },
	{ 0, 40 },
	{ 506, 0 },
	{ 506, 35 },
	{ 4, 227 },
	{ 208, 225 },
	{ 3, 187 },
	{ 508, 182 }
};

NJS_TEX uv_0004FCB0[] = {
	{ 233, 0 },
	{ 0, 62 },
	{ 254, 192 },
	{ 21, 255 },
	{ 0, 62 },
	{ 233, 0 },
	{ 21, 255 },
	{ 254, 192 },
	{ 233, 0 },
	{ 0, 62 },
	{ 254, 192 },
	{ 21, 255 },
	{ 0, 62 },
	{ 233, 0 },
	{ 21, 255 },
	{ 254, 192 },
	{ 233, 0 },
	{ 0, 62 },
	{ 254, 192 },
	{ 21, 255 },
	{ 0, 62 },
	{ 233, 0 },
	{ 21, 255 },
	{ 254, 192 }
};

NJS_TEX uv_0004FD10[] = {
	{ 72, 0 },
	{ 0 },
	{ 72, 192 },
	{ 0, 192 },
	{ 0, 62 },
	{ 72, 62 },
	{ 0, 255 },
	{ 72, 255 },
	{ 254, 0 },
	{ 182, 0 },
	{ 254, 192 },
	{ 182, 192 },
	{ 182, 62 },
	{ 254, 62 },
	{ 182, 255 },
	{ 254, 255 },
	{ 163, 0 },
	{ 91, 0 },
	{ 163, 192 },
	{ 91, 192 },
	{ 91, 62 },
	{ 163, 62 },
	{ 91, 255 },
	{ 163, 255 }
};

NJS_TEX uv_0004FD70[] = {
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 }
};

NJS_TEX uv_0004FDA0[] = {
	{ 486, 233 },
	{ 492, 239 },
	{ 22, 233 },
	{ 17, 239 },
	{ 22, -172 },
	{ 17, -174 },
	{ 486, -172 },
	{ 492, -174 },
	{ 486, 233 },
	{ 492, 239 },
	{ 510, -189 },
	{ 492, 239 },
	{ 508, 255 },
	{ 17, 239 },
	{ 0, 254 },
	{ 17, -174 },
	{ 0, -189 },
	{ 492, -174 },
	{ 510, -189 },
	{ 492, 239 },
	{ 510, -220 },
	{ 508, 224 },
	{ 0, -220 },
	{ 0, 224 },
	{ 510, -206 },
	{ 508, 238 },
	{ 0, -206 },
	{ 0, 238 },
	{ 22, 233 },
	{ 22, -172 },
	{ 486, 233 },
	{ 486, -172 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0004FE20[] = {
	{ NJD_MESHSET_TRIMESH | 0, 8, poly_0004F8B8, NULL, NULL, NULL, uv_0004FAC8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 7, poly_0004F904, NULL, NULL, NULL, uv_0004FB40, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0004F94A, NULL, NULL, NULL, uv_0004FBB0, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 13, poly_0004F95E, NULL, NULL, NULL, uv_0004FBD0, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 6, poly_0004F9E8, NULL, NULL, NULL, uv_0004FCB0, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 6, poly_0004FA24, NULL, NULL, NULL, uv_0004FD10, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 3, poly_0004FA60, NULL, NULL, NULL, uv_0004FD70, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 5, poly_0004FA7E, NULL, NULL, NULL, uv_0004FDA0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0004FEE0[] = {
	{ -195.3846f, -112.9165f, -178.0636f },
	{ -195.3846f, -79.72942f, -183.4193f },
	{ 195.3839f, -79.72942f, -183.4194f },
	{ -195.3844f, -50.66018f, 207.7136f },
	{ -195.3844f, -17.47302f, 202.358f },
	{ 195.384f, -124.7008f, 219.3783f },
	{ 195.3839f, -186.9572f, -166.3989f },
	{ 195.384f, -94.0383f, 214.4301f },
	{ 195.3839f, -156.2947f, -171.3472f },
	{ -195.3844f, -124.7008f, 219.3785f },
	{ -195.3846f, -186.9572f, -166.3988f },
	{ -195.3844f, -94.0383f, 214.4302f },
	{ -195.3846f, -156.2947f, -171.347f },
	{ 195.384f, -50.66018f, 207.7135f },
	{ 195.3839f, -112.9166f, -178.0638f },
	{ 195.384f, -17.47302f, 202.3578f },
	{ 183.8171f, -174.2087f, 214.1507f },
	{ 183.8169f, -196.1916f, -148.0141f },
	{ 183.8171f, 177.2504f, 159.3545f },
	{ 183.8169f, 118.6796f, -203.5847f },
	{ -183.8176f, -174.2087f, 214.1509f },
	{ -183.8178f, -196.1916f, -148.0139f },
	{ -183.8177f, 177.2504f, 159.3546f },
	{ -183.8178f, 118.6796f, -203.5846f },
	{ 140.556f, 150.8467f, -100.5048f },
	{ 140.556f, 141.6487f, -157.5012f },
	{ 140.556f, 181.2439f, -105.4104f },
	{ 140.556f, 172.0458f, -162.4066f },
	{ 60.37027f, 150.8467f, -100.5048f },
	{ 60.37023f, 141.6487f, -157.5011f },
	{ 60.37027f, 181.244f, -105.4103f },
	{ 60.37023f, 172.0458f, -162.4066f },
	{ -60.45964f, 150.8467f, -100.5048f },
	{ -60.45967f, 141.6487f, -157.5011f },
	{ -60.45964f, 181.244f, -105.4103f },
	{ -60.45967f, 172.0458f, -162.4065f },
	{ -140.6455f, 150.8467f, -100.5047f },
	{ -140.6455f, 141.6487f, -157.5011f },
	{ -140.6455f, 181.244f, -105.4102f },
	{ -140.6455f, 172.0458f, -162.4065f },
	{ 40.09254f, 150.8467f, -100.5048f },
	{ 40.09252f, 141.6487f, -157.5011f },
	{ 40.09254f, 181.244f, -105.4103f },
	{ 40.09252f, 172.0458f, -162.4066f },
	{ -40.09328f, 150.8467f, -100.5048f },
	{ -40.09331f, 141.6487f, -157.5011f },
	{ -40.09328f, 181.244f, -105.4103f },
	{ -40.09331f, 172.0458f, -162.4066f },
	{ 195.384f, 24.76846f, 193.7585f },
	{ 195.3839f, -37.48801f, -192.0188f },
	{ 195.384f, 57.54841f, 188.8102f },
	{ 195.3839f, -4.707954f, -196.9671f },
	{ -195.3844f, 24.76846f, 193.7587f },
	{ -195.3846f, -37.488f, -192.0186f },
	{ -195.3844f, 57.54843f, 188.8104f },
	{ -195.3846f, -4.70795f, -196.967f },
	{ 195.384f, 93.54591f, 182.704f },
	{ 195.3839f, 31.28945f, -203.0731f },
	{ 195.384f, 128.4754f, 177.3482f },
	{ 195.3839f, 66.21902f, -208.4289f },
	{ -195.3844f, 93.54595f, 182.7042f },
	{ -195.3846f, 31.28947f, -203.073f },
	{ -195.3844f, 128.4755f, 177.3484f },
	{ -195.3846f, 66.21901f, -208.4287f },
	{ 195.384f, 176.6973f, 170.9374f },
	{ 195.3839f, 114.4408f, -214.8398f },
	{ 195.384f, 205.5294f, 165.7843f },
	{ 195.3839f, 143.2729f, -219.993f },
	{ -195.3844f, 176.6973f, 170.9376f },
	{ -195.3846f, 114.4408f, -214.8397f },
	{ -195.3844f, 205.5294f, 165.7845f },
	{ -195.3846f, 143.2729f, -219.9928f },
	{ -178.0736f, 134.771f, -201.0857f },
	{ 178.0726f, 134.7711f, -201.0858f },
	{ -178.0735f, 191.5116f, 150.5114f },
	{ 178.0728f, 191.5116f, 150.5114f },
	{ 181.707f, 145.4519f, -206.4908f },
	{ -181.7076f, 145.4519f, -206.4906f },
	{ -181.7074f, 203.3503f, 152.2822f },
	{ 181.7071f, 203.3503f, 152.2821f },
	{ -183.8178f, -1.041851f, -182.6502f },
	{ 183.8169f, -1.041855f, -182.6503f },
	{ 183.8171f, 0.585588f, 185.8367f },
	{ -183.8177f, 0.585598f, 185.8369f },
	{ 195.384f, -0.25009f, 38.03507f },
	{ -195.3844f, -0.250082f, 38.03522f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000502E8[] = {
	{ -0.7071069f, -0.112655f, -0.698075f },
	{ -0.577351f, 0.477994f, -0.661958f },
	{ 0.577351f, 0.477994f, -0.661958f },
	{ -0.7071069f, 0.112654f, 0.698075f },
	{ -0.5773489f, 0.661959f, 0.477995f },
	{ 0.7071069f, 0.112653f, 0.698075f },
	{ 0.707106f, -0.112653f, -0.698076f },
	{ 0.57735f, 0.661958f, 0.477994f },
	{ 0.57735f, 0.477994f, -0.661958f },
	{ -0.7071069f, 0.112653f, 0.698075f },
	{ -0.707106f, -0.112653f, -0.698076f },
	{ -0.57735f, 0.661958f, 0.477995f },
	{ -0.577351f, 0.477994f, -0.661957f },
	{ 0.7071069f, 0.112654f, 0.698075f },
	{ 0.707106f, -0.112655f, -0.698076f },
	{ 0.57735f, 0.661958f, 0.477994f },
	{ 0.683499f, 0.116719f, 0.72056f },
	{ 0.731627f, -0.119131f, -0.671215f },
	{ 0.7045709f, 0.105199f, 0.7017919f },
	{ 0.704137f, -0.122306f, -0.699451f },
	{ -0.683498f, 0.11672f, 0.72056f },
	{ -0.7316279f, -0.119131f, -0.671214f },
	{ -0.7045709f, 0.1052f, 0.701793f },
	{ -0.704138f, -0.122306f, -0.699451f },
	{ 0.7071069f, 0.112656f, 0.698075f },
	{ 0.707106f, -0.112655f, -0.698075f },
	{ 0.57735f, 0.661959f, 0.477992f },
	{ 0.577351f, 0.477993f, -0.661959f },
	{ -0.707106f, 0.112656f, 0.698075f },
	{ -0.7071069f, -0.112655f, -0.698075f },
	{ -0.57735f, 0.661959f, 0.477993f },
	{ -0.577351f, 0.477993f, -0.661959f },
	{ 0.7071069f, 0.112655f, 0.698075f },
	{ 0.7071069f, -0.112654f, -0.698075f },
	{ 0.57735f, 0.661959f, 0.477992f },
	{ 0.57735f, 0.477993f, -0.661959f },
	{ -0.707106f, 0.112655f, 0.698076f },
	{ -0.7071069f, -0.112654f, -0.698075f },
	{ -0.57735f, 0.661959f, 0.477993f },
	{ -0.577351f, 0.477993f, -0.661958f },
	{ 0.7071069f, 0.112655f, 0.698075f },
	{ 0.707106f, -0.112656f, -0.698075f },
	{ 0.57735f, 0.661959f, 0.477992f },
	{ 0.57735f, 0.477992f, -0.661959f },
	{ -0.707106f, 0.112655f, 0.698076f },
	{ -0.7071069f, -0.112656f, -0.698074f },
	{ -0.57735f, 0.661959f, 0.477993f },
	{ -0.577351f, 0.477992f, -0.661959f },
	{ 0.7092299f, 0.105229f, 0.69708f },
	{ 0.704697f, -0.105905f, -0.70156f },
	{ 0.576817f, 0.659822f, 0.481577f },
	{ 0.577887f, 0.481131f, -0.659211f },
	{ -0.709229f, 0.105229f, 0.69708f },
	{ -0.704698f, -0.105905f, -0.7015589f },
	{ -0.576817f, 0.659822f, 0.481577f },
	{ -0.577887f, 0.481131f, -0.659211f },
	{ 0.708868f, 0.106902f, 0.697193f },
	{ 0.705332f, -0.107436f, -0.7006879f },
	{ 0.576939f, 0.660312f, 0.48076f },
	{ 0.577764f, 0.480418f, -0.659839f },
	{ -0.708868f, 0.106902f, 0.697193f },
	{ -0.705332f, -0.107436f, -0.7006879f },
	{ -0.576938f, 0.660312f, 0.480761f },
	{ -0.577765f, 0.480417f, -0.659839f },
	{ 0.703281f, 0.125077f, 0.6998219f },
	{ 0.710871f, -0.123743f, -0.692351f },
	{ 0.5782419f, 0.66545f, 0.47203f },
	{ 0.576468f, 0.472756f, -0.666473f },
	{ -0.703281f, 0.125078f, 0.699823f },
	{ -0.710872f, -0.123743f, -0.69235f },
	{ -0.5782419f, 0.665449f, 0.472031f },
	{ -0.5764689f, 0.472756f, -0.666473f },
	{ 0.481499f, 0.799698f, 0.358667f },
	{ -0.481487f, 0.799704f, 0.358668f },
	{ 0.481499f, 0.646278f, -0.592017f },
	{ -0.481488f, 0.646285f, -0.5920179f },
	{ -0.211435f, 0.975746f, 0.056702f },
	{ 0.211436f, 0.975745f, 0.056707f },
	{ 0.211435f, 0.908373f, -0.360767f },
	{ -0.211434f, 0.908376f, -0.360763f },
	{ -0.706821f, -0.122733f, -0.696664f },
	{ 0.70682f, -0.122733f, -0.696665f },
	{ 0.708437f, 0.108742f, 0.697346f },
	{ -0.708436f, 0.108742f, 0.697347f },
	{ 1, 0, 0 },
	{ -1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000506F0 = { vertex_0004FEE0, normal_000502E8, LengthOfArray<Sint32>(vertex_0004FEE0), meshlist_0004FE20, matlist_0004F818, LengthOfArray<Uint16>(meshlist_0004FE20), LengthOfArray<Uint16>(matlist_0004F818), { -0.00032f, 4.668854f, -0.307251f }, 310.9881f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00050718 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000506F0, 4170, -31, -3032, 0, 0xFFFFBD8F, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0005074C[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 92, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 99, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 100, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 98, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 92, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 91, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 94, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000507D8[] = {
	3, 96, 6, 99,
	3, 93, 48, 90,
	4, 65, 64, 61, 60,
	6, 74, 76, 75, 77, 81, 80,
	0x8000u | 10, 72, 81, 68, 78, 69, 79, 73, 80, 72, 81,
	3, 77, 76, 80,
	7, 80, 76, 79, 74, 78, 75, 81,
	0x8000u | 5, 52, 56, 86, 57, 87
};

extern "C" __declspec(dllexport) Sint16 poly_0005083A[] = {
	4, 7, 3, 5, 8,
	4, 2, 99, 0, 98,
	4, 0, 9, 2, 1,
	3, 42, 43, 44,
	0x8000u | 5, 44, 45, 43, 49, 47,
	4, 44, 90, 42, 91,
	6, 85, 15, 82, 14, 83, 10,
	6, 83, 10, 84, 11, 85, 15,
	0x8000u | 6, 87, 89, 53, 51, 86, 88,
	4, 47, 92, 49, 93,
	4, 95, 61, 59, 94,
	4, 5, 97, 7, 96
};

extern "C" __declspec(dllexport) Sint16 poly_000508BE[] = {
	0x8000u | 6, 56, 54, 57, 55, 87, 89,
	4, 52, 56, 50, 54,
	4, 65, 61, 63, 95,
	4, 64, 65, 62, 63,
	4, 69, 68, 67, 66,
	4, 73, 69, 71, 67,
	4, 72, 73, 70, 71,
	4, 68, 72, 66, 70,
	4, 50, 88, 52, 86,
	0x8000u | 6, 90, 91, 48, 46, 93, 92,
	0x8000u | 6, 61, 94, 60, 58, 64, 62,
	0x8000u | 6, 99, 98, 6, 4, 96, 97
};

extern "C" __declspec(dllexport) Sint16 poly_00050946[] = {
	6, 12, 83, 13, 84, 17, 85,
	6, 83, 12, 82, 16, 85, 17
};

extern "C" __declspec(dllexport) Sint16 poly_00050962[] = {
	10, 23, 21, 19, 20, 18, 24, 22, 25, 23, 21,
	10, 28, 27, 29, 31, 33, 30, 32, 26, 28, 27,
	10, 34, 40, 38, 41, 39, 37, 35, 36, 34, 40
};

extern "C" __declspec(dllexport) Sint16 poly_000509A4[] = {
	4, 25, 24, 21, 20,
	4, 33, 32, 29, 28,
	4, 41, 40, 37, 36
};

extern "C" __declspec(dllexport) Sint16 poly_000509C2[] = {
	3, 86, 53, 87,
	6, 3, 7, 1, 96, 2, 99,
	0x8000u | 5, 49, 45, 93, 44, 90
};

NJS_TEX uv_000509E4[] = {
	{ 506, -155 },
	{ 508, 253 },
	{ 124, 250 },
	{ 506, -155 },
	{ 508, 253 },
	{ 124, 250 },
	{ 508, -253 },
	{ 508, 253 },
	{ 1, -253 },
	{ 1, 253 },
	{ 448, -191 },
	{ 474, 224 },
	{ 62, -186 },
	{ 61, 196 },
	{ 36, 223 },
	{ 472, 223 },
	{ 506, 251 },
	{ 36, 223 },
	{ 0, 254 },
	{ 33, -230 },
	{ 3, -251 },
	{ 480, -230 },
	{ 506, -251 },
	{ 474, 224 },
	{ 506, 251 },
	{ 36, 223 },
	{ 61, 196 },
	{ 440, 192 },
	{ 472, 223 },
	{ 474, 224 },
	{ 440, 193 },
	{ 480, -230 },
	{ 448, -191 },
	{ 33, -230 },
	{ 62, -186 },
	{ 36, 223 },
	{ 1, 253 },
	{ 508, 253 },
	{ 1, 61 },
	{ 508, -253 },
	{ 256, -253 }
};

NJS_TEX uv_00050A88[] = {
	{ 253, 152 },
	{ 38, 151 },
	{ 254, 176 },
	{ 100, 177 },
	{ 0, 56 },
	{ 133, 56 },
	{ 0, 82 },
	{ 190, 81 },
	{ 254, 176 },
	{ 100, 177 },
	{ 253, 152 },
	{ 38, 151 },
	{ 255, 128 },
	{ 0, 128 },
	{ 255, 105 },
	{ 255, 105 },
	{ 0, 104 },
	{ 0, 128 },
	{ 255, 105 },
	{ 255, 128 },
	{ 2, 7 },
	{ 25, 7 },
	{ 1, 32 },
	{ 82, 32 },
	{ 9, 0 },
	{ 8, 148 },
	{ 255, 107 },
	{ 253, 255 },
	{ 9, 0 },
	{ 8, 148 },
	{ 252, 93 },
	{ 252, 240 },
	{ 9, 3 },
	{ 9, 140 },
	{ 252, 93 },
	{ 252, 240 },
	{ 137, 57 },
	{ 203, 81 },
	{ 0, 56 },
	{ 0, 81 },
	{ 137, 57 },
	{ 203, 81 },
	{ 1, 32 },
	{ 82, 32 },
	{ 2, 7 },
	{ 25, 7 },
	{ 73, 33 },
	{ 0, 6 },
	{ 0, 33 },
	{ 73, 33 },
	{ 0, 82 },
	{ 190, 81 },
	{ 0, 56 },
	{ 133, 56 }
};

NJS_TEX uv_00050B60[] = {
	{ 3, 0 },
	{ 1, 129 },
	{ 762, 1 },
	{ 761, 131 },
	{ 3, 0 },
	{ 448, 129 },
	{ 3, 0 },
	{ 762, 1 },
	{ 1, 129 },
	{ 761, 131 },
	{ 1, 130 },
	{ 762, 130 },
	{ 1, 254 },
	{ 538, 253 },
	{ 1, 130 },
	{ 762, 130 },
	{ 1, 254 },
	{ 756, 252 },
	{ 3, 0 },
	{ 762, 1 },
	{ 1, 129 },
	{ 761, 131 },
	{ 3, 0 },
	{ 762, 1 },
	{ 1, 129 },
	{ 761, 131 },
	{ 3, 0 },
	{ 762, 1 },
	{ 1, 129 },
	{ 761, 131 },
	{ 3, 0 },
	{ 762, 1 },
	{ 1, 129 },
	{ 761, 131 },
	{ 761, 131 },
	{ 448, 129 },
	{ 762, 1 },
	{ 3, 0 },
	{ 762, 130 },
	{ 561, 254 },
	{ 1, 130 },
	{ 1, 254 },
	{ 762, 130 },
	{ 561, 254 },
	{ 762, 130 },
	{ 538, 253 },
	{ 1, 130 },
	{ 1, 254 },
	{ 762, 130 },
	{ 756, 252 },
	{ 422, 2 },
	{ 194, 128 },
	{ 3, 0 },
	{ 1, 129 },
	{ 422, 2 },
	{ 194, 128 }
};

NJS_TEX uv_00050C40[] = {
	{ 506, -1012 },
	{ 504, -348 },
	{ 1, -1016 },
	{ 3, -781 },
	{ 506, -1012 },
	{ 504, -348 },
	{ 2, -348 },
	{ 1, -1016 },
	{ 504, 87 },
	{ 506, -1012 },
	{ 2, -348 },
	{ 1, -1016 }
};

NJS_TEX uv_00050C70[] = {
	{ 82, 205 },
	{ 0, 211 },
	{ 14, 254 },
	{ 0, 173 },
	{ 14, 217 },
	{ 68, 124 },
	{ 82, 167 },
	{ 68, 162 },
	{ 82, 205 },
	{ 0, 211 },
	{ 172, 49 },
	{ 186, 130 },
	{ 172, 87 },
	{ 255, 81 },
	{ 240, 37 },
	{ 255, 43 },
	{ 240, 0 },
	{ 186, 92 },
	{ 172, 49 },
	{ 186, 130 },
	{ 100, 155 },
	{ 154, 62 },
	{ 168, 105 },
	{ 154, 100 },
	{ 168, 143 },
	{ 85, 149 },
	{ 100, 192 },
	{ 85, 111 },
	{ 100, 155 },
	{ 154, 62 }
};

NJS_TEX uv_00050CE8[] = {
	{ 253, 253 },
	{ 1, 253 },
	{ 255, 0 },
	{ 1, 1 },
	{ 253, 253 },
	{ 1, 253 },
	{ 255, 0 },
	{ 1, 1 },
	{ 253, 253 },
	{ 1, 253 },
	{ 255, 0 },
	{ 1, 1 }
};

NJS_TEX uv_00050D18[] = {
	{ 1, 125 },
	{ 1, 1 },
	{ 129, 1 },
	{ 65, 1 },
	{ 253, 1 },
	{ 1, 61 },
	{ 255, 117 },
	{ 1, 253 },
	{ 129, 253 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 61 },
	{ 1, 253 },
	{ 65, 253 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00050D50[] = {
	{ NJD_MESHSET_TRIMESH | 0, 8, poly_000507D8, NULL, NULL, NULL, uv_000509E4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 12, poly_0005083A, NULL, NULL, NULL, uv_00050A88, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 12, poly_000508BE, NULL, NULL, NULL, uv_00050B60, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_00050946, NULL, NULL, NULL, uv_00050C40, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 3, poly_00050962, NULL, NULL, NULL, uv_00050C70, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 3, poly_000509A4, NULL, NULL, NULL, uv_00050CE8, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 3, poly_000509C2, NULL, NULL, NULL, uv_00050D18, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00050DF8[] = {
	{ -140.5161f, -209.8784f, -280.3535f },
	{ -162.4693f, -292.8555f, 14.81957f },
	{ -162.4693f, -169.0848f, -261.3312f },
	{ -69.71989f, -292.8218f, 112.811f },
	{ 210.7041f, -54.62635f, -207.9584f },
	{ 210.7042f, -219.7722f, 146.198f },
	{ 188.751f, -13.83264f, -188.936f },
	{ 188.7509f, -178.9786f, 165.2204f },
	{ 35.09407f, -292.5669f, 113.2213f },
	{ -140.5161f, -292.8539f, -102.8727f },
	{ -80.72244f, -295.497f, -310.2932f },
	{ -153.4688f, -301.5703f, 86.25881f },
	{ -316.5302f, 144.6447f, -105.4985f },
	{ -316.5302f, -10.72453f, 227.6917f },
	{ 329.9166f, -298.5942f, -310.573f },
	{ 250.2449f, -304.7831f, 91.67853f },
	{ 13.89803f, 290.7059f, -37.38909f },
	{ 13.89808f, 135.3366f, 295.8015f },
	{ -274.9914f, 46.03849f, 135.4396f },
	{ -274.9915f, 21.63932f, 187.7641f },
	{ -290.0317f, 73.98643f, 148.4719f },
	{ -290.0316f, 49.58711f, 200.7964f },
	{ -202.921f, 77.89638f, 150.2951f },
	{ -202.921f, 53.49702f, 202.6196f },
	{ -217.9613f, 105.8442f, 163.3273f },
	{ -217.9613f, 81.44487f, 215.6519f },
	{ -94.31983f, 125.902f, 172.6804f },
	{ -94.31981f, 101.5027f, 225.005f },
	{ -109.3601f, 153.8498f, 185.7127f },
	{ -109.3601f, 129.4506f, 238.0372f },
	{ -22.24936f, 157.7598f, 187.5359f },
	{ -22.24942f, 133.3604f, 239.8604f },
	{ -37.28956f, 185.7077f, 200.5682f },
	{ -37.28959f, 161.3083f, 252.8927f },
	{ -184.6955f, 85.95267f, 154.0517f },
	{ -184.6955f, 61.55333f, 206.3763f },
	{ -199.7358f, 113.9005f, 167.0841f },
	{ -199.7357f, 89.50126f, 219.4086f },
	{ -112.625f, 117.8104f, 168.9073f },
	{ -112.6251f, 93.41114f, 221.2318f },
	{ -127.6653f, 145.7583f, 181.9396f },
	{ -127.6653f, 121.359f, 234.2641f },
	{ -176.2444f, -136.0243f, -249.1349f },
	{ -176.2443f, -301.1701f, 105.0215f },
	{ -198.1976f, -95.23067f, -230.1125f },
	{ -198.1976f, -260.3765f, 124.0439f },
	{ 174.9759f, 19.22774f, -176.7398f },
	{ 174.9759f, -145.9181f, 177.4167f },
	{ 153.0227f, 60.02143f, -157.7173f },
	{ 153.0226f, -105.1245f, 196.439f },
	{ -220.1508f, -54.43702f, -211.0902f },
	{ -220.1508f, -219.5828f, 143.0662f },
	{ -242.1041f, -13.64341f, -192.0679f },
	{ -242.1041f, -178.7892f, 162.0885f },
	{ 131.0694f, 100.815f, -138.695f },
	{ 131.0694f, -64.33081f, 215.4614f },
	{ 109.1162f, 141.6086f, -119.6726f },
	{ 109.1162f, -23.53719f, 234.4838f },
	{ -264.0573f, 27.15022f, -173.0455f },
	{ -264.0573f, -137.9956f, 181.111f },
	{ -286.0105f, 67.94382f, -154.0232f },
	{ -286.0105f, -97.2019f, 200.1333f },
	{ 87.16297f, 182.4022f, -100.6503f },
	{ 87.16291f, 17.25636f, 253.506f },
	{ 65.20974f, 223.1959f, -81.62797f },
	{ 65.20964f, 58.05006f, 272.5284f },
	{ -310.5772f, 113.5938f, -132.7362f },
	{ -310.5771f, -51.5521f, 221.4202f },
	{ -329.9168f, 149.5311f, -115.9783f },
	{ -329.9168f, -15.61479f, 238.178f },
	{ 40.64298f, 268.8459f, -60.34102f },
	{ 40.64302f, 103.7f, 293.8154f },
	{ 21.30341f, 304.7831f, -43.5832f },
	{ 21.30332f, 139.6372f, 310.5732f },
	{ 11.31548f, 129.7231f, 286.8494f },
	{ -308.7865f, -11.77362f, 220.8685f },
	{ 11.31542f, 280.2368f, -35.92858f },
	{ -308.7865f, 138.7401f, -101.9095f },
	{ -317.6241f, -4.40092f, 228.3164f },
	{ 9.010552f, 139.9835f, 295.6437f },
	{ 9.010682f, 293.5692f, -33.72153f },
	{ -317.6241f, 149.1848f, -101.0489f },
	{ 220.1623f, -91.57919f, -215.9583f },
	{ -192.5775f, -86.76553f, -213.3509f },
	{ -270.4281f, -95.99348f, 187.3309f },
	{ 138.1241f, -96.08142f, 188.2812f },
	{ -239.3755f, -90.81036f, -27.21456f },
	{ -52.16697f, -96.50585f, 200.241f },
	{ -218.6932f, -87.51703f, -139.4615f },
	{ 60.99084f, -95.17419f, 201.6895f },
	{ -178.73f, -86.62524f, -226.0998f },
	{ -67.146f, -87.79884f, -226.6471f },
	{ 174.7846f, -94.86132f, 67.70435f },
	{ 150.8471f, -95.95428f, 174.2629f },
	{ -271.0139f, -92.49326f, 75.50211f },
	{ -162.3819f, -95.40967f, 207.1259f },
	{ 188.7509f, -96.40562f, -11.85779f },
	{ 210.7042f, -91.49737f, -130.3103f },
	{ 144.6193f, -86.55041f, -219.077f },
	{ 13.14084f, -91.45869f, -225.1336f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000512A8[] = {
	{ -0.634005f, 0.019304f, -0.773088f },
	{ -0.598581f, 0.726429f, 0.33764f },
	{ -0.770651f, 0.486306f, -0.41183f },
	{ -0.422498f, 0.728916f, 0.53868f },
	{ 0.629616f, 0.579909f, -0.517f },
	{ 0.642458f, -0.011558f, 0.766234f },
	{ 0.260436f, 0.94482f, -0.198717f },
	{ 0.270745f, 0.457376f, 0.847056f },
	{ 0.00279f, -0.421383f, 0.9068789f },
	{ -0.898787f, -0.398909f, -0.181806f },
	{ -0.432613f, 0.170378f, -0.885334f },
	{ -0.6309389f, -0.589205f, 0.504731f },
	{ -0.635578f, 0.019081f, -0.771801f },
	{ -0.634845f, -0.5794359f, 0.511103f },
	{ 0.638232f, 0.576049f, -0.510712f },
	{ 0.788195f, 0.137049f, 0.599972f },
	{ 0.6352969f, 0.580111f, -0.509774f },
	{ 0.636005f, -0.01765f, 0.7714829f },
	{ -0.6355439f, 0.017903f, -0.771857f },
	{ -0.635545f, -0.5797679f, 0.509855f },
	{ -0.7720129f, 0.484918f, -0.410914f },
	{ -0.772012f, -0.003079f, 0.6356f },
	{ 0.6355439f, 0.5797679f, -0.509856f },
	{ 0.635543f, -0.017903f, 0.771858f },
	{ 0.265825f, 0.94368f, -0.196991f },
	{ 0.265825f, 0.455683f, 0.849524f },
	{ -0.635543f, 0.017902f, -0.771858f },
	{ -0.635542f, -0.579769f, 0.509856f },
	{ -0.7720129f, 0.484917f, -0.410914f },
	{ -0.7720129f, -0.00308f, 0.635599f },
	{ 0.6355439f, 0.5797679f, -0.509856f },
	{ 0.635543f, -0.017905f, 0.771858f },
	{ 0.265826f, 0.94368f, -0.19699f },
	{ 0.265826f, 0.455683f, 0.8495229f },
	{ -0.6355439f, 0.017904f, -0.771857f },
	{ -0.635543f, -0.579769f, 0.509856f },
	{ -0.7720129f, 0.484918f, -0.410914f },
	{ -0.7720129f, -0.00308f, 0.635599f },
	{ 0.635543f, 0.579771f, -0.509854f },
	{ 0.635543f, -0.017903f, 0.771858f },
	{ 0.265824f, 0.94368f, -0.19699f },
	{ 0.265825f, 0.455683f, 0.849524f },
	{ -0.635543f, 0.017902f, -0.771858f },
	{ -0.635543f, -0.57977f, 0.509855f },
	{ -0.7720129f, 0.484918f, -0.410915f },
	{ -0.7720129f, -0.00308f, 0.6356f },
	{ 0.636857f, 0.57973f, -0.508259f },
	{ 0.641288f, -0.012637f, 0.767196f },
	{ 0.267629f, 0.943315f, -0.196294f },
	{ 0.289803f, 0.44192f, 0.8489529f },
	{ -0.641094f, 0.012817f, -0.767355f },
	{ -0.638539f, -0.579678f, 0.506202f },
	{ -0.775516f, 0.482129f, -0.407586f },
	{ -0.773885f, 0.000687f, 0.633326f },
	{ 0.635543f, 0.579769f, -0.509856f },
	{ 0.636929f, -0.016638f, 0.770743f },
	{ 0.264998f, 0.944011f, -0.196518f },
	{ 0.266036f, 0.457073f, 0.8487099f },
	{ -0.631843f, 0.021269f, -0.774804f },
	{ -0.629815f, -0.579906f, 0.516762f },
	{ -0.769007f, 0.48589f, -0.415378f },
	{ -0.769049f, -0.022193f, 0.638805f },
	{ 0.6355439f, 0.579769f, -0.509855f },
	{ 0.638191f, -0.015483f, 0.769723f },
	{ 0.265825f, 0.94368f, -0.196991f },
	{ 0.269408f, 0.456338f, 0.848042f },
	{ -0.635545f, 0.017904f, -0.771857f },
	{ -0.6355439f, -0.5797679f, 0.509855f },
	{ -0.772012f, 0.484919f, -0.410915f },
	{ -0.772012f, -0.003078f, 0.6356f },
	{ 0.6355439f, 0.579767f, -0.509857f },
	{ 0.6355439f, -0.017905f, 0.771857f },
	{ 0.265827f, 0.943679f, -0.19699f },
	{ 0.265827f, 0.455682f, 0.849524f },
	{ -0.757042f, 0.597604f, -0.264114f },
	{ 0.127246f, 0.988489f, -0.081843f },
	{ -0.757041f, 0.181807f, 0.627563f },
	{ 0.127245f, 0.572693f, 0.8098339f },
	{ -0.219639f, 0.954231f, 0.202982f },
	{ -0.613868f, 0.779968f, 0.121722f },
	{ -0.613868f, 0.5946f, 0.519247f },
	{ -0.219638f, 0.768861f, 0.600509f },
	{ 0.636705f, 0.577492f, -0.510988f },
	{ -0.637395f, 0.010621f, -0.7704639f },
	{ -0.6344399f, -0.5828969f, 0.5076579f },
	{ 0.633159f, -0.025275f, 0.773609f },
	{ -0.944955f, 0.29785f, 0.135446f },
	{ -0.309264f, 0.275044f, 0.910333f },
	{ -0.8987359f, -0.402089f, -0.174924f },
	{ 0.0009829999f, -0.422183f, 0.90651f },
	{ -0.309976f, 0.8748339f, -0.372264f },
	{ 0, 0.422618f, -0.906308f },
	{ 0.8987949f, 0.39698f, 0.185945f },
	{ 0.307412f, 0.866698f, 0.392852f },
	{ -0.898794f, -0.396752f, -0.186435f },
	{ 0.000629f, -0.42234f, 0.906437f },
	{ 0.328847f, 0.856394f, 0.398056f },
	{ 0.8987949f, 0.396987f, 0.185929f },
	{ -0.009172999f, 0.418542f, -0.908151f },
	{ -0.302689f, 0.877747f, -0.371402f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00051758 = { vertex_00050DF8, normal_000512A8, LengthOfArray<Sint32>(vertex_00050DF8), meshlist_00050D50, matlist_0005074C, LengthOfArray<Uint16>(meshlist_00050D50), LengthOfArray<Uint16>(matlist_0005074C), { -0.000153f, 0, 0.000061f }, 453.5959f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00051780 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00051758, 3401, 92, -7184, 0, 0x40A1, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000517B4[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 105, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 102, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 103, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 106, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 104, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 97, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 85, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 161, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 91, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 97, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 103, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 103, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 103, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 101, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000518CC[] = {
	4, 3, 11, 1, 9,
	4, 2, 10, 6, 0
};

extern "C" __declspec(dllexport) Sint16 poly_000518E0[] = {
	0x8000u | 10, 62, 8, 60, 5, 61, 4, 63, 7, 62, 8
};

extern "C" __declspec(dllexport) Sint16 poly_000518F6[] = {
	4, 11, 55, 9, 52,
	4, 10, 53, 0, 54
};

extern "C" __declspec(dllexport) Sint16 poly_0005190A[] = {
	4, 10, 2, 9, 1
};

extern "C" __declspec(dllexport) Sint16 poly_00051914[] = {
	4, 6, 0, 3, 11
};

extern "C" __declspec(dllexport) Sint16 poly_0005191E[] = {
	4, 8, 5, 7, 4
};

extern "C" __declspec(dllexport) Sint16 poly_00051928[] = {
	4, 39, 38, 37, 36,
	4, 43, 39, 41, 37,
	4, 42, 43, 40, 41,
	4, 38, 42, 36, 40
};

extern "C" __declspec(dllexport) Sint16 poly_00051950[] = {
	10, 17, 15, 13, 14, 12, 18, 16, 19, 17, 15,
	10, 25, 23, 21, 22, 20, 26, 24, 27, 25, 23,
	10, 33, 31, 29, 30, 28, 34, 32, 35, 33, 31
};

extern "C" __declspec(dllexport) Sint16 poly_00051992[] = {
	4, 19, 18, 15, 14,
	4, 27, 26, 23, 22,
	4, 35, 34, 31, 30
};

extern "C" __declspec(dllexport) Sint16 poly_000519B0[] = {
	8, 48, 49, 44, 46, 45, 47, 51, 50,
	4, 44, 45, 48, 51,
	4, 47, 46, 50, 49,
	0x8000u | 10, 43, 50, 42, 51, 38, 48, 39, 49, 43, 50
};

extern "C" __declspec(dllexport) Sint16 poly_000519EC[] = {
	4, 9, 52, 10, 53,
	4, 0, 54, 11, 55
};

extern "C" __declspec(dllexport) Sint16 poly_00051A00[] = {
	4, 55, 58, 52, 56,
	4, 53, 57, 54, 59
};

extern "C" __declspec(dllexport) Sint16 poly_00051A14[] = {
	4, 54, 59, 55, 58,
	4, 52, 56, 53, 57
};

extern "C" __declspec(dllexport) Sint16 poly_00051A28[] = {
	0x8000u | 10, 60, 56, 62, 57, 63, 59, 61, 58, 60, 56
};

NJS_TEX uv_00051A40[] = {
	{ 0, 255 },
	{ 0, 107 },
	{ 254, 149 },
	{ 254, 0 },
	{ 254, 149 },
	{ 254, 0 },
	{ 0, 255 },
	{ 0, 107 }
};

NJS_TEX uv_00051A60[] = {
	{ 1105, 1 },
	{ 2719, 253 },
	{ 2719, 1 },
	{ 3794, 253 },
	{ 3794, 1 },
	{ 29, 253 },
	{ 29, 1 },
	{ 1105, 253 },
	{ 1105, 1 },
	{ 2719, 253 }
};

NJS_TEX uv_00051A88[] = {
	{ 508, 255 },
	{ 508, 0 },
	{ 0, 100 },
	{ 0 },
	{ 0, 100 },
	{ 0 },
	{ 508, 255 },
	{ 508, 0 }
};

NJS_TEX uv_00051AA8[] = {
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 }
};

NJS_TEX uv_00051AB8[] = {
	{ 0, 255 },
	{ 0, 21 },
	{ 255, 255 },
	{ 255, 21 }
};

NJS_TEX uv_00051AC8[] = {
	{ 791, -255 },
	{ 791, 255 },
	{ 0, -255 },
	{ 0, 255 }
};

NJS_TEX uv_00051AD8[] = {
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 253 },
	{ 1, 253 },
	{ 272, -843 },
	{ 525, -824 },
	{ 270, -605 },
	{ 525, -588 }
};

NJS_TEX uv_00051B18[] = {
	{ 73, 253 },
	{ 1, 1 },
	{ 1, 255 },
	{ 1, 1 },
	{ 1, 255 },
	{ 73, 1 },
	{ 73, 253 },
	{ 73, 1 },
	{ 73, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 181, 1 },
	{ 181, 253 },
	{ 181, 1 },
	{ 181, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 181, 1 },
	{ 181, 253 },
	{ 73, 1 },
	{ 73, 253 },
	{ 73, 1 },
	{ 73, 253 },
	{ 181, 1 },
	{ 181, 253 },
	{ 181, 1 },
	{ 181, 253 },
	{ 73, 1 }
};

NJS_TEX uv_00051B90[] = {
	{ 255, 0 },
	{ 255, 255 },
	{ 1, 1 },
	{ 1, 253 },
	{ 255, 0 },
	{ 255, 255 },
	{ 1, 1 },
	{ 1, 253 },
	{ 255, 0 },
	{ 255, 255 },
	{ 1, 1 },
	{ 1, 253 }
};

NJS_TEX uv_00051BC0[] = {
	{ 8, 8 },
	{ 246, 8 },
	{ 248, 11 },
	{ 248, 243 },
	{ 15, 11 },
	{ 15, 243 },
	{ 8, 246 },
	{ 246, 246 },
	{ 248, 11 },
	{ 15, 11 },
	{ 8, 8 },
	{ 8, 246 },
	{ 15, 243 },
	{ 248, 243 },
	{ 246, 246 },
	{ 246, 8 },
	{ 254, 0 },
	{ 246, 246 },
	{ 254, 255 },
	{ 8, 246 },
	{ 0, 255 },
	{ 8, 8 },
	{ 0 },
	{ 246, 8 },
	{ 254, 0 },
	{ 246, 246 }
};

NJS_TEX uv_00051C28[] = {
	{ 255, 98 },
	{ 255, 0 },
	{ 0, 98 },
	{ 0 },
	{ 0, 255 },
	{ 0, 3 },
	{ 255, 255 },
	{ 255, 3 }
};

NJS_TEX uv_00051C48[] = {
	{ 508, 254 },
	{ 508, -254 },
	{ 0, 254 },
	{ 0, -254 },
	{ 0, 254 },
	{ 0, -254 },
	{ 508, 254 },
	{ 508, -254 }
};

NJS_TEX uv_00051C68[] = {
	{ 0, 254 },
	{ 0, -254 },
	{ 254, 254 },
	{ 254, -254 },
	{ 254, 254 },
	{ 254, -254 },
	{ 0, 254 },
	{ 0, -254 }
};

NJS_TEX uv_00051C88[] = {
	{ 2581, 0 },
	{ 3825, 255 },
	{ 3825, 0 },
	{ 669, 255 },
	{ 669, 0 },
	{ 1912, 255 },
	{ 1912, 0 },
	{ 2582, 255 },
	{ 2581, 0 },
	{ 3825, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00051CB0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000518CC, NULL, NULL, NULL, uv_00051A40, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000518E0, NULL, NULL, NULL, uv_00051A60, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_000518F6, NULL, NULL, NULL, uv_00051A88, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_0005190A, NULL, NULL, NULL, uv_00051AA8, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_00051914, NULL, NULL, NULL, uv_00051AB8, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_0005191E, NULL, NULL, NULL, uv_00051AC8, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 4, poly_00051928, NULL, NULL, NULL, uv_00051AD8, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 3, poly_00051950, NULL, NULL, NULL, uv_00051B18, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 3, poly_00051992, NULL, NULL, NULL, uv_00051B90, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 4, poly_000519B0, NULL, NULL, NULL, uv_00051BC0, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 2, poly_000519EC, NULL, NULL, NULL, uv_00051C28, NULL },
	{ NJD_MESHSET_TRIMESH | 11, 2, poly_00051A00, NULL, NULL, NULL, uv_00051C48, NULL },
	{ NJD_MESHSET_TRIMESH | 12, 2, poly_00051A14, NULL, NULL, NULL, uv_00051C68, NULL },
	{ NJD_MESHSET_TRIMESH | 13, 1, poly_00051A28, NULL, NULL, NULL, uv_00051C88, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00051E00[] = {
	{ 459.0237f, 2.583344f, -87.25937f },
	{ 20.08955f, -200.8054f, 172.1427f },
	{ 20.08955f, -200.8054f, -87.25937f },
	{ 524.2067f, -196.729f, 172.1427f },
	{ -214.0625f, 479.1631f, -91.62233f },
	{ 265.396f, 637.6601f, -91.62233f },
	{ 524.2067f, -196.729f, -87.25937f },
	{ -214.0625f, 479.1631f, 180.7499f },
	{ 265.396f, 637.6601f, 180.7499f },
	{ -44.93166f, 2.148833f, 172.1427f },
	{ -44.93166f, 2.148833f, -87.25937f },
	{ 459.0237f, 2.583344f, 172.1427f },
	{ -119.1003f, 548.1204f, -24.99644f },
	{ -119.1003f, 548.1204f, 14.31167f },
	{ -128.3058f, 577.8795f, -24.99644f },
	{ -128.3058f, 577.8795f, 14.31167f },
	{ -78.92352f, 560.5486f, -24.99644f },
	{ -78.92352f, 560.5486f, 14.31167f },
	{ -88.12908f, 590.3076f, -24.99644f },
	{ -88.12908f, 590.3076f, 14.31167f },
	{ -18.7962f, 580.5693f, -24.99644f },
	{ -18.7962f, 580.5693f, 14.31167f },
	{ -28.00177f, 610.3282f, -24.99644f },
	{ -28.00177f, 610.3282f, 14.31167f },
	{ 21.3808f, 592.9974f, -24.99644f },
	{ 21.3808f, 592.9974f, 14.31167f },
	{ 12.17523f, 622.7564f, -24.99644f },
	{ 12.17523f, 622.7564f, 14.31167f },
	{ -68.76337f, 563.6914f, -24.99644f },
	{ -68.76337f, 563.6914f, 14.31167f },
	{ -77.96893f, 593.4504f, -24.99644f },
	{ -77.96893f, 593.4504f, 14.31167f },
	{ -29.00079f, 577.4127f, -24.99644f },
	{ -29.00079f, 577.4127f, 14.31167f },
	{ -38.20587f, 607.1717f, -24.99644f },
	{ -38.20587f, 607.1717f, 14.31167f },
	{ -135.7626f, 504.7715f, -79.43563f },
	{ -135.7626f, 504.7715f, 31.79946f },
	{ -149.1992f, 548.2088f, -79.43563f },
	{ -149.1992f, 548.2088f, 31.79946f },
	{ 58.78851f, 569.2166f, -79.43563f },
	{ 58.78851f, 569.2166f, 31.79946f },
	{ 45.35175f, 612.6539f, -79.43563f },
	{ 45.35175f, 612.6539f, 31.79946f },
	{ 40.08807f, 598.9474f, 26.87173f },
	{ -137.1157f, 539.8685f, 26.87173f },
	{ 40.08807f, 598.9474f, -74.5079f },
	{ -137.1157f, 539.8685f, -74.5079f },
	{ -142.3466f, 550.3287f, 27.90627f },
	{ 38.49896f, 610.5341f, 27.90627f },
	{ 38.49896f, 610.5341f, -75.54245f },
	{ -142.3466f, 550.3287f, -75.54245f },
	{ -75.00951f, 96.48391f, 172.1427f },
	{ -75.00951f, 96.48391f, -87.25937f },
	{ 380.9506f, 242.154f, -87.25937f },
	{ 380.9506f, 242.154f, 172.1427f },
	{ -192.2759f, 456.7057f, 172.1427f },
	{ -192.2759f, 456.7057f, -87.25937f },
	{ 264.0177f, 606.6322f, 172.1427f },
	{ 264.0177f, 606.6322f, -87.25937f },
	{ 269.6914f, 620.819f, 180.7499f },
	{ 269.6914f, 620.819f, -91.62233f },
	{ -209.592f, 462.2942f, 180.7499f },
	{ -209.592f, 462.2942f, -91.62233f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00052100[] = {
	{ 0.672081f, 0.21941f, -0.707224f },
	{ -0.611996f, -0.196067f, 0.766171f },
	{ -0.611996f, -0.196067f, -0.766171f },
	{ 0.740765f, 0.24226f, 0.62656f },
	{ -0.715993f, 0.387656f, -0.580582f },
	{ 0.3933f, 0.718394f, -0.573782f },
	{ 0.740765f, 0.24226f, -0.62656f },
	{ -0.715993f, 0.387656f, 0.580582f },
	{ 0.3933f, 0.718394f, 0.573782f },
	{ -0.673691f, -0.215317f, 0.7069499f },
	{ -0.673691f, -0.215317f, -0.7069499f },
	{ 0.672081f, 0.21941f, 0.707224f },
	{ -0.675525f, -0.208965f, -0.7071069f },
	{ -0.675525f, -0.208965f, 0.7071069f },
	{ -0.722183f, 0.380945f, -0.57735f },
	{ -0.722183f, 0.380945f, 0.57735f },
	{ 0.675525f, 0.208965f, -0.7071069f },
	{ 0.675525f, 0.208965f, 0.7071069f },
	{ 0.380945f, 0.722183f, -0.57735f },
	{ 0.380945f, 0.722183f, 0.57735f },
	{ -0.675524f, -0.208965f, -0.7071069f },
	{ -0.675524f, -0.208965f, 0.7071069f },
	{ -0.722182f, 0.380946f, -0.57735f },
	{ -0.722182f, 0.380946f, 0.57735f },
	{ 0.675525f, 0.208965f, -0.707106f },
	{ 0.675525f, 0.208965f, 0.707106f },
	{ 0.380945f, 0.722182f, -0.57735f },
	{ 0.380945f, 0.722182f, 0.57735f },
	{ -0.682502f, -0.211123f, -0.699727f },
	{ -0.682502f, -0.211123f, 0.699727f },
	{ -0.727152f, 0.36869f, -0.579067f },
	{ -0.727152f, 0.36869f, 0.579067f },
	{ 0.668619f, 0.206818f, -0.714265f },
	{ 0.668619f, 0.206818f, 0.714265f },
	{ 0.369781f, 0.7292899f, -0.575671f },
	{ 0.369781f, 0.7292899f, 0.575671f },
	{ -0.679814f, -0.210287f, -0.70259f },
	{ -0.679814f, -0.210287f, 0.70259f },
	{ -0.721081f, 0.377551f, -0.580946f },
	{ -0.721081f, 0.377551f, 0.580946f },
	{ 0.6712649f, 0.207647f, -0.711538f },
	{ 0.6712649f, 0.207647f, 0.711538f },
	{ 0.379815f, 0.725733f, -0.57363f },
	{ 0.379815f, 0.725733f, 0.57363f },
	{ -0.697746f, 0.450338f, -0.557088f },
	{ 0.305495f, 0.7737139f, -0.5550129f },
	{ -0.697746f, 0.450338f, 0.557088f },
	{ 0.305495f, 0.7737139f, 0.5550129f },
	{ -0.028737f, 0.96501f, -0.260633f },
	{ -0.538815f, 0.803796f, -0.252171f },
	{ -0.538815f, 0.803796f, 0.252171f },
	{ -0.028737f, 0.96501f, 0.260633f },
	{ -0.672386f, -0.216634f, 0.70779f },
	{ -0.672386f, -0.216634f, -0.70779f },
	{ 0.672316f, 0.217396f, -0.7076229f },
	{ 0.672316f, 0.217396f, 0.7076229f },
	{ -0.307231f, -0.701474f, 0.643073f },
	{ -0.336981f, -0.582775f, -0.7394699f },
	{ 0.7271399f, -0.292692f, 0.620966f },
	{ 0.676085f, -0.190684f, -0.711723f },
	{ 0.735181f, -0.155437f, 0.659809f },
	{ 0.746924f, -0.106541f, -0.6563179f },
	{ -0.517653f, -0.574927f, 0.633636f },
	{ -0.543842f, -0.558728f, -0.626146f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00052400 = { vertex_00051E00, normal_00052100, LengthOfArray<Sint32>(vertex_00051E00), meshlist_00051CB0, matlist_000517B4, LengthOfArray<Uint16>(meshlist_00051CB0), LengthOfArray<Uint16>(matlist_000517B4), { 155.0721f, 218.4274f, 44.56376f }, 549.4017f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00052428 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00052400, 5136.998f, -100, -5160, 0x1EF1, 0x3E5E, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0005245C[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 112, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 111, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 92, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 110, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 136, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 107, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 108, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 84, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 91, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 97, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00052524[] = {
	4, 4, 5, 3, 2,
	4, 12, 13, 9, 6
};

extern "C" __declspec(dllexport) Sint16 poly_00052538[] = {
	4, 9, 6, 2, 3,
	4, 5, 4, 12, 13
};

extern "C" __declspec(dllexport) Sint16 poly_0005254C[] = {
	0x8000u | 10, 26, 10, 27, 25, 0, 24, 21, 15, 26, 10
};

extern "C" __declspec(dllexport) Sint16 poly_00052562[] = {
	0x8000u | 5, 18, 17, 29, 3, 4,
	4, 3, 6, 17, 19,
	0x8000u | 5, 13, 6, 30, 19, 22,
	4, 4, 29, 13, 30,
	4, 29, 18, 30, 22
};

extern "C" __declspec(dllexport) Sint16 poly_00052598[] = {
	0x8000u | 10, 20, 17, 14, 18, 1, 22, 23, 19, 20, 17,
	0x8000u | 10, 15, 8, 10, 11, 25, 7, 24, 16, 15, 8,
	4, 26, 21, 27, 0
};

extern "C" __declspec(dllexport) Sint16 poly_000525CE[] = {
	4, 16, 1, 7, 14,
	4, 11, 20, 8, 23
};

extern "C" __declspec(dllexport) Sint16 poly_000525E2[] = {
	4, 7, 14, 11, 20,
	4, 8, 23, 16, 1
};

extern "C" __declspec(dllexport) Sint16 poly_000525F6[] = {
	4, 59, 58, 57, 56,
	4, 63, 59, 61, 57,
	4, 62, 63, 60, 61,
	4, 58, 62, 56, 60,
	4, 35, 34, 33, 32,
	0x8000u | 6, 38, 36, 39, 37, 35, 33,
	4, 34, 38, 32, 36,
	4, 43, 42, 41, 40,
	4, 47, 43, 45, 41,
	4, 46, 47, 44, 45,
	4, 42, 46, 40, 44,
	4, 51, 50, 49, 48,
	4, 55, 51, 53, 49,
	4, 54, 55, 52, 53,
	4, 50, 54, 48, 52
};

extern "C" __declspec(dllexport) Sint16 poly_00052690[] = {
	4, 39, 38, 35, 34,
	4, 47, 46, 43, 42,
	4, 55, 54, 51, 50
};

extern "C" __declspec(dllexport) Sint16 poly_000526AE[] = {
	0x8000u | 10, 69, 66, 31, 67, 28, 65, 68, 64, 69, 66,
	0x8000u | 10, 58, 68, 59, 69, 63, 31, 62, 28, 58, 68,
	4, 67, 65, 66, 64
};

NJS_TEX uv_000526E4[] = {
	{ 0, 41 },
	{ 1, 255 },
	{ 253, 0 },
	{ 255, 212 },
	{ 1, 255 },
	{ 0, 41 },
	{ 255, 212 },
	{ 253, 0 }
};

NJS_TEX uv_00052704[] = {
	{ 510, 215 },
	{ 510, 0 },
	{ 0, 215 },
	{ 0 },
	{ 0, 254 },
	{ 0, 38 },
	{ 510, 254 },
	{ 510, 38 }
};

NJS_TEX uv_00052724[] = {
	{ 127, 169 },
	{ 1019, 254 },
	{ 892, 169 },
	{ 1019, -254 },
	{ 892, -182 },
	{ 0, -254 },
	{ 127, -182 },
	{ 0, 254 },
	{ 127, 169 },
	{ 1019, 254 }
};

NJS_TEX uv_0005274C[] = {
	{ 0, 6 },
	{ 504, 0 },
	{ 5, 240 },
	{ 510, 223 },
	{ 4, 254 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0 },
	{ 510, 0 },
	{ 4, 254 },
	{ 510, 223 },
	{ 5, 240 },
	{ 504, 0 },
	{ 0, 6 },
	{ 0, 227 },
	{ 0, 207 },
	{ 510, 227 },
	{ 510, 207 },
	{ 0, 254 },
	{ 0 },
	{ 510, 254 },
	{ 510, 0 }
};

NJS_TEX uv_000527A4[] = {
	{ 488, -221 },
	{ 0, -255 },
	{ 21, -221 },
	{ 0, 254 },
	{ 21, 221 },
	{ 510, 254 },
	{ 488, 221 },
	{ 510, -255 },
	{ 488, -221 },
	{ 0, -255 },
	{ 51, 160 },
	{ 488, 210 },
	{ 458, 160 },
	{ 488, -233 },
	{ 458, -184 },
	{ 21, -233 },
	{ 51, -184 },
	{ 21, 210 },
	{ 51, 160 },
	{ 488, 210 },
	{ 102, 103 },
	{ 102, -134 },
	{ 406, 103 },
	{ 406, -134 }
};

NJS_TEX uv_00052804[] = {
	{ 7, 1 },
	{ 7, 253 },
	{ 1012, 1 },
	{ 1012, 253 },
	{ 1012, 1 },
	{ 1012, 253 },
	{ 7, 1 },
	{ 7, 253 }
};

NJS_TEX uv_00052824[] = {
	{ 0 },
	{ 0, 235 },
	{ 1529, 0 },
	{ 1529, 235 },
	{ 1529, 19 },
	{ 1529, 255 },
	{ 0, 19 },
	{ 0, 255 }
};

NJS_TEX uv_00052844[] = {
	{ 510, 0 },
	{ 0 },
	{ 506, 253 },
	{ 3, 253 },
	{ 510, 0 },
	{ 0 },
	{ 506, 253 },
	{ 3, 253 },
	{ 510, 0 },
	{ 0 },
	{ 506, 253 },
	{ 3, 253 },
	{ 510, 0 },
	{ 0 },
	{ 506, 253 },
	{ 3, 253 },
	{ 510, 0 },
	{ 0 },
	{ 506, 253 },
	{ 3, 253 },
	{ 176, 119 },
	{ 176, 127 },
	{ 176, 33 },
	{ 176, 41 },
	{ 71, 33 },
	{ 71, 41 },
	{ 510, 0 },
	{ 0 },
	{ 506, 253 },
	{ 3, 253 },
	{ 510, 0 },
	{ 0 },
	{ 506, 253 },
	{ 3, 253 },
	{ 438, 33 },
	{ 332, 33 },
	{ 438, 41 },
	{ 332, 41 },
	{ 510, 0 },
	{ 0 },
	{ 506, 253 },
	{ 3, 253 },
	{ 510, 0 },
	{ 0 },
	{ 506, 253 },
	{ 3, 253 },
	{ 510, 0 },
	{ 0 },
	{ 506, 253 },
	{ 3, 253 },
	{ 510, 0 },
	{ 0 },
	{ 506, 253 },
	{ 3, 253 },
	{ 510, 0 },
	{ 0 },
	{ 506, 253 },
	{ 3, 253 },
	{ 510, 0 },
	{ 0 },
	{ 506, 253 },
	{ 3, 253 }
};

NJS_TEX uv_0005293C[] = {
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 }
};

NJS_TEX uv_0005296C[] = {
	{ 246, 8 },
	{ 243, 243 },
	{ 246, 246 },
	{ 11, 243 },
	{ 8, 246 },
	{ 11, 11 },
	{ 8, 8 },
	{ 243, 11 },
	{ 246, 8 },
	{ 243, 243 },
	{ 0, 255 },
	{ 8, 8 },
	{ 0 },
	{ 246, 8 },
	{ 255, 0 },
	{ 246, 246 },
	{ 255, 255 },
	{ 8, 246 },
	{ 0, 255 },
	{ 8, 8 },
	{ 11, 243 },
	{ 11, 11 },
	{ 243, 243 },
	{ 243, 11 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000529CC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00052524, NULL, NULL, NULL, uv_000526E4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00052538, NULL, NULL, NULL, uv_00052704, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0005254C, NULL, NULL, NULL, uv_00052724, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 5, poly_00052562, NULL, NULL, NULL, uv_0005274C, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 3, poly_00052598, NULL, NULL, NULL, uv_000527A4, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, poly_000525CE, NULL, NULL, NULL, uv_00052804, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, poly_000525E2, NULL, NULL, NULL, uv_00052824, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 15, poly_000525F6, NULL, NULL, NULL, uv_00052844, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 3, poly_00052690, NULL, NULL, NULL, uv_0005293C, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 3, poly_000526AE, NULL, NULL, NULL, uv_0005296C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00052ABC[] = {
	{ 157.6574f, 431.5342f, 110.0374f },
	{ -240.7355f, 362.8795f, -123.3048f },
	{ -263.0036f, -202.1986f, 122.8229f },
	{ -263.0036f, 0.445557f, 145.6786f },
	{ -263.0036f, 0.831482f, -193.0498f },
	{ -263.0036f, -202.7989f, -215.9046f },
	{ 263.0036f, 0.445557f, 145.6786f },
	{ -240.7355f, 399.22f, 174.5032f },
	{ 240.7355f, 431.2773f, -115.7506f },
	{ 263.0036f, -202.1986f, 122.8229f },
	{ 210.21f, 427.7197f, -83.53951f },
	{ 240.7355f, 399.22f, 174.5034f },
	{ 263.0036f, -202.7989f, -215.9046f },
	{ 263.0036f, 0.831482f, -193.0497f },
	{ -240.7355f, 330.8221f, 166.9491f },
	{ -210.21f, 427.7197f, -83.53951f },
	{ -240.7355f, 431.2773f, -115.7506f },
	{ -263.0036f, 327.4567f, 188.6119f },
	{ -263.0036f, 364.3226f, -145.18f },
	{ 263.0036f, 327.4567f, 188.6119f },
	{ 240.7355f, 330.8221f, 166.9491f },
	{ -157.6574f, 431.5342f, 110.0374f },
	{ 263.0036f, 364.3226f, -145.1799f },
	{ 240.7355f, 362.8795f, -123.3048f },
	{ -210.21f, 402.7775f, 142.2923f },
	{ 210.21f, 402.7775f, 142.2923f },
	{ -157.6574f, 448.7443f, -45.78658f },
	{ 157.6574f, 448.7443f, -45.78658f },
	{ -88.94344f, 469.2865f, -11.40526f },
	{ -263.0036f, 21.24705f, -189.7108f },
	{ 263.0036f, 21.24705f, -189.7108f },
	{ 87.20049f, 469.2865f, -11.40526f },
	{ -71.67731f, 450.8118f, 36.5797f },
	{ -71.67731f, 446.1458f, 78.82667f },
	{ -71.67731f, 484.0394f, 40.24953f },
	{ -71.67731f, 479.3734f, 82.49649f },
	{ -30.75039f, 450.8118f, 36.5797f },
	{ -30.75039f, 446.1458f, 78.82667f },
	{ -30.75039f, 484.0394f, 40.24953f },
	{ -30.75039f, 479.3734f, 82.49649f },
	{ 30.92136f, 450.8118f, 36.5797f },
	{ 30.92136f, 446.1458f, 78.82667f },
	{ 30.92136f, 484.0394f, 40.24953f },
	{ 30.92136f, 479.3734f, 82.49649f },
	{ 71.84829f, 450.8118f, 36.5797f },
	{ 71.84829f, 446.1458f, 78.82667f },
	{ 71.84829f, 484.0394f, 40.24953f },
	{ 71.84829f, 479.3734f, 82.49649f },
	{ -20.4005f, 450.8118f, 36.5797f },
	{ -20.40061f, 446.1458f, 78.82667f },
	{ -20.4005f, 484.0394f, 40.24953f },
	{ -20.40061f, 479.3734f, 82.49649f },
	{ 20.52632f, 450.8118f, 36.5797f },
	{ 20.52632f, 446.1458f, 78.82667f },
	{ 20.52632f, 484.0394f, 40.24953f },
	{ 20.52632f, 479.3734f, 82.49649f },
	{ -99.66147f, 445.2334f, -24.25442f },
	{ -99.66147f, 432.0289f, 95.29723f },
	{ -99.66147f, 469.7485f, -20.55189f },
	{ -99.66147f, 456.5447f, 98.99972f },
	{ 99.78729f, 445.2334f, -24.25442f },
	{ 99.78729f, 432.0289f, 95.29723f },
	{ 99.78729f, 469.7485f, -20.55189f },
	{ 99.78729f, 456.5447f, 98.99972f },
	{ 85.34567f, 444.8209f, 88.20894f },
	{ -87.08851f, 444.8209f, 88.20894f },
	{ 85.34567f, 456.8556f, -11.65293f },
	{ -87.08851f, 456.8556f, -11.65293f },
	{ -88.94344f, 457.0064f, 90.68016f },
	{ 87.20049f, 457.0064f, 90.68016f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00052E04[] = {
	{ 0.158672f, 0.922685f, 0.35139f },
	{ -0.31747f, 0.9228849f, -0.217936f },
	{ -0.731436f, -0.076426f, 0.677614f },
	{ -0.709164f, -0.085402f, 0.699852f },
	{ -0.701485f, 0.09729099f, -0.706012f },
	{ -0.680115f, 0.081768f, -0.7285309f },
	{ 0.709164f, -0.085402f, 0.699852f },
	{ -0.577351f, 0.51048f, 0.6372409f },
	{ 0.57735f, 0.6372409f, -0.510481f },
	{ 0.731436f, -0.076426f, 0.677614f },
	{ 0.070911f, 0.996438f, 0.045635f },
	{ 0.57735f, 0.51048f, 0.6372409f },
	{ 0.680115f, 0.081768f, -0.7285309f },
	{ 0.701486f, 0.09729099f, -0.706012f },
	{ -0.317469f, 0.853081f, 0.414084f },
	{ -0.070911f, 0.996438f, 0.045635f },
	{ -0.57735f, 0.6372409f, -0.510481f },
	{ -0.580516f, 0.49546f, 0.646159f },
	{ -0.582554f, 0.633621f, -0.509073f },
	{ 0.580516f, 0.49546f, 0.646159f },
	{ 0.317469f, 0.853081f, 0.414084f },
	{ -0.158672f, 0.922685f, 0.35139f },
	{ 0.582554f, 0.633621f, -0.509073f },
	{ 0.31747f, 0.9228849f, -0.217936f },
	{ -0.070911f, 0.982381f, 0.172916f },
	{ 0.070911f, 0.982381f, 0.172916f },
	{ -0.158672f, 0.97713f, -0.141564f },
	{ 0.158672f, 0.97713f, -0.141564f },
	{ 0.267463f, 0.902791f, 0.336798f },
	{ -0.710844f, 0.102043f, -0.695908f },
	{ 0.710843f, 0.102043f, -0.695909f },
	{ -0.267803f, 0.902995f, 0.335979f },
	{ -0.7071069f, 0.077625f, -0.702833f },
	{ -0.7071069f, -0.077625f, 0.702833f },
	{ -0.57735f, 0.6372409f, -0.51048f },
	{ -0.57735f, 0.51048f, 0.6372409f },
	{ 0.7071069f, 0.077625f, -0.702833f },
	{ 0.7071069f, -0.077625f, 0.702833f },
	{ 0.57735f, 0.6372409f, -0.51048f },
	{ 0.57735f, 0.51048f, 0.6372409f },
	{ -0.7071069f, 0.077625f, -0.702833f },
	{ -0.7071069f, -0.077625f, 0.702833f },
	{ -0.57735f, 0.6372409f, -0.51048f },
	{ -0.57735f, 0.51048f, 0.6372409f },
	{ 0.7071069f, 0.077625f, -0.702833f },
	{ 0.7071069f, -0.077625f, 0.702833f },
	{ 0.57735f, 0.6372409f, -0.51048f },
	{ 0.57735f, 0.51048f, 0.6372409f },
	{ -0.707106f, 0.077625f, -0.702834f },
	{ -0.7071069f, -0.07762399f, 0.702832f },
	{ -0.5773489f, 0.637242f, -0.510481f },
	{ -0.577351f, 0.51048f, 0.6372409f },
	{ 0.7071069f, 0.077625f, -0.702833f },
	{ 0.7071069f, -0.077625f, 0.702833f },
	{ 0.57735f, 0.6372409f, -0.51048f },
	{ 0.57735f, 0.51048f, 0.6372409f },
	{ -0.697955f, 0.106946f, -0.7081119f },
	{ -0.715916f, -0.104261f, 0.690358f },
	{ -0.575364f, 0.6418f, -0.507f },
	{ -0.5808229f, 0.50366f, 0.639509f },
	{ 0.697955f, 0.106946f, -0.7081119f },
	{ 0.715916f, -0.104261f, 0.690358f },
	{ 0.575859f, 0.642244f, -0.505874f },
	{ 0.5802259f, 0.503047f, 0.640533f },
	{ -0.531908f, 0.698786f, -0.478301f },
	{ 0.531905f, 0.698788f, -0.478302f },
	{ -0.532644f, 0.57121f, 0.624507f },
	{ 0.532641f, 0.571212f, 0.624508f },
	{ 0.267049f, 0.946797f, -0.179612f },
	{ -0.267269f, 0.9466029f, -0.180306f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0005314C = { vertex_00052ABC, normal_00052E04, LengthOfArray<Sint32>(vertex_00052ABC), meshlist_000529CC, matlist_0005245C, LengthOfArray<Uint16>(meshlist_000529CC), LengthOfArray<Uint16>(matlist_0005245C), { 0, 140.6203f, -13.64638f }, 439.7431f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00053174 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005314C, 4199, -0.001733f, -4890, 0, 0x4271, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000531A8[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 116, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 113, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 115, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 109, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 107, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 114, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00053220[] = {
	6, 2, 72, 3, 73, 9, 75,
	6, 72, 2, 74, 6, 75, 9
};

extern "C" __declspec(dllexport) Sint16 poly_0005323C[] = {
	8, 15, 30, 18, 31, 14, 28, 13, 29,
	4, 13, 29, 15, 30,
	4, 30, 25, 31, 24,
	4, 31, 24, 28, 27,
	4, 28, 27, 29, 26,
	4, 29, 26, 30, 25
};

extern "C" __declspec(dllexport) Sint16 poly_00053280[] = {
	0x8000u | 7, 74, 72, 63, 61, 42, 37, 56,
	0x8000u | 7, 73, 75, 60, 62, 34, 39, 58,
	0x8000u | 11, 33, 36, 51, 50, 32, 35, 52, 53, 57, 56, 37,
	0x8000u | 16, 36, 43, 50, 48, 35, 41, 53, 55, 56, 59, 42, 39, 63, 62, 74, 75,
	0x8000u | 11, 43, 40, 48, 49, 41, 38, 55, 54, 59, 58, 39,
	0x8000u | 16, 40, 33, 49, 51, 38, 32, 54, 52, 58, 57, 34, 37, 60, 61, 73, 72
};

extern "C" __declspec(dllexport) Sint16 poly_00053314[] = {
	8, 15, 12, 13, 4, 14, 5, 18, 7,
	4, 18, 7, 15, 12,
	0x8000u | 6, 11, 16, 10, 21, 23, 0,
	0x8000u | 6, 8, 1, 20, 19, 17, 22,
	0x8000u | 12, 16, 8, 21, 20, 0, 17, 23, 22, 10, 19, 11, 1
};

extern "C" __declspec(dllexport) Sint16 poly_00053366[] = {
	4, 1, 5, 8, 4,
	4, 16, 12, 11, 7,
	4, 8, 4, 16, 12,
	4, 11, 7, 1, 5
};

extern "C" __declspec(dllexport) Sint16 poly_0005338E[] = {
	3, 68, 26, 27,
	3, 65, 24, 25,
	0x8000u | 10, 24, 27, 67, 68, 64, 69, 44, 45, 33, 36,
	0x8000u | 9, 43, 36, 47, 45, 71, 69, 70, 68, 26,
	0x8000u | 10, 40, 43, 46, 47, 66, 71, 65, 70, 25, 26,
	0x8000u | 9, 33, 40, 44, 46, 64, 66, 67, 65, 24
};

NJS_TEX uv_000533F4[] = {
	{ 1020, 255 },
	{ 1020, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1019, 255 },
	{ 1019, 0 },
	{ 0 },
	{ 0, 255 },
	{ 1019, 0 },
	{ 1019, 255 },
	{ 0 },
	{ 0, 255 }
};

NJS_TEX uv_00053424[] = {
	{ 0 },
	{ 0, 255 },
	{ 2804, 0 },
	{ 2804, 255 },
	{ 0 },
	{ 0, 255 },
	{ 2804, 0 },
	{ 2804, 255 },
	{ 0 },
	{ 0, 255 },
	{ 2804, 0 },
	{ 2804, 255 },
	{ 0 },
	{ 57, 254 },
	{ 2039, 0 },
	{ 1982, 254 },
	{ 0 },
	{ 57, 254 },
	{ 2039, 0 },
	{ 1982, 254 },
	{ 0 },
	{ 57, 254 },
	{ 2039, 0 },
	{ 1982, 254 },
	{ 0 },
	{ 57, 254 },
	{ 2039, 0 },
	{ 1982, 254 }
};

NJS_TEX uv_00053494[] = {
	{ 1020, 254 },
	{ 0, 254 },
	{ 1020, 51 },
	{ 0, 51 },
	{ 1008, 51 },
	{ 10, 51 },
	{ 10, -66 },
	{ 0, 254 },
	{ 1020, 254 },
	{ 0, 51 },
	{ 1020, 51 },
	{ 10, 51 },
	{ 1008, 51 },
	{ 1008, -66 },
	{ 10, -255 },
	{ 1008, -255 },
	{ 10, -142 },
	{ 1008, -142 },
	{ 0, -142 },
	{ 1019, -142 },
	{ 0, -67 },
	{ 1019, -67 },
	{ 10, -66 },
	{ 1008, -66 },
	{ 1008, 51 },
	{ 10, -255 },
	{ 1008, -255 },
	{ 10, -142 },
	{ 1008, -142 },
	{ 0, -142 },
	{ 1020, -142 },
	{ 0, -67 },
	{ 1020, -67 },
	{ 10, -66 },
	{ 1008, -66 },
	{ 1008, 51 },
	{ 10, 51 },
	{ 1019, 51 },
	{ 0, 51 },
	{ 1019, 254 },
	{ 0, 254 },
	{ 1008, -255 },
	{ 10, -255 },
	{ 1008, -142 },
	{ 10, -142 },
	{ 1019, -142 },
	{ 0, -142 },
	{ 1019, -67 },
	{ 0, -67 },
	{ 1008, -66 },
	{ 10, -66 },
	{ 10, 51 },
	{ 1008, -255 },
	{ 10, -255 },
	{ 1008, -142 },
	{ 10, -142 },
	{ 1020, -142 },
	{ 0, -142 },
	{ 1020, -67 },
	{ 0, -67 },
	{ 1008, -66 },
	{ 10, -66 },
	{ 10, 51 },
	{ 1008, 51 },
	{ 0, 51 },
	{ 1019, 51 },
	{ 0, 254 },
	{ 1019, 254 }
};

NJS_TEX uv_000535A4[] = {
	{ 2040, -1785 },
	{ 1952, -1650 },
	{ 0, -1784 },
	{ 86, -1650 },
	{ 0, 254 },
	{ 86, 121 },
	{ 2040, 254 },
	{ 1952, 121 },
	{ 2040, -1785 },
	{ 1952, -1650 },
	{ 0, -1784 },
	{ 86, -1650 },
	{ 1952, -1650 },
	{ 86, -1650 },
	{ 1834, -1455 },
	{ 204, -1455 },
	{ 1651, -1275 },
	{ 386, -1275 },
	{ 1952, -1650 },
	{ 86, -1650 },
	{ 1834, -1455 },
	{ 204, -1455 },
	{ 1651, -1275 },
	{ 386, -1275 },
	{ 1952, -1650 },
	{ 86, -1650 },
	{ 1834, -1455 },
	{ 204, -1455 },
	{ 1651, -1275 },
	{ 386, -1275 },
	{ 1651, -254 },
	{ 386, -254 },
	{ 1834, -74 },
	{ 204, -74 },
	{ 1952, 121 },
	{ 86, 121 }
};

NJS_TEX uv_00053634[] = {
	{ 19, 1 },
	{ 19, 253 },
	{ 2530, 1 },
	{ 2530, 253 },
	{ 19, 1 },
	{ 19, 253 },
	{ 2530, 1 },
	{ 2530, 253 },
	{ 19, 1 },
	{ 19, 253 },
	{ 2530, 1 },
	{ 2530, 253 },
	{ 19, 1 },
	{ 19, 253 },
	{ 2530, 1 },
	{ 2530, 253 }
};

NJS_TEX uv_00053674[] = {
	{ 1008, 173 },
	{ 1008, 0 },
	{ 10, 0 },
	{ 10, 173 },
	{ 10, 0 },
	{ 1008, 0 },
	{ 1008, 0 },
	{ 10, 0 },
	{ 10, 173 },
	{ 1008, 173 },
	{ 0, 174 },
	{ 1019, 174 },
	{ 0, 254 },
	{ 1019, 254 },
	{ 10, 254 },
	{ 1008, 254 },
	{ 1008, 254 },
	{ 10, 254 },
	{ 1020, 254 },
	{ 0, 254 },
	{ 1020, 174 },
	{ 0, 174 },
	{ 1008, 173 },
	{ 10, 173 },
	{ 10, 0 },
	{ 10, 254 },
	{ 1008, 254 },
	{ 0, 254 },
	{ 1020, 254 },
	{ 0, 174 },
	{ 1020, 174 },
	{ 10, 173 },
	{ 1008, 173 },
	{ 1008, 0 },
	{ 10, 0 },
	{ 10, 254 },
	{ 1008, 254 },
	{ 0, 254 },
	{ 1020, 254 },
	{ 0, 174 },
	{ 1020, 174 },
	{ 10, 173 },
	{ 1008, 173 },
	{ 1008, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00053724[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00053220, NULL, NULL, NULL, uv_000533F4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_0005323C, NULL, NULL, NULL, uv_00053424, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 6, poly_00053280, NULL, NULL, NULL, uv_00053494, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 5, poly_00053314, NULL, NULL, NULL, uv_000535A4, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 4, poly_00053366, NULL, NULL, NULL, uv_00053634, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 6, poly_0005338E, NULL, NULL, NULL, uv_00053674, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000537B4[] = {
	{ 140.5483f, 304.3705f, 112.7446f },
	{ -207.4414f, 281.5801f, -196.0212f },
	{ -213.8017f, -195.8667f, 212.6649f },
	{ -213.8017f, -195.8667f, -212.6646f },
	{ -207.4415f, 253.3453f, 196.0216f },
	{ -207.4414f, 253.3453f, -196.0212f },
	{ 213.8017f, -195.8667f, 212.6649f },
	{ 207.4416f, 253.3453f, -196.0211f },
	{ -207.4415f, 281.5801f, 196.0216f },
	{ 213.8018f, -195.8667f, -212.6645f },
	{ 181.1377f, 281.5801f, -152.514f },
	{ 207.4416f, 281.5801f, -196.0211f },
	{ 207.4415f, 253.3453f, 196.0217f },
	{ -226.6298f, 251.872f, 225.4248f },
	{ -226.6297f, 251.872f, -225.4243f },
	{ 226.6298f, 251.872f, 225.4248f },
	{ 207.4415f, 281.5801f, 196.0217f },
	{ -140.5482f, 304.3705f, 112.7446f },
	{ 226.6298f, 251.872f, -225.4243f },
	{ -181.1376f, 281.5801f, -152.5141f },
	{ -181.1376f, 281.5801f, 152.5146f },
	{ 181.1377f, 281.5801f, 152.5146f },
	{ -140.5482f, 304.3705f, -112.7441f },
	{ 140.5483f, 304.3705f, -112.7441f },
	{ 209.5257f, 230.2959f, -208.4111f },
	{ 209.5257f, 230.2959f, 208.4117f },
	{ -209.5257f, 230.2959f, 208.4116f },
	{ -209.5256f, 230.2959f, -208.4112f },
	{ -226.6297f, 232.1981f, -225.4243f },
	{ -226.6298f, 232.1981f, 225.4248f },
	{ 226.6298f, 232.1981f, 225.4248f },
	{ 226.6298f, 232.1981f, -225.4243f },
	{ -213.8017f, 99.41134f, -212.6645f },
	{ -209.5256f, 141.4208f, -208.4112f },
	{ -209.5256f, 27.24276f, -208.4112f },
	{ -213.8017f, 99.41134f, 212.6649f },
	{ -209.5257f, 141.4208f, 208.4116f },
	{ -209.5257f, 27.24276f, 208.4116f },
	{ 213.8018f, 99.41134f, -212.6645f },
	{ 209.5257f, 27.24276f, -208.4112f },
	{ 209.5257f, 141.4208f, -208.4112f },
	{ 213.8017f, 99.41134f, 212.665f },
	{ 209.5257f, 27.24276f, 208.4117f },
	{ 209.5257f, 141.4208f, 208.4117f },
	{ -213.7803f, 141.3104f, -212.6433f },
	{ -213.7804f, 141.3104f, 212.6437f },
	{ 213.7804f, 141.3104f, -212.6432f },
	{ 213.7804f, 141.3104f, 212.6437f },
	{ 209.5257f, 99.49367f, 208.4117f },
	{ 209.5257f, 99.49367f, -208.4112f },
	{ -209.5257f, 99.49367f, 208.4116f },
	{ -209.5256f, 99.49367f, -208.4112f },
	{ -213.8017f, 71.40593f, -212.6645f },
	{ -213.8017f, 71.40593f, 212.6649f },
	{ 213.8018f, 71.40593f, -212.6645f },
	{ 213.8017f, 71.40593f, 212.665f },
	{ -209.5257f, 71.14254f, 208.4116f },
	{ -209.5256f, 71.14254f, -208.4112f },
	{ 209.5257f, 71.14254f, -208.4112f },
	{ 209.5257f, 71.14254f, 208.4117f },
	{ -213.8017f, 27.20194f, -212.6645f },
	{ -213.8017f, 27.20194f, 212.6649f },
	{ 213.8018f, 27.20194f, -212.6645f },
	{ 213.8017f, 27.20194f, 212.665f },
	{ -213.7803f, 169.5255f, -212.6433f },
	{ 209.5257f, 169.6078f, -208.4111f },
	{ 213.7804f, 169.5255f, -212.6432f },
	{ -209.5256f, 169.6078f, -208.4112f },
	{ -209.5257f, 169.6078f, 208.4116f },
	{ -213.7804f, 169.5255f, 212.6437f },
	{ 209.5257f, 169.6078f, 208.4117f },
	{ 213.7804f, 169.5255f, 212.6437f },
	{ -213.8017f, -48.68016f, 212.6649f },
	{ -213.8017f, -48.68016f, -212.6646f },
	{ 213.8017f, -48.68016f, 212.665f },
	{ 213.8018f, -48.68016f, -212.6645f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00053B44[] = {
	{ 0.193156f, 0.961047f, 0.197687f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.333733f, 0.887771f, 0.316994f },
	{ -0.333733f, 0.887771f, -0.316994f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.333733f, 0.887771f, -0.316994f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.06789999f, 0.995403f, -0.06754f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.333733f, 0.887771f, 0.316994f },
	{ -0.582104f, 0.565745f, 0.584027f },
	{ -0.582104f, 0.565745f, -0.584027f },
	{ 0.582104f, 0.565745f, 0.584027f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.193156f, 0.961047f, 0.197686f },
	{ 0.582104f, 0.565745f, -0.584026f },
	{ -0.06789999f, 0.995403f, -0.06754f },
	{ -0.06789999f, 0.995403f, 0.06754f },
	{ 0.06789999f, 0.995403f, 0.06754f },
	{ -0.193156f, 0.961047f, -0.197687f },
	{ 0.193156f, 0.961047f, -0.197687f },
	{ 0.342388f, -0.874809f, -0.342754f },
	{ 0.342388f, -0.874809f, 0.342754f },
	{ -0.342388f, -0.874809f, 0.342754f },
	{ -0.342387f, -0.874809f, -0.342754f },
	{ -0.587917f, -0.555661f, -0.587873f },
	{ -0.587918f, -0.555661f, 0.587872f },
	{ 0.587917f, -0.555661f, 0.587873f },
	{ 0.587918f, -0.555661f, -0.587873f },
	{ -0.5792069f, 0.573627f, -0.579199f },
	{ -0.291936f, -0.9108239f, -0.291846f },
	{ -0.305037f, 0.902156f, -0.305069f },
	{ -0.5792069f, 0.573627f, 0.579199f },
	{ -0.291936f, -0.9108239f, 0.291846f },
	{ -0.305037f, 0.902156f, 0.305069f },
	{ 0.5792069f, 0.573627f, -0.579199f },
	{ 0.305037f, 0.902156f, -0.305069f },
	{ 0.291936f, -0.9108239f, -0.291846f },
	{ 0.5792069f, 0.573627f, 0.579199f },
	{ 0.305037f, 0.902156f, 0.305069f },
	{ 0.291936f, -0.9108239f, 0.291846f },
	{ -0.574834f, -0.582339f, -0.574845f },
	{ -0.574834f, -0.582339f, 0.574845f },
	{ 0.574834f, -0.582339f, -0.574845f },
	{ 0.574834f, -0.582339f, 0.574845f },
	{ 0.30862f, 0.899704f, 0.308686f },
	{ 0.30862f, 0.899704f, -0.308686f },
	{ -0.30862f, 0.899703f, 0.308686f },
	{ -0.30862f, 0.899704f, -0.308686f },
	{ -0.583252f, -0.565388f, -0.583227f },
	{ -0.583252f, -0.565388f, 0.583227f },
	{ 0.583252f, -0.565388f, -0.583227f },
	{ 0.583252f, -0.565388f, 0.583227f },
	{ -0.324224f, -0.888607f, 0.324432f },
	{ -0.324224f, -0.888607f, -0.324432f },
	{ 0.324224f, -0.888607f, -0.324432f },
	{ 0.324224f, -0.888607f, 0.324432f },
	{ -0.578272f, 0.575506f, -0.578268f },
	{ -0.578272f, 0.575506f, 0.578268f },
	{ 0.578272f, 0.575506f, -0.578268f },
	{ 0.578272f, 0.575506f, 0.578268f },
	{ -0.5792159f, 0.573609f, -0.579208f },
	{ 0.308655f, 0.8996789f, -0.308722f },
	{ 0.5792159f, 0.573609f, -0.579208f },
	{ -0.308655f, 0.8996789f, -0.308722f },
	{ -0.308655f, 0.8996789f, 0.308722f },
	{ -0.5792159f, 0.573609f, 0.579208f },
	{ 0.308655f, 0.8996789f, 0.308722f },
	{ 0.5792159f, 0.573609f, 0.579208f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00053ED4 = { vertex_000537B4, normal_00053B44, LengthOfArray<Sint32>(vertex_000537B4), meshlist_00053724, matlist_000531A8, LengthOfArray<Uint16>(meshlist_00053724), LengthOfArray<Uint16>(matlist_000531A8), { 0.000031f, 54.2519f, 0.000244f }, 383.5597f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00053EFC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00053ED4, 613, -97.35397f, -1446, 0x3F7, 0xFFFFFFDC, 0xFFFFF692, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00053F30[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 116, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 116, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 114, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 115, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 115, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 92, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 85, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 114, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 46, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 91, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 78, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0005400C[] = {
	4, 4, 5, 3, 2,
	4, 9, 6, 2, 3,
	4, 12, 13, 9, 6
};

extern "C" __declspec(dllexport) Sint16 poly_0005402A[] = {
	4, 4, 78, 5, 83,
	0x8000u | 8, 96, 103, 95, 93, 114, 118, 112, 116,
	0x8000u | 12, 112, 116, 115, 119, 113, 117, 72, 79, 84, 82, 13, 12,
	0x8000u | 12, 124, 120, 127, 123, 125, 121, 97, 98, 94, 88, 96, 103,
	0x8000u | 8, 120, 124, 122, 126, 80, 75, 83, 78
};

extern "C" __declspec(dllexport) Sint16 poly_0005408C[] = {
	4, 18, 29, 17, 28,
	4, 17, 28, 19, 31,
	4, 19, 31, 22, 30
};

extern "C" __declspec(dllexport) Sint16 poly_000540AA[] = {
	4, 6, 31, 3, 28,
	4, 13, 30, 6, 31,
	4, 3, 28, 4, 29
};

extern "C" __declspec(dllexport) Sint16 poly_000540C8[] = {
	4, 29, 87, 4, 78,
	4, 75, 78, 77, 87,
	4, 77, 130, 75, 126,
	4, 95, 96, 99, 101,
	4, 99, 110, 95, 114,
	0x8000u | 12, 108, 112, 111, 115, 109, 113, 76, 72, 85, 84, 30, 13,
	4, 112, 114, 108, 110,
	0x8000u | 12, 128, 124, 131, 127, 129, 125, 100, 97, 102, 94, 101, 96,
	4, 130, 128, 126, 124
};

extern "C" __declspec(dllexport) Sint16 poly_00054142[] = {
	12, 86, 73, 22, 10, 19, 16, 17, 7, 18, 8, 81, 74,
	0x8000u | 10, 23, 15, 14, 20, 25, 11, 24, 1, 23, 15,
	4, 26, 21, 27, 0,
	4, 105, 107, 106, 104,
	0x8000u | 6, 91, 89, 90, 106, 133, 105,
	3, 91, 92, 90,
	0x8000u | 5, 135, 133, 134, 105, 73,
	3, 135, 132, 134,
	0x8000u | 5, 134, 73, 74, 10, 8
};

extern "C" __declspec(dllexport) Sint16 poly_000541BC[] = {
	4, 1, 8, 11, 7,
	4, 20, 16, 15, 10,
	4, 11, 7, 20, 16,
	4, 15, 10, 1, 8,
	4, 24, 21, 23, 26,
	4, 25, 0, 24, 21,
	4, 14, 27, 25, 0,
	4, 23, 26, 14, 27
};

extern "C" __declspec(dllexport) Sint16 poly_0005420C[] = {
	4, 18, 81, 29, 87,
	0x8000u | 8, 91, 101, 89, 99, 106, 110, 104, 108,
	0x8000u | 12, 104, 108, 107, 111, 105, 109, 73, 76, 86, 85, 22, 30,
	0x8000u | 12, 132, 128, 135, 131, 133, 129, 90, 100, 92, 102, 91, 101,
	0x8000u | 8, 128, 132, 130, 134, 77, 74, 87, 81
};

extern "C" __declspec(dllexport) Sint16 poly_0005426E[] = {
	4, 63, 59, 61, 57,
	0x8000u | 8, 61, 63, 60, 62, 56, 58, 57, 59,
	4, 35, 34, 33, 32,
	4, 39, 35, 37, 33,
	4, 38, 39, 36, 37,
	4, 34, 38, 32, 36,
	4, 43, 42, 41, 40,
	4, 47, 43, 45, 41,
	4, 46, 47, 44, 45,
	4, 42, 46, 40, 44,
	4, 51, 50, 49, 48,
	4, 55, 51, 53, 49,
	4, 54, 55, 52, 53,
	4, 50, 54, 48, 52
};

extern "C" __declspec(dllexport) Sint16 poly_00054302[] = {
	4, 39, 38, 35, 34,
	4, 47, 46, 43, 42,
	4, 55, 54, 51, 50
};

extern "C" __declspec(dllexport) Sint16 poly_00054320[] = {
	8, 68, 69, 64, 66, 65, 67, 71, 70,
	4, 64, 65, 68, 71,
	4, 67, 66, 70, 69,
	0x8000u | 10, 63, 70, 62, 71, 58, 68, 59, 69, 63, 70
};

NJS_TEX uv_0005435C[] = {
	{ 0 },
	{ 0, 255 },
	{ 764, 0 },
	{ 764, 255 },
	{ 0, 255 },
	{ 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 0, 255 },
	{ 0 },
	{ 765, 255 },
	{ 765, 0 }
};

NJS_TEX uv_0005438C[] = {
	{ 217, 1 },
	{ 253, 1 },
	{ 217, 253 },
	{ 253, 253 },
	{ 37, 1 },
	{ 37, 253 },
	{ 45, 1 },
	{ 45, 253 },
	{ 209, 1 },
	{ 209, 253 },
	{ 217, 1 },
	{ 217, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 37, 1 },
	{ 37, 253 },
	{ 45, 1 },
	{ 45, 253 },
	{ 209, 1 },
	{ 209, 253 },
	{ 217, 1 },
	{ 217, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 37, 1 },
	{ 37, 253 },
	{ 45, 1 },
	{ 45, 253 },
	{ 209, 1 },
	{ 209, 253 },
	{ 217, 1 },
	{ 217, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 217, 253 },
	{ 217, 1 },
	{ 209, 253 },
	{ 209, 1 },
	{ 45, 253 },
	{ 45, 1 },
	{ 37, 253 },
	{ 37, 1 }
};

NJS_TEX uv_0005443C[] = {
	{ 0 },
	{ 0, 255 },
	{ 764, 0 },
	{ 764, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 0 },
	{ 0, 255 }
};

NJS_TEX uv_0005446C[] = {
	{ 0, 255 },
	{ 0, -255 },
	{ 1020, 255 },
	{ 1020, -255 },
	{ 3, 255 },
	{ 3, -255 },
	{ 765, 255 },
	{ 765, -255 },
	{ 765, 255 },
	{ 765, -255 },
	{ 3, 255 },
	{ 3, -255 }
};

NJS_TEX uv_0005449C[] = {
	{ 216, -253 },
	{ 254, -253 },
	{ 216, 253 },
	{ 254, 253 },
	{ 44, 253 },
	{ 40, 253 },
	{ 44, -253 },
	{ 40, -253 },
	{ 213, -253 },
	{ 44, -253 },
	{ 213, 252 },
	{ 44, 253 },
	{ 44, 253 },
	{ 40, 253 },
	{ 44, -253 },
	{ 40, -253 },
	{ 213, -253 },
	{ 44, -253 },
	{ 213, 252 },
	{ 44, 253 },
	{ 0, -253 },
	{ 0, 253 },
	{ 40, -253 },
	{ 40, 253 },
	{ 44, -253 },
	{ 44, 253 },
	{ 213, -253 },
	{ 213, 252 },
	{ 216, -253 },
	{ 216, 253 },
	{ 254, -253 },
	{ 254, 253 },
	{ 216, 253 },
	{ 213, 252 },
	{ 216, -253 },
	{ 213, -253 },
	{ 0, -253 },
	{ 0, 253 },
	{ 40, -253 },
	{ 40, 253 },
	{ 44, -253 },
	{ 44, 253 },
	{ 213, -253 },
	{ 213, 252 },
	{ 216, -253 },
	{ 216, 253 },
	{ 254, -253 },
	{ 254, 253 },
	{ 213, -253 },
	{ 216, -253 },
	{ 213, 252 },
	{ 216, 253 }
};

NJS_TEX uv_0005456C[] = {
	{ 929, 250 },
	{ 924, 204 },
	{ 1020, 250 },
	{ 976, 184 },
	{ 1019, -765 },
	{ 976, -697 },
	{ 0, -764 },
	{ 43, -697 },
	{ 0, 250 },
	{ 43, 184 },
	{ 89, 250 },
	{ 94, 204 },
	{ 102, 86 },
	{ 976, 184 },
	{ 916, 86 },
	{ 976, -697 },
	{ 916, -600 },
	{ 43, -697 },
	{ 102, -600 },
	{ 43, 184 },
	{ 102, 86 },
	{ 976, 184 },
	{ 114, 60 },
	{ 114, -573 },
	{ 904, 60 },
	{ 904, -573 },
	{ 776, 204 },
	{ 768, 253 },
	{ 700, 204 },
	{ 705, 253 },
	{ 544, 254 },
	{ 549, 204 },
	{ 470, 204 },
	{ 700, 204 },
	{ 318, 204 },
	{ 776, 204 },
	{ 544, 254 },
	{ 474, 254 },
	{ 470, 204 },
	{ 308, 253 },
	{ 318, 204 },
	{ 243, 204 },
	{ 776, 204 },
	{ 924, 204 },
	{ 308, 253 },
	{ 251, 253 },
	{ 243, 204 },
	{ 243, 204 },
	{ 924, 204 },
	{ 94, 204 },
	{ 976, 184 },
	{ 43, 184 }
};

NJS_TEX uv_0005463C[] = {
	{ 4, 0 },
	{ 4, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 4, 0 },
	{ 4, 255 },
	{ 0 },
	{ 0, 255 },
	{ 2040, 0 },
	{ 2040, 255 },
	{ 2040, 0 },
	{ 2040, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1020, 254 },
	{ 981, 0 },
	{ 5, 254 },
	{ 44, 0 },
	{ 2039, 254 },
	{ 2008, 0 },
	{ 0, 254 },
	{ 30, 0 },
	{ 5, 254 },
	{ 44, 0 },
	{ 1020, 254 },
	{ 981, 0 },
	{ 0, 254 },
	{ 30, 0 },
	{ 2039, 254 },
	{ 2008, 0 }
};

NJS_TEX uv_000546BC[] = {
	{ 217, 1 },
	{ 253, 1 },
	{ 217, 253 },
	{ 253, 253 },
	{ 41, 2 },
	{ 42, 253 },
	{ 45, 2 },
	{ 47, 253 },
	{ 211, 1 },
	{ 211, 253 },
	{ 217, 1 },
	{ 217, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 41, 2 },
	{ 42, 253 },
	{ 45, 2 },
	{ 47, 253 },
	{ 211, 1 },
	{ 211, 253 },
	{ 217, 1 },
	{ 217, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 41, 2 },
	{ 42, 253 },
	{ 45, 2 },
	{ 47, 253 },
	{ 211, 1 },
	{ 211, 253 },
	{ 217, 1 },
	{ 217, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 217, 253 },
	{ 217, 1 },
	{ 211, 253 },
	{ 211, 1 },
	{ 47, 253 },
	{ 45, 2 },
	{ 42, 253 },
	{ 41, 2 }
};

NJS_TEX uv_0005476C[] = {
	{ 1019, 0 },
	{ 0 },
	{ 1019, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0 },
	{ 1019, 255 },
	{ 1019, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1019, 255 },
	{ 1019, 0 },
	{ 1019, 0 },
	{ 0 },
	{ 1019, 255 },
	{ 0, 255 },
	{ 1019, 0 },
	{ 0 },
	{ 1019, 255 },
	{ 0, 255 },
	{ 1019, 0 },
	{ 0 },
	{ 1019, 255 },
	{ 0, 255 },
	{ 1019, 0 },
	{ 0 },
	{ 1019, 255 },
	{ 0, 255 },
	{ 1019, 0 },
	{ 0 },
	{ 1019, 255 },
	{ 0, 255 },
	{ 1019, 0 },
	{ 0 },
	{ 1019, 255 },
	{ 0, 255 },
	{ 1019, 0 },
	{ 0 },
	{ 1019, 255 },
	{ 0, 255 },
	{ 1019, 0 },
	{ 0 },
	{ 1019, 255 },
	{ 0, 255 },
	{ 1019, 0 },
	{ 0 },
	{ 1019, 255 },
	{ 0, 255 },
	{ 1019, 0 },
	{ 0 },
	{ 1019, 255 },
	{ 0, 255 },
	{ 1019, 0 },
	{ 0 },
	{ 1019, 255 },
	{ 0, 255 },
	{ 1019, 0 },
	{ 0 },
	{ 1019, 255 },
	{ 0, 255 }
};

NJS_TEX uv_0005485C[] = {
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 }
};

NJS_TEX uv_0005488C[] = {
	{ 17, 8 },
	{ 492, 8 },
	{ 486, 10 },
	{ 486, 241 },
	{ 22, 10 },
	{ 22, 241 },
	{ 17, 244 },
	{ 492, 244 },
	{ 486, 10 },
	{ 22, 10 },
	{ 17, 8 },
	{ 17, 244 },
	{ 22, 241 },
	{ 486, 241 },
	{ 492, 244 },
	{ 492, 8 },
	{ 508, 0 },
	{ 492, 244 },
	{ 508, 253 },
	{ 17, 244 },
	{ 0, 253 },
	{ 17, 8 },
	{ 0 },
	{ 492, 8 },
	{ 508, 0 },
	{ 492, 244 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000548F4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0005400C, NULL, NULL, NULL, uv_0005435C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 5, poly_0005402A, NULL, NULL, NULL, uv_0005438C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_0005408C, NULL, NULL, NULL, uv_0005443C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 3, poly_000540AA, NULL, NULL, NULL, uv_0005446C, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 9, poly_000540C8, NULL, NULL, NULL, uv_0005449C, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 9, poly_00054142, NULL, NULL, NULL, uv_0005456C, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 8, poly_000541BC, NULL, NULL, NULL, uv_0005463C, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 5, poly_0005420C, NULL, NULL, NULL, uv_000546BC, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 14, poly_0005426E, NULL, NULL, NULL, uv_0005476C, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 3, poly_00054302, NULL, NULL, NULL, uv_0005485C, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 4, poly_00054320, NULL, NULL, NULL, uv_0005488C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000549FC[] = {
	{ -173.5711f, 695.5337f, -87.3816f },
	{ 204.9452f, 671.8459f, 121.5396f },
	{ 223.9025f, -203.5782f, -139.7708f },
	{ 223.9025f, 0.363036f, -139.7708f },
	{ 223.9026f, 0.363036f, 139.7706f },
	{ 223.9026f, -203.5782f, 139.7706f },
	{ -223.9026f, 0.363035f, -139.7708f },
	{ 204.9452f, 642.4994f, -121.5399f },
	{ 204.9452f, 642.4994f, 121.5396f },
	{ -223.9026f, -203.5782f, -139.7708f },
	{ -204.9453f, 642.4994f, 121.5397f },
	{ 204.9452f, 671.8459f, -121.5399f },
	{ -223.9026f, -203.5782f, 139.7706f },
	{ -223.9026f, 0.363035f, 139.7706f },
	{ -178.958f, 671.8459f, 94.56383f },
	{ -204.9453f, 671.8459f, 121.5397f },
	{ -204.9453f, 642.4994f, -121.5398f },
	{ 223.9025f, 640.9682f, -139.7708f },
	{ 223.9026f, 640.9682f, 139.7706f },
	{ -223.9026f, 640.9682f, -139.7708f },
	{ -204.9453f, 671.8459f, -121.5398f },
	{ 173.5711f, 695.5337f, -87.38165f },
	{ -223.9026f, 640.9682f, 139.7706f },
	{ 178.9579f, 671.8459f, 94.56377f },
	{ 178.9578f, 671.8459f, -94.56403f },
	{ -178.958f, 671.8459f, -94.56396f },
	{ 173.5712f, 695.5337f, 87.38141f },
	{ -173.571f, 695.5337f, 87.38145f },
	{ 223.9025f, 422.6656f, -139.7708f },
	{ 223.9026f, 422.6656f, 139.7706f },
	{ -223.9026f, 422.6656f, 139.7706f },
	{ -223.9026f, 422.6656f, -139.7708f },
	{ 82.3784f, 730.7233f, -3.953424f },
	{ 82.37839f, 730.7233f, -46.45733f },
	{ 82.3784f, 764.1528f, -3.953424f },
	{ 82.37839f, 764.1528f, -46.45733f },
	{ 36.90403f, 730.7233f, -3.953417f },
	{ 36.90402f, 730.7233f, -46.45732f },
	{ 36.90403f, 764.1528f, -3.953417f },
	{ 36.90402f, 764.1528f, -46.45732f },
	{ -31.62013f, 730.7233f, -3.953407f },
	{ -31.62014f, 730.7233f, -46.45731f },
	{ -31.62013f, 764.1528f, -3.953407f },
	{ -31.62014f, 764.1528f, -46.45731f },
	{ -77.09425f, 730.7233f, -3.9534f },
	{ -77.09425f, 730.7233f, -46.45731f },
	{ -77.09425f, 764.1528f, -3.9534f },
	{ -77.09425f, 764.1528f, -46.45731f },
	{ 25.40428f, 730.7233f, -3.953415f },
	{ 25.40427f, 730.7233f, -46.45732f },
	{ 25.40428f, 764.1528f, -3.953415f },
	{ 25.40427f, 764.1528f, -46.45732f },
	{ -20.07009f, 730.7233f, -3.953409f },
	{ -20.07009f, 730.7233f, -46.45731f },
	{ -20.07009f, 764.1528f, -3.953409f },
	{ -20.07009f, 764.1528f, -46.45731f },
	{ 113.472f, 694.4788f, 54.9118f },
	{ 113.472f, 694.4788f, -65.36687f },
	{ 113.472f, 743.2737f, 54.9118f },
	{ 113.472f, 743.2737f, -65.36687f },
	{ -108.1377f, 694.4788f, 54.91171f },
	{ -108.1377f, 694.4788f, -65.36696f },
	{ -108.1377f, 743.2737f, 54.91171f },
	{ -108.1377f, 743.2737f, -65.36696f },
	{ -98.32033f, 730.8906f, -60.0386f },
	{ 103.6545f, 730.8906f, -60.03851f },
	{ -98.32031f, 730.8906f, 49.58334f },
	{ 103.6545f, 730.8906f, 49.58344f },
	{ 105.7155f, 743.2737f, -61.15716f },
	{ -100.3814f, 743.2737f, -61.15713f },
	{ -100.3813f, 743.2737f, 50.702f },
	{ 105.7156f, 743.2737f, 50.70197f },
	{ -182.2567f, 0.363035f, 127.2018f },
	{ -182.2567f, 640.9682f, 127.2018f },
	{ 182.2567f, 640.9682f, 127.2017f },
	{ 182.2567f, 0.363036f, 127.2017f },
	{ -182.2567f, 422.6656f, 127.2018f },
	{ 182.2567f, 422.6656f, 127.2017f },
	{ 184.7196f, 0.363036f, 139.7706f },
	{ -182.2567f, -203.5782f, 127.2018f },
	{ 182.2567f, -203.5782f, 127.2017f },
	{ 184.7196f, 640.9682f, 139.7706f },
	{ -184.7196f, -203.5782f, 139.7706f },
	{ 184.7196f, -203.5782f, 139.7706f },
	{ -184.7196f, 0.363035f, 139.7706f },
	{ -184.7196f, 422.6656f, 139.7706f },
	{ -184.7196f, 640.9682f, 139.7706f },
	{ 184.7196f, 422.6656f, 139.7706f },
	{ 14.96093f, -203.5782f, 141.0275f },
	{ -17.35468f, 640.9682f, 127.2018f },
	{ 17.35469f, 640.9682f, 127.2018f },
	{ -14.96092f, 640.9682f, 141.0275f },
	{ 14.96093f, 640.9682f, 141.0275f },
	{ -17.35469f, -203.5782f, 127.2018f },
	{ 14.96093f, 0.363036f, 141.0275f },
	{ -17.35469f, 0.363035f, 127.2018f },
	{ -14.96092f, 0.363036f, 141.0275f },
	{ 17.35469f, 0.363036f, 127.2018f },
	{ 17.35468f, -203.5782f, 127.2018f },
	{ -17.35469f, 422.6656f, 127.2018f },
	{ 17.35469f, 422.6656f, 127.2018f },
	{ -14.96092f, 422.6656f, 141.0275f },
	{ 14.96093f, 422.6656f, 141.0275f },
	{ -14.96092f, -203.5782f, 141.0275f },
	{ -85.71597f, 640.9682f, 140.6926f },
	{ -116.8187f, 640.9682f, 127.2018f },
	{ -83.68847f, 640.9682f, 127.2018f },
	{ -113.5648f, 640.9682f, 140.6926f },
	{ -85.71597f, 422.6656f, 140.6926f },
	{ -116.8187f, 422.6656f, 127.2018f },
	{ -83.68847f, 422.6656f, 127.2018f },
	{ -113.5648f, 422.6656f, 140.6926f },
	{ -85.71598f, 0.363035f, 140.6926f },
	{ -116.8187f, 0.363035f, 127.2018f },
	{ -83.68848f, 0.363035f, 127.2018f },
	{ -113.5648f, 0.363035f, 140.6926f },
	{ -85.71598f, -203.5782f, 140.6926f },
	{ -116.8187f, -203.5782f, 127.2018f },
	{ -83.68848f, -203.5782f, 127.2018f },
	{ -113.5648f, -203.5782f, 140.6926f },
	{ 113.5344f, -203.5782f, 140.6926f },
	{ 83.68848f, -203.5782f, 127.2018f },
	{ 116.7883f, -203.5782f, 127.2018f },
	{ 88.16885f, -203.5782f, 140.6926f },
	{ 113.5344f, 0.363036f, 140.6926f },
	{ 83.68848f, 0.363036f, 127.2018f },
	{ 116.7883f, 0.363036f, 127.2018f },
	{ 88.16885f, 0.363036f, 140.6926f },
	{ 113.5344f, 422.6656f, 140.6926f },
	{ 83.68848f, 422.6656f, 127.2018f },
	{ 116.7883f, 422.6656f, 127.2018f },
	{ 88.16886f, 422.6656f, 140.6926f },
	{ 113.5344f, 640.9682f, 140.6926f },
	{ 83.68848f, 640.9682f, 127.2018f },
	{ 116.7883f, 640.9682f, 127.2018f },
	{ 87.95618f, 640.9682f, 140.6926f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0005505C[] = {
	{ -0.51342f, 0.708599f, -0.484032f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.330908f, 0.8829859f, -0.33292f },
	{ 0.331454f, 0.884491f, 0.32835f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.331454f, 0.884491f, 0.32835f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.220151f, 0.9483539f, 0.22838f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.330908f, 0.8829859f, -0.33292f },
	{ 0.5852979f, 0.561373f, -0.585052f },
	{ 0.5882919f, 0.564872f, 0.578647f },
	{ -0.585299f, 0.561373f, -0.585052f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.513424f, 0.7085969f, -0.484032f },
	{ -0.5882919f, 0.564872f, 0.578647f },
	{ 0.220152f, 0.9483539f, 0.228382f },
	{ 0.220152f, 0.9483539f, -0.228382f },
	{ -0.220152f, 0.9483539f, -0.22838f },
	{ 0.513424f, 0.7085969f, 0.484032f },
	{ -0.51342f, 0.708599f, 0.484032f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.526637f, 0.643161f, 0.5558749f },
	{ -0.52664f, 0.64316f, 0.555874f },
	{ 0.52664f, 0.64316f, -0.555874f },
	{ -0.526637f, 0.643161f, -0.5558749f },
	{ -0.267209f, 0.928995f, 0.256061f },
	{ 0.26721f, 0.928995f, 0.25606f },
	{ 0.267209f, 0.928995f, -0.256061f },
	{ -0.26721f, 0.928995f, -0.25606f },
	{ 0.635492f, 0, 0.7721069f },
	{ 0.285564f, 0.816632f, 0.501564f },
	{ -0.285564f, 0.816632f, 0.501564f },
	{ -0.635492f, 0, 0.7721069f },
	{ 0.635492f, 0, 0.7721069f },
	{ -0.635492f, 0, 0.7721069f },
	{ -0.635492f, 0, 0.7721069f },
	{ 0.635492f, 0, 0.7721069f },
	{ -0.635492f, 0, 0.7721069f },
	{ -0.504802f, 0.577059f, 0.64201f },
	{ 0.635492f, 0, 0.7721069f },
	{ -0.635492f, 0, 0.7721069f },
	{ 0.635492f, 0, 0.7721069f },
	{ 0.635492f, 0, 0.7721069f },
	{ 0.504802f, 0.577059f, 0.64201f },
	{ -0.635492f, 0, 0.7721069f },
	{ 0.643972f, 0, 0.765049f },
	{ -0.28688f, 0.821476f, 0.492825f },
	{ 0.28688f, 0.821476f, 0.492825f },
	{ -0.521395f, 0.5869049f, 0.619426f },
	{ 0.521396f, 0.5869049f, 0.619426f },
	{ -0.643972f, 0, 0.765049f },
	{ 0.643972f, 0, 0.765049f },
	{ -0.643972f, 0, 0.765049f },
	{ -0.643972f, 0, 0.765049f },
	{ 0.643972f, 0, 0.765049f },
	{ 0.643972f, 0, 0.765049f },
	{ -0.643972f, 0, 0.765049f },
	{ 0.643972f, 0, 0.765049f },
	{ -0.643972f, 0, 0.765049f },
	{ 0.643972f, 0, 0.765049f },
	{ -0.643972f, 0, 0.765049f },
	{ 0.528875f, 0.585603f, 0.614297f },
	{ -0.283491f, 0.810698f, 0.512251f },
	{ 0.287753f, 0.825139f, 0.486152f },
	{ -0.499149f, 0.5908279f, 0.633856f },
	{ 0.65245f, 0, 0.757832f },
	{ -0.618679f, 0, 0.785644f },
	{ 0.65245f, 0, 0.757832f },
	{ -0.618679f, 0, 0.785644f },
	{ 0.65245f, 0, 0.757832f },
	{ -0.618679f, 0, 0.785644f },
	{ 0.65245f, 0, 0.757832f },
	{ -0.618679f, 0, 0.785644f },
	{ 0.65245f, 0, 0.757832f },
	{ -0.618679f, 0, 0.785644f },
	{ 0.65245f, 0, 0.757832f },
	{ -0.618679f, 0, 0.785644f },
	{ 0.618679f, 0, 0.785644f },
	{ -0.585158f, 0, 0.810919f },
	{ 0.618679f, 0, 0.785644f },
	{ -0.5851589f, 0, 0.810919f },
	{ 0.618679f, 0, 0.785644f },
	{ -0.585158f, 0, 0.810919f },
	{ 0.618679f, 0, 0.785644f },
	{ -0.5851589f, 0, 0.810919f },
	{ 0.618679f, 0, 0.785644f },
	{ -0.586598f, 0, 0.809878f },
	{ 0.618679f, 0, 0.785644f },
	{ -0.5864789f, 0, 0.809965f },
	{ 0.499149f, 0.5908279f, 0.633856f },
	{ -0.277636f, 0.798425f, 0.5342619f },
	{ 0.283491f, 0.810698f, 0.512252f },
	{ -0.473129f, 0.594276f, 0.650373f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000556BC = { vertex_000549FC, normal_0005505C, LengthOfArray<Sint32>(vertex_000549FC), meshlist_000548F4, matlist_00053F30, LengthOfArray<Uint16>(meshlist_000548F4), LengthOfArray<Uint16>(matlist_00053F30), { -0.00015f, 280.2874f, 0.628319f }, 547.9966f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000556E4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000556BC, -552.4329f, -30.86f, -961.765f, 0xFFFFD732, 0x3F08, 0xFFFFD117, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00055718[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 104, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 103, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 113, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 118, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 101, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 84, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 118, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000557A4[] = {
	6, 2, 3, 5, 4, 12, 13,
	3, 9, 12, 13,
	0x8000u | 37, 2, 3, 73, 52, 69, 48, 71, 50, 68, 47, 72, 51, 70, 49, 74, 53, 55, 59, 56, 60, 57, 75, 77, 78, 82, 81, 62, 64, 83, 84, 86, 87, 65, 63, 9, 6, 13
};

extern "C" __declspec(dllexport) Sint16 poly_00055806[] = {
	6, 3, 17, 4, 18, 13, 22,
	3, 63, 6, 67,
	0x8000u | 5, 67, 19, 6, 22, 13,
	0x8000u | 6, 41, 48, 45, 52, 17, 3,
	4, 48, 50, 41, 43,
	0x8000u | 8, 50, 43, 47, 40, 51, 44, 49, 42,
	4, 49, 53, 42, 46,
	0x8000u | 6, 53, 46, 59, 76, 60, 58,
	0x8000u | 8, 60, 58, 75, 54, 78, 79, 81, 80,
	4, 81, 64, 80, 61,
	0x8000u | 6, 64, 61, 84, 85, 87, 66,
	4, 87, 63, 66, 67
};

extern "C" __declspec(dllexport) Sint16 poly_0005589E[] = {
	0x8000u | 10, 20, 14, 15, 23, 1, 24, 11, 25, 20, 14,
	4, 23, 24, 21, 0,
	4, 25, 14, 27, 26,
	8, 14, 23, 26, 21, 27, 0, 25, 24,
	4, 43, 40, 42, 44,
	0x8000u | 6, 61, 80, 85, 79, 16, 88,
	3, 66, 67, 19,
	9, 41, 43, 7, 42, 88, 46, 54, 76, 58,
	12, 85, 66, 16, 19, 10, 22, 8, 18, 7, 17, 41, 45,
	3, 88, 54, 79
};

extern "C" __declspec(dllexport) Sint16 poly_00055930[] = {
	6, 7, 11, 8, 1, 10, 15,
	4, 20, 16, 15, 10,
	0x8000u | 5, 7, 11, 88, 20, 16
};

extern "C" __declspec(dllexport) Sint16 poly_00055954[] = {
	4, 30, 36, 31, 37,
	4, 31, 37, 35, 38,
	4, 35, 38, 34, 39,
	4, 34, 39, 30, 36
};

extern "C" __declspec(dllexport) Sint16 poly_0005597C[] = {
	4, 35, 34, 31, 30,
	4, 29, 37, 28, 36,
	4, 32, 39, 33, 38
};

extern "C" __declspec(dllexport) Sint16 poly_0005599A[] = {
	4, 33, 38, 29, 37,
	4, 28, 36, 32, 39
};

NJS_TEX uv_000559B0[] = {
	{ 510, 255 },
	{ 510, 0 },
	{ 0, 255 },
	{ 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 61, 255 },
	{ 61, 0 },
	{ 64, 255 },
	{ 64, 0 },
	{ 110, 255 },
	{ 110, 0 },
	{ 115, 255 },
	{ 115, 0 },
	{ 172, 255 },
	{ 172, 0 },
	{ 174, 255 },
	{ 174, 0 },
	{ 221, 255 },
	{ 221, 0 },
	{ 225, 255 },
	{ 225, 0 },
	{ 282, 255 },
	{ 282, 0 },
	{ 286, 255 },
	{ 286, 0 },
	{ 336, 255 },
	{ 336, 0 },
	{ 340, 255 },
	{ 340, 0 },
	{ 388, 255 },
	{ 388, 0 },
	{ 394, 255 },
	{ 394, 0 },
	{ 446, 255 },
	{ 446, 0 },
	{ 448, 255 },
	{ 448, 0 },
	{ 508, 255 },
	{ 508, 0 },
	{ 0 }
};

NJS_TEX uv_00055A68[] = {
	{ 510, 255 },
	{ 510, -254 },
	{ 0, 255 },
	{ 0, -254 },
	{ 510, 255 },
	{ 510, -254 },
	{ 448, 255 },
	{ 508, 255 },
	{ 448, -254 },
	{ 448, -254 },
	{ 508, -254 },
	{ 508, 255 },
	{ 0, -254 },
	{ 0, 255 },
	{ 38, -253 },
	{ 38, 254 },
	{ 61, -254 },
	{ 61, 255 },
	{ 0, -254 },
	{ 0, 255 },
	{ 64, 255 },
	{ 110, 255 },
	{ 64, -254 },
	{ 110, -254 },
	{ 137, 254 },
	{ 137, -253 },
	{ 115, 255 },
	{ 115, -254 },
	{ 172, 255 },
	{ 172, -254 },
	{ 149, 253 },
	{ 148, -254 },
	{ 174, 255 },
	{ 221, 255 },
	{ 174, -254 },
	{ 221, -254 },
	{ 252, 254 },
	{ 255, -254 },
	{ 225, 255 },
	{ 225, -254 },
	{ 282, 255 },
	{ 282, -254 },
	{ 260, 255 },
	{ 262, -254 },
	{ 286, 255 },
	{ 286, -254 },
	{ 336, 255 },
	{ 336, -254 },
	{ 360, 254 },
	{ 362, -254 },
	{ 340, 255 },
	{ 388, 255 },
	{ 340, -254 },
	{ 388, -254 },
	{ 370, 254 },
	{ 368, -254 },
	{ 394, 255 },
	{ 394, -254 },
	{ 446, 255 },
	{ 446, -254 },
	{ 454, 255 },
	{ 478, 254 },
	{ 454, -254 },
	{ 478, -254 }
};

NJS_TEX uv_00055B68[] = {
	{ 1402, -634 },
	{ 1376, 90 },
	{ 1402, 126 },
	{ 153, 90 },
	{ 127, 126 },
	{ 153, -597 },
	{ 127, -634 },
	{ 1376, -597 },
	{ 1402, -634 },
	{ 1376, 90 },
	{ 153, 90 },
	{ 153, -597 },
	{ 306, -492 },
	{ 1222, -492 },
	{ 1376, -597 },
	{ 1376, 90 },
	{ 1222, -16 },
	{ 306, -16 },
	{ 1376, 90 },
	{ 153, 90 },
	{ 306, -16 },
	{ 306, -492 },
	{ 1222, -16 },
	{ 1222, -492 },
	{ 1376, -597 },
	{ 153, -597 },
	{ 330, -706 },
	{ 344, -762 },
	{ 524, -706 },
	{ 516, -762 },
	{ 1169, -762 },
	{ 1024, -762 },
	{ 1185, -712 },
	{ 1012, -712 },
	{ 1402, -634 },
	{ 764, -634 },
	{ 1339, -712 },
	{ 1347, -762 },
	{ 1529, -762 },
	{ 192, -706 },
	{ 330, -706 },
	{ 127, -634 },
	{ 524, -706 },
	{ 764, -634 },
	{ 664, -706 },
	{ 860, -712 },
	{ 677, -761 },
	{ 845, -765 },
	{ 1185, -712 },
	{ 1339, -712 },
	{ 1402, -634 },
	{ 1529, -762 },
	{ 1402, 126 },
	{ 1530, 254 },
	{ 127, 126 },
	{ 0, 254 },
	{ 127, -634 },
	{ 0, -762 },
	{ 192, -706 },
	{ 184, -762 },
	{ 764, -634 },
	{ 860, -712 },
	{ 1012, -712 }
};

NJS_TEX uv_00055C64[] = {
	{ 1019, 255 },
	{ 1019, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1530, 255 },
	{ 1530, 0 },
	{ 1019, 0 },
	{ 1019, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0 },
	{ 764, 255 },
	{ 1530, 0 },
	{ 1530, 255 }
};

NJS_TEX uv_00055CA0[] = {
	{ 0 },
	{ 10, 254 },
	{ 254, 0 },
	{ 244, 254 },
	{ 0 },
	{ 10, 254 },
	{ 254, 0 },
	{ 244, 254 },
	{ 0 },
	{ 10, 254 },
	{ 254, 0 },
	{ 244, 254 },
	{ 0 },
	{ 10, 254 },
	{ 254, 0 },
	{ 244, 254 }
};

NJS_TEX uv_00055CE0[] = {
	{ 254, 0 },
	{ 254, 255 },
	{ 0 },
	{ 0, 255 },
	{ 254, 255 },
	{ 254, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 254, 255 },
	{ 254, 0 }
};

NJS_TEX uv_00055D10[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00055D30[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000557A4, NULL, NULL, NULL, uv_000559B0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 12, poly_00055806, NULL, NULL, NULL, uv_00055A68, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 10, poly_0005589E, NULL, NULL, NULL, uv_00055B68, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 3, poly_00055930, NULL, NULL, NULL, uv_00055C64, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 4, poly_00055954, NULL, NULL, NULL, uv_00055CA0, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 3, poly_0005597C, NULL, NULL, NULL, uv_00055CE0, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, poly_0005599A, NULL, NULL, NULL, uv_00055D10, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00055DD8[] = {
	{ 134.2185f, 533.6972f, 65.24898f },
	{ -186.5f, 510.0096f, -104.5243f },
	{ -223.9025f, -203.5781f, 139.7706f },
	{ -223.9025f, 0.363122f, 139.7706f },
	{ -223.9025f, 0.363122f, -139.7708f },
	{ -223.9025f, -203.5781f, -139.7708f },
	{ 223.9028f, 0.363121f, 139.7706f },
	{ -186.5f, 460.379f, 104.5241f },
	{ -186.5f, 460.379f, -104.5243f },
	{ 223.9028f, -203.5781f, 139.7706f },
	{ 186.5003f, 460.379f, -104.5243f },
	{ -186.5f, 510.0096f, 104.5241f },
	{ 223.9028f, -203.5781f, -139.7708f },
	{ 223.9028f, 0.363121f, -139.7708f },
	{ 178.9581f, 510.0096f, -94.56401f },
	{ 186.5003f, 510.0096f, -104.5243f },
	{ 186.5003f, 460.379f, 104.5241f },
	{ -223.9025f, 444.0029f, 139.7706f },
	{ -223.9025f, 444.0029f, -139.7708f },
	{ 223.9028f, 444.0029f, 139.7706f },
	{ 186.5003f, 510.0096f, 104.5241f },
	{ -134.2182f, 533.6972f, 65.24898f },
	{ 223.9028f, 444.0029f, -139.7707f },
	{ -178.9577f, 510.0096f, -94.56401f },
	{ -178.9577f, 510.0096f, 94.5638f },
	{ 178.9581f, 510.0096f, 94.5638f },
	{ -134.2182f, 533.6972f, -65.24918f },
	{ 134.2185f, 533.6972f, -65.24918f },
	{ 60.02634f, 532.6333f, -44.89775f },
	{ 60.02634f, 532.6333f, 17.57247f },
	{ 57.21519f, 594.6337f, -47.7089f },
	{ 57.21518f, 594.6337f, 20.38362f },
	{ 122.4965f, 532.6333f, -44.89775f },
	{ 122.4965f, 532.6333f, 17.57247f },
	{ 125.3076f, 594.6337f, -47.7089f },
	{ 125.3076f, 594.6337f, 20.38362f },
	{ 60.02634f, 589.5603f, -44.89775f },
	{ 60.02634f, 589.5603f, 17.57247f },
	{ 122.4965f, 589.5603f, 17.57247f },
	{ 122.4965f, 589.5603f, -44.89775f },
	{ -122.742f, 444.0029f, 139.7706f },
	{ -167.6585f, 444.0029f, 124.3958f },
	{ -70.35661f, 444.0029f, 124.3958f },
	{ -126.8481f, 444.0029f, 124.3958f },
	{ -72.83241f, 444.0029f, 139.7706f },
	{ -169.9488f, 444.0029f, 139.7706f },
	{ -29.54617f, 444.0029f, 124.3958f },
	{ -122.742f, 0.363122f, 139.7706f },
	{ -167.6585f, 0.363122f, 124.3958f },
	{ -70.35661f, 0.363122f, 124.3958f },
	{ -126.8481f, 0.363122f, 124.3958f },
	{ -72.83241f, 0.363122f, 139.7706f },
	{ -169.9488f, 0.363122f, 139.7706f },
	{ -29.54617f, 0.363122f, 124.3958f },
	{ 27.84524f, 444.0029f, 125.8168f },
	{ -25.58087f, -203.5781f, 139.3607f },
	{ 23.87994f, -203.5781f, 140.1713f },
	{ 27.84523f, -203.5781f, 125.8168f },
	{ 23.87995f, 444.0029f, 140.1713f },
	{ -25.58087f, 0.363122f, 139.3607f },
	{ 23.87995f, 0.363122f, 140.1713f },
	{ 118.33f, 444.0029f, 139.8082f },
	{ 118.33f, -203.5781f, 139.8082f },
	{ 170.9218f, 0.363121f, 139.7768f },
	{ 118.33f, 0.363122f, 139.8082f },
	{ 170.9218f, -203.5781f, 139.7768f },
	{ 168.4915f, 444.0029f, 125.6289f },
	{ 170.9218f, 444.0029f, 139.7768f },
	{ -122.742f, -203.5781f, 139.7706f },
	{ -167.6585f, -203.5781f, 124.3958f },
	{ -70.35661f, -203.5781f, 124.3958f },
	{ -126.8481f, -203.5781f, 124.3958f },
	{ -72.83241f, -203.5781f, 139.7706f },
	{ -169.9488f, -203.5781f, 139.7706f },
	{ -29.54617f, -203.5781f, 124.3958f },
	{ 27.84524f, 0.363122f, 125.8168f },
	{ -25.58087f, 444.0029f, 139.3607f },
	{ 72.7959f, -203.5781f, 125.7166f },
	{ 72.7959f, 0.363122f, 125.7166f },
	{ 72.7959f, 444.0029f, 125.7166f },
	{ 76.06201f, 444.0029f, 139.8207f },
	{ 76.06201f, 0.363122f, 139.8207f },
	{ 76.06201f, -203.5781f, 139.8207f },
	{ 123.1905f, -203.5781f, 125.6415f },
	{ 123.1905f, 0.363122f, 125.6415f },
	{ 123.1905f, 444.0029f, 125.6415f },
	{ 168.4915f, -203.5781f, 125.6289f },
	{ 168.4915f, 0.363121f, 125.6289f },
	{ 0.000138f, 460.379f, 104.5241f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00056204[] = {
	{ 0.174334f, 0.946142f, 0.272805f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.707148f, 0, 0.707065f },
	{ -0.417701f, 0.731768f, 0.538556f },
	{ -0.450642f, 0.763151f, -0.463165f },
	{ 0.707148f, 0, 0.707065f },
	{ 0.450642f, 0.763151f, -0.463165f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.078729f, 0.99438f, -0.070782f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.421237f, 0.734886f, 0.531509f },
	{ -0.603021f, 0.502747f, 0.619363f },
	{ -0.617664f, 0.489f, -0.61593f },
	{ 0.603885f, 0.501877f, 0.6192279f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.174334f, 0.946142f, 0.272805f },
	{ 0.617664f, 0.489f, -0.61593f },
	{ -0.078729f, 0.99438f, -0.070782f },
	{ -0.078729f, 0.99438f, 0.070782f },
	{ 0.078729f, 0.99438f, 0.070782f },
	{ -0.174334f, 0.946142f, -0.272805f },
	{ 0.174334f, 0.946142f, -0.272805f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.667266f, 0.330925f, -0.667266f },
	{ -0.667266f, 0.330925f, 0.667266f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.667266f, 0.330925f, -0.667266f },
	{ 0.667266f, 0.330925f, 0.667266f },
	{ -0.653093f, -0.383327f, -0.653092f },
	{ -0.653093f, -0.383328f, 0.653092f },
	{ 0.653093f, -0.383327f, 0.653092f },
	{ 0.653093f, -0.383328f, -0.653092f },
	{ -0.49074f, 0.592329f, 0.638999f },
	{ 0.304161f, 0.672071f, 0.6751339f },
	{ 0.275455f, 0.681268f, 0.678232f },
	{ -0.268107f, 0.659708f, 0.702071f },
	{ 0.525359f, 0.5862139f, 0.616726f },
	{ 0.529306f, 0.585528f, 0.613997f },
	{ -0.270119f, 0.659418f, 0.7015719f },
	{ -0.609089f, 0, 0.793102f },
	{ 0.652939f, 0, 0.7574109f },
	{ 0.648466f, 0, 0.761243f },
	{ -0.609089f, 0, 0.793102f },
	{ 0.648466f, 0, 0.761243f },
	{ 0.652939f, 0, 0.7574109f },
	{ -0.609863f, 0, 0.792507f },
	{ 0.267361f, 0.672093f, 0.690514f },
	{ -0.616336f, 0, 0.787483f },
	{ 0.5991549f, 0, 0.800633f },
	{ 0.606581f, 0, 0.795022f },
	{ 0.482951f, 0.591842f, 0.645354f },
	{ -0.616336f, 0, 0.787483f },
	{ 0.5991549f, 0, 0.800633f },
	{ 0.466422f, 0.596769f, 0.65293f },
	{ 0.581274f, 0, 0.8137079f },
	{ -0.6444319f, 0, 0.764661f },
	{ 0.581274f, 0, 0.8137079f },
	{ -0.6444319f, 0, 0.764661f },
	{ -0.301415f, 0.679055f, 0.6693529f },
	{ -0.521808f, 0.5868199f, 0.619159f },
	{ -0.609089f, 0, 0.793102f },
	{ 0.652939f, 0, 0.7574109f },
	{ 0.648466f, 0, 0.761243f },
	{ -0.609089f, 0, 0.793102f },
	{ 0.648466f, 0, 0.761243f },
	{ 0.652939f, 0, 0.7574109f },
	{ -0.609863f, 0, 0.792507f },
	{ 0.606581f, 0, 0.795022f },
	{ -0.49617f, 0.593232f, 0.633949f },
	{ -0.621381f, 0, 0.783509f },
	{ -0.621381f, 0, 0.783509f },
	{ -0.270624f, 0.679409f, 0.682031f },
	{ -0.502201f, 0.590252f, 0.631979f },
	{ -0.622137f, 0, 0.782908f },
	{ -0.622137f, 0, 0.782908f },
	{ 0.581266f, 0, 0.813714f },
	{ 0.581266f, 0, 0.813714f },
	{ 0.262642f, 0.65597f, 0.707618f },
	{ -0.644372f, 0, 0.764712f },
	{ -0.644372f, 0, 0.764712f },
	{ -0.004413f, 0.434508f, 0.900657f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00056630 = { vertex_00055DD8, normal_00056204, LengthOfArray<Sint32>(vertex_00055DD8), meshlist_00055D30, matlist_00055718, LengthOfArray<Uint16>(meshlist_00055D30), LengthOfArray<Uint16>(matlist_00055718), { 0.000153f, 195.5278f, 0.200264f }, 478.7054f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00056658 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00056630, 4268.802f, -168.3467f, -5371.236f, 0xFFFFE626, 0xFFFFC20A, 0x2059, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0005668C[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 92, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 120, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 119, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 119, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 84, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000566F0[] = {
	0x8000u | 6, 34, 38, 44, 39, 68, 35,
	6, 21, 23, 63, 22, 49, 20,
	6, 26, 47, 30, 65, 31, 27
};

extern "C" __declspec(dllexport) Sint16 poly_0005671A[] = {
	0x8000u | 8, 54, 53, 57, 58, 70, 1, 72, 3,
	0x8000u | 8, 52, 51, 59, 60, 5, 7, 9, 11,
	0x8000u | 6, 72, 3, 71, 2, 69, 0,
	8, 1, 3, 58, 2, 53, 0, 54, 69,
	0x8000u | 6, 9, 11, 8, 10, 4, 6,
	6, 12, 43, 16, 42, 17, 40,
	3, 13, 17, 40,
	0x8000u | 9, 12, 43, 55, 50, 56, 61, 13, 41, 40,
	8, 4, 52, 6, 51, 10, 60, 11, 7
};

extern "C" __declspec(dllexport) Sint16 poly_000567A8[] = {
	4, 15, 41, 19, 40,
	4, 19, 40, 18, 42,
	4, 18, 42, 14, 43,
	0x8000u | 8, 15, 41, 67, 61, 45, 50, 14, 43
};

extern "C" __declspec(dllexport) Sint16 poly_000567D8[] = {
	4, 77, 62, 49, 63,
	4, 48, 64, 47, 65,
	4, 46, 66, 44, 68,
	4, 34, 38, 32, 36,
	4, 38, 39, 36, 37,
	4, 39, 35, 37, 33,
	4, 21, 63, 74, 62,
	4, 23, 21, 76, 74,
	4, 22, 23, 75, 76,
	4, 20, 22, 73, 75,
	4, 27, 65, 25, 64,
	4, 31, 27, 29, 25,
	4, 30, 31, 28, 29,
	4, 26, 30, 24, 28,
	4, 35, 68, 33, 66,
	4, 32, 46, 34, 44,
	4, 24, 48, 26, 47,
	4, 73, 77, 20, 49
};

extern "C" __declspec(dllexport) Sint16 poly_0005688C[] = {
	6, 32, 36, 46, 37, 66, 33,
	6, 24, 28, 48, 29, 64, 25,
	3, 75, 76, 73,
	0x8000u | 5, 73, 77, 76, 62, 74
};

NJS_TEX uv_000568BC[] = {
	{ 0, -104 },
	{ 0, 255 },
	{ 152, -104 },
	{ 510, 255 },
	{ 342, -255 },
	{ 510, -255 },
	{ 510, -255 },
	{ 510, 255 },
	{ 342, -255 },
	{ 0, 255 },
	{ 152, -104 },
	{ 0, -104 },
	{ 0, -104 },
	{ 152, -104 },
	{ 0, 255 },
	{ 342, -255 },
	{ 510, 255 },
	{ 510, -255 }
};

NJS_TEX uv_00056904[] = {
	{ 152, 195 },
	{ 152, 147 },
	{ 342, 195 },
	{ 342, 147 },
	{ 510, 195 },
	{ 510, 147 },
	{ 0, 195 },
	{ 0, 147 },
	{ 152, 93 },
	{ 152, 45 },
	{ 342, 93 },
	{ 342, 45 },
	{ 510, 93 },
	{ 510, 45 },
	{ 0, 93 },
	{ 0, 45 },
	{ 510, 195 },
	{ 510, 147 },
	{ 0, 195 },
	{ 0, 147 },
	{ 358, 195 },
	{ 358, 147 },
	{ 510, 147 },
	{ 510, 147 },
	{ 342, 147 },
	{ 0, 147 },
	{ 152, 147 },
	{ 0, 147 },
	{ 152, 195 },
	{ 0, 195 },
	{ 510, 93 },
	{ 510, 45 },
	{ 0, 93 },
	{ 0, 45 },
	{ 358, 93 },
	{ 358, 45 },
	{ 352, 255 },
	{ 352, 0 },
	{ 6, 255 },
	{ 6, 0 },
	{ 502, 255 },
	{ 502, 0 },
	{ 502, 255 },
	{ 6, 255 },
	{ 6, 0 },
	{ 7, 255 },
	{ 7, 0 },
	{ 157, 255 },
	{ 157, 0 },
	{ 346, 255 },
	{ 346, 0 },
	{ 502, 255 },
	{ 502, 0 },
	{ 6, 0 },
	{ 0, 93 },
	{ 152, 93 },
	{ 0, 45 },
	{ 152, 45 },
	{ 0, 45 },
	{ 342, 45 },
	{ 510, 45 },
	{ 510, 45 }
};

NJS_TEX uv_000569FC[] = {
	{ 508, -207 },
	{ 508, 81 },
	{ 0, -207 },
	{ 0, 81 },
	{ 508, -205 },
	{ 508, 80 },
	{ 0, -205 },
	{ 0, 80 },
	{ 0, -207 },
	{ 0, 81 },
	{ 354, -207 },
	{ 354, 81 },
	{ 508, -205 },
	{ 508, 80 },
	{ 348, -205 },
	{ 348, 80 },
	{ 154, -205 },
	{ 154, 80 },
	{ 0, -205 },
	{ 0, 80 }
};

NJS_TEX uv_00056A4C[] = {
	{ 845, 35 },
	{ 9, 35 },
	{ 845, 1 },
	{ 9, 1 },
	{ 845, 35 },
	{ 9, 35 },
	{ 845, 1 },
	{ 9, 1 },
	{ 845, 35 },
	{ 9, 35 },
	{ 845, 1 },
	{ 9, 1 },
	{ 9, 1 },
	{ 905, 1 },
	{ 9, 35 },
	{ 905, 35 },
	{ 9, 1 },
	{ 1265, 1 },
	{ 9, 35 },
	{ 1265, 35 },
	{ 9, 1 },
	{ 1265, 1 },
	{ 9, 35 },
	{ 1265, 35 },
	{ 9, 1 },
	{ 546, 1 },
	{ 9, 35 },
	{ 546, 35 },
	{ 9, 1 },
	{ 1265, 1 },
	{ 9, 35 },
	{ 1265, 35 },
	{ 9, 1 },
	{ 1265, 1 },
	{ 9, 35 },
	{ 1265, 35 },
	{ 9, 1 },
	{ 905, 1 },
	{ 9, 35 },
	{ 905, 35 },
	{ 9, 1 },
	{ 546, 1 },
	{ 9, 35 },
	{ 546, 35 },
	{ 9, 1 },
	{ 1265, 1 },
	{ 9, 35 },
	{ 1265, 35 },
	{ 9, 1 },
	{ 1265, 1 },
	{ 9, 35 },
	{ 1265, 35 },
	{ 9, 1 },
	{ 905, 1 },
	{ 9, 35 },
	{ 905, 35 },
	{ 9, 1 },
	{ 546, 1 },
	{ 9, 35 },
	{ 546, 35 },
	{ 546, 35 },
	{ 9, 35 },
	{ 546, 1 },
	{ 9, 1 },
	{ 546, 35 },
	{ 9, 35 },
	{ 546, 1 },
	{ 9, 1 },
	{ 546, 35 },
	{ 9, 35 },
	{ 546, 1 },
	{ 9, 1 }
};

NJS_TEX uv_00056B6C[] = {
	{ 0, -104 },
	{ 0, 255 },
	{ 152, -104 },
	{ 510, 255 },
	{ 342, -255 },
	{ 510, -255 },
	{ 0, -104 },
	{ 0, 255 },
	{ 152, -104 },
	{ 510, 255 },
	{ 342, -255 },
	{ 510, -255 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, -104 },
	{ 0, -104 },
	{ 152, -104 },
	{ 510, 255 },
	{ 342, -255 },
	{ 510, -255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00056BBC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000566F0, NULL, NULL, NULL, uv_000568BC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 9, poly_0005671A, NULL, NULL, NULL, uv_00056904, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_000567A8, NULL, NULL, NULL, uv_000569FC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 18, poly_000567D8, NULL, NULL, NULL, uv_00056A4C, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 4, poly_0005688C, NULL, NULL, NULL, uv_00056B6C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00056C34[] = {
	{ -180.9726f, -119.8332f, 112.1738f },
	{ 180.9726f, -119.8332f, 234.7555f },
	{ -180.9726f, -119.8332f, -180.9729f },
	{ 180.9726f, -119.8332f, -180.9729f },
	{ -180.9726f, -75.94205f, 112.1738f },
	{ 180.9726f, -75.94205f, 234.7555f },
	{ -180.9726f, -36.80051f, 112.1738f },
	{ 180.9726f, -36.80051f, 234.7555f },
	{ -180.9726f, -75.94205f, -180.9729f },
	{ 180.9726f, -75.94205f, -180.9729f },
	{ -180.9726f, -36.80051f, -180.9729f },
	{ 180.9726f, -36.80051f, -180.9729f },
	{ -175.5249f, -207.4231f, 106.7259f },
	{ 175.5249f, -207.4231f, 229.3076f },
	{ -175.5249f, 200.6582f, 106.7259f },
	{ 175.5249f, 200.6582f, 229.3076f },
	{ -175.5249f, -207.4231f, -175.525f },
	{ 175.5249f, -207.4231f, -175.525f },
	{ -175.5249f, 200.6582f, -175.525f },
	{ 175.5249f, 200.6582f, -175.525f },
	{ -180.9726f, 58.60912f, 112.1738f },
	{ 180.9726f, 58.60913f, 234.7555f },
	{ -180.9726f, 58.60912f, -180.9729f },
	{ 180.9726f, 58.60913f, -180.9729f },
	{ -180.9726f, 93.63398f, 112.1738f },
	{ 180.9726f, 93.63398f, 234.7555f },
	{ -180.9726f, 134.6725f, 112.1738f },
	{ 180.9726f, 134.6725f, 234.7555f },
	{ -180.9726f, 93.63398f, -180.9729f },
	{ 180.9726f, 93.63398f, -180.9729f },
	{ -180.9726f, 134.6725f, -180.9729f },
	{ 180.9726f, 134.6725f, -180.9729f },
	{ -180.9726f, 179.0202f, 112.1738f },
	{ 180.9726f, 179.0202f, 234.7555f },
	{ -180.9726f, 216.9922f, 112.1738f },
	{ 180.9726f, 216.9922f, 234.7555f },
	{ -180.9726f, 179.0202f, -180.9729f },
	{ 180.9726f, 179.0202f, -180.9729f },
	{ -180.9726f, 216.9922f, -180.9729f },
	{ 180.9726f, 216.9922f, -180.9729f },
	{ 175.5249f, 0.000026f, -175.525f },
	{ 175.5249f, 0.000026f, 229.3076f },
	{ -175.5249f, 0.000025f, -175.525f },
	{ -175.5249f, 0.000025f, 106.7259f },
	{ -72.74068f, 216.9922f, 112.1738f },
	{ -69.14925f, 200.6582f, 106.7259f },
	{ -72.74068f, 179.0202f, 112.1738f },
	{ -72.74068f, 134.6725f, 112.1738f },
	{ -72.74068f, 93.63398f, 112.1738f },
	{ -72.74068f, 58.60912f, 112.1738f },
	{ -69.14925f, 0.000025f, 106.7259f },
	{ -72.74068f, -36.80051f, 112.1738f },
	{ -72.74068f, -75.94205f, 112.1738f },
	{ -72.74068f, -119.8332f, 112.1738f },
	{ -72.74068f, -158.9747f, 112.1738f },
	{ -69.14925f, -207.4231f, 106.7259f },
	{ 64.71268f, -207.4231f, 229.3076f },
	{ 61.95908f, -158.9747f, 234.7555f },
	{ 61.95908f, -119.8332f, 234.7555f },
	{ 61.95908f, -75.94205f, 234.7555f },
	{ 61.95908f, -36.80051f, 234.7555f },
	{ 64.71268f, 0.000026f, 229.3076f },
	{ 61.95908f, 23.10163f, 234.7555f },
	{ 61.95908f, 58.60912f, 234.7555f },
	{ 61.95908f, 93.63398f, 234.7555f },
	{ 61.95908f, 134.6725f, 234.7555f },
	{ 61.95908f, 179.0202f, 234.7555f },
	{ 64.71268f, 200.6582f, 229.3076f },
	{ 61.95908f, 216.9922f, 234.7555f },
	{ -180.9726f, -158.9747f, 112.1738f },
	{ 180.9726f, -158.9747f, 234.7555f },
	{ -180.9726f, -158.9747f, -180.9729f },
	{ 180.9726f, -158.9747f, -180.9729f },
	{ -180.9726f, 23.10163f, 112.1738f },
	{ 180.9726f, 23.10163f, 234.7555f },
	{ -180.9726f, 23.10163f, -180.9729f },
	{ 180.9726f, 23.10163f, -180.9729f },
	{ -72.74068f, 23.10163f, 112.1738f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00056FDC[] = {
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, -0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, -0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.217451f, 0.798022f, 0.5620289f },
	{ -0.362286f, 0, 0.932067f },
	{ -0.217451f, -0.798022f, 0.5620289f },
	{ -0.217451f, 0.798022f, 0.5620289f },
	{ -0.217451f, -0.798022f, 0.5620289f },
	{ -0.217451f, 0.798022f, 0.5620289f },
	{ -0.362286f, 0, 0.932067f },
	{ -0.217451f, 0.798022f, 0.5620289f },
	{ -0.360838f, 0, 0.932629f },
	{ -0.217451f, 0.798022f, 0.5620289f },
	{ -0.360838f, 0, 0.932629f },
	{ -0.362286f, 0, 0.932067f },
	{ -0.362286f, 0, 0.932067f },
	{ -0.360838f, 0, 0.932629f },
	{ -0.278991f, 0.634192f, 0.721086f },
	{ -0.360838f, 0, 0.932629f },
	{ -0.278991f, 0.634192f, 0.721086f },
	{ -0.362286f, 0, 0.932067f },
	{ -0.278991f, -0.634192f, 0.721086f },
	{ -0.278991f, 0.634192f, 0.721086f },
	{ -0.278991f, -0.634192f, 0.721086f },
	{ -0.278991f, 0.634192f, 0.721086f },
	{ -0.278991f, -0.634192f, 0.721086f },
	{ -0.362286f, 0, 0.932067f },
	{ -0.278991f, 0.634192f, 0.721086f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ -0.57735f, -0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ -0.217451f, -0.798022f, 0.5620289f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00057384 = { vertex_00056C34, normal_00056FDC, LengthOfArray<Sint32>(vertex_00056C34), meshlist_00056BBC, matlist_0005668C, LengthOfArray<Uint16>(meshlist_00056BBC), LengthOfArray<Uint16>(matlist_0005668C), { -0.00031f, 4.784538f, 26.89128f }, 316.1043f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000573AC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00057384, 4184, 0, -5863, 0xFFFFFFE3, 0xFFFFFCD8, 0xFFFFFD29, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000573E0[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 92, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 121, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 104, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 103, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 101, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 109, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00057458[] = {
	11, 27, 31, 23, 1, 19, 0, 15, 16, 11, 32, 7
};

extern "C" __declspec(dllexport) Sint16 poly_00057470[] = {
	24, 44, 32, 45, 16, 46, 0, 47, 1, 48, 31, 49, 27, 50, 23, 51, 19, 52, 15, 53, 11, 54, 7, 44, 32
};

extern "C" __declspec(dllexport) Sint16 poly_000574A2[] = {
	0x8000u | 22, 5, 6, 9, 10, 13, 14, 17, 18, 21, 22, 25, 26, 29, 30, 3, 2, 4, 20, 8, 12, 24, 28,
	4, 5, 6, 24, 28
};

extern "C" __declspec(dllexport) Sint16 poly_000574DA[] = {
	22, 33, 6, 34, 10, 35, 14, 36, 18, 37, 22, 38, 26, 39, 30, 40, 2, 41, 20, 42, 12, 43, 28,
	4, 6, 33, 28, 43
};

extern "C" __declspec(dllexport) Sint16 poly_00057512[] = {
	22, 54, 33, 53, 34, 52, 35, 51, 36, 50, 37, 49, 38, 48, 39, 47, 40, 46, 41, 45, 42, 44, 43
};

extern "C" __declspec(dllexport) Sint16 poly_00057540[] = {
	4, 33, 54, 43, 44
};

NJS_TEX uv_0005754C[] = {
	{ 382, -255 },
	{ 572, -220 },
	{ 193, -220 },
	{ 710, -127 },
	{ 54, -127 },
	{ 761, 0 },
	{ 3, 0 },
	{ 765, 127 },
	{ 0, 127 },
	{ 764, 254 },
	{ 0, 254 }
};

NJS_TEX uv_00057578[] = {
	{ 7650, 255 },
	{ 7650, 0 },
	{ 6962, 255 },
	{ 6962, 0 },
	{ 6276, 255 },
	{ 6276, 0 },
	{ 5549, 255 },
	{ 5549, 0 },
	{ 4728, 255 },
	{ 4728, 0 },
	{ 3825, 255 },
	{ 3825, 0 },
	{ 2919, 255 },
	{ 2919, 0 },
	{ 2099, 255 },
	{ 2099, 0 },
	{ 1372, 255 },
	{ 1372, 0 },
	{ 685, 255 },
	{ 685, 0 },
	{ 0, 255 },
	{ 0 },
	{ 3060, 255 },
	{ 3060, 0 }
};

NJS_TEX uv_000575D8[] = {
	{ 1530, 255 },
	{ 1530, 27 },
	{ 1379, 255 },
	{ 1379, 27 },
	{ 1218, 255 },
	{ 1218, 27 },
	{ 1072, 255 },
	{ 1072, 27 },
	{ 920, 255 },
	{ 920, 27 },
	{ 764, 255 },
	{ 764, 27 },
	{ 609, 255 },
	{ 609, 27 },
	{ 456, 255 },
	{ 456, 27 },
	{ 298, 255 },
	{ 298, 27 },
	{ 149, 255 },
	{ 149, 27 },
	{ 0, 255 },
	{ 0, 27 },
	{ 0, 127 },
	{ 1, 17 },
	{ 510, 127 },
	{ 506, 18 }
};

NJS_TEX uv_00057640[] = {
	{ 1530, -255 },
	{ 1523, 155 },
	{ 1379, -255 },
	{ 1373, 155 },
	{ 1229, -255 },
	{ 1224, 155 },
	{ 1072, -255 },
	{ 1066, 155 },
	{ 920, -255 },
	{ 913, 155 },
	{ 769, -255 },
	{ 764, 155 },
	{ 614, -255 },
	{ 609, 155 },
	{ 462, -255 },
	{ 456, 155 },
	{ 304, -255 },
	{ 298, 155 },
	{ 155, -255 },
	{ 149, 155 },
	{ 0, -255 },
	{ -5, 155 },
	{ 0, 157 },
	{ 0, -255 },
	{ 508, 155 },
	{ 510, -255 }
};

NJS_TEX uv_000576A8[] = {
	{ 0, 255 },
	{ 0 },
	{ 376, 255 },
	{ 376, 0 },
	{ 756, 255 },
	{ 756, 0 },
	{ 1182, 255 },
	{ 1182, 0 },
	{ 1795, 255 },
	{ 1795, 0 },
	{ 2550, 255 },
	{ 2550, 0 },
	{ 3302, 255 },
	{ 3302, 0 },
	{ 3916, 255 },
	{ 3916, 0 },
	{ 4342, 255 },
	{ 4342, 0 },
	{ 4721, 255 },
	{ 4721, 0 },
	{ 5100, 255 },
	{ 5100, 0 }
};

NJS_TEX uv_00057700[] = {
	{ 57, 254 },
	{ 0 },
	{ 1982, 254 },
	{ 2040, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00057710[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00057458, NULL, NULL, NULL, uv_0005754C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00057470, NULL, NULL, NULL, uv_00057578, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_000574A2, NULL, NULL, NULL, uv_000575D8, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_000574DA, NULL, NULL, NULL, uv_00057640, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_00057512, NULL, NULL, NULL, uv_000576A8, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_00057540, NULL, NULL, NULL, uv_00057700, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000577A0[] = {
	{ 317.8835f, 286.5577f, 0.000036f },
	{ 275.2953f, 286.5577f, 123.2184f },
	{ 259.7126f, 0.000021f, 116.2438f },
	{ 259.7126f, -199.7615f, 116.2438f },
	{ 299.8902f, -199.7615f, 0.000037f },
	{ -302.1019f, -199.7615f, -232.4597f },
	{ -302.1019f, 0.000021f, -232.4597f },
	{ -320.2279f, 286.5577f, -246.4073f },
	{ 301.6186f, -199.7615f, -116.2438f },
	{ -302.3558f, -199.7615f, -116.2437f },
	{ -302.3558f, 0.000021f, -116.2437f },
	{ -320.4971f, 286.5577f, -123.2183f },
	{ 301.6186f, 0.000021f, -116.2438f },
	{ -299.8901f, -199.7615f, 0.000057f },
	{ -299.8901f, 0.000021f, 0.000057f },
	{ -317.8834f, 286.5577f, 0.000058f },
	{ 319.7157f, 286.5577f, -123.2184f },
	{ -259.7124f, -199.7615f, 116.2439f },
	{ -259.7124f, 0.000021f, 116.2439f },
	{ -275.2951f, 286.5577f, 123.2185f },
	{ 299.8902f, 0.000021f, 0.000037f },
	{ -149.945f, -199.7615f, 201.3402f },
	{ -149.945f, 0.000021f, 201.3402f },
	{ -158.9417f, 286.5577f, 213.4206f },
	{ 301.3647f, -199.7615f, -232.4597f },
	{ 0.000079f, -199.7615f, 232.4877f },
	{ 0.000079f, 0.000021f, 232.4877f },
	{ 0.000079f, 286.5577f, 246.4369f },
	{ 301.3647f, 0.000021f, -232.4597f },
	{ 149.9452f, -199.7615f, 201.3402f },
	{ 149.9452f, 0.000021f, 201.3402f },
	{ 158.9418f, 286.5577f, 213.4206f },
	{ 319.4466f, 286.5577f, -246.4073f },
	{ -302.1019f, 232.449f, -232.4597f },
	{ -302.3558f, 232.449f, -116.2437f },
	{ -299.8901f, 232.449f, 0.000057f },
	{ -259.7124f, 232.449f, 116.2439f },
	{ -149.945f, 232.449f, 201.3402f },
	{ 0.000079f, 232.449f, 232.4877f },
	{ 149.9452f, 232.449f, 201.3402f },
	{ 259.7126f, 232.449f, 116.2438f },
	{ 299.8902f, 232.449f, 0.000037f },
	{ 301.6186f, 232.449f, -116.2438f },
	{ 301.3647f, 232.449f, -232.4597f },
	{ 319.4466f, 251.5495f, -246.4073f },
	{ 319.7157f, 251.5495f, -123.2184f },
	{ 317.8835f, 251.5495f, 0.000036f },
	{ 275.2953f, 251.5495f, 123.2184f },
	{ 158.9418f, 251.5495f, 213.4206f },
	{ 0.000079f, 251.5495f, 246.4369f },
	{ -158.9417f, 251.5495f, 213.4206f },
	{ -275.2951f, 251.5495f, 123.2185f },
	{ -317.8834f, 251.5495f, 0.000058f },
	{ -320.4971f, 251.5495f, -123.2183f },
	{ -320.2279f, 251.5495f, -246.4073f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00057A34[] = {
	{ 0.728358f, 0.673155f, 0.127896f },
	{ 0.618845f, 0.648182f, 0.443723f },
	{ 0.812682f, 0, 0.5827079f },
	{ 0.812682f, 0, 0.5827079f },
	{ 0.984931f, 0, 0.172949f },
	{ -0.706334f, 0, -0.7078789f },
	{ -0.706334f, 0, -0.7078789f },
	{ -0.5766619f, 0.577465f, -0.577923f },
	{ 0.99998f, 0, 0.006341f },
	{ -0.999955f, 0, 0.009512f },
	{ -0.999955f, 0, 0.009512f },
	{ -0.7096879f, 0.704484f, 0.006751f },
	{ 0.99998f, 0, 0.006341f },
	{ -0.984378f, 0, 0.176071f },
	{ -0.984378f, 0, 0.176071f },
	{ -0.727374f, 0.673795f, 0.130102f },
	{ 0.7090009f, 0.705193f, 0.004496f },
	{ -0.812682f, 0, 0.5827079f },
	{ -0.812682f, 0, 0.5827079f },
	{ -0.618845f, 0.648182f, 0.443724f },
	{ 0.984931f, 0, 0.172949f },
	{ -0.418813f, 0, 0.9080729f },
	{ -0.418813f, 0, 0.9080729f },
	{ -0.314741f, 0.659723f, 0.6824239f },
	{ 0.706334f, 0, -0.7078789f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0.664066f, 0.747674f },
	{ 0.706334f, 0, -0.7078789f },
	{ 0.418813f, 0, 0.9080729f },
	{ 0.418813f, 0, 0.9080729f },
	{ 0.314741f, 0.659723f, 0.6824239f },
	{ 0.5766619f, 0.577465f, -0.577923f },
	{ -0.576441f, -0.513835f, -0.6353649f },
	{ -0.928717f, -0.370664f, 0.009614999f },
	{ -0.910583f, -0.377479f, 0.16837f },
	{ -0.7464949f, -0.373326f, 0.550792f },
	{ -0.385942f, -0.336656f, 0.858901f },
	{ 0, -0.322715f, 0.946496f },
	{ 0.385942f, -0.336656f, 0.858901f },
	{ 0.746496f, -0.373326f, 0.550792f },
	{ 0.910939f, -0.377899f, 0.165478f },
	{ 0.928938f, -0.370178f, 0.006454f },
	{ 0.576889f, -0.5134749f, -0.63525f },
	{ 0.66457f, -0.362961f, -0.653151f },
	{ 0.92939f, -0.369061f, 0.005339f },
	{ 0.9219379f, -0.353791f, 0.15768f },
	{ 0.770739f, -0.333339f, 0.542998f },
	{ 0.40409f, -0.310093f, 0.860554f },
	{ 0, -0.298943f, 0.954271f },
	{ -0.40409f, -0.310093f, 0.860554f },
	{ -0.7707379f, -0.333339f, 0.542999f },
	{ -0.921392f, -0.353903f, 0.160593f },
	{ -0.929341f, -0.369133f, 0.008075f },
	{ -0.664558f, -0.363208f, -0.653026f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00057CC8 = { vertex_000577A0, normal_00057A34, LengthOfArray<Sint32>(vertex_000577A0), meshlist_00057710, matlist_000573E0, LengthOfArray<Uint16>(meshlist_00057710), LengthOfArray<Uint16>(matlist_000573E0), { -0.390732f, 43.39809f, 0.014793f }, 429.1603f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00057CF0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00057CC8, 4063, -66, -1976, 0, 0x8000, 0x7BD, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00057D24[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 126, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 122, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 113, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 127, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 123, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 123, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 92, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 122, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 125, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 124, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 122, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 92, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 123, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00057E28[] = {
	6, 1, 2, 0, 70, 10, 9,
	6, 5, 6, 4, 3, 8, 7
};

extern "C" __declspec(dllexport) Sint16 poly_00057E44[] = {
	4, 5, 76, 6, 77,
	4, 17, 16, 26, 23,
	0x8000u | 5, 19, 27, 22, 24, 25,
	4, 55, 57, 51, 52,
	4, 59, 58, 61, 62,
	3, 19, 27, 68,
	6, 27, 56, 68, 63, 73, 64,
	6, 75, 10, 74, 9, 77, 6,
	4, 10, 75, 5, 76
};

extern "C" __declspec(dllexport) Sint16 poly_00057EA6[] = {
	6, 14, 75, 13, 74, 12, 77,
	4, 11, 76, 14, 75,
	4, 12, 77, 11, 76
};

extern "C" __declspec(dllexport) Sint16 poly_00057EC8[] = {
	4, 8, 1, 4, 0,
	4, 7, 2, 8, 1,
	4, 3, 70, 7, 2,
	4, 10, 5, 0, 4,
	4, 9, 70, 6, 3
};

extern "C" __declspec(dllexport) Sint16 poly_00057EFA[] = {
	4, 17, 18, 16, 15,
	4, 21, 18, 22, 17,
	4, 53, 54, 52, 51,
	4, 15, 53, 16, 52,
	4, 69, 71, 58, 47,
	4, 59, 60, 58, 69,
	4, 54, 60, 51, 59
};

extern "C" __declspec(dllexport) Sint16 poly_00057F40[] = {
	4, 21, 22, 20, 19,
	4, 47, 71, 29, 30,
	4, 46, 50, 45, 48
};

extern "C" __declspec(dllexport) Sint16 poly_00057F5E[] = {
	4, 23, 24, 26, 25,
	0x8000u | 6, 57, 23, 55, 24, 56, 27,
	0x8000u | 5, 62, 61, 63, 55, 56,
	4, 62, 65, 63, 64
};

extern "C" __declspec(dllexport) Sint16 poly_00057F8C[] = {
	4, 26, 25, 17, 22,
	4, 57, 23, 52, 16,
	4, 55, 51, 61, 59,
	4, 47, 65, 58, 62
};

extern "C" __declspec(dllexport) Sint16 poly_00057FB4[] = {
	12, 29, 30, 28, 32, 31, 33, 42, 44, 43, 72, 45, 46,
	4, 50, 66, 48, 73
};

extern "C" __declspec(dllexport) Sint16 poly_00057FD8[] = {
	4, 35, 34, 45, 43,
	0x8000u | 11, 28, 29, 39, 41, 40, 35, 36, 34, 37, 43, 42,
	5, 37, 36, 38, 40, 39,
	0x8000u | 6, 37, 42, 38, 31, 39, 28,
	4, 48, 73, 49, 64
};

extern "C" __declspec(dllexport) Sint16 poly_0005801E[] = {
	4, 49, 35, 48, 45,
	4, 65, 47, 41, 29
};

extern "C" __declspec(dllexport) Sint16 poly_00058032[] = {
	3, 14, 13, 41,
	0x8000u | 9, 41, 65, 13, 64, 12, 49, 14, 35, 41,
	3, 14, 12, 11
};

extern "C" __declspec(dllexport) Sint16 poly_00058056[] = {
	6, 73, 66, 68, 67, 19, 20
};

NJS_TEX uv_00058064[] = {
	{ 191, 0 },
	{ 63, 0 },
	{ 237, 107 },
	{ 17, 107 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0, 254 },
	{ 237, 107 },
	{ 17, 107 },
	{ 191, 0 },
	{ 63, 0 }
};

NJS_TEX uv_00058094[] = {
	{ 510, -255 },
	{ 510, 254 },
	{ 0, -255 },
	{ 0, 254 },
	{ 506, 256 },
	{ 322, 254 },
	{ 506, -506 },
	{ 324, -508 },
	{ 0, 255 },
	{ 0, -508 },
	{ 508, 255 },
	{ 384, -508 },
	{ 508, -508 },
	{ 506, 256 },
	{ 322, 254 },
	{ 506, -506 },
	{ 324, -508 },
	{ 506, 256 },
	{ 322, 254 },
	{ 506, -506 },
	{ 324, -508 },
	{ 0, 252 },
	{ 0, -508 },
	{ 378, 252 },
	{ 0, -508 },
	{ 243, -508 },
	{ 378, 252 },
	{ 378, -508 },
	{ 510, 254 },
	{ 510, -510 },
	{ 510, 254 },
	{ 510, -255 },
	{ 0, 254 },
	{ 0, -255 },
	{ 764, 254 },
	{ 764, -255 },
	{ 0, -255 },
	{ 0, 254 },
	{ 764, -255 },
	{ 764, 254 }
};

NJS_TEX uv_00058134[] = {
	{ 1020, 254 },
	{ 1020, 0 },
	{ 0, 254 },
	{ 0 },
	{ 2039, 254 },
	{ 2039, 0 },
	{ 2039, 254 },
	{ 2039, 0 },
	{ 0, 254 },
	{ 0 },
	{ 0, 254 },
	{ 0 },
	{ 1020, 254 },
	{ 1020, 0 }
};

NJS_TEX uv_0005816C[] = {
	{ 506, 251 },
	{ 0, 249 },
	{ 504, 119 },
	{ 0, 119 },
	{ 506, 253 },
	{ 3, 253 },
	{ 506, 1 },
	{ 3, 1 },
	{ 506, 251 },
	{ 0, 249 },
	{ 504, 119 },
	{ 0, 119 },
	{ 508, 252 },
	{ -1, 253 },
	{ 506, 118 },
	{ 1, 118 },
	{ -1, 253 },
	{ 1, 118 },
	{ 508, 252 },
	{ 506, 118 }
};

NJS_TEX uv_000581BC[] = {
	{ 159, 1 },
	{ 157, 254 },
	{ 254, 2 },
	{ 255, 255 },
	{ 85, 254 },
	{ 255, 255 },
	{ 85, 1 },
	{ 254, 2 },
	{ 157, 254 },
	{ 255, 255 },
	{ 159, 1 },
	{ 254, 2 },
	{ 85, 254 },
	{ 255, 255 },
	{ 85, 1 },
	{ 254, 2 },
	{ 85, 254 },
	{ 255, 255 },
	{ 85, 1 },
	{ 254, 2 },
	{ 159, 1 },
	{ 157, 254 },
	{ 254, 2 },
	{ 255, 255 },
	{ 85, 254 },
	{ 255, 255 },
	{ 85, 1 },
	{ 254, 2 }
};

NJS_TEX uv_0005822C[] = {
	{ 510, 255 },
	{ 510, 0 },
	{ 0, 255 },
	{ 0 },
	{ 151, 0 },
	{ 153, 254 },
	{ 508, 0 },
	{ 510, 254 },
	{ 508, 254 },
	{ 0, 254 },
	{ 508, 0 },
	{ 0 }
};

NJS_TEX uv_0005825C[] = {
	{ 176, -129 },
	{ 0, -129 },
	{ 176, -255 },
	{ 0, -255 },
	{ 364, -129 },
	{ 176, -129 },
	{ 364, 0 },
	{ 0, -129 },
	{ 364, 255 },
	{ 0, 255 },
	{ 568, 113 },
	{ 568, 0 },
	{ 568, 255 },
	{ 364, 0 },
	{ 364, 255 },
	{ 568, 113 },
	{ 765, 114 },
	{ 568, 255 },
	{ 765, 254 }
};

NJS_TEX uv_000582A8[] = {
	{ 252, -508 },
	{ 88, -504 },
	{ 252, 239 },
	{ 88, 238 },
	{ 252, -508 },
	{ 88, -504 },
	{ 252, 239 },
	{ 88, 238 },
	{ 88, -504 },
	{ 88, 238 },
	{ 252, -508 },
	{ 252, 239 },
	{ 252, 239 },
	{ 252, -508 },
	{ 88, 238 },
	{ 88, -504 }
};

NJS_TEX uv_000582E8[] = {
	{ 0 },
	{ 0, 254 },
	{ 76, 0 },
	{ 76, 254 },
	{ 101, 0 },
	{ 101, 254 },
	{ 153, 0 },
	{ 153, 254 },
	{ 171, 0 },
	{ 171, 254 },
	{ 255, 0 },
	{ 255, 254 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, 0 },
	{ 0 }
};

NJS_TEX uv_00058328[] = {
	{ 255, 0 },
	{ 167, 65 },
	{ 255, 254 },
	{ 171, 254 },
	{ 76, 254 },
	{ 0, 254 },
	{ 76, 42 },
	{ 0 },
	{ 101, 42 },
	{ 255, 0 },
	{ 149, 65 },
	{ 167, 65 },
	{ 153, 91 },
	{ 171, 254 },
	{ 153, 254 },
	{ 153, 91 },
	{ 149, 65 },
	{ 101, 67 },
	{ 101, 42 },
	{ 76, 42 },
	{ 153, 91 },
	{ 153, 254 },
	{ 101, 67 },
	{ 101, 254 },
	{ 76, 42 },
	{ 76, 254 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, 0 },
	{ 0 }
};

NJS_TEX uv_000583A0[] = {
	{ 0, -510 },
	{ 508, -510 },
	{ 0, 254 },
	{ 508, 254 },
	{ 139, -510 },
	{ 139, 254 },
	{ 508, -510 },
	{ 508, 254 }
};

NJS_TEX uv_000583C0[] = {
	{ 42, -195 },
	{ 42, 190 },
	{ 0, -254 },
	{ 0, -254 },
	{ 0, 115 },
	{ 42, 190 },
	{ 0, 255 },
	{ 470, 190 },
	{ 510, 255 },
	{ 42, -195 },
	{ 510, -255 },
	{ 0, -254 },
	{ 42, -195 },
	{ 470, 190 },
	{ 470, -195 }
};

NJS_TEX uv_000583FC[] = {
	{ 510, 2 },
	{ 510, 255 },
	{ 378, 0 },
	{ 378, 252 },
	{ 0 },
	{ 0, 252 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00058414[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00057E28, NULL, NULL, NULL, uv_00058064, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 9, poly_00057E44, NULL, NULL, NULL, uv_00058094, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_00057EA6, NULL, NULL, NULL, uv_00058134, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 5, poly_00057EC8, NULL, NULL, NULL, uv_0005816C, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 7, poly_00057EFA, NULL, NULL, NULL, uv_000581BC, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 3, poly_00057F40, NULL, NULL, NULL, uv_0005822C, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 4, poly_00057F5E, NULL, NULL, NULL, uv_0005825C, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 4, poly_00057F8C, NULL, NULL, NULL, uv_000582A8, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 2, poly_00057FB4, NULL, NULL, NULL, uv_000582E8, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 5, poly_00057FD8, NULL, NULL, NULL, uv_00058328, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 2, poly_0005801E, NULL, NULL, NULL, uv_000583A0, NULL },
	{ NJD_MESHSET_TRIMESH | 11, 3, poly_00058032, NULL, NULL, NULL, uv_000583C0, NULL },
	{ NJD_MESHSET_TRIMESH | 12, 1, poly_00058056, NULL, NULL, NULL, uv_000583FC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0005854C[] = {
	{ 2.73769f, 686.4005f, 105.5833f },
	{ 2.73769f, 699.6722f, 58.90805f },
	{ 2.737688f, 699.6722f, -68.61165f },
	{ 390.3018f, 686.4005f, -115.2872f },
	{ 390.3018f, 686.4005f, 105.5833f },
	{ 397.8519f, 668.2711f, 122.6677f },
	{ 397.8519f, 668.2711f, -132.3714f },
	{ 390.3018f, 699.6722f, -68.61154f },
	{ 390.3018f, 699.6722f, 58.90798f },
	{ -4.81229f, 668.2711f, -132.3715f },
	{ -4.812287f, 668.2711f, 122.6677f },
	{ 397.8519f, 457.1996f, 122.6677f },
	{ 397.8519f, 457.1996f, -132.3714f },
	{ -4.812292f, 457.1996f, -132.3715f },
	{ -4.812288f, 457.1996f, 122.6677f },
	{ -336.787f, -164.6963f, 76.92266f },
	{ -336.7921f, 1.256043f, 76.92266f },
	{ -336.7921f, 1.256043f, 159.3288f },
	{ -336.787f, -164.6963f, 159.3288f },
	{ -424.4024f, 1.255281f, -174.8221f },
	{ -424.3972f, -164.697f, -174.8221f },
	{ -424.3972f, -164.697f, 159.3288f },
	{ -424.4024f, 1.255283f, 159.3288f },
	{ -336.7952f, 456.2458f, 76.92266f },
	{ -424.4054f, 456.2451f, 76.92266f },
	{ -424.4054f, 456.2451f, 159.3288f },
	{ -336.7952f, 456.2458f, 159.3288f },
	{ -424.4054f, 456.2451f, -174.8221f },
	{ 98.70609f, -0.08917899f, 161.633f },
	{ -44.22181f, -0.089178f, 161.633f },
	{ -43.3121f, -166.4565f, 161.6332f },
	{ 147.1426f, -0.08917999f, 89.27549f },
	{ 99.21783f, -166.4565f, 161.6331f },
	{ 146.8532f, -166.4565f, 96.78191f },
	{ 271.2117f, 340.2763f, 161.6331f },
	{ 434.8517f, 457.1996f, 161.6331f },
	{ 236.0559f, 340.2763f, 161.4888f },
	{ 243.1932f, 293.8476f, 116.1586f },
	{ 147.177f, 335.4474f, 116.1586f },
	{ 98.62501f, 381.8761f, 161.633f },
	{ 147.1884f, 381.8761f, 161.4888f },
	{ -44.51022f, 457.1995f, 161.6329f },
	{ 243.2451f, -0.08917999f, 89.27549f },
	{ 278.3588f, -0.08917999f, 161.6331f },
	{ 243.6814f, -166.4565f, 96.78189f },
	{ 434.8517f, -0.089181f, 161.6331f },
	{ 434.8517f, -166.4565f, 161.6331f },
	{ -44.36604f, -0.08917899f, -82.56734f },
	{ 434.8517f, -0.089182f, -174.6829f },
	{ 434.8517f, 457.1996f, -174.6829f },
	{ 434.8517f, -166.4565f, -174.6829f },
	{ -243.1039f, 1.256462f, -8.197344f },
	{ -243.1039f, 1.256462f, 76.92266f },
	{ -243.0987f, -164.6956f, 76.92266f },
	{ -243.0987f, -164.6956f, -8.197343f },
	{ -243.1069f, 456.2464f, -8.197346f },
	{ -243.1069f, 456.2464f, -174.8221f },
	{ -243.1069f, 456.2464f, 76.92266f },
	{ -142.1313f, 1.257773f, -82.06689f },
	{ -142.1312f, 1.257774f, -8.197344f },
	{ -142.126f, -164.6945f, -8.197343f },
	{ -142.1342f, 456.2476f, -8.197347f },
	{ -142.1342f, 456.2476f, -82.06689f },
	{ -142.1342f, 456.2476f, -174.8221f },
	{ -44.51016f, 457.1996f, -174.6829f },
	{ -44.51022f, 457.1995f, -82.56738f },
	{ -44.51017f, -166.4565f, -174.6829f },
	{ -142.126f, -164.6945f, -174.8221f },
	{ -142.1313f, 1.257773f, -174.8221f },
	{ -142.126f, -164.6945f, -82.06679f },
	{ 2.737688f, 686.4005f, -115.2873f },
	{ -43.91116f, -166.4565f, -82.56726f },
	{ 278.5294f, -166.4565f, 161.6331f },
	{ -44.51016f, -0.08917999f, -174.6829f },
	{ -4.812291f, 485.7102f, -132.3715f },
	{ -4.812288f, 485.7102f, 122.6677f },
	{ 397.8519f, 485.7102f, 122.6677f },
	{ 397.8519f, 485.7102f, -132.3714f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000588F4[] = {
	{ -0.505033f, 0.775966f, 0.377914f },
	{ -0.67731f, 0.728651f, 0.10158f },
	{ -0.67731f, 0.728651f, -0.101579f },
	{ 0.5050279f, 0.775968f, -0.377915f },
	{ 0.505029f, 0.775968f, 0.377914f },
	{ 0.647881f, 0.330566f, 0.686277f },
	{ 0.647881f, 0.330564f, -0.686278f },
	{ 0.67731f, 0.728651f, -0.101579f },
	{ 0.67731f, 0.728651f, 0.10158f },
	{ -0.647881f, 0.330563f, -0.686278f },
	{ -0.64788f, 0.330565f, 0.686278f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.705829f, -0.060097f, -0.705829f },
	{ -0.301512f, 0.904534f, -0.301511f },
	{ -0.311025f, 0.898068f, 0.311025f },
	{ 0.707101f, 0.000022f, 0.707112f },
	{ 0.70711f, 0.000013f, 0.707104f },
	{ 0.707104f, 0.000013f, 0.70711f },
	{ 0.707112f, 0.000022f, 0.7071019f },
	{ -0.70711f, -0.00014f, -0.707104f },
	{ -0.7071019f, -0.00023f, -0.707112f },
	{ -0.707101f, -0.00022f, 0.707112f },
	{ -0.70711f, -0.00014f, 0.707104f },
	{ 0.301504f, 0.904537f, 0.30151f },
	{ -0.707112f, 0.7071019f, 0 },
	{ -0.577354f, 0.577346f, 0.57735f },
	{ 0.577346f, 0.577355f, 0.57735f },
	{ -0.577354f, 0.577346f, -0.57735f },
	{ 0.470689f, 0.000774f, 0.8822989f },
	{ -0.707236f, -0.001788f, 0.706975f },
	{ -0.7049969f, -0.003854f, 0.7092f },
	{ 0.454364f, -0.009183f, 0.8907689f },
	{ 0.458293f, 0.010324f, 0.888741f },
	{ 0.457021f, 0.039298f, 0.888587f },
	{ -0.12224f, -0.133396f, 0.983495f },
	{ 0.598813f, -0.531637f, 0.598987f },
	{ -0.112562f, -0.419162f, 0.900907f },
	{ -0.473233f, -0.266162f, 0.839767f },
	{ 0.166027f, -0.387271f, 0.906894f },
	{ 0.110828f, -0.110401f, 0.987689f },
	{ -0.066989f, -0.331582f, 0.941045f },
	{ -0.577404f, 0.577249f, 0.5773979f },
	{ -0.5217659f, -0.01738f, 0.852911f },
	{ -0.523095f, -0.007267f, 0.8522429f },
	{ -0.525315f, 0.028524f, 0.85043f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ -0.704845f, -0.001156f, 0.709361f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.705829f, 0.060097f, -0.705829f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.70711f, 0.000014f, 0.707104f },
	{ 0.707104f, 0.000014f, 0.70711f },
	{ 0.707112f, 0.000022f, 0.707101f },
	{ 0.7071019f, 0.000022f, 0.7071109f },
	{ 0.301504f, 0.9045359f, 0.301512f },
	{ -0.00007f, 0.7071069f, -0.7071069f },
	{ 0.577347f, 0.577354f, 0.57735f },
	{ 0.708915f, 0.000014f, 0.705294f },
	{ 0.707104f, 0.000013f, 0.70711f },
	{ 0.7071109f, 0.000022f, 0.7071019f },
	{ 0.577345f, 0.577356f, 0.57735f },
	{ 0.300353f, 0.904219f, 0.303606f },
	{ -0.002937f, 0.705839f, -0.708366f },
	{ -0.002954f, 0.708354f, -0.705851f },
	{ -0.302724f, 0.904799f, 0.299495f },
	{ 0.000709f, 0, -1 },
	{ 0.000717f, 0, -1 },
	{ 0.000713f, 0, -1 },
	{ 0.704908f, 0.000023f, 0.709299f },
	{ -0.5050319f, 0.775965f, -0.377916f },
	{ -0.709536f, -0.002692f, 0.7046649f },
	{ -0.512909f, -0.000526f, 0.858443f },
	{ 0.000713f, 0, -1 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00058C9C = { vertex_0005854C, normal_000588F4, LengthOfArray<Sint32>(vertex_0005854C), meshlist_00058414, matlist_00057D24, LengthOfArray<Uint16>(meshlist_00058414), LengthOfArray<Uint16>(matlist_00057D24), { 5.223206f, 266.6079f, -6.594482f }, 690.2472f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00058CC4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00058C9C, 6008.01f, 37, -1903.988f, 0xFFFF8D04, 0xFFFFD13F, 0x7641, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00058CF8[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 92, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 85, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 84, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 107, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 91, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 129, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 134, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 132, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 130, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 133, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 128, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 131, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 135, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00058DFC[] = {
	4, 2, 3, 1, 0,
	4, 15, 14, 18, 19,
	4, 29, 25, 27, 24,
	4, 188, 186, 41, 187
};

extern "C" __declspec(dllexport) Sint16 poly_00058E24[] = {
	4, 5, 3, 4, 2,
	4, 7, 1, 6, 0,
	4, 6, 0, 5, 3,
	4, 4, 2, 7, 1,
	4, 24, 25, 23, 22,
	4, 27, 24, 26, 23,
	4, 29, 27, 28, 26,
	4, 25, 29, 22, 28
};

extern "C" __declspec(dllexport) Sint16 poly_00058E74[] = {
	10, 34, 32, 31, 33, 30, 37, 36, 35, 34, 32,
	10, 8, 21, 39, 20, 38, 10, 9, 11, 8, 21
};

extern "C" __declspec(dllexport) Sint16 poly_00058EA0[] = {
	4, 18, 19, 17, 16,
	0x8000u | 6, 17, 18, 12, 15, 13, 14,
	4, 16, 19, 13, 14
};

extern "C" __declspec(dllexport) Sint16 poly_00058EC2[] = {
	4, 11, 10, 21, 20,
	4, 35, 37, 32, 33
};

extern "C" __declspec(dllexport) Sint16 poly_00058ED6[] = {
	4, 185, 40, 184, 183
};

extern "C" __declspec(dllexport) Sint16 poly_00058EE0[] = {
	0x8000u | 12, 168, 170, 182, 181, 177, 176, 175, 178, 180, 179, 172, 174
};

extern "C" __declspec(dllexport) Sint16 poly_00058EFA[] = {
	4, 184, 183, 91, 90,
	8, 91, 92, 184, 186, 185, 188, 161, 159,
	4, 161, 162, 185, 40
};

extern "C" __declspec(dllexport) Sint16 poly_00058F20[] = {
	0x8000u | 8, 48, 47, 49, 46, 44, 43, 45, 42,
	0x8000u | 8, 50, 53, 51, 52, 54, 57, 55, 56,
	0x8000u | 8, 58, 61, 59, 60, 62, 65, 63, 64,
	0x8000u | 8, 66, 69, 67, 68, 70, 73, 71, 72,
	0x8000u | 8, 74, 77, 75, 76, 78, 81, 79, 80,
	0x8000u | 8, 82, 85, 83, 84, 86, 89, 87, 88
};

extern "C" __declspec(dllexport) Sint16 poly_00058F8C[] = {
	4, 187, 186, 93, 92,
	3, 188, 41, 159,
	0x8000u | 5, 159, 158, 41, 93, 187
};

extern "C" __declspec(dllexport) Sint16 poly_00058FAA[] = {
	0x8000u | 8, 100, 99, 101, 98, 96, 95, 97, 94,
	0x8000u | 8, 102, 105, 103, 104, 106, 109, 107, 108,
	0x8000u | 8, 116, 115, 117, 114, 112, 111, 113, 110,
	0x8000u | 8, 124, 123, 125, 122, 120, 119, 121, 118,
	0x8000u | 8, 126, 129, 127, 128, 130, 133, 131, 132,
	0x8000u | 8, 134, 137, 135, 136, 138, 141, 139, 140,
	0x8000u | 8, 148, 147, 149, 146, 144, 143, 145, 142,
	0x8000u | 8, 156, 155, 157, 154, 152, 151, 153, 150
};

extern "C" __declspec(dllexport) Sint16 poly_0005903A[] = {
	4, 165, 166, 164, 163
};

extern "C" __declspec(dllexport) Sint16 poly_00059044[] = {
	0x8000u | 5, 168, 167, 169, 171, 173,
	3, 168, 170, 169,
	4, 173, 174, 171, 172
};

NJS_TEX uv_00059064[] = {
	{ 74, -139 },
	{ 155, -139 },
	{ 74, -30 },
	{ 155, -30 },
	{ 508, -255 },
	{ 508, 254 },
	{ 0, -255 },
	{ 0, 254 },
	{ 342, 206 },
	{ 55, 206 },
	{ 342, -1 },
	{ 55, -1 },
	{ 0, -255 },
	{ 508, -255 },
	{ 0, 254 },
	{ 508, 254 }
};

NJS_TEX uv_000590A4[] = {
	{ 89, 255 },
	{ 89, 0 },
	{ 17, 255 },
	{ 17, 0 },
	{ 17, 255 },
	{ 17, 0 },
	{ 89, 255 },
	{ 89, 0 },
	{ 253, 1 },
	{ 1, 1 },
	{ 255, 254 },
	{ 0, 254 },
	{ 253, 1 },
	{ 1, 1 },
	{ 255, 254 },
	{ 0, 254 },
	{ 253, 1 },
	{ 1, 1 },
	{ 255, 254 },
	{ 0, 254 },
	{ 253, 1 },
	{ 1, 1 },
	{ 255, 254 },
	{ 0, 254 },
	{ 253, 1 },
	{ 1, 1 },
	{ 255, 254 },
	{ 0, 254 },
	{ 0, 31 },
	{ 255, 31 },
	{ 0, 254 },
	{ 255, 254 }
};

NJS_TEX uv_00059124[] = {
	{ 113, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 113, 0 },
	{ 113, 255 },
	{ 113, 0 },
	{ 113, 255 },
	{ 0 },
	{ 254, 255 },
	{ 141, 0 },
	{ 141, 255 },
	{ 141, 0 },
	{ 141, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 141, 0 }
};

NJS_TEX uv_00059174[] = {
	{ 2040, 0 },
	{ 1, 0 },
	{ 2040, 254 },
	{ 1, 254 },
	{ 0, 254 },
	{ 0 },
	{ 2039, 254 },
	{ 2039, 0 },
	{ 1, 254 },
	{ 1, 0 },
	{ 0, 254 },
	{ 0 },
	{ 2039, 254 },
	{ 2039, 0 }
};

NJS_TEX uv_000591AC[] = {
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 }
};

NJS_TEX uv_000591CC[] = {
	{ 9, 195 },
	{ 14, 254 },
	{ 2025, 195 },
	{ 2024, 254 }
};

NJS_TEX uv_000591DC[] = {
	{ 0, 254 },
	{ 0 },
	{ 10, 254 },
	{ 10, 0 },
	{ 12, 254 },
	{ 12, 0 },
	{ 242, 254 },
	{ 242, 0 },
	{ 245, 254 },
	{ 245, 0 },
	{ 255, 254 },
	{ 255, 0 }
};

NJS_TEX uv_0005920C[] = {
	{ 486, 11 },
	{ 482, 16 },
	{ 486, 254 },
	{ 482, 254 },
	{ 486, 254 },
	{ 508, 254 },
	{ 486, 11 },
	{ 508, 0 },
	{ 24, 11 },
	{ 0 },
	{ 23, 254 },
	{ 0, 254 },
	{ 23, 254 },
	{ 27, 254 },
	{ 24, 11 },
	{ 27, 16 }
};

NJS_TEX uv_0005924C[] = {
	{ 0 },
	{ 2294, 0 },
	{ 0, 57 },
	{ 2294, 57 },
	{ 0, 197 },
	{ 2294, 197 },
	{ 0, 254 },
	{ 2294, 254 },
	{ 2294, 255 },
	{ 0, 255 },
	{ 2294, 197 },
	{ 0, 197 },
	{ 2294, 57 },
	{ 0, 57 },
	{ 2294, 0 },
	{ 0 },
	{ 2294, 245 },
	{ 0, 245 },
	{ 2294, 188 },
	{ 0, 188 },
	{ 2294, 48 },
	{ 0, 48 },
	{ 2294, -8 },
	{ 0, -8 },
	{ 2294, 243 },
	{ 0, 243 },
	{ 2294, 186 },
	{ 0, 186 },
	{ 2294, 46 },
	{ 0, 46 },
	{ 2294, -10 },
	{ 0, -10 },
	{ 2294, 241 },
	{ 0, 241 },
	{ 2294, 184 },
	{ 0, 184 },
	{ 2294, 44 },
	{ 0, 44 },
	{ 2294, -12 },
	{ 0, -12 },
	{ 2294, 239 },
	{ 0, 239 },
	{ 2294, 182 },
	{ 0, 182 },
	{ 2294, 42 },
	{ 0, 42 },
	{ 2294, -14 },
	{ 0, -14 }
};

NJS_TEX uv_0005930C[] = {
	{ 0, -254 },
	{ 504, -254 },
	{ 0, 254 },
	{ 510, 254 },
	{ 504, -255 },
	{ 0, -255 },
	{ 510, 254 },
	{ 510, 254 },
	{ 0, 254 },
	{ 0, -255 },
	{ 510, 254 },
	{ 504, -254 }
};

NJS_TEX uv_0005933C[] = {
	{ 254, -2039 },
	{ 254, 254 },
	{ 217, -2039 },
	{ 217, 254 },
	{ 37, -2039 },
	{ 37, 254 },
	{ 0, -2039 },
	{ 0, 254 },
	{ 0, 255 },
	{ 0, -2294 },
	{ 37, 255 },
	{ 37, -2294 },
	{ 217, 255 },
	{ 217, -2294 },
	{ 255, 255 },
	{ 255, -2294 },
	{ 255, -2294 },
	{ 254, 255 },
	{ 217, -2294 },
	{ 217, 255 },
	{ 37, -2294 },
	{ 37, 255 },
	{ 0, -2294 },
	{ 0, 255 },
	{ 254, -2294 },
	{ 254, 255 },
	{ 217, -2294 },
	{ 217, 255 },
	{ 37, -2294 },
	{ 37, 255 },
	{ 0, -2294 },
	{ 0, 255 },
	{ 0, 254 },
	{ 0, -2294 },
	{ 37, 254 },
	{ 37, -2294 },
	{ 216, 254 },
	{ 217, -2294 },
	{ 254, 254 },
	{ 254, -2294 },
	{ 0, 254 },
	{ 0, -2294 },
	{ 37, 254 },
	{ 37, -2294 },
	{ 217, 254 },
	{ 217, -2294 },
	{ 254, 254 },
	{ 255, -2294 },
	{ 255, -2295 },
	{ 254, 254 },
	{ 217, -2294 },
	{ 217, 254 },
	{ 37, -2294 },
	{ 37, 254 },
	{ 0, -2295 },
	{ 0, 254 },
	{ 254, -2295 },
	{ 254, 254 },
	{ 217, -2294 },
	{ 217, 254 },
	{ 37, -2294 },
	{ 37, 254 },
	{ 0, -2295 },
	{ 0, 254 }
};

NJS_TEX uv_0005943C[] = {
	{ 254, 0 },
	{ 0 },
	{ 254, 254 },
	{ 0, 254 }
};

NJS_TEX uv_0005944C[] = {
	{ 506, 253 },
	{ 3, 253 },
	{ 3, 1 },
	{ 506, 253 },
	{ 506, 1 },
	{ 506, 253 },
	{ 506, 1 },
	{ 3, 1 },
	{ 3, 1 },
	{ 506, 1 },
	{ 3, 253 },
	{ 506, 253 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0005947C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00058DFC, NULL, NULL, NULL, uv_00059064, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 8, poly_00058E24, NULL, NULL, NULL, uv_000590A4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_00058E74, NULL, NULL, NULL, uv_00059124, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 3, poly_00058EA0, NULL, NULL, NULL, uv_00059174, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_00058EC2, NULL, NULL, NULL, uv_000591AC, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_00058ED6, NULL, NULL, NULL, uv_000591CC, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 1, poly_00058EE0, NULL, NULL, NULL, uv_000591DC, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 3, poly_00058EFA, NULL, NULL, NULL, uv_0005920C, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 6, poly_00058F20, NULL, NULL, NULL, uv_0005924C, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 3, poly_00058F8C, NULL, NULL, NULL, uv_0005930C, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 8, poly_00058FAA, NULL, NULL, NULL, uv_0005933C, NULL },
	{ NJD_MESHSET_TRIMESH | 11, 1, poly_0005903A, NULL, NULL, NULL, uv_0005943C, NULL },
	{ NJD_MESHSET_TRIMESH | 12, 3, poly_00059044, NULL, NULL, NULL, uv_0005944C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000595B4[] = {
	{ -74.00767f, 526.2867f, -0.235334f },
	{ -133.6596f, 526.2867f, -0.235334f },
	{ -133.6596f, 526.2867f, 59.4165f },
	{ -74.00767f, 526.2867f, 59.4165f },
	{ -133.6596f, 484.3846f, 59.4165f },
	{ -74.00767f, 484.3846f, 59.4165f },
	{ -74.00767f, 484.3846f, -0.235394f },
	{ -133.6596f, 484.3846f, -0.235394f },
	{ -20.4027f, 520.9407f, -34.11332f },
	{ -20.4027f, 520.9407f, -74.13429f },
	{ -20.4027f, 536.8128f, -74.13423f },
	{ -20.4027f, 536.8128f, -34.11332f },
	{ 187.2721f, 438.1997f, 123.2453f },
	{ 187.2721f, 438.1997f, -157.4672f },
	{ 187.2721f, 485.962f, -157.4672f },
	{ 187.2721f, 485.962f, 123.2453f },
	{ -188.4764f, 438.1997f, -157.4672f },
	{ -188.4764f, 438.1997f, 123.2453f },
	{ -188.4764f, 485.962f, 123.2453f },
	{ -188.4764f, 485.962f, -157.4672f },
	{ -63.82566f, 536.8128f, -74.13423f },
	{ -63.82566f, 536.8128f, -34.11332f },
	{ -147.9203f, 484.3914f, -130.9092f },
	{ -147.9203f, 484.3914f, -16.05679f },
	{ -147.9203f, 521.1038f, -16.05673f },
	{ -147.9203f, 521.1038f, -130.9092f },
	{ 63.69192f, 484.3914f, -16.05679f },
	{ 63.69192f, 521.1038f, -16.05673f },
	{ 63.69192f, 484.3914f, -130.9092f },
	{ 63.69192f, 521.1038f, -130.9092f },
	{ -118.2299f, 520.9407f, -74.13429f },
	{ -118.2299f, 520.9407f, -34.11332f },
	{ -118.2299f, 536.8128f, -34.11332f },
	{ -118.2299f, 536.8128f, -74.13423f },
	{ -74.80698f, 520.9407f, -34.11332f },
	{ -74.80698f, 536.8128f, -34.11332f },
	{ -74.80698f, 520.9407f, -74.13429f },
	{ -74.80698f, 536.8128f, -74.13423f },
	{ -63.82566f, 520.9407f, -74.13429f },
	{ -63.82566f, 520.9407f, -34.11332f },
	{ -196.8124f, 410.464f, 132.5234f },
	{ -220.4955f, 439.523f, -168.3889f },
	{ 207.5024f, 341.1636f, 132.8491f },
	{ 207.5024f, 352.527f, 149.7226f },
	{ -209.5299f, 352.527f, 149.7225f },
	{ -209.5299f, 341.1636f, 132.8488f },
	{ 207.5024f, 380.2433f, 149.7226f },
	{ 207.5024f, 391.6067f, 132.8491f },
	{ -209.5299f, 391.6067f, 132.8488f },
	{ -209.5299f, 380.2433f, 149.7225f },
	{ 207.5024f, 274.3776f, 132.8492f },
	{ 207.5024f, 285.7414f, 149.7227f },
	{ -209.5299f, 285.7414f, 149.7227f },
	{ -209.5299f, 274.3776f, 132.8491f },
	{ 207.5024f, 313.4576f, 149.7227f },
	{ 207.5024f, 324.8212f, 132.8492f },
	{ -209.5299f, 324.821f, 132.8491f },
	{ -209.5299f, 313.4576f, 149.7227f },
	{ 207.5024f, 207.5919f, 132.8492f },
	{ 207.5024f, 218.9557f, 149.7227f },
	{ -209.5299f, 218.9556f, 149.7226f },
	{ -209.5299f, 207.5919f, 132.8491f },
	{ 207.5024f, 246.6718f, 149.7227f },
	{ 207.5024f, 258.0352f, 132.8492f },
	{ -209.5299f, 258.0352f, 132.8491f },
	{ -209.5299f, 246.6718f, 149.7226f },
	{ 207.5024f, 140.8062f, 132.8491f },
	{ 207.5024f, 152.1699f, 149.7227f },
	{ -209.5299f, 152.1698f, 149.7226f },
	{ -209.5299f, 140.8062f, 132.8489f },
	{ 207.5024f, 179.886f, 149.7227f },
	{ 207.5024f, 191.2495f, 132.8491f },
	{ -209.5299f, 191.2494f, 132.8489f },
	{ -209.5299f, 179.886f, 149.7226f },
	{ 207.5024f, 74.02049f, 132.8491f },
	{ 207.5024f, 85.38417f, 149.7227f },
	{ -209.5299f, 85.38417f, 149.7226f },
	{ -209.5299f, 74.02049f, 132.8491f },
	{ 207.5024f, 113.1003f, 149.7227f },
	{ 207.5024f, 124.4638f, 132.8492f },
	{ -209.5299f, 124.4638f, 132.8491f },
	{ -209.5299f, 113.1002f, 149.7226f },
	{ 207.5024f, 7.234707f, 132.8489f },
	{ 207.5024f, 18.59837f, 149.7225f },
	{ -209.5299f, 18.59837f, 149.7225f },
	{ -209.5299f, 7.234648f, 132.8488f },
	{ 207.5024f, 46.31448f, 149.7225f },
	{ 207.5024f, 57.67798f, 132.8489f },
	{ -209.5299f, 57.67791f, 132.8488f },
	{ -209.5299f, 46.31445f, 149.7225f },
	{ 197.7898f, 0.003933f, 133.285f },
	{ 200.6457f, 0.003933f, 168.5526f },
	{ 220.4057f, 0.003933f, 168.6045f },
	{ 220.4057f, 0.003887f, -167.9501f },
	{ 150.2332f, 0.003933f, 138.0289f },
	{ 154.3468f, 0.003933f, 159.0612f },
	{ 154.3473f, 431.5988f, 159.0616f },
	{ 150.2337f, 431.5988f, 138.0291f },
	{ 173.7276f, 0.003933f, 159.0612f },
	{ 177.8417f, 0.003933f, 138.0289f },
	{ 177.8417f, 431.5988f, 138.0291f },
	{ 173.7281f, 431.5988f, 159.0616f },
	{ 103.5323f, 0.003933f, 138.0289f },
	{ 107.6459f, 0.003933f, 159.0612f },
	{ 107.6459f, 431.5986f, 159.0616f },
	{ 103.5323f, 431.5986f, 138.0291f },
	{ 127.0267f, 0.003933f, 159.0612f },
	{ 131.1403f, 0.003933f, 138.0289f },
	{ 131.1403f, 431.5986f, 138.0291f },
	{ 127.0267f, 431.5986f, 159.0616f },
	{ 56.83134f, 0.003933f, 138.0288f },
	{ 60.94492f, 0.003933f, 159.0612f },
	{ 60.94539f, 431.5986f, 159.0615f },
	{ 56.83182f, 431.5986f, 138.029f },
	{ 80.32577f, 0.003933f, 159.0612f },
	{ 84.43935f, 0.003933f, 138.0288f },
	{ 84.43983f, 431.5986f, 138.029f },
	{ 80.32624f, 431.5986f, 159.0615f },
	{ 10.13041f, 0.003934f, 138.0288f },
	{ 14.24399f, 0.003934f, 159.0612f },
	{ 14.24446f, 431.5986f, 159.0615f },
	{ 10.13088f, 431.5986f, 138.029f },
	{ 33.62484f, 0.003934f, 159.0612f },
	{ 37.73842f, 0.003934f, 138.0288f },
	{ 37.73889f, 431.5986f, 138.029f },
	{ 33.62532f, 431.5986f, 159.0615f },
	{ -36.57052f, 0.003934f, 138.0288f },
	{ -32.45694f, 0.003934f, 159.0612f },
	{ -32.45647f, 431.5988f, 159.0615f },
	{ -36.57004f, 431.5988f, 138.029f },
	{ -13.07609f, 0.003934f, 159.0612f },
	{ -8.962514f, 0.003934f, 138.0288f },
	{ -8.962039f, 431.5988f, 138.029f },
	{ -13.07562f, 431.5988f, 159.0615f },
	{ -83.27145f, 0.003934f, 138.0288f },
	{ -79.15787f, 0.003934f, 159.0612f },
	{ -79.15739f, 431.5988f, 159.0615f },
	{ -83.27097f, 431.5988f, 138.0289f },
	{ -59.77702f, 0.003934f, 159.0612f },
	{ -55.66344f, 0.003934f, 138.0288f },
	{ -55.66297f, 431.5988f, 138.0289f },
	{ -59.77654f, 431.5988f, 159.0615f },
	{ -129.9724f, 0.003934f, 138.0288f },
	{ -125.8588f, 0.003934f, 159.0612f },
	{ -125.8583f, 431.5988f, 159.0615f },
	{ -129.9719f, 431.5989f, 138.0289f },
	{ -106.478f, 0.003934f, 159.0612f },
	{ -102.3644f, 0.003934f, 138.0288f },
	{ -102.3639f, 431.5989f, 138.0289f },
	{ -106.4775f, 431.5988f, 159.0615f },
	{ -176.6723f, 0.003935f, 138.0288f },
	{ -172.5592f, 0.003935f, 159.0612f },
	{ -172.5588f, 431.5988f, 159.0615f },
	{ -176.6724f, 431.5989f, 138.0289f },
	{ -153.1779f, 0.003934f, 159.0612f },
	{ -149.0648f, 0.003934f, 138.0288f },
	{ -149.0644f, 431.5989f, 138.0289f },
	{ -153.1779f, 431.5988f, 159.0615f },
	{ -219.6517f, 0.003889f, -168.0281f },
	{ -219.6522f, 0.003935f, 168.6042f },
	{ -220.495f, 439.523f, -168.6345f },
	{ -199.8034f, 0.003935f, 168.5524f },
	{ -196.9657f, 0.003935f, 133.2848f },
	{ -213.8956f, -67.96367f, 139.3945f },
	{ 215.4197f, -67.96367f, 139.3945f },
	{ 215.4197f, 439.5162f, 139.3946f },
	{ -213.8956f, 439.5162f, 139.3946f },
	{ -220.4969f, -200.0209f, -168.391f },
	{ -220.4969f, -200.0209f, 168.6346f },
	{ -220.4969f, -0.094515f, -168.391f },
	{ -220.4969f, -0.625185f, 168.6346f },
	{ 220.4968f, -200.0209f, -168.391f },
	{ 220.4968f, -200.0209f, 168.6346f },
	{ 220.4968f, -0.09451699f, -168.391f },
	{ 220.4968f, -0.625187f, 168.6346f },
	{ 198.6044f, -200.0209f, 158.8764f },
	{ -198.2897f, -0.625185f, 158.8764f },
	{ -198.2897f, -200.0209f, 158.8764f },
	{ 198.6044f, -0.625187f, 158.8764f },
	{ 203.2404f, -0.625187f, 168.4876f },
	{ 203.2404f, -200.0209f, 168.4876f },
	{ -203.1353f, -0.625185f, 168.4876f },
	{ -203.1353f, -200.0209f, 168.4876f },
	{ 196.9819f, 410.4644f, 132.5235f },
	{ 199.8198f, 419.313f, 165.1568f },
	{ -199.6468f, 419.313f, 165.1568f },
	{ 220.3572f, 439.5179f, 165.1568f },
	{ 220.3574f, 439.5179f, -168.3887f },
	{ -220.4957f, 439.523f, 165.1567f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00059E90[] = {
	{ 0.57735f, 0.577351f, -0.57735f },
	{ -0.57735f, 0.577351f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.707106f, 0.000001f, -0.7071069f },
	{ -0.707106f, 0.000001f, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.707106f, 0.000003f, -0.707108f },
	{ 0.57735f, 0.577351f, -0.5773489f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.577351f, -0.5773489f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, -0.00001f, 0.707106f },
	{ -0.57735f, 0.57735f, 0.577351f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.7071069f, -0.00001f, 0.707106f },
	{ 0.57735f, 0.57735f, 0.577351f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.707106f, 0.000003f, -0.707108f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.577351f, -0.5773489f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.707106f, 0.000003f, -0.707108f },
	{ 0.57735f, 0.577351f, -0.5773489f },
	{ -0.707106f, 0.000003f, -0.707108f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.731755f, -0.6399119f, 0.234621f },
	{ -0.577857f, 0.5766349f, -0.577559f },
	{ 0, -0.829448f, 0.558584f },
	{ 0, -0.469796f, 0.8827749f },
	{ 0, -0.469796f, 0.8827749f },
	{ 0, -0.829448f, 0.558584f },
	{ 0, 0.469796f, 0.8827749f },
	{ 0, 0.829448f, 0.558584f },
	{ 0, 0.829448f, 0.558584f },
	{ 0, 0.469796f, 0.8827749f },
	{ 0, -0.82944f, 0.558596f },
	{ 0, -0.469789f, 0.8827789f },
	{ 0, -0.469789f, 0.8827789f },
	{ 0, -0.82944f, 0.558596f },
	{ 0, 0.469794f, 0.882776f },
	{ -0.00001f, 0.829446f, 0.558587f },
	{ -0.00001f, 0.829446f, 0.558587f },
	{ 0, 0.469794f, 0.882776f },
	{ 0, -0.82944f, 0.558596f },
	{ 0, -0.469789f, 0.8827789f },
	{ 0, -0.469789f, 0.8827789f },
	{ 0, -0.82944f, 0.558596f },
	{ 0, 0.469794f, 0.882776f },
	{ 0, 0.829446f, 0.558587f },
	{ 0, 0.829446f, 0.558587f },
	{ 0, 0.469794f, 0.882776f },
	{ 0, -0.829443f, 0.558592f },
	{ 0, -0.469791f, 0.882777f },
	{ 0, -0.469792f, 0.882777f },
	{ 0, -0.829443f, 0.558592f },
	{ 0, 0.469796f, 0.8827749f },
	{ 0, 0.829449f, 0.558583f },
	{ 0, 0.829449f, 0.558583f },
	{ 0, 0.469796f, 0.8827749f },
	{ 0, -0.829441f, 0.558594f },
	{ 0, -0.46979f, 0.882778f },
	{ 0, -0.46979f, 0.882778f },
	{ 0, -0.829441f, 0.558594f },
	{ 0, 0.469793f, 0.882777f },
	{ 0, 0.829444f, 0.558589f },
	{ 0, 0.829444f, 0.558589f },
	{ 0, 0.469793f, 0.882777f },
	{ 0, -0.829441f, 0.5585949f },
	{ 0, -0.46979f, 0.882778f },
	{ 0, -0.46979f, 0.882778f },
	{ 0, -0.829441f, 0.5585949f },
	{ 0, 0.469794f, 0.882776f },
	{ 0, 0.8294449f, 0.558588f },
	{ 0, 0.8294449f, 0.558588f },
	{ 0, 0.469794f, 0.882776f },
	{ -0.996488f, -0.001285f, 0.08372799f },
	{ -0.676587f, 0.004465f, 0.736349f },
	{ 0.703502f, 0.005652f, 0.7106709f },
	{ 0.707419f, -0.000565f, -0.706794f },
	{ -0.981405f, 0.000001f, 0.191946f },
	{ -0.635632f, 0, 0.771993f },
	{ -0.635631f, 0, 0.771993f },
	{ -0.981405f, 0.000001f, 0.191946f },
	{ 0.635627f, -0.00001f, 0.771996f },
	{ 0.9814039f, 0, 0.191956f },
	{ 0.9814039f, 0, 0.191956f },
	{ 0.635627f, -0.00001f, 0.771996f },
	{ -0.981405f, 0, 0.191946f },
	{ -0.635631f, -0.00001f, 0.771993f },
	{ -0.635631f, -0.00001f, 0.771993f },
	{ -0.981405f, 0, 0.191946f },
	{ 0.635631f, -0.00001f, 0.771993f },
	{ 0.981405f, 0, 0.191946f },
	{ 0.981405f, 0, 0.191946f },
	{ 0.635631f, -0.00001f, 0.771993f },
	{ -0.981406f, 0.000001f, 0.191945f },
	{ -0.635632f, 0, 0.771992f },
	{ -0.635631f, 0, 0.771993f },
	{ -0.981406f, 0.000001f, 0.191945f },
	{ 0.635631f, -0.00001f, 0.771993f },
	{ 0.981406f, -0.00001f, 0.191945f },
	{ 0.981406f, -0.00001f, 0.191945f },
	{ 0.635632f, -0.00001f, 0.771992f },
	{ -0.981406f, 0.000001f, 0.191945f },
	{ -0.635632f, 0, 0.771992f },
	{ -0.635631f, 0, 0.771993f },
	{ -0.981406f, 0.000001f, 0.191945f },
	{ 0.635631f, -0.00001f, 0.771993f },
	{ 0.981406f, -0.00001f, 0.191945f },
	{ 0.981406f, -0.00001f, 0.191945f },
	{ 0.635632f, -0.00001f, 0.771992f },
	{ -0.981406f, 0.000001f, 0.191945f },
	{ -0.635632f, 0, 0.771992f },
	{ -0.635631f, 0, 0.771993f },
	{ -0.981406f, 0.000001f, 0.191945f },
	{ 0.635631f, -0.00001f, 0.771993f },
	{ 0.981406f, -0.00001f, 0.191945f },
	{ 0.981406f, -0.00001f, 0.191945f },
	{ 0.635632f, -0.00001f, 0.771993f },
	{ -0.981406f, 0.000001f, 0.191945f },
	{ -0.635632f, 0, 0.771992f },
	{ -0.635631f, 0, 0.771993f },
	{ -0.981406f, 0.000001f, 0.191945f },
	{ 0.635632f, -0.00001f, 0.771993f },
	{ 0.981406f, -0.00001f, 0.191945f },
	{ 0.981406f, -0.00001f, 0.191945f },
	{ 0.635632f, -0.00001f, 0.771992f },
	{ -0.981406f, 0.000001f, 0.191945f },
	{ -0.635632f, 0, 0.771992f },
	{ -0.635632f, 0, 0.771992f },
	{ -0.981406f, 0.000001f, 0.191945f },
	{ 0.635631f, -0.00001f, 0.771993f },
	{ 0.981406f, -0.00001f, 0.191945f },
	{ 0.981406f, -0.00001f, 0.191945f },
	{ 0.635633f, -0.00001f, 0.771991f },
	{ -0.981408f, 0.000001f, 0.191935f },
	{ -0.635636f, 0, 0.771989f },
	{ -0.635637f, 0, 0.771989f },
	{ -0.981408f, 0.000001f, 0.191935f },
	{ 0.635636f, -0.00001f, 0.771989f },
	{ 0.981408f, -0.00001f, 0.191935f },
	{ 0.981408f, -0.00001f, 0.191935f },
	{ 0.635637f, -0.00001f, 0.771988f },
	{ -0.706794f, -0.002f, -0.707416f },
	{ -0.70302f, 0.004401f, 0.711156f },
	{ 0 },
	{ 0.677148f, 0.005355f, 0.735827f },
	{ 0.996527f, -0.000218f, 0.08327299f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.704108f, 0, 0.710093f },
	{ -0.7067519f, 0, -0.707461f },
	{ -0.704467f, 0, 0.7097369f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.70409f, 0, 0.710111f },
	{ 0.7067519f, 0, -0.707461f },
	{ 0.704448f, 0, 0.7097549f },
	{ -0.531766f, 0, 0.846891f },
	{ 0.524317f, 0, 0.851523f },
	{ 0.524317f, 0, 0.851523f },
	{ -0.531766f, 0, 0.846891f },
	{ -0.535367f, 0, 0.844619f },
	{ -0.535367f, 0, 0.844619f },
	{ 0.527917f, 0, 0.849296f },
	{ 0.527917f, 0, 0.849296f },
	{ -0.7312689f, -0.640389f, 0.234834f },
	{ -0.237965f, -0.255178f, 0.937154f },
	{ 0.23795f, -0.254823f, 0.937254f },
	{ 0.577462f, 0.578445f, 0.576141f },
	{ 0.577318f, 0.577113f, -0.57762f },
	{ -0.578046f, 0.577989f, 0.576014f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0005A76C = { vertex_000595B4, normal_00059E90, LengthOfArray<Sint32>(vertex_000595B4), meshlist_0005947C, matlist_00058CF8, LengthOfArray<Uint16>(meshlist_0005947C), LengthOfArray<Uint16>(matlist_00058CF8), { -0.00015f, 168.396f, 0.000015f }, 470.2491f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0005A794 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005A76C, 5308, -110, -6385, 0xFFFFC9B1, 0xFFFFBC20, 0x3C57, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0005A7C8[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 137, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 92, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 88, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 86, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 85, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 91, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 87, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 85, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 137, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 101, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 97, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0005A8A4[] = {
	0x8000u | 7, 3, 4, 18, 10, 19, 1, 0,
	3, 3, 2, 18,
	0x8000u | 5, 13, 9, 6, 1, 10,
	8, 16, 7, 17, 14, 15, 11, 4, 3,
	3, 17, 15, 8,
	0x8000u | 7, 5, 13, 8, 6, 15, 10, 4,
	3, 5, 12, 8,
	3, 28, 21, 23,
	4, 26, 27, 24, 25,
	4, 21, 25, 23, 27,
	0x8000u | 5, 24, 20, 25, 28, 21,
	4, 42, 46, 44, 48,
	4, 46, 42, 49, 44,
	8, 44, 43, 49, 41, 46, 45, 48, 47,
	0x8000u | 5, 286, 52, 53, 51, 50,
	4, 56, 57, 55, 54,
	4, 73, 68, 70, 67,
	4, 60, 61, 59, 58,
	4, 68, 69, 67, 66,
	4, 72, 73, 71, 70,
	4, 76, 77, 75, 74,
	4, 80, 81, 79, 78,
	0x8000u | 8, 87, 86, 62, 65, 89, 88, 63, 64,
	4, 53, 56, 50, 55,
	4, 81, 76, 78, 75,
	4, 59, 87, 60, 86,
	0x8000u | 8, 96, 94, 97, 95, 93, 91, 92, 90,
	0x8000u | 8, 107, 106, 102, 105, 109, 108, 103, 104,
	4, 100, 101, 99, 98,
	4, 99, 107, 100, 106,
	0x8000u | 8, 116, 114, 117, 115, 113, 111, 112, 110,
	0x8000u | 8, 124, 122, 125, 123, 121, 119, 120, 118,
	4, 129, 128, 127, 126,
	0x8000u | 6, 132, 130, 133, 131, 129, 127,
	0x8000u | 8, 140, 138, 141, 139, 137, 135, 136, 134,
	0x8000u | 8, 148, 146, 149, 147, 145, 143, 144, 142,
	0x8000u | 8, 156, 154, 157, 155, 153, 151, 152, 150,
	3, 166, 159, 161,
	4, 159, 163, 161, 165,
	3, 163, 159, 166,
	3, 187, 180, 182,
	0x8000u | 5, 187, 180, 184, 182, 186,
	8, 165, 164, 161, 160, 166, 158, 163, 162,
	4, 207, 206, 205, 204,
	0x8000u | 6, 205, 207, 209, 211, 288, 287,
	3, 212, 213, 214,
	0x8000u | 5, 214, 215, 213, 283, 284,
	3, 213, 282, 284,
	0x8000u | 7, 181, 185, 186, 183, 184, 179, 187,
	3, 181, 182, 186,
	4, 43, 44, 47, 48,
	0x8000u | 5, 27, 23, 22, 28, 20,
	3, 27, 26, 22,
	0x8000u | 8, 289, 292, 195, 193, 191, 189, 190, 188,
	0x8000u | 8, 290, 291, 203, 201, 199, 197, 198, 196
};

extern "C" __declspec(dllexport) Sint16 poly_0005AB42[] = {
	4, 200, 216, 192, 208,
	11, 53, 286, 84, 52, 85, 57, 83, 56, 82, 53, 84,
	4, 82, 84, 83, 85
};

extern "C" __declspec(dllexport) Sint16 poly_0005AB6E[] = {
	0x8000u | 6, 277, 279, 276, 278, 280, 281
};

extern "C" __declspec(dllexport) Sint16 poly_0005AB7C[] = {
	4, 32, 30, 31, 29,
	4, 34, 32, 33, 31,
	4, 30, 34, 29, 33,
	4, 38, 36, 37, 35,
	4, 40, 38, 39, 37,
	4, 36, 40, 35, 39,
	4, 239, 243, 238, 242,
	4, 172, 170, 171, 169,
	4, 241, 239, 240, 238,
	0x8000u | 6, 171, 172, 167, 168, 169, 170,
	0x8000u | 8, 232, 233, 234, 235, 236, 237, 232, 233,
	4, 178, 176, 177, 175,
	0x8000u | 6, 177, 178, 173, 174, 175, 176,
	4, 243, 241, 242, 240
};

extern "C" __declspec(dllexport) Sint16 poly_0005AC18[] = {
	4, 255, 254, 253, 252,
	4, 246, 250, 244, 248,
	4, 254, 258, 252, 256,
	4, 250, 251, 248, 249,
	4, 258, 259, 256, 257,
	4, 251, 247, 249, 245,
	4, 259, 255, 257, 253,
	4, 247, 246, 245, 244,
	4, 262, 266, 260, 264,
	4, 267, 263, 265, 261,
	4, 263, 262, 261, 260,
	4, 266, 267, 264, 265,
	0x8000u | 10, 270, 218, 271, 210, 275, 202, 274, 194, 270, 218,
	4, 270, 274, 268, 272,
	4, 274, 275, 272, 273,
	4, 275, 271, 273, 269,
	4, 271, 270, 269, 268,
	4, 220, 228, 224, 231,
	0x8000u | 10, 216, 210, 200, 218, 192, 194, 208, 202, 216, 210
};

extern "C" __declspec(dllexport) Sint16 poly_0005ACEE[] = {
	4, 251, 250, 247, 246,
	4, 259, 258, 255, 254,
	4, 267, 266, 263, 262
};

extern "C" __declspec(dllexport) Sint16 poly_0005AD0C[] = {
	6, 65, 88, 86, 64, 60, 61,
	4, 73, 72, 68, 69,
	4, 81, 80, 76, 77,
	6, 105, 108, 106, 104, 100, 101,
	6, 62, 87, 89, 59, 63, 58,
	4, 79, 78, 74, 75,
	4, 51, 50, 54, 55,
	6, 102, 107, 109, 99, 103, 98
};

extern "C" __declspec(dllexport) Sint16 poly_0005AD6C[] = {
	8, 224, 231, 225, 230, 221, 229, 220, 228
};

extern "C" __declspec(dllexport) Sint16 poly_0005AD7E[] = {
	4, 283, 284, 219, 285,
	4, 54, 57, 51, 52,
	4, 74, 77, 79, 80,
	4, 58, 61, 63, 64,
	4, 98, 101, 103, 104,
	4, 66, 69, 71, 72,
	4, 217, 285, 282, 284
};

extern "C" __declspec(dllexport) Sint16 poly_0005ADC4[] = {
	0x8000u | 10, 228, 223, 229, 227, 230, 226, 231, 222, 228, 223
};

extern "C" __declspec(dllexport) Sint16 poly_0005ADDA[] = {
	4, 227, 226, 223, 222
};

NJS_TEX uv_0005ADE4[] = {
	{ 237, 7 },
	{ 238, 90 },
	{ 12, 91 },
	{ 237, 183 },
	{ 11, 184 },
	{ 237, 210 },
	{ 10, 255 },
	{ 237, 7 },
	{ 11, 7 },
	{ 12, 91 },
	{ 156, 218 },
	{ 99, 218 },
	{ 99, 182 },
	{ 11, 218 },
	{ 11, 182 },
	{ 242, 89 },
	{ 242, 7 },
	{ 156, 89 },
	{ 156, 7 },
	{ 99, 89 },
	{ 99, 7 },
	{ 11, 89 },
	{ 11, 7 },
	{ 156, 89 },
	{ 99, 89 },
	{ 156, 182 },
	{ 242, 218 },
	{ 156, 218 },
	{ 156, 182 },
	{ 99, 182 },
	{ 99, 89 },
	{ 11, 182 },
	{ 11, 89 },
	{ 242, 218 },
	{ 242, 182 },
	{ 156, 182 },
	{ 250, 91 },
	{ 242, 111 },
	{ 227, 117 },
	{ 222, 5 },
	{ 222, 114 },
	{ 251, 5 },
	{ 251, 109 },
	{ 246, 112 },
	{ 228, 113 },
	{ 253, 118 },
	{ 228, 118 },
	{ 228, 6 },
	{ 253, 6 },
	{ 228, 113 },
	{ 253, 91 },
	{ 250, 109 },
	{ 231, 144 },
	{ 249, 143 },
	{ 223, 138 },
	{ 248, 138 },
	{ 254, 143 },
	{ 236, 144 },
	{ 229, 165 },
	{ 254, 143 },
	{ 254, 143 },
	{ 254, 254 },
	{ 229, 165 },
	{ 229, 254 },
	{ 254, 143 },
	{ 254, 254 },
	{ 229, 165 },
	{ 229, 254 },
	{ 0 },
	{ 0 },
	{ 252, 0 },
	{ 0, 11 },
	{ 252, 11 },
	{ 254, 0 },
	{ 0 },
	{ 254, 11 },
	{ 0, 11 },
	{ 255, 179 },
	{ 0, 179 },
	{ 255, 191 },
	{ 0, 191 },
	{ 254, 84 },
	{ 0, 84 },
	{ 254, 96 },
	{ 0, 96 },
	{ 254, 179 },
	{ 0, 180 },
	{ 254, 190 },
	{ 0, 191 },
	{ 1, 179 },
	{ 252, 178 },
	{ 1, 191 },
	{ 252, 190 },
	{ 254, 44 },
	{ 0, 44 },
	{ 254, 56 },
	{ 0, 56 },
	{ 0, 45 },
	{ 253, 45 },
	{ 0, 55 },
	{ 252, 55 },
	{ 252, 96 },
	{ 252, 84 },
	{ 159, 96 },
	{ 159, 84 },
	{ 100, 96 },
	{ 100, 84 },
	{ 0, 96 },
	{ 0, 84 },
	{ 255, 0 },
	{ 0 },
	{ 255, 11 },
	{ 0, 11 },
	{ 255, 45 },
	{ 0, 45 },
	{ 255, 56 },
	{ 0, 56 },
	{ 0, 96 },
	{ 216, 96 },
	{ 0, 85 },
	{ 216, 85 },
	{ 251, 5 },
	{ 253, 223 },
	{ 223, 5 },
	{ 224, 223 },
	{ 251, 5 },
	{ 253, 223 },
	{ 223, 5 },
	{ 224, 228 },
	{ 253, 142 },
	{ 253, 133 },
	{ 102, 143 },
	{ 102, 133 },
	{ 88, 143 },
	{ 88, 133 },
	{ 0, 143 },
	{ 0, 132 },
	{ 253, 133 },
	{ 0, 132 },
	{ 253, 143 },
	{ 0, 144 },
	{ 0, 144 },
	{ 161, 144 },
	{ 0, 132 },
	{ 161, 132 },
	{ 45, 6 },
	{ 45, 214 },
	{ 55, 6 },
	{ 55, 214 },
	{ 45, 6 },
	{ 45, 214 },
	{ 55, 6 },
	{ 55, 214 },
	{ 76, 6 },
	{ 76, 214 },
	{ 86, 6 },
	{ 86, 214 },
	{ 76, 6 },
	{ 76, 214 },
	{ 86, 6 },
	{ 86, 214 },
	{ 117, 6 },
	{ 105, 6 },
	{ 114, 206 },
	{ 104, 206 },
	{ 107, 6 },
	{ 107, 214 },
	{ 117, 6 },
	{ 117, 214 },
	{ 107, 6 },
	{ 107, 214 },
	{ 138, 6 },
	{ 138, 214 },
	{ 148, 6 },
	{ 148, 214 },
	{ 138, 6 },
	{ 138, 214 },
	{ 148, 6 },
	{ 148, 214 },
	{ 168, 6 },
	{ 168, 214 },
	{ 179, 6 },
	{ 179, 214 },
	{ 168, 6 },
	{ 168, 214 },
	{ 179, 6 },
	{ 179, 214 },
	{ 199, 8 },
	{ 199, 214 },
	{ 210, 8 },
	{ 210, 214 },
	{ 199, 8 },
	{ 199, 214 },
	{ 210, 8 },
	{ 210, 214 },
	{ 242, 75 },
	{ 238, 96 },
	{ 227, 102 },
	{ 246, 95 },
	{ 228, 96 },
	{ 253, 100 },
	{ 228, 100 },
	{ 242, 75 },
	{ 238, 96 },
	{ 227, 102 },
	{ 143, 133 },
	{ 134, 113 },
	{ 113, 107 },
	{ 224, 138 },
	{ 231, 117 },
	{ 249, 116 },
	{ 223, 111 },
	{ 248, 111 },
	{ 242, 102 },
	{ 242, 4 },
	{ 227, 102 },
	{ 227, 5 },
	{ 242, 75 },
	{ 242, 4 },
	{ 227, 102 },
	{ 227, 5 },
	{ 86, 6 },
	{ 75, 6 },
	{ 87, 239 },
	{ 77, 241 },
	{ 86, 250 },
	{ 86, 6 },
	{ 76, 252 },
	{ 75, 6 },
	{ 86, 250 },
	{ 86, 6 },
	{ 227, 254 },
	{ 248, 255 },
	{ 227, 6 },
	{ 227, 6 },
	{ 248, 6 },
	{ 248, 255 },
	{ 252, 6 },
	{ 253, 254 },
	{ 54, 246 },
	{ 54, 246 },
	{ 54, 246 },
	{ 19, 248 },
	{ 4, 246 },
	{ 4, 114 },
	{ 19, 242 },
	{ 20, 118 },
	{ 4, 241 },
	{ 5, 147 },
	{ 19, 248 },
	{ 20, 114 },
	{ 4, 114 },
	{ 254, 208 },
	{ 251, 134 },
	{ 229, 214 },
	{ 229, 133 },
	{ 250, 116 },
	{ 227, 117 },
	{ 228, 5 },
	{ 250, 91 },
	{ 251, 5 },
	{ 250, 116 },
	{ 251, 5 },
	{ 228, 5 },
	{ 209, 6 },
	{ 209, 90 },
	{ 198, 6 },
	{ 198, 90 },
	{ 209, 6 },
	{ 209, 90 },
	{ 198, 6 },
	{ 198, 90 },
	{ 179, 6 },
	{ 179, 90 },
	{ 168, 6 },
	{ 168, 90 },
	{ 179, 6 },
	{ 179, 90 },
	{ 168, 6 },
	{ 168, 90 }
};

NJS_TEX uv_0005B244[] = {
	{ 328, 40 },
	{ 328, 189 },
	{ 67, 40 },
	{ 67, 189 },
	{ 510, -255 },
	{ 510, 0 },
	{ 498, 243 },
	{ 510, 254 },
	{ 10, 243 },
	{ 0, 254 },
	{ 10, -243 },
	{ 0, -255 },
	{ 498, -243 },
	{ 510, -255 },
	{ 498, 243 },
	{ 498, -243 },
	{ 498, 243 },
	{ 10, -243 },
	{ 10, 243 }
};

NJS_TEX uv_0005B290[] = {
	{ 2, 254 },
	{ 2, 0 },
	{ 2, 255 },
	{ 2, 0 },
	{ 256, 255 },
	{ 256, 0 }
};

NJS_TEX uv_0005B2A8[] = {
	{ 166, 240 },
	{ 191, 187 },
	{ 242, 229 },
	{ 231, 151 },
	{ 166, 240 },
	{ 247, 37 },
	{ 242, 229 },
	{ 247, 176 },
	{ 164, 240 },
	{ 247, 37 },
	{ 212, 196 },
	{ 247, 176 },
	{ 167, 240 },
	{ 191, 187 },
	{ 253, 249 },
	{ 232, 151 },
	{ 167, 240 },
	{ 248, 37 },
	{ 253, 249 },
	{ 247, 176 },
	{ 165, 240 },
	{ 248, 37 },
	{ 213, 196 },
	{ 247, 176 },
	{ 146, -208 },
	{ 83, -223 },
	{ 112, -155 },
	{ 57, -150 },
	{ 178, -112 },
	{ 254, 97 },
	{ 114, 69 },
	{ 167, 183 },
	{ 39, -233 },
	{ 48, -196 },
	{ 19, -151 },
	{ 58, -150 },
	{ 167, 183 },
	{ 178, -112 },
	{ 78, 176 },
	{ 60, -117 },
	{ 167, 183 },
	{ 178, -112 },
	{ 0, -184 },
	{ 0, -234 },
	{ 0, -184 },
	{ 0, -234 },
	{ 0, -184 },
	{ 0, -234 },
	{ 0, -184 },
	{ 0, -234 },
	{ 179, -112 },
	{ 255, 97 },
	{ 213, 79 },
	{ 167, 183 },
	{ 167, 183 },
	{ 179, -112 },
	{ 78, 176 },
	{ 60, -117 },
	{ 167, 183 },
	{ 179, -112 },
	{ 39, -233 },
	{ 83, -223 },
	{ 19, -151 },
	{ 57, -150 }
};

NJS_TEX uv_0005B3A8[] = {
	{ 196, 2 },
	{ 71, 1 },
	{ 196, 114 },
	{ 71, 114 },
	{ 196, 2 },
	{ 71, 1 },
	{ 196, 114 },
	{ 71, 114 },
	{ 196, 2 },
	{ 71, 1 },
	{ 196, 114 },
	{ 71, 114 },
	{ 196, 2 },
	{ 71, 1 },
	{ 196, 114 },
	{ 71, 114 },
	{ 196, 2 },
	{ 71, 1 },
	{ 196, 114 },
	{ 71, 114 },
	{ 196, 2 },
	{ 71, 1 },
	{ 196, 114 },
	{ 71, 114 },
	{ 196, 2 },
	{ 71, 1 },
	{ 196, 114 },
	{ 71, 114 },
	{ 196, 2 },
	{ 71, 1 },
	{ 196, 114 },
	{ 71, 114 },
	{ 196, 2 },
	{ 71, 1 },
	{ 196, 114 },
	{ 71, 114 },
	{ 196, 2 },
	{ 71, 1 },
	{ 196, 114 },
	{ 71, 114 },
	{ 196, 2 },
	{ 71, 1 },
	{ 196, 114 },
	{ 71, 114 },
	{ 196, 2 },
	{ 71, 1 },
	{ 196, 114 },
	{ 71, 114 },
	{ 27, 27 },
	{ 32, 27 },
	{ 27, 27 },
	{ 166, 27 },
	{ 171, 27 },
	{ 166, 27 },
	{ 171, 27 },
	{ 32, 27 },
	{ 27, 27 },
	{ 32, 27 },
	{ 252, 2 },
	{ 3, 3 },
	{ 254, 116 },
	{ 2, 116 },
	{ 253, 7 },
	{ 3, 3 },
	{ 254, 116 },
	{ 2, 116 },
	{ 252, 2 },
	{ 3, 3 },
	{ 254, 116 },
	{ 2, 116 },
	{ 253, 7 },
	{ 3, 3 },
	{ 254, 116 },
	{ 2, 116 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 164, 32 },
	{ 166, 27 },
	{ 164, 32 },
	{ 32, 27 },
	{ 33, 32 },
	{ 32, 27 },
	{ 33, 32 },
	{ 166, 27 },
	{ 164, 32 },
	{ 166, 27 }
};

NJS_TEX uv_0005B508[] = {
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 }
};

NJS_TEX uv_0005B538[] = {
	{ 228, 95 },
	{ 255, 154 },
	{ 216, 1 },
	{ 255, 253 },
	{ 0, 1 },
	{ 0, 253 },
	{ 255, 2 },
	{ 255, 254 },
	{ 0, 2 },
	{ 0, 254 },
	{ 255, 0 },
	{ 255, 253 },
	{ 0 },
	{ 0, 253 },
	{ 192, 152 },
	{ 255, 164 },
	{ 161, 1 },
	{ 255, 252 },
	{ 0, 1 },
	{ 0, 252 },
	{ 228, 95 },
	{ 216, 1 },
	{ 255, 154 },
	{ 0, 1 },
	{ 255, 253 },
	{ 0, 253 },
	{ 255, 253 },
	{ 255, 0 },
	{ 0, 253 },
	{ 0 },
	{ 255, 252 },
	{ 255, 0 },
	{ 0, 252 },
	{ 0 },
	{ 192, 152 },
	{ 161, 1 },
	{ 255, 165 },
	{ 0, 1 },
	{ 255, 252 },
	{ 0, 252 }
};

NJS_TEX uv_0005B5D8[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 508, 255 },
	{ 508, 0 },
	{ 765, 255 },
	{ 765, 0 }
};

NJS_TEX uv_0005B5F8[] = {
	{ 248, 7 },
	{ 248, 255 },
	{ 235, 6 },
	{ 235, 254 },
	{ 0, 11 },
	{ 0 },
	{ 255, 11 },
	{ 255, 0 },
	{ 0, 56 },
	{ 0, 45 },
	{ 255, 56 },
	{ 255, 45 },
	{ 0, 97 },
	{ 0, 86 },
	{ 255, 97 },
	{ 255, 86 },
	{ 0, 146 },
	{ 0, 135 },
	{ 255, 146 },
	{ 255, 135 },
	{ 0, 194 },
	{ 0, 183 },
	{ 255, 194 },
	{ 255, 183 },
	{ 241, 254 },
	{ 241, 240 },
	{ 254, 255 },
	{ 254, 240 }
};

NJS_TEX uv_0005B668[] = {
	{ 254, 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 765, 255 },
	{ 764, 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 255, 255 },
	{ 254, 0 },
	{ 510, 255 }
};

NJS_TEX uv_0005B690[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0005B6A0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 55, poly_0005A8A4, NULL, NULL, NULL, uv_0005ADE4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, poly_0005AB42, NULL, NULL, NULL, uv_0005B244, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0005AB6E, NULL, NULL, NULL, uv_0005B290, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 14, poly_0005AB7C, NULL, NULL, NULL, uv_0005B2A8, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 19, poly_0005AC18, NULL, NULL, NULL, uv_0005B3A8, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 3, poly_0005ACEE, NULL, NULL, NULL, uv_0005B508, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 8, poly_0005AD0C, NULL, NULL, NULL, uv_0005B538, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 1, poly_0005AD6C, NULL, NULL, NULL, uv_0005B5D8, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 7, poly_0005AD7E, NULL, NULL, NULL, uv_0005B5F8, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 1, poly_0005ADC4, NULL, NULL, NULL, uv_0005B668, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 1, poly_0005ADDA, NULL, NULL, NULL, uv_0005B690, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0005B7A8[] = {
	{ -178.349f, -200.8207f, -249.088f },
	{ -178.349f, -201.1918f, 99.04971f },
	{ -178.349f, 314.0713f, -99.87747f },
	{ -178.349f, 221.8857f, 220.7075f },
	{ -178.349f, 56.69723f, 173.2069f },
	{ 176.7077f, -201.1918f, 99.04971f },
	{ -43.73764f, -129.5555f, 119.6491f },
	{ 176.7077f, 221.8857f, 220.7075f },
	{ 45.02655f, -129.5555f, 119.6491f },
	{ -43.73764f, -201.1918f, 99.04971f },
	{ -178.349f, -129.3394f, 119.7112f },
	{ -43.73764f, 221.8857f, 220.7075f },
	{ 176.7077f, -129.5555f, 119.6491f },
	{ 45.02655f, -201.1918f, 99.04971f },
	{ 45.02654f, 221.8857f, 220.7075f },
	{ -43.73764f, 56.72987f, 173.2162f },
	{ 176.7077f, 56.72987f, 173.2162f },
	{ 45.02655f, 56.72987f, 173.2162f },
	{ -178.349f, 147.5182f, -147.4343f },
	{ -178.349f, -39.51802f, -201.2174f },
	{ 194.0801f, 219.2648f, 241.6039f },
	{ 183.0741f, 8.339746f, 168.2268f },
	{ 194.0801f, 231.2615f, 199.8842f },
	{ 194.0801f, 5.620683f, 135.0003f },
	{ 155.9239f, 219.2648f, 241.6039f },
	{ 155.9239f, 2.877882f, 179.3809f },
	{ 155.9239f, 231.2615f, 199.8842f },
	{ 155.9239f, 5.620683f, 135.0003f },
	{ 194.0801f, 48.10999f, 192.3876f },
	{ 171.4314f, -86.34639f, 127.6963f },
	{ 171.4314f, 10.90643f, 155.6617f },
	{ 173.5456f, -86.80804f, 129.3017f },
	{ 173.5456f, 10.4448f, 157.2671f },
	{ 173.4111f, -85.84127f, 125.9396f },
	{ 173.4111f, 11.41157f, 153.9051f },
	{ 171.9182f, -90.12344f, 140.8312f },
	{ 171.9182f, 7.129423f, 168.7968f },
	{ 174.0324f, -90.58511f, 142.4367f },
	{ 174.0324f, 6.667784f, 170.4022f },
	{ 173.8979f, -89.61832f, 139.0746f },
	{ 173.8979f, 7.634554f, 167.0402f },
	{ 149.5295f, -203.2178f, 125.0146f },
	{ 160.058f, -55.73681f, 151.852f },
	{ 147.8628f, -203.0786f, 78.67958f },
	{ 147.8628f, -35.90671f, 125.5731f },
	{ 187.6577f, -202.8128f, 123.6065f },
	{ 187.6577f, -56.74346f, 163.193f },
	{ 185.9908f, -202.6738f, 77.27156f },
	{ 185.9908f, -35.50182f, 124.165f },
	{ 149.5295f, -102.3806f, 151.5943f },
	{ 196.7499f, 208.0258f, 242.7141f },
	{ 196.7499f, 311.8264f, -118.2633f },
	{ 196.7499f, 333.9922f, -111.8894f },
	{ 196.7499f, 230.1916f, 249.088f },
	{ -196.7501f, 311.8264f, -118.2633f },
	{ -196.7501f, 208.0258f, 242.7141f },
	{ -196.7501f, 230.1916f, 249.088f },
	{ -196.7501f, 333.9922f, -111.8894f },
	{ -196.7501f, 143.4427f, -166.6827f },
	{ -196.7501f, 39.64233f, 194.2946f },
	{ -196.7501f, 61.80816f, 200.6685f },
	{ -196.7501f, 165.6087f, -160.3088f },
	{ 155.6818f, 78.35005f, 59.90505f },
	{ 196.7499f, 143.4427f, -166.6827f },
	{ 196.7499f, 165.6087f, -160.3088f },
	{ 155.6818f, 100.5159f, 66.27895f },
	{ -196.7501f, -46.29361f, -221.2422f },
	{ -196.7501f, -149.215f, 139.9879f },
	{ -196.7501f, -127.0492f, 146.3618f },
	{ -196.7501f, -24.12771f, -214.8683f },
	{ 196.7499f, -149.215f, 139.9879f },
	{ 196.7499f, -46.29361f, -221.2422f },
	{ 196.7499f, -24.12771f, -214.8683f },
	{ 196.7499f, -127.0492f, 146.3618f },
	{ -196.7501f, 223.7566f, -143.5881f },
	{ -196.7501f, 119.9562f, 217.3893f },
	{ -196.7501f, 142.1222f, 223.7632f },
	{ -196.7501f, 245.9226f, -137.2141f },
	{ 196.7499f, 119.9562f, 217.3893f },
	{ 196.7499f, 223.7566f, -143.5881f },
	{ 196.7499f, 245.9226f, -137.2141f },
	{ 196.7499f, 142.1222f, 223.7632f },
	{ 187.6092f, 221.9525f, 237.8761f },
	{ -188.32f, 221.9525f, 237.8761f },
	{ 187.6092f, 320.9647f, -106.4492f },
	{ -188.32f, 320.9647f, -106.4492f },
	{ 137.5728f, 61.80816f, 200.6685f },
	{ 137.5728f, 39.64233f, 194.2946f },
	{ 196.7499f, 124.8403f, -18.31175f },
	{ 196.7499f, 102.6745f, -24.68562f },
	{ -191.6973f, -203.1725f, 78.13705f },
	{ -191.6973f, -202.7627f, 122.5633f },
	{ -191.6973f, 230.9064f, 201.7808f },
	{ -191.6973f, 219.4674f, 241.5611f },
	{ -150.3053f, -203.1725f, 78.13705f },
	{ -150.3053f, -202.7627f, 122.5633f },
	{ -150.3053f, 230.9064f, 201.7808f },
	{ -150.3053f, 219.4674f, 241.5611f },
	{ -196.7501f, 47.14568f, -191.7147f },
	{ -196.7501f, -55.01086f, 167.0768f },
	{ -196.7501f, -32.84524f, 173.4505f },
	{ -196.7501f, 69.31132f, -185.3409f },
	{ 100.4762f, 6.77327f, -47.78494f },
	{ 196.7499f, 47.14568f, -191.7147f },
	{ 196.7499f, 69.31132f, -185.3409f },
	{ 100.4762f, 28.93916f, -41.41104f },
	{ 52.51279f, -32.84524f, 173.4505f },
	{ 52.51279f, -55.01086f, 167.0768f },
	{ 196.7499f, 34.2363f, -59.83243f },
	{ 196.7499f, 12.07043f, -66.20632f },
	{ -126.8777f, -192.1183f, 95.09921f },
	{ -126.8777f, -197.3824f, 113.4056f },
	{ -126.8777f, 226.1114f, 215.363f },
	{ -126.8777f, 220.8473f, 233.6694f },
	{ -110.8772f, -192.1183f, 95.09921f },
	{ -110.8772f, -197.3824f, 113.4056f },
	{ -110.8772f, 226.1114f, 215.363f },
	{ -110.8772f, 220.8473f, 233.6694f },
	{ -78.8763f, -192.1183f, 95.09921f },
	{ -78.8763f, -197.3824f, 113.4056f },
	{ -78.8763f, 226.1114f, 215.363f },
	{ -78.8763f, 220.8473f, 233.6694f },
	{ -62.8757f, -192.1183f, 95.09921f },
	{ -62.8757f, -197.3824f, 113.4056f },
	{ -62.87571f, 226.1114f, 215.363f },
	{ -62.87571f, 220.8473f, 233.6694f },
	{ -30.8746f, -192.1183f, 95.09921f },
	{ -30.8746f, -197.3824f, 113.4056f },
	{ -30.8746f, 226.1114f, 215.363f },
	{ -30.8746f, 220.8473f, 233.6694f },
	{ -14.87405f, -192.1183f, 95.09921f },
	{ -14.87405f, -197.3824f, 113.4056f },
	{ -14.87406f, 226.1114f, 215.363f },
	{ -14.87406f, 220.8473f, 233.6694f },
	{ 17.1271f, -192.1183f, 95.09921f },
	{ 17.1271f, -197.3824f, 113.4056f },
	{ 17.1271f, 226.1114f, 215.363f },
	{ 17.1271f, 220.8473f, 233.6694f },
	{ 33.12765f, -192.1183f, 95.09921f },
	{ 33.12765f, -197.3824f, 113.4056f },
	{ 33.12765f, 226.1114f, 215.363f },
	{ 33.12765f, 220.8473f, 233.6694f },
	{ 65.12851f, -192.1183f, 95.09921f },
	{ 65.12851f, -197.3824f, 113.4056f },
	{ 65.12851f, 226.1114f, 215.363f },
	{ 65.12851f, 220.8473f, 233.6694f },
	{ 81.12908f, -192.1183f, 95.09921f },
	{ 81.12908f, -197.3824f, 113.4056f },
	{ 81.12908f, 226.1114f, 215.363f },
	{ 81.12908f, 220.8473f, 233.6694f },
	{ 113.1302f, -192.1183f, 95.09921f },
	{ 113.1302f, -197.3824f, 113.4056f },
	{ 113.1302f, 226.1114f, 215.363f },
	{ 113.1302f, 220.8473f, 233.6694f },
	{ 129.1308f, -192.1183f, 95.09921f },
	{ 129.1308f, -197.3824f, 113.4056f },
	{ 129.1308f, 226.1114f, 215.363f },
	{ 129.1308f, 220.8473f, 233.6694f },
	{ 194.0801f, 264.2289f, 85.23642f },
	{ 183.0741f, 88.46912f, 21.9714f },
	{ 194.0801f, 276.2256f, 43.51677f },
	{ 194.0801f, 85.75011f, -11.25519f },
	{ 155.9239f, 264.2289f, 85.23642f },
	{ 155.9239f, 83.00729f, 33.12545f },
	{ 155.9239f, 276.2256f, 43.51677f },
	{ 155.9239f, 85.75011f, -11.25519f },
	{ 194.0801f, 128.2394f, 46.1321f },
	{ 171.4314f, 13.31938f, -12.94141f },
	{ 171.4314f, 91.03593f, 9.406274f },
	{ 173.5456f, 12.85773f, -11.336f },
	{ 173.5456f, 90.57428f, 11.01168f },
	{ 173.4111f, 13.82451f, -14.69803f },
	{ 173.4111f, 91.54104f, 7.649652f },
	{ 171.9182f, 9.54233f, 0.193629f },
	{ 171.9182f, 87.25888f, 22.54135f },
	{ 174.0324f, 9.080693f, 1.799069f },
	{ 174.0324f, 86.79723f, 24.14675f },
	{ 173.8979f, 10.04746f, -1.562991f },
	{ 173.8979f, 87.764f, 20.78472f },
	{ 149.5295f, -202.0355f, -52.01932f },
	{ 160.058f, 43.92901f, 11.21432f },
	{ 147.8628f, -201.9025f, -95.24099f },
	{ 147.8628f, 63.7591f, -15.06458f },
	{ 187.6577f, -201.6306f, -53.4274f },
	{ 187.6577f, 42.92232f, 22.55532f },
	{ 185.9908f, -201.4976f, -96.64901f },
	{ 185.9908f, 64.16398f, -16.4726f },
	{ 149.5295f, -2.714697f, 10.95672f },
	{ 167.0052f, 69.96577f, 127.7468f },
	{ 186.0536f, 69.96577f, 127.7468f },
	{ 167.0052f, 237.4564f, 175.9094f },
	{ 186.0536f, 237.4564f, 175.9094f },
	{ -144.461f, 315.0265f, 47.00767f },
	{ 186.0536f, 74.3876f, 112.3693f },
	{ -146.5222f, 357.5311f, -55.99778f },
	{ 186.0536f, 241.8782f, 160.5319f },
	{ 167.0052f, 83.23125f, 81.61459f },
	{ 186.0536f, 83.23125f, 81.61459f },
	{ 167.0052f, 250.7219f, 129.7771f },
	{ 186.0536f, 250.7219f, 129.7771f },
	{ 57.51376f, 315.0265f, 47.00767f },
	{ 186.0536f, 87.65311f, 66.23714f },
	{ 59.57498f, 357.5311f, -55.99778f },
	{ 186.0536f, 255.1437f, 114.3997f },
	{ 167.0052f, -200.4384f, -131.0122f },
	{ 186.0536f, -200.4384f, -131.0122f },
	{ 167.0052f, 286.1483f, 6.578329f },
	{ 186.0536f, 286.1483f, 6.578329f },
	{ -144.461f, 345.3211f, -58.34497f },
	{ 186.0536f, -200.0995f, -146.3814f },
	{ 59.57498f, 326.6183f, 51.50484f },
	{ 186.0536f, 290.5701f, -8.799144f },
	{ 167.0052f, -200.4346f, -181.2271f },
	{ 186.0536f, -200.4346f, -181.2271f },
	{ 167.0052f, 299.4138f, -39.55392f },
	{ 186.0536f, 299.4138f, -39.55392f },
	{ 57.51376f, 345.3211f, -58.34497f },
	{ 166.649f, -200.0917f, -196.6509f },
	{ -146.5222f, 326.6183f, 51.50484f },
	{ 166.649f, 303.8356f, -54.93135f },
	{ -139.344f, 254.4243f, 121.5016f },
	{ -139.344f, 237.1603f, 181.5389f },
	{ -142.1552f, 314.787f, 135.9342f },
	{ -142.1552f, 295.9693f, 201.3747f },
	{ -76.87387f, 254.4243f, 121.5016f },
	{ -76.87387f, 237.1603f, 181.5389f },
	{ -74.06259f, 314.787f, 135.9342f },
	{ -74.06259f, 295.9693f, 201.3747f },
	{ -139.344f, 309.1342f, 137.2337f },
	{ -139.344f, 291.8703f, 197.271f },
	{ -76.87387f, 291.8703f, 197.271f },
	{ -76.87387f, 309.1342f, 137.2337f },
	{ -105.4524f, 308.7949f, 145.4498f },
	{ -105.4524f, 351.5158f, 157.7343f },
	{ -106.3895f, 308.9444f, 144.9298f },
	{ -106.3895f, 351.6654f, 157.2144f },
	{ -106.3895f, 308.6454f, 145.9697f },
	{ -106.3895f, 351.3664f, 158.2543f },
	{ -83.61649f, 308.7949f, 145.4498f },
	{ -83.61649f, 368.3808f, 162.584f },
	{ -84.55361f, 308.9444f, 144.9298f },
	{ -84.55361f, 368.5302f, 162.064f },
	{ -84.55361f, 308.6454f, 145.9697f },
	{ -84.55361f, 368.2312f, 163.1038f },
	{ -123.1849f, 323.5299f, 16.83071f },
	{ -123.1849f, 318.619f, 33.90904f },
	{ -123.1849f, 355.6576f, 26.06914f },
	{ -123.1849f, 350.7466f, 43.14751f },
	{ -77.71042f, 323.5299f, 16.83071f },
	{ -77.71042f, 318.619f, 33.90904f },
	{ -77.71042f, 355.6576f, 26.06914f },
	{ -77.71042f, 350.7466f, 43.14751f },
	{ -9.186496f, 323.5299f, 16.83071f },
	{ -9.186496f, 318.619f, 33.90904f },
	{ -9.186496f, 355.6576f, 26.06914f },
	{ -9.186496f, 350.7466f, 43.14751f },
	{ 36.28793f, 323.5299f, 16.83071f },
	{ 36.28793f, 318.619f, 33.90904f },
	{ 36.28793f, 355.6576f, 26.06914f },
	{ 36.28793f, 350.7466f, 43.14751f },
	{ -66.21078f, 323.5299f, 16.83071f },
	{ -66.21078f, 318.619f, 33.90904f },
	{ -66.21078f, 355.6576f, 26.06914f },
	{ -66.21078f, 350.7466f, 43.14751f },
	{ -20.73636f, 323.5299f, 16.83071f },
	{ -20.73636f, 318.619f, 33.90904f },
	{ -20.73636f, 355.6576f, 26.06914f },
	{ -20.73636f, 350.7466f, 43.14751f },
	{ -154.2784f, 311.7997f, -73.52841f },
	{ -154.2784f, 278.5601f, 42.06593f },
	{ -154.2784f, 358.6945f, -60.04362f },
	{ -154.2784f, 325.4549f, 55.55067f },
	{ 67.33124f, 311.7997f, -73.52841f },
	{ 67.33124f, 278.5601f, 42.06593f },
	{ 67.33124f, 358.6945f, -60.04362f },
	{ 67.33124f, 325.4549f, 55.55067f },
	{ -176.92f, -56.24799f, -203.1462f },
	{ -176.92f, -129.595f, 54.83645f },
	{ -176.92f, 294.8982f, -102.1726f },
	{ -176.92f, 221.5511f, 155.81f },
	{ 176.2134f, -56.24799f, -203.1462f },
	{ 176.2134f, 294.8982f, -102.1726f },
	{ 186.0536f, -200.2631f, -196.9176f },
	{ 186.0536f, 301.6247f, -54.22128f },
	{ 186.0536f, -181.6171f, -191.6162f },
	{ 166.649f, -180.9885f, -191.4047f },
	{ 196.7499f, 282.0919f, 68.59927f },
	{ 167.0536f, 290.5701f, -8.799143f },
	{ 167.0536f, -200.0995f, -146.3814f },
	{ 167.0536f, 241.8782f, 160.5319f },
	{ 167.0536f, 255.1437f, 114.3997f },
	{ 167.0536f, 87.65311f, 66.23714f },
	{ 167.0536f, 74.3876f, 112.3693f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0005C564[] = {
	{ -1, 0, 0 },
	{ -0.762239f, -0.178884f, 0.6220869f },
	{ -1, 0, 0 },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ 0, -0.276356f, 0.961055f },
	{ 0, -0.276356f, 0.961055f },
	{ 0, -0.276356f, 0.961055f },
	{ 0, -0.276356f, 0.961055f },
	{ 0, -0.276356f, 0.961055f },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ 0, -0.276356f, 0.961056f },
	{ 0, -0.276356f, 0.961055f },
	{ 0, -0.276356f, 0.961055f },
	{ 0, -0.276356f, 0.961055f },
	{ 0, -0.276356f, 0.961056f },
	{ 0, -0.276356f, 0.961055f },
	{ 0, -0.276356f, 0.961056f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ 0.552393f, -0.723187f, 0.414563f },
	{ 0.7071069f, 0.195413f, -0.6795689f },
	{ 0.608218f, -0.509515f, -0.608658f },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ -0.494185f, -0.705101f, 0.50854f },
	{ -0.7071069f, 0.195413f, -0.6795689f },
	{ -0.566732f, -0.475045f, -0.673162f },
	{ 0.7048129f, -0.263945f, 0.658462f },
	{ -0.999262f, -0.010615f, 0.036917f },
	{ -0.999262f, -0.010615f, 0.036917f },
	{ 0.453136f, -0.246355f, 0.856725f },
	{ 0.453136f, -0.246355f, 0.856725f },
	{ 0.383348f, 0.255243f, -0.887635f },
	{ 0.383348f, 0.255243f, -0.887635f },
	{ -0.999262f, -0.010613f, 0.03691f },
	{ -0.999262f, -0.010612f, 0.036907f },
	{ 0.453128f, -0.246356f, 0.856729f },
	{ 0.45313f, -0.246355f, 0.856728f },
	{ 0.383353f, 0.255243f, -0.887632f },
	{ 0.383352f, 0.255243f, -0.887633f },
	{ -0.7330149f, -0.176228f, 0.656987f },
	{ -0.529012f, 0.386775f, 0.755348f },
	{ -0.666533f, 0.201477f, -0.717733f },
	{ -0.624734f, 0.747663f, -0.225183f },
	{ 0.7831089f, -0.160767f, 0.600745f },
	{ 0.5229599f, 0.334922f, 0.783798f },
	{ 0.607978f, 0.214341f, -0.764474f },
	{ 0.546457f, 0.765093f, -0.340613f },
	{ -0.679622f, -0.122769f, 0.723216f },
	{ 0.57735f, -0.7144189f, 0.395312f },
	{ 0.57735f, -0.395312f, -0.71442f },
	{ 0.464681f, 0.85165f, -0.242413f },
	{ 0.461025f, 0.594553f, 0.658759f },
	{ -0.57735f, -0.395312f, -0.71442f },
	{ -0.57735f, -0.7144189f, 0.395312f },
	{ -0.461726f, 0.601046f, 0.652344f },
	{ -0.465499f, 0.853645f, -0.23367f },
	{ -0.577327f, -0.395349f, -0.714418f },
	{ -0.577296f, -0.7144369f, 0.395359f },
	{ -0.577357f, 0.395278f, 0.714433f },
	{ -0.577391f, 0.714412f, -0.395266f },
	{ 0.709334f, -0.704775f, 0.011727f },
	{ 0.577303f, -0.395357f, -0.714433f },
	{ 0.577445f, 0.714379f, -0.395248f },
	{ 0.709182f, 0.5910349f, 0.384368f },
	{ -0.706558f, 0.195565f, -0.680096f },
	{ -0.707654f, -0.195262f, 0.679042f },
	{ -0.577222f, 0.396225f, 0.714017f },
	{ -0.577478f, 0.7138579f, -0.396137f },
	{ 0.707654f, -0.195262f, 0.679042f },
	{ 0.706558f, 0.195565f, -0.680096f },
	{ 0.577478f, 0.7138579f, -0.396137f },
	{ 0.577222f, 0.396225f, 0.714017f },
	{ -0.57735f, -0.395312f, -0.71442f },
	{ -0.57735f, -0.7144189f, 0.395312f },
	{ -0.57735f, 0.395312f, 0.7144189f },
	{ -0.57735f, 0.7144189f, -0.395312f },
	{ 0.57735f, -0.7144189f, 0.395312f },
	{ 0.57735f, -0.395312f, -0.71442f },
	{ 0.57735f, 0.7144189f, -0.395312f },
	{ 0.57735f, 0.395312f, 0.7144189f },
	{ -0.33494f, 0.937254f, -0.09679899f },
	{ 0.352077f, 0.930962f, -0.09670199f },
	{ -0.335738f, 0.7477109f, 0.572895f },
	{ 0.352928f, 0.7423649f, 0.569505f },
	{ 0.5357299f, 0.393164f, 0.747272f },
	{ 0.535601f, -0.730136f, 0.424302f },
	{ 0.7321129f, 0.5908549f, 0.33897f },
	{ 0.7322569f, -0.6805069f, -0.026659f },
	{ -1, 0, 0 },
	{ -0.7631f, -0.175313f, 0.622049f },
	{ -1, 0, 0 },
	{ -0.708295f, -0.19149f, 0.6794479f },
	{ 1, 0, 0 },
	{ 0.7631f, -0.175313f, 0.622049f },
	{ 1, 0, 0 },
	{ 0.708295f, -0.19149f, 0.6794479f },
	{ -0.577568f, -0.396961f, -0.7133279f },
	{ -0.576991f, -0.713685f, 0.39716f },
	{ -0.577222f, 0.396212f, 0.7140239f },
	{ -0.577581f, 0.713802f, -0.396089f },
	{ 0.559642f, -0.735184f, 0.3825f },
	{ 0.576516f, -0.397322f, -0.713978f },
	{ 0.578669f, 0.713128f, -0.395715f },
	{ 0.560894f, 0.422002f, 0.712258f },
	{ 0.508243f, 0.39344f, 0.76609f },
	{ 0.507026f, -0.739402f, 0.442955f },
	{ 0.623965f, 0.425115f, 0.655702f },
	{ 0.625756f, -0.7058229f, 0.332027f },
	{ -1, 0, 0 },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ -1, 0, 0 },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ 1, 0, 0 },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ 1, 0, 0 },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ -1, 0, 0 },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ -1, 0, 0 },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ 1, 0, 0 },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ 1, 0, 0 },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ -1, 0, 0 },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ -1, 0, 0 },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ 1, 0, 0 },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ 1, 0, 0 },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ -1, 0, 0 },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ -1, 0, 0 },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ 1, 0, 0 },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ 1, 0, 0 },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ -1, 0, 0 },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ -1, 0, 0 },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ 1, 0, 0 },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ 1, 0, 0 },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ -1, 0, 0 },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ -1, 0, 0 },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ 1, 0, 0 },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ 1, 0, 0 },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ 0.552393f, -0.723187f, 0.414563f },
	{ 0.707106f, 0.195413f, -0.6795689f },
	{ 0.608218f, -0.509515f, -0.608659f },
	{ 0, -0.276355f, 0.961056f },
	{ 0.209914f, -0.79299f, 0.571929f },
	{ 0, 0.276355f, -0.961056f },
	{ 0, -0.57658f, -0.817041f },
	{ 0.7048129f, -0.263945f, 0.658462f },
	{ -0.999262f, -0.010616f, 0.036919f },
	{ -0.999262f, -0.010616f, 0.036917f },
	{ 0.453131f, -0.246355f, 0.8567269f },
	{ 0.453131f, -0.246355f, 0.8567269f },
	{ 0.383349f, 0.255243f, -0.887634f },
	{ 0.383347f, 0.255243f, -0.887635f },
	{ -0.999262f, -0.010615f, 0.036914f },
	{ -0.999262f, -0.010615f, 0.036916f },
	{ 0.453128f, -0.246356f, 0.856728f },
	{ 0.453128f, -0.246356f, 0.856729f },
	{ 0.383345f, 0.255243f, -0.8876359f },
	{ 0.383347f, 0.255243f, -0.887635f },
	{ 0.038388f, -0.298541f, 0.953624f },
	{ -0.529012f, 0.386776f, 0.755348f },
	{ -0.038394f, 0.288715f, -0.956645f },
	{ -0.371545f, 0.8884929f, -0.269322f },
	{ 0.790458f, -0.183184f, 0.584482f },
	{ 0.515884f, 0.329938f, 0.790572f },
	{ 0.601301f, 0.230955f, -0.7649159f },
	{ 0.546733f, 0.767701f, -0.334242f },
	{ -0.14924f, -0.19426f, 0.969531f },
	{ 0, -0.276355f, 0.961056f },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ 0, -0.276355f, 0.961056f },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ 0.526633f, 0.771736f, -0.356485f },
	{ 0.7071069f, 0.195413f, -0.6795689f },
	{ 0.26721f, 0.822051f, 0.502823f },
	{ 0.7071069f, 0.195413f, -0.6795689f },
	{ 0, -0.276355f, 0.961056f },
	{ 0.7071069f, -0.195412f, 0.6795689f },
	{ 0, -0.276355f, 0.961056f },
	{ 0.707106f, -0.195413f, 0.6795689f },
	{ -0.526633f, 0.771736f, -0.356485f },
	{ 0.7071069f, 0.195413f, -0.6795689f },
	{ -0.26721f, 0.822051f, 0.502823f },
	{ 0.7071069f, 0.195413f, -0.679568f },
	{ 0, -0.272098f, 0.96227f },
	{ 0.7578f, -0.17754f, 0.627869f },
	{ 0, -0.272098f, 0.96227f },
	{ 0.708101f, -0.192131f, 0.679469f },
	{ 0.526633f, 0.464495f, 0.71197f },
	{ 0.64319f, 0.206729f, -0.737272f },
	{ -0.26721f, 0.96358f, 0.010648f },
	{ 0.705611f, 0.191311f, -0.682285f },
	{ 0, -0.272691f, 0.962102f },
	{ 0.759863f, -0.177272f, 0.625446f },
	{ 0, -0.272691f, 0.962102f },
	{ 0.676824f, -0.20074f, 0.708246f },
	{ -0.526633f, 0.464495f, 0.71197f },
	{ -0.010857f, 0.269091f, -0.9630539f },
	{ 0.26721f, 0.96358f, 0.010648f },
	{ 0.06608199f, 0.271624f, -0.9601319f },
	{ -0.7071069f, 0.195413f, -0.6795689f },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ -0.6672699f, 0.50244f, -0.549823f },
	{ -0.667269f, 0.133634f, 0.73273f },
	{ 0.7071069f, 0.195413f, -0.6795689f },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ 0.6672699f, 0.50244f, -0.549823f },
	{ 0.667269f, 0.133634f, 0.73273f },
	{ -0.653088f, -0.187911f, -0.733598f },
	{ -0.653089f, -0.548887f, 0.521726f },
	{ 0.653089f, -0.548887f, 0.521726f },
	{ 0.653088f, -0.187911f, -0.733598f },
	{ 1, 0.000003f, -0.00005f },
	{ 1, 0.000001f, 0 },
	{ -0.500021f, 0.239328f, -0.832287f },
	{ -0.500052f, 0.239323f, -0.832269f },
	{ -0.5000229f, -0.239327f, 0.8322859f },
	{ -0.500049f, -0.239323f, 0.832272f },
	{ 1, 0.000001f, 0.000001f },
	{ 1, 0.000001f, 0.000001f },
	{ -0.500021f, 0.239328f, -0.8322859f },
	{ -0.499992f, 0.239333f, -0.832303f },
	{ -0.500029f, -0.239326f, 0.8322819f },
	{ -0.5f, -0.239331f, 0.832298f },
	{ -0.7071069f, 0.195412f, -0.6795689f },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ -0.57735f, 0.7144189f, -0.395312f },
	{ -0.57735f, 0.395312f, 0.71442f },
	{ 0.7071069f, 0.195412f, -0.6795689f },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ 0.57735f, 0.7144189f, -0.395312f },
	{ 0.57735f, 0.395312f, 0.71442f },
	{ -0.7071069f, 0.195412f, -0.6795689f },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ -0.57735f, 0.7144189f, -0.395312f },
	{ -0.57735f, 0.395312f, 0.71442f },
	{ 0.7071069f, 0.195412f, -0.6795689f },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ 0.57735f, 0.7144189f, -0.395312f },
	{ 0.57735f, 0.395312f, 0.71442f },
	{ -0.7071069f, 0.195412f, -0.6795689f },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ -0.57735f, 0.7144189f, -0.395312f },
	{ -0.57735f, 0.395312f, 0.71442f },
	{ 0.7071069f, 0.195412f, -0.6795689f },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ 0.57735f, 0.7144189f, -0.395312f },
	{ 0.57735f, 0.395312f, 0.71442f },
	{ -0.7071069f, 0.195413f, -0.6795689f },
	{ -0.7071069f, -0.195412f, 0.6795689f },
	{ -0.57735f, 0.714421f, -0.39531f },
	{ -0.5773489f, 0.395312f, 0.71442f },
	{ 0.7071069f, 0.195413f, -0.6795689f },
	{ 0.7071069f, -0.195412f, 0.6795689f },
	{ 0.57735f, 0.714421f, -0.39531f },
	{ 0.5773489f, 0.395312f, 0.71442f },
	{ 0.706431f, -0.1956f, 0.680218f },
	{ 1, 0, 0 },
	{ 0.707781f, -0.195226f, 0.67892f },
	{ 1, 0, 0 },
	{ 0, -0.276356f, 0.961055f },
	{ 0, -0.276356f, 0.961055f },
	{ 0.636993f, 0.207446f, -0.742433f },
	{ 0.735459f, 0.184447f, -0.651981f },
	{ 0.71677f, 0.188711f, -0.671289f },
	{ 0.028469f, 0.270586f, -0.962275f },
	{ 0.339417f, 0.904003f, 0.25995f },
	{ 0, 0.269984f, -0.962865f },
	{ 0, 0.269984f, -0.962865f },
	{ 0, 0.276355f, -0.961056f },
	{ 0, 0.276355f, -0.961056f },
	{ 0, 0.276355f, -0.961056f },
	{ 0, 0.276355f, -0.961056f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0005D320 = { vertex_0005B7A8, normal_0005C564, LengthOfArray<Sint32>(vertex_0005B7A8), meshlist_0005B6A0, matlist_0005A7C8, LengthOfArray<Uint16>(meshlist_0005B6A0), LengthOfArray<Uint16>(matlist_0005A7C8), { -0.000107f, 82.65625f, -0.00046f }, 411.6232f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0005D348 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005D320, 597, -60, -4286, 0xFFFFD334, 0xFFFFC333, 0x192E, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0005D37C[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 143, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 146, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 142, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 140, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 92, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 150, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 149, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 148, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 146, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 139, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 144, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 138, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 147, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 86, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 145, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 141, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0005D4BC[] = {
	4, 14, 18, 3, 17,
	4, 7, 22, 12, 21,
	4, 29, 30, 22, 21,
	4, 26, 17, 25, 18
};

extern "C" __declspec(dllexport) Sint16 poly_0005D4E4[] = {
	4, 10, 23, 7, 22,
	4, 12, 21, 6, 20,
	4, 3, 17, 8, 16,
	4, 2, 19, 14, 18,
	0x8000u | 6, 24, 25, 60, 61, 38, 39,
	0x8000u | 6, 37, 36, 59, 58, 31, 30,
	0x8000u | 6, 35, 34, 57, 56, 29, 28,
	0x8000u | 6, 32, 33, 62, 63, 27, 26
};

extern "C" __declspec(dllexport) Sint16 poly_0005D544[] = {
	4, 6, 20, 2, 19,
	4, 8, 16, 10, 23
};

extern "C" __declspec(dllexport) Sint16 poly_0005D558[] = {
	4, 31, 59, 24, 60,
	4, 27, 62, 28, 56
};

extern "C" __declspec(dllexport) Sint16 poly_0005D56C[] = {
	0x8000u | 8, 2, 6, 14, 12, 3, 7, 8, 10
};

extern "C" __declspec(dllexport) Sint16 poly_0005D57E[] = {
	4, 9, 32, 1, 33,
	4, 15, 39, 0, 38,
	4, 5, 35, 11, 34,
	4, 4, 37, 13, 36
};

extern "C" __declspec(dllexport) Sint16 poly_0005D5A6[] = {
	4, 11, 34, 9, 32,
	4, 0, 38, 4, 37
};

extern "C" __declspec(dllexport) Sint16 poly_0005D5BA[] = {
	4, 13, 36, 5, 35,
	4, 1, 33, 15, 39
};

extern "C" __declspec(dllexport) Sint16 poly_0005D5CE[] = {
	4, 27, 16, 26, 17,
	4, 28, 29, 23, 22,
	4, 31, 20, 30, 21,
	4, 25, 18, 24, 19
};

extern "C" __declspec(dllexport) Sint16 poly_0005D5F6[] = {
	4, 27, 28, 16, 23,
	4, 24, 19, 31, 20
};

extern "C" __declspec(dllexport) Sint16 poly_0005D60A[] = {
	4, 25, 61, 26, 63,
	4, 29, 57, 30, 58
};

extern "C" __declspec(dllexport) Sint16 poly_0005D61E[] = {
	0x8000u | 8, 43, 41, 42, 40, 46, 44, 47, 45,
	4, 47, 43, 45, 41
};

extern "C" __declspec(dllexport) Sint16 poly_0005D63A[] = {
	4, 47, 46, 43, 42
};

extern "C" __declspec(dllexport) Sint16 poly_0005D644[] = {
	4, 51, 50, 49, 48,
	4, 55, 51, 53, 49,
	4, 54, 55, 52, 53,
	4, 50, 54, 48, 52
};

extern "C" __declspec(dllexport) Sint16 poly_0005D66C[] = {
	4, 36, 58, 35, 57,
	4, 33, 63, 39, 61
};

extern "C" __declspec(dllexport) Sint16 poly_0005D680[] = {
	4, 34, 56, 32, 62,
	4, 38, 60, 37, 59
};

NJS_TEX uv_0005D694[] = {
	{ 254, 107 },
	{ 255, 255 },
	{ 1, 106 },
	{ 0, 255 },
	{ 1, 106 },
	{ 0, 255 },
	{ 254, 107 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 254, 255 },
	{ 254, 0 }
};

NJS_TEX uv_0005D6D4[] = {
	{ 0 },
	{ 0, 254 },
	{ 255, 0 },
	{ 255, 254 },
	{ 255, 0 },
	{ 255, 254 },
	{ 0 },
	{ 0, 254 },
	{ 255, 0 },
	{ 255, 254 },
	{ 0 },
	{ 0, 254 },
	{ 0 },
	{ 0, 254 },
	{ 255, 0 },
	{ 255, 254 },
	{ 255, 0 },
	{ 0 },
	{ 255, 127 },
	{ 0, 127 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 127 },
	{ 255, 127 },
	{ 0 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 127 },
	{ 0, 127 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 127 },
	{ 0, 127 },
	{ 255, 0 },
	{ 0 }
};

NJS_TEX uv_0005D774[] = {
	{ 508, -255 },
	{ 508, 254 },
	{ 0, -255 },
	{ 0, 254 },
	{ 0, -255 },
	{ 0, 254 },
	{ 508, -255 },
	{ 508, 254 }
};

NJS_TEX uv_0005D794[] = {
	{ 508, 0 },
	{ 508, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 508, 0 },
	{ 508, 255 }
};

NJS_TEX uv_0005D7B4[] = {
	{ 42, 255 },
	{ 466, 255 },
	{ 0, 208 },
	{ 510, 208 },
	{ 0, 43 },
	{ 510, 43 },
	{ 42, 0 },
	{ 466, 0 }
};

NJS_TEX uv_0005D7D4[] = {
	{ 0, 255 },
	{ 0 },
	{ 253, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 253, 1 },
	{ 0, 255 },
	{ 0 },
	{ 253, 253 },
	{ 253, 1 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 253, 253 },
	{ 253, 1 }
};

NJS_TEX uv_0005D814[] = {
	{ 510, 255 },
	{ 508, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 508, 255 },
	{ 508, 0 }
};

NJS_TEX uv_0005D834[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 254, 255 },
	{ 254, 0 }
};

NJS_TEX uv_0005D854[] = {
	{ 254, 253 },
	{ 254, -253 },
	{ 0, 254 },
	{ 0, -255 },
	{ 0, 253 },
	{ 255, 254 },
	{ 0, -253 },
	{ 255, -255 },
	{ 0, 253 },
	{ 0, -253 },
	{ 255, 254 },
	{ 255, -255 },
	{ 0, 254 },
	{ 0, -255 },
	{ 254, 253 },
	{ 254, -253 }
};

NJS_TEX uv_0005D894[] = {
	{ 0, 255 },
	{ 254, 255 },
	{ 0 },
	{ 254, 0 },
	{ 0, 255 },
	{ 0 },
	{ 254, 255 },
	{ 254, 0 }
};

NJS_TEX uv_0005D8B4[] = {
	{ 255, 0 },
	{ 255, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 }
};

NJS_TEX uv_0005D8D4[] = {
	{ 189, 0 },
	{ 189, 109 },
	{ 0 },
	{ 0, 109 },
	{ 189, 0 },
	{ 189, 109 },
	{ 0 },
	{ 0, 109 },
	{ 189, 0 },
	{ 0 },
	{ 189, 109 },
	{ 0, 109 }
};

NJS_TEX uv_0005D904[] = {
	{ 255, 0 },
	{ 255, 255 },
	{ 0 },
	{ 0, 255 }
};

NJS_TEX uv_0005D914[] = {
	{ 253, -251 },
	{ 1, -251 },
	{ 253, 251 },
	{ 1, 251 },
	{ 253, -251 },
	{ 1, -251 },
	{ 253, 251 },
	{ 1, 251 },
	{ 253, -251 },
	{ 1, -251 },
	{ 253, 251 },
	{ 1, 251 },
	{ 253, -251 },
	{ 1, -251 },
	{ 253, 251 },
	{ 1, 251 }
};

NJS_TEX uv_0005D954[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

NJS_TEX uv_0005D974[] = {
	{ 508, 255 },
	{ 508, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 508, 255 },
	{ 508, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0005D994[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0005D4BC, NULL, NULL, NULL, uv_0005D694, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 8, poly_0005D4E4, NULL, NULL, NULL, uv_0005D6D4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0005D544, NULL, NULL, NULL, uv_0005D774, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_0005D558, NULL, NULL, NULL, uv_0005D794, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_0005D56C, NULL, NULL, NULL, uv_0005D7B4, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 4, poly_0005D57E, NULL, NULL, NULL, uv_0005D7D4, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, poly_0005D5A6, NULL, NULL, NULL, uv_0005D814, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 2, poly_0005D5BA, NULL, NULL, NULL, uv_0005D834, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 4, poly_0005D5CE, NULL, NULL, NULL, uv_0005D854, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 2, poly_0005D5F6, NULL, NULL, NULL, uv_0005D894, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 2, poly_0005D60A, NULL, NULL, NULL, uv_0005D8B4, NULL },
	{ NJD_MESHSET_TRIMESH | 11, 2, poly_0005D61E, NULL, NULL, NULL, uv_0005D8D4, NULL },
	{ NJD_MESHSET_TRIMESH | 12, 1, poly_0005D63A, NULL, NULL, NULL, uv_0005D904, NULL },
	{ NJD_MESHSET_TRIMESH | 13, 4, poly_0005D644, NULL, NULL, NULL, uv_0005D914, NULL },
	{ NJD_MESHSET_TRIMESH | 14, 2, poly_0005D66C, NULL, NULL, NULL, uv_0005D954, NULL },
	{ NJD_MESHSET_TRIMESH | 15, 2, poly_0005D680, NULL, NULL, NULL, uv_0005D974, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0005DB14[] = {
	{ -324.0818f, -197.8421f, -265.4354f },
	{ -387.8467f, -197.8421f, 68.27644f },
	{ -324.0818f, 1205.091f, -265.4354f },
	{ -387.8467f, 1205.091f, 68.27644f },
	{ 322.2331f, -197.8421f, -265.4354f },
	{ 385.998f, -197.8421f, 68.27642f },
	{ 322.2331f, 1205.091f, -265.4354f },
	{ 385.998f, 1205.091f, 68.27642f },
	{ -324.0818f, 1205.091f, 137.274f },
	{ -324.0818f, -197.8421f, 137.274f },
	{ 322.2331f, 1205.091f, 137.274f },
	{ 322.2332f, -197.8421f, 137.274f },
	{ 385.998f, 1205.091f, -192.4931f },
	{ 385.998f, -197.8421f, -192.4931f },
	{ -387.8467f, 1205.091f, -192.4931f },
	{ -387.8467f, -197.8421f, -192.4931f },
	{ -324.0818f, 892.6198f, 137.274f },
	{ -387.8467f, 892.6198f, 68.27644f },
	{ -387.8467f, 892.6198f, -192.4931f },
	{ -324.0818f, 892.6198f, -265.4354f },
	{ 322.2331f, 892.6198f, -265.4354f },
	{ 385.998f, 892.6198f, -192.4931f },
	{ 385.998f, 892.6198f, 68.27642f },
	{ 322.2331f, 892.6198f, 137.274f },
	{ -324.0818f, 408.2325f, -265.4354f },
	{ -387.8467f, 408.2325f, -192.4931f },
	{ -387.8467f, 408.2325f, 68.27644f },
	{ -324.0818f, 408.2325f, 137.274f },
	{ 322.2331f, 408.2325f, 137.274f },
	{ 385.998f, 408.2325f, 68.27642f },
	{ 385.998f, 408.2325f, -192.4931f },
	{ 322.2331f, 408.2325f, -265.4354f },
	{ -324.0818f, 0.089897f, 137.274f },
	{ -387.8467f, 0.089897f, 68.27644f },
	{ 322.2331f, 0.089897f, 137.274f },
	{ 385.998f, 0.089897f, 68.27642f },
	{ 385.998f, 0.089897f, -192.4931f },
	{ 322.2331f, 0.089897f, -265.4354f },
	{ -324.0818f, 0.089897f, -265.4354f },
	{ -387.8467f, 0.089897f, -192.4931f },
	{ -254.2809f, 1153.144f, 32.52981f },
	{ -254.2809f, 1153.144f, 118.5124f },
	{ -254.2809f, 1295.879f, 32.52981f },
	{ -254.2809f, 1295.879f, 118.5124f },
	{ -168.2981f, 1153.144f, 32.52981f },
	{ -168.2981f, 1153.144f, 118.5124f },
	{ -168.2981f, 1295.879f, 32.52981f },
	{ -168.2981f, 1295.879f, 118.5124f },
	{ -188.9275f, 1287.757f, 66.05212f },
	{ -188.9275f, 1287.757f, 81.1653f },
	{ -188.9275f, 1424.539f, 66.05213f },
	{ -188.9275f, 1424.539f, 81.1653f },
	{ -173.8143f, 1287.757f, 66.05212f },
	{ -173.8143f, 1287.757f, 81.1653f },
	{ -173.8143f, 1424.539f, 66.05213f },
	{ -173.8143f, 1424.539f, 81.1653f },
	{ 322.2331f, 204.1612f, 137.274f },
	{ 385.998f, 204.1612f, 68.27642f },
	{ 385.998f, 204.1612f, -192.4931f },
	{ 322.2331f, 204.1612f, -265.4354f },
	{ -324.0818f, 204.1612f, -265.4354f },
	{ -387.8467f, 204.1612f, -192.4931f },
	{ -324.0818f, 204.1612f, 137.274f },
	{ -387.8467f, 204.1612f, 68.27644f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0005DE14[] = {
	{ -0.413427f, 0, -0.9105369f },
	{ -0.931237f, 0, 0.364413f },
	{ -0.322792f, 0.624817f, -0.710921f },
	{ -0.720504f, 0.633545f, 0.281948f },
	{ 0.413427f, 0, -0.9105369f },
	{ 0.931238f, 0, 0.364412f },
	{ 0.322792f, 0.624817f, -0.710921f },
	{ 0.720504f, 0.633545f, 0.281948f },
	{ -0.312222f, 0.627041f, 0.713679f },
	{ -0.400806f, 0, 0.916163f },
	{ 0.312222f, 0.627041f, 0.713679f },
	{ 0.400806f, 0, 0.916163f },
	{ 0.722532f, 0.6358849f, -0.27129f },
	{ 0.936184f, 0, -0.35151f },
	{ -0.722532f, 0.6358849f, -0.27129f },
	{ -0.936184f, 0, -0.35151f },
	{ -0.400806f, 0, 0.916163f },
	{ -0.931238f, 0, 0.364413f },
	{ -0.936184f, 0, -0.35151f },
	{ -0.413427f, 0, -0.9105369f },
	{ 0.413427f, 0, -0.9105369f },
	{ 0.936184f, 0, -0.35151f },
	{ 0.931238f, 0, 0.364413f },
	{ 0.400806f, 0, 0.916163f },
	{ -0.413427f, 0, -0.9105369f },
	{ -0.936184f, 0, -0.35151f },
	{ -0.931238f, 0, 0.364413f },
	{ -0.400806f, 0, 0.916163f },
	{ 0.400806f, 0, 0.916163f },
	{ 0.931238f, 0, 0.364413f },
	{ 0.936184f, 0, -0.35151f },
	{ 0.413427f, 0, -0.9105369f },
	{ -0.400806f, 0, 0.916163f },
	{ -0.931237f, 0, 0.364413f },
	{ 0.400806f, 0, 0.916163f },
	{ 0.931238f, 0, 0.364413f },
	{ 0.936184f, 0, -0.35151f },
	{ 0.413427f, 0, -0.9105369f },
	{ -0.413427f, 0, -0.9105369f },
	{ -0.936184f, 0, -0.35151f },
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
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.400806f, 0, 0.916163f },
	{ 0.931238f, 0, 0.364413f },
	{ 0.936184f, 0, -0.35151f },
	{ 0.413427f, 0, -0.9105369f },
	{ -0.413427f, 0, -0.9105369f },
	{ -0.936184f, 0, -0.35151f },
	{ -0.400806f, 0, 0.916163f },
	{ -0.931238f, 0, 0.364413f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0005E114 = { vertex_0005DB14, normal_0005DE14, LengthOfArray<Sint32>(vertex_0005DB14), meshlist_0005D994, matlist_0005D37C, LengthOfArray<Uint16>(meshlist_0005D994), LengthOfArray<Uint16>(matlist_0005D37C), { -0.924347f, 613.3486f, -64.08066f }, 954.5444f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0005E13C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005E114, -1385.568f, -30, -90, 0xFFFFE689, 0x3996, 0xFFFFE553, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0005E170[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 101, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 92, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 151, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 150, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 149, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 148, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 155, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 154, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 152, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 153, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 86, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 97, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 84, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0005E274[] = {
	0x8000u | 18, 3, 60, 5, 56, 4, 57, 1, 59, 7, 58, 0, 63, 2, 61, 6, 62, 3, 60,
	0x8000u | 18, 57, 52, 59, 53, 58, 51, 63, 50, 61, 49, 62, 48, 60, 55, 56, 54, 57, 52
};

extern "C" __declspec(dllexport) Sint16 poly_0005E2C0[] = {
	8, 5, 3, 4, 6, 1, 2, 7, 0
};

extern "C" __declspec(dllexport) Sint16 poly_0005E2D2[] = {
	4, 23, 48, 16, 55,
	4, 19, 53, 20, 51
};

extern "C" __declspec(dllexport) Sint16 poly_0005E2E6[] = {
	4, 9, 26, 8, 27,
	4, 15, 28, 14, 29,
	4, 13, 30, 12, 31,
	4, 10, 24, 11, 25
};

extern "C" __declspec(dllexport) Sint16 poly_0005E30E[] = {
	4, 8, 27, 15, 28,
	4, 12, 31, 10, 24
};

extern "C" __declspec(dllexport) Sint16 poly_0005E322[] = {
	4, 14, 29, 13, 30,
	4, 11, 25, 9, 26
};

extern "C" __declspec(dllexport) Sint16 poly_0005E336[] = {
	4, 11, 18, 10, 19,
	4, 8, 16, 9, 17,
	4, 14, 22, 15, 23,
	4, 12, 20, 13, 21,
	4, 16, 55, 17, 54,
	4, 18, 52, 19, 53,
	4, 20, 51, 21, 50,
	4, 22, 49, 23, 48
};

extern "C" __declspec(dllexport) Sint16 poly_0005E386[] = {
	4, 9, 17, 11, 18,
	4, 13, 21, 14, 22
};

extern "C" __declspec(dllexport) Sint16 poly_0005E39A[] = {
	4, 15, 23, 8, 16,
	4, 10, 19, 12, 20
};

extern "C" __declspec(dllexport) Sint16 poly_0005E3AE[] = {
	4, 17, 54, 18, 52,
	4, 21, 50, 22, 49
};

extern "C" __declspec(dllexport) Sint16 poly_0005E3C2[] = {
	4, 42, 46, 40, 44,
	4, 43, 42, 41, 40,
	4, 47, 43, 45, 41,
	4, 46, 47, 44, 45
};

extern "C" __declspec(dllexport) Sint16 poly_0005E3EA[] = {
	0x8000u | 6, 38, 36, 39, 37, 35, 33,
	0x8000u | 6, 36, 38, 32, 34, 33, 35
};

extern "C" __declspec(dllexport) Sint16 poly_0005E406[] = {
	4, 39, 38, 35, 34
};

NJS_TEX uv_0005E410[] = {
	{ 1744, 0 },
	{ 1912, 255 },
	{ 1912, 0 },
	{ 2990, 255 },
	{ 2990, 0 },
	{ 3157, 255 },
	{ 3157, 0 },
	{ 3650, 255 },
	{ 3650, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1077, 255 },
	{ 1077, 0 },
	{ 1251, 255 },
	{ 1251, 0 },
	{ 1744, 255 },
	{ 1744, 0 },
	{ 1912, 255 },
	{ 3655, 255 },
	{ 3164, 0 },
	{ 3164, 255 },
	{ 2990, 0 },
	{ 2990, 255 },
	{ 1912, 0 },
	{ 1912, 255 },
	{ 1737, 0 },
	{ 1737, 255 },
	{ 1245, 0 },
	{ 1245, 255 },
	{ 1077, 0 },
	{ 1077, 255 },
	{ 3825, 0 },
	{ 3825, 255 },
	{ 3655, 0 },
	{ 3655, 255 },
	{ 3164, 0 }
};

NJS_TEX uv_0005E4A0[] = {
	{ 466, -255 },
	{ 510, -167 },
	{ 42, -255 },
	{ 510, 162 },
	{ 0, -167 },
	{ 466, 255 },
	{ 0, 162 },
	{ 42, 255 }
};

NJS_TEX uv_0005E4C0[] = {
	{ 508, 254 },
	{ 508, 0 },
	{ 0, 254 },
	{ 0 },
	{ 0, 254 },
	{ 0 },
	{ 508, 254 },
	{ 508, 0 }
};

NJS_TEX uv_0005E4E0[] = {
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 255, 255 },
	{ 254, 0 },
	{ 255, 255 },
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 255 }
};

NJS_TEX uv_0005E520[] = {
	{ 0 },
	{ 0, 255 },
	{ 508, 0 },
	{ 508, 255 },
	{ 508, 0 },
	{ 508, 255 },
	{ 0 },
	{ 0, 255 }
};

NJS_TEX uv_0005E540[] = {
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 0 },
	{ 0, 255 }
};

NJS_TEX uv_0005E560[] = {
	{ 0, 255 },
	{ 0 },
	{ 254, 254 },
	{ 254, 0 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 254 },
	{ 0 },
	{ 0, 254 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 254 },
	{ 0 }
};

NJS_TEX uv_0005E5E0[] = {
	{ 0, 255 },
	{ 0 },
	{ 254, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 254, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_TEX uv_0005E600[] = {
	{ 508, 255 },
	{ 508, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 508, 255 },
	{ 508, 0 }
};

NJS_TEX uv_0005E620[] = {
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 0 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 }
};

NJS_TEX uv_0005E640[] = {
	{ 253, 249 },
	{ 253, -504 },
	{ 1, 249 },
	{ 1, -504 },
	{ 253, 249 },
	{ 253, -504 },
	{ 1, 249 },
	{ 1, -504 },
	{ 253, 249 },
	{ 253, -504 },
	{ 1, 249 },
	{ 1, -504 },
	{ 253, 249 },
	{ 253, -504 },
	{ 1, 249 },
	{ 1, -504 }
};

NJS_TEX uv_0005E680[] = {
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

NJS_TEX uv_0005E6B0[] = {
	{ 255, 0 },
	{ 255, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0005E6C0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0005E274, NULL, NULL, NULL, uv_0005E410, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0005E2C0, NULL, NULL, NULL, uv_0005E4A0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0005E2D2, NULL, NULL, NULL, uv_0005E4C0, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, poly_0005E2E6, NULL, NULL, NULL, uv_0005E4E0, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_0005E30E, NULL, NULL, NULL, uv_0005E520, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, poly_0005E322, NULL, NULL, NULL, uv_0005E540, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 8, poly_0005E336, NULL, NULL, NULL, uv_0005E560, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 2, poly_0005E386, NULL, NULL, NULL, uv_0005E5E0, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 2, poly_0005E39A, NULL, NULL, NULL, uv_0005E600, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 2, poly_0005E3AE, NULL, NULL, NULL, uv_0005E620, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 4, poly_0005E3C2, NULL, NULL, NULL, uv_0005E640, NULL },
	{ NJD_MESHSET_TRIMESH | 11, 2, poly_0005E3EA, NULL, NULL, NULL, uv_0005E680, NULL },
	{ NJD_MESHSET_TRIMESH | 12, 1, poly_0005E406, NULL, NULL, NULL, uv_0005E6B0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0005E7F8[] = {
	{ -341.8839f, 517.4279f, -241.1127f },
	{ -409.344f, 517.4279f, 158.4913f },
	{ 341.8845f, 517.4279f, -241.1127f },
	{ 409.3445f, 517.4279f, 158.4913f },
	{ -341.8839f, 517.4279f, 241.1127f },
	{ 341.8845f, 517.4279f, 241.1127f },
	{ 409.3445f, 517.4279f, -153.7678f },
	{ -409.344f, 517.4279f, -153.7678f },
	{ -319.5177f, 5.618313f, 225.339f },
	{ -382.5645f, 5.618314f, 148.1227f },
	{ -319.5177f, 5.618315f, -225.339f },
	{ -382.5645f, 5.618315f, -143.7082f },
	{ 319.5182f, 5.618315f, -225.339f },
	{ 382.565f, 5.618315f, -143.7082f },
	{ 382.565f, 5.618314f, 148.1227f },
	{ 319.5182f, 5.618313f, 225.339f },
	{ -319.5177f, 206.4075f, 225.339f },
	{ -382.5645f, 206.4075f, 148.1227f },
	{ -382.5645f, 206.4075f, -143.7082f },
	{ -319.5177f, 206.4075f, -225.339f },
	{ 319.5182f, 206.4075f, -225.339f },
	{ 382.565f, 206.4075f, -143.7082f },
	{ 382.565f, 206.4075f, 148.1227f },
	{ 319.5182f, 206.4075f, 225.339f },
	{ -319.5177f, -158.7377f, -225.339f },
	{ -382.5645f, -158.7377f, -143.7082f },
	{ -382.5645f, -158.7377f, 148.1227f },
	{ -319.5177f, -158.7377f, 225.339f },
	{ 319.5182f, -158.7377f, 225.339f },
	{ 382.565f, -158.7377f, 148.1227f },
	{ 382.565f, -158.7377f, -143.7082f },
	{ 319.5182f, -158.7377f, -225.339f },
	{ -250.5029f, 507.8971f, 108.1182f },
	{ -250.5029f, 507.8971f, 204.3426f },
	{ -250.5029f, 660.0239f, 108.1182f },
	{ -250.5029f, 660.0239f, 204.3426f },
	{ -165.4886f, 507.8971f, 108.1182f },
	{ -165.4886f, 507.8971f, 204.3426f },
	{ -165.4886f, 660.0239f, 108.1182f },
	{ -165.4886f, 660.0239f, 204.3426f },
	{ -185.8856f, 650.9351f, 145.6335f },
	{ -185.8856f, 650.9351f, 162.5468f },
	{ -185.8856f, 804.0109f, 145.6335f },
	{ -185.8856f, 804.0109f, 162.5468f },
	{ -170.9426f, 650.9351f, 145.6335f },
	{ -170.9426f, 650.9351f, 162.5468f },
	{ -170.9426f, 804.0109f, 145.6335f },
	{ -170.9426f, 804.0109f, 162.5468f },
	{ 319.5182f, 489.9345f, 225.339f },
	{ 382.565f, 489.9345f, 148.1227f },
	{ 382.565f, 489.9345f, -143.7082f },
	{ 319.5182f, 489.9345f, -225.339f },
	{ -382.5645f, 489.9345f, -143.7082f },
	{ -319.5177f, 489.9345f, -225.339f },
	{ -382.5645f, 489.9345f, 148.1227f },
	{ -319.5177f, 489.9345f, 225.339f },
	{ -341.8839f, 501.9749f, 241.1127f },
	{ -409.344f, 501.9749f, 158.4913f },
	{ -341.8839f, 501.9749f, -241.1127f },
	{ -409.344f, 501.9749f, -153.7678f },
	{ 341.8845f, 501.9749f, 241.1127f },
	{ 409.3445f, 501.9749f, -153.7678f },
	{ 409.3445f, 501.9749f, 158.4913f },
	{ 341.8845f, 501.9749f, -241.1127f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0005EAF8[] = {
	{ -0.3459f, 0.620037f, -0.7042069f },
	{ -0.7247429f, 0.638774f, 0.258294f },
	{ 0.345899f, 0.620037f, -0.7042069f },
	{ 0.7247429f, 0.638774f, 0.258294f },
	{ -0.335618f, 0.6221499f, 0.707312f },
	{ 0.335618f, 0.6221499f, 0.707312f },
	{ 0.726315f, 0.641131f, -0.247826f },
	{ -0.726315f, 0.641131f, -0.247826f },
	{ -0.428687f, 0, 0.903453f },
	{ -0.941965f, 0, 0.33571f },
	{ -0.440876f, 0, -0.897568f },
	{ -0.946423f, 0, -0.32293f },
	{ 0.440876f, 0, -0.897568f },
	{ 0.946423f, 0, -0.32293f },
	{ 0.941965f, 0, 0.335711f },
	{ 0.428687f, 0, 0.903453f },
	{ -0.428687f, 0, 0.903453f },
	{ -0.941965f, 0, 0.33571f },
	{ -0.946423f, 0, -0.32293f },
	{ -0.440876f, 0, -0.897568f },
	{ 0.440876f, 0, -0.897568f },
	{ 0.946423f, 0, -0.32293f },
	{ 0.941965f, 0, 0.335711f },
	{ 0.428687f, 0, 0.903453f },
	{ -0.440876f, 0, -0.897568f },
	{ -0.946423f, 0, -0.32293f },
	{ -0.941965f, 0, 0.33571f },
	{ -0.428687f, 0, 0.903453f },
	{ 0.428687f, 0, 0.903453f },
	{ 0.941965f, 0, 0.335711f },
	{ 0.946423f, 0, -0.32293f },
	{ 0.440876f, 0, -0.897568f },
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
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.292807f, -0.572333f, 0.765963f },
	{ 0.742627f, -0.616073f, 0.262599f },
	{ 0.748661f, -0.612672f, -0.253258f },
	{ 0.300678f, -0.576794f, -0.75954f },
	{ -0.748661f, -0.612672f, -0.253258f },
	{ -0.300678f, -0.576794f, -0.75954f },
	{ -0.742627f, -0.616073f, 0.262599f },
	{ -0.292807f, -0.572333f, 0.765963f },
	{ -0.396476f, -0.475692f, 0.78519f },
	{ -0.8127019f, -0.505056f, 0.290574f },
	{ -0.406969f, -0.475062f, -0.780187f },
	{ -0.815891f, -0.5062129f, -0.279411f },
	{ 0.396476f, -0.475692f, 0.78519f },
	{ 0.815891f, -0.5062129f, -0.279411f },
	{ 0.8127019f, -0.505056f, 0.290574f },
	{ 0.406968f, -0.475062f, -0.780187f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0005EDF8 = { vertex_0005E7F8, normal_0005EAF8, LengthOfArray<Sint32>(vertex_0005E7F8), meshlist_0005E6C0, matlist_0005E170, LengthOfArray<Uint16>(meshlist_0005E6C0), LengthOfArray<Uint16>(matlist_0005E170), { 0.00029f, 322.6366f, 0 }, 538.3834f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0005EE20 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005EDF8, -715, 5, -480, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0005EE54[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 138, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 97, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 86, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 158, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 159, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 136, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 156, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 160, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 157, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0005EF08[] = {
	4, 3, 2, 1, 0,
	4, 7, 3, 5, 1,
	4, 6, 7, 4, 5,
	4, 2, 6, 0, 4
};

extern "C" __declspec(dllexport) Sint16 poly_0005EF30[] = {
	4, 7, 6, 3, 2
};

extern "C" __declspec(dllexport) Sint16 poly_0005EF3A[] = {
	4, 11, 10, 9, 8,
	4, 15, 11, 13, 9,
	4, 14, 15, 12, 13,
	4, 10, 14, 8, 12,
	4, 15, 14, 11, 10,
	4, 19, 18, 17, 16,
	4, 23, 19, 21, 17,
	4, 22, 23, 20, 21,
	4, 18, 22, 16, 20,
	4, 23, 22, 19, 18
};

extern "C" __declspec(dllexport) Sint16 poly_0005EF9E[] = {
	4, 48, 70, 29, 69,
	4, 24, 46, 28, 45,
	4, 47, 78, 25, 77,
	4, 29, 86, 48, 85,
	4, 82, 85, 81, 86,
	4, 25, 68, 47, 67,
	4, 70, 57, 69, 59,
	4, 57, 60, 59, 58,
	4, 60, 67, 58, 68,
	4, 78, 74, 77, 73
};

extern "C" __declspec(dllexport) Sint16 poly_0005F002[] = {
	4, 45, 82, 28, 81,
	4, 24, 73, 46, 74
};

extern "C" __declspec(dllexport) Sint16 poly_0005F016[] = {
	8, 26, 37, 34, 39, 32, 44, 43, 42
};

extern "C" __declspec(dllexport) Sint16 poly_0005F028[] = {
	3, 33, 27, 41,
	6, 31, 30, 38, 42, 56, 44,
	3, 35, 55, 87,
	3, 33, 40, 32,
	0x8000u | 5, 32, 34, 40, 36, 41,
	3, 35, 37, 26,
	5, 42, 30, 43, 33, 32,
	4, 39, 54, 44, 56,
	3, 71, 55, 35,
	3, 80, 53, 27,
	3, 31, 38, 56,
	3, 27, 53, 65,
	3, 41, 40, 33,
	4, 30, 31, 33, 27,
	3, 27, 65, 64,
	4, 56, 76, 31, 27,
	3, 76, 80, 27,
	0x8000u | 8, 64, 27, 63, 41, 35, 36, 26, 34,
	3, 63, 71, 35,
	0x8000u | 5, 37, 39, 35, 54, 84,
	3, 35, 87, 84
};

extern "C" __declspec(dllexport) Sint16 poly_0005F0F2[] = {
	4, 51, 72, 48, 70,
	4, 49, 83, 45, 82,
	4, 46, 52, 45, 49,
	4, 50, 79, 47, 78,
	4, 48, 85, 51, 88,
	4, 83, 88, 82, 85,
	4, 47, 67, 50, 66,
	4, 72, 61, 70, 57,
	4, 61, 62, 57, 60,
	4, 62, 66, 60, 67,
	4, 46, 74, 52, 75,
	4, 74, 78, 75, 79
};

extern "C" __declspec(dllexport) Sint16 poly_0005F16A[] = {
	4, 52, 75, 56, 76,
	4, 54, 49, 56, 52,
	4, 51, 88, 55, 87,
	4, 50, 66, 53, 65,
	4, 54, 84, 49, 83,
	4, 84, 87, 83, 88,
	4, 55, 71, 51, 72,
	4, 71, 63, 72, 61,
	4, 63, 64, 61, 62,
	4, 64, 65, 62, 66,
	4, 53, 80, 50, 79,
	4, 75, 79, 76, 80
};

NJS_TEX uv_0005F1E4[] = {
	{ 0 },
	{ 254, 0 },
	{ -1, 255 },
	{ 254, 255 },
	{ 253, 0 },
	{ 0 },
	{ 251, 255 },
	{ 0, 255 },
	{ 254, 0 },
	{ 0 },
	{ 254, 255 },
	{ -1, 255 },
	{ 0 },
	{ 253, 0 },
	{ 0, 255 },
	{ 251, 255 }
};

NJS_TEX uv_0005F224[] = {
	{ 255, 0 },
	{ 255, 255 },
	{ 0 },
	{ 0, 255 }
};

NJS_TEX uv_0005F234[] = {
	{ 0, -1008 },
	{ 254, -1011 },
	{ 0, 254 },
	{ 253, 256 },
	{ 0, -1008 },
	{ 254, -1011 },
	{ 0, 254 },
	{ 253, 256 },
	{ 0, -1008 },
	{ 254, -1011 },
	{ 0, 254 },
	{ 253, 256 },
	{ 0, -1008 },
	{ 254, -1011 },
	{ 0, 254 },
	{ 253, 256 },
	{ 0, -1008 },
	{ 254, -1011 },
	{ 0, 254 },
	{ 253, 256 },
	{ 0, -1008 },
	{ 254, -1011 },
	{ 0, 254 },
	{ 253, 256 },
	{ 0, -1008 },
	{ 254, -1011 },
	{ 0, 254 },
	{ 253, 256 },
	{ 0, -1008 },
	{ 254, -1011 },
	{ 0, 254 },
	{ 253, 256 },
	{ 0, -1008 },
	{ 254, -1011 },
	{ 0, 254 },
	{ 253, 256 },
	{ 0, -1008 },
	{ 254, -1011 },
	{ 0, 254 },
	{ 253, 256 }
};

NJS_TEX uv_0005F2D4[] = {
	{ 1, 159 },
	{ 33, 159 },
	{ 0, 2 },
	{ 33, 2 },
	{ 0, 157 },
	{ 0, 1 },
	{ 496, 157 },
	{ 496, 1 },
	{ 1, 159 },
	{ 34, 150 },
	{ 0, 2 },
	{ 33, 2 },
	{ 1, 159 },
	{ 34, 150 },
	{ 0, 2 },
	{ 33, 2 },
	{ 1, 159 },
	{ 33, 159 },
	{ 0, 2 },
	{ 33, 2 },
	{ 1, 159 },
	{ 33, 159 },
	{ 0, 2 },
	{ 33, 2 },
	{ 1, 159 },
	{ 33, 159 },
	{ 0, 2 },
	{ 33, 2 },
	{ 458, 0 },
	{ 89, 0 },
	{ 458, 163 },
	{ 89, 164 },
	{ 1, 159 },
	{ 33, 159 },
	{ 0, 2 },
	{ 33, 2 },
	{ 1, 159 },
	{ 33, 159 },
	{ 0, 2 },
	{ 33, 2 }
};

NJS_TEX uv_0005F374[] = {
	{ 0, 82 },
	{ 254, 0 },
	{ 0, 255 },
	{ 254, 169 },
	{ 0, 255 },
	{ 254, 169 },
	{ 0, 82 },
	{ 255, 0 }
};

NJS_TEX uv_0005F394[] = {
	{ 292, -254 },
	{ 510, -219 },
	{ 167, -250 },
	{ 510, 254 },
	{ 105, -179 },
	{ 0, 254 },
	{ 55, -105 },
	{ 0, 15 }
};

NJS_TEX uv_0005F3B4[] = {
	{ 88, 102 },
	{ 12, 189 },
	{ 114, 165 },
	{ 103, 165 },
	{ 111, 103 },
	{ 152, 79 },
	{ 153, 0 },
	{ 254, 255 },
	{ 254, 0 },
	{ 21, 71 },
	{ 0, 254 },
	{ 11, 255 },
	{ 88, 102 },
	{ 115, 85 },
	{ 57, 0 },
	{ 57, 0 },
	{ 96, 1 },
	{ 115, 85 },
	{ 156, 65 },
	{ 112, 165 },
	{ 241, 63 },
	{ 242, 1 },
	{ 154, 1 },
	{ 153, 0 },
	{ 111, 103 },
	{ 96, 0 },
	{ 73, 107 },
	{ 62, 1 },
	{ 253, 1 },
	{ 253, 255 },
	{ 0 },
	{ 0, 255 },
	{ 233, 248 },
	{ 255, 249 },
	{ 241, 63 },
	{ 21, 254 },
	{ 1, 255 },
	{ 17, 190 },
	{ 104, 165 },
	{ 152, 79 },
	{ 254, 255 },
	{ 12, 189 },
	{ 0, 249 },
	{ 17, 254 },
	{ 114, 165 },
	{ 116, 84 },
	{ 89, 102 },
	{ 111, 103 },
	{ 104, 165 },
	{ 73, 107 },
	{ 17, 190 },
	{ 12, 189 },
	{ 9, 254 },
	{ 22, 254 },
	{ 254, 255 },
	{ 38, 255 },
	{ 104, 166 },
	{ 21, 188 },
	{ 22, 255 },
	{ 12, 255 },
	{ 17, 190 },
	{ 49, 254 },
	{ 12, 189 },
	{ 231, 254 },
	{ 114, 165 },
	{ 241, 63 },
	{ 156, 65 },
	{ 154, 1 },
	{ 96, 1 },
	{ 232, 253 },
	{ 239, 245 },
	{ 241, 63 },
	{ 46, 1 },
	{ 254, 0 },
	{ 48, 72 },
	{ 255, 254 },
	{ 41, 254 },
	{ 21, 70 },
	{ 11, 254 },
	{ 22, 254 }
};

NJS_TEX uv_0005F4F4[] = {
	{ 0, 146 },
	{ 41, 146 },
	{ 1, 1 },
	{ 41, 2 },
	{ 3, 10 },
	{ 434, 9 },
	{ 2, 254 },
	{ 436, 160 },
	{ 1, 253 },
	{ 2, 1 },
	{ 494, 253 },
	{ 494, 1 },
	{ 0, 146 },
	{ 41, 146 },
	{ 1, 1 },
	{ 41, 2 },
	{ 0, 146 },
	{ 41, 146 },
	{ 1, 1 },
	{ 41, 2 },
	{ 0, 146 },
	{ 41, 146 },
	{ 1, 1 },
	{ 41, 2 },
	{ 0, 146 },
	{ 41, 146 },
	{ 1, 1 },
	{ 41, 2 },
	{ 0, 146 },
	{ 41, 146 },
	{ 1, 1 },
	{ 41, 2 },
	{ 452, 2 },
	{ 91, 2 },
	{ 452, 152 },
	{ 91, 152 },
	{ 0, 146 },
	{ 41, 146 },
	{ 1, 1 },
	{ 41, 2 },
	{ 2, 254 },
	{ 438, 162 },
	{ 3, 0 },
	{ 436, 0 },
	{ 0, 146 },
	{ 41, 146 },
	{ 1, 1 },
	{ 41, 2 }
};

NJS_TEX uv_0005F5B4[] = {
	{ 2, 253 },
	{ 432, 244 },
	{ 0, 1 },
	{ 440, 0 },
	{ 498, 0 },
	{ 496, 255 },
	{ 2, 0 },
	{ 0, 254 },
	{ 0, 240 },
	{ 35, 240 },
	{ 0, 1 },
	{ 38, 1 },
	{ 0, 240 },
	{ 35, 240 },
	{ 0, 1 },
	{ 38, 1 },
	{ 0, 1 },
	{ 434, 1 },
	{ 2, 255 },
	{ 432, 256 },
	{ 0, 240 },
	{ 35, 240 },
	{ 0, 1 },
	{ 38, 1 },
	{ 0, 240 },
	{ 35, 240 },
	{ 0, 1 },
	{ 38, 1 },
	{ 0, 240 },
	{ 35, 240 },
	{ 0, 1 },
	{ 38, 1 },
	{ 454, 0 },
	{ 98, 0 },
	{ 452, 247 },
	{ 97, 246 },
	{ 0, 240 },
	{ 35, 240 },
	{ 0, 1 },
	{ 38, 1 },
	{ 0, 240 },
	{ 35, 240 },
	{ 0, 1 },
	{ 38, 1 },
	{ 0, 240 },
	{ 35, 240 },
	{ 0, 1 },
	{ 38, 1 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0005F674[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0005EF08, NULL, NULL, NULL, uv_0005F1E4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0005EF30, NULL, NULL, NULL, uv_0005F224, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 10, poly_0005EF3A, NULL, NULL, NULL, uv_0005F234, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 10, poly_0005EF9E, NULL, NULL, NULL, uv_0005F2D4, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_0005F002, NULL, NULL, NULL, uv_0005F374, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_0005F016, NULL, NULL, NULL, uv_0005F394, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 21, poly_0005F028, NULL, NULL, NULL, uv_0005F3B4, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 12, poly_0005F0F2, NULL, NULL, NULL, uv_0005F4F4, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 12, poly_0005F16A, NULL, NULL, NULL, uv_0005F5B4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0005F74C[] = {
	{ -108.8013f, 680.8774f, -168.3323f },
	{ -108.8013f, 631.0098f, 44.64709f },
	{ -108.8013f, 814.7019f, -136.9982f },
	{ -108.8013f, 764.834f, 75.98113f },
	{ 109.9383f, 680.8774f, -168.3323f },
	{ 109.9383f, 631.0098f, 44.64709f },
	{ 109.9383f, 814.7019f, -136.9982f },
	{ 109.9383f, 764.834f, 75.98112f },
	{ -189.7463f, 419.5595f, 73.05522f },
	{ -189.7463f, 417.9134f, 80.08566f },
	{ -189.7463f, 599.7072f, 115.2355f },
	{ -189.7463f, 598.061f, 122.266f },
	{ -182.5256f, 419.5595f, 73.05522f },
	{ -182.5256f, 417.9134f, 80.08566f },
	{ -182.5256f, 599.7072f, 115.2355f },
	{ -182.5256f, 598.061f, 122.266f },
	{ -159.9578f, 668.4315f, -191.2532f },
	{ -159.9578f, 666.7853f, -184.2227f },
	{ -159.9578f, 903.8779f, -136.1251f },
	{ -159.9578f, 902.2317f, -129.0946f },
	{ -152.7372f, 668.4315f, -191.2532f },
	{ -152.7372f, 666.7853f, -184.2227f },
	{ -152.7372f, 903.8779f, -136.1251f },
	{ -152.7372f, 902.2317f, -129.0946f },
	{ -219.3817f, -199.995f, -506.2714f },
	{ -239.6469f, -191.7357f, -15.31802f },
	{ 35.87576f, 621.9741f, 118.7331f },
	{ -219.3817f, 437.9443f, 111.6702f },
	{ 225.0389f, -199.995f, -506.2714f },
	{ 245.2924f, -191.7357f, -15.31802f },
	{ -150.5932f, 552.6168f, -28.55631f },
	{ -219.3817f, 497.2549f, -39.82266f },
	{ -128.6053f, 637.5513f, 58.89743f },
	{ -96.64501f, 540.0679f, 23.51971f },
	{ -74.21043f, 624.2434f, 115.4708f },
	{ 219.9836f, 563.3246f, 70.48947f },
	{ 35.87576f, 563.3246f, 98.52985f },
	{ 225.0389f, 628.4362f, 90.94627f },
	{ -219.5988f, 597.7871f, -112.6535f },
	{ 225.0389f, 717.9148f, -285.1053f },
	{ -47.49274f, 546.3851f, 76.44253f },
	{ -48.81498f, 467.0156f, 82.45066f },
	{ -219.8895f, 673.434f, -95.00153f },
	{ -172.2324f, 651.1208f, 0.909593f },
	{ -220.3374f, 718.2606f, -285.0193f },
	{ 225.0389f, -0.338212f, -458.3416f },
	{ -219.6206f, -0.251759f, -458.32f },
	{ -239.6469f, 0.588922f, 28.19684f },
	{ 245.2924f, 0.41545f, 28.15623f },
	{ 225.0389f, 247.3528f, -397.1553f },
	{ -238.6255f, 153.7602f, 62.62692f },
	{ 245.2924f, 153.6579f, 62.60297f },
	{ -219.1614f, 247.4388f, -397.132f },
	{ -238.365f, 377.0102f, 117.8212f },
	{ 225.0389f, 486.0958f, -341.3805f },
	{ 245.2924f, 377.0555f, 117.8318f },
	{ -219.4003f, 486.2682f, -341.3357f },
	{ 188.9317f, 0.458818f, 4.439909f },
	{ -180.3339f, -191.7357f, -39.04449f },
	{ 188.9317f, -191.7357f, -39.04449f },
	{ -180.3339f, 0.545554f, 4.46022f },
	{ 189.3206f, 153.6835f, 38.88248f },
	{ -179.1672f, 153.7346f, 38.89446f },
	{ 189.4197f, 377.0442f, 94.10267f },
	{ -178.8698f, 377.0215f, 94.09736f },
	{ -189.3331f, 377.0158f, 120.3789f },
	{ -189.5756f, 153.7474f, 65.18032f },
	{ -190.5267f, 0.567238f, 30.74816f },
	{ -190.5267f, -191.7357f, -12.76162f },
	{ 196.5349f, -191.7357f, -12.76162f },
	{ 196.5349f, 0.437134f, 30.7177f },
	{ 196.7053f, 377.0498f, 120.3868f },
	{ 196.6707f, 153.6707f, 65.16235f },
	{ -219.6206f, -195.8654f, -79.09834f },
	{ -219.7401f, 0.168581f, -32.28677f },
	{ -219.0419f, 163.9619f, 10.12977f },
	{ -219.0419f, 388.5308f, 63.46804f },
	{ -239.5166f, -193.8005f, -69.95943f },
	{ -239.5818f, 0.378752f, -24.79631f },
	{ -238.6906f, 158.8611f, 15.78397f },
	{ -238.5603f, 386.0059f, 71.12875f },
	{ 225.0389f, -195.8654f, -79.09835f },
	{ 225.0389f, 0.038619f, -32.31786f },
	{ 225.0389f, 163.8678f, 10.10617f },
	{ 225.0389f, 388.4672f, 63.45095f },
	{ 245.2924f, 0.227035f, -24.83216f },
	{ 245.2924f, -193.8005f, -69.95945f },
	{ 245.2924f, 385.9967f, 71.1255f },
	{ 245.2924f, 158.7629f, 15.7602f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0005FB78[] = {
	{ -0.7071069f, 0.161204f, -0.688486f },
	{ -0.7071069f, -0.161204f, 0.688486f },
	{ -0.57735f, 0.69377f, -0.430524f },
	{ -0.57735f, 0.430524f, 0.693769f },
	{ 0.7071069f, 0.161204f, -0.688486f },
	{ 0.7071069f, -0.161204f, 0.688486f },
	{ 0.57735f, 0.69377f, -0.430524f },
	{ 0.57735f, 0.430524f, 0.693769f },
	{ -0.707106f, 0.161204f, -0.688487f },
	{ -0.707108f, -0.161204f, 0.688485f },
	{ -0.57735f, 0.693769f, -0.430525f },
	{ -0.57735f, 0.430525f, 0.693769f },
	{ 0.707106f, 0.161204f, -0.688487f },
	{ 0.707108f, -0.161204f, 0.688485f },
	{ 0.57735f, 0.693769f, -0.430525f },
	{ 0.57735f, 0.430525f, 0.693769f },
	{ -0.707108f, 0.161204f, -0.688485f },
	{ -0.707106f, -0.161204f, 0.688487f },
	{ -0.57735f, 0.693768f, -0.430525f },
	{ -0.57735f, 0.430525f, 0.693769f },
	{ 0.707108f, 0.161204f, -0.688485f },
	{ 0.707106f, -0.161204f, 0.688487f },
	{ 0.57735f, 0.693768f, -0.430525f },
	{ 0.57735f, 0.430525f, 0.693769f },
	{ -0.644591f, 0.177735f, -0.743581f },
	{ -0.775731f, -0.139263f, 0.615505f },
	{ 0.018266f, 0.460649f, 0.887394f },
	{ -0.559316f, 0.422121f, 0.713428f },
	{ 0.644918f, 0.1784f, -0.743138f },
	{ 0.775169f, -0.139411f, 0.6161799f },
	{ -0.7305599f, 0.10884f, 0.674118f },
	{ -0.906586f, 0.327278f, 0.26644f },
	{ -0.59818f, 0.418786f, 0.6832269f },
	{ -0.652521f, 0.116247f, 0.748801f },
	{ -0.373484f, 0.34381f, 0.861571f },
	{ 0.747664f, -0.093674f, 0.657437f },
	{ 0.035193f, -0.180696f, 0.982909f },
	{ 0.620923f, 0.431623f, 0.654337f },
	{ -0.9762599f, -0.032805f, 0.214102f },
	{ 0.579812f, 0.692888f, -0.428631f },
	{ -0.474716f, -0.193086f, 0.858698f },
	{ -0.06279799f, 0.051273f, 0.996708f },
	{ -0.758804f, 0.5548649f, 0.341089f },
	{ -0.658702f, 0.466615f, 0.590239f },
	{ -0.579729f, 0.694963f, -0.425372f },
	{ 0.706368f, 0.167495f, -0.6877429f },
	{ -0.706634f, 0.167495f, -0.6874689f },
	{ -0.725833f, -0.148713f, 0.671603f },
	{ 0.724802f, -0.151569f, 0.672078f },
	{ 0.7085339f, 0.164891f, -0.686142f },
	{ -0.726258f, -0.155263f, 0.6696579f },
	{ 0.727275f, -0.157576f, 0.668013f },
	{ -0.708284f, 0.165256f, -0.686312f },
	{ -0.707712f, 0.039341f, 0.705405f },
	{ 0.706122f, 0.160977f, -0.689549f },
	{ 0.685161f, 0.036269f, 0.727489f },
	{ -0.7061819f, 0.162689f, -0.689086f },
	{ -0.598839f, -0.175984f, 0.7812949f },
	{ 0.521231f, -0.188328f, 0.832377f },
	{ -0.553724f, -0.183755f, 0.812172f },
	{ 0.561609f, -0.18381f, 0.806727f },
	{ -0.5991459f, -0.183292f, 0.779377f },
	{ 0.556008f, -0.193162f, 0.808421f },
	{ -0.593371f, -0.06184f, 0.80255f },
	{ 0.507125f, -0.09758899f, 0.856329f },
	{ 0.556049f, 0.083376f, 0.826957f },
	{ 0.539459f, -0.195863f, 0.8189149f },
	{ 0.538209f, -0.187621f, 0.821663f },
	{ 0.574929f, -0.18056f, 0.798032f },
	{ -0.6153899f, -0.173939f, 0.768791f },
	{ -0.578595f, -0.179118f, 0.7957039f },
	{ -0.555255f, 0.035941f, 0.830903f },
	{ -0.582371f, -0.186724f, 0.7911879f },
	{ -0.874929f, 0.108866f, -0.471856f },
	{ -0.823257f, 0.135772f, -0.551193f },
	{ -0.818211f, 0.138486f, -0.5579889f },
	{ -0.871642f, 0.229573f, -0.433056f },
	{ -0.765767f, 0.145604f, -0.6264189f },
	{ -0.819391f, 0.139236f, -0.5560679f },
	{ -0.8198299f, 0.141429f, -0.554866f },
	{ -0.795216f, 0.344652f, -0.498845f },
	{ 0.873167f, 0.11321f, -0.474092f },
	{ 0.8214329f, 0.137446f, -0.553495f },
	{ 0.815127f, 0.138961f, -0.562367f },
	{ 0.8039179f, 0.07955f, -0.589395f },
	{ 0.81731f, 0.139485f, -0.559061f },
	{ 0.763766f, 0.149924f, -0.627841f },
	{ 0.849095f, 0.127683f, -0.512576f },
	{ 0.817338f, 0.139409f, -0.559038f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0005FFA4 = { vertex_0005F74C, normal_0005FB78, LengthOfArray<Sint32>(vertex_0005F74C), meshlist_0005F674, matlist_0005EE54, LengthOfArray<Uint16>(meshlist_0005F674), LengthOfArray<Uint16>(matlist_0005EE54), { 2.822784f, 351.9414f, -192.0027f }, 639.5201f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0005FFCC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005FFA4, 652, 0, -2167, 0, 0x1C8, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00060000[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 95, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 92, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 85, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 91, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 85, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00060064[] = {
	0x8000u | 6, 6, 4, 7, 5, 3, 1,
	0x8000u | 6, 4, 6, 0, 2, 1, 3
};

extern "C" __declspec(dllexport) Sint16 poly_00060080[] = {
	4, 7, 6, 3, 2,
	0x8000u | 10, 16, 25, 9, 23, 17, 21, 8, 19, 16, 25,
	4, 19, 25, 18, 20,
	4, 33, 32, 29, 28,
	8, 21, 19, 22, 18, 24, 20, 23, 25,
	0x8000u | 10, 33, 35, 29, 34, 28, 37, 32, 36, 33, 35,
	4, 23, 21, 24, 22
};

extern "C" __declspec(dllexport) Sint16 poly_000600E6[] = {
	4, 9, 16, 15, 13,
	4, 17, 9, 10, 15,
	4, 8, 17, 11, 10,
	4, 16, 8, 13, 11,
	10, 41, 43, 45, 42, 44, 38, 40, 39, 41, 43,
	10, 51, 49, 47, 48, 46, 52, 50, 53, 51, 49,
	4, 30, 37, 31, 36,
	4, 27, 35, 26, 34,
	10, 57, 59, 12, 58, 14, 54, 56, 55, 57, 59
};

extern "C" __declspec(dllexport) Sint16 poly_00060164[] = {
	4, 45, 44, 41, 40,
	4, 53, 52, 49, 48,
	4, 12, 14, 57, 56
};

extern "C" __declspec(dllexport) Sint16 poly_00060182[] = {
	4, 26, 34, 30, 37,
	4, 31, 36, 27, 35
};

NJS_TEX uv_00060198[] = {
	{ 0 },
	{ 0, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1019, 255 },
	{ 1019, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1020, 255 },
	{ 1020, 0 }
};

NJS_TEX uv_000601C8[] = {
	{ 765, -255 },
	{ 764, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 0, -46 },
	{ 17, -247 },
	{ 0, -254 },
	{ 492, -247 },
	{ 510, -254 },
	{ 492, -53 },
	{ 510, -46 },
	{ 17, -53 },
	{ 0, -46 },
	{ 17, -247 },
	{ 17, -53 },
	{ 17, -247 },
	{ 22, -245 },
	{ 486, -245 },
	{ 474, 36 },
	{ 474, 255 },
	{ 318, 36 },
	{ 318, 255 },
	{ 492, -53 },
	{ 17, -53 },
	{ 22, -55 },
	{ 22, -245 },
	{ 486, -55 },
	{ 486, -245 },
	{ 492, -247 },
	{ 17, -247 },
	{ 474, 36 },
	{ 324, 40 },
	{ 318, 36 },
	{ 324, 250 },
	{ 318, 255 },
	{ 468, 250 },
	{ 474, 255 },
	{ 468, 40 },
	{ 474, 36 },
	{ 324, 40 },
	{ 492, -247 },
	{ 492, -53 },
	{ 486, -55 },
	{ 22, -55 }
};

NJS_TEX uv_00060278[] = {
	{ 506, 1 },
	{ 3, 1 },
	{ 506, 253 },
	{ 3, 253 },
	{ 510, 64 },
	{ 0, 64 },
	{ 510, 249 },
	{ 0, 249 },
	{ 506, 1 },
	{ 3, 1 },
	{ 506, 253 },
	{ 3, 253 },
	{ 0, 64 },
	{ 510, 64 },
	{ 0, 249 },
	{ 510, 249 },
	{ 71, 5 },
	{ 176, 87 },
	{ 176, 5 },
	{ 176, 87 },
	{ 176, 5 },
	{ 71, 87 },
	{ 71, 5 },
	{ 71, 87 },
	{ 71, 5 },
	{ 176, 87 },
	{ 438, 87 },
	{ 332, 5 },
	{ 332, 87 },
	{ 332, 5 },
	{ 332, 87 },
	{ 438, 5 },
	{ 438, 87 },
	{ 438, 5 },
	{ 438, 87 },
	{ 332, 5 },
	{ 506, 253 },
	{ 506, 1 },
	{ 3, 253 },
	{ 3, 1 },
	{ 506, 253 },
	{ 506, 1 },
	{ 3, 253 },
	{ 3, 1 },
	{ 202, 5 },
	{ 306, 87 },
	{ 306, 5 },
	{ 306, 87 },
	{ 306, 5 },
	{ 202, 87 },
	{ 202, 5 },
	{ 202, 87 },
	{ 202, 5 },
	{ 306, 87 }
};

NJS_TEX uv_00060350[] = {
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 1 },
	{ 1, 1 }
};

NJS_TEX uv_00060380[] = {
	{ 0, 254 },
	{ 0 },
	{ 255, 254 },
	{ 255, 0 },
	{ 255, 254 },
	{ 255, 0 },
	{ 0, 254 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000603A0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00060064, NULL, NULL, NULL, uv_00060198, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 7, poly_00060080, NULL, NULL, NULL, uv_000601C8, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 9, poly_000600E6, NULL, NULL, NULL, uv_00060278, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 3, poly_00060164, NULL, NULL, NULL, uv_00060350, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_00060182, NULL, NULL, NULL, uv_00060380, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00060418[] = {
	{ -181.9998f, -85.98881f, -174.7198f },
	{ -181.9998f, -85.98881f, 174.72f },
	{ -181.9998f, 31.0651f, -174.7198f },
	{ -181.9998f, 31.06511f, 174.72f },
	{ 182.0001f, -85.98881f, -174.7198f },
	{ 182.0001f, -85.98881f, 174.72f },
	{ 182.0001f, 31.0651f, -174.7198f },
	{ 182.0001f, 31.0651f, 174.72f },
	{ 146.9441f, 68.4873f, 11.68498f },
	{ -58.00316f, 68.4873f, 122.92f },
	{ 146.9441f, 30.11174f, 122.92f },
	{ 146.9441f, 30.11174f, 11.68498f },
	{ 65.49813f, 80.85044f, 105.4321f },
	{ -58.00316f, 30.11174f, 11.68498f },
	{ 65.49813f, 80.85044f, 71.23508f },
	{ -58.00316f, 30.11174f, 122.92f },
	{ -58.00316f, 68.4873f, 11.68498f },
	{ 146.9441f, 68.4873f, 122.92f },
	{ -48.92386f, 64.04095f, 117.9923f },
	{ -50.83009f, 68.4873f, 15.57823f },
	{ 137.8648f, 64.04095f, 117.9923f },
	{ 139.771f, 68.4873f, 15.57823f },
	{ -48.92386f, 64.04095f, 16.61268f },
	{ 139.771f, 68.4873f, 119.0267f },
	{ 137.8648f, 64.04095f, 16.61268f },
	{ -50.83009f, 68.4873f, 119.0267f },
	{ 72.49487f, 28.95314f, -146.2381f },
	{ 72.49487f, 28.95314f, -34.76864f },
	{ 69.89495f, 86.72625f, -148.8379f },
	{ 69.89495f, 86.72625f, -32.16887f },
	{ 130.268f, 28.95314f, -146.2381f },
	{ 130.268f, 28.95314f, -34.76864f },
	{ 132.8679f, 86.72625f, -148.8379f },
	{ 132.8679f, 86.72625f, -32.16887f },
	{ 72.49487f, 81.99877f, -146.2381f },
	{ 72.49487f, 81.99877f, -34.76864f },
	{ 130.268f, 81.99877f, -34.76864f },
	{ 130.268f, 81.99877f, -146.2381f },
	{ -29.24749f, 63.8851f, 71.23508f },
	{ -29.24749f, 63.8851f, 105.4321f },
	{ -29.24749f, 80.85044f, 71.23508f },
	{ -29.24749f, 80.85044f, 105.4321f },
	{ 12.80783f, 63.8851f, 71.23508f },
	{ 12.80783f, 63.8851f, 105.4321f },
	{ 12.80783f, 80.85044f, 71.23508f },
	{ 12.80783f, 80.85044f, 105.4321f },
	{ 76.1796f, 63.8851f, 71.23508f },
	{ 76.1796f, 63.8851f, 105.4321f },
	{ 76.1796f, 80.85044f, 71.23508f },
	{ 76.1796f, 80.85044f, 105.4321f },
	{ 118.2349f, 63.8851f, 71.23508f },
	{ 118.2349f, 63.8851f, 105.4321f },
	{ 118.2349f, 80.85044f, 71.23508f },
	{ 118.2349f, 80.85044f, 105.4321f },
	{ 23.44283f, 63.8851f, 71.23508f },
	{ 23.44283f, 63.8851f, 105.4321f },
	{ 23.44283f, 80.85044f, 71.23508f },
	{ 23.44283f, 80.85044f, 105.4321f },
	{ 65.49813f, 63.8851f, 71.23508f },
	{ 65.49813f, 63.8851f, 105.4321f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000606E8[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0.000001f, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.7071069f, 0.000001f, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.441746f, 0.733393f, -0.5167159f },
	{ 0.216683f, 0.955867f, 0.198409f },
	{ -0.441746f, 0.733393f, -0.5167159f },
	{ -0.216683f, 0.955867f, 0.198409f },
	{ 0.441746f, 0.733394f, 0.516715f },
	{ -0.216684f, 0.955867f, -0.198409f },
	{ -0.441746f, 0.733394f, 0.516715f },
	{ 0.216684f, 0.955867f, -0.198409f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.666935f, 0.332271f, -0.666928f },
	{ -0.666935f, 0.332271f, 0.666928f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.666935f, 0.332272f, -0.6669289f },
	{ 0.666935f, 0.332272f, 0.666928f },
	{ -0.653778f, -0.380968f, -0.653787f },
	{ -0.653778f, -0.380968f, 0.653787f },
	{ 0.653779f, -0.380967f, 0.653787f },
	{ 0.653779f, -0.380967f, -0.653787f },
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
	{ 0.7071069f, 0, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000609B8 = { vertex_00060418, normal_000606E8, LengthOfArray<Sint32>(vertex_00060418), meshlist_000603A0, matlist_00060000, LengthOfArray<Uint16>(meshlist_000603A0), LengthOfArray<Uint16>(matlist_00060000), { 0.00016f, 0.368717f, 0.000122f }, 356.1342f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000609E0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000609B8, 38.00031f, -135, -4700.007f, 0, 0x671C, 0x8F6, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00060A14[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 162, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 92, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 84, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 91, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 118, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00060A8C[] = {
	4, 7, 3, 5, 1,
	4, 6, 7, 4, 5,
	0x8000u | 6, 4, 6, 0, 2, 1, 3
};

extern "C" __declspec(dllexport) Sint16 poly_00060AAE[] = {
	4, 7, 6, 3, 2
};

extern "C" __declspec(dllexport) Sint16 poly_00060AB8[] = {
	10, 54, 14, 58, 12, 59, 57, 55, 56, 54, 14,
	4, 9, 16, 15, 13,
	4, 17, 9, 10, 15,
	4, 8, 17, 11, 10,
	4, 16, 8, 13, 11,
	10, 43, 41, 39, 40, 38, 44, 42, 45, 43, 41,
	10, 51, 49, 47, 48, 46, 52, 50, 53, 51, 49,
	4, 30, 37, 31, 36,
	4, 27, 35, 26, 34
};

extern "C" __declspec(dllexport) Sint16 poly_00060B36[] = {
	4, 23, 21, 24, 22,
	8, 25, 23, 20, 24, 18, 22, 19, 21,
	0x8000u | 10, 16, 25, 9, 23, 17, 21, 8, 19, 16, 25,
	4, 19, 25, 18, 20,
	4, 28, 29, 32, 33,
	0x8000u | 10, 37, 28, 34, 29, 35, 33, 36, 32, 37, 28
};

extern "C" __declspec(dllexport) Sint16 poly_00060B92[] = {
	4, 45, 44, 41, 40,
	4, 53, 52, 49, 48,
	4, 12, 14, 57, 56
};

extern "C" __declspec(dllexport) Sint16 poly_00060BB0[] = {
	4, 26, 34, 30, 37,
	4, 31, 36, 27, 35
};

NJS_TEX uv_00060BC4[] = {
	{ 1020, 0 },
	{ 0 },
	{ 1020, 255 },
	{ 0, 255 },
	{ 0 },
	{ 765, 0 },
	{ 0, 254 },
	{ 765, 254 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 0, 255 },
	{ 0 },
	{ 765, 255 },
	{ 765, 0 }
};

NJS_TEX uv_00060BFC[] = {
	{ 765, -255 },
	{ 765, 255 },
	{ 0, -255 },
	{ 0, 255 }
};

NJS_TEX uv_00060C0C[] = {
	{ 202, 87 },
	{ 306, 5 },
	{ 306, 87 },
	{ 306, 5 },
	{ 306, 87 },
	{ 202, 5 },
	{ 202, 87 },
	{ 202, 5 },
	{ 202, 87 },
	{ 306, 5 },
	{ 506, 1 },
	{ 3, 1 },
	{ 506, 253 },
	{ 3, 253 },
	{ 510, 64 },
	{ 0, 64 },
	{ 510, 249 },
	{ 0, 249 },
	{ 506, 1 },
	{ 3, 1 },
	{ 506, 253 },
	{ 3, 253 },
	{ 0, 64 },
	{ 510, 64 },
	{ 0, 249 },
	{ 510, 249 },
	{ 176, 87 },
	{ 71, 5 },
	{ 71, 87 },
	{ 71, 5 },
	{ 71, 87 },
	{ 176, 5 },
	{ 176, 87 },
	{ 176, 5 },
	{ 176, 87 },
	{ 71, 5 },
	{ 438, 87 },
	{ 332, 5 },
	{ 332, 87 },
	{ 332, 5 },
	{ 332, 87 },
	{ 438, 5 },
	{ 438, 87 },
	{ 438, 5 },
	{ 438, 87 },
	{ 332, 5 },
	{ 506, 253 },
	{ 506, 1 },
	{ 3, 253 },
	{ 3, 1 },
	{ 506, 253 },
	{ 506, 1 },
	{ 3, 253 },
	{ 3, 1 }
};

NJS_TEX uv_00060CE4[] = {
	{ 993, -247 },
	{ 993, -44 },
	{ 987, -46 },
	{ 312, -46 },
	{ 306, -247 },
	{ 993, -247 },
	{ 987, -245 },
	{ 987, -46 },
	{ 312, -245 },
	{ 312, -46 },
	{ 306, -44 },
	{ 993, -44 },
	{ 280, -37 },
	{ 306, -247 },
	{ 280, -254 },
	{ 993, -247 },
	{ 1019, -254 },
	{ 993, -44 },
	{ 1019, -37 },
	{ 306, -44 },
	{ 280, -37 },
	{ 306, -247 },
	{ 306, -44 },
	{ 306, -247 },
	{ 312, -245 },
	{ 987, -245 },
	{ 0, 255 },
	{ 0, 26 },
	{ 227, 255 },
	{ 227, 26 },
	{ 217, 249 },
	{ 0, 255 },
	{ 9, 249 },
	{ 0, 26 },
	{ 9, 31 },
	{ 227, 26 },
	{ 217, 31 },
	{ 227, 255 },
	{ 217, 249 },
	{ 0, 255 }
};

NJS_TEX uv_00060D84[] = {
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 1 },
	{ 1, 1 }
};

NJS_TEX uv_00060DB4[] = {
	{ -18, 255 },
	{ -18, 0 },
	{ 236, 255 },
	{ 236, 0 },
	{ 236, 255 },
	{ 236, 0 },
	{ -18, 255 },
	{ -18, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00060DD4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00060A8C, NULL, NULL, NULL, uv_00060BC4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00060AAE, NULL, NULL, NULL, uv_00060BFC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 9, poly_00060AB8, NULL, NULL, NULL, uv_00060C0C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 6, poly_00060B36, NULL, NULL, NULL, uv_00060CE4, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 3, poly_00060B92, NULL, NULL, NULL, uv_00060D84, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, poly_00060BB0, NULL, NULL, NULL, uv_00060DB4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00060E64[] = {
	{ -231.1399f, -86.44373f, -155.1512f },
	{ -231.1399f, -86.44373f, 155.1514f },
	{ -231.1399f, 31.06513f, -155.1512f },
	{ -231.1399f, 31.06513f, 155.1514f },
	{ 231.1399f, -86.44372f, -155.1512f },
	{ 231.1399f, -86.44372f, 155.1514f },
	{ 231.1399f, 31.06513f, -155.1512f },
	{ 231.1399f, 31.06513f, 155.1514f },
	{ 186.6189f, 68.4873f, 10.37622f },
	{ -73.66418f, 68.4873f, 109.1529f },
	{ 186.6189f, 30.11176f, 109.1529f },
	{ 186.6189f, 30.11176f, 10.37622f },
	{ 83.18246f, 80.85046f, 93.62367f },
	{ -73.66418f, 30.11176f, 10.37622f },
	{ 83.18246f, 80.85046f, 63.25672f },
	{ -73.66418f, 30.11176f, 109.1529f },
	{ -73.66418f, 68.4873f, 10.37622f },
	{ 186.6189f, 68.4873f, 109.1529f },
	{ -62.13348f, 64.04095f, 104.7771f },
	{ -64.55437f, 68.4873f, 13.83342f },
	{ 175.0881f, 64.04095f, 104.7771f },
	{ 177.509f, 68.4873f, 13.83343f },
	{ -62.13348f, 64.04095f, 14.75202f },
	{ 177.509f, 68.4873f, 105.6957f },
	{ 175.0881f, 64.04095f, 14.75202f },
	{ -64.55437f, 68.4873f, 105.6957f },
	{ -168.9066f, 28.95313f, -119.7729f },
	{ -168.9066f, 28.95313f, -20.78793f },
	{ -172.2085f, 86.72625f, -122.0815f },
	{ -172.2085f, 86.72625f, -18.47933f },
	{ -95.53484f, 28.95313f, -119.7729f },
	{ -95.53482f, 28.95313f, -20.78793f },
	{ -92.23294f, 86.72625f, -122.0815f },
	{ -92.23293f, 86.72625f, -18.47933f },
	{ -168.9066f, 81.99877f, -119.7729f },
	{ -168.9066f, 81.99877f, -20.78793f },
	{ -95.53482f, 81.99877f, -20.78793f },
	{ -95.53484f, 81.99877f, -119.7729f },
	{ -37.14448f, 63.88514f, 63.25671f },
	{ -37.14448f, 63.88514f, 93.62367f },
	{ -37.14448f, 80.85046f, 63.25671f },
	{ -37.14448f, 80.85046f, 93.62367f },
	{ 16.26578f, 63.88514f, 63.25671f },
	{ 16.26578f, 63.88514f, 93.62367f },
	{ 16.26578f, 80.85046f, 63.25671f },
	{ 16.26578f, 80.85046f, 93.62367f },
	{ 96.74791f, 63.88514f, 63.25672f },
	{ 96.74791f, 63.88514f, 93.62367f },
	{ 96.74791f, 80.85046f, 63.25672f },
	{ 96.74791f, 80.85046f, 93.62367f },
	{ 150.1581f, 63.88514f, 63.25672f },
	{ 150.1581f, 63.88514f, 93.62367f },
	{ 150.1581f, 80.85046f, 63.25672f },
	{ 150.1581f, 80.85046f, 93.62367f },
	{ 29.77222f, 63.88514f, 63.25671f },
	{ 29.77222f, 63.88514f, 93.62367f },
	{ 29.77222f, 80.85046f, 63.25671f },
	{ 29.77222f, 80.85046f, 93.62367f },
	{ 83.18246f, 63.88514f, 63.25672f },
	{ 83.18246f, 63.88514f, 93.62367f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00061134[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.404889f, 0.743997f, -0.531538f },
	{ 0.209765f, 0.9607159f, 0.181724f },
	{ -0.404889f, 0.743997f, -0.531538f },
	{ -0.209765f, 0.9607159f, 0.181724f },
	{ 0.404889f, 0.743998f, 0.531537f },
	{ -0.209765f, 0.9607159f, -0.181724f },
	{ -0.404889f, 0.743998f, 0.531537f },
	{ 0.209765f, 0.9607159f, -0.181724f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.694206f, 0.317409f, -0.64601f },
	{ -0.694206f, 0.317408f, 0.646011f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.694206f, 0.317409f, -0.64601f },
	{ 0.694206f, 0.317408f, 0.646011f },
	{ -0.616889f, -0.399366f, -0.6781999f },
	{ -0.616889f, -0.399367f, 0.678199f },
	{ 0.616889f, -0.399367f, 0.678199f },
	{ 0.616889f, -0.399366f, -0.6781999f },
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
	{ 0.7071069f, 0, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00061404 = { vertex_00060E64, normal_00061134, LengthOfArray<Sint32>(vertex_00060E64), meshlist_00060DD4, matlist_00060A14, LengthOfArray<Uint16>(meshlist_00060DD4), LengthOfArray<Uint16>(matlist_00060A14), { 0.000015f, 0.141266f, 0.00006899999f }, 379.7439f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0006142C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00061404, 1693.037f, -116.0435f, 245.9291f, 0xFFFFE728, 0xFFFFDAFF, 0x1483, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00061460[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 165, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 166, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 167, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 164, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 86, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 102, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 101, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 103, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 103, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 163, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 117, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 166, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 128, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00061564[] = {
	4, 2, 14, 3, 4,
	3, 201, 236, 242,
	4, 9, 15, 1, 0,
	4, 43, 44, 41, 42,
	3, 200, 201, 202,
	0x8000u | 5, 37, 39, 45, 40, 38,
	0x8000u | 6, 194, 196, 195, 197, 198, 199,
	4, 193, 191, 192, 189,
	4, 191, 190, 189, 188,
	0x8000u | 6, 82, 83, 61, 58, 80, 81,
	0x8000u | 6, 102, 103, 99, 96, 100, 101,
	0x8000u | 6, 182, 184, 183, 185, 186, 187,
	3, 160, 153, 155,
	4, 158, 159, 156, 157,
	4, 173, 181, 175, 176,
	6, 155, 154, 160, 152, 157, 156,
	6, 179, 180, 177, 178, 173, 181,
	5, 242, 235, 201, 203, 202
};

extern "C" __declspec(dllexport) Sint16 poly_0006162E[] = {
	5, 11, 1, 6, 5, 10,
	8, 9, 1, 4, 11, 3, 13, 7, 12,
	0x8000u | 5, 11, 13, 6, 8, 10,
	4, 62, 65, 67, 68,
	6, 19, 24, 17, 21, 239, 23,
	4, 235, 242, 205, 243,
	8, 19, 18, 24, 16, 21, 20, 23, 22,
	3, 42, 44, 240,
	0x8000u | 5, 37, 45, 42, 38, 240,
	3, 37, 41, 42,
	0x8000u | 8, 90, 88, 91, 89, 87, 85, 86, 84,
	4, 107, 106, 105, 104,
	4, 111, 107, 109, 105,
	4, 110, 111, 108, 109,
	4, 115, 114, 113, 112,
	4, 119, 115, 117, 113,
	4, 118, 119, 116, 117,
	4, 123, 122, 121, 120,
	4, 127, 123, 125, 121,
	4, 126, 127, 124, 125,
	4, 131, 130, 129, 128,
	4, 135, 131, 133, 129,
	4, 134, 135, 132, 133,
	4, 139, 138, 137, 136,
	4, 143, 139, 141, 137,
	4, 142, 143, 140, 141,
	4, 147, 146, 145, 144,
	4, 151, 147, 149, 145,
	4, 150, 151, 148, 149,
	3, 157, 153, 160,
	6, 176, 181, 174, 178, 176, 180
};

extern "C" __declspec(dllexport) Sint16 poly_00061784[] = {
	4, 92, 95, 97, 98,
	4, 70, 73, 75, 76,
	4, 50, 53, 47, 48,
	4, 54, 57, 59, 60,
	4, 48, 49, 47, 46,
	4, 52, 53, 51, 50,
	4, 69, 64, 66, 63,
	4, 56, 57, 55, 54,
	4, 60, 82, 59, 83,
	4, 64, 65, 63, 62,
	4, 68, 69, 67, 66,
	4, 72, 73, 71, 70,
	4, 76, 77, 75, 74,
	4, 49, 52, 46, 51,
	4, 77, 72, 74, 71,
	4, 55, 81, 56, 80,
	4, 98, 102, 97, 103,
	4, 94, 95, 93, 92,
	4, 93, 101, 94, 100
};

extern "C" __declspec(dllexport) Sint16 poly_00061842[] = {
	4, 218, 78, 219, 211,
	4, 221, 206, 220, 207,
	4, 220, 207, 218, 78,
	4, 206, 221, 211, 219
};

extern "C" __declspec(dllexport) Sint16 poly_0006186A[] = {
	4, 28, 26, 27, 25,
	4, 30, 28, 29, 27,
	4, 26, 30, 25, 29,
	4, 34, 32, 33, 31,
	4, 36, 34, 35, 33,
	4, 32, 36, 31, 35,
	4, 153, 157, 241, 159,
	4, 164, 162, 163, 161,
	4, 166, 164, 165, 163,
	4, 162, 166, 161, 165,
	4, 170, 168, 169, 167,
	4, 172, 170, 171, 169,
	4, 168, 172, 167, 171
};

extern "C" __declspec(dllexport) Sint16 poly_000618EC[] = {
	8, 215, 216, 214, 210, 212, 234, 213, 222,
	0x8000u | 8, 209, 208, 53, 238, 52, 237, 49, 48,
	4, 53, 209, 48, 237
};

extern "C" __declspec(dllexport) Sint16 poly_0006191A[] = {
	4, 226, 223, 227, 233,
	4, 232, 217, 230, 224,
	4, 230, 224, 226, 223,
	3, 224, 217, 79,
	3, 79, 233, 223,
	8, 206, 231, 207, 229, 78, 225, 211, 228,
	3, 223, 224, 79,
	4, 227, 233, 232, 217,
	3, 79, 217, 233,
	4, 211, 228, 206, 231
};

extern "C" __declspec(dllexport) Sint16 poly_0006197E[] = {
	4, 220, 210, 221, 216,
	4, 218, 234, 220, 210,
	4, 219, 222, 218, 234,
	4, 222, 219, 216, 221
};

extern "C" __declspec(dllexport) Sint16 poly_000619A6[] = {
	4, 208, 213, 209, 215,
	4, 215, 213, 216, 222,
	4, 209, 215, 237, 214,
	4, 237, 214, 238, 212,
	4, 238, 212, 208, 213
};

extern "C" __declspec(dllexport) Sint16 poly_000619D8[] = {
	6, 61, 82, 80, 60, 56, 57,
	4, 69, 68, 64, 65,
	4, 77, 76, 72, 73,
	6, 99, 102, 100, 98, 94, 95
};

extern "C" __declspec(dllexport) Sint16 poly_00061A08[] = {
	4, 231, 232, 229, 230,
	4, 230, 226, 229, 225,
	4, 227, 228, 226, 225,
	4, 228, 227, 231, 232
};

extern "C" __declspec(dllexport) Sint16 poly_00061A30[] = {
	4, 204, 243, 236, 242
};

extern "C" __declspec(dllexport) Sint16 poly_00061A3A[] = {
	4, 50, 47, 51, 46,
	4, 70, 75, 71, 74,
	3, 83, 58, 59,
	0x8000u | 5, 59, 54, 58, 55, 81,
	3, 103, 96, 97,
	0x8000u | 5, 97, 92, 96, 93, 101
};

NJS_TEX uv_00061A78[] = {
	{ 7, 0 },
	{ 5, 82 },
	{ 239, 3 },
	{ 237, 85 },
	{ 53, 246 },
	{ 43, 247 },
	{ 43, 239 },
	{ 234, 176 },
	{ 3, 175 },
	{ 234, 212 },
	{ 0, 255 },
	{ 219, 215 },
	{ 221, 133 },
	{ 250, 210 },
	{ 251, 138 },
	{ 43, 239 },
	{ 53, 246 },
	{ 42, 1 },
	{ 251, 210 },
	{ 220, 215 },
	{ 251, 160 },
	{ 222, 133 },
	{ 243, 139 },
	{ 75, 240 },
	{ 76, 1 },
	{ 85, 239 },
	{ 84, 1 },
	{ 75, 240 },
	{ 76, 1 },
	{ 160, 1 },
	{ 168, 2 },
	{ 162, 89 },
	{ 169, 87 },
	{ 160, 1 },
	{ 168, 2 },
	{ 162, 89 },
	{ 169, 87 },
	{ 96, 77 },
	{ 96, 88 },
	{ 157, 78 },
	{ 157, 89 },
	{ 255, 79 },
	{ 254, 90 },
	{ 84, 123 },
	{ 84, 133 },
	{ 98, 122 },
	{ 97, 134 },
	{ 252, 122 },
	{ 253, 132 },
	{ 196, 84 },
	{ 195, 1 },
	{ 204, 83 },
	{ 203, 1 },
	{ 196, 84 },
	{ 195, 1 },
	{ 140, 73 },
	{ 130, 89 },
	{ 112, 93 },
	{ 111, 0 },
	{ 112, 93 },
	{ 140, 0 },
	{ 140, 91 },
	{ 141, 230 },
	{ 141, 135 },
	{ 113, 234 },
	{ 114, 106 },
	{ 112, 93 },
	{ 111, 0 },
	{ 140, 73 },
	{ 140, 0 },
	{ 112, 93 },
	{ 111, 0 },
	{ 112, 234 },
	{ 113, 106 },
	{ 140, 230 },
	{ 141, 116 },
	{ 112, 234 },
	{ 113, 106 },
	{ 43, 239 },
	{ 42, 1 },
	{ 53, 246 },
	{ 52, 0 },
	{ 42, 1 }
};

NJS_TEX uv_00061BC4[] = {
	{ 195, 87 },
	{ 17, 219 },
	{ 195, 182 },
	{ 486, 219 },
	{ 486, 182 },
	{ 17, 182 },
	{ 17, 219 },
	{ 17, 87 },
	{ 195, 87 },
	{ 17, 2 },
	{ 312, 87 },
	{ 486, 2 },
	{ 486, 87 },
	{ 195, 87 },
	{ 312, 87 },
	{ 195, 182 },
	{ 312, 182 },
	{ 486, 182 },
	{ 0, 191 },
	{ 0, 180 },
	{ 510, 191 },
	{ 510, 180 },
	{ 458, 112 },
	{ 510, 88 },
	{ 494, 111 },
	{ 458, 112 },
	{ 510, 116 },
	{ 458, 116 },
	{ 496, 0 },
	{ 496, 254 },
	{ 23, 0 },
	{ 23, 255 },
	{ 458, 112 },
	{ 458, 1 },
	{ 510, 88 },
	{ 510, 1 },
	{ 458, 112 },
	{ 458, 1 },
	{ 508, 111 },
	{ 510, 1 },
	{ 500, 142 },
	{ 498, 137 },
	{ 448, 137 },
	{ 450, 217 },
	{ 450, 165 },
	{ 500, 142 },
	{ 464, 143 },
	{ 448, 137 },
	{ 450, 217 },
	{ 500, 217 },
	{ 500, 142 },
	{ 0, 1 },
	{ 0, 217 },
	{ 54, 1 },
	{ 54, 217 },
	{ 0, 1 },
	{ 0, 217 },
	{ 54, 1 },
	{ 54, 217 },
	{ 106, 1 },
	{ 87, 1 },
	{ 106, 215 },
	{ 87, 215 },
	{ 106, 1 },
	{ 87, 1 },
	{ 106, 215 },
	{ 87, 215 },
	{ 106, 1 },
	{ 87, 1 },
	{ 106, 215 },
	{ 87, 215 },
	{ 170, 1 },
	{ 149, 1 },
	{ 170, 215 },
	{ 149, 215 },
	{ 170, 1 },
	{ 149, 1 },
	{ 170, 215 },
	{ 149, 215 },
	{ 170, 1 },
	{ 149, 1 },
	{ 170, 215 },
	{ 149, 215 },
	{ 229, 1 },
	{ 208, 1 },
	{ 229, 215 },
	{ 208, 215 },
	{ 229, 1 },
	{ 208, 1 },
	{ 229, 215 },
	{ 208, 215 },
	{ 229, 1 },
	{ 208, 1 },
	{ 229, 215 },
	{ 208, 215 },
	{ 296, 1 },
	{ 276, 1 },
	{ 296, 215 },
	{ 276, 215 },
	{ 296, 1 },
	{ 276, 1 },
	{ 296, 215 },
	{ 276, 215 },
	{ 296, 1 },
	{ 276, 1 },
	{ 296, 215 },
	{ 276, 215 },
	{ 360, 1 },
	{ 336, 1 },
	{ 360, 215 },
	{ 336, 215 },
	{ 360, 1 },
	{ 336, 1 },
	{ 360, 215 },
	{ 336, 215 },
	{ 360, 1 },
	{ 336, 1 },
	{ 360, 215 },
	{ 336, 215 },
	{ 420, 1 },
	{ 398, 1 },
	{ 420, 215 },
	{ 398, 215 },
	{ 420, 1 },
	{ 398, 1 },
	{ 420, 215 },
	{ 398, 215 },
	{ 420, 1 },
	{ 398, 1 },
	{ 420, 215 },
	{ 398, 215 },
	{ 458, 92 },
	{ 494, 91 },
	{ 510, 69 },
	{ 448, 108 },
	{ 450, 136 },
	{ 464, 114 },
	{ 500, 113 },
	{ 448, 108 },
	{ 498, 107 }
};

NJS_TEX uv_00061DF4[] = {
	{ 1016, 158 },
	{ 1012, 105 },
	{ -2, 157 },
	{ 0, 105 },
	{ 1013, 106 },
	{ 1016, 52 },
	{ 0, 107 },
	{ 2, 54 },
	{ 1012, 52 },
	{ 1016, 0 },
	{ 1, 53 },
	{ 3, 0 },
	{ 1016, 158 },
	{ 1012, 105 },
	{ -2, 157 },
	{ 0, 105 },
	{ 1016, 0 },
	{ 3, 0 },
	{ 1012, 52 },
	{ 1, 53 },
	{ 1016, 0 },
	{ 3, 0 },
	{ 1012, 52 },
	{ 1, 53 },
	{ 1013, 212 },
	{ 1, 213 },
	{ 1016, 254 },
	{ 3, 254 },
	{ 1012, 105 },
	{ 0, 105 },
	{ 1016, 158 },
	{ -2, 157 },
	{ 1020, 107 },
	{ 552, 106 },
	{ 1017, 159 },
	{ 549, 158 },
	{ 1013, 212 },
	{ 1, 213 },
	{ 1016, 254 },
	{ 3, 254 },
	{ 1013, 212 },
	{ 1, 213 },
	{ 1016, 254 },
	{ 3, 254 },
	{ 1016, 52 },
	{ 2, 54 },
	{ 1013, 106 },
	{ 0, 107 },
	{ 1016, 52 },
	{ 2, 54 },
	{ 1013, 106 },
	{ 0, 107 },
	{ 1016, 0 },
	{ 3, 0 },
	{ 1012, 52 },
	{ 1, 53 },
	{ 1016, 52 },
	{ 2, 54 },
	{ 1013, 106 },
	{ 0, 107 },
	{ -2, 157 },
	{ 848, 157 },
	{ 0, 107 },
	{ 849, 106 },
	{ 570, 106 },
	{ 0, 107 },
	{ 573, 158 },
	{ -2, 157 },
	{ 1015, 106 },
	{ 0, 107 },
	{ 1012, 157 },
	{ -2, 157 },
	{ 2, 212 },
	{ 577, 212 },
	{ 2, 161 },
	{ 577, 160 }
};

NJS_TEX uv_00061F24[] = {
	{ 254, 254 },
	{ 253, 1 },
	{ 0, 254 },
	{ 1, 1 },
	{ 254, 254 },
	{ 253, 1 },
	{ 0, 254 },
	{ 1, 1 },
	{ 254, 254 },
	{ 253, 1 },
	{ 0, 254 },
	{ 1, 1 },
	{ 1, 1 },
	{ 0, 254 },
	{ 253, 1 },
	{ 254, 254 }
};

NJS_TEX uv_00061F64[] = {
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 181, 4 },
	{ 0, 11 },
	{ 255, 8 },
	{ 0, 8 },
	{ 117, 1 },
	{ 103, 0 },
	{ 117, 110 },
	{ 103, 109 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 }
};

NJS_TEX uv_00062034[] = {
	{ 2550, 254 },
	{ 2441, 88 },
	{ 2550, -2295 },
	{ 2441, -2128 },
	{ 0, -2295 },
	{ 107, -2128 },
	{ 0, 254 },
	{ 107, 88 },
	{ 2280, 119 },
	{ 238, 120 },
	{ 0, 254 },
	{ 238, -2105 },
	{ 0, -2295 },
	{ 2280, -2105 },
	{ 2550, -2295 },
	{ 2550, 254 },
	{ 0, 254 },
	{ 2280, 119 },
	{ 2550, 254 },
	{ 2280, -2105 }
};

NJS_TEX uv_00062084[] = {
	{ 756, 254 },
	{ 593, 0 },
	{ 2, 254 },
	{ 164, 0 },
	{ 756, 254 },
	{ 593, 0 },
	{ 2, 254 },
	{ 164, 0 },
	{ 756, 254 },
	{ 593, 0 },
	{ 2, 254 },
	{ 164, 0 },
	{ 56, 254 },
	{ 701, 254 },
	{ 382, 0 },
	{ 56, 254 },
	{ 701, 254 },
	{ 382, 0 },
	{ 729, 254 },
	{ 764, 252 },
	{ 729, 255 },
	{ 764, 252 },
	{ 34, 255 },
	{ 0, 252 },
	{ 34, 254 },
	{ 0, 252 },
	{ 56, 254 },
	{ 701, 254 },
	{ 382, 0 },
	{ 756, 254 },
	{ 593, 0 },
	{ 2, 254 },
	{ 164, 0 },
	{ 56, 254 },
	{ 701, 254 },
	{ 382, 0 },
	{ 764, 252 },
	{ 729, 255 },
	{ 764, 252 },
	{ 729, 254 }
};

NJS_TEX uv_00062124[] = {
	{ 1, 79 },
	{ 0, 211 },
	{ 506, 79 },
	{ 506, 211 },
	{ 1, 79 },
	{ 0, 211 },
	{ 506, 79 },
	{ 506, 211 },
	{ 1, 79 },
	{ 0, 211 },
	{ 506, 79 },
	{ 506, 211 },
	{ 1, 79 },
	{ 0, 211 },
	{ 506, 79 },
	{ 506, 211 }
};

NJS_TEX uv_00062164[] = {
	{ 508, 254 },
	{ 508, 0 },
	{ 0, 255 },
	{ 0 },
	{ 508, 0 },
	{ 1, 0 },
	{ 488, 2 },
	{ 22, 2 },
	{ 508, 254 },
	{ 508, 0 },
	{ 0, 255 },
	{ 0 },
	{ 508, 254 },
	{ 508, 0 },
	{ 0, 255 },
	{ 0 },
	{ 508, 254 },
	{ 508, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_TEX uv_000621B4[] = {
	{ 53, 160 },
	{ 0, 100 },
	{ 76, 254 },
	{ 0 },
	{ 510, 254 },
	{ 508, 0 },
	{ 0, 254 },
	{ 0 },
	{ 510, 254 },
	{ 508, 0 },
	{ 0, 254 },
	{ 0 },
	{ 510, 254 },
	{ 508, 0 },
	{ 124, 103 },
	{ 0, 90 },
	{ 186, 254 },
	{ 0, 1 },
	{ 510, 254 },
	{ 508, 1 }
};

NJS_TEX uv_00062204[] = {
	{ 508, 254 },
	{ 328, -764 },
	{ 0, 254 },
	{ 180, -764 },
	{ 328, -764 },
	{ 180, -764 },
	{ 508, 254 },
	{ 0, 254 },
	{ 180, -764 },
	{ 0, 254 },
	{ 328, -764 },
	{ 508, 254 },
	{ 508, 254 },
	{ 328, -764 },
	{ 0, 254 },
	{ 180, -764 }
};

NJS_TEX uv_00062244[] = {
	{ 0, 254 },
	{ 0, 235 },
	{ 254, 254 },
	{ 254, 236 }
};

NJS_TEX uv_00062254[] = {
	{ 0, -178 },
	{ 2550, -178 },
	{ 0, -2294 },
	{ 2550, -2294 },
	{ 0, -29 },
	{ 2550, -29 },
	{ 0, -2145 },
	{ 2550, -2145 },
	{ 2550, -725 },
	{ 2282, -1220 },
	{ 2550, 107 },
	{ 2550, 107 },
	{ 0, 107 },
	{ 2282, -1220 },
	{ 0, -2008 },
	{ 2166, -2008 },
	{ 2550, -480 },
	{ 1926, -588 },
	{ 2550, 254 },
	{ 2550, 254 },
	{ 0, 254 },
	{ 1926, -588 },
	{ 0, -1848 },
	{ 1615, -1848 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000622B4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 18, poly_00061564, NULL, NULL, NULL, uv_00061A78, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 31, poly_0006162E, NULL, NULL, NULL, uv_00061BC4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 19, poly_00061784, NULL, NULL, NULL, uv_00061DF4, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, poly_00061842, NULL, NULL, NULL, uv_00061F24, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 13, poly_0006186A, NULL, NULL, NULL, uv_00061F64, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 3, poly_000618EC, NULL, NULL, NULL, uv_00062034, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 10, poly_0006191A, NULL, NULL, NULL, uv_00062084, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 4, poly_0006197E, NULL, NULL, NULL, uv_00062124, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 5, poly_000619A6, NULL, NULL, NULL, uv_00062164, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 4, poly_000619D8, NULL, NULL, NULL, uv_000621B4, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 4, poly_00061A08, NULL, NULL, NULL, uv_00062204, NULL },
	{ NJD_MESHSET_TRIMESH | 11, 1, poly_00061A30, NULL, NULL, NULL, uv_00062244, NULL },
	{ NJD_MESHSET_TRIMESH | 12, 6, poly_00061A3A, NULL, NULL, NULL, uv_00062254, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000623EC[] = {
	{ -164.9395f, -199.3096f, -234.0817f },
	{ -164.9395f, -199.0073f, 88.06588f },
	{ -164.9395f, 280.4784f, -95.05219f },
	{ -164.9395f, 195.2241f, 201.4287f },
	{ -164.9395f, 41.29847f, 157.1667f },
	{ 163.4212f, -199.0073f, 88.06588f },
	{ -40.44922f, -132.2552f, 107.2607f },
	{ 163.4212f, 195.2241f, 201.4287f },
	{ 41.64096f, -132.2552f, 107.2607f },
	{ -164.9395f, -132.0539f, 107.3186f },
	{ 163.4212f, -132.2552f, 107.2607f },
	{ -40.44922f, 41.32889f, 157.1755f },
	{ 163.4212f, 41.32889f, 157.1755f },
	{ 41.64096f, 41.32889f, 157.1755f },
	{ -164.9395f, 125.2817f, -139.3687f },
	{ -164.9395f, -49.00203f, -189.4846f },
	{ 179.4875f, 192.8222f, 220.7603f },
	{ 169.3089f, -3.745322f, 152.4686f },
	{ 179.4875f, 203.9169f, 182.1774f },
	{ 179.4875f, -6.339387f, 121.7174f },
	{ 144.2001f, 192.8222f, 220.7603f },
	{ 144.2001f, -8.81105f, 162.7797f },
	{ 144.2001f, 203.9169f, 182.1774f },
	{ 144.2001f, -6.339387f, 121.7174f },
	{ 179.4875f, 33.33701f, 174.8996f },
	{ 158.5417f, -92.00034f, 114.7875f },
	{ 158.5417f, -1.378383f, 140.8462f },
	{ 160.4969f, -92.42728f, 116.2722f },
	{ 160.4969f, -1.805322f, 142.3309f },
	{ 160.3725f, -91.53317f, 113.1629f },
	{ 160.3725f, -0.91122f, 139.2217f },
	{ 158.9919f, -95.49336f, 126.935f },
	{ 158.9919f, -4.871421f, 152.9937f },
	{ 160.9471f, -95.92031f, 128.4196f },
	{ 160.9471f, -5.29836f, 154.4784f },
	{ 160.8227f, -95.02626f, 125.3104f },
	{ 160.8227f, -4.404254f, 151.3692f },
	{ 138.2865f, -200.8457f, 112.0886f },
	{ 148.0235f, -63.44918f, 137.1969f },
	{ 136.7452f, -200.8024f, 69.21291f },
	{ 136.7452f, -45.03067f, 112.9168f },
	{ 173.548f, -200.4712f, 110.7864f },
	{ 173.548f, -64.36555f, 147.6894f },
	{ 172.0064f, -200.4279f, 67.91079f },
	{ 172.0064f, -44.65622f, 111.6146f },
	{ 138.2865f, -106.8882f, 136.8717f },
	{ 181.9565f, 182.3575f, 221.7666f },
	{ 181.9565f, 278.3535f, -112.0696f },
	{ 181.9565f, 299.0081f, -106.1303f },
	{ 181.9565f, 203.0121f, 227.7059f },
	{ -181.957f, 278.3535f, -112.0696f },
	{ -181.957f, 182.3575f, 221.7666f },
	{ -181.957f, 203.0121f, 227.7059f },
	{ -181.957f, 299.0081f, -106.1303f },
	{ -181.957f, 121.4505f, -157.1876f },
	{ -181.957f, 25.45476f, 176.6486f },
	{ -181.957f, 46.1093f, 182.5879f },
	{ -181.957f, 142.1051f, -151.2483f },
	{ 143.9763f, 61.2525f, 52.36359f },
	{ 181.9565f, 121.4505f, -157.1876f },
	{ 181.9565f, 142.1051f, -151.2483f },
	{ 143.9763f, 81.90704f, 58.30285f },
	{ -181.957f, -55.34927f, -208.0271f },
	{ -181.957f, -150.526f, 126.0446f },
	{ -181.957f, -129.8714f, 131.9839f },
	{ -181.957f, -34.69466f, -202.0878f },
	{ 181.9565f, -150.526f, 126.0446f },
	{ 181.9565f, -55.34927f, -208.0271f },
	{ 181.9565f, -34.69466f, -202.0878f },
	{ 181.9565f, -129.8714f, 131.9839f },
	{ -181.957f, 196.2884f, -135.6677f },
	{ -181.957f, 100.2927f, 198.1686f },
	{ -181.957f, 120.9474f, 204.1078f },
	{ -181.957f, 216.9431f, -129.7284f },
	{ 181.9565f, 100.2927f, 198.1686f },
	{ 181.9565f, 196.2884f, -135.6677f },
	{ 181.9565f, 216.9431f, -129.7284f },
	{ 181.9565f, 120.9474f, 204.1078f },
	{ -135.0529f, 783.1703f, 347.1257f },
	{ -1.955632f, 1283.114f, 354.9871f },
	{ 127.2289f, 46.1093f, 182.5879f },
	{ 127.2289f, 25.45476f, 176.6486f },
	{ 181.9565f, 104.4025f, -19.92762f },
	{ 181.9565f, 83.74795f, -25.86692f },
	{ -177.2841f, -200.8908f, 68.71072f },
	{ -177.2841f, -200.4265f, 109.8212f },
	{ -177.2841f, 203.5897f, 183.9317f },
	{ -177.2841f, 193.0108f, 220.721f },
	{ -139.0043f, -200.8908f, 68.71072f },
	{ -139.0043f, -200.4265f, 109.8212f },
	{ -139.0043f, 203.5897f, 183.9317f },
	{ -139.0043f, 193.0108f, 220.721f },
	{ -181.957f, 31.7241f, -180.5302f },
	{ -181.957f, -62.74483f, 151.2865f },
	{ -181.957f, -42.09047f, 157.2257f },
	{ -181.957f, 52.37843f, -174.5909f },
	{ 92.92147f, -5.606168f, -47.42023f },
	{ 181.9565f, 31.7241f, -180.5302f },
	{ 181.9565f, 52.37843f, -174.5909f },
	{ 92.92147f, 15.04843f, -41.48093f },
	{ 48.56431f, -42.09047f, 157.2257f },
	{ 48.56431f, -62.74483f, 151.2865f },
	{ 181.9565f, 19.94729f, -58.51724f },
	{ 181.9565f, -0.7073089f, -64.45659f },
	{ -117.3382f, -190.5647f, 84.42715f },
	{ -117.3382f, -195.433f, 101.3571f },
	{ -117.3382f, 199.1494f, 196.491f },
	{ -117.3382f, 194.2811f, 213.421f },
	{ -102.5407f, -190.5647f, 84.42715f },
	{ -102.5407f, -195.433f, 101.3571f },
	{ -102.5407f, 199.1494f, 196.491f },
	{ -102.5407f, 194.2811f, 213.421f },
	{ -72.94591f, -190.5647f, 84.42715f },
	{ -72.94591f, -195.433f, 101.3571f },
	{ -72.94591f, 199.1494f, 196.491f },
	{ -72.94591f, 194.2811f, 213.421f },
	{ -58.14838f, -190.5647f, 84.42715f },
	{ -58.14838f, -195.433f, 101.3571f },
	{ -58.14838f, 199.1494f, 196.491f },
	{ -58.14838f, 194.2811f, 213.421f },
	{ -28.55336f, -190.5647f, 84.42715f },
	{ -28.55336f, -195.433f, 101.3571f },
	{ -28.55336f, 199.1494f, 196.491f },
	{ -28.55336f, 194.2811f, 213.421f },
	{ -13.75585f, -190.5647f, 84.42715f },
	{ -13.75585f, -195.433f, 101.3571f },
	{ -13.75585f, 199.1494f, 196.491f },
	{ -13.75585f, 194.2811f, 213.421f },
	{ 15.83918f, -190.5647f, 84.42715f },
	{ 15.83918f, -195.433f, 101.3571f },
	{ 15.83918f, 199.1494f, 196.491f },
	{ 15.83918f, 194.2811f, 213.421f },
	{ 30.6367f, -190.5647f, 84.42715f },
	{ 30.6367f, -195.433f, 101.3571f },
	{ 30.6367f, 199.1494f, 196.491f },
	{ 30.6367f, 194.2811f, 213.421f },
	{ 60.2315f, -190.5647f, 84.42715f },
	{ 60.2315f, -195.433f, 101.3571f },
	{ 60.2315f, 199.1494f, 196.491f },
	{ 60.2315f, 194.2811f, 213.421f },
	{ 75.02899f, -190.5647f, 84.42715f },
	{ 75.02899f, -195.433f, 101.3571f },
	{ 75.02899f, 199.1494f, 196.491f },
	{ 75.02899f, 194.2811f, 213.421f },
	{ 104.624f, -190.5647f, 84.42715f },
	{ 104.624f, -195.433f, 101.3571f },
	{ 104.624f, 199.1494f, 196.491f },
	{ 104.624f, 194.2811f, 213.421f },
	{ 119.4215f, -190.5647f, 84.42715f },
	{ 119.4215f, -195.433f, 101.3571f },
	{ 119.4215f, 199.1494f, 196.491f },
	{ 119.4215f, 194.2811f, 213.421f },
	{ 179.4875f, 234.4055f, 76.14971f },
	{ 169.3089f, 70.60564f, 17.28058f },
	{ 179.4875f, 245.5002f, 37.56683f },
	{ 179.4875f, 68.0116f, -13.47061f },
	{ 144.2001f, 234.4055f, 76.14971f },
	{ 144.2001f, 65.53988f, 27.5918f },
	{ 144.2001f, 245.5002f, 37.56683f },
	{ 144.2001f, 68.0116f, -13.47061f },
	{ 179.4875f, 107.688f, 39.71159f },
	{ 158.5417f, 0.554975f, -15.16572f },
	{ 158.5417f, 72.97265f, 5.658267f },
	{ 160.4969f, 0.128035f, -13.68101f },
	{ 160.4969f, 72.54573f, 7.142978f },
	{ 160.3725f, 1.022138f, -16.79026f },
	{ 160.3725f, 73.43981f, 4.033725f },
	{ 158.9919f, -2.938063f, -3.018231f },
	{ 158.9919f, 69.47961f, 17.80572f },
	{ 160.9471f, -3.365005f, -1.533513f },
	{ 160.9471f, 69.05267f, 19.29043f },
	{ 160.8227f, -2.470961f, -4.642796f },
	{ 160.8227f, 69.94677f, 16.18119f },
	{ 138.2865f, -200.0741f, -51.72696f },
	{ 148.0235f, 29.10613f, 7.243694f },
	{ 136.7452f, -200.0307f, -91.72179f },
	{ 136.7452f, 47.52467f, -17.03651f },
	{ 173.548f, -199.6996f, -53.02917f },
	{ 173.548f, 28.18975f, 17.73619f },
	{ 172.0064f, -199.6562f, -93.02396f },
	{ 172.0064f, 47.89912f, -18.33867f },
	{ 138.2865f, -14.33283f, 6.918544f },
	{ 154.4483f, 53.57064f, 115.5323f },
	{ 172.0644f, 53.57064f, 115.5323f },
	{ 154.4483f, 209.6415f, 160.0038f },
	{ 172.0644f, 209.6415f, 160.0038f },
	{ 172.0644f, 57.66f, 101.3111f },
	{ 172.0644f, 213.7308f, 145.7826f },
	{ 154.4483f, 64.61708f, 73.27588f },
	{ 172.0644f, 64.61708f, 73.27588f },
	{ 154.4483f, 221.9096f, 117.3402f },
	{ 172.0644f, 221.9096f, 117.3402f },
	{ 172.0644f, 68.70648f, 59.05462f },
	{ 172.0644f, 225.9989f, 103.119f },
	{ 154.4483f, -198.7337f, -124.8198f },
	{ 172.0644f, -198.7337f, -124.8198f },
	{ 154.4483f, 254.6723f, 3.404453f },
	{ 172.0644f, 254.6723f, 3.404453f },
	{ 172.0644f, -198.4469f, -139.0411f },
	{ 172.0644f, 258.7616f, -10.81683f },
	{ 154.4483f, -198.8237f, -171.2861f },
	{ 172.0644f, -198.8237f, -171.2861f },
	{ 154.4483f, 266.9404f, -39.25925f },
	{ 172.0644f, 266.9404f, -39.25925f },
	{ -164.9269f, -198.5368f, -195.0166f },
	{ -164.9269f, 271.0297f, -61.08848f },
	{ 131.1417f, 856.0459f, 93.69277f },
	{ 131.1417f, 783.1703f, 347.1257f },
	{ -147.9442f, 294.0948f, -88.47756f },
	{ 143.6206f, 294.2882f, -88.42188f },
	{ 131.1417f, 488.6585f, 262.4377f },
	{ -135.0529f, 856.0459f, 93.69277f },
	{ -147.3644f, 480.8141f, 280.7611f },
	{ -147.3644f, 564.621f, -10.68674f },
	{ 143.4532f, 480.8141f, 280.7611f },
	{ 143.4532f, 564.621f, -10.68671f },
	{ 131.1417f, 561.5341f, 9.00477f },
	{ 14.78015f, 1126.354f, 289.8282f },
	{ -135.0529f, 635.6257f, 304.6986f },
	{ -135.0529f, 708.5013f, 51.26569f },
	{ 131.1417f, 635.6257f, 304.6987f },
	{ 131.1417f, 708.5013f, 51.26569f },
	{ -135.0529f, 561.5341f, 9.00477f },
	{ -18.69139f, 1116.375f, 324.5325f },
	{ 14.78015f, 1116.375f, 324.5325f },
	{ -148.3627f, 779.8831f, 374.9911f },
	{ -44.54683f, 1090.285f, 342.1456f },
	{ -44.54682f, 1113.605f, 261.0469f },
	{ -148.3626f, 868.0625f, 68.33735f },
	{ 144.4514f, 779.8831f, 374.9911f },
	{ 40.63559f, 1090.285f, 342.1456f },
	{ 144.4514f, 868.0625f, 68.33735f },
	{ 40.6356f, 1113.605f, 261.0469f },
	{ -18.69139f, 1126.354f, 289.8282f },
	{ -135.0529f, 488.6585f, 262.4377f },
	{ 172.0644f, 268.985f, -53.97787f },
	{ 172.0644f, -198.6803f, -186.9553f },
	{ 143.6206f, 210.4814f, 203.0259f },
	{ -147.9442f, 210.2881f, 202.9699f },
	{ 179.4875f, -6.339387f, 121.7174f },
	{ 136.7452f, -45.03067f, 112.9168f },
	{ 179.4875f, 68.0116f, -13.47061f },
	{ 172.0644f, -183.3927f, -182.1963f },
	{ -164.9269f, -182.2986f, -189.7822f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00062F5C[] = {
	{ -1, 0, 0 },
	{ -0.762585f, -0.178771f, 0.621696f },
	{ -1, 0, 0 },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ -0.448127f, -0.247054f, 0.859155f },
	{ 0, -0.276355f, 0.961056f },
	{ 0, -0.276355f, 0.961056f },
	{ 0, -0.276356f, 0.961055f },
	{ 0, -0.276355f, 0.961056f },
	{ -0.445581f, -0.247405f, 0.860377f },
	{ 0, -0.276355f, 0.961056f },
	{ 0, -0.276356f, 0.961056f },
	{ 0, -0.276356f, 0.961055f },
	{ 0, -0.276356f, 0.961056f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ 0.5534559f, -0.721298f, 0.416433f },
	{ 1, 0, 0 },
	{ 0.9623629f, -0.217828f, 0.16251f },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ -0.493913f, -0.704707f, 0.509351f },
	{ -1, 0, 0 },
	{ -0.652048f, -0.756808f, -0.045554f },
	{ 0.704863f, -0.263132f, 0.658733f },
	{ -0.999262f, -0.010616f, 0.036918f },
	{ -0.999262f, -0.010614f, 0.03691f },
	{ 0.453124f, -0.246357f, 0.856731f },
	{ 0.45313f, -0.246356f, 0.8567269f },
	{ 0.383351f, 0.255242f, -0.887634f },
	{ 0.383351f, 0.255242f, -0.887634f },
	{ -0.999262f, -0.010615f, 0.036916f },
	{ -0.999262f, -0.010616f, 0.036918f },
	{ 0.453139f, -0.246355f, 0.856723f },
	{ 0.453131f, -0.246356f, 0.8567269f },
	{ 0.383351f, 0.255243f, -0.887633f },
	{ 0.383344f, 0.255244f, -0.8876359f },
	{ -0.733411f, -0.176206f, 0.6565509f },
	{ -0.530027f, 0.38417f, 0.7559659f },
	{ -0.999306f, -0.009849f, 0.035914f },
	{ -0.953024f, 0.088976f, 0.289532f },
	{ 0.783462f, -0.160736f, 0.600293f },
	{ 0.5227f, 0.334121f, 0.784314f },
	{ 0.999305f, 0.009919999f, -0.03592f },
	{ 0.656205f, 0.673292f, 0.340695f },
	{ -0.67966f, -0.123668f, 0.723027f },
	{ 0.57735f, -0.7144189f, 0.395312f },
	{ 0.57735f, -0.395312f, -0.71442f },
	{ 0.5787849f, 0.712394f, -0.396865f },
	{ 0.57886f, 0.393452f, 0.714224f },
	{ -0.57735f, -0.395312f, -0.71442f },
	{ -0.57735f, -0.7144189f, 0.395312f },
	{ -0.5775999f, 0.393751f, 0.7150789f },
	{ -0.57739f, 0.71313f, -0.397576f },
	{ -0.577337f, -0.395343f, -0.714413f },
	{ -0.577316f, -0.71444f, 0.395324f },
	{ -0.577357f, 0.395278f, 0.7144319f },
	{ -0.577391f, 0.714412f, -0.395266f },
	{ 0.642496f, -0.765847f, -0.026021f },
	{ 0.577302f, -0.395399f, -0.7144099f },
	{ 0.577446f, 0.714378f, -0.395247f },
	{ 0.709181f, 0.591036f, 0.384369f },
	{ -0.706554f, 0.195564f, -0.6801f },
	{ -0.7076589f, -0.19526f, 0.679038f },
	{ -0.577221f, 0.396232f, 0.714014f },
	{ -0.5774789f, 0.713854f, -0.396144f },
	{ 0.7076589f, -0.19526f, 0.679038f },
	{ 0.706554f, 0.195564f, -0.6801f },
	{ 0.5774789f, 0.713854f, -0.396144f },
	{ 0.577221f, 0.396232f, 0.714014f },
	{ -0.57735f, -0.395312f, -0.7144189f },
	{ -0.57735f, -0.7144189f, 0.395312f },
	{ -0.57735f, 0.395312f, 0.7144189f },
	{ -0.57735f, 0.7144189f, -0.395312f },
	{ 0.57735f, -0.7144189f, 0.395312f },
	{ 0.57735f, -0.395312f, -0.7144189f },
	{ 0.57735f, 0.7144189f, -0.395312f },
	{ 0.57735f, 0.395312f, 0.7144189f },
	{ -0.444967f, -0.8893549f, 0.105125f },
	{ -0.00003f, 0.959021f, 0.283334f },
	{ 0.535731f, 0.393165f, 0.7472709f },
	{ 0.535611f, -0.7301469f, 0.424271f },
	{ 0.732112f, 0.590856f, 0.33897f },
	{ 0.7322299f, -0.680539f, -0.026583f },
	{ -1, 0, 0 },
	{ -0.7634619f, -0.175221f, 0.62163f },
	{ -1, 0, 0 },
	{ -0.708286f, -0.191519f, 0.679449f },
	{ 1, 0, 0 },
	{ 0.7634619f, -0.175221f, 0.62163f },
	{ 1, 0, 0 },
	{ 0.708286f, -0.191519f, 0.679449f },
	{ -0.57709f, -0.396709f, -0.713855f },
	{ -0.5770749f, -0.714068f, 0.396349f },
	{ -0.577221f, 0.39622f, 0.714021f },
	{ -0.577583f, 0.713798f, -0.396094f },
	{ 0.365354f, -0.922557f, 0.124118f },
	{ 0.576768f, -0.39769f, -0.71357f },
	{ 0.578679f, 0.713119f, -0.395717f },
	{ 0.560897f, 0.422008f, 0.712252f },
	{ 0.5082459f, 0.393446f, 0.766085f },
	{ 0.507826f, -0.7394519f, 0.441954f },
	{ 0.623956f, 0.425126f, 0.6557029f },
	{ 0.6255479f, -0.705735f, 0.332609f },
	{ -1, 0, 0 },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ -1, 0, 0 },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ 1, 0, 0 },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ 1, 0, 0 },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ -1, 0, 0 },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ -1, 0, 0 },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ 1, 0, 0 },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ 1, 0, 0 },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ -1, 0, 0 },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ -1, 0, 0 },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ 1, 0, 0 },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ 1, 0, 0 },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ -1, 0, 0 },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ -1, 0, 0 },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ 1, 0, 0 },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ 1, 0, 0 },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ -1, 0, 0 },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ -1, 0, 0 },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ 1, 0, 0 },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ 1, 0, 0 },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ -1, 0, 0 },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ -1, 0, 0 },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ 1, 0, 0 },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ 1, 0, 0 },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ 0.553457f, -0.721297f, 0.416432f },
	{ 1, 0, 0 },
	{ 0.9623629f, -0.217828f, 0.16251f },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ -0.493913f, -0.704707f, 0.509351f },
	{ -1, 0, 0 },
	{ -0.6520489f, -0.756807f, -0.045555f },
	{ 0.704863f, -0.263132f, 0.658733f },
	{ -0.999262f, -0.010616f, 0.036918f },
	{ -0.999262f, -0.010615f, 0.036913f },
	{ 0.453121f, -0.246357f, 0.856732f },
	{ 0.45313f, -0.246355f, 0.856728f },
	{ 0.383349f, 0.255243f, -0.887634f },
	{ 0.383353f, 0.255242f, -0.887633f },
	{ -0.999262f, -0.010613f, 0.036908f },
	{ -0.999262f, -0.010613f, 0.036908f },
	{ 0.453133f, -0.246354f, 0.856726f },
	{ 0.453127f, -0.246355f, 0.856729f },
	{ 0.383352f, 0.255242f, -0.887633f },
	{ 0.383347f, 0.255243f, -0.887635f },
	{ -0.740434f, -0.200555f, 0.64151f },
	{ -0.530027f, 0.384171f, 0.755965f },
	{ -0.999189f, -0.011845f, 0.038495f },
	{ -0.635929f, 0.5741439f, 0.5157059f },
	{ 0.7907529f, -0.182966f, 0.584152f },
	{ 0.515658f, 0.329216f, 0.79102f },
	{ 0.999189f, 0.011778f, -0.038501f },
	{ 0.66134f, 0.67036f, 0.336521f },
	{ -0.674423f, -0.148069f, 0.723346f },
	{ 0, -0.274036f, 0.961719f },
	{ 0.706563f, -0.193922f, 0.68056f },
	{ 0, -0.274036f, 0.961719f },
	{ 0.707649f, -0.193624f, 0.679516f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0, -0.269757f, 0.962928f },
	{ 0.7055579f, -0.191164f, 0.682382f },
	{ 0, -0.269757f, 0.962928f },
	{ 0.708646f, -0.190331f, 0.679408f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0, -0.27213f, 0.962261f },
	{ 0.758137f, -0.177455f, 0.627486f },
	{ 0, -0.27213f, 0.962261f },
	{ 0.708093f, -0.192156f, 0.679471f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0, -0.272718f, 0.9620939f },
	{ 0.760177f, -0.177189f, 0.625087f },
	{ 0, -0.272718f, 0.9620939f },
	{ 0.673861f, -0.2015f, 0.710851f },
	{ 0.022926f, 0.302095f, -0.953002f },
	{ 0.02195f, 0.272827f, -0.961813f },
	{ 0.444967f, -0.697671f, -0.56148f },
	{ 0.444967f, -0.8893549f, 0.105125f },
	{ -0.302272f, 0.9519719f, -0.0488f },
	{ 0.303666f, 0.951486f, -0.049619f },
	{ 0.384969f, 0.730783f, 0.563698f },
	{ -0.444967f, -0.697671f, -0.56148f },
	{ -0.588404f, 0.362646f, 0.722682f },
	{ -0.588403f, 0.6911319f, -0.419664f },
	{ 0.588843f, 0.362284f, 0.722505f },
	{ 0.588843f, 0.6907319f, -0.419706f },
	{ 0.384969f, 0.918588f, -0.089415f },
	{ 0.507126f, 0.801514f, -0.316857f },
	{ -0.7071069f, -0.195413f, 0.6795689f },
	{ -0.7071069f, 0.195413f, -0.6795689f },
	{ 0.7071069f, -0.195413f, 0.6795689f },
	{ 0.7071069f, 0.195413f, -0.6795689f },
	{ -0.38497f, 0.918588f, -0.089416f },
	{ -0.510209f, 0.507674f, 0.69423f },
	{ 0.510208f, 0.507674f, 0.69423f },
	{ -0.650278f, -0.517689f, 0.5560009f },
	{ -0.552214f, 0.467577f, 0.69024f },
	{ -0.552214f, 0.762803f, -0.336438f },
	{ -0.650278f, -0.143276f, -0.746063f },
	{ 0.650278f, -0.517689f, 0.5560009f },
	{ 0.552214f, 0.467577f, 0.69024f },
	{ 0.650278f, -0.143276f, -0.746063f },
	{ 0.552214f, 0.762803f, -0.336438f },
	{ -0.507127f, 0.801514f, -0.316857f },
	{ -0.38497f, 0.730783f, 0.563698f },
	{ 0.742995f, 0.182647f, -0.643894f },
	{ 0.64021f, 0.23213f, -0.732289f },
	{ 0.304542f, 0.782577f, 0.542981f },
	{ -0.302743f, 0.783485f, 0.542677f },
	{ 0.084969f, -0.996298f, 0.013049f },
	{ -0.07385299f, 0.836346f, 0.5432039f },
	{ 0.084969f, -0.996298f, 0.013048f },
	{ 0.717867f, 0.200177f, -0.66678f },
	{ 0.022441f, 0.287526f, -0.95751f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00063ACC = { vertex_000623EC, normal_00062F5C, LengthOfArray<Sint32>(vertex_000623EC), meshlist_000622B4, matlist_00061460, LengthOfArray<Uint16>(meshlist_000622B4), LengthOfArray<Uint16>(matlist_00061460), { -0.000244f, 541.1116f, 70.45472f }, 811.8614f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00063AF4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00063ACC, 4895, 20, -765.0002f, 0, 0xFFFF9C72, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00063B28 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0003C094, -1117.999f, 0, -5161, 0, 0xFFFFE38F, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00063B5C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0003C094, 747.666f, -72.65548f, -2988.731f, 0xFFFFE31D, 0xFFFFBAFD, 0x1224, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00063B90 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0003C094, 825.0164f, 0, -10267.01f, 0xFFFFFC1E, 0x720E, 0xFFFFFC3D, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00063BC4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0003D0FC, 2150.989f, 0, -8181.998f, 0xFFFFFE47, 0xFFFF9FF1, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00063BF8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0003D0FC, -756.9993f, 0, -10141, 0xFFFFFDC2, 0xFFFFEE4F, 0x22B, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00063C2C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0003D0FC, 1087.001f, 0, -5362, 0, 0xFFFFA570, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00063C60 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0003D0FC, -1229.999f, 0, -8155, 0xFFFFFAEE, 0xAEB, 0xFFFFFEA7, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00063C94 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0003F18C, 525.9999f, 0, -5158, 0xFFFFFD2D, 0x7FA1, 0x548, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00063CC8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0003FF9C, -398, -58.62873f, 185, 0, 0xFFFFCB69, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00063CFC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0003FF9C, 515, 0, -643.8934f, 0, 0xFFFFCB01, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00063D30 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00040500, -398, -58.62873f, 185, 0, 0xFFFFCB69, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00063D64 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00040500, 515, 0, -643.8934f, 0, 0xFFFFCB01, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00063D98 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00040924, -398, -58.62873f, 185, 0, 0xFFFFCB69, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00063DCC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00040924, 515, 0, -643.8934f, 0, 0xFFFFCB01, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00063E00 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00040B00, 515, 0, -643.8934f, 0, 0xFFFFCB01, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00063E34 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00040CDC, 515, -0.00001f, -643.8934f, 0, 0xFFFFCB01, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00063E68 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00047798, 797, 0, -8266, 0x413, 0x65AA, 0x23B, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00063E9C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000492D8, 1252.002f, 125, -1349.999f, 0xFFFF, 0xFFFFC001, 0xFFFF, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00063ED0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004A214, 475.2404f, 0, -822.3176f, 0, 0x38E3, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00063F04 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004A214, 695.9489f, 0, -493.2876f, 0x41A, 0xFFFFFB04, 0xB9, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00063F38 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004A214, 3004.499f, -35, -7669.996f, 0x31D8, 0xFFFFC4C5, 0xFFFFCE3F, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00063F6C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004A214, 3484.876f, -45, -7442.052f, 0, 0x2AAA, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00063FA0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004A214, 2277.202f, 0, -7776.128f, 0xB5C, 0xFFFFE268, 0xFFFFFCB7, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00063FD4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004DA8C, 691.0001f, 5, 473.9999f, 0xFFFFFA52, 0x5E, 0xFFFFFF6F, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064008 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004DA8C, 1147, -15, 454.9998f, 0x2B6, 0x42E, 0x2F0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0006403C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004DA8C, 1131, -20, -579.0001f, 0xFFFFEEA6, 0x1D42, 0xFFFFF309, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064070 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004DA8C, 1322.421f, -25, -1006.756f, 0xFFFFF971, 0xFFFFFE58, 0xFFFFFF05, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000640A4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004DA8C, -532.9999f, 5, 433.9999f, 0x33E, 0x53, 0xFFFFFBF1, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000640D8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004DA8C, -462.9999f, -8.529702f, -99.37496f, 0x306, 0xFFFFFF34, 0x557, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0006410C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004DA8C, -930.9999f, 29.80446f, 90.9999f, 0xD0, 0x392, 0xFFFFFC3C, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064140 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004E0DC, 975.9995f, -30, 303, 0xFFFFF714, 0x74B4, 0x5F2, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064174 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004E0DC, 4344.915f, -40, -7657.949f, 0x7B6, 0x5DC9, 0x184, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000641A8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004E0DC, 3357, 0, -408.0451f, 0xC44, 0xFFFF8272, 0xFFFFFF42, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000641DC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004E0DC, 4266.996f, -110, -550.0471f, 0xA9E, 0xFFFFFD98, 0x5C, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064210 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004E0DC, 3371.007f, 40, -599.0432f, 0x6E5E, 0xFFFFC9BF, 0xFFFF9313, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064244 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004E0DC, 3827.907f, 20, -7356.075f, 0x7B7, 0xFFFFEA8C, 0xFFFFF7DC, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064278 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004E0DC, 400.998f, -54.21534f, -768.0449f, 0xFFFFC15F, 0xFFFFCB62, 0x3401, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000642AC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004E0DC, 2362.998f, -25, -7746.045f, 0x61, 0xFFFFE5B2, 0xFFFFFDDE, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000642E0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004E0DC, -355.0027f, 0, -3545.007f, 0, 0xFFFFA38F, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064314 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004E0DC, 731.0033f, -65, -8338.031f, 0xFFFFFA9A, 0x5E79, 0xFFFFFC08, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064348 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004E0DC, 415, 0, -4750.003f, 0, 0x3FFF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0006437C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004E0DC, 4708.024f, 65, -7440.048f, 0x162, 0xFFFF91AB, 0xEB4, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000643B0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004E0DC, 5091.998f, -150, -4601.047f, 0x780, 0x125C, 0xFFFFFEB5, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000643E4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004E0DC, 5171.999f, 130, -4600.047f, 0x9AB, 0x2A0F, 0xFFFFFF9A, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064418 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004E0DC, 413.019f, 0, -5440.027f, 0xFFFFEBA2, 0xFFFFB390, 0x6BA, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0006444C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004EEB8, 412.988f, 0, -5440.017f, 0xFFFFEBA2, 0xFFFFB390, 0x6BA, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064480 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004EEB8, -354.9986f, 0, -3545.002f, 0, 0xFFFFA38F, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000644B4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004EEB8, 731, -65, -8338.005f, 0xFFFFFA9A, 0x5E79, 0xFFFFFC08, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000644E8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004EEB8, 415, 0, -4750.003f, 0, 0x3FFF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0006451C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004EEB8, 4707.993f, 65, -7440.063f, 0x162, 0xFFFF91AB, 0xEB4, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064550 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004EEB8, 5091.998f, -150, -4601.047f, 0x780, 0x125C, 0xFFFFFEB5, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064584 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004EEB8, 5171.999f, 130, -4600.047f, 0x9AB, 0x2A0F, 0xFFFFFF9A, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000645B8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004EEB8, 4344.986f, -40, -7658.017f, 0x7B6, 0x5DC9, 0x184, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000645EC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004EEB8, 3357, 0, -408.0451f, 0xC44, 0xFFFF8272, 0xFFFFFF42, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064620 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004EEB8, 4266.996f, -110, -550.0471f, 0xA9E, 0xFFFFFD98, 0x5C, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064654 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004EEB8, 3371.003f, 40, -599.046f, 0x6E5E, 0xFFFFC9BF, 0xFFFF9313, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064688 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004EEB8, 3827.986f, 20, -7356.017f, 0x7B7, 0xFFFFEA8C, 0xFFFFF7DC, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000646BC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004EEB8, 400.998f, -54.21534f, -768.0449f, 0xFFFFC15F, 0xFFFFCB62, 0x3401, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000646F0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004EEB8, 2362.998f, -25, -7746.045f, 0x61, 0xFFFFE5B2, 0xFFFFFDDE, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064724 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004EEB8, 975.9995f, -30, 303, 0xFFFFF714, 0x74B4, 0x5F2, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064758 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004F7BC, -527.0006f, -0.000333f, -6159.999f, 0xFFFFC6AC, 0x42E4, 0xFFFFC43E, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0006478C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004F7BC, 599.9993f, -0.000333f, -7648.999f, 0x2217, 0xFFFFC468, 0xFFFFD7E6, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000647C0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004F7BC, 686.9133f, -132.2749f, -6215.354f, 0xFFFF85A4, 0xFFFF8292, 0x74FB, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000647F4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004F7BC, 1367.002f, 0, -1534.999f, 0xFFFF, 0xFFFFC001, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064828 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000506F0, 4626, 0, -7685, 0, 0xFFFFE109, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0006485C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000506F0, 2024, 0, -600.9993f, 0x81D, 0x7E54, 0xFFFFFC2F, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064890 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000506F0, 4158, -81, -6239, 0, 0xFFFFC343, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000648C4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000506F0, 4139, 0, -1127, 0, 0xFFFFB6F9, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000648F8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000506F0, 5322, 0, -2466, 0, 0xFFFFFF72, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0006492C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00051758, 5349.997f, 92, -4799.994f, 0xFFFF, 0x3FFF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064960 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00051758, 5354.997f, 31.99998f, -3274.993f, 0x26F1, 0x48F7, 0x2A32, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064994 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00051758, 3767.45f, 71.37006f, 242.5279f, 0, 0xFFFFE662, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000649C8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00051758, 5086.999f, 92, -7244.993f, 0, 0x615F, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000649FC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00052400, 2494.715f, -281.6716f, -744.8511f, 0x2AEF, 0xFFFFB5A0, 0xFFFFD9F4, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064A30 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00052400, 4305.997f, -157.9991f, -2346.01f, 0xFFFFBAF2, 0x3C82, 0xFFFFD4C8, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064A64 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00052400, 4076.989f, -119.9983f, -327.0066f, 0xFFFFE7A3, 0xFFFFA453, 0xFFFFFEF5, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064A98 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005314C, 2936, -0.001733f, -7239, 0, 0xFFFF8001, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064ACC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005314C, 4114.847f, -50.00176f, -6658.147f, 0xE51, 0x4E03, 0x825, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064B00 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005314C, 5388, -180.0017f, -5917, 0x25D4, 0x385C, 0x35C4, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064B34 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005314C, 3567.009f, -80.00378f, -642.9958f, 0xFFFFEB9B, 0x1554, 0xB1, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064B68 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005314C, -41.98999f, -54.99466f, 448.007f, 0xFFFFF1C4, 0x7F1D, 0x247, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064B9C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005314C, 5302.063f, -99.00224f, -1587.012f, 0, 0xFFFFC47C, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064BD0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005314C, 4188.063f, -46.00172f, -3462.012f, 0xFFFFEDBC, 0x42EF, 0xFFFFE824, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064C04 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00053ED4, -536, 0, -2015, 0x209, 0, 0xFFFFFB1D, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064C38 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00053ED4, 627, 0, -5784, 0x2DA, 0x8D, 0xFFFFF573, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064C6C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00053ED4, -538, 0, -7631, 0xFFFFFE5F, 0x1B3, 0x673, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064CA0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00053ED4, 1959, 0, 576.001f, 0xF74, 0x8FF, 0x42E, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064CD4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00053ED4, 3868, 0, -7011.999f, 0xFFFFFA84, 0xFFFF9E0C, 0x834, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064D08 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00053ED4, -549.2573f, -84.65002f, -3423.818f, 0xFFFFC875, 0xFFFFB91D, 0x3FAC, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064D3C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00053ED4, 2656.369f, -10, -7933.408f, 0x3B1A, 0x483B, 0x41F2, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064D70 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00053ED4, 5319.88f, -6.596588f, -6814.73f, 0x2C76, 0x47FC, 0x26BF, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064DA4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00053ED4, 5391.583f, 19.26822f, -3653.26f, 0x4C8D, 0x4759, 0x482A, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064DD8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00053ED4, 4167.571f, 34.83912f, -4391.368f, 0x32D7, 0x46F4, 0x2E0F, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064E0C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00053ED4, 3093.269f, 19.26822f, -639.3467f, 0x4072, 0x467F, 0x441E, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064E40 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00053ED4, -499.6089f, 19.26822f, -9309.815f, 0xFFFFFACB, 0x783E, 0xFFFFFF23, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064E74 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00053ED4, 1779.153f, 20.04134f, -8585.472f, 0xFFFFED5A, 0x64D0, 0xFFFFF796, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064EA8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000556BC, 2989.943f, -440, -7846.005f, 0xFFFFC276, 0xFFFFCD11, 0x3D69, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064EDC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000556BC, 935.9979f, -35, -7912, 0x89F, 0x6016, 0xCA, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064F10 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000556BC, -483.9985f, -50, -5128.005f, 0xFFFFE425, 0x4209, 0xFFFFE222, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064F44 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000556BC, -466.9995f, -120, -7198.005f, 0x4273, 0x3C56, 0x3F30, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064F78 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000556BC, 4190, 0, -7852.005f, 0x356, 0xFFFFFA0F, 0xFFFFFEE6, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064FAC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000556BC, -1038.128f, -30.86f, 563.752f, 0xFFFF8124, 0x1F82, 0x7AAE, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00064FE0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000556BC, 2440.006f, -105, -7252.027f, 0xFFFFEF7E, 0xFFFF82B2, 0x136, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00065014 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000556BC, 539.9996f, -15, -8190.005f, 0xFFFFC23E, 0xFFFFBD8F, 0x4271, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00065048 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000556BC, -37.99796f, -55, -9626.005f, 0xFFFFF8E8, 0x48F, 0x66C, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0006507C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00056630, 5374.999f, -170, -4049.997f, 0xFFFF81F1, 0xFFFFF4DE, 0xFFFF827D, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000650B0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00056630, 1549.991f, -55.00118f, -559.9982f, 0xFFFFF7DA, 0x209, 0xFFFFFAB5, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000650E4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00056630, 3220.999f, -0.000684f, 445.001f, 0x54E, 0xFFFF8275, 0xFFFFFFAE, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00065118 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00056630, 4218, -19.00027f, -1489.999f, 0, 0x454B, 0xFFFFFC56, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0006514C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00056630, 5372, -120.0001f, -2851.999f, 0x7D79, 0x7CAB, 0xFFFF8500, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00065180 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00057384, 5299, 0, -4415, 0, 0xFFFFD18E, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000651B4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00057384, 5315, 0, -2043, 0, 0xFFFF8576, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000651E8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00057384, 2714, 0, -591.9995f, 0, 0x7EC9, 0x19, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0006521C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00057384, 4268, 0, -336.9994f, 0x71A, 0xFFFF95B1, 0xFFFFFC5F, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00065250 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00057384, 1519, 0, 512.0004f, 0xFFFFF7F5, 0xFFFF8D12, 0x13D, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00065284 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00057CC8, 5316, -111, -1043, 0, 0x647B, 0xFFFFF569, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000652B8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00057CC8, 4658, 0, -398.0002f, 0xFFFFF9B0, 0xFFFFE03F, 0x474, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000652EC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005A76C, 4005, -70, -940.9998f, 0x2D0, 0x1171, 0xFFFFFC85, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00065320 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005A76C, 2784, -89.99968f, 461.0004f, 0xFFFFF362, 0xFFFF85E6, 0xFFFFFCCB, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00065354 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005A76C, 606.9954f, -24.99925f, -1915, 0x4869, 0xFFFFC628, 0xFFFFC1D9, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00065388 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005A76C, 4211, 0, -3967, 0xFFFFF914, 0x3DF6, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000653BC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005D320, -510.0002f, 0, -8089, 0x2878, 0x3B1C, 0x282C, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000653F0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005D320, 413.9999f, 0, -9684, 0, 0xFFFFF702, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00065424 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005D320, -515.0001f, -30, -2957, 0xFFFFD450, 0x4523, 0xFFFFDD46, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00065458 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005D320, 604.9999f, 0, -6636, 0x510C, 0xFFFFBAB1, 0xFFFFA900, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0006548C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005E114, -1024.995f, 0, -9325.007f, 0xFFFFFB85, 0x3C55, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000654C0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005E114, 3519.002f, -215, -7877.005f, 0x342, 0xFFFFFE59, 0xFFFFFE2B, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000654F4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005E114, -354.9988f, 0, -10780, 0xFFFFFE5F, 0x7E0B, 0xFFFFFDE3, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00065528 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005E114, 1460.001f, 0, -9770.001f, 0xFE10, 0xFFFFC001, 0xFE10, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0006555C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005E114, -267.8781f, 0, 1080, 0x2EF, 0xFFFFF603, 0xFFFFFCD6, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00065590 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005EDF8, -531.0071f, -70.00009f, -8690.003f, 0x2AF2, 0x41DF, 0x2FD1, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000655C4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005EDF8, 1314.991f, -100.0004f, -7420, 0xFFFFF640, 0x6031, 0xFFFFFFA6, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000655F8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005EDF8, 1364.993f, -25.00043f, -9010.001f, 0x5BE, 0xFFFFE034, 0xFFFFFA51, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0006562C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005EDF8, 656, -40, -3714, 0x28F1, 0xFFFFBBA8, 0xFFFFDC0D, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00065660 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005EDF8, -545.0027f, -5, -4499.001f, 0, 0xFFFFBEF8, 0x8F6, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00065694 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005EDF8, -691.0027f, -115, -6701.019f, 0x1E5, 0x193, 0x7D9, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000656C8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005FFA4, 5004.857f, -127.6488f, -7591.291f, 0x7F25, 0xFFFF9937, 0x703A, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000656FC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005FFA4, -343.9996f, -40, -5601, 0, 0x3C5E, 0xFE3, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00065730 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005FFA4, 469.0008f, 0, -7095.999f, 0, 0xFFFFBEA1, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00065764 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005FFA4, 758.0018f, -25, -9309.998f, 0xFFFFFF7A, 0xFFFFE2D4, 0xFFFFFAA8, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00065798 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005FFA4, 1954.001f, -15, -7334.999f, 0, 0x7FED, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000657CC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005FFA4, 664, -55, -4567, 0, 0xFFFFFD1E, 0xFFFFFAB5, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00065800 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005FFA4, 2322.537f, -102.4831f, 752.507f, 0xFFFFF95B, 0xFFFFFCAB, 0x4E0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00065834 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005FFA4, -831.3022f, -178.2733f, -3869.981f, 0xFFFFBCC8, 0xFFFFC0B3, 0x32F3, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00065868 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005FFA4, -357.0001f, -35, -2494, 0xFFFFC890, 0x3D9F, 0xFFFFD609, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0006589C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000609B8, 4269.011f, -174.9992f, -7434.02f, 0x726, 0x6ED3, 0xAB1, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000658D0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000609B8, 48, -120, -2614, 0xFFFFFB82, 0x6DF3, 0x1C0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00065904 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000609B8, 4722, -115, -4905.018f, 0, 0x671C, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00065938 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000609B8, 5082.885f, -128.6982f, -3824.972f, 0xFFFFF71D, 0xFFFFF242, 0x11FB, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0006596C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00061404, 3812.509f, -166.2869f, -384.8918f, 0xFFFFF9B1, 0xFFFFD5F9, 0xABD, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000659A0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00061404, 43.99642f, -190, -6822.965f, 0xFFFFFAE1, 0xC18, 0xFFFFFE0F, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000659D4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00061404, 4488.996f, -147, -2964.012f, 0, 0xFFFFADD1, 0x61C, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00065A08 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00061404, 4544.116f, -171.1053f, -2162.773f, 0xE33, 0x11EC, 0xFFFFFA8D, 1, 1, 1, NULL, NULL };
COL collist_000200BC[] = {
	{ { 3939.998f, 50, -306.9999f }, 357.5598f, 0, 0, &object_00022E94, 0, 0x20200001 },
	{ { 3194.999f, 50, 267.4994f }, 177.6717f, 0, 0, &object_00023068, 0, 0x20200001 },
	{ { -292, 50, 43 }, 285.6799f, 0, 0, &object_00023318, 0, 0x20200001 },
	{ { 2850, 50, 286.9998f }, 291.8373f, 0, 0, &object_000235C8, 0, 0x20200001 },
	{ { 2350, 50, 299.9998f }, 291.5476f, 0, 0, &object_00023878, 0, 0x20200001 },
	{ { 1850, 50, 299.9999f }, 291.5476f, 0, 0, &object_00023B28, 0, 0x20200001 },
	{ { 1350, 50, 299.9999f }, 291.5476f, 0, 0, &object_00023DD8, 0, 0x20200001 },
	{ { 849.9995f, 50, 299.9999f }, 291.5476f, 0, 0, &object_00024088, 0, 0x20200001 },
	{ { 349.9995f, 50, 299.9999f }, 291.5476f, 0, 0, &object_00024338, 0, 0x20200001 },
	{ { -92, 50, 293 }, 243.7478f, 0, 0, &object_0002457C, 0, 0x20200001 },
	{ { -300, 50, -2450 }, 291.5476f, 0, 0, &object_0002482C, 0, 0x20200001 },
	{ { -300, 50, -2950 }, 291.5476f, 0, 0, &object_00024ADC, 0, 0x20200001 },
	{ { -300, 50, -3450 }, 291.5476f, 0, 0, &object_00024D8C, 0, 0x20200001 },
	{ { -300, 50, -3950 }, 291.5476f, 0, 0, &object_0002503C, 0, 0x20200001 },
	{ { -300, 50, -4450 }, 291.5476f, 0, 0, &object_000252EC, 0, 0x20200001 },
	{ { -300, 50, -450 }, 291.5476f, 0, 0, &object_0002559C, 0, 0x20200001 },
	{ { -300, 50, -4950 }, 291.5476f, 0, 0, &object_0002584C, 0, 0x20200001 },
	{ { -300, 50, -5450 }, 291.5476f, 0, 0, &object_00025AFC, 0, 0x20200001 },
	{ { -300, 50, -5950 }, 291.5476f, 0, 0, &object_00025DAC, 0, 0x20200001 },
	{ { -300, 50, -6450 }, 291.5476f, 0, 0, &object_0002605C, 0, 0x20200001 },
	{ { -300, 50, -6950 }, 291.5476f, 0, 0, &object_0002630C, 0, 0x20200001 },
	{ { -300, 50, -7450 }, 291.5476f, 0, 0, &object_000265BC, 0, 0x20200001 },
	{ { -300, 50, -7950 }, 291.5476f, 0, 0, &object_0002686C, 0, 0x20200001 },
	{ { -300, 50, -8450 }, 291.5476f, 0, 0, &object_00026B1C, 0, 0x20200001 },
	{ { -300, 50, -8950 }, 291.5476f, 0, 0, &object_00026DCC, 0, 0x20200001 },
	{ { -300, 50, -950 }, 291.5476f, 0, 0, &object_0002707C, 0, 0x20200001 },
	{ { 74.99999f, 50, -9492.999f }, 292.166f, 0, 0, &object_0002732C, 0, 0x20200001 },
	{ { 5099.999f, 50, -6650 }, 291.5476f, 0, 0, &object_000275DC, 0, 0x20200001 },
	{ { -300, 50, -1450 }, 291.5476f, 0, 0, &object_0002788C, 0, 0x20200001 },
	{ { 5099.999f, 50, -6150 }, 291.5476f, 0, 0, &object_00027B3C, 0, 0x20200001 },
	{ { 5099.999f, 50, -5650 }, 291.5476f, 0, 0, &object_00027DEC, 0, 0x20200001 },
	{ { 5099.999f, 50, -5150 }, 291.5476f, 0, 0, &object_0002809C, 0, 0x20200001 },
	{ { 5099.999f, 50, -4650 }, 291.5476f, 0, 0, &object_0002834C, 0, 0x20200001 },
	{ { 5099.999f, 50, -4150 }, 291.5476f, 0, 0, &object_000285FC, 0, 0x20200001 },
	{ { 5099.999f, 50, -3650 }, 291.5476f, 0, 0, &object_000288AC, 0, 0x20200001 },
	{ { 5099.999f, 50, -3150 }, 291.5476f, 0, 0, &object_00028B5C, 0, 0x20200001 },
	{ { 5099.999f, 50, -2650 }, 291.5476f, 0, 0, &object_00028E0C, 0, 0x20200001 },
	{ { -300, 50, -1950 }, 291.5476f, 0, 0, &object_000290BC, 0, 0x20200001 },
	{ { 5099.999f, 50, -2150 }, 291.5476f, 0, 0, &object_0002936C, 0, 0x20200001 },
	{ { 5099.999f, 50, -1650 }, 291.5476f, 0, 0, &object_0002961C, 0, 0x20200001 },
	{ { 413.5f, 50, -740 }, 219.7322f, 0, 0, &object_00029860, 0, 0x20200001 },
	{ { 400, 50, -1150 }, 291.5476f, 0, 0, &object_00029B18, 0, 0x20200001 },
	{ { 3149.999f, 50, -399.9995f }, 291.5476f, 0, 0, &object_00029DD0, 0, 0x20200001 },
	{ { 400, 50, -2650 }, 291.5476f, 0, 0, &object_0002A088, 0, 0x20200001 },
	{ { 400, 50, -3150 }, 291.5476f, 0, 0, &object_0002A340, 0, 0x20200001 },
	{ { 400, 50, -4650 }, 291.5476f, 0, 0, &object_0002A5F8, 0, 0x20200001 },
	{ { 400, 50, -3650 }, 291.5476f, 0, 0, &object_0002A8B0, 0, 0x20200001 },
	{ { 400, 50, -4150 }, 291.5476f, 0, 0, &object_0002AB68, 0, 0x20200001 },
	{ { 400, 50, -5150 }, 291.5476f, 0, 0, &object_0002AE20, 0, 0x20200001 },
	{ { 400, 50, -5650 }, 291.5476f, 0, 0, &object_0002B0D8, 0, 0x20200001 },
	{ { 400, 50, -6150 }, 291.5476f, 0, 0, &object_0002B390, 0, 0x20200001 },
	{ { 400, 50, -6650 }, 291.5476f, 0, 0, &object_0002B648, 0, 0x20200001 },
	{ { 400, 50, -7150 }, 291.5476f, 0, 0, &object_0002B900, 0, 0x20200001 },
	{ { 400, 50, -7650 }, 291.5476f, 0, 0, &object_0002BBB8, 0, 0x20200001 },
	{ { 400, 50, -8153 }, 294.1241f, 0, 0, &object_0002BE70, 0, 0x20200001 },
	{ { 4375.5f, 50, -6350 }, 292.5752f, 0, 0, &object_0002C12C, 0, 0x20200001 },
	{ { 4400, 50, -5850 }, 291.5476f, 0, 0, &object_0002C3E4, 0, 0x20200001 },
	{ { 4400, 50, -5350 }, 291.5476f, 0, 0, &object_0002C69C, 0, 0x20200001 },
	{ { 4400, 50, -4850 }, 291.5476f, 0, 0, &object_0002C954, 0, 0x20200001 },
	{ { 400, 50, -1650 }, 291.5476f, 0, 0, &object_0002CC0C, 0, 0x20200001 },
	{ { 4400, 50, -4350 }, 291.5476f, 0, 0, &object_0002CEC4, 0, 0x20200001 },
	{ { 4400, 50, -3850 }, 291.5476f, 0, 0, &object_0002D17C, 0, 0x20200001 },
	{ { 4400, 50, -3350 }, 291.5476f, 0, 0, &object_0002D434, 0, 0x20200001 },
	{ { 4400, 50, -2850 }, 291.5476f, 0, 0, &object_0002D6EC, 0, 0x20200001 },
	{ { 4400, 50, -2350 }, 291.5476f, 0, 0, &object_0002D9A4, 0, 0x20200001 },
	{ { 4400, 50, -1850 }, 291.5476f, 0, 0, &object_0002DC5C, 0, 0x20200001 },
	{ { 4388.499f, 50, -1350 }, 291.7743f, 0, 0, &object_0002DF14, 0, 0x20200001 },
	{ { 663.4995f, 50, -489.9996f }, 294.1634f, 0, 0, &object_0002E1CC, 0, 0x20200001 },
	{ { 400, 50, -2150 }, 291.5476f, 0, 0, &object_0002E484, 0, 0x20200001 },
	{ { 1149.999f, 50, -399.9993f }, 291.5476f, 0, 0, &object_0002E73C, 0, 0x20200001 },
	{ { 1649.999f, 50, -399.9994f }, 291.5476f, 0, 0, &object_0002E9F4, 0, 0x20200001 },
	{ { 2149.999f, 50, -399.9994f }, 291.5476f, 0, 0, &object_0002ECAC, 0, 0x20200001 },
	{ { 2649.999f, 50, -399.9994f }, 291.5476f, 0, 0, &object_0002EF64, 0, 0x20200001 },
	{ { 2200, 125, -7650 }, 270.4163f, 0, 0, &object_0002F180, 0, 0x20200001 },
	{ { -237.5f, 50, -9337 }, 212.5447f, 0, 0, &object_0002F3C4, 0, 0x20200001 },
	{ { 545, 50, -8409 }, 208.8205f, 0, 0, &object_0002F634, 0, 0x20200001 },
	{ { 2550, 100, -7550 }, 291.5476f, 0, 0, &object_0002F94C, 0, 0x20200001 },
	{ { 3050, 100, -7550 }, 291.5476f, 0, 0, &object_0002FC64, 0, 0x20200001 },
	{ { 512.5f, 50, -9395.999f }, 258.5967f, 0, 0, &object_0002FF14, 0, 0x20200001 },
	{ { 940, 50, -8150 }, 384.0573f, 0, 0, &object_0003023C, 0, 0x20200001 },
	{ { 3450, 100, -7550 }, 212.132f, 0, 0, &object_00030480, 0, 0x20200001 },
	{ { 1440, 50, -7650 }, 384.0573f, 0, 0, &object_000307A8, 0, 0x20200001 },
	{ { 899.9985f, 50, -9100 }, 320.1562f, 0, 0, &object_00030A58, 0, 0x20200001 },
	{ { 1299.999f, 50, -8700 }, 320.1562f, 0, 0, &object_00030D08, 0, 0x20200001 },
	{ { 1699.999f, 50, -8300 }, 320.1562f, 0, 0, &object_00030FC4, 0, 0x20200001 },
	{ { 4499.999f, 50, -7500 }, 320.1562f, 0, 0, &object_00031280, 0, 0x20200001 },
	{ { 4899.999f, 50, -7100 }, 320.1562f, 0, 0, &object_00031530, 0, 0x20200001 },
	{ { 4599.998f, 50, -800 }, 320.1562f, 0, 0, &object_000317E0, 0, 0x20200001 },
	{ { 3489.998f, 50, 80.50009f }, 308.3508f, 0, 0, &object_00031A90, 0, 0x20200001 },
	{ { 1940, 50, -7400 }, 291.5476f, 0, 0, &object_00031D28, 0, 0x20200001 },
	{ { 2099.999f, 50, -7900 }, 320.1562f, 0, 0, &object_00031FC0, 0, 0x20200001 },
	{ { 2440, 0, -7400 }, 269.2582f, 0, 0, &object_000321E4, 0, 0x20200001 },
	{ { 2940, 0, -7400 }, 269.2582f, 0, 0, &object_00032408, 0, 0x20200001 },
	{ { 3440, 0, -7400 }, 269.2582f, 0, 0, &object_0003262C, 0, 0x20200001 },
	{ { 2549.999f, 0, -7700 }, 269.2582f, 0, 0, &object_00032850, 0, 0x20200001 },
	{ { 3895, 50, -7250 }, 295, 0, 0, &object_00032AEC, 0, 0x20200001 },
	{ { 3549.999f, 0, -7700 }, 269.2582f, 0, 0, &object_00032D10, 0, 0x20200001 },
	{ { 3049.999f, 0, -7700 }, 269.2582f, 0, 0, &object_00032F34, 0, 0x20200001 },
	{ { 4049.999f, 50, -7700 }, 291.5476f, 0, 0, &object_000331CC, 0, 0x20200001 },
	{ { 4225.5f, 50, -6850 }, 317.4118f, 0, 0, &object_000334F4, 0, 0x20200001 },
	{ { 4949.999f, 50, -1200 }, 291.5476f, 0, 0, &object_000337A4, 0, 0x20200001 },
	{ { 4138.498f, 50, -891.9999f }, 350.2088f, 0, 0, &object_00033BA4, 0, 0x20200001 },
	{ { 4245, 50, -550.0001f }, 221.4159f, 0, 0, &object_00033DE8, 0, 0x20200001 },
	{ { 3649.996f, 50, -542.0004f }, 324.29f, 0, 0, &object_00034104, 0, 0x20200001 },
	{ { 76.9607f, 147.5f, -1088.665f }, 296.2614f, 0, 0, &object_000362EC, 0, 0xA0000001 }, 
	//{ { 589.8431f, 147.5f, -644.7521f }, 298.7647f, 0, 0, &object_000376FC, 0, 0xA0000001 }, //The disabled things shows up in the cutscene as separate objects
		//{ { 475.2404f, -30, -822.3176f }, 184.1577f, 0, 0, &object_00063ED0, 0, 0x80000000 },
	//{ { 696.8488f, -29.83669f, -496.2813f }, 184.1577f, 0, 0, &object_00063F04, 0, 0x80000000 },
	{ { 881.25f, 73.43416f, -945 }, 320.9914f, 0, 0, &object_00039A5C, 0, 0xA0000001 },
	{ { 584.7319f, 147.5f, -698.457f }, 253.5876f, 0, 0, &object_0003AFE4, 0, 0x20000001 },
	{ { -1132.692f, 296.5017f, -3780.618f }, 695.2542f, 0, 0, &object_0003C0BC, 0, 0x80000000 },
	{ { 444.1396f, 193.6867f, -1030.342f }, 465.9913f, 0, 0, &object_0003F1B4, 0, 0x80000000 },
	{ { 876.9999f, 127.2515f, -502 }, 355.6409f, 0, 0, &object_0003FFC4, 0, 0x80000000 },
	{ { 924.2482f, 334.5086f, -446.0494f }, 34.14107f, 0, 0, &object_00040134, 0, 0x80000000 },
	{ { 980.8643f, 127.2515f, -464.9684f }, 330.2325f, 0, 0, &object_00040528, 0, 0x80000000 },
	{ { 880.0513f, 466.3403f, -505.7733f }, 122.0669f, 0, 0, &object_0004094C, 0, 0x80000000 },
	{ { 890.3729f, 494.9709f, -518.5372f }, 103.1706f, 0, 0, &object_00040B28, 0, 0x80000000 },
	{ { 890.3729f, 525.7988f, -518.5372f }, 61.6368f, 0, 0, &object_00040D04, 0, 0x80000000 },
	{ { 2299.702f, 147.5f, -7758.207f }, 296.2614f, 0, 0, &object_0004270C, 0, 0x80000000 },
	{ { 2470.196f, 102.5f, -7443.296f }, 286.7783f, 0, 0, &object_00043538, 0, 0x80000000 },
	{ { 2943.399f, 102.5f, -7629.899f }, 286.7786f, 0, 0, &object_00043E70, 0, 0x80000000 },
	{ { 3346.508f, 102.5f, -7511.599f }, 340.3782f, 0, 0, &object_00044A60, 0, 0x80000000 },
	{ { 4739.932f, 12.08019f, -7356.779f }, 312.7602f, 0, 0, &object_00045E8C, 0, 0x80000000 },
	{ { 3701.533f, -0.9797313f, -7383.994f }, 269.3626f, 0, 0, &object_000469EC, 0, 0x80000000 },
	{ { 455.0655f, 83.19513f, -5455.921f }, 333.1651f, 0, 0, &object_000477C0, 0, 0x80000000 },
	{ { 519.2617f, 125.0034f, -7449.496f }, 223.2562f, 0, 0, &object_00049300, 0, 0x80000000 },
	{ { 57.5705f, -30, -1120.077f }, 184.1577f, 0, 0, &object_0004A23C, 0, 0x80000000 },
	{ { 911.5267f, -2.280139f, 343.7198f }, 296.2614f, 0, 0, &object_0004BC44, 0, 0x80000000 },
	{ { 371.9661f, 154.7585f, 448.0015f }, 417.8661f, 0, 0, &object_0004DAB4, 0, 0x80000000 },
	{ { -354.7853f, -99.99383f, -1657.446f }, 104.4896f, 0, 0, &object_0004E104, 0, 0x80000000 },
	{ { -353.5575f, 80.4713f, -1664.751f }, 110.5353f, 0, 0, &object_0004EEE0, 0, 0x80000000 },
	{ { -548.326f, 258.1717f, -1478.934f }, 595.394f, 0, 0, &object_0004F7E4, 0, 0x80000000 },
	{ { 4170.307f, -26.33114f, -3031.982f }, 356.0643f, 0, 0, &object_00050718, 0, 0x80000000 },
	{ { 3401, 92, -7184 }, 546.0709f, 0, 0, &object_00051780, 0, 0x80000000 },
	{ { 5325.766f, 27.72063f, -5307.641f }, 574.9462f, 0, 0, &object_00052428, 0, 0x80000000 },
	{ { 4185.378f, 140.6185f, -4889.182f }, 477.5102f, 0, 0, &object_00053174, 0, 0x80000000 },
	{ { 625.3682f, -44.79465f, -1440.726f }, 405.8776f, 0, 0, &object_00053EFC, 0, 0x80000000 },
	{ { -509.9469f, 246.1328f, -967.3627f }, 551.3348f, 0, 0, &object_000556E4, 0, 0x80000000 },
	{ { 4237.455f, 24.5654f, -5377.018f }, 478.5497f, 0, 0, &object_00056658, 0, 0x80000000 },
	{ { 4182.262f, 4.993145f, -5836.203f }, 347.8372f, 0, 0, &object_000573AC, 0, 0x80000000 },
	{ { 4055.188f, -23.30909f, -1976.015f }, 471.5067f, 0, 0, &object_00057CF0, 0, 0x80000000 },
	{ { 5997.762f, 302.1672f, -1931.042f }, 632.7922f, 0, 0, &object_00058CC4, 0, 0x80000000 },
	{ { 5283.1f, 55.81789f, -6369.455f }, 461.2889f, 0, 0, &object_0005A794, 0, 0x80000000 },
	{ { 635.09f, 13.12904f, -4291.774f }, 427.176f, 0, 0, &object_0005D348, 0, 0x80000000 },
	{ { -1427.48f, 581.9792f, -153.47f }, 921.0228f, 0, 0, &object_0005E13C, 0, 0x80000000 },
	{ { -714.9997f, 327.6366f, -480 }, 676.3278f, 0, 0, &object_0005EE20, 0, 0x80000000 },
	{ { 646.4252f, 351.9414f, -2358.942f }, 679.8457f, 0, 0, &object_0005FFCC, 0, 0x80000000 },
	{ { 37.91978f, -134.6402f, -4700.007f }, 266.662f, 0, 0, &object_000609E0, 0, 0x80000000 },
	{ { 1693.037f, -115.9113f, 245.8794f }, 291.5382f, 0, 0, &object_0006142C, 0, 0x80000000 },
	{ { 4849.712f, 561.1116f, -818.9719f }, 822.4465f, 0, 0, &object_00063AF4, 0, 0x80000000 },
	{ { -1143.279f, 296.5017f, -5158.037f }, 695.2542f, 0, 0, &object_00063B28, 0, 0x80000000 },
	{ { 807.7985f, 218.7612f, -2984.091f }, 695.2542f, 0, 0, &object_00063B5C, 0, 0x80000000 },
	{ { 865.4973f, 294.4394f, -10251.91f }, 695.2542f, 0, 0, &object_00063B90, 0, 0x80000000 },
	{ { 464.4525f, 194.752f, -5149.798f }, 465.9913f, 0, 0, &object_00063C94, 0, 0x80000000 },
	{ { -398, 68.62273f, 185 }, 355.6409f, 0, 0, &object_00063CC8, 0, 0x80000000 },
	{ { 515, 127.2515f, -643.8933f }, 355.6409f, 0, 0, &object_00063CFC, 0, 0x80000000 },
	{ { -334.1535f, 68.62273f, 274.9042f }, 330.2325f, 0, 0, &object_00063D30, 0, 0x80000000 },
	{ { 577.9443f, 127.2515f, -553.3552f }, 330.2325f, 0, 0, &object_00063D64, 0, 0x80000000 },
	{ { -393.3364f, 407.7116f, 183.659f }, 122.0669f, 0, 0, &object_00063D98, 0, 0x80000000 },
	{ { 519.6768f, 466.3403f, -645.1877f }, 122.0669f, 0, 0, &object_00063DCC, 0, 0x80000000 },
	{ { 535.4972f, 494.9709f, -649.5661f }, 103.1706f, 0, 0, &object_00063E00, 0, 0x80000000 },
	{ { 535.4972f, 525.7988f, -649.5661f }, 61.6368f, 0, 0, &object_00063E34, 0, 0x80000000 },
	{ { 791.0767f, 84.2987f, -8255.954f }, 333.1651f, 0, 0, &object_00063E68, 0, 0x80000000 },
	{ { 1252.288f, 125, -1350.499f }, 223.2562f, 0, 0, &object_00063E9C, 0, 0x80000000 },
	{ { 3004.499f, -42.44037f, -7670.818f }, 161.4062f, 0, 0, &object_00063F38, 0, 0x80000000 },
	{ { 3484.876f, -52.48564f, -7442.051f }, 161.4062f, 0, 0, &object_00063F6C, 0, 0x80000000 },
	{ { 2280.345f, -29.18939f, -7782.301f }, 184.1577f, 0, 0, &object_00063FA0, 0, 0x80000000 },
	{ { 692.841f, 153.5329f, 453.1535f }, 417.8661f, 0, 0, &object_00063FD4, 0, 0x80000000 },
	{ { 1137.184f, 134.3486f, 464.9319f }, 417.8661f, 0, 0, &object_00064008, 0, 0x80000000 },
	{ { 1134.981f, 122.5093f, -625.6396f }, 417.8661f, 0, 0, &object_0006403C, 0, 0x80000000 },
	{ { 1326.923f, 122.9935f, -1030.79f }, 417.8661f, 0, 0, &object_00064070, 0, 0x80000000 },
	{ { -518.065f, 153.7773f, 445.9275f }, 417.8661f, 0, 0, &object_000640A4, 0, 0x80000000 },
	{ { -482.8118f, 139.7392f, -88.24729f }, 417.8661f, 0, 0, &object_000640D8, 0, 0x80000000 },
	{ { -916.9261f, 179.1129f, 93.98357f }, 417.8661f, 0, 0, &object_0006410C, 0, 0x80000000 },
	{ { 998.5796f, -125.1426f, 281.944f }, 104.4896f, 0, 0, &object_00064140, 0, 0x80000000 },
	{ { 4336.823f, -138.7404f, -7644.158f }, 104.4896f, 0, 0, &object_00064174, 0, 0x80000000 },
	{ { 3359.38f, -95.81397f, -379.4208f }, 104.4896f, 0, 0, &object_000641A8, 0, 0x80000000 },
	{ { 4266.924f, -206.8442f, -575.0777f }, 104.4896f, 0, 0, &object_000641DC, 0, 0x80000000 },
	{ { 3375.273f, -59.15538f, -611.5071f }, 104.4896f, 0, 0, &object_00064210, 0, 0x80000000 },
	{ { 3815.191f, -77.7914f, -7372.822f }, 104.4896f, 0, 0, &object_00064244, 0, 0x80000000 },
	{ { 375.3082f, -147.5315f, -742.7968f }, 104.4896f, 0, 0, &object_00064278, 0, 0x80000000 },
	{ { 2355.881f, -124.7618f, -7747.548f }, 104.4896f, 0, 0, &object_000642AC, 0, 0x80000000 },
	{ { -354.1185f, -99.99383f, -3547.412f }, 104.4896f, 0, 0, &object_000642E0, 0, 0x80000000 },
	{ { 733.2747f, -164.6957f, -8345.837f }, 104.4896f, 0, 0, &object_00064314, 0, 0x80000000 },
	{ { 415.8687f, -99.99383f, -4747.593f }, 104.4896f, 0, 0, &object_00064348, 0, 0x80000000 },
	{ { 4746.364f, -27.37828f, -7438.765f }, 104.4896f, 0, 0, &object_0006437C, 0, 0x80000000 },
	{ { 5079.101f, -248.1026f, -4615.706f }, 104.4896f, 0, 0, &object_000643B0, 0, 0x80000000 },
	{ { 5150.353f, 32.8119f, -4609.599f }, 104.4896f, 0, 0, &object_000643E4, 0, 0x80000000 },
	{ { 382.2741f, -93.66526f, -5456.965f }, 104.4896f, 0, 0, &object_00064418, 0, 0x80000000 },
	{ { 436.0534f, 75.51856f, -5423.731f }, 110.5353f, 0, 0, &object_0006444C, 0, 0x80000000 },
	{ { -358.3141f, 80.4713f, -3541.306f }, 110.5353f, 0, 0, &object_00064480, 0, 0x80000000 },
	{ { 727.7618f, 15.48389f, -8334.521f }, 110.5353f, 0, 0, &object_000644B4, 0, 0x80000000 },
	{ { 415.1641f, 80.4713f, -4754.966f }, 110.5353f, 0, 0, &object_000644E8, 0, 0x80000000 },
	{ { 4674.244f, 138.2189f, -7440.608f }, 110.5353f, 0, 0, &object_0006451C, 0, 0x80000000 },
	{ { 5105.459f, -71.30695f, -4589.801f }, 110.5353f, 0, 0, &object_00064550, 0, 0x80000000 },
	{ { 5191.687f, 207.9883f, -4594.524f }, 110.5353f, 0, 0, &object_00064584, 0, 0x80000000 },
	{ { 4350.118f, 39.2486f, -7671.931f }, 110.5353f, 0, 0, &object_000645B8, 0, 0x80000000 },
	{ { 3352.014f, 76.9077f, -431.7227f }, 110.5353f, 0, 0, &object_000645EC, 0, 0x80000000 },
	{ { 4270.023f, -32.25945f, -528.8923f }, 110.5353f, 0, 0, &object_00064620, 0, 0x80000000 },
	{ { 3366.088f, 119.453f, -586.2651f }, 110.5353f, 0, 0, &object_00064654, 0, 0x80000000 },
	{ { 3840.33f, 98.1057f, -7340.288f }, 110.5353f, 0, 0, &object_00064688, 0, 0x80000000 },
	{ { 421.0803f, 21.9031f, -785.4507f }, 110.5353f, 0, 0, &object_000646BC, 0, 0x80000000 },
	{ { 2370.616f, 55.1774f, -7742.327f }, 110.5353f, 0, 0, &object_000646F0, 0, 0x80000000 },
	{ { 955.153f, 46.36346f, 318.3076f }, 110.5353f, 0, 0, &object_00064724, 0, 0x80000000 },
	{ { -518.867f, 279.1508f, -6147.912f }, 595.394f, 0, 0, &object_00064758, 0, 0x80000000 },
	{ { 650.626f, 273.344f, -7619.717f }, 595.394f, 0, 0, &object_0006478C, 0, 0x80000000 },
	{ { 766.5671f, 133.9259f, -6184.858f }, 595.394f, 0, 0, &object_000647C0, 0, 0x80000000 },
	{ { 1375.535f, 279.2983f, -1527.433f }, 595.394f, 0, 0, &object_000647F4, 0, 0x80000000 },
	{ { 4626.211f, 4.668854f, -7685.223f }, 356.0643f, 0, 0, &object_00064828, 0, 0x80000000 },
	{ { 2024.46f, 4.614539f, -601.6214f }, 356.0643f, 0, 0, &object_0006485C, 0, 0x80000000 },
	{ { 4158.306f, -76.33114f, -6239.025f }, 356.0643f, 0, 0, &object_00064890, 0, 0x80000000 },
	{ { 4139.299f, 4.668854f, -1126.933f }, 356.0643f, 0, 0, &object_000648C4, 0, 0x80000000 },
	{ { 5322.003f, 4.668854f, -2466.307f }, 356.0643f, 0, 0, &object_000648F8, 0, 0x80000000 },
	{ { 5349.997f, 92, -4799.994f }, 546.0709f, 0, 0, &object_0006492C, 0, 0x80000000 },
	{ { 5354.997f, 31.99993f, -3274.993f }, 546.0709f, 0, 0, &object_00064960, 0, 0x80000000 },
	{ { 3767.45f, 71.37006f, 242.5278f }, 546.0709f, 0, 0, &object_00064994, 0, 0x80000000 },
	{ { 5086.999f, 92, -7244.993f }, 546.0709f, 0, 0, &object_000649C8, 0, 0x80000000 },
	{ { 2405.173f, -44.22726f, -648.1752f }, 574.9462f, 0, 0, &object_000649FC, 0, 0x80000000 },
	{ { 4219.376f, 32.0778f, -2519.536f }, 574.9462f, 0, 0, &object_00064A30, 0, 0x80000000 },
	{ { 4051.865f, 86.32599f, -152.2412f }, 574.9462f, 0, 0, &object_00064A64, 0, 0x80000000 },
	{ { 2936, 140.6185f, -7225.354f }, 477.5102f, 0, 0, &object_00064A98, 0, 0x80000000 },
	{ { 4120.541f, 90.65296f, -6670.153f }, 477.5102f, 0, 0, &object_00064ACC, 0, 0x80000000 },
	{ { 5321.318f, -56.97631f, -5897.541f }, 477.5102f, 0, 0, &object_00064B00, 0, 0x80000000 },
	{ { 3525.294f, 36.11645f, -711.8163f }, 477.5102f, 0, 0, &object_00064B34, 0, 0x80000000 },
	{ { -50.43689f, 72.18513f, 508.9515f }, 477.5102f, 0, 0, &object_00064B68, 0, 0x80000000 },
	{ { 5315.626f, 41.61805f, -1588.51f }, 477.5102f, 0, 0, &object_00064B9C, 0, 0x80000000 },
	{ { 4193.937f, 95.05846f, -3456.738f }, 477.5102f, 0, 0, &object_00064BD0, 0, 0x80000000 },
	{ { -529.5134f, 53.79443f, -2012.288f }, 405.8776f, 0, 0, &object_00064C04, 0, 0x80000000 },
	{ { 640.9129f, 52.30006f, -5780.205f }, 405.8776f, 0, 0, &object_00064C38, 0, 0x80000000 },
	{ { -546.6364f, 53.5161f, -7633.169f }, 405.8776f, 0, 0, &object_00064C6C, 0, 0x80000000 },
	{ { 1958.216f, 50.58042f, 595.6039f }, 405.8776f, 0, 0, &object_00064CA0, 0, 0x80000000 },
	{ { 3862.045f, 53.65402f, -7006.609f }, 405.8776f, 0, 0, &object_00064CD4, 0, 0x80000000 },
	{ { -560.017f, -32.23134f, -3414.886f }, 405.8776f, 0, 0, &object_00064D08, 0, 0x80000000 },
	{ { 2647.353f, 42.39381f, -7944.218f }, 405.8776f, 0, 0, &object_00064D3C, 0, 0x80000000 },
	{ { 5326.926f, 46.37285f, -6824.104f }, 405.8776f, 0, 0, &object_00064D70, 0, 0x80000000 },
	{ { 5397.581f, 72.38379f, -3662.535f }, 405.8776f, 0, 0, &object_00064DA4, 0, 0x80000000 },
	{ { 4173.609f, 88.04073f, -4400.109f }, 405.8776f, 0, 0, &object_00064DD8, 0, 0x80000000 },
	{ { 3088.457f, 72.61509f, -647.962f }, 405.8776f, 0, 0, &object_00064E0C, 0, 0x80000000 },
	{ { -499.7736f, 73.09283f, -9303.021f }, 405.8776f, 0, 0, &object_00064E40, 0, 0x80000000 },
	{ { 1774.613f, 70.71665f, -8566.639f }, 405.8776f, 0, 0, &object_00064E74, 0, 0x80000000 },
	{ { 2989.298f, -173.9373f, -7934.163f }, 551.3348f, 0, 0, &object_00064EA8, 0, 0x80000000 },
	{ { 972.6523f, 239.6648f, -7954.155f }, 551.3348f, 0, 0, &object_00064EDC, 0, 0x80000000 },
	{ { -469.3648f, 229.7667f, -5119.182f }, 551.3348f, 0, 0, &object_00064F10, 0, 0x80000000 },
	{ { -443.9784f, 158.2103f, -7172.896f }, 551.3348f, 0, 0, &object_00064F44, 0, 0x80000000 },
	{ { 4194.142f, 279.2861f, -7828.692f }, 551.3348f, 0, 0, &object_00064F78, 0, 0x80000000 },
	{ { -995.8049f, 246.1481f, 557.696f }, 551.3348f, 0, 0, &object_00064FAC, 0, 0x80000000 },
	{ { 2439.586f, 152.9356f, -7142.344f }, 551.3348f, 0, 0, &object_00064FE0, 0, 0x80000000 },
	{ { 507.2471f, 262.8616f, -8173.225f }, 551.3348f, 0, 0, &object_00065014, 0, 0x80000000 },
	{ { -86.65863f, 216.8886f, -9673.65f }, 551.3348f, 0, 0, &object_00065048, 0, 0x80000000 },
	{ { 5360.52f, 24.77626f, -4059.146f }, 478.5497f, 0, 0, &object_0006507C, 0, 0x80000000 },
	{ { 1572.922f, 135.3015f, -598.6009f }, 478.5497f, 0, 0, &object_000650B0, 0, 0x80000000 },
	{ { 3220.987f, 193.8512f, 419.4555f }, 478.5497f, 0, 0, &object_000650E4, 0, 0x80000000 },
	{ { 4235.771f, 175.7182f, -1490.025f }, 478.5497f, 0, 0, &object_00065118, 0, 0x80000000 },
	{ { 5347.15f, 73.5787f, -2863.87f }, 478.5497f, 0, 0, &object_0006514C, 0, 0x80000000 },
	{ { 5274.565f, 4.784515f, -4403.771f }, 347.8372f, 0, 0, &object_00065180, 0, 0x80000000 },
	{ { 5311.409f, 4.784507f, -2069.65f }, 347.8372f, 0, 0, &object_000651B4, 0, 0x80000000 },
	{ { 2714.789f, 4.785127f, -618.8792f }, 347.8372f, 0, 0, &object_000651E8, 0, 0x80000000 },
	{ { 4254.197f, 1.281928f, -360.534f }, 347.8372f, 0, 0, &object_0006521C, 0, 0x80000000 },
	{ { 1510.683f, 9.717289f, 487.8667f }, 347.8371f, 0, 0, &object_00065250, 0, 0x80000000 },
	{ { 5327.46f, -69.14133f, -1042.767f }, 471.5067f, 0, 0, &object_00065284, 0, 0x80000000 },
	{ { 4657.713f, 43.10656f, -403.0288f }, 471.5067f, 0, 0, &object_000652B8, 0, 0x80000000 },
	{ { 4024.155f, 96.96832f, -930.4224f }, 461.2889f, 0, 0, &object_000652EC, 0, 0x80000000 },
	{ { 2803.991f, 69.3055f, 511.7883f }, 461.2889f, 0, 0, &object_00065320, 0, 0x80000000 },
	{ { 565.1291f, 136.2121f, -1890.194f }, 461.2889f, 0, 0, &object_00065354, 0, 0x80000000 },
	{ { 4182.55f, 165.9692f, -3968.424f }, 461.2889f, 0, 0, &object_00065388, 0, 0x80000000 },
	{ { -509.6741f, 82.23918f, -8080.713f }, 427.176f, 0, 0, &object_000653BC, 0, 0x80000000 },
	{ { 413.9998f, 82.65622f, -9683.999f }, 427.176f, 0, 0, &object_000653F0, 0, 0x80000000 },
	{ { -532.6514f, 50.23182f, -2947.871f }, 427.176f, 0, 0, &object_00065424, 0, 0x80000000 },
	{ { 616.6923f, 81.23438f, -6645.814f }, 427.176f, 0, 0, &object_00065458, 0, 0x80000000 },
	{ { -1155.575f, 602.6066f, -9335.863f }, 921.0228f, 0, 0, &object_0006548C, 0, 0x80000000 },
	{ { 3546.451f, 400.8973f, -7891.861f }, 921.0228f, 0, 0, &object_000654C0, 0, 0x80000000 },
	{ { -326.6208f, 609.6447f, -10691.5f }, 921.0228f, 0, 0, &object_000654F4, 0, 0x80000000 },
	{ { 1581.973f, 604.5044f, -9770.926f }, 921.0228f, 0, 0, &object_00065528, 0, 0x80000000 },
	{ { -216.1679f, 614.2094f, 1060.595f }, 921.0228f, 0, 0, &object_0006555C, 0, 0x80000000 },
	{ { -569.5998f, 250.0601f, -8702.905f }, 676.3278f, 0, 0, &object_00065590, 0, 0x80000000 },
	{ { 1263.9f, 213.8967f, -7365.661f }, 676.3278f, 0, 0, &object_000655C4, 0, 0x80000000 },
	{ { 1377.83f, 295.7675f, -8977.79f }, 676.3278f, 0, 0, &object_000655F8, 0, 0x80000000 },
	{ { 617.5327f, 279.02f, -3742.998f }, 676.3278f, 0, 0, &object_0006562C, 0, 0x80000000 },
	{ { -615.4114f, 309.8603f, -4499.001f }, 676.3278f, 0, 0, &object_00065660, 0, 0x80000000 },
	{ { -752.1323f, 201.4377f, -6686.028f }, 676.3278f, 0, 0, &object_00065694, 0, 0x80000000 },
	{ { 5245.363f, 149.9525f, -7752.008f }, 679.8456f, 0, 0, &object_000656C8, 0, 0x80000000 },
	{ { -654.4525f, 212.9014f, -5620.891f }, 679.8457f, 0, 0, &object_000656FC, 0, 0x80000000 },
	{ { 660.7998f, 351.9414f, -7086.717f }, 679.8457f, 0, 0, &object_00065730, 0, 0x80000000 },
	{ { 933.7165f, 304.2742f, -9456.418f }, 679.8457f, 0, 0, &object_00065764, 0, 0x80000000 },
	{ { 1950.833f, 336.9414f, -7143.001f }, 679.8457f, 0, 0, &object_00065798, 0, 0x80000000 },
	{ { 725.8828f, 291.846f, -4758.322f }, 679.8457f, 0, 0, &object_000657CC, 0, 0x80000000 },
	{ { 2307.62f, 214.0765f, 506.9399f }, 679.8457f, 0, 0, &object_00065800, 0, 0x80000000 },
	{ { -517.5959f, 71.35773f, -3872.894f }, 679.8456f, 0, 0, &object_00065834, 0, 0x80000000 },
	{ { -652.4451f, 234.838f, -2519.208f }, 679.8456f, 0, 0, &object_00065868, 0, 0x80000000 },
	{ { 4268.942f, -174.6418f, -7434.079f }, 266.662f, 0, 0, &object_0006589C, 0, 0x80000000 },
	{ { 47.96689f, -119.6346f, -2613.963f }, 266.662f, 0, 0, &object_000658D0, 0, 0x80000000 },
	{ { 4722, -114.6313f, -4905.018f }, 266.662f, 0, 0, &object_00065904, 0, 0x80000000 },
	{ { 5082.754f, -128.3614f, -3825.047f }, 266.662f, 0, 0, &object_00065938, 0, 0x80000000 },
	{ { 3812.491f, -166.1472f, -384.903f }, 291.5382f, 0, 0, &object_0006596C, 0, 0x80000000 },
	{ { 43.99782f, -189.8598f, -6822.981f }, 291.5382f, 0, 0, &object_000659A0, 0, 0x80000000 },
	{ { 4488.975f, -146.8603f, -2964.012f }, 291.5382f, 0, 0, &object_000659D4, 0, 0x80000000 },
	{ { 4544.154f, -170.9764f, -2162.729f }, 291.5382f, 0, 0, &object_00065A08, 0, 0x80000000 },
	{ { 593.7338f, 688.8506f, -11043.39f }, 1046.215f, 0, 0, &object_0003D124, 0, 0x80000000 }, //Buildings with alpha
	{ { 2273.768f, 692.4528f, -8248.215f }, 1046.215f, 0, 0, &object_00063BC4, 0, 0x80000000 },
	{ { -894.4942f, 685.5546f, -10241.3f }, 1046.215f, 0, 0, &object_00063BF8, 0, 0x80000000 },
	{ { 1176.369f, 775.0673f, -5461.935f }, 1116.663f, 0, 0, &object_00063C2C, 0, 0x80000000 },
	{ { -1361.592f, 691.6057f, -8212.576f }, 1046.215f, 0, 0, &object_00063C60, 0, 0x80000000 },
	{ { 2530, -200, -4750 }, 10606.6f, -49952.0f, 0, &object_000348E4, 0, 0x81000020 }, //Underwater effect
	{ { 2530, -160, -4750 }, 10606.6f, -48952.0f, 0, &object_00034644, 0, 0x81000020 }, //Underwater effect
	{ { 2530, -90, -4750 }, 10606.6f, -47952.0f, 0, &object_000343A4, 0, 0x81000020 }, //Underwater effect
};

extern "C" __declspec(dllexport) LandTable landtable_00001214 = { LengthOfArray(collist_000200BC), 0, 0xC, 0, 3000, collist_000200BC, NULL, "LM_CHAOS7_0", &texlist_chaos7, 0, 0 };

#pragma warning(pop)