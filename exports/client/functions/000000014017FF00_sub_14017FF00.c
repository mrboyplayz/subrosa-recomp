/* Address: 0x14017ff00 | Name: sub_14017FF00 | Size: 192 bytes */
__int64 __fastcall sub_14017FF00(__int64 a1)
{
  float v1; // xmm1_4
  int v3; // r8d
  int v4; // r9d
  __int64 v5; // rcx
  __int64 result; // rax

  v1 = *(float *)(a1 + 8);
  if ( v1 != *(float *)(a1 + 16) || *(float *)(a1 + 20) != *(float *)(a1 + 12) )
  {
    v3 = (int)*(float *)(a1 + 12);
    v4 = (int)v1;
    if ( *(_DWORD *)a1 )
    {
      if ( v4 > *(_DWORD *)(a1 + 28) || !*(_DWORD *)(a1 + 4) )
        *(_DWORD *)(a1 + 28) = v4;
      if ( v3 > *(_DWORD *)(a1 + 36) || !*(_DWORD *)(a1 + 4) )
        *(_DWORD *)(a1 + 36) = v3;
      if ( v4 < *(_DWORD *)(a1 + 24) || !*(_DWORD *)(a1 + 4) )
        *(_DWORD *)(a1 + 24) = v4;
      if ( v3 < *(_DWORD *)(a1 + 32) || !*(_DWORD *)(a1 + 4) )
        *(_DWORD *)(a1 + 32) = v3;
      ++*(_DWORD *)(a1 + 48);
      *(_DWORD *)(a1 + 4) = 1;
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 40) + 14LL * *(int *)(a1 + 48);
      *(_WORD *)(v5 + 2) = v3;
      *(_DWORD *)(v5 + 4) = 0;
      *(_BYTE *)(v5 + 12) = 2;
      *(_WORD *)v5 = v4;
      *(_WORD *)(14LL * *(int *)(a1 + 48) + *(_QWORD *)(a1 + 40) + 8) = 0;
      result = *(_QWORD *)(a1 + 40);
      *(_WORD *)(14LL * (int)(*(_DWORD *)(a1 + 48))++ + result + 10) = 0;
    }
  }
  return result;
}

