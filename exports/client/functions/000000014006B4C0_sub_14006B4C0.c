/* Address: 0x14006b4c0 | Name: sub_14006B4C0 | Size: 546 bytes */
__int64 __fastcall sub_14006B4C0(int a1, int a2, int a3, int a4)
{
  __int64 v5; // r9
  __int64 v7; // r11
  __int64 v8; // rax
  __int64 v9; // rdi
  float v10; // xmm2_4
  float v11; // xmm4_4
  int v12; // ebx
  float v13; // xmm5_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  float i; // xmm5_4
  float v17; // xmm1_4
  int v18; // edx
  int v19; // r10d
  __int64 v20; // r9
  float v21; // xmm1_4
  int v22; // eax
  float v23; // xmm0_4
  float v24; // xmm1_4

  v5 = 278720LL * a1;
  v7 = v5 * 4 + 36LL * a2;
  v8 = *(int *)((char *)&dword_140404A6C[327702] + v7);
  if ( (unsigned int)v8 > 0xFFF )
    return 0;
  v9 = 8 * v8;
  if ( !*(_QWORD *)&dword_140404A6C[8 * v8 + 18165779] )
    return 0;
  v10 = *(float *)((char *)&dword_140404A6C[327705] + v7);
  if ( dword_140404A6C[v5 + 327698] == 1 )
    *(unsigned int *)((char *)&dword_140404A6C[327704] + v7) = 0;
  v11 = *(float *)((char *)&dword_140404A6C[327704] + v7);
  v12 = 0;
  v13 = *(float *)((char *)&dword_140404A6C[327706] + v7);
  v14 = *(float *)((char *)&dword_140404A6C[327707] + v7);
  *(float *)((char *)&dword_140404A6C[327705] + v7) = v11;
  *(float *)((char *)&dword_140404A6C[327707] + v7) = v13;
  v15 = (float)(v11 - v10) * (float)(1.0 / (float)a4);
  for ( i = (float)(v13 - v14) * (float)(1.0 / (float)a4); v12 < a4; v14 = v14 + i )
  {
    v17 = *(float *)((char *)&dword_140404A6C[327703] + v7);
    v18 = 0;
    v19 = dword_140404A6C[v9 + 18165778];
    if ( (int)v17 < v19 )
      v18 = (int)v17;
    v20 = 278720LL * a1 + a3;
    v21 = v17 - (float)v18;
    v22 = 0;
    if ( v18 + 1 < v19 )
      v22 = v18 + 1;
    a3 = (a3 + 1) & 0x3FFFF;
    *(float *)&dword_140404A6C[v20 + 327773] = (float)((float)((float)((float)(1.0 - v21)
                                                                     * *(float *)(*(_QWORD *)&dword_140404A6C[v9 + 18165779]
                                                                                + 4LL * v18))
                                                             + (float)(v21
                                                                     * *(float *)(*(_QWORD *)&dword_140404A6C[v9 + 18165779]
                                                                                + 4LL * v22)))
                                                     * v10)
                                             + *(float *)&dword_140404A6C[v20 + 327773];
    v23 = v14 + *(float *)((char *)&dword_140404A6C[327703] + v7);
    *(float *)((char *)&dword_140404A6C[327703] + v7) = v23;
    v24 = (float)(int)dword_140404A6C[v9 + 18165778];
    if ( v23 >= v24 )
    {
      if ( !*(unsigned int *)((char *)&dword_140404A6C[327708] + v7) )
      {
        *(unsigned int *)((char *)&dword_140404A6C[327700] + v7) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[327701] + v7) = 2;
        break;
      }
      *(float *)((char *)&dword_140404A6C[327703] + v7) = v23 - v24;
    }
    ++v12;
    v10 = v10 + v15;
  }
  dword_140404A6C[v9 + 18165782] = (int)*(float *)((char *)&dword_140404A6C[327703] + v7);
  return *(unsigned int *)((char *)&dword_140404A6C[327700] + v7);
}

