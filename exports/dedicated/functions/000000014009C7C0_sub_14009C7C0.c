/* Address: 0x14009c7c0 | Name: sub_14009C7C0 | Size: 3299 bytes */
__int64 sub_14009C7C0()
{
  int v0; // r15d
  int *v1; // r12
  __int64 v2; // rdx
  __int64 v3; // rax
  int v4; // ecx
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r14
  int *v9; // rbp
  int v10; // eax
  int *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 result; // rax
  int v16; // ebx
  _DWORD *v17; // rdi
  int v18; // r15d
  int v19; // r8d
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int i; // ebx
  int v24; // ebx
  int *v25; // rdi
  int *v26; // rsi
  int j; // ebx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _DWORD *v31; // rbx
  int k; // edi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // r8d
  __int64 v39; // rdx
  int *v40; // rcx
  _DWORD *v41; // rbp
  int v42; // esi
  int *v43; // r14
  int v44; // edi
  _DWORD *v45; // rbx
  int *v46; // rbx
  __int64 v47; // rdi
  int *v48; // rcx
  __int64 v49; // rdx
  int v50; // eax
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rcx
  int *v55; // rdx
  __int64 v56; // r8
  __int64 v57; // rax
  int v58; // r8d
  __int64 v59; // rdx
  int v60; // r8d
  int v61; // edx
  int *v62; // rcx
  int v63; // eax
  int v64; // r8d
  int v65; // edx
  __int64 v66; // rax
  int v67; // eax
  unsigned int v68; // eax
  int v69; // eax
  int *v70; // rcx
  int v71[2]; // [rsp+20h] [rbp-98h] BYREF
  float v72; // [rsp+28h] [rbp-90h]
  _OWORD v73[2]; // [rsp+30h] [rbp-88h] BYREF
  int v74; // [rsp+50h] [rbp-68h]
  int v75; // [rsp+C0h] [rbp+8h]
  __int64 v76; // [rsp+C8h] [rbp+10h]

  v0 = dword_178C5B8E0;
  v1 = dword_16D67D5A0;
  v2 = 256;
  v75 = dword_178C5B8E0;
  v76 = 256;
  do
  {
    if ( *v1 && v1[2886] )
    {
      v3 = v1[39];
      if ( (_DWORD)v3 == -1 )
        *v1 = 0;
      v4 = v1[3513];
      if ( v4 && v0 > v4 )
      {
        if ( (_DWORD)v3 != -1 )
        {
          v5 = 7166 * v3;
          v6 = dword_1909419F0[7166 * v3];
          if ( (_DWORD)v6 != -1 )
          {
            v7 = dword_16E6A72A8[5210 * v6];
            if ( (_DWORD)v7 != -1 )
              *(_QWORD *)((char *)&unk_16D4FD5FC + 1532 * v7) = 1;
          }
          v8 = 8;
          v9 = &dword_19094849C[v5];
          do
          {
            v10 = *(v9 - 1);
            if ( v10 > 0 )
            {
              v11 = v9;
              v12 = (unsigned int)v10;
              do
              {
                v13 = *v11;
                v14 = 1760 * v13;
                if ( dword_19025F0F4[1760 * v13] > 0 )
                {
                  dword_19025F0DC[1760 * dword_19025F0F8[v14]] = 0;
                  sub_140073D90(dword_19025F0F8[v14], v13);
                }
                ++v11;
                dword_19025F0DC[v14] = 0;
                --v12;
              }
              while ( v12 );
            }
            v9 += 10;
            --v8;
          }
          while ( v8 );
          v2 = v76;
          dword_190941A00[v5] = 0;
          dword_1909419D0[v5] = -1;
          v0 = v75;
        }
        *v1 = 0;
      }
    }
    v1 += 3597;
    v76 = --v2;
  }
  while ( v2 );
  result = (unsigned int)dword_1915413AC;
  if ( dword_1915413AC == 1 )
  {
    LODWORD(qword_1915413B4) = dword_1915413C0;
    dword_1915413AC = 2;
    dword_178C5B8E0 = 1728000;
    dword_178C5B8E4 = 10;
    sub_140046730();
    sub_1400BAD70((unsigned int)xmmword_1915FBCA0);
    v16 = 0;
    if ( dword_183A7E074 > 0 )
    {
      v17 = &unk_183A7E0B8;
      do
      {
        if ( *v17 == 4 )
          sub_1400ECBF0((unsigned int)v16, 0);
        ++v16;
        v17 += 14019;
      }
      while ( v16 < dword_183A7E074 );
    }
    v0 = dword_178C5B8E0;
    result = (unsigned int)dword_1915413AC;
    v71[0] = dword_178C5B8E8;
    v72 = *(float *)&dword_178C5B8F0;
    qword_17AE3AD40 = 0;
    dword_17AE3AD4C[0] = 0;
    qword_17AE3AD54 = 0;
    dword_17AE3AD60 = 0;
    qword_17AE3AD68 = 0;
    dword_17AE3AD74 = 0;
    qword_17AE3AD7C = 0;
    dword_17AE3AD88 = 0;
    qword_17AE3AD90 = 0;
    dword_17AE3AD9C = 0;
    qword_17AE3ADA4 = 0;
    dword_17AE3ADB0 = 0;
  }
  if ( (_DWORD)result == 2 )
  {
    v18 = dword_178C5B8E4 + v0;
    dword_178C5B8E0 = v18;
    if ( v18 == 1728060 )
    {
      memset(&dword_163D841E0, 0, 0x800u);
      v19 = rand();
      v20 = 7;
      v21 = (unsigned int)(v19 / 7);
      v22 = (unsigned int)(7 * v21);
      dword_178C63938 = v19 - v22;
      do
      {
        sub_1400EC4A0(v22, v21);
        --v20;
      }
      while ( v20 );
      sub_1400ED0F0(v22, v21);
      v18 = dword_178C5B8E0;
    }
    if ( v18 == 54000 * (v18 / 54000) && v18 < 3672000 )
    {
      for ( i = 0; i < 6; ++i )
        sub_1400EC120((unsigned int)i);
      v24 = 0;
      v25 = dword_17AE3AD4C;
      v26 = dword_191541494;
      do
      {
        if ( *v26 > 0 )
        {
          if ( *v25 <= 0 )
            sub_1400BAF70((unsigned int)v24);
          else
            --*v25;
        }
        ++v24;
        v26 += 5873;
        v25 += 5;
      }
      while ( v24 < 6 );
      v18 = dword_178C5B8E0;
    }
    if ( v18 < 4104000 )
    {
      v38 = 0;
      if ( dword_183A7E074 > 0 )
      {
        v39 = 0;
        v40 = dword_183A8AAAC;
        do
        {
          if ( *(v40 - 12925) == 9 )
          {
            *(_QWORD *)v40 = 0;
            *((_DWORD *)&qword_183A8AAB0 + 3 * v39 + 1) = 20;
            ++*v40;
          }
          ++v38;
          v39 += 4673;
          v40 += 14019;
        }
        while ( v38 < dword_183A7E074 );
      }
      v41 = &unk_191541620;
      v42 = 0;
      v43 = dword_1961996AC;
      do
      {
        v44 = 0;
        v45 = v41;
        *v43 = (int)(float)(*((float *)v43 - 2) * 10.0);
        do
        {
          if ( *(v45 - 17) )
          {
            if ( !*(v45 - 16) && v18 == *v45 )
            {
              sub_1400BC500((unsigned int)*(v45 - 15));
              if ( !*(v45 - 16) )
              {
                sub_1400974F0(v42, v44, 0, 0);
                v18 = dword_178C5B8E0;
              }
            }
          }
          ++v44;
          v45 += 279;
        }
        while ( v44 < 16 );
        ++v42;
        v43 += 6;
        v41 += 5873;
      }
      while ( v42 < 6 );
      v46 = dword_16D67D5DC;
      v47 = 256;
      if ( v18 == 18000 * (v18 / 18000) )
      {
        v48 = (int *)&unk_1909419E8;
        v49 = 256;
        do
        {
          if ( *(v48 - 8) )
          {
            v50 = *(v48 - 3);
            if ( v50 > 0 )
              *(v48 - 3) = v50 - 1;
            if ( *v48 > 7 )
            {
              v51 = *v48 - 1;
              *v48 = v51;
              if ( v51 > 7 )
                *v48 = v51 - 1;
            }
          }
          v48 += 7166;
          --v49;
        }
        while ( v49 );
        sub_14004CB50();
        sub_14004CE30();
        sub_1400B8850(v53, v52);
        v55 = dword_16D67D5DC;
        v56 = 256;
        do
        {
          if ( *(v55 - 15) )
          {
            v57 = *v55;
            if ( (_DWORD)v57 != -1 )
            {
              v54 = 112 * v57;
              *((_DWORD *)&unk_16DDCBA74 + 28 * v57) += 5;
            }
          }
          v55 += 3597;
          --v56;
        }
        while ( v56 );
        v58 = dword_16DDCBA24;
        v59 = 0;
        if ( dword_16DDCBA24 > 0 )
        {
          v54 = (__int64)&unk_16DDCBA60;
          do
          {
            if ( *(int *)v54 > 0 )
            {
              --*(_DWORD *)v54;
              v58 = dword_16DDCBA24;
            }
            v59 = (unsigned int)(v59 + 1);
            v54 += 112;
          }
          while ( (int)v59 < v58 );
        }
        sub_1400BEFC0(v54, v59);
        sub_14003A6A0();
        v18 = dword_178C5B8E0;
      }
      if ( v18 == 54000 * (v18 / 54000) )
      {
        v60 = dword_16DDCBA24;
        v61 = 0;
        if ( dword_16DDCBA24 > 0 )
        {
          v62 = (int *)&unk_16DDCBA6C;
          do
          {
            if ( *v62 > 0 )
            {
              v63 = *v62 - 16;
              if ( v63 < 0 )
                v63 = 0;
              *v62 = v63;
              v60 = dword_16DDCBA24;
            }
            ++v61;
            v62 += 28;
          }
          while ( v61 < v60 );
        }
        v64 = HIDWORD(xmmword_1915FBCB0);
        dword_17AE3AD50[0] = 0;
        dword_17AE3AD64 = 0;
        dword_17AE3AD78 = 0;
        dword_17AE3AD8C = 0;
        dword_17AE3ADA0 = 0;
        dword_17AE3ADB4 = 0;
        dword_17AE3ADC8 = 0;
        dword_17AE3ADDC = 0;
        dword_17AE3ADF0 = 0;
        dword_17AE3AE04 = 0;
        dword_17AE3AE18 = 0;
        dword_17AE3AE2C = 0;
        dword_17AE3AE40 = 0;
        dword_17AE3AE54 = 0;
        dword_17AE3AE68 = 0;
        dword_17AE3AE7C = 0;
        dword_17AE3AE90 = 0;
        dword_17AE3AEA4 = 0;
        dword_17AE3AEB8 = 0;
        dword_17AE3AECC = 0;
        dword_17AE3AEE0 = 0;
        dword_17AE3AEF4 = 0;
        dword_17AE3AF08 = 0;
        dword_17AE3AF1C = 0;
        dword_17AE3AF30 = 0;
        dword_17AE3AF44 = 0;
        dword_17AE3AF58 = 0;
        dword_17AE3AF6C = 0;
        dword_17AE3AF80 = 0;
        dword_17AE3AF94 = 0;
        dword_17AE3AFA8 = 0;
        dword_17AE3AFBC = 0;
        dword_17AE3AFD0 = 0;
        dword_17AE3AFE4 = 0;
        dword_17AE3AFF8 = 0;
        dword_17AE3B00C = 0;
        dword_17AE3B020 = 0;
        dword_17AE3B034 = 0;
        dword_17AE3B048 = 0;
        dword_17AE3B05C = 0;
        dword_17AE3B070 = 0;
        dword_17AE3B084 = 0;
        dword_17AE3B098 = 0;
        dword_17AE3B0AC = 0;
        dword_17AE3B0C0 = 0;
        dword_17AE3B0D4 = 0;
        dword_17AE3B0E8 = 0;
        dword_17AE3B0FC = 0;
        dword_17AE3B110 = 0;
        dword_17AE3B124 = 0;
        dword_17AE3B138 = 0;
        dword_17AE3B14C = 0;
        dword_17AE3B160 = 0;
        dword_17AE3B174 = 0;
        dword_17AE3B188 = 0;
        dword_17AE3B19C = 0;
        dword_17AE3B1B0 = 0;
        dword_17AE3B1C4 = 0;
        dword_17AE3B1D8 = 0;
        dword_17AE3B1EC = 0;
        dword_17AE3B200 = 0;
        dword_17AE3B214 = 0;
        dword_17AE3B228 = 0;
        dword_17AE3B23C = 0;
        do
        {
          v65 = v46[8];
          if ( v65 > 0 && v46[24] != -1 )
          {
            v66 = *v46;
            if ( (_DWORD)v66 != -1 )
              *((_DWORD *)&unk_16DDCBA6C + 28 * v66) += 8;
          }
          v67 = v46[12];
          v46[11] = 0;
          if ( v67 > 0 )
            v46[12] = v67 - 1;
          v46[13] = 0;
          if ( v65 > 0 )
            v46[8] = --v65;
          if ( v65 >= v64 )
          {
            v46[11] = 100;
            v46[12] = 4;
          }
          v46 += 3597;
          --v47;
        }
        while ( v47 );
      }
      if ( dword_1915FC5C8 < 8 )
      {
        do
        {
          v71[1] = dword_178C5B8EC;
          v73[0] = xmmword_1400F78B0;
          v74 = 1065353216;
          v72 = *(float *)&dword_178C5B8F0 + 1.0;
          *(float *)v71 = *(float *)&dword_178C5B8E8 + -4.0;
          v73[1] = xmmword_1400F78B0;
          v68 = sub_14003B080(29, v71, nullptr, (int *)v73);
          if ( v68 == -1 )
          {
            v69 = dword_1915FC5C8;
          }
          else
          {
            sub_14003E1A0(v68, byte_191536804);
            v69 = ++dword_1915FC5C8;
          }
        }
        while ( v69 < 8 );
      }
      result = (__int64)&unk_16D6802B8;
      do
      {
        if ( *(_DWORD *)(result - 11544) && !*(_DWORD *)result && *(_DWORD *)(result - 11388) == -1 )
          *(_DWORD *)(result - 11188) = 1;
        result += 14388;
      }
      while ( result < (__int64)dword_16DA036B8 );
      v70 = dword_1915415EC;
      do
      {
        if ( *(v70 - 4) )
        {
          result = *v70;
          if ( dword_19025F0DC[1760 * result] > 0 )
            dword_19025F0DC[1760 * result] = 0xFFFF;
        }
        if ( v70[275] )
        {
          result = v70[279];
          if ( dword_19025F0DC[1760 * result] > 0 )
            dword_19025F0DC[1760 * result] = 0xFFFF;
        }
        if ( v70[554] )
        {
          result = v70[558];
          if ( dword_19025F0DC[1760 * result] > 0 )
            dword_19025F0DC[1760 * result] = 0xFFFF;
        }
        if ( v70[833] )
        {
          result = v70[837];
          if ( dword_19025F0DC[1760 * result] > 0 )
            dword_19025F0DC[1760 * result] = 0xFFFF;
        }
        if ( v70[1112] )
        {
          result = v70[1116];
          if ( dword_19025F0DC[1760 * result] > 0 )
            dword_19025F0DC[1760 * result] = 0xFFFF;
        }
        if ( v70[1391] )
        {
          result = v70[1395];
          if ( dword_19025F0DC[1760 * result] > 0 )
            dword_19025F0DC[1760 * result] = 0xFFFF;
        }
        if ( v70[1670] )
        {
          result = v70[1674];
          if ( dword_19025F0DC[1760 * result] > 0 )
            dword_19025F0DC[1760 * result] = 0xFFFF;
        }
        if ( v70[1949] )
        {
          result = v70[1953];
          if ( dword_19025F0DC[1760 * result] > 0 )
            dword_19025F0DC[1760 * result] = 0xFFFF;
        }
        if ( v70[2228] )
        {
          result = v70[2232];
          if ( dword_19025F0DC[1760 * result] > 0 )
            dword_19025F0DC[1760 * result] = 0xFFFF;
        }
        if ( v70[2507] )
        {
          result = v70[2511];
          if ( dword_19025F0DC[1760 * result] > 0 )
            dword_19025F0DC[1760 * result] = 0xFFFF;
        }
        if ( v70[2786] )
        {
          result = v70[2790];
          if ( dword_19025F0DC[1760 * result] > 0 )
            dword_19025F0DC[1760 * result] = 0xFFFF;
        }
        if ( v70[3065] )
        {
          result = v70[3069];
          if ( dword_19025F0DC[1760 * result] > 0 )
            dword_19025F0DC[1760 * result] = 0xFFFF;
        }
        if ( v70[3344] )
        {
          result = v70[3348];
          if ( dword_19025F0DC[1760 * result] > 0 )
            dword_19025F0DC[1760 * result] = 0xFFFF;
        }
        if ( v70[3623] )
        {
          result = v70[3627];
          if ( dword_19025F0DC[1760 * result] > 0 )
            dword_19025F0DC[1760 * result] = 0xFFFF;
        }
        if ( v70[3902] )
        {
          result = v70[3906];
          if ( dword_19025F0DC[1760 * result] > 0 )
            dword_19025F0DC[1760 * result] = 0xFFFF;
        }
        if ( v70[4181] )
        {
          result = v70[4185];
          if ( dword_19025F0DC[1760 * result] > 0 )
            dword_19025F0DC[1760 * result] = 0xFFFF;
        }
        v70 += 5873;
      }
      while ( (__int64)v70 < (__int64)dword_191563C84 );
    }
    else
    {
      for ( j = 0; j < 6; ++j )
        sub_1400EC370((unsigned int)j);
      dword_178C5B900 = 0;
      v31 = &unk_16D680DC4;
      for ( k = 0; k < 256; ++k )
      {
        if ( *(v31 - 3593) )
        {
          sub_1400B1360((unsigned int)k, v28, v30);
          v33 = (int)*(v31 - 3554);
          if ( (_DWORD)v33 == -1 )
          {
            *(v31 - 3) = 0;
          }
          else
          {
            v28 = (int)*(v31 - 3554);
            *(v31 - 3) = 1;
            *(v31 - 2) = dword_190941BEC[7166 * v33];
            *(v31 - 1) = dword_190941BEC[7166 * v33 + 1];
            *v31 = dword_190941BEC[7166 * v33 + 2];
            v29 = 28664 * v33;
            v31[1] = *((_DWORD *)&unk_190941CB4 + 7166 * v33);
            v31[2] = dword_1909419F0[7166 * v33];
            v31[3] = dword_1909419F4[7166 * v33];
          }
        }
        v31 += 3597;
      }
      sub_1400B8850(v29, v28);
      return sub_1400B4790(v35, v34, v36, v37);
    }
  }
  return result;
}

