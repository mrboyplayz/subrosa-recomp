/* Address: 0x140234164 | Name: sub_140234164 | Size: 117 bytes */
char __fastcall sub_140234164(_QWORD *a1)
{
  __int16 v2; // cx
  __int64 v3; // rax
  __int64 v4; // rax

  v2 = sub_14022E1E0((__int64)(a1 + 1));
  v3 = a1[3];
  if ( v3 != a1[1] && (v3 != a1[2] || v2 != -1) )
    a1[3] = v3 - 2;
  v4 = unknown_libname_650(a1 + 4);
  if ( v4 == 4 )
    return sub_14022CF04((__int64)a1);
  if ( v4 == 8 )
    return sub_14022D18C((__int64)a1);
  return 0;
}

