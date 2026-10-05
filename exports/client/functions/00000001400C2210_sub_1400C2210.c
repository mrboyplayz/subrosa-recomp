/* Address: 0x1400c2210 | Name: sub_1400C2210 | Size: 2454 bytes */
unsigned __int64 sub_1400C2210()
{
  unsigned __int64 result; // rax
  __int64 v1; // rdi
  __int64 v2; // r12
  __int64 v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // eax
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm7_4
  float v11; // xmm10_4
  float v12; // xmm14_4
  float v13; // xmm8_4
  float v14; // xmm11_4
  float v15; // xmm15_4
  float v16; // xmm9_4
  __int64 v17; // r8
  float v18; // xmm12_4
  __int64 v19; // rax
  float v20; // xmm2_4
  float v21; // xmm5_4
  float v22; // xmm3_4
  float v23; // xmm6_4
  unsigned int v24; // xmm4_4
  float v25; // xmm0_4
  unsigned int v26; // xmm5_4
  float v27; // xmm1_4
  unsigned int v28; // xmm6_4
  int v29; // ecx
  unsigned int v30; // xmm3_4
  float v31; // xmm2_4
  unsigned int v32; // xmm1_4
  float v33; // xmm0_4
  unsigned int v34; // xmm0_4
  __int128 v35; // xmm0
  __int128 v36; // xmm0
  float v37; // xmm4_4
  float v38; // xmm3_4
  float v39; // xmm2_4
  int v40; // ebp
  unsigned int *v41; // rsi
  __int64 v42; // r14
  float *v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rax
  float v46; // xmm7_4
  float v47; // xmm8_4
  float v48; // xmm4_4
  float v49; // xmm5_4
  float v50; // xmm6_4
  float v51; // xmm9_4
  float v52; // xmm10_4
  float v53; // xmm11_4
  float v54; // xmm12_4
  float v55; // xmm3_4
  float v56; // xmm1_4
  float v57; // xmm2_4
  __int64 v58; // rcx
  float v59; // xmm7_4
  float v60; // xmm8_4
  float v61; // xmm0_4
  float v62; // [rsp+20h] [rbp-138h]
  float v63; // [rsp+24h] [rbp-134h]
  float v64; // [rsp+28h] [rbp-130h]
  float v65; // [rsp+2Ch] [rbp-12Ch]
  float v66; // [rsp+30h] [rbp-128h]
  float v67; // [rsp+34h] [rbp-124h]
  float v68; // [rsp+38h] [rbp-120h]
  float v69; // [rsp+3Ch] [rbp-11Ch]
  float v70; // [rsp+40h] [rbp-118h]
  float v71; // [rsp+44h] [rbp-114h]
  float v72; // [rsp+48h] [rbp-110h]
  float v73; // [rsp+4Ch] [rbp-10Ch]
  float v74; // [rsp+50h] [rbp-108h]
  float v75; // [rsp+54h] [rbp-104h]
  float v76; // [rsp+58h] [rbp-100h]
  float v77; // [rsp+5Ch] [rbp-FCh]
  __int64 v78; // [rsp+60h] [rbp-F8h]
  _UNKNOWN *retaddr; // [rsp+158h] [rbp+0h] BYREF
  float v80; // [rsp+160h] [rbp+8h]
  float v81; // [rsp+168h] [rbp+10h]
  float v82; // [rsp+170h] [rbp+18h]
  float v83; // [rsp+178h] [rbp+20h]

  result = (unsigned __int64)&retaddr;
  v1 = 0;
  v2 = 256;
  v3 = 0;
  v78 = 256;
  do
  {
    if ( dword_140404A6C[v1 + 280651303] )
    {
      v4 = (int)dword_140404A6C[v1 + 280651313];
      if ( (_DWORD)v4 == -1 )
      {
        dword_140404A6C[v1 + 280651335] = dword_140404A6C[v1 + 280651440];
        dword_140404A6C[v1 + 280651336] = dword_140404A6C[v1 + 280651441];
        result = dword_140404A6C[v1 + 280651442];
        dword_140404A6C[v1 + 280651337] = result;
      }
      else
      {
        v5 = (int)dword_140404A6C[v1 + 280651305];
        if ( (_DWORD)v5 != -1 )
        {
          if ( (dword_140404A6C[3597 * v5 + 71856325] & 0x800) != 0 )
          {
            v6 = dword_140404A6C[v1 + 280651322];
            if ( v6 < 30 )
              dword_140404A6C[v1 + 280651322] = v6 + 1;
          }
          else
          {
            dword_140404A6C[v1 + 280651322] = 0;
          }
        }
        v7 = *(float *)&dword_140404A6C[v1 + 280651440];
        v8 = *(float *)&dword_140404A6C[v1 + 280651441];
        v9 = *(float *)&dword_140404A6C[v1 + 280651442];
        v10 = *(float *)&dword_140404A6C[v1 + 280651518] - v7;
        v11 = *(float *)&dword_140404A6C[v1 + 280651752] - v7;
        v12 = *(float *)&dword_140404A6C[v1 + 280651830] - v7;
        v13 = *(float *)&dword_140404A6C[v1 + 280651519] - v8;
        v81 = *(float *)&dword_140404A6C[v1 + 280651596] - v7;
        v14 = *(float *)&dword_140404A6C[v1 + 280651753] - v8;
        v15 = *(float *)&dword_140404A6C[v1 + 280651831] - v8;
        v16 = *(float *)&dword_140404A6C[v1 + 280651520] - v9;
        v17 = 5210 * v4;
        v82 = *(float *)&dword_140404A6C[v1 + 280651597] - v8;
        v18 = *(float *)&dword_140404A6C[v1 + 280651754] - v9;
        v83 = *(float *)&dword_140404A6C[v1 + 280651598] - v9;
        v62 = *(float *)&dword_140404A6C[v1 + 280651674] - v7;
        v63 = *(float *)&dword_140404A6C[v1 + 280651675] - v8;
        v64 = *(float *)&dword_140404A6C[v1 + 280651676] - v9;
        v65 = *(float *)&dword_140404A6C[v1 + 280651832] - v9;
        v66 = *(float *)&dword_140404A6C[v1 + 280651908] - v7;
        v67 = *(float *)&dword_140404A6C[v1 + 280651909] - v8;
        v68 = *(float *)&dword_140404A6C[v1 + 280651910] - v9;
        v69 = *(float *)&dword_140404A6C[v1 + 280651986] - v7;
        v70 = *(float *)&dword_140404A6C[v1 + 280651987] - v8;
        v71 = *(float *)&dword_140404A6C[v1 + 280651988] - v9;
        v72 = *(float *)&dword_140404A6C[v1 + 280652064] - v7;
        v73 = *(float *)&dword_140404A6C[v1 + 280652065] - v8;
        v74 = *(float *)&dword_140404A6C[v1 + 280652066] - v9;
        v75 = *(float *)&dword_140404A6C[v1 + 280652142] - v7;
        v76 = *(float *)&dword_140404A6C[v1 + 280652143] - v8;
        v77 = *(float *)&dword_140404A6C[v1 + 280652144] - v9;
        v19 = 99776LL * (int)dword_140404A6C[5210 * v4 + 129716710] + 12LL * (int)dword_140404A6C[v1 + 280651314];
        v20 = *(float *)((char *)&dword_140404A6C[346732494] + v19);
        v21 = *(float *)((char *)&dword_140404A6C[346732492] + v19);
        v22 = *(float *)((char *)&dword_140404A6C[346732493] + v19) + 0.25;
        v23 = (float)(*(float *)&dword_140404A6C[5210 * v4 + 129716728] * v21)
            + *(float *)&dword_140404A6C[5210 * v4 + 129716722];
        v80 = *(float *)&dword_140404A6C[5210 * v4 + 129716726];
        *(float *)&v24 = (float)((float)((float)(v80 * v21) + *(float *)&dword_140404A6C[5210 * v4 + 129716720])
                               + (float)(*(float *)&dword_140404A6C[5210 * v4 + 129716729] * v22))
                       + (float)(*(float *)&dword_140404A6C[5210 * v4 + 129716732] * v20);
        v25 = *(float *)&dword_140404A6C[5210 * v4 + 129716731] * v22;
        *(float *)&v26 = (float)((float)((float)(v21 * *(float *)&dword_140404A6C[v17 + 129716727])
                                       + *(float *)&dword_140404A6C[v17 + 129716721])
                               + (float)(*(float *)&dword_140404A6C[v17 + 129716730] * v22))
                       + (float)(*(float *)&dword_140404A6C[v17 + 129716733] * v20);
        dword_140404A6C[v1 + 280651335] = v24;
        v27 = *(float *)&dword_140404A6C[5210 * v4 + 129716734] * v20;
        dword_140404A6C[v1 + 280651336] = v26;
        *(float *)&v28 = (float)(v23 + v25) + v27;
        dword_140404A6C[v1 + 280651337] = v28;
        v29 = dword_140404A6C[v1 + 280651322];
        if ( v29 <= 0 )
        {
          *(float *)&v30 = v80;
        }
        else
        {
          v30 = dword_140404A6C[v17 + 129716726];
          v31 = (float)((float)v29 * *(float *)((char *)&dword_140404A6C[346732492] + v19)) * 0.033333335;
          *(float *)&v32 = (float)(v31 * *(float *)&dword_140404A6C[v17 + 129716727]) + *(float *)&v26;
          *(float *)&dword_140404A6C[v1 + 280651335] = (float)(*(float *)&v30 * v31) + *(float *)&v24;
          *(float *)&v24 = (float)(*(float *)&v30 * v31) + *(float *)&v24;
          v33 = *(float *)&dword_140404A6C[v17 + 129716728];
          v26 = v32;
          dword_140404A6C[v1 + 280651336] = v32;
          *(float *)&v34 = (float)(v33 * v31) + *(float *)&v28;
          dword_140404A6C[v1 + 280651337] = v34;
          v28 = v34;
        }
        v35 = *(_OWORD *)&dword_140404A6C[v17 + 129716727];
        dword_140404A6C[v1 + 280651440] = v24;
        dword_140404A6C[v1 + 280651441] = v26;
        dword_140404A6C[v1 + 280651442] = v28;
        *(_OWORD *)&dword_140404A6C[v1 + 280651453] = v35;
        v36 = *(_OWORD *)&dword_140404A6C[v17 + 129716731];
        dword_140404A6C[v1 + 280651452] = v30;
        *(_OWORD *)&dword_140404A6C[v1 + 280651457] = v36;
        *(float *)&dword_140404A6C[v1 + 280651518] = v10 + *(float *)&v24;
        *(float *)&dword_140404A6C[v1 + 280651519] = v13 + *(float *)&v26;
        *(float *)&dword_140404A6C[v1 + 280651520] = v16 + *(float *)&v28;
        v37 = *(float *)&dword_140404A6C[v1 + 280651440];
        *(float *)&dword_140404A6C[v1 + 280651596] = v37 + v81;
        v38 = *(float *)&dword_140404A6C[v1 + 280651441];
        *(float *)&dword_140404A6C[v1 + 280651597] = v38 + v82;
        v39 = *(float *)&dword_140404A6C[v1 + 280651442];
        *(float *)&dword_140404A6C[v1 + 280651598] = v39 + v83;
        *(float *)&dword_140404A6C[v1 + 280651674] = v37 + v62;
        *(float *)&dword_140404A6C[v1 + 280651675] = v38 + v63;
        *(float *)&dword_140404A6C[v1 + 280651676] = v39 + v64;
        *(float *)&dword_140404A6C[v1 + 280651752] = v11 + v37;
        *(float *)&dword_140404A6C[v1 + 280651753] = v14 + v38;
        *(float *)&dword_140404A6C[v1 + 280651754] = v18 + v39;
        *(float *)&dword_140404A6C[v1 + 280651830] = v12 + v37;
        *(float *)&dword_140404A6C[v1 + 280651831] = v15 + v38;
        *(float *)&dword_140404A6C[v1 + 280651832] = v65 + v39;
        *(float *)&dword_140404A6C[v1 + 280651908] = v66 + v37;
        *(float *)&dword_140404A6C[v1 + 280651909] = v67 + v38;
        *(float *)&dword_140404A6C[v1 + 280651910] = v68 + v39;
        *(float *)&dword_140404A6C[v1 + 280651986] = v69 + v37;
        *(float *)&dword_140404A6C[v1 + 280651987] = v70 + v38;
        *(float *)&dword_140404A6C[v1 + 280651988] = v71 + v39;
        *(float *)&dword_140404A6C[v1 + 280652064] = v72 + v37;
        *(float *)&dword_140404A6C[v1 + 280652065] = v73 + v38;
        *(float *)&dword_140404A6C[v1 + 280652066] = v74 + v39;
        *(float *)&dword_140404A6C[v1 + 280652142] = v75 + v37;
        *(float *)&dword_140404A6C[v1 + 280652143] = v76 + v38;
        v40 = 10;
        v41 = &dword_140404A6C[282486295];
        v42 = 780;
        v43 = (float *)&dword_140404A6C[v1 + 280652234];
        *(float *)&dword_140404A6C[v1 + 280652144] = v77 + v39;
        do
        {
          v44 = (int)*v41;
          v45 = v1 * 4 + 312 * v44;
          v46 = *(float *)((char *)&dword_140404A6C[280651452] + v45);
          *(v43 - 2) = v46;
          v47 = *(float *)((char *)&dword_140404A6C[280651453] + v45);
          *(v43 - 1) = v47;
          v48 = *(float *)((char *)&dword_140404A6C[280651454] + v45);
          *v43 = v48;
          v49 = *(float *)((char *)&dword_140404A6C[280651455] + v45);
          v43[1] = v49;
          v50 = *(float *)((char *)&dword_140404A6C[280651456] + v45);
          v43[2] = v50;
          v51 = *(float *)((char *)&dword_140404A6C[280651457] + v45);
          v43[3] = v51;
          v52 = *(float *)((char *)&dword_140404A6C[280651458] + v45);
          v43[4] = v52;
          v53 = *(float *)((char *)&dword_140404A6C[280651459] + v45);
          v43[5] = v53;
          v54 = *(float *)((char *)&dword_140404A6C[280651460] + v45);
          v43[6] = v54;
          if ( v40 == 10 || v40 == 13 )
          {
            sub_14007B2A0(
              (__int64)&dword_140404A6C[v3 + 280651452 + v42],
              (float *)&dword_140404A6C[v3 + 280651452 + v42]);
            LODWORD(v44) = *v41;
            v48 = *v43;
            v49 = v43[1];
            v46 = *(v43 - 2);
            v47 = *(v43 - 1);
            v50 = v43[2];
            v51 = v43[3];
            v52 = v43[4];
            v53 = v43[5];
            v54 = v43[6];
          }
          v55 = *((float *)v41 + 1);
          ++v40;
          v56 = *((float *)v41 + 2);
          v42 += 78;
          v57 = *((float *)v41 + 3);
          v41 += 25;
          result = (int)v44;
          v58 = v1 * 4 + 312LL * (int)v44;
          v59 = (float)(v46 * v55) + *(float *)((char *)&dword_140404A6C[280651440] + v58);
          *(v43 - 14) = v59;
          v60 = (float)(v47 * v55) + *(float *)((char *)&dword_140404A6C[280651441] + v58);
          *(v43 - 13) = v60;
          v61 = *(float *)((char *)&dword_140404A6C[280651442] + v58);
          *(v43 - 14) = (float)((float)(v49 * v56) + v59) + (float)(v52 * v57);
          *(v43 - 13) = (float)((float)(v50 * v56) + v60) + (float)(v53 * v57);
          *(v43 - 12) = (float)((float)((float)(v48 * v55) + v61) + (float)(v51 * v56)) + (float)(v54 * v57);
          v43 += 78;
        }
        while ( v40 < 16 );
        v2 = v78;
      }
    }
    v3 += 7166;
    v1 += 7166;
    v78 = --v2;
  }
  while ( v2 );
  return result;
}

