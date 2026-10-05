/* Address: 0x14002fa00 | Name: sub_14002FA00 | Size: 2956 bytes */
__int64 sub_14002FA00()
{
  __int64 v0; // rcx
  __int64 v1; // rdi
  unsigned int v2; // xmm1_4
  unsigned int v3; // xmm2_4
  unsigned int v4; // xmm5_4
  unsigned int v5; // xmm6_4
  __int128 v6; // xmm0
  unsigned int v7; // xmm1_4
  __int64 v8; // rbx
  __int128 v9; // xmm1
  __int128 *v10; // rdx
  float v11; // xmm2_4
  float v12; // xmm3_4
  float v13; // xmm15_4
  float v14; // xmm4_4
  float v15; // xmm5_4
  float v16; // xmm10_4
  float v17; // xmm7_4
  float v18; // xmm0_4
  float v19; // xmm8_4
  float v20; // xmm5_4
  float v21; // xmm8_4
  float v22; // xmm6_4
  float v23; // xmm1_4
  float v24; // xmm10_4
  float v25; // xmm6_4
  float v26; // xmm0_4
  float v27; // xmm4_4
  float v28; // xmm8_4
  float v29; // xmm3_4
  float v30; // xmm4_4
  float v31; // xmm7_4
  float v32; // xmm6_4
  float v33; // xmm8_4
  double v34; // xmm0_8
  float v35; // xmm1_4
  float v36; // xmm6_4
  float v37; // xmm7_4
  float v38; // xmm8_4
  float v39; // xmm2_4
  float v40; // xmm1_4
  float v41; // xmm10_4
  float v42; // xmm10_4
  float v43; // xmm15_4
  float v44; // xmm4_4
  float v45; // xmm5_4
  float v46; // xmm13_4
  float v47; // xmm4_4
  float v48; // xmm13_4
  float v49; // xmm5_4
  float v50; // xmm6_4
  float v51; // xmm8_4
  float v52; // xmm7_4
  float v53; // xmm3_4
  float v54; // xmm4_4
  float v55; // xmm6_4
  float v56; // xmm8_4
  float v57; // xmm7_4
  double v58; // xmm0_8
  float v59; // xmm1_4
  float v60; // xmm6_4
  float v61; // xmm8_4
  float v62; // xmm7_4
  float v63; // xmm3_4
  __int64 v65; // [rsp+8h] [rbp-100h] BYREF
  float v66; // [rsp+28h] [rbp-E0h] BYREF
  float v67; // [rsp+2Ch] [rbp-DCh]
  _QWORD v68[3]; // [rsp+30h] [rbp-D8h] BYREF
  float v69; // [rsp+50h] [rbp-B8h] BYREF
  float v70; // [rsp+54h] [rbp-B4h]
  float v71; // [rsp+58h] [rbp-B0h]
  __int128 v72; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v73; // [rsp+70h] [rbp-98h]
  unsigned int v74; // [rsp+80h] [rbp-88h]
  __int64 v75; // [rsp+88h] [rbp-80h]

  if ( dword_140404A6C[284024501] == -1 )
  {
    dword_140404A6C[284024519] = -1;
  }
  else
  {
    v0 = 3597LL * (int)dword_140404A6C[284024501];
    v1 = (int)dword_140404A6C[v0 + 71856292];
    if ( (_DWORD)v1 == -1 )
    {
      dword_140404A6C[284024519] = -1;
    }
    else
    {
      if ( (_DWORD)v1 == dword_140404A6C[284024519] )
      {
        v5 = dword_140404A6C[284024528];
        v4 = dword_140404A6C[284024527];
        v3 = dword_140404A6C[284024526];
      }
      else
      {
        *(_QWORD *)&dword_140404A6C[284024535] = 0;
        dword_140404A6C[284024537] = 0;
        *(_QWORD *)&dword_140404A6C[284024523] = 0;
        dword_140404A6C[284024525] = 0;
        v2 = dword_140404A6C[344 * v1 + 284956408];
        v3 = dword_140404A6C[344 * v1 + 284956410];
        v4 = dword_140404A6C[344 * v1 + 284956411];
        v5 = dword_140404A6C[344 * v1 + 284956412];
        dword_140404A6C[284024520] = dword_140404A6C[344 * v1 + 284956407];
        dword_140404A6C[284024522] = dword_140404A6C[344 * v1 + 284956409];
        v6 = *(_OWORD *)&dword_140404A6C[344 * v1 + 284956413];
        dword_140404A6C[284024521] = v2;
        v7 = dword_140404A6C[344 * v1 + 284956417];
        *(_OWORD *)&dword_140404A6C[284024529] = v6;
        dword_140404A6C[284024534] = dword_140404A6C[344 * v1 + 284956418];
        dword_140404A6C[284024526] = v3;
        dword_140404A6C[284024527] = v4;
        dword_140404A6C[284024528] = v5;
        dword_140404A6C[284024533] = v7;
      }
      v8 = 344 * v1;
      v9 = *(_OWORD *)&dword_140404A6C[344 * v1 + 284956414];
      v72 = *(_OWORD *)&dword_140404A6C[344 * v1 + 284956410];
      v74 = dword_140404A6C[344 * v1 + 284956418];
      v73 = v9;
      if ( fsqrt(
             (float)((float)(*(float *)&v3 * *(float *)&v3) + (float)(*(float *)&v4 * *(float *)&v4))
           + (float)(*(float *)&v5 * *(float *)&v5)) < 0.5 )
      {
        v72 = xmmword_140278D30;
        v74 = 1065353216;
        dword_140404A6C[284024534] = 1065353216;
        v73 = xmmword_140278D30;
        *(_OWORD *)&dword_140404A6C[284024526] = xmmword_140278D30;
        *(_OWORD *)&dword_140404A6C[284024530] = xmmword_140278D30;
      }
      v10 = (__int128 *)((char *)&v72 + 12);
      if ( dword_140404A6C[7166 * v1 + 280651313] != -1 )
      {
        sub_14007B2A0(&v72, (char *)&v72 + 12);
        sub_14007B2A0(&v72, &v72);
        sub_14007B2A0(&v72, (char *)&v72 + 12);
        v10 = &v72;
      }
      sub_14007B2A0(&v72, v10);
      v11 = *(float *)&dword_140404A6C[v8 + 284956408];
      v12 = *(float *)&dword_140404A6C[v8 + 284956409];
      *(float *)&dword_140404A6C[284024520] = *(float *)&dword_140404A6C[284024520]
                                            + (float)((float)(*(float *)&dword_140404A6C[v8 + 284956407]
                                                            - *(float *)&dword_140404A6C[284024520])
                                                    * 0.5);
      *(float *)&dword_140404A6C[284024521] = *(float *)&dword_140404A6C[284024521]
                                            + (float)((float)(v11 - *(float *)&dword_140404A6C[284024521]) * 0.5);
      *(float *)&dword_140404A6C[284024522] = *(float *)&dword_140404A6C[284024522]
                                            + (float)((float)(v12 - *(float *)&dword_140404A6C[284024522]) * 0.5);
      sub_14010E370(&v66, &v72);
      sub_14010E370(&v68[1], &dword_140404A6C[284024526]);
      v13 = *((float *)&v68[2] + 1);
      v14 = *(float *)&v68[2];
      v15 = *(float *)&v68[1];
      v16 = *((float *)&v68[1] + 1);
      if ( (float)((float)((float)(*((float *)v68 + 1) * *((float *)&v68[2] + 1))
                         + (float)(*(float *)v68 * *(float *)&v68[2]))
                 + (float)((float)(v66 * *(float *)&v68[1]) + (float)(v67 * *((float *)&v68[1] + 1)))) < 0.0 )
      {
        *(__m128 *)&v68[1] = _mm_xor_ps(*(__m128 *)&v68[1], (__m128)xmmword_140279870);
        v14 = *(float *)&v68[2];
        v16 = *((float *)&v68[1] + 1);
        v15 = *(float *)&v68[1];
        v13 = _mm_shuffle_ps(*(__m128 *)&v68[1], *(__m128 *)&v68[1], 255).m128_f32[0];
      }
      *(float *)&v68[2] = -v14;
      *(float *)&v68[1] = -v15;
      *((float *)&v68[1] + 1) = -v16;
      v17 = (float)((float)((float)(*((float *)v68 + 1) * (float)-v15) + (float)(v13 * v66))
                  + (float)(*(float *)v68 * (float)-v16))
          - (float)(v67 * (float)-v14);
      v18 = (float)-v15 * *(float *)v68;
      v19 = -v15;
      v20 = (float)-v15 * v66;
      v21 = v19 * v67;
      v22 = (float)((float)(v13 * v67) - v18) + (float)((float)-v16 * *((float *)v68 + 1));
      v23 = (float)-v16 * v66;
      v24 = (float)-v16 * v67;
      v25 = v22 + (float)((float)-v14 * v66);
      v66 = v17;
      v67 = v25;
      v26 = -v14;
      v27 = (float)-v14 * *(float *)v68;
      v28 = (float)((float)(v21 + (float)(v13 * *(float *)v68)) - v23) + (float)(v26 * *((float *)v68 + 1));
      *(float *)v68 = v28;
      v29 = (float)((float)((float)(*((float *)v68 + 1) * v13) - v20) - v24) - v27;
      *((float *)v68 + 1) = v29;
      v30 = fsqrt((float)((float)(v17 * v17) + (float)(v25 * v25)) + (float)(v28 * v28));
      if ( v30 == 0.0 )
      {
        v31 = 0.0;
        v32 = 0.0;
        v33 = 0.0;
      }
      else
      {
        v31 = v17 * (float)(1.0 / v30);
        v32 = v25 * (float)(1.0 / v30);
        v33 = v28 * (float)(1.0 / v30);
      }
      v34 = acos(fminf(fmaxf(v29, -1.0), 1.0));
      v35 = v34 + v34;
      v36 = (float)((float)(v32 * v35) * 0.125) + *(float *)&dword_140404A6C[284024536];
      v37 = (float)((float)(v31 * v35) * 0.125) + *(float *)&dword_140404A6C[284024535];
      v38 = (float)((float)(v33 * v35) * 0.125) + *(float *)&dword_140404A6C[284024537];
      *(float *)&dword_140404A6C[284024535] = v37 * 0.5;
      *(float *)&dword_140404A6C[284024536] = v36 * 0.5;
      *(float *)&dword_140404A6C[284024537] = v38 * 0.5;
      v39 = fsqrt((float)((float)((float)(v36 * v36) + (float)(v37 * v37)) + (float)(v38 * v38)) * 0.25);
      if ( v39 > 0.000015258789 )
      {
        v69 = (float)(v37 * 0.5) * (float)(1.0 / v39);
        v70 = (float)(v36 * 0.5) * (float)(1.0 / v39);
        v71 = (float)(v38 * 0.5) * (float)(1.0 / v39);
        sub_14007B2A0(&dword_140404A6C[284024526], &v69);
      }
      if ( dword_140404A6C[7166 * v1 + 280651313] == -1 )
      {
        v40 = *(float *)&dword_140404A6C[v8 + 284956343];
        if ( v40 > 0.0 )
        {
          if ( *(float *)&dword_140404A6C[284024530] <= 0.0 )
            v41 = 0.0;
          else
            v41 = fabs(
                    (float)(*(float *)&dword_140404A6C[284024530] * *(float *)&dword_140404A6C[284024530])
                  * *(float *)&dword_140404A6C[284024530]);
          v42 = v41 * v40;
          v72 = xmmword_140278D30;
          v73 = xmmword_140278D30;
          v74 = 1065353216;
          sub_14007B2A0(&v72, (char *)&v72 + 12);
          sub_14007B2A0(&v72, &v72);
          sub_14007B2A0(&v72, (char *)&v72 + 12);
          sub_14007B2A0(&v72, &v72);
          sub_14010E370(&v66, &v72);
          sub_14010E370(&v68[1], &dword_140404A6C[284024526]);
          v43 = *((float *)&v68[2] + 1);
          v44 = *(float *)&v68[2];
          v45 = *(float *)&v68[1];
          v46 = *((float *)&v68[1] + 1);
          if ( (float)((float)((float)(*((float *)v68 + 1) * *((float *)&v68[2] + 1))
                             + (float)(*(float *)v68 * *(float *)&v68[2]))
                     + (float)((float)(v66 * *(float *)&v68[1]) + (float)(v67 * *((float *)&v68[1] + 1)))) < 0.0 )
          {
            *(__m128 *)&v68[1] = _mm_xor_ps(*(__m128 *)&v68[1], (__m128)xmmword_140279870);
            v44 = *(float *)&v68[2];
            v46 = *((float *)&v68[1] + 1);
            v45 = *(float *)&v68[1];
            v43 = _mm_shuffle_ps(*(__m128 *)&v68[1], *(__m128 *)&v68[1], 255).m128_f32[0];
          }
          v47 = -v44;
          v48 = -v46;
          v49 = -v45;
          v50 = (float)((float)((float)(*((float *)v68 + 1) * v49) + (float)(v43 * v66)) + (float)(*(float *)v68 * v48))
              - (float)(v67 * v47);
          v51 = (float)((float)((float)(v43 * v67) - (float)(*(float *)v68 * v49)) + (float)(*((float *)v68 + 1) * v48))
              + (float)(v66 * v47);
          v52 = (float)((float)((float)(v67 * v49) + (float)(v43 * *(float *)v68)) - (float)(v66 * v48))
              + (float)(*((float *)v68 + 1) * v47);
          v53 = (float)((float)((float)(*((float *)v68 + 1) * v43) - (float)(v66 * v49)) - (float)(v67 * v48))
              - (float)(*(float *)v68 * v47);
          v54 = fsqrt((float)((float)(v51 * v51) + (float)(v50 * v50)) + (float)(v52 * v52));
          if ( v54 == 0.0 )
          {
            v55 = 0.0;
            v56 = 0.0;
            v57 = 0.0;
          }
          else
          {
            v55 = v50 * (float)(1.0 / v54);
            v56 = v51 * (float)(1.0 / v54);
            v57 = v52 * (float)(1.0 / v54);
          }
          v58 = acos(fminf(fmaxf(v53, -1.0), 1.0));
          v59 = v58 + v58;
          v60 = (float)(v55 * v59) * (float)(v42 * 0.5);
          v61 = (float)(v56 * v59) * (float)(v42 * 0.5);
          v62 = (float)(v57 * v59) * (float)(v42 * 0.5);
          v63 = fsqrt((float)((float)(v61 * v61) + (float)(v60 * v60)) + (float)(v62 * v62));
          if ( v63 > 0.000015258789 )
          {
            v70 = (float)(1.0 / v63) * v61;
            v69 = v60 * (float)(1.0 / v63);
            v71 = v62 * (float)(1.0 / v63);
            sub_14007B2A0(&dword_140404A6C[284024526], &v69);
          }
        }
      }
      dword_140404A6C[284024519] = v1;
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v65 ^ v75);
}

