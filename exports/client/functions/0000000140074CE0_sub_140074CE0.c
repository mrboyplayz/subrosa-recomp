/* Address: 0x140074ce0 | Name: sub_140074CE0 | Size: 198 bytes */
double __fastcall sub_140074CE0(int a1, int a2)
{
  int v2; // r8d
  double v3; // xmm1_8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 i; // rdx
  __int64 v7; // rax
  float v8; // xmm2_4

  v2 = 0;
  v3 = 0.0;
  if ( a2 <= 0 )
    return 0.0;
  v4 = 122LL * a1;
  v5 = a2;
  for ( i = 0; i < v5; ++i )
  {
    v7 = *((unsigned __int8 *)&dword_140404A6C[70318069] + i);
    if ( !(_BYTE)v7 || v2 >= (int)dword_140404A6C[70318068] )
      break;
    v8 = dword_140404A6C[v4 + 70087124]
       ? *(float *)&dword_140404A6C[3592 * dword_140404A6C[122 * a1 + 70087123] + 72777135]
       : *(float *)&dword_140404A6C[3592 * (int)dword_140404A6C[122 * a1 + 70087123] + 72777093 + v7];
    ++v2;
    *(float *)&v3 = *(float *)&v3 + (float)(*(float *)&dword_140404A6C[v4 + 70087133] * v8);
  }
  return v3;
}

