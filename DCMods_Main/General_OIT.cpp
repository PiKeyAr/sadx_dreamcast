#include "stdafx.h"

FunctionPointer(void, Draw3DLines, (NJS_POINT3COL *points, int count, NJD_DRAW attr), 0x77EBA0);

void __cdecl DrawModelCallback_Queue_r(void(__cdecl *function)(void *), void *data, float depth, QueuedModelFlagsB queueflags)
{
	function(data);
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
	float _depth;
	float new_depth;
	_depth = depth;
	if (depth >= -2.0f && depth < 10000.0f)
	{
		_depth = depth + 12048.0f;
	}
	new_depth = Calculate2DDepth(flags, _depth);
	njDrawTriangle2D_SomeOtherVersion(points, count, _depth, attr);
}

void __cdecl DrawLine3D_Queue_r(NJS_POINT3COL *a1, int a2, NJD_DRAW a3, QueuedModelFlagsB a4)
{
	njDrawLine3D(a1, a2, a3);
}

void __cdecl lateDrawModel_r(NJS_MODEL_SADX *a1, QueuedModelFlagsB a2)
{
	DrawModel(a1);
}

void __cdecl njDrawSprite3D_Queue_r(NJS_SPRITE *sp, Int n, NJD_SPRITE attr, QueuedModelFlagsB zfunc_type)
{
	njDrawSprite3D_DrawNow(sp, n, attr);
}

void __cdecl njDrawSprite2D_Queue_r(NJS_SPRITE *sp, Int n, Float pri, NJD_SPRITE attr, QueuedModelFlagsB queue_flags)
{
	float pria = pri;
	if ( pri >= -2.0f && pri < 10000.0f )
	{
		pria = pri + 12048.0f;
	}
	float v8 = Calculate2DDepth(queue_flags, pria);
	njDrawSprite2D_DrawNow(sp, n, v8, attr);
}

void __cdecl DrawRect_Queue_r(float left, float top, float right, float bottom, float depth, int color, QueuedModelFlagsB queueflags)
{
	float _depth = depth;
	if ( depth >= -2.0f && depth < 10000.0f )
	{
		_depth = depth + 12048.0f;
	}
	float new_depth = Calculate2DDepth(queueflags, _depth);
	DrawRect_DrawNowMaybe(left, top, right, bottom, depth, color);
}

void OIT_Init()
{
	WriteJump(DrawLine3D_Queue, DrawLine3D_Queue_r);
	WriteJump(Draw3DLinesMaybe_Queue, Draw3DLines_Queue_r);
	WriteJump(DrawTriFanThing_Queue, DrawTriFanThing_Queue_r);
	WriteJump(njDrawSprite3D, njDrawSprite3D_Queue_r);
	WriteJump(lateDrawModel, lateDrawModel_r);
	WriteJump((void*)0x407BB0, lateDrawModel_r);
	WriteJump((void*)0x407CF0, lateDrawModel_r);
	WriteJump((void*)0x407FC0, lateDrawModel_r);
	// Callback stuff is disabled because it breaks
	//WriteJump(DrawModelCallback_Queue, DrawModelCallback_Queue_r);
	// 2D stuff that breaks in scary ways
	//WriteJump(Draw2DLinesMaybe_Queue, Draw2DLines_Queue_r);
	//WriteJump(njDrawSprite2D_Queue, njDrawSprite2D_Queue_r);
	//WriteJump(DrawRect_Queue, DrawRect_Queue_r);
}