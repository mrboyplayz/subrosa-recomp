/* Address: 0x140234538 | Name: sub_140234538 | Size: 76 bytes */
char __fastcall sub_140234538(__int64 a1)
{
  unsigned __int16 v2; // ax
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rdx

  v2 = j__fgetwc_nolock(*(_QWORD *)(a1 + 8));
  if ( v2 == 0xFFFF )
    return 0;
  v4 = *(_QWORD *)(a1 + 16) + 1LL;
  *(_QWORD *)(a1 + 16) = v4;
  if ( v2 != *(_WORD *)(a1 + 48) )
  {
    v5 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 16) = v4 - 1;
    ungetwc_nolock(v2, v5, v3);
    return 0;
  }
  return 1;
}

