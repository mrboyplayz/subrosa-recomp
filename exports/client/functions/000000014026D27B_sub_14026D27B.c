/* Address: 0x14026d27b | Name: sub_14026D27B | Size: 47 bytes */
__int64 __fastcall sub_14026D27B(struct _EXCEPTION_POINTERS *a1, __int64 a2)
{
  *(_QWORD *)(a2 + 128) = a1;
  return sub_14020A294(a1, *(struct EHExceptionRecord **)(a2 + 248), *(_DWORD *)(a2 + 232), (int *)(a2 + 32));
}

