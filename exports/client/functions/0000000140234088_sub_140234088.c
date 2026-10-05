/* Address: 0x140234088 | Name: sub_140234088 | Size: 110 bytes */
char __fastcall sub_140234088(_QWORD *a1)
{
  int v2; // ecx
  __int64 v3; // rax
  __int64 v4; // rax

  v2 = sub_14022E18C((__int64)(a1 + 1), a1[15]);
  v3 = a1[3];
  if ( v3 != a1[1] && (v3 != a1[2] || v2 != -1) )
    a1[3] = v3 - 1;
  v4 = unknown_libname_649(a1 + 4);
  if ( v4 == 4 )
    return sub_14022CDC0((__int64)a1);
  if ( v4 == 8 )
    return sub_14022D044((__int64)a1);
  return 0;
}

