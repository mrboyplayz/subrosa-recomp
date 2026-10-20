#include "shared_client.h"

//----- (0000000140054130) ----------------------------------------------------
__int64            sr_CreateItem(int a1, float *a2, unsigned int *a3, float *a4)
{
  __int64 input_value;
  unsigned int *state_address;
  unsigned int item;
  __int64 scaled_index;
  unsigned int table_value;
  unsigned int *position;
  unsigned int *velocity;
  unsigned int *rotation;
  unsigned int float_word;
  unsigned int masked_bits;
  signed int physics_create_body_result;
  __int64 scaled_index_2;
  unsigned int scaled_index_3;
  __int64 table_value_2;
  signed int iteration_count;
  __int64 remaining_count;
  unsigned int *record_byte_offset;
  __m128i si128;
  unsigned int *world_point;
  float scaled_value;
  float scaled_value_2;
  float product_difference;
  float combined_products;
  unsigned int body;
  unsigned int *world_point_2;
  float product_difference_2;
  unsigned int body_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140054130[16];
#define point (*(unsigned int (*))(void *)(sr_frame_140054130 + 0)) /* [rsp+30h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_140054130 + 4)) /* [rsp+34h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_140054130 + 8)) /* [rsp+38h] */

  input_value = a1;
  state_address = &g_182BBB180;
  item = 0;
  while ( *state_address )
  {
    ++item;
    state_address += 1760;
    if ( (__int64)state_address >= (__int64)&g_18329B180 )
      return 0xFFFFFFFFLL;
  }
  if ( item == -1 )
    return 0xFFFFFFFFLL;
  scaled_index = 1760LL * (int)item;
  crt_memset((void *)(uintptr_t)(&dword_140404A6C[scaled_index + 278845894]), 0, 0x1B7Cu);
  table_value = 0;
  dword_140404A6C[scaled_index + 278845893] = 1;
  dword_140404A6C[scaled_index + 278845898] = input_value;
  dword_140404A6C[scaled_index + 278845900] = 0xFFFF;
  *(_QWORD *)&dword_140404A6C[scaled_index + 278845901] = -1;
  position = &dword_140404A6C[scaled_index + 278845916];
  dword_140404A6C[scaled_index + 278845903] = -1;
  velocity = &dword_140404A6C[scaled_index + 278845925];
  dword_140404A6C[scaled_index + 278845899] = dword_140404A6C[1268 * input_value + 278521287];
  *position = *(_DWORD *)a2;
  position[1] = *((_DWORD *)a2 + 1);
  position[2] = *((_DWORD *)a2 + 2);
  dword_140404A6C[scaled_index + 278845919] = *(_DWORD *)a2;
  dword_140404A6C[scaled_index + 278845920] = *((_DWORD *)a2 + 1);
  dword_140404A6C[scaled_index + 278845921] = *((_DWORD *)a2 + 2);
  if ( a3 )
  {
    *velocity = *a3;
    velocity[1] = a3[1];
    table_value = a3[2];
  }
  else
  {
    *(_QWORD *)velocity = 0;
  }
  velocity[2] = table_value;
  rotation = &dword_140404A6C[scaled_index + 278845934];
  float_word = dword_140404A6C[1268 * input_value + 278521353];
  *rotation = *(_DWORD *)a4;
  rotation[1] = *((_DWORD *)a4 + 1);
  rotation[2] = *((_DWORD *)a4 + 2);
  dword_140404A6C[scaled_index + 278845937] = *((_DWORD *)a4 + 3);
  dword_140404A6C[scaled_index + 278845938] = *((_DWORD *)a4 + 4);
  dword_140404A6C[scaled_index + 278845939] = *((_DWORD *)a4 + 5);
  dword_140404A6C[scaled_index + 278845940] = *((_DWORD *)a4 + 6);
  dword_140404A6C[scaled_index + 278845941] = *((_DWORD *)a4 + 7);
  dword_140404A6C[scaled_index + 278845942] = *((_DWORD *)a4 + 8);
  dword_140404A6C[scaled_index + 278846058] = dword_140404A6C[1268 * input_value + 278521354];
  dword_140404A6C[scaled_index + 278846059] = dword_140404A6C[1268 * input_value + 278521355];
  dword_140404A6C[scaled_index + 278846057] = float_word;
  *(float *)&dword_140404A6C[scaled_index + 278846054] = 1.0 / *(float *)&float_word;
  *(float *)&masked_bits = 1.0 / *(float *)&dword_140404A6C[scaled_index + 278846059];
  *(float *)&dword_140404A6C[scaled_index + 278846055] = 1.0 / *(float *)&dword_140404A6C[scaled_index + 278846058];
  dword_140404A6C[scaled_index + 278846056] = masked_bits;
  physics_create_body_result = sr_physics_create_body(3u, position, rotation, velocity, dword_140404A6C[scaled_index + 278845899], &dword_140404A6C[scaled_index + 278846054]);
  dword_140404A6C[scaled_index + 278845915] = physics_create_body_result;
  scaled_index_2 = 47LL * physics_create_body_result;
  dword_140404A6C[scaled_index + 278845975] = dword_140404A6C[1268 * input_value + 278521293];
  scaled_index_3 = dword_140404A6C[1268 * input_value + 278521294];
  dword_140404A6C[scaled_index_2 + 18215712] = item;
  dword_140404A6C[scaled_index + 278845971] = 100;
  dword_140404A6C[scaled_index + 278845974] = scaled_index_3;
  dword_140404A6C[scaled_index + 278845973] = 0;
  dword_140404A6C[scaled_index + 278845980] = -1;
  dword_140404A6C[scaled_index + 278846053] = -1;
  dword_140404A6C[scaled_index + 278846100] = -1;
  switch ( (_DWORD)input_value )
  {
    case 0x27:
      table_value_2 = (int)dword_140404A6C[scaled_index + 278846111];
      iteration_count = 2;
      dword_140404A6C[scaled_index + 278847170] = 2;
      dword_140404A6C[scaled_index + 278847323] = -1;
      strcpy((char *)&dword_140404A6C[1760 * (int)item + 278846114 + 16 * table_value_2], "STARTING CS-DOS...");
      sub_1400C3E00(item);
      sub_1400C3E00(item);
      sub_1400C6D90(item, 0);
      do
        sr_item_link_text_line(item, iteration_count++);
      while ( iteration_count < 24 );
      remaining_count = 32;
      record_byte_offset = &dword_140404A6C[scaled_index + 278846626];
      do
      {
        si128 = _mm_load_si128((     __m128i *)&xmmword_140279200);
        _mm_storeu_si128((__m128i *)(void *)record_byte_offset, si128);
        _mm_storeu_si128((__m128i *)(void *)(record_byte_offset + 4), si128);
        _mm_storeu_si128((__m128i *)(void *)(record_byte_offset + 8), si128);
        record_byte_offset += 16;
        *((_QWORD *)record_byte_offset - 2) = SR_VEC_LANES(128, si128, i64)[0];
        *(record_byte_offset - 2) = SR_VEC_LANES(128, si128, i32)[0];
        *((_WORD *)record_byte_offset - 2) = SR_VEC_LANES(128, si128, i16)[0];
        *((_BYTE *)record_byte_offset - 2) = SR_VEC_LANES(128, si128, i8)[0];
        --remaining_count;
      }
      while ( remaining_count );
      break;
    case 0x21:
      dword_140404A6C[scaled_index + 278846085] = *(_DWORD *)a2;
      dword_140404A6C[scaled_index + 278846086] = *((_DWORD *)a2 + 1);
      dword_140404A6C[scaled_index + 278846087] = *((_DWORD *)a2 + 2);
      break;
    case 0x1C:
      dword_140404A6C[scaled_index + 278846079] = *((_DWORD *)a4 + 6);
      world_point = &dword_140404A6C[scaled_index + 278846085];
      dword_140404A6C[scaled_index + 278846080] = *((_DWORD *)a4 + 7);
      dword_140404A6C[scaled_index + 278846081] = *((_DWORD *)a4 + 8);
      scaled_value = *a4;
      scaled_value_2 = *a2;
      unused_written_slot_2 = 0;
      product_difference = scaled_value_2 - (float)(scaled_value * 0.4375);
      *(float *)world_point = product_difference;
      *((float *)world_point + 1) = a2[1] - (float)(a4[1] * 0.4375);
      *((float *)world_point + 2) = a2[2] - (float)(a4[2] * 0.4375);
      *(float *)world_point = product_difference - (float)(a4[3] * 0.5);
      *((float *)world_point + 1) = *(float *)&dword_140404A6C[scaled_index + 278846086] - (float)(a4[4] * 0.5);
      combined_products = *(float *)&dword_140404A6C[scaled_index + 278846087] - (float)(a4[5] * 0.5);
      unused_written_slot = -1090519040;
      *((float *)world_point + 2) = combined_products;
      body = dword_140404A6C[scaled_index + 278845915];
      point = -1092616192;
      sr_physics_create_level_bond(body, &point, world_point);
      world_point_2 = &dword_140404A6C[scaled_index + 278846088];
      product_difference_2 = *a2 - (float)(*a4 * 0.4375);
      *(float *)world_point_2 = product_difference_2;
      *((float *)world_point_2 + 1) = a2[1] - (float)(a4[1] * 0.4375);
      *((float *)world_point_2 + 2) = a2[2] - (float)(a4[2] * 0.4375);
      *(float *)world_point_2 = (float)(a4[3] * 0.5) + product_difference_2;
      *((float *)world_point_2 + 1) = (float)(a4[4] * 0.5) + *(float *)&dword_140404A6C[scaled_index + 278846089];
      *((float *)world_point_2 + 2) = (float)(a4[5] * 0.5) + *(float *)&dword_140404A6C[scaled_index + 278846090];
      body_2 = dword_140404A6C[scaled_index + 278845915];
      unused_written_slot = 1056964608;
      sr_physics_create_level_bond(body_2, &point, world_point_2);
      break;
  }
  if ( game_connected )
  {
    if ( item <= 0x3FF )
      ++dword_140404A6C[item + 280648157];
  }
  return item;
}
#undef point
#undef unused_written_slot
#undef unused_written_slot_2

//----- (00000001400CB2D0) ----------------------------------------------------
__int64            sub_1400CB2D0(FILE *Stream, int a2)
{
  int iteration_count;
  int running_total;
  unsigned int *destination_buffer;
  int integer_sum;
  unsigned int *state_address;
  __int64 cached_integer_sum;
  __int64 scaled_index;
  char *destination_buffer_2;
  char *state_address_2;
  signed int element_index;
  __int64 scaled_index_2;
  unsigned int *destination_buffer_3;
  char *destination_buffer_4;
  signed int element_index_2;
  int *running_total_2;
  char *destination_buffer_5;
  int element_index_3;
  __int64 scaled_index_3;
  unsigned int *destination_buffer_6;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400CB2D0[32];
#define Buffer (*(int (*))(void *)(sr_frame_1400CB2D0 + 0)) /* [rsp+68h] */
#define iteration_count_2 (*(int (*))(void *)(sr_frame_1400CB2D0 + 8)) /* [rsp+70h] */
#define cached_scaled_index (*(__int64 (*))(void *)(sr_frame_1400CB2D0 + 16)) /* [rsp+78h] */

  Buffer = 1;
  if ( a2 )
  {
    crt_fread((__int64)&Buffer, 4, 1, (__int64)Stream);
    crt_fread((__int64)&g_1816A92B0, 4, 1, (__int64)Stream);
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(Stream));
    if ( Buffer != 1 )
      return 0;
    fread_sr((void *)(uintptr_t)(&g_1816A92B0), 4, 1, (FILE *)(uintptr_t)(Stream));
  }
  iteration_count = 0;
  if ( (int)g_1816A92B0 > 0 )
  {
    running_total = 0;
    do
    {
      destination_buffer = &dword_140404A6C[running_total + 273322514];
      if ( a2 )
        crt_fread((__int64)destination_buffer, 4, 3, (__int64)Stream);
      else
        fread_sr((void *)(uintptr_t)(destination_buffer), 4, 3, (FILE *)(uintptr_t)(Stream));
      ++iteration_count;
      running_total += 3;
    }
    while ( iteration_count < (int)g_1816A92B0 );
  }
  if ( a2 )
    crt_fread((__int64)&g_1816AAAB4, 4, 1, (__int64)Stream);
  else
    fread_sr((void *)(uintptr_t)(&g_1816AAAB4), 4, 1, (FILE *)(uintptr_t)(Stream));
  integer_sum = 0;
  iteration_count_2 = 0;
  if ( (int)g_1816AAAB4 > 0 )
  {
    state_address = &g_1816AB2C8;
    do
    {
      cached_integer_sum = integer_sum;
      scaled_index = 26648LL * integer_sum;
      cached_scaled_index = scaled_index;
      destination_buffer_2 = (char *)&g_1816AAAB8 + scaled_index;
      state_address_2 = (char *)&g_1816962A0 + scaled_index;
      if ( a2 )
      {
        crt_fread((__int64)destination_buffer_2, 4, 3, (__int64)Stream);
        crt_fread((__int64)(state_address_2 + 84004), 4, 1, (__int64)Stream);
      }
      else
      {
        fread_sr((void *)(uintptr_t)(destination_buffer_2), 4, 3, (FILE *)(uintptr_t)(Stream));
        fread_sr((void *)(uintptr_t)(state_address_2 + 84004), 4, 1, (FILE *)(uintptr_t)(Stream));
      }
      element_index = 0;
      if ( (int)*(state_address - 513) > 0 )
      {
        scaled_index_2 = 6662 * cached_integer_sum;
        do
        {
          destination_buffer_3 = &dword_140404A6C[scaled_index_2 + 273324055 + element_index];
          if ( a2 )
            crt_fread((__int64)destination_buffer_3, 4, 1, (__int64)Stream);
          else
            fread_sr((void *)(uintptr_t)(destination_buffer_3), 4, 1, (FILE *)(uintptr_t)(Stream));
          ++element_index;
        }
        while ( element_index < (int)*(state_address - 513) );
      }
      destination_buffer_4 = (char *)&g_1816AB2C8 + scaled_index;
      if ( a2 )
        crt_fread((__int64)destination_buffer_4, 4, 1, (__int64)Stream);
      else
        fread_sr((void *)(uintptr_t)(destination_buffer_4), 4, 1, (FILE *)(uintptr_t)(Stream));
      element_index_2 = 0;
      if ( (int)*state_address > 0 )
      {
        running_total_2 = (int *)(state_address + 2);
        do
        {
          destination_buffer_5 = (char *)&dword_140404A6C[9 * element_index_2 + 273324569] + scaled_index;
          if ( a2 )
            crt_fread((__int64)destination_buffer_5, 4, 1, (__int64)Stream);
          else
            fread_sr((void *)(uintptr_t)(destination_buffer_5), 4, 1, (FILE *)(uintptr_t)(Stream));
          element_index_3 = 0;
          if ( *running_total_2 > 0 )
          {
            scaled_index_3 = 9LL * element_index_2 + 6662LL * iteration_count_2;
            do
            {
              destination_buffer_6 = &dword_140404A6C[scaled_index_3 + 273324570 + element_index_3];
              if ( a2 )
                crt_fread((__int64)destination_buffer_6, 4, 1, (__int64)Stream);
              else
                fread_sr((void *)(uintptr_t)(destination_buffer_6), 4, 1, (FILE *)(uintptr_t)(Stream));
              ++element_index_3;
            }
            while ( element_index_3 < *running_total_2 );
            scaled_index = cached_scaled_index;
          }
          ++element_index_2;
          running_total_2 += 9;
        }
        while ( element_index_2 < (int)*state_address );
      }
      state_address += 6662;
      integer_sum = ++iteration_count_2;
    }
    while ( iteration_count_2 < (int)g_1816AAAB4 );
  }
  return 1;
}
#undef Buffer
#undef iteration_count_2
#undef cached_scaled_index

//----- (00000001400CB5F0) ----------------------------------------------------
void            sub_1400CB5F0(int a1, char *a2)
{
  __int64 file_handle;
  __int64 file_handle_2;
  unsigned int *state_address;
  int i;
  int element_index;
  unsigned int *state_address_2;
  __int64 scaled_index;
  signed int element_index_2;
  int iteration_count;
  int running_total;
  int integer_sum;
  unsigned int *state_address_3;
  __int64 cached_integer_sum;
  __int64 scaled_index_2;
  signed int element_index_3;
  __int64 scaled_index_3;
  signed int element_index_4;
  int *running_total_2;
  int element_index_5;
  __int64 scaled_index_4;
  __int64 record_word_offset;
  void *allocation_buffer;
  __int64 allocated_buffer;
  void *allocation_buffer_2;
  __int64 allocated_buffer_2;
  signed int iteration_count_2;
  __int64 record_byte_offset;
  __int64 running_total_3;
  unsigned int table_value;
  __int64 masked_bits;
  __int64 masked_bits_2;
  int state_word;
  unsigned int *state_address_4;
  int iteration_count_3;
  signed __int64 state_address_5;
  unsigned int *state_address_6;
  int loaded_word;
  signed int iteration_count_4;
  _DWORD *buffer_cursor;
  unsigned int integer_sum_2;
  int iteration_count_5;
  unsigned int *state_address_7;
  unsigned int scaled_index_5;
  unsigned int scaled_index_6;
  unsigned int table_value_2;
  unsigned int table_value_3;
  __int64 scaled_index_7;
  __int64 scaled_index_8;
  __int64 scaled_index_9;
  __int64 scaled_index_10;
  __int64 scaled_index_11;
  __int64 scaled_index_12;
  void *allocation_buffer_3;
  __m128i *allocated_buffer_3;
  unsigned int table_value_4;
  __m128i *allocated_buffer_4;
  unsigned int table_value_5;
  unsigned int state_word_2;
  __int64 allocated_buffer_5;
  int iteration_count_6;
  __int64 running_total_4;
  unsigned int table_value_6;
  __int64 masked_bits_3;
  int state_word_3;
  int iteration_count_7;
  __int64 masked_bits_4;
  unsigned int *state_address_8;
  unsigned int *state_address_9;
  int loaded_word_2;
  __int64 allocated_buffer_6;
  signed int iteration_count_8;
  __int64 element_index_6;
  unsigned int table_value_7;
  __int64 table_value_8;
  __int64 allocated_buffer_7;
  signed int iteration_count_9;
  _DWORD *running_total_5;
  int iteration_count_10;
  char *record_byte_offset_2;
  int masked_bits_5;
  __int64 allocated_buffer_8;
  __int64 scaled_index_13;
  __int64 scaled_index_14;
  __int64 scaled_index_15;
  __int64 scaled_index_16;
  __int64 scaled_index_17;
  __int64 scaled_index_18;
  __int64 scaled_index_19;
  __int64 scaled_index_20;
  __int64 scaled_index_21;
  __int64 scaled_index_22;
  __int64 scaled_index_23;
  __int64 scaled_index_24;
  int iteration_count_11;
  unsigned int *state_address_10;
  signed int iteration_count_12;
  __int64 record_byte_offset_3;
  __int64 masked_bits_6;
  __int64 loaded_word_3;
  __int64 loaded_word_4;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  __int64 loaded_word_5;
  float combined_products;
  float combined_products_2;
  float combined_products_3;
  __int64 loaded_word_6;
  float *weighted_sum_4;
  float combined_products_4;
  float combined_products_5;
  float combined_products_6;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400CB5F0[160];
#define saved_element_index (*(int (*))(void *)(sr_frame_1400CB5F0 + 0)) /* [rsp+20h] */
#define Buffer (*(int (*))(void *)(sr_frame_1400CB5F0 + 4)) /* [rsp+24h] */
#define cached_scaled_index (*(__int64 (*))(void *)(sr_frame_1400CB5F0 + 8)) /* [rsp+28h] */
#define callee_output_word (*(int (*))(void *)(sr_frame_1400CB5F0 + 144)) /* [rsp+B0h] */
#define iteration_count_13 (*(int (*))(void *)(sr_frame_1400CB5F0 + 152)) /* [rsp+B8h] */

  file_handle = crt_fopen(a2, "rb");
  file_handle_2 = file_handle;
  state_address = &g_1816992A8;
  if ( file_handle )
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(file_handle));
    if ( Buffer != 3 )
    {
      crt_fclose(file_handle_2);
      return;
    }
    fread_sr((void *)(uintptr_t)(&callee_output_word), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
    if ( !callee_output_word )
    {
      iteration_count_13 = 2;
      fread_sr((void *)(uintptr_t)(&iteration_count_13), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
      if ( iteration_count_13 == 2 )
      {
        fread_sr((void *)(uintptr_t)(&g_1816962A0), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
        for ( i = 0; i < (int)g_1816962A0; ++i )
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[2 * i + 273303054 + i]), 4, 3, (FILE *)(uintptr_t)(file_handle_2));
        fread_sr((void *)(uintptr_t)(&g_1816992A4), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
        element_index = 0;
        saved_element_index = 0;
        if ( (int)g_1816992A4 > 0 )
        {
          state_address_2 = &g_1816992A8;
          do
          {
            scaled_index = 13LL * element_index;
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index + 273306127]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
            element_index_2 = 0;
            if ( (int)*state_address_2 > 0 )
            {
              do
              {
                fread_sr((void *)(uintptr_t)(&dword_140404A6C[13 * element_index + 273306128 + element_index_2]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
                fread_sr((void *)(uintptr_t)(&dword_140404A6C[2 * element_index_2++ + 273306132 + scaled_index]), 4, 2, (FILE *)(uintptr_t)(file_handle_2));
              }
              while ( element_index_2 < (int)*state_address_2 );
              element_index = saved_element_index;
            }
            ++element_index;
            state_address_2 += 13;
            saved_element_index = element_index;
          }
          while ( element_index < (int)g_1816992A4 );
        }
      }
    }
    fread_sr((void *)(uintptr_t)(&callee_output_word), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
    if ( callee_output_word == 1 )
    {
      saved_element_index = 1;
      fread_sr((void *)(uintptr_t)(&saved_element_index), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
      if ( saved_element_index == 1 )
      {
        fread_sr((void *)(uintptr_t)(&g_1816A92B0), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
        iteration_count = 0;
        if ( (int)g_1816A92B0 > 0 )
        {
          running_total = 0;
          do
          {
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[running_total + 273322514]), 4, 3, (FILE *)(uintptr_t)(file_handle_2));
            ++iteration_count;
            running_total += 3;
          }
          while ( iteration_count < (int)g_1816A92B0 );
        }
        fread_sr((void *)(uintptr_t)(&g_1816AAAB4), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
        integer_sum = 0;
        iteration_count_13 = 0;
        if ( (int)g_1816AAAB4 > 0 )
        {
          state_address_3 = &g_1816AB2C8;
          do
          {
            cached_integer_sum = integer_sum;
            scaled_index_2 = 26648LL * integer_sum;
            cached_scaled_index = scaled_index_2;
            fread_sr((void *)(uintptr_t)((char *)&g_1816AAAB8 + scaled_index_2), 4, 3, (FILE *)(uintptr_t)(file_handle_2));
            fread_sr((void *)(uintptr_t)((char *)&g_1816AAAC4 + scaled_index_2), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
            element_index_3 = 0;
            if ( (int)*(state_address_3 - 513) > 0 )
            {
              scaled_index_3 = 6662 * cached_integer_sum;
              do
                fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index_3 + 273324055 + element_index_3++]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
              while ( element_index_3 < (int)*(state_address_3 - 513) );
            }
            fread_sr((void *)(uintptr_t)((char *)&g_1816AB2C8 + scaled_index_2), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
            element_index_4 = 0;
            if ( (int)*state_address_3 > 0 )
            {
              running_total_2 = (int *)(state_address_3 + 2);
              do
              {
                fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[9 * element_index_4 + 273324569] + scaled_index_2), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
                element_index_5 = 0;
                if ( *running_total_2 > 0 )
                {
                  scaled_index_4 = 9LL * element_index_4 + 6662LL * iteration_count_13;
                  do
                    fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index_4 + 273324570 + element_index_5++]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
                  while ( element_index_5 < *running_total_2 );
                  scaled_index_2 = cached_scaled_index;
                }
                ++element_index_4;
                running_total_2 += 9;
              }
              while ( element_index_4 < (int)*state_address_3 );
            }
            state_address_3 += 6662;
            integer_sum = ++iteration_count_13;
          }
          while ( iteration_count_13 < (int)g_1816AAAB4 );
        }
      }
    }
    crt_fclose(file_handle_2);
    state_address = &g_1816992A8;
  }
  record_word_offset = 1268LL * a1;
  allocation_buffer = *(void **)&dword_140404A6C[record_word_offset + 278522543];
  dword_140404A6C[record_word_offset + 278522541] = g_1816962A0;
  free(allocation_buffer);
  allocated_buffer = sr_path_malloc((int)(12 * dword_140404A6C[record_word_offset + 278522541]));
  allocation_buffer_2 = *(void **)&dword_140404A6C[record_word_offset + 278522545];
  *(_QWORD *)&dword_140404A6C[record_word_offset + 278522543] = allocated_buffer;
  free(allocation_buffer_2);
  allocated_buffer_2 = sr_path_malloc((int)(8 * dword_140404A6C[record_word_offset + 278522541]));
  iteration_count_2 = 0;
  *(_QWORD *)&dword_140404A6C[record_word_offset + 278522545] = allocated_buffer_2;
  if ( (int)dword_140404A6C[record_word_offset + 278522541] > 0 )
  {
    record_byte_offset = 0;
    running_total_3 = 0;
    do
    {
      table_value = dword_140404A6C[running_total_3 + 273303054];
      running_total_3 += 3;
      masked_bits = *(_QWORD *)&dword_140404A6C[record_word_offset + 278522543];
      record_byte_offset += 8;
      ++iteration_count_2;
      *(_DWORD *)(running_total_3 * 4 + masked_bits - 12) = table_value;
      *(_DWORD *)(running_total_3 * 4 + masked_bits - 8) = dword_140404A6C[running_total_3 + 273303052];
      *(_DWORD *)(running_total_3 * 4 + masked_bits - 4) = dword_140404A6C[running_total_3 + 273303053];
      masked_bits_2 = *(_QWORD *)&dword_140404A6C[record_word_offset + 278522545];
      *(_DWORD *)(record_byte_offset + masked_bits_2 - 8) = dword_140404A6C[running_total_3 + 273304587];
      *(_DWORD *)(record_byte_offset + masked_bits_2 - 4) = dword_140404A6C[running_total_3 + 273304588];
    }
    while ( iteration_count_2 < (int)dword_140404A6C[record_word_offset + 278522541] );
  }
  state_word = g_1816992A4;
  state_address_4 = &g_16A94BDB4;
  iteration_count_3 = 0;
  g_16A94BDAC = g_1816992A4;
  if ( (int)g_1816992A4 > 0 )
  {
    state_address_5 = (char *)&g_1816992AC - (char *)&g_16A94BDB4;
    state_address_6 = &g_16A94BDB0;
    do
    {
      loaded_word = *state_address;
      iteration_count_4 = 0;
      *state_address_6 = *state_address;
      if ( loaded_word > 0 )
      {
        buffer_cursor = state_address_6 + 1;
        do
        {
          ++iteration_count_4;
          *buffer_cursor = *(_DWORD *)((char *)buffer_cursor + state_address_5);
          ++buffer_cursor;
        }
        while ( iteration_count_4 < (int)*state_address_6 );
      }
      state_word = g_16A94BDAC;
      ++iteration_count_3;
      state_address += 13;
      state_address_6 += 5;
      state_address_5 += 32LL;
    }
    while ( iteration_count_3 < (int)g_16A94BDAC );
  }
  integer_sum_2 = 0;
  iteration_count_5 = 0;
  mesh_triangle_count = 0;
  if ( state_word > 0 )
  {
    state_address_7 = &g_1816992C8;
    do
    {
      scaled_index_5 = *(state_address_7 - 3);
      scaled_index_6 = *(state_address_7 - 2);
      table_value_2 = state_address_7[1];
      table_value_3 = state_address_7[2];
      dword_140404A6C[3 * integer_sum_2 + 177495248] = *state_address_4;
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = state_address_4[1];
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = state_address_4[2];
      scaled_index_7 = 6 * mesh_triangle_count;
      dword_140404A6C[scaled_index_7 + 178011345] = scaled_index_5;
      dword_140404A6C[scaled_index_7 + 178011346] = scaled_index_6;
      scaled_index_8 = 6 * mesh_triangle_count;
      dword_140404A6C[scaled_index_8 + 178011347] = *(state_address_7 - 1);
      dword_140404A6C[scaled_index_8 + 178011348] = *state_address_7;
      scaled_index_9 = 6 * mesh_triangle_count;
      dword_140404A6C[scaled_index_9 + 178011349] = table_value_2;
      dword_140404A6C[scaled_index_9 + 178011350] = table_value_3;
      integer_sum_2 = ++mesh_triangle_count;
      if ( *(state_address_4 - 1) == 4 )
      {
        dword_140404A6C[3 * integer_sum_2 + 177495248] = *state_address_4;
        dword_140404A6C[3 * mesh_triangle_count + 177495249] = state_address_4[2];
        dword_140404A6C[3 * mesh_triangle_count + 177495250] = state_address_4[3];
        scaled_index_10 = 6 * mesh_triangle_count;
        dword_140404A6C[scaled_index_10 + 178011345] = scaled_index_5;
        dword_140404A6C[scaled_index_10 + 178011346] = scaled_index_6;
        scaled_index_11 = 6 * mesh_triangle_count;
        dword_140404A6C[scaled_index_11 + 178011347] = table_value_2;
        dword_140404A6C[scaled_index_11 + 178011348] = table_value_3;
        scaled_index_12 = 6 * mesh_triangle_count;
        dword_140404A6C[scaled_index_12 + 178011349] = state_address_7[3];
        dword_140404A6C[scaled_index_12 + 178011350] = state_address_7[4];
        integer_sum_2 = ++mesh_triangle_count;
      }
      ++iteration_count_5;
      state_address_4 += 5;
      state_address_7 += 13;
    }
    while ( iteration_count_5 < (int)g_16A94BDAC );
  }
  allocation_buffer_3 = *(void **)&dword_140404A6C[record_word_offset + 278522549];
  dword_140404A6C[record_word_offset + 278522547] = integer_sum_2;
  free(allocation_buffer_3);
  allocated_buffer_3 = (__m128i *)sr_path_malloc((int)(12 * dword_140404A6C[record_word_offset + 278522547]));
  table_value_4 = dword_140404A6C[record_word_offset + 278522547];
  *(_QWORD *)&dword_140404A6C[record_word_offset + 278522549] = (uint64)(uintptr_t)(allocated_buffer_3);
  crt_memcpy(allocated_buffer_3, (     __m128i *)&g_16A91BDAC, (int)(12 * table_value_4));
  free(*(void **)&dword_140404A6C[record_word_offset + 278522551]);
  allocated_buffer_4 = (__m128i *)sr_path_malloc((int)(24 * dword_140404A6C[record_word_offset + 278522547]));
  table_value_5 = dword_140404A6C[record_word_offset + 278522547];
  *(_QWORD *)&dword_140404A6C[record_word_offset + 278522551] = (uint64)(uintptr_t)(allocated_buffer_4);
  crt_memcpy(allocated_buffer_4, (     __m128i *)(unsigned int *)&g_16AB13DB0, (int)(24 * table_value_5));
  state_word_2 = g_1816A92B0;
  dword_140404A6C[record_word_offset + 278522247] = g_1816A92B0;
  allocated_buffer_5 = sr_path_malloc((int)(12 * state_word_2));
  iteration_count_6 = 0;
  *(_QWORD *)&dword_140404A6C[record_word_offset + 278522249] = allocated_buffer_5;
  if ( (int)g_1816A92B0 > 0 )
  {
    running_total_4 = 0;
    do
    {
      table_value_6 = dword_140404A6C[running_total_4 + 273322514];
      running_total_4 += 3;
      masked_bits_3 = *(_QWORD *)&dword_140404A6C[record_word_offset + 278522249];
      ++iteration_count_6;
      *(_DWORD *)(running_total_4 * 4 + masked_bits_3 - 12) = table_value_6;
      *(_DWORD *)(running_total_4 * 4 + masked_bits_3 - 8) = dword_140404A6C[running_total_4 + 273322512];
      *(_DWORD *)(running_total_4 * 4 + masked_bits_3 - 4) = dword_140404A6C[running_total_4 + 273322513];
    }
    while ( iteration_count_6 < (int)g_1816A92B0 );
  }
  state_word_3 = g_1816AAAB4;
  iteration_count_7 = 0;
  dword_140404A6C[record_word_offset + 278522251] = g_1816AAAB4;
  if ( state_word_3 > 0 )
  {
    masked_bits_4 = -(__int64)&g_1816AB2D0;
    state_address_8 = &dword_140404A6C[record_word_offset + 278522263];
    state_address_9 = &g_1816AAAC4;
    do
    {
      *(state_address_8 - 10) = *(state_address_9 - 3);
      *(state_address_8 - 9) = *(state_address_9 - 2);
      *(state_address_8 - 8) = *(state_address_9 - 1);
      loaded_word_2 = *state_address_9;
      *(state_address_8 - 7) = *state_address_9;
      allocated_buffer_6 = sr_path_malloc(4 * loaded_word_2);
      iteration_count_8 = 0;
      *((_QWORD *)state_address_8 - 3) = allocated_buffer_6;
      if ( (int)*state_address_9 > 0 )
      {
        element_index_6 = 0;
        do
        {
          table_value_7 = state_address_9[++element_index_6];
          ++iteration_count_8;
          *(_DWORD *)(element_index_6 * 4 + *((_QWORD *)state_address_8 - 3) - 4) = table_value_7;
        }
        while ( iteration_count_8 < (int)*state_address_9 );
      }
      table_value_8 = (int)state_address_9[513];
      *(state_address_8 - 4) = table_value_8;
      allocated_buffer_7 = sr_path_malloc(36 * table_value_8);
      iteration_count_9 = 0;
      *((_QWORD *)state_address_8 - 1) = allocated_buffer_7;
      if ( (int)state_address_9[513] > 0 )
      {
        running_total_5 = state_address_9 + 515;
        do
        {
          iteration_count_10 = 0;
          *(_DWORD *)((char *)running_total_5 + *((_QWORD *)state_address_8 - 1) + masked_bits_4 + 4) = *running_total_5;
          if ( (int)*running_total_5 > 0 )
          {
            record_byte_offset_2 = (char *)running_total_5 + masked_bits_4 + 8;
            do
            {
              masked_bits_5 = *(_DWORD *)&record_byte_offset_2[(_QWORD)state_address_9 + 2056];
              record_byte_offset_2 += 4;
              ++iteration_count_10;
              *(_DWORD *)&record_byte_offset_2[*((_QWORD *)state_address_8 - 1) - 4] = masked_bits_5;
            }
            while ( iteration_count_10 < *running_total_5 );
          }
          ++iteration_count_9;
          running_total_5 += 9;
        }
        while ( iteration_count_9 < (int)state_address_9[513] );
      }
      *state_address_8 = 0;
      allocated_buffer_8 = sr_path_malloc(144);
      scaled_index_13 = (int)*state_address_8;
      *((_QWORD *)state_address_8 + 1) = allocated_buffer_8;
      *(_DWORD *)(allocated_buffer_8 + 12 * scaled_index_13) = dword_1402B3750[0];
      *(_DWORD *)(*((_QWORD *)state_address_8 + 1) + 12LL * (int)*state_address_8 + 4) = dword_1402B3754[0];
      scaled_index_14 = (int)*state_address_8;
      *state_address_8 = scaled_index_14 + 1;
      *(_DWORD *)(*((_QWORD *)state_address_8 + 1) + 12 * (scaled_index_14 + 1)) = dword_1402B3758[0];
      *(_DWORD *)(*((_QWORD *)state_address_8 + 1) + 12LL * (int)*state_address_8 + 4) = dword_1402B375C[0];
      scaled_index_15 = (int)*state_address_8;
      *state_address_8 = scaled_index_15 + 1;
      *(_DWORD *)(*((_QWORD *)state_address_8 + 1) + 12 * (scaled_index_15 + 1)) = dword_1402B3760[0];
      *(_DWORD *)(*((_QWORD *)state_address_8 + 1) + 12LL * (int)*state_address_8 + 4) = dword_1402B3764[0];
      scaled_index_16 = (int)*state_address_8;
      *state_address_8 = scaled_index_16 + 1;
      *(_DWORD *)(*((_QWORD *)state_address_8 + 1) + 12 * (scaled_index_16 + 1)) = dword_1402B3768;
      *(_DWORD *)(*((_QWORD *)state_address_8 + 1) + 12LL * (int)*state_address_8 + 4) = dword_1402B376C;
      scaled_index_17 = (int)*state_address_8;
      *state_address_8 = scaled_index_17 + 1;
      *(_DWORD *)(*((_QWORD *)state_address_8 + 1) + 12 * (scaled_index_17 + 1)) = dword_1402B3770;
      *(_DWORD *)(*((_QWORD *)state_address_8 + 1) + 12LL * (int)*state_address_8 + 4) = dword_1402B3774;
      scaled_index_18 = (int)*state_address_8;
      *state_address_8 = scaled_index_18 + 1;
      *(_DWORD *)(*((_QWORD *)state_address_8 + 1) + 12 * (scaled_index_18 + 1)) = dword_1402B3778;
      *(_DWORD *)(*((_QWORD *)state_address_8 + 1) + 12LL * (int)*state_address_8 + 4) = dword_1402B377C;
      scaled_index_19 = (int)*state_address_8;
      *state_address_8 = scaled_index_19 + 1;
      ++iteration_count_7;
      state_address_9 += 6662;
      masked_bits_4 -= 26648;
      *(_DWORD *)(*((_QWORD *)state_address_8 + 1) + 12 * (scaled_index_19 + 1)) = dword_1402B3780;
      *(_DWORD *)(*((_QWORD *)state_address_8 + 1) + 12LL * (int)*state_address_8 + 4) = dword_1402B3784;
      scaled_index_20 = (int)*state_address_8;
      *state_address_8 = scaled_index_20 + 1;
      *(_DWORD *)(*((_QWORD *)state_address_8 + 1) + 12 * (scaled_index_20 + 1)) = dword_1402B3788;
      *(_DWORD *)(*((_QWORD *)state_address_8 + 1) + 12LL * (int)*state_address_8 + 4) = dword_1402B378C;
      scaled_index_21 = (int)*state_address_8;
      *state_address_8 = scaled_index_21 + 1;
      *(_DWORD *)(*((_QWORD *)state_address_8 + 1) + 12 * (scaled_index_21 + 1)) = dword_1402B3790;
      *(_DWORD *)(*((_QWORD *)state_address_8 + 1) + 12LL * (int)*state_address_8 + 4) = dword_1402B3794;
      scaled_index_22 = (int)*state_address_8;
      *state_address_8 = scaled_index_22 + 1;
      *(_DWORD *)(*((_QWORD *)state_address_8 + 1) + 12 * (scaled_index_22 + 1)) = dword_1402B3798;
      *(_DWORD *)(*((_QWORD *)state_address_8 + 1) + 12LL * (int)*state_address_8 + 4) = dword_1402B379C;
      scaled_index_23 = (int)*state_address_8;
      *state_address_8 = scaled_index_23 + 1;
      *(_DWORD *)(*((_QWORD *)state_address_8 + 1) + 12 * (scaled_index_23 + 1)) = dword_1402B37A0;
      *(_DWORD *)(*((_QWORD *)state_address_8 + 1) + 12LL * (int)*state_address_8 + 4) = dword_1402B37A4;
      scaled_index_24 = (int)*state_address_8;
      *state_address_8 = scaled_index_24 + 1;
      *(_DWORD *)(*((_QWORD *)state_address_8 + 1) + 12 * (scaled_index_24 + 1)) = dword_1402B37A8;
      *(_DWORD *)(*((_QWORD *)state_address_8 + 1) + 12LL * (int)(*state_address_8)++ + 4) = dword_1402B37AC;
      state_word_3 = g_1816AAAB4;
      state_address_8 += 14;
    }
    while ( iteration_count_7 < (int)g_1816AAAB4 );
  }
  iteration_count_11 = 0;
  if ( state_word_3 > 0 )
  {
    state_address_10 = &dword_140404A6C[record_word_offset + 278522259];
    do
    {
      iteration_count_12 = 0;
      if ( (int)*state_address_10 > 0 )
      {
        record_byte_offset_3 = 0;
        do
        {
          masked_bits_6 = *(_QWORD *)&dword_140404A6C[record_word_offset + 278522249];
          loaded_word_3 = *((_QWORD *)state_address_10 + 1);
          loaded_word_4 = 3 * *(_DWORD *)(loaded_word_3 + record_byte_offset_3 + 8);
          weighted_sum = *(float *)(masked_bits_6 + 4 * loaded_word_4);
          weighted_sum_2 = *(float *)(masked_bits_6 + 4 * loaded_word_4 + 4);
          weighted_sum_3 = *(float *)(masked_bits_6 + 4 * loaded_word_4 + 8);
          loaded_word_5 = 3 * *(_DWORD *)(loaded_word_3 + record_byte_offset_3 + 12);
          combined_products = *(float *)(masked_bits_6 + 4 * loaded_word_5 + 4) - weighted_sum_2;
          combined_products_2 = *(float *)(masked_bits_6 + 4 * loaded_word_5 + 8) - weighted_sum_3;
          combined_products_3 = *(float *)(masked_bits_6 + 4 * loaded_word_5) - weighted_sum;
          loaded_word_6 = 3 * *(_DWORD *)(loaded_word_3 + record_byte_offset_3 + 16);
          weighted_sum_4 = (float *)(record_byte_offset_3 + loaded_word_3 + 24);
          combined_products_4 = *(float *)(masked_bits_6 + 4 * loaded_word_6 + 4) - weighted_sum_2;
          combined_products_5 = *(float *)(masked_bits_6 + 4 * loaded_word_6 + 8) - weighted_sum_3;
          combined_products_6 = *(float *)(masked_bits_6 + 4 * loaded_word_6) - weighted_sum;
          *weighted_sum_4 = (float)(combined_products_4 * combined_products_2) - (float)(combined_products_5 * combined_products);
          weighted_sum_4[2] = (float)(combined_products * combined_products_6) - (float)(combined_products_4 * combined_products_3);
          weighted_sum_4[1] = (float)(combined_products_5 * combined_products_3) - (float)(combined_products_2 * combined_products_6);
          sr_math_vec3_normalize((__int64)weighted_sum_4, weighted_sum_4);
          ++iteration_count_12;
          record_byte_offset_3 += 36;
        }
        while ( iteration_count_12 < (int)*state_address_10 );
        state_word_3 = g_1816AAAB4;
      }
      ++iteration_count_11;
      state_address_10 += 14;
    }
    while ( iteration_count_11 < state_word_3 );
  }
}
#undef saved_element_index
#undef Buffer
#undef cached_scaled_index
#undef callee_output_word
#undef iteration_count_13

//----- (00000001400CC370) ----------------------------------------------------
__int64            sub_1400CC370(int a1, __int64 a2, int a3)
{
  __int64 input_value;
  int input_value_2;
  __int64 scaled_index;
  __int64 cached_input_value;
  unsigned int *destination_buffer;
  signed int i;
  unsigned int *destination_buffer_2;
  unsigned int *destination_buffer_3;
  signed int integer_sum;
  unsigned int *state_address;
  __int64 cached_integer_sum;
  unsigned int *destination_buffer_4;
  signed int element_index;
  __int64 scaled_index_2;
  unsigned int *destination_buffer_5;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400CC370[144];
#define cached_integer_sum_2 (*(signed int (*))(void *)(sr_frame_1400CC370 + 0)) /* [rsp+20h] */
#define scaled_index_3 (*(__int64 (*))(void *)(sr_frame_1400CC370 + 8)) /* [rsp+28h] */
#define scaled_index_4 (*(__int64 (*))(void *)(sr_frame_1400CC370 + 16)) /* [rsp+30h] */
#define destination_buffer_6 (*(int (*))(void *)(sr_frame_1400CC370 + 136)) /* [rsp+A8h] */

  input_value = a1;
  destination_buffer_6 = 2;
  input_value_2 = a3;
  if ( a3 )
  {
    crt_fread((__int64)&destination_buffer_6, 4, 1, a2);
    scaled_index = 9730 * input_value;
    cached_input_value = input_value;
    destination_buffer = &dword_140404A6C[9730 * input_value + 273303053];
    crt_fread((__int64)destination_buffer, 4, 1, a2);
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&destination_buffer_6), 4, 1, (FILE *)(uintptr_t)(a2));
    if ( destination_buffer_6 != 2 )
      return 0;
    scaled_index = 9730 * input_value;
    cached_input_value = input_value;
    destination_buffer = &dword_140404A6C[9730 * input_value + 273303053];
    fread_sr((void *)(uintptr_t)(destination_buffer), 4, 1, (FILE *)(uintptr_t)(a2));
  }
  for ( i = 0; i < (int)*destination_buffer; ++i )
  {
    destination_buffer_2 = &dword_140404A6C[3 * i + 273303054 + scaled_index];
    if ( input_value_2 )
      crt_fread((__int64)destination_buffer_2, 4, 3, a2);
    else
      fread_sr((void *)(uintptr_t)(destination_buffer_2), 4, 3, (FILE *)(uintptr_t)(a2));
  }
  destination_buffer_3 = &dword_140404A6C[scaled_index + 273306126];
  if ( input_value_2 )
    crt_fread((__int64)destination_buffer_3, 4, 1, a2);
  else
    fread_sr((void *)(uintptr_t)(destination_buffer_3), 4, 1, (FILE *)(uintptr_t)(a2));
  integer_sum = 0;
  cached_integer_sum_2 = 0;
  if ( (int)dword_140404A6C[scaled_index + 273306126] > 0 )
  {
    state_address = &dword_140404A6C[scaled_index + 273306127];
    do
    {
      cached_integer_sum = integer_sum;
      scaled_index_4 = 13LL * integer_sum;
      destination_buffer_4 = &dword_140404A6C[scaled_index_4 + 273306127 + scaled_index];
      if ( input_value_2 )
        crt_fread((__int64)destination_buffer_4, 4, 1, a2);
      else
        fread_sr((void *)(uintptr_t)(destination_buffer_4), 4, 1, (FILE *)(uintptr_t)(a2));
      element_index = 0;
      if ( (int)*state_address > 0 )
      {
        scaled_index_2 = 13 * cached_integer_sum + 9730 * cached_input_value;
        scaled_index_3 = 4865 * cached_input_value;
        do
        {
          destination_buffer_5 = &dword_140404A6C[scaled_index_2 + 273306128 + element_index];
          if ( a3 )
          {
            crt_fread((__int64)destination_buffer_5, 4, 1, a2);
            crt_fread((__int64)&dword_140404A6C[2 * element_index + 273306132 + 2 * scaled_index_3 + scaled_index_4], 4, 2, a2);
          }
          else
          {
            fread_sr((void *)(uintptr_t)(destination_buffer_5), 4, 1, (FILE *)(uintptr_t)(a2));
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[2 * element_index + 273306132 + 2 * scaled_index_3 + scaled_index_4]), 4, 2, (FILE *)(uintptr_t)(a2));
          }
          scaled_index_2 = 13 * cached_integer_sum + 9730 * cached_input_value;
          ++element_index;
        }
        while ( element_index < (int)*state_address );
        input_value_2 = a3;
      }
      integer_sum = cached_integer_sum_2 + 1;
      state_address += 13;
      cached_integer_sum_2 = integer_sum;
    }
    while ( integer_sum < (int)dword_140404A6C[scaled_index + 273306126] );
  }
  return 1;
}
#undef cached_integer_sum_2
#undef scaled_index_3
#undef scaled_index_4
#undef destination_buffer_6

//----- (00000001400E7960) ----------------------------------------------------
void            sub_1400E7960(int a1, char *a2)
{
  __int64 input_value;
  int saved_chdir_result;
  int chdir_result;
  __int64 integer_difference;
  char input_byte;
  __int64 file_handle;
  __int64 file_handle_2;
  unsigned int *state_address;
  signed int iteration_count;
  __int64 scaled_index;
  __int64 scaled_index_2;
  signed int element_index;
  unsigned int *state_address_2;
  int running_total;
  unsigned int *state_address_3;
       char *left_text;
  unsigned int *state_address_4;
  int loaded_word;
  int loaded_word_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E7960[576];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400E7960 + 0)) /* [rsp+0h] */
#define Buffer (*(int (*))(void *)(sr_frame_1400E7960 + 32)) /* [rsp+20h] */
#define chdir_result_2 (*(int (*))(void *)(sr_frame_1400E7960 + 36)) /* [rsp+24h] */
#define scratch_buffer (*(char (*)[512])(void *)(sr_frame_1400E7960 + 48)) /* [rsp+30h] */
#define unused_frame_slot_560 (*(__int64 (*))(void *)(sr_frame_1400E7960 + 560)) /* [rsp+230h] */

  input_value = a1;
  chdir_result_2 = crt_chdir("data");
  saved_chdir_result = chdir_result_2;
  chdir_result = crt_chdir("itemset");
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
    Buffer = 1;
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(file_handle));
    state_address = &dword_140404A6C[948 * input_value + 272299397];
    fread_sr((void *)(uintptr_t)(state_address + 19), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
    iteration_count = 0;
    if ( (int)state_address[19] > 0 )
    {
      do
      {
        scaled_index = 3792 * input_value + 116LL * iteration_count;
        fread_sr((void *)(uintptr_t)((char *)&g_1812C20D0 + scaled_index), 1, 64, (FILE *)(uintptr_t)(file_handle_2));
        fread_sr((void *)(uintptr_t)((char *)&g_1812C2114 + scaled_index), 4, 3, (FILE *)(uintptr_t)(file_handle_2));
        fread_sr((void *)(uintptr_t)((char *)&g_1812C2120 + scaled_index), 4, 3, (FILE *)(uintptr_t)(file_handle_2));
        fread_sr((void *)(uintptr_t)((char *)&g_1812C212C + scaled_index), 4, 3, (FILE *)(uintptr_t)(file_handle_2));
        fread_sr((void *)(uintptr_t)((char *)&g_1812C2138 + scaled_index), 4, 3, (FILE *)(uintptr_t)(file_handle_2));
        ++iteration_count;
      }
      while ( iteration_count < (int)dword_140404A6C[948 * input_value + 272299416] );
      saved_chdir_result = chdir_result_2;
    }
    crt_fclose(file_handle_2);
  }
  if ( !chdir_result )
    crt_chdir("..");
  if ( !saved_chdir_result )
    crt_chdir("..");
  scaled_index_2 = 948 * input_value;
  element_index = 0;
  if ( (int)dword_140404A6C[scaled_index_2 + 272299416] > 0 )
  {
    state_address_2 = &dword_140404A6C[scaled_index_2 + 272299433];
    do
    {
      running_total = 0;
      state_address_3 = &g_182A7E1B0;
      left_text = (     char *)&dword_140404A6C[29 * element_index + 272299417 + scaled_index_2];
      do
      {
        state_address_4 = &dword_140404A6C[29 * element_index + 272299417 + scaled_index_2];
        do
        {
          loaded_word = *((unsigned __int8 *)state_address_4 + ((char *)state_address_3 - left_text));
          loaded_word_2 = *(unsigned __int8 *)state_address_4 - loaded_word;
          if ( loaded_word_2 )
            break;
          state_address_4 = (unsigned int *)((char *)state_address_4 + 1);
        }
        while ( loaded_word );
        if ( !loaded_word_2 )
          *state_address_2 = running_total;
        if ( !strcmp_sr(left_text, (     char *)state_address_3 + 5072) )
          *state_address_2 = running_total + 1;
        running_total += 2;
        state_address_3 += 2536;
      }
      while ( running_total < 46 );
      ++element_index;
      state_address_2 += 29;
    }
    while ( element_index < (int)dword_140404A6C[scaled_index_2 + 272299416] );
  }
  return;
}
#undef unused_frame_slot_0
#undef Buffer
#undef chdir_result_2
#undef scratch_buffer
#undef unused_frame_slot_560

//----- (0000000140115FF0) ----------------------------------------------------
__int64            sub_140115FF0(int a1)
{
  __int64 record_word_offset;
  __int64 remaining_count;
  int rand_result;
  int rand_result_2;
  __int64 integer_sum;
  unsigned int table_value;
  __int64 integer_sum_2;
  __int64 result;

  record_word_offset = 290LL * a1;
  dword_140404A6C[290 * a1 + 273377606] = 1;
  remaining_count = 1024;
  dword_140404A6C[record_word_offset + 273377607] = 0;
  dword_140404A6C[record_word_offset + 273377608] = 1;
  dword_140404A6C[record_word_offset + 273377609] = 2;
  dword_140404A6C[record_word_offset + 273377610] = 3;
  dword_140404A6C[record_word_offset + 273377611] = 4;
  dword_140404A6C[record_word_offset + 273377612] = 5;
  dword_140404A6C[record_word_offset + 273377613] = 6;
  dword_140404A6C[record_word_offset + 273377614] = 7;
  dword_140404A6C[record_word_offset + 273377615] = 8;
  dword_140404A6C[record_word_offset + 273377616] = 9;
  dword_140404A6C[record_word_offset + 273377617] = 10;
  dword_140404A6C[record_word_offset + 273377618] = 11;
  dword_140404A6C[record_word_offset + 273377619] = 12;
  dword_140404A6C[record_word_offset + 273377620] = 13;
  dword_140404A6C[record_word_offset + 273377621] = 14;
  dword_140404A6C[record_word_offset + 273377622] = 15;
  dword_140404A6C[record_word_offset + 273377623] = 16;
  dword_140404A6C[record_word_offset + 273377624] = 17;
  dword_140404A6C[record_word_offset + 273377625] = 18;
  dword_140404A6C[record_word_offset + 273377626] = 19;
  dword_140404A6C[record_word_offset + 273377627] = 20;
  dword_140404A6C[record_word_offset + 273377628] = 21;
  dword_140404A6C[record_word_offset + 273377629] = 22;
  dword_140404A6C[record_word_offset + 273377630] = 23;
  dword_140404A6C[record_word_offset + 273377631] = 24;
  dword_140404A6C[record_word_offset + 273377632] = 25;
  do
  {
    rand_result = rand() % 26;
    rand_result_2 = rand();
    integer_sum = record_word_offset + rand_result;
    table_value = dword_140404A6C[integer_sum + 273377607];
    integer_sum_2 = record_word_offset + rand_result_2 % 26;
    result = dword_140404A6C[integer_sum_2 + 273377607];
    dword_140404A6C[integer_sum + 273377607] = result;
    dword_140404A6C[integer_sum_2 + 273377607] = table_value;
    --remaining_count;
  }
  while ( remaining_count );
  return result;
}

//----- (000000014012C890) ----------------------------------------------------
__int64            sub_14012C890(int a1, char *a2, int a3)
{
  __int64 input_value;
  int chdir_result;
  int chdir_result_2;
  __int64 integer_difference;
  char input_byte;
  __int64 file_handle;
  __int64 file_handle_2;
  __int64 file_handle_3;
  __int64 scaled_index;
  unsigned int *state_address;
  signed int i;
  __int64 scaled_index_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012C890[576];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14012C890 + 0)) /* [rsp+0h] */
#define destination_buffer (*(int (*)[4])(void *)(sr_frame_14012C890 + 32)) /* [rsp+20h] */
#define scratch_buffer (*(char (*)[512])(void *)(sr_frame_14012C890 + 48)) /* [rsp+30h] */
#define unused_frame_slot_560 (*(__int64 (*))(void *)(sr_frame_14012C890 + 560)) /* [rsp+230h] */

  input_value = a1;
  chdir_result = crt_chdir("data");
  chdir_result_2 = crt_chdir("itemset");
  integer_difference = scratch_buffer - a2;
  do
  {
    input_byte = *a2;
    a2[integer_difference] = *a2;
    ++a2;
  }
  while ( input_byte );
  if ( a3 || (file_handle = crt_fopen(scratch_buffer, "rb")) == 0 )
  {
    file_handle_2 = crt_fopen(scratch_buffer, "wb");
    file_handle_3 = file_handle_2;
    if ( file_handle_2 )
    {
      destination_buffer[0] = 1;
      crt_fread((__int64)destination_buffer, 4, 1, file_handle_2);
      scaled_index = 3792 * input_value;
      state_address = &dword_140404A6C[948 * input_value + 272299397];
      crt_fread((__int64)(state_address + 19), 4, 1, file_handle_3);
      for ( i = 0; i < (int)state_address[19]; ++i )
      {
        scaled_index_2 = scaled_index + 116LL * i;
        crt_fread((__int64)&g_1812C20D0 + scaled_index_2, 1, 64, file_handle_3);
        crt_fread((__int64)&g_1812C2114 + scaled_index_2, 4, 3, file_handle_3);
        crt_fread((__int64)&g_1812C2120 + scaled_index_2, 4, 3, file_handle_3);
        crt_fread((__int64)&g_1812C212C + scaled_index_2, 4, 3, file_handle_3);
        crt_fread((__int64)&g_1812C2138 + scaled_index_2, 4, 3, file_handle_3);
      }
      crt_fclose(file_handle_3);
    }
    if ( !chdir_result_2 )
      crt_chdir("..");
    if ( !chdir_result )
      crt_chdir("..");
  }
  else
  {
    crt_fclose(file_handle);
    if ( !chdir_result_2 )
      crt_chdir("..");
    if ( !chdir_result )
      crt_chdir("..");
  }
  return 0; /* the function has no caller */
}

#undef unused_frame_slot_0
#undef destination_buffer
#undef scratch_buffer
#undef unused_frame_slot_560

//----- (000000014013EC80) ----------------------------------------------------
// Candidate .sis item-set scanner: references *.sis and filesystem enumeration helper.
void asset_scan_itemsets_sis_candidate()
{
  unsigned int integer_sum;
  int element_index;
  int iteration_count;
  unsigned int *state_address;
  int i;
  unsigned int *state_address_2;
  int chdir_result;
  int chdir_result_2;
  __int64 call_result;
  __int64 cached_call_result;
  int state_word;
  char *text_cursor;
  unsigned int *state_address_3;
  char input_byte;
  int call_result_2;
  int iteration_count_2;
  __int64 record_byte_offset;
  __int64 record_byte_offset_2;
  char *record_byte_offset_3;
  char scaled_index;
  char table_value;
  char table_value_2;
  __int64 scaled_index_2;
  int state_word_2;
  unsigned int *state_address_4;
  char *text_cursor_2;
  char input_byte_2;
  char *byte_cursor;
  char input_byte_3;
  char *destination_text;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14013EC80[560];
#define callee_output_word (*(_BYTE (*)[32])(void *)(sr_frame_14013EC80 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(char (*)[36])(void *)(sr_frame_14013EC80 + 32)) /* [rsp+20h] */
#define callee_output_word_2 (*(char (*))(void *)(sr_frame_14013EC80 + 68)) /* [rsp+44h] */
#define unused_frame_slot_544 (*(__int64 (*))(void *)(sr_frame_14013EC80 + 544)) /* [rsp+220h] */

  g_1812C2FE4 = xmmword_140279510;
  g_1812C2FE0 = 41;
  g_1812C3054 = 37;
  g_1812C3058 = xmmword_140279590;
  g_1812C30C8 = 37;
  g_1812C313C = 37;
  g_1812C30DC = xmmword_140279490;
  g_1812C31B0 = 37;
  g_1812C30EC = xmmword_140279490;
  g_1812C3224 = 37;
  g_1812C2FF4 = xmmword_140279490;
  g_1812C3298 = 37;
  g_1812C3004 = xmmword_140279490;
  g_1812C2F9C = 7;
  g_1812C3068 = xmmword_140279490;
  g_1812C4D80 = 41;
  g_1812C3078 = xmmword_140279490;
  g_1812C4DF4 = 44;
  g_1812C30CC = xmmword_1402795F0;
  g_1812C4E68 = 44;
  g_1812C4EDC = 44;
  g_1812C3140 = xmmword_140279630;
  g_1812C4F50 = 44;
  g_1812C4FC4 = 44;
  g_1812C31C4 = xmmword_140279490;
  g_1812C5038 = 44;
  g_1812C31D4 = xmmword_140279490;
  g_1812C3150 = xmmword_140279490;
  g_1812C3160 = xmmword_140279490;
  g_1812C31B4 = xmmword_1402795B0;
  g_1812C3228 = xmmword_140279610;
  g_1812C32AC = xmmword_140279490;
  g_1812C32BC = xmmword_140279490;
  g_1812C3238 = xmmword_140279490;
  g_1812C3248 = xmmword_140279490;
  g_1812C329C = xmmword_140279640;
  g_1812C4D84 = xmmword_140279510;
  g_1812C4DF8 = xmmword_140279590;
  g_1812C4D94 = xmmword_140279490;
  g_1812C4DA4 = xmmword_140279490;
  g_1812C4E08 = xmmword_140279490;
  g_1812C4E18 = xmmword_140279490;
  g_1812C4E7C = xmmword_140279490;
  g_1812C4E8C = xmmword_140279490;
  g_1812C4E6C = xmmword_140279580;
  g_1812C4EE0 = xmmword_140279570;
  g_1812C4EF0 = xmmword_140279490;
  g_1812C4F00 = xmmword_140279490;
  g_1812C4F64 = xmmword_140279490;
  g_1812C4F74 = xmmword_140279490;
  g_1812C4F54 = xmmword_1402795E0;
  g_1812C4FC8 = xmmword_1402795C0;
  g_1812C4FD8 = xmmword_140279490;
  g_1812C4FE8 = xmmword_140279490;
  integer_sum = 3;
  element_index = 0;
  g_1812C504C = xmmword_140279490;
  g_1812C4D3C = 7;
  iteration_count = 0;
  g_1812C505C = xmmword_140279490;
  g_1812C3EB0 = 38;
  g_1812C503C = xmmword_140279620;
  g_1812C3F24 = 37;
  g_1812C3F98 = 37;
  g_1812C3EB4 = xmmword_140279520;
  g_1812C3E6C = 3;
  g_1812C3EC4 = xmmword_140279490;
  g_1812C3ED4 = xmmword_140279490;
  g_1812C3F38 = xmmword_140279490;
  g_1812C3F48 = xmmword_140279490;
  g_1812C3F28 = xmmword_140279500;
  g_1812C3F9C = xmmword_1402794D0;
  g_1812C3FAC = xmmword_140279490;
  g_1812C3FBC = xmmword_140279490;
  do
  {
    dword_140404A6C[29 * integer_sum + 272301329] = 45;
    *(float *)&dword_140404A6C[29 * g_1812C3E6C + 272301330] = 0.5 - (float)((float)iteration_count * 0.375);
    dword_140404A6C[29 * g_1812C3E6C + 272301331] = 1066663936;
    dword_140404A6C[29 * g_1812C3E6C + 272301332] = 0;
    state_address = &dword_140404A6C[29 * g_1812C3E6C + 272301333];
    *(_QWORD *)state_address = 1065353216;
    *((_QWORD *)state_address + 1) = 0;
    *((_QWORD *)state_address + 2) = 1065353216;
    *((_QWORD *)state_address + 3) = 0;
    state_address[8] = 1065353216;
    sr_math_mat3_rotate_rows(
      (__int64)(uintptr_t)&dword_140404A6C[29LL * (int)g_1812C3E6C + 272301333],
      (float *)((__int64)(uintptr_t)&dword_140404A6C[29LL * (int)g_1812C3E6C + 272301333]),
      sr_export_float_lane_container(1070141403));
    ++iteration_count;
    integer_sum = ++g_1812C3E6C;
  }
  while ( iteration_count < 4 );
  for ( i = 0; i < 3; ++i )
  {
    dword_140404A6C[29 * integer_sum + 272301329] = 45;
    *(float *)&dword_140404A6C[29 * g_1812C3E6C + 272301330] = 0.3125 - (float)((float)i * 0.375);
    dword_140404A6C[29 * g_1812C3E6C + 272301331] = 1069023232;
    dword_140404A6C[29 * g_1812C3E6C + 272301332] = 0;
    state_address_2 = &dword_140404A6C[29 * g_1812C3E6C + 272301333];
    *(_QWORD *)state_address_2 = 1065353216;
    *((_QWORD *)state_address_2 + 1) = 0;
    *((_QWORD *)state_address_2 + 2) = 1065353216;
    *((_QWORD *)state_address_2 + 3) = 0;
    state_address_2[8] = 1065353216;
    sr_math_mat3_rotate_rows(
      (__int64)(uintptr_t)&dword_140404A6C[29LL * (int)g_1812C3E6C + 272301333],
      (float *)((__int64)(uintptr_t)&dword_140404A6C[29LL * (int)g_1812C3E6C + 272301333]),
      sr_export_float_lane_container(1070141403));
    sr_math_mat3_rotate_rows(
      (__int64)(uintptr_t)&dword_140404A6C[29LL * (int)g_1812C3E6C + 272301333],
      (float *)&dword_140404A6C[29 * g_1812C3E6C + 272301336],
      sr_export_float_lane_container(1057360530));
    integer_sum = ++g_1812C3E6C;
  }
  g_1812C4D94 = xmmword_140279490;
  g_1812C4D80 = 37;
  g_1812C4DA4 = xmmword_140279490;
  g_1812C4DF4 = 37;
  g_1812C4D84 = xmmword_1402794F0;
  g_1812C4E68 = 37;
  g_1812C4EDC = 37;
  g_1812C4DF8 = xmmword_1402794C0;
  g_1812C4F50 = 37;
  g_1812C4FC4 = 37;
  g_1812C4E08 = xmmword_140279490;
  g_1812C5038 = 37;
  g_1812C4E18 = xmmword_140279490;
  g_1812C50AC = 37;
  g_1812C4E7C = xmmword_140279490;
  g_1812C4D3C = 8;
  g_1812C4E8C = xmmword_140279490;
  g_181676080 = 4;
  g_1812C4E6C = xmmword_140279560;
  g_1812C4EE0 = xmmword_140279540;
  g_1812C4EF0 = xmmword_140279490;
  g_1812C4F00 = xmmword_140279490;
  g_1812C4F64 = xmmword_140279490;
  g_1812C4F74 = xmmword_140279490;
  g_1812C4F54 = xmmword_1402795A0;
  g_1812C4FC8 = xmmword_140279580;
  g_1812C4FD8 = xmmword_140279490;
  g_1812C4FE8 = xmmword_140279490;
  g_1812C504C = xmmword_140279490;
  g_1812C505C = xmmword_140279490;
  g_1812C503C = xmmword_140279600;
  g_1812C50B0 = xmmword_1402795D0;
  g_1812C50C0 = xmmword_140279490;
  g_1812C50D0 = xmmword_140279490;
  chdir_result = crt_chdir("data");
  chdir_result_2 = crt_chdir("itemset");
  call_result = sub_14023A198("*.sis", (__int64)scratch_buffer);
  g_18622DFE0 = 0;
  cached_call_result = call_result;
  state_word = 0;
  if ( (_DWORD)call_result != -1 )
  {
    do
    {
      if ( state_word >= 1024 )
        break;
      if ( (scratch_buffer[0] & 0x10) == 0 )
      {
        text_cursor = &callee_output_word_2;
        state_address_3 = &dword_140404A6C[16 * (__int64)state_word + 293119326];
        do
        {
          input_byte = *text_cursor++;
          *(_BYTE *)state_address_3 = input_byte;
          state_address_3 = (unsigned int *)((char *)state_address_3 + 1);
        }
        while ( input_byte );
        ++g_18622DFE0;
      }
      call_result_2 = sub_14023A5C4(cached_call_result, (__int64)scratch_buffer);
      state_word = g_18622DFE0;
    }
    while ( call_result_2 != -1 );
  }
  LOBYTE(dword_140404A6C[16 * (__int64)state_word + 293119326]) = 0;
  sub_140239CCC(cached_call_result);
  sub_14023AE00(
    (unsigned __int64)&g_18622DFE4,
    (int)g_18622DFE0,
    0x40u,
    (int (           *)(unsigned __int64, _BYTE *))sr_text_compare_bytes);
  iteration_count_2 = 0;
  if ( (int)g_18622DFE0 > 0 )
  {
    record_byte_offset = 0;
    do
    {
      record_byte_offset_2 = 0;
      record_byte_offset_3 = (char *)&dword_140404A6C[record_byte_offset + 293119326] + 1;
      do
      {
        scaled_index = *(record_byte_offset_3 - 1);
        if ( !scaled_index || scaled_index == 46 )
          break;
        if ( !*record_byte_offset_3 || *record_byte_offset_3 == 46 )
        {
          ++record_byte_offset_2;
          break;
        }
        table_value = record_byte_offset_3[1];
        if ( !table_value || table_value == 46 )
        {
          record_byte_offset_2 += 2;
          break;
        }
        table_value_2 = record_byte_offset_3[2];
        if ( !table_value_2 || table_value_2 == 46 )
        {
          record_byte_offset_2 += 3;
          break;
        }
        record_byte_offset_2 += 4;
        record_byte_offset_3 += 4;
      }
      while ( record_byte_offset_2 < 64 );
      scaled_index_2 = record_byte_offset * 4 + record_byte_offset_2;
      ++iteration_count_2;
      record_byte_offset += 16;
      *((_BYTE *)&g_18622DFE4 + scaled_index_2) = 0;
    }
    while ( iteration_count_2 < (int)g_18622DFE0 );
  }
  if ( !chdir_result_2 )
    crt_chdir("..");
  if ( !chdir_result )
    crt_chdir("..");
  if ( (int)g_18622DFE0 > 0 )
  {
    state_word_2 = g_181676080;
    do
    {
      state_address_4 = &dword_140404A6C[16 * (__int64)element_index + 293119326];
      text_cursor_2 = (char *)state_address_4;
      do
      {
        input_byte_2 = *text_cursor_2;
        *((_BYTE *)&g_1812C2080 + 3792LL * state_word_2 - (_QWORD)state_address_4 + (_QWORD)text_cursor_2) = *text_cursor_2;
        ++text_cursor_2;
      }
      while ( input_byte_2 );
      byte_cursor = (char *)(scratch_buffer - (char *)state_address_4);
      do
      {
        input_byte_3 = *(_BYTE *)state_address_4;
        byte_cursor[(_QWORD)state_address_4] = *(_BYTE *)state_address_4;
        state_address_4 = (unsigned int *)((char *)state_address_4 + 1);
      }
      while ( input_byte_3 );
      destination_text = &callee_output_word[31];
      while ( *++destination_text != 0 )
        ;
      strcpy(destination_text, ".sis");
      sub_1400E7960(state_word_2, scratch_buffer);
      ++element_index;
      state_word_2 = ++g_181676080;
    }
    while ( element_index < (int)g_18622DFE0 );
  }
  return;
}
#undef callee_output_word
#undef scratch_buffer
#undef callee_output_word_2
#undef unused_frame_slot_544

//----- (00000001401402C0) ----------------------------------------------------
#ifndef SR_FRAME_TYPES
#define SR_FRAME_TYPES
typedef __m128 sr_frame_m128 __attribute__((aligned(4)));
typedef __m128i sr_frame_m128i __attribute__((aligned(4)));
typedef __m128d sr_frame_m128d __attribute__((aligned(4)));
typedef __int128 sr_frame_i128 __attribute__((aligned(4)));
typedef unsigned __int128 sr_frame_u128 __attribute__((aligned(4)));
#endif
void sr_SetupItemTypes()
{
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  double acos_result;
  float square_root_2;
  float scaled_ratio_4;
  float scaled_ratio_5;
  float scaled_ratio_6;
  double acos_result_2;
  float square_root_3;
  float scaled_ratio_7;
  float scaled_ratio_8;
  float scaled_ratio_9;
  double acos_result_3;
  float square_root_4;
  float scaled_ratio_10;
  float scaled_ratio_11;
  float scaled_ratio_12;
  double acos_result_4;
  float square_root_5;
  float scaled_ratio_13;
  float scaled_ratio_14;
  float scaled_value;
  float scaled_value_2;
  double acos_result_5;
  float square_root_6;
  float scaled_ratio_15;
  float scaled_ratio_16;
  float scaled_value_3;
  float scaled_value_4;
  double acos_result_6;
  float square_root_7;
  float scaled_ratio_17;
  float scaled_ratio_18;
  float scaled_value_5;
  float scaled_value_6;
  double acos_result_7;
  float square_root_8;
  float scaled_ratio_19;
  float scaled_ratio_20;
  float scaled_value_7;
  float scaled_value_8;
  double acos_result_8;
  float square_root_9;
  float scaled_ratio_21;
  float scaled_ratio_22;
  float scaled_value_9;
  float scaled_value_10;
  double acos_result_9;
  float square_root_10;
  float scaled_ratio_23;
  float scaled_ratio_24;
  float scaled_value_11;
  float scaled_value_12;
  double acos_result_10;
  float square_root_11;
  float scaled_ratio_25;
  float scaled_ratio_26;
  float scaled_value_13;
  float scaled_value_14;
  double acos_result_11;
  float square_root_12;
  float scaled_ratio_27;
  float scaled_ratio_28;
  float scaled_value_15;
  float scaled_value_16;
  double acos_result_12;
  float square_root_13;
  float scaled_ratio_29;
  float scaled_ratio_30;
  float scaled_value_17;
  float scaled_value_18;
  double acos_result_13;
  float square_root_14;
  float scaled_ratio_31;
  float scaled_ratio_32;
  float scaled_value_19;
  float scaled_value_20;
  double acos_result_14;
  float square_root_15;
  float scaled_ratio_33;
  float scaled_ratio_34;
  float scaled_value_21;
  float scaled_value_22;
  double acos_result_15;
  float square_root_16;
  float scaled_ratio_35;
  float scaled_ratio_36;
  float scaled_value_23;
  float scaled_value_24;
  double acos_result_16;
  float square_root_17;
  float scaled_ratio_37;
  float scaled_ratio_38;
  float scaled_value_25;
  float scaled_value_26;
  double acos_result_17;
  float square_root_18;
  float scaled_ratio_39;
  float scaled_ratio_40;
  float scaled_value_27;
  float scaled_value_28;
  double acos_result_18;
  float square_root_19;
  float scaled_ratio_41;
  float scaled_ratio_42;
  float scaled_value_29;
  float scaled_value_30;
  double acos_result_19;
  float square_root_20;
  float scaled_ratio_43;
  float scaled_ratio_44;
  float scaled_value_31;
  float scaled_value_32;
  double acos_result_20;
  float square_root_21;
  float scaled_ratio_45;
  float scaled_ratio_46;
  float scaled_value_33;
  float scaled_value_34;
  double acos_result_21;
  double acos_result_22;
  double acos_result_23;
  double acos_result_24;
  double acos_result_25;
  double acos_result_26;
  double acos_result_27;
  double acos_result_28;
  double acos_result_29;
  double acos_result_30;
  double acos_result_31;
  double acos_result_32;
  double acos_result_33;
  double acos_result_34;
  double acos_result_35;
  double acos_result_36;
  double acos_result_37;
  double acos_result_38;
  double acos_result_39;
  int element_index;
  __int64 element_index_2;
  __int64 scaled_index;
  float weighted_sum;
  float weighted_sum_2;
  float *unused_written_slot;
  float *unused_written_slot_2;
  float weighted_sum_3;
  char *literal_text;
  int selection_code;
  int record_byte_offset;
  unsigned int scaled_index_2;
  unsigned int masked_bits;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  __int64 scaled_index_3;
  __int64 masked_bits_2;
  unsigned int scaled_index_4;
  unsigned int masked_bits_3;
  float weighted_sum_7;
  float weighted_sum_8;
  float weighted_sum_9;
  __int64 scaled_index_5;
  __int64 masked_bits_4;
  unsigned int scaled_index_6;
  unsigned int masked_bits_5;
  float weighted_sum_10;
  float weighted_sum_11;
  float weighted_sum_12;
  __int64 scaled_index_7;
  __int64 masked_bits_6;
  unsigned int scaled_index_8;
  unsigned int masked_bits_7;
  float weighted_sum_13;
  float weighted_sum_14;
  float weighted_sum_15;
  __int64 scaled_index_9;
  __int64 masked_bits_8;
  __int64 allocated_buffer;
  int *record_byte_offset_2;
  __int64 scaled_index_10;
  __int64 scaled_index_11;
  __int64 scaled_index_12;
  __int64 scaled_index_13;
  __int64 scaled_index_14;
  __int64 scaled_index_15;
  __int64 scaled_index_16;
  __int64 scaled_index_17;
  __int64 scaled_index_18;
  __int64 scaled_index_19;
  __int64 scaled_index_20;
  __int64 scaled_index_21;
  __int64 scaled_index_22;
  __int64 scaled_index_23;
  __int64 scaled_index_24;
  __int64 scaled_index_25;
  __int64 scaled_index_26;
  __int64 scaled_index_27;
  __int64 allocated_buffer_2;
  int *record_byte_offset_3;
  __int64 scaled_index_28;
  __int64 scaled_index_29;
  __int64 scaled_index_30;
  __int64 scaled_index_31;
  __int64 scaled_index_32;
  __int64 scaled_index_33;
  __int64 scaled_index_34;
  __int64 scaled_index_35;
  __int64 scaled_index_36;
  __int64 scaled_index_37;
  __int64 scaled_index_38;
  __int64 scaled_index_39;
  __int64 scaled_index_40;
  __int64 scaled_index_41;
  __int64 scaled_index_42;
  __int64 scaled_index_43;
  __int64 scaled_index_44;
  __int64 scaled_index_45;
  signed int iteration_count;
  __int64 record_byte_offset_4;
  __int64 masked_bits_9;
  __int64 masked_bits_10;
  __int64 loaded_word;
  float weighted_sum_16;
  float weighted_sum_17;
  float weighted_sum_18;
  __int64 loaded_word_2;
  float combined_products;
  float combined_products_2;
  float combined_products_3;
  __int64 loaded_word_3;
  float *weighted_sum_19;
  float combined_products_4;
  float combined_products_5;
  float combined_products_6;
  __int64 scaled_index_46;
  signed int integer_sum;
  __int64 scaled_index_47;
  __int64 masked_bits_11;
  unsigned __int64 remaining_count;
  unsigned int *record_byte_offset_5;
  __int64 scaled_index_48;
  __int64 scaled_index_49;
  __int64 scaled_index_50;
  __int64 scaled_index_51;
  __int64 remaining_count_2;
  unsigned int *running_total;
  __int64 scaled_index_52;
  signed int iteration_count_2;
  __int64 record_byte_offset_6;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401402C0[112];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1401402C0 + 0)) /* [rsp+8h] */
#define quaternion (*(float (*))(void *)(sr_frame_1401402C0 + 32)) /* [rsp+28h] */
#define frame_float_at_36 (*(float (*))(void *)(sr_frame_1401402C0 + 36)) /* [rsp+2Ch] */
#define frame_float_at_40 (*(float (*))(void *)(sr_frame_1401402C0 + 40)) /* [rsp+30h] */
#define frame_float_at_44 (*(float (*))(void *)(sr_frame_1401402C0 + 44)) /* [rsp+34h] */
#define axis (*(__int128 (*))(void *)(sr_frame_1401402C0 + 48)) /* [rsp+38h] */
#define unused_written_slot_3 (*(__int128 (*))(void *)(sr_frame_1401402C0 + 64)) /* [rsp+48h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_1401402C0 + 80)) /* [rsp+58h] */
#define unused_frame_slot_88 (*(sr_frame_i128 (*))(void *)(sr_frame_1401402C0 + 88)) /* [rsp+60h] */

  sub_1400E7F80(0, "data/uzi.itm");
  strcpy((char *)&g_182A7E1B0, "Auto 5");
  g_182A7E188 = 1080033280;
  g_182A7E184 = 500;
  g_182A7E190 = 1;
  g_182A7E19C = 2;
  g_182A7E198 = 6;
  g_182A7E1A8 = 1087722837;
  g_182A7E1AC = 1034594987;
  g_182A7E1A0 = 90;
  g_182A7E1A4 = 300;
  g_182A7E274 = 1025507328;
  g_182A7E280 = 1025507328;
  g_182A7E278 = 1056964608;
  g_182A7E27C = 1048576000;
  g_182A7E1FC = 2;
  axis = xmmword_140278D30;
  unused_written_slot_4 = 1065353216;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  square_root = fsqrt((float)((float)(quaternion * quaternion) + (float)(frame_float_at_36 * frame_float_at_36)) + (float)(frame_float_at_40 * frame_float_at_40));
  if ( square_root == 0.0 )
  {
    scaled_ratio = 0.0;
    scaled_ratio_2 = 0.0;
    scaled_ratio_3 = 0.0;
  }
  else
  {
    scaled_ratio = frame_float_at_40 * (float)(1.0 / square_root);
    scaled_ratio_2 = frame_float_at_36 * (float)(1.0 / square_root);
    scaled_ratio_3 = quaternion * (float)(1.0 / square_root);
  }
  g_182A7E230 = scaled_ratio_3;
  g_182A7E234 = scaled_ratio_2;
  g_182A7E238 = scaled_ratio;
  acos_result = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  unused_written_slot_4 = 1065353216;
  axis = xmmword_140278D30;
  *(float *)&acos_result = acos_result + acos_result;
  unused_written_slot_3 = xmmword_140278D30;
  g_182A7E23C = LODWORD(acos_result);
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  square_root_2 = fsqrt((float)((float)(quaternion * quaternion) + (float)(frame_float_at_36 * frame_float_at_36)) + (float)(frame_float_at_40 * frame_float_at_40));
  if ( square_root_2 == 0.0 )
  {
    scaled_ratio_4 = 0.0;
    scaled_ratio_5 = 0.0;
    scaled_ratio_6 = 0.0;
  }
  else
  {
    scaled_ratio_4 = frame_float_at_40 * (float)(1.0 / square_root_2);
    scaled_ratio_5 = frame_float_at_36 * (float)(1.0 / square_root_2);
    scaled_ratio_6 = quaternion * (float)(1.0 / square_root_2);
  }
  g_182A7E240 = scaled_ratio_6;
  g_182A7E244 = scaled_ratio_5;
  g_182A7E248 = scaled_ratio_4;
  acos_result_2 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  g_182A7E218 = 0;
  g_182A7E21C = -1115684864;
  g_182A7E220 = 1052770304;
  g_182A7E284 = 1023410176;
  *(float *)&acos_result_2 = acos_result_2 + acos_result_2;
  strcpy((char *)&g_182A7F580, "AK-47");
  g_182A7E288 = 1027604480;
  g_182A7E28C = 1054951342;
  g_182A7F554 = 500;
  g_182A7E24C = LODWORD(acos_result_2);
  *(float *)&acos_result_2 = *(float *)&g_182A7E1A8
                * *(float *)&dword_140404A6C[6 * g_182A7E19C + 437914197];
  g_182A7F560 = 1;
  g_182A7F568 = 8;
  g_182A7F57C = 1034594987;
  g_182A7F570 = 90;
  g_182A7F644 = 1025507328;
  g_182A7E270 = *(float *)&acos_result_2 * 0.25;
  g_182A7F578 = 1093315243;
  g_182A7F558 = 1084227584;
  g_182A7F650 = 1025507328;
  g_182A7F648 = 1056964608;
  g_182A7F64C = 1048576000;
  g_182A7F5C0 = 0;
  g_182A7F5C8 = -1090015724;
  g_182A7F5CC = 2;
  g_182A7F5D4 = -1111490560;
  g_182A7F5D8 = 1031798784;
  axis = xmmword_140278D30;
  unused_written_slot_4 = 1065353216;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  square_root_3 = fsqrt((float)((float)(quaternion * quaternion) + (float)(frame_float_at_36 * frame_float_at_36)) + (float)(frame_float_at_40 * frame_float_at_40));
  if ( square_root_3 == 0.0 )
  {
    scaled_ratio_7 = 0.0;
    scaled_ratio_8 = 0.0;
    scaled_ratio_9 = 0.0;
  }
  else
  {
    scaled_ratio_7 = frame_float_at_40 * (float)(1.0 / square_root_3);
    scaled_ratio_8 = frame_float_at_36 * (float)(1.0 / square_root_3);
    scaled_ratio_9 = quaternion * (float)(1.0 / square_root_3);
  }
  g_182A7F600 = scaled_ratio_9;
  g_182A7F604 = scaled_ratio_8;
  g_182A7F608 = scaled_ratio_7;
  acos_result_3 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  g_182A7F5DC = 0;
  g_182A7F5E0 = -1115684864;
  g_182A7F5E4 = -1107296256;
  axis = xmmword_140278D30;
  unused_written_slot_4 = 1065353216;
  *(float *)&acos_result_3 = acos_result_3 + acos_result_3;
  unused_written_slot_3 = xmmword_140278D30;
  g_182A7F60C = LODWORD(acos_result_3);
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  square_root_4 = fsqrt((float)((float)(quaternion * quaternion) + (float)(frame_float_at_36 * frame_float_at_36)) + (float)(frame_float_at_40 * frame_float_at_40));
  if ( square_root_4 == 0.0 )
  {
    scaled_ratio_10 = 0.0;
    scaled_ratio_11 = 0.0;
    scaled_ratio_12 = 0.0;
  }
  else
  {
    scaled_ratio_10 = frame_float_at_40 * (float)(1.0 / square_root_4);
    scaled_ratio_11 = frame_float_at_36 * (float)(1.0 / square_root_4);
    scaled_ratio_12 = quaternion * (float)(1.0 / square_root_4);
  }
  g_182A7F610 = scaled_ratio_12;
  g_182A7F614 = scaled_ratio_11;
  g_182A7F618 = scaled_ratio_10;
  acos_result_4 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  g_182A7F5E8 = 0;
  g_182A7F5EC = -1115684864;
  g_182A7F5F0 = 1052770304;
  g_182A7F654 = 1023410176;
  *(float *)&acos_result_4 = acos_result_4 + acos_result_4;
  g_182A7F658 = 1027604480;
  g_182A7F61C = LODWORD(acos_result_4);
  *(float *)&acos_result_4 = *(float *)&g_182A7F578
                 * *(float *)&dword_140404A6C[6 * g_182A7F56C + 437914197];
  g_182A7F65C = 1054951342;
  g_182A808E4 = 0;
  g_182A808E8 = -1115684864;
  g_182A808EC = 1052770304;
  g_182A7FB2C = 1;
  g_182A80924 = 50;
  g_182A7F640 = *(float *)&acos_result_4 * 0.25;
  strcpy((char *)&g_182A80950, "AK-47 Magazine");
  g_182A80930 = 0;
  g_182A80928 = 1061158912;
  g_182A80944 = 30;
  axis = xmmword_140278D30;
  unused_written_slot_4 = 1065353216;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  square_root_5 = fsqrt((float)((float)(quaternion * quaternion) + (float)(frame_float_at_36 * frame_float_at_36)) + (float)(frame_float_at_40 * frame_float_at_40));
  if ( square_root_5 == 0.0 )
  {
    scaled_ratio_14 = 0.0;
    scaled_value = 0.0;
    scaled_value_2 = 0.0;
  }
  else
  {
    scaled_ratio_13 = 1.0 / square_root_5;
    scaled_ratio_14 = (float)(1.0 / square_root_5) * frame_float_at_40;
    scaled_value = scaled_ratio_13 * frame_float_at_36;
    scaled_value_2 = scaled_ratio_13 * quaternion;
  }
  g_182A809D0 = scaled_value_2;
  g_182A809D4 = scaled_value;
  g_182A809D8 = scaled_ratio_14;
  acos_result_5 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  strcpy((char *)&g_182A81D20, "M-16");
  g_182A80A24 = 1031798784;
  g_182A80A28 = 1040187392;
  *(float *)&acos_result_5 = acos_result_5 + acos_result_5;
  g_182A80A2C = 1048576000;
  g_182A80A40 = 1;
  g_182A81CF4 = 750;
  g_182A81D00 = 1;
  g_182A81D0C = 1;
  g_182A809DC = LODWORD(acos_result_5);
  _mm_storeu_si128((__m128i *)(void *)&g_182A80F00, _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  g_182A81D08 = 7;
  g_182A81D18 = 1097509547;
  g_182A81CF8 = 1078984704;
  g_182A81D1C = 1028443341;
  g_182A81D10 = 90;
  g_182A81DE4 = 1025507328;
  g_182A81DF0 = 1025507328;
  g_182A81DE8 = 1056964608;
  g_182A81DEC = 1048576000;
  g_182A81D60 = 0;
  g_182A81D68 = -1088002458;
  g_182A81D6C = 2;
  g_182A81D74 = -1111490560;
  g_182A81D78 = 1031798784;
  axis = xmmword_140278D30;
  unused_written_slot_4 = 1065353216;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  square_root_6 = fsqrt((float)((float)(quaternion * quaternion) + (float)(frame_float_at_36 * frame_float_at_36)) + (float)(frame_float_at_40 * frame_float_at_40));
  if ( square_root_6 == 0.0 )
  {
    scaled_ratio_16 = 0.0;
    scaled_value_3 = 0.0;
    scaled_value_4 = 0.0;
  }
  else
  {
    scaled_ratio_15 = 1.0 / square_root_6;
    scaled_ratio_16 = (float)(1.0 / square_root_6) * frame_float_at_40;
    scaled_value_3 = scaled_ratio_15 * frame_float_at_36;
    scaled_value_4 = scaled_ratio_15 * quaternion;
  }
  g_182A81DA0 = scaled_value_4;
  g_182A81DA4 = scaled_value_3;
  g_182A81DA8 = scaled_ratio_16;
  acos_result_6 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  g_182A81D7C = 0;
  g_182A81D80 = -1115684864;
  g_182A81D84 = -1107296256;
  unused_written_slot_4 = 1065353216;
  *(float *)&acos_result_6 = acos_result_6 + acos_result_6;
  g_182A81DAC = LODWORD(acos_result_6);
  axis = xmmword_140278D30;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  square_root_7 = fsqrt((float)((float)(quaternion * quaternion) + (float)(frame_float_at_36 * frame_float_at_36)) + (float)(frame_float_at_40 * frame_float_at_40));
  if ( square_root_7 == 0.0 )
  {
    scaled_ratio_18 = 0.0;
    scaled_value_5 = 0.0;
    scaled_value_6 = 0.0;
  }
  else
  {
    scaled_ratio_17 = 1.0 / square_root_7;
    scaled_ratio_18 = (float)(1.0 / square_root_7) * frame_float_at_40;
    scaled_value_5 = scaled_ratio_17 * frame_float_at_36;
    scaled_value_6 = scaled_ratio_17 * quaternion;
  }
  g_182A81DB0 = scaled_value_6;
  g_182A81DB4 = scaled_value_5;
  g_182A81DB8 = scaled_ratio_18;
  acos_result_7 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  g_182A81D88 = 0;
  g_182A81D8C = -1115684864;
  g_182A81D90 = 1052770304;
  g_182A81DF4 = 1023410176;
  *(float *)&acos_result_7 = acos_result_7 + acos_result_7;
  g_182A81DF8 = 1032847360;
  g_182A81DFC = 1052770304;
  g_182A83084 = 0;
  g_182A81DBC = LODWORD(acos_result_7);
  *(float *)&acos_result_7 = *(float *)&g_182A81D18
                 * *(float *)&dword_140404A6C[6 * g_182A81D0C + 437914197];
  g_182A83088 = -1124073472;
  g_182A8308C = 1052770304;
  g_182A822CC = 1;
  g_182A830C4 = 75;
  g_182A830D0 = 0;
  g_182A830C8 = 1061158912;
  g_182A81DE0 = *(float *)&acos_result_7 * 0.25;
  strcpy((char *)&g_182A830F0, "M-16 Magazine");
  g_182A830E4 = 30;
  g_182A831C4 = 1031798784;
  g_182A831C8 = 1040187392;
  g_182A831CC = 1048576000;
  g_182A83140 = 0;
  g_182A83144 = -1115684864;
  g_182A83148 = -1111490560;
  axis = xmmword_140278D30;
  unused_written_slot_4 = 1065353216;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  square_root_8 = fsqrt((float)((float)(quaternion * quaternion) + (float)(frame_float_at_36 * frame_float_at_36)) + (float)(frame_float_at_40 * frame_float_at_40));
  if ( square_root_8 == 0.0 )
  {
    scaled_ratio_20 = 0.0;
    scaled_value_7 = 0.0;
    scaled_value_8 = 0.0;
  }
  else
  {
    scaled_ratio_19 = 1.0 / square_root_8;
    scaled_ratio_20 = (float)(1.0 / square_root_8) * frame_float_at_40;
    scaled_value_7 = scaled_ratio_19 * frame_float_at_36;
    scaled_value_8 = scaled_ratio_19 * quaternion;
  }
  g_182A83170 = scaled_value_8;
  g_182A83174 = scaled_value_7;
  g_182A83178 = scaled_ratio_20;
  acos_result_8 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  _mm_storeu_si128((__m128i *)(void *)&g_182A836A0, _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  g_182A831E8 = 1;
  g_182A86C34 = 300;
  g_182A86C40 = 1;
  *(float *)&acos_result_8 = acos_result_8 + acos_result_8;
  g_182A86C4C = 2;
  g_182A86C48 = 5;
  g_182A86C58 = 1087722837;
  g_182A86C5C = 1023969417;
  g_182A86C50 = 90;
  g_182A8317C = LODWORD(acos_result_8);
  g_182A86C38 = 1075838976;
  g_182A86C60 = 3493965;
  g_182A86D24 = 1025507328;
  g_182A86D30 = 1025507328;
  g_182A86D28 = 1056964608;
  g_182A86D2C = 1048576000;
  g_182A86D20 = (float)(g_1A8A873F0 * 6.6666665) * 0.25;
  g_182A86CA0 = 0;
  g_182A86CA8 = -1094881116;
  g_182A86D34 = 1023410176;
  g_182A86D38 = 1032847360;
  g_182A86D3C = 1052770304;
  g_182A86CAC = 2;
  g_182A86CB4 = -1111490560;
  g_182A86CB8 = 1031798784;
  axis = xmmword_140278D30;
  unused_written_slot_4 = 1065353216;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  square_root_9 = fsqrt((float)((float)(quaternion * quaternion) + (float)(frame_float_at_36 * frame_float_at_36)) + (float)(frame_float_at_40 * frame_float_at_40));
  if ( square_root_9 == 0.0 )
  {
    scaled_ratio_22 = 0.0;
    scaled_value_9 = 0.0;
    scaled_value_10 = 0.0;
  }
  else
  {
    scaled_ratio_21 = 1.0 / square_root_9;
    scaled_ratio_22 = (float)(1.0 / square_root_9) * frame_float_at_40;
    scaled_value_9 = scaled_ratio_21 * frame_float_at_36;
    scaled_value_10 = scaled_ratio_21 * quaternion;
  }
  g_182A86CE0 = scaled_value_10;
  g_182A86CE4 = scaled_value_9;
  g_182A86CE8 = scaled_ratio_22;
  acos_result_9 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  g_182A86CBC = 0;
  g_182A86CC0 = -1115684864;
  g_182A86CC4 = -1107296256;
  unused_written_slot_4 = 1065353216;
  *(float *)&acos_result_9 = acos_result_9 + acos_result_9;
  g_182A86CEC = LODWORD(acos_result_9);
  axis = xmmword_140278D30;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  square_root_10 = fsqrt((float)((float)(quaternion * quaternion) + (float)(frame_float_at_36 * frame_float_at_36)) + (float)(frame_float_at_40 * frame_float_at_40));
  if ( square_root_10 == 0.0 )
  {
    scaled_ratio_24 = 0.0;
    scaled_value_11 = 0.0;
    scaled_value_12 = 0.0;
  }
  else
  {
    scaled_ratio_23 = 1.0 / square_root_10;
    scaled_ratio_24 = (float)(1.0 / square_root_10) * frame_float_at_40;
    scaled_value_11 = scaled_ratio_23 * frame_float_at_36;
    scaled_value_12 = scaled_ratio_23 * quaternion;
  }
  g_182A86CF0 = scaled_value_12;
  g_182A86CF4 = scaled_value_11;
  g_182A86CF8 = scaled_ratio_24;
  acos_result_10 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  strcpy((char *)&g_182A88030, "MP5 Magazine");
  *(float *)&acos_result_10 = acos_result_10 + acos_result_10;
  g_182A86CC8 = 0;
  g_182A86CCC = -1115684864;
  g_182A86CD0 = 1052770304;
  g_182A87FC4 = 0;
  g_182A87FC8 = -1115684864;
  g_182A86CFC = LODWORD(acos_result_10);
  g_182A87FCC = 1052770304;
  g_182A8720C = 1;
  g_182A88004 = 30;
  g_182A88010 = 0;
  g_182A88008 = 1059061760;
  g_182A88024 = 30;
  g_182A88104 = 1031798784;
  g_182A88108 = 1040187392;
  g_182A8810C = 1048576000;
  g_182A88080 = 0;
  g_182A88084 = -1115684864;
  g_182A88088 = -1111490560;
  axis = xmmword_140278D30;
  unused_written_slot_4 = 1065353216;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  square_root_11 = fsqrt((float)((float)(quaternion * quaternion) + (float)(frame_float_at_36 * frame_float_at_36)) + (float)(frame_float_at_40 * frame_float_at_40));
  if ( square_root_11 == 0.0 )
  {
    scaled_ratio_26 = 0.0;
    scaled_value_13 = 0.0;
    scaled_value_14 = 0.0;
  }
  else
  {
    scaled_ratio_25 = 1.0 / square_root_11;
    scaled_ratio_26 = (float)(1.0 / square_root_11) * frame_float_at_40;
    scaled_value_13 = scaled_ratio_25 * frame_float_at_36;
    scaled_value_14 = scaled_ratio_25 * quaternion;
  }
  g_182A880B0 = scaled_value_14;
  g_182A880B4 = scaled_value_13;
  g_182A880B8 = scaled_ratio_26;
  acos_result_11 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  g_182A88138 = 1;
  _mm_storeu_si128((__m128i *)(void *)&g_182A885E0, _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  *(float *)&acos_result_11 = acos_result_11 + acos_result_11;
  g_182A880BC = LODWORD(acos_result_11);
  sub_1400E7F80(9, "data/uzi.itm");
  g_182A893D4 = 1000;
  g_182A893E0 = 1;
  g_182A893EC = 2;
  g_182A893E8 = 6;
  g_182A893F8 = 1087722837;
  g_182A893FC = 1028443341;
  g_182A893F0 = 90;
  g_182A893D8 = 1075838976;
  g_182A89400 = 6912597;
  g_182A894C4 = 1025507328;
  g_182A894D0 = 1025507328;
  g_182A894C8 = 1056964608;
  g_182A894CC = 1048576000;
  g_182A8944C = 2;
  axis = xmmword_140278D30;
  unused_written_slot_4 = 1065353216;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  square_root_12 = fsqrt((float)((float)(quaternion * quaternion) + (float)(frame_float_at_36 * frame_float_at_36)) + (float)(frame_float_at_40 * frame_float_at_40));
  if ( square_root_12 == 0.0 )
  {
    scaled_ratio_28 = 0.0;
    scaled_value_15 = 0.0;
    scaled_value_16 = 0.0;
  }
  else
  {
    scaled_ratio_27 = 1.0 / square_root_12;
    scaled_ratio_28 = (float)(1.0 / square_root_12) * frame_float_at_40;
    scaled_value_15 = scaled_ratio_27 * frame_float_at_36;
    scaled_value_16 = scaled_ratio_27 * quaternion;
  }
  g_182A89480 = scaled_value_16;
  g_182A89484 = scaled_value_15;
  g_182A89488 = scaled_ratio_28;
  acos_result_12 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  unused_written_slot_4 = 1065353216;
  axis = xmmword_140278D30;
  *(float *)&acos_result_12 = acos_result_12 + acos_result_12;
  unused_written_slot_3 = xmmword_140278D30;
  g_182A8948C = LODWORD(acos_result_12);
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  square_root_13 = fsqrt((float)((float)(quaternion * quaternion) + (float)(frame_float_at_36 * frame_float_at_36)) + (float)(frame_float_at_40 * frame_float_at_40));
  if ( square_root_13 == 0.0 )
  {
    scaled_ratio_30 = 0.0;
    scaled_value_17 = 0.0;
    scaled_value_18 = 0.0;
  }
  else
  {
    scaled_ratio_29 = 1.0 / square_root_13;
    scaled_ratio_30 = (float)(1.0 / square_root_13) * frame_float_at_40;
    scaled_value_17 = scaled_ratio_29 * frame_float_at_36;
    scaled_value_18 = scaled_ratio_29 * quaternion;
  }
  g_182A89490 = scaled_value_18;
  g_182A89494 = scaled_value_17;
  g_182A89498 = scaled_ratio_30;
  acos_result_13 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  g_182A89468 = 0;
  g_182A8946C = -1115684864;
  g_182A89470 = 1052770304;
  *(float *)&acos_result_13 = acos_result_13 + acos_result_13;
  g_182A894D4 = 1031798784;
  g_182A894D8 = 1035993088;
  g_182A894DC = 1050673152;
  g_182A899AC = 1;
  g_182A8A764 = 0;
  g_182A8949C = LODWORD(acos_result_13);
  *(float *)&acos_result_13 = *(float *)&g_182A893F8
                 * *(float *)&dword_140404A6C[6 * g_182A893EC + 437914197];
  g_182A8A768 = -1115684864;
  g_182A8A76C = 1052770304;
  g_182A894C0 = *(float *)&acos_result_13 * 0.25;
  sub_1400E7F80(10, "data/uzi_magazine.itm");
  strcpy((char *)&g_182A8A7D0, "Uzi Magazine");
  g_182A8A7A4 = 100;
  g_182A8A7B0 = 0;
  g_182A8A7A8 = 1059061760;
  g_182A8A7C4 = 30;
  g_182A8A8A4 = 1031798784;
  g_182A8A8A8 = 1040187392;
  g_182A8A8AC = 1040187392;
  axis = xmmword_140278D30;
  unused_written_slot_4 = 1065353216;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  square_root_14 = fsqrt((float)((float)(quaternion * quaternion) + (float)(frame_float_at_36 * frame_float_at_36)) + (float)(frame_float_at_40 * frame_float_at_40));
  if ( square_root_14 == 0.0 )
  {
    scaled_ratio_32 = 0.0;
    scaled_value_19 = 0.0;
    scaled_value_20 = 0.0;
  }
  else
  {
    scaled_ratio_31 = 1.0 / square_root_14;
    scaled_ratio_32 = (float)(1.0 / square_root_14) * frame_float_at_40;
    scaled_value_19 = scaled_ratio_31 * frame_float_at_36;
    scaled_value_20 = scaled_ratio_31 * quaternion;
  }
  g_182A8A850 = scaled_value_20;
  g_182A8A854 = scaled_value_19;
  g_182A8A858 = scaled_ratio_32;
  acos_result_14 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  strcpy((char *)&g_182A844C0, "Magnum");
  *(float *)&acos_result_14 = acos_result_14 + acos_result_14;
  g_182A8A8E0 = 1;
  g_182A8A85C = LODWORD(acos_result_14);
  g_182A84498 = 1067450368;
  g_182A84508 = -1090330175;
  g_182A84494 = 10000;
  _mm_storeu_si128((__m128i *)(void *)&g_182A8AD80, _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  g_182A844A0 = 1;
  g_182A844A4 = 1;
  g_182A844AC = 3;
  g_182A844A8 = 30;
  g_182A84580 = (float)(g_1A8A87408 * 7.6666665) * 0.5;
  strcpy((char *)&g_182A85890, ".45 Bullets");
  g_182A8BBE8 = -1098907648;
  g_182A844B8 = 1089819989;
  g_182A844BC = 1023969417;
  g_182A844B0 = 18;
  g_182A84584 = 1031798784;
  g_182A84590 = 1031798784;
  g_182A84588 = 1052770304;
  g_182A8458C = 1040187392;
  g_182A84500 = 0;
  g_182A84510 = 0;
  g_182A84514 = -1107296256;
  g_182A84518 = 1031798784;
  g_182A84594 = 1031798784;
  g_182A84598 = 1035993088;
  g_182A8459C = 1044381696;
  g_182A84A6C = 1;
  g_182A85864 = 1000;
  g_182A85870 = 0;
  g_182A85868 = 1056964608;
  g_182A85884 = 6;
  g_182A85964 = 1031798784;
  g_182A85968 = 1040187392;
  g_182A8596C = 1048576000;
  g_182A85990 = 1;
  __builtin_memcpy((void *)&g_182A85E40, (const void *)&g_182A8AD80, 16);
  g_182A8BB74 = 50;
  g_182A8BB80 = 1;
  g_182A8BB84 = 1;
  g_182A8BB8C = 2;
  g_182A8BB88 = 30;
  g_182A8BB98 = 1087722837;
  g_182A8BB9C = 1023969417;
  g_182A8BB90 = 32;
  g_182A8BB78 = 1065353216;
  g_182A8BBA0 = 7171385;
  g_182A8BC64 = 1023410176;
  g_182A8BC70 = 1023410176;
  g_182A8BC68 = 1048576000;
  g_182A8BC6C = 1040187392;
  g_182A8BBE0 = 0;
  g_182A8BC74 = 1040187392;
  g_182A8BC78 = 1044381696;
  g_182A8BC7C = 1052770304;
  g_182A8BBEC = 1;
  g_182A8BBF4 = -1115684864;
  g_182A8BBF8 = -1124073472;
  unused_written_slot_4 = 1065353216;
  g_182A8BC60 = (float)(g_1A8A873F0 * 6.6666665) * 0.5;
  axis = xmmword_140278D30;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  square_root_15 = fsqrt((float)((float)(quaternion * quaternion) + (float)(frame_float_at_36 * frame_float_at_36)) + (float)(frame_float_at_40 * frame_float_at_40));
  if ( square_root_15 == 0.0 )
  {
    scaled_ratio_34 = 0.0;
    scaled_value_21 = 0.0;
    scaled_value_22 = 0.0;
  }
  else
  {
    scaled_ratio_33 = 1.0 / square_root_15;
    scaled_ratio_34 = (float)(1.0 / square_root_15) * frame_float_at_40;
    scaled_value_21 = scaled_ratio_33 * frame_float_at_36;
    scaled_value_22 = scaled_ratio_33 * quaternion;
  }
  g_182A8BC20 = scaled_value_22;
  g_182A8BC24 = scaled_value_21;
  g_182A8BC28 = scaled_ratio_34;
  acos_result_15 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  g_182A8C14C = 1;
  g_182A8CF44 = 5;
  *(float *)&acos_result_15 = acos_result_15 + acos_result_15;
  g_182A8CF50 = 0;
  g_182A8CF48 = 1056964608;
  g_182A8CF64 = 12;
  g_182A8D044 = 1031798784;
  g_182A8BC2C = LODWORD(acos_result_15);
  strcpy((char *)&g_182A8CF70, "9mm Magazine");
  g_182A8D048 = 1040187392;
  g_182A8D04C = 1048576000;
  g_182A8D088 = 1;
  axis = xmmword_140278D30;
  unused_written_slot_4 = 1065353216;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  square_root_16 = fsqrt((float)((float)(quaternion * quaternion) + (float)(frame_float_at_36 * frame_float_at_36)) + (float)(frame_float_at_40 * frame_float_at_40));
  if ( square_root_16 == 0.0 )
  {
    scaled_ratio_36 = 0.0;
    scaled_value_23 = 0.0;
    scaled_value_24 = 0.0;
  }
  else
  {
    scaled_ratio_35 = 1.0 / square_root_16;
    scaled_ratio_36 = (float)(1.0 / square_root_16) * frame_float_at_40;
    scaled_value_23 = scaled_ratio_35 * frame_float_at_36;
    scaled_value_24 = scaled_ratio_35 * quaternion;
  }
  g_182A8CFF0 = scaled_value_24;
  g_182A8CFF4 = scaled_value_23;
  g_182A8CFF8 = scaled_ratio_36;
  acos_result_16 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  _mm_storeu_si128((__m128i *)(void *)&g_182A8D520, _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  g_182A8F6E4 = 10;
  g_182A8F6F0 = 0;
  g_182A8F704 = 2;
  *(float *)&acos_result_16 = acos_result_16 + acos_result_16;
  g_182A8F6E8 = 1065353216;
  g_182A8F710 = 0x656761646E6142LL;
  unused_written_slot_4 = 1065353216;
  g_182A8CFFC = LODWORD(acos_result_16);
  axis = xmmword_140278D30;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  square_root_17 = fsqrt((float)((float)(quaternion * quaternion) + (float)(frame_float_at_36 * frame_float_at_36)) + (float)(frame_float_at_40 * frame_float_at_40));
  if ( square_root_17 == 0.0 )
  {
    scaled_ratio_38 = 0.0;
    scaled_value_25 = 0.0;
    scaled_value_26 = 0.0;
  }
  else
  {
    scaled_ratio_37 = 1.0 / square_root_17;
    scaled_ratio_38 = (float)(1.0 / square_root_17) * frame_float_at_40;
    scaled_value_25 = scaled_ratio_37 * frame_float_at_36;
    scaled_value_26 = scaled_ratio_37 * quaternion;
  }
  g_182A8F790 = scaled_value_26;
  g_182A8F794 = scaled_value_25;
  g_182A8F798 = scaled_ratio_38;
  acos_result_17 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  strcpy((char *)&g_182A90AE0, "Briefcase");
  g_182A8F7E4 = 1048576000;
  g_182A8F7E8 = 1040187392;
  *(float *)&acos_result_17 = acos_result_17 + acos_result_17;
  g_182A8F7EC = 1048576000;
  g_182A90AB4 = 50;
  g_182A90AC0 = 0;
  g_182A90AB8 = 1082130432;
  g_182A8F79C = LODWORD(acos_result_17);
  _mm_storeu_si128((__m128i *)(void *)&g_182A8FCC0, _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  g_182A90BB4 = 1050673152;
  g_182A90BB8 = 1040187392;
  g_182A90BBC = 1048576000;
  g_182A90B2C = 1;
  g_182A90B34 = 0;
  g_182A90B38 = 1048576000;
  axis = xmmword_140278D30;
  unused_written_slot_4 = 1065353216;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  square_root_18 = fsqrt((float)((float)(quaternion * quaternion) + (float)(frame_float_at_36 * frame_float_at_36)) + (float)(frame_float_at_40 * frame_float_at_40));
  if ( square_root_18 == 0.0 )
  {
    scaled_ratio_40 = 0.0;
    scaled_value_27 = 0.0;
    scaled_value_28 = 0.0;
  }
  else
  {
    scaled_ratio_39 = 1.0 / square_root_18;
    scaled_ratio_40 = (float)(1.0 / square_root_18) * frame_float_at_40;
    scaled_value_27 = scaled_ratio_39 * frame_float_at_36;
    scaled_value_28 = scaled_ratio_39 * quaternion;
  }
  g_182A90B60 = scaled_value_28;
  g_182A90B64 = scaled_value_27;
  g_182A90B68 = scaled_ratio_40;
  acos_result_18 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  *(float *)&acos_result_18 = acos_result_18 + acos_result_18;
  g_182A91E90 = 0;
  g_182A91E88 = 1082130432;
  g_182A91F84 = 1050673152;
  g_182A91F88 = 1040187392;
  g_182A90B6C = LODWORD(acos_result_18);
  strcpy((char *)&g_182A91EB0, "Open Briefcase");
  g_182A91F8C = 1048576000;
  g_182A91EFC = 1;
  g_182A91F04 = -1107296256;
  g_182A91F08 = 1048576000;
  axis = xmmword_140278D30;
  unused_written_slot_4 = 1065353216;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  square_root_19 = fsqrt((float)((float)(quaternion * quaternion) + (float)(frame_float_at_36 * frame_float_at_36)) + (float)(frame_float_at_40 * frame_float_at_40));
  if ( square_root_19 == 0.0 )
  {
    scaled_ratio_42 = 0.0;
    scaled_value_29 = 0.0;
    scaled_value_30 = 0.0;
  }
  else
  {
    scaled_ratio_41 = 1.0 / square_root_19;
    scaled_ratio_42 = (float)(1.0 / square_root_19) * frame_float_at_40;
    scaled_value_29 = scaled_ratio_41 * frame_float_at_36;
    scaled_value_30 = scaled_ratio_41 * quaternion;
  }
  g_182A91F30 = scaled_value_30;
  g_182A91F34 = scaled_value_29;
  g_182A91F38 = scaled_ratio_42;
  acos_result_19 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  strcpy((char *)&g_182A93280, "Cash");
  g_182A93260 = 0;
  g_182A93258 = 1036831949;
  *(float *)&acos_result_19 = acos_result_19 + acos_result_19;
  unused_written_slot_4 = 1065353216;
  g_182A91F3C = LODWORD(acos_result_19);
  axis = xmmword_140278D30;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  square_root_20 = fsqrt((float)((float)(quaternion * quaternion) + (float)(frame_float_at_36 * frame_float_at_36)) + (float)(frame_float_at_40 * frame_float_at_40));
  if ( square_root_20 == 0.0 )
  {
    scaled_ratio_44 = 0.0;
    scaled_value_31 = 0.0;
    scaled_value_32 = 0.0;
  }
  else
  {
    scaled_ratio_43 = 1.0 / square_root_20;
    scaled_ratio_44 = (float)(1.0 / square_root_20) * frame_float_at_40;
    scaled_value_31 = scaled_ratio_43 * frame_float_at_36;
    scaled_value_32 = scaled_ratio_43 * quaternion;
  }
  g_182A93300 = scaled_value_32;
  g_182A93304 = scaled_value_31;
  g_182A93308 = scaled_ratio_44;
  acos_result_20 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  strcpy((char *)&g_182A94650, "Cash");
  g_182A93354 = 1040187392;
  g_182A93358 = 1031798784;
  *(float *)&acos_result_20 = acos_result_20 + acos_result_20;
  g_182A9335C = 1048576000;
  g_182A933AC = 1;
  g_182A94630 = 0;
  g_182A94628 = 1036831949;
  g_182A9330C = LODWORD(acos_result_20);
  _mm_storeu_si128((__m128i *)(void *)&g_182A93830, _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  g_182A946A0 = 0;
  g_182A946A8 = 1040187392;
  axis = xmmword_140278D30;
  unused_written_slot_4 = 1065353216;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  square_root_21 = fsqrt((float)((float)(quaternion * quaternion) + (float)(frame_float_at_36 * frame_float_at_36)) + (float)(frame_float_at_40 * frame_float_at_40));
  if ( square_root_21 == 0.0 )
  {
    scaled_ratio_46 = 0.0;
    scaled_value_33 = 0.0;
    scaled_value_34 = 0.0;
  }
  else
  {
    scaled_ratio_45 = 1.0 / square_root_21;
    scaled_ratio_46 = (float)(1.0 / square_root_21) * frame_float_at_40;
    scaled_value_33 = scaled_ratio_45 * frame_float_at_36;
    scaled_value_34 = scaled_ratio_45 * quaternion;
  }
  g_182A946D0 = scaled_value_34;
  g_182A946D4 = scaled_value_33;
  g_182A946D8 = scaled_ratio_46;
  acos_result_21 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  g_182A94724 = 1040187392;
  g_182A94728 = 1031798784;
  *(float *)&acos_result_21 = acos_result_21 + acos_result_21;
  g_182A9472C = 1048576000;
  g_182A9477C = 1;
  g_182A959F4 = 20;
  g_182A95A00 = 0;
  g_182A959F8 = 1065353216;
  g_182A946DC = LODWORD(acos_result_21);
  _mm_storeu_si128((__m128i *)(void *)&g_182A94C00, _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  strcpy((char *)&g_182A95A20, "Black Disk");
  g_182A95AF4 = 1048576000;
  g_182A95AF8 = 1035993088;
  g_182A95AFC = 1048576000;
  axis = xmmword_140278D30;
  unused_written_slot_4 = 1065353216;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  sr_math_vec3_normalize((__int64)&g_182A95AA0, &quaternion);
  acos_result_22 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  g_182A95B4C = 1;
  g_182A95BA8 = 1;
  *(float *)&acos_result_22 = acos_result_22 + acos_result_22;
  g_182A96DD0 = 0;
  g_182A96DC8 = 1065353216;
  g_182A96EC4 = 1048576000;
  g_182A96EC8 = 1035993088;
  g_182A95AAC = LODWORD(acos_result_22);
  _mm_storeu_si128((__m128i *)(void *)&g_182A95FD0, _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  g_182A96ECC = 1048576000;
  strcpy((char *)&g_182A96DF0, "Green Disk");
  unused_written_slot_4 = 1065353216;
  axis = xmmword_140278D30;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  sr_math_vec3_normalize((__int64)&g_182A96E70, &quaternion);
  acos_result_23 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  g_182A96F1C = 1;
  g_182A96F78 = 1;
  g_182A981A0 = 0;
  g_182A98198 = 1065353216;
  *(float *)&acos_result_23 = acos_result_23 + acos_result_23;
  g_182A98294 = 1048576000;
  g_182A98298 = 1035993088;
  g_182A9829C = 1048576000;
  unused_written_slot_4 = 1065353216;
  g_182A96E7C = LODWORD(acos_result_23);
  _mm_storeu_si128((__m128i *)(void *)&g_182A973A0, _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  strcpy((char *)&g_182A981C0, "Blue Disk");
  axis = xmmword_140278D30;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  sr_math_vec3_normalize((__int64)&g_182A98240, &quaternion);
  acos_result_24 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  g_182A982EC = 1;
  g_182A98348 = 1;
  *(float *)&acos_result_24 = acos_result_24 + acos_result_24;
  g_182A99570 = 0;
  g_182A99568 = 1065353216;
  g_182A99664 = 1048576000;
  g_182A99668 = 1035993088;
  g_182A9824C = LODWORD(acos_result_24);
  _mm_storeu_si128((__m128i *)(void *)&g_182A98770, _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  g_182A9966C = 1048576000;
  strcpy((char *)&g_182A99590, "White Disk");
  unused_written_slot_4 = 1065353216;
  axis = xmmword_140278D30;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  sr_math_vec3_normalize((__int64)&g_182A99610, &quaternion);
  acos_result_25 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  *(float *)&acos_result_25 = acos_result_25 + acos_result_25;
  g_182A996BC = 1;
  g_182A99718 = 1;
  g_182A9A940 = 0;
  g_182A9A938 = 1065353216;
  g_182A9961C = LODWORD(acos_result_25);
  _mm_storeu_si128((__m128i *)(void *)&g_182A99B40, _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  g_182A9AA34 = 1048576000;
  strcpy((char *)&g_182A9A960, "Gold Disk");
  g_182A9AA38 = 1035993088;
  g_182A9AA3C = 1048576000;
  axis = xmmword_140278D30;
  unused_written_slot_4 = 1065353216;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  sr_math_vec3_normalize((__int64)&g_182A9A9E0, &quaternion);
  acos_result_26 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  g_182A9AA8C = 1;
  g_182A9AAE8 = 1;
  g_182A9BD10 = 0;
  g_182A9BD08 = 1065353216;
  *(float *)&acos_result_26 = acos_result_26 + acos_result_26;
  g_182A9BE04 = 1048576000;
  g_182A9BE08 = 1035993088;
  g_182A9BE0C = 1048576000;
  unused_written_slot_4 = 1065353216;
  g_182A9A9EC = LODWORD(acos_result_26);
  _mm_storeu_si128((__m128i *)(void *)&g_182A9AF10, _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  strcpy((char *)&g_182A9BD30, "Red Disk");
  axis = xmmword_140278D30;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  sr_math_vec3_normalize((__int64)&g_182A9BDB0, &quaternion);
  acos_result_27 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  g_182A9BE5C = 1;
  g_182A9BEB8 = 1;
  g_182A9D0E0 = 0;
  g_182A9D0D8 = 1065353216;
  *(float *)&acos_result_27 = acos_result_27 + acos_result_27;
  g_182A9BDBC = LODWORD(acos_result_27);
  _mm_storeu_si128((__m128i *)(void *)&g_182A9C2E0, _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  strcpy((char *)&g_182A9D100, "Cell Phone");
  axis = xmmword_140278D30;
  unused_written_slot_4 = 1065353216;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  sr_math_vec3_normalize((__int64)&g_182A9D180, &quaternion);
  acos_result_28 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  g_182A9D1D4 = 1033895936;
  g_182A9D1D8 = 1047527424;
  *(float *)&acos_result_28 = acos_result_28 + acos_result_28;
  g_182A9D1DC = 1033895936;
  g_182A9E4B0 = 0;
  g_182A9E4A4 = 100;
  g_182A9E4A8 = 1061158912;
  g_182A9D18C = LODWORD(acos_result_28);
  _mm_storeu_si128((__m128i *)(void *)&g_182A9D6B0, _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  unused_written_slot_4 = 1065353216;
  strcpy((char *)&g_182A9E4D0, "Walkie-talkie");
  axis = xmmword_140278D30;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  sr_math_vec3_normalize((__int64)&g_182A9E550, &quaternion);
  acos_result_29 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  g_182A9E5A8 = 1041235968;
  g_182A9E5A4 = 1027604480;
  g_182A9E5AC = 1027604480;
  g_182A9F880 = 0;
  *(float *)&acos_result_29 = acos_result_29 + acos_result_29;
  g_182A9F878 = 1065353216;
  g_182A9F8A0 = 7955787;
  unused_written_slot_4 = 1065353216;
  g_182A9E55C = LODWORD(acos_result_29);
  _mm_storeu_si128((__m128i *)(void *)&g_182A9EA80, _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  axis = xmmword_140278D30;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  sr_math_vec3_normalize((__int64)&g_182A9F920, &quaternion);
  acos_result_30 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  strcpy((char *)&g_182AB4970, "Bottle");
  *(float *)&acos_result_30 = acos_result_30 + acos_result_30;
  strcpy((char *)&g_182AAE660, "computer");
  g_182A9F92C = LODWORD(acos_result_30);
  _mm_storeu_si128((__m128i *)(void *)&g_182A9FE50, _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  g_182A9F974 = 1031798784;
  strcpy((char *)&g_182AA2040, "Newspaper");
  __builtin_memcpy((void *)&g_182AA2090, (const void *)&xmmword_1402798C0, 16);
  g_182A9F978 = 1031798784;
  _mm_storeu_si128((__m128i *)(void *)&g_182AA25F0, _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  g_182A9F97C = 1040187392;
  g_182AA2020 = 0;
  g_182AA2018 = 1056964608;
  g_182AA2114 = 1048576000;
  g_182AA2118 = 1040187392;
  g_182AA211C = 1048576000;
  g_182AA20A0 = 0;
  g_182AA20A4 = 1044381696;
  g_182AABE9C = 1;
  g_182AABE98 = 1101004800;
  g_182AABEC0 = 7892802;
  g_182AABF94 = 1048576000;
  g_182AABF98 = 1048576000;
  g_182AABF9C = 1048576000;
  g_182AB494C = 1;
  g_182AB4948 = 1082130432;
  g_182AB4A44 = 1040187392;
  g_182AB4A48 = 1048576000;
  g_182AB4A4C = 1040187392;
  g_182AAE63C = 1;
  g_182AAE638 = 1109393408;
  axis = xmmword_140278D30;
  unused_written_slot_4 = 1065353216;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  sr_math_vec3_normalize((__int64)&g_182AAE6E0, &quaternion);
  acos_result_31 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  *(float *)&acos_result_31 = acos_result_31 + acos_result_31;
  strcpy((char *)&g_182AAFA30, "arcade");
  g_182AAE6EC = LODWORD(acos_result_31);
  *(unsigned int *)&item_type39_child_offset = -1108297869;
  g_182AAEB4C = 0;
  g_182AAEB54 = 1031798784;
  g_182AAE734 = 1048576000;
  g_182AAE738 = 1048576000;
  g_182AAE73C = 1048576000;
  g_182AAFA0C = 1;
  g_182AAFA08 = 1109393408;
  axis = xmmword_140278D30;
  unused_written_slot_4 = 1065353216;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  sr_math_vec3_normalize((__int64)&g_182AAFAB0, &quaternion);
  acos_result_32 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  g_182AAFF1C = 0;
  g_182AAD290 = 0x786F4220676942LL;
  strcpy((char *)&g_182AB0E00, "Table");
  *(float *)&acos_result_32 = acos_result_32 + acos_result_32;
  g_182AAFABC = LODWORD(acos_result_32);
  g_182AB0DD8 = 1134559232;
  strcpy((char *)&g_182AB21D0, "tabletest2");
  g_182AB3578 = 1117782016;
  g_182AAFF20 = -1115684864;
  g_182AAFF24 = 1040187392;
  g_182AAFB04 = 1048576000;
  g_182AAFB08 = 1048576000;
  g_182AAFB0C = 1048576000;
  g_182AAD26C = 1;
  g_182AAD268 = 1101004800;
  g_182AAD364 = 1065353216;
  g_182AAD368 = 1040187392;
  g_182AAD36C = 1056964608;
  g_182AB0DDC = 1;
  g_182AB0ED4 = 1065353216;
  g_182AB0ED8 = 1056964608;
  g_182AB0EDC = 1056964608;
  g_182AB21AC = 1;
  g_182AB21A8 = 1109393408;
  g_182AB22A4 = 1065353216;
  g_182AB22A8 = 1056964608;
  g_182AB22AC = 1056964608;
  g_182AB357C = 1;
  strcpy((char *)&g_182AB35A0, "cubewall");
  g_182AB3674 = 1071644672;
  g_182AB3678 = 1061158912;
  g_182AB367C = 1040187392;
  sub_1400E7F80(45, "data/watermelon.itm");
  strcpy((char *)&g_182AB5D40, "Watermelon");
  strcpy((char *)&g_182AA0C70, "Door");
  g_182AB5D1C = 1;
  g_182AB5D14 = 10;
  g_182AB5D18 = 1082130432;
  g_182AB5E14 = 1040187392;
  g_182AB5E18 = 1048576000;
  g_182AB5E1C = 1040187392;
  g_182AA0C4C = 1;
  g_182AA0C48 = 1101004800;
  g_182AA0CC0 = 1054867456;
  g_182AA0CC8 = 0;
  axis = xmmword_140278D30;
  unused_written_slot_4 = 1065353216;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis + 3, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  sr_math_vec3_normalize((__int64)&g_182AA0CF0, &quaternion);
  acos_result_33 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  strcpy((char *)&g_182AA3410, "Burger");
  *(float *)&acos_result_33 = acos_result_33 + acos_result_33;
  g_182AA0D44 = 1054867456;
  g_182AA0D4C = 1031798784;
  g_182AA33F0 = 0;
  g_182AA33E8 = 1065353216;
  g_182AA0D48 = 1066401792;
  g_182AA0CFC = LODWORD(acos_result_33);
  g_182AA3404 = 8;
  g_182AA3460 = 0;
  g_182AA3468 = 1031798784;
  axis = xmmword_140278D30;
  unused_written_slot_4 = 1065353216;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  sr_math_vec3_normalize((__int64)&g_182AA3490, &quaternion);
  acos_result_34 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  strcpy((char *)&g_182AA47E0, "Desk");
  *(float *)&acos_result_34 = acos_result_34 + acos_result_34;
  strcpy((char *)&g_182AA5BB0, "Lamp");
  g_182AA34E4 = 1040187392;
  g_182AA349C = LODWORD(acos_result_34);
  strcpy((char *)&g_182AA6F80, "Pay Phone");
  g_182AA34E8 = 1040187392;
  g_182AA34EC = 1040187392;
  g_182AA47C0 = 0;
  g_182AA47B8 = 1098907648;
  g_182AA48B4 = 1056964608;
  g_182AA48B8 = 1056964608;
  g_182AA48BC = 1056964608;
  g_182AA5B90 = 0;
  g_182AA5B88 = 1098907648;
  g_182AA5C84 = 1056964608;
  g_182AA5C88 = 1056964608;
  g_182AA5C8C = 1056964608;
  g_182AA6F60 = 0;
  g_182AA6F58 = 1065353216;
  axis = xmmword_140278D30;
  unused_written_slot_4 = 1065353216;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  sr_math_vec3_normalize((__int64)&g_182AA7000, &quaternion);
  acos_result_35 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  strcpy((char *)&g_182AA8350, "Memo");
  g_182AA7054 = 1033895936;
  g_182AA7058 = 1047527424;
  *(float *)&acos_result_35 = acos_result_35 + acos_result_35;
  g_182AA705C = 1033895936;
  g_182AA8330 = 0;
  g_182AA8328 = 1056964608;
  g_182AA8424 = 1048576000;
  g_182AA700C = LODWORD(acos_result_35);
  __builtin_memcpy((void *)&g_182AA83A0, (const void *)&xmmword_1402798C0, 16);
  g_182AA8428 = 1040187392;
  _mm_storeu_si128((__m128i *)(void *)&g_182AA8900, _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  g_182AA842C = 1048576000;
  g_182AA83B0 = 0;
  g_182AA83B4 = 1044381696;
  g_182A8E314 = 1000;
  g_182A8E320 = 0;
  g_182A8E334 = 1;
  g_182A8E318 = 1061158912;
  g_182A8E340 = 0x6564616E657247LL;
  unused_written_slot_4 = 1065353216;
  axis = xmmword_140278D30;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  sr_math_vec3_normalize((__int64)&g_182A8E3C0, &quaternion);
  acos_result_36 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  strcpy((char *)&g_182AA9720, "Soccer Ball");
  g_182A8E414 = 1031798784;
  g_182A8E418 = 1031798784;
  *(float *)&acos_result_36 = acos_result_36 + acos_result_36;
  g_182A8E41C = 1031798784;
  g_182AA96F4 = 100;
  g_182AA9700 = 0;
  g_182AA9714 = 1;
  g_182A8E3CC = LODWORD(acos_result_36);
  _mm_storeu_si128((__m128i *)(void *)&g_182A8E8F0, _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  unused_written_slot_4 = 1065353216;
  g_182AA96F8 = 1055286886;
  axis = xmmword_140278D30;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  sr_math_vec3_normalize((__int64)&g_182AA97A0, &quaternion);
  acos_result_37 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  strcpy((char *)&g_182AAAAF0, "Rope");
  g_182AA97F4 = 1038174126;
  g_182AA97F8 = 1038174126;
  *(float *)&acos_result_37 = acos_result_37 + acos_result_37;
  g_182AA97FC = 1038174126;
  g_182AAAAC4 = 100;
  g_182AAAAD0 = 0;
  g_182AAAAE4 = 0;
  g_182AA97AC = LODWORD(acos_result_37);
  g_182AAAAC8 = 0x40000000;
  axis = xmmword_140278D30;
  unused_written_slot_4 = 1065353216;
  unused_written_slot_3 = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  sr_math_vec3_normalize((__int64)&g_182AAAB70, &quaternion);
  acos_result_38 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  unused_written_slot_4 = 1065353216;
  axis = xmmword_140278D30;
  *(float *)&acos_result_38 = acos_result_38 + acos_result_38;
  unused_written_slot_3 = xmmword_140278D30;
  g_182AAAB7C = LODWORD(acos_result_38);
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container(1070141403));
  sr_math_quat_from_mat3(&quaternion, (float *)&axis);
  sr_math_vec3_normalize((__int64)&g_182AAAB80, &quaternion);
  acos_result_39 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
  element_index = 0;
  g_182AAABC4 = 1031798784;
  element_index_2 = 0;
  *(float *)&acos_result_39 = acos_result_39 + acos_result_39;
  g_182AAABC8 = 1048576000;
  g_182AAABCC = 1031798784;
  g_182AAAB8C = LODWORD(acos_result_39);
  do
  {
    scaled_index = 1268 * element_index_2;
    if ( *(float *)&dword_140404A6C[1268 * element_index_2 + 278521350] <= 0.0
      || (weighted_sum = *(float *)&dword_140404A6C[scaled_index + 278521351], !(weighted_sum > 0.0f))
      || (weighted_sum_2 = *(float *)&dword_140404A6C[scaled_index + 278521352], !(weighted_sum_2 > 0.0f)) )
    {
      weighted_sum_3 = 1.0;
      unused_written_slot = (float *)(void *)&dword_140404A6C[scaled_index + 278521353];
      unused_written_slot_2 = (float *)(void *)&dword_140404A6C[scaled_index + 278521354];
      *unused_written_slot = 1.0;
      *unused_written_slot_2 = 1.0;
    }
    else
    {
      unused_written_slot = (float *)(void *)&dword_140404A6C[scaled_index + 278521353];
      unused_written_slot_2 = (float *)(void *)&dword_140404A6C[scaled_index + 278521354];
      *unused_written_slot = 3.0f / (float)((float)(weighted_sum_2 * weighted_sum_2) + (float)(weighted_sum * weighted_sum));
      *unused_written_slot_2 = 3.0f
            / (float)((float)(*(float *)&dword_140404A6C[scaled_index + 278521352] * *(float *)&dword_140404A6C[scaled_index + 278521352])
                    + (float)(*(float *)&dword_140404A6C[scaled_index + 278521350] * *(float *)&dword_140404A6C[scaled_index + 278521350]));
      weighted_sum_3 = 3.0f
           / (float)((float)(*(float *)&dword_140404A6C[scaled_index + 278521351] * *(float *)&dword_140404A6C[scaled_index + 278521351])
                   + (float)(*(float *)&dword_140404A6C[scaled_index + 278521350] * *(float *)&dword_140404A6C[scaled_index + 278521350]));
    }
    *(float *)&dword_140404A6C[1268 * element_index_2 + 278521355] = weighted_sum_3;
    if ( element_index != 35 )
    {
      if ( !element_index || element_index == 9 )
      {
        *unused_written_slot = 1.0 / *(float *)&dword_140404A6C[1268 * element_index_2 + 278522406];
        *unused_written_slot_2 = 1.0 / *(float *)&dword_140404A6C[1268 * element_index_2 + 278522407];
        *(float *)&dword_140404A6C[1268 * element_index_2 + 278521355] = 1.0 / *(float *)&dword_140404A6C[1268 * element_index_2 + 278522408];
      }
      switch ( element_index )
      {
        case '\'':
          literal_text = "data/item/computer.it3";
          selection_code = 39;
          break;
        case '(':
          literal_text = "data/item/computer.it3";
          selection_code = 40;
          break;
        case '*':
          literal_text = "data/item/tabletest2.it3";
          selection_code = 42;
          break;
        case '+':
          literal_text = "data/item/cubewall.it3";
          selection_code = 43;
          break;
        default:
          goto LABEL_84;
      }
      sub_1400CB5F0(selection_code, literal_text);
      goto LABEL_84;
    }
    *unused_written_slot = 2.2222223
          / (float)(*(float *)&dword_140404A6C[scaled_index + 278521350] * *(float *)&dword_140404A6C[scaled_index + 278521350]);
    *unused_written_slot_2 = 2.2222223
          / (float)(*(float *)&dword_140404A6C[scaled_index + 278521350] * *(float *)&dword_140404A6C[scaled_index + 278521350]);
    *(float *)&dword_140404A6C[1268 * element_index_2 + 278521355] = 2.2222223
                                                        / (float)(*(float *)&dword_140404A6C[1268 * element_index_2 + 278521350]
                                                                * *(float *)&dword_140404A6C[1268 * element_index_2 + 278521350]);
LABEL_84:
    if ( !dword_140404A6C[1268 * element_index_2 + 278521288] || element_index == 42 )
      goto LABEL_152;
    if ( element_index == 44 )
    {
      sub_140054750(44, sr_export_float_lane_container(1040187392), 0.09375, 0.5);
    }
    else if ( element_index == 45 )
    {
      sub_140054750(45, sr_export_float_lane_container(1044381696), 0.09375, 0.60000002);
    }
    else
    {
      dword_140404A6C[1268 * element_index_2 + 278522247] = 0;
      *(_QWORD *)&dword_140404A6C[1268 * element_index_2 + 278522249] = sr_path_malloc(96);
      record_byte_offset = 2;
      scaled_index_2 = dword_140404A6C[1268 * element_index_2 + 278522247];
      do
      {
        masked_bits = ((_BYTE)record_byte_offset - 2) & 3;
        if ( (((_BYTE)record_byte_offset - 2) & 3) == 0 || masked_bits == 3 )
          weighted_sum_4 = -*(float *)&dword_140404A6C[scaled_index + 278521350];
        else
          weighted_sum_4 = *(float *)&dword_140404A6C[scaled_index + 278521350];
        weighted_sum_5 = *(float *)&dword_140404A6C[scaled_index + 278521351];
        if ( record_byte_offset - 2 < 4 )
          weighted_sum_5 = -weighted_sum_5;
        weighted_sum_6 = *(float *)&dword_140404A6C[scaled_index + 278521352];
        if ( masked_bits < 2 )
          weighted_sum_6 = -weighted_sum_6;
        scaled_index_3 = (int)(3 * scaled_index_2);
        masked_bits_2 = *(_QWORD *)&dword_140404A6C[1268 * element_index_2 + 278522249];
        *(float *)(masked_bits_2 + 4 * scaled_index_3) = weighted_sum_4;
        *(float *)(masked_bits_2 + 4 * scaled_index_3 + 4) = weighted_sum_5;
        *(float *)(masked_bits_2 + 4 * scaled_index_3 + 8) = weighted_sum_6;
        scaled_index_4 = dword_140404A6C[1268 * element_index_2 + 278522247] + 1;
        dword_140404A6C[1268 * element_index_2 + 278522247] = scaled_index_4;
        masked_bits_3 = ((_BYTE)record_byte_offset - 1) & 3;
        if ( (((_BYTE)record_byte_offset - 1) & 3) == 0 || masked_bits_3 == 3 )
          weighted_sum_7 = -*(float *)&dword_140404A6C[scaled_index + 278521350];
        else
          weighted_sum_7 = *(float *)&dword_140404A6C[scaled_index + 278521350];
        weighted_sum_8 = *(float *)&dword_140404A6C[scaled_index + 278521351];
        if ( record_byte_offset - 1 < 4 )
          weighted_sum_8 = -weighted_sum_8;
        weighted_sum_9 = *(float *)&dword_140404A6C[scaled_index + 278521352];
        if ( masked_bits_3 < 2 )
          weighted_sum_9 = -weighted_sum_9;
        scaled_index_5 = (int)(3 * scaled_index_4);
        masked_bits_4 = *(_QWORD *)&dword_140404A6C[1268 * element_index_2 + 278522249];
        *(float *)(masked_bits_4 + 4 * scaled_index_5) = weighted_sum_7;
        *(float *)(masked_bits_4 + 4 * scaled_index_5 + 4) = weighted_sum_8;
        *(float *)(masked_bits_4 + 4 * scaled_index_5 + 8) = weighted_sum_9;
        scaled_index_6 = dword_140404A6C[1268 * element_index_2 + 278522247] + 1;
        dword_140404A6C[1268 * element_index_2 + 278522247] = scaled_index_6;
        masked_bits_5 = record_byte_offset & 3;
        if ( (record_byte_offset & 3) == 0 || masked_bits_5 == 3 )
          weighted_sum_10 = -*(float *)&dword_140404A6C[scaled_index + 278521350];
        else
          weighted_sum_10 = *(float *)&dword_140404A6C[scaled_index + 278521350];
        weighted_sum_11 = *(float *)&dword_140404A6C[scaled_index + 278521351];
        if ( record_byte_offset < 4 )
          weighted_sum_11 = -weighted_sum_11;
        weighted_sum_12 = *(float *)&dword_140404A6C[scaled_index + 278521352];
        if ( masked_bits_5 < 2 )
          weighted_sum_12 = -weighted_sum_12;
        scaled_index_7 = (int)(3 * scaled_index_6);
        masked_bits_6 = *(_QWORD *)&dword_140404A6C[1268 * element_index_2 + 278522249];
        *(float *)(masked_bits_6 + 4 * scaled_index_7) = weighted_sum_10;
        *(float *)(masked_bits_6 + 4 * scaled_index_7 + 4) = weighted_sum_11;
        *(float *)(masked_bits_6 + 4 * scaled_index_7 + 8) = weighted_sum_12;
        scaled_index_8 = dword_140404A6C[1268 * element_index_2 + 278522247] + 1;
        dword_140404A6C[1268 * element_index_2 + 278522247] = scaled_index_8;
        masked_bits_7 = ((_BYTE)record_byte_offset + 1) & 3;
        if ( (((_BYTE)record_byte_offset + 1) & 3) == 0 || masked_bits_7 == 3 )
          weighted_sum_13 = -*(float *)&dword_140404A6C[scaled_index + 278521350];
        else
          weighted_sum_13 = *(float *)&dword_140404A6C[scaled_index + 278521350];
        weighted_sum_14 = *(float *)&dword_140404A6C[scaled_index + 278521351];
        if ( record_byte_offset + 1 < 4 )
          weighted_sum_14 = -weighted_sum_14;
        weighted_sum_15 = *(float *)&dword_140404A6C[scaled_index + 278521352];
        if ( masked_bits_7 < 2 )
          weighted_sum_15 = -weighted_sum_15;
        record_byte_offset += 4;
        scaled_index_9 = (int)(3 * scaled_index_8);
        masked_bits_8 = *(_QWORD *)&dword_140404A6C[1268 * element_index_2 + 278522249];
        *(float *)(masked_bits_8 + 4 * scaled_index_9) = weighted_sum_13;
        *(float *)(masked_bits_8 + 4 * scaled_index_9 + 4) = weighted_sum_14;
        *(float *)(masked_bits_8 + 4 * scaled_index_9 + 8) = weighted_sum_15;
        scaled_index_2 = ++dword_140404A6C[1268 * element_index_2 + 278522247];
      }
      while ( record_byte_offset - 2 < 8 );
      dword_140404A6C[1268 * element_index_2 + 278522251] = 0;
      *(_QWORD *)&dword_140404A6C[1268 * element_index_2 + 278522253] = 0;
      dword_140404A6C[scaled_index + 278522255] = 0;
      dword_140404A6C[1268 * element_index_2 + 278522256 + 14 * (int)dword_140404A6C[1268 * element_index_2 + 278522251]] = 8;
      *(_QWORD *)&dword_140404A6C[1268 * element_index_2 + 278522257 + 14 * (int)dword_140404A6C[1268 * element_index_2 + 278522251]] = sr_path_malloc(32);
      **(_DWORD **)&dword_140404A6C[1268 * element_index_2 + 278522257 + 14 * (int)dword_140404A6C[1268 * element_index_2 + 278522251]] = 0;
      *(_DWORD *)(*(_QWORD *)&dword_140404A6C[1268 * element_index_2
                                            + 278522257
                                            + 14 * (int)dword_140404A6C[1268 * element_index_2 + 278522251]]
                + 4LL) = 1;
      *(_DWORD *)(*(_QWORD *)&dword_140404A6C[1268 * element_index_2
                                            + 278522257
                                            + 14 * (int)dword_140404A6C[1268 * element_index_2 + 278522251]]
                + 8LL) = 2;
      *(_DWORD *)(*(_QWORD *)&dword_140404A6C[1268 * element_index_2
                                            + 278522257
                                            + 14 * (int)dword_140404A6C[1268 * element_index_2 + 278522251]]
                + 12LL) = 3;
      *(_DWORD *)(*(_QWORD *)&dword_140404A6C[1268 * element_index_2
                                            + 278522257
                                            + 14 * (int)dword_140404A6C[1268 * element_index_2 + 278522251]]
                + 16LL) = 4;
      *(_DWORD *)(*(_QWORD *)&dword_140404A6C[1268 * element_index_2
                                            + 278522257
                                            + 14 * (int)dword_140404A6C[1268 * element_index_2 + 278522251]]
                + 20LL) = 5;
      *(_DWORD *)(*(_QWORD *)&dword_140404A6C[1268 * element_index_2
                                            + 278522257
                                            + 14 * (int)dword_140404A6C[1268 * element_index_2 + 278522251]]
                + 24LL) = 6;
      *(_DWORD *)(*(_QWORD *)&dword_140404A6C[1268 * element_index_2
                                            + 278522257
                                            + 14 * (int)dword_140404A6C[1268 * element_index_2 + 278522251]]
                + 28LL) = 7;
      dword_140404A6C[1268 * element_index_2 + 278522259 + 14 * (int)dword_140404A6C[1268 * element_index_2 + 278522251]] = 0;
      allocated_buffer = sr_path_malloc(216);
      record_byte_offset_2 = dword_1402B3664;
      *(_QWORD *)&dword_140404A6C[1268 * element_index_2 + 278522261 + 14 * (int)dword_140404A6C[1268 * element_index_2 + 278522251]] = allocated_buffer;
      do
      {
        scaled_index_10 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0C0 + scaled_index_10)
                  + 36LL * *(int *)((char *)&g_182A7F0B8 + scaled_index_10)
                  + 8) = *(record_byte_offset_2 - 1);
        scaled_index_11 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0C0 + scaled_index_11)
                  + 36LL * *(int *)((char *)&g_182A7F0B8 + scaled_index_11)
                  + 12) = *record_byte_offset_2;
        scaled_index_12 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0C0 + scaled_index_12)
                  + 36LL * *(int *)((char *)&g_182A7F0B8 + scaled_index_12)
                  + 16) = record_byte_offset_2[1];
        scaled_index_13 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0C0 + scaled_index_13)
                  + 36LL * *(int *)((char *)&g_182A7F0B8 + scaled_index_13)
                  + 20) = record_byte_offset_2[2];
        scaled_index_14 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0C0 + scaled_index_14)
                  + 36LL * *(int *)((char *)&g_182A7F0B8 + scaled_index_14)
                  + 4) = 4;
        scaled_index_15 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        ++*(unsigned int *)((char *)&g_182A7F0B8 + scaled_index_15);
        scaled_index_16 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0C0 + scaled_index_16)
                  + 36LL * *(int *)((char *)&g_182A7F0B8 + scaled_index_16)
                  + 8) = record_byte_offset_2[3];
        scaled_index_17 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0C0 + scaled_index_17)
                  + 36LL * *(int *)((char *)&g_182A7F0B8 + scaled_index_17)
                  + 12) = record_byte_offset_2[4];
        scaled_index_18 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0C0 + scaled_index_18)
                  + 36LL * *(int *)((char *)&g_182A7F0B8 + scaled_index_18)
                  + 16) = record_byte_offset_2[5];
        scaled_index_19 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0C0 + scaled_index_19)
                  + 36LL * *(int *)((char *)&g_182A7F0B8 + scaled_index_19)
                  + 20) = record_byte_offset_2[6];
        scaled_index_20 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0C0 + scaled_index_20)
                  + 36LL * *(int *)((char *)&g_182A7F0B8 + scaled_index_20)
                  + 4) = 4;
        scaled_index_21 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        ++*(unsigned int *)((char *)&g_182A7F0B8 + scaled_index_21);
        scaled_index_22 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0C0 + scaled_index_22)
                  + 36LL * *(int *)((char *)&g_182A7F0B8 + scaled_index_22)
                  + 8) = record_byte_offset_2[7];
        scaled_index_23 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0C0 + scaled_index_23)
                  + 36LL * *(int *)((char *)&g_182A7F0B8 + scaled_index_23)
                  + 12) = record_byte_offset_2[8];
        scaled_index_24 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0C0 + scaled_index_24)
                  + 36LL * *(int *)((char *)&g_182A7F0B8 + scaled_index_24)
                  + 16) = record_byte_offset_2[9];
        scaled_index_25 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0C0 + scaled_index_25)
                  + 36LL * *(int *)((char *)&g_182A7F0B8 + scaled_index_25)
                  + 20) = record_byte_offset_2[10];
        record_byte_offset_2 += 12;
        scaled_index_26 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0C0 + scaled_index_26)
                  + 36LL * *(int *)((char *)&g_182A7F0B8 + scaled_index_26)
                  + 4) = 4;
        scaled_index_27 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        ++*(unsigned int *)((char *)&g_182A7F0B8 + scaled_index_27);
      }
      while ( (__int64)record_byte_offset_2 < (__int64)&dword_1402B36C4 );
      dword_140404A6C[1268 * element_index_2 + 278522263 + 14 * (int)dword_140404A6C[1268 * element_index_2 + 278522251]] = 0;
      allocated_buffer_2 = sr_path_malloc(144);
      record_byte_offset_3 = dword_1402B3754;
      *(_QWORD *)&dword_140404A6C[1268 * element_index_2 + 278522265 + 14 * (int)dword_140404A6C[1268 * element_index_2 + 278522251]] = allocated_buffer_2;
      do
      {
        scaled_index_28 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0D0 + scaled_index_28)
                  + 12LL * *(int *)((char *)&g_182A7F0C8 + scaled_index_28)) = *(record_byte_offset_3 - 1);
        scaled_index_29 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0D0 + scaled_index_29)
                  + 12LL * *(int *)((char *)&g_182A7F0C8 + scaled_index_29)
                  + 4) = *record_byte_offset_3;
        scaled_index_30 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        ++*(unsigned int *)((char *)&g_182A7F0C8 + scaled_index_30);
        scaled_index_31 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0D0 + scaled_index_31)
                  + 12LL * *(int *)((char *)&g_182A7F0C8 + scaled_index_31)) = record_byte_offset_3[1];
        scaled_index_32 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0D0 + scaled_index_32)
                  + 12LL * *(int *)((char *)&g_182A7F0C8 + scaled_index_32)
                  + 4) = record_byte_offset_3[2];
        scaled_index_33 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        ++*(unsigned int *)((char *)&g_182A7F0C8 + scaled_index_33);
        scaled_index_34 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0D0 + scaled_index_34)
                  + 12LL * *(int *)((char *)&g_182A7F0C8 + scaled_index_34)) = record_byte_offset_3[3];
        scaled_index_35 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0D0 + scaled_index_35)
                  + 12LL * *(int *)((char *)&g_182A7F0C8 + scaled_index_35)
                  + 4) = record_byte_offset_3[4];
        scaled_index_36 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        ++*(unsigned int *)((char *)&g_182A7F0C8 + scaled_index_36);
        scaled_index_37 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0D0 + scaled_index_37)
                  + 12LL * *(int *)((char *)&g_182A7F0C8 + scaled_index_37)) = record_byte_offset_3[5];
        scaled_index_38 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0D0 + scaled_index_38)
                  + 12LL * *(int *)((char *)&g_182A7F0C8 + scaled_index_38)
                  + 4) = record_byte_offset_3[6];
        scaled_index_39 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        ++*(unsigned int *)((char *)&g_182A7F0C8 + scaled_index_39);
        scaled_index_40 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0D0 + scaled_index_40)
                  + 12LL * *(int *)((char *)&g_182A7F0C8 + scaled_index_40)) = record_byte_offset_3[7];
        scaled_index_41 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0D0 + scaled_index_41)
                  + 12LL * *(int *)((char *)&g_182A7F0C8 + scaled_index_41)
                  + 4) = record_byte_offset_3[8];
        scaled_index_42 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        ++*(unsigned int *)((char *)&g_182A7F0C8 + scaled_index_42);
        scaled_index_43 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0D0 + scaled_index_43)
                  + 12LL * *(int *)((char *)&g_182A7F0C8 + scaled_index_43)) = record_byte_offset_3[9];
        scaled_index_44 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0D0 + scaled_index_44)
                  + 12LL * *(int *)((char *)&g_182A7F0C8 + scaled_index_44)
                  + 4) = record_byte_offset_3[10];
        record_byte_offset_3 += 12;
        scaled_index_45 = 5072 * element_index_2 + 56LL * (int)dword_140404A6C[1268 * element_index_2 + 278522251];
        ++*(unsigned int *)((char *)&g_182A7F0C8 + scaled_index_45);
      }
      while ( (__int64)record_byte_offset_3 < (__int64)dword_1402B37B4 );
      ++dword_140404A6C[1268 * element_index_2 + 278522251];
    }
    iteration_count = 0;
    if ( (int)dword_140404A6C[1268 * element_index_2 + 278522259] > 0 )
    {
      record_byte_offset_4 = 0;
      do
      {
        masked_bits_9 = *(_QWORD *)&dword_140404A6C[1268 * element_index_2 + 278522249];
        masked_bits_10 = *(_QWORD *)&dword_140404A6C[1268 * element_index_2 + 278522261];
        loaded_word = 3 * *(_DWORD *)(record_byte_offset_4 + masked_bits_10 + 8);
        weighted_sum_16 = *(float *)(masked_bits_9 + 4 * loaded_word);
        weighted_sum_17 = *(float *)(masked_bits_9 + 4 * loaded_word + 4);
        weighted_sum_18 = *(float *)(masked_bits_9 + 4 * loaded_word + 8);
        loaded_word_2 = 3 * *(_DWORD *)(record_byte_offset_4 + masked_bits_10 + 12);
        combined_products = *(float *)(masked_bits_9 + 4 * loaded_word_2) - weighted_sum_16;
        combined_products_2 = *(float *)(masked_bits_9 + 4 * loaded_word_2 + 4) - weighted_sum_17;
        combined_products_3 = *(float *)(masked_bits_9 + 4 * loaded_word_2 + 8) - weighted_sum_18;
        loaded_word_3 = 3 * *(_DWORD *)(record_byte_offset_4 + masked_bits_10 + 16);
        weighted_sum_19 = (float *)(record_byte_offset_4 + masked_bits_10 + 24);
        combined_products_4 = *(float *)(masked_bits_9 + 4 * loaded_word_3 + 4) - weighted_sum_17;
        combined_products_5 = *(float *)(masked_bits_9 + 4 * loaded_word_3 + 8) - weighted_sum_18;
        combined_products_6 = *(float *)(masked_bits_9 + 4 * loaded_word_3) - weighted_sum_16;
        *weighted_sum_19 = (float)(combined_products_4 * combined_products_3) - (float)(combined_products_5 * combined_products_2);
        weighted_sum_19[1] = (float)(combined_products * combined_products_5) - (float)(combined_products_6 * combined_products_3);
        weighted_sum_19[2] = (float)(combined_products_6 * combined_products_2) - (float)(combined_products * combined_products_4);
        sr_math_vec3_normalize((__int64)weighted_sum_19, weighted_sum_19);
        ++iteration_count;
        record_byte_offset_4 += 36;
      }
      while ( iteration_count < (int)dword_140404A6C[1268 * element_index_2 + 278522259] );
    }
    scaled_index_46 = (int)dword_140404A6C[1268 * element_index_2 + 278522247];
    integer_sum = 0;
    g_193AC8820 = 0;
    scaled_index_47 = 0;
    g_193ACA824 = 0;
    g_193ACF028 = 0;
    *(_QWORD *)&g_193AD082C = 1;
    g_193AD0834 = 0;
    if ( scaled_index_46 >= 4 )
    {
      masked_bits_11 = *(_QWORD *)&dword_140404A6C[1268 * element_index_2 + 278522249];
      remaining_count = ((unsigned __int64)(scaled_index_46 - 4) >> 2) + 1;
      record_byte_offset_5 = (unsigned int *)(masked_bits_11 + 20);
      scaled_index_47 = 4 * remaining_count;
      do
      {
        if ( integer_sum < 512 )
        {
          scaled_index_48 = 2LL * integer_sum;
          dword_140404A6C[2 * scaled_index_48 + 349900654] = *(record_byte_offset_5 - 5);
          dword_140404A6C[2 * scaled_index_48 + 349900655] = *(record_byte_offset_5 - 4);
          dword_140404A6C[2 * scaled_index_48 + 349900656] = *(record_byte_offset_5 - 3);
          dword_140404A6C[4 * g_193AC8820 + 349900657] = 0;
          integer_sum = g_193AC8820 + 1;
          g_193AC8820 = integer_sum;
          if ( integer_sum < 512 )
          {
            scaled_index_49 = 2LL * integer_sum;
            dword_140404A6C[2 * scaled_index_49 + 349900654] = *(record_byte_offset_5 - 2);
            dword_140404A6C[2 * scaled_index_49 + 349900655] = *(record_byte_offset_5 - 1);
            dword_140404A6C[2 * scaled_index_49 + 349900656] = *record_byte_offset_5;
            dword_140404A6C[4 * g_193AC8820 + 349900657] = 0;
            integer_sum = g_193AC8820 + 1;
            g_193AC8820 = integer_sum;
            if ( integer_sum < 512 )
            {
              scaled_index_50 = 2LL * integer_sum;
              dword_140404A6C[2 * scaled_index_50 + 349900654] = record_byte_offset_5[1];
              dword_140404A6C[2 * scaled_index_50 + 349900655] = record_byte_offset_5[2];
              dword_140404A6C[2 * scaled_index_50 + 349900656] = record_byte_offset_5[3];
              dword_140404A6C[4 * g_193AC8820 + 349900657] = 0;
              integer_sum = g_193AC8820 + 1;
              g_193AC8820 = integer_sum;
              if ( integer_sum < 512 )
              {
                scaled_index_51 = 2LL * integer_sum;
                dword_140404A6C[2 * scaled_index_51 + 349900654] = record_byte_offset_5[4];
                dword_140404A6C[2 * scaled_index_51 + 349900655] = record_byte_offset_5[5];
                dword_140404A6C[2 * scaled_index_51 + 349900656] = record_byte_offset_5[6];
                dword_140404A6C[4 * g_193AC8820 + 349900657] = 0;
                integer_sum = ++g_193AC8820;
              }
            }
          }
        }
        record_byte_offset_5 += 12;
        --remaining_count;
      }
      while ( remaining_count );
      if ( scaled_index_47 >= scaled_index_46 )
        goto LABEL_148;
      goto LABEL_144;
    }
    if ( scaled_index_46 > 0 )
    {
      masked_bits_11 = *(_QWORD *)&dword_140404A6C[1268 * element_index_2 + 278522249];
LABEL_144:
      remaining_count_2 = scaled_index_46 - scaled_index_47;
      running_total = (unsigned int *)(masked_bits_11 + 12 * scaled_index_47);
      do
      {
        if ( integer_sum < 512 )
        {
          scaled_index_52 = 2LL * integer_sum;
          dword_140404A6C[2 * scaled_index_52 + 349900654] = *running_total;
          dword_140404A6C[2 * scaled_index_52 + 349900655] = running_total[1];
          dword_140404A6C[2 * scaled_index_52 + 349900656] = running_total[2];
          dword_140404A6C[4 * g_193AC8820 + 349900657] = 0;
          integer_sum = ++g_193AC8820;
        }
        running_total += 3;
        --remaining_count_2;
      }
      while ( remaining_count_2 );
    }
LABEL_148:
    iteration_count_2 = 0;
    if ( (int)dword_140404A6C[1268 * element_index_2 + 278522259] > 0 )
    {
      record_byte_offset_6 = 0;
      do
      {
        sub_140048BA0(
          *(_DWORD *)(record_byte_offset_6 + *(_QWORD *)&dword_140404A6C[1268 * element_index_2 + 278522261] + 4),
          (unsigned int *)(*(_QWORD *)&dword_140404A6C[1268 * element_index_2 + 278522261] + 4 * (iteration_count_2 + 8LL * iteration_count_2 + 2)));
        ++iteration_count_2;
        record_byte_offset_6 += 36;
      }
      while ( iteration_count_2 < (int)dword_140404A6C[1268 * element_index_2 + 278522259] );
    }
    sub_14004A670((__int64)&dword_140404A6C[1268 * element_index + 278522365]);
    dword_140404A6C[scaled_index + 278521285] = 1;
LABEL_152:
    ++element_index;
    ++element_index_2;
  }
  while ( element_index < 46 );
  return;
}
#undef unused_frame_slot_0
#undef quaternion
#undef frame_float_at_36
#undef frame_float_at_40
#undef frame_float_at_44
#undef axis
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_frame_slot_88

