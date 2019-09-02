#include "stdafx.h"

FunctionPointer(void, Draw3DLines, (NJS_POINT3COL *points, int count, NJD_DRAW attr), 0x77EBA0);

void __cdecl DrawModelCallback_Queue_r(void(__cdecl *function)(void *), void *data, float depth, QueuedModelFlagsB queueflags)
{
	SetSpriteColorAndZFuncThing(queueflags);
	function(data);
	Direct3D_ResetZFunc();
	Direct3D_EnableZWrite(1u);
	ClampGlobalColorThing_Thing();
}

void __cdecl Draw3DLines_Queue_r(NJS_POINT3COL *a1, int a2, NJD_DRAW attr, QueuedModelFlagsB a4)
{
	Draw3DLines(a1, a2, attr);
}

void __cdecl DrawTriFanThing_Queue_r(NJS_POINT3COL *a1, int texnum, NJD_DRAW n, QueuedModelFlagsB a4)
{
	DrawSomeTriangleFanThing(a1, texnum, n);
}

void __cdecl Draw2DLines_Queue_r(NJS_POINT2COL *points, int count, float depth, NJD_DRAW attr, QueuedModelFlagsB flags)
{
	njDrawTriangle2D(points, count, depth, attr);
}

void __cdecl DrawLine3D_Queue_r(NJS_POINT3COL *a1, int a2, NJD_DRAW a3, QueuedModelFlagsB a4)
{
	njDrawLine3D(a1, a2, a3);
}

void __cdecl DrawModel_Queue_r(NJS_MODEL_SADX *a1, QueuedModelFlagsB a2)
{
	DrawModel(a1);
}

void __cdecl njDrawSprite3D_Queue_r(NJS_SPRITE *sp, Int n, NJD_SPRITE attr, QueuedModelFlagsB zfunc_type)
{
	njDrawSprite3D_DrawNow(sp, n, attr);
}

void __cdecl njDrawSprite2D_Queue_r(NJS_SPRITE *sp, Int n, Float pri, NJD_SPRITE attr, QueuedModelFlagsB queue_flags)
{
	njDrawSprite2D_DrawNow(sp, n, pri, attr);
}

void __cdecl DrawRect_Queue_r(float left, float top, float right, float bottom, float depth, int color, QueuedModelFlagsB queueflags)
{
	DrawRect_DrawNowMaybe(left, top, right, bottom, depth, color);
}

void OIT_Init()
{
	WriteJump(DrawLine3D_Queue, DrawLine3D_Queue_r);
	WriteJump(Draw3DLinesMaybe_Queue, Draw3DLines_Queue_r);
	WriteJump(Draw2DLinesMaybe_Queue, Draw2DLines_Queue_r);
	WriteJump(DrawTriFanThing_Queue, DrawTriFanThing_Queue_r);
	WriteJump(njDrawSprite2D_Queue, njDrawSprite2D_Queue_r);
	WriteJump(njDrawSprite3D, njDrawSprite3D_Queue_r);
	WriteJump(DrawModelCallback_Queue, DrawModelCallback_Queue_r);
	WriteJump(DrawModel_Queue, DrawModel_Queue_r);
	WriteJump(DrawRect_Queue, DrawRect_Queue_r);
	WriteJump((void*)0x407BB0, DrawModel_Queue_r);
	WriteJump((void*)0x407CF0, DrawModel_Queue_r);
	WriteJump((void*)0x407FC0, DrawModel_Queue_r);
}