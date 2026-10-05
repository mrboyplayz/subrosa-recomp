/* Address: 0x1402230ac | Name: unknown_libname_569 | Size: 276 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char __fastcall unknown_libname_569(__int64 a1)
{
  __int16 *v2; // rcx
  __int16 v3; // ax
  int v4; // edx
  int v6; // eax
  bool v7; // zf
  _WORD *v8; // rcx
  int v9; // edx
  __int64 v10; // rcx
  _WORD *v11; // [rsp+30h] [rbp+8h] BYREF
  _WORD *v12; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_DWORD *)(a1 + 44) != 1 )
    return 1;
  v2 = *(__int16 **)(a1 + 24);
  v3 = *v2;
  if ( *v2 == 37 )
    return 1;
  v4 = *(_DWORD *)(a1 + 1148);
  if ( v4 )
  {
LABEL_13:
    if ( v4 == 2 )
      goto LABEL_14;
    return 1;
  }
  v11 = nullptr;
  if ( (unsigned __int16)(v3 - 48) > 9u )
  {
    *(_DWORD *)(a1 + 1148) = 1;
    v4 = 1;
    goto LABEL_13;
  }
  if ( (int)sub_14023CDD4(v2, &v11, 10) <= 0 || *v11 != 36 )
  {
    *(_DWORD *)(a1 + 1148) = 1;
    return 1;
  }
  if ( *(_DWORD *)(a1 + 1144) == 1 )
    MEMORY[0x1401FCD30]((_WORD *)(a1 + 1160), 0, 0x960u);
  v2 = *(__int16 **)(a1 + 24);
  *(_DWORD *)(a1 + 1148) = 2;
LABEL_14:
  v12 = nullptr;
  v6 = sub_14023CDD4(v2, &v12, 10);
  v7 = *(_DWORD *)(a1 + 1144) == 1;
  v8 = v12;
  v9 = v6 - 1;
  *(_DWORD *)(a1 + 3564) = v6 - 1;
  *(_QWORD *)(a1 + 24) = v8 + 1;
  if ( !v7 )
    return 1;
  if ( v9 >= 0 && *v8 == 36 && v9 < 100 )
  {
    if ( v9 <= *(_DWORD *)(a1 + 3560) )
      v9 = *(_DWORD *)(a1 + 3560);
    *(_DWORD *)(a1 + 3560) = v9;
    return 1;
  }
  *errno() = 22;
  sub_14024CF6C(v10);
  return 0;
}

