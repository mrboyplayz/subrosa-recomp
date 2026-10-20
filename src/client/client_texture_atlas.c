#include "shared_client.h"
#include "../engine/menu.h"
#include "../engine/audio.h"
#include "../engine/math3d.h"
#include "../engine/collision.h"
#include "../engine/net_bits.h"
#include "../engine/text_helpers.h"

//----- (0000000140068FC0) ----------------------------------------------------
__int64            sub_140068FC0(int a1, char *a2)
{
  __int64 record_word_offset;
  unsigned int state_word;
  unsigned int state_word_2;
  int *state_address;
  int table_value;
  __int64 table_value_2;
  __int64 record_byte_offset;
  __int64 remaining_count;
  unsigned int *record_byte_offset_2;
  int iteration_count;
  int scaled_index;
  __int64 element_index;
  int table_value_3;
  unsigned int cached_integer_sum;
  unsigned int saved_state_word;
  unsigned int saved_state_word_2;
  signed int cached_integer_sum_2;
  int integer_sum;
  int integer_sum_2;
  int integer_difference;
  __int64 lookup_index;
  signed int iteration_count_2;
  signed int *i;
  signed int integer_sum_3;
  int integer_difference_2;
  int integer_sum_4;
  __int64 integer_sum_5;
  __int64 scaled_index_2;
  float component_sum;
  int iteration_count_3;
  float component_sum_2;
  float component_sum_3;
  float component_sum_4;
  int running_total;
  __int64 running_total_2;
  __int64 scaled_index_3;
  int element_index_2;
  __int64 iteration_count_4;
  __int64 record_byte_offset_3;
  __int64 unused_local;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140068FC0[32800];
#define cached_integer_sum_3 (*(unsigned int (*))(void *)(sr_frame_140068FC0 + 0)) /* [rsp+30h] */
#define saved_state_word_3 (*(unsigned int (*))(void *)(sr_frame_140068FC0 + 4)) /* [rsp+34h] */
#define cached_table_value (*(int (*))(void *)(sr_frame_140068FC0 + 8)) /* [rsp+38h] */
#define callee_output_word (*(_DWORD (*)[8192])(void *)(sr_frame_140068FC0 + 16)) /* [rsp+40h] */
#define unused_frame_slot_32784 (*(__int64 (*))(void *)(sr_frame_140068FC0 + 32784)) /* [rsp+8040h] */

  record_word_offset = 49166LL * a1;
  if ( (int)dword_140404A6C[record_word_offset + 433435865] < 4096 && (unsigned int)sr_texture_load_pixels(a2) )
  {
    state_word = g_1B0037420;
    state_word_2 = g_1B0037424;
    state_address = (int *)&dword_140404A6C[record_word_offset + 433435853];
    table_value = dword_140404A6C[record_word_offset + 433435853];
    if ( table_value > 0 )
      crt_memset((void *)(uintptr_t)(callee_output_word), 0, 4LL * (unsigned int)table_value);
    table_value_2 = (int)dword_140404A6C[record_word_offset + 433435865];
    cached_table_value = table_value_2;
    if ( (int)table_value_2 > 0 )
    {
      record_byte_offset = 0;
      remaining_count = (unsigned int)table_value_2;
      record_byte_offset_2 = &dword_140404A6C[record_word_offset + 433435868];
      do
      {
        iteration_count = *(record_byte_offset_2 - 2);
        scaled_index = iteration_count + *record_byte_offset_2;
        if ( iteration_count < scaled_index )
        {
          element_index = (int)*(record_byte_offset_2 - 2);
          do
          {
            if ( element_index >= 0 && iteration_count < table_value )
            {
              table_value_3 = state_address[record_byte_offset + 16] + state_address[record_byte_offset + 14];
              if ( callee_output_word[element_index] < table_value_3 )
                callee_output_word[element_index] = table_value_3;
            }
            ++iteration_count;
            ++element_index;
          }
          while ( iteration_count < scaled_index );
        }
        record_byte_offset += 12;
        record_byte_offset_2 += 12;
        --remaining_count;
      }
      while ( remaining_count );
    }
    cached_integer_sum = 0;
    saved_state_word_3 = state_word;
    cached_integer_sum_3 = 0;
    saved_state_word = state_word;
    saved_state_word_2 = state_word_2;
    cached_integer_sum_2 = 0;
    integer_sum = state_word + 2;
    integer_sum_2 = state_word_2 + 2;
    integer_difference = dword_140404A6C[record_word_offset + 433435854] - integer_sum_2;
    if ( integer_difference >= 0 )
    {
      lookup_index = 0;
      while ( 2 )
      {
        iteration_count_2 = cached_integer_sum;
        for ( i = &callee_output_word[lookup_index]; ; ++i )
        {
          if ( iteration_count_2 >= (int)(cached_integer_sum + integer_sum) )
          {
            scaled_index_2 = record_word_offset * 4 + 48 * table_value_2;
            component_sum = (float)(int)(cached_integer_sum_2 + 1 + saved_state_word_2);
            iteration_count_3 = 0;
            *(unsigned int *)((char *)&g_1A7971DD4 + scaled_index_2) = cached_integer_sum;
            *(unsigned int *)((char *)&g_1A7971DD8 + scaled_index_2) = cached_integer_sum_2;
            *(unsigned int *)((char *)&g_1A7971DDC + scaled_index_2) = integer_sum;
            *(unsigned int *)((char *)&g_1A7971DE0 + scaled_index_2) = integer_sum_2;
            component_sum_2 = (float)(int)(cached_integer_sum + 1);
            component_sum_3 = (float)(int)(cached_integer_sum + 1 + saved_state_word);
            *(float *)((char *)&g_1A7971DE4 + scaled_index_2) = component_sum_2 / (float)*state_address;
            *(float *)((char *)&g_1A7971DE8 + scaled_index_2) = component_sum / (float)(int)dword_140404A6C[record_word_offset + 433435854];
            *(float *)((char *)&g_1A7971DEC + scaled_index_2) = component_sum_3 / (float)*state_address;
            *(float *)((char *)&g_1A7971DF0 + scaled_index_2) = component_sum / (float)(int)dword_140404A6C[record_word_offset + 433435854];
            *(float *)((char *)&g_1A7971DF4 + scaled_index_2) = component_sum_3 / (float)*state_address;
            component_sum_4 = (float)(cached_integer_sum_2 + 1);
            *(float *)((char *)&g_1A7971DF8 + scaled_index_2) = component_sum_4 / (float)(int)dword_140404A6C[record_word_offset + 433435854];
            *(float *)((char *)&g_1A7971DFC + scaled_index_2) = component_sum_2 / (float)*state_address;
            *(float *)((char *)&g_1A7971E00 + scaled_index_2) = component_sum_4 / (float)(int)dword_140404A6C[record_word_offset + 433435854];
            ++dword_140404A6C[record_word_offset + 433435865];
            if ( integer_sum_2 > 0 )
            {
              running_total = -saved_state_word;
              running_total_2 = 0;
              scaled_index_3 = 4LL * integer_sum;
              do
              {
                element_index_2 = 0;
                if ( integer_sum > 0 )
                {
                  iteration_count_4 = 0;
                  record_byte_offset_3 = running_total_2;
                  do
                  {
                    *(_DWORD *)(record_byte_offset_3 + *(_QWORD *)&dword_140404A6C[record_word_offset + 433435863]) = 0;
                    if ( iteration_count_3 && iteration_count_3 < integer_sum_2 - 1 && iteration_count_4 && element_index_2 < integer_sum - 1 )
                      *(_DWORD *)(record_byte_offset_3 + *(_QWORD *)&dword_140404A6C[record_word_offset + 433435863]) = dword_140404A6C[running_total + 468765294 + element_index_2];
                    ++element_index_2;
                    ++iteration_count_4;
                    record_byte_offset_3 += 4;
                  }
                  while ( iteration_count_4 < integer_sum );
                  saved_state_word = saved_state_word_3;
                  scaled_index_3 = 4LL * integer_sum;
                }
                ++iteration_count_3;
                running_total_2 += scaled_index_3;
                running_total += saved_state_word;
              }
              while ( iteration_count_3 < integer_sum_2 );
              cached_integer_sum = cached_integer_sum_3;
            }
            glBindTexture(3553, dword_140404A6C[record_word_offset + 433435861]);
            (*(void (           **)(__int64, _QWORD, _QWORD, _QWORD, int, int, int, int, _QWORD))&flt_140384000[131090])(
              3553,
              0,
              cached_integer_sum,
              (unsigned int)cached_integer_sum_2,
              integer_sum,
              integer_sum_2,
              6408,
              5121,
              *(_QWORD *)&dword_140404A6C[record_word_offset + 433435863]);
            return (unsigned int)cached_table_value;
          }
          if ( cached_integer_sum_2 < *i )
            break;
          ++iteration_count_2;
        }
        integer_sum_3 = cached_integer_sum + 1;
        integer_difference_2 = table_value - integer_sum;
        integer_sum_4 = cached_integer_sum_2 + 1;
        if ( (int)(cached_integer_sum + 1) <= table_value - integer_sum )
          integer_sum_4 = cached_integer_sum_2;
        cached_integer_sum = 0;
        cached_integer_sum_2 = integer_sum_4;
        integer_sum_5 = lookup_index + 1;
        if ( integer_sum_3 <= integer_difference_2 )
          cached_integer_sum = integer_sum_3;
        lookup_index = 0;
        cached_integer_sum_3 = cached_integer_sum;
        if ( integer_sum_3 <= integer_difference_2 )
          lookup_index = integer_sum_5;
        if ( cached_integer_sum_2 <= integer_difference )
          continue;
        break;
      }
    }
  }
  return (unsigned int)-1;
}
#undef cached_integer_sum_3
#undef saved_state_word_3
#undef cached_table_value
#undef callee_output_word
#undef unused_frame_slot_32784

//----- (000000014006CA30) ----------------------------------------------------
__int64            sub_14006CA30(unsigned int a1, unsigned int a2)
{
  g_1A7971DA0 = a1;
  g_1A7971DA4 = a2;
  g_1A7971DD0 = 0;
  free(*(void **)&g_1A7971DC8);
  g_1A7971DC8 = sr_path_malloc(4 * g_1A7971DA0 * g_1A7971DA4);
  crt_memset(
    (void *)(uintptr_t)(*(_WORD **)&g_1A7971DC8),
    0xFFu,
    4 * g_1A7971DA0 * g_1A7971DA4);
  glGenTextures(1, &g_1A7971DC0);
  glBindTexture(3553, g_1A7971DC0);
  glTexParameteri(3553, 10242, 33071);
  glTexParameteri(3553, 10243, 33071);
  glTexParameteri(3553, 10240, 9729);
  glTexParameteri(3553, 10241, 9729);
  glTexImage2D(3553,
    0,
    6408,
    g_1A7971DA0,
    g_1A7971DA4,
    0,
    6408,
    5121,
    g_1A7971DC8);
  return 0;
}

