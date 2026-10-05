/* Address: 0x1401069c0 | Name: sub_1401069C0 | Size: 1551 bytes */
__int64 sub_1401069C0()
{
  __int64 result; // rax
  unsigned int *v1; // r9
  unsigned int *v2; // r13
  __int64 v3; // rdx
  __int64 v4; // r8
  float v5; // xmm9_4
  float v6; // xmm7_4
  float v7; // xmm10_4
  float v8; // xmm5_4
  float v9; // xmm11_4
  float v10; // xmm4_4
  float v11; // xmm12_4
  float v12; // xmm8_4
  float v13; // xmm6_4
  float v14; // xmm13_4
  float v15; // xmm14_4
  float v16; // xmm15_4
  unsigned int v17; // eax
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm7_4
  float v21; // xmm4_4
  __int64 v22; // rdx
  __int64 v23; // rcx
  float v24; // xmm13_4
  float *v25; // rax
  float v26; // xmm12_4
  float v27; // xmm11_4
  float v28; // xmm10_4
  float v29; // xmm8_4
  float v30; // xmm9_4
  float v31; // xmm5_4
  float v32; // xmm1_4
  float v33; // xmm6_4
  float v34; // xmm0_4
  float v35; // xmm1_4
  int v36; // eax
  float v37; // xmm0_4
  int v38; // eax
  float v39; // xmm1_4
  signed int v40; // r14d
  signed int i; // ebp
  signed int j; // edi
  unsigned int v43; // esi
  signed int v44; // ebx
  __int64 v45; // r15
  int v46; // r12d
  __int64 v47; // rcx
  _UNKNOWN *retaddr; // [rsp+F8h] [rbp+0h] BYREF
  unsigned int *v49; // [rsp+100h] [rbp+8h]

  result = (__int64)&retaddr;
  v1 = &dword_140404A6C[129716753];
  v2 = &dword_140404A6C[129716739];
  v49 = &dword_140404A6C[129716753];
  do
  {
    if ( *(v2 - 30) )
    {
      v3 = (int)*(v2 - 29);
      *(v2 - 16) = *(v2 - 19);
      *(v2 - 15) = *(v2 - 18);
      *(v2 - 14) = *(v2 - 17);
      *(v2 - 4) = *(v2 - 13);
      *(v2 - 3) = *(v2 - 12);
      *(v2 - 2) = *(v2 - 11);
      *(v2 - 1) = *(v2 - 10);
      *v2 = *(v2 - 9);
      v2[1] = *(v2 - 8);
      v2[2] = *(v2 - 7);
      v2[3] = *(v2 - 6);
      v2[4] = *(v2 - 5);
      v4 = 47LL * (int)*(v2 - 20);
      v3 *= 99776;
      v5 = *(float *)&dword_140404A6C[v4 + 18215727];
      v6 = *(float *)&dword_140404A6C[v4 + 18215730];
      v7 = *(float *)&dword_140404A6C[v4 + 18215728];
      v8 = *(float *)&dword_140404A6C[v4 + 18215731];
      v9 = *(float *)&dword_140404A6C[v4 + 18215729];
      v10 = *(float *)&dword_140404A6C[v4 + 18215732];
      v11 = *(float *)((char *)&dword_140404A6C[346732626] + v3);
      v12 = *(float *)((char *)&dword_140404A6C[346732627] + v3);
      v13 = *(float *)((char *)&dword_140404A6C[346732628] + v3);
      v14 = *(float *)&dword_140404A6C[v4 + 18215724];
      v15 = *(float *)&dword_140404A6C[v4 + 18215725];
      v16 = *(float *)&dword_140404A6C[v4 + 18215726];
      v17 = dword_140404A6C[v4 + 18215718];
      v18 = (float)((float)(v15 * v11) + *(float *)&dword_140404A6C[v4 + 18215716]) + (float)(v7 * v12);
      *((float *)v2 - 19) = (float)((float)((float)(v14 * v11) + *(float *)&dword_140404A6C[v4 + 18215715])
                                  + (float)(v5 * v12))
                          + (float)(v6 * v13);
      v19 = (float)(v16 * v11) + *(float *)&dword_140404A6C[v4 + 18215717];
      *((float *)v2 - 18) = v18 + (float)(v8 * v13);
      *((float *)v2 - 17) = (float)(v19 + (float)(v9 * v12)) + (float)(v10 * v13);
      *((float *)v2 - 13) = v14;
      *((float *)v2 - 12) = v15;
      *((float *)v2 - 11) = v16;
      *((float *)v2 - 10) = v5;
      *((float *)v2 - 9) = v7;
      *((float *)v2 - 8) = v9;
      *((float *)v2 - 7) = v6;
      *((float *)v2 - 6) = v8;
      *((float *)v2 - 5) = v10;
      v20 = 65536.0;
      v2[5] = v17;
      v21 = -65536.0;
      v2[6] = dword_140404A6C[v4 + 18215719];
      v2[7] = dword_140404A6C[v4 + 18215720];
      v2[11] = dword_140404A6C[v4 + 18215736];
      v2[12] = dword_140404A6C[v4 + 18215737];
      v2[13] = dword_140404A6C[v4 + 18215738];
      *v1 = 1199570944;
      v1[3] = -947912704;
      v1[1] = 1199570944;
      v1[4] = -947912704;
      v1[2] = 1199570944;
      v1[5] = -947912704;
      v22 = 45072LL * (int)*(v2 - 29);
      v23 = (int)dword_140404A6C[v22 + 335170684];
      if ( v23 > 0 )
      {
        v24 = 65536.0;
        v25 = (float *)&dword_140404A6C[v22 + 335170686];
        v26 = -65536.0;
        v27 = 65536.0;
        v28 = -65536.0;
        v29 = 65536.0;
        v30 = -65536.0;
        do
        {
          v31 = (float)((float)((float)(*(v25 - 1) * *((float *)v2 - 13)) + *((float *)v2 - 19))
                      + (float)(*v25 * *((float *)v2 - 10)))
              + (float)(v25[1] * *((float *)v2 - 7));
          v32 = v25[1];
          v20 = v31;
          v21 = (float)((float)((float)(*(v25 - 1) * *((float *)v2 - 11)) + *((float *)v2 - 17))
                      + (float)(*v25 * *((float *)v2 - 8)))
              + (float)(v32 * *((float *)v2 - 5));
          v33 = (float)((float)((float)(*(v25 - 1) * *((float *)v2 - 12)) + *((float *)v2 - 18))
                      + (float)(*v25 * *((float *)v2 - 9)))
              + (float)(v32 * *((float *)v2 - 6));
          if ( v24 <= v31 )
          {
            v20 = *(float *)v1;
          }
          else
          {
            *(float *)v1 = v31;
            v24 = v31;
          }
          if ( v26 < v31 )
          {
            *((float *)v1 + 3) = v31;
            v26 = v31;
          }
          if ( v27 > v33 )
          {
            *((float *)v1 + 1) = v33;
            v27 = v33;
          }
          if ( v28 < v33 )
          {
            *((float *)v1 + 4) = v33;
            v28 = v33;
          }
          if ( v29 > v21 )
          {
            *((float *)v1 + 2) = v21;
            v29 = v21;
          }
          if ( v30 >= v21 )
          {
            v21 = *((float *)v1 + 5);
          }
          else
          {
            *((float *)v1 + 5) = v21;
            v30 = v21;
          }
          v25 += 3;
          --v23;
        }
        while ( v23 );
      }
      v34 = *((float *)v1 + 3) * 0.25;
      v35 = *((float *)v1 + 1) * 0.25;
      v1[6] = (int)(float)(v20 * 0.25);
      v36 = (int)v34;
      v37 = *((float *)v1 + 4);
      v1[9] = v36;
      v38 = (int)v35;
      v39 = *((float *)v1 + 2);
      v1[7] = v38;
      v1[10] = (int)(float)(v37 * 0.25);
      v1[8] = (int)(float)(v39 * 0.25);
      result = (unsigned int)(int)(float)(v21 * 0.25);
      v1[11] = result;
      v40 = v2[21];
      if ( v40 <= (int)v2[24] )
      {
        do
        {
          for ( i = v2[22]; i <= (int)v2[25]; ++i )
          {
            for ( j = v2[20]; j <= (int)v2[23]; ++j )
            {
              result = sub_140016870(0, j, v40, i);
              v43 = result;
              if ( (_DWORD)result )
              {
                result = sub_1400169B0(0, j, v40, i);
                v44 = 0;
                v45 = 948LL * (v43 & 0x3FF);
                v46 = result;
                if ( (int)dword_140404A6C[v45 + 272299416] > 0 )
                {
                  do
                  {
                    if ( !_bittest(&v46, v44) )
                    {
                      result = sub_1400CDBD0(v43, v44, 0, j, v40, i);
                      if ( (_DWORD)result != -1 )
                      {
                        result = (int)result;
                        v47 = 1760LL * (int)result;
                        dword_140404A6C[v47 + 278845895] = 1;
                        dword_140404A6C[v47 + 278845894] = 1;
                      }
                    }
                    ++v44;
                  }
                  while ( v44 < (int)dword_140404A6C[v45 + 272299416] );
                }
              }
            }
          }
          ++v40;
        }
        while ( v40 <= (int)v2[24] );
        v1 = v49;
      }
    }
    v1 += 5210;
    v2 += 5210;
    v49 = v1;
  }
  while ( (__int64)v2 < (__int64)&dword_140404A6C[132384259] );
  return result;
}

