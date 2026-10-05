/* Address: 0x140180060 | Name: sub_140180060 | Size: 185 bytes */
__int64 __fastcall sub_140180060(__int64 a1, float a2, float a3)
{
  bool v3; // zf
  float v5; // xmm1_4
  float v6; // xmm2_4
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rcx
  __int64 result; // rax

  v3 = *(_DWORD *)a1 == 0;
  v5 = a2 + *(float *)(a1 + 16);
  v6 = a3 + *(float *)(a1 + 20);
  *(float *)(a1 + 16) = v5;
  *(float *)(a1 + 20) = v6;
  v7 = (int)v6;
  v8 = (int)v5;
  if ( v3 )
  {
    v9 = *(_QWORD *)(a1 + 40) + 14LL * *(int *)(a1 + 48);
    *(_WORD *)(v9 + 2) = v7;
    *(_DWORD *)(v9 + 4) = 0;
    *(_BYTE *)(v9 + 12) = 2;
    *(_WORD *)v9 = v8;
    *(_WORD *)(14LL * *(int *)(a1 + 48) + *(_QWORD *)(a1 + 40) + 8) = 0;
    result = *(_QWORD *)(a1 + 40);
    *(_WORD *)(14LL * (int)(*(_DWORD *)(a1 + 48))++ + result + 10) = 0;
  }
  else
  {
    if ( v8 > *(_DWORD *)(a1 + 28) || !*(_DWORD *)(a1 + 4) )
      *(_DWORD *)(a1 + 28) = v8;
    if ( v7 > *(_DWORD *)(a1 + 36) || !*(_DWORD *)(a1 + 4) )
      *(_DWORD *)(a1 + 36) = v7;
    if ( v8 < *(_DWORD *)(a1 + 24) || !*(_DWORD *)(a1 + 4) )
      *(_DWORD *)(a1 + 24) = v8;
    if ( v7 < *(_DWORD *)(a1 + 32) || !*(_DWORD *)(a1 + 4) )
      *(_DWORD *)(a1 + 32) = v7;
    ++*(_DWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 4) = 1;
  }
  return result;
}

