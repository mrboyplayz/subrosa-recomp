#include "shared_client.h"
 /* recovered in client_native_gaps.s */
// 1402431F0: variables would overlap: xmm0_8.8 and xmm0.16

//----- (0000000140243770) ----------------------------------------------------
int strcmp_sr(char *Str1,char *Str2)
{
  const unsigned char *a=(const unsigned char *)Str1,*b=(const unsigned char *)Str2;
  while(*a==*b){if(!*a)return 0;a++;b++;}
  return *a<*b?-1:1;
}
 /* recovered in client_native_gaps.s */
// 140243DA0: inconsistent variable size for 'xmm0_8.8'

//----- (0000000140243F84) ----------------------------------------------------
int abs(int Number)
{
  uint32_t sign=0u-(uint32_t)(Number<0);
  return (int32_t)(((uint32_t)Number^sign)-sign);
}
 /* recovered in client_native_gaps.s */

//----- (000000014024502C) ----------------------------------------------------
int         sub_14024502C(unsigned int ExceptionNum, struct sr_anon_67 *ExceptionPtr)
{
  _QWORD *returned_pointer;
  _QWORD *record_pointer;
  __int64 loaded_word;
  __int64 record_byte_offset;
  void (           *callback_function)(__int64);
  __int64 table_value;
  __int64 record_byte_offset_2;
  __int64 integer_sum;
  unsigned int loaded_word_2;
  __int64 saved_loaded_word;
  __int64 loaded_word_3;

  returned_pointer = (_QWORD *)sub_140255BEC();
  record_pointer = returned_pointer;
  if ( returned_pointer )
  {
    loaded_word = *returned_pointer;
    record_byte_offset = *returned_pointer;
    while ( *(_DWORD *)record_byte_offset != ExceptionNum )
    {
      record_byte_offset += 16;
      if ( record_byte_offset == loaded_word + 192 )
      {
        record_byte_offset = 0;
        break;
      }
    }
    if ( record_byte_offset )
    {
      callback_function = *(void (           **)(__int64))(record_byte_offset + 8);
      if ( callback_function )
      {
        if ( callback_function == (void (           *)(__int64))5 )
        {
          *(_QWORD *)(record_byte_offset + 8) = 0;
          return 1;
        }
        if ( callback_function == (void (           *)(__int64))1 )
          return -1;
        table_value = record_pointer[1];
        record_pointer[1] = (uint64)(uintptr_t)(ExceptionPtr);
        if ( *(_DWORD *)(record_byte_offset + 4) != 8 )
        {
          loaded_word_3 = *(unsigned int *)(record_byte_offset + 4);
          *(_QWORD *)(record_byte_offset + 8) = 0;
          callback_function(loaded_word_3);
          goto LABEL_37;
        }
        record_byte_offset_2 = loaded_word + 48;
        integer_sum = record_byte_offset_2 + 144;
        while ( record_byte_offset_2 != integer_sum )
        {
          *(_QWORD *)(record_byte_offset_2 + 8) = 0;
          record_byte_offset_2 += 16;
        }
        loaded_word_2 = *((_DWORD *)record_pointer + 4);
        switch ( *(_DWORD *)record_byte_offset )
        {
          case 0xC000008D:
            saved_loaded_word = 130;
            break;
          case 0xC000008E:
            saved_loaded_word = 131;
            break;
          case 0xC000008F:
            saved_loaded_word = 134;
            break;
          case 0xC0000090:
            saved_loaded_word = 129;
            break;
          case 0xC0000091:
            saved_loaded_word = 132;
            break;
          case 0xC0000092:
            saved_loaded_word = 138;
            break;
          case 0xC0000093:
            saved_loaded_word = 133;
            break;
          case 0xC00002B4:
            saved_loaded_word = 142;
            break;
          default:
            saved_loaded_word = loaded_word_2;
            if ( *(_DWORD *)record_byte_offset != -1073741131 )
            {
LABEL_35:
              ((void (           *)(__int64, __int64, void (           *)(__int64), _QWORD))callback_function)(8, saved_loaded_word, callback_function, 0);
              *((_DWORD *)record_pointer + 4) = loaded_word_2;
LABEL_37:
              record_pointer[1] = table_value;
              return -1;
            }
            saved_loaded_word = 141;
            break;
        }
        *((_DWORD *)record_pointer + 4) = saved_loaded_word;
        goto LABEL_35;
      }
    }
  }
  return 0;
}

//----- (00000001402451B8) ----------------------------------------------------
__int64            sub_1402451B8(__int64 a1, unsigned int *a2, int **a3, unsigned int *a4)
{
  crt_lock(*a2);
  _lambda_6e4b09c48022b2350581041d5f6b0c4c___operator_call(a3);
  return crt_unlock(*a4);
}

//----- (00000001402451F0) ----------------------------------------------------
__int64            sub_1402451F0(unsigned int a1, int **a2)
{
  __int64 callee_output_word;
  unsigned int input_value;
  unsigned int input_value_2;

  input_value = a1;
  input_value_2 = a1;
  return sub_1402451B8((__int64)&callee_output_word, &input_value_2, a2, &input_value);
}

//----- (0000000140245280) ----------------------------------------------------
__int64            Concurrency__details___Release_chore(
        Concurrency__details *this,
        struct Concurrency__details___Threadpool_chore *a2)
{
  __int64 loaded_word;
  __int64 result;

  loaded_word = *(_QWORD *)this;
  if ( loaded_word )
  {
    result = ((__int64 (           *)(__int64, struct Concurrency__details___Threadpool_chore *))FreeLibrary)(loaded_word, a2);
    *(_QWORD *)this = 0;
  }
  return result;
}

// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored

//----- (00000001402452AC) ----------------------------------------------------
int *           _lambda_6e4b09c48022b2350581041d5f6b0c4c___operator_call(int **a1)
{
  int scaled_index;
  unsigned int *state_address;
  int *result;

  if ( LOBYTE(g_144CBE7B0) )
    return result;
  _InterlockedExchange((volatile __int32 *)&g_144CBE7A0, 1);
  scaled_index = **a1;
  if ( !scaled_index )
  {
    if ( g_144CBE7A8 != _security_cookie )
      ((void (           *)(_QWORD, _QWORD, _QWORD))__ROR8__(
                                                      g_144CBE7A8 ^ _security_cookie,
                                                      _security_cookie & 0x3F))(
        0,
        0,
        0);
    state_address = &g_144CBEB00;
    goto LABEL_8;
  }
  if ( scaled_index == 1 )
  {
    state_address = &g_144CBEB18;
LABEL_8:
    sub_14024719C((_onexit_table_t *)state_address);
  }
  if ( !**a1 )
    sub_140247A00((sr_anon_92 *)&unk_14026E720, (sr_anon_92 *)&unk_14026E740);
  sub_140247A00((sr_anon_92 *)&unk_14026E748, (sr_anon_92 *)&unk_14026E750);
  result = a1[1];
  if ( !*result )
  {
    LOBYTE(g_144CBE7B0) = 1;
    result = a1[2];
    *(_BYTE *)result = 1;
  }
  return result;
}

//----- (0000000140245394) ----------------------------------------------------
_BOOL8            atexit_exception_filter(int a1)
{
  return a1 == -529697949;
}

//----- (00000001402453A0) ----------------------------------------------------
__int64            Concurrency__details___Release_chore_dup2(
        Concurrency__details *this,
        struct Concurrency__details___Threadpool_chore *a2)
{
  __int64 loaded_word;
  __int64 result;

  loaded_word = *(_QWORD *)this;
  if ( loaded_word )
  {
    result = ((__int64 (           *)(__int64, struct Concurrency__details___Threadpool_chore *))FreeLibrary)(loaded_word, a2);
    *(_QWORD *)this = 0;
  }
  return result;
}

// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored

//----- (00000001402453C4) ----------------------------------------------------
bool sub_1402453C4()
{
  return (unsigned int)((__int64 (*)(void))FreeLibrary)() != 0;
}

// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored

//----- (00000001402453D8) ----------------------------------------------------
__int64            sub_1402453D8(unsigned int a1, int a2, int a3)
{
  __int64 int64_result;
  __int64 loaded_word;
  __int64 result;
  _BYTE scratch_buffer[4];
  unsigned int selection_code;
  unsigned int selection_code_2;
  int *scratch_buffer_2[4];
  int input_value;
  int input_value_2;
  char selection_flag;

  input_value_2 = a3;
  input_value = a2;
  if ( !a3 )
  {
    int64_result = ((__int64 (           *)(_QWORD))GetModuleHandleW)(0);
    if ( int64_result )
    {
      if ( *(_WORD *)int64_result == 23117 )
      {
        loaded_word = int64_result + *(int *)(int64_result + 60);
        if ( *(_DWORD *)loaded_word == 17744
          && *(_WORD *)(loaded_word + 24) == 523
          && *(_DWORD *)(loaded_word + 132) > 0xEu
          && *(_DWORD *)(loaded_word + 248) )
        {
          try_cor_exit_process(a1);
        }
      }
    }
  }
  selection_flag = 0;
  scratch_buffer_2[0] = &input_value;
  scratch_buffer_2[1] = &input_value_2;
  scratch_buffer_2[2] = (int *)&selection_flag;
  selection_code = 2;
  selection_code_2 = 2;
  result = sub_1402451B8((__int64)scratch_buffer, &selection_code_2, scratch_buffer_2, &selection_code);
  if ( !input_value_2 )
    exit_or_terminate_process(a1);
  return result;
}

// 14026E298: invalid function type 'HMODULE (__stdcall *GetModuleHandleW)(LPCWSTR lpModuleName)' has been ignored

//----- (0000000140245494) ----------------------------------------------------
void            __attribute__((noreturn)) exit_or_terminate_process(unsigned int a1)
{
  __int64 int64_result;

  if ( (unsigned int)sub_14025A388() != 1 && (*(_DWORD *)(__readgsqword(0x60u) + 188) & 0x100) == 0 )
  {
    int64_result = ((__int64 (*)(void))GetCurrentProcess)();
    ((void (           *)(__int64, _QWORD))TerminateProcess)(int64_result, a1);
  }
  try_cor_exit_process(a1);
  ((void (           __attribute__((noreturn)) *)(_QWORD))ExitProcess)(a1);
}

// 14026E318: invalid function type 'HANDLE (__stdcall *GetCurrentProcess)()' has been ignored
// 14026E2B8: invalid function type 'BOOL (__stdcall *TerminateProcess)(HANDLE hProcess, UINT uExitCode)' has been ignored
// 14026E168: invalid function type 'void (__stdcall __noreturn *ExitProcess)(UINT uExitCode)' has been ignored

//----- (00000001402454EC) ----------------------------------------------------
bool is_managed_app_dup2()
{
  __int64 int64_result;
  __int64 loaded_word;
  bool result;

  int64_result = ((__int64 (           *)(_QWORD))GetModuleHandleW)(0);
  result = false;
  if ( int64_result )
  {
    if ( *(_WORD *)int64_result == 23117 )
    {
      loaded_word = int64_result + *(int *)(int64_result + 60);
      if ( *(_DWORD *)loaded_word == 17744 && *(_WORD *)(loaded_word + 24) == 523 && *(_DWORD *)(loaded_word + 132) > 0xEu && *(_DWORD *)(loaded_word + 248) )
        return true;
    }
  }
  return result;
}

// 14026E298: invalid function type 'HMODULE (__stdcall *GetModuleHandleW)(LPCWSTR lpModuleName)' has been ignored

//----- (0000000140245540) ----------------------------------------------------
bool should_call_terminate_process()
{
  return (unsigned int)sub_14025A388() != 1 && (*(_DWORD *)(__readgsqword(0x60u) + 188) & 0x100) == 0;
}

//----- (0000000140245570) ----------------------------------------------------
__int64 (           *           try_cor_exit_process(unsigned int a1))(_QWORD)
{
  __int64 (           *result)(_QWORD);
  __int64 phModule;

  phModule = 0;
  result = (__int64 (           *)(_QWORD))((__int64 (           *)(_QWORD,      __int16 *, __int64 *))GetModuleHandleExW)(
                                             0,
                                             L"mscoree.dll",
                                             &phModule);
  if ( (_DWORD)result )
  {
    result = (__int64 (           *)(_QWORD))((__int64 (           *)(__int64,      char *))GetProcAddress)(
                                               phModule,
                                               "CorExitProcess");
    if ( result )
      result = (__int64 (           *)(_QWORD))result(a1);
  }
  if ( phModule )
    return ((__int64 (           *(*)(void))(_QWORD))FreeLibrary)();
  return result;
}

// 14026E190: invalid function type 'BOOL (__stdcall *GetModuleHandleExW)(DWORD dwFlags, LPCWSTR lpModuleName, HMODULE *phModule)' has been ignored
// 14026E300: invalid function type 'FARPROC (__stdcall *GetProcAddress)(HMODULE hModule, LPCSTR lpProcName)' has been ignored
// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored

//----- (00000001402455D8) ----------------------------------------------------
void            sub_1402455D8(__int64 a1)
{
  g_144CBE7A8 = a1;
}

//----- (00000001402455F0) ----------------------------------------------------
__int64 sub_1402455F0()
{
  return sub_1402453D8(0, 0, 1);
}

//----- (0000000140245600) ----------------------------------------------------
__int64            COleServerDoc__NotifyClosed(COleServerDoc *this)
{
  return sub_1402453D8((unsigned int)this, 2, 0);
}

//----- (000000014024560C) ----------------------------------------------------
__int64 sub_14024560C()
{
  return g_144CBE7A0;
}

//----- (0000000140245614) ----------------------------------------------------
__int64            sub_140245614(__int64 a1)
{
  __int64 result;

  result = _security_cookie & 0x3F;
  if ( g_144CBE7A8 != _security_cookie )
    terminate_sr();
  g_144CBE7A8 = _security_cookie ^ __ROR8__(a1, 64 - (unsigned __int8)result);
  return result;
}

//----- (0000000140245650) ----------------------------------------------------
void         __attribute__((noreturn)) exit(int Code)
{
  sub_1402453D8(Code, 0, 0);
}

//----- (0000000140245678) ----------------------------------------------------
__int64            sub_140245678(int a1)
{
  int selection_code;
  char *state_address;
  unsigned __int64 lookup_index;
       char **returned_pointer;
       char **byte_cursor;
  unsigned int named_call_result;
  void *record_pointer;
  unsigned int iteration_count;
  _QWORD *i;
  void *record_pointer_2;
  unsigned __int64 selection_flag;
  unsigned __int64 selection_flag_2;

  selection_code = 0;
  if ( !a1 )
    return 0;
  if ( (unsigned int)(a1 - 1) > 1 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 22;
  }
  sub_14025F520();
  sub_14025B344(0, (__int64)&g_144CBE7C0, 0x104u);
  state_address = *(char **)&g_144CBFA38;
  g_144CBFA10 = (uint64)(uintptr_t)(&g_144CBE7C0);
  if ( !g_144CBFA38 || !**(_BYTE **)&g_144CBFA38 )
    state_address = (char *)&g_144CBE7C0;
  selection_flag = 0;
  selection_flag_2 = 0;
  sub_140245980(state_address, nullptr, nullptr, &selection_flag, &selection_flag_2);
  lookup_index = selection_flag;
  returned_pointer = (     char **)sub_140245E48(selection_flag, selection_flag_2, 1u);
  byte_cursor = returned_pointer;
  if ( returned_pointer )
  {
    sub_140245980(state_address, returned_pointer, &returned_pointer[lookup_index], &selection_flag, &selection_flag_2);
    if ( a1 != 1 )
    {
      record_pointer_2 = nullptr;
      named_call_result = common_expand_argv_wildcards__char(byte_cursor, (__int64 *)&record_pointer_2);
      if ( named_call_result )
      {
        record_pointer = record_pointer_2;
      }
      else
      {
        iteration_count = 0;
        for ( i = record_pointer_2; *i; ++iteration_count )
          ++i;
        g_144CBFA20 = iteration_count;
        named_call_result = 0;
        record_pointer = nullptr;
        g_144CBFA28 = (uint64)(uintptr_t)(record_pointer_2);
        record_pointer_2 = nullptr;
      }
      free_base(record_pointer);
      record_pointer_2 = nullptr;
      goto LABEL_19;
    }
    g_144CBFA20 = selection_flag - 1;
    g_144CBFA28 = (uint64)(uintptr_t)(byte_cursor);
    byte_cursor = nullptr;
  }
  else
  {
    selection_code = 12;
    *errno_sr() = 12;
  }
  named_call_result = selection_code;
LABEL_19:
  free_base(byte_cursor);
  return named_call_result;
}

//----- (00000001402457F0) ----------------------------------------------------
__int64            sub_1402457F0(int a1)
{
  int selection_code;
  __int16 *state_address;
  unsigned __int64 lookup_index;
  __int16 **returned_pointer;
       sr_anon_49 **record_pointer;
  unsigned int named_call_result;
  void *record_pointer_2;
  unsigned int iteration_count;
  _QWORD *i;
  void *record_pointer_3;
  unsigned __int64 selection_flag;
  unsigned __int64 selection_flag_2;

  selection_code = 0;
  if ( !a1 )
    return 0;
  if ( (unsigned int)(a1 - 1) > 1 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 22;
  }
  ((void (           *)(_QWORD, unsigned int *, __int64))GetModuleFileNameW)(0, &g_144CBE8D0, 260);
  state_address = *(__int16 **)&g_144CBFA40;
  g_144CBFA18 = (uint64)(uintptr_t)(&g_144CBE8D0);
  if ( !g_144CBFA40 || !**(_WORD **)&g_144CBFA40 )
    state_address = (__int16 *)&g_144CBE8D0;
  selection_flag = 0;
  selection_flag_2 = 0;
  sub_140245B44(state_address, nullptr, nullptr, &selection_flag, &selection_flag_2);
  lookup_index = selection_flag;
  returned_pointer = (__int16 **)sub_140245E48(selection_flag, selection_flag_2, 2u);
  record_pointer = (     sr_anon_49 **)returned_pointer;
  if ( returned_pointer )
  {
    sub_140245B44(state_address, returned_pointer, (__int16 *)&returned_pointer[lookup_index], &selection_flag, &selection_flag_2);
    if ( a1 != 1 )
    {
      record_pointer_3 = nullptr;
      named_call_result = common_expand_argv_wildcards__wchar_t(record_pointer, (__int64 *)&record_pointer_3);
      if ( named_call_result )
      {
        record_pointer_2 = record_pointer_3;
      }
      else
      {
        iteration_count = 0;
        for ( i = record_pointer_3; *i; ++iteration_count )
          ++i;
        g_144CBFA20 = iteration_count;
        named_call_result = 0;
        record_pointer_2 = nullptr;
        g_144CBFA30 = (uint64)(uintptr_t)(record_pointer_3);
        record_pointer_3 = nullptr;
      }
      free_base(record_pointer_2);
      record_pointer_3 = nullptr;
      goto LABEL_19;
    }
    g_144CBFA20 = selection_flag - 1;
    g_144CBFA30 = (uint64)(uintptr_t)(record_pointer);
    record_pointer = nullptr;
  }
  else
  {
    selection_code = 12;
    *errno_sr() = 12;
  }
  named_call_result = selection_code;
LABEL_19:
  free_base(record_pointer);
  return named_call_result;
}

// 14026E178: invalid function type 'DWORD (__stdcall *GetModuleFileNameW)(HMODULE hModule, LPWSTR lpFilename, DWORD nSize)' has been ignored

//----- (0000000140245980) ----------------------------------------------------
char            sub_140245980(char *a1, _QWORD *a2, _BYTE *a3, _QWORD *a4, _QWORD *a5)
{
  _BYTE *buffer_cursor;
  _QWORD *buffer_cursor_2;
  bool condition_flag;
  unsigned int loaded_word;
  bool condition_flag_2;
  char result;
  int selection_flag;
  unsigned int remaining_count;
  char input_byte;

  buffer_cursor = a3;
  buffer_cursor_2 = a2;
  *a5 = 0;
  *a4 = 1;
  if ( a2 )
  {
    *a2 = (uint64)(uintptr_t)(a3);
    buffer_cursor_2 = a2 + 1;
  }
  condition_flag = 0;
  do
  {
    if ( *a1 == 34 )
    {
      LOBYTE(loaded_word) = 34;
      condition_flag = !condition_flag;
      ++a1;
    }
    else
    {
      ++*a5;
      if ( buffer_cursor )
        *buffer_cursor++ = *a1;
      loaded_word = *a1++;
      if ( ismbblead(loaded_word) )
      {
        ++*a5;
        if ( buffer_cursor )
          *buffer_cursor++ = *a1;
        ++a1;
      }
      if ( !(_BYTE)loaded_word )
      {
        --a1;
        goto LABEL_19;
      }
    }
  }
  while ( condition_flag || (_BYTE)loaded_word != 32 && (_BYTE)loaded_word != 9 );
  if ( buffer_cursor )
    *(buffer_cursor - 1) = 0;
LABEL_19:
  condition_flag_2 = 0;
  while ( 1 )
  {
    result = *a1;
    if ( !*a1 )
      break;
    while ( result == 32 || result == 9 )
      result = *++a1;
    if ( !result )
      break;
    if ( buffer_cursor_2 )
      *buffer_cursor_2++ = (uint64)(uintptr_t)(buffer_cursor);
    ++*a4;
    while ( 1 )
    {
      selection_flag = 1;
      remaining_count = 0;
      while ( *a1 == 92 )
      {
        ++a1;
        ++remaining_count;
      }
      if ( *a1 == 34 )
      {
        if ( (remaining_count & 1) == 0 )
        {
          if ( condition_flag_2 && a1[1] == 34 )
          {
            ++a1;
          }
          else
          {
            selection_flag = 0;
            condition_flag_2 = !condition_flag_2;
          }
        }
        remaining_count >>= 1;
      }
      while ( remaining_count )
      {
        --remaining_count;
        if ( buffer_cursor )
          *buffer_cursor++ = 92;
        ++*a5;
      }
      input_byte = *a1;
      if ( !*a1 || !condition_flag_2 && (input_byte == 32 || input_byte == 9) )
        break;
      if ( selection_flag )
      {
        if ( buffer_cursor )
        {
          *buffer_cursor++ = input_byte;
          input_byte = *a1;
        }
        if ( ismbblead(input_byte) )
        {
          ++*a5;
          ++a1;
          if ( buffer_cursor )
            *buffer_cursor++ = *a1;
        }
        ++*a5;
      }
      ++a1;
    }
    if ( buffer_cursor )
      *buffer_cursor++ = 0;
    ++*a5;
  }
  if ( buffer_cursor_2 )
    *buffer_cursor_2 = 0;
  ++*a4;
  return result;
}

//----- (0000000140245B44) ----------------------------------------------------
__int64            sub_140245B44(__int16 *a1, __int16 **a2, __int16 *a3, _QWORD *a4, _QWORD *a5)
{
  bool condition_flag;
  __int16 loaded_word;
  bool condition_flag_2;
  __int64 result;
  int selection_flag;
  unsigned int remaining_count;
  __int16 loaded_word_2;

  *a5 = 0;
  *a4 = 1;
  if ( a2 )
    *a2++ = a3;
  condition_flag = 0;
  do
  {
    if ( *a1 == 34 )
    {
      loaded_word = 34;
      condition_flag = !condition_flag;
      ++a1;
    }
    else
    {
      ++*a5;
      if ( a3 )
        *a3++ = *a1;
      loaded_word = *a1++;
      if ( !loaded_word )
      {
        --a1;
        goto LABEL_15;
      }
    }
  }
  while ( condition_flag || loaded_word != 32 && loaded_word != 9 );
  if ( a3 )
    *(a3 - 1) = 0;
LABEL_15:
  condition_flag_2 = 0;
  while ( 1 )
  {
    result = (unsigned __int16)*a1;
    if ( !(_WORD)result )
      break;
    while ( (_WORD)result == 32 || (_WORD)result == 9 )
      result = (unsigned __int16)*++a1;
    if ( !(_WORD)result )
      break;
    if ( a2 )
      *a2++ = a3;
    ++*a4;
    while ( 1 )
    {
      selection_flag = 1;
      remaining_count = 0;
      while ( *a1 == 92 )
      {
        ++a1;
        ++remaining_count;
      }
      if ( *a1 == 34 )
      {
        if ( (remaining_count & 1) == 0 )
        {
          if ( condition_flag_2 && a1[1] == 34 )
          {
            ++a1;
          }
          else
          {
            selection_flag = 0;
            condition_flag_2 = !condition_flag_2;
          }
        }
        remaining_count >>= 1;
      }
      while ( remaining_count )
      {
        --remaining_count;
        if ( a3 )
          *a3++ = 92;
        ++*a5;
      }
      loaded_word_2 = *a1;
      if ( !*a1 || !condition_flag_2 && (loaded_word_2 == 32 || loaded_word_2 == 9) )
        break;
      if ( selection_flag )
      {
        if ( a3 )
          *a3++ = loaded_word_2;
        ++*a5;
      }
      ++a1;
    }
    if ( a3 )
      *a3++ = 0;
    ++*a5;
  }
  if ( a2 )
    *a2 = nullptr;
  ++*a4;
  return result;
}

//----- (0000000140245D20) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1019(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (0000000140245D3C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1020(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (0000000140245DF4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1021(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (0000000140245E10) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1022(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (0000000140245E2C) ----------------------------------------------------
bool            needs_trail_byte(char a1)
{
  return ismbblead(a1) != 0;
}

//----- (0000000140245E48) ----------------------------------------------------
__int64            sub_140245E48(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 record_word_offset;
  __int64 unused_written_slot;

  if ( a1 >= 0x1FFFFFFFFFFFFFFFLL )
    return 0;
  if ( a2 >= 0xFFFFFFFFFFFFFFFFuLL / a3 )
    return 0;
  record_word_offset = 8 * a1;
  if ( ~record_word_offset <= a3 * a2 )
    return 0;
  unused_written_slot = calloc_base(a3 * a2 + record_word_offset, 1);
  free_base(nullptr);
  return unused_written_slot;
}

//----- (0000000140245EA8) ----------------------------------------------------
__int64            sub_140245EA8(int a1)
{
  unsigned int unused_written_slot;
  unsigned int unused_written_slot_2;
  char *state_address;
  unsigned __int64 lookup_index;
       char **returned_pointer;
       char **byte_cursor;
       char **byte_cursor_2;
  unsigned int named_call_result;
  void *cached_block;
  unsigned int iteration_count;
  _QWORD *i;
  void *Block;
  unsigned __int64 selection_flag;
  unsigned __int64 selection_flag_2;

  unused_written_slot = 0;
  if ( a1 )
  {
    if ( (unsigned int)(a1 - 1) <= 1 )
    {
      sub_14025F520();
      sub_14025B344(0, (__int64)&g_144CBE7C0, 0x104u);
      state_address = *(char **)&g_144CBFA38;
      g_144CBFA10 = (uint64)(uintptr_t)(&g_144CBE7C0);
      if ( !g_144CBFA38 || !**(_BYTE **)&g_144CBFA38 )
        state_address = (char *)&g_144CBE7C0;
      selection_flag = 0;
      selection_flag_2 = 0;
      sub_140245980(state_address, nullptr, nullptr, &selection_flag, &selection_flag_2);
      lookup_index = selection_flag;
      returned_pointer = (     char **)sub_140245E48(selection_flag, selection_flag_2, 1u);
      byte_cursor = returned_pointer;
      if ( returned_pointer )
      {
        sub_140245980(state_address, returned_pointer, &returned_pointer[lookup_index], &selection_flag, &selection_flag_2);
        if ( a1 == 1 )
        {
          g_144CBFA28 = (uint64)(uintptr_t)(byte_cursor);
          g_144CBFA20 = selection_flag - 1;
          byte_cursor_2 = nullptr;
        }
        else
        {
          Block = nullptr;
          named_call_result = common_expand_argv_wildcards__char(byte_cursor, (__int64 *)&Block);
          if ( named_call_result )
          {
            free_base(Block);
            Block = nullptr;
            free_base(byte_cursor);
            return named_call_result;
          }
          cached_block = Block;
          iteration_count = 0;
          for ( i = Block; *i; ++iteration_count )
            ++i;
          g_144CBFA20 = iteration_count;
          Block = nullptr;
          g_144CBFA28 = (uint64)(uintptr_t)(cached_block);
          free_base(nullptr);
          byte_cursor_2 = byte_cursor;
          Block = nullptr;
        }
        free_base(byte_cursor_2);
        return unused_written_slot;
      }
      unused_written_slot_2 = 12;
      *errno_sr() = 12;
      free_base(nullptr);
    }
    else
    {
      unused_written_slot_2 = 22;
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
    }
    return unused_written_slot_2;
  }
  return unused_written_slot;
}

//----- (0000000140246030) ----------------------------------------------------
__int64            sub_140246030(int a1)
{
  unsigned int unused_written_slot;
  unsigned int unused_written_slot_2;
  __int16 *state_address;
  unsigned __int64 lookup_index;
  __int16 **returned_pointer;
       sr_anon_49 **record_pointer;
       sr_anon_49 **record_pointer_2;
  unsigned int named_call_result;
  void *cached_block;
  unsigned int iteration_count;
  _QWORD *i;
  void *Block;
  unsigned __int64 selection_flag;
  unsigned __int64 selection_flag_2;

  unused_written_slot = 0;
  if ( a1 )
  {
    if ( (unsigned int)(a1 - 1) <= 1 )
    {
      ((void (           *)(_QWORD, unsigned int *, __int64))GetModuleFileNameW)(0, &g_144CBE8D0, 260);
      state_address = *(__int16 **)&g_144CBFA40;
      g_144CBFA18 = (uint64)(uintptr_t)(&g_144CBE8D0);
      if ( !g_144CBFA40 || !**(_WORD **)&g_144CBFA40 )
        state_address = (__int16 *)&g_144CBE8D0;
      selection_flag = 0;
      selection_flag_2 = 0;
      sub_140245B44(state_address, nullptr, nullptr, &selection_flag, &selection_flag_2);
      lookup_index = selection_flag;
      returned_pointer = (__int16 **)sub_140245E48(selection_flag, selection_flag_2, 2u);
      record_pointer = (     sr_anon_49 **)returned_pointer;
      if ( returned_pointer )
      {
        sub_140245B44(state_address, returned_pointer, (__int16 *)&returned_pointer[lookup_index], &selection_flag, &selection_flag_2);
        if ( a1 == 1 )
        {
          g_144CBFA30 = (uint64)(uintptr_t)(record_pointer);
          g_144CBFA20 = selection_flag - 1;
          record_pointer_2 = nullptr;
        }
        else
        {
          Block = nullptr;
          named_call_result = common_expand_argv_wildcards__wchar_t(record_pointer, (__int64 *)&Block);
          if ( named_call_result )
          {
            free_base(Block);
            Block = nullptr;
            free_base(record_pointer);
            return named_call_result;
          }
          cached_block = Block;
          iteration_count = 0;
          for ( i = Block; *i; ++iteration_count )
            ++i;
          g_144CBFA20 = iteration_count;
          Block = nullptr;
          g_144CBFA30 = (uint64)(uintptr_t)(cached_block);
          free_base(nullptr);
          record_pointer_2 = record_pointer;
          Block = nullptr;
        }
        free_base(record_pointer_2);
        return unused_written_slot;
      }
      unused_written_slot_2 = 12;
      *errno_sr() = 12;
      free_base(nullptr);
    }
    else
    {
      unused_written_slot_2 = 22;
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
    }
    return unused_written_slot_2;
  }
  return unused_written_slot;
}

// 14026E178: invalid function type 'DWORD (__stdcall *GetModuleFileNameW)(HMODULE hModule, LPWSTR lpFilename, DWORD nSize)' has been ignored

//----- (00000001402461CC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_751()
{
  __int64 result;

  result = g_144CBEAF8;
  if ( !g_144CBEAF8 )
  {
    result = g_144CBEAE0;
    if ( !g_144CBEAE0 )
    {
      if ( !g_144CBEAE8
        || (unsigned int)initialize_narrow_environment_0() && (unsigned int)sub_1402466DC() )
      {
        result = 0;
      }
      else
      {
        result = g_144CBEAE0;
      }
    }
    g_144CBEAF8 = result;
  }
  return result;
}

//----- (000000014024621C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_752()
{
  __int64 result;

  result = g_144CBEAF0;
  if ( !g_144CBEAF0 )
  {
    result = g_144CBEAE8;
    if ( !g_144CBEAE8 )
    {
      if ( !g_144CBEAE0 || (unsigned int)sub_140246350() && (unsigned int)sub_1402467B0() )
        result = 0;
      else
        result = g_144CBEAE8;
    }
    g_144CBEAF0 = result;
  }
  return result;
}

//----- (000000014024626C) ----------------------------------------------------
__int64 sub_14024626C()
{
  __int64 result;

  result = g_144CBEAE0;
  if ( !g_144CBEAE0 )
  {
    if ( !g_144CBEAE8
      || (unsigned int)initialize_narrow_environment_0() && (unsigned int)sub_1402466DC() )
    {
      return 0;
    }
    else
    {
      return g_144CBEAE0;
    }
  }
  return result;
}

//----- (00000001402462A8) ----------------------------------------------------
__int64 sub_1402462A8()
{
  __int64 result;

  result = g_144CBEAE8;
  if ( !g_144CBEAE8 )
  {
    if ( !g_144CBEAE0 || (unsigned int)sub_140246350() && (unsigned int)sub_1402467B0() )
      return 0;
    else
      return g_144CBEAE8;
  }
  return result;
}

//----- (00000001402462E4) ----------------------------------------------------
__int64 initialize_narrow_environment_0()
{
  unsigned int unused_written_slot;
  char *returned_pointer;
  char *byte_cursor;
  void **returned_pointer_2;

  unused_written_slot = 0;
  if ( g_144CBEAE0 )
    return 0;
  sub_14025F520();
  returned_pointer = (char *)sub_14025FDC4();
  byte_cursor = returned_pointer;
  if ( returned_pointer )
  {
    returned_pointer_2 = sub_140246428(returned_pointer);
    if ( returned_pointer_2 )
    {
      g_144CBEAF8 = (uint64)(uintptr_t)(returned_pointer_2);
      g_144CBEAE0 = (uint64)(uintptr_t)(returned_pointer_2);
    }
    else
    {
      unused_written_slot = -1;
    }
    free_base(nullptr);
  }
  else
  {
    unused_written_slot = -1;
  }
  free_base(byte_cursor);
  return unused_written_slot;
}

//----- (0000000140246350) ----------------------------------------------------
__int64 sub_140246350()
{
  unsigned int unused_written_slot;
  __m128i *returned_pointer;
  __m128i *packed_vector;
  void **returned_pointer_2;

  unused_written_slot = 0;
  if ( g_144CBEAE8 )
    return 0;
  returned_pointer = sub_14025FEC8();
  packed_vector = returned_pointer;
  if ( returned_pointer )
  {
    returned_pointer_2 = sub_140246530(SR_VEC_PTR_LANES(128, returned_pointer, i16));
    if ( returned_pointer_2 )
    {
      g_144CBEAF0 = (uint64)(uintptr_t)(returned_pointer_2);
      g_144CBEAE8 = (uint64)(uintptr_t)(returned_pointer_2);
    }
    else
    {
      unused_written_slot = -1;
    }
    free_base(nullptr);
  }
  else
  {
    unused_written_slot = -1;
  }
  free_base(packed_vector);
  return unused_written_slot;
}

//----- (0000000140246428) ----------------------------------------------------
void **           sub_140246428(char *Source)
{
  void **unused_written_slot;
  __int64 cached_integer_sum;
  char *cached_source;
  char i;
  __int64 integer_sum;
  __int64 element_index;
  __int64 calloc_base_result;
  void **saved_calloc_base_result;
  __int64 *buffer_cursor;
  __int64 element_index_2;
  __int64 integer_sum_2;
  __int64 calloc_base_result_2;
  __int64 saved_calloc_base_result_2;

  unused_written_slot = nullptr;
  cached_integer_sum = 0;
  cached_source = Source;
  for ( i = *Source; i; i = *cached_source )
  {
    integer_sum = cached_integer_sum + 1;
    if ( i == 61 )
      integer_sum = cached_integer_sum;
    cached_integer_sum = integer_sum;
    element_index = -1;
    do
      ++element_index;
    while ( cached_source[element_index] );
    cached_source += element_index + 1;
  }
  calloc_base_result = calloc_base(cached_integer_sum + 1, 8);
  saved_calloc_base_result = (void **)calloc_base_result;
  if ( calloc_base_result )
  {
    buffer_cursor = (__int64 *)calloc_base_result;
    while ( *Source )
    {
      element_index_2 = -1;
      do
        ++element_index_2;
      while ( Source[element_index_2] );
      integer_sum_2 = element_index_2 + 1;
      if ( *Source != 61 )
      {
        calloc_base_result_2 = calloc_base(integer_sum_2, 1);
        saved_calloc_base_result_2 = calloc_base_result_2;
        if ( !calloc_base_result_2 )
        {
          unknown_libname_753(saved_calloc_base_result);
          free_base(nullptr);
          goto LABEL_20;
        }
        if ( (unsigned int)strcpy_s_sr(calloc_base_result_2, integer_sum_2, Source) )
        {
          crt_invoke_watson();
          do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
        }
        *buffer_cursor++ = saved_calloc_base_result_2;
        free_base(nullptr);
      }
      Source += integer_sum_2;
    }
    unused_written_slot = saved_calloc_base_result;
  }
LABEL_20:
  free_base(nullptr);
  return unused_written_slot;
}

// 140246528: control flows out of bounds to 14024652D

//----- (0000000140246530) ----------------------------------------------------
void **           sub_140246530(__int16 *a1)
{
  void **unused_written_slot;
  __int64 cached_integer_sum;
  __int16 *running_total;
  __int16 i;
  __int64 integer_sum;
  __int64 element_index;
  __int64 calloc_base_result;
  void **saved_calloc_base_result;
  _QWORD *buffer_cursor;
  __int64 element_index_2;
  __int64 integer_sum_2;
  _WORD *calloc_base_result_2;
  _WORD *saved_calloc_base_result_2;

  unused_written_slot = nullptr;
  cached_integer_sum = 0;
  running_total = a1;
  for ( i = *a1; i; i = *running_total )
  {
    integer_sum = cached_integer_sum + 1;
    if ( i == 61 )
      integer_sum = cached_integer_sum;
    cached_integer_sum = integer_sum;
    element_index = -1;
    do
      ++element_index;
    while ( running_total[element_index] );
    running_total += element_index + 1;
  }
  calloc_base_result = calloc_base(cached_integer_sum + 1, 8);
  saved_calloc_base_result = (void **)calloc_base_result;
  if ( calloc_base_result )
  {
    buffer_cursor = (_QWORD *)calloc_base_result;
    while ( *a1 )
    {
      element_index_2 = -1;
      do
        ++element_index_2;
      while ( a1[element_index_2] );
      integer_sum_2 = element_index_2 + 1;
      if ( *a1 != 61 )
      {
        calloc_base_result_2 = (_WORD *)calloc_base(integer_sum_2, 2);
        saved_calloc_base_result_2 = calloc_base_result_2;
        if ( !calloc_base_result_2 )
        {
          unknown_libname_754(saved_calloc_base_result);
          free_base(nullptr);
          goto LABEL_20;
        }
        if ( (unsigned int)sub_140259444(calloc_base_result_2, integer_sum_2, (__int64)a1) )
        {
          crt_invoke_watson();
          do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
        }
        *buffer_cursor++ = (uint64)(uintptr_t)(saved_calloc_base_result_2);
        free_base(nullptr);
      }
      a1 += integer_sum_2;
    }
    unused_written_slot = saved_calloc_base_result;
  }
LABEL_20:
  free_base(nullptr);
  return unused_written_slot;
}

// 14024663D: control flows out of bounds to 140246642

//----- (0000000140246644) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_753(void **Block)
{
  void *record_pointer;
  void **cached_block;

  if ( Block )
  {
    record_pointer = *Block;
    cached_block = Block;
    while ( record_pointer )
    {
      free_base(record_pointer);
      record_pointer = *++cached_block;
    }
    free_base(Block);
  }
}

//----- (0000000140246688) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_754(void **Block)
{
  void *record_pointer;
  void **cached_block;

  if ( Block )
  {
    record_pointer = *Block;
    cached_block = Block;
    while ( record_pointer )
    {
      free_base(record_pointer);
      record_pointer = *++cached_block;
    }
    free_base(Block);
  }
}

//----- (00000001402466DC) ----------------------------------------------------
__int64 sub_1402466DC()
{
  __int64 *buffer_cursor;
  __int64 result;
  int wide_char_to_multi_byte_result;
  int saved_wide_char_to_multi_byte_result;
  __int64 calloc_base_result;
  _BYTE *saved_calloc_base_result;
  __int64 packed_word_bits;
  __int64 packed_word_bits_2;

  buffer_cursor = *(__int64 **)&g_144CBEAE8;
  if ( !g_144CBEAE8 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    result = *buffer_cursor;
    if ( !*buffer_cursor )
      break;
    LODWORD(packed_word_bits) = 0;
    wide_char_to_multi_byte_result = crt_wide_char_to_multi_byte(0, 0, result, 0xFFFFFFFFLL, 0, packed_word_bits, 0, 0);
    saved_wide_char_to_multi_byte_result = wide_char_to_multi_byte_result;
    if ( !wide_char_to_multi_byte_result )
      return 0xFFFFFFFFLL;
    calloc_base_result = calloc_base(wide_char_to_multi_byte_result, 1);
    saved_calloc_base_result = (_BYTE *)calloc_base_result;
    if ( !calloc_base_result || (LODWORD(packed_word_bits_2) = saved_wide_char_to_multi_byte_result, !(unsigned int)crt_wide_char_to_multi_byte(0, 0, *buffer_cursor, 0xFFFFFFFFLL, calloc_base_result, packed_word_bits_2, 0, 0)) )
    {
      free_base(saved_calloc_base_result);
      return 0xFFFFFFFFLL;
    }
    _dcrt_set_variable_in_narrow_environment_nolock_sr(saved_calloc_base_result, 0);
    free_base(nullptr);
    ++buffer_cursor;
  }
  return result;
}

//----- (00000001402467B0) ----------------------------------------------------
__int64 sub_1402467B0()
{
  __int64 *buffer_cursor;
  __int64 result;
  int multi_byte_to_wide_char_result;
  _WORD *calloc_base_result;

  buffer_cursor = *(__int64 **)&g_144CBEAE0;
  if ( !g_144CBEAE0 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    result = *buffer_cursor;
    if ( !*buffer_cursor )
      break;
    multi_byte_to_wide_char_result = crt_multi_byte_to_wide_char();
    if ( !multi_byte_to_wide_char_result )
      return 0xFFFFFFFFLL;
    calloc_base_result = (_WORD *)calloc_base(multi_byte_to_wide_char_result, 2);
    if ( !calloc_base_result || !(unsigned int)crt_multi_byte_to_wide_char() )
    {
      free_base(calloc_base_result);
      return 0xFFFFFFFFLL;
    }
    common_set_variable_in_environment_nolock__wchar_t(calloc_base_result, 0);
    free_base(nullptr);
    ++buffer_cursor;
  }
  return result;
}

//----- (00000001402468C4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_757(__int64 a1, __int64 (           *a2)(__int64))
{
  __int64 integer_sum;
  __int64 record_byte_offset;
  __int64 result;

  integer_sum = a1 + 8;
  record_byte_offset = a1;
  do
  {
    result = a2(record_byte_offset);
    record_byte_offset += 8;
  }
  while ( record_byte_offset != integer_sum );
  return result;
}

//----- (0000000140246908) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_758(__int64 a1, __int64 (           *a2)(__int64))
{
  __int64 integer_sum;
  __int64 record_byte_offset;
  __int64 result;

  integer_sum = a1 + 8;
  record_byte_offset = a1;
  do
  {
    result = a2(record_byte_offset);
    record_byte_offset += 8;
  }
  while ( record_byte_offset != integer_sum );
  return result;
}

//----- (000000014024694C) ----------------------------------------------------
void            sub_14024694C(void ***a1)
{
  void **loaded_word;

  loaded_word = *a1;
  if ( loaded_word != *(void ***)&g_144CBEAF8 )
    unknown_libname_753(loaded_word);
}

//----- (0000000140246968) ----------------------------------------------------
void            sub_140246968(void ***a1)
{
  void **loaded_word;

  loaded_word = *a1;
  if ( loaded_word != *(void ***)&g_144CBEAF0 )
    unknown_libname_754(loaded_word);
}

//----- (000000014024698C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1023(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (00000001402469C0) ----------------------------------------------------
__int64            sub_1402469C0(__int64 a1,      char *a2)
{
  return (int)crt_multi_byte_to_wide_char();
}

//----- (00000001402469E4) ----------------------------------------------------
__int64            sub_1402469E4(unsigned int a1, __int64 a2)
{
  __int64 packed_word_bits;

  LODWORD(packed_word_bits) = 0;
  return (int)crt_wide_char_to_multi_byte(a1, 0, a2, 0xFFFFFFFFLL, 0, packed_word_bits, 0, 0);
}

//----- (0000000140246A14) ----------------------------------------------------
__int64            sub_140246A14()
{
  return (int)crt_multi_byte_to_wide_char();
}

//----- (0000000140246A38) ----------------------------------------------------
__int64            sub_140246A38(unsigned int a1, __int64 a2, __int64 a3, int a4)
{
  __int64 packed_word_bits;

  LODWORD(packed_word_bits) = a4;
  return (int)crt_wide_char_to_multi_byte(a1, 0, a2, 0xFFFFFFFFLL, a3, packed_word_bits, 0, 0);
}

//----- (0000000140246AA4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char *           unknown_libname_761(char *a1, unsigned __int64 a2)
{
  char *result;

  result = a1 + 8;
  if ( a1 < a1 + 8 )
  {
    memset64(a1, a2, a1 < a1 + 8);
    return (char *)a2;
  }
  return result;
}

//----- (0000000140246ACC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char *           unknown_libname_762(char *a1, unsigned __int64 a2)
{
  char *result;

  result = a1 + 8;
  if ( a1 < a1 + 8 )
  {
    memset64(a1, a2, a1 < a1 + 8);
    return (char *)a2;
  }
  return result;
}

//----- (0000000140246B18) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1024(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (0000000140246B38) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_764()
{
  __int64 result;

  result = g_144CBEAE0;
  if ( !g_144CBEAE0 )
  {
    if ( !g_144CBEAE8
      || (unsigned int)initialize_narrow_environment_0() && (unsigned int)sub_1402466DC() )
    {
      return 0;
    }
    else
    {
      return g_144CBEAE0;
    }
  }
  return result;
}

//----- (0000000140246B74) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_765()
{
  __int64 result;

  result = g_144CBEAE8;
  if ( !g_144CBEAE8 )
  {
    if ( !g_144CBEAE0 || (unsigned int)sub_140246350() && (unsigned int)sub_1402467B0() )
      return 0;
    else
      return g_144CBEAE8;
  }
  return result;
}

//----- (0000000140246BB0) ----------------------------------------------------
void sub_140246BB0()
{
  sub_14024694C((void ***)(unsigned int *)&g_144CBEAE0);
  sub_140246968((void ***)(unsigned int *)&g_144CBEAE8);
  unknown_libname_753(*(void ***)&g_144CBEAF8);
  unknown_libname_754(*(void ***)&g_144CBEAF0);
}

//----- (0000000140246BF8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_766()
{
  __int64 result;

  result = g_144CBEAF8;
  if ( !g_144CBEAF8 )
  {
    result = g_144CBEAE0;
    if ( !g_144CBEAE0 )
    {
      if ( !g_144CBEAE8
        || (unsigned int)initialize_narrow_environment_0() && (unsigned int)sub_1402466DC() )
      {
        result = 0;
      }
      else
      {
        result = g_144CBEAE0;
      }
    }
    g_144CBEAF8 = result;
  }
  return result;
}

//----- (0000000140246C48) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_767()
{
  __int64 result;

  result = g_144CBEAF0;
  if ( !g_144CBEAF0 )
  {
    result = g_144CBEAE8;
    if ( !g_144CBEAE8 )
    {
      if ( !g_144CBEAE0 || (unsigned int)sub_140246350() && (unsigned int)sub_1402467B0() )
        result = 0;
      else
        result = g_144CBEAE8;
    }
    g_144CBEAF0 = result;
  }
  return result;
}

//----- (0000000140246C98) ----------------------------------------------------
// attributes: thunk
int         initialize_narrow_environment()
{
  return initialize_narrow_environment_0();
}

//----- (0000000140246CC0) ----------------------------------------------------
__int64            sub_140246CC0(__int64 a1, unsigned int *a2, _QWORD **a3, unsigned int *a4)
{
  crt_lock(*a2);
  LODWORD(a3) = _lambda_22ebabd17bc4fa466a2aca6d8deb888d___operator_call(a3);
  crt_unlock(*a4);
  return (unsigned int)a3;
}

//----- (0000000140246CFC) ----------------------------------------------------
__int64            sub_140246CFC(__int64 a1, unsigned int *a2, _QWORD **a3, unsigned int *a4)
{
  crt_lock(*a2);
  LODWORD(a3) = _lambda_f03950bc5685219e0bcd2087efbe011e___operator_call(a3);
  crt_unlock(*a4);
  return (unsigned int)a3;
}

//----- (0000000140246D38) ----------------------------------------------------
__int64            sub_140246D38(unsigned int a1, _QWORD **a2)
{
  __int64 callee_output_word;
  unsigned int input_value;
  unsigned int input_value_2;

  input_value = a1;
  input_value_2 = a1;
  return sub_140246CC0((__int64)&callee_output_word, &input_value_2, a2, &input_value);
}

//----- (0000000140246D60) ----------------------------------------------------
__int64            sub_140246D60(unsigned int a1, _QWORD **a2)
{
  __int64 callee_output_word;
  unsigned int input_value;
  unsigned int input_value_2;

  input_value = a1;
  input_value_2 = a1;
  return sub_140246CFC((__int64)&callee_output_word, &input_value_2, a2, &input_value);
}

//----- (0000000140246E54) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1025(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (0000000140246E70) ----------------------------------------------------
__int64            _lambda_22ebabd17bc4fa466a2aca6d8deb888d___operator_call(_QWORD **a1)
{
  _QWORD *record_pointer;
  __int64 cached_security_cookie;
  __int64 xor_value;
  __int64 xor_value_2;
  char *ror8_result;
  __int64 ror8_result_2;
  char *ror8_result_3;
  unsigned __int64 state_address;
  __int64 saved_state_address;
  unsigned __int64 integer_sum;
  __int64 recalloc_base_result;
  unsigned __int64 shifted_bits;

  record_pointer = (_QWORD *)**a1;
  if ( record_pointer )
  {
    cached_security_cookie = _security_cookie;
    xor_value = *record_pointer ^ _security_cookie;
    xor_value_2 = _security_cookie ^ record_pointer[1];
    ror8_result = (char *)__ROR8__(_security_cookie ^ record_pointer[2], _security_cookie & 0x3F);
    ror8_result_2 = __ROR8__(xor_value, _security_cookie & 0x3F);
    ror8_result_3 = (char *)__ROR8__(xor_value_2, _security_cookie & 0x3F);
    if ( ror8_result_3 != ror8_result )
    {
LABEL_14:
      *(_QWORD *)ror8_result_3 = cached_security_cookie ^ __ROR8__(*a1[1], 64 - ((unsigned __int8)cached_security_cookie & 0x3Fu));
      *(_QWORD *)**a1 = _security_cookie ^ __ROR8__(ror8_result_2, 64 - (_security_cookie & 0x3Fu));
      *(_QWORD *)(**a1 + 8LL) = _security_cookie ^ __ROR8__(ror8_result_3 + 8, 64 - (_security_cookie & 0x3Fu));
      *(_QWORD *)(**a1 + 16LL) = _security_cookie ^ __ROR8__(ror8_result, 64 - (_security_cookie & 0x3Fu));
      return 0;
    }
    state_address = (__int64)&ror8_result[-ror8_result_2] >> 3;
    saved_state_address = state_address;
    if ( state_address > 0x200 )
      saved_state_address = 512;
    integer_sum = state_address + saved_state_address;
    if ( !integer_sum )
      integer_sum = 32;
    if ( integer_sum >= state_address && (recalloc_base_result = recalloc_base(ror8_result_2, integer_sum, 8), free_base(nullptr), recalloc_base_result)
      || (integer_sum = state_address + 4, recalloc_base_result = recalloc_base(ror8_result_2, state_address + 4, 8), free_base(nullptr), recalloc_base_result) )
    {
      cached_security_cookie = _security_cookie;
      ror8_result_3 = (char *)(recalloc_base_result + 8 * state_address);
      ror8_result = (char *)(recalloc_base_result + 8 * integer_sum);
      ror8_result_2 = recalloc_base_result;
      shifted_bits = (unsigned __int64)(ror8_result - ror8_result_3 + 7) >> 3;
      if ( ror8_result_3 > ror8_result )
        shifted_bits = 0;
      if ( shifted_bits )
      {
        memset64(ror8_result_3, _security_cookie, shifted_bits);
        cached_security_cookie = _security_cookie;
      }
      goto LABEL_14;
    }
  }
  return 0xFFFFFFFFLL;
}

//----- (0000000140247040) ----------------------------------------------------
__int64            _lambda_f03950bc5685219e0bcd2087efbe011e___operator_call(_QWORD **a1)
{
  _QWORD *record_pointer;
  __int64 cached_security_cookie;
  char *ror8_result;
  _QWORD *ror8_result_2;
  __int64 cached_security_cookie_2;
  char masked_bits;
  char *saved_ror8_result;
  _QWORD *saved_ror8_result_2;
  __int64 loaded_word;
  _QWORD *record_pointer_2;
  char *ror8_result_3;
  _QWORD *ror8_result_4;

  record_pointer = (_QWORD *)**a1;
  if ( !record_pointer )
    return 0xFFFFFFFFLL;
  cached_security_cookie = _security_cookie;
  ror8_result = (char *)__ROR8__(*record_pointer ^ _security_cookie, _security_cookie & 0x3F);
  ror8_result_2 = (_QWORD *)__ROR8__(_security_cookie ^ record_pointer[1], _security_cookie & 0x3F);
  if ( (unsigned __int64)(ror8_result - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    cached_security_cookie_2 = _security_cookie;
    masked_bits = _security_cookie & 0x3F;
    saved_ror8_result = ror8_result;
    saved_ror8_result_2 = ror8_result_2;
    while ( --ror8_result_2 >= (_QWORD *)ror8_result )
    {
      loaded_word = *ror8_result_2;
      if ( *ror8_result_2 != cached_security_cookie_2 )
      {
        *ror8_result_2 = cached_security_cookie_2;
        ((void (*)(void))__ROR8__(cached_security_cookie ^ loaded_word, masked_bits))();
        cached_security_cookie = _security_cookie;
        masked_bits = _security_cookie & 0x3F;
        record_pointer_2 = (_QWORD *)**a1;
        ror8_result_3 = (char *)__ROR8__(_security_cookie ^ *record_pointer_2, _security_cookie & 0x3F);
        ror8_result_4 = (_QWORD *)__ROR8__(_security_cookie ^ record_pointer_2[1], _security_cookie & 0x3F);
        if ( ror8_result_3 != saved_ror8_result || ror8_result_4 != saved_ror8_result_2 )
        {
          saved_ror8_result = ror8_result_3;
          ror8_result = ror8_result_3;
          saved_ror8_result_2 = ror8_result_4;
          ror8_result_2 = ror8_result_4;
        }
      }
    }
    if ( ror8_result != (char *)-1LL )
    {
      free_base(ror8_result);
      cached_security_cookie = _security_cookie;
    }
    *(_QWORD *)**a1 = cached_security_cookie;
    *(_QWORD *)(**a1 + 8LL) = cached_security_cookie;
    *(_QWORD *)(**a1 + 16LL) = cached_security_cookie;
  }
  return 0;
}

//----- (0000000140247160) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1026(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (000000014024718C) ----------------------------------------------------
__int64            sub_14024718C(__int64 a1)
{
  return sub_140247200(&g_144CBEB00, a1);
}

//----- (000000014024719C) ----------------------------------------------------
int         sub_14024719C(_onexit_table_t *Table)
{
  _onexit_table_t **state_address;
  _onexit_table_t *cached_table;
  __int64 callee_output_word;
  unsigned int selection_code;
  unsigned int selection_code_2;

  cached_table = Table;
  state_address = &cached_table;
  selection_code = 2;
  selection_code_2 = 2;
  return sub_140246CFC((__int64)&callee_output_word, &selection_code_2, &state_address, &selection_code);
}

//----- (00000001402471D8) ----------------------------------------------------
int         sub_1402471D8(sr_anon_91 *Table)
{
  __int64 cached_security_cookie;

  if ( !Table )
    return -1;
  if ( *(_QWORD *)Table == *((_QWORD *)Table + 2) )
  {
    cached_security_cookie = _security_cookie;
    *(_QWORD *)Table = _security_cookie;
    *((_QWORD *)Table + 1) = cached_security_cookie;
    *((_QWORD *)Table + 2) = cached_security_cookie;
  }
  return 0;
}

//----- (0000000140247200) ----------------------------------------------------
__int64            sub_140247200(__int64 a1, __int64 a2)
{
  unsigned int selection_code;
  _QWORD *scratch_buffer[3];
  __int64 input_value;
  __int64 input_value_2;
  char callee_output_word;
  unsigned int selection_code_2;

  input_value_2 = a2;
  input_value = a1;
  scratch_buffer[0] = &input_value;
  scratch_buffer[1] = &input_value_2;
  selection_code_2 = 2;
  selection_code = 2;
  return sub_140246CC0((__int64)&callee_output_word, &selection_code, scratch_buffer, &selection_code_2);
}

// 140247200: invalid function type 'int __cdecl sub_140247200(#91 *Table, _onexit_t Function)' has been ignored

//----- (000000014024725C) ----------------------------------------------------
char initialize_c()
{
  sub_1402471D8((sr_anon_91 *)&g_144CBEB00);
  sub_1402471D8((sr_anon_91 *)&g_144CBEB18);
  return 1;
}

//----- (0000000140247288) ----------------------------------------------------
char uninitialize_environment()
{
  sub_140246BB0();
  return 1;
}

//----- (00000001402472A0) ----------------------------------------------------
char initialize_pointers()
{
  __int64 cached_security_cookie;

  cached_security_cookie = _security_cookie;
  sub_14024CE80(_security_cookie);
  sub_140260BDC(cached_security_cookie);
  sub_14025BC1C(cached_security_cookie);
  sub_1402477E0(cached_security_cookie);
  sub_1402455D8(cached_security_cookie);
  return 1;
}

//----- (00000001402472E8) ----------------------------------------------------
char uninitialize_allocated_memory()
{
  if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)&g_144CBFA00, 0xFFFFFFFF) == 1
    && *(_UNKNOWN **)&g_144CBFA00 != &unk_1403025A0 )
  {
    free_base(*(void **)&g_144CBFA00);
    g_144CBFA00 = (uint64)(uintptr_t)(&unk_1403025A0);
  }
  return 1;
}

//----- (0000000140247328) ----------------------------------------------------
char uninitialize_allocated_io_buffers()
{
  free_base(*(void **)&g_144CBF758);
  g_144CBF758 = 0;
  free_base(*(void **)&g_144CBF760);
  g_144CBF760 = 0;
  free_base(*(void **)&g_144CBFA28);
  g_144CBFA28 = 0;
  free_base(*(void **)&g_144CBFA30);
  g_144CBFA30 = 0;
  return 1;
}

//----- (00000001402473B0) ----------------------------------------------------
void            sub_1402473B0(void **a1)
{
  __int64 iteration_count;
  void **buffer_cursor;
  __int64 comparison_result;

  iteration_count = 0;
  buffer_cursor = a1;
  comparison_result = a1 < a1 + 1;
  if ( a1 < a1 + 1 )
  {
    do
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)*buffer_cursor, 0xFFFFFFFF) == 1 && *buffer_cursor != &unk_1403025A0 )
      {
        free_base(*buffer_cursor);
        *buffer_cursor = &unk_1403025A0;
      }
      ++buffer_cursor;
      ++iteration_count;
    }
    while ( iteration_count != comparison_result );
  }
}

//----- (0000000140247420) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_778(__int64 a1, void **a2)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)*a2, 0xFFFFFFFF) == 1 && *a2 != &unk_1403025A0 )
  {
    free_base(*a2);
    *a2 = &unk_1403025A0;
  }
}

//----- (000000014024746C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
char *           unknown_libname_779(char *a1, unsigned __int64 a2)
{
  char *result;

  result = a1 + 8;
  if ( a1 < a1 + 8 )
  {
    memset64(a1, a2, a1 < a1 + 8);
    return (char *)a2;
  }
  return result;
}

//----- (0000000140247494) ----------------------------------------------------
char _acrt_initialize_sr()
{
  return sub_140260AA8(
           (unsigned __int8 (**)(void))&off_140289FB0,
           (unsigned __int8 (**)(void))L"Runtime Error!\n\nProgram: ");
}

//----- (00000001402474A8) ----------------------------------------------------
bool _acrt_thread_attach()
{
  return sub_140255BEC() != 0;
}

// 1402474A8: invalid function type '__vcrt_bool __cdecl _acrt_thread_attach()' has been ignored

//----- (00000001402474BC) ----------------------------------------------------
char _acrt_thread_detach()
{
  sub_140255A2C();
  return 1;
}

// 1402474BC: invalid function type '__crt_bool __cdecl _acrt_thread_detach()' has been ignored

//----- (00000001402474CC) ----------------------------------------------------
char            sub_1402474CC(char a1)
{
  if ( !a1 )
    return sub_140260B28((__int64)&off_140289FB0, (__int64)L"Runtime Error!\n\nProgram: ");
  if ( g_144CBE6B0 )
    flushall();
  return 1;
}

// 1402474CC: invalid function type '?' has been ignored

//----- (0000000140247504) ----------------------------------------------------
char ATL__CAtlStringMgr__StaticInitialize()
{
  _acrt_uninitialize_ptd_0();
  return 1;
}

//----- (0000000140247518) ----------------------------------------------------
bool should_write_error_to_console()
{
  int set_error_mode_result;

  set_error_mode_result = set_error_mode(3);
  return set_error_mode_result == 1 || !set_error_mode_result && g_144CBEB30 == 1;
}

//----- (0000000140247544) ----------------------------------------------------
__int64            write_string_to_console(char *a1)
{
  __int64 int64_result;
  char *cached_buffer;
  __int16 loaded_word;
  __int64 unused_local;
  __int128 NumberOfBytesWritten;
  _BYTE Buffer[500];
  char callee_output_word;
  __int64 unused_local_2;

  int64_result = ((__int64 (           *)(__int64))GetStdHandle)(4294967284LL);
  if ( (unsigned __int64)(int64_result - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    cached_buffer = Buffer;
    do
    {
      *cached_buffer++ = *a1;
      if ( cached_buffer == &callee_output_word )
        break;
      loaded_word = *(_WORD *)a1;
      a1 += 2;
    }
    while ( loaded_word );
    Buffer[499] = 0;
    LODWORD(NumberOfBytesWritten) = 0;
    ((void (           *)(__int64, _BYTE *, _QWORD, __int128 *, _QWORD))WriteFile)(
      int64_result,
      Buffer,
      (unsigned int)cached_buffer - (unsigned int)Buffer - 1,
      &NumberOfBytesWritten,
      0);
  }
  return 0; /* no result: rax is residue of the call at 0x140247567 / 0x1402475CC */
}

// 14026E188: invalid function type 'HANDLE (__stdcall *GetStdHandle)(DWORD nStdHandle)' has been ignored
// 14026E160: invalid function type 'BOOL (__stdcall *WriteFile)(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped)' has been ignored

//----- (00000001402475EC) ----------------------------------------------------
__int64            sub_1402475EC(char *a1)
{
  int set_error_mode_result;
  __int64 iteration_count;

  set_error_mode_result = set_error_mode(3);
  if ( set_error_mode_result == 1 || !set_error_mode_result && g_144CBEB30 == 1 )
    return write_string_to_console(a1);
  if ( (unsigned int)sub_140259444(&g_144CBEB40, 788, (__int64)L"Runtime Error!\n\nProgram: ") )
    goto LABEL_15;
  HIWORD(g_144CBED78) = 0;
  if ( !(unsigned int)((__int64 (           *)(_QWORD, char *, __int64))GetModuleFileNameW)(
                        0,
                        (char *)&g_144CBEB70 + 2,
                        260) )
  {
    if ( (unsigned int)sub_140259444((_WORD *)&g_144CBEB70 + 1, 763, (__int64)L"<program name unknown>") )
      goto LABEL_15;
  }
  iteration_count = -1;
  do
    ++iteration_count;
  while ( *((_WORD *)&g_144CBEB70 + iteration_count + 1) );
  if ( (unsigned __int64)(iteration_count + 1) > 0x3C
    && (unsigned int)sub_140260D80((_WORD *)&g_144CBEAFC + iteration_count, 763 - (iteration_count - 59), (__int64)asc_140285E10, 3)
    || (unsigned int)sub_14025ACB4(&g_144CBEB40, 788, (__int64)L"\n\n")
    || (unsigned int)sub_14025ACB4(&g_144CBEB40, 788, (__int64)a1) )
  {
LABEL_15:
    crt_invoke_watson();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  return unknown_libname_892(
           (__int64)&g_144CBEB40,
           (__int64)L"Microsoft Visual C++ Runtime Library",
           0x12010u);
}

// 140247743: control flows out of bounds to 140247748
// 14026E178: invalid function type 'DWORD (__stdcall *GetModuleFileNameW)(HMODULE hModule, LPWSTR lpFilename, DWORD nSize)' has been ignored

//----- (000000014024774C) ----------------------------------------------------
__int64 sub_14024774C()
{
  return g_144CBEB30;
}

//----- (0000000140247754) ----------------------------------------------------
void            sub_140247754(unsigned int a1)
{
  g_144CBEB30 = a1;
}

//----- (0000000140247794) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
char *           unknown_libname_782(char *a1, unsigned __int64 a2)
{
  char *result;

  result = a1 + 8;
  if ( a1 < a1 + 8 )
  {
    memset64(a1, a2, a1 < a1 + 8);
    return (char *)a2;
  }
  return result;
}

//----- (00000001402477C0) ----------------------------------------------------
bool sub_1402477C0()
{
  return __ROR8__(g_144CBF168 ^ _security_cookie, _security_cookie & 0x3F) != 0;
}

//----- (00000001402477E0) ----------------------------------------------------
void            sub_1402477E0(__int64 a1)
{
  g_144CBF168 = a1;
}

//----- (00000001402477E8) ----------------------------------------------------
__int64            sub_1402477E8(__int64 a1)
{
  __int64 (           *callback_function)(__int64);

  callback_function = (__int64 (           *)(__int64))__ROR8__(
                                          g_144CBF168 ^ _security_cookie,
                                          _security_cookie & 0x3F);
  if ( callback_function )
    return callback_function(a1);
  else
    return 0;
}

//----- (0000000140247818) ----------------------------------------------------
void            sub_140247818(__int64 a1)
{
  g_144CBF168 = _security_cookie ^ __ROR8__(a1, 64 - (_security_cookie & 0x3Fu));
}

//----- (0000000140247840) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
unsigned int *unknown_libname_783()
{
  unsigned int *state_address;
  bool condition_flag;
  unsigned __int8 loaded_word;

  sub_14025F520();
  state_address = &g_144CBF170;
  if ( g_144CBFA38 )
    state_address = *(unsigned int **)&g_144CBFA38;
  condition_flag = 0;
  while ( 1 )
  {
    loaded_word = *(_BYTE *)state_address;
    if ( *(_BYTE *)state_address <= 0x20u )
    {
      if ( !loaded_word )
        return state_address;
      if ( !condition_flag )
        break;
    }
    if ( loaded_word == 34 )
      condition_flag = !condition_flag;
    if ( ismbblead(loaded_word) )
      state_address = (unsigned int *)((char *)state_address + 1);
    state_address = (unsigned int *)((char *)state_address + 1);
  }
  do
  {
    if ( loaded_word > 0x20u )
      break;
    state_address = (unsigned int *)((char *)state_address + 1);
    loaded_word = *(_BYTE *)state_address;
  }
  while ( *(_BYTE *)state_address );
  return state_address;
}

//----- (00000001402478B0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
unsigned int *unknown_libname_784()
{
  unsigned int *state_address;
  bool condition_flag;
  unsigned __int16 loaded_word;

  state_address = &g_144CBF174;
  condition_flag = 0;
  if ( g_144CBFA40 )
    state_address = *(unsigned int **)&g_144CBFA40;
  while ( 1 )
  {
    loaded_word = *(_WORD *)state_address;
    if ( *(_WORD *)state_address <= 0x20u )
    {
      if ( !loaded_word )
        return state_address;
      if ( !condition_flag )
        break;
    }
    if ( loaded_word == 34 )
      condition_flag = !condition_flag;
    state_address = (unsigned int *)((char *)state_address + 2);
  }
  do
  {
    if ( loaded_word > 0x20u )
      break;
    state_address = (unsigned int *)((char *)state_address + 2);
    loaded_word = *(_WORD *)state_address;
  }
  while ( *(_WORD *)state_address );
  return state_address;
}

//----- (0000000140247920) ----------------------------------------------------
bool            should_copy_another_character(unsigned __int8 a1)
{
  return ismbblead(a1) != 0;
}

//----- (000000014024793C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
unsigned int *unknown_libname_785()
{
  unsigned int *state_address;
  bool condition_flag;
  unsigned __int8 loaded_word;

  sub_14025F520();
  state_address = &g_144CBF170;
  if ( g_144CBFA38 )
    state_address = *(unsigned int **)&g_144CBFA38;
  condition_flag = 0;
  while ( 1 )
  {
    loaded_word = *(_BYTE *)state_address;
    if ( *(_BYTE *)state_address <= 0x20u )
    {
      if ( !loaded_word )
        return state_address;
      if ( !condition_flag )
        break;
    }
    if ( loaded_word == 34 )
      condition_flag = !condition_flag;
    if ( ismbblead(loaded_word) )
      state_address = (unsigned int *)((char *)state_address + 1);
    state_address = (unsigned int *)((char *)state_address + 1);
  }
  do
  {
    if ( loaded_word > 0x20u )
      break;
    state_address = (unsigned int *)((char *)state_address + 1);
    loaded_word = *(_BYTE *)state_address;
  }
  while ( *(_BYTE *)state_address );
  return state_address;
}

//----- (00000001402479AC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
unsigned int *unknown_libname_786()
{
  unsigned int *state_address;
  bool condition_flag;
  unsigned __int16 loaded_word;

  state_address = &g_144CBF174;
  condition_flag = 0;
  if ( g_144CBFA40 )
    state_address = *(unsigned int **)&g_144CBFA40;
  while ( 1 )
  {
    loaded_word = *(_WORD *)state_address;
    if ( *(_WORD *)state_address <= 0x20u )
    {
      if ( !loaded_word )
        return state_address;
      if ( !condition_flag )
        break;
    }
    if ( loaded_word == 34 )
      condition_flag = !condition_flag;
    state_address = (unsigned int *)((char *)state_address + 2);
  }
  do
  {
    if ( loaded_word > 0x20u )
      break;
    state_address = (unsigned int *)((char *)state_address + 2);
    loaded_word = *(_WORD *)state_address;
  }
  while ( *(_WORD *)state_address );
  return state_address;
}

//----- (0000000140247A00) ----------------------------------------------------
void         sub_140247A00(sr_anon_92 *First, sr_anon_92 *Last)
{
  sr_anon_92 *cached_first;
  __int64 iteration_count;
  unsigned __int64 shifted_bits;

  cached_first = First;
  iteration_count = 0;
  shifted_bits = (unsigned __int64)((intptr_t)((uintptr_t)Last - (uintptr_t)First) + 7) >> 3;
  if ( First > Last )
    shifted_bits = 0;
  if ( shifted_bits )
  {
    do
    {
      if ( *(_QWORD *)cached_first )
        (*(void (**)(void))cached_first)();
      cached_first = (sr_anon_92 *)((char *)cached_first + 8);
      ++iteration_count;
    }
    while ( iteration_count != shifted_bits );
  }
}

//----- (0000000140247A64) ----------------------------------------------------
int         sub_140247A64(_PIFV *First, _PIFV *Last)
{
  _PIFV *cached_first;
  bool i;
  int result;

  cached_first = First;
  for ( i = First == Last; !i; i = cached_first == Last )
  {
    if ( *(_QWORD *)cached_first )
    {
      result = (*(__int64 (**)(void))cached_first)();
      if ( result )
        return result;
    }
    cached_first = (_PIFV *)((char *)cached_first + 8);
  }
  return 0;
}

//----- (0000000140247AA8) ----------------------------------------------------
__int64            sub_140247AA8(_DWORD *a1)
{
  if ( a1 )
  {
    *a1 = g_144CBFA58;
    return 0;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 22;
  }
}

//----- (0000000140247AD8) ----------------------------------------------------
__int64            sub_140247AD8(__int32 a1)
{
  if ( ((a1 - 0x4000) & 0xFFFF3FFF) != 0 || a1 == 49152 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 22;
  }
  else
  {
    _InterlockedExchange((volatile __int32 *)&g_144CBFA58, a1);
    return 0;
  }
}

// 140247AD8: invalid function type 'errno_t __cdecl sub_140247AD8(int Mode)' has been ignored

//----- (0000000140247B18) ----------------------------------------------------
int         sub_140247B18(int FileHandle, int Mode)
{
  __int64 shifted_bits;
  int unused_written_slot;

  if ( Mode != 0x4000 && Mode != 0x8000 && Mode != 0x10000 && Mode != 0x40000 && Mode != 0x20000 )
  {
    *errno_sr() = 22;
LABEL_17:
    crt_invalid_parameter_noinfo();
    return -1;
  }
  if ( FileHandle == -2 )
  {
    *errno_sr() = 9;
    return -1;
  }
  if ( FileHandle < 0
    || FileHandle >= g_144CBF750
    || (shifted_bits = (__int64)FileHandle >> 6,
        (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 72LL * (FileHandle & 0x3F) + 56) & 1) == 0) )
  {
    *errno_sr() = 9;
    goto LABEL_17;
  }
  sub_140261068(FileHandle);
  unused_written_slot = -1;
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 72LL * (FileHandle & 0x3F) + 56) & 1) != 0 )
    unused_written_slot = sub_140247C1C(FileHandle, Mode);
  else
    *errno_sr() = 9;
  sub_140261150(FileHandle);
  return unused_written_slot;
}

//----- (0000000140247C1C) ----------------------------------------------------
__int64            sub_140247C1C(int a1, int a2)
{
  __int64 shifted_bits;
  __int64 masked_bits;
  __int64 masked_bits_2;
  char loaded_word;
  char loaded_word_2;
  __int64 result;

  shifted_bits = (__int64)a1 >> 6;
  masked_bits = a1 & 0x3F;
  masked_bits_2 = *(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401];
  loaded_word = *(_BYTE *)(masked_bits_2 + 72 * masked_bits + 56);
  loaded_word_2 = *(_BYTE *)(masked_bits_2 + 72 * masked_bits + 57);
  if ( a2 == 0x4000 )
  {
    *(_BYTE *)(masked_bits_2 + 72 * masked_bits + 56) = loaded_word | 0x80;
    *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 72 * masked_bits + 57) = 0;
  }
  else if ( a2 == 0x8000 )
  {
    *(_BYTE *)(masked_bits_2 + 72 * masked_bits + 56) = loaded_word & 0x7F;
  }
  else if ( ((a2 - 0x10000) & 0xFFFEFFFF) != 0 )
  {
    if ( a2 == 0x40000 )
    {
      *(_BYTE *)(masked_bits_2 + 72 * masked_bits + 56) = loaded_word | 0x80;
      *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 72 * masked_bits + 57) = 1;
    }
  }
  else
  {
    *(_BYTE *)(masked_bits_2 + 72 * masked_bits + 56) = loaded_word | 0x80;
    *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 72 * masked_bits + 57) = 2;
  }
  if ( (loaded_word & 0x80) == 0 )
    return 0x8000;
  if ( !loaded_word_2 )
    return 0x4000;
  result = 0x10000;
  if ( loaded_word_2 == 1 )
    return 0x40000;
  return result;
}

//----- (0000000140247D18) ----------------------------------------------------
__int64            sub_140247D18(__int64 a1, unsigned int *a2, __int64 ***a3, unsigned int *a4)
{
  crt_lock(*a2);
  sub_1402627A8(***a3);
  return crt_unlock(*a4);
}

//----- (0000000140247D58) ----------------------------------------------------
__int64            sub_140247D58(__int64 a1, unsigned int *a2, __int64 **a3, unsigned int *a4)
{
  __int64 loaded_word;
  void *table_value;
  char *byte_cursor;
  int masked_bits;
  int loaded_word_2;
  __int64 *table_value_2;

  crt_lock(*a2);
  sub_140248950(**a3, *(_OWORD **)(*a3[1] + 144));
  loaded_word = sub_1402494A8((_DWORD *)**a3, *(_DWORD *)a3[3], *a3[4]);
  *a3[2] = loaded_word;
  if ( loaded_word )
  {
    table_value = (void *)*a3[4];
    if ( table_value )
    {
      byte_cursor = (char *)(&unk_140302588 - (_UNKNOWN *)table_value);
      do
      {
        masked_bits = *(unsigned __int16 *)&byte_cursor[(_QWORD)table_value];
        loaded_word_2 = *(unsigned __int16 *)table_value - masked_bits;
        if ( loaded_word_2 )
          break;
        table_value = (char *)table_value + 2;
      }
      while ( masked_bits );
      if ( loaded_word_2 )
        _InterlockedExchange((volatile __int32 *)&g_144CBF178, 1);
    }
    updatetlocinfoEx_nolock((__int64 *)(*a3[1] + 144), **a3);
    sub_140262A34(**a3);
    table_value_2 = a3[1];
    if ( (*(_BYTE *)(*table_value_2 + 936) & 2) == 0 && (dword_140302B88 & 1) == 0 )
    {
      updatetlocinfoEx_nolock((__int64 *)(unsigned int *)&g_144CBF778, *(_QWORD *)(*table_value_2 + 144));
      off_140302B78 = *(_UNKNOWN ***)(g_144CBF778 + 248LL);
      off_140302590 = **(__int16 ***)&g_144CBF778;
      dword_14030258C = *(_DWORD *)(g_144CBF778 + 8LL);
    }
  }
  else
  {
    sub_140262A34(**a3);
    sub_140262834(**a3);
  }
  return crt_unlock(*a4);
}

//----- (0000000140247E94) ----------------------------------------------------
__int64            sub_140247E94(__int64 a1, unsigned int *a2, __int64 a3, unsigned int *a4)
{
  __int64 *i;

  crt_lock(*a2);
  for ( i = (__int64 *)(unsigned int *)&g_144CBF778; i != (__int64 *)&g_144CBF780; ++i )
  {
    if ( (__int16 **)*i != &off_140302420 )
      *i = updatetlocinfoEx_nolock(i, (__int64)&off_140302420);
  }
  return crt_unlock(*a4);
}

//----- (0000000140247F04) ----------------------------------------------------
__int64            sub_140247F04(__int64 a1, __int64 a2, __int64 **a3, __int64 *a4)
{
  __int64 result;

  _lambda_2a444430fde8c29194d880d93eed5e8f___operator_call(a3);
  result = *a4;
  *(_DWORD *)(*(_QWORD *)*a4 + 936LL) &= ~0x10u;
  return result;
}

//----- (0000000140247F30) ----------------------------------------------------
__int64            sub_140247F30(__int64 a1, unsigned int *a2, __int64 a3, unsigned int *a4)
{
  crt_lock(*a2);
  _InterlockedIncrement(*(volatile signed __int32 **)(**(_QWORD **)a3 + 8LL));
  return crt_unlock(*a4);
}

//----- (0000000140247F74) ----------------------------------------------------
__int64            sub_140247F74(unsigned int a1, __int64 a2)
{
  __int64 callee_output_word;
  unsigned int input_value;
  unsigned int input_value_2;

  input_value = a1;
  input_value_2 = a1;
  return sub_140247E94((__int64)&callee_output_word, &input_value_2, a2, &input_value);
}

//----- (0000000140247F9C) ----------------------------------------------------
__int64            sub_140247F9C(unsigned int a1, __int64 ***a2)
{
  __int64 callee_output_word;
  unsigned int input_value;
  unsigned int input_value_2;

  input_value = a1;
  input_value_2 = a1;
  return sub_140247D18((__int64)&callee_output_word, &input_value_2, a2, &input_value);
}

//----- (0000000140247FC4) ----------------------------------------------------
__int64            sub_140247FC4(unsigned int a1, __int64 a2)
{
  __int64 callee_output_word;
  unsigned int input_value;
  unsigned int input_value_2;

  input_value = a1;
  input_value_2 = a1;
  return sub_140247F30((__int64)&callee_output_word, &input_value_2, a2, &input_value);
}

//----- (0000000140247FEC) ----------------------------------------------------
__int64            sub_140247FEC(unsigned int a1, __int64 **a2)
{
  __int64 callee_output_word;
  unsigned int input_value;
  unsigned int input_value_2;

  input_value = a1;
  input_value_2 = a1;
  return sub_140247D58((__int64)&callee_output_word, &input_value_2, a2, &input_value);
}

//----- (000000014024802C) ----------------------------------------------------
void            sub_14024802C(__int16 ***a1)
{
  __int16 ***record_pointer;
  __int64 *updatetlocinfoex_nolock_result;

  record_pointer = a1 + 1;
  updatetlocinfoex_nolock_result = (__int64 *)a1;
  do
  {
    if ( (__int16 **)*updatetlocinfoex_nolock_result != &off_140302420 )
      *updatetlocinfoex_nolock_result = updatetlocinfoEx_nolock(updatetlocinfoex_nolock_result, (__int64)&off_140302420);
    ++updatetlocinfoex_nolock_result;
  }
  while ( updatetlocinfoex_nolock_result != (__int64 *)record_pointer );
}

//----- (0000000140248134) ----------------------------------------------------
_expandlocale_locale_name_cache *           sub_140248134(
        sr_anon_128 *this,
        sr_anon_49 *     a2,
        __int64 a3,
        struct __crt_qualified_locale_data *     a4)
{
  *(_QWORD *)this = (uint64)(uintptr_t)(a2);
  *((_QWORD *)this + 2) = (uint64)(uintptr_t)(a4);
  *((_QWORD *)this + 1) = a3;
  *((_BYTE *)this + 24) = 0;
  if ( (unsigned int)sub_140260D80(a2, a3, (__int64)a4 + 600, 85) )
  {
    crt_invoke_watson();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  return this;
}

// 140248187: control flows out of bounds to 14024818C

//----- (0000000140248190) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1027(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (00000001402481AC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1028(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (00000001402481C8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1029(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (00000001402481E4) ----------------------------------------------------
void            sub_1402481E4(sr_anon_128 *this)
{
  if ( !*((_BYTE *)this + 24) )
  {
    if ( (unsigned int)sub_140260D80(
                         (_WORD *)(*((_QWORD *)this + 2) + 600LL),
                         85,
                         *(_QWORD *)this,
                         *((_QWORD *)this + 1)) )
    {
      crt_invoke_watson();
      __debugbreak();
    }
  }
}

//----- (000000014024825C) ----------------------------------------------------
void            _lambda_2a444430fde8c29194d880d93eed5e8f___operator_call(__int64 **a1)
{
  __int64 calloc_base_result;
  __int64 *scratch_buffer[7];
  char callee_output_word;
  unsigned int selection_code;
  unsigned int selection_code_2;

  calloc_base_result = calloc_base(1, 344);
  **a1 = calloc_base_result;
  free_base(nullptr);
  if ( calloc_base_result )
  {
    scratch_buffer[0] = *a1;
    scratch_buffer[1] = a1[1];
    scratch_buffer[2] = a1[2];
    scratch_buffer[3] = a1[3];
    scratch_buffer[4] = a1[4];
    selection_code = 4;
    selection_code_2 = 4;
    sub_140247D58((__int64)&callee_output_word, &selection_code_2, scratch_buffer, &selection_code);
  }
}

//----- (00000001402482EC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_792(__int64 a1, __int16 ***a2)
{
  if ( *a2 != &off_140302420 )
    *a2 = (__int16 **)updatetlocinfoEx_nolock((__int64 *)a2, (__int64)&off_140302420);
}

//----- (000000014024831C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void unknown_libname_793()
{
  if ( *(__int16 ***)&g_144CBF778 != &off_140302420 )
    g_144CBF778 = updatetlocinfoEx_nolock(
                                              (__int64 *)(unsigned int *)&g_144CBF778,
                                              (__int64)&off_140302420);
}

//----- (000000014024839C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_797(__int64 **a1)
{
  __int64 loaded_word;
  void *table_value;
  char *byte_cursor;
  int masked_bits;
  int loaded_word_2;
  __int64 *table_value_2;

  sub_140248950(**a1, *(_OWORD **)(*a1[1] + 144));
  loaded_word = sub_1402494A8((_DWORD *)**a1, *(_DWORD *)a1[3], *a1[4]);
  *a1[2] = loaded_word;
  if ( loaded_word )
  {
    table_value = (void *)*a1[4];
    if ( table_value )
    {
      byte_cursor = (char *)(&unk_140302588 - (_UNKNOWN *)table_value);
      do
      {
        masked_bits = *(unsigned __int16 *)&byte_cursor[(_QWORD)table_value];
        loaded_word_2 = *(unsigned __int16 *)table_value - masked_bits;
        if ( loaded_word_2 )
          break;
        table_value = (char *)table_value + 2;
      }
      while ( masked_bits );
      if ( loaded_word_2 )
        _InterlockedExchange((volatile __int32 *)&g_144CBF178, 1);
    }
    updatetlocinfoEx_nolock((__int64 *)(*a1[1] + 144), **a1);
    sub_140262A34(**a1);
    table_value_2 = a1[1];
    if ( (*(_BYTE *)(*table_value_2 + 936) & 2) == 0 && (dword_140302B88 & 1) == 0 )
    {
      updatetlocinfoEx_nolock((__int64 *)(unsigned int *)&g_144CBF778, *(_QWORD *)(*table_value_2 + 144));
      off_140302B78 = *(_UNKNOWN ***)(g_144CBF778 + 248LL);
      off_140302590 = **(__int16 ***)&g_144CBF778;
      dword_14030258C = *(_DWORD *)(g_144CBF778 + 8LL);
    }
  }
  else
  {
    sub_140262A34(**a1);
    sub_140262834(**a1);
  }
}

//----- (00000001402484BC) ----------------------------------------------------
__int64            sub_1402484BC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;

  if ( (unsigned int)sub_140260D80((_WORD *)(*(_QWORD *)(a1 + 16) + 600LL), 85, a2, a3)
    || (result = sub_140260D80(*(_WORD **)a1, *(_QWORD *)(a1 + 8), a2, a3), (_DWORD)result) )
  {
    crt_invoke_watson();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  *(_BYTE *)(a1 + 24) = 1;
  return result;
}

// 14024852D: control flows out of bounds to 140248532

//----- (0000000140248534) ----------------------------------------------------
__int64            sub_140248534(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;

  result = sub_140260D80(*(_WORD **)a1, *(_QWORD *)(a1 + 8), a2, a3);
  if ( (_DWORD)result )
  {
    crt_invoke_watson();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  *(_BYTE *)(a1 + 24) = 1;
  return result;
}

// 14024856D: control flows out of bounds to 140248572

//----- (00000001402485B0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1030(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (00000001402485CC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1031(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (00000001402485E8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1032(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (0000000140248608) ----------------------------------------------------
_WORD *           sub_140248608(__m128i *a1)
{
  unsigned __int64 call_result;
  _WORD *malloc_base_result;
  _WORD *unused_written_slot;

  if ( !a1 )
    return nullptr;
  call_result = sub_140254F48(a1, 0x55u);
  if ( call_result >= 0x55 )
    return nullptr;
  malloc_base_result = (_WORD *)malloc_base();
  unused_written_slot = malloc_base_result;
  if ( !malloc_base_result )
    return nullptr;
  if ( (unsigned int)sub_140260D80(malloc_base_result, call_result + 1, (__int64)a1, call_result + 1) )
  {
    crt_invoke_watson();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  return unused_written_slot;
}

// 140248684: control flows out of bounds to 140248689

//----- (000000014024868C) ----------------------------------------------------
__int64 sub_14024868C()
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)&g_144CBF178, 1);
}

//----- (0000000140248698) ----------------------------------------------------
__int64 sub_140248698()
{
  __int64 callee_output_word;
  unsigned int selection_code;
  unsigned int selection_code_2;

  selection_code = 4;
  selection_code_2 = 4;
  return sub_140247E94((__int64)&callee_output_word, &selection_code_2, (__int64)&callee_output_word, &selection_code);
}

//----- (00000001402486D8) ----------------------------------------------------
void            sub_1402486D8(_WORD *a1, __int64 a2, __int64 a3)
{
  if ( (unsigned int)sub_140259444(a1, a2, a3) )
  {
    crt_invoke_watson();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  if ( *(_WORD *)(a3 + 128) )
    sub_1402491B0(a1, a2, 2);
  if ( *(_WORD *)(a3 + 256) )
    sub_1402491B0(a1, a2, 2);
}

// 140248774: control flows out of bounds to 140248779

//----- (000000014024877C) ----------------------------------------------------
__int64            sub_14024877C(_WORD *a1, _WORD *a2)
{
  int i;
  __int16 *state_address;
  __int16 loaded_word;
  _WORD *record_pointer;
  __int64 selection_code;
  unsigned __int64 call_result;

  crt_memset((void *)(uintptr_t)(a1), 0, 0x1CAu);
  if ( !*a2 )
    return 0;
  if ( *a2 == 46 && a2[1] )
  {
    if ( (unsigned int)sub_140260D80(a1 + 128, 16, (__int64)(a2 + 1), 15) )
    {
LABEL_27:
      crt_invoke_watson();
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
    a1[143] = 0;
    return 0;
  }
  for ( i = 0; ; ++i )
  {
    call_result = sub_1402625A4(a2, L"_.,");
    if ( !call_result )
      break;
    state_address = &a2[call_result];
    loaded_word = *state_address;
    if ( i )
    {
      if ( i == 1 )
      {
        if ( call_result >= 0x40 || loaded_word == 95 )
          return 0xFFFFFFFFLL;
        record_pointer = a1 + 64;
        selection_code = 64;
      }
      else
      {
        if ( i != 2 || call_result >= 0x10 || loaded_word && loaded_word != 44 )
          return 0xFFFFFFFFLL;
        record_pointer = a1 + 128;
        selection_code = 16;
      }
      if ( (unsigned int)sub_140260D80(record_pointer, selection_code, (__int64)a2, call_result) )
        goto LABEL_27;
    }
    else
    {
      if ( call_result >= 0x40 )
        return 0xFFFFFFFFLL;
      if ( (unsigned int)sub_140260D80(a1, 64, (__int64)a2, call_result) )
        goto LABEL_27;
      i = loaded_word == 46;
    }
    if ( loaded_word == 44 || !loaded_word )
      return 0;
    a2 = state_address + 1;
  }
  return 0xFFFFFFFFLL;
}

// 1402488DC: control flows out of bounds to 1402488E1

//----- (00000001402488E4) ----------------------------------------------------
int         sub_1402488E4(int Flag)
{
  unsigned __int64 call_result;
  int loaded_word;
  int comparison_result;
  unsigned int masked_bits;

  call_result = sub_140255A70();
  loaded_word = *(_DWORD *)(call_result + 936);
  comparison_result = -((loaded_word & 2) != 0);
  if ( Flag == -1 )
  {
    dword_140302B88 = -1;
  }
  else if ( Flag )
  {
    if ( Flag == 1 )
    {
      masked_bits = loaded_word | 2;
    }
    else
    {
      if ( Flag != 2 )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return -1;
      }
      masked_bits = loaded_word & 0xFFFFFFFD;
    }
    *(_DWORD *)(call_result + 936) = masked_bits;
  }
  return comparison_result + 2;
}

//----- (0000000140248950) ----------------------------------------------------
void            sub_140248950(__int64 a1, _OWORD *a2)
{
  __int64 remaining_count;
  _OWORD *record_byte_offset;
  __int128 table_value;

  if ( a2 && a1 && (_OWORD *)a1 != a2 )
  {
    remaining_count = 2;
    record_byte_offset = (_OWORD *)a1;
    do
    {
      *record_byte_offset = *a2;
      record_byte_offset[1] = a2[1];
      record_byte_offset[2] = a2[2];
      record_byte_offset[3] = a2[3];
      record_byte_offset[4] = a2[4];
      record_byte_offset[5] = a2[5];
      record_byte_offset[6] = a2[6];
      record_byte_offset += 8;
      table_value = a2[7];
      a2 += 8;
      *(record_byte_offset - 1) = table_value;
      --remaining_count;
    }
    while ( remaining_count );
    *record_byte_offset = *a2;
    record_byte_offset[1] = a2[1];
    record_byte_offset[2] = a2[2];
    record_byte_offset[3] = a2[3];
    record_byte_offset[4] = a2[4];
    *((_QWORD *)record_byte_offset + 10) = *((_QWORD *)a2 + 10);
    *(_DWORD *)(a1 + 16) = 0;
    sub_1402627A8(a1);
  }
}

//----- (0000000140248A10) ----------------------------------------------------
__int64            sub_140248A10(unsigned int a1, __int64 a2)
{
  _QWORD scratch_buffer[5];
  int unused_written_slot;
  _BYTE Locale[272];
  __int64 unused_local;

  if ( a1 <= 5 )
  {
    if ( a2 )
    {
      unused_written_slot = 131;
      scratch_buffer[4] = (uint64)(uintptr_t)(Locale);
      if ( (unsigned int)crt_multi_byte_to_wide_char() )
        sub_140249068(a1, Locale);
    }
  }
  return 0; /* the function has no caller */
}

// 140248A10: invalid function type '#86 __cdecl sub_140248A10(int Category, const char *Locale)' has been ignored

//----- (0000000140248A88) ----------------------------------------------------
__int64            sub_140248A88(char *a1, sr_anon_57 *a2, __int64 a3, sr_anon_44 *a4, __int64 a5, _DWORD *a6)
{
  unsigned __int64 call_result;
  char cached_selection_flag;
  char *byte_cursor;
  __int64 element_index;
  unsigned __int64 element_index_2;
  int selection_flag;
  unsigned __int16 *buffer_cursor;
  int loaded_word;
  int scaled_index;
  sr_anon_44 *record_pointer;
  int loaded_word_2;
  int loaded_word_3;
  bool comparison_result;
  signed int *unused_written_slot;
  int qualified_locale_downlevel;
  __int64 integer_sum;
  unsigned __int16 saved_packed_word_bits;
  __int64 integer_sum_2;
  char *cached_source;
  int integer_sum_3;
  int integer_sum_4;
  int integer_sum_5;
  unsigned __int16 saved_packed_word_bits_2;
  __int64 cached_sizeinwords;
  __int64 unused_local;
  __int128 Reserved;
  __int64 packed_word_bits;
  signed int *record_pointer_2;
  sr_anon_44 *record_pointer_3;
  sr_anon_44 *input_cursor;
  __int64 MaxCount;
  unsigned __int64 integer_sum_6;
  char selection_flag_2;
  _DWORD *unused_written_slot_2;
  __int64 SizeInWords;
  sr_anon_57 *Destination;
  _WORD scratch_buffer[128];
  unsigned __int16 unrecovered_register_value;
  unsigned __int16 unrecovered_register_value_2;
  unsigned __int16 unrecovered_register_value_3;
  __int16 unrecovered_register_value_4;
  __int64 unrecovered_register_value_5;
  _WORD Source[88];
  __int64 unused_local_2;

  SizeInWords = a3;
  Destination = a2;
  packed_word_bits = a5;
  unused_written_slot_2 = a6;
  if ( a1 )
  {
    if ( *(_WORD *)a1 == 67 && !*((_WORD *)a1 + 1) )
    {
      if ( !(unsigned int)sub_140259444(a2, a3, (__int64)L"C") )
      {
        *a6 = 0;
        return (__int64)a2; /* 0x140248B3D: mov rax, rsi (rsi = a2) */
      }
      goto LABEL_67;
    }
    call_result = sub_140255A70();
    input_cursor = a4;
    MaxCount = a5;
    integer_sum_6 = call_result + 152;
    cached_selection_flag = 0;
    selection_flag_2 = 0;
    record_pointer_2 = (signed int *)(call_result + 184);
    record_pointer_3 = (sr_anon_44 *)(call_result + 188);
    byte_cursor = (char *)(call_result + 450);
    if ( (unsigned int)sub_140260D80(a4, a5, call_result + 752, 85) )
      goto LABEL_67;
    element_index = -1;
    element_index_2 = -1;
    selection_flag = 0;
    do
      ++element_index_2;
    while ( *(_WORD *)&a1[2 * element_index_2] );
    if ( element_index_2 < 0x83 )
    {
      buffer_cursor = (unsigned __int16 *)byte_cursor;
      do
      {
        loaded_word = *(unsigned __int16 *)((uintptr_t)buffer_cursor + (uintptr_t)a1 - (uintptr_t)byte_cursor);
        scaled_index = *buffer_cursor - loaded_word;
        if ( scaled_index )
          break;
        ++buffer_cursor;
      }
      while ( loaded_word );
      if ( !scaled_index )
        goto LABEL_66;
      record_pointer = record_pointer_3;
      do
      {
        loaded_word_2 = *(unsigned __int16 *)((uintptr_t)record_pointer + (uintptr_t)a1 - (uintptr_t)record_pointer_3);
        loaded_word_3 = *(unsigned __int16 *)record_pointer - loaded_word_2;
        if ( loaded_word_3 )
          break;
        record_pointer = (sr_anon_44 *)((char *)record_pointer + 2);
      }
      while ( loaded_word_2 );
      if ( !loaded_word_3 )
        goto LABEL_66;
    }
    LOBYTE(selection_flag) = !sub_14024F8BC();
    if ( (unsigned int)sub_14024877C(scratch_buffer, a1) )
    {
      unused_written_slot = record_pointer_2;
    }
    else
    {
      comparison_result = selection_flag == 0;
      unused_written_slot = record_pointer_2;
      if ( comparison_result )
        qualified_locale_downlevel = sub_14026340C(scratch_buffer, record_pointer_2, (__int64)scratch_buffer);
      else
        qualified_locale_downlevel = _acrt_get_qualified_locale_downlevel((__int64)scratch_buffer, record_pointer_2, (__int64)scratch_buffer);
      if ( qualified_locale_downlevel )
      {
        sub_1402486D8(byte_cursor, 131, (__int64)scratch_buffer);
        do
          ++element_index;
        while ( Source[element_index] );
        cached_selection_flag = 1;
        if ( (unsigned int)sub_140260D80(a4, packed_word_bits, (__int64)Source, element_index + 1) )
          goto LABEL_68;
        integer_sum = element_index_2 + 1;
        goto LABEL_61;
      }
    }
    if ( (unsigned int)sub_14024F408((__int64)a1) )
    {
      LODWORD(packed_word_bits) = 0;
      if ( !(unsigned int)sub_14024F174((__int64)a1, 0x20001004u, (__int64)&packed_word_bits, 2u) || (saved_packed_word_bits = packed_word_bits, !(_DWORD)packed_word_bits) )
        saved_packed_word_bits = -535;
      *unused_written_slot = saved_packed_word_bits;
      integer_sum = element_index_2 + 1;
      if ( (unsigned int)sub_140260D80(byte_cursor, 131, (__int64)a1, element_index_2 + 1) )
        goto LABEL_68;
      integer_sum_2 = element_index_2 + 1;
      cached_source = a1;
      goto LABEL_60;
    }
    if ( !(unsigned __int8)parse_bcp47(scratch_buffer, (unsigned __int16 *)a1) || !(unsigned int)sub_14024F408((__int64)Source) )
    {
LABEL_51:
      if ( cached_selection_flag || !(unsigned int)sub_140260D80((_WORD *)(integer_sum_6 + 600), 85, (__int64)input_cursor, MaxCount) )
        return 0; /* 0x140248DBA: mov r12, r13 (0); 0x140248DEA: mov rax, r12 */
LABEL_67:
      *(_QWORD *)&Reserved = 0;
      crt_invoke_watson();
      __debugbreak();
    }
    if ( unrecovered_register_value )
    {
      integer_sum_3 = unrecovered_register_value + 32;
      if ( (unsigned int)unrecovered_register_value - 65 > 0x19 )
        integer_sum_3 = unrecovered_register_value;
      if ( integer_sum_3 != 117 )
        goto LABEL_50;
      integer_sum_4 = unrecovered_register_value_2 + 32;
      if ( (unsigned int)unrecovered_register_value_2 - 65 > 0x19 )
        integer_sum_4 = unrecovered_register_value_2;
      if ( integer_sum_4 != 116 )
        goto LABEL_50;
      integer_sum_5 = unrecovered_register_value_3 + 32;
      if ( (unsigned int)unrecovered_register_value_3 - 65 > 0x19 )
        integer_sum_5 = unrecovered_register_value_3;
      if ( integer_sum_5 != 102 || unrecovered_register_value_4 != 56 || (_WORD)unrecovered_register_value_5 )
      {
LABEL_50:
        if ( unrecovered_register_value_4 != 45 || (_DWORD)unrecovered_register_value_5 != 56 )
          goto LABEL_51;
      }
    }
    else
    {
      LODWORD(packed_word_bits) = 0;
      if ( (unsigned int)sub_14024F174((__int64)Source, 0x20001004u, (__int64)&packed_word_bits, 2u) )
      {
        saved_packed_word_bits_2 = packed_word_bits;
        if ( (_DWORD)packed_word_bits )
          goto LABEL_57;
      }
    }
    saved_packed_word_bits_2 = -535;
LABEL_57:
    *unused_written_slot = saved_packed_word_bits_2;
    integer_sum = element_index_2 + 1;
    if ( (unsigned int)sub_140260D80(byte_cursor, 131, (__int64)a1, element_index_2 + 1) )
      goto LABEL_68;
    do
      ++element_index;
    while ( Source[element_index] );
    cached_source = (char *)Source;
    integer_sum_2 = element_index + 1;
LABEL_60:
    sub_1402484BC((__int64)&input_cursor, (__int64)cached_source, integer_sum_2);
    cached_selection_flag = selection_flag_2;
LABEL_61:
    if ( !*(_WORD *)a1 || element_index_2 >= 0x83 )
    {
      *(_WORD *)record_pointer_3 = 0;
      goto LABEL_66;
    }
    if ( !(unsigned int)sub_140260D80(record_pointer_3, 131, (__int64)a1, integer_sum) )
    {
LABEL_66:
      cached_sizeinwords = SizeInWords;
      *unused_written_slot_2 = *record_pointer_2;
      if ( (unsigned int)sub_140259444(Destination, cached_sizeinwords, (__int64)byte_cursor) )
        goto LABEL_67;
      if ( cached_selection_flag || !(unsigned int)sub_140260D80((_WORD *)(integer_sum_6 + 600), 85, (__int64)input_cursor, MaxCount) )
        return (__int64)byte_cursor; /* 0x140248ED5 -> 0x140248DBD: r12 keeps the expanded name; 0x140248DEA mov rax, r12 */
      goto LABEL_67;
    }
LABEL_68:
    *(_QWORD *)&Reserved = 0;
    crt_invoke_watson();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  return 0; /* 0x140248AEB: xor eax, eax */
}

// 140248F01: control flows out of bounds to 140248F06

//----- (0000000140248F08) ----------------------------------------------------
void            sub_140248F08(__int64 *Block)
{
  volatile signed __int32 *table_value;
  void *table_value_2;
  __int64 scaled_index;

  if ( Block )
  {
    crt_lock(5);
    table_value = (volatile signed __int32 *)Block[1];
    if ( table_value )
    {
      if ( _InterlockedExchangeAdd(table_value, 0xFFFFFFFF) == 1 )
      {
        table_value_2 = (void *)Block[1];
        if ( table_value_2 != &unk_1403025A0 )
          free_base(table_value_2);
      }
    }
    crt_unlock(5);
    if ( *Block )
    {
      crt_lock(4);
      sub_140262A34(*Block);
      scaled_index = *Block;
      if ( *Block && !*(_DWORD *)(scaled_index + 16) && (__int16 **)scaled_index != &off_140302420 )
        sub_140262834(scaled_index);
      crt_unlock(4);
    }
    free_base(Block);
  }
}

// 140248F08: invalid function type 'void __cdecl sub_140248F08(#86 Locale)' has been ignored

//----- (0000000140248FAC) ----------------------------------------------------
_QWORD *sub_140248FAC()
{
  unsigned __int64 call_result;
  _QWORD *unused_written_slot;
  _QWORD *saved_calloc_base_result;
  __int64 **scratch_buffer[2];
  char callee_output_word;
  unsigned int selection_code;
  unsigned int selection_code_2;
  _QWORD *calloc_base_result;

  call_result = sub_140255A70();
  unused_written_slot = nullptr;
  calloc_base_result = (_QWORD *)calloc_base(1, 16);
  if ( calloc_base_result )
  {
    sub_140262ADC();
    sub_14025F580();
    *calloc_base_result = *(_QWORD *)(call_result + 144);
    calloc_base_result[1] = *(_QWORD *)(call_result + 136);
    scratch_buffer[0] = &calloc_base_result;
    selection_code = 4;
    selection_code_2 = 4;
    sub_140247D18((__int64)&callee_output_word, &selection_code_2, scratch_buffer, &selection_code);
    scratch_buffer[0] = &calloc_base_result;
    selection_code = 5;
    selection_code_2 = 5;
    sub_140247F30((__int64)&callee_output_word, &selection_code_2, (__int64)scratch_buffer, &selection_code);
    saved_calloc_base_result = calloc_base_result;
    calloc_base_result = nullptr;
    unused_written_slot = saved_calloc_base_result;
  }
  free_base(nullptr);
  return unused_written_slot;
}

// 140248FAC: invalid function type '#86 __cdecl sub_140248FAC()' has been ignored

//----- (0000000140249068) ----------------------------------------------------
_QWORD *           sub_140249068(unsigned int a1, __int64 a2)
{
  _QWORD *unused_written_slot;
  _QWORD *calloc_base_result;
  _DWORD *calloc_base_result_2;
  _DWORD *calloc_base_result_3;
  _DWORD *saved_calloc_base_result;
  _QWORD *saved_calloc_base_result_2;
  __int64 saved_calloc_base_result_3;

  if ( a1 > 5 )
    return nullptr;
  unused_written_slot = nullptr;
  if ( !a2 )
    return nullptr;
  calloc_base_result = (_QWORD *)calloc_base(1, 16);
  if ( calloc_base_result )
  {
    calloc_base_result_2 = (_DWORD *)calloc_base(1, 344);
    if ( calloc_base_result_2 )
    {
      calloc_base_result_3 = (_DWORD *)calloc_base(1, 552);
      if ( calloc_base_result_3 )
      {
        sub_140248950((__int64)calloc_base_result_2, &off_140302420);
        if ( !sub_1402494A8(calloc_base_result_2, a1, a2) || (unsigned int)setmbcp_nolock(calloc_base_result_2[3], (__int64)calloc_base_result_3) )
        {
          sub_140262A34((__int64)calloc_base_result_2);
          saved_calloc_base_result_3 = (__int64)calloc_base_result_2;
          calloc_base_result_2 = nullptr;
          sub_140262834(saved_calloc_base_result_3);
        }
        else
        {
          *calloc_base_result_3 = 1;
          *calloc_base_result = (uint64)(uintptr_t)(calloc_base_result_2);
          calloc_base_result_2 = nullptr;
          saved_calloc_base_result = calloc_base_result_3;
          calloc_base_result_3 = nullptr;
          calloc_base_result[1] = (uint64)(uintptr_t)(saved_calloc_base_result);
          saved_calloc_base_result_2 = calloc_base_result;
          calloc_base_result = nullptr;
          unused_written_slot = saved_calloc_base_result_2;
        }
      }
      else
      {
        *errno_sr() = 12;
      }
      free_base(calloc_base_result_3);
    }
    else
    {
      *errno_sr() = 12;
    }
    free_base(calloc_base_result_2);
  }
  else
  {
    *errno_sr() = 12;
  }
  free_base(calloc_base_result);
  return unused_written_slot;
}

// 140249068: invalid function type '#86 __cdecl sub_140249068(int Category, const #57 *Locale)' has been ignored

//----- (00000001402491B0) ----------------------------------------------------
void            sub_1402491B0(_WORD *a1, __int64 a2, int a3)
{
  int iteration_count;
  __int64 *buffer_cursor;
  _QWORD callee_output_word[11];

  if ( a3 > 0 )
  {
    iteration_count = 0;
    buffer_cursor = &callee_output_word[14];
    do
    {
      if ( (unsigned int)sub_14025ACB4(a1, a2, *++buffer_cursor) )
      {
        callee_output_word[4] = 0;
        crt_invoke_watson();
        do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
      }
      ++iteration_count;
    }
    while ( iteration_count < a3 );
  }
}

// 14024920F: control flows out of bounds to 140249214

//----- (0000000140249218) ----------------------------------------------------
__int64            sub_140249218(unsigned int a1, __int64 a2)
{
  __int64 selection_flag;
  __int64 selection_flag_2;
  unsigned __int64 *state_address;
  __int64 *scratch_buffer[5];
  unsigned int input_value;
  __int64 input_value_2;
  char callee_output_word;
  unsigned __int64 call_result;

  input_value_2 = a2;
  input_value = a1;
  selection_flag = 0;
  selection_flag_2 = 0;
  if ( a1 <= 5 )
  {
    call_result = sub_140255A70();
    sub_14024F91C();
    sub_140262ADC();
    *(_DWORD *)(call_result + 936) |= 0x10u;
    state_address = &call_result;
    scratch_buffer[0] = &selection_flag_2;
    scratch_buffer[1] = (__int64 *)&call_result;
    scratch_buffer[2] = &selection_flag;
    scratch_buffer[3] = (__int64 *)&input_value;
    scratch_buffer[4] = &input_value_2;
    sub_140247F04((__int64)&callee_output_word, (__int64)&callee_output_word, scratch_buffer, (__int64 *)&state_address);
    return selection_flag;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
}

//----- (00000001402492BC) ----------------------------------------------------
_WORD *           sub_1402492BC(__int64 a1)
{
  int selected_word;
  _WORD *result;
  _WORD *saved_call_status;
  _WORD *integer_sum;
  char **record_byte_offset;
  __int16 **state_address;
  unsigned __int16 *buffer_cursor;
  int loaded_word;
  int scaled_index;
  int selected_word_2;
  volatile signed __int32 *loaded_record_pointer;
  volatile signed __int32 *loaded_record_pointer_2;
  volatile signed __int32 *loaded_record_pointer_3;
  volatile signed __int32 *loaded_record_pointer_4;

  selected_word = 1;
  result = (_WORD *)malloc_base();
  saved_call_status = result;
  if ( result )
  {
    integer_sum = result + 2;
    result[2] = 0;
    record_byte_offset = (char **)(a1 + 72);
    *(_DWORD *)result = 1;
    sub_1402491B0(result + 2, 849, 3);
    state_address = &off_14028A188;
    do
    {
      if ( (unsigned int)sub_14025ACB4(integer_sum, 849, (__int64)L";") )
      {
        crt_invoke_watson();
        do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
      }
      buffer_cursor = (unsigned __int16 *)*record_byte_offset;
      do
      {
        loaded_word = *(unsigned __int16 *)((uintptr_t)buffer_cursor + (uintptr_t)record_byte_offset[4] - (uintptr_t)*record_byte_offset);
        scaled_index = *buffer_cursor - loaded_word;
        if ( scaled_index )
          break;
        ++buffer_cursor;
      }
      while ( loaded_word );
      selected_word_2 = 0;
      if ( !scaled_index )
        selected_word_2 = selected_word;
      selected_word = selected_word_2;
      state_address += 3;
      record_byte_offset += 4;
      sub_1402491B0(integer_sum, 849, 3);
    }
    while ( (__int64)state_address < (__int64)&off_14028A1E8 );
    if ( selected_word )
    {
      free_base(saved_call_status);
      loaded_record_pointer_3 = *(volatile signed __int32 **)(a1 + 56);
      if ( loaded_record_pointer_3 && _InterlockedExchangeAdd(loaded_record_pointer_3, 0xFFFFFFFF) == 1 )
        free_base(*(void **)(a1 + 56));
      loaded_record_pointer_4 = *(volatile signed __int32 **)(a1 + 48);
      if ( loaded_record_pointer_4 && _InterlockedExchangeAdd(loaded_record_pointer_4, 0xFFFFFFFF) == 1 )
        free_base(*(void **)(a1 + 48));
      result = *(_WORD **)(a1 + 104);
      *(_QWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 56) = 0;
      *(_QWORD *)(a1 + 40) = 0;
    }
    else
    {
      loaded_record_pointer = *(volatile signed __int32 **)(a1 + 56);
      if ( loaded_record_pointer && _InterlockedExchangeAdd(loaded_record_pointer, 0xFFFFFFFF) == 1 )
        free_base(*(void **)(a1 + 56));
      loaded_record_pointer_2 = *(volatile signed __int32 **)(a1 + 48);
      if ( loaded_record_pointer_2 )
      {
        if ( _InterlockedExchangeAdd(loaded_record_pointer_2, 0xFFFFFFFF) == 1 )
          free_base(*(void **)(a1 + 48));
      }
      *(_QWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 56) = (uint64)(uintptr_t)(saved_call_status);
      *(_QWORD *)(a1 + 40) = (uint64)(uintptr_t)(integer_sum);
      return integer_sum;
    }
  }
  return result;
}

// 1402494A0: control flows out of bounds to 1402494A5

//----- (00000001402494A8) ----------------------------------------------------
__int64            sub_1402494A8(_DWORD *a1, int a2, __int64 a3)
{
       sr_anon_49 *saved_state_address;
  _DWORD *input_cursor;
  int selection_flag;
  int iteration_count;
  sr_anon_49 *wcspbrk_sr_result;
  sr_anon_49 *saved_wcspbrk_sr_result;
  __int64 shifted_bits;
  int iteration_count_2;
  __int16 **state_address;
  __int64 element_index;
  _WORD *record_pointer;
  __int64 call_result;
  __int64 lookup_index;
  _WORD *state_address_2;
  __int16 loaded_word;
  int iteration_count_3;
  _QWORD *record_byte_offset;
  unsigned __int16 *buffer_cursor;
  int loaded_word_2;
  int scaled_index;
  _QWORD scratch_buffer[5];
  _DWORD scratch_buffer_2[4];
  _WORD scratch_buffer_3[136];
  _BYTE scratch_buffer_4[176];
  __int64 unused_local;

  saved_state_address = (     sr_anon_49 *)a3;
  input_cursor = a1;
  if ( a2 )
  {
    if ( a3 )
      return sub_140249740(a1, a2, (char *)a3); /* 0x1402494E3: the call's result stays in rax */
    return *(_QWORD *)((char *)a1 + 32LL * a2 + 40); /* 0x1402494F4: mov rax, qword ptr [rax + rcx + 0x28] */
  }
  selection_flag = 1;
  iteration_count = 0;
  if ( !a3 )
  {
LABEL_32:
    return sub_1402492BC((__int64)a1); /* 0x140249651: the call's result stays in rax */
  }
  if ( *(_WORD *)a3 != 76 || *(_WORD *)(a3 + 2) != 67 || *(_WORD *)(a3 + 4) != 95 )
  {
    if ( !sub_140248A88((char *)a3, (sr_anon_57 *)scratch_buffer_3, 131, (sr_anon_44 *)scratch_buffer_4, 85, scratch_buffer_2) )
      return 0; /* 0x140249681: xor eax, eax / 0x14024971B: mov rax, r13 (0) */
    iteration_count_3 = 0;
    record_byte_offset = input_cursor + 10;
    do
    {
      if ( iteration_count_3 )
      {
        buffer_cursor = scratch_buffer_3;
        do
        {
          loaded_word_2 = *(unsigned __int16 *)((char *)buffer_cursor + *record_byte_offset - (_QWORD)scratch_buffer_3);
          scaled_index = *buffer_cursor - loaded_word_2;
          if ( scaled_index )
            break;
          ++buffer_cursor;
        }
        while ( loaded_word_2 );
        if ( !scaled_index || sub_140249740(input_cursor, iteration_count_3, (char *)scratch_buffer_3) )
          ++iteration_count;
        else
          selection_flag = 0;
      }
      ++iteration_count_3;
      record_byte_offset += 4;
    }
    while ( iteration_count_3 <= 5 );
    if ( !selection_flag )
    {
LABEL_30:
      if ( !iteration_count )
        return 0; /* 0x140249681: xor eax, eax / 0x14024971B: mov rax, r13 (0) */
    }
    a1 = input_cursor;
    goto LABEL_32;
  }
  while ( 1 )
  {
    wcspbrk_sr_result = wcspbrk_sr(saved_state_address, (     sr_anon_49 *)L"=;");
    saved_wcspbrk_sr_result = wcspbrk_sr_result;
    if ( !wcspbrk_sr_result )
      break;
    shifted_bits = ((intptr_t)((uintptr_t)wcspbrk_sr_result - (uintptr_t)saved_state_address)) >> 1;
    if ( !shifted_bits || *(_WORD *)wcspbrk_sr_result == 59 )
      break;
    iteration_count_2 = 1;
    state_address = &off_14028A188;
    do
    {
      if ( !(unsigned int)wcsncmp_sr(*state_address, saved_state_address, shifted_bits) )
      {
        element_index = -1;
        do
          ++element_index;
        while ( (*state_address)[element_index] );
        if ( shifted_bits == element_index )
          break;
      }
      ++iteration_count_2;
      state_address += 3;
    }
    while ( (__int64)state_address <= (__int64)&off_14028A1E8 );
    record_pointer = (_WORD *)((char *)saved_wcspbrk_sr_result + 2);
    call_result = sub_1402625A4(record_pointer, L";");
    lookup_index = call_result;
    if ( !call_result && *record_pointer != 59 )
      break;
    if ( iteration_count_2 <= 5 )
    {
      if ( (unsigned int)sub_140260D80(scratch_buffer_3, 131, (__int64)record_pointer, call_result) )
      {
        scratch_buffer[4] = 0;
        crt_invoke_watson();
        do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
      }
      if ( (unsigned __int64)(2 * lookup_index) >= 0x106 )
        sub_1401F8694();
      scratch_buffer_3[lookup_index] = 0;
      if ( sub_140249740(input_cursor, iteration_count_2, (char *)scratch_buffer_3) )
        ++iteration_count;
    }
    state_address_2 = &record_pointer[lookup_index];
    loaded_word = *state_address_2;
    if ( *state_address_2 )
      loaded_word = state_address_2[1];
    saved_state_address = (     sr_anon_49 *)(state_address_2 + 1);
    if ( !*state_address_2 )
      saved_state_address = (     sr_anon_49 *)state_address_2;
    if ( !loaded_word )
      goto LABEL_30;
  }
  return 0; /* 0x140249681: xor eax, eax / 0x14024971B: mov rax, r13 (0) */
}

// 140249738: control flows out of bounds to 14024973D

//----- (0000000140249740) ----------------------------------------------------
__int64            sub_140249740(_DWORD *a1, int a2, char *a3)
{
  __int64 input_value;
  unsigned __int64 call_result;
  unsigned __int16 *buffer_cursor;
  __int64 scaled_index;
  int masked_bits;
  int scaled_index_2;
  __int64 element_index;
  __int64 malloc_base_result;
  _DWORD *saved_malloc_base_result;
  bool comparison_result;
  _WORD *returned_pointer;
  int iteration_count;
  __int64 iteration_count_2;
  __int64 loaded_word;
  __int64 loaded_word_2;
  int masked_bits_2;
  unsigned int iteration_count_3;
  unsigned __int64 *option_flags;
  _QWORD scratch_buffer[5];
  int callee_output_word;
  int table_value;
  void *loaded_record_pointer;
  __int64 masked_bits_3;
  _WORD scratch_buffer_2[136];
  __m128i scratch_buffer_3[11];
  unsigned __int64 scratch_buffer_4[40];

  input_value = a2;
  call_result = sub_140255A70();
  if ( sub_140248A88(a3, (sr_anon_57 *)scratch_buffer_2, 131, (sr_anon_44 *)scratch_buffer_3, 85, &callee_output_word) )
  {
    buffer_cursor = scratch_buffer_2;
    scaled_index = 8 * input_value;
    do
    {
      masked_bits = *(unsigned __int16 *)((char *)buffer_cursor + *(_QWORD *)&a1[8 * input_value + 10] - (_QWORD)scratch_buffer_2);
      scaled_index_2 = *buffer_cursor - masked_bits;
      if ( scaled_index_2 )
        break;
      ++buffer_cursor;
    }
    while ( masked_bits );
    if ( !scaled_index_2 )
      return *(_QWORD *)&a1[scaled_index + 10]; /* 0x1402497C3: mov rax, qword ptr [rbx + rdi + 0x28]; 0x1402497E6: je to the exit */
    {
      element_index = -1;
      do
        ++element_index;
      while ( scratch_buffer_2[element_index] );
      malloc_base_result = malloc_base();
      saved_malloc_base_result = (_DWORD *)malloc_base_result;
      if ( malloc_base_result )
      {
        loaded_record_pointer = *(void **)&a1[scaled_index + 10];
        masked_bits_3 = *(_QWORD *)&a1[2 * input_value + 74];
        table_value = a1[3];
        if ( (unsigned int)sub_140259444((_WORD *)(malloc_base_result + 4), element_index + 1, (__int64)scratch_buffer_2) )
        {
          scratch_buffer[4] = 0;
          crt_invoke_watson();
          do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
        }
        comparison_result = scratch_buffer_2[0] == 67;
        *(_QWORD *)&a1[scaled_index + 10] = (uint64)(uintptr_t)(saved_malloc_base_result + 1);
        if ( !comparison_result || scratch_buffer_2[1] )
          returned_pointer = sub_140248608(scratch_buffer_3);
        else
          returned_pointer = nullptr;
        *(_QWORD *)&a1[2 * input_value + 74] = (uint64)(uintptr_t)(returned_pointer);
        switch ( (_DWORD)input_value )
        {
          case 2:
            iteration_count = 0;
            a1[3] = callee_output_word;
            iteration_count_2 = 0;
            loaded_word = *(_QWORD *)(call_result + 744);
            while ( a1[3] != *(_DWORD *)(call_result + 8 * iteration_count_2 + 712) )
            {
              loaded_word_2 = *(_QWORD *)(call_result + 8 * iteration_count_2 + 712);
              ++iteration_count;
              *(_QWORD *)(call_result + 8 * iteration_count_2++ + 712) = loaded_word;
              loaded_word = loaded_word_2;
              if ( iteration_count_2 >= 5 )
                goto LABEL_21;
            }
            if ( iteration_count )
            {
              *(_QWORD *)(call_result + 712) = *(_QWORD *)(call_result + 8LL * iteration_count + 712);
              *(_QWORD *)(call_result + 8LL * iteration_count + 712) = loaded_word;
            }
LABEL_21:
            if ( iteration_count == 5 )
            {
              masked_bits_2 = sub_140262618(nullptr, 1u, (__int64)&unk_14028A0F0, 127, (__int64)scratch_buffer_4, a1[3], 1);
              iteration_count_3 = 0;
              if ( masked_bits_2 )
              {
                option_flags = scratch_buffer_4;
                do
                {
                  ++iteration_count_3;
                  *(_WORD *)option_flags &= 0x1FFu;
                  option_flags = (unsigned __int64 *)((char *)option_flags + 2);
                }
                while ( iteration_count_3 < 0x7F );
                iteration_count_3 = sub_1401FC820(scratch_buffer_4, (__int64)(*(unsigned __int64 *)&sr_mem_1403022a0[0]), 0xFEu) == 0;
              }
              *(_DWORD *)(call_result + 716) = iteration_count_3;
              *(_DWORD *)(call_result + 712) = a1[3];
            }
            a1[7] = *(_DWORD *)(call_result + 716);
            break;
          case 1:
            a1[5] = callee_output_word;
            break;
          case 5:
            a1[6] = callee_output_word;
            break;
        }
        if ( ((unsigned int (           *)(_DWORD *))*(&off_14028A180 + 3 * input_value))(a1) )
        {
          *(_QWORD *)&a1[scaled_index + 10] = (uint64)(uintptr_t)(loaded_record_pointer);
          free_base(*(void **)&a1[2 * input_value + 74]);
          *(_QWORD *)&a1[2 * input_value + 74] = masked_bits_3;
          free_base(saved_malloc_base_result);
          a1[3] = table_value;
        }
        else
        {
          if ( loaded_record_pointer != &unk_140302588
            && _InterlockedExchangeAdd(*(volatile signed __int32 **)&a1[scaled_index + 14], 0xFFFFFFFF) == 1 )
          {
            free_base(*(void **)&a1[scaled_index + 14]);
            free_base(*(void **)&a1[scaled_index + 12]);
            free_base(*(void **)&a1[2 * input_value + 74]);
            *(_QWORD *)&a1[scaled_index + 10] = 0;
            *(_QWORD *)&a1[2 * input_value + 74] = 0;
          }
          *saved_malloc_base_result = 1;
          *(_QWORD *)&a1[scaled_index + 14] = (uint64)(uintptr_t)(saved_malloc_base_result);
          return *(_QWORD *)&a1[scaled_index + 10]; /* 0x140249A6E: mov rax, qword ptr [rbx + rdi + 0x28] */
        }
      }
    }
  }
  return 0; /* 0x1402499ED: xor eax, eax */
}

// 140249A8C: control flows out of bounds to 140249A91

//----- (0000000140249AB8) ----------------------------------------------------
__int64            get_default_code_page(__int64 a1)
{
  __int64 result;
  unsigned int selection_flag;

  selection_flag = 0;
  if ( !(unsigned int)sub_14024F174(a1, 0x20001004u, (__int64)&selection_flag, 2u) )
    return 65001;
  result = selection_flag;
  if ( !selection_flag )
    return 65001;
  return result;
}

//----- (0000000140249AEC) ----------------------------------------------------
__int64            parse_bcp47(_WORD *a1, unsigned __int16 *a2)
{
  char *record_byte_offset;
  unsigned __int64 iteration_count;
  int selection_code;
  __int64 element_index;
  unsigned __int16 *state_address;
  int loaded_word;
  int integer_difference;
  int integer_difference_2;
  unsigned __int64 integer_difference_3;
  unsigned __int64 unused_local;
  unsigned __int64 unused_local_2;
  char *unused_local_3;
  __int64 unused_local_4;
  char scratch_buffer[8];
  char callee_output_word;
  _QWORD scratch_buffer_2[3];
  _QWORD scratch_buffer_3[3];
  char callee_output_word_2;
  __int64 unused_local_5;

  crt_memset((void *)(uintptr_t)(a1), 0, 0x1CAu);
  record_byte_offset = &callee_output_word;
  iteration_count = 0;
  selection_code = 0;
  do
  {
    if ( iteration_count >= 4 )
      return 0; /* 0x140249B3E: jae -> xor al, al */
    if ( selection_code == 2 )
    {
      element_index = -1;
      do
        ++element_index;
      while ( a2[element_index] );
    }
    else
    {
      element_index = sub_1402625A4(a2, L"-_.");
    }
    *((_QWORD *)record_byte_offset - 1) = (uint64)(uintptr_t)(a2);
    ++iteration_count;
    state_address = &a2[element_index];
    *(_QWORD *)record_byte_offset = element_index;
    loaded_word = *state_address;
    *((_DWORD *)record_byte_offset + 2) = selection_code;
    record_byte_offset += 24;
    integer_difference = loaded_word - 45;
    if ( integer_difference )
    {
      integer_difference_2 = integer_difference - 1;
      if ( !integer_difference_2 )
      {
        selection_code = 2;
        goto LABEL_13;
      }
      if ( integer_difference_2 != 49 )
      {
        selection_code = 1;
        goto LABEL_13;
      }
    }
    selection_code = 0;
LABEL_13:
    a2 = state_address + 1;
  }
  while ( selection_code != 1 );
  integer_difference_3 = iteration_count - 1;
  if ( !integer_difference_3 )
    return parse_bcp47_language(a1, scratch_buffer); /* 0x140249CBB: the call's result stays in al */
  if ( integer_difference_3 == 1 )
  {
    if ( !parse_bcp47_language(a1, scratch_buffer) )
      return 0; /* 0x140249C7A: je -> mov sil, r13b */
    if ( parse_bcp47_script((__int64)a1, scratch_buffer_2) || sub_140249DC0((__int64)a1, scratch_buffer_2) )
      return 1; /* 0x140249C8A / 0x140249C9A: jne -> mov al, sil */
    return parse_bcp47_code_page((__int64)a1, (__int64)scratch_buffer_2) != 0; /* 0x140249CA3 */
  }
  if ( integer_difference_3 == 2 )
  {
    if ( !parse_bcp47_language(a1, scratch_buffer) )
      return 0; /* 0x140249C20 */
    if ( parse_bcp47_script((__int64)a1, scratch_buffer_2)
      && (sub_140249DC0((__int64)a1, scratch_buffer_3) || parse_bcp47_code_page((__int64)a1, (__int64)scratch_buffer_3)) )
      return 1; /* 0x140249C44 / 0x140249C54: jne -> mov al, sil */
    if ( !sub_140249DC0((__int64)a1, scratch_buffer_2) )
      return 0; /* 0x140249C64 */
    return parse_bcp47_code_page((__int64)a1, (__int64)scratch_buffer_3) != 0; /* 0x140249C6A -> 0x140249CA0 */
  }
  if ( integer_difference_3 == 3 )
  {
    if ( !parse_bcp47_language(a1, scratch_buffer) || !parse_bcp47_script((__int64)a1, scratch_buffer_2) || !sub_140249DC0((__int64)a1, scratch_buffer_3) )
      return 0; /* 0x140249BDB / 0x140249BEF / 0x140249C03 */
    return parse_bcp47_code_page((__int64)a1, (__int64)&callee_output_word_2) != 0; /* 0x140249C0D -> 0x140249CA0 */
  }
  return 0; /* 0x140249BC7: jne -> xor al, al */
}

//----- (0000000140249CEC) ----------------------------------------------------
char            parse_bcp47_code_page(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a2 + 16) != 2 )
    return 0;
  if ( (unsigned int)sub_140260D80((_WORD *)(a1 + 256), 16, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
  {
    crt_invoke_watson();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  return 1;
}

// 140249D2D: control flows out of bounds to 140249D32

//----- (0000000140249D34) ----------------------------------------------------
char            parse_bcp47_language(_WORD *a1, _QWORD *a2)
{
  unsigned __int64 table_value;

  if ( *((_DWORD *)a2 + 4) )
    return 0;
  table_value = a2[1];
  if ( table_value - 2 > 1 || !sub_140249F5C(*a2, table_value) )
    return 0;
  if ( (unsigned int)sub_140260D80(a1, 64, *a2, a2[1]) || (unsigned int)sub_140260D80(a1 + 144, 85, *a2, a2[1]) )
  {
    crt_invoke_watson();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  return 1;
}

// 140249DB7: control flows out of bounds to 140249DBC

//----- (0000000140249DC0) ----------------------------------------------------
char            sub_140249DC0(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 iteration_count;
  unsigned __int16 loaded_word_2;
       unsigned __int16 *returned_pointer;

  if ( *((_DWORD *)a2 + 4) )
    return 0;
  if ( a2[1] != 2 || !sub_140249F5C(*a2, 2u) )
  {
    if ( a2[1] == 3 )
    {
      loaded_word = *a2;
      iteration_count = 0;
      while ( 1 )
      {
        loaded_word_2 = *(_WORD *)(loaded_word + 2 * iteration_count);
        returned_pointer = sub_140256DC0();
        if ( !(loaded_word_2 > 0xFFu ? 0 : returned_pointer[loaded_word_2] & 4) )
          break;
        if ( (unsigned __int64)++iteration_count >= 3 )
          goto LABEL_11;
      }
    }
    return 0;
  }
LABEL_11:
  if ( (unsigned int)sub_140260D80((_WORD *)(a1 + 128), 64, *a2, a2[1])
    || (unsigned int)sub_14025AE2C((char *)(a1 + 288), 85, (char *)L"-", 1)
    || (unsigned int)sub_14025AE2C((char *)(a1 + 288), 85, (char *)*a2, a2[1]) )
  {
    crt_invoke_watson();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  return 1;
}

// 140249EC4: control flows out of bounds to 140249EC9

//----- (0000000140249ECC) ----------------------------------------------------
char            parse_bcp47_script(__int64 a1, _QWORD *a2)
{
  if ( *((_DWORD *)a2 + 4) || a2[1] != 4 || !sub_140249F5C(*a2, 4u) )
    return 0;
  if ( (unsigned int)sub_14025AE2C((char *)(a1 + 288), 85, (char *)L"-", 1)
    || (unsigned int)sub_14025AE2C((char *)(a1 + 288), 85, (char *)*a2, a2[1]) )
  {
    crt_invoke_watson();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  return 1;
}

// 140249F55: control flows out of bounds to 140249F5A

//----- (0000000140249F5C) ----------------------------------------------------
char            sub_140249F5C(__int64 a1, unsigned __int64 a2)
{
  __int64 iteration_count;
  unsigned __int16 loaded_word;
       unsigned __int16 *returned_pointer;

  iteration_count = 0;
  if ( !a2 )
    return 1;
  while ( 1 )
  {
    loaded_word = *(_WORD *)(a1 + 2 * iteration_count);
    returned_pointer = sub_140256DC0();
    if ( !(loaded_word > 0xFFu ? 0 : returned_pointer[loaded_word] & 0x103) )
      break;
    if ( ++iteration_count >= a2 )
      return 1;
  }
  return 0;
}

//----- (0000000140249FD0) ----------------------------------------------------
char            string_is_alpha(__int64 a1, unsigned __int64 a2)
{
  __int64 iteration_count;
  unsigned __int16 loaded_word;
       unsigned __int16 *returned_pointer;

  iteration_count = 0;
  if ( !a2 )
    return 1;
  while ( 1 )
  {
    loaded_word = *(_WORD *)(a1 + 2 * iteration_count);
    returned_pointer = sub_140256DC0();
    if ( !(loaded_word > 0xFFu ? 0 : returned_pointer[loaded_word] & 4) )
      break;
    if ( ++iteration_count >= a2 )
      return 1;
  }
  return 0;
}

//----- (000000014024A06C) ----------------------------------------------------
__int64 sub_14024A06C()
{
  return g_144CBF17C;
}

//----- (000000014024A074) ----------------------------------------------------
int         sub_14024A074(int NewMode)
{
  if ( (unsigned int)NewMode <= 1 )
    return _InterlockedExchange((volatile __int32 *)&g_144CBF17C, NewMode);
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return -1;
}

//----- (000000014024A0A0) ----------------------------------------------------
unsigned int *sub_14024A0A0()
{
  return &g_144CBF180;
}

//----- (000000014024A0BC) ----------------------------------------------------
void (        __attribute__((noreturn)) *sub_14024A0BC())()
{
  unsigned __int64 call_result;
  void (        __attribute__((noreturn)) *cached_abort)();

  call_result = sub_140255A70();
  cached_abort = abort;
  if ( *(_QWORD *)(call_result + 24) )
    return *(void (        __attribute__((noreturn)) **)())(call_result + 24);
  return cached_abort;
}

//----- (000000014024A0E0) ----------------------------------------------------
void (        __attribute__((noreturn)) *           set_terminate(__int64 a1))()
{
  unsigned __int64 call_result;
  void (        __attribute__((noreturn)) *result)();

  call_result = sub_140255A70();
  result = abort;
  if ( *(_QWORD *)(call_result + 24) )
    result = *(void (        __attribute__((noreturn)) **)())(call_result + 24);
  *(_QWORD *)(call_result + 24) = a1;
  return result;
}

//----- (000000014024A10C) ----------------------------------------------------
void __attribute__((noreturn)) terminate_sr()
{
  void (*callback_function)(void);

  callback_function = *(void (**)(void))(sub_140255A70() + 24);
  if ( callback_function )
    callback_function();
  abort();
}

//----- (000000014024A150) ----------------------------------------------------
__int64            sub_14024A150(_BYTE *a1, __int64 a2)
{
  __int64 malloc_base_result;
  __int64 result;
  int multi_byte_to_wide_char_result;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  __int64 saved_multi_byte_to_wide_char_result;
  unsigned int int64_result;
  __int64 malloc_base_result_2;
  __int64 cached_multi_byte_to_wide_char_result;
  int multi_byte_to_wide_char_result_2;

  if ( !a1 )
  {
    if ( *(_BYTE *)(a2 + 40) )
    {
      free_base(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    goto LABEL_5;
  }
  if ( *a1 )
  {
    multi_byte_to_wide_char_result = crt_multi_byte_to_wide_char();
    saved_multi_byte_to_wide_char_result = multi_byte_to_wide_char_result;
    if ( multi_byte_to_wide_char_result )
    {
      if ( (unsigned __int64)multi_byte_to_wide_char_result > *(_QWORD *)(a2 + 24) )
      {
        if ( *(_BYTE *)(a2 + 40) )
        {
          free_base(*(void **)(a2 + 16));
          *(_BYTE *)(a2 + 40) = 0;
        }
        malloc_base_result_2 = malloc_base();
        *(_QWORD *)(a2 + 16) = malloc_base_result_2;
        cached_multi_byte_to_wide_char_result = 0;
        result = malloc_base_result_2 == 0 ? 0xC : 0;
        if ( !(_DWORD)result )
          cached_multi_byte_to_wide_char_result = saved_multi_byte_to_wide_char_result;
        *(_BYTE *)(a2 + 40) = (_DWORD)result == 0;
        *(_QWORD *)(a2 + 24) = cached_multi_byte_to_wide_char_result;
        if ( (_DWORD)result )
          return result;
      }
      multi_byte_to_wide_char_result_2 = crt_multi_byte_to_wide_char();
      if ( multi_byte_to_wide_char_result_2 )
      {
        *(_QWORD *)(a2 + 32) = multi_byte_to_wide_char_result_2 - 1LL;
        return 0;
      }
    }
    int64_result = ((__int64 (           *)(__int64, __int64))GetLastError)(unrecovered_register_value_2, unrecovered_register_value);
    crt_errno_map_os_error(int64_result);
    return (unsigned int)*errno_sr();
  }
  if ( *(_QWORD *)(a2 + 24) )
    goto LABEL_11;
  if ( *(_BYTE *)(a2 + 40) )
  {
    free_base(*(void **)(a2 + 16));
    *(_BYTE *)(a2 + 40) = 0;
  }
  malloc_base_result = malloc_base();
  *(_QWORD *)(a2 + 16) = malloc_base_result;
  result = malloc_base_result == 0 ? 0xC : 0;
  *(_BYTE *)(a2 + 40) = (_DWORD)result == 0;
  *(_QWORD *)(a2 + 24) = (_DWORD)result == 0;
  if ( !(_DWORD)result )
  {
LABEL_11:
    **(_WORD **)(a2 + 16) = 0;
LABEL_5:
    *(_QWORD *)(a2 + 32) = 0;
    return 0;
  }
  return result;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024A2CC) ----------------------------------------------------
__int64            __acrt_convert_wcs_mbs_cp__wchar_t__char___lambda_0952d770c47a5af503e0a56aa8beec95_____crt_win32_buffer_public_dynamic_resizing(
        _WORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 call_result;
  __int64 result;
  int wide_char_to_multi_byte_result;
  unsigned __int64 saved_wide_char_to_multi_byte_result;
  unsigned int int64_result;
  unsigned __int64 loaded_word;
  __int64 call_result_2;
  int wide_char_to_multi_byte_result_2;
  __int64 packed_word_bits;
  __int64 packed_word_bits_2;

  if ( !a1 )
  {
    if ( *(_BYTE *)(a2 + 40) )
    {
      free(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    goto LABEL_5;
  }
  if ( *a1 )
  {
    LODWORD(packed_word_bits) = 0;
    wide_char_to_multi_byte_result = crt_wide_char_to_multi_byte(a4, 0, (__int64)a1, 0xFFFFFFFFLL, 0, packed_word_bits, 0, 0);
    saved_wide_char_to_multi_byte_result = wide_char_to_multi_byte_result;
    if ( wide_char_to_multi_byte_result )
    {
      loaded_word = *(_QWORD *)(a2 + 24);
      if ( wide_char_to_multi_byte_result > loaded_word )
      {
        if ( *(_BYTE *)(a2 + 40) )
        {
          free(*(void **)(a2 + 16));
          *(_BYTE *)(a2 + 40) = 0;
        }
        call_result_2 = j__malloc_base();
        *(_QWORD *)(a2 + 16) = call_result_2;
        loaded_word = 0;
        result = call_result_2 == 0 ? 0xC : 0;
        if ( !(_DWORD)result )
          loaded_word = saved_wide_char_to_multi_byte_result;
        *(_BYTE *)(a2 + 40) = (_DWORD)result == 0;
        *(_QWORD *)(a2 + 24) = loaded_word;
        if ( (_DWORD)result )
          return result;
      }
      LODWORD(packed_word_bits_2) = loaded_word;
      wide_char_to_multi_byte_result_2 = crt_wide_char_to_multi_byte(a4, 0, (__int64)a1, 0xFFFFFFFFLL, *(_QWORD *)(a2 + 16), packed_word_bits_2, 0, 0);
      if ( wide_char_to_multi_byte_result_2 )
      {
        *(_QWORD *)(a2 + 32) = wide_char_to_multi_byte_result_2 - 1LL;
        return 0;
      }
    }
    int64_result = ((__int64 (*)(void))GetLastError)();
    crt_errno_map_os_error(int64_result);
    return (unsigned int)*errno_sr();
  }
  if ( *(_QWORD *)(a2 + 24) )
    goto LABEL_11;
  if ( *(_BYTE *)(a2 + 40) )
  {
    free(*(void **)(a2 + 16));
    *(_BYTE *)(a2 + 40) = 0;
  }
  call_result = j__malloc_base();
  *(_QWORD *)(a2 + 16) = call_result;
  result = call_result == 0 ? 0xC : 0;
  *(_BYTE *)(a2 + 40) = (_DWORD)result == 0;
  *(_QWORD *)(a2 + 24) = (_DWORD)result == 0;
  if ( !(_DWORD)result )
  {
LABEL_11:
    **(_BYTE **)(a2 + 16) = 0;
LABEL_5:
    *(_QWORD *)(a2 + 32) = 0;
    return 0;
  }
  return result;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024A458) ----------------------------------------------------
__int64            __acrt_convert_wcs_mbs_cp__wchar_t__char___lambda_f788ae46380686e8b737efdd8c720d07_____crt_win32_buffer_no_resizing(
        _WORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  int allocated_buffer_2;
  __int64 saved_path_mb_convert_result;
  __int64 error_code_2;
  unsigned int int64_result;
  int wide_char_to_multi_byte_result;
  __int64 packed_word_bits;
  __int64 path_mb_convert_result_2;

  if ( !a1 )
  {
    if ( *(_BYTE *)(a2 + 40) )
      *(_BYTE *)(a2 + 40) = 0;
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    goto LABEL_5;
  }
  if ( *a1 )
  {
    LODWORD(packed_word_bits) = 0;
    allocated_buffer_2 = crt_wide_char_to_multi_byte(a4, 0, (__int64)a1, 0xFFFFFFFFLL, 0, packed_word_bits, 0, 0);
    error_code_2 = allocated_buffer_2;
    if ( allocated_buffer_2 )
    {
      if ( (unsigned __int64)allocated_buffer_2 > *(_QWORD *)(a2 + 24) )
      {
        if ( *(_BYTE *)(a2 + 40) )
          *(_BYTE *)(a2 + 40) = 0;
        goto LABEL_10;
      }
      LODWORD(path_mb_convert_result_2) = *(_QWORD *)(a2 + 24);
      wide_char_to_multi_byte_result = crt_wide_char_to_multi_byte(a4, 0, (__int64)a1, 0xFFFFFFFFLL, *(_QWORD *)(a2 + 16), path_mb_convert_result_2, 0, 0);
      if ( wide_char_to_multi_byte_result )
      {
        *(_QWORD *)(a2 + 32) = wide_char_to_multi_byte_result - 1LL;
        return 0;
      }
    }
    int64_result = ((__int64 (           *)(__int64, __int64))GetLastError)(saved_path_mb_convert_result, error_code_2);
    crt_errno_map_os_error(int64_result);
    return (unsigned int)*errno_sr();
  }
  if ( !*(_QWORD *)(a2 + 24) )
  {
    if ( *(_BYTE *)(a2 + 40) )
      *(_BYTE *)(a2 + 40) = 0;
LABEL_10:
    *errno_sr() = 34;
    *(_BYTE *)(a2 + 40) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    return 34;
  }
  **(_BYTE **)(a2 + 16) = 0;
LABEL_5:
  *(_QWORD *)(a2 + 32) = 0;
  return 0;
}

int sr_path_mb_convert(unsigned int cp, const char *input, wchar_t *output, int capacity) {
  unsigned int flags=9;
  if (cp==42 || (cp>=50220 && cp<=50229 && ((679u>>(cp-50220))&1u)) ||
      (cp>=57002 && cp<=57011) || cp==65000) flags=0;
  else if(cp==54936 || cp==65001) flags &= 8;
  return MultiByteToWideChar(cp,flags,input,-1,output,capacity);
}

__int64            sr_path_malloc(unsigned __int64 requested_allocation_bytes)
{
  __int64 allocation_byte_count;
  __int64 result;

  allocation_byte_count = requested_allocation_bytes;
  if ( requested_allocation_bytes > 0xFFFFFFFFFFFFFFE0uLL )
  {
LABEL_9:
    *errno_sr() = 12;
    return 0;
  }
  else
  {
    if ( !requested_allocation_bytes )
      allocation_byte_count = 1;
    while ( 1 )
    {
      result = ((__int64 (           *)(_QWORD, _QWORD, __int64))HeapAlloc)(
                 g_144CBFA48,
                 0,
                 allocation_byte_count);
      if ( result )
        break;
      if ( !(unsigned int)sub_14024A06C() || !(unsigned int)callnewh(allocation_byte_count) )
        goto LABEL_9;
    }
  }
  return result;
}

// 14026E130: invalid function type 'LPVOID (__stdcall *HeapAlloc)(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes)' has been ignored

__int64            sr_path_mbs(_BYTE *a1, __int64 a2, unsigned int codepage)
{
  unsigned int unused_written_slot;
  __int64 allocated_buffer;
  unsigned int comparison_result;
  int path_mb_convert_result;
  __int64 error_code;
  __int64 allocated_buffer_2;
  __int64 saved_path_mb_convert_result;
  unsigned int error_code_2;
  __int64 int64_result;
  __int64 wide_char_to_multi_byte_result;
  __int64 packed_word_bits;
  int path_mb_convert_result_2;

  unused_written_slot = 0;
  if ( !a1 )
  {
    if ( *(_BYTE *)(a2 + 40) )
    {
      free_base(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    goto LABEL_5;
  }
  if ( *a1 )
  {
    path_mb_convert_result = sr_path_mb_convert(codepage,(const char *)a1,NULL,0);
    saved_path_mb_convert_result = path_mb_convert_result;
    if ( path_mb_convert_result )
    {
      if ( (unsigned __int64)path_mb_convert_result > *(_QWORD *)(a2 + 24) )
      {
        if ( *(_BYTE *)(a2 + 40) )
        {
          free_base(*(void **)(a2 + 16));
          *(_BYTE *)(a2 + 40) = 0;
        }
        int64_result = sr_path_malloc(2 * saved_path_mb_convert_result);
        *(_QWORD *)(a2 + 16) = int64_result;
        wide_char_to_multi_byte_result = 0;
        packed_word_bits = -int64_result;
        comparison_result = packed_word_bits == 0 ? 0xC : 0;
        if ( (packed_word_bits == 0 ? 0xC : 0) == 0 )
          wide_char_to_multi_byte_result = saved_path_mb_convert_result;
        *(_BYTE *)(a2 + 40) = comparison_result == 0;
        *(_QWORD *)(a2 + 24) = wide_char_to_multi_byte_result;
        if ( (packed_word_bits == 0 ? 0xC : 0) != 0 )
          return comparison_result;
      }
      path_mb_convert_result_2 = sr_path_mb_convert(codepage,(const char *)a1,(wchar_t *)(uintptr_t)*(_QWORD *)(a2+16),(int)*(_QWORD *)(a2+24));
      allocated_buffer_2 = path_mb_convert_result_2;
      if ( path_mb_convert_result_2 )
      {
        *(_QWORD *)(a2 + 32) = path_mb_convert_result_2 - 1LL;
        return unused_written_slot;
      }
    }
    error_code_2 = GetLastError();
    crt_errno_map_os_error(error_code_2);
    return (unsigned int)*errno_sr();
  }
  if ( !*(_QWORD *)(a2 + 24) )
  {
    if ( *(_BYTE *)(a2 + 40) )
    {
      free_base(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    allocated_buffer = sr_path_malloc(2);
    *(_QWORD *)(a2 + 16) = allocated_buffer;
    comparison_result = allocated_buffer == 0 ? 0xC : 0;
    *(_BYTE *)(a2 + 40) = comparison_result == 0;
    *(_QWORD *)(a2 + 24) = comparison_result == 0;
    if ( (allocated_buffer == 0 ? 0xC : 0) != 0 )
      return comparison_result;
  }
  **(_WORD **)(a2 + 16) = 0;
LABEL_5:
  *(_QWORD *)(a2 + 32) = 0;
  return unused_written_slot;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

__int64            sr_path_wide(__int64 a1, __int64 a2)
{
  unsigned int allocated_buffer;
  unsigned int comparison_result;
  __int64 path_mb_convert_result;
  unsigned int error_code;
  __int64 allocated_buffer_2;
  __int64 saved_path_mb_convert_result;
  __int64 error_code_2;
  unsigned int int64_result;

  allocated_buffer = GetFullPathNameW((const wchar_t *)(uintptr_t)a1,(DWORD)(*(unsigned int *)(a2 + 24)),(wchar_t *)(uintptr_t)*(_QWORD *)(a2+16),NULL);
  comparison_result = 0;
  path_mb_convert_result = allocated_buffer;
  if ( allocated_buffer )
  {
    if ( (unsigned __int64)allocated_buffer <= *(_QWORD *)(a2 + 24) )
    {
      *(_QWORD *)(a2 + 32) = allocated_buffer;
      return comparison_result;
    }
    if ( *(_BYTE *)(a2 + 40) )
    {
      free_base(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    allocated_buffer_2 = sr_path_malloc(2*(path_mb_convert_result+1));
    *(_QWORD *)(a2 + 16) = allocated_buffer_2;
    saved_path_mb_convert_result = 0;
    error_code_2 = -allocated_buffer_2;
    if ( (error_code_2 == 0 ? 0xC : 0) == 0 )
      saved_path_mb_convert_result = path_mb_convert_result + 1;
    *(_BYTE *)(a2 + 40) = (error_code_2 == 0 ? 0xC : 0) == 0;
    *(_QWORD *)(a2 + 24) = saved_path_mb_convert_result;
    if ( (error_code_2 == 0 ? 0xC : 0) != 0 )
      return error_code_2 == 0 ? 0xC : 0;
    int64_result = GetFullPathNameW((const wchar_t *)(uintptr_t)a1,(DWORD)((unsigned int)saved_path_mb_convert_result),(wchar_t *)(uintptr_t)*(_QWORD *)(a2+16),NULL);
    if ( int64_result )
    {
      *(_QWORD *)(a2 + 32) = int64_result;
      return comparison_result;
    }
  }
  error_code = GetLastError();
  crt_errno_map_os_error(error_code);
  return (unsigned int)*errno_sr();
}

// 14026E150: invalid function type 'DWORD (__stdcall *GetFullPathNameW)(LPCWSTR lpFileName, DWORD nBufferLength, LPWSTR lpBuffer, LPWSTR *lpFilePart)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024A574) ----------------------------------------------------
__int64 __acrt_get_full_path_name_narrow_acp_or_utf8____crt_win32_buffer_no_resizing(_BYTE *a1, __int64 a2)
{
  wchar_t input_storage[264], full_storage[264];
  sr_path_buffer input={input_storage,260,input_storage,260,0,0};
  sr_path_buffer full={full_storage,260,full_storage,260,0,0};
  sr_path_locale locale;
  unsigned int codepage=65001;
  unsigned int result;
  crt_locale_update((_LocaleUpdate *)&locale, nullptr);
  if (*(unsigned int *)(locale.locale+12)!=65001)
    codepage=(unsigned int)sub_14024EDA4()?0:1;
  if(locale.changed)
    *(unsigned int *)(locale.thread+936)&=~2u;
  result=(unsigned int)sr_path_mbs(a1,(__int64)(uintptr_t)&input,codepage);
  if(!result)
  {
    result=(unsigned int)sr_path_wide((__int64)(uintptr_t)input.buffer,(__int64)(uintptr_t)&full);
    if(!result)
      result=(unsigned int)__acrt_wcs_to_mbs_cp____crt_win32_buffer_no_resizing(
        (_WORD *)full.buffer,a2,codepage);
  }
  if(input.owned) free_base(input.buffer);
  if(full.owned) free_base(full.buffer);
  return result;
}

//----- (000000014024A6EC) ----------------------------------------------------
__int64            __acrt_get_full_path_name_narrow_acp_or_utf8____crt_win32_buffer_public_dynamic_resizing(
        _BYTE *a1,
        __int64 a2)
{
  _BYTE *byte_cursor;
  unsigned int selection_code;
  int full_path_name;
  __int64 unused_local;
  _QWORD scratch_buffer[3];
  char unrecovered_register_value;
  _QWORD scratch_buffer_2[2];
  void *Block;
  __int64 unused_written_slot;
  __int64 unused_written_slot_2;
  char selection_flag;
  _QWORD scratch_buffer_3[2];
  _WORD *record_pointer;
  __int64 unused_written_slot_3;
  __int64 unused_written_slot_4;
  char selection_flag_2;
  _BYTE scratch_buffer_4[528];
  _BYTE scratch_buffer_5[528];
  __int64 unused_local_2;

  unused_written_slot_4 = 0;
  unused_written_slot_2 = 0;
  byte_cursor = scratch_buffer_4;
  scratch_buffer_3[0] = (uint64)(uintptr_t)(scratch_buffer_4);
  record_pointer = scratch_buffer_4;
  scratch_buffer_3[1] = 260;
  scratch_buffer_2[0] = (uint64)(uintptr_t)(scratch_buffer_5);
  unused_written_slot_3 = 260;
  scratch_buffer_2[1] = 260;
  unused_written_slot = 260;
  Block = scratch_buffer_5;
  selection_flag_2 = 0;
  selection_flag = 0;
  crt_locale_update((_LocaleUpdate *)scratch_buffer, nullptr);
  selection_code = 65001;
  if ( *(_DWORD *)(scratch_buffer[1] + 12LL) == 65001 )
  {
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
  }
  else if ( (unsigned int)sub_14024EDA4() )
  {
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
    selection_code = 0;
  }
  else
  {
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
    selection_code = 1;
  }
  int sr_status = (int)sub_140238394(a1, (__int64)scratch_buffer_2); /* 0x14024A7EC: mov ebx, eax */
  if ( !sr_status )
  {
    full_path_name = __acrt_get_full_path_name_wide____crt_win32_buffer_internal_dynamic_resizing(
                       (__int64)Block,
                       (__int64)scratch_buffer_3);
    byte_cursor = record_pointer;
    sr_status = (int)full_path_name; /* 0x14024A805: mov ebx, eax */
    if ( !full_path_name )
      sr_status = (int)__acrt_wcs_to_mbs_cp____crt_win32_buffer_public_dynamic_resizing(record_pointer, a2, selection_code); /* 0x14024A819: mov ebx, eax */
  }
  if ( selection_flag )
    free_base(Block);
  if ( selection_flag_2 )
    free_base(byte_cursor);
  return (unsigned int)sr_status; /* 0x14024A83A: mov eax, ebx */
}

//----- (000000014024A864) ----------------------------------------------------
__int64            __acrt_get_full_path_name_wide____crt_win32_buffer_internal_dynamic_resizing(__int64 a1, __int64 a2)
{
  unsigned int int64_result;
  unsigned int unused_written_slot;
  __int64 saved_int64_result;
  unsigned int int64_result_2;
  __int64 malloc_base_result;
  __int64 integer_sum;
  __int64 integer_difference;
  unsigned int int64_result_3;

  int64_result = ((__int64 (           *)(__int64, _QWORD, _QWORD, _QWORD))GetFullPathNameW)(
         a1,
         *(unsigned int *)(a2 + 24),
         *(_QWORD *)(a2 + 16),
         0);
  unused_written_slot = 0;
  saved_int64_result = int64_result;
  if ( int64_result )
  {
    if ( (unsigned __int64)int64_result <= *(_QWORD *)(a2 + 24) )
    {
      *(_QWORD *)(a2 + 32) = int64_result;
      return unused_written_slot;
    }
    if ( *(_BYTE *)(a2 + 40) )
    {
      free_base(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    malloc_base_result = malloc_base();
    *(_QWORD *)(a2 + 16) = malloc_base_result;
    integer_sum = 0;
    integer_difference = -malloc_base_result;
    if ( (integer_difference == 0 ? 0xC : 0) == 0 )
      integer_sum = saved_int64_result + 1;
    *(_BYTE *)(a2 + 40) = (integer_difference == 0 ? 0xC : 0) == 0;
    *(_QWORD *)(a2 + 24) = integer_sum;
    if ( (integer_difference == 0 ? 0xC : 0) != 0 )
      return integer_difference == 0 ? 0xC : 0;
    int64_result_3 = ((__int64 (           *)(__int64, _QWORD, _QWORD, _QWORD))GetFullPathNameW)(
            a1,
            (unsigned int)integer_sum,
            *(_QWORD *)(a2 + 16),
            0);
    if ( int64_result_3 )
    {
      *(_QWORD *)(a2 + 32) = int64_result_3;
      return unused_written_slot;
    }
  }
  int64_result_2 = ((__int64 (*)(void))GetLastError)();
  crt_errno_map_os_error(int64_result_2);
  return (unsigned int)*errno_sr();
}

// 14026E150: invalid function type 'DWORD (__stdcall *GetFullPathNameW)(LPCWSTR lpFileName, DWORD nBufferLength, LPWSTR lpBuffer, LPWSTR *lpFilePart)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024A948) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_805(__int64 a1, __int64 a2)
{
  unsigned int int64_result;
  unsigned int unused_written_slot;
  unsigned int int64_result_2;

  int64_result = ((__int64 (           *)(__int64, _QWORD, _QWORD, _QWORD))GetFullPathNameW)(
         a1,
         *(unsigned int *)(a2 + 24),
         *(_QWORD *)(a2 + 16),
         0);
  unused_written_slot = 0;
  if ( int64_result )
  {
    if ( (unsigned __int64)int64_result > *(_QWORD *)(a2 + 24) )
    {
      if ( *(_BYTE *)(a2 + 40) )
        *(_BYTE *)(a2 + 40) = 0;
      *errno_sr() = 34;
      *(_BYTE *)(a2 + 40) = 0;
      *(_QWORD *)(a2 + 24) = 0;
      return 34;
    }
    else
    {
      *(_QWORD *)(a2 + 32) = int64_result;
    }
  }
  else
  {
    int64_result_2 = ((__int64 (*)(void))GetLastError)();
    crt_errno_map_os_error(int64_result_2);
    return (unsigned int)*errno_sr();
  }
  return unused_written_slot;
}

// 14026E150: invalid function type 'DWORD (__stdcall *GetFullPathNameW)(LPCWSTR lpFileName, DWORD nBufferLength, LPWSTR lpBuffer, LPWSTR *lpFilePart)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024A9BC) ----------------------------------------------------
__int64            __acrt_get_full_path_name_wide____crt_win32_buffer_public_dynamic_resizing(__int64 a1, __int64 a2)
{
  unsigned int int64_result;
  unsigned int unused_written_slot;
  __int64 saved_int64_result;
  unsigned int int64_result_2;
  __int64 call_result;
  __int64 integer_sum;
  __int64 integer_difference;
  unsigned int int64_result_3;

  int64_result = ((__int64 (           *)(__int64, _QWORD, _QWORD, _QWORD))GetFullPathNameW)(
         a1,
         *(unsigned int *)(a2 + 24),
         *(_QWORD *)(a2 + 16),
         0);
  unused_written_slot = 0;
  saved_int64_result = int64_result;
  if ( int64_result )
  {
    if ( (unsigned __int64)int64_result <= *(_QWORD *)(a2 + 24) )
    {
      *(_QWORD *)(a2 + 32) = int64_result;
      return unused_written_slot;
    }
    if ( *(_BYTE *)(a2 + 40) )
    {
      free(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    call_result = j__malloc_base();
    *(_QWORD *)(a2 + 16) = call_result;
    integer_sum = 0;
    integer_difference = -call_result;
    if ( (integer_difference == 0 ? 0xC : 0) == 0 )
      integer_sum = saved_int64_result + 1;
    *(_BYTE *)(a2 + 40) = (integer_difference == 0 ? 0xC : 0) == 0;
    *(_QWORD *)(a2 + 24) = integer_sum;
    if ( (integer_difference == 0 ? 0xC : 0) != 0 )
      return integer_difference == 0 ? 0xC : 0;
    int64_result_3 = ((__int64 (           *)(__int64, _QWORD, _QWORD, _QWORD))GetFullPathNameW)(
            a1,
            (unsigned int)integer_sum,
            *(_QWORD *)(a2 + 16),
            0);
    if ( int64_result_3 )
    {
      *(_QWORD *)(a2 + 32) = int64_result_3;
      return unused_written_slot;
    }
  }
  int64_result_2 = ((__int64 (*)(void))GetLastError)();
  crt_errno_map_os_error(int64_result_2);
  return (unsigned int)*errno_sr();
}

// 14026E150: invalid function type 'DWORD (__stdcall *GetFullPathNameW)(LPCWSTR lpFileName, DWORD nBufferLength, LPWSTR lpBuffer, LPWSTR *lpFilePart)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024AAA0) ----------------------------------------------------
__int64            __acrt_wcs_to_mbs_cp____crt_win32_buffer_no_resizing(_WORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int unused_written_slot;
  int wide_char_to_multi_byte_result;
  __int64 unused_written_slot_2;
  __int64 unused_written_slot_3;
  unsigned int error_code;
  int wide_char_to_multi_byte_result_2;
  __int64 packed_word_bits = 0;
  __int64 packed_word_bits_2 = 0;

  unused_written_slot = 0;
  if ( !a1 )
  {
    if ( *(_BYTE *)(a2 + 40) )
      *(_BYTE *)(a2 + 40) = 0;
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    goto LABEL_5;
  }
  if ( *a1 )
  {
    LODWORD(packed_word_bits) = 0;
    wide_char_to_multi_byte_result = crt_wide_char_to_multi_byte(a3, 0, (__int64)a1, 0xFFFFFFFFLL, 0, packed_word_bits, 0, 0);
    unused_written_slot_3 = wide_char_to_multi_byte_result;
    if ( wide_char_to_multi_byte_result )
    {
      if ( (unsigned __int64)wide_char_to_multi_byte_result > *(_QWORD *)(a2 + 24) )
      {
        if ( *(_BYTE *)(a2 + 40) )
          *(_BYTE *)(a2 + 40) = 0;
        goto LABEL_10;
      }
      LODWORD(packed_word_bits_2) = *(_QWORD *)(a2 + 24);
      wide_char_to_multi_byte_result_2 = crt_wide_char_to_multi_byte(a3, 0, (__int64)a1, 0xFFFFFFFFLL, *(_QWORD *)(a2 + 16), packed_word_bits_2, 0, 0);
      unused_written_slot_2 = wide_char_to_multi_byte_result_2;
      if ( wide_char_to_multi_byte_result_2 )
      {
        *(_QWORD *)(a2 + 32) = wide_char_to_multi_byte_result_2 - 1LL;
        return unused_written_slot;
      }
    }
    error_code = GetLastError();
    crt_errno_map_os_error(error_code);
    return (unsigned int)*errno_sr();
  }
  if ( !*(_QWORD *)(a2 + 24) )
  {
    if ( *(_BYTE *)(a2 + 40) )
      *(_BYTE *)(a2 + 40) = 0;
LABEL_10:
    *errno_sr() = 34;
    *(_BYTE *)(a2 + 40) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    return 34;
  }
  **(_BYTE **)(a2 + 16) = 0;
LABEL_5:
  *(_QWORD *)(a2 + 32) = 0;
  return unused_written_slot;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024ABB4) ----------------------------------------------------
__int64            __acrt_wcs_to_mbs_cp____crt_win32_buffer_public_dynamic_resizing(
        _WORD *a1,
        __int64 a2,
        unsigned int a3)
{
  unsigned int unused_written_slot;
  __int64 call_result;
  unsigned int comparison_result;
  int wide_char_to_multi_byte_result;
  unsigned __int64 saved_wide_char_to_multi_byte_result;
  unsigned int int64_result;
  unsigned __int64 loaded_word;
  __int64 call_result_2;
  __int64 integer_difference;
  int wide_char_to_multi_byte_result_2;
  __int64 packed_word_bits;
  __int64 packed_word_bits_2;

  unused_written_slot = 0;
  if ( !a1 )
  {
    if ( *(_BYTE *)(a2 + 40) )
    {
      free(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    goto LABEL_5;
  }
  if ( *a1 )
  {
    LODWORD(packed_word_bits) = 0;
    wide_char_to_multi_byte_result = crt_wide_char_to_multi_byte(a3, 0, (__int64)a1, 0xFFFFFFFFLL, 0, packed_word_bits, 0, 0);
    saved_wide_char_to_multi_byte_result = wide_char_to_multi_byte_result;
    if ( wide_char_to_multi_byte_result )
    {
      loaded_word = *(_QWORD *)(a2 + 24);
      if ( wide_char_to_multi_byte_result > loaded_word )
      {
        if ( *(_BYTE *)(a2 + 40) )
        {
          free(*(void **)(a2 + 16));
          *(_BYTE *)(a2 + 40) = 0;
        }
        call_result_2 = j__malloc_base();
        *(_QWORD *)(a2 + 16) = call_result_2;
        loaded_word = 0;
        integer_difference = -call_result_2;
        comparison_result = integer_difference == 0 ? 0xC : 0;
        if ( (integer_difference == 0 ? 0xC : 0) == 0 )
          loaded_word = saved_wide_char_to_multi_byte_result;
        *(_BYTE *)(a2 + 40) = comparison_result == 0;
        *(_QWORD *)(a2 + 24) = loaded_word;
        if ( (integer_difference == 0 ? 0xC : 0) != 0 )
          return comparison_result;
      }
      LODWORD(packed_word_bits_2) = loaded_word;
      wide_char_to_multi_byte_result_2 = crt_wide_char_to_multi_byte(a3, 0, (__int64)a1, 0xFFFFFFFFLL, *(_QWORD *)(a2 + 16), packed_word_bits_2, 0, 0);
      if ( wide_char_to_multi_byte_result_2 )
      {
        *(_QWORD *)(a2 + 32) = wide_char_to_multi_byte_result_2 - 1LL;
        return unused_written_slot;
      }
    }
    int64_result = ((__int64 (*)(void))GetLastError)();
    crt_errno_map_os_error(int64_result);
    return (unsigned int)*errno_sr();
  }
  if ( !*(_QWORD *)(a2 + 24) )
  {
    if ( *(_BYTE *)(a2 + 40) )
    {
      free(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    call_result = j__malloc_base();
    *(_QWORD *)(a2 + 16) = call_result;
    comparison_result = call_result == 0 ? 0xC : 0;
    *(_BYTE *)(a2 + 40) = comparison_result == 0;
    *(_QWORD *)(a2 + 24) = comparison_result == 0;
    if ( (call_result == 0 ? 0xC : 0) != 0 )
      return comparison_result;
  }
  **(_BYTE **)(a2 + 16) = 0;
LABEL_5:
  *(_QWORD *)(a2 + 32) = 0;
  return unused_written_slot;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024AD40) ----------------------------------------------------
__int64            __crt_win32_buffer__wchar_t____crt_win32_buffer_no_resizing__call_win32_function___lambda_17b8e77e04f0039ff1429d79b8271fa1_(
        __int64 a1,
        _QWORD *a2)
{
  unsigned int int64_result;
  unsigned int int64_result_2;

  int64_result = ((__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD))GetFullPathNameW)(
         *a2,
         *(unsigned int *)(a1 + 24),
         *(_QWORD *)(a1 + 16),
         0);
  if ( int64_result )
  {
    if ( (unsigned __int64)int64_result > *(_QWORD *)(a1 + 24) )
    {
      if ( *(_BYTE *)(a1 + 40) )
        *(_BYTE *)(a1 + 40) = 0;
      *errno_sr() = 34;
      *(_BYTE *)(a1 + 40) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      return 34;
    }
    else
    {
      *(_QWORD *)(a1 + 32) = int64_result;
      return 0;
    }
  }
  else
  {
    int64_result_2 = ((__int64 (*)(void))GetLastError)();
    crt_errno_map_os_error(int64_result_2);
    return (unsigned int)*errno_sr();
  }
}

// 14026E150: invalid function type 'DWORD (__stdcall *GetFullPathNameW)(LPCWSTR lpFileName, DWORD nBufferLength, LPWSTR lpBuffer, LPWSTR *lpFilePart)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024ADB4) ----------------------------------------------------
__int64            __crt_win32_buffer__wchar_t____crt_win32_buffer_public_dynamic_resizing__call_win32_function___lambda_1a60cddbd8640ed4c95e91b82cd9827b_(
        __int64 a1,
        _QWORD *a2)
{
  unsigned int int64_result;
  __int64 saved_int64_result;
  unsigned int int64_result_2;
  __int64 result;
  __int64 call_result;
  __int64 integer_sum;
  unsigned int int64_result_3;

  int64_result = ((__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD))GetFullPathNameW)(
         *a2,
         *(unsigned int *)(a1 + 24),
         *(_QWORD *)(a1 + 16),
         0);
  saved_int64_result = int64_result;
  if ( !int64_result )
    goto LABEL_2;
  if ( (unsigned __int64)int64_result <= *(_QWORD *)(a1 + 24) )
  {
    *(_QWORD *)(a1 + 32) = int64_result;
    return 0;
  }
  if ( *(_BYTE *)(a1 + 40) )
  {
    free(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
  call_result = j__malloc_base();
  *(_QWORD *)(a1 + 16) = call_result;
  integer_sum = 0;
  result = call_result == 0 ? 0xC : 0;
  if ( !(_DWORD)result )
    integer_sum = saved_int64_result + 1;
  *(_BYTE *)(a1 + 40) = (_DWORD)result == 0;
  *(_QWORD *)(a1 + 24) = integer_sum;
  if ( !(_DWORD)result )
  {
    int64_result_3 = ((__int64 (           *)(_QWORD, __int64, _QWORD, _QWORD))GetFullPathNameW)(*a2, integer_sum, *(_QWORD *)(a1 + 16), 0);
    if ( !int64_result_3 )
    {
LABEL_2:
      int64_result_2 = ((__int64 (*)(void))GetLastError)();
      crt_errno_map_os_error(int64_result_2);
      return (unsigned int)*errno_sr();
    }
    *(_QWORD *)(a1 + 32) = int64_result_3;
    return 0;
  }
  return result;
}

// 14026E150: invalid function type 'DWORD (__stdcall *GetFullPathNameW)(LPCWSTR lpFileName, DWORD nBufferLength, LPWSTR lpBuffer, LPWSTR *lpFilePart)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024AE8C) ----------------------------------------------------
__int64            __crt_win32_buffer__wchar_t____crt_win32_buffer_internal_dynamic_resizing__call_win32_function___lambda_70821863356a07dc63cd205fc1ee57ea_(
        __int64 a1,
        _QWORD *a2)
{
  unsigned int int64_result;
  __int64 saved_int64_result;
  unsigned int int64_result_2;
  __int64 result;
  __int64 malloc_base_result;
  __int64 integer_sum;
  unsigned int int64_result_3;

  int64_result = ((__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD))GetFullPathNameW)(
         *a2,
         *(unsigned int *)(a1 + 24),
         *(_QWORD *)(a1 + 16),
         0);
  saved_int64_result = int64_result;
  if ( !int64_result )
    goto LABEL_2;
  if ( (unsigned __int64)int64_result <= *(_QWORD *)(a1 + 24) )
  {
    *(_QWORD *)(a1 + 32) = int64_result;
    return 0;
  }
  if ( *(_BYTE *)(a1 + 40) )
  {
    free_base(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
  malloc_base_result = malloc_base();
  *(_QWORD *)(a1 + 16) = malloc_base_result;
  integer_sum = 0;
  result = malloc_base_result == 0 ? 0xC : 0;
  if ( !(_DWORD)result )
    integer_sum = saved_int64_result + 1;
  *(_BYTE *)(a1 + 40) = (_DWORD)result == 0;
  *(_QWORD *)(a1 + 24) = integer_sum;
  if ( !(_DWORD)result )
  {
    int64_result_3 = ((__int64 (           *)(_QWORD, __int64, _QWORD, _QWORD))GetFullPathNameW)(*a2, integer_sum, *(_QWORD *)(a1 + 16), 0);
    if ( !int64_result_3 )
    {
LABEL_2:
      int64_result_2 = ((__int64 (*)(void))GetLastError)();
      crt_errno_map_os_error(int64_result_2);
      return (unsigned int)*errno_sr();
    }
    *(_QWORD *)(a1 + 32) = int64_result_3;
    return 0;
  }
  return result;
}

// 14026E150: invalid function type 'DWORD (__stdcall *GetFullPathNameW)(LPCWSTR lpFileName, DWORD nBufferLength, LPWSTR lpBuffer, LPWSTR *lpFilePart)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024AF64) ----------------------------------------------------
__m128i *           sub_14024AF64(unsigned int a1, _BYTE *a2, int a3)
{
  __int64 allocation_size;
  int getdrive_result;
  __m128i *unused_written_slot;
  sr_path_buffer path_buffer;
  _BYTE destination_text[8];

  allocation_size = a3;
  getdrive_result = a1;
  if ( a3 < 0 )
    goto LABEL_2;
  if ( a1 )
  {
    if ( !(unsigned int)is_valid_drive(a1) )
    {
      *(_DWORD *)crt_doserrno() = 15;
      *errno_sr() = 13;
      goto LABEL_3;
    }
  }
  else
  {
    getdrive_result = getdrive();
  }
  if ( getdrive_result )
  {
    strcpy(&destination_text[1], ":.");
    destination_text[0] = getdrive_result + 64;
  }
  else
  {
    strcpy(destination_text, ".");
  }
  if ( a2 )
  {
    if ( (int)allocation_size <= 0 )
    {
LABEL_2:
      *errno_sr() = 22;
LABEL_3:
      crt_invalid_parameter_noinfo();
      return nullptr;
    }
    *a2 = 0;
    path_buffer.initial_capacity = allocation_size;
    path_buffer.capacity = allocation_size;
    path_buffer.initial = a2;
    path_buffer.buffer = a2;
    path_buffer.size = 0;
    path_buffer.owned = 0;
    if ( (unsigned int)__acrt_get_full_path_name_narrow_acp_or_utf8____crt_win32_buffer_no_resizing(destination_text, (__int64)&path_buffer.initial) )
      return nullptr;
    return (__m128i *)a2;
  }
  else
  {
    path_buffer.initial = nullptr;
    path_buffer.initial_capacity = 0;
    path_buffer.size = 0;
    path_buffer.buffer = (void *)sr_path_malloc(allocation_size);
    if ( path_buffer.buffer )
    {
      path_buffer.owned = 1;
      path_buffer.capacity = allocation_size;
    }
    else
    {
      path_buffer.owned = 0;
      path_buffer.capacity = 0;
    }
    if ( (unsigned int)__acrt_get_full_path_name_narrow_acp_or_utf8____crt_win32_buffer_public_dynamic_resizing(
                         destination_text,
                         (__int64)&path_buffer.initial) )
    {
      if ( path_buffer.owned )
        free(path_buffer.buffer);
      return nullptr;
    }
    unused_written_slot = sub_14024B62C((__int64 *)&path_buffer.initial);
    if ( path_buffer.owned )
      free(path_buffer.buffer);
    return unused_written_slot;
  }
}

//----- (000000014024B0BC) ----------------------------------------------------
__int64            sub_14024B0BC(unsigned int a1, _WORD *a2, int a3)
{
  __int64 input_value;
  int getdrive_result;
  __int64 unused_local;
  _WORD *input_cursor;
  __int64 unused_written_slot;
  void *Block;
  __int64 unused_written_slot_2;
  __int64 unused_written_slot_3;
  char selection_flag;
  _BYTE integer_sum[6];
  __int16 unused_written_slot_4;
  __int64 unused_local_2;

  input_value = a3;
  getdrive_result = a1;
  if ( a3 < 0 )
  {
LABEL_2:
    *errno_sr() = 22;
LABEL_3:
    crt_invalid_parameter_noinfo();
    return 0; /* 0x14024B0F8: xor eax, eax */
  }
  if ( a1 )
  {
    if ( !(unsigned int)is_valid_drive(a1) )
    {
      *(_DWORD *)crt_doserrno() = 15;
      *errno_sr() = 13;
      goto LABEL_3;
    }
  }
  else
  {
    getdrive_result = getdrive();
  }
  if ( getdrive_result )
  {
    *(_DWORD *)&integer_sum[2] = 3014714;
    *(_WORD *)integer_sum = getdrive_result + 64;
    unused_written_slot_4 = 0;
  }
  else
  {
    *(_DWORD *)integer_sum = 46;
  }
  if ( a2 )
  {
    if ( (int)input_value > 0 )
    {
      *a2 = 0;
      unused_written_slot = input_value;
      unused_written_slot_2 = input_value;
      input_cursor = a2;
      Block = a2;
      unused_written_slot_3 = 0;
      selection_flag = 0;
      return (unsigned int)unknown_libname_805((__int64)integer_sum, (__int64)&input_cursor) ? 0 : (__int64)a2; /* 0x14024B213: test eax, eax; jne -> xor eax, eax; else 0x14024B21B: mov rax, rdi */
    }
    goto LABEL_2;
  }
  input_cursor = nullptr;
  unused_written_slot = 0;
  unused_written_slot_3 = 0;
  Block = (void *)j__malloc_base();
  if ( Block )
  {
    selection_flag = 1;
    unused_written_slot_2 = input_value;
  }
  else
  {
    selection_flag = 0;
    unused_written_slot_2 = 0;
  }
  if ( (unsigned int)__acrt_get_full_path_name_wide____crt_win32_buffer_public_dynamic_resizing(
                       (__int64)integer_sum,
                       (__int64)&input_cursor) )
  {
    if ( selection_flag )
      free(Block);
  }
  else
  {
    __int64 sr_result = (__int64)sub_14024B710((__int64 *)&input_cursor); /* 0x14024B1AD: mov rbx, rax */
    if ( selection_flag )
      free(Block);
    return sr_result; /* 0x14024B1BF: mov rax, rbx */
  }
  return 0; /* 0x14024B0F8: xor eax, eax */
}

//----- (000000014024B2E8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_811(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 40) )
  {
    free(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
}

//----- (000000014024B318) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_813(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 40) )
  {
    free(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
}

//----- (000000014024B33C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_814(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 packed_word_bits;

  LODWORD(packed_word_bits) = a5;
  return crt_wide_char_to_multi_byte(a2, 0, a3, 0xFFFFFFFFLL, a4, packed_word_bits, 0, 0);
}

//----- (000000014024B3B4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_818()
{
  return crt_multi_byte_to_wide_char();
}

//----- (000000014024B3DC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_819(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 packed_word_bits;

  LODWORD(packed_word_bits) = a5;
  return crt_wide_char_to_multi_byte(a2, 0, a3, 0xFFFFFFFFLL, a4, packed_word_bits, 0, 0);
}

//----- (000000014024B418) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_821(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 40) )
  {
    free(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
}

//----- (000000014024B448) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_823(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 40) )
  {
    free(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
}

//----- (000000014024B49C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_826(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 40) )
    *(_BYTE *)(a1 + 40) = 0;
  *errno_sr() = 34;
  *(_QWORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 40) = 0;
  return 34;
}

//----- (000000014024B4CC) ----------------------------------------------------
__int64            sub_14024B4CC(__int64 a1, __int64 a2)
{
  __int64 call_result;
  __int64 result;

  if ( *(_BYTE *)(a1 + 40) )
  {
    free(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
  call_result = j__malloc_base();
  *(_QWORD *)(a1 + 16) = call_result;
  result = call_result == 0 ? 0xC : 0;
  if ( (_DWORD)result )
  {
    *(_QWORD *)(a1 + 24) = 0;
    *(_BYTE *)(a1 + 40) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 40) = 1;
    *(_QWORD *)(a1 + 24) = a2;
    return 0;
  }
  return result;
}

//----- (000000014024B528) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_827(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 40) )
    *(_BYTE *)(a1 + 40) = 0;
  *errno_sr() = 34;
  *(_QWORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 40) = 0;
  return 34;
}

//----- (000000014024B558) ----------------------------------------------------
__int64            sub_14024B558(__int64 a1, __int64 a2)
{
  __int64 call_result;
  __int64 result;

  if ( *(_BYTE *)(a1 + 40) )
  {
    free(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
  call_result = j__malloc_base();
  *(_QWORD *)(a1 + 16) = call_result;
  result = call_result == 0 ? 0xC : 0;
  if ( (_DWORD)result )
  {
    *(_QWORD *)(a1 + 24) = 0;
    *(_BYTE *)(a1 + 40) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 40) = 1;
    *(_QWORD *)(a1 + 24) = a2;
    return 0;
  }
  return result;
}

//----- (000000014024B5B4) ----------------------------------------------------
__int64            sub_14024B5B4(void **     a1, __int64 a2,      struct __crt_win32_buffer_empty_debug_info *a3)
{
  *errno_sr() = 34;
  return 34;
}

//----- (000000014024B5CC) ----------------------------------------------------
__int64            __crt_win32_buffer_internal_dynamic_resizing__allocate(
        void **     a1,
        __int64 a2,
             struct __crt_win32_buffer_empty_debug_info *a3)
{
  void *returned_pointer;

  returned_pointer = (void *)j__malloc_base();
  *a1 = returned_pointer;
  return returned_pointer == nullptr ? 0xC : 0;
}

//----- (000000014024B62C) ----------------------------------------------------
__m128i *           sub_14024B62C(__int64 *a1)
{
  __int64 saved_destination_buffer;
  __m128i *destination_buffer;
  unsigned __int64 table_value;
  __int64 table_value_2;
  unsigned __int64 table_value_3;
  __int64 loaded_word;

  saved_destination_buffer = a1[2];
  if ( saved_destination_buffer && a1[4] )
  {
    if ( *((_BYTE *)a1 + 40) )
      goto LABEL_14;
    destination_buffer = (__m128i *)j__malloc_base();
    table_value = a1[3];
    saved_destination_buffer = (__int64)destination_buffer;
    table_value_2 = a1[2];
    table_value_3 = a1[4];
    if ( !table_value )
      goto LABEL_14;
    if ( !destination_buffer )
      goto LABEL_6;
    if ( table_value_2 && table_value_3 >= table_value )
    {
      crt_memcpy(destination_buffer, (     __m128i *)a1[2], a1[3]);
    }
    else
    {
      crt_memset((void *)(uintptr_t)(destination_buffer), 0, a1[4]);
      if ( !table_value_2 )
      {
LABEL_6:
        *errno_sr() = 22;
LABEL_13:
        crt_invalid_parameter_noinfo();
        goto LABEL_14;
      }
      if ( table_value_3 < table_value )
      {
        *errno_sr() = 34;
        goto LABEL_13;
      }
    }
LABEL_14:
    loaded_word = *a1;
    a1[4] = 0;
    a1[2] = loaded_word;
    a1[3] = a1[1];
    return (__m128i *)saved_destination_buffer;
  }
  return nullptr;
}

// 14024B66B: conditional instruction was optimized away because rcx.8!=0

//----- (000000014024B710) ----------------------------------------------------
__m128i *           sub_14024B710(__int64 *a1)
{
  __int64 saved_destination_buffer;
  __m128i *destination_buffer;
  unsigned __int64 table_value;
  __int64 table_value_2;
  unsigned __int64 table_value_3;
  __int64 loaded_word;

  saved_destination_buffer = a1[2];
  if ( saved_destination_buffer && a1[4] )
  {
    if ( *((_BYTE *)a1 + 40) )
      goto LABEL_14;
    destination_buffer = (__m128i *)j__malloc_base();
    table_value = a1[3];
    saved_destination_buffer = (__int64)destination_buffer;
    table_value_2 = a1[2];
    table_value_3 = a1[4];
    if ( !table_value )
      goto LABEL_14;
    if ( !destination_buffer )
      goto LABEL_6;
    if ( table_value_2 && table_value_3 >= table_value )
    {
      crt_memcpy(destination_buffer, (     __m128i *)a1[2], a1[3]);
    }
    else
    {
      crt_memset((void *)(uintptr_t)(destination_buffer), 0, a1[4]);
      if ( !table_value_2 )
      {
LABEL_6:
        *errno_sr() = 22;
LABEL_13:
        crt_invalid_parameter_noinfo();
        goto LABEL_14;
      }
      if ( table_value_3 < table_value )
      {
        *errno_sr() = 34;
        goto LABEL_13;
      }
    }
LABEL_14:
    loaded_word = *a1;
    a1[4] = 0;
    a1[2] = loaded_word;
    a1[3] = a1[1];
    return (__m128i *)saved_destination_buffer;
  }
  return nullptr;
}

// 14024B74F: conditional instruction was optimized away because rcx.8!=0

//----- (000000014024B7F8) ----------------------------------------------------
__int64            is_valid_drive(unsigned int a1)
{
  __int64 unused_local;
  __int16 RootPathName;
  int unused_written_slot;
  __int16 unused_written_slot_2;
  __int64 unused_local_2;

  if ( a1 <= 0x1A )
  {
    if ( a1 )
    {
      unused_written_slot = 6029370;
      RootPathName = a1 + 64;
      unused_written_slot_2 = 0;
      return ((unsigned int (           *)(__int16 *))GetDriveTypeW)(&RootPathName) >= 2; /* 0x14024B85D: cmp eax, 2; setae bl; mov eax, ebx */
    }
    return 1; /* 0x14024B837: lea eax, [rbx + 1] (rbx = 0) */
  }
  else
  {
    *(_DWORD *)crt_doserrno() = 15;
    *errno_sr() = 13;
    crt_invalid_parameter_noinfo();
  }
  return 0; /* 0x14024B82D: xor eax, eax */
}

// 14026E158: invalid function type 'UINT (__stdcall *GetDriveTypeW)(LPCWSTR lpRootPathName)' has been ignored

//----- (000000014024B890) ----------------------------------------------------
void            __crt_win32_buffer__char____crt_win32_buffer_public_dynamic_resizing__set_to_nullptr(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 40) )
  {
    free(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
}

//----- (000000014024B8D4) ----------------------------------------------------
__m128i *           sub_14024B8D4(_BYTE *a1, int a2)
{
  return sub_14024AF64(0, a1, a2);
}

//----- (000000014024B8FC) ----------------------------------------------------
__m128i *           sub_14024B8FC(unsigned int a1, _BYTE *a2, int a3)
{
  return sub_14024AF64(a1, a2, a3);
}

//----- (000000014024B91C) ----------------------------------------------------
__int64            sub_14024B91C(_WORD *a1, int a2)
{
  return sub_14024B0BC(0, a1, a2);
}

//----- (000000014024B944) ----------------------------------------------------
__int64            sub_14024B944(unsigned int a1, _WORD *a2, int a3)
{
  return sub_14024B0BC(a1, a2, a3);
}

//----- (000000014024B964) ----------------------------------------------------
__int64            sub_14024B964(__m128i *a1, unsigned __int64 a2,      __m128i *a3, unsigned __int64 a4)
{
  int *unused_written_slot;
  unsigned int selection_code;

  if ( !a4 )
    return 0;
  if ( !a1 )
    goto LABEL_4;
  if ( a3 && a2 >= a4 )
  {
    crt_memcpy(a1, a3, a4);
    return 0;
  }
  crt_memset((void *)(uintptr_t)(a1), 0, a2);
  if ( !a3 )
  {
LABEL_4:
    unused_written_slot = errno_sr();
    selection_code = 22;
LABEL_5:
    *unused_written_slot = selection_code;
    crt_invalid_parameter_noinfo();
    return selection_code;
  }
  if ( a2 < a4 )
  {
    unused_written_slot = errno_sr();
    selection_code = 34;
    goto LABEL_5;
  }
  return 22;
}

// 14024B964: invalid function type 'errno_t __cdecl sub_14024B964(void *const Destination, const rsize_t DestinationSize, const void *const Source, const rsize_t SourceSize)' has been ignored

//----- (000000014024BA34) ----------------------------------------------------
__int64            __acrt_convert_wcs_mbs_cp__wchar_t__char___lambda_d8593a27d1aa8c02be35c86a17d324c4_____crt_win32_buffer_internal_dynamic_resizing_dup2(
        _WORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 allocated_buffer_2;
  __int64 result;
  int int64_result_2;
  unsigned __int64 allocation_size;
  unsigned int error_code_2;
  unsigned __int64 saved_allocation_size;
  __int64 allocated_buffer_3;
  int wide_char_to_multi_byte_result;
  __int64 wide_char_to_multi_byte_result_2;
  __int64 packed_word_bits;

  if ( !a1 )
  {
    if ( *(_BYTE *)(a2 + 40) )
    {
      free_base(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    goto LABEL_5;
  }
  if ( *a1 )
  {
    LODWORD(wide_char_to_multi_byte_result_2) = 0;
    int64_result_2 = crt_wide_char_to_multi_byte(a4, 0, (__int64)a1, 0xFFFFFFFFLL, 0, wide_char_to_multi_byte_result_2, 0, 0);
    allocation_size = int64_result_2;
    if ( int64_result_2 )
    {
      saved_allocation_size = *(_QWORD *)(a2 + 24);
      if ( int64_result_2 > saved_allocation_size )
      {
        if ( *(_BYTE *)(a2 + 40) )
        {
          free_base(*(void **)(a2 + 16));
          *(_BYTE *)(a2 + 40) = 0;
        }
        allocated_buffer_3 = malloc_base();
        *(_QWORD *)(a2 + 16) = allocated_buffer_3;
        saved_allocation_size = 0;
        result = allocated_buffer_3 == 0 ? 0xC : 0;
        if ( !(_DWORD)result )
          saved_allocation_size = allocation_size;
        *(_BYTE *)(a2 + 40) = (_DWORD)result == 0;
        *(_QWORD *)(a2 + 24) = saved_allocation_size;
        if ( (_DWORD)result )
          return result;
      }
      LODWORD(packed_word_bits) = saved_allocation_size;
      wide_char_to_multi_byte_result = crt_wide_char_to_multi_byte(a4, 0, (__int64)a1, 0xFFFFFFFFLL, *(_QWORD *)(a2 + 16), packed_word_bits, 0, 0);
      if ( wide_char_to_multi_byte_result )
      {
        *(_QWORD *)(a2 + 32) = wide_char_to_multi_byte_result - 1LL;
        return 0;
      }
    }
    error_code_2 = ((__int64 (*)(void))GetLastError)();
    crt_errno_map_os_error(error_code_2);
    return (unsigned int)*errno_sr();
  }
  if ( *(_QWORD *)(a2 + 24) )
    goto LABEL_11;
  if ( *(_BYTE *)(a2 + 40) )
  {
    free_base(*(void **)(a2 + 16));
    *(_BYTE *)(a2 + 40) = 0;
  }
  allocated_buffer_2 = malloc_base();
  *(_QWORD *)(a2 + 16) = allocated_buffer_2;
  result = allocated_buffer_2 == 0 ? 0xC : 0;
  *(_BYTE *)(a2 + 40) = (_DWORD)result == 0;
  *(_QWORD *)(a2 + 24) = (_DWORD)result == 0;
  if ( !(_DWORD)result )
  {
LABEL_11:
    **(_BYTE **)(a2 + 16) = 0;
LABEL_5:
    *(_QWORD *)(a2 + 32) = 0;
    return 0;
  }
  return result;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

unsigned int sr_chdir_codepage(void) {
  sr_path_locale locale;
  unsigned int cp=65001;
  crt_locale_update((_LocaleUpdate *)&locale,nullptr);
  if(*(unsigned int *)(locale.locale+12)!=65001)
    cp=(unsigned int)sub_14024EDA4()?0:1;
  if(locale.changed) *(unsigned int *)(locale.thread+936)&=~2u;
  return cp;
}

__int64            sr_chdir_current_wide(__int64 a1)
{
  unsigned int int64_result;
  unsigned int unused_written_slot;
  __int64 saved_int64_result;
  unsigned int error_code;
  __int64 allocated_buffer;
  __int64 allocated_buffer_2;
  __int64 comparison_result;
  unsigned int int64_result_2;

  int64_result = ((__int64 (           *)(_QWORD, _QWORD))GetCurrentDirectoryW)(*(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 16));
  unused_written_slot = 0;
  saved_int64_result = int64_result;
  if ( int64_result )
  {
    if ( (unsigned __int64)int64_result <= *(_QWORD *)(a1 + 24) )
    {
      *(_QWORD *)(a1 + 32) = int64_result;
      return unused_written_slot;
    }
    if ( *(_BYTE *)(a1 + 40) )
    {
      free_base(*(void **)(a1 + 16));
      *(_BYTE *)(a1 + 40) = 0;
    }
    allocated_buffer = sr_path_malloc(2*(saved_int64_result+1));
    *(_QWORD *)(a1 + 16) = allocated_buffer;
    allocated_buffer_2 = 0;
    comparison_result = -allocated_buffer;
    if ( (comparison_result == 0 ? 0xC : 0) == 0 )
      allocated_buffer_2 = saved_int64_result + 1;
    *(_BYTE *)(a1 + 40) = (comparison_result == 0 ? 0xC : 0) == 0;
    *(_QWORD *)(a1 + 24) = allocated_buffer_2;
    if ( (comparison_result == 0 ? 0xC : 0) != 0 )
      return comparison_result == 0 ? 0xC : 0;
    int64_result_2 = ((__int64 (           *)(__int64, _QWORD))GetCurrentDirectoryW)(allocated_buffer_2, *(_QWORD *)(a1 + 16));
    if ( int64_result_2 )
    {
      *(_QWORD *)(a1 + 32) = int64_result_2;
      return unused_written_slot;
    }
  }
  error_code = GetLastError();
  crt_errno_map_os_error(error_code);
  return (unsigned int)*errno_sr();
}

// 14026E138: invalid function type 'DWORD (__stdcall *GetCurrentDirectoryW)(DWORD nBufferLength, LPWSTR lpBuffer)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

__int64            sr_chdir_wcs(
        _WORD *a1,
        __int64 a2,
        unsigned int a3)
{
  unsigned int unused_written_slot;
  __int64 allocated_buffer_2;
  unsigned int comparison_result;
  int int64_result_2;
  unsigned __int64 allocation_size;
  unsigned int error_code_2;
  unsigned __int64 saved_allocation_size;
  __int64 allocated_buffer_3;
  __int64 wide_char_to_multi_byte_result;
  int wide_char_to_multi_byte_result_2;
  __int64 packed_word_bits_2 = 0;
  __int64 packed_word_bits_3 = 0;

  unused_written_slot = 0;
  if ( !a1 )
  {
    if ( *(_BYTE *)(a2 + 40) )
    {
      free_base(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    goto LABEL_5;
  }
  if ( *a1 )
  {
    LODWORD(packed_word_bits_2) = 0;
    int64_result_2 = crt_wide_char_to_multi_byte(a3, 0, (__int64)a1, 0xFFFFFFFFLL, 0, packed_word_bits_2, 0, 0);
    allocation_size = int64_result_2;
    if ( int64_result_2 )
    {
      saved_allocation_size = *(_QWORD *)(a2 + 24);
      if ( int64_result_2 > saved_allocation_size )
      {
        if ( *(_BYTE *)(a2 + 40) )
        {
          free_base(*(void **)(a2 + 16));
          *(_BYTE *)(a2 + 40) = 0;
        }
        allocated_buffer_3 = sr_path_malloc(allocation_size);
        *(_QWORD *)(a2 + 16) = allocated_buffer_3;
        saved_allocation_size = 0;
        wide_char_to_multi_byte_result = -allocated_buffer_3;
        comparison_result = wide_char_to_multi_byte_result == 0 ? 0xC : 0;
        if ( (wide_char_to_multi_byte_result == 0 ? 0xC : 0) == 0 )
          saved_allocation_size = allocation_size;
        *(_BYTE *)(a2 + 40) = comparison_result == 0;
        *(_QWORD *)(a2 + 24) = saved_allocation_size;
        if ( (wide_char_to_multi_byte_result == 0 ? 0xC : 0) != 0 )
          return comparison_result;
      }
      LODWORD(packed_word_bits_3) = saved_allocation_size;
      wide_char_to_multi_byte_result_2 = crt_wide_char_to_multi_byte(a3, 0, (__int64)a1, 0xFFFFFFFFLL, *(_QWORD *)(a2 + 16), packed_word_bits_3, 0, 0);
      if ( wide_char_to_multi_byte_result_2 )
      {
        *(_QWORD *)(a2 + 32) = wide_char_to_multi_byte_result_2 - 1LL;
        return unused_written_slot;
      }
    }
    error_code_2 = GetLastError();
    crt_errno_map_os_error(error_code_2);
    return (unsigned int)*errno_sr();
  }
  if ( !*(_QWORD *)(a2 + 24) )
  {
    if ( *(_BYTE *)(a2 + 40) )
    {
      free_base(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    allocated_buffer_2 = sr_path_malloc(1);
    *(_QWORD *)(a2 + 16) = allocated_buffer_2;
    comparison_result = allocated_buffer_2 == 0 ? 0xC : 0;
    *(_BYTE *)(a2 + 40) = comparison_result == 0;
    *(_QWORD *)(a2 + 24) = comparison_result == 0;
    if ( (allocated_buffer_2 == 0 ? 0xC : 0) != 0 )
      return comparison_result;
  }
  **(_BYTE **)(a2 + 16) = 0;
LABEL_5:
  *(_QWORD *)(a2 + 32) = 0;
  return unused_written_slot;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024BBC0) ----------------------------------------------------
__int64 __acrt_get_current_directory_narrow_acp_or_utf8____crt_win32_buffer_internal_dynamic_resizing(__int64 output) {
  wchar_t storage[264];
  sr_path_buffer wide={storage,260,storage,260,0,0};
  unsigned int result=(unsigned int)sr_chdir_current_wide((__int64)(uintptr_t)&wide);
  if(!result)
    result=(unsigned int)sr_chdir_wcs((_WORD *)wide.buffer,output,sr_chdir_codepage());
  if(wide.owned) free_base(wide.buffer);
  return result;
}

//----- (000000014024BCDC) ----------------------------------------------------
__int64            __acrt_get_current_directory_wide____crt_win32_buffer_internal_dynamic_resizing(__int64 a1)
{
  unsigned int int64_result;
  unsigned int unused_written_slot;
  __int64 saved_int64_result;
  unsigned int int64_result_2;
  __int64 malloc_base_result;
  __int64 integer_sum;
  __int64 integer_difference;
  unsigned int int64_result_3;

  int64_result = ((__int64 (           *)(_QWORD, _QWORD))GetCurrentDirectoryW)(*(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 16));
  unused_written_slot = 0;
  saved_int64_result = int64_result;
  if ( int64_result )
  {
    if ( (unsigned __int64)int64_result <= *(_QWORD *)(a1 + 24) )
    {
      *(_QWORD *)(a1 + 32) = int64_result;
      return unused_written_slot;
    }
    if ( *(_BYTE *)(a1 + 40) )
    {
      free_base(*(void **)(a1 + 16));
      *(_BYTE *)(a1 + 40) = 0;
    }
    malloc_base_result = malloc_base();
    *(_QWORD *)(a1 + 16) = malloc_base_result;
    integer_sum = 0;
    integer_difference = -malloc_base_result;
    if ( (integer_difference == 0 ? 0xC : 0) == 0 )
      integer_sum = saved_int64_result + 1;
    *(_BYTE *)(a1 + 40) = (integer_difference == 0 ? 0xC : 0) == 0;
    *(_QWORD *)(a1 + 24) = integer_sum;
    if ( (integer_difference == 0 ? 0xC : 0) != 0 )
      return integer_difference == 0 ? 0xC : 0;
    int64_result_3 = ((__int64 (           *)(__int64, _QWORD))GetCurrentDirectoryW)(integer_sum, *(_QWORD *)(a1 + 16));
    if ( int64_result_3 )
    {
      *(_QWORD *)(a1 + 32) = int64_result_3;
      return unused_written_slot;
    }
  }
  int64_result_2 = ((__int64 (*)(void))GetLastError)();
  crt_errno_map_os_error(int64_result_2);
  return (unsigned int)*errno_sr();
}

// 14026E138: invalid function type 'DWORD (__stdcall *GetCurrentDirectoryW)(DWORD nBufferLength, LPWSTR lpBuffer)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024BDA4) ----------------------------------------------------
__int64            __crt_win32_buffer__wchar_t____crt_win32_buffer_internal_dynamic_resizing__call_win32_function___lambda_31b6d45744ab507ef0f4bc45493ab729_(
        __int64 a1)
{
  unsigned int int64_result;
  __int64 saved_int64_result;
  unsigned int int64_result_2;
  __int64 result;
  __int64 malloc_base_result;
  __int64 integer_sum;
  unsigned int int64_result_3;

  int64_result = ((__int64 (           *)(_QWORD, _QWORD))GetCurrentDirectoryW)(*(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 16));
  saved_int64_result = int64_result;
  if ( !int64_result )
    goto LABEL_2;
  if ( (unsigned __int64)int64_result <= *(_QWORD *)(a1 + 24) )
  {
    *(_QWORD *)(a1 + 32) = int64_result;
    return 0;
  }
  if ( *(_BYTE *)(a1 + 40) )
  {
    free_base(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
  malloc_base_result = malloc_base();
  *(_QWORD *)(a1 + 16) = malloc_base_result;
  integer_sum = 0;
  result = malloc_base_result == 0 ? 0xC : 0;
  if ( !(_DWORD)result )
    integer_sum = saved_int64_result + 1;
  *(_BYTE *)(a1 + 40) = (_DWORD)result == 0;
  *(_QWORD *)(a1 + 24) = integer_sum;
  if ( !(_DWORD)result )
  {
    int64_result_3 = ((__int64 (           *)(_QWORD, _QWORD))GetCurrentDirectoryW)(
           *(unsigned int *)(a1 + 24),
           *(_QWORD *)(a1 + 16));
    if ( !int64_result_3 )
    {
LABEL_2:
      int64_result_2 = ((__int64 (*)(void))GetLastError)();
      crt_errno_map_os_error(int64_result_2);
      return (unsigned int)*errno_sr();
    }
    *(_QWORD *)(a1 + 32) = int64_result_3;
    return 0;
  }
  return result;
}

// 14026E138: invalid function type 'DWORD (__stdcall *GetCurrentDirectoryW)(DWORD nBufferLength, LPWSTR lpBuffer)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024BE64) ----------------------------------------------------
__int64            common_chdir__char(_BYTE *a1)
{
  unsigned int int64_result;
  int current_directory_narrow_acp_or;
  _BYTE *cached_block;
  char loaded_word;
  unsigned int int64_result_2;
  __int64 unused_local;
  _BYTE scratch_buffer[2];
  __int16 unused_written_slot;
  _QWORD scratch_buffer_2[2];
  void *Block;
  __int64 unused_written_slot_2;
  __int64 unused_written_slot_3;
  int unrecovered_register_value;
  _DWORD scratch_buffer_3[34];
  __int64 unused_local_2;

  if ( a1 )
  {
    if ( (unsigned int)_acrt_SetCurrentDirectoryA(a1) )
    {
      unused_written_slot_3 = 0;
      scratch_buffer_2[0] = (uint64)(uintptr_t)(scratch_buffer_3);
      scratch_buffer_2[1] = 261;
      unused_written_slot_2 = 261;
      Block = scratch_buffer_3;
      LOBYTE(unrecovered_register_value) = 0;
      current_directory_narrow_acp_or = __acrt_get_current_directory_narrow_acp_or_utf8____crt_win32_buffer_internal_dynamic_resizing((__int64)scratch_buffer_2);
      cached_block = Block;
      if ( !current_directory_narrow_acp_or )
      {
        if ( (loaded_word = *(_BYTE *)Block, *(_BYTE *)Block != 92) && loaded_word != 47 || loaded_word != *((_BYTE *)Block + 1) )
        {
          scratch_buffer[0] = 61;
          scratch_buffer[1] = toupper(loaded_word);
          unused_written_slot = 58;
          if ( !(unsigned int)_acrt_SetEnvironmentVariableA(scratch_buffer, cached_block) )
          {
            int64_result_2 = ((__int64 (*)(void))GetLastError)();
            crt_errno_map_os_error(int64_result_2);
          }
        }
      }
      if ( (_BYTE)unrecovered_register_value )
        free_base(cached_block);
    }
    else
    {
      int64_result = ((__int64 (*)(void))GetLastError)();
      crt_errno_map_os_error(int64_result);
    }
  }
  else
  {
    *(_DWORD *)crt_doserrno() = 0;
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
  return 0; /* the function has no caller */
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024BF88) ----------------------------------------------------
__int64            common_chdir__wchar_t(__int64 a1)
{
  unsigned int int64_result;
  int current_directory;
  void *cached_lpvalue;
  __int16 loaded_word;
  unsigned int int64_result_2;
  __int64 unused_local;
  _QWORD scratch_buffer[2];
  char *lpValue;
  __int64 unused_written_slot;
  __int64 unused_written_slot_2;
  __int16 unrecovered_register_value;
  _WORD Name[2];
  int unused_written_slot_3;
  _BYTE scratch_buffer_2[528];
  __int64 unused_local_2;

  if ( a1 )
  {
    if ( (unsigned int)((__int64 (*)(void))SetCurrentDirectoryW)() )
    {
      unused_written_slot_2 = 0;
      scratch_buffer[1] = 261;
      scratch_buffer[0] = (uint64)(uintptr_t)(scratch_buffer_2);
      unused_written_slot = 261;
      lpValue = scratch_buffer_2;
      LOBYTE(unrecovered_register_value) = 0;
      current_directory = __acrt_get_current_directory_wide____crt_win32_buffer_internal_dynamic_resizing((__int64)scratch_buffer);
      cached_lpvalue = lpValue;
      if ( !current_directory )
      {
        if ( (loaded_word = *(_WORD *)lpValue, *(_WORD *)lpValue != 92) && loaded_word != 47 || loaded_word != *((_WORD *)lpValue + 1) )
        {
          Name[1] = toupper(*lpValue);
          Name[0] = 61;
          unused_written_slot_3 = 58;
          if ( !(unsigned int)((__int64 (           *)(_WORD *, void *))SetEnvironmentVariableW)(Name, cached_lpvalue) )
          {
            int64_result_2 = ((__int64 (*)(void))GetLastError)();
            crt_errno_map_os_error(int64_result_2);
          }
        }
      }
      if ( (_BYTE)unrecovered_register_value )
        free_base(cached_lpvalue);
    }
    else
    {
      int64_result = ((__int64 (*)(void))GetLastError)();
      crt_errno_map_os_error(int64_result);
    }
  }
  else
  {
    *(_DWORD *)crt_doserrno() = 0;
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
  return 0; /* the function has no caller */
}

// 14026E140: invalid function type 'BOOL (__stdcall *SetCurrentDirectoryW)(LPCWSTR lpPathName)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E148: invalid function type 'BOOL (__stdcall *SetEnvironmentVariableW)(LPCWSTR lpName, LPCWSTR lpValue)' has been ignored

//----- (000000014024C0F0) ----------------------------------------------------
__int64            sub_14024C0F0(char *a1)
{
  char input_byte;
  char toupper_result;
  unsigned int int64_result;
  char selection_code;
  char unused_written_slot;
  __int16 unused_written_slot_2;

  input_byte = *a1;
  if ( (*a1 == 92 || input_byte == 47) && input_byte == a1[1] )
    return 0;
  toupper_result = toupper(input_byte);
  selection_code = 61;
  unused_written_slot = toupper_result;
  unused_written_slot_2 = 58;
  if ( (unsigned int)_acrt_SetEnvironmentVariableA(&selection_code, a1) )
    return 0;
  int64_result = ((__int64 (*)(void))GetLastError)();
  crt_errno_map_os_error(int64_result);
  return 0xFFFFFFFFLL;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024C14C) ----------------------------------------------------
__int64            set_cwd_environment_variable__wchar_t(__int16 *a1)
{
  __int16 loaded_word;
  unsigned int int64_result;
  __int64 unused_local;
  _WORD Name[2];
  int unused_written_slot;
  __int64 unused_local_2;

  loaded_word = *a1;
  if ( *a1 != 92 && loaded_word != 47 || loaded_word != a1[1] )
  {
    Name[1] = toupper(*(char *)a1);
    Name[0] = 61;
    unused_written_slot = 58;
    if ( !(unsigned int)((__int64 (           *)(_WORD *, __int16 *))SetEnvironmentVariableW)(Name, a1) )
    {
      int64_result = ((__int64 (*)(void))GetLastError)();
      crt_errno_map_os_error(int64_result);
    }
  }
  return 0; /* the function has no caller */
}

// 14026E148: invalid function type 'BOOL (__stdcall *SetEnvironmentVariableW)(LPCWSTR lpName, LPCWSTR lpValue)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024C1FC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_830(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 packed_word_bits;

  LODWORD(packed_word_bits) = a5;
  return crt_wide_char_to_multi_byte(a2, 0, a3, 0xFFFFFFFFLL, a4, packed_word_bits, 0, 0);
}

//----- (000000014024C22C) ----------------------------------------------------
__int64 crt_chdir(_BYTE *path) {
  char storage[272];
  sr_path_buffer buffer={storage,261,storage,261,0,0};
  unsigned int result=UINT32_MAX;
  if(!path) {
    *(_DWORD *)crt_doserrno()=0;
    *errno_sr()=22;
    crt_invalid_parameter_noinfo();
    return result;
  }
  if(!(unsigned int)_acrt_SetCurrentDirectoryA(path)) {
    crt_errno_map_os_error(GetLastError());
    return result;
  }
  if((unsigned int)__acrt_get_current_directory_narrow_acp_or_utf8____crt_win32_buffer_internal_dynamic_resizing((__int64)(uintptr_t)&buffer)) {
    if(buffer.owned) free_base(buffer.buffer);
    return result;
  }
  unsigned char *text=buffer.buffer;
  if((text[0]=='\\' || text[0]=='/') && text[0]==text[1]) result=0;
  else {
    char name[4]={'=',(char)toupper((signed char)text[0]),':',0};
    if((unsigned int)_acrt_SetEnvironmentVariableA((_BYTE *)name,(_BYTE *)text)) result=0;
    else crt_errno_map_os_error(GetLastError());
  }
  if(buffer.owned) free_base(buffer.buffer);
  return result;
}

//----- (000000014024C360) ----------------------------------------------------
void            AFX_MODULE_STATE__CreateActivationContext(sr_anon_129 *this)
{
  unsigned int int64_result;
  void *cached_lpvalue;
  __int16 loaded_word;
  unsigned int int64_result_2;
  __int64 unused_local;
  _QWORD scratch_buffer[2];
  char *lpValue;
  __int64 unused_written_slot;
  __int64 unused_written_slot_2;
  __int16 unrecovered_register_value;
  _WORD Name[2];
  int unused_written_slot_3;
  _BYTE scratch_buffer_2[528];
  __int64 unused_local_2;

  if ( this )
  {
    if ( (unsigned int)((__int64 (*)(void))SetCurrentDirectoryW)() )
    {
      unused_written_slot_2 = 0;
      scratch_buffer[1] = 261;
      scratch_buffer[0] = (uint64)(uintptr_t)(scratch_buffer_2);
      unused_written_slot = 261;
      lpValue = scratch_buffer_2;
      LOBYTE(unrecovered_register_value) = 0;
      if ( (unsigned int)__acrt_get_current_directory_wide____crt_win32_buffer_internal_dynamic_resizing((__int64)scratch_buffer) )
      {
        if ( (_BYTE)unrecovered_register_value )
          free_base(lpValue);
      }
      else
      {
        cached_lpvalue = lpValue;
        loaded_word = *(_WORD *)lpValue;
        if ( *(_WORD *)lpValue != 92 && loaded_word != 47 || loaded_word != *((_WORD *)lpValue + 1) )
        {
          Name[1] = toupper(*lpValue);
          Name[0] = 61;
          unused_written_slot_3 = 58;
          if ( !(unsigned int)((__int64 (           *)(_WORD *, void *))SetEnvironmentVariableW)(Name, cached_lpvalue) )
          {
            int64_result_2 = ((__int64 (*)(void))GetLastError)();
            crt_errno_map_os_error(int64_result_2);
          }
        }
        if ( (_BYTE)unrecovered_register_value )
          free_base(cached_lpvalue);
      }
    }
    else
    {
      int64_result = ((__int64 (*)(void))GetLastError)();
      crt_errno_map_os_error(int64_result);
    }
  }
  else
  {
    *(_DWORD *)crt_doserrno() = 0;
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
}

// 14026E140: invalid function type 'BOOL (__stdcall *SetCurrentDirectoryW)(LPCWSTR lpPathName)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E148: invalid function type 'BOOL (__stdcall *SetEnvironmentVariableW)(LPCWSTR lpName, LPCWSTR lpValue)' has been ignored

//----- (000000014024C4B4) ----------------------------------------------------
__int64            __acrt_convert_wcs_mbs_cp__char__wchar_t___lambda_7c9dea7b4ca7285d2cdb541a38da6275_____crt_win32_buffer_internal_dynamic_resizing(
        _BYTE *a1,
        __int64 a2)
{
  __int64 malloc_base_result;
  __int64 result;
  int multi_byte_to_wide_char_result;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  __int64 saved_multi_byte_to_wide_char_result;
  unsigned int int64_result;
  __int64 malloc_base_result_2;
  __int64 cached_multi_byte_to_wide_char_result;
  int multi_byte_to_wide_char_result_2;

  if ( !a1 )
  {
    if ( *(_BYTE *)(a2 + 40) )
    {
      free_base(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    goto LABEL_5;
  }
  if ( *a1 )
  {
    multi_byte_to_wide_char_result = crt_multi_byte_to_wide_char();
    saved_multi_byte_to_wide_char_result = multi_byte_to_wide_char_result;
    if ( multi_byte_to_wide_char_result )
    {
      if ( (unsigned __int64)multi_byte_to_wide_char_result > *(_QWORD *)(a2 + 24) )
      {
        if ( *(_BYTE *)(a2 + 40) )
        {
          free_base(*(void **)(a2 + 16));
          *(_BYTE *)(a2 + 40) = 0;
        }
        malloc_base_result_2 = malloc_base();
        *(_QWORD *)(a2 + 16) = malloc_base_result_2;
        cached_multi_byte_to_wide_char_result = 0;
        result = malloc_base_result_2 == 0 ? 0xC : 0;
        if ( !(_DWORD)result )
          cached_multi_byte_to_wide_char_result = saved_multi_byte_to_wide_char_result;
        *(_BYTE *)(a2 + 40) = (_DWORD)result == 0;
        *(_QWORD *)(a2 + 24) = cached_multi_byte_to_wide_char_result;
        if ( (_DWORD)result )
          return result;
      }
      multi_byte_to_wide_char_result_2 = crt_multi_byte_to_wide_char();
      if ( multi_byte_to_wide_char_result_2 )
      {
        *(_QWORD *)(a2 + 32) = multi_byte_to_wide_char_result_2 - 1LL;
        return 0;
      }
    }
    int64_result = ((__int64 (           *)(__int64, __int64))GetLastError)(unrecovered_register_value_2, unrecovered_register_value);
    crt_errno_map_os_error(int64_result);
    return (unsigned int)*errno_sr();
  }
  if ( *(_QWORD *)(a2 + 24) )
    goto LABEL_11;
  if ( *(_BYTE *)(a2 + 40) )
  {
    free_base(*(void **)(a2 + 16));
    *(_BYTE *)(a2 + 40) = 0;
  }
  malloc_base_result = malloc_base();
  *(_QWORD *)(a2 + 16) = malloc_base_result;
  result = malloc_base_result == 0 ? 0xC : 0;
  *(_BYTE *)(a2 + 40) = (_DWORD)result == 0;
  *(_QWORD *)(a2 + 24) = (_DWORD)result == 0;
  if ( !(_DWORD)result )
  {
LABEL_11:
    **(_WORD **)(a2 + 16) = 0;
LABEL_5:
    *(_QWORD *)(a2 + 32) = 0;
    return 0;
  }
  return result;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024C630) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_831()
{
  return crt_multi_byte_to_wide_char();
}

//----- (000000014024C658) ----------------------------------------------------
int         mkdir(     char *Path)
{
  int unused_written_slot;
  _QWORD scratch_buffer[3];
  char unrecovered_register_value;
  _QWORD scratch_buffer_2[2];
  void *Block;
  __int64 unused_written_slot_2;
  __int64 unused_written_slot_3;
  char selection_flag;

  if ( !Path )
    return wmkdir(nullptr);
  scratch_buffer_2[0] = 0;
  scratch_buffer_2[1] = 0;
  Block = nullptr;
  unused_written_slot_2 = 0;
  unused_written_slot_3 = 0;
  selection_flag = 0;
  crt_locale_update((_LocaleUpdate *)scratch_buffer, nullptr);
  if ( *(_DWORD *)(scratch_buffer[1] + 12LL) == 65001 )
  {
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
  }
  else if ( (unsigned int)sub_14024EDA4() )
  {
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
  }
  else if ( unrecovered_register_value )
  {
    *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
  }
  if ( (unsigned int)sub_140238394(Path, (__int64)scratch_buffer_2) )
    unused_written_slot = -1;
  else
    unused_written_slot = wmkdir((     sr_anon_49 *)Block);
  if ( selection_flag )
    free_base(Block);
  return unused_written_slot;
}

//----- (000000014024C754) ----------------------------------------------------
void         __attribute__((noreturn)) abort()
{
  if ( sub_14025BBEC() )
    sub_14025BC64(0x16u);
  if ( (dword_1403022A8 & 2) != 0 )
  {
    if ( (unsigned int)((__int64 (           *)(__int64))IsProcessorFeaturePresent)(23) )
      __fastfail(7u);
    sub_14024CD24(3, 1073741845, 1);
  }
  COleServerDoc__NotifyClosed((COleServerDoc *)3);
  do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
}

// 14024C7A4: control flows out of bounds to 14024C7A9
// 14026E2B0: invalid function type 'BOOL (__stdcall *IsProcessorFeaturePresent)(DWORD ProcessorFeature)' has been ignored

//----- (000000014024C7AC) ----------------------------------------------------
__int64            sub_14024C7AC(_BYTE *a1, __int64 a2, __int64 a3)
{
  int *unused_written_slot;
  unsigned int selection_code;
  _BYTE *buffer_cursor;
  __int64 integer_difference;
  char table_value;

  if ( !a1 || !a2 )
    goto LABEL_5;
  if ( !a3 )
  {
    *a1 = 0;
LABEL_5:
    unused_written_slot = errno_sr();
    selection_code = 22;
LABEL_6:
    *unused_written_slot = selection_code;
    crt_invalid_parameter_noinfo();
    return selection_code;
  }
  buffer_cursor = a1;
  integer_difference = a3 - (_QWORD)a1;
  do
  {
    table_value = buffer_cursor[integer_difference];
    *buffer_cursor++ = table_value;
    if ( !table_value )
      break;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *a1 = 0;
    unused_written_slot = errno_sr();
    selection_code = 34;
    goto LABEL_6;
  }
  return 0;
}

//----- (000000014024C810) ----------------------------------------------------
__int64            strcpy_s_sr(_BYTE *a1, __int64 a2, __int64 a3)
{
  unsigned int selection_code;
  int *unused_written_slot;
  _BYTE *buffer_cursor;
  __int64 integer_difference;
  char table_value;

  selection_code = 0;
  if ( !a1 || !a2 )
    goto LABEL_5;
  if ( !a3 )
  {
    *a1 = 0;
LABEL_5:
    unused_written_slot = errno_sr();
    selection_code = 22;
LABEL_6:
    *unused_written_slot = selection_code;
    crt_invalid_parameter_noinfo();
    return selection_code;
  }
  buffer_cursor = a1;
  integer_difference = a3 - (_QWORD)a1;
  do
  {
    table_value = buffer_cursor[integer_difference];
    *buffer_cursor++ = table_value;
    if ( !table_value )
      break;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *a1 = 0;
    unused_written_slot = errno_sr();
    selection_code = 34;
    goto LABEL_6;
  }
  return selection_code;
}

// 14024C810: invalid function type 'errno_t __cdecl strcpy_s(char *Destination, rsize_t SizeInBytes, const char *Source)' has been ignored

//----- (000000014024C870) ----------------------------------------------------
// attributes: thunk
__int64 j__calloc_base()
{
  return calloc_base();
}

//----- (000000014024C8A0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_834(__int64 a1, __int64 *a2, unsigned int a3, struct __crt_locale_pointers *a4)
{
  __int64 scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = (__int64)a2;
  if ( a2 )
    *a2 = a1;
  return sub_14023B240(a4, scratch_buffer, a3, 1);
}

//----- (000000014024C8D0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_835(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        unsigned int a3,
        struct __crt_locale_pointers *a4)
{
  unsigned __int16 *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023B548(a4, scratch_buffer, a3, 1);
}

//----- (000000014024C900) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_836(char *a1, char *a2, signed int a3, struct __crt_locale_pointers *a4)
{
  char *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BBF0(a4, scratch_buffer, a3, 1u);
}

//----- (000000014024C930) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_837(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        signed int a3,
        struct __crt_locale_pointers *a4)
{
  unsigned __int16 *scratch_buffer[3];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  if ( a2 )
    *(_QWORD *)a2 = (uint64)(uintptr_t)(a1);
  return sub_14023BEE0(a4, scratch_buffer, a3, 1u);
}

//----- (000000014024C960) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_838(char *a1)
{
  char *scratch_buffer[3];

  scratch_buffer[1] = nullptr;
  scratch_buffer[0] = a1;
  return sub_14023BBF0(nullptr, scratch_buffer, 10, 1u);
}

//----- (000000014024C98C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_839(char *a1, struct __crt_locale_pointers *a2)
{
  char *scratch_buffer[3];

  scratch_buffer[1] = nullptr;
  scratch_buffer[0] = a1;
  return sub_14023BBF0(a2, scratch_buffer, 10, 1u);
}

//----- (000000014024C9BC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_840(__int64 a1, struct __crt_locale_pointers *a2)
{
  __int64 scratch_buffer[3];

  scratch_buffer[1] = 0;
  scratch_buffer[0] = a1;
  return sub_14023B240(a2, scratch_buffer, 0xAu, 1);
}

//----- (000000014024C9EC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_841(__int64 a1, struct __crt_locale_pointers *a2)
{
  __int64 scratch_buffer[3];

  scratch_buffer[1] = 0;
  scratch_buffer[0] = a1;
  return sub_14023B240(a2, scratch_buffer, 0xAu, 1);
}

//----- (000000014024CA1C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_842(char *a1, struct __crt_locale_pointers *a2)
{
  char *scratch_buffer[3];

  scratch_buffer[1] = nullptr;
  scratch_buffer[0] = a1;
  return sub_14023BBF0(a2, scratch_buffer, 10, 1u);
}

//----- (000000014024CA4C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_843(unsigned __int16 *a1)
{
  unsigned __int16 *scratch_buffer[3];

  scratch_buffer[1] = nullptr;
  scratch_buffer[0] = a1;
  return sub_14023B548(nullptr, scratch_buffer, 0xAu, 1);
}

//----- (000000014024CA78) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_844(unsigned __int16 *a1)
{
  unsigned __int16 *scratch_buffer[3];

  scratch_buffer[1] = nullptr;
  scratch_buffer[0] = a1;
  return sub_14023BEE0(nullptr, scratch_buffer, 10, 1u);
}

//----- (000000014024CAA4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_845(unsigned __int16 *a1, struct __crt_locale_pointers *a2)
{
  unsigned __int16 *scratch_buffer[3];

  scratch_buffer[1] = nullptr;
  scratch_buffer[0] = a1;
  return sub_14023BEE0(a2, scratch_buffer, 10, 1u);
}

//----- (000000014024CAD4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_846(unsigned __int16 *a1, struct __crt_locale_pointers *a2)
{
  unsigned __int16 *scratch_buffer[3];

  scratch_buffer[1] = nullptr;
  scratch_buffer[0] = a1;
  return sub_14023B548(a2, scratch_buffer, 0xAu, 1);
}

//----- (000000014024CB04) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_847(unsigned __int16 *a1)
{
  unsigned __int16 *scratch_buffer[3];

  scratch_buffer[1] = nullptr;
  scratch_buffer[0] = a1;
  return sub_14023B548(nullptr, scratch_buffer, 0xAu, 1);
}

//----- (000000014024CB30) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_848(unsigned __int16 *a1, struct __crt_locale_pointers *a2)
{
  unsigned __int16 *scratch_buffer[3];

  scratch_buffer[1] = nullptr;
  scratch_buffer[0] = a1;
  return sub_14023B548(a2, scratch_buffer, 0xAu, 1);
}

//----- (000000014024CB60) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_849(unsigned __int16 *a1)
{
  unsigned __int16 *scratch_buffer[3];

  scratch_buffer[1] = nullptr;
  scratch_buffer[0] = a1;
  return sub_14023BEE0(nullptr, scratch_buffer, 10, 1u);
}

//----- (000000014024CB8C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_850(unsigned __int16 *a1, struct __crt_locale_pointers *a2)
{
  unsigned __int16 *scratch_buffer[3];

  scratch_buffer[1] = nullptr;
  scratch_buffer[0] = a1;
  return sub_14023BEE0(a2, scratch_buffer, 10, 1u);
}

//----- (000000014024CBBC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_851(__int64 a1)
{
  __int64 scratch_buffer[3];

  scratch_buffer[1] = 0;
  scratch_buffer[0] = a1;
  return sub_14023B240(nullptr, scratch_buffer, 0xAu, 1);
}

//----- (000000014024CBE8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_852(__int64 a1)
{
  __int64 scratch_buffer[3];

  scratch_buffer[1] = 0;
  scratch_buffer[0] = a1;
  return sub_14023B240(nullptr, scratch_buffer, 0xAu, 1);
}

//----- (000000014024CC14) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64            unknown_libname_853(char *a1)
{
  char *scratch_buffer[3];

  scratch_buffer[1] = nullptr;
  scratch_buffer[0] = a1;
  return sub_14023BBF0(nullptr, scratch_buffer, 10, 1u);
}

//----- (000000014024CC40) ----------------------------------------------------
__int64            wcsncmp_sr(_WORD *a1, _WORD *a2, __int64 a3)
{
  if ( !a3 )
    return 0;
  while ( --a3 && *a1 && *a1 == *a2 )
  {
    ++a1;
    ++a2;
  }
  return (unsigned __int16)*a1 - (unsigned int)(unsigned __int16)*a2;
}

//----- (000000014024CCAC) ----------------------------------------------------
__int64            capture_current_context_0(__m128i *ContextRecord)
{
  __int64 table_value;
  __int64 result;
  unsigned __int64 ImageBase;
  unsigned __int64 callee_output_word;
  __int64 callee_output_word_2;

  ((void (*)(void))RtlCaptureContext)();
  table_value = SR_VEC_LANES(128, ContextRecord[15], i64)[1];
  result = ((__int64 (           *)(__int64, unsigned __int64 *, _QWORD))RtlLookupFunctionEntry)(table_value, &ImageBase, 0);
  if ( result )
    return ((__int64 (           *)(_QWORD, unsigned __int64, __int64, __int64, __m128i *, __int64 *, unsigned __int64 *, _QWORD))RtlVirtualUnwind)(
             0,
             ImageBase,
             table_value,
             result,
             ContextRecord,
             &callee_output_word_2,
             &callee_output_word,
             0);
  return result;
}

// 14026E2E0: invalid function type 'void (__stdcall *RtlCaptureContext)(PCONTEXT ContextRecord)' has been ignored
// 14026E2D8: invalid function type 'PRUNTIME_FUNCTION (__stdcall *RtlLookupFunctionEntry)(ULONG64 ControlPc, PULONG64 ImageBase, PUNWIND_HISTORY_TABLE HistoryTable)' has been ignored
// 14026E2D0: invalid function type 'PEXCEPTION_ROUTINE (__stdcall *RtlVirtualUnwind)(ULONG HandlerType, ULONG64 ImageBase, ULONG64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, PCONTEXT ContextRecord, PVOID *HandlerData, PULONG64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)' has been ignored

//----- (000000014024CD24) ----------------------------------------------------
__int64            sub_14024CD24(int a1, int a2, int a3)
{
  __int64 table_value;
  __int64 int64_result;
  BOOL isdebuggerpresent_result;
  __int64 unused_local;
  unsigned __int64 ImageBase;
  _QWORD ExceptionInfo[2];
  unsigned __int64 callee_output_word;
  __int128 packed_vector;
  _DWORD scratch_buffer[4];
  void *unused_written_slot;
  _QWORD ContextRecord[156];
  void *retaddr;
  __int64 callee_output_word_2;

  if ( a1 != -1 )
    sub_1401FBFB0();
  crt_memset((void *)(uintptr_t)(scratch_buffer), 0, 0x98u);
  crt_memset((void *)(uintptr_t)(ContextRecord), 0, 0x4D0u);
  ExceptionInfo[0] = (uint64)(uintptr_t)(scratch_buffer);
  ExceptionInfo[1] = (uint64)(uintptr_t)(ContextRecord);
  ((void (           *)(_QWORD *))RtlCaptureContext)(ContextRecord);
  table_value = ContextRecord[31];
  int64_result = ((__int64 (           *)(_QWORD, unsigned __int64 *, _QWORD))RtlLookupFunctionEntry)(
         ContextRecord[31],
         &ImageBase,
         0);
  if ( int64_result )
    ((void (           *)(_QWORD, unsigned __int64, __int64, __int64, _QWORD *, __int128 *, unsigned __int64 *, _QWORD))RtlVirtualUnwind)(
      0,
      ImageBase,
      table_value,
      int64_result,
      ContextRecord,
      &packed_vector,
      &callee_output_word,
      0);
  ContextRecord[31] = (uint64)(uintptr_t)(retaddr);
  scratch_buffer[0] = a2;
  ContextRecord[19] = (uint64)(uintptr_t)(&callee_output_word_2);
  unused_written_slot = retaddr;
  scratch_buffer[1] = a3;
  isdebuggerpresent_result = IsDebuggerPresent();
  ((void (           *)(_QWORD))SetUnhandledExceptionFilter)(0);
  if ( !(unsigned int)((__int64 (           *)(_QWORD *))UnhandledExceptionFilter)(ExceptionInfo) && !isdebuggerpresent_result && a1 != -1 )
    sub_1401FBFB0();
  return 0; /* no caller reads the result */
}

// 14026E2E0: invalid function type 'void (__stdcall *RtlCaptureContext)(PCONTEXT ContextRecord)' has been ignored
// 14026E2D8: invalid function type 'PRUNTIME_FUNCTION (__stdcall *RtlLookupFunctionEntry)(ULONG64 ControlPc, PULONG64 ImageBase, PUNWIND_HISTORY_TABLE HistoryTable)' has been ignored
// 14026E2D0: invalid function type 'PEXCEPTION_ROUTINE (__stdcall *RtlVirtualUnwind)(ULONG HandlerType, ULONG64 ImageBase, ULONG64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, PCONTEXT ContextRecord, PVOID *HandlerData, PULONG64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)' has been ignored
// 14026E2C0: invalid function type 'LPTOP_LEVEL_EXCEPTION_FILTER (__stdcall *SetUnhandledExceptionFilter)(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)' has been ignored
// 14026E2C8: invalid function type 'LONG (__stdcall *UnhandledExceptionFilter)(struct _EXCEPTION_POINTERS *ExceptionInfo)' has been ignored

//----- (000000014024CE80) ----------------------------------------------------
void            sub_14024CE80(__int64 a1)
{
  g_144CBF188 = a1;
}

//----- (000000014024CEA0) ----------------------------------------------------
unsigned __int64 sub_14024CEA0()
{
  unsigned __int64 result;

  result = sub_140255BEC();
  if ( result )
    return *(_QWORD *)(result + 952);
  return result;
}

//----- (000000014024CEBC) ----------------------------------------------------
__int64            crt_invalid_parameter(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned __int64 call_result;
  __int64 (           *callback_function)(__int64, __int64, __int64, _QWORD, __int64);
  __int64 (           *callback_function_2)(__int64, __int64, __int64, _QWORD, __int64);

  call_result = sub_140255BEC();
  if ( call_result )
  {
    callback_function = *(__int64 (           **)(__int64, __int64, __int64, _QWORD, __int64))(call_result + 952);
    if ( callback_function )
      return callback_function(a1, a2, a3, a4, a5);
  }
  callback_function_2 = (__int64 (           *)(__int64, __int64, __int64, _QWORD, __int64))__ROR8__(
                                                                              g_144CBF188
                                                                            ^ _security_cookie,
                                                                              _security_cookie & 0x3F);
  if ( !callback_function_2 )
  {
    crt_invoke_watson();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  return callback_function_2(a1, a2, a3, a4, a5);
}

// 14024CF64: control flows out of bounds to 14024CF69

//----- (000000014024CF6C) ----------------------------------------------------
__int64 crt_invalid_parameter_noinfo()
{
  return crt_invalid_parameter(0, 0, 0, 0, 0);
}

//----- (000000014024CF8C) ----------------------------------------------------
void __attribute__((noreturn)) sub_14024CF8C()
{
  crt_invalid_parameter(0, 0, 0, 0, 0);
  crt_invoke_watson();
  do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
}

// 14024CFB5: control flows out of bounds to 14024CFBA

//----- (000000014024CFBC) ----------------------------------------------------
__int64 crt_invoke_watson()
{
  __int64 int64_result;

  if ( (unsigned int)((__int64 (           *)(__int64))IsProcessorFeaturePresent)(23) )
    __fastfail(5u);
  sub_14024CD24(2, -1073740777, 1);
  int64_result = ((__int64 (*)(void))GetCurrentProcess)();
  return ((__int64 (           *)(__int64, __int64))TerminateProcess)(int64_result, 3221226519LL);
}

// 14026E2B0: invalid function type 'BOOL (__stdcall *IsProcessorFeaturePresent)(DWORD ProcessorFeature)' has been ignored
// 14026E318: invalid function type 'HANDLE (__stdcall *GetCurrentProcess)()' has been ignored
// 14026E2B8: invalid function type 'BOOL (__stdcall *TerminateProcess)(HANDLE hProcess, UINT uExitCode)' has been ignored

//----- (000000014024D038) ----------------------------------------------------
__int64            sub_14024D038(__int64 a1)
{
  unsigned __int64 call_result;
  __int64 result;

  call_result = sub_140255A70();
  result = *(_QWORD *)(call_result + 952);
  *(_QWORD *)(call_result + 952) = a1;
  return result;
}

//----- (000000014024D060) ----------------------------------------------------
__int16         dclass(double X)
{
  double Px;

  Px = X;
  return dtest_sr(&Px);
}

//----- (000000014024D07C) ----------------------------------------------------
int         dpcomp(double X, double Y)
{
  int unused_written_slot;
  double Px;
  double cached_y;

  cached_y = Y;
  Px = X;
  unused_written_slot = 2;
  if ( dtest_sr(&Px) == 2 || dtest_sr(&cached_y) == 2 )
    return 0;
  if ( cached_y > Px )
    return 1;
  if ( Px > cached_y )
    return 4;
  return unused_written_slot;
}

//----- (000000014024D0E0) ----------------------------------------------------
__int64            sub_14024D0E0(double a1)
{
  return HIWORD(*(_QWORD *)&a1) & 0x8000LL;
}

//----- (000000014024D104) ----------------------------------------------------
__int64            sub_14024D104(int a1)
{
  __int64 integer_sum;
  unsigned int *running_total;
  __int64 result;

  integer_sum = 0;
  running_total = dword_14028A2C0;
  do
  {
    if ( a1 == *running_total )
      return dword_14028A2C0[2 * integer_sum + 1];
    integer_sum = (unsigned int)(integer_sum + 1);
    running_total += 2;
  }
  while ( (unsigned int)integer_sum < 0x2D );
  if ( (unsigned int)(a1 - 19) <= 0x11 )
    return 13;
  result = 22;
  if ( (unsigned int)(a1 - 188) <= 0xE )
    return 8;
  return result;
}

//----- (000000014024D14C) ----------------------------------------------------
__int64            crt_errno_map_os_error(int a1)
{
  unsigned __int64 call_result;
  int *unused_written_slot;
  unsigned __int64 call_result_2;
  _DWORD *unused_written_slot_2;
  __int64 result;

  call_result = sub_140255BEC();
  if ( call_result )
    unused_written_slot = (int *)(call_result + 36);
  else
    unused_written_slot = (int *)&unk_1403022B0;
  *unused_written_slot = a1;
  call_result_2 = sub_140255BEC();
  unused_written_slot_2 = &unk_1403022AC;
  if ( call_result_2 )
    unused_written_slot_2 = (_DWORD *)(call_result_2 + 32);
  result = sub_14024D104(a1);
  *unused_written_slot_2 = result;
  return result;
}

//----- (000000014024D19C) ----------------------------------------------------
void *crt_doserrno()
{
  unsigned __int64 call_result;

  call_result = sub_140255BEC();
  if ( call_result )
    return (void *)(call_result + 36);
  else
    return &unk_1403022B0;
}

//----- (000000014024D1BC) ----------------------------------------------------
int *        errno_sr()
{
  unsigned __int64 call_result;

  call_result = sub_140255BEC();
  if ( call_result )
    return (int *)(call_result + 32);
  else
    return (int *)&unk_1403022AC;
}

//----- (000000014024D1DC) ----------------------------------------------------
__int64            get_doserrno(_DWORD *a1)
{
  unsigned __int64 call_result;
  _DWORD *state_address;

  if ( a1 )
  {
    call_result = sub_140255BEC();
    if ( call_result )
      state_address = (_DWORD *)(call_result + 36);
    else
      state_address = &unk_1403022B0;
    *a1 = *state_address;
    return 0;
  }
  else
  {
    crt_invalid_parameter_noinfo();
    return 22;
  }
}

// 14024D1DC: invalid function type 'errno_t __cdecl get_doserrno(unsigned int *Value)' has been ignored

//----- (000000014024D218) ----------------------------------------------------
__int64            get_errno(_DWORD *a1)
{
  unsigned __int64 call_result;
  _DWORD *state_address;

  if ( a1 )
  {
    call_result = sub_140255BEC();
    if ( call_result )
      state_address = (_DWORD *)(call_result + 32);
    else
      state_address = &unk_1403022AC;
    *a1 = *state_address;
    return 0;
  }
  else
  {
    crt_invalid_parameter_noinfo();
    return 22;
  }
}

// 14024D218: invalid function type 'errno_t __cdecl get_errno(int *Value)' has been ignored

//----- (000000014024D254) ----------------------------------------------------
__int64            set_doserrno(int a1)
{
  unsigned __int64 call_result;
  _DWORD *unused_written_slot;

  if ( !sub_140255BEC() )
    return 12;
  call_result = sub_140255BEC();
  if ( call_result )
    unused_written_slot = (_DWORD *)(call_result + 36);
  else
    unused_written_slot = &unk_1403022B0;
  *unused_written_slot = a1;
  return 0;
}

// 14024D254: invalid function type 'errno_t __cdecl set_doserrno(unsigned int Value)' has been ignored

//----- (000000014024D290) ----------------------------------------------------
__int64            set_errno(int a1)
{
  unsigned __int64 call_result;
  _DWORD *unused_written_slot;

  if ( !sub_140255BEC() )
    return 12;
  call_result = sub_140255BEC();
  if ( call_result )
    unused_written_slot = (_DWORD *)(call_result + 32);
  else
    unused_written_slot = &unk_1403022AC;
  *unused_written_slot = a1;
  return 0;
}

// 14024D290: invalid function type 'errno_t __cdecl set_errno(int Value)' has been ignored

//----- (000000014024D2CC) ----------------------------------------------------
__int64            errcode(char a1)
{
  if ( (a1 & 0x20) != 0 )
  {
    return 5;
  }
  else if ( (a1 & 8) != 0 )
  {
    return 1;
  }
  else if ( (a1 & 4) != 0 )
  {
    return 2;
  }
  else if ( (a1 & 1) != 0 )
  {
    return 3;
  }
  else
  {
    return (unsigned int)(2 * (a1 & 2));
  }
}

//----- (000000014024D310) ----------------------------------------------------
double            except1(unsigned int a1, int a2, double a3, double a4, __int64 a5)
{
  __int64 input_value;
  char input_value_2;
  int errcode_result;
  __int64 unused_local;
  double input_value_3;
  double input_value_4;
  _DWORD scratch_buffer[16];
  int option_flags;
  __int64 unused_local_2;

  input_value = a5;
  input_value_4 = a3;
  input_value_3 = a4;
  input_value_2 = a1;
  if ( !(unsigned int)handle_exc(a1, &input_value_3, a5) )
  {
    option_flags &= ~1u;
    raise_exc_ex(scratch_buffer, &a5, input_value_2, a2, &input_value_4, &input_value_3, 0);
    input_value = a5;
  }
  errcode_result = errcode(input_value_2);
  if ( sub_1402477C0() && errcode_result )
  {
    return umatherr(errcode_result, a2, a3, 0.0, input_value_3, input_value); /* 0x14024D3BD: its result stays in xmm0 */
  }
  else
  {
    set_errno_from_matherr(errcode_result);
    ctrlfp(input_value, 65472);
  }
  return input_value_3; /* 0x14024D3D8: movsd xmm0, qword ptr [rbp - 0x61] */
}

//----- (000000014024D404) ----------------------------------------------------
double            except2(unsigned int a1, int a2, double a3, double a4, double a5, __int64 a6)
{
  __int64 input_value;
  char input_value_2;
  int errcode_result;
  __int64 unused_local;
  double float_buffer[2];
  _DWORD scratch_buffer[12];
  double unused_written_slot;
  unsigned int masked_bits;
  __int64 unused_local_2;

  input_value = a6;
  float_buffer[0] = a3;
  input_value_2 = a1;
  if ( !(unsigned int)handle_exc(a1, &a5, a6) )
  {
    unused_written_slot = a4;
    masked_bits = masked_bits & 0xFFFFFFE0 | 3;
    raise_exc_ex(scratch_buffer, &a6, input_value_2, a2, float_buffer, &a5, 0);
    input_value = a6;
  }
  errcode_result = errcode(input_value_2);
  if ( sub_1402477C0() && errcode_result )
  {
    return umatherr(errcode_result, a2, a3, a4, a5, input_value); /* 0x14024D4C1: its result stays in xmm0 */
  }
  else
  {
    set_errno_from_matherr(errcode_result);
    ctrlfp(input_value, 65472);
  }
  return a5; /* 0x14024D4DC: movsd xmm0, qword ptr [rbp + 0x77] */
}

//----- (000000014024D540) ----------------------------------------------------
__int64            handle_exc(unsigned int a1, double *a2, __int16 a3)
{
  unsigned int selection_flag;
  int option_flags;
  char input_value;
  __int64 masked_bits;
  double cached_infinity;
  double scaled_value;
  int state_address;
  int integer_difference;
  double saved_decomp_sr_result;
  int selection_flag_2;
  unsigned int remaining_bits;
  __int64 remaining_count;
  unsigned int remaining_bits_2;
  int callee_output_word;
  double decomp_sr_result;

  selection_flag = 0;
  option_flags = a1 & 0x1F;
  input_value = a1;
  if ( (a1 & 8) != 0 && (a3 & 0x80u) != 0 )
  {
    set_statfp(1);
    option_flags &= ~8u;
    goto LABEL_46;
  }
  if ( (a1 & 4) != 0 && (a3 & 0x200) != 0 )
  {
    set_statfp(4);
    option_flags &= ~4u;
    goto LABEL_46;
  }
  if ( (a1 & 1) != 0 && (a3 & 0x400) != 0 )
  {
    set_statfp(8);
    masked_bits = a3 & 0x6000;
    if ( (a3 & 0x6000) != 0 )
    {
      if ( masked_bits != 0x2000 )
      {
        if ( masked_bits != 0x4000 )
        {
          if ( masked_bits != 24576 )
          {
LABEL_24:
            option_flags &= ~1u;
            goto LABEL_46;
          }
          cached_infinity = 1.797693134862316e308;
          if ( *a2 <= 0.0 )
            goto LABEL_22;
LABEL_23:
          *a2 = cached_infinity;
          goto LABEL_24;
        }
        if ( *a2 <= 0.0 )
        {
          cached_infinity = 1.797693134862316e308;
LABEL_22:
          cached_infinity = -cached_infinity;
          goto LABEL_23;
        }
LABEL_20:
        cached_infinity = INFINITY;
        goto LABEL_23;
      }
      if ( *a2 > 0.0 )
      {
        cached_infinity = 1.797693134862316e308;
        goto LABEL_23;
      }
    }
    else if ( *a2 > 0.0 )
    {
      goto LABEL_20;
    }
    cached_infinity = INFINITY;
    goto LABEL_22;
  }
  if ( (a1 & 2) != 0 && (a3 & 0x800) != 0 )
  {
    scaled_value = *a2;
    state_address = (a1 >> 4) & 1;
    if ( *a2 == 0.0 )
    {
      state_address = 1;
    }
    else
    {
      decomp_sr_result = decomp_sr(scaled_value, &callee_output_word); /* 0x14024D6B1: movsd qword ptr [rsp + 0x88], xmm0 */
      integer_difference = callee_output_word - 1536;
      if ( callee_output_word - 1536 >= -1074 )
      {
        selection_flag_2 = 0;
        LOBYTE(selection_flag_2) = scaled_value < 0.0;
        HIWORD(decomp_sr_result) = BYTE6(decomp_sr_result) & 0xF | 0x10;
        if ( integer_difference < -1021 )
        {
          remaining_bits = LODWORD(decomp_sr_result);
          remaining_count = (unsigned int)(-1021 - integer_difference);
          remaining_bits_2 = HIDWORD(decomp_sr_result);
          do
          {
            if ( (remaining_bits & 1) != 0 && !state_address )
              state_address = 1;
            remaining_bits >>= 1;
            LODWORD(decomp_sr_result) = remaining_bits;
            if ( (remaining_bits_2 & 1) != 0 )
            {
              remaining_bits |= 0x80000000;
              LODWORD(decomp_sr_result) = remaining_bits;
            }
            remaining_bits_2 >>= 1;
            --remaining_count;
          }
          while ( remaining_count );
          HIDWORD(decomp_sr_result) = remaining_bits_2;
        }
        saved_decomp_sr_result = decomp_sr_result;
        if ( selection_flag_2 )
          saved_decomp_sr_result = -decomp_sr_result;
      }
      else
      {
        saved_decomp_sr_result = decomp_sr_result * 0.0; /* 0x14024D6C2: mulsd xmm0, xmm6 */
        state_address = 1;
      }
      *a2 = saved_decomp_sr_result;
    }
    if ( state_address )
      set_statfp(16);
    option_flags &= ~2u;
  }
LABEL_46:
  if ( (input_value & 0x10) != 0 && (a3 & 0x1000) != 0 )
  {
    set_statfp(32);
    option_flags &= ~0x10u;
  }
  LOBYTE(selection_flag) = option_flags == 0;
  return selection_flag;
}

//----- (000000014024D7A8) ----------------------------------------------------
double            handle_qnan2_sr(double a1, double a2)
{
  return a1 + a2;
}

//----- (000000014024D7B0) ----------------------------------------------------
__int64            raise_exc(_DWORD *a1, _QWORD *a2, char a3, __int16 a4, _DWORD *a5, _DWORD *a6)
{
  return raise_exc_ex(a1, a2, a3, a4, a5, a6, 0);
}

//----- (000000014024D7D8) ----------------------------------------------------
__int64            raise_exc_ex(_DWORD *a1, _QWORD *a2, char a3, __int16 a4, _DWORD *a5, _DWORD *a6, int a7)
{
  unsigned int integer_difference;
  char statfp_result;
  __int64 masked_bits;
  _DWORD *saved_call_status;
  _DWORD *cached_arguments;
  int table_value;
  __int64 result;
  _DWORD *Arguments;

  Arguments = a1;
  integer_difference = -1073741811;
  a1[1] = 0;
  Arguments[2] = 0;
  Arguments[3] = 0;
  if ( (a3 & 0x10) != 0 )
  {
    integer_difference = -1073741681;
    Arguments[1] |= 1u;
  }
  if ( (a3 & 2) != 0 )
  {
    integer_difference = -1073741677;
    Arguments[1] |= 2u;
  }
  if ( (a3 & 1) != 0 )
  {
    integer_difference = -1073741679;
    Arguments[1] |= 4u;
  }
  if ( (a3 & 4) != 0 )
  {
    integer_difference = -1073741682;
    Arguments[1] |= 8u;
  }
  if ( (a3 & 8) != 0 )
  {
    integer_difference = -1073741680;
    Arguments[1] |= 0x10u;
  }
  Arguments[2] ^= (Arguments[2] ^ ~(16 * (*a2 >> 7))) & 0x10;
  Arguments[2] ^= (Arguments[2] ^ ~(8 * (*a2 >> 9))) & 8;
  Arguments[2] ^= (Arguments[2] ^ ~(4 * (*a2 >> 10))) & 4;
  Arguments[2] ^= (Arguments[2] ^ ~(2 * (*a2 >> 11))) & 2;
  Arguments[2] ^= (Arguments[2] ^ ~(*(_DWORD *)a2 >> 12)) & 1;
  statfp_result = statfp();
  if ( (statfp_result & 1) != 0 )
    Arguments[3] |= 0x10u;
  if ( (statfp_result & 4) != 0 )
    Arguments[3] |= 8u;
  if ( (statfp_result & 8) != 0 )
    Arguments[3] |= 4u;
  if ( (statfp_result & 0x10) != 0 )
    Arguments[3] |= 2u;
  if ( (statfp_result & 0x20) != 0 )
    Arguments[3] |= 1u;
  masked_bits = *(_DWORD *)a2 & 0x6000LL;
  if ( masked_bits )
  {
    switch ( masked_bits )
    {
      case 8192LL:
        *Arguments &= ~2u;
        *Arguments |= 1u;
        break;
      case 16384LL:
        *Arguments &= ~1u;
        *Arguments |= 2u;
        break;
      case 24576LL:
        *Arguments |= 3u;
        break;
    }
  }
  else
  {
    *Arguments &= 0xFFFFFFFC;
  }
  *Arguments &= 0xFFFE001F;
  *Arguments |= 32 * (a4 & 0xFFF);
  saved_call_status = a6;
  Arguments[8] |= 1u;
  if ( a7 )
  {
    Arguments[8] &= 0xFFFFFFE1;
    Arguments[4] = *a5;
    Arguments[24] |= 1u;
    Arguments[24] &= 0xFFFFFFE1;
    Arguments[20] = *saved_call_status;
  }
  else
  {
    Arguments[8] = Arguments[8] & 0xFFFFFFE1 | 2;
    *((_QWORD *)Arguments + 2) = *(_QWORD *)a5;
    Arguments[24] |= 1u;
    Arguments[24] = Arguments[24] & 0xFFFFFFE1 | 2;
    *((_QWORD *)Arguments + 10) = *(_QWORD *)saved_call_status;
  }
  clrfp();
  ((void (           *)(_QWORD, _QWORD, __int64, _DWORD **))RaiseException)(integer_difference, 0, 1, &Arguments);
  cached_arguments = Arguments;
  table_value = Arguments[2];
  if ( (table_value & 0x10) != 0 )
  {
    *a2 &= ~0x80uLL;
    table_value = cached_arguments[2];
  }
  if ( (table_value & 8) != 0 )
  {
    *a2 &= ~0x200uLL;
    table_value = cached_arguments[2];
  }
  if ( (table_value & 4) != 0 )
  {
    *a2 &= ~0x400uLL;
    table_value = cached_arguments[2];
  }
  if ( (table_value & 2) != 0 )
  {
    *a2 &= ~0x800uLL;
    table_value = cached_arguments[2];
  }
  if ( (table_value & 1) != 0 )
    *a2 &= ~0x1000uLL;
  if ( (*cached_arguments & 3) != 0 )
  {
    switch ( *cached_arguments & 3 )
    {
      case 1:
        *a2 &= ~0x4000uLL;
        *a2 |= 0x2000uLL;
        break;
      case 2:
        *a2 &= ~0x2000uLL;
        *a2 |= 0x4000uLL;
        break;
      case 3:
        *a2 |= 0x6000uLL;
        break;
    }
  }
  else
  {
    *a2 &= 0xFFFFFFFFFFFF9FFFuLL;
  }
  if ( a7 )
  {
    result = (unsigned int)cached_arguments[20];
    *saved_call_status = result;
  }
  else
  {
    result = *((_QWORD *)cached_arguments + 10);
    *(_QWORD *)saved_call_status = result;
  }
  return result;
}

// 14026E200: invalid function type 'void (__stdcall *RaiseException)(DWORD dwExceptionCode, DWORD dwExceptionFlags, DWORD nNumberOfArguments, const ULONG_PTR *lpArguments)' has been ignored

//----- (000000014024DAE8) ----------------------------------------------------
__int64            raise_excf(_DWORD *a1, _QWORD *a2, char a3, __int16 a4, _DWORD *a5, _DWORD *a6)
{
  return raise_exc_ex(a1, a2, a3, a4, a5, a6, 1);
}

//----- (000000014024DB14) ----------------------------------------------------
int *           set_errno_from_matherr(int a1)
{
  int *result;

  if ( a1 == 1 )
  {
    result = errno_sr();
    *result = 33;
  }
  else
  {
    result = (int *)(unsigned int)(a1 - 2);
    if ( (unsigned int)result <= 1 )
    {
      result = errno_sr();
      *result = 34;
    }
  }
  return result;
}

//----- (000000014024DB44) ----------------------------------------------------
double            umatherr(int a1, int a2, double a3, double a4, double a5, __int64 a6)
{
  _DWORD *record_byte_offset;
  int iteration_count;
  __int64 masked_bits;
  int input_value;
  __int64 unused_written_slot;
  double unused_written_slot_2;
  double unused_written_slot_3;
  double unused_written_slot_4;

  record_byte_offset = &unk_14028A430;
  iteration_count = 0;
  while ( *record_byte_offset != a2 )
  {
    ++iteration_count;
    record_byte_offset += 4;
    if ( (__int64)record_byte_offset >= (__int64)&dword_14028A600 )
    {
      masked_bits = 0;
      goto LABEL_6;
    }
  }
  masked_bits = *((_QWORD *)&unk_14028A430 + 2 * iteration_count + 1);
LABEL_6:
  unused_written_slot = masked_bits;
  if ( masked_bits )
  {
    unused_written_slot_2 = a3;
    unused_written_slot_3 = a4;
    unused_written_slot_4 = a5;
    input_value = a1;
    ctrlfp(a6, 65472);
    if ( !(unsigned int)sub_1402477E8((__int64)&input_value) )
      set_errno_from_matherr(a1);
    return unused_written_slot_4;
  }
  else
  {
    ctrlfp(a6, 65472);
    set_errno_from_matherr(a1);
    return a5;
  }
}

//----- (000000014024DC68) ----------------------------------------------------
double            decomp_sr(double a1, int *a2)
{
  /* The result in xmm0 is the argument with its exponent field replaced by 0x3FE (a value in
     [0.5, 1)); Hex-Rays typed the function void and dropped it. Written out from 0x14024DC68. */
  int remaining_count;
  unsigned int saved_option_flags;
  unsigned int option_flags;
  int comparison_result;
  unsigned __int64 option_flags_2;

  option_flags_2 = *(unsigned __int64 *)&a1;
  if ( a1 == 0.0 )
  {
    *a2 = 0;
    return 0.0; /* 0x14024DC71: xorps xmm0, xmm0 */
  }
  if ( ((option_flags_2 >> 48) & 0x7FF0) == 0 && ((saved_option_flags = (unsigned int)option_flags_2, ((option_flags_2 >> 32) & 0xFFFFF) != 0) || (unsigned int)option_flags_2) )
  {
    comparison_result = 0.0 > a1; /* 0x14024DCC0: comisd xmm0, xmm1; seta r9b */
    remaining_count = -1021;
    if ( ((option_flags_2 >> 48) & 0x10) == 0 )
    {
      option_flags = (unsigned int)(option_flags_2 >> 32);
      do
      {
        option_flags *= 2;
        if ( (int)saved_option_flags < 0 )
          option_flags |= 1u;
        saved_option_flags *= 2;
        --remaining_count;
      }
      while ( ((option_flags >> 16) & 0x10) == 0 );
      option_flags_2 = ((unsigned __int64)option_flags << 32) | saved_option_flags; /* 0x14024DCD4/0x14024DCEE */
    }
    option_flags_2 &= 0xFFEFFFFFFFFFFFFFuLL; /* 0x14024DCFC: and ax, 0xffef */
    if ( comparison_result )
      option_flags_2 |= 0x8000000000000000uLL;
  }
  else
  {
    remaining_count = (int)((option_flags_2 >> 52) & 0x7FF) - 1022;
  }
  /* 0x14024DD30 / 0x14024DD76: and ax, 0xbfef; or ax, 0x3fe0 on the top word */
  option_flags_2 = (option_flags_2 & 0xBFEFFFFFFFFFFFFFuLL) | 0x3FE0000000000000uLL;
  *a2 = remaining_count;
  return *(double *)&option_flags_2; /* 0x14024DD46 / 0x14024DD8C: movsd xmm0, [rsp+..] */
}

//----- (000000014024DDE8) ----------------------------------------------------
double            set_exp_sr(double a1, __int16 a2)
{
  double input_value;

  input_value = a1;
  HIWORD(input_value) = (16 * (a2 + 1022)) | HIWORD(a1) & 0x800F;
  return input_value;
}

//----- (000000014024DE20) ----------------------------------------------------
__int64            sptype_sr(double a1)
{
  if ( HIDWORD(a1) == 2146435072 && !LODWORD(a1) )
    return 1;
  if ( HIDWORD(a1) == -1048576 && !LODWORD(a1) )
    return 2;
  if ( (HIWORD(a1) & 0x7FF8) == 0x7FF8 )
    return 3;
  if ( (HIWORD(a1) & 0x7FF8) == 0x7FF0 && ((HIDWORD(a1) & 0x7FFFF) != 0 || LODWORD(a1)) )
    return 4;
  return 0;
}

//----- (000000014024DE94) ----------------------------------------------------
__int64 clrfp()
{
  unsigned int unused_written_slot;

  unused_written_slot = get_fpsr() & 0x3F;
  fclrf_sr();
  return unused_written_slot;
}

//----- (000000014024DEB4) ----------------------------------------------------
__int64            ctrlfp(int a1, int a2)
{
  unsigned int fpsr;
  unsigned int masked_bits;

  fpsr = get_fpsr();
  masked_bits = a2 & a1 | fpsr & (~(_WORD)a2 | 0xFFFF807F);
  if ( byte_1403022B4 && (masked_bits & 0x40) != 0 )
    set_fpsr_sr(masked_bits);
  else
    set_fpsr_sr(masked_bits & 0xFFFFFFBF);
  return fpsr;
}

//----- (000000014024DF30) ----------------------------------------------------
void            set_statfp(char a1)
{
  int fpsr;

  fpsr = get_fpsr();
  set_fpsr_sr(a1 & 0x3F | fpsr);
}

//----- (000000014024DF50) ----------------------------------------------------
__int64 statfp()
{
  return get_fpsr() & 0x3F;
}

//----- (000000014024DF64) ----------------------------------------------------
double         copysign(double Number, double Sign)
{
  if ( (__int64)(*(_QWORD *)&Number ^ *(_QWORD *)&Sign) < 0 )
    *(_QWORD *)&Number ^= 0x8000000000000000uLL;
  return Number;
}

//----- (000000014024DF98) ----------------------------------------------------
__int64            calloc_base()
{
  unsigned __int64 unrecovered_register_value;
  unsigned __int64 unrecovered_register_value_2;
  __int64 scaled_index;
  __int64 result;

  if ( unrecovered_register_value_2 && 0xFFFFFFFFFFFFFFE0uLL / unrecovered_register_value_2 < unrecovered_register_value )
  {
LABEL_10:
    *errno_sr() = 12;
    return 0;
  }
  else
  {
    scaled_index = unrecovered_register_value * unrecovered_register_value_2;
    if ( !(unrecovered_register_value * unrecovered_register_value_2) )
      scaled_index = 1;
    while ( 1 )
    {
      result = ((__int64 (           *)(_QWORD, __int64, __int64))HeapAlloc)(
                 g_144CBFA48,
                 8,
                 scaled_index);
      if ( result )
        break;
      if ( !(unsigned int)sub_14024A06C() || !(unsigned int)callnewh(scaled_index) )
        goto LABEL_10;
    }
  }
  return result;
}

// 14026E130: invalid function type 'LPVOID (__stdcall *HeapAlloc)(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes)' has been ignored

//----- (000000014024E018) ----------------------------------------------------
void         free_base(void *Block)
{
  int *unused_written_slot;
  int int64_result;

  if ( Block )
  {
    if ( !(unsigned int)((__int64 (           *)(_QWORD, _QWORD, void *))HeapFree)(
                          g_144CBFA48,
                          0,
                          Block) )
    {
      unused_written_slot = errno_sr();
      int64_result = ((__int64 (*)(void))GetLastError)();
      *unused_written_slot = sub_14024D104(int64_result);
    }
  }
}

// 14026E128: invalid function type 'BOOL (__stdcall *HeapFree)(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024E058) ----------------------------------------------------
__int64            _lambda_795c6bd18aed400428efeb9a5f0e1479____lambda_invoker_cdecl_(__int64 a1)
{
  return ((__int64 (           *)(__int64, _QWORD, _QWORD))__ROR8__(
                                                             g_144CBF340 ^ _security_cookie,
                                                             _security_cookie & 0x3F))(
           a1,
           0,
           0);
}

//----- (000000014024E088) ----------------------------------------------------
__int64            sub_14024E088(__int64 a1, unsigned int *a2, _QWORD **a3, unsigned int *a4)
{
  crt_lock(*a2);
  g_144CBF340 = _security_cookie ^ __ROR8__(**a3, 64 - (_security_cookie & 0x3Fu));
  LODWORD(a3) = ((__int64 (           *)(__int64 (           *)(__int64), __int64))EnumSystemLocalesW)(
                  _lambda_795c6bd18aed400428efeb9a5f0e1479____lambda_invoker_cdecl_,
                  1);
  g_144CBF340 = _security_cookie;
  crt_unlock(*a4);
  return (unsigned int)a3;
}

// 14026E0E8: invalid function type 'BOOL (__stdcall *EnumSystemLocalesW)(LOCALE_ENUMPROCW lpLocaleEnumProc, DWORD dwFlags)' has been ignored

//----- (000000014024E104) ----------------------------------------------------
__int64            sub_14024E104(unsigned int a1, _QWORD **a2)
{
  __int64 callee_output_word;
  unsigned int input_value;
  unsigned int input_value_2;

  input_value = a1;
  input_value_2 = a1;
  return sub_14024E088((__int64)&callee_output_word, &input_value_2, a2, &input_value);
}

//----- (000000014024E1AC) ----------------------------------------------------
__int64            _lambda_6c3dac0a4f3f9cefca9bb494422f9b77___operator_call(_QWORD **a1)
{
  __int64 result;

  g_144CBF340 = _security_cookie ^ __ROR8__(**a1, 64 - (_security_cookie & 0x3Fu));
  result = ((__int64 (           *)(__int64 (           *)(__int64), __int64))EnumSystemLocalesW)(
             _lambda_795c6bd18aed400428efeb9a5f0e1479____lambda_invoker_cdecl_,
             1);
  g_144CBF340 = _security_cookie;
  return result;
}

// 14026E0E8: invalid function type 'BOOL (__stdcall *EnumSystemLocalesW)(LOCALE_ENUMPROCW lpLocaleEnumProc, DWORD dwFlags)' has been ignored

//----- (000000014024E228) ----------------------------------------------------
__int64            enum_system_locales_ex_nolock(__int64 a1)
{
  __int64 result;

  g_144CBF340 = _security_cookie ^ __ROR8__(a1, 64 - (_security_cookie & 0x3Fu));
  result = ((__int64 (           *)(__int64 (           *)(__int64), __int64))EnumSystemLocalesW)(
             _lambda_795c6bd18aed400428efeb9a5f0e1479____lambda_invoker_cdecl_,
             1);
  g_144CBF340 = _security_cookie;
  return result;
}

// 14026E0E8: invalid function type 'BOOL (__stdcall *EnumSystemLocalesW)(LOCALE_ENUMPROCW lpLocaleEnumProc, DWORD dwFlags)' has been ignored

//----- (000000014024E6BC) ----------------------------------------------------
__int64            try_get_first_available_module(unsigned int *a1, unsigned int *a2)
{
  unsigned int *buffer_cursor;
  __int64 loaded_word;
  __int64 int64_result;
  __int16 *table_value;

  buffer_cursor = a1;
  if ( a1 == a2 )
    return 0;
  while ( 1 )
  {
    loaded_word = *buffer_cursor;
    int64_result = *(_QWORD *)&dword_140404A6C[2 * loaded_word + 19065289];
    if ( !int64_result )
      break;
    if ( int64_result != -1 )
      return int64_result;
LABEL_16:
    if ( ++buffer_cursor == a2 )
      return 0;
  }
  table_value = off_14028A6F0[loaded_word];
  int64_result = ((__int64 (           *)(__int16 *, _QWORD, __int64))LoadLibraryExW)(table_value, 0, 2048);
  if ( !int64_result )
  {
    if ( (unsigned int)((__int64 (*)(void))GetLastError)() != 87
      || !(unsigned int)wcsncmp_sr(table_value, L"api-ms-", 7)
      || !(unsigned int)wcsncmp_sr(table_value, L"ext-ms-", 7) )
    {
      int64_result = 0;
    }
    else
    {
      int64_result = ((__int64 (           *)(__int16 *, _QWORD, _QWORD))LoadLibraryExW)(table_value, 0, 0);
    }
  }
  if ( !int64_result )
  {
    _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * loaded_word + 19065289], -1);
    goto LABEL_16;
  }
  if ( _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * loaded_word + 19065289], int64_result) )
    ((void (           *)(__int64))FreeLibrary)(int64_result);
  return int64_result;
}

// 14026E210: invalid function type 'HMODULE (__stdcall *LoadLibraryExW)(LPCWSTR lpLibFileName, HANDLE hFile, DWORD dwFlags)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored
// 14024E7A6: conditional instruction was optimized away because rbx.8!=0

//----- (000000014024E7D8) ----------------------------------------------------
__int64            try_get_function(unsigned int a1, __int64 a2, unsigned int *a3, unsigned int *a4)
{
  __int64 input_value;
  unsigned int *buffer_cursor;
  __int64 cached_security_cookie;
  __int64 ror8_result;
  __int64 result;
  __int64 loaded_word;
  __int64 int64_result;
  __int16 *table_value;

  input_value = a1;
  buffer_cursor = a3;
  cached_security_cookie = _security_cookie;
  ror8_result = __ROR8__(*(_QWORD *)&dword_140404A6C[2 * a1 + 19065329] ^ _security_cookie, _security_cookie & 0x3F);
  if ( ror8_result == -1 )
    return 0;
  if ( ror8_result )
    return ror8_result;
  if ( a3 == a4 )
  {
LABEL_21:
    int64_result = 0;
    goto LABEL_22;
  }
  while ( 1 )
  {
    loaded_word = *buffer_cursor;
    int64_result = *(_QWORD *)&dword_140404A6C[2 * loaded_word + 19065289];
    if ( !int64_result )
      break;
    if ( int64_result != -1 )
      goto LABEL_25;
LABEL_19:
    if ( ++buffer_cursor == a4 )
    {
      cached_security_cookie = _security_cookie;
      goto LABEL_21;
    }
  }
  table_value = off_14028A6F0[loaded_word];
  int64_result = ((__int64 (           *)(__int16 *, _QWORD, __int64))LoadLibraryExW)(table_value, 0, 2048);
  if ( !int64_result )
  {
    if ( (unsigned int)((__int64 (*)(void))GetLastError)() != 87
      || !(unsigned int)wcsncmp_sr(table_value, L"api-ms-", 7)
      || !(unsigned int)wcsncmp_sr(table_value, L"ext-ms-", 7) )
    {
      int64_result = 0;
    }
    else
    {
      int64_result = ((__int64 (           *)(__int16 *, _QWORD, _QWORD))LoadLibraryExW)(table_value, 0, 0);
    }
  }
  if ( !int64_result )
  {
    _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * loaded_word + 19065289], -1);
    goto LABEL_19;
  }
  if ( _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * loaded_word + 19065289], int64_result) )
    ((void (           *)(__int64))FreeLibrary)(int64_result);
LABEL_25:
  cached_security_cookie = _security_cookie;
LABEL_22:
  if ( int64_result )
  {
    result = ((__int64 (           *)(__int64, __int64))GetProcAddress)(int64_result, a2);
    if ( result )
    {
      _InterlockedExchange64(
        (volatile __int64 *)&dword_140404A6C[2 * input_value + 19065329],
        _security_cookie ^ __ROR8__(result, 64 - (_security_cookie & 0x3Fu)));
      return result;
    }
    cached_security_cookie = _security_cookie;
  }
  _InterlockedExchange64(
    (volatile __int64 *)&dword_140404A6C[2 * input_value + 19065329],
    cached_security_cookie ^ __ROR8__(-1, 64 - ((unsigned __int8)cached_security_cookie & 0x3Fu)));
  return 0;
}

// 14026E210: invalid function type 'HMODULE (__stdcall *LoadLibraryExW)(LPCWSTR lpLibFileName, HANDLE hFile, DWORD dwFlags)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored
// 14026E300: invalid function type 'FARPROC (__stdcall *GetProcAddress)(HMODULE hModule, LPCSTR lpProcName)' has been ignored
// 14024E90D: conditional instruction was optimized away because rbx.8!=0

//----- (000000014024E9B0) ----------------------------------------------------
__int64            try_get_module(unsigned int a1)
{
  __int64 input_value;
  __int64 result;
  __int16 *table_value;
  __int64 int64_result;

  input_value = a1;
  result = *(_QWORD *)&dword_140404A6C[2 * a1 + 19065289];
  if ( result )
  {
    if ( result == -1 )
      return 0;
  }
  else
  {
    table_value = off_14028A6F0[a1];
    int64_result = ((__int64 (           *)(__int16 *, _QWORD, __int64))LoadLibraryExW)(table_value, 0, 2048);
    if ( !int64_result )
    {
      if ( (unsigned int)((__int64 (*)(void))GetLastError)() != 87
        || !(unsigned int)wcsncmp_sr(table_value, L"api-ms-", 7)
        || !(unsigned int)wcsncmp_sr(table_value, L"ext-ms-", 7) )
      {
        int64_result = 0;
      }
      else
      {
        int64_result = ((__int64 (           *)(__int16 *, _QWORD, _QWORD))LoadLibraryExW)(table_value, 0, 0);
      }
    }
    if ( int64_result )
    {
      if ( _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * input_value + 19065289], int64_result) )
        ((void (           *)(__int64))FreeLibrary)(int64_result);
      return int64_result;
    }
    else
    {
      _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * input_value + 19065289], -1);
      return 0;
    }
  }
  return result;
}

// 14026E210: invalid function type 'HMODULE (__stdcall *LoadLibraryExW)(LPCWSTR lpLibFileName, HANDLE hFile, DWORD dwFlags)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored

//----- (000000014024EAB0) ----------------------------------------------------
__int64            try_get_proc_address_from_first_available_module(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int *buffer_cursor;
  __int64 loaded_word;
  __int64 int64_result;
  __int16 *table_value;

  buffer_cursor = a2;
  if ( a2 == a3 )
    return 0;
  while ( 1 )
  {
    loaded_word = *buffer_cursor;
    int64_result = *(_QWORD *)&dword_140404A6C[2 * loaded_word + 19065289];
    if ( !int64_result )
      break;
    if ( int64_result != -1 )
      return ((__int64 (           *)(__int64, __int64))GetProcAddress)(int64_result, a1);
LABEL_16:
    if ( ++buffer_cursor == a3 )
      return 0;
  }
  table_value = off_14028A6F0[loaded_word];
  int64_result = ((__int64 (           *)(__int16 *, _QWORD, __int64))LoadLibraryExW)(table_value, 0, 2048);
  if ( !int64_result )
  {
    if ( (unsigned int)((__int64 (*)(void))GetLastError)() != 87
      || !(unsigned int)wcsncmp_sr(table_value, L"api-ms-", 7)
      || !(unsigned int)wcsncmp_sr(table_value, L"ext-ms-", 7) )
    {
      int64_result = 0;
    }
    else
    {
      int64_result = ((__int64 (           *)(__int16 *, _QWORD, _QWORD))LoadLibraryExW)(table_value, 0, 0);
    }
  }
  if ( !int64_result )
  {
    _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * loaded_word + 19065289], -1);
    goto LABEL_16;
  }
  if ( _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * loaded_word + 19065289], int64_result) )
    ((void (           *)(__int64))FreeLibrary)(int64_result);
  return ((__int64 (           *)(__int64, __int64))GetProcAddress)(int64_result, a1);
}

// 14026E210: invalid function type 'HMODULE (__stdcall *LoadLibraryExW)(LPCWSTR lpLibFileName, HANDLE hFile, DWORD dwFlags)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored
// 14026E300: invalid function type 'FARPROC (__stdcall *GetProcAddress)(HMODULE hModule, LPCSTR lpProcName)' has been ignored
// 14024EBA2: conditional instruction was optimized away because rbx.8!=0

//----- (000000014024EBE8) ----------------------------------------------------
__int64            sub_14024EBE8(_WORD *a1)
{
  __int64 result;

  result = ((__int64 (           *)(_WORD *, _QWORD, __int64))LoadLibraryExW)(a1, 0, 2048);
  if ( !result )
  {
    if ( (unsigned int)((__int64 (*)(void))GetLastError)() != 87
      || !(unsigned int)wcsncmp_sr(a1, L"api-ms-", 7)
      || !(unsigned int)wcsncmp_sr(a1, L"ext-ms-", 7) )
    {
      return 0;
    }
    else
    {
      return ((__int64 (           *)(_WORD *, _QWORD, _QWORD))LoadLibraryExW)(a1, 0, 0);
    }
  }
  return result;
}

// 14026E210: invalid function type 'HMODULE (__stdcall *LoadLibraryExW)(LPCWSTR lpLibFileName, HANDLE hFile, DWORD dwFlags)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014024EC64) ----------------------------------------------------
__int64            sub_14024EC64(__int64 a1)
{
  static unsigned int sr_api_modules_24ec64_0[] = {18};
  __int64 (           *function)(__int64, __int64);

  function = (__int64 (           *)(__int64, __int64))try_get_function(
                                                         0x1Cu,
                                                         (__int64)"AppPolicyGetProcessTerminationMethod", sr_api_modules_24ec64_0, sr_api_modules_24ec64_0 + 1);
  if ( function )
    return function(-6, a1);
  else
    return 3221226021LL;
}

//----- (000000014024ECB4) ----------------------------------------------------
__int64            sub_14024ECB4(__int64 a1)
{
  static unsigned int sr_api_modules_24ecb4_0[] = {18};
  __int64 (           *function)(__int64, __int64);

  function = (__int64 (           *)(__int64, __int64))try_get_function(
                                                         0x1Eu,
                                                         (__int64)"AppPolicyGetShowDeveloperDiagnostic", sr_api_modules_24ecb4_0, sr_api_modules_24ecb4_0 + 1);
  if ( function )
    return function(-6, a1);
  else
    return 3221226021LL;
}

//----- (000000014024ED04) ----------------------------------------------------
__int64            sub_14024ED04(__int64 a1)
{
  static unsigned int sr_api_modules_24ed04_0[] = {18};
  __int64 (           *function)(__int64, __int64);

  function = (__int64 (           *)(__int64, __int64))try_get_function(
                                                         0x1Du,
                                                         (__int64)"AppPolicyGetThreadInitializationType", sr_api_modules_24ed04_0, sr_api_modules_24ed04_0 + 1);
  if ( function )
    return function(-6, a1);
  else
    return 3221226021LL;
}

//----- (000000014024ED54) ----------------------------------------------------
__int64            sub_14024ED54(__int64 a1)
{
  static unsigned int sr_api_modules_24ed54_0[] = {18};
  __int64 (           *function)(__int64, __int64);

  function = (__int64 (           *)(__int64, __int64))try_get_function(
                                                         0x1Fu,
                                                         (__int64)"AppPolicyGetWindowingModel", sr_api_modules_24ed54_0, sr_api_modules_24ed54_0 + 1);
  if ( function )
    return function(-6, a1);
  else
    return 3221226021LL;
}

//----- (000000014024EDA4) ----------------------------------------------------
__int64 sub_14024EDA4()
{
  static unsigned int sr_api_modules_24eda4_0[] = {16};
  __int64 (*function)(void);

  function = (__int64 (*)(void))try_get_function(0, (__int64)"AreFileApisANSI", sr_api_modules_24eda4_0, sr_api_modules_24eda4_0 + 1);
  if ( function )
    return function();
  else
    return 1;
}

//----- (000000014024EDE0) ----------------------------------------------------
__int64            sub_14024EDE0(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  static unsigned int sr_api_modules_24ede0_0[] = {6,16};
  __int64 (           *function)(__int64, _QWORD, __int64, _QWORD, __int64, int, __int64, __int64, __int64);
  unsigned int call_result;

  function = (__int64 (           *)(__int64, _QWORD, __int64, _QWORD, __int64, int, __int64, __int64, __int64))try_get_function(1u, (__int64)"CompareStringEx", sr_api_modules_24ede0_0, sr_api_modules_24ede0_0 + 2);
  if ( function )
    return function(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  call_result = sub_14024F5AC(a1, 0);
  return ((__int64 (           *)(_QWORD, _QWORD, __int64, _QWORD, __int64, int))CompareStringW)(
           call_result,
           a2,
           a3,
           a4,
           a5,
           a6);
}

// 14026E110: invalid function type 'int (__stdcall *CompareStringW)(LCID Locale, DWORD dwCmpFlags, PCNZWCH lpString1, int cchCount1, PCNZWCH lpString2, int cchCount2)' has been ignored

//----- (000000014024EEBC) ----------------------------------------------------
__int64            sub_14024EEBC(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  static unsigned int sr_api_modules_24eebc_0[] = {3,16};
  __int64 (           *function)(__int64, _QWORD, __int64, __int64);
  _BYTE scratch_buffer[4];
  unsigned int selection_code;
  unsigned int selection_code_2;
  __int64 *state_address;
  __int64 input_value;

  input_value = a1;
  function = (__int64 (           *)(__int64, _QWORD, __int64, __int64))try_get_function(
                                                                          2u,
                                                                          (__int64)"EnumSystemLocalesEx", sr_api_modules_24eebc_0, sr_api_modules_24eebc_0 + 2);
  if ( function )
    return function(input_value, a2, a3, a4);
  state_address = &input_value;
  selection_code = 4;
  selection_code_2 = 4;
  return sub_14024E088((__int64)scratch_buffer, &selection_code_2, &state_address, &selection_code);
}

//----- (000000014024EF54) ----------------------------------------------------
__int64            sub_14024EF54(__int64 a1)
{
  static unsigned int sr_api_modules_24ef54_0[] = {1,16};
  __int64 (           *function)(__int64);

  function = (__int64 (           *)(__int64))try_get_function(
                                                3u,
                                                (__int64)"FlsAlloc", sr_api_modules_24ef54_0, sr_api_modules_24ef54_0 + 2);
  if ( function )
    return function(a1);
  else
    return ((__int64 (*)(void))TlsAlloc)();
}

// 14026E230: invalid function type 'DWORD (__stdcall *TlsAlloc)()' has been ignored

//----- (000000014024EF9C) ----------------------------------------------------
__int64            sub_14024EF9C(unsigned int a1)
{
  static unsigned int sr_api_modules_24ef9c_0[] = {1,16};
  __int64 (           *function)(_QWORD);

  function = (__int64 (           *)(_QWORD))try_get_function(
                                               4u,
                                               (__int64)"FlsFree", sr_api_modules_24ef9c_0, sr_api_modules_24ef9c_0 + 2);
  if ( function )
    return function(a1);
  else
    return ((__int64 (           *)(_QWORD))TlsFree)(a1);
}

// 14026E218: invalid function type 'BOOL (__stdcall *TlsFree)(DWORD dwTlsIndex)' has been ignored

//----- (000000014024EFE4) ----------------------------------------------------
__int64            sub_14024EFE4(unsigned int a1)
{
  static unsigned int sr_api_modules_24efe4_0[] = {1,16};
  __int64 (           *function)(_QWORD);

  function = (__int64 (           *)(_QWORD))try_get_function(
                                               5u,
                                               (__int64)"FlsGetValue", sr_api_modules_24efe4_0, sr_api_modules_24efe4_0 + 2);
  if ( function )
    return function(a1);
  else
    return ((__int64 (           *)(_QWORD))TlsGetValue)(a1);
}

// 14026E228: invalid function type 'LPVOID (__stdcall *TlsGetValue)(DWORD dwTlsIndex)' has been ignored

//----- (000000014024F02C) ----------------------------------------------------
__int64            sub_14024F02C(unsigned int a1, __int64 a2)
{
  static unsigned int sr_api_modules_24f02c_0[] = {1,16};
  __int64 (           *function)(_QWORD, __int64);

  function = (__int64 (           *)(_QWORD, __int64))try_get_function(
                                                        6u,
                                                        (__int64)"FlsSetValue", sr_api_modules_24f02c_0, sr_api_modules_24f02c_0 + 2);
  if ( function )
    return function(a1, a2);
  else
    return ((__int64 (           *)(_QWORD, __int64))TlsSetValue)(a1, a2);
}

// 14026E220: invalid function type 'BOOL (__stdcall *TlsSetValue)(DWORD dwTlsIndex, LPVOID lpTlsValue)' has been ignored

//----- (000000014024F080) ----------------------------------------------------
__int64            sub_14024F080(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int a6, __int64 a7)
{
  static unsigned int sr_api_modules_24f080_0[] = {0,16};
  __int64 (           *function)(__int64, _QWORD, __int64, __int64, __int64, int, __int64);
  unsigned int call_result;

  function = (__int64 (           *)(__int64, _QWORD, __int64, __int64, __int64, int, __int64))try_get_function(
                                                                                                 8u,
                                                                                                 (__int64)"GetDateFormatEx", sr_api_modules_24f080_0, sr_api_modules_24f080_0 + 2);
  if ( function )
    return function(a1, a2, a3, a4, a5, a6, a7);
  call_result = sub_14024F5AC(a1, 0);
  return ((__int64 (           *)(_QWORD, _QWORD, __int64, __int64, __int64, int))GetDateFormatW)(
           call_result,
           a2,
           a3,
           a4,
           a5,
           a6);
}

// 14026E120: invalid function type 'int (__stdcall *GetDateFormatW)(LCID Locale, DWORD dwFlags, const SYSTEMTIME *lpDate, LPCWSTR lpFormat, LPWSTR lpDateStr, int cchDate)' has been ignored

//----- (000000014024F138) ----------------------------------------------------
__int64 sub_14024F138()
{
  static unsigned int sr_api_modules_24f138_0[] = {10,16};
  __int64 (*function)(void);

  function = (__int64 (*)(void))try_get_function(
                                  9u,
                                  (__int64)"GetEnabledXStateFeatures", sr_api_modules_24f138_0, sr_api_modules_24f138_0 + 2);
  if ( !function )
    abort();
  return function();
}

//----- (000000014024F174) ----------------------------------------------------
__int64            sub_14024F174(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  static unsigned int sr_api_modules_24f174_0[] = {3,16};
  __int64 (           *function)(__int64, _QWORD, __int64, _QWORD);
  unsigned int call_result;

  function = (__int64 (           *)(__int64, _QWORD, __int64, _QWORD))try_get_function(
                                                                         0xBu,
                                                                         (__int64)"GetLocaleInfoEx", sr_api_modules_24f174_0, sr_api_modules_24f174_0 + 2);
  if ( function )
    return function(a1, a2, a3, a4);
  call_result = sub_14024F5AC(a1, 0);
  return ((__int64 (           *)(_QWORD, _QWORD, __int64, _QWORD))GetLocaleInfoW)(call_result, a2, a3, a4);
}

// 14026E100: invalid function type 'int (__stdcall *GetLocaleInfoW)(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData)' has been ignored

//----- (000000014024F1F8) ----------------------------------------------------
__int64            sub_14024F1F8(__int64 a1)
{
  static unsigned int sr_api_modules_24f1f8_0[] = {8};
  __int64 (           *function)(__int64);

  function = (__int64 (           *)(__int64))try_get_function(
                                                0xDu,
                                                (__int64)"GetSystemTimePreciseAsFileTime", sr_api_modules_24f1f8_0, sr_api_modules_24f1f8_0 + 1);
  if ( function )
    return function(a1);
  else
    return ((__int64 (           *)(__int64))GetSystemTimeAsFileTime)(a1);
}

// 14026E310: invalid function type 'void (__stdcall *GetSystemTimeAsFileTime)(LPFILETIME lpSystemTimeAsFileTime)' has been ignored

//----- (000000014024F240) ----------------------------------------------------
__int64            sub_14024F240(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  static unsigned int sr_api_modules_24f240_0[] = {0,16};
  __int64 (           *function)(__int64, _QWORD, __int64, __int64, __int64, int);
  unsigned int call_result;

  function = (__int64 (           *)(__int64, _QWORD, __int64, __int64, __int64, int))try_get_function(
                                                                                        0xEu,
                                                                                        (__int64)"GetTimeFormatEx", sr_api_modules_24f240_0, sr_api_modules_24f240_0 + 2);
  if ( function )
    return function(a1, a2, a3, a4, a5, a6);
  call_result = sub_14024F5AC(a1, 0);
  return ((__int64 (           *)(_QWORD, _QWORD, __int64, __int64, __int64, int))GetTimeFormatW)(
           call_result,
           a2,
           a3,
           a4,
           a5,
           a6);
}

// 14026E118: invalid function type 'int (__stdcall *GetTimeFormatW)(LCID Locale, DWORD dwFlags, const SYSTEMTIME *lpTime, LPCWSTR lpFormat, LPWSTR lpTimeStr, int cchTime)' has been ignored

//----- (000000014024F2EC) ----------------------------------------------------
__int64            sub_14024F2EC(_WORD *a1, unsigned int a2)
{
  static unsigned int sr_api_modules_24f2ec_0[] = {3,16};
  __int64 (           *function)(_WORD *, _QWORD);
  unsigned int int64_result;

  function = (__int64 (           *)(_WORD *, _QWORD))try_get_function(
                                                        0xFu,
                                                        (__int64)"GetUserDefaultLocaleName", sr_api_modules_24f2ec_0, sr_api_modules_24f2ec_0 + 2);
  if ( function )
    return function(a1, a2);
  int64_result = ((__int64 (*)(void))GetUserDefaultLCID)();
  return sub_14024F460(int64_result, a1, a2, 0);
}

// 14026E0F0: invalid function type 'LCID (__stdcall *GetUserDefaultLCID)()' has been ignored

//----- (000000014024F350) ----------------------------------------------------
__int64            sub_14024F350(__int64 a1, __int64 a2)
{
  static unsigned int sr_api_modules_24f350_0[] = {10,16};
  __int64 (           *function)(__int64, __int64);

  function = (__int64 (           *)(__int64, __int64))try_get_function(
                                                         0x11u,
                                                         (__int64)"GetXStateFeaturesMask", sr_api_modules_24f350_0, sr_api_modules_24f350_0 + 2);
  if ( !function )
    abort();
  return function(a1, a2);
}

//----- (000000014024F3A4) ----------------------------------------------------
__int64            _acrt_InitializeCriticalSectionEx(__int64 a1, unsigned int a2, unsigned int a3)
{
  static unsigned int sr_api_modules_24f3a4_0[] = {7,16};
  __int64 (           *function)(__int64, _QWORD, _QWORD);

  function = (__int64 (           *)(__int64, _QWORD, _QWORD))try_get_function(
                                                                0x12u,
                                                                (__int64)"InitializeCriticalSectionEx", sr_api_modules_24f3a4_0, sr_api_modules_24f3a4_0 + 2);
  if ( function )
    return function(a1, a2, a3);
  else
    return ((__int64 (           *)(__int64, _QWORD))InitializeCriticalSectionAndSpinCount)(a1, a2);
}

// 14026E238: invalid function type 'BOOL (__stdcall *InitializeCriticalSectionAndSpinCount)(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount)' has been ignored

//----- (000000014024F408) ----------------------------------------------------
__int64            sub_14024F408(__int64 a1)
{
  static unsigned int sr_api_modules_24f408_0[] = {3,16};
  __int64 (           *function)(__int64);
  unsigned int call_result;

  function = (__int64 (           *)(__int64))try_get_function(
                                                0x13u,
                                                (__int64)"IsValidLocaleName", sr_api_modules_24f408_0, sr_api_modules_24f408_0 + 2);
  if ( function )
    return function(a1);
  call_result = sub_14024F5AC(a1, 0);
  return ((__int64 (           *)(_QWORD, __int64))IsValidLocale)(call_result, 1);
}

// 14026E0F8: invalid function type 'BOOL (__stdcall *IsValidLocale)(LCID Locale, DWORD dwFlags)' has been ignored

//----- (000000014024F460) ----------------------------------------------------
__int64            sub_14024F460(unsigned int a1, _WORD *a2, unsigned int a3, unsigned int a4)
{
  static unsigned int sr_api_modules_24f460_0[] = {4,16};
  __int64 (           *function)(_QWORD, _WORD *, _QWORD, _QWORD);

  function = (__int64 (           *)(_QWORD, _WORD *, _QWORD, _QWORD))try_get_function(
                                                                        0x15u,
                                                                        (__int64)"LCIDToLocaleName", sr_api_modules_24f460_0, sr_api_modules_24f460_0 + 2);
  if ( function )
    return function(a1, a2, a3, a4);
  else
    return _acrt_DownlevelLCIDToLocaleName(a1, a2, a3);
}

//----- (000000014024F4D0) ----------------------------------------------------
__int64            sub_14024F4D0(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  static unsigned int sr_api_modules_24f4d0_0[] = {3,16};
  __int64 (           *function)(__int64, _QWORD, __int64, _QWORD, __int64, int, __int64, __int64, __int64);
  unsigned int call_result;

  function = (__int64 (           *)(__int64, _QWORD, __int64, _QWORD, __int64, int, __int64, __int64, __int64))try_get_function(0x14u, (__int64)"LCMapStringEx", sr_api_modules_24f4d0_0, sr_api_modules_24f4d0_0 + 2);
  if ( function )
    return function(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  call_result = sub_14024F5AC(a1, 0);
  return ((__int64 (           *)(_QWORD, _QWORD, __int64, _QWORD, __int64, int))LCMapStringW)(call_result, a2, a3, a4, a5, a6);
}

// 14026E108: invalid function type 'int (__stdcall *LCMapStringW)(LCID Locale, DWORD dwMapFlags, LPCWSTR lpSrcStr, int cchSrc, LPWSTR lpDestStr, int cchDest)' has been ignored

//----- (000000014024F5AC) ----------------------------------------------------
__int64            sub_14024F5AC(__int64 a1, unsigned int a2)
{
  static unsigned int sr_api_modules_24f5ac_0[] = {3,16};
  __int64 (           *function)(__int64, _QWORD);

  function = (__int64 (           *)(__int64, _QWORD))try_get_function(
                                                        0x16u,
                                                        (__int64)"LocaleNameToLCID", sr_api_modules_24f5ac_0, sr_api_modules_24f5ac_0 + 2);
  if ( function )
    return function(a1, a2);
  else
    return _acrt_DownlevelLocaleNameToLCID(a1);
}

//----- (000000014024F5FC) ----------------------------------------------------
__int64            sub_14024F5FC(__int64 a1, unsigned int a2, __int64 a3)
{
  static unsigned int sr_api_modules_24f5fc_0[] = {10,16};
  __int64 (           *function)(__int64, _QWORD, __int64);

  function = (__int64 (           *)(__int64, _QWORD, __int64))try_get_function(
                                                                 0x17u,
                                                                 (__int64)"LocateXStateFeature", sr_api_modules_24f5fc_0, sr_api_modules_24f5fc_0 + 2);
  if ( !function )
    abort();
  return function(a1, a2, a3);
}

//----- (000000014024F65C) ----------------------------------------------------
__int64            sub_14024F65C(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  static unsigned int sr_api_modules_24f65c_0[] = {13,19};
  __int64 (           *function)(__int64, __int64, __int64, _QWORD);

  function = (__int64 (           *)(__int64, __int64, __int64, _QWORD))try_get_function(
                                                                          0x18u,
                                                                          (__int64)"MessageBoxA", sr_api_modules_24f65c_0, sr_api_modules_24f65c_0 + 2);
  if ( !function )
    abort();
  return function(a1, a2, a3, a4);
}

//----- (000000014024F6D0) ----------------------------------------------------
__int64            sub_14024F6D0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  static unsigned int sr_api_modules_24f6d0_0[] = {13,19};
  __int64 (           *function)(__int64, __int64, __int64, _QWORD);

  function = (__int64 (           *)(__int64, __int64, __int64, _QWORD))try_get_function(
                                                                          0x19u,
                                                                          (__int64)"MessageBoxW", sr_api_modules_24f6d0_0, sr_api_modules_24f6d0_0 + 2);
  if ( !function )
    abort();
  return function(a1, a2, a3, a4);
}

//----- (000000014024F744) ----------------------------------------------------
__int64 (           *           sub_14024F744(unsigned int a1))(_QWORD)
{
  static unsigned int sr_api_modules_24f744_0[] = {9};
  __int64 (           *result)(_QWORD);

  result = (__int64 (           *)(_QWORD))try_get_function(
                                             0x1Au,
                                             (__int64)"RoInitialize", sr_api_modules_24f744_0, sr_api_modules_24f744_0 + 1);
  if ( result )
    return (__int64 (           *)(_QWORD))result(a1);
  return result;
}

//----- (000000014024F784) ----------------------------------------------------
__int64 (*sub_14024F784())(void)
{
  static unsigned int sr_api_modules_24f784_0[] = {9};
  __int64 (*result)(void);

  result = (__int64 (*)(void))try_get_function(0x1Bu, (__int64)"RoUninitialize", sr_api_modules_24f784_0, sr_api_modules_24f784_0 + 1);
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}

//----- (000000014024F7B8) ----------------------------------------------------
__int64            sub_14024F7B8(__int64 a1, unsigned int a2)
{
  static unsigned int sr_api_modules_24f7b8_0[] = {12,15};
  __int64 (           *function)(__int64, _QWORD);

  function = (__int64 (           *)(__int64, _QWORD))try_get_function(
                                                        0x21u,
                                                        (__int64)"SystemFunction036", sr_api_modules_24f7b8_0, sr_api_modules_24f7b8_0 + 2);
  if ( !function )
    abort();
  return function(a1, a2);
}

//----- (000000014024F808) ----------------------------------------------------
__int64 (           *           sub_14024F808(__int64 a1))(__int64)
{
  static unsigned int sr_api_modules_24f808_0[] = {5,16};
  __int64 (           *result)(__int64);

  result = (__int64 (           *)(__int64))try_get_function(
                                              0x20u,
                                              (__int64)"SetThreadStackGuarantee", sr_api_modules_24f808_0, sr_api_modules_24f808_0 + 2);
  if ( result )
    return (__int64 (           *)(__int64))result(a1);
  return result;
}

//----- (000000014024F84C) ----------------------------------------------------
bool sub_14024F84C()
{
  static unsigned int sr_api_modules_24f84c_0[] = {13,19};
  static unsigned int sr_api_modules_24f84c_1[] = {13,19};
  char unused_written_slot;

  unused_written_slot = 0;
  if ( (unsigned int)sub_14025A3C4() == 1
    && try_get_function(0x18u, (__int64)"MessageBoxA", sr_api_modules_24f84c_0, sr_api_modules_24f84c_0 + 2) )
  {
    return try_get_function(0x19u, (__int64)"MessageBoxW", sr_api_modules_24f84c_1, sr_api_modules_24f84c_1 + 2) != 0;
  }
  return unused_written_slot;
}

//----- (000000014024F8BC) ----------------------------------------------------
bool sub_14024F8BC()
{
  static unsigned int sr_api_modules_24f8bc_0[] = {6,16};
  return try_get_function(
           1u,
           (__int64)"CompareStringEx", sr_api_modules_24f8bc_0, sr_api_modules_24f8bc_0 + 2) != 0;
}

//----- (000000014024F8EC) ----------------------------------------------------
bool sub_14024F8EC()
{
  static unsigned int sr_api_modules_24f8ec_0[] = {10,16};
  return try_get_function(
           0x17u,
           (__int64)"LocateXStateFeature", sr_api_modules_24f8ec_0, sr_api_modules_24f8ec_0 + 2) != 0;
}

//----- (000000014024F91C) ----------------------------------------------------
__int64 sub_14024F91C()
{
  static unsigned int sr_api_modules_24f91c_0[] = {16};
  static unsigned int sr_api_modules_24f91c_1[] = {6,16};
  static unsigned int sr_api_modules_24f91c_2[] = {3,16};
  static unsigned int sr_api_modules_24f91c_3[] = {0,16};
  static unsigned int sr_api_modules_24f91c_4[] = {3,16};
  static unsigned int sr_api_modules_24f91c_5[] = {0,16};
  static unsigned int sr_api_modules_24f91c_6[] = {3,16};
  static unsigned int sr_api_modules_24f91c_7[] = {3,16};
  static unsigned int sr_api_modules_24f91c_8[] = {3,16};
  static unsigned int sr_api_modules_24f91c_9[] = {4,16};
  static unsigned int sr_api_modules_24f91c_10[] = {3,16};
  try_get_function(0, (__int64)"AreFileApisANSI", sr_api_modules_24f91c_0, sr_api_modules_24f91c_0 + 1);
  try_get_function(1u, (__int64)"CompareStringEx", sr_api_modules_24f91c_1, sr_api_modules_24f91c_1 + 2);
  try_get_function(
    2u,
    (__int64)"EnumSystemLocalesEx", sr_api_modules_24f91c_2, sr_api_modules_24f91c_2 + 2);
  try_get_function(8u, (__int64)"GetDateFormatEx", sr_api_modules_24f91c_3, sr_api_modules_24f91c_3 + 2);
  try_get_function(0xBu, (__int64)"GetLocaleInfoEx", sr_api_modules_24f91c_4, sr_api_modules_24f91c_4 + 2);
  try_get_function(0xEu, (__int64)"GetTimeFormatEx", sr_api_modules_24f91c_5, sr_api_modules_24f91c_5 + 2);
  try_get_function(
    0xFu,
    (__int64)"GetUserDefaultLocaleName", sr_api_modules_24f91c_6, sr_api_modules_24f91c_6 + 2);
  try_get_function(
    0x13u,
    (__int64)"IsValidLocaleName", sr_api_modules_24f91c_7, sr_api_modules_24f91c_7 + 2);
  try_get_function(0x14u, (__int64)"LCMapStringEx", sr_api_modules_24f91c_8, sr_api_modules_24f91c_8 + 2);
  try_get_function(
    0x15u,
    (__int64)"LCIDToLocaleName", sr_api_modules_24f91c_9, sr_api_modules_24f91c_9 + 2);
  return try_get_function(
           0x16u,
           (__int64)"LocaleNameToLCID", sr_api_modules_24f91c_10, sr_api_modules_24f91c_10 + 2);
}

//----- (000000014024FA78) ----------------------------------------------------
__int64 sub_14024FA78()
{
  static unsigned int sr_api_modules_24fa78_0[] = {11,19};
  static unsigned int sr_api_modules_24fa78_1[] = {13,19};
  __int64 (*function)(void);
  __int64 function_result;
  __int64 (           *callback_function)(__int64);

  function = (__int64 (*)(void))try_get_function(
                                  7u,
                                  (__int64)"GetActiveWindow", sr_api_modules_24fa78_0, sr_api_modules_24fa78_0 + 2);
  if ( !function )
    return 0;
  function_result = function();
  if ( !function_result )
    return 0;
  callback_function = (__int64 (           *)(__int64))try_get_function(
                                          0xAu,
                                          (__int64)"GetLastActivePopup", sr_api_modules_24fa78_1, sr_api_modules_24fa78_1 + 2);
  if ( callback_function )
    return callback_function(function_result);
  else
    return function_result;
}

//----- (000000014024FAF0) ----------------------------------------------------
char sub_14024FAF0()
{
  memset64(
    &g_144CBF230,
    _security_cookie,
    (unsigned int *)&g_144CBF340 >= &g_144CBF230 ? 0x22 : 0);
  return 1;
}

//----- (000000014024FB24) ----------------------------------------------------
__int64 sub_14024FB24()
{
  static unsigned int sr_api_modules_24fb24_0[] = {14,19};
  static unsigned int sr_api_modules_24fb24_1[] = {14,19};
  __int64 (*function)(void);
  void (           *callback_function)(__int64, __int64, __int64 *, __int64, _QWORD);
  __int64 function_result;
  __int64 unused_local;
  __int64 selection_flag;
  int selection_flag_2;
  __int64 unused_local_2;

  function = (__int64 (*)(void))try_get_function(
                                  0xCu,
                                  (__int64)"GetProcessWindowStation", sr_api_modules_24fb24_0, sr_api_modules_24fb24_0 + 2);
  if ( function )
  {
    callback_function = (void (           *)(__int64, __int64, __int64 *, __int64, _QWORD))try_get_function(
                                                                              0x10u,
                                                                              (__int64)"GetUserObjectInformationW", sr_api_modules_24fb24_1, sr_api_modules_24fb24_1 + 2);
    if ( callback_function )
    {
      function_result = function();
      if ( function_result )
      {
        selection_flag = 0;
        selection_flag_2 = 0;
        return ((unsigned int (*)(__int64, __int64, __int64 *, __int64, _QWORD))callback_function)(function_result, 1, &selection_flag, 12, 0) && (selection_flag_2 & 1); /* 0x14024FBC1: test eax, eax; 0x14024FBC5: test byte ptr [rsp + 0x38], 1 */
      }
      return 0; /* 0x14024FB97: je -> xor al, al */
    }
  }
  return 1; /* 0x14024FBD0: mov al, 1 */
}

//----- (000000014024FBEC) ----------------------------------------------------
char            sub_14024FBEC(char a1)
{
  unsigned int *state_address;

  if ( !a1 )
  {
    state_address = &g_144CBF190;
    do
    {
      if ( *(_QWORD *)state_address )
      {
        if ( *(_QWORD *)state_address != -1 )
          ((void (*)(void))FreeLibrary)();
        *(_QWORD *)state_address = 0;
      }
      state_address += 2;
    }
    while ( state_address != &g_144CBF230 );
  }
  return 1;
}

// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored

//----- (000000014024FC38) ----------------------------------------------------
int         fcloseall()
{
  int i;
  __int64 loaded_word;
  int iteration_count;

  iteration_count = 0;
  crt_lock(8);
  for ( i = 3; i != g_144CBE6A8; ++i )
  {
    loaded_word = *(_QWORD *)(g_144CBE6B0 + 8LL * i);
    if ( loaded_word )
    {
      if ( (*(_DWORD *)(loaded_word + 20) & 0x2000) != 0
        && (unsigned int)crt_fclose(*(_QWORD *)(g_144CBE6B0 + 8LL * i)) != -1 )
      {
        ++iteration_count;
      }
      ((void (           *)(__int64))DeleteCriticalSection)(*(_QWORD *)(g_144CBE6B0 + 8LL * i) + 48LL);
      free_base(*(void **)(g_144CBE6B0 + 8LL * i));
      *(_QWORD *)(g_144CBE6B0 + 8LL * i) = 0;
    }
  }
  crt_unlock(8);
  return iteration_count;
}

// 14026E240: invalid function type 'void (__stdcall *DeleteCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored

//----- (000000014024FCEC) ----------------------------------------------------
__int64            sub_14024FCEC(__int64 a1, __int64 *a2, FILE ***a3, __int64 *a4)
{
  __int64 scaled_index;
  int loaded_word;

  crt_lock_file(*a2);
  scaled_index = (__int64)**a3;
  if ( scaled_index )
  {
    loaded_word = *(_DWORD *)(scaled_index + 20);
    if ( (loaded_word & 0x2000) != 0 )
    {
      if ( (loaded_word & 3) == 2 && (loaded_word & 0xC0) != 0 || (loaded_word & 0x800) != 0 )
      {
        if ( *(_BYTE *)a3[2] || (*((_DWORD *)**a3 + 5) & 2) != 0 )
        {
          if ( (unsigned int)unknown_libname_861(**a3) == -1 )
            *(_DWORD *)a3[3] = -1;
          else
            ++*(_DWORD *)a3[1];
        }
      }
      else
      {
        ++*(_DWORD *)a3[1];
      }
    }
  }
  return crt_unlock_file(*a4);
}

//----- (000000014024FD88) ----------------------------------------------------
__int64            sub_14024FD88(__int64 a1, unsigned int *a2, FILE ***a3, unsigned int *a4)
{
  __int64 *buffer_cursor;
  __int64 scaled_index;
  __int64 loaded_word;
  int loaded_word_2;
  FILE **table_value;
  FILE **table_value_2;
  FILE **loaded_word_3;
  __int64 saved_loaded_word;
  __int64 callee_output_word;
  __int64 scratch_buffer[2];
  FILE **scratch_buffer_2[7];
  char callee_output_word_2;
  unsigned int *unused_written_slot;

  unused_written_slot = a4;
  crt_lock(*a2);
  buffer_cursor = *(__int64 **)&g_144CBE6B0;
  scaled_index = g_144CBE6B0 + 8LL * (int)g_144CBE6A8;
  while ( 1 )
  {
    scratch_buffer[1] = (__int64)buffer_cursor;
    if ( buffer_cursor == (__int64 *)scaled_index )
      break;
    loaded_word = *buffer_cursor;
    saved_loaded_word = loaded_word;
    if ( loaded_word )
    {
      loaded_word_2 = *(_DWORD *)(loaded_word + 20);
      if ( (loaded_word_2 & 0x2000) != 0 )
      {
        if ( (loaded_word_2 & 3) == 2 && (loaded_word_2 & 0xC0) != 0 || (loaded_word_2 & 0x800) != 0 )
        {
          table_value = a3[2];
          table_value_2 = a3[1];
          loaded_word_3 = *a3;
          scratch_buffer_2[0] = (FILE **)&saved_loaded_word;
          scratch_buffer_2[1] = loaded_word_3;
          scratch_buffer_2[2] = table_value_2;
          scratch_buffer_2[3] = table_value;
          callee_output_word = saved_loaded_word;
          scratch_buffer[0] = saved_loaded_word;
          sub_14024FCEC((__int64)&callee_output_word_2, scratch_buffer, scratch_buffer_2, &callee_output_word);
        }
        else
        {
          ++*(_DWORD *)*a3;
        }
      }
    }
    ++buffer_cursor;
  }
  return crt_unlock(*a4);
}

//----- (000000014024FE68) ----------------------------------------------------
__int64            sub_14024FE68(__int64 a1, __int64 *a2, FILE ***a3, __int64 *a4)
{
  crt_lock_file(*a2);
  LODWORD(a3) = unknown_libname_861(**a3);
  crt_unlock_file(*a4);
  return (unsigned int)a3;
}

//----- (000000014024FEA8) ----------------------------------------------------
__int64            sub_14024FEA8(unsigned int a1, FILE ***a2)
{
  __int64 callee_output_word;
  unsigned int input_value;
  unsigned int input_value_2;

  input_value = a1;
  input_value_2 = a1;
  return sub_14024FD88((__int64)&callee_output_word, &input_value_2, a2, &input_value);
}

//----- (000000014024FED0) ----------------------------------------------------
__int64            sub_14024FED0(__int64 a1, FILE ***a2)
{
  __int64 callee_output_word;
  __int64 input_value;
  __int64 input_value_2;

  input_value = a1;
  input_value_2 = a1;
  return sub_14024FE68((__int64)&callee_output_word, &input_value_2, a2, &input_value);
}

//----- (000000014024FEF8) ----------------------------------------------------
__int64            sub_14024FEF8(__int64 a1, FILE ***a2)
{
  __int64 callee_output_word;
  __int64 input_value;
  __int64 input_value_2;

  input_value = a1;
  input_value_2 = a1;
  return sub_14024FCEC((__int64)&callee_output_word, &input_value_2, a2, &input_value);
}

//----- (000000014024FFB4) ----------------------------------------------------
char            _lambda_ab61a845afdef5b7c387490eaf3616ee___operator_call(FILE ***a1)
{
  __int64 *buffer_cursor;
  __int64 packed_word_bits;
  __int64 scaled_index;
  FILE **loaded_word;
  unsigned int loaded_word_2;
  __int64 callee_output_word;
  FILE **scratch_buffer[5];
  char callee_output_word_2;
  __int64 saved_packed_word_bits;
  __int64 callee_output_word_3;

  buffer_cursor = *(__int64 **)&g_144CBE6B0;
  LOBYTE(packed_word_bits) = g_144CBE6A8;
  scaled_index = g_144CBE6B0 + 8LL * (int)g_144CBE6A8;
  while ( buffer_cursor != (__int64 *)scaled_index )
  {
    packed_word_bits = *buffer_cursor;
    loaded_word = *a1;
    saved_packed_word_bits = packed_word_bits;
    if ( packed_word_bits )
    {
      loaded_word_2 = *(_DWORD *)(packed_word_bits + 20);
      LODWORD(packed_word_bits) = loaded_word_2 >> 13;
      if ( (loaded_word_2 & 0x2000) != 0 )
      {
        LOBYTE(packed_word_bits) = loaded_word_2 & 3;
        if ( (loaded_word_2 & 3) == 2 && (loaded_word_2 & 0xC0) != 0 || (loaded_word_2 & 0x800) != 0 )
        {
          scratch_buffer[0] = (FILE **)&saved_packed_word_bits;
          scratch_buffer[1] = *a1;
          scratch_buffer[2] = a1[1];
          scratch_buffer[3] = a1[2];
          callee_output_word_3 = saved_packed_word_bits;
          callee_output_word = saved_packed_word_bits;
          LOBYTE(packed_word_bits) = sub_14024FCEC((__int64)&callee_output_word_2, &callee_output_word, scratch_buffer, &callee_output_word_3);
        }
        else
        {
          ++*(_DWORD *)loaded_word;
        }
      }
    }
    ++buffer_cursor;
  }
  return packed_word_bits;
}

//----- (000000014025006C) ----------------------------------------------------
char            _lambda_c5860995281e5c4ce005b3de8f5874ee___operator_call(FILE *******a1)
{
  FILE *****table_value;
  FILE *****packed_word_bits;
  unsigned int loaded_word;
  FILE *****file_handle;

  table_value = (FILE *****)a1[1];
  packed_word_bits = **a1;
  if ( packed_word_bits )
  {
    loaded_word = *((_DWORD *)packed_word_bits + 5);
    LODWORD(packed_word_bits) = loaded_word >> 13;
    if ( (loaded_word & 0x2000) != 0 )
    {
      LOBYTE(packed_word_bits) = loaded_word & 3;
      if ( (loaded_word & 3) == 2 && (loaded_word & 0xC0) != 0 || (loaded_word & 0x800) != 0 )
      {
        if ( *(_BYTE *)a1[2] || (file_handle = **a1, LODWORD(packed_word_bits) = *((_DWORD *)file_handle + 5) >> 1, (*((_DWORD *)file_handle + 5) & 2) != 0) )
        {
          if ( (unsigned int)unknown_libname_861((FILE *)**a1) == -1 )
          {
            packed_word_bits = (FILE *****)a1[3];
            *(_DWORD *)packed_word_bits = -1;
          }
          else
          {
            packed_word_bits = (FILE *****)a1[1];
            ++*(_DWORD *)packed_word_bits;
          }
        }
      }
      else
      {
        ++*(_DWORD *)table_value;
      }
    }
  }
  return (char)packed_word_bits;
}

//----- (00000001402500F4) ----------------------------------------------------
__int64            sub_1402500F4(char a1)
{
  __int64 result;
  unsigned int selection_code;
  unsigned int selection_code_2;
  FILE **scratch_buffer[3];
  char input_value;
  char callee_output_word;
  unsigned int selection_flag;
  unsigned int selection_flag_2;

  input_value = a1;
  selection_flag_2 = 0;
  selection_flag = 0;
  scratch_buffer[0] = (FILE **)&selection_flag_2;
  scratch_buffer[1] = (FILE **)&input_value;
  scratch_buffer[2] = (FILE **)&selection_flag;
  selection_code = 8;
  selection_code_2 = 8;
  sub_14024FD88((__int64)&callee_output_word, &selection_code_2, scratch_buffer, &selection_code);
  result = selection_flag;
  if ( input_value )
    return selection_flag_2;
  return result;
}

//----- (00000001402501C4) ----------------------------------------------------
__int64            sub_1402501C4(FILE *Stream)
{
  int loaded_word;
  signed int loaded_word_2;
       void *loaded_record_pointer;
  int fileno_result;

  loaded_word = *((_DWORD *)Stream + 5);
  if ( (loaded_word & 3) == 2 && (loaded_word & 0xC0) != 0 )
  {
    loaded_word_2 = *(_DWORD *)Stream - *((_DWORD *)Stream + 2);
    *((_DWORD *)Stream + 4) = 0;
    loaded_record_pointer = *((     void **)Stream + 1);
    *(_QWORD *)Stream = (uint64)(uintptr_t)(loaded_record_pointer);
    if ( loaded_word_2 > 0 )
    {
      fileno_result = fileno(Stream);
      if ( loaded_word_2 != write(fileno_result, loaded_record_pointer, loaded_word_2) )
      {
        _InterlockedOr((volatile signed __int32 *)Stream + 5, 0x10u);
        return 0xFFFFFFFFLL;
      }
      if ( (*((_DWORD *)Stream + 5) & 4) != 0 )
        _InterlockedAnd((volatile signed __int32 *)Stream + 5, 0xFFFFFFFD);
    }
  }
  return 0;
}

//----- (0000000140250240) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_861(FILE *Stream)
{
  int fileno_result;

  if ( !Stream )
    return sub_1402500F4(0);
  if ( (unsigned int)sub_1402501C4(Stream) )
    return 0xFFFFFFFFLL;
  if ( (*((_DWORD *)Stream + 5) & 0x800) != 0 )
  {
    fileno_result = fileno(Stream);
    if ( commit(fileno_result) )
      return 0xFFFFFFFFLL;
  }
  return 0;
}

//----- (000000014025028C) ----------------------------------------------------
int         flushall()
{
  return sub_1402500F4(1);
}

//----- (0000000140250294) ----------------------------------------------------
int         fflush(FILE *Stream)
{
  int loaded_word;
  FILE *saved_cached_stream;
  char callee_output_word;
  FILE *cached_stream;
  FILE *saved_cached_stream_2;
  FILE **state_address;

  cached_stream = Stream;
  if ( !Stream )
    return sub_1402500F4(0);
  loaded_word = *((_DWORD *)Stream + 5);
  if ( ((loaded_word & 3) != 2 || (loaded_word & 0xC0) == 0) && (loaded_word & 0x800) == 0 )
    return 0;
  state_address = &cached_stream;
  saved_cached_stream_2 = cached_stream;
  saved_cached_stream = cached_stream;
  return sub_14024FE68((__int64)&callee_output_word, (__int64 *)&saved_cached_stream, &state_address, (__int64 *)&saved_cached_stream_2);
}

//----- (00000001402502FC) ----------------------------------------------------
__int64            sub_1402502FC(__int64 a1)
{
  __int64 result;

  result = *(_DWORD *)(a1 + 20) >> 13;
  if ( (*(_DWORD *)(a1 + 20) & 0x2000) != 0 )
  {
    result = *(_DWORD *)(a1 + 20) >> 6;
    if ( (*(_DWORD *)(a1 + 20) & 0x40) != 0 )
    {
      free_base(*(void **)(a1 + 8));
      _InterlockedAnd((volatile signed __int32 *)(a1 + 20), 0xFFFFFEBF);
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)a1 = 0;
      *(_DWORD *)(a1 + 16) = 0;
      return 0;
    }
  }
  return result;
}

//----- (0000000140250358) ----------------------------------------------------
char initialize_inherited_file_handles_nolock()
{
  int int64_result;
  _BYTE *buffer_cursor;
  __int64 remaining_count;
  _QWORD *buffer_cursor_2;
  __int64 element_index;
  __int64 shifted_bits;
  __int64 masked_bits;
  _WORD scratch_buffer[52];
  int *loaded_record_pointer;

  LOBYTE(int64_result) = ((__int64 (           *)(_WORD *))GetStartupInfoW)(scratch_buffer);
  loaded_record_pointer=*(int **)((unsigned char *)scratch_buffer+72);
  if ( scratch_buffer[33] )
  {
    LOBYTE(int64_result) = (_BYTE)loaded_record_pointer;
    if ( loaded_record_pointer )
    {
      buffer_cursor = loaded_record_pointer + 1;
      remaining_count = 0x2000;
      buffer_cursor_2 = (_QWORD *)((char *)loaded_record_pointer + *loaded_record_pointer + 4);
      if ( *loaded_record_pointer < 0x2000 )
        remaining_count = (unsigned int)*loaded_record_pointer;
      LOBYTE(int64_result) = sub_140260FC0(remaining_count);
      if ( (int)remaining_count > (int)g_144CBF750 )
        remaining_count = g_144CBF750;
      if ( (_DWORD)remaining_count )
      {
        element_index = 0;
        do
        {
          if ( *buffer_cursor_2 != -1
            && *buffer_cursor_2 != -2
            && (*buffer_cursor & 1) != 0
            && ((*buffer_cursor & 8) != 0 || (int64_result = ((__int64 (           *)(_QWORD))GetFileType)(*buffer_cursor_2)) != 0) )
          {
            shifted_bits = *(_QWORD *)&dword_140404A6C[2 * (element_index >> 6) + 19065401];
            masked_bits = 9 * (element_index & 0x3F);
            *(_QWORD *)(shifted_bits + 8 * masked_bits + 40) = *buffer_cursor_2;
            LOBYTE(int64_result) = *buffer_cursor;
            *(_BYTE *)(shifted_bits + 8 * masked_bits + 56) = *buffer_cursor;
          }
          ++element_index;
          ++buffer_cursor;
          ++buffer_cursor_2;
          --remaining_count;
        }
        while ( remaining_count );
      }
    }
  }
  return int64_result;
}

// 14026E2A0: invalid function type 'void (__stdcall *GetStartupInfoW)(LPSTARTUPINFOW lpStartupInfo)' has been ignored
// 14026E180: invalid function type 'DWORD (__stdcall *GetFileType)(HANDLE hFile)' has been ignored

//----- (0000000140250448) ----------------------------------------------------
__int64 initialize_stdio_handles_nolock()
{
  int element_index;
  __int64 record_byte_offset;
  __int64 masked_bits;
  __int64 scaled_index;
  __int64 shifted_bits;
  __int64 loaded_word;
  __int64 result;
  bool comparison_result;
  __int64 selection_code;
  __int64 int64_result;
  __int64 saved_int64_result;

  element_index = 0;
  record_byte_offset = 0;
  do
  {
    masked_bits = element_index & 0x3F;
    scaled_index = 9 * masked_bits;
    shifted_bits = *(_QWORD *)&dword_140404A6C[2 * ((__int64)element_index >> 6) + 19065401];
    loaded_word = *(_QWORD *)(shifted_bits + 72 * masked_bits + 40);
    comparison_result = loaded_word == -2;
    result = loaded_word + 2;
    if ( comparison_result || result == 1 )
    {
      *(_BYTE *)(shifted_bits + 72 * masked_bits + 56) = -127;
      if ( element_index )
      {
        if ( element_index == 1 )
          selection_code = 4294967285LL;
        else
          selection_code = 4294967284LL;
      }
      else
      {
        selection_code = 4294967286LL;
      }
      int64_result = ((__int64 (           *)(__int64))GetStdHandle)(selection_code);
      saved_int64_result = int64_result;
      if ( (unsigned __int64)(int64_result + 1) <= 1 )
        result = 0;
      else
        result = ((__int64 (           *)(__int64))GetFileType)(int64_result);
      if ( (_DWORD)result )
      {
        *(_QWORD *)(shifted_bits + 8 * scaled_index + 40) = saved_int64_result;
        if ( (unsigned __int8)result == 2 )
        {
          *(_BYTE *)(shifted_bits + 8 * scaled_index + 56) |= 0x40u;
        }
        else if ( (unsigned __int8)result == 3 )
        {
          *(_BYTE *)(shifted_bits + 8 * scaled_index + 56) |= 8u;
        }
      }
      else
      {
        *(_BYTE *)(shifted_bits + 8 * scaled_index + 56) |= 0x40u;
        *(_QWORD *)(shifted_bits + 8 * scaled_index + 40) = -2;
        result = g_144CBE6B0;
        if ( g_144CBE6B0 )
        {
          result = *(_QWORD *)(record_byte_offset + g_144CBE6B0);
          *(_DWORD *)(result + 24) = -2;
        }
      }
    }
    else
    {
      *(_BYTE *)(shifted_bits + 72 * masked_bits + 56) |= 0x80u;
    }
    ++element_index;
    record_byte_offset += 8;
  }
  while ( element_index != 3 );
  return result;
}

// 14026E188: invalid function type 'HANDLE (__stdcall *GetStdHandle)(DWORD nStdHandle)' has been ignored
// 14026E180: invalid function type 'DWORD (__stdcall *GetFileType)(HANDLE hFile)' has been ignored

//----- (0000000140250554) ----------------------------------------------------
char sub_140250554()
{
  char unused_written_slot;

  crt_lock(7);
  unused_written_slot = 0;
  if ( !(unsigned int)sub_140260FC0(0) )
  {
    initialize_inherited_file_handles_nolock();
    initialize_stdio_handles_nolock();
    unused_written_slot = 1;
  }
  crt_unlock(7);
  return unused_written_slot;
}

//----- (0000000140250590) ----------------------------------------------------
char sub_140250590()
{
  unsigned __int64 i;
  char *loaded_record_pointer;

  for ( i = 0; i < 256; i += 2LL )
  {
    loaded_record_pointer = *(char **)&dword_140404A6C[i + 19065401];
    if ( loaded_record_pointer )
    {
      sub_140260F70(loaded_record_pointer);
      *(_QWORD *)&dword_140404A6C[i + 19065401] = 0;
    }
  }
  return 1;
}

//----- (00000001402505E8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1033(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (0000000140250604) ----------------------------------------------------
__int64 *           sub_140250604(__int64 *a1)
{
  __int64 *or_allocate_unused_stream_nolock_result;
  __int64 loaded_word;
  __int64 callee_output_word;

  *a1 = 0;
  crt_lock(8);
  or_allocate_unused_stream_nolock_result = find_or_allocate_unused_stream_nolock(&callee_output_word);
  loaded_word = *or_allocate_unused_stream_nolock_result;
  *a1 = *or_allocate_unused_stream_nolock_result;
  if ( loaded_word )
  {
    *(_DWORD *)(loaded_word + 16) = 0;
    *(_QWORD *)(loaded_word + 40) = 0;
    *(_QWORD *)loaded_word = 0;
    *(_QWORD *)(loaded_word + 8) = 0;
    *(_DWORD *)(loaded_word + 24) = -1;
  }
  crt_unlock(8);
  return a1;
}

//----- (000000014025065C) ----------------------------------------------------
__int64            sub_14025065C(__int64 a1)
{
  *(_DWORD *)(a1 + 24) = -1;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 20), 0);
}

//----- (000000014025068C) ----------------------------------------------------
__int64 *           find_or_allocate_unused_stream_nolock(__int64 *a1)
{
  __int64 *allocated_buffer;
  __int64 scaled_index;
  __int64 loaded_word;
  signed __int32 interlockedcompareexchange_result;
  signed __int32 saved_interlockedcompareexchange_result;

  allocated_buffer = (__int64 *)(g_144CBE6B0 + 24LL);
  scaled_index = g_144CBE6B0 + 24LL + 8 * ((int)g_144CBE6A8 - 3LL);
  while ( allocated_buffer != (__int64 *)scaled_index )
  {
    loaded_word = *allocated_buffer;
    if ( !*allocated_buffer )
    {
      *allocated_buffer = sr_directory_calloc(1, 88);
      free_base(nullptr);
      if ( *allocated_buffer )
      {
        *(_DWORD *)(*allocated_buffer + 24) = -1;
        _acrt_InitializeCriticalSectionEx(*allocated_buffer + 48, 0xFA0u, 0);
        loaded_word = *allocated_buffer;
        _InterlockedOr((volatile signed __int32 *)(*allocated_buffer + 20), 0x2000u);
        crt_lock_file(loaded_word);
LABEL_12:
        *a1 = loaded_word;
        return a1;
      }
      break;
    }
    if ( (*(_DWORD *)(loaded_word + 20) & 0x2000) == 0 )
    {
      crt_lock_file(*allocated_buffer);
      _m_prefetchw((     void *)(loaded_word + 20));
      interlockedcompareexchange_result = *(_DWORD *)(loaded_word + 20);
      do
      {
        saved_interlockedcompareexchange_result = interlockedcompareexchange_result;
        interlockedcompareexchange_result = _InterlockedCompareExchange((volatile signed __int32 *)(loaded_word + 20), interlockedcompareexchange_result | 0x2000, interlockedcompareexchange_result);
      }
      while ( saved_interlockedcompareexchange_result != interlockedcompareexchange_result );
      if ( (interlockedcompareexchange_result & 0x2000) == 0 )
        goto LABEL_12;
      crt_unlock_file(loaded_word);
    }
    ++allocated_buffer;
  }
  *a1 = 0;
  return a1;
}

//----- (0000000140250780) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1034(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (00000001402507BC) ----------------------------------------------------
__int64            sub_1402507BC(__int64 a1, char *a2)
{
  char *text_cursor;
  char i;
  _BYTE *running_total;
  char selection_flag;
  char selection_flag_2;
  char selection_flag_3;
  char selection_flag_4;
  char selection_flag_5;
  int scaled_index;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  int integer_difference_4;
  int integer_difference_5;
  int loaded_word;
  int integer_difference_6;
  int integer_difference_7;
  int integer_difference_8;
  int integer_difference_9;
  int integer_difference_10;
  _QWORD *saved_running_total;
  bool comparison_result;
  _BYTE *j;
  __int64 selection_code;
  _BYTE *k;

  text_cursor = a2;
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 4) = g_144CBF180;
  for ( i = *a2; i == 32; i = *text_cursor )
    ++text_cursor;
  if ( i == 97 )
  {
    *(_DWORD *)a1 = 265;
LABEL_10:
    *(_DWORD *)(a1 + 4) = 2;
    goto LABEL_11;
  }
  if ( i != 114 )
  {
    if ( i != 119 )
      goto LABEL_81;
    *(_DWORD *)a1 = 769;
    goto LABEL_10;
  }
  *(_DWORD *)(a1 + 4) = 1;
LABEL_11:
  running_total = text_cursor + 1;
  selection_flag = 0;
  selection_flag_2 = 0;
  selection_flag_3 = 0;
  selection_flag_4 = 0;
  selection_flag_5 = 1;
  while ( *running_total )
  {
    scaled_index = (char)*running_total;
    if ( scaled_index > 83 )
    {
      integer_difference_6 = scaled_index - 84;
      if ( !integer_difference_6 )
      {
        if ( (*(_DWORD *)a1 & 0x1000) == 0 )
        {
          loaded_word = *(_DWORD *)a1 | 0x1000;
          goto LABEL_53;
        }
        goto LABEL_51;
      }
      integer_difference_7 = integer_difference_6 - 14;
      if ( !integer_difference_7 )
      {
        if ( (*(_DWORD *)a1 & 0xC000) == 0 )
        {
          loaded_word = *(_DWORD *)a1 | 0x8000;
          goto LABEL_53;
        }
        goto LABEL_51;
      }
      integer_difference_8 = integer_difference_7 - 1;
      if ( integer_difference_8 )
      {
        integer_difference_9 = integer_difference_8 - 11;
        if ( integer_difference_9 )
        {
          integer_difference_10 = integer_difference_9 - 6;
          if ( integer_difference_10 )
          {
            if ( integer_difference_10 != 4 )
              goto LABEL_81;
            if ( (*(_DWORD *)a1 & 0x200) != 0 )
            {
              loaded_word = *(_DWORD *)a1 | 0x400;
              goto LABEL_53;
            }
          }
          else if ( (*(_DWORD *)a1 & 0xC000) == 0 )
          {
            loaded_word = *(_DWORD *)a1 | 0x4000;
LABEL_53:
            *(_DWORD *)a1 = loaded_word;
            goto LABEL_54;
          }
          goto LABEL_51;
        }
        if ( selection_flag )
          goto LABEL_51;
        *(_DWORD *)(a1 + 4) &= ~0x800u;
      }
      else
      {
        if ( selection_flag )
          goto LABEL_51;
        *(_DWORD *)(a1 + 4) |= 0x800u;
      }
      selection_flag = 1;
      selection_flag_5 = 1;
    }
    else
    {
      if ( scaled_index == 83 )
      {
        if ( selection_flag_3 )
          goto LABEL_51;
        *(_DWORD *)a1 |= 0x20u;
LABEL_32:
        selection_flag_3 = 1;
        selection_flag_5 = 1;
        goto LABEL_55;
      }
      integer_difference = scaled_index - 32;
      if ( integer_difference )
      {
        integer_difference_2 = integer_difference - 11;
        if ( !integer_difference_2 )
        {
          if ( !selection_flag_2 )
          {
            selection_flag_2 = 1;
            if ( (*(_DWORD *)a1 & 2) == 0 )
            {
              *(_DWORD *)a1 = *(_DWORD *)a1 & 0xFFFFFFFC | 2;
              *(_DWORD *)(a1 + 4) = *(_DWORD *)(a1 + 4) & 0xFFFFFFF8 | 4;
              goto LABEL_54;
            }
          }
          goto LABEL_51;
        }
        integer_difference_3 = integer_difference_2 - 1;
        if ( !integer_difference_3 )
        {
          selection_flag_4 = 1;
LABEL_51:
          selection_flag_5 = 0;
          goto LABEL_55;
        }
        integer_difference_4 = integer_difference_3 - 24;
        if ( !integer_difference_4 )
        {
          if ( (*(_DWORD *)a1 & 0x40) == 0 )
          {
            loaded_word = *(_DWORD *)a1 | 0x40;
            goto LABEL_53;
          }
          goto LABEL_51;
        }
        integer_difference_5 = integer_difference_4 - 10;
        if ( !integer_difference_5 )
        {
          *(_DWORD *)a1 |= 0x80u;
LABEL_54:
          selection_flag_5 = 1;
          goto LABEL_55;
        }
        if ( integer_difference_5 != 4 )
          goto LABEL_81;
        if ( selection_flag_3 )
          goto LABEL_51;
        *(_DWORD *)a1 |= 0x10u;
        goto LABEL_32;
      }
    }
LABEL_55:
    running_total += selection_flag_5 != 0;
    if ( !selection_flag_5 )
      break;
  }
  saved_running_total = running_total + 1;
  if ( !selection_flag_4 )
    saved_running_total = running_total;
  while ( *(_BYTE *)saved_running_total == 32 )
    saved_running_total = (_QWORD *)((char *)saved_running_total + 1);
  if ( !selection_flag_4 )
  {
    comparison_result = *(_BYTE *)saved_running_total == 0;
    goto LABEL_63;
  }
  if ( (unsigned int)strncmp_sr((const char *)(uintptr_t)(saved_running_total), (const char *)(uintptr_t)((__int64)"ccs"), 3u) )
    goto LABEL_81;
  for ( j = (char *)saved_running_total + 3; *j == 32; ++j )
    ;
  if ( *j != 61 )
    goto LABEL_81;
  do
    ++j;
  while ( *j == 32 );
  selection_code = 5;
  if ( !(unsigned int)strnicmp_sr(j, "UTF-8", 5) )
  {
    *(_DWORD *)a1 |= 0x40000u;
    goto LABEL_77;
  }
  selection_code = 8;
  if ( !(unsigned int)strnicmp_sr(j, "UTF-16LEUNICODE", 8) )
  {
    *(_DWORD *)a1 |= 0x20000u;
    goto LABEL_77;
  }
  selection_code = 7;
  if ( (unsigned int)strnicmp_sr(j, "UNICODE", 7) )
    goto LABEL_81;
  *(_DWORD *)a1 |= 0x10000u;
LABEL_77:
  for ( k = &j[selection_code]; *k == 32; ++k )
    ;
  comparison_result = *k == 0;
LABEL_63:
  if ( !comparison_result )
  {
LABEL_81:
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return a1;
  }
  *(_BYTE *)(a1 + 8) = 1;
  return a1;
}

//----- (0000000140250A7C) ----------------------------------------------------
__int64            __acrt_stdio_parse_mode__wchar_t(__int64 a1, __int16 *a2)
{
  __int16 *buffer_cursor;
  __int16 i;
  _WORD *comparison_result;
  char selection_flag;
  char selection_flag_2;
  char selection_flag_3;
  char selection_flag_4;
  char selection_flag_5;
  __int64 selection_code;
  unsigned int scaled_index;
  unsigned int integer_difference;
  unsigned int integer_difference_2;
  unsigned int integer_difference_3;
  unsigned int integer_difference_4;
  unsigned int integer_difference_5;
  int loaded_word;
  unsigned int integer_difference_6;
  unsigned int integer_difference_7;
  unsigned int integer_difference_8;
  unsigned int integer_difference_9;
  unsigned int integer_difference_10;
  _WORD *buffer_cursor_2;
  bool comparison_result_2;
  _WORD *j;
  _WORD *k;

  buffer_cursor = a2;
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 4) = g_144CBF180;
  for ( i = *a2; i == 32; i = *buffer_cursor )
    ++buffer_cursor;
  if ( i == 97 )
  {
    *(_DWORD *)a1 = 265;
LABEL_10:
    *(_DWORD *)(a1 + 4) = 2;
    goto LABEL_11;
  }
  if ( i != 114 )
  {
    if ( i != 119 )
      goto LABEL_81;
    *(_DWORD *)a1 = 769;
    goto LABEL_10;
  }
  *(_DWORD *)(a1 + 4) = 1;
LABEL_11:
  comparison_result = buffer_cursor + 1;
  selection_flag = 1;
  selection_flag_2 = 0;
  selection_flag_3 = 0;
  selection_flag_4 = 0;
  selection_flag_5 = 0;
  selection_code = 5;
  while ( *comparison_result )
  {
    scaled_index = (unsigned __int16)*comparison_result;
    if ( scaled_index > 0x53 )
    {
      integer_difference_6 = scaled_index - 84;
      if ( !integer_difference_6 )
      {
        if ( (*(_DWORD *)a1 & 0x1000) == 0 )
        {
          loaded_word = *(_DWORD *)a1 | 0x1000;
          goto LABEL_53;
        }
        goto LABEL_51;
      }
      integer_difference_7 = integer_difference_6 - 14;
      if ( !integer_difference_7 )
      {
        if ( (*(_DWORD *)a1 & 0xC000) == 0 )
        {
          loaded_word = *(_DWORD *)a1 | 0x8000;
          goto LABEL_53;
        }
        goto LABEL_51;
      }
      integer_difference_8 = integer_difference_7 - 1;
      if ( integer_difference_8 )
      {
        integer_difference_9 = integer_difference_8 - 11;
        if ( integer_difference_9 )
        {
          integer_difference_10 = integer_difference_9 - 6;
          if ( integer_difference_10 )
          {
            if ( integer_difference_10 != 4 )
              goto LABEL_81;
            if ( (*(_DWORD *)a1 & 0x200) != 0 )
            {
              loaded_word = *(_DWORD *)a1 | 0x400;
              goto LABEL_53;
            }
          }
          else if ( (*(_DWORD *)a1 & 0xC000) == 0 )
          {
            loaded_word = *(_DWORD *)a1 | 0x4000;
LABEL_53:
            *(_DWORD *)a1 = loaded_word;
            goto LABEL_54;
          }
          goto LABEL_51;
        }
        if ( selection_flag_2 )
          goto LABEL_51;
        *(_DWORD *)(a1 + 4) &= ~0x800u;
      }
      else
      {
        if ( selection_flag_2 )
          goto LABEL_51;
        *(_DWORD *)(a1 + 4) |= 0x800u;
      }
      selection_flag_2 = 1;
      selection_flag = 1;
    }
    else
    {
      if ( scaled_index == 83 )
      {
        if ( selection_flag_4 )
          goto LABEL_51;
        *(_DWORD *)a1 |= 0x20u;
LABEL_32:
        selection_flag_4 = 1;
        selection_flag = 1;
        goto LABEL_55;
      }
      integer_difference = scaled_index - 32;
      if ( integer_difference )
      {
        integer_difference_2 = integer_difference - 11;
        if ( !integer_difference_2 )
        {
          if ( !selection_flag_3 )
          {
            selection_flag_3 = 1;
            if ( (*(_DWORD *)a1 & 2) == 0 )
            {
              *(_DWORD *)a1 = *(_DWORD *)a1 & 0xFFFFFFFC | 2;
              *(_DWORD *)(a1 + 4) = *(_DWORD *)(a1 + 4) & 0xFFFFFFF8 | 4;
              goto LABEL_54;
            }
          }
          goto LABEL_51;
        }
        integer_difference_3 = integer_difference_2 - 1;
        if ( !integer_difference_3 )
        {
          selection_flag_5 = 1;
LABEL_51:
          selection_flag = 0;
          goto LABEL_55;
        }
        integer_difference_4 = integer_difference_3 - 24;
        if ( !integer_difference_4 )
        {
          if ( (*(_DWORD *)a1 & 0x40) == 0 )
          {
            loaded_word = *(_DWORD *)a1 | 0x40;
            goto LABEL_53;
          }
          goto LABEL_51;
        }
        integer_difference_5 = integer_difference_4 - 10;
        if ( !integer_difference_5 )
        {
          *(_DWORD *)a1 |= 0x80u;
LABEL_54:
          selection_flag = 1;
          goto LABEL_55;
        }
        if ( integer_difference_5 != 4 )
          goto LABEL_81;
        if ( selection_flag_4 )
          goto LABEL_51;
        *(_DWORD *)a1 |= 0x10u;
        goto LABEL_32;
      }
    }
LABEL_55:
    comparison_result = (_WORD *)((char *)comparison_result + (selection_flag != 0 ? 2 : 0));
    if ( !selection_flag )
      break;
  }
  buffer_cursor_2 = comparison_result + 1;
  if ( !selection_flag_5 )
    buffer_cursor_2 = comparison_result;
  while ( *buffer_cursor_2 == 32 )
    ++buffer_cursor_2;
  if ( !selection_flag_5 )
  {
    comparison_result_2 = *buffer_cursor_2 == 0;
    goto LABEL_63;
  }
  if ( (unsigned int)wcsncmp_sr(buffer_cursor_2, L"ccs", 3) )
    goto LABEL_81;
  for ( j = buffer_cursor_2 + 3; *j == 32; ++j )
    ;
  if ( *j != 61 )
    goto LABEL_81;
  do
    ++j;
  while ( *j == 32 );
  if ( !(unsigned int)wcsnicmp_sr(j, L"UTF-8", 5) )
  {
    *(_DWORD *)a1 |= 0x40000u;
    goto LABEL_77;
  }
  if ( !(unsigned int)wcsnicmp_sr(j, L"UTF-16LEUNICODE", 8) )
  {
    *(_DWORD *)a1 |= 0x20000u;
    selection_code = 8;
    goto LABEL_77;
  }
  if ( (unsigned int)wcsnicmp_sr(j, L"UNICODE", 7) )
    goto LABEL_81;
  *(_DWORD *)a1 |= 0x10000u;
  selection_code = 7;
LABEL_77:
  for ( k = &j[selection_code]; *k == 32; ++k )
    ;
  comparison_result_2 = *k == 0;
LABEL_63:
  if ( !comparison_result_2 )
  {
LABEL_81:
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return a1;
  }
  *(_BYTE *)(a1 + 8) = 1;
  return a1;
}

//----- (0000000140250D7C) ----------------------------------------------------
__int64            sub_140250D7C(char *FileName, char *a2, int a3, __int64 a4)
{
  int cached_filename;
  __int64 packed_word_bits;
  __int64 loaded_word;
  int cached_filehandle;
  int FileHandle;
  int OpenFlag[2];
  int unused_written_slot;
  _BYTE scratch_buffer[32];

  cached_filename = (int)FileName;
  packed_word_bits = sub_1402507BC((__int64)scratch_buffer, a2);
  loaded_word = *(_QWORD *)packed_word_bits;
  LODWORD(packed_word_bits) = *(_DWORD *)(packed_word_bits + 8);
  *(_QWORD *)OpenFlag = loaded_word;
  unused_written_slot = packed_word_bits;
  if ( !(_BYTE)packed_word_bits || (unsigned int)sopen_s((unsigned int)&FileHandle, cached_filename, OpenFlag[0], a3, 384) )
    return 0;
  ++g_144CBE6B8;
  _InterlockedOr((volatile signed __int32 *)(a4 + 20), OpenFlag[1]);
  cached_filehandle = FileHandle;
  *(_DWORD *)(a4 + 16) = 0;
  *(_QWORD *)(a4 + 40) = 0;
  *(_QWORD *)(a4 + 8) = 0;
  *(_QWORD *)a4 = 0;
  *(_DWORD *)(a4 + 24) = cached_filehandle;
  return a4;
}

//----- (0000000140250E14) ----------------------------------------------------
__int64            sub_140250E14(sr_anon_49 *FileName, __int16 *a2, int a3, __int64 a4)
{
  int cached_filename;
  __int64 acrt_stdio_parse_mode_wchar_t_result;
  __int64 loaded_word;
  int cached_filehandle;
  int FileHandle;
  int OpenFlag[2];
  int unused_written_slot;
  _BYTE scratch_buffer[32];

  cached_filename = (int)FileName;
  acrt_stdio_parse_mode_wchar_t_result = __acrt_stdio_parse_mode__wchar_t((__int64)scratch_buffer, a2);
  loaded_word = *(_QWORD *)acrt_stdio_parse_mode_wchar_t_result;
  LODWORD(acrt_stdio_parse_mode_wchar_t_result) = *(_DWORD *)(acrt_stdio_parse_mode_wchar_t_result + 8);
  *(_QWORD *)OpenFlag = loaded_word;
  unused_written_slot = acrt_stdio_parse_mode_wchar_t_result;
  if ( !(_BYTE)acrt_stdio_parse_mode_wchar_t_result || (unsigned int)wsopen_s((unsigned int)&FileHandle, cached_filename, OpenFlag[0], a3, 384) )
    return 0;
  ++g_144CBE6B8;
  _InterlockedOr((volatile signed __int32 *)(a4 + 20), OpenFlag[1]);
  cached_filehandle = FileHandle;
  *(_DWORD *)(a4 + 16) = 0;
  *(_QWORD *)(a4 + 40) = 0;
  *(_QWORD *)(a4 + 8) = 0;
  *(_QWORD *)a4 = 0;
  *(_DWORD *)(a4 + 24) = cached_filehandle;
  return a4;
}

__int64 sub_140251044(char *filename,char *mode,int sharing,__int64 stream)
{
  sr_file_mode decoded;
  int descriptor;
  sr_file_mode *parsed=(sr_file_mode *)(uintptr_t)sub_1402507BC((__int64)(uintptr_t)&decoded,mode);
  unsigned int opening=parsed->opening, stream_flags=parsed->stream;
  unsigned char accepted=parsed->accepted;
  if (accepted && !(unsigned int)sopen_s((unsigned int *)&descriptor,(_BYTE *)filename,opening,sharing,384))
  {
    ++g_144CBE6B8;
    _InterlockedOr((volatile LONG *)(stream+20),(LONG)stream_flags);
    *(_DWORD *)(stream+16)=0;
    *(_QWORD *)(stream+40)=0;
    *(_QWORD *)(stream+8)=0;
    *(_QWORD *)stream=0;
    *(_DWORD *)(stream+24)=descriptor;
    return stream;
  }
  return 0;
}

//----- (00000001402510E0) ----------------------------------------------------
__int64            wopenfile(sr_anon_49 *FileName, __int16 *a2, int a3, __int64 a4)
{
  int cached_filename;
  __int64 acrt_stdio_parse_mode_wchar_t_result;
  __int64 unused_written_slot;
  int cached_filehandle;
  int OpenFlag[2];
  __int64 callee_output_word;
  int FileHandle;

  cached_filename = (int)FileName;
  acrt_stdio_parse_mode_wchar_t_result = __acrt_stdio_parse_mode__wchar_t((__int64)&callee_output_word, a2);
  unused_written_slot = 0;
  *(_QWORD *)OpenFlag = *(_QWORD *)acrt_stdio_parse_mode_wchar_t_result;
  if ( (unsigned __int8)*(_DWORD *)(acrt_stdio_parse_mode_wchar_t_result + 8)
    && !(unsigned int)wsopen_s((unsigned int)&FileHandle, cached_filename, OpenFlag[0], a3, 384) )
  {
    ++g_144CBE6B8;
    _InterlockedOr((volatile signed __int32 *)(a4 + 20), OpenFlag[1]);
    cached_filehandle = FileHandle;
    *(_DWORD *)(a4 + 16) = 0;
    *(_QWORD *)(a4 + 40) = 0;
    *(_QWORD *)(a4 + 8) = 0;
    *(_QWORD *)a4 = 0;
    unused_written_slot = a4;
    *(_DWORD *)(a4 + 24) = cached_filehandle;
  }
  return unused_written_slot;
}

//----- (000000014025117C) ----------------------------------------------------
__int64            sub_14025117C(__int64 a1, unsigned int *a2, unsigned int **a3, unsigned int *a4)
{
  unsigned int unused_written_slot;

  sub_140261068(*a2);
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)**a3 >> 6) + 19065401] + 72LL * (**a3 & 0x3F) + 56) & 1) != 0 )
  {
    unused_written_slot = close_nolock(**a3);
  }
  else
  {
    *errno_sr() = 9;
    unused_written_slot = -1;
  }
  sub_140261150(*a4);
  return unused_written_slot;
}

//----- (00000001402511F0) ----------------------------------------------------
__int64            sub_1402511F0(unsigned int a1, unsigned int **a2)
{
  __int64 callee_output_word;
  unsigned int input_value;
  unsigned int input_value_2;

  input_value = a1;
  input_value_2 = a1;
  return sub_14025117C((__int64)&callee_output_word, &input_value_2, a2, &input_value);
}

//----- (0000000140251230) ----------------------------------------------------
__int64            _lambda_628dfdc04ba53c8bfc02c9951375f3f5___operator_call(int **a1)
{
  __int64 scaled_index;

  scaled_index = **a1;
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (scaled_index >> 6) + 19065401] + 72 * (scaled_index & 0x3F) + 56) & 1) != 0 )
    return close_nolock(scaled_index);
  *errno_sr() = 9;
  return 0xFFFFFFFFLL;
}

//----- (000000014025128C) ----------------------------------------------------
__int64            sub_14025128C(unsigned int FileHandle)
{
  __int64 osfhandle;
  __int64 osfhandle_result;

  if ( ((__int64 (*)(void))get_osfhandle)() == -1 )
    return 0;
  if ( FileHandle == 1 && (*(_BYTE *)(g_144CBF350 + 200LL) & 1) != 0
    || FileHandle == 2 && (*(_BYTE *)(g_144CBF350 + 128LL) & 1) != 0 )
  {
    osfhandle = get_osfhandle(2);
    if ( get_osfhandle(1) == osfhandle )
      return 0;
  }
  osfhandle_result = get_osfhandle(FileHandle);
  if ( (unsigned int)((__int64 (           *)(__int64))CloseHandle)(osfhandle_result) )
    return 0;
  else
    return ((__int64 (*)(void))GetLastError)();
}

// 14026E1B8: invalid function type 'BOOL (__stdcall *CloseHandle)(HANDLE hObject)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014025130C) ----------------------------------------------------
__int64            sub_14025130C(int a1)
{
  unsigned int *state_address;
  int input_value;
  char callee_output_word;
  int input_value_2;
  int input_value_3;

  input_value = a1;
  if ( a1 == -2 )
  {
    *(_DWORD *)crt_doserrno() = 0;
    *errno_sr() = 9;
  }
  else
  {
    if ( a1 >= 0
      && a1 < g_144CBF750
      && (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)a1 >> 6) + 19065401] + 72LL * (a1 & 0x3F) + 56) & 1) != 0 )
    {
      input_value_2 = a1;
      input_value_3 = a1;
      state_address = (unsigned int *)&input_value;
      return sub_14025117C((__int64)&callee_output_word, (unsigned int *)&input_value_3, &state_address, (unsigned int *)&input_value_2);
    }
    *(_DWORD *)crt_doserrno() = 0;
    *errno_sr() = 9;
    crt_invalid_parameter_noinfo();
  }
  return 0xFFFFFFFFLL;
}

//----- (00000001402513B0) ----------------------------------------------------
__int64            close_nolock(unsigned int a1)
{
  __int64 input_value;
  int int64_result;
  __int64 osfhandle;
  __int64 osfhandle_result;

  input_value = (int)a1;
  if ( get_osfhandle(a1) == -1
    || ((_DWORD)input_value == 1 && (*(_BYTE *)(g_144CBF350 + 200LL) & 1) != 0
     || (_DWORD)input_value == 2 && (*(_BYTE *)(g_144CBF350 + 128LL) & 1) != 0)
    && (osfhandle = get_osfhandle(2), get_osfhandle(1) == osfhandle)
    || (osfhandle_result = get_osfhandle((unsigned int)input_value), (unsigned int)((__int64 (           *)(__int64))CloseHandle)(osfhandle_result)) )
  {
    int64_result = 0;
  }
  else
  {
    int64_result = ((__int64 (*)(void))GetLastError)();
  }
  free_osfhnd(input_value);
  *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (input_value >> 6) + 19065401] + 72 * (input_value & 0x3F) + 56) = 0;
  if ( !int64_result )
    return 0;
  crt_errno_map_os_error(int64_result);
  return 0xFFFFFFFFLL;
}

// 14026E1B8: invalid function type 'BOOL (__stdcall *CloseHandle)(HANDLE hObject)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (0000000140251470) ----------------------------------------------------
int         fileno(FILE *Stream)
{
  if ( Stream )
    return *((_DWORD *)Stream + 6);
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return -1;
}

//----- (0000000140251498) ----------------------------------------------------
__int64            sub_140251498(FILE *Stream)
{
  void *loaded_record_pointer;
  int fileno_result;
  int read_result;
  __int64 fileno_result_2;
  _BYTE *fileno_result_3;

  if ( !Stream )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
  if ( (*((_DWORD *)Stream + 5) & 0x2000) == 0 || (*((_DWORD *)Stream + 5) & 0x1000) != 0 )
    return 0xFFFFFFFFLL;
  if ( (*((_DWORD *)Stream + 5) & 2) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)Stream + 5, 0x10u);
    return 0xFFFFFFFFLL;
  }
  _InterlockedOr((volatile signed __int32 *)Stream + 5, 1u);
  if ( (*((_DWORD *)Stream + 5) & 0x4C0) == 0 )
    sub_140253EF8((__int64)Stream);
  loaded_record_pointer = *((void **)Stream + 1);
  *(_QWORD *)Stream = (uint64)(uintptr_t)(loaded_record_pointer);
  fileno_result = fileno(Stream);
  read_result = read(fileno_result, loaded_record_pointer, *((_DWORD *)Stream + 8));
  *((_DWORD *)Stream + 4) = read_result;
  if ( (unsigned int)(read_result + 1) <= 1 )
  {
    _InterlockedOr((volatile signed __int32 *)Stream + 5, read_result != 0 ? 16 : 8);
    *((_DWORD *)Stream + 4) = 0;
    return 0xFFFFFFFFLL;
  }
  if ( (*((_DWORD *)Stream + 5) & 6) == 0 )
  {
    if ( fileno(Stream) == -1 || fileno(Stream) == -2 )
    {
      fileno_result_3 = &unk_1403022C0;
    }
    else
    {
      fileno_result_2 = (__int64)fileno(Stream) >> 6;
      fileno_result_3 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * fileno_result_2 + 19065401] + 72LL * (fileno(Stream) & 0x3F));
    }
    if ( (fileno_result_3[56] & 0x82) == 0x82 )
      _InterlockedOr((volatile signed __int32 *)Stream + 5, 0x20u);
  }
  if ( *((_DWORD *)Stream + 8) == 512 && (*((_DWORD *)Stream + 5) & 0x40) != 0 && (*((_DWORD *)Stream + 5) & 0x100) == 0 )
    *((_DWORD *)Stream + 8) = 4096;
  --*((_DWORD *)Stream + 4);
  return *(unsigned __int8 *)(*(_QWORD *)Stream)++;
}

//----- (00000001402515F4) ----------------------------------------------------
__int64            _acrt_stdio_refill_and_read_wide_nolock_0(FILE *Stream)
{
  int loaded_word;
  unsigned __int8 loaded_word_2;
  void *loaded_record_pointer;
  int fileno_result;
  int read_result;
  __int64 fileno_result_2;
  _BYTE *fileno_result_3;
  unsigned __int8 *loaded_record_pointer_2;
  __int16 loaded_word_3;
  unsigned __int16 unused_written_slot;

  if ( !Stream )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFF;
  }
  if ( (*((_DWORD *)Stream + 5) & 0x2000) == 0 || (*((_DWORD *)Stream + 5) & 0x1000) != 0 )
    return 0xFFFF;
  if ( (*((_DWORD *)Stream + 5) & 2) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)Stream + 5, 0x10u);
    return 0xFFFF;
  }
  _InterlockedOr((volatile signed __int32 *)Stream + 5, 1u);
  if ( (*((_DWORD *)Stream + 5) & 0x4C0) == 0 )
    sub_140253EF8((__int64)Stream);
  loaded_word = *((_DWORD *)Stream + 4);
  if ( loaded_word == 1 )
    loaded_word_2 = **(_BYTE **)Stream;
  else
    loaded_word_2 = 0;
  loaded_record_pointer = *((void **)Stream + 1);
  *(_QWORD *)Stream = (uint64)(uintptr_t)(loaded_record_pointer);
  fileno_result = fileno(Stream);
  read_result = read(fileno_result, loaded_record_pointer, *((_DWORD *)Stream + 8));
  *((_DWORD *)Stream + 4) = read_result;
  if ( (unsigned int)(read_result + 1) <= 2 )
  {
    _InterlockedOr((volatile signed __int32 *)Stream + 5, read_result != 0 ? 16 : 8);
    *((_DWORD *)Stream + 4) = 0;
    return 0xFFFF;
  }
  if ( (*((_DWORD *)Stream + 5) & 6) == 0 )
  {
    if ( fileno(Stream) == -1 || fileno(Stream) == -2 )
    {
      fileno_result_3 = &unk_1403022C0;
    }
    else
    {
      fileno_result_2 = (__int64)fileno(Stream) >> 6;
      fileno_result_3 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * fileno_result_2 + 19065401] + 72LL * (fileno(Stream) & 0x3F));
    }
    if ( (fileno_result_3[56] & 0x82) == 0x82 )
      _InterlockedOr((volatile signed __int32 *)Stream + 5, 0x20u);
  }
  if ( *((_DWORD *)Stream + 8) == 512 && (*((_DWORD *)Stream + 5) & 0x40) != 0 && (*((_DWORD *)Stream + 5) & 0x100) == 0 )
    *((_DWORD *)Stream + 8) = 4096;
  loaded_record_pointer_2 = *(unsigned __int8 **)Stream;
  if ( loaded_word == 1 )
  {
    loaded_word_3 = *loaded_record_pointer_2;
    --*((_DWORD *)Stream + 4);
    unused_written_slot = loaded_word_2 | (unsigned __int16)(loaded_word_3 << 8);
    ++*(_QWORD *)Stream;
  }
  else
  {
    unused_written_slot = *(_WORD *)loaded_record_pointer_2;
    *((_DWORD *)Stream + 4) -= 2;
    *(_QWORD *)Stream += 2LL;
  }
  return unused_written_slot;
}

//----- (0000000140251818) ----------------------------------------------------
__int64            sub_140251818(FILE *Stream)
{
  void *loaded_record_pointer;
  int fileno_result;
  int read_result;
  __int64 fileno_result_2;
  _BYTE *fileno_result_3;

  if ( !Stream )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return (unsigned int)-1;
  }
  if ( (*((_DWORD *)Stream + 5) & 0x2000) == 0 || (*((_DWORD *)Stream + 5) & 0x1000) != 0 )
    return (unsigned int)-1;
  if ( (*((_DWORD *)Stream + 5) & 2) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)Stream + 5, 0x10u);
    return (unsigned int)-1;
  }
  _InterlockedOr((volatile signed __int32 *)Stream + 5, 1u);
  if ( (*((_DWORD *)Stream + 5) & 0x4C0) == 0 )
    sub_140253EF8((__int64)Stream);
  loaded_record_pointer = *((void **)Stream + 1);
  *(_QWORD *)Stream = (uint64)(uintptr_t)(loaded_record_pointer);
  fileno_result = fileno(Stream);
  read_result = read(fileno_result, loaded_record_pointer, *((_DWORD *)Stream + 8));
  *((_DWORD *)Stream + 4) = read_result;
  if ( (unsigned int)(read_result + 1) <= 1 )
  {
    _InterlockedOr((volatile signed __int32 *)Stream + 5, read_result != 0 ? 16 : 8);
    *((_DWORD *)Stream + 4) = 0;
    return (unsigned int)-1;
  }
  if ( (*((_DWORD *)Stream + 5) & 6) == 0 )
  {
    if ( fileno(Stream) == -1 || fileno(Stream) == -2 )
    {
      fileno_result_3 = &unk_1403022C0;
    }
    else
    {
      fileno_result_2 = (__int64)fileno(Stream) >> 6;
      fileno_result_3 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * fileno_result_2 + 19065401] + 72LL * (fileno(Stream) & 0x3F));
    }
    if ( (fileno_result_3[56] & 0x82) == 0x82 )
      _InterlockedOr((volatile signed __int32 *)Stream + 5, 0x20u);
  }
  if ( *((_DWORD *)Stream + 8) == 512 && (*((_DWORD *)Stream + 5) & 0x40) != 0 && (*((_DWORD *)Stream + 5) & 0x100) == 0 )
    *((_DWORD *)Stream + 8) = 4096;
  --*((_DWORD *)Stream + 4);
  return *(unsigned __int8 *)(*(_QWORD *)Stream)++;
}

//----- (0000000140251984) ----------------------------------------------------
// attributes: thunk
__int64            _acrt_stdio_refill_and_read_wide_nolock(FILE *Stream)
{
  return _acrt_stdio_refill_and_read_wide_nolock_0(Stream);
}

//----- (000000014025198C) ----------------------------------------------------
__int64            common_flush_and_write_nolock__char(unsigned __int8 a1, __int64 a2)
{
  int fileno_result;
  bool stream_is_at_end_of_file_nolock_result;

  fileno_result = fileno((FILE *)a2);
  if ( (*(_DWORD *)(a2 + 20) & 6) == 0 )
  {
    *errno_sr() = 9;
LABEL_3:
    _InterlockedOr((volatile signed __int32 *)(a2 + 20), 0x10u);
    return 0xFFFFFFFFLL;
  }
  if ( (*(_DWORD *)(a2 + 20) & 0x1000) != 0 )
  {
    *errno_sr() = 34;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(a2 + 20) & 1) != 0 )
  {
    stream_is_at_end_of_file_nolock_result = stream_is_at_end_of_file_nolock(a2);
    *(_DWORD *)(a2 + 16) = 0;
    if ( !stream_is_at_end_of_file_nolock_result )
      goto LABEL_3;
    *(_QWORD *)a2 = *(_QWORD *)(a2 + 8);
    _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFFFE);
  }
  _InterlockedOr((volatile signed __int32 *)(a2 + 20), 2u);
  _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFFF7);
  *(_DWORD *)(a2 + 16) = 0;
  if ( (*(_DWORD *)(a2 + 20) & 0x4C0) == 0
    && ((char *)a2 != sub_14020B528(1u) && (char *)a2 != sub_14020B528(2u) || !isatty(fileno_result)) )
  {
    sub_140253EF8(a2);
  }
  if ( !sub_140251B60(a1, a2) )
    goto LABEL_3;
  return a1;
}

//----- (0000000140251A74) ----------------------------------------------------
__int64            common_flush_and_write_nolock__wchar_t(unsigned __int16 a1, __int64 a2)
{
  int fileno_result;
  bool stream_is_at_end_of_file_nolock_result;

  fileno_result = fileno((FILE *)a2);
  if ( (*(_DWORD *)(a2 + 20) & 6) == 0 )
  {
    *errno_sr() = 9;
LABEL_3:
    _InterlockedOr((volatile signed __int32 *)(a2 + 20), 0x10u);
    return 0xFFFF;
  }
  if ( (*(_DWORD *)(a2 + 20) & 0x1000) != 0 )
  {
    *errno_sr() = 34;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(a2 + 20) & 1) != 0 )
  {
    stream_is_at_end_of_file_nolock_result = stream_is_at_end_of_file_nolock(a2);
    *(_DWORD *)(a2 + 16) = 0;
    if ( !stream_is_at_end_of_file_nolock_result )
      goto LABEL_3;
    *(_QWORD *)a2 = *(_QWORD *)(a2 + 8);
    _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFFFE);
  }
  _InterlockedOr((volatile signed __int32 *)(a2 + 20), 2u);
  _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFFF7);
  *(_DWORD *)(a2 + 16) = 0;
  if ( (*(_DWORD *)(a2 + 20) & 0x4C0) == 0
    && ((char *)a2 != sub_14020B528(1u) && (char *)a2 != sub_14020B528(2u) || !isatty(fileno_result)) )
  {
    sub_140253EF8(a2);
  }
  if ( !sub_140251C44(a1, a2) )
    goto LABEL_3;
  return a1;
}

//----- (0000000140251B60) ----------------------------------------------------
bool            sub_140251B60(char a1, __int64 a2)
{
  int fileno_result;
  int write_result;
  char *loaded_record_pointer;
  signed int loaded_word;
  bool unused_written_slot;
  _BYTE *state_address;
  char Buf;

  Buf = a1;
  fileno_result = fileno((FILE *)a2);
  if ( (*(_DWORD *)(a2 + 20) & 0xC0) == 0 )
    return write(fileno_result, &Buf, 1u) == 1;
  write_result = 0;
  loaded_record_pointer = *(char **)(a2 + 8);
  loaded_word = *(_DWORD *)a2 - *(_DWORD *)(a2 + 8);
  *(_QWORD *)a2 = (uint64)(uintptr_t)(loaded_record_pointer + 1);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a2 + 32) - 1;
  if ( loaded_word <= 0 )
  {
    if ( (unsigned int)(fileno_result + 2) <= 1 )
      state_address = &unk_1403022C0;
    else
      state_address = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)fileno_result >> 6) + 19065401] + 72LL * (fileno_result & 0x3F));
    if ( (state_address[56] & 0x20) != 0 && lseeki64_sr(fileno_result, 0, 2) == -1 )
    {
      _InterlockedOr((volatile signed __int32 *)(a2 + 20), 0x10u);
      return 1;
    }
  }
  else
  {
    write_result = write(fileno_result, loaded_record_pointer, loaded_word);
  }
  unused_written_slot = write_result == loaded_word;
  **(_BYTE **)(a2 + 8) = Buf;
  return unused_written_slot;
}

//----- (0000000140251C44) ----------------------------------------------------
bool            sub_140251C44(__int16 a1, __int64 a2)
{
  int fileno_result;
  int write_result;
  char *loaded_record_pointer;
  signed int loaded_word;
  bool unused_written_slot;
  _BYTE *state_address;
  __int16 Buf;

  Buf = a1;
  fileno_result = fileno((FILE *)a2);
  if ( (*(_DWORD *)(a2 + 20) & 0xC0) == 0 )
    return write(fileno_result, &Buf, 2u) == 2;
  write_result = 0;
  loaded_record_pointer = *(char **)(a2 + 8);
  loaded_word = *(_DWORD *)a2 - *(_DWORD *)(a2 + 8);
  *(_QWORD *)a2 = (uint64)(uintptr_t)(loaded_record_pointer + 2);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a2 + 32) - 2;
  if ( loaded_word <= 0 )
  {
    if ( (unsigned int)(fileno_result + 2) <= 1 )
      state_address = &unk_1403022C0;
    else
      state_address = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)fileno_result >> 6) + 19065401] + 72LL * (fileno_result & 0x3F));
    if ( (state_address[56] & 0x20) != 0 && lseeki64_sr(fileno_result, 0, 2) == -1 )
    {
      _InterlockedOr((volatile signed __int32 *)(a2 + 20), 0x10u);
      return 1;
    }
  }
  else
  {
    write_result = write(fileno_result, loaded_record_pointer, loaded_word);
  }
  unused_written_slot = write_result == loaded_word;
  **(_WORD **)(a2 + 8) = Buf;
  return unused_written_slot;
}

//----- (0000000140251D2C) ----------------------------------------------------
bool            stream_is_at_end_of_file_nolock(__int64 a1)
{
  __int64 osfhandle;
  __int64 cached_osfhandle;
  __int64 FileSize;
  __int64 NewFilePointer;

  if ( (*(_DWORD *)(a1 + 20) & 8) != 0 )
    return 1;
  if ( (*(_DWORD *)(a1 + 20) & 0xC0) != 0 && *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) )
    return 0;
  osfhandle = get_osfhandle(*(unsigned int *)(a1 + 24));
  cached_osfhandle = osfhandle;
  if ( osfhandle == -1
    || !(unsigned int)((__int64 (           *)(__int64, _QWORD, __int64 *, __int64))SetFilePointerEx)(
                        osfhandle,
                        0,
                        &NewFilePointer,
                        1)
    || !(unsigned int)((__int64 (           *)(__int64, __int64 *))GetFileSizeEx)(cached_osfhandle, &FileSize) )
  {
    return 0;
  }
  return NewFilePointer == FileSize;
}

// 14026E0D8: invalid function type 'BOOL (__stdcall *SetFilePointerEx)(HANDLE hFile, LARGE_INTEGER liDistanceToMove, PLARGE_INTEGER lpNewFilePointer, DWORD dwMoveMethod)' has been ignored
// 14026E0E0: invalid function type 'BOOL (__stdcall *GetFileSizeEx)(HANDLE hFile, PLARGE_INTEGER lpFileSize)' has been ignored

//----- (0000000140251DA8) ----------------------------------------------------
__int64            sub_140251DA8(unsigned __int8 a1, __int64 a2)
{
  int fileno_result;
  bool stream_is_at_end_of_file_nolock_result;

  fileno_result = fileno((FILE *)a2);
  if ( (*(_DWORD *)(a2 + 20) & 6) == 0 )
  {
    *errno_sr() = 9;
LABEL_3:
    _InterlockedOr((volatile signed __int32 *)(a2 + 20), 0x10u);
    return 0xFFFFFFFFLL;
  }
  if ( (*(_DWORD *)(a2 + 20) & 0x1000) != 0 )
  {
    *errno_sr() = 34;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(a2 + 20) & 1) != 0 )
  {
    stream_is_at_end_of_file_nolock_result = stream_is_at_end_of_file_nolock(a2);
    *(_DWORD *)(a2 + 16) = 0;
    if ( !stream_is_at_end_of_file_nolock_result )
      goto LABEL_3;
    *(_QWORD *)a2 = *(_QWORD *)(a2 + 8);
    _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFFFE);
  }
  _InterlockedOr((volatile signed __int32 *)(a2 + 20), 2u);
  _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFFF7);
  *(_DWORD *)(a2 + 16) = 0;
  if ( (*(_DWORD *)(a2 + 20) & 0x4C0) == 0
    && ((char *)a2 != sub_14020B528(1u) && (char *)a2 != sub_14020B528(2u) || !isatty(fileno_result)) )
  {
    sub_140253EF8(a2);
  }
  if ( !sub_140251B60(a1, a2) )
    goto LABEL_3;
  return a1;
}

//----- (0000000140251E94) ----------------------------------------------------
__int64            sub_140251E94(unsigned __int16 a1, __int64 a2)
{
  int fileno_result;
  bool stream_is_at_end_of_file_nolock_result;

  fileno_result = fileno((FILE *)a2);
  if ( (*(_DWORD *)(a2 + 20) & 6) == 0 )
  {
    *errno_sr() = 9;
LABEL_3:
    _InterlockedOr((volatile signed __int32 *)(a2 + 20), 0x10u);
    return 0xFFFF;
  }
  if ( (*(_DWORD *)(a2 + 20) & 0x1000) != 0 )
  {
    *errno_sr() = 34;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(a2 + 20) & 1) != 0 )
  {
    stream_is_at_end_of_file_nolock_result = stream_is_at_end_of_file_nolock(a2);
    *(_DWORD *)(a2 + 16) = 0;
    if ( !stream_is_at_end_of_file_nolock_result )
      goto LABEL_3;
    *(_QWORD *)a2 = *(_QWORD *)(a2 + 8);
    _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFFFE);
  }
  _InterlockedOr((volatile signed __int32 *)(a2 + 20), 2u);
  _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFFF7);
  *(_DWORD *)(a2 + 16) = 0;
  if ( (*(_DWORD *)(a2 + 20) & 0x4C0) == 0
    && ((char *)a2 != sub_14020B528(1u) && (char *)a2 != sub_14020B528(2u) || !isatty(fileno_result)) )
  {
    sub_140253EF8(a2);
  }
  if ( !sub_140251C44(a1, a2) )
    goto LABEL_3;
  return a1;
}

//----- (0000000140251F80) ----------------------------------------------------
__int64            sub_140251F80(int a1, char *a2, __int64 a3)
{
  __int64 input_value;
  __int64 shifted_bits;
  __int64 masked_bits;
  __int64 masked_bits_2;
  __int64 masked_bits_3;
  char *state_address;
  char *text_cursor;
  char *text_cursor_2;
  char input_byte;
  char *byte_cursor;
  char selection_code;
  bool comparison_result;
  char cached_buffer;
  __int64 masked_bits_4;
  char loaded_word;
  char Buffer;
  __int64 NumberOfBytesRead;
  __int64 saved_masked_bits;

  input_value = a1;
  shifted_bits = (__int64)a1 >> 6;
  masked_bits = 9LL * (a1 & 0x3F);
  masked_bits_2 = *(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401];
  masked_bits_3 = *(_QWORD *)(masked_bits_2 + 72LL * (a1 & 0x3F) + 40);
  saved_masked_bits = masked_bits_3;
  if ( a3 && *a2 == 10 )
    *(_BYTE *)(masked_bits_2 + 8 * masked_bits + 56) |= 4u;
  else
    *(_BYTE *)(masked_bits_2 + 8 * masked_bits + 56) &= ~4u;
  state_address = &a2[a3];
  text_cursor = a2;
  text_cursor_2 = a2;
  if ( a2 < &a2[a3] )
  {
    while ( 1 )
    {
      input_byte = *text_cursor;
      if ( *text_cursor == 26 )
      {
        masked_bits_4 = *(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401];
        loaded_word = *(_BYTE *)(masked_bits_4 + 8 * masked_bits + 56);
        if ( (loaded_word & 0x40) != 0 )
        {
          *text_cursor_2 = 26;
          LODWORD(text_cursor_2) = (_DWORD)text_cursor_2 + 1;
        }
        else
        {
          *(_BYTE *)(masked_bits_4 + 8 * masked_bits + 56) = loaded_word | 2;
        }
        return (unsigned int)((_DWORD)text_cursor_2 - (_DWORD)a2);
      }
      byte_cursor = text_cursor + 1;
      if ( input_byte == 13 )
        break;
      *text_cursor_2 = input_byte;
      ++text_cursor;
      ++text_cursor_2;
LABEL_25:
      if ( text_cursor >= state_address )
        return (unsigned int)((_DWORD)text_cursor_2 - (_DWORD)a2);
    }
    if ( byte_cursor < state_address )
    {
      selection_code = 13;
      if ( *byte_cursor == 10 )
        selection_code = 10;
      comparison_result = *byte_cursor == 10;
      *text_cursor_2 = selection_code;
      text_cursor += comparison_result + 1;
      goto LABEL_23;
    }
    ++text_cursor;
    if ( (unsigned int)((__int64 (           *)(__int64, char *, __int64, __int64 *, _QWORD))ReadFile)(
                         masked_bits_3,
                         &Buffer,
                         1,
                         &NumberOfBytesRead,
                         0)
      && (_DWORD)NumberOfBytesRead )
    {
      if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (input_value >> 6) + 19065401] + 72 * (input_value & 0x3F) + 56) & 0x48) != 0 )
      {
        cached_buffer = Buffer;
        if ( Buffer != 10 )
        {
          *text_cursor_2 = 13;
          *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (input_value >> 6) + 19065401] + 72 * (input_value & 0x3F) + 58) = cached_buffer;
          goto LABEL_23;
        }
LABEL_17:
        *text_cursor_2 = 10;
LABEL_23:
        ++text_cursor_2;
        goto LABEL_24;
      }
      if ( Buffer == 10 && text_cursor_2 == a2 )
        goto LABEL_17;
      lseeki64_nolock(input_value, -1, 1u);
      if ( Buffer == 10 )
      {
LABEL_24:
        masked_bits_3 = saved_masked_bits;
        goto LABEL_25;
      }
    }
    *text_cursor_2 = 13;
    goto LABEL_23;
  }
  return (unsigned int)((_DWORD)text_cursor_2 - (_DWORD)a2);
}

// 14026E1F0: invalid function type 'BOOL (__stdcall *ReadFile)(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped)' has been ignored

//----- (0000000140252140) ----------------------------------------------------
__int64            sub_140252140(int a1, __int16 *a2, __int64 a3)
{
  __int64 input_value;
  __int64 shifted_bits;
  __int64 masked_bits;
  __int64 masked_bits_2;
  __int64 masked_bits_3;
  __int16 *state_address;
  __int16 *buffer_cursor;
  __int16 *buffer_cursor_2;
  __int16 loaded_word;
  __int16 *record_pointer;
  __int16 loaded_word_2;
  __int64 selection_code;
  __int64 shifted_bits_2;
  __int64 i;
  __int64 masked_bits_4;
  char loaded_word_3;
  __int16 Buffer;
  __int16 cached_buffer;
  __int64 NumberOfBytesRead;
  __int64 saved_masked_bits;

  input_value = a1;
  shifted_bits = (__int64)a1 >> 6;
  masked_bits = 9LL * (a1 & 0x3F);
  masked_bits_2 = *(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401];
  masked_bits_3 = *(_QWORD *)(masked_bits_2 + 72LL * (a1 & 0x3F) + 40);
  saved_masked_bits = masked_bits_3;
  if ( a3 && *a2 == 10 )
    *(_BYTE *)(masked_bits_2 + 72LL * (a1 & 0x3F) + 56) |= 4u;
  else
    *(_BYTE *)(masked_bits_2 + 72LL * (a1 & 0x3F) + 56) &= ~4u;
  state_address = &a2[a3];
  buffer_cursor = a2;
  buffer_cursor_2 = a2;
  while ( buffer_cursor < state_address )
  {
    loaded_word = *buffer_cursor;
    if ( *buffer_cursor == 26 )
    {
      masked_bits_4 = *(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401];
      loaded_word_3 = *(_BYTE *)(masked_bits_4 + 8 * masked_bits + 56);
      if ( (loaded_word_3 & 0x40) != 0 )
        *buffer_cursor_2++ = 26;
      else
        *(_BYTE *)(masked_bits_4 + 8 * masked_bits + 56) = loaded_word_3 | 2;
      return 2 * (unsigned int)(buffer_cursor_2 - a2);
    }
    record_pointer = buffer_cursor + 1;
    if ( loaded_word == 13 )
    {
      if ( record_pointer < state_address )
      {
        loaded_word_2 = *record_pointer;
        if ( *record_pointer == 10 )
          loaded_word = 10;
        *buffer_cursor_2 = loaded_word;
        selection_code = 4;
        if ( loaded_word_2 != 10 )
          selection_code = 2;
        buffer_cursor = (__int16 *)((char *)buffer_cursor + selection_code);
        ++buffer_cursor_2;
        continue;
      }
      ++buffer_cursor;
      if ( !(unsigned int)((__int64 (           *)(__int64, __int16 *, __int64, __int64 *, _QWORD))ReadFile)(
                            masked_bits_3,
                            &Buffer,
                            2,
                            &NumberOfBytesRead,
                            0)
        || !(_DWORD)NumberOfBytesRead )
      {
        masked_bits_3 = saved_masked_bits;
        *buffer_cursor_2++ = 13;
        continue;
      }
      shifted_bits_2 = input_value >> 6;
      if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (input_value >> 6) + 19065401] + 72 * (input_value & 0x3F) + 56) & 0x48) != 0 )
      {
        if ( Buffer == 10 )
        {
          *buffer_cursor_2 = 10;
        }
        else
        {
          cached_buffer = Buffer;
          *buffer_cursor_2 = 13;
          for ( i = 0; i < 2; ++i )
            *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits_2 + 19065401] + 72 * (input_value & 0x3F) + i + 58) = *((_BYTE *)&cached_buffer + i);
          *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits_2 + 19065401] + 72 * (input_value & 0x3F) + 60) = 10;
        }
        ++buffer_cursor_2;
      }
      else if ( Buffer == 10 && buffer_cursor_2 == a2 )
      {
        *buffer_cursor_2++ = 10;
      }
      else
      {
        lseeki64_nolock(input_value, -2, 1u);
        if ( Buffer != 10 )
        {
          masked_bits_3 = saved_masked_bits;
          *buffer_cursor_2++ = 13;
          continue;
        }
      }
      masked_bits_3 = saved_masked_bits;
    }
    else
    {
      *buffer_cursor_2 = loaded_word;
      ++buffer_cursor;
      ++buffer_cursor_2;
    }
  }
  return 2 * (unsigned int)(buffer_cursor_2 - a2);
}

// 14026E1F0: invalid function type 'BOOL (__stdcall *ReadFile)(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped)' has been ignored

//----- (0000000140252424) ----------------------------------------------------
__int64            translate_ansi_or_utf8_nolock(int a1, char *a2, __int64 a3)
{
  __int64 input_value;
  __int64 result;
  __int64 saved_call_status;
  __int64 masked_bits;
  __int64 shifted_bits;
  __int64 scaled_index;
  __int64 shifted_bits_2;
  char *text_cursor;
  unsigned int i;
  __int64 scaled_index_2;
  char input_byte;
  char input_byte_2;
  int integer_difference;
  int multi_byte_to_wide_char_result;
  __int64 unrecovered_register_value;
  int int64_result;
  __int64 masked_bits_2;

  input_value = a1;
  result = sub_140251F80(a1, a2, a3);
  saved_call_status = (int)result;
  if ( (_DWORD)result )
  {
    masked_bits = input_value & 0x3F;
    shifted_bits = input_value >> 6;
    scaled_index = 9 * masked_bits;
    shifted_bits_2 = *(_QWORD *)&dword_140404A6C[2 * (input_value >> 6) + 19065401];
    if ( !*(_BYTE *)(shifted_bits_2 + 72 * masked_bits + 57) )
      return (unsigned int)saved_call_status;
    text_cursor = &a2[saved_call_status - 1];
    if ( *text_cursor < 0 )
    {
      for ( i = 1; !byte_140302310[(unsigned __int8)*text_cursor] && i <= 4 && text_cursor >= a2; ++i )
        --text_cursor;
      scaled_index_2 = (unsigned __int8)*text_cursor;
      if ( !byte_140302310[scaled_index_2] )
      {
        *errno_sr() = 42;
        return 0xFFFFFFFFLL;
      }
      if ( byte_140302310[scaled_index_2] + 1 == i )
      {
        LODWORD(text_cursor) = i + (_DWORD)text_cursor;
      }
      else if ( (*(_BYTE *)(shifted_bits_2 + 72 * masked_bits + 56) & 0x48) != 0 )
      {
        ++text_cursor;
        *(_BYTE *)(shifted_bits_2 + 72 * masked_bits + 58) = scaled_index_2;
        if ( i >= 2 )
        {
          input_byte = *text_cursor++;
          *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 8 * scaled_index + 59) = input_byte;
        }
        if ( i == 3 )
        {
          input_byte_2 = *text_cursor;
          LODWORD(text_cursor) = (_DWORD)text_cursor + 1;
          *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 8 * scaled_index + 60) = input_byte_2;
        }
        LODWORD(text_cursor) = (_DWORD)text_cursor - i;
      }
      else
      {
        lseeki64_nolock(input_value, -i, 1u);
      }
    }
    else
    {
      LODWORD(text_cursor) = saved_call_status + (_DWORD)a2;
    }
    integer_difference = (_DWORD)text_cursor - (_DWORD)a2;
    multi_byte_to_wide_char_result = crt_multi_byte_to_wide_char();
    if ( !multi_byte_to_wide_char_result )
    {
      int64_result = ((__int64 (           *)(__int64, _QWORD))GetLastError)(unrecovered_register_value, 0);
      crt_errno_map_os_error(int64_result);
      return 0xFFFFFFFFLL;
    }
    masked_bits_2 = *(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401];
    *(_BYTE *)(masked_bits_2 + 8 * scaled_index + 61) &= ~2u;
    *(_BYTE *)(masked_bits_2 + 8 * scaled_index + 61) |= integer_difference != multi_byte_to_wide_char_result ? 2 : 0;
    return (unsigned int)(2 * multi_byte_to_wide_char_result);
  }
  return result;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (00000001402525C0) ----------------------------------------------------
__int64            translate_utf16_from_console_nolock(int a1, __int16 *a2, __int64 a3)
{
  __int16 *state_address;
  __int64 input_value;
  __int16 *input_cursor;
  __int16 *buffer_cursor;
  __int16 loaded_word;
  __int64 selection_code;

  state_address = &a2[a3];
  input_value = a1;
  input_cursor = a2;
  buffer_cursor = a2;
  if ( a2 < state_address )
  {
    while ( 1 )
    {
      loaded_word = *input_cursor;
      if ( *input_cursor == 26 )
        break;
      if ( loaded_word == 13 && input_cursor + 1 < state_address && input_cursor[1] == 10 )
      {
        loaded_word = 10;
        selection_code = 4;
      }
      else
      {
        selection_code = 2;
      }
      input_cursor = (__int16 *)((char *)input_cursor + selection_code);
      *buffer_cursor++ = loaded_word;
      if ( input_cursor >= state_address )
        return 2 * (unsigned int)(buffer_cursor - a2);
    }
    *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (input_value >> 6) + 19065401] + 72 * (input_value & 0x3F) + 56) |= 2u;
  }
  return 2 * (unsigned int)(buffer_cursor - a2);
}

//----- (0000000140252650) ----------------------------------------------------
int         read(int FileHandle, void *DstBuf, unsigned int MaxCharCount)
{
  __int64 shifted_bits;
  int nolock;

  if ( FileHandle == -2 )
  {
    *(_DWORD *)crt_doserrno() = 0;
    *errno_sr() = 9;
    return -1;
  }
  if ( FileHandle < 0
    || FileHandle >= g_144CBF750
    || (shifted_bits = (__int64)FileHandle >> 6,
        (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 72LL * (FileHandle & 0x3F) + 56) & 1) == 0) )
  {
    *(_DWORD *)crt_doserrno() = 0;
    *errno_sr() = 9;
    goto LABEL_13;
  }
  if ( MaxCharCount > 0x7FFFFFFF )
  {
    *(_DWORD *)crt_doserrno() = 0;
    *errno_sr() = 22;
LABEL_13:
    crt_invalid_parameter_noinfo();
    return -1;
  }
  sub_140261068(FileHandle);
  nolock = -1;
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 72LL * (FileHandle & 0x3F) + 56) & 1) != 0 )
  {
    nolock = read_nolock(FileHandle, (__int16 *)DstBuf, MaxCharCount);
  }
  else
  {
    *errno_sr() = 9;
    *(_DWORD *)crt_doserrno() = 0;
  }
  sub_140261150(FileHandle);
  return nolock;
}

//----- (000000014025276C) ----------------------------------------------------
__int64            read_nolock(int a1, __int16 *a2, unsigned int a3)
{
  __int64 masked_bits;
  __int64 shifted_bits;
  __int64 scaled_index;
  __int64 masked_bits_2;
  char loaded_word;
  int loaded_word_2;
  __int16 *malloc_base_result;
  unsigned int remaining_count;
  __int16 *saved_malloc_base_result;
  __int64 lseeki64_nolock_result;
  bool state_address;
  int selection_code;
  char loaded_word_3;
  char masked_bits_3;
  char masked_bits_4;
  int int64_result;
  int saved_translate_ansi_or_utf8_nolock_result;
  __int64 lookup_index;
  int translate_ansi_or_utf8_nolock_result;
  unsigned __int64 shifted_bits_2;
  __int16 *record_pointer;
  __int16 *record_pointer_2;
  __int16 *buffer_cursor;
  __int16 *state_address_2;
  __int16 loaded_word_4;
  __int64 selection_code_2;
  __int64 Mode;
  __int64 hConsoleHandle;
  __int64 saved_shifted_bits;
  __int64 selection_flag;
  __int16 *record_pointer_3;
  char saved_loaded_word;
  unsigned int NumberOfCharsRead;

  if ( a1 != -2 )
  {
    if ( a1 >= 0
      && a1 < g_144CBF750
      && (masked_bits = a1 & 0x3F,
          selection_flag = 1,
          shifted_bits = (__int64)a1 >> 6,
          saved_shifted_bits = shifted_bits,
          scaled_index = 9 * masked_bits,
          masked_bits_2 = *(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401],
          loaded_word = *(_BYTE *)(masked_bits_2 + 72 * masked_bits + 56),
          (loaded_word & 1) != 0) )
    {
      if ( a3 <= 0x7FFFFFFF )
      {
        if ( !a3 || (loaded_word & 2) != 0 )
          return 0;
        if ( a2 )
        {
          loaded_word_2 = *(char *)(masked_bits_2 + 8 * scaled_index + 57);
          malloc_base_result = nullptr;
          hConsoleHandle = *(_QWORD *)(masked_bits_2 + 8 * scaled_index + 40);
          saved_loaded_word = loaded_word_2;
          if ( loaded_word_2 == 1 )
          {
            if ( (a3 & 1) != 0 )
            {
LABEL_14:
              *(_DWORD *)crt_doserrno() = 0;
              *errno_sr() = 22;
              crt_invalid_parameter_noinfo();
LABEL_38:
              saved_translate_ansi_or_utf8_nolock_result = -1;
              goto LABEL_39;
            }
            remaining_count = a3 >> 1;
            if ( a3 >> 1 < 4 )
              remaining_count = 4;
            malloc_base_result = (__int16 *)malloc_base();
            free_base(nullptr);
            free_base(nullptr);
            saved_malloc_base_result = malloc_base_result;
            if ( !malloc_base_result )
            {
              *errno_sr() = 12;
              *(_DWORD *)crt_doserrno() = 8;
              goto LABEL_38;
            }
            lseeki64_nolock_result = lseeki64_nolock(a1, 0, 1u);
            shifted_bits = saved_shifted_bits;
            LOBYTE(loaded_word_2) = saved_loaded_word;
            *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * saved_shifted_bits + 19065401] + 8 * scaled_index + 48) = lseeki64_nolock_result;
            masked_bits_2 = *(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401];
          }
          else
          {
            if ( loaded_word_2 == 2 && (a3 & 1) != 0 )
              goto LABEL_14;
            remaining_count = a3;
            saved_malloc_base_result = a2;
          }
          state_address = (*(_BYTE *)(masked_bits_2 + 8 * scaled_index + 56) & 0x48) == 0;
          selection_code = 0;
          record_pointer_3 = saved_malloc_base_result;
          if ( !state_address )
          {
            loaded_word_3 = *(_BYTE *)(masked_bits_2 + 8 * scaled_index + 58);
            if ( loaded_word_3 != 10 )
            {
              *(_BYTE *)saved_malloc_base_result = loaded_word_3;
              --remaining_count;
              saved_malloc_base_result = (__int16 *)((char *)saved_malloc_base_result + 1);
              selection_code = 1;
              *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 8 * scaled_index + 58) = 10;
              if ( (_BYTE)loaded_word_2 )
              {
                masked_bits_3 = *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 8 * scaled_index + 59);
                if ( masked_bits_3 != 10 )
                {
                  if ( remaining_count )
                  {
                    *(_BYTE *)saved_malloc_base_result = masked_bits_3;
                    selection_code = 2;
                    saved_malloc_base_result = (__int16 *)((char *)saved_malloc_base_result + 1);
                    --remaining_count;
                    *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 8 * scaled_index + 59) = 10;
                    if ( (_BYTE)loaded_word_2 == 1 )
                    {
                      masked_bits_4 = *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 8 * scaled_index + 60);
                      if ( masked_bits_4 != 10 )
                      {
                        if ( remaining_count )
                        {
                          *(_BYTE *)saved_malloc_base_result = masked_bits_4;
                          selection_code = 3;
                          saved_malloc_base_result = (__int16 *)((char *)saved_malloc_base_result + 1);
                          --remaining_count;
                          *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 8 * scaled_index + 60) = 10;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if ( isatty(a1)
            && *(char *)(*(_QWORD *)&dword_140404A6C[2 * saved_shifted_bits + 19065401] + 8 * scaled_index + 56) < 0
            && (unsigned int)((__int64 (           *)(__int64, __int64 *))GetConsoleMode)(hConsoleHandle, &Mode) )
          {
            if ( saved_loaded_word == 2 )
            {
              if ( !(unsigned int)((__int64 (           *)(__int64, __int16 *, _QWORD, unsigned int *, _QWORD))ReadConsoleW)(
                                    hConsoleHandle,
                                    saved_malloc_base_result,
                                    remaining_count >> 1,
                                    &NumberOfCharsRead,
                                    0) )
              {
                int64_result = ((__int64 (*)(void))GetLastError)();
LABEL_37:
                crt_errno_map_os_error(int64_result);
                goto LABEL_38;
              }
              saved_translate_ansi_or_utf8_nolock_result = selection_code + 2 * NumberOfCharsRead;
              goto LABEL_45;
            }
          }
          else
          {
            LOBYTE(selection_flag) = 0;
          }
          if ( !(unsigned int)((__int64 (           *)(__int64, __int16 *, _QWORD, unsigned int *, _QWORD))ReadFile)(
                                hConsoleHandle,
                                saved_malloc_base_result,
                                remaining_count,
                                &NumberOfCharsRead,
                                0)
            || NumberOfCharsRead > a3 )
          {
            int64_result = ((__int64 (*)(void))GetLastError)();
            if ( int64_result == 5 )
            {
              *errno_sr() = 9;
              *(_DWORD *)crt_doserrno() = 5;
              goto LABEL_38;
            }
            if ( int64_result == 109 )
            {
              saved_translate_ansi_or_utf8_nolock_result = 0;
              goto LABEL_39;
            }
            goto LABEL_37;
          }
          saved_translate_ansi_or_utf8_nolock_result = NumberOfCharsRead + selection_code;
LABEL_45:
          lookup_index = saved_shifted_bits;
          if ( *(char *)(*(_QWORD *)&dword_140404A6C[2 * saved_shifted_bits + 19065401] + 8 * scaled_index + 56) < 0 )
          {
            if ( saved_loaded_word == 2 )
            {
              shifted_bits_2 = (unsigned __int64)saved_translate_ansi_or_utf8_nolock_result >> 1;
              if ( (_BYTE)selection_flag )
              {
                record_pointer = record_pointer_3;
                record_pointer_2 = record_pointer_3;
                buffer_cursor = record_pointer_3;
                state_address_2 = &record_pointer_3[shifted_bits_2];
                if ( record_pointer_3 < state_address_2 )
                {
                  while ( 1 )
                  {
                    loaded_word_4 = *record_pointer_2;
                    if ( *record_pointer_2 == 26 )
                      break;
                    if ( loaded_word_4 == 13 && record_pointer_2 + 1 < state_address_2 && record_pointer_2[1] == 10 )
                    {
                      loaded_word_4 = 10;
                      selection_code_2 = 4;
                    }
                    else
                    {
                      selection_code_2 = 2;
                    }
                    record_pointer_2 = (__int16 *)((char *)record_pointer_2 + selection_code_2);
                    *buffer_cursor++ = loaded_word_4;
                    if ( record_pointer_2 >= state_address_2 )
                      goto LABEL_60;
                  }
                  *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * lookup_index + 19065401] + 8 * scaled_index + 56) |= 2u;
                }
LABEL_60:
                saved_translate_ansi_or_utf8_nolock_result = 2 * (buffer_cursor - record_pointer);
                goto LABEL_39;
              }
              translate_ansi_or_utf8_nolock_result = sub_140252140(a1, record_pointer_3, shifted_bits_2);
            }
            else
            {
              translate_ansi_or_utf8_nolock_result = translate_ansi_or_utf8_nolock(a1, (char *)saved_malloc_base_result, saved_translate_ansi_or_utf8_nolock_result);
            }
            saved_translate_ansi_or_utf8_nolock_result = translate_ansi_or_utf8_nolock_result;
          }
LABEL_39:
          free_base(malloc_base_result);
          return (unsigned int)saved_translate_ansi_or_utf8_nolock_result;
        }
      }
      *(_DWORD *)crt_doserrno() = 0;
      *errno_sr() = 22;
    }
    else
    {
      *(_DWORD *)crt_doserrno() = 0;
      *errno_sr() = 9;
    }
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
  *(_DWORD *)crt_doserrno() = 0;
  *errno_sr() = 9;
  return 0xFFFFFFFFLL;
}

// 14026E0D0: invalid function type 'BOOL (__stdcall *GetConsoleMode)(HANDLE hConsoleHandle, LPDWORD lpMode)' has been ignored
// 14026E0C8: invalid function type 'BOOL (__stdcall *ReadConsoleW)(HANDLE hConsoleInput, LPVOID lpBuffer, DWORD nNumberOfCharsToRead, LPDWORD lpNumberOfCharsRead, PCONSOLE_READCONSOLE_CONTROL pInputControl)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E1F0: invalid function type 'BOOL (__stdcall *ReadFile)(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped)' has been ignored
// 14025293C: conditional instruction was optimized away because ebp.4!=0

//----- (0000000140252BC4) ----------------------------------------------------
__int64            sub_140252BC4(int a1, int a2, unsigned int a3)
{
  __int64 shifted_bits;
  unsigned int unused_written_slot;

  if ( a1 == -2 )
  {
    *(_DWORD *)crt_doserrno() = 0;
    *errno_sr() = 9;
    return 0xFFFFFFFFLL;
  }
  if ( a1 < 0
    || a1 >= g_144CBF750
    || (shifted_bits = (__int64)a1 >> 6,
        (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 72LL * (a1 & 0x3F) + 56) & 1) == 0) )
  {
    *(_DWORD *)crt_doserrno() = 0;
    *errno_sr() = 9;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
  sub_140261068(a1);
  unused_written_slot = -1;
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 72LL * (a1 & 0x3F) + 56) & 1) != 0 )
  {
    unused_written_slot = sub_140252DA0(a1, a2, a3);
  }
  else
  {
    *errno_sr() = 9;
    *(_DWORD *)crt_doserrno() = 0;
  }
  sub_140261150(a1);
  return unused_written_slot;
}

//----- (0000000140252CB0) ----------------------------------------------------
__int64            lseeki64_sr(int a1, __int64 a2, unsigned int a3)
{
  __int64 shifted_bits;
  __int64 unused_written_slot;

  if ( a1 == -2 )
  {
    *(_DWORD *)crt_doserrno() = 0;
    *errno_sr() = 9;
    return -1;
  }
  if ( a1 < 0
    || a1 >= g_144CBF750
    || (shifted_bits = (__int64)a1 >> 6,
        (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 72LL * (a1 & 0x3F) + 56) & 1) == 0) )
  {
    *(_DWORD *)crt_doserrno() = 0;
    *errno_sr() = 9;
    crt_invalid_parameter_noinfo();
    return -1;
  }
  sub_140261068(a1);
  unused_written_slot = -1;
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 72LL * (a1 & 0x3F) + 56) & 1) != 0 )
  {
    unused_written_slot = lseeki64_nolock(a1, a2, a3);
  }
  else
  {
    *errno_sr() = 9;
    *(_DWORD *)crt_doserrno() = 0;
  }
  sub_140261150(a1);
  return unused_written_slot;
}

//----- (0000000140252DA0) ----------------------------------------------------
__int64            sub_140252DA0(unsigned int a1, int a2, unsigned int a3)
{
  __int64 input_value;
  __int64 input_value_2;
  __int64 osfhandle;
  __int64 cached_osfhandle;
  __int64 result;
  int int64_result;
  __m128d NewFilePointer;
  __int64 selection_flag;

  input_value = (int)a1;
  input_value_2 = a2;
  osfhandle = get_osfhandle(a1);
  cached_osfhandle = osfhandle;
  if ( osfhandle == -1 )
  {
    *errno_sr() = 9;
    return 0xFFFFFFFFLL;
  }
  if ( !(unsigned int)((__int64 (           *)(__int64, _QWORD, __m128d *, __int64))SetFilePointerEx)(
                        osfhandle,
                        0,
                        &NewFilePointer,
                        1)
    || (selection_flag = 0,
        !(unsigned int)((__int64 (           *)(__int64, __int64, __int64 *, _QWORD))SetFilePointerEx)(cached_osfhandle, input_value_2, &selection_flag, a3)) )
  {
    int64_result = ((__int64 (*)(void))GetLastError)();
    crt_errno_map_os_error(int64_result);
    return 0xFFFFFFFFLL;
  }
  result = selection_flag;
  if ( selection_flag > 0x7FFFFFFF )
  {
    ((void (           *)(__int64, _QWORD, _QWORD, _QWORD))SetFilePointerEx)(
      cached_osfhandle,
      *(_QWORD *)&SR_VEC_LANES(128, NewFilePointer, f64)[0],
      0,
      0);
    *errno_sr() = 22;
    return 0xFFFFFFFFLL;
  }
  if ( (_DWORD)selection_flag == -1 )
    return 0xFFFFFFFFLL;
  *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (input_value >> 6) + 19065401] + 72 * (input_value & 0x3F) + 56) &= ~2u;
  return result;
}

// 14026E0D8: invalid function type 'BOOL (__stdcall *SetFilePointerEx)(HANDLE hFile, LARGE_INTEGER liDistanceToMove, PLARGE_INTEGER lpNewFilePointer, DWORD dwMoveMethod)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (0000000140252E94) ----------------------------------------------------
__int64            lseeki64_nolock(unsigned int a1, __int64 a2, unsigned int a3)
{
  __int64 input_value;
  __int64 osfhandle;
  __int64 result;
  int int64_result;
  __int64 NewFilePointer;

  input_value = (int)a1;
  osfhandle = get_osfhandle(a1);
  if ( osfhandle == -1 )
  {
    *errno_sr() = 9;
    return -1;
  }
  if ( !(unsigned int)((__int64 (           *)(__int64, __int64, __int64 *, _QWORD))SetFilePointerEx)(
                        osfhandle,
                        a2,
                        &NewFilePointer,
                        a3) )
  {
    int64_result = ((__int64 (*)(void))GetLastError)();
    crt_errno_map_os_error(int64_result);
    return -1;
  }
  result = NewFilePointer;
  if ( NewFilePointer == -1 )
    return -1;
  *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (input_value >> 6) + 19065401] + 72 * (input_value & 0x3F) + 56) &= ~2u;
  return result;
}

// 14026E0D8: invalid function type 'BOOL (__stdcall *SetFilePointerEx)(HANDLE hFile, LARGE_INTEGER liDistanceToMove, PLARGE_INTEGER lpNewFilePointer, DWORD dwMoveMethod)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (0000000140252F30) ----------------------------------------------------
__int64            sub_140252F30(__int64 a1, int a2, unsigned int a3)
{
  __int64 input_value;
  int int64_result;
  __m128d NewFilePointer;
  __int64 selection_flag;

  input_value = a2;
  if ( !(unsigned int)((__int64 (           *)(__int64, _QWORD, __m128d *, __int64))SetFilePointerEx)(
                        a1,
                        0,
                        &NewFilePointer,
                        1)
    || (selection_flag = 0,
        !(unsigned int)((__int64 (           *)(__int64, __int64, __int64 *, _QWORD))SetFilePointerEx)(a1, input_value, &selection_flag, a3)) )
  {
    int64_result = ((__int64 (*)(void))GetLastError)();
    crt_errno_map_os_error(int64_result);
    return 0xFFFFFFFFLL;
  }
  if ( selection_flag > 0x7FFFFFFF )
  {
    ((void (           *)(__int64, _QWORD, _QWORD, _QWORD))SetFilePointerEx)(
      a1,
      *(_QWORD *)&SR_VEC_LANES(128, NewFilePointer, f64)[0],
      0,
      0);
    *errno_sr() = 22;
    return 0xFFFFFFFFLL;
  }
  return (unsigned int)selection_flag;
}

// 14026E0D8: invalid function type 'BOOL (__stdcall *SetFilePointerEx)(HANDLE hFile, LARGE_INTEGER liDistanceToMove, PLARGE_INTEGER lpNewFilePointer, DWORD dwMoveMethod)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (0000000140252FD0) ----------------------------------------------------
__int64            sub_140252FD0(void *     a1, __int64 a2, unsigned int a3)
{
  int int64_result;
  __int64 NewFilePointer;

  if ( (unsigned int)((__int64 (           *)(void *    , __int64, __int64 *, _QWORD))SetFilePointerEx)(
                       a1,
                       a2,
                       &NewFilePointer,
                       a3) )
    return NewFilePointer;
  int64_result = ((__int64 (*)(void))GetLastError)();
  crt_errno_map_os_error(int64_result);
  return -1;
}

// 14026E0D8: invalid function type 'BOOL (__stdcall *SetFilePointerEx)(HANDLE hFile, LARGE_INTEGER liDistanceToMove, PLARGE_INTEGER lpNewFilePointer, DWORD dwMoveMethod)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (0000000140253014) ----------------------------------------------------
// attributes: thunk
__int64         lseeki64_sr_dup2(int FileHandle, __int64 Offset, int Origin)
{
  return _lseeki64(FileHandle, Offset, Origin);
}

//----- (000000014025301C) ----------------------------------------------------
// attributes: thunk
__int64            lseeki64_nolock_dup2(unsigned int a1, __int64 a2, unsigned int a3)
{
  return lseeki64_nolock(a1, a2, a3);
}

//----- (0000000140253024) ----------------------------------------------------
__int64            write_binary_nolock(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 integer_sum;
  __int64 shifted_bits;

  integer_sum = a1 + 4;
  shifted_bits = *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)a2 >> 6) + 19065401] + 72LL * (a2 & 0x3F) + 40);
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(unsigned int)((__int64 (           *)(__int64, __int64, _QWORD, __int64, _QWORD))WriteFile)(shifted_bits, a3, a4, integer_sum, 0) )
    *(_DWORD *)a1 = ((__int64 (*)(void))GetLastError)();
  return a1;
}

// 14026E160: invalid function type 'BOOL (__stdcall *WriteFile)(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (0000000140253090) ----------------------------------------------------
__int64            write_double_translated_ansi_nolock(_QWORD *a1, int a2,      __m128i *a3, unsigned int a4)
{
  __int64 input_value;
       __m128i *saved_source_buffer;
       __m128i *packed_vector;
  __int64 masked_bits;
  __int64 shifted_bits;
       __m128i *source_buffer;
  int loaded_word;
  __int64 cached_input_value;
  int iteration_count;
  __int64 shifted_bits_2;
       char **comparison_result;
  int iteration_count_2;
  __int64 masked_bits_2;
  __int64 i;
  __int64 scaled_index;
  int masked_bits_3;
  int byte_count;
  __int64 element_index;
  __int64 integer_difference;
  _BYTE *state_address;
  __int64 j;
  __int64 masked_bits_4;
  int integer_difference_2;
  __int64 scaled_index_2;
  __int64 table_value;
       char **comparison_result_2;
  __int64 masked_bits_5;
  char loaded_word_2;
  __int64 selection_code;
  __int8 table_value_2;
  sr_anon_49 *saved_source_buffer_2;
  unsigned int wide_char_to_multi_byte_result;
  unsigned int saved_wide_char_to_multi_byte_result;
  int cached_integer_sum;
  int iteration_count_3;
  __int8 *state_address_2;
  char table_value_3;
  __int64 masked_bits_6;
  int integer_sum;
  bool comparison_result_3;
  _QWORD *record_pointer;
  int cached_integer_sum_2;
  int iteration_count_4;
  __int64 element_index_2;
  __int64 masked_bits_7;
  __int64 shifted_bits_3;
  __int8 table_value_4;
  __int64 masked_bits_8;
  __int8 table_value_5;
  __int64 masked_bits_9;
  __int64 unused_local;
  __int64 packed_word_bits;
  __int16 scratch_buffer[2];
  int DstCh;
  __int64 NumberOfBytesWritten;
  _QWORD scratch_buffer_2[3];
  char unrecovered_register_value;
  __int64 packed_word_bits_2;
  unsigned int int64_result;
  int saved_loaded_word;
  __int64 integer_sum_2;
       __m128i *packed_vector_2;
  __int64 hFile;
  unsigned __int64 selection_flag;
  char *byte_cursor;
  unsigned __int64 selection_flag_2;
       __m128i *saved_source_buffer_3;
       __m128i *input_cursor;
  __int64 saved_shifted_bits;
  __int64 input_value_2;
  _QWORD *saved_packed_word_bits;
  _BYTE callee_output_word[8];
  _BYTE scratch_buffer_3[8];
  char Buffer;
  __int64 unused_local_2;

  input_value = a2;
  saved_source_buffer = a3;
  saved_packed_word_bits = a1;
  input_cursor = a3;
  packed_vector = (     __m128i *)((char *)a3 + a4);
  input_value_2 = a2;
  packed_vector_2 = packed_vector;
  masked_bits = 9LL * (a2 & 0x3F);
  shifted_bits = (__int64)a2 >> 6;
  hFile = *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 72LL * (a2 & 0x3F) + 40);
  int64_result = ((__int64 (*)(void))GetConsoleCP)();
  crt_locale_update((_LocaleUpdate *)scratch_buffer_2, nullptr);
  integer_sum_2 = 0;
  packed_word_bits_2 = 0;
  source_buffer = saved_source_buffer;
  loaded_word = *(_DWORD *)(scratch_buffer_2[1] + 12LL);
  saved_loaded_word = loaded_word;
  if ( saved_source_buffer >= packed_vector )
  {
LABEL_44:
    comparison_result_3 = unrecovered_register_value == 0;
    goto LABEL_45;
  }
  cached_input_value = input_value;
  iteration_count = HIDWORD(packed_word_bits_2);
  shifted_bits_2 = cached_input_value >> 6;
  saved_shifted_bits = shifted_bits_2;
  while ( 1 )
  {
    LODWORD(comparison_result) = 1;
    LOBYTE(scratch_buffer[0]) = SR_VEC_PTR_LANES(128, source_buffer, i8)[0];
    DstCh = 0;
    if ( loaded_word == 65001 )
    {
      iteration_count_2 = 0;
      masked_bits_2 = *(_QWORD *)&dword_140404A6C[2 * shifted_bits_2 + 19065401];
      for ( i = 0; i < 5; ++i )
      {
        if ( !*(_BYTE *)(masked_bits_2 + 8 * masked_bits + i + 62) )
          break;
        ++iteration_count_2;
      }
      if ( i <= 0 )
      {
        scaled_index_2 = (char *)packed_vector - (char *)source_buffer;
        table_value = byte_140302310[SR_VEC_PTR_LANES(128, source_buffer, u8)[0]];
        if ( (int)table_value + 1 <= (char *)packed_vector - (char *)source_buffer )
        {
          selection_flag_2 = 0;
          saved_source_buffer_3 = source_buffer;
          comparison_result_2 = (     char **)((unsigned int)((_DWORD)table_value == 3) + 1);
          if ( __crt_mbstring____mbsrtowcs_utf8((sr_anon_115 *)&DstCh, (char **)&saved_source_buffer_3, comparison_result_2, (unsigned int *)&selection_flag_2) == -1 )
            goto LABEL_54;
          saved_source_buffer = (     __m128i *)((char *)source_buffer + table_value);
          LODWORD(comparison_result) = (_DWORD)comparison_result_2;
          goto LABEL_29;
        }
        iteration_count_4 = 0;
        if ( scaled_index_2 > 0 )
        {
          element_index_2 = 0;
          masked_bits_7 = input_value_2 & 0x3F;
          shifted_bits_3 = input_value_2 >> 6;
          do
          {
            table_value_4 = SR_VEC_PTR_LANES(128, source_buffer, i8)[element_index_2];
            ++iteration_count_4;
            masked_bits_8 = element_index_2 + *(_QWORD *)&dword_140404A6C[2 * shifted_bits_3 + 19065401];
            ++element_index_2;
            *(_BYTE *)(masked_bits_8 + 72 * masked_bits_7 + 62) = table_value_4;
          }
          while ( iteration_count_4 < scaled_index_2 );
        }
        integer_sum = scaled_index_2 + iteration_count;
      }
      else
      {
        scaled_index = (char *)packed_vector_2 - (char *)source_buffer;
        masked_bits_3 = byte_140302310[*(unsigned __int8 *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 8 * masked_bits + 62)] + 1;
        byte_count = masked_bits_3 - iteration_count_2;
        if ( masked_bits_3 - iteration_count_2 <= (char *)packed_vector_2 - (char *)source_buffer )
        {
          element_index = 0;
          integer_difference = masked_bits_2 - (_QWORD)callee_output_word;
          do
          {
            state_address = &callee_output_word[element_index++];
            *state_address = state_address[8 * masked_bits + 62 + integer_difference];
          }
          while ( element_index < i );
          if ( byte_count > 0 )
            crt_memcpy((__m128i *)&callee_output_word[i], source_buffer, byte_count);
          for ( j = 0; j < i; ++j )
          {
            masked_bits_4 = j + *(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401];
            *(_BYTE *)(masked_bits_4 + 8 * masked_bits + 62) = 0;
          }
          selection_flag = 0;
          byte_cursor = callee_output_word;
          comparison_result = (     char **)((unsigned int)(masked_bits_3 == 4) + 1);
          if ( __crt_mbstring____mbsrtowcs_utf8((sr_anon_115 *)&DstCh, &byte_cursor, comparison_result, (unsigned int *)&selection_flag) == -1 )
            goto LABEL_54;
          integer_difference_2 = byte_count - 1;
          packed_vector = packed_vector_2;
          saved_source_buffer = (     __m128i *)((char *)source_buffer + integer_difference_2);
          goto LABEL_29;
        }
        iteration_count_3 = 0;
        if ( scaled_index > 0 )
        {
          state_address_2 = &SR_VEC_PTR_LANES(128, source_buffer, i8)[-i];
          do
          {
            table_value_3 = state_address_2[i];
            ++iteration_count_3;
            masked_bits_6 = i + *(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401];
            ++i;
            *(_BYTE *)(masked_bits_6 + 8 * masked_bits + 62) = table_value_3;
          }
          while ( iteration_count_3 < scaled_index );
          iteration_count = HIDWORD(packed_word_bits_2);
        }
        integer_sum = scaled_index + iteration_count;
      }
      HIDWORD(packed_word_bits_2) = integer_sum;
      goto LABEL_44;
    }
    masked_bits_5 = *(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401];
    loaded_word_2 = *(_BYTE *)(masked_bits_5 + 8 * masked_bits + 61);
    if ( (loaded_word_2 & 4) != 0 )
    {
      scratch_buffer_3[0] = *(_BYTE *)(masked_bits_5 + 8 * masked_bits + 62);
      selection_code = 2;
      table_value_2 = SR_VEC_PTR_LANES(128, source_buffer, i8)[0];
      *(_BYTE *)(masked_bits_5 + 8 * masked_bits + 61) = loaded_word_2 & 0xFB;
      saved_source_buffer_2 = (sr_anon_49 *)scratch_buffer_3;
      scratch_buffer_3[1] = table_value_2;
    }
    else
    {
      if ( (sub_140256DC0()[SR_VEC_PTR_LANES(128, source_buffer, u8)[0]] & 0x8000u) == 0 )
      {
        selection_code = 1;
      }
      else
      {
        saved_source_buffer = (     __m128i *)((char *)saved_source_buffer + 1);
        if ( saved_source_buffer >= packed_vector )
        {
          table_value_5 = SR_VEC_PTR_LANES(128, source_buffer, i8)[0];
          masked_bits_9 = *(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401];
          HIDWORD(packed_word_bits_2) = iteration_count + 1;
          *(_BYTE *)(masked_bits_9 + 8 * masked_bits + 62) = table_value_5;
          *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 8 * masked_bits + 61) |= 4u;
          comparison_result_3 = unrecovered_register_value == 0;
          goto LABEL_45;
        }
        selection_code = 2;
      }
      saved_source_buffer_2 = (sr_anon_49 *)source_buffer;
    }
    if ( (unsigned int)sub_140254140((sr_anon_115 *)&DstCh, saved_source_buffer_2, (char *)selection_code) == -1 )
      goto LABEL_54;
LABEL_29:
    source_buffer = (     __m128i *)&SR_VEC_PTR_LANES(128, saved_source_buffer, i8)[1];
    LODWORD(packed_word_bits) = 5;
    wide_char_to_multi_byte_result = crt_wide_char_to_multi_byte(int64_result, 0, (__int64)&DstCh, (unsigned int)comparison_result, (__int64)&Buffer, packed_word_bits, 0, 0);
    saved_wide_char_to_multi_byte_result = wide_char_to_multi_byte_result;
    if ( !wide_char_to_multi_byte_result )
      goto LABEL_56;
    if ( !(unsigned int)((__int64 (           *)(__int64, char *, _QWORD, __int64 *, _QWORD))WriteFile)(
                          hFile,
                          &Buffer,
                          wide_char_to_multi_byte_result,
                          &NumberOfBytesWritten,
                          0) )
    {
      LODWORD(packed_word_bits_2) = ((__int64 (*)(void))GetLastError)();
LABEL_56:
      comparison_result_3 = unrecovered_register_value == 0;
      goto LABEL_45;
    }
    cached_integer_sum = integer_sum_2;
    iteration_count = (_DWORD)source_buffer - (_DWORD)input_cursor + integer_sum_2;
    HIDWORD(packed_word_bits_2) = iteration_count;
    if ( (unsigned int)NumberOfBytesWritten < saved_wide_char_to_multi_byte_result )
      goto LABEL_44;
    if ( LOBYTE(scratch_buffer[0]) == 10 )
      break;
LABEL_36:
    saved_source_buffer = source_buffer;
    if ( source_buffer >= packed_vector )
      goto LABEL_44;
    shifted_bits_2 = saved_shifted_bits;
    loaded_word = saved_loaded_word;
  }
  scratch_buffer[0] = 13;
  if ( (unsigned int)((__int64 (           *)(__int64, __int16 *, __int64, __int64 *, _QWORD))WriteFile)(
                       hFile,
                       scratch_buffer,
                       1,
                       &NumberOfBytesWritten,
                       0) )
  {
    if ( !(_DWORD)NumberOfBytesWritten )
      goto LABEL_44;
    ++iteration_count;
    integer_sum_2 = (unsigned int)(cached_integer_sum + 1);
    HIDWORD(packed_word_bits_2) = iteration_count;
    goto LABEL_36;
  }
  LODWORD(packed_word_bits_2) = ((__int64 (*)(void))GetLastError)();
LABEL_54:
  comparison_result_3 = unrecovered_register_value == 0;
LABEL_45:
  if ( !comparison_result_3 )
    *(_DWORD *)(scratch_buffer_2[0] + 936LL) &= ~2u;
  record_pointer = saved_packed_word_bits;
  cached_integer_sum_2 = integer_sum_2;
  *saved_packed_word_bits = packed_word_bits_2;
  *((_DWORD *)record_pointer + 2) = cached_integer_sum_2;
  return saved_packed_word_bits; /* 0x140253480: mov rax, qword ptr [rbp - 1] */
}

// 14026E0C0: invalid function type 'UINT (__stdcall *GetConsoleCP)()' has been ignored
// 14026E160: invalid function type 'BOOL (__stdcall *WriteFile)(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 1402531D1: conditional instruction was optimized away because rdi.8>=1
// 140253217: conditional instruction was optimized away because rdi.8>=1

//----- (0000000140253560) ----------------------------------------------------
__int64            sub_140253560(__int64 a1, unsigned __int16 *a2, unsigned int a3)
{
  unsigned __int16 *record_pointer;
  unsigned __int16 *buffer_cursor;
  unsigned __int16 loaded_word;

  record_pointer = (unsigned __int16 *)((char *)a2 + a3);
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  buffer_cursor = a2;
  if ( a2 < record_pointer )
  {
    while ( 1 )
    {
      loaded_word = *buffer_cursor;
      if ( (unsigned __int16)putwch_nolock(*buffer_cursor) != loaded_word )
        break;
      *(_DWORD *)(a1 + 4) += 2;
      if ( loaded_word == 10 )
      {
        if ( (unsigned __int16)putwch_nolock(13) != 13 )
          break;
        ++*(_DWORD *)(a1 + 4);
        ++*(_DWORD *)(a1 + 8);
      }
      if ( ++buffer_cursor >= record_pointer )
        return a1;
    }
    *(_DWORD *)a1 = ((__int64 (*)(void))GetLastError)();
  }
  return a1;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (00000001402535F8) ----------------------------------------------------
bool            write_requires_double_translation_nolock(int a1)
{
  __int64 input_value;
  __int64 masked_bits;
  __int64 shifted_bits;
  __int64 scaled_index;
  bool result;
  __int64 Mode;

  input_value = a1;
  result = isatty(a1)
        && (masked_bits = input_value & 0x3F,
            shifted_bits = input_value >> 6,
            scaled_index = 9 * masked_bits,
            *(char *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 72 * masked_bits + 56) < 0)
        && (*(_QWORD *)(*(_QWORD *)(sub_140255A70() + 144) + 312LL)
         || *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 8 * scaled_index + 57))
        && (unsigned int)((__int64 (           *)(_QWORD, __int64 *))GetConsoleMode)(
                           *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 8 * scaled_index + 40),
                           &Mode);
  return result;
}

// 14026E0D0: invalid function type 'BOOL (__stdcall *GetConsoleMode)(HANDLE hConsoleHandle, LPDWORD lpMode)' has been ignored

//----- (0000000140253688) ----------------------------------------------------
__int64 write_text_ansi_nolock(__int64 a1, int a2, char *a3, int a4, ...)
{
  char *state_address;
  char *text_cursor;
  __int64 shifted_bits;
  char *text_cursor_2;
  char input_byte;
  unsigned int integer_difference;
  unsigned int table_value;
  __int64 unused_local;
  unsigned int scratch_buffer[4];
  _BYTE scratch_buffer_2[5119];
  char callee_output_word;
  __int64 unused_local_2;

  state_address = &a3[a4];
  text_cursor = a3;
  shifted_bits = *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)a2 >> 6) + 19065401] + 72LL * (a2 & 0x3F) + 40);
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( a3 < state_address )
  {
    while ( 1 )
    {
      text_cursor_2 = scratch_buffer_2;
      do
      {
        if ( text_cursor >= state_address )
          break;
        input_byte = *text_cursor++;
        if ( input_byte == 10 )
        {
          ++*(_DWORD *)(a1 + 8);
          *text_cursor_2++ = 13;
        }
        *text_cursor_2++ = input_byte;
      }
      while ( text_cursor_2 < &callee_output_word );
      integer_difference = (_DWORD)text_cursor_2 - (unsigned int)scratch_buffer_2;
      if ( !(unsigned int)((__int64 (           *)(__int64, _BYTE *, _QWORD, unsigned int *, _QWORD))WriteFile)(
                            shifted_bits,
                            scratch_buffer_2,
                            integer_difference,
                            scratch_buffer,
                            0) )
        break;
      table_value = scratch_buffer[0];
      *(_DWORD *)(a1 + 4) += scratch_buffer[0];
      if ( table_value < integer_difference || text_cursor >= state_address )
        return a1; /* 0x14025375F: mov rax, rdi */
    }
    *(_DWORD *)a1 = ((__int64 (*)(void))GetLastError)();
  }
  return a1; /* 0x14025375F: mov rax, rdi */
}

// 14026E160: invalid function type 'BOOL (__stdcall *WriteFile)(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014025378C) ----------------------------------------------------
__int64 write_text_utf16le_nolock(__int64 a1, int a2, __int16 *a3, unsigned int a4, ...)
{
  __int16 *record_pointer;
  __int16 *buffer_cursor;
  __int64 shifted_bits;
  char *running_total;
  __int16 loaded_word;
  unsigned int shifted_bits_2;
  unsigned int table_value;
  __int64 unused_local;
  _DWORD scratch_buffer[4];
  _BYTE scratch_buffer_2[5118];
  __int16 callee_output_word;
  __int64 unused_local_2;

  record_pointer = (__int16 *)((char *)a3 + a4);
  buffer_cursor = a3;
  shifted_bits = *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)a2 >> 6) + 19065401] + 72LL * (a2 & 0x3F) + 40);
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( a3 < record_pointer )
  {
    while ( 1 )
    {
      running_total = scratch_buffer_2;
      do
      {
        if ( buffer_cursor >= record_pointer )
          break;
        loaded_word = *buffer_cursor++;
        if ( loaded_word == 10 )
        {
          *(_DWORD *)(a1 + 8) += 2;
          *(_WORD *)running_total = 13;
          running_total += 2;
        }
        *(_WORD *)running_total = loaded_word;
        running_total += 2;
      }
      while ( running_total < (char *)&callee_output_word );
      shifted_bits_2 = 2 * (((intptr_t)((uintptr_t)(running_total) - (uintptr_t)(scratch_buffer_2))) >> 1);
      if ( !(unsigned int)((__int64 (           *)(__int64, _BYTE *, _QWORD, _DWORD *, _QWORD))WriteFile)(
                            shifted_bits,
                            scratch_buffer_2,
                            shifted_bits_2,
                            scratch_buffer,
                            0) )
        break;
      table_value = scratch_buffer[0];
      *(_DWORD *)(a1 + 4) += scratch_buffer[0];
      if ( table_value < shifted_bits_2 || buffer_cursor >= record_pointer )
        return a1; /* 0x14025387A: mov rax, rdi */
    }
    *(_DWORD *)a1 = ((__int64 (*)(void))GetLastError)();
  }
  return a1; /* 0x14025387A: mov rax, rdi */
}

// 14026E160: invalid function type 'BOOL (__stdcall *WriteFile)(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (00000001402538A8) ----------------------------------------------------
__int64            write_text_utf8_nolock(__int64 a1, int a2, __int16 *a3, unsigned int a4)
{
  __int16 *record_pointer;
  int input_value;
  __int16 *buffer_cursor;
  __int64 shifted_bits;
  bool comparison_result;
  char *running_total;
  __int16 loaded_word;
  unsigned int wide_char_to_multi_byte_result;
  unsigned int running_total_2;
  __int64 unused_local;
  __int64 packed_word_bits;
  _DWORD scratch_buffer[4];
  _BYTE scratch_buffer_2[1704];
  char callee_output_word;
  _BYTE callee_output_word_2[3424];
  __int64 unused_local_2;

  record_pointer = (__int16 *)((char *)a3 + a4);
  input_value = (int)a3;
  buffer_cursor = a3;
  shifted_bits = *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)a2 >> 6) + 19065401] + 72LL * (a2 & 0x3F) + 40);
  *(_QWORD *)a1 = 0;
  comparison_result = a3 < record_pointer;
  *(_DWORD *)(a1 + 8) = 0;
LABEL_2:
  if ( comparison_result )
  {
    running_total = scratch_buffer_2;
    do
    {
      if ( buffer_cursor >= record_pointer )
        break;
      loaded_word = *buffer_cursor++;
      if ( loaded_word == 10 )
      {
        *(_WORD *)running_total = 13;
        running_total += 2;
      }
      *(_WORD *)running_total = loaded_word;
      running_total += 2;
    }
    while ( running_total < &callee_output_word );
    LODWORD(packed_word_bits) = 3413;
    wide_char_to_multi_byte_result = crt_wide_char_to_multi_byte(0xFDE9u, 0, (__int64)scratch_buffer_2, (unsigned int)(((intptr_t)((uintptr_t)(running_total) - (uintptr_t)(scratch_buffer_2))) >> 1), (__int64)callee_output_word_2, packed_word_bits, 0, 0);
    if ( wide_char_to_multi_byte_result )
    {
      running_total_2 = 0;
      while ( (unsigned int)((__int64 (           *)(__int64, _BYTE *, _QWORD, _DWORD *, _QWORD))WriteFile)(
                              shifted_bits,
                              &callee_output_word_2[running_total_2],
                              wide_char_to_multi_byte_result - running_total_2,
                              scratch_buffer,
                              0) )
      {
        running_total_2 += scratch_buffer[0];
        if ( running_total_2 >= wide_char_to_multi_byte_result )
        {
          *(_DWORD *)(a1 + 4) = (_DWORD)buffer_cursor - input_value;
          comparison_result = buffer_cursor < record_pointer;
          goto LABEL_2;
        }
      }
    }
    *(_DWORD *)a1 = ((__int64 (*)(void))GetLastError)();
  }
  return a1; /* 0x1402539E9: mov rax, rbx */
}

// 14026E160: invalid function type 'BOOL (__stdcall *WriteFile)(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (0000000140253A18) ----------------------------------------------------
int         write(int FileHandle,      void *Buf, unsigned int MaxCharCount)
{
  __int64 shifted_bits;
  int unused_written_slot;

  if ( FileHandle == -2 )
  {
    *(_DWORD *)crt_doserrno() = 0;
    *errno_sr() = 9;
    return -1;
  }
  if ( FileHandle < 0
    || FileHandle >= g_144CBF750
    || (shifted_bits = (__int64)FileHandle >> 6,
        (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 72LL * (FileHandle & 0x3F) + 56) & 1) == 0) )
  {
    *(_DWORD *)crt_doserrno() = 0;
    *errno_sr() = 9;
    crt_invalid_parameter_noinfo();
    return -1;
  }
  sub_140261068(FileHandle);
  unused_written_slot = -1;
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 72LL * (FileHandle & 0x3F) + 56) & 1) != 0 )
  {
    unused_written_slot = sub_140253B04(FileHandle, (__m128i *)Buf, MaxCharCount);
  }
  else
  {
    *errno_sr() = 9;
    *(_DWORD *)crt_doserrno() = 0;
  }
  sub_140261150(FileHandle);
  return unused_written_slot;
}

//----- (0000000140253B04) ----------------------------------------------------
__int64            sub_140253B04(signed int a1, __m128i *a2, unsigned int a3)
{
  __int64 input_value;
  __int64 shifted_bits;
  __int64 masked_bits;
  __int64 masked_bits_2;
  char masked_bits_3;
  int saved_iteration_count;
  int iteration_count;
  __m128i *packed_vector;
  __m128i *input_cursor;
  int iteration_count_2;
  __int64 named_call_result;
  __int64 cached_numberofbyteswritten;
  __int64 masked_bits_4;
  __int64 masked_bits_5;
  __int64 NumberOfBytesWritten;
  int selection_flag;
  __int64 saved_cached_numberofbyteswritten;
  __int128 Mode;

  input_value = a3;
  if ( !a3 )
    return 0;
  if ( !a2
    || (shifted_bits = (__int64)a1 >> 6,
        masked_bits = 9LL * (a1 & 0x3F),
        masked_bits_2 = *(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401],
        masked_bits_3 = *(_BYTE *)(masked_bits_2 + 72LL * (a1 & 0x3F) + 57),
        (unsigned __int8)(masked_bits_3 - 1) <= 1u)
    && (a3 & 1) != 0 )
  {
    *(_DWORD *)crt_doserrno() = 0;
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
  if ( (*(_BYTE *)(masked_bits_2 + 72LL * (a1 & 0x3F) + 56) & 0x20) != 0 )
    lseeki64_nolock(a1, 0, 2u);
  saved_iteration_count = 0;
  saved_cached_numberofbyteswritten = 0;
  if ( !isatty(a1)
    || *(char *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 72LL * (a1 & 0x3F) + 56) >= 0
    || !*(_QWORD *)(*(_QWORD *)(sub_140255A70() + 144) + 312LL)
    && !*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 72LL * (a1 & 0x3F) + 57)
    || !(unsigned int)((__int64 (           *)(_QWORD, __int128 *))GetConsoleMode)(
                        *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 72LL * (a1 & 0x3F) + 40),
                        &Mode) )
  {
    masked_bits_4 = *(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401];
    if ( *(char *)(masked_bits_4 + 72LL * (a1 & 0x3F) + 56) >= 0 )
    {
      masked_bits_5 = *(_QWORD *)(masked_bits_4 + 72LL * (a1 & 0x3F) + 40);
      NumberOfBytesWritten = 0;
      selection_flag = 0;
      if ( !(unsigned int)((__int64 (           *)(__int64, __m128i *, _QWORD, char *, _QWORD))WriteFile)(
                            masked_bits_5,
                            a2,
                            (unsigned int)input_value,
                            (char *)&NumberOfBytesWritten + 4,
                            0) )
        LODWORD(NumberOfBytesWritten) = ((__int64 (*)(void))GetLastError)();
      saved_iteration_count = selection_flag;
LABEL_38:
      cached_numberofbyteswritten = NumberOfBytesWritten;
      goto LABEL_39;
    }
    if ( masked_bits_3 )
    {
      if ( masked_bits_3 == 1 )
      {
        named_call_result = write_text_utf8_nolock((__int64)&NumberOfBytesWritten, a1, SR_VEC_PTR_LANES(128, a2, i16), input_value);
      }
      else
      {
        if ( masked_bits_3 != 2 )
          goto LABEL_40;
        named_call_result = write_text_utf16le_nolock((__int64)&NumberOfBytesWritten, a1, SR_VEC_PTR_LANES(128, a2, i16), input_value);
      }
    }
    else
    {
      named_call_result = write_text_ansi_nolock((__int64)&NumberOfBytesWritten, a1, SR_VEC_PTR_LANES(128, a2, i8), input_value);
    }
LABEL_27:
    cached_numberofbyteswritten = *(_QWORD *)named_call_result;
    saved_iteration_count = *(_DWORD *)(named_call_result + 8);
LABEL_39:
    saved_cached_numberofbyteswritten = cached_numberofbyteswritten;
    goto LABEL_40;
  }
  if ( !masked_bits_3 )
  {
    named_call_result = write_double_translated_ansi_nolock(&NumberOfBytesWritten, a1, a2, input_value);
    goto LABEL_27;
  }
  if ( (unsigned __int8)(masked_bits_3 - 1) <= 1u )
  {
    iteration_count = 0;
    packed_vector = (__m128i *)((char *)a2 + input_value);
    NumberOfBytesWritten = 0;
    input_cursor = a2;
    if ( a2 < packed_vector )
    {
      iteration_count_2 = HIDWORD(NumberOfBytesWritten);
      while ( 1 )
      {
        LOWORD(Mode) = SR_VEC_PTR_LANES(128, input_cursor, i16)[0];
        if ( (unsigned __int16)putwch_nolock((unsigned __int16)Mode) != (_WORD)Mode )
          break;
        iteration_count_2 += 2;
        HIDWORD(NumberOfBytesWritten) = iteration_count_2;
        if ( (_WORD)Mode == 10 )
        {
          if ( (unsigned __int16)putwch_nolock(13) != 13 )
            break;
          HIDWORD(NumberOfBytesWritten) = ++iteration_count_2;
          ++iteration_count;
        }
        input_cursor = (__m128i *)((char *)input_cursor + 2);
        if ( input_cursor >= packed_vector )
          goto LABEL_25;
      }
      LODWORD(NumberOfBytesWritten) = ((__int64 (*)(void))GetLastError)();
    }
LABEL_25:
    saved_iteration_count = iteration_count;
    goto LABEL_38;
  }
LABEL_40:
  if ( HIDWORD(saved_cached_numberofbyteswritten) )
    return (unsigned int)(HIDWORD(saved_cached_numberofbyteswritten) - saved_iteration_count);
  if ( (_DWORD)saved_cached_numberofbyteswritten )
  {
    if ( (_DWORD)saved_cached_numberofbyteswritten == 5 )
    {
      *errno_sr() = 9;
      *(_DWORD *)crt_doserrno() = 5;
    }
    else
    {
      crt_errno_map_os_error(saved_cached_numberofbyteswritten);
    }
    return 0xFFFFFFFFLL;
  }
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 8 * masked_bits + 56) & 0x40) == 0 || SR_VEC_PTR_LANES(128, a2, i8)[0] != 26 )
  {
    *errno_sr() = 28;
    *(_DWORD *)crt_doserrno() = 0;
    return 0xFFFFFFFFLL;
  }
  return 0;
}

// 14026E0D0: invalid function type 'BOOL (__stdcall *GetConsoleMode)(HANDLE hConsoleHandle, LPDWORD lpMode)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E160: invalid function type 'BOOL (__stdcall *WriteFile)(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped)' has been ignored

//----- (0000000140253DEC) ----------------------------------------------------
char            sub_140253DEC(__int64 a1)
{
  int fileno_result;
  unsigned int *malloc_base_result;
  __int64 loaded_word;

  fileno_result = fileno((FILE *)a1);
  if ( !isatty(fileno_result) )
    return 0;
  if ( (char *)a1 == sub_14020B528(1u) )
  {
    malloc_base_result = (unsigned int *)&g_144CBF758;
  }
  else
  {
    if ( (char *)a1 != sub_14020B528(2u) )
      return 0;
    malloc_base_result = (unsigned int *)&g_144CBF760;
  }
  ++g_144CBE6B8;
  if ( (*(_DWORD *)(a1 + 20) & 0x4C0) != 0 )
    return 0;
  _InterlockedOr((volatile signed __int32 *)(a1 + 20), 0x282u);
  loaded_word = *(_QWORD *)malloc_base_result;
  if ( *(_QWORD *)malloc_base_result || (*(_QWORD *)malloc_base_result = malloc_base(), free_base(nullptr), (loaded_word = *(_QWORD *)malloc_base_result) != 0) )
  {
    *(_QWORD *)(a1 + 8) = loaded_word;
    *(_QWORD *)a1 = *(_QWORD *)malloc_base_result;
    *(_DWORD *)(a1 + 16) = 4096;
    *(_DWORD *)(a1 + 32) = 4096;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = 2;
    *(_QWORD *)(a1 + 8) = a1 + 28;
    *(_QWORD *)a1 = a1 + 28;
    *(_DWORD *)(a1 + 32) = 2;
  }
  return 1;
}

//----- (0000000140253EBC) ----------------------------------------------------
__int64            sub_140253EBC(char a1, __int64 a2)
{
  __int64 result;

  if ( a1 )
  {
    result = *(_DWORD *)(a2 + 20) >> 9;
    if ( (*(_DWORD *)(a2 + 20) & 0x200) != 0 )
    {
      result = sub_1402501C4((FILE *)a2);
      _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFD7F);
      *(_DWORD *)(a2 + 32) = 0;
      *(_QWORD *)(a2 + 8) = 0;
      *(_QWORD *)a2 = 0;
    }
  }
  return result;
}

//----- (0000000140253EF8) ----------------------------------------------------
__int64            sub_140253EF8(__int64 a1)
{
  int selection_code;
  __int64 result;

  ++g_144CBE6B8;
  selection_code = 4096;
  *(_QWORD *)(a1 + 8) = sr_path_malloc(4096);
  free_base(nullptr);
  if ( *(_QWORD *)(a1 + 8) )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 20), 0x40u);
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 20), 0x400u);
    selection_code = 2;
    *(_QWORD *)(a1 + 8) = a1 + 28;
  }
  *(_DWORD *)(a1 + 32) = selection_code;
  result = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = result;
  return result;
}

//----- (0000000140253F60) ----------------------------------------------------
__int64            malloc_base()
{
  unsigned __int64 unrecovered_register_value;
  __int64 cached_unrecovered_register_value;
  __int64 result;

  cached_unrecovered_register_value = unrecovered_register_value;
  if ( unrecovered_register_value > 0xFFFFFFFFFFFFFFE0uLL )
  {
LABEL_9:
    *errno_sr() = 12;
    return 0;
  }
  else
  {
    if ( !unrecovered_register_value )
      cached_unrecovered_register_value = 1;
    while ( 1 )
    {
      result = ((__int64 (           *)(_QWORD, _QWORD, __int64))HeapAlloc)(
                 g_144CBFA48,
                 0,
                 cached_unrecovered_register_value);
      if ( result )
        break;
      if ( !(unsigned int)sub_14024A06C() || !(unsigned int)callnewh(cached_unrecovered_register_value) )
        goto LABEL_9;
    }
  }
  return result;
}

// 14026E130: invalid function type 'LPVOID (__stdcall *HeapAlloc)(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes)' has been ignored

//----- (0000000140253FC0) ----------------------------------------------------
__int64            mbtowc_l(sr_anon_115 *this, sr_anon_49 *a2, char *a3, struct __crt_locale_pointers *a4)
{
  int crt_mbstring_mbrtowc_utf8_result;
  __int64 cached_callee_output_word;
  int loaded_word;
  int multi_byte_to_wide_char_result;
  int *unused_written_slot;
  __int64 callee_output_word;
  __int64 callee_output_word_2;
  char unrecovered_register_value;

  if ( !a2 || !a3 )
  {
    g_144CBF768 = 0;
    return 0;
  }
  if ( !*(_BYTE *)a2 )
  {
    if ( this )
      *(_WORD *)this = 0;
    return 0;
  }
  crt_locale_update((_LocaleUpdate *)&callee_output_word, a4);
  if ( *(_DWORD *)(callee_output_word_2 + 12) == 65001 )
  {
    crt_mbstring_mbrtowc_utf8_result = __crt_mbstring____mbrtowc_utf8(this, a2, a3, (unsigned int *)&g_144CBF768);
    if ( crt_mbstring_mbrtowc_utf8_result < 0 )
      crt_mbstring_mbrtowc_utf8_result = -1;
    goto LABEL_14;
  }
  if ( !*(_QWORD *)(callee_output_word_2 + 312) )
  {
    if ( this )
      *(_WORD *)this = *(unsigned __int8 *)a2;
    goto LABEL_13;
  }
  if ( (unsigned int)isleadbyte_l(*(unsigned __int8 *)a2, &callee_output_word_2) )
  {
    cached_callee_output_word = callee_output_word_2;
    loaded_word = *(_DWORD *)(callee_output_word_2 + 8);
    if ( loaded_word > 1 && (int)a3 >= loaded_word && (multi_byte_to_wide_char_result = crt_multi_byte_to_wide_char(), cached_callee_output_word = callee_output_word_2, multi_byte_to_wide_char_result)
      || (unsigned __int64)a3 >= *(int *)(cached_callee_output_word + 8) && *((_BYTE *)a2 + 1) )
    {
      crt_mbstring_mbrtowc_utf8_result = *(_DWORD *)(cached_callee_output_word + 8);
      goto LABEL_14;
    }
LABEL_25:
    unused_written_slot = errno_sr();
    crt_mbstring_mbrtowc_utf8_result = -1;
    *unused_written_slot = 42;
    goto LABEL_14;
  }
  if ( !(unsigned int)crt_multi_byte_to_wide_char() )
    goto LABEL_25;
LABEL_13:
  crt_mbstring_mbrtowc_utf8_result = 1;
LABEL_14:
  if ( unrecovered_register_value )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  return (unsigned int)crt_mbstring_mbrtowc_utf8_result;
}

// 140253FC0: invalid function type 'int __cdecl mbtowc_l(#57 *DstCh, const char *SrcCh, #81 SrcSizeInBytes, #86 Locale)' has been ignored

//----- (0000000140254140) ----------------------------------------------------
__int64            sub_140254140(sr_anon_115 *a1, sr_anon_49 *a2, char *a3)
{
  return mbtowc_l(a1, a2, a3, nullptr);
}

//----- (0000000140254148) ----------------------------------------------------
__int64            wctomb_l(__int64 a1, unsigned __int16 a2, struct __crt_locale_pointers *a3)
{
  int wctomb_s_l_result;
  unsigned int unused_written_slot;
  __int64 callee_output_word;
  __int128 packed_vector;
  char unrecovered_register_value;
  int SizeConverted;

  crt_locale_update((_LocaleUpdate *)&callee_output_word, a3);
  SizeConverted = 0;
  wctomb_s_l_result = wctomb_s_l(&SizeConverted, a1, *(int *)(packed_vector + 8), a2, &packed_vector);
  unused_written_slot = SizeConverted;
  if ( wctomb_s_l_result )
    unused_written_slot = -1;
  if ( unrecovered_register_value )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  return unused_written_slot;
}

// 140254148: invalid function type 'int __cdecl wctomb_l(char *MbCh, #57 WCh, #86 Locale)' has been ignored

//----- (00000001402541BC) ----------------------------------------------------
__int64            wctomb_s_l(
        int *a1,
        _BYTE *a2,
        unsigned __int64 a3,
        unsigned __int16 a4,
        struct __crt_locale_pointers *Locale)
{
  unsigned int unused_written_slot;
  unsigned int loaded_word;
  int crt_mbstring_c32rtomb_utf8_result;
  int wide_char_to_multi_byte_result;
  __int64 packed_word_bits;
  __int64 callee_output_word;
  __int64 unrecovered_register_value;
  char unrecovered_register_value_2;
  __int128 packed_word_bits_2;
  unsigned __int16 input_value;

  input_value = a4;
  if ( a2 || !a3 )
  {
    if ( a1 )
      *a1 = -1;
    if ( a3 > 0x7FFFFFFF )
    {
      unused_written_slot = 22;
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return unused_written_slot;
    }
    crt_locale_update((_LocaleUpdate *)&callee_output_word, Locale);
    loaded_word = *(_DWORD *)(unrecovered_register_value + 12);
    if ( loaded_word == 65001 )
    {
      *(_QWORD *)&packed_word_bits_2 = 0;
      crt_mbstring_c32rtomb_utf8_result = __crt_mbstring____c32rtomb_utf8(a2, input_value, &packed_word_bits_2);
      if ( a1 )
        *a1 = crt_mbstring_c32rtomb_utf8_result;
      if ( crt_mbstring_c32rtomb_utf8_result > 4 )
      {
        unused_written_slot = *errno_sr();
        goto LABEL_21;
      }
      goto LABEL_33;
    }
    if ( !*(_QWORD *)(unrecovered_register_value + 312) )
    {
      if ( input_value > 0xFFu )
      {
        if ( a2 && a3 )
          crt_memset((void *)(uintptr_t)(a2), 0, a3);
        goto LABEL_20;
      }
      if ( !a2 )
        goto LABEL_27;
      if ( a3 )
      {
        *a2 = input_value;
LABEL_27:
        if ( a1 )
          *a1 = 1;
LABEL_33:
        unused_written_slot = 0;
        goto LABEL_21;
      }
LABEL_38:
      unused_written_slot = 34;
      *errno_sr() = 34;
      crt_invalid_parameter_noinfo();
LABEL_21:
      if ( unrecovered_register_value_2 )
        *(_DWORD *)(callee_output_word + 936) &= ~2u;
      return unused_written_slot;
    }
    LODWORD(packed_word_bits_2) = 0;
    LODWORD(packed_word_bits) = a3;
    wide_char_to_multi_byte_result = crt_wide_char_to_multi_byte(loaded_word, 0, (__int64)&input_value, 1, (__int64)a2, packed_word_bits, 0, (__int64)&packed_word_bits_2);
    if ( wide_char_to_multi_byte_result )
    {
      if ( !(_DWORD)packed_word_bits_2 )
      {
        if ( a1 )
          *a1 = wide_char_to_multi_byte_result;
        goto LABEL_33;
      }
    }
    else if ( (unsigned int)((__int64 (*)(void))GetLastError)() == 122 )
    {
      if ( a2 && a3 )
        crt_memset((void *)(uintptr_t)(a2), 0, a3);
      goto LABEL_38;
    }
LABEL_20:
    unused_written_slot = 42;
    *errno_sr() = 42;
    goto LABEL_21;
  }
  if ( a1 )
    *a1 = 0;
  return 0;
}

// 1402541BC: invalid function type 'errno_t __cdecl wctomb_s_l(int *SizeConverted, char *MbCh, #81 SizeInBytes, #57 WCh, #86 Locale)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (0000000140254358) ----------------------------------------------------
__int64            wctomb_sr(_BYTE *a1, unsigned __int16 a2)
{
  int call_result;
  int wctomb_s_l_result;
  unsigned int unused_written_slot;
  int SizeConverted;

  SizeConverted = 0;
  call_result = sub_140258D34();
  wctomb_s_l_result = wctomb_s_l(&SizeConverted, a1, call_result, a2, nullptr);
  unused_written_slot = SizeConverted;
  if ( wctomb_s_l_result )
    return (unsigned int)-1;
  return unused_written_slot;
}

// 140254358: invalid function type 'int __cdecl wctomb(char *MbCh, #57 WCh)' has been ignored

//----- (00000001402543A8) ----------------------------------------------------
__int64            CDialog__CreateIndirect(CDialog *this,      struct DLGTEMPLATE *a2, struct CWnd *a3, void *a4)
{
  return wctomb_s_l((int *)this, a2, (unsigned __int64)a3, (unsigned __int16)a4, nullptr);
}

// 1402543A8: invalid function type 'errno_t __cdecl CDialog__CreateIndirect(int *SizeConverted, char *MbCh, #93 SizeInBytes, #57 WCh)' has been ignored

//----- (0000000140254CCC) ----------------------------------------------------
char *strnlen_sr(__m128i *a1,unsigned __int64 a2)
{
  extern size_t crt_strnlen(const char *text, size_t limit);
  /* src/engine/crt_string.c */
  return (char *)(uintptr_t)crt_strnlen((const char *)a1, a2);
}

//----- (0000000140254F48) ----------------------------------------------------
__int64 sub_140254F48(__m128i *a1,unsigned __int64 a2)
{
  extern size_t crt_wcsnlen(const uint16_t *text, size_t limit);
  /* src/engine/crt_string.c */
  return (__int64)crt_wcsnlen((const uint16_t *)a1, a2);
}

//----- (0000000140255128) ----------------------------------------------------
__int64            sub_140255128(__int64 a1, unsigned int *a2, __int64 a3, unsigned int *a4)
{
  crt_lock(*a2);
  _InterlockedIncrement(*(volatile signed __int32 **)(**(_QWORD **)a3 + 136LL));
  return crt_unlock(*a4);
}

//----- (0000000140255168) ----------------------------------------------------
__int64            sub_140255168(__int64 a1, unsigned int *a2, struct __acrt_ptd *     **a3, unsigned int *a4)
{
  crt_lock(*a2);
  replace_current_thread_locale_nolock_sr(**a3, nullptr);
  return crt_unlock(*a4);
}

//----- (00000001402551A8) ----------------------------------------------------
__int64            sub_1402551A8(__int64 a1, unsigned int *a2, __int64 a3, unsigned int *a4)
{
  crt_lock(*a2);
  replace_current_thread_locale_nolock_sr(
    **(struct __acrt_ptd *     **)a3,
    ***(struct __crt_locale_data *     ***)(a3 + 8));
  return crt_unlock(*a4);
}

//----- (00000001402551F0) ----------------------------------------------------
__int64            sub_1402551F0(__int64 a1, unsigned int *a2, __int64 a3, unsigned int *a4)
{
  void *loaded_record_pointer;

  crt_lock(*a2);
  loaded_record_pointer = *(void **)(**(_QWORD **)a3 + 136LL);
  if ( loaded_record_pointer && _InterlockedExchangeAdd((volatile signed __int32 *)loaded_record_pointer, 0xFFFFFFFF) == 1 && loaded_record_pointer != &unk_1403025A0 )
    free_base(loaded_record_pointer);
  return crt_unlock(*a4);
}

//----- (0000000140255250) ----------------------------------------------------
__int64            sub_140255250(unsigned int a1, __int64 a2)
{
  __int64 callee_output_word;
  unsigned int input_value;
  unsigned int input_value_2;

  input_value = a1;
  input_value_2 = a1;
  return sub_1402551F0((__int64)&callee_output_word, &input_value_2, a2, &input_value);
}

//----- (0000000140255278) ----------------------------------------------------
__int64            sub_140255278(unsigned int a1, __int64 a2)
{
  __int64 callee_output_word;
  unsigned int input_value;
  unsigned int input_value_2;

  input_value = a1;
  input_value_2 = a1;
  return sub_140255128((__int64)&callee_output_word, &input_value_2, a2, &input_value);
}

//----- (00000001402552A0) ----------------------------------------------------
__int64            sub_1402552A0(unsigned int a1, struct __acrt_ptd *     **a2)
{
  __int64 callee_output_word;
  unsigned int input_value;
  unsigned int input_value_2;

  input_value = a1;
  input_value_2 = a1;
  return sub_140255168((__int64)&callee_output_word, &input_value_2, a2, &input_value);
}

//----- (00000001402552C8) ----------------------------------------------------
__int64            sub_1402552C8(unsigned int a1, __int64 a2)
{
  __int64 callee_output_word;
  unsigned int input_value;
  unsigned int input_value_2;

  input_value = a1;
  input_value_2 = a1;
  return sub_1402551A8((__int64)&callee_output_word, &input_value_2, a2, &input_value);
}

//----- (000000014025535C) ----------------------------------------------------
__crt_scoped_get_last_error_reset *           __crt_scoped_get_last_error_reset____crt_scoped_get_last_error_reset(
        __crt_scoped_get_last_error_reset *this)
{
  *(_DWORD *)this = ((__int64 (*)(void))GetLastError)();
  return this;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (0000000140255378) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1035(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (00000001402553B0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_871(__int64 a1)
{
  void *loaded_record_pointer;

  loaded_record_pointer = *(void **)(**(_QWORD **)a1 + 136LL);
  if ( loaded_record_pointer && _InterlockedExchangeAdd((volatile signed __int32 *)loaded_record_pointer, 0xFFFFFFFF) == 1 && loaded_record_pointer != &unk_1403025A0 )
    free_base(loaded_record_pointer);
}

//----- (000000014025545C) ----------------------------------------------------
__int64            sub_14025545C(struct __acrt_ptd *     a1, struct __crt_locale_data **     a2)
{
  unsigned int selection_code;
  _QWORD scratch_buffer[3];
  struct __acrt_ptd *input_cursor;
  struct __crt_locale_data **input_cursor_2;
  char callee_output_word;
  unsigned int selection_code_2;

  input_cursor_2 = a2;
  input_cursor = a1;
  *((_DWORD *)a1 + 10) = 1;
  *(_QWORD *)input_cursor = (uint64)(uintptr_t)(xmmword_140289E60);
  *((_DWORD *)input_cursor + 234) = 1;
  *((_QWORD *)input_cursor + 17) = (uint64)(uintptr_t)(&unk_1403025A0);
  *((_WORD *)input_cursor + 94) = 67;
  *((_WORD *)input_cursor + 225) = 67;
  *((_QWORD *)input_cursor + 116) = 0;
  scratch_buffer[0] = (uint64)(uintptr_t)(&input_cursor);
  selection_code_2 = 5;
  selection_code = 5;
  sub_140255128((__int64)&callee_output_word, &selection_code, (__int64)scratch_buffer, &selection_code_2);
  scratch_buffer[0] = (uint64)(uintptr_t)(&input_cursor);
  scratch_buffer[1] = (uint64)(uintptr_t)(&input_cursor_2);
  selection_code_2 = 4;
  selection_code = 4;
  return sub_1402551A8((__int64)&callee_output_word, &selection_code, (__int64)scratch_buffer, &selection_code_2);
}

//----- (0000000140255524) ----------------------------------------------------
__int64            sub_140255524(struct __acrt_ptd *     a1)
{
  unsigned int selection_code;
  unsigned int selection_code_2;
  struct __acrt_ptd *input_cursor;
  unsigned int *state_address;
  struct __acrt_ptd **state_address_2;
  _QWORD scratch_buffer[2];
  char callee_output_word;
  unsigned int selection_code_3;
  unsigned int selection_code_4;

  input_cursor = a1;
  state_address_2 = &input_cursor;
  selection_code_3 = 5;
  selection_code_4 = 5;
  scratch_buffer[0] = (uint64)(uintptr_t)(&input_cursor);
  scratch_buffer[1] = (uint64)(uintptr_t)(&state_address);
  selection_code = 4;
  selection_code_2 = 4;
  state_address = (unsigned int *)&g_144CBF778;
  *((_DWORD *)a1 + 10) = 1;
  *(_QWORD *)input_cursor = (uint64)(uintptr_t)(xmmword_140289E60);
  *((_DWORD *)input_cursor + 234) = 1;
  *((_QWORD *)input_cursor + 17) = (uint64)(uintptr_t)(&unk_1403025A0);
  *((_WORD *)input_cursor + 94) = 67;
  *((_WORD *)input_cursor + 225) = 67;
  *((_QWORD *)input_cursor + 116) = 0;
  sub_140255128((__int64)&callee_output_word, &selection_code_4, (__int64)&state_address_2, &selection_code_3);
  return sub_1402551A8((__int64)&callee_output_word, &selection_code_2, (__int64)scratch_buffer, &selection_code);
}

//----- (00000001402555F8) ----------------------------------------------------
void            sub_1402555F8(void **Block)
{
  if ( Block )
  {
    sub_140255710(Block);
    free_base(Block);
  }
}

//----- (0000000140255618) ----------------------------------------------------
__int64            sub_140255618(void **a1)
{
  struct __acrt_ptd *     *scratch_buffer[2];
  void **input_cursor;
  char callee_output_word;
  unsigned int selection_code;
  unsigned int selection_code_2;

  input_cursor = a1;
  if ( *a1 != xmmword_140289E60 )
  {
    free_base(*a1);
    a1 = input_cursor;
  }
  free_base(a1[14]);
  free_base(input_cursor[11]);
  free_base(input_cursor[12]);
  free_base(input_cursor[13]);
  free_base(input_cursor[9]);
  free_base(input_cursor[10]);
  free_base(input_cursor[15]);
  free_base(input_cursor[16]);
  free_base(input_cursor[120]);
  scratch_buffer[0] = (struct __acrt_ptd *     *)&input_cursor;
  selection_code = 5;
  selection_code_2 = 5;
  sub_1402551F0((__int64)&callee_output_word, &selection_code_2, (__int64)scratch_buffer, &selection_code);
  scratch_buffer[0] = (struct __acrt_ptd *     *)&input_cursor;
  selection_code = 4;
  selection_code_2 = 4;
  return sub_140255168((__int64)&callee_output_word, &selection_code_2, scratch_buffer, &selection_code);
}

//----- (0000000140255710) ----------------------------------------------------
__int64            sub_140255710(void **a1)
{
  unsigned int selection_code;
  unsigned int selection_code_2;
  void **input_cursor;
  void ***state_address;
  void ***state_address_2;
  char callee_output_word;
  unsigned int selection_code_3;
  unsigned int selection_code_4;

  input_cursor = a1;
  state_address = &input_cursor;
  selection_code_3 = 5;
  selection_code_4 = 5;
  state_address_2 = &input_cursor;
  selection_code = 4;
  selection_code_2 = 4;
  if ( *a1 != xmmword_140289E60 )
  {
    free_base(*a1);
    a1 = input_cursor;
  }
  free_base(a1[14]);
  free_base(input_cursor[11]);
  free_base(input_cursor[12]);
  free_base(input_cursor[13]);
  free_base(input_cursor[9]);
  free_base(input_cursor[10]);
  free_base(input_cursor[15]);
  free_base(input_cursor[16]);
  free_base(input_cursor[120]);
  sub_1402551F0((__int64)&callee_output_word, &selection_code_4, (__int64)&state_address, &selection_code_3);
  return sub_140255168((__int64)&callee_output_word, &selection_code_2, (struct __acrt_ptd *     **)&state_address_2, &selection_code);
}

//----- (0000000140255818) ----------------------------------------------------
struct __acrt_ptd *internal_get_ptd_head()
{
  unsigned int state_word;
  struct __acrt_ptd *unused_written_slot;
  struct __acrt_ptd *result;
  __int64 allocated_buffer;
  unsigned int state_word_2;
  struct __acrt_ptd *saved_allocated_buffer;
  struct __acrt_ptd *record_pointer;

  state_word = dword_140302410;
  unused_written_slot = nullptr;
  if ( dword_140302410 == -1 )
  {
LABEL_6:
    if ( !(unsigned int)sub_14024F02C(state_word, -1) )
      return nullptr;
    allocated_buffer = sr_directory_calloc(1, 0x3C8);
    state_word_2 = dword_140302410;
    saved_allocated_buffer = (struct __acrt_ptd *)allocated_buffer;
    if ( allocated_buffer )
    {
      if ( (unsigned int)sub_14024F02C(dword_140302410, allocated_buffer) )
      {
        sub_140255524(saved_allocated_buffer);
        record_pointer = saved_allocated_buffer;
        saved_allocated_buffer = nullptr;
        unused_written_slot = record_pointer;
        goto LABEL_13;
      }
      state_word_2 = dword_140302410;
    }
    sub_14024F02C(state_word_2, 0);
LABEL_13:
    free_base(saved_allocated_buffer);
    return unused_written_slot;
  }
  result = (struct __acrt_ptd *)sub_14024EFE4(dword_140302410);
  if ( !result )
  {
    state_word = dword_140302410;
    goto LABEL_6;
  }
  if ( result == (struct __acrt_ptd *)-1LL )
    return nullptr;
  return result;
}

//----- (00000001402558B8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
struct __acrt_ptd *unknown_libname_876()
{
  unsigned int int64_result;
  unsigned int state_word;
  unsigned int saved_int64_result;
  __int64 call_result;
  struct __acrt_ptd *saved_allocated_buffer;
  __int64 allocated_buffer;
  struct __acrt_ptd *record_pointer;

  int64_result = ((__int64 (*)(void))GetLastError)();
  state_word = dword_140302410;
  saved_int64_result = int64_result;
  if ( dword_140302410 != -1 )
  {
    call_result = sub_14024EFE4(dword_140302410);
    saved_allocated_buffer = (struct __acrt_ptd *)call_result;
    if ( call_result )
    {
      if ( call_result == -1 )
        saved_allocated_buffer = nullptr;
      goto LABEL_15;
    }
    state_word = dword_140302410;
  }
  if ( (unsigned int)sub_14024F02C(state_word, -1) )
  {
    allocated_buffer = sr_directory_calloc(1, 0x3C8);
    saved_allocated_buffer = (struct __acrt_ptd *)allocated_buffer;
    if ( allocated_buffer )
    {
      if ( (unsigned int)sub_14024F02C(dword_140302410, allocated_buffer) )
      {
        sub_140255524(saved_allocated_buffer);
        free_base(nullptr);
        goto LABEL_15;
      }
      sub_14024F02C(dword_140302410, 0);
      record_pointer = saved_allocated_buffer;
    }
    else
    {
      sub_14024F02C(dword_140302410, 0);
      record_pointer = nullptr;
    }
    free_base(record_pointer);
  }
  saved_allocated_buffer = nullptr;
LABEL_15:
  ((void (           *)(_QWORD))SetLastError)(saved_int64_result);
  return saved_allocated_buffer;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E258: invalid function type 'void (__stdcall *SetLastError)(DWORD dwErrCode)' has been ignored

//----- (0000000140255988) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1036(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (00000001402559A4) ----------------------------------------------------
void            replace_current_thread_locale_nolock_sr(struct __acrt_ptd *     a1, struct __crt_locale_data *     a2)
{
  __int64 loaded_word;
  __int64 loaded_word_2;

  loaded_word = *((_QWORD *)a1 + 18);
  if ( loaded_word )
  {
    sub_140262A34(loaded_word);
    loaded_word_2 = *((_QWORD *)a1 + 18);
    if ( loaded_word_2 != g_144CBF778 && (__int16 **)loaded_word_2 != &off_140302420 && !*(_DWORD *)(loaded_word_2 + 16) )
      sub_140262834(loaded_word_2);
  }
  *((_QWORD *)a1 + 18) = (uint64)(uintptr_t)(a2);
  if ( a2 )
    sub_1402627A8((__int64)a2);
}

//----- (0000000140255A0C) ----------------------------------------------------
__int64 try_get_ptd_head()
{
  __int64 result;

  if ( dword_140302410 == -1 )
    return 0;
  result = sub_14024EFE4(dword_140302410);
  if ( !result )
    return 0;
  return result;
}

//----- (0000000140255A2C) ----------------------------------------------------
void sub_140255A2C()
{
  void **returned_pointer;

  if ( dword_140302410 != -1 )
  {
    returned_pointer = (void **)sub_14024EFE4(dword_140302410);
    if ( returned_pointer )
    {
      sub_14024F02C(dword_140302410, 0);
      sub_140255710(returned_pointer);
      free_base(returned_pointer);
    }
  }
}

//----- (0000000140255A70) ----------------------------------------------------
__int64 sub_140255A70()
{
  unsigned int int64_result;
  unsigned int state_word;
  unsigned int saved_int64_result;
  __int64 call_result;
  struct __acrt_ptd *saved_allocated_buffer;
  struct __acrt_ptd *record_pointer;
  __int64 allocated_buffer;
  struct __acrt_ptd *record_pointer_2;
  __int64 result;

  int64_result = ((__int64 (*)(void))GetLastError)();
  state_word = dword_140302410;
  saved_int64_result = int64_result;
  if ( dword_140302410 == -1 )
  {
LABEL_6:
    if ( !(unsigned int)sub_14024F02C(state_word, -1) )
      goto LABEL_4;
    allocated_buffer = sr_directory_calloc(1, 0x3C8);
    saved_allocated_buffer = (struct __acrt_ptd *)allocated_buffer;
    if ( allocated_buffer )
    {
      if ( (unsigned int)sub_14024F02C(dword_140302410, allocated_buffer) )
      {
        sub_140255524(saved_allocated_buffer);
        free_base(nullptr);
        goto LABEL_13;
      }
      sub_14024F02C(dword_140302410, 0);
      record_pointer_2 = saved_allocated_buffer;
    }
    else
    {
      sub_14024F02C(dword_140302410, 0);
      record_pointer_2 = nullptr;
    }
    free_base(record_pointer_2);
    goto LABEL_4;
  }
  call_result = sub_14024EFE4(dword_140302410);
  saved_allocated_buffer = (struct __acrt_ptd *)call_result;
  if ( !call_result )
  {
    state_word = dword_140302410;
    goto LABEL_6;
  }
  if ( call_result == -1 )
  {
LABEL_4:
    saved_allocated_buffer = nullptr;
    record_pointer = nullptr;
    goto LABEL_14;
  }
LABEL_13:
  record_pointer = saved_allocated_buffer;
LABEL_14:
  ((void (           *)(_QWORD))SetLastError)(saved_int64_result);
  result = (unsigned __int64)record_pointer & -(__int64)(saved_allocated_buffer != nullptr);
  if ( !result )
    abort();
  return result;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E258: invalid function type 'void (__stdcall *SetLastError)(DWORD dwErrCode)' has been ignored

//----- (0000000140255B44) ----------------------------------------------------
struct __acrt_ptd *sub_140255B44()
{
  unsigned int state_word;
  __int64 call_result;
  struct __acrt_ptd *saved_allocated_buffer;
  __int64 allocated_buffer;
  struct __acrt_ptd *record_pointer;

  state_word = dword_140302410;
  if ( dword_140302410 == -1 )
  {
LABEL_6:
    if ( !(unsigned int)sub_14024F02C(state_word, -1) )
      goto LABEL_15;
    allocated_buffer = sr_directory_calloc(1, 0x3C8);
    saved_allocated_buffer = (struct __acrt_ptd *)allocated_buffer;
    if ( allocated_buffer )
    {
      if ( (unsigned int)sub_14024F02C(dword_140302410, allocated_buffer) )
      {
        sub_140255524(saved_allocated_buffer);
        free_base(nullptr);
        goto LABEL_13;
      }
      sub_14024F02C(dword_140302410, 0);
      record_pointer = saved_allocated_buffer;
    }
    else
    {
      sub_14024F02C(dword_140302410, 0);
      record_pointer = nullptr;
    }
    free_base(record_pointer);
    goto LABEL_15;
  }
  call_result = sub_14024EFE4(dword_140302410);
  saved_allocated_buffer = (struct __acrt_ptd *)call_result;
  if ( !call_result )
  {
    state_word = dword_140302410;
    goto LABEL_6;
  }
  if ( call_result == -1 )
    goto LABEL_15;
LABEL_13:
  if ( !saved_allocated_buffer )
LABEL_15:
    abort();
  return saved_allocated_buffer;
}

//----- (0000000140255BEC) ----------------------------------------------------
__int64 sub_140255BEC()
{
  unsigned int int64_result;
  unsigned int state_word;
  unsigned int saved_int64_result;
  __int64 call_result;
  struct __acrt_ptd *saved_allocated_buffer;
  struct __acrt_ptd *record_pointer;
  __int64 allocated_buffer;
  struct __acrt_ptd *record_pointer_2;

  int64_result = ((__int64 (*)(void))GetLastError)();
  state_word = dword_140302410;
  saved_int64_result = int64_result;
  if ( dword_140302410 == -1 )
  {
LABEL_6:
    if ( !(unsigned int)sub_14024F02C(state_word, -1) )
      goto LABEL_4;
    allocated_buffer = sr_directory_calloc(1, 0x3C8);
    saved_allocated_buffer = (struct __acrt_ptd *)allocated_buffer;
    if ( allocated_buffer )
    {
      if ( (unsigned int)sub_14024F02C(dword_140302410, allocated_buffer) )
      {
        sub_140255524(saved_allocated_buffer);
        free_base(nullptr);
        goto LABEL_13;
      }
      sub_14024F02C(dword_140302410, 0);
      record_pointer_2 = saved_allocated_buffer;
    }
    else
    {
      sub_14024F02C(dword_140302410, 0);
      record_pointer_2 = nullptr;
    }
    free_base(record_pointer_2);
    goto LABEL_4;
  }
  call_result = sub_14024EFE4(dword_140302410);
  saved_allocated_buffer = (struct __acrt_ptd *)call_result;
  if ( !call_result )
  {
    state_word = dword_140302410;
    goto LABEL_6;
  }
  if ( call_result != -1 )
  {
LABEL_13:
    record_pointer = saved_allocated_buffer;
    goto LABEL_14;
  }
LABEL_4:
  saved_allocated_buffer = nullptr;
  record_pointer = nullptr;
LABEL_14:
  ((void (           *)(_QWORD))SetLastError)(saved_int64_result);
  return (unsigned __int64)record_pointer & -(__int64)(saved_allocated_buffer != nullptr);
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E258: invalid function type 'void (__stdcall *SetLastError)(DWORD dwErrCode)' has been ignored

//----- (0000000140255CB8) ----------------------------------------------------
char sub_140255CB8()
{
  dword_140302410 = sub_14024EF54((__int64)sub_1402555F8);
  if ( dword_140302410 == -1 )
    return 0;
  if ( !sub_140255BEC() )
  {
    _acrt_uninitialize_ptd_0();
    return 0;
  }
  return 1;
}

//----- (0000000140255CF4) ----------------------------------------------------
char _acrt_uninitialize_ptd_0()
{
  if ( dword_140302410 != -1 )
  {
    sub_14024EF9C(dword_140302410);
    dword_140302410 = -1;
  }
  return 1;
}

//----- (0000000140255D2C) ----------------------------------------------------
__int64            sub_140255D2C(__int64 a1, __int64 *a2)
{
  __int64 result;

  result = g_144CBF778;
  if ( *a2 != g_144CBF778 )
  {
    result = *(unsigned int *)(a1 + 936);
    if ( ((unsigned int)result & dword_140302B88) == 0 )
    {
      result = sub_140262ADC();
      *a2 = result;
    }
  }
  return result;
}

//----- (0000000140255D60) ----------------------------------------------------
__int64            sub_140255D60(__int64 a1, __int64 *a2)
{
  __int64 result;

  result = g_144CBFA00;
  if ( *a2 != g_144CBFA00 )
  {
    result = *(unsigned int *)(a1 + 936);
    if ( ((unsigned int)result & dword_140302B88) == 0 )
    {
      result = (__int64)sub_14025F580();
      *a2 = result;
    }
  }
  return result;
}

//----- (0000000140255DF8) ----------------------------------------------------
__int64            fp_format_a(
             double *a1,
        __m128i *a2,
        unsigned __int64 a3,
        char *     a4,
        unsigned __int64 a5,
        int a6,
        bool a7,
        unsigned int a8,
        struct __crt_locale_pointers *     a9)
{
  __m128i *input_cursor;
  int byte_count;
  unsigned int fp_format_e_result;
  __int64 loaded_word;
  __m128i *returned_pointer;
  __int8 *state_address;
  __int64 comparison_result;
  __int16 *state_address_2;
  __int8 loaded_word_2;
  __int16 remaining_amount;
  unsigned __int64 remaining_bits;
  unsigned __int16 shifted_bits;
  __int8 *i;
  __int8 scaled_index;
  __int8 scaled_index_2;
  _BYTE *byte_cursor;
  __int64 shifted_bits_2;
  __int64 saved_shifted_bits;
  char selection_code;
  _BYTE *buffer_cursor;
  _QWORD scratch_buffer[3];
  char unrecovered_register_value;

  SR_VEC_PTR_LANES(128, a2, i8)[0] = 0;
  input_cursor = a2;
  byte_count = 0;
  if ( a6 >= 0 )
    byte_count = a6;
  crt_locale_update((_LocaleUpdate *)scratch_buffer, a9);
  if ( a3 <= byte_count + 11 )
  {
    fp_format_e_result = 34;
    *errno_sr() = 34;
    crt_invalid_parameter_noinfo();
    goto LABEL_53;
  }
  loaded_word = *(_QWORD *)a1;
  if ( ((*(_QWORD *)a1 >> 52) & 0x7FFLL) == 0x7FF )
  {
    fp_format_e_result = fp_format_e(a1, SR_VEC_PTR_LANES(128, input_cursor, i8), a3, a4, a5, byte_count, 0, a8, nullptr);
    if ( fp_format_e_result )
    {
      SR_VEC_PTR_LANES(128, input_cursor, i8)[0] = 0;
      goto LABEL_53;
    }
    returned_pointer = sub_14026CD4C(input_cursor, 101);
    if ( returned_pointer )
    {
      SR_VEC_PTR_LANES(128, returned_pointer, i8)[0] = 32 * !a7 + 80;
      SR_VEC_PTR_LANES(128, returned_pointer, i8)[3] = 0;
    }
  }
  else
  {
    if ( loaded_word < 0 )
    {
      SR_VEC_PTR_LANES(128, input_cursor, i8)[0] = 45;
      input_cursor = (__m128i *)((char *)input_cursor + 1);
      loaded_word = *(_QWORD *)a1;
    }
    state_address = &SR_VEC_PTR_LANES(128, input_cursor, i8)[1];
    comparison_result = 1023;
    if ( (loaded_word & 0x7FF0000000000000LL) != 0 )
    {
      SR_VEC_PTR_LANES(128, input_cursor, i8)[0] = 49;
    }
    else
    {
      SR_VEC_PTR_LANES(128, input_cursor, i8)[0] = 48;
      comparison_result = (*(_QWORD *)a1 & 0xFFFFFFFFFFFFFLL) != 0 ? 0x3FE : 0;
    }
    state_address_2 = &SR_VEC_PTR_LANES(128, input_cursor, i16)[1];
    if ( byte_count )
      loaded_word_2 = ***(_BYTE ***)(scratch_buffer[1] + 248LL);
    else
      loaded_word_2 = 0;
    *state_address = loaded_word_2;
    if ( (*(_QWORD *)a1 & 0xFFFFFFFFFFFFFLL) != 0 )
    {
      remaining_amount = 48;
      remaining_bits = 0xF000000000000LL;
      do
      {
        if ( byte_count <= 0 )
          break;
        shifted_bits = ((remaining_bits & *(_QWORD *)a1 & 0xFFFFFFFFFFFFFLL) >> remaining_amount) + 48;
        if ( shifted_bits > 0x39u )
          LOBYTE(shifted_bits) = 32 * !a7 + 7 + shifted_bits;
        *(_BYTE *)state_address_2 = shifted_bits;
        --byte_count;
        state_address_2 = (__int16 *)((char *)state_address_2 + 1);
        remaining_bits >>= 4;
        remaining_amount -= 4;
      }
      while ( remaining_amount >= 0 );
      if ( remaining_amount >= 0 && (unsigned __int16)((remaining_bits & *(_QWORD *)a1 & 0xFFFFFFFFFFFFFLL) >> remaining_amount) > 8u )
      {
        for ( i = (char *)state_address_2 - 1; ; --i )
        {
          scaled_index = *i;
          if ( ((*i - 70) & 0xDF) != 0 )
            break;
          *i = 48;
        }
        if ( i == state_address )
        {
          ++*(i - 1);
        }
        else
        {
          if ( scaled_index == 57 )
            scaled_index_2 = 32 * !a7 + 65;
          else
            scaled_index_2 = scaled_index + 1;
          *i = scaled_index_2;
        }
      }
    }
    if ( byte_count > 0 )
    {
      crt_memset((void *)(uintptr_t)(state_address_2), 0x30u, (unsigned int)byte_count);
      state_address_2 = (__int16 *)((char *)state_address_2 + (unsigned int)byte_count);
    }
    if ( *state_address )
      state_address = (__int8 *)state_address_2;
    *state_address = 32 * !a7 + 80;
    byte_cursor = state_address + 2;
    shifted_bits_2 = ((*(_QWORD *)a1 >> 52) & 0x7FFLL) - comparison_result;
    saved_shifted_bits = shifted_bits_2;
    if ( shifted_bits_2 < 0 )
      shifted_bits_2 = comparison_result - ((*(_QWORD *)a1 >> 52) & 0x7FFLL);
    selection_code = 43;
    buffer_cursor = state_address + 2;
    if ( saved_shifted_bits < 0 )
      selection_code = 45;
    state_address[1] = selection_code;
    *byte_cursor = 48;
    if ( shifted_bits_2 >= 1000 )
    {
      buffer_cursor = state_address + 3;
      *byte_cursor = shifted_bits_2 / 1000 + 48;
      shifted_bits_2 %= 1000;
    }
    if ( buffer_cursor != byte_cursor || shifted_bits_2 >= 100 )
    {
      *buffer_cursor++ = shifted_bits_2 / 100 + 48;
      shifted_bits_2 %= 100;
    }
    if ( buffer_cursor != byte_cursor || shifted_bits_2 >= 10 )
    {
      *buffer_cursor++ = shifted_bits_2 / 10 + 48;
      shifted_bits_2 %= 10;
    }
    *buffer_cursor = shifted_bits_2 + 48;
    buffer_cursor[1] = 0;
  }
  fp_format_e_result = 0;
LABEL_53:
  if ( unrecovered_register_value )
    *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
  return fp_format_e_result;
}

//----- (0000000140256168) ----------------------------------------------------
__int64            fp_format_e(
             double *     a1,
        char *     a2,
        unsigned __int64 a3,
        char *     a4,
        unsigned __int64 a5,
        int a6,
        char a7,
        unsigned int a8,
        struct __crt_locale_pointers *     a9)
{
  __int64 integer_sum;
  __int64 loaded_word;
  _BOOL8 comparison_result;
  _BOOL8 comparison_result_2;
  unsigned __int64 integer_difference;
  __int64 result;
  _DWORD scratch_buffer[6];

  integer_sum = a5;
  loaded_word = *(_QWORD *)a1;
  if ( (unsigned __int64)(unsigned int)(a6 + 2) + 1 < a5 )
    integer_sum = (unsigned int)(a6 + 2) + 1LL;
  _acrt_fltout(loaded_word, a6 + 1, (__int64)scratch_buffer, a4, integer_sum);
  comparison_result = scratch_buffer[0] == 45;
  comparison_result_2 = a6 > 0;
  integer_difference = a3 - comparison_result_2 - comparison_result;
  if ( a3 == -1 )
    integer_difference = -1;
  result = _acrt_fp_strflt_to_string((__int64)&a2[comparison_result_2 + comparison_result], integer_difference, a6 + 1, (__int64)scratch_buffer);
  if ( !(_DWORD)result )
    return fp_format_e_internal(a2, a3, a6, a7, a8, (struct _strflt *    )scratch_buffer, 0, a9);
  *a2 = 0;
  return result;
}

//----- (0000000140256244) ----------------------------------------------------
__int64            fp_format_e_internal(
        char *     a1,
        unsigned __int64 a2,
        int a3,
        char a4,
        unsigned int a5,
        struct _strflt *     a6,
        bool a7,
        struct __crt_locale_pointers *     a8)
{
  int input_value;
  __int64 input_value_2;
  char *source_buffer;
  __int64 element_index;
  char *text_cursor;
  char *state_address;
  __int64 integer_difference;
  __m128i *destination_buffer;
  int loaded_word;
  _QWORD scratch_buffer[3];
  char unrecovered_register_value;

  input_value = 0;
  input_value_2 = a3;
  if ( a3 > 0 )
    input_value = a3;
  if ( a2 > input_value + 9 )
  {
    crt_locale_update((_LocaleUpdate *)scratch_buffer, a8);
    if ( a7 )
    {
      source_buffer = &a1[*(_DWORD *)a6 == 45];
      if ( (int)input_value_2 > 0 )
      {
        element_index = -1;
        do
          ++element_index;
        while ( source_buffer[element_index] );
        crt_memcpy((__m128i *)(source_buffer + 1), (     __m128i *)source_buffer, element_index + 1);
      }
    }
    text_cursor = a1;
    if ( *(_DWORD *)a6 == 45 )
    {
      *a1 = 45;
      text_cursor = a1 + 1;
    }
    if ( (int)input_value_2 > 0 )
    {
      *text_cursor = text_cursor[1];
      *++text_cursor = ***(_BYTE ***)(scratch_buffer[1] + 248LL);
    }
    state_address = &text_cursor[input_value_2 + !a7];
    integer_difference = a1 - state_address + a2;
    if ( a2 == -1 )
      integer_difference = -1;
    if ( (unsigned int)strcpy_s_sr(state_address, integer_difference, (__int64)"e+000") )
    {
      crt_invoke_watson();
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
    destination_buffer = (__m128i *)(state_address + 2);
    if ( a4 )
      *state_address = 69;
    if ( **((_BYTE **)a6 + 1) != 48 )
    {
      loaded_word = *((_DWORD *)a6 + 1) - 1;
      if ( loaded_word < 0 )
      {
        loaded_word = 1 - *((_DWORD *)a6 + 1);
        state_address[1] = 45;
      }
      if ( loaded_word >= 100 )
      {
        state_address[2] += loaded_word / 100;
        loaded_word %= 100;
      }
      if ( loaded_word >= 10 )
      {
        state_address[3] += loaded_word / 10;
        LOBYTE(loaded_word) = loaded_word % 10;
      }
      state_address[4] += loaded_word;
    }
    if ( a5 == 2 && SR_VEC_PTR_LANES(128, destination_buffer, i8)[0] == 48 )
      crt_memcpy(destination_buffer, (     __m128i *)(state_address + 3), 3u);
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
    return 0;
  }
  else
  {
    *errno_sr() = 34;
    crt_invalid_parameter_noinfo();
    return 34;
  }
}

// 140256410: control flows out of bounds to 140256415

//----- (0000000140256418) ----------------------------------------------------
__int64            fp_format_f(
             double *     a1,
        char *     a2,
        __int64 a3,
        char *     a4,
        __int64 a5,
        int a6,
        struct __crt_locale_pointers *     a7)
{
  __int64 loaded_word;
  _BOOL8 table_value;
  unsigned __int64 integer_difference;
  __int64 result;
  _QWORD scratch_buffer[3];

  loaded_word = *(_QWORD *)a1;
  scratch_buffer[0] = 0;
  scratch_buffer[1] = 0;
  _acrt_fltout(loaded_word, a6, (__int64)scratch_buffer, a4, a5);
  table_value = LODWORD(scratch_buffer[0]) == 45;
  integer_difference = a3 - table_value;
  if ( a3 == -1 )
    integer_difference = -1;
  result = _acrt_fp_strflt_to_string((__int64)&a2[table_value], integer_difference, a6 + HIDWORD(scratch_buffer[0]), (__int64)scratch_buffer);
  if ( !(_DWORD)result )
    return fp_format_f_internal(a2, a3, a6, (struct _strflt *    )scratch_buffer, 0, a7);
  *a2 = 0;
  return result;
}

//----- (00000001402564C0) ----------------------------------------------------
__int64            fp_format_f_internal(
        char *     a1,
        __int64 a2,
        int a3,
        struct _strflt *     a4,
        bool a5,
        struct __crt_locale_pointers *     a6)
{
  __int64 loaded_word;
  __int64 element_index;
  __int64 element_index_2;
  char *source_buffer;
  char *byte_cursor;
  __int64 element_index_3;
  int loaded_word_2;
  int integer_difference;
  _QWORD scratch_buffer[3];
  char unrecovered_register_value;

  crt_locale_update((_LocaleUpdate *)scratch_buffer, a6);
  loaded_word = *((int *)a4 + 1);
  if ( a5 && (_DWORD)loaded_word - 1 == a3 )
    *(_WORD *)&a1[(*(_DWORD *)a4 == 45) - 1 + loaded_word] = 48;
  if ( *(_DWORD *)a4 == 45 )
    *a1++ = 45;
  element_index = -1;
  if ( *((int *)a4 + 1) > 0 )
  {
    source_buffer = &a1[*((int *)a4 + 1)];
  }
  else
  {
    element_index_2 = -1;
    do
      ++element_index_2;
    while ( a1[element_index_2] );
    crt_memcpy((__m128i *)(a1 + 1), (     __m128i *)a1, element_index_2 + 1);
    *a1 = 48;
    source_buffer = a1 + 1;
  }
  if ( a3 > 0 )
  {
    byte_cursor = source_buffer + 1;
    element_index_3 = -1;
    do
      ++element_index_3;
    while ( source_buffer[element_index_3] );
    crt_memcpy((__m128i *)(source_buffer + 1), (     __m128i *)source_buffer, element_index_3 + 1);
    *source_buffer = ***(_BYTE ***)(scratch_buffer[1] + 248LL);
    loaded_word_2 = *((_DWORD *)a4 + 1);
    if ( loaded_word_2 < 0 )
    {
      integer_difference = -loaded_word_2;
      if ( a5 || integer_difference < a3 )
        a3 = integer_difference;
      if ( a3 )
      {
        do
          ++element_index;
        while ( byte_cursor[element_index] );
        crt_memcpy((__m128i *)&byte_cursor[a3], (     __m128i *)(source_buffer + 1), element_index + 1);
      }
      crt_memset((void *)(uintptr_t)(source_buffer + 1), 0x30u, a3);
    }
  }
  if ( unrecovered_register_value )
    *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
  return 0;
}

//----- (0000000140256604) ----------------------------------------------------
__int64            sub_140256604(
        __int64 *a1,
        char *a2,
        unsigned __int64 a3,
        _BYTE *a4,
        __int64 a5,
        signed int a6,
        char a7,
        unsigned int a8,
        struct sr_anon_68 *a9)
{
  __int64 loaded_word;
  _BOOL8 table_value;
  int integer_difference;
  unsigned __int64 integer_difference_2;
  char *text_cursor;
  __int64 result;
  int integer_difference_3;
  _QWORD scratch_buffer[3];

  loaded_word = *a1;
  scratch_buffer[0] = 0;
  scratch_buffer[1] = 0;
  _acrt_fltout(loaded_word, a6, (__int64)scratch_buffer, a4, a5);
  table_value = LODWORD(scratch_buffer[0]) == 45;
  integer_difference = HIDWORD(scratch_buffer[0]) - 1;
  integer_difference_2 = a3 - table_value;
  text_cursor = &a2[table_value];
  if ( a3 == -1 )
    integer_difference_2 = -1;
  result = _acrt_fp_strflt_to_string((__int64)&a2[table_value], integer_difference_2, a6, (__int64)scratch_buffer);
  if ( (_DWORD)result )
  {
    *a2 = 0;
  }
  else
  {
    integer_difference_3 = HIDWORD(scratch_buffer[0]) - 1;
    if ( HIDWORD(scratch_buffer[0]) - 1 < -4 || integer_difference_3 >= a6 )
    {
      return fp_format_e_internal(a2, a3, a6, a7, a8, (struct _strflt *    )scratch_buffer, 1, a9);
    }
    else
    {
      if ( integer_difference < integer_difference_3 )
      {
        while ( *text_cursor++ )
          ;
        *(text_cursor - 2) = 0;
      }
      return fp_format_f_internal(a2, a3, a6, (struct _strflt *    )scratch_buffer, 1, a9);
    }
  }
  return result;
}

//----- (0000000140256738) ----------------------------------------------------
__int64            fp_format_nan_or_infinity(
        int a1,
        unsigned __int8 a2,
        _BYTE *a3,
        unsigned __int64 a4,
        unsigned __int8 a5)
{
  __int64 result;
  unsigned __int64 iteration_count;
  __int64 scaled_index;

  if ( a4 >= (unsigned __int64)a2 + 4 )
  {
    iteration_count = -1;
    if ( a2 )
    {
      *a3++ = 45;
      *a3 = 0;
      if ( a4 != -1 )
        --a4;
    }
    scaled_index = 4LL * (unsigned int)(a1 - 1);
    do
      ++iteration_count;
    while ( *((_BYTE *)*(off_14028B000 + 2 * (a5 ^ 1u) + scaled_index) + iteration_count) );
    result = strcpy_s_sr(a3, a4, (__int64)*(off_14028B000 + 2 * (a5 ^ 1) + scaled_index + (a4 <= iteration_count)));
    if ( (_DWORD)result )
    {
      crt_invoke_watson();
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
  }
  else
  {
    *a3 = 0;
    return 12;
  }
  return result;
}

// 1402567D7: control flows out of bounds to 1402567DC

//----- (00000001402567E0) ----------------------------------------------------
void            shift_bytes(char *     a1, __int64 a2,      __m128i *a3, int a4)
{
  __int64 element_index;

  if ( a4 )
  {
    element_index = -1;
    do
      ++element_index;
    while ( SR_VEC_PTR_LANES(128, a3, i8)[element_index] );
    crt_memcpy((__m128i *)((char *)a3 + a4), a3, element_index + 1);
  }
}

//----- (0000000140256818) ----------------------------------------------------
__int64            sub_140256818(
        double *a1,
        __m128i *a2,
        unsigned __int64 a3,
        char *a4,
        unsigned __int64 a5,
        int a6,
        int a7,
        unsigned __int64 a8,
        struct sr_anon_68 *a9)
{
  unsigned __int64 remaining_count;
  __m128i *input_cursor;
  __int64 result;
  bool comparison_result;
  __int64 loaded_word;
  unsigned int unused_written_slot;
  unsigned __int64 comparison_result_2;
  unsigned __int64 shifted_bits;
  unsigned __int64 iteration_count;
  unsigned int state_address;
  __int64 loaded_word_2;
  _BOOL8 table_value;
  unsigned __int64 integer_difference;
  _QWORD scratch_buffer[2];

  remaining_count = a3;
  input_cursor = a2;
  if ( !a2 || !a3 || !a4 || !a5 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 22;
  }
  comparison_result = a6 == 65 || (unsigned int)(a6 - 69) <= 2;
  if ( (a8 & 8) == 0 )
  {
    loaded_word = *(_QWORD *)a1;
    if ( ((*(_QWORD *)a1 >> 52) & 0x7FFLL) == 0x7FF )
    {
      unused_written_slot = 12;
      if ( (loaded_word & 0xFFFFFFFFFFFFFLL) != 0 )
      {
        if ( loaded_word < 0 && (loaded_word & 0xFFFFFFFFFFFFFLL) == 0x8000000000000LL )
          comparison_result_2 = 12;
        else
          comparison_result_2 = (-(__int64)((loaded_word & 0x8000000000000LL) != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 8;
      }
      else
      {
        comparison_result_2 = 0;
      }
      shifted_bits = (unsigned __int64)loaded_word >> 63;
      if ( remaining_count >= shifted_bits + 4 )
      {
        iteration_count = -1;
        if ( (_BYTE)shifted_bits )
        {
          SR_VEC_PTR_LANES(128, input_cursor, i8)[0] = 45;
          input_cursor = (__m128i *)((char *)input_cursor + 1);
          SR_VEC_PTR_LANES(128, input_cursor, i8)[0] = 0;
          if ( remaining_count != -1 )
            --remaining_count;
        }
        do
          ++iteration_count;
        while ( *((_BYTE *)*(off_14028B000 + 2 * !comparison_result + comparison_result_2) + iteration_count) );
        if ( (unsigned int)strcpy_s_sr(input_cursor, remaining_count, (__int64)*(off_14028B000 + 2 * !comparison_result + comparison_result_2 + (remaining_count <= iteration_count))) )
        {
          crt_invoke_watson();
          __debugbreak();
        }
        return 0;
      }
      else
      {
        SR_VEC_PTR_LANES(128, input_cursor, i8)[0] = 0;
      }
      return unused_written_slot;
    }
  }
  state_address = (a8 >> 4) & 1 | 2;
  switch ( a6 )
  {
    case 'A':
      return fp_format_a(a1, input_cursor, remaining_count, a4, a5, a7, comparison_result, state_address, a9);
    case 'E':
      return fp_format_e(a1, SR_VEC_PTR_LANES(128, input_cursor, i8), remaining_count, a4, a5, a7, comparison_result, state_address, a9);
    case 'F':
      goto LABEL_35;
    case 'G':
      return sub_140256604((__int64 *)a1, SR_VEC_PTR_LANES(128, input_cursor, i8), remaining_count, a4, a5, a7, comparison_result, state_address, a9);
    case 'a':
      return fp_format_a(a1, input_cursor, remaining_count, a4, a5, a7, comparison_result, state_address, a9);
    case 'e':
      return fp_format_e(a1, SR_VEC_PTR_LANES(128, input_cursor, i8), remaining_count, a4, a5, a7, comparison_result, state_address, a9);
  }
  if ( a6 != 102 )
    return sub_140256604((__int64 *)a1, SR_VEC_PTR_LANES(128, input_cursor, i8), remaining_count, a4, a5, a7, comparison_result, state_address, a9);
LABEL_35:
  loaded_word_2 = *(_QWORD *)a1;
  scratch_buffer[0] = 0;
  scratch_buffer[1] = 0;
  _acrt_fltout(loaded_word_2, a7, (__int64)scratch_buffer, a4, a5);
  table_value = LODWORD(scratch_buffer[0]) == 45;
  integer_difference = remaining_count - table_value;
  if ( remaining_count == -1 )
    integer_difference = -1;
  result = _acrt_fp_strflt_to_string((__int64)SR_VEC_PTR_LANES(128, input_cursor, i64) + table_value, integer_difference, a7 + HIDWORD(scratch_buffer[0]), (__int64)scratch_buffer);
  if ( !(_DWORD)result )
    return fp_format_f_internal(SR_VEC_PTR_LANES(128, input_cursor, i8), remaining_count, a7, (struct _strflt *    )scratch_buffer, 0, a9);
  SR_VEC_PTR_LANES(128, input_cursor, i8)[0] = 0;
  return result;
}

//----- (0000000140256B1C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_878(unsigned __int16 a1, __int64 a2)
{
  bool comparison_result;

  comparison_result = *(_DWORD *)(a2 + 16) - 2 < 0;
  *(_DWORD *)(a2 + 16) -= 2;
  if ( comparison_result )
    return sub_140251E94(a1, a2);
  **(_WORD **)a2 = a1;
  *(_QWORD *)a2 += 2LL;
  return a1;
}

//----- (0000000140256B38) ----------------------------------------------------
__int64            sub_140256B38(unsigned __int16 a1, __int64 a2)
{
  __int64 running_total;
  bool comparison_result;
  char *fileno_result;
  __int64 fileno_result_2;
  _BYTE *fileno_result_3;
  __int64 fileno_result_4;
  int iteration_count;
  unsigned __int8 *buffer_cursor;
  __int64 unused_local;
  int callee_output_word;
  _BYTE scratch_buffer[12];
  __int64 unused_local_2;

  running_total = a2;
  if ( (*(_DWORD *)(a2 + 20) & 0x1000) != 0 )
  {
    comparison_result = *(_DWORD *)(a2 + 16) - 2 < 0;
    *(_DWORD *)(a2 + 16) -= 2;
    if ( !comparison_result )
    {
      **(_WORD **)a2 = a1;
      *(_QWORD *)a2 += 2LL;
      return a1; /* 0x140256C91: movzx eax, si */
    }
LABEL_22:
    return sub_140251E94(a1, a2); /* 0x140256C80: the call's result stays in rax */
  }
  fileno_result = (char *)&unk_1403022C0;
  if ( fileno((FILE *)a2) == -1 || fileno((FILE *)running_total) == -2 )
  {
    fileno_result_3 = &unk_1403022C0;
  }
  else
  {
    fileno_result_2 = (__int64)fileno((FILE *)running_total) >> 6;
    fileno_result_3 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * fileno_result_2 + 19065401] + 72LL * (fileno((FILE *)running_total) & 0x3F));
  }
  if ( (unsigned __int8)(fileno_result_3[57] - 1) <= 1u )
    goto LABEL_20;
  if ( fileno((FILE *)running_total) != -1 && fileno((FILE *)running_total) != -2 )
  {
    fileno_result_4 = (__int64)fileno((FILE *)running_total) >> 6;
    fileno_result = (char *)(*(_QWORD *)&dword_140404A6C[2 * fileno_result_4 + 19065401] + 72LL * (fileno((FILE *)running_total) & 0x3F));
  }
  iteration_count = 0;
  if ( fileno_result[56] >= 0 )
  {
LABEL_20:
    comparison_result = *(_DWORD *)(running_total + 16) - 2 < 0;
    *(_DWORD *)(running_total + 16) -= 2;
    if ( !comparison_result )
    {
      **(_WORD **)running_total = a1;
      *(_QWORD *)running_total += 2LL;
      return a1; /* 0x140256C91: movzx eax, si */
    }
    a2 = running_total;
    goto LABEL_22;
  }
  int sr_failed;
  if ( !(sr_failed = (int)CDialog__CreateIndirect(
                        (CDialog *)&callee_output_word,
                        (     struct DLGTEMPLATE *)scratch_buffer,
                        (struct CWnd *)5,
                        (void *)a1))
    && callee_output_word > 0 )
  {
    buffer_cursor = scratch_buffer;
    do
    {
      if ( (unsigned int)unknown_libname_207(*buffer_cursor, running_total) == -1 )
        return 0xFFFF; /* 0x140256C5E: je -> mov eax, 0xffff */
      ++iteration_count;
      ++buffer_cursor;
    }
    while ( iteration_count < callee_output_word );
  }
  return sr_failed ? 0xFFFF : a1; /* 0x140256C42: -> mov eax, 0xffff when the conversion failed; else 0x140256C91: movzx eax, si */
}

//----- (0000000140256CB4) ----------------------------------------------------
__int64            fputwchar(unsigned __int16 a1)
{
  char *returned_pointer;

  returned_pointer = sub_14020B528(1u);
  return sub_140256CE0(a1, (__int64)returned_pointer);
}

// 140256CB4: invalid function type 'wint_t __cdecl fputwchar(#57 Character)' has been ignored

//----- (0000000140256CE0) ----------------------------------------------------
__int64            sub_140256CE0(unsigned __int16 a1, __int64 a2)
{
  unsigned __int16 unused_written_slot;

  if ( a2 )
  {
    crt_lock_file(a2);
    unused_written_slot = sub_140256B38(a1, a2);
    crt_unlock_file(a2);
    return unused_written_slot;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFF;
  }
}

//----- (0000000140256D50) ----------------------------------------------------
int         get_printf_count_output()
{
  return g_144CBF770 == (_security_cookie | 1LL);
}

//----- (0000000140256D90) ----------------------------------------------------
__int64 sub_140256D90()
{
  __int64 call_result;
  __int64 loaded_word;

  call_result = sub_140255A70();
  loaded_word = *(_QWORD *)(call_result + 144);
  sub_140255D2C(call_result, &loaded_word);
  return loaded_word + 8;
}

//----- (0000000140256DC0) ----------------------------------------------------
     unsigned __int16 *        sub_140256DC0()
{
  __int64 call_result;
       unsigned __int16 **loaded_record_pointer;

  call_result = sub_140255A70();
  loaded_record_pointer = *(     unsigned __int16 ***)(call_result + 144);
  sub_140255D2C(call_result, (__int64 *)&loaded_record_pointer);
  return *loaded_record_pointer;
}

//----- (0000000140256E00) ----------------------------------------------------
__int64            sub_140256E00(unsigned __int16 a1, __int16 a2)
{
  __int16 masked_bits;

  if ( a1 != 0xFFFF )
  {
    if ( a1 < 0x100u )
    {
      masked_bits = *(_WORD *)&off_140302598[a1][0];
      return (unsigned __int16)(a2 & masked_bits);
    }
    if ( (unsigned int)sub_140269844() )
    {
      masked_bits = 0;
      return (unsigned __int16)(a2 & masked_bits);
    }
  }
  return 0;
}

//----- (0000000140256EA0) ----------------------------------------------------
__int64            isctype_l(int a1, __int64 a2, struct __crt_locale_pointers *a3)
{
  __int64 selection_code;
  __int64 unused_local;
  char byte1_result;
  char unused_written_slot;
  char unused_written_slot_2;
  __int64 callee_output_word;
  __int64 callee_output_word_2;
  char unrecovered_register_value;
  int selection_flag;
  __int16 unused_written_slot_3;
  __int64 unused_local_2;

  unsigned int sr_result = 0; /* 0x140256F69: xor eax, eax */
  crt_locale_update((_LocaleUpdate *)&callee_output_word, a3);
  if ( (unsigned int)(a1 + 1) <= 0x100 )
  {
    sr_result = *(unsigned __int16 *)(*(_QWORD *)callee_output_word_2 + 2LL * a1) & (unsigned int)a2; /* 0x140256EEC: movzx eax, word ptr [rcx + rdi*2]; and eax, esi */
    goto LABEL_9;
  }
  if ( *(__int16 *)(*(_QWORD *)callee_output_word_2 + 2LL * BYTE1(a1)) >= 0 )
  {
    byte1_result = a1;
    selection_code = 1;
    unused_written_slot = 0;
  }
  else
  {
    byte1_result = BYTE1(a1);
    selection_code = 2;
    unused_written_slot = a1;
    unused_written_slot_2 = 0;
  }
  selection_flag = 0;
  unused_written_slot_3 = 0;
  if ( (unsigned int)sub_140262618(
                       (struct __crt_locale_pointers *)&callee_output_word_2,
                       1u,
                       (__int64)&byte1_result,
                       selection_code,
                       (__int64)&selection_flag,
                       *(_DWORD *)(callee_output_word_2 + 12),
                       1) )
  {
    sr_result = (unsigned __int16)selection_flag & (unsigned int)a2; /* 0x140256F6D: movzx eax, word ptr [rbp - 0x18]; and eax, esi */
LABEL_9:
    if ( unrecovered_register_value )
      *(_DWORD *)(callee_output_word + 936) &= ~2u;
  }
  else if ( unrecovered_register_value )
  {
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  }
  return sr_result; /* 0x140256F71: and eax, esi */
}

// 140256EA0: invalid function type 'int __cdecl isctype_l(int C, int Type, _locale_t Locale)' has been ignored

//----- (0000000140256FEC) ----------------------------------------------------
__int64            sub_140256FEC(unsigned __int8 a1)
{
  int call_result;
  unsigned int unused_written_slot;

  call_result = sub_1402573C0(a1);
  unused_written_slot = 0;
  if ( call_result || a1 == 95 )
    return 1;
  return unused_written_slot;
}

//----- (0000000140257014) ----------------------------------------------------
__int64            sub_140257014(unsigned int a1)
{
  int call_result;
  unsigned int unused_written_slot;

  call_result = sub_140257430(a1);
  unused_written_slot = 0;
  if ( call_result || a1 == 95 )
    return 1;
  return unused_written_slot;
}

//----- (0000000140257044) ----------------------------------------------------
__int64            sub_140257044(unsigned int a1, struct __crt_locale_pointers *a2)
{
  __int64 result;
  __int64 callee_output_word;
  __int128 Locale;
  char unrecovered_register_value;

  crt_locale_update((_LocaleUpdate *)&callee_output_word, a2);
  result = crt_isctype_l(a1, 263, (struct __crt_locale_pointers *)&Locale);
  if ( unrecovered_register_value )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  return result;
}

//----- (0000000140257080) ----------------------------------------------------
__int64            sub_140257080(unsigned int a1, struct __crt_locale_pointers *a2)
{
  __int64 result;
  __int64 callee_output_word;
  __int128 Locale;
  char unrecovered_register_value;

  crt_locale_update((_LocaleUpdate *)&callee_output_word, a2);
  result = crt_isctype_l(a1, 259, (struct __crt_locale_pointers *)&Locale);
  if ( unrecovered_register_value )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  return result;
}

//----- (00000001402570BC) ----------------------------------------------------
__int64            sub_1402570BC(unsigned int a1, struct __crt_locale_pointers *a2)
{
  __int64 result;
  __int64 callee_output_word;
  __int128 Locale;
  char unrecovered_register_value;

  crt_locale_update((_LocaleUpdate *)&callee_output_word, a2);
  if ( a1 == 9 )
    result = 64;
  else
    result = crt_isctype_l(a1, 64, (struct __crt_locale_pointers *)&Locale);
  if ( unrecovered_register_value )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  return result;
}

//----- (0000000140257104) ----------------------------------------------------
__int64            sub_140257104(unsigned int a1, struct __crt_locale_pointers *a2)
{
  __int64 result;
  __int64 callee_output_word;
  __int128 Locale;
  char unrecovered_register_value;

  crt_locale_update((_LocaleUpdate *)&callee_output_word, a2);
  result = crt_isctype_l(a1, 32, (struct __crt_locale_pointers *)&Locale);
  if ( unrecovered_register_value )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  return result;
}

//----- (0000000140257140) ----------------------------------------------------
__int64            sub_140257140(unsigned int a1, struct __crt_locale_pointers *a2)
{
  int isctype_l_result;
  __int64 result;
  __int64 callee_output_word;
  __int128 Locale;
  char unrecovered_register_value;

  crt_locale_update((_LocaleUpdate *)&callee_output_word, a2);
  isctype_l_result = crt_isctype_l(a1, 263, (struct __crt_locale_pointers *)&Locale);
  result = 0;
  if ( unrecovered_register_value )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  if ( isctype_l_result || a1 == 95 )
    return 1;
  return result;
}

//----- (0000000140257190) ----------------------------------------------------
__int64            sub_140257190(unsigned int a1, struct __crt_locale_pointers *a2)
{
  int isctype_l_result;
  __int64 result;
  __int64 callee_output_word;
  __int128 Locale;
  char unrecovered_register_value;

  crt_locale_update((_LocaleUpdate *)&callee_output_word, a2);
  isctype_l_result = crt_isctype_l(a1, 259, (struct __crt_locale_pointers *)&Locale);
  result = 0;
  if ( unrecovered_register_value )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  if ( isctype_l_result || a1 == 95 )
    return 1;
  return result;
}

//----- (00000001402571E0) ----------------------------------------------------
__int64            sub_1402571E0(unsigned int a1, struct __crt_locale_pointers *a2)
{
  __int64 result;
  __int64 callee_output_word;
  __int128 Locale;
  char unrecovered_register_value;

  crt_locale_update((_LocaleUpdate *)&callee_output_word, a2);
  result = crt_isctype_l(a1, 4, (struct __crt_locale_pointers *)&Locale);
  if ( unrecovered_register_value )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  return result;
}

//----- (000000014025721C) ----------------------------------------------------
__int64            sub_14025721C(unsigned int a1, struct __crt_locale_pointers *a2)
{
  __int64 result;
  __int64 callee_output_word;
  __int128 Locale;
  char unrecovered_register_value;

  crt_locale_update((_LocaleUpdate *)&callee_output_word, a2);
  result = crt_isctype_l(a1, 279, (struct __crt_locale_pointers *)&Locale);
  if ( unrecovered_register_value )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  return result;
}

//----- (0000000140257258) ----------------------------------------------------
__int64            sub_140257258(unsigned int a1, struct __crt_locale_pointers *a2)
{
  __int64 result;
  __int64 callee_output_word;
  __int128 Locale;
  char unrecovered_register_value;

  crt_locale_update((_LocaleUpdate *)&callee_output_word, a2);
  result = crt_isctype_l(a1, 2, (struct __crt_locale_pointers *)&Locale);
  if ( unrecovered_register_value )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  return result;
}

//----- (0000000140257294) ----------------------------------------------------
__int64            sub_140257294(unsigned int a1, struct __crt_locale_pointers *a2)
{
  __int64 result;
  __int64 callee_output_word;
  __int64 callee_output_word_2;
  char unrecovered_register_value;

  crt_locale_update((_LocaleUpdate *)&callee_output_word, a2);
  result = crt_isctype_l(a1, 343, (struct __crt_locale_pointers *)&callee_output_word_2);
  if ( unrecovered_register_value )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  return result;
}

//----- (00000001402572D0) ----------------------------------------------------
__int64            sub_1402572D0(unsigned int a1, struct __crt_locale_pointers *a2)
{
  __int64 result;
  __int64 callee_output_word;
  __int64 callee_output_word_2;
  char unrecovered_register_value;

  crt_locale_update((_LocaleUpdate *)&callee_output_word, a2);
  result = crt_isctype_l(a1, 16, (struct __crt_locale_pointers *)&callee_output_word_2);
  if ( unrecovered_register_value )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  return result;
}

//----- (000000014025730C) ----------------------------------------------------
__int64            sub_14025730C(unsigned int a1, struct __crt_locale_pointers *a2)
{
  __int64 result;
  __int64 callee_output_word;
  __int64 callee_output_word_2;
  char unrecovered_register_value;

  crt_locale_update((_LocaleUpdate *)&callee_output_word, a2);
  result = crt_isctype_l(a1, 8, (struct __crt_locale_pointers *)&callee_output_word_2);
  if ( unrecovered_register_value )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  return result;
}

//----- (0000000140257348) ----------------------------------------------------
__int64            sub_140257348(unsigned int a1, struct __crt_locale_pointers *a2)
{
  __int64 result;
  __int64 callee_output_word;
  __int64 callee_output_word_2;
  char unrecovered_register_value;

  crt_locale_update((_LocaleUpdate *)&callee_output_word, a2);
  result = crt_isctype_l(a1, 1, (struct __crt_locale_pointers *)&callee_output_word_2);
  if ( unrecovered_register_value )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  return result;
}

//----- (0000000140257384) ----------------------------------------------------
__int64            sub_140257384(unsigned int a1, struct __crt_locale_pointers *a2)
{
  __int64 result;
  __int64 callee_output_word;
  __int64 callee_output_word_2;
  char unrecovered_register_value;

  crt_locale_update((_LocaleUpdate *)&callee_output_word, a2);
  result = crt_isctype_l(a1, 128, (struct __crt_locale_pointers *)&callee_output_word_2);
  if ( unrecovered_register_value )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  return result;
}

//----- (00000001402573C0) ----------------------------------------------------
__int64            sub_1402573C0(unsigned int a1)
{
  unsigned int unused_written_slot;
  __int64 result;
  __int64 callee_output_word;
  __int64 callee_output_word_2;
  char unrecovered_register_value;

  unused_written_slot = 0;
  if ( g_144CBF178 )
  {
    crt_locale_update((_LocaleUpdate *)&callee_output_word, nullptr);
    result = crt_isctype_l(a1, 263, (struct __crt_locale_pointers *)&callee_output_word_2);
    if ( unrecovered_register_value )
      *(_DWORD *)(callee_output_word + 936) &= ~2u;
  }
  else
  {
    if ( a1 + 1 <= 0x100 )
      return off_140302420[a1] & 0x107;
    return unused_written_slot;
  }
  return result;
}

//----- (0000000140257430) ----------------------------------------------------
__int64            sub_140257430(unsigned int a1)
{
  unsigned int unused_written_slot;
  __int64 result;
  __int64 callee_output_word;
  __int64 callee_output_word_2;
  char unrecovered_register_value;

  unused_written_slot = 0;
  if ( g_144CBF178 )
  {
    crt_locale_update((_LocaleUpdate *)&callee_output_word, nullptr);
    result = crt_isctype_l(a1, 259, (struct __crt_locale_pointers *)&callee_output_word_2);
    if ( unrecovered_register_value )
      *(_DWORD *)(callee_output_word + 936) &= ~2u;
  }
  else
  {
    if ( a1 + 1 <= 0x100 )
      return off_140302420[a1] & 0x103;
    return unused_written_slot;
  }
  return result;
}

//----- (00000001402574A0) ----------------------------------------------------
__int64            sub_1402574A0(unsigned int a1)
{
  unsigned int unused_written_slot;
  __int64 result;
  __int64 callee_output_word;
  __int64 callee_output_word_2;
  char unrecovered_register_value;

  unused_written_slot = 0;
  if ( g_144CBF178 )
  {
    crt_locale_update((_LocaleUpdate *)&callee_output_word, nullptr);
    if ( a1 == 9 )
      result = 64;
    else
      result = crt_isctype_l(a1, 64, (struct __crt_locale_pointers *)&callee_output_word_2);
    if ( unrecovered_register_value )
      *(_DWORD *)(callee_output_word + 936) &= ~2u;
  }
  else if ( a1 == 9 )
  {
    return 64;
  }
  else
  {
    if ( a1 + 1 <= 0x100 )
      return off_140302420[a1] & 0x40;
    return unused_written_slot;
  }
  return result;
}

//----- (0000000140257524) ----------------------------------------------------
__int64            sub_140257524(unsigned int a1)
{
  unsigned int unused_written_slot;
  __int64 result;
  __int64 callee_output_word;
  __int64 callee_output_word_2;
  char unrecovered_register_value;

  unused_written_slot = 0;
  if ( g_144CBF178 )
  {
    crt_locale_update((_LocaleUpdate *)&callee_output_word, nullptr);
    result = crt_isctype_l(a1, 32, (struct __crt_locale_pointers *)&callee_output_word_2);
    if ( unrecovered_register_value )
      *(_DWORD *)(callee_output_word + 936) &= ~2u;
  }
  else
  {
    if ( a1 + 1 <= 0x100 )
      return off_140302420[a1] & 0x20;
    return unused_written_slot;
  }
  return result;
}

//----- (0000000140257590) ----------------------------------------------------
__int64            sub_140257590(unsigned int a1)
{
  unsigned int unused_written_slot;
  __int64 result;
  __int64 callee_output_word;
  __int64 callee_output_word_2;
  char unrecovered_register_value;

  unused_written_slot = 0;
  if ( g_144CBF178 )
  {
    crt_locale_update((_LocaleUpdate *)&callee_output_word, nullptr);
    result = crt_isctype_l(a1, 4, (struct __crt_locale_pointers *)&callee_output_word_2);
    if ( unrecovered_register_value )
      *(_DWORD *)(callee_output_word + 936) &= ~2u;
  }
  else
  {
    if ( a1 + 1 <= 0x100 )
      return off_140302420[a1] & 4;
    return unused_written_slot;
  }
  return result;
}

//----- (00000001402575FC) ----------------------------------------------------
__int64            sub_1402575FC(unsigned int a1)
{
  unsigned int unused_written_slot;
  __int64 result;
  __int64 callee_output_word;
  __int64 callee_output_word_2;
  char unrecovered_register_value;

  unused_written_slot = 0;
  if ( g_144CBF178 )
  {
    crt_locale_update((_LocaleUpdate *)&callee_output_word, nullptr);
    result = crt_isctype_l(a1, 279, (struct __crt_locale_pointers *)&callee_output_word_2);
    if ( unrecovered_register_value )
      *(_DWORD *)(callee_output_word + 936) &= ~2u;
  }
  else
  {
    if ( a1 + 1 <= 0x100 )
      return off_140302420[a1] & 0x117;
    return unused_written_slot;
  }
  return result;
}

//----- (000000014025766C) ----------------------------------------------------
__int64            sub_14025766C(unsigned int a1)
{
  unsigned int unused_written_slot;
  __int64 result;
  __int64 callee_output_word;
  __int64 callee_output_word_2;
  char unrecovered_register_value;

  unused_written_slot = 0;
  if ( g_144CBF178 )
  {
    crt_locale_update((_LocaleUpdate *)&callee_output_word, nullptr);
    result = crt_isctype_l(a1, 2, (struct __crt_locale_pointers *)&callee_output_word_2);
    if ( unrecovered_register_value )
      *(_DWORD *)(callee_output_word + 936) &= ~2u;
  }
  else
  {
    if ( a1 + 1 <= 0x100 )
      return off_140302420[a1] & 2;
    return unused_written_slot;
  }
  return result;
}

//----- (00000001402576D8) ----------------------------------------------------
__int64            sub_1402576D8(unsigned int a1)
{
  unsigned int unused_written_slot;
  __int64 result;
  __int64 callee_output_word;
  __int64 callee_output_word_2;
  char unrecovered_register_value;

  unused_written_slot = 0;
  if ( g_144CBF178 )
  {
    crt_locale_update((_LocaleUpdate *)&callee_output_word, nullptr);
    result = crt_isctype_l(a1, 343, (struct __crt_locale_pointers *)&callee_output_word_2);
    if ( unrecovered_register_value )
      *(_DWORD *)(callee_output_word + 936) &= ~2u;
  }
  else
  {
    if ( a1 + 1 <= 0x100 )
      return off_140302420[a1] & 0x157;
    return unused_written_slot;
  }
  return result;
}

//----- (0000000140257748) ----------------------------------------------------
__int64            sub_140257748(unsigned int a1)
{
  unsigned int unused_written_slot;
  __int64 result;
  __int64 callee_output_word;
  __int64 callee_output_word_2;
  char unrecovered_register_value;

  unused_written_slot = 0;
  if ( g_144CBF178 )
  {
    crt_locale_update((_LocaleUpdate *)&callee_output_word, nullptr);
    result = crt_isctype_l(a1, 16, (struct __crt_locale_pointers *)&callee_output_word_2);
    if ( unrecovered_register_value )
      *(_DWORD *)(callee_output_word + 936) &= ~2u;
  }
  else
  {
    if ( a1 + 1 <= 0x100 )
      return off_140302420[a1] & 0x10;
    return unused_written_slot;
  }
  return result;
}

//----- (00000001402577B4) ----------------------------------------------------
__int64            sub_1402577B4(unsigned int a1)
{
  unsigned int unused_written_slot;
  __int64 result;
  __int64 callee_output_word;
  __int64 callee_output_word_2;
  char unrecovered_register_value;

  unused_written_slot = 0;
  if ( g_144CBF178 )
  {
    crt_locale_update((_LocaleUpdate *)&callee_output_word, nullptr);
    result = crt_isctype_l(a1, 8, (struct __crt_locale_pointers *)&callee_output_word_2);
    if ( unrecovered_register_value )
      *(_DWORD *)(callee_output_word + 936) &= ~2u;
  }
  else
  {
    if ( a1 + 1 <= 0x100 )
      return off_140302420[a1] & 8;
    return unused_written_slot;
  }
  return result;
}

//----- (0000000140257820) ----------------------------------------------------
__int64            sub_140257820(unsigned int a1)
{
  unsigned int unused_written_slot;
  __int64 result;
  __int64 callee_output_word;
  __int128 Locale;
  char unrecovered_register_value;

  unused_written_slot = 0;
  if ( g_144CBF178 )
  {
    crt_locale_update((_LocaleUpdate *)&callee_output_word, nullptr);
    result = crt_isctype_l(a1, 1, (struct __crt_locale_pointers *)&Locale);
    if ( unrecovered_register_value )
      *(_DWORD *)(callee_output_word + 936) &= ~2u;
  }
  else
  {
    if ( a1 + 1 <= 0x100 )
      return off_140302420[a1] & 1;
    return unused_written_slot;
  }
  return result;
}

//----- (000000014025788C) ----------------------------------------------------
__int64            sub_14025788C(unsigned int a1)
{
  unsigned int unused_written_slot;
  __int64 result;
  __int64 callee_output_word;
  __int128 Locale;
  char unrecovered_register_value;

  unused_written_slot = 0;
  if ( g_144CBF178 )
  {
    crt_locale_update((_LocaleUpdate *)&callee_output_word, nullptr);
    result = crt_isctype_l(a1, 128, (struct __crt_locale_pointers *)&Locale);
    if ( unrecovered_register_value )
      *(_DWORD *)(callee_output_word + 936) &= ~2u;
  }
  else
  {
    if ( a1 + 1 <= 0x100 )
      return off_140302420[a1] & 0x80;
    return unused_written_slot;
  }
  return result;
}

//----- (00000001402578FC) ----------------------------------------------------
__int64            fgetwc_nolock(FILE *Stream)
{
  __int64 selection_code;
  char *fileno_result;
  __int64 fileno_result_2;
  _BYTE *fileno_result_3;
  unsigned __int16 *saved_getc_nolock_result;
  int getc_nolock_result;
  __int64 result;
  __int64 fileno_result_4;
  int getc_nolock_result_2;
  int getc_nolock_result_3;
  int loaded_word;
  unsigned __int16 callee_output_word;
  char callee_output_word_2;
  __int64 DstCh;
  char SrcCh;
  char unused_written_slot;

  selection_code = 1;
  fileno_result = (char *)&unk_1403022C0;
  if ( (*((_DWORD *)Stream + 5) & 0x1000) == 0 )
  {
    if ( fileno(Stream) == -1 || fileno(Stream) == -2 )
    {
      fileno_result_3 = &unk_1403022C0;
    }
    else
    {
      fileno_result_2 = (__int64)fileno(Stream) >> 6;
      fileno_result_3 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * fileno_result_2 + 19065401] + 72LL * (fileno(Stream) & 0x3F));
    }
    if ( fileno_result_3[57] )
    {
      saved_getc_nolock_result = &callee_output_word;
      while ( 1 )
      {
        getc_nolock_result = getc_nolock(Stream);
        if ( getc_nolock_result == -1 )
          break;
        *(_BYTE *)saved_getc_nolock_result = getc_nolock_result;
        saved_getc_nolock_result = (unsigned __int16 *)((char *)saved_getc_nolock_result + 1);
        if ( saved_getc_nolock_result == (unsigned __int16 *)&callee_output_word_2 )
          return callee_output_word;
      }
      return 0xFFFF;
    }
  }
  if ( (*((_DWORD *)Stream + 5) & 0x1000) != 0 )
    goto LABEL_25;
  if ( fileno(Stream) != -1 && fileno(Stream) != -2 )
  {
    fileno_result_4 = (__int64)fileno(Stream) >> 6;
    fileno_result = (char *)(*(_QWORD *)&dword_140404A6C[2 * fileno_result_4 + 19065401] + 72LL * (fileno(Stream) & 0x3F));
  }
  if ( fileno_result[56] >= 0 )
  {
LABEL_25:
    loaded_word = *((_DWORD *)Stream + 4);
    if ( loaded_word < 2 )
    {
      return _acrt_stdio_refill_and_read_wide_nolock(Stream);
    }
    else
    {
      *((_DWORD *)Stream + 4) = loaded_word - 2;
      result = **(unsigned __int16 **)Stream;
      *(_QWORD *)Stream += 2LL;
    }
  }
  else
  {
    getc_nolock_result_2 = getc_nolock(Stream);
    if ( getc_nolock_result_2 == -1 )
      return 0xFFFF;
    SrcCh = getc_nolock_result_2;
    if ( (sub_140256DC0()[(unsigned __int8)getc_nolock_result_2] & 0x8000u) != 0 )
    {
      getc_nolock_result_3 = getc_nolock(Stream);
      if ( getc_nolock_result_3 == -1 )
      {
        sub_14020CFB8(SrcCh, Stream);
        return 0xFFFF;
      }
      unused_written_slot = getc_nolock_result_3;
      selection_code = 2;
    }
    if ( (unsigned int)sub_140254140((sr_anon_115 *)&DstCh, (sr_anon_49 *)&SrcCh, (char *)selection_code) == -1 )
    {
      *errno_sr() = 42;
      return 0xFFFF;
    }
    return (unsigned __int16)DstCh;
  }
  return result;
}

// 1402578FC: invalid function type 'wint_t __cdecl fgetwc_nolock(FILE *Stream)' has been ignored

//----- (0000000140257AA0) ----------------------------------------------------
__int64 sub_140257AA0()
{
  char *returned_pointer;

  returned_pointer = sub_14020B528(0);
  return fgetwc_sr((FILE *)returned_pointer);
}

//----- (0000000140257AB8) ----------------------------------------------------
// attributes: thunk
__int64            j__fgetwc_nolock(FILE *Stream)
{
  return fgetwc_nolock(Stream);
}

//----- (0000000140257AC0) ----------------------------------------------------
__int64            fgetwc_sr(FILE *Stream)
{
  unsigned __int16 unused_written_slot;

  if ( Stream )
  {
    crt_lock_file((__int64)Stream);
    unused_written_slot = fgetwc_nolock(Stream);
    crt_unlock_file((__int64)Stream);
    return unused_written_slot;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFF;
  }
}

// 140257AC0: invalid function type 'wint_t __cdecl fgetwc(FILE *Stream)' has been ignored

//----- (0000000140257B20) ----------------------------------------------------
__int64 sub_140257B20()
{
  char *returned_pointer;

  returned_pointer = sub_14020B528(0);
  return fgetwc_sr((FILE *)returned_pointer);
}

// 140257B20: invalid function type 'wint_t __cdecl sub_140257B20()' has been ignored

//----- (0000000140257B98) ----------------------------------------------------
__int64            ungetwc_text_mode_nolock(unsigned __int16 a1, __int64 a2)
{
  __int64 fileno_result;
  _BYTE *fileno_result_2;
  char table_value;
  int cached_sizeconverted;
  unsigned __int64 loaded_word;
  __int64 remaining_count;
  char integer_difference;
  __int64 unused_local;
  unsigned __int16 input_value;
  int SizeConverted;
  char MbCh[4];
  char unused_written_slot;
  __int64 unused_local_2;

  input_value = a1;
  if ( fileno((FILE *)a2) == -1 || fileno((FILE *)a2) == -2 )
  {
    fileno_result_2 = &unk_1403022C0;
  }
  else
  {
    fileno_result = (__int64)fileno((FILE *)a2) >> 6;
    fileno_result_2 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * fileno_result + 19065401] + 72LL * (fileno((FILE *)a2) & 0x3F));
  }
  table_value = fileno_result_2[57];
  SizeConverted = 0;
  *(_DWORD *)MbCh = 0;
  unused_written_slot = 0;
  if ( table_value )
  {
    cached_sizeconverted = 2;
    MbCh[1] = HIBYTE(input_value);
    SizeConverted = 2;
    MbCh[0] = a1;
  }
  else
  {
    if ( (unsigned int)CDialog__CreateIndirect(
                         (CDialog *)&SizeConverted,
                         (     struct DLGTEMPLATE *)MbCh,
                         (struct CWnd *)5,
                         (void *)a1) )
      return 0xFFFF; /* 0x140257CC9: mov eax, 0xffff */
    cached_sizeconverted = SizeConverted;
  }
  loaded_word = cached_sizeconverted + *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 < loaded_word )
  {
    if ( *(_DWORD *)(a2 + 16) || cached_sizeconverted > *(_DWORD *)(a2 + 32) )
      return 0xFFFF; /* 0x140257CC9: mov eax, 0xffff */
    *(_QWORD *)a2 = loaded_word;
  }
  remaining_count = cached_sizeconverted - 1;
  if ( cached_sizeconverted - 1 >= 0 )
  {
    do
    {
      --*(_QWORD *)a2;
      integer_difference = MbCh[remaining_count--];
      **(_BYTE **)a2 = integer_difference;
    }
    while ( remaining_count >= 0 );
    cached_sizeconverted = SizeConverted;
  }
  *(_DWORD *)(a2 + 16) += cached_sizeconverted;
  _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFFF7);
  _InterlockedOr((volatile signed __int32 *)(a2 + 20), 1u);
  return input_value; /* 0x140257CA6: movzx eax, word ptr [rbp - 0x20] */
}

//----- (0000000140257CD0) ----------------------------------------------------
__int64            ungetwc_nolock(unsigned __int16 a1, __int64 a2, ...)
{
  unsigned __int16 unused_written_slot;
  int loaded_word;
  __int64 fileno_result;
  char *fileno_result_2;
  unsigned __int64 loaded_word_2;
  __int64 loaded_word_3;
  int shifted_bits;
  unsigned __int16 *loaded_record_pointer;

  unused_written_slot = -1;
  if ( a1 == 0xFFFF )
    return unused_written_slot;
  loaded_word = *(_DWORD *)(a2 + 20);
  if ( (loaded_word & 1) == 0 && ((loaded_word & 4) == 0 || (*(_DWORD *)(a2 + 20) & 2) != 0) )
    return unused_written_slot;
  if ( !*(_QWORD *)(a2 + 8) )
    sub_140253EF8(a2);
  if ( (*(_DWORD *)(a2 + 20) & 0x1000) == 0 )
  {
    if ( fileno((FILE *)a2) == -1 || fileno((FILE *)a2) == -2 )
    {
      fileno_result_2 = (char *)&unk_1403022C0;
    }
    else
    {
      fileno_result = (__int64)fileno((FILE *)a2) >> 6;
      fileno_result_2 = (char *)(*(_QWORD *)&dword_140404A6C[2 * fileno_result + 19065401] + 72LL * (fileno((FILE *)a2) & 0x3F));
    }
    if ( fileno_result_2[56] < 0 )
      return ungetwc_text_mode_nolock(a1, a2);
  }
  loaded_word_2 = *(_QWORD *)(a2 + 8) + 2LL;
  if ( *(_QWORD *)a2 < loaded_word_2 )
  {
    if ( *(_DWORD *)(a2 + 16) || *(_DWORD *)(a2 + 32) < 2u )
      return unused_written_slot;
    *(_QWORD *)a2 = loaded_word_2;
  }
  loaded_word_3 = *(_QWORD *)a2;
  shifted_bits = *(_DWORD *)(a2 + 20) >> 12;
  loaded_record_pointer = (unsigned __int16 *)(*(_QWORD *)a2 - 2LL);
  *(_QWORD *)a2 = (uint64)(uintptr_t)(loaded_record_pointer);
  if ( (shifted_bits & 1) == 0 )
  {
    *loaded_record_pointer = a1;
    goto LABEL_22;
  }
  if ( *loaded_record_pointer == a1 )
  {
LABEL_22:
    *(_DWORD *)(a2 + 16) += 2;
    _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFFF7);
    _InterlockedOr((volatile signed __int32 *)(a2 + 20), 1u);
    return a1;
  }
  *(_QWORD *)a2 = loaded_word_3;
  return unused_written_slot;
}

// 140257CD0: invalid function type 'wint_t __cdecl ungetwc_nolock(wint_t Character, FILE *Stream)' has been ignored

//----- (0000000140257E0C) ----------------------------------------------------
__int64            ungetwc_sr(unsigned __int16 a1, __int64 a2)
{
  unsigned __int16 unused_written_slot;

  if ( a2 )
  {
    crt_lock_file(a2);
    unused_written_slot = ungetwc_nolock(a1, a2);
    crt_unlock_file(a2);
    return unused_written_slot;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFF;
  }
}

// 140257E0C: invalid function type 'wint_t __cdecl ungetwc(wint_t Character, FILE *Stream)' has been ignored

//----- (0000000140257E6C) ----------------------------------------------------
int         sub_140257E6C()
{
  __int16 control;
  int common_round_control;

  control = _acrt_fenv_get_control_sr();
  common_round_control = _acrt_fenv_get_common_round_control_sr(control);
  switch ( common_round_control )
  {
    case 0:
      return 1;
    case 256:
      return 3;
    case 512:
      return 2;
  }
  return -(common_round_control != 768);
}

//----- (0000000140257EB4) ----------------------------------------------------
int         fegetround_0()
{
  __int16 control;

  control = _acrt_fenv_get_control_sr();
  return _acrt_fenv_get_common_round_control_sr(control);
}

//----- (0000000140257EC8) ----------------------------------------------------
__int64            common_dupenv_s__char(_QWORD *a1, __int64 *a2, __int64 a3)
{
  unsigned int unused_written_slot;
  unsigned __int64 call_result;
  __int64 cached_call_result;
  __int64 iteration_count;
  __int64 integer_sum;
  _BYTE *returned_pointer;

  crt_lock(11);
  unused_written_slot = 0;
  if ( !a1 )
    goto LABEL_2;
  *a1 = 0;
  if ( a2 )
    *a2 = 0;
  if ( a3 )
  {
    call_result = sub_140258328(a3);
    cached_call_result = call_result;
    if ( call_result )
    {
      iteration_count = -1;
      do
        ++iteration_count;
      while ( *(_BYTE *)(call_result + iteration_count) );
      integer_sum = iteration_count + 1;
      returned_pointer = (_BYTE *)j__calloc_base();
      *a1 = (uint64)(uintptr_t)(returned_pointer);
      if ( returned_pointer )
      {
        if ( (unsigned int)strcpy_s_sr(returned_pointer, integer_sum, cached_call_result) )
        {
          crt_invoke_watson();
          __debugbreak();
          do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
        }
        if ( a2 )
          *a2 = integer_sum;
      }
      else
      {
        *errno_sr() = 12;
        unused_written_slot = 12;
      }
    }
  }
  else
  {
LABEL_2:
    unused_written_slot = 22;
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
  crt_unlock(11);
  return unused_written_slot;
}

// 140257FB9: control flows out of bounds to 140257FBA

//----- (0000000140257FBC) ----------------------------------------------------
__int64            common_dupenv_s__wchar_t(__int64 *a1, __int64 *a2, __int64 a3)
{
  unsigned int unused_written_slot;
  unsigned __int64 call_result;
  __int64 cached_call_result;
  __int64 iteration_count;
  __int64 integer_sum;
  _WORD *returned_pointer;

  crt_lock(11);
  unused_written_slot = 0;
  if ( !a1 )
    goto LABEL_2;
  *a1 = 0;
  if ( a2 )
    *a2 = 0;
  if ( a3 )
  {
    call_result = sub_1402583B4(a3);
    cached_call_result = call_result;
    if ( call_result )
    {
      iteration_count = -1;
      do
        ++iteration_count;
      while ( *(_WORD *)(call_result + 2 * iteration_count) );
      integer_sum = iteration_count + 1;
      returned_pointer = (_WORD *)j__calloc_base();
      *a1 = (__int64)returned_pointer;
      if ( returned_pointer )
      {
        if ( (unsigned int)sub_140259444(returned_pointer, integer_sum, cached_call_result) )
        {
          crt_invoke_watson();
          __debugbreak();
          do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
        }
        if ( a2 )
          *a2 = integer_sum;
      }
      else
      {
        *errno_sr() = 12;
        unused_written_slot = 12;
      }
    }
  }
  else
  {
LABEL_2:
    unused_written_slot = 22;
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
  crt_unlock(11);
  return unused_written_slot;
}

// 1402580AE: control flows out of bounds to 1402580AF

//----- (00000001402580B0) ----------------------------------------------------
__int64            common_dupenv_s_nolock__char(_QWORD *a1, __int64 *a2, __int64 a3)
{
  unsigned __int64 call_result;
  __int64 cached_call_result;
  __int64 iteration_count;
  __int64 integer_sum;
  _BYTE *returned_pointer;

  if ( !a1 )
    goto LABEL_2;
  *a1 = 0;
  if ( a2 )
    *a2 = 0;
  if ( !a3 )
  {
LABEL_2:
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 22;
  }
  call_result = sub_140258328(a3);
  cached_call_result = call_result;
  if ( !call_result )
    return 0;
  iteration_count = -1;
  do
    ++iteration_count;
  while ( *(_BYTE *)(call_result + iteration_count) );
  integer_sum = iteration_count + 1;
  returned_pointer = (_BYTE *)j__calloc_base();
  *a1 = (uint64)(uintptr_t)(returned_pointer);
  if ( returned_pointer )
  {
    if ( (unsigned int)strcpy_s_sr(returned_pointer, integer_sum, cached_call_result) )
    {
      crt_invoke_watson();
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
    if ( a2 )
      *a2 = integer_sum;
    return 0;
  }
  *errno_sr() = 12;
  return 12;
}

// 140258180: control flows out of bounds to 140258185

//----- (0000000140258188) ----------------------------------------------------
__int64            common_dupenv_s_nolock__wchar_t(__int64 *a1, __int64 *a2, __int64 a3)
{
  unsigned __int64 call_result;
  __int64 cached_call_result;
  __int64 iteration_count;
  __int64 integer_sum;
  _WORD *returned_pointer;

  if ( !a1 )
    goto LABEL_2;
  *a1 = 0;
  if ( a2 )
    *a2 = 0;
  if ( !a3 )
  {
LABEL_2:
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 22;
  }
  call_result = sub_1402583B4(a3);
  cached_call_result = call_result;
  if ( !call_result )
    return 0;
  iteration_count = -1;
  do
    ++iteration_count;
  while ( *(_WORD *)(call_result + 2 * iteration_count) );
  integer_sum = iteration_count + 1;
  returned_pointer = (_WORD *)j__calloc_base();
  *a1 = (__int64)returned_pointer;
  if ( returned_pointer )
  {
    if ( (unsigned int)sub_140259444(returned_pointer, integer_sum, cached_call_result) )
    {
      crt_invoke_watson();
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
    if ( a2 )
      *a2 = integer_sum;
    return 0;
  }
  *errno_sr() = 12;
  return 12;
}

// 140258260: control flows out of bounds to 140258265

//----- (0000000140258268) ----------------------------------------------------
unsigned __int64            sub_140258268(__m128i *a1)
{
  unsigned __int64 unused_written_slot;

  if ( a1 && (unsigned __int64)strnlen_sr(a1, 0x7FFFu) < 0x7FFF )
  {
    crt_lock(11);
    unused_written_slot = sub_140258328((__int64)a1);
    crt_unlock(11);
    return unused_written_slot;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
}

//----- (00000001402582C8) ----------------------------------------------------
unsigned __int64            sub_1402582C8(__m128i *a1)
{
  unsigned __int64 unused_written_slot;

  if ( a1 && (unsigned __int64)sub_140254F48(a1, 0x7FFFu) < 0x7FFF )
  {
    crt_lock(11);
    unused_written_slot = sub_1402583B4((__int64)a1);
    crt_unlock(11);
    return unused_written_slot;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
}

//----- (0000000140258328) ----------------------------------------------------
unsigned __int64            sub_140258328(__int64 a1)
{
  __int64 *unknown_libname_764_result;
  __int64 *buffer_cursor;
  unsigned __int64 iteration_count;
  __int64 i;
  unsigned __int64 iteration_count_2;

  unknown_libname_764_result = (__int64 *)unknown_libname_764();
  buffer_cursor = unknown_libname_764_result;
  if ( unknown_libname_764_result && a1 )
  {
    iteration_count = -1;
    do
      ++iteration_count;
    while ( *(_BYTE *)(a1 + iteration_count) );
    for ( i = *unknown_libname_764_result; i; i = *buffer_cursor )
    {
      iteration_count_2 = -1;
      do
        ++iteration_count_2;
      while ( *(_BYTE *)(i + iteration_count_2) );
      if ( iteration_count_2 > iteration_count && *(_BYTE *)(i + iteration_count) == 61 && !(unsigned int)strnicoll_sr(i, a1, iteration_count) )
        return iteration_count + *buffer_cursor + 1;
      ++buffer_cursor;
    }
  }
  return 0;
}

//----- (00000001402583B4) ----------------------------------------------------
__int64            sub_1402583B4(__int64 a1)
{
  __int64 *unknown_libname_765_result;
  __int64 *buffer_cursor;
  unsigned __int64 iteration_count;
  __int64 i;
  unsigned __int64 iteration_count_2;

  unknown_libname_765_result = (__int64 *)unknown_libname_765();
  buffer_cursor = unknown_libname_765_result;
  if ( unknown_libname_765_result && a1 )
  {
    iteration_count = -1;
    do
      ++iteration_count;
    while ( *(_WORD *)(a1 + 2 * iteration_count) );
    for ( i = *unknown_libname_765_result; i; i = *buffer_cursor )
    {
      iteration_count_2 = -1;
      do
        ++iteration_count_2;
      while ( *(_WORD *)(i + 2 * iteration_count_2) );
      if ( iteration_count_2 > iteration_count && *(_WORD *)(i + 2 * iteration_count) == 61 && !(unsigned int)wcsnicoll(i, a1, iteration_count) )
        return *buffer_cursor + 2 * iteration_count + 2;
      ++buffer_cursor;
    }
  }
  return 0;
}

//----- (000000014025844C) ----------------------------------------------------
__int64            getenv_s_0(unsigned __int64 *a1, _BYTE *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int unused_written_slot;
  int selection_flag;
  unsigned __int64 call_result;
  __int64 iteration_count;
  unsigned __int64 integer_sum;

  crt_lock(11);
  unused_written_slot = 0;
  if ( !a1 )
    goto LABEL_2;
  *a1 = 0;
  if ( a2 )
  {
    if ( !a3 )
      goto LABEL_8;
LABEL_7:
    selection_flag = 1;
    goto LABEL_9;
  }
  if ( !a3 )
    goto LABEL_7;
LABEL_8:
  selection_flag = 0;
LABEL_9:
  if ( !selection_flag )
  {
LABEL_2:
    unused_written_slot = 22;
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    goto LABEL_19;
  }
  if ( a2 )
    *a2 = 0;
  call_result = sub_140258328(a4);
  if ( call_result )
  {
    iteration_count = -1;
    do
      ++iteration_count;
    while ( *(_BYTE *)(call_result + iteration_count) );
    integer_sum = iteration_count + 1;
    *a1 = integer_sum;
    if ( a3 )
    {
      if ( integer_sum <= a3 )
      {
        if ( (unsigned int)strcpy_s_sr(a2, a3, call_result) )
        {
          crt_invoke_watson();
          __debugbreak();
          do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
        }
      }
      else
      {
        unused_written_slot = 34;
      }
    }
  }
LABEL_19:
  crt_unlock(11);
  return unused_written_slot;
}

// 140258540: control flows out of bounds to 140258541
// 1402584A6: conditional instruction was optimized away because rdi.8!=0

//----- (0000000140258544) ----------------------------------------------------
__int64            sub_140258544(unsigned __int64 *a1, _WORD *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int unused_written_slot;
  int selection_flag;
  __int64 call_result;
  __int64 iteration_count;
  unsigned __int64 integer_sum;

  crt_lock(11);
  unused_written_slot = 0;
  if ( !a1 )
    goto LABEL_2;
  *a1 = 0;
  if ( a2 )
  {
    if ( !a3 )
      goto LABEL_8;
LABEL_7:
    selection_flag = 1;
    goto LABEL_9;
  }
  if ( !a3 )
    goto LABEL_7;
LABEL_8:
  selection_flag = 0;
LABEL_9:
  if ( !selection_flag )
  {
LABEL_2:
    unused_written_slot = 22;
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    goto LABEL_19;
  }
  if ( a2 )
    *a2 = 0;
  call_result = sub_1402583B4(a4);
  if ( call_result )
  {
    iteration_count = -1;
    do
      ++iteration_count;
    while ( *(_WORD *)(call_result + 2 * iteration_count) );
    integer_sum = iteration_count + 1;
    *a1 = integer_sum;
    if ( a3 )
    {
      if ( integer_sum <= a3 )
      {
        if ( (unsigned int)sub_140259444(a2, a3, call_result) )
        {
          crt_invoke_watson();
          __debugbreak();
          do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
        }
      }
      else
      {
        unused_written_slot = 34;
      }
    }
  }
LABEL_19:
  crt_unlock(11);
  return unused_written_slot;
}

// 14025863A: control flows out of bounds to 14025863B
// 14025859E: conditional instruction was optimized away because rdi.8!=0

//----- (000000014025863C) ----------------------------------------------------
__int64            sub_14025863C(unsigned __int64 *a1, _BYTE *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 call_result;
  __int64 iteration_count;
  unsigned __int64 integer_sum;

  if ( !a1 )
    goto LABEL_2;
  *a1 = 0;
  if ( a2 )
  {
    if ( !a3 )
      goto LABEL_2;
  }
  else if ( a3 )
  {
LABEL_2:
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 22;
  }
  if ( a2 )
    *a2 = 0;
  call_result = sub_140258328(a4);
  if ( call_result )
  {
    iteration_count = -1;
    do
      ++iteration_count;
    while ( *(_BYTE *)(call_result + iteration_count) );
    integer_sum = iteration_count + 1;
    *a1 = integer_sum;
    if ( a3 )
    {
      if ( integer_sum > a3 )
        return 34;
      if ( (unsigned int)strcpy_s_sr(a2, a3, call_result) )
      {
        crt_invoke_watson();
        do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
      }
    }
  }
  return 0;
}

// 1402586F0: control flows out of bounds to 1402586F5

//----- (00000001402586F8) ----------------------------------------------------
__int64            sub_1402586F8(unsigned __int64 *a1, _WORD *a2, unsigned __int64 a3, __int64 a4)
{
  __int64 call_result;
  __int64 iteration_count;
  unsigned __int64 integer_sum;

  if ( !a1 )
    goto LABEL_2;
  *a1 = 0;
  if ( a2 )
  {
    if ( !a3 )
      goto LABEL_2;
  }
  else if ( a3 )
  {
LABEL_2:
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 22;
  }
  if ( a2 )
    *a2 = 0;
  call_result = sub_1402583B4(a4);
  if ( call_result )
  {
    iteration_count = -1;
    do
      ++iteration_count;
    while ( *(_WORD *)(call_result + 2 * iteration_count) );
    integer_sum = iteration_count + 1;
    *a1 = integer_sum;
    if ( a3 )
    {
      if ( integer_sum > a3 )
        return 34;
      if ( (unsigned int)sub_140259444(a2, a3, call_result) )
      {
        crt_invoke_watson();
        __debugbreak();
      }
    }
  }
  return 0;
}

//----- (0000000140258844) ----------------------------------------------------
__int64            sub_140258844(_QWORD *a1, __int64 *a2, __int64 a3)
{
  return common_dupenv_s__char(a1, a2, a3);
}

//----- (0000000140258864) ----------------------------------------------------
__int64            sub_140258864(__int64 *a1, __int64 *a2, __int64 a3)
{
  return common_dupenv_s__wchar_t(a1, a2, a3);
}

//----- (000000014025889C) ----------------------------------------------------
// attributes: thunk
__int64            getenv_s_sr(unsigned __int64 *a1, _BYTE *a2, unsigned __int64 a3, __int64 a4)
{
  return getenv_s_0(a1, a2, a3, a4);
}

//----- (00000001402588A4) ----------------------------------------------------
__int64            sub_1402588A4(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int *unused_written_slot;
  unsigned int selection_code;
  __int64 integer_difference;
  _BYTE *buffer_cursor;
  __int64 remaining_count;
  __int64 remaining_count_2;
  char table_value;
  char table_value_2;

  if ( a4 )
  {
    if ( !a1 )
      goto LABEL_4;
  }
  else if ( !a1 )
  {
    if ( a2 )
    {
LABEL_4:
      unused_written_slot = errno_sr();
      selection_code = 22;
LABEL_5:
      *unused_written_slot = selection_code;
      crt_invalid_parameter_noinfo();
      return selection_code;
    }
    return 0;
  }
  if ( !a2 )
    goto LABEL_4;
  if ( !a4 )
  {
    *a1 = 0;
    return 0;
  }
  if ( !a3 )
  {
    *a1 = 0;
    goto LABEL_4;
  }
  integer_difference = a3 - (_QWORD)a1;
  buffer_cursor = a1;
  remaining_count = a2;
  remaining_count_2 = a4;
  if ( a4 == -1 )
  {
    do
    {
      table_value = buffer_cursor[integer_difference];
      *buffer_cursor++ = table_value;
      if ( !table_value )
        break;
      --remaining_count;
    }
    while ( remaining_count );
  }
  else
  {
    do
    {
      table_value_2 = buffer_cursor[integer_difference];
      *buffer_cursor++ = table_value_2;
      if ( !table_value_2 )
        break;
      if ( !--remaining_count )
        break;
      --remaining_count_2;
    }
    while ( remaining_count_2 );
    if ( !remaining_count_2 )
      *buffer_cursor = 0;
  }
  if ( remaining_count )
    return 0;
  if ( a4 != -1 )
  {
    *a1 = 0;
    unused_written_slot = errno_sr();
    selection_code = 34;
    goto LABEL_5;
  }
  a1[a2 - 1] = 0;
  return 80;
}

//----- (000000014025896C) ----------------------------------------------------
__int64            strncpy_s_sr(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int unused_written_slot;
  int *unused_written_slot_2;
  unsigned int selection_code;
  __int64 integer_difference;
  _BYTE *buffer_cursor;
  __int64 remaining_count;
  __int64 remaining_count_2;
  char table_value;
  char table_value_2;

  unused_written_slot = 0;
  if ( a4 )
  {
    if ( !a1 )
      goto LABEL_4;
    goto LABEL_8;
  }
  if ( a1 )
  {
LABEL_8:
    if ( !a2 )
      goto LABEL_4;
    if ( !a4 )
    {
      *a1 = 0;
      return unused_written_slot;
    }
    if ( !a3 )
    {
      *a1 = 0;
      goto LABEL_4;
    }
    integer_difference = a3 - (_QWORD)a1;
    buffer_cursor = a1;
    remaining_count = a2;
    remaining_count_2 = a4;
    if ( a4 == -1 )
    {
      do
      {
        table_value = buffer_cursor[integer_difference];
        *buffer_cursor++ = table_value;
        if ( !table_value )
          break;
        --remaining_count;
      }
      while ( remaining_count );
    }
    else
    {
      do
      {
        table_value_2 = buffer_cursor[integer_difference];
        *buffer_cursor++ = table_value_2;
        if ( !table_value_2 )
          break;
        if ( !--remaining_count )
          break;
        --remaining_count_2;
      }
      while ( remaining_count_2 );
      if ( !remaining_count_2 )
        *buffer_cursor = 0;
    }
    if ( !remaining_count )
    {
      if ( a4 == -1 )
      {
        a1[a2 - 1] = 0;
        return 80;
      }
      *a1 = 0;
      unused_written_slot_2 = errno_sr();
      selection_code = 34;
      goto LABEL_5;
    }
    return unused_written_slot;
  }
  if ( a2 )
  {
LABEL_4:
    unused_written_slot_2 = errno_sr();
    selection_code = 22;
LABEL_5:
    *unused_written_slot_2 = selection_code;
    crt_invalid_parameter_noinfo();
    return selection_code;
  }
  return unused_written_slot;
}

// 14025896C: invalid function type 'errno_t __cdecl strncpy_s(char *Destination, #65 SizeInBytes, const char *Source, #65 MaxCount)' has been ignored

//----- (0000000140258A84) ----------------------------------------------------
__int64            crt_wide_char_to_multi_byte(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int integer_difference;
  long bit_mask;
  bool comparison_result;

  if ( a1 <= 0xC435 )
  {
    integer_difference = a1 - 50220;
    if ( a1 - 50220 <= 9 )
    {
      bit_mask = 679;
      if ( _bittest(&bit_mask, integer_difference) )
        goto LABEL_12;
    }
    comparison_result = a1 == 42;
    goto LABEL_10;
  }
  if ( a1 == 54936 )
    goto LABEL_12;
  if ( a1 > 0xDEA9 )
  {
    if ( a1 <= 0xDEB3 || a1 == 65000 )
      goto LABEL_12;
    comparison_result = a1 == 65001;
LABEL_10:
    if ( !comparison_result )
      goto LABEL_11;
LABEL_12:
    a2 = 0;
    return (unsigned int)WideCharToMultiByte(a1,(DWORD)a2,(const wchar_t *)(uintptr_t)a3,(int)a4,(char *)(uintptr_t)a5,(int)a6,(const char *)(uintptr_t)a7,(BOOL *)(uintptr_t)a8);
  }
LABEL_11:
  LODWORD(a2) = a2 & 0xFFFFFF7F;
  return (unsigned int)WideCharToMultiByte(a1,(DWORD)a2,(const wchar_t *)(uintptr_t)a3,(int)a4,(char *)(uintptr_t)a5,(int)a6,(const char *)(uintptr_t)a7,(BOOL *)(uintptr_t)a8);
}

// 14026E0B0: invalid function type 'int (__stdcall *WideCharToMultiByte)(UINT CodePage, DWORD dwFlags, LPCWCH lpWideCharStr, int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte, LPCCH lpDefaultChar, LPBOOL lpUsedDefaultChar)' has been ignored

//----- (0000000140258B1C) ----------------------------------------------------
char _acrt_initialize_locks()
{
  __int64 integer_sum;

  integer_sum = 0;
  while ( (unsigned int)_acrt_InitializeCriticalSectionEx((__int64)&dword_140404A6C[10 * integer_sum + 19065669], 0xFA0u, 0) )
  {
    ++g_144CBF9B0;
    integer_sum = (unsigned int)(integer_sum + 1);
    if ( (unsigned int)integer_sum >= 0xE )
      return 1;
  }
  _acrt_uninitialize_locks_0();
  return 0;
}

//----- (0000000140258B64) ----------------------------------------------------
__int64            crt_lock(int a1)
{
  return ((__int64 (           *)(unsigned int *))EnterCriticalSection)(&dword_140404A6C[10 * a1 + 19065669]);
}

// 14026E250: invalid function type 'void (__stdcall *EnterCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored

//----- (0000000140258B80) ----------------------------------------------------
char _acrt_uninitialize_locks_0()
{
  unsigned int remaining_count;

  remaining_count = g_144CBF9B0;
  while ( remaining_count )
  {
    ((void (           *)(unsigned int *))DeleteCriticalSection)(&dword_140404A6C[10 * --remaining_count + 19065669]);
    --g_144CBF9B0;
  }
  return 1;
}

// 14026E240: invalid function type 'void (__stdcall *DeleteCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored

//----- (0000000140258BB8) ----------------------------------------------------
__int64            crt_unlock(int a1)
{
  return ((__int64 (           *)(unsigned int *))LeaveCriticalSection)(&dword_140404A6C[10 * a1 + 19065669]);
}

// 14026E248: invalid function type 'void (__stdcall *LeaveCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored

//----- (0000000140258BD4) ----------------------------------------------------
void         lock_locales()
{
  sub_14024F91C();
  ((void (           *)(unsigned int *))EnterCriticalSection)(&g_144CBF820);
}

// 14026E250: invalid function type 'void (__stdcall *EnterCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored

//----- (0000000140258C20) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1037(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (0000000140258C3C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1038(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (0000000140258C68) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1039(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (0000000140258C84) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1040(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (0000000140258CA0) ----------------------------------------------------
__int64 sub_140258CA0()
{
  __int64 call_result;
  __int64 loaded_word;

  call_result = sub_140255A70();
  loaded_word = *(_QWORD *)(call_result + 144);
  sub_140255D2C(call_result, &loaded_word);
  return *(unsigned int *)(loaded_word + 12);
}

//----- (0000000140258CD0) ----------------------------------------------------
__int64 sub_140258CD0()
{
  __int64 call_result;
  __int64 loaded_word;

  call_result = sub_140255A70();
  loaded_word = *(_QWORD *)(call_result + 144);
  sub_140255D2C(call_result, &loaded_word);
  return *(unsigned int *)(loaded_word + 20);
}

//----- (0000000140258D00) ----------------------------------------------------
__int64 sub_140258D00()
{
  __int64 call_result;
  __int64 loaded_word;

  call_result = sub_140255A70();
  loaded_word = *(_QWORD *)(call_result + 144);
  sub_140255D2C(call_result, &loaded_word);
  return loaded_word + 296;
}

//----- (0000000140258D34) ----------------------------------------------------
__int64 sub_140258D34()
{
  __int64 call_result;
  __int64 loaded_word;

  call_result = sub_140255A70();
  loaded_word = *(_QWORD *)(call_result + 144);
  sub_140255D2C(call_result, &loaded_word);
  return *(unsigned int *)(loaded_word + 8);
}

//----- (0000000140258D74) ----------------------------------------------------
__int64            sub_140258D74(__int64 a1)
{
       sr_anon_49 *loaded_record_pointer;
  _WORD *calloc_base_result;
  __int64 calloc_base_result_2;
  __int64 calloc_base_result_3;
  _WORD *calloc_base_result_4;
  unsigned int *record_pointer;
  _BYTE *buffer_cursor;
  int i;
  _BYTE *j;
  int iteration_count;
  __int64 integer_sum;
  unsigned int loaded_word;
  _BYTE *buffer_cursor_2;
  __int16 *buffer_cursor_3;
  int k;
  __int16 selection_code;
  _BYTE *m;
  int element_index;
  __int128 loaded_word_2;
  char *byte_cursor;
  __int64 packed_word_bits;
  __int128 loaded_word_3;
  __int128 loaded_word_4;
  __int128 loaded_word_5;
  char *saved_loaded_word;
  __int128 loaded_word_6;
  __int128 loaded_word_7;
  __int128 loaded_word_8;
  __int128 loaded_word_9;
  __int128 loaded_word_10;
  __int128 loaded_word_11;
  __int128 loaded_word_12;
  __int128 loaded_word_13;
  __int128 loaded_word_14;
  __int128 loaded_word_15;
  __int128 loaded_word_16;
  __int128 loaded_word_17;
  __int128 loaded_word_18;
  __int128 loaded_word_19;
  __int128 loaded_word_20;
  __int128 loaded_word_21;
  __int128 loaded_word_22;
  __int128 loaded_word_23;
  __int128 loaded_word_24;
  volatile signed __int32 *loaded_record_pointer_2;
  void *cached_block;
  volatile signed __int32 *loaded_record_pointer_3;
  __int64 unused_local;
  unsigned int loword_result;
  void *Block;
  char *byte_cursor_2;
  char *byte_cursor_3;
  _QWORD scratch_buffer[2];
  _DWORD CPInfo[6];
  __int64 unused_local_2;

  loaded_record_pointer = *(     sr_anon_49 **)(a1 + 312);
  scratch_buffer[0] = a1;
  scratch_buffer[1] = 0;
  calloc_base_result = nullptr;
  calloc_base_result_2 = 0;
  calloc_base_result_3 = 0;
  calloc_base_result_4 = nullptr;
  if ( loaded_record_pointer )
  {
    record_pointer = (unsigned int *)(a1 + 12);
    Block = nullptr;
    if ( !*(_DWORD *)(a1 + 12)
      && (unsigned int)_acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)scratch_buffer, 0, loaded_record_pointer, 0x1004u, (__int64 *)(a1 + 12)) )
    {
      goto LABEL_40;
    }
    Block = (void *)calloc_base();
    free_base(nullptr);
    calloc_base_result = (_WORD *)calloc_base();
    free_base(nullptr);
    calloc_base_result_2 = calloc_base();
    free_base(nullptr);
    calloc_base_result_3 = calloc_base();
    free_base(nullptr);
    calloc_base_result_4 = (_WORD *)calloc_base();
    free_base(nullptr);
    if ( !Block )
      goto LABEL_40;
    if ( !calloc_base_result )
      goto LABEL_40;
    if ( !calloc_base_result_4 )
      goto LABEL_40;
    if ( !calloc_base_result_2 )
      goto LABEL_40;
    if ( !calloc_base_result_3 )
      goto LABEL_40;
    buffer_cursor = calloc_base_result_4;
    for ( i = 0; i < 256; ++i )
      *buffer_cursor++ = i;
    if ( !(unsigned int)((__int64 (           *)(_QWORD, _DWORD *))GetCPInfo)(*record_pointer, CPInfo) || CPInfo[0] > 5u )
      goto LABEL_40;
    loword_result = LOWORD(CPInfo[0]);
    if ( LOWORD(CPInfo[0]) > 1u )
    {
      if ( *record_pointer == 65001 )
      {
        crt_memset((void *)(uintptr_t)(calloc_base_result_4 + 64), 0x20u, 0x80u);
      }
      else
      {
        for ( j = (char *)&CPInfo[1] + 2; *j; j += 2 )
        {
          if ( !j[1] )
            break;
          iteration_count = (unsigned __int8)*j;
          if ( iteration_count <= (unsigned int)(unsigned __int8)j[1] )
          {
            do
            {
              integer_sum = iteration_count++;
              *((_BYTE *)calloc_base_result_4 + integer_sum) = 32;
            }
            while ( iteration_count <= (unsigned __int8)j[1] );
          }
        }
      }
    }
    if ( (unsigned int)sub_14025A004(
                         nullptr,
                         *(_QWORD *)(a1 + 312),
                         0x100u,
                         (__int64)calloc_base_result_4 + 1,
                         255,
                         (__int64 *)(calloc_base_result_2 + 129),
                         255,
                         *record_pointer,
                         0)
      && (unsigned int)sub_14025A004(
                         nullptr,
                         *(_QWORD *)(a1 + 312),
                         0x200u,
                         (__int64)calloc_base_result_4 + 1,
                         255,
                         (__int64 *)(calloc_base_result_3 + 129),
                         255,
                         *record_pointer,
                         0)
      && (loaded_word = *record_pointer,
          byte_cursor_2 = (char *)(calloc_base_result + 128),
          (unsigned int)sub_140262618(nullptr, 1u, (__int64)calloc_base_result_4, 256, (__int64)(calloc_base_result + 128), loaded_word, 0)) )
    {
      calloc_base_result[127] = 0;
      *(_BYTE *)(calloc_base_result_2 + 127) = 0;
      *(_BYTE *)(calloc_base_result_3 + 127) = 0;
      *(_BYTE *)(calloc_base_result_2 + 128) = 0;
      *(_BYTE *)(calloc_base_result_3 + 128) = 0;
      byte_cursor_3 = (char *)(calloc_base_result + 127);
      if ( loword_result > 1 )
      {
        if ( *record_pointer == 65001 )
        {
          buffer_cursor_2 = (_BYTE *)(calloc_base_result_3 + 256);
          buffer_cursor_3 = calloc_base_result + 256;
          for ( k = 128; k <= 255; ++k )
          {
            selection_code = 0x8000;
            if ( (unsigned int)(k - 194) > 0x32 )
              selection_code = 0;
            *buffer_cursor_3++ = selection_code;
            buffer_cursor_2[calloc_base_result_2 - calloc_base_result_3] = k;
            *buffer_cursor_2++ = k;
          }
        }
        else
        {
          for ( m = (char *)&CPInfo[1] + 2; *m; m += 2 )
          {
            if ( !m[1] )
              break;
            element_index = (unsigned __int8)*m;
            if ( element_index <= (unsigned int)(unsigned __int8)m[1] )
            {
              do
              {
                calloc_base_result[element_index + 128] = 0x8000;
                *(_BYTE *)(element_index + calloc_base_result_2 + 128) = element_index;
                *(_BYTE *)(element_index + calloc_base_result_3 + 128) = element_index;
                ++element_index;
              }
              while ( element_index <= (unsigned __int8)m[1] );
            }
          }
        }
      }
      loaded_word_2 = *((_OWORD *)calloc_base_result + 33);
      byte_cursor = (char *)(calloc_base_result + 320);
      *(_OWORD *)calloc_base_result = *((_OWORD *)calloc_base_result + 32);
      packed_word_bits = *((_QWORD *)calloc_base_result + 94);
      *((_OWORD *)calloc_base_result + 1) = loaded_word_2;
      loaded_word_3 = *((_OWORD *)calloc_base_result + 35);
      *((_OWORD *)calloc_base_result + 2) = *((_OWORD *)calloc_base_result + 34);
      *((_OWORD *)calloc_base_result + 3) = loaded_word_3;
      loaded_word_4 = *((_OWORD *)calloc_base_result + 37);
      *((_OWORD *)calloc_base_result + 4) = *((_OWORD *)calloc_base_result + 36);
      *((_OWORD *)calloc_base_result + 5) = loaded_word_4;
      loaded_word_5 = *((_OWORD *)calloc_base_result + 39);
      *((_OWORD *)calloc_base_result + 6) = *((_OWORD *)calloc_base_result + 38);
      saved_loaded_word = (char *)(calloc_base_result + 64);
      loaded_word_6 = *(_OWORD *)byte_cursor;
      *((_OWORD *)saved_loaded_word - 1) = loaded_word_5;
      loaded_word_7 = *((_OWORD *)byte_cursor + 1);
      *(_OWORD *)saved_loaded_word = loaded_word_6;
      loaded_word_8 = *((_OWORD *)byte_cursor + 2);
      *((_OWORD *)saved_loaded_word + 1) = loaded_word_7;
      loaded_word_9 = *((_OWORD *)byte_cursor + 3);
      *((_OWORD *)saved_loaded_word + 2) = loaded_word_8;
      loaded_word_10 = *((_OWORD *)byte_cursor + 4);
      *((_OWORD *)saved_loaded_word + 3) = loaded_word_9;
      loaded_word_11 = *((_OWORD *)byte_cursor + 5);
      *((_OWORD *)saved_loaded_word + 4) = loaded_word_10;
      loaded_word_12 = *((_OWORD *)byte_cursor + 6);
      *((_OWORD *)saved_loaded_word + 5) = loaded_word_11;
      *((_OWORD *)saved_loaded_word + 6) = loaded_word_12;
      *((_QWORD *)saved_loaded_word + 14) = packed_word_bits;
      *((_DWORD *)saved_loaded_word + 30) = *((_DWORD *)byte_cursor + 30);
      *((_WORD *)saved_loaded_word + 62) = *((_WORD *)byte_cursor + 62);
      LODWORD(packed_word_bits) = *(_DWORD *)(calloc_base_result_2 + 376);
      loaded_word_13 = *(_OWORD *)(calloc_base_result_2 + 272);
      *(_OWORD *)calloc_base_result_2 = *(_OWORD *)(calloc_base_result_2 + 256);
      loaded_word_14 = *(_OWORD *)(calloc_base_result_2 + 288);
      *(_OWORD *)(calloc_base_result_2 + 16) = loaded_word_13;
      loaded_word_15 = *(_OWORD *)(calloc_base_result_2 + 304);
      *(_OWORD *)(calloc_base_result_2 + 32) = loaded_word_14;
      loaded_word_16 = *(_OWORD *)(calloc_base_result_2 + 320);
      *(_OWORD *)(calloc_base_result_2 + 48) = loaded_word_15;
      loaded_word_17 = *(_OWORD *)(calloc_base_result_2 + 336);
      *(_OWORD *)(calloc_base_result_2 + 64) = loaded_word_16;
      loaded_word_18 = *(_OWORD *)(calloc_base_result_2 + 352);
      *(_OWORD *)(calloc_base_result_2 + 80) = loaded_word_17;
      *(_QWORD *)&loaded_word_17 = *(_QWORD *)(calloc_base_result_2 + 368);
      *(_OWORD *)(calloc_base_result_2 + 96) = loaded_word_18;
      *(_QWORD *)(calloc_base_result_2 + 112) = loaded_word_17;
      *(_DWORD *)(calloc_base_result_2 + 120) = packed_word_bits;
      *(_WORD *)(calloc_base_result_2 + 124) = *(_WORD *)(calloc_base_result_2 + 380);
      *(_BYTE *)(calloc_base_result_2 + 126) = *(_BYTE *)(calloc_base_result_2 + 382);
      LODWORD(packed_word_bits) = *(_DWORD *)(calloc_base_result_3 + 376);
      loaded_word_19 = *(_OWORD *)(calloc_base_result_3 + 272);
      *(_OWORD *)calloc_base_result_3 = *(_OWORD *)(calloc_base_result_3 + 256);
      loaded_word_20 = *(_OWORD *)(calloc_base_result_3 + 288);
      *(_OWORD *)(calloc_base_result_3 + 16) = loaded_word_19;
      loaded_word_21 = *(_OWORD *)(calloc_base_result_3 + 304);
      *(_OWORD *)(calloc_base_result_3 + 32) = loaded_word_20;
      loaded_word_22 = *(_OWORD *)(calloc_base_result_3 + 320);
      *(_OWORD *)(calloc_base_result_3 + 48) = loaded_word_21;
      loaded_word_23 = *(_OWORD *)(calloc_base_result_3 + 336);
      *(_OWORD *)(calloc_base_result_3 + 64) = loaded_word_22;
      loaded_word_24 = *(_OWORD *)(calloc_base_result_3 + 352);
      *(_OWORD *)(calloc_base_result_3 + 80) = loaded_word_23;
      *(_QWORD *)&loaded_word_23 = *(_QWORD *)(calloc_base_result_3 + 368);
      *(_OWORD *)(calloc_base_result_3 + 96) = loaded_word_24;
      *(_QWORD *)(calloc_base_result_3 + 112) = loaded_word_23;
      *(_DWORD *)(calloc_base_result_3 + 120) = packed_word_bits;
      *(_WORD *)(calloc_base_result_3 + 124) = *(_WORD *)(calloc_base_result_3 + 380);
      *(_BYTE *)(calloc_base_result_3 + 126) = *(_BYTE *)(calloc_base_result_3 + 382);
      loaded_record_pointer_2 = *(volatile signed __int32 **)(a1 + 256);
      if ( loaded_record_pointer_2 && _InterlockedExchangeAdd(loaded_record_pointer_2, 0xFFFFFFFF) == 1 )
      {
        free_base((void *)(*(_QWORD *)(a1 + 264) - 254LL));
        free_base((void *)(*(_QWORD *)(a1 + 272) - 128LL));
        free_base((void *)(*(_QWORD *)(a1 + 280) - 128LL));
        free_base(*(void **)(a1 + 256));
      }
      cached_block = Block;
      *(_DWORD *)Block = 1;
      *(_QWORD *)(a1 + 256) = (uint64)(uintptr_t)(cached_block);
      *(_QWORD *)a1 = (uint64)(uintptr_t)(byte_cursor_2);
      *(_QWORD *)(a1 + 264) = (uint64)(uintptr_t)(byte_cursor_3);
      *(_QWORD *)(a1 + 272) = calloc_base_result_2 + 128;
      *(_QWORD *)(a1 + 280) = calloc_base_result_3 + 128;
      *(_DWORD *)(a1 + 8) = loword_result;
    }
    else
    {
LABEL_40:
      free_base(Block);
      free_base(calloc_base_result);
      free_base((void *)calloc_base_result_2);
      free_base((void *)calloc_base_result_3);
    }
    free_base(calloc_base_result_4);
  }
  else
  {
    loaded_record_pointer_3 = *(volatile signed __int32 **)(a1 + 256);
    if ( loaded_record_pointer_3 )
      _InterlockedDecrement(loaded_record_pointer_3);
    *(_QWORD *)(a1 + 256) = 0;
    *(_QWORD *)a1 = (uint64)(uintptr_t)(asc_14028B810);
    *(_QWORD *)(a1 + 264) = 0;
    *(_QWORD *)(a1 + 272) = (uint64)(uintptr_t)(&unk_14028BA90);
    *(_QWORD *)(a1 + 280) = (uint64)(uintptr_t)(&unk_14028BC10);
    *(_DWORD *)(a1 + 8) = 1;
  }
  return 0; /* the function has no caller */
}

// 14026E0A8: invalid function type 'BOOL (__stdcall *GetCPInfo)(UINT CodePage, LPCPINFO lpCPInfo)' has been ignored

//----- (00000001402593D8) ----------------------------------------------------
__int64            sub_1402593D8(_WORD *a1, __int64 a2, __int64 a3)
{
  int *unused_written_slot;
  unsigned int selection_code;
  _WORD *buffer_cursor;
  __int64 integer_difference;
  __int16 loaded_word;

  if ( !a1 || !a2 )
    goto LABEL_5;
  if ( !a3 )
  {
    *a1 = 0;
LABEL_5:
    unused_written_slot = errno_sr();
    selection_code = 22;
LABEL_6:
    *unused_written_slot = selection_code;
    crt_invalid_parameter_noinfo();
    return selection_code;
  }
  buffer_cursor = a1;
  integer_difference = a3 - (_QWORD)a1;
  do
  {
    loaded_word = *(_WORD *)((char *)buffer_cursor + integer_difference);
    *buffer_cursor++ = loaded_word;
    if ( !loaded_word )
      break;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *a1 = 0;
    unused_written_slot = errno_sr();
    selection_code = 34;
    goto LABEL_6;
  }
  return 0;
}

//----- (0000000140259444) ----------------------------------------------------
__int64            sub_140259444(_WORD *a1, __int64 a2, __int64 a3)
{
  unsigned int selection_code;
  int *unused_written_slot;
  _WORD *buffer_cursor;
  __int64 integer_difference;
  __int16 loaded_word;

  selection_code = 0;
  if ( !a1 || !a2 )
    goto LABEL_5;
  if ( !a3 )
  {
    *a1 = 0;
LABEL_5:
    unused_written_slot = errno_sr();
    selection_code = 22;
LABEL_6:
    *unused_written_slot = selection_code;
    crt_invalid_parameter_noinfo();
    return selection_code;
  }
  buffer_cursor = a1;
  integer_difference = a3 - (_QWORD)a1;
  do
  {
    loaded_word = *(_WORD *)((char *)buffer_cursor + integer_difference);
    *buffer_cursor++ = loaded_word;
    if ( !loaded_word )
      break;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *a1 = 0;
    unused_written_slot = errno_sr();
    selection_code = 34;
    goto LABEL_6;
  }
  return selection_code;
}

//----- (0000000140259504) ----------------------------------------------------
__int64 crt_multi_byte_to_wide_char()
{
  return ((__int64 (*)(void))MultiByteToWideChar)();
}

// 14026E0A0: invalid function type 'int (__stdcall *MultiByteToWideChar)(UINT CodePage, DWORD dwFlags, LPCCH lpMultiByteStr, int cbMultiByte, LPWSTR lpWideCharStr, int cchWideChar)' has been ignored

//----- (0000000140259560) ----------------------------------------------------
__int64            _loctotime32_t_0(int a1, int a2, int a3, unsigned int a4, unsigned int a5, unsigned int a6, int a7)
{
  unsigned int integer_difference;
  __int64 input_value;
  int iteration_count;
  _QWORD scratch_buffer[6];
  unsigned int input_value_2;
  int selection_flag;
  int selection_flag_2;
  int selection_flag_3;
  _DWORD scratch_buffer_2[10];
  __int64 unused_local;

  integer_difference = a1 - 1900;
  input_value_2 = a4;
  input_value = a2;
  if ( a1 - 1900 >= 70
    && integer_difference <= 0x8A
    && (unsigned int)(a2 - 1) <= 0xB
    && a3 > 0
    && (a3 <= dword_14028BF18[a2] - dword_14028BF18[a2 - 1] || sub_1402374E4(integer_difference) && (_DWORD)input_value == 2 && a3 <= 29)
    && input_value_2 <= 0x17
    && a5 <= 0x3B
    && a6 <= 0x3B )
  {
    iteration_count = dword_14028BF18[input_value - 1] + a3;
    if ( sub_1402374E4(integer_difference) && (int)input_value > 2 )
      ++iteration_count;
    sub_140237FC0();
    selection_flag_3 = 0;
    selection_flag_2 = 0;
    selection_flag = 0;
    if ( (unsigned int)sub_140237138(&selection_flag_3) || (unsigned int)sub_140237168(&selection_flag_2) || (unsigned int)sub_140237198(&selection_flag) )
    {
      scratch_buffer[4] = 0;
      crt_invoke_watson();
      __debugbreak();
    }
    unsigned int sr_t = ((((unsigned int)integer_difference * 365u
                         + (unsigned int)((int)(integer_difference - 1) / 4 - (int)(integer_difference - 1) / 100 + (int)(integer_difference + 299) / 400 + iteration_count)) * 24u
                        + input_value_2) * 60u
                       + a5) * 60u
                     + (unsigned int)selection_flag + a6 + 0x7C558180u; /* 0x14025967C..0x1402596EE: edi */
    if ( a7 == 1 )
      return sr_t + (unsigned int)selection_flag_2; /* 0x1402596F7: je -> 0x14025972B: mov eax, r14d */
    {
      scratch_buffer_2[7] = iteration_count;
      scratch_buffer_2[5] = integer_difference;
      scratch_buffer_2[4] = input_value - 1;
      scratch_buffer_2[2] = input_value_2;
      scratch_buffer_2[1] = a5;
      scratch_buffer_2[0] = a6;
      if ( a7 == -1 )
      {
        if ( selection_flag_3 && (unsigned int)sub_140238034((struct tm *)scratch_buffer_2) )
          return sr_t + (unsigned int)selection_flag_2; /* 0x140259725: jne -> mov eax, r14d */
      }
    }
    return sr_t; /* 0x140259727: mov eax, edi */
  }
  else
  {
    *errno_sr() = 22;
  }
  return (unsigned int)-1; /* 0x14025973B: or eax, 0xffffffff */
}

//----- (0000000140259770)
__int64 _loctotime64_t_0(int a1,int a2,int a3,unsigned int a4,unsigned int a5,unsigned int a6,int a7)
{
 unsigned int year=(unsigned int)a1-1900u;
 if(year<70 || year>1101 || (unsigned int)a2-1u>11 || a3<=0 ||
    (a3>dword_14028BF18[a2]-dword_14028BF18[a2-1] &&
     !(sub_1402374E4(year) && a2==2 && a3<=29)) || a4>23 || a5>59 || a6>59){
   *errno_sr()=22;return -1;
 }
 int yday=dword_14028BF18[a2-1]+a3;
 if(sub_1402374E4(year) && a2>2)++yday;
 sub_140237FC0();
 int daylight=0,dstbias=0,timezone=0;
 if((unsigned int)sub_140237138((_DWORD *)&daylight) ||
    (unsigned int)sub_140237168((_DWORD *)&dstbias) ||
    (unsigned int)sub_140237198((_DWORD *)&timezone)){
   crt_invoke_watson();__debugbreak();
 }
 int64_t days=((int64_t)year-70)*365+(year-1)/4-17+(year+299)/400-(year-1)/100+yday;
 int64_t result=((days*24+(int32_t)a4)*60+(int32_t)a5)*60+(int32_t)a6+timezone;
 if(a7==1)return result+dstbias;
 if(a7==-1 && daylight){
   struct tm calendar={0};
   calendar.tm_sec=a6;calendar.tm_min=a5;calendar.tm_hour=a4;
   calendar.tm_mon=a2-1;calendar.tm_year=year;calendar.tm_yday=yday;
   if((int)sub_140238034(&calendar))return result+dstbias;
 }
 return result;
}

//----- (000000014025999C) ----------------------------------------------------
bool            sub_14025999C(int a1, int a2, int a3)
{
  return a3 > 0 && (a3 <= dword_14028BF18[a2 + 1] - dword_14028BF18[a2] || sub_1402374E4(a1) && a2 == 1 && a3 <= 29);
}

//----- (00000001402599E8) ----------------------------------------------------
// attributes: thunk
__int64            _loctotime32_t_sr(int a1, int a2, int a3, unsigned int a4, unsigned int a5, unsigned int a6, int a7)
{
  return _loctotime32_t_0(a1, a2, a3, a4, a5, a6, a7);
}

//----- (00000001402599F0) ----------------------------------------------------
// attributes: thunk
__int64            _loctotime64_t_sr(int a1, int a2, int a3, unsigned int a4, unsigned int a5, unsigned int a6, int a7)
{
  return _loctotime64_t_0(a1, a2, a3, a4, a5, a6, a7);
}

//----- (00000001402599F8) ----------------------------------------------------
__int64            sub_1402599F8(unsigned __int16 a1)
{
  int call_result;
  unsigned int unused_written_slot;

  call_result = sub_140256E00(a1, 263);
  unused_written_slot = 0;
  if ( call_result || a1 == 95 )
    return 1;
  return unused_written_slot;
}

// 1402599F8: invalid function type 'int __cdecl sub_1402599F8(wint_t C)' has been ignored

//----- (0000000140259A24) ----------------------------------------------------
__int64            sub_140259A24(unsigned __int16 a1)
{
  int call_result;
  unsigned int unused_written_slot;

  call_result = sub_140256E00(a1, 259);
  unused_written_slot = 0;
  if ( call_result || a1 == 95 )
    return 1;
  return unused_written_slot;
}

// 140259A24: invalid function type 'int __cdecl sub_140259A24(wint_t C)' has been ignored

//----- (0000000140259A50) ----------------------------------------------------
__int64            isleadbyte_l(int a1, struct __crt_locale_pointers *a2)
{
  __int64 input_value;
  __int64 result;
  _QWORD scratch_buffer[3];
  char unrecovered_register_value;

  input_value = a1;
  crt_locale_update((_LocaleUpdate *)scratch_buffer, a2);
  if ( (unsigned int)(input_value + 1) > 0x100 )
    result = 0;
  else
    result = *(_WORD *)(*(_QWORD *)scratch_buffer[1] + 2 * input_value) & 0x8000;
  if ( unrecovered_register_value )
    *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
  return result;
}

// 140259A50: invalid function type 'int __cdecl isleadbyte_l(int C, #86 Locale)' has been ignored

//----- (0000000140259AD8) ----------------------------------------------------
__int64            sub_140259AD8(unsigned __int16 a1)
{
  int call_result;
  unsigned int unused_written_slot;

  call_result = sub_140256E00(a1, 263);
  unused_written_slot = 0;
  if ( call_result || a1 == 95 )
    return 1;
  return unused_written_slot;
}

// 140259AD8: invalid function type 'int __cdecl sub_140259AD8(wint_t C)' has been ignored

//----- (0000000140259B04) ----------------------------------------------------
__int64            sub_140259B04(unsigned __int16 a1)
{
  int call_result;
  unsigned int unused_written_slot;

  call_result = sub_140256E00(a1, 259);
  unused_written_slot = 0;
  if ( call_result || a1 == 95 )
    return 1;
  return unused_written_slot;
}

// 140259B04: invalid function type 'int __cdecl sub_140259B04(wint_t C)' has been ignored

//----- (0000000140259B90) ----------------------------------------------------
int         isleadbyte(int C)
{
  __int64 cached_c;
  int result;
  _QWORD scratch_buffer[3];
  char unrecovered_register_value;

  cached_c = C;
  crt_locale_update((_LocaleUpdate *)scratch_buffer, nullptr);
  if ( (unsigned int)(cached_c + 1) > 0x100 )
    result = 0;
  else
    result = *(_WORD *)(*(_QWORD *)scratch_buffer[1] + 2 * cached_c) & 0x8000;
  if ( unrecovered_register_value )
    *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
  return result;
}

//----- (0000000140259C9C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_885(__int64 *a1)
{
  __int64 loaded_word;
  _DWORD *record_pointer;

  loaded_word = *a1;
  if ( loaded_word )
  {
    record_pointer = (_DWORD *)(loaded_word - 16);
    if ( *record_pointer == 56797 )
      free_base(record_pointer);
  }
}

//----- (0000000140259CC8) ----------------------------------------------------
__int64            sub_140259CC8(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _BYTE *a4,
        int a5,
        __int64 *a6,
        int a7,
        unsigned int a8)
{
  unsigned int loaded_word;
  signed int multi_byte_to_wide_char_result;
  unsigned int saved_multi_byte_to_wide_char_result;
  unsigned __int64 comparison_result;
  __int64 integer_sum;
  void *alloca_result;
  __int64 *saved_alloca_result;
  __int64 *malloc_base_result;
  __int64 table_value;
  int call_result;
  unsigned int cached_call_result;
  unsigned __int64 comparison_result_2;
  __int64 integer_sum_2;
  void *alloca_result_2;
  __int64 *saved_alloca_result_2;
  __int64 *malloc_base_result_2;
  _BYTE scratch_buffer[32];
  __int64 *saved_running_total;
  __int64 packed_word_bits;
  __int64 selection_flag;
  __int64 selection_flag_2;
  __int64 scratch_buffer_2[6];

  scratch_buffer_2[0] = a2;
  if ( a5 > 0 )
    _strncnt_sr(a4, a5);
  loaded_word = a8;
  if ( !a8 )
    loaded_word = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
  LODWORD(packed_word_bits) = 0;
  saved_running_total = nullptr;
  unsigned int sr_ret = 0; /* edi: 0x140259F7B xor edi, edi on every failure */
  multi_byte_to_wide_char_result = crt_multi_byte_to_wide_char();
  saved_multi_byte_to_wide_char_result = multi_byte_to_wide_char_result;
  if ( multi_byte_to_wide_char_result )
  {
    comparison_result = (2LL * multi_byte_to_wide_char_result + 16) & -(__int64)(2LL * multi_byte_to_wide_char_result < (unsigned __int64)(2LL * multi_byte_to_wide_char_result + 16));
    if ( !comparison_result )
    {
      saved_alloca_result = nullptr;
      goto LABEL_16;
    }
    if ( comparison_result > 0x400 )
    {
      malloc_base_result = (__int64 *)malloc_base();
      saved_alloca_result = malloc_base_result;
      if ( !malloc_base_result )
      {
LABEL_16:
        if ( !saved_alloca_result )
          goto LABEL_40;
        LODWORD(packed_word_bits) = saved_multi_byte_to_wide_char_result;
        saved_running_total = saved_alloca_result;
        if ( !(unsigned int)crt_multi_byte_to_wide_char() )
          goto LABEL_40;
        table_value = scratch_buffer_2[0];
        call_result = sub_14024F4D0(scratch_buffer_2[0], a3, (__int64)saved_alloca_result, saved_multi_byte_to_wide_char_result, 0, 0, 0, 0, 0);
        cached_call_result = call_result;
        if ( !call_result )
          goto LABEL_40;
        if ( (a3 & 0x400) != 0 )
        {
          if ( !a7 )
            sr_ret = cached_call_result; /* 0x140259E4D: je with edi = the size */
          else if ( call_result <= a7 )
            sr_ret = (unsigned int)sub_14024F4D0(table_value, a3, (__int64)saved_alloca_result, saved_multi_byte_to_wide_char_result, (__int64)a6, a7, 0, 0, 0); /* 0x140259E8B: mov edi, eax */
          goto LABEL_40;
        }
        comparison_result_2 = (2LL * call_result + 16) & -(__int64)(2LL * call_result < (unsigned __int64)(2LL * call_result + 16));
        if ( comparison_result_2 )
        {
          if ( comparison_result_2 > 0x400 )
          {
            malloc_base_result_2 = (__int64 *)malloc_base();
            saved_alloca_result_2 = malloc_base_result_2;
            if ( !malloc_base_result_2 )
              goto LABEL_33;
            *(_DWORD *)malloc_base_result_2 = 56797;
          }
          else
          {
            integer_sum_2 = comparison_result_2 + 15;
            if ( comparison_result_2 + 15 < comparison_result_2 )
              integer_sum_2 = 0xFFFFFFFFFFFFFF0LL;
            alloca_result_2 = alloca(integer_sum_2 & 0xFFFFFFFFFFFFFFF0uLL);
            saved_alloca_result_2 = alloca_result_2;
            if ( scratch_buffer == (_BYTE *)-80LL )
              goto LABEL_40;
            LODWORD(scratch_buffer_2[0]) = 52428;
          }
          saved_alloca_result_2 += 2;
        }
        else
        {
          saved_alloca_result_2 = nullptr;
        }
LABEL_33:
        if ( saved_alloca_result_2 )
        {
          if ( (unsigned int)sub_14024F4D0(table_value, a3, (__int64)saved_alloca_result, saved_multi_byte_to_wide_char_result, (__int64)saved_alloca_result_2, cached_call_result, 0, 0, 0) )
          {
            selection_flag_2 = 0;
            selection_flag = 0;
            if ( a7 )
            {
              LODWORD(packed_word_bits) = a7;
              saved_running_total = a6;
            }
            else
            {
              LODWORD(packed_word_bits) = 0;
              saved_running_total = nullptr;
            }
            sr_ret = (unsigned int)crt_wide_char_to_multi_byte(loaded_word, 0, (__int64)saved_alloca_result_2, cached_call_result, (__int64)saved_running_total, packed_word_bits, selection_flag, selection_flag_2); /* 0x140259F64: mov edi, eax */
            if ( sr_ret )
            {
              if ( *((_DWORD *)saved_alloca_result_2 - 4) != 56797 )
                goto LABEL_40;
              goto LABEL_39;
            }
          }
          if ( *((_DWORD *)saved_alloca_result_2 - 4) == 56797 )
LABEL_39:
            free_base(saved_alloca_result_2 - 2);
        }
LABEL_40:
        if ( saved_alloca_result && *((_DWORD *)saved_alloca_result - 4) == 56797 )
          free_base(saved_alloca_result - 2);
        return sr_ret; /* 0x140259F93: mov eax, edi */
      }
      *(_DWORD *)malloc_base_result = 56797;
    }
    else
    {
      integer_sum = comparison_result + 15;
      if ( comparison_result + 15 < comparison_result )
        integer_sum = 0xFFFFFFFFFFFFFF0LL;
      alloca_result = alloca(integer_sum & 0xFFFFFFFFFFFFFFF0uLL);
      saved_alloca_result = alloca_result;
      if ( scratch_buffer == (_BYTE *)-80LL )
        goto LABEL_40;
      LODWORD(scratch_buffer_2[0]) = 52428;
    }
    saved_alloca_result += 2;
    goto LABEL_16;
  }
  return 0; /* 0x140259D59: je with eax = 0 */
}

//----- (000000014025A004) ----------------------------------------------------
__int64            sub_14025A004(
        struct __crt_locale_pointers *a1,
        __int64 a2,
        unsigned int a3,
        _BYTE *a4,
        int a5,
        __int64 *a6,
        int a7,
        unsigned int a8, ...)
{
  __int64 result;
  __int64 callee_output_word;
  _BYTE scratch_buffer[24];

  crt_locale_update((_LocaleUpdate *)&callee_output_word, a1);
  result = sub_140259CC8((__int64)scratch_buffer, a2, a3, a4, a5, a6, a7, a8);
  if ( scratch_buffer[16] )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  return result;
}

//----- (000000014025A09C) ----------------------------------------------------
void         freea(void *Memory)
{
  _DWORD *record_pointer;

  if ( Memory )
  {
    record_pointer = (char *)Memory - 16;
    if ( *record_pointer == 56797 )
      free_base(record_pointer);
  }
}

//----- (000000014025A0BC) ----------------------------------------------------
__int64            realloc_base(void *a1, unsigned __int64 a2)
{
  __int64 result;

  if ( !a1 )
    return sr_path_malloc(a2);
  if ( !a2 )
  {
    free_base(a1);
    return 0;
  }
  if ( a2 > 0xFFFFFFFFFFFFFFE0uLL )
  {
LABEL_6:
    *errno_sr() = 12;
    return 0;
  }
  while ( 1 )
  {
    result = ((__int64 (           *)(_QWORD, _QWORD, void *, unsigned __int64))HeapReAlloc)(
               g_144CBFA48,
               0,
               a1,
               a2);
    if ( result )
      return result;
    if ( !(unsigned int)sub_14024A06C() || !(unsigned int)callnewh(a2) )
      goto LABEL_6;
  }
}

// 14025A0BC: invalid function type 'void *__cdecl realloc_base(void *Block, #66 Size)' has been ignored
// 14026E098: invalid function type 'LPVOID (__stdcall *HeapReAlloc)(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem, SIZE_T dwBytes)' has been ignored

//----- (000000014025A138) ----------------------------------------------------
__int64            sub_14025A138(int a1)
{
  __int64 result;
  int selection_flag;
  int input_value;

  result = g_144CBF9B4;
  selection_flag = 0;
  if ( !g_144CBF9B4 )
  {
    input_value = a1;
    if ( *(int *)(*(_QWORD *)(__readgsqword(0x60u) + 32) + 8LL) >= 0 )
      sub_14024ED04((__int64)&input_value);
    LOBYTE(selection_flag) = input_value == 1;
    _InterlockedExchange((volatile __int32 *)&g_144CBF9B4, selection_flag + 1);
    return (unsigned int)(selection_flag + 1);
  }
  return result;
}

//----- (000000014025A184) ----------------------------------------------------
__int64            sub_14025A184(int a1)
{
  __int64 result;
  int selection_flag;
  int input_value;

  result = g_144CBF9B8;
  selection_flag = 0;
  if ( !g_144CBF9B8 )
  {
    input_value = a1;
    if ( *(int *)(*(_QWORD *)(__readgsqword(0x60u) + 32) + 8LL) >= 0 )
      sub_14024ECB4((__int64)&input_value);
    LOBYTE(selection_flag) = input_value == 1;
    _InterlockedExchange((volatile __int32 *)&g_144CBF9B8, selection_flag + 1);
    return (unsigned int)(selection_flag + 1);
  }
  return result;
}

//----- (000000014025A1D0) ----------------------------------------------------
__int64            sub_14025A1D0(int a1)
{
  __int64 result;
  int input_value;

  result = g_144CBF9BC;
  if ( !g_144CBF9BC )
  {
    input_value = a1;
    if ( *(int *)(*(_QWORD *)(__readgsqword(0x60u) + 32) + 8LL) >= 0 )
      sub_14024ED54((__int64)&input_value);
    switch ( input_value )
    {
      case 1:
        result = 2;
        break;
      case 2:
        result = 1;
        break;
      case 3:
        result = 3;
        break;
      default:
        result = 4;
        break;
    }
    _InterlockedExchange((volatile __int32 *)&g_144CBF9BC, result);
  }
  return result;
}

//----- (000000014025A23C) ----------------------------------------------------
__int64            sub_14025A23C(int a1)
{
  unsigned int selection_flag;
  int input_value;

  input_value = a1;
  selection_flag = 0;
  if ( *(int *)(*(_QWORD *)(__readgsqword(0x60u) + 32) + 8LL) >= 0 )
    sub_14024EC64((__int64)&input_value);
  LOBYTE(selection_flag) = input_value != 1;
  return selection_flag;
}

//----- (000000014025A2E0) ----------------------------------------------------
__int64 sub_14025A2E0()
{
  unsigned __int32 state_word;
  int selection_flag;

  state_word = g_144CBF9B4;
  if ( !g_144CBF9B4 )
  {
    selection_flag = 0;
    state_word = 1;
    if ( *(int *)(*(_QWORD *)(__readgsqword(0x60u) + 32) + 8LL) >= 0 )
    {
      sub_14024ED04((__int64)&selection_flag);
      if ( selection_flag == 1 )
        state_word = 2;
    }
    _InterlockedExchange((volatile __int32 *)&g_144CBF9B4, state_word);
  }
  return state_word;
}

//----- (000000014025A334) ----------------------------------------------------
__int64 sub_14025A334()
{
  unsigned __int32 state_word;
  int selection_flag;

  state_word = g_144CBF9B8;
  if ( !g_144CBF9B8 )
  {
    state_word = 1;
    selection_flag = 1;
    if ( *(int *)(*(_QWORD *)(__readgsqword(0x60u) + 32) + 8LL) < 0 || (sub_14024ECB4((__int64)&selection_flag), selection_flag == 1) )
      state_word = 2;
    _InterlockedExchange((volatile __int32 *)&g_144CBF9B8, state_word);
  }
  return state_word;
}

//----- (000000014025A388) ----------------------------------------------------
__int64 sub_14025A388()
{
  unsigned int unused_written_slot;
  int selection_flag;

  unused_written_slot = 0;
  selection_flag = 0;
  if ( *(int *)(*(_QWORD *)(__readgsqword(0x60u) + 32) + 8LL) < 0 )
    return 1;
  sub_14024EC64((__int64)&selection_flag);
  if ( selection_flag != 1 )
    return 1;
  return unused_written_slot;
}

//----- (000000014025A3C4) ----------------------------------------------------
__int64 sub_14025A3C4()
{
  unsigned __int32 state_word;
  int selection_code;

  state_word = g_144CBF9BC;
  if ( !g_144CBF9BC )
  {
    state_word = 2;
    selection_code = 2;
    if ( *(int *)(*(_QWORD *)(__readgsqword(0x60u) + 32) + 8LL) >= 0 )
      sub_14024ED54((__int64)&selection_code);
    if ( selection_code != 1 )
    {
      if ( selection_code == 2 )
      {
        state_word = 1;
      }
      else if ( selection_code == 3 )
      {
        state_word = 3;
      }
      else
      {
        state_word = 4;
      }
    }
    _InterlockedExchange((volatile __int32 *)&g_144CBF9BC, state_word);
  }
  return state_word;
}

//----- (000000014025A430) ----------------------------------------------------
__int64            sub_14025A430(unsigned int a1, char *a2, unsigned __int64 a3, unsigned int a4, char a5)
{
  unsigned __int64 iteration_count;
  char *text_cursor;
  char *text_cursor_2;
  _BYTE *unused_written_slot;
  char *text_cursor_3;
  unsigned int comparison_operand;
  char selection_code;
  char input_byte;

  iteration_count = 0;
  text_cursor = a2;
  if ( a5 )
  {
    *a2 = 45;
    text_cursor = a2 + 1;
    iteration_count = 1;
    a1 = -a1;
  }
  text_cursor_2 = text_cursor;
  do
  {
    unused_written_slot = text_cursor + 1;
    text_cursor_3 = text_cursor;
    comparison_operand = a1 % a4;
    a1 /= a4;
    selection_code = 87;
    if ( comparison_operand <= 9 )
      selection_code = 48;
    ++iteration_count;
    *text_cursor = comparison_operand + selection_code;
    if ( !a1 )
      break;
    ++text_cursor;
  }
  while ( iteration_count < a3 );
  if ( iteration_count < a3 )
  {
    *unused_written_slot = 0;
    do
    {
      input_byte = *text_cursor_3;
      *text_cursor_3-- = *text_cursor_2;
      *text_cursor_2++ = input_byte;
    }
    while ( text_cursor_2 < text_cursor_3 );
    return 0;
  }
  else
  {
    *a2 = 0;
    *errno_sr() = 34;
    crt_invalid_parameter_noinfo();
    return 34;
  }
}

//----- (000000014025A4F8) ----------------------------------------------------
__int64            sub_14025A4F8(unsigned int a1, __int16 *a2, unsigned __int64 a3, unsigned int a4, char a5)
{
  __int16 *buffer_cursor;
  unsigned __int64 iteration_count;
  __int16 *buffer_cursor_2;
  _WORD *unused_written_slot;
  __int16 *buffer_cursor_3;
  unsigned int comparison_operand;
  __int16 selection_code;
  __int16 loaded_word;

  buffer_cursor = a2;
  iteration_count = 0;
  if ( a5 )
  {
    a1 = -a1;
    *a2 = 45;
    iteration_count = 1;
    buffer_cursor = a2 + 1;
  }
  buffer_cursor_2 = buffer_cursor;
  do
  {
    unused_written_slot = buffer_cursor + 1;
    buffer_cursor_3 = buffer_cursor;
    comparison_operand = a1 % a4;
    a1 /= a4;
    selection_code = 87;
    if ( comparison_operand <= 9 )
      selection_code = 48;
    ++iteration_count;
    *buffer_cursor = comparison_operand + selection_code;
    if ( !a1 )
      break;
    ++buffer_cursor;
  }
  while ( iteration_count < a3 );
  if ( iteration_count < a3 )
  {
    *unused_written_slot = 0;
    do
    {
      loaded_word = *buffer_cursor_3;
      *buffer_cursor_3-- = *buffer_cursor_2;
      *buffer_cursor_2++ = loaded_word;
    }
    while ( buffer_cursor_2 < buffer_cursor_3 );
    return 0;
  }
  else
  {
    *a2 = 0;
    *errno_sr() = 34;
    crt_invalid_parameter_noinfo();
    return 34;
  }
}

//----- (000000014025A5CC) ----------------------------------------------------
__int64            sub_14025A5CC(unsigned __int64 a1, char *a2, unsigned __int64 a3, unsigned int a4, char a5)
{
  unsigned __int64 iteration_count;
  char *text_cursor;
  char *text_cursor_2;
  unsigned __int64 input_value;
  _BYTE *unused_written_slot;
  char *text_cursor_3;
  unsigned __int64 comparison_operand;
  char selection_code;
  char input_byte;

  iteration_count = 0;
  text_cursor = a2;
  if ( a5 )
  {
    *a2 = 45;
    text_cursor = a2 + 1;
    iteration_count = 1;
    a1 = -(__int64)a1;
  }
  text_cursor_2 = text_cursor;
  input_value = a4;
  do
  {
    unused_written_slot = text_cursor + 1;
    text_cursor_3 = text_cursor;
    comparison_operand = a1 % input_value;
    a1 /= input_value;
    selection_code = 87;
    if ( (unsigned int)comparison_operand <= 9 )
      selection_code = 48;
    ++iteration_count;
    *text_cursor = comparison_operand + selection_code;
    if ( !a1 )
      break;
    ++text_cursor;
  }
  while ( iteration_count < a3 );
  if ( iteration_count < a3 )
  {
    *unused_written_slot = 0;
    do
    {
      input_byte = *text_cursor_3;
      *text_cursor_3-- = *text_cursor_2;
      *text_cursor_2++ = input_byte;
    }
    while ( text_cursor_2 < text_cursor_3 );
    return 0;
  }
  else
  {
    *a2 = 0;
    *errno_sr() = 34;
    crt_invalid_parameter_noinfo();
    return 34;
  }
}

//----- (000000014025A698) ----------------------------------------------------
__int64            sub_14025A698(unsigned __int64 a1, __int16 *a2, unsigned __int64 a3, unsigned int a4, char a5)
{
  __int16 *buffer_cursor;
  unsigned __int64 iteration_count;
  __int16 *buffer_cursor_2;
  unsigned __int64 input_value;
  _WORD *unused_written_slot;
  __int16 *buffer_cursor_3;
  unsigned __int64 comparison_operand;
  __int16 selection_code;
  __int16 loaded_word;

  buffer_cursor = a2;
  iteration_count = 0;
  if ( a5 )
  {
    a1 = -(__int64)a1;
    *a2 = 45;
    iteration_count = 1;
    buffer_cursor = a2 + 1;
  }
  buffer_cursor_2 = buffer_cursor;
  input_value = a4;
  do
  {
    unused_written_slot = buffer_cursor + 1;
    buffer_cursor_3 = buffer_cursor;
    comparison_operand = a1 % input_value;
    a1 /= input_value;
    selection_code = 87;
    if ( (unsigned int)comparison_operand <= 9 )
      selection_code = 48;
    ++iteration_count;
    *buffer_cursor = comparison_operand + selection_code;
    if ( !a1 )
      break;
    ++buffer_cursor;
  }
  while ( iteration_count < a3 );
  if ( iteration_count < a3 )
  {
    *unused_written_slot = 0;
    do
    {
      loaded_word = *buffer_cursor_3;
      *buffer_cursor_3-- = *buffer_cursor_2;
      *buffer_cursor_2++ = loaded_word;
    }
    while ( buffer_cursor_2 < buffer_cursor_3 );
    return 0;
  }
  else
  {
    *a2 = 0;
    *errno_sr() = 34;
    crt_invalid_parameter_noinfo();
    return 34;
  }
}

//----- (000000014025A774) ----------------------------------------------------
__int64            sub_14025A774(unsigned int a1, char *a2, unsigned __int64 a3, unsigned int a4, unsigned __int8 a5)
{
  int *unused_written_slot;
  unsigned int selection_code;

  if ( !a2 || !a3 )
    goto LABEL_2;
  *a2 = 0;
  if ( a3 <= (unsigned __int64)a5 + 1 )
  {
    unused_written_slot = errno_sr();
    selection_code = 34;
    goto LABEL_3;
  }
  if ( a4 - 2 > 0x22 )
  {
LABEL_2:
    unused_written_slot = errno_sr();
    selection_code = 22;
LABEL_3:
    *unused_written_slot = selection_code;
    crt_invalid_parameter_noinfo();
    return selection_code;
  }
  return sub_14025A430(a1, a2, a3, a4, a5);
}

//----- (000000014025A7DC) ----------------------------------------------------
__int64            sub_14025A7DC(
        unsigned int a1,
        __int16 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  int *unused_written_slot;
  unsigned int selection_code;

  if ( !a2 || !a3 )
    goto LABEL_2;
  *a2 = 0;
  if ( a3 <= (unsigned __int64)a5 + 1 )
  {
    unused_written_slot = errno_sr();
    selection_code = 34;
    goto LABEL_3;
  }
  if ( a4 - 2 > 0x22 )
  {
LABEL_2:
    unused_written_slot = errno_sr();
    selection_code = 22;
LABEL_3:
    *unused_written_slot = selection_code;
    crt_invalid_parameter_noinfo();
    return selection_code;
  }
  return sub_14025A4F8(a1, a2, a3, a4, a5);
}

//----- (000000014025A848) ----------------------------------------------------
__int64            sub_14025A848(
        unsigned __int64 a1,
        char *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  int *unused_written_slot;
  unsigned int selection_code;

  if ( !a2 || !a3 )
    goto LABEL_2;
  *a2 = 0;
  if ( a3 <= (unsigned __int64)a5 + 1 )
  {
    unused_written_slot = errno_sr();
    selection_code = 34;
    goto LABEL_3;
  }
  if ( a4 - 2 > 0x22 )
  {
LABEL_2:
    unused_written_slot = errno_sr();
    selection_code = 22;
LABEL_3:
    *unused_written_slot = selection_code;
    crt_invalid_parameter_noinfo();
    return selection_code;
  }
  return sub_14025A5CC(a1, a2, a3, a4, a5);
}

//----- (000000014025A8B0) ----------------------------------------------------
__int64            sub_14025A8B0(
        unsigned __int64 a1,
        __int16 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  int *unused_written_slot;
  unsigned int selection_code;

  if ( !a2 || !a3 )
    goto LABEL_2;
  *a2 = 0;
  if ( a3 <= (unsigned __int64)a5 + 1 )
  {
    unused_written_slot = errno_sr();
    selection_code = 34;
    goto LABEL_3;
  }
  if ( a4 - 2 > 0x22 )
  {
LABEL_2:
    unused_written_slot = errno_sr();
    selection_code = 22;
LABEL_3:
    *unused_written_slot = selection_code;
    crt_invalid_parameter_noinfo();
    return selection_code;
  }
  return sub_14025A698(a1, a2, a3, a4, a5);
}

//----- (000000014025A91C) ----------------------------------------------------
char *        i64toa(__int64 Value, char *Buffer, int Radix)
{
  char comparison_result;

  comparison_result = 0;
  if ( Radix == 10 )
    comparison_result = Value < 0;
  sub_14025A5CC(Value, Buffer, 0xFFFFFFFFFFFFFFFFuLL, Radix, comparison_result);
  return Buffer;
}

//----- (000000014025A950) ----------------------------------------------------
__int64            i64toa_s(signed __int64 a1, char *a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int8 comparison_result;

  comparison_result = 0;
  if ( a4 == 10 )
    comparison_result = a1 < 0;
  return sub_14025A848(a1, a2, a3, a4, comparison_result);
}

// 14025A950: invalid function type 'errno_t __cdecl i64toa_s(__int64 Value, char *Buffer, #66 BufferCount, int Radix)' has been ignored

//----- (000000014025A974) ----------------------------------------------------
sr_anon_49 *        i64tow(__int64 Value, sr_anon_49 *Buffer, int Radix)
{
  char comparison_result;

  comparison_result = 0;
  if ( Radix == 10 )
    comparison_result = Value < 0;
  sub_14025A698(Value, (__int16 *)Buffer, 0xFFFFFFFFFFFFFFFFuLL, Radix, comparison_result);
  return Buffer;
}

//----- (000000014025A9A8) ----------------------------------------------------
__int64            i64tow_s(signed __int64 a1, __int16 *a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int8 comparison_result;

  comparison_result = 0;
  if ( a4 == 10 )
    comparison_result = a1 < 0;
  return sub_14025A8B0(a1, a2, a3, a4, comparison_result);
}

// 14025A9A8: invalid function type 'errno_t __cdecl i64tow_s(__int64 Value, #49 *Buffer, #66 BufferCount, int Radix)' has been ignored

//----- (000000014025A9CC) ----------------------------------------------------
char *        itoa(int Value, char *Buffer, int Radix)
{
  char comparison_result;

  comparison_result = 0;
  if ( Radix == 10 )
    comparison_result = Value < 0;
  sub_14025A430(Value, Buffer, 0xFFFFFFFFFFFFFFFFuLL, Radix, comparison_result);
  return Buffer;
}

//----- (000000014025A9FC) ----------------------------------------------------
__int64            itoa_s(signed int a1, char *a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int8 comparison_result;

  comparison_result = 0;
  if ( a4 == 10 )
    comparison_result = a1 < 0;
  return sub_14025A774(a1, a2, a3, a4, comparison_result);
}

// 14025A9FC: invalid function type 'errno_t __cdecl itoa_s(int Value, char *Buffer, #66 BufferCount, int Radix)' has been ignored

//----- (000000014025AA1C) ----------------------------------------------------
sr_anon_49 *        itow(int Value, sr_anon_49 *Buffer, int Radix)
{
  char comparison_result;

  comparison_result = 0;
  if ( Radix == 10 )
    comparison_result = Value < 0;
  sub_14025A4F8(Value, (__int16 *)Buffer, 0xFFFFFFFFFFFFFFFFuLL, Radix, comparison_result);
  return Buffer;
}

//----- (000000014025AA4C) ----------------------------------------------------
__int64            itow_s(signed int a1, __int16 *a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int8 comparison_result;

  comparison_result = 0;
  if ( a4 == 10 )
    comparison_result = a1 < 0;
  return sub_14025A7DC(a1, a2, a3, a4, comparison_result);
}

// 14025AA4C: invalid function type 'errno_t __cdecl itow_s(int Value, #49 *Buffer, #66 BufferCount, int Radix)' has been ignored

//----- (000000014025AA6C) ----------------------------------------------------
char *        itoa_0(int Value, char *Buffer, int Radix)
{
  char comparison_result;

  comparison_result = 0;
  if ( Radix == 10 )
    comparison_result = Value < 0;
  sub_14025A430(Value, Buffer, 0xFFFFFFFFFFFFFFFFuLL, Radix, comparison_result);
  return Buffer;
}

//----- (000000014025AA9C) ----------------------------------------------------
__int64            itoa_s_0(signed int a1, char *a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int8 comparison_result;

  comparison_result = 0;
  if ( a4 == 10 )
    comparison_result = a1 < 0;
  return sub_14025A774(a1, a2, a3, a4, comparison_result);
}

// 14025AA9C: invalid function type 'errno_t __cdecl itoa_s_0(int Value, char *Buffer, #66 BufferCount, int Radix)' has been ignored

//----- (000000014025AABC) ----------------------------------------------------
sr_anon_49 *        itow_0(int Value, sr_anon_49 *Buffer, int Radix)
{
  char comparison_result;

  comparison_result = 0;
  if ( Radix == 10 )
    comparison_result = Value < 0;
  sub_14025A4F8(Value, (__int16 *)Buffer, 0xFFFFFFFFFFFFFFFFuLL, Radix, comparison_result);
  return Buffer;
}

//----- (000000014025AAEC) ----------------------------------------------------
__int64            itow_s_0(signed int a1, __int16 *a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int8 comparison_result;

  comparison_result = 0;
  if ( a4 == 10 )
    comparison_result = a1 < 0;
  return sub_14025A7DC(a1, a2, a3, a4, comparison_result);
}

// 14025AAEC: invalid function type 'errno_t __cdecl itow_s_0(int Value, #49 *Buffer, #66 BufferCount, int Radix)' has been ignored

//----- (000000014025AB0C) ----------------------------------------------------
char *        ui64toa(unsigned __int64 Value, char *Buffer, int Radix)
{
  sub_14025A5CC(Value, Buffer, 0xFFFFFFFFFFFFFFFFuLL, Radix, 0);
  return Buffer;
}

//----- (000000014025AB30) ----------------------------------------------------
__int64            FH4__DecompFuncInfo(sr_anon_91 *this, char *a2, struct FH4__FuncInfo4 *a3, unsigned int a4)
{
  return sub_14025A848((unsigned __int64)this, a2, (unsigned __int64)a3, a4, 0);
}

//----- (000000014025AB44) ----------------------------------------------------
sr_anon_49 *        ui64tow(unsigned __int64 Value, sr_anon_49 *Buffer, int Radix)
{
  sub_14025A698(Value, (__int16 *)Buffer, 0xFFFFFFFFFFFFFFFFuLL, Radix, 0);
  return Buffer;
}

//----- (000000014025AB68) ----------------------------------------------------
__int64            FH4__DecompFuncInfo_dup2(sr_anon_91 *this, unsigned __int8 *a2, struct FH4__FuncInfo4 *a3, unsigned int a4)
{
  return sub_14025A8B0((unsigned __int64)this, (__int16 *)a2, (unsigned __int64)a3, a4, 0);
}

//----- (000000014025AB7C) ----------------------------------------------------
char *        ultoa_sr(unsigned int Value, char *Buffer, int Radix)
{
  sub_14025A430(Value, Buffer, 0xFFFFFFFFFFFFFFFFuLL, Radix, 0);
  return Buffer;
}

//----- (000000014025ABA0) ----------------------------------------------------
__int64            FH4__DecompFuncInfo_dup3(sr_anon_91 *this, char *a2, struct FH4__FuncInfo4 *a3, unsigned int a4)
{
  return sub_14025A774((unsigned int)this, a2, (unsigned __int64)a3, a4, 0);
}

//----- (000000014025ABB4) ----------------------------------------------------
sr_anon_49 *        ultow(unsigned int Value, sr_anon_49 *Buffer, int Radix)
{
  sub_14025A4F8(Value, (__int16 *)Buffer, 0xFFFFFFFFFFFFFFFFuLL, Radix, 0);
  return Buffer;
}

//----- (000000014025ABD8) ----------------------------------------------------
__int64            FH4__DecompFuncInfo_dup4(sr_anon_91 *this, unsigned __int8 *a2, struct FH4__FuncInfo4 *a3, unsigned int a4)
{
  return sub_14025A7DC((unsigned int)this, (__int16 *)a2, (unsigned __int64)a3, a4, 0);
}

//----- (000000014025ABEC) ----------------------------------------------------
int         set_error_mode(int Mode)
{
  int result;

  if ( Mode >= 0 )
  {
    if ( Mode <= 2 )
    {
      result = g_144CBF9C0;
      g_144CBF9C0 = Mode;
      return result;
    }
    if ( Mode == 3 )
      return g_144CBF9C0;
  }
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return -1;
}

//----- (000000014025AC2C) ----------------------------------------------------
__int64            sub_14025AC2C(_WORD *a1, __int64 a2, __int64 a3)
{
  _WORD *unused_written_slot;
  int *unused_written_slot_2;
  unsigned int selection_code;
  __int64 integer_difference;
  __int16 loaded_word;

  unused_written_slot = a1;
  if ( !a1 || !a2 )
    goto LABEL_5;
  if ( !a3 )
  {
    *a1 = 0;
LABEL_5:
    unused_written_slot_2 = errno_sr();
    selection_code = 22;
LABEL_6:
    *unused_written_slot_2 = selection_code;
    crt_invalid_parameter_noinfo();
    return selection_code;
  }
  do
  {
    if ( !*a1 )
      break;
    ++a1;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *unused_written_slot = 0;
    goto LABEL_5;
  }
  integer_difference = a3 - (_QWORD)a1;
  do
  {
    loaded_word = *(_WORD *)((char *)a1 + integer_difference);
    *a1++ = loaded_word;
    if ( !loaded_word )
      break;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *unused_written_slot = 0;
    unused_written_slot_2 = errno_sr();
    selection_code = 34;
    goto LABEL_6;
  }
  return 0;
}

//----- (000000014025ACB4) ----------------------------------------------------
__int64            sub_14025ACB4(_WORD *a1, __int64 a2, __int64 a3)
{
  unsigned int selection_code;
  _WORD *unused_written_slot;
  int *unused_written_slot_2;
  __int64 integer_difference;
  __int16 loaded_word;

  selection_code = 0;
  unused_written_slot = a1;
  if ( !a1 || !a2 )
    goto LABEL_5;
  if ( !a3 )
  {
    *a1 = 0;
LABEL_5:
    unused_written_slot_2 = errno_sr();
    selection_code = 22;
LABEL_6:
    *unused_written_slot_2 = selection_code;
    crt_invalid_parameter_noinfo();
    return selection_code;
  }
  do
  {
    if ( !*a1 )
      break;
    ++a1;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *unused_written_slot = 0;
    goto LABEL_5;
  }
  integer_difference = a3 - (_QWORD)a1;
  do
  {
    loaded_word = *(_WORD *)((char *)a1 + integer_difference);
    *a1++ = loaded_word;
    if ( !loaded_word )
      break;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *unused_written_slot = 0;
    unused_written_slot_2 = errno_sr();
    selection_code = 34;
    goto LABEL_6;
  }
  return selection_code;
}

//----- (000000014025AD34) ----------------------------------------------------
__int64            sub_14025AD34(char *a1, __int64 a2, char *a3, __int64 a4)
{
  __int64 input_value;
  char *input_cursor;
  int *unused_written_slot;
  unsigned int selection_code;
  __int64 remaining_count;
  __int64 integer_difference;
  __int16 masked_bits;
  __int16 loaded_word;

  input_value = a2;
  input_cursor = a1;
  if ( a4 )
  {
    if ( !a1 )
    {
LABEL_10:
      unused_written_slot = errno_sr();
      selection_code = 22;
LABEL_11:
      *unused_written_slot = selection_code;
      crt_invalid_parameter_noinfo();
      return selection_code;
    }
  }
  else if ( !a1 )
  {
    if ( !a2 )
      return 0;
    goto LABEL_10;
  }
  if ( !a2 )
    goto LABEL_10;
  if ( a4 && !a3 )
  {
    *(_WORD *)a1 = 0;
    goto LABEL_10;
  }
  remaining_count = a4;
  do
  {
    if ( !*(_WORD *)a1 )
      break;
    a1 += 2;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *(_WORD *)input_cursor = 0;
    goto LABEL_10;
  }
  if ( a4 == -1 )
  {
    integer_difference = a3 - a1;
    do
    {
      masked_bits = *(_WORD *)&a1[integer_difference];
      *(_WORD *)a1 = masked_bits;
      a1 += 2;
      if ( !masked_bits )
        break;
      --a2;
    }
    while ( a2 );
  }
  else
  {
    if ( a4 )
    {
      do
      {
        loaded_word = *(_WORD *)a3;
        a3 += 2;
        *(_WORD *)a1 = loaded_word;
        a1 += 2;
        if ( !loaded_word )
          break;
        if ( !--a2 )
          break;
        --remaining_count;
      }
      while ( remaining_count );
    }
    if ( !remaining_count )
      *(_WORD *)a1 = 0;
  }
  if ( a2 )
    return 0;
  if ( a4 != -1 )
  {
    *(_WORD *)input_cursor = 0;
    unused_written_slot = errno_sr();
    selection_code = 34;
    goto LABEL_11;
  }
  *(_WORD *)&input_cursor[2 * input_value - 2] = 0;
  return 80;
}

//----- (000000014025AE2C) ----------------------------------------------------
__int64            sub_14025AE2C(char *a1, __int64 a2, char *a3, __int64 a4)
{
  unsigned int unused_written_slot;
  __int64 input_value;
  char *input_cursor;
  int *unused_written_slot_2;
  unsigned int selection_code;
  __int64 remaining_count;
  __int64 integer_difference;
  __int16 masked_bits;
  __int16 loaded_word;

  unused_written_slot = 0;
  input_value = a2;
  input_cursor = a1;
  if ( a4 )
  {
    if ( !a1 )
      goto LABEL_4;
    goto LABEL_8;
  }
  if ( a1 )
  {
LABEL_8:
    if ( !a2 )
      goto LABEL_4;
    if ( a4 && !a3 )
    {
      *(_WORD *)a1 = 0;
      goto LABEL_4;
    }
    remaining_count = a4;
    do
    {
      if ( !*(_WORD *)a1 )
        break;
      a1 += 2;
      --a2;
    }
    while ( a2 );
    if ( !a2 )
    {
      *(_WORD *)input_cursor = 0;
      goto LABEL_4;
    }
    if ( a4 == -1 )
    {
      integer_difference = a3 - a1;
      do
      {
        masked_bits = *(_WORD *)&a1[integer_difference];
        *(_WORD *)a1 = masked_bits;
        a1 += 2;
        if ( !masked_bits )
          break;
        --a2;
      }
      while ( a2 );
    }
    else
    {
      if ( a4 )
      {
        do
        {
          loaded_word = *(_WORD *)a3;
          a3 += 2;
          *(_WORD *)a1 = loaded_word;
          a1 += 2;
          if ( !loaded_word )
            break;
          if ( !--a2 )
            break;
          --remaining_count;
        }
        while ( remaining_count );
      }
      if ( !remaining_count )
        *(_WORD *)a1 = 0;
    }
    if ( !a2 )
    {
      if ( a4 == -1 )
      {
        *(_WORD *)&input_cursor[2 * input_value - 2] = 0;
        return 80;
      }
      *(_WORD *)input_cursor = 0;
      unused_written_slot_2 = errno_sr();
      selection_code = 34;
      goto LABEL_5;
    }
    return unused_written_slot;
  }
  if ( a2 )
  {
LABEL_4:
    unused_written_slot_2 = errno_sr();
    selection_code = 22;
LABEL_5:
    *unused_written_slot_2 = selection_code;
    crt_invalid_parameter_noinfo();
    return selection_code;
  }
  return unused_written_slot;
}

//----- (000000014025AF2C) ----------------------------------------------------
__int64            sub_14025AF2C(_BYTE *a1, __int64 a2, __int64 a3)
{
  _BYTE *unused_written_slot;
  int *unused_written_slot_2;
  unsigned int selection_code;
  __int64 integer_difference;
  char table_value;

  unused_written_slot = a1;
  if ( !a1 || !a2 )
    goto LABEL_5;
  if ( !a3 )
  {
    *a1 = 0;
LABEL_5:
    unused_written_slot_2 = errno_sr();
    selection_code = 22;
LABEL_6:
    *unused_written_slot_2 = selection_code;
    crt_invalid_parameter_noinfo();
    return selection_code;
  }
  do
  {
    if ( !*a1 )
      break;
    ++a1;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *unused_written_slot = 0;
    goto LABEL_5;
  }
  integer_difference = a3 - (_QWORD)a1;
  do
  {
    table_value = a1[integer_difference];
    *a1++ = table_value;
    if ( !table_value )
      break;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *unused_written_slot = 0;
    unused_written_slot_2 = errno_sr();
    selection_code = 34;
    goto LABEL_6;
  }
  return 0;
}

//----- (000000014025AFAC) ----------------------------------------------------
__int64            strcat_s_sr(_BYTE *a1, __int64 a2, __int64 a3)
{
  unsigned int selection_code;
  _BYTE *unused_written_slot;
  int *unused_written_slot_2;
  __int64 integer_difference;
  char table_value;

  selection_code = 0;
  unused_written_slot = a1;
  if ( !a1 || !a2 )
    goto LABEL_5;
  if ( !a3 )
  {
    *a1 = 0;
LABEL_5:
    unused_written_slot_2 = errno_sr();
    selection_code = 22;
LABEL_6:
    *unused_written_slot_2 = selection_code;
    crt_invalid_parameter_noinfo();
    return selection_code;
  }
  do
  {
    if ( !*a1 )
      break;
    ++a1;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *unused_written_slot = 0;
    goto LABEL_5;
  }
  integer_difference = a3 - (_QWORD)a1;
  do
  {
    table_value = a1[integer_difference];
    *a1++ = table_value;
    if ( !table_value )
      break;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *unused_written_slot = 0;
    unused_written_slot_2 = errno_sr();
    selection_code = 34;
    goto LABEL_6;
  }
  return selection_code;
}

// 14025AFAC: invalid function type 'errno_t __cdecl strcat_s(char *Destination, #65 SizeInBytes, const char *Source)' has been ignored

//----- (000000014025B024) ----------------------------------------------------
__int64            sub_14025B024(_BYTE *a1, __int64 a2, char *a3, __int64 a4)
{
  __int64 input_value;
  _BYTE *input_cursor;
  int *unused_written_slot;
  unsigned int selection_code;
  __int64 remaining_count;
  __int64 integer_difference;
  char table_value;
  char input_byte;

  input_value = a2;
  input_cursor = a1;
  if ( a4 )
  {
    if ( !a1 )
    {
LABEL_10:
      unused_written_slot = errno_sr();
      selection_code = 22;
LABEL_11:
      *unused_written_slot = selection_code;
      crt_invalid_parameter_noinfo();
      return selection_code;
    }
  }
  else if ( !a1 )
  {
    if ( !a2 )
      return 0;
    goto LABEL_10;
  }
  if ( !a2 )
    goto LABEL_10;
  if ( a4 && !a3 )
  {
    *a1 = 0;
    goto LABEL_10;
  }
  remaining_count = a4;
  do
  {
    if ( !*a1 )
      break;
    ++a1;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *input_cursor = 0;
    goto LABEL_10;
  }
  if ( a4 == -1 )
  {
    integer_difference = (intptr_t)((uintptr_t)(a3) - (uintptr_t)(a1));
    do
    {
      table_value = a1[integer_difference];
      *a1++ = table_value;
      if ( !table_value )
        break;
      --a2;
    }
    while ( a2 );
  }
  else
  {
    if ( a4 )
    {
      do
      {
        input_byte = *a3++;
        *a1++ = input_byte;
        if ( !input_byte )
          break;
        if ( !--a2 )
          break;
        --remaining_count;
      }
      while ( remaining_count );
    }
    if ( !remaining_count )
      *a1 = 0;
  }
  if ( a2 )
    return 0;
  if ( a4 != -1 )
  {
    *input_cursor = 0;
    unused_written_slot = errno_sr();
    selection_code = 34;
    goto LABEL_11;
  }
  input_cursor[input_value - 1] = 0;
  return 80;
}

//----- (000000014025B100) ----------------------------------------------------
__int64            strncat_s_sr(_BYTE *a1, __int64 a2, char *a3, __int64 a4)
{
  unsigned int unused_written_slot;
  __int64 input_value;
  _BYTE *input_cursor;
  int *unused_written_slot_2;
  unsigned int selection_code;
  __int64 remaining_count;
  __int64 integer_difference;
  char table_value;
  char input_byte;

  unused_written_slot = 0;
  input_value = a2;
  input_cursor = a1;
  if ( a4 )
  {
    if ( !a1 )
      goto LABEL_4;
    goto LABEL_8;
  }
  if ( a1 )
  {
LABEL_8:
    if ( !a2 )
      goto LABEL_4;
    if ( a4 && !a3 )
    {
      *a1 = 0;
      goto LABEL_4;
    }
    remaining_count = a4;
    do
    {
      if ( !*a1 )
        break;
      ++a1;
      --a2;
    }
    while ( a2 );
    if ( !a2 )
    {
      *input_cursor = 0;
      goto LABEL_4;
    }
    if ( a4 == -1 )
    {
      integer_difference = (intptr_t)((uintptr_t)(a3) - (uintptr_t)(a1));
      do
      {
        table_value = a1[integer_difference];
        *a1++ = table_value;
        if ( !table_value )
          break;
        --a2;
      }
      while ( a2 );
    }
    else
    {
      if ( a4 )
      {
        do
        {
          input_byte = *a3++;
          *a1++ = input_byte;
          if ( !input_byte )
            break;
          if ( !--a2 )
            break;
          --remaining_count;
        }
        while ( remaining_count );
      }
      if ( !remaining_count )
        *a1 = 0;
    }
    if ( !a2 )
    {
      if ( a4 == -1 )
      {
        input_cursor[input_value - 1] = 0;
        return 80;
      }
      *input_cursor = 0;
      unused_written_slot_2 = errno_sr();
      selection_code = 34;
      goto LABEL_5;
    }
    return unused_written_slot;
  }
  if ( a2 )
  {
LABEL_4:
    unused_written_slot_2 = errno_sr();
    selection_code = 22;
LABEL_5:
    *unused_written_slot_2 = selection_code;
    crt_invalid_parameter_noinfo();
    return selection_code;
  }
  return unused_written_slot;
}

// 14025B100: invalid function type 'errno_t __cdecl strncat_s(char *Destination, #65 SizeInBytes, const char *Source, #65 MaxCount)' has been ignored

//----- (000000014025B1F0) ----------------------------------------------------
__int64            __acrt_convert_wcs_mbs_cp__wchar_t__char___lambda_f788ae46380686e8b737efdd8c720d07_____crt_win32_buffer_no_resizing_dup2(
        _WORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  int wide_char_to_multi_byte_result;
  __int64 unrecovered_register_value;
  __int64 saved_wide_char_to_multi_byte_result;
  int int64_result;
  int wide_char_to_multi_byte_result_2;
  __int64 packed_word_bits;
  __int64 packed_word_bits_2;

  if ( !a1 )
  {
    if ( *(_BYTE *)(a2 + 40) )
      *(_BYTE *)(a2 + 40) = 0;
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    goto LABEL_5;
  }
  if ( *a1 )
  {
    LODWORD(packed_word_bits) = 0;
    wide_char_to_multi_byte_result = crt_wide_char_to_multi_byte(a4, 0, (__int64)a1, 0xFFFFFFFFLL, 0, packed_word_bits, 0, 0);
    saved_wide_char_to_multi_byte_result = wide_char_to_multi_byte_result;
    if ( wide_char_to_multi_byte_result )
    {
      if ( (unsigned __int64)wide_char_to_multi_byte_result > *(_QWORD *)(a2 + 24) )
      {
        if ( *(_BYTE *)(a2 + 40) )
          *(_BYTE *)(a2 + 40) = 0;
        goto LABEL_10;
      }
      LODWORD(packed_word_bits_2) = *(_QWORD *)(a2 + 24);
      wide_char_to_multi_byte_result_2 = crt_wide_char_to_multi_byte(a4, 0, (__int64)a1, 0xFFFFFFFFLL, *(_QWORD *)(a2 + 16), packed_word_bits_2, 0, 0);
      if ( wide_char_to_multi_byte_result_2 )
      {
        *(_QWORD *)(a2 + 32) = wide_char_to_multi_byte_result_2 - 1LL;
        return 0;
      }
    }
    int64_result = ((__int64 (           *)(__int64, __int64))GetLastError)(unrecovered_register_value, saved_wide_char_to_multi_byte_result);
    crt_errno_map_os_error(int64_result);
    return (unsigned int)*errno_sr();
  }
  if ( !*(_QWORD *)(a2 + 24) )
  {
    if ( *(_BYTE *)(a2 + 40) )
      *(_BYTE *)(a2 + 40) = 0;
LABEL_10:
    *errno_sr() = 34;
    *(_BYTE *)(a2 + 40) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    return 34;
  }
  **(_BYTE **)(a2 + 16) = 0;
LABEL_5:
  *(_QWORD *)(a2 + 32) = 0;
  return 0;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014025B30C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_888(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 packed_word_bits;

  LODWORD(packed_word_bits) = a5;
  return crt_wide_char_to_multi_byte(a2, 0, a3, 0xFFFFFFFFLL, a4, packed_word_bits, 0, 0);
}

//----- (000000014025B344) ----------------------------------------------------
__int64            sub_14025B344(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 input_value;
  int int64_result;
  unsigned int selection_code;
  __int64 unused_local;
  _QWORD scratch_buffer[3];
  char unrecovered_register_value;
  _QWORD scratch_buffer_2[5];
  char unused_written_slot;
  _WORD Filename[264];
  __int64 unused_local_2;

  input_value = a3;
  if ( (unsigned int)((__int64 (           *)(__int64, _WORD *, __int64))GetModuleFileNameW)(a1, Filename, 261) )
  {
    scratch_buffer_2[4] = 0;
    scratch_buffer_2[0] = a2;
    scratch_buffer_2[1] = input_value;
    scratch_buffer_2[3] = input_value;
    scratch_buffer_2[2] = a2;
    unused_written_slot = 0;
    crt_locale_update((_LocaleUpdate *)scratch_buffer, nullptr);
    selection_code = 65001;
    if ( *(_DWORD *)(scratch_buffer[1] + 12LL) == 65001 )
    {
      if ( unrecovered_register_value )
        *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
    }
    else if ( (unsigned int)sub_14024EDA4() )
    {
      if ( unrecovered_register_value )
        *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
      selection_code = 0;
    }
    else
    {
      if ( unrecovered_register_value )
        *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
      selection_code = 1;
    }
    __acrt_wcs_to_mbs_cp____crt_win32_buffer_no_resizing(Filename, (__int64)scratch_buffer_2, selection_code);
  }
  else
  {
    int64_result = ((__int64 (*)(void))GetLastError)();
    crt_errno_map_os_error(int64_result);
    return 0; /* 0x14025B397: xor eax, eax */
  }
  return (unsigned int)scratch_buffer_2[4]; /* 0x14025B43A: mov eax, dword ptr [rsp + 0x60] */
}

// 14026E178: invalid function type 'DWORD (__stdcall *GetModuleFileNameW)(HMODULE hModule, LPWSTR lpFilename, DWORD nSize)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014025B464) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_889(__int64 a1, __int64 a2, unsigned int a3)
{
  BOOL isdebuggerpresent_result;
  bool saved_isdebuggerpresent_result;
  __int64 call_result;

  isdebuggerpresent_result = IsDebuggerPresent();
  saved_isdebuggerpresent_result = isdebuggerpresent_result;
  if ( isdebuggerpresent_result )
  {
    if ( a1 )
      _acrt_OutputDebugStringA(a1);
    if ( (unsigned int)sub_14025A3C4() != 1 )
      return 4;
  }
  if ( (unsigned int)sub_14025A334() != 2 || !sub_14024F84C() )
    return (unsigned int)saved_isdebuggerpresent_result + 3;
  if ( (unsigned __int8)sub_14024FB24() )
  {
    call_result = sub_14024FA78();
  }
  else
  {
    a3 |= 0x200000u;
    call_result = 0;
  }
  return sub_14024F65C(call_result, a1, a2, a3);
}

//----- (000000014025B508) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_890(__int64 a1, __int64 a2, unsigned int a3)
{
  BOOL isdebuggerpresent_result;
  bool saved_isdebuggerpresent_result;
  __int64 call_result;

  isdebuggerpresent_result = IsDebuggerPresent();
  saved_isdebuggerpresent_result = isdebuggerpresent_result;
  if ( isdebuggerpresent_result )
  {
    if ( a1 )
      ((void (           *)(__int64))OutputDebugStringW)(a1);
    if ( (unsigned int)sub_14025A3C4() != 1 )
      return 4;
  }
  if ( (unsigned int)sub_14025A334() != 2 || !sub_14024F84C() )
    return (unsigned int)saved_isdebuggerpresent_result + 3;
  if ( (unsigned __int8)sub_14024FB24() )
  {
    call_result = sub_14024FA78();
  }
  else
  {
    a3 |= 0x200000u;
    call_result = 0;
  }
  return sub_14024F6D0(call_result, a1, a2, a3);
}

// 14026E090: invalid function type 'void (__stdcall *OutputDebugStringW)(LPCWSTR lpOutputString)' has been ignored

//----- (000000014025B610) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_891(__int64 a1, __int64 a2, unsigned int a3)
{
  BOOL isdebuggerpresent_result;
  bool saved_isdebuggerpresent_result;
  __int64 call_result;

  isdebuggerpresent_result = IsDebuggerPresent();
  saved_isdebuggerpresent_result = isdebuggerpresent_result;
  if ( isdebuggerpresent_result )
  {
    if ( a1 )
      _acrt_OutputDebugStringA(a1);
    if ( (unsigned int)sub_14025A3C4() != 1 )
      return 4;
  }
  if ( (unsigned int)sub_14025A334() != 2 || !sub_14024F84C() )
    return (unsigned int)saved_isdebuggerpresent_result + 3;
  if ( (unsigned __int8)sub_14024FB24() )
  {
    call_result = sub_14024FA78();
  }
  else
  {
    a3 |= 0x200000u;
    call_result = 0;
  }
  return sub_14024F65C(call_result, a1, a2, a3);
}

//----- (000000014025B6B4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_892(__int64 a1, __int64 a2, unsigned int a3)
{
  BOOL isdebuggerpresent_result;
  bool saved_isdebuggerpresent_result;
  __int64 call_result;

  isdebuggerpresent_result = IsDebuggerPresent();
  saved_isdebuggerpresent_result = isdebuggerpresent_result;
  if ( isdebuggerpresent_result )
  {
    if ( a1 )
      ((void (           *)(__int64))OutputDebugStringW)(a1);
    if ( (unsigned int)sub_14025A3C4() != 1 )
      return 4;
  }
  if ( (unsigned int)sub_14025A334() != 2 || !sub_14024F84C() )
    return (unsigned int)saved_isdebuggerpresent_result + 3;
  if ( (unsigned __int8)sub_14024FB24() )
  {
    call_result = sub_14024FA78();
  }
  else
  {
    a3 |= 0x200000u;
    call_result = 0;
  }
  return sub_14024F6D0(call_result, a1, a2, a3);
}

// 14026E090: invalid function type 'void (__stdcall *OutputDebugStringW)(LPCWSTR lpOutputString)' has been ignored

//----- (000000014025B758) ----------------------------------------------------
__int64            sub_14025B758(__int64 a1, __int64 *a2, __int64 a3, __int64 *a4)
{
  crt_lock_file(*a2);
  LODWORD(a3) = sub_14025B800(a3);
  crt_unlock_file(*a4);
  return (unsigned int)a3;
}

//----- (000000014025B798) ----------------------------------------------------
__int64            sub_14025B798(__int64 a1, __int64 a2)
{
  __int64 callee_output_word;
  __int64 input_value;
  __int64 input_value_2;

  input_value = a1;
  input_value_2 = a1;
  return sub_14025B758((__int64)&callee_output_word, &input_value_2, a2, &input_value);
}

//----- (000000014025B800) ----------------------------------------------------
__int64            sub_14025B800(__int64 a1)
{
  unsigned __int64 masked_bits;
  __int64 saved_malloc_base_result;
  __int64 loaded_word;
  __int64 malloc_base_result;

  masked_bits = **(_QWORD **)a1 & 0xFFFFFFFFFFFFFFFEuLL;
  sub_1402501C4(**(FILE ***)(a1 + 8));
  sub_1402502FC(**(_QWORD **)(a1 + 8));
  _InterlockedAnd((volatile signed __int32 *)(**(_QWORD **)(a1 + 8) + 20LL), 0xFFFFF81F);
  if ( (**(_BYTE **)(a1 + 16) & 4) != 0 )
  {
    saved_malloc_base_result = **(_QWORD **)(a1 + 8);
    loaded_word = saved_malloc_base_result + 28;
    _InterlockedOr((volatile signed __int32 *)(saved_malloc_base_result + 20), 0x400u);
    *(_DWORD *)(saved_malloc_base_result + 32) = 2;
LABEL_8:
    *(_QWORD *)saved_malloc_base_result = loaded_word;
    *(_QWORD *)(saved_malloc_base_result + 8) = loaded_word;
    goto LABEL_9;
  }
  loaded_word = **(_QWORD **)(a1 + 24);
  if ( loaded_word )
  {
    saved_malloc_base_result = **(_QWORD **)(a1 + 8);
    _InterlockedOr((volatile signed __int32 *)(saved_malloc_base_result + 20), 0x180u);
    *(_DWORD *)(saved_malloc_base_result + 32) = masked_bits;
    goto LABEL_8;
  }
  malloc_base_result = malloc_base();
  free_base(nullptr);
  if ( !malloc_base_result )
  {
    ++g_144CBE6B8;
    return 0xFFFFFFFFLL;
  }
  saved_malloc_base_result = **(_QWORD **)(a1 + 8);
  _InterlockedOr((volatile signed __int32 *)(saved_malloc_base_result + 20), 0x140u);
  *(_DWORD *)(saved_malloc_base_result + 32) = masked_bits;
  *(_QWORD *)saved_malloc_base_result = malloc_base_result;
  *(_QWORD *)(saved_malloc_base_result + 8) = malloc_base_result;
LABEL_9:
  *(_DWORD *)(saved_malloc_base_result + 16) = 0;
  return 0;
}

//----- (000000014025B8F8) ----------------------------------------------------
__int64            setvbuf_sr(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 input_value;
  __int64 input_value_2;
  __int64 input_value_3;
  _QWORD scratch_buffer[5];
  char callee_output_word;
  __int64 input_value_4;
  int input_value_5;
  __int64 input_value_6;

  input_value_6 = a4;
  input_value_5 = a3;
  input_value_4 = a2;
  input_value = a1;
  if ( !a1 || (a3 & 0xFFFFFFBB) != 0 || a3 == 68 || (a3 & 0xFFFFFFBF) == 0 && (unsigned __int64)(a4 - 2) > 0x7FFFFFFD )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
  else
  {
    input_value_2 = a1;
    scratch_buffer[0] = (uint64)(uintptr_t)(&input_value_6);
    input_value_3 = a1;
    scratch_buffer[1] = (uint64)(uintptr_t)(&input_value);
    scratch_buffer[2] = (uint64)(uintptr_t)(&input_value_5);
    scratch_buffer[3] = (uint64)(uintptr_t)(&input_value_4);
    return sub_14025B758((__int64)&callee_output_word, &input_value_3, (__int64)scratch_buffer, &input_value_2);
  }
}

// 14025B8F8: invalid function type 'int __cdecl setvbuf(FILE *Stream, char *Buffer, int Mode, #81 Size)' has been ignored

//----- (000000014025B99C) ----------------------------------------------------
__int64            sub_14025B99C(__int64 a1, unsigned int *a2, __int64 a3, unsigned int *a4)
{
  __int64 unused_written_slot;

  crt_lock(*a2);
  unused_written_slot = __ROR8__(g_144CBF9D8 ^ _security_cookie, _security_cookie & 0x3F);
  crt_unlock(*a4);
  return unused_written_slot;
}

//----- (000000014025B9E4) ----------------------------------------------------
__int64            sub_14025B9E4(unsigned int a1, __int64 a2)
{
  __int64 callee_output_word;
  unsigned int input_value;
  unsigned int input_value_2;

  input_value = a1;
  input_value_2 = a1;
  return sub_14025B99C((__int64)&callee_output_word, &input_value_2, a2, &input_value);
}

//----- (000000014025BA7C) ----------------------------------------------------
__int64            HandlerRoutine(__m256 *CtrlType)
{
  int cached_ctrltype;
  unsigned int *unused_written_slot;
  __int64 xor_value;
  unsigned int selection_code;
  void (           *callback_function)(_QWORD);

  cached_ctrltype = (int)CtrlType;
  crt_lock(3);
  if ( cached_ctrltype )
  {
    unused_written_slot = (unsigned int *)&g_144CBF9D0;
    xor_value = g_144CBF9D0 ^ _security_cookie;
    selection_code = 21;
  }
  else
  {
    unused_written_slot = (unsigned int *)&g_144CBF9C8;
    xor_value = g_144CBF9C8 ^ _security_cookie;
    selection_code = 2;
  }
  callback_function = (void (           *)(_QWORD))__ROR8__(xor_value, _security_cookie & 0x3F);
  if ( (unsigned __int64)callback_function >= 2 )
    *(_QWORD *)unused_written_slot = _security_cookie;
  crt_unlock(3);
  if ( !callback_function )
    return 0;
  if ( callback_function != (void (           *)(_QWORD))1 )
    callback_function(selection_code);
  return 1;
}

//----- (000000014025BB10) ----------------------------------------------------
unsigned int *           get_global_action_nolock(int a1)
{
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  int integer_difference_4;

  integer_difference = a1 - 2;
  if ( !integer_difference )
    return (unsigned int *)&g_144CBF9C8;
  integer_difference_2 = integer_difference - 4;
  if ( integer_difference_2 )
  {
    integer_difference_3 = integer_difference_2 - 9;
    if ( !integer_difference_3 )
      return (unsigned int *)&g_144CBF9E0;
    integer_difference_4 = integer_difference_3 - 6;
    if ( !integer_difference_4 )
      return (unsigned int *)&g_144CBF9D0;
    if ( integer_difference_4 != 1 )
      return nullptr;
  }
  return (unsigned int *)&g_144CBF9D8;
}

//----- (000000014025BB4C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char *           unknown_libname_896(char *a1, unsigned __int64 a2)
{
  char *result;

  result = a1 + 8;
  if ( a1 < a1 + 8 )
  {
    memset64(a1, a2, a1 < a1 + 8);
    return (char *)a2;
  }
  return result;
}

//----- (000000014025BBC0) ----------------------------------------------------
__int64            signal_failed(unsigned int a1)
{
  int bit_mask;

  if ( a1 > 0x11 || (bit_mask = 204810, !_bittest(&bit_mask, a1)) )
    *errno_sr() = 22;
  return -1;
}

//----- (000000014025BBEC) ----------------------------------------------------
__int64 sub_14025BBEC()
{
  __int64 callee_output_word;
  unsigned int selection_code;
  unsigned int selection_code_2;

  selection_code = 3;
  selection_code_2 = 3;
  return sub_14025B99C((__int64)&callee_output_word, &selection_code_2, (__int64)&callee_output_word, &selection_code);
}

//----- (000000014025BC1C) ----------------------------------------------------
void            sub_14025BC1C(__int64 a1)
{
  g_144CBF9C8 = a1;
  g_144CBF9D0 = a1;
  g_144CBF9D8 = a1;
  g_144CBF9E0 = a1;
}

//----- (000000014025BC3C) ----------------------------------------------------
__int64 sub_14025BC3C()
{
  return sub_140255A70() + 16;
}

//----- (000000014025BC50) ----------------------------------------------------
__int64 sub_14025BC50()
{
  return sub_140255A70() + 8;
}

//----- (000000014025BC64) ----------------------------------------------------
__int64            sub_14025BC64(unsigned int a1)
{
  _QWORD *record_pointer;
  char selection_flag;
  unsigned int integer_difference;
  unsigned int integer_difference_2;
  unsigned int integer_difference_3;
  unsigned int integer_difference_4;
  unsigned int *cached_security_cookie;
  _QWORD *returned_pointer;
  __int64 record_byte_offset;
  __int64 integer_sum;
  __int64 ror8_result;
  int bit_mask;
  __int64 record_byte_offset_2;
  __int64 scaled_index;
  int loaded_word;
  __int64 table_value;

  record_pointer = nullptr;
  loaded_word = 0;
  selection_flag = 1;
  if ( a1 != 2 )
  {
    switch ( a1 )
    {
      case 4u:
        goto LABEL_14;
      case 6u:
        goto LABEL_8;
      case 8u:
      case 0xBu:
LABEL_14:
        returned_pointer = (_QWORD *)sub_140255BEC();
        record_pointer = returned_pointer;
        if ( !returned_pointer )
          return 0xFFFFFFFFLL;
        record_byte_offset = *returned_pointer;
        integer_sum = record_byte_offset + 192;
        while ( record_byte_offset != integer_sum )
        {
          if ( *(_DWORD *)(record_byte_offset + 4) == a1 )
            goto LABEL_21;
          record_byte_offset += 16;
        }
        record_byte_offset = 0;
LABEL_21:
        if ( record_byte_offset )
        {
          cached_security_cookie = (unsigned int *)(record_byte_offset + 8);
          selection_flag = 0;
          goto LABEL_28;
        }
        break;
      default:
        if ( a1 == 15 || a1 - 21 <= 1 )
          goto LABEL_8;
        break;
    }
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
LABEL_8:
  integer_difference = a1 - 2;
  if ( integer_difference )
  {
    integer_difference_2 = integer_difference - 4;
    if ( !integer_difference_2 )
    {
LABEL_24:
      cached_security_cookie = (unsigned int *)&g_144CBF9D8;
      goto LABEL_28;
    }
    integer_difference_3 = integer_difference_2 - 9;
    if ( integer_difference_3 )
    {
      integer_difference_4 = integer_difference_3 - 6;
      if ( integer_difference_4 )
      {
        if ( integer_difference_4 != 1 )
        {
          cached_security_cookie = nullptr;
          goto LABEL_28;
        }
        goto LABEL_24;
      }
      cached_security_cookie = (unsigned int *)&g_144CBF9D0;
    }
    else
    {
      cached_security_cookie = (unsigned int *)&g_144CBF9E0;
    }
  }
  else
  {
    cached_security_cookie = (unsigned int *)&g_144CBF9C8;
  }
LABEL_28:
  table_value = 0;
  if ( selection_flag )
  {
    crt_lock(3);
    ror8_result = __ROR8__(*(_QWORD *)cached_security_cookie ^ _security_cookie, _security_cookie & 0x3F);
  }
  else
  {
    ror8_result = *(_QWORD *)cached_security_cookie;
  }
  if ( ror8_result == 1 )
  {
    bit_mask = 2320;
    goto LABEL_43;
  }
  if ( ror8_result )
  {
    bit_mask = 2320;
    if ( a1 <= 0xB && _bittest(&bit_mask, a1) )
    {
      table_value = record_pointer[1];
      record_pointer[1] = 0;
      if ( a1 != 8 )
      {
LABEL_41:
        *(_QWORD *)cached_security_cookie = _security_cookie;
LABEL_43:
        if ( selection_flag )
          crt_unlock(3);
        if ( ror8_result != 1 )
        {
          if ( a1 == 8 )
          {
            sub_140255A70();
            _guard_dispatch_icall_fptr(8);
          }
          else
          {
            _guard_dispatch_icall_fptr(a1);
          }
          if ( a1 <= 0xB && _bittest(&bit_mask, a1) )
          {
            record_pointer[1] = table_value;
            if ( a1 == 8 )
              *(_DWORD *)(sub_140255A70() + 16) = loaded_word;
          }
        }
        return 0;
      }
      loaded_word = *(_DWORD *)(sub_140255A70() + 16);
      *(_DWORD *)(sub_140255A70() + 16) = 140;
    }
    if ( a1 == 8 )
    {
      record_byte_offset_2 = *record_pointer + 48LL;
      scaled_index = *record_pointer + 192LL;
      while ( record_byte_offset_2 != scaled_index )
      {
        *(_QWORD *)(record_byte_offset_2 + 8) = 0;
        record_byte_offset_2 += 16;
      }
      goto LABEL_43;
    }
    goto LABEL_41;
  }
  if ( selection_flag )
    crt_unlock(3);
  COleServerDoc__NotifyClosed((COleServerDoc *)3);
  __debugbreak();
  __builtin_unreachable();
}

//----- (000000014025BED0) ----------------------------------------------------
__int64            signal(unsigned int a1, __int64 a2)
{
  int bit_mask;
  char selection_flag;
  __int64 unused_written_slot;
  _DWORD *unused_written_slot_2;
  unsigned int *global_action_nolock;
  int bit_mask_2;
  __m128i **returned_pointer;
  __m128i **saved_malloc_base_result;
  __m128i *loaded_word;
  __m128i *buffer_cursor;
  __m128i *malloc_base_result;
  __m128i *packed_vector;
  __int64 *state_address;
  __int64 unused_written_slot_3;
  int bit_mask_3;

  if ( (unsigned __int64)(a2 - 3) <= 1 )
    goto LABEL_32;
  if ( a1 <= 0x16 )
  {
    bit_mask = 6324292;
    if ( _bittest(&bit_mask, a1) )
    {
      selection_flag = 0;
      unused_written_slot = 0;
      crt_lock(3);
      if ( (a1 == 2 || a1 == 21) && !LOBYTE(g_144CBF9C4) )
      {
        if ( (unsigned int)((__int64 (           *)(__int64 (           *)(__m256 *), __int64))SetConsoleCtrlHandler)(
                             HandlerRoutine,
                             1) )
        {
          LOBYTE(g_144CBF9C4) = 1;
        }
        else
        {
          unused_written_slot_2 = crt_doserrno();
          *unused_written_slot_2 = ((__int64 (*)(void))GetLastError)();
          selection_flag = 1;
        }
      }
      global_action_nolock = get_global_action_nolock(a1);
      if ( global_action_nolock )
      {
        unused_written_slot = __ROR8__(*(_QWORD *)global_action_nolock ^ _security_cookie, _security_cookie & 0x3F);
        if ( a2 != 2 )
          *(_QWORD *)global_action_nolock = _security_cookie ^ __ROR8__(a2, 64 - (_security_cookie & 0x3Fu));
      }
      crt_unlock(3);
      if ( !selection_flag )
        return unused_written_slot;
      goto LABEL_32;
    }
  }
  if ( a1 > 0xB )
    goto LABEL_32;
  bit_mask_2 = 2320;
  if ( !_bittest(&bit_mask_2, a1) )
    goto LABEL_32;
  returned_pointer = (__m128i **)sub_140255BEC();
  saved_malloc_base_result = returned_pointer;
  if ( !returned_pointer )
    goto LABEL_32;
  loaded_word = *returned_pointer;
  buffer_cursor = loaded_word;
  if ( loaded_word == xmmword_140289E60 )
  {
    malloc_base_result = (__m128i *)malloc_base();
    *saved_malloc_base_result = malloc_base_result;
    if ( malloc_base_result )
    {
      crt_memcpy(malloc_base_result, xmmword_140289E60, 0xC0u);
      loaded_word = *saved_malloc_base_result;
      buffer_cursor = *saved_malloc_base_result;
      goto LABEL_21;
    }
LABEL_32:
    if ( a1 > 0x11 || (bit_mask_3 = 204810, !_bittest(&bit_mask_3, a1)) )
      *errno_sr() = 22;
    return -1;
  }
LABEL_21:
  packed_vector = buffer_cursor + 12;
  while ( buffer_cursor != packed_vector )
  {
    if ( SR_VEC_PTR_LANES(128, buffer_cursor, i32)[1] == a1 )
      goto LABEL_26;
    ++buffer_cursor;
  }
  buffer_cursor = nullptr;
LABEL_26:
  if ( !buffer_cursor )
    goto LABEL_32;
  state_address = &SR_VEC_PTR_LANES(128, buffer_cursor, i64)[1];
  unused_written_slot_3 = SR_VEC_PTR_LANES(128, buffer_cursor, i64)[1];
  if ( a2 != 2 && buffer_cursor != &loaded_word[12] )
  {
    do
    {
      if ( *((_DWORD *)state_address - 1) != a1 )
        break;
      *state_address = a2;
      state_address += 2;
    }
    while ( state_address - 1 != (__int64 *)&loaded_word[12] );
  }
  return unused_written_slot_3;
}

// 14025BED0: invalid function type '_crt_signal_t __cdecl signal(int Signal, _crt_signal_t Function)' has been ignored
// 14026E088: invalid function type 'BOOL (__stdcall *SetConsoleCtrlHandler)(PHANDLER_ROUTINE HandlerRoutine, BOOL Add)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014025C0AC) ----------------------------------------------------
double            call_matherr(int a1, __int64 a2, __int64 a3, double a4, __int64 a5, double a6, __int64 a7)
{
  int input_value;
  __int64 unused_written_slot;
  double unused_written_slot_2;
  __int64 unused_written_slot_3;
  double unused_written_slot_4;

  input_value = a1;
  unused_written_slot_3 = a5;
  unused_written_slot_4 = a6;
  unused_written_slot_2 = a4;
  unused_written_slot = a3;
  ctrlfp(a7, 65472);
  if ( !(unsigned int)sub_1402477E8((__int64)&input_value) )
    set_errno_from_matherr(a1);
  return unused_written_slot_4;
}

//----- (000000014025C114) ----------------------------------------------------
_BOOL8            exception_enabled(char a1, __int16 a2)
{
  int option_flags;

  option_flags = a1 & 0x1F;
  if ( (a1 & 8) != 0 && (a2 & 0x80u) != 0 )
  {
    set_statfp(1);
    option_flags &= ~8u;
  }
  else if ( (a1 & 4) != 0 && (a2 & 0x200) != 0 )
  {
    set_statfp(4);
    option_flags &= ~4u;
  }
  else if ( (a1 & 1) != 0 && (a2 & 0x400) != 0 )
  {
    set_statfp(8);
    option_flags &= ~1u;
  }
  else if ( (a1 & 2) != 0 && (a2 & 0x800) != 0 )
  {
    if ( (a1 & 0x10) != 0 )
      set_statfp(16);
    option_flags &= ~2u;
  }
  if ( (a1 & 0x10) != 0 && (a2 & 0x1000) != 0 )
  {
    set_statfp(32);
    option_flags &= ~0x10u;
  }
  return option_flags == 0;
}

//----- (000000014025C1D0) ----------------------------------------------------
double            handle_error(
        __int64 a1,
        __int16 a2,
        __int64 a3,
        int a4,
        char a5,
        unsigned int a6,
        double a7,
        __int64 a8,
        int a9)
{
  BOOL exception_enabled_result;
  __int64 input_value;
  __int64 unused_local;
  __int64 ctrlfp_result;
  double callee_output_word[2];
  _DWORD scratch_buffer[12];
  __int64 unused_written_slot;
  unsigned int masked_bits;
  __int64 unused_local_2;

  ctrlfp_result = ctrlfp(8064, 65472);
  *(_QWORD *)&callee_output_word[1] = a3;
  *(_QWORD *)&callee_output_word[0] = a3;
  exception_enabled_result = exception_enabled(a5, ctrlfp_result);
  input_value = a8;
  if ( !exception_enabled_result )
  {
    if ( a9 == 2 )
    {
      unused_written_slot = a8;
      masked_bits = masked_bits & 0xFFFFFFE0 | 3;
    }
    raise_exc(scratch_buffer, &ctrlfp_result, a5, a2, &a7, callee_output_word);
  }
  if ( sub_1402477C0() && a4 )
  {
    return call_matherr(a4, a6, a1, a7, input_value, callee_output_word[0], ctrlfp_result); /* 0x14025C2B2: its result stays in xmm0 */
  }
  else
  {
    set_errno_from_matherr(a4);
    ctrlfp(ctrlfp_result, 65472);
  }
  return callee_output_word[0]; /* 0x14025C2CF: movsd xmm0, qword ptr [rsp + 0x48] */
}

//----- (000000014025C2F8) ----------------------------------------------------
float            handle_errorf(
        __int64 a1,
        __int16 a2,
        int a3,
        int a4,
        char a5,
        unsigned int a6,
        float a7,
        float a8,
        int a9)
{
  BOOL exception_enabled_result;
  float input_value;
  __int64 unused_local;
  __int64 float_word;
  __int64 ctrlfp_result;
  int unused_written_slot;
  _DWORD float_word_2[16];
  unsigned int masked_bits;
  __int64 unused_local_2;

  ctrlfp_result = ctrlfp(8064, 65472);
  unused_written_slot = a3;
  LODWORD(float_word) = a3;
  exception_enabled_result = exception_enabled(a5, ctrlfp_result);
  input_value = a8;
  if ( !exception_enabled_result )
  {
    if ( a9 == 2 )
    {
      *(float *)&float_word_2[12] = a8;
      masked_bits = masked_bits & 0xFFFFFFE0 | 1;
    }
    raise_excf(float_word_2, &ctrlfp_result, a5, a2, &a7, &float_word);
  }
  if ( sub_1402477C0() && a4 )
  {
    return (float)call_matherr(a4, a6, a1, a7, COERCE__INT64((double)input_value), *(float *)&float_word, ctrlfp_result); /* 0x14025C3E7: cvtsd2ss xmm0, xmm0 */
  }
  else
  {
    set_errno_from_matherr(a4);
    ctrlfp(ctrlfp_result, 65472);
  }
  return *(float *)&float_word; /* 0x14025C403: movss xmm0, dword ptr [rsp + 0x40] */
}

//----- (000000014025C42C) ----------------------------------------------------
double            handle_nan_sr(__int64 a1)
{
  double result;

  *(_QWORD *)&result = a1 | 0x8000000000000LL;
  return result;
}

//----- (000000014025C448) ----------------------------------------------------
float            handle_nanf_sr(int a1)
{
  float result;

  LODWORD(result) = a1 | 0x400000;
  return result;
}

//----- (000000014025C460)
__int64 sub_14025C460(void) {
 return sr_client_initialize_math_cpu(&g_144CBF9E8, &g_144CBF9EC);
}
 /* recovered in client_native_gaps.s */
// 14025D1F0: inconsistent variable size for 'xmm1_8.8'

//----- (000000014025D288) ----------------------------------------------------
__m128            logf_special(float a1, double a2, int a3)
{
  return logf_special_common(a1, a2, a3, 26, (__int64)"logf");
}

//----- (000000014025D2A8) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__m128            logf_special_common(float a1, double a2, int a3, __int16 a4, __int64 a5)
{
  int integer_difference;
  int selection_code;
  char selection_code_2;
  unsigned int selection_code_3;
  float argument;

  integer_difference = a3 - 1;
  if ( !integer_difference )
  {
    selection_code = 2;
    argument = a1;
    selection_code_3 = 34;
    selection_code_2 = 4;
    goto LABEL_5;
  }
  if ( integer_difference == 1 )
  {
    selection_code = 1;
    argument = a1;
    selection_code_3 = 33;
    selection_code_2 = 8;
LABEL_5:
    handle_errorf(a5, a4, SLODWORD(a2), selection_code, selection_code_2, selection_code_3, argument, 0.0, 1);
  }
  return *(__m128_u *)&a2;
}

// 14025D2A8: inconsistent variable size for 'xmm1_8.8'

//----- (000000014025D350) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_897(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( a1 >= a2 )
    return a1 > a2;
  else
    return 0xFFFFFFFFLL;
}

//----- (000000014025D364) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_898(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( a1 >= a2 )
    return a1 > a2;
  else
    return 0xFFFFFFFFLL;
}

//----- (000000014025D378) ----------------------------------------------------
__int64            __acrt_convert_wcs_mbs_cp__char__wchar_t___lambda_7c9dea7b4ca7285d2cdb541a38da6275_____crt_win32_buffer_internal_dynamic_resizing_dup2(
        _BYTE *a1,
        __int64 a2)
{
  __int64 malloc_base_result;
  __int64 result;
  int multi_byte_to_wide_char_result;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  __int64 saved_multi_byte_to_wide_char_result;
  int int64_result;
  __int64 malloc_base_result_2;
  __int64 cached_multi_byte_to_wide_char_result;
  int multi_byte_to_wide_char_result_2;

  if ( !a1 )
  {
    if ( *(_BYTE *)(a2 + 40) )
    {
      free_base(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    goto LABEL_5;
  }
  if ( *a1 )
  {
    multi_byte_to_wide_char_result = crt_multi_byte_to_wide_char();
    saved_multi_byte_to_wide_char_result = multi_byte_to_wide_char_result;
    if ( multi_byte_to_wide_char_result )
    {
      if ( (unsigned __int64)multi_byte_to_wide_char_result > *(_QWORD *)(a2 + 24) )
      {
        if ( *(_BYTE *)(a2 + 40) )
        {
          free_base(*(void **)(a2 + 16));
          *(_BYTE *)(a2 + 40) = 0;
        }
        malloc_base_result_2 = malloc_base();
        *(_QWORD *)(a2 + 16) = malloc_base_result_2;
        cached_multi_byte_to_wide_char_result = 0;
        result = malloc_base_result_2 == 0 ? 0xC : 0;
        if ( !(_DWORD)result )
          cached_multi_byte_to_wide_char_result = saved_multi_byte_to_wide_char_result;
        *(_BYTE *)(a2 + 40) = (_DWORD)result == 0;
        *(_QWORD *)(a2 + 24) = cached_multi_byte_to_wide_char_result;
        if ( (_DWORD)result )
          return result;
      }
      multi_byte_to_wide_char_result_2 = crt_multi_byte_to_wide_char();
      if ( multi_byte_to_wide_char_result_2 )
      {
        *(_QWORD *)(a2 + 32) = multi_byte_to_wide_char_result_2 - 1LL;
        return 0;
      }
    }
    int64_result = ((__int64 (           *)(__int64, __int64))GetLastError)(unrecovered_register_value_2, unrecovered_register_value);
    crt_errno_map_os_error(int64_result);
    return (unsigned int)*errno_sr();
  }
  if ( *(_QWORD *)(a2 + 24) )
    goto LABEL_11;
  if ( *(_BYTE *)(a2 + 40) )
  {
    free_base(*(void **)(a2 + 16));
    *(_BYTE *)(a2 + 40) = 0;
  }
  malloc_base_result = malloc_base();
  *(_QWORD *)(a2 + 16) = malloc_base_result;
  result = malloc_base_result == 0 ? 0xC : 0;
  *(_BYTE *)(a2 + 40) = (_DWORD)result == 0;
  *(_QWORD *)(a2 + 24) = (_DWORD)result == 0;
  if ( !(_DWORD)result )
  {
LABEL_11:
    **(_WORD **)(a2 + 16) = 0;
LABEL_5:
    *(_QWORD *)(a2 + 32) = 0;
    return 0;
  }
  return result;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014025D4F4) ----------------------------------------------------
__int64            __acrt_convert_wcs_mbs_cp__wchar_t__char___lambda_d8593a27d1aa8c02be35c86a17d324c4_____crt_win32_buffer_internal_dynamic_resizing_dup3(
        _WORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 malloc_base_result;
  __int64 result;
  int wide_char_to_multi_byte_result;
  unsigned __int64 saved_wide_char_to_multi_byte_result;
  int int64_result;
  unsigned __int64 loaded_word;
  __int64 malloc_base_result_2;
  int wide_char_to_multi_byte_result_2;
  __int64 packed_word_bits;
  __int64 packed_word_bits_2;

  if ( !a1 )
  {
    if ( *(_BYTE *)(a2 + 40) )
    {
      free_base(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    goto LABEL_5;
  }
  if ( *a1 )
  {
    LODWORD(packed_word_bits) = 0;
    wide_char_to_multi_byte_result = crt_wide_char_to_multi_byte(a4, 0, (__int64)a1, 0xFFFFFFFFLL, 0, packed_word_bits, 0, 0);
    saved_wide_char_to_multi_byte_result = wide_char_to_multi_byte_result;
    if ( wide_char_to_multi_byte_result )
    {
      loaded_word = *(_QWORD *)(a2 + 24);
      if ( wide_char_to_multi_byte_result > loaded_word )
      {
        if ( *(_BYTE *)(a2 + 40) )
        {
          free_base(*(void **)(a2 + 16));
          *(_BYTE *)(a2 + 40) = 0;
        }
        malloc_base_result_2 = malloc_base();
        *(_QWORD *)(a2 + 16) = malloc_base_result_2;
        loaded_word = 0;
        result = malloc_base_result_2 == 0 ? 0xC : 0;
        if ( !(_DWORD)result )
          loaded_word = saved_wide_char_to_multi_byte_result;
        *(_BYTE *)(a2 + 40) = (_DWORD)result == 0;
        *(_QWORD *)(a2 + 24) = loaded_word;
        if ( (_DWORD)result )
          return result;
      }
      LODWORD(packed_word_bits_2) = loaded_word;
      wide_char_to_multi_byte_result_2 = crt_wide_char_to_multi_byte(a4, 0, (__int64)a1, 0xFFFFFFFFLL, *(_QWORD *)(a2 + 16), packed_word_bits_2, 0, 0);
      if ( wide_char_to_multi_byte_result_2 )
      {
        *(_QWORD *)(a2 + 32) = wide_char_to_multi_byte_result_2 - 1LL;
        return 0;
      }
    }
    int64_result = ((__int64 (*)(void))GetLastError)();
    crt_errno_map_os_error(int64_result);
    return (unsigned int)*errno_sr();
  }
  if ( *(_QWORD *)(a2 + 24) )
    goto LABEL_11;
  if ( *(_BYTE *)(a2 + 40) )
  {
    free_base(*(void **)(a2 + 16));
    *(_BYTE *)(a2 + 40) = 0;
  }
  malloc_base_result = malloc_base();
  *(_QWORD *)(a2 + 16) = malloc_base_result;
  result = malloc_base_result == 0 ? 0xC : 0;
  *(_BYTE *)(a2 + 40) = (_DWORD)result == 0;
  *(_QWORD *)(a2 + 24) = (_DWORD)result == 0;
  if ( !(_DWORD)result )
  {
LABEL_11:
    **(_BYTE **)(a2 + 16) = 0;
LABEL_5:
    *(_QWORD *)(a2 + 32) = 0;
    return 0;
  }
  return result;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014025D680) ----------------------------------------------------
__int64            common_expand_argv_wildcards__char(     char **a1, __int64 *a2)
{
  __int64 iteration_count;
  unsigned __int8 **buffer_cursor;
       char *input_byte;
  unsigned __int8 *strpbrk_sr_result;
  unsigned __int8 *loaded_word;
  unsigned int call_result;
  unsigned int unused_written_slot;
  __int64 *table_value;
  __int64 *table_value_2;
  unsigned __int64 running_total;
  _QWORD *buffer_cursor_2;
  __int64 iteration_count_2;
  signed __int64 shifted_bits;
  unsigned __int64 shifted_bits_2;
  __int64 iteration_count_3;
  __int64 shifted_bits_3;
  __int64 saved_shifted_bits;
  _BYTE *byte_cursor;
  __int64 *buffer_cursor_3;
  _BYTE *state_address;
  __int64 loaded_word_2;
  __int64 iteration_count_4;
  __int64 integer_sum;
  _BYTE *cached_i;
  void **buffer_cursor_4;
  unsigned __int64 shifted_bits_4;
  _BYTE *byte_cursor_2;
  void *Block[2];
  __int64 unused_written_slot_2;
  unsigned __int64 Control;
  _BYTE *i;

  iteration_count = 0;
  buffer_cursor = (unsigned __int8 **)a1;
  if ( a2 )
  {
    *a2 = 0;
    input_byte = *a1;
    *(_OWORD *)Block = 0;
    unused_written_slot_2 = 0;
    while ( input_byte )
    {
      strcpy((char *)&Control, "*?");
      strpbrk_sr_result = (unsigned __int8 *)strpbrk_sr(input_byte, (     char *)&Control);
      loaded_word = *buffer_cursor;
      if ( strpbrk_sr_result )
        call_result = sub_14025DF6C(loaded_word, strpbrk_sr_result, (__int64 *)Block);
      else
        call_result = sub_14025DC58((__int64)loaded_word, 0, 0, (__int64 *)Block);
      unused_written_slot = call_result;
      if ( call_result )
      {
        table_value = (__int64 *)Block[1];
        table_value_2 = (__int64 *)Block[0];
        goto LABEL_26;
      }
      input_byte = (     char *)*++buffer_cursor;
    }
    table_value_2 = (__int64 *)Block[0];
    running_total = 0;
    table_value = (__int64 *)Block[1];
    buffer_cursor_2 = Block[0];
    Control = 0;
    iteration_count_2 = 0;
    shifted_bits = (((char *)Block[1] - (char *)Block[0]) >> 3) + 1;
    shifted_bits_2 = (unsigned __int64)((char *)Block[1] - (char *)Block[0] + 7) >> 3;
    if ( Block[0] > Block[1] )
      shifted_bits_2 = 0;
    unused_written_slot = -1;
    if ( shifted_bits_2 )
    {
      do
      {
        iteration_count_3 = -1;
        do
          ++iteration_count_3;
        while ( *(_BYTE *)(*buffer_cursor_2 + iteration_count_3) );
        ++buffer_cursor_2;
        running_total += iteration_count_3 + 1;
        ++iteration_count_2;
      }
      while ( iteration_count_2 != shifted_bits_2 );
      Control = running_total;
    }
    shifted_bits_3 = sub_140245E48((((char *)Block[1] - (char *)Block[0]) >> 3) + 1, running_total, 1u);
    saved_shifted_bits = shifted_bits_3;
    if ( shifted_bits_3 )
    {
      byte_cursor = (_BYTE *)(shifted_bits_3 + 8 * shifted_bits);
      buffer_cursor_3 = table_value_2;
      byte_cursor_2 = byte_cursor;
      state_address = byte_cursor;
      for ( i = byte_cursor; buffer_cursor_3 != table_value; i = state_address )
      {
        loaded_word_2 = *buffer_cursor_3;
        iteration_count_4 = -1;
        do
          ++iteration_count_4;
        while ( *(_BYTE *)(loaded_word_2 + iteration_count_4) );
        integer_sum = iteration_count_4 + 1;
        if ( (unsigned int)strncpy_s_sr(state_address, Control + byte_cursor - state_address, loaded_word_2, integer_sum) )
        {
          crt_invoke_watson();
          do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
        }
        cached_i = i;
        byte_cursor = byte_cursor_2;
        *(__int64 *)((char *)buffer_cursor_3 + saved_shifted_bits - (_QWORD)table_value_2) = (__int64)i;
        state_address = &cached_i[integer_sum];
        ++buffer_cursor_3;
      }
      unused_written_slot = 0;
      *a2 = saved_shifted_bits;
    }
    free_base(nullptr);
LABEL_26:
    buffer_cursor_4 = (void **)table_value_2;
    shifted_bits_4 = (unsigned __int64)((char *)table_value - (char *)table_value_2 + 7) >> 3;
    if ( table_value_2 > table_value )
      shifted_bits_4 = 0;
    if ( shifted_bits_4 )
    {
      do
      {
        free_base(*buffer_cursor_4);
        ++iteration_count;
        ++buffer_cursor_4;
      }
      while ( iteration_count != shifted_bits_4 );
    }
    free_base(table_value_2);
    return unused_written_slot;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 22;
  }
}

// 14025D883: control flows out of bounds to 14025D888

//----- (000000014025D88C) ----------------------------------------------------
__int64            common_expand_argv_wildcards__wchar_t(     sr_anon_49 **a1, __int64 *a2)
{
  __int64 iteration_count;
  __int64 *buffer_cursor;
       sr_anon_49 *loaded_word;
  __int64 *table_value;
  __int64 *table_value_2;
  __int64 selection_code;
  sr_anon_49 *wcspbrk_sr_result;
  __int64 loaded_word_2;
  sr_anon_49 *saved_wcspbrk_sr_result;
  int call_result;
  bool comparison_result;
  unsigned __int16 loaded_word_3;
  int masked_bits;
  unsigned __int16 loaded_word_4;
  char selection_flag;
  __int64 comparison_result_2;
  __int64 int64_result;
  signed __int64 shifted_bits;
  unsigned __int64 running_total;
  __int64 *buffer_cursor_2;
  __int64 iteration_count_2;
  unsigned __int64 shifted_bits_2;
  __int64 iteration_count_3;
  __int64 call_result_2;
  __int64 cached_call_result;
  _WORD *record_pointer;
  __int64 *buffer_cursor_3;
  _WORD *running_total_2;
  __int64 loaded_word_5;
  __int64 iteration_count_4;
  __int64 integer_sum;
  void **buffer_cursor_4;
  unsigned __int64 shifted_bits_3;
  _QWORD scratch_buffer[5];
  void *Block[2];
  __int64 unused_written_slot;
  __int64 saved_comparison_result;
  __int64 integer_difference;
  __int64 *unused_written_slot_2;
  _BYTE FindFileData[44];
  __int16 callee_output_word;
  __int16 unrecovered_register_value;
  __int16 unrecovered_register_value_2;
  _QWORD Control[8];

  int sr_ret = 0; /* r15d */
  iteration_count = 0;
  unused_written_slot_2 = a2;
  buffer_cursor = (__int64 *)a1;
  if ( a2 )
  {
    *a2 = 0;
    loaded_word = *a1;
    *(_OWORD *)Block = 0;
    table_value = nullptr;
    table_value_2 = nullptr;
    unused_written_slot = 0;
    while ( loaded_word )
    {
      LODWORD(Control[0]) = 4128810;
      WORD2(Control[0]) = 0;
      selection_code = 0x200000000801LL;
      wcspbrk_sr_result = wcspbrk_sr(loaded_word, (     sr_anon_49 *)Control);
      loaded_word_2 = *buffer_cursor;
      saved_wcspbrk_sr_result = wcspbrk_sr_result;
      if ( wcspbrk_sr_result )
      {
        if ( wcspbrk_sr_result != (sr_anon_49 *)loaded_word_2 )
        {
          do
          {
            loaded_word_3 = *(_WORD *)saved_wcspbrk_sr_result - 47;
            if ( loaded_word_3 <= 0x2Du && _bittest64(&selection_code, loaded_word_3) )
              break;
            saved_wcspbrk_sr_result = (sr_anon_49 *)((char *)saved_wcspbrk_sr_result - 2);
          }
          while ( saved_wcspbrk_sr_result != (sr_anon_49 *)loaded_word_2 );
        }
        if ( *(_WORD *)saved_wcspbrk_sr_result == 58 && saved_wcspbrk_sr_result != (sr_anon_49 *)(loaded_word_2 + 2) )
          goto LABEL_13;
        loaded_word_4 = *(_WORD *)saved_wcspbrk_sr_result - 47;
        if ( loaded_word_4 > 0x2Du || (selection_flag = 1, !_bittest64(&selection_code, loaded_word_4)) )
          selection_flag = 0;
        comparison_result_2 = ((((__int64)saved_wcspbrk_sr_result - loaded_word_2) >> 1) + 1) & -(__int64)(selection_flag != 0);
        saved_comparison_result = comparison_result_2;
        int64_result = ((__int64 (           *)(__int64, _QWORD, _BYTE *, _QWORD, _QWORD, _DWORD))FindFirstFileExW)(
                loaded_word_2,
                0,
                FindFileData,
                0,
                0,
                0);
        if ( int64_result == -1 )
        {
LABEL_13:
          masked_bits = sub_14025DDE0(loaded_word_2, 0, 0, (__int64 *)Block);
LABEL_30:
          table_value = (__int64 *)Block[1];
          table_value_2 = (__int64 *)Block[0];
        }
        else
        {
          integer_difference = table_value - table_value_2;
          do
          {
            if ( callee_output_word != 46 || unrecovered_register_value && (unrecovered_register_value != 46 || unrecovered_register_value_2) )
            {
              masked_bits = sub_14025DDE0((__int64)&callee_output_word, loaded_word_2, comparison_result_2, (__int64 *)Block);
              if ( masked_bits )
              {
                ((void (           *)(__int64))FindClose)(int64_result);
                goto LABEL_30;
              }
              comparison_result_2 = saved_comparison_result;
            }
          }
          while ( (unsigned int)((__int64 (           *)(__int64, _BYTE *))FindNextFileW)(int64_result, FindFileData) );
          table_value = (__int64 *)Block[1];
          table_value_2 = (__int64 *)Block[0];
          shifted_bits = ((char *)Block[1] - (char *)Block[0]) >> 3;
          if ( integer_difference == shifted_bits )
          {
            ((void (           *)(__int64))FindClose)(int64_result);
            goto LABEL_33;
          }
          sub_14023AE00(
            (unsigned __int64)Block[0] + 8 * integer_difference,
            shifted_bits - integer_difference,
            8u,
            (int (           *)(unsigned __int64, _BYTE *))unknown_libname_897);
          ((void (           *)(__int64))FindClose)(int64_result);
          masked_bits = 0;
        }
        sr_ret = (int)masked_bits; /* r15d */
        comparison_result = masked_bits == 0;
      }
      else
      {
        call_result = sub_14025DDE0(*buffer_cursor, 0, 0, (__int64 *)Block);
        table_value = (__int64 *)Block[1];
        table_value_2 = (__int64 *)Block[0];
        sr_ret = (int)call_result; /* 0x14025D955: mov r15d, eax */
        comparison_result = call_result == 0;
      }
      if ( !comparison_result )
        goto LABEL_50;
LABEL_33:
      loaded_word = (     sr_anon_49 *)*++buffer_cursor;
    }
    Control[0] = 0;
    running_total = 0;
    buffer_cursor_2 = table_value_2;
    iteration_count_2 = 0;
    shifted_bits_2 = (unsigned __int64)((char *)table_value - (char *)table_value_2 + 7) >> 3;
    if ( table_value_2 > table_value )
      shifted_bits_2 = 0;
    if ( shifted_bits_2 )
    {
      do
      {
        iteration_count_3 = -1;
        do
          ++iteration_count_3;
        while ( *(_WORD *)(*buffer_cursor_2 + 2 * iteration_count_3) );
        ++buffer_cursor_2;
        running_total += iteration_count_3 + 1;
        ++iteration_count_2;
      }
      while ( iteration_count_2 != shifted_bits_2 );
      Control[0] = running_total;
    }
    call_result_2 = sub_140245E48(table_value - table_value_2 + 1, running_total, 2u);
    cached_call_result = call_result_2;
    if ( call_result_2 )
    {
      record_pointer = (_WORD *)(call_result_2 + 8 * (table_value - table_value_2 + 1));
      buffer_cursor_3 = table_value_2;
      saved_comparison_result = (__int64)record_pointer;
      running_total_2 = record_pointer;
      if ( table_value_2 != table_value )
      {
        integer_difference = call_result_2 - (_QWORD)table_value_2;
        do
        {
          loaded_word_5 = *buffer_cursor_3;
          iteration_count_4 = -1;
          do
            ++iteration_count_4;
          while ( *(_WORD *)(loaded_word_5 + 2 * iteration_count_4) );
          integer_sum = iteration_count_4 + 1;
          if ( (unsigned int)sub_140260D80(running_total_2, Control[0] - (running_total_2 - record_pointer), loaded_word_5, integer_sum) )
          {
            scratch_buffer[4] = 0;
            crt_invoke_watson();
            do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
          }
          record_pointer = (_WORD *)saved_comparison_result;
          *(__int64 *)((char *)buffer_cursor_3++ + integer_difference) = (__int64)running_total_2;
          running_total_2 += integer_sum;
        }
        while ( buffer_cursor_3 != table_value );
      }
      *unused_written_slot_2 = cached_call_result;
    }
    else
    {
      sr_ret = -1; /* 0x14025DB4F: or r15d, 0xffffffff */
    }
    free_base(nullptr);
LABEL_50:
    buffer_cursor_4 = (void **)table_value_2;
    shifted_bits_3 = (unsigned __int64)((char *)table_value - (char *)table_value_2 + 7) >> 3;
    if ( table_value_2 > table_value )
      shifted_bits_3 = 0;
    if ( shifted_bits_3 )
    {
      do
      {
        free_base(*buffer_cursor_4);
        ++iteration_count;
        ++buffer_cursor_4;
      }
      while ( iteration_count != shifted_bits_3 );
    }
    free_base(table_value_2);
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 22; /* 0x14025D8DA: mov eax, ebx */
  }
  return (unsigned int)sr_ret; /* 0x14025DC14: mov eax, r15d */
}

// 14025DC50: control flows out of bounds to 14025DC55
// 14026E1D8: invalid function type 'HANDLE (__stdcall *FindFirstFileExW)(LPCWSTR lpFileName, FINDEX_INFO_LEVELS fInfoLevelId, LPVOID lpFindFileData, FINDEX_SEARCH_OPS fSearchOp, LPVOID lpSearchFilter, DWORD dwAdditionalFlags)' has been ignored
// 14026E1D0: invalid function type 'BOOL (__stdcall *FindNextFileW)(HANDLE hFindFile, LPWIN32_FIND_DATAW lpFindFileData)' has been ignored
// 14026E1E0: invalid function type 'BOOL (__stdcall *FindClose)(HANDLE hFindFile)' has been ignored

//----- (000000014025DC58) ----------------------------------------------------
__int64            sub_14025DC58(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 iteration_count;
  unsigned int unused_written_slot;
  unsigned __int64 integer_sum;
  __int64 integer_sum_2;
  _BYTE *calloc_base_result;
  _BYTE *saved_calloc_base_result;
  _QWORD *table_value;
  __int64 table_value_2;
  unsigned __int64 shifted_bits;
  __int64 recalloc_base_result;

  iteration_count = -1;
  unused_written_slot = 0;
  do
    ++iteration_count;
  while ( *(_BYTE *)(a1 + iteration_count) );
  integer_sum = iteration_count + 1;
  if ( integer_sum > ~a3 )
    return 12;
  integer_sum_2 = integer_sum + a3 + 1;
  calloc_base_result = (_BYTE *)calloc_base();
  saved_calloc_base_result = calloc_base_result;
  if ( a3 && (unsigned int)strncpy_s_sr(calloc_base_result, integer_sum_2, a2, a3) || (unsigned int)strncpy_s_sr(&saved_calloc_base_result[a3], integer_sum_2 - a3, a1, integer_sum) )
  {
    crt_invoke_watson();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  table_value = (_QWORD *)a4[1];
  table_value_2 = a4[2];
  if ( table_value != (_QWORD *)table_value_2 )
    goto LABEL_18;
  if ( *a4 )
  {
    shifted_bits = (table_value_2 - *a4) >> 3;
    if ( shifted_bits <= 0x7FFFFFFFFFFFFFFFLL )
    {
      recalloc_base_result = recalloc_base(*a4, 2 * shifted_bits, 8);
      if ( recalloc_base_result )
      {
        *a4 = recalloc_base_result;
        a4[1] = recalloc_base_result + 8 * shifted_bits;
        a4[2] = recalloc_base_result + 16 * shifted_bits;
        free_base(nullptr);
        table_value = (_QWORD *)a4[1];
        goto LABEL_18;
      }
      free_base(nullptr);
    }
  }
  else
  {
    *a4 = calloc_base();
    free_base(nullptr);
    table_value = (_QWORD *)*a4;
    if ( *a4 )
    {
      a4[1] = (__int64)table_value;
      a4[2] = (__int64)(table_value + 4);
LABEL_18:
      *table_value = (uint64)(uintptr_t)(saved_calloc_base_result);
      a4[1] += 8;
      goto LABEL_16;
    }
  }
  free_base(saved_calloc_base_result);
  unused_written_slot = 12;
LABEL_16:
  free_base(nullptr);
  return unused_written_slot;
}

// 14025DDD9: control flows out of bounds to 14025DDDE

//----- (000000014025DDE0) ----------------------------------------------------
__int64            sub_14025DDE0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 iteration_count;
  unsigned int unused_written_slot;
  unsigned __int64 integer_sum;
  __int64 integer_sum_2;
  _WORD *calloc_base_result;
  _WORD *saved_calloc_base_result;
  _QWORD *table_value;
  __int64 table_value_2;
  unsigned __int64 shifted_bits;
  __int64 recalloc_base_result;

  iteration_count = -1;
  unused_written_slot = 0;
  do
    ++iteration_count;
  while ( *(_WORD *)(a1 + 2 * iteration_count) );
  integer_sum = iteration_count + 1;
  if ( integer_sum > ~a3 )
    return 12;
  integer_sum_2 = integer_sum + a3 + 1;
  calloc_base_result = (_WORD *)calloc_base();
  saved_calloc_base_result = calloc_base_result;
  if ( a3 && (unsigned int)sub_140260D80(calloc_base_result, integer_sum_2, a2, a3) || (unsigned int)sub_140260D80(&saved_calloc_base_result[a3], integer_sum_2 - a3, a1, integer_sum) )
  {
    crt_invoke_watson();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  table_value = (_QWORD *)a4[1];
  table_value_2 = a4[2];
  if ( table_value != (_QWORD *)table_value_2 )
    goto LABEL_18;
  if ( *a4 )
  {
    shifted_bits = (table_value_2 - *a4) >> 3;
    if ( shifted_bits <= 0x7FFFFFFFFFFFFFFFLL )
    {
      recalloc_base_result = recalloc_base(*a4, 2 * shifted_bits, 8);
      if ( recalloc_base_result )
      {
        *a4 = recalloc_base_result;
        a4[1] = recalloc_base_result + 8 * shifted_bits;
        a4[2] = recalloc_base_result + 16 * shifted_bits;
        free_base(nullptr);
        table_value = (_QWORD *)a4[1];
        goto LABEL_18;
      }
      free_base(nullptr);
    }
  }
  else
  {
    *a4 = calloc_base();
    free_base(nullptr);
    table_value = (_QWORD *)*a4;
    if ( *a4 )
    {
      a4[1] = (__int64)table_value;
      a4[2] = (__int64)(table_value + 4);
LABEL_18:
      *table_value = (uint64)(uintptr_t)(saved_calloc_base_result);
      a4[1] += 8;
      goto LABEL_16;
    }
  }
  free_base(saved_calloc_base_result);
  unused_written_slot = 12;
LABEL_16:
  free_base(nullptr);
  return unused_written_slot;
}

// 14025DF63: control flows out of bounds to 14025DF68

//----- (000000014025DF6C) ----------------------------------------------------
__int64            sub_14025DF6C(unsigned __int8 *Start, unsigned __int8 *a2, __int64 *a3)
{
  __int64 i;
  unsigned __int8 scaled_index;
  unsigned __int8 scaled_index_2;
  char selection_flag;
  signed __int64 comparison_result;
  int call_result;
  void *record_pointer;
  __int64 int64_result;
  __int64 shifted_bits;
  unsigned int selection_code;
  int named_call_result;
  void *cached_block;
  _BYTE *cached_block_2;
  char table_value;
  __int64 shifted_bits_2;
  __int64 unused_local;
  __int64 lpSearchFilter;
  __int64 dwAdditionalFlags;
  _QWORD scratch_buffer[3];
  char unrecovered_register_value;
  _QWORD scratch_buffer_2[3];
  char unrecovered_register_value_2;
  _QWORD scratch_buffer_3[2];
  void *Block;
  __int64 unused_written_slot;
  __int64 unused_written_slot_2;
  char selection_flag_2;
  _QWORD scratch_buffer_4[2];
  void *record_pointer_2;
  __int64 unused_written_slot_3;
  __int64 unused_written_slot_4;
  char selection_flag_3;
  _BYTE FindFileData[44];
  _WORD scratch_buffer_5[274];
  __int64 unused_local_2;

  int sr_ret = 0; /* edi: 0x14025DFFE xor edi, edi */
  for ( i = 0x200000000801LL; a2 != Start; a2 = mbsdec_sr(Start, a2) )
  {
    scaled_index = *a2 - 47;
    if ( scaled_index <= 0x2Du && _bittest64(&i, (char)scaled_index) )
      break;
  }
  if ( *a2 != 58 || a2 == Start + 1 )
  {
    scaled_index_2 = *a2 - 47;
    if ( scaled_index_2 > 0x2Du || (selection_flag = 1, !_bittest64(&i, (char)scaled_index_2)) )
      selection_flag = 0;
    scratch_buffer_4[0] = 0;
    scratch_buffer_4[1] = 0;
    record_pointer_2 = nullptr;
    unused_written_slot_3 = 0;
    unused_written_slot_4 = 0;
    comparison_result = (a2 - Start + 1) & -(__int64)(selection_flag != 0);
    selection_flag_3 = 0;
    crt_locale_update((_LocaleUpdate *)scratch_buffer, nullptr);
    if ( *(_DWORD *)(scratch_buffer[1] + 12LL) == 65001 )
    {
      if ( unrecovered_register_value )
        *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
    }
    else if ( (unsigned int)sub_14024EDA4() )
    {
      if ( unrecovered_register_value )
        *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
    }
    else if ( unrecovered_register_value )
    {
      *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
    }
    call_result = sub_140238394(Start, (__int64)scratch_buffer_4);
    record_pointer = record_pointer_2;
    LODWORD(dwAdditionalFlags) = 0;
    lpSearchFilter = 0;
    if ( call_result )
      record_pointer = nullptr;
    int64_result = ((__int64 (           *)(void *, _QWORD, _BYTE *, _QWORD, __int64, _DWORD))FindFirstFileExW)(
            record_pointer,
            0,
            FindFileData,
            0,
            lpSearchFilter,
            dwAdditionalFlags);
    if ( int64_result == -1 )
    {
      sr_ret = (int)sub_14025DC58((__int64)Start, 0, 0, a3); /* 0x14025E0F1: mov edi, eax */
    }
    else
    {
      shifted_bits = (a3[1] - *a3) >> 3;
      while ( 1 )
      {
        scratch_buffer_3[0] = 0;
        scratch_buffer_3[1] = 0;
        Block = nullptr;
        unused_written_slot = 0;
        unused_written_slot_2 = 0;
        selection_flag_2 = 0;
        crt_locale_update((_LocaleUpdate *)scratch_buffer_2, nullptr);
        if ( *(_DWORD *)(scratch_buffer_2[1] + 12LL) == 65001 )
        {
          if ( unrecovered_register_value_2 )
            *(_DWORD *)(scratch_buffer_2[0] + 936LL) &= ~2u;
          selection_code = 65001;
        }
        else if ( (unsigned int)sub_14024EDA4() )
        {
          if ( unrecovered_register_value_2 )
            *(_DWORD *)(scratch_buffer_2[0] + 936LL) &= ~2u;
          selection_code = 0;
        }
        else
        {
          if ( unrecovered_register_value_2 )
            *(_DWORD *)(scratch_buffer_2[0] + 936LL) &= ~2u;
          selection_code = 1;
        }
        named_call_result = __acrt_wcs_to_mbs_cp____crt_win32_buffer_internal_dynamic_resizing(scratch_buffer_5, (__int64)scratch_buffer_3, selection_code);
        cached_block = Block;
        cached_block_2 = Block;
        if ( named_call_result )
          cached_block_2 = nullptr;
        if ( *cached_block_2 != 46 || (table_value = cached_block_2[1]) != 0 && (table_value != 46 || cached_block_2[2]) )
        {
          sr_ret = (int)sub_14025DC58((__int64)cached_block_2, (__int64)Start, comparison_result, a3); /* 0x14025E1C7: mov edi, eax */
          if ( sr_ret )
            break;
        }
        if ( selection_flag_2 )
          free_base(cached_block);
        if ( !(unsigned int)((__int64 (           *)(__int64, _BYTE *))FindNextFileW)(int64_result, FindFileData) )
        {
          shifted_bits_2 = (a3[1] - *a3) >> 3;
          if ( shifted_bits != shifted_bits_2 )
            sub_14023AE00(
              *a3 + 8 * shifted_bits,
              shifted_bits_2 - shifted_bits,
              8u,
              (int (           *)(unsigned __int64, _BYTE *))unknown_libname_898);
          goto LABEL_51;
        }
      }
      if ( selection_flag_2 )
        free_base(cached_block);
LABEL_51:
      ((void (           *)(__int64))FindClose)(int64_result);
    }
    if ( selection_flag_3 )
      free_base(record_pointer_2);
  }
  else
  {
    return sub_14025DC58((__int64)Start, 0, 0, a3); /* 0x14025DFF0: the call's result stays in rax */
  }
  return (unsigned int)sr_ret; /* 0x14025E24E: mov eax, edi */
}

// 14026E1D8: invalid function type 'HANDLE (__stdcall *FindFirstFileExW)(LPCWSTR lpFileName, FINDEX_INFO_LEVELS fInfoLevelId, LPVOID lpFindFileData, FINDEX_SEARCH_OPS fSearchOp, LPVOID lpSearchFilter, DWORD dwAdditionalFlags)' has been ignored
// 14026E1D0: invalid function type 'BOOL (__stdcall *FindNextFileW)(HANDLE hFindFile, LPWIN32_FIND_DATAW lpFindFileData)' has been ignored
// 14026E1E0: invalid function type 'BOOL (__stdcall *FindClose)(HANDLE hFindFile)' has been ignored

//----- (000000014025E27C) ----------------------------------------------------
__int64            sub_14025E27C(_WORD *a1, _WORD *a2, __int64 *a3)
{
  __int64 i;
  unsigned __int16 scaled_index;
  unsigned __int16 scaled_index_2;
  char selection_flag;
  signed __int64 comparison_result;
  __int64 int64_result;
  __int64 shifted_bits;
  __int64 shifted_bits_2;
  __int64 unused_local;
  _BYTE FindFileData[44];
  __int16 callee_output_word;
  __int16 unrecovered_register_value;
  __int16 unrecovered_register_value_2;
  __int64 unused_local_2;

  for ( i = 0x200000000801LL; a2 != a1; --a2 )
  {
    scaled_index = *a2 - 47;
    if ( scaled_index <= 0x2Du && _bittest64(&i, scaled_index) )
      break;
  }
  if ( *a2 != 58 || a2 == a1 + 1 )
  {
    scaled_index_2 = *a2 - 47;
    if ( scaled_index_2 > 0x2Du || (selection_flag = 1, !_bittest64(&i, scaled_index_2)) )
      selection_flag = 0;
    comparison_result = (a2 - a1 + 1) & -(__int64)(selection_flag != 0);
    int64_result = ((__int64 (           *)(_WORD *, _QWORD, _BYTE *, _QWORD, _QWORD, _DWORD))FindFirstFileExW)(
            a1,
            0,
            FindFileData,
            0,
            0,
            0);
    if ( int64_result == -1 )
    {
      sub_14025DDE0((__int64)a1, 0, 0, a3);
    }
    else
    {
      shifted_bits = (a3[1] - *a3) >> 3;
      while ( callee_output_word == 46 && (!unrecovered_register_value || unrecovered_register_value == 46 && !unrecovered_register_value_2)
           || !(unsigned int)sub_14025DDE0((__int64)&callee_output_word, (__int64)a1, comparison_result, a3) )
      {
        if ( !(unsigned int)((__int64 (           *)(__int64, _BYTE *))FindNextFileW)(int64_result, FindFileData) )
        {
          shifted_bits_2 = (a3[1] - *a3) >> 3;
          if ( shifted_bits != shifted_bits_2 )
            sub_14023AE00(
              *a3 + 8 * shifted_bits,
              shifted_bits_2 - shifted_bits,
              8u,
              (int (           *)(unsigned __int64, _BYTE *))unknown_libname_897);
          break;
        }
      }
      ((void (           *)(__int64))FindClose)(int64_result);
    }
  }
  else
  {
    sub_14025DDE0((__int64)a1, 0, 0, a3);
  }
  return 0; /* the function has no caller */
}

// 14026E1D8: invalid function type 'HANDLE (__stdcall *FindFirstFileExW)(LPCWSTR lpFileName, FINDEX_INFO_LEVELS fInfoLevelId, LPVOID lpFindFileData, FINDEX_SEARCH_OPS fSearchOp, LPVOID lpSearchFilter, DWORD dwAdditionalFlags)' has been ignored
// 14026E1D0: invalid function type 'BOOL (__stdcall *FindNextFileW)(HANDLE hFindFile, LPWIN32_FIND_DATAW lpFindFileData)' has been ignored
// 14026E1E0: invalid function type 'BOOL (__stdcall *FindClose)(HANDLE hFindFile)' has been ignored

//----- (000000014025E4D0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_901(_QWORD *a1)
{
  __int64 result;

  if ( *a1 != -1 )
  {
    result = ((__int64 (           *)(_QWORD))FindClose)(*a1);
    *a1 = -1;
  }
  return result;
}

// 14026E1E0: invalid function type 'BOOL (__stdcall *FindClose)(HANDLE hFindFile)' has been ignored

//----- (000000014025E4F4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_902(void ***a1)
{
  void **buffer_cursor;

  buffer_cursor = *a1;
  if ( *a1 != a1[1] )
  {
    do
      free_base(*buffer_cursor++);
    while ( buffer_cursor != a1[1] );
    buffer_cursor = *a1;
  }
  free_base(buffer_cursor);
}

//----- (000000014025E534) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_903(void ***a1)
{
  void **buffer_cursor;

  buffer_cursor = *a1;
  if ( *a1 != a1[1] )
  {
    do
      free_base(*buffer_cursor++);
    while ( buffer_cursor != a1[1] );
    buffer_cursor = *a1;
  }
  free_base(buffer_cursor);
}

//----- (000000014025E584) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_904()
{
  return crt_multi_byte_to_wide_char();
}

//----- (000000014025E61C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_905(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 packed_word_bits;

  LODWORD(packed_word_bits) = a5;
  return crt_wide_char_to_multi_byte(a2, 0, a3, 0xFFFFFFFFLL, a4, packed_word_bits, 0, 0);
}

//----- (000000014025E64C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_906(__int64 *a1, void *a2)
{
  _QWORD *table_value;
  __int64 table_value_2;
  _QWORD *record_pointer;
  unsigned __int64 shifted_bits;
  __int64 recalloc_base_result;

  table_value = (_QWORD *)a1[1];
  table_value_2 = a1[2];
  if ( table_value != (_QWORD *)table_value_2 )
    goto LABEL_10;
  record_pointer = (_QWORD *)*a1;
  if ( *a1 )
  {
    shifted_bits = (table_value_2 - (__int64)record_pointer) >> 3;
    if ( shifted_bits <= 0x7FFFFFFFFFFFFFFFLL )
    {
      recalloc_base_result = recalloc_base(record_pointer, 2 * shifted_bits, 8);
      if ( recalloc_base_result )
      {
        *a1 = recalloc_base_result;
        a1[1] = recalloc_base_result + 8 * shifted_bits;
        a1[2] = recalloc_base_result + 16 * shifted_bits;
        free_base(nullptr);
        table_value = (_QWORD *)a1[1];
        goto LABEL_10;
      }
      free_base(nullptr);
    }
LABEL_8:
    free_base(a2);
    return 12;
  }
  *a1 = calloc_base();
  free_base(nullptr);
  table_value = (_QWORD *)*a1;
  if ( !*a1 )
    goto LABEL_8;
  a1[1] = (__int64)table_value;
  a1[2] = (__int64)(table_value + 4);
LABEL_10:
  *table_value = (uint64)(uintptr_t)(a2);
  a1[1] += 8;
  return 0;
}

//----- (000000014025E72C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_907(__int64 *a1, void *a2)
{
  _QWORD *table_value;
  __int64 table_value_2;
  _QWORD *record_pointer;
  unsigned __int64 shifted_bits;
  __int64 recalloc_base_result;

  table_value = (_QWORD *)a1[1];
  table_value_2 = a1[2];
  if ( table_value != (_QWORD *)table_value_2 )
    goto LABEL_10;
  record_pointer = (_QWORD *)*a1;
  if ( *a1 )
  {
    shifted_bits = (table_value_2 - (__int64)record_pointer) >> 3;
    if ( shifted_bits <= 0x7FFFFFFFFFFFFFFFLL )
    {
      recalloc_base_result = recalloc_base(record_pointer, 2 * shifted_bits, 8);
      if ( recalloc_base_result )
      {
        *a1 = recalloc_base_result;
        a1[1] = recalloc_base_result + 8 * shifted_bits;
        a1[2] = recalloc_base_result + 16 * shifted_bits;
        free_base(nullptr);
        table_value = (_QWORD *)a1[1];
        goto LABEL_10;
      }
      free_base(nullptr);
    }
LABEL_8:
    free_base(a2);
    return 12;
  }
  *a1 = calloc_base();
  free_base(nullptr);
  table_value = (_QWORD *)*a1;
  if ( !*a1 )
    goto LABEL_8;
  a1[1] = (__int64)table_value;
  a1[2] = (__int64)(table_value + 4);
LABEL_10:
  *table_value = (uint64)(uintptr_t)(a2);
  a1[1] += 8;
  return 0;
}

//----- (000000014025E814) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_908(_QWORD *a1)
{
  __int64 result;

  if ( *a1 != -1 )
  {
    result = ((__int64 (           *)(_QWORD))FindClose)(*a1);
    *a1 = -1;
  }
  return result;
}

// 14026E1E0: invalid function type 'BOOL (__stdcall *FindClose)(HANDLE hFindFile)' has been ignored

//----- (000000014025E838) ----------------------------------------------------
bool sub_14025E838()
{
  return (unsigned int)((__int64 (*)(void))FindClose)() != 0;
}

// 14026E1E0: invalid function type 'BOOL (__stdcall *FindClose)(HANDLE hFindFile)' has been ignored

//----- (000000014025E85C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_909(__int64 *a1)
{
  __int64 table_value;
  unsigned int unused_written_slot;
  __int64 loaded_word;
  unsigned __int64 shifted_bits;
  __int64 recalloc_base_result;

  table_value = a1[2];
  if ( a1[1] != table_value )
    return 0;
  unused_written_slot = 0;
  if ( !*a1 )
  {
    *a1 = calloc_base();
    free_base(nullptr);
    loaded_word = *a1;
    if ( *a1 )
    {
      a1[1] = loaded_word;
      a1[2] = loaded_word + 32;
      return 0;
    }
    return 12;
  }
  shifted_bits = (table_value - *a1) >> 3;
  if ( shifted_bits > 0x7FFFFFFFFFFFFFFFLL )
    return 12;
  recalloc_base_result = recalloc_base(*a1, 2 * shifted_bits, 8);
  if ( recalloc_base_result )
  {
    *a1 = recalloc_base_result;
    a1[1] = recalloc_base_result + 8 * shifted_bits;
    a1[2] = recalloc_base_result + 16 * shifted_bits;
  }
  else
  {
    unused_written_slot = 12;
  }
  free_base(nullptr);
  return unused_written_slot;
}

//----- (000000014025E924) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_910(__int64 *a1)
{
  __int64 table_value;
  unsigned int unused_written_slot;
  __int64 loaded_word;
  unsigned __int64 shifted_bits;
  __int64 recalloc_base_result;

  table_value = a1[2];
  if ( a1[1] != table_value )
    return 0;
  unused_written_slot = 0;
  if ( !*a1 )
  {
    *a1 = calloc_base();
    free_base(nullptr);
    loaded_word = *a1;
    if ( *a1 )
    {
      a1[1] = loaded_word;
      a1[2] = loaded_word + 32;
      return 0;
    }
    return 12;
  }
  shifted_bits = (table_value - *a1) >> 3;
  if ( shifted_bits > 0x7FFFFFFFFFFFFFFFLL )
    return 12;
  recalloc_base_result = recalloc_base(*a1, 2 * shifted_bits, 8);
  if ( recalloc_base_result )
  {
    *a1 = recalloc_base_result;
    a1[1] = recalloc_base_result + 8 * shifted_bits;
    a1[2] = recalloc_base_result + 16 * shifted_bits;
  }
  else
  {
    unused_written_slot = 12;
  }
  free_base(nullptr);
  return unused_written_slot;
}

//----- (000000014025E9F0) ----------------------------------------------------
__int64            get_file_name(__int64 a1, _WORD *a2)
{
  unsigned int selection_code;
  _QWORD scratch_buffer[3];
  char unrecovered_register_value;

  crt_locale_update((_LocaleUpdate *)scratch_buffer, nullptr);
  selection_code = 65001;
  if ( *(_DWORD *)(scratch_buffer[1] + 12LL) == 65001 )
  {
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
  }
  else if ( (unsigned int)sub_14024EDA4() )
  {
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
    selection_code = 0;
  }
  else
  {
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
    selection_code = 1;
  }
  if ( (unsigned int)__acrt_wcs_to_mbs_cp____crt_win32_buffer_internal_dynamic_resizing(a2, a1, selection_code) )
    return 0;
  else
    return *(_QWORD *)(a1 + 16);
}

//----- (000000014025EAA0) ----------------------------------------------------
__int64            get_wide(__int64 a1, _BYTE *a2)
{
  _QWORD scratch_buffer[3];
  char unrecovered_register_value;

  crt_locale_update((_LocaleUpdate *)scratch_buffer, nullptr);
  if ( *(_DWORD *)(scratch_buffer[1] + 12LL) == 65001 )
  {
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
  }
  else if ( (unsigned int)sub_14024EDA4() )
  {
    if ( unrecovered_register_value )
      *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
  }
  else if ( unrecovered_register_value )
  {
    *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
  }
  if ( (unsigned int)sub_140238394(a2, a1) )
    return 0;
  else
    return *(_QWORD *)(a1 + 16);
}

//----- (000000014025EB78) ----------------------------------------------------
// attributes: thunk
__int64            common_expand_argv_wildcards__char_dup2(     char **a1, __int64 *a2)
{
  return common_expand_argv_wildcards__char(a1, a2);
}

//----- (000000014025EB80) ----------------------------------------------------
// attributes: thunk
__int64            common_expand_argv_wildcards__wchar_t_dup2(     sr_anon_49 **a1, __int64 *a2)
{
  return common_expand_argv_wildcards__wchar_t(a1, a2);
}

//----- (000000014025EB88) ----------------------------------------------------
__int64            sub_14025EB88(__int64 a1, unsigned int *a2, volatile signed __int32 ****a3, unsigned int *a4)
{
  volatile signed __int32 *record_byte_offset;
  _OWORD *record_byte_offset_2;
  __int64 remaining_count;
  __int64 remaining_count_2;
  _OWORD *record_byte_offset_3;
  _OWORD *record_byte_offset_4;
  void **table_value;

  crt_lock(*a2);
  record_byte_offset = (**a3)[17] + 6;
  record_byte_offset_2 = *(_OWORD **)&g_144CBF9F0;
  if ( !g_144CBF9F0 )
    goto LABEL_7;
  if ( (**a3)[17] == (volatile signed __int32 *)-24LL )
  {
    crt_memset((void *)(uintptr_t)(*(_WORD **)&g_144CBF9F0), 0, 0x101u);
LABEL_7:
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    remaining_count = 2;
    goto LABEL_8;
  }
  remaining_count = 2;
  remaining_count_2 = 2;
  do
  {
    *record_byte_offset_2 = *(_OWORD *)record_byte_offset;
    record_byte_offset_2[1] = *((_OWORD *)record_byte_offset + 1);
    record_byte_offset_2[2] = *((_OWORD *)record_byte_offset + 2);
    record_byte_offset_2[3] = *((_OWORD *)record_byte_offset + 3);
    record_byte_offset_2[4] = *((_OWORD *)record_byte_offset + 4);
    record_byte_offset_2[5] = *((_OWORD *)record_byte_offset + 5);
    record_byte_offset_2[6] = *((_OWORD *)record_byte_offset + 6);
    record_byte_offset_2 += 8;
    *(record_byte_offset_2 - 1) = *((_OWORD *)record_byte_offset + 7);
    record_byte_offset += 32;
    --remaining_count_2;
  }
  while ( remaining_count_2 );
  *(_BYTE *)record_byte_offset_2 = *(_BYTE *)record_byte_offset;
LABEL_8:
  record_byte_offset_3 = (_OWORD *)((char *)(**a3)[17] + 281);
  record_byte_offset_4 = *(_OWORD **)&g_144CBF9F8;
  if ( !g_144CBF9F8 )
  {
LABEL_13:
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    goto LABEL_14;
  }
  if ( (**a3)[17] == (volatile signed __int32 *)-281LL )
  {
    crt_memset((void *)(uintptr_t)(*(_WORD **)&g_144CBF9F8), 0, 0x100u);
    goto LABEL_13;
  }
  do
  {
    *record_byte_offset_4 = *record_byte_offset_3;
    record_byte_offset_4[1] = record_byte_offset_3[1];
    record_byte_offset_4[2] = record_byte_offset_3[2];
    record_byte_offset_4[3] = record_byte_offset_3[3];
    record_byte_offset_4[4] = record_byte_offset_3[4];
    record_byte_offset_4[5] = record_byte_offset_3[5];
    record_byte_offset_4[6] = record_byte_offset_3[6];
    record_byte_offset_4 += 8;
    *(record_byte_offset_4 - 1) = record_byte_offset_3[7];
    record_byte_offset_3 += 8;
    --remaining_count;
  }
  while ( remaining_count );
LABEL_14:
  if ( _InterlockedExchangeAdd(**a3[1], 0xFFFFFFFF) == 1 )
  {
    table_value = (void **)*a3[1];
    if ( *table_value != &unk_1403025A0 )
      free_base(*table_value);
  }
  **a3[1] = (**a3)[17];
  _InterlockedIncrement((**a3)[17]);
  return crt_unlock(*a4);
}

//----- (000000014025ED44) ----------------------------------------------------
__int64            sub_14025ED44(unsigned int a1, volatile signed __int32 ****a2)
{
  __int64 callee_output_word;
  unsigned int input_value;
  unsigned int input_value_2;

  input_value = a1;
  input_value_2 = a1;
  return sub_14025EB88((__int64)&callee_output_word, &input_value_2, a2, &input_value);
}

//----- (000000014025ED98) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
volatile signed __int32 *           unknown_libname_914(volatile signed __int32 ****a1)
{
  __int64 scaled_index;
  __int64 remaining_count;
  _OWORD *record_byte_offset;
  _OWORD *record_byte_offset_2;
  __int64 remaining_count_2;
  __int128 table_value;
  _OWORD *record_byte_offset_3;
  _OWORD *record_byte_offset_4;
  __int128 table_value_2;
  void **table_value_3;
  volatile signed __int32 *result;

  scaled_index = (__int64)*a1;
  remaining_count = 2;
  record_byte_offset = *(_OWORD **)&g_144CBF9F0;
  record_byte_offset_2 = (_OWORD *)(*(_QWORD *)(*(_QWORD *)scaled_index + 136LL) + 24LL);
  if ( !g_144CBF9F0 )
    goto LABEL_7;
  if ( !record_byte_offset_2 )
  {
    crt_memset((void *)(uintptr_t)(*(_WORD **)&g_144CBF9F0), 0, 0x101u);
LABEL_7:
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    goto LABEL_8;
  }
  remaining_count_2 = 2;
  do
  {
    *record_byte_offset = *record_byte_offset_2;
    record_byte_offset[1] = record_byte_offset_2[1];
    record_byte_offset[2] = record_byte_offset_2[2];
    record_byte_offset[3] = record_byte_offset_2[3];
    record_byte_offset[4] = record_byte_offset_2[4];
    record_byte_offset[5] = record_byte_offset_2[5];
    record_byte_offset[6] = record_byte_offset_2[6];
    record_byte_offset += 8;
    table_value = record_byte_offset_2[7];
    record_byte_offset_2 += 8;
    *(record_byte_offset - 1) = table_value;
    --remaining_count_2;
  }
  while ( remaining_count_2 );
  *(_BYTE *)record_byte_offset = *(_BYTE *)record_byte_offset_2;
LABEL_8:
  record_byte_offset_3 = *(_OWORD **)&g_144CBF9F8;
  record_byte_offset_4 = (_OWORD *)((char *)(**a1)[17] + 281);
  if ( !g_144CBF9F8 )
  {
LABEL_13:
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    goto LABEL_14;
  }
  if ( (**a1)[17] == (volatile signed __int32 *)-281LL )
  {
    crt_memset((void *)(uintptr_t)(*(_WORD **)&g_144CBF9F8), 0, 0x100u);
    goto LABEL_13;
  }
  do
  {
    *record_byte_offset_3 = *record_byte_offset_4;
    record_byte_offset_3[1] = record_byte_offset_4[1];
    record_byte_offset_3[2] = record_byte_offset_4[2];
    record_byte_offset_3[3] = record_byte_offset_4[3];
    record_byte_offset_3[4] = record_byte_offset_4[4];
    record_byte_offset_3[5] = record_byte_offset_4[5];
    record_byte_offset_3[6] = record_byte_offset_4[6];
    record_byte_offset_3 += 8;
    table_value_2 = record_byte_offset_4[7];
    record_byte_offset_4 += 8;
    *(record_byte_offset_3 - 1) = table_value_2;
    --remaining_count;
  }
  while ( remaining_count );
LABEL_14:
  if ( _InterlockedExchangeAdd(**a1[1], 0xFFFFFFFF) == 1 )
  {
    table_value_3 = (void **)*a1[1];
    if ( *table_value_3 != &unk_1403025A0 )
      free_base(*table_value_3);
  }
  **a1[1] = (**a1)[17];
  result = (**a1)[17];
  _InterlockedIncrement(result);
  return result;
}

//----- (000000014025EF84) ----------------------------------------------------
__int64            getSystemCP(unsigned int a1)
{
  unsigned int int64_result;
  _QWORD scratch_buffer[3];
  char unrecovered_register_value;

  crt_locale_update((_LocaleUpdate *)scratch_buffer, nullptr);
  g_144CBFA08 = 0;
  switch ( a1 )
  {
    case 0xFFFFFFFE:
      g_144CBFA08 = 1;
      int64_result = ((__int64 (*)(void))GetOEMCP)();
LABEL_5:
      a1 = int64_result;
      break;
    case 0xFFFFFFFD:
      g_144CBFA08 = 1;
      int64_result = ((__int64 (*)(void))GetACP)();
      goto LABEL_5;
    case 0xFFFFFFFC:
      g_144CBFA08 = 1;
      a1 = *(_DWORD *)(scratch_buffer[1] + 12LL);
      break;
  }
  if ( unrecovered_register_value )
    *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
  return a1;
}

// 14026E070: invalid function type 'UINT (__stdcall *GetOEMCP)()' has been ignored
// 14026E078: invalid function type 'UINT (__stdcall *GetACP)()' has been ignored

//----- (000000014025F004) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char *           unknown_libname_915(char *a1, unsigned __int64 a2)
{
  char *result;

  result = a1 + 8;
  if ( a1 < a1 + 8 )
  {
    memset64(a1, a2, a1 < a1 + 8);
    return (char *)a2;
  }
  return result;
}

//----- (000000014025F02C) ----------------------------------------------------
void            setSBCS_sr(struct __crt_multibyte_data *a1)
{
  _BYTE *buffer_cursor;
  __int64 remaining_count;
  _WORD *buffer_cursor_2;
  __int64 remaining_count_2;
  signed __int64 state_address;
  _BYTE *buffer_cursor_3;
  __int64 remaining_count_3;

  buffer_cursor = (char *)a1 + 24;
  remaining_count = 257;
  crt_memset((void *)(uintptr_t)((_WORD *)a1 + 12), 0, 0x101u);
  buffer_cursor_2 = (_WORD *)((char *)a1 + 12);
  *(_QWORD *)((char *)a1 + 4) = 0;
  remaining_count_2 = 6;
  *((_QWORD *)a1 + 68) = 0;
  while ( remaining_count_2 )
  {
    *buffer_cursor_2++ = 0;
    --remaining_count_2;
  }
  state_address = &unk_1403025A0 - (_UNKNOWN *)a1;
  do
  {
    *buffer_cursor = buffer_cursor[state_address];
    ++buffer_cursor;
    --remaining_count;
  }
  while ( remaining_count );
  buffer_cursor_3 = (char *)a1 + 281;
  remaining_count_3 = 256;
  do
  {
    *buffer_cursor_3 = buffer_cursor_3[state_address];
    ++buffer_cursor_3;
    --remaining_count_3;
  }
  while ( remaining_count_3 );
}

//----- (000000014025F0BC) ----------------------------------------------------
__int64            setSBUpLow_sr(struct __crt_multibyte_data *a1)
{
  __int64 loaded_word;
  unsigned int iteration_count;
  char *text_cursor;
  __int64 remaining_count;
  unsigned __int8 loaded_word_2;
  unsigned __int8 *state_address;
  unsigned int table_value;
  __int64 i;
  __int64 element_index;
  _BYTE *running_total;
  char table_value_2;
  unsigned int iteration_count_2;
  __int64 iteration_count_3;
  char integer_difference;
  __int64 unused_local;
  int unused_written_slot;
  _BYTE CPInfo[32];
  char scratch_buffer[256];
  char scratch_buffer_2[256];
  char scratch_buffer_3[256];
  _BYTE scratch_buffer_4[1024];
  __int64 unused_local_2;

  loaded_word = *((unsigned int *)a1 + 1);
  if ( (_DWORD)loaded_word == 65001 || !(unsigned int)((__int64 (           *)(__int64, _BYTE *))GetCPInfo)(loaded_word, CPInfo) )
  {
    iteration_count_2 = 0;
    iteration_count_3 = 1;
    do
    {
      if ( iteration_count_2 - 97 + 32 > 0x19 )
      {
        if ( iteration_count_2 - 97 > 0x19 )
        {
          integer_difference = 0;
        }
        else
        {
          *((_BYTE *)a1 + iteration_count_3 + 24) |= 0x20u;
          integer_difference = iteration_count_2 - 32;
        }
      }
      else
      {
        *((_BYTE *)a1 + iteration_count_3 + 24) |= 0x10u;
        integer_difference = iteration_count_2 + 32;
      }
      *((_BYTE *)a1 + iteration_count_3 + 280) = integer_difference;
      ++iteration_count_2;
      ++iteration_count_3;
    }
    while ( iteration_count_2 < 0x100 );
  }
  else
  {
    iteration_count = 0;
    text_cursor = scratch_buffer;
    remaining_count = 256;
    do
      *text_cursor++ = iteration_count++;
    while ( iteration_count < 0x100 );
    loaded_word_2 = CPInfo[6];
    state_address = &CPInfo[6];
    scratch_buffer[0] = 32;
    while ( loaded_word_2 )
    {
      table_value = state_address[1];
      for ( i = loaded_word_2; (unsigned int)i <= table_value && (unsigned int)i < 0x100; i = (unsigned int)(i + 1) )
        scratch_buffer[i] = 32;
      state_address += 2;
      loaded_word_2 = *state_address;
    }
    sub_140262618(nullptr, 1u, (__int64)scratch_buffer, 256, (__int64)scratch_buffer_4, *((_DWORD *)a1 + 1), 0);
    unused_written_slot = 0;
    sub_14025A004(nullptr, *((_QWORD *)a1 + 68), 0x100u, scratch_buffer, 256, (__int64 *)scratch_buffer_2, 256, *((_DWORD *)a1 + 1));
    unused_written_slot = 0;
    sub_14025A004(nullptr, *((_QWORD *)a1 + 68), 0x200u, scratch_buffer, 256, (__int64 *)scratch_buffer_3, 256, *((_DWORD *)a1 + 1));
    element_index = 1;
    running_total = scratch_buffer_4;
    do
    {
      if ( (*running_total & 1) != 0 )
      {
        *((_BYTE *)a1 + element_index + 24) |= 0x10u;
        table_value_2 = scratch_buffer[element_index + 255];
      }
      else if ( (*running_total & 2) != 0 )
      {
        *((_BYTE *)a1 + element_index + 24) |= 0x20u;
        table_value_2 = scratch_buffer_2[element_index + 255];
      }
      else
      {
        table_value_2 = 0;
      }
      *((_BYTE *)a1 + element_index + 280) = table_value_2;
      running_total += 2;
      ++element_index;
      --remaining_count;
    }
    while ( remaining_count );
  }
  return 0; /* no caller reads the result */
}

// 14026E0A8: invalid function type 'BOOL (__stdcall *GetCPInfo)(UINT CodePage, LPCPINFO lpCPInfo)' has been ignored

//----- (000000014025F2A0) ----------------------------------------------------
__int64            setmbcp_internal(
        unsigned int a1,
        char a2,
        struct __acrt_ptd *     a3,
        struct __crt_multibyte_data **     a4)
{
  unsigned int SystemCP;
  __int64 malloc_base_result;
  _DWORD *saved_malloc_base_result;
  __int64 remaining_count;
  _OWORD *record_byte_offset;
  _OWORD *record_byte_offset_2;
  __int128 table_value;
  unsigned int setmbcp_nolock_result;
  void *loaded_record_pointer;
  _DWORD *record_pointer;
  _BYTE scratch_buffer[4];
  unsigned int selection_code;
  unsigned int selection_code_2;
  volatile signed __int32 ***scratch_buffer_2[2];
  struct __acrt_ptd *input_cursor;
  void **input_cursor_2;

  input_cursor_2 = (void **)a4;
  input_cursor = a3;
  update_thread_multibyte_data_internal(a3, a4);
  SystemCP = getSystemCP(a1);
  if ( SystemCP == *(_DWORD *)(*((_QWORD *)input_cursor + 17) + 4LL) )
    return 0;
  malloc_base_result = malloc_base();
  saved_malloc_base_result = (_DWORD *)malloc_base_result;
  if ( malloc_base_result )
  {
    remaining_count = 4;
    record_byte_offset = (_OWORD *)malloc_base_result;
    record_byte_offset_2 = *((_OWORD **)input_cursor + 17);
    do
    {
      *record_byte_offset = *record_byte_offset_2;
      record_byte_offset[1] = record_byte_offset_2[1];
      record_byte_offset[2] = record_byte_offset_2[2];
      record_byte_offset[3] = record_byte_offset_2[3];
      record_byte_offset[4] = record_byte_offset_2[4];
      record_byte_offset[5] = record_byte_offset_2[5];
      record_byte_offset[6] = record_byte_offset_2[6];
      record_byte_offset += 8;
      table_value = record_byte_offset_2[7];
      record_byte_offset_2 += 8;
      *(record_byte_offset - 1) = table_value;
      --remaining_count;
    }
    while ( remaining_count );
    *record_byte_offset = *record_byte_offset_2;
    record_byte_offset[1] = record_byte_offset_2[1];
    *((_QWORD *)record_byte_offset + 4) = *((_QWORD *)record_byte_offset_2 + 4);
    *saved_malloc_base_result = 0;
    setmbcp_nolock_result = setmbcp_nolock(SystemCP, (__int64)saved_malloc_base_result);
    if ( setmbcp_nolock_result != -1 )
    {
      if ( !a2 )
        sub_14024868C();
      if ( _InterlockedExchangeAdd(*((volatile signed __int32 **)input_cursor + 17), 0xFFFFFFFF) == 1 )
      {
        loaded_record_pointer = *((void **)input_cursor + 17);
        if ( loaded_record_pointer != &unk_1403025A0 )
          free_base(loaded_record_pointer);
      }
      *saved_malloc_base_result = 1;
      record_pointer = saved_malloc_base_result;
      saved_malloc_base_result = nullptr;
      *((_QWORD *)input_cursor + 17) = (uint64)(uintptr_t)(record_pointer);
      if ( (*((_BYTE *)input_cursor + 936) & 2) == 0 && (dword_140302B88 & 1) == 0 )
      {
        scratch_buffer_2[0] = (volatile signed __int32 ***)&input_cursor;
        scratch_buffer_2[1] = (volatile signed __int32 ***)&input_cursor_2;
        selection_code = 5;
        selection_code_2 = 5;
        sub_14025EB88((__int64)scratch_buffer, &selection_code_2, scratch_buffer_2, &selection_code);
        if ( a2 )
          off_140302580 = *input_cursor_2;
      }
      goto LABEL_9;
    }
    *errno_sr() = 22;
  }
  setmbcp_nolock_result = -1;
LABEL_9:
  free_base(saved_malloc_base_result);
  return setmbcp_nolock_result;
}

//----- (000000014025F464) ----------------------------------------------------
struct __crt_multibyte_data *           update_thread_multibyte_data_internal(
        struct __acrt_ptd *     a1,
        struct __crt_multibyte_data **     a2)
{
  volatile signed __int32 *loaded_record_pointer;
  volatile signed __int32 *record_pointer;

  if ( (dword_140302B88 & *((_DWORD *)a1 + 234)) != 0 && *((_QWORD *)a1 + 18) )
  {
    loaded_record_pointer = *((volatile signed __int32 **)a1 + 17);
  }
  else
  {
    crt_lock(5);
    loaded_record_pointer = *((volatile signed __int32 **)a1 + 17);
    if ( loaded_record_pointer != (volatile signed __int32 *)*a2 )
    {
      if ( loaded_record_pointer && _InterlockedExchangeAdd(loaded_record_pointer, 0xFFFFFFFF) == 1 && loaded_record_pointer != (volatile signed __int32 *)&unk_1403025A0 )
        free_base((void *)loaded_record_pointer);
      record_pointer = (volatile signed __int32 *)*a2;
      *((_QWORD *)a1 + 17) = (uint64)(uintptr_t)(*a2);
      _InterlockedIncrement(record_pointer);
      loaded_record_pointer = record_pointer;
    }
    crt_unlock(5);
  }
  if ( !loaded_record_pointer )
    abort();
  return (struct __crt_multibyte_data *)loaded_record_pointer;
}

//----- (000000014025F520) ----------------------------------------------------
char sub_14025F520()
{
  struct __acrt_ptd *returned_pointer;

  if ( !LOBYTE(g_144CBFA0C) )
  {
    g_144CBF9F8 = (uint64)(uintptr_t)(&unk_1403028E0);
    g_144CBFA00 = (uint64)(uintptr_t)(&unk_1403025A0);
    g_144CBF9F0 = (uint64)(uintptr_t)(&unk_1403027D0);
    returned_pointer = sub_140255B44();
    setmbcp_internal(0xFFFFFFFD, 1, returned_pointer, (struct __crt_multibyte_data **    )(unsigned int *)&g_144CBFA00);
    LOBYTE(g_144CBFA0C) = 1;
  }
  return 1;
}

//----- (000000014025F580) ----------------------------------------------------
struct __crt_multibyte_data *sub_14025F580()
{
  struct __acrt_ptd *returned_pointer;

  returned_pointer = (struct __acrt_ptd *)sub_140255A70();
  return update_thread_multibyte_data_internal(returned_pointer, (struct __crt_multibyte_data **    )(unsigned int *)&g_144CBFA00);
}

//----- (000000014025F5AC) ----------------------------------------------------
int         getmbcp()
{
  int result;
  __int64 callee_output_word;
  __int64 unrecovered_register_value;
  char unrecovered_register_value_2;

  crt_locale_update((_LocaleUpdate *)&callee_output_word, nullptr);
  if ( *(_DWORD *)(unrecovered_register_value + 8) )
    result = *(_DWORD *)(unrecovered_register_value + 4);
  else
    result = 0;
  if ( unrecovered_register_value_2 )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  return result;
}

//----- (000000014025F5E8) ----------------------------------------------------
int         setmbcp(int CodePage)
{
  struct __acrt_ptd *returned_pointer;

  returned_pointer = (struct __acrt_ptd *)sub_140255A70();
  return setmbcp_internal(CodePage, 0, returned_pointer, (struct __crt_multibyte_data **    )(unsigned int *)&g_144CBFA00);
}

//----- (000000014025F610) ----------------------------------------------------
__int64            setmbcp_nolock(unsigned int a1, __int64 a2)
{
       __int16 *literal_text;
  unsigned int SystemCP;
  unsigned int iteration_count;
  _DWORD *record_byte_offset;
  int selection_flag;
  _WORD *buffer_cursor;
  __int64 j;
  bool comparison_result;
  _BYTE *i;
  unsigned int table_value;
  unsigned int scaled_index;
  __int64 integer_sum;
  __int64 remaining_count;
  _BYTE *buffer_cursor_2;
  __int64 remaining_count_2;
       __int16 *literal_text_2;
  __int64 saved_iteration_count;
  _BYTE *buffer_cursor_3;
  __int64 remaining_count_3;
  char *record_byte_offset_2;
  unsigned __int8 *saved_record_byte_offset;
  unsigned int iteration_count_2;
  __int64 integer_sum_2;
  unsigned int integer_difference;
  unsigned int integer_difference_2;
  unsigned int integer_difference_3;
  _WORD *buffer_cursor_4;
  __int64 remaining_count_4;
  __int64 unused_local;
  _DWORD CPInfo[6];
  __int64 unused_local_2;

  literal_text = nullptr;
  SystemCP = getSystemCP(a1);
  if ( !SystemCP )
    goto LABEL_57;
  iteration_count = 0;
  record_byte_offset = &unk_1403029F0;
  selection_flag = 1;
  do
  {
    if ( *record_byte_offset == SystemCP )
    {
      crt_memset((void *)(uintptr_t)((_WORD *)(a2 + 24)), 0, 0x101u);
      saved_iteration_count = iteration_count;
      buffer_cursor_3 = &unk_1403029E0;
      remaining_count_3 = 4;
      record_byte_offset_2 = (char *)&unk_140302A00 + 48 * saved_iteration_count;
      do
      {
        saved_record_byte_offset = (unsigned __int8 *)record_byte_offset_2;
        if ( *record_byte_offset_2 )
        {
          do
          {
            if ( !saved_record_byte_offset[1] )
              break;
            iteration_count_2 = *saved_record_byte_offset;
            if ( iteration_count_2 <= saved_record_byte_offset[1] )
            {
              integer_sum_2 = iteration_count_2 + 1;
              do
              {
                if ( (unsigned int)integer_sum_2 >= 0x101 )
                  break;
                ++iteration_count_2;
                *(_BYTE *)(integer_sum_2 + a2 + 24) |= *buffer_cursor_3;
                integer_sum_2 = (unsigned int)(integer_sum_2 + 1);
              }
              while ( iteration_count_2 <= saved_record_byte_offset[1] );
            }
            saved_record_byte_offset += 2;
          }
          while ( *saved_record_byte_offset );
        }
        record_byte_offset_2 += 8;
        ++buffer_cursor_3;
        --remaining_count_3;
      }
      while ( remaining_count_3 );
      *(_DWORD *)(a2 + 4) = SystemCP;
      *(_DWORD *)(a2 + 8) = 1;
      integer_difference = SystemCP - 932;
      if ( integer_difference )
      {
        integer_difference_2 = integer_difference - 4;
        if ( integer_difference_2 )
        {
          integer_difference_3 = integer_difference_2 - 13;
          if ( integer_difference_3 )
          {
            if ( integer_difference_3 == 1 )
              literal_text = L"zh-TW";
          }
          else
          {
            literal_text = L"ko-KR";
          }
        }
        else
        {
          literal_text = (     __int16 *)off_14028F270;
        }
      }
      else
      {
        literal_text = L"ja-JP";
      }
      *(_QWORD *)(a2 + 544) = (uint64)(uintptr_t)(literal_text);
      buffer_cursor_4 = (_WORD *)(a2 + 12);
      remaining_count_4 = 6;
      do
      {
        *buffer_cursor_4 = *(_WORD *)((char *)buffer_cursor_4 + (_QWORD)&unk_1403029F0 + 48 * saved_iteration_count - a2 - 8);
        ++buffer_cursor_4;
        --remaining_count_4;
      }
      while ( remaining_count_4 );
      goto LABEL_12;
    }
    ++iteration_count;
    record_byte_offset += 12;
  }
  while ( iteration_count < 5 );
  if ( SystemCP != 65000 && (unsigned int)((__int64 (           *)(_QWORD))IsValidCodePage)((unsigned __int16)SystemCP) )
  {
    if ( SystemCP == 65001 )
    {
      *(_QWORD *)(a2 + 4) = 65001;
      *(_QWORD *)(a2 + 544) = 0;
      *(_DWORD *)(a2 + 24) = 0;
      *(_WORD *)(a2 + 28) = 0;
      goto LABEL_9;
    }
    if ( (unsigned int)((__int64 (           *)(_QWORD, _DWORD *))GetCPInfo)(SystemCP, CPInfo) )
    {
      crt_memset((void *)(uintptr_t)((_WORD *)(a2 + 24)), 0, 0x101u);
      comparison_result = CPInfo[0] == 2;
      *(_DWORD *)(a2 + 4) = SystemCP;
      *(_QWORD *)(a2 + 544) = 0;
      if ( comparison_result )
      {
        for ( i = (char *)&CPInfo[1] + 2; *i; i += 2 )
        {
          if ( !i[1] )
            break;
          table_value = (unsigned __int8)i[1];
          scaled_index = (unsigned __int8)*i;
          if ( scaled_index <= table_value )
          {
            integer_sum = scaled_index + 1;
            remaining_count = table_value - scaled_index + 1;
            do
            {
              *(_BYTE *)(integer_sum + a2 + 24) |= 4u;
              integer_sum = (unsigned int)(integer_sum + 1);
              --remaining_count;
            }
            while ( remaining_count );
          }
        }
        buffer_cursor_2 = (_BYTE *)(a2 + 26);
        remaining_count_2 = 254;
        do
        {
          *buffer_cursor_2++ |= 8u;
          --remaining_count_2;
        }
        while ( remaining_count_2 );
        switch ( *(_DWORD *)(a2 + 4) )
        {
          case 0x3A4:
            literal_text_2 = L"ja-JP";
            break;
          case 0x3A8:
            literal_text_2 = (     __int16 *)off_14028F270;
            break;
          case 0x3B5:
            literal_text_2 = L"ko-KR";
            break;
          case 0x3B6:
            literal_text_2 = L"zh-TW";
            break;
          default:
            literal_text_2 = nullptr;
            break;
        }
        *(_QWORD *)(a2 + 544) = (uint64)(uintptr_t)(literal_text_2);
      }
      else
      {
        selection_flag = 0;
      }
      *(_DWORD *)(a2 + 8) = selection_flag;
LABEL_9:
      buffer_cursor = (_WORD *)(a2 + 12);
      for ( j = 6; j; --j )
        *buffer_cursor++ = 0;
LABEL_12:
      setSBUpLow_sr((struct __crt_multibyte_data *)a2);
      return 0; /* 0x14025F6BB: -> xor eax, eax */
    }
    if ( g_144CBFA08 )
LABEL_57:
    {
      setSBCS_sr((struct __crt_multibyte_data *)a2);
      return 0; /* 0x14025F8A2: xor eax, eax */
    }
  }
  return (unsigned int)-1; /* 0x14025F7A5: or eax, 0xffffffff */
}

// 14026E080: invalid function type 'BOOL (__stdcall *IsValidCodePage)(UINT CodePage)' has been ignored
// 14026E0A8: invalid function type 'BOOL (__stdcall *GetCPInfo)(UINT CodePage, LPCPINFO lpCPInfo)' has been ignored

//----- (000000014025F8CC) ----------------------------------------------------
__int64            sub_14025F8CC(__m128i *a1, unsigned __int64 a2,      __m128i *a3, unsigned __int64 a4)
{
  int *unused_written_slot;
  unsigned int selection_code;

  if ( !a4 )
    return 0;
  if ( !a1 )
    goto LABEL_4;
  if ( a3 && a2 >= a4 )
  {
    crt_memcpy(a1, a3, a4);
    return 0;
  }
  crt_memset((void *)(uintptr_t)(a1), 0, a2);
  if ( !a3 )
  {
LABEL_4:
    unused_written_slot = errno_sr();
    selection_code = 22;
LABEL_5:
    *unused_written_slot = selection_code;
    crt_invalid_parameter_noinfo();
    return selection_code;
  }
  if ( a2 < a4 )
  {
    unused_written_slot = errno_sr();
    selection_code = 34;
    goto LABEL_5;
  }
  return 22;
}

// 14025F8CC: invalid function type 'errno_t __cdecl sub_14025F8CC(void *const Destination, const rsize_t DestinationSize, const void *const Source, const rsize_t SourceSize)' has been ignored

//----- (000000014025F954) ----------------------------------------------------
__int64            x_ismbbtype_l(struct __crt_locale_pointers *a1, unsigned __int8 a2, int a3, unsigned __int8 a4)
{
  __int64 result;
  _QWORD scratch_buffer[3];
  char unrecovered_register_value;

  crt_locale_update((_LocaleUpdate *)scratch_buffer, a1);
  if ( (a4 & *(_BYTE *)(a2 + scratch_buffer[2] + 25LL)) != 0
    || (!a3 ? (result = 0) : (result = (unsigned __int16)(a3 & *(_WORD *)(*(_QWORD *)scratch_buffer[1] + 2LL * a2))), (_DWORD)result) )
  {
    result = 1;
  }
  if ( unrecovered_register_value )
    *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
  return result;
}

//----- (000000014025FAD8) ----------------------------------------------------
__int64            ismbbkana_l(unsigned __int8 a1, struct __crt_locale_pointers *a2)
{
  unsigned int unused_written_slot;
  __int64 callee_output_word;
  __int64 unrecovered_register_value;
  char unrecovered_register_value_2;

  crt_locale_update((_LocaleUpdate *)&callee_output_word, a2);
  if ( unrecovered_register_value && *(_DWORD *)(unrecovered_register_value + 4) == 932 )
    unused_written_slot = x_ismbbtype_l(a2, a1, 0, 3u);
  else
    unused_written_slot = 0;
  if ( unrecovered_register_value_2 )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  return unused_written_slot;
}

// 14025FAD8: invalid function type 'int __cdecl ismbbkana_l(unsigned int C, _locale_t Locale)' has been ignored

//----- (000000014025FB98) ----------------------------------------------------
int         ismbblead(unsigned int Ch)
{
  return x_ismbbtype_l(nullptr, Ch, 0, 4u);
}

//----- (000000014025FC50) ----------------------------------------------------
char sub_14025FC50()
{
  g_144CBFA38 = ((__int64 (*)(void))GetCommandLineA)();
  g_144CBFA40 = ((__int64 (*)(void))GetCommandLineW)();
  return 1;
}

// 14026E068: invalid function type 'LPSTR (__stdcall *GetCommandLineA)()' has been ignored
// 14026E060: invalid function type 'LPWSTR (__stdcall *GetCommandLineW)()' has been ignored

//----- (000000014025FCB4) ----------------------------------------------------
__int64            sub_14025FCB4(_QWORD *a1)
{
  if ( a1 && g_144CBFA10 )
  {
    *a1 = g_144CBFA10;
    return 0;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 22;
  }
}

//----- (000000014025FCEC) ----------------------------------------------------
__int64            sub_14025FCEC(_QWORD *a1)
{
  if ( a1 && g_144CBFA18 )
  {
    *a1 = g_144CBFA18;
    return 0;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 22;
  }
}

//----- (000000014025FD2C) ----------------------------------------------------
__int64            Concurrency__details___Release_chore_dup3(
        Concurrency__details *this,
        struct Concurrency__details___Threadpool_chore *a2)
{
  __int64 loaded_word;
  __int64 result;

  loaded_word = *(_QWORD *)this;
  if ( loaded_word )
  {
    result = ((__int64 (           *)(__int64, struct Concurrency__details___Threadpool_chore *))FreeEnvironmentStringsW)(
               loaded_word,
               a2);
    *(_QWORD *)this = 0;
  }
  return result;
}

// 14026E050: invalid function type 'BOOL (__stdcall *FreeEnvironmentStringsW)(LPWCH penv)' has been ignored

//----- (000000014025FD58) ----------------------------------------------------
__int64            Concurrency__details___Release_chore_dup4(
        Concurrency__details *this,
        struct Concurrency__details___Threadpool_chore *a2)
{
  __int64 loaded_word;
  __int64 result;

  loaded_word = *(_QWORD *)this;
  if ( loaded_word )
  {
    result = ((__int64 (           *)(__int64, struct Concurrency__details___Threadpool_chore *))FreeEnvironmentStringsW)(
               loaded_word,
               a2);
    *(_QWORD *)this = 0;
  }
  return result;
}

// 14026E050: invalid function type 'BOOL (__stdcall *FreeEnvironmentStringsW)(LPWCH penv)' has been ignored

//----- (000000014025FD7C) ----------------------------------------------------
char sub_14025FD7C()
{
  ((void (*)(void))FreeEnvironmentStringsW)();
  return 1;
}

// 14026E050: invalid function type 'BOOL (__stdcall *FreeEnvironmentStringsW)(LPWCH penv)' has been ignored

//----- (000000014025FDC4) ----------------------------------------------------
void *sub_14025FDC4()
{
  __int64 int64_result;
  __int64 saved_int64_result;
  _WORD *i;
  __int64 element_index;
  __int64 shifted_bits;
  int wide_char_to_multi_byte_result;
  __int64 malloc_base_result;
  void *saved_malloc_base_result;
  void *unused_written_slot;
  __int64 packed_word_bits;
  __int64 packed_word_bits_2;

  int64_result = ((__int64 (*)(void))GetEnvironmentStringsW)();
  saved_int64_result = int64_result;
  if ( !int64_result )
    goto LABEL_12;
  for ( i = (_WORD *)int64_result; *i; i += element_index + 1 )
  {
    element_index = -1;
    do
      ++element_index;
    while ( i[element_index] );
  }
  shifted_bits = ((__int64)i - saved_int64_result + 2) >> 1;
  LODWORD(packed_word_bits) = 0;
  wide_char_to_multi_byte_result = crt_wide_char_to_multi_byte(0, 0, saved_int64_result, (unsigned int)shifted_bits, 0, packed_word_bits, 0, 0);
  if ( wide_char_to_multi_byte_result )
  {
    malloc_base_result = malloc_base();
    saved_malloc_base_result = (void *)malloc_base_result;
    if ( malloc_base_result && (LODWORD(packed_word_bits_2) = wide_char_to_multi_byte_result, (unsigned int)crt_wide_char_to_multi_byte(0, 0, saved_int64_result, (unsigned int)shifted_bits, malloc_base_result, packed_word_bits_2, 0, 0)) )
    {
      unused_written_slot = saved_malloc_base_result;
      saved_malloc_base_result = nullptr;
    }
    else
    {
      unused_written_slot = nullptr;
    }
    free_base(saved_malloc_base_result);
  }
  else
  {
LABEL_12:
    unused_written_slot = nullptr;
  }
  if ( saved_int64_result )
    ((void (           *)(__int64))FreeEnvironmentStringsW)(saved_int64_result);
  return unused_written_slot;
}

// 14026E058: invalid function type 'LPWCH (__stdcall *GetEnvironmentStringsW)()' has been ignored
// 14026E050: invalid function type 'BOOL (__stdcall *FreeEnvironmentStringsW)(LPWCH penv)' has been ignored

//----- (000000014025FEC8) ----------------------------------------------------
__m128i *sub_14025FEC8()
{
  __int64 int64_result;
  __m128i *unused_written_slot;
       __m128i *source_buffer;
  char *saved_int64_result;
  __int64 element_index;
  unsigned __int64 byte_count;
  __m128i *malloc_base_result;
  __m128i *saved_malloc_base_result;

  int64_result = ((__int64 (*)(void))GetEnvironmentStringsW)();
  unused_written_slot = nullptr;
  source_buffer = (     __m128i *)int64_result;
  if ( int64_result )
  {
    saved_int64_result = (char *)int64_result;
    if ( *(_WORD *)int64_result )
    {
      do
      {
        element_index = -1;
        do
          ++element_index;
        while ( *(_WORD *)&saved_int64_result[2 * element_index] );
        saved_int64_result += 2 * element_index + 2;
      }
      while ( *(_WORD *)saved_int64_result );
    }
    byte_count = 2 * ((saved_int64_result - (char *)source_buffer + 2) >> 1);
    malloc_base_result = (__m128i *)malloc_base();
    saved_malloc_base_result = malloc_base_result;
    if ( malloc_base_result )
    {
      crt_memcpy(malloc_base_result, source_buffer, byte_count);
      unused_written_slot = saved_malloc_base_result;
    }
    free_base(nullptr);
    ((void (           *)(     __m128i *))FreeEnvironmentStringsW)(source_buffer);
  }
  return unused_written_slot;
}

// 14026E058: invalid function type 'LPWCH (__stdcall *GetEnvironmentStringsW)()' has been ignored
// 14026E050: invalid function type 'BOOL (__stdcall *FreeEnvironmentStringsW)(LPWCH penv)' has been ignored

//----- (000000014025FF68) ----------------------------------------------------
__int64            _dcrt_set_variable_in_narrow_environment_nolock_0(__int8 *Block, int a2)
{
  unsigned int integer_difference;
  __int8 *cached_block;
  __int8 *returned_pointer;
  __int8 *record_pointer;
  __int64 *copy_environment_char_result;
  __int8 table_value;
  int integer_difference_2;
  __int64 loaded_word;
  signed __int64 integer_difference_3;
  __int64 *buffer_cursor;
  __int64 element_index;
  __int64 recalloc_base_result;
  unsigned __int64 integer_difference_4;
  unsigned __int64 integer_sum;
  int integer_difference_5;
  __int64 recalloc_base_result_2;
  __int64 element_index_2;
  _BYTE *calloc_base_result;
  _BYTE *saved_calloc_base_result;
  __int64 state_address;

  integer_difference = 0;
  if ( !Block )
  {
    *errno_sr() = 22;
    return -1;
  }
  cached_block = Block;
  returned_pointer = sub_14026CE7C((__int64)Block, 0x3Du);
  record_pointer = returned_pointer;
  if ( !returned_pointer || returned_pointer == Block )
  {
LABEL_51:
    integer_difference = -1;
    *errno_sr() = 22;
    goto LABEL_52;
  }
  copy_environment_char_result = *(__int64 **)&g_144CBEAE0;
  table_value = returned_pointer[1];
  if ( g_144CBEAE0 == g_144CBEAF8 )
  {
    copy_environment_char_result = (__int64 *)copy_environment__char(*(__int64 **)&g_144CBEAE0);
    g_144CBEAE0 = (uint64)(uintptr_t)(copy_environment_char_result);
  }
  if ( copy_environment_char_result )
    goto LABEL_20;
  if ( a2 && g_144CBEAE8 )
  {
    if ( unknown_libname_764() )
    {
      copy_environment_char_result = *(__int64 **)&g_144CBEAE0;
      if ( g_144CBEAE0 == g_144CBEAF8 )
      {
        copy_environment_char_result = (__int64 *)copy_environment__char(*(__int64 **)&g_144CBEAE0);
        g_144CBEAE0 = (uint64)(uintptr_t)(copy_environment_char_result);
      }
      goto LABEL_19;
    }
    goto LABEL_51;
  }
  if ( !table_value )
  {
LABEL_52:
    integer_difference_2 = integer_difference;
    goto LABEL_53;
  }
  g_144CBEAE0 = calloc_base();
  free_base(nullptr);
  copy_environment_char_result = *(__int64 **)&g_144CBEAE0;
  if ( !g_144CBEAE0 )
    goto LABEL_15;
  if ( g_144CBEAE8 )
    goto LABEL_19;
  g_144CBEAE8 = calloc_base();
  free_base(nullptr);
  if ( !g_144CBEAE8 )
  {
LABEL_15:
    integer_difference_2 = -1;
LABEL_53:
    integer_difference = integer_difference_2;
LABEL_54:
    integer_difference_5 = integer_difference;
    goto LABEL_55;
  }
  copy_environment_char_result = *(__int64 **)&g_144CBEAE0;
LABEL_19:
  if ( !copy_environment_char_result )
    goto LABEL_15;
LABEL_20:
  loaded_word = *copy_environment_char_result;
  integer_difference_3 = record_pointer - Block;
  buffer_cursor = copy_environment_char_result;
  while ( loaded_word )
  {
    if ( !(unsigned int)strnicoll_sr((__int64)Block, loaded_word, record_pointer - Block)
      && (*(_BYTE *)(integer_difference_3 + *buffer_cursor) == 61 || !*(_BYTE *)(integer_difference_3 + *buffer_cursor)) )
    {
      element_index = buffer_cursor - copy_environment_char_result;
      goto LABEL_28;
    }
    loaded_word = *++buffer_cursor;
  }
  element_index = -(buffer_cursor - copy_environment_char_result);
LABEL_28:
  if ( element_index >= 0 && *copy_environment_char_result )
  {
    free_base((void *)copy_environment_char_result[element_index]);
    if ( !table_value )
    {
      while ( copy_environment_char_result[element_index] )
      {
        copy_environment_char_result[element_index] = copy_environment_char_result[element_index + 1];
        ++element_index;
      }
      recalloc_base_result = recalloc_base(copy_environment_char_result, element_index, 8);
      free_base(nullptr);
      if ( recalloc_base_result )
        g_144CBEAE0 = recalloc_base_result;
      goto LABEL_43;
    }
    copy_environment_char_result[element_index] = (__int64)Block;
LABEL_42:
    cached_block = nullptr;
LABEL_43:
    if ( a2 )
    {
      element_index_2 = -1;
      do
        ++element_index_2;
      while ( Block[element_index_2] );
      calloc_base_result = (_BYTE *)calloc_base();
      saved_calloc_base_result = calloc_base_result;
      if ( calloc_base_result )
      {
        if ( (unsigned int)strcpy_s_sr(calloc_base_result, element_index_2 + 2, (__int64)Block) )
        {
          crt_invoke_watson();
          __debugbreak();
        }
        state_address = (__int64)&record_pointer[(intptr_t)((uintptr_t)(saved_calloc_base_result) - (uintptr_t)(Block)) + 1];
        *(_BYTE *)(state_address - 1) = 0;
        if ( !(unsigned int)_acrt_SetEnvironmentVariableA(saved_calloc_base_result, (_BYTE *)(state_address & -(__int64)(table_value != 0))) )
        {
          integer_difference = -1;
          *errno_sr() = 42;
        }
      }
      free_base(saved_calloc_base_result);
    }
    goto LABEL_56;
  }
  if ( !table_value )
    goto LABEL_54;
  integer_difference_4 = -element_index;
  integer_sum = integer_difference_4 + 2;
  if ( integer_difference_4 + 2 >= integer_difference_4 && integer_sum < 0x1FFFFFFFFFFFFFFFLL )
  {
    recalloc_base_result_2 = recalloc_base(copy_environment_char_result, integer_sum, 8);
    free_base(nullptr);
    if ( recalloc_base_result_2 )
    {
      *(_QWORD *)(recalloc_base_result_2 + 8 * integer_difference_4) = (uint64)(uintptr_t)(Block);
      *(_QWORD *)(recalloc_base_result_2 + 8 * integer_difference_4 + 8) = 0;
      g_144CBEAE0 = recalloc_base_result_2;
      goto LABEL_42;
    }
  }
  integer_difference_5 = -1;
LABEL_55:
  integer_difference = integer_difference_5;
LABEL_56:
  free_base(cached_block);
  return integer_difference;
}
