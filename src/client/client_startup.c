#include "shared_client.h"
 // weak


//----- (0000000140001000) ----------------------------------------------------
__int64 sub_140001000()
{
  sub_140198F95(16, (__int64)"Fatal Error", (__int64)"Out of memory - aborting");
  return 0;
}

__int64 WinMain_0()
{
  int count = 0;
  int index;
  unsigned int result;
  wchar_t **wide = CommandLineToArgvW(GetCommandLineW(), &count);
  char **utf8;
  if (!wide)
    goto out_of_memory;
  utf8 = sr_startup_calloc((size_t)(count + 1), 8);
  if (!utf8)
    goto out_of_memory;
  for (index = 0; index < count; ++index)
  {
    size_t length = sr_startup_wcslen(wide[index]);
    utf8[index] = sr_startup_iconv(
      "UTF-8", "UTF-16LE", (const char *)wide[index], 2 * length + 2);
    if (!utf8[index])
      goto out_of_memory;
  }
  utf8[index] = 0;
  LocalFree(wide);
  sr_startup_ready();
  result = app_main_utf8_candidate(count, (__int64)(uintptr_t)utf8);
  for (index = 0; index < count; ++index)
    sr_startup_free(utf8[index]);
  sr_startup_free(utf8);
  return result;
out_of_memory:
  /* The original failure path displays the error and returns without cleanup. */
  sub_140198F95(16, (__int64)"Fatal Error", (__int64)"Out of memory - aborting");
  return 0;
}

__int64 WinMain_sr()
{
  __int64 sr_debug_result;
  SR_DEBUG_START();
  SR_DEBUG_STAGE("Startup: initialize shared client state and runtime");
  initialize_global_variables();
  sub_14024FAF0();
  if (!_acrt_initialize_locks())
    goto crt_initialization_failure;
  if (!sub_140260A78())
  {
    _acrt_uninitialize_locks_0();
    goto crt_initialization_failure;
  }
  if (!sub_140255CB8())
  {
    /* Original heap uninitializer 0x140260A94 clears this handle. */
    *(_QWORD *)&dword_140404A6C[19065847] = 0;
    _acrt_uninitialize_locks_0();
    goto crt_initialization_failure;
  }
  if (!sub_140250554())
  {
    _acrt_uninitialize_ptd_0();
    *(_QWORD *)&dword_140404A6C[19065847] = 0;
    _acrt_uninitialize_locks_0();
    goto crt_initialization_failure;
  }
  /* Original _initterm_e startup returns 255 on a C initializer failure. */
  if ((unsigned int)sub_14020B408()) { SR_DEBUG_STOP(255); return 255; }
  if ((unsigned int)sub_1402370D4()) { SR_DEBUG_STOP(255); return 255; }
  sr_debug_result = WinMain_0();
  SR_DEBUG_STOP(sr_debug_result);
  return sr_debug_result;
crt_initialization_failure:
  SR_DEBUG_LOG("FATAL: reconstructed runtime initialization failed");
  /* Original executable's failed CRT initialization invokes fast-fail 7. */
  sub_1401FBFB8(7u);
  __builtin_unreachable();
}


// 1400011D0: invalid function type 'int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)' has been ignored

//----- (00000001400011E0) ----------------------------------------------------
__int64 sub_1400011E0()
{
  SteamAPI_RegisterCallback(&off_140301EB8, 513);
  byte_140301EE0 = 0;
  qword_140301ED8 = (__int64)&off_140279AF0;
  dword_140301EE4 = 0;
  qword_140301EF0 = (__int64)sub_1401982B0;
  qword_140301EE8 = (__int64)&off_140301E90;
  SteamAPI_RegisterCallback(&qword_140301ED8, 337);
  byte_140301F00 = 0;
  qword_140301EF8 = (__int64)&off_140279B40;
  dword_140301F04 = 0;
  qword_140301F10 = (__int64)sub_1401982C0;
  qword_140301F08 = (__int64)&off_140301E90;
  SteamAPI_RegisterCallback(&qword_140301EF8, 1202);
  return sub_1401F913C((__int64)sub_14026DD50);
}

// 14026E650: using guessed type __int64 __fastcall SteamAPI_RegisterCallback(_QWORD, _QWORD);
// 140279AF0: using guessed type void (*off_140279AF0)(CHtmlStream *__hidden this);
// 140279B40: using guessed type void (*off_140279B40)(CHtmlStream *__hidden this);
// 140301E90: using guessed type __int64 (__fastcall **off_140301E90)();
// 140301EB8: using guessed type void (**off_140301EB8)(CHtmlStream *__hidden this);
// 140301ED8: using guessed type __int64 qword_140301ED8;
// 140301EE0: using guessed type char byte_140301EE0;
// 140301EE4: using guessed type int dword_140301EE4;
// 140301EE8: using guessed type __int64 qword_140301EE8;
// 140301EF0: using guessed type __int64 qword_140301EF0;
// 140301EF8: using guessed type __int64 qword_140301EF8;
// 140301F00: using guessed type char byte_140301F00;
// 140301F04: using guessed type int dword_140301F04;
// 140301F08: using guessed type __int64 qword_140301F08;
// 140301F10: using guessed type __int64 qword_140301F10;

//----- (00000001400012C0) ----------------------------------------------------
int            sub_1400012C0(FILE *a1, int a2)
{
  int result; // eax

  sub_14020C4A8((__int64)a1, a2, 1u);
  result = sub_14020BB2C(a1);
  if ( result != -1 )
    return sub_14020CFB8(result, a1);
  return result;
}

// 14020BB2C: using guessed type __int64 __fastcall sub_14020BB2C(FILE *Stream);

//----- (0000000140001300) ----------------------------------------------------
__int64            sub_140001300(__int64 a1)
{
  __int64 result; // rax

  if ( (unsigned int)sub_14020BA70(a1) )
    return 1;
  result = sub_14020BA9C(a1);
  if ( (_DWORD)result )
    return 1;
  return result;
}

int sr_create_startup_window(void)
{
  void *window;
  void *context;
  sr_window_attribute(0, 8);
  sr_window_attribute(1, 8);
  sr_window_attribute(2, 8);
  sr_window_attribute(3, 8);
  sr_window_attribute(6, (int)dword_140404A6C[280648148]);
  sr_window_attribute(7, (int)dword_140404A6C[280648149]);
  sr_window_attribute(5, 1);
  sr_window_attribute(20, 2);
  sr_window_attribute(21, 1);
  sr_window_attribute(17, 3);
  sr_window_attribute(18, 3);
  window = sr_window_create("Sub Rosa", 16, 16,
      (int)dword_140404A6C[280648141], (int)dword_140404A6C[280648142],
      dword_140404A6C[280648151] ? 0x1023u : 0x22u);
  __builtin_memcpy(&dword_140404A6C[137297751], &window, 8);
  if (dword_140404A6C[280648151])
  {
    sr_window_size(window, (int *)&dword_140404A6C[137297755],
                           (int *)&dword_140404A6C[137297756]);
    dword_140404A6C[137297759] = dword_140404A6C[137297755];
    dword_140404A6C[137297760] = dword_140404A6C[137297756];
    __builtin_memcpy(&window, &dword_140404A6C[137297751], 8);
  }
  if (!window) return 1;
  context = sr_window_context(window);
  __builtin_memcpy(&dword_140404A6C[137297753], &context, 8);
  if (!context) return 2;
  return 0;
}

//----- (0000000140001330) ----------------------------------------------------
// Candidate UTF-8 argc/argv application entry called after WinMain converts wide command line.
__int64            app_main_utf8_candidate(int a1, __int64 a2)
{
  unsigned __int64 _RAX = 0, _RBX = 0, _RCX = 0, _RDX = 0;
  __int64 v2; // r11
  unsigned int v4; // r9d
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // al
  __int64 v9; // rax
  char v10; // cl
  bool v11; // zf
  BOOL PerformanceFrequency; // eax
  __int64 v13; // rcx
  double v14; // xmm0_8
  unsigned int v25; // eax
  _WORD *v26; // rcx
  char *v27; // rbx
  __int64 v28; // rax
       char *v29; // r8
       char *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // ebx
  unsigned int *v34; // rbx
  __int64 v35; // rdi
  unsigned int *v36; // rdx
  unsigned int *v37; // rcx
  unsigned int v38; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140001330[592];
#define v40 (*(__int64 (*))(void *)(sr_frame_140001330 + 0)) /* [rsp+0h] */
#define v41 (*(unsigned int (*))(void *)(sr_frame_140001330 + 32)) /* [rsp+20h] */
#define v42 (*(int (*))(void *)(sr_frame_140001330 + 40)) /* [rsp+28h] */
#define Frequency (*(__m128 (*))(void *)(sr_frame_140001330 + 48)) /* [rsp+30h] */
#define v44 (*(_BYTE (*)[512])(void *)(sr_frame_140001330 + 64)) /* [rsp+40h] */
#define v45 (*(__int64 (*))(void *)(sr_frame_140001330 + 576)) /* [rsp+240h] */

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
        v8 = sr_mem_140277f68[v7++];
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
        v10 = sr_mem_140277f70[v9++];
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
  PerformanceFrequency = QueryPerformanceFrequency((LARGE_INTEGER *)&Frequency);
  v13 = *(_QWORD *)&dword_140404A6C[278520503];
  if ( PerformanceFrequency )
    v13 = SR_VEC_LANES(128, Frequency, u64)[0];
  *(_QWORD *)&dword_140404A6C[278520503] = v13;
  if ( v13 )
  {
    if ( v13 < 0 )
      v14 = 1000.0
          / ((double)(long long)(v13 & 1 | ((unsigned __int64)v13 >> 1))
           + (double)(long long)(v13 & 1 | ((unsigned __int64)v13 >> 1)));
    else
      v14 = 1000.0 / (double)(long long)v13;
  }
  else
  {
    v14 = 0.0;
  }
  *(double *)&dword_140404A6C[278520505] = v14;
  _RAX = 1;
  _RCX = 0;
  __asm__ volatile("cpuid" : "+a"(_RAX), "+b"(_RBX), "+c"(_RCX), "+d"(_RDX));
  if ( (int)_RAX < 1 )
    goto LABEL_24;
  _RAX = 1;
  _RCX = 0;
  __asm__ volatile("cpuid" : "+a"(_RAX), "+b"(_RBX), "+c"(_RCX), "+d"(_RDX));
  if ( (_RCX & 0x80000) != 0 )
    v25 = 1;
  else
LABEL_24:
    v25 = 0;
  dword_140404A6C[278520507] = v25;
  SetProcessDPIAware();
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[179457276], _mm_load_si128((     __m128i *)&xmmword_140279110));
  *(_QWORD *)&dword_140404A6C[293250407] = (uintptr_t)fread_sr;
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[179457284], _mm_load_si128((     __m128i *)&xmmword_140279130));
  dword_140404A6C[179457297] = 64;
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[179457254], _mm_load_si128((     __m128i *)&xmmword_140279140));
  dword_140404A6C[179457299] = 65;
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[179457280], _mm_load_si128((     __m128i *)&xmmword_140279120));
  dword_140404A6C[179457298] = 66;
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[179457264], _mm_load_si128((     __m128i *)&xmmword_140279160));
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
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[179457268], _mm_load_si128((     __m128i *)&xmmword_140279170));
  dword_140404A6C[179457272] = 111;
  dword_140404A6C[179457273] = 112;
  dword_140404A6C[179457274] = 113;
  dword_140404A6C[179457303] = 114;
  dword_140404A6C[179457304] = 115;
  dword_140404A6C[179457253] = 116;
  dword_140404A6C[293250409] = 0;
  *(_QWORD *)&dword_140404A6C[293250405] = (uintptr_t)sub_14020CE0C;
  sub_14024B8D4(&dword_140404A6C[278520245], 512);
  ((void (           *)(_QWORD, unsigned int *, __int64))SHGetSpecialFolderPathA)(0, &dword_140404A6C[278520373], 5);
  sub_14024C22C(&dword_140404A6C[278520373]);
  if ( (unsigned int)sub_14024C22C(Path) == -1 )
  {
    mkdir(Path);
    sub_14024C22C(Path);
  }
  v26 = (_WORD *)((char *)&dword_140404A6C[278520372] + 3);
  do
  {
    v11 = *((_BYTE *)v26 + 1) == 0;
    v26 = (_WORD *)((char *)v26 + 1);
  }
  while ( !v11 );
  v27 = (char *)&dword_140404A6C[278520372] + 3;
  *v26 = 47;
  do
    v11 = *++v27 == 0;
  while ( !v11 );
  strcpy(v27, Path);
  sub_14024C22C(&dword_140404A6C[278520245]);
  player_load_profile_config_candidate(0);
  dword_140404A6C[278384725] = sub_140198BD0((__int64)&dword_140404A6C[284024901]);
  dword_140404A6C[278520173] = 1;
  sr_window_init(0x2231u);
  sr_window_cursor(0);
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
  sr_recomp_window_load();
  /* Create a normal GL window first; the extension chooses its desktop mode. */
  dword_140404A6C[280648151] = 0;
  dword_140404A6C[137297766] = 0;
  v28 = sr_create_startup_window();
  if (!v28) {
    void *sr_mode_window;
    memcpy(&sr_mode_window, &dword_140404A6C[137297751], 8);
    sr_recomp_window_set(sr_mode_window, sr_recomp_window_mode, 0);
    dword_140404A6C[280648151] = dword_140404A6C[137297766] = sr_recomp_window_mode != 0;
    sr_window_size(sr_mode_window, (int *)&dword_140404A6C[137297755], (int *)&dword_140404A6C[137297756]);
    dword_140404A6C[137297759] = dword_140404A6C[137297755];
    dword_140404A6C[137297760] = dword_140404A6C[137297756];
  }
  if (v28)
  {
    v29 = v28 == 1 ? "Couldn't create window" : "Couldn't create OpenGL context";
    v30 = "Error";
LABEL_60:
    sub_140198F95(16, (__int64)v30, (__int64)v29);
    return 1; /* 0x140001B7B: mov eax, esi (esi holds 1) */
  }
  v31 = ((__int64 (           *)(     __int16 *))LoadLibraryW)(L"opengl32.dll");
  *(_QWORD *)&dword_140404A6C[18215111] = v31;
  if ( !v31 )
    goto LABEL_58;
  *(_QWORD *)&dword_140404A6C[18215113] = ((__int64 (           *)(__int64,      char *))GetProcAddress)(
                                            v31,
                                            "wglGetProcAddress");
  if ( !*(_QWORD *)&dword_140404A6C[18215113] )
    goto LABEL_58;
  v33 = sub_1400A6700((__int64 (           *)(     char *))sub_14009E190);
  if ( *(_QWORD *)&dword_140404A6C[18215111] )
  {
    ((void (           *)(_QWORD, __int64))FreeLibrary)(*(_QWORD *)&dword_140404A6C[18215111], v32);
    *(_QWORD *)&dword_140404A6C[18215111] = 0;
  }
  if ( !v33 )
  {
LABEL_58:
    v29 = "Unable to load OpenGL";
    goto LABEL_59;
  }
  if ( dword_140404A68 < 3 || dword_140404A68 == 3 && (int)dword_140404A6C[0] < 3 )
  {
    sub_140158AB0(v44, "Version 3.3 or greater required\nVersion: %d.%d", dword_140404A68, dword_140404A6C[0]);
    v29 = v44;
LABEL_59:
    v30 = "OpenGL Error";
    goto LABEL_60;
  }
  sr_window_swap(dword_140404A6C[280648151] ? (int)dword_140404A6C[73991643] : 0);
  if ( QueryPerformanceFrequency((LARGE_INTEGER *)&dword_140404A6C[137297777]) )
  {
    QueryPerformanceCounter((LARGE_INTEGER *)&dword_140404A6C[137297779]);
    dword_140404A6C[137297775] = 1;
  }
  sub_140077710();
  v34 = &dword_140404A6C[436582486];
  v35 = 2048;
  do
  {
    unk_140404060(1, v34);
    v34 += 42;
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
  sub_140069630();
  sub_140199043(257, &dword_140404A6C[129454453]);
  sr_ClientMain();
  player_load_profile_config_candidate(1);
  if ( (int)dword_140404A6C[196619] > 0 )
    sub_140198E9F();
  if ( (int)dword_140404A6C[7] > 0 )
    sub_140198E9F();
  sub_140199049();
  sub_140198FB3();
  sub_140198E20();
  return 0; /* 0x140001B42: xor eax, eax */
}
#undef v40
#undef v41
#undef v42
#undef Frequency
#undef v44
#undef v45

// 14026E550: invalid function type 'BOOL (__stdcall *SHGetSpecialFolderPathA)(HWND hwnd, LPSTR pszPath, int csidl, BOOL fCreate)' has been ignored
// 14026E2F8: invalid function type 'HMODULE (__stdcall *LoadLibraryW)(LPCWSTR lpLibFileName)' has been ignored
// 14026E300: invalid function type 'FARPROC (__stdcall *GetProcAddress)(HMODULE hModule, LPCSTR lpProcName)' has been ignored
// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored
// 14000197B: variable 'v32' is possibly undefined
// 140199043: using guessed type __int64 __fastcall(_QWORD, _QWORD);
// 14020C0C8: using guessed type __int64 __fastcall fread();
// 140270438: using guessed type __int16 LibFileName[13];
// 140279110: using guessed type __int128 xmmword_140279110;
// 140279120: using guessed type __int128 xmmword_140279120;
// 140279130: using guessed type __int128 xmmword_140279130;
// 140279140: using guessed type __int128 xmmword_140279140;
// 140279160: using guessed type __int128 xmmword_140279160;
// 140279170: using guessed type __int128 xmmword_140279170;
// 140404060: using guessed type __int64 (__fastcall *unk_140404060)(_QWORD, _QWORD);
// 140404A68: using guessed type int dword_140404A68;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D90: using guessed type __int64 (__fastcall *)(_QWORD);
// 160FC47C8: using guessed type unsigned int;
// 160FC47D0: using guessed type unsigned int;
// 160FC47D8: using guessed type unsigned int;
// 160FC47DC: using guessed type unsigned int;
// 160FC47E8: using guessed type unsigned int;
// 160FC47EC: using guessed type unsigned int;
// 160FC4804: using guessed type unsigned int;
// 160FC4808: using guessed type unsigned int;
// 160FC480C: using guessed type unsigned int;
// 160FC4828: using guessed type unsigned int;
// 16B097E00: using guessed type unsigned int;
// 16B097E04: using guessed type unsigned int;
// 16B097E14: using guessed type unsigned int;
// 16B097E18: using guessed type unsigned int;
// 16B097E1C: using guessed type unsigned int;
// 16B097E20: using guessed type unsigned int;
// 16B097E24: using guessed type unsigned int;
// 16B097E28: using guessed type unsigned int;
// 16B097E2C: using guessed type unsigned int;
// 16B097E3C: using guessed type unsigned int;
// 16B097E4C: using guessed type unsigned int;
// 16B097E50: using guessed type unsigned int;
// 16B097E54: using guessed type unsigned int;
// 16B097E58: using guessed type unsigned int;
// 16B097E5C: using guessed type unsigned int;
// 16B097E6C: using guessed type unsigned int;
// 16B097E7C: using guessed type unsigned int;
// 16B097E8C: using guessed type unsigned int;
// 16B097E90: using guessed type unsigned int;
// 16B097E94: using guessed type unsigned int;
// 16B097E98: using guessed type unsigned int;
// 16B097E9C: using guessed type unsigned int;
// 16B097EA0: using guessed type unsigned int;
// 16B097EA4: using guessed type unsigned int;
// 16B097EA8: using guessed type unsigned int;
// 16B097EAC: using guessed type unsigned int;
// 16B097EB0: using guessed type unsigned int;
// 16B097EB4: using guessed type unsigned int;
// 16B097EB8: using guessed type unsigned int;
// 16B097EBC: using guessed type unsigned int;
// 16B097EC0: using guessed type unsigned int;
// 16B097EC4: using guessed type unsigned int;
// 16B097EC8: using guessed type unsigned int;
// 16B097ECC: using guessed type unsigned int;
// 16B097ED0: using guessed type unsigned int;
// 16B2A21C8: using guessed type unsigned int;
// 182A7CFE0: using guessed type unsigned int;
// 182A7CFE8: using guessed type unsigned int;
// 182A7D000: using guessed type unsigned int;
// 182A7D004: using guessed type unsigned int;
// 182A7D008: using guessed type unsigned int;
// 182A7D00C: using guessed type unsigned int;
// 182A7D010: using guessed type unsigned int;
// 182A7D014: using guessed type unsigned int;
// 182A7D020: using guessed type unsigned int;
// 182A7D548: using guessed type unsigned int;
// 182A7D550: using guessed type unsigned int;
// 182A7D558: using guessed type unsigned int;
// 182A7D55C: using guessed type unsigned int;
// 182A7D560: using guessed type unsigned int;
// 18329B1A0: using guessed type unsigned int;
// 18329B1A4: using guessed type unsigned int;
// 18329B1BC: using guessed type unsigned int;
// 18329B1C0: using guessed type unsigned int;
// 18329B1C4: using guessed type unsigned int;
// 18329B1C8: using guessed type unsigned int;
// 183F7CBF0: using guessed type unsigned int;
// 183F7CBF4: using guessed type unsigned int;
// 1862AE000: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD);
// 1862AE008: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1862AE010: using guessed type unsigned int;
// 1A8BF79C4: using guessed type unsigned int;
// 1A8BF79C8: using guessed type unsigned int;

//----- (0000000140001BB0) ----------------------------------------------------
unsigned int *sub_140001BB0()
{
  return &dword_140404A6C[19065867];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140001BC0) ----------------------------------------------------
unsigned int *sub_140001BC0()
{
  return &dword_140404A6C[19065865];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140001BD0) ----------------------------------------------------
__int64            vsprintf_s_l(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v8; // rax

  v8 = (__int64 *)sub_140001BB0();
  return sub_140224AEC(*v8, a1, a2, a3, a4);
}

// 140001BD0: invalid function type 'int __cdecl vsprintf_s_l(char *const Buffer, const #66 BufferCount, const char *const Format, const #71 Locale, #67 ArgList)' has been ignored

//----- (0000000140001C20) ----------------------------------------------------
__int64            sub_140001C20(_BYTE *a1, __int64 a2, __int64 a3, struct __crt_locale_pointers *a4, __int64 a5)
{
  unsigned int *v9; // rax
  __int64 result; // rax

  v9 = sub_140001BB0();
  result = sub_1402250AC(*(_QWORD *)v9 | 1LL, a1, a2, a3, a4, a5);
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}


//----- (0000000140001C90) ----------------------------------------------------
__int64            sub_140001C90(_BYTE *a1, __int64 a2, struct __crt_locale_pointers *a3, __int64 a4)
{
  unsigned int *v8; // rax
  __int64 result; // rax

  v8 = sub_140001BB0();
  result = sub_1402250AC(*(_QWORD *)v8 | 1LL, a1, -1, a2, a3, a4);
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}


//----- (0000000140001D00) ----------------------------------------------------
__int64            vswprintf_c_l(_BYTE *a1, __int64 a2, __int64 a3, struct __crt_locale_pointers *a4, __int64 ArgList)
{
  __int64 *v9; // rax
  __int64 result; // rax

  v9 = (__int64 *)sub_140001BB0();
  result = sub_1402250BC(*v9, a1, a2, a3, a4, ArgList);
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}

// 140001D00: invalid function type 'int __cdecl vswprintf_c_l(#49 *const Buffer, const #66 BufferCount, const #49 *const Format, const _locale_t Locale, va_list ArgList)' has been ignored

//----- (0000000140001D70) ----------------------------------------------------
// MFC 7-14 64bit
__int64            unknown_libname_994(__int64 a1, __int64 a2, struct __crt_locale_pointers *a3, __int64 a4)
{
  __int64 *v8; // rax

  v8 = (__int64 *)sub_140001BC0();
  return sub_140236BF4(*v8, a1, -1, a2, a3, a4);
}


//----- (0000000140001DD0) ----------------------------------------------------
__int64            sub_140001DD0(__int64 a1, __int64 a2, struct __crt_locale_pointers *a3, __int64 a4)
{
  unsigned int *v8; // rax

  v8 = sub_140001BC0();
  return sub_140236BF4(*(_QWORD *)v8 | 1LL, a1, -1, a2, a3, a4);
}


//----- (0000000140001E30) ----------------------------------------------------
__int64            sub_140001E30(_QWORD *a1)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // rsi

  v2 = -1;
  do
    ++v2;
  while ( *((_BYTE *)a1 + v2) );
  if ( (int)v2 > 24 )
    LODWORD(v2) = 24;
  v3 = 0;
  if ( (int)dword_140404A6C[134050358] <= 0 )
    return 0;
  v4 = (int)v2;
  while ( (unsigned int)strncmp_sr((const char *)(uintptr_t)(a1), (const char *)(uintptr_t)(&dword_140404A6C[28 * v3 + 134050365]), v4) )
  {
    if ( ++v3 >= (int)dword_140404A6C[134050358] )
      return 0;
  }
  return 1;
}

// 140236FF0: using guessed type __int64 __fastcall strncmp(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140001F20) ----------------------------------------------------
unsigned __int64            sub_140001F20(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6, unsigned int a7)
{
  unsigned __int64 result; // rax
  int v8; // r10d
  int v9; // r15d
  signed int v10; // edi
  unsigned int v11; // esi
  float v12; // xmm9_4
  float v13; // xmm15_4
  float *v14; // r8
  float *v15; // r9
  char *v16; // r13
  char *v17; // r12
  float v18; // xmm6_4
  float *v19; // rbx
  float *v20; // rsi
  __int64 v21; // r14
  float v22; // xmm0_4
  float v23; // xmm13_4
  float v24; // xmm6_4
  float v25; // xmm7_4
  float v26; // xmm12_4
  float v27; // xmm11_4
  float v28; // xmm10_4
  float v29; // xmm9_4
  float v30; // xmm0_4
  float v31; // xmm1_4
  __int64 v32; // rbx
  float v33; // xmm10_4
  float v34; // xmm11_4
  float v35; // xmm12_4
  float v36; // xmm7_4
  float v37; // xmm6_4
  float v38; // xmm0_4
  __int64 v39; // rcx
  __int64 v40; // rax
  float v41; // xmm3_4
  float *v42; // rax
  float v43; // xmm4_4
  float v44; // xmm5_4
  float v45; // xmm1_4
  float v46; // xmm0_4
  float v47; // xmm1_4
  float v48; // xmm2_4
  float v49; // xmm0_4
  __int64 v50; // rcx
  float v51; // xmm3_4
  float v52; // xmm1_4
  float v53; // xmm2_4
  float v54; // xmm0_4
  bool v55; // zf
  int v56; // ebx
  unsigned int v57; // r10d
  int v58; // r11d
  __int64 v59; // rcx
  signed int v60; // edx
  int v61; // r9d
  unsigned int *v62; // r8
  unsigned int v63; // r11d
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  signed int v73; // eax
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140001F20[432];
#define v78 (*(float (*))(void *)(sr_frame_140001F20 + 0)) /* [rsp+30h] */
#define v79 (*(float (*))(void *)(sr_frame_140001F20 + 4)) /* [rsp+34h] */
#define v80 (*(float (*))(void *)(sr_frame_140001F20 + 8)) /* [rsp+38h] */
#define v81 (*(float (*))(void *)(sr_frame_140001F20 + 12)) /* [rsp+3Ch] */
#define v82 (*(float (*))(void *)(sr_frame_140001F20 + 16)) /* [rsp+40h] */
#define v83 (*(float (*))(void *)(sr_frame_140001F20 + 20)) /* [rsp+44h] */
#define v84 (*(unsigned int (*))(void *)(sr_frame_140001F20 + 24)) /* [rsp+48h] */
#define v87 (*(float (*))(void *)(sr_frame_140001F20 + 36)) /* [rsp+54h] */
#define v88 (*(float (*))(void *)(sr_frame_140001F20 + 40)) /* [rsp+58h] */
#define v89 (*(float (*))(void *)(sr_frame_140001F20 + 44)) /* [rsp+5Ch] */
#define v90 (*(float (*))(void *)(sr_frame_140001F20 + 48)) /* [rsp+60h] */
#define v91 (*(float (*))(void *)(sr_frame_140001F20 + 52)) /* [rsp+64h] */
#define v92 (*(float (*))(void *)(sr_frame_140001F20 + 56)) /* [rsp+68h] */
#define v93 (*(float (*))(void *)(sr_frame_140001F20 + 60)) /* [rsp+6Ch] */
#define v94 (*(float (*))(void *)(sr_frame_140001F20 + 64)) /* [rsp+70h] */
#define v95 (*(float (*))(void *)(sr_frame_140001F20 + 68)) /* [rsp+74h] */
#define v96 (*(float (*))(void *)(sr_frame_140001F20 + 72)) /* [rsp+78h] */
#define v97 (*(float (*))(void *)(sr_frame_140001F20 + 76)) /* [rsp+7Ch] */
#define v98 (*(float (*))(void *)(sr_frame_140001F20 + 80)) /* [rsp+80h] */
#define v99 (*(float (*))(void *)(sr_frame_140001F20 + 84)) /* [rsp+84h] */
#define v100 (*(float (*))(void *)(sr_frame_140001F20 + 88)) /* [rsp+88h] */
#define v101 (*(float (*))(void *)(sr_frame_140001F20 + 92)) /* [rsp+8Ch] */
#define v102 (*(float (*))(void *)(sr_frame_140001F20 + 96)) /* [rsp+90h] */
#define v103 (*(unsigned int (*))(void *)(sr_frame_140001F20 + 100)) /* [rsp+94h] */
#define v104 (*(unsigned int (*))(void *)(sr_frame_140001F20 + 104)) /* [rsp+98h] */
#define v105 (*(unsigned int (*))(void *)(sr_frame_140001F20 + 108)) /* [rsp+9Ch] */
#define v106 (*(unsigned int (*))(void *)(sr_frame_140001F20 + 112)) /* [rsp+A0h] */
#define v107 (*(unsigned int (*))(void *)(sr_frame_140001F20 + 116)) /* [rsp+A4h] */
#define v108 (*(__int64 (*))(void *)(sr_frame_140001F20 + 128)) /* [rsp+B0h] */
#define v109 (*(char * (*))(void *)(sr_frame_140001F20 + 136)) /* [rsp+B8h] */
#define v110 (*(char * (*))(void *)(sr_frame_140001F20 + 144)) /* [rsp+C0h] */
#define v111 (*(char * (*))(void *)(sr_frame_140001F20 + 152)) /* [rsp+C8h] */
#define v112 (*(char * (*))(void *)(sr_frame_140001F20 + 160)) /* [rsp+D0h] */
#define v113 (*(char * (*))(void *)(sr_frame_140001F20 + 168)) /* [rsp+D8h] */
#define v114 (*(float * (*))(void *)(sr_frame_140001F20 + 176)) /* [rsp+E0h] */
#define v115 (*(float * (*))(void *)(sr_frame_140001F20 + 184)) /* [rsp+E8h] */
#define retaddr (*(_UNKNOWN * (*))(void *)(sr_frame_140001F20 + 392)) /* [rsp+1B8h] */
#define v117 (*(float (*))(void *)(sr_frame_140001F20 + 416)) /* [rsp+1D0h] */

  result = (unsigned __int64)&retaddr;
  v8 = a5;
  v9 = a3;
  v10 = dword_140404A6C[70425405];
  v11 = dword_140404A6C[70425405];
  v12 = 0.0;
  v83 = 0.0;
  v84 = dword_140404A6C[70425405];
  v13 = 1.0 / (float)a3;
  if ( a5 >= 0 )
  {
    v14 = (float *)(a1 + 96);
    v15 = (float *)(a2 + 4);
    v16 = (char *)&dword_140404A6C[19928693] - a1;
    v17 = (char *)&dword_140404A6C[19928685] - a2;
    v114 = (float *)(a1 + 96);
    v109 = (char *)&dword_140404A6C[19928694] - a1;
    v115 = (float *)(a2 + 4);
    v110 = (char *)&dword_140404A6C[19928695] - a1;
    v111 = (char *)&dword_140404A6C[19928669] - a1;
    v112 = (char *)&dword_140404A6C[19928670] - a1;
    v108 = (unsigned int)(a5 + 1);
    v113 = (char *)&dword_140404A6C[19928671] - a1;
    do
    {
      v18 = 1.0 - v12;
      v19 = v14;
      v20 = v15;
      v21 = 4;
      do
      {
        *(float *)&v16[(_QWORD)v19 - 96] = sub_140187180(a6, v12, *(v19 - 24), *(v19 - 12), *v19, v19[12]);
        *(float *)((char *)v19 + (_QWORD)v109 - 96) = sub_140187180(a6, v12, *(v19 - 23), *(v19 - 11), v19[1], v19[13]);
        *(float *)((char *)v19 + (_QWORD)v110 - 96) = sub_140187180(a6, v12, *(v19 - 22), *(v19 - 10), v19[2], v19[14]);
        *(float *)((char *)v20 + (_QWORD)v17 - 4) = (float)(v12 * v20[23]) + (float)(v18 * *(v20 - 1));
        *(float *)((char *)v20 + (_QWORD)v17) = (float)(v12 * v20[24]) + (float)(v18 * *v20);
        *(float *)((char *)v19 + (_QWORD)v111 - 96) = sub_1401872F0(a6, v12, *(v19 - 24), *(v19 - 12), *v19, v19[12]);
        *(float *)((char *)v19 + (_QWORD)v112 - 96) = sub_1401872F0(a6, v12, *(v19 - 23), *(v19 - 11), v19[1], v19[13]);
        v22 = sub_1401872F0(a6, v12, *(v19 - 22), *(v19 - 10), v19[2], v19[14]);
        result = (unsigned __int64)v113;
        v20 += 2;
        *(float *)((char *)v19 + (_QWORD)v113 - 96) = v22;
        v19 += 3;
        --v21;
      }
      while ( v21 );
      v9 = a3;
      v23 = 0.0;
      v10 = dword_140404A6C[70425405];
      if ( a3 >= 0 )
      {
        v24 = *(float *)&dword_140404A6C[19928703];
        v25 = *(float *)&dword_140404A6C[19928702];
        v26 = *(float *)&dword_140404A6C[19928701];
        v27 = *(float *)&dword_140404A6C[19928700];
        v28 = *(float *)&dword_140404A6C[19928699];
        v29 = *(float *)&dword_140404A6C[19928704];
        v90 = *(float *)&dword_140404A6C[19928692];
        v88 = *(float *)&dword_140404A6C[19928691];
        v89 = *(float *)&dword_140404A6C[19928686];
        v87 = *(float *)&dword_140404A6C[19928685];
        v99 = *(float *)&dword_140404A6C[19928680];
        v95 = *(float *)&dword_140404A6C[19928679];
        v91 = *(float *)&dword_140404A6C[19928678];
        v100 = *(float *)&dword_140404A6C[19928677];
        v96 = *(float *)&dword_140404A6C[19928676];
        v92 = *(float *)&dword_140404A6C[19928675];
        v101 = *(float *)&dword_140404A6C[19928674];
        v97 = *(float *)&dword_140404A6C[19928673];
        v93 = *(float *)&dword_140404A6C[19928672];
        v102 = *(float *)&dword_140404A6C[19928671];
        v79 = *(float *)&dword_140404A6C[19928698];
        v80 = *(float *)&dword_140404A6C[19928695];
        v98 = *(float *)&dword_140404A6C[19928670];
        v117 = *(float *)&dword_140404A6C[19928697];
        v30 = *(float *)&dword_140404A6C[19928696];
        v78 = *(float *)&dword_140404A6C[19928694];
        v31 = *(float *)&dword_140404A6C[19928693];
        v94 = *(float *)&dword_140404A6C[19928669];
        v103 = dword_140404A6C[19928703];
        v104 = dword_140404A6C[19928702];
        v105 = dword_140404A6C[19928701];
        v106 = dword_140404A6C[19928700];
        v107 = dword_140404A6C[19928699];
        v81 = *(float *)&dword_140404A6C[19928696];
        v82 = *(float *)&dword_140404A6C[19928693];
        v32 = a3 + 1;
        do
        {
          *(float *)&dword_140404A6C[3 * v10 + 70687550] = sub_140187180(a4, v23, v31, v30, v28, v25);
          *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687551] = sub_140187180(
                                                                                   a4,
                                                                                   v23,
                                                                                   v78,
                                                                                   v117,
                                                                                   v27,
                                                                                   v24);
          *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687552] = sub_140187180(
                                                                                   a4,
                                                                                   v23,
                                                                                   v80,
                                                                                   v79,
                                                                                   v26,
                                                                                   v29);
          *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70835006] = (float)(v87 * (float)(1.0 - v23))
                                                                               + (float)(v88 * v23);
          *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70835007] = (float)(v89 * (float)(1.0 - v23))
                                                                               + (float)(v90 * v23);
          v33 = sub_1401872F0(a4, v23, v82, v81, v28, v25);
          v34 = sub_1401872F0(a4, v23, v78, v117, v27, v24);
          v35 = sub_1401872F0(a4, v23, v80, v79, v26, v29);
          v36 = sub_140187180(a4, v23, v94, v93, v92, v91);
          v37 = sub_140187180(a4, v23, v98, v97, v96, v95);
          v38 = sub_140187180(a4, v23, v102, v101, v100, v99);
          v39 = 3LL * (int)dword_140404A6C[70425405];
          *(float *)&dword_140404A6C[v39 + 70736702] = (float)(v37 * v35) - (float)(v38 * v34);
          *(float *)&dword_140404A6C[v39 + 70736703] = (float)(v33 * v38) - (float)(v36 * v35);
          *(float *)&dword_140404A6C[v39 + 70736704] = (float)(v36 * v34) - (float)(v33 * v37);
          v40 = 3LL * (int)dword_140404A6C[70425405] + 311297;
          v41 = *(float *)&dword_140404A6C[v40 + 70425406];
          v42 = (float *)&dword_140404A6C[v40 + 70425405];
          v43 = *v42;
          v44 = v42[2];
          v45 = fsqrt((float)((float)(v43 * v43) + (float)(v41 * v41)) + (float)(v44 * v44));
          if ( v45 == 0.0 )
          {
            v47 = 0.0;
            v48 = 0.0;
            v49 = 0.0;
          }
          else
          {
            v46 = 1.0 / v45;
            v47 = (float)(1.0 / v45) * v44;
            v48 = v46 * v41;
            v49 = v46 * v43;
          }
          *v42 = v49;
          v42[1] = v48;
          v42[2] = v47;
          result = (int)dword_140404A6C[70425405];
          v50 = 3LL * (int)dword_140404A6C[70425405];
          v51 = fsqrt((float)((float)(v33 * v33) + (float)(v34 * v34)) + (float)(v35 * v35));
          if ( v51 == 0.0 )
          {
            v52 = 0.0;
            v53 = 0.0;
            v54 = 0.0;
          }
          else
          {
            v52 = (float)(1.0 / v51) * v35;
            v53 = (float)(1.0 / v51) * v34;
            v54 = (float)(1.0 / v51) * v33;
          }
          *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70785854] = v54;
          v23 = v23 + v13;
          *(float *)&dword_140404A6C[v50 + 70785855] = v53;
          *(float *)&dword_140404A6C[v50 + 70785856] = v52;
          v24 = *(float *)&v103;
          v10 = dword_140404A6C[70425405] + 1;
          v25 = *(float *)&v104;
          v26 = *(float *)&v105;
          v27 = *(float *)&v106;
          v28 = *(float *)&v107;
          v30 = v81;
          v31 = v82;
          ++dword_140404A6C[70425405];
          --v32;
        }
        while ( v32 );
        v12 = v83;
      }
      v55 = v108-- == 1;
      v12 = v12 + (float)(1.0 / (float)a5);
      v14 = v114;
      v15 = v115;
      v83 = v12;
    }
    while ( !v55 );
    v11 = v84;
    v8 = a5;
  }
  v56 = 0;
  if ( v8 <= 0 )
    return result;
  v57 = dword_140404A6C[70998846];
  result = (unsigned int)a5;
  do
  {
    if ( v9 <= 0 )
      goto LABEL_32;
    v58 = (v9 + 1) * (v56 + 1);
    v59 = (int)(v11 + v56 * (v9 + 1));
    v60 = v58 + v11;
    v61 = v58 + v11 + 1;
    v62 = &dword_140404A6C[3 * v59 + 70687555];
    v63 = ~v58 - v11;
    v64 = 3 * (v60 - v59);
    do
    {
      if ( (int)(v63 + v61) <= 0 && !v56 )
      {
        dword_140404A6C[4 * v57 + 70998847] = -(v9 + 1) - 1 + v61;
LABEL_24:
        dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848] = v61 - (v9 + 1);
        goto LABEL_25;
      }
      v69 = 3LL * v10;
      dword_140404A6C[v69 + 70687550] = *(v62 - 5);
      dword_140404A6C[v69 + 70687551] = *(v62 - 4);
      dword_140404A6C[v69 + 70687552] = *(v62 - 3);
      v70 = 3LL * (int)dword_140404A6C[70425405];
      dword_140404A6C[v70 + 70835006] = v62[147451];
      dword_140404A6C[v70 + 70835007] = v62[147452];
      v71 = 3LL * (int)dword_140404A6C[70425405];
      dword_140404A6C[v71 + 70736702] = v62[49147];
      dword_140404A6C[v71 + 70736703] = v62[49148];
      dword_140404A6C[v71 + 70736704] = v62[49149];
      v72 = 3LL * (int)dword_140404A6C[70425405];
      dword_140404A6C[v72 + 70785854] = v62[98299];
      dword_140404A6C[v72 + 70785855] = v62[98300];
      dword_140404A6C[v72 + 70785856] = v62[98301];
      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847] = dword_140404A6C[70425405];
      v73 = ++dword_140404A6C[70425405];
      if ( !v56 )
        goto LABEL_24;
      v74 = 3LL * v73;
      dword_140404A6C[v74 + 70687550] = *(v62 - 2);
      dword_140404A6C[v74 + 70687551] = *(v62 - 1);
      dword_140404A6C[v74 + 70687552] = *v62;
      v75 = 3LL * (int)dword_140404A6C[70425405];
      dword_140404A6C[v75 + 70835006] = v62[147454];
      dword_140404A6C[v75 + 70835007] = v62[147455];
      v76 = 3LL * (int)dword_140404A6C[70425405];
      dword_140404A6C[v76 + 70736702] = v62[49150];
      dword_140404A6C[v76 + 70736703] = v62[49151];
      dword_140404A6C[v76 + 70736704] = v62[49152];
      v77 = 3LL * (int)dword_140404A6C[70425405];
      dword_140404A6C[v77 + 70785854] = v62[98302];
      dword_140404A6C[v77 + 70785855] = v62[98303];
      dword_140404A6C[v77 + 70785856] = v62[98304];
      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848] = dword_140404A6C[70425405]++;
LABEL_25:
      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849] = v61;
      if ( (int)(v63 + v61) <= 0 )
      {
        dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850] = v61 - 1;
      }
      else
      {
        v65 = 3LL * (int)dword_140404A6C[70425405];
        dword_140404A6C[v65 + 70687550] = v62[v64 - 5];
        dword_140404A6C[v65 + 70687551] = v62[v64 - 4];
        dword_140404A6C[v65 + 70687552] = v62[v64 - 3];
        v66 = 3LL * (int)dword_140404A6C[70425405];
        dword_140404A6C[v66 + 70835006] = v62[v64 + 147451];
        dword_140404A6C[v66 + 70835007] = v62[v64 + 147452];
        v67 = 3LL * (int)dword_140404A6C[70425405];
        dword_140404A6C[v67 + 70736702] = v62[v64 + 49147];
        dword_140404A6C[v67 + 70736703] = v62[v64 + 49148];
        dword_140404A6C[v67 + 70736704] = v62[v64 + 49149];
        v68 = 3LL * (int)dword_140404A6C[70425405];
        dword_140404A6C[v68 + 70785854] = v62[v64 + 98299];
        dword_140404A6C[v68 + 70785855] = v62[v64 + 98300];
        dword_140404A6C[v68 + 70785856] = v62[v64 + 98301];
        dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850] = dword_140404A6C[70425405]++;
      }
      ++v61;
      v62 += 3;
      dword_140404A6C[dword_140404A6C[70998846] + 71064383] = a7;
      dword_140404A6C[dword_140404A6C[70998846] + 71097151] = 0;
      v10 = dword_140404A6C[70425405];
      v57 = ++dword_140404A6C[70998846];
    }
    while ( (int)(v63 + v61) < v9 );
    result = (unsigned int)a5;
LABEL_32:
    v11 = v84;
    ++v56;
  }
  while ( v56 < (int)result );
  return result;
}
#undef v78
#undef v79
#undef v80
#undef v81
#undef v82
#undef v83
#undef v84
#undef v87
#undef v88
#undef v89
#undef v90
#undef v91
#undef v92
#undef v93
#undef v94
#undef v95
#undef v96
#undef v97
#undef v98
#undef v99
#undef v100
#undef v101
#undef v102
#undef v103
#undef v104
#undef v105
#undef v106
#undef v107
#undef v108
#undef v109
#undef v110
#undef v111
#undef v112
#undef v113
#undef v114
#undef v115
#undef retaddr
#undef v117
