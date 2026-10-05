/* Address: 0x140001330 | Name: app_main_utf8_candidate | Size: 2162 bytes */
// Candidate UTF-8 argc/argv application entry called after WinMain converts wide command line.
__int64 __fastcall app_main_utf8_candidate(int a1, __int64 a2)
{
  __int64 v2; // r11
  int v4; // r9d
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // al
  __int64 v9; // rax
  char v10; // cl
  bool v11; // zf
  int v12; // eax
  __int64 v13; // rcx
  double v14; // xmm0_8
  int v23; // eax
  _WORD *v24; // rcx
  char *v25; // rbx
  __int64 v26; // rax
  const char *v27; // r8
  const char *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // ebx
  __int64 v32; // r8
  __int64 v33; // rcx
  char *v34; // rbx
  __int64 v35; // rdi
  unsigned int *v36; // rdx
  unsigned int *v37; // rcx
  unsigned int v38; // eax
  __int64 v40; // [rsp+0h] [rbp-258h] BYREF
  __m128 Frequency; // [rsp+30h] [rbp-228h] BYREF
  _BYTE v42[512]; // [rsp+40h] [rbp-218h] BYREF
  __int64 v43; // [rsp+240h] [rbp-18h]

  v2 = a1;
  if ( a1 > 1LL )
  {
    v4 = dword_140404A6C[284024930];
    v5 = 1;
    do
    {
      v6 = *(_QWORD *)(a2 + 8 * v5);
      v7 = 0;
      while ( 1 )
      {
        v8 = MEMORY[0x140277F68][v7++];
        if ( v8 != *(_BYTE *)(v6 + v7 - 1) )
          break;
        if ( v7 == 7 )
        {
          dword_140404A6C[284024929] = 1;
          v6 = *(_QWORD *)(a2 + 8 * v5);
          break;
        }
      }
      v9 = 0;
      while ( 1 )
      {
        v10 = MEMORY[0x140277F70][v9++];
        v11 = v10 == *(_BYTE *)(v6 + v9 - 1);
        if ( v10 != *(_BYTE *)(v6 + v9 - 1) )
          break;
        if ( v9 == 7 )
        {
          v11 = v10 == *(_BYTE *)(v6 + 6);
          break;
        }
      }
      if ( v11 )
        v4 = 1;
      ++v5;
      dword_140404A6C[284024930] = v4;
    }
    while ( v5 < v2 );
  }
  dword_140404A6C[284024930] = 1;
  *(_QWORD *)&dword_140404A6C[179992023] = 0x7478742E676F6CLL;
  *(_QWORD *)&dword_140404A6C[278520503] = 1000000000;
  v12 = ((__int64 (__fastcall *)(__m128 *))QueryPerformanceFrequency)(&Frequency);
  v13 = *(_QWORD *)&dword_140404A6C[278520503];
  if ( v12 )
    v13 = Frequency.m128_u64[0];
  *(_QWORD *)&dword_140404A6C[278520503] = v13;
  if ( v13 )
  {
    if ( v13 < 0 )
      v14 = 1000.0
          / ((double)(int)(v13 & 1 | ((unsigned __int64)v13 >> 1))
           + (double)(int)(v13 & 1 | ((unsigned __int64)v13 >> 1)));
    else
      v14 = 1000.0 / (double)(int)v13;
  }
  else
  {
    v14 = 0.0;
  }
  *(double *)&dword_140404A6C[278520505] = v14;
  _RAX = 1;
  __asm { cpuid }
  if ( (int)_RAX < 1 )
    goto LABEL_24;
  _RAX = 1;
  __asm { cpuid }
  if ( (_RCX & 0x80000) != 0 )
    v23 = 1;
  else
LABEL_24:
    v23 = 0;
  dword_140404A6C[278520507] = v23;
  ((void (__fastcall *)(__int64, __int64))SetProcessDPIAware)(_RCX, _RDX);
  *(__m128i *)&dword_140404A6C[179457276] = _mm_load_si128((const __m128i *)&xmmword_140279110);
  *(_QWORD *)&dword_140404A6C[293250407] = fread;
  *(__m128i *)&dword_140404A6C[179457284] = _mm_load_si128((const __m128i *)&xmmword_140279130);
  dword_140404A6C[179457297] = 64;
  *(__m128i *)&dword_140404A6C[179457254] = _mm_load_si128((const __m128i *)&xmmword_140279140);
  dword_140404A6C[179457299] = 65;
  *(__m128i *)&dword_140404A6C[179457280] = _mm_load_si128((const __m128i *)&xmmword_140279120);
  dword_140404A6C[179457298] = 66;
  *(__m128i *)&dword_140404A6C[179457264] = _mm_load_si128((const __m128i *)&xmmword_140279160);
  dword_140404A6C[179457300] = 67;
  dword_140404A6C[179457301] = 68;
  dword_140404A6C[179457275] = 69;
  dword_140404A6C[179457290] = 70;
  dword_140404A6C[179457294] = 71;
  dword_140404A6C[179457295] = 72;
  dword_140404A6C[179457296] = 73;
  dword_140404A6C[179457291] = 74;
  dword_140404A6C[179457292] = 75;
  dword_140404A6C[179457293] = 76;
  dword_140404A6C[179457302] = 77;
  dword_140404A6C[179457288] = 90;
  dword_140404A6C[179457289] = 91;
  dword_140404A6C[179457305] = 92;
  dword_140404A6C[179457258] = 97;
  dword_140404A6C[179457259] = 98;
  dword_140404A6C[179457261] = 99;
  dword_140404A6C[179457262] = 100;
  dword_140404A6C[179457263] = 101;
  dword_140404A6C[179457260] = 102;
  *(__m128i *)&dword_140404A6C[179457268] = _mm_load_si128((const __m128i *)&xmmword_140279170);
  dword_140404A6C[179457272] = 111;
  dword_140404A6C[179457273] = 112;
  dword_140404A6C[179457274] = 113;
  dword_140404A6C[179457303] = 114;
  dword_140404A6C[179457304] = 115;
  dword_140404A6C[179457253] = 116;
  dword_140404A6C[293250409] = 0;
  *(_QWORD *)&dword_140404A6C[293250405] = sub_14020CE0C;
  sub_14024B8D4(&dword_140404A6C[278520245], 512);
  ((void (__fastcall *)(_QWORD, unsigned int *, __int64))SHGetSpecialFolderPathA)(0, &dword_140404A6C[278520373], 5);
  sub_14024C22C(&dword_140404A6C[278520373]);
  if ( (unsigned int)sub_14024C22C(Path) == -1 )
  {
    mkdir(Path);
    sub_14024C22C(Path);
  }
  v24 = (_WORD *)((char *)&dword_140404A6C[278520372] + 3);
  do
  {
    v11 = *((_BYTE *)v24 + 1) == 0;
    v24 = (_WORD *)((char *)v24 + 1);
  }
  while ( !v11 );
  v25 = (char *)&dword_140404A6C[278520372] + 3;
  *v24 = 47;
  do
    v11 = *++v25 == 0;
  while ( !v11 );
  strcpy(v25, Path);
  sub_14024C22C(&dword_140404A6C[278520245]);
  player_load_profile_config_candidate(0);
  dword_140404A6C[278384725] = sub_140198BD0(&dword_140404A6C[284024901]);
  dword_140404A6C[278520173] = 1;
  MEMORY[0x140198FAD](8753);
  MEMORY[0x140198F11](0);
  dword_140404A6C[280648150] = dword_140404A6C[278520167];
  dword_140404A6C[280648148] = dword_140404A6C[278520168];
  dword_140404A6C[280648149] = dword_140404A6C[278520169];
  dword_140404A6C[137297767] = dword_140404A6C[278520168];
  dword_140404A6C[137297768] = dword_140404A6C[278520169];
  dword_140404A6C[280648141] = dword_140404A6C[278520165];
  dword_140404A6C[280648142] = dword_140404A6C[278520166];
  dword_140404A6C[280648151] = dword_140404A6C[278520170];
  dword_140404A6C[137297755] = dword_140404A6C[278520165];
  dword_140404A6C[137297756] = dword_140404A6C[278520166];
  dword_140404A6C[137297766] = dword_140404A6C[278520170];
  dword_140404A6C[137297759] = dword_140404A6C[278520165];
  dword_140404A6C[137297760] = dword_140404A6C[278520166];
  dword_140404A6C[278520508] = dword_140404A6C[278520165];
  dword_140404A6C[278520509] = dword_140404A6C[278520166];
  *(float *)&dword_140404A6C[280648143] = (float)(int)dword_140404A6C[278520166]
                                        / (float)(int)dword_140404A6C[278520165];
  *(float *)&dword_140404A6C[137297770] = (float)(int)dword_140404A6C[278520166]
                                        / (float)(int)dword_140404A6C[278520165];
  MEMORY[0x140198EE1](0, 8);
  MEMORY[0x140198EE1](1, 8);
  MEMORY[0x140198EE1](2, 8);
  MEMORY[0x140198EE1](3, 8);
  MEMORY[0x140198EE1](6, dword_140404A6C[280648148]);
  MEMORY[0x140198EE1](7, dword_140404A6C[280648149]);
  MEMORY[0x140198EE1](5, 1);
  MEMORY[0x140198EE1](20, 2);
  MEMORY[0x140198EE1](21, 1);
  MEMORY[0x140198EE1](17, 3);
  MEMORY[0x140198EE1](18, 3);
  if ( dword_140404A6C[280648151] )
  {
    *(_QWORD *)&dword_140404A6C[137297751] = MEMORY[0x140198EC3](
                                               "Sub Rosa",
                                               16,
                                               16,
                                               dword_140404A6C[280648141],
                                               dword_140404A6C[280648142],
                                               4131);
    MEMORY[0x140198ECF](
      *(_QWORD *)&dword_140404A6C[137297751],
      &dword_140404A6C[137297755],
      &dword_140404A6C[137297756]);
    dword_140404A6C[137297759] = dword_140404A6C[137297755];
    dword_140404A6C[137297760] = dword_140404A6C[137297756];
    v26 = *(_QWORD *)&dword_140404A6C[137297751];
  }
  else
  {
    v26 = MEMORY[0x140198EC3]("Sub Rosa", 16, 16, dword_140404A6C[280648141], dword_140404A6C[280648142], 34);
    *(_QWORD *)&dword_140404A6C[137297751] = v26;
  }
  if ( !v26 )
  {
    v27 = "Couldn't create window";
    v28 = "Error";
LABEL_63:
    MEMORY[0x140198F95](16, v28, v27);
    return MEMORY[0x1401F8B20]((unsigned __int64)&v40 ^ v43);
  }
  *(_QWORD *)&dword_140404A6C[137297753] = MEMORY[0x140198EE7](v26);
  if ( !*(_QWORD *)&dword_140404A6C[137297753] )
  {
    v27 = "Couldn't create OpenGL context";
    v28 = "Error";
    goto LABEL_63;
  }
  v29 = ((__int64 (__fastcall *)(const __int16 *))LoadLibraryW)(L"opengl32.dll");
  *(_QWORD *)&dword_140404A6C[18215111] = v29;
  if ( !v29 )
    goto LABEL_61;
  *(_QWORD *)&dword_140404A6C[18215113] = ((__int64 (__fastcall *)(__int64, const char *))GetProcAddress)(
                                            v29,
                                            "wglGetProcAddress");
  if ( !*(_QWORD *)&dword_140404A6C[18215113] )
    goto LABEL_61;
  v31 = sub_1400A6700((__int64 (__fastcall *)(const char *))sub_14009E190);
  if ( *(_QWORD *)&dword_140404A6C[18215111] )
  {
    ((void (*)(void))FreeLibrary)();
    *(_QWORD *)&dword_140404A6C[18215111] = 0;
  }
  if ( !v31 )
  {
LABEL_61:
    v27 = "Unable to load OpenGL";
    goto LABEL_62;
  }
  if ( dword_140404A68 < 3 || dword_140404A68 == 3 && (int)dword_140404A6C[0] < 3 )
  {
    sub_140158AB0(v42, "Version 3.3 or greater required\nVersion: %d.%d", dword_140404A68, dword_140404A6C[0]);
    v27 = v42;
LABEL_62:
    v28 = "OpenGL Error";
    goto LABEL_63;
  }
  if ( dword_140404A6C[280648151] )
    v33 = dword_140404A6C[73991643];
  else
    v33 = 0;
  MEMORY[0x140198EED](v33, v30, v32, dword_140404A6C[0]);
  if ( (unsigned int)((__int64 (__fastcall *)(unsigned int *))QueryPerformanceFrequency)(&dword_140404A6C[137297777]) == 1 )
  {
    ((void (__fastcall *)(unsigned int *))QueryPerformanceCounter)(&dword_140404A6C[137297779]);
    dword_140404A6C[137297775] = 1;
  }
  sub_140077710();
  v34 = (char *)&dword_140404A6C[436582486];
  v35 = 2048;
  do
  {
    unk_140404060(1, v34);
    v34 += 168;
    --v35;
  }
  while ( v35 );
  v36 = &dword_140404A6C[284024988];
  v37 = &dword_140404A6C[436582528];
  do
  {
    *(v36 - 44) = *(v37 - 42);
    v36 += 88;
    v38 = *v37;
    v37 += 84;
    *(v36 - 88) = v38;
  }
  while ( (__int64)v37 < (__int64)&dword_140404A6C[436668544] );
  dword_140404A6C[278520159] = 4;
  dword_140404A6C[278520157] = 5;
  ui_load_base_assets_candidate(0, "vcr", 0);
  ui_load_base_assets_candidate(1u, "osd-white", 2);
  ui_load_base_assets_candidate(2u, "rockwell", 0);
  ui_load_base_assets_candidate(3u, "fixedsys", 1);
  ui_load_base_assets_candidate(dword_140404A6C[278520159], "overpass", 0);
  dword_140404A6C[438291414] = 1149239296;
  dword_140404A6C[438291415] = 1141899264;
  sub_140144700();
  sub_140069630(0);
  MEMORY[0x140199043](257, &dword_140404A6C[129454453]);
  game_frame_update_candidate();
  player_load_profile_config_candidate(1u);
  if ( (int)dword_140404A6C[196619] > 0 )
    MEMORY[0x140198E9F]();
  if ( (int)dword_140404A6C[7] > 0 )
    MEMORY[0x140198E9F]();
  MEMORY[0x140199049]();
  MEMORY[0x140198FB3]();
  sub_140198E20();
  return MEMORY[0x1401F8B20]((unsigned __int64)&v40 ^ v43);
}

