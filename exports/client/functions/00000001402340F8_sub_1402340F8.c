/* Address: 0x1402340f8 | Name: sub_1402340F8 | Size: 106 bytes */
char __fastcall sub_1402340F8(__int64 a1)
{
  unsigned __int16 v2; // ax
  __int64 v3; // r8
  __int64 v4; // rax

  v2 = sub_14022E144((_QWORD *)(a1 + 8));
  if ( v2 != 0xFFFF )
  {
    --*(_QWORD *)(a1 + 16);
    ungetwc_nolock(v2, *(_QWORD *)(a1 + 8), v3);
  }
  v4 = unknown_libname_650(a1 + 24);
  if ( v4 == 4 )
    return sub_14022CE64(a1);
  if ( v4 == 8 )
    return sub_14022D0EC(a1);
  return 0;
}

