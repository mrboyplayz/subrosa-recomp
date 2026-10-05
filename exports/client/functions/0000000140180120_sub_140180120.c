/* Address: 0x140180120 | Name: sub_140180120 | Size: 223 bytes */
__int64 __fastcall sub_140180120(__int64 a1, float a2, float a3)
{
  __int64 result; // rax
  __int64 v4; // r10
  bool v5; // zf
  float v6; // xmm3_4
  float v7; // xmm2_4
  int v8; // edx
  int v9; // r8d
  __int64 v10; // rcx

  result = sub_14017FF00();
  v5 = *(_DWORD *)v4 == 0;
  v6 = a2 + *(float *)(v4 + 16);
  v7 = a3 + *(float *)(v4 + 20);
  *(float *)(v4 + 16) = v6;
  *(float *)(v4 + 8) = v6;
  *(float *)(v4 + 20) = v7;
  *(float *)(v4 + 12) = v7;
  v8 = (int)v7;
  v9 = (int)v6;
  if ( v5 )
  {
    v10 = *(_QWORD *)(v4 + 40) + 14LL * *(int *)(v4 + 48);
    *(_WORD *)(v10 + 2) = v8;
    *(_DWORD *)(v10 + 4) = 0;
    *(_BYTE *)(v10 + 12) = 1;
    *(_WORD *)v10 = v9;
    *(_WORD *)(14LL * *(int *)(v4 + 48) + *(_QWORD *)(v4 + 40) + 8) = 0;
    result = *(_QWORD *)(v4 + 40);
    *(_WORD *)(14LL * (int)(*(_DWORD *)(v4 + 48))++ + result + 10) = 0;
  }
  else
  {
    if ( v9 > *(_DWORD *)(v4 + 28) || !*(_DWORD *)(v4 + 4) )
      *(_DWORD *)(v4 + 28) = v9;
    if ( v8 > *(_DWORD *)(v4 + 36) || !*(_DWORD *)(v4 + 4) )
      *(_DWORD *)(v4 + 36) = v8;
    if ( v9 < *(_DWORD *)(v4 + 24) || !*(_DWORD *)(v4 + 4) )
      *(_DWORD *)(v4 + 24) = v9;
    if ( v8 < *(_DWORD *)(v4 + 32) || !*(_DWORD *)(v4 + 4) )
      *(_DWORD *)(v4 + 32) = v8;
    ++*(_DWORD *)(v4 + 48);
    *(_DWORD *)(v4 + 4) = 1;
  }
  return result;
}

