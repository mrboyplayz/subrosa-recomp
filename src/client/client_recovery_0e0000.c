#include "shared_client.h"

//----- (00000001400E3960) ----------------------------------------------------
__int64            sub_1400E3960(_BYTE *a1, int a2, int a3)
{
  __int64 record_word_offset;
  __int64 call_result;
  __int64 table_value;
  char *text_cursor;
  unsigned int *state_address;
  char input_byte;
  char *text_cursor_2;
  unsigned int *state_address_2;
  char input_byte_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E3960[352];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400E3960 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(_BYTE (*)[36])(void *)(sr_frame_1400E3960 + 32)) /* [rsp+20h] */
#define scratch_buffer_2 (*(_BYTE (*)[268])(void *)(sr_frame_1400E3960 + 68)) /* [rsp+44h] */
#define unused_frame_slot_336 (*(__int64 (*))(void *)(sr_frame_1400E3960 + 336)) /* [rsp+150h] */

  record_word_offset = 16385LL * a2;
  call_result = sub_14023A198(a1, (__int64)scratch_buffer);
  dword_140404A6C[record_word_offset + 293119325] = 0;
  if ( (_DWORD)call_result != -1 )
  {
    while ( 1 )
    {
      table_value = (int)dword_140404A6C[record_word_offset + 293119325];
      if ( (int)table_value >= 1024 )
        goto LABEL_14;
      if ( a3 )
        break;
      if ( (scratch_buffer[0] & 0x10) == 0 )
      {
        text_cursor = scratch_buffer_2;
        state_address = &dword_140404A6C[16 * table_value + 293119326 + record_word_offset];
        do
        {
          input_byte = *text_cursor++;
          *(_BYTE *)state_address = input_byte;
          state_address = (unsigned int *)((char *)state_address + 1);
        }
        while ( input_byte );
LABEL_12:
        ++dword_140404A6C[record_word_offset + 293119325];
      }
LABEL_13:
      if ( (unsigned int)sub_14023A5C4(call_result, (__int64)scratch_buffer) == -1 )
        goto LABEL_14;
    }
    if ( (scratch_buffer[0] & 0x10) == 0 || scratch_buffer_2[0] == 46 )
      goto LABEL_13;
    text_cursor_2 = scratch_buffer_2;
    state_address_2 = &dword_140404A6C[16 * table_value + 293119326 + record_word_offset];
    do
    {
      input_byte_2 = *text_cursor_2++;
      *(_BYTE *)state_address_2 = input_byte_2;
      state_address_2 = (unsigned int *)((char *)state_address_2 + 1);
    }
    while ( input_byte_2 );
    goto LABEL_12;
  }
LABEL_14:
  LOBYTE(dword_140404A6C[16 * (__int64)(int)dword_140404A6C[record_word_offset + 293119325] + 293119326 + record_word_offset]) = 0;
  sub_140239CCC(call_result);
  sub_14023AE00(
    (unsigned __int64)&dword_140404A6C[record_word_offset + 293119326],
    (int)dword_140404A6C[record_word_offset + 293119325],
    0x40u,
    (int (           *)(unsigned __int64, _BYTE *))sr_text_compare_bytes);
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef scratch_buffer
#undef scratch_buffer_2
#undef unused_frame_slot_336

//----- (00000001400E3B90) ----------------------------------------------------
__int64 (           *           sub_1400E3B90(__int64 (           *a1)(_QWORD)))(_QWORD, _QWORD)
{
  __int64 (           *result)(_QWORD, _QWORD);

  result = (__int64 (           *)(_QWORD, _QWORD))a1;
  if ( unk_14040488C )
  {
    result = (__int64 (           *)(_QWORD, _QWORD))a1("glClipControl");
    glClipControl = result;
  }
  return result;
}

//----- (00000001400E54D0) ----------------------------------------------------
__int64            sub_1400E54D0(_QWORD *a1, int *a2, _DWORD *a3, int *a4, unsigned int a5)
{
  __int64 packed_word_bits;
  __int64 loaded_word;
  _QWORD *input_cursor;
  int call_result;
  int *record_pointer;
  __int64 remaining_count;
  void **record_byte_offset;
  void *allocation_buffer;
  void *allocation_buffer_2;
  int table_value;
  int selection_code;
  int selection_flag;
  __int64 cached_table_value;
  __int64 iteration_count;
  unsigned int *record_byte_offset_2;
  int *record_byte_offset_3;
  __int64 allocated_buffer;
  __int64 loaded_word_2;
  unsigned int integer_quotient;
  int loaded_word_3;
  int saved_loaded_word;
  __int64 loaded_word_4;
  unsigned int loaded_word_5;
  void *table_value_2;
  int table_value_3;
  int loaded_word_6;
  int scaled_index;
  __int64 allocated_buffer_2;
  int *record_pointer_2;
  __int64 saved_allocated_buffer;
  unsigned int integer_sum;
  __int64 masked_bits;
  __int64 cached_selection_flag;
  __int64 masked_bits_2;
  __int64 cached_selection_flag_2;
  __int64 scaled_index_2;
  __int64 iteration_count_2;
  _BYTE *buffer_cursor;
  _QWORD *record_byte_offset_4;
  __int64 cached_table_value_2;
  int *buffer_cursor_2;
  int scaled_index_3;
  int loaded_word_7;
  __int64 loaded_word_8;
  __int64 loaded_word_9;
  __int64 remaining_count_2;
  void **record_byte_offset_5;
  void *allocation_buffer_3;
  void *allocation_buffer_4;
  int table_value_4;
  __int64 loaded_word_10;
  int table_value_5;
  __int64 integer_sum_2;
  char loaded_word_11;
  int loaded_word_12;
  __int64 integer_sum_3;
  int loaded_word_13;
  int loaded_word_14;
  int loaded_word_15;
  void (           *callback_function)(_BYTE *, __int64, __int64, __int64, int, int);
  __int64 integer_sum_4;
  int loaded_word_16;
  __int64 integer_sum_5;
  char loaded_word_17;
  int loaded_word_18;
  __int64 integer_sum_6;
  __int16 loaded_word_19;
  __int16 loaded_word_20;
  __int16 loaded_word_21;
  __int16 loaded_word_22;
  __int16 loaded_word_23;
  __int16 loaded_word_24;
  int loaded_word_25;
  __int64 integer_sum_7;
  int loaded_word_26;
  int loaded_word_27;
  int loaded_word_28;
  int loaded_word_29;
  __int64 integer_sum_8;
  int loaded_word_30;
  int loaded_word_31;
  int loaded_word_32;
  __int64 integer_sum_9;
  char loaded_word_33;
  __int64 remaining_count_3;
  void **record_byte_offset_6;
  void *allocation_buffer_5;
  void *allocation_buffer_6;
  __int64 remaining_count_4;
  void **record_byte_offset_7;
  void *allocation_buffer_7;
  void *allocation_buffer_8;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E54D0[352];
#define unused_frame_slot_8 (*(__int64 (*))(void *)(sr_frame_1400E54D0 + 8)) /* [rsp+0h] */
#define saved_loaded_word_2 (*(int (*))(void *)(sr_frame_1400E54D0 + 40)) /* [rsp+20h] */
#define cached_packed_word_bits (*(int (*))(void *)(sr_frame_1400E54D0 + 48)) /* [rsp+28h] */
#define saved_packed_word_bits (*(int (*))(void *)(sr_frame_1400E54D0 + 56)) /* [rsp+30h] */
#define cached_integer_sum (*(unsigned int (*))(void *)(sr_frame_1400E54D0 + 60)) /* [rsp+34h] */
#define selection_flag_2 (*(__int64 (*))(void *)(sr_frame_1400E54D0 + 64)) /* [rsp+38h] */
#define cached_table_value_3 (*(__int64 (*))(void *)(sr_frame_1400E54D0 + 72)) /* [rsp+40h] */
#define input_cursor_2 (*(_QWORD * (*))(void *)(sr_frame_1400E54D0 + 80)) /* [rsp+48h] */
#define unused_written_slot (*(int * (*))(void *)(sr_frame_1400E54D0 + 88)) /* [rsp+50h] */
#define unused_written_slot_2 (*(_DWORD * (*))(void *)(sr_frame_1400E54D0 + 96)) /* [rsp+58h] */
#define input_cursor_3 (*(int * (*))(void *)(sr_frame_1400E54D0 + 104)) /* [rsp+60h] */
#define selection_flag_3 (*(__int128 (*))(void *)(sr_frame_1400E54D0 + 112)) /* [rsp+68h] */
#define selection_flag_4 (*(__int128 (*))(void *)(sr_frame_1400E54D0 + 128)) /* [rsp+78h] */
#define callee_output_word (*(char (*))(void *)(sr_frame_1400E54D0 + 176)) /* [rsp+A8h] */
#define callee_output_word_2 (*(char (*))(void *)(sr_frame_1400E54D0 + 188)) /* [rsp+B4h] */
#define unused_frame_slot_344 (*(__int64 (*))(void *)(sr_frame_1400E54D0 + 344)) /* [rsp+150h] */

  LODWORD(packed_word_bits) = a5;
  loaded_word = *a1;
  input_cursor = a1;
  input_cursor_3 = a4;
  unused_written_slot_2 = a3;
  unused_written_slot = a2;
  *(_DWORD *)(loaded_word + 8) = 0;
  input_cursor_2 = a1;
  saved_packed_word_bits = a5;
  if ( a5 > 4 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad req_comp");
    return 0; /* 0x1400E5EA4: xor eax, eax */
  }
  call_result = sub_14015FAD0(a1);
  record_pointer = (int *)*input_cursor;
  if ( !call_result )
  {
    remaining_count = record_pointer[2];
    if ( remaining_count > 0 )
    {
      record_byte_offset = (void **)(input_cursor + 2267);
      do
      {
        if ( *record_byte_offset )
        {
          free(*record_byte_offset);
          *record_byte_offset = nullptr;
          *(record_byte_offset - 1) = nullptr;
        }
        allocation_buffer = record_byte_offset[1];
        if ( allocation_buffer )
        {
          free(allocation_buffer);
          record_byte_offset[1] = nullptr;
          record_byte_offset[3] = nullptr;
        }
        allocation_buffer_2 = record_byte_offset[2];
        if ( allocation_buffer_2 )
        {
          free(allocation_buffer_2);
          record_byte_offset[2] = nullptr;
        }
        record_byte_offset += 12;
        --remaining_count;
      }
      while ( remaining_count );
    }
    return 0; /* 0x1400E5596: xor eax, eax */
  }
  table_value = record_pointer[2];
  selection_code = 1;
  if ( !a5 )
  {
    LODWORD(packed_word_bits) = 1;
    if ( table_value >= 3 )
      LODWORD(packed_word_bits) = 3;
    saved_packed_word_bits = packed_word_bits;
  }
  if ( table_value == 3 && (*((_DWORD *)input_cursor + 4628) == 3 || !*((_DWORD *)input_cursor + 4627) && !*((_DWORD *)input_cursor + 4626)) )
  {
    selection_flag = 1;
    selection_flag_2 = 1;
LABEL_23:
    if ( (int)packed_word_bits < 3 && !selection_flag )
      table_value = 1;
    goto LABEL_26;
  }
  selection_flag_2 = 0;
  selection_flag = 0;
  if ( table_value == 3 )
    goto LABEL_23;
LABEL_26:
  cached_table_value = table_value;
  cached_table_value_3 = table_value;
  selection_flag_3 = 0;
  selection_flag_4 = 0;
  if ( table_value <= 0 )
    goto LABEL_42;
  iteration_count = 0;
  record_byte_offset_2 = (unsigned int *)&callee_output_word;
  record_byte_offset_3 = (int *)input_cursor + 4521;
  do
  {
    allocated_buffer = sr_path_malloc((unsigned int)(*(_DWORD *)*input_cursor + 3));
    *(_QWORD *)(record_byte_offset_3 + 17) = allocated_buffer;
    if ( !allocated_buffer )
    {
      remaining_count_2 = *(int *)(*input_cursor + 8LL);
      if ( remaining_count_2 > 0 )
      {
        record_byte_offset_5 = (void **)(input_cursor + 2267);
        do
        {
          if ( *record_byte_offset_5 )
          {
            free(*record_byte_offset_5);
            *record_byte_offset_5 = nullptr;
            *(record_byte_offset_5 - 1) = nullptr;
          }
          allocation_buffer_3 = record_byte_offset_5[1];
          if ( allocation_buffer_3 )
          {
            free(allocation_buffer_3);
            record_byte_offset_5[1] = nullptr;
            record_byte_offset_5[3] = nullptr;
          }
          allocation_buffer_4 = record_byte_offset_5[2];
          if ( allocation_buffer_4 )
          {
            free(allocation_buffer_4);
            record_byte_offset_5[2] = nullptr;
          }
          record_byte_offset_5 += 12;
          --remaining_count_2;
        }
        while ( remaining_count_2 );
      }
      goto LABEL_144;
    }
    loaded_word_2 = *((int *)input_cursor + 4514);
    record_byte_offset_2[4] = 0;
    integer_quotient = loaded_word_2 / *record_byte_offset_3;
    *record_byte_offset_2 = integer_quotient;
    loaded_word_3 = *((_DWORD *)input_cursor + 4515) / record_byte_offset_3[1];
    record_byte_offset_2[1] = loaded_word_3;
    saved_loaded_word = loaded_word_3;
    record_byte_offset_2[3] = loaded_word_3 >> 1;
    loaded_word_4 = *(_QWORD *)(record_byte_offset_3 + 11);
    loaded_word_5 = integer_quotient + *(_DWORD *)*input_cursor - 1;
    *((_QWORD *)record_byte_offset_2 - 1) = loaded_word_4;
    *((_QWORD *)record_byte_offset_2 - 2) = loaded_word_4;
    record_byte_offset_2[2] = loaded_word_5 / integer_quotient;
    if ( integer_quotient == 1 )
    {
      if ( saved_loaded_word == 1 )
      {
        table_value_2 = sub_140127900;
        goto LABEL_40;
      }
      if ( saved_loaded_word == 2 )
      {
        table_value_2 = sub_14016DD80;
        goto LABEL_40;
      }
    }
    else if ( integer_quotient == 2 )
    {
      if ( saved_loaded_word == 1 )
      {
        table_value_2 = sub_14016D9D0;
        goto LABEL_40;
      }
      if ( saved_loaded_word == 2 )
      {
        table_value_2 = (void *)input_cursor[2320];
        goto LABEL_40;
      }
    }
    table_value_2 = sub_14016D990;
LABEL_40:
    *((_QWORD *)record_byte_offset_2 - 3) = (uint64)(uintptr_t)(table_value_2);
    ++iteration_count;
    record_byte_offset_2 += 12;
    record_byte_offset_3 += 24;
  }
  while ( iteration_count < cached_table_value );
  record_pointer = (int *)*input_cursor;
LABEL_42:
  table_value_3 = record_pointer[1];
  loaded_word_6 = *record_pointer;
  if ( (int)packed_word_bits < 0
    || loaded_word_6 < 0
    || loaded_word_6 && (int)packed_word_bits > 0x7FFFFFFF / loaded_word_6
    || (int)packed_word_bits * loaded_word_6 < 0
    || table_value_3 < 0
    || table_value_3 && (int)packed_word_bits * loaded_word_6 > 0x7FFFFFFF / table_value_3
    || (scaled_index = packed_word_bits * table_value_3 * loaded_word_6, scaled_index == 0x7FFFFFFF) )
  {
    record_pointer_2 = (int *)*input_cursor;
LABEL_135:
    remaining_count_4 = record_pointer_2[2];
    if ( remaining_count_4 > 0 )
    {
      record_byte_offset_7 = (void **)(input_cursor + 2267);
      do
      {
        if ( *record_byte_offset_7 )
        {
          free(*record_byte_offset_7);
          *record_byte_offset_7 = nullptr;
          *(record_byte_offset_7 - 1) = nullptr;
        }
        allocation_buffer_7 = record_byte_offset_7[1];
        if ( allocation_buffer_7 )
        {
          free(allocation_buffer_7);
          record_byte_offset_7[1] = nullptr;
          record_byte_offset_7[3] = nullptr;
        }
        allocation_buffer_8 = record_byte_offset_7[2];
        if ( allocation_buffer_8 )
        {
          free(allocation_buffer_8);
          record_byte_offset_7[2] = nullptr;
        }
        record_byte_offset_7 += 12;
        --remaining_count_4;
      }
      while ( remaining_count_4 );
    }
LABEL_144:
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
    return 0; /* 0x1400E5E7A: xor eax, eax */
  }
  allocated_buffer_2 = sr_path_malloc(scaled_index + 1);
  record_pointer_2 = (int *)*input_cursor;
  saved_allocated_buffer = allocated_buffer_2;
  if ( !allocated_buffer_2 )
    goto LABEL_135;
  integer_sum = 0;
  cached_integer_sum = 0;
  if ( !record_pointer_2[1] )
    goto LABEL_119;
  masked_bits = *((_QWORD *)&selection_flag_4 + 1);
  cached_selection_flag = selection_flag_4;
  masked_bits_2 = *((_QWORD *)&selection_flag_3 + 1);
  cached_selection_flag_2 = selection_flag_3;
  while ( 2 )
  {
    scaled_index_2 = (unsigned int)packed_word_bits * integer_sum * *record_pointer_2;
    iteration_count_2 = 0;
    buffer_cursor = (_BYTE *)(saved_allocated_buffer + scaled_index_2);
    if ( cached_table_value_3 > 0 )
    {
      record_byte_offset_4 = input_cursor + 2264;
      cached_table_value_2 = cached_table_value_3;
      buffer_cursor_2 = (int *)&callee_output_word_2;
      do
      {
        scaled_index_3 = *(buffer_cursor_2 - 2);
        loaded_word_7 = *buffer_cursor_2;
        if ( *buffer_cursor_2 < scaled_index_3 >> 1 )
        {
          loaded_word_8 = *(_QWORD *)(buffer_cursor_2 - 7);
          loaded_word_9 = *(_QWORD *)(buffer_cursor_2 - 5);
        }
        else
        {
          loaded_word_8 = *(_QWORD *)(buffer_cursor_2 - 5);
          loaded_word_9 = *(_QWORD *)(buffer_cursor_2 - 7);
        }
        *((_QWORD *)&selection_flag_3 + iteration_count_2) = (*(__int64 (           **)(_QWORD, __int64, __int64, _QWORD, _DWORD))(buffer_cursor_2 - 9))(
                                     record_byte_offset_4[5],
                                     loaded_word_8,
                                     loaded_word_9,
                                     (unsigned int)*(buffer_cursor_2 - 1),
                                     *(buffer_cursor_2 - 3));
        *buffer_cursor_2 = loaded_word_7 + 1;
        if ( loaded_word_7 + 1 >= scaled_index_3 )
        {
          table_value_4 = ++buffer_cursor_2[1];
          loaded_word_10 = *(_QWORD *)(buffer_cursor_2 - 5);
          *buffer_cursor_2 = 0;
          *(_QWORD *)(buffer_cursor_2 - 7) = loaded_word_10;
          if ( table_value_4 < *(_DWORD *)record_byte_offset_4 )
            *(_QWORD *)(buffer_cursor_2 - 5) = loaded_word_10 + *((int *)record_byte_offset_4 + 1);
        }
        ++iteration_count_2;
        buffer_cursor_2 += 12;
        record_byte_offset_4 += 12;
      }
      while ( iteration_count_2 < cached_table_value_2 );
      input_cursor = input_cursor_2;
      masked_bits = *((_QWORD *)&selection_flag_4 + 1);
      cached_selection_flag = selection_flag_4;
      masked_bits_2 = *((_QWORD *)&selection_flag_3 + 1);
      record_pointer_2 = (int *)*input_cursor_2;
      cached_selection_flag_2 = selection_flag_3;
    }
    packed_word_bits = saved_packed_word_bits;
    if ( saved_packed_word_bits < 3 )
    {
      if ( selection_flag_2 )
      {
        loaded_word_18 = *record_pointer_2;
        integer_sum_6 = 0;
        if ( saved_packed_word_bits == 1 )
        {
          if ( loaded_word_18 )
          {
            do
            {
              ++buffer_cursor;
              loaded_word_19 = 150 * *(unsigned __int8 *)(integer_sum_6 + masked_bits_2);
              loaded_word_20 = 29 * *(unsigned __int8 *)(integer_sum_6 + cached_selection_flag);
              loaded_word_21 = *(unsigned __int8 *)(integer_sum_6 + cached_selection_flag_2);
              integer_sum_6 = (unsigned int)(integer_sum_6 + 1);
              *(buffer_cursor - 1) = (unsigned __int16)(77 * loaded_word_21 + loaded_word_20 + loaded_word_19) >> 8;
              record_pointer_2 = (int *)*input_cursor;
            }
            while ( (unsigned int)integer_sum_6 < *(_DWORD *)*input_cursor );
          }
        }
        else if ( loaded_word_18 )
        {
          do
          {
            buffer_cursor += 2;
            loaded_word_22 = 150 * *(unsigned __int8 *)(integer_sum_6 + masked_bits_2);
            loaded_word_23 = 29 * *(unsigned __int8 *)(integer_sum_6 + cached_selection_flag);
            loaded_word_24 = *(unsigned __int8 *)(integer_sum_6 + cached_selection_flag_2);
            integer_sum_6 = (unsigned int)(integer_sum_6 + 1);
            *(buffer_cursor - 1) = -1;
            *(buffer_cursor - 2) = (unsigned __int16)(77 * loaded_word_24 + loaded_word_23 + loaded_word_22) >> 8;
            record_pointer_2 = (int *)*input_cursor;
          }
          while ( (unsigned int)integer_sum_6 < *(_DWORD *)*input_cursor );
        }
        goto LABEL_117;
      }
      if ( record_pointer_2[2] != 4 )
        goto LABEL_111;
      loaded_word_25 = *((_DWORD *)input_cursor + 4627);
      if ( !loaded_word_25 )
      {
        integer_sum_7 = 0;
        if ( *record_pointer_2 )
        {
          do
          {
            loaded_word_26 = *(unsigned __int8 *)(integer_sum_7 + masked_bits);
            loaded_word_27 = *(unsigned __int8 *)(integer_sum_7 + masked_bits_2);
            loaded_word_28 = *(unsigned __int8 *)(integer_sum_7 + cached_selection_flag);
            loaded_word_29 = *(unsigned __int8 *)(integer_sum_7 + cached_selection_flag_2);
            integer_sum_7 = (unsigned int)(integer_sum_7 + 1);
            buffer_cursor[1] = -1;
            *buffer_cursor = (unsigned __int16)(77
                                    * (unsigned __int8)((unsigned __int16)(loaded_word_26 * loaded_word_29
                                                                         + 128
                                                                         + ((unsigned int)(loaded_word_26 * loaded_word_29 + 128) >> 8)) >> 8)
                                    + 29
                                    * (unsigned __int8)((unsigned __int16)(loaded_word_26 * loaded_word_28
                                                                         + 128
                                                                         + ((unsigned int)(loaded_word_26 * loaded_word_28 + 128) >> 8)) >> 8)
                                    + 150
                                    * (unsigned __int8)((unsigned __int16)(loaded_word_26 * loaded_word_27
                                                                         + 128
                                                                         + ((unsigned int)(loaded_word_26 * loaded_word_27 + 128) >> 8)) >> 8)) >> 8;
            buffer_cursor += packed_word_bits;
            record_pointer_2 = (int *)*input_cursor;
          }
          while ( (unsigned int)integer_sum_7 < *(_DWORD *)*input_cursor );
        }
        goto LABEL_117;
      }
      if ( loaded_word_25 == 2 )
      {
        integer_sum_8 = 0;
        if ( *record_pointer_2 )
        {
          do
          {
            loaded_word_30 = (unsigned __int8)~*(_BYTE *)(integer_sum_8 + cached_selection_flag_2);
            loaded_word_31 = *(unsigned __int8 *)(integer_sum_8 + masked_bits);
            integer_sum_8 = (unsigned int)(integer_sum_8 + 1);
            buffer_cursor[1] = -1;
            *buffer_cursor = (unsigned __int16)(loaded_word_31 * loaded_word_30 + 128 + ((unsigned int)(loaded_word_31 * loaded_word_30 + 128) >> 8)) >> 8;
            buffer_cursor += packed_word_bits;
            record_pointer_2 = (int *)*input_cursor;
          }
          while ( (unsigned int)integer_sum_8 < *(_DWORD *)*input_cursor );
        }
      }
      else
      {
LABEL_111:
        loaded_word_32 = *record_pointer_2;
        integer_sum_9 = 0;
        if ( saved_packed_word_bits == 1 )
        {
          if ( loaded_word_32 )
          {
            do
            {
              buffer_cursor[integer_sum_9] = *(_BYTE *)(integer_sum_9 + cached_selection_flag_2);
              integer_sum_9 = (unsigned int)(integer_sum_9 + 1);
              record_pointer_2 = (int *)*input_cursor;
            }
            while ( (unsigned int)integer_sum_9 < *(_DWORD *)*input_cursor );
          }
        }
        else if ( loaded_word_32 )
        {
          do
          {
            loaded_word_33 = *(_BYTE *)(integer_sum_9 + cached_selection_flag_2);
            integer_sum_9 = (unsigned int)(integer_sum_9 + 1);
            *buffer_cursor = loaded_word_33;
            buffer_cursor[1] = -1;
            buffer_cursor += 2;
            record_pointer_2 = (int *)*input_cursor;
          }
          while ( (unsigned int)integer_sum_9 < *(_DWORD *)*input_cursor );
        }
      }
    }
    else
    {
      table_value_5 = record_pointer_2[2];
      if ( table_value_5 == 3 )
      {
        if ( !selection_flag_2 )
        {
          ((void (           *)(_BYTE *, __int64, __int64, __int64, int, int))input_cursor[2319])(buffer_cursor, cached_selection_flag_2, masked_bits_2, cached_selection_flag, *record_pointer_2, saved_packed_word_bits);
          record_pointer_2 = (int *)*input_cursor;
          goto LABEL_117;
        }
        integer_sum_2 = 0;
        if ( *record_pointer_2 )
        {
          do
          {
            *buffer_cursor = *(_BYTE *)(integer_sum_2 + cached_selection_flag_2);
            buffer_cursor[1] = *(_BYTE *)(integer_sum_2 + masked_bits_2);
            loaded_word_11 = *(_BYTE *)(integer_sum_2 + cached_selection_flag);
            integer_sum_2 = (unsigned int)(integer_sum_2 + 1);
            buffer_cursor[2] = loaded_word_11;
            buffer_cursor[3] = -1;
            buffer_cursor += packed_word_bits;
          }
          while ( (unsigned int)integer_sum_2 < *(_DWORD *)*input_cursor );
          record_pointer_2 = (int *)*input_cursor;
          goto LABEL_117;
        }
LABEL_93:
        record_pointer_2 = (int *)*input_cursor;
        goto LABEL_117;
      }
      if ( table_value_5 != 4 )
      {
        integer_sum_5 = 0;
        if ( *record_pointer_2 )
        {
          do
          {
            loaded_word_17 = *(_BYTE *)(integer_sum_5 + cached_selection_flag_2);
            integer_sum_5 = (unsigned int)(integer_sum_5 + 1);
            buffer_cursor[2] = loaded_word_17;
            buffer_cursor[1] = loaded_word_17;
            *buffer_cursor = loaded_word_17;
            buffer_cursor[3] = -1;
            buffer_cursor += packed_word_bits;
          }
          while ( (unsigned int)integer_sum_5 < *(_DWORD *)*input_cursor );
        }
        goto LABEL_93;
      }
      loaded_word_12 = *((_DWORD *)input_cursor + 4627);
      if ( loaded_word_12 )
      {
        loaded_word_15 = *record_pointer_2;
        callback_function = (void (           *)(_BYTE *, __int64, __int64, __int64, int, int))input_cursor[2319];
        cached_packed_word_bits = saved_packed_word_bits;
        saved_loaded_word_2 = loaded_word_15;
        if ( loaded_word_12 != 2 )
        {
          callback_function(buffer_cursor, cached_selection_flag_2, masked_bits_2, cached_selection_flag, saved_loaded_word_2, cached_packed_word_bits);
          record_pointer_2 = (int *)*input_cursor;
          goto LABEL_117;
        }
        callback_function(buffer_cursor, cached_selection_flag_2, masked_bits_2, cached_selection_flag, saved_loaded_word_2, cached_packed_word_bits);
        integer_sum_4 = 0;
        if ( !*(_DWORD *)*input_cursor )
          goto LABEL_93;
        do
        {
          loaded_word_16 = *(unsigned __int8 *)(integer_sum_4 + masked_bits);
          integer_sum_4 = (unsigned int)(integer_sum_4 + 1);
          *buffer_cursor = (unsigned __int16)(loaded_word_16 * (unsigned __int8)~*buffer_cursor
                                  + 128
                                  + ((loaded_word_16 * (unsigned int)(unsigned __int8)~*buffer_cursor + 128) >> 8)) >> 8;
          buffer_cursor[1] = (unsigned __int16)(loaded_word_16 * (unsigned __int8)~buffer_cursor[1]
                                    + 128
                                    + ((loaded_word_16 * (unsigned int)(unsigned __int8)~buffer_cursor[1] + 128) >> 8)) >> 8;
          buffer_cursor[2] = (unsigned __int16)(loaded_word_16 * (unsigned __int8)~buffer_cursor[2]
                                    + 128
                                    + ((loaded_word_16 * (unsigned int)(unsigned __int8)~buffer_cursor[2] + 128) >> 8)) >> 8;
          buffer_cursor += packed_word_bits;
        }
        while ( (unsigned int)integer_sum_4 < *(_DWORD *)*input_cursor );
        record_pointer_2 = (int *)*input_cursor;
      }
      else
      {
        integer_sum_3 = 0;
        if ( !*record_pointer_2 )
          goto LABEL_93;
        do
        {
          loaded_word_13 = *(unsigned __int8 *)(integer_sum_3 + masked_bits);
          *buffer_cursor = (unsigned __int16)(loaded_word_13 * *(unsigned __int8 *)(integer_sum_3 + cached_selection_flag_2)
                                  + 128
                                  + ((loaded_word_13 * (unsigned int)*(unsigned __int8 *)(integer_sum_3 + cached_selection_flag_2) + 128) >> 8)) >> 8;
          buffer_cursor[1] = (unsigned __int16)(loaded_word_13 * *(unsigned __int8 *)(integer_sum_3 + masked_bits_2)
                                    + 128
                                    + ((loaded_word_13 * (unsigned int)*(unsigned __int8 *)(integer_sum_3 + masked_bits_2) + 128) >> 8)) >> 8;
          loaded_word_14 = *(unsigned __int8 *)(integer_sum_3 + cached_selection_flag);
          integer_sum_3 = (unsigned int)(integer_sum_3 + 1);
          buffer_cursor[3] = -1;
          buffer_cursor[2] = (unsigned __int16)(loaded_word_13 * loaded_word_14 + 128 + ((unsigned int)(loaded_word_13 * loaded_word_14 + 128) >> 8)) >> 8;
          buffer_cursor += packed_word_bits;
        }
        while ( (unsigned int)integer_sum_3 < *(_DWORD *)*input_cursor );
        record_pointer_2 = (int *)*input_cursor;
      }
    }
LABEL_117:
    integer_sum = cached_integer_sum + 1;
    cached_integer_sum = integer_sum;
    if ( integer_sum < record_pointer_2[1] )
      continue;
    break;
  }
  selection_code = 1;
LABEL_119:
  remaining_count_3 = record_pointer_2[2];
  if ( remaining_count_3 > 0 )
  {
    record_byte_offset_6 = (void **)(input_cursor + 2267);
    do
    {
      if ( *record_byte_offset_6 )
      {
        free(*record_byte_offset_6);
        *record_byte_offset_6 = nullptr;
        *(record_byte_offset_6 - 1) = nullptr;
      }
      allocation_buffer_5 = record_byte_offset_6[1];
      if ( allocation_buffer_5 )
      {
        free(allocation_buffer_5);
        record_byte_offset_6[1] = nullptr;
        record_byte_offset_6[3] = nullptr;
      }
      allocation_buffer_6 = record_byte_offset_6[2];
      if ( allocation_buffer_6 )
      {
        free(allocation_buffer_6);
        record_byte_offset_6[2] = nullptr;
      }
      record_byte_offset_6 += 12;
      --remaining_count_3;
    }
    while ( remaining_count_3 );
    record_pointer_2 = (int *)*input_cursor;
  }
  *unused_written_slot = *record_pointer_2;
  *unused_written_slot_2 = *(_DWORD *)(*input_cursor + 4LL);
  if ( input_cursor_3 )
  {
    if ( *(int *)(*input_cursor + 8LL) >= 3 )
      selection_code = 3;
    *input_cursor_3 = selection_code;
  }
  return saved_allocated_buffer; /* 0x1400E5DB2: mov rax, r12 */
}
#undef unused_frame_slot_8
#undef saved_loaded_word_2
#undef cached_packed_word_bits
#undef saved_packed_word_bits
#undef cached_integer_sum
#undef selection_flag_2
#undef cached_table_value_3
#undef input_cursor_2
#undef unused_written_slot
#undef unused_written_slot_2
#undef input_cursor_3
#undef selection_flag_3
#undef selection_flag_4
#undef callee_output_word
#undef callee_output_word_2
#undef unused_frame_slot_344

//----- (00000001400E5EB0) ----------------------------------------------------
__int64 sub_1400E5EB0()
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E5EB0[112];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400E5EB0 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(_BYTE (*)[64])(void *)(sr_frame_1400E5EB0 + 32)) /* [rsp+20h] */
#define unused_frame_slot_96 (*(__int64 (*))(void *)(sr_frame_1400E5EB0 + 96)) /* [rsp+60h] */

  g_1602E12E0 = 0;
  crt_chdir(&g_182A7D340);
  crt_sprintf(scratch_buffer, "client2.csk");
  return crt_chdir(&g_182A7D140); /* 0x1400E5EF1: the result of this call is still in rax at the exit */
}
#undef unused_frame_slot_0
#undef scratch_buffer
#undef unused_frame_slot_96

//----- (00000001400E65F0) ----------------------------------------------------
__int64 sub_1400E65F0()
{
  int iteration_count;
  unsigned int *i;
  __int64 scaled_index;
  __int64 scaled_index_2;
       char *state_address;
  __int64 file_handle;
  __int64 scaled_index_3;
  FILE *file_handle_2;
  __int64 allocated_buffer;
  __int64 element_count;
  int table_value;
  __int64 scaled_index_4;
  int scaled_index_5;
  __int64 file_handle_3;
  FILE *file_handle_4;
  __int64 allocated_buffer_2;
  __int64 element_count_2;
  int table_value_2;
  int scaled_index_6;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E65F0[608];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400E65F0 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(char (*)[512])(void *)(sr_frame_1400E65F0 + 80)) /* [rsp+50h] */
#define unused_frame_slot_592 (*(__int64 (*))(void *)(sr_frame_1400E65F0 + 592)) /* [rsp+250h] */

  iteration_count = 0;
  if ( (int)g_1A4CFF8D4 > 0 )
  {
    for ( i = &g_1A4CFF8D8; ; ++i )
    {
      scaled_index = (int)*i;
      scaled_index_2 = 46 * scaled_index;
      state_address = (     char *)&dword_140404A6C[46 * scaled_index + 421784739];
      crt_sprintf(scratch_buffer, "texture/%s.png", state_address);
      file_handle = crt_fopen(scratch_buffer, "rb");
      scaled_index_3 = 46 * scaled_index;
      file_handle_2 = (FILE *)file_handle;
      if ( file_handle )
      {
        sub_14020C4A8(file_handle, 0, 2u);
        dword_140404A6C[scaled_index_3 + 421784755] = ftell_sr(file_handle_2);
        sub_14020C4A8((__int64)file_handle_2, 0, 0);
        allocated_buffer = sr_path_malloc((int)dword_140404A6C[scaled_index_2 + 421784755]);
        element_count = (int)dword_140404A6C[scaled_index_2 + 421784755];
        *(_QWORD *)&dword_140404A6C[scaled_index_2 + 421784757] = allocated_buffer;
        fread_sr((void *)(uintptr_t)(allocated_buffer), 1, element_count, (FILE *)(uintptr_t)(file_handle_2));
        crt_fclose((__int64)file_handle_2);
      }
      else
      {
        dword_140404A6C[scaled_index_3 + 421784755] = 0;
      }
      table_value = dword_140404A6C[scaled_index_2 + 421784755];
      scaled_index_4 = 2 * scaled_index;
      scaled_index_5 = dword_140404A6C[2 * scaled_index_4 + 283827814];
      if ( table_value <= 0 )
        sub_140138590(scaled_index_5, 0, 0x2901u, 0x2901u, 0x2601u, 0x2601u, 255, 64, 128, 0);
      else
        sub_1400EE0A0(scaled_index_5, table_value, *(_QWORD *)&dword_140404A6C[scaled_index_2 + 421784757], 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
      glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
      crt_sprintf(scratch_buffer, "texturematerial/%s.png", state_address);
      file_handle_3 = crt_fopen(scratch_buffer, "rb");
      file_handle_4 = (FILE *)file_handle_3;
      if ( !file_handle_3 )
        break;
      sub_14020C4A8(file_handle_3, 0, 2u);
      dword_140404A6C[scaled_index_2 + 421784759] = ftell_sr(file_handle_4);
      sub_14020C4A8((__int64)file_handle_4, 0, 0);
      allocated_buffer_2 = sr_path_malloc((int)dword_140404A6C[scaled_index_2 + 421784759]);
      element_count_2 = (int)dword_140404A6C[scaled_index_2 + 421784759];
      *(_QWORD *)&dword_140404A6C[scaled_index_2 + 421784761] = allocated_buffer_2;
      fread_sr((void *)(uintptr_t)(allocated_buffer_2), 1, element_count_2, (FILE *)(uintptr_t)(file_handle_4));
      crt_fclose((__int64)file_handle_4);
      table_value_2 = dword_140404A6C[scaled_index_2 + 421784759];
      scaled_index_6 = dword_140404A6C[2 * scaled_index_4 + 283827815];
      if ( table_value_2 <= 0 )
        goto LABEL_13;
      sub_1400EE0A0(scaled_index_6, table_value_2, *(_QWORD *)&dword_140404A6C[scaled_index_2 + 421784761], 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
LABEL_14:
      glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
      if ( ++iteration_count >= (int)g_1A4CFF8D4 )
        return 0; /* compatibility result discarded by all reviewed callers */
    }
    scaled_index_6 = dword_140404A6C[2 * scaled_index_4 + 283827815];
    dword_140404A6C[scaled_index_2 + 421784759] = 0;
LABEL_13:
    sub_140138590(scaled_index_6, 0, 0x2901u, 0x2901u, 0x2601u, 0x2601u, 32, 192, 0, 0);
    goto LABEL_14;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef scratch_buffer
#undef unused_frame_slot_592

//----- (00000001400E6960) ----------------------------------------------------
__int64 sub_1400E6960()
{
  __int64 result;
  int state_word;
  int state_word_2;
  unsigned int *state_address;
  __int64 running_total;
  int iteration_count;
  unsigned int *state_address_2;
  unsigned int *state_address_3;
  unsigned int *saved_state_address;
  int loaded_word;
  int loaded_word_2;
  signed int element_index;
  __int64 saved_call_status;
  __int64 running_total_2;
  int iteration_count_2;
  unsigned int *state_address_4;
  unsigned int *state_address_5;
  int masked_bits;
  int loaded_word_3;
  int iteration_count_3;
  unsigned int *state_address_6;
  unsigned int *state_address_7;
  int masked_bits_2;
  int loaded_word_4;
  int iteration_count_4;
  __int64 scaled_index;
  unsigned int *state_address_8;
  unsigned int *state_address_9;
  int masked_bits_3;
  int loaded_word_5;
  int iteration_count_5;
  unsigned int *state_address_10;
  unsigned int *state_address_11;
  int masked_bits_4;
  int loaded_word_6;
  int iteration_count_6;
  __int64 scaled_index_2;
  unsigned int *state_address_12;
  unsigned int *state_address_13;
  int masked_bits_5;
  int loaded_word_7;
  int iteration_count_7;
  unsigned int *state_address_14;
  unsigned int *state_address_15;
  int masked_bits_6;
  int loaded_word_8;
  int iteration_count_8;
  unsigned int *state_address_16;
  unsigned int *state_address_17;
  int masked_bits_7;
  int loaded_word_9;
  int iteration_count_9;
  unsigned int *state_address_18;
  unsigned int *state_address_19;
  int masked_bits_8;
  int loaded_word_10;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E6960[16];
#define saved_call_status_2 (*(int (*))(void *)(sr_frame_1400E6960 + 0)) /* [rsp+40h] */
#define saved_call_status_3 (*(__int64 (*))(void *)(sr_frame_1400E6960 + 8)) /* [rsp+48h] */

  result = 0;
  saved_call_status_2 = 0;
  if ( (int)g_16E492084 > 0 )
  {
    state_word = g_14500A700;
    state_word_2 = g_1A4CFF560;
    state_address = &g_16E4920C8;
    running_total = 0;
    do
    {
      *state_address = 0x40000000;
      if ( *((_BYTE *)state_address - 64) )
      {
        iteration_count = 0;
        if ( state_word > 0 )
        {
          state_address_2 = &g_145098C00;
          state_address_3 = &dword_140404A6C[4242 * (int)result + 193082759];
          do
          {
            saved_state_address = state_address_3;
            do
            {
              loaded_word = *((unsigned __int8 *)saved_state_address + ((char *)state_address_2 - (char *)state_address_3));
              loaded_word_2 = *(unsigned __int8 *)saved_state_address - loaded_word;
              if ( loaded_word_2 )
                break;
              saved_state_address = (unsigned int *)((char *)saved_state_address + 1);
            }
            while ( loaded_word );
            if ( !loaded_word_2 )
              *state_address = iteration_count | 0x80000000;
            ++iteration_count;
            state_address_2 += 58;
          }
          while ( iteration_count < state_word );
          LODWORD(result) = saved_call_status_2;
        }
      }
      element_index = 0;
      if ( (int)state_address[1] > 0 )
      {
        saved_call_status = (int)result;
        running_total_2 = 0;
        saved_call_status_3 = (int)result;
        do
        {
          iteration_count_2 = 0;
          if ( state_word_2 > 0 )
          {
            state_address_4 = &g_1A4CFFCF8;
            do
            {
              state_address_5 = &dword_140404A6C[4242 * saved_call_status + 193082777 + 132 * element_index];
              do
              {
                masked_bits = *((unsigned __int8 *)state_address_5 + ((char *)state_address_4 - (char *)&dword_140404A6C[4242 * saved_call_status + 193082777 + 132 * element_index]));
                loaded_word_3 = *(unsigned __int8 *)state_address_5 - masked_bits;
                if ( loaded_word_3 )
                  break;
                state_address_5 = (unsigned int *)((char *)state_address_5 + 1);
              }
              while ( masked_bits );
              if ( !loaded_word_3 )
                LOWORD(dword_140404A6C[running_total + 193082905 + running_total_2]) = iteration_count_2;
              ++iteration_count_2;
              state_address_4 += 46;
            }
            while ( iteration_count_2 < state_word_2 );
          }
          iteration_count_3 = 0;
          if ( state_word_2 > 0 )
          {
            state_address_6 = &g_1A4CFFCF8;
            do
            {
              state_address_7 = &dword_140404A6C[4242 * saved_call_status + 193082793 + 132 * element_index];
              do
              {
                masked_bits_2 = *((unsigned __int8 *)state_address_7 + ((char *)state_address_6 - (char *)&dword_140404A6C[4242 * saved_call_status + 193082793 + 132 * element_index]));
                loaded_word_4 = *(unsigned __int8 *)state_address_7 - masked_bits_2;
                if ( loaded_word_4 )
                  break;
                state_address_7 = (unsigned int *)((char *)state_address_7 + 1);
              }
              while ( masked_bits_2 );
              if ( !loaded_word_4 )
                HIWORD(dword_140404A6C[running_total + 193082905 + running_total_2]) = iteration_count_3;
              ++iteration_count_3;
              state_address_6 += 46;
            }
            while ( iteration_count_3 < state_word_2 );
          }
          iteration_count_4 = 0;
          scaled_index = 4242 * saved_call_status;
          if ( state_word_2 > 0 )
          {
            state_address_8 = &g_1A4CFFCF8;
            do
            {
              state_address_9 = &dword_140404A6C[132 * element_index + 193082809 + scaled_index];
              do
              {
                masked_bits_3 = *((unsigned __int8 *)state_address_9 + ((char *)state_address_8 - (char *)&dword_140404A6C[132 * element_index + 193082809 + scaled_index]));
                loaded_word_5 = *(unsigned __int8 *)state_address_9 - masked_bits_3;
                if ( loaded_word_5 )
                  break;
                state_address_9 = (unsigned int *)((char *)state_address_9 + 1);
              }
              while ( masked_bits_3 );
              if ( !loaded_word_5 )
                LOWORD(dword_140404A6C[running_total + 193082906 + running_total_2]) = iteration_count_4;
              ++iteration_count_4;
              state_address_8 += 46;
            }
            while ( iteration_count_4 < state_word_2 );
            saved_call_status = saved_call_status_3;
          }
          iteration_count_5 = 0;
          if ( state_word_2 > 0 )
          {
            state_address_10 = &g_1A4CFFCF8;
            do
            {
              state_address_11 = &dword_140404A6C[132 * element_index + 193082825 + scaled_index];
              do
              {
                masked_bits_4 = *((unsigned __int8 *)state_address_11 + ((char *)state_address_10 - (char *)&dword_140404A6C[132 * element_index + 193082825 + scaled_index]));
                loaded_word_6 = *(unsigned __int8 *)state_address_11 - masked_bits_4;
                if ( loaded_word_6 )
                  break;
                state_address_11 = (unsigned int *)((char *)state_address_11 + 1);
              }
              while ( masked_bits_4 );
              if ( !loaded_word_6 )
                HIWORD(dword_140404A6C[running_total + 193082906 + running_total_2]) = iteration_count_5;
              ++iteration_count_5;
              state_address_10 += 46;
            }
            while ( iteration_count_5 < state_word_2 );
            saved_call_status = saved_call_status_3;
          }
          iteration_count_6 = 0;
          scaled_index_2 = 132LL * element_index;
          if ( state_word_2 > 0 )
          {
            state_address_12 = &g_1A4CFFCF8;
            do
            {
              state_address_13 = &dword_140404A6C[scaled_index + 193082841 + scaled_index_2];
              do
              {
                masked_bits_5 = *((unsigned __int8 *)state_address_13 + ((char *)state_address_12 - (char *)&dword_140404A6C[scaled_index + 193082841 + scaled_index_2]));
                loaded_word_7 = *(unsigned __int8 *)state_address_13 - masked_bits_5;
                if ( loaded_word_7 )
                  break;
                state_address_13 = (unsigned int *)((char *)state_address_13 + 1);
              }
              while ( masked_bits_5 );
              if ( !loaded_word_7 )
                LOWORD(dword_140404A6C[running_total + 193082907 + running_total_2]) = iteration_count_6;
              ++iteration_count_6;
              state_address_12 += 46;
            }
            while ( iteration_count_6 < state_word_2 );
            saved_call_status = saved_call_status_3;
          }
          iteration_count_7 = 0;
          if ( state_word_2 > 0 )
          {
            state_address_14 = &g_1A4CFFCF8;
            do
            {
              state_address_15 = &dword_140404A6C[scaled_index + 193082857 + scaled_index_2];
              do
              {
                masked_bits_6 = *((unsigned __int8 *)state_address_15 + ((char *)state_address_14 - (char *)&dword_140404A6C[scaled_index + 193082857 + scaled_index_2]));
                loaded_word_8 = *(unsigned __int8 *)state_address_15 - masked_bits_6;
                if ( loaded_word_8 )
                  break;
                state_address_15 = (unsigned int *)((char *)state_address_15 + 1);
              }
              while ( masked_bits_6 );
              if ( !loaded_word_8 )
                HIWORD(dword_140404A6C[running_total + 193082907 + running_total_2]) = iteration_count_7;
              ++iteration_count_7;
              state_address_14 += 46;
            }
            while ( iteration_count_7 < state_word_2 );
            saved_call_status = saved_call_status_3;
          }
          iteration_count_8 = 0;
          if ( state_word_2 > 0 )
          {
            state_address_16 = &g_1A4CFFCF8;
            do
            {
              state_address_17 = &dword_140404A6C[scaled_index + 193082873 + scaled_index_2];
              do
              {
                masked_bits_7 = *((unsigned __int8 *)state_address_17 + ((char *)state_address_16 - (char *)&dword_140404A6C[scaled_index + 193082873 + scaled_index_2]));
                loaded_word_9 = *(unsigned __int8 *)state_address_17 - masked_bits_7;
                if ( loaded_word_9 )
                  break;
                state_address_17 = (unsigned int *)((char *)state_address_17 + 1);
              }
              while ( masked_bits_7 );
              if ( !loaded_word_9 )
                LOWORD(dword_140404A6C[running_total + 193082908 + running_total_2]) = iteration_count_8;
              ++iteration_count_8;
              state_address_16 += 46;
            }
            while ( iteration_count_8 < state_word_2 );
            saved_call_status = saved_call_status_3;
          }
          iteration_count_9 = 0;
          if ( state_word_2 > 0 )
          {
            state_address_18 = &g_1A4CFFCF8;
            do
            {
              state_address_19 = &dword_140404A6C[scaled_index + 193082889 + scaled_index_2];
              do
              {
                masked_bits_8 = *((unsigned __int8 *)state_address_19 + ((char *)state_address_18 - (char *)&dword_140404A6C[scaled_index + 193082889 + scaled_index_2]));
                loaded_word_10 = *(unsigned __int8 *)state_address_19 - masked_bits_8;
                if ( loaded_word_10 )
                  break;
                state_address_19 = (unsigned int *)((char *)state_address_19 + 1);
              }
              while ( masked_bits_8 );
              if ( !loaded_word_10 )
                HIWORD(dword_140404A6C[running_total + 193082908 + running_total_2]) = iteration_count_9;
              ++iteration_count_9;
              state_address_18 += 46;
            }
            while ( iteration_count_9 < state_word_2 );
            saved_call_status = saved_call_status_3;
          }
          ++element_index;
          running_total_2 += 132;
        }
        while ( element_index < (int)state_address[1] );
        state_word = g_14500A700;
        LODWORD(result) = saved_call_status_2;
      }
      result = (unsigned int)(result + 1);
      state_address += 4242;
      running_total += 4242;
      saved_call_status_2 = result;
    }
    while ( (int)result < (int)g_16E492084 );
  }
  return result;
}
#undef saved_call_status_2
#undef saved_call_status_3

//----- (00000001400E7270) ----------------------------------------------------
__int64            sub_1400E7270(int a1, char *a2)
{
  __int64 input_value;
  int chdir_result;
  int chdir_result_2;
  __int64 integer_difference;
  char input_byte;
  __int64 file_handle;
  __int64 file_handle_2;
  __int64 scaled_index;
  unsigned int *state_address;
  signed int i;
  __int64 scaled_index_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E7270[576];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400E7270 + 0)) /* [rsp+0h] */
#define Buffer (*(_DWORD (*)[4])(void *)(sr_frame_1400E7270 + 32)) /* [rsp+20h] */
#define scratch_buffer (*(char (*)[512])(void *)(sr_frame_1400E7270 + 48)) /* [rsp+30h] */
#define unused_frame_slot_560 (*(__int64 (*))(void *)(sr_frame_1400E7270 + 560)) /* [rsp+230h] */

  input_value = a1;
  chdir_result = crt_chdir("data");
  chdir_result_2 = crt_chdir("mission");
  integer_difference = scratch_buffer - a2;
  do
  {
    input_byte = *a2;
    a2[integer_difference] = *a2;
    ++a2;
  }
  while ( input_byte );
  file_handle = crt_fopen(scratch_buffer, "rb");
  file_handle_2 = file_handle;
  if ( file_handle )
  {
    fread_sr((void *)(uintptr_t)(Buffer), 4, 1, (FILE *)(uintptr_t)(file_handle));
    if ( Buffer[0] != 1 )
    {
      crt_fclose(file_handle_2);
      return 0; /* the function has no caller */
    }
    scaled_index = 4100 * input_value;
    state_address = &dword_140404A6C[1025 * input_value + 486132853];
    fread_sr((void *)(uintptr_t)(state_address), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
    for ( i = 0; i < (int)*state_address; ++i )
    {
      scaled_index_2 = scaled_index + 16LL * i;
      fread_sr((void *)(uintptr_t)((char *)&g_1B4277C44 + scaled_index_2), 4, 3, (FILE *)(uintptr_t)(file_handle_2));
      fread_sr((void *)(uintptr_t)((char *)&g_1B4277C50 + scaled_index_2), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
    }
    crt_fclose(file_handle_2);
  }
  if ( !chdir_result_2 )
    crt_chdir("..");
  if ( !chdir_result )
    crt_chdir("..");
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef Buffer
#undef scratch_buffer
#undef unused_frame_slot_560

//----- (00000001400E7410) ----------------------------------------------------
double            sub_1400E7410(int a1)
{
  __int64 record_word_offset;
  __int64 record_word_offset_2;
  int table_value;
  int scaled_index;
  int table_value_2;
  int scaled_index_2;

  record_word_offset = 46LL * a1;
  record_word_offset_2 = 2LL * a1;
  table_value = dword_140404A6C[record_word_offset + 421784755];
  scaled_index = dword_140404A6C[4 * a1 + 283827814];
  if ( table_value <= 0 )
    sub_140138590(scaled_index, 0, 0x2901u, 0x2901u, 0x2601u, 0x2601u, 255, 64, 128, 0);
  else
    sub_1400EE0A0(scaled_index, table_value, *(_QWORD *)&dword_140404A6C[record_word_offset + 421784757], 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
  glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
  table_value_2 = dword_140404A6C[record_word_offset + 421784759];
  scaled_index_2 = dword_140404A6C[2 * record_word_offset_2 + 283827815];
  if ( table_value_2 <= 0 )
    sub_140138590(scaled_index_2, 0, 0x2901u, 0x2901u, 0x2601u, 0x2601u, 32, 192, 0, 0);
  else
    sub_1400EE0A0(scaled_index_2, table_value_2, *(_QWORD *)&dword_140404A6C[record_word_offset + 421784761], 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
  return (*(double (**)(unsigned, unsigned, float))(unsigned int *)&glTexParameterf)(3553, 34046, 16.0f /* native XMM2 */);
}

//----- (00000001400E7590) ----------------------------------------------------
__int64            sub_1400E7590(char *a1)
{
  __int64 result;
  unsigned __int8 *allocation_buffer;
  signed int state_word;
  unsigned int cached_callee_output_word;
  int state_word_2;
  unsigned int scaled_index;
  signed int iteration_count;
  unsigned int state_word_3;
  int running_total;
  int element_index;
  int record_byte_offset;
  int running_total_2;
  int table_value;
  int table_value_2;
  int table_value_3;
  int table_value_4;
  int scaled_index_2;
  unsigned int callee_output_word;

  result = sub_140170C30(a1, (int *)&g_1B0037420, (int *)&g_1B0037424, &callee_output_word, 0);
  allocation_buffer = (unsigned __int8 *)result;
  if ( result )
  {
    state_word = g_1B0037424;
    cached_callee_output_word = callee_output_word;
    state_word_2 = g_1B0037420;
    scaled_index = callee_output_word * g_1B0037420;
    iteration_count = 0;
    callee_output_word *= g_1B0037420;
    if ( (int)g_1B0037424 > 0 )
    {
      state_word_3 = g_1862AE010;
      running_total = 0;
      do
      {
        element_index = 0;
        if ( state_word_2 > 0 )
        {
          record_byte_offset = running_total;
          running_total_2 = running_total;
          do
          {
            table_value = allocation_buffer[running_total_2];
            table_value_2 = allocation_buffer[running_total_2 + 1];
            table_value_3 = allocation_buffer[running_total_2 + 2];
            if ( cached_callee_output_word == 4 )
              table_value_4 = allocation_buffer[record_byte_offset + 3];
            else
              table_value_4 = 255;
            scaled_index_2 = state_word_2 * (state_word - iteration_count - 1);
            if ( state_word_3 )
              dword_140404A6C[element_index + 468765295 + scaled_index_2] = (table_value_3 << 8) + table_value_4 + (table_value_2 << 16) + (table_value << 24);
            else
              dword_140404A6C[element_index + 468765295 + scaled_index_2] = (table_value_4 << 24) + table_value + (table_value_3 << 16) + (table_value_2 << 8);
            state_word_2 = g_1B0037420;
            ++element_index;
            state_word = g_1B0037424;
            running_total_2 += cached_callee_output_word;
            record_byte_offset += 4;
          }
          while ( element_index < (int)g_1B0037420 );
          scaled_index = callee_output_word;
        }
        ++iteration_count;
        running_total += scaled_index;
      }
      while ( iteration_count < state_word );
    }
    free(allocation_buffer);
    return 1;
  }
  return result;
}

//----- (00000001400E7720) ----------------------------------------------------
__int64            sub_1400E7720(int a1, __int64 a2)
{
  __m128i *allocation_buffer;
  signed int state_word;
  unsigned int table_value;
  int state_word_2;
  unsigned int scaled_index;
  signed int iteration_count;
  unsigned int state_word_3;
  int running_total;
  int element_index;
  int record_byte_offset;
  int running_total_2;
  int table_value_2;
  int table_value_3;
  int table_value_4;
  int table_value_5;
  int scaled_index_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E7720[304];
#define unused_frame_slot_0 (*(_BYTE (*)[32])(void *)(sr_frame_1400E7720 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(unsigned int (*)[4])(void *)(sr_frame_1400E7720 + 48)) /* [rsp+30h] */
#define scratch_buffer_2 (*(_BYTE (*)[16])(void *)(sr_frame_1400E7720 + 64)) /* [rsp+40h] */
#define unused_written_slot (*(__int64 (*))(void *)(sr_frame_1400E7720 + 80)) /* [rsp+50h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_1400E7720 + 112)) /* [rsp+70h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_1400E7720 + 248)) /* [rsp+F8h] */
#define unused_written_slot_4 (*(__int64 (*))(void *)(sr_frame_1400E7720 + 256)) /* [rsp+100h] */
#define unused_written_slot_5 (*(__int64 (*))(void *)(sr_frame_1400E7720 + 264)) /* [rsp+108h] */
#define unused_written_slot_6 (*(__int64 (*))(void *)(sr_frame_1400E7720 + 272)) /* [rsp+110h] */
#define integer_sum (*(__int64 (*))(void *)(sr_frame_1400E7720 + 280)) /* [rsp+118h] */
#define unused_frame_slot_288 (*(__int64 (*))(void *)(sr_frame_1400E7720 + 288)) /* [rsp+120h] */

  if ( !a1 )
    return 0; /* the function has no caller */
  unused_written_slot = 0;
  unused_written_slot_2 = 0;
  unused_written_slot_6 = a2;
  integer_sum = a2 + a1;
  unused_written_slot_5 = integer_sum;
  unused_written_slot_4 = a2;
  unused_written_slot_3 = 0;
  allocation_buffer = sub_140166160((__int64)scratch_buffer_2, (int *)&g_1B0037420, (int *)&g_1B0037424, scratch_buffer, 0);
  if ( !allocation_buffer )
    return 0; /* the function has no caller */
  state_word = g_1B0037424;
  table_value = scratch_buffer[0];
  state_word_2 = g_1B0037420;
  scaled_index = scratch_buffer[0] * g_1B0037420;
  iteration_count = 0;
  scratch_buffer[0] *= g_1B0037420;
  if ( (int)g_1B0037424 > 0 )
  {
    state_word_3 = g_1862AE010;
    running_total = 0;
    do
    {
      element_index = 0;
      if ( state_word_2 > 0 )
      {
        record_byte_offset = running_total;
        running_total_2 = running_total;
        do
        {
          table_value_2 = SR_VEC_PTR_LANES(128, allocation_buffer, u8)[running_total_2];
          table_value_3 = SR_VEC_PTR_LANES(128, allocation_buffer, u8)[running_total_2 + 1];
          table_value_4 = SR_VEC_PTR_LANES(128, allocation_buffer, u8)[running_total_2 + 2];
          if ( table_value == 4 )
            table_value_5 = SR_VEC_PTR_LANES(128, allocation_buffer, u8)[record_byte_offset + 3];
          else
            table_value_5 = 255;
          scaled_index_2 = state_word_2 * (state_word - iteration_count - 1);
          if ( state_word_3 )
            dword_140404A6C[element_index + 468765295 + scaled_index_2] = (table_value_4 << 8) + table_value_5 + (table_value_3 << 16) + (table_value_2 << 24);
          else
            dword_140404A6C[element_index + 468765295 + scaled_index_2] = (table_value_5 << 24) + table_value_2 + (table_value_4 << 16) + (table_value_3 << 8);
          state_word_2 = g_1B0037420;
          ++element_index;
          state_word = g_1B0037424;
          running_total_2 += table_value;
          record_byte_offset += 4;
        }
        while ( element_index < (int)g_1B0037420 );
        scaled_index = scratch_buffer[0];
      }
      ++iteration_count;
      running_total += scaled_index;
    }
    while ( iteration_count < state_word );
  }
  free(allocation_buffer);
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef scratch_buffer
#undef scratch_buffer_2
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_written_slot_5
#undef unused_written_slot_6
#undef integer_sum
#undef unused_frame_slot_288

//----- (00000001400E7C40) ----------------------------------------------------
__int64            sub_1400E7C40(int a1, char *a2)
{
  __int64 packed_word_bits;
  int saved_chdir_result;
  int chdir_result;
  __int64 integer_difference;
  char input_byte;
  __int64 file_handle;
  __int64 file_handle_2;
  __int64 scaled_index;
  unsigned int *state_address;
  __int64 allocated_buffer;
  void *allocation_buffer;
  signed int iteration_count;
  int running_total;
  int running_total_2;
  signed int iteration_count_2;
  int running_total_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E7C40[608];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400E7C40 + 0)) /* [rsp+0h] */
#define Buffer (*(int (*))(void *)(sr_frame_1400E7C40 + 64)) /* [rsp+40h] */
#define chdir_result_2 (*(int (*))(void *)(sr_frame_1400E7C40 + 68)) /* [rsp+44h] */
#define input_value (*(int (*))(void *)(sr_frame_1400E7C40 + 72)) /* [rsp+48h] */
#define FileName (*(char (*)[512])(void *)(sr_frame_1400E7C40 + 80)) /* [rsp+50h] */
#define unused_frame_slot_592 (*(__int64 (*))(void *)(sr_frame_1400E7C40 + 592)) /* [rsp+250h] */

  packed_word_bits = a1;
  input_value = a1;
  chdir_result_2 = crt_chdir("data");
  saved_chdir_result = chdir_result_2;
  chdir_result = crt_chdir("item");
  integer_difference = FileName - a2;
  do
  {
    input_byte = *a2;
    a2[integer_difference] = *a2;
    ++a2;
  }
  while ( input_byte );
  file_handle = crt_fopen(FileName, "rb");
  file_handle_2 = file_handle;
  if ( file_handle )
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(file_handle));
    if ( Buffer != 2 )
    {
      if ( !chdir_result )
        crt_chdir("..");
      if ( !saved_chdir_result )
        crt_chdir("..");
      crt_fclose(file_handle_2);
      return 0; /* the function has no caller */
    }
    scaled_index = 50 * packed_word_bits;
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[50 * packed_word_bits + 272248205]), 1, 64, (FILE *)(uintptr_t)(file_handle_2));
    state_address = &dword_140404A6C[50 * packed_word_bits + 272248222];
    fread_sr((void *)(uintptr_t)(state_address), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
    free(*(void **)&dword_140404A6C[50 * packed_word_bits + 272248223]);
    allocated_buffer = sr_path_malloc((int)(12 * *state_address));
    allocation_buffer = *(void **)&dword_140404A6C[50 * packed_word_bits + 272248225];
    *(_QWORD *)&dword_140404A6C[50 * packed_word_bits + 272248223] = allocated_buffer;
    free(allocation_buffer);
    *(_QWORD *)&dword_140404A6C[50 * packed_word_bits + 272248225] = sr_path_malloc((int)(8 * *state_address));
    iteration_count = 0;
    if ( (int)*state_address > 0 )
    {
      running_total = 0;
      running_total_2 = 0;
      do
      {
        fread_sr((void *)(uintptr_t)(*(_QWORD *)&dword_140404A6C[scaled_index + 272248223] + 4LL * running_total_2), 4, 3, (FILE *)(uintptr_t)(file_handle_2));
        fread_sr((void *)(uintptr_t)(*(_QWORD *)&dword_140404A6C[scaled_index + 272248225] + 4LL * running_total), 4, 2, (FILE *)(uintptr_t)(file_handle_2));
        ++iteration_count;
        running_total_2 += 3;
        running_total += 2;
      }
      while ( iteration_count < (int)*state_address );
      saved_chdir_result = chdir_result_2;
    }
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index + 272248227]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
    free(*(void **)&dword_140404A6C[scaled_index + 272248229]);
    iteration_count_2 = 0;
    *(_QWORD *)&dword_140404A6C[scaled_index + 272248229] = sr_path_malloc((int)(12 * dword_140404A6C[scaled_index + 272248227]));
    if ( (int)dword_140404A6C[scaled_index + 272248227] > 0 )
    {
      running_total_3 = 0;
      do
      {
        fread_sr((void *)(uintptr_t)(*(_QWORD *)&dword_140404A6C[scaled_index + 272248229] + 4LL * running_total_3), 4, 3, (FILE *)(uintptr_t)(file_handle_2));
        ++iteration_count_2;
        running_total_3 += 3;
      }
      while ( iteration_count_2 < (int)dword_140404A6C[scaled_index + 272248227] );
    }
    crt_fclose(file_handle_2);
    LODWORD(packed_word_bits) = input_value;
  }
  if ( !chdir_result )
    crt_chdir("..");
  if ( !saved_chdir_result )
    crt_chdir("..");
  crt_sprintf(FileName, "data/item/%s", (     char *)&dword_140404A6C[50 * (int)packed_word_bits + 272248205]);
  sub_1400EDED0(dword_140404A6C[(int)packed_word_bits + 283830981], FileName, 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef Buffer
#undef chdir_result_2
#undef input_value
#undef FileName
#undef unused_frame_slot_592

//----- (00000001400E7F80) ----------------------------------------------------
__m128i *           sub_1400E7F80(int a1, char *a2)
{
  __int64 packed_word_bits;
  __int64 file_handle;
  signed int iteration_count;
  __int64 file_handle_2;
  __int64 scaled_index;
  signed int iteration_count_2;
  __int64 scaled_index_2;
  __int64 allocated_buffer;
  void *allocation_buffer;
  signed int iteration_count_3;
  int running_total;
  int running_total_2;
  int element_index;
  unsigned int *state_address;
  signed int i;
  int selection_flag;
  signed int iteration_count_4;
  __int64 scaled_index_3;
  __int64 masked_bits;
  __int64 record_byte_offset;
  int state_word;
  unsigned int integer_sum;
  int iteration_count_5;
  unsigned int *state_address_2;
  void *allocation_buffer_2;
  __m128i *allocated_buffer_2;
  unsigned int table_value;
  __m128i *result;
  float *record_byte_offset_2;
  float combined_products;
  _DWORD Buffer; // native four-byte header object

  packed_word_bits = a1;
  file_handle = crt_fopen(a2, "rb");
  iteration_count = 0;
  file_handle_2 = file_handle;
  if ( file_handle )
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(file_handle));
    scaled_index = 1268 * packed_word_bits;
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[1268 * packed_word_bits + 278522403]), 4, 3, (FILE *)(uintptr_t)(file_handle_2));
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[1268 * packed_word_bits + 278522406]), 4, 3, (FILE *)(uintptr_t)(file_handle_2));
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[1268 * packed_word_bits + 278522409]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
    iteration_count_2 = 0;
    if ( (int)dword_140404A6C[1268 * packed_word_bits + 278522409] > 0 )
    {
      do
      {
        scaled_index_2 = 4 * (317 * packed_word_bits + iteration_count_2);
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index_2 + 278522410]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index_2 + 278522411]), 4, 3, (FILE *)(uintptr_t)(file_handle_2));
        ++iteration_count_2;
      }
      while ( iteration_count_2 < (int)dword_140404A6C[1268 * packed_word_bits + 278522409] );
      LODWORD(packed_word_bits) = a1;
    }
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index + 278522541]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
    free(*(void **)&dword_140404A6C[scaled_index + 278522543]);
    allocated_buffer = sr_path_malloc((int)(12 * dword_140404A6C[scaled_index + 278522541]));
    allocation_buffer = *(void **)&dword_140404A6C[scaled_index + 278522545];
    *(_QWORD *)&dword_140404A6C[scaled_index + 278522543] = allocated_buffer;
    free(allocation_buffer);
    iteration_count_3 = 0;
    *(_QWORD *)&dword_140404A6C[scaled_index + 278522545] = sr_path_malloc((int)(8 * dword_140404A6C[scaled_index + 278522541]));
    if ( (int)dword_140404A6C[scaled_index + 278522541] > 0 )
    {
      running_total = 0;
      running_total_2 = 0;
      do
      {
        fread_sr((void *)(uintptr_t)(*(_QWORD *)&dword_140404A6C[scaled_index + 278522543] + 4LL * running_total_2), 4, 3, (FILE *)(uintptr_t)(file_handle_2));
        fread_sr((void *)(uintptr_t)(*(_QWORD *)&dword_140404A6C[scaled_index + 278522545] + 4LL * running_total), 4, 2, (FILE *)(uintptr_t)(file_handle_2));
        ++iteration_count_3;
        running_total_2 += 3;
        running_total += 2;
      }
      while ( iteration_count_3 < (int)dword_140404A6C[scaled_index + 278522541] );
      LODWORD(packed_word_bits) = a1;
    }
    fread_sr((void *)(uintptr_t)(&g_16A94BDAC), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
    element_index = 0;
    if ( (int)g_16A94BDAC > 0 )
    {
      state_address = &g_16A94BDB0;
      do
      {
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[5 * element_index + 177544401]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
        for ( i = 0; i < (int)*state_address; ++i )
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[5 * element_index + 177544402 + i]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
        ++element_index;
        state_address += 5;
      }
      while ( element_index < (int)g_16A94BDAC );
    }
    crt_fclose(file_handle_2);
  }
  selection_flag = 0;
  iteration_count_4 = 0;
  scaled_index_3 = 1268LL * (int)packed_word_bits;
  if ( (int)dword_140404A6C[scaled_index_3 + 278522541] <= 0 )
  {
    state_word = g_16A94BDAC;
  }
  else
  {
    masked_bits = *(_QWORD *)&dword_140404A6C[scaled_index_3 + 278522543];
    record_byte_offset = 0;
    do
    {
      *(float *)(record_byte_offset + masked_bits) = *(float *)(record_byte_offset + masked_bits) - *(float *)&dword_140404A6C[scaled_index_3 + 278522403];
      *(float *)(record_byte_offset + masked_bits + 4) = *(float *)(record_byte_offset + masked_bits + 4) - *(float *)&dword_140404A6C[scaled_index_3 + 278522404];
      *(float *)(record_byte_offset + masked_bits + 8) = *(float *)(record_byte_offset + masked_bits + 8) - *(float *)&dword_140404A6C[scaled_index_3 + 278522405];
      masked_bits = *(_QWORD *)&dword_140404A6C[scaled_index_3 + 278522543];
      if ( (float)((float)((float)(*(float *)(record_byte_offset + masked_bits) * *(float *)(record_byte_offset + masked_bits))
                         + (float)(*(float *)(record_byte_offset + masked_bits + 4) * *(float *)(record_byte_offset + masked_bits + 4)))
                 + (float)(*(float *)(record_byte_offset + masked_bits + 8) * *(float *)(record_byte_offset + masked_bits + 8))) > 1.0 )
        selection_flag = 1;
      ++iteration_count_4;
      record_byte_offset += 12;
    }
    while ( iteration_count_4 < (int)dword_140404A6C[scaled_index_3 + 278522541] );
    state_word = g_16A94BDAC;
    if ( selection_flag )
      state_word = 0;
    g_16A94BDAC = state_word;
  }
  integer_sum = 0;
  mesh_triangle_count = 0;
  iteration_count_5 = 0;
  if ( state_word > 0 )
  {
    state_address_2 = &g_16A94BDB4;
    do
    {
      dword_140404A6C[3 * integer_sum + 177495248] = *state_address_2;
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = state_address_2[1];
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = state_address_2[2];
      integer_sum = ++mesh_triangle_count;
      if ( *(state_address_2 - 1) == 4 )
      {
        dword_140404A6C[3 * integer_sum + 177495248] = *state_address_2;
        dword_140404A6C[3 * mesh_triangle_count + 177495249] = state_address_2[2];
        dword_140404A6C[3 * mesh_triangle_count + 177495250] = state_address_2[3];
        integer_sum = ++mesh_triangle_count;
      }
      ++iteration_count_5;
      state_address_2 += 5;
    }
    while ( iteration_count_5 < (int)g_16A94BDAC );
  }
  allocation_buffer_2 = *(void **)&dword_140404A6C[scaled_index_3 + 278522549];
  dword_140404A6C[scaled_index_3 + 278522547] = integer_sum;
  free(allocation_buffer_2);
  allocated_buffer_2 = (__m128i *)sr_path_malloc((int)(12 * dword_140404A6C[scaled_index_3 + 278522547]));
  table_value = dword_140404A6C[scaled_index_3 + 278522547];
  *(_QWORD *)&dword_140404A6C[scaled_index_3 + 278522549] = (uint64)(uintptr_t)(allocated_buffer_2);
  result = crt_memcpy(allocated_buffer_2, (     __m128i *)&g_16A91BDAC, (int)(12 * table_value));
  if ( (int)dword_140404A6C[scaled_index_3 + 278522409] > 0 )
  {
    record_byte_offset_2 = (float *)&dword_140404A6C[scaled_index_3 + 278522413];
    do
    {
      combined_products = *(record_byte_offset_2 - 2) - *(float *)&dword_140404A6C[scaled_index_3 + 278522403];
      *(record_byte_offset_2 - 2) = combined_products;
      *(record_byte_offset_2 - 1) = *(record_byte_offset_2 - 1) - *(float *)&dword_140404A6C[scaled_index_3 + 278522404];
      *record_byte_offset_2 = *record_byte_offset_2 - *(float *)&dword_140404A6C[scaled_index_3 + 278522405];
      result = (__m128i *)*((unsigned int *)record_byte_offset_2 - 3);
      if ( !(_DWORD)result )
      {
        *(float *)&dword_140404A6C[scaled_index_3 + 278521313] = combined_products;
        dword_140404A6C[scaled_index_3 + 278521314] = *((_DWORD *)record_byte_offset_2 - 1);
        dword_140404A6C[scaled_index_3 + 278521315] = *(_DWORD *)record_byte_offset_2;
        result = (__m128i *)*((unsigned int *)record_byte_offset_2 - 3);
      }
      if ( (_DWORD)result == 1 )
      {
        dword_140404A6C[scaled_index_3 + 278521317] = *((_DWORD *)record_byte_offset_2 - 2);
        dword_140404A6C[scaled_index_3 + 278521318] = *((_DWORD *)record_byte_offset_2 - 1);
        dword_140404A6C[scaled_index_3 + 278521319] = *(_DWORD *)record_byte_offset_2;
        result = (__m128i *)*((unsigned int *)record_byte_offset_2 - 3);
      }
      if ( (_DWORD)result == 2 )
      {
        dword_140404A6C[scaled_index_3 + 278521320] = *((_DWORD *)record_byte_offset_2 - 2);
        dword_140404A6C[scaled_index_3 + 278521321] = *((_DWORD *)record_byte_offset_2 - 1);
        dword_140404A6C[scaled_index_3 + 278521322] = *(_DWORD *)record_byte_offset_2;
        result = (__m128i *)*((unsigned int *)record_byte_offset_2 - 3);
      }
      if ( (_DWORD)result == 4 )
      {
        dword_140404A6C[scaled_index_3 + 278521323] = *((_DWORD *)record_byte_offset_2 - 2);
        dword_140404A6C[scaled_index_3 + 278521324] = *((_DWORD *)record_byte_offset_2 - 1);
        result = (__m128i *)*(unsigned int *)record_byte_offset_2;
        dword_140404A6C[scaled_index_3 + 278521325] = (unsigned int)result;
      }
      ++iteration_count;
      record_byte_offset_2 += 4;
    }
    while ( iteration_count < (int)dword_140404A6C[scaled_index_3 + 278522409] );
  }
  return result;
}

// 1400E8E0A: conditional instruction was optimized away because r8.8 is in (1..F|<0)
// 1400E8F0C: conditional instruction was optimized away because r8.8 is in (1..F|<0)

//----- (00000001400E9A60) ----------------------------------------------------
void            sub_1400E9A60(int a1, int a2,      char *a3)
{
  int float_word;
  int input_value;
  char *destination_text;
  bool unused_local;
  char *destination_text_2;
  __int64 file_handle;
  int element_index;
  __int64 file_handle_2;
  int element_index_2;
  int element_index_3;
  unsigned int *state_address;
  __int64 scaled_index;
  bool comparison_result;
  int cached_mesh_vertex_count;
  int cached_selection_flag;
  int cached_callee_output_word;
  __int64 lookup_index;
  __int64 running_total;
  signed int state_word;
  __int64 running_total_2;
  signed int state_word_2;
  __int64 remaining_count;
  signed int state_word_3;
  signed int state_word_4;
  signed int state_word_5;
  signed int state_word_6;
  unsigned int state_word_7;
  unsigned int state_word_8;
  unsigned int float_word_2;
  unsigned int float_word_3;
  float *state_address_2;
  float weighted_sum;
  float combined_products;
  float component_delta;
  float component_delta_2;
  float saved_weighted_sum;
  float product_difference;
  float weighted_sum_2;
  float weighted_sum_3;
  int state_word_9;
  unsigned int integer_sum;
  unsigned int *state_address_3;
  int iteration_count;
  int *state_address_4;
  int scaled_index_2;
  __int64 loaded_word;
  __int64 table_value;
  __int64 table_value_2;
  unsigned int scaled_index_3;
  unsigned int scaled_index_4;
  __int64 loaded_word_2;
  __int64 table_value_3;
  __int64 table_value_4;
  __int64 lookup_index_2;
  __int64 table_value_5;
  signed int table_value_6;
  __int64 remaining_count_2;
  unsigned int *state_address_5;
  __int64 scaled_index_5;
  __int64 scaled_index_6;
  unsigned int table_value_7;
  __int64 scaled_index_7;
  __int64 remaining_count_3;
  int scaled_index_8;
  __int64 iteration_count_2;
  unsigned int *buffer_cursor;
  __int64 remaining_count_4;
  __int64 scaled_index_9;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E9A60[160];
#define unused_frame_slot_0 (*(_BYTE (*)[32])(void *)(sr_frame_1400E9A60 + 0)) /* [rsp+0h] */
#define cached_input_value (*(__int64 (*))(void *)(sr_frame_1400E9A60 + 32)) /* [rsp+20h] */
#define callee_output_word (*(int (*))(void *)(sr_frame_1400E9A60 + 40)) /* [rsp+28h] */
#define input_value_2 (*(int (*))(void *)(sr_frame_1400E9A60 + 44)) /* [rsp+2Ch] */
#define input_value_3 (*(int (*))(void *)(sr_frame_1400E9A60 + 48)) /* [rsp+30h] */
#define cached_callee_output_word_2 (*(int (*))(void *)(sr_frame_1400E9A60 + 52)) /* [rsp+34h] */
#define masked_bits (*(__int64 (*))(void *)(sr_frame_1400E9A60 + 56)) /* [rsp+38h] */
#define selection_flag (*(__int64 (*))(void *)(sr_frame_1400E9A60 + 64)) /* [rsp+40h] */
#define left_text (*(char (*)[8])(void *)(sr_frame_1400E9A60 + 72)) /* [rsp+48h] */
#define destination_text_3 (*(char (*)[64])(void *)(sr_frame_1400E9A60 + 80)) /* [rsp+50h] */
#define unused_frame_slot_144 (*(__int64 (*))(void *)(sr_frame_1400E9A60 + 144)) /* [rsp+90h] */

  float_word = a1;
  input_value = a2;
  input_value_3 = a1;
  destination_text = destination_text_3;
  input_value_2 = a2;
  strcpy(destination_text_3, "data/model/");
  while ( *destination_text )
    ++destination_text;
  strcpy(destination_text, a3);
  destination_text_2 = destination_text_3;
  while ( *destination_text_2 )
    ++destination_text_2;
  strcpy(destination_text_2, ".cmo");
  file_handle = crt_fopen(destination_text_3, "rb");
  element_index = 0;
  file_handle_2 = file_handle;
  selection_flag = 1;
  if ( file_handle )
  {
    (*(void (           **)(char *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(left_text, 1, 4, file_handle);
    left_text[4] = 0;
    if ( strcmp_sr(left_text, off_1402B2C88)
      || ((*(void (           **)(int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(&callee_output_word, 4, 1, file_handle_2),
          (unsigned int)(callee_output_word - 1) > 2) )
    {
      crt_fclose(file_handle_2);
      return;
    }
    (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
      &g_169CBB160,
      4,
      1,
      file_handle_2);
    element_index_2 = 0;
    if ( (int)g_169CBB160 > 0 )
    {
      do
      {
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          &dword_140404A6C[2 * element_index_2 + 174250430 + element_index_2],
          4,
          3,
          file_handle_2);
        if ( callee_output_word >= 3 )
          (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
            &dword_140404A6C[2 * element_index_2 + 174348734],
            4,
            2,
            file_handle_2);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          &dword_140404A6C[element_index_2++ + 174512574],
          4,
          1,
          file_handle_2);
      }
      while ( element_index_2 < (int)g_169CBB160 );
      element_index = 0;
    }
    (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
      &g_169DDB164,
      4,
      1,
      file_handle_2);
    element_index_3 = 0;
    if ( (int)g_169DDB164 > 0 )
    {
      state_address = &g_169DDB168;
      do
      {
        scaled_index = 11LL * element_index_3;
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          &dword_140404A6C[scaled_index + 174545343],
          4,
          1,
          file_handle_2);
        if ( (int)*state_address > 0 )
        {
          do
            (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              &dword_140404A6C[11 * element_index_3 + 174545344 + element_index++],
              4,
              1,
              file_handle_2);
          while ( element_index < (int)*state_address );
        }
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          &dword_140404A6C[scaled_index + 174545352],
          4,
          1,
          file_handle_2);
        element_index = 0;
        comparison_result = callee_output_word < 2;
        state_address[10] = 0;
        if ( !comparison_result )
          (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
            &dword_140404A6C[scaled_index + 174545353],
            4,
            1,
            file_handle_2);
        ++element_index_3;
        state_address += 11;
      }
      while ( element_index_3 < (int)g_169DDB164 );
      float_word = input_value_3;
      input_value = input_value_2;
    }
    (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
      &g_169F3B168,
      4,
      1,
      file_handle_2);
    if ( (int)g_169F3B168 > 0 )
    {
      do
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          &dword_140404A6C[element_index++ + 174905792],
          4,
          1,
          file_handle_2);
      while ( element_index < (int)g_169F3B168 );
    }
    crt_fclose(file_handle_2);
  }
  cached_mesh_vertex_count = g_169CBB160;
  cached_selection_flag = 0;
  cached_callee_output_word = callee_output_word;
  lookup_index = input_value;
  mesh_vertex_count = g_169CBB160;
  cached_input_value = input_value;
  cached_callee_output_word_2 = callee_output_word;
  if ( (int)g_169CBB160 <= 0 )
  {
    state_word_9 = g_169DDB164;
  }
  else
  {
    running_total = 0;
    state_word = g_183EBC2C4;
    running_total_2 = 0;
    state_word_2 = g_183EBC300;
    remaining_count = g_169CBB160;
    state_word_3 = g_183EBC340;
    state_word_4 = g_183EBC2C0;
    state_word_5 = g_183EBC280;
    state_word_6 = g_183EBC244;
    state_word_7 = g_183EBB728;
    state_word_8 = g_183EBB6D0;
    masked_bits = *(_QWORD *)&g_183EBB72C;
    do
    {
      float_word_2 = dword_140404A6C[running_total + 174250430];
      float_word_3 = dword_140404A6C[running_total + 174250431];
      state_address_2 = (float *)&dword_140404A6C[running_total + 177167569];
      weighted_sum = *(float *)&dword_140404A6C[running_total + 174250432];
      if ( cached_input_value == -1 )
      {
        dword_140404A6C[running_total + 177167567] = float_word_2;
        component_delta_2 = *(float *)&float_word_3;
        dword_140404A6C[running_total + 177167568] = float_word_3;
        saved_weighted_sum = weighted_sum;
        *state_address_2 = weighted_sum;
        if ( float_word == state_word_7 )
        {
          saved_weighted_sum = weighted_sum * 0.125;
          *state_address_2 = weighted_sum * 0.125;
          *(float *)&dword_140404A6C[running_total + 177167567] = *(float *)&float_word_2 * 0.125;
          component_delta_2 = *(float *)&float_word_3 * 0.125;
          *(float *)&dword_140404A6C[running_total + 177167568] = *(float *)&float_word_3 * 0.125;
        }
        if ( float_word == (_DWORD)masked_bits )
        {
          component_delta_2 = *(float *)&float_word_3 * 0.09375;
          saved_weighted_sum = weighted_sum * 0.09375;
          *(float *)&dword_140404A6C[running_total + 177167568] = *(float *)&float_word_3 * 0.09375;
          *(float *)&dword_140404A6C[running_total + 177167567] = *(float *)&float_word_2 * 0.09375;
          *state_address_2 = weighted_sum * 0.09375;
        }
        product_difference = saved_weighted_sum;
        if ( float_word >= state_word_6 )
        {
          if ( float_word <= state_word_4 )
          {
            product_difference = *state_address_2;
            component_delta_2 = component_delta_2 - 0.0234375;
            *(float *)&dword_140404A6C[running_total + 177167568] = component_delta_2;
          }
          if ( float_word <= state_word_5 )
          {
            component_delta_2 = component_delta_2 - 0.03125;
            *(float *)&dword_140404A6C[running_total + 177167568] = component_delta_2;
          }
        }
        if ( float_word >= state_word )
        {
          if ( float_word <= state_word_3 )
          {
            component_delta_2 = component_delta_2 - 0.0234375;
            *(float *)&dword_140404A6C[running_total + 177167568] = component_delta_2;
          }
          if ( float_word <= state_word_2 )
            *(float *)&dword_140404A6C[running_total + 177167568] = component_delta_2 - 0.03125;
        }
        if ( float_word == state_word_8 )
          product_difference = *state_address_2 - 0.03125;
        component_delta = -product_difference;
        combined_products = -*(float *)&dword_140404A6C[running_total + 177167567];
      }
      else
      {
        combined_products = *(float *)&float_word_2 * 0.375;
        *(float *)&dword_140404A6C[running_total + 177167568] = *(float *)&float_word_3 * 0.375;
        component_delta = weighted_sum * 0.375;
      }
      *(float *)&dword_140404A6C[running_total + 177167567] = combined_products;
      lookup_index = cached_input_value;
      *state_address_2 = component_delta;
      weighted_sum_2 = *(float *)&dword_140404A6C[running_total + 177167568];
      weighted_sum_3 = *(float *)&dword_140404A6C[running_total + 177167569];
      *(_QWORD *)&dword_140404A6C[running_total_2 + 177216719] = 0;
      if ( (float)((float)((float)(weighted_sum_2 * weighted_sum_2) + (float)(combined_products * combined_products)) + (float)(weighted_sum_3 * weighted_sum_3)) > 1.0 )
        cached_selection_flag = selection_flag;
      if ( cached_callee_output_word_2 >= 3 )
      {
        dword_140404A6C[running_total_2 + 177216719] = dword_140404A6C[running_total_2 + 174348734];
        dword_140404A6C[running_total_2 + 177216720] = dword_140404A6C[running_total_2 + 174348735];
        lookup_index = cached_input_value;
      }
      running_total += 3;
      running_total_2 += 2;
      --remaining_count;
    }
    while ( remaining_count );
    state_word_9 = g_169DDB164;
    cached_mesh_vertex_count = mesh_vertex_count;
    cached_callee_output_word = cached_callee_output_word_2;
    if ( cached_selection_flag )
      state_word_9 = 0;
    input_value = input_value_2;
    g_169DDB164 = state_word_9;
  }
  mesh_triangle_count = 0;
  integer_sum = 0;
  state_address_3 = &g_169DDB16C;
  iteration_count = 0;
  if ( state_word_9 > 0 )
  {
    state_address_4 = (int *)&g_169DDB16C;
    while ( 1 )
    {
      scaled_index_2 = *(state_address_4 - 1);
      if ( scaled_index_2 == 3 )
      {
        loaded_word = *state_address_4;
        table_value = state_address_4[1];
        table_value_2 = state_address_4[2];
        dword_140404A6C[3 * integer_sum + 177495248] = loaded_word;
        dword_140404A6C[3 * mesh_triangle_count + 177495249] = table_value;
        dword_140404A6C[3 * mesh_triangle_count + 177495250] = table_value_2;
        dword_140404A6C[6 * mesh_triangle_count + 178011345] = 1065353216;
        dword_140404A6C[6 * mesh_triangle_count + 178011346] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011347] = 1065353216;
        dword_140404A6C[6 * mesh_triangle_count + 178011348] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011349] = 1065353216;
        dword_140404A6C[6 * mesh_triangle_count + 178011350] = 0;
        if ( cached_callee_output_word >= 3 )
        {
          dword_140404A6C[6 * mesh_triangle_count + 178011345] = dword_140404A6C[2 * loaded_word + 174348734];
          dword_140404A6C[6 * mesh_triangle_count + 178011346] = dword_140404A6C[2 * loaded_word + 174348735];
          dword_140404A6C[6 * mesh_triangle_count + 178011347] = dword_140404A6C[2 * table_value + 174348734];
          dword_140404A6C[6 * mesh_triangle_count + 178011348] = dword_140404A6C[2 * table_value + 174348735];
          dword_140404A6C[6 * mesh_triangle_count + 178011349] = dword_140404A6C[2 * table_value_2 + 174348734];
          scaled_index_3 = 3 * mesh_triangle_count;
          scaled_index_4 = dword_140404A6C[2 * table_value_2 + 174348735];
LABEL_66:
          dword_140404A6C[2 * scaled_index_3 + 178011350] = scaled_index_4;
        }
      }
      else
      {
        if ( scaled_index_2 != 4 || state_address_4[9] )
          goto LABEL_68;
        loaded_word_2 = *state_address_4;
        table_value_3 = state_address_4[1];
        table_value_4 = state_address_4[2];
        dword_140404A6C[3 * integer_sum + 177495248] = loaded_word_2;
        dword_140404A6C[3 * mesh_triangle_count + 177495249] = table_value_3;
        dword_140404A6C[3 * mesh_triangle_count + 177495250] = table_value_4;
        dword_140404A6C[6 * mesh_triangle_count + 178011345] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011346] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011347] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011348] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011349] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011350] = 0;
        if ( cached_callee_output_word >= 3 )
        {
          dword_140404A6C[6 * mesh_triangle_count + 178011345] = dword_140404A6C[2 * loaded_word_2 + 174348734];
          dword_140404A6C[6 * mesh_triangle_count + 178011346] = dword_140404A6C[2 * loaded_word_2 + 174348735];
          dword_140404A6C[6 * mesh_triangle_count + 178011347] = dword_140404A6C[2 * table_value_3 + 174348734];
          dword_140404A6C[6 * mesh_triangle_count + 178011348] = dword_140404A6C[2 * table_value_3 + 174348735];
          dword_140404A6C[6 * mesh_triangle_count + 178011349] = dword_140404A6C[2 * table_value_4 + 174348734];
          dword_140404A6C[6 * mesh_triangle_count + 178011350] = dword_140404A6C[2 * table_value_4 + 174348735];
        }
        lookup_index_2 = table_value_4;
        ++mesh_triangle_count;
        dword_140404A6C[3 * mesh_triangle_count + 177495248] = loaded_word_2;
        dword_140404A6C[3 * mesh_triangle_count + 177495249] = table_value_4;
        table_value_5 = state_address_4[3];
        dword_140404A6C[3 * mesh_triangle_count + 177495250] = table_value_5;
        dword_140404A6C[6 * mesh_triangle_count + 178011345] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011346] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011347] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011348] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011349] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011350] = 0;
        if ( cached_callee_output_word >= 3 )
        {
          dword_140404A6C[6 * mesh_triangle_count + 178011345] = dword_140404A6C[2 * loaded_word_2 + 174348734];
          dword_140404A6C[6 * mesh_triangle_count + 178011346] = dword_140404A6C[2 * loaded_word_2 + 174348735];
          dword_140404A6C[6 * mesh_triangle_count + 178011347] = dword_140404A6C[2 * lookup_index_2 + 174348734];
          dword_140404A6C[6 * mesh_triangle_count + 178011348] = dword_140404A6C[2 * lookup_index_2 + 174348735];
          dword_140404A6C[6 * mesh_triangle_count + 178011349] = dword_140404A6C[2 * table_value_5 + 174348734];
          scaled_index_3 = 3 * mesh_triangle_count;
          scaled_index_4 = dword_140404A6C[2 * table_value_5 + 174348735];
          goto LABEL_66;
        }
      }
      integer_sum = ++mesh_triangle_count;
LABEL_68:
      ++iteration_count;
      state_address_4 += 11;
      if ( iteration_count >= state_word_9 )
      {
        input_value = input_value_2;
        cached_mesh_vertex_count = mesh_vertex_count;
        lookup_index = input_value_2;
        float_word = input_value_3;
        break;
      }
    }
  }
  if ( input_value != -1 )
  {
    table_value_6 = 0;
    dword_140404A6C[1268 * lookup_index + 278521668] = 0;
    if ( cached_mesh_vertex_count > 0 )
    {
      remaining_count_2 = (unsigned int)cached_mesh_vertex_count;
      state_address_5 = (unsigned int *)&g_16A7DBDB0;
      scaled_index_5 = 1268 * lookup_index;
      do
      {
        state_address_5 += 3;
        scaled_index_6 = scaled_index_5 * 4 + 12LL * table_value_6;
        *(unsigned int *)((char *)&g_182A7E780 + scaled_index_6) = *(state_address_5 - 5);
        *(unsigned int *)((char *)&g_182A7E784 + scaled_index_6) = *(state_address_5 - 4);
        *(unsigned int *)((char *)&g_182A7E788 + scaled_index_6) = *(state_address_5 - 3);
        table_value_6 = dword_140404A6C[scaled_index_5 + 278521668] + 1;
        dword_140404A6C[scaled_index_5 + 278521668] = table_value_6;
        --remaining_count_2;
      }
      while ( remaining_count_2 );
    }
    dword_140404A6C[1268 * lookup_index + 278521861] = 0;
    table_value_7 = 0;
    if ( state_word_9 > 0 )
    {
      scaled_index_7 = 1268 * lookup_index;
      remaining_count_3 = (unsigned int)state_word_9;
      do
      {
        scaled_index_8 = *(state_address_3 - 1);
        iteration_count_2 = 0;
        dword_140404A6C[6 * (int)table_value_7 + 278521863 + scaled_index_7] = scaled_index_8;
        if ( scaled_index_8 > 0 )
        {
          buffer_cursor = state_address_3;
          remaining_count_4 = (unsigned int)scaled_index_8;
          do
          {
            ++buffer_cursor;
            scaled_index_9 = 1268 * lookup_index + iteration_count_2 + 6LL * (int)dword_140404A6C[scaled_index_7 + 278521861];
            ++iteration_count_2;
            dword_140404A6C[scaled_index_9 + 278521864] = *(buffer_cursor - 1);
            --remaining_count_4;
          }
          while ( remaining_count_4 );
        }
        state_address_3 += 11;
        table_value_7 = dword_140404A6C[scaled_index_7 + 278521861] + 1;
        dword_140404A6C[scaled_index_7 + 278521861] = table_value_7;
        --remaining_count_3;
      }
      while ( remaining_count_3 );
      float_word = input_value_3;
    }
  }
  sub_1401449C0(float_word, 1);
  return;
}
#undef unused_frame_slot_0
#undef cached_input_value
#undef callee_output_word
#undef input_value_2
#undef input_value_3
#undef cached_callee_output_word_2
#undef masked_bits
#undef selection_flag
#undef left_text
#undef destination_text_3
#undef unused_frame_slot_144

//----- (00000001400EA7C0) ----------------------------------------------------
void            sub_1400EA7C0(int a1)
{
  int iteration_count;
  signed int i;
  __int64 element_index;
  int iteration_count_2;
  char table_value;
  unsigned int call_result;
  signed int iteration_count_3;
  __int64 element_index_2;
  signed int iteration_count_4;
  char table_value_2;
  unsigned int call_result_2;
  signed int iteration_count_5;
  __int64 element_index_3;
  signed int iteration_count_6;
  char table_value_3;
  __int64 file_handle;
  __int64 file_handle_2;

  if ( a1 )
  {
    file_handle = crt_fopen("debugconfig.txt", "wb");
    file_handle_2 = file_handle;
    if ( file_handle )
    {
      sub_1400920F0(file_handle, "%s%d\r\n", "startposition0=", g_16B2A222C);
      sub_1400920F0(file_handle_2, "%s%d\r\n", "startposition1=", g_16B2A2230);
      sub_1400920F0(file_handle_2, "%s%d\r\n", "startposition2=", g_16B2A2234);
      crt_fclose(file_handle_2);
    }
  }
  else
  {
    g_16B2A222C = 1508;
    g_16B2A2230 = 62;
    g_16B2A2234 = 1472;
    sub_1400ED940("debugconfig.txt");
    iteration_count = g_1862AE020;
    for ( i = g_1862AE024; iteration_count < (int)g_1862AE024; g_1862AE020 = ++iteration_count )
    {
      element_index = 0;
      if ( iteration_count < (int)g_1862AE024 )
      {
        iteration_count_2 = iteration_count;
        do
        {
          table_value = sr_mem_140273b60[element_index];
          if ( !table_value )
            break;
          if ( table_value != *((_BYTE *)&g_1862AE028 + iteration_count_2) )
            break;
          ++iteration_count_2;
          ++element_index;
        }
        while ( iteration_count_2 < (int)g_1862AE024 );
      }
      if ( !sr_mem_140273b60[element_index] )
        break;
    }
    g_1862AE020 = iteration_count + 15;
    if ( iteration_count + 15 < (int)g_1862AE024 )
    {
      call_result = sub_1400A3D70();
      i = g_1862AE024;
      g_16B2A222C = call_result;
    }
    iteration_count_3 = 0;
    for ( g_1862AE020 = 0; iteration_count_3 < i; g_1862AE020 = ++iteration_count_3 )
    {
      element_index_2 = 0;
      if ( iteration_count_3 < i )
      {
        iteration_count_4 = iteration_count_3;
        do
        {
          table_value_2 = sr_mem_140273b70[element_index_2];
          if ( !table_value_2 )
            break;
          if ( table_value_2 != *((_BYTE *)&g_1862AE028 + iteration_count_4) )
            break;
          ++iteration_count_4;
          ++element_index_2;
        }
        while ( iteration_count_4 < i );
      }
      if ( !sr_mem_140273b70[element_index_2] )
        break;
    }
    g_1862AE020 = iteration_count_3 + 15;
    if ( iteration_count_3 + 15 < i )
    {
      call_result_2 = sub_1400A3D70();
      i = g_1862AE024;
      g_16B2A2230 = call_result_2;
    }
    iteration_count_5 = 0;
    for ( g_1862AE020 = 0; iteration_count_5 < i; g_1862AE020 = ++iteration_count_5 )
    {
      element_index_3 = 0;
      if ( iteration_count_5 < i )
      {
        iteration_count_6 = iteration_count_5;
        do
        {
          table_value_3 = sr_mem_140273b80[element_index_3];
          if ( !table_value_3 )
            break;
          if ( table_value_3 != *((_BYTE *)&g_1862AE028 + iteration_count_6) )
            break;
          ++iteration_count_6;
          ++element_index_3;
        }
        while ( iteration_count_6 < i );
      }
      if ( !sr_mem_140273b80[element_index_3] )
        break;
    }
    g_1862AE020 = iteration_count_5 + 15;
    if ( iteration_count_5 + 15 < i )
      g_16B2A2234 = sub_1400A3D70();
    g_1862AE020 = 0;
  }
}

//----- (00000001400EC410) ----------------------------------------------------
double            sub_1400EC410(int a1)
{
  __m128i si128;
  int iteration_count;
  signed int state_word;
  __int64 i;
  __int64 element_index;
  int iteration_count_2;
  char table_value;
  unsigned int call_result;
  signed int iteration_count_3;
  __int64 element_index_2;
  signed int iteration_count_4;
  char table_value_2;
  unsigned int call_result_2;
  signed int iteration_count_5;
  __int64 element_index_3;
  signed int iteration_count_6;
  char table_value_3;
  unsigned int call_result_3;
  signed int iteration_count_7;
  __int64 element_index_4;
  signed int iteration_count_8;
  char table_value_4;
  unsigned int call_result_4;
  signed int iteration_count_9;
  __int64 element_index_5;
  signed int iteration_count_10;
  char table_value_5;
  int state_word_2;
  __int64 file_handle;
  unsigned int state_word_3;

  if ( a1 )
  {
    file_handle = crt_fopen("config_round.txt", "wb");
    i = file_handle;
    if ( !file_handle )
      return *(double *)SR_VEC_LANES(128, si128, i64);
    sub_1400920F0(file_handle, "%s%d\r\n", "roundtime=", g_183F7A5AC);
    sub_1400920F0(i, "%s%d\r\n", "startcash=", g_183F7A5B0);
    sub_1400920F0(i, "%s%d\r\n", "weekly=", g_183F7A5B4);
    sub_1400920F0(i, "%s%d\r\n", "bonusratio=", g_183F7A5B8);
    sub_1400920F0(i, "%s%d\r\n", "teamdamage=", g_183F7A5BC);
    state_word_2 = g_183F7A5BC;
  }
  else
  {
    si128 = _mm_load_si128((     __m128i *)&xmmword_140278EC0);
    *(__m128i_u *)&g_183F7A5AC = si128;
    g_183F7A5BC = 50;
    sub_1400ED940("config_round.txt");
    iteration_count = g_1862AE020;
    state_word = g_1862AE024;
    for ( i = 0; iteration_count < (int)g_1862AE024; g_1862AE020 = ++iteration_count )
    {
      element_index = 0;
      if ( iteration_count < (int)g_1862AE024 )
      {
        iteration_count_2 = iteration_count;
        do
        {
          table_value = sr_mem_140276c18[element_index];
          if ( !table_value )
            break;
          if ( table_value != *((_BYTE *)&g_1862AE028 + iteration_count_2) )
            break;
          ++iteration_count_2;
          ++element_index;
        }
        while ( iteration_count_2 < (int)g_1862AE024 );
      }
      if ( !sr_mem_140276c18[element_index] )
        break;
    }
    g_1862AE020 = iteration_count + 10;
    if ( iteration_count + 10 < (int)g_1862AE024 )
    {
      call_result = sub_1400A3D70();
      state_word = g_1862AE024;
      g_183F7A5AC = call_result;
    }
    iteration_count_3 = 0;
    for ( g_1862AE020 = 0; iteration_count_3 < state_word; g_1862AE020 = ++iteration_count_3 )
    {
      element_index_2 = 0;
      if ( iteration_count_3 < state_word )
      {
        iteration_count_4 = iteration_count_3;
        do
        {
          table_value_2 = sr_mem_140276e60[element_index_2];
          if ( !table_value_2 )
            break;
          if ( table_value_2 != *((_BYTE *)&g_1862AE028 + iteration_count_4) )
            break;
          ++iteration_count_4;
          ++element_index_2;
        }
        while ( iteration_count_4 < state_word );
      }
      if ( !sr_mem_140276e60[element_index_2] )
        break;
    }
    g_1862AE020 = iteration_count_3 + 10;
    if ( iteration_count_3 + 10 < state_word )
    {
      call_result_2 = sub_1400A3D70();
      state_word = g_1862AE024;
      g_183F7A5B0 = call_result_2;
    }
    iteration_count_5 = 0;
    for ( g_1862AE020 = 0; iteration_count_5 < state_word; g_1862AE020 = ++iteration_count_5 )
    {
      element_index_3 = 0;
      if ( iteration_count_5 < state_word )
      {
        iteration_count_6 = iteration_count_5;
        do
        {
          table_value_3 = sr_mem_140276eb8[element_index_3];
          if ( !table_value_3 )
            break;
          if ( table_value_3 != *((_BYTE *)&g_1862AE028 + iteration_count_6) )
            break;
          ++iteration_count_6;
          ++element_index_3;
        }
        while ( iteration_count_6 < state_word );
      }
      if ( !sr_mem_140276eb8[element_index_3] )
        break;
    }
    g_1862AE020 = iteration_count_5 + 7;
    if ( iteration_count_5 + 7 < state_word )
    {
      call_result_3 = sub_1400A3D70();
      state_word = g_1862AE024;
      g_183F7A5B4 = call_result_3;
    }
    iteration_count_7 = 0;
    for ( g_1862AE020 = 0; iteration_count_7 < state_word; g_1862AE020 = ++iteration_count_7 )
    {
      element_index_4 = 0;
      if ( iteration_count_7 < state_word )
      {
        iteration_count_8 = iteration_count_7;
        do
        {
          table_value_4 = sr_mem_140276ec0[element_index_4];
          if ( !table_value_4 )
            break;
          if ( table_value_4 != *((_BYTE *)&g_1862AE028 + iteration_count_8) )
            break;
          ++iteration_count_8;
          ++element_index_4;
        }
        while ( iteration_count_8 < state_word );
      }
      if ( !sr_mem_140276ec0[element_index_4] )
        break;
    }
    g_1862AE020 = iteration_count_7 + 11;
    if ( iteration_count_7 + 11 < state_word )
    {
      call_result_4 = sub_1400A3D70();
      state_word = g_1862AE024;
      g_183F7A5B8 = call_result_4;
    }
    iteration_count_9 = 0;
    for ( g_1862AE020 = 0; iteration_count_9 < state_word; g_1862AE020 = ++iteration_count_9 )
    {
      element_index_5 = 0;
      if ( iteration_count_9 < state_word )
      {
        iteration_count_10 = iteration_count_9;
        do
        {
          table_value_5 = sr_mem_140276ed0[element_index_5];
          if ( !table_value_5 )
            break;
          if ( table_value_5 != *((_BYTE *)&g_1862AE028 + iteration_count_10) )
            break;
          ++iteration_count_10;
          ++element_index_5;
        }
        while ( iteration_count_10 < state_word );
      }
      if ( !sr_mem_140276ed0[element_index_5] )
        break;
    }
    g_1862AE020 = iteration_count_9 + 11;
    if ( iteration_count_9 + 11 >= state_word )
      state_word_2 = g_183F7A5BC;
    else
      state_word_2 = sub_1400A3D70();
    g_1862AE020 = 0;
  }
  if ( (int)g_183F7A5AC >= 1 )
  {
    state_word_3 = g_183F7A5AC;
    if ( (int)g_183F7A5AC > 60 )
      state_word_3 = 60;
    g_183F7A5AC = state_word_3;
  }
  else
  {
    g_183F7A5AC = 1;
  }
  if ( state_word_2 >= 0 )
  {
    if ( state_word_2 > 200 )
      state_word_2 = 200;
    g_183F7A5BC = state_word_2;
  }
  else
  {
    g_183F7A5BC = 0;
  }
  if ( a1 )
    crt_fclose(i);
  return *(double *)SR_VEC_LANES(128, si128, i64);
}

//----- (00000001400EC7E0) ----------------------------------------------------
double            sub_1400EC7E0(int a1)
{
  __m128i si128;
  int iteration_count;
  signed int state_word;
  __int64 i;
  __int64 element_index;
  int iteration_count_2;
  char table_value;
  unsigned int call_result;
  signed int iteration_count_3;
  __int64 element_index_2;
  signed int iteration_count_4;
  char table_value_2;
  unsigned int call_result_2;
  signed int iteration_count_5;
  __int64 element_index_3;
  signed int iteration_count_6;
  char table_value_3;
  unsigned int call_result_3;
  signed int iteration_count_7;
  __int64 element_index_4;
  signed int iteration_count_8;
  char table_value_4;
  unsigned int call_result_4;
  signed int iteration_count_9;
  __int64 element_index_5;
  signed int iteration_count_10;
  char table_value_5;
  unsigned int call_result_5;
  signed int iteration_count_11;
  __int64 element_index_6;
  signed int iteration_count_12;
  char table_value_6;
  __int64 file_handle;
  unsigned int state_word_2;
  unsigned int state_word_3;

  if ( a1 )
  {
    file_handle = crt_fopen("config_versus.txt", "wb");
    i = file_handle;
    if ( !file_handle )
      return *(double *)SR_VEC_LANES(128, si128, i64);
    sub_1400920F0(file_handle, "%s%d\r\n", "allowrespawn=", g_183F7A5F8);
    sub_1400920F0(i, "%s%d\r\n", "startcash=", g_183F7A5FC);
    sub_1400920F0(i, "%s%d\r\n", "roundtime=", g_183F7A600);
    sub_1400920F0(i, "%s%d\r\n", "movedelay=", g_183F7A604);
    sub_1400920F0(i, "%s%d\r\n", "bonusratio=", g_183F7A608);
    sub_1400920F0(i, "%s%d\r\n", "teamdamage=", g_183F7A60C);
  }
  else
  {
    si128 = _mm_load_si128((     __m128i *)&xmmword_140278E10);
    strcpy((char *)&g_183F7A614, "versus");
    g_183F7A654 = 0x32737573726576LL;
    _mm_storeu_si128((__m128i *)(void *)&g_183F7A5F8, si128);
    g_183F7A608 = 1;
    g_183F7A60C = 50;
    sub_1400ED940("config_versus.txt");
    iteration_count = g_1862AE020;
    state_word = g_1862AE024;
    for ( i = 0; iteration_count < (int)g_1862AE024; g_1862AE020 = ++iteration_count )
    {
      element_index = 0;
      if ( iteration_count < (int)g_1862AE024 )
      {
        iteration_count_2 = iteration_count;
        do
        {
          table_value = sr_mem_140276ef8[element_index];
          if ( !table_value )
            break;
          if ( table_value != *((_BYTE *)&g_1862AE028 + iteration_count_2) )
            break;
          ++iteration_count_2;
          ++element_index;
        }
        while ( iteration_count_2 < (int)g_1862AE024 );
      }
      if ( !sr_mem_140276ef8[element_index] )
        break;
    }
    g_1862AE020 = iteration_count + 13;
    if ( iteration_count + 13 < (int)g_1862AE024 )
    {
      call_result = sub_1400A3D70();
      state_word = g_1862AE024;
      g_183F7A5F8 = call_result;
    }
    iteration_count_3 = 0;
    for ( g_1862AE020 = 0; iteration_count_3 < state_word; g_1862AE020 = ++iteration_count_3 )
    {
      element_index_2 = 0;
      if ( iteration_count_3 < state_word )
      {
        iteration_count_4 = iteration_count_3;
        do
        {
          table_value_2 = sr_mem_140276e60[element_index_2];
          if ( !table_value_2 )
            break;
          if ( table_value_2 != *((_BYTE *)&g_1862AE028 + iteration_count_4) )
            break;
          ++iteration_count_4;
          ++element_index_2;
        }
        while ( iteration_count_4 < state_word );
      }
      if ( !sr_mem_140276e60[element_index_2] )
        break;
    }
    g_1862AE020 = iteration_count_3 + 10;
    if ( iteration_count_3 + 10 < state_word )
    {
      call_result_2 = sub_1400A3D70();
      state_word = g_1862AE024;
      g_183F7A5FC = call_result_2;
    }
    iteration_count_5 = 0;
    for ( g_1862AE020 = 0; iteration_count_5 < state_word; g_1862AE020 = ++iteration_count_5 )
    {
      element_index_3 = 0;
      if ( iteration_count_5 < state_word )
      {
        iteration_count_6 = iteration_count_5;
        do
        {
          table_value_3 = sr_mem_140276c18[element_index_3];
          if ( !table_value_3 )
            break;
          if ( table_value_3 != *((_BYTE *)&g_1862AE028 + iteration_count_6) )
            break;
          ++iteration_count_6;
          ++element_index_3;
        }
        while ( iteration_count_6 < state_word );
      }
      if ( !sr_mem_140276c18[element_index_3] )
        break;
    }
    g_1862AE020 = iteration_count_5 + 10;
    if ( iteration_count_5 + 10 < state_word )
    {
      call_result_3 = sub_1400A3D70();
      state_word = g_1862AE024;
      g_183F7A600 = call_result_3;
    }
    iteration_count_7 = 0;
    for ( g_1862AE020 = 0; iteration_count_7 < state_word; g_1862AE020 = ++iteration_count_7 )
    {
      element_index_4 = 0;
      if ( iteration_count_7 < state_word )
      {
        iteration_count_8 = iteration_count_7;
        do
        {
          table_value_4 = sr_mem_140276f08[element_index_4];
          if ( !table_value_4 )
            break;
          if ( table_value_4 != *((_BYTE *)&g_1862AE028 + iteration_count_8) )
            break;
          ++iteration_count_8;
          ++element_index_4;
        }
        while ( iteration_count_8 < state_word );
      }
      if ( !sr_mem_140276f08[element_index_4] )
        break;
    }
    g_1862AE020 = iteration_count_7 + 10;
    if ( iteration_count_7 + 10 < state_word )
    {
      call_result_4 = sub_1400A3D70();
      state_word = g_1862AE024;
      g_183F7A604 = call_result_4;
    }
    iteration_count_9 = 0;
    for ( g_1862AE020 = 0; iteration_count_9 < state_word; g_1862AE020 = ++iteration_count_9 )
    {
      element_index_5 = 0;
      if ( iteration_count_9 < state_word )
      {
        iteration_count_10 = iteration_count_9;
        do
        {
          table_value_5 = sr_mem_140276ec0[element_index_5];
          if ( !table_value_5 )
            break;
          if ( table_value_5 != *((_BYTE *)&g_1862AE028 + iteration_count_10) )
            break;
          ++iteration_count_10;
          ++element_index_5;
        }
        while ( iteration_count_10 < state_word );
      }
      if ( !sr_mem_140276ec0[element_index_5] )
        break;
    }
    g_1862AE020 = iteration_count_9 + 11;
    if ( iteration_count_9 + 11 < state_word )
    {
      call_result_5 = sub_1400A3D70();
      state_word = g_1862AE024;
      g_183F7A608 = call_result_5;
    }
    iteration_count_11 = 0;
    for ( g_1862AE020 = 0; iteration_count_11 < state_word; g_1862AE020 = ++iteration_count_11 )
    {
      element_index_6 = 0;
      if ( iteration_count_11 < state_word )
      {
        iteration_count_12 = iteration_count_11;
        do
        {
          table_value_6 = sr_mem_140276ed0[element_index_6];
          if ( !table_value_6 )
            break;
          if ( table_value_6 != *((_BYTE *)&g_1862AE028 + iteration_count_12) )
            break;
          ++iteration_count_12;
          ++element_index_6;
        }
        while ( iteration_count_12 < state_word );
      }
      if ( !sr_mem_140276ed0[element_index_6] )
        break;
    }
    g_1862AE020 = iteration_count_11 + 11;
    if ( iteration_count_11 + 11 < state_word )
      g_183F7A60C = sub_1400A3D70();
    g_1862AE020 = 0;
  }
  sub_14010E0D0((char *)&g_183F7A614, "map01=", 30, i, a1);
  sub_14010E0D0((char *)(unsigned int *)&g_183F7A654, "map02=", 30, i, a1);
  sub_14010E0D0((char *)&g_183F7A694, "map03=", 30, i, a1);
  sub_14010E0D0((char *)&g_183F7A6D4, "map04=", 30, i, a1);
  sub_14010E0D0((char *)&g_183F7A714, "map05=", 30, i, a1);
  sub_14010E0D0((char *)&g_183F7A754, "map06=", 30, i, a1);
  sub_14010E0D0((char *)&g_183F7A794, "map07=", 30, i, a1);
  sub_14010E0D0((char *)&g_183F7A7D4, "map08=", 30, i, a1);
  state_word_2 = g_183F7A600;
  if ( (int)g_183F7A600 >= 1 )
  {
    if ( (int)g_183F7A600 > 60 )
      state_word_2 = 60;
    g_183F7A600 = state_word_2;
  }
  else
  {
    g_183F7A600 = 1;
  }
  state_word_3 = g_183F7A60C;
  if ( (g_183F7A60C & 0x80000000) == 0 )
  {
    if ( (int)g_183F7A60C > 200 )
      state_word_3 = 200;
    g_183F7A60C = state_word_3;
  }
  else
  {
    g_183F7A60C = 0;
  }
  if ( a1 )
    crt_fclose(i);
  return *(double *)SR_VEC_LANES(128, si128, i64);
}

//----- (00000001400ECD70) ----------------------------------------------------
double            sub_1400ECD70(int a1)
{
  __m128i si128;
  int iteration_count;
  signed int state_word;
  __int64 i;
  __int64 element_index;
  int iteration_count_2;
  char table_value;
  unsigned int call_result;
  signed int iteration_count_3;
  __int64 element_index_2;
  signed int iteration_count_4;
  char table_value_2;
  unsigned int call_result_2;
  signed int iteration_count_5;
  __int64 element_index_3;
  signed int iteration_count_6;
  char table_value_3;
  unsigned int call_result_3;
  signed int iteration_count_7;
  __int64 element_index_4;
  signed int iteration_count_8;
  char table_value_4;
  unsigned int call_result_4;
  signed int iteration_count_9;
  __int64 element_index_5;
  signed int iteration_count_10;
  char table_value_5;
  unsigned int call_result_5;
  signed int iteration_count_11;
  __int64 element_index_6;
  signed int iteration_count_12;
  char table_value_6;
  unsigned int call_result_6;
  signed int iteration_count_13;
  __int64 element_index_7;
  signed int iteration_count_14;
  char table_value_7;
  unsigned int call_result_7;
  signed int iteration_count_15;
  __int64 element_index_8;
  signed int iteration_count_16;
  char table_value_8;
  unsigned int call_result_8;
  signed int iteration_count_17;
  __int64 element_index_9;
  signed int iteration_count_18;
  char table_value_9;
  unsigned int call_result_9;
  signed int iteration_count_19;
  __int64 element_index_10;
  signed int iteration_count_20;
  char table_value_10;
  unsigned int call_result_10;
  signed int iteration_count_21;
  __int64 element_index_11;
  signed int iteration_count_22;
  char table_value_11;
  unsigned int call_result_11;
  signed int iteration_count_23;
  __int64 element_index_12;
  signed int iteration_count_24;
  char table_value_12;
  unsigned int call_result_12;
  signed int iteration_count_25;
  __int64 element_index_13;
  signed int iteration_count_26;
  char table_value_13;
  unsigned int call_result_13;
  signed int iteration_count_27;
  __int64 element_index_14;
  signed int iteration_count_28;
  char table_value_14;
  __int64 file_handle;
  unsigned int state_word_2;
  unsigned int state_word_3;

  if ( a1 )
  {
    file_handle = crt_fopen("config_world.txt", "wb");
    i = file_handle;
    if ( !file_handle )
      return *(double *)SR_VEC_LANES(128, si128, i64);
    sub_1400920F0(file_handle, "%s%d\r\n", "traffic=", g_183F7A5C0);
    sub_1400920F0(i, "%s%d\r\n", "crimecivciv=", g_183F7A5C4);
    sub_1400920F0(i, "%s%d\r\n", "crimecivteam=", g_183F7A5C8);
    sub_1400920F0(i, "%s%d\r\n", "crimeteamciv=", g_183F7A5CC);
    sub_1400920F0(i, "%s%d\r\n", "crimeteamteam=", g_183F7A5D0);
    sub_1400920F0(i, "%s%d\r\n", "crimeteamteaminbase=", g_183F7A5D4);
    sub_1400920F0(i, "%s%d\r\n", "crimevscriminal=", g_183F7A5D8);
    sub_1400920F0(i, "%s%d\r\n", "crimenobuy=", g_183F7A5DC);
    sub_1400920F0(i, "%s%d\r\n", "crimenospawn=", g_183F7A5E0);
    sub_1400920F0(i, "%s%d\r\n", "crimekick=", g_183F7A5E4);
    sub_1400920F0(i, "%s%d\r\n", "startcash=", g_183F7A5E8);
    sub_1400920F0(i, "%s%d\r\n", "mincash=", g_183F7A5EC);
    sub_1400920F0(i, "%s%d\r\n", "showjoinexit=", g_183F7A5F0);
    sub_1400920F0(i, "%s%d\r\n", "respawnteam=", g_183F7A5F4);
  }
  else
  {
    _mm_storeu_si128((__m128i *)(void *)&g_183F7A5C0, _mm_load_si128((     __m128i *)&xmmword_1402790F0));
    si128 = _mm_load_si128((     __m128i *)&xmmword_140279190);
    _mm_storeu_si128((__m128i *)(void *)&g_183F7A5E0, si128);
    *(_QWORD *)&g_183F7A5F0 = 1;
    _mm_storeu_si128((__m128i *)(void *)&g_183F7A5D0, _mm_load_si128((     __m128i *)&xmmword_140279180));
    sub_1400ED940("config_world.txt");
    iteration_count = g_1862AE020;
    state_word = g_1862AE024;
    for ( i = 0; iteration_count < (int)g_1862AE024; g_1862AE020 = ++iteration_count )
    {
      element_index = 0;
      if ( iteration_count < (int)g_1862AE024 )
      {
        iteration_count_2 = iteration_count;
        do
        {
          table_value = sr_mem_140276db0[element_index];
          if ( !table_value )
            break;
          if ( table_value != *((_BYTE *)&g_1862AE028 + iteration_count_2) )
            break;
          ++iteration_count_2;
          ++element_index;
        }
        while ( iteration_count_2 < (int)g_1862AE024 );
      }
      if ( !sr_mem_140276db0[element_index] )
        break;
    }
    g_1862AE020 = iteration_count + 8;
    if ( iteration_count + 8 < (int)g_1862AE024 )
    {
      call_result = sub_1400A3D70();
      state_word = g_1862AE024;
      g_183F7A5C0 = call_result;
    }
    iteration_count_3 = 0;
    for ( g_1862AE020 = 0; iteration_count_3 < state_word; g_1862AE020 = ++iteration_count_3 )
    {
      element_index_2 = 0;
      if ( iteration_count_3 < state_word )
      {
        iteration_count_4 = iteration_count_3;
        do
        {
          table_value_2 = sr_mem_140276dc0[element_index_2];
          if ( !table_value_2 )
            break;
          if ( table_value_2 != *((_BYTE *)&g_1862AE028 + iteration_count_4) )
            break;
          ++iteration_count_4;
          ++element_index_2;
        }
        while ( iteration_count_4 < state_word );
      }
      if ( !sr_mem_140276dc0[element_index_2] )
        break;
    }
    g_1862AE020 = iteration_count_3 + 12;
    if ( iteration_count_3 + 12 < state_word )
    {
      call_result_2 = sub_1400A3D70();
      state_word = g_1862AE024;
      g_183F7A5C4 = call_result_2;
    }
    iteration_count_5 = 0;
    for ( g_1862AE020 = 0; iteration_count_5 < state_word; g_1862AE020 = ++iteration_count_5 )
    {
      element_index_3 = 0;
      if ( iteration_count_5 < state_word )
      {
        iteration_count_6 = iteration_count_5;
        do
        {
          table_value_3 = sr_mem_140276dd0[element_index_3];
          if ( !table_value_3 )
            break;
          if ( table_value_3 != *((_BYTE *)&g_1862AE028 + iteration_count_6) )
            break;
          ++iteration_count_6;
          ++element_index_3;
        }
        while ( iteration_count_6 < state_word );
      }
      if ( !sr_mem_140276dd0[element_index_3] )
        break;
    }
    g_1862AE020 = iteration_count_5 + 13;
    if ( iteration_count_5 + 13 < state_word )
    {
      call_result_3 = sub_1400A3D70();
      state_word = g_1862AE024;
      g_183F7A5C8 = call_result_3;
    }
    iteration_count_7 = 0;
    for ( g_1862AE020 = 0; iteration_count_7 < state_word; g_1862AE020 = ++iteration_count_7 )
    {
      element_index_4 = 0;
      if ( iteration_count_7 < state_word )
      {
        iteration_count_8 = iteration_count_7;
        do
        {
          table_value_4 = sr_mem_140276de0[element_index_4];
          if ( !table_value_4 )
            break;
          if ( table_value_4 != *((_BYTE *)&g_1862AE028 + iteration_count_8) )
            break;
          ++iteration_count_8;
          ++element_index_4;
        }
        while ( iteration_count_8 < state_word );
      }
      if ( !sr_mem_140276de0[element_index_4] )
        break;
    }
    g_1862AE020 = iteration_count_7 + 13;
    if ( iteration_count_7 + 13 < state_word )
    {
      call_result_4 = sub_1400A3D70();
      state_word = g_1862AE024;
      g_183F7A5CC = call_result_4;
    }
    iteration_count_9 = 0;
    for ( g_1862AE020 = 0; iteration_count_9 < state_word; g_1862AE020 = ++iteration_count_9 )
    {
      element_index_5 = 0;
      if ( iteration_count_9 < state_word )
      {
        iteration_count_10 = iteration_count_9;
        do
        {
          table_value_5 = sr_mem_140276df0[element_index_5];
          if ( !table_value_5 )
            break;
          if ( table_value_5 != *((_BYTE *)&g_1862AE028 + iteration_count_10) )
            break;
          ++iteration_count_10;
          ++element_index_5;
        }
        while ( iteration_count_10 < state_word );
      }
      if ( !sr_mem_140276df0[element_index_5] )
        break;
    }
    g_1862AE020 = iteration_count_9 + 14;
    if ( iteration_count_9 + 14 < state_word )
    {
      call_result_5 = sub_1400A3D70();
      state_word = g_1862AE024;
      g_183F7A5D0 = call_result_5;
    }
    iteration_count_11 = 0;
    for ( g_1862AE020 = 0; iteration_count_11 < state_word; g_1862AE020 = ++iteration_count_11 )
    {
      element_index_6 = 0;
      if ( iteration_count_11 < state_word )
      {
        iteration_count_12 = iteration_count_11;
        do
        {
          table_value_6 = sr_mem_140276e00[element_index_6];
          if ( !table_value_6 )
            break;
          if ( table_value_6 != *((_BYTE *)&g_1862AE028 + iteration_count_12) )
            break;
          ++iteration_count_12;
          ++element_index_6;
        }
        while ( iteration_count_12 < state_word );
      }
      if ( !sr_mem_140276e00[element_index_6] )
        break;
    }
    g_1862AE020 = iteration_count_11 + 20;
    if ( iteration_count_11 + 20 < state_word )
    {
      call_result_6 = sub_1400A3D70();
      state_word = g_1862AE024;
      g_183F7A5D4 = call_result_6;
    }
    iteration_count_13 = 0;
    for ( g_1862AE020 = 0; iteration_count_13 < state_word; g_1862AE020 = ++iteration_count_13 )
    {
      element_index_7 = 0;
      if ( iteration_count_13 < state_word )
      {
        iteration_count_14 = iteration_count_13;
        do
        {
          table_value_7 = sr_mem_140276e18[element_index_7];
          if ( !table_value_7 )
            break;
          if ( table_value_7 != *((_BYTE *)&g_1862AE028 + iteration_count_14) )
            break;
          ++iteration_count_14;
          ++element_index_7;
        }
        while ( iteration_count_14 < state_word );
      }
      if ( !sr_mem_140276e18[element_index_7] )
        break;
    }
    g_1862AE020 = iteration_count_13 + 16;
    if ( iteration_count_13 + 16 < state_word )
    {
      call_result_7 = sub_1400A3D70();
      state_word = g_1862AE024;
      g_183F7A5D8 = call_result_7;
    }
    iteration_count_15 = 0;
    for ( g_1862AE020 = 0; iteration_count_15 < state_word; g_1862AE020 = ++iteration_count_15 )
    {
      element_index_8 = 0;
      if ( iteration_count_15 < state_word )
      {
        iteration_count_16 = iteration_count_15;
        do
        {
          table_value_8 = sr_mem_140276e30[element_index_8];
          if ( !table_value_8 )
            break;
          if ( table_value_8 != *((_BYTE *)&g_1862AE028 + iteration_count_16) )
            break;
          ++iteration_count_16;
          ++element_index_8;
        }
        while ( iteration_count_16 < state_word );
      }
      if ( !sr_mem_140276e30[element_index_8] )
        break;
    }
    g_1862AE020 = iteration_count_15 + 11;
    if ( iteration_count_15 + 11 < state_word )
    {
      call_result_8 = sub_1400A3D70();
      state_word = g_1862AE024;
      g_183F7A5DC = call_result_8;
    }
    iteration_count_17 = 0;
    for ( g_1862AE020 = 0; iteration_count_17 < state_word; g_1862AE020 = ++iteration_count_17 )
    {
      element_index_9 = 0;
      if ( iteration_count_17 < state_word )
      {
        iteration_count_18 = iteration_count_17;
        do
        {
          table_value_9 = sr_mem_140276e40[element_index_9];
          if ( !table_value_9 )
            break;
          if ( table_value_9 != *((_BYTE *)&g_1862AE028 + iteration_count_18) )
            break;
          ++iteration_count_18;
          ++element_index_9;
        }
        while ( iteration_count_18 < state_word );
      }
      if ( !sr_mem_140276e40[element_index_9] )
        break;
    }
    g_1862AE020 = iteration_count_17 + 13;
    if ( iteration_count_17 + 13 < state_word )
    {
      call_result_9 = sub_1400A3D70();
      state_word = g_1862AE024;
      g_183F7A5E0 = call_result_9;
    }
    iteration_count_19 = 0;
    for ( g_1862AE020 = 0; iteration_count_19 < state_word; g_1862AE020 = ++iteration_count_19 )
    {
      element_index_10 = 0;
      if ( iteration_count_19 < state_word )
      {
        iteration_count_20 = iteration_count_19;
        do
        {
          table_value_10 = sr_mem_140276e50[element_index_10];
          if ( !table_value_10 )
            break;
          if ( table_value_10 != *((_BYTE *)&g_1862AE028 + iteration_count_20) )
            break;
          ++iteration_count_20;
          ++element_index_10;
        }
        while ( iteration_count_20 < state_word );
      }
      if ( !sr_mem_140276e50[element_index_10] )
        break;
    }
    g_1862AE020 = iteration_count_19 + 10;
    if ( iteration_count_19 + 10 < state_word )
    {
      call_result_10 = sub_1400A3D70();
      state_word = g_1862AE024;
      g_183F7A5E4 = call_result_10;
    }
    iteration_count_21 = 0;
    for ( g_1862AE020 = 0; iteration_count_21 < state_word; g_1862AE020 = ++iteration_count_21 )
    {
      element_index_11 = 0;
      if ( iteration_count_21 < state_word )
      {
        iteration_count_22 = iteration_count_21;
        do
        {
          table_value_11 = sr_mem_140276e60[element_index_11];
          if ( !table_value_11 )
            break;
          if ( table_value_11 != *((_BYTE *)&g_1862AE028 + iteration_count_22) )
            break;
          ++iteration_count_22;
          ++element_index_11;
        }
        while ( iteration_count_22 < state_word );
      }
      if ( !sr_mem_140276e60[element_index_11] )
        break;
    }
    g_1862AE020 = iteration_count_21 + 10;
    if ( iteration_count_21 + 10 < state_word )
    {
      call_result_11 = sub_1400A3D70();
      state_word = g_1862AE024;
      g_183F7A5E8 = call_result_11;
    }
    iteration_count_23 = 0;
    for ( g_1862AE020 = 0; iteration_count_23 < state_word; g_1862AE020 = ++iteration_count_23 )
    {
      element_index_12 = 0;
      if ( iteration_count_23 < state_word )
      {
        iteration_count_24 = iteration_count_23;
        do
        {
          table_value_12 = sr_mem_140276e70[element_index_12];
          if ( !table_value_12 )
            break;
          if ( table_value_12 != *((_BYTE *)&g_1862AE028 + iteration_count_24) )
            break;
          ++iteration_count_24;
          ++element_index_12;
        }
        while ( iteration_count_24 < state_word );
      }
      if ( !sr_mem_140276e70[element_index_12] )
        break;
    }
    g_1862AE020 = iteration_count_23 + 8;
    if ( iteration_count_23 + 8 < state_word )
    {
      call_result_12 = sub_1400A3D70();
      state_word = g_1862AE024;
      g_183F7A5EC = call_result_12;
    }
    iteration_count_25 = 0;
    for ( g_1862AE020 = 0; iteration_count_25 < state_word; g_1862AE020 = ++iteration_count_25 )
    {
      element_index_13 = 0;
      if ( iteration_count_25 < state_word )
      {
        iteration_count_26 = iteration_count_25;
        do
        {
          table_value_13 = sr_mem_140276e80[element_index_13];
          if ( !table_value_13 )
            break;
          if ( table_value_13 != *((_BYTE *)&g_1862AE028 + iteration_count_26) )
            break;
          ++iteration_count_26;
          ++element_index_13;
        }
        while ( iteration_count_26 < state_word );
      }
      if ( !sr_mem_140276e80[element_index_13] )
        break;
    }
    g_1862AE020 = iteration_count_25 + 13;
    if ( iteration_count_25 + 13 < state_word )
    {
      call_result_13 = sub_1400A3D70();
      state_word = g_1862AE024;
      g_183F7A5F0 = call_result_13;
    }
    iteration_count_27 = 0;
    for ( g_1862AE020 = 0; iteration_count_27 < state_word; g_1862AE020 = ++iteration_count_27 )
    {
      element_index_14 = 0;
      if ( iteration_count_27 < state_word )
      {
        iteration_count_28 = iteration_count_27;
        do
        {
          table_value_14 = sr_mem_140276e90[element_index_14];
          if ( !table_value_14 )
            break;
          if ( table_value_14 != *((_BYTE *)&g_1862AE028 + iteration_count_28) )
            break;
          ++iteration_count_28;
          ++element_index_14;
        }
        while ( iteration_count_28 < state_word );
      }
      if ( !sr_mem_140276e90[element_index_14] )
        break;
    }
    g_1862AE020 = iteration_count_27 + 12;
    if ( iteration_count_27 + 12 < state_word )
      g_183F7A5F4 = sub_1400A3D70();
    g_1862AE020 = 0;
  }
  if ( (g_183F7A5C0 & 0x80000000) == 0 )
  {
    state_word_2 = g_183F7A5C0;
    if ( (int)g_183F7A5C0 > 512 )
      state_word_2 = 512;
    g_183F7A5C0 = state_word_2;
  }
  else
  {
    g_183F7A5C0 = 0;
  }
  state_word_3 = g_183F7A5E4;
  if ( (int)g_183F7A5E4 < 1 )
    state_word_3 = 1;
  g_183F7A5E4 = state_word_3;
  if ( a1 )
    crt_fclose(i);
  return *(double *)SR_VEC_LANES(128, si128, i64);
}

//----- (00000001400ED690) ----------------------------------------------------
__int64            sub_1400ED690(char *a1)
{
  char *destination_text;
  FILE *strcpy_result;
  int iteration_count;
  FILE *file_handle;
  int call_result;
  unsigned int *state_address;
  unsigned __int64 byte_count;
  __m128i *allocated_buffer;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400ED690[560];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400ED690 + 0)) /* [rsp+0h] */
#define source_text (*(char (*)[512])(void *)(sr_frame_1400ED690 + 32)) /* [rsp+20h] */
#define unused_frame_slot_544 (*(__int64 (*))(void *)(sr_frame_1400ED690 + 544)) /* [rsp+220h] */

  crt_sprintf(source_text, "%s\r\n", a1);
  destination_text = (char *)&g_1515B0BBC + 3;
  while ( *++destination_text != 0 )
    ;
  strcpy_result = (FILE *)strcpy(destination_text, source_text);
  iteration_count = 0;
  file_handle = (FILE *)crt_fopen(a1, "rb");
  if ( file_handle )
  {
    call_result = sub_14020BB2C(file_handle);
    if ( call_result != -1 )
    {
      state_address = &g_151600C40;
      do
      {
        *(_BYTE *)state_address = call_result;
        state_address = (unsigned int *)((char *)state_address + 1);
        ++iteration_count;
        call_result = sub_14020BB2C(strcpy_result);
      }
      while ( call_result != -1 );
    }
    if ( (unsigned __int64)iteration_count >= 0x20000 )
      sub_1401F8694();
    *((_BYTE *)&g_151600C40 + iteration_count) = 0;
    crt_fclose((__int64)strcpy_result);
    byte_count = iteration_count + 1;
    allocated_buffer = (__m128i *)sr_path_malloc(byte_count);
    crt_memcpy(allocated_buffer, (     __m128i *)&g_151600C40, byte_count);
  }
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef source_text
#undef unused_frame_slot_544

//----- (00000001400ED7D0) ----------------------------------------------------
void sub_1400ED7D0()
{
  int i;
  __int64 element_index;
  int cached_i;
  char table_value;
  int iteration_count;
  char masked_bits;
  __int64 iteration_count_2;
  char masked_bits_2;
  __int64 callee_output_word;

  sub_1400ED940("serversteamban.txt");
  for ( g_1606E1348 = 0; ; ++g_1606E1348 )
  {
    for ( i = g_1862AE020; i < (int)g_1862AE024; g_1862AE020 = ++i )
    {
      element_index = 0;
      if ( i < (int)g_1862AE024 )
      {
        cached_i = i;
        do
        {
          table_value = aSteamban[element_index];
          if ( !table_value )
            break;
          if ( table_value != *((_BYTE *)&g_1862AE028 + cached_i) )
            break;
          ++cached_i;
          ++element_index;
        }
        while ( cached_i < (int)g_1862AE024 );
      }
      if ( !aSteamban[element_index] )
        break;
    }
    iteration_count = i + 9;
    g_1862AE020 = i + 9;
    if ( i + 9 >= (int)g_1862AE024 )
      break;
    do
    {
      masked_bits = *((_BYTE *)&g_1862AE028 + iteration_count);
      if ( (unsigned __int8)(masked_bits - 48) <= 9u )
        break;
      if ( masked_bits == 45 )
        break;
      g_1862AE020 = ++iteration_count;
    }
    while ( iteration_count < (int)g_1862AE024 );
    iteration_count_2 = 0;
    if ( iteration_count < (int)g_1862AE024 )
    {
      do
      {
        if ( iteration_count_2 >= 255 )
          break;
        masked_bits_2 = *((_BYTE *)&g_1862AE028 + iteration_count);
        if ( (unsigned __int8)(masked_bits_2 - 48) > 9u && masked_bits_2 != 45 )
          break;
        *((_BYTE *)&g_1863AE028 + iteration_count_2++) = masked_bits_2;
        iteration_count = ++g_1862AE020;
      }
      while ( (int)g_1862AE020 < (int)g_1862AE024 );
    }
    *((_BYTE *)&g_1863AE028 + iteration_count_2) = 0;
    crt_sscanf((__int64)&g_1863AE028, "%I64u", &callee_output_word);
    *(_QWORD *)&dword_140404A6C[2 * g_1606E1348 + 134967865] = callee_output_word;
  }
}

//----- (00000001400ED940) ----------------------------------------------------
void            sub_1400ED940(char *a1)
{
  FILE *file_handle;
  FILE *file_handle_2;
  int i;

  g_1862AE024 = 0;
  file_handle = (FILE *)crt_fopen(a1, "rb");
  file_handle_2 = file_handle;
  if ( file_handle )
  {
    for ( i = sub_14020BB2C(file_handle); i != -1; i = sub_14020BB2C(file_handle_2) )
      *((_BYTE *)&g_1862AE028 + (int)g_1862AE024++) = i;
    *((_BYTE *)&g_1862AE028 + (int)g_1862AE024) = 0;
    crt_fclose((__int64)file_handle_2);
  }
  g_1862AE020 = 0;
}

//----- (00000001400ED9D0) ----------------------------------------------------
__int64            sub_1400ED9D0(
        int a1,
        char *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 input_value;
  char *text_cursor;
  __int64 result;
  signed __int64 state_address;
  char input_byte;
  unsigned int state_word;
  __int64 scaled_index;
  unsigned int *state_address_2;
  unsigned int *state_address_3;
  void **saved_allocated_buffer;
  __int64 allocated_buffer;
  signed int iteration_count;
  signed int i;
  signed int scaled_index_2;

  input_value = a1;
  text_cursor = a2;
  result = sub_1400E7590(a2);
  if ( (_DWORD)result )
  {
    state_address = (char *)&g_18402CC20 - text_cursor;
    do
    {
      input_byte = *text_cursor;
      text_cursor[state_address] = *text_cursor;
      ++text_cursor;
    }
    while ( input_byte );
    state_word = g_1B0037420;
    scaled_index = 44 * input_value;
    state_address_2 = &dword_140404A6C[44 * input_value + 284024933];
    state_address_3 = &dword_140404A6C[44 * input_value + 284024934];
    dword_140404A6C[scaled_index + 284024938] = a4;
    *state_address_2 = state_word;
    saved_allocated_buffer = (void **)&dword_140404A6C[44 * input_value + 284024945];
    *state_address_3 = g_1B0037424;
    dword_140404A6C[scaled_index + 284024939] = a5;
    dword_140404A6C[scaled_index + 284024940] = a6;
    dword_140404A6C[scaled_index + 284024941] = a7;
    dword_140404A6C[scaled_index + 284024935] = 1;
    dword_140404A6C[scaled_index + 284024936] = 6408;
    dword_140404A6C[scaled_index + 284024937] = 6408;
    dword_140404A6C[scaled_index + 284024943] = 0;
    free(*saved_allocated_buffer);
    allocated_buffer = sr_path_malloc((int)(4 * *state_address_2 * *state_address_3));
    iteration_count = 0;
    for ( *saved_allocated_buffer = (void *)allocated_buffer; iteration_count < (int)*state_address_3; ++iteration_count )
    {
      for ( i = 0; i < (int)*state_address_2; *((_DWORD *)*saved_allocated_buffer + scaled_index_2) = dword_140404A6C[scaled_index_2 + 468765295] )
      {
        scaled_index_2 = i + *state_address_2 * iteration_count;
        ++i;
      }
    }
    if ( a3 )
      sub_14009A370(input_value);
    sub_14014D3E0(input_value, 1);
    return 1;
  }
  return result;
}

//----- (00000001400EDB70) ----------------------------------------------------
__int64            sub_1400EDB70(
        int a1,
        char *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 input_value;
  char *text_cursor;
  __int64 result;
  signed __int64 state_address;
  char input_byte;
  unsigned int state_word;
  __int64 scaled_index;
  unsigned int *state_address_2;
  unsigned int *state_address_3;
  void **saved_allocated_buffer;
  __int64 allocated_buffer;
  signed int iteration_count;
  signed int i;
  signed int scaled_index_2;

  input_value = a1;
  text_cursor = a2;
  result = sub_1400E7590(a2);
  if ( (_DWORD)result )
  {
    state_address = (char *)&g_18402CC20 - text_cursor;
    do
    {
      input_byte = *text_cursor;
      text_cursor[state_address] = *text_cursor;
      ++text_cursor;
    }
    while ( input_byte );
    state_word = g_1B0037420;
    scaled_index = 44 * input_value;
    state_address_2 = &dword_140404A6C[44 * input_value + 284024933];
    state_address_3 = &dword_140404A6C[44 * input_value + 284024934];
    dword_140404A6C[scaled_index + 284024938] = a4;
    *state_address_2 = state_word;
    saved_allocated_buffer = (void **)&dword_140404A6C[44 * input_value + 284024945];
    *state_address_3 = g_1B0037424;
    dword_140404A6C[scaled_index + 284024939] = a5;
    dword_140404A6C[scaled_index + 284024940] = a6;
    dword_140404A6C[scaled_index + 284024941] = a7;
    dword_140404A6C[scaled_index + 284024935] = 1;
    dword_140404A6C[scaled_index + 284024936] = 6408;
    dword_140404A6C[scaled_index + 284024937] = 6408;
    dword_140404A6C[scaled_index + 284024943] = 0;
    free(*saved_allocated_buffer);
    allocated_buffer = sr_path_malloc((int)(4 * *state_address_2 * *state_address_3));
    iteration_count = 0;
    for ( *saved_allocated_buffer = (void *)allocated_buffer; iteration_count < (int)*state_address_3; ++iteration_count )
    {
      for ( i = 0; i < (int)*state_address_2; *((_DWORD *)*saved_allocated_buffer + scaled_index_2) = dword_140404A6C[scaled_index_2 + 468765295] )
      {
        scaled_index_2 = i + *state_address_2 * iteration_count;
        ++i;
      }
    }
    if ( a3 )
      sub_14009A370(input_value);
    sub_14014D3E0(input_value, 1);
    return 1;
  }
  return result;
}

//----- (00000001400EDD10) ----------------------------------------------------
void            sub_1400EDD10(int a1, char *a2, int a3, int a4, unsigned int a5, unsigned int a6)
{
  __int64 input_value;
  char *text_cursor;
  signed __int64 state_address;
  char input_byte;
  __int64 scaled_index;
  unsigned int *state_address_2;
  unsigned int *state_address_3;
  void **saved_allocated_buffer;
  __int64 allocated_buffer;
  int element_index;
  signed int state_word;
  unsigned int loaded_word;
  signed int i;

  input_value = a1;
  text_cursor = a2;
  if ( strcmp_sr((     char *)&g_18402CC20, a2) )
  {
    if ( !(unsigned int)sub_1400E7590(text_cursor) )
      return;
    state_address = (char *)&g_18402CC20 - text_cursor;
    do
    {
      input_byte = *text_cursor;
      text_cursor[state_address] = *text_cursor;
      ++text_cursor;
    }
    while ( input_byte );
  }
  scaled_index = 44 * input_value;
  state_address_2 = &dword_140404A6C[44 * input_value + 284024933];
  state_address_3 = &dword_140404A6C[44 * input_value + 284024934];
  saved_allocated_buffer = (void **)&dword_140404A6C[44 * input_value + 284024945];
  dword_140404A6C[scaled_index + 284024935] = 1;
  dword_140404A6C[scaled_index + 284024936] = 6408;
  dword_140404A6C[scaled_index + 284024933] = a5;
  dword_140404A6C[scaled_index + 284024934] = a6;
  dword_140404A6C[scaled_index + 284024937] = 6408;
  dword_140404A6C[scaled_index + 284024943] = 0;
  dword_140404A6C[scaled_index + 284024938] = 33071;
  dword_140404A6C[scaled_index + 284024939] = 33071;
  dword_140404A6C[scaled_index + 284024940] = 9729;
  dword_140404A6C[scaled_index + 284024941] = 9729;
  free(*saved_allocated_buffer);
  allocated_buffer = sr_path_malloc((int)(4 * *state_address_2 * *state_address_3));
  element_index = 0;
  *saved_allocated_buffer = (void *)allocated_buffer;
  if ( (int)*state_address_3 > 0 )
  {
    state_word = g_1B0037420;
    do
    {
      if ( element_index < (int)g_1B0037424 )
      {
        loaded_word = *state_address_2;
        for ( i = 0; i < (int)*state_address_2; ++i )
        {
          if ( i < state_word )
          {
            *((_DWORD *)*saved_allocated_buffer + (int)(i + element_index * loaded_word)) = dword_140404A6C[a3 + 468765295 + i + state_word * (element_index + a4)];
            state_word = g_1B0037420;
          }
          loaded_word = *state_address_2;
        }
      }
      ++element_index;
    }
    while ( element_index < (int)*state_address_3 );
  }
  sub_14014D3E0(input_value, 0);
}

//----- (00000001400EDED0) ----------------------------------------------------
__int64            sub_1400EDED0(
        int a1,
        char *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  __int64 input_value;
  char *text_cursor;
  unsigned int state_word;
  unsigned int state_word_2;
  signed __int64 state_address;
  char input_byte;
  __int64 scaled_index;
  unsigned int *state_address_2;
  unsigned int *state_address_3;
  void **saved_allocated_buffer;
  __int64 allocated_buffer;
  signed int iteration_count;
  unsigned int loaded_word;
  signed int i;
  signed int scaled_index_2;

  input_value = a1;
  text_cursor = a2;
  if ( !(unsigned int)sub_1400E7590(a2) )
    return 0;
  state_word = g_1B0037420;
  if ( (state_word & (state_word - 1)) != 0 )
    return 0;
  state_word_2 = g_1B0037424;
  if ( (state_word_2 & (state_word_2 - 1)) != 0 )
    return 0;
  state_address = (char *)&g_18402CC20 - text_cursor;
  do
  {
    input_byte = *text_cursor;
    text_cursor[state_address] = *text_cursor;
    ++text_cursor;
  }
  while ( input_byte );
  scaled_index = 44 * input_value;
  state_address_2 = &dword_140404A6C[44 * input_value + 284024933];
  state_address_3 = &dword_140404A6C[44 * input_value + 284024934];
  dword_140404A6C[scaled_index + 284024938] = a4;
  dword_140404A6C[scaled_index + 284024939] = a5;
  saved_allocated_buffer = (void **)&dword_140404A6C[44 * input_value + 284024945];
  dword_140404A6C[scaled_index + 284024940] = a6;
  *state_address_2 = state_word;
  *state_address_3 = state_word_2;
  dword_140404A6C[scaled_index + 284024935] = 1;
  dword_140404A6C[scaled_index + 284024936] = 6408;
  dword_140404A6C[scaled_index + 284024937] = 6408;
  dword_140404A6C[scaled_index + 284024943] = 0;
  dword_140404A6C[scaled_index + 284024941] = a7;
  free(*saved_allocated_buffer);
  allocated_buffer = sr_path_malloc((int)(4 * *state_address_2 * *state_address_3));
  iteration_count = 0;
  for ( *saved_allocated_buffer = (void *)allocated_buffer; iteration_count < (int)*state_address_3; ++iteration_count )
  {
    loaded_word = *state_address_2;
    for ( i = 0; i < (int)*state_address_2; loaded_word = *state_address_2 )
    {
      scaled_index_2 = i + loaded_word * iteration_count;
      if ( g_1862AE010 )
      {
        LOBYTE(dword_140404A6C[scaled_index_2 + 468765295]) = 0;
        dword_140404A6C[scaled_index_2 + 468765295] |= a8;
      }
      else
      {
        HIBYTE(dword_140404A6C[scaled_index_2 + 468765295]) = 0;
        dword_140404A6C[scaled_index_2 + 468765295] |= a8 << 24;
      }
      ++i;
      *((_DWORD *)*saved_allocated_buffer + scaled_index_2) = dword_140404A6C[scaled_index_2 + 468765295];
    }
  }
  if ( a3 )
    sub_14009A370(input_value);
  sub_14014D3E0(input_value, 0);
  return 1;
}

//----- (00000001400EE0A0) ----------------------------------------------------
__int64            sub_1400EE0A0(
        int a1,
        int a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        int a9)
{
  int input_value;
  int input_value_2;
  __m128i *allocation_buffer;
  int state_word;
  signed int state_word_2;
  unsigned int cached_callee_output_word;
  unsigned int scaled_index;
  signed int iteration_count;
  unsigned int state_word_3;
  int running_total;
  int element_index;
  int record_byte_offset;
  int running_total_2;
  int table_value;
  int table_value_2;
  int table_value_3;
  int table_value_4;
  int integer_difference;
  unsigned int state_word_4;
  unsigned int *state_address;
  __int64 allocated_buffer;
  signed int iteration_count_2;
  unsigned int loaded_word;
  signed int i;
  signed int scaled_index_2;
  _Alignas(8) unsigned char offset_operand[224];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400EE0A0[304];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400EE0A0 + 0)) /* [rsp+0h] */
#define callee_output_word (*(unsigned int (*))(void *)(sr_frame_1400EE0A0 + 48)) /* [rsp+30h] */
#define input_value_3 (*(int (*))(void *)(sr_frame_1400EE0A0 + 52)) /* [rsp+34h] */
#define input_value_4 (*(int (*))(void *)(sr_frame_1400EE0A0 + 56)) /* [rsp+38h] */
#define unused_frame_slot_288 (*(__int64 (*))(void *)(sr_frame_1400EE0A0 + 288)) /* [rsp+120h] */

  input_value_3 = a4;
  input_value = a4;
  input_value_4 = a1;
  input_value_2 = a1;
  if ( a2 )
  {
    (*(_QWORD *)(void *)(offset_operand+16)) = 0;
    (*(_DWORD *)(void *)(offset_operand+48)) = 0;
    (*(_QWORD *)(void *)(offset_operand+208)) = a3;
    (*(_QWORD *)(void *)(offset_operand+216)) = a3 + a2;
    (*(_QWORD *)(void *)(offset_operand+200)) = (*(_QWORD *)(void *)(offset_operand+216));
    (*(_QWORD *)(void *)(offset_operand+192)) = a3;
    (*(_DWORD *)(void *)(offset_operand+184)) = 0;
    allocation_buffer = sub_140166160((__int64)offset_operand, (int *)&g_1B0037420, (int *)&g_1B0037424, &callee_output_word, 0);
    if ( allocation_buffer )
    {
      state_word = g_1B0037420;
      state_word_2 = g_1B0037424;
      cached_callee_output_word = callee_output_word;
      scaled_index = callee_output_word * g_1B0037420;
      iteration_count = 0;
      callee_output_word *= g_1B0037420;
      if ( (int)g_1B0037424 > 0 )
      {
        state_word_3 = g_1862AE010;
        running_total = 0;
        do
        {
          element_index = 0;
          if ( state_word > 0 )
          {
            record_byte_offset = running_total;
            running_total_2 = running_total;
            do
            {
              table_value = SR_VEC_PTR_LANES(128, allocation_buffer, u8)[running_total_2];
              table_value_2 = SR_VEC_PTR_LANES(128, allocation_buffer, u8)[running_total_2 + 1];
              table_value_3 = SR_VEC_PTR_LANES(128, allocation_buffer, u8)[running_total_2 + 2];
              if ( cached_callee_output_word == 4 )
                table_value_4 = SR_VEC_PTR_LANES(128, allocation_buffer, u8)[record_byte_offset + 3];
              else
                table_value_4 = 255;
              integer_difference = state_word_2 - iteration_count;
              if ( state_word_3 )
                dword_140404A6C[element_index + 468765295 + state_word * (integer_difference - 1)] = (table_value_3 << 8) + table_value_4 + (table_value_2 << 16) + (table_value << 24);
              else
                dword_140404A6C[element_index + 468765295 + state_word * (integer_difference - 1)] = (table_value_4 << 24) + table_value + (table_value_3 << 16) + (table_value_2 << 8);
              state_word = g_1B0037420;
              ++element_index;
              state_word_2 = g_1B0037424;
              running_total_2 += cached_callee_output_word;
              record_byte_offset += 4;
            }
            while ( element_index < (int)g_1B0037420 );
            scaled_index = callee_output_word;
          }
          ++iteration_count;
          running_total += scaled_index;
        }
        while ( iteration_count < state_word_2 );
        input_value_2 = input_value_4;
        input_value = input_value_3;
      }
      free(allocation_buffer);
      if ( ((g_1B0037420 - 1) & g_1B0037420) == 0 )
      {
        state_word_4 = g_1B0037424;
        if ( ((g_1B0037424 - 1) & g_1B0037424) == 0 )
        {
          state_address = &dword_140404A6C[44 * input_value_2 + 284024933];
          *state_address = g_1B0037420;
          state_address[1] = state_word_4;
          LOBYTE(g_18402CC20) = 0;
          state_address[5] = a5;
          state_address[6] = a6;
          state_address[7] = a7;
          state_address[8] = a8;
          state_address[2] = 1;
          state_address[3] = 6408;
          state_address[4] = 6408;
          state_address[10] = 0;
          free(*((void **)state_address + 6));
          allocated_buffer = sr_path_malloc((int)(4 * *state_address * state_address[1]));
          iteration_count_2 = 0;
          *((_QWORD *)state_address + 6) = allocated_buffer;
          if ( (int)state_address[1] > 0 )
          {
            do
            {
              loaded_word = *state_address;
              for ( i = 0; i < (int)*state_address; loaded_word = *state_address )
              {
                scaled_index_2 = i + loaded_word * iteration_count_2;
                if ( g_1862AE010 )
                {
                  LOBYTE(dword_140404A6C[scaled_index_2 + 468765295]) = 0;
                  dword_140404A6C[scaled_index_2 + 468765295] |= a9;
                }
                else
                {
                  HIBYTE(dword_140404A6C[scaled_index_2 + 468765295]) = 0;
                  dword_140404A6C[scaled_index_2 + 468765295] |= a9 << 24;
                }
                ++i;
                *(_DWORD *)(*((_QWORD *)state_address + 6) + 4LL * scaled_index_2) = dword_140404A6C[scaled_index_2 + 468765295];
              }
              ++iteration_count_2;
            }
            while ( iteration_count_2 < (int)state_address[1] );
            input_value = input_value_3;
          }
          if ( input_value )
            sub_14009A370(input_value_2);
          sub_14014D3E0(input_value_2, 0);
        }
      }
    }
  }
  return 0; /* native EAX=0 on the shared epilogue */
}
#undef unused_frame_slot_0
#undef callee_output_word
#undef input_value_3
#undef input_value_4
#undef unused_frame_slot_288

//----- (00000001400EE5F0) ----------------------------------------------------
__int64            sub_1400EE5F0(int a1, int a2)
{
  int integer_quotient;
  __int64 record_word_offset;
  int record_byte_offset;
  int scaled_index;
  unsigned int *state_address;
  signed int player;
  signed int i;
  float weighted_sum;
  unsigned int *state_address_2;
  int scaled_index_2;

  integer_quotient = a2;
  record_word_offset = 3LL * a1;
  record_byte_offset = dword_140404A6C[6 * a1 + 335047061];
  if ( record_byte_offset > 0 )
    *(float *)&dword_140404A6C[6 * a1 + 335047062] = (float)((float)a2 / (float)record_byte_offset)
                                                   + *(float *)&dword_140404A6C[6 * a1 + 335047062];
  scaled_index = dword_140404A6C[5873 * a1 + 283831506];
  if ( scaled_index > 0 )
    integer_quotient = a2 / scaled_index;
  state_address = &g_151620CE4;
  player = 0;
  for ( i = 0; i < 256; ++i )
  {
    if ( *(state_address - 33) && *state_address == a1 )
    {
      *(state_address - 14) += (int)(float)(fminf(fmaxf(1.0 - (float)((float)(int)state_address[2] / (float)record_byte_offset), 0.0), 1.0) * (float)integer_quotient);
      sr_event_player_finance(i);
    }
    state_address += 3597;
  }
  weighted_sum = *(float *)&dword_140404A6C[2 * record_word_offset + 335047062];
  if ( weighted_sum > 500.0 )
  {
    state_address_2 = &g_151620CEC;
    *(float *)&dword_140404A6C[2 * record_word_offset + 335047062] = weighted_sum * 0.2;
    do
    {
      if ( *(state_address_2 - 35) && *(state_address_2 - 2) == a1 )
      {
        record_byte_offset += 4 * *state_address_2;
        scaled_index_2 = 5 * *state_address_2;
        dword_140404A6C[2 * record_word_offset + 335047061] = record_byte_offset;
        *state_address_2 = scaled_index_2;
        sr_event_player_finance(player);
      }
      ++player;
      state_address_2 += 3597;
    }
    while ( player < 256 );
  }
  return sr_event_stock_prices();
}

//----- (00000001400EF980) ----------------------------------------------------
__int64            sub_1400EF980(int a1, int a2)
{
  __int64 result;
  __int64 player_record_offset;
  __int64 input_value;
  int table_value;
  signed int table_value_2;
  __int64 scaled_index;
  __int64 human;
  signed int scaled_index_2;
  float weighted_sum;
  signed int createitem_result;
  int i;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400EF980[64];
#define float_buffer (*(float (*)[4])(void *)(sr_frame_1400EF980 + 0)) /* [rsp+20h] */
#define scratch_buffer (*(_OWORD (*)[2])(void *)(sr_frame_1400EF980 + 16)) /* [rsp+30h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_1400EF980 + 48)) /* [rsp+50h] */

  result = a1;
  player_record_offset = 3597LL * a1;
  input_value = a2;
  table_value = dword_140404A6C[player_record_offset + 71856279];
  if ( table_value < 10 )
  {
    table_value_2 = dword_140404A6C[player_record_offset + 71856272];
    scaled_index = 4673LL * (int)dword_140404A6C[player_record_offset + 71856343];
    human = (int)dword_140404A6C[player_record_offset + 71856292];
    result = 3 * (input_value + scaled_index);
    scaled_index_2 = dword_140404A6C[3 * input_value + 225654127 + 3 * scaled_index];
    if ( table_value_2 >= scaled_index_2 )
    {
      result = (unsigned int)(table_value + 1);
      dword_140404A6C[player_record_offset + 71856272] = table_value_2 - scaled_index_2;
      dword_140404A6C[player_record_offset + 71856279] = result;
      if ( (_DWORD)input_value == 1 && (_DWORD)human != -1 )
      {
        weighted_sum = *(float *)&dword_140404A6C[7166 * human + 280651336];
        LODWORD(float_buffer[0]) = dword_140404A6C[7166 * human + 280651335];
        LODWORD(float_buffer[2]) = dword_140404A6C[7166 * human + 280651337];
        float_buffer[1] = weighted_sum;
        unused_written_slot = 1065353216;
        scratch_buffer[0] = xmmword_140278D30;
        scratch_buffer[1] = xmmword_140278D30;
        createitem_result = sr_CreateItem(30, float_buffer, nullptr, (float *)scratch_buffer);
        for ( i = 0; i < 7; ++i )
        {
          result = sr_item_transfer(createitem_result, -1, human, i);
          if ( (_DWORD)result )
            break;
        }
      }
    }
  }
  return result;
}
#undef float_buffer
#undef scratch_buffer
#undef unused_written_slot

//----- (00000001400EFAD0) ----------------------------------------------------
__int64            sub_1400EFAD0(int a1, int a2)
{
  int selection_flag;
  int running_total;
  unsigned int *state_address;
  int item;
  float *point;
  __int64 corporation;
  __int64 saved_corporation;
  int iteration_count;
  __int64 iteration_count_2;
  unsigned int *state_address_2;
  __int64 scaled_index;
  unsigned int table_value;
  int masked_bits;
  unsigned int masked_bits_2;
  int masked_bits_3;
  __int64 result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400EFAD0[16];
#define record_word_offset (*(__int64 (*))(void *)(sr_frame_1400EFAD0 + 0)) /* [rsp+80h] */
#define record_word_offset_2 (*(__int64 (*))(void *)(sr_frame_1400EFAD0 + 8)) /* [rsp+88h] */

  selection_flag = 0;
  running_total = 0;
  state_address = &g_182BBB194;
  item = 0;
  point = (float *)&g_182BBB1DC;
  corporation = a1;
  record_word_offset = 5873LL * a1;
  record_word_offset_2 = 279LL * a2;
  do
  {
    if ( *(state_address - 5) && sr_corporation_vault_contains_point(point, corporation, 0.0) )
    {
      if ( *state_address == 18 )
      {
        running_total += sr_item_cash_value(item);
      }
      else if ( dword_140404A6C[record_word_offset_2 + 283831591 + record_word_offset] && item == dword_140404A6C[record_word_offset_2 + 283831592 + record_word_offset] )
      {
        selection_flag = 1;
      }
    }
    ++item;
    point += 1760;
    state_address += 1760;
  }
  while ( item < 1024 );
  saved_corporation = corporation;
  iteration_count = 0;
  if ( (int)dword_140404A6C[2570 * saved_corporation + 276011072] > 0 )
  {
    iteration_count_2 = 0;
    state_address_2 = &dword_140404A6C[2570 * saved_corporation + 276011073];
    while ( *state_address_2 != dword_140404A6C[record_word_offset_2 + 283831594 + record_word_offset] )
    {
      ++iteration_count;
      ++iteration_count_2;
      state_address_2 += 6;
      if ( iteration_count_2 >= (int)dword_140404A6C[2570 * saved_corporation + 276011072] )
        goto LABEL_17;
    }
    selection_flag = 1;
  }
LABEL_17:
  scaled_index = record_word_offset_2 * 4 + record_word_offset * 4;
  table_value = dword_140404A6C[record_word_offset_2 + 283831591 + record_word_offset];
  if ( table_value <= 1 )
  {
    if ( selection_flag )
      masked_bits_3 = *(int *)((char *)&g_183EBFF3C + scaled_index) / 10;
    else
      masked_bits_3 = -10;
    masked_bits_2 = running_total / 10 + masked_bits_3;
    if ( selection_flag )
      return masked_bits_2;
  }
  else
  {
    masked_bits = running_total / 10 - *(int *)((char *)&g_183EBFF48 + scaled_index) / 10;
    if ( table_value == 2 )
    {
      masked_bits_2 = masked_bits + 50;
      if ( masked_bits < 0 )
        masked_bits_2 = running_total / 10 - *(int *)((char *)&g_183EBFF48 + scaled_index) / 10;
      if ( selection_flag )
      {
        if ( (int)masked_bits_2 >= -10 )
          masked_bits_2 += 10;
        else
          return (unsigned int)-10;
        return masked_bits_2;
      }
    }
    else
    {
      masked_bits_2 = running_total / 10 - *(int *)((char *)&g_183EBFF48 + scaled_index) / 10;
      if ( selection_flag )
        return (unsigned int)(*(int *)((char *)&g_183EBFF3C + scaled_index) / 10 + masked_bits);
    }
  }
  if ( running_total > 0 )
    return masked_bits_2;
  result = 4294957296LL;
  if ( (int)game_day_time > *(int *)((char *)&g_183EBFF40 + scaled_index) )
    return masked_bits_2;
  return result;
}
#undef record_word_offset
#undef record_word_offset_2

//----- (00000001400EFD20) ----------------------------------------------------
__int64            sub_1400EFD20(int a1, int a2)
{
  __int64 player_record_offset;
  int human;
  __int64 table_value;
  __int64 input_value;
  __int64 scaled_index;
  float combined_products;
  float state_address;
  float state_address_2;
  float state_address_3;
  __int128 masked_bits;
  __int128 masked_bits_2;
  unsigned int createvehicle_result;
  unsigned int saved_createvehicle_result;
  signed int createitem_result;
  int i;
  __int64 table_value_2;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  __int64 scaled_index_5;
  __int64 scaled_index_6;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400EFD20[112];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400EFD20 + 0)) /* [rsp+0h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_1400EFD20 + 48)) /* [rsp+30h] */
#define matrix (*(_OWORD (*)[2])(void *)(sr_frame_1400EFD20 + 64)) /* [rsp+40h] */
#define unused_written_slot (*(unsigned int (*))(void *)(sr_frame_1400EFD20 + 96)) /* [rsp+60h] */
#define unused_frame_slot_104 (*(__int64 (*))(void *)(sr_frame_1400EFD20 + 104)) /* [rsp+68h] */

  player_record_offset = 3597LL * a1;
  human = dword_140404A6C[player_record_offset + 71856292];
  if ( human != -1 && (int)dword_140404A6C[player_record_offset + 71856280] < 3 )
  {
    table_value = (int)dword_140404A6C[player_record_offset + 71856343];
    input_value = a2;
    if ( (int)dword_140404A6C[player_record_offset + 71856272] >= (int)dword_140404A6C[14019 * table_value + 225654127 + 3 * a2] )
    {
      scaled_index = 14019 * table_value;
      combined_products = (float)-dword_140404A6C[14019 * table_value + 225654177] * 4.0;
      state_address = (float)(combined_products * *(float *)&dword_140404A6C[scaled_index + 225641216]) + *(float *)&dword_140404A6C[scaled_index + 225654178];
      state_address_2 = (float)(combined_products * *(float *)&dword_140404A6C[scaled_index + 225641218]) + *(float *)&dword_140404A6C[scaled_index + 225654180];
      state_address_3 = (float)(combined_products * *(float *)&dword_140404A6C[scaled_index + 225641217]) + *(float *)&dword_140404A6C[scaled_index + 225654179];
      dword_140404A6C[scaled_index + 225654177] = ((unsigned __int8)dword_140404A6C[scaled_index + 225654177] + 1) & 7;
      float_buffer[0] = state_address;
      masked_bits = *(_OWORD *)&dword_140404A6C[14019 * table_value + 225641210];
      float_buffer[2] = state_address_2;
      matrix[0] = masked_bits;
      masked_bits_2 = *(_OWORD *)&dword_140404A6C[14019 * table_value + 225641214];
      float_buffer[1] = state_address_3;
      matrix[1] = masked_bits_2;
      unused_written_slot = dword_140404A6C[14019 * table_value + 225641218];
      sr_math_mat3_rotate_rows((__int64)matrix, (float *)&dword_1402F6188, sr_export_float_lane_container(1070141403));
      createvehicle_result = sr_CreateVehicle(
              dword_140404A6C[14019 * (int)dword_140404A6C[player_record_offset + 71856343] + 225654126 + 3 * input_value],
              float_buffer,
              nullptr,
              (unsigned int *)matrix,
              dword_140404A6C[14019 * (int)dword_140404A6C[player_record_offset + 71856343] + 225654128 + 3 * input_value]);
      saved_createvehicle_result = createvehicle_result;
      if ( createvehicle_result != -1 )
        dword_140404A6C[5210 * createvehicle_result + 129716718] = a1;
      dword_140404A6C[player_record_offset + 71856272] -= dword_140404A6C[14019 * (int)dword_140404A6C[player_record_offset + 71856343] + 225654127 + 3 * input_value];
      createitem_result = sr_CreateItem(27, float_buffer, nullptr, (float *)matrix);
      dword_140404A6C[1760 * createitem_result + 278846053] = saved_createvehicle_result;
      for ( i = 2; i < 7; ++i )
      {
        if ( (unsigned int)sr_item_transfer(createitem_result, -1, human, i) )
          break;
      }
      ++dword_140404A6C[player_record_offset + 71856280];
      sr_event_player_update(a1);
      if ( game_type == 3 )
        sr_event_player_finance(a1);
      table_value_2 = (int)dword_140404A6C[player_record_offset + 71856343];
      scaled_index_2 = 14019 * table_value_2;
      scaled_index_3 = (int)dword_140404A6C[14019 * table_value_2 + 225654128];
      if ( (int)scaled_index_3 > 0 )
      {
        scaled_index_4 = 4673 * table_value_2;
        dword_140404A6C[scaled_index_2 + 225654128] = scaled_index_3 - 1;
        scaled_index_5 = 3 * (scaled_index_4 + scaled_index_3);
        scaled_index_6 = 3 * (scaled_index_4 + input_value);
        *(_QWORD *)&dword_140404A6C[scaled_index_6 + 225654126] = *(_QWORD *)&dword_140404A6C[scaled_index_5 + 225654126];
        dword_140404A6C[scaled_index_6 + 225654128] = dword_140404A6C[scaled_index_5 + 225654128];
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef float_buffer
#undef matrix
#undef unused_written_slot
#undef unused_frame_slot_104

//----- (00000001400F00D0) ----------------------------------------------------
__int64            sub_1400F00D0(int a1, int a2, unsigned int a3)
{
  __int64 record_word_offset;
  unsigned int iteration_count;
  int table_value;
  unsigned int *i;
  __int64 scaled_index;

  if ( a2 == -1 )
    return 0xFFFFFFFFLL;
  record_word_offset = 5873LL * a2;
  iteration_count = 0;
  table_value = dword_140404A6C[record_word_offset + 283836331];
  if ( table_value <= 0 )
    return 0xFFFFFFFFLL;
  for ( i = &dword_140404A6C[record_word_offset + 283836332]; *i; i += 13 )
  {
    if ( (int)++iteration_count >= table_value )
      return 0xFFFFFFFFLL;
  }
  scaled_index = record_word_offset * 4 + 52LL * iteration_count;
  *(unsigned int *)((char *)&g_183EC491C + scaled_index) = 1;
  return sr_CreateVehicle(
           a1,
           (float *)((char *)&g_183EC4920 + scaled_index),
           nullptr,
           (unsigned int *)((char *)&g_183EC492C + scaled_index),
           a3);
}

//----- (00000001400F04F0) ----------------------------------------------------
void            sub_1400F04F0(int a1, int a2)
{
  __int64 player_record_offset;
  __int64 scaled_index;
  signed int scaled_index_2;
  int scaled_index_3;
  int human;
  __int64 scaled_index_4;
  float weighted_sum;
  signed int createitem_result;
  int i;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F04F0[64];
#define float_buffer (*(float (*)[4])(void *)(sr_frame_1400F04F0 + 0)) /* [rsp+20h] */
#define scratch_buffer (*(_OWORD (*)[2])(void *)(sr_frame_1400F04F0 + 16)) /* [rsp+30h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_1400F04F0 + 48)) /* [rsp+50h] */

  player_record_offset = 3597LL * a1;
  if ( (int)dword_140404A6C[player_record_offset + 71856279] < 20 )
  {
    scaled_index = a2 + 4673LL * (int)dword_140404A6C[player_record_offset + 71856343];
    scaled_index_2 = dword_140404A6C[3 * scaled_index + 225654127];
    scaled_index_3 = dword_140404A6C[3 * scaled_index + 225654126];
    if ( (int)dword_140404A6C[player_record_offset + 71856272] >= scaled_index_2 )
    {
      human = dword_140404A6C[player_record_offset + 71856292];
      scaled_index_4 = 7166LL * human;
      weighted_sum = *(float *)&dword_140404A6C[scaled_index_4 + 280651336];
      LODWORD(float_buffer[0]) = dword_140404A6C[scaled_index_4 + 280651335];
      LODWORD(float_buffer[2]) = dword_140404A6C[scaled_index_4 + 280651337];
      float_buffer[1] = weighted_sum;
      unused_written_slot = 1065353216;
      scratch_buffer[0] = xmmword_140278D30;
      scratch_buffer[1] = xmmword_140278D30;
      createitem_result = sr_CreateItem(scaled_index_3, float_buffer, nullptr, (float *)scratch_buffer);
      for ( i = 2; i < 7; ++i )
      {
        if ( (unsigned int)sr_item_transfer(createitem_result, -1, human, i) )
          break;
      }
      dword_140404A6C[player_record_offset + 71856272] -= scaled_index_2;
      ++dword_140404A6C[player_record_offset + 71856279];
      sr_event_player_update(a1);
    }
  }
}
#undef float_buffer
#undef scratch_buffer
#undef unused_written_slot

//----- (00000001400F3B30) ----------------------------------------------------
__int64            sub_1400F3B30(int a1)
{
  signed int state_word;
  int iteration_count;
  signed int iteration_count_2;
  unsigned int state_word_2;
  unsigned int *buffer_cursor;
  signed int state_word_3;
  signed int iteration_count_3;
  unsigned int state_word_4;
  unsigned int *buffer_cursor_2;
  signed int state_word_5;
  signed int iteration_count_4;
  unsigned int state_word_6;
  unsigned int *buffer_cursor_3;
  signed int state_word_7;
  signed int iteration_count_5;
  unsigned int state_word_8;
  unsigned int *buffer_cursor_4;
  signed int state_word_9;
  signed int iteration_count_6;
  unsigned int state_word_10;
  unsigned int *buffer_cursor_5;
  __int64 result;
  unsigned int state_word_11;
  unsigned int *buffer_cursor_6;

  state_word = g_183EC5820;
  iteration_count = 0;
  iteration_count_2 = 0;
  if ( (int)g_183EC5820 > 0 )
  {
    state_word_2 = g_183EC5820;
    buffer_cursor = &g_183EC5824;
    do
    {
      if ( *buffer_cursor == a1 )
      {
        g_183EC5820 = state_word_2 - 1;
        *buffer_cursor = dword_140404A6C[state_word_2 + 283837293];
        state_word = g_183EC5820;
      }
      else
      {
        ++iteration_count_2;
        ++buffer_cursor;
      }
      state_word_2 = state_word;
    }
    while ( iteration_count_2 < state_word );
  }
  state_word_3 = g_183ECB3E4;
  iteration_count_3 = 0;
  if ( (int)g_183ECB3E4 > 0 )
  {
    state_word_4 = g_183ECB3E4;
    buffer_cursor_2 = &g_183ECB3E8;
    do
    {
      if ( *buffer_cursor_2 == a1 )
      {
        g_183ECB3E4 = state_word_4 - 1;
        *buffer_cursor_2 = dword_140404A6C[state_word_4 + 283843166];
        state_word_3 = g_183ECB3E4;
      }
      else
      {
        ++iteration_count_3;
        ++buffer_cursor_2;
      }
      state_word_4 = state_word_3;
    }
    while ( iteration_count_3 < state_word_3 );
  }
  state_word_5 = g_183ED0FA8;
  iteration_count_4 = 0;
  if ( (int)g_183ED0FA8 > 0 )
  {
    state_word_6 = g_183ED0FA8;
    buffer_cursor_3 = &g_183ED0FAC;
    do
    {
      if ( *buffer_cursor_3 == a1 )
      {
        g_183ED0FA8 = state_word_6 - 1;
        *buffer_cursor_3 = dword_140404A6C[state_word_6 + 283849039];
        state_word_5 = g_183ED0FA8;
      }
      else
      {
        ++iteration_count_4;
        ++buffer_cursor_3;
      }
      state_word_6 = state_word_5;
    }
    while ( iteration_count_4 < state_word_5 );
  }
  state_word_7 = g_183ED6B6C;
  iteration_count_5 = 0;
  if ( (int)g_183ED6B6C > 0 )
  {
    state_word_8 = g_183ED6B6C;
    buffer_cursor_4 = &g_183ED6B70;
    do
    {
      if ( *buffer_cursor_4 == a1 )
      {
        g_183ED6B6C = state_word_8 - 1;
        *buffer_cursor_4 = dword_140404A6C[state_word_8 + 283854912];
        state_word_7 = g_183ED6B6C;
      }
      else
      {
        ++iteration_count_5;
        ++buffer_cursor_4;
      }
      state_word_8 = state_word_7;
    }
    while ( iteration_count_5 < state_word_7 );
  }
  state_word_9 = g_183EDC730;
  iteration_count_6 = 0;
  if ( (int)g_183EDC730 > 0 )
  {
    state_word_10 = g_183EDC730;
    buffer_cursor_5 = &g_183EDC734;
    do
    {
      if ( *buffer_cursor_5 == a1 )
      {
        g_183EDC730 = state_word_10 - 1;
        *buffer_cursor_5 = dword_140404A6C[state_word_10 + 283860785];
        state_word_9 = g_183EDC730;
      }
      else
      {
        ++iteration_count_6;
        ++buffer_cursor_5;
      }
      state_word_10 = state_word_9;
    }
    while ( iteration_count_6 < state_word_9 );
  }
  result = g_183EE22F4;
  if ( (int)g_183EE22F4 > 0 )
  {
    state_word_11 = g_183EE22F4;
    buffer_cursor_6 = &g_183EE22F8;
    do
    {
      if ( *buffer_cursor_6 == a1 )
      {
        g_183EE22F4 = state_word_11 - 1;
        *buffer_cursor_6 = dword_140404A6C[state_word_11 + 283866658];
        result = g_183EE22F4;
      }
      else
      {
        ++iteration_count;
        ++buffer_cursor_6;
      }
      state_word_11 = result;
    }
    while ( iteration_count < (int)result );
  }
  return result;
}

//----- (00000001400F3D10) ----------------------------------------------------
void            sub_1400F3D10(int a1)
{
  unsigned int *state_address;
  __int64 remaining_count;
  unsigned int table_value;
  __int64 scaled_index;
  __int64 scaled_index_2;

  state_address = &g_182BBB2DC;
  remaining_count = 1024;
  do
  {
    if ( *(state_address - 87) && *(state_address - 82) == 25 )
    {
      table_value = state_address[1];
      if ( table_value == 1111 * a1 + 1111 )
      {
        scaled_index = (int)*state_address;
        if ( (_DWORD)scaled_index != -1 )
        {
          dword_140404A6C[1760 * scaled_index + 278846052] = 0;
          dword_140404A6C[1760 * *state_address + 278845980] = -1;
          dword_140404A6C[1760 * *state_address + 278845983] = 0;
          sr_item_phone_changed(*state_address);
          table_value = state_address[1];
        }
        state_address[72] = 0;
        *state_address = -1;
        *(state_address - 80) = 0;
      }
      if ( table_value == 1111 * a1 + 1112 )
      {
        scaled_index_2 = (int)*state_address;
        if ( (_DWORD)scaled_index_2 != -1 )
        {
          dword_140404A6C[1760 * scaled_index_2 + 278846052] = 0;
          dword_140404A6C[1760 * *state_address + 278845980] = -1;
          dword_140404A6C[1760 * *state_address + 278845983] = 0;
          sr_item_phone_changed(*state_address);
        }
        state_address[72] = 0;
        *state_address = -1;
        *(state_address - 80) = 0;
      }
    }
    state_address += 1760;
    --remaining_count;
  }
  while ( remaining_count );
}

//----- (00000001400F3E60) ----------------------------------------------------
__int64 sub_1400F3E60()
{
  signed int player;
  int saved_iteration_count;
  int *buffer_cursor;
  int cached_iteration_count;
  int i;
  int iteration_count;
  unsigned int *state_address;
  int saved_iteration_count_2;
  int integer_quotient;
  int integer_quotient_2;
  int iteration_count_2;
  __int64 element_index;
  unsigned int state_word;
  __int64 scaled_index;
  unsigned int *state_address_2;
  int running_total;
  float product_difference;
  float product_difference_2;
  float product_difference_3;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  float weighted_sum_4;
  __int64 remaining_count;
  int *state_address_3;
  __int64 loaded_word;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float weighted_sum_8;
  float weighted_sum_9;
  float weighted_sum_10;
  __int64 table_value;
  float weighted_sum_11;
  float weighted_sum_12;
  __int64 table_value_2;
  float weighted_sum_13;
  float weighted_sum_14;
  float weighted_sum_15;
  float weighted_sum_16;
  float weighted_sum_17;
  float weighted_sum_18;
  __int64 table_value_3;
  float weighted_sum_19;
  float weighted_sum_20;
  __int64 table_value_4;
  float weighted_sum_21;
  float weighted_sum_22;
  float weighted_sum_23;
  float weighted_sum_24;
  float weighted_sum_25;
  float weighted_sum_26;
  __int64 table_value_5;
  float weighted_sum_27;
  float weighted_sum_28;
  __int64 table_value_6;
  float weighted_sum_29;
  float weighted_sum_30;
  float weighted_sum_31;
  float weighted_sum_32;
  float weighted_sum_33;
  float weighted_sum_34;
  __int64 table_value_7;
  float weighted_sum_35;
  float weighted_sum_36;
  unsigned int *state_address_4;
  __int64 remaining_count_2;
  int integer_quotient_3;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  float weighted_sum_37;
  unsigned int *state_address_5;
  unsigned int *state_address_6;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F3E60[112];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400F3E60 + 0)) /* [rsp+0h] */
#define integer_quotient_4 (*(int (*))(void *)(sr_frame_1400F3E60 + 32)) /* [rsp+20h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_1400F3E60 + 36)) /* [rsp+24h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_1400F3E60 + 40)) /* [rsp+28h] */
#define callee_output_word (*(int (*))(void *)(sr_frame_1400F3E60 + 64)) /* [rsp+40h] */
#define frame_word_at_68 (*(int (*))(void *)(sr_frame_1400F3E60 + 68)) /* [rsp+44h] */
#define frame_word_at_72 (*(int (*))(void *)(sr_frame_1400F3E60 + 72)) /* [rsp+48h] */
#define unused_frame_slot_96 (*(__int64 (*))(void *)(sr_frame_1400F3E60 + 96)) /* [rsp+60h] */

  player = 0;
  if ( g_183F7A5B8 )
  {
    saved_iteration_count = 256;
    buffer_cursor = &callee_output_word;
    cached_iteration_count = 0;
    for ( i = 0; i < 3; ++i )
    {
      iteration_count = 0;
      *buffer_cursor = 0;
      state_address = &g_151623978;
      do
      {
        if ( *(state_address - 2886) && !*state_address && *(state_address - 2853) == i )
          *buffer_cursor = ++iteration_count;
        state_address += 3597;
      }
      while ( (__int64)state_address < (__int64)&g_1519A6D78 );
      if ( iteration_count > 0 )
      {
        saved_iteration_count_2 = iteration_count;
        if ( cached_iteration_count >= iteration_count )
          saved_iteration_count_2 = cached_iteration_count;
        cached_iteration_count = saved_iteration_count_2;
        if ( saved_iteration_count > iteration_count )
          saved_iteration_count = iteration_count;
      }
      ++buffer_cursor;
    }
    integer_quotient = 1;
    if ( callee_output_word <= 0 )
      integer_quotient_4 = 1;
    else
      integer_quotient_4 = callee_output_word / saved_iteration_count;
    if ( frame_word_at_68 <= 0 )
      integer_quotient_2 = 1;
    else
      integer_quotient_2 = frame_word_at_68 / saved_iteration_count;
    unused_written_slot = integer_quotient_2;
    if ( frame_word_at_72 > 0 )
      integer_quotient = frame_word_at_72 / saved_iteration_count;
  }
  else
  {
    integer_quotient = 1;
    integer_quotient_4 = 1;
    unused_written_slot = 1;
  }
  iteration_count_2 = 0;
  element_index = 0;
  state_word = g_183EBFCB0;
  unused_written_slot_2 = integer_quotient;
  do
  {
    scaled_index = 5873 * element_index;
    state_address_2 = &g_182BBCD64;
    running_total = dword_140404A6C[5873 * element_index + 283831504];
    do
    {
      if ( *(state_address_2 - 1785) )
      {
        if ( *(state_address_2 - 1780) == 17 )
        {
          product_difference = *((float *)state_address_2 - 1762);
          if ( product_difference >= *(float *)&dword_140404A6C[scaled_index + 283831485] && product_difference < *(float *)&dword_140404A6C[scaled_index + 283831488] )
          {
            product_difference_2 = *((float *)state_address_2 - 1760);
            if ( product_difference_2 >= *(float *)&dword_140404A6C[scaled_index + 283831487] && product_difference_2 < *(float *)&dword_140404A6C[scaled_index + 283831490] )
              running_total += 250;
          }
        }
      }
      if ( *(state_address_2 - 25) )
      {
        if ( *(state_address_2 - 20) == 17 )
        {
          product_difference_3 = *((float *)state_address_2 - 2);
          if ( product_difference_3 >= *(float *)&dword_140404A6C[scaled_index + 283831485]
            && product_difference_3 < *(float *)&dword_140404A6C[scaled_index + 283831488]
            && *(float *)state_address_2 >= *(float *)&dword_140404A6C[scaled_index + 283831487]
            && *(float *)state_address_2 < *(float *)&dword_140404A6C[scaled_index + 283831490] )
          {
            running_total += 250;
          }
        }
      }
      if ( state_address_2[1735] )
      {
        if ( state_address_2[1740] == 17 )
        {
          weighted_sum = *((float *)state_address_2 + 1758);
          if ( weighted_sum >= *(float *)&dword_140404A6C[scaled_index + 283831485] && weighted_sum < *(float *)&dword_140404A6C[scaled_index + 283831488] )
          {
            weighted_sum_2 = *((float *)state_address_2 + 1760);
            if ( weighted_sum_2 >= *(float *)&dword_140404A6C[scaled_index + 283831487] && weighted_sum_2 < *(float *)&dword_140404A6C[scaled_index + 283831490] )
              running_total += 250;
          }
        }
      }
      if ( state_address_2[3495] )
      {
        if ( state_address_2[3500] == 17 )
        {
          weighted_sum_3 = *((float *)state_address_2 + 3518);
          if ( weighted_sum_3 >= *(float *)&dword_140404A6C[scaled_index + 283831485] && weighted_sum_3 < *(float *)&dword_140404A6C[scaled_index + 283831488] )
          {
            weighted_sum_4 = *((float *)state_address_2 + 3520);
            if ( weighted_sum_4 >= *(float *)&dword_140404A6C[scaled_index + 283831487] && weighted_sum_4 < *(float *)&dword_140404A6C[scaled_index + 283831490] )
              running_total += 250;
          }
        }
      }
      state_address_2 += 7040;
    }
    while ( (__int64)state_address_2 < (__int64)&g_18329CD64 );
    remaining_count = 4;
    state_address_3 = (int *)&dword_140404A6C[scaled_index + 283831592];
    do
    {
      if ( *(state_address_3 - 4) )
      {
        loaded_word = *state_address_3;
        if ( (_DWORD)loaded_word != -1 )
        {
          weighted_sum_5 = *(float *)&dword_140404A6C[scaled_index + 283831485];
          weighted_sum_6 = *(float *)&dword_140404A6C[1760 * loaded_word + 278845916];
          if ( weighted_sum_6 >= weighted_sum_5 )
          {
            weighted_sum_7 = *(float *)&dword_140404A6C[scaled_index + 283831488];
            if ( weighted_sum_6 < weighted_sum_7 )
            {
              weighted_sum_8 = *(float *)&dword_140404A6C[1760 * loaded_word + 278845918];
              weighted_sum_9 = *(float *)&dword_140404A6C[scaled_index + 283831487];
              if ( weighted_sum_8 >= weighted_sum_9 )
              {
                weighted_sum_10 = *(float *)&dword_140404A6C[scaled_index + 283831490];
                if ( weighted_sum_8 < weighted_sum_10 )
                {
                  if ( (unsigned int)(*(state_address_3 - 1) - 7) > 2
                    || (table_value = state_address_3[1], (_DWORD)table_value == -1)
                    || (weighted_sum_11 = *(float *)&dword_140404A6C[1760 * table_value + 278845916], weighted_sum_11 >= weighted_sum_5)
                    && weighted_sum_11 < weighted_sum_7
                    && (weighted_sum_12 = *(float *)&dword_140404A6C[1760 * table_value + 278845918], weighted_sum_12 >= weighted_sum_9)
                    && weighted_sum_12 < weighted_sum_10 )
                  {
                    running_total += state_address_3[12];
                  }
                }
              }
            }
          }
        }
      }
      if ( state_address_3[275] )
      {
        table_value_2 = state_address_3[279];
        if ( (_DWORD)table_value_2 != -1 )
        {
          weighted_sum_13 = *(float *)&dword_140404A6C[scaled_index + 283831485];
          weighted_sum_14 = *(float *)&dword_140404A6C[1760 * table_value_2 + 278845916];
          if ( weighted_sum_14 >= weighted_sum_13 )
          {
            weighted_sum_15 = *(float *)&dword_140404A6C[scaled_index + 283831488];
            if ( weighted_sum_14 < weighted_sum_15 )
            {
              weighted_sum_16 = *(float *)&dword_140404A6C[1760 * table_value_2 + 278845918];
              weighted_sum_17 = *(float *)&dword_140404A6C[scaled_index + 283831487];
              if ( weighted_sum_16 >= weighted_sum_17 )
              {
                weighted_sum_18 = *(float *)&dword_140404A6C[scaled_index + 283831490];
                if ( weighted_sum_16 < weighted_sum_18 )
                {
                  if ( (unsigned int)(state_address_3[278] - 7) > 2
                    || (table_value_3 = state_address_3[280], (_DWORD)table_value_3 == -1)
                    || (weighted_sum_19 = *(float *)&dword_140404A6C[1760 * table_value_3 + 278845916], weighted_sum_19 >= weighted_sum_13)
                    && weighted_sum_19 < weighted_sum_15
                    && (weighted_sum_20 = *(float *)&dword_140404A6C[1760 * table_value_3 + 278845918], weighted_sum_20 >= weighted_sum_17)
                    && weighted_sum_20 < weighted_sum_18 )
                  {
                    running_total += state_address_3[291];
                  }
                }
              }
            }
          }
        }
      }
      if ( state_address_3[554] )
      {
        table_value_4 = state_address_3[558];
        if ( (_DWORD)table_value_4 != -1 )
        {
          weighted_sum_21 = *(float *)&dword_140404A6C[scaled_index + 283831485];
          weighted_sum_22 = *(float *)&dword_140404A6C[1760 * table_value_4 + 278845916];
          if ( weighted_sum_22 >= weighted_sum_21 )
          {
            weighted_sum_23 = *(float *)&dword_140404A6C[scaled_index + 283831488];
            if ( weighted_sum_22 < weighted_sum_23 )
            {
              weighted_sum_24 = *(float *)&dword_140404A6C[1760 * table_value_4 + 278845918];
              weighted_sum_25 = *(float *)&dword_140404A6C[scaled_index + 283831487];
              if ( weighted_sum_24 >= weighted_sum_25 )
              {
                weighted_sum_26 = *(float *)&dword_140404A6C[scaled_index + 283831490];
                if ( weighted_sum_24 < weighted_sum_26 )
                {
                  if ( (unsigned int)(state_address_3[557] - 7) > 2
                    || (table_value_5 = state_address_3[559], (_DWORD)table_value_5 == -1)
                    || (weighted_sum_27 = *(float *)&dword_140404A6C[1760 * table_value_5 + 278845916], weighted_sum_27 >= weighted_sum_21)
                    && weighted_sum_27 < weighted_sum_23
                    && (weighted_sum_28 = *(float *)&dword_140404A6C[1760 * table_value_5 + 278845918], weighted_sum_28 >= weighted_sum_25)
                    && weighted_sum_28 < weighted_sum_26 )
                  {
                    running_total += state_address_3[570];
                  }
                }
              }
            }
          }
        }
      }
      if ( state_address_3[833] )
      {
        table_value_6 = state_address_3[837];
        if ( (_DWORD)table_value_6 != -1 )
        {
          weighted_sum_29 = *(float *)&dword_140404A6C[scaled_index + 283831485];
          weighted_sum_30 = *(float *)&dword_140404A6C[1760 * table_value_6 + 278845916];
          if ( weighted_sum_30 >= weighted_sum_29 )
          {
            weighted_sum_31 = *(float *)&dword_140404A6C[scaled_index + 283831488];
            if ( weighted_sum_30 < weighted_sum_31 )
            {
              weighted_sum_32 = *(float *)&dword_140404A6C[1760 * table_value_6 + 278845918];
              weighted_sum_33 = *(float *)&dword_140404A6C[scaled_index + 283831487];
              if ( weighted_sum_32 >= weighted_sum_33 )
              {
                weighted_sum_34 = *(float *)&dword_140404A6C[scaled_index + 283831490];
                if ( weighted_sum_32 < weighted_sum_34 )
                {
                  if ( (unsigned int)(state_address_3[836] - 7) > 2
                    || (table_value_7 = state_address_3[838], (_DWORD)table_value_7 == -1)
                    || (weighted_sum_35 = *(float *)&dword_140404A6C[1760 * table_value_7 + 278845916], weighted_sum_35 >= weighted_sum_29)
                    && weighted_sum_35 < weighted_sum_31
                    && (weighted_sum_36 = *(float *)&dword_140404A6C[1760 * table_value_7 + 278845918], weighted_sum_36 >= weighted_sum_33)
                    && weighted_sum_36 < weighted_sum_34 )
                  {
                    running_total += state_address_3[849];
                  }
                }
              }
            }
          }
        }
      }
      state_address_3 += 1116;
      --remaining_count;
    }
    while ( remaining_count );
    state_address_4 = &g_151620CAC;
    remaining_count_2 = 256;
    do
    {
      if ( *(state_address_4 - 19) )
      {
        if ( state_address_4[14] == iteration_count_2 )
        {
          integer_quotient_3 = running_total / *(&integer_quotient_4 + element_index);
          *state_address_4 += integer_quotient_3 + 250;
          if ( state_word == 1 )
          {
            scaled_index_2 = (int)*(state_address_4 - 4);
            if ( (_DWORD)scaled_index_2 != -1 )
              dword_140404A6C[28 * scaled_index_2 + 134050374] += integer_quotient_3;
          }
        }
      }
      state_address_4 += 3597;
      --remaining_count_2;
    }
    while ( remaining_count_2 );
    dword_140404A6C[scaled_index + 283831505] = running_total;
    scaled_index_3 = 3 * element_index;
    weighted_sum_37 = (float)((float)((float)running_total * 0.000020000001) + 1.0) * *(float *)&dword_140404A6C[6 * element_index + 335047062];
    if ( weighted_sum_37 < 50.0 )
      weighted_sum_37 = 50.0;
    state_word = g_183EBFCB0;
    *(float *)&dword_140404A6C[6 * element_index + 335047062] = weighted_sum_37;
    if ( state_word != 1 && weighted_sum_37 >= 500.0 )
    {
      weighted_sum_37 = weighted_sum_37 * 0.2;
      state_address_5 = &g_151620CEC;
      *(float *)&dword_140404A6C[6 * element_index + 335047062] = weighted_sum_37;
      do
      {
        if ( *(state_address_5 - 35) && *(state_address_5 - 2) == iteration_count_2 )
          *state_address_5 *= 5;
        state_address_5 += 3597;
      }
      while ( (__int64)state_address_5 < (__int64)&g_1519A40EC );
    }
    ++iteration_count_2;
    ++element_index;
    dword_140404A6C[2 * scaled_index_3 + 335047064] = (int)(float)(weighted_sum_37 * 10.0);
  }
  while ( iteration_count_2 < 3 );
  sr_event_stock_prices();
  state_address_6 = &g_151620C60;
  do
  {
    if ( *state_address_6 )
      sr_event_player_finance(player);
    ++player;
    state_address_6 += 3597;
  }
  while ( player < 256 );
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef integer_quotient_4
#undef unused_written_slot
#undef unused_written_slot_2
#undef callee_output_word
#undef frame_word_at_68
#undef frame_word_at_72
#undef unused_frame_slot_96

// 1400F3F3B: conditional instruction was optimized away because r10d.4>=1

//----- (00000001400F45A0) ----------------------------------------------------
__int64            sub_1400F45A0(signed int a1, int a2)
{
  __int64 input_value;
  __int64 input_value_2;
  __int64 record_word_offset;
  __int64 player_record_offset;
  int table_value;
  int integer_quotient;
  unsigned int *state_address;
  int integer_quotient_2;
  unsigned int *state_address_2;
  int integer_quotient_3;
  unsigned int *state_address_3;
  int integer_quotient_4;
  unsigned int *state_address_4;
  int integer_quotient_5;
  unsigned int *state_address_5;
  int integer_quotient_6;
  unsigned int *state_address_6;
  int integer_quotient_7;
  float weighted_sum;
  double weighted_sum_2;
  signed int createitem_result;
  __int64 scaled_index;
       char *table_value_2;
  __int64 byte_count;
  unsigned int cached_world_event_count;
  unsigned int cached_game_tick;
  __int64 shifted_bits;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F45A0[1136];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400F45A0 + 0)) /* [rsp+0h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_1400F45A0 + 32)) /* [rsp+20h] */
#define matrix (*(_OWORD (*)[2])(void *)(sr_frame_1400F45A0 + 48)) /* [rsp+30h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_1400F45A0 + 80)) /* [rsp+50h] */
#define Src (*(__m128i (*)[64])(void *)(sr_frame_1400F45A0 + 96)) /* [rsp+60h] */
#define unused_frame_slot_1120 (*(__int64 (*))(void *)(sr_frame_1400F45A0 + 1120)) /* [rsp+460h] */

  input_value = a1;
  input_value_2 = a2;
  if ( (unsigned int)a1 <= 5 )
  {
    record_word_offset = 5873LL * a1;
    if ( dword_140404A6C[record_word_offset + 283831510] == -1 )
    {
      if ( game_type == 4 )
      {
        player_record_offset = 3597LL * a2;
        table_value = dword_140404A6C[player_record_offset + 71856275];
        if ( table_value <= 0 )
          table_value = 0;
        dword_140404A6C[5 * input_value + 188872238] = table_value;
        if ( !g_16B2AAF28 && (int)dword_140404A6C[539 * input_value + 180001074] > 0 )
        {
          integer_quotient = 0;
          if ( (int)(dword_140404A6C[player_record_offset + 71856275] - 1000) / 100 >= 0 )
            integer_quotient = (int)(dword_140404A6C[player_record_offset + 71856275] - 1000) / 100;
          if ( integer_quotient > 1000 )
            integer_quotient = 1000;
          dword_140404A6C[539 * input_value + 180001074] = g_16B2AAF2C
                                                + (signed int)(integer_quotient * g_16B2AAF2C) / 100;
        }
        if ( !g_16B2CCC9C )
        {
          state_address = &dword_140404A6C[539 * input_value + 180035727];
          if ( (int)*state_address > 0 )
          {
            integer_quotient_2 = 0;
            if ( (int)(dword_140404A6C[player_record_offset + 71856275] - 1000) / 100 >= 0 )
              integer_quotient_2 = (int)(dword_140404A6C[player_record_offset + 71856275] - 1000) / 100;
            if ( integer_quotient_2 > 1000 )
              integer_quotient_2 = 1000;
            *state_address = g_16B2CCCA0 + (signed int)(integer_quotient_2 * g_16B2CCCA0) / 100;
          }
        }
        if ( !g_16B2EEA10 )
        {
          state_address_2 = &dword_140404A6C[539 * input_value + 180070380];
          if ( (int)*state_address_2 > 0 )
          {
            integer_quotient_3 = 0;
            if ( (int)(dword_140404A6C[player_record_offset + 71856275] - 1000) / 100 >= 0 )
              integer_quotient_3 = (int)(dword_140404A6C[player_record_offset + 71856275] - 1000) / 100;
            if ( integer_quotient_3 > 1000 )
              integer_quotient_3 = 1000;
            *state_address_2 = g_16B2EEA14 + (signed int)(integer_quotient_3 * g_16B2EEA14) / 100;
          }
        }
        if ( !g_16B310784 )
        {
          state_address_3 = &dword_140404A6C[539 * input_value + 180105033];
          if ( (int)*state_address_3 > 0 )
          {
            integer_quotient_4 = 0;
            if ( (int)(dword_140404A6C[player_record_offset + 71856275] - 1000) / 100 >= 0 )
              integer_quotient_4 = (int)(dword_140404A6C[player_record_offset + 71856275] - 1000) / 100;
            if ( integer_quotient_4 > 1000 )
              integer_quotient_4 = 1000;
            *state_address_3 = g_16B310788 + (signed int)(integer_quotient_4 * g_16B310788) / 100;
          }
        }
        if ( !g_16B3324F8 )
        {
          state_address_4 = &dword_140404A6C[539 * input_value + 180139686];
          if ( (int)*state_address_4 > 0 )
          {
            integer_quotient_5 = 0;
            if ( (int)(dword_140404A6C[player_record_offset + 71856275] - 1000) / 100 >= 0 )
              integer_quotient_5 = (int)(dword_140404A6C[player_record_offset + 71856275] - 1000) / 100;
            if ( integer_quotient_5 > 1000 )
              integer_quotient_5 = 1000;
            *state_address_4 = g_16B3324FC + (signed int)(integer_quotient_5 * g_16B3324FC) / 100;
          }
        }
        if ( !g_16B35426C )
        {
          state_address_5 = &dword_140404A6C[539 * input_value + 180174339];
          if ( (int)*state_address_5 > 0 )
          {
            integer_quotient_6 = 0;
            if ( (int)(dword_140404A6C[player_record_offset + 71856275] - 1000) / 100 >= 0 )
              integer_quotient_6 = (int)(dword_140404A6C[player_record_offset + 71856275] - 1000) / 100;
            if ( integer_quotient_6 > 1000 )
              integer_quotient_6 = 1000;
            *state_address_5 = g_16B354270 + (signed int)(integer_quotient_6 * g_16B354270) / 100;
          }
        }
        if ( !g_16B375FE0 )
        {
          state_address_6 = &dword_140404A6C[539 * input_value + 180208992];
          if ( (int)*state_address_6 > 0 )
          {
            integer_quotient_7 = 0;
            if ( (int)(dword_140404A6C[player_record_offset + 71856275] - 1000) / 100 >= 0 )
              integer_quotient_7 = (int)(dword_140404A6C[player_record_offset + 71856275] - 1000) / 100;
            if ( integer_quotient_7 > 1000 )
              integer_quotient_7 = 1000;
            *state_address_6 = g_16B375FE4 + (signed int)(integer_quotient_7 * g_16B375FE4) / 100;
          }
        }
      }
      sub_1400F3D10(input_value);
      weighted_sum = *(float *)&dword_140404A6C[record_word_offset + 283831499];
      LODWORD(float_buffer[0]) = dword_140404A6C[record_word_offset + 283831498];
      LODWORD(float_buffer[2]) = dword_140404A6C[record_word_offset + 283831500];
      float_buffer[1] = weighted_sum;
      unused_written_slot = 1065353216;
      weighted_sum_2 = *(float *)&dword_140404A6C[record_word_offset + 283831497];
      matrix[0] = xmmword_140278D30;
      matrix[1] = xmmword_140278D30;
      sr_math_mat3_rotate_rows((__int64)matrix, (float *)matrix + 3, sr_export_float_lane_container(sr_text_float_bits((float)(weighted_sum_2 - 1.570796326795))) /* the original converts to float (cvtsd2ss) before this call */);
      createitem_result = sr_CreateItem(25, float_buffer, nullptr, (float *)matrix);
      if ( createitem_result != -1 )
      {
        scaled_index = 1760LL * createitem_result;
        dword_140404A6C[scaled_index + 278846051] = 0;
        dword_140404A6C[scaled_index + 278845981] = 1111 * (input_value + 1);
        sr_item_phone_changed(createitem_result);
      }
      table_value_2 = off_1402B2890[input_value];
      dword_140404A6C[record_word_offset + 283831510] = input_value_2;
      crt_sprintf(Src, "%s is now manager of %s", (     char *)&dword_140404A6C[3597 * input_value_2 + 71856254], table_value_2);
      if ( game_connected )
      {
        byte_count = -1;
        do
          ++byte_count;
        while ( SR_VEC_LANES(128, Src[0], i8)[byte_count] );
        cached_world_event_count = world_event_count;
        if ( (int)byte_count > 63 )
          LODWORD(byte_count) = 63;
        cached_game_tick = game_tick;
        shifted_bits = (__int64)(int)world_event_count << 7;
        *(unsigned int *)((char *)&g_1873DE460 + shifted_bits) = 2;
        *(unsigned int *)((char *)&g_1873DE464 + shifted_bits) = cached_game_tick;
        crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + shifted_bits), Src, (int)byte_count);
        *((_BYTE *)&g_1873DE4A0 + shifted_bits + (int)byte_count) = 0;
        *(unsigned int *)((char *)&g_1873DE480 + shifted_bits) = byte_count;
        *(unsigned int *)((char *)&g_1873DE484 + shifted_bits) = 0;
        *(unsigned int *)((char *)&g_1873DE488 + shifted_bits) = -1;
        world_event_count = cached_world_event_count + 1;
        *(unsigned int *)((char *)&g_1873DE48C + shifted_bits) = 0;
        HIWORD(world_event_count) = 0;
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef float_buffer
#undef matrix
#undef unused_written_slot
#undef Src
#undef unused_frame_slot_1120

//----- (00000001400F4BC0) ----------------------------------------------------
void            sub_1400F4BC0(int a1, int a2)
{
  __int64 player_record_offset;
  __int64 table_value;
  signed int remaining_amount;
  signed int scaled_index;
  int comparison_result;
  unsigned int selection_code;

  player_record_offset = 3597LL * a1;
  table_value = (int)dword_140404A6C[player_record_offset + 71856292];
  if ( (_DWORD)table_value != -1 )
  {
    remaining_amount = dword_140404A6C[player_record_offset + 71856272];
    scaled_index = dword_140404A6C[14019 * dword_140404A6C[player_record_offset + 71856343] + 225654127 + 3 * a2];
    if ( remaining_amount >= scaled_index )
    {
      if ( (unsigned int)(a2 - 1) <= 2 )
      {
        comparison_result = a2 == 1 ? 3 : (a2 == 2) + 7;
        if ( dword_140404A6C[player_record_offset + 71859822] != comparison_result )
        {
          ++dword_140404A6C[table_value + 282485789];
          remaining_amount -= scaled_index;
          dword_140404A6C[player_record_offset + 71859822] = comparison_result;
          dword_140404A6C[player_record_offset + 71856272] = remaining_amount;
          dword_140404A6C[7166 * table_value + 280658446] = comparison_result;
        }
      }
      if ( (unsigned int)(a2 - 4) <= 1 )
      {
        if ( a2 == 4 )
          selection_code = 1;
        else
          selection_code = 2;
        if ( dword_140404A6C[player_record_offset + 71859826] != selection_code )
        {
          ++dword_140404A6C[table_value + 282485789];
          dword_140404A6C[player_record_offset + 71859826] = selection_code;
          dword_140404A6C[player_record_offset + 71856272] = remaining_amount - scaled_index;
          dword_140404A6C[7166 * table_value + 280658449] = selection_code;
        }
      }
      sr_event_player_update(a1);
      if ( game_type == 3 )
        sr_event_player_finance(a1);
    }
  }
}

// 1400F4C9B: conditional instruction was optimized away because r8d.4==5

//----- (00000001400F4D00) ----------------------------------------------------
__int64            sub_1400F4D00(int a1, int a2)
{
  int corporation;
  unsigned int *state_address;
  __int64 packed_word_bits;
  unsigned int *state_address_2;
  __int64 masked_bits;
  unsigned int scaled_index;
  __int64 remaining_amount;
  int mission;
  unsigned int *saved_state_address;
  __int64 table_value;
  char *byte_cursor;
  unsigned int cached_game_type;
  signed int player;
  unsigned int *state_address_3;
  unsigned int table_value_2;
  int table_value_3;
  int integer_difference;
  int scaled_index_2;
  int iteration_count;
  float *state_address_4;
  float scaled_value;
  signed int player_2;
  unsigned int *state_address_5;
  unsigned int loaded_word;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F4D00[208];
#define masked_bits_2 (*(__int64 (*))(void *)(sr_frame_1400F4D00 + 0)) /* [rsp+20h] */
#define cached_scaled_index (*(unsigned int (*))(void *)(sr_frame_1400F4D00 + 184)) /* [rsp+D8h] */
#define state_address_6 (*(unsigned int * (*))(void *)(sr_frame_1400F4D00 + 192)) /* [rsp+E0h] */
#define saved_remaining_amount (*(__int64 (*))(void *)(sr_frame_1400F4D00 + 200)) /* [rsp+E8h] */

  corporation = 0;
  state_address = &g_19021F0C4;
  packed_word_bits = a1;
  state_address_2 = &g_183EBFF04;
  state_address_6 = &g_183EBFF04;
  masked_bits = -(__int64)&g_183EBFF04;
  masked_bits_2 = -(__int64)&g_183EBFF04;
  scaled_index = dword_140404A6C[5873 * packed_word_bits + 283831590 + 279 * a2];
  remaining_amount = 23492 * packed_word_bits + 56;
  saved_remaining_amount = remaining_amount;
  cached_scaled_index = scaled_index;
  do
  {
    mission = 0;
    saved_state_address = state_address_2;
    do
    {
      if ( !*(saved_state_address - 2) || *(saved_state_address - 1) || *saved_state_address != scaled_index )
        goto LABEL_37;
      table_value = (int)saved_state_address[2];
      if ( (unsigned int)table_value <= 0x3FF )
      {
        dword_140404A6C[1760 * table_value + 278845900] = 0;
        state_address_2 = state_address_6;
      }
      *(saved_state_address - 1) = 1;
      if ( corporation == (_DWORD)packed_word_bits )
      {
        byte_cursor = (char *)state_address_2 + masked_bits;
        cached_game_type = game_type;
        player = 0;
        state_address_3 = &g_151620CAC;
        *(float *)state_address = (float)(*((float *)saved_state_address + 19) + 1.0) * *(float *)state_address;
        do
        {
          if ( *(state_address_3 - 19) )
          {
            if ( state_address_3[14] == corporation )
            {
              *state_address_3 += *(_DWORD *)&byte_cursor[(_QWORD)saved_state_address + 56];
              if ( cached_game_type == 3 )
                sr_event_player_finance(player);
            }
          }
          ++player;
          state_address_3 += 3597;
        }
        while ( player < 256 );
        if ( saved_state_address[1] <= 1 )
          *(_OWORD *)(saved_state_address + 21) = xmmword_1402763F0;
        else
          *(_OWORD *)(saved_state_address + 21) = xmmword_140276408;
        strcpy((char *)saved_state_address + 100, "ccess");
        goto LABEL_26;
      }
      if ( *(int *)((char *)saved_state_address + remaining_amount) > 0 )
      {
        table_value_2 = saved_state_address[1];
        *(float *)state_address = (float)(*((float *)saved_state_address + 20) + 1.0) * *(float *)state_address;
        if ( table_value_2 <= 1 )
        {
          qmemcpy(saved_state_address + 21, "Acquisition:  Failed", 20);
        }
        else
        {
          if ( table_value_2 == 2 )
          {
            strcpy((char *)saved_state_address + 84, "Transaction:  Success");
LABEL_26:
            sr_event_mission_text(corporation, mission);
            LODWORD(packed_word_bits) = a1;
            remaining_amount = saved_remaining_amount;
            masked_bits = masked_bits_2;
            goto LABEL_27;
          }
          qmemcpy(saved_state_address + 21, "Transaction:  Failed", 20);
        }
        *((_BYTE *)saved_state_address + 104) = 0;
        goto LABEL_26;
      }
LABEL_27:
      table_value_3 = saved_state_address[17];
      if ( table_value_3 > 0 )
      {
        if ( corporation == (_DWORD)packed_word_bits && table_value_3 > (int)saved_state_address[18] )
          table_value_3 = saved_state_address[18];
        integer_difference = table_value_3 - state_address[4];
        scaled_index_2 = *(state_address - 1);
        if ( integer_difference < 0 )
          integer_difference = 0;
        state_address[4] = 0;
        if ( scaled_index_2 > 0 )
          *(float *)state_address = *(float *)state_address - (float)((float)integer_difference / (float)scaled_index_2);
        saved_state_address[17] = 0;
      }
      scaled_index = cached_scaled_index;
      state_address_2 = state_address_6;
LABEL_37:
      ++mission;
      saved_state_address += 279;
    }
    while ( mission < 16 );
    remaining_amount -= 23492;
    state_address_2 += 5873;
    masked_bits -= 23492;
    saved_remaining_amount = remaining_amount;
    ++corporation;
    state_address_6 = state_address_2;
    state_address += 6;
    masked_bits_2 = masked_bits;
  }
  while ( corporation < 6 );
  iteration_count = 0;
  state_address_4 = (float *)&g_19021F0C4;
  do
  {
    scaled_value = *state_address_4;
    if ( *state_address_4 >= 10.0 )
    {
      if ( scaled_value > 500.0 )
      {
        player_2 = 0;
        state_address_5 = &g_151620CEC;
        *state_address_4 = scaled_value * 0.2;
        do
        {
          if ( *(state_address_5 - 35) && *(state_address_5 - 2) == iteration_count )
          {
            loaded_word = *state_address_5;
            *((_DWORD *)state_address_4 - 1) += 4 * *state_address_5;
            *state_address_5 = 5 * loaded_word;
            sr_event_player_finance(player_2);
          }
          ++player_2;
          state_address_5 += 3597;
        }
        while ( player_2 < 256 );
      }
    }
    else
    {
      *state_address_4 = 10.0;
    }
    ++iteration_count;
    state_address_4 += 6;
  }
  while ( iteration_count < 6 );
  return sr_event_stock_prices();
}
#undef masked_bits_2
#undef cached_scaled_index
#undef state_address_6
#undef saved_remaining_amount

//----- (00000001400F50D0) ----------------------------------------------------
__int64            sub_1400F50D0(int a1, int a2, int a3, int a4)
{
  int integer_sum;
  __int64 record_word_offset;
  int masked_bits;
  __int64 shidword_result;
  __int64 record_word_offset_2;
  unsigned int *state_address;
       char *literal_text;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F50D0[560];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400F50D0 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(_BYTE (*)[512])(void *)(sr_frame_1400F50D0 + 32)) /* [rsp+20h] */
#define unused_frame_slot_544 (*(__int64 (*))(void *)(sr_frame_1400F50D0 + 544)) /* [rsp+220h] */

  integer_sum = a2 + 1;
  record_word_offset = 1116LL * a2 + 23492LL * a1;
  if ( *(unsigned int *)((char *)&g_183EBFF08 + record_word_offset) <= 1 )
  {
    crt_sprintf(scratch_buffer, "Acquisition(%d)", integer_sum);
    if ( a3 )
      LODWORD(shidword_result) = *(int *)((char *)&g_183EBFF3C + record_word_offset) / 10;
    else
      LODWORD(shidword_result) = -10;
    record_word_offset_2 = 1717986919LL * a4;
    goto LABEL_15;
  }
  crt_sprintf(scratch_buffer, "Transaction(%d)", integer_sum);
  masked_bits = a4 / 10 - *(int *)((char *)&g_183EBFF48 + record_word_offset) / 10;
  if ( *(unsigned int *)((char *)&g_183EBFF08 + record_word_offset) != 2 )
  {
    shidword_result = (unsigned int)masked_bits;
    if ( !a3 )
      goto LABEL_16;
    record_word_offset_2 = 1717986919LL * *(int *)((char *)&g_183EBFF3C + record_word_offset);
LABEL_15:
    shidword_result = (unsigned int)((HIDWORD(record_word_offset_2) >> 31) + (SHIDWORD(record_word_offset_2) >> 2) + shidword_result);
    goto LABEL_16;
  }
  shidword_result = (unsigned int)(masked_bits + 50);
  if ( masked_bits < 0 )
    shidword_result = (unsigned int)masked_bits;
  if ( a3 )
  {
    if ( (int)shidword_result >= -10 )
      shidword_result = (unsigned int)(shidword_result + 10);
    else
      shidword_result = 4294967286LL;
  }
LABEL_16:
  state_address = &g_151620CAC;
  do
  {
    if ( *(state_address - 19) && state_address[14] == a1 )
    {
      if ( (int)shidword_result > 0 )
        *state_address += 10 * shidword_result;
      state_address[3] += shidword_result;
    }
    state_address += 3597;
  }
  while ( (__int64)state_address < (__int64)&g_1519A40AC );
  literal_text = "%s: Complete   Rating:  %d";
  if ( (int)game_day_time >= *(int *)((char *)&g_183EBFF40 + record_word_offset) )
    literal_text = "%s: Expired    Rating:  %d";
  crt_sprintf((_BYTE *)&g_183EBFF58 + record_word_offset, literal_text, scratch_buffer, shidword_result);
  *(unsigned int *)((char *)&g_183EBFF00 + record_word_offset) = 1;
  sr_event_mission_text(a1, a2);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef scratch_buffer
#undef unused_frame_slot_544

//----- (00000001400F52D0) ----------------------------------------------------
__int64            sub_1400F52D0(unsigned int a1)
{
  int integer_quotient;
  __int64 byte_count;
  unsigned int cached_world_event_count;
  unsigned int cached_game_tick;
  __int64 shifted_bits;
  signed int state_word;
  __int64 result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F52D0[304];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400F52D0 + 0)) /* [rsp+0h] */
#define Src (*(__m128i (*)[16])(void *)(sr_frame_1400F52D0 + 32)) /* [rsp+20h] */
#define unused_frame_slot_288 (*(__int64 (*))(void *)(sr_frame_1400F52D0 + 288)) /* [rsp+120h] */

  if ( a1 <= 0xFF )
  {
    integer_quotient = (signed int)g_183F7A31C / 3;
    crt_sprintf(Src, "%s has died", (     char *)&dword_140404A6C[3597 * a1 + 71856254]);
    if ( game_connected )
    {
      byte_count = -1;
      do
        ++byte_count;
      while ( SR_VEC_LANES(128, Src[0], i8)[byte_count] );
      cached_world_event_count = world_event_count;
      if ( (int)byte_count > 63 )
        LODWORD(byte_count) = 63;
      cached_game_tick = game_tick;
      shifted_bits = (__int64)(int)world_event_count << 7;
      *(unsigned int *)((char *)&g_1873DE460 + shifted_bits) = 2;
      *(unsigned int *)((char *)&g_1873DE464 + shifted_bits) = cached_game_tick;
      crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + shifted_bits), Src, (int)byte_count);
      *((_BYTE *)&g_1873DE4A0 + shifted_bits + (int)byte_count) = 0;
      *(unsigned int *)((char *)&g_1873DE480 + shifted_bits) = byte_count;
      *(unsigned int *)((char *)&g_1873DE484 + shifted_bits) = 3;
      *(unsigned int *)((char *)&g_1873DE488 + shifted_bits) = -1;
      world_event_count = cached_world_event_count + 1;
      *(unsigned int *)((char *)&g_1873DE48C + shifted_bits) = 0;
      HIWORD(world_event_count) = 0;
    }
    state_word = g_183EBFCD4;
    if ( (int)g_183EBFCD4 <= 50400 )
    {
      if ( integer_quotient > 0 )
        state_word = 18000 / integer_quotient + g_183EBFCD4;
      if ( state_word > 50400 )
        state_word = 50400;
      g_183EBFCD4 = state_word;
    }
    return 0; /* the function has no caller */
  }
  return result;
}
#undef unused_frame_slot_0
#undef Src
#undef unused_frame_slot_288

//----- (00000001400F5480) ----------------------------------------------------
__int64 sub_1400F5480()
{
  signed int player;
  int *buffer_cursor;
  int i;
  int iteration_count;
  unsigned int *state_address;
  int iteration_count_2;
  int *buffer_cursor_2;
  int iteration_count_3;
  unsigned int *state_address_2;
  int iteration_count_4;
  unsigned int *state_address_3;
  __int64 element_index;
  signed int running_total;
  unsigned int *state_address_4;
  __int64 xor_value;
  float product_difference;
  float product_difference_2;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float weighted_sum_8;
  float weighted_sum_9;
  unsigned int *state_address_5;
  __int64 remaining_count;
  int masked_bits;
  __int64 scaled_index;
  unsigned int *state_address_6;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F5480[112];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400F5480 + 0)) /* [rsp+0h] */
#define callee_output_word (*(int (*))(void *)(sr_frame_1400F5480 + 32)) /* [rsp+20h] */
#define frame_word_at_36 (*(int (*))(void *)(sr_frame_1400F5480 + 36)) /* [rsp+24h] */
#define integer_quotient (*(int (*))(void *)(sr_frame_1400F5480 + 64)) /* [rsp+40h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_1400F5480 + 68)) /* [rsp+44h] */
#define unused_frame_slot_96 (*(__int64 (*))(void *)(sr_frame_1400F5480 + 96)) /* [rsp+60h] */

  player = 0;
  buffer_cursor = &callee_output_word;
  for ( i = 0; i < 2; ++i )
  {
    iteration_count = 0;
    *buffer_cursor = 0;
    state_address = &g_151623978;
    do
    {
      if ( *(state_address - 2886) && !*state_address && *(state_address - 2853) == i )
        *buffer_cursor = ++iteration_count;
      state_address += 3597;
    }
    while ( (__int64)state_address < (__int64)&g_1519A6D78 );
    ++buffer_cursor;
  }
  if ( !g_183F7A608 || !callee_output_word || !frame_word_at_36 )
  {
    integer_quotient = 2;
    goto LABEL_16;
  }
  if ( callee_output_word >= frame_word_at_36 )
  {
    integer_quotient = 2 * callee_output_word / frame_word_at_36;
LABEL_16:
    unused_written_slot = 2;
    goto LABEL_17;
  }
  integer_quotient = 2;
  unused_written_slot = 2 * frame_word_at_36 / callee_output_word;
LABEL_17:
  iteration_count_2 = 0;
  buffer_cursor_2 = &callee_output_word;
  do
  {
    iteration_count_3 = 0;
    *buffer_cursor_2 = 0;
    state_address_2 = &g_151623978;
    do
    {
      if ( *(state_address_2 - 2886) && !*state_address_2 && *(state_address_2 - 2853) == iteration_count_2 && *(state_address_2 - 2847) != -1 )
        *buffer_cursor_2 = ++iteration_count_3;
      state_address_2 += 3597;
    }
    while ( (__int64)state_address_2 < (__int64)&g_1519A6D78 );
    ++iteration_count_2;
    ++buffer_cursor_2;
  }
  while ( iteration_count_2 < 2 );
  iteration_count_4 = 0;
  state_address_3 = &g_183EBFD78;
  element_index = 0;
  do
  {
    running_total = 0;
    if ( *(int *)((char *)&callee_output_word + element_index * 4) > 0 )
    {
      state_address_4 = &g_182BBB1E4;
      xor_value = (unsigned int)iteration_count_4 ^ 1LL;
      do
      {
        if ( *(state_address_4 - 25) && *(state_address_4 - 20) == 17 )
        {
          if ( (product_difference = *((float *)state_address_4 - 2), product_difference >= *(float *)state_address_3)
            && product_difference < *((float *)state_address_3 + 3)
            && (product_difference_2 = *((float *)state_address_4 - 1), product_difference_2 >= *((float *)state_address_3 + 1))
            && product_difference_2 < *((float *)state_address_3 + 4)
            && *(float *)state_address_4 >= *((float *)state_address_3 + 2)
            && *(float *)state_address_4 < *((float *)state_address_3 + 5)
            || !*(&callee_output_word + xor_value) )
          {
            running_total += 250;
          }
        }
        if ( state_address_4[1735] && state_address_4[1740] == 17 )
        {
          if ( (weighted_sum = *((float *)state_address_4 + 1758), weighted_sum >= *(float *)state_address_3)
            && weighted_sum < *((float *)state_address_3 + 3)
            && (weighted_sum_2 = *((float *)state_address_4 + 1759), weighted_sum_2 >= *((float *)state_address_3 + 1))
            && weighted_sum_2 < *((float *)state_address_3 + 4)
            && (weighted_sum_3 = *((float *)state_address_4 + 1760), weighted_sum_3 >= *((float *)state_address_3 + 2))
            && weighted_sum_3 < *((float *)state_address_3 + 5)
            || !*(&callee_output_word + xor_value) )
          {
            running_total += 250;
          }
        }
        if ( state_address_4[3495] && state_address_4[3500] == 17 )
        {
          if ( (weighted_sum_4 = *((float *)state_address_4 + 3518), weighted_sum_4 >= *(float *)state_address_3)
            && weighted_sum_4 < *((float *)state_address_3 + 3)
            && (weighted_sum_5 = *((float *)state_address_4 + 3519), weighted_sum_5 >= *((float *)state_address_3 + 1))
            && weighted_sum_5 < *((float *)state_address_3 + 4)
            && (weighted_sum_6 = *((float *)state_address_4 + 3520), weighted_sum_6 >= *((float *)state_address_3 + 2))
            && weighted_sum_6 < *((float *)state_address_3 + 5)
            || !*(&callee_output_word + xor_value) )
          {
            running_total += 250;
          }
        }
        if ( state_address_4[5255] && state_address_4[5260] == 17 )
        {
          if ( (weighted_sum_7 = *((float *)state_address_4 + 5278), weighted_sum_7 >= *(float *)state_address_3)
            && weighted_sum_7 < *((float *)state_address_3 + 3)
            && (weighted_sum_8 = *((float *)state_address_4 + 5279), weighted_sum_8 >= *((float *)state_address_3 + 1))
            && weighted_sum_8 < *((float *)state_address_3 + 4)
            && (weighted_sum_9 = *((float *)state_address_4 + 5280), weighted_sum_9 >= *((float *)state_address_3 + 2))
            && weighted_sum_9 < *((float *)state_address_3 + 5)
            || !*(&callee_output_word + xor_value) )
          {
            running_total += 250;
          }
        }
        state_address_4 += 7040;
      }
      while ( (__int64)state_address_4 < (__int64)&g_18329B1E4 );
    }
    state_address_5 = &g_151620CAC;
    remaining_count = 256;
    do
    {
      if ( *(state_address_5 - 19) )
      {
        if ( state_address_5[14] == iteration_count_4 )
        {
          masked_bits = running_total / *(int *)((char *)&integer_quotient + element_index * 4);
          *state_address_5 += masked_bits + 250;
          scaled_index = (int)*(state_address_5 - 4);
          if ( (_DWORD)scaled_index != -1 )
            dword_140404A6C[28 * scaled_index + 134050374] += masked_bits;
        }
      }
      state_address_5 += 3597;
      --remaining_count;
    }
    while ( remaining_count );
    state_address_3[14] = running_total;
    ++iteration_count_4;
    dword_140404A6C[element_index + 284023018] += running_total;
    state_address_3 += 5873;
    ++element_index;
  }
  while ( iteration_count_4 < 2 );
  state_address_6 = &g_151620C60;
  do
  {
    if ( *state_address_6 )
      sr_event_player_finance(player);
    ++player;
    state_address_6 += 3597;
  }
  while ( player < 256 );
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef callee_output_word
#undef frame_word_at_36
#undef integer_quotient
#undef unused_written_slot
#undef unused_frame_slot_96

//----- (00000001400F5820) ----------------------------------------------------
unsigned int *           sub_1400F5820(__int64 a1, __int64 a2, double a3)
{
  unsigned int cached_game_state;
  unsigned int state_word;
  unsigned int *state_address;
  int iteration_count;
  __int64 remaining_count;
  unsigned int cached_game_type;
  unsigned int *state_address_2;
  int i;
  int selection_code;
  __int64 scaled_index;
  __int64 scaled_index_2;
  unsigned int *result;
  unsigned int *state_address_3;
  __int64 scaled_index_3;
  __int64 state_word_2;
  __int64 state_address_4;

  cached_game_state = game_state;
  if ( game_state == 2 )
  {
    sub_14018A3E0(a1, a2, a3);
    sub_140008020();
    cached_game_state = game_state;
  }
  if ( !game_type && cached_game_state == 1 )
  {
    if ( (int)g_183EBFCD4 <= 0 )
    {
      state_word = g_183EBFCE0;
      game_state = 2;
    }
    else
    {
      state_word = g_183EBFCD4 - 1;
    }
    g_183EBFCD4 = state_word;
  }
  state_address = &g_151620C60;
  iteration_count = 0;
  remaining_count = 256;
  do
  {
    if ( *state_address )
      sub_1400F1950(iteration_count);
    ++iteration_count;
    state_address += 3597;
  }
  while ( iteration_count < 256 );
  cached_game_type = game_type;
  state_address_2 = &g_151620DC4;
  for ( i = 0; i < 256; ++i )
  {
    if ( *(state_address_2 - 89) )
    {
      if ( *(state_address_2 - 50) == -1 )
      {
        if ( cached_game_type - 2 <= 1 || cached_game_type - 5 <= 2 )
        {
          selection_code = 0;
          if ( game_state == 1 )
            selection_code = 2;
          *state_address_2 = selection_code;
        }
      }
      else
      {
        sub_1400F0640(i);
        cached_game_type = game_type;
      }
    }
    state_address_2 += 3597;
  }
  g_1A87C6BA4 = g_19021F0C0;
  g_1A87C6BA8 = g_19021F0D8;
  g_1A87C6BAC = g_19021F0F0;
  g_1A87C6BB0 = g_19021F108;
  g_1A87C6BB4 = g_19021F120;
  g_1A87C6BB8 = g_19021F138;
  renderer_sort_count = 6;
  sr_renderer_sort();
  g_183EBFDB4 = 0;
  g_183EC5978 = 0;
  g_183ECB53C = 0;
  g_19021F080 = dword_140404A6C[g_1A85C6BB8 + 437192782];
  g_183ED1100 = 0;
  g_183ED6CC4 = 0;
  g_183EDC888 = 0;
  g_19021F084 = dword_140404A6C[g_1A85C6BB4 + 437192782];
  g_19021F088 = dword_140404A6C[g_1A85C6BB0 + 437192782];
  g_19021F08C = dword_140404A6C[g_1A85C6BAC + 437192782];
  g_19021F090 = dword_140404A6C[g_1A85C6BA8 + 437192782];
  g_19021F094 = dword_140404A6C[g_1A85C6BA4 + 437192782];
  result = &g_151620CE4;
  state_address_3 = &g_151620CE4;
  do
  {
    if ( *(state_address_3 - 33) )
    {
      scaled_index_3 = (int)*state_address_3;
      if ( (unsigned int)scaled_index_3 <= 5 && (state_address_3[6] != -1 || cached_game_type == 3) )
      {
        scaled_index = 23492 * scaled_index_3;
        ++dword_140404A6C[5873 * scaled_index_3 + 283831506];
        cached_game_type = game_type;
      }
      scaled_index_2 = *(state_address_3 - 17);
      if ( (int)scaled_index_2 > 0 )
      {
        scaled_index_2 = (unsigned int)(scaled_index_2 - 1);
        *(state_address_3 - 17) = scaled_index_2;
      }
    }
    state_address_3 += 3597;
    --remaining_count;
  }
  while ( remaining_count );
  if ( g_1AD04B218 )
  {
    state_word_2 = g_1AD04B21C;
    state_address_4 = g_1AD04B21C - 3;
    if ( (state_address_4 & 0xFFFFFFFD) == 0 && cached_game_type != g_1AD04B21C )
    {
      state_address_4 = (__int64)&g_1519A40E4;
      do
      {
        if ( *(result - 33) )
          *result = 17;
        if ( result[3564] )
          result[3597] = 17;
        result += 7194;
      }
      while ( (__int64)result < (__int64)&g_1519A40E4 );
      game_type = state_word_2;
    }
    result = (unsigned int *)sr_ResetGame(state_address_4, state_word_2, (__int64)state_address_3);
    cached_game_type = game_type;
    g_1AD04B218 = 0;
  }
  if ( cached_game_type == 2 )
  {
    result = (unsigned int *)sub_1400F6170(scaled_index_2, scaled_index, (__int64)state_address_3);
    cached_game_type = game_type;
  }
  if ( cached_game_type == 3 )
  {
    result = (unsigned int *)sub_1400F6C50();
    cached_game_type = game_type;
  }
  if ( cached_game_type == 4 )
  {
    result = (unsigned int *)sub_1400FA3A0();
    cached_game_type = game_type;
  }
  if ( cached_game_type == 5 )
  {
    result = (unsigned int *)sub_1400F80A0(scaled_index_2, scaled_index, (__int64)state_address_3);
    cached_game_type = game_type;
  }
  if ( cached_game_type == 6 )
  {
    result = (unsigned int *)sub_1400F5B60(scaled_index_2);
    cached_game_type = game_type;
  }
  if ( cached_game_type == 7 )
    return (unsigned int *)sub_1400F99A0();
  return result;
}

//----- (00000001400F6030) ----------------------------------------------------
void sub_1400F6030()
{
  __int64 state_word;
  unsigned int *state_address;
  int selection_flag;
  __int64 remaining_count;
  __int64 scaled_index;
  int iteration_count;
  unsigned int option_flags;
  int rol4_result;
  float *state_address_2;
  __int64 remaining_count_2;
  float combined_products;
  float combined_products_2;
  float combined_products_3;

  state_word = g_183F79E00;
  state_address = &g_151620CFC;
  selection_flag = 1;
  remaining_count = 256;
  do
  {
    if ( *(state_address - 39) )
    {
      scaled_index = (int)*state_address;
      if ( (_DWORD)scaled_index != -1 )
      {
        iteration_count = *(state_address - 10);
        if ( iteration_count < (int)state_word && (int)state_word > 0 )
        {
          option_flags = *(state_address - 9);
          rol4_result = 1;
          state_address_2 = (float *)(unsigned int *)&g_183F79E0C;
          remaining_count_2 = state_word;
          do
          {
            if ( (option_flags & rol4_result) == 0 )
            {
              combined_products = *(state_address_2 - 1) - *(float *)&dword_140404A6C[7166 * scaled_index + 280651336];
              combined_products_2 = *(state_address_2 - 2) - *(float *)&dword_140404A6C[7166 * scaled_index + 280651335];
              combined_products_3 = *state_address_2 - *(float *)&dword_140404A6C[7166 * scaled_index + 280651337];
              if ( (float)((float)((float)(combined_products * combined_products) + (float)(combined_products_2 * combined_products_2)) + (float)(combined_products_3 * combined_products_3)) >= 16.0 )
              {
                selection_flag = 0;
              }
              else
              {
                option_flags |= rol4_result;
                *(state_address - 10) = ++iteration_count;
              }
            }
            rol4_result = __ROL4__(rol4_result, 1);
            state_address_2 += 3;
            --remaining_count_2;
          }
          while ( remaining_count_2 );
          *(state_address - 9) = option_flags;
        }
      }
    }
    state_address += 3597;
    --remaining_count;
  }
  while ( remaining_count );
  if ( !selection_flag )
    ++g_183EBFCD4;
}

//----- (00000001400F6C50) ----------------------------------------------------
__int64 sub_1400F6C50()
{
  unsigned int *state_address;
  __int64 remaining_count;
  unsigned int *state_address_2;
  int state_word;
  int iteration_count;
  int player;
  int selected_word;
  __int64 scaled_index;
  int selected_word_2;
  int comparison_operand;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  int rand_result;
  __int64 float_word;
  double angle;
  bool comparison_result;
  unsigned int scaled_index_2;
  unsigned int masked_bits;
  unsigned int cached_game_tick;
  int selected_word_3;
  __int64 shifted_bits;
  __int64 cached_world_event_count;
  __int64 shifted_bits_2;
  __int64 cached_world_event_count_2;
  __int64 shifted_bits_3;
  int remaining_amount;
  bool comparison_result_2;
  unsigned int *record_byte_offset;
  unsigned int *record_byte_offset_2;
  unsigned int rand_result_2;
  __int64 packed_word_bits;
  __int64 saved_packed_word_bits;
  __int64 remaining_count_2;
  unsigned int *state_address_3;
       char **text_cursor;
  __int64 scaled_index_3;
  __int64 byte_count;
  unsigned int cached_game_tick_2;
  unsigned int cached_world_event_count_3;
  __int64 shifted_bits_4;
  int element_index;
  __int64 running_total;
  int table_value;
  int element_index_2;
  __int64 element_index_3;
  unsigned int *state_address_4;
  unsigned int createvehicle_result;
  signed int call_result;
  __int64 scaled_index_4;
  int table_value_2;
  int element_index_4;
  __int64 element_index_5;
  unsigned int *state_address_5;
  double angle_2;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float state_address_6;
  float state_address_7;
  float weighted_sum_7;
  signed int createitem_result;
  __int64 scaled_index_5;
  signed int createitem_result_2;
  __int64 scaled_index_6;
  int selection_flag;
  int j;
  unsigned int *state_address_8;
  __int64 remaining_count_3;
  __int64 table_value_3;
  int corporation;
  unsigned int *state_address_9;
  int mission;
  _DWORD *running_total_2;
  __int64 shifted_bits_5;
  int remaining_amount_2;
  signed int integer_sum;
  unsigned int *state_address_10;
  __int64 remaining_count_4;
  int loaded_word;
  unsigned int *state_address_11;
  int selection_flag_2;
  __int64 remaining_count_5;
  unsigned int *state_address_12;
  int selection_flag_3;
  __int64 remaining_count_6;
  unsigned int table_value_4;
  float weighted_sum_8;
  BOOL comparison_result_3;
  float weighted_sum_9;
  float weighted_sum_10;
  float weighted_sum_11;
  int iteration_count_2;
  float *state_address_13;
  int iteration_count_3;
  unsigned int *state_address_14;
  __int64 table_value_5;
  float weighted_sum_12;
  float weighted_sum_13;
  unsigned int cached_game_tick_3;
  unsigned int cached_game_connected;
  unsigned int *state_address_15;
  __int64 shifted_bits_6;
  unsigned int *state_address_16;
  __int64 shifted_bits_7;
  __int64 shifted_bits_8;
  int selection_flag_4;
  float *i;
  int loaded_word_2;
  float scaled_value;
  float *state_address_17;
  float source_component_y;
  float source_component_z;
  unsigned int *state_address_18;
  signed int state_word_2;
  unsigned int *state_address_19;
  int iteration_count_4;
  __int64 state_address_20;
  unsigned int state_word_3;
  unsigned int *state_address_21;
  int iteration_count_5;
  float *state_address_22;
  __int64 saved_record_byte_offset;
  __int64 record_byte_offset_3;
  int saved_record_byte_offset_2;
  int record_byte_offset_4;
  __int64 saved_weighted_sum;
  unsigned int *state_address_23;
  __int64 scaled_index_7;
  int scaled_index_8;
  float combined_products;
  __int64 table_value_6;
  int scaled_index_9;
  float weighted_sum_14;
  __int64 table_value_7;
  int scaled_index_10;
  float weighted_sum_15;
  __int64 table_value_8;
  int scaled_index_11;
  float weighted_sum_16;
  unsigned int *state_address_24;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F6C50[656];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400F6C50 + 0)) /* [rsp+0h] */
#define selection_flag_5 (*(unsigned int (*))(void *)(sr_frame_1400F6C50 + 32)) /* [rsp+20h] */
#define rand_result_3 (*(float (*))(void *)(sr_frame_1400F6C50 + 48)) /* [rsp+30h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_1400F6C50 + 52)) /* [rsp+34h] */
#define unused_written_slot_2 (*(float (*))(void *)(sr_frame_1400F6C50 + 56)) /* [rsp+38h] */
#define remaining_count_7 (*(__int64 (*))(void *)(sr_frame_1400F6C50 + 64)) /* [rsp+40h] */
#define state_address_25 (*(unsigned int * (*))(void *)(sr_frame_1400F6C50 + 72)) /* [rsp+48h] */
#define matrix (*(__int128 (*))(void *)(sr_frame_1400F6C50 + 80)) /* [rsp+50h] */
#define cached_xmmword_140278d30 (*(__int128 (*))(void *)(sr_frame_1400F6C50 + 96)) /* [rsp+60h] */
#define frame_float_at_112 (*(float (*))(void *)(sr_frame_1400F6C50 + 112)) /* [rsp+70h] */
#define source_buffer (*(__m128i (*)[6])(void *)(sr_frame_1400F6C50 + 128)) /* [rsp+80h] */
#define unused_frame_slot_640 (*(__int64 (*))(void *)(sr_frame_1400F6C50 + 640)) /* [rsp+280h] */

  state_address = &g_151620CE8;
  remaining_count = 256;
  do
  {
    if ( *(state_address - 34) && (int)*state_address > 0 )
      --*state_address;
    state_address += 3597;
    --remaining_count;
  }
  while ( remaining_count );
  if ( game_state != 1 )
  {
    if ( game_state == 2 )
    {
      integer_sum = game_state_time + 1;
      remaining_amount_2 = --g_183EBFCD4;
      ++game_state_time;
      if ( g_183EBFCD4 == 3600 * ((signed int)g_183EBFCD4 / 3600) )
      {
        state_address_10 = &g_151620CCC;
        remaining_count_4 = 256;
        do
        {
          loaded_word = *state_address_10;
          *(state_address_10 - 1) = 0;
          if ( loaded_word > 0 )
            *state_address_10 = loaded_word - 1;
          state_address_10[1] = 0;
          state_address_10 += 3597;
          --remaining_count_4;
        }
        while ( remaining_count_4 );
      }
      state_address_11 = &g_151620CE4;
      selection_flag_2 = 1;
      remaining_count_5 = 1024;
      if ( integer_sum >= 7200 )
      {
        state_address_12 = &g_182BBB180;
        selection_flag_3 = 1;
        remaining_count_6 = 1024;
        do
        {
          if ( *state_address_12 )
          {
            table_value_4 = state_address_12[5];
            if ( table_value_4 == 17 || table_value_4 - 19 <= 5 )
            {
              weighted_sum_8 = *((float *)state_address_12 + 23);
              comparison_result_3 = 0;
              if ( weighted_sum_8 >= g_183EBFD60 && weighted_sum_8 < g_183EBFD6C )
              {
                weighted_sum_9 = *((float *)state_address_12 + 25);
                if ( weighted_sum_9 >= g_183EBFD68 )
                  comparison_result_3 = g_183EBFD74 > weighted_sum_9;
              }
              if ( weighted_sum_8 >= g_183EC5924 && weighted_sum_8 < g_183EC5930 )
              {
                weighted_sum_10 = *((float *)state_address_12 + 25);
                if ( weighted_sum_10 >= g_183EC592C && g_183EC5938 > weighted_sum_10 )
                  comparison_result_3 = 1;
              }
              if ( weighted_sum_8 < g_183ECB4E8
                || weighted_sum_8 >= g_183ECB4F4
                || (weighted_sum_11 = *((float *)state_address_12 + 25), weighted_sum_11 < g_183ECB4F0)
                || weighted_sum_11 >= g_183ECB4FC )
              {
                if ( !comparison_result_3 )
                  selection_flag_3 = 0;
              }
            }
          }
          state_address_12 += 1760;
          --remaining_count_6;
        }
        while ( remaining_count_6 );
        if ( !selection_flag_3 )
        {
          iteration_count_2 = 0;
          state_address_13 = (float *)(unsigned int *)&g_183EBFD6C;
          do
          {
            iteration_count_3 = 0;
            state_address_14 = &g_151620CE4;
            do
            {
              if ( *(state_address_14 - 33) )
              {
                if ( *state_address_14 == iteration_count_2 )
                {
                  table_value_5 = (int)state_address_14[6];
                  if ( (_DWORD)table_value_5 != -1 )
                  {
                    weighted_sum_12 = *(float *)&dword_140404A6C[7166 * table_value_5 + 280651335];
                    if ( weighted_sum_12 < *(state_address_13 - 3) )
                      goto LABEL_155;
                    if ( weighted_sum_12 >= *state_address_13 )
                      goto LABEL_155;
                    weighted_sum_13 = *(float *)&dword_140404A6C[7166 * table_value_5 + 280651337];
                    if ( weighted_sum_13 < *(state_address_13 - 1) || weighted_sum_13 >= state_address_13[2] )
                      goto LABEL_155;
                  }
                }
              }
              ++iteration_count_3;
              state_address_14 += 3597;
            }
            while ( iteration_count_3 < 256 );
            ++iteration_count_2;
            state_address_13 += 5873;
          }
          while ( (__int64)state_address_13 < (__int64)(unsigned int *)&g_183ED10B8 );
          remaining_amount_2 -= 9;
          g_183EBFCD4 = remaining_amount_2;
LABEL_155:
          selection_flag_2 = 1;
        }
      }
      cached_game_tick_3 = game_tick;
      cached_game_connected = game_connected;
      if ( !g_183EBFDC0 )
      {
        state_address_15 = &g_151620CE4;
        do
        {
          if ( *(state_address_15 - 33) && !*state_address_15 && state_address_15[6] != -1 )
            goto LABEL_165;
          state_address_15 += 3597;
        }
        while ( (__int64)state_address_15 < (__int64)&g_1519A40E4 );
        if ( game_connected )
        {
          shifted_bits_6 = (__int64)(int)world_event_count++ << 7;
          HIWORD(world_event_count) = 0;
          *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_6) = 10;
          *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_6) = cached_game_tick_3;
          *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_6) = 0;
          *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_6) = 1;
        }
        g_183EBFDC0 = 1;
      }
LABEL_165:
      if ( !g_183EC5984 )
      {
        state_address_16 = &g_151620CE4;
        do
        {
          if ( *(state_address_16 - 33) && *state_address_16 == 1 && state_address_16[6] != -1 )
            goto LABEL_174;
          state_address_16 += 3597;
        }
        while ( (__int64)state_address_16 < (__int64)&g_1519A40E4 );
        if ( cached_game_connected )
        {
          shifted_bits_7 = (__int64)(int)world_event_count++ << 7;
          HIWORD(world_event_count) = 0;
          *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_7) = 10;
          *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_7) = cached_game_tick_3;
          *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_7) = 1;
          *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_7) = 1;
        }
        g_183EC5984 = 1;
      }
LABEL_174:
      if ( !g_183ECB548 )
      {
        do
        {
          if ( *(state_address_11 - 33) && *state_address_11 == 2 && state_address_11[6] != -1 )
            goto LABEL_182;
          state_address_11 += 3597;
        }
        while ( (__int64)state_address_11 < (__int64)&g_1519A40E4 );
        if ( cached_game_connected )
        {
          shifted_bits_8 = (__int64)(int)world_event_count++ << 7;
          HIWORD(world_event_count) = 0;
          *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_8) = 10;
          *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_8) = cached_game_tick_3;
          *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_8) = 2;
          *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_8) = 1;
        }
        g_183ECB548 = 1;
      }
LABEL_182:
      selection_flag_4 = 1;
      for ( i = (float *)&g_182BBB1DC; ; i += 1760 )
      {
        if ( *((_DWORD *)i - 23) )
        {
          loaded_word_2 = *((_DWORD *)i - 18);
          if ( loaded_word_2 == 17 || (unsigned int)(loaded_word_2 - 19) <= 5 )
          {
            scaled_value = *i;
            state_address_17 = (float *)&g_183EBFD84;
            do
            {
              if ( scaled_value >= *(state_address_17 - 3) && scaled_value < *state_address_17 )
              {
                source_component_y = i[1];
                if ( source_component_y >= *(state_address_17 - 2) && source_component_y < state_address_17[1] )
                {
                  source_component_z = i[2];
                  if ( source_component_z >= *(state_address_17 - 1) && source_component_z < state_address_17[2] )
                    goto LABEL_195;
                }
              }
              state_address_17 += 5873;
            }
            while ( (__int64)state_address_17 < (__int64)&g_183ED10D0 );
            selection_flag_4 = 0;
          }
        }
LABEL_195:
        if ( !--remaining_count_5 )
        {
          if ( selection_flag_4 )
          {
            if ( remaining_amount_2 > 60 )
              remaining_amount_2 = 60;
            g_183EBFCD4 = remaining_amount_2;
          }
          state_address_18 = &g_151623978;
          do
          {
            if ( *(state_address_18 - 2886) && !*state_address_18 && *(state_address_18 - 2847) != -1 )
              selection_flag_2 = 0;
            state_address_18 += 3597;
          }
          while ( (__int64)state_address_18 < (__int64)&g_1519A6D78 );
          if ( selection_flag_2 && remaining_amount_2 > 60 )
          {
            g_183EBFCD4 = 60;
          }
          else if ( remaining_amount_2 <= 0 )
          {
            sub_1400F3E60();
            game_state = 3;
            g_183EBFCD4 = g_183EBFD30;
          }
          return 0; /* no result: rax is residue at the exit */
        }
      }
    }
    if ( game_state != 3 )
      return 0; /* no result: rax is residue at the exit */
    state_word_2 = g_183EBFCD4 - 1;
    g_183EBFCD4 = state_word_2;
    if ( state_word_2 == 1250 )
    {
      sub_1400F0160(-1);
      state_word_2 = g_183EBFCD4;
    }
    if ( state_word_2 == 1200 )
    {
      sub_1400F0160(0);
      state_word_2 = g_183EBFCD4;
    }
    if ( state_word_2 == 1080 )
    {
      sub_1400F0160(1);
      state_word_2 = g_183EBFCD4;
    }
    if ( state_word_2 == 960 )
    {
      sub_1400F0160(2);
      state_word_2 = g_183EBFCD4;
    }
    remaining_count_7 = 3;
    if ( state_word_2 == 840 )
    {
      sub_1400F0160(3);
      state_word_2 = g_183EBFCD4;
    }
    if ( state_word_2 == 720 )
    {
      sub_1400F0160(4);
      state_word_2 = g_183EBFCD4;
    }
    if ( state_word_2 == 600 )
    {
      sub_1400F0160(5);
      state_word_2 = g_183EBFCD4;
    }
    if ( state_word_2 == 480 )
    {
      sub_1400F0160(6);
      state_word_2 = g_183EBFCD4;
    }
    if ( state_word_2 == 360 )
    {
      sub_1400F0160(7);
      state_word_2 = g_183EBFCD4;
    }
    if ( state_word_2 == 240 )
    {
      sub_1400F0160(8);
      state_word_2 = g_183EBFCD4;
    }
    if ( state_word_2 == 120 )
    {
      sub_1400F0160(9);
      state_word_2 = g_183EBFCD4;
    }
    if ( state_word_2 > 0 )
      return 0; /* no result: rax is residue at the exit */
    state_address_19 = &g_151620CF0;
    iteration_count_4 = 0;
    state_address_20 = (__int64)&g_1519A40F0;
    do
    {
      if ( *(state_address_19 - 36) )
        *state_address_19 = 0;
      if ( state_address_19[3561] )
        state_address_19[3597] = 0;
      state_address_19 += 7194;
    }
    while ( (__int64)state_address_19 < (__int64)&g_1519A40F0 );
    state_word_3 = g_183EBFCB0;
    state_address_21 = &g_183EBFDC4;
    iteration_count_5 = 0;
    state_address_22 = (float *)&g_19021F0C4;
LABEL_242:
    saved_record_byte_offset = -1;
    record_byte_offset_3 = 2;
    saved_record_byte_offset_2 = -1;
    record_byte_offset_4 = 2;
    saved_weighted_sum = 0;
    state_address_23 = &g_151620CE4;
    while ( 1 )
    {
      if ( *(state_address_23 - 33) && *state_address_23 == iteration_count_5 )
      {
        if ( state_word_3 == 1 )
        {
          scaled_index_7 = (int)*(state_address_23 - 18);
          if ( (_DWORD)scaled_index_7 != -1 )
          {
            state_address_20 = 112 * scaled_index_7;
            scaled_index_8 = dword_140404A6C[28 * scaled_index_7 + 134050374];
            if ( (int)saved_weighted_sum < scaled_index_8 )
            {
              saved_weighted_sum = (unsigned int)scaled_index_8;
LABEL_251:
              saved_record_byte_offset = record_byte_offset_3 - 2;
              saved_record_byte_offset_2 = record_byte_offset_4 - 2;
            }
          }
        }
        else
        {
          combined_products = (float)((float)(int)state_address_23[2] * *state_address_22) + (float)(int)*(state_address_23 - 14);
          if ( (float)(int)saved_weighted_sum < combined_products )
          {
            saved_weighted_sum = (unsigned int)(int)combined_products;
            goto LABEL_251;
          }
        }
      }
      if ( state_address_23[3564] && state_address_23[3597] == iteration_count_5 )
      {
        if ( state_word_3 == 1 )
        {
          table_value_6 = (int)state_address_23[3579];
          if ( (_DWORD)table_value_6 != -1 )
          {
            state_address_20 = 112 * table_value_6;
            scaled_index_9 = dword_140404A6C[28 * table_value_6 + 134050374];
            if ( (int)saved_weighted_sum < scaled_index_9 )
            {
              saved_weighted_sum = (unsigned int)scaled_index_9;
LABEL_260:
              saved_record_byte_offset = record_byte_offset_3 - 1;
              saved_record_byte_offset_2 = record_byte_offset_4 - 1;
            }
          }
        }
        else
        {
          weighted_sum_14 = (float)((float)(int)state_address_23[3599] * *state_address_22) + (float)(int)state_address_23[3583];
          if ( (float)(int)saved_weighted_sum < weighted_sum_14 )
          {
            saved_weighted_sum = (unsigned int)(int)weighted_sum_14;
            goto LABEL_260;
          }
        }
      }
      if ( state_address_23[7161] && state_address_23[7194] == iteration_count_5 )
      {
        if ( state_word_3 == 1 )
        {
          table_value_7 = (int)state_address_23[7176];
          if ( (_DWORD)table_value_7 != -1 )
          {
            state_address_20 = 112 * table_value_7;
            scaled_index_10 = dword_140404A6C[28 * table_value_7 + 134050374];
            if ( (int)saved_weighted_sum < scaled_index_10 )
            {
              saved_weighted_sum = (unsigned int)scaled_index_10;
LABEL_269:
              saved_record_byte_offset = record_byte_offset_3;
              saved_record_byte_offset_2 = record_byte_offset_4;
            }
          }
        }
        else
        {
          weighted_sum_15 = (float)((float)(int)state_address_23[7196] * *state_address_22) + (float)(int)state_address_23[7180];
          if ( (float)(int)saved_weighted_sum < weighted_sum_15 )
          {
            saved_weighted_sum = (unsigned int)(int)weighted_sum_15;
            goto LABEL_269;
          }
        }
      }
      if ( !state_address_23[10758] || state_address_23[10791] != iteration_count_5 )
        goto LABEL_279;
      if ( state_word_3 == 1 )
      {
        table_value_8 = (int)state_address_23[10773];
        if ( (_DWORD)table_value_8 == -1 )
          goto LABEL_279;
        state_address_20 = 112 * table_value_8;
        scaled_index_11 = dword_140404A6C[28 * table_value_8 + 134050374];
        if ( (int)saved_weighted_sum >= scaled_index_11 )
          goto LABEL_279;
        saved_weighted_sum = (unsigned int)scaled_index_11;
        goto LABEL_278;
      }
      weighted_sum_16 = (float)((float)(int)state_address_23[10793] * *state_address_22) + (float)(int)state_address_23[10777];
      if ( (float)(int)saved_weighted_sum < weighted_sum_16 )
      {
        saved_weighted_sum = (unsigned int)(int)weighted_sum_16;
LABEL_278:
        saved_record_byte_offset = record_byte_offset_3 + 1;
        saved_record_byte_offset_2 = record_byte_offset_4 + 1;
      }
LABEL_279:
      record_byte_offset_4 += 4;
      record_byte_offset_3 += 4;
      state_address_23 += 14388;
      if ( record_byte_offset_4 - 2 >= 256 )
      {
        if ( saved_record_byte_offset_2 != -1 )
        {
          state_address_20 = (__int64)&g_151620CF0;
          dword_140404A6C[3597 * saved_record_byte_offset + 71856289] = 1;
        }
        if ( *state_address_21 != saved_record_byte_offset_2 )
        {
          *state_address_21 = saved_record_byte_offset_2;
          state_address_21[5654] = 0;
          state_word_3 = g_183EBFCB0;
        }
        ++iteration_count_5;
        state_address_22 += 6;
        state_address_21 += 5873;
        if ( !--remaining_count_7 )
        {
          state_address_24 = &g_151623978;
          do
          {
            if ( *(state_address_24 - 2886) && !*state_address_24 )
              sub_140117340(iteration_count_4);
            ++iteration_count_4;
            state_address_24 += 3597;
          }
          while ( iteration_count_4 < 256 );
          sr_ResetGame(state_address_20, (__int64)state_address_23, saved_weighted_sum);
          return 0; /* no result: rax is residue at the exit */
        }
        goto LABEL_242;
      }
    }
  }
  state_address_2 = &g_151623978;
  state_word = g_183EBFCD4;
  iteration_count = 0;
  player = 0;
  selected_word = 1;
  do
  {
    if ( *(state_address_2 - 2886) && !*state_address_2 )
    {
      scaled_index = (int)*(state_address_2 - 2853);
      if ( (unsigned int)scaled_index <= 2 )
        ++iteration_count;
      selected_word_2 = 0;
      if ( *(state_address_2 - 2868) )
        selected_word_2 = selected_word;
      selected_word = selected_word_2;
      comparison_operand = selected_word_2;
      if ( state_word < 5400 && *(state_address_2 - 2847) == -1 && (_DWORD)scaled_index != -1 && (int)scaled_index < 3 )
      {
        weighted_sum = *(float *)&dword_140404A6C[5873 * scaled_index + 283831501];
        weighted_sum_2 = *(float *)&dword_140404A6C[5873 * scaled_index + 283831502];
        weighted_sum_3 = *(float *)&dword_140404A6C[5873 * scaled_index + 283831503];
        rand_result_3 = (float)((float)((unsigned __int8)rand() - 127) * 0.0234375) + weighted_sum;
        rand_result = (unsigned __int8)rand();
        float_word = (int)*(state_address_2 - 2853);
        frame_float_at_112 = 1.0;
        unused_written_slot = weighted_sum_2 - 0.25;
        *(_QWORD *)&angle = dword_140404A6C[5873 * float_word + 283831497];
        unused_written_slot_2 = (float)((float)(rand_result - 127) * 0.0234375) + weighted_sum_3;
        *(float *)&angle = *(float *)&angle + 1.5707964;
        matrix = xmmword_140278D30;
        cached_xmmword_140278d30 = xmmword_140278D30;
        sr_math_mat3_rotate_rows((__int64)&matrix, (float *)&matrix + 3, angle);
        comparison_result = (int)state_address_2[683] <= 2;
        scaled_index_2 = *(state_address_2 - 2853);
        state_address_2[682] = 1;
        if ( comparison_result )
          state_address_2[683] = scaled_index_2;
        if ( scaled_index_2 )
        {
          if ( scaled_index_2 == 1 )
          {
            state_address_2[684] = 9;
          }
          else if ( scaled_index_2 == 2 )
          {
            state_address_2[684] = 8;
          }
        }
        else
        {
          state_address_2[684] = 2;
        }
        masked_bits = sub_140053840(&rand_result_3, (float *)&matrix, player);
        *(state_address_2 - 2847) = masked_bits;
        *(state_address_2 - 2797) = 0;
        dword_140404A6C[7166 * masked_bits + 280651341] = LODWORD(angle);
        sr_event_player_update(player);
        sub_140117020(player);
        state_word = g_183EBFCD4;
        selected_word = comparison_operand;
      }
    }
    ++player;
    state_address_2 += 3597;
  }
  while ( player < 256 );
  cached_game_tick = game_tick;
  selected_word_3 = 0;
  if ( iteration_count )
    selected_word_3 = selected_word;
  if ( state_word == g_183EBFCDC && game_connected )
  {
    shifted_bits = (__int64)(int)world_event_count++ << 7;
    HIWORD(world_event_count) = 0;
    cached_world_event_count = (int)world_event_count;
    *(unsigned int *)((char *)&g_1873DE460 + shifted_bits) = 10;
    *(unsigned int *)((char *)&g_1873DE464 + shifted_bits) = cached_game_tick;
    *(_QWORD *)((char *)&g_1873DE480 + shifted_bits) = 0;
    shifted_bits_2 = cached_world_event_count << 7;
    world_event_count = cached_world_event_count + 1;
    HIWORD(world_event_count) = 0;
    cached_world_event_count_2 = (int)world_event_count;
    *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_2) = 10;
    *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_2) = cached_game_tick;
    *(_QWORD *)((char *)&g_1873DE480 + shifted_bits_2) = 1;
    shifted_bits_3 = cached_world_event_count_2 << 7;
    world_event_count = cached_world_event_count_2 + 1;
    HIWORD(world_event_count) = 0;
    *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_3) = 10;
    *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_3) = cached_game_tick;
    *(_QWORD *)((char *)&g_1873DE480 + shifted_bits_3) = 2;
  }
  remaining_amount = state_word - 1;
  g_183EBFCD4 = remaining_amount;
  if ( !iteration_count )
  {
    if ( (unsigned int)(remaining_amount - 5401) <= 0x5DA )
      remaining_amount = 6900;
    g_183EBFCD4 = remaining_amount;
  }
  if ( !selected_word_3 )
  {
    comparison_result_2 = remaining_amount == 5400;
LABEL_41:
    if ( !comparison_result_2 )
      goto LABEL_92;
    goto LABEL_42;
  }
  comparison_result_2 = remaining_amount == 5400;
  if ( remaining_amount <= 5400 )
    goto LABEL_41;
  g_183EBFCD4 = 5400;
LABEL_42:
  sub_14012E960(128);
  record_byte_offset = &g_19021F244;
  record_byte_offset_2 = &g_19021F244;
  do
  {
    if ( *record_byte_offset_2 && (rand() & 7) == 0 )
      *record_byte_offset_2 = 0;
    record_byte_offset_2 += 4;
  }
  while ( (__int64)record_byte_offset_2 < (__int64)&g_19021F2C4 );
  do
  {
    if ( *record_byte_offset )
      goto LABEL_62;
    rand_result_2 = rand() & 0xF;
    if ( rand_result_2 < 2 )
    {
      packed_word_bits = 7;
LABEL_60:
      saved_packed_word_bits = packed_word_bits;
      goto LABEL_61;
    }
    if ( rand_result_2 >= 6 )
    {
      if ( rand_result_2 < 0xA )
      {
        packed_word_bits = 15;
        goto LABEL_60;
      }
      if ( rand_result_2 < 0xD )
      {
        packed_word_bits = 9;
        goto LABEL_60;
      }
      if ( rand_result_2 < 0xF )
      {
        packed_word_bits = 6;
        goto LABEL_60;
      }
      LODWORD(packed_word_bits) = 4;
      saved_packed_word_bits = 4;
      if ( (rand() & 0xF) == 0 )
      {
        packed_word_bits = 5;
        goto LABEL_60;
      }
    }
    else
    {
      LODWORD(packed_word_bits) = 0;
      saved_packed_word_bits = 0;
    }
LABEL_61:
    *record_byte_offset = 1;
    record_byte_offset[1] = packed_word_bits;
    record_byte_offset[3] = dword_140404A6C[24944 * saved_packed_word_bits + 346707730];
    record_byte_offset[2] = rand() % 6;
LABEL_62:
    record_byte_offset += 4;
  }
  while ( (__int64)record_byte_offset < (__int64)&g_19021F2C4 );
  sub_14005E520();
  remaining_count_2 = 3;
  state_address_3 = &g_183EBFDC4;
  text_cursor = (     char **)off_1402B2890;
  state_address_25 = &g_183EBFDC4;
  remaining_count_7 = 3;
  do
  {
    scaled_index_3 = (int)*state_address_3;
    if ( (_DWORD)scaled_index_3 != -1 )
    {
      crt_sprintf(source_buffer, "%s Manager: %s", *text_cursor, (     char *)&dword_140404A6C[3597 * scaled_index_3 + 71856254]);
      if ( game_connected )
      {
        byte_count = -1;
        do
          ++byte_count;
        while ( SR_VEC_LANES(128, source_buffer[0], i8)[byte_count] );
        cached_game_tick_2 = game_tick;
        cached_world_event_count_3 = world_event_count;
        if ( (int)byte_count > 63 )
          LODWORD(byte_count) = 63;
        shifted_bits_4 = (__int64)(int)world_event_count << 7;
        *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_4) = 2;
        *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_4) = cached_game_tick_2;
        crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + shifted_bits_4), source_buffer, (int)byte_count);
        remaining_count_2 = remaining_count_7;
        *((_BYTE *)&g_1873DE4A0 + shifted_bits_4 + (int)byte_count) = 0;
        *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_4) = byte_count;
        *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_4) = 0;
        *(unsigned int *)((char *)&g_1873DE488 + shifted_bits_4) = -1;
        *(unsigned int *)((char *)&g_1873DE48C + shifted_bits_4) = 0;
        world_event_count = cached_world_event_count_3 + 1;
        HIWORD(world_event_count) = 0;
      }
    }
    ++text_cursor;
    state_address_3 = state_address_25 + 5873;
    --remaining_count_2;
    state_address_25 += 5873;
    remaining_count_7 = remaining_count_2;
  }
  while ( remaining_count_2 );
  element_index = 0;
  running_total = 0;
  do
  {
    table_value = dword_140404A6C[running_total + 283836331];
    element_index_2 = 0;
    element_index_3 = 0;
    if ( table_value <= 0 )
    {
LABEL_77:
      createvehicle_result = -1;
    }
    else
    {
      state_address_4 = &dword_140404A6C[running_total + 283836332];
      while ( *state_address_4 )
      {
        ++element_index_2;
        ++element_index_3;
        state_address_4 += 13;
        if ( element_index_2 >= table_value )
          goto LABEL_77;
      }
      selection_flag_5 = 0;
      dword_140404A6C[13 * element_index_3 + 283836332 + running_total] = 1;
      createvehicle_result = sr_CreateVehicle(
              0,
              (float *)&dword_140404A6C[5873 * element_index + 283836333 + 13 * element_index_2],
              nullptr,
              &dword_140404A6C[5873 * element_index + 283836336 + 13 * element_index_2],
              selection_flag_5);
    }
    call_result = sub_14012CEB0(0, 0, 0, 0, 0, 0.0);
    scaled_index_4 = 383LL * call_result;
    dword_140404A6C[scaled_index_4 + 132400668] = 0;
    dword_140404A6C[scaled_index_4 + 132400639] = createvehicle_result;
    comparison_result = (int)dword_140404A6C[running_total + 283831506] <= 4;
    dword_140404A6C[5210 * createvehicle_result + 129720183] = call_result;
    if ( !comparison_result )
    {
      table_value_2 = dword_140404A6C[running_total + 283836331];
      element_index_4 = 0;
      element_index_5 = 0;
      if ( table_value_2 > 0 )
      {
        state_address_5 = &dword_140404A6C[running_total + 283836332];
        while ( *state_address_5 )
        {
          ++element_index_4;
          ++element_index_5;
          state_address_5 += 13;
          if ( element_index_4 >= table_value_2 )
            goto LABEL_86;
        }
        selection_flag_5 = 0;
        dword_140404A6C[13 * element_index_5 + 283836332 + running_total] = 1;
        sr_CreateVehicle(
          9,
          (float *)&dword_140404A6C[5873 * element_index + 283836333 + 13 * element_index_4],
          nullptr,
          &dword_140404A6C[5873 * element_index + 283836336 + 13 * element_index_4],
          selection_flag_5);
      }
    }
LABEL_86:
    *(_QWORD *)&angle_2 = dword_140404A6C[running_total + 283831497];
    weighted_sum_4 = *(float *)&dword_140404A6C[running_total + 283831498];
    *(float *)&angle_2 = *(float *)&angle_2 - 1.5707964;
    weighted_sum_5 = *(float *)&dword_140404A6C[running_total + 283831499];
    weighted_sum_6 = *(float *)&dword_140404A6C[running_total + 283831500];
    matrix = xmmword_140278D30;
    frame_float_at_112 = 1.0;
    cached_xmmword_140278d30 = xmmword_140278D30;
    sr_math_mat3_rotate_rows((__int64)&matrix, (float *)&matrix + 3, angle_2);
    sr_math_mat3_rotate_rows((__int64)&matrix, (float *)&matrix + 3, sr_export_float_lane_container(1078530011));
    state_address_6 = (float)(*((float *)&cached_xmmword_140278d30 + 2) * 7.75) + weighted_sum_4;
    state_address_7 = (float)(*((float *)&cached_xmmword_140278d30 + 3) * 7.75) + weighted_sum_5;
    rand_result_3 = state_address_6;
    unused_written_slot = state_address_7;
    weighted_sum_7 = (float)(frame_float_at_112 * 7.75) + weighted_sum_6;
    unused_written_slot_2 = weighted_sum_7;
    createitem_result = sr_CreateItem(25, &rand_result_3, nullptr, (float *)&matrix);
    if ( createitem_result != -1 )
    {
      scaled_index_5 = 1760LL * createitem_result;
      dword_140404A6C[scaled_index_5 + 278846051] = 0;
      dword_140404A6C[scaled_index_5 + 278845981] = 1111 * (element_index + 1);
      sr_item_phone_changed(createitem_result);
    }
    rand_result_3 = (float)(*(float *)&matrix * 0.5) + state_address_6;
    unused_written_slot = (float)(*((float *)&matrix + 1) * 0.5) + state_address_7;
    unused_written_slot_2 = (float)(*((float *)&matrix + 2) * 0.5) + weighted_sum_7;
    createitem_result_2 = sr_CreateItem(25, &rand_result_3, nullptr, (float *)&matrix);
    if ( createitem_result_2 != -1 )
    {
      scaled_index_6 = 1760LL * createitem_result_2;
      dword_140404A6C[scaled_index_6 + 278846051] = 1;
      dword_140404A6C[scaled_index_6 + 278845981] = 1111 * element_index + 1112;
      sr_item_phone_changed(createitem_result_2);
    }
    ++element_index;
    running_total += 5873;
  }
  while ( element_index < 3 );
  cached_game_tick = game_tick;
  remaining_amount = g_183EBFCD4;
LABEL_92:
  if ( remaining_amount < 5400 )
  {
    selection_flag = 1;
    for ( j = 0; j < 3; ++j )
    {
      state_address_8 = &g_151620CE4;
      remaining_count_3 = 256;
      do
      {
        if ( *(state_address_8 - 33) )
        {
          if ( *state_address_8 == j )
          {
            table_value_3 = (int)state_address_8[6];
            if ( (_DWORD)table_value_3 != -1 && dword_140404A6C[7166 * table_value_3 + 280651313] == -1 )
              selection_flag = 0;
          }
        }
        state_address_8 += 3597;
        --remaining_count_3;
      }
      while ( remaining_count_3 );
    }
    if ( selection_flag )
    {
      remaining_amount -= 7;
      g_183EBFCD4 = remaining_amount;
    }
  }
  if ( remaining_amount <= 0 )
  {
    corporation = 0;
    state_address_9 = &g_183EBFDC0;
    while ( 1 )
    {
      mission = 0;
      running_total_2 = state_address_9 + 79;
      do
      {
        if ( *running_total_2 )
          sr_event_mission_update(corporation, mission);
        ++mission;
        running_total_2 += 279;
      }
      while ( mission < 16 );
      if ( game_connected )
      {
        shifted_bits_5 = (__int64)(int)world_event_count++ << 7;
        HIWORD(world_event_count) = 0;
        *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_5) = 10;
        *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_5) = cached_game_tick;
        *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_5) = corporation;
        *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_5) = 1;
      }
      *state_address_9 = 1;
      ++corporation;
      state_address_9 += 5873;
      if ( corporation >= 3 )
        break;
      cached_game_tick = game_tick;
    }
    game_state = 2;
    g_183EBFCD4 = 3600 * g_183F7A5AC;
  }
  return 0; /* no result: rax is residue at the exit */
}
#undef unused_frame_slot_0
#undef selection_flag_5
#undef rand_result_3
#undef unused_written_slot
#undef unused_written_slot_2
#undef remaining_count_7
#undef state_address_25
#undef matrix
#undef cached_xmmword_140278d30
#undef frame_float_at_112
#undef source_buffer
#undef unused_frame_slot_640

//----- (00000001400F99A0) ----------------------------------------------------
__int64 sub_1400F99A0()
{
  unsigned int *state_address;
  __int64 remaining_count;
  unsigned int *state_address_2;
  int selection_flag;
  int iteration_count;
  unsigned int *state_address_3;
  __int64 remaining_count_2;
  int integer_difference;
  int i;
  __int64 scaled_index;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  int rand_result;
  __int64 scaled_index_2;
  double angle;
  bool comparison_result;
  unsigned int scaled_index_3;
  unsigned int masked_bits;
  int shifted_bits;
  float weighted_sum_4;
  float product_difference;
  __int64 remaining_count_3;
  __int64 createitem_result;
  __int64 scaled_index_4;
  signed int createitem_result_2;
  signed int createitem_result_3;
  signed int createitem_result_4;
  signed int createitem_result_5;
  bool comparison_result_2;
  int selection_flag_2;
  unsigned int state_word;
  int remaining_amount;
  int player;
  unsigned int *state_address_4;
  __int64 scaled_index_5;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  int rand_result_2;
  __int64 scaled_index_6;
  double angle_2;
  unsigned int scaled_index_7;
  unsigned int masked_bits_2;
  int selection_flag_3;
  float *state_address_5;
  float scaled_value;
  float *state_address_6;
  float source_component_y;
  float source_component_z;
  int option_flags;
  __int128 *state_address_7;
  int j;
  int iteration_count_2;
  unsigned int *state_address_8;
  int iteration_count_3;
  unsigned int *state_address_9;
  __int64 state_address_10;
  int iteration_count_4;
  unsigned int *state_address_11;
  int saved_packed_word_bits;
  unsigned int *state_address_12;
  __int64 saved_iteration_count;
  signed int cached_scaled_index;
  __int64 packed_word_bits;
  __int64 iteration_count_5;
  __int64 scaled_index_8;
  signed int scaled_index_9;
  unsigned int *state_address_13;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F99A0[96];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400F99A0 + 0)) /* [rsp+0h] */
#define rand_result_3 (*(float (*))(void *)(sr_frame_1400F99A0 + 32)) /* [rsp+20h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_1400F99A0 + 36)) /* [rsp+24h] */
#define unused_written_slot_2 (*(float (*))(void *)(sr_frame_1400F99A0 + 40)) /* [rsp+28h] */
#define matrix (*(__int128 (*))(void *)(sr_frame_1400F99A0 + 48)) /* [rsp+30h] */
#define unused_written_slot_3 (*(__int128 (*))(void *)(sr_frame_1400F99A0 + 64)) /* [rsp+40h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_1400F99A0 + 80)) /* [rsp+50h] */
#define unused_frame_slot_88 (*(__int64 (*))(void *)(sr_frame_1400F99A0 + 88)) /* [rsp+58h] */

  state_address = &g_151620CE8;
  remaining_count = 256;
  do
  {
    if ( *(state_address - 34) && (int)*state_address > 0 )
      --*state_address;
    state_address += 3597;
    --remaining_count;
  }
  while ( remaining_count );
  switch ( game_state )
  {
    case 1u:
      state_address_2 = &g_151623978;
      selection_flag = 1;
      iteration_count = 0;
      state_address_3 = &g_151623978;
      remaining_count_2 = 256;
      do
      {
        if ( *(state_address_3 - 2886) && !*state_address_3 )
        {
          if ( *(state_address_3 - 2853) <= 1 )
            ++iteration_count;
          if ( !*(state_address_3 - 2868) )
            selection_flag = 0;
        }
        state_address_3 += 3597;
        --remaining_count_2;
      }
      while ( remaining_count_2 );
      integer_difference = --g_183EBFCD4;
      if ( selection_flag )
      {
        if ( integer_difference > 60 )
          integer_difference = 60;
        g_183EBFCD4 = integer_difference;
      }
      if ( !iteration_count )
      {
        g_183EBFCD4 = 1800;
        return 0; /* no result: rax is residue at the exit */
      }
      if ( integer_difference > 0 )
        return 0; /* no result: rax is residue at the exit */
      for ( i = 0; i < 256; ++i )
      {
        if ( *(state_address_2 - 2886) )
        {
          if ( !*state_address_2 && *(state_address_2 - 2847) == -1 )
          {
            scaled_index = (int)*(state_address_2 - 2853);
            if ( (_DWORD)scaled_index != -1 && (int)scaled_index < 2 )
            {
              weighted_sum = *(float *)&dword_140404A6C[5873 * scaled_index + 283831501];
              weighted_sum_2 = *(float *)&dword_140404A6C[5873 * scaled_index + 283831502];
              weighted_sum_3 = *(float *)&dword_140404A6C[5873 * scaled_index + 283831503];
              rand_result_3 = (float)((float)((unsigned __int8)rand() - 127) * 0.0234375) + weighted_sum;
              rand_result = (unsigned __int8)rand();
              scaled_index_2 = (int)*(state_address_2 - 2853);
              unused_written_slot_4 = 1065353216;
              unused_written_slot = weighted_sum_2 - 0.25;
              *(_QWORD *)&angle = dword_140404A6C[5873 * scaled_index_2 + 283831497];
              unused_written_slot_2 = (float)((float)(rand_result - 127) * 0.0234375) + weighted_sum_3;
              *(float *)&angle = *(float *)&angle + 1.5707964;
              matrix = xmmword_140278D30;
              unused_written_slot_3 = xmmword_140278D30;
              sr_math_mat3_rotate_rows((__int64)&matrix, (float *)&matrix + 3, angle);
              comparison_result = (int)state_address_2[683] <= 2;
              scaled_index_3 = *(state_address_2 - 2853);
              state_address_2[682] = 1;
              if ( comparison_result )
                state_address_2[683] = scaled_index_3;
              if ( scaled_index_3 )
              {
                if ( scaled_index_3 == 1 )
                {
                  state_address_2[684] = 9;
                }
                else if ( scaled_index_3 == 2 )
                {
                  state_address_2[684] = 8;
                }
              }
              else
              {
                state_address_2[684] = 2;
              }
              masked_bits = sub_140053840(&rand_result_3, (float *)&matrix, i);
              *(state_address_2 - 2847) = masked_bits;
              *(state_address_2 - 2797) = 0;
              dword_140404A6C[7166 * masked_bits + 280651341] = LODWORD(angle);
              sr_event_player_update(i);
              sub_140117020(i);
            }
          }
        }
        state_address_2 += 3597;
      }
      shifted_bits = (iteration_count >> 2) + 2;
      unused_written_slot_4 = 1065353216;
      if ( shifted_bits > 12 )
        shifted_bits = 12;
      weighted_sum_4 = (float)(g_183EC596C + g_183EBFDA8) * 0.5;
      rand_result_3 = (float)(g_183EC5964 + g_183EBFDA0) * 0.5;
      unused_written_slot = (float)(g_183EC5968 + g_183EBFDA4) * 0.5;
      matrix = xmmword_140278D30;
      unused_written_slot_3 = xmmword_140278D30;
      if ( g_183EBFCC4 == 5 )
        shifted_bits *= 2;
      if ( shifted_bits <= 18 )
      {
        product_difference = weighted_sum_4 - (float)((float)shifted_bits * 0.3125);
        unused_written_slot_2 = product_difference;
        if ( shifted_bits < 0 )
        {
LABEL_50:
          game_state = 2;
          g_183EBFCD4 = 3600 * g_183F7A600;
          return 0; /* no result: rax is residue at the exit */
        }
      }
      else
      {
        product_difference = weighted_sum_4 - 5.625;
        shifted_bits = 18;
        unused_written_slot_2 = product_difference;
      }
      remaining_count_3 = (unsigned int)(shifted_bits + 1);
      do
      {
        createitem_result = (int)sr_CreateItem(15, &rand_result_3, nullptr, (float *)&matrix);
        scaled_index_4 = 1760 * createitem_result;
        dword_140404A6C[scaled_index_4 + 278845898] = 16;
        createitem_result_2 = sr_CreateItem(17, &rand_result_3, nullptr, (float *)&matrix);
        sr_item_transfer(createitem_result, createitem_result_2, -1, 0);
        createitem_result_3 = sr_CreateItem(17, &rand_result_3, nullptr, (float *)&matrix);
        sr_item_transfer(createitem_result, createitem_result_3, -1, 0);
        createitem_result_4 = sr_CreateItem(17, &rand_result_3, nullptr, (float *)&matrix);
        sr_item_transfer(createitem_result, createitem_result_4, -1, 0);
        createitem_result_5 = sr_CreateItem(17, &rand_result_3, nullptr, (float *)&matrix);
        sr_item_transfer(createitem_result, createitem_result_5, -1, 0);
        comparison_result_2 = game_connected == 0;
        dword_140404A6C[scaled_index_4 + 278845898] = 15;
        if ( !comparison_result_2 && (unsigned int)createitem_result <= 0x3FF )
          ++dword_140404A6C[createitem_result + 280648157];
        product_difference = product_difference + 0.625;
        unused_written_slot_2 = product_difference;
        --remaining_count_3;
      }
      while ( remaining_count_3 );
      goto LABEL_50;
    case 2u:
      selection_flag_2 = 1;
      ++game_state_time;
      state_word = g_183F7A5F8;
      remaining_amount = --g_183EBFCD4;
      if ( g_183F7A5F8 )
      {
        player = 0;
        state_address_4 = &g_151623978;
        do
        {
          if ( *(state_address_4 - 2886) )
          {
            if ( !*state_address_4 && *(state_address_4 - 2847) == -1 )
            {
              scaled_index_5 = (int)*(state_address_4 - 2853);
              if ( (_DWORD)scaled_index_5 != -1 && (int)scaled_index_5 < 2 )
              {
                weighted_sum_5 = *(float *)&dword_140404A6C[5873 * scaled_index_5 + 283831501];
                weighted_sum_6 = *(float *)&dword_140404A6C[5873 * scaled_index_5 + 283831502];
                weighted_sum_7 = *(float *)&dword_140404A6C[5873 * scaled_index_5 + 283831503];
                rand_result_3 = (float)((float)((unsigned __int8)rand() - 127) * 0.0234375) + weighted_sum_5;
                rand_result_2 = (unsigned __int8)rand();
                scaled_index_6 = (int)*(state_address_4 - 2853);
                unused_written_slot_4 = 1065353216;
                unused_written_slot = weighted_sum_6 - 0.25;
                *(_QWORD *)&angle_2 = dword_140404A6C[5873 * scaled_index_6 + 283831497];
                unused_written_slot_2 = (float)((float)(rand_result_2 - 127) * 0.0234375) + weighted_sum_7;
                *(float *)&angle_2 = *(float *)&angle_2 + 1.5707964;
                matrix = xmmword_140278D30;
                unused_written_slot_3 = xmmword_140278D30;
                sr_math_mat3_rotate_rows((__int64)&matrix, (float *)&matrix + 3, angle_2);
                comparison_result = (int)state_address_4[683] <= 2;
                scaled_index_7 = *(state_address_4 - 2853);
                state_address_4[682] = 1;
                if ( comparison_result )
                  state_address_4[683] = scaled_index_7;
                if ( scaled_index_7 )
                {
                  if ( scaled_index_7 == 1 )
                  {
                    state_address_4[684] = 9;
                  }
                  else if ( scaled_index_7 == 2 )
                  {
                    state_address_4[684] = 8;
                  }
                }
                else
                {
                  state_address_4[684] = 2;
                }
                masked_bits_2 = sub_140053840(&rand_result_3, (float *)&matrix, player);
                *(state_address_4 - 2847) = masked_bits_2;
                *(state_address_4 - 2797) = 0;
                *(state_address_4 - 2860) = 0;
                dword_140404A6C[7166 * masked_bits_2 + 280651341] = LODWORD(angle_2);
                sr_event_player_update(player);
              }
            }
          }
          ++player;
          state_address_4 += 3597;
        }
        while ( player < 256 );
        state_word = g_183F7A5F8;
        remaining_amount = g_183EBFCD4;
      }
      selection_flag_3 = 1;
      state_address_5 = (float *)&g_182BBB1DC;
      do
      {
        if ( *((_DWORD *)state_address_5 - 23) && *((_DWORD *)state_address_5 - 18) == 17 )
        {
          scaled_value = *state_address_5;
          state_address_6 = (float *)&g_183EBFD84;
          while ( 1 )
          {
            if ( scaled_value >= *(state_address_6 - 3) && scaled_value < *state_address_6 )
            {
              source_component_y = state_address_5[1];
              if ( source_component_y >= *(state_address_6 - 2) && source_component_y < state_address_6[1] )
              {
                source_component_z = state_address_5[2];
                if ( source_component_z >= *(state_address_6 - 1) && source_component_z < state_address_6[2] )
                  break;
              }
            }
            state_address_6 += 5873;
            if ( (__int64)state_address_6 >= (__int64)&g_183ECB50C )
            {
              selection_flag_3 = 0;
              break;
            }
          }
        }
        state_address_5 += 1760;
      }
      while ( (__int64)state_address_5 < (__int64)&g_18329B1DC );
      if ( selection_flag_3 )
      {
        remaining_amount -= 5;
        g_183EBFCD4 = remaining_amount;
      }
      option_flags = 0;
      state_address_7 = &matrix;
      for ( j = 0; j < 2; ++j )
      {
        iteration_count_2 = 0;
        *(_DWORD *)state_address_7 = 0;
        state_address_8 = &g_151623978;
        do
        {
          if ( *(state_address_8 - 2886) )
          {
            if ( !*state_address_8 && *(state_address_8 - 2853) == j )
            {
              option_flags |= 1 << j;
              if ( *(state_address_8 - 2847) != -1 )
                *(_DWORD *)state_address_7 = ++iteration_count_2;
            }
          }
          state_address_8 += 3597;
        }
        while ( (__int64)state_address_8 < (__int64)&g_1519A6D78 );
        state_address_7 = (__int128 *)((char *)state_address_7 + 4);
      }
      if ( state_word )
        goto LABEL_105;
      if ( (unsigned int)(option_flags - 1) <= 1 && ((int)matrix > 0 || SDWORD1(matrix) > 0) )
        selection_flag_2 = 0;
      if ( option_flags == 3 && (int)matrix > 0 && SDWORD1(matrix) > 0 || !selection_flag_2 || remaining_amount <= 60 )
      {
LABEL_105:
        if ( remaining_amount <= 0 )
        {
          sub_1400F5480();
          game_state = 3;
          g_183EBFCD4 = 720;
        }
      }
      else
      {
        g_183EBFCD4 = 60;
      }
      break;
    case 3u:
      if ( (int)--g_183EBFCD4 <= 0 )
      {
        iteration_count_3 = 0;
        state_address_9 = &g_151620CF0;
        state_address_10 = (__int64)&g_1519A40F0;
        do
        {
          if ( *(state_address_9 - 36) )
            *state_address_9 = 0;
          if ( state_address_9[3561] )
            state_address_9[3597] = 0;
          state_address_9 += 7194;
        }
        while ( (__int64)state_address_9 < (__int64)&g_1519A40F0 );
        iteration_count_4 = 0;
        state_address_11 = &g_183EBFDC4;
        do
        {
          saved_packed_word_bits = -1;
          state_address_12 = &g_151620CE4;
          saved_iteration_count = -1;
          cached_scaled_index = 0;
          LODWORD(packed_word_bits) = 0;
          iteration_count_5 = 0;
          do
          {
            if ( *(state_address_12 - 33) )
            {
              if ( *state_address_12 == iteration_count_4 )
              {
                scaled_index_8 = (int)*(state_address_12 - 18);
                if ( (_DWORD)scaled_index_8 != -1 )
                {
                  state_address_10 = 112 * scaled_index_8;
                  scaled_index_9 = dword_140404A6C[28 * scaled_index_8 + 134050374];
                  if ( cached_scaled_index < scaled_index_9 )
                  {
                    saved_packed_word_bits = packed_word_bits;
                    saved_iteration_count = iteration_count_5;
                    cached_scaled_index = scaled_index_9;
                  }
                }
              }
            }
            packed_word_bits = (unsigned int)(packed_word_bits + 1);
            ++iteration_count_5;
            state_address_12 += 3597;
          }
          while ( (int)packed_word_bits < 256 );
          if ( saved_packed_word_bits != -1 )
            dword_140404A6C[3597 * saved_iteration_count + 71856289] = 1;
          if ( *state_address_11 != saved_packed_word_bits )
          {
            *state_address_11 = saved_packed_word_bits;
            state_address_11[5654] = 0;
          }
          ++iteration_count_4;
          state_address_11 += 5873;
        }
        while ( (__int64)state_address_11 < (__int64)&g_183ECB54C );
        state_address_13 = &g_151623978;
        do
        {
          if ( *(state_address_13 - 2886) && !*state_address_13 )
            sub_140117340(iteration_count_3);
          ++iteration_count_3;
          state_address_13 += 3597;
        }
        while ( iteration_count_3 < 256 );
        sr_ResetGame(state_address_10, (__int64)state_address_12, packed_word_bits);
      }
      break;
  }
  return 0; /* no result: rax is residue at the exit */
}
#undef unused_frame_slot_0
#undef rand_result_3
#undef unused_written_slot
#undef unused_written_slot_2
#undef matrix
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_frame_slot_88

//----- (00000001400FA3A0) ----------------------------------------------------
__int64 sub_1400FA3A0()
{
  signed int cached_game_day_time;
  unsigned int *state_address;
  __int64 remaining_count;
  __int64 table_value;
  signed int table_value_2;
  __int64 scaled_index;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  __int64 remaining_count_2;
  unsigned int *state_address_2;
  int scaled_index_4;
  unsigned int *buffer_cursor;
  __int64 remaining_count_3;
  __int64 parent;
  __int64 scaled_index_5;
  __int64 result;
  int iteration_count;
  unsigned int *state_address_3;
  int cached_game_day_time_2;
  __int64 remaining_count_4;
  int i;
  int iteration_count_2;
  unsigned int *state_address_4;
  int *state_address_5;
  int j;
  unsigned int *state_address_6;
  int k;
  __int64 scaled_index_6;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  __int64 unrecovered_register_value_3;
  int iteration_count_3;
  __int64 running_total;
  unsigned int *state_address_7;
  unsigned int *state_address_8;
  int iteration_count_4;
  unsigned int *state_address_9;
  int iteration_count_5;
  unsigned int *saved_state_address;
  unsigned int *state_address_10;
  __int64 remaining_count_5;
  unsigned int *state_address_11;
  __int64 remaining_count_6;
  int scaled_index_7;
  int scaled_index_8;
  unsigned int *state_address_12;
  __int64 remaining_count_7;
  __int64 scaled_index_9;
  signed int state_word;
  signed int iteration_count_6;
  unsigned int *state_address_13;
  signed int state_word_2;
  signed int iteration_count_7;
  unsigned int *state_address_14;
  int scaled_index_10;
  signed int state_word_3;
  int remaining_count_8;
  __int64 scaled_index_11;
  int table_value_3;
  int createitem_result;
  int cached_world_item_29_count;
  unsigned int *state_address_15;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400FA3A0[176];
#define float_buffer (*(float (*)[2])(void *)(sr_frame_1400FA3A0 + 0)) /* [rsp+20h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_1400FA3A0 + 8)) /* [rsp+28h] */
#define scratch_buffer (*(_OWORD (*)[2])(void *)(sr_frame_1400FA3A0 + 16)) /* [rsp+30h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_1400FA3A0 + 48)) /* [rsp+50h] */
#define cached_game_day_time_3 (*(unsigned int (*))(void *)(sr_frame_1400FA3A0 + 160)) /* [rsp+C0h] */
#define integer_difference (*(__int64 (*))(void *)(sr_frame_1400FA3A0 + 168)) /* [rsp+C8h] */

  cached_game_day_time = game_day_time;
  state_address = &g_151620C60;
  remaining_count = 256;
  cached_game_day_time_3 = game_day_time;
  integer_difference = 256;
  do
  {
    if ( *state_address && state_address[2886] )
    {
      table_value = (int)state_address[39];
      if ( (_DWORD)table_value == -1 )
        *state_address = 0;
      table_value_2 = state_address[3513];
      if ( table_value_2 && cached_game_day_time > table_value_2 )
      {
        if ( (_DWORD)table_value != -1 )
        {
          scaled_index = 7166 * table_value;
          scaled_index_2 = (int)dword_140404A6C[7166 * table_value + 280651313];
          if ( (_DWORD)scaled_index_2 != -1 )
          {
            scaled_index_3 = (int)dword_140404A6C[5210 * scaled_index_2 + 129720183];
            if ( (_DWORD)scaled_index_3 != -1 )
              *(_QWORD *)&dword_140404A6C[383 * scaled_index_3 + 132400668] = 1;
          }
          remaining_count_2 = 8;
          state_address_2 = &dword_140404A6C[scaled_index + 280658140];
          do
          {
            scaled_index_4 = *(state_address_2 - 1);
            if ( scaled_index_4 > 0 )
            {
              buffer_cursor = state_address_2;
              remaining_count_3 = (unsigned int)scaled_index_4;
              do
              {
                parent = (int)*buffer_cursor;
                scaled_index_5 = 1760 * parent;
                if ( (int)dword_140404A6C[1760 * parent + 278845906] > 0 )
                {
                  dword_140404A6C[1760 * dword_140404A6C[scaled_index_5 + 278845907] + 278845900] = 0;
                  sr_world_detach_item(dword_140404A6C[scaled_index_5 + 278845907], parent);
                }
                ++buffer_cursor;
                dword_140404A6C[scaled_index_5 + 278845900] = 0;
                --remaining_count_3;
              }
              while ( remaining_count_3 );
            }
            state_address_2 += 10;
            --remaining_count_2;
          }
          while ( remaining_count_2 );
          remaining_count = integer_difference;
          dword_140404A6C[scaled_index + 280651317] = 0;
          dword_140404A6C[scaled_index + 280651305] = -1;
          cached_game_day_time = cached_game_day_time_3;
        }
        *state_address = 0;
      }
    }
    state_address += 3597;
    integer_difference = --remaining_count;
  }
  while ( remaining_count );
  result = game_state;
  if ( game_state == 1 )
  {
    g_183EBFCD4 = g_183EBFCE0;
    game_state = 2;
    game_day_time = 1728000;
    g_16B2A2EC4 = 10;
    sub_140061950();
    sub_14012E960(g_183F7A5C0);
    iteration_count = 0;
    if ( (int)item_block_region_count > 0 )
    {
      state_address_3 = &g_1760C5638;
      do
      {
        if ( *state_address_3 == 4 )
          sub_140195480(iteration_count, 0);
        ++iteration_count;
        state_address_3 += 14019;
      }
      while ( iteration_count < (int)item_block_region_count );
    }
    cached_game_day_time = game_day_time;
    result = game_state;
    float_buffer[0] = g_16B2A2EC8;
    unused_written_slot = *(float *)&g_16B2A2ED0;
    g_16D482320 = 0;
    g_16D48232C = 0;
    g_16D482334 = 0;
    g_16D482340 = 0;
    g_16D482348 = 0;
    g_16D482354 = 0;
    g_16D48235C = 0;
    g_16D482368 = 0;
    g_16D482370 = 0;
    g_16D48237C = 0;
    g_16D482384 = 0;
    g_16D482390 = 0;
  }
  if ( (_DWORD)result == 2 )
  {
    cached_game_day_time_2 = g_16B2A2EC4 + cached_game_day_time;
    game_day_time = cached_game_day_time_2;
    if ( cached_game_day_time_2 == 1728060 )
    {
      crt_memset((void *)(uintptr_t)(&g_1B4037440), 0, 0x800u);
      remaining_count_4 = 7;
      g_16B2AAF18 = rand() % 7;
      do
      {
        sub_140194D40();
        --remaining_count_4;
      }
      while ( remaining_count_4 );
      sub_140195970();
      cached_game_day_time_2 = game_day_time;
    }
    if ( cached_game_day_time_2 == 54000 * (cached_game_day_time_2 / 54000) && cached_game_day_time_2 < 3672000 )
    {
      for ( i = 0; i < 6; ++i )
        sub_1401949C0(i);
      iteration_count_2 = 0;
      state_address_4 = &g_16D48232C;
      state_address_5 = (int *)&g_183EBFDB4;
      do
      {
        if ( *state_address_5 > 0 )
        {
          if ( (int)*state_address_4 <= 0 )
            sub_14012EB50(iteration_count_2);
          else
            --*state_address_4;
        }
        ++iteration_count_2;
        state_address_5 += 5873;
        state_address_4 += 5;
      }
      while ( iteration_count_2 < 6 );
      cached_game_day_time_2 = game_day_time;
    }
    if ( cached_game_day_time_2 < 4104000 )
    {
      iteration_count_3 = 0;
      if ( (int)item_block_region_count > 0 )
      {
        running_total = 0;
        state_address_7 = &g_1760D202C;
        do
        {
          if ( *(state_address_7 - 12925) == 9 )
          {
            *(_QWORD *)state_address_7 = 0;
            dword_140404A6C[3 * running_total + 225654130] = 20;
            ++*state_address_7;
          }
          ++iteration_count_3;
          running_total += 4673;
          state_address_7 += 14019;
        }
        while ( iteration_count_3 < (int)item_block_region_count );
      }
      state_address_8 = &g_183EBFF40;
      iteration_count_4 = 0;
      state_address_9 = &g_19021F0CC;
      do
      {
        iteration_count_5 = 0;
        saved_state_address = state_address_8;
        *state_address_9 = (int)(float)(*((float *)state_address_9 - 2) * 10.0);
        do
        {
          if ( *(saved_state_address - 17) )
          {
            if ( !*(saved_state_address - 16) && cached_game_day_time_2 == *saved_state_address )
            {
              sub_1401300C0(*(saved_state_address - 15));
              if ( !*(saved_state_address - 16) )
              {
                sub_1400F50D0(iteration_count_4, iteration_count_5, 0, 0);
                cached_game_day_time_2 = game_day_time;
              }
            }
          }
          ++iteration_count_5;
          saved_state_address += 279;
        }
        while ( iteration_count_5 < 16 );
        ++iteration_count_4;
        state_address_9 += 6;
        state_address_8 += 5873;
      }
      while ( iteration_count_4 < 6 );
      state_address_10 = &g_151620C9C;
      remaining_count_5 = 256;
      if ( cached_game_day_time_2 == 18000 * (cached_game_day_time_2 / 18000) )
      {
        state_address_11 = &g_18329E328;
        remaining_count_6 = 256;
        do
        {
          if ( *(state_address_11 - 8) )
          {
            scaled_index_7 = *(state_address_11 - 3);
            if ( scaled_index_7 > 0 )
              *(state_address_11 - 3) = scaled_index_7 - 1;
            if ( (int)*state_address_11 > 7 )
            {
              scaled_index_8 = *state_address_11 - 1;
              *state_address_11 = scaled_index_8;
              if ( scaled_index_8 > 7 )
                *state_address_11 = scaled_index_8 - 1;
            }
          }
          state_address_11 += 7166;
          --remaining_count_6;
        }
        while ( remaining_count_6 );
        sub_14008C030();
        sub_14008C310();
        sub_14012C480();
        state_address_12 = &g_151620C9C;
        remaining_count_7 = 256;
        do
        {
          if ( *(state_address_12 - 15) )
          {
            scaled_index_9 = (int)*state_address_12;
            if ( (_DWORD)scaled_index_9 != -1 )
              dword_140404A6C[28 * scaled_index_9 + 134050378] += 5;
          }
          state_address_12 += 3597;
          --remaining_count_7;
        }
        while ( remaining_count_7 );
        state_word = g_160361344;
        iteration_count_6 = 0;
        if ( (int)g_160361344 > 0 )
        {
          state_address_13 = &g_160361380;
          do
          {
            if ( (int)*state_address_13 > 0 )
            {
              --*state_address_13;
              state_word = g_160361344;
            }
            ++iteration_count_6;
            state_address_13 += 28;
          }
          while ( iteration_count_6 < state_word );
        }
        sub_140132B00();
        sr_event_stock_prices();
        cached_game_day_time_2 = game_day_time;
      }
      if ( cached_game_day_time_2 == 54000 * (cached_game_day_time_2 / 54000) )
      {
        state_word_2 = g_160361344;
        iteration_count_7 = 0;
        if ( (int)g_160361344 > 0 )
        {
          state_address_14 = &g_16036138C;
          do
          {
            if ( (int)*state_address_14 > 0 )
            {
              scaled_index_10 = *state_address_14 - 16;
              if ( scaled_index_10 < 0 )
                scaled_index_10 = 0;
              *state_address_14 = scaled_index_10;
              state_word_2 = g_160361344;
            }
            ++iteration_count_7;
            state_address_14 += 28;
          }
          while ( iteration_count_7 < state_word_2 );
        }
        state_word_3 = g_183F7A5DC;
        g_16D482330 = 0;
        g_16D482344 = 0;
        g_16D482358 = 0;
        g_16D48236C = 0;
        g_16D482380 = 0;
        g_16D482394 = 0;
        g_16D4823A8 = 0;
        g_16D4823BC = 0;
        g_16D4823D0 = 0;
        g_16D4823E4 = 0;
        g_16D4823F8 = 0;
        g_16D48240C = 0;
        g_16D482420 = 0;
        g_16D482434 = 0;
        g_16D482448 = 0;
        g_16D48245C = 0;
        g_16D482470 = 0;
        g_16D482484 = 0;
        g_16D482498 = 0;
        g_16D4824AC = 0;
        g_16D4824C0 = 0;
        g_16D4824D4 = 0;
        g_16D4824E8 = 0;
        g_16D4824FC = 0;
        g_16D482510 = 0;
        g_16D482524 = 0;
        g_16D482538 = 0;
        g_16D48254C = 0;
        g_16D482560 = 0;
        g_16D482574 = 0;
        g_16D482588 = 0;
        g_16D48259C = 0;
        g_16D4825B0 = 0;
        g_16D4825C4 = 0;
        g_16D4825D8 = 0;
        g_16D4825EC = 0;
        g_16D482600 = 0;
        g_16D482614 = 0;
        g_16D482628 = 0;
        g_16D48263C = 0;
        g_16D482650 = 0;
        g_16D482664 = 0;
        g_16D482678 = 0;
        g_16D48268C = 0;
        g_16D4826A0 = 0;
        g_16D4826B4 = 0;
        g_16D4826C8 = 0;
        g_16D4826DC = 0;
        g_16D4826F0 = 0;
        g_16D482704 = 0;
        g_16D482718 = 0;
        g_16D48272C = 0;
        g_16D482740 = 0;
        g_16D482754 = 0;
        g_16D482768 = 0;
        g_16D48277C = 0;
        g_16D482790 = 0;
        g_16D4827A4 = 0;
        g_16D4827B8 = 0;
        g_16D4827CC = 0;
        g_16D4827E0 = 0;
        g_16D4827F4 = 0;
        g_16D482808 = 0;
        g_16D48281C = 0;
        do
        {
          remaining_count_8 = state_address_10[8];
          if ( remaining_count_8 > 0 && state_address_10[24] != -1 )
          {
            scaled_index_11 = (int)*state_address_10;
            if ( (_DWORD)scaled_index_11 != -1 )
              dword_140404A6C[28 * scaled_index_11 + 134050376] += 8;
          }
          table_value_3 = state_address_10[12];
          state_address_10[11] = 0;
          if ( table_value_3 > 0 )
            state_address_10[12] = table_value_3 - 1;
          state_address_10[13] = 0;
          if ( remaining_count_8 > 0 )
            state_address_10[8] = --remaining_count_8;
          if ( remaining_count_8 >= state_word_3 )
          {
            state_address_10[11] = 100;
            state_address_10[12] = 4;
          }
          state_address_10 += 3597;
          --remaining_count_5;
        }
        while ( remaining_count_5 );
      }
      if ( (int)world_item_29_count < 8 )
      {
        do
        {
          float_buffer[1] = g_16B2A2ECC;
          scratch_buffer[0] = xmmword_140278D30;
          unused_written_slot_2 = 1065353216;
          unused_written_slot = *(float *)&g_16B2A2ED0 + 1.0;
          float_buffer[0] = g_16B2A2EC8 + -4.0;
          scratch_buffer[1] = xmmword_140278D30;
          createitem_result = sr_CreateItem(29, float_buffer, nullptr, (float *)scratch_buffer);
          if ( createitem_result == -1 )
          {
            cached_world_item_29_count = world_item_29_count;
          }
          else
          {
            sub_1400584B0(createitem_result, (     __m128i *)&g_183E93124);
            cached_world_item_29_count = ++world_item_29_count;
          }
        }
        while ( cached_world_item_29_count < 8 );
      }
      result = (__int64)&g_151623978;
      do
      {
        if ( *(_DWORD *)(result - 11544) && !*(_DWORD *)result && *(_DWORD *)(result - 11388) == -1 )
          *(_DWORD *)(result - 11188) = 1;
        result += 14388;
      }
      while ( result < (__int64)&g_1519A6D78 );
      state_address_15 = &g_183EBFF0C;
      do
      {
        if ( *(state_address_15 - 4) )
        {
          result = (int)*state_address_15;
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( state_address_15[275] )
        {
          result = (int)state_address_15[279];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( state_address_15[554] )
        {
          result = (int)state_address_15[558];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( state_address_15[833] )
        {
          result = (int)state_address_15[837];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( state_address_15[1112] )
        {
          result = (int)state_address_15[1116];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( state_address_15[1391] )
        {
          result = (int)state_address_15[1395];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( state_address_15[1670] )
        {
          result = (int)state_address_15[1674];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( state_address_15[1949] )
        {
          result = (int)state_address_15[1953];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( state_address_15[2228] )
        {
          result = (int)state_address_15[2232];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( state_address_15[2507] )
        {
          result = (int)state_address_15[2511];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( state_address_15[2786] )
        {
          result = (int)state_address_15[2790];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( state_address_15[3065] )
        {
          result = (int)state_address_15[3069];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( state_address_15[3344] )
        {
          result = (int)state_address_15[3348];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( state_address_15[3623] )
        {
          result = (int)state_address_15[3627];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( state_address_15[3902] )
        {
          result = (int)state_address_15[3906];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( state_address_15[4181] )
        {
          result = (int)state_address_15[4185];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        state_address_15 += 5873;
      }
      while ( (__int64)state_address_15 < (__int64)&g_183EE25A4 );
    }
    else
    {
      for ( j = 0; j < 6; ++j )
        sub_140194C10(j);
      g_16B2A2EE0 = 0;
      state_address_6 = &g_151624484;
      for ( k = 0; k < 256; ++k )
      {
        if ( *(state_address_6 - 3593) )
        {
          sub_140117340(k);
          scaled_index_6 = (int)*(state_address_6 - 3554);
          if ( (_DWORD)scaled_index_6 == -1 )
          {
            *(state_address_6 - 3) = 0;
          }
          else
          {
            *(state_address_6 - 3) = 1;
            *(state_address_6 - 2) = dword_140404A6C[7166 * scaled_index_6 + 280651440];
            *(state_address_6 - 1) = dword_140404A6C[7166 * scaled_index_6 + 280651441];
            *state_address_6 = dword_140404A6C[7166 * scaled_index_6 + 280651442];
            state_address_6[1] = dword_140404A6C[7166 * scaled_index_6 + 280651490];
            state_address_6[2] = dword_140404A6C[7166 * scaled_index_6 + 280651313];
            state_address_6[3] = dword_140404A6C[7166 * scaled_index_6 + 280651314];
          }
        }
        state_address_6 += 3597;
      }
      sub_14012C480();
      return sr_ResetGame(unrecovered_register_value_2, unrecovered_register_value, unrecovered_register_value_3);
    }
  }
  return result;
}
#undef float_buffer
#undef unused_written_slot
#undef scratch_buffer
#undef unused_written_slot_2
#undef cached_game_day_time_3
#undef integer_difference

//----- (00000001400FB0A0) ----------------------------------------------------
__int64 sub_1400FB0A0()
{
  unsigned int call_result;
  __int64 unused_local;
  __int64 unused_frame_slot_0;
  __int64 unused_local_2;
  __int64 unused_local_3;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  __int64 unused_local_4;
  __int64 unused_local_5;
  __int64 unused_local_6;
  __int64 unused_local_7;
  unsigned int inet_addr_sr_result;
  __int64 element_index;
  char table_value;
  signed int i;
  int call_result_2;
  __int64 iteration_count;
  char masked_bits;
  void **buffer_cursor;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400FB0A0[688];
#define scratch_buffer (*(_DWORD (*)[20])(void *)(sr_frame_1400FB0A0 + 0)) /* [rsp+0h] */
#define scratch_buffer_2 (*(_DWORD (*)[16])(void *)(sr_frame_1400FB0A0 + 96)) /* [rsp+60h] */
#define scratch_buffer_3 (*(_BYTE (*)[512])(void *)(sr_frame_1400FB0A0 + 160)) /* [rsp+A0h] */
#define unused_frame_slot_672 (*(__int64 (*))(void *)(sr_frame_1400FB0A0 + 672)) /* [rsp+2A0h] */

  sub_140198FA7();
  g_16B097ED4 = 39;
  call_result = sub_140237448(nullptr);
  srand(call_result);
  *(_QWORD *)&g_183F7C2F8 = 0;
  glClearColor(0.03529411926865578f,0.062745101749897f,0.08235294371843338f,0.0f) /* native XMM0-3 */;
  glClear(16640);
  sr_camera_begin_2d();
  sr_text_draw_recovered("generating", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43200000u))))), 20.0, 1u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FB184 */;
  sub_140198EF3();
  sr_menu_reset();
  *(_OWORD *)&menu_item_width = xmmword_140279780;
  sub_140139E90(unrecovered_register_value_2, unrecovered_register_value, 0.0 /* unused native input */);
  g_175FD13A0 = xmmword_140279810;
  g_175FD13E4 = 1061158912;
  g_175FD13E0 = 1115684864;
  g_175FD13B0 = xmmword_140279710;
  g_175FD13C0 = xmmword_140279490;
  g_175FD13D0 = xmmword_140279490;
  sr_math_mat3_rotate_rows((__int64)&g_175FD13BC, (float *)&g_175FD13BC, sr_export_float_lane_container(1070141403));
  g_16E486868 = 3;
  g_16E48686C = 3;
  g_16E486848 = -1;
  g_16E486864 = -1;
  sub_14013CDF0();
  glClearColor(0.03529411926865578f,0.062745101749897f,0.08235294371843338f,0.0f) /* native XMM0-3 */;
  glClear(16640);
  sr_camera_begin_2d();
  scratch_buffer[16] = 1065353216;
  scratch_buffer[14] = 1065353216;
  scratch_buffer[12] = 1065353216;
  scratch_buffer[10] = 1065353216;
  scratch_buffer[8] = 1;
  sr_text_draw_recovered("connecting", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43200000u))))), 20.0, 1u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FB2CD */;
  sub_140198EF3();
  if ( !(unsigned int)sr_ConnectMasterServer() )
  {
    inet_addr_sr_result = inet_addr_sr("66.226.72.227");
    g_18329C1E0 = ntohl_sr(inet_addr_sr_result);
    LOWORD(g_18329C1E4) = 27592;
  }
  sub_1400E5F10();
  if ( (unsigned int)sub_140198AF0((__int64)scratch_buffer_3) )
  {
    scratch_buffer_3[63] = 0;
    element_index = 0;
    do
    {
      table_value = scratch_buffer_3[element_index];
      *((_BYTE *)(unsigned int *)&g_151E4594C + element_index++) = table_value;
    }
    while ( table_value );
    HIBYTE(g_151E45968) = 0;
  }
  g_1829F8BC0 = sub_140198A50((unsigned int *)&g_1829F8BC8);
  g_1829F8FDC = sub_1401988C0(4u);
  for ( i = 0; i < (int)g_1829F8FDC; ++i )
    sub_140198820(
      (__int64 *)&dword_140404A6C[132LL * i + 278384989],
      (__int64)&dword_140404A6C[132 * i + 278384992],
      i,
      4u);
  g_1602E12E0 = 0;
  crt_chdir(&g_182A7D340);
  crt_sprintf(scratch_buffer_2, "client2.csk");
  crt_chdir(&g_182A7D140);
  sub_14008EAD0(1);
  g_18539D3A0 = 1;
  call_result_2 = sub_140198F9B();
  game_type = 0;
  g_16B165F44 = call_result_2 - 1000;
  iteration_count = 0;
  g_183EBFCE0 = 25200;
  do
  {
    masked_bits = *((_BYTE *)&g_151E45B4C + iteration_count);
    *((_BYTE *)(unsigned int *)&g_1AD04ADD4 + iteration_count++) = masked_bits;
  }
  while ( masked_bits );
  g_1AD04B1F4 = 1;
  game_connected = 1;
  *(_QWORD *)&g_151E4614C = 0;
  sr_ClientMain();
  closesocket_sr((int)g_18539D3C8);
  g_18539D3A8 = 0;
  sub_1401E0F20(*(void **)&g_187BDE460);
  buffer_cursor = (void **)&g_187BDE660;
  do
    sub_1401E2C30(*buffer_cursor++);
  while ( (__int64)buffer_cursor < (__int64)&g_187BDE6A0 );
  return 0; /* the function has no caller */
}
#undef scratch_buffer
#undef scratch_buffer_2
#undef scratch_buffer_3
#undef unused_frame_slot_672

//----- (00000001400FB4D0) ----------------------------------------------------
__int64 sub_1400FB4D0()
{
  unsigned int *buffer_cursor;
  __int64 file_handle;
  __int64 file_handle_2;
  __int64 remaining_count;
  __int64 remaining_count_2;
  unsigned int loaded_word;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400FB4D0[96];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400FB4D0 + 0)) /* [rsp+0h] */
#define destination_buffer (*(_BYTE (*)[4])(void *)(sr_frame_1400FB4D0 + 64)) /* [rsp+40h] */
#define destination_buffer_2 (*(_WORD (*)[2])(void *)(sr_frame_1400FB4D0 + 68)) /* [rsp+44h] */
#define FileName (*(char (*)[13])(void *)(sr_frame_1400FB4D0 + 72)) /* [rsp+48h] */
#define unused_written_slot (*(__int16 (*))(void *)(sr_frame_1400FB4D0 + 85)) /* [rsp+55h] */
#define unused_written_slot_2 (*(char (*))(void *)(sr_frame_1400FB4D0 + 87)) /* [rsp+57h] */
#define unused_frame_slot_88 (*(__int64 (*))(void *)(sr_frame_1400FB4D0 + 88)) /* [rsp+58h] */

  unused_written_slot = 0;
  unused_written_slot_2 = 0;
  strcpy(FileName, "scsht000.tga");
  glReadBuffer(1029);
  buffer_cursor = &g_1839A3100;
  glReadPixels(0, 0, 512, 512, 6408, 5121, &g_1839A3100);
  file_handle = crt_fopen(FileName, "wb");
  file_handle_2 = file_handle;
  if ( file_handle )
  {
    destination_buffer[0] = 0;
    crt_fread((__int64)destination_buffer, 1, 1, file_handle);
    destination_buffer[0] = 0;
    crt_fread((__int64)destination_buffer, 1, 1, file_handle_2);
    destination_buffer[0] = 2;
    crt_fread((__int64)destination_buffer, 1, 1, file_handle_2);
    destination_buffer_2[0] = 0;
    crt_fread((__int64)destination_buffer_2, 2, 1, file_handle_2);
    destination_buffer_2[0] = 0;
    crt_fread((__int64)destination_buffer_2, 2, 1, file_handle_2);
    destination_buffer[0] = 0;
    crt_fread((__int64)destination_buffer, 1, 1, file_handle_2);
    destination_buffer_2[0] = 0;
    crt_fread((__int64)destination_buffer_2, 2, 1, file_handle_2);
    destination_buffer_2[0] = 0;
    crt_fread((__int64)destination_buffer_2, 2, 1, file_handle_2);
    destination_buffer_2[0] = 512;
    crt_fread((__int64)destination_buffer_2, 2, 1, file_handle_2);
    destination_buffer_2[0] = 512;
    crt_fread((__int64)destination_buffer_2, 2, 1, file_handle_2);
    destination_buffer[0] = 24;
    crt_fread((__int64)destination_buffer, 1, 1, file_handle_2);
    destination_buffer[0] = 0;
    crt_fread((__int64)destination_buffer, 1, 1, file_handle_2);
    remaining_count = 512;
    do
    {
      remaining_count_2 = 512;
      do
      {
        loaded_word = *buffer_cursor;
        sub_14020BCA8(BYTE2(*buffer_cursor), file_handle_2);
        sub_14020BCA8(SBYTE1(loaded_word), file_handle_2);
        sub_14020BCA8(loaded_word, file_handle_2);
        ++buffer_cursor;
        --remaining_count_2;
      }
      while ( remaining_count_2 );
      --remaining_count;
    }
    while ( remaining_count );
    crt_fclose(file_handle_2);
  }
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef destination_buffer
#undef destination_buffer_2
#undef FileName
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_frame_slot_88

//----- (00000001400FB870) ----------------------------------------------------
__int64 sub_1400FB870()
{
  int drawmenubutton_result;
  unsigned int state_word;
  __int64 result;

  if ( (int)g_151042894 < 16 )
  {
    dword_140404A6C[2 * g_151042894 + 70317963] = menu_item_width;
    dword_140404A6C[2 * g_151042894++ + 70317964] = menu_item_height;
  }
  menu_item_width = 1128267776;
  menu_item_height = 1103101952;
  g_150F610F4 = 41;
  drawmenubutton_result = sr_DrawMenuButton("Back");
  state_word = g_183EBFAA4;
  if ( drawmenubutton_result )
    state_word = 0;
  g_183EBFAA4 = state_word;
  *(unsigned int *)&menu_x = 1107296256;
  menu_y = menu_y + 64.0;
  sr_DrawMenuButtonSelectable("Female", (int *)&g_151E461E8, 0);
  sr_DrawMenuButtonSelectable("Male", (int *)&g_151E461E8, 1);
  sr_DrawMenuSlider("Head", (int *)&g_151E461EC, 0, 4, 1);
  sr_DrawMenuSlider("Eyes", (int *)&g_151E461FC, 0, 7, 1);
  sr_DrawMenuSlider("Hair", (int *)&g_151E461F8, 0, 8, 1);
  sr_DrawMenuSlider("Hair Color", (int *)&g_151E461F4, 0, 11, 1);
  sr_DrawMenuSlider("Skin", (int *)&g_151E461F0, 0, 5, 1);
  result = g_151042894;
  if ( (int)g_151042894 > 0 )
  {
    --g_151042894;
    result = (int)result - 1;
    menu_item_width = dword_140404A6C[2 * (int)result + 70317963];
    menu_item_height = dword_140404A6C[2 * (int)result + 70317964];
  }
  return result;
}

//----- (00000001400FC480) ----------------------------------------------------
__int64 sub_1400FC480()
{
  int drawmenubutton_result;
  unsigned int state_word;
  __int64 result;
  unsigned int state_word_2;
  char masked_bits;
  signed int cached_packet_out_byte;
  __int128 state_word_3;
  signed int iteration_count;
  __int128 state_word_4;
  signed int cached_packet_out_byte_2;
  int byte_count;
  int cached_packet_in_byte;
  int cached_packet_in_bit;
  __int64 integer_sum;
  int remaining_amount;
  char running_total;
  int integer_difference;
  signed int cached_packet_in_byte_2;
  __int128 masked_bits_2;
  __int128 masked_bits_3;
  int unrecovered_register_value;

  menu_item_width = 1126170624;
  menu_item_height = 1101004800;
  g_150F610F4 = 41;
  drawmenubutton_result = sr_DrawMenuButton("Cancel");
  state_word = g_183EBFAA4;
  if ( drawmenubutton_result )
    state_word = 1;
  g_183EBFAA4 = state_word;
  if ( !g_16B15FF3C )
  {
    *(unsigned int *)&menu_x = 1138229248;
    *(unsigned int *)&menu_y = 1131413504;
    menu_item_width = 1126170624;
    menu_item_height = 1101004800;
    g_150F61100 = 1;
    sub_140070200("Password", (__int64)(unsigned int *)&g_16B15FF40, 0x18u);
    menu_y = menu_y + 16.0;
    result = sr_DrawMenuButton("Connect");
    if ( (_DWORD)result )
      g_16B15FF3C = 1;
    return result;
  }
  if ( (unsigned int)sub_140198F9B() - g_16B15FF24 <= 0xC8 )
  {
    masked_bits = unrecovered_register_value;
  }
  else
  {
    g_16B15FF24 = sub_140198F9B();
    state_word_2 = g_16B15FF3C;
    if ( g_16B15FF3C == 1 )
    {
      masked_bits = 75;
      packet_out_data = dword_1402B2658;
      *(unsigned int *)((char *)&g_18539D408 + 1) = g_1603612E4;
      *(unsigned int *)((char *)&g_18539D40C + 1) = g_1603612F4;
      *(unsigned int *)((char *)&g_18539D410 + 1) = g_1AD04B1E8;
      *(_WORD *)((char *)&g_18539D414 + 1) = g_1AD04B1EC;
      *(_QWORD *)&packet_out_byte = 19;
      LOBYTE(g_18539D408) = 75;
      sub_140130350(g_18329C1E0, g_18329C1E4, 0);
      state_word_2 = g_16B15FF3C;
    }
    else
    {
      masked_bits = unrecovered_register_value;
    }
    if ( state_word_2 == 2 )
    {
      masked_bits = 2;
      *(_QWORD *)&packet_out_byte = 5;
      LOBYTE(g_18539D408) = 2;
      packet_out_data = dword_1402B2658;
      sr_net_write_bits(&dword_1402B231C, 8);
      cached_packet_out_byte = packet_out_byte;
      if ( (int)packet_out_byte < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          cached_packet_out_byte = packet_out_byte + 1;
          packet_out_bit = 0;
          ++packet_out_byte;
        }
        *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte) = g_1603612E4;
        cached_packet_out_byte = packet_out_byte + 4;
        packet_out_byte = cached_packet_out_byte;
        if ( cached_packet_out_byte < 0x10000 )
        {
          if ( (int)packet_out_bit > 0 )
          {
            ++cached_packet_out_byte;
            packet_out_bit = 0;
            packet_out_byte = cached_packet_out_byte;
          }
          *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte) = g_1603612F8;
          cached_packet_out_byte = packet_out_byte + 4;
          packet_out_byte = cached_packet_out_byte;
          if ( cached_packet_out_byte < 0x10000 )
          {
            if ( (int)packet_out_bit > 0 )
            {
              ++cached_packet_out_byte;
              packet_out_bit = 0;
              packet_out_byte = cached_packet_out_byte;
            }
            state_word_3 = g_151E4595C;
            *(_OWORD *)((char *)&packet_out_data + cached_packet_out_byte) = g_151E4594C;
            *(_OWORD *)((char *)&g_18539D414 + cached_packet_out_byte) = state_word_3;
            cached_packet_out_byte = packet_out_byte + 32;
            packet_out_byte += 32;
          }
        }
      }
      if ( cached_packet_out_byte < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          ++cached_packet_out_byte;
          packet_out_bit = 0;
          packet_out_byte = cached_packet_out_byte;
        }
        *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte) = g_151E461E8
                                                                    + 2
                                                                    * (g_151E461EC
                                                                     + 16
                                                                     * (g_151E461F0
                                                                      + 8
                                                                      * (g_151E461F4
                                                                       + 16
                                                                       * (g_151E461F8
                                                                        + 16 * g_151E461FC))));
        iteration_count = packet_out_byte + 4;
        packet_out_byte = iteration_count;
        if ( iteration_count < 0x10000 )
        {
          if ( (int)packet_out_bit > 0 )
          {
            ++iteration_count;
            packet_out_bit = 0;
            packet_out_byte = iteration_count;
          }
          state_word_4 = g_16B15FF50;
          *(_OWORD *)((char *)&packet_out_data + iteration_count) = g_16B15FF40;
          *(_OWORD *)((char *)&g_18539D414 + iteration_count) = state_word_4;
          packet_out_byte += 32;
        }
      }
      sr_net_write_bits(&dword_1402B26C8, 8);
      cached_packet_out_byte_2 = packet_out_byte;
      if ( (int)packet_out_byte < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          cached_packet_out_byte_2 = packet_out_byte + 1;
          packet_out_bit = 0;
          ++packet_out_byte;
        }
        *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte_2) = g_1603612F0;
        packet_out_byte += 4;
      }
      sub_140130350(g_1AD04B1D4, g_1AD04B1D8, *(__int64 *)&g_1AD04B1E0);
    }
  }
  result = sub_14011C760();
  if ( (int)result > 0 )
  {
    byte_count = unrecovered_register_value;
    do
    {
      cached_packet_in_byte = packet_in_byte;
      if ( (int)packet_in_byte >= 0x10000
        || (signed int)(packet_in_byte + 1) > (int)packet_in_length )
      {
        cached_packet_in_bit = packet_in_bit;
      }
      else
      {
        cached_packet_in_bit = packet_in_bit;
        if ( (int)packet_in_bit > 0 )
        {
          cached_packet_in_byte = ++packet_in_byte;
          cached_packet_in_bit = 0;
          packet_in_bit = 0;
        }
        integer_sum = cached_packet_in_byte++;
        masked_bits = *((_BYTE *)&packet_in_data + integer_sum);
        packet_in_byte = cached_packet_in_byte;
      }
      switch ( masked_bits )
      {
        case 75:
          if ( cached_packet_in_byte < 0x10000 && cached_packet_in_byte + 4 <= (int)packet_in_length )
          {
            if ( cached_packet_in_bit > 0 )
            {
              ++cached_packet_in_byte;
              packet_in_bit = 0;
              packet_in_byte = cached_packet_in_byte;
            }
            g_1603612F8 = *(unsigned int *)((char *)&packet_in_data + cached_packet_in_byte);
            packet_in_byte = cached_packet_in_byte + 4;
          }
          g_16B15FF3C = 2;
          break;
        case 6:
          if ( cached_packet_in_byte < 0x10000 && cached_packet_in_byte + 4 <= (int)packet_in_length )
          {
            if ( cached_packet_in_bit > 0 )
            {
              ++cached_packet_in_byte;
              packet_in_bit = 0;
              packet_in_byte = cached_packet_in_byte;
            }
            game_unknown_1a4d2dce4 = *(unsigned int *)((char *)&packet_in_data + cached_packet_in_byte);
            packet_in_byte = cached_packet_in_byte + 4;
          }
          sr_net_read_bits(&game_type, 4);
          sr_net_read_bits(&g_183EBFCB0, 4);
          sr_net_read_bits(&g_183EBFCC4, 8);
          cached_packet_in_byte_2 = packet_in_byte;
          if ( (int)packet_in_byte < 0x10000
            && (signed int)(packet_in_byte + 32) <= (int)packet_in_length )
          {
            if ( (int)packet_in_bit > 0 )
            {
              cached_packet_in_byte_2 = packet_in_byte + 1;
              packet_in_bit = 0;
              ++packet_in_byte;
            }
            masked_bits_2 = *(_OWORD *)((char *)&packet_in_data + cached_packet_in_byte_2);
            masked_bits_3 = *(_OWORD *)((char *)&g_1853AD434 + cached_packet_in_byte_2);
            packet_in_byte = cached_packet_in_byte_2 + 32;
            g_183EBFAB0 = masked_bits_2;
            g_183EBFAC0 = masked_bits_3;
          }
          sub_14018D440((float *)(unsigned int *)&game_sun_angle, 16);
          sub_14018D440((float *)(unsigned int *)&game_unknown_183ebfd58, 16);
          if ( game_type == 7 )
            sr_net_read_bits(&g_183F7A604, 8);
          g_16B15FF3C = 3;
          g_183EBFAA4 = 0;
          return sub_140095B00();
        case 3:
          remaining_amount = 6;
          if ( cached_packet_in_byte < 0x10000 )
          {
            if ( cached_packet_in_byte <= (int)packet_in_length )
            {
              byte_count = 0;
              running_total = 0;
              while ( 1 )
              {
                integer_difference = 8 - cached_packet_in_bit;
                byte_count |= (~(-1 << remaining_amount)
                      & (*((unsigned __int8 *)&packet_in_data + cached_packet_in_byte) >> SLOBYTE(packet_in_bit))) << running_total;
                if ( remaining_amount < (unsigned int)(8 - cached_packet_in_bit) )
                  break;
                cached_packet_in_bit = 0;
                packet_in_bit = 0;
                if ( remaining_amount == integer_difference )
                {
                  packet_in_byte = ++cached_packet_in_byte;
                  goto LABEL_60;
                }
                ++cached_packet_in_byte;
                remaining_amount -= integer_difference;
                running_total += integer_difference;
                packet_in_byte = cached_packet_in_byte;
                if ( remaining_amount <= 0 )
                  goto LABEL_60;
              }
              cached_packet_in_bit += remaining_amount;
              packet_in_bit = cached_packet_in_bit;
            }
LABEL_60:
            if ( cached_packet_in_byte < 0x10000 && cached_packet_in_byte + byte_count <= (int)packet_in_length )
            {
              if ( cached_packet_in_bit > 0 )
              {
                ++cached_packet_in_byte;
                packet_in_bit = 0;
                packet_in_byte = cached_packet_in_byte;
              }
              crt_memcpy(
                (__m128i *)&g_16B160340,
                (     __m128i *)((char *)&packet_in_data + cached_packet_in_byte),
                byte_count);
              packet_in_byte = byte_count + cached_packet_in_byte;
            }
          }
          *((_BYTE *)&g_16B160340 + byte_count) = 0;
          g_16B15FF3C = 4;
          break;
      }
      result = sub_14011C760();
    }
    while ( (int)result > 0 );
  }
  return result;
}

//----- (00000001400FCB50) ----------------------------------------------------
void sub_1400FCB50()
{
  unsigned int state_word;

  state_word = g_16B15FF3C;
  if ( g_16B15FF3C - 1 <= 1 )
  {
    sr_text_draw_recovered("Connecting", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43200000u))))), 20.0, 1u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FCBBC */;
    state_word = g_16B15FF3C;
  }
  if ( state_word == 4 )
    sr_text_draw_recovered((char *)&g_16B160340, 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43200000u))))), 20.0, 1u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FCC19 */;
}

//----- (00000001400FCC30) ----------------------------------------------------
__int64 sub_1400FCC30()
{
  __int64 result;
  unsigned int state_word;

  menu_item_width = 1126170624;
  menu_item_height = 1101004800;
  g_150F610F4 = 41;
  result = sr_DrawMenuButton("Back");
  state_word = g_183EBFAA4;
  if ( (_DWORD)result )
    state_word = 0;
  g_183EBFAA4 = state_word;
  return result;
}

//----- (00000001400FCC90) ----------------------------------------------------
void sub_1400FCC90()
{
  sr_text_draw_recovered("Design//Programming",16.0f,64.0f,16.0f,0,0.75f,0.75f,0.75f,1.0f,NULL);
  sr_text_draw_recovered("Alex Austin",16.0f,96.0f,16.0f,0,1.0f,1.0f,1.0f,1.0f,NULL);
  sr_text_draw_recovered("Art",16.0f,144.0f,16.0f,0,0.75f,0.75f,0.75f,1.0f,NULL);
  sr_text_draw_recovered("Sofia da Silva",16.0f,176.0f,16.0f,0,1.0f,1.0f,1.0f,1.0f,NULL);
  sr_text_draw_recovered("Design//Art",16.0f,224.0f,16.0f,0,0.75f,0.75f,0.75f,1.0f,NULL);
  sr_text_draw_recovered("Brendon Chung",16.0f,256.0f,16.0f,0,1.0f,1.0f,1.0f,1.0f,NULL);
  sr_text_draw_recovered("Luke Hetherington",16.0f,272.0f,16.0f,0,1.0f,1.0f,1.0f,1.0f,NULL);
  sr_text_draw_recovered("Production",16.0f,320.0f,16.0f,0,0.75f,0.75f,0.75f,1.0f,NULL);
  sr_text_draw_recovered("Justin Woodward",16.0f,352.0f,16.0f,0,1.0f,1.0f,1.0f,1.0f,NULL);
  sr_text_draw_recovered("Community Manager",16.0f,400.0f,16.0f,0,0.75f,0.75f,0.75f,1.0f,NULL);
  sr_text_draw_recovered("W1nters",16.0f,432.0f,16.0f,0,1.0f,1.0f,1.0f,1.0f,NULL);
}

//----- (00000001400FDD80) ----------------------------------------------------
void sub_1400FDD80()
{
  sr_CSDrawText("Name", 4.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42000000u))), 20.0);
  sr_text_draw_recovered("Ping", 480.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42000000u))))), 20.0, 2u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FDE3F */;
  sr_text_draw_recovered("Players", 560.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42000000u))))), 20.0, 2u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FDE8B */;
  sr_text_draw_recovered("Game Type", 672.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42000000u))))), 20.0, 2u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FDED7 */;
  sr_text_draw_recovered("Version", 784.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42000000u))))), 20.0, 2u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FDF23 */;
  sr_text_draw_recovered("Password", 878.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42000000u))))), 20.0, 2u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FDF6F */;
  sr_text_draw_recovered("/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43C80000u))))), 12.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_16B0A7EE4}) /* 0x1400FDFD3 */;
  sr_text_draw_recovered("/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43CE0000u))))), 12.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_16B15FF2C}) /* 0x1400FE02F */;
}

//----- (00000001400FE050) ----------------------------------------------------
__int64 sub_1400FE050()
{
  struct hostent *returned_pointer;
  struct hostent *record_pointer;
  _QWORD *loaded_record_pointer;
  unsigned int state_word;
  __int64 element_index;
  int ntohl_sr_result;
  __int64 state_word_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400FE050[560];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400FE050 + 0)) /* [rsp+0h] */
#define name (*(char (*)[512])(void *)(sr_frame_1400FE050 + 32)) /* [rsp+20h] */
#define unused_frame_slot_544 (*(__int64 (*))(void *)(sr_frame_1400FE050 + 544)) /* [rsp+220h] */

  game_connected = 0;
  crt_memset((void *)(uintptr_t)(&game_unknown_1a4d2dce0), 0, 0x2270864u);
  game_unknown_183ebfcc8 = -1;
  g_16B15FF24 = sub_140198F9B();
  g_16B15FF00 = 0;
  g_16B0A7EE4 = 0;
  g_16B0A7EE0 = 0;
  if ( sub_140199037(name, 512) != -1 )
  {
    returned_pointer = sub_140199031(name);
    record_pointer = returned_pointer;
    if ( returned_pointer )
    {
      loaded_record_pointer = *((_QWORD **)returned_pointer + 3);
      state_word = g_16B0A7EE4;
      if ( *loaded_record_pointer )
      {
        element_index = 0;
        do
        {
          if ( element_index >= 16 )
            break;
          ntohl_sr_result = ntohl_sr(*(unsigned int *)loaded_record_pointer[element_index]);
          state_word_2 = (int)g_16B0A7EE4;
          ++element_index;
          dword_140404A6C[2 * g_16B0A7EE4 + 179457309] = ntohl_sr_result | 0xFF;
          LOWORD(dword_140404A6C[2 * state_word_2 + 179457310]) = g_18539D3F8;
          state_word = state_word_2 + 1;
          g_16B0A7EE4 = state_word;
          loaded_record_pointer = *((_QWORD **)record_pointer + 3);
        }
        while ( loaded_record_pointer[element_index] );
      }
      g_16B0A7EE0 = state_word;
    }
  }
  g_16B15FF2C = 0;
  g_16B15FF30 = -1;
  g_16B15FF38 = 0;
  g_16B15FF28 = 0;
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef name
#undef unused_frame_slot_544

//----- (00000001400FE5D0) ----------------------------------------------------
void sub_1400FE5D0()
{
  sr_text_draw_recovered("Sub Rosa", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43200000u))))), 16.0, 1u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FE62E */;
  sr_text_draw_recovered("ALPHA /i/c", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43300000u))))), 16.0, 1u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FE697 */;
  sr_text_draw_recovered((char *)off_1402B2810, 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43400000u))))), 14.0, 65u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FE6E9 */;
  if ( g_1829F8BC0 )
    sr_text_draw_recovered("Steam", 16.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x44090000u))))), 12.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FE745 */;
}

//----- (00000001400FE870) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__int64            sub_1400FE870(__int64 a1, int a2, double a3, double a4, float a5, float a6, char a7)
{
  double x = a3; // xmm2_8: x arrives in xmm2 (0x1400FE8C0 movaps xmm12, xmm2); Hex-Rays had lost it
  __m128i masked_bits;
  __int64 input_value;
  __int64 unused_local;
  __m128i masked_bits_2;
  int red;
  __int64 table_value;
  float text_size;
  float text_x;
  unsigned int scaled_index;
  __m128i saved_masked_bits;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400FE870[608];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400FE870 + 0)) /* [rsp+0h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_1400FE870 + 32)) /* [rsp+20h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_1400FE870 + 40)) /* [rsp+28h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_1400FE870 + 48)) /* [rsp+30h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_1400FE870 + 56)) /* [rsp+38h] */
#define unused_written_slot_5 (*(int (*))(void *)(sr_frame_1400FE870 + 64)) /* [rsp+40h] */
#define text (*(char (*)[512])(void *)(sr_frame_1400FE870 + 80)) /* [rsp+50h] */
#define unused_frame_slot_592 (*(__int64 (*))(void *)(sr_frame_1400FE870 + 592)) /* [rsp+250h] */

  masked_bits = *(__m128i_u *)&a4;
  input_value = a2;
  /* 0x1400FE908: width a5 ([rsp+2F0h], 0x1400FE8D0), not the third argument */
  sr_renderer_draw_flat_rect(x, a4, sr_text_float_bits(a5), a6, 0, 1061158912, 1061158912, 1061158912, 1065353216);
  masked_bits_2 = *(__m128i_u *)&a4;
  *(float *)SR_VEC_LANES(128, masked_bits_2, i32) = *(float *)&a4 + 2.0;
  if ( (a7 & 1) != 0 )
    red = 1056964608;
  else
    red = 1048576000;
  /* 0x1400FE97E: x + 2 (0x1400FE932), width - 4 (0x1400FE919); the C had passed x and an undefined width */
  sr_renderer_draw_flat_rect(
    sr_export_float_lane_container(sr_text_float_bits(*(float *)&x + 2.0f)),
    *(double *)SR_VEC_LANES(128, masked_bits_2, i64),
    sr_text_float_bits(a5 - 4.0f),
    a6 - 4.0,
    0,
    red,
    red,
    red,
    1065353216);
  table_value = (int)dword_140404A6C[input_value + 280649319];
  text_size = 16.0;
  if ( !dword_140404A6C[3597 * table_value + 71856270] || dword_140404A6C[table_value + 284023074] )
    text_size = 12.0;
  unused_written_slot_5 = 1065353216;
  unused_written_slot_4 = 1065353216;
  unused_written_slot_3 = 1065353216;
  text_x = (float)(a5 * 0.5) + *(float *)&x;
  unused_written_slot_2 = 1065353216;
  unused_written_slot = 1;
  sr_text_draw_recovered((char *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 14388 * table_value + 291638372), text_x, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(masked_bits_2))), text_size, 1u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FEA10 */;
  scaled_index = dword_140404A6C[3597 * dword_140404A6C[input_value + 280649319] + 71856265];
  crt_sprintf(text, "%03d-%04d", scaled_index / 0x2710, scaled_index % 0x2710);
  unused_written_slot_5 = 1065353216;
  saved_masked_bits = masked_bits;
  *(float *)SR_VEC_LANES(128, saved_masked_bits, i32) = *(float *)SR_VEC_LANES(128, masked_bits, i32) + 18.0;
  unused_written_slot_4 = 1065353216;
  unused_written_slot_3 = 1065353216;
  unused_written_slot_2 = 1065353216;
  unused_written_slot = 1;
  sr_text_draw_recovered(text, text_x, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(saved_masked_bits))), 12.0, 1u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FEA9E */;
  if ( dword_140404A6C[dword_140404A6C[input_value + 280649319] + 284023074] )
  {
    *(float *)SR_VEC_LANES(128, masked_bits, i32) = *(float *)SR_VEC_LANES(128, masked_bits, i32) + 30.0;
    unused_written_slot_5 = 1065353216;
    unused_written_slot_4 = 1065353216;
    unused_written_slot_3 = 1065353216;
    unused_written_slot_2 = 1065353216;
    unused_written_slot = 1;
    sr_text_draw_recovered("MUTED", text_x, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(masked_bits))), 16.0, 1u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FEAFD */;
  }
  return 0; /* no result: rax is residue at 0x1400FEB02 */
}
#undef unused_frame_slot_0
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_written_slot_5
#undef text
#undef unused_frame_slot_592

//----- (00000001400FF3C0) ----------------------------------------------------
double            sub_1400FF3C0(__int64 a1, int a2)
{
  int iteration_count;
  __int64 record_byte_offset;
  unsigned int *state_address;
  __int64 loaded_word;
  unsigned int integer_sum;
  int iteration_count_2;
  __int64 record_byte_offset_2;
  __int64 loaded_word_2;

  mesh_vertex_count = *(_DWORD *)a1;
  iteration_count = 0;
  if ( *(int *)a1 > 0 )
  {
    record_byte_offset = 0;
    state_address = (unsigned int *)&g_16A7DBDB0;
    do
    {
      loaded_word = *(_QWORD *)(a1 + 8);
      record_byte_offset += 16;
      ++iteration_count;
      state_address += 3;
      *(state_address - 5) = *(_DWORD *)(record_byte_offset + loaded_word - 16);
      *(state_address - 4) = *(_DWORD *)(record_byte_offset + loaded_word - 12);
      *(state_address - 3) = *(_DWORD *)(record_byte_offset + loaded_word - 8);
    }
    while ( iteration_count < *(_DWORD *)a1 );
  }
  integer_sum = 0;
  iteration_count_2 = 0;
  mesh_triangle_count = 0;
  if ( *(int *)(a1 + 16) > 0 )
  {
    record_byte_offset_2 = 0;
    do
    {
      dword_140404A6C[3 * integer_sum + 177495248] = *(_DWORD *)(record_byte_offset_2 + *(_QWORD *)(a1 + 24) + 8);
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = *(_DWORD *)(record_byte_offset_2 + *(_QWORD *)(a1 + 24) + 12);
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = *(_DWORD *)(record_byte_offset_2 + *(_QWORD *)(a1 + 24) + 16);
      dword_140404A6C[6 * mesh_triangle_count + 178011345] = 1099169792;
      dword_140404A6C[6 * mesh_triangle_count + 178011346] = 0;
      dword_140404A6C[6 * mesh_triangle_count + 178011347] = 1099169792;
      dword_140404A6C[6 * mesh_triangle_count + 178011348] = 0;
      dword_140404A6C[6 * mesh_triangle_count + 178011349] = 1099169792;
      dword_140404A6C[6 * mesh_triangle_count + 178011350] = 0;
      integer_sum = ++mesh_triangle_count;
      loaded_word_2 = *(_QWORD *)(a1 + 24);
      if ( *(_DWORD *)(record_byte_offset_2 + loaded_word_2 + 4) == 4 )
      {
        dword_140404A6C[3 * integer_sum + 177495248] = *(_DWORD *)(record_byte_offset_2 + loaded_word_2 + 8);
        dword_140404A6C[3 * mesh_triangle_count + 177495249] = *(_DWORD *)(record_byte_offset_2 + *(_QWORD *)(a1 + 24) + 16);
        dword_140404A6C[3 * mesh_triangle_count + 177495250] = *(_DWORD *)(record_byte_offset_2 + *(_QWORD *)(a1 + 24) + 20);
        dword_140404A6C[6 * mesh_triangle_count + 178011345] = 1099169792;
        dword_140404A6C[6 * mesh_triangle_count + 178011346] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011347] = 1099169792;
        dword_140404A6C[6 * mesh_triangle_count + 178011348] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011349] = 1099169792;
        dword_140404A6C[6 * mesh_triangle_count + 178011350] = 0;
        integer_sum = ++mesh_triangle_count;
      }
      ++iteration_count_2;
      record_byte_offset_2 += 36;
    }
    while ( iteration_count_2 < *(_DWORD *)(a1 + 16) );
  }
  return sub_1401449C0(a2, 1);
}

//----- (00000001400FF660) ----------------------------------------------------
double            sub_1400FF660(__int64 a1, int a2)
{
  __int64 record_word_offset;
  int input_value;
  __int64 cached_scaled_index;
  __int64 cached_mesh_vertex_count;
  signed __int64 state_address;
  signed __int64 state_address_2;
  signed __int64 state_address_3;
  signed __int64 state_address_4;
  signed __int64 state_address_5;
  signed __int64 state_address_6;
  signed __int64 state_address_7;
  signed __int64 state_address_8;
  signed __int64 state_address_9;
  _DWORD *record_byte_offset;
  char *state_address_10;
  signed __int64 state_address_11;
  unsigned __int64 remaining_count;
  _DWORD *running_total;
  __int64 remaining_count_2;
  __int64 remaining_count_3;
  unsigned int integer_sum;
  unsigned int *state_address_12;
  unsigned int scaled_index;
  unsigned int table_value;
  bool comparison_result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400FF660[48];
#define state_address_13 (*(signed __int64 (*))(void *)(sr_frame_1400FF660 + 0)) /* [rsp+30h] */
#define cached_mesh_vertex_count_2 (*(__int64 (*))(void *)(sr_frame_1400FF660 + 16)) /* [rsp+40h] */
#define saved_record_word_offset (*(__int64 (*))(void *)(sr_frame_1400FF660 + 24)) /* [rsp+48h] */
#define scaled_index_2 (*(__int64 (*))(void *)(sr_frame_1400FF660 + 32)) /* [rsp+50h] */
#define input_value_2 (*(__int64 (*))(void *)(sr_frame_1400FF660 + 40)) /* [rsp+58h] */

  a1 = (int)a1;
  record_word_offset = 180288LL * (int)a1;
  input_value = a2;
  input_value_2 = (int)a1;
  saved_record_word_offset = record_word_offset;
  cached_scaled_index = 0;
  mesh_vertex_count = *(unsigned int *)((char *)&g_190297C5C + record_word_offset);
  cached_mesh_vertex_count = (int)mesh_vertex_count;
  cached_mesh_vertex_count_2 = (int)mesh_vertex_count;
  if ( (int)mesh_vertex_count >= 4LL )
  {
    state_address = (char *)(unsigned int *)&g_16A7DBDB8 - record_word_offset - (char *)&g_190297C68;
    state_address_2 = (char *)(unsigned int *)&g_16A7DBDBC - record_word_offset - (char *)&g_190297C68;
    state_address_3 = (char *)(unsigned int *)&g_16A7DBDC4 - record_word_offset - (char *)&g_190297C68;
    state_address_4 = (char *)(unsigned int *)&g_16A7DBDC8 - record_word_offset - (char *)&g_190297C68;
    state_address_5 = (char *)(unsigned int *)&g_16A7DBDD0 - record_word_offset - (char *)&g_190297C68;
    state_address_6 = (char *)(unsigned int *)&g_16A7DBDAC - record_word_offset - (char *)&g_190297C68;
    state_address_7 = (char *)(unsigned int *)&g_16A7DBDA8 - record_word_offset - (char *)&g_190297C68;
    state_address_8 = (char *)(unsigned int *)&g_16A7DBDD4 - record_word_offset - (char *)&g_190297C68;
    state_address_9 = (char *)(unsigned int *)&g_16A7DBDB0 - record_word_offset - (char *)&g_190297C68;
    record_byte_offset = (unsigned int *)((char *)&g_190297C68 + record_word_offset);
    state_address_13 = (char *)(unsigned int *)&g_16A7DBDC0 - record_word_offset - (char *)&g_190297C68;
    state_address_10 = (char *)(unsigned int *)&g_16A7DBDCC - record_word_offset;
    state_address_11 = (char *)(unsigned int *)&g_16A7DBDB4 - record_word_offset - (char *)&g_190297C68;
    remaining_count = ((unsigned __int64)((int)mesh_vertex_count - 4LL) >> 2) + 1;
    scaled_index_2 = 4 * remaining_count;
    do
    {
      *(_DWORD *)((char *)record_byte_offset + state_address_7) = *(record_byte_offset - 2);
      *(_DWORD *)((char *)record_byte_offset + state_address_6) = *(record_byte_offset - 1);
      *(_DWORD *)((char *)record_byte_offset + state_address_9) = *record_byte_offset;
      *(_DWORD *)((char *)record_byte_offset + state_address_11) = record_byte_offset[1];
      *(_DWORD *)((char *)record_byte_offset + state_address) = record_byte_offset[2];
      *(_DWORD *)((char *)record_byte_offset + state_address_2) = record_byte_offset[3];
      *(_DWORD *)((char *)record_byte_offset + state_address_13) = record_byte_offset[4];
      *(_DWORD *)((char *)record_byte_offset + state_address_3) = record_byte_offset[5];
      *(_DWORD *)((char *)record_byte_offset + state_address_4) = record_byte_offset[6];
      *(_DWORD *)((uintptr_t)record_byte_offset + (uintptr_t)state_address_10 - (uintptr_t)&g_190297C68) = record_byte_offset[7];
      *(_DWORD *)((char *)record_byte_offset + state_address_5) = record_byte_offset[8];
      *(_DWORD *)((char *)record_byte_offset + state_address_8) = record_byte_offset[9];
      record_byte_offset += 12;
      --remaining_count;
    }
    while ( remaining_count );
    cached_mesh_vertex_count = cached_mesh_vertex_count_2;
    record_word_offset = saved_record_word_offset;
    cached_scaled_index = scaled_index_2;
    a1 = input_value_2;
    input_value = a2;
  }
  if ( cached_scaled_index < cached_mesh_vertex_count )
  {
    running_total = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 12 * (cached_scaled_index + 15024 * a1) + 1344896104);
    remaining_count_2 = cached_mesh_vertex_count - cached_scaled_index;
    do
    {
      *(_DWORD *)((uintptr_t)running_total + (uintptr_t)(unsigned int *)&g_16A7DBDA8 - record_word_offset - (uintptr_t)&g_190297C68) = *(running_total - 2);
      *(_DWORD *)((uintptr_t)running_total + (uintptr_t)(unsigned int *)&g_16A7DBDAC - record_word_offset - (uintptr_t)&g_190297C68) = *(running_total - 1);
      *(_DWORD *)((uintptr_t)running_total + (uintptr_t)(unsigned int *)&g_16A7DBDB0 - record_word_offset - (uintptr_t)&g_190297C68) = *running_total;
      running_total += 3;
      --remaining_count_2;
    }
    while ( remaining_count_2 );
  }
  remaining_count_3 = *(int *)((char *)&g_19029AC60 + record_word_offset);
  integer_sum = 0;
  mesh_triangle_count = 0;
  if ( remaining_count_3 > 0 )
  {
    state_address_12 = (unsigned int *)((char *)&g_19029AC70 + record_word_offset);
    do
    {
      scaled_index = *(state_address_12 - 1);
      dword_140404A6C[3 * integer_sum + 177495248] = scaled_index;
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = *state_address_12;
      table_value = state_address_12[1];
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = table_value;
      dword_140404A6C[6 * mesh_triangle_count + 178011345] = 1099169792;
      dword_140404A6C[6 * mesh_triangle_count + 178011346] = 0;
      dword_140404A6C[6 * mesh_triangle_count + 178011347] = 1099169792;
      dword_140404A6C[6 * mesh_triangle_count + 178011348] = 0;
      dword_140404A6C[6 * mesh_triangle_count + 178011349] = 1099169792;
      dword_140404A6C[6 * mesh_triangle_count + 178011350] = 0;
      integer_sum = mesh_triangle_count + 1;
      comparison_result = *(state_address_12 - 2) == 4;
      ++mesh_triangle_count;
      if ( comparison_result )
      {
        dword_140404A6C[3 * integer_sum + 177495248] = scaled_index;
        dword_140404A6C[3 * mesh_triangle_count + 177495249] = table_value;
        dword_140404A6C[3 * mesh_triangle_count + 177495250] = state_address_12[2];
        dword_140404A6C[6 * mesh_triangle_count + 178011345] = 1099169792;
        dword_140404A6C[6 * mesh_triangle_count + 178011346] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011347] = 1099169792;
        dword_140404A6C[6 * mesh_triangle_count + 178011348] = 0;
        dword_140404A6C[6 * mesh_triangle_count + 178011349] = 1099169792;
        dword_140404A6C[6 * mesh_triangle_count + 178011350] = 0;
        integer_sum = ++mesh_triangle_count;
      }
      state_address_12 += 26;
      --remaining_count_3;
    }
    while ( remaining_count_3 );
  }
  return sub_1401449C0(input_value, 1);
}
#undef state_address_13
#undef cached_mesh_vertex_count_2
#undef saved_record_word_offset
#undef scaled_index_2
#undef input_value_2

//----- (00000001400FFAE0) ----------------------------------------------------
double            sub_1400FFAE0(int a1, float a2, float a3, float a4)
{
  int iteration_count;
  unsigned int *state_address;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400FFAE0[16];
#define float_word (*(__int64 (*))(void *)(sr_frame_1400FFAE0 + 0)) /* [rsp+20h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_1400FFAE0 + 8)) /* [rsp+28h] */

  mesh_vertex_count = 0;
  mesh_triangle_count = 0;
  g_16AC43DB0 = 0;
  g_16AD03DB4 = 0;
  float_word = 0;
  unused_written_slot = 0;
  sub_140002D00((float *)&float_word, a2, a3, a4);
  iteration_count = 0;
  if ( (int)mesh_triangle_count > 0 )
  {
    state_address = &g_16AB13DB4;
    do
    {
      *(_QWORD *)(state_address - 1) = 0;
      ++iteration_count;
      *(_QWORD *)(state_address + 1) = 0;
      *(_QWORD *)(state_address + 3) = 0;
      state_address += 6;
    }
    while ( iteration_count < (int)mesh_triangle_count );
  }
  g_16AB13EA0 = xmmword_1402794B0;
  g_16AB13EB0 = xmmword_140279410;
  g_16AB13EC0 = xmmword_140279430;
  g_16AB13DB0 = xmmword_140279400;
  g_16AB13DC0 = xmmword_140278D70;
  g_16AB13DD0 = xmmword_140278E50;
  if ( a1 == g_183EBB758 )
  {
    g_16AB13DE0 = xmmword_1402796F0;
    g_16AB13E00 = xmmword_140278D90;
    g_16AB13DF0 = xmmword_1402794A0;
  }
  return sub_1401449C0(a1, 0);
}
#undef float_word
#undef unused_written_slot

//----- (00000001400FFCE0) ----------------------------------------------------
__int64            sub_1400FFCE0(int a1, int a2, double a3)
{
  unsigned int *cached_mesh_vertex_count;
  int record_byte_offset;
  float component_sum;
  unsigned int cached_mesh_vertex_count_2;
  unsigned int integer_sum;
  unsigned int integer_quotient;
  unsigned int integer_quotient_2;
  __int64 cached_mesh_vertex_count_3;
  __int64 scaled_index;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  float state_address;
  unsigned int state_address_2;
  float state_address_3;
  __int64 unrecovered_register_value;
  __m128 vector_result;
  double reordered_vector;
  unsigned int float_word;
  float component_sum_2;
  __int64 scaled_index_5;
  unsigned int cached_mesh_vertex_count_4;
  __int64 scaled_index_6;
  unsigned int integer_sum_2;
  __int64 unrecovered_register_value_2;
  __m128 vector_result_2;
  double reordered_vector_2;
  unsigned int float_word_2;
  float component_sum_3;
  __int64 scaled_index_7;
  unsigned int cached_mesh_vertex_count_5;
  __int64 scaled_index_8;
  unsigned int integer_sum_3;
  __int64 unrecovered_register_value_3;
  __m128 vector_result_3;
  double reordered_vector_3;
  unsigned int float_word_3;
  float component_sum_4;
  __int64 scaled_index_9;
  unsigned int cached_mesh_vertex_count_6;
  __int64 scaled_index_10;
  unsigned int integer_sum_4;
  __m128 vector_result_4;
  unsigned int float_word_4;
  __int64 scaled_index_11;
  __int64 scaled_index_12;
  unsigned int cached_integer_quotient;
  __int64 record_byte_offset_2;
  unsigned int cached_callee_output_word;
  unsigned int cached_integer_quotient_2;
  unsigned int comparison_operand;
  __int64 packed_word_bits;
  unsigned int cached_mesh_vertex_count_7;
  __int64 scaled_index_13;
  __int64 scaled_index_14;
  __int64 scaled_index_15;
  unsigned int comparison_operand_2;
  unsigned int comparison_operand_3;
  unsigned int cached_integer_quotient_3;
  unsigned int cached_callee_output_word_2;
  __int64 scaled_index_16;
  __int64 scaled_index_17;
  __int64 scaled_index_18;
  unsigned int table_value;
  __int64 scaled_index_19;
  unsigned int cached_mesh_vertex_count_8;
  unsigned int table_value_2;
  __int64 scaled_index_20;
  __int64 scaled_index_21;
  __int64 scaled_index_22;
  int record_byte_offset_3;
  unsigned int table_value_3;
  __int64 scaled_index_23;
  __int64 scaled_index_24;
  __int64 scaled_index_25;
  unsigned __int64 saved_record_word_offset;
  unsigned int integer_sum_5;
  int saved_packed_word_bits;
  unsigned int state_word;
  __int64 scaled_index_26;
  __int64 scaled_index_27;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400FFCE0[128];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400FFCE0 + 0)) /* [rsp+8h] */
#define packed_word_bits_2 (*(__int64 (*))(void *)(sr_frame_1400FFCE0 + 32)) /* [rsp+28h] */
#define record_word_offset (*(unsigned __int64 (*))(void *)(sr_frame_1400FFCE0 + 40)) /* [rsp+30h] */
#define cached_integer_quotient_4 (*(unsigned int (*))(void *)(sr_frame_1400FFCE0 + 48)) /* [rsp+38h] */
#define integer_quotient_3 (*(unsigned int (*))(void *)(sr_frame_1400FFCE0 + 52)) /* [rsp+3Ch] */
#define cached_integer_quotient_5 (*(unsigned int (*))(void *)(sr_frame_1400FFCE0 + 56)) /* [rsp+40h] */
#define saved_cached_mesh_vertex_count (*(unsigned int (*))(void *)(sr_frame_1400FFCE0 + 60)) /* [rsp+44h] */
#define callee_output_word (*(unsigned int (*))(void *)(sr_frame_1400FFCE0 + 64)) /* [rsp+48h] */
#define callee_output_word_2 (*(unsigned int (*))(void *)(sr_frame_1400FFCE0 + 68)) /* [rsp+4Ch] */
#define frame_word_at_72 (*(unsigned int (*))(void *)(sr_frame_1400FFCE0 + 72)) /* [rsp+50h] */
#define scratch_buffer (*(_DWORD (*)[3])(void *)(sr_frame_1400FFCE0 + 76)) /* [rsp+54h] */
#define frame_word_at_88 (*(unsigned int (*))(void *)(sr_frame_1400FFCE0 + 88)) /* [rsp+60h] */
#define frame_word_at_92 (*(unsigned int (*))(void *)(sr_frame_1400FFCE0 + 92)) /* [rsp+64h] */
#define unused_written_slot (*(unsigned int (*))(void *)(sr_frame_1400FFCE0 + 96)) /* [rsp+68h] */
#define unused_frame_slot_112 (*(__int64 (*))(void *)(sr_frame_1400FFCE0 + 112)) /* [rsp+78h] */

  cached_mesh_vertex_count = &callee_output_word_2;
  record_byte_offset = 0;
  component_sum = 0.0;
  cached_mesh_vertex_count_2 = mesh_vertex_count;
  LODWORD(packed_word_bits_2) = a1;
  record_word_offset = 16LL * a1;
  integer_sum = a2 + 16;
  integer_quotient = dword_140404A6C[record_word_offset / 4 + 178322642];
  integer_quotient_2 = dword_140404A6C[record_word_offset / 4 + 178322644];
  cached_mesh_vertex_count_3 = dword_140404A6C[record_word_offset / 4 + 178322645];
  integer_quotient_3 = dword_140404A6C[record_word_offset / 4 + 178322643];
  cached_integer_quotient_4 = integer_quotient;
  cached_integer_quotient_5 = integer_quotient_2;
  scaled_index = (int)(3 * integer_quotient_3);
  scaled_index_2 = (int)(3 * integer_quotient);
  scaled_index_3 = (int)(3 * integer_quotient_2);
  scaled_index_4 = 3 * (int)cached_mesh_vertex_count_3;
  saved_cached_mesh_vertex_count = cached_mesh_vertex_count_3;
  state_address = (float)((float)((float)(*(float *)&dword_140404A6C[scaled_index_2 + 177167567] + *(float *)&dword_140404A6C[scaled_index + 177167567])
                      + *(float *)&dword_140404A6C[scaled_index_3 + 177167567])
              + *(float *)&dword_140404A6C[scaled_index_4 + 177167567])
      * 0.25;
  *(float *)&state_address_2 = (float)((float)((float)((float)(*(float *)&dword_140404A6C[scaled_index_2 + 177167569]
                                                 + *(float *)&dword_140404A6C[scaled_index + 177167569])
                                         + *(float *)&dword_140404A6C[scaled_index_3 + 177167569])
                                 + *(float *)&dword_140404A6C[scaled_index_4 + 177167569])
                         * 0.25)
                 + 0.015625;
  state_address_3 = (float)((float)((float)(*(float *)&dword_140404A6C[scaled_index_2 + 177167568] + *(float *)&dword_140404A6C[scaled_index + 177167568])
                      + *(float *)&dword_140404A6C[scaled_index_3 + 177167568])
              + *(float *)&dword_140404A6C[scaled_index_4 + 177167568])
      * 0.25;
  do
  {
    vector_result = _mm_castpd_ps(sub_1401F8A50(component_sum, cached_mesh_vertex_count_3, a3));
    HIDWORD(reordered_vector) = 0;
    *(float *)&reordered_vector = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result, (__m128d)vector_result, 1), f64)[0] * 0.009765625;
    *(float *)&float_word = *(double *)SR_VEC_LANES(128, vector_result, u64) * -0.0234375;
    if ( (record_byte_offset & 1) != 0 )
      *(float *)&reordered_vector = *(float *)&reordered_vector * 0.875;
    component_sum_2 = component_sum + 0.78539819;
    dword_140404A6C[2 * cached_mesh_vertex_count_2 + 177216719] = float_word;
    dword_140404A6C[2 * mesh_vertex_count + 177216720] = LODWORD(reordered_vector);
    scaled_index_5 = 3 * mesh_vertex_count;
    *(float *)&dword_140404A6C[scaled_index_5 + 177167568] = state_address_3 + *(float *)&reordered_vector;
    *(float *)&dword_140404A6C[scaled_index_5 + 177167567] = state_address + *(float *)&float_word;
    dword_140404A6C[scaled_index_5 + 177167569] = state_address_2;
    cached_mesh_vertex_count_4 = mesh_vertex_count;
    scaled_index_6 = 7LL * (int)mesh_vertex_count;
    *(cached_mesh_vertex_count - 1) = mesh_vertex_count;
    integer_sum_2 = cached_mesh_vertex_count_4 + 1;
    mesh_vertex_count = integer_sum_2;
    dword_140404A6C[scaled_index_6 + 160235602] = float_word;
    dword_140404A6C[scaled_index_6 + 160235603] = LODWORD(reordered_vector);
    dword_140404A6C[scaled_index_6 + 160235598] = integer_sum;
    dword_140404A6C[scaled_index_6 + 160235599] = 3;
    dword_140404A6C[scaled_index_6 + 160235604] = 1015021568;
    vector_result_2 = _mm_castpd_ps(sub_1401F8A50(component_sum_2, unrecovered_register_value, reordered_vector));
    HIDWORD(reordered_vector_2) = 0;
    *(float *)&reordered_vector_2 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_2, (__m128d)vector_result_2, 1), f64)[0] * 0.009765625;
    *(float *)&float_word_2 = *(double *)SR_VEC_LANES(128, vector_result_2, u64) * -0.0234375;
    if ( (((_BYTE)record_byte_offset + 3) & 1) != 0 )
      *(float *)&reordered_vector_2 = *(float *)&reordered_vector_2 * 0.875;
    component_sum_3 = component_sum_2 + 0.78539819;
    dword_140404A6C[2 * integer_sum_2 + 177216719] = float_word_2;
    dword_140404A6C[2 * mesh_vertex_count + 177216720] = LODWORD(reordered_vector_2);
    scaled_index_7 = 3 * mesh_vertex_count;
    *(float *)&dword_140404A6C[scaled_index_7 + 177167567] = state_address + *(float *)&float_word_2;
    *(float *)&dword_140404A6C[scaled_index_7 + 177167568] = state_address_3 + *(float *)&reordered_vector_2;
    dword_140404A6C[scaled_index_7 + 177167569] = state_address_2;
    cached_mesh_vertex_count_5 = mesh_vertex_count;
    scaled_index_8 = 7LL * (int)mesh_vertex_count;
    *cached_mesh_vertex_count = mesh_vertex_count;
    integer_sum_3 = cached_mesh_vertex_count_5 + 1;
    mesh_vertex_count = integer_sum_3;
    dword_140404A6C[scaled_index_8 + 160235598] = integer_sum;
    dword_140404A6C[scaled_index_8 + 160235599] = 3;
    dword_140404A6C[scaled_index_8 + 160235602] = float_word_2;
    dword_140404A6C[scaled_index_8 + 160235603] = LODWORD(reordered_vector_2);
    dword_140404A6C[scaled_index_8 + 160235604] = 1015021568;
    vector_result_3 = _mm_castpd_ps(sub_1401F8A50(component_sum_3, unrecovered_register_value_2, reordered_vector_2));
    HIDWORD(reordered_vector_3) = 0;
    *(float *)&reordered_vector_3 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_3, (__m128d)vector_result_3, 1), f64)[0] * 0.009765625;
    *(float *)&float_word_3 = *(double *)SR_VEC_LANES(128, vector_result_3, u64) * -0.0234375;
    if ( (record_byte_offset & 1) != 0 )
      *(float *)&reordered_vector_3 = *(float *)&reordered_vector_3 * 0.875;
    component_sum_4 = component_sum_3 + 0.78539819;
    dword_140404A6C[2 * integer_sum_3 + 177216719] = float_word_3;
    dword_140404A6C[2 * mesh_vertex_count + 177216720] = LODWORD(reordered_vector_3);
    scaled_index_9 = 3 * mesh_vertex_count;
    *(float *)&dword_140404A6C[scaled_index_9 + 177167567] = state_address + *(float *)&float_word_3;
    *(float *)&dword_140404A6C[scaled_index_9 + 177167568] = state_address_3 + *(float *)&reordered_vector_3;
    dword_140404A6C[scaled_index_9 + 177167569] = state_address_2;
    cached_mesh_vertex_count_6 = mesh_vertex_count;
    scaled_index_10 = 7LL * (int)mesh_vertex_count;
    cached_mesh_vertex_count[1] = mesh_vertex_count;
    integer_sum_4 = cached_mesh_vertex_count_6 + 1;
    mesh_vertex_count = integer_sum_4;
    dword_140404A6C[scaled_index_10 + 160235598] = integer_sum;
    dword_140404A6C[scaled_index_10 + 160235599] = 3;
    dword_140404A6C[scaled_index_10 + 160235602] = float_word_3;
    dword_140404A6C[scaled_index_10 + 160235603] = LODWORD(reordered_vector_3);
    dword_140404A6C[scaled_index_10 + 160235604] = 1015021568;
    vector_result_4 = _mm_castpd_ps(sub_1401F8A50(component_sum_4, unrecovered_register_value_3, reordered_vector_3));
    HIDWORD(a3) = 0;
    *(float *)&a3 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_4, (__m128d)vector_result_4, 1), f64)[0] * 0.009765625;
    *(float *)&float_word_4 = *(double *)SR_VEC_LANES(128, vector_result_4, u64) * -0.0234375;
    if ( (((_BYTE)record_byte_offset + 3) & 1) != 0 )
      *(float *)&a3 = *(float *)&a3 * 0.875;
    component_sum = component_sum_4 + 0.78539819;
    record_byte_offset += 4;
    dword_140404A6C[2 * integer_sum_4 + 177216719] = float_word_4;
    dword_140404A6C[2 * mesh_vertex_count + 177216720] = LODWORD(a3);
    scaled_index_11 = 3 * mesh_vertex_count;
    *(float *)&dword_140404A6C[scaled_index_11 + 177167567] = state_address + *(float *)&float_word_4;
    *(float *)&dword_140404A6C[scaled_index_11 + 177167568] = state_address_3 + *(float *)&a3;
    dword_140404A6C[scaled_index_11 + 177167569] = state_address_2;
    cached_mesh_vertex_count_3 = (int)mesh_vertex_count;
    scaled_index_12 = 7LL * (int)mesh_vertex_count;
    cached_mesh_vertex_count[2] = mesh_vertex_count;
    cached_mesh_vertex_count += 4;
    cached_mesh_vertex_count_2 = cached_mesh_vertex_count_3 + 1;
    mesh_vertex_count = cached_mesh_vertex_count_3 + 1;
    dword_140404A6C[scaled_index_12 + 160235598] = integer_sum;
    dword_140404A6C[scaled_index_12 + 160235599] = 3;
    dword_140404A6C[scaled_index_12 + 160235602] = float_word_4;
    dword_140404A6C[scaled_index_12 + 160235603] = LODWORD(a3);
    dword_140404A6C[scaled_index_12 + 160235604] = 1015021568;
  }
  while ( record_byte_offset < 8 );
  cached_integer_quotient = cached_integer_quotient_4;
  record_byte_offset_2 = 0;
  cached_callee_output_word = callee_output_word;
  cached_integer_quotient_2 = integer_quotient_3;
  comparison_operand = frame_word_at_92;
  dword_140404A6C[2 * cached_mesh_vertex_count_2 + 177216719] = 0;
  dword_140404A6C[2 * mesh_vertex_count + 177216720] = 0;
  packed_word_bits = 3 * mesh_vertex_count;
  *(float *)&dword_140404A6C[packed_word_bits + 177167567] = state_address;
  *(float *)&dword_140404A6C[packed_word_bits + 177167568] = state_address_3;
  dword_140404A6C[packed_word_bits + 177167569] = state_address_2;
  cached_mesh_vertex_count_7 = mesh_vertex_count;
  scaled_index_13 = 7LL * (int)mesh_vertex_count;
  unused_written_slot = mesh_vertex_count++;
  LODWORD(packed_word_bits) = mesh_triangle_count;
  dword_140404A6C[scaled_index_13 + 160235598] = integer_sum;
  dword_140404A6C[scaled_index_13 + 160235599] = 3;
  *(_QWORD *)&dword_140404A6C[scaled_index_13 + 160235602] = 0;
  dword_140404A6C[scaled_index_13 + 160235604] = 1015021568;
  dword_140404A6C[3 * (_DWORD)packed_word_bits + 177495248] = cached_integer_quotient;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = cached_integer_quotient_2;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_callee_output_word;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  scaled_index_14 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[scaled_index_14 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_14 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_14 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_integer_quotient;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = cached_callee_output_word;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = comparison_operand;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  scaled_index_15 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[scaled_index_15 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_15 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_15 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_integer_quotient;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = comparison_operand;
  comparison_operand_2 = frame_word_at_88;
  comparison_operand_3 = frame_word_at_72;
  cached_integer_quotient_3 = cached_integer_quotient_5;
  cached_callee_output_word_2 = callee_output_word_2;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = frame_word_at_88;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  scaled_index_16 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[scaled_index_16 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_16 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_16 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_integer_quotient_2;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = cached_integer_quotient_3;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = comparison_operand_3;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  scaled_index_17 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[scaled_index_17 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_17 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_17 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_integer_quotient_2;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = comparison_operand_3;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_callee_output_word_2;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  scaled_index_18 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[scaled_index_18 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_18 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_18 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_integer_quotient_2;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = cached_callee_output_word_2;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_callee_output_word;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  table_value = scratch_buffer[1];
  scaled_index_19 = 6 * mesh_triangle_count;
  cached_mesh_vertex_count_8 = saved_cached_mesh_vertex_count;
  table_value_2 = scratch_buffer[0];
  *(_QWORD *)&dword_140404A6C[scaled_index_19 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_19 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_19 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_integer_quotient_3;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = cached_mesh_vertex_count_8;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = table_value;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  scaled_index_20 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[scaled_index_20 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_20 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_20 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_integer_quotient_3;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = table_value;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = table_value_2;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  scaled_index_21 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[scaled_index_21 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_21 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_21 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_integer_quotient_3;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = table_value_2;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = comparison_operand_3;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  scaled_index_22 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[scaled_index_22 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_22 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_22 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  record_byte_offset_3 = 2;
  table_value_3 = scratch_buffer[2];
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_mesh_vertex_count_8;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = cached_integer_quotient;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = comparison_operand_2;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  scaled_index_23 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[scaled_index_23 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_23 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_23 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_mesh_vertex_count_8;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = comparison_operand_2;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = table_value_3;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  scaled_index_24 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[scaled_index_24 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_24 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_24 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_mesh_vertex_count_8;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = table_value_3;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = table_value;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  scaled_index_25 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[scaled_index_25 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_25 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_25 + 178011349] = 1065353216;
  saved_record_word_offset = record_word_offset;
  integer_sum_5 = ++mesh_triangle_count;
  do
  {
    dword_140404A6C[3 * integer_sum_5 + 177495248] = *(&callee_output_word + record_byte_offset_2);
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = *(&callee_output_word + (((_BYTE)record_byte_offset_3 - 1) & 7));
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_mesh_vertex_count_7;
    dword_140404A6C[mesh_triangle_count + 178207953] = -2;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011345] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495248] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011346] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495248] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011347] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495249] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011348] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495249] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011349] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495250] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011350] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495250] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = *(&callee_output_word_2 + record_byte_offset_2);
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = *(&callee_output_word + (record_byte_offset_3 & 7));
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_mesh_vertex_count_7;
    dword_140404A6C[mesh_triangle_count + 178207953] = -2;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011345] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495248] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011346] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495248] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011347] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495249] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011348] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495249] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011349] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495250] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011350] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495250] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = scratch_buffer[record_byte_offset_2 - 1];
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = *(&callee_output_word + (((_BYTE)record_byte_offset_3 + 1) & 7));
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_mesh_vertex_count_7;
    dword_140404A6C[mesh_triangle_count + 178207953] = -2;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011345] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495248] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011346] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495248] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011347] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495249] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011348] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495249] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011349] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495250] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011350] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495250] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = scratch_buffer[record_byte_offset_2];
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = *(&callee_output_word + (((_BYTE)record_byte_offset_3 + 2) & 7));
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_mesh_vertex_count_7;
    dword_140404A6C[mesh_triangle_count + 178207953] = -2;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011345] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495248] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    record_byte_offset_3 += 4;
    record_byte_offset_2 += 4;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011346] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495248] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011347] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495249] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011348] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495249] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011349] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495250] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011350] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * mesh_triangle_count + 177495250] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    integer_sum_5 = ++mesh_triangle_count;
  }
  while ( record_byte_offset_2 < 8 );
  saved_packed_word_bits = packed_word_bits_2;
  if ( (int)packed_word_bits_2 >= 0 )
  {
    state_word = g_16AC43DB0;
    if ( (int)packed_word_bits_2 < (int)g_16AC43DB0 )
    {
      --g_16AC43DB0;
      *(unsigned int *)((char *)&g_16AC43DB4 + saved_record_word_offset) = dword_140404A6C[4 * (state_word - 1) + 178322642];
      *(unsigned int *)((char *)&g_16AC43DB8 + saved_record_word_offset) = dword_140404A6C[4 * g_16AC43DB0
                                                                                   + 178322643];
      *(unsigned int *)((char *)&g_16AC43DBC + saved_record_word_offset) = dword_140404A6C[4 * g_16AC43DB0
                                                                                   + 178322644];
      *(unsigned int *)((char *)&g_16AC43DC0 + saved_record_word_offset) = dword_140404A6C[4 * g_16AC43DB0
                                                                                   + 178322645];
      scaled_index_26 = 8 * g_16AC43DB0;
      scaled_index_27 = 8 * saved_packed_word_bits;
      *(_OWORD *)&dword_140404A6C[scaled_index_27 + 178388178] = *(_OWORD *)&dword_140404A6C[scaled_index_26 + 178388178];
      *(_OWORD *)&dword_140404A6C[scaled_index_27 + 178388182] = *(_OWORD *)&dword_140404A6C[scaled_index_26 + 178388182];
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef packed_word_bits_2
#undef record_word_offset
#undef cached_integer_quotient_4
#undef integer_quotient_3
#undef cached_integer_quotient_5
#undef saved_cached_mesh_vertex_count
#undef callee_output_word
#undef callee_output_word_2
#undef frame_word_at_72
#undef scratch_buffer
#undef frame_word_at_88
#undef frame_word_at_92
#undef unused_written_slot
#undef unused_frame_slot_112
