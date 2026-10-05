/* Address: 0x1400f3e60 | Name: sub_1400F3E60 | Size: 1844 bytes */
__int64 sub_1400F3E60()
{
  int v0; // edi
  int v1; // r10d
  int *v2; // r8
  int v3; // r9d
  int i; // edx
  int v5; // ecx
  unsigned int *v6; // rax
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rsi
  unsigned int v12; // ebp
  __int64 v13; // r8
  unsigned int *v14; // rax
  int v15; // r11d
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  __int64 v23; // r9
  int *v24; // rcx
  __int64 v25; // rax
  float v26; // xmm4_4
  float v27; // xmm0_4
  float v28; // xmm2_4
  float v29; // xmm0_4
  float v30; // xmm3_4
  float v31; // xmm1_4
  __int64 v32; // rax
  float v33; // xmm0_4
  float v34; // xmm0_4
  __int64 v35; // rax
  float v36; // xmm4_4
  float v37; // xmm0_4
  float v38; // xmm2_4
  float v39; // xmm0_4
  float v40; // xmm3_4
  float v41; // xmm1_4
  __int64 v42; // rax
  float v43; // xmm0_4
  float v44; // xmm0_4
  __int64 v45; // rax
  float v46; // xmm4_4
  float v47; // xmm0_4
  float v48; // xmm2_4
  float v49; // xmm0_4
  float v50; // xmm3_4
  float v51; // xmm1_4
  __int64 v52; // rax
  float v53; // xmm0_4
  float v54; // xmm0_4
  __int64 v55; // rax
  float v56; // xmm4_4
  float v57; // xmm0_4
  float v58; // xmm2_4
  float v59; // xmm0_4
  float v60; // xmm3_4
  float v61; // xmm1_4
  __int64 v62; // rax
  float v63; // xmm0_4
  float v64; // xmm0_4
  unsigned int *v65; // r9
  __int64 v66; // r10
  int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // r8
  float v70; // xmm0_4
  unsigned int *v71; // rdx
  unsigned int *v72; // rbx
  __int64 v74; // [rsp+0h] [rbp-E8h] BYREF
  int v75; // [rsp+20h] [rbp-C8h]
  int v76; // [rsp+24h] [rbp-C4h]
  int v77; // [rsp+28h] [rbp-C0h]
  int v78; // [rsp+40h] [rbp-A8h] BYREF
  int v79; // [rsp+44h] [rbp-A4h]
  int v80; // [rsp+48h] [rbp-A0h]
  __int64 v81; // [rsp+60h] [rbp-88h]

  v0 = 0;
  if ( dword_140404A6C[284022483] )
  {
    v1 = 256;
    v2 = &v78;
    v3 = 0;
    for ( i = 0; i < 3; ++i )
    {
      v5 = 0;
      *v2 = 0;
      v6 = &dword_140404A6C[71859139];
      do
      {
        if ( *(v6 - 2886) && !*v6 && *(v6 - 2853) == i )
          *v2 = ++v5;
        v6 += 3597;
      }
      while ( (__int64)v6 < (__int64)&dword_140404A6C[72779971] );
      if ( v5 > 0 )
      {
        v7 = v5;
        if ( v3 >= v5 )
          v7 = v3;
        v3 = v7;
        if ( v1 > v5 )
          v1 = v5;
      }
      ++v2;
    }
    v8 = 1;
    if ( v78 <= 0 )
      v75 = 1;
    else
      v75 = v78 / v1;
    if ( v79 <= 0 )
      v9 = 1;
    else
      v9 = v79 / v1;
    v76 = v9;
    if ( v80 > 0 )
      v8 = v80 / v1;
  }
  else
  {
    v8 = 1;
    v75 = 1;
    v76 = 1;
  }
  v10 = 0;
  v11 = 0;
  v12 = dword_140404A6C[283831441];
  v77 = v8;
  do
  {
    v13 = 5873 * v11;
    v14 = &dword_140404A6C[278847678];
    v15 = dword_140404A6C[5873 * v11 + 283831504];
    do
    {
      if ( *(v14 - 1785) )
      {
        if ( *(v14 - 1780) == 17 )
        {
          v16 = *((float *)v14 - 1762);
          if ( v16 >= *(float *)&dword_140404A6C[v13 + 283831485] && v16 < *(float *)&dword_140404A6C[v13 + 283831488] )
          {
            v17 = *((float *)v14 - 1760);
            if ( v17 >= *(float *)&dword_140404A6C[v13 + 283831487] && v17 < *(float *)&dword_140404A6C[v13 + 283831490] )
              v15 += 250;
          }
        }
      }
      if ( *(v14 - 25) )
      {
        if ( *(v14 - 20) == 17 )
        {
          v18 = *((float *)v14 - 2);
          if ( v18 >= *(float *)&dword_140404A6C[v13 + 283831485]
            && v18 < *(float *)&dword_140404A6C[v13 + 283831488]
            && *(float *)v14 >= *(float *)&dword_140404A6C[v13 + 283831487]
            && *(float *)v14 < *(float *)&dword_140404A6C[v13 + 283831490] )
          {
            v15 += 250;
          }
        }
      }
      if ( v14[1735] )
      {
        if ( v14[1740] == 17 )
        {
          v19 = *((float *)v14 + 1758);
          if ( v19 >= *(float *)&dword_140404A6C[v13 + 283831485] && v19 < *(float *)&dword_140404A6C[v13 + 283831488] )
          {
            v20 = *((float *)v14 + 1760);
            if ( v20 >= *(float *)&dword_140404A6C[v13 + 283831487] && v20 < *(float *)&dword_140404A6C[v13 + 283831490] )
              v15 += 250;
          }
        }
      }
      if ( v14[3495] )
      {
        if ( v14[3500] == 17 )
        {
          v21 = *((float *)v14 + 3518);
          if ( v21 >= *(float *)&dword_140404A6C[v13 + 283831485] && v21 < *(float *)&dword_140404A6C[v13 + 283831488] )
          {
            v22 = *((float *)v14 + 3520);
            if ( v22 >= *(float *)&dword_140404A6C[v13 + 283831487] && v22 < *(float *)&dword_140404A6C[v13 + 283831490] )
              v15 += 250;
          }
        }
      }
      v14 += 7040;
    }
    while ( (__int64)v14 < (__int64)&dword_140404A6C[280649918] );
    v23 = 4;
    v24 = (int *)&dword_140404A6C[v13 + 283831592];
    do
    {
      if ( *(v24 - 4) )
      {
        v25 = *v24;
        if ( (_DWORD)v25 != -1 )
        {
          v26 = *(float *)&dword_140404A6C[v13 + 283831485];
          v27 = *(float *)&dword_140404A6C[1760 * v25 + 278845916];
          if ( v27 >= v26 )
          {
            v28 = *(float *)&dword_140404A6C[v13 + 283831488];
            if ( v27 < v28 )
            {
              v29 = *(float *)&dword_140404A6C[1760 * v25 + 278845918];
              v30 = *(float *)&dword_140404A6C[v13 + 283831487];
              if ( v29 >= v30 )
              {
                v31 = *(float *)&dword_140404A6C[v13 + 283831490];
                if ( v29 < v31 )
                {
                  if ( (unsigned int)(*(v24 - 1) - 7) > 2
                    || (v32 = v24[1], (_DWORD)v32 == -1)
                    || (v33 = *(float *)&dword_140404A6C[1760 * v32 + 278845916], v33 >= v26)
                    && v33 < v28
                    && (v34 = *(float *)&dword_140404A6C[1760 * v32 + 278845918], v34 >= v30)
                    && v34 < v31 )
                  {
                    v15 += v24[12];
                  }
                }
              }
            }
          }
        }
      }
      if ( v24[275] )
      {
        v35 = v24[279];
        if ( (_DWORD)v35 != -1 )
        {
          v36 = *(float *)&dword_140404A6C[v13 + 283831485];
          v37 = *(float *)&dword_140404A6C[1760 * v35 + 278845916];
          if ( v37 >= v36 )
          {
            v38 = *(float *)&dword_140404A6C[v13 + 283831488];
            if ( v37 < v38 )
            {
              v39 = *(float *)&dword_140404A6C[1760 * v35 + 278845918];
              v40 = *(float *)&dword_140404A6C[v13 + 283831487];
              if ( v39 >= v40 )
              {
                v41 = *(float *)&dword_140404A6C[v13 + 283831490];
                if ( v39 < v41 )
                {
                  if ( (unsigned int)(v24[278] - 7) > 2
                    || (v42 = v24[280], (_DWORD)v42 == -1)
                    || (v43 = *(float *)&dword_140404A6C[1760 * v42 + 278845916], v43 >= v36)
                    && v43 < v38
                    && (v44 = *(float *)&dword_140404A6C[1760 * v42 + 278845918], v44 >= v40)
                    && v44 < v41 )
                  {
                    v15 += v24[291];
                  }
                }
              }
            }
          }
        }
      }
      if ( v24[554] )
      {
        v45 = v24[558];
        if ( (_DWORD)v45 != -1 )
        {
          v46 = *(float *)&dword_140404A6C[v13 + 283831485];
          v47 = *(float *)&dword_140404A6C[1760 * v45 + 278845916];
          if ( v47 >= v46 )
          {
            v48 = *(float *)&dword_140404A6C[v13 + 283831488];
            if ( v47 < v48 )
            {
              v49 = *(float *)&dword_140404A6C[1760 * v45 + 278845918];
              v50 = *(float *)&dword_140404A6C[v13 + 283831487];
              if ( v49 >= v50 )
              {
                v51 = *(float *)&dword_140404A6C[v13 + 283831490];
                if ( v49 < v51 )
                {
                  if ( (unsigned int)(v24[557] - 7) > 2
                    || (v52 = v24[559], (_DWORD)v52 == -1)
                    || (v53 = *(float *)&dword_140404A6C[1760 * v52 + 278845916], v53 >= v46)
                    && v53 < v48
                    && (v54 = *(float *)&dword_140404A6C[1760 * v52 + 278845918], v54 >= v50)
                    && v54 < v51 )
                  {
                    v15 += v24[570];
                  }
                }
              }
            }
          }
        }
      }
      if ( v24[833] )
      {
        v55 = v24[837];
        if ( (_DWORD)v55 != -1 )
        {
          v56 = *(float *)&dword_140404A6C[v13 + 283831485];
          v57 = *(float *)&dword_140404A6C[1760 * v55 + 278845916];
          if ( v57 >= v56 )
          {
            v58 = *(float *)&dword_140404A6C[v13 + 283831488];
            if ( v57 < v58 )
            {
              v59 = *(float *)&dword_140404A6C[1760 * v55 + 278845918];
              v60 = *(float *)&dword_140404A6C[v13 + 283831487];
              if ( v59 >= v60 )
              {
                v61 = *(float *)&dword_140404A6C[v13 + 283831490];
                if ( v59 < v61 )
                {
                  if ( (unsigned int)(v24[836] - 7) > 2
                    || (v62 = v24[838], (_DWORD)v62 == -1)
                    || (v63 = *(float *)&dword_140404A6C[1760 * v62 + 278845916], v63 >= v56)
                    && v63 < v58
                    && (v64 = *(float *)&dword_140404A6C[1760 * v62 + 278845918], v64 >= v60)
                    && v64 < v61 )
                  {
                    v15 += v24[849];
                  }
                }
              }
            }
          }
        }
      }
      v24 += 1116;
      --v23;
    }
    while ( v23 );
    v65 = &dword_140404A6C[71856272];
    v66 = 256;
    do
    {
      if ( *(v65 - 19) )
      {
        if ( v65[14] == v10 )
        {
          v67 = v15 / *(&v75 + v11);
          *v65 += v67 + 250;
          if ( v12 == 1 )
          {
            v68 = (int)*(v65 - 4);
            if ( (_DWORD)v68 != -1 )
              dword_140404A6C[28 * v68 + 134050374] += v67;
          }
        }
      }
      v65 += 3597;
      --v66;
    }
    while ( v66 );
    dword_140404A6C[v13 + 283831505] = v15;
    v69 = 3 * v11;
    v70 = (float)((float)((float)v15 * 0.000020000001) + 1.0) * *(float *)&dword_140404A6C[6 * v11 + 335047062];
    if ( v70 < 50.0 )
      v70 = 50.0;
    v12 = dword_140404A6C[283831441];
    *(float *)&dword_140404A6C[6 * v11 + 335047062] = v70;
    if ( v12 != 1 && v70 >= 500.0 )
    {
      v70 = v70 * 0.2;
      v71 = &dword_140404A6C[71856288];
      *(float *)&dword_140404A6C[6 * v11 + 335047062] = v70;
      do
      {
        if ( *(v71 - 35) && *(v71 - 2) == v10 )
          *v71 *= 5;
        v71 += 3597;
      }
      while ( (__int64)v71 < (__int64)&dword_140404A6C[72777120] );
    }
    ++v10;
    ++v11;
    dword_140404A6C[2 * v69 + 335047064] = (int)(float)(v70 * 10.0);
  }
  while ( v10 < 3 );
  sub_140052090();
  v72 = &dword_140404A6C[71856253];
  do
  {
    if ( *v72 )
      sub_140051F50((unsigned int)v0);
    ++v0;
    v72 += 3597;
  }
  while ( v0 < 256 );
  return MEMORY[0x1401F8B20]((unsigned __int64)&v74 ^ v81);
}

