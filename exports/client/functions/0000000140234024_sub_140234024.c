/* Address: 0x140234024 | Name: sub_140234024 | Size: 100 bytes */
char __fastcall sub_140234024(__int64 *a1)
{
  int v2; // eax
  __int64 v3; // rax

  v2 = sub_14022E0F4((__int64)(a1 + 1), a1[14]);
  if ( v2 != -1 )
  {
    --a1[2];
    sub_14020CE90(v2, a1[1]);
  }
  v3 = unknown_libname_649(a1 + 3);
  if ( v3 == 4 )
    return sub_14022CD20((__int64)a1);
  if ( v3 == 8 )
    return sub_14022CFA4((__int64)a1);
  return 0;
}

