/* Address: 0x14026d1de | Name: sub_14026D1DE | Size: 37 bytes */
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64 __fastcall sub_14026D1DE(struct _EXCEPTION_POINTERS *a1, __int64 a2)
{
  *(_QWORD *)(a2 + 88) = a1;
  return sub_14020A20C(a1, *(struct EHExceptionRecord **)(a2 + 184), (int *)(a2 + 32));
}

