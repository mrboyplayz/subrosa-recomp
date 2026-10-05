/* Address: 0x140188900 | Name: sub_140188900 | Size: 634 bytes */
__int64 __fastcall sub_140188900(int *a1, float *a2, float *a3, int a4)
{
  float *v4; // rbp
  float v5; // xmm0_4
  int *v6; // r13
  int v7; // ebx
  float v9; // xmm1_4
  char v10; // r15
  int v11; // r12d
  int v12; // edx
  float v13; // xmm0_4
  int v14; // ecx
  unsigned __int64 v15; // r15
  __int64 v16; // r8
  __int64 v17; // rsi
  __int64 v18; // r13
  unsigned __int64 v19; // r11
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r10
  __int64 v23; // rsi
  __int64 v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v28; // [rsp+0h] [rbp-188h] BYREF
  int v29; // [rsp+30h] [rbp-158h]
  int v30; // [rsp+34h] [rbp-154h]
  float *v31; // [rsp+38h] [rbp-150h]
  int *v32; // [rsp+40h] [rbp-148h]
  _DWORD v33[64]; // [rsp+50h] [rbp-138h]
  __int64 v34; // [rsp+150h] [rbp-38h]

  v4 = a2;
  v5 = *a2;
  v6 = a1;
  v7 = 0;
  v9 = a2[2];
  v10 = a4;
  v31 = a2;
  v11 = (int)(float)(v5 * 0.015625);
  v32 = a1;
  v30 = a4;
  v12 = (int)(float)(*a3 * 0.015625);
  v13 = a3[2] * 0.015625;
  v29 = v12;
  v14 = (int)(float)(v9 * 0.015625);
  if ( v14 <= (int)v13 )
  {
    v15 = v14;
    v16 = 0;
    v17 = (__int64)v14 << 6;
    v18 = (unsigned int)((int)v13 - v14 + 1);
    do
    {
      if ( v15 <= 0x3F && v11 <= v12 )
      {
        v19 = v11;
        v20 = (unsigned int)(v12 - v11 + 1);
        do
        {
          if ( v19 <= 0x3F )
          {
            v21 = 0;
            v22 = (int)dword_140404A6C[9 * v17 + 254352099 + 9 * v19];
            if ( v22 > 0 )
            {
              do
              {
                if ( v16 < 64 )
                {
                  ++v7;
                  v33[v16++] = dword_140404A6C[8 * v17 + 254352100 + 8 * v19 + v17 + v19 + v21];
                }
                ++v21;
              }
              while ( v21 < v22 );
            }
          }
          ++v19;
          --v20;
        }
        while ( v20 );
        v12 = v29;
      }
      ++v15;
      v17 += 64;
      --v18;
    }
    while ( v18 );
    v4 = v31;
    v10 = v30;
    v6 = v32;
  }
  v23 = v7;
  if ( v7 > 0 )
  {
    v24 = 0;
    do
    {
      v25 = (int)v33[v24];
      v26 = 15432 * v25;
      if ( *(float *)&dword_140404A6C[15432 * v25 + 358312926] <= *a3
        && *(float *)&dword_140404A6C[v26 + 358312927] <= a3[1]
        && *(float *)&dword_140404A6C[v26 + 358312928] <= a3[2]
        && *(float *)&dword_140404A6C[v26 + 358312929] >= *v4
        && *(float *)&dword_140404A6C[v26 + 358312930] >= v4[1]
        && *(float *)&dword_140404A6C[v26 + 358312931] >= v4[2] )
      {
        if ( (v10 & 1) != 0 )
          sub_140188720(v6, v4, a3, v25, 0);
        if ( (v10 & 2) != 0 )
          sub_140188720(v6, v4, a3, v25, 1);
        if ( (v10 & 4) != 0 )
          sub_140188720(v6, v4, a3, v25, 2);
      }
      ++v24;
    }
    while ( v24 < v23 );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v28 ^ v34);
}

