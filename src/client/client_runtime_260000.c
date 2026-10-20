#include "shared_client.h"

//----- (0000000140260288) ----------------------------------------------------
__int64            common_set_variable_in_environment_nolock__wchar_t(     __m128i *Block, int a2)
{
  unsigned int integer_difference;
  __m128i *cached_block;
       __m128i *returned_pointer;
       __m128i *packed_vector;
  _QWORD *copy_environment_wchar_t_result;
  __int16 table_value;
  int integer_difference_2;
  __int64 loaded_word;
  __int64 shifted_bits;
  _QWORD *buffer_cursor;
  __int64 element_index;
  __int64 recalloc_base_result;
  unsigned __int64 integer_difference_3;
  unsigned __int64 integer_sum;
  int integer_difference_4;
  __int64 recalloc_base_result_2;
  __int64 element_index_2;
  __int64 integer_sum_2;
  char *calloc_base_result;
  char *saved_calloc_base_result;
  unsigned __int64 state_address;

  integer_difference = 0;
  if ( !Block )
  {
    *errno_sr() = 22;
    return -1;
  }
  cached_block = (__m128i *)Block;
  returned_pointer = sub_14026CEFC(Block, 0x3Du);
  packed_vector = returned_pointer;
  if ( !returned_pointer || returned_pointer == Block )
  {
LABEL_51:
    integer_difference = -1;
    *errno_sr() = 22;
    goto LABEL_52;
  }
  copy_environment_wchar_t_result = *(_QWORD **)&g_144CBEAE8;
  table_value = SR_VEC_PTR_LANES(128, returned_pointer, i16)[1];
  if ( g_144CBEAE8 == g_144CBEAF0 )
  {
    copy_environment_wchar_t_result = (_QWORD *)copy_environment__wchar_t(*(__int64 **)&g_144CBEAE8);
    g_144CBEAE8 = (uint64)(uintptr_t)(copy_environment_wchar_t_result);
  }
  if ( copy_environment_wchar_t_result )
    goto LABEL_20;
  if ( a2 && g_144CBEAE0 )
  {
    if ( unknown_libname_765() )
    {
      copy_environment_wchar_t_result = *(_QWORD **)&g_144CBEAE8;
      if ( g_144CBEAE8 == g_144CBEAF0 )
      {
        copy_environment_wchar_t_result = (_QWORD *)copy_environment__wchar_t(*(__int64 **)&g_144CBEAE8);
        g_144CBEAE8 = (uint64)(uintptr_t)(copy_environment_wchar_t_result);
      }
LABEL_19:
      if ( copy_environment_wchar_t_result )
        goto LABEL_20;
      goto LABEL_16;
    }
    goto LABEL_51;
  }
  if ( !table_value )
  {
LABEL_52:
    integer_difference_2 = integer_difference;
    goto LABEL_53;
  }
  if ( g_144CBEAE0 )
    goto LABEL_18;
  g_144CBEAE0 = calloc_base();
  free_base(nullptr);
  if ( !g_144CBEAE0 )
  {
LABEL_16:
    integer_difference_2 = -1;
LABEL_53:
    integer_difference = integer_difference_2;
LABEL_54:
    integer_difference_4 = integer_difference;
    goto LABEL_55;
  }
  copy_environment_wchar_t_result = *(_QWORD **)&g_144CBEAE8;
  if ( !g_144CBEAE8 )
  {
LABEL_18:
    g_144CBEAE8 = calloc_base();
    free_base(nullptr);
    copy_environment_wchar_t_result = *(_QWORD **)&g_144CBEAE8;
    goto LABEL_19;
  }
LABEL_20:
  loaded_word = *copy_environment_wchar_t_result;
  shifted_bits = ((char *)packed_vector - (char *)Block) >> 1;
  buffer_cursor = copy_environment_wchar_t_result;
  while ( loaded_word )
  {
    if ( !(unsigned int)wcsnicoll(Block, loaded_word, shifted_bits) && (*(_WORD *)(*buffer_cursor + 2 * shifted_bits) == 61 || !*(_WORD *)(*buffer_cursor + 2 * shifted_bits)) )
    {
      element_index = buffer_cursor - copy_environment_wchar_t_result;
      goto LABEL_28;
    }
    loaded_word = *++buffer_cursor;
  }
  element_index = -(buffer_cursor - copy_environment_wchar_t_result);
LABEL_28:
  if ( element_index >= 0 && *copy_environment_wchar_t_result )
  {
    free_base((void *)copy_environment_wchar_t_result[element_index]);
    if ( !table_value )
    {
      while ( copy_environment_wchar_t_result[element_index] )
      {
        copy_environment_wchar_t_result[element_index] = copy_environment_wchar_t_result[element_index + 1];
        ++element_index;
      }
      recalloc_base_result = recalloc_base(copy_environment_wchar_t_result, element_index, 8);
      free_base(nullptr);
      if ( recalloc_base_result )
        g_144CBEAE8 = recalloc_base_result;
      goto LABEL_43;
    }
    copy_environment_wchar_t_result[element_index] = (uint64)(uintptr_t)(Block);
LABEL_42:
    cached_block = nullptr;
LABEL_43:
    if ( a2 )
    {
      element_index_2 = -1;
      do
        ++element_index_2;
      while ( SR_VEC_PTR_LANES(128, Block, i16)[element_index_2] );
      integer_sum_2 = element_index_2 + 2;
      calloc_base_result = (char *)calloc_base();
      saved_calloc_base_result = calloc_base_result;
      if ( calloc_base_result )
      {
        if ( (unsigned int)sub_140259444(calloc_base_result, integer_sum_2, (__int64)Block) )
        {
          crt_invoke_watson();
          do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
        }
        state_address = (unsigned __int64)&saved_calloc_base_result[2 * shifted_bits + 2];
        *(_WORD *)(state_address - 2) = 0;
        if ( !(unsigned int)((__int64 (           *)(char *, unsigned __int64))SetEnvironmentVariableW)(
                              saved_calloc_base_result,
                              state_address & -(__int64)(table_value != 0)) )
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
  integer_difference_3 = -element_index;
  integer_sum = integer_difference_3 + 2;
  if ( integer_difference_3 + 2 >= integer_difference_3 && integer_sum < 0x1FFFFFFFFFFFFFFFLL )
  {
    recalloc_base_result_2 = recalloc_base(copy_environment_wchar_t_result, integer_sum, 8);
    free_base(nullptr);
    if ( recalloc_base_result_2 )
    {
      *(_QWORD *)(recalloc_base_result_2 + 8 * integer_difference_3) = (uint64)(uintptr_t)(Block);
      *(_QWORD *)(recalloc_base_result_2 + 8 * integer_difference_3 + 8) = 0;
      g_144CBEAE8 = recalloc_base_result_2;
      goto LABEL_42;
    }
  }
  integer_difference_4 = -1;
LABEL_55:
  integer_difference = integer_difference_4;
LABEL_56:
  free_base(cached_block);
  return integer_difference;
}

// 1402605A4: control flows out of bounds to 1402605A9
// 14026E148: invalid function type 'BOOL (__stdcall *SetEnvironmentVariableW)(LPCWSTR lpName, LPCWSTR lpValue)' has been ignored

//----- (00000001402605AC) ----------------------------------------------------
__int64            copy_environment__char(__int64 *a1)
{
  __int64 *buffer_cursor;
  __int64 iteration_count;
  __int64 *i;
  __int64 calloc_base_result;
  __int64 loaded_word;
  __int64 integer_difference;
  __int64 iteration_count_2;
  _BYTE *loaded_record_pointer;

  buffer_cursor = a1;
  if ( !a1 )
    return 0;
  iteration_count = 0;
  for ( i = buffer_cursor; *i; ++i )
    ++iteration_count;
  calloc_base_result = calloc_base();
  if ( !calloc_base_result )
LABEL_15:
    abort();
  loaded_word = *buffer_cursor;
  if ( *buffer_cursor )
  {
    integer_difference = calloc_base_result - (_QWORD)buffer_cursor;
    do
    {
      iteration_count_2 = -1;
      do
        ++iteration_count_2;
      while ( *(_BYTE *)(loaded_word + iteration_count_2) );
      *(__int64 *)((char *)buffer_cursor + integer_difference) = calloc_base();
      free_base(nullptr);
      loaded_record_pointer = *(_BYTE **)((char *)buffer_cursor + integer_difference);
      if ( !loaded_record_pointer )
        goto LABEL_15;
      if ( (unsigned int)strcpy_s_sr(loaded_record_pointer, iteration_count_2 + 1, *buffer_cursor) )
      {
        crt_invoke_watson();
        __debugbreak();
      }
      loaded_word = *++buffer_cursor;
    }
    while ( *buffer_cursor );
  }
  free_base(nullptr);
  return calloc_base_result;
}

//----- (0000000140260694) ----------------------------------------------------
__int64            copy_environment__wchar_t(__int64 *a1)
{
  __int64 *buffer_cursor;
  __int64 iteration_count;
  __int64 *i;
  __int64 calloc_base_result;
  __int64 loaded_word;
  __int64 integer_difference;
  __int64 iteration_count_2;
  _WORD *loaded_record_pointer;

  buffer_cursor = a1;
  if ( !a1 )
    return 0;
  iteration_count = 0;
  for ( i = buffer_cursor; *i; ++i )
    ++iteration_count;
  calloc_base_result = calloc_base();
  if ( !calloc_base_result )
LABEL_15:
    abort();
  loaded_word = *buffer_cursor;
  if ( *buffer_cursor )
  {
    integer_difference = calloc_base_result - (_QWORD)buffer_cursor;
    do
    {
      iteration_count_2 = -1;
      do
        ++iteration_count_2;
      while ( *(_WORD *)(loaded_word + 2 * iteration_count_2) );
      *(__int64 *)((char *)buffer_cursor + integer_difference) = calloc_base();
      free_base(nullptr);
      loaded_record_pointer = *(_WORD **)((char *)buffer_cursor + integer_difference);
      if ( !loaded_record_pointer )
        goto LABEL_15;
      if ( (unsigned int)sub_140259444(loaded_record_pointer, iteration_count_2 + 1, *buffer_cursor) )
      {
        crt_invoke_watson();
        __debugbreak();
      }
      loaded_word = *++buffer_cursor;
    }
    while ( *buffer_cursor );
  }
  free_base(nullptr);
  return calloc_base_result;
}

//----- (0000000140260784) ----------------------------------------------------
void sub_140260784()
{
  if ( g_144CBEAE0 == g_144CBEAF8 )
    g_144CBEAE0 = copy_environment__char(*(__int64 **)&g_144CBEAE0);
}

//----- (00000001402607AC) ----------------------------------------------------
void sub_1402607AC()
{
  if ( g_144CBEAE8 == g_144CBEAF0 )
    g_144CBEAE8 = copy_environment__wchar_t(*(__int64 **)&g_144CBEAE8);
}

//----- (00000001402607D4) ----------------------------------------------------
__int64            find_in_environment_nolock__char(__int64 a1, __int64 a2)
{
  __int64 state_word;
  __int64 *buffer_cursor;
  __int64 i;

  state_word = g_144CBEAE0;
  buffer_cursor = *(__int64 **)&g_144CBEAE0;
  for ( i = **(_QWORD **)&g_144CBEAE0; i; i = *buffer_cursor )
  {
    if ( !(unsigned int)strnicoll_sr(a1, i, a2) && (*(_BYTE *)(a2 + *buffer_cursor) == 61 || !*(_BYTE *)(a2 + *buffer_cursor)) )
      return ((__int64)buffer_cursor - state_word) >> 3;
    ++buffer_cursor;
  }
  return -(((__int64)buffer_cursor - state_word) >> 3);
}

//----- (0000000140260858) ----------------------------------------------------
__int64            find_in_environment_nolock__wchar_t(__int64 a1, __int64 a2)
{
  __int64 state_word;
  __int64 *buffer_cursor;
  __int64 i;

  state_word = g_144CBEAE8;
  buffer_cursor = *(__int64 **)&g_144CBEAE8;
  for ( i = **(_QWORD **)&g_144CBEAE8; i; i = *buffer_cursor )
  {
    if ( !(unsigned int)wcsnicoll(a1, i, a2) && (*(_WORD *)(*buffer_cursor + 2 * a2) == 61 || !*(_WORD *)(*buffer_cursor + 2 * a2)) )
      return ((__int64)buffer_cursor - state_word) >> 3;
    ++buffer_cursor;
  }
  return -(((__int64)buffer_cursor - state_word) >> 3);
}

//----- (00000001402609C0) ----------------------------------------------------
// attributes: thunk
__int64            _dcrt_set_variable_in_narrow_environment_nolock_sr(__int8 *Block, int a2)
{
  return _dcrt_set_variable_in_narrow_environment_nolock_0(Block, a2);
}

//----- (00000001402609C8) ----------------------------------------------------
// attributes: thunk
__int64            common_set_variable_in_environment_nolock__wchar_t_dup2(     __m128i *Block, int a2)
{
  return common_set_variable_in_environment_nolock__wchar_t(Block, a2);
}

//----- (00000001402609D8) ----------------------------------------------------
__int64            recalloc_base(void *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 msize_result;
  unsigned __int64 scaled_index;
  __int64 realloc_base_result;
  __int64 unused_written_slot;

  if ( a2 && 0xFFFFFFFFFFFFFFE0uLL / a2 < a3 )
  {
    *errno_sr() = 12;
    return 0;
  }
  else
  {
    if ( a1 )
      msize_result = msize(a1);
    else
      msize_result = 0;
    scaled_index = a3 * a2;
    realloc_base_result = realloc_base(a1, scaled_index);
    unused_written_slot = realloc_base_result;
    if ( realloc_base_result )
    {
      if ( msize_result < scaled_index )
        crt_memset((void *)(uintptr_t)((_WORD *)(realloc_base_result + msize_result)), 0, scaled_index - msize_result);
    }
    return unused_written_slot;
  }
}

// 1402609D8: invalid function type 'void *__cdecl recalloc_base(void *Block, #66 Count, #66 Size)' has been ignored

//----- (0000000140260A78) ----------------------------------------------------
bool sub_140260A78()
{
  g_144CBFA48 = ((__int64 (*)(void))GetProcessHeap)();
  return g_144CBFA48 != 0;
}

// 14026E048: invalid function type 'HANDLE (__stdcall *GetProcessHeap)()' has been ignored

//----- (0000000140260AA8) ----------------------------------------------------
char            sub_140260AA8(unsigned __int8 (**a1)(void), unsigned __int8 (**a2)(void))
{
  unsigned __int8 (**callback_function)(void);
  unsigned __int8 (**callback_function_2)(void);

  if ( a1 == a2 )
    return 1;
  callback_function = a1;
  do
  {
    if ( *callback_function && !(*callback_function)() )
      break;
    callback_function += 2;
  }
  while ( callback_function != a2 );
  if ( callback_function == a2 )
    return 1;
  if ( callback_function != a1 )
  {
    callback_function_2 = callback_function - 1;
    do
    {
      if ( *(callback_function_2 - 1) )
      {
        if ( *callback_function_2 )
          ((void (           *)(_QWORD))*callback_function_2)(0);
      }
      callback_function_2 -= 2;
    }
    while ( callback_function_2 + 1 != a1 );
  }
  return 0;
}

//----- (0000000140260B28) ----------------------------------------------------
char            sub_140260B28(__int64 a1, __int64 a2)
{
  __int64 i;
  void (           *callback_function)(_QWORD);

  for ( i = a2; i != a1; i -= 16 )
  {
    callback_function = *(void (           **)(_QWORD))(i - 8);
    if ( callback_function )
      callback_function(0);
  }
  return 1;
}

//----- (0000000140260BB0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char *           unknown_libname_918(char *a1, unsigned __int64 a2)
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

//----- (0000000140260BDC) ----------------------------------------------------
void            sub_140260BDC(__int64 a1)
{
  g_144CBFA50 = a1;
}

//----- (0000000140260BE4) ----------------------------------------------------
_BOOL8            callnewh(__int64 a1)
{
  unsigned int (           *new_handler)(__int64);

  new_handler = (unsigned int (           *)(__int64))query_new_handler();
  return new_handler && new_handler(a1);
}

// 140260BE4: invalid function type 'int __cdecl callnewh(#66 Size)' has been ignored

//----- (0000000140260C14) ----------------------------------------------------
__int64 query_new_handler()
{
  __int64 unused_written_slot;

  crt_lock(0);
  unused_written_slot = __ROR8__(g_144CBFA50 ^ _security_cookie, _security_cookie & 0x3F);
  crt_unlock(0);
  return unused_written_slot;
}

// 140260C14: invalid function type '_PNH __cdecl query_new_handler()' has been ignored

//----- (0000000140260C48) ----------------------------------------------------
__int64            set_new_handler(__int64 a1)
{
  __int64 unused_written_slot;

  crt_lock(0);
  unused_written_slot = __ROR8__(g_144CBFA50 ^ _security_cookie, _security_cookie & 0x3F);
  g_144CBFA50 = _security_cookie ^ __ROR8__(a1, 64 - (_security_cookie & 0x3Fu));
  crt_unlock(0);
  return unused_written_slot;
}

// 140260C48: invalid function type '_PNH __cdecl set_new_handler(_PNH NewHandler)' has been ignored

//----- (0000000140260CA4) ----------------------------------------------------
__int64            common_tcsncpy_s__wchar_t(_WORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int *unused_written_slot;
  unsigned int selection_code;
  __int64 integer_difference;
  _WORD *buffer_cursor;
  __int64 remaining_count;
  __int64 remaining_count_2;
  __int16 loaded_word;
  __int16 loaded_word_2;

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
      loaded_word = *(_WORD *)((char *)buffer_cursor + integer_difference);
      *buffer_cursor++ = loaded_word;
      if ( !loaded_word )
        break;
      --remaining_count;
    }
    while ( remaining_count );
  }
  else
  {
    do
    {
      loaded_word_2 = *(_WORD *)((char *)buffer_cursor + integer_difference);
      *buffer_cursor++ = loaded_word_2;
      if ( !loaded_word_2 )
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

//----- (0000000140260D80) ----------------------------------------------------
__int64            sub_140260D80(_WORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int unused_written_slot;
  int *unused_written_slot_2;
  unsigned int selection_code;
  __int64 integer_difference;
  _WORD *buffer_cursor;
  __int64 remaining_count;
  __int64 remaining_count_2;
  __int16 loaded_word;
  __int16 loaded_word_2;

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
        loaded_word = *(_WORD *)((char *)buffer_cursor + integer_difference);
        *buffer_cursor++ = loaded_word;
        if ( !loaded_word )
          break;
        --remaining_count;
      }
      while ( remaining_count );
    }
    else
    {
      do
      {
        loaded_word_2 = *(_WORD *)((char *)buffer_cursor + integer_difference);
        *buffer_cursor++ = loaded_word_2;
        if ( !loaded_word_2 )
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

//----- (0000000140260E74) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1043(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (0000000140260EAC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1044(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (0000000140260EC8) ----------------------------------------------------
__int64 sub_140260EC8()
{
  __int64 allocated_buffer;
  __int64 unused_written_slot;
  __int64 saved_allocated_buffer;
  __int64 integer_sum;
  __int64 running_total;
  _BYTE *buffer_cursor;
  unsigned int iteration_count;

  allocated_buffer = sr_directory_calloc(64, 72);
  unused_written_slot = 0;
  saved_allocated_buffer = allocated_buffer;
  if ( allocated_buffer )
  {
    integer_sum = allocated_buffer + 4608;
    running_total = allocated_buffer + 48;
    do
    {
      _acrt_InitializeCriticalSectionEx(running_total - 48, 0xFA0u, 0);
      *(_QWORD *)(running_total - 8) = -1;
      buffer_cursor = (_BYTE *)(running_total + 14);
      *(_QWORD *)running_total = 0;
      iteration_count = 0;
      *(_DWORD *)(running_total + 8) = 168427520;
      *(_BYTE *)(running_total + 12) = 10;
      *(_BYTE *)(running_total + 13) &= 0xF8u;
      do
      {
        *buffer_cursor = 0;
        ++iteration_count;
        ++buffer_cursor;
      }
      while ( iteration_count < 5 );
      running_total += 72;
    }
    while ( running_total - 48 != integer_sum );
    unused_written_slot = saved_allocated_buffer;
  }
  free_base(nullptr);
  return unused_written_slot;
}

//----- (0000000140260F70) ----------------------------------------------------
void            sub_140260F70(char *Block)
{
  char *byte_cursor;
  char *cached_block;

  if ( Block )
  {
    byte_cursor = Block + 4608;
    cached_block = Block;
    do
    {
      ((void (           *)(char *))DeleteCriticalSection)(cached_block);
      cached_block += 72;
    }
    while ( cached_block != byte_cursor );
    free_base(Block);
  }
}

// 14026E240: invalid function type 'void (__stdcall *DeleteCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored

//----- (0000000140260FC0) ----------------------------------------------------
__int64            sub_140260FC0(unsigned int a1)
{
  unsigned int unused_written_slot;
  __int64 element_index;
  signed int state_word;
  __int64 call_result;

  if ( a1 < 0x2000 )
  {
    unused_written_slot = 0;
    crt_lock(7);
    element_index = 0;
    state_word = g_144CBF750;
    while ( (int)a1 >= state_word )
    {
      if ( !*(_QWORD *)&dword_140404A6C[2 * element_index + 19065401] )
      {
        call_result = sub_140260EC8();
        *(_QWORD *)&dword_140404A6C[2 * element_index + 19065401] = call_result;
        if ( !call_result )
        {
          unused_written_slot = 12;
          break;
        }
        state_word = g_144CBF750 + 64;
        g_144CBF750 += 64;
      }
      ++element_index;
    }
    crt_unlock(7);
    return unused_written_slot;
  }
  else
  {
    *errno_sr() = 9;
    crt_invalid_parameter_noinfo();
    return 9;
  }
}

//----- (0000000140261068) ----------------------------------------------------
__int64            sub_140261068(int a1)
{
  return ((__int64 (           *)(__int64))EnterCriticalSection)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)a1 >> 6)
                                                                                           + 19065401] + 72LL * (a1 & 0x3F));
}

// 14026E250: invalid function type 'void (__stdcall *EnterCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored

//----- (0000000140261090) ----------------------------------------------------
__int64            sub_140261090(int a1, __int64 a2)
{
  __int64 shifted_bits;
  __int64 masked_bits;
  int integer_difference;
  __int64 selection_code;

  if ( a1 >= 0 && a1 < g_144CBF750 )
  {
    shifted_bits = (__int64)a1 >> 6;
    masked_bits = 9LL * (a1 & 0x3F);
    if ( *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 72LL * (a1 & 0x3F) + 40) == -1 )
    {
      if ( (unsigned int)sub_14024774C() == 1 )
      {
        if ( !a1 )
        {
          selection_code = 4294967286LL;
          goto LABEL_11;
        }
        integer_difference = a1 - 1;
        if ( !integer_difference )
        {
          selection_code = 4294967285LL;
          goto LABEL_11;
        }
        if ( integer_difference == 1 )
        {
          selection_code = 4294967284LL;
LABEL_11:
          ((void (           *)(__int64, __int64))SetStdHandle)(selection_code, a2);
        }
      }
      *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 8 * masked_bits + 40) = a2;
      return 0;
    }
  }
  *errno_sr() = 9;
  *(_DWORD *)crt_doserrno() = 0;
  return 0xFFFFFFFFLL;
}

// 14026E040: invalid function type 'BOOL (__stdcall *SetStdHandle)(DWORD nStdHandle, HANDLE hHandle)' has been ignored

//----- (0000000140261150) ----------------------------------------------------
__int64            sub_140261150(int a1)
{
  return ((__int64 (           *)(__int64))LeaveCriticalSection)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)a1 >> 6)
                                                                                           + 19065401] + 72LL * (a1 & 0x3F));
}

// 14026E248: invalid function type 'void (__stdcall *LeaveCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored

//----- (0000000140261178) ----------------------------------------------------
__int64 alloc_osfhnd()
{
  unsigned int unused_written_slot;
  int i;
  __int64 masked_bits;
  __int64 call_result;
  int shifted_bits;
  __int64 j;
  int shifted_bits_2;
  __int64 shifted_bits_3;
  __int64 masked_bits_2;

  crt_lock(7);
  unused_written_slot = -1;
  for ( i = 0; i < 128; ++i )
  {
    masked_bits = *(_QWORD *)&dword_140404A6C[2 * i + 19065401];
    if ( !masked_bits )
    {
      call_result = sub_140260EC8();
      *(_QWORD *)&dword_140404A6C[2 * i + 19065401] = call_result;
      if ( call_result )
      {
        g_144CBF750 += 64;
        shifted_bits = i << 6;
        sub_140261068(shifted_bits);
        *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)shifted_bits >> 6) + 19065401] + 56LL) = 1;
        unused_written_slot = shifted_bits;
      }
      break;
    }
    for ( j = *(_QWORD *)&dword_140404A6C[2 * i + 19065401]; j != masked_bits + 4608; j += 72 )
    {
      if ( (*(_BYTE *)(j + 56) & 1) == 0 )
      {
        ((void (           *)(__int64))EnterCriticalSection)(j);
        if ( (*(_BYTE *)(j + 56) & 1) == 0 )
        {
          shifted_bits_2 = (i << 6) + ((int)j - (int)masked_bits) / 72;
          shifted_bits_3 = (__int64)shifted_bits_2 >> 6;
          masked_bits_2 = 9LL * (shifted_bits_2 & 0x3F);
          *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits_3 + 19065401] + 8 * masked_bits_2 + 56) = 1;
          *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits_3 + 19065401] + 8 * masked_bits_2 + 40) = -1;
          unused_written_slot = shifted_bits_2;
          goto LABEL_14;
        }
        ((void (           *)(__int64))LeaveCriticalSection)(j);
      }
    }
  }
LABEL_14:
  crt_unlock(7);
  return unused_written_slot;
}

// 14026E250: invalid function type 'void (__stdcall *EnterCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored
// 14026E248: invalid function type 'void (__stdcall *LeaveCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored

//----- (00000001402612B8) ----------------------------------------------------
__int64            free_osfhnd(int a1)
{
  __int64 shifted_bits;
  __int64 masked_bits;
  __int64 masked_bits_2;
  int integer_difference;
  __int64 selection_code;

  if ( a1 >= 0 && a1 < g_144CBF750 )
  {
    shifted_bits = (__int64)a1 >> 6;
    masked_bits = 9LL * (a1 & 0x3F);
    masked_bits_2 = *(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401];
    if ( (*(_BYTE *)(masked_bits_2 + 72LL * (a1 & 0x3F) + 56) & 1) != 0 && *(_QWORD *)(masked_bits_2 + 72LL * (a1 & 0x3F) + 40) != -1 )
    {
      if ( (unsigned int)sub_14024774C() == 1 )
      {
        if ( !a1 )
        {
          selection_code = 4294967286LL;
          goto LABEL_12;
        }
        integer_difference = a1 - 1;
        if ( !integer_difference )
        {
          selection_code = 4294967285LL;
          goto LABEL_12;
        }
        if ( integer_difference == 1 )
        {
          selection_code = 4294967284LL;
LABEL_12:
          ((void (           *)(__int64, _QWORD))SetStdHandle)(selection_code, 0);
        }
      }
      *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 8 * masked_bits + 40) = -1;
      return 0;
    }
  }
  *errno_sr() = 9;
  *(_DWORD *)crt_doserrno() = 0;
  return 0xFFFFFFFFLL;
}

// 14026E040: invalid function type 'BOOL (__stdcall *SetStdHandle)(DWORD nStdHandle, HANDLE hHandle)' has been ignored

//----- (0000000140261374) ----------------------------------------------------
__int64            get_osfhandle(int a1)
{
  __int64 input_value;
  __int64 masked_bits;
  __int64 shifted_bits;

  if ( a1 == -2 )
  {
    *(_DWORD *)crt_doserrno() = 0;
    *errno_sr() = 9;
  }
  else
  {
    if ( a1 >= 0 && a1 < g_144CBF750 )
    {
      input_value = a1;
      masked_bits = a1 & 0x3F;
      shifted_bits = *(_QWORD *)&dword_140404A6C[2 * (input_value >> 6) + 19065401];
      if ( (*(_BYTE *)(shifted_bits + 72 * masked_bits + 56) & 1) != 0 )
        return *(_QWORD *)(shifted_bits + 72 * masked_bits + 40);
    }
    *(_DWORD *)crt_doserrno() = 0;
    *errno_sr() = 9;
    crt_invalid_parameter_noinfo();
  }
  return -1;
}

// 140261374: invalid function type 'intptr_t __cdecl get_osfhandle(int FileHandle)' has been ignored

//----- (00000001402613EC) ----------------------------------------------------
__int64            open_osfhandle(__int64 a1, __int64 a2)
{
  __int64 masked_bits;
  __int64 masked_bits_2;
  char option_flags;
  int int64_result;
  int int64_result_2;
  int alloc_osfhnd_result;
  __int64 saved_alloc_osfhnd_result;
  __int64 masked_bits_3;

  masked_bits = (unsigned __int8)(4 * (a2 & 8)) | 0x80u;
  masked_bits_2 = a2 & 0x4000;
  if ( (a2 & 0x4000) == 0 )
    masked_bits = (unsigned __int8)(4 * (a2 & 8));
  option_flags = masked_bits | 0x10;
  LOBYTE(a2) = a2 & 0x80;
  if ( !(_BYTE)a2 )
    option_flags = masked_bits;
  int64_result = ((__int64 (           *)(__int64, __int64, __int64, __int64))GetFileType)(a1, a2, masked_bits, masked_bits_2);
  switch ( int64_result )
  {
    case 0:
      int64_result_2 = ((__int64 (*)(void))GetLastError)();
      crt_errno_map_os_error(int64_result_2);
      return 0xFFFFFFFFLL;
    case 2:
      option_flags |= 0x40u;
      break;
    case 3:
      option_flags |= 8u;
      break;
  }
  alloc_osfhnd_result = alloc_osfhnd();
  saved_alloc_osfhnd_result = alloc_osfhnd_result;
  if ( alloc_osfhnd_result == -1 )
  {
    *errno_sr() = 24;
    *(_DWORD *)crt_doserrno() = 0;
    return 0xFFFFFFFFLL;
  }
  sub_140261090(alloc_osfhnd_result, a1);
  masked_bits_3 = 9 * (saved_alloc_osfhnd_result & 0x3F);
  *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (saved_alloc_osfhnd_result >> 6) + 19065401] + 8 * masked_bits_3 + 56) = option_flags | 1;
  *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (saved_alloc_osfhnd_result >> 6) + 19065401] + 8 * masked_bits_3 + 57) = 0;
  *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (saved_alloc_osfhnd_result >> 6) + 19065401] + 8 * masked_bits_3 + 61) &= ~1u;
  sub_140261150(saved_alloc_osfhnd_result);
  return (unsigned int)saved_alloc_osfhnd_result;
}

// 1402613EC: invalid function type 'int __cdecl open_osfhandle(intptr_t OSFileHandle, int Flags)' has been ignored
// 14026E180: invalid function type 'DWORD (__stdcall *GetFileType)(HANDLE hFile)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (0000000140261508) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1045(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (000000014026152C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1046(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (0000000140261548) ----------------------------------------------------
void            sub_140261548(_QWORD *a1)
{
  void *table_value;
  void *table_value_2;
  void *table_value_3;
  void *table_value_4;
  void *table_value_5;
  void *table_value_6;
  void *table_value_7;
  void *table_value_8;
  void *table_value_9;
  void *table_value_10;
  void *table_value_11;
  void *table_value_12;
  void *table_value_13;

  if ( a1 )
  {
    table_value = (void *)a1[3];
    if ( table_value != off_140302AF8 )
      free_base(table_value);
    table_value_2 = (void *)a1[4];
    if ( table_value_2 != off_140302B00 )
      free_base(table_value_2);
    table_value_3 = (void *)a1[5];
    if ( table_value_3 != off_140302B08 )
      free_base(table_value_3);
    table_value_4 = (void *)a1[6];
    if ( table_value_4 != off_140302B10 )
      free_base(table_value_4);
    table_value_5 = (void *)a1[7];
    if ( table_value_5 != (void *)off_140302B18 )
      free_base(table_value_5);
    table_value_6 = (void *)a1[8];
    if ( table_value_6 != off_140302B20 )
      free_base(table_value_6);
    table_value_7 = (void *)a1[9];
    if ( table_value_7 != off_140302B28 )
      free_base(table_value_7);
    table_value_8 = (void *)a1[13];
    if ( table_value_8 != off_140302B48 )
      free_base(table_value_8);
    table_value_9 = (void *)a1[14];
    if ( table_value_9 != off_140302B50 )
      free_base(table_value_9);
    table_value_10 = (void *)a1[15];
    if ( table_value_10 != off_140302B58 )
      free_base(table_value_10);
    table_value_11 = (void *)a1[16];
    if ( table_value_11 != off_140302B60 )
      free_base(table_value_11);
    table_value_12 = (void *)a1[17];
    if ( table_value_12 != off_140302B68 )
      free_base(table_value_12);
    table_value_13 = (void *)a1[18];
    if ( table_value_13 != off_140302B70 )
      free_base(table_value_13);
  }
}

//----- (0000000140261654) ----------------------------------------------------
__int64            sub_140261654(__int64 a1)
{
  _DWORD *calloc_base_result;
  _DWORD *calloc_base_result_2;
  _OWORD *calloc_base_result_3;
  void *saved_calloc_base_result;
       sr_anon_49 *loaded_record_pointer;
  int LocaleInfoA;
  int acrt_getlocaleinfoa_sr_result;
  int acrt_getlocaleinfoa_sr_result_2;
  char **byte_cursor;
  int acrt_getlocaleinfoa_sr_result_3;
  int acrt_getlocaleinfoa_sr_result_4;
  int acrt_getlocaleinfoa_sr_result_5;
  int acrt_getlocaleinfoa_sr_result_6;
  int acrt_getlocaleinfoa_sr_result_7;
  int acrt_getlocaleinfoa_sr_result_8;
  int acrt_getlocaleinfoa_sr_result_9;
  int acrt_getlocaleinfoa_sr_result_10;
  int acrt_getlocaleinfoa_sr_result_11;
  int acrt_getlocaleinfoa_sr_result_12;
  int acrt_getlocaleinfoa_sr_result_13;
  int acrt_getlocaleinfoa_sr_result_14;
  int acrt_getlocaleinfoa_sr_result_15;
  int acrt_getlocaleinfoa_sr_result_16;
  int acrt_getlocaleinfoa_sr_result_17;
  int acrt_getlocaleinfoa_sr_result_18;
  int acrt_getlocaleinfoa_sr_result_19;
  char *text_cursor;
  char input_byte;
  char *text_cursor_2;
  char table_value;
  volatile signed __int32 *loaded_record_pointer_2;
  volatile signed __int32 *loaded_record_pointer_3;
  _QWORD scratch_buffer[2];

  calloc_base_result = nullptr;
  scratch_buffer[0] = a1;
  scratch_buffer[1] = 0;
  if ( *(_QWORD *)(a1 + 320) || *(_QWORD *)(a1 + 328) )
  {
    calloc_base_result_3 = (_OWORD *)calloc_base();
    free_base(nullptr);
    if ( !calloc_base_result_3 )
      return 1;
    calloc_base_result_2 = (_DWORD *)calloc_base();
    free_base(nullptr);
    if ( !calloc_base_result_2 )
    {
      saved_calloc_base_result = calloc_base_result_3;
LABEL_8:
      free_base(saved_calloc_base_result);
      return 1;
    }
    if ( *(_QWORD *)(a1 + 320) )
    {
      calloc_base_result = (_DWORD *)calloc_base();
      free_base(nullptr);
      if ( !calloc_base_result )
      {
        free_base(calloc_base_result_3);
        saved_calloc_base_result = calloc_base_result_2;
        goto LABEL_8;
      }
      loaded_record_pointer = *(     sr_anon_49 **)(a1 + 320);
      LocaleInfoA = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)scratch_buffer, 1, loaded_record_pointer, 0x15u, (__int64 *)calloc_base_result_3 + 3);
      acrt_getlocaleinfoa_sr_result = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)scratch_buffer, 1, loaded_record_pointer, 0x14u, (__int64 *)calloc_base_result_3 + 4) | LocaleInfoA;
      acrt_getlocaleinfoa_sr_result_2 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)scratch_buffer, 1, loaded_record_pointer, 0x16u, (__int64 *)calloc_base_result_3 + 5) | acrt_getlocaleinfoa_sr_result;
      byte_cursor = (char **)calloc_base_result_3 + 7;
      acrt_getlocaleinfoa_sr_result_3 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)scratch_buffer, 1, loaded_record_pointer, 0x17u, (__int64 *)calloc_base_result_3 + 6) | acrt_getlocaleinfoa_sr_result_2;
      acrt_getlocaleinfoa_sr_result_4 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)scratch_buffer, 1, loaded_record_pointer, 0x18u, (__int64 *)calloc_base_result_3 + 7) | acrt_getlocaleinfoa_sr_result_3;
      acrt_getlocaleinfoa_sr_result_5 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)scratch_buffer, 1, loaded_record_pointer, 0x50u, (__int64 *)calloc_base_result_3 + 8) | acrt_getlocaleinfoa_sr_result_4;
      acrt_getlocaleinfoa_sr_result_6 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)scratch_buffer, 1, loaded_record_pointer, 0x51u, (__int64 *)calloc_base_result_3 + 9) | acrt_getlocaleinfoa_sr_result_5;
      acrt_getlocaleinfoa_sr_result_7 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)scratch_buffer, 0, loaded_record_pointer, 0x1Au, (__int64 *)calloc_base_result_3 + 10) | acrt_getlocaleinfoa_sr_result_6;
      acrt_getlocaleinfoa_sr_result_8 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)scratch_buffer, 0, loaded_record_pointer, 0x19u, (__int64 *)((char *)calloc_base_result_3 + 81)) | acrt_getlocaleinfoa_sr_result_7;
      acrt_getlocaleinfoa_sr_result_9 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)scratch_buffer, 0, loaded_record_pointer, 0x54u, (__int64 *)((char *)calloc_base_result_3 + 82)) | acrt_getlocaleinfoa_sr_result_8;
      acrt_getlocaleinfoa_sr_result_10 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)scratch_buffer, 0, loaded_record_pointer, 0x55u, (__int64 *)((char *)calloc_base_result_3 + 83)) | acrt_getlocaleinfoa_sr_result_9;
      acrt_getlocaleinfoa_sr_result_11 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)scratch_buffer, 0, loaded_record_pointer, 0x56u, (__int64 *)((char *)calloc_base_result_3 + 84)) | acrt_getlocaleinfoa_sr_result_10;
      acrt_getlocaleinfoa_sr_result_12 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)scratch_buffer, 0, loaded_record_pointer, 0x57u, (__int64 *)((char *)calloc_base_result_3 + 85)) | acrt_getlocaleinfoa_sr_result_11;
      acrt_getlocaleinfoa_sr_result_13 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)scratch_buffer, 0, loaded_record_pointer, 0x52u, (__int64 *)((char *)calloc_base_result_3 + 86)) | acrt_getlocaleinfoa_sr_result_12;
      acrt_getlocaleinfoa_sr_result_14 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)scratch_buffer, 0, loaded_record_pointer, 0x53u, (__int64 *)((char *)calloc_base_result_3 + 87)) | acrt_getlocaleinfoa_sr_result_13;
      acrt_getlocaleinfoa_sr_result_15 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)scratch_buffer, 2, loaded_record_pointer, 0x15u, (__int64 *)calloc_base_result_3 + 13) | acrt_getlocaleinfoa_sr_result_14;
      acrt_getlocaleinfoa_sr_result_16 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)scratch_buffer, 2, loaded_record_pointer, 0x14u, (__int64 *)calloc_base_result_3 + 14) | acrt_getlocaleinfoa_sr_result_15;
      acrt_getlocaleinfoa_sr_result_17 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)scratch_buffer, 2, loaded_record_pointer, 0x16u, (__int64 *)calloc_base_result_3 + 15) | acrt_getlocaleinfoa_sr_result_16;
      acrt_getlocaleinfoa_sr_result_18 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)scratch_buffer, 2, loaded_record_pointer, 0x17u, (__int64 *)calloc_base_result_3 + 16) | acrt_getlocaleinfoa_sr_result_17;
      acrt_getlocaleinfoa_sr_result_19 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)scratch_buffer, 2, loaded_record_pointer, 0x50u, (__int64 *)calloc_base_result_3 + 17) | acrt_getlocaleinfoa_sr_result_18;
      if ( acrt_getlocaleinfoa_sr_result_19 | (unsigned int)_acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)scratch_buffer, 2, loaded_record_pointer, 0x51u, (__int64 *)calloc_base_result_3 + 18) )
      {
        sub_140261548(calloc_base_result_3);
        free_base(calloc_base_result_3);
        free_base(calloc_base_result_2);
        free_base(calloc_base_result);
        return 1;
      }
      text_cursor = *byte_cursor;
      input_byte = **byte_cursor;
      if ( input_byte )
      {
        do
        {
          if ( (unsigned __int8)(input_byte - 48) > 9u )
          {
            if ( input_byte == 59 )
            {
              text_cursor_2 = text_cursor;
              do
              {
                table_value = text_cursor_2[1];
                *text_cursor_2++ = table_value;
              }
              while ( table_value );
              goto LABEL_18;
            }
          }
          else
          {
            *text_cursor = input_byte - 48;
          }
          ++text_cursor;
LABEL_18:
          input_byte = *text_cursor;
        }
        while ( *text_cursor );
      }
    }
    else
    {
      *calloc_base_result_3 = *(_OWORD *)&off_140302AE0;
      calloc_base_result_3[1] = *(_OWORD *)&off_140302AF0;
      calloc_base_result_3[2] = *(_OWORD *)&off_140302B00;
      calloc_base_result_3[3] = *(_OWORD *)&off_140302B10;
      calloc_base_result_3[4] = *(_OWORD *)&off_140302B20;
      calloc_base_result_3[5] = unk_140302B30;
      calloc_base_result_3[6] = *(_OWORD *)&off_140302B40;
      calloc_base_result_3[7] = *(_OWORD *)&off_140302B50;
      calloc_base_result_3[8] = *(_OWORD *)&off_140302B60;
      *((_QWORD *)calloc_base_result_3 + 18) = (uint64)(uintptr_t)(off_140302B70);
    }
    *(_QWORD *)calloc_base_result_3 = **(_QWORD **)(a1 + 248);
    *((_QWORD *)calloc_base_result_3 + 1) = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL);
    *((_QWORD *)calloc_base_result_3 + 2) = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL);
    *((_QWORD *)calloc_base_result_3 + 11) = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 88LL);
    *((_QWORD *)calloc_base_result_3 + 12) = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 96LL);
    *calloc_base_result_2 = 1;
    if ( calloc_base_result )
      *calloc_base_result = 1;
    goto LABEL_27;
  }
  calloc_base_result_2 = nullptr;
  calloc_base_result_3 = &off_140302AE0;
LABEL_27:
  loaded_record_pointer_2 = *(volatile signed __int32 **)(a1 + 240);
  if ( loaded_record_pointer_2 )
    _InterlockedDecrement(loaded_record_pointer_2);
  loaded_record_pointer_3 = *(volatile signed __int32 **)(a1 + 224);
  if ( loaded_record_pointer_3 )
  {
    if ( _InterlockedExchangeAdd(loaded_record_pointer_3, 0xFFFFFFFF) == 1 )
    {
      free_base(*(void **)(a1 + 248));
      free_base(*(void **)(a1 + 224));
    }
  }
  *(_QWORD *)(a1 + 240) = (uint64)(uintptr_t)(calloc_base_result);
  *(_QWORD *)(a1 + 224) = (uint64)(uintptr_t)(calloc_base_result_2);
  *(_QWORD *)(a1 + 248) = (uint64)(uintptr_t)(calloc_base_result_3);
  return 0;
}

//----- (0000000140261BBC) ----------------------------------------------------
void            sub_140261BBC(__int64 a1)
{
  void *loaded_word;
  void *loaded_record_pointer;
  void *loaded_record_pointer_2;
  void *loaded_record_pointer_3;
  void *loaded_record_pointer_4;

  if ( a1 )
  {
    loaded_word = *(void **)a1;
    if ( loaded_word != off_140302AE0 )
      free_base(loaded_word);
    loaded_record_pointer = *(void **)(a1 + 8);
    if ( loaded_record_pointer != off_140302AE8 )
      free_base(loaded_record_pointer);
    loaded_record_pointer_2 = *(void **)(a1 + 16);
    if ( loaded_record_pointer_2 != off_140302AF0 )
      free_base(loaded_record_pointer_2);
    loaded_record_pointer_3 = *(void **)(a1 + 88);
    if ( loaded_record_pointer_3 != off_140302B38 )
      free_base(loaded_record_pointer_3);
    loaded_record_pointer_4 = *(void **)(a1 + 96);
    if ( loaded_record_pointer_4 != off_140302B40 )
      free_base(loaded_record_pointer_4);
  }
}

//----- (0000000140261C28) ----------------------------------------------------
__int64            sub_140261C28(__int64 a1)
{
  _DWORD *malloc_base_result;
  __int64 *calloc_base_result;
  __int64 *malloc_base_result_2;
  unsigned int unused_written_slot;
  __int64 loaded_word;
  __int64 *saved_calloc_base_result;
       sr_anon_49 *loaded_record_pointer;
  int LocaleInfoA;
  int acrt_getlocaleinfoa_sr_result;
  int acrt_getlocaleinfoa_sr_result_2;
  int acrt_getlocaleinfoa_sr_result_3;
  _BYTE *buffer_cursor;
  char input_byte;
  _BYTE *buffer_cursor_2;
  char table_value;
  volatile signed __int32 *loaded_record_pointer_2;
  volatile signed __int32 *loaded_record_pointer_3;
  _QWORD scratch_buffer[2];

  scratch_buffer[0] = a1;
  scratch_buffer[1] = 0;
  if ( *(_QWORD *)(a1 + 328) || *(_QWORD *)(a1 + 320) )
  {
    unused_written_slot = 1;
    calloc_base_result = (__int64 *)calloc_base();
    if ( !calloc_base_result )
      return unused_written_slot;
    loaded_word = *(_QWORD *)(a1 + 248);
    *(_OWORD *)calloc_base_result = *(_OWORD *)loaded_word;
    *((_OWORD *)calloc_base_result + 1) = *(_OWORD *)(loaded_word + 16);
    *((_OWORD *)calloc_base_result + 2) = *(_OWORD *)(loaded_word + 32);
    *((_OWORD *)calloc_base_result + 3) = *(_OWORD *)(loaded_word + 48);
    *((_OWORD *)calloc_base_result + 4) = *(_OWORD *)(loaded_word + 64);
    *((_OWORD *)calloc_base_result + 5) = *(_OWORD *)(loaded_word + 80);
    *((_OWORD *)calloc_base_result + 6) = *(_OWORD *)(loaded_word + 96);
    *((_OWORD *)calloc_base_result + 7) = *(_OWORD *)(loaded_word + 112);
    *((_OWORD *)calloc_base_result + 8) = *(_OWORD *)(loaded_word + 128);
    calloc_base_result[18] = *(_QWORD *)(loaded_word + 144);
    malloc_base_result_2 = (__int64 *)malloc_base();
    free_base(nullptr);
    if ( !malloc_base_result_2 )
    {
      saved_calloc_base_result = calloc_base_result;
LABEL_8:
      free_base(saved_calloc_base_result);
      return unused_written_slot;
    }
    *(_DWORD *)malloc_base_result_2 = 0;
    if ( !*(_QWORD *)(a1 + 328) )
    {
      malloc_base_result = nullptr;
      *calloc_base_result = (__int64)off_140302AE0;
      calloc_base_result[1] = (__int64)off_140302AE8;
      calloc_base_result[2] = (__int64)off_140302AF0;
      calloc_base_result[11] = (__int64)off_140302B38;
      calloc_base_result[12] = (__int64)off_140302B40;
LABEL_26:
      *(_DWORD *)malloc_base_result_2 = 1;
      if ( malloc_base_result )
        *malloc_base_result = 1;
      goto LABEL_28;
    }
    malloc_base_result = (_DWORD *)malloc_base();
    free_base(nullptr);
    if ( !malloc_base_result )
    {
      free_base(calloc_base_result);
LABEL_14:
      saved_calloc_base_result = malloc_base_result_2;
      goto LABEL_8;
    }
    *malloc_base_result = 0;
    loaded_record_pointer = *(     sr_anon_49 **)(a1 + 328);
    LocaleInfoA = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)scratch_buffer, 1, loaded_record_pointer, 0xEu, calloc_base_result);
    acrt_getlocaleinfoa_sr_result = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)scratch_buffer, 1, loaded_record_pointer, 0xFu, calloc_base_result + 1) | LocaleInfoA;
    acrt_getlocaleinfoa_sr_result_2 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)scratch_buffer, 1, loaded_record_pointer, 0x10u, calloc_base_result + 2) | acrt_getlocaleinfoa_sr_result;
    acrt_getlocaleinfoa_sr_result_3 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)scratch_buffer, 2, loaded_record_pointer, 0xEu, calloc_base_result + 11) | acrt_getlocaleinfoa_sr_result_2;
    if ( acrt_getlocaleinfoa_sr_result_3 | (unsigned int)_acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)scratch_buffer, 2, loaded_record_pointer, 0xFu, calloc_base_result + 12) )
    {
      sub_140261BBC((__int64)calloc_base_result);
      free_base(calloc_base_result);
      free_base(malloc_base_result);
      unused_written_slot = -1;
      goto LABEL_14;
    }
    buffer_cursor = (_BYTE *)calloc_base_result[2];
    while ( 1 )
    {
      input_byte = *buffer_cursor;
      if ( !*buffer_cursor )
        goto LABEL_26;
      if ( (unsigned __int8)(input_byte - 48) <= 9u )
        break;
      if ( input_byte == 59 )
      {
        buffer_cursor_2 = buffer_cursor;
        do
        {
          table_value = buffer_cursor_2[1];
          *buffer_cursor_2++ = table_value;
        }
        while ( table_value );
      }
      else
      {
LABEL_18:
        ++buffer_cursor;
      }
    }
    *buffer_cursor = input_byte - 48;
    goto LABEL_18;
  }
  malloc_base_result = nullptr;
  calloc_base_result = (__int64 *)&off_140302AE0;
  malloc_base_result_2 = nullptr;
LABEL_28:
  loaded_record_pointer_2 = *(volatile signed __int32 **)(a1 + 232);
  if ( loaded_record_pointer_2 )
    _InterlockedDecrement(loaded_record_pointer_2);
  loaded_record_pointer_3 = *(volatile signed __int32 **)(a1 + 224);
  if ( loaded_record_pointer_3 )
  {
    if ( _InterlockedExchangeAdd(loaded_record_pointer_3, 0xFFFFFFFF) == 1 )
    {
      free_base(*(void **)(a1 + 224));
      free_base(*(void **)(a1 + 248));
    }
  }
  *(_QWORD *)(a1 + 232) = (uint64)(uintptr_t)(malloc_base_result);
  *(_QWORD *)(a1 + 224) = (uint64)(uintptr_t)(malloc_base_result_2);
  *(_QWORD *)(a1 + 248) = (uint64)(uintptr_t)(calloc_base_result);
  return 0;
}

//----- (0000000140261F10) ----------------------------------------------------
char            fix_grouping_0(char *a1)
{
  char result;
  char *text_cursor;
  char *text_cursor_2;
  char table_value;

  result = *a1;
  text_cursor = a1;
  while ( result )
  {
    if ( (unsigned __int8)(result - 48) <= 9u )
    {
      *text_cursor = result - 48;
LABEL_4:
      ++text_cursor;
      goto LABEL_5;
    }
    if ( result != 59 )
      goto LABEL_4;
    text_cursor_2 = text_cursor;
    do
    {
      table_value = text_cursor_2[1];
      *text_cursor_2++ = table_value;
    }
    while ( table_value );
LABEL_5:
    result = *text_cursor;
  }
  return result;
}

//----- (0000000140261F9C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1047(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (0000000140261FC8) ----------------------------------------------------
void            free_crt_array_internal(void **a1, __int64 a2)
{
  __int64 iteration_count;
  void **buffer_cursor;
  __int64 masked_bits;

  iteration_count = 0;
  buffer_cursor = a1;
  masked_bits = a2 & 0x1FFFFFFFFFFFFFFFLL;
  if ( a1 > &a1[a2] )
    masked_bits = 0;
  if ( masked_bits )
  {
    do
    {
      free_base(*buffer_cursor);
      ++iteration_count;
      ++buffer_cursor;
    }
    while ( iteration_count != masked_bits );
  }
}

//----- (0000000140262024) ----------------------------------------------------
struct __crt_lc_time_data *           get_or_create_lc_time_sr(struct __crt_locale_data *     a1)
{
  struct __crt_lc_time_data *calloc_base_result;
  struct __crt_lc_time_data *saved_calloc_base_result;
  struct __crt_lc_time_data *unused_written_slot;

  if ( !*((_QWORD *)a1 + 42) )
    return (struct __crt_lc_time_data *)&off_14028B0E0;
  calloc_base_result = (struct __crt_lc_time_data *)calloc_base();
  saved_calloc_base_result = calloc_base_result;
  if ( calloc_base_result )
  {
    if ( initialize_lc_time_sr(calloc_base_result, a1) )
    {
      *((_DWORD *)saved_calloc_base_result + 87) = 1;
      unused_written_slot = saved_calloc_base_result;
      saved_calloc_base_result = nullptr;
      goto LABEL_7;
    }
    sub_140262400((void **)saved_calloc_base_result);
  }
  unused_written_slot = nullptr;
LABEL_7:
  free_base(saved_calloc_base_result);
  return unused_written_slot;
}

//----- (000000014026209C) ----------------------------------------------------
bool            initialize_lc_time_sr(struct __crt_lc_time_data *     a1, struct __crt_locale_data *     a2)
{
  __m128i *loaded_record_pointer;
  int acrt_getlocaleinfoa_sr_result;
  unsigned int iteration_count;
  __int64 remaining_count;
  __int64 *record_pointer;
  int acrt_getlocaleinfoa_sr_result_2;
  int acrt_getlocaleinfoa_sr_result_3;
  int acrt_getlocaleinfoa_sr_result_4;
  unsigned int iteration_count_2;
  __int64 remaining_count_2;
  __int64 *buffer_cursor;
  int acrt_getlocaleinfoa_sr_result_5;
  int acrt_getlocaleinfoa_sr_result_6;
  int acrt_getlocaleinfoa_sr_result_7;
  int acrt_getlocaleinfoa_sr_result_8;
  int LocaleInfoA;
  int acrt_getlocaleinfoa_sr_result_9;
  int acrt_getlocaleinfoa_sr_result_10;
  int acrt_getlocaleinfoa_sr_result_11;
  int acrt_getlocaleinfoa_sr_result_12;
  int acrt_getlocaleinfoa_sr_result_13;
  int acrt_getlocaleinfoa_sr_result_14;
  int acrt_getlocaleinfoa_sr_result_15;
  int acrt_getlocaleinfoa_sr_result_16;
  __int128 input_value;

  loaded_record_pointer = *((__m128i **)a2 + 42);
  acrt_getlocaleinfoa_sr_result = 0;
  input_value = (unsigned __int64)a2;
  *((_QWORD *)a1 + 87) = (uint64)(uintptr_t)(sub_140248608(loaded_record_pointer));
  iteration_count = 49;
  remaining_count = 7;
  do
  {
    record_pointer = (__int64 *)((char *)a1 + 8 * ((iteration_count - 48) % 7));
    acrt_getlocaleinfoa_sr_result_2 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&input_value, 1, (     sr_anon_49 *)loaded_record_pointer, iteration_count, record_pointer) | acrt_getlocaleinfoa_sr_result;
    acrt_getlocaleinfoa_sr_result_3 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&input_value, 1, (     sr_anon_49 *)loaded_record_pointer, iteration_count - 7, record_pointer + 7) | acrt_getlocaleinfoa_sr_result_2;
    acrt_getlocaleinfoa_sr_result_4 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&input_value, 2, (     sr_anon_49 *)loaded_record_pointer, iteration_count, record_pointer + 44) | acrt_getlocaleinfoa_sr_result_3;
    acrt_getlocaleinfoa_sr_result = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&input_value, 2, (     sr_anon_49 *)loaded_record_pointer, iteration_count - 7, record_pointer + 51) | acrt_getlocaleinfoa_sr_result_4;
    ++iteration_count;
    --remaining_count;
  }
  while ( remaining_count );
  iteration_count_2 = 56;
  remaining_count_2 = 12;
  buffer_cursor = (__int64 *)((char *)a1 + 208);
  do
  {
    acrt_getlocaleinfoa_sr_result_5 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&input_value, 1, (     sr_anon_49 *)loaded_record_pointer, iteration_count_2 + 12, buffer_cursor - 12) | acrt_getlocaleinfoa_sr_result;
    acrt_getlocaleinfoa_sr_result_6 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&input_value, 1, (     sr_anon_49 *)loaded_record_pointer, iteration_count_2, buffer_cursor) | acrt_getlocaleinfoa_sr_result_5;
    acrt_getlocaleinfoa_sr_result_7 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&input_value, 2, (     sr_anon_49 *)loaded_record_pointer, iteration_count_2 + 12, buffer_cursor + 32) | acrt_getlocaleinfoa_sr_result_6;
    acrt_getlocaleinfoa_sr_result = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&input_value, 2, (     sr_anon_49 *)loaded_record_pointer, iteration_count_2, buffer_cursor + 44) | acrt_getlocaleinfoa_sr_result_7;
    ++buffer_cursor;
    ++iteration_count_2;
    --remaining_count_2;
  }
  while ( remaining_count_2 );
  acrt_getlocaleinfoa_sr_result_8 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&input_value, 1, (     sr_anon_49 *)loaded_record_pointer, 0x28u, (__int64 *)a1 + 38) | acrt_getlocaleinfoa_sr_result;
  LocaleInfoA = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&input_value, 1, (     sr_anon_49 *)loaded_record_pointer, 0x29u, (__int64 *)a1 + 39);
  acrt_getlocaleinfoa_sr_result_9 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&input_value, 2, (     sr_anon_49 *)loaded_record_pointer, 0x28u, (__int64 *)a1 + 82) | LocaleInfoA | acrt_getlocaleinfoa_sr_result_8;
  acrt_getlocaleinfoa_sr_result_10 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&input_value, 2, (     sr_anon_49 *)loaded_record_pointer, 0x29u, (__int64 *)a1 + 83) | acrt_getlocaleinfoa_sr_result_9;
  acrt_getlocaleinfoa_sr_result_11 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&input_value, 1, (     sr_anon_49 *)loaded_record_pointer, 0x1Fu, (__int64 *)a1 + 40) | acrt_getlocaleinfoa_sr_result_10;
  acrt_getlocaleinfoa_sr_result_12 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&input_value, 1, (     sr_anon_49 *)loaded_record_pointer, 0x20u, (__int64 *)a1 + 41) | acrt_getlocaleinfoa_sr_result_11;
  acrt_getlocaleinfoa_sr_result_13 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&input_value, 1, (     sr_anon_49 *)loaded_record_pointer, 0x1003u, (__int64 *)a1 + 42) | acrt_getlocaleinfoa_sr_result_12;
  acrt_getlocaleinfoa_sr_result_14 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&input_value, 0, (     sr_anon_49 *)loaded_record_pointer, 0x1009u, (__int64 *)a1 + 43);
  acrt_getlocaleinfoa_sr_result_15 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&input_value, 2, (     sr_anon_49 *)loaded_record_pointer, 0x1Fu, (__int64 *)a1 + 84) | acrt_getlocaleinfoa_sr_result_14 | acrt_getlocaleinfoa_sr_result_13;
  acrt_getlocaleinfoa_sr_result_16 = _acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&input_value, 2, (     sr_anon_49 *)loaded_record_pointer, 0x20u, (__int64 *)a1 + 85) | acrt_getlocaleinfoa_sr_result_15;
  return (acrt_getlocaleinfoa_sr_result_16 | (unsigned int)_acrt_GetLocaleInfoA_sr((struct sr_anon_68 *)&input_value, 2, (     sr_anon_49 *)loaded_record_pointer, 0x1003u, (__int64 *)a1 + 86)) == 0;
}

//----- (00000001402623E4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1048(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (0000000140262400) ----------------------------------------------------
void            sub_140262400(void **a1)
{
  if ( a1 )
  {
    free_crt_array_internal(a1, 7);
    free_crt_array_internal(a1 + 7, 7);
    free_crt_array_internal(a1 + 14, 12);
    free_crt_array_internal(a1 + 26, 12);
    free_crt_array_internal(a1 + 38, 2);
    free_base(a1[40]);
    free_base(a1[41]);
    free_base(a1[42]);
    free_crt_array_internal(a1 + 44, 7);
    free_crt_array_internal(a1 + 51, 7);
    free_crt_array_internal(a1 + 58, 12);
    free_crt_array_internal(a1 + 70, 12);
    free_crt_array_internal(a1 + 82, 2);
    free_base(a1[84]);
    free_base(a1[85]);
    free_base(a1[86]);
    free_base(a1[87]);
  }
}

//----- (0000000140262508) ----------------------------------------------------
__int64            sub_140262508(__int64 a1)
{
  struct __crt_lc_time_data *saved_state_address;
  struct __crt_lc_time_data *saved_calloc_base_result;
  struct __crt_lc_time_data *calloc_base_result;

  saved_state_address = nullptr;
  if ( *(_QWORD *)(a1 + 336) )
  {
    calloc_base_result = (struct __crt_lc_time_data *)calloc_base();
    saved_calloc_base_result = calloc_base_result;
    if ( calloc_base_result )
    {
      if ( initialize_lc_time_sr(calloc_base_result, (struct __crt_locale_data *    )a1) )
      {
        *((_DWORD *)saved_calloc_base_result + 87) = 1;
        free_base(nullptr);
        goto LABEL_8;
      }
      sub_140262400((void **)saved_calloc_base_result);
      saved_state_address = saved_calloc_base_result;
    }
    free_base(saved_state_address);
    return 1;
  }
  saved_calloc_base_result = (struct __crt_lc_time_data *)&off_14028B0E0;
LABEL_8:
  sub_140262A0C(*(_QWORD *)(a1 + 288));
  *(_QWORD *)(a1 + 288) = (uint64)(uintptr_t)(saved_calloc_base_result);
  return 0;
}

//----- (00000001402625A4) ----------------------------------------------------
__int64            sub_1402625A4(_WORD *a1, _WORD *a2)
{
  bool comparison_result;
  _WORD *buffer_cursor;
  _WORD *buffer_cursor_2;
  __int16 loaded_word;

  comparison_result = *a1 == 0;
  buffer_cursor = a1;
  while ( !comparison_result )
  {
    buffer_cursor_2 = a2;
    if ( *a2 )
    {
      loaded_word = *a2;
      while ( *buffer_cursor != loaded_word )
      {
        loaded_word = *++buffer_cursor_2;
        if ( !*buffer_cursor_2 )
          goto LABEL_7;
      }
      return buffer_cursor - a1;
    }
LABEL_7:
    comparison_result = *++buffer_cursor == 0;
  }
  return buffer_cursor - a1;
}

//----- (00000001402625E4) ----------------------------------------------------
sr_anon_49 *        wcspbrk_sr(     sr_anon_49 *String,      sr_anon_49 *Control)
{
       sr_anon_49 *cached_control;
  __int16 loaded_word;

  while ( 1 )
  {
    if ( !*(_WORD *)String )
      return nullptr;
    cached_control = Control;
    if ( *(_WORD *)Control )
      break;
LABEL_6:
    String = (     sr_anon_49 *)((char *)String + 2);
  }
  loaded_word = *(_WORD *)Control;
  while ( loaded_word != *(_WORD *)String )
  {
    cached_control = (     sr_anon_49 *)((char *)cached_control + 2);
    loaded_word = *(_WORD *)cached_control;
    if ( !*(_WORD *)cached_control )
      goto LABEL_6;
  }
  return String;
}

//----- (0000000140262618) ----------------------------------------------------
__int64            sub_140262618(
        struct __crt_locale_pointers *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 lpCharType, ...)
{
  int multi_byte_to_wide_char_result;
  __int64 saved_multi_byte_to_wide_char_result;
  unsigned __int64 comparison_result;
  __int64 integer_sum;
  void *alloca_result;
  __int64 *saved_alloca_result;
  __int64 *malloc_base_result;
  unsigned int multi_byte_to_wide_char_result_2;
  __int64 callee_output_word;
  __int64 *unused_written_slot;
  int unused_written_slot_2;
  __int64 packed_word_bits;
  char unrecovered_register_value;
  __int64 unused_local;

  crt_locale_update((_LocaleUpdate *)&packed_word_bits, a1);
  unsigned int sr_ret = 0; /* edi: 0x140262697 / 0x140262754 xor edi, edi */
  unused_written_slot_2 = 0;
  unused_written_slot = nullptr;
  multi_byte_to_wide_char_result = crt_multi_byte_to_wide_char();
  saved_multi_byte_to_wide_char_result = multi_byte_to_wide_char_result;
  if ( !multi_byte_to_wide_char_result )
    goto LABEL_18;
  comparison_result = (2LL * multi_byte_to_wide_char_result + 16) & -(__int64)(2LL * multi_byte_to_wide_char_result < (unsigned __int64)(2LL * multi_byte_to_wide_char_result + 16));
  if ( !comparison_result )
  {
    saved_alloca_result = nullptr;
    goto LABEL_12;
  }
  if ( comparison_result <= 0x400 )
  {
    integer_sum = comparison_result + 15;
    if ( comparison_result + 15 < comparison_result )
      integer_sum = 0xFFFFFFFFFFFFFF0LL;
    alloca_result = alloca(integer_sum & 0xFFFFFFFFFFFFFFF0uLL);
    saved_alloca_result = alloca_result;
    if ( &callee_output_word == (__int64 *)-48LL )
      goto LABEL_15;
    LODWORD(packed_word_bits) = 52428;
    goto LABEL_10;
  }
  malloc_base_result = (__int64 *)malloc_base();
  saved_alloca_result = malloc_base_result;
  if ( malloc_base_result )
  {
    *(_DWORD *)malloc_base_result = 56797;
LABEL_10:
    saved_alloca_result += 2;
  }
LABEL_12:
  if ( saved_alloca_result )
  {
    crt_memset((void *)(uintptr_t)(saved_alloca_result), 0, 2 * saved_multi_byte_to_wide_char_result);
    unused_written_slot_2 = saved_multi_byte_to_wide_char_result;
    unused_written_slot = saved_alloca_result;
    multi_byte_to_wide_char_result_2 = crt_multi_byte_to_wide_char();
    if ( multi_byte_to_wide_char_result_2 )
      sr_ret = ((unsigned int (           *)(_QWORD, __int64 *, _QWORD, __int64))GetStringTypeW)(a2, saved_alloca_result, multi_byte_to_wide_char_result_2, lpCharType);
  }
LABEL_15:
  if ( saved_alloca_result && *((_DWORD *)saved_alloca_result - 4) == 56797 )
    free_base(saved_alloca_result - 2);
LABEL_18:
  if ( unrecovered_register_value )
    *(_DWORD *)(packed_word_bits + 936) &= ~2u;
  return sr_ret; /* 0x14026277D: mov eax, edi */
}

// 14026E038: invalid function type 'BOOL (__stdcall *GetStringTypeW)(DWORD dwInfoType, LPCWCH lpSrcStr, int cchSrc, LPWORD lpCharType)' has been ignored

//----- (00000001402627A8) ----------------------------------------------------
__int64            sub_1402627A8(__int64 a1)
{
  volatile signed __int32 *loaded_record_pointer;
  volatile signed __int32 *loaded_record_pointer_2;
  volatile signed __int32 *loaded_record_pointer_3;
  volatile signed __int32 *loaded_record_pointer_4;
  volatile signed __int32 **record_byte_offset;
  __int64 remaining_count;
  volatile signed __int32 *record_pointer;
  __int64 loaded_word;

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
  loaded_record_pointer = *(volatile signed __int32 **)(a1 + 224);
  if ( loaded_record_pointer )
    _InterlockedIncrement(loaded_record_pointer);
  loaded_record_pointer_2 = *(volatile signed __int32 **)(a1 + 240);
  if ( loaded_record_pointer_2 )
    _InterlockedIncrement(loaded_record_pointer_2);
  loaded_record_pointer_3 = *(volatile signed __int32 **)(a1 + 232);
  if ( loaded_record_pointer_3 )
    _InterlockedIncrement(loaded_record_pointer_3);
  loaded_record_pointer_4 = *(volatile signed __int32 **)(a1 + 256);
  if ( loaded_record_pointer_4 )
    _InterlockedIncrement(loaded_record_pointer_4);
  record_byte_offset = (volatile signed __int32 **)(a1 + 56);
  remaining_count = 6;
  do
  {
    if ( *(record_byte_offset - 2) != (volatile signed __int32 *)&unk_140302588 && *record_byte_offset )
      _InterlockedIncrement(*record_byte_offset);
    if ( *(record_byte_offset - 3) )
    {
      record_pointer = *(record_byte_offset - 1);
      if ( record_pointer )
        _InterlockedIncrement(record_pointer);
    }
    record_byte_offset += 4;
    --remaining_count;
  }
  while ( remaining_count );
  loaded_word = *(_QWORD *)(a1 + 288);
  if ( !loaded_word || (_UNKNOWN **)loaded_word == &off_14028B0E0 )
    return 0x7FFFFFFF;
  else
    return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(loaded_word + 348));
}

//----- (0000000140262834) ----------------------------------------------------
void            sub_140262834(__int64 a1)
{
  _UNKNOWN **loaded_record_pointer;
  _DWORD *loaded_record_pointer_2;
  _DWORD *loaded_record_pointer_3;
  _DWORD *loaded_record_pointer_4;
  _DWORD *loaded_record_pointer_5;
  void **buffer_cursor;
  __int64 remaining_count;
  _DWORD **record_byte_offset;
  _DWORD *loaded_word;
  _DWORD *record_pointer;

  loaded_record_pointer = *(_UNKNOWN ***)(a1 + 248);
  if ( loaded_record_pointer )
  {
    if ( loaded_record_pointer != &off_140302AE0 )
    {
      loaded_record_pointer_2 = *(_DWORD **)(a1 + 224);
      if ( loaded_record_pointer_2 )
      {
        if ( !*loaded_record_pointer_2 )
        {
          loaded_record_pointer_3 = *(_DWORD **)(a1 + 240);
          if ( loaded_record_pointer_3 && !*loaded_record_pointer_3 )
          {
            free_base(loaded_record_pointer_3);
            sub_140261548(*(_QWORD **)(a1 + 248));
          }
          loaded_record_pointer_4 = *(_DWORD **)(a1 + 232);
          if ( loaded_record_pointer_4 && !*loaded_record_pointer_4 )
          {
            free_base(loaded_record_pointer_4);
            sub_140261BBC(*(_QWORD *)(a1 + 248));
          }
          free_base(*(void **)(a1 + 224));
          free_base(*(void **)(a1 + 248));
        }
      }
    }
  }
  loaded_record_pointer_5 = *(_DWORD **)(a1 + 256);
  if ( loaded_record_pointer_5 && !*loaded_record_pointer_5 )
  {
    free_base((void *)(*(_QWORD *)(a1 + 264) - 254LL));
    free_base((void *)(*(_QWORD *)(a1 + 272) - 128LL));
    free_base((void *)(*(_QWORD *)(a1 + 280) - 128LL));
    free_base(*(void **)(a1 + 256));
  }
  sub_1402629D4(*(void ***)(a1 + 288));
  buffer_cursor = (void **)(a1 + 296);
  remaining_count = 6;
  record_byte_offset = (_DWORD **)(a1 + 56);
  do
  {
    if ( *(record_byte_offset - 2) != (_DWORD *)&unk_140302588 )
    {
      loaded_word = *record_byte_offset;
      if ( *record_byte_offset )
      {
        if ( !*loaded_word )
        {
          free_base(loaded_word);
          free_base(*buffer_cursor);
        }
      }
    }
    if ( *(record_byte_offset - 3) )
    {
      record_pointer = *(record_byte_offset - 1);
      if ( record_pointer )
      {
        if ( !*record_pointer )
          free_base(record_pointer);
      }
    }
    ++buffer_cursor;
    record_byte_offset += 4;
    --remaining_count;
  }
  while ( remaining_count );
  free_base((void *)a1);
}

//----- (00000001402629D4) ----------------------------------------------------
void            sub_1402629D4(void **Block)
{
  if ( Block && Block != (void **)&off_14028B0E0 && !*((_DWORD *)Block + 87) )
  {
    sub_140262400(Block);
    free_base(Block);
  }
}

//----- (0000000140262A0C) ----------------------------------------------------
__int64            sub_140262A0C(__int64 a1)
{
  if ( !a1 || (_UNKNOWN **)a1 == &off_14028B0E0 )
    return 0x7FFFFFFF;
  else
    return (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(a1 + 348));
}

//----- (0000000140262A34) ----------------------------------------------------
void            sub_140262A34(__int64 a1)
{
  volatile signed __int32 *loaded_record_pointer;
  volatile signed __int32 *loaded_record_pointer_2;
  volatile signed __int32 *loaded_record_pointer_3;
  volatile signed __int32 *loaded_record_pointer_4;
  volatile signed __int32 **record_byte_offset;
  __int64 remaining_count;
  volatile signed __int32 *record_pointer;

  if ( a1 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 16), 0xFFFFFFFF);
    loaded_record_pointer = *(volatile signed __int32 **)(a1 + 224);
    if ( loaded_record_pointer )
      _InterlockedAdd(loaded_record_pointer, 0xFFFFFFFF);
    loaded_record_pointer_2 = *(volatile signed __int32 **)(a1 + 240);
    if ( loaded_record_pointer_2 )
      _InterlockedAdd(loaded_record_pointer_2, 0xFFFFFFFF);
    loaded_record_pointer_3 = *(volatile signed __int32 **)(a1 + 232);
    if ( loaded_record_pointer_3 )
      _InterlockedAdd(loaded_record_pointer_3, 0xFFFFFFFF);
    loaded_record_pointer_4 = *(volatile signed __int32 **)(a1 + 256);
    if ( loaded_record_pointer_4 )
      _InterlockedAdd(loaded_record_pointer_4, 0xFFFFFFFF);
    record_byte_offset = (volatile signed __int32 **)(a1 + 56);
    remaining_count = 6;
    do
    {
      if ( *(record_byte_offset - 2) != (volatile signed __int32 *)&unk_140302588 && *record_byte_offset )
        _InterlockedAdd(*record_byte_offset, 0xFFFFFFFF);
      if ( *(record_byte_offset - 3) )
      {
        record_pointer = *(record_byte_offset - 1);
        if ( record_pointer )
          _InterlockedAdd(record_pointer, 0xFFFFFFFF);
      }
      record_byte_offset += 4;
      --remaining_count;
    }
    while ( remaining_count );
    sub_140262A0C(*(_QWORD *)(a1 + 288));
  }
}

//----- (0000000140262ADC) ----------------------------------------------------
__int64 sub_140262ADC()
{
  __int64 call_result;
  __int64 *record_pointer;
  __int64 updatetlocinfoex_nolock_result;

  call_result = sub_140255A70();
  record_pointer = (__int64 *)(call_result + 144);
  if ( (*(_DWORD *)(call_result + 936) & dword_140302B88) == 0 || (updatetlocinfoex_nolock_result = *record_pointer) == 0 )
  {
    crt_lock(4);
    updatetlocinfoex_nolock_result = updatetlocinfoEx_nolock(record_pointer, *(__int64 *)&g_144CBF778);
    crt_unlock(4);
    if ( !updatetlocinfoex_nolock_result )
      abort();
  }
  return updatetlocinfoex_nolock_result;
}

//----- (0000000140262B48) ----------------------------------------------------
__int64            updatetlocinfoEx_nolock(__int64 *a1, __int64 a2)
{
  __int64 loaded_word;

  if ( !a2 || !a1 )
    return 0;
  loaded_word = *a1;
  if ( *a1 != a2 )
  {
    *a1 = a2;
    sub_1402627A8(a2);
    if ( loaded_word )
    {
      sub_140262A34(loaded_word);
      if ( !*(_DWORD *)(loaded_word + 16) && (__int16 **)loaded_word != &off_140302420 )
        sub_140262834(loaded_word);
    }
  }
  return a2;
}

//----- (0000000140262BB0) ----------------------------------------------------
__int64            GetLocaleNameFromDefault(__int64 a1)
{
  __int64 element_index;
  _QWORD scratch_buffer[6];
  _WORD scratch_buffer_2[88];
  __int64 unused_local;

  *(_DWORD *)(a1 + 16) |= 0x104u;
  if ( (int)sub_14024F2EC(scratch_buffer_2, 0x55u) > 1 )
  {
    element_index = -1;
    do
      ++element_index;
    while ( scratch_buffer_2[element_index] );
    if ( (unsigned int)sub_140260D80((_WORD *)(a1 + 600), 85, (__int64)scratch_buffer_2, element_index + 1) )
    {
      scratch_buffer[4] = 0;
      crt_invoke_watson();
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
  }
  return 0; /* no caller reads the result */
}

// 140262C4F: control flows out of bounds to 140262C54

//----- (0000000140262C58) ----------------------------------------------------
bool            GetLocaleNameFromLangCountry(__int64 a1)
{
  __int16 *buffer_cursor;
  __int64 iteration_count;
  __int64 element_index;
  int saved_iteration_count;
  int iteration_count_2;
  __int16 loaded_word;
  bool result;

  buffer_cursor = *(__int16 **)a1;
  iteration_count = -1;
  element_index = -1;
  do
    ++element_index;
  while ( buffer_cursor[element_index] );
  *(_DWORD *)(a1 + 24) = element_index == 3;
  do
    ++iteration_count;
  while ( *(_WORD *)(*(_QWORD *)(a1 + 8) + 2 * iteration_count) );
  *(_DWORD *)(a1 + 28) = iteration_count == 3;
  if ( element_index == 3 )
  {
    saved_iteration_count = 2;
  }
  else
  {
    iteration_count_2 = 0;
    if ( buffer_cursor )
    {
      while ( 1 )
      {
        loaded_word = *buffer_cursor++;
        if ( (unsigned __int16)(loaded_word - 65) > 0x19u && (unsigned __int16)(loaded_word - 97) > 0x19u )
          break;
        ++iteration_count_2;
      }
      saved_iteration_count = iteration_count_2;
    }
    else
    {
      saved_iteration_count = 0;
    }
  }
  *(_DWORD *)(a1 + 20) = saved_iteration_count;
  sub_14024EEBC((__int64)LangCountryEnumProcEx, 3u, 0, 0);
  result = (*(_DWORD *)(a1 + 16) & 0x100) != 0;
  if ( (*(_DWORD *)(a1 + 16) & 0x200) == 0 || (*(_DWORD *)(a1 + 16) & 7) == 0 || !result )
    *(_DWORD *)(a1 + 16) = 0;
  return result;
}

//----- (0000000140262D28) ----------------------------------------------------
__int64            GetLocaleNameFromLanguage(__int64 a1)
{
  __int16 *buffer_cursor;
  __int64 element_index;
  int saved_iteration_count;
  int iteration_count;
  __int16 loaded_word;
  __int64 result;

  buffer_cursor = *(__int16 **)a1;
  element_index = -1;
  do
    ++element_index;
  while ( buffer_cursor[element_index] );
  *(_DWORD *)(a1 + 24) = element_index == 3;
  if ( element_index == 3 )
  {
    saved_iteration_count = 2;
  }
  else
  {
    iteration_count = 0;
    if ( buffer_cursor )
    {
      while ( 1 )
      {
        loaded_word = *buffer_cursor++;
        if ( (unsigned __int16)(loaded_word - 65) > 0x19u && (unsigned __int16)(loaded_word - 97) > 0x19u )
          break;
        ++iteration_count;
      }
      saved_iteration_count = iteration_count;
    }
    else
    {
      saved_iteration_count = 0;
    }
  }
  *(_DWORD *)(a1 + 20) = saved_iteration_count;
  result = sub_14024EEBC((__int64)LanguageEnumProcEx, 3u, 0, 0);
  if ( (*(_BYTE *)(a1 + 16) & 4) == 0 )
    *(_DWORD *)(a1 + 16) = 0;
  return result;
}

//----- (0000000140262DF0) ----------------------------------------------------
__int64            LangCountryEnumProcEx(__int64 a1)
{
  __int64 call_result;
  _QWORD *record_pointer;
  __int64 iteration_count;
  int call_result_2;
  int loaded_word;
  __int64 iteration_count_2;
  int loaded_word_2;
  _WORD *record_pointer_2;
  __int64 iteration_count_3;
  unsigned __int16 *record_pointer_3;
  int iteration_count_4;
  unsigned __int16 *buffer_cursor;
  unsigned __int16 loaded_word_3;
  __int64 element_index;
  _QWORD scratch_buffer[6];
  unsigned __int16 String2[64];
  __int64 unused_local;

  call_result = sub_140255A70();
  record_pointer = (_QWORD *)(call_result + 152);
  if ( !(unsigned int)sub_14024F174(a1, *(_DWORD *)(call_result + 180) != 0 ? 7 : 4098, (__int64)String2, 0x40u) )
    goto LABEL_2;
  iteration_count = -1;
  if ( !(unsigned int)sub_14026AE18((unsigned __int16 *)record_pointer[1], String2) )
  {
    if ( !(unsigned int)sub_14024F174(a1, *((_DWORD *)record_pointer + 6) != 0 ? 3 : 4097, (__int64)String2, 0x40u) )
    {
LABEL_2:
      *((_DWORD *)record_pointer + 4) = 0;
      return (*((_DWORD *)record_pointer + 4) & 4) == 0; /* 0x140263092: mov eax, [rbx + 0x10]; shr eax, 2; not eax; and eax, 1 */
    }
    call_result_2 = sub_14026AE18((unsigned __int16 *)*record_pointer, String2);
    loaded_word = *((_DWORD *)record_pointer + 4);
    if ( call_result_2 )
    {
      if ( (loaded_word & 2) != 0 )
        goto LABEL_15;
      if ( !*((_DWORD *)record_pointer + 5) || (unsigned int)wcsnicmp_sr(*record_pointer, String2, *((int *)record_pointer + 5)) )
      {
        if ( (record_pointer[2] & 1) != 0 || !(unsigned int)TestDefaultCountry(a1) )
          goto LABEL_15;
        *((_DWORD *)record_pointer + 4) |= 1u;
        iteration_count_2 = -1;
        do
          ++iteration_count_2;
        while ( *(_WORD *)(a1 + 2 * iteration_count_2) );
      }
      else
      {
        *((_DWORD *)record_pointer + 4) |= 2u;
        iteration_count_2 = -1;
        do
          ++iteration_count_2;
        while ( *(_WORD *)(a1 + 2 * iteration_count_2) );
      }
    }
    else
    {
      iteration_count_2 = -1;
      *((_DWORD *)record_pointer + 4) = loaded_word | 0x304;
      do
        ++iteration_count_2;
      while ( *(_WORD *)(a1 + 2 * iteration_count_2) );
    }
    if ( (unsigned int)sub_140260D80((_WORD *)record_pointer + 300, 85, a1, iteration_count_2 + 1) )
      goto LABEL_47;
  }
LABEL_15:
  if ( (record_pointer[2] & 0x300) == 0x300 )
    return (*((_DWORD *)record_pointer + 4) & 4) == 0; /* 0x140263092: mov eax, [rbx + 0x10]; shr eax, 2; not eax; and eax, 1 */
  if ( !(unsigned int)sub_14024F174(a1, *((_DWORD *)record_pointer + 6) != 0 ? 3 : 4097, (__int64)String2, 0x40u) )
    goto LABEL_2;
  if ( (unsigned int)sub_14026AE18((unsigned __int16 *)*record_pointer, String2) )
    return (*((_DWORD *)record_pointer + 4) & 4) == 0; /* 0x140263092: mov eax, [rbx + 0x10]; shr eax, 2; not eax; and eax, 1 */
  loaded_word_2 = *((_DWORD *)record_pointer + 4) | 0x200;
  *((_DWORD *)record_pointer + 4) = loaded_word_2;
  if ( *((_DWORD *)record_pointer + 6) )
  {
    record_pointer_2 = record_pointer + 75;
    *((_DWORD *)record_pointer + 4) = loaded_word_2 | 0x100;
    if ( *((_WORD *)record_pointer + 300) )
      return (*((_DWORD *)record_pointer + 4) & 4) == 0; /* 0x140263092: mov eax, [rbx + 0x10]; shr eax, 2; not eax; and eax, 1 */
    do
      ++iteration_count;
    while ( *(_WORD *)(a1 + 2 * iteration_count) );
    goto LABEL_45;
  }
  if ( !*((_DWORD *)record_pointer + 5) )
    goto LABEL_43;
  iteration_count_3 = -1;
  do
    ++iteration_count_3;
  while ( *(_WORD *)(*record_pointer + 2 * iteration_count_3) );
  if ( (_DWORD)iteration_count_3 != *((_DWORD *)record_pointer + 5) )
  {
LABEL_43:
    record_pointer_2 = record_pointer + 75;
    *((_DWORD *)record_pointer + 4) = loaded_word_2 | 0x100;
    if ( *((_WORD *)record_pointer + 300) )
      return (*((_DWORD *)record_pointer + 4) & 4) == 0; /* 0x140263092: mov eax, [rbx + 0x10]; shr eax, 2; not eax; and eax, 1 */
    do
      ++iteration_count;
    while ( *(_WORD *)(a1 + 2 * iteration_count) );
    goto LABEL_45;
  }
  if ( (unsigned int)TestDefaultCountry(a1) )
    goto LABEL_51;
  record_pointer_3 = (unsigned __int16 *)*record_pointer;
  iteration_count_4 = 0;
  buffer_cursor = (unsigned __int16 *)*record_pointer;
  if ( *record_pointer )
  {
    loaded_word_3 = *record_pointer_3;
    while ( 1 )
    {
      ++buffer_cursor;
      if ( (unsigned __int16)(loaded_word_3 - 65) > 0x19u && (unsigned __int16)(loaded_word_3 - 97) > 0x19u )
        break;
      loaded_word_3 = *buffer_cursor;
      ++iteration_count_4;
    }
  }
  element_index = -1;
  do
    ++element_index;
  while ( record_pointer_3[element_index] );
  if ( iteration_count_4 != (_DWORD)element_index )
  {
LABEL_51:
    *((_DWORD *)record_pointer + 4) |= 0x100u;
    record_pointer_2 = record_pointer + 75;
    if ( !*((_WORD *)record_pointer + 300) )
    {
      do
        ++iteration_count;
      while ( *(_WORD *)(a1 + 2 * iteration_count) );
LABEL_45:
      if ( !(unsigned int)sub_140260D80(record_pointer_2, 85, a1, iteration_count + 1) )
        return (*((_DWORD *)record_pointer + 4) & 4) == 0; /* 0x140263092: mov eax, [rbx + 0x10]; shr eax, 2; not eax; and eax, 1 */
LABEL_47:
      scratch_buffer[4] = 0;
      crt_invoke_watson();
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
  }
  return (*((_DWORD *)record_pointer + 4) & 4) == 0; /* 0x140263092: mov eax, [rbx + 0x10]; shr eax, 2; not eax; and eax, 1 */
}

// 1402630D4: control flows out of bounds to 1402630D9

//----- (00000001402630DC) ----------------------------------------------------
__int64            LanguageEnumProcEx(__int64 a1)
{
  __int64 call_result;
  __int64 integer_sum;
  __int64 iteration_count;
  _QWORD scratch_buffer[6];
  unsigned __int16 scratch_buffer_2[120];
  __int64 unused_local;

  call_result = sub_140255A70();
  integer_sum = call_result + 152;
  if ( (unsigned int)sub_14024F174(a1, *(_DWORD *)(call_result + 176) != 0 ? 3 : 4097, (__int64)scratch_buffer_2, 0x78u) )
  {
    if ( !(unsigned int)sub_14026AE18(*(unsigned __int16 **)integer_sum, scratch_buffer_2) )
    {
      iteration_count = -1;
      do
        ++iteration_count;
      while ( *(_WORD *)(a1 + 2 * iteration_count) );
      if ( (unsigned int)sub_140260D80((_WORD *)(integer_sum + 600), 85, a1, iteration_count + 1) )
      {
        scratch_buffer[4] = 0;
        crt_invoke_watson();
        do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
      }
      *(_DWORD *)(integer_sum + 16) |= 4u;
    }
  }
  else
  {
    *(_DWORD *)(integer_sum + 16) = 0;
  }
  return (*(_DWORD *)(integer_sum + 16) & 4) == 0; /* 0x140263181: mov eax, [rbx + 0x10]; shr eax, 2; not eax; and eax, 1 */
}

// 1402631C0: control flows out of bounds to 1402631C5

//----- (00000001402631C8) ----------------------------------------------------
__int64            ProcessCodePage(sr_anon_49 *String1, __int64 a2)
{
  unsigned int selection_code;
  __int64 result;
  int callee_output_word;

  if ( String1 && *(_WORD *)String1 && wcscmp_sr(String1, (     sr_anon_49 *)L"ACP") )
  {
    if ( !(unsigned int)sub_14026AE18((unsigned __int16 *)String1, L"utf8")
      || !(unsigned int)sub_14026AE18((unsigned __int16 *)String1, L"utf-8") )
    {
      return 65001;
    }
    if ( wcscmp_sr(String1, (     sr_anon_49 *)L"OCP") )
      return unknown_libname_847((unsigned __int16 *)String1);
    selection_code = 536870923;
  }
  else
  {
    selection_code = 536875012;
  }
  if ( !(unsigned int)sub_14024F174(a2 + 600, selection_code, (__int64)&callee_output_word, 2u) )
    return 0;
  result = (unsigned int)callee_output_word;
  if ( callee_output_word < 3 )
    return 65001;
  return result;
}

//----- (0000000140263294) ----------------------------------------------------
__int64            TestDefaultCountry(_WORD *a1)
{
  __int64 unused_local;
  _WORD scratch_buffer[12];
  __int64 unused_local_2;

  if ( (unsigned int)sub_14024F174((__int64)a1, 0x59u, (__int64)scratch_buffer, 9u) )
    return (unsigned int)wcsncmp_sr(scratch_buffer, a1, 9) == 0; /* 0x1402632D7: test eax, eax; jne -> xor eax, eax; else mov eax, 1 */
  return 0; /* 0x1402632E2: xor eax, eax */
}

//----- (00000001402632F8) ----------------------------------------------------
_BOOL8            TestDefaultLanguage(_WORD *a1, int a2, __int16 **a3)
{
  __int16 *loaded_word;
  int iteration_count;
  __int16 *buffer_cursor;
  __int16 loaded_word_2;
  __int64 element_index;

  if ( (unsigned int)TestDefaultCountry(a1) || !a2 )
    return 1;
  loaded_word = *a3;
  iteration_count = 0;
  buffer_cursor = *a3;
  if ( *a3 )
  {
    loaded_word_2 = *loaded_word;
    while ( 1 )
    {
      ++buffer_cursor;
      if ( (unsigned __int16)(loaded_word_2 - 65) > 0x19u && (unsigned __int16)(loaded_word_2 - 97) > 0x19u )
        break;
      loaded_word_2 = *buffer_cursor;
      ++iteration_count;
    }
  }
  element_index = -1;
  do
    ++element_index;
  while ( loaded_word[element_index] );
  return iteration_count != (_DWORD)element_index;
}

//----- (0000000140263370) ----------------------------------------------------
__int64            TranslateName(__int64 a1, int a2, unsigned __int16 **a3)
{
  unsigned int selection_flag;
  int integer_difference;
  int loaded_word;
  int integer_sum;
  bool comparison_result;
  __int64 integer_quotient;

  selection_flag = 0;
  integer_difference = a2;
  loaded_word = 1;
  integer_sum = 0;
  if ( a2 < 0 )
  {
LABEL_9:
    comparison_result = loaded_word == 0;
  }
  else
  {
    while ( 1 )
    {
      comparison_result = loaded_word == 0;
      if ( !loaded_word )
        break;
      integer_quotient = (integer_sum + integer_difference) / 2;
      loaded_word = sub_14026AE18(*a3, *(unsigned __int16 **)(16 * integer_quotient + a1));
      if ( loaded_word )
      {
        if ( loaded_word >= 0 )
          integer_sum = integer_quotient + 1;
        else
          integer_difference = integer_quotient - 1;
      }
      else
      {
        *a3 = (unsigned __int16 *)(16 * integer_quotient + a1 + 8);
      }
      if ( integer_sum > integer_difference )
        goto LABEL_9;
    }
  }
  LOBYTE(selection_flag) = comparison_result;
  return selection_flag;
}

//----- (000000014026340C) ----------------------------------------------------
__int64            sub_14026340C(_WORD *a1, signed int *a2,      __m128i *a3)
{
  __int64 call_result;
  unsigned __int16 *loaded_word;
  __int64 integer_sum;
  __int64 integer_sum_2;
  _WORD **record_pointer;
  sr_anon_49 *record_pointer_2;
  signed int int64_result;
  signed int saved_int64_result;
  __int64 iteration_count;

  call_result = sub_140255A70();
  loaded_word = a1;
  integer_sum = call_result + 152;
  *(_DWORD *)(call_result + 168) = 0;
  integer_sum_2 = call_result + 752;
  *(_QWORD *)(call_result + 152) = (uint64)(uintptr_t)(a1);
  record_pointer = (_WORD **)(call_result + 160);
  *(_WORD *)(call_result + 752) = 0;
  *(_QWORD *)(call_result + 160) = (uint64)(uintptr_t)(a1 + 64);
  if ( a1[64] )
  {
    TranslateName((__int64)&off_14028F6F0, 22, (unsigned __int16 **)(call_result + 160));
    loaded_word = *(unsigned __int16 **)integer_sum;
  }
  if ( !*loaded_word )
  {
    GetLocaleNameFromDefault(integer_sum);
    goto LABEL_13;
  }
  if ( **record_pointer )
    GetLocaleNameFromLangCountry(integer_sum);
  else
    GetLocaleNameFromLanguage(integer_sum);
  if ( !*(_DWORD *)(integer_sum + 16) )
  {
    if ( (unsigned int)TranslateName((__int64)&off_14028F2D0, 64, (unsigned __int16 **)integer_sum) )
    {
      if ( **record_pointer )
        GetLocaleNameFromLangCountry(integer_sum);
      else
        GetLocaleNameFromLanguage(integer_sum);
    }
LABEL_13:
    if ( !*(_DWORD *)(integer_sum + 16) )
      return 0;
  }
  record_pointer_2 = (sr_anon_49 *)(a1 + 128);
  if ( *a1 || *(_WORD *)record_pointer_2 )
    int64_result = ProcessCodePage(record_pointer_2, integer_sum);
  else
    int64_result = ((__int64 (*)(void))GetACP)();
  saved_int64_result = int64_result;
  if ( int64_result && int64_result != 65000 && (unsigned int)((__int64 (           *)(_QWORD))IsValidCodePage)((unsigned __int16)int64_result) )
  {
    if ( a2 )
      *a2 = saved_int64_result;
    if ( !a3 )
      return 1;
    iteration_count = -1;
    SR_VEC_LANES(128, a3[18], i16)[0] = 0;
    do
      ++iteration_count;
    while ( *(_WORD *)(integer_sum_2 + 2 * iteration_count) );
    if ( (unsigned int)sub_140260D80((     __m128i *)SR_VEC_LANES(128, a3[18], i16), 85, integer_sum_2, iteration_count + 1) )
      goto LABEL_38;
    if ( (unsigned int)sub_14024F174((__int64)SR_VEC_LANES(128, a3[18], i64), 0x1001u, (__int64)a3, 0x40u)
      && (unsigned int)sub_14024F174((__int64)SR_VEC_LANES(128, a3[18], i64), 0x1002u, (__int64)SR_VEC_LANES(128, a3[8], i64), 0x40u)
      && (!sub_14026CEFC(a3 + 8, 0x5Fu) && !sub_14026CEFC(a3 + 8, 0x2Eu)
       || (unsigned int)sub_14024F174((__int64)SR_VEC_LANES(128, a3[18], i64), 7u, (__int64)SR_VEC_LANES(128, a3[8], i64), 0x40u)) )
    {
      if ( saved_int64_result != 65001 )
      {
        itow_s(saved_int64_result, SR_VEC_LANES(128, a3[16], i16), 0x10u, 0xAu);
        return 1;
      }
      if ( !(unsigned int)sub_140260D80((     __m128i *)SR_VEC_LANES(128, a3[16], i16), 16, (__int64)L"utf8", 5) )
        return 1;
LABEL_38:
      crt_invoke_watson();
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
  }
  return 0;
}

// 140263669: control flows out of bounds to 14026366E
// 14026E078: invalid function type 'UINT (__stdcall *GetACP)()' has been ignored
// 14026E080: invalid function type 'BOOL (__stdcall *IsValidCodePage)(UINT CodePage)' has been ignored

//----- (0000000140263670) ----------------------------------------------------
__int64            CountryEnumProc(unsigned __int16 *a1)
{
  __int64 call_result;
  _DWORD *option_flags;
  __int64 lcidfromhexstring_sr_result;
  int iteration_count;
  _WORD *i;
  __int64 unused_local;
  unsigned __int16 LCData[120];
  __int64 unused_local_2;

  call_result = sub_140255A70();
  option_flags = *(_DWORD **)(sub_140255A70() + 928);
  lcidfromhexstring_sr_result = (unsigned int)LcidFromHexString_sr(a1);
  iteration_count = 0;
  if ( (unsigned int)((__int64 (           *)(__int64, _QWORD, unsigned __int16 *, __int64))GetLocaleInfoW)(
                       lcidfromhexstring_sr_result,
                       *(_DWORD *)(call_result + 180) != 0 ? 7 : 4098,
                       LCData,
                       120) )
  {
    if ( !(unsigned int)sub_14026AE18(*(unsigned __int16 **)(call_result + 160), LCData) )
    {
      for ( i = &unk_1402902A8; (_WORD)lcidfromhexstring_sr_result != *i; ++i )
      {
        if ( (unsigned int)++iteration_count >= 0xA )
        {
          *option_flags |= 4u;
          option_flags[2] = lcidfromhexstring_sr_result;
          option_flags[1] = lcidfromhexstring_sr_result;
          return (*option_flags & 4) == 0; /* 0x140263725: mov eax, [rdi]; shr eax, 2; not eax; and eax, 1 */
        }
      }
    }
  }
  else
  {
    *option_flags = 0;
  }
  return (*option_flags & 4) == 0; /* 0x140263725: mov eax, [rdi]; shr eax, 2; not eax; and eax, 1 */
}

// 14026E100: invalid function type 'int (__stdcall *GetLocaleInfoW)(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData)' has been ignored

//----- (0000000140263758) ----------------------------------------------------
__int64            GetLcidFromCountry(_DWORD *a1)
{
  __int64 call_result;
  __int64 iteration_count;
  __int64 cached_call_result;
  __int64 loaded_word;
  __int64 result;

  call_result = sub_140255A70();
  iteration_count = -1;
  cached_call_result = call_result;
  loaded_word = *(_QWORD *)(call_result + 160);
  do
    ++iteration_count;
  while ( *(_WORD *)(loaded_word + 2 * iteration_count) );
  *(_DWORD *)(cached_call_result + 180) = iteration_count == 3;
  result = ((__int64 (           *)(__int64 (           *)(unsigned __int16 *), __int64))EnumSystemLocalesW)(
             CountryEnumProc,
             1);
  if ( (*(_BYTE *)a1 & 4) == 0 )
    *a1 = 0;
  return result;
}

// 14026E0E8: invalid function type 'BOOL (__stdcall *EnumSystemLocalesW)(LOCALE_ENUMPROCW lpLocaleEnumProc, DWORD dwFlags)' has been ignored

//----- (00000001402637B8) ----------------------------------------------------
__int64            GetLcidFromDefault(_DWORD *a1)
{
  __int64 result;

  *a1 |= 0x104u;
  result = ((__int64 (*)(void))GetUserDefaultLCID)();
  a1[2] = result;
  a1[1] = result;
  return result;
}

// 14026E0F0: invalid function type 'LCID (__stdcall *GetUserDefaultLCID)()' has been ignored

//----- (00000001402637DC) ----------------------------------------------------
bool            GetLcidFromLangCountry(_DWORD *a1)
{
  __int64 call_result;
  __int64 iteration_count;
  __int64 iteration_count_2;
  __int64 integer_sum;
  __int64 loaded_word;
  bool comparison_result;
  int cached_i;
  __int16 *buffer_cursor;
  int i;
  __int16 loaded_word_2;
  bool result;

  call_result = sub_140255A70();
  iteration_count = -1;
  iteration_count_2 = -1;
  integer_sum = call_result + 152;
  loaded_word = *(_QWORD *)(call_result + 152);
  do
    ++iteration_count_2;
  while ( *(_WORD *)(loaded_word + 2 * iteration_count_2) );
  *(_DWORD *)(integer_sum + 24) = iteration_count_2 == 3;
  do
    ++iteration_count;
  while ( *(_WORD *)(*(_QWORD *)(integer_sum + 8) + 2 * iteration_count) );
  comparison_result = iteration_count == 3;
  cached_i = 2;
  *(_DWORD *)(integer_sum + 28) = comparison_result;
  a1[1] = 0;
  if ( !*(_DWORD *)(integer_sum + 24) )
  {
    buffer_cursor = *(__int16 **)integer_sum;
    for ( i = 0; ; ++i )
    {
      loaded_word_2 = *buffer_cursor++;
      if ( (unsigned __int16)(loaded_word_2 - 65) > 0x19u && (unsigned __int16)(loaded_word_2 - 97) > 0x19u )
        break;
    }
    cached_i = i;
  }
  *(_DWORD *)(integer_sum + 20) = cached_i;
  ((void (           *)(__int64 (           *)(__int64), __int64))EnumSystemLocalesW)(LangCountryEnumProc, 1);
  result = (*a1 & 0x100) != 0;
  if ( (*a1 & 0x200) == 0 || (*a1 & 7) == 0 || !result )
    *a1 = 0;
  return result;
}

// 14026E0E8: invalid function type 'BOOL (__stdcall *EnumSystemLocalesW)(LOCALE_ENUMPROCW lpLocaleEnumProc, DWORD dwFlags)' has been ignored

//----- (00000001402638AC) ----------------------------------------------------
__int64            GetLcidFromLanguage(_DWORD *a1)
{
  __int64 call_result;
  __int64 element_index;
  __int16 *buffer_cursor;
  int cached_i;
  int i;
  __int16 loaded_word;
  __int64 result;

  call_result = sub_140255A70();
  element_index = -1;
  buffer_cursor = *(__int16 **)(call_result + 152);
  do
    ++element_index;
  while ( buffer_cursor[element_index] );
  cached_i = 2;
  *(_DWORD *)(call_result + 176) = element_index == 3;
  if ( element_index != 3 )
  {
    for ( i = 0; ; ++i )
    {
      loaded_word = *buffer_cursor++;
      if ( (unsigned __int16)(loaded_word - 65) > 0x19u && (unsigned __int16)(loaded_word - 97) > 0x19u )
        break;
    }
    cached_i = i;
  }
  *(_DWORD *)(call_result + 172) = cached_i;
  result = ((__int64 (           *)(__int64 (           *)(__int64), __int64))EnumSystemLocalesW)(LanguageEnumProc, 1);
  if ( (*(_BYTE *)a1 & 4) == 0 )
    *a1 = 0;
  return result;
}

// 14026E0E8: invalid function type 'BOOL (__stdcall *EnumSystemLocalesW)(LOCALE_ENUMPROCW lpLocaleEnumProc, DWORD dwFlags)' has been ignored

//----- (000000014026396C) ----------------------------------------------------
__int64            LangCountryEnumProc(unsigned __int16 *a1)
{
  _QWORD *returned_pointer;
  int *option_flags;
  __int64 lcidfromhexstring_sr_result;
  __int64 iteration_count;
  int call_result;
  int loaded_word;
  int combined_flags;
  char input_byte;
  int wcsnicmp_sr_result;
  __int64 iteration_count_2;
  unsigned int iteration_count_3;
  _WORD *buffer_cursor;
  int scaled_index;
  int selection_flag;
  __int64 unused_local;
  unsigned __int16 LCData[120];
  __int64 unused_local_2;

  returned_pointer = (_QWORD *)(sub_140255A70() + 152);
  option_flags = *(int **)(sub_140255A70() + 928);
  lcidfromhexstring_sr_result = (unsigned int)LcidFromHexString_sr(a1);
  if ( !(unsigned int)((__int64 (           *)(__int64, _QWORD, unsigned __int16 *, __int64))GetLocaleInfoW)(
                        lcidfromhexstring_sr_result,
                        *((_DWORD *)returned_pointer + 7) != 0 ? 7 : 4098,
                        LCData,
                        120) )
    goto LABEL_38;
  iteration_count = -1;
  if ( (unsigned int)sub_14026AE18((unsigned __int16 *)returned_pointer[1], LCData) )
    goto LABEL_20;
  if ( !(unsigned int)((__int64 (           *)(_QWORD, _QWORD, unsigned __int16 *, __int64))GetLocaleInfoW)(
                        (unsigned int)lcidfromhexstring_sr_result,
                        *((_DWORD *)returned_pointer + 6) != 0 ? 3 : 4097,
                        LCData,
                        120) )
  {
LABEL_38:
    *option_flags = 0;
    return (*option_flags & 4) == 0; /* 0x140263B7A: mov eax, [rdi]; shr eax, 2; not eax; and eax, 1 */
  }
  call_result = sub_14026AE18((unsigned __int16 *)*returned_pointer, LCData);
  loaded_word = *option_flags;
  if ( call_result )
  {
    if ( (loaded_word & 2) != 0 )
      goto LABEL_20;
    input_byte = *option_flags;
    if ( *((_DWORD *)returned_pointer + 5) )
    {
      wcsnicmp_sr_result = wcsnicmp_sr(*returned_pointer, LCData, *((int *)returned_pointer + 5));
      loaded_word = *option_flags;
      if ( !wcsnicmp_sr_result )
      {
        option_flags[2] = lcidfromhexstring_sr_result;
        *option_flags = loaded_word | 2;
        iteration_count_2 = -1;
        do
          ++iteration_count_2;
        while ( *(_WORD *)(*returned_pointer + 2 * iteration_count_2) );
        if ( (_DWORD)iteration_count_2 == *((_DWORD *)returned_pointer + 5) )
          option_flags[1] = lcidfromhexstring_sr_result;
        goto LABEL_20;
      }
      input_byte = *option_flags;
    }
    if ( (input_byte & 1) == 0 )
    {
      iteration_count_3 = 0;
      buffer_cursor = &unk_1402902A8;
      while ( (_WORD)lcidfromhexstring_sr_result != *buffer_cursor )
      {
        ++iteration_count_3;
        ++buffer_cursor;
        if ( iteration_count_3 >= 0xA )
        {
          combined_flags = loaded_word | 1;
          goto LABEL_19;
        }
      }
    }
  }
  else
  {
    combined_flags = loaded_word | 0x304;
    option_flags[1] = lcidfromhexstring_sr_result;
LABEL_19:
    option_flags[2] = lcidfromhexstring_sr_result;
    *option_flags = combined_flags;
  }
LABEL_20:
  if ( (*option_flags & 0x300) == 0x300 )
    return (*option_flags & 4) == 0; /* 0x140263B7A: mov eax, [rdi]; shr eax, 2; not eax; and eax, 1 */
  if ( !(unsigned int)((__int64 (           *)(_QWORD, _QWORD, unsigned __int16 *, __int64))GetLocaleInfoW)(
                        (unsigned int)lcidfromhexstring_sr_result,
                        *((_DWORD *)returned_pointer + 6) != 0 ? 3 : 4097,
                        LCData,
                        120) )
    goto LABEL_38;
  if ( (unsigned int)sub_14026AE18((unsigned __int16 *)*returned_pointer, LCData) )
  {
    if ( *((_DWORD *)returned_pointer + 6) || !*((_DWORD *)returned_pointer + 5) || (unsigned int)sub_14026AE18((unsigned __int16 *)*returned_pointer, LCData) )
      return (*option_flags & 4) == 0; /* 0x140263B7A: mov eax, [rdi]; shr eax, 2; not eax; and eax, 1 */
    selection_flag = 0;
    goto LABEL_33;
  }
  scaled_index = *option_flags | 0x200;
  *option_flags = scaled_index;
  if ( !*((_DWORD *)returned_pointer + 6) && *((_DWORD *)returned_pointer + 5) )
  {
    do
      ++iteration_count;
    while ( *(_WORD *)(*returned_pointer + 2 * iteration_count) );
    if ( (_DWORD)iteration_count == *((_DWORD *)returned_pointer + 5) )
    {
      selection_flag = 1;
LABEL_33:
      if ( !TestDefaultLanguage_0(lcidfromhexstring_sr_result, selection_flag) )
        return (*option_flags & 4) == 0; /* 0x140263B7A: mov eax, [rdi]; shr eax, 2; not eax; and eax, 1 */
      *option_flags |= 0x100u;
      goto LABEL_35;
    }
  }
  *option_flags = scaled_index | 0x100;
LABEL_35:
  if ( !option_flags[1] )
    option_flags[1] = lcidfromhexstring_sr_result;
  return (*option_flags & 4) == 0; /* 0x140263B7A: mov eax, [rdi]; shr eax, 2; not eax; and eax, 1 */
}

// 14026E100: invalid function type 'int (__stdcall *GetLocaleInfoW)(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData)' has been ignored

//----- (0000000140263BB8) ----------------------------------------------------
__int64            LanguageEnumProc(unsigned __int16 *a1)
{
  __int64 call_result;
  _DWORD *option_flags;
  __int64 lcidfromhexstring_sr_result;
  int loaded_word;
  int loaded_word_2;
  int selection_flag;
  __int64 unused_local;
  unsigned __int16 LCData[120];
  __int64 unused_local_2;

  call_result = sub_140255A70();
  option_flags = *(_DWORD **)(sub_140255A70() + 928);
  lcidfromhexstring_sr_result = (unsigned int)LcidFromHexString_sr(a1);
  if ( !(unsigned int)((__int64 (           *)(__int64, _QWORD, unsigned __int16 *, __int64))GetLocaleInfoW)(
                        lcidfromhexstring_sr_result,
                        *(_DWORD *)(call_result + 176) != 0 ? 3 : 4097,
                        LCData,
                        120) )
  {
    *option_flags = 0;
    return (*option_flags & 4) == 0; /* 0x140263C91: mov eax, [rdi]; shr eax, 2; not eax; and eax, 1 */
  }
  loaded_word = sub_14026AE18(*(unsigned __int16 **)(call_result + 152), LCData);
  loaded_word_2 = *(_DWORD *)(call_result + 176);
  if ( !loaded_word )
  {
    if ( loaded_word_2 )
      goto LABEL_11;
    selection_flag = 1;
LABEL_10:
    if ( !TestDefaultLanguage_0(lcidfromhexstring_sr_result, selection_flag) )
      return (*option_flags & 4) == 0; /* 0x140263C91: mov eax, [rdi]; shr eax, 2; not eax; and eax, 1 */
LABEL_11:
    *option_flags |= 4u;
    option_flags[1] = lcidfromhexstring_sr_result;
    option_flags[2] = lcidfromhexstring_sr_result;
    return (*option_flags & 4) == 0; /* 0x140263C91: mov eax, [rdi]; shr eax, 2; not eax; and eax, 1 */
  }
  if ( !loaded_word_2 && *(_DWORD *)(call_result + 172) && !(unsigned int)sub_14026AE18(*(unsigned __int16 **)(call_result + 152), LCData) )
  {
    selection_flag = 0;
    goto LABEL_10;
  }
  return (*option_flags & 4) == 0; /* 0x140263C91: mov eax, [rdi]; shr eax, 2; not eax; and eax, 1 */
}

// 14026E100: invalid function type 'int (__stdcall *GetLocaleInfoW)(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData)' has been ignored

//----- (0000000140263CC0) ----------------------------------------------------
__int64            LcidFromHexString_sr(unsigned __int16 *a1)
{
  unsigned __int16 running_total;
  unsigned int scaled_index;
  unsigned __int16 *buffer_cursor;
  __int16 integer_difference;
  int saved_running_total;

  running_total = *a1;
  scaled_index = 0;
  buffer_cursor = a1;
  while ( running_total )
  {
    ++buffer_cursor;
    if ( (unsigned __int16)(running_total - 97) > 5u )
    {
      if ( (unsigned __int16)(running_total - 65) > 5u )
        goto LABEL_7;
      integer_difference = -7;
    }
    else
    {
      integer_difference = -39;
    }
    running_total += integer_difference;
LABEL_7:
    saved_running_total = running_total;
    running_total = *buffer_cursor;
    scaled_index = saved_running_total + 16 * scaled_index - 48;
  }
  return scaled_index;
}

//----- (0000000140263D10) ----------------------------------------------------
__int64            ProcessCodePage_0(sr_anon_49 *String1, __int64 a2)
{
  __int64 result;
  __int64 LCData;

  if ( String1 && *(_WORD *)String1 && wcscmp_sr(String1, (     sr_anon_49 *)L"ACP") )
  {
    if ( wcscmp_sr(String1, (     sr_anon_49 *)L"OCP") )
      return unknown_libname_847((unsigned __int16 *)String1);
    if ( (unsigned int)((__int64 (           *)(_QWORD, __int64, __int64 *, __int64))GetLocaleInfoW)(
                         *(unsigned int *)(a2 + 8),
                         536870923,
                         &LCData,
                         2) )
      return (unsigned int)LCData;
    return 0;
  }
  if ( !(unsigned int)((__int64 (           *)(_QWORD, __int64, __int64 *, __int64))GetLocaleInfoW)(
                        *(unsigned int *)(a2 + 8),
                        536875012,
                        &LCData,
                        2) )
    return 0;
  result = (unsigned int)LCData;
  if ( !(_DWORD)LCData )
    return ((__int64 (*)(void))GetACP)();
  return result;
}

// 14026E100: invalid function type 'int (__stdcall *GetLocaleInfoW)(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData)' has been ignored
// 14026E078: invalid function type 'UINT (__stdcall *GetACP)()' has been ignored

//----- (0000000140263DE4) ----------------------------------------------------
_BOOL8            TestDefaultLanguage_0(int a1, int a2)
{
  __int64 call_result;
  __int16 *loaded_record_pointer;
  int iteration_count;
  __int16 loaded_word;
  __int16 *buffer_cursor;
  __int64 element_index;
  __int64 LCData;

  call_result = sub_140255A70();
  if ( !(unsigned int)((__int64 (           *)(_QWORD, __int64, __int64 *, __int64))GetLocaleInfoW)(
                        a1 & 0x3FF | 0x400u,
                        536870913,
                        &LCData,
                        2) )
    return 0;
  if ( a1 == (_DWORD)LCData || !a2 )
    return 1;
  loaded_record_pointer = *(__int16 **)(call_result + 152);
  iteration_count = 0;
  loaded_word = *loaded_record_pointer;
  buffer_cursor = loaded_record_pointer + 1;
  while ( (unsigned __int16)(loaded_word - 65) <= 0x19u || (unsigned __int16)(loaded_word - 97) <= 0x19u )
  {
    loaded_word = *buffer_cursor;
    ++iteration_count;
    ++buffer_cursor;
  }
  element_index = -1;
  do
    ++element_index;
  while ( loaded_record_pointer[element_index] );
  return iteration_count != (_DWORD)element_index;
}

// 14026E100: invalid function type 'int (__stdcall *GetLocaleInfoW)(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData)' has been ignored

//----- (0000000140263E90) ----------------------------------------------------
char            TranslateName_0(__int64 a1, int a2, unsigned __int16 **a3)
{
  int integer_sum;
  int integer_difference;
  __int64 integer_quotient;
  int loaded_word;

  integer_sum = 0;
  integer_difference = a2;
  if ( a2 < 0 )
    return 0;
  while ( 1 )
  {
    integer_quotient = (integer_sum + integer_difference) / 2;
    loaded_word = sub_14026AE18(*a3, *(unsigned __int16 **)(16 * integer_quotient + a1));
    if ( !loaded_word )
      break;
    if ( loaded_word >= 0 )
      integer_sum = integer_quotient + 1;
    else
      integer_difference = integer_quotient - 1;
    if ( integer_sum > integer_difference )
      return 0;
  }
  *a3 = (unsigned __int16 *)(16 * integer_quotient + a1 + 8);
  return 1;
}

//----- (0000000140263F10) ----------------------------------------------------
__int64            _acrt_get_qualified_locale_downlevel(__int64 a1, signed int *a2, __int64 a3)
{
  __int64 call_result;
  _QWORD *record_pointer;
  _WORD *loaded_record_pointer;
  __int64 call_result_2;
  __int64 iteration_count;
  signed int processcodepage_0_result;
  signed int saved_processcodepage_0_result;
  __int64 unused_local;
  __int64 Locale;
  __int64 packed_word_bits;
  __int64 unused_local_2;

  call_result = sub_140255A70();
  Locale = 0;
  LODWORD(packed_word_bits) = 0;
  record_pointer = (_QWORD *)(call_result + 160);
  *(_QWORD *)(sub_140255A70() + 928) = (uint64)(uintptr_t)(&Locale);
  *(_QWORD *)(call_result + 152) = a1;
  *(_QWORD *)(call_result + 160) = a1 + 128;
  if ( a1 != -128 && *(_WORD *)(a1 + 128) )
    TranslateName_0((__int64)&off_14028F6F0, 22, (unsigned __int16 **)(call_result + 160));
  LODWORD(Locale) = 0;
  loaded_record_pointer = *(_WORD **)(call_result + 152);
  if ( !loaded_record_pointer || !*loaded_record_pointer )
  {
    if ( *record_pointer && *(_WORD *)*record_pointer )
    {
      call_result_2 = sub_140255A70();
      iteration_count = -1;
      do
        ++iteration_count;
      while ( *(_WORD *)(*(_QWORD *)(call_result_2 + 160) + 2 * iteration_count) );
      *(_DWORD *)(call_result_2 + 180) = iteration_count == 3;
      ((void (           *)(__int64 (           *)(unsigned __int16 *), __int64))EnumSystemLocalesW)(CountryEnumProc, 1);
      if ( (Locale & 4) == 0 )
        LODWORD(Locale) = 0;
    }
    else
    {
      LODWORD(Locale) = 260;
      LODWORD(packed_word_bits) = ((__int64 (*)(void))GetUserDefaultLCID)();
      HIDWORD(Locale) = packed_word_bits;
    }
LABEL_23:
    if ( !(_DWORD)Locale )
      return 0; /* 0x140264171: xor eax, eax */
    goto LABEL_24;
  }
  if ( *record_pointer && *(_WORD *)*record_pointer )
    GetLcidFromLangCountry(&Locale);
  else
    GetLcidFromLanguage(&Locale);
  if ( !(_DWORD)Locale )
  {
    if ( TranslateName_0((__int64)&off_14028F2D0, 64, (unsigned __int16 **)(call_result + 152)) )
    {
      if ( *record_pointer && *(_WORD *)*record_pointer )
        GetLcidFromLangCountry(&Locale);
      else
        GetLcidFromLanguage(&Locale);
    }
    goto LABEL_23;
  }
LABEL_24:
  processcodepage_0_result = ProcessCodePage_0((sr_anon_49 *)((a1 + 256) & -(__int64)(a1 != 0)), (__int64)&Locale);
  saved_processcodepage_0_result = processcodepage_0_result;
  if ( processcodepage_0_result
    && (unsigned int)((__int64 (           *)(_QWORD))IsValidCodePage)((unsigned __int16)processcodepage_0_result)
    && (unsigned int)((__int64 (           *)(_QWORD, __int64))IsValidLocale)(HIDWORD(Locale), 1) )
  {
    if ( a2 )
      *a2 = saved_processcodepage_0_result;
    sub_14024F460(HIDWORD(Locale), (_WORD *)(call_result + 752), 0x55u, 0);
    if ( !a3 )
      return 1; /* 0x140264104: je -> mov eax, 1 */
    {
      sub_14024F460(HIDWORD(Locale), (_WORD *)(a3 + 288), 0x55u, 0);
      if ( (unsigned int)((__int64 (           *)(_QWORD, __int64, __int64, __int64))GetLocaleInfoW)(
                           HIDWORD(Locale),
                           4097,
                           a3,
                           64) )
      {
        if ( (unsigned int)((__int64 (           *)(_QWORD, __int64, __int64, __int64))GetLocaleInfoW)(
                             (unsigned int)packed_word_bits,
                             4098,
                             a3 + 128,
                             64) )
        {
          itow_s(saved_processcodepage_0_result, (__int16 *)(a3 + 256), 0x10u, 0xAu);
          return 1; /* 0x14026416A: mov eax, 1 */
        }
      }
    }
  }
  return 0; /* 0x140264171: xor eax, eax */
}

// 14026E0E8: invalid function type 'BOOL (__stdcall *EnumSystemLocalesW)(LOCALE_ENUMPROCW lpLocaleEnumProc, DWORD dwFlags)' has been ignored
// 14026E0F0: invalid function type 'LCID (__stdcall *GetUserDefaultLCID)()' has been ignored
// 14026E080: invalid function type 'BOOL (__stdcall *IsValidCodePage)(UINT CodePage)' has been ignored
// 14026E0F8: invalid function type 'BOOL (__stdcall *IsValidLocale)(LCID Locale, DWORD dwFlags)' has been ignored
// 14026E100: invalid function type 'int (__stdcall *GetLocaleInfoW)(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData)' has been ignored

//----- (0000000140264190) ----------------------------------------------------
struct lconv *        localeconv()
{
  __int64 call_result;
  __int64 loaded_word;

  call_result = sub_140255A70();
  loaded_word = *(_QWORD *)(call_result + 144);
  sub_140255D2C(call_result, &loaded_word);
  return *(struct lconv **)(loaded_word + 248);
}

//----- (00000001402641E8) ----------------------------------------------------
int         chdrive(int Drive)
{
  int drive_os_error;
  __int64 unused_local;
  __int16 PathName;
  int unused_written_slot;
  __int64 unused_local_2;

  if ( (unsigned int)(Drive - 1) <= 0x19 )
  {
    unused_written_slot = 58;
    PathName = Drive + 64;
    if ( !(unsigned int)((__int64 (           *)(__int16 *))SetCurrentDirectoryW)(&PathName) )
    {
      drive_os_error = ((__int64 (*)(void))GetLastError)();
      crt_errno_map_os_error(drive_os_error);
    }
  }
  else
  {
    *(_DWORD *)crt_doserrno() = 15;
    *errno_sr() = 13;
    crt_invalid_parameter_noinfo();
  }
  return 0; /* the function has no caller */
}

// 14026E140: invalid function type 'BOOL (__stdcall *SetCurrentDirectoryW)(LPCWSTR lpPathName)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

/* Scoped typed recovery of allocator 0x14024DF98. */
__int64            sr_directory_calloc(unsigned __int64 allocation_element_count, unsigned __int64 allocation_element_size)
{
  __int64 allocation_byte_count;
  __int64 result;

  if ( allocation_element_count && 0xFFFFFFFFFFFFFFE0uLL / allocation_element_count < allocation_element_size )
  {
LABEL_10:
    *errno_sr() = 12;
    return 0;
  }
  else
  {
    allocation_byte_count = allocation_element_size * allocation_element_count;
    if ( !(allocation_element_size * allocation_element_count) )
      allocation_byte_count = 1;
    while ( 1 )
    {
      result = ((__int64 (           *)(_QWORD, __int64, __int64))HeapAlloc)(
                 g_144CBFA48,
                 8,
                 allocation_byte_count);
      if ( result )
        break;
      if ( !(unsigned int)sub_14024A06C() || !(unsigned int)callnewh(allocation_byte_count) )
        goto LABEL_10;
    }
  }
  return result;
}

// 14026E130: invalid function type 'LPVOID (__stdcall *HeapAlloc)(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes)' has been ignored

//----- (000000014026426C) ----------------------------------------------------
int getdrive()
{
  wchar_t buffer[261] = {0};
  wchar_t *path = buffer;
  wchar_t *allocated = NULL;
  unsigned int count = GetCurrentDirectoryW(261, buffer);
  unsigned int drive = 0;
  if (count > 260)
  {
    unsigned int capacity = count + 1;
    allocated = (wchar_t *)(uintptr_t)sr_directory_calloc(capacity, 2);
    path = allocated;
    if (!allocated || !GetCurrentDirectoryW(capacity, allocated))
    {
      *errno_sr() = 12;
      path = NULL;
    }
  }
  if (path && path[0] && path[1] == L':')
  {
    unsigned int letter = (unsigned short)path[0];
    if (letter - 97u <= 25u)
      letter -= 32u;
    drive = letter - 64u;
  }
  if (count > 260)
    free_base(allocated);
  /* The original cookie check preserves EAX; the C return is the EDI drive. */
  return (int)drive;
}

//----- (0000000140264364) ----------------------------------------------------
__int64            __acrt_convert_wcs_mbs_cp__char__wchar_t___lambda_7c9dea7b4ca7285d2cdb541a38da6275_____crt_win32_buffer_internal_dynamic_resizing_dup3(
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

//----- (00000001402644E0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_928()
{
  return crt_multi_byte_to_wide_char();
}

//----- (0000000140264508) ----------------------------------------------------
__int64 _acrt_SetEnvironmentVariableA(_BYTE *name, _BYTE *value) {
  sr_path_buffer wide_name={0},wide_value={0};
  unsigned int result=0;
  if(!(unsigned int)sr_path_mbs(name,(__int64)(uintptr_t)&wide_name,sr_chdir_codepage()) &&
     !(unsigned int)sr_path_mbs(value,(__int64)(uintptr_t)&wide_value,sr_chdir_codepage()))
    result=(unsigned int)SetEnvironmentVariableW((const wchar_t *)wide_name.buffer,(const wchar_t *)wide_value.buffer);
  if(wide_value.owned) free_base(wide_value.buffer);
  if(wide_name.owned) free_base(wide_name.buffer);
  return result;
}

//----- (00000001402646A0) ----------------------------------------------------
__int64            __acrt_convert_wcs_mbs_cp__char__wchar_t___lambda_7c9dea7b4ca7285d2cdb541a38da6275_____crt_win32_buffer_internal_dynamic_resizing_dup4(
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

//----- (000000014026481C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_929()
{
  return crt_multi_byte_to_wide_char();
}

//----- (0000000140264844) ----------------------------------------------------
__int64 _acrt_SetCurrentDirectoryA(_BYTE *path) {
  sr_path_buffer wide={0};
  unsigned int result=0;
  if(!(unsigned int)sr_path_mbs(path,(__int64)(uintptr_t)&wide,sr_chdir_codepage()))
    result=(unsigned int)SetCurrentDirectoryW((const wchar_t *)wide.buffer);
  if(wide.owned) free_base(wide.buffer);
  return result;
}

//----- (0000000140264914) ----------------------------------------------------
int         wmkdir(     sr_anon_49 *Path)
{
  int int64_result;

  if ( (unsigned int)((__int64 (           *)(     sr_anon_49 *, _QWORD))CreateDirectoryW)(Path, 0) )
    return 0;
  int64_result = ((__int64 (*)(void))GetLastError)();
  crt_errno_map_os_error(int64_result);
  return -1;
}

// 14026E030: invalid function type 'BOOL (__stdcall *CreateDirectoryW)(LPCWSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (0000000140264940) ----------------------------------------------------
int            fperrraise_with(unsigned int a1, int a2)
{
  unsigned int input_value;
  int state_address;
  int saved_state_address;
  int cached_state_address;
  int cached_state_address_2;
  int *errno_sr_result;
  int Except;

  Except = a2;
  input_value = a1 | 0x20;
  if ( (a1 & 0x18) == 0 )
    input_value = a1;
  state_address = (input_value >> 5) & 1 | 2;
  if ( (input_value & 0x10) == 0 )
    state_address = (input_value >> 5) & 1;
  saved_state_address = state_address | 4;
  if ( (input_value & 8) == 0 )
    saved_state_address = state_address;
  cached_state_address = saved_state_address | 8;
  if ( (input_value & 4) == 0 )
    cached_state_address = saved_state_address;
  cached_state_address_2 = cached_state_address | 0x10;
  if ( (input_value & 1) == 0 )
    cached_state_address_2 = cached_state_address;
  Except |= _acrt_fenv_get_fp_status_word_from_exception_mask_sr(cached_state_address_2);
  LODWORD(errno_sr_result) = fesetexceptflag_sr((     sr_anon_69 *)&Except, 31);
  if ( (input_value & 1) != 0 )
  {
    errno_sr_result = errno_sr();
    *errno_sr_result = 33;
  }
  else if ( (input_value & 0x1C) != 0 )
  {
    errno_sr_result = errno_sr();
    *errno_sr_result = 34;
  }
  return (int)errno_sr_result;
}

//----- (0000000140264AE8) ----------------------------------------------------
__int16         dtest_sr(double *Px)
{
  __int16 masked_bits;
  __int16 result;

  masked_bits = *((_WORD *)Px + 3) & 0x7FF0;
  if ( masked_bits == 32752 )
  {
    if ( (*((_BYTE *)Px + 6) & 0xF) != 0 )
      return 2;
    if ( *((_WORD *)Px + 2) )
      return 2;
    if ( *((_WORD *)Px + 1) )
      return 2;
    result = 1;
    if ( *(_WORD *)Px )
      return 2;
  }
  else
  {
    if ( (*((_WORD *)Px + 3) & 0x7FFF) != 0 )
      return (masked_bits != 0) - 2;
    result = 0;
    if ( *((_WORD *)Px + 2) || *((_WORD *)Px + 1) || *(_WORD *)Px )
      return (masked_bits != 0) - 2;
  }
  return result;
}

//----- (0000000140264C70) ----------------------------------------------------
void         fperrraise(int Except)
{
  unsigned int cached_except;
  int state_address;
  int saved_state_address;
  int cached_state_address;
  int cached_state_address_2;
  __int64 packed_word_bits;
  __int64 Excepta;

  fegetexceptflag((fexcept_t *)&Excepta, 31);
  LODWORD(packed_word_bits) = Excepta;
  cached_except = Except | 0x20;
  if ( (Except & 0x18) == 0 )
    cached_except = Except;
  state_address = (cached_except >> 5) & 1 | 2;
  if ( (cached_except & 0x10) == 0 )
    state_address = (cached_except >> 5) & 1;
  saved_state_address = state_address | 4;
  if ( (cached_except & 8) == 0 )
    saved_state_address = state_address;
  cached_state_address = saved_state_address | 8;
  if ( (cached_except & 4) == 0 )
    cached_state_address = saved_state_address;
  cached_state_address_2 = cached_state_address | 0x10;
  if ( (cached_except & 1) == 0 )
    cached_state_address_2 = cached_state_address;
  LODWORD(packed_word_bits) = _acrt_fenv_get_fp_status_word_from_exception_mask_sr(cached_state_address_2) | packed_word_bits;
  fesetexceptflag_sr((     sr_anon_69 *)&packed_word_bits, 31);
  if ( (cached_except & 1) != 0 )
  {
    *errno_sr() = 33;
  }
  else if ( (cached_except & 0x1C) != 0 )
  {
    *errno_sr() = 34;
  }
}

//----- (0000000140264D50) ----------------------------------------------------
__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}

//----- (0000000140264D60) ----------------------------------------------------
void            set_fpsr_sr(unsigned int a1)
{
  _mm_setcsr(a1);
}

//----- (0000000140264D6A) ----------------------------------------------------
void fclrf_sr()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}

//----- (0000000140264DEC) ----------------------------------------------------
__int64            GetTableIndexFromLocaleName(     sr_anon_49 *a1)
{
  int integer_sum;
  int integer_difference;
  int integer_quotient;
  int ascii_wcsnicmp_sr_result;

  integer_sum = 0;
  integer_difference = 227;
  while ( 1 )
  {
    integer_quotient = (integer_difference + integer_sum) / 2;
    ascii_wcsnicmp_sr_result = _ascii_wcsnicmp_sr((unsigned __int16 *)a1, (unsigned __int16 *)*(&off_140291E60 + 2 * integer_quotient), 85);
    if ( !ascii_wcsnicmp_sr_result )
      break;
    if ( ascii_wcsnicmp_sr_result >= 0 )
      integer_sum = integer_quotient + 1;
    else
      integer_difference = integer_quotient - 1;
    if ( integer_sum > integer_difference )
      return 0xFFFFFFFFLL;
  }
  return *((unsigned int *)&off_140291E60 + 4 * integer_quotient + 2);
}

//----- (0000000140264E74) ----------------------------------------------------
__int64            _acrt_DownlevelLCIDToLocaleName(int a1, _WORD *a2, int a3)
{
  __int64 input_value;
  int cached_integer_sum;
  int cached_integer_difference;
  int integer_quotient;
  __int64 scaled_index;
  int integer_difference;
  int integer_difference_2;
  int integer_sum;
  __m128i *loaded_record_pointer;
  int call_result;
  int cached_call_result;

  input_value = a3;
  if ( ((a1 & 0xFFFFF3FF) != 0 || a1 == 3072) && (a2 || (int)input_value <= 0) && (int)input_value >= 0 )
  {
    cached_integer_sum = 0;
    cached_integer_difference = 227;
    while ( 1 )
    {
      integer_quotient = (cached_integer_difference + cached_integer_sum) / 2;
      scaled_index = 4LL * integer_quotient;
      integer_difference = a1 - dword_140290400[scaled_index];
      if ( a1 == dword_140290400[scaled_index] )
        break;
      integer_difference_2 = integer_quotient - 1;
      if ( integer_difference >= 0 )
        integer_difference_2 = cached_integer_difference;
      integer_sum = integer_quotient + 1;
      cached_integer_difference = integer_difference_2;
      if ( integer_difference >= 0 )
        cached_integer_sum = integer_sum;
      if ( cached_integer_sum > integer_difference_2 )
      {
        integer_quotient = -1;
        break;
      }
    }
    if ( integer_quotient >= 0 )
    {
      loaded_record_pointer = *(__m128i **)&dword_140290400[4 * integer_quotient + 2];
      call_result = sub_140254F48(loaded_record_pointer, 0x55u);
      cached_call_result = call_result;
      if ( (int)input_value <= 0 )
        return (unsigned int)(cached_call_result + 1);
      if ( call_result < (int)input_value )
      {
        if ( (unsigned int)sub_140259444(a2, input_value, (__int64)loaded_record_pointer) )
        {
          crt_invoke_watson();
          __debugbreak();
        }
        return (unsigned int)(cached_call_result + 1);
      }
    }
  }
  return 0;
}

//----- (0000000140264F68) ----------------------------------------------------
__int64            _acrt_DownlevelLocaleNameToLCID(unsigned __int16 *a1)
{
  int integer_sum;
  int integer_difference;
  int integer_quotient;
  int ascii_wcsnicmp_sr_result;
  unsigned int scaled_index;

  if ( !a1 )
    return 0;
  integer_sum = 0;
  integer_difference = 227;
  while ( 1 )
  {
    integer_quotient = (integer_difference + integer_sum) / 2;
    ascii_wcsnicmp_sr_result = _ascii_wcsnicmp_sr(a1, (unsigned __int16 *)*(&off_140291E60 + 2 * integer_quotient), 85);
    if ( !ascii_wcsnicmp_sr_result )
      break;
    if ( ascii_wcsnicmp_sr_result >= 0 )
      integer_sum = integer_quotient + 1;
    else
      integer_difference = integer_quotient - 1;
    if ( integer_sum > integer_difference )
    {
      scaled_index = -1;
      goto LABEL_10;
    }
  }
  scaled_index = dword_140291E68[4 * integer_quotient];
LABEL_10:
  if ( scaled_index < 0xE4 )
    return (unsigned int)dword_140290400[4 * scaled_index];
  else
    return 0;
}

//----- (0000000140265018) ----------------------------------------------------
__int64            sub_140265018(__int64 a1, unsigned int *a2, int **a3, unsigned int *a4)
{
  __int64 osfhandle;
  unsigned int unused_written_slot;
  _DWORD *unused_written_slot_2;

  sub_140261068(*a2);
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)**a3 >> 6) + 19065401] + 72LL * (**a3 & 0x3F) + 56) & 1) == 0 )
    goto LABEL_4;
  osfhandle = get_osfhandle(**a3);
  unused_written_slot = 0;
  if ( !(unsigned int)((__int64 (           *)(__int64))FlushFileBuffers)(osfhandle) )
  {
    unused_written_slot_2 = crt_doserrno();
    *unused_written_slot_2 = ((__int64 (*)(void))GetLastError)();
LABEL_4:
    *errno_sr() = 9;
    unused_written_slot = -1;
  }
  sub_140261150(*a4);
  return unused_written_slot;
}

// 14026E028: invalid function type 'BOOL (__stdcall *FlushFileBuffers)(HANDLE hFile)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (00000001402650A4) ----------------------------------------------------
__int64            sub_1402650A4(unsigned int a1, int **a2)
{
  __int64 callee_output_word;
  unsigned int input_value;
  unsigned int input_value_2;

  input_value = a1;
  input_value_2 = a1;
  return sub_140265018((__int64)&callee_output_word, &input_value_2, a2, &input_value);
}

//----- (00000001402650E4) ----------------------------------------------------
__int64            _lambda_38ce7e780aa69e748d6df282ebc68efe___operator_call(int **a1)
{
  __int64 scaled_index;
  __int64 osfhandle;
  _DWORD *unused_written_slot;

  scaled_index = **a1;
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (scaled_index >> 6) + 19065401] + 72 * (scaled_index & 0x3F) + 56) & 1) != 0 )
  {
    osfhandle = get_osfhandle(scaled_index);
    if ( (unsigned int)((__int64 (           *)(__int64))FlushFileBuffers)(osfhandle) )
      return 0;
    unused_written_slot = crt_doserrno();
    *unused_written_slot = ((__int64 (*)(void))GetLastError)();
  }
  *errno_sr() = 9;
  return 0xFFFFFFFFLL;
}

// 14026E028: invalid function type 'BOOL (__stdcall *FlushFileBuffers)(HANDLE hFile)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (0000000140265160) ----------------------------------------------------
int         commit(int FileHandle)
{
  int *state_address;
  int cached_filehandle;
  char callee_output_word;
  int cached_filehandle_2;
  int cached_filehandle_3;

  cached_filehandle = FileHandle;
  if ( FileHandle == -2 )
  {
    *errno_sr() = 9;
  }
  else
  {
    if ( FileHandle >= 0
      && FileHandle < g_144CBF750
      && (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)FileHandle >> 6) + 19065401]
                   + 72LL * (FileHandle & 0x3F)
                   + 56)
        & 1) != 0 )
    {
      cached_filehandle_2 = FileHandle;
      cached_filehandle_3 = FileHandle;
      state_address = &cached_filehandle;
      return sub_140265018((__int64)&callee_output_word, (unsigned int *)&cached_filehandle_3, &state_address, (unsigned int *)&cached_filehandle_2);
    }
    *errno_sr() = 9;
    crt_invalid_parameter_noinfo();
  }
  return -1;
}

//----- (00000001402651F4) ----------------------------------------------------
__int64            _ascii_wcsnicmp_sr(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 result;
  int loaded_word;
  int loaded_word_2;
  int saved_loaded_word;
  int saved_loaded_word_2;

  if ( !a3 )
    return 0;
  do
  {
    loaded_word = *a1++;
    loaded_word_2 = *a2++;
    saved_loaded_word = loaded_word + 32;
    if ( (unsigned int)(loaded_word - 65) > 0x19 )
      saved_loaded_word = loaded_word;
    saved_loaded_word_2 = loaded_word_2 + 32;
    if ( (unsigned int)(loaded_word_2 - 65) > 0x19 )
      saved_loaded_word_2 = loaded_word_2;
    result = (unsigned int)(saved_loaded_word - saved_loaded_word_2);
    if ( (_DWORD)result )
      break;
    if ( !saved_loaded_word )
      break;
    --a3;
  }
  while ( a3 );
  return result;
}

//----- (000000014026529C) ----------------------------------------------------
__int64            wcsnicmp_sr(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3)
{
  if ( g_144CBF178 )
    return wcsnicmp_l(a1, a2, a3, 0);
  if ( a1 && a2 )
    return _ascii_wcsnicmp_sr(a1, a2, a3);
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0x7FFFFFFF;
}

// 14026529C: invalid function type 'int __cdecl wcsnicmp(const #49 *String1, const #49 *String2, #66 MaxCount)' has been ignored

//----- (00000001402652E4) ----------------------------------------------------
__int64            wcsnicmp_l(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3, struct __crt_locale_pointers *a4)
{
  __int64 remaining_count;
  unsigned __int16 *buffer_cursor;
  unsigned __int16 *buffer_cursor_2;
  __int64 table_value;
  unsigned int ascii_wcsnicmp_sr_result;
  __int64 loaded_word;
  unsigned __int16 saved_loaded_word;
  int cached_loaded_word;
  int cached_loaded_word_2;
  __int64 loaded_word_2;
  unsigned __int16 saved_loaded_word_2;
  __int64 callee_output_word;
  _QWORD scratch_buffer[2];
  char unrecovered_register_value;

  remaining_count = a3;
  buffer_cursor = a2;
  buffer_cursor_2 = a1;
  if ( a1 && a2 )
  {
    if ( a3 )
    {
      crt_locale_update((_LocaleUpdate *)&callee_output_word, a4);
      table_value = scratch_buffer[0];
      if ( *(_QWORD *)(scratch_buffer[0] + 312LL) )
      {
        do
        {
          if ( *buffer_cursor_2 >= 0x100u )
          {
            saved_loaded_word = sub_14026B084(*buffer_cursor_2, (struct __crt_locale_pointers *)scratch_buffer);
            table_value = scratch_buffer[0];
          }
          else
          {
            loaded_word = *(unsigned __int8 *)buffer_cursor_2;
            if ( (wctype[loaded_word + 1] & 1) != 0 )
              LOBYTE(loaded_word) = *(_BYTE *)(loaded_word + *(_QWORD *)(table_value + 272));
            saved_loaded_word = (unsigned __int8)loaded_word;
          }
          ++buffer_cursor_2;
          cached_loaded_word = saved_loaded_word;
          cached_loaded_word_2 = saved_loaded_word;
          if ( *buffer_cursor >= 0x100u )
          {
            saved_loaded_word_2 = sub_14026B084(*buffer_cursor, (struct __crt_locale_pointers *)scratch_buffer);
            table_value = scratch_buffer[0];
          }
          else
          {
            loaded_word_2 = *(unsigned __int8 *)buffer_cursor;
            if ( (wctype[loaded_word_2 + 1] & 1) != 0 )
              LOBYTE(loaded_word_2) = *(_BYTE *)(loaded_word_2 + *(_QWORD *)(table_value + 272));
            saved_loaded_word_2 = (unsigned __int8)loaded_word_2;
          }
          ++buffer_cursor;
          ascii_wcsnicmp_sr_result = cached_loaded_word_2 - saved_loaded_word_2;
          if ( ascii_wcsnicmp_sr_result )
            break;
          if ( !cached_loaded_word )
            break;
          --remaining_count;
        }
        while ( remaining_count );
      }
      else
      {
        ascii_wcsnicmp_sr_result = _ascii_wcsnicmp_sr(buffer_cursor_2, buffer_cursor, remaining_count);
      }
      if ( unrecovered_register_value )
        *(_DWORD *)(callee_output_word + 936) &= ~2u;
      return ascii_wcsnicmp_sr_result;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0x7FFFFFFF;
  }
}

// 1402652E4: invalid function type 'int __cdecl wcsnicmp_l(const #49 *String1, const #49 *String2, #66 MaxCount, _locale_t Locale)' has been ignored

//----- (0000000140265480) ----------------------------------------------------
__int64            strnicmp_sr(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  if ( g_144CBF178 )
    return strnicmp_l(a1, a2, a3, 0);
  if ( a1 && a2 && a3 <= 0x7FFFFFFF )
    return sr_client_ascii_strnicmp((const unsigned char *)(uintptr_t)a1, (const unsigned char *)(uintptr_t)a2, a3);
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0x7FFFFFFF;
}

// 140265480: invalid function type 'int __cdecl strnicmp(const char *String1, const char *String2, #66 MaxCount)' has been ignored
// 1402654BE: control flows out of bounds to 140265434

//----- (00000001402654D0) ----------------------------------------------------
__int64            strnicmp_l(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        struct __crt_locale_pointers *a4)
{
  unsigned __int64 remaining_count;
  unsigned __int8 *buffer_cursor;
  unsigned __int8 *buffer_cursor_2;
  __int64 result;
  __int64 loaded_word;
  __int64 loaded_word_2;
  int loaded_word_3;
  __int64 loaded_word_4;
  int loaded_word_5;
  _QWORD scratch_buffer[3];
  char unrecovered_register_value;

  remaining_count = a3;
  buffer_cursor = a2;
  buffer_cursor_2 = a1;
  if ( a1 && a2 && a3 <= 0x7FFFFFFF )
  {
    if ( a3 )
    {
      crt_locale_update((_LocaleUpdate *)scratch_buffer, a4);
      loaded_word = *(_QWORD *)(scratch_buffer[1] + 272LL);
      do
      {
        loaded_word_2 = *buffer_cursor_2++;
        loaded_word_3 = *(unsigned __int8 *)(loaded_word_2 + loaded_word);
        loaded_word_4 = *buffer_cursor++;
        loaded_word_5 = *(unsigned __int8 *)(loaded_word_4 + loaded_word);
        result = (unsigned int)(loaded_word_3 - loaded_word_5);
        if ( loaded_word_3 != loaded_word_5 )
          break;
        if ( !loaded_word_3 )
          break;
        --remaining_count;
      }
      while ( remaining_count );
      if ( unrecovered_register_value )
        *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0x7FFFFFFF;
  }
  return result;
}

// 1402654D0: invalid function type 'int __cdecl strnicmp_l(const char *String1, const char *String2, #66 MaxCount, _locale_t Locale)' has been ignored

//----- (0000000140265580) ----------------------------------------------------
__int64            __acrt_convert_wcs_mbs_cp__char__wchar_t___lambda_7c9dea7b4ca7285d2cdb541a38da6275_____crt_win32_buffer_internal_dynamic_resizing_dup5(
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

//----- (00000001402656FC) ----------------------------------------------------
__int64            common_open__char(_BYTE *a1, int a2, char a3)
{
  int sopen_nolock_result;
  __int64 shifted_bits;
  int integer_difference;
  int selection_flag;

  if ( !a1 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
  integer_difference = -1;
  selection_flag = 0;
  sopen_nolock_result = sopen_nolock(&selection_flag, (unsigned int *)&integer_difference, a1, a2, 64, a3);
  if ( selection_flag )
  {
    if ( sopen_nolock_result )
    {
      shifted_bits = *(_QWORD *)&dword_140404A6C[2 * ((__int64)integer_difference >> 6) + 19065401];
      *(_BYTE *)(shifted_bits + 72LL * (integer_difference & 0x3F) + 56) &= ~1u;
    }
    sub_140261150(integer_difference);
  }
  if ( sopen_nolock_result )
  {
    *errno_sr() = sopen_nolock_result;
    return 0xFFFFFFFFLL;
  }
  return (unsigned int)integer_difference;
}

//----- (00000001402657AC) ----------------------------------------------------
__int64            common_open__wchar_t(__int64 a1, int a2, char a3)
{
  int wsopen_nolock_result;
  __int64 shifted_bits;
  int integer_difference;
  int selection_flag;

  if ( !a1 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
  integer_difference = -1;
  selection_flag = 0;
  wsopen_nolock_result = wsopen_nolock(&selection_flag, (unsigned int *)&integer_difference, a1, a2, 64, a3);
  if ( selection_flag )
  {
    if ( wsopen_nolock_result )
    {
      shifted_bits = *(_QWORD *)&dword_140404A6C[2 * ((__int64)integer_difference >> 6) + 19065401];
      *(_BYTE *)(shifted_bits + 72LL * (integer_difference & 0x3F) + 56) &= ~1u;
    }
    sub_140261150(integer_difference);
  }
  if ( wsopen_nolock_result )
  {
    *errno_sr() = wsopen_nolock_result;
    return 0xFFFFFFFFLL;
  }
  return (unsigned int)integer_difference;
}

//----- (000000014026585C) ----------------------------------------------------
__int64            common_sopen_dispatch__char(_BYTE *a1, int a2, int a3, int a4, unsigned int *a5, int a6)
{
  unsigned int sopen_nolock_result;
  __int64 shifted_bits;
  int selection_flag;
  unsigned int unused_written_slot;

  if ( !a5 || (*a5 = -1, !a1) || a6 && (a4 & 0xFFFFFE7F) != 0 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 22;
  }
  else
  {
    selection_flag = 0;
    unused_written_slot = 0;
    sopen_nolock_result = sopen_nolock(&selection_flag, a5, a1, a2, a3, a4);
    unused_written_slot = sopen_nolock_result;
    if ( selection_flag )
    {
      if ( sopen_nolock_result )
      {
        shifted_bits = *(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)*a5 >> 6) + 19065401];
        *(_BYTE *)(shifted_bits + 72LL * (*a5 & 0x3F) + 56) &= ~1u;
      }
      sub_140261150(*a5);
    }
    if ( sopen_nolock_result )
      *a5 = -1;
    return sopen_nolock_result;
  }
}

//----- (0000000140265920) ----------------------------------------------------
__int64            common_sopen_dispatch__wchar_t(__int64 a1, int a2, int a3, int a4, unsigned int *a5, int a6)
{
  unsigned int wsopen_nolock_result;
  __int64 shifted_bits;
  int selection_flag;
  unsigned int unused_written_slot;

  if ( !a5 || (*a5 = -1, !a1) || a6 && (a4 & 0xFFFFFE7F) != 0 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 22;
  }
  else
  {
    selection_flag = 0;
    unused_written_slot = 0;
    wsopen_nolock_result = wsopen_nolock(&selection_flag, a5, a1, a2, a3, a4);
    unused_written_slot = wsopen_nolock_result;
    if ( selection_flag )
    {
      if ( wsopen_nolock_result )
      {
        shifted_bits = *(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)*a5 >> 6) + 19065401];
        *(_BYTE *)(shifted_bits + 72LL * (*a5 & 0x3F) + 56) &= ~1u;
      }
      sub_140261150(*a5);
    }
    if ( wsopen_nolock_result )
      *a5 = -1;
    return wsopen_nolock_result;
  }
}

//----- (0000000140265AC4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_934()
{
  return crt_multi_byte_to_wide_char();
}

//----- (0000000140265AEC) ----------------------------------------------------
__int64            sub_140265AEC(signed int a1, __int64 a2, int a3, _BYTE *a4)
{
  int running_total;
  int option_flags;
  int masked_bits;
  unsigned int masked_bits_2;
  int shifted_bits;
  int selection_flag;
  unsigned int loaded_word;
  int nolock;
  int scaled_index;
  int selection_code;
  int integer_difference;
  int write_result;
  int selection_code_2;

  running_total = 0;
  *a4 = 0;
  option_flags = a3;
  if ( *(char *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)a1 >> 6) + 19065401] + 72LL * (a1 & 0x3F) + 56) >= 0 )
    return 0;
  if ( (a3 & 0x74000) == 0 )
  {
    selection_code_2 = 0;
    if ( (unsigned int)sub_140247AA8(&selection_code_2) )
    {
      crt_invoke_watson();
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
    if ( (selection_code_2 & 0x74000) != 0 )
      option_flags |= selection_code_2 & 0x74000;
    else
      option_flags |= 0x4000u;
  }
  masked_bits = option_flags & 0x74000;
  if ( (option_flags & 0x74000) == 0x4000 )
  {
    *a4 = 0;
    goto LABEL_15;
  }
  if ( ((masked_bits - 0x10000) & 0xFFFFBFFF) == 0 )
  {
    if ( (option_flags & 0x301) != 0x301 )
      goto LABEL_15;
LABEL_13:
    *a4 = 2;
    goto LABEL_15;
  }
  if ( ((masked_bits - 0x20000) & 0xFFFFBFFF) == 0 )
    goto LABEL_13;
  if ( ((masked_bits - 0x40000) & 0xFFFFBFFF) == 0 )
    *a4 = 1;
LABEL_15:
  if ( (option_flags & 0x70000) == 0 || (*(_BYTE *)a2 & 0x40) != 0 )
    return 0;
  masked_bits_2 = *(_DWORD *)(a2 + 4) & 0xC0000000;
  shifted_bits = 0;
  selection_flag = 0;
  if ( masked_bits_2 != 0x40000000 )
  {
    if ( masked_bits_2 == 0x80000000 )
      goto LABEL_26;
    if ( masked_bits_2 != -1073741824 )
      return 0;
  }
  loaded_word = *(_DWORD *)(a2 + 8);
  if ( !loaded_word )
    return 0;
  if ( loaded_word <= 2 )
    goto LABEL_24;
  if ( loaded_word > 4 )
  {
    if ( loaded_word != 5 )
      return 0;
LABEL_24:
    selection_flag = 1;
LABEL_25:
    if ( !shifted_bits )
      goto LABEL_44;
LABEL_26:
    selection_code_2 = 0;
    nolock = read_nolock(a1, (__int16 *)&selection_code_2, 3u);
    if ( nolock > 0 && selection_flag == 1 )
      selection_flag = 0;
    if ( nolock == -1 )
      return (unsigned int)*errno_sr();
    if ( nolock != 2 )
    {
      if ( nolock != 3 )
        goto LABEL_43;
      if ( selection_code_2 == 12565487 )
      {
        *a4 = 1;
        goto LABEL_44;
      }
    }
    if ( (unsigned __int16)selection_code_2 == 65534 )
    {
      *errno_sr() = 22;
      return (unsigned int)*errno_sr();
    }
    if ( (unsigned __int16)selection_code_2 == 65279 )
    {
      if ( lseeki64_nolock(a1, 2, 0) == -1 )
        return (unsigned int)*errno_sr();
      *a4 = 2;
LABEL_44:
      if ( !selection_flag )
        return 0;
      goto LABEL_45;
    }
LABEL_43:
    if ( lseeki64_nolock(a1, 0, 0) == -1 )
      return (unsigned int)*errno_sr();
    goto LABEL_44;
  }
  if ( lseeki64_nolock(a1, 0, 2u) )
  {
    if ( lseeki64_nolock(a1, 0, 0) == -1 )
      return (unsigned int)*errno_sr();
    shifted_bits = *(_DWORD *)(a2 + 4) >> 31;
    goto LABEL_25;
  }
LABEL_45:
  scaled_index = (char)*a4;
  selection_code = 0;
  selection_code_2 = 0;
  integer_difference = scaled_index - 1;
  if ( integer_difference )
  {
    if ( integer_difference == 1 )
    {
      selection_code_2 = 65279;
      selection_code = 2;
      goto LABEL_50;
    }
  }
  else
  {
    selection_code_2 = 12565487;
    selection_code = 3;
  }
  if ( selection_code )
  {
LABEL_50:
    while ( 1 )
    {
      write_result = write(a1, (char *)&selection_code_2 + running_total, selection_code - running_total);
      if ( write_result == -1 )
        break;
      running_total += write_result;
      if ( selection_code <= running_total )
        return 0;
    }
    return (unsigned int)*errno_sr();
  }
  return 0;
}

// 140265D77: control flows out of bounds to 140265D7C

//----- (0000000140265D80) ----------------------------------------------------
__int64            sub_140265D80(__int64 a1, __int64 a2, unsigned int *a3)
{
  return ((__int64 (           *)(__int64, _QWORD, _QWORD, __int64, unsigned int, unsigned int, _QWORD))CreateFileW)(
           a1,
           a3[1],
           a3[3],
           a2,
           a3[2],
           a3[4] | a3[5],
           0);
}

// 14026E020: invalid function type 'HANDLE (__stdcall *CreateFileW)(LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile)' has been ignored

//----- (0000000140265DB8) ----------------------------------------------------
__int64            decode_access_flags(int a1)
{
  if ( (a1 & 3) == 0 )
    return 0x80000000LL;
  if ( (a1 & 3) != 1 )
  {
    if ( (a1 & 3) != 2 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0xFFFFFFFFLL;
    }
    return 3221225472LL;
  }
  if ( (a1 & 0x70000) != 0 && (a1 & 8) != 0 )
    return 3221225472LL;
  return 0x40000000;
}

//----- (0000000140265E14) ----------------------------------------------------
__int64            decode_open_create_flags(__int16 a1)
{
  int masked_bits;

  masked_bits = a1 & 0x700;
  if ( masked_bits )
  {
    switch ( masked_bits )
    {
      case 256:
        return 4;
      case 512:
        return 5;
      case 768:
        return 2;
    }
    if ( masked_bits != 1024 )
    {
      if ( masked_bits == 1280 )
        return 1;
      if ( masked_bits != 1536 )
      {
        if ( masked_bits != 1792 )
        {
          *errno_sr() = 22;
          crt_invalid_parameter_noinfo();
          return 0xFFFFFFFFLL;
        }
        return 1;
      }
      return 5;
    }
  }
  return 3;
}

//----- (0000000140265E90) ----------------------------------------------------
__int64            decode_options(__int64 a1, int a2, int a3, char a4)
{
  int comparison_result;
  int comparison_result_2;
  int masked_bits;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  int integer_difference_4;
  int integer_difference_5;
  int callee_output_word;

  *(_BYTE *)a1 = 0;
  comparison_result = -1;
  if ( (a2 & 3) != 0 )
  {
    if ( (a2 & 3) == 1 )
    {
      comparison_result_2 = (a2 & 8) != 0 && (a2 & 0x70000) != 0 ? -1073741824 : 0x40000000;
    }
    else if ( (a2 & 3) == 2 )
    {
      comparison_result_2 = -1073741824;
    }
    else
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      comparison_result_2 = -1;
    }
  }
  else
  {
    comparison_result_2 = 0x80000000;
  }
  *(_DWORD *)(a1 + 4) = comparison_result_2;
  masked_bits = a2 & 0x700;
  if ( (a2 & 0x700) != 0 )
  {
    switch ( masked_bits )
    {
      case 256:
        integer_difference = 4;
        goto LABEL_22;
      case 512:
LABEL_19:
        integer_difference = 5;
        goto LABEL_22;
      case 768:
        integer_difference = 2;
        goto LABEL_22;
    }
    if ( masked_bits != 1024 )
    {
      if ( masked_bits == 1280 )
      {
LABEL_17:
        integer_difference = 1;
        goto LABEL_22;
      }
      if ( masked_bits != 1536 )
      {
        if ( masked_bits != 1792 )
        {
          *errno_sr() = 22;
          crt_invalid_parameter_noinfo();
          comparison_result_2 = *(_DWORD *)(a1 + 4);
          integer_difference = -1;
          goto LABEL_22;
        }
        goto LABEL_17;
      }
      goto LABEL_19;
    }
  }
  integer_difference = 3;
LABEL_22:
  *(_DWORD *)(a1 + 8) = integer_difference;
  integer_difference_2 = a3 - 16;
  if ( integer_difference_2 )
  {
    integer_difference_3 = integer_difference_2 - 16;
    if ( integer_difference_3 )
    {
      integer_difference_4 = integer_difference_3 - 16;
      if ( integer_difference_4 )
      {
        integer_difference_5 = integer_difference_4 - 16;
        if ( integer_difference_5 )
        {
          if ( integer_difference_5 == 64 )
          {
            comparison_result = comparison_result_2 == 0x80000000;
          }
          else
          {
            *errno_sr() = 22;
            crt_invalid_parameter_noinfo();
          }
        }
        else
        {
          comparison_result = 3;
        }
      }
      else
      {
        comparison_result = 2;
      }
    }
    else
    {
      comparison_result = 1;
    }
  }
  else
  {
    comparison_result = 0;
  }
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 12) = comparison_result;
  *(_DWORD *)(a1 + 16) = 128;
  if ( (a2 & 0x80u) != 0 )
    *(_BYTE *)a1 |= 0x10u;
  if ( (a2 & 0x8000) == 0 )
  {
    if ( (a2 & 0x74000) != 0 )
      goto LABEL_39;
    if ( (unsigned int)sub_140247AA8(&callee_output_word) )
    {
      crt_invoke_watson();
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
    if ( callee_output_word != 0x8000 )
LABEL_39:
      *(_BYTE *)a1 |= 0x80u;
  }
  if ( (a2 & 0x100) != 0 && (a4 & ~LOBYTE(g_144CBFA80) & 0x80u) == 0 )
    *(_DWORD *)(a1 + 16) = 1;
  if ( (a2 & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 20) |= 0x4000000u;
    *(_DWORD *)(a1 + 4) |= 0x10000u;
    *(_DWORD *)(a1 + 12) |= 4u;
  }
  if ( (a2 & 0x1000) != 0 )
    *(_DWORD *)(a1 + 16) |= 0x100u;
  if ( (a2 & 0x2000) != 0 )
    *(_DWORD *)(a1 + 20) |= 0x2000000u;
  if ( (a2 & 0x20) != 0 )
  {
    *(_DWORD *)(a1 + 20) |= 0x8000000u;
  }
  else if ( (a2 & 0x10) != 0 )
  {
    *(_DWORD *)(a1 + 20) |= 0x10000000u;
  }
  return a1;
}

// 140266094: control flows out of bounds to 140266099

//----- (000000014026609C) ----------------------------------------------------
__int64            decode_sharing_flags(int a1, int a2)
{
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  int integer_difference_4;

  integer_difference = a1 - 16;
  if ( integer_difference )
  {
    integer_difference_2 = integer_difference - 16;
    if ( !integer_difference_2 )
      return 1;
    integer_difference_3 = integer_difference_2 - 16;
    if ( !integer_difference_3 )
      return 2;
    integer_difference_4 = integer_difference_3 - 16;
    if ( !integer_difference_4 )
      return 3;
    if ( integer_difference_4 != 64 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0xFFFFFFFFLL;
    }
    if ( a2 == 0x80000000 )
      return 1;
  }
  return 0;
}

//----- (00000001402660F4) ----------------------------------------------------
bool            is_text_mode(int a1)
{
  int callee_output_word;

  if ( (a1 & 0x8000) != 0 )
    return 0;
  if ( (a1 & 0x74000) != 0 )
    return 1;
  if ( (unsigned int)sub_140247AA8(&callee_output_word) )
  {
    crt_invoke_watson();
    do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
  }
  return callee_output_word != 0x8000;
}

// 140266139: control flows out of bounds to 14026613E

//----- (0000000140266140) ----------------------------------------------------
__int64            truncate_ctrl_z_if_present(int a1)
{
  __int64 input_value;
  char shifted_bits;
  __int64 lseeki64_nolock_result;
  __int16 selection_flag;

  input_value = a1;
  shifted_bits = *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (input_value >> 6) + 19065401] + 72 * (input_value & 0x3F) + 56);
  if ( (shifted_bits & 0x48) == 0 && shifted_bits < 0 )
  {
    lseeki64_nolock_result = lseeki64_nolock(input_value, -1, 2u);
    if ( lseeki64_nolock_result == -1 )
    {
      if ( *(_DWORD *)crt_doserrno() != 131 )
        return (unsigned int)*errno_sr();
    }
    else
    {
      selection_flag = 0;
      if ( !(unsigned int)read_nolock(input_value, &selection_flag, 1u)
        && selection_flag == 26
        && (unsigned int)chsize_nolock((unsigned int)input_value, lseeki64_nolock_result) == -1
        || lseeki64_nolock(input_value, 0, 0) == -1 )
      {
        return (unsigned int)*errno_sr();
      }
    }
  }
  return 0;
}

//----- (0000000140266204) ----------------------------------------------------
int open(     char *FileName, int OpenFlag, ...)
{
  char va_arg_result;
  va_list va;

  va_start(va, OpenFlag);
  va_arg_result = va_arg(va, _QWORD);
  return common_open__char(FileName, OpenFlag, va_arg_result);
}

//----- (0000000140266228) ----------------------------------------------------
int sopen(     char *FileName, int OpenFlag, int ShareFlag, ...)
{
  int common_sopen_dispatch_char_result;
  int unused_written_slot;
  unsigned int scratch_buffer[6];
  int va_arg_result;
  va_list va;

  va_start(va, ShareFlag);
  va_arg_result = va_arg(va, _QWORD);
  scratch_buffer[0] = -1;
  common_sopen_dispatch_char_result = common_sopen_dispatch__char(FileName, OpenFlag, ShareFlag, va_arg_result, scratch_buffer, 0);
  unused_written_slot = scratch_buffer[0];
  if ( common_sopen_dispatch_char_result )
    return -1;
  return unused_written_slot;
}

//----- (0000000140266274) ----------------------------------------------------
__int64 sopen_nolock(_DWORD *locked,unsigned int *descriptor,_BYTE *filename,
                     int flags,int sharing,char permissions)
{
  sr_path_locale locale;
  sr_path_buffer wide={0};
  unsigned int codepage=65001,result;
  crt_locale_update((_LocaleUpdate *)(void *)&locale,nullptr);
  if (*(unsigned int *)(locale.locale+12)!=65001)
    codepage=(unsigned int)sub_14024EDA4()?0:1;
  if (locale.changed) *(_DWORD *)(locale.thread+936)&=~2u;
  if ((unsigned int)sr_path_mbs(filename,(__int64)(uintptr_t)&wide,codepage)) result=UINT32_MAX;
  else result=(unsigned int)wsopen_nolock(locked,descriptor,(__int64)(uintptr_t)wide.buffer,
                                        flags,sharing,permissions);
  if (wide.owned) free_base(wide.buffer);
  return result;
}

//----- (000000014026638C) ----------------------------------------------------
__int64            sopen_s(unsigned int *a1, _BYTE *a2, int a3, int a4, int PermissionMode)
{
  return common_sopen_dispatch__char(a2, a3, a4, PermissionMode, a1, 1);
}

// 14026638C: invalid function type 'errno_t __cdecl sopen_s(int *FileHandle, const char *FileName, int OpenFlag, int ShareFlag, int PermissionMode)' has been ignored

//----- (00000001402663C0) ----------------------------------------------------
int wopen(     sr_anon_49 *FileName, int OpenFlag, ...)
{
  char va_arg_result;
  va_list va;

  va_start(va, OpenFlag);
  va_arg_result = va_arg(va, _QWORD);
  return common_open__wchar_t((__int64)FileName, OpenFlag, va_arg_result);
}

//----- (00000001402663E4) ----------------------------------------------------
int wsopen(     sr_anon_49 *FileName, int OpenFlag, int ShareFlag, ...)
{
  int common_sopen_dispatch_wchar_t_result;
  int unused_written_slot;
  unsigned int scratch_buffer[6];
  int va_arg_result;
  va_list va;

  va_start(va, ShareFlag);
  va_arg_result = va_arg(va, _QWORD);
  scratch_buffer[0] = -1;
  common_sopen_dispatch_wchar_t_result = common_sopen_dispatch__wchar_t((__int64)FileName, OpenFlag, ShareFlag, va_arg_result, scratch_buffer, 0);
  unused_written_slot = scratch_buffer[0];
  if ( common_sopen_dispatch_wchar_t_result )
    return -1;
  return unused_written_slot;
}

//----- (0000000140266430) ----------------------------------------------------
__int64            wsopen_nolock(_DWORD *a1, unsigned int *a2, __int64 a3, int a4, int a5, char a6)
{
  __m128i *options_result;
  __int64 table_value;
  unsigned __int64 vector_result;
  unsigned int alloc_osfhnd_result;
  __int32 table_value_2;
  unsigned __int64 table_value_3;
  __int64 combined_flags;
  __int64 int64_result;
  __int32 table_value_4;
  __int64 int64_result_2;
  int int64_result_3;
  int int64_result_4;
  int int64_result_5;
  __int8 table_value_5;
  __int8 combined_flags_2;
  __int64 shifted_bits;
  __int64 masked_bits;
  __int64 packed_word_bits;
  signed int loaded_word;
  unsigned int masked_bits_2;
  __int64 scaled_index;
  __int64 masked_bits_3;
  __int64 shifted_bits_2;
  __int64 int64_result_6;
  int int64_result_7;
  char scratch_buffer[4];
  unsigned int truncate_ctrl_z_if_present_result;
  __m128i loaded_word_2;
  __int64 cached_table_value;
  __int64 cached_table_value_2;
  __int64 comparison_operand;
  unsigned __int64 dwShareMode;
  _QWORD SecurityAttributes[3];
  __m128i saved_loaded_word;
  __int64 unused_written_slot;

  options_result = (__m128i *)decode_options((__int64)&saved_loaded_word, a4, a5, a6);
  table_value = SR_VEC_LANES(128, options_result[1], i64)[0];
  loaded_word_2 = *options_result;
  vector_result = SR_VEC_READ_LANES(128, _mm_srli_si128(loaded_word_2, 8), u64)[0];
  cached_table_value_2 = table_value;
  cached_table_value = table_value;
  dwShareMode = HIDWORD(vector_result);
  if ( HIDWORD(vector_result) == -1 )
  {
    *(_DWORD *)crt_doserrno() = 0;
    *a2 = -1;
    return (unsigned int)*errno_sr();
  }
  alloc_osfhnd_result = alloc_osfhnd();
  *a2 = alloc_osfhnd_result;
  if ( alloc_osfhnd_result == -1 )
  {
    *(_DWORD *)crt_doserrno() = 0;
    *a2 = -1;
    *errno_sr() = 24;
    return (unsigned int)*errno_sr();
  }
  table_value_2 = SR_VEC_LANES(128, loaded_word_2, i32)[2];
  table_value_3 = SR_VEC_LANES(128, loaded_word_2, i64)[0];
  combined_flags = (unsigned int)cached_table_value | HIDWORD(cached_table_value);
  *a1 = 1;
  LODWORD(SecurityAttributes[0]) = 24;
  SecurityAttributes[1] = 0;
  LODWORD(SecurityAttributes[2]) = (a4 & 0x80) == 0;
  comparison_operand = combined_flags;
  int64_result = ((__int64 (           *)(__int64, unsigned __int64, _QWORD, _QWORD *, __int32, _DWORD, _QWORD))CreateFileW)(
          a3,
          HIDWORD(table_value_3),
          HIDWORD(vector_result),
          SecurityAttributes,
          table_value_2,
          combined_flags,
          0);
  table_value_4 = SR_VEC_LANES(128, loaded_word_2, i32)[1];
  int64_result_2 = int64_result;
  if ( int64_result == -1 )
  {
    if ( (SR_VEC_LANES(128, loaded_word_2, i32)[1] & 0xC0000000) != 0xC0000000
      || (a4 & 1) == 0
      || (table_value_4 = SR_VEC_LANES(128, loaded_word_2, i32)[1] & 0x7FFFFFFF,
          SR_VEC_LANES(128, loaded_word_2, i32)[1] &= ~0x80000000,
          int64_result_2 = ((__int64 (           *)(__int64, unsigned __int64, _QWORD, _QWORD *, __int32, _DWORD, _QWORD))CreateFileW)(
                  a3,
                  HIDWORD(SR_VEC_LANES(128, loaded_word_2, i64)[0]),
                  HIDWORD(vector_result),
                  SecurityAttributes,
                  SR_VEC_LANES(128, loaded_word_2, i32)[2],
                  combined_flags,
                  0),
          int64_result_2 == -1) )
    {
      *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)*a2 >> 6) + 19065401] + 72LL * (*a2 & 0x3F) + 56) &= ~1u;
      int64_result_3 = ((__int64 (*)(void))GetLastError)();
      crt_errno_map_os_error(int64_result_3);
      return (unsigned int)*errno_sr();
    }
  }
  int64_result_4 = ((__int64 (           *)(__int64))GetFileType)(int64_result_2);
  if ( !int64_result_4 )
  {
    int64_result_5 = ((__int64 (*)(void))GetLastError)();
    crt_errno_map_os_error(int64_result_5);
    *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)*a2 >> 6) + 19065401] + 72LL * (*a2 & 0x3F) + 56) &= ~1u;
    ((void (           *)(__int64))CloseHandle)(int64_result_2);
    if ( !int64_result_5 )
      *errno_sr() = 13;
    return (unsigned int)*errno_sr();
  }
  table_value_5 = SR_VEC_LANES(128, loaded_word_2, i8)[0];
  if ( int64_result_4 == 2 )
  {
    table_value_5 = SR_VEC_LANES(128, loaded_word_2, i8)[0] | 0x40;
  }
  else if ( int64_result_4 == 3 )
  {
    table_value_5 = SR_VEC_LANES(128, loaded_word_2, i8)[0] | 8;
  }
  sub_140261090(*a2, int64_result_2);
  combined_flags_2 = table_value_5 | 1;
  shifted_bits = (__int64)(int)*a2 >> 6;
  masked_bits = *a2 & 0x3F;
  SR_VEC_LANES(128, loaded_word_2, i8)[0] = combined_flags_2;
  *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 72 * masked_bits + 56) = combined_flags_2;
  *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)*a2 >> 6) + 19065401] + 72LL * (*a2 & 0x3F) + 57) = 0;
  if ( (a4 & 2) != 0 )
  {
    truncate_ctrl_z_if_present_result = truncate_ctrl_z_if_present(*a2);
    if ( truncate_ctrl_z_if_present_result )
    {
      LODWORD(packed_word_bits) = *a2;
LABEL_21:
      close_nolock(packed_word_bits);
      return truncate_ctrl_z_if_present_result;
    }
  }
  loaded_word = *a2;
  saved_loaded_word = loaded_word_2;
  scratch_buffer[0] = 0;
  unused_written_slot = cached_table_value_2;
  masked_bits_2 = sub_140265AEC(loaded_word, (__int64)&saved_loaded_word, a4, scratch_buffer);
  packed_word_bits = (int)*a2;
  truncate_ctrl_z_if_present_result = masked_bits_2;
  if ( masked_bits_2 )
    goto LABEL_21;
  *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (packed_word_bits >> 6) + 19065401] + 72 * (packed_word_bits & 0x3F) + 57) = scratch_buffer[0];
  scaled_index = (int)*a2;
  masked_bits_3 = 9 * (scaled_index & 0x3F);
  shifted_bits_2 = *(_QWORD *)&dword_140404A6C[2 * (scaled_index >> 6) + 19065401];
  *(_BYTE *)(shifted_bits_2 + 8 * masked_bits_3 + 61) &= ~1u;
  *(_BYTE *)(shifted_bits_2 + 8 * masked_bits_3 + 61) |= BYTE2(a4) & 1;
  if ( (combined_flags_2 & 0x48) == 0 && (a4 & 8) != 0 )
    *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)*a2 >> 6) + 19065401] + 72LL * (*a2 & 0x3F) + 56) |= 0x20u;
  if ( (table_value_4 & 0xC0000000) == 0xC0000000 && (a4 & 1) != 0 )
  {
    ((void (           *)(__int64))CloseHandle)(int64_result_2);
    SR_VEC_LANES(128, loaded_word_2, i32)[1] = table_value_4 & 0x7FFFFFFF;
    int64_result_6 = ((__int64 (           *)(__int64, unsigned __int64, _QWORD, _QWORD *, __int32, _DWORD, _QWORD))CreateFileW)(
            a3,
            HIDWORD(SR_VEC_LANES(128, loaded_word_2, i64)[0]),
            (unsigned int)dwShareMode,
            SecurityAttributes,
            SR_VEC_LANES(128, loaded_word_2, i32)[2],
            comparison_operand,
            0);
    if ( int64_result_6 == -1 )
    {
      int64_result_7 = ((__int64 (*)(void))GetLastError)();
      crt_errno_map_os_error(int64_result_7);
      *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)*a2 >> 6) + 19065401] + 72LL * (*a2 & 0x3F) + 56) &= ~1u;
      free_osfhnd(*a2);
      return (unsigned int)*errno_sr();
    }
    *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)*a2 >> 6) + 19065401] + 72LL * (*a2 & 0x3F) + 40) = int64_result_6;
  }
  return 0;
}

// 14026E020: invalid function type 'HANDLE (__stdcall *CreateFileW)(LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E180: invalid function type 'DWORD (__stdcall *GetFileType)(HANDLE hFile)' has been ignored
// 14026E1B8: invalid function type 'BOOL (__stdcall *CloseHandle)(HANDLE hObject)' has been ignored

//----- (0000000140266818) ----------------------------------------------------
__int64            wsopen_s(unsigned int *a1, __int64 a2, int a3, int a4, int PermissionFlag)
{
  return common_sopen_dispatch__wchar_t(a2, a3, a4, PermissionFlag, a1, 1);
}

// 140266818: invalid function type 'errno_t __cdecl wsopen_s(int *FileHandle, const #49 *FileName, int OpenFlag, int ShareFlag, int PermissionFlag)' has been ignored

//----- (000000014026684C) ----------------------------------------------------
int         isatty(int FileHandle)
{
  if ( FileHandle == -2 )
  {
    *errno_sr() = 9;
  }
  else
  {
    if ( FileHandle >= 0 && FileHandle < g_144CBF750 )
      return *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)FileHandle >> 6) + 19065401]
                      + 72LL * (FileHandle & 0x3F)
                      + 56)
           & 0x40;
    *errno_sr() = 9;
    crt_invalid_parameter_noinfo();
  }
  return 0;
}

//----- (00000001402668D4) ----------------------------------------------------
unsigned __int64            __crt_mbstring____mbrtowc_utf8(sr_anon_115 *this, sr_anon_49 *a2,      char *a3, unsigned int *a4)
{
  unsigned __int64 result;
  __int16 integer_difference;
  unsigned int scratch_buffer[6];

  result = __crt_mbstring____mbrtoc32_utf8((__int64)scratch_buffer, (char *)a2, (unsigned __int64)a3, a4);
  if ( result <= 4 )
  {
    integer_difference = scratch_buffer[0];
    if ( scratch_buffer[0] > 0xFFFF )
      integer_difference = -3;
    if ( this )
      *(_WORD *)this = integer_difference;
  }
  return result;
}

//----- (0000000140266910) ----------------------------------------------------
__int64            __crt_mbstring____mbsrtowcs_utf8(sr_anon_115 *this, char **a2,      char **a3, unsigned int *a4)
{
  char *running_total;
       char **input_cursor;
  sr_anon_115 *cached_this;
  unsigned __int64 comparison_result;
  __int64 crt_mbstring_mbrtoc32_utf8_result;
  __int16 masked_bits;
  unsigned int integer_difference;
  __int64 i;
  unsigned __int64 comparison_result_2;
  __int64 crt_mbstring_mbrtoc32_utf8_result_2;
  unsigned int callee_output_word;

  running_total = *a2;
  input_cursor = a3;
  if ( !this )
  {
    for ( i = 0; ; ++i )
    {
      if ( *running_total )
        comparison_result_2 = running_total[1] ? (running_total[2] != 0) + 3LL : 2LL;
      else
        comparison_result_2 = 1;
      crt_mbstring_mbrtoc32_utf8_result_2 = __crt_mbstring____mbrtoc32_utf8(0, running_total, comparison_result_2, a4);
      if ( crt_mbstring_mbrtoc32_utf8_result_2 == -1 )
        break;
      if ( !crt_mbstring_mbrtoc32_utf8_result_2 )
        return i;
      if ( crt_mbstring_mbrtoc32_utf8_result_2 == 4 )
        ++i;
      running_total += crt_mbstring_mbrtoc32_utf8_result_2;
    }
    goto LABEL_18;
  }
  cached_this = this;
  if ( a3 )
  {
    while ( 1 )
    {
      if ( *running_total )
        comparison_result = running_total[1] ? (running_total[2] != 0) + 3LL : 2LL;
      else
        comparison_result = 1;
      crt_mbstring_mbrtoc32_utf8_result = __crt_mbstring____mbrtoc32_utf8((__int64)&callee_output_word, running_total, comparison_result, a4);
      if ( crt_mbstring_mbrtoc32_utf8_result == -1 )
        break;
      if ( !crt_mbstring_mbrtoc32_utf8_result )
      {
        running_total = nullptr;
        *(_WORD *)cached_this = 0;
        goto LABEL_14;
      }
      masked_bits = callee_output_word;
      if ( callee_output_word > 0xFFFF )
      {
        if ( (unsigned __int64)input_cursor <= 1 )
          goto LABEL_14;
        integer_difference = callee_output_word - 0x10000;
        callee_output_word = integer_difference;
        input_cursor = (     char **)((char *)input_cursor - 1);
        *(_WORD *)cached_this = (integer_difference >> 10) | 0xD800;
        cached_this = (sr_anon_115 *)((char *)cached_this + 2);
        masked_bits = integer_difference & 0x3FF | 0xDC00;
      }
      *(_WORD *)cached_this = masked_bits;
      running_total += crt_mbstring_mbrtoc32_utf8_result;
      cached_this = (sr_anon_115 *)((char *)cached_this + 2);
      input_cursor = (     char **)((char *)input_cursor - 1);
      if ( !input_cursor )
        goto LABEL_14;
    }
    *a2 = running_total;
LABEL_18:
    *errno_sr() = 42;
    return -1;
  }
LABEL_14:
  *a2 = running_total;
  return ((intptr_t)((uintptr_t)cached_this - (uintptr_t)this)) >> 1;
}

//----- (0000000140266A88) ----------------------------------------------------
__int64            _mbrtowc_s_l_sr(int *a1, sr_anon_49 *a2, sr_anon_49 *a3,      char *a4, struct _Mbstatet *a5, struct sr_anon_68 *a6)
{
  int crt_mbstring_mbrtowc_utf8_result;
  unsigned __int64 loaded_word;
  __int64 result;
  unsigned __int64 iteration_count;
  __int64 iteration_count_2;
  __int64 callee_output_word;
  __int64 callee_output_word_2;
  char unrecovered_register_value;

  if ( a2 )
    *(_WORD *)a2 = 0;
  if ( a3 && a4 && *(_BYTE *)a3 )
  {
    crt_locale_update((_LocaleUpdate *)&callee_output_word, a6);
    if ( *(_DWORD *)(callee_output_word_2 + 12) == 65001 )
    {
      crt_mbstring_mbrtowc_utf8_result = __crt_mbstring____mbrtowc_utf8(a2, a3, a4, (unsigned int *)a5);
      if ( a1 )
        *a1 = crt_mbstring_mbrtowc_utf8_result;
LABEL_41:
      result = (unsigned int)*errno_sr();
LABEL_15:
      if ( unrecovered_register_value )
        *(_DWORD *)(callee_output_word + 936) &= ~2u;
      return result;
    }
    loaded_word = *(int *)(callee_output_word_2 + 8);
    if ( !*(_QWORD *)(callee_output_word_2 + 312) )
    {
      if ( a2 )
        *(_WORD *)a2 = *(unsigned __int8 *)a3;
      goto LABEL_12;
    }
    if ( *(_DWORD *)a5 )
    {
      *((_BYTE *)a5 + 1) = *(_BYTE *)a3;
      if ( (int)loaded_word > 1 && (unsigned int)crt_multi_byte_to_wide_char() )
      {
        *(_DWORD *)a5 = 0;
LABEL_21:
        if ( a1 )
          *a1 = loaded_word;
        goto LABEL_14;
      }
    }
    else
    {
      if ( !(unsigned int)isleadbyte_l(*(unsigned __int8 *)a3, (struct __crt_locale_pointers *)&callee_output_word_2) )
      {
        if ( (unsigned int)crt_multi_byte_to_wide_char() )
        {
LABEL_12:
          if ( a1 )
            *a1 = 1;
LABEL_14:
          result = 0;
          goto LABEL_15;
        }
LABEL_37:
        *errno_sr() = 42;
        if ( a2 )
          *(_WORD *)a2 = 0;
        if ( a1 )
          *a1 = -1;
        goto LABEL_41;
      }
      if ( (unsigned __int64)a4 < loaded_word )
      {
        *(_BYTE *)a5 = *(_BYTE *)a3;
        if ( a1 )
          *a1 = -2;
        goto LABEL_14;
      }
      if ( (int)loaded_word > 1 )
      {
        iteration_count = -1;
        do
          ++iteration_count;
        while ( *((_BYTE *)a3 + iteration_count) );
        if ( iteration_count < 0x7FFFFFFF )
        {
          iteration_count_2 = -1;
          do
            ++iteration_count_2;
          while ( *((_BYTE *)a3 + iteration_count_2) );
        }
        if ( (unsigned int)crt_multi_byte_to_wide_char() )
          goto LABEL_21;
      }
      if ( *((_BYTE *)a3 + 1) )
        goto LABEL_21;
    }
    *(_DWORD *)a5 = 0;
    goto LABEL_37;
  }
  if ( a1 )
    *a1 = 0;
  return 0;
}

//----- (0000000140266CDC) ----------------------------------------------------
__int64            _mbsrtowcs_helper_sr(sr_anon_49 *a1, sr_anon_49 **a2,      char **a3, struct sr_anon_130 *a4)
{
  char *running_total;
  __int64 crt_mbstring_mbsrtowcs_utf8_result;
  unsigned int *state_address;
  int selection_flag;
  __int64 callee_output_word;
  __int128 packed_vector;
  char unrecovered_register_value;
  __int64 callee_output_word_2;

  if ( a2 )
  {
    running_total = (char *)*a2;
    selection_flag = 0;
    crt_mbstring_mbsrtowcs_utf8_result = 0;
    crt_locale_update((_LocaleUpdate *)&callee_output_word, nullptr);
    state_address = &g_144CBFA78;
    if ( a4 )
      state_address = (unsigned int *)a4;
    if ( *(_DWORD *)(packed_vector + 12) == 65001 )
    {
      crt_mbstring_mbsrtowcs_utf8_result = __crt_mbstring____mbsrtowcs_utf8(a1, (char **)a2, a3, state_address);
    }
    else if ( a1 )
    {
      if ( a3 )
      {
        while ( 1 )
        {
          _mbrtowc_s_l_sr(&selection_flag, a1, (sr_anon_49 *)running_total, (     char *)0x7FFFFFFF, (struct _Mbstatet *)state_address, (struct sr_anon_68 *)&packed_vector);
          if ( selection_flag < 0 )
            break;
          if ( !selection_flag )
          {
            running_total = nullptr;
            goto LABEL_20;
          }
          ++crt_mbstring_mbsrtowcs_utf8_result;
          running_total += selection_flag;
          a1 = (sr_anon_49 *)((char *)a1 + 2);
          a3 = (     char **)((char *)a3 - 1);
          if ( !a3 )
            goto LABEL_20;
        }
        crt_mbstring_mbsrtowcs_utf8_result = -1;
      }
LABEL_20:
      *a2 = (sr_anon_49 *)running_total;
    }
    else
    {
      while ( 1 )
      {
        _mbrtowc_s_l_sr(
          &selection_flag,
          (sr_anon_49 *)&callee_output_word_2,
          (sr_anon_49 *)running_total,
          (     char *)0x7FFFFFFF,
          (struct _Mbstatet *)state_address,
          (struct sr_anon_68 *)&packed_vector);
        if ( selection_flag < 0 )
          break;
        if ( !selection_flag )
          goto LABEL_21;
        ++crt_mbstring_mbsrtowcs_utf8_result;
        running_total += selection_flag;
      }
      crt_mbstring_mbsrtowcs_utf8_result = -1;
    }
LABEL_21:
    if ( unrecovered_register_value )
      *(_DWORD *)(callee_output_word + 936) &= ~2u;
    return crt_mbstring_mbsrtowcs_utf8_result;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return -1;
  }
}

//----- (0000000140266E3C) ----------------------------------------------------
__int16            btowc_sr(int a1)
{
  __int16 result;
  char input_value;
  __int64 callee_output_word;
  int integer_difference;
  __int64 selection_flag;

  if ( a1 == -1 )
    return -1;
  integer_difference = -1;
  input_value = a1;
  selection_flag = 0;
  LOWORD(callee_output_word) = 0;
  _mbrtowc_s_l_sr(&integer_difference, (sr_anon_49 *)&callee_output_word, (sr_anon_49 *)&input_value, (     char *)1, (struct _Mbstatet *)&selection_flag, nullptr);
  result = callee_output_word;
  if ( integer_difference < 0 )
    return -1;
  return result;
}

// 140266E3C: invalid function type 'wint_t __cdecl btowc(int Ch)' has been ignored

//----- (0000000140266EA4) ----------------------------------------------------
__int64            mbrlen_sr(sr_anon_49 *a1,      char *a2, struct _Mbstatet *a3)
{
  struct _Mbstatet *state_address;
  int integer_difference;

  integer_difference = -1;
  state_address = (struct _Mbstatet *)&g_144CBFA68;
  if ( a3 )
    state_address = a3;
  _mbrtowc_s_l_sr(&integer_difference, nullptr, a1, a2, state_address, nullptr);
  return integer_difference;
}

// 140266EA4: invalid function type '#66 __cdecl mbrlen(const char *Ch, #66 SizeInBytes, mbstate_t *State)' has been ignored

//----- (0000000140266EE4) ----------------------------------------------------
__int64            mbrtowc_sr(__int64 a1, sr_anon_49 *a2, __int64 a3, struct _Mbstatet *a4)
{
  struct _Mbstatet *state_address;
  sr_anon_49 *cached_parameters;
  int integer_difference;

  integer_difference = -1;
  state_address = (struct _Mbstatet *)&g_144CBFA70;
  if ( a4 )
    state_address = a4;
  if ( !a2 )
    a3 = 1;
  cached_parameters = a2;
  if ( !a2 )
    cached_parameters = (sr_anon_49 *)Parameters;
  _mbrtowc_s_l_sr(&integer_difference, (sr_anon_49 *)(a1 & -(__int64)(a2 != nullptr)), cached_parameters, (     char *)a3, state_address, nullptr);
  return integer_difference;
}

// 140266EE4: invalid function type '#66 __cdecl mbrtowc(#49 *DstCh, const char *SrcCh, #66 SizeInBytes, mbstate_t *State)' has been ignored

//----- (0000000140266F4C) ----------------------------------------------------
__int64            mbsrtowcs_s_sr(
        unsigned __int64 *a1,
        sr_anon_49 *a2,
             char **a3,
        sr_anon_49 **a4,
             char **N,
        struct sr_anon_130 *State)
{
       char **cached_n;
  __int64 mbsrtowcs_helper_sr_result;
  int *unused_written_slot;
  unsigned int selection_code;
  unsigned __int64 integer_sum;

  if ( a1 )
    *a1 = -1;
  if ( !a2 )
  {
    if ( !a3 )
      goto LABEL_5;
LABEL_15:
    unused_written_slot = errno_sr();
    selection_code = 22;
LABEL_16:
    *unused_written_slot = selection_code;
    crt_invalid_parameter_noinfo();
    return selection_code;
  }
  if ( !a3 )
    goto LABEL_15;
LABEL_5:
  if ( a2 )
    *(_WORD *)a2 = 0;
  if ( !a4 )
    goto LABEL_15;
  cached_n = N;
  if ( N > a3 )
    cached_n = a3;
  mbsrtowcs_helper_sr_result = _mbsrtowcs_helper_sr(a2, a4, cached_n, State);
  if ( mbsrtowcs_helper_sr_result == -1 )
  {
    if ( a2 )
      *(_WORD *)a2 = 0;
    return (unsigned int)*errno_sr();
  }
  integer_sum = mbsrtowcs_helper_sr_result + 1;
  if ( a2 )
  {
    if ( integer_sum <= (unsigned __int64)a3 )
    {
      *((_WORD *)a2 + integer_sum - 1) = 0;
    }
    else
    {
      *(_WORD *)a2 = 0;
      if ( integer_sum < (unsigned __int64)a3 )
      {
        unused_written_slot = errno_sr();
        selection_code = 34;
        goto LABEL_16;
      }
    }
  }
  if ( a1 )
    *a1 = integer_sum;
  return 0;
}

// 140266F4C: invalid function type 'errno_t __cdecl mbsrtowcs_s(#66 *Retval, #49 *Dst, #66 Size, const char **PSrc, #66 N, mbstate_t *State)' has been ignored

//----- (0000000140267020) ----------------------------------------------------
__int64            sub_140267020(__int64 a1, unsigned int *a2, unsigned __int16 **a3, unsigned int *a4)
{
  crt_lock(*a2);
  LOWORD(a3) = putwch_nolock(**a3);
  crt_unlock(*a4);
  return (unsigned __int16)a3;
}

//----- (0000000140267060) ----------------------------------------------------
__int64            sub_140267060(unsigned int a1, unsigned __int16 **a2)
{
  __int64 callee_output_word;
  unsigned int input_value;
  unsigned int input_value_2;

  input_value = a1;
  input_value_2 = a1;
  return sub_140267020((__int64)&callee_output_word, &input_value_2, a2, &input_value);
}

//----- (00000001402670BC) ----------------------------------------------------
__int64            putwch(__int16 a1)
{
  unsigned __int16 *state_address;
  __int16 input_value;
  __int64 callee_output_word;
  unsigned int selection_code;
  unsigned int selection_code_2;

  input_value = a1;
  state_address = (unsigned __int16 *)&input_value;
  selection_code = 9;
  selection_code_2 = 9;
  return sub_140267020((__int64)&callee_output_word, &selection_code_2, &state_address, &selection_code);
}

// 1402670BC: invalid function type 'wint_t __cdecl putwch(#49 Character)' has been ignored

//----- (00000001402670F8) ----------------------------------------------------
__int64            putwch_nolock(unsigned __int16 a1)
{
  unsigned __int16 Buffer;
  int NumberOfCharsWritten;

  Buffer = a1;
  if ( (unsigned int)_dcrt_lowio_ensure_console_output_initialized()
    && (unsigned int)unknown_libname_946((__int64)&Buffer, 1u, (__int64)&NumberOfCharsWritten) )
  {
    return Buffer;
  }
  else
  {
    return 0xFFFF;
  }
}

// 1402670F8: invalid function type 'wint_t __cdecl putwch_nolock(#49 Character)' has been ignored

//----- (0000000140267134) ----------------------------------------------------
__int64            __crt_mbstring____c32rtomb_utf8(_BYTE *a1, unsigned int a2, _QWORD *a3)
{
  __int64 selection_code;
  char integer_difference;
  __int64 remaining_count;
  char input_value;

  if ( !a1 )
    goto LABEL_2;
  if ( !a2 )
  {
    *a1 = 0;
LABEL_2:
    *a3 = 0;
    return 1;
  }
  if ( (a2 & 0xFFFFFF80) == 0 )
  {
    *a1 = a2;
    return 1;
  }
  if ( (a2 & 0xFFFFF800) == 0 )
  {
    selection_code = 1;
    integer_difference = -64;
    goto LABEL_16;
  }
  if ( (a2 & 0xFFFF0000) == 0 )
  {
    if ( a2 - 55296 > 0x7FF )
    {
      selection_code = 2;
      integer_difference = -32;
      goto LABEL_16;
    }
LABEL_19:
    *a3 = 0;
    *errno_sr() = 42;
    return -1;
  }
  if ( (a2 & 0xFFE00000) != 0 || a2 > 0x10FFFF )
    goto LABEL_19;
  selection_code = 3;
  integer_difference = -16;
LABEL_16:
  remaining_count = selection_code;
  do
  {
    input_value = a2;
    a2 >>= 6;
    a1[remaining_count--] = input_value & 0x3F | 0x80;
  }
  while ( remaining_count );
  *a1 = integer_difference | a2;
  *a3 = 0;
  return selection_code + 1;
}

//----- (00000001402671F0) ----------------------------------------------------
unsigned __int64            __crt_mbstring__return_illegal_sequence(sr_anon_115 *this, struct _Mbstatet *a2)
{
  *(_QWORD *)this = 0;
  *errno_sr() = 42;
  return -1;
}

//----- (0000000140267214) ----------------------------------------------------
__int64            _acrt_fp_strflt_to_string(__int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  int remaining_count;
  int *unused_written_slot;
  unsigned int selection_code;
  int input_value;
  char *loaded_record_pointer;
  char *text_cursor;
  char *saved_loaded_record_pointer;
  char input_byte;
  __int64 iteration_count;

  remaining_count = a3;
  if ( !a1 || !a2 )
    goto LABEL_2;
  input_value = 0;
  *(_BYTE *)a1 = 0;
  if ( a3 > 0 )
    input_value = a3;
  if ( a2 <= input_value + 1 )
  {
    unused_written_slot = errno_sr();
    selection_code = 34;
    goto LABEL_3;
  }
  if ( !a4 )
  {
LABEL_2:
    unused_written_slot = errno_sr();
    selection_code = 22;
LABEL_3:
    *unused_written_slot = selection_code;
    crt_invalid_parameter_noinfo();
    return selection_code;
  }
  loaded_record_pointer = *(char **)(a4 + 8);
  text_cursor = (char *)(a1 + 1);
  *(_BYTE *)a1 = 48;
  while ( remaining_count > 0 )
  {
    saved_loaded_record_pointer = loaded_record_pointer + 1;
    input_byte = 48;
    if ( *loaded_record_pointer )
      input_byte = *loaded_record_pointer;
    else
      saved_loaded_record_pointer = loaded_record_pointer;
    *text_cursor = input_byte;
    loaded_record_pointer = saved_loaded_record_pointer;
    ++text_cursor;
    --remaining_count;
  }
  *text_cursor = 0;
  if ( remaining_count >= 0 && *loaded_record_pointer >= 53 )
  {
    while ( *--text_cursor == 57 )
      *text_cursor = 48;
    ++*text_cursor;
  }
  if ( *(_BYTE *)a1 == 49 )
  {
    ++*(_DWORD *)(a4 + 4);
  }
  else
  {
    iteration_count = -1;
    do
      ++iteration_count;
    while ( *(_BYTE *)(a1 + iteration_count + 1) );
    crt_memcpy((__m128i *)a1, (     __m128i *)(a1 + 1), iteration_count + 1);
  }
  return 0;
}

//----- (00000001402672F8) ----------------------------------------------------
__int64            sub_1402672F8(double a1, unsigned int a2, int *a3, _BYTE *a4, __int64 a5)
{
  unsigned __int64 state_address;
  unsigned int state_address_2;
  double log10_result;
  double ceil_result;
  unsigned __int64 lookup_index;
  unsigned int saved_element_index;
  int element_index;
  unsigned int state_address_3;
  unsigned int shifted_bits;
  int state_address_4;
  bool bitscanreverse_result;
  int callee_output_word;
  int integer_sum;
  unsigned __int64 byte_count;
  unsigned int integer_sum_2;
  char selection_flag;
  unsigned int iteration_count;
  unsigned int remaining_count;
  __int64 integer_difference;
  __int64 integer_difference_2;
  __int32 table_value;
  __int32 table_value_2;
  __int64 integer_difference_3;
  unsigned int iteration_count_2;
  __int64 integer_sum_3;
  unsigned int saved_element_index_2;
  unsigned int state_address_5;
  unsigned int shifted_bits_2;
  int state_address_6;
  int callee_output_word_2;
  int integer_sum_4;
  unsigned int integer_sum_5;
  char selection_flag_2;
  unsigned int remaining_count_2;
  __int64 integer_difference_4;
  __int64 integer_difference_5;
  __int32 table_value_3;
  __int32 table_value_4;
  __int64 integer_difference_6;
  unsigned int iteration_count_3;
  __int64 integer_sum_6;
  int element_index_2;
  int callee_output_word_3;
  int integer_sum_7;
  unsigned int integer_difference_7;
  unsigned int remaining_count_3;
  __int64 saved_remaining_count;
  __int64 integer_difference_8;
  __int32 table_value_5;
  unsigned __int32 table_value_6;
  unsigned int integer_difference_9;
  unsigned int shifted_bits_3;
  int callee_output_word_4;
  int integer_sum_8;
  int integer_difference_10;
  unsigned int remaining_count_4;
  __int64 saved_remaining_count_2;
  __int64 integer_difference_11;
  __int32 table_value_7;
  unsigned __int32 table_value_8;
  unsigned int integer_difference_12;
  unsigned int saved_comparison_result;
  unsigned int integer_quotient;
  unsigned int remaining_amount;
  int saved_remaining_amount;
  __int64 integer_difference_13;
  __int64 lookup_index_2;
  __int64 scaled_index;
  unsigned __int64 byte_count_2;
  unsigned int cached_scaled_index;
  unsigned int iteration_count_4;
  __int64 table_value_9;
  __int64 integer_sum_9;
  unsigned __int64 scaled_index_2;
  char selection_flag_3;
  __int64 table_value_10;
  unsigned int iteration_count_5;
  __int64 integer_sum_10;
  unsigned __int64 scaled_index_3;
  unsigned int cached_element_index;
  __m128i *cached_source;
  __m128i *cached_source_2;
  unsigned int element_index_3;
  __int64 table_value_11;
  unsigned __int64 packed_word_bits;
  __int64 saved_byte_count;
  __int64 integer_difference_14;
  unsigned __int64 scaled_index_4;
  __int64 saved_byte_count_2;
  __int64 table_value_12;
  unsigned int scaled_index_5;
  unsigned int integer_difference_15;
  unsigned int iteration_count_6;
  __int64 integer_sum_11;
  unsigned __int64 scaled_index_6;
  _BYTE *byte_cursor;
  _BYTE *running_total;
  unsigned int iteration_count_7;
  __int64 integer_sum_12;
  unsigned __int64 scaled_index_7;
  int integer_difference_16;
  unsigned int saved_packed_word_bits;
  unsigned int remaining_amount_2;
  int saved_remaining_amount_2;
  __int64 integer_difference_17;
  __int64 lookup_index_3;
  __int64 scaled_index_8;
  unsigned __int64 byte_count_3;
  unsigned int saved_iteration_count;
  unsigned int iteration_count_8;
  __int64 table_value_13;
  __int64 integer_sum_13;
  unsigned __int64 scaled_index_9;
  char selection_flag_4;
  __int64 table_value_14;
  unsigned int iteration_count_9;
  __int64 integer_sum_14;
  unsigned __int64 scaled_index_10;
  unsigned int saved_iteration_count_2;
  __m128i *cached_source_3;
  __m128i *cached_source_4;
  unsigned int element_index_4;
  __int64 table_value_15;
  unsigned __int64 packed_word_bits_2;
  __int64 saved_byte_count_3;
  __int64 integer_difference_18;
  unsigned __int64 scaled_index_11;
  __int64 saved_byte_count_4;
  __int64 table_value_16;
  unsigned int scaled_index_12;
  unsigned int integer_difference_19;
  unsigned int iteration_count_10;
  __int64 integer_sum_15;
  unsigned __int64 scaled_index_13;
  int masked_bits;
  int saved_comparison_result_2;
  unsigned __int64 packed_word_bits_3;
  unsigned int iteration_count_11;
  __int64 integer_sum_16;
  unsigned __int64 scaled_index_14;
  unsigned __int64 integer_difference_20;
  _BYTE *i;
  unsigned int saved_element_index_3;
       struct __crt_strtox__big_integer *packed_word_bits_4;
  unsigned int iteration_count_12;
  __int64 integer_sum_17;
  unsigned __int64 scaled_index_15;
  unsigned int masked_bits_2;
  unsigned int j;
  char integer_sum_18;
  __int64 integer_difference_21;
  __int64 unused_local;
  unsigned int comparison_result;
  unsigned int saved_remaining_amount_3;
  __m128i *saved_cached_source;
  int integer_difference_22;
  unsigned int integer_quotient_2;
  double scaled_value;
  unsigned int input_value;
  _BYTE *input_cursor;
  __m128i *saved_cached_source_2;
  int *unused_written_slot;
  __int64 input_value_2;
  unsigned int element_index_5;
  __m128i Destination[28];
  unsigned int element_index_6;
  __m128i destination_buffer;
  unsigned int scaled_index_16;
  __m128i Source[28];
  unsigned int integer_sum_19;
  __m128i source_buffer;
  __int64 unused_local_2;

  input_value_2 = a5;
  unused_written_slot = a3;
  input_value = a2;
  scaled_value = a1;
  input_cursor = a4;
  state_address = (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL) + (-(__int64)(((*(_QWORD *)&a1 >> 52) & 0x7FFLL) != 0) & 0x10000000000000LL);
  state_address_2 = ((*(_QWORD *)&a1 >> 52) & 0x7FF) + 2 - (((*(_QWORD *)&a1 >> 52) & 0x7FFLL) != 0);
  log10_result = log10(a1);
  ceil_result = ceil(log10_result);
  SR_VEC_LANES(128, Destination[0], i32)[0] = state_address;
  lookup_index = HIDWORD(state_address);
  SR_VEC_LANES(128, Destination[0], i32)[1] = lookup_index;
  comparison_result = (((int)ceil_result - 0x7FFFFFFF) & 0xFFFFFFFE) != 0 ? (int)ceil_result : 0;
  saved_element_index = ((_DWORD)lookup_index != 0) + 1;
  element_index_5 = saved_element_index;
  if ( state_address_2 < 0x434 )
  {
    if ( state_address_2 != 54 )
    {
      SR_VEC_LANES(128, Source[0], i64)[0] = 0x10000000000000LL;
      scaled_index_16 = 2;
      if ( (_DWORD)lookup_index )
      {
        element_index_2 = 0;
        while ( SR_VEC_LANES(128, Source[0], i32)[element_index_2] == SR_VEC_LANES(128, Destination[0], i32)[element_index_2] )
        {
          if ( ++element_index_2 == 2 )
          {
            bitscanreverse_result = !_BitScanReverse((unsigned int *)&callee_output_word_3, lookup_index);
            LODWORD(saved_cached_source) = 0;
            if ( bitscanreverse_result )
              integer_sum_7 = 0;
            else
              integer_sum_7 = callee_output_word_3 + 1;
            iteration_count = ((_DWORD)lookup_index != 0) + 1;
            integer_difference_7 = 32 - integer_sum_7;
            remaining_count_3 = iteration_count;
            while ( 1 )
            {
              saved_remaining_count = remaining_count_3;
              integer_difference_8 = remaining_count_3 - 1;
              table_value_5 = remaining_count_3 >= saved_element_index ? 0 : SR_VEC_LANES(128, Destination[0], i32)[remaining_count_3];
              table_value_6 = (unsigned int)integer_difference_8 >= saved_element_index ? 0 : SR_VEC_LANES(128, Destination[0], i32)[integer_difference_8];
              --remaining_count_3;
              SR_VEC_LANES(128, Destination[0], i32)[saved_remaining_count] = (4 * table_value_5) | (table_value_6 >> 30);
              if ( (_DWORD)integer_difference_8 == -1 )
                break;
              saved_element_index = element_index_5;
            }
            if ( integer_difference_7 < 2 )
              iteration_count = ((_DWORD)lookup_index != 0) + 2;
            integer_difference_9 = 1078 - state_address_2;
            element_index_5 = iteration_count;
            shifted_bits_3 = integer_difference_9 >> 5;
            crt_memset((void *)(uintptr_t)(Source), 0, 4LL * (integer_difference_9 >> 5));
            SR_VEC_LANES(128, Source[0], i32)[integer_difference_9 >> 5] = 1 << (integer_difference_9 & 0x1F);
            goto LABEL_80;
          }
        }
      }
    }
    LODWORD(saved_cached_source) = 0;
    bitscanreverse_result = !_BitScanReverse((unsigned int *)&callee_output_word_4, SR_VEC_LANES(128, Destination[0], u32)[(_DWORD)lookup_index != 0]);
    if ( bitscanreverse_result )
      integer_sum_8 = 0;
    else
      integer_sum_8 = callee_output_word_4 + 1;
    iteration_count = ((_DWORD)lookup_index != 0) + 1;
    integer_difference_10 = 32 - integer_sum_8;
    remaining_count_4 = iteration_count;
    while ( 1 )
    {
      saved_remaining_count_2 = remaining_count_4;
      integer_difference_11 = remaining_count_4 - 1;
      table_value_7 = remaining_count_4 >= saved_element_index ? 0 : SR_VEC_LANES(128, Destination[0], i32)[remaining_count_4];
      table_value_8 = (unsigned int)integer_difference_11 >= saved_element_index ? 0 : SR_VEC_LANES(128, Destination[0], i32)[integer_difference_11];
      --remaining_count_4;
      SR_VEC_LANES(128, Destination[0], i32)[saved_remaining_count_2] = (2 * table_value_7) | (table_value_8 >> 31);
      if ( (_DWORD)integer_difference_11 == -1 )
        break;
      saved_element_index = element_index_5;
    }
    if ( !integer_difference_10 )
      iteration_count = ((_DWORD)lookup_index != 0) + 2;
    integer_difference_12 = 1077 - state_address_2;
    element_index_5 = iteration_count;
    shifted_bits_3 = integer_difference_12 >> 5;
    crt_memset((void *)(uintptr_t)(Source), 0, 4LL * (integer_difference_12 >> 5));
    SR_VEC_LANES(128, Source[0], i32)[integer_difference_12 >> 5] = 1 << (integer_difference_12 & 0x1F);
LABEL_80:
    saved_element_index_2 = shifted_bits_3 + 1;
    byte_count = 4LL * (shifted_bits_3 + 1);
    scaled_index_16 = shifted_bits_3 + 1;
    element_index_6 = shifted_bits_3 + 1;
    if ( byte_count )
    {
      if ( byte_count > 0x1CC )
      {
        crt_memset((void *)(uintptr_t)(&destination_buffer), 0, 0x1CCu);
        *errno_sr() = 34;
        crt_invalid_parameter_noinfo();
      }
      else
      {
        crt_memcpy(&destination_buffer, Source, byte_count);
      }
      saved_element_index_2 = element_index_6;
    }
  }
  else
  {
    SR_VEC_LANES(128, Source[0], i64)[0] = 0x10000000000000LL;
    scaled_index_16 = 2;
    if ( (_DWORD)lookup_index )
    {
      element_index = 0;
      while ( SR_VEC_LANES(128, Source[0], i32)[element_index] == SR_VEC_LANES(128, Destination[0], i32)[element_index] )
      {
        if ( ++element_index == 2 )
        {
          LODWORD(saved_cached_source) = 0;
          state_address_3 = (state_address_2 - 1074) & 0x1F;
          shifted_bits = (state_address_2 - 1074) >> 5;
          state_address_4 = (1LL << (32 - ((state_address_2 - 50) & 0x1F))) - 1;
          bitscanreverse_result = !_BitScanReverse((unsigned int *)&callee_output_word, SR_VEC_LANES(128, Destination[0], u32)[saved_element_index - 1]);
          if ( bitscanreverse_result )
            integer_sum = 0;
          else
            integer_sum = callee_output_word + 1;
          byte_count = (unsigned int)(32 - integer_sum);
          integer_sum_2 = saved_element_index + shifted_bits;
          if ( saved_element_index + shifted_bits != 115 || (selection_flag = 1, state_address_3 <= (unsigned int)byte_count) )
            selection_flag = 0;
          if ( integer_sum_2 > 0x73 || selection_flag )
          {
            iteration_count = 0;
            element_index_5 = 0;
          }
          else
          {
            iteration_count = 114;
            if ( integer_sum_2 < 0x72 )
              iteration_count = saved_element_index + shifted_bits;
            remaining_count = iteration_count;
            while ( remaining_count >= shifted_bits )
            {
              integer_difference = remaining_count - shifted_bits;
              integer_difference_2 = (unsigned int)(integer_difference - 1);
              table_value = (unsigned int)integer_difference >= saved_element_index ? 0 : SR_VEC_LANES(128, Destination[0], i32)[integer_difference];
              table_value_2 = (unsigned int)integer_difference_2 >= saved_element_index ? 0 : SR_VEC_LANES(128, Destination[0], i32)[integer_difference_2];
              integer_difference_3 = remaining_count--;
              SR_VEC_LANES(128, Destination[0], i32)[integer_difference_3] = ((state_address_4 & table_value) << state_address_3) | ((~state_address_4 & (unsigned int)table_value_2) >> (32 - state_address_3));
              if ( remaining_count == -1 )
                break;
              saved_element_index = element_index_5;
            }
            iteration_count_2 = 0;
            if ( shifted_bits )
            {
              do
              {
                integer_sum_3 = iteration_count_2++;
                SR_VEC_LANES(128, Destination[0], i32)[integer_sum_3] = 0;
              }
              while ( iteration_count_2 != shifted_bits );
            }
            if ( state_address_3 > (unsigned int)byte_count )
              ++iteration_count;
            element_index_5 = iteration_count;
          }
          saved_element_index_2 = 1;
          SR_VEC_LANES(128, Source[0], i32)[1] = 0;
          element_index_6 = 1;
          scaled_index_16 = 1;
          SR_VEC_LANES(128, destination_buffer, i32)[0] = 4;
          goto LABEL_100;
        }
      }
    }
    LODWORD(saved_cached_source) = 0;
    state_address_5 = (state_address_2 - 1075) & 0x1F;
    shifted_bits_2 = (state_address_2 - 1075) >> 5;
    state_address_6 = (1LL << (32 - ((state_address_2 - 51) & 0x1F))) - 1;
    bitscanreverse_result = !_BitScanReverse((unsigned int *)&callee_output_word_2, SR_VEC_LANES(128, Destination[0], u32)[saved_element_index - 1]);
    if ( bitscanreverse_result )
      integer_sum_4 = 0;
    else
      integer_sum_4 = callee_output_word_2 + 1;
    byte_count = (unsigned int)(32 - integer_sum_4);
    integer_sum_5 = saved_element_index + shifted_bits_2;
    if ( saved_element_index + shifted_bits_2 != 115 || (selection_flag_2 = 1, state_address_5 <= (unsigned int)byte_count) )
      selection_flag_2 = 0;
    if ( integer_sum_5 > 0x73 || selection_flag_2 )
    {
      iteration_count = 0;
      element_index_5 = 0;
    }
    else
    {
      iteration_count = 114;
      if ( integer_sum_5 < 0x72 )
        iteration_count = saved_element_index + shifted_bits_2;
      remaining_count_2 = iteration_count;
      while ( remaining_count_2 >= shifted_bits_2 )
      {
        integer_difference_4 = remaining_count_2 - shifted_bits_2;
        integer_difference_5 = (unsigned int)(integer_difference_4 - 1);
        table_value_3 = (unsigned int)integer_difference_4 >= saved_element_index ? 0 : SR_VEC_LANES(128, Destination[0], i32)[integer_difference_4];
        table_value_4 = (unsigned int)integer_difference_5 >= saved_element_index ? 0 : SR_VEC_LANES(128, Destination[0], i32)[integer_difference_5];
        integer_difference_6 = remaining_count_2--;
        SR_VEC_LANES(128, Destination[0], i32)[integer_difference_6] = ((state_address_6 & table_value_3) << state_address_5) | ((~state_address_6 & (unsigned int)table_value_4) >> (32 - state_address_5));
        if ( remaining_count_2 == -1 )
          break;
        saved_element_index = element_index_5;
      }
      iteration_count_3 = 0;
      if ( shifted_bits_2 )
      {
        do
        {
          integer_sum_6 = iteration_count_3++;
          SR_VEC_LANES(128, Destination[0], i32)[integer_sum_6] = 0;
        }
        while ( iteration_count_3 != shifted_bits_2 );
      }
      if ( state_address_5 > (unsigned int)byte_count )
        ++iteration_count;
      element_index_5 = iteration_count;
    }
    saved_element_index_2 = 1;
    SR_VEC_LANES(128, Source[0], i32)[1] = 0;
    element_index_6 = 1;
    scaled_index_16 = 1;
    SR_VEC_LANES(128, destination_buffer, i32)[0] = 2;
  }
LABEL_100:
  saved_comparison_result = comparison_result;
  if ( (comparison_result & 0x80000000) == 0 )
  {
    integer_quotient = comparison_result / 0xA;
    integer_quotient_2 = comparison_result / 0xA;
    remaining_amount = comparison_result / 0xA;
    saved_remaining_amount_3 = comparison_result / 0xA;
    if ( !(comparison_result / 0xA) )
    {
LABEL_164:
      scaled_index_5 = saved_comparison_result - 10 * integer_quotient;
      if ( scaled_index_5 )
      {
        integer_difference_15 = dword_140285688[scaled_index_5 - 1];
        if ( !integer_difference_15 )
          goto LABEL_180;
        if ( integer_difference_15 != 1 && saved_element_index_2 )
        {
          LODWORD(byte_count) = 0;
          iteration_count_6 = 0;
          do
          {
            integer_sum_11 = iteration_count_6++;
            scaled_index_6 = (unsigned int)byte_count + integer_difference_15 * (unsigned __int64)SR_VEC_LANES(128, destination_buffer, u32)[integer_sum_11];
            SR_VEC_LANES(128, destination_buffer, i32)[integer_sum_11] = scaled_index_6;
            byte_count = HIDWORD(scaled_index_6);
          }
          while ( iteration_count_6 != saved_element_index_2 );
          if ( HIDWORD(scaled_index_6) )
          {
            if ( element_index_6 >= 0x73 )
              goto LABEL_180;
            SR_VEC_LANES(128, destination_buffer, i32)[element_index_6] = HIDWORD(scaled_index_6);
            saved_element_index_2 = ++element_index_6;
          }
          else
          {
            saved_element_index_2 = element_index_6;
          }
        }
      }
LABEL_173:
      byte_cursor = input_cursor;
      running_total = input_cursor;
      if ( iteration_count )
      {
        LODWORD(byte_count) = 0;
        iteration_count_7 = 0;
        do
        {
          integer_sum_12 = iteration_count_7++;
          scaled_index_7 = (unsigned int)byte_count + 10LL * SR_VEC_LANES(128, Destination[0], u32)[integer_sum_12];
          SR_VEC_LANES(128, Destination[0], i32)[integer_sum_12] = scaled_index_7;
          byte_count = HIDWORD(scaled_index_7);
        }
        while ( iteration_count_7 != iteration_count );
        if ( (_DWORD)byte_count )
        {
          if ( element_index_5 >= 0x73 )
          {
            scaled_index_16 = 0;
            element_index_5 = 0;
            sub_1402697BC(Destination, 460, Source, 0);
          }
          else
          {
            SR_VEC_LANES(128, Destination[0], i32)[element_index_5++] = byte_count;
          }
        }
      }
      goto LABEL_256;
    }
    while ( 1 )
    {
      saved_remaining_amount = remaining_amount;
      if ( remaining_amount > 0x26 )
        saved_remaining_amount = 38;
      integer_difference_22 = saved_remaining_amount;
      integer_difference_13 = (unsigned int)(saved_remaining_amount - 1);
      lookup_index_2 = (unsigned int)integer_difference_13;
      scaled_index = (unsigned __int8)byte_140293703[4 * integer_difference_13];
      byte_count_2 = 4LL * (unsigned __int8)byte_140293702[4 * integer_difference_13];
      scaled_index_16 = scaled_index + (unsigned __int8)byte_140293702[4 * integer_difference_13];
      crt_memset((void *)(uintptr_t)(Source), 0, byte_count_2);
      crt_memcpy(
        (__m128i *)((char *)Source + byte_count_2),
        (     __m128i *)((char *)&unk_140284CE0 + 4 * (unsigned __int16)word_140293700[2 * lookup_index_2]),
        4 * scaled_index);
      cached_scaled_index = scaled_index_16;
      if ( scaled_index_16 > 1 )
      {
        if ( saved_element_index_2 > 1 )
        {
          integer_sum_19 = 0;
          cached_element_index = saved_element_index_2;
          if ( scaled_index_16 < saved_element_index_2 )
            cached_element_index = scaled_index_16;
          cached_source = Source;
          if ( scaled_index_16 >= saved_element_index_2 )
            cached_source = &destination_buffer;
          scaled_value = *(double *)&cached_source;
          cached_source_2 = &destination_buffer;
          element_index_3 = 0;
          if ( scaled_index_16 >= saved_element_index_2 )
            cached_source_2 = Source;
          saved_cached_source = cached_source_2;
          if ( scaled_index_16 < saved_element_index_2 )
            cached_scaled_index = saved_element_index_2;
          saved_element_index_2 = 0;
          while ( 1 )
          {
            table_value_11 = SR_VEC_PTR_LANES(128, cached_source, u32)[element_index_3];
            if ( (_DWORD)table_value_11 )
            {
              LODWORD(packed_word_bits) = 0;
              byte_count = element_index_3;
              if ( cached_scaled_index )
              {
                while ( (_DWORD)byte_count != 115 )
                {
                  saved_byte_count = (unsigned int)byte_count;
                  if ( (_DWORD)byte_count == saved_element_index_2 )
                  {
                    SR_VEC_LANES(128, source_buffer, i32)[(unsigned int)byte_count] = 0;
                    integer_sum_19 = byte_count + 1;
                  }
                  integer_difference_14 = (unsigned int)byte_count - element_index_3;
                  byte_count = (unsigned int)(byte_count + 1);
                  scaled_index_4 = SR_VEC_LANES(128, source_buffer, u32)[saved_byte_count] + (unsigned int)packed_word_bits + table_value_11 * SR_VEC_PTR_LANES(128, cached_source_2, u32)[integer_difference_14];
                  SR_VEC_LANES(128, source_buffer, i32)[saved_byte_count] = scaled_index_4;
                  saved_element_index_2 = integer_sum_19;
                  packed_word_bits = HIDWORD(scaled_index_4);
                  if ( (_DWORD)byte_count - element_index_3 == cached_scaled_index )
                    break;
                  cached_source_2 = saved_cached_source;
                }
                if ( (_DWORD)packed_word_bits )
                {
                  while ( (_DWORD)byte_count != 115 )
                  {
                    saved_byte_count_2 = (unsigned int)byte_count;
                    if ( (_DWORD)byte_count == saved_element_index_2 )
                    {
                      SR_VEC_LANES(128, source_buffer, i32)[(unsigned int)byte_count] = 0;
                      integer_sum_19 = byte_count + 1;
                    }
                    table_value_12 = SR_VEC_LANES(128, source_buffer, u32)[(unsigned int)byte_count];
                    byte_count = (unsigned int)(byte_count + 1);
                    SR_VEC_LANES(128, source_buffer, i32)[saved_byte_count_2] = table_value_12 + packed_word_bits;
                    saved_element_index_2 = integer_sum_19;
                    LODWORD(packed_word_bits) = (table_value_12 + (unsigned __int64)(unsigned int)packed_word_bits) >> 32;
                    if ( !(_DWORD)packed_word_bits )
                      goto LABEL_151;
                  }
LABEL_180:
                  saved_element_index_2 = 0;
                  element_index_6 = 0;
                  goto LABEL_173;
                }
              }
LABEL_151:
              if ( (_DWORD)byte_count == 115 )
                goto LABEL_180;
              cached_source = *(__m128i **)&scaled_value;
              cached_source_2 = saved_cached_source;
            }
            else if ( element_index_3 == saved_element_index_2 )
            {
              saved_element_index_2 = element_index_3 + 1;
              SR_VEC_LANES(128, source_buffer, i32)[element_index_3] = 0;
              integer_sum_19 = element_index_3 + 1;
            }
            if ( ++element_index_3 == cached_element_index )
            {
              byte_count = 4LL * saved_element_index_2;
              element_index_6 = saved_element_index_2;
              if ( byte_count )
              {
                if ( byte_count > 0x1CC )
                {
                  crt_memset((void *)(uintptr_t)(&destination_buffer), 0, 0x1CCu);
                  *errno_sr() = 34;
                  crt_invalid_parameter_noinfo();
                }
                else
                {
                  crt_memcpy(&destination_buffer, &source_buffer, byte_count);
                }
                saved_element_index_2 = element_index_6;
              }
              remaining_amount = saved_remaining_amount_3;
              goto LABEL_160;
            }
          }
        }
        table_value_10 = SR_VEC_LANES(128, destination_buffer, u32)[0];
        byte_count = 4LL * scaled_index_16;
        saved_element_index_2 = scaled_index_16;
        element_index_6 = scaled_index_16;
        if ( byte_count )
        {
          if ( byte_count > 0x1CC )
          {
            crt_memset((void *)(uintptr_t)(&destination_buffer), 0, 0x1CCu);
            *errno_sr() = 34;
            crt_invalid_parameter_noinfo();
          }
          else
          {
            crt_memcpy(&destination_buffer, Source, byte_count);
          }
          saved_element_index_2 = element_index_6;
        }
        if ( !(_DWORD)table_value_10 )
        {
LABEL_106:
          saved_element_index_2 = 0;
          element_index_6 = 0;
LABEL_160:
          selection_flag_3 = 1;
          goto LABEL_161;
        }
        if ( (_DWORD)table_value_10 == 1 || !saved_element_index_2 )
          goto LABEL_160;
        LODWORD(byte_count) = 0;
        iteration_count_5 = 0;
        do
        {
          integer_sum_10 = iteration_count_5++;
          scaled_index_3 = (unsigned int)byte_count + table_value_10 * SR_VEC_LANES(128, destination_buffer, u32)[integer_sum_10];
          SR_VEC_LANES(128, destination_buffer, i32)[integer_sum_10] = scaled_index_3;
          byte_count = HIDWORD(scaled_index_3);
        }
        while ( iteration_count_5 != saved_element_index_2 );
      }
      else
      {
        if ( !SR_VEC_LANES(128, Source[0], i32)[0] )
          goto LABEL_106;
        if ( SR_VEC_LANES(128, Source[0], i32)[0] == 1 || !saved_element_index_2 )
          goto LABEL_160;
        LODWORD(byte_count) = 0;
        iteration_count_4 = 0;
        table_value_9 = SR_VEC_LANES(128, Source[0], u32)[0];
        do
        {
          integer_sum_9 = iteration_count_4++;
          scaled_index_2 = (unsigned int)byte_count + table_value_9 * SR_VEC_LANES(128, destination_buffer, u32)[integer_sum_9];
          SR_VEC_LANES(128, destination_buffer, i32)[integer_sum_9] = scaled_index_2;
          byte_count = HIDWORD(scaled_index_2);
        }
        while ( iteration_count_4 != saved_element_index_2 );
      }
      if ( !(_DWORD)byte_count )
      {
        saved_element_index_2 = element_index_6;
        goto LABEL_160;
      }
      if ( element_index_6 < 0x73 )
      {
        SR_VEC_LANES(128, destination_buffer, i32)[element_index_6] = byte_count;
        saved_element_index_2 = ++element_index_6;
        goto LABEL_160;
      }
      saved_element_index_2 = 0;
      element_index_6 = 0;
      selection_flag_3 = 0;
LABEL_161:
      if ( !selection_flag_3 )
        goto LABEL_180;
      remaining_amount -= integer_difference_22;
      saved_remaining_amount_3 = remaining_amount;
      if ( !remaining_amount )
      {
        integer_quotient = integer_quotient_2;
        saved_comparison_result = comparison_result;
        goto LABEL_164;
      }
    }
  }
  integer_difference_16 = -comparison_result;
  integer_difference_22 = -comparison_result;
  saved_packed_word_bits = -comparison_result / 0xA;
  LODWORD(saved_cached_source) = saved_packed_word_bits;
  remaining_amount_2 = saved_packed_word_bits;
  saved_remaining_amount_3 = saved_packed_word_bits;
  if ( !saved_packed_word_bits )
    goto LABEL_244;
  while ( 1 )
  {
    saved_remaining_amount_2 = remaining_amount_2;
    if ( remaining_amount_2 > 0x26 )
      saved_remaining_amount_2 = 38;
    integer_quotient_2 = saved_remaining_amount_2;
    integer_difference_17 = (unsigned int)(saved_remaining_amount_2 - 1);
    lookup_index_3 = (unsigned int)integer_difference_17;
    scaled_index_8 = (unsigned __int8)byte_140293703[4 * integer_difference_17];
    byte_count_3 = 4LL * (unsigned __int8)byte_140293702[4 * integer_difference_17];
    scaled_index_16 = scaled_index_8 + (unsigned __int8)byte_140293702[4 * integer_difference_17];
    crt_memset((void *)(uintptr_t)(Source), 0, byte_count_3);
    crt_memcpy(
      (__m128i *)((char *)Source + byte_count_3),
      (     __m128i *)((char *)&unk_140284CE0 + 4 * (unsigned __int16)word_140293700[2 * lookup_index_3]),
      4 * scaled_index_8);
    saved_iteration_count = scaled_index_16;
    if ( scaled_index_16 <= 1 )
    {
      if ( !SR_VEC_LANES(128, Source[0], i32)[0] )
        goto LABEL_186;
      if ( SR_VEC_LANES(128, Source[0], i32)[0] == 1 || !iteration_count )
        goto LABEL_240;
      LODWORD(byte_count) = 0;
      iteration_count_8 = 0;
      table_value_13 = SR_VEC_LANES(128, Source[0], u32)[0];
      do
      {
        integer_sum_13 = iteration_count_8++;
        scaled_index_9 = (unsigned int)byte_count + table_value_13 * SR_VEC_LANES(128, Destination[0], u32)[integer_sum_13];
        SR_VEC_LANES(128, Destination[0], i32)[integer_sum_13] = scaled_index_9;
        byte_count = HIDWORD(scaled_index_9);
      }
      while ( iteration_count_8 != iteration_count );
      goto LABEL_191;
    }
    if ( iteration_count > 1 )
      break;
    table_value_14 = SR_VEC_LANES(128, Destination[0], u32)[0];
    byte_count = 4LL * scaled_index_16;
    iteration_count = scaled_index_16;
    element_index_5 = scaled_index_16;
    if ( byte_count )
    {
      if ( byte_count > 0x1CC )
      {
        crt_memset((void *)(uintptr_t)(Destination), 0, 0x1CCu);
        *errno_sr() = 34;
        crt_invalid_parameter_noinfo();
      }
      else
      {
        crt_memcpy(Destination, Source, byte_count);
      }
      iteration_count = element_index_5;
    }
    if ( !(_DWORD)table_value_14 )
    {
LABEL_186:
      iteration_count = 0;
      element_index_5 = 0;
LABEL_240:
      selection_flag_4 = 1;
      goto LABEL_241;
    }
    if ( (_DWORD)table_value_14 == 1 || !iteration_count )
      goto LABEL_240;
    LODWORD(byte_count) = 0;
    iteration_count_9 = 0;
    do
    {
      integer_sum_14 = iteration_count_9++;
      scaled_index_10 = (unsigned int)byte_count + table_value_14 * SR_VEC_LANES(128, Destination[0], u32)[integer_sum_14];
      SR_VEC_LANES(128, Destination[0], i32)[integer_sum_14] = scaled_index_10;
      byte_count = HIDWORD(scaled_index_10);
    }
    while ( iteration_count_9 != iteration_count );
LABEL_191:
    if ( !(_DWORD)byte_count )
    {
      iteration_count = element_index_5;
      goto LABEL_240;
    }
    if ( element_index_5 < 0x73 )
    {
      SR_VEC_LANES(128, Destination[0], i32)[element_index_5] = byte_count;
      iteration_count = ++element_index_5;
      goto LABEL_240;
    }
    iteration_count = 0;
    element_index_5 = 0;
    selection_flag_4 = 0;
LABEL_241:
    if ( !selection_flag_4 )
      goto LABEL_254;
    remaining_amount_2 -= integer_quotient_2;
    saved_remaining_amount_3 = remaining_amount_2;
    if ( !remaining_amount_2 )
    {
      integer_difference_16 = integer_difference_22;
      saved_packed_word_bits = (unsigned int)saved_cached_source;
LABEL_244:
      scaled_index_12 = integer_difference_16 - 10 * saved_packed_word_bits;
      if ( !scaled_index_12 )
        goto LABEL_173;
      integer_difference_19 = dword_140285688[scaled_index_12 - 1];
      if ( integer_difference_19 )
      {
        if ( integer_difference_19 == 1 || !iteration_count )
          goto LABEL_173;
        LODWORD(byte_count) = 0;
        iteration_count_10 = 0;
        do
        {
          integer_sum_15 = iteration_count_10++;
          scaled_index_13 = (unsigned int)byte_count + integer_difference_19 * (unsigned __int64)SR_VEC_LANES(128, Destination[0], u32)[integer_sum_15];
          SR_VEC_LANES(128, Destination[0], i32)[integer_sum_15] = scaled_index_13;
          byte_count = HIDWORD(scaled_index_13);
        }
        while ( iteration_count_10 != iteration_count );
        if ( !HIDWORD(scaled_index_13) )
        {
          iteration_count = element_index_5;
          goto LABEL_173;
        }
        if ( element_index_5 < 0x73 )
        {
          SR_VEC_LANES(128, Destination[0], i32)[element_index_5] = HIDWORD(scaled_index_13);
          iteration_count = ++element_index_5;
          goto LABEL_173;
        }
      }
      goto LABEL_254;
    }
  }
  integer_sum_19 = 0;
  saved_iteration_count_2 = iteration_count;
  if ( scaled_index_16 < iteration_count )
    saved_iteration_count_2 = scaled_index_16;
  cached_source_3 = Source;
  if ( scaled_index_16 >= iteration_count )
    cached_source_3 = Destination;
  saved_cached_source_2 = cached_source_3;
  cached_source_4 = Destination;
  element_index_4 = 0;
  if ( scaled_index_16 >= iteration_count )
    cached_source_4 = Source;
  scaled_value = *(double *)&cached_source_4;
  if ( scaled_index_16 < iteration_count )
    saved_iteration_count = iteration_count;
  iteration_count = 0;
  while ( 1 )
  {
    table_value_15 = SR_VEC_PTR_LANES(128, cached_source_3, u32)[element_index_4];
    if ( (_DWORD)table_value_15 )
      break;
    if ( element_index_4 == iteration_count )
    {
      iteration_count = element_index_4 + 1;
      SR_VEC_LANES(128, source_buffer, i32)[element_index_4] = 0;
      integer_sum_19 = element_index_4 + 1;
    }
LABEL_233:
    if ( ++element_index_4 == saved_iteration_count_2 )
    {
      byte_count = 4LL * iteration_count;
      element_index_5 = iteration_count;
      if ( byte_count )
      {
        if ( byte_count > 0x1CC )
        {
          crt_memset((void *)(uintptr_t)(Destination), 0, 0x1CCu);
          *errno_sr() = 34;
          crt_invalid_parameter_noinfo();
        }
        else
        {
          crt_memcpy(Destination, &source_buffer, byte_count);
        }
        iteration_count = element_index_5;
      }
      remaining_amount_2 = saved_remaining_amount_3;
      goto LABEL_240;
    }
  }
  LODWORD(packed_word_bits_2) = 0;
  byte_count = element_index_4;
  if ( !saved_iteration_count )
    goto LABEL_231;
  while ( (_DWORD)byte_count != 115 )
  {
    saved_byte_count_3 = (unsigned int)byte_count;
    if ( (_DWORD)byte_count == iteration_count )
    {
      SR_VEC_LANES(128, source_buffer, i32)[(unsigned int)byte_count] = 0;
      integer_sum_19 = byte_count + 1;
    }
    integer_difference_18 = (unsigned int)byte_count - element_index_4;
    byte_count = (unsigned int)(byte_count + 1);
    scaled_index_11 = SR_VEC_LANES(128, source_buffer, u32)[saved_byte_count_3] + (unsigned int)packed_word_bits_2 + table_value_15 * SR_VEC_PTR_LANES(128, cached_source_4, u32)[integer_difference_18];
    SR_VEC_LANES(128, source_buffer, i32)[saved_byte_count_3] = scaled_index_11;
    iteration_count = integer_sum_19;
    packed_word_bits_2 = HIDWORD(scaled_index_11);
    if ( (_DWORD)byte_count - element_index_4 == saved_iteration_count )
      break;
    cached_source_4 = *(__m128i **)&scaled_value;
  }
  if ( !(_DWORD)packed_word_bits_2 )
  {
LABEL_231:
    if ( (_DWORD)byte_count == 115 )
      goto LABEL_254;
    cached_source_3 = saved_cached_source_2;
    cached_source_4 = *(__m128i **)&scaled_value;
    goto LABEL_233;
  }
  while ( (_DWORD)byte_count != 115 )
  {
    saved_byte_count_4 = (unsigned int)byte_count;
    if ( (_DWORD)byte_count == iteration_count )
    {
      SR_VEC_LANES(128, source_buffer, i32)[(unsigned int)byte_count] = 0;
      integer_sum_19 = byte_count + 1;
    }
    table_value_16 = SR_VEC_LANES(128, source_buffer, u32)[(unsigned int)byte_count];
    byte_count = (unsigned int)(byte_count + 1);
    SR_VEC_LANES(128, source_buffer, i32)[saved_byte_count_4] = table_value_16 + packed_word_bits_2;
    iteration_count = integer_sum_19;
    LODWORD(packed_word_bits_2) = (table_value_16 + (unsigned __int64)(unsigned int)packed_word_bits_2) >> 32;
    if ( !(_DWORD)packed_word_bits_2 )
      goto LABEL_231;
  }
LABEL_254:
  byte_cursor = input_cursor;
  running_total = input_cursor;
  element_index_5 = 0;
LABEL_256:
  masked_bits = sub_1402320F0(
           (__crt_strtox *)&element_index_5,
           (struct __crt_strtox__big_integer *)&element_index_6,
           (     struct __crt_strtox__big_integer *)byte_count);
  saved_comparison_result_2 = comparison_result;
  if ( masked_bits == 10 )
  {
    saved_comparison_result_2 = comparison_result + 1;
    *byte_cursor = 49;
    running_total = byte_cursor + 1;
    if ( saved_element_index_2 )
    {
      LODWORD(packed_word_bits_3) = 0;
      iteration_count_11 = 0;
      do
      {
        integer_sum_16 = iteration_count_11++;
        scaled_index_14 = (unsigned int)packed_word_bits_3 + 10LL * SR_VEC_LANES(128, destination_buffer, u32)[integer_sum_16];
        SR_VEC_LANES(128, destination_buffer, i32)[integer_sum_16] = scaled_index_14;
        packed_word_bits_3 = HIDWORD(scaled_index_14);
      }
      while ( iteration_count_11 != saved_element_index_2 );
      if ( (_DWORD)packed_word_bits_3 )
      {
        if ( element_index_6 >= 0x73 )
        {
          scaled_index_16 = 0;
          element_index_6 = 0;
          sub_1402697BC(&destination_buffer, 460, Source, 0);
        }
        else
        {
          SR_VEC_LANES(128, destination_buffer, i32)[element_index_6++] = packed_word_bits_3;
        }
      }
    }
  }
  else if ( masked_bits )
  {
    running_total = byte_cursor + 1;
    *byte_cursor = masked_bits + 48;
  }
  else
  {
    saved_comparison_result_2 = comparison_result - 1;
  }
  *unused_written_slot = saved_comparison_result_2;
  integer_difference_20 = input_value;
  if ( saved_comparison_result_2 >= 0 && input_value <= 0x7FFFFFFF )
    integer_difference_20 = saved_comparison_result_2 + input_value;
  if ( input_value_2 - 1 < integer_difference_20 )
    integer_difference_20 = input_value_2 - 1;
  for ( i = &byte_cursor[integer_difference_20]; running_total != i; running_total += integer_difference_21 )
  {
    saved_element_index_3 = element_index_5;
    if ( !element_index_5 )
      break;
    LODWORD(packed_word_bits_4) = 0;
    iteration_count_12 = 0;
    do
    {
      integer_sum_17 = iteration_count_12++;
      scaled_index_15 = (unsigned int)packed_word_bits_4 + 1000000000LL * SR_VEC_LANES(128, Destination[0], u32)[integer_sum_17];
      SR_VEC_LANES(128, Destination[0], i32)[integer_sum_17] = scaled_index_15;
      packed_word_bits_4 = (     struct __crt_strtox__big_integer *)HIDWORD(scaled_index_15);
    }
    while ( iteration_count_12 != saved_element_index_3 );
    if ( HIDWORD(scaled_index_15) )
    {
      if ( element_index_5 >= 0x73 )
      {
        scaled_index_16 = 0;
        element_index_5 = 0;
        sub_1402697BC(Destination, 460, Source, 0);
      }
      else
      {
        SR_VEC_LANES(128, Destination[0], i32)[element_index_5++] = HIDWORD(scaled_index_15);
      }
    }
    masked_bits_2 = sub_1402320F0((__crt_strtox *)&element_index_5, (struct __crt_strtox__big_integer *)&element_index_6, packed_word_bits_4);
    for ( j = 8; j != -1; --j )
    {
      integer_sum_18 = masked_bits_2 % 0xA + 48;
      masked_bits_2 /= 0xAu;
      if ( (int)i - (int)running_total >= j )
        running_total[j] = integer_sum_18;
    }
    integer_difference_21 = i - running_total;
    if ( i - running_total > 9 )
      integer_difference_21 = 9;
  }
  *running_total = 0;
  return 0; /* the function has no caller */
}

// 1402674A1: conditional instruction was optimized away because r15d.4<73u
// 1402675D2: conditional instruction was optimized away because r15d.4<73u
// 140267B03: conditional instruction was optimized away because r13d.4>=2u
// 140267FE5: conditional instruction was optimized away because r13d.4>=2u

//----- (0000000140268448) ----------------------------------------------------
_anonymous_namespace___scoped_fp_state_reset *           sub_140268448(
        _anonymous_namespace___scoped_fp_state_reset *this)
{
  int masked_bits;
  bool comparison_result;

  fegetenv(this);
  masked_bits = *(_DWORD *)this & 0x1F;
  comparison_result = masked_bits == 31;
  if ( masked_bits != 31 )
  {
    feholdexcept_sr(this);
    comparison_result = masked_bits == 31;
  }
  *((_BYTE *)this + 8) = !comparison_result;
  return this;
}

//----- (0000000140268484) ----------------------------------------------------
int            sub_140268484(_anonymous_namespace___scoped_fp_state_reset *this)
{
  int result;

  if ( *((_BYTE *)this + 8) )
    return fesetenv_sr(this);
  return result;
}

//----- (0000000140268520) ----------------------------------------------------
__int64            __crt_strtox__make_big_integer_power_of_two(__int64 a1, unsigned int a2)
{
  char input_value;
  __int64 shifted_bits;

  input_value = a2;
  shifted_bits = a2 >> 5;
  crt_memset((void *)(uintptr_t)((_WORD *)(a1 + 4)), 0, 4 * shifted_bits);
  *(_DWORD *)(4 * shifted_bits + a1 + 4) = 1 << (input_value & 0x1F);
  *(_DWORD *)a1 = shifted_bits + 1;
  return a1;
}

//----- (0000000140268588) ----------------------------------------------------
__int64            _acrt_fltout(__int64 a1, int a2, __int64 a3, _BYTE *a4, __int64 SizeInBytes)
{
  __int64 cached_x;
  bool comparison_result;
  int selection_code;
       char *literal_text;
  int comparison_result_2;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  unsigned __int64 comparison_result_3;
  unsigned int comparison_result_4;
  double log10_result;
  double ceil_result;
  unsigned __int64 lookup_index;
  unsigned int comparison_result_5;
  unsigned int saved_element_index;
  int element_index;
  unsigned int state_address;
  unsigned __int64 byte_count;
  int state_address_2;
  bool bitscanreverse_result;
  int callee_output_word;
  int integer_sum;
  unsigned int integer_difference_4;
  unsigned int integer_sum_2;
  char selection_flag;
  unsigned int iteration_count;
  unsigned int remaining_count;
  __int64 integer_difference_5;
  __int64 integer_difference_6;
  __int32 table_value;
  __int32 table_value_2;
  __int64 integer_difference_7;
  __int64 integer_sum_3;
  unsigned int saved_element_index_2;
  unsigned int state_address_3;
  int state_address_4;
  int callee_output_word_2;
  int integer_sum_4;
  unsigned int integer_difference_8;
  unsigned int integer_sum_5;
  char selection_flag_2;
  unsigned int remaining_count_2;
  __int64 integer_difference_9;
  __int64 integer_difference_10;
  __int32 table_value_3;
  __int32 table_value_4;
  __int64 integer_difference_11;
  __int64 integer_sum_6;
  int element_index_2;
  int callee_output_word_3;
  int integer_sum_7;
  unsigned int integer_difference_12;
  unsigned int remaining_count_3;
  __int64 saved_remaining_count;
  __int64 integer_difference_13;
  __int32 table_value_5;
  unsigned __int32 table_value_6;
  unsigned int shifted_bits;
  int callee_output_word_4;
  int integer_sum_8;
  int integer_difference_14;
  unsigned int remaining_count_4;
  __int64 saved_remaining_count_2;
  __int64 integer_difference_15;
  __int32 table_value_7;
  unsigned __int32 table_value_8;
  unsigned int cached_x_2;
  unsigned int remaining_amount;
  int saved_remaining_amount;
  __int64 integer_difference_16;
  __int64 scaled_index;
  unsigned __int64 byte_count_2;
  unsigned int cached_scaled_index;
  __int64 table_value_9;
  __int64 integer_sum_9;
  unsigned __int64 scaled_index_2;
  char selection_flag_3;
  __int64 table_value_10;
  __int64 integer_sum_10;
  unsigned __int64 scaled_index_3;
  unsigned int cached_element_index;
  __m128i *cached_source;
  __m128i *cached_source_2;
  __int64 integer_sum_11;
  __int64 table_value_11;
  unsigned __int64 packed_word_bits;
  __int64 saved_byte_count;
  __int64 integer_difference_17;
  unsigned __int64 scaled_index_4;
  __int64 saved_byte_count_2;
  __int64 table_value_12;
  int scaled_index_5;
  unsigned int integer_difference_18;
  __int64 integer_sum_12;
  unsigned __int64 scaled_index_6;
  _BYTE *byte_cursor;
  _BYTE *running_total;
  unsigned int iteration_count_2;
  __int64 integer_sum_13;
  unsigned __int64 scaled_index_7;
  unsigned int integer_difference_19;
  unsigned int integer_quotient;
  unsigned int remaining_amount_2;
  int saved_remaining_amount_2;
  __int64 integer_difference_20;
  __int64 lookup_index_2;
  __int64 scaled_index_8;
  unsigned __int64 byte_count_3;
  unsigned int saved_iteration_count;
  __int64 table_value_13;
  __int64 integer_sum_14;
  unsigned __int64 scaled_index_9;
  char selection_flag_4;
  __int64 table_value_14;
  __int64 integer_sum_15;
  unsigned __int64 scaled_index_10;
  unsigned int saved_iteration_count_2;
  __m128i *cached_source_3;
  __m128i *cached_source_4;
  __int64 integer_sum_16;
  __int64 table_value_15;
  unsigned __int64 packed_word_bits_2;
  __int64 saved_byte_count_3;
  __int64 integer_difference_21;
  unsigned __int64 scaled_index_11;
  __int64 saved_byte_count_4;
  unsigned __int64 table_value_16;
  unsigned int scaled_index_12;
  unsigned int integer_difference_22;
  __int64 integer_sum_17;
  unsigned __int64 scaled_index_13;
  int masked_bits;
  int integer_difference_23;
  unsigned __int64 packed_word_bits_3;
  unsigned int iteration_count_3;
  __int64 integer_sum_18;
  unsigned __int64 scaled_index_14;
  unsigned int running_total_2;
  __int64 saved_running_total;
  _BYTE *i;
  unsigned int saved_element_index_3;
       struct __crt_strtox__big_integer *packed_word_bits_4;
  unsigned int iteration_count_4;
  __int64 integer_sum_19;
  unsigned __int64 scaled_index_15;
  unsigned int masked_bits_2;
  unsigned int j;
  char integer_sum_20;
  __int64 integer_difference_24;
  _QWORD scratch_buffer[6];
  unsigned int saved_remaining_amount_3;
  __int64 X;
  unsigned int saved_comparison_result;
  unsigned int integer_quotient_2;
  __int64 saved_cached_source;
  unsigned int integer_sum_21;
  __int64 Env;
  char selection_flag_5;
  _BYTE *input_cursor;
  __m128i *saved_cached_source_2;
  __int64 input_value;
  unsigned int element_index_3;
  __m128i Destination[28];
  unsigned int element_index_4;
  __m128i destination_buffer;
  unsigned int scaled_index_16;
  __m128i Source[28];
  unsigned int integer_sum_22;
  __m128i source_buffer;
  __int64 unused_local;

  X = a1;
  input_cursor = a4;
  input_value = a3;
  fegetenv((fenv_t *)&Env);
  if ( (Env & 0x1F) == 0x1F )
  {
    selection_flag_5 = 0;
  }
  else
  {
    feholdexcept_sr((sr_anon_70 *)&Env);
    selection_flag_5 = 1;
  }
  cached_x = X;
  comparison_result = X < 0;
  *(_QWORD *)(a3 + 8) = (uint64)(uintptr_t)(a4);
  selection_code = 32;
  if ( comparison_result )
    selection_code = 45;
  *(_DWORD *)a3 = selection_code;
  if ( (((unsigned __int64)cached_x >> 52) & 0x7FF) == 0 && (cached_x & 0xFFFFFFFFFFFFFLL) == 0 )
  {
    *(_DWORD *)(a3 + 4) = 0;
    literal_text = (     char *)&unk_140293798;
    goto LABEL_316;
  }
  if ( (((unsigned __int64)cached_x >> 52) & 0x7FF) == 0x7FF )
  {
    if ( (cached_x & 0xFFFFFFFFFFFFFLL) != 0 )
    {
      if ( cached_x < 0 && (cached_x & 0xFFFFFFFFFFFFFLL) == 0x8000000000000LL )
        comparison_result_2 = 4;
      else
        comparison_result_2 = ((cached_x & 0x8000000000000LL) == 0) | 2;
    }
    else
    {
      comparison_result_2 = 1;
    }
    *(_DWORD *)(a3 + 4) = 1;
  }
  else
  {
    comparison_result_2 = 0;
  }
  integer_difference = comparison_result_2 - 1;
  if ( !integer_difference )
  {
    literal_text = "1#INF";
LABEL_316:
    if ( (unsigned int)strcpy_s_sr(a4, SizeInBytes, (__int64)literal_text) )
    {
      scratch_buffer[4] = 0;
      crt_invoke_watson();
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
    goto LABEL_310;
  }
  integer_difference_2 = integer_difference - 1;
  if ( !integer_difference_2 )
  {
    literal_text = "1#QNAN";
    goto LABEL_316;
  }
  integer_difference_3 = integer_difference_2 - 1;
  if ( !integer_difference_3 )
  {
    literal_text = "1#SNAN";
    goto LABEL_316;
  }
  if ( integer_difference_3 == 1 )
  {
    literal_text = "1#IND";
    goto LABEL_316;
  }
  X = cached_x & 0x7FFFFFFFFFFFFFFFLL;
  integer_sum_21 = a2 + 1;
  saved_cached_source = cached_x & 0x7FFFFFFFFFFFFFFFLL;
  comparison_result_3 = (cached_x & 0xFFFFFFFFFFFFFLL)
      + (-(__int64)((((cached_x & 0x7FFFFFFFFFFFFFFFuLL) >> 52) & 0x7FF) != 0) & 0x10000000000000LL);
  comparison_result_4 = (((cached_x & 0x7FFFFFFFFFFFFFFFuLL) >> 52) & 0x7FF) + 2 - ((((cached_x & 0x7FFFFFFFFFFFFFFFuLL) >> 52) & 0x7FF) != 0);
  log10_result = log10(COERCE_DOUBLE(cached_x & 0x7FFFFFFFFFFFFFFFLL));
  ceil_result = ceil(log10_result);
  SR_VEC_LANES(128, Destination[0], i32)[0] = comparison_result_3;
  lookup_index = HIDWORD(comparison_result_3);
  comparison_result_5 = (((int)ceil_result - 0x7FFFFFFF) & 0xFFFFFFFE) != 0 ? (int)ceil_result : 0;
  SR_VEC_LANES(128, Destination[0], i32)[1] = lookup_index;
  saved_comparison_result = comparison_result_5;
  saved_element_index = ((_DWORD)lookup_index != 0) + 1;
  element_index_3 = saved_element_index;
  if ( comparison_result_4 < 0x434 )
  {
    if ( comparison_result_4 != 54 )
    {
      SR_VEC_LANES(128, Source[0], i64)[0] = 0x10000000000000LL;
      scaled_index_16 = 2;
      if ( (_DWORD)lookup_index )
      {
        element_index_2 = 0;
        while ( SR_VEC_LANES(128, Source[0], i32)[element_index_2] == SR_VEC_LANES(128, Destination[0], i32)[element_index_2] )
        {
          if ( ++element_index_2 == 2 )
          {
            bitscanreverse_result = !_BitScanReverse((unsigned int *)&callee_output_word_3, lookup_index);
            LODWORD(X) = 0;
            if ( bitscanreverse_result )
              integer_sum_7 = 0;
            else
              integer_sum_7 = callee_output_word_3 + 1;
            integer_difference_12 = 32 - integer_sum_7;
            iteration_count = ((_DWORD)lookup_index != 0) + 1;
            remaining_count_3 = iteration_count;
            while ( 1 )
            {
              saved_remaining_count = remaining_count_3;
              integer_difference_13 = remaining_count_3 - 1;
              table_value_5 = remaining_count_3 >= saved_element_index ? 0 : SR_VEC_LANES(128, Destination[0], i32)[remaining_count_3];
              table_value_6 = (unsigned int)integer_difference_13 >= saved_element_index ? 0 : SR_VEC_LANES(128, Destination[0], i32)[integer_difference_13];
              --remaining_count_3;
              SR_VEC_LANES(128, Destination[0], i32)[saved_remaining_count] = (4 * table_value_5) | (table_value_6 >> 30);
              if ( (_DWORD)integer_difference_13 == -1 )
                break;
              saved_element_index = element_index_3;
            }
            if ( integer_difference_12 < 2 )
              iteration_count = ((_DWORD)lookup_index != 0) + 2;
            element_index_3 = iteration_count;
            shifted_bits = (1078 - comparison_result_4) >> 5;
            crt_memset((void *)(uintptr_t)(Source), 0, 4LL * shifted_bits);
            SR_VEC_LANES(128, Source[0], i32)[shifted_bits] = 1 << ((54 - comparison_result_4) & 0x1F);
            goto LABEL_101;
          }
        }
      }
    }
    LODWORD(X) = 0;
    bitscanreverse_result = !_BitScanReverse((unsigned int *)&callee_output_word_4, SR_VEC_LANES(128, Destination[0], u32)[(_DWORD)lookup_index != 0]);
    if ( bitscanreverse_result )
      integer_sum_8 = 0;
    else
      integer_sum_8 = callee_output_word_4 + 1;
    integer_difference_14 = 32 - integer_sum_8;
    iteration_count = ((_DWORD)lookup_index != 0) + 1;
    remaining_count_4 = iteration_count;
    while ( 1 )
    {
      saved_remaining_count_2 = remaining_count_4;
      integer_difference_15 = remaining_count_4 - 1;
      table_value_7 = remaining_count_4 >= saved_element_index ? 0 : SR_VEC_LANES(128, Destination[0], i32)[remaining_count_4];
      table_value_8 = (unsigned int)integer_difference_15 >= saved_element_index ? 0 : SR_VEC_LANES(128, Destination[0], i32)[integer_difference_15];
      --remaining_count_4;
      SR_VEC_LANES(128, Destination[0], i32)[saved_remaining_count_2] = (2 * table_value_7) | (table_value_8 >> 31);
      if ( (_DWORD)integer_difference_15 == -1 )
        break;
      saved_element_index = element_index_3;
    }
    if ( !integer_difference_14 )
      iteration_count = ((_DWORD)lookup_index != 0) + 2;
    element_index_3 = iteration_count;
    shifted_bits = (1077 - comparison_result_4) >> 5;
    crt_memset((void *)(uintptr_t)(Source), 0, 4LL * shifted_bits);
    SR_VEC_LANES(128, Source[0], i32)[shifted_bits] = 1 << ((53 - comparison_result_4) & 0x1F);
LABEL_101:
    saved_element_index_2 = shifted_bits + 1;
    byte_count = 4LL * (shifted_bits + 1);
    scaled_index_16 = shifted_bits + 1;
    element_index_4 = shifted_bits + 1;
    if ( byte_count )
    {
      if ( byte_count > 0x1CC )
      {
        crt_memset((void *)(uintptr_t)(&destination_buffer), 0, 0x1CCu);
        *errno_sr() = 34;
        crt_invalid_parameter_noinfo();
      }
      else
      {
        crt_memcpy(&destination_buffer, Source, byte_count);
      }
      saved_element_index_2 = element_index_4;
    }
  }
  else
  {
    SR_VEC_LANES(128, Source[0], i64)[0] = 0x10000000000000LL;
    scaled_index_16 = 2;
    if ( (_DWORD)lookup_index )
    {
      element_index = 0;
      while ( SR_VEC_LANES(128, Source[0], i32)[element_index] == SR_VEC_LANES(128, Destination[0], i32)[element_index] )
      {
        if ( ++element_index == 2 )
        {
          LODWORD(X) = 0;
          state_address = (comparison_result_4 - 1074) & 0x1F;
          byte_count = (comparison_result_4 - 1074) >> 5;
          state_address_2 = (1LL << (32 - ((comparison_result_4 - 50) & 0x1F))) - 1;
          bitscanreverse_result = !_BitScanReverse((unsigned int *)&callee_output_word, SR_VEC_LANES(128, Destination[0], u32)[saved_element_index - 1]);
          if ( bitscanreverse_result )
            integer_sum = 0;
          else
            integer_sum = callee_output_word + 1;
          integer_difference_4 = 32 - integer_sum;
          integer_sum_2 = saved_element_index + byte_count;
          if ( saved_element_index + (_DWORD)byte_count != 115 || (selection_flag = 1, state_address <= integer_difference_4) )
            selection_flag = 0;
          if ( integer_sum_2 > 0x73 || selection_flag )
          {
            iteration_count = 0;
          }
          else
          {
            iteration_count = 114;
            if ( integer_sum_2 < 0x72 )
              iteration_count = saved_element_index + byte_count;
            remaining_count = iteration_count;
            while ( remaining_count >= (unsigned int)byte_count )
            {
              integer_difference_5 = remaining_count - (unsigned int)byte_count;
              integer_difference_6 = (unsigned int)(integer_difference_5 - 1);
              table_value = (unsigned int)integer_difference_5 >= saved_element_index ? 0 : SR_VEC_LANES(128, Destination[0], i32)[integer_difference_5];
              table_value_2 = (unsigned int)integer_difference_6 >= saved_element_index ? 0 : SR_VEC_LANES(128, Destination[0], i32)[integer_difference_6];
              integer_difference_7 = remaining_count--;
              SR_VEC_LANES(128, Destination[0], i32)[integer_difference_7] = ((state_address_2 & table_value) << state_address) | ((~state_address_2 & (unsigned int)table_value_2) >> (32 - state_address));
              if ( remaining_count == -1 )
                break;
              saved_element_index = element_index_3;
            }
            integer_sum_3 = 0;
            if ( (_DWORD)byte_count )
            {
              do
              {
                SR_VEC_LANES(128, Destination[0], i32)[integer_sum_3] = 0;
                integer_sum_3 = (unsigned int)(integer_sum_3 + 1);
              }
              while ( (_DWORD)integer_sum_3 != (_DWORD)byte_count );
            }
            if ( state_address > integer_difference_4 )
              ++iteration_count;
          }
          SR_VEC_LANES(128, Source[0], i32)[1] = 0;
          saved_element_index_2 = 1;
          element_index_4 = 1;
          element_index_3 = iteration_count;
          scaled_index_16 = 1;
          SR_VEC_LANES(128, destination_buffer, i32)[0] = 4;
          goto LABEL_121;
        }
      }
    }
    LODWORD(X) = 0;
    state_address_3 = (comparison_result_4 - 1075) & 0x1F;
    byte_count = (comparison_result_4 - 1075) >> 5;
    state_address_4 = (1LL << (32 - ((comparison_result_4 - 51) & 0x1F))) - 1;
    bitscanreverse_result = !_BitScanReverse((unsigned int *)&callee_output_word_2, SR_VEC_LANES(128, Destination[0], u32)[saved_element_index - 1]);
    if ( bitscanreverse_result )
      integer_sum_4 = 0;
    else
      integer_sum_4 = callee_output_word_2 + 1;
    integer_difference_8 = 32 - integer_sum_4;
    integer_sum_5 = saved_element_index + byte_count;
    if ( saved_element_index + (_DWORD)byte_count != 115 || (selection_flag_2 = 1, state_address_3 <= integer_difference_8) )
      selection_flag_2 = 0;
    if ( integer_sum_5 > 0x73 || selection_flag_2 )
    {
      iteration_count = 0;
    }
    else
    {
      iteration_count = 114;
      if ( integer_sum_5 < 0x72 )
        iteration_count = saved_element_index + byte_count;
      remaining_count_2 = iteration_count;
      while ( remaining_count_2 >= (unsigned int)byte_count )
      {
        integer_difference_9 = remaining_count_2 - (unsigned int)byte_count;
        integer_difference_10 = (unsigned int)(integer_difference_9 - 1);
        table_value_3 = (unsigned int)integer_difference_9 >= saved_element_index ? 0 : SR_VEC_LANES(128, Destination[0], i32)[integer_difference_9];
        table_value_4 = (unsigned int)integer_difference_10 >= saved_element_index ? 0 : SR_VEC_LANES(128, Destination[0], i32)[integer_difference_10];
        integer_difference_11 = remaining_count_2--;
        SR_VEC_LANES(128, Destination[0], i32)[integer_difference_11] = ((state_address_4 & table_value_3) << state_address_3) | ((~state_address_4 & (unsigned int)table_value_4) >> (32 - state_address_3));
        if ( remaining_count_2 == -1 )
          break;
        saved_element_index = element_index_3;
      }
      integer_sum_6 = 0;
      if ( (_DWORD)byte_count )
      {
        do
        {
          SR_VEC_LANES(128, Destination[0], i32)[integer_sum_6] = 0;
          integer_sum_6 = (unsigned int)(integer_sum_6 + 1);
        }
        while ( (_DWORD)integer_sum_6 != (_DWORD)byte_count );
      }
      if ( state_address_3 > integer_difference_8 )
        ++iteration_count;
    }
    SR_VEC_LANES(128, Source[0], i32)[1] = 0;
    saved_element_index_2 = 1;
    element_index_4 = 1;
    element_index_3 = iteration_count;
    scaled_index_16 = 1;
    SR_VEC_LANES(128, destination_buffer, i32)[0] = 2;
  }
LABEL_121:
  if ( (comparison_result_5 & 0x80000000) == 0 )
  {
    cached_x_2 = comparison_result_5 / 0xA;
    LODWORD(X) = comparison_result_5 / 0xA;
    remaining_amount = comparison_result_5 / 0xA;
    saved_remaining_amount_3 = comparison_result_5 / 0xA;
    if ( !(comparison_result_5 / 0xA) )
    {
LABEL_185:
      scaled_index_5 = 10 * cached_x_2;
      if ( comparison_result_5 != scaled_index_5 )
      {
        integer_difference_18 = dword_140285688[comparison_result_5 - scaled_index_5 - 1];
        if ( !integer_difference_18 )
          goto LABEL_201;
        if ( integer_difference_18 != 1 && saved_element_index_2 )
        {
          LODWORD(byte_count) = 0;
          integer_sum_12 = 0;
          do
          {
            scaled_index_6 = (unsigned int)byte_count + integer_difference_18 * (unsigned __int64)SR_VEC_LANES(128, destination_buffer, u32)[integer_sum_12];
            SR_VEC_LANES(128, destination_buffer, i32)[integer_sum_12] = scaled_index_6;
            byte_count = HIDWORD(scaled_index_6);
            integer_sum_12 = (unsigned int)(integer_sum_12 + 1);
          }
          while ( (_DWORD)integer_sum_12 != saved_element_index_2 );
          if ( HIDWORD(scaled_index_6) )
          {
            if ( element_index_4 >= 0x73 )
              goto LABEL_201;
            SR_VEC_LANES(128, destination_buffer, i32)[element_index_4] = HIDWORD(scaled_index_6);
            saved_element_index_2 = element_index_4 + 1;
            goto LABEL_202;
          }
          saved_element_index_2 = element_index_4;
        }
      }
LABEL_195:
      byte_cursor = input_cursor;
      running_total = input_cursor;
      if ( iteration_count )
      {
        LODWORD(byte_count) = 0;
        iteration_count_2 = 0;
        do
        {
          integer_sum_13 = iteration_count_2++;
          scaled_index_7 = (unsigned int)byte_count + 10LL * SR_VEC_LANES(128, Destination[0], u32)[integer_sum_13];
          SR_VEC_LANES(128, Destination[0], i32)[integer_sum_13] = scaled_index_7;
          byte_count = HIDWORD(scaled_index_7);
        }
        while ( iteration_count_2 != iteration_count );
        if ( (_DWORD)byte_count )
        {
          if ( element_index_3 >= 0x73 )
          {
            scaled_index_16 = 0;
            element_index_3 = 0;
            sub_1402697BC(Destination, 460, Source, 0);
          }
          else
          {
            SR_VEC_LANES(128, Destination[0], i32)[element_index_3++] = byte_count;
          }
        }
      }
      goto LABEL_278;
    }
    while ( 1 )
    {
      saved_remaining_amount = remaining_amount;
      if ( remaining_amount > 0x26 )
        saved_remaining_amount = 38;
      integer_quotient_2 = saved_remaining_amount;
      integer_difference_16 = (unsigned int)(saved_remaining_amount - 1);
      scaled_index = (unsigned __int8)byte_140293703[4 * integer_difference_16];
      byte_count_2 = 4LL * (unsigned __int8)byte_140293702[4 * integer_difference_16];
      scaled_index_16 = scaled_index + (unsigned __int8)byte_140293702[4 * integer_difference_16];
      crt_memset((void *)(uintptr_t)(Source), 0, byte_count_2);
      crt_memcpy(
        (__m128i *)((char *)Source + byte_count_2),
        (     __m128i *)((char *)&unk_140284CE0 + 4 * (unsigned __int16)word_140293700[2 * (saved_remaining_amount - 1)]),
        4 * scaled_index);
      cached_scaled_index = scaled_index_16;
      if ( scaled_index_16 > 1 )
      {
        if ( saved_element_index_2 > 1 )
        {
          cached_element_index = saved_element_index_2;
          cached_source = Source;
          if ( scaled_index_16 >= saved_element_index_2 )
            cached_source = &destination_buffer;
          cached_source_2 = &destination_buffer;
          if ( scaled_index_16 >= saved_element_index_2 )
            cached_source_2 = Source;
          else
            cached_element_index = scaled_index_16;
          saved_cached_source = (__int64)cached_source_2;
          if ( scaled_index_16 < saved_element_index_2 )
            cached_scaled_index = saved_element_index_2;
          saved_element_index_2 = 0;
          integer_sum_11 = 0;
          integer_sum_22 = 0;
          while ( 1 )
          {
            table_value_11 = SR_VEC_PTR_LANES(128, cached_source, u32)[integer_sum_11];
            if ( (_DWORD)table_value_11 )
            {
              LODWORD(packed_word_bits) = 0;
              byte_count = (unsigned int)integer_sum_11;
              if ( cached_scaled_index )
              {
                while ( (_DWORD)byte_count != 115 )
                {
                  saved_byte_count = (unsigned int)byte_count;
                  if ( (_DWORD)byte_count == saved_element_index_2 )
                  {
                    SR_VEC_LANES(128, source_buffer, i32)[(unsigned int)byte_count] = 0;
                    integer_sum_22 = byte_count + 1;
                  }
                  integer_difference_17 = (unsigned int)(byte_count - integer_sum_11);
                  byte_count = (unsigned int)(byte_count + 1);
                  scaled_index_4 = (unsigned int)packed_word_bits + SR_VEC_LANES(128, source_buffer, u32)[saved_byte_count] + table_value_11 * SR_VEC_PTR_LANES(128, cached_source_2, u32)[integer_difference_17];
                  SR_VEC_LANES(128, source_buffer, i32)[saved_byte_count] = scaled_index_4;
                  saved_element_index_2 = integer_sum_22;
                  packed_word_bits = HIDWORD(scaled_index_4);
                  if ( (_DWORD)byte_count - (_DWORD)integer_sum_11 == cached_scaled_index )
                    break;
                  cached_source_2 = (__m128i *)saved_cached_source;
                }
                if ( (_DWORD)packed_word_bits )
                {
                  while ( (_DWORD)byte_count != 115 )
                  {
                    saved_byte_count_2 = (unsigned int)byte_count;
                    if ( (_DWORD)byte_count == saved_element_index_2 )
                    {
                      SR_VEC_LANES(128, source_buffer, i32)[(unsigned int)byte_count] = 0;
                      integer_sum_22 = byte_count + 1;
                    }
                    table_value_12 = SR_VEC_LANES(128, source_buffer, u32)[(unsigned int)byte_count];
                    byte_count = (unsigned int)(byte_count + 1);
                    SR_VEC_LANES(128, source_buffer, i32)[saved_byte_count_2] = table_value_12 + packed_word_bits;
                    saved_element_index_2 = integer_sum_22;
                    LODWORD(packed_word_bits) = (table_value_12 + (unsigned __int64)(unsigned int)packed_word_bits) >> 32;
                    if ( !(_DWORD)packed_word_bits )
                      goto LABEL_172;
                  }
LABEL_201:
                  saved_element_index_2 = 0;
LABEL_202:
                  element_index_4 = saved_element_index_2;
                  goto LABEL_195;
                }
              }
LABEL_172:
              if ( (_DWORD)byte_count == 115 )
                goto LABEL_201;
              cached_source_2 = (__m128i *)saved_cached_source;
            }
            else if ( (_DWORD)integer_sum_11 == saved_element_index_2 )
            {
              SR_VEC_LANES(128, source_buffer, i32)[integer_sum_11] = 0;
              saved_element_index_2 = integer_sum_11 + 1;
              integer_sum_22 = integer_sum_11 + 1;
            }
            integer_sum_11 = (unsigned int)(integer_sum_11 + 1);
            if ( (_DWORD)integer_sum_11 == cached_element_index )
            {
              byte_count = 4LL * saved_element_index_2;
              element_index_4 = saved_element_index_2;
              if ( byte_count )
              {
                if ( byte_count > 0x1CC )
                {
                  crt_memset((void *)(uintptr_t)(&destination_buffer), 0, 0x1CCu);
                  *errno_sr() = 34;
                  crt_invalid_parameter_noinfo();
                }
                else
                {
                  crt_memcpy(&destination_buffer, &source_buffer, byte_count);
                }
                saved_element_index_2 = element_index_4;
              }
              remaining_amount = saved_remaining_amount_3;
              saved_remaining_amount = integer_quotient_2;
              goto LABEL_181;
            }
          }
        }
        table_value_10 = SR_VEC_LANES(128, destination_buffer, u32)[0];
        byte_count = 4LL * scaled_index_16;
        saved_element_index_2 = scaled_index_16;
        element_index_4 = scaled_index_16;
        if ( byte_count )
        {
          if ( byte_count > 0x1CC )
          {
            crt_memset((void *)(uintptr_t)(&destination_buffer), 0, 0x1CCu);
            *errno_sr() = 34;
            crt_invalid_parameter_noinfo();
          }
          else
          {
            crt_memcpy(&destination_buffer, Source, byte_count);
          }
          saved_element_index_2 = element_index_4;
        }
        if ( !(_DWORD)table_value_10 )
        {
LABEL_127:
          saved_element_index_2 = 0;
          goto LABEL_128;
        }
        if ( (_DWORD)table_value_10 == 1 || !saved_element_index_2 )
          goto LABEL_181;
        LODWORD(byte_count) = 0;
        integer_sum_10 = 0;
        do
        {
          scaled_index_3 = (unsigned int)byte_count + table_value_10 * SR_VEC_LANES(128, destination_buffer, u32)[integer_sum_10];
          SR_VEC_LANES(128, destination_buffer, i32)[integer_sum_10] = scaled_index_3;
          byte_count = HIDWORD(scaled_index_3);
          integer_sum_10 = (unsigned int)(integer_sum_10 + 1);
        }
        while ( (_DWORD)integer_sum_10 != saved_element_index_2 );
      }
      else
      {
        if ( !SR_VEC_LANES(128, Source[0], i32)[0] )
          goto LABEL_127;
        if ( SR_VEC_LANES(128, Source[0], i32)[0] == 1 || !saved_element_index_2 )
          goto LABEL_181;
        LODWORD(byte_count) = 0;
        table_value_9 = SR_VEC_LANES(128, Source[0], u32)[0];
        integer_sum_9 = 0;
        do
        {
          scaled_index_2 = (unsigned int)byte_count + table_value_9 * SR_VEC_LANES(128, destination_buffer, u32)[integer_sum_9];
          SR_VEC_LANES(128, destination_buffer, i32)[integer_sum_9] = scaled_index_2;
          byte_count = HIDWORD(scaled_index_2);
          integer_sum_9 = (unsigned int)(integer_sum_9 + 1);
        }
        while ( (_DWORD)integer_sum_9 != saved_element_index_2 );
      }
      if ( !(_DWORD)byte_count )
        break;
      if ( element_index_4 < 0x73 )
      {
        SR_VEC_LANES(128, destination_buffer, i32)[element_index_4] = byte_count;
        saved_element_index_2 = element_index_4 + 1;
LABEL_128:
        element_index_4 = saved_element_index_2;
LABEL_181:
        selection_flag_3 = 1;
        goto LABEL_182;
      }
      saved_element_index_2 = 0;
      element_index_4 = 0;
      selection_flag_3 = 0;
LABEL_182:
      if ( !selection_flag_3 )
        goto LABEL_201;
      remaining_amount -= saved_remaining_amount;
      saved_remaining_amount_3 = remaining_amount;
      if ( !remaining_amount )
      {
        cached_x_2 = X;
        comparison_result_5 = saved_comparison_result;
        goto LABEL_185;
      }
    }
    saved_element_index_2 = element_index_4;
    goto LABEL_181;
  }
  integer_difference_19 = -comparison_result_5;
  integer_quotient = integer_difference_19 / 0xA;
  integer_quotient_2 = integer_difference_19 / 0xA;
  remaining_amount_2 = integer_difference_19 / 0xA;
  saved_remaining_amount_3 = integer_difference_19 / 0xA;
  if ( !(integer_difference_19 / 0xA) )
    goto LABEL_266;
  while ( 1 )
  {
    saved_remaining_amount_2 = remaining_amount_2;
    if ( remaining_amount_2 > 0x26 )
      saved_remaining_amount_2 = 38;
    LODWORD(X) = saved_remaining_amount_2;
    integer_difference_20 = (unsigned int)(saved_remaining_amount_2 - 1);
    lookup_index_2 = (unsigned int)integer_difference_20;
    scaled_index_8 = (unsigned __int8)byte_140293703[4 * integer_difference_20];
    byte_count_3 = 4LL * (unsigned __int8)byte_140293702[4 * integer_difference_20];
    scaled_index_16 = scaled_index_8 + (unsigned __int8)byte_140293702[4 * integer_difference_20];
    crt_memset((void *)(uintptr_t)(Source), 0, byte_count_3);
    crt_memcpy(
      (__m128i *)((char *)Source + byte_count_3),
      (     __m128i *)((char *)&unk_140284CE0 + 4 * (unsigned __int16)word_140293700[2 * lookup_index_2]),
      4 * scaled_index_8);
    saved_iteration_count = scaled_index_16;
    if ( scaled_index_16 <= 1 )
    {
      if ( !SR_VEC_LANES(128, Source[0], i32)[0] )
        goto LABEL_208;
      if ( SR_VEC_LANES(128, Source[0], i32)[0] == 1 || !iteration_count )
        goto LABEL_262;
      LODWORD(byte_count) = 0;
      table_value_13 = SR_VEC_LANES(128, Source[0], u32)[0];
      integer_sum_14 = 0;
      do
      {
        scaled_index_9 = (unsigned int)byte_count + table_value_13 * SR_VEC_LANES(128, Destination[0], u32)[integer_sum_14];
        SR_VEC_LANES(128, Destination[0], i32)[integer_sum_14] = scaled_index_9;
        byte_count = HIDWORD(scaled_index_9);
        integer_sum_14 = (unsigned int)(integer_sum_14 + 1);
      }
      while ( (_DWORD)integer_sum_14 != iteration_count );
      goto LABEL_214;
    }
    if ( iteration_count > 1 )
      break;
    table_value_14 = SR_VEC_LANES(128, Destination[0], u32)[0];
    byte_count = 4LL * scaled_index_16;
    iteration_count = scaled_index_16;
    element_index_3 = scaled_index_16;
    if ( byte_count )
    {
      if ( byte_count > 0x1CC )
      {
        crt_memset((void *)(uintptr_t)(Destination), 0, 0x1CCu);
        *errno_sr() = 34;
        crt_invalid_parameter_noinfo();
      }
      else
      {
        crt_memcpy(Destination, Source, byte_count);
      }
      iteration_count = element_index_3;
    }
    if ( !(_DWORD)table_value_14 )
    {
LABEL_208:
      iteration_count = 0;
      goto LABEL_209;
    }
    if ( (_DWORD)table_value_14 == 1 || !iteration_count )
      goto LABEL_262;
    LODWORD(byte_count) = 0;
    integer_sum_15 = 0;
    do
    {
      scaled_index_10 = (unsigned int)byte_count + table_value_14 * SR_VEC_LANES(128, Destination[0], u32)[integer_sum_15];
      SR_VEC_LANES(128, Destination[0], i32)[integer_sum_15] = scaled_index_10;
      byte_count = HIDWORD(scaled_index_10);
      integer_sum_15 = (unsigned int)(integer_sum_15 + 1);
    }
    while ( (_DWORD)integer_sum_15 != iteration_count );
LABEL_214:
    if ( !(_DWORD)byte_count )
    {
      iteration_count = element_index_3;
      goto LABEL_262;
    }
    if ( element_index_3 < 0x73 )
    {
      SR_VEC_LANES(128, Destination[0], i32)[element_index_3] = byte_count;
      iteration_count = element_index_3 + 1;
LABEL_209:
      element_index_3 = iteration_count;
LABEL_262:
      selection_flag_4 = 1;
      goto LABEL_263;
    }
    iteration_count = 0;
    element_index_3 = 0;
    selection_flag_4 = 0;
LABEL_263:
    if ( !selection_flag_4 )
      goto LABEL_276;
    remaining_amount_2 -= X;
    saved_remaining_amount_3 = remaining_amount_2;
    if ( !remaining_amount_2 )
    {
      integer_quotient = integer_quotient_2;
LABEL_266:
      scaled_index_12 = integer_difference_19 - 10 * integer_quotient;
      if ( !scaled_index_12 )
        goto LABEL_195;
      integer_difference_22 = dword_140285688[scaled_index_12 - 1];
      if ( integer_difference_22 )
      {
        if ( integer_difference_22 == 1 || !iteration_count )
          goto LABEL_195;
        LODWORD(byte_count) = 0;
        integer_sum_17 = 0;
        do
        {
          scaled_index_13 = (unsigned int)byte_count + integer_difference_22 * (unsigned __int64)SR_VEC_LANES(128, Destination[0], u32)[integer_sum_17];
          SR_VEC_LANES(128, Destination[0], i32)[integer_sum_17] = scaled_index_13;
          byte_count = HIDWORD(scaled_index_13);
          integer_sum_17 = (unsigned int)(integer_sum_17 + 1);
        }
        while ( (_DWORD)integer_sum_17 != iteration_count );
        if ( !HIDWORD(scaled_index_13) )
        {
          iteration_count = element_index_3;
          goto LABEL_195;
        }
        if ( element_index_3 < 0x73 )
        {
          SR_VEC_LANES(128, Destination[0], i32)[element_index_3] = HIDWORD(scaled_index_13);
          iteration_count = ++element_index_3;
          goto LABEL_195;
        }
      }
      goto LABEL_276;
    }
  }
  saved_iteration_count_2 = iteration_count;
  cached_source_3 = Source;
  if ( scaled_index_16 < iteration_count )
    saved_iteration_count_2 = scaled_index_16;
  else
    cached_source_3 = Destination;
  saved_cached_source_2 = cached_source_3;
  cached_source_4 = Destination;
  if ( scaled_index_16 >= iteration_count )
    cached_source_4 = Source;
  saved_cached_source = (__int64)cached_source_4;
  if ( scaled_index_16 < iteration_count )
    saved_iteration_count = iteration_count;
  iteration_count = 0;
  integer_sum_16 = 0;
  integer_sum_22 = 0;
  while ( 1 )
  {
    table_value_15 = SR_VEC_PTR_LANES(128, cached_source_3, u32)[integer_sum_16];
    if ( (_DWORD)table_value_15 )
      break;
    if ( (_DWORD)integer_sum_16 == iteration_count )
    {
      SR_VEC_LANES(128, source_buffer, i32)[integer_sum_16] = 0;
      iteration_count = integer_sum_16 + 1;
      integer_sum_22 = integer_sum_16 + 1;
    }
LABEL_255:
    integer_sum_16 = (unsigned int)(integer_sum_16 + 1);
    if ( (_DWORD)integer_sum_16 == saved_iteration_count_2 )
    {
      byte_count = 4LL * iteration_count;
      element_index_3 = iteration_count;
      if ( byte_count )
      {
        if ( byte_count > 0x1CC )
        {
          crt_memset((void *)(uintptr_t)(Destination), 0, 0x1CCu);
          *errno_sr() = 34;
          crt_invalid_parameter_noinfo();
        }
        else
        {
          crt_memcpy(Destination, &source_buffer, byte_count);
        }
        iteration_count = element_index_3;
      }
      remaining_amount_2 = saved_remaining_amount_3;
      goto LABEL_262;
    }
  }
  LODWORD(packed_word_bits_2) = 0;
  byte_count = (unsigned int)integer_sum_16;
  if ( !saved_iteration_count )
    goto LABEL_253;
  while ( (_DWORD)byte_count != 115 )
  {
    saved_byte_count_3 = (unsigned int)byte_count;
    if ( (_DWORD)byte_count == iteration_count )
    {
      SR_VEC_LANES(128, source_buffer, i32)[(unsigned int)byte_count] = 0;
      integer_sum_22 = byte_count + 1;
    }
    integer_difference_21 = (unsigned int)(byte_count - integer_sum_16);
    byte_count = (unsigned int)(byte_count + 1);
    scaled_index_11 = (unsigned int)packed_word_bits_2 + SR_VEC_LANES(128, source_buffer, u32)[saved_byte_count_3] + table_value_15 * SR_VEC_PTR_LANES(128, cached_source_4, u32)[integer_difference_21];
    SR_VEC_LANES(128, source_buffer, i32)[saved_byte_count_3] = scaled_index_11;
    iteration_count = integer_sum_22;
    packed_word_bits_2 = HIDWORD(scaled_index_11);
    if ( (_DWORD)byte_count - (_DWORD)integer_sum_16 == saved_iteration_count )
      break;
    cached_source_4 = (__m128i *)saved_cached_source;
  }
  if ( !(_DWORD)packed_word_bits_2 )
  {
LABEL_253:
    if ( (_DWORD)byte_count == 115 )
      goto LABEL_276;
    cached_source_3 = saved_cached_source_2;
    cached_source_4 = (__m128i *)saved_cached_source;
    goto LABEL_255;
  }
  while ( (_DWORD)byte_count != 115 )
  {
    saved_byte_count_4 = (unsigned int)byte_count;
    if ( (_DWORD)byte_count == iteration_count )
    {
      SR_VEC_LANES(128, source_buffer, i32)[(unsigned int)byte_count] = 0;
      integer_sum_22 = byte_count + 1;
    }
    byte_count = (unsigned int)(byte_count + 1);
    table_value_16 = (unsigned int)packed_word_bits_2 + (unsigned __int64)SR_VEC_LANES(128, source_buffer, u32)[saved_byte_count_4];
    SR_VEC_LANES(128, source_buffer, i32)[saved_byte_count_4] = table_value_16;
    iteration_count = integer_sum_22;
    LODWORD(packed_word_bits_2) = HIDWORD(table_value_16);
    if ( !HIDWORD(table_value_16) )
      goto LABEL_253;
  }
LABEL_276:
  element_index_3 = 0;
  byte_cursor = input_cursor;
  running_total = input_cursor;
LABEL_278:
  masked_bits = sub_1402320F0(
           (__crt_strtox *)&element_index_3,
           (struct __crt_strtox__big_integer *)&element_index_4,
           (     struct __crt_strtox__big_integer *)byte_count);
  integer_difference_23 = saved_comparison_result;
  if ( masked_bits == 10 )
  {
    integer_difference_23 = saved_comparison_result + 1;
    *byte_cursor = 49;
    running_total = byte_cursor + 1;
    if ( saved_element_index_2 )
    {
      LODWORD(packed_word_bits_3) = 0;
      iteration_count_3 = 0;
      do
      {
        integer_sum_18 = iteration_count_3++;
        scaled_index_14 = (unsigned int)packed_word_bits_3 + 10LL * SR_VEC_LANES(128, destination_buffer, u32)[integer_sum_18];
        SR_VEC_LANES(128, destination_buffer, i32)[integer_sum_18] = scaled_index_14;
        packed_word_bits_3 = HIDWORD(scaled_index_14);
      }
      while ( iteration_count_3 != saved_element_index_2 );
      if ( (_DWORD)packed_word_bits_3 )
      {
        if ( element_index_4 >= 0x73 )
        {
          scaled_index_16 = 0;
          element_index_4 = 0;
          sub_1402697BC(&destination_buffer, 460, Source, 0);
        }
        else
        {
          SR_VEC_LANES(128, destination_buffer, i32)[element_index_4++] = packed_word_bits_3;
        }
      }
    }
  }
  else if ( masked_bits )
  {
    running_total = byte_cursor + 1;
    *byte_cursor = masked_bits + 48;
  }
  else
  {
    integer_difference_23 = saved_comparison_result - 1;
  }
  running_total_2 = integer_sum_21;
  *(_DWORD *)(input_value + 4) = integer_difference_23;
  if ( integer_difference_23 >= 0 && running_total_2 <= 0x7FFFFFFF )
    running_total_2 += integer_difference_23;
  saved_running_total = running_total_2;
  if ( SizeInBytes - 1 < (unsigned __int64)running_total_2 )
    saved_running_total = SizeInBytes - 1;
  for ( i = &byte_cursor[saved_running_total]; running_total != i; running_total += integer_difference_24 )
  {
    saved_element_index_3 = element_index_3;
    if ( !element_index_3 )
      break;
    LODWORD(packed_word_bits_4) = 0;
    iteration_count_4 = 0;
    do
    {
      integer_sum_19 = iteration_count_4++;
      scaled_index_15 = (unsigned int)packed_word_bits_4 + 1000000000LL * SR_VEC_LANES(128, Destination[0], u32)[integer_sum_19];
      SR_VEC_LANES(128, Destination[0], i32)[integer_sum_19] = scaled_index_15;
      packed_word_bits_4 = (     struct __crt_strtox__big_integer *)HIDWORD(scaled_index_15);
    }
    while ( iteration_count_4 != saved_element_index_3 );
    if ( HIDWORD(scaled_index_15) )
    {
      if ( element_index_3 >= 0x73 )
      {
        scaled_index_16 = 0;
        element_index_3 = 0;
        sub_1402697BC(Destination, 460, Source, 0);
      }
      else
      {
        SR_VEC_LANES(128, Destination[0], i32)[element_index_3++] = HIDWORD(scaled_index_15);
      }
    }
    masked_bits_2 = sub_1402320F0((__crt_strtox *)&element_index_3, (struct __crt_strtox__big_integer *)&element_index_4, packed_word_bits_4);
    for ( j = 8; j != -1; --j )
    {
      integer_sum_20 = masked_bits_2 % 0xA + 48;
      masked_bits_2 /= 0xAu;
      if ( (int)i - (int)running_total >= j )
        running_total[j] = integer_sum_20;
    }
    integer_difference_24 = i - running_total;
    if ( i - running_total > 9 )
      integer_difference_24 = 9;
  }
  *running_total = 0;
LABEL_310:
  if ( selection_flag_5 )
    fesetenv_sr((     sr_anon_70 *)&Env);
  return 0; /* no caller reads the result */
}

// 1402697B3: control flows out of bounds to 1402697B8
// 140268821: conditional instruction was optimized away because r14d.4<73u
// 140268944: conditional instruction was optimized away because r14d.4<73u
// 140268E48: conditional instruction was optimized away because r12d.4>=2u
// 140269309: conditional instruction was optimized away because r12d.4>=2u

//----- (00000001402697BC) ----------------------------------------------------
__int64            sub_1402697BC(__m128i *a1, unsigned __int64 a2,      __m128i *a3, unsigned __int64 a4)
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

// 1402697BC: invalid function type 'errno_t __cdecl sub_1402697BC(void *const Destination, const rsize_t DestinationSize, const void *const Source, const rsize_t SourceSize)' has been ignored

//----- (0000000140269844) ----------------------------------------------------
// attributes: thunk
__int64 sub_140269844()
{
  return ((__int64 (          *)())GetStringTypeW)();
}

// 14026E038: invalid function type 'BOOL (__stdcall *GetStringTypeW)(DWORD dwInfoType, LPCWCH lpSrcStr, int cchSrc, LPWORD lpCharType)' has been ignored

//----- (0000000140269CD8) ----------------------------------------------------
__int16            to_machine_sse_control(unsigned int a1)
{
  __int16 selection_code;
  unsigned int shifted_bits;
  int masked_bits;
  __int16 integer_difference;
  int masked_bits_2;

  selection_code = 0;
  shifted_bits = ((a1 >> 2) | a1 & 0xC03FFFFF) >> 22;
  masked_bits = a1 & 0xC00;
  switch ( masked_bits )
  {
    case 1024:
      integer_difference = -32704;
      break;
    case 2048:
      integer_difference = 64;
      break;
    case 3072:
      integer_difference = 0x8000;
      break;
    default:
      integer_difference = 0;
      break;
  }
  masked_bits_2 = shifted_bits & 0x300;
  if ( (shifted_bits & 0x300) != 0 )
  {
    switch ( masked_bits_2 )
    {
      case 256:
        selection_code = 0x2000;
        break;
      case 512:
        selection_code = 0x4000;
        break;
      case 768:
        selection_code = 24576;
        break;
    }
  }
  return selection_code
       | integer_difference
       | (((shifted_bits >> 4) & 1) << 7)
       | (((shifted_bits >> 5) & 1) << 8)
       | (((shifted_bits >> 3) & 1) << 9)
       | (((shifted_bits >> 2) & 1) << 10)
       | (((shifted_bits >> 1) & 1) << 11)
       | ((shifted_bits & 1) << 12);
}

//----- (0000000140269EE4) ----------------------------------------------------
__int64            _acrt_fenv_get_common_round_control_sr(__int16 a1)
{
  return a1 & 0x300;
}

//----- (0000000140269EF0) ----------------------------------------------------
__int64 _acrt_fenv_get_control_sr()
{
  unsigned int vector_result;
  __int16 masked_bits;
  int selection_code;
  int masked_bits_2;
  int selection_code_2;
  int shifted_bits;

  vector_result = _mm_getcsr();
  masked_bits = vector_result & 0x8040;
  if ( (vector_result & 0x8040) == 0x8000 )
  {
    selection_code = 3072;
  }
  else if ( masked_bits == 64 )
  {
    selection_code = 2048;
  }
  else
  {
    selection_code = 0;
    if ( masked_bits == -32704 )
      selection_code = 1024;
  }
  masked_bits_2 = vector_result & 0x6000;
  if ( (vector_result & 0x6000) != 0 )
  {
    if ( masked_bits_2 == 0x2000 )
    {
      selection_code_2 = 256;
    }
    else if ( masked_bits_2 == 0x4000 )
    {
      selection_code_2 = 512;
    }
    else
    {
      selection_code_2 = 768;
      if ( masked_bits_2 != 24576 )
        selection_code_2 = 0;
    }
  }
  else
  {
    selection_code_2 = 0;
  }
  shifted_bits = selection_code
     | selection_code_2
     | (vector_result >> 12) & 1
     | (2 * ((vector_result >> 11) & 1))
     | (4 * ((vector_result >> 10) & 1))
     | (8 * ((vector_result >> 9) & 1))
     | (16 * ((vector_result >> 7) & 1))
     | (32 * ((vector_result >> 8) & 1));
  return shifted_bits
       | ((selection_code & 0x3F
         | selection_code_2 & 0x3F
         | ((vector_result & 0x1000) != 0)
         | ((unsigned __int8)(2 * ((vector_result & 0x800) != 0))
          | (unsigned __int8)((4 * ((vector_result & 0x400) != 0))
                            | (8 * ((vector_result & 0x200) != 0))
                            | (16 * ((vector_result & 0x80) != 0))
                            | (32 * (BYTE1(vector_result) & 1))))
         & 0x3F) << 24)
       | (shifted_bits << 22) & 0xC0000000;
}

//----- (0000000140269FE4) ----------------------------------------------------
__int64            _acrt_fenv_get_fp_status_word_from_exception_mask_sr(int a1)
{
  return a1 | ((unsigned __int8)(a1 & 0x3F) << 24);
}

//----- (0000000140269FF0) ----------------------------------------------------
__int64 _acrt_fenv_get_status()
{
  int shifted_bits;
  char vector_result;

  vector_result = _mm_getcsr();
  shifted_bits = ((unsigned __int8)(vector_result & 0x3F) >> 5)
     | (16 * (vector_result & 1))
     | (2 * (((unsigned __int8)(vector_result & 0x3F) >> 4) & 1))
     | (4 * (((unsigned __int8)(vector_result & 0x3F) >> 3) & 1))
     | (8 * (((unsigned __int8)(vector_result & 0x3F) >> 2) & 1))
     | (32 * (((unsigned __int8)(vector_result & 0x3F) >> 1) & 1));
  return shifted_bits | (unsigned int)(shifted_bits << 24);
}

//----- (000000014026A044) ----------------------------------------------------
__int64            _acrt_fenv_set_control(unsigned int a1)
{
  __int16 selection_code;
  unsigned int state_address;
  int masked_bits;
  __int16 selection_code_2;
  __int16 integer_difference;
  __int16 selection_code_3;
  __int16 selection_code_4;
  int masked_bits_2;
  __int16 selection_code_5;
  __int16 selection_code_6;
  __int16 combined_flags;
  __int16 combined_flags_2;
  __int16 combined_flags_3;
  __int16 selection_code_7;
  __int16 combined_flags_4;
  __int64 result;

  selection_code = 1024;
  state_address = (a1 & 0xC03FFFFF | (a1 >> 2) & 0xFC00000) >> 22;
  masked_bits = a1 & 0xC00;
  selection_code_2 = 2048;
  switch ( masked_bits )
  {
    case 1024:
      integer_difference = -32704;
      break;
    case 2048:
      integer_difference = 64;
      break;
    case 3072:
      integer_difference = 0x8000;
      break;
    default:
      integer_difference = 0;
      break;
  }
  selection_code_3 = 256;
  selection_code_4 = 512;
  masked_bits_2 = state_address & 0x300;
  if ( (state_address & 0x300) != 0 )
  {
    switch ( masked_bits_2 )
    {
      case 256:
        selection_code_5 = 0x2000;
        goto LABEL_16;
      case 512:
        selection_code_5 = 0x4000;
        goto LABEL_16;
      case 768:
        selection_code_5 = 24576;
        goto LABEL_16;
    }
  }
  selection_code_5 = 0;
LABEL_16:
  if ( (state_address & 1) != 0 )
    selection_code_6 = 4096;
  else
    selection_code_6 = 0;
  if ( (state_address & 2) == 0 )
    selection_code_2 = 0;
  combined_flags = selection_code_2 | selection_code_6;
  if ( (state_address & 4) == 0 )
    selection_code = 0;
  combined_flags_2 = selection_code | combined_flags;
  if ( (state_address & 8) == 0 )
    selection_code_4 = 0;
  combined_flags_3 = selection_code_4 | combined_flags_2;
  if ( (state_address & 0x10) != 0 )
    selection_code_7 = 128;
  else
    selection_code_7 = 0;
  combined_flags_4 = selection_code_7 | combined_flags_3;
  if ( (state_address & 0x20) == 0 )
    selection_code_3 = 0;
  result = (unsigned __int16)(integer_difference | selection_code_5 | selection_code_3 | combined_flags_4) & 0xFFC0;
  _mm_setcsr(result | _mm_getcsr() & 0xFFFF003F);
  return result;
}

//----- (000000014026A18C) ----------------------------------------------------
__int64            _acrt_fenv_set_status(int a1)
{
  int vector_result;
  int hibyte_result;

  vector_result = _mm_getcsr();
  hibyte_result = (2 * ((a1 & 0x20000000) != 0)) & 0x3F
     | ((a1 & 0x10000000) != 0)
     | ((unsigned __int8)(4 * ((a1 & 0x8000000) != 0))
      | (unsigned __int8)((8 * ((a1 & 0x4000000) != 0)) | (16 * ((a1 & 0x2000000) != 0)) | (32 * (HIBYTE(a1) & 1))))
     & 0x3F;
  _mm_setcsr(hibyte_result | vector_result & 0xFFFFFFC0);
  return hibyte_result | vector_result & 0xFFFFFFC0;
}

//----- (000000014026A210) ----------------------------------------------------
__int64            wcsnicoll(unsigned __int16 *a1, unsigned __int16 *a2, unsigned __int64 a3)
{
  if ( g_144CBF178 )
    return wcsnicoll_l(a1, a2, a3, 0);
  if ( a1 && a2 && a3 <= 0x7FFFFFFF )
    return _ascii_wcsnicmp_sr(a1, a2, a3);
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0x7FFFFFFF;
}

// 14026A210: invalid function type 'int __cdecl wcsnicoll(const #49 *String1, const #49 *String2, #66 MaxCount)' has been ignored

//----- (000000014026A260) ----------------------------------------------------
__int64            wcsnicoll_l(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        unsigned __int64 a3,
        struct __crt_locale_pointers *a4)
{
  unsigned int unused_written_slot;
  __int64 loaded_word;
  int acrt_comparestringw_result;
  _QWORD scratch_buffer[3];
  char unrecovered_register_value;

  if ( !a3 )
    return 0;
  if ( a1 && a2 )
  {
    unused_written_slot = 0x7FFFFFFF;
    if ( a3 <= 0x7FFFFFFF )
    {
      crt_locale_update((_LocaleUpdate *)scratch_buffer, a4);
      loaded_word = *(_QWORD *)(scratch_buffer[1] + 304LL);
      if ( loaded_word )
      {
        acrt_comparestringw_result = _acrt_CompareStringW(loaded_word, 0x1001u, (__int64)a1, a3, (__int64)a2, a3);
        if ( acrt_comparestringw_result )
          unused_written_slot = acrt_comparestringw_result - 2;
        else
          *errno_sr() = 22;
      }
      else
      {
        unused_written_slot = _ascii_wcsnicmp_sr(a1, a2, a3);
      }
      if ( unrecovered_register_value )
        *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
    }
    else
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
    }
    return unused_written_slot;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0x7FFFFFFF;
  }
}

// 14026A260: invalid function type 'int __cdecl wcsnicoll_l(const #49 *String1, const #49 *String2, #66 MaxCount, _locale_t Locale)' has been ignored

//----- (000000014026A350) ----------------------------------------------------
__int64            strnicoll_sr(__int64 a1, __int64 a2, __int64 a3)
{
  if ( g_144CBF178 )
    return strnicoll_l(a1, a2, a3, 0);
  else
    return strnicmp_sr(a1, a2, a3);
}

//----- (000000014026A368) ----------------------------------------------------
__int64            strnicoll_l(unsigned __int8 *a1, char *a2, unsigned __int64 a3, struct __crt_locale_pointers *a4)
{
  unsigned int unused_written_slot;
  __int64 loaded_word;
  int acrt_comparestringa_result;
  __int64 callee_output_word;
  __int128 Locale;
  char unrecovered_register_value;

  crt_locale_update((_LocaleUpdate *)&callee_output_word, a4);
  if ( a3 )
  {
    if ( a1 && a2 )
    {
      unused_written_slot = 0x7FFFFFFF;
      if ( a3 <= 0x7FFFFFFF )
      {
        loaded_word = *(_QWORD *)(Locale + 304);
        if ( loaded_word )
        {
          acrt_comparestringa_result = _acrt_CompareStringA(
                 (struct __crt_locale_pointers *)&Locale,
                 loaded_word,
                 0x1001u,
                 a1,
                 a3,
                 a2,
                 a3,
                 *(_DWORD *)(Locale + 20));
          if ( acrt_comparestringa_result )
            unused_written_slot = acrt_comparestringa_result - 2;
          else
            *errno_sr() = 22;
        }
        else
        {
          unused_written_slot = strnicmp_l(a1, (unsigned __int8 *)a2, a3, (struct __crt_locale_pointers *)&Locale);
        }
      }
      else
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
      }
    }
    else
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      unused_written_slot = 0x7FFFFFFF;
    }
  }
  else
  {
    unused_written_slot = 0;
  }
  if ( unrecovered_register_value )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  return unused_written_slot;
}

// 14026A368: invalid function type 'int __cdecl strnicoll_l(const char *String1, const char *String2, #66 MaxCount, _locale_t Locale)' has been ignored

//----- (000000014026A468) ----------------------------------------------------
__int64            InternalGetLocaleInfoA(
        struct sr_anon_68 *     a1,
             sr_anon_49 *     a2,
        unsigned int a3,
        __int64 a4,
        int a5)
{
  unsigned int loaded_word;
  signed int call_result;
  unsigned int cached_call_result;
  unsigned __int64 comparison_result;
  __int64 integer_sum;
  void *alloca_result;
  _QWORD *saved_alloca_result;
  _DWORD *malloc_base_result;
  __int64 callee_output_word;
  __int64 packed_word_bits;
  _QWORD scratch_buffer[3];
  char unrecovered_register_value;
  __int64 unused_local;

  unsigned int sr_ret = 0; /* edi: 0x14026A4C9 / 0x14026A590 xor edi, edi */
  crt_locale_update((_LocaleUpdate *)scratch_buffer, a1);
  loaded_word = *(_DWORD *)(scratch_buffer[1] + 12LL);
  call_result = sub_14024F174((__int64)a2, a3, 0, 0);
  cached_call_result = call_result;
  if ( !call_result )
    goto LABEL_18;
  comparison_result = (2LL * call_result + 16) & -(__int64)(2LL * call_result < (unsigned __int64)(2LL * call_result + 16));
  if ( !comparison_result )
  {
    saved_alloca_result = nullptr;
    goto LABEL_12;
  }
  if ( comparison_result <= 0x400 )
  {
    integer_sum = comparison_result + 15;
    if ( comparison_result + 15 < comparison_result )
      integer_sum = 0xFFFFFFFFFFFFFF0LL;
    alloca_result = alloca(integer_sum & 0xFFFFFFFFFFFFFFF0uLL);
    saved_alloca_result = alloca_result;
    if ( &callee_output_word == (__int64 *)-64LL )
      goto LABEL_15;
    LODWORD(scratch_buffer[0]) = 52428;
    goto LABEL_10;
  }
  malloc_base_result = (_DWORD *)malloc_base();
  saved_alloca_result = malloc_base_result;
  if ( malloc_base_result )
  {
    *malloc_base_result = 56797;
LABEL_10:
    saved_alloca_result += 2;
  }
LABEL_12:
  if ( saved_alloca_result && (unsigned int)sub_14024F174((__int64)a2, a3, (__int64)saved_alloca_result, cached_call_result) )
  {
    LODWORD(packed_word_bits) = a5;
    sr_ret = (unsigned int)crt_wide_char_to_multi_byte(loaded_word, 0, (__int64)saved_alloca_result, 0xFFFFFFFFLL, a4 & -(__int64)(a5 != 0), packed_word_bits, 0, 0); /* 0x14026A58C: mov edi, eax */
  }
LABEL_15:
  if ( saved_alloca_result && *((_DWORD *)saved_alloca_result - 4) == 56797 )
    free_base(saved_alloca_result - 2);
LABEL_18:
  if ( unrecovered_register_value )
    *(_DWORD *)(scratch_buffer[0] + 936LL) &= ~2u;
  return sr_ret; /* 0x14026A5B9: mov eax, edi */
}

//----- (000000014026A5E4) ----------------------------------------------------
__int64            _acrt_GetLocaleInfoA_sr(struct sr_anon_68 *a1, int a2,      sr_anon_49 *a3, unsigned int a4, __int64 *a5)
{
  int LocaleInfoA;
  __int64 cached_localeinfoa;
  int internalgetlocaleinfoa_result;
  __int64 calloc_base_result;
  void *saved_calloc_base_result;
  int internalgetlocaleinfoa_result_2;
  __int64 cached_calloc_base_result;
  unsigned int call_result;
  __int64 calloc_base_result_2;
  __int64 unused_local;
  int unused_written_slot[2];
  _DWORD scratch_buffer[4];
  char Source[128];
  __int64 unused_local_2;

  int sr_ret = -1; /* edi: 0x14026A6F2 or edi, 0xffffffff */
  *a5 = 0;
  switch ( a2 )
  {
    case 1:
      LocaleInfoA = InternalGetLocaleInfoA(a1, a3, a4, (__int64)Source, 128);
      cached_localeinfoa = LocaleInfoA;
      if ( LocaleInfoA )
      {
        *a5 = calloc_base();
        free_base(nullptr);
        if ( *a5 && (unsigned int)strncpy_s_sr((_BYTE *)*a5, cached_localeinfoa, (__int64)Source, (int)cached_localeinfoa - 1) )
        {
          *(_QWORD *)unused_written_slot = 0;
          crt_invoke_watson();
          __debugbreak();
        }
        return *a5 ? 0 : (unsigned int)-1; /* 0x14026A65E: je -> or eax, 0xffffffff; else 0x14026A682: xor eax, eax */
      }
      if ( (unsigned int)((__int64 (*)(void))GetLastError)() != 122 )
        return (unsigned int)-1; /* 0x14026A692: -> or eax, 0xffffffff */
      internalgetlocaleinfoa_result = InternalGetLocaleInfoA(a1, a3, a4, 0, 0);
      if ( !internalgetlocaleinfoa_result )
        return (unsigned int)-1; /* 0x14026A6B2: -> or eax, 0xffffffff */
      calloc_base_result = calloc_base();
      saved_calloc_base_result = (void *)calloc_base_result;
      if ( !calloc_base_result )
      {
LABEL_12:
        free_base(saved_calloc_base_result);
        return (unsigned int)sr_ret; /* 0x14026A6FD: mov eax, edi */
      }
      internalgetlocaleinfoa_result_2 = InternalGetLocaleInfoA(a1, a3, a4, calloc_base_result, internalgetlocaleinfoa_result);
LABEL_10:
      if ( internalgetlocaleinfoa_result_2 )
      {
        cached_calloc_base_result = (__int64)saved_calloc_base_result;
        saved_calloc_base_result = nullptr;
        *a5 = cached_calloc_base_result;
        sr_ret = 0; /* edi stays 0 on this path */
      }
      goto LABEL_12;
    case 2:
      call_result = sub_14024F174((__int64)a3, a4, 0, 0);
      if ( !call_result )
        return (unsigned int)-1; /* 0x14026A71F: -> or eax, 0xffffffff */
      calloc_base_result_2 = calloc_base();
      saved_calloc_base_result = (void *)calloc_base_result_2;
      if ( !calloc_base_result_2 )
        goto LABEL_12;
      internalgetlocaleinfoa_result_2 = sub_14024F174((__int64)a3, a4, calloc_base_result_2, call_result);
      goto LABEL_10;
    case 0:
      scratch_buffer[0] = 0;
      if ( (unsigned int)sub_14024F174((__int64)a3, a4 | 0x20000000, (__int64)scratch_buffer, 2u) )
      {
        *(_BYTE *)a5 = scratch_buffer[0];
        return 0; /* 0x14026A76D -> 0x14026A682: xor eax, eax */
      }
      break;
  }
  return (unsigned int)-1; /* 0x14026A772: or eax, 0xffffffff */
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014026A7AC) ----------------------------------------------------
__int64            _strncnt_sr(_BYTE *a1, __int64 a2)
{
  __int64 result;

  result = 0;
  if ( *a1 )
  {
    do
    {
      if ( result == a2 )
        break;
      ++result;
    }
    while ( a1[result] );
  }
  return result;
}

//----- (000000014026A7C4) ----------------------------------------------------
__int64            _acrt_OutputDebugStringA(__int64 a1)
{
  int unused_written_slot;
  __int64 iteration_count;
  __int64 integer_sum;
  unsigned __int64 scaled_index;
  unsigned __int64 masked_bits;
  void *alloca_result;
  void *saved_alloca_result;
  _QWORD OutputString[2];

  unused_written_slot = a1;
  if ( a1 )
  {
    iteration_count = -1;
    do
      ++iteration_count;
    while ( *(_BYTE *)(a1 + iteration_count) );
    integer_sum = iteration_count + 1;
    if ( integer_sum )
    {
      scaled_index = 2 * integer_sum + 15;
      if ( scaled_index <= 2 * integer_sum )
        scaled_index = 0xFFFFFFFFFFFFFF0LL;
      masked_bits = scaled_index & 0xFFFFFFFFFFFFFFF0uLL;
      /* One allocation, converted into and printed; OutputString only receives
         the count converted (the export had both as the local, truncated). */
      alloca_result = alloca(masked_bits);
      saved_alloca_result = alloca_result;
      if ( !(unsigned int)mbstowcs_s_sr((unsigned __int64 *)OutputString, (sr_anon_115 *)saved_alloca_result, integer_sum, (char *)a1, integer_sum - 1) )
        ((void (           *)(void *))OutputDebugStringW)(saved_alloca_result);
    }
  }
  return 0; /* no caller reads the result */
}

// 14026E090: invalid function type 'void (__stdcall *OutputDebugStringW)(LPCWSTR lpOutputString)' has been ignored

//----- (000000014026A860) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_943(_BYTE *a1, unsigned __int8 *a2)
{
  __int64 iteration_count;
  unsigned __int8 *buffer_cursor;
  bool comparison_result;
  unsigned __int8 i;
  _QWORD callee_output_word[11];

  iteration_count = 0;
  buffer_cursor = a2;
  comparison_result = 1;
  do
  {
    if ( !comparison_result )
      sub_1401F8694();
    *((_BYTE *)&callee_output_word[4] + iteration_count++) = 0;
    comparison_result = (unsigned __int64)iteration_count < 0x20;
  }
  while ( iteration_count < 32 );
  for ( i = *a2; i; i = *buffer_cursor )
  {
    ++buffer_cursor;
    *((_BYTE *)&callee_output_word[4] + ((unsigned __int64)i >> 3)) |= 1 << (i & 7);
  }
  while ( *a1
       && ((unsigned __int8)(1 << (*a1 & 7)) & *((_BYTE *)&callee_output_word[4] + ((unsigned __int64)(unsigned __int8)*a1 >> 3))) == 0 )
    ++a1;
  return *a1 ? (__int64)a1 : 0; /* 0x14026A8F3: mov rax, r8 at a match; 0x14026A8DF: xor eax, eax at the terminator */
}

//----- (000000014026A900) ----------------------------------------------------
char *        strpbrk_sr(     char *Str,      char *Control)
{
  __int64 masked_bits;
       __m128i *state_address;
  char *cached_str;
  __m128i loaded_vector;
  unsigned int lane_mask;
  unsigned int callee_output_word;
  BOOL comparison_result;
  __m128i loaded_vector_2;
  unsigned int lane_mask_2;
  unsigned int callee_output_word_2;
  char input_byte;
  __m128i converted_vector;
  __m128i reordered_vector;

  masked_bits = (unsigned __int8)Control & 0xF;
  state_address = (     __m128i *)&Control[-masked_bits];
  cached_str = (char *)Str;
  loaded_vector = _mm_loadu_si128((     __m128i *)&Control[-masked_bits]);
  switch ( (unsigned __int8)Control & 0xF )
  {
    case 1:
      loaded_vector = _mm_srli_si128(loaded_vector, 1);
      break;
    case 2:
      loaded_vector = _mm_srli_si128(loaded_vector, 2);
      break;
    case 3:
      loaded_vector = _mm_srli_si128(loaded_vector, 3);
      break;
    case 4:
      loaded_vector = _mm_srli_si128(loaded_vector, 4);
      break;
    case 5:
      loaded_vector = _mm_srli_si128(loaded_vector, 5);
      break;
    case 6:
      loaded_vector = _mm_srli_si128(loaded_vector, 6);
      break;
    case 7:
      loaded_vector = _mm_srli_si128(loaded_vector, 7);
      break;
    case 8:
      loaded_vector = _mm_srli_si128(loaded_vector, 8);
      break;
    case 9:
      loaded_vector = _mm_srli_si128(loaded_vector, 9);
      break;
    case 0xA:
      loaded_vector = _mm_srli_si128(loaded_vector, 10);
      break;
    case 0xB:
      loaded_vector = _mm_srli_si128(loaded_vector, 11);
      break;
    case 0xC:
      loaded_vector = _mm_srli_si128(loaded_vector, 12);
      break;
    case 0xD:
      loaded_vector = _mm_srli_si128(loaded_vector, 13);
      break;
    case 0xE:
      loaded_vector = _mm_srli_si128(loaded_vector, 14);
      break;
    case 0xF:
      loaded_vector = _mm_srli_si128(loaded_vector, 15);
      break;
    default:
      break;
  }
  lane_mask = _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_cvtsi32_si128((int)(0LL)), loaded_vector));
  if ( lane_mask )
  {
    _BitScanForward(&callee_output_word, lane_mask);
    comparison_result = ((unsigned __int8)Control & 0xF) == 0 || callee_output_word < (unsigned __int64)(16 - masked_bits);
    if ( 15 - callee_output_word <= 0xF )
    {
      switch ( 15 - callee_output_word )
      {
        case 0u:
          loaded_vector = _mm_srli_si128(_mm_slli_si128(loaded_vector, 1), 1);
          break;
        case 1u:
          loaded_vector = _mm_srli_si128(_mm_slli_si128(loaded_vector, 2), 2);
          break;
        case 2u:
          loaded_vector = _mm_srli_si128(_mm_slli_si128(loaded_vector, 3), 3);
          break;
        case 3u:
          loaded_vector = _mm_srli_si128(_mm_slli_si128(loaded_vector, 4), 4);
          break;
        case 4u:
          loaded_vector = _mm_srli_si128(_mm_slli_si128(loaded_vector, 5), 5);
          break;
        case 5u:
          loaded_vector = _mm_srli_si128(_mm_slli_si128(loaded_vector, 6), 6);
          break;
        case 6u:
          loaded_vector = _mm_srli_si128(_mm_slli_si128(loaded_vector, 7), 7);
          break;
        case 7u:
          loaded_vector = _mm_srli_si128(_mm_slli_si128(loaded_vector, 8), 8);
          break;
        case 8u:
          loaded_vector = _mm_srli_si128(_mm_slli_si128(loaded_vector, 9), 9);
          break;
        case 9u:
          loaded_vector = _mm_srli_si128(_mm_slli_si128(loaded_vector, 10), 10);
          break;
        case 0xAu:
          loaded_vector = _mm_srli_si128(_mm_slli_si128(loaded_vector, 11), 11);
          break;
        case 0xBu:
          loaded_vector = _mm_srli_si128(_mm_slli_si128(loaded_vector, 12), 12);
          break;
        case 0xCu:
          loaded_vector = _mm_srli_si128(_mm_slli_si128(loaded_vector, 13), 13);
          break;
        case 0xDu:
          loaded_vector = _mm_srli_si128(_mm_slli_si128(loaded_vector, 14), 14);
          break;
        case 0xEu:
          loaded_vector = _mm_srli_si128(_mm_slli_si128(loaded_vector, 15), 15);
          break;
        case 0xFu:
          loaded_vector = _mm_cvtsi64_si128((long long)(0));
          break;
      }
    }
    if ( !comparison_result )
      goto LABEL_40;
  }
  else
  {
    if ( ((unsigned __int8)Control & 0xF) != 0 )
    {
LABEL_40:
      loaded_vector_2 = _mm_loadu_si128(state_address + 1);
      lane_mask_2 = _mm_movemask_epi8(_mm_cmpeq_epi8(loaded_vector_2, _mm_cvtsi32_si128((int)(0LL))));
      if ( !lane_mask_2 )
        return (char *)unknown_libname_943(cached_str, (unsigned __int8 *)Control);
      _BitScanForward(&callee_output_word_2, lane_mask_2);
      if ( (unsigned __int64)callee_output_word_2 - masked_bits < 0xFFFFFFFFFFFFFFF0uLL && callee_output_word_2 - masked_bits != 0 )
        return (char *)unknown_libname_943(cached_str, (unsigned __int8 *)Control);
      switch ( 15 - callee_output_word_2 )
      {
        case 0u:
          loaded_vector_2 = _mm_slli_si128(loaded_vector_2, 1);
          break;
        case 1u:
          loaded_vector_2 = _mm_slli_si128(loaded_vector_2, 2);
          break;
        case 2u:
          loaded_vector_2 = _mm_slli_si128(loaded_vector_2, 3);
          break;
        case 3u:
          loaded_vector_2 = _mm_slli_si128(loaded_vector_2, 4);
          break;
        case 4u:
          loaded_vector_2 = _mm_slli_si128(loaded_vector_2, 5);
          break;
        case 5u:
          loaded_vector_2 = _mm_slli_si128(loaded_vector_2, 6);
          break;
        case 6u:
          loaded_vector_2 = _mm_slli_si128(loaded_vector_2, 7);
          break;
        case 7u:
          loaded_vector_2 = _mm_slli_si128(loaded_vector_2, 8);
          break;
        case 8u:
          loaded_vector_2 = _mm_slli_si128(loaded_vector_2, 9);
          break;
        case 9u:
          loaded_vector_2 = _mm_slli_si128(loaded_vector_2, 10);
          break;
        case 0xAu:
          loaded_vector_2 = _mm_slli_si128(loaded_vector_2, 11);
          break;
        case 0xBu:
          loaded_vector_2 = _mm_slli_si128(loaded_vector_2, 12);
          break;
        case 0xCu:
          loaded_vector_2 = _mm_slli_si128(loaded_vector_2, 13);
          break;
        case 0xDu:
          loaded_vector_2 = _mm_slli_si128(loaded_vector_2, 14);
          break;
        case 0xEu:
          loaded_vector_2 = _mm_slli_si128(loaded_vector_2, 15);
          break;
        case 0xFu:
          loaded_vector_2 = _mm_cvtsi64_si128((long long)(0));
          break;
        default:
          break;
      }
      loaded_vector = _mm_or_si128(loaded_vector_2, loaded_vector);
      goto LABEL_64;
    }
    if ( SR_VEC_PTR_LANES(128, state_address, i8)[1] )
      return (char *)unknown_libname_943(Str, (unsigned __int8 *)Control);
  }
LABEL_64:
  input_byte = *cached_str;
  if ( !*cached_str )
    return nullptr;
  while ( 1 )
  {
    converted_vector = _mm_cvtsi32_si128(input_byte);
    reordered_vector = _mm_unpacklo_epi8(converted_vector, converted_vector);
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_shuffle_epi32(_mm_unpacklo_epi8(reordered_vector, reordered_vector), 0), loaded_vector)) )
      break;
    input_byte = *++cached_str;
    if ( !input_byte )
      return nullptr;
  }
  return cached_str;
}

//----- (000000014026ACE0) ----------------------------------------------------
unsigned __int8 *        mbsdec_sr(     unsigned __int8 *Start,      unsigned __int8 *Pos)
{
  return mbsdec_l(Start, Pos, 0);
}

//----- (000000014026ACE8) ----------------------------------------------------
unsigned __int8 *           mbsdec_l(unsigned __int64 a1, unsigned __int64 a2, struct __crt_locale_pointers *a3)
{
  unsigned __int8 *remaining_count;
  __int64 callee_output_word;
  __int64 unrecovered_register_value;
  char unrecovered_register_value_2;

  if ( !a1 || !a2 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return nullptr;
  }
  if ( a1 >= a2 )
    return nullptr;
  crt_locale_update((_LocaleUpdate *)&callee_output_word, a3);
  remaining_count = (unsigned __int8 *)(a2 - 1);
  if ( *(_DWORD *)(unrecovered_register_value + 8) )
  {
    do
      --remaining_count;
    while ( a1 <= (unsigned __int64)remaining_count && (*(_BYTE *)(*remaining_count + unrecovered_register_value + 25) & 4) != 0 );
    remaining_count = (unsigned __int8 *)(a2 - (((_BYTE)a2 - (_BYTE)remaining_count) & 1) - 1);
  }
  if ( unrecovered_register_value_2 )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  return remaining_count;
}

// 14026ACE8: invalid function type 'unsigned __int8 *__cdecl mbsdec_l(const unsigned __int8 *Start, const unsigned __int8 *Pos, _locale_t Locale)' has been ignored

//----- (000000014026AD7C) ----------------------------------------------------
_BOOL8 initialize_multibyte()
{
  return sub_14025F520() == 0;
}

//----- (000000014026AD9C) ----------------------------------------------------
__int64            msize(__int64 a1)
{
  if ( a1 )
    return ((__int64 (           *)(_QWORD, _QWORD, __int64))HeapSize)(g_144CBFA48, 0, a1);
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return -1;
}

// 14026AD9C: invalid function type '#66 __cdecl msize(void *Block)' has been ignored
// 14026E018: invalid function type 'SIZE_T (__stdcall *HeapSize)(HANDLE hHeap, DWORD dwFlags, LPCVOID lpMem)' has been ignored

//----- (000000014026ADD8) ----------------------------------------------------
__int64            _ascii_wcsicmp(unsigned __int16 *a1, unsigned __int16 *a2)
{
  int loaded_word;
  int loaded_word_2;
  int saved_loaded_word;
  int saved_loaded_word_2;
  __int64 result;

  do
  {
    loaded_word = *a1++;
    loaded_word_2 = *a2++;
    saved_loaded_word = loaded_word + 32;
    if ( (unsigned int)(loaded_word - 65) > 0x19 )
      saved_loaded_word = loaded_word;
    saved_loaded_word_2 = loaded_word_2 + 32;
    if ( (unsigned int)(loaded_word_2 - 65) > 0x19 )
      saved_loaded_word_2 = loaded_word_2;
    result = (unsigned int)(saved_loaded_word - saved_loaded_word_2);
  }
  while ( !(_DWORD)result && saved_loaded_word );
  return result;
}

//----- (000000014026AE18) ----------------------------------------------------
__int64            sub_14026AE18(unsigned __int16 *a1, unsigned __int16 *a2)
{
  if ( g_144CBF178 )
    return sub_14026AE60(a1, a2, nullptr);
  if ( a1 && a2 )
    return _ascii_wcsicmp(a1, a2);
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0x7FFFFFFF;
}

//----- (000000014026AE60) ----------------------------------------------------
__int64            sub_14026AE60(unsigned __int16 *a1, unsigned __int16 *a2, struct __crt_locale_pointers *a3)
{
  unsigned __int16 *buffer_cursor;
  unsigned __int16 *buffer_cursor_2;
  __int64 table_value;
  unsigned int ascii_wcsicmp_result;
  __int64 loaded_word;
  unsigned __int16 saved_loaded_word;
  int callee_output_word;
  int cached_loaded_word;
  __int64 loaded_word_2;
  unsigned __int16 saved_loaded_word_2;
  __int64 callee_output_word_2;
  _QWORD scratch_buffer[2];
  char unrecovered_register_value;

  buffer_cursor = a2;
  buffer_cursor_2 = a1;
  if ( a1 && a2 )
  {
    crt_locale_update((_LocaleUpdate *)&callee_output_word_2, a3);
    table_value = scratch_buffer[0];
    if ( *(_QWORD *)(scratch_buffer[0] + 312LL) )
    {
      do
      {
        if ( *buffer_cursor_2 >= 0x100u )
        {
          saved_loaded_word = sub_14026B084(*buffer_cursor_2, (struct __crt_locale_pointers *)scratch_buffer);
          table_value = scratch_buffer[0];
        }
        else
        {
          loaded_word = *(unsigned __int8 *)buffer_cursor_2;
          if ( (wctype[loaded_word + 1] & 1) != 0 )
            LOBYTE(loaded_word) = *(_BYTE *)(loaded_word + *(_QWORD *)(table_value + 272));
          saved_loaded_word = (unsigned __int8)loaded_word;
        }
        ++buffer_cursor_2;
        callee_output_word = saved_loaded_word;
        cached_loaded_word = saved_loaded_word;
        if ( *buffer_cursor >= 0x100u )
        {
          saved_loaded_word_2 = sub_14026B084(*buffer_cursor, (struct __crt_locale_pointers *)scratch_buffer);
          table_value = scratch_buffer[0];
        }
        else
        {
          loaded_word_2 = *(unsigned __int8 *)buffer_cursor;
          if ( (wctype[loaded_word_2 + 1] & 1) != 0 )
            LOBYTE(loaded_word_2) = *(_BYTE *)(loaded_word_2 + *(_QWORD *)(table_value + 272));
          saved_loaded_word_2 = (unsigned __int8)loaded_word_2;
        }
        ++buffer_cursor;
        ascii_wcsicmp_result = cached_loaded_word - saved_loaded_word_2;
      }
      while ( !ascii_wcsicmp_result && callee_output_word );
    }
    else
    {
      ascii_wcsicmp_result = _ascii_wcsicmp(buffer_cursor_2, buffer_cursor);
    }
    if ( unrecovered_register_value )
      *(_DWORD *)(callee_output_word_2 + 936) &= ~2u;
    return ascii_wcsicmp_result;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0x7FFFFFFF;
  }
}

//----- (000000014026AF88) ----------------------------------------------------
int         wcscmp_sr(     sr_anon_49 *String1,      sr_anon_49 *String2)
{
  int loaded_word;
  unsigned int loaded_word_2;
  signed __int64 integer_difference;

  loaded_word = *(unsigned __int16 *)String2;
  loaded_word_2 = *(unsigned __int16 *)String1 - loaded_word;
  if ( !loaded_word_2 )
  {
    integer_difference = (intptr_t)((uintptr_t)String1 - (uintptr_t)String2);
    do
    {
      if ( !(_WORD)loaded_word )
        break;
      String2 = (     sr_anon_49 *)((char *)String2 + 2);
      loaded_word = *(unsigned __int16 *)String2;
      loaded_word_2 = *(unsigned __int16 *)((char *)String2 + integer_difference) - loaded_word;
    }
    while ( !loaded_word_2 );
  }
  return ((int)loaded_word_2 > 0) - (loaded_word_2 >> 31);
}

//----- (000000014026AFC8) ----------------------------------------------------
int         fegetexceptflag(fexcept_t *Except, int TestFlags)
{
  int masked_bits;
  int status;

  masked_bits = TestFlags & 0x1F;
  if ( (TestFlags & 0x1F) != 0 )
  {
    status = _acrt_fenv_get_status();
    *(_DWORD *)Except = status & _acrt_fenv_get_fp_status_word_from_exception_mask_sr(masked_bits);
  }
  else
  {
    *(_DWORD *)Except &= masked_bits;
  }
  return 0;
}

//----- (000000014026B014) ----------------------------------------------------
int         fesetexceptflag_sr(     sr_anon_69 *Except, int SetFlags)
{
  int masked_bits;
  int fp_status_word_from_exception_mask;
  int named_call_result;
  int status;
  int masked_bits_2;
  char masked_bits_3;
  int result;

  masked_bits = SetFlags & 0x1F;
  result = false;
  if ( masked_bits )
  {
    fp_status_word_from_exception_mask = _acrt_fenv_get_fp_status_word_from_exception_mask_sr(masked_bits);
    named_call_result = _acrt_fenv_get_fp_status_word_from_exception_mask_sr(63) & *(_DWORD *)Except;
    status = _acrt_fenv_get_status();
    masked_bits_2 = fp_status_word_from_exception_mask & named_call_result;
    masked_bits_3 = masked_bits_2 | ~(_BYTE)fp_status_word_from_exception_mask & status;
    _acrt_fenv_set_status(masked_bits_2 | ~fp_status_word_from_exception_mask & status);
    if ( fetestexcept(masked_bits_3 & 0x1F) != (masked_bits_3 & 0x1F) )
      return true;
  }
  return result;
}

//----- (000000014026B084) ----------------------------------------------------
__int64            sub_14026B084(unsigned __int16 a1, struct __crt_locale_pointers *a2)
{
  __int64 result;
  unsigned __int16 unused_written_slot;
  __int64 loaded_word;
  int acrt_lcmapstringw_result;
  __int64 callee_output_word;
  __int64 unrecovered_register_value;
  char unrecovered_register_value_2;
  unsigned __int16 input_value;
  unsigned __int16 callee_output_word_2;

  input_value = a1;
  result = 0xFFFF;
  if ( a1 != 0xFFFF )
  {
    crt_locale_update((_LocaleUpdate *)&callee_output_word, a2);
    unused_written_slot = input_value;
    if ( input_value >= 0x100u )
    {
      loaded_word = *(_QWORD *)(unrecovered_register_value + 312);
      if ( loaded_word )
      {
        acrt_lcmapstringw_result = _acrt_LCMapStringW(loaded_word, 0x100u, (__int64)&input_value, 1, (__int64)&callee_output_word_2, 1);
        unused_written_slot = input_value;
        if ( acrt_lcmapstringw_result )
          unused_written_slot = callee_output_word_2;
      }
    }
    else if ( (((     unsigned char *)&wctype[1])[2 * (unsigned __int8)input_value] & 1) != 0 )
    {
      unused_written_slot = *(unsigned __int8 *)(*(_QWORD *)(unrecovered_register_value + 272) + (unsigned __int8)input_value);
    }
    else
    {
      unused_written_slot = (unsigned __int8)input_value;
    }
    if ( unrecovered_register_value_2 )
      *(_DWORD *)(callee_output_word + 936) &= ~2u;
    return unused_written_slot;
  }
  return result;
}

//----- (000000014026B148) ----------------------------------------------------
__int64            __crt_seh_guarded_call__int__operator_call___lambda_63911f43cc86614963252b1f423aad40___lambda_522ac1b1e1a1180d6f374a882b81d1c8___lambda_6da5eaf298b4749753c721cc8c61e051_(
        __int64 a1,
        unsigned int *a2,
        _DWORD **a3,
        unsigned int *a4)
{
  unsigned int unused_written_slot;

  sub_140261068(*a2);
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)**a3 >> 6) + 19065401] + 72LL * (**a3 & 0x3F) + 56) & 1) != 0 )
  {
    unused_written_slot = chsize_nolock((int)**a3, *(_QWORD *)a3[1]);
  }
  else
  {
    unused_written_slot = 9;
    *errno_sr() = 9;
  }
  sub_140261150(*a4);
  return unused_written_slot;
}

//----- (000000014026B1C0) ----------------------------------------------------
__int64            sub_14026B1C0(unsigned int a1, _DWORD **a2)
{
  __int64 callee_output_word;
  unsigned int input_value;
  unsigned int input_value_2;

  input_value = a1;
  input_value_2 = a1;
  return __crt_seh_guarded_call__int__operator_call___lambda_63911f43cc86614963252b1f423aad40___lambda_522ac1b1e1a1180d6f374a882b81d1c8___lambda_6da5eaf298b4749753c721cc8c61e051_(
           (__int64)&callee_output_word,
           &input_value_2,
           a2,
           &input_value);
}

//----- (000000014026B204) ----------------------------------------------------
__crt_seek_guard *           __crt_seek_guard____crt_seek_guard(__crt_seek_guard *this, unsigned int a2, __int64 a3)
{
  __int64 lseeki64_nolock_result;

  *(_QWORD *)this = lseeki64_nolock(a2, 0, 1u);
  lseeki64_nolock_result = lseeki64_nolock(a2, 0, 2u);
  *((_QWORD *)this + 1) = lseeki64_nolock_result;
  *((_QWORD *)this + 2) = a3 - lseeki64_nolock_result;
  *((_DWORD *)this + 6) = a2;
  return this;
}

//----- (000000014026B26C) ----------------------------------------------------
__int64            _lambda_522ac1b1e1a1180d6f374a882b81d1c8___operator_call(_DWORD **a1)
{
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)**a1 >> 6) + 19065401] + 72LL * (**a1 & 0x3F) + 56) & 1) != 0 )
    return chsize_nolock((unsigned int)**a1, *(_QWORD *)a1[1]);
  *errno_sr() = 9;
  return 9;
}

//----- (000000014026B2D0) ----------------------------------------------------
int         chsize(int FileHandle, int Size)
{
  return -((unsigned int)chsize_s(FileHandle, Size) != 0);
}

//----- (000000014026B2E8) ----------------------------------------------------
__int64            chsize_nolock(__int64 FileHandle, __int64 a2)
{
  unsigned int cached_filehandle;
  __int64 lseeki64_nolock_result;
  __int64 lseeki64_nolock_result_2;
  __int64 remaining_amount;
  unsigned int unused_written_slot;
  __m128i *calloc_base_result;
  int call_result;
  unsigned int saved_remaining_amount;
  int call_result_2;
  __int64 osfhandle;
  _DWORD *unused_written_slot_2;

  cached_filehandle = FileHandle;
  lseeki64_nolock_result = lseeki64_nolock(FileHandle, 0, 1u);
  lseeki64_nolock_result_2 = lseeki64_nolock(cached_filehandle, 0, 2u);
  remaining_amount = a2 - lseeki64_nolock_result_2;
  if ( lseeki64_nolock_result == -1 || lseeki64_nolock_result_2 == -1 )
    goto LABEL_20;
  unused_written_slot = 0;
  if ( remaining_amount <= 0 )
  {
    if ( remaining_amount >= 0 )
      goto LABEL_21;
    if ( lseeki64_nolock(cached_filehandle, a2, 0) != -1 )
    {
      osfhandle = get_osfhandle(cached_filehandle);
      if ( (unsigned int)((__int64 (           *)(__int64))SetEndOfFile)(osfhandle) )
        goto LABEL_21;
      *errno_sr() = 13;
      unused_written_slot_2 = crt_doserrno();
      *unused_written_slot_2 = ((__int64 (*)(void))GetLastError)();
    }
LABEL_20:
    unused_written_slot = *errno_sr();
    goto LABEL_21;
  }
  calloc_base_result = (__m128i *)calloc_base();
  if ( calloc_base_result )
  {
    call_result = sub_140247C1C(cached_filehandle, 0x8000);
    while ( 1 )
    {
      saved_remaining_amount = remaining_amount;
      if ( remaining_amount >= 4096 )
        saved_remaining_amount = 4096;
      call_result_2 = sub_140253B04(cached_filehandle, calloc_base_result, saved_remaining_amount);
      if ( call_result_2 == -1 )
        break;
      remaining_amount -= call_result_2;
      if ( remaining_amount <= 0 )
      {
        sub_140247C1C(cached_filehandle, call_result);
        goto LABEL_14;
      }
    }
    if ( *(_DWORD *)crt_doserrno() == 5 )
      *errno_sr() = 13;
  }
  else
  {
    *errno_sr() = 12;
  }
  unused_written_slot = *errno_sr();
LABEL_14:
  free_base(calloc_base_result);
LABEL_21:
  lseeki64_nolock(cached_filehandle, lseeki64_nolock_result, 0);
  return unused_written_slot;
}

// 14026E010: invalid function type 'BOOL (__stdcall *SetEndOfFile)(HANDLE hFile)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014026B454) ----------------------------------------------------
__int64            chsize_s(int a1, __int64 a2)
{
  int *unused_written_slot;
  unsigned int selection_code;
  int input_value;
  _DWORD *scratch_buffer[4];
  int input_value_2;
  __int64 input_value_3;
  char callee_output_word;
  int input_value_4;

  input_value_3 = a2;
  input_value_2 = a1;
  if ( a1 == -2 )
  {
    *(_DWORD *)crt_doserrno() = 0;
    return 9;
  }
  if ( a1 >= 0
    && a1 < g_144CBF750
    && (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)a1 >> 6) + 19065401] + 72LL * (a1 & 0x3F) + 56) & 1) != 0 )
  {
    if ( a2 >= 0 )
    {
      input_value_4 = a1;
      scratch_buffer[0] = &input_value_2;
      input_value = a1;
      scratch_buffer[1] = &input_value_3;
      return __crt_seh_guarded_call__int__operator_call___lambda_63911f43cc86614963252b1f423aad40___lambda_522ac1b1e1a1180d6f374a882b81d1c8___lambda_6da5eaf298b4749753c721cc8c61e051_(
               (__int64)&callee_output_word,
               (unsigned int *)&input_value,
               scratch_buffer,
               (unsigned int *)&input_value_4);
    }
    *(_DWORD *)crt_doserrno() = 0;
    unused_written_slot = errno_sr();
    selection_code = 22;
  }
  else
  {
    *(_DWORD *)crt_doserrno() = 0;
    unused_written_slot = errno_sr();
    selection_code = 9;
  }
  *unused_written_slot = selection_code;
  crt_invalid_parameter_noinfo();
  return selection_code;
}

// 14026B454: invalid function type 'errno_t __cdecl chsize_s(int FileHandle, __int64 Size)' has been ignored

//----- (000000014026B530) ----------------------------------------------------
__int64            umask_s(unsigned int a1, _DWORD *a2)
{
  if ( !a2 || (*a2 = g_144CBFA80, (a1 & 0xFFFFFE7F) != 0) )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 22;
  }
  else
  {
    g_144CBFA80 = a1;
    return 0;
  }
}

// 14026B530: invalid function type 'errno_t __cdecl umask_s(int NewMode, int *OldMode)' has been ignored

//----- (000000014026B570) ----------------------------------------------------
__int64            __crt_mbstring____mbrtoc32_utf8(__int64 a1, char *a2, unsigned __int64 a3, unsigned int *a4)
{
  unsigned int *state_address;
  char *cached_parameters;
  unsigned __int64 input_value;
  _DWORD *comparison_result;
  unsigned __int8 loaded_word;
  unsigned __int8 loaded_word_2;
  unsigned __int8 loaded_word_3;
  unsigned int shifted_bits;
  unsigned __int64 saved_loaded_word;
  char input_byte;
  _DWORD scratch_buffer[12];
  __int64 unused_local;

  state_address = &g_144CBFA88;
  cached_parameters = Parameters;
  if ( a4 )
    state_address = a4;
  if ( a2 )
    cached_parameters = a2;
  input_value = 1;
  if ( a2 )
    input_value = a3;
  comparison_result = (_DWORD *)(a1 & -(__int64)(a2 != nullptr));
  if ( input_value )
  {
    if ( *((_WORD *)state_address + 3) )
    {
      loaded_word_2 = *((_BYTE *)state_address + 4);
      shifted_bits = *state_address;
      loaded_word_3 = *((_BYTE *)state_address + 6);
      if ( (unsigned __int8)(loaded_word_2 - 2) > 2u || !loaded_word_3 || loaded_word_3 >= loaded_word_2 )
        goto LABEL_37;
    }
    else
    {
      loaded_word = *cached_parameters++;
      if ( (loaded_word & 0x80u) == 0 )
      {
        if ( comparison_result )
          *comparison_result = loaded_word;
        return loaded_word != 0; /* 0x14026B5F9: setne r10b; mov rax, r10 */
      }
      if ( (loaded_word & 0xE0) == 0xC0 )
      {
        loaded_word_2 = 2;
      }
      else if ( (loaded_word & 0xF0) == 0xE0 )
      {
        loaded_word_2 = 3;
      }
      else
      {
        if ( (loaded_word & 0xF8) != 0xF0 )
          goto LABEL_37;
        loaded_word_2 = 4;
      }
      loaded_word_3 = loaded_word_2;
      shifted_bits = loaded_word & ((1 << (7 - loaded_word_2)) - 1);
    }
    saved_loaded_word = loaded_word_3;
    if ( loaded_word_3 >= input_value )
      saved_loaded_word = input_value;
    while ( cached_parameters - a2 < saved_loaded_word )
    {
      input_byte = *cached_parameters++;
      if ( (input_byte & 0xC0) != 0x80 )
        goto LABEL_37;
      shifted_bits = (shifted_bits << 6) | input_byte & 0x3F;
    }
    if ( saved_loaded_word < loaded_word_3 )
    {
      *((_WORD *)state_address + 2) = loaded_word_2;
      *((_WORD *)state_address + 3) = (unsigned __int8)(loaded_word_3 - saved_loaded_word);
      *state_address = shifted_bits;
      return -2; /* 0x14026B6CC -> 0x14026B5CD: mov rax, 0xfffffffffffffffe */
    }
    if ( shifted_bits - 55296 > 0x7FF && shifted_bits < 0x110000 )
    {
      scratch_buffer[8] = 128;
      scratch_buffer[9] = 2048;
      scratch_buffer[10] = 0x10000;
      if ( shifted_bits >= scratch_buffer[loaded_word_2 + 6] )
      {
        if ( comparison_result )
          *comparison_result = shifted_bits;
        *(_QWORD *)state_address = 0;
        return shifted_bits ? (unsigned __int64)loaded_word_3 : 0; /* 0x14026B70F: neg edx; sbb rax, rax; and rax, rbp */
      }
    }
LABEL_37:
    *(_QWORD *)state_address = 0;
    *errno_sr() = 42;
    return -1; /* 0x14026B72A: or rax, 0xffffffffffffffff */
  }
  return -2; /* 0x14026B5CD: mov rax, 0xfffffffffffffffe */
}

//----- (000000014026B754) ----------------------------------------------------
__int64            console_output_reopen_and_retry___lambda_61c1b8a38cedca4df5fdc542e6ccae6d_(__int64 *a1)
{
  unsigned int int64_result;
  __int64 int64_result_2;
  __int64 table_value;
  __int64 loaded_word;
  __int64 loaded_word_2;

  int64_result = ((__int64 (           *)(_QWORD, _QWORD, _QWORD, __int64, _QWORD))WriteConsoleW)(
         hObject,
         *a1,
         *((unsigned int *)a1 + 2),
         a1[2],
         0);
  if ( !int64_result && (unsigned int)((__int64 (*)(void))GetLastError)() == 6 )
  {
    if ( hObject <= 0xFFFFFFFFFFFFFFFDuLL )
      ((void (*)(void))CloseHandle)();
    int64_result_2 = ((__int64 (           *)(     __int16 *, __int64, __int64, _QWORD, int, _DWORD, _QWORD))CreateFileW)(
           L"CONOUT$",
           0x40000000,
           3,
           0,
           3,
           0,
           0);
    table_value = a1[2];
    loaded_word = *((unsigned int *)a1 + 2);
    loaded_word_2 = *a1;
    hObject = int64_result_2;
    return (unsigned int)((__int64 (           *)(__int64, __int64, __int64, __int64, _QWORD))WriteConsoleW)(
                           int64_result_2,
                           loaded_word_2,
                           loaded_word,
                           table_value,
                           0);
  }
  return int64_result;
}

// 14026E170: invalid function type 'BOOL (__stdcall *WriteConsoleW)(HANDLE hConsoleOutput, const void *lpBuffer, DWORD nNumberOfCharsToWrite, LPDWORD lpNumberOfCharsWritten, LPVOID lpReserved)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E1B8: invalid function type 'BOOL (__stdcall *CloseHandle)(HANDLE hObject)' has been ignored
// 14026E020: invalid function type 'HANDLE (__stdcall *CreateFileW)(LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile)' has been ignored

//----- (000000014026B818) ----------------------------------------------------
__int64            sub_14026B818(__int64 a1)
{
  return ((__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WriteConsoleW)(
           hObject,
           *(_QWORD *)a1,
           *(unsigned int *)(a1 + 8),
           *(_QWORD *)(a1 + 16),
           0);
}

// 14026E170: invalid function type 'BOOL (__stdcall *WriteConsoleW)(HANDLE hConsoleOutput, const void *lpBuffer, DWORD nNumberOfCharsToWrite, LPDWORD lpNumberOfCharsWritten, LPVOID lpReserved)' has been ignored

//----- (000000014026B840) ----------------------------------------------------
__int64 sub_14026B840()
{
  __int64 result;

  result = ((__int64 (           *)(     __int16 *, __int64, __int64, _QWORD, int, _DWORD, _QWORD))CreateFileW)(
             L"CONOUT$",
             0x40000000,
             3,
             0,
             3,
             0,
             0);
  hObject = result;
  return result;
}

// 14026E020: invalid function type 'HANDLE (__stdcall *CreateFileW)(LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile)' has been ignored

//----- (000000014026B87C) ----------------------------------------------------
__int64 _dcrt_lowio_ensure_console_output_initialized()
{
  __int64 int64_result;
  unsigned int selection_flag;

  int64_result = hObject;
  selection_flag = 0;
  if ( hObject == -2 )
  {
    int64_result = ((__int64 (           *)(     __int16 *, __int64, __int64, _QWORD, int, _DWORD, _QWORD))CreateFileW)(
           L"CONOUT$",
           0x40000000,
           3,
           0,
           3,
           0,
           0);
    hObject = int64_result;
  }
  LOBYTE(selection_flag) = int64_result != -1;
  return selection_flag;
}

// 14026E020: invalid function type 'HANDLE (__stdcall *CreateFileW)(LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile)' has been ignored

//----- (000000014026B8D0) ----------------------------------------------------
__int64 sub_14026B8D0()
{
  __int64 result;

  if ( hObject <= 0xFFFFFFFFFFFFFFFDuLL )
    return ((__int64 (*)(void))CloseHandle)();
  return result;
}

// 14026E1B8: invalid function type 'BOOL (__stdcall *CloseHandle)(HANDLE hObject)' has been ignored

//----- (000000014026B8EC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_946(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int int64_result;

  int64_result = ((__int64 (           *)(_QWORD, __int64, _QWORD, __int64, _QWORD))WriteConsoleW)(hObject, a1, a2, a3, 0);
  if ( !int64_result && (unsigned int)((__int64 (*)(void))GetLastError)() == 6 )
  {
    if ( hObject <= 0xFFFFFFFFFFFFFFFDuLL )
      ((void (*)(void))CloseHandle)();
    hObject = ((__int64 (           *)(     __int16 *, __int64, __int64, _QWORD, int, _DWORD, _QWORD))CreateFileW)(
                L"CONOUT$",
                0x40000000,
                3,
                0,
                3,
                0,
                0);
    return (unsigned int)((__int64 (           *)(_QWORD, __int64, _QWORD, __int64, _QWORD))WriteConsoleW)(
                           hObject,
                           a1,
                           a2,
                           a3,
                           0);
  }
  return int64_result;
}

// 14026E170: invalid function type 'BOOL (__stdcall *WriteConsoleW)(HANDLE hConsoleOutput, const void *lpBuffer, DWORD nNumberOfCharsToWrite, LPDWORD lpNumberOfCharsWritten, LPVOID lpReserved)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E1B8: invalid function type 'BOOL (__stdcall *CloseHandle)(HANDLE hObject)' has been ignored
// 14026E020: invalid function type 'HANDLE (__stdcall *CreateFileW)(LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile)' has been ignored

//----- (000000014026B9AC) ----------------------------------------------------
int         fegetenv(fenv_t *Env)
{
  *(_DWORD *)Env = _acrt_fenv_get_control_sr();
  *((_DWORD *)Env + 1) = _acrt_fenv_get_status();
  return 0;
}

//----- (000000014026B9CC) ----------------------------------------------------
int         fesetenv_sr(     sr_anon_70 *Env)
{
  __int64 Enva;

  _acrt_fenv_set_control(*(_DWORD *)Env);
  _acrt_fenv_set_status(*((_DWORD *)Env + 1));
  Enva = 0;
  return fegetenv((fenv_t *)&Enva) || *(_QWORD *)Env != Enva;
}

//----- (000000014026BA18) ----------------------------------------------------
int         feholdexcept_sr(sr_anon_70 *Env)
{
  __int64 cached_enva;
  __int64 Enva;

  Enva = 0;
  if ( fegetenv((fenv_t *)&Enva) )
    return 1;
  cached_enva = Enva;
  LODWORD(Enva) = Enva | 0x1F;
  *(_QWORD *)Env = cached_enva;
  if ( fesetenv_sr((     sr_anon_70 *)&Enva) )
    return 1;
  clearfp();
  return 0;
}

//----- (000000014026BA68) ----------------------------------------------------
double         ceil(double X)
{
  double cached_x;
  unsigned __int64 masked_bits;
  _BOOL8 comparison_result;
  double shifted_bits;

  cached_x = X;
  masked_bits = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
  comparison_result = *(_QWORD *)&X != (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL);
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) < 0x4340000000000000LL )
  {
    if ( masked_bits >= 0x3FF0000000000000LL )
    {
      *(_QWORD *)&shifted_bits = *(_QWORD *)&X & ~((1LL << (51 - (unsigned __int8)(*(_QWORD *)&X >> 52))) - 1);
      X = shifted_bits;
      if ( !comparison_result && *(_QWORD *)&shifted_bits != *(_QWORD *)&cached_x )
        return shifted_bits + 1.0;
    }
    else if ( masked_bits )
    {
      if ( *(_QWORD *)&X == (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL) )
        return 1.0;
      else
        return -0.0;
    }
  }
  else if ( masked_bits > 0x7FF0000000000000LL )
  {
    return handle_nan_sr(*(__int64 *)&X);
  }
  return X;
}

//----- (000000014026BB2C) ----------------------------------------------------
__int64            _acrt_CompareStringW(__int64 a1, unsigned int a2, __m128i *a3, int a4, __m128i *a5, int a6)
{
  unsigned int call_result;
  int call_result_2;
  __int64 result;
  int integer_difference;

  call_result = a4;
  if ( a4 > 0 )
    call_result = sub_140254F48(a3, a4);
  call_result_2 = a6;
  if ( a6 > 0 )
    call_result_2 = sub_140254F48(a5, a6);
  if ( call_result && call_result_2 )
    return sub_14024EDE0(a1, a2, (__int64)a3, call_result, (__int64)a5, call_result_2, 0, 0, 0);
  integer_difference = call_result - call_result_2;
  result = ((integer_difference >> 31) & 0xFFFFFFFE) + 3;
  if ( !integer_difference )
    return 2;
  return result;
}

//----- (000000014026BBEC) ----------------------------------------------------
__int64            InternalCompareStringA(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int8 *a4,
        int a5,
        char *String,
        int a7,
        unsigned int CodePage)
{
  int strncnt_sr_result;
  int strncnt_sr_result_2;
  unsigned int cached_codepage;
  unsigned __int8 *i;
  unsigned __int8 *j;
  signed int multi_byte_to_wide_char_result;
  unsigned int saved_multi_byte_to_wide_char_result;
  unsigned __int64 comparison_result;
  __int64 integer_sum;
  void *alloca_result;
  unsigned int *record_byte_offset;
  unsigned int *malloc_base_result;
  int multi_byte_to_wide_char_result_2;
  int saved_multi_byte_to_wide_char_result_2;
  unsigned __int64 comparison_result_2;
  __int64 integer_sum_2;
  void *alloca_result_2;
  unsigned int *record_byte_offset_2;
  unsigned int *malloc_base_result_2;
  _BYTE scratch_buffer[32];
  unsigned int *unused_written_slot;
  unsigned int unused_written_slot_2;
  unsigned int input_value;
  __int64 input_value_2;
  _DWORD CPInfo[6];
  __int64 unused_local;

  strncnt_sr_result = a5;
  input_value = a3;
  unsigned int sr_ret = 0; /* esi: 0x14026BEED / 0x14026BF07 xor esi, esi */
  input_value_2 = a2;
  if ( a5 <= 0 )
  {
    if ( a5 < -1 )
      return 0; /* 0x14026BC49: -> xor eax, eax */
  }
  else
  {
    strncnt_sr_result = _strncnt_sr(a4, a5);
  }
  strncnt_sr_result_2 = a7;
  if ( a7 <= 0 )
  {
    if ( a7 < -1 )
      return 0; /* 0x14026BC6D: -> xor eax, eax */
  }
  else
  {
    strncnt_sr_result_2 = _strncnt_sr(String, a7);
  }
  cached_codepage = CodePage;
  if ( !CodePage )
    cached_codepage = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
  if ( !strncnt_sr_result || !strncnt_sr_result_2 )
  {
    if ( strncnt_sr_result == strncnt_sr_result_2 )
      return 2; /* 0x14026BC94: -> mov eax, 2 */
    if ( strncnt_sr_result_2 > 1 )
      return 1; /* 0x14026BC9D: -> mov eax, 1 */
    if ( strncnt_sr_result > 1 )
      return 3; /* 0x14026BCA6: -> mov eax, 3 */
    if ( !(unsigned int)((__int64 (           *)(_QWORD, _DWORD *))GetCPInfo)(cached_codepage, CPInfo) )
    {
      return 0; /* 0x14026BCB7: -> xor eax, eax */
    }
    if ( strncnt_sr_result > 0 )
    {
      if ( CPInfo[0] >= 2u )
      {
        for ( i = (unsigned __int8 *)&CPInfo[1] + 2; *i; i += 2 )
        {
          if ( !i[1] )
            break;
          if ( *a4 >= *i && *a4 <= i[1] )
            return 2; /* 0x14026BCE1: jbe -> mov eax, 2 */
        }
      }
      return 3; /* 0x14026BCF0: mov eax, 3 */
    }
    if ( strncnt_sr_result_2 > 0 )
    {
      if ( CPInfo[0] >= 2u )
      {
        for ( j = (unsigned __int8 *)&CPInfo[1] + 2; *j; j += 2 )
        {
          if ( !j[1] )
            break;
          if ( (unsigned __int8)*String >= *j && (unsigned __int8)*String <= j[1] )
            return 2; /* 0x14026BD1F: jbe -> mov eax, 2 */
        }
      }
      return 1; /* 0x14026BD2E: mov eax, 1 */
    }
  }
  unused_written_slot_2 = 0;
  unused_written_slot = nullptr;
  multi_byte_to_wide_char_result = crt_multi_byte_to_wide_char();
  saved_multi_byte_to_wide_char_result = multi_byte_to_wide_char_result;
  if ( !multi_byte_to_wide_char_result )
    return 0; /* 0x14026BD5A: -> xor eax, eax */
  comparison_result = (2LL * multi_byte_to_wide_char_result + 16) & -(__int64)(2LL * multi_byte_to_wide_char_result < (unsigned __int64)(2LL * multi_byte_to_wide_char_result + 16));
  if ( !comparison_result )
  {
    record_byte_offset = nullptr;
    goto LABEL_42;
  }
  if ( comparison_result <= 0x400 )
  {
    integer_sum = comparison_result + 15;
    if ( comparison_result + 15 < comparison_result )
      integer_sum = 0xFFFFFFFFFFFFFF0LL;
    alloca_result = alloca(integer_sum & 0xFFFFFFFFFFFFFFF0uLL);
    record_byte_offset = alloca_result;
    if ( scratch_buffer == (_BYTE *)-80LL )
      goto LABEL_61;
    input_value = 52428;
    goto LABEL_40;
  }
  malloc_base_result = (unsigned int *)malloc_base();
  record_byte_offset = malloc_base_result;
  if ( malloc_base_result )
  {
    *malloc_base_result = 56797;
LABEL_40:
    record_byte_offset += 4;
  }
LABEL_42:
  if ( record_byte_offset )
  {
    unused_written_slot_2 = saved_multi_byte_to_wide_char_result;
    unused_written_slot = record_byte_offset;
    if ( (unsigned int)crt_multi_byte_to_wide_char() )
    {
      unused_written_slot_2 = 0;
      unused_written_slot = nullptr;
      multi_byte_to_wide_char_result_2 = crt_multi_byte_to_wide_char();
      saved_multi_byte_to_wide_char_result_2 = multi_byte_to_wide_char_result_2;
      if ( multi_byte_to_wide_char_result_2 )
      {
        comparison_result_2 = (2LL * multi_byte_to_wide_char_result_2 + 16) & -(__int64)(2LL * multi_byte_to_wide_char_result_2 < (unsigned __int64)(2LL * multi_byte_to_wide_char_result_2 + 16));
        if ( !comparison_result_2 )
        {
          record_byte_offset_2 = nullptr;
          goto LABEL_55;
        }
        if ( comparison_result_2 > 0x400 )
        {
          malloc_base_result_2 = (unsigned int *)malloc_base();
          record_byte_offset_2 = malloc_base_result_2;
          if ( !malloc_base_result_2 )
          {
LABEL_55:
            if ( record_byte_offset_2 )
            {
              unused_written_slot_2 = saved_multi_byte_to_wide_char_result_2;
              unused_written_slot = record_byte_offset_2;
              if ( (unsigned int)crt_multi_byte_to_wide_char() )
                sr_ret = (unsigned int)sub_14024EDE0(input_value_2, input_value, (__int64)record_byte_offset, saved_multi_byte_to_wide_char_result, (__int64)record_byte_offset_2, saved_multi_byte_to_wide_char_result_2, 0, 0, 0); /* 0x14026BEE9: mov esi, eax */
            }
LABEL_58:
            if ( record_byte_offset_2 && *(record_byte_offset_2 - 4) == 56797 )
              free_base(record_byte_offset_2 - 4);
            goto LABEL_61;
          }
          *malloc_base_result_2 = 56797;
        }
        else
        {
          integer_sum_2 = comparison_result_2 + 15;
          if ( comparison_result_2 + 15 < comparison_result_2 )
            integer_sum_2 = 0xFFFFFFFFFFFFFF0LL;
          alloca_result_2 = alloca(integer_sum_2 & 0xFFFFFFFFFFFFFFF0uLL);
          record_byte_offset_2 = alloca_result_2;
          if ( scratch_buffer == (_BYTE *)-80LL )
            goto LABEL_58;
          input_value = 52428;
        }
        record_byte_offset_2 += 4;
        goto LABEL_55;
      }
    }
  }
LABEL_61:
  if ( record_byte_offset && *(record_byte_offset - 4) == 56797 )
    free_base(record_byte_offset - 4);
  return sr_ret; /* 0x14026BF1F: mov eax, esi */
}

// 14026E0A8: invalid function type 'BOOL (__stdcall *GetCPInfo)(UINT CodePage, LPCPINFO lpCPInfo)' has been ignored

//----- (000000014026BF4C) ----------------------------------------------------
__int64            _acrt_CompareStringA(
        struct __crt_locale_pointers *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int8 *a4,
        int a5,
        char *a6,
        int a7,
        unsigned int a8)
{
  __int64 result;
  __int64 callee_output_word;
  _BYTE scratch_buffer[32];

  crt_locale_update((_LocaleUpdate *)&callee_output_word, a1);
  result = InternalCompareStringA((__int64)scratch_buffer, a2, a3, a4, a5, a6, a7, a8);
  if ( scratch_buffer[16] )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  return result;
}

//----- (000000014026BFD8) ----------------------------------------------------
unsigned __int64            _mbstowcs_l_helper(sr_anon_115 *this, char *a2,      char **a3, struct __crt_locale_pointers *a4)
{
  sr_anon_115 *cached_this;
  unsigned __int64 crt_mbstring_mbsrtowcs_utf8_result;
  char *byte_cursor;
  int multi_byte_to_wide_char_result;
  __int64 saved_multi_byte_to_wide_char_result;
  int remaining_count;
  char *i;
  int multi_byte_to_wide_char_result_2;
  int multi_byte_to_wide_char_result_3;
  __int64 callee_output_word;
  __int64 callee_output_word_2;
  char unrecovered_register_value;
  unsigned __int64 selection_flag;
  char *input_cursor;

  input_cursor = a2;
  cached_this = this;
  crt_mbstring_mbsrtowcs_utf8_result = 0;
  if ( this )
  {
    if ( !a3 )
      return 0;
    *(_WORD *)this = 0;
  }
  if ( !a2 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return -1;
  }
  crt_locale_update((_LocaleUpdate *)&callee_output_word, a4);
  if ( *(_DWORD *)(callee_output_word_2 + 12) == 65001 )
  {
    selection_flag = 0;
    crt_mbstring_mbsrtowcs_utf8_result = __crt_mbstring____mbsrtowcs_utf8(cached_this, &input_cursor, a3, (unsigned int *)&selection_flag);
    goto LABEL_32;
  }
  if ( cached_this )
  {
    if ( !*(_QWORD *)(callee_output_word_2 + 312) )
    {
      if ( a3 )
      {
        byte_cursor = input_cursor;
        do
        {
          *(_WORD *)cached_this = (unsigned __int8)byte_cursor[crt_mbstring_mbsrtowcs_utf8_result];
          if ( !byte_cursor[crt_mbstring_mbsrtowcs_utf8_result] )
            break;
          ++crt_mbstring_mbsrtowcs_utf8_result;
          cached_this = (sr_anon_115 *)((char *)cached_this + 2);
        }
        while ( crt_mbstring_mbsrtowcs_utf8_result < (unsigned __int64)a3 );
      }
      goto LABEL_32;
    }
    crt_mbstring_mbsrtowcs_utf8_result = -1;
    multi_byte_to_wide_char_result = crt_multi_byte_to_wide_char();
    saved_multi_byte_to_wide_char_result = multi_byte_to_wide_char_result;
    if ( !multi_byte_to_wide_char_result )
    {
      if ( (unsigned int)((__int64 (           *)(_QWORD))GetLastError)(0) != 122 )
        goto LABEL_24;
      remaining_count = (int)a3;
      for ( i = input_cursor; remaining_count; ++i )
      {
        --remaining_count;
        if ( !*i )
          break;
        if ( (unsigned int)isleadbyte_l((unsigned __int8)*i, (struct __crt_locale_pointers *)&callee_output_word_2) )
        {
          if ( !*++i )
            goto LABEL_24;
        }
      }
      multi_byte_to_wide_char_result_2 = crt_multi_byte_to_wide_char();
      if ( multi_byte_to_wide_char_result_2 )
      {
        crt_mbstring_mbsrtowcs_utf8_result = multi_byte_to_wide_char_result_2;
      }
      else
      {
LABEL_24:
        *errno_sr() = 42;
        *(_WORD *)cached_this = 0;
      }
      goto LABEL_32;
    }
    goto LABEL_31;
  }
  crt_mbstring_mbsrtowcs_utf8_result = -1;
  if ( *(_QWORD *)(callee_output_word_2 + 312) )
  {
    multi_byte_to_wide_char_result_3 = crt_multi_byte_to_wide_char();
    saved_multi_byte_to_wide_char_result = multi_byte_to_wide_char_result_3;
    if ( !multi_byte_to_wide_char_result_3 )
    {
      *errno_sr() = 42;
      goto LABEL_32;
    }
LABEL_31:
    crt_mbstring_mbsrtowcs_utf8_result = saved_multi_byte_to_wide_char_result - 1;
    goto LABEL_32;
  }
  do
    ++crt_mbstring_mbsrtowcs_utf8_result;
  while ( input_cursor[crt_mbstring_mbsrtowcs_utf8_result] );
LABEL_32:
  if ( unrecovered_register_value )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  return crt_mbstring_mbsrtowcs_utf8_result;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (000000014026C1E0) ----------------------------------------------------
__int64            mbstowcs_s_l(
        unsigned __int64 *a1,
        sr_anon_115 *a2,
        unsigned __int64 a3,
        char *a4,
        unsigned __int64 MaxCount,
        struct __crt_locale_pointers *Locale)
{
  unsigned int errno_sr_result;
       char **cached_maxcount;
  int *unused_written_slot;
  unsigned __int64 mbstowcs_l_helper_result;
  unsigned __int64 integer_sum;
  __int64 callee_output_word;
  _BYTE scratch_buffer[48];

  errno_sr_result = 0;
  if ( !a2 )
  {
    if ( !a3 )
      goto LABEL_3;
LABEL_12:
    errno_sr_result = 22;
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return errno_sr_result;
  }
  if ( !a3 )
    goto LABEL_12;
LABEL_3:
  if ( a2 )
    *(_WORD *)a2 = 0;
  if ( a1 )
    *a1 = 0;
  crt_locale_update((_LocaleUpdate *)&callee_output_word, Locale);
  cached_maxcount = (     char **)MaxCount;
  if ( MaxCount > a3 )
    cached_maxcount = (     char **)a3;
  if ( (unsigned __int64)cached_maxcount <= 0x7FFFFFFF )
  {
    mbstowcs_l_helper_result = _mbstowcs_l_helper(a2, a4, cached_maxcount, (struct __crt_locale_pointers *)scratch_buffer);
    if ( mbstowcs_l_helper_result == -1 )
    {
      if ( a2 )
        *(_WORD *)a2 = 0;
      errno_sr_result = *errno_sr();
      goto LABEL_26;
    }
    integer_sum = mbstowcs_l_helper_result + 1;
    if ( a2 )
    {
      if ( integer_sum > a3 )
      {
        if ( MaxCount != -1 )
        {
          *(_WORD *)a2 = 0;
          unused_written_slot = errno_sr();
          errno_sr_result = 34;
          goto LABEL_21;
        }
        integer_sum = a3;
        errno_sr_result = 80;
      }
      *((_WORD *)a2 + integer_sum - 1) = 0;
    }
    if ( a1 )
      *a1 = integer_sum;
    goto LABEL_26;
  }
  unused_written_slot = errno_sr();
  errno_sr_result = 22;
LABEL_21:
  *unused_written_slot = errno_sr_result;
  crt_invalid_parameter_noinfo();
LABEL_26:
  if ( scratch_buffer[16] )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  return errno_sr_result;
}

// 14026C1E0: invalid function type 'errno_t __cdecl mbstowcs_s_l(#66 *PtNumOfCharConverted, #49 *DstBuf, #66 SizeInWords, const char *SrcBuf, #66 MaxCount, _locale_t Locale)' has been ignored

//----- (000000014026C330) ----------------------------------------------------
__int64            mbstowcs_s_sr(unsigned __int64 *a1, sr_anon_115 *a2, unsigned __int64 a3, char *a4, unsigned __int64 MaxCount)
{
  return mbstowcs_s_l(a1, a2, a3, a4, MaxCount, nullptr);
}

// 14026C330: invalid function type 'errno_t __cdecl mbstowcs_s(#66 *PtNumOfCharConverted, #49 *DstBuf, #66 SizeInWords, const char *SrcBuf, #66 MaxCount)' has been ignored

//----- (000000014026C350) ----------------------------------------------------
int         fetestexcept(int Flags)
{
  int Except;

  Except = 0;
  fegetexceptflag((fexcept_t *)&Except, Flags);
  return Except & 0x1F;
}

//----- (000000014026C374) ----------------------------------------------------
__int64            _acrt_LCMapStringW(__int64 a1, unsigned int a2, __m128i *a3, int a4, __int64 a5, int a6)
{
  unsigned int integer_sum;
  unsigned int call_result;
  bool comparison_result;
  bool export_ofsub32_result;

  integer_sum = a4;
  if ( a4 > 0 )
  {
    call_result = sub_140254F48(a3, a4);
    export_ofsub32_result = sr_export_ofsub32(call_result, integer_sum);
    comparison_result = (int)(call_result - integer_sum) < 0;
    integer_sum = call_result + 1;
    if ( comparison_result == export_ofsub32_result )
      integer_sum = call_result;
  }
  return sub_14024F4D0(a1, a2, (__int64)a3, integer_sum, a5, a6, 0, 0, 0);
}

//----- (000000014026C520) ----------------------------------------------------
unsigned int         clearfp()
{
  char fpsr;
  unsigned int option_flags;
  int masked_bits;
  int saved_masked_bits;
  int cached_masked_bits;

  fpsr = get_fpsr();
  fclrf_sr();
  option_flags = 0;
  if ( (fpsr & 0x3F) != 0 )
  {
    masked_bits = (16 * (fpsr & 1)) | 8;
    if ( (fpsr & 4) == 0 )
      masked_bits = 16 * (fpsr & 1);
    saved_masked_bits = masked_bits | 4;
    if ( (fpsr & 8) == 0 )
      saved_masked_bits = masked_bits;
    cached_masked_bits = saved_masked_bits | 2;
    if ( (fpsr & 0x10) == 0 )
      cached_masked_bits = saved_masked_bits;
    option_flags = cached_masked_bits | 1;
    if ( (fpsr & 0x20) == 0 )
      option_flags = cached_masked_bits;
    if ( (fpsr & 2) != 0 )
      option_flags |= 0x80000u;
  }
  return option_flags;
}

//----- (000000014026C670) ----------------------------------------------------
void         set_controlfp(unsigned int NewValue, unsigned int Mask)
{
  if ( NewValue != 589855 || Mask != -1 || (_mm_getcsr() & 0xFEC0) != 0x1E80 )
    common_control87(NewValue, Mask & 0xFFF7FFFF);
}

//----- (000000014026C708) ----------------------------------------------------
__int64            common_control87(int a1, int a2)
{
  int masked_bits;
  unsigned int fpsr;
  __int16 cached_fpsr;
  int state_address;
  int saved_state_address;
  int cached_state_address;
  int cached_state_address_2;
  unsigned int option_flags;
  int masked_bits_2;
  int masked_bits_3;
  int integer_difference;
  int masked_bits_4;
  int masked_bits_5;
  int saved_masked_bits;
  int cached_masked_bits;
  int cached_masked_bits_2;
  unsigned int option_flags_2;
  int masked_bits_6;
  int masked_bits_7;
  int state_address_2;
  int saved_state_address_2;
  int cached_state_address_3;
  int cached_state_address_4;
  int masked_bits_8;
  int masked_bits_9;
  int integer_difference_2;

  masked_bits = a2 & 0x308031F;
  fpsr = get_fpsr();
  cached_fpsr = fpsr;
  state_address = (fpsr >> 3) & 0x10 | 8;
  if ( (fpsr & 0x200) == 0 )
    state_address = (fpsr >> 3) & 0x10;
  saved_state_address = state_address | 4;
  if ( (fpsr & 0x400) == 0 )
    saved_state_address = state_address;
  cached_state_address = saved_state_address | 2;
  if ( (fpsr & 0x800) == 0 )
    cached_state_address = saved_state_address;
  cached_state_address_2 = cached_state_address | 1;
  if ( (fpsr & 0x1000) == 0 )
    cached_state_address_2 = cached_state_address;
  option_flags = cached_state_address_2 | 0x80000;
  if ( (fpsr & 0x100) == 0 )
    option_flags = cached_state_address_2;
  masked_bits_2 = fpsr & 0x6000;
  if ( (cached_fpsr & 0x6000) != 0 )
  {
    switch ( masked_bits_2 )
    {
      case 8192:
        option_flags |= 0x100u;
        break;
      case 16384:
        option_flags |= 0x200u;
        break;
      case 24576:
        option_flags |= 0x300u;
        break;
    }
  }
  masked_bits_3 = (cached_fpsr & 0x8040) - 64;
  if ( masked_bits_3 )
  {
    integer_difference = masked_bits_3 - 32704;
    if ( integer_difference )
    {
      if ( integer_difference == 64 )
        option_flags |= 0x1000000u;
    }
    else
    {
      option_flags |= 0x3000000u;
    }
  }
  else
  {
    option_flags |= 0x2000000u;
  }
  masked_bits_4 = masked_bits & a1 | option_flags & ~masked_bits;
  if ( masked_bits_4 != option_flags )
  {
    masked_bits_5 = (8 * (masked_bits_4 & 0x10)) | 0x200;
    if ( (masked_bits_4 & 8) == 0 )
      masked_bits_5 = 8 * (masked_bits_4 & 0x10);
    saved_masked_bits = masked_bits_5 | 0x400;
    if ( (masked_bits_4 & 4) == 0 )
      saved_masked_bits = masked_bits_5;
    cached_masked_bits = saved_masked_bits | 0x800;
    if ( (masked_bits_4 & 2) == 0 )
      cached_masked_bits = saved_masked_bits;
    cached_masked_bits_2 = cached_masked_bits | 0x1000;
    if ( (masked_bits_4 & 1) == 0 )
      cached_masked_bits_2 = cached_masked_bits;
    option_flags_2 = cached_masked_bits_2 | 0x100;
    if ( (masked_bits_4 & 0x80000) == 0 )
      option_flags_2 = cached_masked_bits_2;
    masked_bits_6 = masked_bits_4 & 0x300;
    if ( (masked_bits_4 & 0x300) != 0 )
    {
      switch ( masked_bits_6 )
      {
        case 256:
          option_flags_2 |= 0x2000u;
          break;
        case 512:
          option_flags_2 |= 0x4000u;
          break;
        case 768:
          option_flags_2 |= 0x6000u;
          break;
      }
    }
    masked_bits_7 = masked_bits_4 & 0x3000000;
    switch ( masked_bits_7 )
    {
      case 16777216:
        option_flags_2 |= 0x8040u;
        break;
      case 33554432:
        option_flags_2 |= 0x40u;
        break;
      case 50331648:
        option_flags_2 |= 0x8000u;
        break;
    }
    if ( byte_140302B98 && (option_flags_2 & 0x40) != 0 )
    {
      set_fpsr_sr(option_flags_2);
    }
    else
    {
      option_flags_2 &= ~0x40u;
      set_fpsr_sr(option_flags_2);
    }
    state_address_2 = (option_flags_2 >> 3) & 0x10 | 8;
    if ( (option_flags_2 & 0x200) == 0 )
      state_address_2 = (option_flags_2 >> 3) & 0x10;
    saved_state_address_2 = state_address_2 | 4;
    if ( (option_flags_2 & 0x400) == 0 )
      saved_state_address_2 = state_address_2;
    cached_state_address_3 = saved_state_address_2 | 2;
    if ( (option_flags_2 & 0x800) == 0 )
      cached_state_address_3 = saved_state_address_2;
    cached_state_address_4 = cached_state_address_3 | 1;
    if ( (option_flags_2 & 0x1000) == 0 )
      cached_state_address_4 = cached_state_address_3;
    option_flags = cached_state_address_4 | 0x80000;
    if ( (option_flags_2 & 0x100) == 0 )
      option_flags = cached_state_address_4;
    masked_bits_8 = option_flags_2 & 0x6000;
    if ( (option_flags_2 & 0x6000) != 0 )
    {
      switch ( masked_bits_8 )
      {
        case 8192:
          option_flags |= 0x100u;
          break;
        case 16384:
          option_flags |= 0x200u;
          break;
        case 24576:
          option_flags |= 0x300u;
          break;
      }
    }
    masked_bits_9 = (option_flags_2 & 0x8040) - 64;
    if ( masked_bits_9 )
    {
      integer_difference_2 = masked_bits_9 - 32704;
      if ( integer_difference_2 )
      {
        if ( integer_difference_2 == 64 )
          option_flags |= 0x1000000u;
      }
      else
      {
        option_flags |= 0x3000000u;
      }
    }
    else
    {
      option_flags |= 0x2000000u;
    }
  }
  return option_flags;
}

//----- (000000014026C9C6) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_free, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_14026C9C6()
{
  __asm__("movabs $__imp_SDL_free, %rax\n\tjmp *(%rax)");
}

//----- (000000014026C9CC) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_SetMainReady, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_14026C9CC()
{
  __asm__("movabs $__imp_SDL_SetMainReady, %rax\n\tjmp *(%rax)");
}

//----- (000000014026C9D2) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_iconv_string, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_14026C9D2()
{
  __asm__("movabs $__imp_SDL_iconv_string, %rax\n\tjmp *(%rax)");
}

//----- (000000014026C9D8) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_wcslen, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_14026C9D8()
{
  __asm__("movabs $__imp_SDL_wcslen, %rax\n\tjmp *(%rax)");
}

//----- (000000014026C9DE) ----------------------------------------------------
// attributes: thunk
/* A jump to SDL_calloc, as in the original: every argument register passes through. */
__attribute__((naked)) __int64 sub_14026C9DE()
{
  __asm__("movabs $__imp_SDL_calloc, %rax\n\tjmp *(%rax)");
}

//----- (000000014026C9F0) ----------------------------------------------------
__int64            sub_14026C9F0(__int64 a1, unsigned __int64 a2)
{
  unsigned int iteration_count;
  __int64 loaded_word;
  __int64 result;
  unsigned __int64 loaded_word_2;

  iteration_count = 0;
  loaded_word = a1 + *(int *)(a1 + 60);
  result = loaded_word + *(unsigned __int16 *)(loaded_word + 20) + 24LL;
  if ( !*(_WORD *)(loaded_word + 6) )
    return 0;
  while ( 1 )
  {
    loaded_word_2 = *(unsigned int *)(result + 12);
    if ( a2 >= loaded_word_2 && a2 < (unsigned int)(loaded_word_2 + *(_DWORD *)(result + 8)) )
      break;
    ++iteration_count;
    result += 40;
    if ( iteration_count >= *(unsigned __int16 *)(loaded_word + 6) )
      return 0;
  }
  return result;
}

//----- (000000014026CA40) ----------------------------------------------------
__int64            sub_14026CA40(__int64 a1)
{
  __int64 result;

  result = sub_14026CA90(0x140000000LL);
  if ( (_DWORD)result )
  {
    result = sub_14026C9F0(0x140000000LL, a1 - 0x140000000LL);
    if ( result )
      return *(int *)(result + 36) >= 0;
  }
  return result;
}

//----- (000000014026CA90) ----------------------------------------------------
_BOOL8            sub_14026CA90(__int64 a1)
{
  __int64 loaded_word;
  _BOOL8 result;

  result = false;
  if ( *(_WORD *)a1 == 23117 )
  {
    loaded_word = a1 + *(int *)(a1 + 60);
    if ( *(_DWORD *)loaded_word == 17744 && *(_WORD *)(loaded_word + 24) == 523 )
      return true;
  }
  return result;
}

//----- (000000014026CAC0) ----------------------------------------------------
__int64            sub_14026CAC0(unsigned int *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 loaded_word;
  __int64 result;

  loaded_word = *(_QWORD *)(a4 + 56) + 16LL * **(unsigned int **)(a4 + 56);
  sub_1401F8958(a2, a4, loaded_word + 4);
  result = 1;
  if ( ((((a1[1] & 0x66) != 0) + 1) & *(_DWORD *)(loaded_word + 4)) != 0 )
    return sub_1401FCF80(a1, a2, a3, a4);
  return result;
}

//----- (000000014026CD20) ----------------------------------------------------
__int64            sub_14026CD20(__int64 a1, __int64 a2)
{
  return ((__int64 (           *)(__int64, __int64, _QWORD, _QWORD))RtlUnwind)(a1, a2, 0, 0);
}

// 14026E308: invalid function type 'void (__stdcall *RtlUnwind)(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)' has been ignored

//----- (000000014026CD4C) ----------------------------------------------------
__m128i *           sub_14026CD4C(unsigned __int64 a1, int a2)
{
  __m128i *unused_written_slot;
  __m128i *buffer_cursor;
       __m128i *buffer_cursor_2;
  __int64 packed_word_bits;
  __m128i *buffer_cursor_3;
  int shifted_bits;
  __m128i reordered_vector;
  unsigned int lane_mask;
  int i;
  __int64 callee_output_word;
  __m128i *packed_vector;
  unsigned int masked_bits;
  __int64 lookup_index;
  __int8 *state_address;
  __m128i converted_vector;
  unsigned __int8 comparison_vector;
  int comparison_vector_2;

  unused_written_slot = nullptr;
  buffer_cursor = (__m128i *)a1;
  if ( a2 )
  {
    if ( dword_140302080 >= 2 )
    {
      while ( ((unsigned __int8)buffer_cursor & 0xF) != 0 )
      {
        if ( SR_VEC_PTR_LANES(128, buffer_cursor, i8)[0] == a2 )
          unused_written_slot = buffer_cursor;
        if ( !SR_VEC_PTR_LANES(128, buffer_cursor, i8)[0] )
          return unused_written_slot;
        buffer_cursor = (__m128i *)((char *)buffer_cursor + 1);
      }
      converted_vector = _mm_cvtsi32_si128((unsigned __int8)a2);
      while ( 1 )
      {
        comparison_vector_2 = _mm_cmpistri(converted_vector, *buffer_cursor, 64);
        comparison_vector = _mm_cmpistrz(converted_vector, *buffer_cursor, 64);
        if ( _mm_cmpistrc(converted_vector, *buffer_cursor, 64) )
        {
          unused_written_slot = (__m128i *)((char *)buffer_cursor + comparison_vector_2);
          comparison_vector = _mm_cmpistrz(converted_vector, *buffer_cursor, 64);
        }
        if ( comparison_vector )
          break;
        ++buffer_cursor;
      }
    }
    else
    {
      buffer_cursor_3 = (__m128i *)(a1 & 0xFFFFFFFFFFFFFFF0uLL);
      shifted_bits = -1 << (a1 & 0xF);
      reordered_vector = _mm_shuffle_epi32(
             _mm_shufflelo_epi16(_mm_cvtsi32_si128((unsigned __int8)a2 | ((unsigned __int8)a2 << 8)), 0),
             0);
      lane_mask = shifted_bits & _mm_movemask_epi8(_mm_cmpeq_epi8(reordered_vector, *(__m128i_u *)(a1 & 0xFFFFFFFFFFFFFFF0uLL)));
      for ( i = shifted_bits & _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_cvtsi32_si128((int)(0LL)), *(__m128i_u *)(a1 & 0xFFFFFFFFFFFFFFF0uLL)));
            !i;
            lane_mask = _mm_movemask_epi8(_mm_cmpeq_epi8(reordered_vector, *buffer_cursor_3)) )
      {
        _BitScanReverse((unsigned int *)&callee_output_word, lane_mask);
        packed_vector = (__m128i *)((char *)buffer_cursor_3 + callee_output_word);
        if ( lane_mask )
          unused_written_slot = packed_vector;
        i = _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_cvtsi32_si128((int)(0LL)), *++buffer_cursor_3));
      }
      masked_bits = ((i & -i) - 1) & lane_mask;
      _BitScanReverse((unsigned int *)&lookup_index, masked_bits);
      state_address = &SR_VEC_PTR_LANES(128, buffer_cursor_3, i8)[lookup_index];
      if ( masked_bits )
        return (__m128i *)state_address;
    }
    return unused_written_slot;
  }
  else
  {
    buffer_cursor_2 = (     __m128i *)(a1 & 0xFFFFFFFFFFFFFFF0uLL);
    for ( LODWORD(packed_word_bits) = (-1 << (a1 & 0xF))
                      & _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((     __m128i *)(a1 & 0xFFFFFFFFFFFFFFF0uLL)), _mm_cvtsi32_si128((int)(0LL))));
          !(_DWORD)packed_word_bits;
          LODWORD(packed_word_bits) = _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128(buffer_cursor_2), _mm_cvtsi32_si128((int)(0LL)))) )
    {
      ++buffer_cursor_2;
    }
    _BitScanForward((unsigned int *)&packed_word_bits, packed_word_bits);
    return (__m128i *)((char *)buffer_cursor_2 + packed_word_bits);
  }
}

//----- (000000014026CE7C) ----------------------------------------------------
__int8 *           sub_14026CE7C(__int64 a1, unsigned __int8 a2)
{
  __m128i *buffer_cursor;
  unsigned int shifted_bits;
  __int64 selection_flag;
  __m128i reordered_vector;
  __int64 packed_word_bits;
  __int8 *state_address;

  buffer_cursor = (__m128i *)(a1 & 0xFFFFFFFFFFFFFFF0uLL);
  shifted_bits = a2 | (a2 << 8);
  selection_flag = 0;
  reordered_vector = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(shifted_bits), 0), 0);
  for ( LODWORD(packed_word_bits) = (-1 << (a1 & 0xF))
                    & _mm_movemask_epi8(
                        _mm_or_si128(
                          _mm_cmpeq_epi8(reordered_vector, *(__m128i_u *)(a1 & 0xFFFFFFFFFFFFFFF0uLL)),
                          _mm_cmpeq_epi8(_mm_cvtsi32_si128((int)(0LL)), *(__m128i_u *)(a1 & 0xFFFFFFFFFFFFFFF0uLL))));
        !(_DWORD)packed_word_bits;
        LODWORD(packed_word_bits) = _mm_movemask_epi8(_mm_or_si128(_mm_cmpeq_epi8(reordered_vector, *buffer_cursor), _mm_cmpeq_epi8(_mm_cvtsi32_si128((int)(0LL)), *buffer_cursor))) )
  {
    ++buffer_cursor;
  }
  _BitScanForward((unsigned int *)&packed_word_bits, packed_word_bits);
  state_address = &SR_VEC_PTR_LANES(128, buffer_cursor, i8)[packed_word_bits];
  if ( *state_address == (_BYTE)shifted_bits )
    return state_address;
  return (__int8 *)selection_flag;
}

//----- (000000014026CEFC) ----------------------------------------------------
     __m128i *           sub_14026CEFC(     __m128i *a1, unsigned __int16 a2)
{
  __int64 selection_flag;
  __m128i reordered_vector;
  __m128i loaded_vector;
  unsigned int lane_mask;
  __int64 selection_code;
  __int64 callee_output_word;
  _WORD *record_pointer;

  selection_flag = 0;
  reordered_vector = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(a2), 0), 0);
  while ( ((unsigned __int16)a1 & 0xFFFu) > 0xFF0uLL )
  {
    if ( SR_VEC_PTR_LANES(128, a1, i16)[0] == a2 )
      return a1;
    if ( !SR_VEC_PTR_LANES(128, a1, i16)[0] )
      return nullptr;
    selection_code = 2;
LABEL_8:
    a1 = (     __m128i *)((char *)a1 + selection_code);
  }
  loaded_vector = _mm_loadu_si128(a1);
  lane_mask = _mm_movemask_epi8(_mm_or_si128(_mm_cmpeq_epi16(_mm_cvtsi32_si128((int)(0LL)), loaded_vector), _mm_cmpeq_epi16(loaded_vector, reordered_vector)));
  if ( !lane_mask )
  {
    selection_code = 16;
    goto LABEL_8;
  }
  _BitScanForward((unsigned int *)&callee_output_word, lane_mask);
  record_pointer = (__int16 *)((char *)SR_VEC_PTR_LANES(128, a1, i16) + callee_output_word);
  if ( *record_pointer == a2 )
    return (     __m128i *)record_pointer;
  return (     __m128i *)selection_flag;
}

//----- (000000014026CFC0) ----------------------------------------------------
_BOOL8            IsNonwritableInCurrentImage_filt_0(_DWORD **a1)
{
  return **a1 == -1073741819;
}

//----- (000000014026CFD8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
int            unknown_libname_947(unsigned int **ExceptionPtr)
{
  return sub_14024502C(**ExceptionPtr, (struct sr_anon_67 *)ExceptionPtr);
}

//----- (000000014026CFF6) ----------------------------------------------------
__int64            sub_14026CFF6(__int64 a1, __int64 a2)
{
  __int64 loaded_word;

  *(_QWORD *)(a2 + 56) = a1;
  *(_QWORD *)(a2 + 48) = a1;
  if ( *(_BYTE *)(a2 + 88) )
  {
    *(_QWORD *)(a2 + 40) = **(_QWORD **)(a2 + 48);
    if ( **(_DWORD **)(a2 + 40) == -529697949
      && *(_DWORD *)(*(_QWORD *)(a2 + 40) + 24LL) == 4
      && (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 32LL) == 429065504
       || *(_DWORD *)(*(_QWORD *)(a2 + 40) + 32LL) == 429065505
       || *(_DWORD *)(*(_QWORD *)(a2 + 40) + 32LL) == 429065506) )
    {
      *(_QWORD *)(crt_getptd() + 32) = *(_QWORD *)(a2 + 40);
      loaded_word = *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8LL);
      *(_QWORD *)(crt_getptd() + 40) = loaded_word;
      terminate_sr();
    }
  }
  *(_DWORD *)(a2 + 32) = 0;
  return *(unsigned int *)(a2 + 32);
}

//----- (000000014026D098) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_948()
{
  return sub_1401FDA5C(0);
}

//----- (000000014026D0AE) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_14026D0AE(__int64 a1, __int64 a2)
{
  __int64 loaded_word;

  *(_QWORD *)(a2 + 80) = a1;
  *(_QWORD *)(a2 + 72) = a1;
  *(_QWORD *)(crt_getptd() + 112) = *(_QWORD *)(a2 + 128);
  loaded_word = *(_QWORD *)(**(_QWORD **)(a2 + 72) + 56LL);
  *(_QWORD *)(crt_getptd() + 104) = loaded_word;
  sub_140209250(
    **(struct EHExceptionRecord ***)(a2 + 72),
    *(unsigned __int64 **)(a2 + 136),
    *(struct CMFCToolBarImages **)(a2 + 144),
    *(_QWORD *)(a2 + 152),
    *(struct _s_FuncInfo **)(a2 + 160),
    0,
    0,
    1u);
  *(_QWORD *)(crt_getptd() + 112) = 0;
  *(_DWORD *)(a2 + 64) = 1;
  return 1;
}

//----- (000000014026D13F) ----------------------------------------------------
__int64            sub_14026D13F(__int64 a1, __int64 a2)
{
  __int64 loaded_word;

  *(_QWORD *)(a2 + 80) = a1;
  *(_QWORD *)(a2 + 72) = a1;
  *(_QWORD *)(crt_getptd() + 112) = *(_QWORD *)(a2 + 128);
  loaded_word = *(_QWORD *)(**(_QWORD **)(a2 + 72) + 56LL);
  *(_QWORD *)(crt_getptd() + 104) = loaded_word;
  *(_DWORD *)(crt_getptd() + 120) = *(_DWORD *)(a2 + 184);
  sub_140209488(
    **(struct EHExceptionRecord ***)(a2 + 72),
    *(unsigned __int64 **)(a2 + 136),
    *(struct CMFCToolBarImages **)(a2 + 144),
    *(_QWORD *)(a2 + 152),
    *(struct FH4__FuncInfo4 **)(a2 + 160),
    0,
    0,
    1u);
  *(_QWORD *)(crt_getptd() + 112) = 0;
  *(_DWORD *)(a2 + 64) = 1;
  return 1;
}

//----- (000000014026D1DE) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_14026D1DE(struct _EXCEPTION_POINTERS *a1, __int64 a2)
{
  *(_QWORD *)(a2 + 88) = (uint64)(uintptr_t)(a1);
  return sub_14020A20C(a1, *(struct EHExceptionRecord **)(a2 + 184), (int *)(a2 + 32));
}

//----- (000000014026D203) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_14026D203(__int64 a1, __int64 a2)
{
  __int64 loaded_word;
  __int64 result;

  sub_140207578(*(_QWORD *)(a2 + 56));
  if ( !*(_DWORD *)(a2 + 32) )
  {
    loaded_word = *(_QWORD *)(a2 + 184);
    if ( *(_DWORD *)loaded_word == -529697949
      && *(_DWORD *)(loaded_word + 24) == 4
      && (unsigned int)(*(_DWORD *)(loaded_word + 32) - 429065504) <= 2
      && (unsigned int)sub_1401FD260(*(_QWORD *)(loaded_word + 40)) )
    {
      sub_1401FD18C(loaded_word);
    }
  }
  *(_QWORD *)(crt_getptd() + 32) = *(_QWORD *)(a2 + 192);
  result = crt_getptd();
  *(_QWORD *)(result + 40) = *(_QWORD *)(a2 + 64);
  return result;
}

//----- (000000014026D27B) ----------------------------------------------------
__int64            sub_14026D27B(struct _EXCEPTION_POINTERS *a1, __int64 a2)
{
  *(_QWORD *)(a2 + 128) = (uint64)(uintptr_t)(a1);
  return sub_14020A294(a1, *(struct EHExceptionRecord **)(a2 + 248), *(_DWORD *)(a2 + 232), (int *)(a2 + 32));
}

//----- (000000014026D2AA) ----------------------------------------------------
__int64            sub_14026D2AA(__int64 a1, __int64 a2)
{
  __int64 loaded_word;
  __int64 result;

  sub_140207578(*(_QWORD *)(a2 + 72));
  if ( !*(_DWORD *)(a2 + 32) )
  {
    loaded_word = *(_QWORD *)(a2 + 248);
    if ( *(_DWORD *)loaded_word == -529697949
      && *(_DWORD *)(loaded_word + 24) == 4
      && (unsigned int)(*(_DWORD *)(loaded_word + 32) - 429065504) <= 2
      && (unsigned int)sub_1401FD260(*(_QWORD *)(loaded_word + 40)) )
    {
      sub_1401FD18C(loaded_word);
    }
  }
  *(_QWORD *)(crt_getptd() + 32) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(crt_getptd() + 40) = *(_QWORD *)(a2 + 56);
  result = crt_getptd();
  *(_DWORD *)(result + 120) = *(_DWORD *)(a2 + 224);
  return result;
}

//----- (000000014026D32D) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_14026D32D(__int64 a1)
{
  return sub_1401FD2BC(a1);
}

//----- (000000014026D343) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64 sub_14026D343()
{
  __int64 result;

  result = crt_getptd();
  if ( *(int *)(result + 48) > 0 )
  {
    result = crt_getptd();
    --*(_DWORD *)(result + 48);
  }
  return result;
}

//----- (000000014026D366) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_14026D366(__int64 a1)
{
  return sub_1401FD2BC(a1);
}

//----- (000000014026D37C) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64 sub_14026D37C()
{
  __int64 result;

  result = crt_getptd();
  if ( *(int *)(result + 48) > 0 )
  {
    result = crt_getptd();
    --*(_DWORD *)(result + 48);
  }
  return result;
}

//----- (000000014026D39F) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_949(__int64 a1, __int64 a2)
{
  if ( !*(_QWORD *)(a2 + 32) )
    sub_14025065C(*(_QWORD *)(a2 + 64));
  return crt_unlock_file(*(_QWORD *)(a2 + 64));
}

//----- (000000014026D3CA) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_950(__int64 a1, __int64 a2)
{
  if ( !*(_QWORD *)(a2 + 32) )
    sub_14025065C(*(_QWORD *)(a2 + 64));
  return crt_unlock_file(*(_QWORD *)(a2 + 64));
}

//----- (000000014026D3F5) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_951(__int64 a1, __int64 a2)
{
  return crt_unlock_file(*(_QWORD *)(a2 + 48));
}

//----- (000000014026D40D) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_952(__int64 a1, __int64 a2)
{
  return crt_unlock_file(*(_QWORD *)(a2 + 64));
}

//----- (000000014026D427) ----------------------------------------------------
__int64            sub_14026D427(__int64 a1, __int64 a2)
{
  return crt_unlock_file(*(_QWORD *)(a2 + 72));
}

//----- (000000014026D441) ----------------------------------------------------
__int64            fread_s_fin_0(__int64 a1, __int64 a2)
{
  return crt_unlock_file(*(_QWORD *)(a2 + 96));
}

//----- (000000014026D459) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_953(__int64 a1, __int64 a2)
{
  return crt_unlock_file(*(_QWORD *)(a2 + 48));
}

//----- (000000014026D471) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_954(__int64 a1, __int64 a2)
{
  return crt_unlock_file(*(_QWORD *)(a2 + 48));
}

//----- (000000014026D489) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_955_0(__int64 a1, __int64 a2)
{
  return crt_unlock_file(*(_QWORD *)(a2 + 48));
}

//----- (000000014026D4A1) ----------------------------------------------------
__int64            sub_14026D4A1(__int64 a1, __int64 a2)
{
  return crt_unlock_file(**(_QWORD **)(a2 + 72));
}

//----- (000000014026D4BC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_956(__int64 a1, __int64 a2)
{
  return crt_unlock_file(*(_QWORD *)(a2 + 56));
}

//----- (000000014026D4D4) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_void_operator__lambda_842d9ff0dc9ef11c61343bbaebe7f885___lambda_c5860995281e5c4ce005b3de8f5874ee___lambda_d90129c13df834fdcbf8d2b88dafcf2d______1___fin$0(
        __int64 a1,
        __int64 a2)
{
  return crt_unlock_file(**(_QWORD **)(a2 + 72));
}

//----- (000000014026D4EF) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_void_operator__lambda_842d9ff0dc9ef11c61343bbaebe7f885___lambda_c5860995281e5c4ce005b3de8f5874ee___lambda_d90129c13df834fdcbf8d2b88dafcf2d______1___fin$0_dup2(
        __int64 a1,
        __int64 a2)
{
  return crt_unlock_file(**(_QWORD **)(a2 + 72));
}

//----- (000000014026D50A) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_void_operator__lambda_842d9ff0dc9ef11c61343bbaebe7f885___lambda_c5860995281e5c4ce005b3de8f5874ee___lambda_d90129c13df834fdcbf8d2b88dafcf2d______1___fin$0_dup3(
        __int64 a1,
        __int64 a2)
{
  return crt_unlock_file(**(_QWORD **)(a2 + 72));
}

//----- (000000014026D525) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_void_operator__lambda_842d9ff0dc9ef11c61343bbaebe7f885___lambda_c5860995281e5c4ce005b3de8f5874ee___lambda_d90129c13df834fdcbf8d2b88dafcf2d______1___fin$0_dup4(
        __int64 a1,
        __int64 a2)
{
  return crt_unlock_file(**(_QWORD **)(a2 + 72));
}

//----- (000000014026D540) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_void_operator__lambda_842d9ff0dc9ef11c61343bbaebe7f885___lambda_c5860995281e5c4ce005b3de8f5874ee___lambda_d90129c13df834fdcbf8d2b88dafcf2d______1___fin$0_dup5(
        __int64 a1,
        __int64 a2)
{
  return crt_unlock_file(**(_QWORD **)(a2 + 72));
}

//----- (000000014026D55B) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_void_operator__lambda_842d9ff0dc9ef11c61343bbaebe7f885___lambda_c5860995281e5c4ce005b3de8f5874ee___lambda_d90129c13df834fdcbf8d2b88dafcf2d______1___fin$0_dup6(
        __int64 a1,
        __int64 a2)
{
  return crt_unlock_file(**(_QWORD **)(a2 + 72));
}

//----- (000000014026D576) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_void_operator__lambda_842d9ff0dc9ef11c61343bbaebe7f885___lambda_c5860995281e5c4ce005b3de8f5874ee___lambda_d90129c13df834fdcbf8d2b88dafcf2d______1___fin$0_dup7(
        __int64 a1,
        __int64 a2)
{
  return crt_unlock_file(**(_QWORD **)(a2 + 72));
}

//----- (000000014026D591) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_void_operator__lambda_842d9ff0dc9ef11c61343bbaebe7f885___lambda_c5860995281e5c4ce005b3de8f5874ee___lambda_d90129c13df834fdcbf8d2b88dafcf2d______1___fin$0_dup8(
        __int64 a1,
        __int64 a2)
{
  return crt_unlock_file(**(_QWORD **)(a2 + 72));
}

//----- (000000014026D5AC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_957()
{
  return crt_unlock(6);
}

//----- (000000014026D5C5) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_958()
{
  return crt_unlock(6);
}

//----- (000000014026D5DE) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_959()
{
  return crt_unlock(6);
}

//----- (000000014026D5F7) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
int            unknown_libname_960(unsigned int **ExceptionPtr)
{
  return sub_14024502C(**ExceptionPtr, (struct sr_anon_67 *)ExceptionPtr);
}

//----- (000000014026D615) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
int            unknown_libname_961(unsigned int **ExceptionPtr)
{
  return sub_14024502C(**ExceptionPtr, (struct sr_anon_67 *)ExceptionPtr);
}

//----- (000000014026D633) ----------------------------------------------------
__int64            sub_14026D633(__int64 a1, __int64 a2)
{
  return crt_unlock(**(_DWORD **)(a2 + 72));
}

//----- (000000014026D64D) ----------------------------------------------------
_BOOL8            __lambda_6e4b09c48022b2350581041d5f6b0c4c__operator_____1___filt$0(unsigned int **a1)
{
  return atexit_exception_filter(**a1);
}

//----- (000000014026D668) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0(
        __int64 a1,
        __int64 a2)
{
  return crt_unlock(**(_DWORD **)(a2 + 72));
}

//----- (000000014026D682) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0_dup2(
        __int64 a1,
        __int64 a2)
{
  return crt_unlock(**(_DWORD **)(a2 + 72));
}

//----- (000000014026D69C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_962(__int64 a1, __int64 a2)
{
  return sub_140261150(*(_DWORD *)(a2 + 64));
}

//----- (000000014026D6B3) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0_dup3(
        __int64 a1,
        __int64 a2)
{
  return crt_unlock(**(_DWORD **)(a2 + 72));
}

//----- (000000014026D6CD) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0_dup4(
        __int64 a1,
        __int64 a2)
{
  return crt_unlock(**(_DWORD **)(a2 + 72));
}

//----- (000000014026D6E7) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_void_operator__lambda_9431c60049192bb82166e0947f95a2e9___lambda_85fa512c59a4d94d4a89f575eefd92a6___lambda_487febba6ca58d9ce348204d67e1dba3______1___fin$0(
        __int64 a1,
        __int64 a2)
{
  return crt_unlock(**(_DWORD **)(a2 + 88));
}

//----- (000000014026D701) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_void_operator__lambda_5df02c53a8f32f81fd64e5bbb78039f1___lambda_2af78c5f5901b1372d98f9ab3177dfa6___lambda_f51fe5fd7c79a33db34fc9310f277369______1___fin$0(
        __int64 a1,
        __int64 a2)
{
  __int64 loaded_word;
  __int64 result;

  loaded_word = **(_QWORD **)(a2 + 72);
  result = *(_QWORD *)loaded_word;
  *(_DWORD *)(*(_QWORD *)loaded_word + 936LL) &= ~0x10u;
  return result;
}

//----- (000000014026D722) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0_dup5(
        __int64 a1,
        __int64 a2)
{
  return crt_unlock(**(_DWORD **)(a2 + 72));
}

//----- (000000014026D73C) ----------------------------------------------------
__int64 free_locale_fin_1()
{
  return crt_unlock(5);
}

//----- (000000014026D755) ----------------------------------------------------
__int64 free_locale_fin_0()
{
  return crt_unlock(4);
}

//----- (000000014026D76E) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
_BOOL8            unknown_libname_963(_DWORD **a1)
{
  return **a1 == -1073741819 || **a1 == -1073741795;
}

//----- (000000014026D79A) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0_dup6(
        __int64 a1,
        __int64 a2)
{
  return crt_unlock(**(_DWORD **)(a2 + 72));
}

//----- (000000014026D7B4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_964()
{
  return crt_unlock(8);
}

//----- (000000014026D7CD) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_void_operator__lambda_842d9ff0dc9ef11c61343bbaebe7f885___lambda_c5860995281e5c4ce005b3de8f5874ee___lambda_d90129c13df834fdcbf8d2b88dafcf2d______1___fin$0_dup9(
        __int64 a1,
        __int64 a2)
{
  return crt_unlock_file(**(_QWORD **)(a2 + 72));
}

//----- (000000014026D7E8) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_void_operator__lambda_886d6c58226a84441f68b9f2b8217b83___lambda_ab61a845afdef5b7c387490eaf3616ee___lambda_f7f22ab5edc0698d5f6905b0d3f44752______1___fin$0(
        __int64 a1,
        __int64 a2)
{
  return crt_unlock(**(_DWORD **)(a2 + 152));
}

//----- (000000014026D805) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_void_operator__lambda_842d9ff0dc9ef11c61343bbaebe7f885___lambda_c5860995281e5c4ce005b3de8f5874ee___lambda_d90129c13df834fdcbf8d2b88dafcf2d______1___fin$0_dup10(
        __int64 a1,
        __int64 a2)
{
  return crt_unlock_file(**(_QWORD **)(a2 + 72));
}

//----- (000000014026D820) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_965()
{
  return crt_unlock(7);
}

//----- (000000014026D839) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_966()
{
  return crt_unlock(8);
}

//----- (000000014026D852) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0_dup7(
        __int64 a1,
        __int64 a2)
{
  return sub_140261150(**(_DWORD **)(a2 + 72));
}

//----- (000000014026D86C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_967(__int64 a1, __int64 a2)
{
  return sub_140261150(*(_DWORD *)(a2 + 64));
}

//----- (000000014026D883) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_968(__int64 a1, __int64 a2)
{
  return sub_140261150(*(_DWORD *)(a2 + 80));
}

//----- (000000014026D89A) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_969(__int64 a1, __int64 a2)
{
  return sub_140261150(*(_DWORD *)(a2 + 80));
}

//----- (000000014026D8B1) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_970(__int64 a1, __int64 a2)
{
  return sub_140261150(*(_DWORD *)(a2 + 80));
}

//----- (000000014026D8C8) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0_dup8(
        __int64 a1,
        __int64 a2)
{
  return crt_unlock(**(_DWORD **)(a2 + 72));
}

//----- (000000014026D8E2) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0_dup9(
        __int64 a1,
        __int64 a2)
{
  return crt_unlock(**(_DWORD **)(a2 + 72));
}

//----- (000000014026D8FC) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0_dup10(
        __int64 a1,
        __int64 a2)
{
  return crt_unlock(**(_DWORD **)(a2 + 72));
}

//----- (000000014026D916) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0_dup11(
        __int64 a1,
        __int64 a2)
{
  return crt_unlock(**(_DWORD **)(a2 + 72));
}

//----- (000000014026D930) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_971(__int64 a1, __int64 a2)
{
  return crt_unlock_file(*(_QWORD *)(a2 + 56));
}

//----- (000000014026D948) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_972(__int64 a1, __int64 a2)
{
  return crt_unlock_file(*(_QWORD *)(a2 + 48));
}

//----- (000000014026D960) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_973(__int64 a1, __int64 a2)
{
  return crt_unlock_file(*(_QWORD *)(a2 + 56));
}

//----- (000000014026D978) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_974()
{
  return crt_unlock(11);
}

//----- (000000014026D991) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_975()
{
  return crt_unlock(11);
}

//----- (000000014026D9AA) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_976()
{
  return crt_unlock(11);
}

//----- (000000014026D9C3) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_977()
{
  return crt_unlock(11);
}

//----- (000000014026D9DC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_978()
{
  return crt_unlock(11);
}

//----- (000000014026D9F5) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_979()
{
  return crt_unlock(11);
}

//----- (000000014026DA0E) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_void_operator__lambda_842d9ff0dc9ef11c61343bbaebe7f885___lambda_c5860995281e5c4ce005b3de8f5874ee___lambda_d90129c13df834fdcbf8d2b88dafcf2d______1___fin$0_dup11(
        __int64 a1,
        __int64 a2)
{
  return crt_unlock_file(**(_QWORD **)(a2 + 72));
}

//----- (000000014026DA29) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0_dup12(
        __int64 a1,
        __int64 a2)
{
  return crt_unlock(**(_DWORD **)(a2 + 72));
}

//----- (000000014026DA43) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_980()
{
  return crt_unlock(3);
}

//----- (000000014026DA5C) ----------------------------------------------------
__int64            raise_fin_0(__int64 a1, __int64 a2)
{
  __int64 result;

  if ( *(_BYTE *)(a2 + 112) )
    return crt_unlock(3);
  return result;
}

//----- (000000014026DA7D) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_981()
{
  return crt_unlock(3);
}

//----- (000000014026DA96) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0_dup13(
        __int64 a1,
        __int64 a2)
{
  return crt_unlock(**(_DWORD **)(a2 + 72));
}

//----- (000000014026DAB0) ----------------------------------------------------
__int64 _update_thread_multibyte_data_internal____1___fin$0()
{
  return crt_unlock(5);
}

//----- (000000014026DAC9) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_982()
{
  return crt_unlock(0);
}

//----- (000000014026DADF) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_983()
{
  return crt_unlock(0);
}

//----- (000000014026DAF5) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_984()
{
  return crt_unlock(7);
}

//----- (000000014026DB0E) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_985()
{
  return crt_unlock(7);
}

//----- (000000014026DB27) ----------------------------------------------------
__int64            open_osfhandle_fin_0(__int64 a1, __int64 a2)
{
  __int64 masked_bits;
  __int64 shifted_bits;

  if ( !*(_BYTE *)(a2 + 32) )
  {
    masked_bits = 9LL * (*(_DWORD *)(a2 + 72) & 0x3F);
    shifted_bits = *(_QWORD *)&dword_140404A6C[2 * ((__int64)*(int *)(a2 + 72) >> 6) + 19065401];
    *(_BYTE *)(shifted_bits + 8 * masked_bits + 56) &= ~1u;
  }
  return sub_140261150(*(_DWORD *)(a2 + 72));
}

//----- (000000014026DB68) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_986()
{
  return crt_unlock(4);
}

//----- (000000014026DB81) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0_dup14(
        __int64 a1,
        __int64 a2)
{
  return sub_140261150(**(_DWORD **)(a2 + 72));
}

//----- (000000014026DB9B) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_987(__int64 a1, _DWORD *a2)
{
  __int64 scaled_index;
  __int64 shifted_bits;
  __int64 result;

  if ( a2[30] )
  {
    if ( a2[16] )
    {
      scaled_index = 9LL * (a2[24] & 0x3F);
      shifted_bits = *(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)a2[24] >> 6) + 19065401];
      *(_BYTE *)(shifted_bits + 8 * scaled_index + 56) &= ~1u;
    }
    return sub_140261150(a2[24]);
  }
  return result;
}

//----- (000000014026DBE2) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_988(__int64 a1, _DWORD *a2)
{
  __int64 scaled_index;
  __int64 shifted_bits;
  __int64 result;

  if ( a2[30] )
  {
    if ( a2[16] )
    {
      scaled_index = 9LL * (a2[24] & 0x3F);
      shifted_bits = *(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)a2[24] >> 6) + 19065401];
      *(_BYTE *)(shifted_bits + 8 * scaled_index + 56) &= ~1u;
    }
    return sub_140261150(a2[24]);
  }
  return result;
}

//----- (000000014026DC29) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_989(__int64 a1, __int64 a2)
{
  __int64 masked_bits;
  __int64 shifted_bits;
  __int64 result;

  if ( *(_DWORD *)(a2 + 64) )
  {
    if ( *(_DWORD *)(a2 + 68) )
    {
      masked_bits = 9LL * (**(_DWORD **)(a2 + 128) & 0x3F);
      shifted_bits = *(_QWORD *)&dword_140404A6C[2 * ((__int64)**(int **)(a2 + 128) >> 6) + 19065401];
      *(_BYTE *)(shifted_bits + 8 * masked_bits + 56) &= ~1u;
    }
    return sub_140261150(**(_DWORD **)(a2 + 128));
  }
  return result;
}

//----- (000000014026DC7C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_990(__int64 a1, __int64 a2)
{
  __int64 masked_bits;
  __int64 shifted_bits;
  __int64 result;

  if ( *(_DWORD *)(a2 + 64) )
  {
    if ( *(_DWORD *)(a2 + 68) )
    {
      masked_bits = 9LL * (**(_DWORD **)(a2 + 128) & 0x3F);
      shifted_bits = *(_QWORD *)&dword_140404A6C[2 * ((__int64)**(int **)(a2 + 128) >> 6) + 19065401];
      *(_BYTE *)(shifted_bits + 8 * masked_bits + 56) &= ~1u;
    }
    return sub_140261150(**(_DWORD **)(a2 + 128));
  }
  return result;
}

//----- (000000014026DCCF) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0_dup15(
        __int64 a1,
        __int64 a2)
{
  return crt_unlock(**(_DWORD **)(a2 + 72));
}

//----- (000000014026DCE9) ----------------------------------------------------
__int64            ___crt_seh_guarded_call_char_operator__lambda_9bd929c17696992ce54f1d748594fc62___lambda_082c17da81b0962e08c0587ee0fac50c___lambda_9c08ac857f4975304d44e9f601d9b878______1___fin$0_dup16(
        __int64 a1,
        __int64 a2)
{
  return sub_140261150(**(_DWORD **)(a2 + 72));
}

//----- (000000014026DD03) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
_BOOL8            unknown_libname_991(_DWORD **a1)
{
  return **a1 == -1073741819 || **a1 == -1073741795;
}

//----- (000000014026DD30) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
_BOOL8            _try_walk____1___filt$0(_DWORD **a1)
{
  return **a1 == -1073741819;
}

//----- (000000014026DD50) ----------------------------------------------------
void            sub_14026DD50()
{
  qword_140301EF8 = (__int64)&off_140279B18;
  if ( (byte_140301F00 & 1) != 0 )
    SteamAPI_UnregisterCallback(&qword_140301EF8);
  qword_140301ED8 = (__int64)&off_140279AC8;
  if ( (byte_140301EE0 & 1) != 0 )
    SteamAPI_UnregisterCallback(&qword_140301ED8);
  off_140301EB8 = &off_140279A78;
  if ( (byte_140301EC0 & 1) != 0 )
    SteamAPI_UnregisterCallback(&off_140301EB8);
  off_140301E90 = &off_140279A58;
  if ( qword_140301EA0 )
  {
    SteamAPI_UnregisterCallResult(&off_140301E90);
    qword_140301EA0 = 0;
  }
}

// nfuncs=4269 queued=4269 decompiled=4269 lumina nreq=0 worse=0 better=0
// ALL OK, 4269 function(s) have been successfully decompiled

/* Adapt verified isolated leaf behavior to the export's address names.
   This file is appended after all exported globals have been declared. */
void CHtmlStream__Abort(CHtmlStream *self, uintptr_t payload, uintptr_t failure, uintptr_t call_id) {
    uintptr_t table, target;
    memcpy(&table, self, 8);
    memcpy(&target, (void *)(table + 8), 8);
    ((void (*)(CHtmlStream *, uintptr_t, uintptr_t, uintptr_t))target)(self, payload, failure, call_id);
}

uint32_t sub_140205C34(const void *object) {
    return sr_client_u32_at_16(object);
}

char initialize_global_variables(void) {
    return (char)sr_client_initialize_global_variables(
        (unsigned int *)&g_144CBF778, &off_140302420);
}

uint32_t sub_140247CFC(void) {
    return sr_client_zero_callback();
}

size_t sub_1400012A0(FILE *stream, void *destination, int count) {
    return fread_sr(destination, 1, (size_t)count, stream);
}

uint32_t sub_1402370D4(void) {
    return sr_client_initialize_timezone(&g_144CBE6C0,
        &g_144CBE6C4, &g_144CBE6C8,
        (uintptr_t *)(unsigned int *)&g_144CBE6D0, (uintptr_t)sr_mem_140302270);
}

uint64_t sr_client_static_tls(void) {
    static _Thread_local _Alignas(8) unsigned char storage[24];
    return (uint64_t)(uintptr_t)storage;
}
