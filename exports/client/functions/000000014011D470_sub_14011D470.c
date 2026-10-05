/* Address: 0x14011d470 | Name: sub_14011D470 | Size: 1499 bytes */
__int64 sub_14011D470()
{
  float v0; // xmm2_4
  unsigned int v1; // edx
  int v2; // ecx
  unsigned int v3; // r8d
  __int64 result; // rax
  float v5; // xmm9_4
  int v6; // ecx
  float v7; // xmm10_4
  float v8; // xmm9_4
  float v9; // xmm10_4
  int v10; // r9d
  int v11; // r10d
  float v12; // xmm5_4
  float v13; // xmm1_4
  float v14; // xmm7_4
  float v15; // xmm6_4
  float v16; // xmm5_4
  float v17; // xmm7_4
  int v18; // ebx
  int v19; // r13d
  int v20; // edi
  int v21; // ebp
  float v22; // xmm4_4
  int v23; // ecx
  int v24; // eax
  int v25; // r9d
  int v26; // ebx
  int v27; // esi
  int v28; // edi
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r15
  __int64 v34; // r14
  unsigned int v35; // edx
  unsigned int v36; // edx
  int v37; // [rsp+20h] [rbp-108h]
  int v38; // [rsp+24h] [rbp-104h]
  int v39; // [rsp+28h] [rbp-100h]
  int v40; // [rsp+2Ch] [rbp-FCh]
  int v41; // [rsp+30h] [rbp-F8h]
  int v42; // [rsp+34h] [rbp-F4h]
  int v43; // [rsp+130h] [rbp+8h]
  int v44; // [rsp+138h] [rbp+10h]
  int v45; // [rsp+140h] [rbp+18h]
  int v46; // [rsp+148h] [rbp+20h]

  v0 = *(float *)&dword_140404A6C[111579654];
  v1 = dword_140404A6C[111579652];
  v2 = 0;
  v3 = dword_140404A6C[111579650];
  v39 = 0;
  do
  {
    LODWORD(result) = 0;
    v38 = 0;
    v5 = (float)v2;
    v6 = (int)(float)((float)(v0 * *(float *)&dword_140404A6C[284024502]) * 256.0);
    v40 = v6;
    v7 = v5 - 30.0;
    v8 = v7 * v7;
    v9 = v7 * 0.010416667;
    v10 = (int)(float)((float)(v0 * *(float *)&dword_140404A6C[284024503]) * 256.0);
    v11 = (int)(float)((float)(v0 * *(float *)&dword_140404A6C[284024504]) * 256.0);
    v41 = v10;
    v42 = v11;
    do
    {
      v12 = (float)(int)result - 48.0;
      v13 = fsqrt((float)((float)((float)(v12 * v12) + v8) * 0.00010850695) + 0.25);
      if ( v13 == 0.0 )
      {
        v14 = 0.0;
        v16 = 0.0;
        v15 = 0.0;
      }
      else
      {
        v14 = v9 * (float)(1.0 / v13);
        v15 = (float)(1.0 / v13) * -0.34999999;
        v16 = (float)(v12 * (float)(1.0 / v13)) * 0.0072916667;
      }
      v17 = v14 * 0.69999999;
      v18 = v10;
      v19 = v6;
      v20 = v11;
      v46 = v10;
      v21 = 0;
      v37 = v11;
      v22 = (float)(result & 7) + 248.0;
      v44 = (int)(float)((float)((float)((float)(v17 * *(float *)&dword_140404A6C[284024509])
                                       + (float)(*(float *)&dword_140404A6C[284024506] * v16))
                               + (float)(v15 * *(float *)&dword_140404A6C[284024512]))
                       * v22);
      v23 = v44;
      v43 = (int)(float)((float)((float)((float)(v17 * *(float *)&dword_140404A6C[284024508])
                                       + (float)(*(float *)&dword_140404A6C[284024505] * v16))
                               + (float)(v15 * *(float *)&dword_140404A6C[284024511]))
                       * v22);
      v45 = (int)(float)((float)((float)((float)(v17 * *(float *)&dword_140404A6C[284024510])
                                       + (float)(*(float *)&dword_140404A6C[284024507] * v16))
                               + (float)(*(float *)&dword_140404A6C[284024513] * v15))
                       * v22);
      v24 = v43;
      v25 = v45;
      do
      {
        v26 = v18 >> 8;
        v27 = v19 >> 8;
        v28 = v20 >> 8;
        if ( v19 >> 8 < 0 )
          goto LABEL_32;
        if ( v27 < (int)(v3 << 6)
          && v26 >= 0
          && v26 < (signed int)(dword_140404A6C[111579651] << 6)
          && v28 >= 0
          && v28 < (int)(v1 << 6) )
        {
          v29 = *(int *)(*(_QWORD *)&dword_140404A6C[111579655]
                       + 4LL * (int)(v3 * ((v28 >> 6) + v1 * (v26 >> 6)) + (v19 >> 14)));
          if ( (_DWORD)v29 != -1 )
          {
            v30 = 513 * v29 + ((v19 >> 11) & 7) + 8 * (((v28 >> 3) & 7) + 8 * ((v26 >> 3) & 7u));
            v31 = (int)dword_140404A6C[v30 + 111579985];
            if ( (_DWORD)v31 != -1 )
            {
              v32 = (int)dword_140404A6C[v30 + 111579985];
              v33 = 6930 * v32;
              dword_140404A6C[6930 * v31 + 83201282] = 1;
              if ( v21 >= 16 )
              {
                dword_140404A6C[6930 * v32 + 83201283] = 1;
                dword_140404A6C[6930 * v32 + 83201284] = 1;
                dword_140404A6C[6930 * v32 + 83201285] = 1;
                dword_140404A6C[6930 * v32 + 83201286] = 1;
              }
              else
              {
                dword_140404A6C[v33 + 83201283 + (((__int64)(unsigned int)v26 >> 1) & 3)] = 1;
                if ( v21 < 2 )
                {
                  sub_14011C510(0, v27, v26 + 1, v28);
                  sub_14011C510(0, v27, v26 + 2, v28);
                  sub_14011C510(0, v27, v26 + 3, v28);
                  goto LABEL_19;
                }
                if ( v21 < 4 )
                {
LABEL_19:
                  sub_14011C510(0, v27 - 8, v26, v28);
                  sub_14011C510(0, v27 + 8, v26, v28);
                  sub_14011C510(0, v27, v26, v28 - 8);
                  sub_14011C510(0, v27, v26, v28 + 8);
                }
              }
              v34 = v33 + (BYTE1(v19) & 7) + 8 * ((v28 & 7) + 8 * (v26 & 7u));
              v35 = dword_140404A6C[v34 + 83194359];
              if ( (v35 & 0xE0000000) == 0xC0000000 )
                sub_14011C510(0, v27 - (unsigned __int8)v35, v26 - BYTE2(v35), v28 - BYTE1(v35));
              v36 = dword_140404A6C[v34 + 83197431];
              if ( v36 )
              {
                if ( (v36 & 0xE0000000) == 0xC0000000 )
                  sub_14011C510(0, v27 - (unsigned __int8)v36, v26 - BYTE2(v36), v28 - BYTE1(v36));
              }
              else if ( (dword_140404A6C[v34 + 83194359] & 0xE0000000) == 0x40000000 )
              {
                break;
              }
              v25 = v45;
            }
            v1 = dword_140404A6C[111579652];
          }
          v23 = v44;
          v3 = dword_140404A6C[111579650];
        }
        v24 = v43;
LABEL_32:
        v19 += v24;
        v18 = v23 + v46;
        v20 = v25 + v37;
        v46 += v23;
        ++v21;
        v37 += v25;
      }
      while ( v21 < 48 );
      v1 = dword_140404A6C[111579652];
      result = (unsigned int)(v38 + 1);
      v3 = dword_140404A6C[111579650];
      v6 = v40;
      v10 = v41;
      v11 = v42;
      v38 = result;
    }
    while ( (int)result < 96 );
    v0 = *(float *)&dword_140404A6C[111579654];
    v2 = v39 + 1;
    v39 = v2;
  }
  while ( v2 < 60 );
  return result;
}

