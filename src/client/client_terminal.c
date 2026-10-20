#include "shared_client.h"

//----- (000000014004CCB0) ----------------------------------------------------
__int64            sub_14004CCB0(int a1, int a2, __int64 a3)
{
  __int64 input_value;
  __int64 input_value_2;
  __int64 item_record_offset;
  unsigned int scaled_index;
  int iteration_count;
  __int64 iteration_count_2;
  __int64 scaled_index_2;
  __int64 lookup_index;
  __int64 remaining_count;
  int *state_address;
  int *buffer_cursor;
  __int64 loaded_word;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14004CCB0[272];
#define input_value_3 (*(int (*))(void *)(sr_frame_14004CCB0 + 0)) /* [rsp+0h] */
#define unused_frame_slot_256 (*(__int64 (*))(void *)(sr_frame_14004CCB0 + 256)) /* [rsp+100h] */

  input_value = a2;
  if ( a2 == 2 )
  {
    input_value_2 = a1;
    item_record_offset = 1760LL * a1;
    scaled_index = dword_140404A6C[item_record_offset + 278846098];
  }
  else
  {
    if ( a2 )
      return 0; /* the function has no caller */
    input_value_2 = a1;
    item_record_offset = 1760LL * a1;
    if ( (int)dword_140404A6C[item_record_offset + 278845906] <= 0 )
      return 0; /* the function has no caller */
    scaled_index = dword_140404A6C[1760 * dword_140404A6C[item_record_offset + 278845907] + 278846098];
  }
  if ( scaled_index != -1 )
  {
    if ( (_DWORD)a3 )
    {
      iteration_count = 1;
      iteration_count_2 = 1;
      input_value_3 = a3;
      do
      {
        LODWORD(a3) = dword_140404A6C[2570 * scaled_index + 275753051 + 4 * (int)a3];
        if ( !(_DWORD)a3 )
          break;
        *(&input_value_3 + iteration_count_2) = a3;
        ++iteration_count;
        ++iteration_count_2;
      }
      while ( iteration_count_2 < 8 );
      scaled_index_2 = item_record_offset * 4 + 72 * input_value;
      lookup_index = input_value;
      remaining_count = iteration_count;
      state_address = (int *)((char *)&g_182BBC57C + scaled_index_2);
      *(unsigned int *)((char *)&g_182BBC57C + scaled_index_2) = 0;
      *(unsigned int *)((char *)&g_182BBC580 + scaled_index_2) = 0;
      if ( iteration_count >= 1LL )
      {
        buffer_cursor = &input_value_3 + iteration_count - 1;
        do
        {
          loaded_word = *state_address;
          --buffer_cursor;
          *state_address = loaded_word + 1;
          dword_140404A6C[1760 * input_value_2 + 278847174 + 18 * lookup_index + loaded_word] = buffer_cursor[1];
          --remaining_count;
        }
        while ( remaining_count );
      }
    }
    else
    {
      *(_QWORD *)&dword_140404A6C[18 * a2 + 278847172 + item_record_offset] = a3;
    }
  }
  return 0; /* the function has no caller */
}
#undef input_value_3
#undef unused_frame_slot_256

//----- (00000001400584B0) ----------------------------------------------------
__m128i *           sub_1400584B0(int a1,      __m128i *a2)
{
  __int64 item_record_offset;
  int rol4_result;
  int *record_byte_offset;
  __int64 record_byte_offset_2;
  __int64 remaining_count;
  __int64 item_record_offset_2;
  __int64 element_index;
  int byte_count;
  __m128i *result;
  int shifted_bits;
  signed int iteration_count;
  unsigned int cached_game_tick;
  __int64 record_byte_offset_3;
  signed int link;
  __int64 iteration_count_2;
  __int64 scaled_index;
  __int64 scaled_index_2;
  __int128 masked_bits;
  __int128 masked_bits_2;
  __int128 masked_bits_3;

  item_record_offset = 1760LL * a1;
  rol4_result = 1;
  record_byte_offset = (int *)&dword_140404A6C[1760 * a1 + 278845988];
  record_byte_offset_2 = 2;
  remaining_count = 4;
  do
  {
    if ( (rol4_result & dword_140404A6C[item_record_offset + 278845985 + ((record_byte_offset_2 - 2) >> 5)]) != 0 )
      dword_140404A6C[39 * *(record_byte_offset - 1) + 290382645] = 0;
    if ( (__ROL4__(rol4_result, 1) & dword_140404A6C[item_record_offset + 278845985 + ((record_byte_offset_2 - 1) >> 5)]) != 0 )
      dword_140404A6C[39 * *record_byte_offset + 290382645] = 0;
    if ( (__ROL4__(rol4_result, 2) & dword_140404A6C[item_record_offset + 278845985 + (record_byte_offset_2 >> 5)]) != 0 )
      dword_140404A6C[39 * record_byte_offset[1] + 290382645] = 0;
    if ( (__ROL4__(rol4_result, 3) & dword_140404A6C[item_record_offset + 278845985 + ((record_byte_offset_2 + 1) >> 5)]) != 0 )
      dword_140404A6C[39 * record_byte_offset[2] + 290382645] = 0;
    if ( (__ROL4__(rol4_result, 4) & dword_140404A6C[item_record_offset + 278845985 + ((record_byte_offset_2 + 2) >> 5)]) != 0 )
      dword_140404A6C[39 * record_byte_offset[3] + 290382645] = 0;
    if ( (__ROL4__(rol4_result, 5) & dword_140404A6C[item_record_offset + 278845985 + ((record_byte_offset_2 + 3) >> 5)]) != 0 )
      dword_140404A6C[39 * record_byte_offset[4] + 290382645] = 0;
    if ( (__ROL4__(rol4_result, 6) & dword_140404A6C[item_record_offset + 278845985 + ((record_byte_offset_2 + 4) >> 5)]) != 0 )
      dword_140404A6C[39 * record_byte_offset[5] + 290382645] = 0;
    if ( (__ROL4__(rol4_result, 7) & dword_140404A6C[item_record_offset + 278845985 + ((record_byte_offset_2 + 5) >> 5)]) != 0 )
      dword_140404A6C[39 * record_byte_offset[6] + 290382645] = 0;
    if ( (__ROL4__(rol4_result, 8) & dword_140404A6C[item_record_offset + 278845985 + ((record_byte_offset_2 + 6) >> 5)]) != 0 )
      dword_140404A6C[39 * record_byte_offset[7] + 290382645] = 0;
    if ( (__ROL4__(rol4_result, 9) & dword_140404A6C[item_record_offset + 278845985 + ((record_byte_offset_2 + 7) >> 5)]) != 0 )
      dword_140404A6C[39 * record_byte_offset[8] + 290382645] = 0;
    if ( (__ROL4__(rol4_result, 10) & dword_140404A6C[item_record_offset + 278845985 + ((record_byte_offset_2 + 8) >> 5)]) != 0 )
      dword_140404A6C[39 * record_byte_offset[9] + 290382645] = 0;
    if ( (__ROL4__(rol4_result, 11) & dword_140404A6C[item_record_offset + 278845985 + ((record_byte_offset_2 + 9) >> 5)]) != 0 )
      dword_140404A6C[39 * record_byte_offset[10] + 290382645] = 0;
    if ( (__ROL4__(rol4_result, 12) & dword_140404A6C[item_record_offset + 278845985 + ((record_byte_offset_2 + 10) >> 5)]) != 0 )
      dword_140404A6C[39 * record_byte_offset[11] + 290382645] = 0;
    if ( (__ROL4__(rol4_result, 13) & dword_140404A6C[item_record_offset + 278845985 + ((record_byte_offset_2 + 11) >> 5)]) != 0 )
      dword_140404A6C[39 * record_byte_offset[12] + 290382645] = 0;
    if ( (__ROL4__(rol4_result, 14) & dword_140404A6C[item_record_offset + 278845985 + ((record_byte_offset_2 + 12) >> 5)]) != 0 )
      dword_140404A6C[39 * record_byte_offset[13] + 290382645] = 0;
    if ( (__ROL4__(rol4_result, 15) & dword_140404A6C[item_record_offset + 278845985 + ((record_byte_offset_2 + 13) >> 5)]) != 0 )
      dword_140404A6C[39 * record_byte_offset[14] + 290382645] = 0;
    record_byte_offset_2 += 16;
    rol4_result = __ROL4__(rol4_result, 16);
    record_byte_offset += 16;
    --remaining_count;
  }
  while ( remaining_count );
  item_record_offset_2 = 1760LL * a1;
  element_index = -1;
  *(_QWORD *)&dword_140404A6C[item_record_offset_2 + 278845985] = 0;
  do
    ++element_index;
  while ( SR_VEC_PTR_LANES(128, a2, i8)[element_index] );
  byte_count = element_index + 1;
  if ( byte_count > 1023 )
    byte_count = 1023;
  result = crt_memcpy((__m128i *)&dword_140404A6C[item_record_offset_2 + 278846111], a2, byte_count);
  shifted_bits = byte_count >> 6;
  iteration_count = 0;
  HIBYTE(dword_140404A6C[item_record_offset_2 + 278846366]) = 0;
  if ( shifted_bits >= 0 )
  {
    cached_game_tick = game_tick;
    record_byte_offset_3 = 0;
    do
    {
      link = 0;
      iteration_count_2 = 0;
      result = (__m128i *)&g_1857BD740;
      while ( SR_VEC_PTR_LANES(128, result, i32)[0] )
      {
        ++link;
        ++iteration_count_2;
        result = (__m128i *)((char *)result + 156);
        if ( (__int64)result >= (__int64)&g_185A2D740 )
          goto LABEL_47;
      }
      if ( link != -1 )
      {
        scaled_index = 39 * iteration_count_2;
        *(_QWORD *)&dword_140404A6C[scaled_index + 290382645] = 1;
        dword_140404A6C[scaled_index + 290382648] = cached_game_tick;
        dword_140404A6C[scaled_index + 290382647] = 0;
        dword_140404A6C[scaled_index + 290382649] = a1;
        dword_140404A6C[scaled_index + 290382650] = iteration_count;
        dword_140404A6C[scaled_index + 290382651] = 64;
        scaled_index_2 = 39LL * link;
        masked_bits = *(_OWORD *)&dword_140404A6C[item_record_offset_2 + 278846115 + record_byte_offset_3];
        *(_OWORD *)&dword_140404A6C[scaled_index_2 + 290382652] = *(_OWORD *)&dword_140404A6C[item_record_offset_2 + 278846111 + record_byte_offset_3];
        masked_bits_2 = *(_OWORD *)&dword_140404A6C[item_record_offset_2 + 278846119 + record_byte_offset_3];
        *(_OWORD *)&dword_140404A6C[scaled_index_2 + 290382656] = masked_bits;
        masked_bits_3 = *(_OWORD *)&dword_140404A6C[item_record_offset_2 + 278846123 + record_byte_offset_3];
        *(_OWORD *)&dword_140404A6C[scaled_index_2 + 290382660] = masked_bits_2;
        *(_OWORD *)&dword_140404A6C[scaled_index_2 + 290382664] = masked_bits_3;
        result = (__m128i *)sr_item_register_link(a1, link, 0xFFFFFFFF);
      }
LABEL_47:
      ++iteration_count;
      record_byte_offset_3 += 16;
    }
    while ( iteration_count <= shifted_bits );
  }
  return result;
}

//----- (000000014008F050) ----------------------------------------------------
void sub_14008F050()
{
  unsigned int *state_address;
       __m128i *source_buffer;
  __int64 remaining_count;
  int scaled_index;
  __int64 scaled_index_2;
  int byte_count;
  __int64 scaled_index_3;
  unsigned __int64 byte_count_2;
  __int64 shifted_bits;

  state_address = &g_1857BD750;
  source_buffer = (     __m128i *)&g_1857BD75C;
  remaining_count = 0x4000;
  do
  {
    if ( *(state_address - 4) && !*(state_address - 3) )
    {
      scaled_index = *(state_address - 2);
      if ( scaled_index )
      {
        if ( scaled_index == 1 )
        {
          byte_count = state_address[2];
          if ( byte_count > 63 )
          {
            byte_count = 63;
            state_address[2] = 63;
          }
          scaled_index_3 = (int)*state_address;
          byte_count_2 = byte_count;
          shifted_bits = (110 * scaled_index_3 + (int)state_address[1]) << 6;
          crt_memcpy((__m128i *)((char *)&g_182BBB4F4 + shifted_bits), source_buffer, byte_count);
          *((_BYTE *)&g_182BBB4F4 + shifted_bits + byte_count_2) = 0;
          crt_memcpy((__m128i *)((char *)&g_182BBBCF4 + shifted_bits), source_buffer + 4, byte_count_2);
          dword_140404A6C[1760 * scaled_index_3 + 278846101] = 0;
        }
      }
      else
      {
        scaled_index_2 = 1760LL * (int)*state_address;
        crt_memcpy((__m128i *)((char *)&dword_140404A6C[scaled_index_2 + 278846111] + (int)(state_address[1] << 6)), source_buffer, (int)state_address[2]);
        HIBYTE(dword_140404A6C[scaled_index_2 + 278846366]) = 0;
        dword_140404A6C[scaled_index_2 + 278846101] = 0;
      }
      *(state_address - 3) = 1;
    }
    source_buffer = (     __m128i *)((char *)source_buffer + 156);
    state_address += 39;
    --remaining_count;
  }
  while ( remaining_count );
}

//----- (00000001400C3E00) ----------------------------------------------------
__int64            sub_1400C3E00(int a1)
{
  __m128i si128;
  __int64 input_value;
  __int64 item_record_offset;
  unsigned int *state_address;
  unsigned int table_value;
  unsigned int table_value_2;
  int masked_bits;
  __int64 result;

  si128 = _mm_load_si128((     __m128i *)&xmmword_140279200);
  input_value = a1;
  item_record_offset = 1760LL * a1;
  state_address = &dword_140404A6C[16 * ((int)dword_140404A6C[item_record_offset + 278846111] + 110LL * a1) + 278846626];
  _mm_storeu_si128((__m128i *)(void *)state_address, si128);
  _mm_storeu_si128((__m128i *)(void *)(state_address + 4), si128);
  _mm_storeu_si128((__m128i *)(void *)(state_address + 8), si128);
  *((_QWORD *)state_address + 6) = SR_VEC_LANES(128, si128, i64)[0];
  state_address[14] = SR_VEC_LANES(128, si128, i32)[0];
  *((_WORD *)state_address + 30) = SR_VEC_LANES(128, si128, i16)[0];
  *((_BYTE *)state_address + 62) = SR_VEC_LANES(128, si128, i8)[0];
  sr_item_link_text_line(a1, dword_140404A6C[item_record_offset + 278846111]);
  table_value = dword_140404A6C[item_record_offset + 278846111];
  table_value_2 = dword_140404A6C[item_record_offset + 278846112];
  if ( (((_BYTE)table_value + 10) & 0x1F) == table_value_2 )
    dword_140404A6C[item_record_offset + 278846112] = ((_BYTE)table_value_2 + 1) & 0x1F;
  masked_bits = ((_BYTE)table_value + 1) & 0x1F;
  dword_140404A6C[item_record_offset + 278846111] = masked_bits;
  result = (unsigned int)(masked_bits << 6);
  ++dword_140404A6C[input_value + 280648157];
  dword_140404A6C[item_record_offset + 278846113] = result;
  return result;
}

//----- (00000001400C3ED0) ----------------------------------------------------
int            sub_1400C3ED0(int a1)
{
  __int64 item_record_offset;
  __int64 input_value;
  __int64 shifted_bits;
  int disk_for_item_drive_result;
  __int64 scaled_index;
  signed int iteration_count;
  int *buffer_cursor;
  __int64 scaled_index_2;
  int table_value;
  __int64 table_value_2;
  __int64 scaled_index_3;
  __int64 table_value_3;
  __int64 scaled_index_4;
  char *destination_text;
  unsigned int *state_address;
  signed int iteration_count_2;
  int *buffer_cursor_2;

  item_record_offset = 1760LL * a1;
  input_value = a1;
  LODWORD(shifted_bits) = dword_140404A6C[item_record_offset + 278847244];
  if ( (int)shifted_bits > 0 )
  {
    LODWORD(shifted_bits) = shifted_bits - 1;
    dword_140404A6C[item_record_offset + 278847244] = shifted_bits;
    if ( !(_DWORD)shifted_bits )
    {
      if ( !dword_140404A6C[item_record_offset + 278847243] )
      {
        disk_for_item_drive_result = sr_disk_for_item_drive(a1, dword_140404A6C[item_record_offset + 278847245]);
        scaled_index = 110 * input_value;
        if ( disk_for_item_drive_result == -1 )
        {
          crt_sprintf(&dword_140404A6C[16 * (scaled_index + (int)dword_140404A6C[item_record_offset + 278846111]) + 278846114], "DISK ERROR");
        }
        else
        {
          sr_disk_add_file(
            disk_for_item_drive_result,
            dword_140404A6C[item_record_offset + 278847246],
            (char *)&dword_140404A6C[item_record_offset + 278847249],
            dword_140404A6C[item_record_offset + 278847257]);
          crt_sprintf(
            &dword_140404A6C[16 * (scaled_index + (int)dword_140404A6C[item_record_offset + 278846111]) + 278846114],
            "  1 FILE(S) COPIED.");
        }
        sub_1400C3E00(a1);
        LODWORD(shifted_bits) = dword_140404A6C[item_record_offset + 278847258];
        if ( (_DWORD)shifted_bits )
        {
          iteration_count = 0;
          if ( (int)shifted_bits > 0 )
          {
            buffer_cursor = (int *)&dword_140404A6C[item_record_offset + 278847259];
            do
            {
              LODWORD(shifted_bits) = sub_1400C6D90(a1, *buffer_cursor);
              ++iteration_count;
              ++buffer_cursor;
            }
            while ( iteration_count < (int)dword_140404A6C[item_record_offset + 278847258] );
          }
          dword_140404A6C[item_record_offset + 278847258] = 0;
        }
        else
        {
          LODWORD(shifted_bits) = sub_1400C6D90(a1, 8);
        }
      }
      if ( dword_140404A6C[item_record_offset + 278847243] == 1 )
      {
        LODWORD(shifted_bits) = sr_disk_for_item_drive(a1, dword_140404A6C[item_record_offset + 278847245]);
        if ( (_DWORD)shifted_bits == -1 )
        {
          crt_sprintf(
            &dword_140404A6C[16 * (110 * input_value + (int)dword_140404A6C[item_record_offset + 278846111]) + 278846114],
            "DISK ERROR");
          LODWORD(shifted_bits) = sub_1400C3E00(a1);
        }
        else
        {
          scaled_index_2 = 2570LL * (int)shifted_bits;
          table_value = dword_140404A6C[scaled_index_2 + 275753047];
          while ( 1 )
          {
            while ( 1 )
            {
              table_value_2 = (int)dword_140404A6C[item_record_offset + 278847247];
              if ( (int)table_value_2 < table_value )
                break;
              table_value_3 = (int)dword_140404A6C[item_record_offset + 278847248];
              if ( (int)table_value_3 >= (int)dword_140404A6C[scaled_index_2 + 275754072] )
                goto LABEL_27;
              scaled_index_4 = scaled_index_2 * 4 + 24 * table_value_3;
              if ( *(unsigned int *)((char *)&g_181FEFBE4 + scaled_index_4) == dword_140404A6C[item_record_offset + 278847246] )
              {
                crt_sprintf(
                  &dword_140404A6C[16 * (110 * input_value + (int)dword_140404A6C[item_record_offset + 278846111]) + 278846114],
                  "%s",
                  (     char *)&g_181FEFBD4 + scaled_index_4);
                sub_1400C3E00(a1);
                shifted_bits = (110 * input_value + (int)dword_140404A6C[item_record_offset + 278846111]) << 6;
                *((_BYTE *)&g_182BBB4F4 + shifted_bits) = 0;
                ++dword_140404A6C[item_record_offset + 278847248];
                dword_140404A6C[item_record_offset + 278847244] = 4;
                goto LABEL_27;
              }
              LODWORD(shifted_bits) = table_value_3 + 1;
              dword_140404A6C[item_record_offset + 278847248] = table_value_3 + 1;
            }
            scaled_index_3 = scaled_index_2 * 4 + 16 * table_value_2;
            if ( *(unsigned int *)((char *)&g_181FEEBD8 + scaled_index_3) == dword_140404A6C[item_record_offset + 278847246] )
              break;
            LODWORD(shifted_bits) = table_value_2 + 1;
            dword_140404A6C[item_record_offset + 278847247] = table_value_2 + 1;
          }
          crt_sprintf(
            &dword_140404A6C[16 * (110 * input_value + (int)dword_140404A6C[item_record_offset + 278846111]) + 278846114],
            "%s            ",
            (     char *)&g_181FEEBCC + scaled_index_3);
          HIBYTE(dword_140404A6C[16 * (110 * input_value + (int)dword_140404A6C[item_record_offset + 278846111]) + 278846116]) = 0;
          destination_text = (char *)&dword_140404A6C[16 * (110 * input_value + (int)dword_140404A6C[item_record_offset + 278846111]) + 278846113] + 3;
          while ( *++destination_text != 0 )
            ;
          strcpy(destination_text, "<DIR>");
          sub_1400C3E00(a1);
          shifted_bits = (110 * input_value + (int)dword_140404A6C[item_record_offset + 278846111]) << 6;
          *((_BYTE *)&g_182BBB4F4 + shifted_bits) = 0;
          ++dword_140404A6C[item_record_offset + 278847247];
          dword_140404A6C[item_record_offset + 278847244] = 4;
        }
LABEL_27:
        if ( !dword_140404A6C[item_record_offset + 278847244] )
        {
          sub_1400C3E00(a1);
          state_address = &dword_140404A6C[item_record_offset + 278847258];
          LOBYTE(dword_140404A6C[16 * (110 * input_value + (int)dword_140404A6C[item_record_offset + 278846111]) + 278846114]) = 0;
          LOBYTE(dword_140404A6C[item_record_offset + 278847154]) = 0;
          LODWORD(shifted_bits) = dword_140404A6C[item_record_offset + 278847258];
          if ( (_DWORD)shifted_bits )
          {
            iteration_count_2 = 0;
            if ( (int)shifted_bits > 0 )
            {
              buffer_cursor_2 = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + item_record_offset * 4 + 1119602392);
              do
              {
                LODWORD(shifted_bits) = sub_1400C6D90(a1, *buffer_cursor_2);
                ++iteration_count_2;
                ++buffer_cursor_2;
              }
              while ( iteration_count_2 < (int)*state_address );
            }
            *state_address = 0;
          }
          else
          {
            LODWORD(shifted_bits) = sub_1400C6D90(a1, 8);
          }
        }
      }
    }
  }
  return shifted_bits;
}

//----- (00000001400C4280) ----------------------------------------------------
__int64            sub_1400C4280(int a1)
{
  __int64 item;
  __int64 item_record_offset;
  int saved_iteration_count;
  unsigned int scaled_index;
  __int64 packed_word_bits;
  int element_index;
  __int64 item_record_offset_2;
  __int64 scaled_index_2;
  __int64 masked_bits;
  int element_index_2;
  unsigned int *state_address;
  int iteration_count;
  char loaded_word;
  int iteration_count_2;
  int iteration_count_3;
  char *cached_str1;
  char loaded_word_2;
  int saved_iteration_count_2;
  char loaded_word_3;
  __int64 element_index_3;
  char loaded_word_4;
  int drive;
  __int64 saved_drive;
  unsigned int saved_packed_word_bits;
  unsigned int scaled_index_3;
  int element_index_4;
  __int64 element_index_5;
  __int64 remaining_count;
  __int64 scaled_index_4;
  __int64 scaled_index_5;
  char *state_address_2;
  __int64 masked_bits_2;
  __int64 shifted_bits;
  __int64 element_index_6;
  char table_value;
  __int64 iteration_count_4;
  __int64 scaled_index_6;
  signed int scaled_index_7;
  int masked_bits_3;
  __int64 remaining_count_2;
  __int64 scaled_index_8;
  __int64 scaled_index_9;
  int *buffer_cursor;
  char *destination_text;
  bool comparison_result;
  char *text_cursor;
  __int64 element_index_7;
  char table_value_2;
  int disk_for_item_drive_result;
  __int64 saved_disk_for_item_drive_result;
  int iteration_count_5;
  int element_index_8;
  char loaded_word_5;
  __int64 saved_item;
  __int64 shifted_bits_2;
  char *cached_str1_2;
  char loaded_word_6;
  __int64 scaled_index_10;
  int iteration_count_6;
  int scaled_index_11;
  unsigned int *state_address_3;
       char *left_text;
  unsigned int saved_drive_2;
  int disk_for_item_drive_result_2;
  __int64 saved_disk_for_item_drive_result_2;
  unsigned int saved_packed_word_bits_2;
  __int64 shifted_bits_3;
  char *cached_str1_3;
  char input_byte;
  __int64 table_value_3;
  __int64 shifted_bits_4;
  __int64 shifted_bits_5;
  __int64 shifted_bits_6;
  __int64 element_index_9;
  char table_value_4;
  __int64 scaled_index_12;
  signed int element_index_10;
  char *destination_text_2;
  __m128i si128;
  unsigned int *cached_si128;
  __int64 cached_scaled_index;
  unsigned int cached_game_tick;
  __int64 shifted_bits_7;
  __int64 element_index_11;
  char table_value_5;
  int saved_element_index;
  int disk_for_item_drive_result_3;
  int iteration_count_7;
  int element_index_12;
  char loaded_word_7;
  __int64 shifted_bits_8;
  __int64 element_index_13;
  char table_value_6;
  __int64 shifted_bits_9;
  char *cached_str1_4;
  char loaded_word_8;
  __int64 scaled_index_13;
  int table_value_7;
  unsigned int *state_address_4;
       char *left_text_2;
  __int64 scaled_index_14;
  __int64 shifted_bits_10;
  __int64 shifted_bits_11;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C4280[1136];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400C4280 + 0)) /* [rsp+0h] */
#define drive_2 (*(unsigned int (*))(void *)(sr_frame_1400C4280 + 48)) /* [rsp+30h] */
#define saved_iteration_count_3 (*(int (*))(void *)(sr_frame_1400C4280 + 52)) /* [rsp+34h] */
#define packed_word_bits_2 (*(__int64 (*))(void *)(sr_frame_1400C4280 + 56)) /* [rsp+38h] */
#define drive_3 (*(__int64 (*))(void *)(sr_frame_1400C4280 + 64)) /* [rsp+40h] */
#define state_address_5 (*(unsigned int * (*))(void *)(sr_frame_1400C4280 + 72)) /* [rsp+48h] */
#define scaled_index_15 (*(__int64 (*))(void *)(sr_frame_1400C4280 + 80)) /* [rsp+50h] */
#define callee_output_word (*(char (*)[4])(void *)(sr_frame_1400C4280 + 92)) /* [rsp+5Ch] */
#define Str1 (*(char (*)[4])(void *)(sr_frame_1400C4280 + 96)) /* [rsp+60h] */
#define callee_output_word_2 (*(char (*))(void *)(sr_frame_1400C4280 + 607)) /* [rsp+25Fh] */
#define callee_output_word_3 (*(char (*)[512])(void *)(sr_frame_1400C4280 + 608)) /* [rsp+260h] */
#define unused_frame_slot_1120 (*(__int64 (*))(void *)(sr_frame_1400C4280 + 1120)) /* [rsp+460h] */

  item = a1;
  item_record_offset = 1760LL * a1;
  saved_iteration_count = -1;
  scaled_index_15 = item_record_offset * 4;
  scaled_index = -1;
  packed_word_bits = (int)dword_140404A6C[item_record_offset + 278847170];
  drive_2 = packed_word_bits;
  if ( (_DWORD)packed_word_bits == 2 )
  {
    scaled_index = dword_140404A6C[item_record_offset + 278846098];
  }
  else if ( !(_DWORD)packed_word_bits && (int)dword_140404A6C[item_record_offset + 278845906] > 0 )
  {
    scaled_index = dword_140404A6C[1760 * dword_140404A6C[item_record_offset + 278845907] + 278846098];
  }
  element_index = 0;
  item_record_offset_2 = 1760LL * a1;
  scaled_index_2 = item_record_offset * 4 + 72 * packed_word_bits;
  drive_3 = 9 * packed_word_bits;
  masked_bits = *(int *)((char *)&g_182BBC57C + scaled_index_2);
  saved_iteration_count_3 = 0;
  packed_word_bits_2 = 18 * packed_word_bits;
  Str1[0] = 0;
  element_index_2 = 0;
  state_address = &dword_140404A6C[item_record_offset + 278847154];
  iteration_count = 0;
  LODWORD(state_address_5) = dword_140404A6C[18 * packed_word_bits + 278847173 + item_record_offset_2 + masked_bits];
  while ( 1 )
  {
    loaded_word = *((_BYTE *)state_address + iteration_count);
    if ( (unsigned __int8)(loaded_word - 97) <= 0x19u
      || (unsigned __int8)(loaded_word - 65) <= 0x19u
      || (unsigned __int8)(loaded_word - 48) <= 9u )
    {
      break;
    }
    iteration_count_2 = iteration_count;
    if ( loaded_word )
    {
      saved_iteration_count_3 = ++iteration_count;
      iteration_count_2 = iteration_count;
      if ( iteration_count < 62 )
        continue;
    }
    goto LABEL_14;
  }
  iteration_count_2 = iteration_count;
LABEL_14:
  if ( iteration_count_2 < 62 )
  {
    iteration_count_3 = iteration_count_2;
    cached_str1 = Str1;
    while ( 1 )
    {
      loaded_word_2 = *((_BYTE *)state_address + iteration_count_3);
      if ( (unsigned __int8)(loaded_word_2 - 97) > 0x19u
        && (unsigned __int8)(loaded_word_2 - 65) > 0x19u
        && (unsigned __int8)(loaded_word_2 - 48) > 9u )
      {
        break;
      }
      iteration_count_2 = iteration_count_3 + 1;
      *cached_str1++ = loaded_word_2;
      saved_iteration_count_3 = iteration_count_2;
      ++element_index_2;
      ++iteration_count_3;
      if ( iteration_count_2 >= 62 )
        goto LABEL_22;
    }
    iteration_count_2 = iteration_count_3;
LABEL_22:
    LODWORD(packed_word_bits) = drive_2;
  }
  Str1[element_index_2] = 0;
  if ( !Str1[1] )
  {
    if ( iteration_count_2 < 62 )
    {
      saved_iteration_count_2 = iteration_count_2;
      do
      {
        iteration_count_2 = saved_iteration_count_2;
        if ( *((_BYTE *)state_address + saved_iteration_count_2) != 32 )
          break;
        iteration_count_2 = saved_iteration_count_2 + 1;
        saved_iteration_count_2 = iteration_count_2;
      }
      while ( iteration_count_2 < 62 );
    }
    loaded_word_3 = *((_BYTE *)state_address + iteration_count_2);
    if ( (unsigned __int8)(loaded_word_3 - 97) > 0x19u && (unsigned __int8)(loaded_word_3 - 65) > 0x19u && (unsigned __int8)(loaded_word_3 - 48) > 9u )
    {
      if ( loaded_word_3 && iteration_count_2 < 62 )
      {
        element_index_3 = 0;
        do
        {
          if ( element_index_3 >= 2 )
            break;
          loaded_word_4 = *((_BYTE *)state_address + iteration_count_2);
          if ( !loaded_word_4 )
            break;
          ++element_index;
          callee_output_word_3[element_index_3++] = loaded_word_4;
          ++iteration_count_2;
        }
        while ( iteration_count_2 < 62 );
      }
      callee_output_word_3[element_index] = 0;
      if ( element_index > 0 && callee_output_word_3[0] == 58 && !callee_output_word_3[1] )
      {
        if ( (unsigned __int8)(Str1[0] - 65) > 2u
          || (drive = (unsigned __int8)Str1[0] - 65, (unsigned int)sr_disk_for_item_drive(item, drive) == -1) )
        {
          *(_OWORD *)&dword_140404A6C[16 * (110 * item + (int)dword_140404A6C[item_record_offset + 278846111]) + 278846114] = xmmword_140275F48;
          goto LABEL_178;
        }
        dword_140404A6C[item_record_offset + 278847170] = drive;
      }
    }
    return 0; /* no result: rax is residue at 0x1400C532F */
  }
  if ( scaled_index == -1 )
  {
    *(_OWORD *)&dword_140404A6C[16 * (110 * item + (int)dword_140404A6C[item_record_offset + 278846111]) + 278846114] = xmmword_140275F48;
    goto LABEL_178;
  }
  if ( Str1[0] != 67 || Str1[1] != 68 || Str1[2] )
  {
    element_index_6 = 0;
    while ( 1 )
    {
      table_value = Str1[element_index_6++];
      if ( table_value != byte_140275F6C[element_index_6 - 1] )
        break;
      if ( element_index_6 == 4 )
      {
        iteration_count_4 = 1;
        dword_140404A6C[item_record_offset + 278847243] = 1;
        dword_140404A6C[item_record_offset + 278847244] = 4;
        dword_140404A6C[item_record_offset + 278847258] = 0;
        *(_QWORD *)&dword_140404A6C[item_record_offset + 278847247] = 1;
        dword_140404A6C[item_record_offset + 278847245] = packed_word_bits;
        scaled_index_6 = 110 * item;
        dword_140404A6C[item_record_offset + 278847246] = dword_140404A6C[item_record_offset_2
                                                        + 278847173
                                                        + packed_word_bits_2
                                                        + *(int *)((char *)&g_182BBC57C + scaled_index_2)];
        LOBYTE(dword_140404A6C[16 * (110 * item + (int)dword_140404A6C[item_record_offset + 278846111]) + 278846114]) = 0;
        sub_1400C3E00(item);
        if ( drive_2 == 2 )
        {
          scaled_index_7 = dword_140404A6C[item_record_offset + 278846098];
          goto LABEL_74;
        }
        if ( drive_2 || (int)dword_140404A6C[item_record_offset + 278845906] <= 0 )
          goto LABEL_85;
        scaled_index_7 = dword_140404A6C[1760 * dword_140404A6C[item_record_offset + 278845907] + 278846098];
LABEL_74:
        if ( scaled_index_7 == -1 )
        {
LABEL_85:
          callee_output_word_3[0] = 0;
        }
        else
        {
          crt_sprintf(callee_output_word_3, "%c:\\", drive_2 + 65);
          masked_bits_3 = *(unsigned int *)((char *)&g_182BBC57C + scaled_index_2);
          if ( masked_bits_3 >= 1 )
          {
            remaining_count_2 = (unsigned int)masked_bits_3;
            scaled_index_8 = (int)dword_140404A6C[2 * drive_3 + 278847172 + item_record_offset];
            scaled_index_9 = 2570LL * scaled_index_7;
            buffer_cursor = (int *)((char *)&g_182BBC584 + scaled_index_2);
            do
            {
              destination_text = &callee_output_word_2;
              do
                comparison_result = *++destination_text == 0;
              while ( !comparison_result );
              strcpy(destination_text, (     char *)&dword_140404A6C[4 * *buffer_cursor + 275753048 + scaled_index_9]);
              if ( iteration_count_4 < scaled_index_8 )
              {
                text_cursor = &callee_output_word_2;
                do
                  comparison_result = *++text_cursor == 0;
                while ( !comparison_result );
                *(_WORD *)text_cursor = 92;
              }
              ++iteration_count_4;
              ++buffer_cursor;
              --remaining_count_2;
            }
            while ( remaining_count_2 );
          }
        }
        crt_sprintf(
          &dword_140404A6C[16 * (scaled_index_6 + (int)dword_140404A6C[item_record_offset + 278846111]) + 278846114],
          "Directory of %s",
          callee_output_word_3);
        sub_1400C3E00(item);
        LOBYTE(dword_140404A6C[16 * (scaled_index_6 + (int)dword_140404A6C[item_record_offset + 278846111]) + 278846114]) = 0;
        return 0; /* no result: rax is residue at 0x1400C532F */
      }
    }
    element_index_7 = 0;
    do
    {
      table_value_2 = Str1[element_index_7++];
      if ( table_value_2 != sr_mem_140275f80[element_index_7 - 1] )
      {
        element_index_9 = 0;
        while ( 1 )
        {
          table_value_4 = Str1[element_index_9++];
          if ( table_value_4 != sr_mem_140276018[element_index_9 - 1] )
            break;
          if ( element_index_9 == 8 )
            goto LABEL_131;
        }
        if ( strcmp_sr(Str1, "MISSION.EXE") )
        {
          element_index_11 = 0;
          while ( 1 )
          {
            table_value_5 = Str1[element_index_11++];
            if ( table_value_5 != sr_mem_140276050[element_index_11 - 1] )
              break;
            if ( element_index_11 == 8 )
              goto LABEL_142;
          }
          if ( strcmp_sr(Str1, "DECRYPT.EXE") )
          {
            element_index_13 = 0;
            while ( 1 )
            {
              table_value_6 = Str1[element_index_13++];
              if ( table_value_6 != sr_mem_14027609c[element_index_13 - 1] )
                break;
              if ( element_index_13 == 6 )
                goto LABEL_155;
            }
            if ( !strcmp_sr(Str1, "SNAKE.EXE") )
            {
LABEL_155:
              dword_140404A6C[item_record_offset + 278847324] = 3;
              dword_140404A6C[item_record_offset + 278846113] = -1;
              *(_QWORD *)&dword_140404A6C[item_record_offset + 278846111] = 0;
              crt_memset((void *)(uintptr_t)(&dword_140404A6C[item_record_offset + 278847325]), 0, 0x520u);
              sub_1400C92B0(item);
              return 0; /* no result: rax is residue at 0x1400C532F */
            }
            if ( *(_BYTE *)state_address )
            {
              shifted_bits_9 = (110 * item + (int)dword_140404A6C[item_record_offset + 278846111]) << 6;
              *(_OWORD *)((char *)&g_182BBB4F4 + shifted_bits_9) = xmmword_140276030;
              *(_QWORD *)((char *)&g_182BBB504 + shifted_bits_9) = 0x454D414E20454C49LL;
              *((_BYTE *)&g_182BBB50C + shifted_bits_9) = 0;
              goto LABEL_178;
            }
            return 0; /* no result: rax is residue at 0x1400C532F */
          }
LABEL_142:
          LODWORD(packed_word_bits_2) = (_DWORD)state_address_5;
          LODWORD(drive_3) = drive_2;
          saved_element_index = -1;
          if ( (unsigned int)sub_14004C9C0(item, (int *)&drive_3, (int *)&packed_word_bits_2, (__int64)state_address, &saved_iteration_count_3) )
            goto LABEL_150;
          disk_for_item_drive_result_3 = sr_disk_for_item_drive(item, drive_3);
          if ( disk_for_item_drive_result_3 == -1 )
            goto LABEL_150;
          iteration_count_7 = saved_iteration_count_3;
          element_index_12 = 0;
          if ( saved_iteration_count_3 < 62 )
          {
            while ( 1 )
            {
              loaded_word_7 = *((_BYTE *)state_address + iteration_count_7);
              if ( (unsigned __int8)(loaded_word_7 - 97) <= 0x19u
                || (unsigned __int8)(loaded_word_7 - 65) <= 0x19u
                || (unsigned __int8)(loaded_word_7 - 48) <= 9u
                || !loaded_word_7 )
              {
                break;
              }
              if ( ++iteration_count_7 >= 62 )
                goto LABEL_150;
            }
            if ( iteration_count_7 < 62 )
            {
              cached_str1_4 = Str1;
              do
              {
                loaded_word_8 = *((_BYTE *)state_address + iteration_count_7);
                if ( (unsigned __int8)(loaded_word_8 - 97) > 0x19u
                  && (unsigned __int8)(loaded_word_8 - 65) > 0x19u
                  && (unsigned __int8)(loaded_word_8 - 48) > 9u
                  && loaded_word_8 != 46 )
                {
                  break;
                }
                *cached_str1_4 = loaded_word_8;
                ++element_index_12;
                ++cached_str1_4;
                ++iteration_count_7;
              }
              while ( iteration_count_7 < 62 );
            }
          }
          Str1[element_index_12] = 0;
          if ( element_index_12 <= 0 )
            goto LABEL_150;
          scaled_index_13 = 2570LL * disk_for_item_drive_result_3;
          table_value_7 = dword_140404A6C[scaled_index_13 + 275754072];
          if ( table_value_7 <= 0 )
            goto LABEL_150;
          state_address_4 = &dword_140404A6C[scaled_index_13 + 275754078];
          left_text_2 = (     char *)&dword_140404A6C[scaled_index_13 + 275754074];
          do
          {
            if ( *state_address_4 == (_DWORD)packed_word_bits_2 && !strcmp_sr(left_text_2, Str1) )
              saved_element_index = element_index;
            ++element_index;
            left_text_2 += 24;
            state_address_4 += 6;
          }
          while ( element_index < table_value_7 );
          if ( saved_element_index == -1 )
          {
LABEL_150:
            shifted_bits_8 = (110 * item + (int)dword_140404A6C[item_record_offset + 278846111]) << 6;
            *(_OWORD *)((char *)&g_182BBB4F4 + shifted_bits_8) = xmmword_140276080;
            *(_QWORD *)((char *)&g_182BBB504 + shifted_bits_8) = 0x656D616E656C6966LL;
            *(_WORD *)((char *)&g_182BBB50C + shifted_bits_8) = 34;
            goto LABEL_178;
          }
          scaled_index_14 = (int)dword_140404A6C[6 * saved_element_index + 275754073 + scaled_index_13];
          if ( dword_140404A6C[290 * scaled_index_14 + 273377606] )
          {
            dword_140404A6C[item_record_offset + 278846113] = -1;
            dword_140404A6C[item_record_offset + 278847324] = 1;
            dword_140404A6C[item_record_offset + 278847454] = scaled_index_14;
            sub_1400C5C00(item);
            return 0; /* no result: rax is residue at 0x1400C532F */
          }
          shifted_bits_10 = (110 * item + (int)dword_140404A6C[item_record_offset + 278846111]) << 6;
          *(_OWORD *)((char *)&g_182BBB4F4 + shifted_bits_10) = xmmword_140276068;
          *(unsigned int *)((char *)&g_182BBB504 + shifted_bits_10) = 4542553;
          goto LABEL_178;
        }
LABEL_131:
        scaled_index_12 = 110 * item;
        if ( dword_140404A6C[item_record_offset + 278847323] == -1 )
        {
          shifted_bits_11 = (scaled_index_12 + (int)dword_140404A6C[item_record_offset + 278846111]) << 6;
          *(_OWORD *)((char *)&g_182BBB4F4 + shifted_bits_11) = xmmword_140276030;
          *(_QWORD *)((char *)&g_182BBB504 + shifted_bits_11) = 0x454D414E20454C49LL;
          *((_BYTE *)&g_182BBB50C + shifted_bits_11) = 0;
          goto LABEL_178;
        }
        dword_140404A6C[item_record_offset + 278847324] = 2;
        dword_140404A6C[item_record_offset + 278846113] = -1;
        *(_QWORD *)&dword_140404A6C[item_record_offset + 278846111] = 0;
        state_address_5 = &dword_140404A6C[item_record_offset + 278847325];
        crt_memset((void *)(uintptr_t)(&dword_140404A6C[item_record_offset + 278847325]), 0, 0x420u);
        dword_140404A6C[item_record_offset + 278847328] = -1;
        element_index_10 = 0;
        destination_text_2 = (char *)&dword_140404A6C[1760 * item + 278846114];
        do
        {
          *destination_text_2 = 0;
          if ( !element_index_10 )
            strcpy(destination_text_2, "CONNECTING...");
          si128 = _mm_load_si128((     __m128i *)&xmmword_140279200);
          cached_si128 = &dword_140404A6C[16 * (scaled_index_12 + (unsigned int)element_index_10) + 278846626];
          *(__m128i_u *)cached_si128 = si128;
          *((__m128i *)cached_si128 + 1) = si128;
          *((__m128i *)cached_si128 + 2) = si128;
          *((_QWORD *)cached_si128 + 6) = SR_VEC_LANES(128, si128, i64)[0];
          cached_si128[14] = SR_VEC_LANES(128, si128, i32)[0];
          *((_WORD *)cached_si128 + 30) = SR_VEC_LANES(128, si128, i16)[0];
          *((_BYTE *)cached_si128 + 62) = SR_VEC_LANES(128, si128, i8)[0];
          sr_item_link_text_line(item, element_index_10++);
          destination_text_2 += 64;
        }
        while ( element_index_10 < 24 );
        cached_scaled_index = scaled_index_15;
        comparison_result = game_connected == 0;
        *state_address_5 = 0;
        *(unsigned int *)((char *)&g_182BBC7E4 + cached_scaled_index) = 256;
        if ( !comparison_result )
        {
          cached_game_tick = game_tick;
          shifted_bits_7 = (__int64)(int)world_event_count++ << 7;
          HIWORD(world_event_count) = 0;
          *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_7) = 19;
          *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_7) = cached_game_tick;
          *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_7) = g_183E936F0;
          *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_7) = item;
          *(unsigned int *)((char *)&g_1873DE490 + shifted_bits_7) = 1065353216;
          *(unsigned int *)((char *)&g_1873DE494 + shifted_bits_7) = 1065353216;
        }
        return 0; /* no result: rax is residue at 0x1400C532F */
      }
    }
    while ( element_index_7 != 5 );
    LODWORD(packed_word_bits_2) = (_DWORD)state_address_5;
    LODWORD(drive_3) = packed_word_bits;
    if ( (unsigned int)sub_14004C9C0(item, (int *)&drive_3, (int *)&packed_word_bits_2, (__int64)state_address, &saved_iteration_count_3) )
    {
      saved_item = item;
      shifted_bits_6 = (110 * item + (int)dword_140404A6C[item_record_offset + 278846111]) << 6;
      *(_OWORD *)((char *)&g_182BBB4F4 + shifted_bits_6) = xmmword_140275FB8;
      *(_OWORD *)((char *)&g_182BBB504 + shifted_bits_6) = xmmword_140275FC8;
      *(_QWORD *)((char *)&g_182BBB514 + shifted_bits_6) = 0x4549464943455053LL;
      *(_WORD *)((char *)&g_182BBB51C + shifted_bits_6) = 68;
      sub_1400C3E00(item);
    }
    else
    {
      disk_for_item_drive_result = sr_disk_for_item_drive(item, drive_3);
      saved_disk_for_item_drive_result = disk_for_item_drive_result;
      if ( disk_for_item_drive_result != -1 )
      {
        iteration_count_5 = saved_iteration_count_3;
        element_index_8 = 0;
        if ( saved_iteration_count_3 < 62 )
        {
          while ( 1 )
          {
            loaded_word_5 = *((_BYTE *)state_address + iteration_count_5);
            if ( (unsigned __int8)(loaded_word_5 - 97) <= 0x19u
              || (unsigned __int8)(loaded_word_5 - 65) <= 0x19u
              || (unsigned __int8)(loaded_word_5 - 48) <= 9u
              || !loaded_word_5 )
            {
              break;
            }
            saved_iteration_count_3 = ++iteration_count_5;
            if ( iteration_count_5 >= 62 )
              goto LABEL_98;
          }
          if ( iteration_count_5 < 62 )
          {
            cached_str1_2 = Str1;
            do
            {
              loaded_word_6 = *((_BYTE *)state_address + iteration_count_5);
              if ( (unsigned __int8)(loaded_word_6 - 97) > 0x19u
                && (unsigned __int8)(loaded_word_6 - 65) > 0x19u
                && (unsigned __int8)(loaded_word_6 - 48) > 9u
                && loaded_word_6 != 46 )
              {
                break;
              }
              *cached_str1_2 = loaded_word_6;
              ++element_index_8;
              ++cached_str1_2;
              ++iteration_count_5;
            }
            while ( iteration_count_5 < 62 );
            saved_iteration_count_3 = iteration_count_5;
          }
        }
        Str1[element_index_8] = 0;
        if ( element_index_8 > 0 )
        {
          scaled_index_10 = 2570LL * disk_for_item_drive_result;
          iteration_count_6 = 0;
          drive_3 = 10280 * saved_disk_for_item_drive_result;
          scaled_index_11 = dword_140404A6C[2570 * saved_disk_for_item_drive_result + 275754072];
          if ( scaled_index_11 > 0 )
          {
            state_address_3 = &dword_140404A6C[scaled_index_10 + 275754078];
            left_text = (     char *)&dword_140404A6C[scaled_index_10 + 275754074];
            do
            {
              if ( *state_address_3 == (_DWORD)packed_word_bits_2 && !strcmp_sr(left_text, Str1) )
                saved_iteration_count = iteration_count_6;
              ++iteration_count_6;
              left_text += 24;
              state_address_3 += 6;
            }
            while ( iteration_count_6 < scaled_index_11 );
            if ( saved_iteration_count != -1 )
            {
              LODWORD(packed_word_bits_2) = (_DWORD)state_address_5;
              if ( (unsigned int)sub_14004C9C0(item, (int *)&drive_2, (int *)&packed_word_bits_2, (__int64)state_address, &saved_iteration_count_3) == 1 )
              {
                saved_drive_2 = drive_2;
                disk_for_item_drive_result_2 = sr_disk_for_item_drive(item, drive_2);
                saved_disk_for_item_drive_result_2 = disk_for_item_drive_result_2;
                if ( disk_for_item_drive_result_2 == -1 )
                  return 0; /* no result: rax is residue at 0x1400C532F */
                saved_packed_word_bits_2 = packed_word_bits_2;
                if ( (unsigned int)sub_140080820(disk_for_item_drive_result_2, packed_word_bits_2, (__int64)Str1) == -1 )
                {
                  if ( (int)dword_140404A6C[2570 * saved_disk_for_item_drive_result_2 + 275753046] < 400
                    && (int)dword_140404A6C[2570 * saved_disk_for_item_drive_result_2 + 275754072] >= 3 )
                  {
                    shifted_bits_3 = (110 * item + (int)dword_140404A6C[item_record_offset + 278846111]) << 6;
                    *(_OWORD *)((char *)&g_182BBB4F4 + shifted_bits_3) = xmmword_140275F88;
                    *(_QWORD *)((char *)&g_182BBB504 + shifted_bits_3) = 0x4543415053204BLL;
                    goto LABEL_178;
                  }
                  dword_140404A6C[item_record_offset + 278847243] = 0;
                  dword_140404A6C[item_record_offset + 278847244] = 256;
                  dword_140404A6C[item_record_offset + 278847258] = 0;
                  dword_140404A6C[item_record_offset + 278847245] = saved_drive_2;
                  dword_140404A6C[item_record_offset + 278847246] = saved_packed_word_bits_2;
                  cached_str1_3 = Str1;
                  do
                  {
                    input_byte = *cached_str1_3;
                    cached_str1_3[(_QWORD)&g_182BBC6B0 + item_record_offset * 4 - (_QWORD)Str1] = *cached_str1_3;
                    ++cached_str1_3;
                  }
                  while ( input_byte );
                  table_value_3 = (int)dword_140404A6C[item_record_offset + 278846111];
                  dword_140404A6C[item_record_offset + 278847257] = *(unsigned int *)((char *)&dword_140404A6C[6 * saved_iteration_count + 275754073] + drive_3);
                  LOBYTE(dword_140404A6C[16 * (110 * item + table_value_3) + 278846114]) = 0;
                  sr_event_item_sound(g_183E936F4, item, 1.0, 1.0);
                  return 0; /* no result: rax is residue at 0x1400C532F */
                }
                shifted_bits_4 = (110 * item + (int)dword_140404A6C[item_record_offset + 278846111]) << 6;
                *(_OWORD *)((char *)&g_182BBB4F4 + shifted_bits_4) = xmmword_140275FA0;
                *(unsigned int *)((char *)&g_182BBB504 + shifted_bits_4) = 5461075;
              }
              else
              {
                shifted_bits_5 = (110 * item + (int)dword_140404A6C[item_record_offset + 278846111]) << 6;
                *(_OWORD *)((char *)&g_182BBB4F4 + shifted_bits_5) = xmmword_140275FB8;
                *(_OWORD *)((char *)&g_182BBB504 + shifted_bits_5) = xmmword_140275FC8;
                *(_QWORD *)((char *)&g_182BBB514 + shifted_bits_5) = 0x4549464943455053LL;
                *(_WORD *)((char *)&g_182BBB51C + shifted_bits_5) = 68;
              }
LABEL_178:
              sub_1400C3E00(item);
              return 0; /* no result: rax is residue at 0x1400C532F */
            }
          }
        }
      }
LABEL_98:
      saved_item = item;
    }
    shifted_bits_2 = (110 * saved_item + (int)dword_140404A6C[item_record_offset + 278846111]) << 6;
    *(_OWORD *)((char *)&g_182BBB4F4 + shifted_bits_2) = xmmword_140275FE8;
    *(_OWORD *)((char *)&g_182BBB504 + shifted_bits_2) = xmmword_140275FF8;
    *(_QWORD *)((char *)&g_182BBB514 + shifted_bits_2) = 0x4549464943455053LL;
    *(_WORD *)((char *)&g_182BBB51C + shifted_bits_2) = 68;
    goto LABEL_178;
  }
  drive_2 = packed_word_bits;
  if ( (unsigned int)sub_14004C9C0(item, (int *)&drive_2, (int *)&packed_word_bits_2, (__int64)state_address, &saved_iteration_count_3) != 1 )
  {
    shifted_bits = (110 * item + (int)dword_140404A6C[item_record_offset + 278846111]) << 6;
    *(_OWORD *)((char *)&g_182BBB4F4 + shifted_bits) = xmmword_140275F58;
    *(_WORD *)((char *)&g_182BBB504 + shifted_bits) = 89;
    goto LABEL_178;
  }
  saved_drive = (int)drive_2;
  saved_packed_word_bits = packed_word_bits_2;
  if ( drive_2 == 2 )
  {
    scaled_index_3 = dword_140404A6C[item_record_offset + 278846098];
  }
  else
  {
    if ( drive_2 || (int)dword_140404A6C[item_record_offset + 278845906] <= 0 )
      return 0; /* no result: rax is residue at 0x1400C532F */
    scaled_index_3 = dword_140404A6C[1760 * dword_140404A6C[item_record_offset + 278845907] + 278846098];
  }
  if ( scaled_index_3 != -1 )
  {
    if ( (_DWORD)packed_word_bits_2 )
    {
      element_index_4 = 1;
      element_index_5 = 1;
      *(_DWORD *)Str1 = packed_word_bits_2;
      do
      {
        saved_packed_word_bits = dword_140404A6C[2570 * scaled_index_3 + 275753051 + 4 * saved_packed_word_bits];
        if ( !saved_packed_word_bits )
          break;
        *(_DWORD *)&Str1[4 * element_index_5] = saved_packed_word_bits;
        ++element_index_4;
        ++element_index_5;
      }
      while ( element_index_5 < 8 );
      remaining_count = element_index_4;
      scaled_index_4 = item_record_offset * 4 + 72 * saved_drive;
      *(_QWORD *)((char *)&g_182BBC57C + scaled_index_4) = 0;
      if ( element_index_4 >= 1LL )
      {
        scaled_index_5 = 18 * saved_drive;
        state_address_2 = &callee_output_word[4 * element_index_4];
        do
        {
          masked_bits_2 = *(int *)((char *)&g_182BBC57C + scaled_index_4);
          state_address_2 -= 4;
          *(unsigned int *)((char *)&g_182BBC57C + scaled_index_4) = masked_bits_2 + 1;
          dword_140404A6C[item_record_offset_2 + 278847174 + scaled_index_5 + masked_bits_2] = *((_DWORD *)state_address_2 + 1);
          --remaining_count;
        }
        while ( remaining_count );
      }
    }
    else
    {
      *(_QWORD *)&dword_140404A6C[18 * (int)drive_2 + 278847172 + item_record_offset] = 0;
    }
  }
  return 0; /* no result: rax is residue at 0x1400C532F */
}
#undef unused_frame_slot_0
#undef drive_2
#undef saved_iteration_count_3
#undef packed_word_bits_2
#undef drive_3
#undef state_address_5
#undef scaled_index_15
#undef callee_output_word
#undef Str1
#undef callee_output_word_2
#undef callee_output_word_3
#undef unused_frame_slot_1120

// 1400C43E1: conditional instruction was optimized away because dl.1 is in (30..39|41..5A|61..7A)
// 1400C4A73: conditional instruction was optimized away because cl.1 is in (==2E|30..39)
// 1400C51C3: conditional instruction was optimized away because cl.1 is in (==2E|30..39)

//----- (00000001400C5360) ----------------------------------------------------
__int64            sub_1400C5360(int a1)
{
  __int64 item_record_offset;
  int iteration_count;
  unsigned int *buffer_cursor;
  int iteration_count_2;
  __int64 input_value;
  char *record_byte_offset;
  unsigned int *state_address;
  int loaded_word;
  char selection_code;
  char integer_quotient;
  __int64 scaled_index;
  __int64 remaining_count;
  unsigned int *buffer_cursor_2;
  char *record_byte_offset_2;
  unsigned int *buffer_cursor_3;
  char scaled_index_2;
  char *record_byte_offset_3;
  unsigned int *buffer_cursor_4;
  _BYTE *record_byte_offset_4;
  int loaded_word_2;
  char selection_code_2;
  char integer_quotient_2;
  __int64 remaining_count_2;
  unsigned int *buffer_cursor_5;
  char *record_byte_offset_5;
  unsigned int *buffer_cursor_6;
  char scaled_index_3;

  item_record_offset = 1760LL * a1;
  iteration_count = 0;
  buffer_cursor = &dword_140404A6C[item_record_offset + 278847519];
  iteration_count_2 = 0;
  input_value = a1;
  record_byte_offset = (char *)&dword_140404A6C[item_record_offset + 278846386] + 1;
  state_address = &dword_140404A6C[item_record_offset + 278845893];
  do
  {
    loaded_word = *buffer_cursor;
    *(record_byte_offset - 1) = iteration_count_2 + 65;
    selection_code = 12;
    if ( state_address[1690] != iteration_count_2 )
      selection_code = 15;
    record_byte_offset[2047] = selection_code;
    record_byte_offset[2048] = -113;
    if ( loaded_word < 10 )
      integer_quotient = 32;
    else
      integer_quotient = loaded_word / 10 + 48;
    *record_byte_offset = integer_quotient;
    ++iteration_count_2;
    record_byte_offset[1] = loaded_word % 10 + 48;
    ++buffer_cursor;
    record_byte_offset[2049] = -113;
    record_byte_offset[2] = 32;
    record_byte_offset += 4;
  }
  while ( iteration_count_2 < 15 );
  scaled_index = 1760 * input_value;
  LOBYTE(dword_140404A6C[1760 * input_value + 278846401]) = 0;
  sr_item_link_text_line(a1, 17);
  remaining_count = 15;
  buffer_cursor_2 = &dword_140404A6C[1760 * input_value + 278846402];
  record_byte_offset_2 = (char *)&dword_140404A6C[1760 * input_value + 278846402] + 2;
  buffer_cursor_3 = &dword_140404A6C[1760 * input_value + 278847551];
  do
  {
    if ( *buffer_cursor_3 == -1 )
      scaled_index_2 = 32;
    else
      scaled_index_2 = *buffer_cursor_3 + 65;
    *(_BYTE *)buffer_cursor_2 = scaled_index_2;
    ++buffer_cursor_3;
    *(_WORD *)(record_byte_offset_2 - 1) = 8224;
    ++buffer_cursor_2;
    record_byte_offset_2[1] = 32;
    record_byte_offset_2 += 4;
    --remaining_count;
  }
  while ( remaining_count );
  LOBYTE(dword_140404A6C[scaled_index + 278846417]) = 0;
  sr_item_link_text_line(a1, 18);
  sr_item_link_text_line(a1, 19);
  record_byte_offset_3 = (char *)&dword_140404A6C[scaled_index + 278846434] + 1;
  buffer_cursor_4 = &dword_140404A6C[scaled_index + 278847534];
  record_byte_offset_4 = (char *)&dword_140404A6C[scaled_index + 278846946] + 2;
  do
  {
    loaded_word_2 = *buffer_cursor_4;
    *(record_byte_offset_4 - 2050) = iteration_count + 80;
    selection_code_2 = 12;
    if ( dword_140404A6C[scaled_index + 278847583] != iteration_count + 15 )
      selection_code_2 = 15;
    *(record_byte_offset_4 - 2) = selection_code_2;
    if ( loaded_word_2 < 10 )
    {
      record_byte_offset_3[2048] = -113;
      integer_quotient_2 = 32;
    }
    else
    {
      *(record_byte_offset_4 - 1) = -113;
      integer_quotient_2 = loaded_word_2 / 10 + 48;
    }
    *record_byte_offset_3 = integer_quotient_2;
    ++iteration_count;
    record_byte_offset_3[1] = loaded_word_2
           - 2
           * (4
            * (((((unsigned __int64)(1717986919LL * loaded_word_2) >> 32) & 0x80000000) != 0LL)
             + ((int)((unsigned __int64)(1717986919LL * loaded_word_2) >> 32) >> 2))
            + loaded_word_2 / 10)
           + 48;
    ++buffer_cursor_4;
    *record_byte_offset_4 = -113;
    record_byte_offset_4 += 4;
    record_byte_offset_3[2] = 32;
    record_byte_offset_3 += 4;
  }
  while ( iteration_count < 11 );
  LOBYTE(dword_140404A6C[scaled_index + 278846445]) = 0;
  sr_item_link_text_line(a1, 20);
  remaining_count_2 = 11;
  buffer_cursor_5 = &dword_140404A6C[scaled_index + 278846450];
  record_byte_offset_5 = (char *)&dword_140404A6C[scaled_index + 278846450] + 2;
  buffer_cursor_6 = &dword_140404A6C[scaled_index + 278847566];
  do
  {
    if ( *buffer_cursor_6 == -1 )
      scaled_index_3 = 32;
    else
      scaled_index_3 = *buffer_cursor_6 + 65;
    *(_BYTE *)buffer_cursor_5 = scaled_index_3;
    ++buffer_cursor_6;
    *(_WORD *)(record_byte_offset_5 - 1) = 8224;
    ++buffer_cursor_5;
    record_byte_offset_5[1] = 32;
    record_byte_offset_5 += 4;
    --remaining_count_2;
  }
  while ( remaining_count_2 );
  LOBYTE(dword_140404A6C[scaled_index + 278846461]) = 0;
  return sr_item_link_text_line(a1, 21);
}

//----- (00000001400C5610) ----------------------------------------------------
__int64            sub_1400C5610(int a1, int a2, __int64 a3, int a4)
{
  int iteration_count;
  __int64 iteration_count_2;
  __int64 input_value;
  __int64 packed_word_bits;
  unsigned __int8 integer_difference;
  __int64 shifted_bits;
  __int64 loaded_word;
  char lobyte_result;

  iteration_count = 0;
  iteration_count_2 = 0;
  input_value = a1;
  do
  {
    packed_word_bits = *(char *)(iteration_count_2 + a3);
    if ( !(_BYTE)packed_word_bits )
      break;
    integer_difference = packed_word_bits - 65;
    if ( a4 )
    {
      shifted_bits = iteration_count_2 + ((a2 + 110 * input_value) << 6);
      if ( integer_difference > 0x19u )
      {
        *((_BYTE *)&g_182BBB4F4 + shifted_bits) = packed_word_bits;
      }
      else
      {
        loaded_word = *(char *)(iteration_count_2 + a3);
        lobyte_result = LOBYTE(dword_140404A6C[1760 * input_value + 278847390 + packed_word_bits]) + 65;
        *((_BYTE *)&g_182BBBCF4 + shifted_bits) = 15;
        *((_BYTE *)&g_182BBB4F4 + shifted_bits) = lobyte_result;
        if ( dword_140404A6C[1760 * input_value + 278847583] == dword_140404A6C[1760 * input_value + 278847390 + loaded_word] )
          *((_BYTE *)&g_182BBBCF4 + shifted_bits) = 12;
      }
    }
    else
    {
      if ( integer_difference <= 0x19u )
      {
        LODWORD(packed_word_bits) = dword_140404A6C[1760 * input_value + 278847551 + (int)dword_140404A6C[1760 * input_value + 278847390 + packed_word_bits]];
        if ( (_DWORD)packed_word_bits == -1 )
          LOBYTE(packed_word_bits) = 32;
        else
          LOBYTE(packed_word_bits) = packed_word_bits + 65;
      }
      *((_BYTE *)&dword_140404A6C[1760 * input_value + 278846114 + 16 * a2] + iteration_count_2) = packed_word_bits;
    }
    ++iteration_count;
    ++iteration_count_2;
  }
  while ( iteration_count_2 < 62 );
  *((_BYTE *)&dword_140404A6C[1760 * input_value + 278846114 + 16 * a2] + iteration_count) = 0;
  return iteration_count;
}

//----- (00000001400C5750) ----------------------------------------------------
__int64            sub_1400C5750(int a1)
{
  __int64 input_value;
  unsigned int *record_byte_offset;
  signed int line;
  __int64 item_record_offset;
  __int64 running_total;
  __int64 i;
  __int64 loaded_word;
  __int64 integer_sum;
  char lobyte_result;
  __int64 iteration_count;
  __int64 loaded_word_2;
  unsigned int scaled_index;
  char comparison_result;
  __int64 integer_sum_2;

  input_value = a1;
  record_byte_offset = &dword_140404A6C[1760 * a1 + 278847325];
  line = 3;
  item_record_offset = 1760LL * a1;
  running_total = item_record_offset * 4 + 128;
  do
  {
    for ( i = 0; i < 62; ++i )
    {
      loaded_word = *((char *)record_byte_offset + i);
      if ( !(_BYTE)loaded_word )
        break;
      integer_sum = running_total + i;
      if ( (unsigned __int8)(loaded_word - 65) > 0x19u )
      {
        *((_BYTE *)&g_182BBB4F4 + integer_sum) = loaded_word;
      }
      else
      {
        lobyte_result = LOBYTE(dword_140404A6C[1760 * input_value + 278847390 + loaded_word]) + 65;
        *((_BYTE *)&g_182BBBCF4 + integer_sum) = 15;
        *((_BYTE *)&g_182BBB4F4 + integer_sum) = lobyte_result;
        if ( dword_140404A6C[item_record_offset + 278847583] == dword_140404A6C[1760 * input_value + 278847390 + loaded_word] )
          *((_BYTE *)&g_182BBBCF4 + integer_sum) = 12;
      }
    }
    *((_BYTE *)&g_182BBB4F4 + i + running_total) = 0;
    sr_item_link_text_line(a1, line - 1);
    iteration_count = 0;
    do
    {
      loaded_word_2 = *((char *)record_byte_offset + iteration_count);
      if ( !(_BYTE)loaded_word_2 )
        break;
      if ( (unsigned __int8)(loaded_word_2 - 65) > 0x19u )
      {
        comparison_result = *((_BYTE *)record_byte_offset + iteration_count);
      }
      else
      {
        scaled_index = dword_140404A6C[1760 * input_value + 278847551 + (int)dword_140404A6C[1760 * input_value + 278847390 + loaded_word_2]];
        comparison_result = scaled_index == -1 ? 32 : scaled_index + 65;
      }
      integer_sum_2 = running_total + iteration_count++;
      *((_BYTE *)&g_182BBB534 + integer_sum_2) = comparison_result;
    }
    while ( iteration_count < 62 );
    *((_BYTE *)&g_182BBB534 + running_total + iteration_count) = 0;
    sr_item_link_text_line(a1, line);
    line += 3;
    record_byte_offset += 16;
    running_total += 192;
  }
  while ( line < 18 );
  return sub_1400C5360(a1);
}

//----- (00000001400C58E0) ----------------------------------------------------
float            sub_1400C58E0(int a1)
{
  int iteration_count;
  __int64 item_record_offset;
  int iteration_count_2;
  int running_total;
  int *state_address;
  int iteration_count_3;
  unsigned int scaled_index;
  int iteration_count_4;
  unsigned int scaled_index_2;
  int iteration_count_5;
  unsigned int table_value;
  int iteration_count_6;
  unsigned int table_value_2;
  int iteration_count_7;
  unsigned int table_value_3;
  int iteration_count_8;
  unsigned int table_value_4;
  int iteration_count_9;
  unsigned int table_value_5;
  int iteration_count_10;
  unsigned int table_value_6;
  int iteration_count_11;
  unsigned int table_value_7;
  int iteration_count_12;
  unsigned int table_value_8;
  int iteration_count_13;
  unsigned int table_value_9;
  int iteration_count_14;
  unsigned int table_value_10;
  unsigned int table_value_11;

  iteration_count = 0;
  item_record_offset = 1760LL * a1;
  iteration_count_2 = 0;
  running_total = 2;
  state_address = (int *)&dword_140404A6C[1760 * a1 + 278847456];
  do
  {
    iteration_count_3 = iteration_count + 1;
    if ( state_address[63] <= 0 )
      iteration_count_3 = iteration_count;
    scaled_index = dword_140404A6C[item_record_offset + 278847551 + *(state_address - 1)];
    if ( scaled_index == running_total - 2 )
    {
      ++iteration_count_2;
    }
    else if ( scaled_index != -1 )
    {
      ++iteration_count_3;
    }
    iteration_count_4 = iteration_count_3 + 1;
    if ( state_address[64] <= 0 )
      iteration_count_4 = iteration_count_3;
    scaled_index_2 = dword_140404A6C[item_record_offset + 278847551 + *state_address];
    if ( scaled_index_2 == running_total - 1 )
    {
      ++iteration_count_2;
    }
    else if ( scaled_index_2 != -1 )
    {
      ++iteration_count_4;
    }
    iteration_count_5 = iteration_count_4 + 1;
    if ( state_address[65] <= 0 )
      iteration_count_5 = iteration_count_4;
    table_value = dword_140404A6C[item_record_offset + 278847551 + state_address[1]];
    if ( table_value == running_total )
    {
      ++iteration_count_2;
    }
    else if ( table_value != -1 )
    {
      ++iteration_count_5;
    }
    iteration_count_6 = iteration_count_5 + 1;
    if ( state_address[66] <= 0 )
      iteration_count_6 = iteration_count_5;
    table_value_2 = dword_140404A6C[item_record_offset + 278847551 + state_address[2]];
    if ( table_value_2 == running_total + 1 )
    {
      ++iteration_count_2;
    }
    else if ( table_value_2 != -1 )
    {
      ++iteration_count_6;
    }
    iteration_count_7 = iteration_count_6 + 1;
    if ( state_address[67] <= 0 )
      iteration_count_7 = iteration_count_6;
    table_value_3 = dword_140404A6C[item_record_offset + 278847551 + state_address[3]];
    if ( table_value_3 == running_total + 2 )
    {
      ++iteration_count_2;
    }
    else if ( table_value_3 != -1 )
    {
      ++iteration_count_7;
    }
    iteration_count_8 = iteration_count_7 + 1;
    if ( state_address[68] <= 0 )
      iteration_count_8 = iteration_count_7;
    table_value_4 = dword_140404A6C[item_record_offset + 278847551 + state_address[4]];
    if ( table_value_4 == running_total + 3 )
    {
      ++iteration_count_2;
    }
    else if ( table_value_4 != -1 )
    {
      ++iteration_count_8;
    }
    iteration_count_9 = iteration_count_8 + 1;
    if ( state_address[69] <= 0 )
      iteration_count_9 = iteration_count_8;
    table_value_5 = dword_140404A6C[item_record_offset + 278847551 + state_address[5]];
    if ( table_value_5 == running_total + 4 )
    {
      ++iteration_count_2;
    }
    else if ( table_value_5 != -1 )
    {
      ++iteration_count_9;
    }
    iteration_count_10 = iteration_count_9 + 1;
    if ( state_address[70] <= 0 )
      iteration_count_10 = iteration_count_9;
    table_value_6 = dword_140404A6C[item_record_offset + 278847551 + state_address[6]];
    if ( table_value_6 == running_total + 5 )
    {
      ++iteration_count_2;
    }
    else if ( table_value_6 != -1 )
    {
      ++iteration_count_10;
    }
    iteration_count_11 = iteration_count_10 + 1;
    if ( state_address[71] <= 0 )
      iteration_count_11 = iteration_count_10;
    table_value_7 = dword_140404A6C[item_record_offset + 278847551 + state_address[7]];
    if ( table_value_7 == running_total + 6 )
    {
      ++iteration_count_2;
    }
    else if ( table_value_7 != -1 )
    {
      ++iteration_count_11;
    }
    iteration_count_12 = iteration_count_11 + 1;
    if ( state_address[72] <= 0 )
      iteration_count_12 = iteration_count_11;
    table_value_8 = dword_140404A6C[item_record_offset + 278847551 + state_address[8]];
    if ( table_value_8 == running_total + 7 )
    {
      ++iteration_count_2;
    }
    else if ( table_value_8 != -1 )
    {
      ++iteration_count_12;
    }
    iteration_count_13 = iteration_count_12 + 1;
    if ( state_address[73] <= 0 )
      iteration_count_13 = iteration_count_12;
    table_value_9 = dword_140404A6C[item_record_offset + 278847551 + state_address[9]];
    if ( table_value_9 == running_total + 8 )
    {
      ++iteration_count_2;
    }
    else if ( table_value_9 != -1 )
    {
      ++iteration_count_13;
    }
    iteration_count_14 = iteration_count_13 + 1;
    if ( state_address[74] <= 0 )
      iteration_count_14 = iteration_count_13;
    table_value_10 = dword_140404A6C[item_record_offset + 278847551 + state_address[10]];
    if ( table_value_10 == running_total + 9 )
    {
      ++iteration_count_2;
    }
    else if ( table_value_10 != -1 )
    {
      ++iteration_count_14;
    }
    iteration_count = iteration_count_14 + 1;
    if ( state_address[75] <= 0 )
      iteration_count = iteration_count_14;
    table_value_11 = dword_140404A6C[item_record_offset + 278847551 + state_address[11]];
    if ( table_value_11 == running_total + 10 )
    {
      ++iteration_count_2;
    }
    else if ( table_value_11 != -1 )
    {
      ++iteration_count;
    }
    running_total += 13;
    state_address += 13;
  }
  while ( running_total - 2 < 26 );
  if ( iteration_count <= 0 )
    return 1.0;
  else
    return (float)iteration_count_2 / (float)iteration_count;
}

//----- (00000001400C5C00) ----------------------------------------------------
__int64            sub_1400C5C00(int a1)
{
  __int64 input_value;
  __int64 item_record_offset;
  unsigned int *state_address;
  _BYTE *byte_cursor;
  char input_byte;
  __int64 element_index;
  __int64 scaled_index;
  signed int iteration_count;
  int integer_sum;
  int element_index_2;
  int remaining_count;
  __int64 remaining_count_2;
  int remaining_count_3;
  __int64 remaining_count_4;
  __int64 element_index_3;
  __int64 iteration_count_2;
  char toupper_result;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  __int64 remaining_count_5;
  __int64 scaled_index_4;
  __int64 lookup_index;
  __int64 cached_scaled_index;
  __int64 scaled_index_5;
  __int64 table_value;
  __int64 table_value_2;
  __int64 table_value_3;
  __int64 remaining_count_6;
  __int64 table_value_4;
  __int64 table_value_5;
  __int64 table_value_6;
  __int64 table_value_7;
  __int64 table_value_8;
  __int64 table_value_9;
  __int64 table_value_10;
  __int64 table_value_11;
  __int64 table_value_12;
  __int64 table_value_13;
  __int64 table_value_14;
  __int64 table_value_15;
  __int64 table_value_16;
  __int64 table_value_17;
  __int64 table_value_18;
  __int64 table_value_19;
  __int64 table_value_20;
  __int64 record_byte_offset;
  __int64 table_value_21;
  __int64 table_value_22;
  __int64 table_value_23;
  __int64 table_value_24;
  __int64 table_value_25;
  __int64 remaining_amount;
  _BYTE *buffer_cursor;
  unsigned __int8 toupper_result_2;
  __int64 table_value_26;
  __int64 cached_scaled_index_2;
  __int64 element_index_4;
  char *running_total;
       char *literal_text;
  __int64 remaining_count_7;
  char input_byte_2;
  char input_byte_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C5C00[624];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400C5C00 + 0)) /* [rsp+0h] */
#define iteration_count_3 (*(int (*))(void *)(sr_frame_1400C5C00 + 32)) /* [rsp+20h] */
#define saved_element_index (*(int (*))(void *)(sr_frame_1400C5C00 + 36)) /* [rsp+24h] */
#define item (*(int (*))(void *)(sr_frame_1400C5C00 + 40)) /* [rsp+28h] */
#define scaled_index_6 (*(__int64 (*))(void *)(sr_frame_1400C5C00 + 48)) /* [rsp+30h] */
#define input_value_2 (*(__int64 (*))(void *)(sr_frame_1400C5C00 + 56)) /* [rsp+38h] */
#define table_value_27 (*(__int64 (*))(void *)(sr_frame_1400C5C00 + 64)) /* [rsp+40h] */
#define scaled_index_7 (*(__int64 (*))(void *)(sr_frame_1400C5C00 + 72)) /* [rsp+48h] */
#define scaled_index_8 (*(__int64 (*))(void *)(sr_frame_1400C5C00 + 80)) /* [rsp+50h] */
#define scratch_buffer (*(_BYTE (*)[512])(void *)(sr_frame_1400C5C00 + 96)) /* [rsp+60h] */
#define unused_frame_slot_608 (*(__int64 (*))(void *)(sr_frame_1400C5C00 + 608)) /* [rsp+260h] */

  input_value = a1;
  item_record_offset = 1760LL * a1;
  item = a1;
  input_value_2 = a1;
  scaled_index_7 = item_record_offset * 4;
  table_value_27 = (int)dword_140404A6C[item_record_offset + 278847454];
  state_address = &dword_140404A6C[290 * table_value_27 + 273377350];
  byte_cursor = (_BYTE *)(scratch_buffer - (_BYTE *)state_address);
  do
  {
    input_byte = *(_BYTE *)state_address;
    *((_BYTE *)state_address + (_QWORD)byte_cursor) = *(_BYTE *)state_address;
    state_address = (unsigned int *)((char *)state_address + 1);
  }
  while ( input_byte );
  element_index = -1;
  scaled_index_6 = 110 * input_value;
  scaled_index = 1760 * input_value;
  iteration_count = 0;
  scaled_index_8 = scaled_index * 4;
  integer_sum = 0;
  saved_element_index = 0;
  iteration_count_3 = 0;
  element_index_2 = 0;
  LOBYTE(dword_140404A6C[scaled_index + 278847325]) = 0;
  LOBYTE(dword_140404A6C[scaled_index + 278847341]) = 0;
  LOBYTE(dword_140404A6C[scaled_index + 278847357]) = 0;
  LOBYTE(dword_140404A6C[scaled_index + 278847373]) = 0;
  LOBYTE(dword_140404A6C[scaled_index + 278847389]) = 0;
  LOBYTE(dword_140404A6C[scaled_index + 278847405]) = 0;
  LOBYTE(dword_140404A6C[scaled_index + 278847421]) = 0;
  LOBYTE(dword_140404A6C[scaled_index + 278847437]) = 0;
  dword_140404A6C[item_record_offset + 278847584] = 0;
  do
    ++element_index;
  while ( scratch_buffer[element_index] );
  remaining_count = 59;
  if ( (int)element_index < 59 )
    remaining_count = element_index;
  remaining_count_2 = remaining_count;
  if ( remaining_count > 30LL )
  {
    do
    {
      if ( scratch_buffer[remaining_count_2] == 32 )
        break;
      --remaining_count;
      --remaining_count_2;
    }
    while ( remaining_count_2 > 30 );
  }
  remaining_count_3 = element_index - 1;
  remaining_count_4 = (int)element_index - 1LL;
  element_index_3 = 0;
  iteration_count_2 = 0;
  do
  {
    if ( !scratch_buffer[element_index_3] )
      break;
    toupper_result = toupper((char)scratch_buffer[element_index_3]);
    element_index_2 = saved_element_index;
    scaled_index_2 = item_record_offset * 4 + iteration_count_2++;
    integer_sum = ++iteration_count_3;
    *((_BYTE *)&g_182BBC7E0 + scaled_index_2) = toupper_result;
    if ( integer_sum > remaining_count )
    {
      ++element_index_2;
      scaled_index_3 = item_record_offset * 4 + iteration_count_2;
      saved_element_index = element_index_2;
      remaining_count = 59;
      item_record_offset += 16;
      integer_sum = 0;
      iteration_count_2 = 0;
      iteration_count_3 = 0;
      *((_BYTE *)&g_182BBC7E0 + scaled_index_3) = 0;
      remaining_count_5 = 59;
      if ( remaining_count_3 >= 59 || (remaining_count = remaining_count_3, remaining_count_5 = remaining_count_4, remaining_count_4 > 30) )
      {
        do
        {
          if ( scratch_buffer[element_index_3 + 1 + remaining_count_5] == 32 )
            break;
          --remaining_count;
          --remaining_count_5;
        }
        while ( remaining_count_5 > 30 );
      }
    }
    --remaining_count_3;
    ++element_index_3;
    --remaining_count_4;
  }
  while ( element_index_3 < 256 );
  scaled_index_4 = 1760 * input_value_2;
  lookup_index = scaled_index_6;
  cached_scaled_index = scaled_index_7;
  *((_BYTE *)&dword_140404A6C[16 * (scaled_index_6 + element_index_2) + 278847325] + integer_sum) = 0;
  scaled_index_5 = 290 * table_value_27;
  dword_140404A6C[scaled_index_4 + 278847455] = dword_140404A6C[290 * table_value_27 + 273377607];
  dword_140404A6C[scaled_index_4 + 278847456] = dword_140404A6C[scaled_index_5 + 273377608];
  dword_140404A6C[scaled_index_4 + 278847457] = dword_140404A6C[scaled_index_5 + 273377609];
  dword_140404A6C[scaled_index_4 + 278847458] = dword_140404A6C[scaled_index_5 + 273377610];
  dword_140404A6C[scaled_index_4 + 278847459] = dword_140404A6C[scaled_index_5 + 273377611];
  dword_140404A6C[scaled_index_4 + 278847460] = dword_140404A6C[scaled_index_5 + 273377612];
  dword_140404A6C[scaled_index_4 + 278847461] = dword_140404A6C[scaled_index_5 + 273377613];
  dword_140404A6C[scaled_index_4 + 278847462] = dword_140404A6C[scaled_index_5 + 273377614];
  dword_140404A6C[scaled_index_4 + 278847463] = dword_140404A6C[scaled_index_5 + 273377615];
  dword_140404A6C[scaled_index_4 + 278847464] = dword_140404A6C[scaled_index_5 + 273377616];
  dword_140404A6C[scaled_index_4 + 278847465] = dword_140404A6C[scaled_index_5 + 273377617];
  dword_140404A6C[scaled_index_4 + 278847466] = dword_140404A6C[scaled_index_5 + 273377618];
  dword_140404A6C[scaled_index_4 + 278847467] = dword_140404A6C[scaled_index_5 + 273377619];
  dword_140404A6C[scaled_index_4 + 278847468] = dword_140404A6C[scaled_index_5 + 273377620];
  dword_140404A6C[scaled_index_4 + 278847469] = dword_140404A6C[scaled_index_5 + 273377621];
  dword_140404A6C[scaled_index_4 + 278847470] = dword_140404A6C[scaled_index_5 + 273377622];
  dword_140404A6C[scaled_index_4 + 278847471] = dword_140404A6C[scaled_index_5 + 273377623];
  dword_140404A6C[scaled_index_4 + 278847472] = dword_140404A6C[scaled_index_5 + 273377624];
  dword_140404A6C[scaled_index_4 + 278847473] = dword_140404A6C[scaled_index_5 + 273377625];
  dword_140404A6C[scaled_index_4 + 278847474] = dword_140404A6C[scaled_index_5 + 273377626];
  dword_140404A6C[scaled_index_4 + 278847475] = dword_140404A6C[scaled_index_5 + 273377627];
  dword_140404A6C[scaled_index_4 + 278847476] = dword_140404A6C[scaled_index_5 + 273377628];
  dword_140404A6C[scaled_index_4 + 278847477] = dword_140404A6C[scaled_index_5 + 273377629];
  dword_140404A6C[scaled_index_4 + 278847478] = dword_140404A6C[scaled_index_5 + 273377630];
  dword_140404A6C[scaled_index_4 + 278847479] = dword_140404A6C[scaled_index_5 + 273377631];
  dword_140404A6C[scaled_index_4 + 278847480] = dword_140404A6C[scaled_index_5 + 273377632];
  *(unsigned int *)((char *)&g_182BBCBE8 + cached_scaled_index) = -1;
  dword_140404A6C[scaled_index_4 + 278847487 + (int)dword_140404A6C[scaled_index_4 + 278847455]] = 0;
  table_value = scaled_index_4 + (int)dword_140404A6C[scaled_index_4 + 278847456];
  dword_140404A6C[scaled_index_4 + 278847519] = 0;
  dword_140404A6C[scaled_index_4 + 278847551] = -1;
  dword_140404A6C[table_value + 278847487] = 1;
  table_value_2 = scaled_index_4 + (int)dword_140404A6C[scaled_index_4 + 278847457];
  dword_140404A6C[scaled_index_4 + 278847520] = 0;
  dword_140404A6C[scaled_index_4 + 278847552] = -1;
  dword_140404A6C[table_value_2 + 278847487] = 2;
  table_value_3 = scaled_index_4 + (int)dword_140404A6C[scaled_index_4 + 278847458];
  dword_140404A6C[scaled_index_4 + 278847521] = 0;
  dword_140404A6C[scaled_index_4 + 278847553] = -1;
  dword_140404A6C[table_value_3 + 278847487] = 3;
  remaining_count_6 = 8;
  table_value_4 = scaled_index_4 + (int)dword_140404A6C[scaled_index_4 + 278847459];
  dword_140404A6C[scaled_index_4 + 278847522] = 0;
  dword_140404A6C[scaled_index_4 + 278847554] = -1;
  dword_140404A6C[table_value_4 + 278847487] = 4;
  table_value_5 = scaled_index_4 + (int)dword_140404A6C[scaled_index_4 + 278847460];
  dword_140404A6C[scaled_index_4 + 278847523] = 0;
  dword_140404A6C[scaled_index_4 + 278847555] = -1;
  dword_140404A6C[table_value_5 + 278847487] = 5;
  table_value_6 = scaled_index_4 + (int)dword_140404A6C[scaled_index_4 + 278847461];
  dword_140404A6C[scaled_index_4 + 278847524] = 0;
  dword_140404A6C[scaled_index_4 + 278847556] = -1;
  dword_140404A6C[table_value_6 + 278847487] = 6;
  table_value_7 = scaled_index_4 + (int)dword_140404A6C[scaled_index_4 + 278847462];
  dword_140404A6C[scaled_index_4 + 278847525] = 0;
  dword_140404A6C[scaled_index_4 + 278847557] = -1;
  dword_140404A6C[table_value_7 + 278847487] = 7;
  table_value_8 = scaled_index_4 + (int)dword_140404A6C[scaled_index_4 + 278847463];
  dword_140404A6C[scaled_index_4 + 278847526] = 0;
  dword_140404A6C[scaled_index_4 + 278847558] = -1;
  dword_140404A6C[table_value_8 + 278847487] = 8;
  table_value_9 = scaled_index_4 + (int)dword_140404A6C[scaled_index_4 + 278847464];
  dword_140404A6C[scaled_index_4 + 278847527] = 0;
  dword_140404A6C[scaled_index_4 + 278847559] = -1;
  dword_140404A6C[table_value_9 + 278847487] = 9;
  table_value_10 = scaled_index_4 + (int)dword_140404A6C[scaled_index_4 + 278847465];
  dword_140404A6C[scaled_index_4 + 278847528] = 0;
  dword_140404A6C[scaled_index_4 + 278847560] = -1;
  dword_140404A6C[table_value_10 + 278847487] = 10;
  table_value_11 = scaled_index_4 + (int)dword_140404A6C[scaled_index_4 + 278847466];
  dword_140404A6C[scaled_index_4 + 278847529] = 0;
  dword_140404A6C[scaled_index_4 + 278847561] = -1;
  dword_140404A6C[table_value_11 + 278847487] = 11;
  table_value_12 = scaled_index_4 + (int)dword_140404A6C[scaled_index_4 + 278847467];
  dword_140404A6C[scaled_index_4 + 278847530] = 0;
  dword_140404A6C[scaled_index_4 + 278847562] = -1;
  dword_140404A6C[table_value_12 + 278847487] = 12;
  table_value_13 = scaled_index_4 + (int)dword_140404A6C[scaled_index_4 + 278847468];
  dword_140404A6C[scaled_index_4 + 278847531] = 0;
  dword_140404A6C[scaled_index_4 + 278847563] = -1;
  dword_140404A6C[table_value_13 + 278847487] = 13;
  table_value_14 = scaled_index_4 + (int)dword_140404A6C[scaled_index_4 + 278847469];
  dword_140404A6C[scaled_index_4 + 278847532] = 0;
  dword_140404A6C[scaled_index_4 + 278847564] = -1;
  dword_140404A6C[table_value_14 + 278847487] = 14;
  table_value_15 = scaled_index_4 + (int)dword_140404A6C[scaled_index_4 + 278847470];
  dword_140404A6C[scaled_index_4 + 278847533] = 0;
  dword_140404A6C[scaled_index_4 + 278847565] = -1;
  dword_140404A6C[table_value_15 + 278847487] = 15;
  table_value_16 = scaled_index_4 + (int)dword_140404A6C[scaled_index_4 + 278847471];
  dword_140404A6C[scaled_index_4 + 278847534] = 0;
  dword_140404A6C[scaled_index_4 + 278847566] = -1;
  dword_140404A6C[table_value_16 + 278847487] = 16;
  table_value_17 = scaled_index_4 + (int)dword_140404A6C[scaled_index_4 + 278847472];
  dword_140404A6C[scaled_index_4 + 278847535] = 0;
  dword_140404A6C[scaled_index_4 + 278847567] = -1;
  dword_140404A6C[table_value_17 + 278847487] = 17;
  table_value_18 = scaled_index_4 + (int)dword_140404A6C[scaled_index_4 + 278847473];
  dword_140404A6C[scaled_index_4 + 278847536] = 0;
  dword_140404A6C[scaled_index_4 + 278847568] = -1;
  dword_140404A6C[table_value_18 + 278847487] = 18;
  table_value_19 = scaled_index_4 + (int)dword_140404A6C[scaled_index_4 + 278847474];
  dword_140404A6C[scaled_index_4 + 278847537] = 0;
  dword_140404A6C[scaled_index_4 + 278847569] = -1;
  dword_140404A6C[table_value_19 + 278847487] = 19;
  table_value_20 = scaled_index_4 + (int)dword_140404A6C[scaled_index_4 + 278847475];
  dword_140404A6C[scaled_index_4 + 278847538] = 0;
  dword_140404A6C[scaled_index_4 + 278847570] = -1;
  record_byte_offset = ((intptr_t)dword_140404A6C - 0x404a6cLL) + cached_scaled_index + 1119602656;
  dword_140404A6C[table_value_20 + 278847487] = 20;
  table_value_21 = scaled_index_4 + (int)dword_140404A6C[scaled_index_4 + 278847476];
  dword_140404A6C[scaled_index_4 + 278847539] = 0;
  dword_140404A6C[scaled_index_4 + 278847571] = -1;
  dword_140404A6C[table_value_21 + 278847487] = 21;
  table_value_22 = scaled_index_4 + (int)dword_140404A6C[scaled_index_4 + 278847477];
  dword_140404A6C[scaled_index_4 + 278847540] = 0;
  dword_140404A6C[scaled_index_4 + 278847572] = -1;
  dword_140404A6C[table_value_22 + 278847487] = 22;
  table_value_23 = scaled_index_4 + (int)dword_140404A6C[scaled_index_4 + 278847478];
  dword_140404A6C[scaled_index_4 + 278847541] = 0;
  dword_140404A6C[scaled_index_4 + 278847573] = -1;
  dword_140404A6C[table_value_23 + 278847487] = 23;
  table_value_24 = scaled_index_4 + (int)dword_140404A6C[scaled_index_4 + 278847479];
  dword_140404A6C[scaled_index_4 + 278847542] = 0;
  dword_140404A6C[scaled_index_4 + 278847574] = -1;
  dword_140404A6C[table_value_24 + 278847487] = 24;
  table_value_25 = scaled_index_4 + (int)dword_140404A6C[scaled_index_4 + 278847480];
  dword_140404A6C[scaled_index_4 + 278847543] = 0;
  dword_140404A6C[scaled_index_4 + 278847575] = -1;
  remaining_amount = -record_byte_offset;
  dword_140404A6C[table_value_25 + 278847487] = 25;
  dword_140404A6C[scaled_index_4 + 278847544] = 0;
  dword_140404A6C[scaled_index_4 + 278847576] = -1;
  do
  {
    buffer_cursor = (_BYTE *)record_byte_offset;
    do
    {
      if ( !*buffer_cursor )
        break;
      toupper_result_2 = toupper((unsigned __int8)*buffer_cursor);
      *buffer_cursor = toupper_result_2;
      if ( (unsigned __int8)(toupper_result_2 - 65) <= 0x19u )
      {
        table_value_26 = scaled_index_4 + (int)dword_140404A6C[scaled_index_4 + 278847390 + toupper_result_2];
        ++dword_140404A6C[table_value_26 + 278847519];
      }
      ++buffer_cursor;
    }
    while ( (__int64)&buffer_cursor[remaining_amount] < 62 );
    remaining_amount -= 64;
    record_byte_offset += 64;
    --remaining_count_6;
  }
  while ( remaining_count_6 );
  cached_scaled_index_2 = scaled_index_8;
  element_index_4 = 0;
  *(_QWORD *)((char *)&g_182BBB4E8 + cached_scaled_index) = 0;
  do
  {
    if ( element_index_4 )
    {
      LOBYTE(dword_140404A6C[16 * (element_index_4 + lookup_index) + 278846114]) = 0;
    }
    else
    {
      running_total = (char *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + cached_scaled_index + 1119597812);
      literal_text = "DECRYPTER     Ctrl-R RESET   Ctrl-P PRINT    Ctrl-X EXIT";
      remaining_count_7 = 31;
      do
      {
        input_byte_2 = *literal_text;
        if ( *literal_text )
          ++literal_text;
        else
          input_byte_2 = 32;
        *running_total = input_byte_2;
        input_byte_3 = *literal_text;
        running_total[2048] = 31;
        if ( input_byte_3 )
          ++literal_text;
        else
          input_byte_3 = 32;
        running_total[1] = input_byte_3;
        running_total[2049] = 31;
        running_total += 2;
        --remaining_count_7;
      }
      while ( remaining_count_7 );
      *((_BYTE *)&g_182BBB530 + cached_scaled_index_2 + 2) = 0;
    }
    ++element_index_4;
  }
  while ( element_index_4 < 24 );
  sub_1400C5750(item);
  do
    sr_item_link_text_line(item, iteration_count++);
  while ( iteration_count < 24 );
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef iteration_count_3
#undef saved_element_index
#undef item
#undef scaled_index_6
#undef input_value_2
#undef table_value_27
#undef scaled_index_7
#undef scaled_index_8
#undef scratch_buffer
#undef unused_frame_slot_608

//----- (00000001400C6580) ----------------------------------------------------
__int64            sub_1400C6580(int a1, __int16 a2)
{
  signed int iteration_count;
  __int64 packed_word_bits;
  __int64 input_value;
  int toupper_result;
  __int64 scaled_index;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  float state_address;
  float weighted_sum;
  int createitem_result;
  int masked_bits;
  __int64 saved_createitem_result;
  __int64 remaining_count;
  __int64 scaled_index_5;
  char *destination_text;
  unsigned int *record_byte_offset;
  __int64 scaled_index_6;
  __int64 table_value;
  unsigned int integer_difference;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C6580[2112];
#define callee_output_word (*(_BYTE (*)[32])(void *)(sr_frame_1400C6580 + 0)) /* [rsp+0h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_1400C6580 + 32)) /* [rsp+20h] */
#define scratch_buffer (*(__m128i (*)[64])(void *)(sr_frame_1400C6580 + 48)) /* [rsp+30h] */
#define source_text (*(char (*)[1024])(void *)(sr_frame_1400C6580 + 1072)) /* [rsp+430h] */
#define unused_frame_slot_2096 (*(__int64 (*))(void *)(sr_frame_1400C6580 + 2096)) /* [rsp+830h] */

  iteration_count = 0;
  LOBYTE(packed_word_bits) = a2;
  input_value = a1;
  if ( (a2 & 0x100) == 0 )
    goto LABEL_4;
  LODWORD(packed_word_bits) = toupper((unsigned __int8)a2);
  if ( (_DWORD)packed_word_bits == 82 )
  {
    packed_word_bits = 1760 * input_value;
    *(_QWORD *)&dword_140404A6C[packed_word_bits + 278847551] = -1;
    *(_QWORD *)&dword_140404A6C[packed_word_bits + 278847553] = -1;
    *(_QWORD *)&dword_140404A6C[packed_word_bits + 278847555] = -1;
    *(_QWORD *)&dword_140404A6C[packed_word_bits + 278847557] = -1;
    *(_QWORD *)&dword_140404A6C[packed_word_bits + 278847559] = -1;
    *(_QWORD *)&dword_140404A6C[packed_word_bits + 278847561] = -1;
    *(_QWORD *)&dword_140404A6C[packed_word_bits + 278847563] = -1;
    *(_QWORD *)&dword_140404A6C[packed_word_bits + 278847565] = -1;
    *(_QWORD *)&dword_140404A6C[packed_word_bits + 278847567] = -1;
    *(_QWORD *)&dword_140404A6C[packed_word_bits + 278847569] = -1;
    *(_QWORD *)&dword_140404A6C[packed_word_bits + 278847571] = -1;
    *(_QWORD *)&dword_140404A6C[packed_word_bits + 278847573] = -1;
    *(_QWORD *)&dword_140404A6C[packed_word_bits + 278847575] = -1;
    LOBYTE(packed_word_bits) = 0;
LABEL_4:
    toupper_result = toupper((unsigned __int8)packed_word_bits);
    if ( toupper_result == 10 )
    {
      scaled_index = 1760 * input_value;
      if ( dword_140404A6C[1760 * input_value + 278847584] )
      {
        LOBYTE(dword_140404A6C[scaled_index + 278846130]) = 0;
        sr_item_link_text_line(a1, 1);
        dword_140404A6C[scaled_index + 278847584] = 0;
      }
      else
      {
        *(_OWORD *)&dword_140404A6C[scaled_index + 278846130] = xmmword_1402760E8;
        LOWORD(dword_140404A6C[scaled_index + 278846134]) = 11822;
        BYTE2(dword_140404A6C[scaled_index + 278846134]) = 0;
        sr_item_link_text_line(a1, 1);
        dword_140404A6C[scaled_index + 278847584] = (int)(float)((float)((float)(1.0 - sub_1400C58E0(a1)) * 600.0) + 20.0);
      }
    }
    scaled_index_6 = 1760 * input_value;
    if ( (int)dword_140404A6C[1760 * input_value + 278847584] <= 0 )
    {
      table_value = (int)dword_140404A6C[scaled_index_6 + 278847583];
      integer_difference = toupper_result - 65;
      if ( (_DWORD)table_value == -1 )
      {
        if ( integer_difference <= 0x19 )
          dword_140404A6C[scaled_index_6 + 278847583] = integer_difference;
      }
      else
      {
        if ( integer_difference > 0x19 )
        {
          if ( toupper_result == 32 )
            dword_140404A6C[1760 * input_value + 278847551 + table_value] = -1;
        }
        else
        {
          dword_140404A6C[1760 * input_value + 278847551 + table_value] = integer_difference;
        }
        dword_140404A6C[scaled_index_6 + 278847583] = -1;
      }
      sub_1400C5750(a1);
    }
    return 0; /* compatibility result discarded by all reviewed callers */
  }
  if ( (_DWORD)packed_word_bits != 80 )
  {
    if ( (_DWORD)packed_word_bits == 88 )
    {
      dword_140404A6C[1760 * input_value + 278847324] = 0;
      record_byte_offset = &dword_140404A6C[1760 * input_value + 278846114];
      do
      {
        *(_BYTE *)record_byte_offset = 0;
        sr_item_link_text_line(a1, iteration_count++);
        record_byte_offset += 16;
      }
      while ( iteration_count < 24 );
      return 0; /* compatibility result discarded by all reviewed callers */
    }
    goto LABEL_4;
  }
  scaled_index_2 = 1760 * input_value;
  scaled_index_3 = (int)dword_140404A6C[1760 * input_value + 278847323];
  if ( (_DWORD)scaled_index_3 != -1 )
  {
    scaled_index_4 = 5 * scaled_index_3;
    if ( (int)dword_140404A6C[5 * scaled_index_3 + 188872241] < 4 )
    {
      state_address = (float)(*(float *)&dword_140404A6C[scaled_index_2 + 278845936] * 0.5) + *(float *)&dword_140404A6C[scaled_index_2 + 278845918];
      float_buffer[0] = (float)(*(float *)&dword_140404A6C[scaled_index_2 + 278845934] * 0.5) + *(float *)&dword_140404A6C[scaled_index_2 + 278845916];
      weighted_sum = *(float *)&dword_140404A6C[scaled_index_2 + 278845935];
      float_buffer[2] = state_address;
      float_buffer[1] = (float)(weighted_sum * 0.5) + *(float *)&dword_140404A6C[scaled_index_2 + 278845917];
      createitem_result = sr_CreateItem(34, float_buffer, nullptr, (float *)&dword_140404A6C[scaled_index_2 + 278845934]);
      masked_bits = dword_140404A6C[scaled_index_2 + 278846112];
      saved_createitem_result = createitem_result;
      remaining_count = 23;
      scaled_index_5 = 110 * input_value;
      SR_VEC_LANES(128, scratch_buffer[0], i8)[0] = 0;
      do
      {
        crt_sprintf(source_text, "%s\n", (     char *)&dword_140404A6C[16 * (scaled_index_5 + masked_bits) + 278846114]);
        destination_text = &callee_output_word[47];
        while ( *++destination_text != 0 )
          ;
        strcpy(destination_text, source_text);
        masked_bits = ((_BYTE)masked_bits + 1) & 0x1F;
        --remaining_count;
      }
      while ( remaining_count );
      sub_1400584B0(saved_createitem_result, scratch_buffer);
      ++dword_140404A6C[scaled_index_4 + 188872241];
      dword_140404A6C[1760 * saved_createitem_result + 278845895] = 1;
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef callee_output_word
#undef float_buffer
#undef scratch_buffer
#undef source_text
#undef unused_frame_slot_2096

//----- (00000001400C6980) ----------------------------------------------------
__int64            sub_1400C6980(int a1)
{
  __int64 item_record_offset;
  __int64 input_value;
  __int64 result;
  int iteration_count;
  int rand_result;
  __int64 scaled_index;
  __int64 table_value;

  item_record_offset = 1760LL * a1;
  input_value = a1;
  result = dword_140404A6C[item_record_offset + 278847584];
  if ( (int)result > 0 )
  {
    result = (unsigned int)(result - 1);
    dword_140404A6C[item_record_offset + 278847584] = result;
    if ( !(_DWORD)result )
    {
      iteration_count = 0;
      rand_result = rand() % 26;
      scaled_index = 1760 * input_value;
      do
      {
        table_value = scaled_index + (int)dword_140404A6C[scaled_index + 278847455 + rand_result];
        if ( dword_140404A6C[table_value + 278847519] && dword_140404A6C[table_value + 278847551] == -1 )
          break;
        ++iteration_count;
        rand_result = rand() % 26;
      }
      while ( iteration_count < 1000 );
      dword_140404A6C[scaled_index + 278847551 + (int)dword_140404A6C[scaled_index + 278847455 + rand_result]] = rand_result;
      sub_1400C5750(a1);
      LOBYTE(dword_140404A6C[item_record_offset + 278846130]) = 0;
      return sr_item_link_text_line(a1, 1);
    }
  }
  return result;
}

//----- (00000001400C6D90) ----------------------------------------------------
int            sub_1400C6D90(int a1, int a2)
{
  __int64 item_record_offset;
  int input_value;
  __int64 input_value_2;
  __int64 iteration_count;
  unsigned int *state_address;
  int iteration_count_2;
  unsigned int *record_byte_offset;
  signed int iteration_count_3;
  unsigned int *record_byte_offset_2;
  __m128i si128;
  int iteration_count_4;
  _BYTE *state_address_2;
  __int64 scaled_index;
  __int64 table_value;
  unsigned int scaled_index_2;
  unsigned int *state_address_3;
  __int64 scaled_index_3;
  char *state_address_4;
  int *buffer_cursor;
  char *destination_text;
  bool comparison_result;
  int loaded_word;
  _WORD *record_pointer;
  _WORD *record_pointer_2;
  __int64 scaled_index_4;
  unsigned int *state_address_5;
  char input_byte;
  __int64 iteration_count_5;
  unsigned int *state_address_6;
  char input_byte_2;
  __int64 shifted_bits;
  __m128i loaded_vector;
  __int64 table_value_2;
  unsigned int *state_address_7;

  item_record_offset = 1760LL * a1;
  input_value = a2;
  input_value_2 = a1;
  iteration_count = -1;
  LODWORD(state_address) = dword_140404A6C[item_record_offset + 278847324];
  if ( (_DWORD)state_address == 1 )
  {
    dword_140404A6C[item_record_offset + 278846113] = -1;
    sub_1400C6580(a1, a2);
    LODWORD(state_address) = dword_140404A6C[item_record_offset + 278847324];
    if ( (_DWORD)state_address == 1 )
      return (int)state_address;
    input_value = 8;
  }
  if ( (_DWORD)state_address == 2 )
  {
    dword_140404A6C[item_record_offset + 278846113] = -1;
    sub_1400C7450(a1, input_value);
    LODWORD(state_address) = dword_140404A6C[item_record_offset + 278847324];
    if ( (_DWORD)state_address == 2 )
      return (int)state_address;
    input_value = 8;
  }
  iteration_count_2 = 1;
  if ( (_DWORD)state_address == 3 )
  {
    dword_140404A6C[item_record_offset + 278846113] = -1;
    if ( (input_value & 0x100) != 0 )
    {
      LODWORD(state_address) = toupper((unsigned __int8)input_value);
      if ( (_DWORD)state_address == 88 )
      {
        dword_140404A6C[item_record_offset + 278847324] = 0;
        record_byte_offset = &dword_140404A6C[item_record_offset + 278846114];
        iteration_count_3 = 0;
        record_byte_offset_2 = &dword_140404A6C[item_record_offset + 278846626];
        do
        {
          si128 = _mm_load_si128((     __m128i *)&xmmword_140279200);
          *(_BYTE *)record_byte_offset = 0;
          _mm_storeu_si128((__m128i *)(void *)record_byte_offset_2, si128);
          _mm_storeu_si128((__m128i *)(void *)(record_byte_offset_2 + 4), si128);
          _mm_storeu_si128((__m128i *)(void *)(record_byte_offset_2 + 8), si128);
          *((_QWORD *)record_byte_offset_2 + 6) = SR_VEC_LANES(128, si128, i64)[0];
          record_byte_offset_2[14] = SR_VEC_LANES(128, si128, i32)[0];
          *((_WORD *)record_byte_offset_2 + 30) = SR_VEC_LANES(128, si128, i16)[0];
          *((_BYTE *)record_byte_offset_2 + 62) = SR_VEC_LANES(128, si128, i8)[0];
          LODWORD(state_address) = sr_item_link_text_line(a1, iteration_count_3++);
          record_byte_offset_2 += 16;
          record_byte_offset += 16;
        }
        while ( iteration_count_3 < 24 );
      }
    }
    else
    {
      switch ( input_value )
      {
        case 19:
          if ( dword_140404A6C[item_record_offset + 278847330] != 2 )
            dword_140404A6C[item_record_offset + 278847330] = 0;
          break;
        case 18:
          if ( dword_140404A6C[item_record_offset + 278847330] )
            dword_140404A6C[item_record_offset + 278847330] = 2;
          break;
        case 17:
          if ( dword_140404A6C[item_record_offset + 278847330] != 3 )
            dword_140404A6C[item_record_offset + 278847330] = 1;
          break;
        default:
          if ( input_value == 16 && dword_140404A6C[item_record_offset + 278847330] != 1 )
            dword_140404A6C[item_record_offset + 278847330] = 3;
          break;
      }
    }
    if ( dword_140404A6C[item_record_offset + 278847324] == 3 )
      return (int)state_address;
    LOBYTE(input_value) = 8;
  }
  iteration_count_4 = 0;
  state_address_2 = (char *)&dword_140404A6C[item_record_offset + 278847154] + 1;
  while ( *(state_address_2 - 1) )
  {
    if ( !*state_address_2 )
    {
      ++iteration_count_4;
      break;
    }
    state_address_2 += 2;
    iteration_count_4 += 2;
    if ( (intptr_t)((uintptr_t)(state_address_2) - (uintptr_t)(((char *)&dword_140404A6C[item_record_offset + 278847154] + 1))) >= 62 )
      break;
  }
  if ( (int)dword_140404A6C[item_record_offset + 278847244] <= 0 )
  {
    if ( (unsigned __int8)input_value == 10 )
    {
      sub_1400C3E00(a1);
      LODWORD(state_address) = sub_1400C4280(a1);
      LOBYTE(dword_140404A6C[item_record_offset + 278847154]) = 0;
      if ( (int)dword_140404A6C[item_record_offset + 278847244] > 0 || dword_140404A6C[item_record_offset + 278847324] )
        return (int)state_address;
    }
    else if ( (unsigned __int8)input_value == 8 )
    {
      if ( iteration_count_4 > 0 )
        *((_BYTE *)&dword_140404A6C[item_record_offset + 278847153] + iteration_count_4 + 3) = 0;
    }
    else if ( iteration_count_4 < 62 )
    {
      scaled_index = item_record_offset * 4 + iteration_count_4;
      *((_BYTE *)&g_182BBC534 + scaled_index) = input_value;
      *((_BYTE *)&g_182BBC534 + scaled_index + 1) = 0;
    }
    table_value = (int)dword_140404A6C[item_record_offset + 278847170];
    scaled_index_2 = 0;
    if ( (_DWORD)table_value == 2 )
    {
      scaled_index_2 = dword_140404A6C[item_record_offset + 278846098];
    }
    else if ( !(_DWORD)table_value && (int)dword_140404A6C[item_record_offset + 278845906] > 0 )
    {
      scaled_index_2 = dword_140404A6C[1760 * dword_140404A6C[item_record_offset + 278845907] + 278846098];
    }
    state_address_3 = &dword_140404A6C[item_record_offset + 278847138];
    crt_sprintf(state_address_3, "%c:\\", (unsigned int)(table_value + 65));
    scaled_index_3 = item_record_offset * 4 + 72 * table_value;
    state_address_4 = (char *)&g_182BBB180 + scaled_index_3;
    if ( *(int *)((char *)&g_182BBC57C + scaled_index_3) >= 1 )
    {
      buffer_cursor = (int *)((char *)&g_182BBC584 + scaled_index_3);
      do
      {
        destination_text = (char *)state_address_3 - 1;
        do
          comparison_result = *++destination_text == 0;
        while ( !comparison_result );
        strcpy(destination_text, (     char *)&dword_140404A6C[2570 * scaled_index_2 + 275753048 + 4 * *buffer_cursor]);
        loaded_word = *((_DWORD *)state_address_4 + 1279);
        if ( iteration_count_2 < loaded_word )
        {
          record_pointer = (_WORD *)((char *)state_address_3 - 1);
          do
          {
            comparison_result = *((_BYTE *)record_pointer + 1) == 0;
            record_pointer = (_WORD *)((char *)record_pointer + 1);
          }
          while ( !comparison_result );
          *record_pointer = 92;
          loaded_word = *((_DWORD *)state_address_4 + 1279);
        }
        ++iteration_count_2;
        ++buffer_cursor;
      }
      while ( iteration_count_2 <= loaded_word );
    }
    record_pointer_2 = (_WORD *)((char *)state_address_3 - 1);
    do
    {
      comparison_result = *((_BYTE *)record_pointer_2 + 1) == 0;
      record_pointer_2 = (_WORD *)((char *)record_pointer_2 + 1);
    }
    while ( !comparison_result );
    *record_pointer_2 = 62;
    scaled_index_4 = 110 * input_value_2;
    state_address_5 = &dword_140404A6C[16 * (110 * input_value_2 + (int)dword_140404A6C[item_record_offset + 278846111]) + 278846114];
    do
    {
      input_byte = *(_BYTE *)state_address_3;
      state_address_3 = (unsigned int *)((char *)state_address_3 + 1);
      *(_BYTE *)state_address_5 = input_byte;
      state_address_5 = (unsigned int *)((char *)state_address_5 + 1);
    }
    while ( input_byte );
    do
      ++iteration_count;
    while ( *((_BYTE *)&dword_140404A6C[16 * scaled_index_4 + 278846114 + 16 * (int)dword_140404A6C[item_record_offset + 278846111]] + iteration_count) );
    iteration_count_5 = (int)iteration_count;
    if ( (int)iteration_count < 62LL )
    {
      state_address_6 = &dword_140404A6C[item_record_offset + 278847154];
      do
      {
        input_byte_2 = *(_BYTE *)state_address_6;
        if ( !*(_BYTE *)state_address_6 )
          break;
        state_address_6 = (unsigned int *)((char *)state_address_6 + 1);
        LODWORD(iteration_count) = iteration_count + 1;
        shifted_bits = iteration_count_5 + ((scaled_index_4 + (int)dword_140404A6C[item_record_offset + 278846111]) << 6);
        ++iteration_count_5;
        *((_BYTE *)&g_182BBB4F4 + shifted_bits) = input_byte_2;
      }
      while ( iteration_count_5 < 62 );
    }
    loaded_vector = _mm_load_si128((     __m128i *)&xmmword_140279200);
    *((_BYTE *)&dword_140404A6C[16 * scaled_index_4 + 278846114 + 16 * (int)dword_140404A6C[item_record_offset + 278846111]] + (int)iteration_count) = 0;
    table_value_2 = (int)dword_140404A6C[item_record_offset + 278846111];
    dword_140404A6C[item_record_offset + 278846113] = iteration_count + (dword_140404A6C[item_record_offset + 278846111] << 6);
    state_address_7 = &dword_140404A6C[16 * (scaled_index_4 + table_value_2) + 278846626];
    _mm_storeu_si128((__m128i *)(void *)state_address_7, loaded_vector);
    _mm_storeu_si128((__m128i *)(void *)(state_address_7 + 4), loaded_vector);
    _mm_storeu_si128((__m128i *)(void *)(state_address_7 + 8), loaded_vector);
    *((_QWORD *)state_address_7 + 6) = SR_VEC_LANES(128, loaded_vector, i64)[0];
    state_address_7[14] = SR_VEC_LANES(128, loaded_vector, i32)[0];
    *((_WORD *)state_address_7 + 30) = SR_VEC_LANES(128, loaded_vector, i16)[0];
    *((_BYTE *)state_address_7 + 62) = SR_VEC_LANES(128, loaded_vector, i8)[0];
    sr_item_link_text_line(a1, dword_140404A6C[item_record_offset + 278846111]);
    state_address = &g_182BBB180;
    dword_140404A6C[item_record_offset + 278846101] = 0;
  }
  else
  {
    state_address = (unsigned int *)(int)dword_140404A6C[item_record_offset + 278847258];
    if ( (int)state_address < 64 )
    {
      dword_140404A6C[(_QWORD)&state_address[440 * input_value_2] + 278847259] = (unsigned __int8)input_value;
      ++dword_140404A6C[item_record_offset + 278847258];
    }
  }
  return (int)state_address;
}

//----- (00000001400C72B0) ----------------------------------------------------
__int64            sub_1400C72B0(int a1)
{
  __int64 item;
  __int64 item_record_offset;
  signed int element_index;
  char *destination_text;
  __m128i si128;
  unsigned int *cached_si128;
  __int64 result;
  bool comparison_result;
  unsigned int cached_game_tick;
  __int64 shifted_bits;

  item = a1;
  item_record_offset = 1760LL * a1;
  *(_QWORD *)&dword_140404A6C[item_record_offset + 278846111] = 0;
  crt_memset((void *)(uintptr_t)(&dword_140404A6C[item_record_offset + 278847325]), 0, 0x420u);
  dword_140404A6C[item_record_offset + 278847328] = -1;
  element_index = 0;
  destination_text = (char *)&dword_140404A6C[1760 * item + 278846114];
  do
  {
    *destination_text = 0;
    if ( !element_index )
      strcpy(destination_text, "CONNECTING...");
    si128 = _mm_load_si128((     __m128i *)&xmmword_140279200);
    cached_si128 = &dword_140404A6C[16 * (110 * item + (unsigned int)element_index) + 278846626];
    *(__m128i_u *)cached_si128 = si128;
    *((__m128i *)cached_si128 + 1) = si128;
    *((__m128i *)cached_si128 + 2) = si128;
    *((_QWORD *)cached_si128 + 6) = SR_VEC_LANES(128, si128, i64)[0];
    cached_si128[14] = SR_VEC_LANES(128, si128, i32)[0];
    *((_WORD *)cached_si128 + 30) = SR_VEC_LANES(128, si128, i16)[0];
    *((_BYTE *)cached_si128 + 62) = SR_VEC_LANES(128, si128, i8)[0];
    result = sr_item_link_text_line(item, element_index++);
    destination_text += 64;
  }
  while ( element_index < 24 );
  dword_140404A6C[item_record_offset + 278847326] = 256;
  comparison_result = game_connected == 0;
  dword_140404A6C[item_record_offset + 278847325] = 0;
  if ( !comparison_result )
  {
    cached_game_tick = game_tick;
    shifted_bits = (__int64)(int)world_event_count++ << 7;
    HIWORD(world_event_count) = 0;
    *(unsigned int *)((char *)&g_1873DE460 + shifted_bits) = 19;
    *(unsigned int *)((char *)&g_1873DE464 + shifted_bits) = cached_game_tick;
    result = g_183E936F0;
    *(unsigned int *)((char *)&g_1873DE480 + shifted_bits) = g_183E936F0;
    *(unsigned int *)((char *)&g_1873DE484 + shifted_bits) = item;
    *(unsigned int *)((char *)&g_1873DE490 + shifted_bits) = 1065353216;
    *(unsigned int *)((char *)&g_1873DE494 + shifted_bits) = 1065353216;
  }
  return result;
}

//----- (00000001400C7450) ----------------------------------------------------
void            sub_1400C7450(int a1, int a2)
{
  __int64 item_record_offset;
  __int64 input_value;
  __int64 table_value;
  __int64 table_value_2;
  signed int iteration_count;
  unsigned int *record_byte_offset;
  __int64 record_byte_offset_2;
  __m128i loaded_vector;
  unsigned int *state_address;
  unsigned int table_value_3;
  int table_value_4;
  int table_value_5;
  unsigned int table_value_6;
  signed int table_value_7;
  signed int iteration_count_2;
  unsigned int table_value_8;
  __int64 running_total;
  __int64 scaled_index;
  signed int iteration_count_3;
  unsigned int *record_byte_offset_3;
  __int64 record_byte_offset_4;
  __m128i loaded_vector_2;
  int table_value_9;
  int table_value_10;
  bool comparison_result;
  int table_value_11;
  signed int table_value_12;
  unsigned int loaded_word;
  signed int iteration_count_4;
  unsigned int *record_byte_offset_5;
  __int64 cached_si128;
  __m128i si128;

  item_record_offset = 1760LL * a1;
  input_value = a1;
  if ( (int)dword_140404A6C[item_record_offset + 278847326] > 0 )
    return;
  table_value = (int)dword_140404A6C[item_record_offset + 278847323];
  if ( (_DWORD)table_value == -1 || (table_value_2 = (int)dword_140404A6C[item_record_offset + 278846098], (_DWORD)table_value_2 == -1) )
  {
    iteration_count_4 = 0;
    dword_140404A6C[item_record_offset + 278847324] = 0;
    record_byte_offset_5 = &dword_140404A6C[item_record_offset + 278846114];
    cached_si128 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + item_record_offset * 4 + 1119599860;
    do
    {
      si128 = _mm_load_si128((     __m128i *)&xmmword_140279200);
      *(_BYTE *)record_byte_offset_5 = 0;
      *(__m128i_u *)cached_si128 = si128;
      *(__m128i_u *)(cached_si128 + 16) = si128;
      *(__m128i_u *)(cached_si128 + 32) = si128;
      *(_QWORD *)(cached_si128 + 48) = SR_VEC_LANES(128, si128, i64)[0];
      *(_DWORD *)(cached_si128 + 56) = SR_VEC_LANES(128, si128, i32)[0];
      *(_WORD *)(cached_si128 + 60) = SR_VEC_LANES(128, si128, i16)[0];
      *(_BYTE *)(cached_si128 + 62) = SR_VEC_LANES(128, si128, i8)[0];
      sr_item_link_text_line(a1, iteration_count_4++);
      cached_si128 += 64;
      record_byte_offset_5 += 16;
    }
    while ( iteration_count_4 < 24 );
    return;
  }
  if ( (a2 & 0x100) != 0 )
  {
    if ( toupper((unsigned __int8)a2) == 88 )
    {
      iteration_count = 0;
      dword_140404A6C[item_record_offset + 278847324] = 0;
      record_byte_offset = &dword_140404A6C[item_record_offset + 278846114];
      record_byte_offset_2 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + item_record_offset * 4 + 1119599860;
      do
      {
        loaded_vector = _mm_load_si128((     __m128i *)&xmmword_140279200);
        *(_BYTE *)record_byte_offset = 0;
        *(__m128i_u *)record_byte_offset_2 = loaded_vector;
        *(__m128i_u *)(record_byte_offset_2 + 16) = loaded_vector;
        *(__m128i_u *)(record_byte_offset_2 + 32) = loaded_vector;
        *(_QWORD *)(record_byte_offset_2 + 48) = SR_VEC_LANES(128, loaded_vector, i64)[0];
        *(_DWORD *)(record_byte_offset_2 + 56) = SR_VEC_LANES(128, loaded_vector, i32)[0];
        *(_WORD *)(record_byte_offset_2 + 60) = SR_VEC_LANES(128, loaded_vector, i16)[0];
        *(_BYTE *)(record_byte_offset_2 + 62) = SR_VEC_LANES(128, loaded_vector, i8)[0];
        sr_item_link_text_line(a1, iteration_count++);
        record_byte_offset_2 += 64;
        record_byte_offset += 16;
      }
      while ( iteration_count < 24 );
    }
    return;
  }
  state_address = &dword_140404A6C[item_record_offset + 278847327];
  table_value_3 = dword_140404A6C[item_record_offset + 278847327];
  if ( !table_value_3 )
  {
    switch ( a2 )
    {
      case 16:
        table_value_4 = dword_140404A6C[item_record_offset + 278847328];
        if ( table_value_4 > -2 )
          dword_140404A6C[item_record_offset + 278847328] = table_value_4 - 1;
        break;
      case 17:
        table_value_5 = dword_140404A6C[item_record_offset + 278847328];
        if ( table_value_5 < 7 )
          dword_140404A6C[item_record_offset + 278847328] = table_value_5 + 1;
        break;
      case 10:
        table_value_6 = dword_140404A6C[item_record_offset + 278847328];
        if ( table_value_6 > 6 )
        {
          if ( table_value_6 == -1 )
          {
            table_value_7 = 0;
            dword_140404A6C[item_record_offset + 278847332] = 0;
            iteration_count_2 = 0;
            if ( (int)dword_140404A6C[2570 * table_value_2 + 275754072] > 0 )
            {
              table_value_8 = dword_140404A6C[item_record_offset + 278846098];
              running_total = 0;
              do
              {
                if ( dword_140404A6C[2570 * (int)table_value_8 + 275754078 + running_total] == dword_140404A6C[item_record_offset + 278847331] )
                {
                  dword_140404A6C[1760 * input_value + 278847333 + table_value_7] = iteration_count_2;
                  table_value_7 = dword_140404A6C[item_record_offset + 278847332] + 1;
                  dword_140404A6C[item_record_offset + 278847332] = table_value_7;
                  table_value_8 = dword_140404A6C[item_record_offset + 278846098];
                }
                ++iteration_count_2;
                running_total += 6;
              }
              while ( iteration_count_2 < (int)dword_140404A6C[2570 * table_value_8 + 275754072] );
            }
            *state_address = 2;
            dword_140404A6C[item_record_offset + 278847329] = 0;
          }
          else
          {
            if ( table_value_6 != -2 )
            {
              iteration_count_3 = 0;
              dword_140404A6C[item_record_offset + 278847324] = 0;
              record_byte_offset_3 = &dword_140404A6C[item_record_offset + 278846114];
              record_byte_offset_4 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + item_record_offset * 4 + 1119599860;
              do
              {
                loaded_vector_2 = _mm_load_si128((     __m128i *)&xmmword_140279200);
                *(_BYTE *)record_byte_offset_3 = 0;
                *(__m128i_u *)record_byte_offset_4 = loaded_vector_2;
                *(__m128i_u *)(record_byte_offset_4 + 16) = loaded_vector_2;
                *(__m128i_u *)(record_byte_offset_4 + 32) = loaded_vector_2;
                *(_QWORD *)(record_byte_offset_4 + 48) = SR_VEC_LANES(128, loaded_vector_2, i64)[0];
                *(_DWORD *)(record_byte_offset_4 + 56) = SR_VEC_LANES(128, loaded_vector_2, i32)[0];
                *(_WORD *)(record_byte_offset_4 + 60) = SR_VEC_LANES(128, loaded_vector_2, i16)[0];
                *(_BYTE *)(record_byte_offset_4 + 62) = SR_VEC_LANES(128, loaded_vector_2, i8)[0];
                sr_item_link_text_line(a1, iteration_count_3++);
                record_byte_offset_4 += 64;
                record_byte_offset_3 += 16;
              }
              while ( iteration_count_3 < 24 );
              return;
            }
            scaled_index = 5 * table_value;
            if ( (int)dword_140404A6C[scaled_index + 188872240] <= 8 )
              dword_140404A6C[scaled_index + 188872240] = 0;
          }
        }
        else
        {
          *state_address = 1;
          dword_140404A6C[item_record_offset + 278847329] = 0;
        }
        break;
    }
    goto LABEL_54;
  }
  if ( table_value_3 == 1 )
  {
    if ( a2 == 16 )
    {
      table_value_9 = dword_140404A6C[item_record_offset + 278847329];
      if ( table_value_9 > 0 )
        dword_140404A6C[item_record_offset + 278847329] = table_value_9 - 1;
      goto LABEL_54;
    }
    if ( a2 == 17 )
    {
      table_value_10 = dword_140404A6C[item_record_offset + 278847329];
      if ( table_value_10 < 0 )
        dword_140404A6C[item_record_offset + 278847329] = table_value_10 + 1;
      goto LABEL_54;
    }
    if ( a2 != 10 )
      goto LABEL_54;
    comparison_result = dword_140404A6C[item_record_offset + 278847329] == 0;
    goto LABEL_52;
  }
  if ( table_value_3 != 2 )
    goto LABEL_54;
  if ( a2 == 16 )
  {
    table_value_11 = dword_140404A6C[item_record_offset + 278847330];
    if ( table_value_11 > 0 )
      dword_140404A6C[item_record_offset + 278847330] = table_value_11 - 1;
    goto LABEL_54;
  }
  if ( a2 == 17 )
  {
    table_value_12 = dword_140404A6C[item_record_offset + 278847330];
    if ( table_value_12 < (int)dword_140404A6C[item_record_offset + 278847332] )
      dword_140404A6C[item_record_offset + 278847330] = table_value_12 + 1;
    goto LABEL_54;
  }
  if ( a2 != 10 )
  {
    comparison_result = a2 == 8;
LABEL_52:
    if ( comparison_result )
      goto LABEL_53;
    goto LABEL_54;
  }
  if ( (int)dword_140404A6C[item_record_offset + 278847330] >= (int)dword_140404A6C[item_record_offset + 278847332] )
  {
LABEL_53:
    *state_address = 0;
    goto LABEL_54;
  }
  dword_140404A6C[item_record_offset + 278847325] = 1;
  dword_140404A6C[item_record_offset + 278847326] = 255;
LABEL_54:
  loaded_word = *state_address;
  if ( !*state_address )
  {
    sub_1400C7890(a1);
    loaded_word = *state_address;
  }
  if ( loaded_word == 1 )
  {
    sub_1400C7FC0(a1);
    loaded_word = *state_address;
  }
  if ( loaded_word == 2 )
    sub_1400C86D0(a1);
}

//----- (00000001400C7890) ----------------------------------------------------
__int64            sub_1400C7890(int a1)
{
  __int64 input_value;
  __int64 item_record_offset;
  __int64 item;
  signed int iteration_count;
  __int64 element_index;
  __int64 table_value;
  unsigned int iteration_count_2;
  __int64 scaled_index;
  unsigned int integer_difference;
  int scaled_index_2;
       char *literal_text;
  unsigned int integer_sum;
  __int64 scaled_index_3;
  __int64 integer_difference_2;
  char *destination_text;
  int element_index_2;
  __int64 remaining_count;
  __int64 shifted_bits;
  char *record_byte_offset;
  char table_value_2;
  char table_value_3;
  char table_value_4;
  char table_value_5;
  char table_value_6;
  char table_value_7;
  char table_value_8;
  char table_value_9;
  char table_value_10;
  char table_value_11;
  char table_value_12;
  char table_value_13;
  char table_value_14;
  char table_value_15;
  char table_value_16;
  char table_value_17;
  char table_value_18;
  char table_value_19;
  char table_value_20;
  char table_value_21;
  char table_value_22;
  char table_value_23;
  char table_value_24;
  char table_value_25;
  char table_value_26;
  char table_value_27;
  char table_value_28;
  char table_value_29;
  char table_value_30;
  char table_value_31;
  char table_value_32;
  char table_value_33;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C7890[576];
#define callee_output_word (*(_BYTE (*)[40])(void *)(sr_frame_1400C7890 + 0)) /* [rsp+0h] */
#define scaled_index_4 (*(__int64 (*))(void *)(sr_frame_1400C7890 + 40)) /* [rsp+28h] */
#define scratch_buffer (*(_BYTE (*)[512])(void *)(sr_frame_1400C7890 + 48)) /* [rsp+30h] */
#define unused_frame_slot_560 (*(__int64 (*))(void *)(sr_frame_1400C7890 + 560)) /* [rsp+230h] */

  input_value = a1;
  item_record_offset = 1760LL * a1;
  item = input_value;
  iteration_count = 0;
  scaled_index_4 = item_record_offset * 4;
  if ( dword_140404A6C[item_record_offset + 278847323] == -1 )
  {
    dword_140404A6C[item_record_offset + 278847327] = 0;
    return 0; /* compatibility result discarded by all reviewed callers */
  }
  element_index = 0;
  table_value = (int)dword_140404A6C[item_record_offset + 278847323];
  iteration_count_2 = 0;
  do
  {
    if ( element_index == 1 )
    {
      scaled_index = 1760 * item;
      dword_140404A6C[scaled_index + 278846130] = 1397967181;
      dword_140404A6C[scaled_index + 278846642] = 252645135;
      dword_140404A6C[scaled_index + 278846131] = 542003017;
      dword_140404A6C[scaled_index + 278846643] = 252645135;
      dword_140404A6C[scaled_index + 278846132] = 1162626387;
      dword_140404A6C[scaled_index + 278846644] = 252645135;
      dword_140404A6C[scaled_index + 278846133] = 538989635;
      dword_140404A6C[scaled_index + 278846645] = 252645135;
      LOBYTE(dword_140404A6C[scaled_index + 278846134]) = 0;
      goto LABEL_128;
    }
    if ( (unsigned __int64)(element_index - 3) > 9 )
    {
      LOBYTE(dword_140404A6C[16 * (element_index + 110 * item) + 278846114]) = 0;
      goto LABEL_128;
    }
    integer_difference = iteration_count_2 - 5;
    if ( iteration_count_2 == 3 )
    {
      scaled_index_2 = dword_140404A6C[5 * table_value + 188872240];
      if ( scaled_index_2 > 0 )
      {
        if ( scaled_index_2 <= 8 )
        {
          crt_sprintf(scratch_buffer, "REQUEST INTEL");
          goto LABEL_26;
        }
        if ( scaled_index_2 == 11 )
        {
          crt_sprintf(scratch_buffer, "INTEL FAXED");
          goto LABEL_26;
        }
LABEL_14:
        crt_sprintf(scratch_buffer, "NO INTEL AVAILABLE");
        goto LABEL_26;
      }
      literal_text = "INTEL REQUESTED";
      if ( scaled_index_2 )
        goto LABEL_14;
      goto LABEL_25;
    }
    if ( iteration_count_2 == 4 )
    {
      crt_sprintf(scratch_buffer, "UPLOAD FILE");
      goto LABEL_26;
    }
    if ( integer_difference > 6 )
    {
      literal_text = "EXIT";
LABEL_25:
      crt_sprintf(scratch_buffer, literal_text);
      goto LABEL_26;
    }
    integer_sum = integer_difference + 1;
    scaled_index_3 = 138612LL * iteration_count_2;
    if ( dword_140404A6C[34653 * element_index + 179827806] )
    {
      integer_difference_2 = scaled_index_3 - 693060;
      crt_sprintf(scratch_buffer, "%d. PROJECT %s                ", integer_sum, (     char *)&g_16B2CCC50 + integer_difference_2);
    }
    else
    {
      crt_sprintf(scratch_buffer, "%d. UNKNOWN                   ", integer_sum);
      integer_difference_2 = scaled_index_3 - 693060;
    }
    scratch_buffer[24] = 0;
    destination_text = &callee_output_word[47];
    while ( *++destination_text != 0 )
      ;
    strcpy(destination_text, (     char *)&dword_140404A6C[539 * table_value + 180001596] + integer_difference_2);
LABEL_26:
    element_index_2 = 0;
    remaining_count = 2;
    shifted_bits = (element_index + 110 * item) << 6;
    record_byte_offset = (char *)&g_182BBBCF4 + shifted_bits;
    if ( *(unsigned int *)((char *)&g_182BBC7EC + scaled_index_4) == integer_difference )
    {
      do
      {
        table_value_2 = scratch_buffer[element_index_2];
        if ( table_value_2 )
          ++element_index_2;
        else
          table_value_2 = 32;
        *(record_byte_offset - 2048) = table_value_2;
        *record_byte_offset = -24;
        table_value_3 = scratch_buffer[element_index_2];
        if ( table_value_3 )
          ++element_index_2;
        else
          table_value_3 = 32;
        *(record_byte_offset - 2047) = table_value_3;
        record_byte_offset[1] = -24;
        table_value_4 = scratch_buffer[element_index_2];
        if ( table_value_4 )
          ++element_index_2;
        else
          table_value_4 = 32;
        *(record_byte_offset - 2046) = table_value_4;
        record_byte_offset[2] = -24;
        table_value_5 = scratch_buffer[element_index_2];
        if ( table_value_5 )
          ++element_index_2;
        else
          table_value_5 = 32;
        *(record_byte_offset - 2045) = table_value_5;
        record_byte_offset[3] = -24;
        table_value_6 = scratch_buffer[element_index_2];
        if ( table_value_6 )
          ++element_index_2;
        else
          table_value_6 = 32;
        *(record_byte_offset - 2044) = table_value_6;
        record_byte_offset[4] = -24;
        table_value_7 = scratch_buffer[element_index_2];
        if ( table_value_7 )
          ++element_index_2;
        else
          table_value_7 = 32;
        *(record_byte_offset - 2043) = table_value_7;
        record_byte_offset[5] = -24;
        table_value_8 = scratch_buffer[element_index_2];
        if ( table_value_8 )
          ++element_index_2;
        else
          table_value_8 = 32;
        *(record_byte_offset - 2042) = table_value_8;
        record_byte_offset[6] = -24;
        table_value_9 = scratch_buffer[element_index_2];
        if ( table_value_9 )
          ++element_index_2;
        else
          table_value_9 = 32;
        *(record_byte_offset - 2041) = table_value_9;
        record_byte_offset[7] = -24;
        table_value_10 = scratch_buffer[element_index_2];
        if ( table_value_10 )
          ++element_index_2;
        else
          table_value_10 = 32;
        *(record_byte_offset - 2040) = table_value_10;
        record_byte_offset[8] = -24;
        table_value_11 = scratch_buffer[element_index_2];
        if ( table_value_11 )
          ++element_index_2;
        else
          table_value_11 = 32;
        *(record_byte_offset - 2039) = table_value_11;
        record_byte_offset[9] = -24;
        table_value_12 = scratch_buffer[element_index_2];
        if ( table_value_12 )
          ++element_index_2;
        else
          table_value_12 = 32;
        *(record_byte_offset - 2038) = table_value_12;
        record_byte_offset[10] = -24;
        table_value_13 = scratch_buffer[element_index_2];
        if ( table_value_13 )
          ++element_index_2;
        else
          table_value_13 = 32;
        *(record_byte_offset - 2037) = table_value_13;
        record_byte_offset[11] = -24;
        table_value_14 = scratch_buffer[element_index_2];
        if ( table_value_14 )
          ++element_index_2;
        else
          table_value_14 = 32;
        *(record_byte_offset - 2036) = table_value_14;
        record_byte_offset[12] = -24;
        table_value_15 = scratch_buffer[element_index_2];
        if ( table_value_15 )
          ++element_index_2;
        else
          table_value_15 = 32;
        *(record_byte_offset - 2035) = table_value_15;
        record_byte_offset[13] = -24;
        table_value_16 = scratch_buffer[element_index_2];
        if ( table_value_16 )
          ++element_index_2;
        else
          table_value_16 = 32;
        *(record_byte_offset - 2034) = table_value_16;
        record_byte_offset[14] = -24;
        table_value_17 = scratch_buffer[element_index_2];
        if ( table_value_17 )
          ++element_index_2;
        else
          table_value_17 = 32;
        *(record_byte_offset - 2033) = table_value_17;
        record_byte_offset[15] = -24;
        record_byte_offset += 16;
        --remaining_count;
      }
      while ( remaining_count );
      *((_BYTE *)&g_182BBB514 + shifted_bits) = 0;
    }
    else
    {
      do
      {
        table_value_18 = scratch_buffer[element_index_2];
        if ( table_value_18 )
          ++element_index_2;
        else
          table_value_18 = 32;
        *(record_byte_offset - 2048) = table_value_18;
        *record_byte_offset = 15;
        table_value_19 = scratch_buffer[element_index_2];
        if ( table_value_19 )
          ++element_index_2;
        else
          table_value_19 = 32;
        *(record_byte_offset - 2047) = table_value_19;
        record_byte_offset[1] = 15;
        table_value_20 = scratch_buffer[element_index_2];
        if ( table_value_20 )
          ++element_index_2;
        else
          table_value_20 = 32;
        *(record_byte_offset - 2046) = table_value_20;
        record_byte_offset[2] = 15;
        table_value_21 = scratch_buffer[element_index_2];
        if ( table_value_21 )
          ++element_index_2;
        else
          table_value_21 = 32;
        *(record_byte_offset - 2045) = table_value_21;
        record_byte_offset[3] = 15;
        table_value_22 = scratch_buffer[element_index_2];
        if ( table_value_22 )
          ++element_index_2;
        else
          table_value_22 = 32;
        *(record_byte_offset - 2044) = table_value_22;
        record_byte_offset[4] = 15;
        table_value_23 = scratch_buffer[element_index_2];
        if ( table_value_23 )
          ++element_index_2;
        else
          table_value_23 = 32;
        *(record_byte_offset - 2043) = table_value_23;
        record_byte_offset[5] = 15;
        table_value_24 = scratch_buffer[element_index_2];
        if ( table_value_24 )
          ++element_index_2;
        else
          table_value_24 = 32;
        *(record_byte_offset - 2042) = table_value_24;
        record_byte_offset[6] = 15;
        table_value_25 = scratch_buffer[element_index_2];
        if ( table_value_25 )
          ++element_index_2;
        else
          table_value_25 = 32;
        *(record_byte_offset - 2041) = table_value_25;
        record_byte_offset[7] = 15;
        table_value_26 = scratch_buffer[element_index_2];
        if ( table_value_26 )
          ++element_index_2;
        else
          table_value_26 = 32;
        *(record_byte_offset - 2040) = table_value_26;
        record_byte_offset[8] = 15;
        table_value_27 = scratch_buffer[element_index_2];
        if ( table_value_27 )
          ++element_index_2;
        else
          table_value_27 = 32;
        *(record_byte_offset - 2039) = table_value_27;
        record_byte_offset[9] = 15;
        table_value_28 = scratch_buffer[element_index_2];
        if ( table_value_28 )
          ++element_index_2;
        else
          table_value_28 = 32;
        *(record_byte_offset - 2038) = table_value_28;
        record_byte_offset[10] = 15;
        table_value_29 = scratch_buffer[element_index_2];
        if ( table_value_29 )
          ++element_index_2;
        else
          table_value_29 = 32;
        *(record_byte_offset - 2037) = table_value_29;
        record_byte_offset[11] = 15;
        table_value_30 = scratch_buffer[element_index_2];
        if ( table_value_30 )
          ++element_index_2;
        else
          table_value_30 = 32;
        *(record_byte_offset - 2036) = table_value_30;
        record_byte_offset[12] = 15;
        table_value_31 = scratch_buffer[element_index_2];
        if ( table_value_31 )
          ++element_index_2;
        else
          table_value_31 = 32;
        *(record_byte_offset - 2035) = table_value_31;
        record_byte_offset[13] = 15;
        table_value_32 = scratch_buffer[element_index_2];
        if ( table_value_32 )
          ++element_index_2;
        else
          table_value_32 = 32;
        *(record_byte_offset - 2034) = table_value_32;
        record_byte_offset[14] = 15;
        table_value_33 = scratch_buffer[element_index_2];
        if ( table_value_33 )
          ++element_index_2;
        else
          table_value_33 = 32;
        *(record_byte_offset - 2033) = table_value_33;
        record_byte_offset[15] = 15;
        record_byte_offset += 16;
        --remaining_count;
      }
      while ( remaining_count );
      *((_BYTE *)&g_182BBB514 + shifted_bits) = 0;
    }
LABEL_128:
    ++iteration_count_2;
    ++element_index;
  }
  while ( element_index < 24 );
  do
    sr_item_link_text_line(item, iteration_count++);
  while ( iteration_count < 24 );
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef callee_output_word
#undef scaled_index_4
#undef scratch_buffer
#undef unused_frame_slot_560

//----- (00000001400C7FC0) ----------------------------------------------------
__int64            sub_1400C7FC0(int a1)
{
  __int64 item_record_offset;
  __int64 input_value;
  signed int iteration_count;
  __int64 element_index;
  int element_index_2;
  __int64 table_value;
  char **text_cursor;
  __int64 scaled_index;
  int element_index_3;
  __int64 shifted_bits;
  __int64 remaining_count;
  char *state_address;
  char table_value_2;
  char table_value_3;
  char table_value_4;
  char table_value_5;
  char table_value_6;
  char table_value_7;
  char table_value_8;
  char table_value_9;
  char table_value_10;
  char table_value_11;
  int element_index_4;
  __int64 remaining_count_2;
  __int64 shifted_bits_2;
  char *state_address_2;
  char table_value_12;
  char table_value_13;
  char table_value_14;
  char table_value_15;
  char table_value_16;
  char table_value_17;
  char table_value_18;
  char table_value_19;
  char table_value_20;
  char table_value_21;
  __int64 scaled_index_2;
  char *state_address_3;
  char integer_difference;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C7FC0[592];
#define callee_output_word (*(_BYTE (*)[32])(void *)(sr_frame_1400C7FC0 + 0)) /* [rsp+0h] */
#define selection_code (*(int (*))(void *)(sr_frame_1400C7FC0 + 32)) /* [rsp+20h] */
#define unused_written_slot (*(char * (*))(void *)(sr_frame_1400C7FC0 + 48)) /* [rsp+30h] */
#define unused_written_slot_2 (*(char * (*))(void *)(sr_frame_1400C7FC0 + 56)) /* [rsp+38h] */
#define scratch_buffer (*(_BYTE (*)[512])(void *)(sr_frame_1400C7FC0 + 64)) /* [rsp+40h] */
#define unused_frame_slot_576 (*(__int64 (*))(void *)(sr_frame_1400C7FC0 + 576)) /* [rsp+240h] */

  item_record_offset = 1760LL * a1;
  unused_written_slot = "BACK";
  input_value = a1;
  unused_written_slot_2 = "UPLOAD";
  if ( dword_140404A6C[item_record_offset + 278847323] == -1 || (dword_140404A6C[item_record_offset + 278847328] & 0x80000000) != 0 )
  {
    dword_140404A6C[item_record_offset + 278847327] = 0;
    return 0; /* compatibility result discarded by all reviewed callers */
  }
  iteration_count = 0;
  element_index = 0;
  element_index_2 = 0;
  table_value = (int)dword_140404A6C[item_record_offset + 278847323];
  text_cursor = (char **)&callee_output_word[-48];
  do
  {
    if ( !element_index_2 )
    {
      scaled_index = 34653LL * (int)dword_140404A6C[item_record_offset + 278847328];
      if ( dword_140404A6C[scaled_index + 180001071] )
        crt_sprintf(scratch_buffer, "PROJECT %s", (     char *)&dword_140404A6C[scaled_index + 180035705]);
      else
        crt_sprintf(scratch_buffer, "UNKNOWN                     ");
      element_index_3 = 0;
      shifted_bits = (element_index + 110 * input_value) << 6;
      remaining_count = 2;
      state_address = (char *)&g_182BBBCF4 + shifted_bits;
      do
      {
        table_value_2 = scratch_buffer[element_index_3];
        if ( table_value_2 )
          ++element_index_3;
        else
          table_value_2 = 32;
        *(state_address - 2048) = table_value_2;
        *state_address = 15;
        table_value_3 = scratch_buffer[element_index_3];
        if ( table_value_3 )
          ++element_index_3;
        else
          table_value_3 = 32;
        *(state_address - 2047) = table_value_3;
        state_address[1] = 15;
        table_value_4 = scratch_buffer[element_index_3];
        if ( table_value_4 )
          ++element_index_3;
        else
          table_value_4 = 32;
        *(state_address - 2046) = table_value_4;
        state_address[2] = 15;
        table_value_5 = scratch_buffer[element_index_3];
        if ( table_value_5 )
          ++element_index_3;
        else
          table_value_5 = 32;
        *(state_address - 2045) = table_value_5;
        state_address[3] = 15;
        table_value_6 = scratch_buffer[element_index_3];
        if ( table_value_6 )
          ++element_index_3;
        else
          table_value_6 = 32;
        *(state_address - 2044) = table_value_6;
        state_address[4] = 15;
        table_value_7 = scratch_buffer[element_index_3];
        if ( table_value_7 )
          ++element_index_3;
        else
          table_value_7 = 32;
        *(state_address - 2043) = table_value_7;
        state_address[5] = 15;
        table_value_8 = scratch_buffer[element_index_3];
        if ( table_value_8 )
          ++element_index_3;
        else
          table_value_8 = 32;
        *(state_address - 2042) = table_value_8;
        state_address[6] = 15;
        table_value_9 = scratch_buffer[element_index_3];
        if ( table_value_9 )
          ++element_index_3;
        else
          table_value_9 = 32;
        *(state_address - 2041) = table_value_9;
        state_address[7] = 15;
        table_value_10 = scratch_buffer[element_index_3];
        if ( table_value_10 )
          ++element_index_3;
        else
          table_value_10 = 32;
        *(state_address - 2040) = table_value_10;
        state_address[8] = 15;
        table_value_11 = scratch_buffer[element_index_3];
        if ( table_value_11 )
          ++element_index_3;
        else
          table_value_11 = 32;
        *(state_address - 2039) = table_value_11;
        state_address[9] = 15;
        state_address += 10;
        --remaining_count;
      }
      while ( remaining_count );
      *((_BYTE *)&g_182BBB508 + shifted_bits) = 0;
      goto LABEL_84;
    }
    if ( element_index_2 != 3 )
    {
      if ( (unsigned int)(element_index_2 - 4) > 3 )
      {
        if ( element_index_2 == 12 )
        {
          integer_difference = -72;
          state_address_3 = *text_cursor;
          if ( dword_140404A6C[item_record_offset + 278847329] )
            integer_difference = 15;
          selection_code = 16;
          goto LABEL_82;
        }
      }
      else
      {
        scaled_index_2 = 2156 * table_value + 138612LL * (int)dword_140404A6C[item_record_offset + 278847328];
        if ( element_index_2 - 4 < *(int *)((char *)&g_16B2AAF58 + scaled_index_2) )
        {
          selection_code = 60;
          state_address_3 = (char *)&dword_140404A6C[64 * (unsigned __int64)(unsigned int)element_index_2 + 180000828] + scaled_index_2;
          integer_difference = 15;
LABEL_82:
          sub_1400C6AB0(a1, element_index_2, state_address_3, integer_difference, selection_code);
          goto LABEL_84;
        }
      }
      LOBYTE(dword_140404A6C[16 * (element_index + 110 * input_value) + 278846114]) = 0;
      goto LABEL_84;
    }
    element_index_4 = 0;
    remaining_count_2 = 2;
    shifted_bits_2 = (element_index + 110 * input_value) << 6;
    state_address_2 = (char *)&g_182BBBCF4 + shifted_bits_2;
    do
    {
      table_value_12 = aStatus[element_index_4];
      if ( table_value_12 )
        ++element_index_4;
      else
        table_value_12 = 32;
      *(state_address_2 - 2048) = table_value_12;
      *state_address_2 = 15;
      table_value_13 = aStatus[element_index_4];
      if ( table_value_13 )
        ++element_index_4;
      else
        table_value_13 = 32;
      *(state_address_2 - 2047) = table_value_13;
      state_address_2[1] = 15;
      table_value_14 = aStatus[element_index_4];
      if ( table_value_14 )
        ++element_index_4;
      else
        table_value_14 = 32;
      *(state_address_2 - 2046) = table_value_14;
      state_address_2[2] = 15;
      table_value_15 = aStatus[element_index_4];
      if ( table_value_15 )
        ++element_index_4;
      else
        table_value_15 = 32;
      *(state_address_2 - 2045) = table_value_15;
      state_address_2[3] = 15;
      table_value_16 = aStatus[element_index_4];
      if ( table_value_16 )
        ++element_index_4;
      else
        table_value_16 = 32;
      *(state_address_2 - 2044) = table_value_16;
      state_address_2[4] = 15;
      table_value_17 = aStatus[element_index_4];
      if ( table_value_17 )
        ++element_index_4;
      else
        table_value_17 = 32;
      *(state_address_2 - 2043) = table_value_17;
      state_address_2[5] = 15;
      table_value_18 = aStatus[element_index_4];
      if ( table_value_18 )
        ++element_index_4;
      else
        table_value_18 = 32;
      *(state_address_2 - 2042) = table_value_18;
      state_address_2[6] = 15;
      table_value_19 = aStatus[element_index_4];
      if ( table_value_19 )
        ++element_index_4;
      else
        table_value_19 = 32;
      *(state_address_2 - 2041) = table_value_19;
      state_address_2[7] = 15;
      table_value_20 = aStatus[element_index_4];
      if ( table_value_20 )
        ++element_index_4;
      else
        table_value_20 = 32;
      *(state_address_2 - 2040) = table_value_20;
      state_address_2[8] = 15;
      table_value_21 = aStatus[element_index_4];
      if ( table_value_21 )
        ++element_index_4;
      else
        table_value_21 = 32;
      *(state_address_2 - 2039) = table_value_21;
      state_address_2[9] = 15;
      state_address_2 += 10;
      --remaining_count_2;
    }
    while ( remaining_count_2 );
    *((_BYTE *)&g_182BBB508 + shifted_bits_2) = 0;
LABEL_84:
    ++element_index_2;
    ++element_index;
    ++text_cursor;
  }
  while ( element_index_2 < 24 );
  do
    sr_item_link_text_line(a1, iteration_count++);
  while ( iteration_count < 24 );
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef callee_output_word
#undef selection_code
#undef unused_written_slot
#undef unused_written_slot_2
#undef scratch_buffer
#undef unused_frame_slot_576

//----- (00000001400C8500) ----------------------------------------------------
void            sub_1400C8500(int a1)
{
  __int64 item_record_offset;
  __int64 input_value;
  int table_value;
  int table_value_2;
  unsigned int integer_difference;
  bool comparison_result;
  unsigned int table_value_3;
  unsigned int table_value_4;
  int selection_flag;
  int iteration_count;
  __int64 scaled_index;
  unsigned int *state_address;
  unsigned int table_value_5;

  item_record_offset = 1760LL * a1;
  input_value = a1;
  table_value = dword_140404A6C[item_record_offset + 278847323];
  if ( table_value != -1 && dword_140404A6C[item_record_offset + 278846098] != -1 )
  {
    table_value_2 = dword_140404A6C[item_record_offset + 278847326];
    if ( table_value_2 <= 0 )
    {
      if ( (((unsigned __int8)a1 ^ LOBYTE(game_tick)) & 0xF) == 0 )
      {
        table_value_5 = dword_140404A6C[item_record_offset + 278847327];
        if ( !table_value_5 )
        {
          sub_1400C7890(a1);
          table_value_5 = dword_140404A6C[item_record_offset + 278847327];
        }
        if ( table_value_5 == 1 )
        {
          sub_1400C7FC0(a1);
          table_value_5 = dword_140404A6C[item_record_offset + 278847327];
        }
        if ( table_value_5 == 2 )
          sub_1400C86D0(a1);
      }
    }
    else
    {
      integer_difference = table_value_2 - 1;
      comparison_result = dword_140404A6C[item_record_offset + 278847325] == 1;
      table_value_3 = integer_difference;
      dword_140404A6C[item_record_offset + 278847326] = integer_difference;
      if ( comparison_result && (integer_difference & 0xF) == 0 )
      {
        sub_1400C86D0(a1);
        table_value_3 = dword_140404A6C[item_record_offset + 278847326];
      }
      if ( !table_value_3 )
      {
        table_value_4 = dword_140404A6C[item_record_offset + 278847325];
        if ( table_value_4 )
        {
          if ( table_value_4 == 1 )
          {
            selection_flag = 0;
            iteration_count = 0;
            scaled_index = 1760 * input_value;
            state_address = &g_16B2CCA30;
            dword_140404A6C[item_record_offset + 278847327] = 0;
            do
            {
              if ( dword_140404A6C[2570 * dword_140404A6C[item_record_offset + 278846098]
                                 + 275754073
                                 + 6 * dword_140404A6C[scaled_index + 278847333 + (int)dword_140404A6C[item_record_offset + 278847330]]] == *state_address )
              {
                sub_140195FB0(iteration_count, table_value);
                selection_flag = 1;
                dword_140404A6C[item_record_offset + 278847328] = iteration_count;
                dword_140404A6C[item_record_offset + 278847327] = 1;
                dword_140404A6C[item_record_offset + 278847329] = 0;
              }
              ++iteration_count;
              state_address += 34653;
            }
            while ( iteration_count < 7 );
            if ( !selection_flag )
              sub_1400C7890(a1);
            if ( dword_140404A6C[item_record_offset + 278847327] == 1 )
              sub_1400C7FC0(a1);
          }
        }
        else
        {
          sub_1400C7890(a1);
        }
      }
    }
  }
}

//----- (00000001400C86D0) ----------------------------------------------------
__int64            sub_1400C86D0(int a1)
{
  signed int iteration_count;
  int item;
  __int64 input_value;
  __int64 item_record_offset;
  __int64 record_word_offset;
  __int64 j;
  unsigned int *state_address;
  char *text_cursor;
  __int64 remaining_count;
  char input_byte;
  __int64 element_index;
  __int64 shifted_bits;
  char selection_code;
  unsigned int *state_address_2;
  char *text_cursor_2;
  __int64 remaining_count_2;
  char input_byte_2;
  int iteration_count_2;
  __int64 i;
  unsigned int *state_address_3;
  char *text_cursor_3;
  __int64 remaining_count_3;
  char input_byte_3;
  int table_value;
  int integer_difference;
  __int64 remaining_count_4;
  __int64 shifted_bits_2;
  char *text_cursor_4;
  char *text_cursor_5;
  char input_byte_4;
  char input_byte_5;
  __int64 integer_sum;
  __int64 shifted_bits_3;
  char *text_cursor_6;
       char *literal_text;
  __int64 remaining_count_5;
  char input_byte_6;
  char input_byte_7;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C86D0[576];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400C86D0 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(_BYTE (*)[512])(void *)(sr_frame_1400C86D0 + 48)) /* [rsp+30h] */
#define unused_frame_slot_560 (*(__int64 (*))(void *)(sr_frame_1400C86D0 + 560)) /* [rsp+230h] */

  iteration_count = 0;
  item = a1;
  input_value = a1;
  item_record_offset = 1760LL * a1;
  record_word_offset = 110LL * a1;
  if ( (int)dword_140404A6C[item_record_offset + 278847326] <= 0 )
  {
    iteration_count_2 = 0;
    for ( i = 0; i < 24; ++i )
    {
      if ( i )
      {
        if ( (unsigned __int64)(i - 4) > 0xF )
        {
          LOBYTE(dword_140404A6C[16 * record_word_offset + 278846114 + 16 * i]) = 0;
        }
        else
        {
          table_value = iteration_count_2 + (dword_140404A6C[item_record_offset + 278847330] & 0xFFFFFFF0);
          integer_difference = table_value - 4;
          if ( table_value - 4 >= (int)dword_140404A6C[item_record_offset + 278847332] )
          {
            integer_sum = i + record_word_offset;
            if ( integer_difference == dword_140404A6C[item_record_offset + 278847332] )
            {
              shifted_bits_3 = integer_sum << 6;
              text_cursor_6 = (char *)&g_182BBBCF4 + shifted_bits_3;
              literal_text = " CANCEL";
              remaining_count_5 = 16;
              if ( integer_difference == dword_140404A6C[item_record_offset + 278847330] )
              {
                do
                {
                  input_byte_6 = *literal_text;
                  if ( *literal_text )
                    ++literal_text;
                  else
                    input_byte_6 = 32;
                  *(text_cursor_6 - 2048) = input_byte_6;
                  *text_cursor_6++ = -72;
                  --remaining_count_5;
                }
                while ( remaining_count_5 );
                *((_BYTE *)&g_182BBB504 + shifted_bits_3) = 0;
              }
              else
              {
                do
                {
                  input_byte_7 = *literal_text;
                  if ( *literal_text )
                    ++literal_text;
                  else
                    input_byte_7 = 32;
                  *(text_cursor_6 - 2048) = input_byte_7;
                  *text_cursor_6++ = 15;
                  --remaining_count_5;
                }
                while ( remaining_count_5 );
                *((_BYTE *)&g_182BBB504 + shifted_bits_3) = 0;
              }
            }
            else
            {
              LOBYTE(dword_140404A6C[16 * integer_sum + 278846114]) = 0;
            }
          }
          else
          {
            crt_sprintf(
              scratch_buffer,
              " %s",
              (     char *)&dword_140404A6C[2570 * dword_140404A6C[item_record_offset + 278846098]
                                           + 275754074
                                           + 6 * dword_140404A6C[1760 * input_value + 278847329 + table_value]]);
            remaining_count_4 = 16;
            shifted_bits_2 = (i + record_word_offset) << 6;
            text_cursor_4 = (char *)&g_182BBBCF4 + shifted_bits_2;
            text_cursor_5 = scratch_buffer;
            if ( integer_difference == dword_140404A6C[item_record_offset + 278847330] )
            {
              do
              {
                input_byte_4 = *text_cursor_5;
                if ( *text_cursor_5 )
                  ++text_cursor_5;
                else
                  input_byte_4 = 32;
                *(text_cursor_4 - 2048) = input_byte_4;
                *text_cursor_4++ = -72;
                --remaining_count_4;
              }
              while ( remaining_count_4 );
              *((_BYTE *)&g_182BBB504 + shifted_bits_2) = 0;
            }
            else
            {
              do
              {
                input_byte_5 = *text_cursor_5;
                if ( *text_cursor_5 )
                  ++text_cursor_5;
                else
                  input_byte_5 = 32;
                *(text_cursor_4 - 2048) = input_byte_5;
                *text_cursor_4++ = 15;
                --remaining_count_4;
              }
              while ( remaining_count_4 );
              *((_BYTE *)&g_182BBB504 + shifted_bits_2) = 0;
            }
          }
        }
      }
      else
      {
        crt_sprintf(scratch_buffer, "UPLOAD FILE");
        state_address_3 = &dword_140404A6C[item_record_offset + 278846626];
        text_cursor_3 = scratch_buffer;
        remaining_count_3 = 20;
        do
        {
          input_byte_3 = *text_cursor_3;
          if ( *text_cursor_3 )
            ++text_cursor_3;
          else
            input_byte_3 = 32;
          *((_BYTE *)state_address_3 - 2048) = input_byte_3;
          *(_BYTE *)state_address_3 = -16;
          state_address_3 = (unsigned int *)((char *)state_address_3 + 1);
          --remaining_count_3;
        }
        while ( remaining_count_3 );
        LOBYTE(dword_140404A6C[16 * record_word_offset + 278846119]) = 0;
      }
      ++iteration_count_2;
    }
    item = input_value;
  }
  else
  {
    for ( j = 0; j < 24; ++j )
    {
      if ( j )
      {
        if ( j == 1 )
        {
          element_index = 0;
          shifted_bits = (__int64)(int)(255 - dword_140404A6C[item_record_offset + 278847326]) >> 4;
          do
          {
            selection_code = 127;
            if ( element_index > shifted_bits )
              selection_code = 32;
            scratch_buffer[element_index++] = selection_code;
          }
          while ( element_index < 16 );
          scratch_buffer[16] = 0;
          state_address_2 = &dword_140404A6C[item_record_offset + 278846642];
          text_cursor_2 = scratch_buffer;
          remaining_count_2 = 16;
          do
          {
            input_byte_2 = *text_cursor_2;
            if ( *text_cursor_2 )
              ++text_cursor_2;
            else
              input_byte_2 = 32;
            *((_BYTE *)state_address_2 - 2048) = input_byte_2;
            *(_BYTE *)state_address_2 = -16;
            state_address_2 = (unsigned int *)((char *)state_address_2 + 1);
            --remaining_count_2;
          }
          while ( remaining_count_2 );
          LOBYTE(dword_140404A6C[16 * record_word_offset + 278846134]) = 0;
        }
        else
        {
          LOBYTE(dword_140404A6C[16 * record_word_offset + 278846114 + 16 * j]) = 0;
        }
      }
      else
      {
        crt_sprintf(scratch_buffer, "UPLOADING");
        state_address = &dword_140404A6C[item_record_offset + 278846626];
        text_cursor = scratch_buffer;
        remaining_count = 16;
        do
        {
          input_byte = *text_cursor;
          if ( *text_cursor )
            ++text_cursor;
          else
            input_byte = 32;
          *((_BYTE *)state_address - 2048) = input_byte;
          *(_BYTE *)state_address = -16;
          state_address = (unsigned int *)((char *)state_address + 1);
          --remaining_count;
        }
        while ( remaining_count );
        LOBYTE(dword_140404A6C[16 * record_word_offset + 278846118]) = 0;
      }
    }
  }
  do
    sr_item_link_text_line(item, iteration_count++);
  while ( iteration_count < 24 );
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef scratch_buffer
#undef unused_frame_slot_560

//----- (00000001400C8E10) ----------------------------------------------------
__int64            sub_1400C8E10(int a1)
{
  __int64 item_record_offset;
  unsigned int table_value;
  unsigned int table_value_2;
  __int64 remaining_count;
  unsigned int *state_address;
  char *text_cursor;
  __int64 remaining_count_2;
  char input_byte;
  char input_byte_2;
  __int64 record_byte_offset;
  __int64 record_byte_offset_2;
  __int64 remaining_count_3;
  __int64 running_total;
  __int64 remaining_count_4;
  _BYTE *state_address_2;
  char *running_total_2;
  char shifted_bits;
  char integer_difference;
  char shifted_bits_2;
  char integer_difference_2;
  signed int iteration_count;
  int item;
  _BYTE *state_address_3;
  char *text_cursor_2;
  char input_byte_3;
  char input_byte_4;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C8E10[576];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400C8E10 + 0)) /* [rsp+0h] */
#define input_value (*(int (*))(void *)(sr_frame_1400C8E10 + 32)) /* [rsp+20h] */
#define selection_flag (*(__int128 (*))(void *)(sr_frame_1400C8E10 + 48)) /* [rsp+30h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_1400C8E10 + 64)) /* [rsp+40h] */
#define unused_written_slot_2 (*(__int128 (*))(void *)(sr_frame_1400C8E10 + 80)) /* [rsp+50h] */
#define unused_written_slot_3 (*(__int128 (*))(void *)(sr_frame_1400C8E10 + 96)) /* [rsp+60h] */
#define unused_frame_slot_560 (*(__int64 (*))(void *)(sr_frame_1400C8E10 + 560)) /* [rsp+230h] */

  item_record_offset = 1760LL * a1;
  selection_flag = 0;
  unused_written_slot = 0;
  input_value = a1;
  unused_written_slot_2 = 0;
  table_value = dword_140404A6C[item_record_offset + 278847327];
  table_value_2 = dword_140404A6C[item_record_offset + 278847325];
  unused_written_slot_3 = 0;
  crt_sprintf(&selection_flag, "  SNAKE    SCORE:%05d  LEVEL:%03d    Ctrl-X EXIT", table_value_2, table_value);
  remaining_count = 31;
  state_address = &dword_140404A6C[item_record_offset + 278846114];
  text_cursor = (char *)&selection_flag;
  remaining_count_2 = 31;
  do
  {
    input_byte = *text_cursor;
    if ( *text_cursor )
      ++text_cursor;
    else
      input_byte = 32;
    *(_BYTE *)state_address = input_byte;
    input_byte_2 = *text_cursor;
    *((_BYTE *)state_address + 2048) = 112;
    if ( input_byte_2 )
      ++text_cursor;
    else
      input_byte_2 = 32;
    *((_BYTE *)state_address + 1) = input_byte_2;
    *((_BYTE *)state_address + 2049) = 112;
    state_address = (unsigned int *)((char *)state_address + 2);
    --remaining_count_2;
  }
  while ( remaining_count_2 );
  BYTE2(dword_140404A6C[item_record_offset + 278846129]) = 0;
  record_byte_offset = item_record_offset * 4 + 64;
  record_byte_offset_2 = item_record_offset * 4 + 32;
  remaining_count_3 = 23;
  do
  {
    running_total = 0;
    remaining_count_4 = 31;
    state_address_2 = (char *)&g_182BBB530 + record_byte_offset + 2;
    running_total_2 = state_address_2 + 1987;
    do
    {
      *(running_total_2 - 2049) = 32;
      shifted_bits = *((_BYTE *)&g_182BBCA00 + record_byte_offset_2 + (running_total >> 1));
      if ( shifted_bits )
      {
        if ( shifted_bits == 1 )
        {
          *(running_total_2 - 1) = 127;
        }
        else if ( shifted_bits == 2 )
        {
          *(running_total_2 - 1) = 31;
        }
        else
        {
          integer_difference = 47;
          if ( shifted_bits == 3 )
            integer_difference = -97;
          *(running_total_2 - 1) = integer_difference;
        }
      }
      else
      {
        *(running_total_2 - 1) = 15;
      }
      running_total_2[(char *)&g_182BBAD30 + 2 - ((char *)&g_182BBB530 + 2)] = 32;
      shifted_bits_2 = *((_BYTE *)&g_182BBCA00 + record_byte_offset_2 + ((running_total + 1) >> 1));
      if ( shifted_bits_2 )
      {
        if ( shifted_bits_2 == 1 )
        {
          *running_total_2 = 127;
        }
        else if ( shifted_bits_2 == 2 )
        {
          *running_total_2 = 31;
        }
        else
        {
          integer_difference_2 = 47;
          if ( shifted_bits_2 == 3 )
            integer_difference_2 = -97;
          *running_total_2 = integer_difference_2;
        }
      }
      else
      {
        *running_total_2 = 15;
      }
      running_total += 2;
      running_total_2 += 2;
      --remaining_count_4;
    }
    while ( remaining_count_4 );
    record_byte_offset_2 += 32;
    *state_address_2 = 0;
    record_byte_offset += 64;
    iteration_count = 0;
    --remaining_count_3;
  }
  while ( remaining_count_3 );
  item = input_value;
  if ( dword_140404A6C[item_record_offset + 278847329] )
  {
    selection_flag = 0;
    unused_written_slot = 0;
    unused_written_slot_2 = 0;
    unused_written_slot_3 = 0;
    crt_sprintf(&selection_flag, "                           GAME OVER!", running_total);
    state_address_3 = (char *)&dword_140404A6C[item_record_offset + 278846642] + 1;
    text_cursor_2 = (char *)&selection_flag;
    do
    {
      input_byte_3 = *text_cursor_2;
      if ( *text_cursor_2 )
        ++text_cursor_2;
      else
        input_byte_3 = 32;
      *(state_address_3 - 2049) = input_byte_3;
      input_byte_4 = *text_cursor_2;
      *(state_address_3 - 1) = 15;
      if ( input_byte_4 )
        ++text_cursor_2;
      else
        input_byte_4 = 32;
      *(state_address_3 - 2048) = input_byte_4;
      *state_address_3 = 15;
      state_address_3 += 2;
      --remaining_count;
    }
    while ( remaining_count );
    BYTE2(dword_140404A6C[item_record_offset + 278846145]) = 0;
  }
  do
    sr_item_link_text_line(item, iteration_count++);
  while ( iteration_count < 24 );
  return 0; /* no result: rax is residue of the loop's last call at 0x1400C9086 */
}
#undef unused_frame_slot_0
#undef input_value
#undef selection_flag
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_frame_slot_560

//----- (00000001400C9120) ----------------------------------------------------
void            sub_1400C9120(int a1, int a2)
{
  __int64 item;
  signed int iteration_count;
  unsigned int *record_byte_offset;
  unsigned int *cached_si128;
  __m128i si128;

  item = a1;
  if ( (a2 & 0x100) != 0 )
  {
    if ( toupper((unsigned __int8)a2) == 88 )
    {
      iteration_count = 0;
      record_byte_offset = &dword_140404A6C[1760 * item + 278846114];
      dword_140404A6C[1760 * item + 278847324] = 0;
      cached_si128 = &dword_140404A6C[1760 * item + 278846626];
      do
      {
        si128 = _mm_load_si128((     __m128i *)&xmmword_140279200);
        *(_BYTE *)record_byte_offset = 0;
        *(__m128i_u *)cached_si128 = si128;
        *((__m128i *)cached_si128 + 1) = si128;
        *((__m128i *)cached_si128 + 2) = si128;
        *((_QWORD *)cached_si128 + 6) = SR_VEC_LANES(128, si128, i64)[0];
        cached_si128[14] = SR_VEC_LANES(128, si128, i32)[0];
        *((_WORD *)cached_si128 + 30) = SR_VEC_LANES(128, si128, i16)[0];
        *((_BYTE *)cached_si128 + 62) = SR_VEC_LANES(128, si128, i8)[0];
        sr_item_link_text_line(item, iteration_count++);
        cached_si128 += 16;
        record_byte_offset += 16;
      }
      while ( iteration_count < 24 );
    }
  }
  else
  {
    switch ( a2 )
    {
      case 19:
        if ( dword_140404A6C[1760 * a1 + 278847330] != 2 )
          dword_140404A6C[1760 * a1 + 278847330] = 0;
        break;
      case 18:
        if ( dword_140404A6C[1760 * a1 + 278847330] )
          dword_140404A6C[1760 * a1 + 278847330] = 2;
        break;
      case 17:
        if ( dword_140404A6C[1760 * a1 + 278847330] != 3 )
          dword_140404A6C[1760 * a1 + 278847330] = 1;
        break;
      default:
        if ( a2 == 16 && dword_140404A6C[1760 * a1 + 278847330] != 1 )
          dword_140404A6C[1760 * a1 + 278847330] = 3;
        break;
    }
  }
}

//----- (00000001400C92B0) ----------------------------------------------------
__int64            sub_1400C92B0(int a1)
{
  __int64 item_record_offset;
  __int64 element_index;
  unsigned int *record_byte_offset;
  __int64 input_value;
  __int64 i;
  bool comparison_result;
  __int64 item_record_offset_2;
  unsigned int table_value;
  int integer_sum;
  __int64 record_word_offset;
  int selection_code;
  int selection_code_2;
  __int64 remaining_count;
  int rand_result;
  int rand_result_2;
  int j;
  __int64 scaled_index;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  __int64 masked_bits;
  __int64 scaled_index_4;
  __int64 masked_bits_2;
  __int64 scaled_index_5;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C92B0[16];
#define cached_integer_sum (*(int (*))(void *)(sr_frame_1400C92B0 + 0)) /* [rsp+68h] */

  item_record_offset = 1760LL * a1;
  element_index = 0;
  record_byte_offset = &dword_140404A6C[item_record_offset + 278847461];
  input_value = a1;
  do
  {
    for ( i = 0; i < 32; ++i )
    {
      *((_BYTE *)record_byte_offset + i) = 0;
      if ( !element_index || (comparison_result = (unsigned __int64)element_index < 0x15, element_index == 21) )
      {
        *((_BYTE *)record_byte_offset + i) = 1;
        comparison_result = (unsigned __int64)element_index < 0x15;
      }
      if ( comparison_result && (!i || i == 30) )
        *((_BYTE *)&dword_140404A6C[1760 * a1 + 278847461 + 8 * element_index] + i) = 1;
    }
    ++element_index;
    record_byte_offset += 8;
  }
  while ( element_index < 24 );
  item_record_offset_2 = 1760LL * a1;
  table_value = dword_140404A6C[item_record_offset_2 + 278847327] & 7;
  if ( table_value )
  {
    LOBYTE(dword_140404A6C[1760 * a1 + 278847479]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847487]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847495]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847503]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847511]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847519]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847527]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847618]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847610]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847602]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847594]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847586]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847578]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847570]) = 1;
  }
  if ( table_value >= 2 )
  {
    BYTE2(dword_140404A6C[1760 * a1 + 278847482]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847490]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847498]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847506]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847514]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847522]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847530]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847615]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847607]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847599]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847591]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847583]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847575]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847567]) = 1;
  }
  if ( table_value >= 3 )
  {
    *(unsigned int *)((char *)&dword_140404A6C[item_record_offset_2 + 278847549] + 1) = 16843009;
    *(unsigned int *)((char *)&dword_140404A6C[item_record_offset_2 + 278847550] + 1) = 16843009;
  }
  if ( table_value >= 4 )
  {
    *(unsigned int *)((char *)&dword_140404A6C[item_record_offset_2 + 278847555] + 2) = 16843009;
    *(unsigned int *)((char *)&dword_140404A6C[item_record_offset_2 + 278847554] + 2) = 16843009;
  }
  if ( table_value >= 5 )
  {
    *(unsigned int *)((char *)&dword_140404A6C[item_record_offset_2 + 278847495] + 3) = 16843009;
    *(unsigned int *)((char *)&dword_140404A6C[item_record_offset_2 + 278847496] + 3) = 16843009;
    HIBYTE(dword_140404A6C[item_record_offset_2 + 278847497]) = 1;
  }
  if ( table_value >= 6 )
  {
    *(unsigned int *)((char *)&dword_140404A6C[item_record_offset + 278847599] + 3) = 16843009;
    *(unsigned int *)((char *)&dword_140404A6C[item_record_offset + 278847600] + 3) = 16843009;
    HIBYTE(dword_140404A6C[item_record_offset + 278847601]) = 1;
  }
  if ( table_value >= 7 )
  {
    BYTE2(dword_140404A6C[item_record_offset_2 + 278847562]) = 1;
    LOBYTE(dword_140404A6C[item_record_offset_2 + 278847471]) = 1;
  }
  integer_sum = 0;
  cached_integer_sum = 0;
  record_word_offset = 220LL * a1;
  do
  {
    if ( integer_sum )
    {
      selection_code = 17;
      if ( integer_sum == 1 )
      {
        selection_code_2 = 1;
      }
      else
      {
        selection_code_2 = 11;
        if ( integer_sum != 2 )
          selection_code = 1;
      }
    }
    else
    {
      selection_code = 1;
      selection_code_2 = 1;
    }
    remaining_count = 2;
    do
    {
      rand_result = selection_code + rand() % 12;
      rand_result_2 = selection_code_2 + rand() % 9;
      for ( j = 0; j < 512; ++j )
      {
        if ( !*((_BYTE *)&dword_140404A6C[8 * record_word_offset + 278847461 + 8 * rand_result_2] + rand_result) )
          break;
        rand_result = selection_code + rand() % 12;
        rand_result_2 = selection_code_2 + rand() % 9;
      }
      scaled_index = rand_result + 32 * (220 * input_value + rand_result_2);
      if ( !*((_BYTE *)&g_182BBCA00 + scaled_index) )
      {
        *((_BYTE *)&g_182BBCA00 + scaled_index) = 4;
        ++dword_140404A6C[1760 * input_value + 278847326];
      }
      --remaining_count;
    }
    while ( remaining_count );
    integer_sum = cached_integer_sum + 1;
    cached_integer_sum = integer_sum;
  }
  while ( integer_sum < 4 );
  scaled_index_2 = 1760 * input_value;
  scaled_index_3 = 880 * input_value;
  *(_QWORD *)&dword_140404A6C[scaled_index_2 + 278847331] = 0;
  dword_140404A6C[2 * scaled_index_3 + 278847333] = 15;
  dword_140404A6C[2 * scaled_index_3 + 278847334] = 10;
  masked_bits = ((unsigned __int8)dword_140404A6C[1760 * input_value + 278847331] + 1) & 0x3F;
  dword_140404A6C[scaled_index_2 + 278847331] = masked_bits;
  scaled_index_4 = 880 * input_value + masked_bits;
  dword_140404A6C[2 * scaled_index_4 + 278847333] = 15;
  dword_140404A6C[2 * scaled_index_4 + 278847334] = 10;
  masked_bits_2 = ((unsigned __int8)dword_140404A6C[1760 * input_value + 278847331] + 1) & 0x3F;
  dword_140404A6C[scaled_index_2 + 278847331] = masked_bits_2;
  scaled_index_5 = 880 * input_value + masked_bits_2;
  dword_140404A6C[2 * scaled_index_5 + 278847333] = 15;
  dword_140404A6C[2 * scaled_index_5 + 278847334] = 10;
  HIBYTE(dword_140404A6C[scaled_index_2 + 278847544]) = 3;
  dword_140404A6C[scaled_index_2 + 278847330] = 0;
  ++dword_140404A6C[scaled_index_2 + 278847327];
  dword_140404A6C[scaled_index_2 + 278847328] = 64;
  return sub_1400C8E10(a1);
}
#undef cached_integer_sum

//----- (00000001400C9820) ----------------------------------------------------
void            sub_1400C9820(int a1)
{
  __int64 item_record_offset;
  __int64 input_value;
  signed int shifted_bits;
  __int64 scaled_index;
  __int64 scaled_index_2;
  unsigned int masked_bits;
  signed int remaining_count;
  signed int remaining_count_2;
  unsigned int table_value;
  int integer_sum;
  int integer_sum_2;
  __int64 integer_sum_3;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  __int64 table_value_2;
  __int64 integer_sum_4;
  unsigned int scaled_index_5;
  __int64 masked_bits_2;
  unsigned int scaled_index_6;
  __int64 integer_sum_5;
  __int64 masked_bits_3;
  __int64 integer_sum_6;
  __int64 masked_bits_4;
  __int64 integer_sum_7;
  __int64 masked_bits_5;
  __int64 integer_sum_8;
  __int64 table_value_3;
  __int64 table_value_4;
  unsigned int masked_bits_6;
  unsigned int table_value_5;
  __int64 scaled_index_7;

  item_record_offset = 1760LL * a1;
  input_value = a1;
  if ( !dword_140404A6C[item_record_offset + 278847329] && (int)--dword_140404A6C[item_record_offset + 278847328] <= 0 )
  {
    if ( dword_140404A6C[item_record_offset + 278847326] )
    {
      shifted_bits = 16 - (((int)dword_140404A6C[item_record_offset + 278847327] >> 1) & 0xFFFFFFFC);
      if ( shifted_bits < 4 )
        shifted_bits = 4;
      dword_140404A6C[item_record_offset + 278847328] = shifted_bits;
      scaled_index = 880 * input_value;
      scaled_index_2 = 880 * input_value + (dword_140404A6C[item_record_offset + 278847331] & 0x3F);
      masked_bits = ((unsigned __int8)dword_140404A6C[item_record_offset + 278847331] + 1) & 0x3F;
      remaining_count = dword_140404A6C[2 * scaled_index_2 + 278847333];
      remaining_count_2 = dword_140404A6C[2 * scaled_index_2 + 278847334];
      table_value = dword_140404A6C[item_record_offset + 278847330];
      dword_140404A6C[item_record_offset + 278847331] = masked_bits;
      if ( table_value )
      {
        if ( table_value == 1 )
        {
          integer_sum_2 = remaining_count_2 + 1;
          remaining_count_2 = 0;
          if ( integer_sum_2 < 22 )
            remaining_count_2 = integer_sum_2;
        }
        else if ( table_value == 2 )
        {
          if ( --remaining_count < 0 )
            remaining_count = 30;
        }
        else if ( table_value == 3 && --remaining_count_2 < 0 )
        {
          remaining_count_2 = 21;
        }
      }
      else
      {
        integer_sum = remaining_count + 1;
        remaining_count = 0;
        if ( integer_sum < 31 )
          remaining_count = integer_sum;
      }
      integer_sum_3 = scaled_index + masked_bits;
      scaled_index_3 = 220 * input_value;
      dword_140404A6C[2 * integer_sum_3 + 278847333] = remaining_count;
      dword_140404A6C[2 * integer_sum_3 + 278847334] = remaining_count_2;
      scaled_index_4 = remaining_count + 32 * (scaled_index_3 + remaining_count_2);
      if ( *((_BYTE *)&g_182BBCA00 + scaled_index_4) == 4 )
      {
        *((_BYTE *)&g_182BBCA00 + scaled_index_4) = 0;
        dword_140404A6C[item_record_offset + 278847325] += 5;
        --dword_140404A6C[item_record_offset + 278847326];
        HIWORD(dword_140404A6C[item_record_offset + 278847325]) = 0;
        if ( (int)dword_140404A6C[item_record_offset + 278847326] <= 0 )
        {
          dword_140404A6C[item_record_offset + 278847328] = 32;
          dword_140404A6C[item_record_offset + 278847326] = 0;
        }
        table_value_2 = (int)dword_140404A6C[item_record_offset + 278847332];
        integer_sum_4 = scaled_index + table_value_2;
        scaled_index_5 = dword_140404A6C[2 * scaled_index + 278847333 + 2 * table_value_2];
        masked_bits_2 = ((_BYTE)table_value_2 - 1) & 0x3F;
        scaled_index_6 = dword_140404A6C[2 * integer_sum_4 + 278847334];
        dword_140404A6C[item_record_offset + 278847332] = masked_bits_2;
        integer_sum_5 = scaled_index + masked_bits_2;
        dword_140404A6C[2 * integer_sum_5 + 278847333] = scaled_index_5;
        dword_140404A6C[2 * integer_sum_5 + 278847334] = scaled_index_6;
        masked_bits_3 = ((unsigned __int8)dword_140404A6C[item_record_offset + 278847332] - 1) & 0x3F;
        dword_140404A6C[item_record_offset + 278847332] = masked_bits_3;
        integer_sum_6 = scaled_index + masked_bits_3;
        dword_140404A6C[2 * integer_sum_6 + 278847333] = scaled_index_5;
        dword_140404A6C[2 * integer_sum_6 + 278847334] = scaled_index_6;
        masked_bits_4 = ((unsigned __int8)dword_140404A6C[item_record_offset + 278847332] - 1) & 0x3F;
        dword_140404A6C[item_record_offset + 278847332] = masked_bits_4;
        integer_sum_7 = scaled_index + masked_bits_4;
        dword_140404A6C[2 * integer_sum_7 + 278847333] = scaled_index_5;
        dword_140404A6C[2 * integer_sum_7 + 278847334] = scaled_index_6;
        masked_bits_5 = ((unsigned __int8)dword_140404A6C[item_record_offset + 278847332] - 1) & 0x3F;
        dword_140404A6C[item_record_offset + 278847332] = masked_bits_5;
        integer_sum_8 = scaled_index + masked_bits_5;
        dword_140404A6C[2 * integer_sum_8 + 278847333] = scaled_index_5;
        dword_140404A6C[2 * integer_sum_8 + 278847334] = scaled_index_6;
      }
      table_value_3 = scaled_index + (int)dword_140404A6C[item_record_offset + 278847331];
      if ( *((_BYTE *)&dword_140404A6C[8 * scaled_index_3 + 278847461 + 8 * (int)dword_140404A6C[2 * table_value_3 + 278847334]]
           + (int)dword_140404A6C[2 * table_value_3 + 278847333]) )
        dword_140404A6C[item_record_offset + 278847329] = 1;
      table_value_4 = scaled_index + (int)dword_140404A6C[item_record_offset + 278847332];
      *((_BYTE *)&dword_140404A6C[8 * scaled_index_3 + 278847461 + 8 * (int)dword_140404A6C[2 * table_value_4 + 278847334]]
      + (int)dword_140404A6C[2 * table_value_4 + 278847333]) = 0;
      masked_bits_6 = ((unsigned __int8)dword_140404A6C[item_record_offset + 278847332] + 1) & 0x3F;
      table_value_5 = dword_140404A6C[item_record_offset + 278847331] & 0x3F;
      for ( dword_140404A6C[item_record_offset + 278847332] = masked_bits_6; masked_bits_6 != table_value_5; *((_BYTE *)&g_182BBCA00 + scaled_index_7) = 2 )
      {
        scaled_index_7 = (int)dword_140404A6C[2 * scaled_index + 278847333 + 2 * masked_bits_6]
            + 32 * (scaled_index_3 + (int)dword_140404A6C[2 * scaled_index + 278847334 + 2 * masked_bits_6]);
        masked_bits_6 = ((_BYTE)masked_bits_6 + 1) & 0x3F;
      }
      *((_BYTE *)&dword_140404A6C[8 * scaled_index_3 + 278847461 + 8 * (int)dword_140404A6C[2 * scaled_index + 278847334 + 2 * masked_bits_6]]
      + (int)dword_140404A6C[2 * scaled_index + 278847333 + 2 * masked_bits_6]) = 3;
      sub_1400C8E10(a1);
    }
    else
    {
      sub_1400C92B0(a1);
    }
  }
}

//----- (00000001400C9B60) ----------------------------------------------------
void            sub_1400C9B60(int a1)
{
  __int64 item;
  __int64 item_record_offset;
  unsigned int table_value;
  unsigned int table_value_2;
  int table_value_3;
  unsigned int integer_difference;
  int iteration_count;
  int rand_result;
  __int64 scaled_index;
  __int64 table_value_4;

  item = a1;
  item_record_offset = 1760LL * a1;
  table_value = dword_140404A6C[item_record_offset + 278847324];
  if ( !table_value )
  {
    sub_1400C3ED0(a1);
    table_value = dword_140404A6C[item_record_offset + 278847324];
  }
  table_value_2 = table_value;
  if ( table_value == 1 )
  {
    table_value_3 = dword_140404A6C[item_record_offset + 278847584];
    if ( table_value_3 > 0 )
    {
      integer_difference = table_value_3 - 1;
      dword_140404A6C[item_record_offset + 278847584] = integer_difference;
      if ( !integer_difference )
      {
        iteration_count = 0;
        rand_result = rand() % 26;
        scaled_index = 1760 * item;
        do
        {
          table_value_4 = scaled_index + (int)dword_140404A6C[scaled_index + 278847455 + rand_result];
          if ( dword_140404A6C[table_value_4 + 278847519] && dword_140404A6C[table_value_4 + 278847551] == -1 )
            break;
          ++iteration_count;
          rand_result = rand() % 26;
        }
        while ( iteration_count < 1000 );
        dword_140404A6C[scaled_index + 278847551 + (int)dword_140404A6C[scaled_index + 278847455 + rand_result]] = rand_result;
        sub_1400C5750(item);
        LOBYTE(dword_140404A6C[item_record_offset + 278846130]) = 0;
        sr_item_link_text_line(item, 1);
        table_value_2 = dword_140404A6C[item_record_offset + 278847324];
      }
    }
  }
  if ( table_value_2 == 2 )
  {
    sub_1400C8500(item);
    table_value_2 = dword_140404A6C[item_record_offset + 278847324];
  }
  if ( table_value_2 == 3 )
    sub_1400C9820(item);
}

