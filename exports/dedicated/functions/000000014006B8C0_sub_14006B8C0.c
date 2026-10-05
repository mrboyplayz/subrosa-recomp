/* Address: 0x14006b8c0 | Name: sub_14006B8C0 | Size: 2454 bytes */
unsigned __int64 sub_14006B8C0()
{
  unsigned __int64 result; // rax
  unsigned __int64 v1; // rdi
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
  int v24; // xmm4_4
  float v25; // xmm0_4
  float v26; // xmm5_4
  float v27; // xmm1_4
  float v28; // xmm6_4
  int v29; // ecx
  float v30; // xmm3_4
  float v31; // xmm2_4
  int v32; // xmm1_4
  float v33; // xmm0_4
  int v34; // xmm0_4
  __int128 v35; // xmm0
  __int128 v36; // xmm0
  float v37; // xmm4_4
  float v38; // xmm3_4
  float v39; // xmm2_4
  int v40; // ebp
  int *v41; // rsi
  __int64 v42; // r14
  float *v43; // rbx
  __int64 v44; // rdx
  unsigned __int64 v45; // rax
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
  unsigned __int64 v58; // rcx
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
    if ( dword_1909419C8[v1 / 4] )
    {
      v4 = dword_1909419F0[v1 / 4];
      if ( (_DWORD)v4 == -1 )
      {
        dword_190941A48[v1 / 4] = dword_190941BEC[v1 / 4];
        dword_190941A4C[v1 / 4] = dword_190941BF0[v1 / 4];
        result = (unsigned int)dword_190941BF4[v1 / 4];
        dword_190941A50[v1 / 4] = result;
      }
      else
      {
        v5 = dword_1909419D0[v1 / 4];
        if ( (_DWORD)v5 != -1 )
        {
          if ( (dword_16D67D6C0[3597 * v5] & 0x800) != 0 )
          {
            v6 = *(_DWORD *)&algn_190941A08[v1 + 12];
            if ( v6 < 30 )
              *(_DWORD *)&algn_190941A08[v1 + 12] = v6 + 1;
          }
          else
          {
            *(_DWORD *)&algn_190941A08[v1 + 12] = 0;
          }
        }
        v7 = *(float *)&dword_190941BEC[v1 / 4];
        v8 = *(float *)&dword_190941BF0[v1 / 4];
        v9 = *(float *)&dword_190941BF4[v1 / 4];
        v10 = *(float *)&algn_190941D24[v1] - v7;
        v11 = *(float *)((char *)&unk_1909420CC + v1) - v7;
        v12 = *(float *)((char *)&unk_190942204 + v1) - v7;
        v13 = *(float *)((char *)&unk_190941D28 + v1) - v8;
        v81 = *(float *)((char *)&unk_190941E5C + v1) - v7;
        v14 = *(float *)((char *)&unk_1909420D0 + v1) - v8;
        v15 = *(float *)((char *)&unk_190942208 + v1) - v8;
        v16 = *(float *)((char *)&unk_190941D2C + v1) - v9;
        v17 = 5210 * v4;
        v82 = *(float *)((char *)&unk_190941E60 + v1) - v8;
        v18 = *(float *)((char *)&unk_1909420D4 + v1) - v9;
        v83 = *(float *)((char *)&unk_190941E64 + v1) - v9;
        v62 = *(float *)&dword_190941F94[v1 / 4] - v7;
        v63 = *(float *)&dword_190941F98[v1 / 4] - v8;
        v64 = *(float *)&dword_190941F9C[v1 / 4] - v9;
        v65 = *(float *)((char *)&unk_19094220C + v1) - v9;
        v66 = *(float *)((char *)&unk_19094233C + v1) - v7;
        v67 = *(float *)((char *)&unk_190942340 + v1) - v8;
        v68 = *(float *)((char *)&unk_190942344 + v1) - v9;
        v69 = *(float *)((char *)&unk_190942474 + v1) - v7;
        v70 = *(float *)((char *)&unk_190942478 + v1) - v8;
        v71 = *(float *)((char *)&unk_19094247C + v1) - v9;
        v72 = *(float *)((char *)&unk_1909425AC + v1) - v7;
        v73 = *(float *)((char *)&unk_1909425B0 + v1) - v8;
        v74 = *(float *)((char *)&unk_1909425B4 + v1) - v9;
        v75 = *(float *)((char *)&unk_1909426E4 + v1) - v7;
        v76 = *(float *)((char *)&unk_1909426E8 + v1) - v8;
        v77 = *(float *)((char *)&unk_1909426EC + v1) - v9;
        v19 = 99776LL * dword_16E6A3C64[5210 * v4] + 12LL * dword_1909419F4[v1 / 4];
        v20 = *(float *)((char *)&unk_14AA2D604 + v19);
        v21 = *(float *)((char *)&unk_14AA2D5FC + v19);
        v22 = *(float *)((char *)&unk_14AA2D600 + v19) + 0.25;
        v23 = (float)(*(float *)&dword_16E6A3CAC[5210 * v4] * v21) + *(float *)&dword_16E6A3C94[5210 * v4];
        v80 = *(float *)&dword_16E6A3CA4[5210 * v4];
        *(float *)&v24 = (float)((float)((float)(v80 * v21) + *(float *)&dword_16E6A3C8C[5210 * v4])
                               + (float)(*(float *)&dword_16E6A3CB0[5210 * v4] * v22))
                       + (float)(*(float *)&dword_16E6A3CBC[5210 * v4] * v20);
        v25 = *(float *)&dword_16E6A3CB8[5210 * v4] * v22;
        v26 = (float)((float)((float)(v21 * *(float *)&dword_16E6A3CA8[v17]) + *(float *)&dword_16E6A3C90[v17])
                    + (float)(*(float *)&dword_16E6A3CB4[v17] * v22))
            + (float)(*(float *)&dword_16E6A3CC0[v17] * v20);
        dword_190941A48[v1 / 4] = v24;
        v27 = *(float *)&dword_16E6A3CC4[5210 * v4] * v20;
        *(float *)&dword_190941A4C[v1 / 4] = v26;
        v28 = (float)(v23 + v25) + v27;
        *(float *)&dword_190941A50[v1 / 4] = v28;
        v29 = *(_DWORD *)&algn_190941A08[v1 + 12];
        if ( v29 <= 0 )
        {
          v30 = v80;
        }
        else
        {
          v30 = *(float *)&dword_16E6A3CA4[v17];
          v31 = (float)((float)v29 * *(float *)((char *)&unk_14AA2D5FC + v19)) * 0.033333335;
          *(float *)&v32 = (float)(v31 * *(float *)&dword_16E6A3CA8[v17]) + v26;
          *(float *)&dword_190941A48[v1 / 4] = (float)(v30 * v31) + *(float *)&v24;
          *(float *)&v24 = (float)(v30 * v31) + *(float *)&v24;
          v33 = *(float *)&dword_16E6A3CAC[v17];
          v26 = *(float *)&v32;
          dword_190941A4C[v1 / 4] = v32;
          *(float *)&v34 = (float)(v33 * v31) + v28;
          dword_190941A50[v1 / 4] = v34;
          v28 = *(float *)&v34;
        }
        v35 = *(_OWORD *)&dword_16E6A3CA8[v17];
        dword_190941BEC[v1 / 4] = v24;
        *(float *)&dword_190941BF0[v1 / 4] = v26;
        *(float *)&dword_190941BF4[v1 / 4] = v28;
        *(__int128 *)((char *)&xmmword_190941C1C + v1 + 4) = v35;
        v36 = *(_OWORD *)&dword_16E6A3CB8[v17];
        *(float *)((char *)&xmmword_190941C1C + v1) = v30;
        *(__int128 *)((char *)&xmmword_190941C2C + v1 + 4) = v36;
        *(float *)&algn_190941D24[v1] = v10 + *(float *)&v24;
        *(float *)((char *)&unk_190941D28 + v1) = v13 + v26;
        *(float *)((char *)&unk_190941D2C + v1) = v16 + v28;
        v37 = *(float *)&dword_190941BEC[v1 / 4];
        *(float *)((char *)&unk_190941E5C + v1) = v37 + v81;
        v38 = *(float *)&dword_190941BF0[v1 / 4];
        *(float *)((char *)&unk_190941E60 + v1) = v38 + v82;
        v39 = *(float *)&dword_190941BF4[v1 / 4];
        *(float *)((char *)&unk_190941E64 + v1) = v39 + v83;
        *(float *)&dword_190941F94[v1 / 4] = v37 + v62;
        *(float *)&dword_190941F98[v1 / 4] = v38 + v63;
        *(float *)&dword_190941F9C[v1 / 4] = v39 + v64;
        *(float *)((char *)&unk_1909420CC + v1) = v11 + v37;
        *(float *)((char *)&unk_1909420D0 + v1) = v14 + v38;
        *(float *)((char *)&unk_1909420D4 + v1) = v18 + v39;
        *(float *)((char *)&unk_190942204 + v1) = v12 + v37;
        *(float *)((char *)&unk_190942208 + v1) = v15 + v38;
        *(float *)((char *)&unk_19094220C + v1) = v65 + v39;
        *(float *)((char *)&unk_19094233C + v1) = v66 + v37;
        *(float *)((char *)&unk_190942340 + v1) = v67 + v38;
        *(float *)((char *)&unk_190942344 + v1) = v68 + v39;
        *(float *)((char *)&unk_190942474 + v1) = v69 + v37;
        *(float *)((char *)&unk_190942478 + v1) = v70 + v38;
        *(float *)((char *)&unk_19094247C + v1) = v71 + v39;
        *(float *)((char *)&unk_1909425AC + v1) = v72 + v37;
        *(float *)((char *)&unk_1909425B0 + v1) = v73 + v38;
        *(float *)((char *)&unk_1909425B4 + v1) = v74 + v39;
        *(float *)((char *)&unk_1909426E4 + v1) = v75 + v37;
        *(float *)((char *)&unk_1909426E8 + v1) = v76 + v38;
        v40 = 10;
        v41 = &dword_191041988;
        v42 = 3120;
        v43 = (float *)((char *)&xmmword_19094284C + v1 + 8);
        *(float *)((char *)&unk_1909426EC + v1) = v77 + v39;
        do
        {
          v44 = *v41;
          v45 = v1 + 312 * v44;
          v46 = *(float *)((char *)&xmmword_190941C1C + v45);
          *(v43 - 2) = v46;
          v47 = *(float *)((char *)&xmmword_190941C1C + v45 + 4);
          *(v43 - 1) = v47;
          v48 = *(float *)((char *)&xmmword_190941C1C + v45 + 8);
          *v43 = v48;
          v49 = *(float *)((char *)&xmmword_190941C1C + v45 + 12);
          v43[1] = v49;
          v50 = *(float *)((char *)&xmmword_190941C2C + v45);
          v43[2] = v50;
          v51 = *(float *)((char *)&xmmword_190941C2C + v45 + 4);
          v43[3] = v51;
          v52 = *(float *)((char *)&xmmword_190941C2C + v45 + 8);
          v43[4] = v52;
          v53 = *(float *)((char *)&xmmword_190941C2C + v45 + 12);
          v43[5] = v53;
          v54 = *(float *)((char *)dword_190941C3C + v45);
          v43[6] = v54;
          if ( v40 == 10 || v40 == 13 )
          {
            sub_140049C20(
              (__int64)&xmmword_190941C1C + v3 + v42,
              (float *)((char *)&xmmword_190941C1C + v3 + v42),
              v17 * 4);
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
          v42 += 312;
          v57 = *((float *)v41 + 3);
          v41 += 25;
          result = (int)v44;
          v58 = v1 + 312LL * (int)v44;
          v59 = (float)(v46 * v55) + *(float *)((char *)dword_190941BEC + v58);
          *(v43 - 14) = v59;
          v60 = (float)(v47 * v55) + *(float *)((char *)&dword_190941BEC[1] + v58);
          *(v43 - 13) = v60;
          v61 = *(float *)((char *)&dword_190941BEC[2] + v58);
          *(v43 - 14) = (float)((float)(v49 * v56) + v59) + (float)(v52 * v57);
          *(v43 - 13) = (float)((float)(v50 * v56) + v60) + (float)(v53 * v57);
          *(v43 - 12) = (float)((float)((float)(v48 * v55) + v61) + (float)(v51 * v56)) + (float)(v54 * v57);
          v43 += 78;
        }
        while ( v40 < 16 );
        v2 = v78;
      }
    }
    v3 += 28664;
    v1 += 28664LL;
    v78 = --v2;
  }
  while ( v2 );
  return result;
}

