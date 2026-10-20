#include "shared_client.h"
#include "../engine/menu.h"
#include "../engine/audio.h"
#include "../engine/math3d.h"
#include "../engine/collision.h"
#include "../engine/net_bits.h"
#include "../engine/text_helpers.h"

//----- (0000000140079840) ----------------------------------------------------
__int64            sr_texture_load_pixels(char *a1)
{
  __int64 result;
  unsigned __int8 *allocation_buffer;
  int state_word;
  signed int state_word_2;
  int cached_callee_output_word;
  signed int iteration_count;
  unsigned int scaled_index;
  int running_total;
  int iteration_count_2;
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
    state_word = g_1B0037420;
    if ( (int)g_1B0037420 > 4096
      || (state_word_2 = g_1B0037424, (int)g_1B0037424 > 4096)
      || (cached_callee_output_word = callee_output_word, callee_output_word - 1 > 3) )
    {
      free((void *)result);
      return 0;
    }
    else
    {
      iteration_count = 0;
      scaled_index = callee_output_word * g_1B0037420;
      callee_output_word *= g_1B0037420;
      if ( (int)g_1B0037424 > 0 )
      {
        running_total = 0;
        do
        {
          iteration_count_2 = 0;
          if ( state_word > 0 )
          {
            record_byte_offset = running_total;
            running_total_2 = running_total;
            do
            {
              table_value = allocation_buffer[running_total_2];
              if ( cached_callee_output_word <= 1 )
              {
                table_value_2 = allocation_buffer[running_total_2];
                table_value_3 = table_value_2;
              }
              else
              {
                table_value_2 = allocation_buffer[running_total_2 + 1];
                table_value_3 = allocation_buffer[running_total_2 + 2];
              }
              if ( cached_callee_output_word == 4 )
                table_value_4 = allocation_buffer[record_byte_offset + 3];
              else
                table_value_4 = 255;
              running_total_2 += cached_callee_output_word;
              record_byte_offset += 4;
              scaled_index_2 = iteration_count_2 + state_word * (state_word_2 - iteration_count - 1);
              ++iteration_count_2;
              dword_140404A6C[scaled_index_2 + 468765295] = (table_value_4 << 24) + table_value + (table_value_3 << 16) + (table_value_2 << 8);
              state_word = g_1B0037420;
              state_word_2 = g_1B0037424;
            }
            while ( iteration_count_2 < (int)g_1B0037420 );
            scaled_index = callee_output_word;
          }
          ++iteration_count;
          running_total += scaled_index;
        }
        while ( iteration_count < state_word_2 );
      }
      free(allocation_buffer);
      return 1;
    }
  }
  return result;
}

//----- (0000000140079AA0) ----------------------------------------------------
__int64            sub_140079AA0(
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
  __int64 result;
  __int64 scaled_index;
  void **allocated_buffer;
  signed int iteration_count;
  signed int i;
  __int64 scaled_index_2;
  signed int scaled_index_3;
  signed int iteration_count_2;
  void **buffer_cursor;
  signed int j;

  input_value = a1;
  result = sr_texture_load_pixels(a2);
  if ( (_DWORD)result )
  {
    scaled_index = 42 * input_value;
    dword_140404A6C[scaled_index + 436582477] = g_1B0037420;
    dword_140404A6C[scaled_index + 436582478] = g_1B0037424;
    dword_140404A6C[scaled_index + 436582482] = a4;
    dword_140404A6C[scaled_index + 436582483] = a5;
    allocated_buffer = (void **)&dword_140404A6C[42 * input_value + 436582487];
    dword_140404A6C[scaled_index + 436582484] = a6;
    dword_140404A6C[scaled_index + 436582485] = a7;
    dword_140404A6C[scaled_index + 436582479] = 1;
    dword_140404A6C[scaled_index + 436582480] = 6408;
    dword_140404A6C[scaled_index + 436582481] = 6408;
    free(*allocated_buffer);
    *allocated_buffer = (void *)sr_path_malloc((int)(4 * dword_140404A6C[42 * input_value + 436582477] * dword_140404A6C[42 * input_value + 436582478]));
    iteration_count = 0;
    if ( (int)dword_140404A6C[42 * input_value + 436582478] > 0 )
    {
      do
      {
        for ( i = 0; i < (int)dword_140404A6C[scaled_index + 436582477]; *((_DWORD *)*allocated_buffer + scaled_index_3) = dword_140404A6C[scaled_index_2 + 468765295] )
        {
          scaled_index_2 = i + iteration_count * g_1B0037420;
          scaled_index_3 = i + iteration_count * dword_140404A6C[scaled_index + 436582477];
          ++i;
        }
        ++iteration_count;
      }
      while ( iteration_count < (int)dword_140404A6C[scaled_index + 436582478] );
    }
    glBindTexture(3553, dword_140404A6C[scaled_index + 436582486]);
    glTexParameteri(3553,
      10242,
      dword_140404A6C[scaled_index + 436582482]);
    glTexParameteri(3553,
      10243,
      dword_140404A6C[scaled_index + 436582483]);
    glTexParameteri(3553,
      10240,
      dword_140404A6C[scaled_index + 436582484]);
    glTexParameteri(3553,
      10241,
      dword_140404A6C[scaled_index + 436582485]);
    iteration_count_2 = 0;
    if ( (int)dword_140404A6C[scaled_index + 436582479] > 0 )
    {
      buffer_cursor = allocated_buffer;
      do
      {
        glTexImage2D(3553,
          (unsigned int)iteration_count_2,
          dword_140404A6C[scaled_index + 436582481],
          (unsigned int)((int)dword_140404A6C[scaled_index + 436582477] >> iteration_count_2),
          (int)dword_140404A6C[scaled_index + 436582478] >> iteration_count_2,
          0,
          dword_140404A6C[scaled_index + 436582480],
          5121,
          *buffer_cursor);
        ++iteration_count_2;
        ++buffer_cursor;
      }
      while ( iteration_count_2 < (int)dword_140404A6C[scaled_index + 436582479] );
    }
    if ( a3 )
      glGenerateMipmap(3553);
    if ( a8 )
    {
      for ( j = 0; j < (int)dword_140404A6C[scaled_index + 436582479]; ++allocated_buffer )
      {
        if ( *allocated_buffer )
        {
          free(*allocated_buffer);
          *allocated_buffer = nullptr;
        }
        ++j;
      }
    }
    return 1;
  }
  return result;
}

//----- (000000014007BCB0) ----------------------------------------------------
void            sr_texture_upload(int a1, int a2, int a3)
{
  __int64 record_word_offset;
  signed int iteration_count;
  unsigned int *state_address;
  signed int iteration_count_2;
  void **buffer_cursor;

  record_word_offset = 42LL * a1;
  glBindTexture(3553, dword_140404A6C[record_word_offset + 436582486]);
  glTexParameteri(3553,
    10242,
    dword_140404A6C[record_word_offset + 436582482]);
  glTexParameteri(3553,
    10243,
    dword_140404A6C[record_word_offset + 436582483]);
  glTexParameteri(3553,
    10240,
    dword_140404A6C[record_word_offset + 436582484]);
  glTexParameteri(3553,
    10241,
    dword_140404A6C[record_word_offset + 436582485]);
  iteration_count = 0;
  if ( (int)dword_140404A6C[record_word_offset + 436582479] > 0 )
  {
    state_address = &dword_140404A6C[record_word_offset + 436582487];
    do
    {
      glTexImage2D(3553,
        (unsigned int)iteration_count,
        dword_140404A6C[record_word_offset + 436582481],
        (unsigned int)((int)dword_140404A6C[record_word_offset + 436582477] >> iteration_count),
        (int)dword_140404A6C[record_word_offset + 436582478] >> iteration_count,
        0,
        dword_140404A6C[record_word_offset + 436582480],
        5121,
        *(_QWORD *)state_address);
      ++iteration_count;
      state_address += 2;
    }
    while ( iteration_count < (int)dword_140404A6C[record_word_offset + 436582479] );
  }
  if ( a2 )
    glGenerateMipmap(3553);
  if ( a3 )
  {
    iteration_count_2 = 0;
    if ( (int)dword_140404A6C[record_word_offset + 436582479] > 0 )
    {
      buffer_cursor = (void **)&dword_140404A6C[record_word_offset + 436582487];
      do
      {
        if ( *buffer_cursor )
        {
          free(*buffer_cursor);
          *buffer_cursor = nullptr;
        }
        ++iteration_count_2;
        ++buffer_cursor;
      }
      while ( iteration_count_2 < (int)dword_140404A6C[record_word_offset + 436582479] );
    }
  }
}

