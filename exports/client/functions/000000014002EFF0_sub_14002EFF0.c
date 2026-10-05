/* Address: 0x14002eff0 | Name: sub_14002EFF0 | Size: 2570 bytes */
__int64 __fastcall sub_14002EFF0(int a1)
{
  signed int v1; // edi
  unsigned int v2; // eax
  __int64 v3; // rsi
  unsigned int v4; // xmm1_4
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int64 v7; // rbx
  __int128 v8; // xmm1
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm3_4
  float v12; // xmm4_4
  float v13; // xmm5_4
  float v14; // xmm0_4
  float v15; // xmm10_4
  float v16; // xmm6_4
  float v17; // xmm8_4
  double v18; // xmm0_8
  float v19; // xmm1_4
  float v20; // xmm3_4
  float v21; // xmm5_4
  float v22; // xmm6_4
  float v23; // xmm2_4
  float v24; // xmm3_4
  float v25; // xmm4_4
  float v26; // xmm5_4
  float v27; // xmm0_4
  float v28; // xmm7_4
  float v29; // xmm10_4
  float v30; // xmm6_4
  double v31; // xmm0_8
  float v32; // xmm1_4
  float v33; // xmm7_4
  float v34; // xmm4_4
  float v35; // xmm3_4
  float v36; // xmm2_4
  float v37; // xmm7_4
  __int64 v39; // [rsp+0h] [rbp-100h] BYREF
  float v40; // [rsp+20h] [rbp-E0h] BYREF
  float v41; // [rsp+24h] [rbp-DCh]
  float v42; // [rsp+28h] [rbp-D8h]
  float v43; // [rsp+2Ch] [rbp-D4h]
  float v44; // [rsp+30h] [rbp-D0h] BYREF
  float v45; // [rsp+34h] [rbp-CCh]
  float v46; // [rsp+38h] [rbp-C8h]
  float v47; // [rsp+40h] [rbp-C0h] BYREF
  float v48; // [rsp+44h] [rbp-BCh]
  float v49; // [rsp+48h] [rbp-B8h]
  _BYTE v50[40]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v51; // [rsp+80h] [rbp-80h] BYREF
  __int128 v52; // [rsp+90h] [rbp-70h]
  unsigned int v53; // [rsp+A0h] [rbp-60h]
  __int64 v54; // [rsp+A8h] [rbp-58h]

  v1 = -1;
  if ( dword_140404A6C[284024501] != -1 )
    v1 = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856292];
  if ( a1 > 0 )
  {
    v2 = dword_140404A6C[284024519];
    v3 = (unsigned int)a1;
    do
    {
      if ( v1 != -1 )
      {
        if ( v1 != v2 )
        {
          *(_QWORD *)&dword_140404A6C[284024535] = 0;
          dword_140404A6C[284024537] = 0;
          *(_QWORD *)&dword_140404A6C[284024523] = 0;
          dword_140404A6C[284024525] = 0;
          v4 = dword_140404A6C[7166 * v1 + 280651675];
          dword_140404A6C[284024520] = dword_140404A6C[7166 * v1 + 280651674];
          dword_140404A6C[284024522] = dword_140404A6C[7166 * v1 + 280651676];
          v5 = *(_OWORD *)&dword_140404A6C[7166 * v1 + 280651686];
          dword_140404A6C[284024521] = v4;
          v6 = *(_OWORD *)&dword_140404A6C[7166 * v1 + 280651690];
          *(_OWORD *)&dword_140404A6C[284024526] = v5;
          dword_140404A6C[284024534] = dword_140404A6C[7166 * v1 + 280651694];
          *(_OWORD *)&dword_140404A6C[284024530] = v6;
        }
        v7 = 7166LL * v1;
        v8 = *(_OWORD *)&dword_140404A6C[v7 + 280651690];
        v51 = *(_OWORD *)&dword_140404A6C[v7 + 280651686];
        v53 = dword_140404A6C[v7 + 280651694];
        v52 = v8;
        if ( fsqrt(
               (float)((float)(*(float *)&dword_140404A6C[284024527] * *(float *)&dword_140404A6C[284024527])
                     + (float)(*(float *)&dword_140404A6C[284024526] * *(float *)&dword_140404A6C[284024526]))
             + (float)(*(float *)&dword_140404A6C[284024528] * *(float *)&dword_140404A6C[284024528])) < 0.5 )
        {
          v51 = xmmword_140278D30;
          v53 = 1065353216;
          dword_140404A6C[284024534] = 1065353216;
          v52 = xmmword_140278D30;
          *(_OWORD *)&dword_140404A6C[284024526] = xmmword_140278D30;
          *(_OWORD *)&dword_140404A6C[284024530] = xmmword_140278D30;
        }
        sub_14007B2A0(&v51, (char *)&v51 + 12);
        v9 = *(float *)&dword_140404A6C[v7 + 280651675];
        v10 = *(float *)&dword_140404A6C[v7 + 280651676];
        *(float *)&dword_140404A6C[284024520] = *(float *)&dword_140404A6C[284024520]
                                              + (float)((float)(*(float *)&dword_140404A6C[v7 + 280651674]
                                                              - *(float *)&dword_140404A6C[284024520])
                                                      * 0.5);
        *(float *)&dword_140404A6C[284024521] = *(float *)&dword_140404A6C[284024521]
                                              + (float)((float)(v9 - *(float *)&dword_140404A6C[284024521]) * 0.5);
        *(float *)&dword_140404A6C[284024522] = *(float *)&dword_140404A6C[284024522]
                                              + (float)((float)(v10 - *(float *)&dword_140404A6C[284024522]) * 0.5);
        sub_14011C080(v50, &v51, &dword_140404A6C[284024526]);
        sub_14010E370(&v40, v50);
        v11 = -v40;
        v12 = -v41;
        v13 = -v42;
        v40 = v11;
        v41 = v12;
        v42 = v13;
        v14 = fsqrt((float)((float)(v11 * v11) + (float)(v12 * v12)) + (float)(v13 * v13));
        if ( v14 == 0.0 )
        {
          v15 = 0.0;
          v16 = 0.0;
          v17 = 0.0;
        }
        else
        {
          v15 = (float)(1.0 / v14) * v11;
          v16 = (float)(1.0 / v14) * v12;
          v17 = (float)(1.0 / v14) * v13;
        }
        v18 = acos(fminf(fmaxf(v43, -1.0), 1.0));
        v19 = v18 + v18;
        v45 = v16 * v19;
        v44 = v15 * v19;
        v46 = v17 * v19;
        v47 = (float)((float)((float)(v16 * v19) * *(float *)&dword_140404A6C[284024529])
                    + (float)((float)(v15 * v19) * *(float *)&dword_140404A6C[284024526]))
            + (float)((float)(v17 * v19) * *(float *)&dword_140404A6C[284024532]);
        v48 = (float)((float)((float)(v16 * v19) * *(float *)&dword_140404A6C[284024530])
                    + (float)((float)(v15 * v19) * *(float *)&dword_140404A6C[284024527]))
            + (float)((float)(v17 * v19) * *(float *)&dword_140404A6C[284024533]);
        v20 = (float)(v47 * 0.125) + *(float *)&dword_140404A6C[284024535];
        v49 = (float)((float)((float)(v16 * v19) * *(float *)&dword_140404A6C[284024531])
                    + (float)((float)(v15 * v19) * *(float *)&dword_140404A6C[284024528]))
            + (float)((float)(v17 * v19) * *(float *)&dword_140404A6C[284024534]);
        v21 = (float)(v48 * 0.125) + *(float *)&dword_140404A6C[284024536];
        v22 = (float)(v49 * 0.125) + *(float *)&dword_140404A6C[284024537];
        *(float *)&dword_140404A6C[284024535] = v20 * 0.5;
        *(float *)&dword_140404A6C[284024536] = v21 * 0.5;
        *(float *)&dword_140404A6C[284024537] = v22 * 0.5;
        v23 = fsqrt((float)((float)((float)(v21 * v21) + (float)(v20 * v20)) + (float)(v22 * v22)) * 0.25);
        if ( v23 > 0.000015258789 )
        {
          v45 = (float)((float)(1.0 / v23) * v21) * 0.5;
          v44 = (float)(v20 * (float)(1.0 / v23)) * 0.5;
          v46 = (float)(v22 * (float)(1.0 / v23)) * 0.5;
          sub_14007B2A0(&dword_140404A6C[284024526], &v44);
        }
        if ( dword_140404A6C[v7 + 280651313] == -1 && dword_140404A6C[v7 + 280651334] )
        {
          v51 = xmmword_140278D30;
          v52 = xmmword_140278D30;
          v53 = 1065353216;
          sub_14007B2A0(&v51, (char *)&v51 + 12);
          sub_14007B2A0(&v51, &v51);
          sub_14007B2A0(&v51, (char *)&v51 + 12);
          sub_14007B2A0(&v51, &v51);
          sub_14011C080(v50, &v51, &dword_140404A6C[284024526]);
          sub_14010E370(&v40, v50);
          v24 = -v40;
          v25 = -v41;
          v26 = -v42;
          v40 = v24;
          v41 = v25;
          v42 = v26;
          v27 = fsqrt((float)((float)(v24 * v24) + (float)(v25 * v25)) + (float)(v26 * v26));
          if ( v27 == 0.0 )
          {
            v28 = 0.0;
            v29 = 0.0;
            v30 = 0.0;
          }
          else
          {
            v28 = (float)(1.0 / v27) * v24;
            v29 = (float)(1.0 / v27) * v25;
            v30 = (float)(1.0 / v27) * v26;
          }
          v31 = acos(fminf(fmaxf(v43, -1.0), 1.0));
          v32 = v31 + v31;
          v33 = v28 * v32;
          v46 = v30 * v32;
          v45 = v29 * v32;
          v34 = (float)((float)(*(float *)&dword_140404A6C[284024529] * (float)(v29 * v32))
                      + (float)(*(float *)&dword_140404A6C[284024526] * v33))
              + (float)(*(float *)&dword_140404A6C[284024532] * (float)(v30 * v32));
          v44 = v33;
          v35 = (float)((float)(*(float *)&dword_140404A6C[284024530] * (float)(v29 * v32))
                      + (float)(*(float *)&dword_140404A6C[284024527] * v33))
              + (float)(*(float *)&dword_140404A6C[284024533] * (float)(v30 * v32));
          v36 = (float)((float)(*(float *)&dword_140404A6C[284024531] * (float)(v29 * v32))
                      + (float)(*(float *)&dword_140404A6C[284024528] * v33))
              + (float)(*(float *)&dword_140404A6C[284024534] * (float)(v30 * v32));
          v47 = v34 * 0.5;
          v48 = v35 * 0.5;
          v49 = v36 * 0.5;
          v37 = fsqrt((float)((float)((float)(v35 * v35) + (float)(v34 * v34)) + (float)(v36 * v36)) * 0.25);
          if ( v37 > 0.000015258789 )
          {
            v49 = (float)(1.0 / v37) * (float)(v36 * 0.5);
            v48 = (float)(1.0 / v37) * (float)(v35 * 0.5);
            v47 = (float)(1.0 / v37) * (float)(v34 * 0.5);
            sub_14007B2A0(&dword_140404A6C[284024526], &v47);
          }
        }
      }
      ++dword_140404A6C[283831476];
      v2 = v1;
      dword_140404A6C[284024519] = v1;
      --v3;
    }
    while ( v3 );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v39 ^ v54);
}

