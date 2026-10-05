/* Address: 0x14000c180 | Name: sub_14000C180 | Size: 820 bytes */
__int64 __fastcall sub_14000C180(int a1, int a2, float *a3, float *a4)
{
  __int64 v6; // r10
  __int64 v7; // rdi
  float v8; // xmm2_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  __int64 result; // rax
  float v14; // xmm0_4
  int v15; // r13d
  float v16; // xmm1_4
  int v17; // ebp
  float v18; // xmm0_4
  float v19; // xmm1_4
  int v20; // r11d
  float v21; // xmm0_4
  int v22; // ecx
  int v23; // edx
  int v24; // esi
  int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r14
  unsigned int v29; // r9d
  unsigned int v30; // r9d
  int v31; // [rsp+30h] [rbp-68h] BYREF
  int v32; // [rsp+34h] [rbp-64h]
  int v33; // [rsp+38h] [rbp-60h]
  unsigned int v34; // [rsp+40h] [rbp-58h]
  int v35; // [rsp+44h] [rbp-54h]
  int v36; // [rsp+48h] [rbp-50h]
  int v37; // [rsp+4Ch] [rbp-4Ch]
  __int64 v38; // [rsp+50h] [rbp-48h]

  v6 = 263004LL * a2;
  v7 = 263004LL * a2;
  v8 = *(float *)&dword_140404A6C[v7 + 111579638];
  v9 = *a3 - v8;
  v10 = *a4 - v8;
  v11 = *(float *)&dword_140404A6C[v7 + 111579640];
  v38 = v6;
  v12 = *(float *)&dword_140404A6C[v7 + 111579654];
  result = (unsigned int)(int)(float)(v9 * v12);
  v14 = a3[1];
  v15 = (int)(float)(v10 * v12);
  v34 = result;
  v16 = *(float *)&dword_140404A6C[v7 + 111579639];
  v17 = (int)(float)((float)(v14 - v16) * v12);
  v18 = a4[1] - v16;
  v32 = v17;
  v19 = (float)(a4[2] - v11) * v12;
  v20 = (int)(float)(v18 * v12);
  v21 = a3[2];
  v37 = v20;
  v22 = (int)v19;
  v35 = (int)v19;
  v23 = (int)(float)((float)(v21 - v11) * v12);
  v36 = v23;
  if ( v17 <= v20 )
  {
    v32 = v17;
    do
    {
      v33 = v23;
      v24 = v23;
      if ( v23 <= v22 )
      {
        do
        {
          v31 = result;
          v25 = result;
          if ( (int)result <= v15 )
          {
            do
            {
              if ( v25 >= 0
                && v25 < (int)(dword_140404A6C[v7 + 111579650] << 6)
                && v17 >= 0
                && v17 < (int)(dword_140404A6C[v7 + 111579651] << 6)
                && v24 >= 0
                && v24 < (int)(dword_140404A6C[v7 + 111579652] << 6) )
              {
                v26 = *(int *)(*(_QWORD *)&dword_140404A6C[v7 + 111579655]
                             + 4LL
                             * (int)((v25 >> 6)
                                   + dword_140404A6C[v7 + 111579650]
                                   * ((v24 >> 6) + dword_140404A6C[v7 + 111579652] * (v17 >> 6))));
                if ( (_DWORD)v26 != -1 )
                {
                  v27 = (int)dword_140404A6C[513 * v26
                                           + 111579985
                                           + 64 * ((v17 >> 3) & 7u)
                                           + 8 * ((v24 >> 3) & 7)
                                           + v6
                                           + ((v25 >> 3) & 7)];
                  if ( (_DWORD)v27 != -1 )
                  {
                    v28 = 6930 * v27 + (v25 & 7) + 8 * ((v24 & 7) + 8 * (v17 & 7u));
                    v29 = dword_140404A6C[v28 + 83194359];
                    if ( (v29 & 0xE0000000) == 0x40000000 )
                    {
                      sub_1400174D0(a1, a2, (unsigned int)&v31, v29, dword_140404A6C[v7 + 111579653]);
                    }
                    else if ( (v29 & 0xE0000000) == 0x80000000 )
                    {
                      sub_140018CA0(a1, a2, (unsigned int)&v31, v29, dword_140404A6C[v7 + 111579653]);
                    }
                    v30 = dword_140404A6C[v28 + 83197431];
                    if ( (v30 & 0xE0000000) == 0x40000000 )
                    {
                      sub_1400174D0(a1, a2, (unsigned int)&v31, v30, dword_140404A6C[v7 + 111579653]);
                    }
                    else if ( (v30 & 0xE0000000) == 0x80000000 )
                    {
                      sub_140018CA0(a1, a2, (unsigned int)&v31, v30, dword_140404A6C[v7 + 111579653]);
                    }
                  }
                }
              }
              v6 = v38;
              v31 = ++v25;
            }
            while ( v25 <= v15 );
            result = v34;
            v22 = v35;
          }
          v33 = ++v24;
        }
        while ( v24 <= v22 );
        v23 = v36;
        v20 = v37;
      }
      v32 = ++v17;
    }
    while ( v17 <= v20 );
  }
  return result;
}

