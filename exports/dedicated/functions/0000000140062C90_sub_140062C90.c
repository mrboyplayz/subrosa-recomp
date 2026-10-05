/* Address: 0x140062c90 | Name: sub_140062C90 | Size: 1806 bytes */
void sub_140062C90()
{
  int *v0; // rcx
  __int64 v1; // rsi
  __int64 v2; // rdx
  int v3; // ebp
  __int64 v4; // r12
  float *v5; // rbx
  char *v6; // rdi
  int *v7; // r15
  __int64 v8; // r14
  __int64 v9; // rsi
  int v10; // eax
  float v11; // xmm3_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm5_4
  float v15; // xmm6_4
  __int64 v16; // rcx
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm1_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm1_4
  float v26; // xmm4_4
  float v27; // xmm3_4
  float v28; // xmm1_4
  float v29; // xmm1_4
  float v30; // xmm1_4
  float v31; // xmm1_4
  float v32; // xmm4_4
  float v33; // xmm3_4
  float v34; // xmm1_4
  float v35; // xmm1_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  float v38; // xmm1_4
  int v39; // eax
  float v40; // xmm0_4
  int v41; // eax
  float v42; // xmm1_4
  int v43; // eax
  float v44; // xmm0_4
  signed int v45; // r15d
  signed int v46; // ebp
  signed int v47; // edi
  int v48; // esi
  signed int v49; // ebx
  __int64 v50; // r14
  int v51; // r12d
  int v52; // eax
  __int64 v53; // rcx
  bool v54; // zf
  float *v55; // [rsp+30h] [rbp-A8h]
  __int64 v56; // [rsp+E0h] [rbp+8h]
  int *v57; // [rsp+E8h] [rbp+10h]
  __int64 v58; // [rsp+F0h] [rbp+18h]
  __int64 v59; // [rsp+F8h] [rbp+20h]

  v0 = dword_190941B88;
  v1 = 0;
  v2 = 0;
  v58 = 0;
  v56 = 0;
  v57 = dword_190941B88;
  v59 = 256;
  do
  {
    v55 = (float *)((char *)&unk_190941CFC + v1);
    if ( *(_DWORD *)((char *)&unk_190941CFC + v1 - 820) )
    {
      v3 = 0;
      *v0 = 1199570944;
      v4 = 0;
      v0[3] = -947912704;
      v5 = (float *)((char *)&unk_190941CFC + v1);
      v0[1] = 1199570944;
      v6 = (char *)&unk_190941CFC + v1 - 204;
      v0[4] = -947912704;
      v7 = dword_1910415F8;
      v8 = 0;
      v0[2] = 1199570944;
      v0[5] = -947912704;
      do
      {
        *((_DWORD *)v6 - 14) = *((_DWORD *)v6 - 17);
        *((_DWORD *)v6 - 13) = *((_DWORD *)v6 - 16);
        *((_DWORD *)v6 - 12) = *((_DWORD *)v6 - 15);
        v9 = 188LL * *((int *)v6 - 18);
        *((_DWORD *)v6 - 17) = *(_DWORD *)((char *)&unk_140249618 + v9);
        *((_DWORD *)v6 - 16) = *(_DWORD *)((char *)&unk_14024961C + v9);
        *((_DWORD *)v6 - 15) = *(_DWORD *)((char *)&unk_140249620 + v9);
        *((_DWORD *)v6 - 11) = *(_DWORD *)((char *)&unk_140249624 + v9);
        *((_DWORD *)v6 - 10) = *(_DWORD *)((char *)&unk_140249624 + v9 + 4);
        *((_DWORD *)v6 - 9) = *(_DWORD *)((char *)&unk_140249624 + v9 + 8);
        *((_DWORD *)v6 - 5) = *(_DWORD *)((char *)&unk_14024963C + v9);
        *((_DWORD *)v6 - 4) = *(_DWORD *)((char *)&unk_140249640 + v9);
        *((_DWORD *)v6 - 3) = *(_DWORD *)((char *)&unk_140249644 + v9);
        *((_DWORD *)v6 - 2) = *(_DWORD *)((char *)&unk_140249648 + v9);
        *((_DWORD *)v6 - 1) = *(_DWORD *)((char *)&unk_14024964C + v9);
        *(_DWORD *)v6 = *(_DWORD *)((char *)&unk_140249650 + v9);
        *((_DWORD *)v6 + 1) = *(_DWORD *)((char *)&unk_140249654 + v9);
        *((_DWORD *)v6 + 2) = *(_DWORD *)((char *)&unk_140249658 + v9);
        *((_DWORD *)v6 + 3) = *(_DWORD *)((char *)&unk_14024965C + v9);
        *((_DWORD *)v6 + 4) = *(_DWORD *)((char *)&unk_14024966C + v9);
        *((_DWORD *)v6 + 5) = *(_DWORD *)((char *)&unk_140249670 + v9);
        *((_DWORD *)v6 + 6) = *(_DWORD *)((char *)&unk_140249674 + v9);
        if ( (unsigned int)v3 <= 3 )
        {
          v10 = sub_1400828D0(0x140000000LL + v2 + v8 + 1351883768, (char *)dword_190941BEC + v2 + v8, 1);
          v2 = v56;
          if ( v10 )
          {
            v11 = (float)((float)(*((float *)v6 - 17) - *((float *)v6 - 14))
                        * (float)(*(float *)&dword_16E18CA58 * 0.97500002))
                + *((float *)v6 - 14);
            v12 = (float)((float)(*((float *)v6 - 16) - *((float *)v6 - 13))
                        * (float)(*(float *)&dword_16E18CA58 * 0.97500002))
                + *((float *)v6 - 13);
            v13 = (float)((float)(*((float *)v6 - 15) - *((float *)v6 - 12))
                        * (float)(*(float *)&dword_16E18CA58 * 0.97500002))
                + *((float *)v6 - 12);
            *((float *)v6 - 17) = v11;
            *(float *)((char *)&unk_140249618 + v9) = v11;
            *((float *)v6 - 16) = v12;
            *(float *)((char *)&unk_14024961C + v9) = v12;
            *((float *)v6 - 15) = v13;
            *(float *)((char *)&unk_140249620 + v9) = v13;
          }
        }
        v1 = v58;
        v14 = *((float *)v7 + 1) * -0.5;
        v15 = *((float *)v7 + 1) * 0.5;
        v16 = v58 + 12 * (v4 + *v7);
        *((float *)v6 + 48) = (float)(v14 * *(float *)((char *)&xmmword_190941C1C + v16)) + *((float *)v6 - 17);
        *((float *)v6 + 49) = (float)(v14 * *(float *)((char *)&xmmword_190941C1C + v16 + 4)) + *((float *)v6 - 16);
        *((float *)v6 + 50) = (float)(v14 * *(float *)((char *)&xmmword_190941C1C + v16 + 8)) + *((float *)v6 - 15);
        *((float *)v6 + 51) = (float)(v15 * *(float *)((char *)&xmmword_190941C1C + v16)) + *((float *)v6 - 17);
        v17 = *((float *)v7 + 2);
        *((float *)v6 + 52) = (float)(v15 * *(float *)((char *)&xmmword_190941C1C + v16 + 4)) + *((float *)v6 - 16);
        *((float *)v6 + 53) = (float)(v15 * *(float *)((char *)&xmmword_190941C1C + v16 + 8)) + *((float *)v6 - 15);
        v18 = *(v5 - 3);
        v19 = *(float *)v57;
        if ( *(float *)v57 > (float)(v18 - v17) )
        {
          *(float *)v57 = v18 - v17;
          v19 = v18 - v17;
          v18 = *(v5 - 3);
        }
        v20 = *((float *)v57 + 3);
        v21 = v18 + v17;
        if ( v20 < v21 )
        {
          *((float *)v57 + 3) = v21;
          v20 = v21;
        }
        v22 = *v5;
        v23 = *v5 - v17;
        if ( v19 > v23 )
        {
          *(float *)v57 = v23;
          v22 = *v5;
        }
        v24 = v22 + v17;
        if ( v20 < v24 )
          *((float *)v57 + 3) = v24;
        v25 = *(v5 - 2);
        v26 = *((float *)v57 + 1);
        if ( v26 > (float)(v25 - v17) )
        {
          *((float *)v57 + 1) = v25 - v17;
          v26 = v25 - v17;
          v25 = *(v5 - 2);
        }
        v27 = *((float *)v57 + 4);
        v28 = v25 + v17;
        if ( v27 < v28 )
        {
          *((float *)v57 + 4) = v28;
          v27 = v28;
        }
        v29 = v5[1];
        if ( v26 > (float)(v29 - v17) )
        {
          *((float *)v57 + 1) = v29 - v17;
          v29 = v5[1];
        }
        v30 = v29 + v17;
        if ( v27 < v30 )
          *((float *)v57 + 4) = v30;
        v31 = *(v5 - 1);
        v32 = *((float *)v57 + 2);
        if ( v32 > (float)(v31 - v17) )
        {
          *((float *)v57 + 2) = v31 - v17;
          v32 = v31 - v17;
          v31 = *(v5 - 1);
        }
        v33 = *((float *)v57 + 5);
        v34 = v31 + v17;
        if ( v33 < v34 )
        {
          *((float *)v57 + 5) = v34;
          v33 = v34;
        }
        v35 = v5[2];
        if ( v32 > (float)(v35 - v17) )
        {
          *((float *)v57 + 2) = v35 - v17;
          v35 = v5[2];
        }
        v36 = v35 + v17;
        if ( v33 < v36 )
          *((float *)v57 + 5) = v36;
        ++v3;
        v8 += 312;
        v4 += 26;
        v6 += 312;
        v7 += 25;
        v5 += 78;
      }
      while ( v3 < 16 );
      v0 = v57;
      *(v55 - 92) = *(v55 - 92) - 0.25;
      v37 = *((float *)v57 + 3) * 0.25;
      v38 = *((float *)v57 + 1);
      v57[6] = (int)(float)(*(float *)v57 * 0.25);
      v39 = (int)v37;
      v40 = *((float *)v57 + 4);
      v57[9] = v39;
      v41 = (int)(float)(v38 * 0.25);
      v42 = *((float *)v57 + 2);
      v57[7] = v41;
      v43 = (int)(float)(v40 * 0.25);
      v44 = *((float *)v57 + 5);
      v57[10] = v43;
      v57[8] = (int)(float)(v42 * 0.25);
      v57[11] = (int)(float)(v44 * 0.25);
      v45 = *((_DWORD *)v55 - 86);
      if ( v45 <= *((_DWORD *)v55 - 83) )
      {
        do
        {
          v46 = *((_DWORD *)v55 - 85);
          if ( v46 <= *((_DWORD *)v55 - 82) )
          {
            do
            {
              v47 = *((_DWORD *)v55 - 87);
              if ( v47 <= *((_DWORD *)v55 - 84) )
              {
                do
                {
                  v48 = sub_14000CC70(0, v47, v45, v46);
                  if ( v48 )
                  {
                    v49 = 0;
                    v50 = 3792LL * (v48 & 0x3FF);
                    v51 = sub_14000CDB0(0, v47, v45, v46);
                    if ( *(int *)((char *)&unk_18E9EA9CC + v50) > 0 )
                    {
                      do
                      {
                        if ( !_bittest(&v51, v49) )
                        {
                          v52 = sub_140076FF0(v48, v49, 0, v47, v45, v46);
                          if ( v52 != -1 )
                          {
                            v53 = 1760LL * v52;
                            dword_19025F0C8[v53] = 1;
                            *(_DWORD *)((char *)&unk_19025F0C4 + v53 * 4) = 1;
                          }
                        }
                        ++v49;
                      }
                      while ( v49 < *(_DWORD *)((char *)&unk_18E9EA9CC + v50) );
                    }
                  }
                  ++v47;
                }
                while ( v47 <= *((_DWORD *)v55 - 84) );
                v1 = v58;
              }
              ++v46;
            }
            while ( v46 <= *(_DWORD *)((char *)&unk_190941BB4 + v1) );
          }
          ++v45;
        }
        while ( v45 <= *(_DWORD *)((char *)&unk_190941BB0 + v1) );
        v0 = v57;
        v2 = v56;
      }
    }
    v2 += 28664;
    v0 += 7166;
    v56 = v2;
    v1 += 28664;
    v57 = v0;
    v54 = v59-- == 1;
    v58 = v1;
  }
  while ( !v54 );
}

