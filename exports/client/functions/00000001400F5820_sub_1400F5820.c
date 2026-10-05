/* Address: 0x1400f5820 | Name: sub_1400F5820 | Size: 826 bytes */
unsigned int *__fastcall sub_1400F5820(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int *v6; // rdi
  signed int v7; // ebx
  __int64 v8; // rbp
  unsigned int v9; // ebx
  unsigned int *v10; // rdi
  signed int i; // esi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int *result; // rax
  unsigned int *v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx

  v4 = dword_140404A6C[283831448];
  if ( dword_140404A6C[283831448] == 2 )
  {
    sub_14018A3E0();
    sub_140008020();
    v4 = dword_140404A6C[283831448];
  }
  if ( !dword_140404A6C[283831312] && v4 == 1 )
  {
    if ( (int)dword_140404A6C[283831450] <= 0 )
    {
      v5 = dword_140404A6C[283831453];
      dword_140404A6C[283831448] = 2;
    }
    else
    {
      v5 = dword_140404A6C[283831450] - 1;
    }
    dword_140404A6C[283831450] = v5;
  }
  v6 = &dword_140404A6C[71856253];
  v7 = 0;
  v8 = 256;
  do
  {
    if ( *v6 )
      sub_1400F1950(v7, a2, a3, a4);
    ++v7;
    v6 += 3597;
  }
  while ( v7 < 256 );
  v9 = dword_140404A6C[283831312];
  v10 = &dword_140404A6C[71856342];
  for ( i = 0; i < 256; ++i )
  {
    if ( *(v10 - 89) )
    {
      if ( *(v10 - 50) == -1 )
      {
        if ( v9 - 2 <= 1 || v9 - 5 <= 2 )
        {
          v12 = 0;
          if ( dword_140404A6C[283831448] == 1 )
            v12 = 2;
          *v10 = v12;
        }
      }
      else
      {
        sub_1400F0640(i);
        v9 = dword_140404A6C[283831312];
      }
    }
    v10 += 3597;
  }
  dword_140404A6C[437192782] = dword_140404A6C[335047061];
  dword_140404A6C[437192783] = dword_140404A6C[335047067];
  dword_140404A6C[437192784] = dword_140404A6C[335047073];
  dword_140404A6C[437192785] = dword_140404A6C[335047079];
  dword_140404A6C[437192786] = dword_140404A6C[335047085];
  dword_140404A6C[437192787] = dword_140404A6C[335047091];
  dword_140404A6C[436668493] = 6;
  sub_14007D710();
  dword_140404A6C[283831506] = 0;
  dword_140404A6C[283837379] = 0;
  dword_140404A6C[283843252] = 0;
  dword_140404A6C[335047045] = dword_140404A6C[dword_140404A6C[436668499] + 437192782];
  dword_140404A6C[283849125] = 0;
  dword_140404A6C[283854998] = 0;
  dword_140404A6C[283860871] = 0;
  dword_140404A6C[335047046] = dword_140404A6C[dword_140404A6C[436668498] + 437192782];
  dword_140404A6C[335047047] = dword_140404A6C[dword_140404A6C[436668497] + 437192782];
  dword_140404A6C[335047048] = dword_140404A6C[dword_140404A6C[436668496] + 437192782];
  dword_140404A6C[335047049] = dword_140404A6C[dword_140404A6C[436668495] + 437192782];
  dword_140404A6C[335047050] = dword_140404A6C[dword_140404A6C[436668494] + 437192782];
  result = &dword_140404A6C[71856286];
  v16 = &dword_140404A6C[71856286];
  do
  {
    if ( *(v16 - 33) )
    {
      v17 = (int)*v16;
      if ( (unsigned int)v17 <= 5 && (v16[6] != -1 || v9 == 3) )
      {
        v13 = 23492 * v17;
        ++dword_140404A6C[5873 * v17 + 283831506];
        v9 = dword_140404A6C[283831312];
      }
      v14 = *(v16 - 17);
      if ( (int)v14 > 0 )
      {
        v14 = (unsigned int)(v14 - 1);
        *(v16 - 17) = v14;
      }
    }
    v16 += 3597;
    --v8;
  }
  while ( v8 );
  if ( dword_140404A6C[456202731] )
  {
    v18 = dword_140404A6C[456202732];
    v19 = dword_140404A6C[456202732] - 3;
    if ( (v19 & 0xFFFFFFFD) == 0 && v9 != dword_140404A6C[456202732] )
    {
      v19 = (__int64)&dword_140404A6C[72777118];
      do
      {
        if ( *(result - 33) )
          *result = 17;
        if ( result[3564] )
          result[3597] = 17;
        result += 7194;
      }
      while ( (__int64)result < (__int64)&dword_140404A6C[72777118] );
      dword_140404A6C[283831312] = v18;
    }
    result = (unsigned int *)sub_140127910(v19, v18, (__int64)v16);
    v9 = dword_140404A6C[283831312];
    dword_140404A6C[456202731] = 0;
  }
  if ( v9 == 2 )
  {
    result = (unsigned int *)sub_1400F6170(v14, v13, v16);
    v9 = dword_140404A6C[283831312];
  }
  if ( v9 == 3 )
  {
    result = (unsigned int *)sub_1400F6C50();
    v9 = dword_140404A6C[283831312];
  }
  if ( v9 == 4 )
  {
    result = (unsigned int *)sub_1400FA3A0(v14, v13, v16);
    v9 = dword_140404A6C[283831312];
  }
  if ( v9 == 5 )
  {
    result = (unsigned int *)sub_1400F80A0(v14, v13, v16);
    v9 = dword_140404A6C[283831312];
  }
  if ( v9 == 6 )
  {
    result = (unsigned int *)sub_1400F5B60(v14, v13, v16);
    v9 = dword_140404A6C[283831312];
  }
  if ( v9 == 7 )
    return (unsigned int *)sub_1400F99A0();
  return result;
}

