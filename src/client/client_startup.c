#include "shared_client.h"
#include "../engine/menu.h"
#include "../engine/audio.h"
#include "../engine/math3d.h"
#include "../engine/collision.h"
#include "../engine/net_bits.h"
#include "../engine/text_helpers.h"

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
    g_144CBFA48 = 0;
    _acrt_uninitialize_locks_0();
    goto crt_initialization_failure;
  }
  if (!sub_140250554())
  {
    _acrt_uninitialize_ptd_0();
    g_144CBFA48 = 0;
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

//----- (00000001400012C0) ----------------------------------------------------
int            sub_1400012C0(FILE *a1, int a2)
{
  int result;

  sub_14020C4A8((__int64)a1, a2, 1u);
  result = sub_14020BB2C(a1);
  if ( result != -1 )
    return sub_14020CFB8(result, a1);
  return result;
}

//----- (0000000140001300) ----------------------------------------------------
__int64            sub_140001300(__int64 a1)
{
  __int64 result;

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
  sr_window_attribute(6, (int)g_18329B1BC);
  sr_window_attribute(7, (int)g_18329B1C0);
  sr_window_attribute(5, 1);
  sr_window_attribute(20, 2);
  sr_window_attribute(21, 1);
  sr_window_attribute(17, 3);
  sr_window_attribute(18, 3);
  window = sr_window_create("Sub Rosa", 16, 16,
      (int)g_18329B1A0, (int)g_18329B1A4,
      g_18329B1C8 ? 0x1023u : 0x22u);
  __builtin_memcpy(&g_160FC47C8, &window, 8);
  if (g_18329B1C8)
  {
    sr_window_size(window, (int *)&g_160FC47D8,
                           (int *)&g_160FC47DC);
    g_160FC47E8 = g_160FC47D8;
    g_160FC47EC = g_160FC47DC;
    __builtin_memcpy(&window, &g_160FC47C8, 8);
  }
  if (!window) return 1;
  context = sr_window_context(window);
  __builtin_memcpy(&g_160FC47D0, &context, 8);
  if (!context) return 2;
  return 0;
}

//----- (0000000140001330) ----------------------------------------------------
// Candidate UTF-8 argc/argv application entry called after WinMain converts wide command line.
__int64            app_main_utf8_candidate(int a1, __int64 a2)
{
  unsigned __int64 _RAX = 0, _RBX = 0, _RCX = 0, _RDX = 0;
  __int64 input_value;
  unsigned int state_word;
  __int64 iteration_count;
  __int64 loaded_word;
  __int64 element_index;
  char table_value;
  __int64 element_index_2;
  char table_value_2;
  bool comparison_result;
  BOOL PerformanceFrequency;
  __int64 state_word_2;
  double shifted_bits;
  unsigned int selection_flag;
  _WORD *state_address;
  char *destination_text;
  __int64 startup_window_result;
       char *literal_text;
       char *literal_text_2;
  __int64 int64_result;
  __int64 unrecovered_register_value;
  int int64_result_2;
  unsigned int *state_address_2;
  __int64 remaining_count;
  unsigned int *state_address_3;
  unsigned int *state_address_4;
  unsigned int loaded_word_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140001330[592];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140001330 + 0)) /* [rsp+0h] */
#define unused_frame_slot_32 (*(unsigned int (*))(void *)(sr_frame_140001330 + 32)) /* [rsp+20h] */
#define unused_frame_slot_40 (*(int (*))(void *)(sr_frame_140001330 + 40)) /* [rsp+28h] */
#define Frequency (*(__m128 (*))(void *)(sr_frame_140001330 + 48)) /* [rsp+30h] */
#define scratch_buffer (*(_BYTE (*)[512])(void *)(sr_frame_140001330 + 64)) /* [rsp+40h] */
#define unused_frame_slot_576 (*(__int64 (*))(void *)(sr_frame_140001330 + 576)) /* [rsp+240h] */

  input_value = a1;
  if ( a1 > 1LL )
  {
    state_word = g_183F7CBF4;
    iteration_count = 1;
    do
    {
      loaded_word = *(_QWORD *)(a2 + 8 * iteration_count);
      element_index = 0;
      while ( 1 )
      {
        table_value = sr_mem_140277f68[element_index++];
        if ( table_value != *(_BYTE *)(loaded_word + element_index - 1) )
          break;
        if ( element_index == 7 )
        {
          g_183F7CBF0 = 1;
          loaded_word = *(_QWORD *)(a2 + 8 * iteration_count);
          break;
        }
      }
      element_index_2 = 0;
      while ( 1 )
      {
        table_value_2 = sr_mem_140277f70[element_index_2++];
        comparison_result = table_value_2 == *(_BYTE *)(loaded_word + element_index_2 - 1);
        if ( table_value_2 != *(_BYTE *)(loaded_word + element_index_2 - 1) )
          break;
        if ( element_index_2 == 7 )
        {
          comparison_result = table_value_2 == *(_BYTE *)(loaded_word + 6);
          break;
        }
      }
      if ( comparison_result )
        state_word = 1;
      ++iteration_count;
      g_183F7CBF4 = state_word;
    }
    while ( iteration_count < input_value );
  }
  g_183F7CBF4 = 1;
  g_16B2A21C8 = 0x7478742E676F6CLL;
  g_182A7D548 = 1000000000;
  PerformanceFrequency = QueryPerformanceFrequency((LARGE_INTEGER *)&Frequency);
  state_word_2 = g_182A7D548;
  if ( PerformanceFrequency )
    state_word_2 = SR_VEC_LANES(128, Frequency, u64)[0];
  g_182A7D548 = state_word_2;
  if ( state_word_2 )
  {
    if ( state_word_2 < 0 )
      shifted_bits = 1000.0
          / ((double)(long long)(state_word_2 & 1 | ((unsigned __int64)state_word_2 >> 1))
           + (double)(long long)(state_word_2 & 1 | ((unsigned __int64)state_word_2 >> 1)));
    else
      shifted_bits = 1000.0 / (double)(long long)state_word_2;
  }
  else
  {
    shifted_bits = 0.0;
  }
  *(double *)&g_182A7D550 = shifted_bits;
  _RAX = 1;
  _RCX = 0;
  __asm__ volatile("cpuid" : "+a"(_RAX), "+b"(_RBX), "+c"(_RCX), "+d"(_RDX));
  if ( (int)_RAX < 1 )
    goto LABEL_24;
  _RAX = 1;
  _RCX = 0;
  __asm__ volatile("cpuid" : "+a"(_RAX), "+b"(_RBX), "+c"(_RCX), "+d"(_RDX));
  if ( (_RCX & 0x80000) != 0 )
    selection_flag = 1;
  else
LABEL_24:
    selection_flag = 0;
  physics_points_four_lanes = selection_flag;
  SetProcessDPIAware();
  _mm_storeu_si128((__m128i *)(void *)&g_16B097E5C, _mm_load_si128((     __m128i *)&xmmword_140279110));
  g_1862AE008 = (uintptr_t)fread_sr;
  _mm_storeu_si128((__m128i *)(void *)&g_16B097E7C, _mm_load_si128((     __m128i *)&xmmword_140279130));
  g_16B097EB0 = 64;
  _mm_storeu_si128((__m128i *)(void *)&g_16B097E04, _mm_load_si128((     __m128i *)&xmmword_140279140));
  g_16B097EB8 = 65;
  _mm_storeu_si128((__m128i *)(void *)&g_16B097E6C, _mm_load_si128((     __m128i *)&xmmword_140279120));
  g_16B097EB4 = 66;
  _mm_storeu_si128((__m128i *)(void *)&g_16B097E2C, _mm_load_si128((     __m128i *)&xmmword_140279160));
  g_16B097EBC = 67;
  g_16B097EC0 = 68;
  g_16B097E58 = 69;
  g_16B097E94 = 70;
  g_16B097EA4 = 71;
  g_16B097EA8 = 72;
  g_16B097EAC = 73;
  g_16B097E98 = 74;
  g_16B097E9C = 75;
  g_16B097EA0 = 76;
  g_16B097EC4 = 77;
  g_16B097E8C = 90;
  g_16B097E90 = 91;
  g_16B097ED0 = 92;
  g_16B097E14 = 97;
  g_16B097E18 = 98;
  g_16B097E20 = 99;
  g_16B097E24 = 100;
  g_16B097E28 = 101;
  g_16B097E1C = 102;
  _mm_storeu_si128((__m128i *)(void *)&g_16B097E3C, _mm_load_si128((     __m128i *)&xmmword_140279170));
  g_16B097E4C = 111;
  g_16B097E50 = 112;
  g_16B097E54 = 113;
  g_16B097EC8 = 114;
  g_16B097ECC = 115;
  g_16B097E00 = 116;
  g_1862AE010 = 0;
  g_1862AE000 = (uintptr_t)crt_fread;
  sub_14024B8D4(&g_182A7D140, 512);
  ((void (           *)(_QWORD, unsigned int *, __int64))SHGetSpecialFolderPathA)(0, &g_182A7D340, 5);
  crt_chdir(&g_182A7D340);
  if ( (unsigned int)crt_chdir(Path) == -1 )
  {
    mkdir(Path);
    crt_chdir(Path);
  }
  state_address = (_WORD *)((char *)&g_182A7D33C + 3);
  do
  {
    comparison_result = *((_BYTE *)state_address + 1) == 0;
    state_address = (_WORD *)((char *)state_address + 1);
  }
  while ( !comparison_result );
  destination_text = (char *)&g_182A7D33C + 3;
  *state_address = 47;
  do
    comparison_result = *++destination_text == 0;
  while ( !comparison_result );
  strcpy(destination_text, Path);
  crt_chdir(&g_182A7D140);
  player_load_profile_config_candidate(0);
  g_1829F8BC0 = sub_140198BD0((__int64)(unsigned int *)&g_183F7CB80);
  g_182A7D020 = 1;
  sr_window_init(0x2231u);
  sr_window_cursor(0);
  g_18329B1C4 = g_182A7D008;
  g_18329B1BC = g_182A7D00C;
  g_18329B1C0 = g_182A7D010;
  g_160FC4808 = g_182A7D00C;
  g_160FC480C = g_182A7D010;
  g_18329B1A0 = g_182A7D000;
  g_18329B1A4 = g_182A7D004;
  g_18329B1C8 = g_182A7D014;
  g_160FC47D8 = g_182A7D000;
  g_160FC47DC = g_182A7D004;
  g_160FC4804 = g_182A7D014;
  g_160FC47E8 = g_182A7D000;
  g_160FC47EC = g_182A7D004;
  g_182A7D55C = g_182A7D000;
  g_182A7D560 = g_182A7D004;
  g_18329B1A8 = (float)(int)g_182A7D004
                                        / (float)(int)g_182A7D000;
  g_160FC4814 = (float)(int)g_182A7D004
                                        / (float)(int)g_182A7D000;
  sr_recomp_window_load();
  /* Create a normal GL window first; the extension chooses its desktop mode. */
  g_18329B1C8 = 0;
  g_160FC4804 = 0;
  startup_window_result = sr_create_startup_window();
  if (!startup_window_result) {
    void *sr_mode_window;
    memcpy(&sr_mode_window, &g_160FC47C8, 8);
    sr_recomp_window_set(sr_mode_window, sr_recomp_window_mode, 0);
    g_18329B1C8 = g_160FC4804 = sr_recomp_window_mode != 0;
    sr_window_size(sr_mode_window, (int *)&g_160FC47D8, (int *)&g_160FC47DC);
    g_160FC47E8 = g_160FC47D8;
    g_160FC47EC = g_160FC47DC;
  }
  if (startup_window_result)
  {
    literal_text = startup_window_result == 1 ? "Couldn't create window" : "Couldn't create OpenGL context";
    literal_text_2 = "Error";
LABEL_60:
    sub_140198F95(16, (__int64)literal_text_2, (__int64)literal_text);
    return 1; /* 0x140001B7B: mov eax, esi (esi holds 1) */
  }
  int64_result = ((__int64 (           *)(     __int16 *))LoadLibraryW)(L"opengl32.dll");
  g_144980D88 = int64_result;
  if ( !int64_result )
    goto LABEL_58;
  g_144980D90 = ((__int64 (           *)(__int64,      char *))GetProcAddress)(
                                            int64_result,
                                            "wglGetProcAddress");
  if ( !g_144980D90 )
    goto LABEL_58;
  int64_result_2 = sub_1400A6700((__int64 (           *)(     char *))sub_14009E190);
  if ( g_144980D88 )
  {
    ((void (           *)(_QWORD, __int64))FreeLibrary)(g_144980D88, unrecovered_register_value);
    g_144980D88 = 0;
  }
  if ( !int64_result_2 )
  {
LABEL_58:
    literal_text = "Unable to load OpenGL";
    goto LABEL_59;
  }
  if ( dword_140404A68 < 3 || dword_140404A68 == 3 && (int)g_140404A6C < 3 )
  {
    crt_sprintf(scratch_buffer, "Version 3.3 or greater required\nVersion: %d.%d", dword_140404A68, g_140404A6C);
    literal_text = scratch_buffer;
LABEL_59:
    literal_text_2 = "OpenGL Error";
    goto LABEL_60;
  }
  sr_window_swap(g_18329B1C8 ? (int)g_151E461D8 : 0);
  if ( QueryPerformanceFrequency((LARGE_INTEGER *)(unsigned int *)&g_160FC4830) )
  {
    QueryPerformanceCounter((LARGE_INTEGER *)(unsigned int *)&g_160FC4838);
    g_160FC4828 = 1;
  }
  sub_140077710();
  state_address_2 = &g_1A8572BC4;
  remaining_count = 2048;
  do
  {
    glGenTextures(1, state_address_2);
    state_address_2 += 42;
    --remaining_count;
  }
  while ( remaining_count );
  state_address_3 = &g_183F7CCDC;
  state_address_4 = &g_1A8572C6C;
  do
  {
    *(state_address_3 - 44) = *(state_address_4 - 42);
    state_address_3 += 88;
    loaded_word_2 = *state_address_4;
    state_address_4 += 84;
    *(state_address_3 - 88) = loaded_word_2;
  }
  while ( (__int64)state_address_4 < (__int64)&g_1A85C6C6C );
  g_182A7CFE8 = 4;
  g_182A7CFE0 = 5;
  ui_load_base_assets_candidate(0, "vcr", 0);
  ui_load_base_assets_candidate(1u, "osd-white", 2);
  ui_load_base_assets_candidate(2u, "rockwell", 0);
  ui_load_base_assets_candidate(3u, "fixedsys", 1);
  ui_load_base_assets_candidate(g_182A7CFE8, "overpass", 0);
  *(unsigned int *)&renderer_canvas_width = 1149239296;
  *(unsigned int *)&renderer_canvas_height = 1141899264;
  sub_140144700();
  sr_audio_initialize();
  sub_140199043(257, &g_15F1D9040);
  sr_ClientMain();
  player_load_profile_config_candidate(1);
  if ( (int)g_1404C4A98 > 0 )
    sub_140198E9F();
  if ( (int)g_140404A88 > 0 )
    sub_140198E9F();
  sub_140199049();
  sub_140198FB3();
  sub_140198E20();
  return 0; /* 0x140001B42: xor eax, eax */
}
#undef unused_frame_slot_0
#undef unused_frame_slot_32
#undef unused_frame_slot_40
#undef Frequency
#undef scratch_buffer
#undef unused_frame_slot_576

// 14026E550: invalid function type 'BOOL (__stdcall *SHGetSpecialFolderPathA)(HWND hwnd, LPSTR pszPath, int csidl, BOOL fCreate)' has been ignored
// 14026E2F8: invalid function type 'HMODULE (__stdcall *LoadLibraryW)(LPCWSTR lpLibFileName)' has been ignored
// 14026E300: invalid function type 'FARPROC (__stdcall *GetProcAddress)(HMODULE hModule, LPCSTR lpProcName)' has been ignored
// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored

//----- (0000000140001BB0) ----------------------------------------------------
unsigned int *sub_140001BB0()
{
  return &g_144CBFA98;
}

//----- (0000000140001BC0) ----------------------------------------------------
unsigned int *sub_140001BC0()
{
  return &g_144CBFA90;
}

//----- (0000000140001BD0) ----------------------------------------------------
__int64            vsprintf_s_l(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *returned_pointer;

  returned_pointer = (__int64 *)sub_140001BB0();
  return sub_140224AEC(*returned_pointer, a1, a2, a3, a4);
}

// 140001BD0: invalid function type 'int __cdecl vsprintf_s_l(char *const Buffer, const #66 BufferCount, const char *const Format, const #71 Locale, #67 ArgList)' has been ignored

//----- (0000000140001C20) ----------------------------------------------------
__int64            sub_140001C20(_BYTE *a1, __int64 a2, __int64 a3, struct __crt_locale_pointers *a4, __int64 a5)
{
  unsigned int *returned_pointer;
  __int64 result;

  returned_pointer = sub_140001BB0();
  result = sub_1402250AC(*(_QWORD *)returned_pointer | 1LL, a1, a2, a3, a4, a5);
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}

//----- (0000000140001C90) ----------------------------------------------------
__int64            sub_140001C90(_BYTE *a1, __int64 a2, struct __crt_locale_pointers *a3, __int64 a4)
{
  unsigned int *returned_pointer;
  __int64 result;

  returned_pointer = sub_140001BB0();
  result = sub_1402250AC(*(_QWORD *)returned_pointer | 1LL, a1, -1, a2, a3, a4);
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}

//----- (0000000140001D00) ----------------------------------------------------
__int64            vswprintf_c_l(_BYTE *a1, __int64 a2, __int64 a3, struct __crt_locale_pointers *a4, __int64 ArgList)
{
  __int64 *returned_pointer;
  __int64 result;

  returned_pointer = (__int64 *)sub_140001BB0();
  result = sub_1402250BC(*returned_pointer, a1, a2, a3, a4, ArgList);
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}

// 140001D00: invalid function type 'int __cdecl vswprintf_c_l(#49 *const Buffer, const #66 BufferCount, const #49 *const Format, const _locale_t Locale, va_list ArgList)' has been ignored

//----- (0000000140001D70) ----------------------------------------------------
// MFC 7-14 64bit
__int64            unknown_libname_994(__int64 a1, __int64 a2, struct __crt_locale_pointers *a3, __int64 a4)
{
  __int64 *returned_pointer;

  returned_pointer = (__int64 *)sub_140001BC0();
  return sub_140236BF4(*returned_pointer, a1, -1, a2, a3, a4);
}

//----- (0000000140001DD0) ----------------------------------------------------
__int64            sub_140001DD0(__int64 a1, __int64 a2, struct __crt_locale_pointers *a3, __int64 a4)
{
  unsigned int *returned_pointer;

  returned_pointer = sub_140001BC0();
  return sub_140236BF4(*(_QWORD *)returned_pointer | 1LL, a1, -1, a2, a3, a4);
}

//----- (0000000140001E30) ----------------------------------------------------
__int64            sub_140001E30(_QWORD *a1)
{
  __int64 iteration_count;
  int element_index;
  __int64 saved_iteration_count;

  iteration_count = -1;
  do
    ++iteration_count;
  while ( *((_BYTE *)a1 + iteration_count) );
  if ( (int)iteration_count > 24 )
    LODWORD(iteration_count) = 24;
  element_index = 0;
  if ( (int)g_160361344 <= 0 )
    return 0;
  saved_iteration_count = (int)iteration_count;
  while ( (unsigned int)strncmp_sr((const char *)(uintptr_t)(a1), (const char *)(uintptr_t)(&dword_140404A6C[28 * element_index + 134050365]), saved_iteration_count) )
  {
    if ( ++element_index >= (int)g_160361344 )
      return 0;
  }
  return 1;
}

//----- (0000000140001F20) ----------------------------------------------------
unsigned __int64            sub_140001F20(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6, unsigned int a7)
{
  unsigned __int64 result;
  int input_value;
  int input_value_2;
  signed int float_word;
  unsigned int state_word;
  float scaled_ratio;
  float scaled_ratio_2;
  float *weighted_sum;
  float *weighted_sum_2;
  char *state_address;
  char *state_address_2;
  float component_delta;
  float *saved_weighted_sum;
  float *saved_weighted_sum_2;
  __int64 remaining_count;
  float product_difference;
  float component_sum;
  float scaled_value;
  float scaled_value_2;
  float scaled_value_3;
  float scaled_value_4;
  float scaled_value_5;
  float state_scalar;
  float state_scalar_2;
  float state_scalar_3;
  __int64 remaining_count_2;
  float call_result;
  float call_result_2;
  float call_result_3;
  float call_result_4;
  float call_result_5;
  float call_result_6;
  __int64 scaled_index;
  __int64 scaled_index_2;
  float weighted_sum_3;
  float *state_address_3;
  float scaled_value_6;
  float source_component_z;
  float square_root;
  float scaled_ratio_3;
  float scaled_ratio_4;
  float scaled_value_7;
  float scaled_value_8;
  __int64 scaled_index_3;
  float square_root_2;
  float scaled_ratio_5;
  float scaled_ratio_6;
  float scaled_ratio_7;
  bool comparison_result;
  int iteration_count;
  unsigned int state_word_2;
  int scaled_index_4;
  __int64 scaled_index_5;
  signed int integer_sum;
  int iteration_count_2;
  unsigned int *state_address_4;
  unsigned int integer_difference;
  __int64 scaled_index_6;
  __int64 scaled_index_7;
  __int64 scaled_index_8;
  __int64 scaled_index_9;
  __int64 scaled_index_10;
  __int64 scaled_index_11;
  __int64 scaled_index_12;
  __int64 scaled_index_13;
  __int64 scaled_index_14;
  signed int integer_sum_2;
  __int64 scaled_index_15;
  __int64 scaled_index_16;
  __int64 scaled_index_17;
  __int64 scaled_index_18;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140001F20[432];
#define state_scalar_4 (*(float (*))(void *)(sr_frame_140001F20 + 0)) /* [rsp+30h] */
#define state_scalar_5 (*(float (*))(void *)(sr_frame_140001F20 + 4)) /* [rsp+34h] */
#define state_scalar_6 (*(float (*))(void *)(sr_frame_140001F20 + 8)) /* [rsp+38h] */
#define state_scalar_7 (*(float (*))(void *)(sr_frame_140001F20 + 12)) /* [rsp+3Ch] */
#define state_scalar_8 (*(float (*))(void *)(sr_frame_140001F20 + 16)) /* [rsp+40h] */
#define saved_scaled_ratio (*(float (*))(void *)(sr_frame_140001F20 + 20)) /* [rsp+44h] */
#define state_word_3 (*(unsigned int (*))(void *)(sr_frame_140001F20 + 24)) /* [rsp+48h] */
#define state_scalar_9 (*(float (*))(void *)(sr_frame_140001F20 + 36)) /* [rsp+54h] */
#define state_scalar_10 (*(float (*))(void *)(sr_frame_140001F20 + 40)) /* [rsp+58h] */
#define state_scalar_11 (*(float (*))(void *)(sr_frame_140001F20 + 44)) /* [rsp+5Ch] */
#define state_scalar_12 (*(float (*))(void *)(sr_frame_140001F20 + 48)) /* [rsp+60h] */
#define state_scalar_13 (*(float (*))(void *)(sr_frame_140001F20 + 52)) /* [rsp+64h] */
#define state_scalar_14 (*(float (*))(void *)(sr_frame_140001F20 + 56)) /* [rsp+68h] */
#define state_scalar_15 (*(float (*))(void *)(sr_frame_140001F20 + 60)) /* [rsp+6Ch] */
#define state_scalar_16 (*(float (*))(void *)(sr_frame_140001F20 + 64)) /* [rsp+70h] */
#define state_scalar_17 (*(float (*))(void *)(sr_frame_140001F20 + 68)) /* [rsp+74h] */
#define state_scalar_18 (*(float (*))(void *)(sr_frame_140001F20 + 72)) /* [rsp+78h] */
#define state_scalar_19 (*(float (*))(void *)(sr_frame_140001F20 + 76)) /* [rsp+7Ch] */
#define state_scalar_20 (*(float (*))(void *)(sr_frame_140001F20 + 80)) /* [rsp+80h] */
#define state_scalar_21 (*(float (*))(void *)(sr_frame_140001F20 + 84)) /* [rsp+84h] */
#define state_scalar_22 (*(float (*))(void *)(sr_frame_140001F20 + 88)) /* [rsp+88h] */
#define state_scalar_23 (*(float (*))(void *)(sr_frame_140001F20 + 92)) /* [rsp+8Ch] */
#define state_scalar_24 (*(float (*))(void *)(sr_frame_140001F20 + 96)) /* [rsp+90h] */
#define float_word_2 (*(unsigned int (*))(void *)(sr_frame_140001F20 + 100)) /* [rsp+94h] */
#define float_word_3 (*(unsigned int (*))(void *)(sr_frame_140001F20 + 104)) /* [rsp+98h] */
#define float_word_4 (*(unsigned int (*))(void *)(sr_frame_140001F20 + 108)) /* [rsp+9Ch] */
#define float_word_5 (*(unsigned int (*))(void *)(sr_frame_140001F20 + 112)) /* [rsp+A0h] */
#define float_word_6 (*(unsigned int (*))(void *)(sr_frame_140001F20 + 116)) /* [rsp+A4h] */
#define remaining_count_3 (*(__int64 (*))(void *)(sr_frame_140001F20 + 128)) /* [rsp+B0h] */
#define state_address_5 (*(char * (*))(void *)(sr_frame_140001F20 + 136)) /* [rsp+B8h] */
#define state_address_6 (*(char * (*))(void *)(sr_frame_140001F20 + 144)) /* [rsp+C0h] */
#define state_address_7 (*(char * (*))(void *)(sr_frame_140001F20 + 152)) /* [rsp+C8h] */
#define state_address_8 (*(char * (*))(void *)(sr_frame_140001F20 + 160)) /* [rsp+D0h] */
#define state_address_9 (*(char * (*))(void *)(sr_frame_140001F20 + 168)) /* [rsp+D8h] */
#define weighted_sum_4 (*(float * (*))(void *)(sr_frame_140001F20 + 176)) /* [rsp+E0h] */
#define weighted_sum_5 (*(float * (*))(void *)(sr_frame_140001F20 + 184)) /* [rsp+E8h] */
#define retaddr (*(_UNKNOWN * (*))(void *)(sr_frame_140001F20 + 392)) /* [rsp+1B8h] */
#define state_scalar_25 (*(float (*))(void *)(sr_frame_140001F20 + 416)) /* [rsp+1D0h] */

  result = (unsigned __int64)&retaddr;
  input_value = a5;
  input_value_2 = a3;
  float_word = g_1510AB760;
  state_word = g_1510AB760;
  scaled_ratio = 0.0;
  saved_scaled_ratio = 0.0;
  state_word_3 = g_1510AB760;
  scaled_ratio_2 = 1.0 / (float)a3;
  if ( a5 >= 0 )
  {
    weighted_sum = (float *)(a1 + 96);
    weighted_sum_2 = (float *)(a2 + 4);
    state_address = (char *)(unsigned int *)&g_14500A440 - a1;
    state_address_2 = (char *)(unsigned int *)&g_14500A420 - a2;
    weighted_sum_4 = (float *)(a1 + 96);
    state_address_5 = (char *)(unsigned int *)&g_14500A444 - a1;
    weighted_sum_5 = (float *)(a2 + 4);
    state_address_6 = (char *)(unsigned int *)&g_14500A448 - a1;
    state_address_7 = (char *)(unsigned int *)&g_14500A3E0 - a1;
    state_address_8 = (char *)(unsigned int *)&g_14500A3E4 - a1;
    remaining_count_3 = (unsigned int)(a5 + 1);
    state_address_9 = (char *)(unsigned int *)&g_14500A3E8 - a1;
    do
    {
      component_delta = 1.0 - scaled_ratio;
      saved_weighted_sum = weighted_sum;
      saved_weighted_sum_2 = weighted_sum_2;
      remaining_count = 4;
      do
      {
        *(float *)&state_address[(_QWORD)saved_weighted_sum - 96] = sub_140187180(a6, scaled_ratio, *(saved_weighted_sum - 24), *(saved_weighted_sum - 12), *saved_weighted_sum, saved_weighted_sum[12]);
        *(float *)((char *)saved_weighted_sum + (_QWORD)state_address_5 - 96) = sub_140187180(a6, scaled_ratio, *(saved_weighted_sum - 23), *(saved_weighted_sum - 11), saved_weighted_sum[1], saved_weighted_sum[13]);
        *(float *)((char *)saved_weighted_sum + (_QWORD)state_address_6 - 96) = sub_140187180(a6, scaled_ratio, *(saved_weighted_sum - 22), *(saved_weighted_sum - 10), saved_weighted_sum[2], saved_weighted_sum[14]);
        *(float *)((char *)saved_weighted_sum_2 + (_QWORD)state_address_2 - 4) = (float)(scaled_ratio * saved_weighted_sum_2[23]) + (float)(component_delta * *(saved_weighted_sum_2 - 1));
        *(float *)((char *)saved_weighted_sum_2 + (_QWORD)state_address_2) = (float)(scaled_ratio * saved_weighted_sum_2[24]) + (float)(component_delta * *saved_weighted_sum_2);
        *(float *)((char *)saved_weighted_sum + (_QWORD)state_address_7 - 96) = sub_1401872F0(a6, scaled_ratio, *(saved_weighted_sum - 24), *(saved_weighted_sum - 12), *saved_weighted_sum, saved_weighted_sum[12]);
        *(float *)((char *)saved_weighted_sum + (_QWORD)state_address_8 - 96) = sub_1401872F0(a6, scaled_ratio, *(saved_weighted_sum - 23), *(saved_weighted_sum - 11), saved_weighted_sum[1], saved_weighted_sum[13]);
        product_difference = sub_1401872F0(a6, scaled_ratio, *(saved_weighted_sum - 22), *(saved_weighted_sum - 10), saved_weighted_sum[2], saved_weighted_sum[14]);
        result = (unsigned __int64)state_address_9;
        saved_weighted_sum_2 += 2;
        *(float *)((char *)saved_weighted_sum + (_QWORD)state_address_9 - 96) = product_difference;
        saved_weighted_sum += 3;
        --remaining_count;
      }
      while ( remaining_count );
      input_value_2 = a3;
      component_sum = 0.0;
      float_word = g_1510AB760;
      if ( a3 >= 0 )
      {
        scaled_value = *(float *)&g_14500A468;
        scaled_value_2 = *(float *)&g_14500A464;
        scaled_value_3 = *(float *)&g_14500A460;
        scaled_value_4 = *(float *)&g_14500A45C;
        scaled_value_5 = *(float *)&g_14500A458;
        state_scalar = g_14500A46C;
        state_scalar_12 = g_14500A43C;
        state_scalar_10 = g_14500A438;
        state_scalar_11 = g_14500A424;
        state_scalar_9 = g_14500A420;
        state_scalar_21 = g_14500A40C;
        state_scalar_17 = g_14500A408;
        state_scalar_13 = g_14500A404;
        state_scalar_22 = g_14500A400;
        state_scalar_18 = g_14500A3FC;
        state_scalar_14 = g_14500A3F8;
        state_scalar_23 = g_14500A3F4;
        state_scalar_19 = g_14500A3F0;
        state_scalar_15 = g_14500A3EC;
        state_scalar_24 = g_14500A3E8;
        state_scalar_5 = g_14500A454;
        state_scalar_6 = g_14500A448;
        state_scalar_20 = g_14500A3E4;
        state_scalar_25 = g_14500A450;
        state_scalar_2 = g_14500A44C;
        state_scalar_4 = g_14500A444;
        state_scalar_3 = g_14500A440;
        state_scalar_16 = g_14500A3E0;
        float_word_2 = g_14500A468;
        float_word_3 = g_14500A464;
        float_word_4 = g_14500A460;
        float_word_5 = g_14500A45C;
        float_word_6 = g_14500A458;
        state_scalar_7 = g_14500A44C;
        state_scalar_8 = g_14500A440;
        remaining_count_2 = a3 + 1;
        do
        {
          *(float *)&dword_140404A6C[3 * float_word + 70687550] = sub_140187180(a4, component_sum, state_scalar_3, state_scalar_2, scaled_value_5, scaled_value_2);
          *(float *)&dword_140404A6C[3 * g_1510AB760 + 70687551] = sub_140187180(
                                                                                   a4,
                                                                                   component_sum,
                                                                                   state_scalar_4,
                                                                                   state_scalar_25,
                                                                                   scaled_value_4,
                                                                                   scaled_value);
          *(float *)&dword_140404A6C[3 * g_1510AB760 + 70687552] = sub_140187180(
                                                                                   a4,
                                                                                   component_sum,
                                                                                   state_scalar_6,
                                                                                   state_scalar_5,
                                                                                   scaled_value_3,
                                                                                   state_scalar);
          *(float *)&dword_140404A6C[3 * g_1510AB760 + 70835006] = (float)(state_scalar_9 * (float)(1.0 - component_sum))
                                                                               + (float)(state_scalar_10 * component_sum);
          *(float *)&dword_140404A6C[3 * g_1510AB760 + 70835007] = (float)(state_scalar_11 * (float)(1.0 - component_sum))
                                                                               + (float)(state_scalar_12 * component_sum);
          call_result = sub_1401872F0(a4, component_sum, state_scalar_8, state_scalar_7, scaled_value_5, scaled_value_2);
          call_result_2 = sub_1401872F0(a4, component_sum, state_scalar_4, state_scalar_25, scaled_value_4, scaled_value);
          call_result_3 = sub_1401872F0(a4, component_sum, state_scalar_6, state_scalar_5, scaled_value_3, state_scalar);
          call_result_4 = sub_140187180(a4, component_sum, state_scalar_16, state_scalar_15, state_scalar_14, state_scalar_13);
          call_result_5 = sub_140187180(a4, component_sum, state_scalar_20, state_scalar_19, state_scalar_18, state_scalar_17);
          call_result_6 = sub_140187180(a4, component_sum, state_scalar_24, state_scalar_23, state_scalar_22, state_scalar_21);
          scaled_index = 3LL * (int)g_1510AB760;
          *(float *)&dword_140404A6C[scaled_index + 70736702] = (float)(call_result_5 * call_result_3) - (float)(call_result_6 * call_result_2);
          *(float *)&dword_140404A6C[scaled_index + 70736703] = (float)(call_result * call_result_6) - (float)(call_result_4 * call_result_3);
          *(float *)&dword_140404A6C[scaled_index + 70736704] = (float)(call_result_4 * call_result_2) - (float)(call_result * call_result_5);
          scaled_index_2 = 3LL * (int)g_1510AB760 + 311297;
          weighted_sum_3 = *(float *)&dword_140404A6C[scaled_index_2 + 70425406];
          state_address_3 = (float *)&dword_140404A6C[scaled_index_2 + 70425405];
          scaled_value_6 = *state_address_3;
          source_component_z = state_address_3[2];
          square_root = fsqrt((float)((float)(scaled_value_6 * scaled_value_6) + (float)(weighted_sum_3 * weighted_sum_3)) + (float)(source_component_z * source_component_z));
          if ( square_root == 0.0 )
          {
            scaled_ratio_4 = 0.0;
            scaled_value_7 = 0.0;
            scaled_value_8 = 0.0;
          }
          else
          {
            scaled_ratio_3 = 1.0 / square_root;
            scaled_ratio_4 = (float)(1.0 / square_root) * source_component_z;
            scaled_value_7 = scaled_ratio_3 * weighted_sum_3;
            scaled_value_8 = scaled_ratio_3 * scaled_value_6;
          }
          *state_address_3 = scaled_value_8;
          state_address_3[1] = scaled_value_7;
          state_address_3[2] = scaled_ratio_4;
          result = (int)g_1510AB760;
          scaled_index_3 = 3LL * (int)g_1510AB760;
          square_root_2 = fsqrt((float)((float)(call_result * call_result) + (float)(call_result_2 * call_result_2)) + (float)(call_result_3 * call_result_3));
          if ( square_root_2 == 0.0 )
          {
            scaled_ratio_5 = 0.0;
            scaled_ratio_6 = 0.0;
            scaled_ratio_7 = 0.0;
          }
          else
          {
            scaled_ratio_5 = (float)(1.0 / square_root_2) * call_result_3;
            scaled_ratio_6 = (float)(1.0 / square_root_2) * call_result_2;
            scaled_ratio_7 = (float)(1.0 / square_root_2) * call_result;
          }
          *(float *)&dword_140404A6C[3 * g_1510AB760 + 70785854] = scaled_ratio_7;
          component_sum = component_sum + scaled_ratio_2;
          *(float *)&dword_140404A6C[scaled_index_3 + 70785855] = scaled_ratio_6;
          *(float *)&dword_140404A6C[scaled_index_3 + 70785856] = scaled_ratio_5;
          scaled_value = *(float *)&float_word_2;
          float_word = g_1510AB760 + 1;
          scaled_value_2 = *(float *)&float_word_3;
          scaled_value_3 = *(float *)&float_word_4;
          scaled_value_4 = *(float *)&float_word_5;
          scaled_value_5 = *(float *)&float_word_6;
          state_scalar_2 = state_scalar_7;
          state_scalar_3 = state_scalar_8;
          ++g_1510AB760;
          --remaining_count_2;
        }
        while ( remaining_count_2 );
        scaled_ratio = saved_scaled_ratio;
      }
      comparison_result = remaining_count_3-- == 1;
      scaled_ratio = scaled_ratio + (float)(1.0 / (float)a5);
      weighted_sum = weighted_sum_4;
      weighted_sum_2 = weighted_sum_5;
      saved_scaled_ratio = scaled_ratio;
    }
    while ( !comparison_result );
    state_word = state_word_3;
    input_value = a5;
  }
  iteration_count = 0;
  if ( input_value <= 0 )
    return result;
  state_word_2 = g_1512DB764;
  result = (unsigned int)a5;
  do
  {
    if ( input_value_2 <= 0 )
      goto LABEL_32;
    scaled_index_4 = (input_value_2 + 1) * (iteration_count + 1);
    scaled_index_5 = (int)(state_word + iteration_count * (input_value_2 + 1));
    integer_sum = scaled_index_4 + state_word;
    iteration_count_2 = scaled_index_4 + state_word + 1;
    state_address_4 = &dword_140404A6C[3 * scaled_index_5 + 70687555];
    integer_difference = ~scaled_index_4 - state_word;
    scaled_index_6 = 3 * (integer_sum - scaled_index_5);
    do
    {
      if ( (int)(integer_difference + iteration_count_2) <= 0 && !iteration_count )
      {
        dword_140404A6C[4 * state_word_2 + 70998847] = -(input_value_2 + 1) - 1 + iteration_count_2;
LABEL_24:
        dword_140404A6C[4 * g_1512DB764 + 70998848] = iteration_count_2 - (input_value_2 + 1);
        goto LABEL_25;
      }
      scaled_index_11 = 3LL * float_word;
      dword_140404A6C[scaled_index_11 + 70687550] = *(state_address_4 - 5);
      dword_140404A6C[scaled_index_11 + 70687551] = *(state_address_4 - 4);
      dword_140404A6C[scaled_index_11 + 70687552] = *(state_address_4 - 3);
      scaled_index_12 = 3LL * (int)g_1510AB760;
      dword_140404A6C[scaled_index_12 + 70835006] = state_address_4[147451];
      dword_140404A6C[scaled_index_12 + 70835007] = state_address_4[147452];
      scaled_index_13 = 3LL * (int)g_1510AB760;
      dword_140404A6C[scaled_index_13 + 70736702] = state_address_4[49147];
      dword_140404A6C[scaled_index_13 + 70736703] = state_address_4[49148];
      dword_140404A6C[scaled_index_13 + 70736704] = state_address_4[49149];
      scaled_index_14 = 3LL * (int)g_1510AB760;
      dword_140404A6C[scaled_index_14 + 70785854] = state_address_4[98299];
      dword_140404A6C[scaled_index_14 + 70785855] = state_address_4[98300];
      dword_140404A6C[scaled_index_14 + 70785856] = state_address_4[98301];
      dword_140404A6C[4 * g_1512DB764 + 70998847] = g_1510AB760;
      integer_sum_2 = ++g_1510AB760;
      if ( !iteration_count )
        goto LABEL_24;
      scaled_index_15 = 3LL * integer_sum_2;
      dword_140404A6C[scaled_index_15 + 70687550] = *(state_address_4 - 2);
      dword_140404A6C[scaled_index_15 + 70687551] = *(state_address_4 - 1);
      dword_140404A6C[scaled_index_15 + 70687552] = *state_address_4;
      scaled_index_16 = 3LL * (int)g_1510AB760;
      dword_140404A6C[scaled_index_16 + 70835006] = state_address_4[147454];
      dword_140404A6C[scaled_index_16 + 70835007] = state_address_4[147455];
      scaled_index_17 = 3LL * (int)g_1510AB760;
      dword_140404A6C[scaled_index_17 + 70736702] = state_address_4[49150];
      dword_140404A6C[scaled_index_17 + 70736703] = state_address_4[49151];
      dword_140404A6C[scaled_index_17 + 70736704] = state_address_4[49152];
      scaled_index_18 = 3LL * (int)g_1510AB760;
      dword_140404A6C[scaled_index_18 + 70785854] = state_address_4[98302];
      dword_140404A6C[scaled_index_18 + 70785855] = state_address_4[98303];
      dword_140404A6C[scaled_index_18 + 70785856] = state_address_4[98304];
      dword_140404A6C[4 * g_1512DB764 + 70998848] = g_1510AB760++;
LABEL_25:
      dword_140404A6C[4 * g_1512DB764 + 70998849] = iteration_count_2;
      if ( (int)(integer_difference + iteration_count_2) <= 0 )
      {
        dword_140404A6C[4 * g_1512DB764 + 70998850] = iteration_count_2 - 1;
      }
      else
      {
        scaled_index_7 = 3LL * (int)g_1510AB760;
        dword_140404A6C[scaled_index_7 + 70687550] = state_address_4[scaled_index_6 - 5];
        dword_140404A6C[scaled_index_7 + 70687551] = state_address_4[scaled_index_6 - 4];
        dword_140404A6C[scaled_index_7 + 70687552] = state_address_4[scaled_index_6 - 3];
        scaled_index_8 = 3LL * (int)g_1510AB760;
        dword_140404A6C[scaled_index_8 + 70835006] = state_address_4[scaled_index_6 + 147451];
        dword_140404A6C[scaled_index_8 + 70835007] = state_address_4[scaled_index_6 + 147452];
        scaled_index_9 = 3LL * (int)g_1510AB760;
        dword_140404A6C[scaled_index_9 + 70736702] = state_address_4[scaled_index_6 + 49147];
        dword_140404A6C[scaled_index_9 + 70736703] = state_address_4[scaled_index_6 + 49148];
        dword_140404A6C[scaled_index_9 + 70736704] = state_address_4[scaled_index_6 + 49149];
        scaled_index_10 = 3LL * (int)g_1510AB760;
        dword_140404A6C[scaled_index_10 + 70785854] = state_address_4[scaled_index_6 + 98299];
        dword_140404A6C[scaled_index_10 + 70785855] = state_address_4[scaled_index_6 + 98300];
        dword_140404A6C[scaled_index_10 + 70785856] = state_address_4[scaled_index_6 + 98301];
        dword_140404A6C[4 * g_1512DB764 + 70998850] = g_1510AB760++;
      }
      ++iteration_count_2;
      state_address_4 += 3;
      dword_140404A6C[g_1512DB764 + 71064383] = a7;
      dword_140404A6C[g_1512DB764 + 71097151] = 0;
      float_word = g_1510AB760;
      state_word_2 = ++g_1512DB764;
    }
    while ( (int)(integer_difference + iteration_count_2) < input_value_2 );
    result = (unsigned int)a5;
LABEL_32:
    state_word = state_word_3;
    ++iteration_count;
  }
  while ( iteration_count < (int)result );
  return result;
}
#undef state_scalar_4
#undef state_scalar_5
#undef state_scalar_6
#undef state_scalar_7
#undef state_scalar_8
#undef saved_scaled_ratio
#undef state_word_3
#undef state_scalar_9
#undef state_scalar_10
#undef state_scalar_11
#undef state_scalar_12
#undef state_scalar_13
#undef state_scalar_14
#undef state_scalar_15
#undef state_scalar_16
#undef state_scalar_17
#undef state_scalar_18
#undef state_scalar_19
#undef state_scalar_20
#undef state_scalar_21
#undef state_scalar_22
#undef state_scalar_23
#undef state_scalar_24
#undef float_word_2
#undef float_word_3
#undef float_word_4
#undef float_word_5
#undef float_word_6
#undef remaining_count_3
#undef state_address_5
#undef state_address_6
#undef state_address_7
#undef state_address_8
#undef state_address_9
#undef weighted_sum_4
#undef weighted_sum_5
#undef retaddr
#undef state_scalar_25
//----- (0000000140068F80)
_BOOL8 sr_cpu_has_sse41(void) { return sr_client_cpu_sse41_probe(); }

