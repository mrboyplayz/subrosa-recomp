/* Address: 0x140020930 | Name: sub_140020930 | Size: 3020 bytes */
__int64 __fastcall sub_140020930(signed int a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // r13
  __int64 result; // rax
  __int64 v5; // rdx
  int v6; // xmm11_4
  int v7; // xmm12_4
  int v8; // xmm13_4
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v12; // rsi
  float v13; // xmm7_4
  float *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  float *v20; // rcx
  float v21; // xmm6_4
  float v22; // xmm5_4
  float v23; // xmm4_4
  float v24; // xmm6_4
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  float *v28; // rcx
  float v29; // xmm4_4
  float v30; // xmm1_4
  float v31; // xmm8_4
  float v32; // xmm0_4
  float v33; // xmm6_4
  float v34; // xmm6_4
  int *v35; // rdi
  int v36; // esi
  unsigned int *v37; // r15
  __int64 v38; // rdx
  _DWORD *v39; // rcx
  __int64 v40; // rax
  float *v41; // rcx
  float v42; // xmm8_4
  float v43; // xmm6_4
  int *v44; // rdi
  signed int i; // r13d
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r15
  float *v50; // rcx
  float v51; // xmm7_4
  float v52; // xmm6_4
  int v53; // r12d
  __int64 v54; // r9
  int *v55; // r15
  __int64 v56; // rsi
  __int64 v57; // r8
  _DWORD *v58; // rdx
  float *v59; // rcx
  float v60; // xmm7_4
  float v61; // xmm6_4
  __int64 v63; // [rsp+48h] [rbp-B8h]
  __int64 v64; // [rsp+50h] [rbp-B0h]
  int v65; // [rsp+58h] [rbp-A8h] BYREF
  int v66; // [rsp+5Ch] [rbp-A4h]
  int v67; // [rsp+60h] [rbp-A0h]

  v2 = a1;
  v3 = a2;
  if ( !dword_16E54E460 )
  {
    result = 188896LL * a1;
    *(_DWORD *)((char *)&unk_160F299BC + result) = 0;
    *(_DWORD *)((char *)&unk_160F299E4 + result) = 0;
    *(_DWORD *)((char *)&unk_160F29A0C + result) = 0;
    *(_DWORD *)((char *)&unk_160F29A34 + result) = 0;
    *(_DWORD *)((char *)&unk_160F29A5C + result) = 0;
    *(_DWORD *)((char *)&unk_160F29A84 + result) = 0;
    *(_DWORD *)((char *)&unk_160F29AAC + result) = 0;
    *(_DWORD *)((char *)&unk_160F29AD4 + result) = 0;
    return result;
  }
  v5 = dword_16D67D63C[3597 * a2];
  if ( (_DWORD)v5 == -1 )
  {
    v9 = *((int *)&unk_160F29AFC + 47224 * a1);
    if ( (_DWORD)v9 == -1 )
    {
      v6 = dword_190941F94[0];
      v7 = dword_190941F98[0];
      v8 = dword_190941F9C[0];
    }
    else
    {
      v10 = 7166 * v9;
      v6 = dword_190941F94[v10];
      v7 = dword_190941F94[v10 + 1];
      v8 = dword_190941F94[v10 + 2];
    }
  }
  else
  {
    v6 = dword_190941F94[7166 * v5];
    v7 = dword_190941F94[7166 * v5 + 1];
    v8 = dword_190941F94[7166 * v5 + 2];
  }
  v11 = dword_16D67D63C[3597 * v3];
  v12 = 8;
  v13 = *(float *)&a1;
  result = 188896 * v2;
  v65 = v6;
  v66 = v7;
  v67 = v8;
  v14 = (float *)((char *)&unk_160F299BC + 188896 * v2);
  v63 = 188896 * v2;
  do
  {
    if ( !*(_DWORD *)v14 )
      goto LABEL_64;
    v15 = *((int *)v14 + 1);
    v13 = 128.0;
    v16 = 3597 * v15;
    if ( !dword_16D67D5A0[3597 * v15] )
      *v14 = 0.0;
    v17 = *((int *)v14 + 3);
    v18 = 131604 * v15;
    if ( (_DWORD)v17 != -1 )
    {
      v13 = 1.0;
      if ( *(_DWORD *)((char *)&unk_1417D9BC0 + v18) )
        *v14 = 0.0;
      v25 = 1760 * v17;
      result = (unsigned int)dword_19025F0D4[v25];
      if ( (_DWORD)result == 25 )
      {
        result = *(int *)((char *)&unk_19025F21C + v25 * 4);
        if ( (_DWORD)result == -1 )
          goto LABEL_56;
        v26 = 7040 * result;
        if ( *((_DWORD *)&unk_19025F0E4 + 1760 * result) == -1 )
          *v14 = 0.0;
        if ( *(_DWORD *)((char *)&unk_19025F0EC + v26) )
          *v14 = 0.0;
        if ( *(_DWORD *)((char *)&unk_19025F21C + v26) == -1 )
          *v14 = 0.0;
        if ( *(_DWORD *)((char *)&unk_19025F33C + v26) != 3 )
LABEL_56:
          *v14 = 0.0;
      }
      else if ( (_DWORD)result == 26 )
      {
        result = *((int *)v14 + 4);
        v27 = 7040 * result;
        if ( !*((_DWORD *)&unk_19025F0C0 + 1760 * result) )
          *v14 = 0.0;
        if ( *(_DWORD *)((char *)&unk_19025F0E4 + v27) == -1 )
          *v14 = 0.0;
        if ( *(int *)((char *)&unk_19025F0EC + v27) >= 2 )
          *v14 = 0.0;
        if ( !HIDWORD(qword_19025F428[v27 / 8]) )
          goto LABEL_56;
      }
      v28 = (float *)&dword_19025F11C[v25];
      v29 = *(float *)&dword_19025F11C[v25 + 1];
      v30 = (float)(*(float *)&v6 - *(float *)&dword_19025F11C[v25])
          * (float)(*(float *)&v6 - *(float *)&dword_19025F11C[v25]);
      v31 = fsqrt(
              (float)((float)((float)(v28[1] - *(float *)&v7) * (float)(v28[1] - *(float *)&v7))
                    + (float)((float)(*v28 - *(float *)&v6) * (float)(*v28 - *(float *)&v6)))
            + (float)((float)(v28[2] - *(float *)&v8) * (float)(v28[2] - *(float *)&v8)));
      v32 = (float)(*(float *)&v8 - *(float *)&dword_19025F11C[v25 + 2])
          * (float)(*(float *)&v8 - *(float *)&dword_19025F11C[v25 + 2]);
      v14[8] = v31;
      if ( (float)((float)((float)((float)(*(float *)&v7 - v29) * (float)(*(float *)&v7 - v29)) + v30) + v32) <= 16384.0 )
      {
        v33 = 1.0;
        result = sub_1400828D0(v28, &v65, 0);
        if ( (_DWORD)result )
          v33 = 0.5;
        v31 = v14[8];
        v8 = v67;
        v7 = v66;
        v6 = v65;
      }
      else
      {
        v33 = 0.5;
      }
      v34 = (float)((float)(v33 - v14[9]) * 0.125) + v14[9];
      v14[9] = v34;
      if ( v31 > v34 )
        goto LABEL_63;
      goto LABEL_64;
    }
    v19 = *(_DWORD *)((char *)&unk_1417D9BC8 + v18);
    if ( v19 )
    {
      if ( v19 == 1 )
      {
        v13 = 64.0;
      }
      else if ( v19 == 2 )
      {
        v13 = 128.0;
      }
    }
    else
    {
      v13 = 8.0;
    }
    result = dword_16D67D63C[v16];
    *((_DWORD *)v14 + 2) = result;
    if ( *(_DWORD *)((char *)&unk_1417D9BC0 + v18) )
      *v14 = 0.0;
    if ( dword_1915413AC != 3 )
    {
      if ( v11 == -1 )
      {
        if ( (_DWORD)result != -1 )
          goto LABEL_26;
      }
      else
      {
        if ( (_DWORD)result == -1 )
        {
          *v14 = 0.0;
          goto LABEL_34;
        }
LABEL_26:
        if ( dword_190941A04[0] <= 0 )
          *v14 = 0.0;
        v20 = (float *)(0x140000000LL + 28664 * result + 1351884692);
        v21 = *v20;
        v22 = *(float *)(0x140000004LL + 28664 * result + 1351884692);
        v23 = *(float *)(0x140000008LL + 28664 * result + 1351884692);
        v14[8] = fsqrt(
                   (float)((float)((float)(v22 - *(float *)&v7) * (float)(v22 - *(float *)&v7))
                         + (float)((float)(*v20 - *(float *)&v6) * (float)(*v20 - *(float *)&v6)))
                 + (float)((float)(v23 - *(float *)&v8) * (float)(v23 - *(float *)&v8)));
        if ( (float)((float)((float)((float)(*(float *)&v6 - v21) * (float)(*(float *)&v6 - v21))
                           + (float)((float)(*(float *)&v7 - v22) * (float)(*(float *)&v7 - v22)))
                   + (float)((float)(*(float *)&v8 - v23) * (float)(*(float *)&v8 - v23))) <= 16384.0 )
        {
          v24 = 1.0;
          result = sub_1400828D0(v20, &v65, 0);
          if ( (_DWORD)result )
            v24 = 0.5;
          v8 = v67;
          v7 = v66;
          v6 = v65;
        }
        else
        {
          v24 = 0.5;
        }
        v14[9] = (float)((float)(v24 - v14[9]) * 0.125) + v14[9];
      }
LABEL_34:
      if ( (float)(v13 * v14[9]) >= v14[8] )
        goto LABEL_64;
LABEL_63:
      *v14 = 0.0;
    }
LABEL_64:
    v14 += 10;
    --v12;
  }
  while ( v12 );
  v35 = dword_16D67D63C;
  v36 = 0;
  v37 = (unsigned int *)&unk_1417D9BC8;
  while ( 2 )
  {
    if ( v36 != (_DWORD)v3 && *(v35 - 39) && !*(v37 - 2) )
    {
      v38 = 0;
      v39 = (_DWORD *)((char *)&unk_160F299C0 + v63);
      do
      {
        if ( *(v39 - 1) )
        {
          if ( *v39 == v36 )
          {
            result = (unsigned int)*v35;
            if ( v39[1] == (_DWORD)result )
              goto LABEL_96;
          }
        }
        ++v38;
        v39 += 10;
      }
      while ( v38 < 8 );
      if ( dword_1915413AC == 3 )
      {
LABEL_80:
        v40 = *v35;
        if ( (_DWORD)v40 == -1 || dword_1915413AC == 3 )
          goto LABEL_87;
        v41 = (float *)(0x140000000LL + 28664 * v40 + 1351884692);
        v42 = fsqrt(
                (float)((float)((float)(v41[1] - *(float *)&v7) * (float)(v41[1] - *(float *)&v7))
                      + (float)((float)(*v41 - *(float *)&v6) * (float)(*v41 - *(float *)&v6)))
              + (float)((float)(v41[2] - *(float *)&v8) * (float)(v41[2] - *(float *)&v8)));
        if ( (float)((float)((float)((float)(*(float *)&v7 - *(float *)(0x140000004LL + 28664 * v40 + 1351884692))
                                   * (float)(*(float *)&v7 - *(float *)(0x140000004LL + 28664 * v40 + 1351884692)))
                           + (float)((float)(*(float *)&v6 - *v41) * (float)(*(float *)&v6 - *v41)))
                   + (float)((float)(*(float *)&v8 - *(float *)(0x140000008LL + 28664 * v40 + 1351884692))
                           * (float)(*(float *)&v8 - *(float *)(0x140000008LL + 28664 * v40 + 1351884692)))) <= 16384.0 )
        {
          v43 = 1.0;
          if ( (unsigned int)sub_1400828D0(v41, &v65, 0) )
            v43 = 0.5;
          v8 = v67;
          v7 = v66;
          v6 = v65;
        }
        else
        {
          v43 = 0.5;
        }
      }
      else
      {
        result = *v35;
        if ( v11 != -1 )
        {
          if ( (_DWORD)result == -1 )
            goto LABEL_96;
          goto LABEL_79;
        }
        if ( (_DWORD)result != -1 )
        {
LABEL_79:
          if ( dword_190941A04[7166 * result] <= 0 )
            goto LABEL_96;
          goto LABEL_80;
        }
LABEL_87:
        v42 = 4.0;
        v43 = 1.0;
      }
      result = *v37;
      if ( (_DWORD)result )
      {
        if ( (_DWORD)result == 1 )
        {
          v13 = 64.0;
        }
        else if ( (_DWORD)result == 2 )
        {
          v13 = 128.0;
        }
      }
      else
      {
        v13 = 8.0;
      }
      if ( v42 < (float)(v43 * v13) )
        result = sub_140003390(a1, v36, *v35, -1, 0xFFFFFFFF, SLODWORD(v42), SLODWORD(v43));
    }
LABEL_96:
    ++v36;
    v37 += 32901;
    v35 += 3597;
    if ( v36 < 256 )
      continue;
    break;
  }
  v44 = (int *)&unk_19025F21C;
  for ( i = 0; i < 1024; ++i )
  {
    if ( *(v44 - 87) )
    {
      if ( *(v44 - 82) != 25
        || (v46 = *v44, (_DWORD)v46 == -1)
        || (result = *(v44 - 78), (_DWORD)result == -1)
        || *(v44 - 76)
        || v44[72] != 3
        || (v47 = dword_1909419D0[7166 * result], (_DWORD)v47 == -1)
        || *((_DWORD *)&unk_1417D9BC0 + 32901 * v47) )
      {
LABEL_119:
        if ( *(v44 - 82) == 26 )
        {
          if ( v44[132] )
          {
            result = *(v44 - 78);
            if ( (_DWORD)result != -1 && *(v44 - 76) < 2 )
            {
              result = dword_1909419D0[7166 * result];
              if ( (_DWORD)result != -1 && !*((_DWORD *)&unk_1417D9BC0 + 32901 * result) )
              {
                result = v44[131];
                v53 = 0;
                v54 = 1028 * result;
                v64 = 1028 * result;
                if ( dword_18ED9E9A0[257 * result] > 0 )
                {
                  v55 = (int *)((char *)&dword_18ED9E9A4 + v54);
                  do
                  {
                    v56 = *v55;
                    if ( i != (_DWORD)v56 )
                    {
                      v57 = 0;
                      v58 = (_DWORD *)((char *)&unk_160F299C0 + v63);
                      while ( 1 )
                      {
                        if ( *(v58 - 1) )
                        {
                          result = (unsigned int)dword_1909419D0[7166 * *(v44 - 78)];
                          if ( *v58 == (_DWORD)result && v58[2] == (_DWORD)v56 )
                            break;
                        }
                        ++v57;
                        v58 += 10;
                        if ( v57 >= 8 )
                        {
                          v59 = (float *)(0x140000000LL + 7040 * v56 + 1344663836);
                          v60 = fsqrt(
                                  (float)((float)((float)(v59[1] - *(float *)&v7) * (float)(v59[1] - *(float *)&v7))
                                        + (float)((float)(*v59 - *(float *)&v6) * (float)(*v59 - *(float *)&v6)))
                                + (float)((float)(v59[2] - *(float *)&v8) * (float)(v59[2] - *(float *)&v8)));
                          if ( (float)((float)((float)((float)(*(float *)&v7
                                                             - *(float *)(0x140000004LL + 7040 * v56 + 1344663836))
                                                     * (float)(*(float *)&v7
                                                             - *(float *)(0x140000004LL + 7040 * v56 + 1344663836)))
                                             + (float)((float)(*(float *)&v6 - *v59) * (float)(*(float *)&v6 - *v59)))
                                     + (float)((float)(*(float *)&v8
                                                     - *(float *)(0x140000008LL + 7040 * v56 + 1344663836))
                                             * (float)(*(float *)&v8
                                                     - *(float *)(0x140000008LL + 7040 * v56 + 1344663836)))) <= 16384.0 )
                          {
                            v61 = 1.0;
                            result = sub_1400828D0(v59, &v65, 0);
                            if ( (_DWORD)result )
                              v61 = 0.5;
                            v8 = v67;
                            v7 = v66;
                            v6 = v65;
                            v54 = v64;
                          }
                          else
                          {
                            v61 = 0.5;
                          }
                          if ( v60 < v61 )
                          {
                            result = sub_140003390(
                                       a1,
                                       dword_1909419D0[7166 * *(v44 - 78)],
                                       -1,
                                       v56,
                                       i,
                                       SLODWORD(v60),
                                       SLODWORD(v61));
                            v54 = v64;
                          }
                          break;
                        }
                      }
                    }
                    ++v53;
                    ++v55;
                  }
                  while ( v53 < *(int *)((char *)dword_18ED9E9A0 + v54) );
                }
              }
            }
          }
        }
      }
      else
      {
        v48 = 0;
        result = 0x140000000LL + v63 + 552769984;
        while ( !*(_DWORD *)(result - 4) || *(_DWORD *)result != (_DWORD)v47 || *(_DWORD *)(result + 8) != (_DWORD)v46 )
        {
          ++v48;
          result += 40;
          if ( v48 >= 8 )
          {
            v49 = 1760 * v46;
            if ( *((_DWORD *)&unk_19025F21C + 1760 * v46) == i )
            {
              v50 = (float *)&dword_19025F11C[v49];
              v51 = fsqrt(
                      (float)((float)((float)(v50[1] - *(float *)&v7) * (float)(v50[1] - *(float *)&v7))
                            + (float)((float)(*v50 - *(float *)&v6) * (float)(*v50 - *(float *)&v6)))
                    + (float)((float)(v50[2] - *(float *)&v8) * (float)(v50[2] - *(float *)&v8)));
              if ( (float)((float)((float)((float)(*(float *)&v7 - *(float *)&dword_19025F11C[v49 + 1])
                                         * (float)(*(float *)&v7 - *(float *)&dword_19025F11C[v49 + 1]))
                                 + (float)((float)(*(float *)&v6 - *(float *)&dword_19025F11C[v49])
                                         * (float)(*(float *)&v6 - *(float *)&dword_19025F11C[v49])))
                         + (float)((float)(*(float *)&v8 - *(float *)&dword_19025F11C[v49 + 2])
                                 * (float)(*(float *)&v8 - *(float *)&dword_19025F11C[v49 + 2]))) <= 16384.0 )
              {
                v52 = 1.0;
                result = sub_1400828D0(v50, &v65, 0);
                if ( (_DWORD)result )
                  v52 = 0.5;
                v8 = v67;
                v7 = v66;
                v6 = v65;
              }
              else
              {
                v52 = 0.5;
              }
              if ( v51 < v52 )
                result = sub_140003390(
                           a1,
                           dword_1909419D0[7166 * *(v44 - 78)],
                           -1,
                           v46,
                           *(_DWORD *)((char *)&unk_19025F21C + v49 * 4),
                           SLODWORD(v51),
                           SLODWORD(v52));
            }
            goto LABEL_119;
          }
        }
      }
    }
    v44 += 1760;
  }
  return result;
}

