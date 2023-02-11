#pragma once
//this file contains the offsets necessary for the dll

//offsets are relative to the base(efte.exe), well not yet

/*
DWORD a_TriggerList = 0x96FCFC;//+4=start, +8=end, size = (end-start)/4, OR size = (end-start)>>2
DWORD a_ViewMatrix = 0x9AD4B0;//view matrix, this one breaks in some areas, need to investigate more
DWORD a_func_EnumTriggers = 0x1CF730;//function (int a1, int a2, int a_TriggerList), enumerates triggers
*/

DWORD a_view_matrix = 0x609AD4B0;
DWORD a_hook_loop_top = 0x601CF730;//top of func a3 should be the thing we need
DWORD a_VM_FIX_PATCH = 0x605D1900;//dirty fix:need to patch this to "mov ax, 4" in order to fix the matrix