#include "stdafx.h"

DataArray(SkyboxScale, SkyboxScale_SkyChase1, 0x027D6CE0, 3);
DataArray(DrawDistance, DrawDist_SkyChase1, 0x027D6D58, 3);

static float HorizontalResolution_float   = 640.0f;
static float VerticalResolution_float     = 480.0f;
static float VerticalResolutionHalf_float = 240.0f;

static float float_one               = 1.0f;
static float tornado_speed           = 1.0f;
static float target_collision_size   = 1.0f;
static float target_speed_multiplier = 2.0f;

static double SkyChaseSkyRotationMultiplier = -0.5f;

static const int  hack_int = 0x39A1877F;
static const auto hack_flt = *reinterpret_cast<const float*>(&hack_int);

template <typename T>
T clamp(T value, T low, T high)
{
	if (value < low)
	{
		return low;
	}

	if (value > high)
	{
		return high;
	}

	return value;
}

static void TornadoTarget_MoveTargetWithinBounds_asm();
static void __cdecl TornadoTargetSprite_TargetLock_Display_r(ObjectMaster *a1);
static void TornadoTarget_Render(NJS_SPRITE *sp, Int n, Float pri, NJD_SPRITE attr, QueuedModelFlagsB queue_flags);
static void RenderSkyChaseRocket(NJS_POINT3COL *a1, int texnum, NJD_DRAW n, QueuedModelFlagsB a4);
static void SetSkyChaseRocketColor(float a, float r, float g, float b);
static void __cdecl TornadoTarget_CalculateCenterPoint_r(ObjectMaster *a1);

void SkyChaseFix_UpdateBounds()
{
	// Resolution related fixes
	HorizontalResolution_float = static_cast<float>(HorizontalResolution);
	VerticalResolution_float = static_cast<float>(VerticalResolution);
	VerticalResolutionHalf_float = VerticalResolution_float / 2.0f;

	auto m = min(VerticalStretch, HorizontalStretch);

	// Sky Chase reticle and multiplier fixes
	target_speed_multiplier = m;
	target_collision_size = 1024.0f * m;

	WriteData(reinterpret_cast<float*>(0x00628951), m); // Reticle scale X
	WriteData(reinterpret_cast<float*>(0x0062895B), m); // Reticle scale Y
}

void SkyChaseFix_Init()
{
	SkyChaseFix_UpdateBounds();

	WriteJump(reinterpret_cast<void*>(0x00628970), TornadoTarget_MoveTargetWithinBounds_asm);

	WriteData(reinterpret_cast<float**>(0x00627F4D), &tornado_speed); // Tornado Speed (always 1)
	WriteData(reinterpret_cast<float**>(0x00627F60), &float_one);     // Horizontal limit
	WriteData(reinterpret_cast<float**>(0x00627F72), &float_one);     // Vertical limit

	WriteJump(reinterpret_cast<void*>(0x628D50), TornadoTarget_CalculateCenterPoint_r); // Calculate center for bullets

	// Hodai fixes
	WriteData(reinterpret_cast<float**>(0x0043854D), &HorizontalResolution_float);
	WriteData(reinterpret_cast<float**>(0x00438571), &VerticalResolutionHalf_float);
	WriteData(reinterpret_cast<float**>(0x0043857F), &VerticalResolutionHalf_float);
	WriteCall(reinterpret_cast<void*>(0x0062C764), SetSkyChaseRocketColor);
	WriteCall(reinterpret_cast<void*>(0x0062C704), RenderSkyChaseRocket);

	WriteData(reinterpret_cast<float**>(0x628AF7), &target_collision_size);     // Target size
	WriteData(reinterpret_cast<float**>(0x00629472), &target_speed_multiplier); // Target speed

	// Visual stuff
	WriteCall(reinterpret_cast<void*>(0x00629004), TornadoTarget_Render);
	WriteCall(reinterpret_cast<void*>(0x00628FE5), TornadoTarget_Render);
	WriteJump(reinterpret_cast<void*>(0x00628DB0), TornadoTargetSprite_TargetLock_Display_r);
	WriteData(reinterpret_cast<double**>(0x00627D14), &SkyChaseSkyRotationMultiplier);

	reinterpret_cast<NJS_OBJECT*>(0x028DFD34)->basicdxmodel->mats[0].diffuse.color = 0xFFFFFFFF; // Sky materials in Act 1
	reinterpret_cast<NJS_OBJECT*>(0x028175F4)->basicdxmodel->mats[0].diffuse.color = 0xFFFFFFFF; // Sky materials in Act 1

	SkyboxScale_SkyChase1->Far.x    = 4.0f;
	SkyboxScale_SkyChase1->Far.y    = 4.0f;
	SkyboxScale_SkyChase1->Far.z    = 4.0f;
	SkyboxScale_SkyChase1->Near.x   = 4.0f;
	SkyboxScale_SkyChase1->Near.y   = 4.0f;
	SkyboxScale_SkyChase1->Near.z   = 4.0f;
	SkyboxScale_SkyChase1->Normal.x = 4.0f;
	SkyboxScale_SkyChase1->Normal.y = 4.0f;
	SkyboxScale_SkyChase1->Normal.z = 4.0f;

	WriteData(reinterpret_cast<char*>(0x0062751B), nullptr, 1); // Force Tornado light type
	WriteData(reinterpret_cast<char*>(0x0062AC1F), nullptr, 1); // Force Tornado light type (transformation cutscene)

	for (int i = 0; i < 3; i++)
	{
		DrawDist_SkyChase1[i].Maximum = -60000.0f;
	}
}

static void __cdecl TornadoTarget_MoveTargetWithinBounds_r(ObjectMaster *a1)
{
	EntityData1* data1 = a1->Data1;

	const float m = min(VerticalStretch, HorizontalStretch);
	const float move_speed = m * hack_flt;

	// 640x480 - 160x160 margin
	const auto w = 480.0f * m;
	const auto h = 320.0f * m;

	float x = (static_cast<float>(static_cast<int>(Controllers[0].LeftStickX) << 8) * move_speed) + data1->Position.x;
	float y = (static_cast<float>(static_cast<int>(Controllers[0].LeftStickY) << 8) * move_speed) + data1->Position.y;

	const float left   = (HorizontalResolution_float - w) / 2.0f;
	const float top    = (VerticalResolution_float - h) / 2.0f;
	const float right  = left + w;
	const float bottom = top + h;

	x = clamp(x, left, right);
	y = clamp(y, top, bottom);

	data1->Position.x = x;
	data1->Position.y = y;
}

static void __declspec(naked) TornadoTarget_MoveTargetWithinBounds_asm()
{
	__asm
	{
		push eax
		call TornadoTarget_MoveTargetWithinBounds_r
		pop eax
		retn
	}
}

static void __cdecl TornadoTargetSprite_TargetLock_Display_r(ObjectMaster* a1)
{
	NJS_POINT2 position; // [esp+4h] [ebp-8h]

	EntityData1* v1 = a1->Data1;

	if (!MissedFrames && !CheckSkyChaseActionThing())
	{
		njPushMatrix(nullptr);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_ONE);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
		SetMaterialAndSpriteColor_Float(1.0f, 1.0f, 1.0f, 1.0f);
		njSetTexture(&TARGET_TEXLIST);
		njProjectScreen(nullptr, &v1->Position, &position);
		*reinterpret_cast<NJS_POINT2*>(&TornadoTarget_SPRITE.p) = position;
		TornadoTarget_SPRITE.sy = v1->Scale.y * min(VerticalStretch, HorizontalStretch);
		njTextureShadingMode(1);

		if (GameState != 16)
		{
			njDrawSprite2D_ForcePriority(&TornadoTarget_SPRITE, 2, 1000.0f, NJD_SPRITE_ALPHA | NJD_SPRITE_COLOR);
		}

		njPopMatrix(1u);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
		ClampGlobalColorThing_Thing();
		njTextureShadingMode(2);
	}
}

static void TornadoTarget_Render(NJS_SPRITE* sp, Int n, Float pri, NJD_SPRITE attr, QueuedModelFlagsB queue_flags)
{
	njTextureShadingMode(1);
	njDrawSprite2D_Queue(sp, n, pri, attr, queue_flags);
	njTextureShadingMode(2);
}

static void RenderSkyChaseRocket(NJS_POINT3COL* a1, int texnum, NJD_DRAW n, QueuedModelFlagsB a4)
{
	DrawQueueDepthBias = 20000.0f;
	DrawTriFanThing_Queue(a1, texnum, n, QueuedModelFlagsB_SomeTextureThing);
	DrawQueueDepthBias = 0;
}

static void SetSkyChaseRocketColor(float a, float r, float g, float b)
{
	AddConstantAttr(0, NJD_FLAG_IGNORE_LIGHT);
	SetMaterialAndSpriteColor_Float(1.0f, 1.0f, 1.0f, 1.0f);
}

static void __cdecl TornadoTarget_CalculateCenterPoint_r(ObjectMaster* a1)
{
	EntityData1* parent_data1 = a1->Parent->Data1;
	NJS_VECTOR*  position     = &a1->Data1->Position;

	position->x = parent_data1->Position.x - _nj_screen_.cx;
	position->y = parent_data1->Position.y - _nj_screen_.cy;
	position->z = 1000.0f * min(VerticalStretch, HorizontalStretch);

	njPushMatrix(nullptr);
	njInvertMatrix(nullptr);
	njCalcPoint(nullptr, position, position);
	njPopMatrix(1u);
}