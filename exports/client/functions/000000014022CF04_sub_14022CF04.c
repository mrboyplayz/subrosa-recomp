/* Address: 0x14022cf04 | Name: sub_14022CF04 | Size: 157 bytes */
char __fastcall sub_14022CF04(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // bl
  int v4; // eax
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF
  char v9; // [rsp+50h] [rbp+8h] BYREF
  int v10; // [rsp+58h] [rbp+10h] BYREF

  v9 = 1;
  v8[0] = a1 + 8;
  v8[1] = *(_QWORD *)(a1 + 64);
  v2 = *(_QWORD *)(a1 + 96);
  v8[3] = &v9;
  v3 = 0;
  v10 = 0;
  v8[2] = 0;
  v4 = unknown_libname_606(v2, (__int64)v8, (__int64)&v10);
  if ( !v9 || v4 == 1 )
    return 0;
  if ( *(_BYTE *)(a1 + 60) )
    return 1;
  *(_QWORD *)(a1 + 104) += 8LL;
  v6 = *(_DWORD **)(*(_QWORD *)(a1 + 104) - 8LL);
  if ( v6 )
  {
    v3 = 1;
    *v6 = v10;
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C(v7);
  }
  return v3;
}

