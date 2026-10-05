/* Address: 0x1400fa3a0 | Name: sub_1400FA3A0 | Size: 3299 bytes */
__int64 sub_1400FA3A0()
{
  signed int v0; // r15d
  unsigned int *v1; // r12
  __int64 v2; // rdx
  __int64 v3; // rax
  signed int v4; // ecx
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r14
  unsigned int *v9; // rbp
  int v10; // eax
  unsigned int *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 result; // rax
  int v16; // ebx
  unsigned int *v17; // rdi
  int v18; // r15d
  __int64 v19; // rbx
  int i; // ebx
  signed int v21; // ebx
  unsigned int *v22; // rdi
  int *v23; // rsi
  int j; // ebx
  unsigned int *v25; // rbx
  int k; // edi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // r8d
  __int64 v32; // rdx
  unsigned int *v33; // rcx
  unsigned int *v34; // rbp
  int v35; // esi
  unsigned int *v36; // r14
  int v37; // edi
  unsigned int *v38; // rbx
  unsigned int *v39; // rbx
  __int64 v40; // rdi
  unsigned int *v41; // rcx
  __int64 v42; // rdx
  int v43; // eax
  int v44; // eax
  unsigned int *v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rax
  signed int v48; // r8d
  signed int v49; // edx
  unsigned int *v50; // rcx
  signed int v51; // r8d
  signed int v52; // edx
  unsigned int *v53; // rcx
  int v54; // eax
  signed int v55; // r8d
  int v56; // edx
  __int64 v57; // rax
  int v58; // eax
  signed int v59; // eax
  int v60; // eax
  unsigned int *v61; // rcx
  unsigned int v62[2]; // [rsp+20h] [rbp-98h] BYREF
  float v63; // [rsp+28h] [rbp-90h]
  _OWORD v64[2]; // [rsp+30h] [rbp-88h] BYREF
  int v65; // [rsp+50h] [rbp-68h]
  unsigned int v66; // [rsp+C0h] [rbp+8h]
  __int64 v67; // [rsp+C8h] [rbp+10h]

  v0 = dword_140404A6C[179992853];
  v1 = &dword_140404A6C[71856253];
  v2 = 256;
  v66 = dword_140404A6C[179992853];
  v67 = 256;
  do
  {
    if ( *v1 && v1[2886] )
    {
      v3 = (int)v1[39];
      if ( (_DWORD)v3 == -1 )
        *v1 = 0;
      v4 = v1[3513];
      if ( v4 && v0 > v4 )
      {
        if ( (_DWORD)v3 != -1 )
        {
          v5 = 7166 * v3;
          v6 = (int)dword_140404A6C[7166 * v3 + 280651313];
          if ( (_DWORD)v6 != -1 )
          {
            v7 = (int)dword_140404A6C[5210 * v6 + 129720183];
            if ( (_DWORD)v7 != -1 )
              *(_QWORD *)&dword_140404A6C[383 * v7 + 132400668] = 1;
          }
          v8 = 8;
          v9 = &dword_140404A6C[v5 + 280658140];
          do
          {
            v10 = *(v9 - 1);
            if ( v10 > 0 )
            {
              v11 = v9;
              v12 = (unsigned int)v10;
              do
              {
                v13 = (int)*v11;
                v14 = 1760 * v13;
                if ( (int)dword_140404A6C[1760 * v13 + 278845906] > 0 )
                {
                  dword_140404A6C[1760 * dword_140404A6C[v14 + 278845907] + 278845900] = 0;
                  sub_1400CA9B0(dword_140404A6C[v14 + 278845907], v13);
                }
                ++v11;
                dword_140404A6C[v14 + 278845900] = 0;
                --v12;
              }
              while ( v12 );
            }
            v9 += 10;
            --v8;
          }
          while ( v8 );
          v2 = v67;
          dword_140404A6C[v5 + 280651317] = 0;
          dword_140404A6C[v5 + 280651305] = -1;
          v0 = v66;
        }
        *v1 = 0;
      }
    }
    v1 += 3597;
    v67 = --v2;
  }
  while ( v2 );
  result = dword_140404A6C[283831448];
  if ( dword_140404A6C[283831448] == 1 )
  {
    dword_140404A6C[283831450] = dword_140404A6C[283831453];
    dword_140404A6C[283831448] = 2;
    dword_140404A6C[179992853] = 1728000;
    dword_140404A6C[179992854] = 10;
    sub_140061950();
    sub_14012E960(dword_140404A6C[284022485]);
    v16 = 0;
    if ( (int)dword_140404A6C[225641186] > 0 )
    {
      v17 = &dword_140404A6C[225641203];
      do
      {
        if ( *v17 == 4 )
          sub_140195480(v16, 0);
        ++v16;
        v17 += 14019;
      }
      while ( v16 < (int)dword_140404A6C[225641186] );
    }
    v0 = dword_140404A6C[179992853];
    result = dword_140404A6C[283831448];
    v62[0] = dword_140404A6C[179992855];
    v63 = *(float *)&dword_140404A6C[179992857];
    *(_QWORD *)&dword_140404A6C[188872237] = 0;
    dword_140404A6C[188872240] = 0;
    *(_QWORD *)&dword_140404A6C[188872242] = 0;
    dword_140404A6C[188872245] = 0;
    *(_QWORD *)&dword_140404A6C[188872247] = 0;
    dword_140404A6C[188872250] = 0;
    *(_QWORD *)&dword_140404A6C[188872252] = 0;
    dword_140404A6C[188872255] = 0;
    *(_QWORD *)&dword_140404A6C[188872257] = 0;
    dword_140404A6C[188872260] = 0;
    *(_QWORD *)&dword_140404A6C[188872262] = 0;
    dword_140404A6C[188872265] = 0;
  }
  if ( (_DWORD)result == 2 )
  {
    v18 = dword_140404A6C[179992854] + v0;
    dword_140404A6C[179992853] = v18;
    if ( v18 == 1728060 )
    {
      MEMORY[0x1401FCD30](&dword_140404A6C[485542517], 0, 2048);
      v19 = 7;
      dword_140404A6C[180001067] = rand() % 7;
      do
      {
        sub_140194D40();
        --v19;
      }
      while ( v19 );
      sub_140195970();
      v18 = dword_140404A6C[179992853];
    }
    if ( v18 == 54000 * (v18 / 54000) && v18 < 3672000 )
    {
      for ( i = 0; i < 6; ++i )
        sub_1401949C0((unsigned int)i);
      v21 = 0;
      v22 = &dword_140404A6C[188872240];
      v23 = (int *)&dword_140404A6C[283831506];
      do
      {
        if ( *v23 > 0 )
        {
          if ( (int)*v22 <= 0 )
            sub_14012EB50(v21);
          else
            --*v22;
        }
        ++v21;
        v23 += 5873;
        v22 += 5;
      }
      while ( v21 < 6 );
      v18 = dword_140404A6C[179992853];
    }
    if ( v18 < 4104000 )
    {
      v31 = 0;
      if ( (int)dword_140404A6C[225641186] > 0 )
      {
        v32 = 0;
        v33 = &dword_140404A6C[225654128];
        do
        {
          if ( *(v33 - 12925) == 9 )
          {
            *(_QWORD *)v33 = 0;
            dword_140404A6C[3 * v32 + 225654130] = 20;
            ++*v33;
          }
          ++v31;
          v32 += 4673;
          v33 += 14019;
        }
        while ( v31 < (int)dword_140404A6C[225641186] );
      }
      v34 = &dword_140404A6C[283831605];
      v35 = 0;
      v36 = &dword_140404A6C[335047064];
      do
      {
        v37 = 0;
        v38 = v34;
        *v36 = (int)(float)(*((float *)v36 - 2) * 10.0);
        do
        {
          if ( *(v38 - 17) )
          {
            if ( !*(v38 - 16) && v18 == *v38 )
            {
              sub_1401300C0(*(v38 - 15));
              if ( !*(v38 - 16) )
              {
                sub_1400F50D0(v35, v37, 0, 0);
                v18 = dword_140404A6C[179992853];
              }
            }
          }
          ++v37;
          v38 += 279;
        }
        while ( v37 < 16 );
        ++v35;
        v36 += 6;
        v34 += 5873;
      }
      while ( v35 < 6 );
      v39 = &dword_140404A6C[71856268];
      v40 = 256;
      if ( v18 == 18000 * (v18 / 18000) )
      {
        v41 = &dword_140404A6C[280651311];
        v42 = 256;
        do
        {
          if ( *(v41 - 8) )
          {
            v43 = *(v41 - 3);
            if ( v43 > 0 )
              *(v41 - 3) = v43 - 1;
            if ( (int)*v41 > 7 )
            {
              v44 = *v41 - 1;
              *v41 = v44;
              if ( v44 > 7 )
                *v41 = v44 - 1;
            }
          }
          v41 += 7166;
          --v42;
        }
        while ( v42 );
        sub_14008C030();
        sub_14008C310();
        sub_14012C480();
        v45 = &dword_140404A6C[71856268];
        v46 = 256;
        do
        {
          if ( *(v45 - 15) )
          {
            v47 = (int)*v45;
            if ( (_DWORD)v47 != -1 )
              dword_140404A6C[28 * v47 + 134050378] += 5;
          }
          v45 += 3597;
          --v46;
        }
        while ( v46 );
        v48 = dword_140404A6C[134050358];
        v49 = 0;
        if ( (int)dword_140404A6C[134050358] > 0 )
        {
          v50 = &dword_140404A6C[134050373];
          do
          {
            if ( (int)*v50 > 0 )
            {
              --*v50;
              v48 = dword_140404A6C[134050358];
            }
            ++v49;
            v50 += 28;
          }
          while ( v49 < v48 );
        }
        sub_140132B00();
        sub_140052090();
        v18 = dword_140404A6C[179992853];
      }
      if ( v18 == 54000 * (v18 / 54000) )
      {
        v51 = dword_140404A6C[134050358];
        v52 = 0;
        if ( (int)dword_140404A6C[134050358] > 0 )
        {
          v53 = &dword_140404A6C[134050376];
          do
          {
            if ( (int)*v53 > 0 )
            {
              v54 = *v53 - 16;
              if ( v54 < 0 )
                v54 = 0;
              *v53 = v54;
              v51 = dword_140404A6C[134050358];
            }
            ++v52;
            v53 += 28;
          }
          while ( v52 < v51 );
        }
        v55 = dword_140404A6C[284022492];
        dword_140404A6C[188872241] = 0;
        dword_140404A6C[188872246] = 0;
        dword_140404A6C[188872251] = 0;
        dword_140404A6C[188872256] = 0;
        dword_140404A6C[188872261] = 0;
        dword_140404A6C[188872266] = 0;
        dword_140404A6C[188872271] = 0;
        dword_140404A6C[188872276] = 0;
        dword_140404A6C[188872281] = 0;
        dword_140404A6C[188872286] = 0;
        dword_140404A6C[188872291] = 0;
        dword_140404A6C[188872296] = 0;
        dword_140404A6C[188872301] = 0;
        dword_140404A6C[188872306] = 0;
        dword_140404A6C[188872311] = 0;
        dword_140404A6C[188872316] = 0;
        dword_140404A6C[188872321] = 0;
        dword_140404A6C[188872326] = 0;
        dword_140404A6C[188872331] = 0;
        dword_140404A6C[188872336] = 0;
        dword_140404A6C[188872341] = 0;
        dword_140404A6C[188872346] = 0;
        dword_140404A6C[188872351] = 0;
        dword_140404A6C[188872356] = 0;
        dword_140404A6C[188872361] = 0;
        dword_140404A6C[188872366] = 0;
        dword_140404A6C[188872371] = 0;
        dword_140404A6C[188872376] = 0;
        dword_140404A6C[188872381] = 0;
        dword_140404A6C[188872386] = 0;
        dword_140404A6C[188872391] = 0;
        dword_140404A6C[188872396] = 0;
        dword_140404A6C[188872401] = 0;
        dword_140404A6C[188872406] = 0;
        dword_140404A6C[188872411] = 0;
        dword_140404A6C[188872416] = 0;
        dword_140404A6C[188872421] = 0;
        dword_140404A6C[188872426] = 0;
        dword_140404A6C[188872431] = 0;
        dword_140404A6C[188872436] = 0;
        dword_140404A6C[188872441] = 0;
        dword_140404A6C[188872446] = 0;
        dword_140404A6C[188872451] = 0;
        dword_140404A6C[188872456] = 0;
        dword_140404A6C[188872461] = 0;
        dword_140404A6C[188872466] = 0;
        dword_140404A6C[188872471] = 0;
        dword_140404A6C[188872476] = 0;
        dword_140404A6C[188872481] = 0;
        dword_140404A6C[188872486] = 0;
        dword_140404A6C[188872491] = 0;
        dword_140404A6C[188872496] = 0;
        dword_140404A6C[188872501] = 0;
        dword_140404A6C[188872506] = 0;
        dword_140404A6C[188872511] = 0;
        dword_140404A6C[188872516] = 0;
        dword_140404A6C[188872521] = 0;
        dword_140404A6C[188872526] = 0;
        dword_140404A6C[188872531] = 0;
        dword_140404A6C[188872536] = 0;
        dword_140404A6C[188872541] = 0;
        dword_140404A6C[188872546] = 0;
        dword_140404A6C[188872551] = 0;
        dword_140404A6C[188872556] = 0;
        do
        {
          v56 = v39[8];
          if ( v56 > 0 && v39[24] != -1 )
          {
            v57 = (int)*v39;
            if ( (_DWORD)v57 != -1 )
              dword_140404A6C[28 * v57 + 134050376] += 8;
          }
          v58 = v39[12];
          v39[11] = 0;
          if ( v58 > 0 )
            v39[12] = v58 - 1;
          v39[13] = 0;
          if ( v56 > 0 )
            v39[8] = --v56;
          if ( v56 >= v55 )
          {
            v39[11] = 100;
            v39[12] = 4;
          }
          v39 += 3597;
          --v40;
        }
        while ( v40 );
      }
      if ( (int)dword_140404A6C[284023071] < 8 )
      {
        do
        {
          v62[1] = dword_140404A6C[179992856];
          v64[0] = xmmword_140278D30;
          v65 = 1065353216;
          v63 = *(float *)&dword_140404A6C[179992857] + 1.0;
          *(float *)v62 = *(float *)&dword_140404A6C[179992855] + -4.0;
          v64[1] = xmmword_140278D30;
          v59 = sub_140054130(29, v62, nullptr, (unsigned int *)v64);
          if ( v59 == -1 )
          {
            v60 = dword_140404A6C[284023071];
          }
          else
          {
            sub_1400584B0(v59, (__int64)&dword_140404A6C[283785646]);
            v60 = ++dword_140404A6C[284023071];
          }
        }
        while ( v60 < 8 );
      }
      result = (__int64)&dword_140404A6C[71859139];
      do
      {
        if ( *(_DWORD *)(result - 11544) && !*(_DWORD *)result && *(_DWORD *)(result - 11388) == -1 )
          *(_DWORD *)(result - 11188) = 1;
        result += 14388;
      }
      while ( result < (__int64)&dword_140404A6C[72779971] );
      v61 = &dword_140404A6C[283831592];
      do
      {
        if ( *(v61 - 4) )
        {
          result = (int)*v61;
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[275] )
        {
          result = (int)v61[279];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[554] )
        {
          result = (int)v61[558];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[833] )
        {
          result = (int)v61[837];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[1112] )
        {
          result = (int)v61[1116];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[1391] )
        {
          result = (int)v61[1395];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[1670] )
        {
          result = (int)v61[1674];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[1949] )
        {
          result = (int)v61[1953];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[2228] )
        {
          result = (int)v61[2232];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[2507] )
        {
          result = (int)v61[2511];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[2786] )
        {
          result = (int)v61[2790];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[3065] )
        {
          result = (int)v61[3069];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[3344] )
        {
          result = (int)v61[3348];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[3623] )
        {
          result = (int)v61[3627];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[3902] )
        {
          result = (int)v61[3906];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[4181] )
        {
          result = (int)v61[4185];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        v61 += 5873;
      }
      while ( (__int64)v61 < (__int64)&dword_140404A6C[283866830] );
    }
    else
    {
      for ( j = 0; j < 6; ++j )
        sub_140194C10(j);
      dword_140404A6C[179992861] = 0;
      v25 = &dword_140404A6C[71859846];
      for ( k = 0; k < 256; ++k )
      {
        if ( *(v25 - 3593) )
        {
          sub_140117340(k);
          v27 = (int)*(v25 - 3554);
          if ( (_DWORD)v27 == -1 )
          {
            *(v25 - 3) = 0;
          }
          else
          {
            *(v25 - 3) = 1;
            *(v25 - 2) = dword_140404A6C[7166 * v27 + 280651440];
            *(v25 - 1) = dword_140404A6C[7166 * v27 + 280651441];
            *v25 = dword_140404A6C[7166 * v27 + 280651442];
            v25[1] = dword_140404A6C[7166 * v27 + 280651490];
            v25[2] = dword_140404A6C[7166 * v27 + 280651313];
            v25[3] = dword_140404A6C[7166 * v27 + 280651314];
          }
        }
        v25 += 3597;
      }
      sub_14012C480();
      return sub_140127910(v29, v28, v30);
    }
  }
  return result;
}

