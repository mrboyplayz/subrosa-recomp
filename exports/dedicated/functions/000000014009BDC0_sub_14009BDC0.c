/* Address: 0x14009bdc0 | Name: sub_14009BDC0 | Size: 2554 bytes */
__int64 sub_14009BDC0()
{
  int *v0; // rcx
  __int64 v1; // rdx
  __int64 result; // rax
  _DWORD *v3; // rbx
  __int64 v4; // r13
  int v5; // ecx
  int v6; // esi
  _DWORD *v7; // rax
  __int64 v8; // rdx
  int i; // r15d
  __int64 v10; // rax
  float v11; // xmm6_4
  float v12; // xmm8_4
  float v13; // xmm7_4
  unsigned __int8 v14; // al
  int v15; // ecx
  __int64 v16; // rax
  float v17; // xmm6_4
  float v18; // xmm6_4
  __int64 v19; // r8
  bool v20; // cc
  int v21; // eax
  int v22; // eax
  int v23; // esi
  float v24; // xmm6_4
  float v25; // xmm6_4
  __int64 v26; // rdi
  __int64 v27; // r15
  __int64 v28; // rbx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  bool v33; // zf
  int v34; // r13d
  int v35; // r11d
  int v36; // r10d
  int v37; // r15d
  _DWORD *v38; // rsi
  __int64 v39; // rax
  float v40; // xmm6_4
  float v41; // xmm8_4
  float v42; // xmm7_4
  unsigned __int8 v43; // al
  int v44; // ecx
  __int64 v45; // rax
  float v46; // xmm6_4
  float v47; // xmm6_4
  __int64 v48; // r8
  int v49; // eax
  int v50; // eax
  int v51; // edx
  float *v52; // rcx
  float v53; // xmm1_4
  float *v54; // rax
  float v55; // xmm0_4
  float v56; // xmm0_4
  int v57; // ecx
  __int128 *v58; // r9
  int j; // r8d
  int v60; // edx
  int v61; // edi
  _DWORD *v62; // rax
  __int64 v63; // rcx
  int v64; // esi
  int *v65; // rbx
  int v66; // r11d
  int *v67; // rdx
  __int64 v68; // r15
  int v69; // r10d
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rax
  int v73; // eax
  _DWORD *v74; // rbx
  float v75; // [rsp+20h] [rbp-69h] BYREF
  float v76; // [rsp+24h] [rbp-65h]
  float v77; // [rsp+28h] [rbp-61h]
  __int128 v78; // [rsp+30h] [rbp-59h] BYREF
  __int128 v79; // [rsp+40h] [rbp-49h]
  int v80; // [rsp+50h] [rbp-39h]

  v0 = (int *)&unk_16D67D628;
  v1 = 256;
  do
  {
    if ( *(v0 - 34) && *v0 > 0 )
      --*v0;
    v0 += 3597;
    --v1;
  }
  while ( v1 );
  result = (unsigned int)dword_1915413AC;
  switch ( dword_1915413AC )
  {
    case 1:
      v3 = &unk_16D6802B8;
      v4 = (unsigned int)dword_1915413AC;
      v5 = dword_1915413AC;
      v6 = 0;
      v7 = &unk_16D6802B8;
      v8 = 256;
      do
      {
        if ( *(v7 - 2886) && !*v7 )
        {
          if ( *(v7 - 2853) <= (unsigned int)dword_1915413AC )
            ++v6;
          if ( !*(v7 - 2868) )
            v5 = 0;
        }
        v7 += 3597;
        v8 -= (unsigned int)dword_1915413AC;
      }
      while ( v8 );
      result = (unsigned int)(qword_1915413B4 - 1);
      LODWORD(qword_1915413B4) = qword_1915413B4 - 1;
      if ( v5 )
      {
        if ( (int)result > 60 )
          result = 60;
        LODWORD(qword_1915413B4) = result;
      }
      if ( !v6 )
      {
        LODWORD(qword_1915413B4) = 1800;
        return result;
      }
      if ( (int)result <= 0 )
      {
        for ( i = 0; i < 256; ++i )
        {
          if ( *(v3 - 2886) )
          {
            if ( !*v3 && *(v3 - 2847) == -1 )
            {
              v10 = (int)*(v3 - 2853);
              if ( (_DWORD)v10 != -1 && (int)v10 < 2 )
              {
                v11 = *(float *)&dword_191541480[5873 * v10];
                v12 = *(float *)&dword_191541480[5873 * v10 + 1];
                v13 = *(float *)&dword_191541480[5873 * v10 + 2];
                v75 = (float)((float)((unsigned __int8)rand() - 127) * 0.0234375) + v11;
                v14 = rand();
                v80 = 1065353216;
                v15 = v14;
                v16 = (int)*(v3 - 2853);
                v76 = v12 - 0.25;
                v17 = *((float *)&unk_191541470 + 5873 * v16);
                v77 = (float)((float)(v15 - 127) * 0.0234375) + v13;
                v18 = v17 + 1.5707964;
                v78 = xmmword_1400F78B0;
                v79 = xmmword_1400F78B0;
                sub_140049C20((__int64)&v78, (float *)&v78 + 3, v19);
                v20 = v3[683] <= 2;
                v21 = *(v3 - 2853);
                v3[682] = v4;
                if ( v20 )
                  v3[683] = v21;
                if ( v21 )
                {
                  if ( v21 == (_DWORD)v4 )
                  {
                    v3[684] = 9;
                  }
                  else if ( v21 == 2 )
                  {
                    v3[684] = 8;
                  }
                }
                else
                {
                  v3[684] = 2;
                }
                v22 = sub_14003A7B0(&v75, (float *)&v78, i);
                *(v3 - 2847) = v22;
                *(v3 - 2797) = 0;
                *((float *)&unk_190941A60 + 7166 * v22) = v18;
                sub_14003A3D0(i);
                sub_1400B1040((unsigned int)i);
              }
            }
          }
          v3 += 3597;
        }
        v23 = (v6 >> 2) + 2;
        v80 = 1065353216;
        if ( v23 > 12 )
          v23 = 12;
        v24 = (float)(*(float *)&dword_19154704C + *(float *)dword_191541488) * 0.5;
        v75 = (float)(*(float *)&dword_191547044 + *(float *)dword_191541480) * 0.5;
        v76 = (float)(*(float *)&dword_191547048 + *(float *)dword_191541484) * 0.5;
        v78 = xmmword_1400F78B0;
        v79 = xmmword_1400F78B0;
        if ( dword_1915413A4 == 5 )
          v23 *= 2;
        if ( v23 <= 18 )
        {
          v25 = v24 - (float)((float)v23 * 0.3125);
          v77 = v25;
          if ( v23 < 0 )
          {
LABEL_50:
            dword_1915413AC = 2;
            LODWORD(qword_1915413B4) = 3600 * DWORD2(xmmword_1915FBCD8);
            return (unsigned int)(3600 * DWORD2(xmmword_1915FBCD8));
          }
        }
        else
        {
          v25 = v24 - 5.625;
          v23 = 18;
          v77 = v25;
        }
        v26 = (unsigned int)(v23 + 1);
        do
        {
          v27 = (int)sub_14003B080(15, (int *)&v75, nullptr, (int *)&v78);
          v28 = 1760 * v27;
          dword_19025F0D4[v28] = 16;
          v29 = sub_14003B080(17, (int *)&v75, nullptr, (int *)&v78);
          sub_140089E50(v27, v29, -1, 0);
          v30 = sub_14003B080(17, (int *)&v75, nullptr, (int *)&v78);
          sub_140089E50(v27, v30, -1, 0);
          v31 = sub_14003B080(17, (int *)&v75, nullptr, (int *)&v78);
          sub_140089E50(v27, v31, -1, 0);
          v32 = sub_14003B080(17, (int *)&v75, nullptr, (int *)&v78);
          sub_140089E50(v27, v32, -1, 0);
          v33 = dword_163D75B60 == 0;
          dword_19025F0D4[v28] = 15;
          if ( !v33 && (unsigned int)v27 <= 0x3FF )
            ++dword_19093F0C0[v27];
          v25 = v25 + 0.625;
          v77 = v25;
          v26 -= v4;
        }
        while ( v26 );
        goto LABEL_50;
      }
      break;
    case 2:
      v34 = 1;
      ++HIDWORD(qword_1915413B4);
      v35 = xmmword_1915FBCD8;
      v36 = qword_1915413B4 - 1;
      LODWORD(qword_1915413B4) = qword_1915413B4 - 1;
      if ( (_DWORD)xmmword_1915FBCD8 )
      {
        v37 = 0;
        v38 = &unk_16D6802B8;
        do
        {
          if ( *(v38 - 2886) )
          {
            if ( !*v38 && *(v38 - 2847) == -1 )
            {
              v39 = (int)*(v38 - 2853);
              if ( (_DWORD)v39 != -1 && (int)v39 < 2 )
              {
                v40 = *(float *)&dword_191541480[5873 * v39];
                v41 = *(float *)&dword_191541480[5873 * v39 + 1];
                v42 = *(float *)&dword_191541480[5873 * v39 + 2];
                v75 = (float)((float)((unsigned __int8)rand() - 127) * 0.0234375) + v40;
                v43 = rand();
                v80 = 1065353216;
                v44 = v43;
                v45 = (int)*(v38 - 2853);
                v76 = v41 - 0.25;
                v46 = *((float *)&unk_191541470 + 5873 * v45);
                v77 = (float)((float)(v44 - 127) * 0.0234375) + v42;
                v47 = v46 + 1.5707964;
                v78 = xmmword_1400F78B0;
                v79 = xmmword_1400F78B0;
                sub_140049C20((__int64)&v78, (float *)&v78 + 3, v48);
                v20 = v38[683] <= 2;
                v49 = *(v38 - 2853);
                v38[682] = 1;
                if ( v20 )
                  v38[683] = v49;
                if ( v49 )
                {
                  if ( v49 == 1 )
                  {
                    v38[684] = 9;
                  }
                  else if ( v49 == 2 )
                  {
                    v38[684] = 8;
                  }
                }
                else
                {
                  v38[684] = 2;
                }
                v50 = sub_14003A7B0(&v75, (float *)&v78, v37);
                *(v38 - 2847) = v50;
                *(v38 - 2797) = 0;
                *(v38 - 2860) = 0;
                *((float *)&unk_190941A60 + 7166 * v50) = v47;
                sub_14003A3D0(v37);
              }
            }
          }
          ++v37;
          v38 += 3597;
        }
        while ( v37 < 256 );
        v35 = xmmword_1915FBCD8;
        v36 = qword_1915413B4;
      }
      v51 = 1;
      v52 = (float *)dword_19025F11C;
      do
      {
        if ( *((_DWORD *)v52 - 23) && *((_DWORD *)v52 - 18) == 17 )
        {
          v53 = *v52;
          v54 = (float *)&unk_191541464;
          while ( 1 )
          {
            if ( v53 >= *(v54 - 3) && v53 < *v54 )
            {
              v55 = v52[1];
              if ( v55 >= *(v54 - 2) && v55 < v54[1] )
              {
                v56 = v52[2];
                if ( v56 >= *(v54 - 1) && v56 < v54[2] )
                  break;
              }
            }
            v54 += 5873;
            if ( (__int64)v54 >= (__int64)flt_19154CBEC )
            {
              v51 = 0;
              break;
            }
          }
        }
        v52 += 1760;
      }
      while ( (__int64)v52 < (__int64)flt_19093F11C );
      if ( v51 )
      {
        v36 -= 5;
        LODWORD(qword_1915413B4) = v36;
      }
      v57 = 0;
      v58 = &v78;
      for ( j = 0; j < 2; ++j )
      {
        v60 = 0;
        *(_DWORD *)v58 = 0;
        result = (__int64)&unk_16D6802B8;
        do
        {
          if ( *(_DWORD *)(result - 11544) )
          {
            if ( !*(_DWORD *)result && *(_DWORD *)(result - 11412) == j )
            {
              v57 |= 1 << j;
              if ( *(_DWORD *)(result - 11388) != -1 )
                *(_DWORD *)v58 = ++v60;
            }
          }
          result += 14388;
        }
        while ( result < (__int64)dword_16DA036B8 );
        v58 = (__int128 *)((char *)v58 + 4);
      }
      if ( v35 )
        goto LABEL_105;
      result = (unsigned int)(v57 - 1);
      if ( (unsigned int)result <= 1 && ((int)v78 > 0 || SDWORD1(v78) > 0) )
        v34 = 0;
      if ( v57 == 3 && (int)v78 > 0 && SDWORD1(v78) > 0 || !v34 || v36 <= 60 )
      {
LABEL_105:
        if ( v36 <= 0 )
        {
          result = sub_1400978A0();
          dword_1915413AC = 3;
          LODWORD(qword_1915413B4) = 720;
        }
      }
      else
      {
        LODWORD(qword_1915413B4) = 60;
      }
      break;
    case 3:
      result = (unsigned int)(qword_1915413B4 - 1);
      LODWORD(qword_1915413B4) = result;
      if ( (int)result <= 0 )
      {
        v61 = 0;
        v62 = &unk_16D67D630;
        v63 = (__int64)dword_16DA00A30;
        do
        {
          if ( *(v62 - 36) )
            *v62 = 0;
          if ( v62[3561] )
            v62[3597] = 0;
          v62 += 7194;
        }
        while ( (__int64)v62 < (__int64)dword_16DA00A30 );
        v64 = 0;
        v65 = dword_1915414A4;
        do
        {
          v66 = -1;
          v67 = dword_16D67D624;
          v68 = -1;
          v69 = 0;
          LODWORD(v70) = 0;
          v71 = 0;
          do
          {
            if ( *(v67 - 33) )
            {
              if ( *v67 == v64 )
              {
                v72 = *(v67 - 18);
                if ( (_DWORD)v72 != -1 )
                {
                  v63 = 112 * v72;
                  v73 = *((_DWORD *)&unk_16DDCBA64 + 28 * v72);
                  if ( v69 < v73 )
                  {
                    v66 = v70;
                    v68 = v71;
                    v69 = v73;
                  }
                }
              }
            }
            v70 = (unsigned int)(v70 + 1);
            ++v71;
            v67 += 3597;
          }
          while ( (int)v70 < 256 );
          if ( v66 != -1 )
            *((_DWORD *)&unk_16D67D630 + 3597 * v68) = 1;
          if ( *v65 != v66 )
          {
            *v65 = v66;
            v65[5654] = 0;
          }
          ++v64;
          v65 += 5873;
        }
        while ( (__int64)v65 < (__int64)dword_19154CC2C );
        v74 = &unk_16D6802B8;
        do
        {
          if ( *(v74 - 2886) && !*v74 )
            sub_1400B1360((unsigned int)v61, v67, v70);
          ++v61;
          v74 += 3597;
        }
        while ( v61 < 256 );
        return sub_1400B4790(v63, v67, v70, v71);
      }
      break;
  }
  return result;
}

