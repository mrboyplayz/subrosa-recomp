#include "shared_client.h"

// 14012250F: conditional instruction was optimized away because edx.4==2

//----- (0000000140127240) ----------------------------------------------------
void            sub_140127240(char *a1)
{
  __int64 file_handle;
  __int64 file_handle_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140127240[16];
#define Buffer (*(int (*))(void *)(sr_frame_140127240 + 0)) /* [rsp+38h] */
#define callee_output_word (*(int (*))(void *)(sr_frame_140127240 + 8)) /* [rsp+40h] */

  replay_length = 0;
  file_handle = crt_fopen(a1, "rb");
  file_handle_2 = file_handle;
  if ( file_handle )
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(file_handle));
    if ( Buffer == 1 )
    {
      fread_sr((void *)(uintptr_t)(&callee_output_word), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
      if ( callee_output_word == dword_1402B26C8 )
      {
        replay_position = 0;
        fread_sr((void *)(uintptr_t)(&replay_length), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
        fread_sr((void *)(uintptr_t)(g_144CBFAB8), 1, (int)replay_length, (FILE *)(uintptr_t)(file_handle_2));
      }
    }
    crt_fclose(file_handle_2);
  }
}
#undef Buffer
#undef callee_output_word

//----- (0000000140127500) ----------------------------------------------------
__int64 sub_140127500()
{
  int iteration_count;
  __int64 i;
  __int64 file_handle;
  __int64 file_handle_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140127500[128];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140127500 + 0)) /* [rsp+0h] */
#define destination_buffer (*(int (*))(void *)(sr_frame_140127500 + 32)) /* [rsp+20h] */
#define destination_buffer_2 (*(int (*)[3])(void *)(sr_frame_140127500 + 36)) /* [rsp+24h] */
#define scratch_buffer (*(char (*)[64])(void *)(sr_frame_140127500 + 48)) /* [rsp+30h] */
#define unused_frame_slot_112 (*(__int64 (*))(void *)(sr_frame_140127500 + 112)) /* [rsp+70h] */

  iteration_count = 1;
  crt_sprintf(scratch_buffer, "replay%03d.srp", 1);
  for ( i = crt_fopen(scratch_buffer, "rb"); i; i = crt_fopen(scratch_buffer, "rb") )
  {
    if ( iteration_count >= 1000 )
      break;
    crt_fclose(i);
    crt_sprintf(scratch_buffer, "replay%03d.srp", ++iteration_count);
  }
  file_handle = crt_fopen(scratch_buffer, "wb");
  file_handle_2 = file_handle;
  if ( file_handle )
  {
    destination_buffer = 1;
    crt_fread((__int64)&destination_buffer, 4, 1, file_handle);
    destination_buffer_2[0] = dword_1402B26C8;
    crt_fread((__int64)destination_buffer_2, 4, 1, file_handle_2);
    crt_fread((__int64)&replay_length, 4, 1, file_handle_2);
    crt_fread(*(__int64 *)&g_144CBFAB8, 1, (int)replay_length, file_handle_2);
    crt_fclose(file_handle_2);
  }
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef destination_buffer
#undef destination_buffer_2
#undef scratch_buffer
#undef unused_frame_slot_112

//----- (0000000140127900) ----------------------------------------------------
__int64            sub_140127900(__int64 a1, __int64 a2)
{
  return a2;
}

//----- (000000014012AF00) ----------------------------------------------------
void sub_14012AF00()
{
  unsigned int *state_address;
  __int64 running_total;
  unsigned __int64 running_total_2;
  unsigned int *buffer_cursor;
  __int64 remaining_count;
  __int64 i;
  __int64 table_value;

  state_address = &g_154164248;
  running_total = 0;
  running_total_2 = 0;
  do
  {
    if ( *(state_address - 3074) )
    {
      buffer_cursor = state_address;
      remaining_count = 512;
      do
      {
        if ( (*buffer_cursor & 0xE0000000) == 0x80000000 )
          *buffer_cursor &= 0xFF00FFFF;
        buffer_cursor[2560] = 0;
        ++buffer_cursor;
        --remaining_count;
      }
      while ( remaining_count );
      for ( i = 0; i < 4; ++i )
      {
        if ( running_total_2 <= 0x6C413B8 )
        {
          table_value = (int)dword_140404A6C[running_total + 83200503 + i];
          dword_140404A6C[running_total + 83200503 + i] = -1;
          if ( (unsigned int)table_value <= 0x3FF )
          {
            dword_140404A6C[8969 * table_value + 73991662] = -1;
            sub_1401941F0(0, table_value);
            sub_1401941F0(3, table_value);
            sub_1401941F0(5, table_value);
          }
        }
      }
    }
    running_total_2 += 27720LL;
    state_address += 6930;
    running_total += 6930;
  }
  while ( (__int64)state_address < (__int64)&g_15ADAC248 );
}

//----- (000000014012BD30) ----------------------------------------------------
void            sub_14012BD30(__int64 a1, float *a2, double a3)
{
  __m128 call_result;
  float source_component_z;
  float float_lane_0;
  float source_component_y;
  float scaled_value;
  float weighted_sum;
  float reordered_vector;
  float product_difference;
  float weighted_sum_2;
  float combined_products;
  float combined_products_2;
  float saved_product_difference;
  float combined_products_3;
  float combined_products_4;
  float weighted_sum_3;
  float combined_products_5;
  float product_difference_2;
  float combined_products_6;
  float weighted_sum_4;
  float weighted_sum_5;
  float combined_products_7;
  float combined_products_8;
  float combined_products_9;
  float weighted_sum_6;

  call_result = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)LODWORD(a3)), (__int64)a2, a3);
  source_component_z = a2[2];
  float_lane_0 = SR_VEC_LANES(128, call_result, f32)[0];
  source_component_y = a2[1];
  scaled_value = *a2;
  weighted_sum = *(float *)(a1 + 8);
  reordered_vector = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result, call_result, 1), f32)[0];
  product_difference = (float)(weighted_sum * *a2) - (float)(*(float *)a1 * source_component_z);
  weighted_sum_2 = (float)((float)(*(float *)(a1 + 4) * source_component_y) + (float)(*(float *)a1 * *a2)) + (float)(weighted_sum * source_component_z);
  combined_products = (float)((float)(*(float *)a1 * source_component_y) - (float)(*(float *)(a1 + 4) * *a2)) * SR_VEC_LANES(128, call_result, f32)[0];
  combined_products_2 = (float)((float)((float)((float)((float)((float)(*(float *)a1 * source_component_y) - (float)(*(float *)(a1 + 4) * *a2)) * source_component_y)
                              - (float)(product_difference * source_component_z))
                      * reordered_vector)
              + (float)(*a2 * weighted_sum_2))
      + (float)((float)((float)(*(float *)(a1 + 4) * source_component_z) - (float)(weighted_sum * source_component_y)) * SR_VEC_LANES(128, call_result, f32)[0]);
  saved_product_difference = product_difference;
  combined_products_3 = (float)((float)((float)((float)(*(float *)(a1 + 4) * source_component_z) - (float)(*(float *)(a1 + 8) * source_component_y)) * source_component_z)
              - (float)((float)((float)(*(float *)a1 * source_component_y) - (float)(*(float *)(a1 + 4) * *a2)) * *a2))
      * reordered_vector;
  combined_products_4 = (float)(product_difference * *a2) - (float)((float)((float)(*(float *)(a1 + 4) * source_component_z) - (float)(*(float *)(a1 + 8) * source_component_y)) * source_component_y);
  *(float *)a1 = combined_products_2;
  *(float *)(a1 + 4) = (float)(combined_products_3 + (float)(source_component_y * weighted_sum_2)) + (float)(saved_product_difference * SR_VEC_LANES(128, call_result, f32)[0]);
  *(float *)(a1 + 8) = (float)((float)(combined_products_4 * reordered_vector) + (float)(source_component_z * weighted_sum_2)) + combined_products;
  weighted_sum_3 = *(float *)(a1 + 20);
  combined_products_5 = (float)(*(float *)(a1 + 16) * source_component_z) - (float)(weighted_sum_3 * source_component_y);
  SR_VEC_LANES(128, call_result, i32)[0] = *(_DWORD *)(a1 + 12);
  product_difference_2 = (float)(weighted_sum_3 * scaled_value) - (float)(SR_VEC_LANES(128, call_result, f32)[0] * source_component_z);
  combined_products_6 = (float)(SR_VEC_LANES(128, call_result, f32)[0] * source_component_y) - (float)(*(float *)(a1 + 16) * scaled_value);
  weighted_sum_4 = (float)((float)(SR_VEC_LANES(128, call_result, f32)[0] * scaled_value) + (float)(*(float *)(a1 + 16) * source_component_y)) + (float)(weighted_sum_3 * source_component_z);
  *(float *)(a1 + 12) = scaled_value * weighted_sum_4;
  *(float *)(a1 + 16) = source_component_y * weighted_sum_4;
  *(float *)(a1 + 20) = source_component_z * weighted_sum_4;
  *(float *)(a1 + 12) = (float)((float)((float)(combined_products_6 * source_component_y) - (float)(product_difference_2 * source_component_z)) * reordered_vector) + *(float *)(a1 + 12);
  *(float *)(a1 + 16) = (float)((float)((float)(combined_products_5 * source_component_z) - (float)(combined_products_6 * scaled_value)) * reordered_vector) + *(float *)(a1 + 16);
  *(float *)(a1 + 20) = (float)((float)((float)(product_difference_2 * scaled_value) - (float)(combined_products_5 * source_component_y)) * reordered_vector) + *(float *)(a1 + 20);
  *(float *)(a1 + 12) = (float)(combined_products_5 * float_lane_0) + *(float *)(a1 + 12);
  *(float *)(a1 + 16) = (float)(product_difference_2 * float_lane_0) + *(float *)(a1 + 16);
  *(float *)(a1 + 20) = (float)(combined_products_6 * float_lane_0) + *(float *)(a1 + 20);
  weighted_sum_5 = *(float *)(a1 + 24);
  combined_products_7 = (float)(*(float *)(a1 + 28) * source_component_z) - (float)(*(float *)(a1 + 32) * source_component_y);
  combined_products_8 = (float)(*(float *)(a1 + 32) * scaled_value) - (float)(weighted_sum_5 * source_component_z);
  combined_products_9 = (float)(weighted_sum_5 * source_component_y) - (float)(*(float *)(a1 + 28) * scaled_value);
  weighted_sum_6 = (float)((float)(weighted_sum_5 * scaled_value) + (float)(*(float *)(a1 + 28) * source_component_y)) + (float)(*(float *)(a1 + 32) * source_component_z);
  *(float *)(a1 + 24) = scaled_value * weighted_sum_6;
  *(float *)(a1 + 28) = source_component_y * weighted_sum_6;
  *(float *)(a1 + 32) = source_component_z * weighted_sum_6;
  *(float *)(a1 + 24) = (float)((float)((float)(combined_products_9 * source_component_y) - (float)(combined_products_8 * source_component_z)) * reordered_vector) + *(float *)(a1 + 24);
  *(float *)(a1 + 28) = (float)((float)((float)(combined_products_7 * source_component_z) - (float)(combined_products_9 * scaled_value)) * reordered_vector) + *(float *)(a1 + 28);
  *(float *)(a1 + 32) = (float)((float)((float)(combined_products_8 * scaled_value) - (float)(combined_products_7 * source_component_y)) * reordered_vector) + *(float *)(a1 + 32);
  *(float *)(a1 + 24) = (float)(combined_products_7 * float_lane_0) + *(float *)(a1 + 24);
  *(float *)(a1 + 28) = (float)(combined_products_8 * float_lane_0) + *(float *)(a1 + 28);
  *(float *)(a1 + 32) = (float)(combined_products_9 * float_lane_0) + *(float *)(a1 + 32);
}

//----- (000000014012C100) ----------------------------------------------------
void            sub_14012C100(float *a1, float *a2)
{
  double state_address;
  __m128 square_root;
  float float_lane_0;
  float reordered_vector;
  float scaled_ratio;
  float scaled_value;
  float square_root_2;
  float scaled_ratio_2;
  float scaled_ratio_3;
  float scaled_value_2;
  float scaled_value_3;
  float scaled_value_4;

  *(_QWORD *)&state_address = *(unsigned int *)a2;
  *(float *)&state_address = (float)((float)(*(float *)&state_address * *(float *)&state_address) + (float)(a2[1] * a2[1])) + (float)(a2[2] * a2[2]);
  square_root = sub_1401F8AC0(
         COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(fsqrt(*(float *)&state_address) * 0.5f)),
         (__int64)a2,
         state_address);
  float_lane_0 = SR_VEC_LANES(128, square_root, f32)[0];
  reordered_vector = SR_VEC_READ_LANES(128, _mm_shuffle_ps(square_root, square_root, 1), f32)[0];
  scaled_ratio = 0.0;
  a1[3] = reordered_vector;
  scaled_value = *a2;
  square_root_2 = fsqrt((float)((float)(scaled_value * scaled_value) + (float)(a2[1] * a2[1])) + (float)(a2[2] * a2[2]));
  if ( square_root_2 == 0.0 )
  {
    scaled_ratio_2 = 0.0;
    scaled_ratio_3 = 0.0;
  }
  else
  {
    scaled_ratio_2 = scaled_value * (float)(1.0 / square_root_2);
    *a1 = scaled_ratio_2;
    scaled_ratio_3 = (float)(1.0 / square_root_2) * a2[1];
    a1[1] = scaled_ratio_3;
    scaled_ratio = (float)(1.0 / square_root_2) * a2[2];
  }
  a1[2] = scaled_ratio;
  scaled_value_2 = scaled_ratio_2 * float_lane_0;
  scaled_value_3 = scaled_ratio_3 * float_lane_0;
  scaled_value_4 = float_lane_0 * a1[2];
  *a1 = scaled_value_2;
  a1[1] = scaled_value_3;
  a1[2] = scaled_value_4;
}

//----- (000000014012C450) ----------------------------------------------------
__int64 sub_14012C450()
{
  crt_chdir(&g_182A7D340);
  return crt_chdir(&g_182A7D140);
}

//----- (000000014012C6D0) ----------------------------------------------------
__int64            sub_14012C6D0(int a1, char *a2)
{
  __int64 input_value;
  int chdir_result;
  int chdir_result_2;
  __int64 integer_difference;
  char input_byte;
  __int64 file_handle;
  __int64 file_handle_2;
  __int64 scaled_index;
  unsigned int *destination_buffer;
  signed int i;
  __int64 scaled_index_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012C6D0[576];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14012C6D0 + 0)) /* [rsp+0h] */
#define destination_buffer_2 (*(int (*)[4])(void *)(sr_frame_14012C6D0 + 32)) /* [rsp+20h] */
#define scratch_buffer (*(char (*)[512])(void *)(sr_frame_14012C6D0 + 48)) /* [rsp+30h] */
#define unused_frame_slot_560 (*(__int64 (*))(void *)(sr_frame_14012C6D0 + 560)) /* [rsp+230h] */

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
  file_handle = crt_fopen(scratch_buffer, "wb");
  file_handle_2 = file_handle;
  if ( file_handle )
  {
    destination_buffer_2[0] = 1;
    crt_fread((__int64)destination_buffer_2, 4, 1, file_handle);
    scaled_index = 4100 * input_value;
    destination_buffer = &dword_140404A6C[1025 * input_value + 486132853];
    crt_fread((__int64)destination_buffer, 4, 1, file_handle_2);
    for ( i = 0; i < (int)*destination_buffer; ++i )
    {
      scaled_index_2 = scaled_index + 16LL * i;
      crt_fread((__int64)&g_1B4277C44 + scaled_index_2, 4, 3, file_handle_2);
      crt_fread((__int64)&g_1B4277C50 + scaled_index_2, 4, 1, file_handle_2);
    }
    crt_fclose(file_handle_2);
  }
  if ( !chdir_result_2 )
    crt_chdir("..");
  if ( !chdir_result )
    crt_chdir("..");
  return 1; /* 0x14012C86B: mov eax, 1 */
}
#undef unused_frame_slot_0
#undef destination_buffer_2
#undef scratch_buffer
#undef unused_frame_slot_560

//----- (000000014012CAC0) ----------------------------------------------------
__int64            sub_14012CAC0(int a1, char *a2, int a3)
{
  __int64 input_value;
  int saved_chdir_result;
  int chdir_result;
  __int64 integer_difference;
  char input_byte;
  __int64 file_handle;
  __int64 file_handle_2;
  __int64 file_handle_3;
  __int64 scaled_index;
  signed int iteration_count;
  signed int iteration_count_2;
  int running_total;
  int running_total_2;
  int running_total_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012CAC0[576];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14012CAC0 + 0)) /* [rsp+0h] */
#define destination_buffer (*(int (*))(void *)(sr_frame_14012CAC0 + 32)) /* [rsp+20h] */
#define chdir_result_2 (*(int (*))(void *)(sr_frame_14012CAC0 + 36)) /* [rsp+24h] */
#define FileName (*(char (*)[512])(void *)(sr_frame_14012CAC0 + 48)) /* [rsp+30h] */
#define unused_frame_slot_560 (*(__int64 (*))(void *)(sr_frame_14012CAC0 + 560)) /* [rsp+230h] */

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
  if ( a3 || (file_handle = crt_fopen(FileName, "rb")) == 0 )
  {
    file_handle_2 = crt_fopen(FileName, "wb");
    file_handle_3 = file_handle_2;
    if ( file_handle_2 )
    {
      destination_buffer = 2;
      crt_fread((__int64)&destination_buffer, 4, 1, file_handle_2);
      scaled_index = 50 * input_value;
      crt_fread((__int64)&dword_140404A6C[50 * input_value + 272248205], 1, 64, file_handle_3);
      crt_fread((__int64)&dword_140404A6C[50 * input_value + 272248222], 4, 1, file_handle_3);
      iteration_count = 0;
      iteration_count_2 = 0;
      if ( (int)dword_140404A6C[50 * input_value + 272248222] > 0 )
      {
        running_total = 0;
        running_total_2 = 0;
        do
        {
          crt_fread(*(_QWORD *)&dword_140404A6C[scaled_index + 272248223] + 4LL * running_total_2, 4, 3, file_handle_3);
          crt_fread(*(_QWORD *)&dword_140404A6C[scaled_index + 272248225] + 4LL * running_total, 4, 2, file_handle_3);
          ++iteration_count_2;
          running_total_2 += 3;
          running_total += 2;
        }
        while ( iteration_count_2 < (int)dword_140404A6C[scaled_index + 272248222] );
        saved_chdir_result = chdir_result_2;
      }
      crt_fread((__int64)&dword_140404A6C[scaled_index + 272248227], 4, 1, file_handle_3);
      if ( (int)dword_140404A6C[scaled_index + 272248227] > 0 )
      {
        running_total_3 = 0;
        do
        {
          crt_fread(*(_QWORD *)&dword_140404A6C[scaled_index + 272248229] + 4LL * running_total_3, 4, 3, file_handle_3);
          ++iteration_count;
          running_total_3 += 3;
        }
        while ( iteration_count < (int)dword_140404A6C[scaled_index + 272248227] );
      }
      crt_fclose(file_handle_3);
    }
    if ( !chdir_result )
      crt_chdir("..");
    if ( !saved_chdir_result )
      crt_chdir("..");
  }
  else
  {
    crt_fclose(file_handle);
    if ( !chdir_result )
      crt_chdir("..");
    if ( !saved_chdir_result )
      crt_chdir("..");
  }
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef destination_buffer
#undef chdir_result_2
#undef FileName
#undef unused_frame_slot_560

//----- (000000014012CD60) ----------------------------------------------------
void            sub_14012CD60(int a1, int a2, int a3)
{
  __int64 human_record_offset;
  float *state_address;
  float *state_address_2;
  signed int createitem_result;
  signed int createitem_result_2;
  int iteration_count;
  signed int createitem_result_3;
  signed int createitem_result_4;
  signed int createitem_result_5;

  if ( a1 != -1 )
  {
    human_record_offset = 7166LL * a1;
    state_address = (float *)&dword_140404A6C[human_record_offset + 280651440];
    state_address_2 = (float *)&dword_140404A6C[human_record_offset + 280651452];
    if ( a2 == 14 )
    {
      createitem_result_4 = sr_CreateItem(14, state_address, nullptr, state_address_2);
      sr_item_transfer(createitem_result_4, -1, a1, 6);
      createitem_result_5 = sr_CreateItem(14, state_address, nullptr, state_address_2);
      sr_item_transfer(createitem_result_5, -1, a1, 6);
    }
    else
    {
      createitem_result = sr_CreateItem(a2, state_address, nullptr, state_address_2);
      sr_item_transfer(createitem_result, -1, a1, 0);
      createitem_result_2 = sr_CreateItem(a2 + 1, state_address, nullptr, state_address_2);
      iteration_count = 1;
      sr_item_transfer(createitem_result_2, -1, a1, 1);
      if ( a3 > 1 )
      {
        do
        {
          createitem_result_3 = sr_CreateItem(a2 + 1, state_address, nullptr, state_address_2);
          sr_item_transfer(createitem_result_3, -1, a1, ((iteration_count++ - 1) >> 1) + 3);
        }
        while ( iteration_count < a3 );
      }
    }
  }
}

//----- (000000014012E960) ----------------------------------------------------
__int64            sub_14012E960(int a1)
{
  __int64 result;
  __int64 remaining_count;
  int rand_result;
  signed int rand_result_2;
  int rand_result_3;
  __int64 scaled_index;
  unsigned int rand_result_4;
  int selection_code;
  float rand_result_5;
  int rand_result_6;
  _UNKNOWN *retaddr;

  result = (__int64)&retaddr;
  if ( g_175FF3464 && a1 > 0 )
  {
    remaining_count = (unsigned int)a1;
    do
    {
      rand_result = rand() & 1;
      rand_result_2 = rand() % (signed int)g_175FF3464;
      if ( g_183F7CB60 )
      {
        while ( rand_result_2 == 67 || rand_result_2 == 23 )
          rand_result_2 = rand() % (signed int)g_175FF3464;
      }
      rand_result_3 = rand() & 1;
      if ( game_type == 5 )
      {
        scaled_index = 396LL * rand_result_2;
        if ( dword_140404A6C[34 * dword_140404A6C[scaled_index + 225426056] + 225391231] == dword_140404A6C[34
                                                                                                * dword_140404A6C[scaled_index + 225426057]
                                                                                                + 225391231]
          && dword_140404A6C[scaled_index + 225426059] == 3 )
        {
          rand_result_3 = rand() % 3;
        }
      }
      rand_result_4 = rand() & 0xF;
      if ( rand_result_4 >= 3 )
      {
        if ( rand_result_4 >= 9 )
        {
          if ( rand_result_4 >= 0xD )
          {
            selection_code = 15;
            if ( rand_result_4 < 0xE )
              selection_code = 7;
          }
          else
          {
            selection_code = 9;
          }
        }
        else
        {
          selection_code = 0;
        }
      }
      else
      {
        selection_code = 7;
      }
      rand_result_5 = (float)(unsigned __int8)rand() * 0.00390625;
      rand_result_6 = rand();
      result = sub_14012CEB0(selection_code, rand_result_6 % 6, rand_result_2, rand_result, rand_result_3, rand_result_5);
      if ( rand_result_3 == 2 )
      {
        result = (int)result;
        dword_140404A6C[383 * (int)result + 132400668] = 0;
      }
      --remaining_count;
    }
    while ( remaining_count );
  }
  return result;
}

//----- (000000014012EB50) ----------------------------------------------------
__int64            sub_14012EB50(int a1)
{
  unsigned int state_word;
  unsigned int state_word_2;
  __int64 record_word_offset;
  signed int table_value;
  int state_word_3;
  int table_value_2;
  signed int table_value_3;
  signed int table_value_4;
  signed int table_value_5;
  signed int table_value_6;
  signed int table_value_7;
  int state_word_4;
  signed int table_value_8;
  int state_word_5;
  signed int table_value_9;
  int state_word_6;
  signed int table_value_10;
  int state_word_7;
  signed int table_value_11;
  int state_word_8;
  signed int table_value_12;
  bool comparison_result;
  signed int cached_table_value;
  int state_word_9;
  unsigned int element_index;
  __int64 integer_sum;
  __int64 integer_sum_2;
  bool comparison_result_2;
  __int64 remaining_count;
  __int64 integer_sum_3;
  __int64 integer_sum_4;
  __int64 integer_sum_5;
  __int64 integer_sum_6;
  int iteration_count;
  int rand_result;
  BOOL comparison_result_3;
  __int64 table_value_13;
  __int64 remaining_count_2;
  __int64 rand_result_2;
  int loaded_word;
  __int64 rand_result_3;
  __int64 scaled_index;
  __int64 lookup_index;
  int *buffer_cursor;
  int loaded_word_2;
  int rand_result_4;
  char *destination_text;
  char *destination_text_2;
  int rand_result_5;
  char *destination_text_3;
  char *destination_text_4;
  int rand_result_6;
  char *destination_text_5;
  int rand_result_7;
  char *text_cursor;
  __int64 element_index_2;
  char loaded_word_3;
  char *text_cursor_2;
  __int64 element_index_3;
  char table_value_14;
  int cached_input_value;
  unsigned int *state_address;
  signed int element_index_4;
  signed int saved_iteration_count;
  __int64 scaled_index_2;
  char *text_cursor_3;
  char input_byte;
  signed int integer_sum_7;
  __int64 call_result;
  unsigned int integer_quotient;
  __int64 scaled_index_3;
  char *destination_text_6;
  __int64 scaled_index_4;
  unsigned int table_value_15;
  unsigned int table_value_16;
  char *destination_text_7;
  char *text_cursor_4;
  __int64 element_index_5;
  char table_value_17;
  __int64 scaled_index_5;
  unsigned int table_value_18;
  unsigned int table_value_19;
  char *text_cursor_5;
  char *text_cursor_6;
  __int64 element_index_6;
  char table_value_20;
       char *literal_text;
  char *destination_text_8;
  __int64 rand_result_8;
  float weighted_sum;
  int createitem_result;
  __int64 saved_createitem_result;
  signed int iteration_count_2;
  unsigned int *state_address_2;
  __int64 scaled_index_6;
  __int64 scaled_index_7;
  __int64 table_value_21;
  char *text_cursor_7;
  unsigned int *state_address_3;
  char input_byte_2;
  char *text_cursor_8;
  __int64 element_index_7;
  char table_value_22;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012EB50[2720];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14012EB50 + 0)) /* [rsp+0h] */
#define input_value (*(int (*))(void *)(sr_frame_14012EB50 + 48)) /* [rsp+30h] */
#define cached_table_value_2 (*(signed int (*))(void *)(sr_frame_14012EB50 + 52)) /* [rsp+34h] */
#define cached_table_value_3 (*(signed int (*))(void *)(sr_frame_14012EB50 + 56)) /* [rsp+38h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_14012EB50 + 64)) /* [rsp+40h] */
#define scratch_buffer (*(_OWORD (*)[2])(void *)(sr_frame_14012EB50 + 80)) /* [rsp+50h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_14012EB50 + 112)) /* [rsp+70h] */
#define source_text (*(_DWORD (*)[255])(void *)(sr_frame_14012EB50 + 144)) /* [rsp+90h] */
#define callee_output_word (*(char (*))(void *)(sr_frame_14012EB50 + 1167)) /* [rsp+48Fh] */
#define source_text_2 (*(char (*)[511])(void *)(sr_frame_14012EB50 + 1168)) /* [rsp+490h] */
#define callee_output_word_2 (*(char (*))(void *)(sr_frame_14012EB50 + 1679)) /* [rsp+68Fh] */
#define lookup_index_2 (*(char (*)[512])(void *)(sr_frame_14012EB50 + 1680)) /* [rsp+690h] */
#define scratch_buffer_2 (*(char (*)[512])(void *)(sr_frame_14012EB50 + 2192)) /* [rsp+890h] */
#define unused_frame_slot_2704 (*(__int64 (*))(void *)(sr_frame_14012EB50 + 2704)) /* [rsp+A90h] */

  state_word = g_16B2EEA10;
  state_word_2 = g_16B310784;
  record_word_offset = 539LL * a1;
  table_value = 256;
  input_value = a1;
  state_word_3 = g_16B2AAF28;
  table_value_2 = dword_140404A6C[record_word_offset + 180001075];
  table_value_3 = dword_140404A6C[record_word_offset + 180035728];
  table_value_4 = dword_140404A6C[record_word_offset + 180070381];
  if ( table_value_2 < 256 )
    table_value = dword_140404A6C[record_word_offset + 180001075];
  table_value_5 = dword_140404A6C[record_word_offset + 180105034];
  table_value_6 = dword_140404A6C[record_word_offset + 180139687];
  if ( (int)g_16B2AAF28 >= 256 )
    state_word_3 = 256;
  table_value_7 = dword_140404A6C[record_word_offset + 180035728];
  if ( table_value <= table_value_3 )
    table_value_7 = table_value;
  state_word_4 = g_16B2CCC9C;
  if ( state_word_3 <= (int)g_16B2CCC9C )
    state_word_4 = state_word_3;
  table_value_8 = dword_140404A6C[record_word_offset + 180070381];
  if ( table_value_7 <= table_value_4 )
    table_value_8 = table_value_7;
  state_word_5 = g_16B2EEA10;
  if ( state_word_4 <= (int)g_16B2EEA10 )
    state_word_5 = state_word_4;
  table_value_9 = dword_140404A6C[record_word_offset + 180105034];
  if ( table_value_8 <= table_value_5 )
    table_value_9 = table_value_8;
  state_word_6 = g_16B310784;
  if ( state_word_5 <= (int)g_16B310784 )
    state_word_6 = state_word_5;
  table_value_10 = dword_140404A6C[record_word_offset + 180139687];
  if ( table_value_9 <= table_value_6 )
    table_value_10 = table_value_9;
  state_word_7 = g_16B3324F8;
  if ( state_word_6 <= (int)g_16B3324F8 )
    state_word_7 = state_word_6;
  table_value_11 = dword_140404A6C[record_word_offset + 180174340];
  cached_table_value_2 = table_value_11;
  if ( table_value_10 <= table_value_11 )
    table_value_11 = table_value_10;
  state_word_8 = g_16B35426C;
  if ( state_word_7 <= (int)g_16B35426C )
    state_word_8 = state_word_7;
  table_value_12 = dword_140404A6C[record_word_offset + 180208993];
  comparison_result = table_value_11 <= table_value_12;
  cached_table_value = table_value_12;
  cached_table_value_3 = table_value_12;
  state_word_9 = g_16B375FE0;
  if ( comparison_result )
    cached_table_value = table_value_11;
  if ( state_word_8 <= (int)g_16B375FE0 )
    state_word_9 = state_word_8;
  if ( state_word_9 <= 0 )
  {
    element_index = 0;
    if ( table_value_2 == cached_table_value && g_16B2AAF28 == state_word_9 )
    {
      source_text[0] = 0;
      element_index = 1;
    }
    if ( table_value_3 == cached_table_value && g_16B2CCC9C == state_word_9 )
    {
      integer_sum = element_index++;
      source_text[integer_sum] = 1;
    }
    if ( table_value_4 == cached_table_value && state_word == state_word_9 )
    {
      integer_sum_2 = element_index++;
      source_text[integer_sum_2] = 2;
    }
    if ( table_value_5 == cached_table_value )
    {
      comparison_result_2 = state_word_2 == state_word_9;
      remaining_count = 3;
      if ( comparison_result_2 )
      {
        integer_sum_3 = element_index++;
        source_text[integer_sum_3] = 3;
      }
    }
    else
    {
      remaining_count = 3;
    }
    if ( table_value_6 == cached_table_value && g_16B3324F8 == state_word_9 )
    {
      integer_sum_4 = element_index++;
      source_text[integer_sum_4] = 4;
    }
    if ( cached_table_value_2 == cached_table_value && g_16B35426C == state_word_9 )
    {
      integer_sum_5 = element_index++;
      source_text[integer_sum_5] = 5;
    }
    if ( cached_table_value_3 == cached_table_value && g_16B375FE0 == state_word_9 )
    {
      integer_sum_6 = element_index++;
      source_text[integer_sum_6] = 6;
    }
    if ( element_index )
    {
      iteration_count = 0;
      do
      {
        rand_result = rand();
        comparison_result_3 = 1;
        table_value_13 = (int)source_text[rand_result % (int)element_index];
        if ( (int)g_183EBFDB4 > 0 )
          comparison_result_3 = (int)dword_140404A6C[34653 * table_value_13 + 180001074] <= 0;
        if ( (int)g_183EC5978 > 0 && (int)dword_140404A6C[34653 * table_value_13 + 180001613] > 0 )
          comparison_result_3 = 0;
        if ( (int)g_183ECB53C > 0 && (int)dword_140404A6C[34653 * table_value_13 + 180002152] > 0 )
          comparison_result_3 = 0;
        if ( (int)g_183ED1100 > 0 && (int)dword_140404A6C[34653 * table_value_13 + 180002691] > 0 )
          comparison_result_3 = 0;
        if ( (int)g_183ED6CC4 > 0 && (int)dword_140404A6C[34653 * table_value_13 + 180003230] > 0 )
          comparison_result_3 = 0;
        if ( (int)g_183EDC888 > 0 && (int)dword_140404A6C[34653 * table_value_13 + 180003769] > 0 )
          comparison_result_3 = 0;
        ++iteration_count;
      }
      while ( iteration_count < 100 && comparison_result_3 );
      LODWORD(scratch_buffer[0]) = 0;
      remaining_count_2 = 64;
      *(_QWORD *)((char *)scratch_buffer + 4) = 0x200000001LL;
      do
      {
        rand_result_2 = rand() % 3;
        loaded_word = *((_DWORD *)scratch_buffer + rand_result_2);
        rand_result_3 = rand() % 3;
        *((_DWORD *)scratch_buffer + rand_result_2) = *((_DWORD *)scratch_buffer + rand_result_3);
        *((_DWORD *)scratch_buffer + rand_result_3) = loaded_word;
        --remaining_count_2;
      }
      while ( remaining_count_2 );
      scaled_index = 34653 * table_value_13;
      lookup_index = input_value;
      lookup_index_2[0] = 0;
      buffer_cursor = (int *)scratch_buffer;
      ++dword_140404A6C[34653 * table_value_13 + 180001075 + 539 * input_value];
      dword_140404A6C[5 * lookup_index + 188872240] = 11;
      do
      {
        loaded_word_2 = *buffer_cursor;
        if ( *buffer_cursor )
        {
          if ( loaded_word_2 == 1 )
          {
            source_text_2[0] = 0;
            rand_result_5 = rand() % 3;
            if ( rand_result_5 )
            {
              if ( rand_result_5 == 1 )
              {
                crt_sprintf(source_text, "there are new developments in the %s project. ", &dword_140404A6C[scaled_index + 180035705]);
              }
              else if ( rand_result_5 == 2 )
              {
                crt_sprintf(
                  source_text,
                  "the %s project will revolutionize the industry. ",
                  &dword_140404A6C[scaled_index + 180035705]);
              }
            }
            else
            {
              crt_sprintf(source_text, "project %s has made progress in many areas. ", &dword_140404A6C[scaled_index + 180035705]);
            }
            destination_text_3 = &callee_output_word;
            do
              comparison_result_2 = *++destination_text_3 == 0;
            while ( !comparison_result_2 );
            strcpy(destination_text_3, (     char *)source_text);
            destination_text_4 = &callee_output_word_2;
            do
              comparison_result_2 = *++destination_text_4 == 0;
            while ( !comparison_result_2 );
            strcpy(destination_text_4, source_text_2);
          }
          else if ( loaded_word_2 == 2 )
          {
            source_text_2[0] = 0;
            if ( (_DWORD)table_value_13 == g_16B2AAF18 )
            {
              rand_result_7 = rand() % 2;
              crt_sprintf(source_text, "this project is extremely high value. ");
              if ( rand_result_7 == 1 )
                crt_sprintf(source_text, "this is a high priority project. ");
              text_cursor = &callee_output_word;
              do
                comparison_result_2 = *++text_cursor == 0;
              while ( !comparison_result_2 );
              element_index_2 = 0;
              do
              {
                loaded_word_3 = *((_BYTE *)source_text + element_index_2);
                text_cursor[element_index_2++] = loaded_word_3;
              }
              while ( loaded_word_3 );
            }
            else
            {
              rand_result_6 = rand() % 4;
              crt_sprintf(source_text, "we are now adding coversheets to tps reports. ");
              switch ( rand_result_6 )
              {
                case 1:
                  crt_sprintf(source_text, "the company picnic is next saturday. ");
                  break;
                case 2:
                  crt_sprintf(source_text, "next friday is hawaiian shirt day. ");
                  break;
                case 3:
                  crt_sprintf(source_text, "we need to create more synergy. ");
                  break;
              }
              destination_text_5 = &callee_output_word;
              do
                comparison_result_2 = *++destination_text_5 == 0;
              while ( !comparison_result_2 );
              strcpy(destination_text_5, (     char *)source_text);
            }
            text_cursor_2 = &callee_output_word_2;
            do
              comparison_result_2 = *++text_cursor_2 == 0;
            while ( !comparison_result_2 );
            element_index_3 = 0;
            do
            {
              table_value_14 = source_text_2[element_index_3];
              text_cursor_2[element_index_3++] = table_value_14;
            }
            while ( table_value_14 );
          }
        }
        else
        {
          source_text_2[0] = 0;
          rand_result_4 = rand() % 3;
          if ( rand_result_4 )
          {
            if ( rand_result_4 == 1 )
            {
              crt_sprintf(
                source_text,
                "the lab at %s and %s has made great strides. ",
                &dword_140404A6C[scaled_index + 180035673],
                &dword_140404A6C[scaled_index + 180035689]);
            }
            else if ( rand_result_4 == 2 )
            {
              crt_sprintf(
                source_text,
                "we are increasing development at the %s and %s laboratory. ",
                &dword_140404A6C[scaled_index + 180035673],
                &dword_140404A6C[scaled_index + 180035689]);
            }
          }
          else
          {
            crt_sprintf(
              source_text,
              "the laboratory at %s and %s has the data. ",
              &dword_140404A6C[scaled_index + 180035673],
              &dword_140404A6C[scaled_index + 180035689]);
          }
          destination_text = &callee_output_word;
          do
            comparison_result_2 = *++destination_text == 0;
          while ( !comparison_result_2 );
          strcpy(destination_text, (     char *)source_text);
          destination_text_2 = &callee_output_word_2;
          do
            comparison_result_2 = *++destination_text_2 == 0;
          while ( !comparison_result_2 );
          strcpy(destination_text_2, source_text_2);
        }
        ++buffer_cursor;
        --remaining_count;
      }
      while ( remaining_count );
      cached_input_value = input_value;
      state_address = &g_1816DEB80;
      element_index_4 = 0;
      while ( 1 )
      {
        saved_iteration_count = -1;
        if ( !*state_address )
          break;
        ++element_index_4;
        state_address += 290;
        if ( (__int64)state_address >= (__int64)&g_181FEEB80 )
        {
          element_index_4 = -1;
          goto LABEL_128;
        }
      }
      if ( element_index_4 != -1 )
      {
        scaled_index_2 = 290LL * element_index_4;
        dword_140404A6C[scaled_index_2 + 273377349] = 1;
        dword_140404A6C[scaled_index_2 + 273377606] = 0;
      }
LABEL_128:
      text_cursor_3 = lookup_index_2;
      do
      {
        input_byte = *text_cursor_3;
        text_cursor_3[(_QWORD)&g_1816DEB80 + 1160LL * element_index_4 - (_QWORD)lookup_index_2 + 4] = *text_cursor_3;
        ++text_cursor_3;
      }
      while ( input_byte );
      sub_140115FF0(element_index_4);
      lookup_index_2[0] = 0;
      crt_sprintf(scratch_buffer_2, "INTEL%02d.CDE", ++g_16B2AAF1C);
      if ( (rand() & 1) != 0 )
      {
        rand_result_8 = 14019LL * (int)dword_140404A6C[259 * (rand() % (signed int)g_1B46590BC) + 487149973];
        weighted_sum = *(float *)&dword_140404A6C[rand_result_8 + 225653937];
        LODWORD(float_buffer[0]) = dword_140404A6C[rand_result_8 + 225653936];
        LODWORD(float_buffer[2]) = dword_140404A6C[rand_result_8 + 225653938];
        float_buffer[1] = weighted_sum;
        unused_written_slot = 1065353216;
        scratch_buffer[0] = xmmword_140278D30;
        scratch_buffer[1] = xmmword_140278D30;
        createitem_result = sr_CreateItem(21, float_buffer, nullptr, (float *)scratch_buffer);
        saved_createitem_result = createitem_result;
        if ( createitem_result != -1 )
        {
          iteration_count_2 = 0;
          state_address_2 = &g_181FEEBC0;
          while ( *state_address_2 )
          {
            ++iteration_count_2;
            state_address_2 += 2570;
            if ( (__int64)state_address_2 >= (__int64)&g_1829F8BC0 )
              goto LABEL_173;
          }
          saved_iteration_count = iteration_count_2;
          if ( iteration_count_2 != -1 )
          {
            scaled_index_6 = 2570LL * iteration_count_2;
            crt_memset((void *)(uintptr_t)(&dword_140404A6C[scaled_index_6 + 275753046]), 0, 0x2824u);
            dword_140404A6C[scaled_index_6 + 275753045] = 1;
            dword_140404A6C[scaled_index_6 + 275753046] = 360;
          }
LABEL_173:
          scaled_index_7 = 2570LL * saved_iteration_count;
          table_value_21 = (int)dword_140404A6C[scaled_index_7 + 275754072];
          dword_140404A6C[1760 * saved_createitem_result + 278846098] = saved_iteration_count;
          if ( (int)table_value_21 < 256 )
          {
            dword_140404A6C[6 * table_value_21 + 275754073 + scaled_index_7] = element_index_4;
            text_cursor_7 = scratch_buffer_2;
            state_address_3 = &dword_140404A6C[6 * (int)dword_140404A6C[scaled_index_7 + 275754072] + 275754074 + scaled_index_7];
            do
            {
              input_byte_2 = *text_cursor_7++;
              *(_BYTE *)state_address_3 = input_byte_2;
              state_address_3 = (unsigned int *)((char *)state_address_3 + 1);
            }
            while ( input_byte_2 );
            dword_140404A6C[6 * (int)dword_140404A6C[scaled_index_7 + 275754072]++ + 275754078 + scaled_index_7] = 0;
          }
        }
        crt_sprintf(
          source_text_2,
          "We have intercepted communications\n"
          "The disk with the info in the lobby of the lab at\n"
          "%s and %s\n"
          "Filename: %s",
          (     char *)&dword_140404A6C[396 * dword_140404A6C[rand_result_8 + 225641321] + 225426047],
          (     char *)&dword_140404A6C[396 * dword_140404A6C[rand_result_8 + 225641322] + 225426047],
          scratch_buffer_2);
        text_cursor_8 = &callee_output_word_2;
        do
          comparison_result_2 = *++text_cursor_8 == 0;
        while ( !comparison_result_2 );
        element_index_7 = 0;
        do
        {
          table_value_22 = source_text_2[element_index_7];
          text_cursor_8[element_index_7++] = table_value_22;
        }
        while ( table_value_22 );
        goto LABEL_181;
      }
      integer_sum_7 = game_day_time + 216000;
      call_result = (int)sub_14012DC20(scratch_buffer_2, element_index_4, game_day_time + 216000);
      integer_quotient = integer_sum_7 / 3600 / 60 % -12;
      if ( !integer_quotient )
        integer_quotient = 12;
      if ( (_DWORD)call_result != -1 )
      {
        scaled_index_3 = 383 * call_result;
        if ( (int)dword_140404A6C[383 * call_result + 132400671] > 0 )
        {
          crt_sprintf(source_text_2, "There is in a town car driving around the city with\nvaluable information.\n");
          destination_text_6 = &callee_output_word_2;
          do
            comparison_result_2 = *++destination_text_6 == 0;
          while ( !comparison_result_2 );
          strcpy(destination_text_6, source_text_2);
          scaled_index_4 = 34LL * (int)dword_140404A6C[396 * dword_140404A6C[scaled_index_3 + 132400672] + 225426056];
          table_value_15 = dword_140404A6C[scaled_index_4 + 225391236];
          if ( table_value_15 == -1 )
            table_value_15 = dword_140404A6C[scaled_index_4 + 225391238];
          table_value_16 = dword_140404A6C[scaled_index_4 + 225391237];
          if ( table_value_16 == -1 )
            table_value_16 = dword_140404A6C[scaled_index_4 + 225391239];
          if ( table_value_15 != -1 && table_value_16 != -1 )
          {
            destination_text_7 = &callee_output_word_2;
            do
              comparison_result_2 = *++destination_text_7 == 0;
            while ( !comparison_result_2 );
            strcpy(destination_text_7, "The car will be driving from ");
            crt_sprintf(
              source_text_2,
              "%s and %s\n",
              (     char *)&dword_140404A6C[396 * table_value_15 + 225426047],
              (     char *)&dword_140404A6C[396 * table_value_16 + 225426047]);
            text_cursor_4 = &callee_output_word_2;
            do
              comparison_result_2 = *++text_cursor_4 == 0;
            while ( !comparison_result_2 );
            element_index_5 = 0;
            do
            {
              table_value_17 = source_text_2[element_index_5];
              text_cursor_4[element_index_5++] = table_value_17;
            }
            while ( table_value_17 );
          }
          scaled_index_5 = 34LL
              * (int)dword_140404A6C[396 * dword_140404A6C[5 * (int)dword_140404A6C[scaled_index_3 + 132400671] + 132400667 + scaled_index_3]
                                   + 225426056];
          table_value_18 = dword_140404A6C[scaled_index_5 + 225391236];
          if ( table_value_18 == -1 )
            table_value_18 = dword_140404A6C[scaled_index_5 + 225391238];
          table_value_19 = dword_140404A6C[scaled_index_5 + 225391237];
          if ( table_value_19 == -1 )
            table_value_19 = dword_140404A6C[scaled_index_5 + 225391239];
          if ( table_value_18 != -1 && table_value_19 != -1 )
          {
            text_cursor_5 = &callee_output_word_2;
            do
              comparison_result_2 = *++text_cursor_5 == 0;
            while ( !comparison_result_2 );
            *(_DWORD *)text_cursor_5 = 2125684;
            crt_sprintf(
              source_text_2,
              "%s and %s.\n",
              (     char *)&dword_140404A6C[396 * table_value_18 + 225426047],
              (     char *)&dword_140404A6C[396 * table_value_19 + 225426047]);
            text_cursor_6 = &callee_output_word_2;
            do
              comparison_result_2 = *++text_cursor_6 == 0;
            while ( !comparison_result_2 );
            element_index_6 = 0;
            do
            {
              table_value_20 = source_text_2[element_index_6];
              text_cursor_6[element_index_6++] = table_value_20;
            }
            while ( table_value_20 );
          }
          literal_text = "This mission expires at %d:%02d AM.\n";
          if ( integer_sum_7 >= 2592000 )
            literal_text = "This mission expires at %d:%02d PM.\n";
          crt_sprintf(source_text_2, literal_text, integer_quotient, (unsigned int)(integer_sum_7 / 3600 % 60));
          destination_text_8 = &callee_output_word_2;
          do
            comparison_result_2 = *++destination_text_8 == 0;
          while ( !comparison_result_2 );
          strcpy(destination_text_8, source_text_2);
LABEL_181:
          sub_140195D20(cached_input_value, lookup_index_2);
        }
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef input_value
#undef cached_table_value_2
#undef cached_table_value_3
#undef float_buffer
#undef scratch_buffer
#undef unused_written_slot
#undef source_text
#undef callee_output_word
#undef source_text_2
#undef callee_output_word_2
#undef lookup_index_2
#undef scratch_buffer_2
#undef unused_frame_slot_2704

//----- (000000014012F890) ----------------------------------------------------
__int64            sub_14012F890(_BYTE *a1,      char *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int rand_result;
  char *destination_text;
  bool comparison_result;
  char *destination_text_2;
  int rand_result_2;
  char *destination_text_3;
  int rand_result_3;
  _OWORD *cached_xmmword_1402773d8;
  char *destination_text_4;
  char *destination_text_5;
  char *destination_text_6;
       char *literal_text;
  char *destination_text_7;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012F890[560];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14012F890 + 0)) /* [rsp+0h] */
#define source_text (*(char (*)[512])(void *)(sr_frame_14012F890 + 32)) /* [rsp+20h] */
#define unused_frame_slot_544 (*(__int64 (*))(void *)(sr_frame_14012F890 + 544)) /* [rsp+220h] */

  *a1 = 0;
  rand_result = rand() % 3;
  if ( rand_result )
  {
    if ( rand_result == 1 )
    {
      destination_text_2 = a1 - 1;
      do
        comparison_result = *++destination_text_2 == 0;
      while ( !comparison_result );
      strcpy(destination_text_2, "Reports indicate that ");
    }
  }
  else
  {
    destination_text = a1 - 1;
    do
      comparison_result = *++destination_text == 0;
    while ( !comparison_result );
    strcpy(destination_text, "We have received reports that ");
  }
  rand_result_2 = rand() % 3;
  if ( rand_result_2 )
  {
    if ( rand_result_2 == 1 )
    {
      crt_sprintf(source_text, "the lab at %s and %s ", a3, a4);
    }
    else if ( rand_result_2 == 2 )
    {
      crt_sprintf(source_text, "%s and %s laboratory ", a3, a4);
    }
  }
  else
  {
    crt_sprintf(source_text, "the laboratory at %s and %s ", a3, a4);
  }
  destination_text_3 = a1 - 1;
  do
    comparison_result = *++destination_text_3 == 0;
  while ( !comparison_result );
  strcpy(destination_text_3, source_text);
  rand_result_3 = rand() % 3;
  if ( rand_result_3 )
  {
    if ( rand_result_3 == 1 )
    {
      destination_text_4 = a1 - 1;
      do
        comparison_result = *++destination_text_4 == 0;
      while ( !comparison_result );
      strcpy(destination_text_4, "has disks containing info");
    }
    else if ( rand_result_3 == 2 )
    {
      destination_text_5 = a1 - 1;
      do
        comparison_result = *++destination_text_5 == 0;
      while ( !comparison_result );
      strcpy(destination_text_5, "may have disks");
    }
  }
  else
  {
    cached_xmmword_1402773d8 = a1 - 1;
    do
    {
      comparison_result = *((_BYTE *)cached_xmmword_1402773d8 + 1) == 0;
      cached_xmmword_1402773d8 = (_OWORD *)((char *)cached_xmmword_1402773d8 + 1);
    }
    while ( !comparison_result );
    *cached_xmmword_1402773d8 = xmmword_1402773D8;
  }
  crt_sprintf(source_text, " the filename is %s ", a2);
  destination_text_6 = a1 - 1;
  do
    comparison_result = *++destination_text_6 == 0;
  while ( !comparison_result );
  strcpy(destination_text_6, source_text);
  literal_text = "project %s is high value";
  if ( !a6 )
    literal_text = "project %s is normal value";
  crt_sprintf(source_text, literal_text, a5);
  destination_text_7 = a1 - 1;
  do
    comparison_result = *++destination_text_7 == 0;
  while ( !comparison_result );
  strcpy(destination_text_7, source_text);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef source_text
#undef unused_frame_slot_544

//----- (000000014012FB60) ----------------------------------------------------
__int64            sub_14012FB60(_BYTE *a1, __int64 a2)
{
  int rand_result;
  char *destination_text;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012FB60[560];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14012FB60 + 0)) /* [rsp+0h] */
#define source_text (*(char (*)[512])(void *)(sr_frame_14012FB60 + 32)) /* [rsp+20h] */
#define unused_frame_slot_544 (*(__int64 (*))(void *)(sr_frame_14012FB60 + 544)) /* [rsp+220h] */

  *a1 = 0;
  rand_result = rand() % 3;
  if ( rand_result )
  {
    if ( rand_result == 1 )
    {
      crt_sprintf(source_text, "the file named %s contains the data. ", a2);
    }
    else if ( rand_result == 2 )
    {
      crt_sprintf(source_text, "the secret info is located in %s. ", a2);
    }
  }
  else
  {
    crt_sprintf(source_text, "the data is stored in the file %s. ", a2);
  }
  destination_text = a1 - 1;
  while ( *++destination_text != 0 )
    ;
  strcpy(destination_text, source_text);
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef source_text
#undef unused_frame_slot_544

//----- (000000014012FC30) ----------------------------------------------------
__int64            sub_14012FC30(_BYTE *a1)
{
  int rand_result;
  char *destination_text;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012FC30[560];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14012FC30 + 0)) /* [rsp+0h] */
#define source_text (*(char (*)[512])(void *)(sr_frame_14012FC30 + 32)) /* [rsp+20h] */
#define unused_frame_slot_544 (*(__int64 (*))(void *)(sr_frame_14012FC30 + 544)) /* [rsp+220h] */

  *a1 = 0;
  rand_result = rand() % 2;
  crt_sprintf(source_text, "this project is extremely high value. ");
  if ( rand_result == 1 )
    crt_sprintf(source_text, "this is a high priority project. ");
  destination_text = a1 - 1;
  while ( *++destination_text != 0 )
    ;
  strcpy(destination_text, source_text);
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef source_text
#undef unused_frame_slot_544

//----- (000000014012FCE0) ----------------------------------------------------
__int64            sub_14012FCE0(_BYTE *a1, __int64 a2, __int64 a3)
{
  int rand_result;
  char *destination_text;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012FCE0[560];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14012FCE0 + 0)) /* [rsp+0h] */
#define source_text (*(char (*)[512])(void *)(sr_frame_14012FCE0 + 32)) /* [rsp+20h] */
#define unused_frame_slot_544 (*(__int64 (*))(void *)(sr_frame_14012FCE0 + 544)) /* [rsp+220h] */

  *a1 = 0;
  rand_result = rand() % 3;
  if ( rand_result )
  {
    if ( rand_result == 1 )
    {
      crt_sprintf(source_text, "the lab at %s and %s has made great strides. ", a2, a3);
    }
    else if ( rand_result == 2 )
    {
      crt_sprintf(source_text, "we are increasing development at the %s and %s laboratory. ", a2, a3);
    }
  }
  else
  {
    crt_sprintf(source_text, "the laboratory at %s and %s has the data. ", a2, a3);
  }
  destination_text = a1 - 1;
  while ( *++destination_text != 0 )
    ;
  strcpy(destination_text, source_text);
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef source_text
#undef unused_frame_slot_544

//----- (000000014012FDA0) ----------------------------------------------------
__int64            sub_14012FDA0(_BYTE *a1, __int64 a2)
{
  int rand_result;
  char *destination_text;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012FDA0[560];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14012FDA0 + 0)) /* [rsp+0h] */
#define source_text (*(char (*)[512])(void *)(sr_frame_14012FDA0 + 32)) /* [rsp+20h] */
#define unused_frame_slot_544 (*(__int64 (*))(void *)(sr_frame_14012FDA0 + 544)) /* [rsp+220h] */

  *a1 = 0;
  rand_result = rand() % 3;
  if ( rand_result )
  {
    if ( rand_result == 1 )
    {
      crt_sprintf(source_text, "there are new developments in the %s project. ", a2);
    }
    else if ( rand_result == 2 )
    {
      crt_sprintf(source_text, "the %s project will revolutionize the industry. ", a2);
    }
  }
  else
  {
    crt_sprintf(source_text, "project %s has made progress in many areas. ", a2);
  }
  destination_text = a1 - 1;
  while ( *++destination_text != 0 )
    ;
  strcpy(destination_text, source_text);
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef source_text
#undef unused_frame_slot_544

//----- (000000014012FE70) ----------------------------------------------------
__int64            sub_14012FE70(_BYTE *a1)
{
  int rand_result;
  char *destination_text;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012FE70[560];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14012FE70 + 0)) /* [rsp+0h] */
#define source_text (*(char (*)[512])(void *)(sr_frame_14012FE70 + 32)) /* [rsp+20h] */
#define unused_frame_slot_544 (*(__int64 (*))(void *)(sr_frame_14012FE70 + 544)) /* [rsp+220h] */

  *a1 = 0;
  rand_result = rand() % 4;
  crt_sprintf(source_text, "we are now adding coversheets to tps reports. ");
  switch ( rand_result )
  {
    case 1:
      crt_sprintf(source_text, "the company picnic is next saturday. ");
      break;
    case 2:
      crt_sprintf(source_text, "next friday is hawaiian shirt day. ");
      break;
    case 3:
      crt_sprintf(source_text, "we need to create more synergy. ");
      break;
  }
  destination_text = a1 - 1;
  while ( *++destination_text != 0 )
    ;
  strcpy(destination_text, source_text);
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef source_text
#undef unused_frame_slot_544

//----- (0000000140130000) ----------------------------------------------------
__int64 sub_140130000()
{
  int iteration_count;
  int rand_result;
  __int64 scaled_index;

  if ( !g_175FF3464 )
    return 0;
  iteration_count = 0;
  rand_result = rand() % (signed int)g_175FF3464;
  do
  {
    scaled_index = 396LL * rand_result;
    if ( (int)dword_140404A6C[scaled_index + 225426059] <= 3 && (int)dword_140404A6C[scaled_index + 225426060] <= 3 )
      break;
    ++iteration_count;
    rand_result = rand() % (signed int)g_175FF3464;
  }
  while ( iteration_count < 1024 );
  return (unsigned int)rand_result;
}

//----- (00000001401300C0) ----------------------------------------------------
unsigned int *           sub_1401300C0(int a1)
{
  unsigned int *state_address;
  unsigned int *result;
  __int64 remaining_count;
  __int64 scaled_index;
  __int64 table_value;
  __int64 table_value_2;
  __int64 table_value_3;
  __int64 table_value_4;
  __int64 table_value_5;
  __int64 table_value_6;
  __int64 table_value_7;

  state_address = &g_183EC035C;
  do
  {
    result = state_address;
    remaining_count = 2;
    do
    {
      if ( *(result - 280) && !*(result - 279) && *(result - 278) == a1 )
      {
        scaled_index = (int)*(result - 276);
        if ( (unsigned int)scaled_index < 0x400 )
          dword_140404A6C[1760 * scaled_index + 278845900] = 0;
        *(result - 276) = -1;
      }
      if ( *(result - 1) && !*result && result[1] == a1 )
      {
        table_value = (int)result[3];
        if ( (unsigned int)table_value < 0x400 )
          dword_140404A6C[1760 * table_value + 278845900] = 0;
        result[3] = -1;
      }
      if ( result[278] && !result[279] && result[280] == a1 )
      {
        table_value_2 = (int)result[282];
        if ( (unsigned int)table_value_2 < 0x400 )
          dword_140404A6C[1760 * table_value_2 + 278845900] = 0;
        result[282] = -1;
      }
      if ( result[557] && !result[558] && result[559] == a1 )
      {
        table_value_3 = (int)result[561];
        if ( (unsigned int)table_value_3 < 0x400 )
          dword_140404A6C[1760 * table_value_3 + 278845900] = 0;
        result[561] = -1;
      }
      if ( result[836] && !result[837] && result[838] == a1 )
      {
        table_value_4 = (int)result[840];
        if ( (unsigned int)table_value_4 < 0x400 )
          dword_140404A6C[1760 * table_value_4 + 278845900] = 0;
        result[840] = -1;
      }
      if ( result[1115] && !result[1116] && result[1117] == a1 )
      {
        table_value_5 = (int)result[1119];
        if ( (unsigned int)table_value_5 < 0x400 )
          dword_140404A6C[1760 * table_value_5 + 278845900] = 0;
        result[1119] = -1;
      }
      if ( result[1394] && !result[1395] && result[1396] == a1 )
      {
        table_value_6 = (int)result[1398];
        if ( (unsigned int)table_value_6 < 0x400 )
          dword_140404A6C[1760 * table_value_6 + 278845900] = 0;
        result[1398] = -1;
      }
      if ( result[1673] && !result[1674] && result[1675] == a1 )
      {
        table_value_7 = (int)result[1677];
        if ( (unsigned int)table_value_7 < 0x400 )
          dword_140404A6C[1760 * table_value_7 + 278845900] = 0;
        result[1677] = -1;
      }
      result += 2232;
      --remaining_count;
    }
    while ( remaining_count );
    state_address += 5873;
  }
  while ( (__int64)state_address < (__int64)&g_183EE29F4 );
  return result;
}

//----- (00000001401305F0) ----------------------------------------------------
__m128            sub_1401305F0(float a1, float a2, int a3)
{
  int input_value;
  __int128 masked_bits;
  int masked_bits_2;
  int shifted_bits;
  int scaled_index;
  int shifted_bits_2;
  int record_word_offset;
  float combined_products;
  int shifted_bits_3;
  int scaled_index_2;
  int shifted_bits_4;
  float combined_products_2;

  input_value = (int)a2;
  masked_bits = 0x3F800000u;
  masked_bits_2 = a3 & ((int)a1 + 1);
  shifted_bits = ((57 * input_value + (int)a1) << 13) ^ (57 * input_value + (int)a1);
  scaled_index = 15731 * shifted_bits * shifted_bits;
  shifted_bits_2 = ((masked_bits_2 + 57 * input_value) << 13) ^ (masked_bits_2 + 57 * input_value);
  record_word_offset = 57 * (a3 & ((int)a2 + 1));
  combined_products = (float)(3.0 - (float)((float)(a1 - (float)(int)a1) + (float)(a1 - (float)(int)a1)))
      * (float)((float)(a1 - (float)(int)a1) * (float)(a1 - (float)(int)a1));
  shifted_bits_3 = 15731 * (((record_word_offset + (int)a1) << 13) ^ (record_word_offset + (int)a1)) * (((record_word_offset + (int)a1) << 13) ^ (record_word_offset + (int)a1)) + 789221;
  scaled_index_2 = (15731 * shifted_bits_2 * shifted_bits_2 + 789221) * (15731 * shifted_bits_2 * shifted_bits_2 + 789221) - 771171059;
  shifted_bits_4 = (((record_word_offset + masked_bits_2) << 13) ^ (record_word_offset + masked_bits_2)) * (((record_word_offset + masked_bits_2) << 13) ^ (record_word_offset + masked_bits_2));
  combined_products_2 = (float)(3.0 - (float)((float)(a2 - (float)(int)a2) + (float)(a2 - (float)(int)a2)))
      * (float)((float)(a2 - (float)(int)a2) * (float)(a2 - (float)(int)a2));
  *(float *)&masked_bits = (float)((float)((float)((float)(1.0
                                                - (float)((float)(((scaled_index + 789221) * (scaled_index + 789221) - 771171059)
                                                                & 0x7FFFFFFF)
                                                        * 9.3132257e-10))
                                        * (float)(1.0 - combined_products))
                                + (float)((float)(1.0 - (float)((float)(scaled_index_2 & 0x7FFFFFFF) * 9.3132257e-10)) * combined_products))
                        * (float)(1.0 - combined_products_2))
                + (float)((float)((float)((float)(1.0
                                                - (float)((float)((shifted_bits_3 * shifted_bits_3 - 771171059) & 0x7FFFFFFF) * 9.3132257e-10))
                                        * (float)(1.0 - combined_products))
                                + (float)((float)(1.0
                                                - (float)((float)(((15731 * shifted_bits_4 + 789221) * (15731 * shifted_bits_4 + 789221)
                                                                 - 771171059)
                                                                & 0x7FFFFFFF)
                                                        * 9.3132257e-10))
                                        * combined_products))
                        * combined_products_2);
  return (__m128)masked_bits;
}

//----- (0000000140132990) ----------------------------------------------------
void            sub_140132990(unsigned int a1, unsigned __int16 a2, __int64 a3,      __m128i *a4)
{
  __int64 byte_count;
  unsigned int remaining_bits;
  signed int cached_packet_out_byte;
  signed int remaining_amount;
  unsigned int integer_difference;
  int integer_sum;

  byte_count = -1;
  do
    ++byte_count;
  while ( SR_VEC_PTR_LANES(128, a4, i8)[byte_count] );
  *(_QWORD *)&packet_out_byte = 5;
  LOBYTE(g_18539D408) = 3;
  if ( (int)byte_count > 63 )
    LODWORD(byte_count) = 63;
  packet_out_data = dword_1402B2658;
  remaining_bits = byte_count & 0x3F;
  cached_packet_out_byte = 5;
  remaining_amount = 6;
  while ( 1 )
  {
    *((_BYTE *)&packet_out_data + cached_packet_out_byte) &= -1 << remaining_amount;
    *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits << SLOBYTE(packet_out_bit);
    integer_difference = 8 - packet_out_bit;
    cached_packet_out_byte = packet_out_byte;
    if ( remaining_amount < 8 - packet_out_bit )
      break;
    integer_sum = 0;
    packet_out_bit = 0;
    if ( remaining_amount == integer_difference )
    {
      cached_packet_out_byte = ++packet_out_byte;
      goto LABEL_12;
    }
    cached_packet_out_byte = packet_out_byte + 1;
    remaining_bits >>= integer_difference;
    remaining_amount -= integer_difference;
    ++packet_out_byte;
    if ( remaining_amount <= 0 )
      goto LABEL_12;
  }
  integer_sum = remaining_amount + packet_out_bit;
  packet_out_bit += remaining_amount;
LABEL_12:
  if ( cached_packet_out_byte < 0x10000 )
  {
    if ( integer_sum > 0 )
    {
      ++cached_packet_out_byte;
      packet_out_bit = 0;
      packet_out_byte = cached_packet_out_byte;
    }
    crt_memcpy((__m128i *)((char *)&packet_out_data + cached_packet_out_byte), a4, (int)byte_count);
    packet_out_byte += byte_count;
  }
  sub_140130350(a1, a2, a3);
}

//----- (0000000140132E00) ----------------------------------------------------
__int64 sub_140132E00()
{
  unsigned int iteration_count;
  unsigned int *state_address;

  iteration_count = 0;
  state_address = &g_1A8E379E0;
  while ( *state_address )
  {
    ++iteration_count;
    state_address += 20;
    if ( (__int64)state_address >= (__int64)&g_1A8E3C9E0 )
      return 0xFFFFFFFFLL;
  }
  return iteration_count;
}

//----- (0000000140132E30) ----------------------------------------------------
__int64 sub_140132E30()
{
  __int64 remaining_count;
  unsigned int *buffer_cursor;
  __int64 result;
  unsigned int *saved_iteration_count;
  __int64 cached_item_link_peer_count;
  __int64 scaled_index;
  unsigned int scaled_index_2;
  signed int iteration_count;
  __int128 masked_bits;
  __int64 scaled_index_3;

  remaining_count = 256;
  buffer_cursor = &g_1A8E379E0;
  do
  {
    if ( *buffer_cursor )
    {
      if ( (--buffer_cursor[1] & 0x80000000) != 0 )
        *buffer_cursor = 0;
    }
    buffer_cursor += 20;
    --remaining_count;
  }
  while ( remaining_count );
  result = item_link_peer_count;
  if ( (int)item_link_peer_count > 0 )
  {
    saved_iteration_count = &g_1A8E6BBFC;
    cached_item_link_peer_count = item_link_peer_count;
    do
    {
      result = (int)*(saved_iteration_count - 47217);
      if ( (_DWORD)result != -1 )
      {
        scaled_index = 3597 * result;
        scaled_index_2 = dword_140404A6C[3597 * result + 71856268];
        if ( scaled_index_2 != -1 )
        {
          iteration_count = *saved_iteration_count;
          if ( *saved_iteration_count != -1 )
            goto LABEL_17;
          iteration_count = 0;
          result = (__int64)&g_1A8E379E8;
          while ( !*(_DWORD *)(result - 8) || *(_DWORD *)result != scaled_index_2 )
          {
            ++iteration_count;
            result += 80;
            if ( result >= (__int64)&g_1A8E3C9E8 )
            {
              result = sub_140132E00();
              iteration_count = result;
              *saved_iteration_count = result;
              goto LABEL_16;
            }
          }
          *saved_iteration_count = iteration_count;
LABEL_16:
          if ( iteration_count != -1 )
          {
LABEL_17:
            masked_bits = *(_OWORD *)&dword_140404A6C[scaled_index + 71856258];
            result = dword_140404A6C[scaled_index + 71856265];
            scaled_index_3 = 10LL * iteration_count;
            *(_OWORD *)&dword_140404A6C[2 * scaled_index_3 + 438881248] = *(_OWORD *)&dword_140404A6C[scaled_index + 71856254];
            dword_140404A6C[2 * scaled_index_3 + 438881245] = 1;
            *(_OWORD *)&dword_140404A6C[2 * scaled_index_3 + 438881252] = masked_bits;
            dword_140404A6C[2 * scaled_index_3 + 438881246] = 3600;
            dword_140404A6C[2 * scaled_index_3 + 438881247] = scaled_index_2;
            dword_140404A6C[2 * scaled_index_3 + 438881264] = result;
          }
        }
      }
      saved_iteration_count += 47224;
      --cached_item_link_peer_count;
    }
    while ( cached_item_link_peer_count );
  }
  return result;
}

//----- (0000000140132F90) ----------------------------------------------------
void sub_140132F90()
{
  unsigned int *state_address;
  __int64 cached_item_link_peer_count;
  int integer_quotient;
  __int64 cached_item_link_peer_count_2;
  unsigned int *state_address_2;
  signed int table_value;
  signed int shifted_bits;

  if ( g_151E4614C && g_151E46150 && (game_tick & 0x3FF) == 0 )
  {
    packet_out_data = dword_1402B2658;
    *(_QWORD *)&packet_out_byte = 5;
    LOBYTE(g_18539D408) = 64;
    sub_140130350(g_18329C1E0, g_18329C1E4, 0);
  }
  if ( (int)item_link_peer_count > 0 )
  {
    state_address = &g_1A8E3DA40;
    cached_item_link_peer_count = item_link_peer_count;
    integer_quotient = (signed int)g_151E45944 / (signed int)item_link_peer_count;
    cached_item_link_peer_count_2 = item_link_peer_count;
    do
    {
      *state_address = integer_quotient;
      state_address += 47224;
      --cached_item_link_peer_count_2;
    }
    while ( cached_item_link_peer_count_2 );
    state_address_2 = &g_1A8E3DA3C;
    do
    {
      table_value = state_address_2[1];
      state_address_2 += 47224;
      *(state_address_2 - 47224) += ((unsigned int)(((unsigned __int64)(2004318071LL * table_value) >> 32) - table_value) >> 31)
                     + ((int)(((unsigned __int64)(2004318071LL * table_value) >> 32) - table_value) >> 5);
      shifted_bits = *(state_address_2 - 47224);
      if ( shifted_bits < (int)(((unsigned int)(((unsigned __int64)(2004318071LL * table_value) >> 32) - table_value) >> 31)
                    + ((int)(((unsigned __int64)(2004318071LL * table_value) >> 32) - table_value) >> 5)) )
        shifted_bits = ((unsigned int)(((unsigned __int64)(2004318071LL * table_value) >> 32) - table_value) >> 31)
           + ((int)(((unsigned __int64)(2004318071LL * table_value) >> 32) - table_value) >> 5);
      *(state_address_2 - 47224) = shifted_bits;
      --cached_item_link_peer_count;
    }
    while ( cached_item_link_peer_count );
  }
}

//----- (0000000140137E90) ----------------------------------------------------
void            sub_140137E90(int a1)
{
  unsigned int *state_address;
  unsigned int *state_address_2;
  __int64 input_value;
  __int64 remaining_count;
  signed int cached_packet_out_byte;
  signed int iteration_count;
  __int128 loaded_word;
  signed int iteration_count_2;

  state_address = &g_1A8E379E0;
  packet_out_data = dword_1402B2658;
  state_address_2 = &g_1A8E379E8;
  input_value = a1;
  *(_QWORD *)&packet_out_byte = 5;
  LOBYTE(g_18539D408) = 9;
  remaining_count = 256;
  do
  {
    sr_net_write_bits(state_address_2 - 2, 1);
    if ( *state_address )
    {
      cached_packet_out_byte = packet_out_byte;
      if ( (int)packet_out_byte < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          cached_packet_out_byte = packet_out_byte + 1;
          packet_out_bit = 0;
          ++packet_out_byte;
        }
        *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte) = *state_address_2;
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
          loaded_word = *(_OWORD *)(state_address_2 + 5);
          *(_OWORD *)((char *)&packet_out_data + iteration_count) = *(_OWORD *)(state_address_2 + 1);
          *(_OWORD *)((char *)&g_18539D414 + iteration_count) = loaded_word;
          iteration_count_2 = packet_out_byte + 32;
          packet_out_byte = iteration_count_2;
          if ( iteration_count_2 < 0x10000 )
          {
            if ( (int)packet_out_bit > 0 )
            {
              ++iteration_count_2;
              packet_out_bit = 0;
              packet_out_byte = iteration_count_2;
            }
            *(unsigned int *)((char *)&packet_out_data + iteration_count_2) = state_address_2[17];
            packet_out_byte += 4;
          }
        }
      }
    }
    state_address_2 += 20;
    state_address += 20;
    --remaining_count;
  }
  while ( remaining_count );
  sub_140130350(
    dword_140404A6C[47224 * input_value + 438887405],
    dword_140404A6C[47224 * input_value + 438887406],
    *(_QWORD *)&dword_140404A6C[47224 * input_value + 438887407]);
}

//----- (0000000140138020) ----------------------------------------------------
__int64 sub_140138020()
{
  __int64 int64_result;
  __int64 result;
  __int64 int64_result_2;
  __int64 int64_result_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140138020[16];
#define ProcessAffinityMask (*(__int64 (*))(void *)(sr_frame_140138020 + 0)) /* [rsp+30h] */
#define SystemAffinityMask (*(__int64 (*))(void *)(sr_frame_140138020 + 8)) /* [rsp+38h] */

  int64_result = ((__int64 (*)(void))GetCurrentProcess)();
  result = ((__int64 (           *)(__int64, __int64 *, __int64 *))GetProcessAffinityMask)(
             int64_result,
             &ProcessAffinityMask,
             &SystemAffinityMask);
  if ( (_DWORD)result )
  {
    if ( (ProcessAffinityMask & 1) != 0 )
    {
      int64_result_2 = ((__int64 (*)(void))GetCurrentProcess)();
      ((void (           *)(__int64, __int64))SetProcessAffinityMask)(int64_result_2, 1);
      int64_result_3 = ((__int64 (*)(void))GetCurrentProcess)();
      return ((__int64 (           *)(__int64, __int64 *, __int64 *))GetProcessAffinityMask)(
               int64_result_3,
               &ProcessAffinityMask,
               &SystemAffinityMask);
    }
  }
  return result;
}
#undef ProcessAffinityMask
#undef SystemAffinityMask

// 14026E318: invalid function type 'HANDLE (__stdcall *GetCurrentProcess)()' has been ignored
// 14026E2F0: invalid function type 'BOOL (__stdcall *GetProcessAffinityMask)(HANDLE hProcess, PDWORD_PTR lpProcessAffinityMask, PDWORD_PTR lpSystemAffinityMask)' has been ignored
// 14026E2E8: invalid function type 'BOOL (__stdcall *SetProcessAffinityMask)(HANDLE hProcess, DWORD_PTR dwProcessAffinityMask)' has been ignored

//----- (0000000140138430) ----------------------------------------------------
__int64            sub_140138430(int a1, int a2)
{
  __int64 input_value;
  __int64 player_record_offset;
  __int64 packed_word_bits;
  __int64 result;
  __int64 table_value;
  unsigned int table_value_2;
  unsigned int table_value_3;
  unsigned int table_value_4;
  __int64 scaled_index;

  input_value = a2;
  if ( a1 != -1 )
  {
    player_record_offset = 3597LL * a1;
    packed_word_bits = (int)dword_140404A6C[player_record_offset + 71856286];
    if ( (_DWORD)packed_word_bits != a2 )
    {
      if ( (unsigned int)packed_word_bits <= 5 && dword_140404A6C[5873 * packed_word_bits + 283831510] == a1 )
      {
        if ( game_type == 4 )
        {
          sub_140194C10(packed_word_bits);
          LODWORD(packed_word_bits) = dword_140404A6C[player_record_offset + 71856286];
        }
        result = (int)packed_word_bits;
        dword_140404A6C[5873 * (int)packed_word_bits + 283831510] = -1;
      }
      table_value = (int)dword_140404A6C[player_record_offset + 71856292];
      dword_140404A6C[player_record_offset + 71856286] = input_value;
      if ( (unsigned int)input_value <= 5 )
      {
        table_value_2 = dword_140404A6C[player_record_offset + 71859822];
        dword_140404A6C[player_record_offset + 71859821] = 1;
        if ( ((table_value_2 - 3) & 0xFFFFFFFA) != 0 || table_value_2 == 4 )
          dword_140404A6C[player_record_offset + 71859822] = dword_1402B2980[input_value];
        result = (unsigned int)dword_1402B29A0[input_value];
        dword_140404A6C[player_record_offset + 71859823] = result;
      }
      if ( (_DWORD)input_value == 17 )
      {
        table_value_3 = dword_140404A6C[player_record_offset + 71859822];
        dword_140404A6C[player_record_offset + 71859821] = 0;
        result = table_value_3 - 3;
        if ( (result & 0xFFFFFFFA) != 0 || table_value_3 == 4 )
          dword_140404A6C[player_record_offset + 71859822] = 0;
        dword_140404A6C[player_record_offset + 71859823] = 0;
      }
      if ( (_DWORD)table_value != -1 )
      {
        table_value_4 = dword_140404A6C[player_record_offset + 71859821];
        scaled_index = 7166 * table_value;
        ++dword_140404A6C[table_value + 282485789];
        dword_140404A6C[scaled_index + 280658445] = table_value_4;
        dword_140404A6C[scaled_index + 280658446] = dword_140404A6C[player_record_offset + 71859822];
        result = dword_140404A6C[player_record_offset + 71859823];
        dword_140404A6C[scaled_index + 280658447] = result;
      }
    }
  }
  return result;
}

//----- (0000000140138590) ----------------------------------------------------
__int64            sub_140138590(
        int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  unsigned int *state_address;
  __int64 allocated_buffer;
  signed int iteration_count;
  signed int i;
  signed int scaled_index;

  state_address = &dword_140404A6C[44 * a1 + 284024933];
  state_address[1] = 1;
  *state_address = 1;
  state_address[7] = a5;
  state_address[8] = a6;
  state_address[2] = 1;
  state_address[3] = 6408;
  state_address[4] = 6408;
  state_address[10] = 0;
  state_address[5] = a3;
  state_address[6] = a4;
  free(*((void **)state_address + 6));
  allocated_buffer = sr_path_malloc((int)(4 * *state_address * state_address[1]));
  iteration_count = 0;
  for ( *((_QWORD *)state_address + 6) = allocated_buffer; iteration_count < (int)state_address[1]; ++iteration_count )
  {
    for ( i = 0; i < (int)*state_address; *(_DWORD *)(*((_QWORD *)state_address + 6) + 4LL * scaled_index) = (a10 << 24)
                                                                              + a7
                                                                              + (a9 << 16)
                                                                              + (a8 << 8) )
    {
      scaled_index = i + iteration_count * *state_address;
      ++i;
    }
  }
  sub_14014D3E0(a1, 0);
  return 1;
}

//----- (00000001401386C0) ----------------------------------------------------
__int64            sub_1401386C0(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10)
{
  unsigned int input_value;
  unsigned int input_value_2;

  input_value = a4;
  input_value_2 = a3;
  glStencilFuncSeparate(1029, a1, a3, a4);
  glStencilMaskSeparate(1029, 0xFFFFFFFFLL);
  glStencilOpSeparate(1029, a5, a6, a7);
  glStencilFuncSeparate(1028, a2, input_value_2, input_value);
  glStencilMaskSeparate(1028, 0xFFFFFFFFLL);
  return ((__int64 (*)(_QWORD, _QWORD, _QWORD, _QWORD))glStencilOpSeparate)(1028, a8, a9, a10);
}

//----- (0000000140139560) ----------------------------------------------------
__int64 sub_140139560()
{
  sub_14003FB90(6, 0.0, 2.0, -1.625, 4.0, 4.0, 0.25);
  g_1A760C010 = 1080033280;
  sub_14003FB90(1, 0.0, 0.0, 0.0, 0.375, 6.0, 0.375);
  sub_14003FB90(1, 0.0, 3.0, -5.0, 0.25, 0.25, 10.0);
  sub_14003FB90(1, 0.0, 3.0, -6.0, 0.3125, 1.0, 0.5);
  sub_14003FB90(1, 0.0, 3.0, -10.0, 0.3125, 1.0, 0.5);
  g_1A7602FA8 = 1078984704;
  g_1A7602FAC = -1082130432;
  g_1A7602FA4 = 0;
  g_1A7600B98 = 1077936128;
  return sub_14003FB90(4, 0.0, 2.625, -8.0, 0.0625, 0.5, 2.0);
}

//----- (0000000140139740) ----------------------------------------------------
__int64            sub_140139740(int a1)
{
  __int64 record_word_offset;
  __int64 packed_word_bits;
  int table_value;
  __int64 scaled_index;
  __int64 scaled_index_2;
  unsigned int integer_difference;
  __m128i converted_vector;
  float *state_address;
  int iteration_count;
  signed int integer_difference_2;
  float converted_vector_2;
  float scaled_value;
  signed int table_value_2;
  signed int table_value_3;
  bool comparison_result;
  float product_difference;
  int remaining_amount;
  int remaining_amount_2;
  int table_value_4;
  int table_value_5;
  int table_value_6;
  float product_difference_2;
  unsigned int table_value_7;
  float weighted_sum;
  float saved_weighted_sum;
  float weighted_sum_2;
  float saved_weighted_sum_2;
  unsigned int table_value_8;
  __m128i converted_vector_3;
  __int64 result;
  float converted_vector_4;
  __int64 remaining_count;
  float saved_packed_word_bits;
  float product_difference_3;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  __int64 scaled_index_5;
  __int64 scaled_index_6;
  float product_difference_4;
  __int64 scaled_index_7;
  __int64 scaled_index_8;

  record_word_offset = 396LL * a1;
  packed_word_bits = dword_140404A6C[record_word_offset + 225426059];
  table_value = dword_140404A6C[record_word_offset + 225426060];
  scaled_index = 34LL * (int)dword_140404A6C[record_word_offset + 225426057];
  scaled_index_2 = 34LL * (int)dword_140404A6C[record_word_offset + 225426056];
  if ( dword_140404A6C[record_word_offset + 225426058] )
    integer_difference = dword_140404A6C[scaled_index + 225391232]
       - dword_140404A6C[scaled_index_2 + 225391241]
       - dword_140404A6C[scaled_index_2 + 225391232]
       - dword_140404A6C[scaled_index + 225391243];
  else
    integer_difference = dword_140404A6C[scaled_index + 225391230]
       - dword_140404A6C[scaled_index_2 + 225391240]
       - dword_140404A6C[scaled_index_2 + 225391230]
       - dword_140404A6C[scaled_index + 225391242];
  converted_vector = _mm_cvtsi32_si128(integer_difference);
  state_address = (float *)&dword_140404A6C[record_word_offset + 225426174];
  iteration_count = 0;
  integer_difference_2 = dword_140404A6C[scaled_index + 225391230] - dword_140404A6C[scaled_index_2 + 225391230];
  dword_140404A6C[record_word_offset + 225426175] = 0;
  converted_vector_2 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector), f32)[0] * 4.0;
  *state_address = (float)integer_difference_2;
  *(float *)&dword_140404A6C[record_word_offset + 225426176] = (float)(int)(dword_140404A6C[scaled_index + 225391232]
                                                          - dword_140404A6C[scaled_index_2 + 225391232]);
  sr_math_vec3_normalize((__int64)state_address, state_address);
  scaled_value = *state_address;
  *(_QWORD *)&dword_140404A6C[record_word_offset + 225426177] = COERCE_UNSIGNED_INT(-*(float *)&dword_140404A6C[record_word_offset + 225426176]);
  *(float *)&dword_140404A6C[record_word_offset + 225426179] = scaled_value;
  if ( dword_140404A6C[record_word_offset + 225426058] )
    table_value_2 = dword_140404A6C[scaled_index_2 + 225391230];
  else
    table_value_2 = dword_140404A6C[scaled_index_2 + 225391230] + dword_140404A6C[scaled_index_2 + 225391240];
  *(float *)&dword_140404A6C[record_word_offset + 225426180] = (float)table_value_2 * 4.0;
  if ( dword_140404A6C[record_word_offset + 225426058] == 1 )
    table_value_3 = dword_140404A6C[scaled_index_2 + 225391232] + dword_140404A6C[scaled_index_2 + 225391241];
  else
    table_value_3 = dword_140404A6C[scaled_index_2 + 225391232];
  *(float *)&dword_140404A6C[record_word_offset + 225426182] = (float)table_value_3 * 4.0;
  comparison_result = dword_140404A6C[record_word_offset + 225426058] == 0;
  if ( dword_140404A6C[record_word_offset + 225426058] )
    product_difference = (float)table_value * 4.0;
  else
    product_difference = (float)(int)packed_word_bits * -4.0;
  *(float *)&dword_140404A6C[record_word_offset + 225426180] = (float)(product_difference * *(float *)&dword_140404A6C[record_word_offset + 225426177])
                                             + *(float *)&dword_140404A6C[record_word_offset + 225426180];
  *(float *)&dword_140404A6C[record_word_offset + 225426181] = (float)(product_difference * *(float *)&dword_140404A6C[record_word_offset + 225426178])
                                             + *(float *)&dword_140404A6C[record_word_offset + 225426181];
  *(float *)&dword_140404A6C[record_word_offset + 225426182] = (float)(product_difference * *(float *)&dword_140404A6C[record_word_offset + 225426179])
                                             + *(float *)&dword_140404A6C[record_word_offset + 225426182];
  remaining_amount = dword_140404A6C[scaled_index + 225391230];
  if ( comparison_result )
    remaining_amount -= dword_140404A6C[scaled_index + 225391242];
  *(float *)&dword_140404A6C[record_word_offset + 225426183] = (float)remaining_amount * 4.0;
  remaining_amount_2 = dword_140404A6C[scaled_index + 225391232];
  if ( dword_140404A6C[record_word_offset + 225426058] == 1 )
    remaining_amount_2 -= dword_140404A6C[scaled_index + 225391243];
  *(float *)&dword_140404A6C[record_word_offset + 225426185] = (float)remaining_amount_2 * 4.0;
  table_value_4 = dword_140404A6C[scaled_index_2 + 225391231];
  table_value_5 = dword_140404A6C[scaled_index + 225391231];
  if ( table_value_4 >= table_value_5 )
  {
    *(float *)&dword_140404A6C[record_word_offset + 225426181] = (float)((float)table_value_5 + 1.0) * 4.0;
    table_value_6 = dword_140404A6C[scaled_index_2 + 225391231];
  }
  else
  {
    *(float *)&dword_140404A6C[record_word_offset + 225426181] = (float)((float)table_value_4 + 1.0) * 4.0;
    table_value_6 = dword_140404A6C[scaled_index + 225391231];
  }
  *(float *)&dword_140404A6C[record_word_offset + 225426184] = (float)((float)table_value_6 * 4.0) + 8.0;
  if ( dword_140404A6C[record_word_offset + 225426058] )
    product_difference_2 = (float)(int)packed_word_bits * -4.0;
  else
    product_difference_2 = (float)table_value * 4.0;
  *(float *)&dword_140404A6C[record_word_offset + 225426183] = (float)(product_difference_2 * *(float *)&dword_140404A6C[record_word_offset + 225426177])
                                             + *(float *)&dword_140404A6C[record_word_offset + 225426183];
  *(float *)&dword_140404A6C[record_word_offset + 225426184] = (float)(product_difference_2 * *(float *)&dword_140404A6C[record_word_offset + 225426178])
                                             + *(float *)&dword_140404A6C[record_word_offset + 225426184];
  *(float *)&dword_140404A6C[record_word_offset + 225426185] = (float)(product_difference_2 * *(float *)&dword_140404A6C[record_word_offset + 225426179])
                                             + *(float *)&dword_140404A6C[record_word_offset + 225426185];
  table_value_7 = dword_140404A6C[record_word_offset + 225426058];
  if ( !table_value_7 )
  {
    weighted_sum = (float)(int)(dword_140404A6C[scaled_index_2 + 225391230] + dword_140404A6C[scaled_index_2 + 225391240]) * 4.0;
    saved_weighted_sum = weighted_sum;
    weighted_sum_2 = (float)((float)(int)(dword_140404A6C[scaled_index_2 + 225391231] + 1) * 4.0) + 0.125;
    saved_weighted_sum_2 = weighted_sum_2;
LABEL_25:
    table_value_8 = dword_140404A6C[scaled_index_2 + 225391232];
    goto LABEL_26;
  }
  weighted_sum = (float)(int)dword_140404A6C[scaled_index_2 + 225391230] * 4.0;
  saved_weighted_sum = weighted_sum;
  weighted_sum_2 = (float)((float)(int)(dword_140404A6C[scaled_index_2 + 225391231] + 1) * 4.0) + 0.125;
  saved_weighted_sum_2 = weighted_sum_2;
  if ( table_value_7 != 1 )
    goto LABEL_25;
  table_value_8 = dword_140404A6C[scaled_index_2 + 225391232] + dword_140404A6C[scaled_index_2 + 225391241];
LABEL_26:
  converted_vector_3 = _mm_cvtsi32_si128(table_value_8);
  result = 0;
  dword_140404A6C[record_word_offset + 225426061] = 0;
  converted_vector_4 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_3), f32)[0] * 4.0;
  if ( (int)packed_word_bits > 0 )
  {
    remaining_count = packed_word_bits;
    do
    {
      saved_packed_word_bits = (float)(int)packed_word_bits;
      LODWORD(packed_word_bits) = packed_word_bits - 1;
      dword_140404A6C[7 * (int)result + 225426062 + record_word_offset] = 0;
      product_difference_3 = 2.0 - (float)(saved_packed_word_bits * 4.0);
      scaled_index_3 = record_word_offset * 4 + 28LL * (int)dword_140404A6C[record_word_offset + 225426061];
      *(float *)((char *)&g_175FF34A8 + scaled_index_3) = (float)(product_difference_3 * *(float *)&dword_140404A6C[record_word_offset + 225426177])
                                                            + weighted_sum;
      *(float *)((char *)&g_175FF34AC + scaled_index_3) = (float)(product_difference_3 * *(float *)&dword_140404A6C[record_word_offset + 225426178])
                                                            + weighted_sum_2;
      *(float *)((char *)&g_175FF34B0 + scaled_index_3) = (float)(product_difference_3 * *(float *)&dword_140404A6C[record_word_offset + 225426179])
                                                            + converted_vector_4;
      scaled_index_4 = record_word_offset * 4 + 28LL * (int)dword_140404A6C[record_word_offset + 225426061];
      *(float *)((char *)&g_175FF34B4 + scaled_index_4) = (float)(product_difference_3 * *(float *)&dword_140404A6C[record_word_offset + 225426177])
                                                            + weighted_sum;
      *(float *)((char *)&g_175FF34B8 + scaled_index_4) = (float)(product_difference_3 * *(float *)&dword_140404A6C[record_word_offset + 225426178])
                                                            + weighted_sum_2;
      *(float *)((char *)&g_175FF34BC + scaled_index_4) = (float)(product_difference_3 * *(float *)&dword_140404A6C[record_word_offset + 225426179])
                                                            + converted_vector_4;
      scaled_index_5 = record_word_offset * 4 + 28LL * (int)dword_140404A6C[record_word_offset + 225426061];
      *(float *)((char *)&g_175FF34B4 + scaled_index_5) = (float)(converted_vector_2 * *state_address)
                                                            + *(float *)((char *)&g_175FF34B4 + scaled_index_5);
      *(float *)((char *)&g_175FF34B8 + scaled_index_5) = (float)(converted_vector_2 * state_address[1])
                                                            + *(float *)((char *)&g_175FF34B8 + scaled_index_5);
      *(float *)((char *)&g_175FF34BC + scaled_index_5) = (float)(converted_vector_2 * state_address[2])
                                                            + *(float *)((char *)&g_175FF34BC + scaled_index_5);
      result = dword_140404A6C[record_word_offset + 225426061] + 1;
      dword_140404A6C[record_word_offset + 225426061] = result;
      --remaining_count;
    }
    while ( remaining_count );
  }
  if ( table_value > 0 )
  {
    do
    {
      ++iteration_count;
      dword_140404A6C[7 * (int)result + 225426062 + record_word_offset] = 1;
      scaled_index_6 = record_word_offset * 4 + 28LL * (int)dword_140404A6C[record_word_offset + 225426061];
      product_difference_4 = (float)((float)iteration_count * 4.0) - 2.0;
      *(float *)((char *)&g_175FF34A8 + scaled_index_6) = (float)(product_difference_4 * *(float *)&dword_140404A6C[record_word_offset + 225426177])
                                                            + saved_weighted_sum;
      *(float *)((char *)&g_175FF34AC + scaled_index_6) = (float)(product_difference_4 * *(float *)&dword_140404A6C[record_word_offset + 225426178])
                                                            + saved_weighted_sum_2;
      *(float *)((char *)&g_175FF34B0 + scaled_index_6) = (float)(product_difference_4 * *(float *)&dword_140404A6C[record_word_offset + 225426179])
                                                            + converted_vector_4;
      scaled_index_7 = record_word_offset * 4 + 28LL * (int)dword_140404A6C[record_word_offset + 225426061];
      *(float *)((char *)&g_175FF34B4 + scaled_index_7) = (float)(product_difference_4 * *(float *)&dword_140404A6C[record_word_offset + 225426177])
                                                            + saved_weighted_sum;
      *(float *)((char *)&g_175FF34B8 + scaled_index_7) = (float)(product_difference_4 * *(float *)&dword_140404A6C[record_word_offset + 225426178])
                                                            + saved_weighted_sum_2;
      *(float *)((char *)&g_175FF34BC + scaled_index_7) = (float)(product_difference_4 * *(float *)&dword_140404A6C[record_word_offset + 225426179])
                                                            + converted_vector_4;
      scaled_index_8 = record_word_offset * 4 + 28LL * (int)dword_140404A6C[record_word_offset + 225426061];
      *(float *)((char *)&g_175FF34B4 + scaled_index_8) = (float)(converted_vector_2 * *state_address)
                                                            + *(float *)((char *)&g_175FF34B4 + scaled_index_8);
      *(float *)((char *)&g_175FF34B8 + scaled_index_8) = (float)(converted_vector_2 * state_address[1])
                                                            + *(float *)((char *)&g_175FF34B8 + scaled_index_8);
      *(float *)((char *)&g_175FF34BC + scaled_index_8) = (float)(converted_vector_2 * state_address[2])
                                                            + *(float *)((char *)&g_175FF34BC + scaled_index_8);
      result = dword_140404A6C[record_word_offset + 225426061] + 1;
      dword_140404A6C[record_word_offset + 225426061] = result;
    }
    while ( iteration_count < table_value );
  }
  return result;
}

//----- (000000014013C6E0) ----------------------------------------------------
__int64 sub_14013C6E0()
{
  int chdir_result;
  __int64 call_result;
  int state_word;
  unsigned int *record_byte_offset;
  __int64 cached_call_result;
  char *text_cursor;
  unsigned int *state_address;
  char input_byte;
  int call_result_2;
  int state_word_2;
  int iteration_count;
  __int64 record_byte_offset_2;
  __int64 record_byte_offset_3;
  char *record_byte_offset_4;
  char scaled_index;
  char table_value;
  char table_value_2;
  signed int state_word_3;
  unsigned int *buffer_cursor;
  __int64 remaining_count;
  unsigned int *saved_record_byte_offset;
  char input_byte_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14013C6E0[352];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14013C6E0 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(_BYTE (*)[36])(void *)(sr_frame_14013C6E0 + 32)) /* [rsp+20h] */
#define callee_output_word (*(char (*))(void *)(sr_frame_14013C6E0 + 68)) /* [rsp+44h] */
#define unused_frame_slot_336 (*(__int64 (*))(void *)(sr_frame_14013C6E0 + 336)) /* [rsp+150h] */

  chdir_result = crt_chdir("texture");
  call_result = sub_14023A198("*.png", (__int64)scratch_buffer);
  state_word = 0;
  record_byte_offset = &g_18622DFE4;
  g_18622DFE0 = 0;
  cached_call_result = call_result;
  if ( (_DWORD)call_result != -1 )
  {
    do
    {
      if ( state_word >= 1024 )
        break;
      if ( (scratch_buffer[0] & 0x10) == 0 )
      {
        text_cursor = &callee_output_word;
        state_address = &dword_140404A6C[16 * (__int64)state_word + 293119326];
        do
        {
          input_byte = *text_cursor++;
          *(_BYTE *)state_address = input_byte;
          state_address = (unsigned int *)((char *)state_address + 1);
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
  state_word_2 = g_18622DFE0;
  iteration_count = 0;
  if ( (int)g_18622DFE0 > 0 )
  {
    record_byte_offset_2 = 0;
    do
    {
      record_byte_offset_3 = 0;
      record_byte_offset_4 = (char *)&dword_140404A6C[record_byte_offset_2 + 293119326] + 1;
      do
      {
        scaled_index = *(record_byte_offset_4 - 1);
        if ( !scaled_index || scaled_index == 46 )
          break;
        if ( !*record_byte_offset_4 || *record_byte_offset_4 == 46 )
        {
          ++record_byte_offset_3;
          break;
        }
        table_value = record_byte_offset_4[1];
        if ( !table_value || table_value == 46 )
        {
          record_byte_offset_3 += 2;
          break;
        }
        table_value_2 = record_byte_offset_4[2];
        if ( !table_value_2 || table_value_2 == 46 )
        {
          record_byte_offset_3 += 3;
          break;
        }
        record_byte_offset_3 += 4;
        record_byte_offset_4 += 4;
      }
      while ( record_byte_offset_3 < 64 );
      ++iteration_count;
      *((_BYTE *)&dword_140404A6C[record_byte_offset_2 + 293119326] + record_byte_offset_3) = 0;
      record_byte_offset_2 += 16;
      state_word_2 = g_18622DFE0;
    }
    while ( iteration_count < (int)g_18622DFE0 );
  }
  if ( !chdir_result )
  {
    crt_chdir("..");
    state_word_2 = g_18622DFE0;
  }
  state_word_3 = g_1A4CFF8D0;
  g_1A4CFF560 = g_1A4CFF8D0;
  g_1A4CFF8D4 = 0;
  if ( state_word_2 > 0 )
  {
    buffer_cursor = &g_1A4CFF8D8;
    remaining_count = (unsigned int)state_word_2;
    do
    {
      saved_record_byte_offset = record_byte_offset;
      do
      {
        input_byte_2 = *(_BYTE *)saved_record_byte_offset;
        *((_BYTE *)saved_record_byte_offset + (_QWORD)&g_1A4CFFCF8 + 184LL * state_word_3 - (_QWORD)record_byte_offset) = *(_BYTE *)saved_record_byte_offset;
        saved_record_byte_offset = (unsigned int *)((char *)saved_record_byte_offset + 1);
      }
      while ( input_byte_2 );
      *buffer_cursor = state_word_3;
      record_byte_offset += 16;
      ++buffer_cursor;
      ++g_1A4CFF8D4;
      state_word_3 = ++g_1A4CFF560;
      --remaining_count;
    }
    while ( remaining_count );
  }
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef scratch_buffer
#undef callee_output_word
#undef unused_frame_slot_336

//----- (000000014013C920) ----------------------------------------------------
void            sub_14013C920(__int64 a1, __int64 a2, double a3)
{
  unsigned int *record_byte_offset;
  float float_word;
  __m128 float_word_2;
  unsigned int float_word_3;
  __int64 float_word_4;
  __m128 float_word_5;
  unsigned int masked_bits;
  __int64 unrecovered_register_value;
  __m128 call_result;
  unsigned int masked_bits_2;
  __int64 unrecovered_register_value_2;
  __m128 call_result_2;
  unsigned int masked_bits_3;
  __int64 unrecovered_register_value_3;
  __m128 call_result_3;
  unsigned int masked_bits_4;
  __int64 unrecovered_register_value_4;
  __m128 call_result_4;
  unsigned int masked_bits_5;
  __int64 unrecovered_register_value_5;
  __m128 call_result_5;
  unsigned int masked_bits_6;
  __int64 unrecovered_register_value_6;
  __m128 call_result_6;
  unsigned int masked_bits_7;
  __int64 unrecovered_register_value_7;
  __m128 call_result_7;
  unsigned int masked_bits_8;
  __int64 unrecovered_register_value_8;
  __m128 call_result_8;
  unsigned int masked_bits_9;
  __int64 unrecovered_register_value_9;
  __m128 call_result_9;
  unsigned int masked_bits_10;
  __int64 unrecovered_register_value_10;
  __m128 call_result_10;
  unsigned int masked_bits_11;
  __int64 unrecovered_register_value_11;
  __m128 call_result_11;
  unsigned int masked_bits_12;
  __int64 unrecovered_register_value_12;
  __m128 call_result_12;
  unsigned int masked_bits_13;
  __int64 unrecovered_register_value_13;
  __m128 call_result_13;
  unsigned int masked_bits_14;
  __int64 unrecovered_register_value_14;
  __m128 call_result_14;
  unsigned int masked_bits_15;
  __int64 unrecovered_register_value_15;
  __m128 call_result_15;
  unsigned int masked_bits_16;
  __int64 unrecovered_register_value_16;
  __m128 call_result_16;
  unsigned int masked_bits_17;
  __int64 unrecovered_register_value_17;
  __m128 call_result_17;
  unsigned int masked_bits_18;
  __int64 unrecovered_register_value_18;
  __m128 call_result_18;
  unsigned int masked_bits_19;
  __int64 unrecovered_register_value_19;
  __m128 call_result_19;
  unsigned int masked_bits_20;
  __int64 unrecovered_register_value_20;
  __m128 call_result_20;
  unsigned int masked_bits_21;
  __int64 unrecovered_register_value_21;
  __m128 call_result_21;
  unsigned int masked_bits_22;
  __int64 unrecovered_register_value_22;
  __m128 call_result_22;
  unsigned int masked_bits_23;
  __int64 unrecovered_register_value_23;
  __m128 call_result_23;
  unsigned int masked_bits_24;
  __int64 unrecovered_register_value_24;
  __m128 call_result_24;
  unsigned int masked_bits_25;
  __int64 unrecovered_register_value_25;
  __m128 call_result_25;
  unsigned int masked_bits_26;
  __int64 unrecovered_register_value_26;
  __m128 call_result_26;
  unsigned int masked_bits_27;
  __int64 unrecovered_register_value_27;
  __m128 call_result_27;
  unsigned int masked_bits_28;
  __int64 unrecovered_register_value_28;
  __m128 call_result_28;
  unsigned int masked_bits_29;
  __int64 unrecovered_register_value_29;
  __m128 call_result_29;
  unsigned int masked_bits_30;
  __int64 unrecovered_register_value_30;
  __m128 call_result_30;

  record_byte_offset = &g_192E8F460;
  float_word = 0.0;
  do
  {
    float_word_2 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)LODWORD(float_word)), a2, a3);
    *(record_byte_offset - 2) = SR_VEC_LANES(128, float_word_2, i32)[0];
    *(float *)&float_word_3 = float_word + 0.098174773;
    *(record_byte_offset - 3) = SR_VEC_READ_LANES(128, _mm_shuffle_ps(float_word_2, float_word_2, 1), u32)[0];
    float_word_5 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)float_word_3), float_word_4, a3);
    *record_byte_offset = SR_VEC_LANES(128, float_word_5, i32)[0];
    *(float *)&masked_bits = *(float *)&float_word_3 + 0.098174773;
    *(record_byte_offset - 1) = SR_VEC_READ_LANES(128, _mm_shuffle_ps(float_word_5, float_word_5, 1), u32)[0];
    call_result = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)masked_bits), unrecovered_register_value, a3);
    record_byte_offset[2] = SR_VEC_LANES(128, call_result, i32)[0];
    *(float *)&masked_bits_2 = *(float *)&masked_bits + 0.098174773;
    record_byte_offset[1] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result, call_result, 1), u32)[0];
    call_result_2 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)masked_bits_2), unrecovered_register_value_2, a3);
    record_byte_offset[4] = SR_VEC_LANES(128, call_result_2, i32)[0];
    *(float *)&masked_bits_3 = *(float *)&masked_bits_2 + 0.098174773;
    record_byte_offset[3] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result_2, call_result_2, 1), u32)[0];
    call_result_3 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)masked_bits_3), unrecovered_register_value_3, a3);
    record_byte_offset[6] = SR_VEC_LANES(128, call_result_3, i32)[0];
    *(float *)&masked_bits_4 = *(float *)&masked_bits_3 + 0.098174773;
    record_byte_offset[5] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result_3, call_result_3, 1), u32)[0];
    call_result_4 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)masked_bits_4), unrecovered_register_value_4, a3);
    record_byte_offset[8] = SR_VEC_LANES(128, call_result_4, i32)[0];
    *(float *)&masked_bits_5 = *(float *)&masked_bits_4 + 0.098174773;
    record_byte_offset[7] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result_4, call_result_4, 1), u32)[0];
    call_result_5 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)masked_bits_5), unrecovered_register_value_5, a3);
    record_byte_offset[10] = SR_VEC_LANES(128, call_result_5, i32)[0];
    *(float *)&masked_bits_6 = *(float *)&masked_bits_5 + 0.098174773;
    record_byte_offset[9] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result_5, call_result_5, 1), u32)[0];
    call_result_6 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)masked_bits_6), unrecovered_register_value_6, a3);
    record_byte_offset[12] = SR_VEC_LANES(128, call_result_6, i32)[0];
    *(float *)&masked_bits_7 = *(float *)&masked_bits_6 + 0.098174773;
    record_byte_offset[11] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result_6, call_result_6, 1), u32)[0];
    call_result_7 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)masked_bits_7), unrecovered_register_value_7, a3);
    record_byte_offset[14] = SR_VEC_LANES(128, call_result_7, i32)[0];
    *(float *)&masked_bits_8 = *(float *)&masked_bits_7 + 0.098174773;
    record_byte_offset[13] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result_7, call_result_7, 1), u32)[0];
    call_result_8 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)masked_bits_8), unrecovered_register_value_8, a3);
    record_byte_offset[16] = SR_VEC_LANES(128, call_result_8, i32)[0];
    *(float *)&masked_bits_9 = *(float *)&masked_bits_8 + 0.098174773;
    record_byte_offset[15] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result_8, call_result_8, 1), u32)[0];
    call_result_9 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)masked_bits_9), unrecovered_register_value_9, a3);
    record_byte_offset[18] = SR_VEC_LANES(128, call_result_9, i32)[0];
    *(float *)&masked_bits_10 = *(float *)&masked_bits_9 + 0.098174773;
    record_byte_offset[17] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result_9, call_result_9, 1), u32)[0];
    call_result_10 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)masked_bits_10), unrecovered_register_value_10, a3);
    record_byte_offset[20] = SR_VEC_LANES(128, call_result_10, i32)[0];
    *(float *)&masked_bits_11 = *(float *)&masked_bits_10 + 0.098174773;
    record_byte_offset[19] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result_10, call_result_10, 1), u32)[0];
    call_result_11 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)masked_bits_11), unrecovered_register_value_11, a3);
    record_byte_offset[22] = SR_VEC_LANES(128, call_result_11, i32)[0];
    *(float *)&masked_bits_12 = *(float *)&masked_bits_11 + 0.098174773;
    record_byte_offset[21] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result_11, call_result_11, 1), u32)[0];
    call_result_12 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)masked_bits_12), unrecovered_register_value_12, a3);
    record_byte_offset[24] = SR_VEC_LANES(128, call_result_12, i32)[0];
    *(float *)&masked_bits_13 = *(float *)&masked_bits_12 + 0.098174773;
    record_byte_offset[23] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result_12, call_result_12, 1), u32)[0];
    call_result_13 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)masked_bits_13), unrecovered_register_value_13, a3);
    record_byte_offset[26] = SR_VEC_LANES(128, call_result_13, i32)[0];
    *(float *)&masked_bits_14 = *(float *)&masked_bits_13 + 0.098174773;
    record_byte_offset[25] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result_13, call_result_13, 1), u32)[0];
    call_result_14 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)masked_bits_14), unrecovered_register_value_14, a3);
    record_byte_offset[28] = SR_VEC_LANES(128, call_result_14, i32)[0];
    *(float *)&masked_bits_15 = *(float *)&masked_bits_14 + 0.098174773;
    record_byte_offset[27] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result_14, call_result_14, 1), u32)[0];
    call_result_15 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)masked_bits_15), unrecovered_register_value_15, a3);
    record_byte_offset[30] = SR_VEC_LANES(128, call_result_15, i32)[0];
    *(float *)&masked_bits_16 = *(float *)&masked_bits_15 + 0.098174773;
    record_byte_offset[29] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result_15, call_result_15, 1), u32)[0];
    call_result_16 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)masked_bits_16), unrecovered_register_value_16, a3);
    record_byte_offset[32] = SR_VEC_LANES(128, call_result_16, i32)[0];
    *(float *)&masked_bits_17 = *(float *)&masked_bits_16 + 0.098174773;
    record_byte_offset[31] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result_16, call_result_16, 1), u32)[0];
    call_result_17 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)masked_bits_17), unrecovered_register_value_17, a3);
    record_byte_offset[34] = SR_VEC_LANES(128, call_result_17, i32)[0];
    *(float *)&masked_bits_18 = *(float *)&masked_bits_17 + 0.098174773;
    record_byte_offset[33] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result_17, call_result_17, 1), u32)[0];
    call_result_18 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)masked_bits_18), unrecovered_register_value_18, a3);
    record_byte_offset[36] = SR_VEC_LANES(128, call_result_18, i32)[0];
    *(float *)&masked_bits_19 = *(float *)&masked_bits_18 + 0.098174773;
    record_byte_offset[35] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result_18, call_result_18, 1), u32)[0];
    call_result_19 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)masked_bits_19), unrecovered_register_value_19, a3);
    record_byte_offset[38] = SR_VEC_LANES(128, call_result_19, i32)[0];
    *(float *)&masked_bits_20 = *(float *)&masked_bits_19 + 0.098174773;
    record_byte_offset[37] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result_19, call_result_19, 1), u32)[0];
    call_result_20 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)masked_bits_20), unrecovered_register_value_20, a3);
    record_byte_offset[40] = SR_VEC_LANES(128, call_result_20, i32)[0];
    *(float *)&masked_bits_21 = *(float *)&masked_bits_20 + 0.098174773;
    record_byte_offset[39] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result_20, call_result_20, 1), u32)[0];
    call_result_21 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)masked_bits_21), unrecovered_register_value_21, a3);
    record_byte_offset[42] = SR_VEC_LANES(128, call_result_21, i32)[0];
    *(float *)&masked_bits_22 = *(float *)&masked_bits_21 + 0.098174773;
    record_byte_offset[41] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result_21, call_result_21, 1), u32)[0];
    call_result_22 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)masked_bits_22), unrecovered_register_value_22, a3);
    record_byte_offset[44] = SR_VEC_LANES(128, call_result_22, i32)[0];
    *(float *)&masked_bits_23 = *(float *)&masked_bits_22 + 0.098174773;
    record_byte_offset[43] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result_22, call_result_22, 1), u32)[0];
    call_result_23 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)masked_bits_23), unrecovered_register_value_23, a3);
    record_byte_offset[46] = SR_VEC_LANES(128, call_result_23, i32)[0];
    *(float *)&masked_bits_24 = *(float *)&masked_bits_23 + 0.098174773;
    record_byte_offset[45] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result_23, call_result_23, 1), u32)[0];
    call_result_24 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)masked_bits_24), unrecovered_register_value_24, a3);
    record_byte_offset[48] = SR_VEC_LANES(128, call_result_24, i32)[0];
    *(float *)&masked_bits_25 = *(float *)&masked_bits_24 + 0.098174773;
    record_byte_offset[47] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result_24, call_result_24, 1), u32)[0];
    call_result_25 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)masked_bits_25), unrecovered_register_value_25, a3);
    record_byte_offset[50] = SR_VEC_LANES(128, call_result_25, i32)[0];
    *(float *)&masked_bits_26 = *(float *)&masked_bits_25 + 0.098174773;
    record_byte_offset[49] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result_25, call_result_25, 1), u32)[0];
    call_result_26 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)masked_bits_26), unrecovered_register_value_26, a3);
    record_byte_offset[52] = SR_VEC_LANES(128, call_result_26, i32)[0];
    *(float *)&masked_bits_27 = *(float *)&masked_bits_26 + 0.098174773;
    record_byte_offset[51] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result_26, call_result_26, 1), u32)[0];
    call_result_27 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)masked_bits_27), unrecovered_register_value_27, a3);
    record_byte_offset[54] = SR_VEC_LANES(128, call_result_27, i32)[0];
    *(float *)&masked_bits_28 = *(float *)&masked_bits_27 + 0.098174773;
    record_byte_offset[53] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result_27, call_result_27, 1), u32)[0];
    call_result_28 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)masked_bits_28), unrecovered_register_value_28, a3);
    record_byte_offset[56] = SR_VEC_LANES(128, call_result_28, i32)[0];
    *(float *)&masked_bits_29 = *(float *)&masked_bits_28 + 0.098174773;
    record_byte_offset[55] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result_28, call_result_28, 1), u32)[0];
    call_result_29 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)masked_bits_29), unrecovered_register_value_29, a3);
    record_byte_offset[58] = SR_VEC_LANES(128, call_result_29, i32)[0];
    *(float *)&masked_bits_30 = *(float *)&masked_bits_29 + 0.098174773;
    record_byte_offset[57] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result_29, call_result_29, 1), u32)[0];
    call_result_30 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)masked_bits_30), unrecovered_register_value_30, a3);
    record_byte_offset[60] = SR_VEC_LANES(128, call_result_30, i32)[0];
    float_word = *(float *)&masked_bits_30 + 0.098174773;
    record_byte_offset[59] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result_30, call_result_30, 1), u32)[0];
    record_byte_offset += 64;
  }
  while ( (__int64)record_byte_offset < (__int64)&g_192E8F660 );
}

//----- (000000014013CDF0) ----------------------------------------------------
void sub_14013CDF0()
{
  __int64 call_result;
  int state_word;
  __int64 cached_call_result;
  char *text_cursor;
  unsigned int *state_address;
  char input_byte;
  int call_result_2;
  int iteration_count;
  __int64 record_byte_offset;
  __int64 record_byte_offset_2;
  char *record_byte_offset_3;
  char scaled_index;
  char table_value;
  char table_value_2;
  __int64 scaled_index_2;
  int saved_chdir_result;
  int chdir_result;
  int element_index;
  int saved_chdir_result_2;
  unsigned int *state_address_2;
       char *text_cursor_2;
  unsigned int *state_address_3;
  signed __int64 scaled_index_3;
  char input_byte_2;
  signed int element_index_2;
  signed int state_word_2;
  unsigned int *record_byte_offset_4;
  unsigned int *state_address_4;
  signed __int64 scaled_index_4;
  int loaded_word;
  int loaded_word_2;
  _Alignas(8) _BYTE offset_operand[296];
  /* Native filename is part of the find-data object, at offset 36. */
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14013CDF0[1392];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14013CDF0 + 0)) /* [rsp+0h] */
#define chdir_result_2 (*(int (*))(void *)(sr_frame_14013CDF0 + 32)) /* [rsp+20h] */
#define scratch_buffer (*(_BYTE (*)[1024])(void *)(sr_frame_14013CDF0 + 352)) /* [rsp+160h] */
#define unused_frame_slot_1376 (*(__int64 (*))(void *)(sr_frame_14013CDF0 + 1376)) /* [rsp+560h] */

  g_183F7C398 = 1140850688;
  g_183F7C3A0 = 1145044992;
  g_183F7C39C = 1115684864;
  *(_QWORD *)&g_189F0EF58 = -1;
  g_189F0EF54 = -1;
  g_189F0EF44 = -1;
  crt_sprintf(scratch_buffer, "data/%s/building/*.sbb", (     char *)(unsigned int *)&g_183EBFAB0);
  call_result = sub_14023A198(scratch_buffer, (__int64)offset_operand);
  state_word = 0;
  g_18622DFE0 = 0;
  cached_call_result = call_result;
  if ( (_DWORD)call_result != -1 )
  {
    do
    {
      if ( state_word >= 1024 )
        break;
      if ( (offset_operand[0] & 0x10) == 0 )
      {
        text_cursor = (char *)offset_operand + 36;
        state_address = &dword_140404A6C[16 * (__int64)state_word + 293119326];
        do
        {
          input_byte = *text_cursor++;
          *(_BYTE *)state_address = input_byte;
          state_address = (unsigned int *)((char *)state_address + 1);
        }
        while ( input_byte );
        ++g_18622DFE0;
      }
      call_result_2 = sub_14023A5C4(cached_call_result, (__int64)offset_operand);
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
  iteration_count = 0;
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
      ++iteration_count;
      record_byte_offset += 16;
      *((_BYTE *)&g_18622DFE4 + scaled_index_2) = 0;
    }
    while ( iteration_count < (int)g_18622DFE0 );
  }
  chdir_result_2 = crt_chdir("data");
  saved_chdir_result = chdir_result_2;
  chdir_result = crt_chdir((unsigned int *)&g_183EBFAB0);
  element_index = 0;
  g_189F0EF48 = g_18622DFE0;
  saved_chdir_result_2 = chdir_result;
  if ( (int)g_18622DFE0 > 0 )
  {
    state_address_2 = &g_175FBB3E4;
    do
    {
      text_cursor_2 = (     char *)&dword_140404A6C[16 * (__int64)element_index + 293119326];
      asset_load_building_sbb_candidate((char *)&g_1AD2C94A0, text_cursor_2, 1);
      state_address_3 = &dword_140404A6C[22 * element_index + 225368653];
      scaled_index_3 = (char *)state_address_3 - text_cursor_2;
      do
      {
        input_byte_2 = *text_cursor_2;
        text_cursor_2[scaled_index_3] = *text_cursor_2;
        ++text_cursor_2;
      }
      while ( input_byte_2 );
      element_index_2 = 0;
      *(state_address_2 - 1) = g_1AD2C94E0;
      *state_address_2 = g_1AD2C94E4;
      state_address_2[1] = g_1AD2C94E8;
      state_address_2[2] = g_1AD2C94EC;
      state_address_2[3] = g_1AD2C94F0;
      state_address_2[4] = g_1AD2C94F4;
      state_word_2 = g_175EFB090;
      if ( (int)g_175EFB090 > 0 )
      {
        record_byte_offset_4 = &g_175EFB094;
        do
        {
          state_address_4 = &dword_140404A6C[24 * element_index_2 + 225171851];
          scaled_index_4 = (char *)state_address_3 - (char *)state_address_4;
          do
          {
            loaded_word = *((unsigned __int8 *)state_address_4 + scaled_index_4);
            loaded_word_2 = *(unsigned __int8 *)state_address_4 - loaded_word;
            if ( loaded_word_2 )
              break;
            state_address_4 = (unsigned int *)((char *)state_address_4 + 1);
          }
          while ( loaded_word );
          if ( !loaded_word_2 )
          {
            *record_byte_offset_4 = element_index;
            state_word_2 = g_175EFB090;
          }
          ++element_index_2;
          record_byte_offset_4 += 24;
        }
        while ( element_index_2 < state_word_2 );
      }
      ++element_index;
      state_address_2 += 22;
    }
    while ( element_index < (int)g_18622DFE0 );
    saved_chdir_result = chdir_result_2;
  }
  if ( !saved_chdir_result_2 )
    crt_chdir("..");
  if ( !saved_chdir_result )
    crt_chdir("..");
  return; /* native catalog callers discard the compiler cookie result */
}
#undef unused_frame_slot_0
#undef chdir_result_2
#undef scratch_buffer
#undef unused_frame_slot_1376

//----- (000000014013F590) ----------------------------------------------------
double            sub_14013F590(int a1, int a2)
{
  __int64 lookup_index;
  __int64 record_word_offset;
  __int64 lookup_index_2;
  __int64 cached_mesh_vertex_count;
  __int64 masked_bits;
  char *state_address;
  char *state_address_2;
  __int64 record_byte_offset;
  __int64 record_byte_offset_2;
  char *state_address_3;
  char *state_address_4;
  unsigned __int64 remaining_count;
  __int64 masked_bits_2;
  __int64 masked_bits_3;
  unsigned int *state_address_5;
  __int64 record_byte_offset_3;
  __int64 masked_bits_4;
  __int64 record_byte_offset_4;
  __int64 remaining_count_2;
  unsigned int loaded_word;
  __int64 cached_mesh_triangle_count;
  __int64 masked_bits_5;
  unsigned int *record_byte_offset_5;
  unsigned int *record_byte_offset_6;
  unsigned __int64 remaining_count_3;
  __int64 scaled_index;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  __int64 scaled_index_5;
  __int64 scaled_index_6;
  __int64 scaled_index_7;
  __int64 scaled_index_8;
  __int64 scaled_index_9;
  unsigned int table_value;
  __int64 scaled_index_10;
  __int64 scaled_index_11;
  __int64 scaled_index_12;
  __int64 masked_bits_6;
  __int64 record_byte_offset_7;
  __int64 remaining_count_4;
  unsigned int *state_address_6;
  int loaded_word_2;
  __int64 scaled_index_13;
  __int64 loaded_word_3;
  __int64 loaded_word_4;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14013F590[80];
#define masked_bits_7 (*(__int64 (*))(void *)(sr_frame_14013F590 + 0)) /* [rsp+20h] */
#define scaled_index_14 (*(__int64 (*))(void *)(sr_frame_14013F590 + 8)) /* [rsp+28h] */
#define cached_mesh_triangle_count_2 (*(__int64 (*))(void *)(sr_frame_14013F590 + 16)) /* [rsp+30h] */
#define cached_mesh_vertex_count_2 (*(__int64 (*))(void *)(sr_frame_14013F590 + 48)) /* [rsp+50h] */
#define scaled_index_15 (*(__int64 (*))(void *)(sr_frame_14013F590 + 56)) /* [rsp+58h] */
#define masked_bits_8 (*(__int64 (*))(void *)(sr_frame_14013F590 + 72)) /* [rsp+68h] */

  lookup_index = 0;
  record_word_offset = 50LL * a1;
  mesh_triangle_count = 0;
  g_16AD03DB4 = 0;
  lookup_index_2 = 0;
  mesh_vertex_count = dword_140404A6C[record_word_offset + 272248222];
  cached_mesh_vertex_count = (int)mesh_vertex_count;
  cached_mesh_vertex_count_2 = (int)mesh_vertex_count;
  if ( (int)mesh_vertex_count < 4LL )
  {
    if ( (int)mesh_vertex_count <= 0 )
      goto LABEL_10;
    masked_bits_2 = *(_QWORD *)&dword_140404A6C[record_word_offset + 272248225];
    goto LABEL_8;
  }
  masked_bits = *(_QWORD *)&dword_140404A6C[record_word_offset + 272248223];
  state_address = (char *)(unsigned int *)&g_16A7DBDAC - masked_bits;
  masked_bits_8 = *(_QWORD *)&dword_140404A6C[record_word_offset + 272248225];
  state_address_2 = (char *)(unsigned int *)&g_16A7DBDA8 - masked_bits;
  record_byte_offset = masked_bits_8 + 20;
  record_byte_offset_2 = masked_bits + 20;
  state_address_3 = (char *)(unsigned int *)&g_16A7DBDB0 - masked_bits;
  state_address_4 = (char *)&g_16A80BD98 - masked_bits_8;
  remaining_count = ((unsigned __int64)((int)mesh_vertex_count - 4LL) >> 2) + 1;
  scaled_index_15 = 4 * remaining_count;
  do
  {
    record_byte_offset += 32;
    *(_DWORD *)&state_address_2[record_byte_offset_2 - 20] = *(_DWORD *)(record_byte_offset_2 - 20);
    *(_DWORD *)&state_address[record_byte_offset_2 - 20] = *(_DWORD *)(record_byte_offset_2 - 16);
    *(_DWORD *)&state_address_3[record_byte_offset_2 - 20] = *(_DWORD *)(record_byte_offset_2 - 12);
    record_byte_offset_2 += 48;
    *(unsigned int *)((char *)&g_16A80BD74 + record_byte_offset - masked_bits_8) = *(_DWORD *)(record_byte_offset - 52);
    *(_DWORD *)&state_address_4[record_byte_offset - 32] = *(_DWORD *)(record_byte_offset - 48);
    *(unsigned int *)((char *)&g_16A7DBD70 + record_byte_offset_2 - masked_bits) = *(_DWORD *)(record_byte_offset_2 - 56);
    *(unsigned int *)((char *)&g_16A7DBD74 + record_byte_offset_2 - masked_bits) = *(_DWORD *)(record_byte_offset_2 - 52);
    *(_DWORD *)&state_address_2[record_byte_offset_2 - 48] = *(_DWORD *)(record_byte_offset_2 - 48);
    *(unsigned int *)((char *)&g_16A80BD7C + record_byte_offset - masked_bits_8) = *(_DWORD *)(record_byte_offset - 44);
    *(unsigned int *)((char *)&g_16A80BD80 + record_byte_offset - masked_bits_8) = *(_DWORD *)(record_byte_offset - 40);
    *(_DWORD *)&state_address[record_byte_offset_2 - 48] = *(_DWORD *)(record_byte_offset_2 - 44);
    *(_DWORD *)&state_address_3[record_byte_offset_2 - 48] = *(_DWORD *)(record_byte_offset_2 - 40);
    *(unsigned int *)((char *)&g_16A7DBD84 + record_byte_offset_2 - masked_bits) = *(_DWORD *)(record_byte_offset_2 - 36);
    *(unsigned int *)((char *)&g_16A80BD84 + record_byte_offset - masked_bits_8) = *(_DWORD *)(record_byte_offset - 36);
    *(unsigned int *)((char *)&g_16A80BD88 + record_byte_offset - masked_bits_8) = *(_DWORD *)(record_byte_offset - 32);
    *(unsigned int *)((char *)&g_16A7DBD88 + record_byte_offset_2 - masked_bits) = *(_DWORD *)(record_byte_offset_2 - 32);
    *(unsigned int *)((char *)&g_16A7DBD8C + record_byte_offset_2 - masked_bits) = *(_DWORD *)(record_byte_offset_2 - 28);
    *(unsigned int *)((char *)&g_16A7DBD90 + record_byte_offset_2 - masked_bits) = *(_DWORD *)(record_byte_offset_2 - 24);
    *(unsigned int *)((char *)&g_16A80BD8C + record_byte_offset - masked_bits_8) = *(_DWORD *)(record_byte_offset - 28);
    *(unsigned int *)((char *)&g_16A80BD90 + record_byte_offset - masked_bits_8) = *(_DWORD *)(record_byte_offset - 24);
    state_address_4 = (char *)&g_16A80BD98 - masked_bits_8;
    --remaining_count;
  }
  while ( remaining_count );
  cached_mesh_vertex_count = cached_mesh_vertex_count_2;
  lookup_index_2 = scaled_index_15;
  lookup_index = 0;
  masked_bits_2 = masked_bits_8;
  if ( scaled_index_15 < cached_mesh_vertex_count_2 )
  {
LABEL_8:
    masked_bits_3 = *(_QWORD *)&dword_140404A6C[record_word_offset + 272248223];
    state_address_5 = &dword_140404A6C[3 * lookup_index_2 + 177167569];
    record_byte_offset_3 = masked_bits_3 + 4 * (3 * lookup_index_2 + 2);
    masked_bits_4 = masked_bits_3 - (_QWORD)(unsigned int *)&g_16A7DBDB0;
    record_byte_offset_4 = masked_bits_2 + 8 * lookup_index_2;
    remaining_count_2 = cached_mesh_vertex_count - lookup_index_2;
    do
    {
      record_byte_offset_4 += 8;
      *(state_address_5 - 2) = *(unsigned int *)((char *)state_address_5 + masked_bits_4);
      state_address_5 += 3;
      loaded_word = *(_DWORD *)(record_byte_offset_3 - 4);
      record_byte_offset_3 += 12;
      *(state_address_5 - 4) = loaded_word;
      *(state_address_5 - 3) = *(_DWORD *)(record_byte_offset_3 - 12);
      *(unsigned int *)((char *)&g_16A80BDA0 + record_byte_offset_4 - masked_bits_2) = *(_DWORD *)(record_byte_offset_4 - 8);
      *(unsigned int *)((char *)&g_16A80BDA4 + record_byte_offset_4 - masked_bits_2) = *(_DWORD *)(record_byte_offset_4 - 4);
      --remaining_count_2;
    }
    while ( remaining_count_2 );
  }
LABEL_10:
  mesh_triangle_count = dword_140404A6C[record_word_offset + 272248227];
  cached_mesh_triangle_count = (int)mesh_triangle_count;
  cached_mesh_triangle_count_2 = (int)mesh_triangle_count;
  if ( (int)mesh_triangle_count < 4LL )
  {
    if ( (int)mesh_triangle_count <= 0 )
      return sub_1401449C0(a2, 1);
    masked_bits_6 = *(_QWORD *)&dword_140404A6C[record_word_offset + 272248229];
    masked_bits_5 = *(_QWORD *)&dword_140404A6C[record_word_offset + 272248225];
    goto LABEL_17;
  }
  masked_bits_5 = *(_QWORD *)&dword_140404A6C[record_word_offset + 272248225];
  record_byte_offset_5 = &g_16AB13DBC;
  masked_bits_7 = *(_QWORD *)&dword_140404A6C[record_word_offset + 272248229];
  record_byte_offset_6 = (unsigned int *)(masked_bits_7 + 8);
  remaining_count_3 = ((unsigned __int64)((int)mesh_triangle_count - 4LL) >> 2) + 1;
  scaled_index_14 = 4 * remaining_count_3;
  do
  {
    *(unsigned int *)((char *)&g_16A91BDA4 + (_QWORD)record_byte_offset_6 - masked_bits_7) = *(record_byte_offset_6 - 2);
    scaled_index = (int)(2 * *(record_byte_offset_6 - 2));
    *(record_byte_offset_5 - 3) = *(_DWORD *)(masked_bits_5 + 4 * scaled_index);
    *(record_byte_offset_5 - 2) = *(_DWORD *)(masked_bits_5 + 4 * scaled_index + 4);
    *(unsigned int *)((char *)&mesh_triangle_count + (_QWORD)record_byte_offset_6 - masked_bits_7) = *(record_byte_offset_6 - 1);
    scaled_index_2 = (int)(2 * *(record_byte_offset_6 - 1));
    *(record_byte_offset_5 - 1) = *(_DWORD *)(masked_bits_5 + 4 * scaled_index_2);
    *record_byte_offset_5 = *(_DWORD *)(masked_bits_5 + 4 * scaled_index_2 + 4);
    *(unsigned int *)((char *)&g_16A91BDAC + (_QWORD)record_byte_offset_6 - masked_bits_7) = *record_byte_offset_6;
    scaled_index_3 = (int)(2 * *record_byte_offset_6);
    record_byte_offset_5[1] = *(_DWORD *)(masked_bits_5 + 4 * scaled_index_3);
    record_byte_offset_5[2] = *(_DWORD *)(masked_bits_5 + 4 * scaled_index_3 + 4);
    *(unsigned int *)((char *)&g_16A91BDB0 + (_QWORD)record_byte_offset_6 - masked_bits_7) = record_byte_offset_6[1];
    scaled_index_4 = (int)(2 * record_byte_offset_6[1]);
    record_byte_offset_5[3] = *(_DWORD *)(masked_bits_5 + 4 * scaled_index_4);
    record_byte_offset_5[4] = *(_DWORD *)(masked_bits_5 + 4 * scaled_index_4 + 4);
    *(unsigned int *)((char *)&g_16A91BDB4 + (_QWORD)record_byte_offset_6 - masked_bits_7) = record_byte_offset_6[2];
    scaled_index_5 = (int)(2 * record_byte_offset_6[2]);
    record_byte_offset_5[5] = *(_DWORD *)(masked_bits_5 + 4 * scaled_index_5);
    record_byte_offset_5[6] = *(_DWORD *)(masked_bits_5 + 4 * scaled_index_5 + 4);
    *(unsigned int *)((char *)&g_16A91BDB8 + (_QWORD)record_byte_offset_6 - masked_bits_7) = record_byte_offset_6[3];
    scaled_index_6 = (int)(2 * record_byte_offset_6[3]);
    record_byte_offset_5[7] = *(_DWORD *)(masked_bits_5 + 4 * scaled_index_6);
    record_byte_offset_5[8] = *(_DWORD *)(masked_bits_5 + 4 * scaled_index_6 + 4);
    *(unsigned int *)((char *)&g_16A91BDBC + (_QWORD)record_byte_offset_6 - masked_bits_7) = record_byte_offset_6[4];
    scaled_index_7 = (int)(2 * record_byte_offset_6[4]);
    record_byte_offset_5[9] = *(_DWORD *)(masked_bits_5 + 4 * scaled_index_7);
    record_byte_offset_5[10] = *(_DWORD *)(masked_bits_5 + 4 * scaled_index_7 + 4);
    *(unsigned int *)((char *)&g_16A91BDC0 + (_QWORD)record_byte_offset_6 - masked_bits_7) = record_byte_offset_6[5];
    scaled_index_8 = (int)(2 * record_byte_offset_6[5]);
    record_byte_offset_5[11] = *(_DWORD *)(masked_bits_5 + 4 * scaled_index_8);
    record_byte_offset_5[12] = *(_DWORD *)(masked_bits_5 + 4 * scaled_index_8 + 4);
    *(unsigned int *)((char *)&g_16A91BDC4 + (_QWORD)record_byte_offset_6 - masked_bits_7) = record_byte_offset_6[6];
    scaled_index_9 = (int)(2 * record_byte_offset_6[6]);
    record_byte_offset_5[13] = *(_DWORD *)(masked_bits_5 + 4 * scaled_index_9);
    record_byte_offset_5[14] = *(_DWORD *)(masked_bits_5 + 4 * scaled_index_9 + 4);
    table_value = record_byte_offset_6[7];
    record_byte_offset_5 += 24;
    record_byte_offset_6 += 12;
    *(unsigned int *)((char *)&g_16A91BD98 + (_QWORD)record_byte_offset_6 - masked_bits_7) = table_value;
    scaled_index_10 = (int)(2 * *(record_byte_offset_6 - 5));
    *(record_byte_offset_5 - 9) = *(_DWORD *)(masked_bits_5 + 4 * scaled_index_10);
    *(record_byte_offset_5 - 8) = *(_DWORD *)(masked_bits_5 + 4 * scaled_index_10 + 4);
    *(unsigned int *)((char *)&g_16A91BD9C + (_QWORD)record_byte_offset_6 - masked_bits_7) = *(record_byte_offset_6 - 4);
    scaled_index_11 = (int)(2 * *(record_byte_offset_6 - 4));
    *(record_byte_offset_5 - 7) = *(_DWORD *)(masked_bits_5 + 4 * scaled_index_11);
    *(record_byte_offset_5 - 6) = *(_DWORD *)(masked_bits_5 + 4 * scaled_index_11 + 4);
    *(unsigned int *)((char *)&g_16A91BDA0 + (_QWORD)record_byte_offset_6 - masked_bits_7) = *(record_byte_offset_6 - 3);
    scaled_index_12 = (int)(2 * *(record_byte_offset_6 - 3));
    *(record_byte_offset_5 - 5) = *(_DWORD *)(masked_bits_5 + 4 * scaled_index_12);
    *(record_byte_offset_5 - 4) = *(_DWORD *)(masked_bits_5 + 4 * scaled_index_12 + 4);
    --remaining_count_3;
  }
  while ( remaining_count_3 );
  cached_mesh_triangle_count = cached_mesh_triangle_count_2;
  lookup_index = scaled_index_14;
  masked_bits_6 = masked_bits_7;
  if ( scaled_index_14 < cached_mesh_triangle_count_2 )
  {
LABEL_17:
    record_byte_offset_7 = masked_bits_6 + 4 * (lookup_index + 2 * (lookup_index + 1));
    remaining_count_4 = cached_mesh_triangle_count - lookup_index;
    state_address_6 = &dword_140404A6C[6 * lookup_index + 178011348];
    do
    {
      state_address_6 += 6;
      *(unsigned int *)((char *)&g_16A91BDA4 + record_byte_offset_7 - masked_bits_6) = *(_DWORD *)(record_byte_offset_7 - 8);
      loaded_word_2 = *(_DWORD *)(record_byte_offset_7 - 8);
      record_byte_offset_7 += 12;
      scaled_index_13 = 2 * loaded_word_2;
      *(state_address_6 - 9) = *(_DWORD *)(masked_bits_5 + 4 * scaled_index_13);
      *(state_address_6 - 8) = *(_DWORD *)(masked_bits_5 + 4 * scaled_index_13 + 4);
      *(unsigned int *)((char *)&g_16A91BD9C + record_byte_offset_7 - masked_bits_6) = *(_DWORD *)(record_byte_offset_7 - 16);
      loaded_word_3 = 2 * *(_DWORD *)(record_byte_offset_7 - 16);
      *(state_address_6 - 7) = *(_DWORD *)(masked_bits_5 + 4 * loaded_word_3);
      *(state_address_6 - 6) = *(_DWORD *)(masked_bits_5 + 4 * loaded_word_3 + 4);
      *(unsigned int *)((char *)&g_16A91BDA0 + record_byte_offset_7 - masked_bits_6) = *(_DWORD *)(record_byte_offset_7 - 12);
      loaded_word_4 = 2 * *(_DWORD *)(record_byte_offset_7 - 12);
      *(state_address_6 - 5) = *(_DWORD *)(masked_bits_5 + 4 * loaded_word_4);
      *(state_address_6 - 4) = *(_DWORD *)(masked_bits_5 + 4 * loaded_word_4 + 4);
      --remaining_count_4;
    }
    while ( remaining_count_4 );
  }
  return sub_1401449C0(a2, 1);
}
#undef masked_bits_7
#undef scaled_index_14
#undef cached_mesh_triangle_count_2
#undef cached_mesh_vertex_count_2
#undef scaled_index_15
#undef masked_bits_8

//----- (000000014013FCD0) ----------------------------------------------------
double            sub_14013FCD0(int a1, int a2)
{
  __int64 running_total;
  __int64 record_word_offset;
  int input_value;
  __int64 lookup_index;
  __int64 cached_mesh_vertex_count;
  __int64 masked_bits;
  char *state_address;
  char *state_address_2;
  _DWORD *record_byte_offset;
  char *state_address_3;
  char *state_address_4;
  unsigned int *record_byte_offset_2;
  char *state_address_5;
  char *state_address_6;
  char *state_address_7;
  char *state_address_8;
  char *state_address_9;
  unsigned __int64 remaining_count;
  __int64 masked_bits_2;
  unsigned int *state_address_10;
  __int64 masked_bits_3;
  unsigned int *running_total_2;
  float *weighted_sum;
  __int64 masked_bits_4;
  __int64 remaining_count_2;
  float weighted_sum_2;
  float product_difference;
  float scaled_value;
  __int64 cached_mesh_triangle_count;
  __int64 masked_bits_5;
  __int64 masked_bits_6;
  unsigned int state_word;
  unsigned int state_word_2;
  unsigned int state_word_3;
  unsigned int *running_total_3;
  __int64 scaled_index;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  __int64 masked_bits_7;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14013FCD0[128];
#define cached_mesh_vertex_count_2 (*(__int64 (*))(void *)(sr_frame_14013FCD0 + 0)) /* [rsp+60h] */
#define scaled_index_4 (*(__int64 (*))(void *)(sr_frame_14013FCD0 + 8)) /* [rsp+68h] */
#define saved_record_word_offset (*(__int64 (*))(void *)(sr_frame_14013FCD0 + 16)) /* [rsp+70h] */
#define masked_bits_8 (*(__int64 (*))(void *)(sr_frame_14013FCD0 + 120)) /* [rsp+D8h] */

  running_total = 0;
  record_word_offset = 5072LL * a1;
  mesh_triangle_count = 0;
  input_value = a2;
  g_16AD03DB4 = 0;
  saved_record_word_offset = record_word_offset;
  lookup_index = 0;
  mesh_vertex_count = *(unsigned int *)((char *)&g_182A7F520 + record_word_offset);
  cached_mesh_vertex_count = (int)mesh_vertex_count;
  cached_mesh_vertex_count_2 = (int)mesh_vertex_count;
  if ( (int)mesh_vertex_count < 4LL )
  {
    if ( (int)mesh_vertex_count <= 0 )
      goto LABEL_18;
    masked_bits_2 = *(_QWORD *)((char *)&g_182A7F530 + record_word_offset);
    goto LABEL_14;
  }
  masked_bits = *(_QWORD *)((char *)&g_182A7F528 + record_word_offset);
  state_address = (char *)(unsigned int *)&g_16A7DBDAC - masked_bits;
  masked_bits_8 = *(_QWORD *)((char *)&g_182A7F530 + record_word_offset);
  state_address_2 = (char *)(unsigned int *)&g_16A7DBDB0 - masked_bits;
  record_byte_offset = (_DWORD *)(masked_bits + 20);
  state_address_3 = (char *)&g_16A7DBDA4 - masked_bits;
  state_address_4 = (char *)(unsigned int *)&g_16A7DBDB4 - masked_bits;
  record_byte_offset_2 = (unsigned int *)(masked_bits_8 + 20);
  state_address_5 = (char *)(unsigned int *)&g_16A7DBDC0 - masked_bits;
  state_address_6 = (char *)(unsigned int *)&g_16A7DBDBC - masked_bits;
  state_address_7 = (char *)(unsigned int *)&g_16A7DBDA8 - masked_bits;
  state_address_8 = (char *)&mesh_vertex_count - masked_bits;
  state_address_9 = (char *)(unsigned int *)&g_16A7DBDB8 - masked_bits;
  remaining_count = ((unsigned __int64)((int)mesh_vertex_count - 4LL) >> 2) + 1;
  scaled_index_4 = 4 * remaining_count;
  do
  {
    *(_DWORD *)&state_address_7[(_QWORD)record_byte_offset - 20] = *(record_byte_offset - 5);
    *(_DWORD *)((char *)record_byte_offset + (_QWORD)state_address - 20) = *(record_byte_offset - 4);
    *(_DWORD *)((char *)record_byte_offset + (_QWORD)state_address_2 - 20) = *(record_byte_offset - 3);
    if ( a1 == 45 )
    {
      *(float *)&state_address_7[(_QWORD)record_byte_offset - 20] = *(float *)&state_address_7[(_QWORD)record_byte_offset - 20] * 1.5;
      *(float *)((char *)record_byte_offset + (_QWORD)state_address - 20) = *(float *)((char *)record_byte_offset + (_QWORD)state_address - 20) * 1.5;
      *(float *)((char *)record_byte_offset + (_QWORD)state_address_2 - 20) = *(float *)((char *)record_byte_offset + (_QWORD)state_address_2 - 20) * 1.5;
    }
    *(unsigned int *)((char *)&g_16A80BD94 + (_QWORD)record_byte_offset_2 - masked_bits_8) = *(record_byte_offset_2 - 5);
    *(unsigned int *)((char *)&g_16A80BD98 + (_QWORD)record_byte_offset_2 - masked_bits_8) = *(record_byte_offset_2 - 4);
    *(_DWORD *)&state_address_8[(_QWORD)record_byte_offset] = *(record_byte_offset - 2);
    *(_DWORD *)((char *)record_byte_offset + (_QWORD)state_address_3) = *(record_byte_offset - 1);
    *(_DWORD *)((char *)record_byte_offset + (_QWORD)state_address_7) = *record_byte_offset;
    if ( a1 == 45 )
    {
      *(float *)&state_address_8[(_QWORD)record_byte_offset] = *(float *)&state_address_8[(_QWORD)record_byte_offset] * 1.5;
      *(float *)((char *)record_byte_offset + (_QWORD)state_address_3) = *(float *)((char *)record_byte_offset + (_QWORD)state_address_3) * 1.5;
      *(float *)((char *)record_byte_offset + (_QWORD)state_address_7) = *(float *)((char *)record_byte_offset + (_QWORD)state_address_7) * 1.5;
    }
    *(unsigned int *)((char *)&g_16A80BD9C + (_QWORD)record_byte_offset_2 - masked_bits_8) = *(record_byte_offset_2 - 3);
    *(unsigned int *)((char *)&g_16A80BDA0 + (_QWORD)record_byte_offset_2 - masked_bits_8) = *(record_byte_offset_2 - 2);
    *(_DWORD *)((char *)record_byte_offset + (_QWORD)state_address) = record_byte_offset[1];
    *(_DWORD *)((char *)record_byte_offset + (_QWORD)state_address_2) = record_byte_offset[2];
    *(_DWORD *)((char *)record_byte_offset + (_QWORD)state_address_4) = record_byte_offset[3];
    if ( a1 == 45 )
    {
      *(float *)((char *)record_byte_offset + (_QWORD)state_address) = *(float *)((char *)record_byte_offset + (_QWORD)state_address) * 1.5;
      *(float *)((char *)record_byte_offset + (_QWORD)state_address_2) = *(float *)((char *)record_byte_offset + (_QWORD)state_address_2) * 1.5;
      *(float *)((char *)record_byte_offset + (_QWORD)state_address_4) = *(float *)((char *)record_byte_offset + (_QWORD)state_address_4) * 1.5;
    }
    *(unsigned int *)((char *)&g_16A80BDA4 + (_QWORD)record_byte_offset_2 - masked_bits_8) = *(record_byte_offset_2 - 1);
    *(unsigned int *)((char *)&g_16A80BDA8 + (_QWORD)record_byte_offset_2 - masked_bits_8) = *record_byte_offset_2;
    *(_DWORD *)&state_address_9[(_QWORD)record_byte_offset] = record_byte_offset[4];
    *(_DWORD *)&state_address_6[(_QWORD)record_byte_offset] = record_byte_offset[5];
    *(_DWORD *)&state_address_5[(_QWORD)record_byte_offset] = record_byte_offset[6];
    if ( a1 == 45 )
    {
      *(float *)&state_address_9[(_QWORD)record_byte_offset] = *(float *)&state_address_9[(_QWORD)record_byte_offset] * 1.5;
      *(float *)&state_address_6[(_QWORD)record_byte_offset] = *(float *)&state_address_6[(_QWORD)record_byte_offset] * 1.5;
      *(float *)&state_address_5[(_QWORD)record_byte_offset] = *(float *)&state_address_5[(_QWORD)record_byte_offset] * 1.5;
    }
    record_byte_offset += 12;
    *(unsigned int *)((char *)&g_16A80BDAC + (_QWORD)record_byte_offset_2 - masked_bits_8) = record_byte_offset_2[1];
    *(unsigned int *)((char *)&g_16A80BDB0 + (_QWORD)record_byte_offset_2 - masked_bits_8) = record_byte_offset_2[2];
    record_byte_offset_2 += 8;
    --remaining_count;
  }
  while ( remaining_count );
  cached_mesh_vertex_count = cached_mesh_vertex_count_2;
  lookup_index = scaled_index_4;
  running_total = 0;
  input_value = a2;
  record_word_offset = saved_record_word_offset;
  if ( scaled_index_4 < cached_mesh_vertex_count_2 )
  {
    masked_bits_2 = masked_bits_8;
LABEL_14:
    state_address_10 = &dword_140404A6C[3 * lookup_index + 177167569];
    masked_bits_3 = *(_QWORD *)((char *)&g_182A7F528 + record_word_offset);
    running_total_2 = (unsigned int *)(masked_bits_2 + 8 * lookup_index);
    weighted_sum = (float *)(masked_bits_3 + 4 * (3 * lookup_index + 2));
    masked_bits_4 = masked_bits_3 - (_QWORD)(unsigned int *)&g_16A7DBDB0;
    remaining_count_2 = cached_mesh_vertex_count - lookup_index;
    do
    {
      weighted_sum_2 = *(float *)((char *)state_address_10 + masked_bits_4);
      *((float *)state_address_10 - 2) = weighted_sum_2;
      product_difference = *(weighted_sum - 1);
      *((float *)state_address_10 - 1) = product_difference;
      scaled_value = *weighted_sum;
      *state_address_10 = *(_DWORD *)weighted_sum;
      if ( a1 == 45 )
      {
        *((float *)state_address_10 - 2) = weighted_sum_2 * 1.5;
        *((float *)state_address_10 - 1) = product_difference * 1.5;
        *(float *)state_address_10 = scaled_value * 1.5;
      }
      weighted_sum += 3;
      *(unsigned int *)((char *)&g_16A80BDA8 + (_QWORD)running_total_2 - masked_bits_2) = *running_total_2;
      state_address_10 += 3;
      *(unsigned int *)((char *)&g_16A80BDAC + (_QWORD)running_total_2 - masked_bits_2) = running_total_2[1];
      running_total_2 += 2;
      --remaining_count_2;
    }
    while ( remaining_count_2 );
  }
LABEL_18:
  mesh_triangle_count = *(unsigned int *)((char *)&g_182A7F538 + record_word_offset);
  cached_mesh_triangle_count = (int)mesh_triangle_count;
  if ( (int)mesh_triangle_count > 0 )
  {
    masked_bits_5 = *(_QWORD *)((char *)&g_182A7F540 + record_word_offset);
    masked_bits_6 = *(_QWORD *)((char *)&g_182A7F530 + record_word_offset);
    state_word = g_183EBB760;
    state_word_2 = g_183EBB770;
    state_word_3 = g_183EBB764;
    running_total_3 = (unsigned int *)(masked_bits_5 + 8);
    do
    {
      *(unsigned int *)((char *)running_total_3 + (_QWORD)&g_16A91BDA4 - masked_bits_5) = *(running_total_3 - 2);
      scaled_index = (int)(2 * *(running_total_3 - 2));
      dword_140404A6C[running_total + 178011345] = *(_DWORD *)(masked_bits_6 + 4 * scaled_index);
      dword_140404A6C[running_total + 178011346] = *(_DWORD *)(masked_bits_6 + 4 * scaled_index + 4);
      *(unsigned int *)((char *)running_total_3 + (_QWORD)&mesh_triangle_count - masked_bits_5) = *(running_total_3 - 1);
      scaled_index_2 = (int)(2 * *(running_total_3 - 1));
      dword_140404A6C[running_total + 178011347] = *(_DWORD *)(masked_bits_6 + 4 * scaled_index_2);
      dword_140404A6C[running_total + 178011348] = *(_DWORD *)(masked_bits_6 + 4 * scaled_index_2 + 4);
      *(unsigned int *)((char *)running_total_3 + (_QWORD)&g_16A91BDAC - masked_bits_5) = *running_total_3;
      scaled_index_3 = (int)(2 * *running_total_3);
      dword_140404A6C[running_total + 178011349] = *(_DWORD *)(masked_bits_6 + 4 * scaled_index_3);
      dword_140404A6C[running_total + 178011350] = *(_DWORD *)(masked_bits_6 + 4 * scaled_index_3 + 4);
      if ( input_value == state_word || input_value == state_word_3 )
      {
        masked_bits_7 = *(_QWORD *)((char *)&g_182A7F548 + record_word_offset);
        dword_140404A6C[running_total + 178011345] = *(_DWORD *)(masked_bits_7 + running_total * 4);
        dword_140404A6C[running_total + 178011346] = *(_DWORD *)(masked_bits_7 + running_total * 4 + 4);
        dword_140404A6C[running_total + 178011347] = *(_DWORD *)(masked_bits_7 + running_total * 4 + 8);
        dword_140404A6C[running_total + 178011348] = *(_DWORD *)(masked_bits_7 + running_total * 4 + 12);
        dword_140404A6C[running_total + 178011349] = *(_DWORD *)(masked_bits_7 + running_total * 4 + 16);
        dword_140404A6C[running_total + 178011350] = *(_DWORD *)(masked_bits_7 + running_total * 4 + 20);
      }
      if ( input_value == state_word_2 )
      {
        dword_140404A6C[running_total + 178011345] = 1035993088;
        dword_140404A6C[running_total + 178011346] = 1063780352;
        dword_140404A6C[running_total + 178011347] = 1035993088;
        dword_140404A6C[running_total + 178011348] = 1063780352;
        dword_140404A6C[running_total + 178011349] = 1035993088;
        dword_140404A6C[running_total + 178011350] = 1063780352;
      }
      running_total_3 += 3;
      running_total += 6;
      --cached_mesh_triangle_count;
    }
    while ( cached_mesh_triangle_count );
  }
  return sub_1401449C0(input_value, 1);
}
#undef cached_mesh_vertex_count_2
#undef scaled_index_4
#undef saved_record_word_offset
#undef masked_bits_8
