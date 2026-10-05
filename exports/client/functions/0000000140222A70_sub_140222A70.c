/* Address: 0x140222a70 | Name: sub_140222A70 | Size: 280 bytes */
char __fastcall sub_140222A70(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // di
  int v4; // eax
  bool v5; // zf
  _WORD *v6; // rcx
  int v7; // edx
  int v8; // eax
  int v9; // r8d
  unsigned __int16 v10; // r9
  __int64 v11; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  _WORD *v15; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    v3 = 0;
    v15 = nullptr;
    v4 = sub_14023CDD4(v2, &v15, 10);
    v5 = *(_DWORD *)(a1 + 1144) == 1;
    v6 = v15;
    v7 = v4 - 1;
    *(_QWORD *)(a1 + 24) = v15 + 1;
    if ( !v5 )
    {
      *(_DWORD *)(a1 + 56) = **(_DWORD **)(a1 + 24LL * v7 + 1168);
      return 1;
    }
    if ( v7 < 0 || *v6 != 36 || v7 >= 100 )
    {
      *errno() = 22;
      sub_14024CF6C(v14);
      return 0;
    }
    v8 = v4 - 1;
    v9 = *(_DWORD *)(a1 + 60);
    v10 = *(_WORD *)(a1 + 66);
    if ( v7 <= *(_DWORD *)(a1 + 3560) )
      v8 = *(_DWORD *)(a1 + 3560);
    *(_DWORD *)(a1 + 3560) = v8;
    v11 = a1 + 8 * (v7 + 2LL * v7 + 145);
    if ( *(_DWORD *)v11 )
    {
      if ( !sub_140214EC4((_QWORD *)a1, v11, 1, v10, v9) )
      {
        *errno() = 22;
        sub_14024CF6C(v13);
        return v3;
      }
    }
    else
    {
      *(_DWORD *)v11 = 1;
      *(_WORD *)(v11 + 4) = v10;
      *(_DWORD *)(v11 + 16) = v9;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

