/* Address: 0x140179a00 | Name: sub_140179A00 | Size: 203 bytes */
__int64 __fastcall sub_140179A00(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v4; // r14
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 8);
  result = sub_140180D50(v4, *(unsigned int *)(a1 + 16), "OS/2");
  if ( (_DWORD)result )
  {
    if ( a2 )
      *a2 = (__int16)((*(unsigned __int8 *)(v4 + (int)result + 68) << 8) + *(unsigned __int8 *)(v4 + (int)result + 69));
    if ( a3 )
      *a3 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + (int)result + 70LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + (int)result + 71LL));
    if ( a4 )
      *a4 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + (int)result + 72LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + (int)result + 73LL));
    return 1;
  }
  return result;
}

