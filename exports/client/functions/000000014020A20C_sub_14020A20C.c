/* Address: 0x14020a20c | Name: sub_14020A20C | Size: 135 bytes */
__int64 __fastcall sub_14020A20C(struct _EXCEPTION_POINTERS *a1, struct EHExceptionRecord *a2, int *a3)
{
  __int64 v3; // r9

  v3 = *(_QWORD *)a1;
  *a3 = 0;
  if ( *(_DWORD *)v3 != -529697949 )
    return 0;
  if ( *(_DWORD *)(v3 + 24) != 4 )
    return 0;
  if ( (unsigned int)(*(_DWORD *)(v3 + 32) - 429065504) <= 2 && *(_QWORD *)(v3 + 40) == *((_QWORD *)a2 + 5) )
  {
    *a3 = 1;
    if ( *(_DWORD *)v3 != -529697949 )
      return 0;
  }
  if ( *(_DWORD *)(v3 + 24) != 4 || (unsigned int)(*(_DWORD *)(v3 + 32) - 429065504) > 2 || *(_QWORD *)(v3 + 48) )
    return 0;
  *(_DWORD *)(sub_1401FD83C() + 64) = 1;
  *a3 = 1;
  return 1;
}

