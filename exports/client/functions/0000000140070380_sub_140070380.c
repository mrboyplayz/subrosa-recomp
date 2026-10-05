/* Address: 0x140070380 | Name: sub_140070380 | Size: 1083 bytes */
// Immediate-mode widget allocator/layout helper. Reuses/allows up to 1024 widget slots, records local/screen rects, style/parent, and advances cursor by size + 4.
__int64 __fastcall sub_140070380(int a1, float a2, float a3, float a4, int a5, int a6)
{
  char v6; // di
  float v7; // xmm6_4
  float v8; // xmm7_4
  int v9; // ebx
  signed int v10; // r8d
  _DWORD *v11; // rax
  int v13; // esi
  int i; // edx
  int v15; // ecx
  int *v16; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // edx
  int v21; // eax
  int v22; // ecx

  v6 = MEMORY[0x150F610F8];
  v7 = a2;
  v8 = a3;
  v9 = -1;
  v10 = ((unsigned int)MEMORY[0x150F610F8] >> 8) & 1;
  MEMORY[0x150F610F8] = 0;
  v11 = &MEMORY[0x150F61194];
  v13 = 0;
  for ( i = 0; i < 1024; ++i )
  {
    v15 = *(v11 - 1);
    if ( v15 > v10 && v15 < 3 && *v11 == a1 )
    {
      v9 = i;
      v13 = *(v11 - 1);
    }
    v11 += 122;
  }
  if ( v9 == -1 )
  {
    v9 = 0;
    v16 = (int *)&MEMORY[0x150F61190];
    while ( *v16 )
    {
      ++v9;
      v16 += 122;
      if ( (__int64)v16 >= (__int64)&MEMORY[0x150FDB190] )
        return 0xFFFFFFFFLL;
    }
    if ( v9 == -1 )
      return 0xFFFFFFFFLL;
    MEMORY[0x1401FCD30]((char *)&MEMORY[0x150F61190] + 488 * v9, 0, 488);
  }
  if ( (v6 & 1) != 0 )
  {
    v7 = a2 + (float)(a4 * -0.5);
  }
  else if ( (v6 & 2) != 0 )
  {
    v7 = a2 - a4;
  }
  if ( (v6 & 4) != 0 )
  {
    v8 = a3 + (float)(*(float *)&a5 * -0.5);
  }
  else if ( (v6 & 8) != 0 )
  {
    v8 = a3 - *(float *)&a5;
  }
  v18 = 122LL * v9;
  MEMORY[0x150F61040][v18 + 84] = 3;
  MEMORY[0x150F61040][v18 + 85] = a1;
  MEMORY[0x150F61040][v18 + 89] = 1;
  MEMORY[0x150F61040][v18 + 94] = MEMORY[0x150F610D4];
  MEMORY[0x150F61040][v18 + 93] = MEMORY[0x150F61084];
  *(float *)&MEMORY[0x150F61040][v18 + 96] = v7;
  *(float *)&MEMORY[0x150F61040][v18 + 97] = v8;
  *(float *)&MEMORY[0x150F61040][v18 + 98] = a4;
  MEMORY[0x150F61040][v18 + 99] = a5;
  *(float *)&MEMORY[0x150F61040][v18 + 105] = v7;
  *(float *)&MEMORY[0x150F61040][v18 + 106] = v8;
  *(float *)&MEMORY[0x150F61040][v18 + 107] = a4;
  MEMORY[0x150F61040][v18 + 108] = a5;
  if ( MEMORY[0x150F61084] != -1 )
  {
    *(float *)&MEMORY[0x150F61040][v18 + 105] = v7 + *(float *)&MEMORY[0x150F61040][98 * MEMORY[0x150F61084] + 203952];
    *(float *)&MEMORY[0x150F61040][v18 + 106] = (float)(*(float *)&MEMORY[0x150F61040][98 * MEMORY[0x150F61084] + 203953]
                                                      - *(float *)&MEMORY[0x150F61040][98 * MEMORY[0x150F61084] + 203876])
                                              + v8;
  }
  v19 = 122LL * v9;
  *(_OWORD *)&MEMORY[0x150F61040][v19 + 100] = MEMORY[0x150F61128];
  MEMORY[0x150F61040][v18 + 104] = a6;
  if ( MEMORY[0x150F610F0] )
  {
    LODWORD(MEMORY[0x150F61174]) = v9;
    MEMORY[0x150F610F0] = 0;
  }
  if ( MEMORY[0x150F610FC] )
  {
    MEMORY[0x150F61040][v18 + 90] = 1;
    MEMORY[0x150F610FC] = 0;
  }
  else
  {
    MEMORY[0x150F61040][v18 + 90] = 0;
  }
  if ( MEMORY[0x150F610F4] )
  {
    MEMORY[0x150F61040][v18 + 91] = MEMORY[0x150F610F4];
    if ( (unsigned int)(MEMORY[0x150F610F4] - 1) <= 0x1FE
      && (MEMORY[0x150F61040][MEMORY[0x150F610F4] + 230240] == -1 || MEMORY[0x150F61084] == MEMORY[0x150F61168]) )
    {
      MEMORY[0x150F61040][MEMORY[0x150F610F4] + 230240] = v9;
    }
  }
  else
  {
    MEMORY[0x150F61040][v18 + 91] = 0;
  }
  MEMORY[0x150F610F4] = 0;
  MEMORY[0x150F61040][v18 + 95] = MEMORY[0x150F61100];
  MEMORY[0x150F61100] = 0;
  if ( MEMORY[0x150F61110] )
  {
    *(_QWORD *)&MEMORY[0x150F61040][v18 + 117] = MEMORY[0x150F61108];
    *(_QWORD *)&MEMORY[0x150F61040][v18 + 120] = MEMORY[0x150F61110];
  }
  MEMORY[0x150F61110] = 0;
  *(_QWORD *)&MEMORY[0x150F61040][v19 + 109] = -1;
  *(_QWORD *)&MEMORY[0x150F61040][v19 + 111] = -1;
  *(_QWORD *)&MEMORY[0x150F61040][v19 + 113] = -1;
  if ( MEMORY[0x15104AA48] )
  {
    v20 = MEMORY[0x15104AE4C];
    if ( (int)MEMORY[0x15104AE4C] < 16 )
    {
      v21 = HIDWORD(MEMORY[0x15104AE4C]);
      if ( SHIDWORD(MEMORY[0x15104AE4C]) >= 16 )
        goto LABEL_43;
      MEMORY[0x150F61040][16 * SHIDWORD(MEMORY[0x15104AE4C]) + 239235 + (int)MEMORY[0x15104AE4C]] = v9;
      v20 = MEMORY[0x15104AE4C];
    }
    v21 = HIDWORD(MEMORY[0x15104AE4C]);
LABEL_43:
    if ( MEMORY[0x150F61118] )
    {
      LODWORD(MEMORY[0x15104AE4C]) = 0;
      HIDWORD(MEMORY[0x15104AE4C]) = v21 + 1;
    }
    else
    {
      LODWORD(MEMORY[0x15104AE4C]) = v20 + 1;
    }
  }
  if ( MEMORY[0x150F61104] )
  {
    v22 = MEMORY[0x150F61188];
    if ( v13 <= 1 )
      v22 = v9;
    MEMORY[0x150F61188] = v22;
  }
  MEMORY[0x150F61104] = 0;
  return (unsigned int)v9;
}

