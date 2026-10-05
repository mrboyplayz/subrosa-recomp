/* Address: 0x1400a7860 | Name: sub_1400A7860 | Size: 2585 bytes */
void sub_1400A7860()
{
  __int64 v0; // rsi
  __int64 v1; // r12
  _DWORD *v2; // rcx
  int v3; // edx
  __int64 v4; // r8
  unsigned __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // r15
  float *v8; // r14
  float v9; // xmm15_4
  __int64 v10; // rcx
  float v11; // xmm3_4
  float v12; // xmm2_4
  __int64 v13; // rbx
  float v14; // xmm10_4
  float v15; // xmm13_4
  float v16; // xmm9_4
  float v17; // xmm0_4
  float v18; // xmm4_4
  float v19; // xmm7_4
  float v20; // xmm6_4
  float v21; // xmm8_4
  float v22; // xmm0_4
  float v23; // xmm8_4
  float v24; // xmm1_4
  float v25; // xmm14_4
  float v26; // xmm11_4
  float v27; // xmm12_4
  float v28; // xmm9_4
  float v29; // xmm10_4
  float v30; // xmm5_4
  float v31; // xmm9_4
  float v32; // xmm3_4
  float v33; // xmm7_4
  float v34; // xmm6_4
  float v35; // xmm15_4
  float v36; // xmm3_4
  float v37; // xmm7_4
  float v38; // xmm6_4
  float v39; // xmm0_4
  float v40; // xmm3_4
  float v41; // xmm5_4
  float v42; // xmm2_4
  float v43; // xmm3_4
  float v44; // xmm4_4
  float v45; // xmm5_4
  float v46; // xmm10_4
  float v47; // xmm12_4
  float v48; // xmm11_4
  float v49; // xmm2_4
  float v50; // xmm3_4
  float v51; // xmm4_4
  float v52; // xmm7_4
  float v53; // xmm8_4
  float v54; // xmm6_4
  float v55; // xmm1_4
  float v56; // xmm5_4
  float v57; // xmm0_4
  float v58; // xmm2_4
  float v59; // xmm10_4
  float v60; // [rsp+20h] [rbp-128h]
  float v61; // [rsp+28h] [rbp-120h]
  float v62; // [rsp+2Ch] [rbp-11Ch]
  float v63; // [rsp+30h] [rbp-118h] BYREF
  float v64; // [rsp+34h] [rbp-114h]
  float v65; // [rsp+38h] [rbp-110h]
  float v66; // [rsp+150h] [rbp+8h]
  float v67; // [rsp+150h] [rbp+8h]
  float v68; // [rsp+158h] [rbp+10h]
  float v69; // [rsp+158h] [rbp+10h]
  float v70; // [rsp+160h] [rbp+18h]
  float v71; // [rsp+160h] [rbp+18h]
  float v72; // [rsp+168h] [rbp+20h]

  v0 = 0;
  v1 = 512;
  do
  {
    if ( dword_16E6A3C60[v0] )
    {
      if ( dword_16E6A3C64[v0] != 12 && dword_16E6A75A0[v0] > 0 )
      {
        *(_DWORD *)((char *)&unk_16E6A74F4 + v0 * 4) = 0;
        v2 = (_DWORD *)((char *)&unk_16E6A7600 + v0 * 4);
        v3 = 0;
        do
        {
          *(v2 - 8) = 0;
          ++v3;
          *(v2 - 1) = v2[2];
          *v2 = v2[3];
          v2[1] = v2[4];
          v2 += 43;
          v4 = (unsigned int)dword_16E6A75A0[v0];
        }
        while ( v3 < (int)v4 );
        v5 = 0;
        if ( (int)v4 > 0 )
        {
          v6 = 47LL * dword_16E6A3C88[v0];
          v7 = (unsigned int)v4;
          v8 = (float *)((char *)&unk_140249648 + v6 * 4);
          do
          {
            v9 = v8[2];
            v68 = *(float *)&dword_140249614[v6];
            v70 = *(float *)((char *)&unk_140249670 + v6 * 4);
            v60 = v8[1];
            v10 = v0 * 4 + 172 * v5;
            v11 = *(float *)((char *)&unk_16E6A75D0 + v10);
            v12 = *(float *)((char *)&unk_16E6A7618 + v10) + *(float *)((char *)&unk_16E6A75CC + v10);
            v13 = 47LL * *(int *)((char *)&unk_16E6A75A4 + v10);
            v14 = *(float *)((char *)&unk_140249618 + v13 * 4);
            v15 = *(float *)&dword_140249614[v13];
            v16 = *(float *)((char *)&unk_140249620 + v13 * 4);
            v66 = *(float *)((char *)&unk_14024961C + v13 * 4);
            v17 = *(float *)((char *)&unk_16E6A75C8 + v10);
            v18 = *(float *)((char *)&unk_140249674 + v6 * 4);
            v19 = (float)((float)(*v8 * v12) + (float)(v17 * *(float *)((char *)&unk_14024963C + v6 * 4)))
                + (float)(v11 * *(float *)((char *)&unk_140249654 + v6 * 4));
            v20 = (float)((float)(v17 * *(float *)((char *)&unk_140249640 + v6 * 4)) + (float)(v60 * v12))
                + (float)(v11 * *(float *)((char *)&unk_140249658 + v6 * 4));
            v21 = (float)(v17 * *(float *)((char *)&unk_140249644 + v6 * 4)) + (float)(v9 * v12);
            v22 = *(float *)((char *)&unk_16E6A761C + v10);
            v23 = v21 + (float)(v11 * *(float *)((char *)&unk_14024965C + v6 * 4));
            v24 = *(float *)((char *)&unk_16E6A7620 + v10);
            v25 = (float)((float)(*(float *)((char *)&unk_140249618 + v6 * 4) + v19) - v14) * v22;
            v62 = v14 - *(float *)((char *)&unk_140249618 + v6 * 4);
            v26 = (float)((float)(*(float *)((char *)&unk_14024961C + v6 * 4) + v20) - v66) * v22;
            v27 = (float)((float)(*(float *)((char *)&unk_140249620 + v6 * 4) + v23) - v16) * v22;
            v61 = v16 - *(float *)((char *)&unk_140249620 + v6 * 4);
            v67 = v66 - *(float *)((char *)&unk_14024961C + v6 * 4);
            v28 = *(float *)((char *)&unk_14024966C + v6 * 4);
            v29 = (float)((float)((float)((float)(v18 * v20) - (float)(v70 * v23))
                                + *(float *)((char *)&unk_140249624 + v6 * 4))
                        * v24)
                + (float)((float)-v24 * *(float *)((char *)&unk_140249624 + v13 * 4));
            v30 = v27
                + (float)((float)((float)((float)((float)(v70 * v19) - (float)(v28 * v20))
                                        + *(float *)((char *)&unk_14024962C + v6 * 4))
                                * v24)
                        + (float)((float)-v24 * *(float *)((char *)&unk_14024962C + v13 * 4)));
            v71 = (float)((float)((float)((float)(v70 * v19) - (float)(v28 * v20))
                                + *(float *)((char *)&unk_14024962C + v6 * 4))
                        * v24)
                + (float)((float)-v24 * *(float *)((char *)&unk_14024962C + v13 * 4));
            v31 = (float)((float)((float)((float)(v28 * v23) - (float)(v18 * v19))
                                + *(float *)((char *)&unk_140249628 + v6 * 4))
                        * v24)
                + (float)((float)-v24 * *(float *)((char *)&unk_140249628 + v13 * 4));
            v32 = -(float)((float)((float)(v60 * (float)(v26 + v31)) + (float)(*v8 * (float)(v29 + v25)))
                         + (float)(v9 * v30));
            v33 = *v8 * v32;
            v34 = v60 * v32;
            v35 = (float)(v9 * v32) + v30;
            v36 = 1.0 / (float)(v68 + v15);
            v37 = v33 + (float)(v29 + v25);
            v38 = v34 + (float)(v26 + v31);
            v69 = v68 * v36;
            v72 = -(float)(v36 * v15);
            *(float *)&dword_140249630[v13] = (float)(v69 * v37) + *(float *)&dword_140249630[v13];
            *(float *)&dword_140249634[v13] = (float)(v69 * v38) + *(float *)&dword_140249634[v13];
            *(float *)&dword_140249638[v13] = (float)(v35 * v69) + *(float *)&dword_140249638[v13];
            *(float *)&dword_140249630[v6] = (float)(v37 * v72) + *(float *)&dword_140249630[v6];
            *(float *)&dword_140249634[v6] = (float)(v38 * v72) + *(float *)&dword_140249634[v6];
            *(float *)&dword_140249638[v6] = (float)(v35 * v72) + *(float *)&dword_140249638[v6];
            *(float *)&dword_140249678[v6] = (float)((float)((float)(v61 * v38) - (float)(v67 * v35)) * v72)
                                           + *(float *)&dword_140249678[v6];
            v39 = *(float *)((char *)&unk_16E6A7624 + v10);
            *(float *)&dword_14024967C[v6] = (float)((float)((float)(v62 * v35) - (float)(v37 * v61)) * v72)
                                           + *(float *)&dword_14024967C[v6];
            *(float *)&dword_140249680[v6] = (float)((float)((float)(v37 * v67) - (float)(v38 * v62)) * v72)
                                           + *(float *)&dword_140249680[v6];
            v40 = v8[2];
            v41 = v8[1];
            v42 = (float)((float)((float)((float)((float)(v39 * 0.375) * v31) + (float)(v26 * (float)(v39 * 0.09375)))
                                * v41)
                        + (float)((float)((float)(v29 * (float)(v39 * 0.375)) + (float)(v25 * (float)(v39 * 0.09375)))
                                * *v8))
                + (float)((float)((float)((float)(v39 * 0.375) * v71) + (float)(v27 * (float)(v39 * 0.09375))) * v40);
            v43 = v40 * v42;
            v44 = *v8 * v42;
            v45 = v41 * v42;
            *(float *)&dword_140249630[v13] = (float)(v69 * v44) + *(float *)&dword_140249630[v13];
            *(float *)&dword_140249634[v13] = (float)(v69 * v45) + *(float *)&dword_140249634[v13];
            *(float *)&dword_140249638[v13] = (float)(v69 * v43) + *(float *)&dword_140249638[v13];
            *(float *)&dword_140249630[v6] = (float)(v72 * v44) + *(float *)&dword_140249630[v6];
            *(float *)&dword_140249634[v6] = (float)(v72 * v45) + *(float *)&dword_140249634[v6];
            *(float *)&dword_140249638[v6] = (float)(v43 * v72) + *(float *)&dword_140249638[v6];
            *(float *)&dword_140249678[v6] = (float)((float)((float)(v61 * v45) - (float)(v43 * v67)) * v72)
                                           + *(float *)&dword_140249678[v6];
            *(float *)&dword_14024967C[v6] = (float)((float)((float)(v43 * v62) - (float)(v61 * v44)) * v72)
                                           + *(float *)&dword_14024967C[v6];
            *(float *)&dword_140249680[v6] = (float)((float)((float)(v67 * v44) - (float)(v62 * v45)) * v72)
                                           + *(float *)&dword_140249680[v6];
            v46 = *(float *)((char *)&unk_14024963C + v6 * 4);
            v47 = *(float *)((char *)&unk_140249640 + v6 * 4);
            v48 = *(float *)((char *)&unk_140249644 + v6 * 4);
            v63 = v46;
            v64 = v47;
            v65 = v48;
            if ( v5 <= 1 )
            {
              sub_140049E50(&v63, v8, v4);
              v46 = v63;
              v47 = v64;
              v48 = v65;
            }
            v49 = *(float *)((char *)&unk_14024966C + v6 * 4) - *(float *)((char *)&unk_14024966C + v13 * 4);
            v50 = *(float *)((char *)&unk_140249670 + v6 * 4) - *(float *)((char *)&unk_140249670 + v13 * 4);
            v51 = *(float *)((char *)&unk_140249644 + v13 * 4);
            v52 = *(float *)((char *)&unk_140249640 + v13 * 4);
            ++v5;
            v53 = *(float *)((char *)&unk_14024963C + v13 * 4);
            v54 = *(float *)((char *)&unk_140249674 + v6 * 4) - *(float *)((char *)&unk_140249674 + v13 * 4);
            v55 = *(float *)&dword_14024969C[v13];
            v56 = -(float)((float)((float)(v47 * v50) + (float)(v46 * v49)) + (float)(v48 * v54));
            v57 = (float)((float)((float)((float)(v47 * v51) - (float)(v48 * v52)) * 0.25)
                        + (float)((float)((float)(v46 * v56) + v49) * 0.5))
                * v55;
            v58 = (float)((float)((float)((float)(v48 * v53) - (float)(v46 * v51)) * 0.25)
                        + (float)((float)((float)(v47 * v56) + v50) * 0.5))
                * v55;
            v59 = (float)((float)((float)((float)(v46 * v52) - (float)(v47 * v53)) * 0.25)
                        + (float)((float)((float)(v48 * v56) + v54) * 0.5))
                * v55;
            *(float *)&dword_140249678[v13] = (float)(v57 * v69) + *(float *)&dword_140249678[v13];
            *(float *)&dword_14024967C[v13] = (float)(v58 * v69) + *(float *)&dword_14024967C[v13];
            *(float *)&dword_140249680[v13] = (float)(v59 * v69) + *(float *)&dword_140249680[v13];
            *(float *)&dword_140249678[v6] = (float)(v57 * v72) + *(float *)&dword_140249678[v6];
            *(float *)&dword_14024967C[v6] = (float)(v58 * v72) + *(float *)&dword_14024967C[v6];
            *(float *)&dword_140249680[v6] = (float)(v59 * v72) + *(float *)&dword_140249680[v6];
            --v7;
          }
          while ( v7 );
        }
      }
    }
    v0 += 5210;
    --v1;
  }
  while ( v1 );
}

