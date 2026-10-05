/* Address: 0x14020a294 | Name: sub_14020A294 | Size: 48 bytes */
__int64 __fastcall sub_14020A294(struct _EXCEPTION_POINTERS *a1, struct EHExceptionRecord *a2, int a3, int *a4)
{
  unsigned int v5; // ebx

  v5 = sub_14020A20C(a1, a2, a4);
  if ( !v5 )
    *(_DWORD *)(sub_1401FD83C() + 120) = a3;
  return v5;
}

