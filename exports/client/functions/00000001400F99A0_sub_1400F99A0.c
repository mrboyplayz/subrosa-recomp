/* Address: 0x1400f99a0 | Name: sub_1400F99A0 | Size: 2554 bytes */
__int64 sub_1400F99A0()
{
  unsigned int *v0; // rcx
  __int64 v1; // rdx
  unsigned int *v2; // rbx
  int v3; // ecx
  int v4; // esi
  unsigned int *v5; // rax
  __int64 v6; // rdx
  int v7; // eax
  int i; // r15d
  __int64 v9; // rax
  float v10; // xmm6_4
  float v11; // xmm8_4
  float v12; // xmm7_4
  int v13; // ecx
  __int64 v14; // rax
  float v15; // xmm6_4
  float v16; // xmm6_4
  bool v17; // cc
  unsigned int v18; // eax
  unsigned int v19; // eax
  int v20; // esi
  float v21; // xmm6_4
  float v22; // xmm6_4
  __int64 v23; // rdi
  __int64 v24; // r15
  __int64 v25; // rbx
  signed int v26; // eax
  signed int v27; // eax
  signed int v28; // eax
  signed int v29; // eax
  bool v30; // zf
  int v31; // r13d
  unsigned int v32; // r11d
  int v33; // r10d
  int v34; // r15d
  unsigned int *v35; // rsi
  __int64 v36; // rax
  float v37; // xmm6_4
  float v38; // xmm8_4
  float v39; // xmm7_4
  int v40; // ecx
  __int64 v41; // rax
  float v42; // xmm6_4
  float v43; // xmm6_4
  unsigned int v44; // eax
  unsigned int v45; // eax
  int v46; // edx
  float *v47; // rcx
  float v48; // xmm1_4
  float *v49; // rax
  float v50; // xmm0_4
  float v51; // xmm0_4
  int v52; // ecx
  __int128 *v53; // r9
  int j; // r8d
  int v55; // edx
  unsigned int *v56; // rax
  int v57; // edi
  unsigned int *v58; // rax
  unsigned int *v59; // rcx
  int v60; // esi
  unsigned int *v61; // rbx
  int v62; // r11d
  unsigned int *v63; // rdx
  __int64 v64; // r15
  signed int v65; // r10d
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rax
  signed int v69; // eax
  unsigned int *v70; // rbx
  __int64 v72; // [rsp+0h] [rbp-89h] BYREF
  float v73; // [rsp+20h] [rbp-69h] BYREF
  float v74; // [rsp+24h] [rbp-65h]
  float v75; // [rsp+28h] [rbp-61h]
  __int128 v76; // [rsp+30h] [rbp-59h] BYREF
  __int128 v77; // [rsp+40h] [rbp-49h]
  int v78; // [rsp+50h] [rbp-39h]
  __int64 v79; // [rsp+58h] [rbp-31h]
  int v80; // [rsp+60h] [rbp-29h]
  int v81; // [rsp+68h] [rbp-21h]
  int v82; // [rsp+70h] [rbp-19h]
  int v83; // [rsp+78h] [rbp-11h]
  int v84; // [rsp+80h] [rbp-9h]
  int v85; // [rsp+88h] [rbp-1h]
  int v86; // [rsp+90h] [rbp+7h]
  int v87; // [rsp+98h] [rbp+Fh]
  int v88; // [rsp+A0h] [rbp+17h]
  int v89; // [rsp+A8h] [rbp+1Fh]
  int v90; // [rsp+B0h] [rbp+27h]
  int v91; // [rsp+B8h] [rbp+2Fh]
  __int64 v92; // [rsp+C0h] [rbp+37h]
  __int64 v93; // [rsp+C8h] [rbp+3Fh]
  __int64 v94; // [rsp+D0h] [rbp+47h]
  __int64 v95; // [rsp+D8h] [rbp+4Fh]
  __int64 savedregs; // [rsp+E0h] [rbp+57h]

  v0 = &dword_140404A6C[71856287];
  v1 = 256;
  do
  {
    if ( *(v0 - 34) && (int)*v0 > 0 )
      --*v0;
    v0 += 3597;
    --v1;
  }
  while ( v1 );
  switch ( dword_140404A6C[283831448] )
  {
    case 1u:
      v2 = &dword_140404A6C[71859139];
      v3 = 1;
      v4 = 0;
      v5 = &dword_140404A6C[71859139];
      v6 = 256;
      do
      {
        if ( *(v5 - 2886) && !*v5 )
        {
          if ( *(v5 - 2853) <= 1 )
            ++v4;
          if ( !*(v5 - 2868) )
            v3 = 0;
        }
        v5 += 3597;
        --v6;
      }
      while ( v6 );
      v7 = --dword_140404A6C[283831450];
      if ( v3 )
      {
        if ( v7 > 60 )
          v7 = 60;
        dword_140404A6C[283831450] = v7;
      }
      if ( !v4 )
      {
        dword_140404A6C[283831450] = 1800;
        return MEMORY[0x1401F8B20]((unsigned __int64)&v72 ^ v79);
      }
      if ( v7 > 0 )
        return MEMORY[0x1401F8B20]((unsigned __int64)&v72 ^ v79);
      for ( i = 0; i < 256; ++i )
      {
        if ( *(v2 - 2886) )
        {
          if ( !*v2 && *(v2 - 2847) == -1 )
          {
            v9 = (int)*(v2 - 2853);
            if ( (_DWORD)v9 != -1 && (int)v9 < 2 )
            {
              v10 = *(float *)&dword_140404A6C[5873 * v9 + 283831501];
              v11 = *(float *)&dword_140404A6C[5873 * v9 + 283831502];
              v12 = *(float *)&dword_140404A6C[5873 * v9 + 283831503];
              v73 = (float)((float)((unsigned __int8)rand() - 127) * 0.0234375) + v10;
              v13 = (unsigned __int8)rand();
              v14 = (int)*(v2 - 2853);
              v78 = 1065353216;
              v74 = v11 - 0.25;
              v15 = *(float *)&dword_140404A6C[5873 * v14 + 283831497];
              v75 = (float)((float)(v13 - 127) * 0.0234375) + v12;
              v16 = v15 + 1.5707964;
              v76 = xmmword_140278D30;
              v77 = xmmword_140278D30;
              sub_14007B2A0((__int64)&v76, (float *)&v76 + 3);
              v17 = (int)v2[683] <= 2;
              v18 = *(v2 - 2853);
              v2[682] = 1;
              if ( v17 )
                v2[683] = v18;
              if ( v18 )
              {
                if ( v18 == 1 )
                {
                  v2[684] = 9;
                }
                else if ( v18 == 2 )
                {
                  v2[684] = 8;
                }
              }
              else
              {
                v2[684] = 2;
              }
              v19 = sub_140053840(&v73, (float *)&v76, i);
              *(v2 - 2847) = v19;
              *(v2 - 2797) = 0;
              *(float *)&dword_140404A6C[7166 * v19 + 280651341] = v16;
              sub_140051DC0(i);
              sub_140117020((unsigned int)i);
            }
          }
        }
        v2 += 3597;
      }
      v20 = (v4 >> 2) + 2;
      v78 = 1065353216;
      if ( v20 > 12 )
        v20 = 12;
      v21 = (float)(*(float *)&dword_140404A6C[283837376] + *(float *)&dword_140404A6C[283831503]) * 0.5;
      v73 = (float)(*(float *)&dword_140404A6C[283837374] + *(float *)&dword_140404A6C[283831501]) * 0.5;
      v74 = (float)(*(float *)&dword_140404A6C[283837375] + *(float *)&dword_140404A6C[283831502]) * 0.5;
      v76 = xmmword_140278D30;
      v77 = xmmword_140278D30;
      if ( dword_140404A6C[283831446] == 5 )
        v20 *= 2;
      if ( v20 <= 18 )
      {
        v22 = v21 - (float)((float)v20 * 0.3125);
        v75 = v22;
        if ( v20 < 0 )
        {
LABEL_50:
          dword_140404A6C[283831448] = 2;
          dword_140404A6C[283831450] = 3600 * dword_140404A6C[284022501];
          return MEMORY[0x1401F8B20]((unsigned __int64)&v72 ^ v79);
        }
      }
      else
      {
        v22 = v21 - 5.625;
        v20 = 18;
        v75 = v22;
      }
      v23 = (unsigned int)(v20 + 1);
      do
      {
        v24 = (int)sub_140054130(15, (unsigned int *)&v73, nullptr, (unsigned int *)&v76);
        v25 = 1760 * v24;
        dword_140404A6C[v25 + 278845898] = 16;
        v26 = sub_140054130(17, (unsigned int *)&v73, nullptr, (unsigned int *)&v76);
        sub_1400E35D0(v24, v26, -1, 0);
        v27 = sub_140054130(17, (unsigned int *)&v73, nullptr, (unsigned int *)&v76);
        sub_1400E35D0(v24, v27, -1, 0);
        v28 = sub_140054130(17, (unsigned int *)&v73, nullptr, (unsigned int *)&v76);
        sub_1400E35D0(v24, v28, -1, 0);
        v29 = sub_140054130(17, (unsigned int *)&v73, nullptr, (unsigned int *)&v76);
        sub_1400E35D0(v24, v29, -1, 0);
        v30 = dword_140404A6C[456202453] == 0;
        dword_140404A6C[v25 + 278845898] = 15;
        if ( !v30 && (unsigned int)v24 <= 0x3FF )
          ++dword_140404A6C[v24 + 280648157];
        v22 = v22 + 0.625;
        v75 = v22;
        --v23;
      }
      while ( v23 );
      goto LABEL_50;
    case 2u:
      v31 = 1;
      ++dword_140404A6C[283831451];
      v32 = dword_140404A6C[284022499];
      v33 = --dword_140404A6C[283831450];
      if ( dword_140404A6C[284022499] )
      {
        v34 = 0;
        v35 = &dword_140404A6C[71859139];
        do
        {
          if ( *(v35 - 2886) )
          {
            if ( !*v35 && *(v35 - 2847) == -1 )
            {
              v36 = (int)*(v35 - 2853);
              if ( (_DWORD)v36 != -1 && (int)v36 < 2 )
              {
                v37 = *(float *)&dword_140404A6C[5873 * v36 + 283831501];
                v38 = *(float *)&dword_140404A6C[5873 * v36 + 283831502];
                v39 = *(float *)&dword_140404A6C[5873 * v36 + 283831503];
                v73 = (float)((float)((unsigned __int8)rand() - 127) * 0.0234375) + v37;
                v40 = (unsigned __int8)rand();
                v41 = (int)*(v35 - 2853);
                v78 = 1065353216;
                v74 = v38 - 0.25;
                v42 = *(float *)&dword_140404A6C[5873 * v41 + 283831497];
                v75 = (float)((float)(v40 - 127) * 0.0234375) + v39;
                v43 = v42 + 1.5707964;
                v76 = xmmword_140278D30;
                v77 = xmmword_140278D30;
                sub_14007B2A0((__int64)&v76, (float *)&v76 + 3);
                v17 = (int)v35[683] <= 2;
                v44 = *(v35 - 2853);
                v35[682] = 1;
                if ( v17 )
                  v35[683] = v44;
                if ( v44 )
                {
                  if ( v44 == 1 )
                  {
                    v35[684] = 9;
                  }
                  else if ( v44 == 2 )
                  {
                    v35[684] = 8;
                  }
                }
                else
                {
                  v35[684] = 2;
                }
                v45 = sub_140053840(&v73, (float *)&v76, v34);
                *(v35 - 2847) = v45;
                *(v35 - 2797) = 0;
                *(v35 - 2860) = 0;
                *(float *)&dword_140404A6C[7166 * v45 + 280651341] = v43;
                sub_140051DC0(v34);
              }
            }
          }
          ++v34;
          v35 += 3597;
        }
        while ( v34 < 256 );
        v32 = dword_140404A6C[284022499];
        v33 = dword_140404A6C[283831450];
      }
      v46 = 1;
      v47 = (float *)&dword_140404A6C[278845916];
      do
      {
        if ( *((_DWORD *)v47 - 23) && *((_DWORD *)v47 - 18) == 17 )
        {
          v48 = *v47;
          v49 = (float *)&dword_140404A6C[283831494];
          while ( 1 )
          {
            if ( v48 >= *(v49 - 3) && v48 < *v49 )
            {
              v50 = v47[1];
              if ( v50 >= *(v49 - 2) && v50 < v49[1] )
              {
                v51 = v47[2];
                if ( v51 >= *(v49 - 1) && v51 < v49[2] )
                  break;
              }
            }
            v49 += 5873;
            if ( (__int64)v49 >= (__int64)&dword_140404A6C[283843240] )
            {
              v46 = 0;
              break;
            }
          }
        }
        v47 += 1760;
      }
      while ( (__int64)v47 < (__int64)&dword_140404A6C[280648156] );
      if ( v46 )
      {
        v33 -= 5;
        dword_140404A6C[283831450] = v33;
      }
      v52 = 0;
      v53 = &v76;
      for ( j = 0; j < 2; ++j )
      {
        v55 = 0;
        *(_DWORD *)v53 = 0;
        v56 = &dword_140404A6C[71859139];
        do
        {
          if ( *(v56 - 2886) )
          {
            if ( !*v56 && *(v56 - 2853) == j )
            {
              v52 |= 1 << j;
              if ( *(v56 - 2847) != -1 )
                *(_DWORD *)v53 = ++v55;
            }
          }
          v56 += 3597;
        }
        while ( (__int64)v56 < (__int64)&dword_140404A6C[72779971] );
        v53 = (__int128 *)((char *)v53 + 4);
      }
      if ( v32 )
        goto LABEL_105;
      if ( (unsigned int)(v52 - 1) <= 1 && ((int)v76 > 0 || SDWORD1(v76) > 0) )
        v31 = 0;
      if ( v52 == 3 && (int)v76 > 0 && SDWORD1(v76) > 0 || !v31 || v33 <= 60 )
      {
LABEL_105:
        if ( v33 <= 0 )
        {
          sub_1400F5480();
          dword_140404A6C[283831448] = 3;
          dword_140404A6C[283831450] = 720;
        }
      }
      else
      {
        dword_140404A6C[283831450] = 60;
      }
      break;
    case 3u:
      if ( (int)--dword_140404A6C[283831450] <= 0 )
      {
        v57 = 0;
        v58 = &dword_140404A6C[71856289];
        v59 = &dword_140404A6C[72777121];
        do
        {
          if ( *(v58 - 36) )
            *v58 = 0;
          if ( v58[3561] )
            v58[3597] = 0;
          v58 += 7194;
        }
        while ( (__int64)v58 < (__int64)&dword_140404A6C[72777121] );
        v60 = 0;
        v61 = &dword_140404A6C[283831510];
        do
        {
          v62 = -1;
          v63 = &dword_140404A6C[71856286];
          v64 = -1;
          v65 = 0;
          LODWORD(v66) = 0;
          v67 = 0;
          do
          {
            if ( *(v63 - 33) )
            {
              if ( *v63 == v60 )
              {
                v68 = (int)*(v63 - 18);
                if ( (_DWORD)v68 != -1 )
                {
                  LODWORD(v59) = 112 * v68;
                  v69 = dword_140404A6C[28 * v68 + 134050374];
                  if ( v65 < v69 )
                  {
                    v62 = v66;
                    v64 = v67;
                    v65 = v69;
                  }
                }
              }
            }
            v66 = (unsigned int)(v66 + 1);
            ++v67;
            v63 += 3597;
          }
          while ( (int)v66 < 256 );
          if ( v62 != -1 )
            dword_140404A6C[3597 * v64 + 71856289] = 1;
          if ( *v61 != v62 )
          {
            *v61 = v62;
            v61[5654] = 0;
          }
          ++v60;
          v61 += 5873;
        }
        while ( (__int64)v61 < (__int64)&dword_140404A6C[283843256] );
        v70 = &dword_140404A6C[71859139];
        do
        {
          if ( *(v70 - 2886) && !*v70 )
            sub_140117340((unsigned int)v57, v63, v66);
          ++v57;
          v70 += 3597;
        }
        while ( v57 < 256 );
        sub_140127910(
          (_DWORD)v59,
          (_DWORD)v63,
          v66,
          v67,
          LODWORD(v73),
          LODWORD(v75),
          v76,
          DWORD2(v76),
          v77,
          DWORD2(v77),
          v78,
          v79,
          v80,
          v81,
          v82,
          v83,
          v84,
          v85,
          v86,
          v87,
          v88,
          v89,
          v90,
          v91,
          v92,
          v93,
          v94,
          v95,
          savedregs);
      }
      break;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v72 ^ v79);
}

